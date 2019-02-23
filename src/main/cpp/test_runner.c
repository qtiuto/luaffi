#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>
#include <signal.h>
#include <setjmp.h>

static int msghandler(lua_State *L) {
    const char *msg = lua_tostring(L, 1);
    if (msg == NULL) {  /* is error object not a string? */
        if (luaL_callmeta(L, 1, "__tostring") &&  /* does it have a metamethod */
            lua_type(L, -1) == LUA_TSTRING)  /* that produces a string? */
            return 1;  /* that is the message */
        else
            msg = lua_pushfstring(L, "(error object is a %s value)",
                                  luaL_typename(L, 1));
    }
    luaL_traceback(L, L, msg, 1);  /* append a standard traceback */
    return 1;  /* return the traceback */
}
static lua_State* L;
static jmp_buf  j;
static void hd(int s) {
    lua_Debug ar;
    lua_getstack(L, 1, &ar);
    lua_getinfo(L, "l", &ar);
    fprintf(stderr,"Crash on line %d\n",ar.currentline);
    fflush(stderr);
    longjmp(j,1);
}
int main(int argc,char** argv){
    L=luaL_newstate();
    luaL_openlibs(L);
    if(setjmp(j)){
        return  1;
    }
    signal(SIGSEGV,hd);
    signal(SIGABRT,hd);
    lua_pushcfunction(L,msghandler);
    luaL_loadfile(L,argv[1]);
    int status=lua_pcall(L,0,0,-2);
    if(status!=0){
        fprintf(stderr,"%s\n",lua_tostring(L,-1));
        fflush(stderr);
        return 1;
    }
    printf("Executed\n");
    lua_close(L);
    return 0;
}
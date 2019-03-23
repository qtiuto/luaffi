#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>
#include <signal.h>
#include <setjmp.h>
#include <string.h>
#include <malloc.h>
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#ifdef _WIN32
#include <Windows.h>
#endif // _WIN32


#if LUA_VERSION_NUM<502
static int lastlevel(lua_State *L) {
	lua_Debug ar;
	int li = 1, le = 1;
	/* find an upper bound */
	while (lua_getstack(L, le, &ar)) {
		li = le;
		le *= 2;
	}
	/* do a binary search */
	while (li < le) {
		int m = (li + le) / 2;
		if (lua_getstack(L, m, &ar)) li = m + 1;
		else le = m;
	}
	return le - 1;
}
static void luaL_traceback(lua_State *L, lua_State *L1,
	const char *msg, int level) {
	lua_Debug ar;
	int top = lua_gettop(L);
	int last = lastlevel(L1);
	int n1 = (last - level > 10 + 11) ? 10 : -1;
	if (msg)
		lua_pushfstring(L, "%s\n", msg);
	luaL_checkstack(L, 10, NULL);
	lua_pushliteral(L, "stack traceback:");
	while (lua_getstack(L1, level++, &ar)) {
		if (n1-- == 0) {  /* too many levels? */
			lua_pushliteral(L, "\n\t...");  /* add a '...' */
			level = last - 11 + 1;  /* and skip to last ones */
		}
		else {
			lua_getinfo(L1, "Slnt", &ar);
			lua_pushfstring(L, "\n\t%s:", ar.short_src);
			if (ar.currentline > 0)
				lua_pushfstring(L, "%d:", ar.currentline);
			lua_concat(L, lua_gettop(L) - top);
		}
	}
	lua_concat(L, lua_gettop(L) - top);
}
#endif
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
	lua_getglobal(L, "io");
	lua_getfield(L, -1, "stdout");
	FILE* f=*(FILE**)lua_touserdata(L, -1);
	FILE* f1 = stdout;
	fprintf(f, "ggdgd");
	lua_pop(L, 2);
    lua_pushcfunction(L,msghandler);
    luaL_loadfile(L,argv[1]);
	assert(lua_isfunction(L, -1));
	int status =  lua_pcall(L, 0, 0, -2);
    if(status!=0){
        fprintf(stderr,"%s\n",lua_tostring(L,-1));
        fflush(stderr);
        return 1;
    }
    printf("Executed\n");
    lua_close(L);
    return 0;
}
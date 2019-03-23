/*
** This file has been pre-processed with DynASM.
** http://luajit.org/dynasm.html
** DynASM version 1.4.0, DynASM x64 version 1.4.0
** DO NOT EDIT! The original file is in "call_x86.dasc".
*/

/* vim: ts=4 sw=4 sts=4 et tw=78
 * Portions copyright (c) 2015-present, Facebook, Inc. All rights reserved.
 * Portions copyright (c) 2011 James R. McKaskill.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */
#if DASM_VERSION != 10400
#error "Version mismatch between DynASM and included encoding engine"
#endif

static const unsigned char build_actionlist[1922] = {
  72.0,199.0,194.0,237,76.0,137.0,225.0,232,251,1,0,72.0,199.0,194.0,252,254.0,
  252,255.0,252,255.0,252,255.0,76.0,137.0,225.0,232,251,1,1,255,72.0,139.0,
  141.0,233,255,72.0,137.0,132.0,253,36.0,233,255,221.0,133.0,233,255,217.0,
  133.0,233,255,252,243.0,15.0,126.0,133.0,233,255,252,243.0,15.0,90.0,133.0,
  233,255,221.0,156.0,253,36.0,233,255,217.0,156.0,253,36.0,233,255,102.0,15.0,
  214.0,132.0,253,36.0,233,255,252,242.0,15.0,90.0,192.0,102.0,15.0,214.0,132.0,
  253,36.0,233,255,252,242.0,15.0,90.0,192.0,102.0,15.0,126.0,132.0,253,36.0,
  233,255,85,72.0,137.0,229.0,65.0,84,72.0,129.0,252,236.0,239,72.0,137.0,77.0,
  16,72.0,137.0,85.0,24,76.0,137.0,69.0,32,76.0,137.0,77.0,40,102.0,15.0,214.0,
  69.0,252,240,102.0,15.0,214.0,77.0,232,102.0,15.0,214.0,85.0,224,102.0,15.0,
  214.0,93.0,216,255,73.0,188.0,237,237,255,73.0,199.0,192.0,237,72.0,199.0,
  194.0,237,76.0,137.0,225.0,232,251,1,2,255,73.0,199.0,192.0,237,72.0,199.0,
  194.0,252,255.0,252,255.0,252,255.0,252,255.0,76.0,137.0,225.0,232,251,1,
  2,255,73.0,199.0,192.0,237,72.0,199.0,194.0,237,76.0,137.0,225.0,232,251,
  1,2,73.0,184.0,237,237,72.0,199.0,194.0,252,255.0,252,255.0,252,255.0,252,
  255.0,76.0,137.0,225.0,232,251,1,3,255,72.0,137.0,8.0,72.0,199.0,194.0,252,
  254.0,252,255.0,252,255.0,252,255.0,76.0,137.0,225.0,232,251,1,4,255,73.0,
  137.0,193.0,255,73.0,199.0,192.0,237,72.0,137.0,202.0,76.0,137.0,201.0,232,
  251,1,5,255,72.0,137.0,8.0,255,72.0,137.0,202.0,76.0,137.0,225.0,232,251,
  1,6,255,73.0,184.0,237,237,72.0,199.0,194.0,0.0,0.0,0.0,0.0,76.0,137.0,225.0,
  232,251,1,3,255,72.0,139.0,17.0,72.0,137.0,16.0,72.0,139.0,81.0,8,72.0,137.0,
  80.0,8,255,252,243.0,15.0,126.0,200.0,76.0,137.0,225.0,232,251,1,7,255,15.0,
  182.0,201.0,72.0,137.0,202.0,76.0,137.0,225.0,232,251,1,8,255,15.0,182.0,
  201.0,255,15.0,190.0,201.0,255,72.0,137.0,202.0,76.0,137.0,225.0,232,251,
  1,9,255,15.0,183.0,201.0,255,15.0,191.0,201.0,255,72.0,137.0,202.0,76.0,137.0,
  225.0,232,251,1,10,255,73.0,199.0,192.0,237,72.0,199.0,194.0,237,76.0,137.0,
  225.0,232,251,1,11,255,73.0,199.0,192.0,237,72.0,199.0,194.0,252,254.0,252,
  255.0,252,255.0,252,255.0,76.0,137.0,225.0,232,251,1,2,73.0,185.0,237,237,
  73.0,199.0,192.0,252,255.0,252,255.0,252,255.0,252,255.0,72.0,199.0,194.0,
  252,254.0,252,255.0,252,255.0,252,255.0,76.0,137.0,225.0,232,251,1,12,72.0,
  137.0,68.0,36.0,32,72.0,199.0,194.0,252,252.0,252,255.0,252,255.0,252,255.0,
  76.0,137.0,225.0,232,251,1,13,72.0,139.0,68.0,36.0,32,255,73.0,199.0,192.0,
  237,72.0,199.0,194.0,252,254.0,252,255.0,252,255.0,252,255.0,76.0,137.0,225.0,
  232,251,1,2,73.0,185.0,237,237,73.0,199.0,192.0,252,255.0,252,255.0,252,255.0,
  252,255.0,72.0,199.0,194.0,252,254.0,252,255.0,252,255.0,252,255.0,76.0,137.0,
  225.0,232,251,1,14,137.0,68.0,36.0,32,72.0,199.0,194.0,252,252.0,252,255.0,
  252,255.0,252,255.0,76.0,137.0,225.0,232,251,1,13,139.0,68.0,36.0,32,255,
  72.0,199.0,194.0,252,254.0,252,255.0,252,255.0,252,255.0,76.0,137.0,225.0,
  232,251,1,13,255,72.0,199.0,194.0,252,255.0,252,255.0,252,255.0,252,255.0,
  76.0,137.0,225.0,232,251,1,15,255,72.0,199.0,194.0,252,255.0,252,255.0,252,
  255.0,252,255.0,76.0,137.0,225.0,232,251,1,16,255,137.0,68.0,36.0,32,72.0,
  199.0,194.0,252,253.0,252,255.0,252,255.0,252,255.0,76.0,137.0,225.0,232,
  251,1,13,139.0,68.0,36.0,32,255,72.0,199.0,194.0,252,255.0,252,255.0,252,
  255.0,252,255.0,76.0,137.0,225.0,232,251,1,17,255,72.0,199.0,194.0,252,255.0,
  252,255.0,252,255.0,252,255.0,76.0,137.0,225.0,232,251,1,18,255,72.0,137.0,
  68.0,36.0,32,72.0,199.0,194.0,252,253.0,252,255.0,252,255.0,252,255.0,76.0,
  137.0,225.0,232,251,1,13,72.0,139.0,68.0,36.0,32,255,72.0,199.0,194.0,252,
  255.0,252,255.0,252,255.0,252,255.0,76.0,137.0,225.0,232,251,1,19,72.0,137.0,
  68.0,36.0,32,72.0,199.0,194.0,252,253.0,252,255.0,252,255.0,252,255.0,76.0,
  137.0,225.0,232,251,1,13,72.0,139.0,68.0,36.0,32,255,72.0,199.0,194.0,252,
  255.0,252,255.0,252,255.0,252,255.0,76.0,137.0,225.0,232,251,1,20,102.0,15.0,
  214.0,68.0,36.0,32,72.0,199.0,194.0,252,253.0,252,255.0,252,255.0,252,255.0,
  76.0,137.0,225.0,232,251,1,13,255,252,242.0,15.0,90.0,68.0,36.0,32,255,252,
  243.0,15.0,126.0,68.0,36.0,32,255,73.0,199.0,192.0,237,72.0,199.0,194.0,252,
  254.0,252,255.0,252,255.0,252,255.0,76.0,137.0,225.0,232,251,1,2,73.0,185.0,
  237,237,73.0,199.0,192.0,252,255.0,252,255.0,252,255.0,252,255.0,72.0,199.0,
  194.0,252,254.0,252,255.0,252,255.0,252,255.0,76.0,137.0,225.0,232,251,1,
  21,72.0,137.0,68.0,36.0,32,72.0,199.0,194.0,252,253.0,252,255.0,252,255.0,
  252,255.0,76.0,137.0,225.0,232,251,1,13,72.0,139.0,68.0,36.0,32,255,72.0,
  139.0,0.0,255,252,243.0,15.0,126.0,0.0,255,252,243.0,15.0,126.0,0.0,252,243.0,
  15.0,126.0,72.0,8,255,72.0,137.0,194.0,72.0,139.0,0.0,72.0,139.0,82.0,8,255,
  137.0,194.0,139.0,0.0,139.0,82.0,4,255,72.0,141.0,141.0,233,73.0,199.0,192.0,
  237,72.0,137.0,194.0,72.0,137.0,201.0,232,251,1,5,72.0,141.0,133.0,233,255,
  72.0,199.0,194.0,252,255.0,252,255.0,252,255.0,252,255.0,76.0,137.0,225.0,
  232,251,1,22,72.0,137.0,68.0,36.0,32,72.0,199.0,194.0,252,253.0,252,255.0,
  252,255.0,252,255.0,76.0,137.0,225.0,232,251,1,13,72.0,139.0,68.0,36.0,32,
  255,72.0,139.0,141.0,233,76.0,137.0,226.0,73.0,199.0,192.0,252,255.0,252,
  255.0,252,255.0,252,255.0,232,251,1,23,72.0,139.0,133.0,233,255,76.0,139.0,
  101.0,252,248,72.0,137.0,252,236.0,93,194,236,255,85,72.0,137.0,229.0,65.0,
  84,65.0,85,73.0,137.0,204.0,255,72.0,131.0,252,236.0,32,76.0,137.0,225.0,
  232,251,1,24,73.0,137.0,197.0,72.0,129.0,252,248.0,239,15.0,141.0,244,247.0,
  102,184,0.0,0.0,72.0,186.0,237,237,76.0,137.0,225.0,232,251,1,25,248,1,72.0,
  193.0,224.0,4,72.0,41.0,196.0,255,72.0,129.0,252,236.0,239,255,73.0,184.0,
  237,237,72.0,199.0,194.0,0.0,0.0,0.0,0.0,76.0,137.0,225.0,232,251,1,3,72.0,
  131.0,252,236.0,16,255,73.0,185.0,237,237,73.0,199.0,192.0,237,72.0,199.0,
  194.0,237,76.0,137.0,225.0,232,251,1,12,255,73.0,185.0,237,237,73.0,199.0,
  192.0,237,72.0,199.0,194.0,237,76.0,137.0,225.0,232,251,1,26,255,73.0,185.0,
  237,237,73.0,199.0,192.0,237,72.0,199.0,194.0,237,76.0,137.0,225.0,232,251,
  1,14,255,72.0,199.0,194.0,237,76.0,137.0,225.0,232,251,1,16,255,15.0,182.0,
  192.0,255,15.0,190.0,192.0,255,15.0,183.0,192.0,255,15.0,191.0,192.0,255,
  72.0,199.0,194.0,237,76.0,137.0,225.0,232,251,1,16,131.0,252,248.0,0,15.0,
  149.0,208.0,15.0,182.0,192.0,255,72.0,199.0,194.0,237,76.0,137.0,225.0,232,
  251,1,15,255,72.0,199.0,194.0,237,76.0,137.0,225.0,232,251,1,19,255,72.0,
  199.0,194.0,237,76.0,137.0,225.0,232,251,1,17,255,72.0,199.0,194.0,237,76.0,
  137.0,225.0,232,251,1,18,255,72.0,199.0,194.0,237,76.0,137.0,225.0,232,251,
  1,20,255,73.0,185.0,237,237,73.0,199.0,192.0,237,72.0,199.0,194.0,237,76.0,
  137.0,225.0,232,251,1,21,255,72.0,137.0,194.0,72.0,141.0,133.0,233,255,72.0,
  137.0,193.0,73.0,199.0,192.0,237,232,251,1,5,255,72.0,141.0,133.0,233,73.0,
  199.0,192.0,237,76.0,137.0,226.0,72.0,137.0,193.0,232,251,1,23,255,72.0,199.0,
  194.0,237,76.0,137.0,225.0,232,251,1,22,255,73.0,129.0,252,253.0,239,15.0,
  142.0,244,247.0,72.0,137.0,224.0,72.0,129.0,192.0,239,73.0,137.0,193.0,77.0,
  137.0,232.0,72.0,199.0,194.0,237,76.0,137.0,225.0,232,251,1,27,72.0,137.0,
  224.0,72.0,129.0,192.0,239,73.0,137.0,193.0,73.0,199.0,192.0,237,72.0,199.0,
  194.0,237,76.0,137.0,225.0,232,251,1,28,252,233,244,248.0,248,1,72.0,137.0,
  224.0,72.0,129.0,192.0,239,73.0,137.0,193.0,77.0,137.0,232.0,72.0,199.0,194.0,
  237,76.0,137.0,225.0,232,251,1,28,248,2,255,72.0,137.0,224.0,72.0,129.0,192.0,
  239,73.0,137.0,193.0,77.0,137.0,232.0,72.0,199.0,194.0,237,76.0,137.0,225.0,
  232,251,1,27,255,72.0,131.0,196.0,32,255,252,243.0,15.0,126.0,156.0,253,36.0,
  233,255,76.0,139.0,140.0,253,36.0,233,255,252,243.0,15.0,126.0,148.0,253,
  36.0,233,255,76.0,139.0,132.0,253,36.0,233,255,252,243.0,15.0,126.0,140.0,
  253,36.0,233,255,72.0,139.0,148.0,253,36.0,233,255,252,243.0,15.0,126.0,4.0,
  36.0,255,72.0,139.0,12.0,36.0,255,232,251,1,29,72.0,131.0,252,236.0,48,255,
  72.0,137.0,68.0,36.0,32,73.0,184.0,237,237,72.0,199.0,194.0,237,76.0,137.0,
  225.0,232,251,1,3,72.0,139.0,76.0,36.0,32,72.0,137.0,8.0,184,1.0,0.0,0.0,
  0.0,76.0,139.0,109.0,252,240,76.0,139.0,101.0,252,248,72.0,137.0,252,236.0,
  93,195,255,72.0,137.0,68.0,36.0,32,73.0,184.0,237,237,72.0,199.0,194.0,237,
  76.0,137.0,225.0,232,251,1,3,72.0,139.0,76.0,36.0,32,72.0,137.0,8.0,72.0,
  139.0,76.0,36.0,40,255,72.0,137.0,194.0,76.0,137.0,225.0,232,251,1,6,184,
  1.0,0.0,0.0,0.0,76.0,139.0,109.0,252,240,76.0,139.0,101.0,252,248,72.0,137.0,
  252,236.0,93,195,255,72.0,137.0,68.0,36.0,32,73.0,184.0,237,237,72.0,199.0,
  194.0,0.0,0.0,0.0,0.0,76.0,137.0,225.0,232,251,1,3,72.0,139.0,76.0,36.0,32,
  72.0,137.0,8.0,184,1.0,0.0,0.0,0.0,76.0,139.0,109.0,252,240,76.0,139.0,101.0,
  252,248,72.0,137.0,252,236.0,93,195,255,184,0.0,0.0,0.0,0.0,76.0,139.0,109.0,
  252,240,76.0,139.0,101.0,252,248,72.0,137.0,252,236.0,93,195,255,15.0,182.0,
  192.0,72.0,137.0,194.0,76.0,137.0,225.0,232,251,1,8,184,1.0,0.0,0.0,0.0,76.0,
  139.0,109.0,252,240,76.0,139.0,101.0,252,248,72.0,137.0,252,236.0,93,195,
  255,72.0,137.0,194.0,76.0,137.0,225.0,232,251,1,9,184,1.0,0.0,0.0,0.0,76.0,
  139.0,109.0,252,240,76.0,139.0,101.0,252,248,72.0,137.0,252,236.0,93,195,
  255,72.0,137.0,194.0,76.0,137.0,225.0,232,251,1,10,184,1.0,0.0,0.0,0.0,76.0,
  139.0,109.0,252,240,76.0,139.0,101.0,252,248,72.0,137.0,252,236.0,93,195,
  255,252,243.0,15.0,90.0,192.0,252,243.0,15.0,126.0,200.0,76.0,137.0,225.0,
  232,251,1,7,184,1.0,0.0,0.0,0.0,76.0,139.0,109.0,252,240,76.0,139.0,101.0,
  252,248,72.0,137.0,252,236.0,93,195,255
};

static const char *const globnames[] = {
  (const char *)0
};
static const char *const extnames[] = {
  "lua_pushvalue",
  "lua_setuservalue",
  "rawgeti",
  "push_cdata",
  "lua_remove",
  "memcpy",
  "lua_pushinteger",
  "lua_pushnumber",
  "lua_pushboolean",
  "push_int",
  "push_uint",
  "lua_call",
  "check_typed_pointer",
  "lua_settop",
  "check_enum",
  "check_uint32",
  "check_int32",
  "check_uint64",
  "check_int64",
  "check_uintptr",
  "check_double",
  "check_struct",
  "check_complex_float",
  "check_complex_double",
  "lua_gettop",
  "luaL_error",
  "check_typed_cfunction",
  "unpack_varargs_stack",
  "unpack_varargs_reg",
  "FUNCTION",
  (const char *)0
};
















#if defined _WIN64 || defined __amd64__
#define JUMP_SIZE 14
#else
#define JUMP_SIZE 4
#endif

#define MIN_BRANCH INT32_MIN
#define MAX_BRANCH INT32_MAX
#define BRANCH_OFF 4

static void compile_extern_jump(struct jit* jit, lua_State* L, cfunction func, uint8_t* code)
{
    /* The jump code is the function pointer followed by a stub to call the
     * function pointer. The stub exists in 64 bit so we can jump to functions
     * with an offset greater than 2 GB.
     *
     * Note we have to manually set this up since there are commands buffered
     * in the jit state and dynasm doesn't support rip relative addressing.
     *
     * eg on 64 bit:
     * 0-8: function ptr
     * 8-14: jmp aword [rip-14]
     *
     * for 32 bit we only set the function ptr as it can always fit in a 32
     * bit displacement
     */
#if defined _WIN64 || defined __amd64__
    *(cfunction*) code = func;
    code[8] = 0xFF; /* FF /4 operand for jmp */
    code[9] = 0x25; /* RIP displacement */
    *(int32_t*) &code[10] = -14;
#else
    *(cfunction*) code = func;
#endif
}

void compile_globals(struct jit* jit, lua_State* L)
{
    struct jit* Dst = jit;
    //int* perr = &jit->last_errno;
    dasm_setup(Dst, build_actionlist);

    /* Note: since the return code uses EBP to reset the stack pointer, we
     * don't have to track the amount of stack space used. It also means we
     * can handle stdcall and cdecl with the same code.
     */

    /* Note the various call_* functions want 32 bytes of 16 byte aligned
     * stack
     */



    compile(Dst, L, NULL, LUA_NOREF);
}


#ifdef _WIN64
#define MAX_REGISTERS(ct) 4 /* rcx, rdx, r8, r9 */

#elif defined __amd64__
#define MAX_INT_REGISTERS(ct) 6 /* rdi, rsi, rdx, rcx, r8, r9 */
#define MAX_FLOAT_REGISTERS(ct) 8 /* xmm0-7 */

#else
#define MAX_INT_REGISTERS(ct) ((ct)->calling_convention == FAST_CALL ? 2 /* ecx, edx */ : 0)
#define MAX_FLOAT_REGISTERS(ct) 0
#endif

#if defined(_WIN64)||defined(__amd64__)
#define X64 1
#else
#define X64 0
#endif

struct reg_alloc {
#ifdef _WIN64
    int regs;
    int is_float[4];
    int is_int[4];
#else
    int floats;
    int ints;
#endif
    int off;
};

#ifdef _WIN64
#define REGISTER_STACK_SPACE(ct) (4*8)
#elif defined __amd64__
#define REGISTER_STACK_SPACE(ct) (14*8)
#else
#define REGISTER_STACK_SPACE(ct) ALIGN_UP(((ct)->calling_convention == FAST_CALL ? 2*4 : 0), 15)
#endif
#if defined __amd64__
// float struct is passed by xmm0-xmm7
static int float_reg_size(lua_State* L,int idx, const struct ctype* ct){
	struct ctype* mt;
	int i,ct_usr;
	if(ct->base_size>16){
        return 0;
    }
    lua_getuservalue(L,idx);
	ct_usr=lua_absindex(L,-1);
    for (i = 1;; ++i) {
        lua_rawgeti(L,ct_usr,i);
		if(lua_isnil(L,-1)){
            lua_pop(L,1);
            break;
        }
        mt=(struct ctype*)lua_touserdata(L,-1);
        if((mt->pointers&&!mt->is_array)||mt->is_reference||
			!(mt->type==FLOAT_TYPE||mt->type==DOUBLE_TYPE||((mt->type==STRUCT_TYPE||mt->type==UNION_TYPE)&&float_reg_size(L,-1,mt)))){
            lua_pop(L,2);
            return 0;
        }
        lua_pop(L,1);
    }
	
	lua_pop(L,1);
    return (ct->base_size+7)>>3;
}
#endif

static int return_by_address(const struct ctype* mbr_ct){
	
	if(mbr_ct->is_reference|| mbr_ct->pointers) return 0;
#ifdef _WIN64
	return mbr_ct->base_size!=8&&mbr_ct->base_size!=2&&mbr_ct->base_size!=1&&mbr_ct->base_size!=4&& mbr_ct->base_size != 0;;
#elif defined __amd64__
	return mbr_ct->base_size>16;
#else
	if(mbr_ct->base_size>8) return 1;
	if(mbr_ct->type==STRUCT_TYPE||mbr_ct->type==UNION_TYPE){
		#if defined _WIN32
		return 0;
		#else
		return 1;	
		#endif	
	}
	return 0;
#endif	
}

int x86_return_size(lua_State* L, int usr, const struct ctype* ct)
{
    int ret = 0;
    const struct ctype* mt;

    if (ct->calling_convention != C_CALL) {
        size_t i;
        size_t argn = lua_rawlen(L, usr);
        for (i = 1; i <= argn; i++) {
            lua_rawgeti(L, usr, (int) i);
            mt = (const struct ctype*) lua_touserdata(L, -1);

            if (mt->pointers || mt->is_reference) {
                ret += sizeof(void*);
            } else {
                switch (mt->type) {
                case DOUBLE_TYPE:
                case COMPLEX_FLOAT_TYPE:
                case INT64_TYPE:
                    ret += 8;
                    break;
                case COMPLEX_DOUBLE_TYPE:
                    ret += 16;
                    break;
                case INTPTR_TYPE:
                    ret += sizeof(intptr_t);
                    break;
                case FUNCTION_PTR_TYPE:
                    ret += sizeof(cfunction);
                    break;
                case BOOL_TYPE:
                case FLOAT_TYPE:
                case INT8_TYPE:
                case INT16_TYPE:
                case INT32_TYPE:
                case ENUM_TYPE:
                    ret += 4;
                    break;
				case STRUCT_TYPE:
				case UNION_TYPE:
					ret +=ALIGN_UP(mt->base_size,3);
					break; 
                default:
                    return luaL_error(L, "NYI - argument type");
                }
            }

            lua_pop(L, 1);
        }
    }

#if !defined _WIN64 && !defined __amd64__
    lua_rawgeti(L, usr, 0);
    mt = (const struct ctype*) lua_touserdata(L, -1);
    if (return_by_address(mt)) {
        ret += sizeof(void*);
    }
    lua_pop(L, 1);
#endif

    return ret;
}

static void fix_usr_value(Dst_DECL,lua_State* L, int num_upvals){
	if(!lua_isnil(L,-1)){
		dasm_put(Dst, 0, lua_upvalueindex(num_upvals));
	}
}

/* Fastcall:
 * Uses ecx, edx as first two int registers
 * Everything else on stack (include 64bit ints)
 * No overflow stack space
 * Pops the stack before returning
 * Returns int in eax, float in ST0
 * We use the same register allocation logic as posix x64 with 2 int regs and 0 float regs
 */

static void get_int(Dst_DECL, const struct ctype* ct, struct reg_alloc* reg, int is_int64)
{
    /* grab the register from the shadow space */
#ifdef _WIN64
    if (reg->regs < MAX_REGISTERS(ct)) {
        dasm_put(Dst, 30, 16 + 8*reg->regs);
        reg->regs++;
    }
#elif __amd64__
    if (reg->ints < MAX_INT_REGISTERS(ct)) {
        dasm_put(Dst, 30, - 80 - 8*reg->ints);
        reg->ints++;
    }
#else
    if (!is_int64 && reg->ints < MAX_INT_REGISTERS(ct)) {
        dasm_put(Dst, 31, - 8 - 4*reg->ints);
        reg->ints++;
    }
#endif
    else {
#if X64
        if (reg->off &7) {
            reg->off = ALIGN_UP(reg->off,7);
        }
#endif
        if (is_int64) {
            dasm_put(Dst, 30, reg->off);
            reg->off += 8;
        } else {
            dasm_put(Dst, 31, reg->off);
            reg->off += 4;
        }
    }
}

static void add_int(Dst_DECL, const struct ctype* ct, struct reg_alloc* reg, int is_int64)
{
#ifdef _WIN64
    if (reg->regs < MAX_REGISTERS(ct)) {
        dasm_put(Dst, 35, 32 + 8*(reg->regs));
        reg->is_int[reg->regs++] = 1;
    }
#elif __amd64__
    if (reg->ints < MAX_INT_REGISTERS(ct)) {
        dasm_put(Dst, 35, 32 + 8*reg->ints);
        reg->ints++;
    }
#else
    if (!is_int64 && reg->ints < MAX_INT_REGISTERS(ct)) {
        dasm_put(Dst, 35, 32 + 4*reg->ints);
        reg->ints++;
    }
#endif
    else {
#if X64
        if (reg->off &7) {
            reg->off = ALIGN_UP(reg->off,7);
        }
#endif
        if (is_int64) {
            dasm_put(Dst, 35, reg->off);
            reg->off += 8;
        } else {
            dasm_put(Dst, 36, reg->off);
            reg->off += 4;
        }
    }
}

static void get_float(Dst_DECL, const struct ctype* ct, struct reg_alloc* reg, int is_double)
{
#if !X64
    assert(MAX_FLOAT_REGISTERS(ct) == 0);
    if (is_double) {
        dasm_put(Dst, 42, reg->off);
        reg->off += 8;
    } else {
        dasm_put(Dst, 46, reg->off);
        reg->off += 4;
    }
#else
    int off;

#ifdef _WIN64
    if (reg->regs < MAX_REGISTERS(ct)) {
        off = -16 - 8*reg->regs;
        reg->regs++;
    }
#else
    if (reg->floats< MAX_FLOAT_REGISTERS(ct)) {
        off = -16 - 8*reg->floats;
        reg->floats++;
    }
#endif
    else {
#if X64
        if (reg->off % 8 != 0) {
            reg->off += 8 - (reg->off % 8);
        }
#endif
        off = reg->off;        
        reg->off += is_double ? 8 : 4;
    }

    if (is_double) {
        dasm_put(Dst, 50, off);
    } else {
        dasm_put(Dst, 57, off);
    }
#endif
}

static void add_float(Dst_DECL, const struct ctype* ct, struct reg_alloc* reg, int is_double)
{
#if !defined _WIN64 && !defined __amd64__
    assert(MAX_FLOAT_REGISTERS(ct) == 0);
    if (is_double) {
        dasm_put(Dst, 64, reg->off);
        reg->off += 8;
    } else {
        dasm_put(Dst, 70, reg->off);
        reg->off += 4;
    }
#else

#ifdef _WIN64
    if (reg->regs < MAX_REGISTERS(ct)) {
        if (is_double) {
            dasm_put(Dst, 76, 32 + 8*(reg->regs));
        } else {
            dasm_put(Dst, 84, 32 + 8*(reg->regs));
        }
        reg->is_float[reg->regs++] = 1;
    }
#else
    if (reg->floats < MAX_FLOAT_REGISTERS(ct)) {
        if (is_double) {
            dasm_put(Dst, 76, 32 + 8*(MAX_INT_REGISTERS(ct) + reg->floats));
        } else {
            dasm_put(Dst, 84, 32 + 8*(MAX_INT_REGISTERS(ct) + reg->floats));
        }
        reg->floats++;
    }
#endif
    else {
#if defined _WIN64 || defined __amd64__
        if (reg->off % 8 != 0) {
            reg->off += 8 - (reg->off % 8);
        }
#endif    
        if (is_double) {
            dasm_put(Dst, 76, reg->off);
            reg->off += 8;
        } else {
            dasm_put(Dst, 97, reg->off);
            reg->off += 4;
        }
    }
#endif
}

#if defined _WIN64 || defined __amd64__
#define add_pointer(jit, ct, reg) add_int(jit, ct, reg, 1)
#define get_pointer(jit, ct, reg) get_int(jit, ct, reg, 1)
#else
#define add_pointer(jit, ct, reg) add_int(jit, ct, reg, 0)
#define get_pointer(jit, ct, reg) get_int(jit, ct, reg, 0)
#endif

cfunction compile_callback(lua_State* L, int fidx, int ct_usr, const struct ctype* ct)
{
    int i, nargs;
    cfunction* pf;
    struct ctype ct2 = *ct;
    const struct ctype* mt;
    struct reg_alloc reg;
    int num_upvals = 0;
    int top = lua_gettop(L);
    struct jit* Dst = get_jit(L);
    int ref;
    int hidden_arg_off = 0;

    ct_usr = lua_absindex(L, ct_usr);
    fidx = lua_absindex(L, fidx);

    assert(lua_isnil(L, fidx) || lua_isfunction(L, fidx));

    memset(&reg, 0, sizeof(reg));
#ifdef _WIN64
    reg.off = 16 + REGISTER_STACK_SPACE(ct); /* stack registers are above the shadow space */
#elif __amd64__
    reg.off = 16;
#else
    reg.off = 8;
#endif

    dasm_setup(Dst, build_actionlist);

    // add a table to store ctype and function upvalues
    // callback_set assumes the first value is the lua function
    nargs = (int) lua_rawlen(L, ct_usr);
    lua_newtable(L);
    lua_pushvalue(L, -1);
    ref = luaL_ref(L, LUA_REGISTRYINDEX);

    if (ct->has_var_arg) {
        luaL_error(L, "can't create callbacks with varargs");
    }

    // setup a stack frame to hold args for the call into lua_call

    dasm_put(Dst, 110, 8 + 16 + 32 + REGISTER_STACK_SPACE(ct));
    if (ct->calling_convention == FAST_CALL) {
    }

    // hardcode the lua_State* value into the assembly
    dasm_put(Dst, 159, (unsigned int)((uintptr_t)(L)), (unsigned int)(((uintptr_t)(L))>>32));

    /* get the upval table */
    dasm_put(Dst, 164, ref, LUA_REGISTRYINDEX);

    /* get the lua function */
    lua_pushvalue(L, fidx);
    lua_rawseti(L, -2, ++num_upvals);
    assert(num_upvals == CALLBACK_FUNC_USR_IDX);
    dasm_put(Dst, 180, num_upvals);


    lua_rawgeti(L, ct_usr, 0);
    mt = (const struct ctype*) lua_touserdata(L, -1);
    if (return_by_address(mt)) {
#if defined _WIN64
		reg.regs++;
		hidden_arg_off= 16;
#elif defined __amd64__
		reg.ints++;
		hidden_arg_off= -80;
#else
        hidden_arg_off = reg.off;
        reg.off += sizeof(void*);
#endif		
    }
    lua_pop(L, 1);


    for (i = 1; i <= nargs; i++) {
        lua_rawgeti(L, ct_usr, i);
        mt = (const struct ctype*) lua_touserdata(L, -1);

        if (mt->pointers || mt->is_reference) {
            lua_getuservalue(L, -1);
            lua_rawseti(L, -3, ++num_upvals); /* usr value */
            lua_rawseti(L, -2, ++num_upvals); /* mt */
            /* on the lua stack in the callback:
             * upval tbl, lua func, i-1 args
             */
            dasm_put(Dst, 203, num_upvals-1, -i-1, (unsigned int)((uintptr_t)(mt)), (unsigned int)(((uintptr_t)(mt))>>32));
            get_pointer(Dst, ct, &reg);
            dasm_put(Dst, 241);
        } else {
            switch (mt->type) {
			case STRUCT_TYPE:
			case UNION_TYPE:{
#if defined __amd64__
				int floats=float_reg_size(L,-1,mt);
				
#endif
				int size=mt->base_size;
				lua_getuservalue(L, -1);
				lua_rawseti(L, -3, ++num_upvals); /* usr value */
				lua_rawseti(L, -2, ++num_upvals); /* mt */
				 /* on the lua stack in the callback:
				 * upval tbl, lua func, i-1 args
				 */
				dasm_put(Dst, 203, num_upvals-1, -i-1, (unsigned int)((uintptr_t)(mt)), (unsigned int)(((uintptr_t)(mt))>>32));
#if defined _WIN64
				{
					if(size!=8&&size!=2&&size!=1&&size!=4){
						dasm_put(Dst, 263);
						get_pointer(Dst, ct, &reg);
						dasm_put(Dst, 267, size);
					}else{
						get_int(Dst, ct, &reg, 1);
						dasm_put(Dst, 282);
					}
				}
				
#elif defined __amd64__
				if(floats>0){
					if(floats>1&&reg.floats==MAX_FLOAT_REGISTERS(ct)-1){
						reg.floats++;// ensure argument not splited
					}
					get_float(Dst, ct, &reg, 1);
					if(floats>1){
						get_float(Dst, ct, &reg, 1);
					}
				}else if(size>16){
					reg.off+=ALIGN_UP(size,3);
				}else {
					if(size>8&&reg.ints==MAX_INT_REGISTERS(ct)-1){
						reg.ints++;// ensure argument not splited
					}
					get_int(Dst, ct, &reg, 1);
					if(size>8){
						get_int(Dst, ct, &reg, 1);
					}
				}
#else
				reg.off+=ALIGN_UP(size,3);	
#endif	
				dasm_put(Dst, 244);
				break;
			}	
            case INT64_TYPE:
			#if LUA_VERSION_NUM >=503
				lua_pop(L, 1);
                get_int(Dst, ct, &reg, 1);
				dasm_put(Dst, 286);
			#else
                lua_getuservalue(L, -1);
                lua_rawseti(L, -3, ++num_upvals); /* mt */
                lua_pop(L, 1);
                dasm_put(Dst, 297, (unsigned int)((uintptr_t)(mt)), (unsigned int)(((uintptr_t)(mt))>>32));
                get_int(Dst, ct, &reg, 1);
                dasm_put(Dst, 282);
			#endif	
                break;

            case INTPTR_TYPE:
                lua_getuservalue(L, -1);
                lua_rawseti(L, -3, ++num_upvals); /* mt */
                lua_pop(L, 1);
                dasm_put(Dst, 297, (unsigned int)((uintptr_t)(mt)), (unsigned int)(((uintptr_t)(mt))>>32));
                get_pointer(Dst, ct, &reg);
                dasm_put(Dst, 282);
                break;

            case COMPLEX_FLOAT_TYPE:
                lua_pop(L, 1);
                dasm_put(Dst, 297, (unsigned int)((uintptr_t)(mt)), (unsigned int)(((uintptr_t)(mt))>>32));
#if defined _WIN64 
				/* complex floats are two floats packed into a int64_t */
				get_int(Dst, ct, &reg, 1);
				dasm_put(Dst, 282);
#elif defined __amd64__
                /* complex floats are two floats packed into a double */
                get_float(Dst, ct, &reg, 1);
#else
                /* complex floats are real followed by imag on the stack */
                get_float(Dst, ct, &reg, 0);
                get_float(Dst, ct, &reg, 0);
#endif
                break;

            case COMPLEX_DOUBLE_TYPE:
                lua_pop(L, 1);
                dasm_put(Dst, 297, (unsigned int)((uintptr_t)(mt)), (unsigned int)(((uintptr_t)(mt))>>32));
#if defined _WIN64
				get_int(Dst, ct, &reg, 1);
				dasm_put(Dst, 316);
#else
                /* real */
                get_float(Dst, ct, &reg, 1);
                /* imag */
                get_float(Dst, ct, &reg, 1);
#endif				
                break;

            case FLOAT_TYPE:
            case DOUBLE_TYPE:
                lua_pop(L, 1);
                get_float(Dst, ct, &reg, mt->type == DOUBLE_TYPE);
                dasm_put(Dst, 331);
                break;

            case BOOL_TYPE:
                lua_pop(L, 1);
                get_int(Dst, ct, &reg, 0);
                dasm_put(Dst, 344);
                break;

            case INT8_TYPE:
                lua_pop(L, 1);
                get_int(Dst, ct, &reg, 0);
                if (mt->is_unsigned) {
                    dasm_put(Dst, 358);
                } else {
                    dasm_put(Dst, 362);
                }
                dasm_put(Dst, 366);
                break;

            case INT16_TYPE:
                lua_pop(L, 1);
                get_int(Dst, ct, &reg, 0);
                if (mt->is_unsigned) {
                    dasm_put(Dst, 377);
                } else {
                    dasm_put(Dst, 381);
                }
                dasm_put(Dst, 366);
                break;

            case ENUM_TYPE:
            case INT32_TYPE:
                lua_pop(L, 1);
                get_int(Dst, ct, &reg, 0);
                if (mt->is_unsigned) {
                    dasm_put(Dst, 385);
                } else {
                    dasm_put(Dst, 366);
                }
                break;

            default:
                luaL_error(L, "NYI: callback arg type");
            }
        }
    }

    lua_rawgeti(L, ct_usr, 0);
    mt = (const struct ctype*) lua_touserdata(L, -1);

    dasm_put(Dst, 396, (mt->pointers || mt->is_reference || mt->type != VOID_TYPE) ? 1 : 0, nargs);

    // Unpack the return argument if not "void", also clean-up the lua stack
    // to remove the return argument and bind table. Use lua_settop rather
    // than lua_pop as lua_pop is implemented as a macro.
    if (mt->pointers || mt->is_reference) {
        lua_getuservalue(L, -1);
        lua_rawseti(L, -3, ++num_upvals); /* usr value */
        lua_rawseti(L, -2, ++num_upvals); /* mt */
        dasm_put(Dst, 412, num_upvals-1, (unsigned int)((uintptr_t)(mt)), (unsigned int)(((uintptr_t)(mt))>>32));

    } else {
        switch (mt->type) {
        case ENUM_TYPE:
            lua_getuservalue(L, -1);
            lua_rawseti(L, -3, ++num_upvals); /* usr value */
            lua_rawseti(L, -2, ++num_upvals); /* mt */
            dasm_put(Dst, 496, num_upvals-1, (unsigned int)((uintptr_t)(mt)), (unsigned int)(((uintptr_t)(mt))>>32));
            break;

        case VOID_TYPE:
            lua_pop(L, 1);
            dasm_put(Dst, 578);
            break;

        case BOOL_TYPE:
        case INT8_TYPE:
        case INT16_TYPE:
        case INT32_TYPE:
            lua_pop(L, 1);
            if (mt->is_unsigned) {
                dasm_put(Dst, 597);
            } else {
                dasm_put(Dst, 616);
            }
            dasm_put(Dst, 635);
            break;

        case INT64_TYPE:
            lua_pop(L, 1);

            if (mt->is_unsigned) {
                dasm_put(Dst, 662);
            } else {
                dasm_put(Dst, 681);
            }

            dasm_put(Dst, 700);
            break;

        case INTPTR_TYPE:
            lua_pop(L, 1);
            dasm_put(Dst, 729);
            break;

        case FLOAT_TYPE:
        case DOUBLE_TYPE:
            lua_pop(L, 1);
            dasm_put(Dst, 776);
            if (mt->type == FLOAT_TYPE) {
                dasm_put(Dst, 819);
            } else {
                dasm_put(Dst, 827);
            }
            break;
		case STRUCT_TYPE:
		case UNION_TYPE:{
#if defined __amd64__
			int floats=float_reg_size(L,-1,mt);
#endif
			int size=mt->base_size;
			lua_getuservalue(L, -1);
            lua_rawseti(L, -3, ++num_upvals); /* usr value */
            lua_rawseti(L, -2, ++num_upvals); /* mt */
			dasm_put(Dst, 835, num_upvals-1, (unsigned int)((uintptr_t)(mt)), (unsigned int)(((uintptr_t)(mt))>>32));
#if defined _WIN64
			if(!return_by_address(mt)){
				dasm_put(Dst, 919);
			}else
#elif defined __amd64__
			if(floats){
				if(size<=8){
					dasm_put(Dst, 923);
				}else{
					dasm_put(Dst, 929);
				}
			}else if(size<=16){
				if(size<=8){
					dasm_put(Dst, 919);
				}else{
					dasm_put(Dst, 941);
				}
			}else
#else
			#ifdef _WIN32
			if(size<=8){
				if(size<=4){
					dasm_put(Dst, 920);
				}else{
					dasm_put(Dst, 952);
				}
			}else
			#endif
			
#endif
			{
				dasm_put(Dst, 960, hidden_arg_off, size, hidden_arg_off);
			}
			break;
		}
        case COMPLEX_FLOAT_TYPE:
            lua_pop(L, 1);

            /* on 64 bit complex floats are two floats packed into a double,
             * on 32 bit returned complex floats use eax and edx */
            dasm_put(Dst, 983);
            break;

        case COMPLEX_DOUBLE_TYPE:
            lua_pop(L, 1);

            /* on 64 bit, returned complex doubles use xmm0, xmm1, on 32 bit
             * there is a hidden first parameter that points to 16 bytes where
             * the returned arg is stored which is popped by the called
             * function */
#if defined _WIN64
			dasm_put(Dst, 1030, hidden_arg_off, hidden_arg_off);
#elif defined __amd64__
#else
#endif
            break;

        default:
            luaL_error(L, "NYI: callback return type");
        }
    }

    dasm_put(Dst, 1057, x86_return_size(L, ct_usr, ct));

    lua_pop(L, 1); /* upval table - already in registry */
    assert(lua_gettop(L) == top);

    ct2.is_jitted = 1;
    pf = (cfunction*) push_cdata(L, ct_usr, &ct2);
    *pf = compile(Dst, L, NULL, ref);

    assert(lua_gettop(L) == top + 1);

    return *pf;
}
// leave enough stack for structs
static int caculate_extra_stack(lua_State* L,int ct_usr,size_t nargs){
	const struct ctype* mbr_ct;
	int extra=0;int i;
	for (i = 1; i <= nargs; i++) {
        lua_rawgeti(L, ct_usr, (int) i);
        mbr_ct = (const struct ctype*) lua_touserdata(L, -1);
		if (!mbr_ct->pointers && !mbr_ct->is_reference) {
			switch(mbr_ct->type){
				case STRUCT_TYPE:
				case UNION_TYPE:
				if(mbr_ct->base_size>16){
					extra+=ALIGN_UP(mbr_ct->base_size,15);
				}
				#if defined _WIN64
				else if(mbr_ct->base_size>8){
					extra+=16;
				}
				#endif
				break;
				#if defined _WIN64
				case COMPLEX_DOUBLE_TYPE:
				extra+=16;
				break;
				#endif				
			}
		}
		lua_pop(L,1);
	}
	return extra;	
} 

void compile_function(lua_State* L, cfunction func, int ct_usr, const struct ctype* ct)
{
    size_t i, nargs;
    int num_upvals,struct_offset;
    const struct ctype* mbr_ct;
    struct jit* Dst = get_jit(L);
    struct reg_alloc reg;
    void* p;
    int top = lua_gettop(L);

    ct_usr = lua_absindex(L, ct_usr);

    memset(&reg, 0, sizeof(reg));
    reg.off = 32 + REGISTER_STACK_SPACE(ct);

    dasm_setup(Dst, build_actionlist);

    p = push_cdata(L, ct_usr, ct);
    *(cfunction*) p = func;
    num_upvals = 1;

    nargs = lua_rawlen(L, ct_usr);

    if (ct->calling_convention != C_CALL && ct->has_var_arg) {
        luaL_error(L, "vararg is only allowed with the c calling convention");
    }

    dasm_put(Dst, 1070);
    struct_offset=16;
    /* no need to zero extend eax returned by lua_gettop to rax as x86-64
     * preguarentees that the upper 32 bits will be zero */
    if (ct->has_var_arg) {
		dasm_put(Dst, 1082, nargs, (unsigned int)((uintptr_t)(&"too few arguments")), (unsigned int)(((uintptr_t)(&"too few arguments"))>>32));
    }else{
		dasm_put(Dst, 1131, nargs*16);
	}
	
    dasm_put(Dst, 1131, 32 + REGISTER_STACK_SPACE(ct));
	
	i=caculate_extra_stack(L,ct_usr,nargs);
	if(i>0){
		dasm_put(Dst, 1131, i);
	}

    /* Returned complex doubles require a hidden first parameter where the
     * data is stored, which is popped by the calling code. */
	lua_rawgeti(L, ct_usr, 0);
    mbr_ct = (const struct ctype*) lua_touserdata(L, -1);
    if (return_by_address(mbr_ct)) {
        /* we can allocate more space for arguments as long as no add_*
         * function has been called yet, mbr_ct will be added as an upvalue in
         * the return processing later */
        dasm_put(Dst, 1137, (unsigned int)((uintptr_t)(mbr_ct)), (unsigned int)(((uintptr_t)(mbr_ct))>>32));
        add_pointer(Dst, ct, &reg);
    }
	lua_pop(L,1);
   


    for (i = 1; i <= nargs; i++) {
        lua_rawgeti(L, ct_usr, (int) i);
        mbr_ct = (const struct ctype*) lua_touserdata(L, -1);

        if (mbr_ct->pointers || mbr_ct->is_reference) {
            lua_getuservalue(L, -1);
            num_upvals += 2;
            dasm_put(Dst, 1161, (unsigned int)((uintptr_t)(mbr_ct)), (unsigned int)(((uintptr_t)(mbr_ct))>>32), lua_upvalueindex(num_upvals), i);
            add_pointer(Dst, ct, &reg);
        } else {
            switch (mbr_ct->type) {
            case FUNCTION_PTR_TYPE:
                lua_getuservalue(L, -1);
                num_upvals += 2;
                dasm_put(Dst, 1181, (unsigned int)((uintptr_t)(mbr_ct)), (unsigned int)(((uintptr_t)(mbr_ct))>>32), lua_upvalueindex(num_upvals), i);
                add_pointer(Dst, ct, &reg);
                break;

            case ENUM_TYPE:
                lua_getuservalue(L, -1);
                num_upvals += 2;
                dasm_put(Dst, 1201, (unsigned int)((uintptr_t)(mbr_ct)), (unsigned int)(((uintptr_t)(mbr_ct))>>32), lua_upvalueindex(num_upvals), i);
                add_int(Dst, ct, &reg, 0);
                break;

            case INT8_TYPE:
                dasm_put(Dst, 1221, i);
                if (mbr_ct->is_unsigned) {
                    dasm_put(Dst, 1233);
                } else {
                    dasm_put(Dst, 1237);
                }
                add_int(Dst, ct, &reg, 0);
                lua_pop(L, 1);
                break;

            case INT16_TYPE:
                dasm_put(Dst, 1221, i);
                if (mbr_ct->is_unsigned) {
                    dasm_put(Dst, 1241);
                } else {
                    dasm_put(Dst, 1245);
                }
                add_int(Dst, ct, &reg, 0);
                lua_pop(L, 1);
                break;

            case BOOL_TYPE:
                dasm_put(Dst, 1249, i);
                add_int(Dst, ct, &reg, 0);
                lua_pop(L, 1);
                break;

            case INT32_TYPE:
                if (mbr_ct->is_unsigned) {
                    dasm_put(Dst, 1271, i);
                } else {
                    dasm_put(Dst, 1221, i);
                }
                add_int(Dst, ct, &reg, 0);
                lua_pop(L, 1);
                break;

            case INTPTR_TYPE:
                dasm_put(Dst, 1283, i);
                add_pointer(Dst, ct, &reg);
                lua_pop(L, 1);
                break;

            case INT64_TYPE:
                if (mbr_ct->is_unsigned) {
                    dasm_put(Dst, 1295, i);
                } else {
                    dasm_put(Dst, 1307, i);
                }
                add_int(Dst, ct, &reg, 1);
                lua_pop(L, 1);
                break;

            case DOUBLE_TYPE:
                dasm_put(Dst, 1319, i);
                add_float(Dst, ct, &reg, 1);
                lua_pop(L, 1);
                break;
			case STRUCT_TYPE:
			case UNION_TYPE:
				/*Struct/Union in win 64 is pass by integer register if less than 64bit and aligned 8
				 *or it's passed by momory pointer. On amd64, it's passed by registers less than 16 bytes(32 bytes for floating aggregates)
				 *else it's copy to stack. On x86, it's copied to the stack. Argument can't be splited between stack and registers.
				 */
				lua_getuservalue(L, -1);
                num_upvals += 2;
                dasm_put(Dst, 1331, (unsigned int)((uintptr_t)(mbr_ct)), (unsigned int)(((uintptr_t)(mbr_ct))>>32), lua_upvalueindex(num_upvals), i);
#if defined _WIN64 
				{
					int size=mbr_ct->base_size;
					if(size!=8&&size!=2&&size!=1&&size!=4){
						struct_offset+=ALIGN_UP(size,15);//16 byte alignment required
						dasm_put(Dst, 1351, -struct_offset);
						add_int(Dst, ct, &reg, 1);
						dasm_put(Dst, 1359, size);
					}else{
						dasm_put(Dst, 919);
						add_int(Dst, ct, &reg, 1);
					}
				}
#elif defined __amd64__
				{
					int size=mbr_ct->base_size;
					int floats=float_reg_size(L,-2,mbr_ct);
					if(floats){
						if(size>8&&reg.floats==MAX_FLOAT_REGISTERS(ct)-1){
							reg.floats++;// the whole arguments should be in stack or registers
						}
						// 1st float
						add_float(Dst, ct, &reg, 1);	
						if(size>8){// 2nd float
							add_float(Dst, ct, &reg, 1);
						}
					}else if(size<=16){
						if(size>8&&reg.ints==MAX_INT_REGISTERS(ct)-1){
							reg.ints++;// the whole arguments should be in stack or registers
						}
						if(size>8){
							add_int(Dst, ct, &reg, 1);
							add_int(Dst, ct, &reg, 1);
						}else{
							add_int(Dst, ct, &reg, 1);
						}
					}else{ //passed in stack
						if(reg.off&7){
							reg.off=ALIGN_UP(reg.off,7);
						}
						size=ALIGN_UP(size,7);
						reg.off+=size;
					}
				}
#else
				{
					int size=ALIGN_UP(mbr_ct->base_size,3);
					reg.off+=size;
				}
#endif
                break;
            case COMPLEX_DOUBLE_TYPE:// passed by memory copy pointer in win64
                /* on amd64, returned complex doubles use xmm0, xmm1, on 32 bit or win64
                 * there is a hidden first parameter that points to 16 bytes where
                 * the returned arg is stored (this is popped by the called
                 * function on 32 bit) */
#if defined _WIN64 
				struct_offset+=16;
                dasm_put(Dst, 1371, -struct_offset, i);
				add_int(Dst, ct, &reg, 1);//save the address
#elif defined __amd64__
				if(reg.floats==MAX_FLOAT_REGISTERS(ct)-1){
					reg.floats++;// the whole arguments should be in stack or registers
				}
                add_float(Dst, ct, &reg, 1);
                add_float(Dst, ct, &reg, 1);
#else
                reg.off += 16;
#endif
                lua_pop(L, 1);
                break;

            case FLOAT_TYPE:
                dasm_put(Dst, 1319, i);
                add_float(Dst, ct, &reg, 0);
                lua_pop(L, 1);
                break;

            case COMPLEX_FLOAT_TYPE:
#if defined _WIN64
				dasm_put(Dst, 1390, i);
                /* complex floats are return in rax */
               add_int(Dst, ct, &reg, 1);
#elif  defined __amd64__
                /* complex floats are two floats packed into a double */
                add_float(Dst, ct, &reg, 1);
				
#else
                /* returned complex floats use eax and edx */
                add_float(Dst, ct, &reg, 0);
                add_float(Dst, ct, &reg, 0);
#endif
                lua_pop(L, 1);
                break;

            default:
                luaL_error(L, "NYI: call arg type");
            }
        }
    }

    if (ct->has_var_arg) {
#ifdef _WIN64
        if (reg.regs < MAX_REGISTERS(ct)) {
            assert(reg.regs == nargs);
            dasm_put(Dst, 1402, MAX_REGISTERS(ct), 32 + 8*MAX_REGISTERS(ct), MAX_REGISTERS(ct)+1, 32 + 8*(reg.regs), MAX_REGISTERS(ct), nargs+1, 32 + 8*(reg.regs), nargs+1);
        } else {
            dasm_put(Dst, 1493, reg.off, nargs+1);
        }

        for (i = nargs; i < MAX_REGISTERS(ct); i++) {
            reg.is_int[i] = reg.is_float[i] = 1;
        }
        reg.regs = MAX_REGISTERS(ct);
#elif defined __amd64__
        if (reg.floats < MAX_FLOAT_REGISTERS(ct)) {
        }

        if (reg.ints < MAX_INT_REGISTERS(ct)) {
        }


        reg.floats = MAX_FLOAT_REGISTERS(ct);
        reg.ints = MAX_INT_REGISTERS(ct);
#else
#endif
    }

    dasm_put(Dst, 1518);

#ifdef _WIN64
    switch (reg.regs) {
    case 4:
        if (reg.is_float[3]) {
            dasm_put(Dst, 1523, 8*3);
        }
        if (reg.is_int[3]) {
            dasm_put(Dst, 1532, 8*3);
        }
    case 3:
        if (reg.is_float[2]) {
            dasm_put(Dst, 1539, 8*2);
        }
        if (reg.is_int[2]) {
            dasm_put(Dst, 1548, 8*2);
        }
    case 2:
        if (reg.is_float[1]) {
            dasm_put(Dst, 1555, 8*1);
        }
        if (reg.is_int[1]) {
            dasm_put(Dst, 1564, 8*1);
        }
    case 1:
        if (reg.is_float[0]) {
            dasm_put(Dst, 1571);
        }
        if (reg.is_int[0]) {
            dasm_put(Dst, 1578);
        }
    case 0:
        break;
    }

    /* don't remove the space for the registers as we need 32 bytes of register overflow space */
    assert(REGISTER_STACK_SPACE(ct) == 32);

#elif defined __amd64__
    switch (reg.floats) {
    case 8:
    case 7:
    case 6:
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
        break;
    }

    switch (reg.ints) {
    case 6:
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
        break;
    }

#else
    if (ct->calling_convention == FAST_CALL) {
        switch (reg.ints) {
        case 2:
        case 1:
        case 0:
            break;
        }

    }
#endif

#ifdef __amd64__
    if (ct->has_var_arg) {
        /* al stores an upper limit on the number of float register, note that
         * its allowed to be more than the actual number of float registers used as
         * long as its 0-8 */
    }
#endif

    dasm_put(Dst, 1583);

    /* note on windows X86 the stack may be only aligned to 4 (stdcall will
     * have popped a multiple of 4 bytes), but we don't need 16 byte alignment on
     * that platform
     */

    lua_rawgeti(L, ct_usr, 0);
    mbr_ct = (const struct ctype*) lua_touserdata(L, -1);

    if (mbr_ct->pointers || mbr_ct->is_reference || mbr_ct->type == INTPTR_TYPE) {
        lua_getuservalue(L, -1);
        num_upvals += 2;
        dasm_put(Dst, 1593, (unsigned int)((uintptr_t)(mbr_ct)), (unsigned int)(((uintptr_t)(mbr_ct))>>32), lua_upvalueindex(num_upvals));

    } else {
        switch (mbr_ct->type) {
		case STRUCT_TYPE:
		case UNION_TYPE:{
			lua_getuservalue(L, -1);
            num_upvals += 2;
            
#if defined _WIN64            
			if(return_by_address(mbr_ct)){
				fix_usr_value(Dst,L,num_upvals);
			}else{
				dasm_put(Dst, 1643, (unsigned int)((uintptr_t)(mbr_ct)), (unsigned int)(((uintptr_t)(mbr_ct))>>32), lua_upvalueindex(num_upvals));
			}
			
#elif defined __amd64__
			if(mbr_ct->base_size>16){
				fix_usr_value(Dst,L, num_upvals);
			}else{
				int floats=float_reg_size(L,-2,mbr_ct),size=mbr_ct->base_size;
				if(floats){
					if(floats>1){
					}			
				}else{
					if(size>8){
					} 
				}
				if(size>8){
				}
				
			}
#else
			{
				#if defined _WIN32
				int size=ALIGN_UP(mbr_ct->base_size,3);
				if(size==8){
				}
				
				if(size<=8){// small struct is return by value in win32
					if(size==8){
					}
				}else
				#endif
				{
					fix_usr_value(Dst,L, num_upvals);
				}
				
			}
#endif	
            dasm_put(Dst, 1621);
			break;
		}	
        case FUNCTION_PTR_TYPE:
            lua_getuservalue(L, -1);
            num_upvals += 2;
            dasm_put(Dst, 1593, (unsigned int)((uintptr_t)(mbr_ct)), (unsigned int)(((uintptr_t)(mbr_ct))>>32), lua_upvalueindex(num_upvals));
            break;

        case INT64_TYPE:
#if LUA_VERSION_NUM >= 503
            lua_pop(L, 1);
           
            dasm_put(Dst, 1677);
            
#else
            num_upvals++;
            dasm_put(Dst, 1709, (unsigned int)((uintptr_t)(mbr_ct)), (unsigned int)(((uintptr_t)(mbr_ct))>>32));
#endif
            break;

        case COMPLEX_FLOAT_TYPE:
            lua_getuservalue(L, -1);
            num_upvals += 2;
            dasm_put(Dst, 1593, (unsigned int)((uintptr_t)(mbr_ct)), (unsigned int)(((uintptr_t)(mbr_ct))>>32), lua_upvalueindex(num_upvals));
            break;

        case COMPLEX_DOUBLE_TYPE:
            lua_getuservalue(L, -1);
            num_upvals += 2;
#if defined _WIN64
			fix_usr_value(Dst,L,num_upvals);
#elif defined __amd64__
#else
			fix_usr_value(Dst,L,num_upvals);
#endif
            dasm_put(Dst, 1621);
            break;

        case VOID_TYPE:
            lua_pop(L, 1);
            dasm_put(Dst, 1762);
            break;

        case BOOL_TYPE:
            lua_pop(L, 1);
            dasm_put(Dst, 1784);
            break;

        case INT8_TYPE:
            lua_pop(L, 1);
            if (mbr_ct->is_unsigned) {
                dasm_put(Dst, 1233);
            } else {
                dasm_put(Dst, 1237);
            }
            dasm_put(Dst, 1819);
            break;

        case INT16_TYPE:
            lua_pop(L, 1);
            if (mbr_ct->is_unsigned) {
                dasm_put(Dst, 1241);
            } else {
                dasm_put(Dst, 1245);
            }
            dasm_put(Dst, 1819);
            break;

        case INT32_TYPE:
        case ENUM_TYPE:
            lua_pop(L, 1);
            if (mbr_ct->is_unsigned) {
                dasm_put(Dst, 1851);
            } else {
                dasm_put(Dst, 1819);
            }
            break;

        case FLOAT_TYPE:
            lua_pop(L, 1);
            dasm_put(Dst, 1883);
            break;

        case DOUBLE_TYPE:
            lua_pop(L, 1);
            dasm_put(Dst, 1888);
            break;

        default:
            luaL_error(L, "NYI: call return type");
        }
    }

    assert(lua_gettop(L) == top + num_upvals);
    {
        cfunction f = compile(Dst, L, func, LUA_NOREF);
        /* add a callback as an upval so that the jitted code gets cleaned up when
         * the function gets gc'd */
        push_callback(L, f, func);
        lua_pushcclosure(L, (lua_CFunction) f, num_upvals+1);
    }
}


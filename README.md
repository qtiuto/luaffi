The project is a ffi library for calling c functions, using c data structures, in pure lua environment. It also supports
calling lua function from c functions. It's ported from luajit-ffi and is originally from 
https://github.com/facebookarchive/luaffifb . I copy it from https://github.com/dibyendumajumdar/ravi-ffi.
You can get some tutorials from the [luajit ffi page](http://luajit.org/ext_ffi.html).

Comparing with standard lua c call, it can make up up to 75% in performance. Slower than luajit-ffi though,  
 this is a lot better than libffi.

But there's still some change from the original lua ffi library:
 
1. from lua 5.3, int64 result is return as an integer from c call except for uintptr type.
1. ffi.i64 and ffi.u64 are no longer available since lua 5.3 .
1. libgcc is not available on Android.
1. cdata array can be iterate by ipairs or pairs and it's length can be retrieved by # operator now.
1. ffi.metatype should be called once you change any metafield of the metatable for the ctype.Note that the metatable won't be kept by the type.I use another table to store metafields.
1. more detailed error message.
1. several bugs are fixed.

Some known issues:

1. cdata doesn't equal to any lua value by operator **'=='** .
1. complex number must be declared by ffi.new or ffi.cast.
1. unsupported bit operation.
1. struct/union/complex values passed by value in variadic procedure is unsupported.
1. gcc extension vector type is unsupported.
1. `__atrribte__((aligned))` use gcc definition rather than the clang one.
1. for msvc, the c runtime for the project and the lua.dll must be the same or
   cast for lua FILE object to c FILE object won't work because msvcrt.dll doesn't compat with ucrtbase.dll



To build it for systems other than Android, `cd src/main/cpp` and run `cmake ./ && make`.

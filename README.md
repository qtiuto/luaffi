The project is originally from https://github.com/facebookarchive/luaffifb ,and I copy it from https://github.com/dibyendumajumdar/ravi-ffi .
You can get some tutorial from the [luajit ffi page](http://luajit.org/ext_ffi.html).

The source of this project is [here](https://github.com/qtiuto/luaffi).

But there's still some change from the original lua ffi library:
 
1. From lua 5.3, int64 result is return as an integer from c call except for uintptr type.
1. ffi.i64 and ffi.u64 is no longer available since lua 5.3 .
1. libgcc is not available on Android.
1. cdata array can be iterate by ipairs or pairs and it's length can be retrieved by # operator now.
1. ffi.metatype should be called once you change any metafield of the metatable for the ctype.Note that the metatable won't be kept by the type.I use another table to store metafields.
1. more detailed error message.
1. several bugs are fixed.

Some known issues:

1. cdata doesn't equal to any lua value.
1. complex number must be declared by ffi.new or ffi.cast.
1. unsupported bit operation.
1. struct/union passed by value in function call/callback is unsupported

To build it for systems other than Android, `cd src/main/cpp` and run `cmake ./ && make` .
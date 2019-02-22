lua dynasm/dynasm.lua -LN  -o call_x86.h call_x86.dasc
lua dynasm/dynasm.lua -LN -D X64 -o call_x64.h call_x86.dasc
lua dynasm/dynasm.lua -LN -D X64 -D X64WIN -o call_x64win.h call_x86.dasc
lua dynasm/dynasm.lua -LN  -o call_arm.h call_arm.dasc
lua dynasm/dynasm.lua -LN  -D ARM_HF -o call_arm_hf.h call_arm.dasc
lua dynasm/dynasm.lua -LN  -o call_arm64.h call_arm64.dasc
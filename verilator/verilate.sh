verilator \
-cc -exe --public --trace --savable \
--compiler msvc +define+SIMULATION=1 \
-O3 --x-assign fast --x-initial fast --noassert \
--converge-limit 6000 \
-Wno-fatal \
--top-module top sim.v \
../rtl/smc777.v \
../rtl/tv80/tv80e.v \
../rtl/tv80/tv80_core.v \
../rtl/tv80/tv80_mcode.v \
../rtl/tv80/tv80_alu.v \
../rtl/tv80/tv80_reg.v \
../rtl/z8420/z8420.v \
../rtl/z8420/interrupt.v \
../rtl/sn76496/sn76496.v \
../rtl/dpram.sv \
../rtl/spram.v \
../rtl/mc6845v/mc6845.v
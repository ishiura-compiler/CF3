#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = 767700722;
int64_t x29 = -1LL;
uint64_t x32 = 3526066977227057LLU;
int8_t x33 = -1;
volatile uint8_t x34 = 123U;
static int32_t x37 = -1;
uint32_t x38 = 13519278U;
int32_t x40 = INT32_MIN;
volatile int32_t t6 = -132;
int32_t x53 = -1;
uint8_t x55 = UINT8_MAX;
static uint16_t x57 = UINT16_MAX;
uint64_t x68 = UINT64_MAX;
uint16_t x73 = 24953U;
uint32_t x88 = 2U;
volatile uint64_t t12 = 1044512LLU;
volatile int32_t t13 = -14;
static int8_t x103 = 4;
int8_t x107 = -1;
int64_t x108 = INT64_MIN;
static volatile uint32_t x113 = UINT32_MAX;
volatile uint32_t x131 = UINT32_MAX;
volatile uint32_t x132 = UINT32_MAX;
static volatile int8_t x135 = INT8_MIN;
int16_t x138 = INT16_MIN;
static int8_t x147 = INT8_MIN;
int32_t t29 = -551746;
uint16_t x166 = UINT16_MAX;
int64_t t32 = 6238809LL;
static int64_t x196 = 9686680006806LL;
static volatile int32_t t35 = 1;
static int32_t t36 = -27729;
uint8_t x221 = 9U;
int16_t x223 = INT16_MAX;
int8_t x232 = INT8_MIN;
int16_t x247 = INT16_MIN;
volatile uint64_t x250 = UINT64_MAX;
volatile int16_t x266 = 94;
int64_t x267 = -1LL;
volatile int32_t t45 = 35590969;
int32_t x290 = INT32_MIN;
int32_t t48 = 37108;
int64_t x321 = INT64_MIN;
uint16_t x331 = 22826U;
volatile int8_t x345 = -2;
volatile int32_t t54 = -334568289;
uint16_t x349 = 26U;
uint64_t x352 = UINT64_MAX;
int8_t x354 = -1;
int32_t x355 = INT32_MIN;
int32_t x361 = -12691;
static volatile int32_t t57 = 4688;
volatile int8_t x373 = 0;
uint64_t x379 = 16276045036684LLU;
uint64_t x388 = UINT64_MAX;
int32_t t61 = -11361961;
int16_t x398 = INT16_MIN;
int16_t x400 = -58;
volatile int32_t t63 = -259018270;
static uint32_t x411 = 608985183U;
int16_t x417 = INT16_MIN;
volatile int64_t x428 = 2946654399089LL;
int64_t x432 = INT64_MIN;
int64_t x443 = -1707338073211580LL;
volatile int32_t t70 = -14;
int32_t t72 = -4;
static uint32_t x465 = 219U;
uint64_t x466 = UINT64_MAX;
volatile int8_t x480 = INT8_MAX;
volatile int32_t x492 = -97769;
volatile int32_t t77 = 368;
int32_t x498 = INT32_MIN;
uint32_t x499 = 88U;
volatile uint64_t t78 = 393627418LLU;
uint32_t x504 = UINT32_MAX;
static int64_t x510 = -43893LL;
volatile int8_t x512 = -13;
uint64_t x517 = UINT64_MAX;
uint64_t t81 = 116LLU;
uint8_t x524 = UINT8_MAX;
int16_t x546 = -1;
volatile uint64_t x548 = 9857527760LLU;
volatile int32_t t85 = -5;
int64_t x549 = -1LL;
int8_t x554 = INT8_MIN;
volatile uint32_t x556 = UINT32_MAX;
uint16_t x567 = UINT16_MAX;
volatile int64_t t88 = 1647522410297704LL;
uint8_t x575 = 11U;
uint8_t x591 = UINT8_MAX;
static int8_t x596 = INT8_MAX;
int8_t x617 = -1;


void f0(void) {
	int16_t x2 = -1;
	int32_t x3 = -3493596;
	static int64_t x4 = INT64_MAX;
	int32_t t0 = -51143;

	t0 = (x1%((x2/x3)<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x13 = 197;
	int8_t x14 = -6;
	static int64_t x15 = INT64_MIN;
	uint64_t x16 = 468623LLU;
	int32_t t1 = 26818475;

	t1 = (x13%((x14/x15)<=x16));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x25 = INT16_MAX;
	static int16_t x26 = -506;
	static uint32_t x27 = 23494092U;
	int16_t x28 = -2079;
	volatile int32_t t2 = -2;

	t2 = (x25%((x26/x27)<=x28));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x30 = 7704U;
	volatile int32_t x31 = INT32_MIN;
	int64_t t3 = -40997LL;

	t3 = (x29%((x30/x31)<=x32));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x35 = -1LL;
	int32_t x36 = 330697;
	volatile int32_t t4 = -1;

	t4 = (x33%((x34/x35)<=x36));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x39 = -1;
	volatile int32_t t5 = -52036;

	t5 = (x37%((x38/x39)<=x40));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x41 = 356U;
	uint8_t x42 = 0U;
	static int32_t x43 = INT32_MIN;
	uint32_t x44 = 978910U;

	t6 = (x41%((x42/x43)<=x44));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x49 = -1;
	uint16_t x50 = 26824U;
	int16_t x51 = INT16_MIN;
	volatile uint64_t x52 = UINT64_MAX;
	volatile int32_t t7 = -31035;

	t7 = (x49%((x50/x51)<=x52));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x54 = INT64_MIN;
	static int64_t x56 = -1LL;
	volatile int32_t t8 = -5006422;

	t8 = (x53%((x54/x55)<=x56));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x58 = INT32_MIN;
	int64_t x59 = 40333444937652929LL;
	uint8_t x60 = 31U;
	static int32_t t9 = 281;

	t9 = (x57%((x58/x59)<=x60));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x65 = INT16_MIN;
	int64_t x66 = INT64_MAX;
	int32_t x67 = INT32_MIN;
	volatile int32_t t10 = -503276;

	t10 = (x65%((x66/x67)<=x68));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x74 = INT64_MAX;
	int16_t x75 = INT16_MIN;
	uint64_t x76 = UINT64_MAX;
	int32_t t11 = 512592;

	t11 = (x73%((x74/x75)<=x76));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint64_t x85 = 23868315645400726LLU;
	uint16_t x86 = 1U;
	volatile uint32_t x87 = 29195U;

	t12 = (x85%((x86/x87)<=x88));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x89 = -256;
	int8_t x90 = INT8_MIN;
	uint8_t x91 = 1U;
	int64_t x92 = -1LL;

	t13 = (x89%((x90/x91)<=x92));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x93 = 57831224344LL;
	uint16_t x94 = 1U;
	volatile int8_t x95 = INT8_MIN;
	uint16_t x96 = UINT16_MAX;
	volatile int64_t t14 = 49472LL;

	t14 = (x93%((x94/x95)<=x96));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x97 = 99596361LLU;
	int64_t x98 = -1LL;
	int32_t x99 = INT32_MIN;
	int16_t x100 = INT16_MAX;
	volatile uint64_t t15 = 7457421163807228LLU;

	t15 = (x97%((x98/x99)<=x100));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x101 = INT16_MIN;
	int64_t x102 = INT64_MIN;
	int64_t x104 = -1LL;
	volatile int32_t t16 = -1;

	t16 = (x101%((x102/x103)<=x104));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x105 = -1;
	uint64_t x106 = UINT64_MAX;
	static int32_t t17 = -6733;

	t17 = (x105%((x106/x107)<=x108));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x109 = 183986776032LL;
	volatile int32_t x110 = -26;
	uint32_t x111 = UINT32_MAX;
	uint8_t x112 = 3U;
	volatile int64_t t18 = -164712LL;

	t18 = (x109%((x110/x111)<=x112));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x114 = 30699798U;
	int32_t x115 = -198253;
	static volatile int8_t x116 = INT8_MIN;
	uint32_t t19 = 6U;

	t19 = (x113%((x114/x115)<=x116));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x117 = -13338126679535523LL;
	int64_t x118 = INT64_MAX;
	static int32_t x119 = INT32_MIN;
	uint32_t x120 = 553U;
	int64_t t20 = 132302919682550LL;

	t20 = (x117%((x118/x119)<=x120));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x121 = INT16_MAX;
	int16_t x122 = -1;
	int8_t x123 = -17;
	uint32_t x124 = 282646U;
	int32_t t21 = -23;

	t21 = (x121%((x122/x123)<=x124));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x125 = 2359U;
	uint32_t x126 = 425582604U;
	volatile int8_t x127 = INT8_MAX;
	volatile uint64_t x128 = UINT64_MAX;
	uint32_t t22 = 9944U;

	t22 = (x125%((x126/x127)<=x128));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x129 = 0;
	static int64_t x130 = INT64_MIN;
	int32_t t23 = 63229127;

	t23 = (x129%((x130/x131)<=x132));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x133 = INT8_MIN;
	static volatile int16_t x134 = -357;
	static uint8_t x136 = 2U;
	int32_t t24 = -357;

	t24 = (x133%((x134/x135)<=x136));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int64_t x137 = -1LL;
	uint8_t x139 = 26U;
	int32_t x140 = 17;
	volatile int64_t t25 = -26760243441LL;

	t25 = (x137%((x138/x139)<=x140));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x141 = -1LL;
	volatile uint32_t x142 = UINT32_MAX;
	volatile int16_t x143 = INT16_MIN;
	int64_t x144 = INT64_MAX;
	volatile int64_t t26 = -138464638833057LL;

	t26 = (x141%((x142/x143)<=x144));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint32_t x145 = UINT32_MAX;
	volatile int32_t x146 = 172316328;
	volatile int32_t x148 = INT32_MAX;
	static volatile uint32_t t27 = 29942U;

	t27 = (x145%((x146/x147)<=x148));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x149 = INT8_MIN;
	volatile int32_t x150 = -3;
	int16_t x151 = -1;
	uint8_t x152 = 46U;
	volatile int32_t t28 = -30763800;

	t28 = (x149%((x150/x151)<=x152));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x153 = -20193;
	static int8_t x154 = 2;
	int64_t x155 = -1LL;
	int16_t x156 = -1;

	t29 = (x153%((x154/x155)<=x156));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x157 = -1;
	volatile uint64_t x158 = UINT64_MAX;
	int8_t x159 = INT8_MIN;
	static int64_t x160 = -1087657036285LL;
	int32_t t30 = 3912;

	t30 = (x157%((x158/x159)<=x160));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x161 = INT64_MAX;
	uint32_t x162 = UINT32_MAX;
	uint64_t x163 = UINT64_MAX;
	uint8_t x164 = 2U;
	static int64_t t31 = 9636701LL;

	t31 = (x161%((x162/x163)<=x164));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x165 = INT64_MAX;
	int32_t x167 = INT32_MAX;
	volatile uint8_t x168 = 0U;

	t32 = (x165%((x166/x167)<=x168));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x173 = UINT32_MAX;
	int64_t x174 = 455633054619907LL;
	int32_t x175 = INT32_MIN;
	int16_t x176 = 375;
	volatile uint32_t t33 = 10U;

	t33 = (x173%((x174/x175)<=x176));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x193 = 15U;
	int32_t x194 = INT32_MIN;
	int32_t x195 = INT32_MAX;
	int32_t t34 = -4008541;

	t34 = (x193%((x194/x195)<=x196));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x197 = 957U;
	int32_t x198 = -1;
	volatile int64_t x199 = -1LL;
	uint16_t x200 = 3700U;

	t35 = (x197%((x198/x199)<=x200));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x209 = 25301787;
	volatile int32_t x210 = INT32_MAX;
	uint32_t x211 = 2U;
	static volatile int32_t x212 = INT32_MIN;

	t36 = (x209%((x210/x211)<=x212));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x222 = -11861255LL;
	int8_t x224 = INT8_MAX;
	volatile int32_t t37 = -148;

	t37 = (x221%((x222/x223)<=x224));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x229 = UINT64_MAX;
	uint64_t x230 = UINT64_MAX;
	int8_t x231 = INT8_MAX;
	volatile uint64_t t38 = 188827442733LLU;

	t38 = (x229%((x230/x231)<=x232));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x233 = -249LL;
	static int8_t x234 = INT8_MIN;
	volatile int64_t x235 = INT64_MAX;
	static int8_t x236 = INT8_MAX;
	int64_t t39 = 1643124791623LL;

	t39 = (x233%((x234/x235)<=x236));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x241 = INT64_MIN;
	static volatile int8_t x242 = -1;
	uint64_t x243 = UINT64_MAX;
	int64_t x244 = 7410171LL;
	static volatile int64_t t40 = -432691LL;

	t40 = (x241%((x242/x243)<=x244));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int8_t x245 = INT8_MIN;
	volatile int32_t x246 = INT32_MAX;
	volatile uint16_t x248 = 48U;
	int32_t t41 = -2096554;

	t41 = (x245%((x246/x247)<=x248));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x249 = INT16_MAX;
	int32_t x251 = INT32_MIN;
	int64_t x252 = -1LL;
	volatile int32_t t42 = -345973;

	t42 = (x249%((x250/x251)<=x252));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x257 = -1LL;
	volatile int16_t x258 = -1;
	volatile int16_t x259 = -1;
	static int64_t x260 = INT64_MAX;
	volatile int64_t t43 = -812628290LL;

	t43 = (x257%((x258/x259)<=x260));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x261 = 1;
	static int16_t x262 = -1;
	int8_t x263 = 1;
	static volatile uint16_t x264 = UINT16_MAX;
	int32_t t44 = 1;

	t44 = (x261%((x262/x263)<=x264));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x265 = -1;
	uint16_t x268 = 21023U;

	t45 = (x265%((x266/x267)<=x268));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x273 = INT64_MIN;
	int32_t x274 = INT32_MAX;
	uint64_t x275 = UINT64_MAX;
	int32_t x276 = INT32_MAX;
	volatile int64_t t46 = 1149287LL;

	t46 = (x273%((x274/x275)<=x276));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x289 = INT32_MIN;
	uint16_t x291 = 19U;
	int64_t x292 = -1LL;
	static volatile int32_t t47 = -669694;

	t47 = (x289%((x290/x291)<=x292));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x293 = -1;
	uint32_t x294 = UINT32_MAX;
	volatile uint8_t x295 = 8U;
	static int64_t x296 = INT64_MAX;

	t48 = (x293%((x294/x295)<=x296));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x305 = 1113086030815667LLU;
	static uint32_t x306 = 375613346U;
	volatile int32_t x307 = INT32_MIN;
	volatile int16_t x308 = 15;
	static uint64_t t49 = 8330606LLU;

	t49 = (x305%((x306/x307)<=x308));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x313 = 1;
	int8_t x314 = INT8_MIN;
	int32_t x315 = -1;
	volatile int32_t x316 = INT32_MAX;
	volatile int32_t t50 = 40360;

	t50 = (x313%((x314/x315)<=x316));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x322 = 860U;
	static volatile int32_t x323 = INT32_MIN;
	uint32_t x324 = 40719254U;
	int64_t t51 = -4652317LL;

	t51 = (x321%((x322/x323)<=x324));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x329 = 16749U;
	static volatile uint32_t x330 = UINT32_MAX;
	static int8_t x332 = -1;
	int32_t t52 = -2;

	t52 = (x329%((x330/x331)<=x332));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x341 = -27545;
	uint32_t x342 = 561492U;
	int32_t x343 = -1;
	uint16_t x344 = UINT16_MAX;
	static int32_t t53 = -3012;

	t53 = (x341%((x342/x343)<=x344));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x346 = 0;
	uint64_t x347 = UINT64_MAX;
	volatile uint8_t x348 = 10U;

	t54 = (x345%((x346/x347)<=x348));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x350 = -185;
	static int16_t x351 = INT16_MIN;
	volatile int32_t t55 = -94592804;

	t55 = (x349%((x350/x351)<=x352));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x353 = 10U;
	uint16_t x356 = 109U;
	volatile int32_t t56 = 1;

	t56 = (x353%((x354/x355)<=x356));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x362 = -1;
	uint64_t x363 = UINT64_MAX;
	int16_t x364 = INT16_MAX;

	t57 = (x361%((x362/x363)<=x364));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x369 = UINT16_MAX;
	volatile int32_t x370 = 213539848;
	volatile uint32_t x371 = UINT32_MAX;
	int16_t x372 = 988;
	volatile int32_t t58 = -109;

	t58 = (x369%((x370/x371)<=x372));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x374 = 15245309LLU;
	static uint32_t x375 = 11U;
	volatile int16_t x376 = INT16_MIN;
	static int32_t t59 = -1;

	t59 = (x373%((x374/x375)<=x376));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x377 = INT64_MIN;
	uint8_t x378 = UINT8_MAX;
	int16_t x380 = -453;
	volatile int64_t t60 = -2825686LL;

	t60 = (x377%((x378/x379)<=x380));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x385 = INT8_MIN;
	int16_t x386 = -1;
	int8_t x387 = -1;

	t61 = (x385%((x386/x387)<=x388));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x397 = INT32_MIN;
	uint16_t x399 = 3U;
	volatile int32_t t62 = -43;

	t62 = (x397%((x398/x399)<=x400));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x401 = UINT8_MAX;
	static int32_t x402 = -1;
	int8_t x403 = INT8_MIN;
	static uint64_t x404 = UINT64_MAX;

	t63 = (x401%((x402/x403)<=x404));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x409 = INT64_MIN;
	volatile uint64_t x410 = 276639840931463LLU;
	int8_t x412 = -11;
	int64_t t64 = -62345530955388742LL;

	t64 = (x409%((x410/x411)<=x412));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x418 = INT64_MIN;
	uint8_t x419 = UINT8_MAX;
	volatile int8_t x420 = 0;
	int32_t t65 = -96014;

	t65 = (x417%((x418/x419)<=x420));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x425 = INT8_MAX;
	int8_t x426 = INT8_MIN;
	uint32_t x427 = UINT32_MAX;
	static int32_t t66 = -321270;

	t66 = (x425%((x426/x427)<=x428));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int8_t x429 = 1;
	static int32_t x430 = INT32_MIN;
	uint64_t x431 = UINT64_MAX;
	static int32_t t67 = 1;

	t67 = (x429%((x430/x431)<=x432));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x433 = -2753;
	uint8_t x434 = UINT8_MAX;
	int8_t x435 = INT8_MAX;
	uint64_t x436 = 72LLU;
	volatile int32_t t68 = 15814;

	t68 = (x433%((x434/x435)<=x436));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x441 = INT32_MAX;
	volatile int16_t x442 = INT16_MAX;
	uint16_t x444 = UINT16_MAX;
	static int32_t t69 = 0;

	t69 = (x441%((x442/x443)<=x444));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x449 = 4;
	int16_t x450 = INT16_MIN;
	int8_t x451 = INT8_MAX;
	static volatile uint8_t x452 = UINT8_MAX;

	t70 = (x449%((x450/x451)<=x452));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x453 = INT16_MIN;
	static uint16_t x454 = 1552U;
	int64_t x455 = -1LL;
	static int8_t x456 = 45;
	int32_t t71 = -2417;

	t71 = (x453%((x454/x455)<=x456));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x457 = -1;
	static int32_t x458 = 13497660;
	int32_t x459 = 93385677;
	static uint32_t x460 = 35879892U;

	t72 = (x457%((x458/x459)<=x460));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x467 = -1;
	int16_t x468 = INT16_MAX;
	uint32_t t73 = 303493529U;

	t73 = (x465%((x466/x467)<=x468));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x473 = INT32_MAX;
	static uint64_t x474 = 118140370586LLU;
	int8_t x475 = -10;
	uint16_t x476 = 6513U;
	int32_t t74 = 1;

	t74 = (x473%((x474/x475)<=x476));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x477 = INT8_MIN;
	uint32_t x478 = 2U;
	int8_t x479 = INT8_MIN;
	volatile int32_t t75 = 0;

	t75 = (x477%((x478/x479)<=x480));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x485 = INT16_MAX;
	static uint32_t x486 = UINT32_MAX;
	uint64_t x487 = UINT64_MAX;
	int64_t x488 = INT64_MIN;
	int32_t t76 = 249;

	t76 = (x485%((x486/x487)<=x488));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint8_t x489 = UINT8_MAX;
	volatile uint32_t x490 = UINT32_MAX;
	static int16_t x491 = INT16_MIN;

	t77 = (x489%((x490/x491)<=x492));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x497 = 1644014LLU;
	int16_t x500 = INT16_MIN;

	t78 = (x497%((x498/x499)<=x500));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x501 = INT64_MAX;
	uint64_t x502 = 7210789LLU;
	int16_t x503 = INT16_MAX;
	int64_t t79 = 0LL;

	t79 = (x501%((x502/x503)<=x504));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x509 = 1U;
	static uint64_t x511 = UINT64_MAX;
	volatile int32_t t80 = 1937533;

	t80 = (x509%((x510/x511)<=x512));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x518 = 24950U;
	uint64_t x519 = 233440315LLU;
	uint8_t x520 = UINT8_MAX;

	t81 = (x517%((x518/x519)<=x520));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x521 = 1;
	uint16_t x522 = 90U;
	int32_t x523 = 60;
	volatile int32_t t82 = 5;

	t82 = (x521%((x522/x523)<=x524));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x529 = 2U;
	int32_t x530 = -222;
	volatile uint8_t x531 = UINT8_MAX;
	static uint8_t x532 = 7U;
	int32_t t83 = 1;

	t83 = (x529%((x530/x531)<=x532));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x537 = UINT8_MAX;
	static int64_t x538 = -1LL;
	int8_t x539 = INT8_MAX;
	uint64_t x540 = UINT64_MAX;
	volatile int32_t t84 = 2979;

	t84 = (x537%((x538/x539)<=x540));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x545 = INT16_MAX;
	int32_t x547 = -1983;

	t85 = (x545%((x546/x547)<=x548));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x550 = INT8_MIN;
	static int64_t x551 = -587171011838368LL;
	uint64_t x552 = 58053746853457LLU;
	volatile int64_t t86 = -1LL;

	t86 = (x549%((x550/x551)<=x552));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x553 = -787722225;
	static int16_t x555 = INT16_MIN;
	int32_t t87 = 2;

	t87 = (x553%((x554/x555)<=x556));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x565 = -1LL;
	int16_t x566 = -17;
	static int64_t x568 = INT64_MAX;

	t88 = (x565%((x566/x567)<=x568));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x569 = 1;
	volatile uint32_t x570 = 61U;
	int32_t x571 = INT32_MIN;
	uint16_t x572 = UINT16_MAX;
	static volatile int32_t t89 = 16618873;

	t89 = (x569%((x570/x571)<=x572));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x573 = INT8_MIN;
	static int64_t x574 = INT64_MIN;
	int16_t x576 = 0;
	int32_t t90 = -189204;

	t90 = (x573%((x574/x575)<=x576));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x577 = INT16_MAX;
	int32_t x578 = INT32_MIN;
	static uint16_t x579 = UINT16_MAX;
	uint32_t x580 = UINT32_MAX;
	int32_t t91 = -34260534;

	t91 = (x577%((x578/x579)<=x580));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x581 = UINT8_MAX;
	static volatile int8_t x582 = INT8_MAX;
	static uint64_t x583 = 3112706362657532LLU;
	static int32_t x584 = INT32_MIN;
	static volatile int32_t t92 = 1;

	t92 = (x581%((x582/x583)<=x584));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x589 = -1;
	int8_t x590 = INT8_MIN;
	uint64_t x592 = 17502044LLU;
	int32_t t93 = -1688287;

	t93 = (x589%((x590/x591)<=x592));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x593 = 6040991075751LL;
	int16_t x594 = 1;
	int64_t x595 = INT64_MIN;
	volatile int64_t t94 = 59744LL;

	t94 = (x593%((x594/x595)<=x596));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x601 = 5898U;
	uint64_t x602 = 2411LLU;
	volatile uint32_t x603 = 1553962U;
	volatile int8_t x604 = INT8_MAX;
	int32_t t95 = -240384863;

	t95 = (x601%((x602/x603)<=x604));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x613 = 539017U;
	uint32_t x614 = 578U;
	uint8_t x615 = 3U;
	static int32_t x616 = INT32_MAX;
	uint32_t t96 = 54583585U;

	t96 = (x613%((x614/x615)<=x616));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x618 = -1LL;
	uint16_t x619 = UINT16_MAX;
	uint32_t x620 = 7U;
	int32_t t97 = -397;

	t97 = (x617%((x618/x619)<=x620));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x621 = INT8_MIN;
	uint32_t x622 = UINT32_MAX;
	int8_t x623 = INT8_MIN;
	int32_t x624 = 215;
	volatile int32_t t98 = 0;

	t98 = (x621%((x622/x623)<=x624));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x625 = INT64_MIN;
	static int64_t x626 = -126539833LL;
	volatile uint8_t x627 = 8U;
	uint8_t x628 = 24U;
	volatile int64_t t99 = -5LL;

	t99 = (x625%((x626/x627)<=x628));

	if (t99 != 0LL) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}


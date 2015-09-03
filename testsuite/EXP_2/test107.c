#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x4 = UINT64_MAX;
static volatile int8_t x7 = 3;
int8_t x15 = 1;
uint16_t x16 = 28501U;
int32_t x17 = INT32_MIN;
int64_t x19 = INT64_MIN;
int16_t x22 = INT16_MAX;
volatile uint8_t x31 = 2U;
static uint16_t x32 = 1U;
uint32_t x39 = UINT32_MAX;
uint16_t x49 = 323U;
int32_t x51 = INT32_MIN;
static int64_t x57 = INT64_MAX;
int16_t x59 = 902;
volatile uint64_t x62 = 54LLU;
int32_t x70 = -1;
int64_t t15 = INT64_MAX;
int8_t x77 = -1;
int64_t x78 = INT64_MIN;
uint16_t x79 = 181U;
int32_t t18 = 3;
int8_t x89 = 3;
int8_t x91 = INT8_MIN;
static volatile int32_t x97 = -1;
static volatile uint32_t t22 = 6876365U;
volatile uint16_t x115 = 29U;
int32_t t25 = -176051;
static uint8_t x118 = UINT8_MAX;
static volatile int32_t t26 = -121;
static volatile int32_t t28 = -29398312;
uint16_t x134 = UINT16_MAX;
int8_t x135 = INT8_MAX;
static uint64_t x137 = 5941LLU;
static volatile uint32_t t31 = 10U;
volatile int16_t x148 = INT16_MIN;
int8_t x151 = INT8_MIN;
int8_t x158 = INT8_MIN;
volatile int64_t t35 = 2986229LL;
volatile uint8_t x162 = 7U;
int16_t x172 = -1;
uint64_t x177 = UINT64_MAX;
volatile int32_t x184 = -1;
int32_t x187 = -1;
static int8_t x196 = -17;
volatile int32_t x201 = INT32_MIN;
int16_t x205 = INT16_MAX;
uint32_t x218 = 95545U;
int8_t x225 = 1;
static int16_t x228 = INT16_MAX;
static int32_t x250 = 18109909;
uint16_t x272 = 4U;
uint64_t x274 = 37109LLU;
static uint8_t x275 = UINT8_MAX;
int64_t x278 = -46099781LL;
int16_t x280 = INT16_MIN;
uint64_t x299 = 311884016143027196LLU;
int32_t t60 = INT32_MIN;
static int8_t x305 = INT8_MAX;
uint32_t x306 = UINT32_MAX;
int16_t x311 = -1;
static uint16_t x317 = 55U;
uint32_t x320 = 1294593U;
int64_t x322 = 1LL;
uint8_t x325 = UINT8_MAX;
volatile int64_t t67 = 41926101767326LL;
static int32_t t68 = -59554809;
volatile int32_t x341 = -649;
int32_t x344 = INT32_MAX;
int8_t x354 = INT8_MAX;
static volatile int16_t x360 = INT16_MIN;
volatile uint32_t x366 = 344837U;
volatile int8_t x371 = INT8_MIN;
int64_t x378 = 5617LL;
static int32_t x381 = INT32_MIN;
uint16_t x387 = 770U;
static volatile int32_t t82 = 1751580;
int16_t x395 = INT16_MIN;
volatile int32_t t83 = -14730;
uint16_t x398 = 30U;
uint32_t x411 = UINT32_MAX;
int32_t x412 = INT32_MIN;
static volatile int16_t x413 = 2175;
uint32_t x415 = UINT32_MAX;
static volatile int64_t x416 = INT64_MAX;
volatile int64_t t87 = -54665732835776LL;
static int16_t x417 = INT16_MIN;
int8_t x420 = -23;
uint16_t x426 = 8120U;
uint8_t x427 = 19U;
int16_t x434 = -1;
static uint32_t x435 = UINT32_MAX;
int32_t t92 = INT32_MIN;
uint32_t x437 = UINT32_MAX;
volatile int8_t x445 = -1;
uint64_t x446 = 3465497434101174LLU;
int64_t x456 = -1LL;
volatile int64_t t96 = INT64_MIN;


void f0(void) {
	int32_t x1 = INT32_MIN;
	volatile uint16_t x2 = 1U;
	int16_t x3 = 5859;
	static uint64_t t0 = UINT64_MAX;

	t0 = ((x1<(x2+x3))*x4);

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int64_t x5 = -1LL;
	uint8_t x6 = 2U;
	static int8_t x8 = 16;
	volatile int32_t t1 = -106203;

	t1 = ((x5<(x6+x7))*x8);

	if (t1 != 16) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = 42;
	int8_t x10 = -1;
	static int8_t x11 = INT8_MIN;
	int32_t x12 = INT32_MAX;
	int32_t t2 = -546;

	t2 = ((x9<(x10+x11))*x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 0U;
	int32_t x14 = 57874369;
	volatile int32_t t3 = -33444309;

	t3 = ((x13<(x14+x15))*x16);

	if (t3 != 28501) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = INT32_MAX;
	int16_t x20 = 1885;
	static volatile int32_t t4 = 1976449;

	t4 = ((x17<(x18+x19))*x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int64_t x21 = -1LL;
	int32_t x23 = -1;
	volatile uint64_t x24 = 54078058LLU;
	uint64_t t5 = 957043066255529768LLU;

	t5 = ((x21<(x22+x23))*x24);

	if (t5 != 54078058LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 872142U;
	int8_t x26 = 1;
	uint32_t x27 = 1U;
	volatile int64_t x28 = 159380508LL;
	volatile int64_t t6 = -3490603LL;

	t6 = ((x25<(x26+x27))*x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x29 = UINT16_MAX;
	int64_t x30 = INT64_MIN;
	int32_t t7 = -61153401;

	t7 = ((x29<(x30+x31))*x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x37 = 21U;
	int8_t x38 = INT8_MIN;
	int16_t x40 = -12330;
	volatile int32_t t8 = 127830;

	t8 = ((x37<(x38+x39))*x40);

	if (t8 != -12330) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x41 = -1;
	int32_t x42 = -4773;
	uint32_t x43 = 3U;
	int16_t x44 = -1;
	volatile int32_t t9 = -1778;

	t9 = ((x41<(x42+x43))*x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = -147;
	int64_t x46 = 1312085684LL;
	static uint64_t x47 = UINT64_MAX;
	static int32_t x48 = INT32_MIN;
	int32_t t10 = 7516797;

	t10 = ((x45<(x46+x47))*x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x50 = 5121001LLU;
	uint32_t x52 = 24280U;
	volatile uint32_t t11 = 6969127U;

	t11 = ((x49<(x50+x51))*x52);

	if (t11 != 24280U) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x58 = INT64_MIN;
	int8_t x60 = -1;
	int32_t t12 = 34812378;

	t12 = ((x57<(x58+x59))*x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x61 = 4U;
	int32_t x63 = -4;
	int64_t x64 = -19LL;
	static int64_t t13 = -20LL;

	t13 = ((x61<(x62+x63))*x64);

	if (t13 != -19LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x65 = INT16_MAX;
	volatile uint16_t x66 = UINT16_MAX;
	int16_t x67 = INT16_MIN;
	volatile int16_t x68 = INT16_MIN;
	static volatile int32_t t14 = -38466;

	t14 = ((x65<(x66+x67))*x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x69 = -26;
	uint8_t x71 = 0U;
	volatile int64_t x72 = INT64_MAX;

	t15 = ((x69<(x70+x71))*x72);

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x73 = 21;
	int64_t x74 = 31654LL;
	int16_t x75 = -3;
	int8_t x76 = INT8_MAX;
	int32_t t16 = -1801;

	t16 = ((x73<(x74+x75))*x76);

	if (t16 != 127) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x80 = 16788491U;
	uint32_t t17 = 26974419U;

	t17 = ((x77<(x78+x79))*x80);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x81 = 1491944110U;
	static int8_t x82 = INT8_MAX;
	uint32_t x83 = UINT32_MAX;
	uint16_t x84 = 238U;

	t18 = ((x81<(x82+x83))*x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x85 = 1019252U;
	volatile int8_t x86 = -1;
	static volatile int8_t x87 = INT8_MAX;
	int64_t x88 = -1LL;
	volatile int64_t t19 = -28241201019413LL;

	t19 = ((x85<(x86+x87))*x88);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x90 = 4LLU;
	int16_t x92 = INT16_MAX;
	volatile int32_t t20 = -20352;

	t20 = ((x89<(x90+x91))*x92);

	if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x93 = 53436U;
	static uint8_t x94 = UINT8_MAX;
	uint8_t x95 = 0U;
	int8_t x96 = INT8_MIN;
	int32_t t21 = -670877427;

	t21 = ((x93<(x94+x95))*x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x98 = 21475U;
	int16_t x99 = -1;
	uint32_t x100 = 178U;

	t22 = ((x97<(x98+x99))*x100);

	if (t22 != 178U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x101 = 2126860102U;
	uint16_t x102 = 3U;
	int8_t x103 = -1;
	int32_t x104 = INT32_MIN;
	volatile int32_t t23 = 10633997;

	t23 = ((x101<(x102+x103))*x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x105 = 4U;
	int16_t x106 = -1;
	static volatile uint32_t x107 = 45U;
	uint64_t x108 = 1LLU;
	volatile uint64_t t24 = 20LLU;

	t24 = ((x105<(x106+x107))*x108);

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x113 = INT16_MAX;
	volatile int8_t x114 = INT8_MIN;
	uint8_t x116 = 77U;

	t25 = ((x113<(x114+x115))*x116);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x117 = UINT32_MAX;
	volatile int32_t x119 = -1;
	int32_t x120 = -13891;

	t26 = ((x117<(x118+x119))*x120);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x121 = -1LL;
	int64_t x122 = -2LL;
	int16_t x123 = -18;
	int32_t x124 = INT32_MIN;
	volatile int32_t t27 = 31;

	t27 = ((x121<(x122+x123))*x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x125 = -1;
	int16_t x126 = INT16_MIN;
	volatile uint8_t x127 = 12U;
	int32_t x128 = INT32_MIN;

	t28 = ((x125<(x126+x127))*x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x133 = 14LL;
	int64_t x136 = INT64_MIN;
	volatile int64_t t29 = INT64_MIN;

	t29 = ((x133<(x134+x135))*x136);

	if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x138 = INT16_MIN;
	volatile uint64_t x139 = 59133698LLU;
	volatile int8_t x140 = INT8_MIN;
	volatile int32_t t30 = 39;

	t30 = ((x137<(x138+x139))*x140);

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x141 = -233504486874LL;
	uint8_t x142 = 90U;
	int32_t x143 = -94415740;
	uint32_t x144 = 113U;

	t31 = ((x141<(x142+x143))*x144);

	if (t31 != 113U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x145 = 0;
	int8_t x146 = -1;
	int64_t x147 = -2840LL;
	int32_t t32 = 26972;

	t32 = ((x145<(x146+x147))*x148);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x149 = INT16_MIN;
	int8_t x150 = 0;
	uint32_t x152 = UINT32_MAX;
	static volatile uint32_t t33 = UINT32_MAX;

	t33 = ((x149<(x150+x151))*x152);

	if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x153 = INT8_MIN;
	int16_t x154 = -11;
	volatile uint16_t x155 = 422U;
	int64_t x156 = 11909LL;
	int64_t t34 = -34LL;

	t34 = ((x153<(x154+x155))*x156);

	if (t34 != 11909LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x157 = -134724057;
	int8_t x159 = INT8_MAX;
	static int64_t x160 = -1017LL;

	t35 = ((x157<(x158+x159))*x160);

	if (t35 != -1017LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x161 = -8366457476LL;
	volatile int64_t x163 = INT64_MIN;
	volatile uint64_t x164 = 3LLU;
	uint64_t t36 = 52LLU;

	t36 = ((x161<(x162+x163))*x164);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x165 = 59676;
	uint8_t x166 = UINT8_MAX;
	int64_t x167 = 382575103844127507LL;
	uint8_t x168 = 1U;
	int32_t t37 = 171663;

	t37 = ((x165<(x166+x167))*x168);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x169 = 491;
	uint16_t x170 = 784U;
	int16_t x171 = INT16_MIN;
	static int32_t t38 = 1763;

	t38 = ((x169<(x170+x171))*x172);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x173 = INT32_MIN;
	volatile uint64_t x174 = UINT64_MAX;
	uint32_t x175 = 23348U;
	int64_t x176 = INT64_MAX;
	int64_t t39 = 46905013LL;

	t39 = ((x173<(x174+x175))*x176);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x178 = -1;
	int8_t x179 = INT8_MIN;
	int16_t x180 = INT16_MIN;
	volatile int32_t t40 = 25;

	t40 = ((x177<(x178+x179))*x180);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x181 = INT16_MAX;
	uint8_t x182 = 62U;
	int8_t x183 = INT8_MAX;
	int32_t t41 = -16095;

	t41 = ((x181<(x182+x183))*x184);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x185 = INT8_MAX;
	uint16_t x186 = 770U;
	uint32_t x188 = 12921U;
	volatile uint32_t t42 = 2784U;

	t42 = ((x185<(x186+x187))*x188);

	if (t42 != 12921U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x189 = INT32_MAX;
	uint64_t x190 = 14780610992872901LLU;
	int64_t x191 = INT64_MIN;
	uint16_t x192 = 4407U;
	volatile int32_t t43 = 0;

	t43 = ((x189<(x190+x191))*x192);

	if (t43 != 4407) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x193 = INT8_MIN;
	int32_t x194 = INT32_MAX;
	static uint64_t x195 = 184297314LLU;
	static int32_t t44 = 43952780;

	t44 = ((x193<(x194+x195))*x196);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x202 = INT8_MIN;
	int16_t x203 = 147;
	int8_t x204 = INT8_MIN;
	int32_t t45 = -295380;

	t45 = ((x201<(x202+x203))*x204);

	if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x206 = INT32_MIN;
	uint16_t x207 = UINT16_MAX;
	int32_t x208 = -1;
	volatile int32_t t46 = 0;

	t46 = ((x205<(x206+x207))*x208);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x217 = INT8_MAX;
	volatile int8_t x219 = 0;
	int32_t x220 = -1;
	volatile int32_t t47 = -2852;

	t47 = ((x217<(x218+x219))*x220);

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x221 = 390293751U;
	uint32_t x222 = 228966477U;
	static volatile int16_t x223 = -1;
	static int8_t x224 = 20;
	int32_t t48 = -10;

	t48 = ((x221<(x222+x223))*x224);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x226 = INT64_MIN;
	int64_t x227 = INT64_MAX;
	int32_t t49 = 573154;

	t49 = ((x225<(x226+x227))*x228);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x233 = INT16_MIN;
	volatile int8_t x234 = INT8_MAX;
	int16_t x235 = 0;
	volatile int32_t x236 = INT32_MAX;
	int32_t t50 = INT32_MAX;

	t50 = ((x233<(x234+x235))*x236);

	if (t50 != INT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x237 = UINT16_MAX;
	volatile uint16_t x238 = 1U;
	int8_t x239 = 1;
	uint64_t x240 = 610197264410483LLU;
	uint64_t t51 = 345774742321902931LLU;

	t51 = ((x237<(x238+x239))*x240);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x241 = 5296LLU;
	volatile int16_t x242 = INT16_MIN;
	uint64_t x243 = 7742844531LLU;
	static uint16_t x244 = UINT16_MAX;
	volatile int32_t t52 = -220814;

	t52 = ((x241<(x242+x243))*x244);

	if (t52 != 65535) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x245 = -1;
	int32_t x246 = -1806;
	int32_t x247 = -1;
	int32_t x248 = INT32_MAX;
	int32_t t53 = 1073;

	t53 = ((x245<(x246+x247))*x248);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x249 = UINT64_MAX;
	static int16_t x251 = INT16_MAX;
	volatile int64_t x252 = -13LL;
	int64_t t54 = 3194209671LL;

	t54 = ((x249<(x250+x251))*x252);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x261 = -1LL;
	int32_t x262 = 311594642;
	uint8_t x263 = 6U;
	int8_t x264 = 60;
	volatile int32_t t55 = 5;

	t55 = ((x261<(x262+x263))*x264);

	if (t55 != 60) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x269 = UINT8_MAX;
	int16_t x270 = -445;
	uint64_t x271 = 326682307321317LLU;
	int32_t t56 = 2;

	t56 = ((x269<(x270+x271))*x272);

	if (t56 != 4) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x273 = -1;
	int32_t x276 = -1;
	int32_t t57 = 3;

	t57 = ((x273<(x274+x275))*x276);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x277 = INT64_MIN;
	volatile int8_t x279 = -1;
	static int32_t t58 = -625;

	t58 = ((x277<(x278+x279))*x280);

	if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x281 = INT64_MAX;
	int64_t x282 = -1297LL;
	volatile int8_t x283 = -3;
	static int8_t x284 = -15;
	int32_t t59 = 1;

	t59 = ((x281<(x282+x283))*x284);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x297 = 296400400315LLU;
	int64_t x298 = INT64_MIN;
	int32_t x300 = INT32_MIN;

	t60 = ((x297<(x298+x299))*x300);

	if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x301 = -1;
	volatile int64_t x302 = -2588LL;
	int32_t x303 = -6301;
	static int16_t x304 = INT16_MIN;
	int32_t t61 = -293084136;

	t61 = ((x301<(x302+x303))*x304);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x307 = 110U;
	static int8_t x308 = -1;
	int32_t t62 = -8287;

	t62 = ((x305<(x306+x307))*x308);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x309 = -8772;
	int8_t x310 = -1;
	int8_t x312 = -1;
	volatile int32_t t63 = -203165298;

	t63 = ((x309<(x310+x311))*x312);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int32_t x313 = INT32_MAX;
	volatile int16_t x314 = 77;
	static uint16_t x315 = 6U;
	static volatile int64_t x316 = 729144858860LL;
	int64_t t64 = 99773233513915811LL;

	t64 = ((x313<(x314+x315))*x316);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x318 = -1166290LL;
	uint32_t x319 = 676137U;
	volatile uint32_t t65 = 561157420U;

	t65 = ((x317<(x318+x319))*x320);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x321 = INT64_MIN;
	int8_t x323 = INT8_MIN;
	static volatile int32_t x324 = 1;
	volatile int32_t t66 = 44190778;

	t66 = ((x321<(x322+x323))*x324);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x326 = 11U;
	static int16_t x327 = INT16_MIN;
	int64_t x328 = INT64_MAX;

	t67 = ((x325<(x326+x327))*x328);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x333 = -1;
	int64_t x334 = INT64_MIN;
	volatile uint32_t x335 = 0U;
	int32_t x336 = -2388866;

	t68 = ((x333<(x334+x335))*x336);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int8_t x337 = -1;
	int16_t x338 = -30;
	int32_t x339 = INT32_MAX;
	int64_t x340 = -357LL;
	static int64_t t69 = 8000LL;

	t69 = ((x337<(x338+x339))*x340);

	if (t69 != -357LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x342 = 62;
	int16_t x343 = INT16_MIN;
	int32_t t70 = 18504;

	t70 = ((x341<(x342+x343))*x344);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x345 = INT16_MIN;
	static int64_t x346 = INT64_MIN;
	uint8_t x347 = 0U;
	int32_t x348 = -22;
	volatile int32_t t71 = -7;

	t71 = ((x345<(x346+x347))*x348);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x349 = -1;
	static int64_t x350 = INT64_MIN;
	uint64_t x351 = 65172188037LLU;
	int64_t x352 = INT64_MIN;
	int64_t t72 = 31091544211501504LL;

	t72 = ((x349<(x350+x351))*x352);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x353 = 26U;
	int32_t x355 = INT32_MIN;
	int16_t x356 = INT16_MIN;
	static int32_t t73 = -1;

	t73 = ((x353<(x354+x355))*x356);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x357 = 125U;
	static uint64_t x358 = 65940268145054911LLU;
	uint8_t x359 = 0U;
	volatile int32_t t74 = 38866985;

	t74 = ((x357<(x358+x359))*x360);

	if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x361 = 3U;
	int16_t x362 = INT16_MIN;
	uint64_t x363 = UINT64_MAX;
	int16_t x364 = -2;
	static int32_t t75 = 1;

	t75 = ((x361<(x362+x363))*x364);

	if (t75 != -2) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x365 = INT8_MIN;
	static volatile int16_t x367 = 630;
	int64_t x368 = -1LL;
	volatile int64_t t76 = -4664811LL;

	t76 = ((x365<(x366+x367))*x368);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x369 = 9;
	int64_t x370 = 6727LL;
	int64_t x372 = INT64_MAX;
	volatile int64_t t77 = INT64_MAX;

	t77 = ((x369<(x370+x371))*x372);

	if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x373 = -1;
	int64_t x374 = -1LL;
	volatile int8_t x375 = INT8_MIN;
	int64_t x376 = 20LL;
	int64_t t78 = -1682LL;

	t78 = ((x373<(x374+x375))*x376);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x377 = UINT64_MAX;
	int16_t x379 = 0;
	int32_t x380 = -1;
	int32_t t79 = -27;

	t79 = ((x377<(x378+x379))*x380);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x382 = 212180613975LLU;
	int64_t x383 = 31881603084213517LL;
	uint64_t x384 = 203LLU;
	static volatile uint64_t t80 = 14833LLU;

	t80 = ((x381<(x382+x383))*x384);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int32_t x385 = INT32_MIN;
	static int32_t x386 = -1;
	static uint8_t x388 = 7U;
	int32_t t81 = 0;

	t81 = ((x385<(x386+x387))*x388);

	if (t81 != 7) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x389 = INT8_MIN;
	static int32_t x390 = INT32_MAX;
	int64_t x391 = -83381LL;
	int16_t x392 = INT16_MAX;

	t82 = ((x389<(x390+x391))*x392);

	if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x393 = UINT64_MAX;
	int64_t x394 = -1LL;
	uint16_t x396 = 233U;

	t83 = ((x393<(x394+x395))*x396);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x397 = 113311U;
	static volatile uint16_t x399 = UINT16_MAX;
	uint16_t x400 = UINT16_MAX;
	int32_t t84 = 23;

	t84 = ((x397<(x398+x399))*x400);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x405 = INT64_MIN;
	uint64_t x406 = UINT64_MAX;
	uint8_t x407 = 5U;
	int16_t x408 = INT16_MAX;
	volatile int32_t t85 = -37;

	t85 = ((x405<(x406+x407))*x408);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x409 = INT64_MIN;
	uint64_t x410 = 17137338846220116LLU;
	int32_t t86 = 413;

	t86 = ((x409<(x410+x411))*x412);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x414 = 11;

	t87 = ((x413<(x414+x415))*x416);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x418 = INT32_MIN;
	int16_t x419 = INT16_MAX;
	volatile int32_t t88 = 508;

	t88 = ((x417<(x418+x419))*x420);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x421 = 219LL;
	uint16_t x422 = 24635U;
	static int32_t x423 = -1;
	static uint8_t x424 = 7U;
	int32_t t89 = -355237898;

	t89 = ((x421<(x422+x423))*x424);

	if (t89 != 7) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x425 = -1;
	int8_t x428 = INT8_MIN;
	int32_t t90 = -37401;

	t90 = ((x425<(x426+x427))*x428);

	if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x429 = 1;
	static uint8_t x430 = UINT8_MAX;
	int16_t x431 = 2;
	int64_t x432 = INT64_MIN;
	int64_t t91 = INT64_MIN;

	t91 = ((x429<(x430+x431))*x432);

	if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x433 = UINT8_MAX;
	volatile int32_t x436 = INT32_MIN;

	t92 = ((x433<(x434+x435))*x436);

	if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x438 = -27409;
	int32_t x439 = INT32_MAX;
	volatile int32_t x440 = INT32_MAX;
	int32_t t93 = 1;

	t93 = ((x437<(x438+x439))*x440);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x447 = INT8_MIN;
	int8_t x448 = INT8_MIN;
	int32_t t94 = 1521;

	t94 = ((x445<(x446+x447))*x448);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x453 = INT64_MIN;
	int8_t x454 = -59;
	int16_t x455 = 9;
	int64_t t95 = 76LL;

	t95 = ((x453<(x454+x455))*x456);

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x457 = 89U;
	int16_t x458 = INT16_MAX;
	int32_t x459 = -672;
	int64_t x460 = INT64_MIN;

	t96 = ((x457<(x458+x459))*x460);

	if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x461 = 3501;
	volatile int16_t x462 = INT16_MIN;
	int64_t x463 = 83640822LL;
	volatile int64_t x464 = INT64_MIN;
	volatile int64_t t97 = INT64_MIN;

	t97 = ((x461<(x462+x463))*x464);

	if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x465 = 51U;
	volatile int8_t x466 = -1;
	int8_t x467 = -1;
	int32_t x468 = INT32_MAX;
	static int32_t t98 = 32027543;

	t98 = ((x465<(x466+x467))*x468);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x469 = -1;
	uint8_t x470 = 16U;
	static int64_t x471 = 16864067246404689LL;
	int16_t x472 = INT16_MIN;
	volatile int32_t t99 = 745;

	t99 = ((x469<(x470+x471))*x472);

	if (t99 != -32768) { NG(); } else { ; }
	
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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MIN;
int8_t x11 = 0;
static volatile uint16_t x17 = 500U;
uint64_t x18 = UINT64_MAX;
uint8_t x19 = 1U;
volatile int32_t t4 = -149;
static int8_t x52 = INT8_MAX;
uint16_t x54 = 1U;
int16_t x57 = INT16_MIN;
int32_t x76 = INT32_MIN;
volatile int8_t x92 = 1;
static int32_t x94 = -1;
int32_t x96 = INT32_MIN;
int32_t x105 = INT32_MIN;
volatile int16_t x106 = 1;
uint64_t x126 = UINT64_MAX;
volatile int32_t t20 = 53804425;
volatile int8_t x139 = INT8_MIN;
uint32_t x158 = UINT32_MAX;
uint8_t x163 = 0U;
int64_t x164 = INT64_MIN;
uint32_t x177 = 448234896U;
static volatile int8_t x185 = INT8_MIN;
uint16_t x186 = 575U;
volatile int32_t t30 = -1;
int32_t t31 = 498;
int64_t x197 = -1LL;
volatile int32_t x216 = INT32_MAX;
int32_t x227 = INT32_MIN;
static int16_t x228 = 0;
static volatile int32_t t35 = 1807;
volatile int32_t x229 = INT32_MIN;
int16_t x235 = 2;
uint8_t x237 = 24U;
static volatile int32_t x238 = -1;
static volatile int64_t x240 = INT64_MIN;
static uint32_t x249 = 20U;
volatile int32_t x261 = -1;
volatile uint8_t x266 = 3U;
uint8_t x270 = 47U;
volatile uint16_t x271 = 3U;
uint16_t x277 = 380U;
uint64_t x281 = UINT64_MAX;
uint16_t x282 = 13556U;
volatile uint32_t x284 = 124389U;
int16_t x295 = INT16_MAX;
uint8_t x296 = 13U;
int16_t x298 = -1;
static int16_t x306 = INT16_MAX;
uint32_t x307 = UINT32_MAX;
uint16_t x312 = 13U;
int32_t x326 = INT32_MAX;
int16_t x330 = -14;
int8_t x335 = 6;
static int32_t t59 = 638859863;
volatile uint64_t x349 = 89713714684829560LLU;
int64_t x350 = INT64_MAX;
int64_t x360 = INT64_MIN;
volatile int8_t x364 = -1;
volatile int32_t t63 = 0;
volatile int16_t x381 = -1;
uint8_t x382 = UINT8_MAX;
int16_t x383 = -1;
static uint16_t x388 = UINT16_MAX;
static uint8_t x398 = 13U;
uint16_t x400 = UINT16_MAX;
volatile uint32_t x411 = 35740294U;
int64_t x416 = INT64_MAX;
int8_t x422 = INT8_MAX;
int16_t x425 = -1;
volatile uint32_t x426 = UINT32_MAX;
volatile int8_t x435 = INT8_MIN;
static uint8_t x441 = UINT8_MAX;
int64_t x457 = -1LL;
volatile uint64_t x458 = UINT64_MAX;
static int16_t x467 = INT16_MIN;
int8_t x468 = INT8_MIN;
int64_t x474 = -112490711189588LL;
volatile int8_t x477 = -1;
int64_t x478 = 2198740LL;
int64_t x490 = -1498616LL;
int8_t x495 = -1;
volatile uint32_t x497 = UINT32_MAX;
static int32_t t91 = 0;
int16_t x519 = INT16_MIN;
static uint8_t x522 = 1U;
uint32_t x533 = 4367U;
int8_t x540 = INT8_MIN;
int32_t x541 = INT32_MIN;
uint16_t x543 = 30U;
volatile uint16_t x545 = 0U;
int32_t t99 = -381622;


void f0(void) {
	volatile int16_t x2 = -1;
	int8_t x3 = -14;
	int64_t x4 = INT64_MIN;
	static volatile int32_t t0 = 0;

	t0 = ((x1&(x2*x3))<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	int8_t x6 = INT8_MAX;
	volatile uint64_t x7 = 4470705656429471LLU;
	volatile int64_t x8 = INT64_MIN;
	int32_t t1 = 38717949;

	t1 = ((x5&(x6*x7))<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MAX;
	volatile uint16_t x10 = 1U;
	volatile int64_t x12 = INT64_MIN;
	volatile int32_t t2 = 95;

	t2 = ((x9&(x10*x11))<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	volatile uint64_t x14 = 206439573680697LLU;
	int64_t x15 = INT64_MIN;
	int64_t x16 = INT64_MAX;
	int32_t t3 = 0;

	t3 = ((x13&(x14*x15))<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x20 = INT32_MAX;

	t4 = ((x17&(x18*x19))<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int16_t x21 = INT16_MAX;
	int32_t x22 = -1;
	int8_t x23 = -1;
	volatile int16_t x24 = -5698;
	volatile int32_t t5 = 119352;

	t5 = ((x21&(x22*x23))<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	uint32_t x26 = 16663U;
	int8_t x27 = INT8_MAX;
	volatile int16_t x28 = -1;
	static volatile int32_t t6 = 1;

	t6 = ((x25&(x26*x27))<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x33 = 3894U;
	static int16_t x34 = -1;
	int8_t x35 = -1;
	int16_t x36 = INT16_MIN;
	static int32_t t7 = 45151;

	t7 = ((x33&(x34*x35))<x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x37 = -1;
	int16_t x38 = INT16_MAX;
	volatile int16_t x39 = INT16_MAX;
	int64_t x40 = INT64_MIN;
	int32_t t8 = -95010;

	t8 = ((x37&(x38*x39))<x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x41 = UINT32_MAX;
	volatile int16_t x42 = 123;
	int16_t x43 = INT16_MAX;
	uint8_t x44 = 2U;
	static int32_t t9 = -53398;

	t9 = ((x41&(x42*x43))<x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x45 = INT8_MIN;
	int16_t x46 = INT16_MIN;
	uint8_t x47 = 90U;
	int32_t x48 = INT32_MAX;
	static int32_t t10 = 3692;

	t10 = ((x45&(x46*x47))<x48);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x49 = INT16_MIN;
	static uint8_t x50 = 3U;
	volatile int8_t x51 = INT8_MIN;
	int32_t t11 = -112625;

	t11 = ((x49&(x50*x51))<x52);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = INT8_MIN;
	uint32_t x55 = UINT32_MAX;
	static int8_t x56 = -25;
	int32_t t12 = 302082;

	t12 = ((x53&(x54*x55))<x56);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x58 = -1;
	int32_t x59 = 1508983;
	static volatile uint64_t x60 = UINT64_MAX;
	volatile int32_t t13 = -10082;

	t13 = ((x57&(x58*x59))<x60);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x61 = -1LL;
	static int8_t x62 = INT8_MIN;
	uint32_t x63 = 32055U;
	int32_t x64 = INT32_MIN;
	volatile int32_t t14 = 6744957;

	t14 = ((x61&(x62*x63))<x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x73 = 0U;
	uint32_t x74 = UINT32_MAX;
	static uint16_t x75 = 3U;
	int32_t t15 = 7;

	t15 = ((x73&(x74*x75))<x76);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x89 = INT16_MAX;
	volatile int8_t x90 = -1;
	int32_t x91 = -1;
	static int32_t t16 = 1990178;

	t16 = ((x89&(x90*x91))<x92);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x93 = 4575831836794LLU;
	int8_t x95 = -1;
	int32_t t17 = 0;

	t17 = ((x93&(x94*x95))<x96);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x107 = -1489;
	volatile int64_t x108 = INT64_MAX;
	static volatile int32_t t18 = 15;

	t18 = ((x105&(x106*x107))<x108);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x117 = 51214;
	int16_t x118 = -1;
	int64_t x119 = INT64_MAX;
	static volatile int64_t x120 = -116963799848LL;
	int32_t t19 = 86518504;

	t19 = ((x117&(x118*x119))<x120);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x125 = -1;
	uint32_t x127 = 120U;
	int32_t x128 = INT32_MIN;

	t20 = ((x125&(x126*x127))<x128);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x129 = INT8_MIN;
	int16_t x130 = -1;
	int32_t x131 = INT32_MAX;
	int8_t x132 = -35;
	int32_t t21 = -6681356;

	t21 = ((x129&(x130*x131))<x132);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x137 = -4;
	uint16_t x138 = UINT16_MAX;
	int8_t x140 = 1;
	int32_t t22 = -112;

	t22 = ((x137&(x138*x139))<x140);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x145 = INT8_MIN;
	volatile int16_t x146 = INT16_MIN;
	uint32_t x147 = 137095435U;
	int32_t x148 = -1;
	int32_t t23 = 981;

	t23 = ((x145&(x146*x147))<x148);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x149 = INT16_MAX;
	int8_t x150 = INT8_MIN;
	uint16_t x151 = 15U;
	int16_t x152 = -1;
	volatile int32_t t24 = -1606485;

	t24 = ((x149&(x150*x151))<x152);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x157 = 91;
	static int16_t x159 = -1063;
	static int64_t x160 = 44LL;
	static volatile int32_t t25 = -25932247;

	t25 = ((x157&(x158*x159))<x160);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x161 = UINT8_MAX;
	static uint8_t x162 = 12U;
	volatile int32_t t26 = -5;

	t26 = ((x161&(x162*x163))<x164);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x169 = 38;
	volatile int8_t x170 = INT8_MIN;
	int16_t x171 = INT16_MIN;
	static int32_t x172 = -306250;
	int32_t t27 = -15;

	t27 = ((x169&(x170*x171))<x172);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x173 = INT8_MIN;
	int64_t x174 = -1LL;
	int8_t x175 = INT8_MAX;
	volatile uint32_t x176 = 169182U;
	int32_t t28 = 66097691;

	t28 = ((x173&(x174*x175))<x176);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x178 = INT16_MIN;
	int32_t x179 = 0;
	int64_t x180 = INT64_MIN;
	volatile int32_t t29 = 815135;

	t29 = ((x177&(x178*x179))<x180);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x187 = 3U;
	int64_t x188 = -17809289655LL;

	t30 = ((x185&(x186*x187))<x188);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x189 = INT16_MIN;
	uint64_t x190 = 9887347778660LLU;
	uint16_t x191 = 748U;
	uint32_t x192 = 2013U;

	t31 = ((x189&(x190*x191))<x192);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x198 = 512U;
	static int8_t x199 = INT8_MIN;
	volatile int8_t x200 = INT8_MIN;
	int32_t t32 = 599144;

	t32 = ((x197&(x198*x199))<x200);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x205 = INT8_MIN;
	int16_t x206 = -1;
	static volatile int16_t x207 = -1;
	static int8_t x208 = 1;
	volatile int32_t t33 = -134186500;

	t33 = ((x205&(x206*x207))<x208);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x213 = -19;
	int16_t x214 = INT16_MAX;
	int64_t x215 = -1LL;
	int32_t t34 = 1033524;

	t34 = ((x213&(x214*x215))<x216);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x225 = INT64_MIN;
	uint64_t x226 = 7LLU;

	t35 = ((x225&(x226*x227))<x228);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x230 = INT8_MAX;
	uint32_t x231 = 203216818U;
	int16_t x232 = INT16_MAX;
	int32_t t36 = -1;

	t36 = ((x229&(x230*x231))<x232);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x233 = -1;
	uint16_t x234 = 1U;
	static uint32_t x236 = 0U;
	int32_t t37 = -246156;

	t37 = ((x233&(x234*x235))<x236);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x239 = -1788LL;
	int32_t t38 = 63;

	t38 = ((x237&(x238*x239))<x240);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x241 = -44055;
	static int64_t x242 = -77LL;
	int16_t x243 = 4700;
	int64_t x244 = 65723855079LL;
	int32_t t39 = 3;

	t39 = ((x241&(x242*x243))<x244);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x245 = INT16_MIN;
	static uint8_t x246 = 0U;
	int8_t x247 = -1;
	int8_t x248 = 11;
	int32_t t40 = -61915;

	t40 = ((x245&(x246*x247))<x248);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x250 = -1;
	int64_t x251 = INT64_MAX;
	uint32_t x252 = 13402180U;
	int32_t t41 = 323;

	t41 = ((x249&(x250*x251))<x252);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x253 = -3784;
	uint64_t x254 = 52068LLU;
	int64_t x255 = -1LL;
	int16_t x256 = INT16_MAX;
	volatile int32_t t42 = -26;

	t42 = ((x253&(x254*x255))<x256);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x262 = -2;
	int8_t x263 = INT8_MAX;
	int64_t x264 = INT64_MAX;
	volatile int32_t t43 = 44425645;

	t43 = ((x261&(x262*x263))<x264);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x265 = UINT8_MAX;
	uint8_t x267 = 12U;
	volatile uint16_t x268 = 2U;
	volatile int32_t t44 = -15192435;

	t44 = ((x265&(x266*x267))<x268);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint16_t x269 = 22097U;
	static uint64_t x272 = 462379047265LLU;
	volatile int32_t t45 = 10257;

	t45 = ((x269&(x270*x271))<x272);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x273 = -3;
	static int32_t x274 = 56;
	int32_t x275 = 39;
	static int64_t x276 = INT64_MIN;
	volatile int32_t t46 = -70;

	t46 = ((x273&(x274*x275))<x276);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x278 = 12;
	uint16_t x279 = UINT16_MAX;
	static uint8_t x280 = UINT8_MAX;
	int32_t t47 = -238035;

	t47 = ((x277&(x278*x279))<x280);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x283 = 63499LLU;
	volatile int32_t t48 = -8849;

	t48 = ((x281&(x282*x283))<x284);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x285 = -1;
	volatile uint16_t x286 = 247U;
	volatile int64_t x287 = -1LL;
	int8_t x288 = 18;
	volatile int32_t t49 = 42;

	t49 = ((x285&(x286*x287))<x288);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x293 = 13U;
	int32_t x294 = 1;
	int32_t t50 = 24436010;

	t50 = ((x293&(x294*x295))<x296);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x297 = -1;
	uint8_t x299 = 46U;
	static int64_t x300 = INT64_MIN;
	static volatile int32_t t51 = 73518390;

	t51 = ((x297&(x298*x299))<x300);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x305 = INT32_MAX;
	static int16_t x308 = 0;
	static int32_t t52 = -36703;

	t52 = ((x305&(x306*x307))<x308);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x309 = 7U;
	static volatile int32_t x310 = -99821;
	uint8_t x311 = 6U;
	volatile int32_t t53 = 4345;

	t53 = ((x309&(x310*x311))<x312);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x313 = INT64_MAX;
	static uint64_t x314 = UINT64_MAX;
	volatile uint32_t x315 = 3U;
	int64_t x316 = INT64_MIN;
	volatile int32_t t54 = 22315;

	t54 = ((x313&(x314*x315))<x316);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x321 = INT64_MIN;
	uint16_t x322 = 3U;
	int32_t x323 = -1;
	static volatile uint32_t x324 = UINT32_MAX;
	static int32_t t55 = 28132825;

	t55 = ((x321&(x322*x323))<x324);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x325 = -68675728;
	static uint32_t x327 = 734125684U;
	static int16_t x328 = INT16_MAX;
	int32_t t56 = 24908;

	t56 = ((x325&(x326*x327))<x328);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x329 = -1617LL;
	static int64_t x331 = -1LL;
	int32_t x332 = 533783055;
	volatile int32_t t57 = -5454692;

	t57 = ((x329&(x330*x331))<x332);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x333 = UINT8_MAX;
	uint64_t x334 = 10049656147LLU;
	static int8_t x336 = INT8_MAX;
	volatile int32_t t58 = 1375;

	t58 = ((x333&(x334*x335))<x336);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x337 = UINT8_MAX;
	static uint8_t x338 = UINT8_MAX;
	static int64_t x339 = -27638790681LL;
	int16_t x340 = 2193;

	t59 = ((x337&(x338*x339))<x340);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x345 = INT64_MIN;
	uint64_t x346 = 117949LLU;
	int8_t x347 = -1;
	static int64_t x348 = -23782LL;
	volatile int32_t t60 = -1926594;

	t60 = ((x345&(x346*x347))<x348);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x351 = -1;
	static int8_t x352 = 0;
	static volatile int32_t t61 = 1;

	t61 = ((x349&(x350*x351))<x352);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x357 = 1U;
	uint32_t x358 = 3073U;
	int32_t x359 = -1;
	static volatile int32_t t62 = -118483;

	t62 = ((x357&(x358*x359))<x360);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x361 = 16203154167LLU;
	static int64_t x362 = INT64_MIN;
	static uint8_t x363 = 0U;

	t63 = ((x361&(x362*x363))<x364);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x365 = INT8_MAX;
	int16_t x366 = INT16_MAX;
	int8_t x367 = 1;
	volatile int64_t x368 = -404941349LL;
	volatile int32_t t64 = -697273;

	t64 = ((x365&(x366*x367))<x368);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x369 = 76;
	uint8_t x370 = 44U;
	static volatile int64_t x371 = 19694051318LL;
	uint8_t x372 = UINT8_MAX;
	volatile int32_t t65 = 6101;

	t65 = ((x369&(x370*x371))<x372);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x384 = -21423LL;
	static int32_t t66 = -701701729;

	t66 = ((x381&(x382*x383))<x384);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x385 = 484515LLU;
	int8_t x386 = INT8_MIN;
	uint8_t x387 = 1U;
	volatile int32_t t67 = -7;

	t67 = ((x385&(x386*x387))<x388);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x393 = -1;
	static int64_t x394 = -19069642879LL;
	volatile int16_t x395 = 14;
	int32_t x396 = -1;
	int32_t t68 = 5816507;

	t68 = ((x393&(x394*x395))<x396);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x397 = INT32_MAX;
	uint8_t x399 = 4U;
	int32_t t69 = 276;

	t69 = ((x397&(x398*x399))<x400);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x401 = INT64_MIN;
	int8_t x402 = -1;
	uint16_t x403 = UINT16_MAX;
	int32_t x404 = 9;
	static volatile int32_t t70 = -150;

	t70 = ((x401&(x402*x403))<x404);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x405 = 191235;
	volatile int8_t x406 = -2;
	volatile uint64_t x407 = 28737LLU;
	uint8_t x408 = 55U;
	volatile int32_t t71 = 3;

	t71 = ((x405&(x406*x407))<x408);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x409 = UINT8_MAX;
	int8_t x410 = -1;
	uint64_t x412 = 509865285LLU;
	int32_t t72 = 180156;

	t72 = ((x409&(x410*x411))<x412);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x413 = UINT32_MAX;
	static uint32_t x414 = UINT32_MAX;
	volatile int32_t x415 = INT32_MIN;
	volatile int32_t t73 = -3400400;

	t73 = ((x413&(x414*x415))<x416);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x417 = 17U;
	static uint8_t x418 = 0U;
	uint32_t x419 = 486215U;
	int64_t x420 = INT64_MAX;
	int32_t t74 = 24;

	t74 = ((x417&(x418*x419))<x420);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x421 = 638338LL;
	uint8_t x423 = 62U;
	uint16_t x424 = 3169U;
	volatile int32_t t75 = 1021184752;

	t75 = ((x421&(x422*x423))<x424);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x427 = UINT8_MAX;
	uint8_t x428 = 0U;
	static volatile int32_t t76 = -77070;

	t76 = ((x425&(x426*x427))<x428);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x429 = 31268865940LLU;
	uint64_t x430 = UINT64_MAX;
	volatile int32_t x431 = INT32_MAX;
	volatile uint16_t x432 = 18206U;
	int32_t t77 = -25192;

	t77 = ((x429&(x430*x431))<x432);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x433 = INT64_MIN;
	uint8_t x434 = 7U;
	static int8_t x436 = INT8_MIN;
	static int32_t t78 = 3;

	t78 = ((x433&(x434*x435))<x436);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x442 = 23;
	uint32_t x443 = UINT32_MAX;
	static volatile int64_t x444 = -57378LL;
	volatile int32_t t79 = -1601;

	t79 = ((x441&(x442*x443))<x444);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x445 = UINT8_MAX;
	static int16_t x446 = -1;
	int16_t x447 = INT16_MIN;
	int16_t x448 = INT16_MAX;
	volatile int32_t t80 = -485279;

	t80 = ((x445&(x446*x447))<x448);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x459 = UINT16_MAX;
	volatile uint16_t x460 = UINT16_MAX;
	static volatile int32_t t81 = -43550;

	t81 = ((x457&(x458*x459))<x460);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x465 = INT8_MIN;
	uint64_t x466 = 13231LLU;
	int32_t t82 = -1947;

	t82 = ((x465&(x466*x467))<x468);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x469 = -2;
	volatile int8_t x470 = INT8_MIN;
	uint8_t x471 = UINT8_MAX;
	volatile int64_t x472 = -1LL;
	static int32_t t83 = 51582;

	t83 = ((x469&(x470*x471))<x472);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x473 = INT8_MAX;
	int16_t x475 = -1;
	static uint16_t x476 = 0U;
	volatile int32_t t84 = 332075409;

	t84 = ((x473&(x474*x475))<x476);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x479 = 3;
	int32_t x480 = INT32_MIN;
	static int32_t t85 = -47166;

	t85 = ((x477&(x478*x479))<x480);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x485 = UINT8_MAX;
	int8_t x486 = -1;
	static volatile uint32_t x487 = UINT32_MAX;
	int32_t x488 = 222;
	volatile int32_t t86 = -31457472;

	t86 = ((x485&(x486*x487))<x488);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x489 = 6201;
	int32_t x491 = INT32_MIN;
	int16_t x492 = 2;
	int32_t t87 = 10;

	t87 = ((x489&(x490*x491))<x492);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x493 = INT8_MIN;
	volatile int32_t x494 = -1;
	int8_t x496 = 1;
	int32_t t88 = -6;

	t88 = ((x493&(x494*x495))<x496);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x498 = UINT64_MAX;
	volatile int16_t x499 = -3064;
	int32_t x500 = INT32_MIN;
	volatile int32_t t89 = 1;

	t89 = ((x497&(x498*x499))<x500);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x501 = -224LL;
	static int32_t x502 = 1035709;
	uint8_t x503 = 92U;
	volatile uint8_t x504 = 30U;
	int32_t t90 = -11518888;

	t90 = ((x501&(x502*x503))<x504);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x509 = INT32_MIN;
	volatile int8_t x510 = 1;
	volatile int64_t x511 = INT64_MAX;
	static volatile uint32_t x512 = 2U;

	t91 = ((x509&(x510*x511))<x512);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x513 = 783510LLU;
	int32_t x514 = 97;
	uint8_t x515 = 87U;
	int8_t x516 = INT8_MIN;
	static volatile int32_t t92 = -1768;

	t92 = ((x513&(x514*x515))<x516);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x517 = INT16_MAX;
	static int8_t x518 = 53;
	uint16_t x520 = 3191U;
	int32_t t93 = -164160985;

	t93 = ((x517&(x518*x519))<x520);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x521 = INT16_MIN;
	volatile int16_t x523 = INT16_MIN;
	uint64_t x524 = 501065901372LLU;
	int32_t t94 = 7965172;

	t94 = ((x521&(x522*x523))<x524);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x529 = 4U;
	static int32_t x530 = INT32_MIN;
	int64_t x531 = 4123359493LL;
	int64_t x532 = -1LL;
	volatile int32_t t95 = -11;

	t95 = ((x529&(x530*x531))<x532);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x534 = 6871;
	uint32_t x535 = 162U;
	uint32_t x536 = 13U;
	static int32_t t96 = 3;

	t96 = ((x533&(x534*x535))<x536);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x537 = INT8_MIN;
	int16_t x538 = -611;
	static uint16_t x539 = 1U;
	int32_t t97 = -59581908;

	t97 = ((x537&(x538*x539))<x540);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x542 = -51;
	int64_t x544 = 124002579583367LL;
	int32_t t98 = 72338808;

	t98 = ((x541&(x542*x543))<x544);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x546 = -7;
	int8_t x547 = 0;
	uint64_t x548 = 92391768LLU;

	t99 = ((x545&(x546*x547))<x548);

	if (t99 != 1) { NG(); } else { ; }
	
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


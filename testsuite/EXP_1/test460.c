#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x5 = 1;
volatile int32_t x14 = -1;
int32_t x16 = -7847676;
volatile uint64_t x17 = 528002291925871876LLU;
int8_t x24 = -1;
int64_t x25 = -1LL;
uint8_t x29 = UINT8_MAX;
int64_t x31 = INT64_MIN;
int64_t t9 = 913933398524743LL;
static uint16_t x52 = 3670U;
int8_t x61 = 3;
int16_t x73 = INT16_MIN;
uint16_t x75 = UINT16_MAX;
int16_t x77 = INT16_MAX;
int8_t x87 = -1;
int8_t x88 = INT8_MIN;
int32_t x89 = -1;
static volatile uint32_t x92 = UINT32_MAX;
int16_t x96 = INT16_MIN;
volatile int64_t x106 = -97306388165069463LL;
uint16_t x108 = UINT16_MAX;
volatile int16_t x126 = INT16_MIN;
volatile uint8_t x130 = UINT8_MAX;
volatile uint8_t x145 = 1U;
int8_t x170 = INT8_MAX;
uint32_t x171 = UINT32_MAX;
volatile int64_t x175 = 14613943101989LL;
uint32_t t31 = 7330032U;
int16_t x178 = INT16_MIN;
int16_t x197 = -50;
int32_t t33 = 67;
static int16_t x201 = -7618;
uint32_t x202 = 196146540U;
static int64_t x203 = INT64_MIN;
static int16_t x204 = -176;
static uint8_t x206 = 100U;
int32_t x213 = -1;
uint32_t x220 = 1065U;
volatile int64_t t38 = -137523009161LL;
static int8_t x240 = INT8_MIN;
volatile int32_t t40 = -482;
uint16_t x244 = 1705U;
int64_t x253 = -458502LL;
int16_t x267 = INT16_MAX;
int64_t x271 = INT64_MIN;
int16_t x273 = -1;
uint8_t x274 = UINT8_MAX;
static int8_t x290 = 14;
static int32_t t50 = 112776;
int32_t x314 = INT32_MIN;
static int8_t x318 = INT8_MIN;
int16_t x324 = -1;
static volatile int16_t x328 = INT16_MAX;
int32_t t55 = -1;
uint64_t x330 = 1817578453591810054LLU;
int16_t x335 = -102;
static int32_t x340 = -64142;
int8_t x346 = INT8_MIN;
uint8_t x374 = UINT8_MAX;
int8_t x376 = 1;
static int32_t x378 = -226;
int64_t x379 = -1LL;
int64_t x388 = INT64_MIN;
uint8_t x389 = UINT8_MAX;
int16_t x391 = INT16_MAX;
static int16_t x393 = INT16_MIN;
uint64_t x406 = UINT64_MAX;
uint32_t x410 = 358159U;
int8_t x411 = 3;
int32_t t71 = 65093;
uint32_t x417 = 9368194U;
uint8_t x423 = UINT8_MAX;
int32_t x426 = 9;
volatile uint16_t x432 = UINT16_MAX;
int32_t x433 = -1;
static volatile int8_t x445 = INT8_MIN;
uint64_t x447 = UINT64_MAX;
int8_t x449 = -1;
uint64_t x460 = 2126753487309165153LLU;
uint64_t x469 = 227193986LLU;
volatile int8_t x477 = INT8_MIN;
int8_t x481 = INT8_MAX;
static uint16_t x485 = 179U;
int64_t x499 = -1LL;
uint16_t x502 = 1U;
int32_t x506 = -1;
static int64_t x512 = 38118456LL;
int64_t x523 = INT64_MIN;
volatile uint32_t t97 = 18018U;
int32_t t99 = -5740722;


void f0(void) {
	int8_t x6 = -1;
	volatile int16_t x7 = -1;
	uint8_t x8 = 1U;
	volatile int32_t t0 = -44;

	t0 = (((x5*x6)<=x7)%x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = -10;
	static int8_t x10 = -1;
	static volatile int64_t x11 = INT64_MIN;
	int16_t x12 = -1;
	static volatile int32_t t1 = 7;

	t1 = (((x9*x10)<=x11)%x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x13 = -1;
	static int8_t x15 = -40;
	int32_t t2 = -33452945;

	t2 = (((x13*x14)<=x15)%x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x18 = -1;
	static int32_t x19 = INT32_MIN;
	int32_t x20 = -34;
	static int32_t t3 = -42;

	t3 = (((x17*x18)<=x19)%x20);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x21 = UINT32_MAX;
	int8_t x22 = INT8_MIN;
	int64_t x23 = -3476192LL;
	volatile int32_t t4 = 6;

	t4 = (((x21*x22)<=x23)%x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x26 = INT32_MIN;
	int8_t x27 = 1;
	uint32_t x28 = 27750U;
	volatile uint32_t t5 = 29503390U;

	t5 = (((x25*x26)<=x27)%x28);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x30 = 64U;
	int32_t x32 = -1;
	static int32_t t6 = -4;

	t6 = (((x29*x30)<=x31)%x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = -1;
	int8_t x34 = INT8_MIN;
	volatile int32_t x35 = INT32_MIN;
	int64_t x36 = 11592561607041606LL;
	volatile int64_t t7 = 1991695720828LL;

	t7 = (((x33*x34)<=x35)%x36);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x37 = 0;
	uint8_t x38 = 1U;
	int8_t x39 = INT8_MIN;
	uint32_t x40 = 46909U;
	volatile uint32_t t8 = 0U;

	t8 = (((x37*x38)<=x39)%x40);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x45 = 0U;
	int32_t x46 = INT32_MIN;
	int32_t x47 = INT32_MIN;
	volatile int64_t x48 = INT64_MIN;

	t9 = (((x45*x46)<=x47)%x48);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x49 = INT16_MIN;
	int8_t x50 = INT8_MAX;
	static int8_t x51 = INT8_MAX;
	volatile int32_t t10 = -287717392;

	t10 = (((x49*x50)<=x51)%x52);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x57 = -1;
	static uint8_t x58 = 1U;
	volatile int64_t x59 = -1LL;
	int64_t x60 = 3698157543LL;
	volatile int64_t t11 = -1LL;

	t11 = (((x57*x58)<=x59)%x60);

	if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x62 = -1;
	uint64_t x63 = 1786317LLU;
	int16_t x64 = INT16_MAX;
	int32_t t12 = -973;

	t12 = (((x61*x62)<=x63)%x64);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x65 = INT16_MAX;
	uint16_t x66 = UINT16_MAX;
	int8_t x67 = INT8_MIN;
	uint8_t x68 = 4U;
	static int32_t t13 = 46;

	t13 = (((x65*x66)<=x67)%x68);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x74 = UINT8_MAX;
	int32_t x76 = INT32_MAX;
	int32_t t14 = 11;

	t14 = (((x73*x74)<=x75)%x76);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x78 = -1LL;
	int8_t x79 = INT8_MIN;
	int32_t x80 = -1;
	volatile int32_t t15 = 21237;

	t15 = (((x77*x78)<=x79)%x80);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x85 = 240;
	uint8_t x86 = 5U;
	static int32_t t16 = 32531;

	t16 = (((x85*x86)<=x87)%x88);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x90 = 17U;
	uint16_t x91 = 1U;
	static volatile uint32_t t17 = 2676U;

	t17 = (((x89*x90)<=x91)%x92);

	if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x93 = INT32_MAX;
	int16_t x94 = -1;
	volatile uint32_t x95 = UINT32_MAX;
	int32_t t18 = 0;

	t18 = (((x93*x94)<=x95)%x96);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x97 = -872LL;
	uint16_t x98 = 58U;
	int64_t x99 = INT64_MIN;
	int64_t x100 = -1LL;
	volatile int64_t t19 = -2980LL;

	t19 = (((x97*x98)<=x99)%x100);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x101 = INT64_MIN;
	volatile int8_t x102 = 0;
	int32_t x103 = -312377;
	static int16_t x104 = -3161;
	int32_t t20 = 39139902;

	t20 = (((x101*x102)<=x103)%x104);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x105 = 29U;
	volatile int64_t x107 = INT64_MIN;
	static int32_t t21 = -2276919;

	t21 = (((x105*x106)<=x107)%x108);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x109 = INT16_MIN;
	uint32_t x110 = 6233U;
	int8_t x111 = -1;
	volatile int16_t x112 = -1;
	static volatile int32_t t22 = 4468;

	t22 = (((x109*x110)<=x111)%x112);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x125 = 2LLU;
	int8_t x127 = INT8_MIN;
	static volatile int32_t x128 = INT32_MIN;
	volatile int32_t t23 = -1537338;

	t23 = (((x125*x126)<=x127)%x128);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x129 = INT16_MIN;
	static int16_t x131 = 19;
	static uint64_t x132 = 3311686LLU;
	uint64_t t24 = 66938269920LLU;

	t24 = (((x129*x130)<=x131)%x132);

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x133 = -1;
	int8_t x134 = INT8_MIN;
	uint64_t x135 = 74224LLU;
	uint16_t x136 = 195U;
	int32_t t25 = -6;

	t25 = (((x133*x134)<=x135)%x136);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x137 = UINT64_MAX;
	uint32_t x138 = UINT32_MAX;
	int16_t x139 = INT16_MAX;
	uint64_t x140 = 1461902LLU;
	volatile uint64_t t26 = 12352362LLU;

	t26 = (((x137*x138)<=x139)%x140);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint16_t x146 = 10394U;
	static uint8_t x147 = 2U;
	static int32_t x148 = INT32_MAX;
	volatile int32_t t27 = -121200634;

	t27 = (((x145*x146)<=x147)%x148);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x149 = 0U;
	static volatile int64_t x150 = 4146352869522LL;
	uint32_t x151 = 488426U;
	int64_t x152 = 20LL;
	int64_t t28 = 257218LL;

	t28 = (((x149*x150)<=x151)%x152);

	if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x153 = INT16_MAX;
	uint32_t x154 = 844886U;
	uint8_t x155 = 110U;
	uint16_t x156 = 2122U;
	int32_t t29 = -216435857;

	t29 = (((x153*x154)<=x155)%x156);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x169 = 33U;
	int8_t x172 = INT8_MIN;
	int32_t t30 = -963;

	t30 = (((x169*x170)<=x171)%x172);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x173 = UINT8_MAX;
	uint16_t x174 = UINT16_MAX;
	uint32_t x176 = 107U;

	t31 = (((x173*x174)<=x175)%x176);

	if (t31 != 1U) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint64_t x177 = 294148142994LLU;
	int8_t x179 = INT8_MIN;
	uint64_t x180 = UINT64_MAX;
	uint64_t t32 = 15079577586175LLU;

	t32 = (((x177*x178)<=x179)%x180);

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x198 = INT8_MIN;
	static int32_t x199 = -1;
	int16_t x200 = INT16_MIN;

	t33 = (((x197*x198)<=x199)%x200);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t t34 = 36412;

	t34 = (((x201*x202)<=x203)%x204);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint64_t x205 = 16322947724376189LLU;
	int32_t x207 = INT32_MAX;
	int8_t x208 = INT8_MIN;
	static volatile int32_t t35 = 64753;

	t35 = (((x205*x206)<=x207)%x208);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x214 = -1;
	uint64_t x215 = 65031537866LLU;
	static int64_t x216 = -249800LL;
	volatile int64_t t36 = 1795044798LL;

	t36 = (((x213*x214)<=x215)%x216);

	if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x217 = -1;
	int16_t x218 = -1;
	int16_t x219 = 191;
	volatile uint32_t t37 = 164874344U;

	t37 = (((x217*x218)<=x219)%x220);

	if (t37 != 1U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x221 = INT8_MAX;
	volatile uint16_t x222 = 19U;
	int32_t x223 = INT32_MIN;
	volatile int64_t x224 = 4240513629LL;

	t38 = (((x221*x222)<=x223)%x224);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x233 = -1;
	volatile uint8_t x234 = UINT8_MAX;
	uint16_t x235 = UINT16_MAX;
	int64_t x236 = -1LL;
	int64_t t39 = 0LL;

	t39 = (((x233*x234)<=x235)%x236);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x237 = INT32_MIN;
	uint32_t x238 = UINT32_MAX;
	int16_t x239 = INT16_MIN;

	t40 = (((x237*x238)<=x239)%x240);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint32_t x241 = UINT32_MAX;
	uint8_t x242 = UINT8_MAX;
	static int16_t x243 = INT16_MAX;
	volatile int32_t t41 = -965;

	t41 = (((x241*x242)<=x243)%x244);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x249 = 1501313477302LLU;
	int8_t x250 = INT8_MAX;
	volatile int8_t x251 = INT8_MIN;
	int16_t x252 = INT16_MIN;
	volatile int32_t t42 = 200966857;

	t42 = (((x249*x250)<=x251)%x252);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x254 = UINT32_MAX;
	static int64_t x255 = -36700033892172LL;
	int64_t x256 = INT64_MAX;
	int64_t t43 = 261112946067395301LL;

	t43 = (((x253*x254)<=x255)%x256);

	if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x257 = INT8_MIN;
	uint16_t x258 = UINT16_MAX;
	int32_t x259 = -1;
	static uint64_t x260 = 3LLU;
	volatile uint64_t t44 = 539454872520980LLU;

	t44 = (((x257*x258)<=x259)%x260);

	if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x265 = INT8_MIN;
	int32_t x266 = -1;
	volatile uint8_t x268 = 49U;
	static int32_t t45 = 2100;

	t45 = (((x265*x266)<=x267)%x268);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x269 = 15246U;
	uint32_t x270 = 4155338U;
	int16_t x272 = INT16_MIN;
	volatile int32_t t46 = 195;

	t46 = (((x269*x270)<=x271)%x272);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x275 = INT64_MIN;
	volatile int64_t x276 = INT64_MAX;
	static volatile int64_t t47 = -3706965246882497140LL;

	t47 = (((x273*x274)<=x275)%x276);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x285 = -6813;
	int8_t x286 = INT8_MIN;
	static volatile uint8_t x287 = 0U;
	int64_t x288 = INT64_MIN;
	static int64_t t48 = 184373LL;

	t48 = (((x285*x286)<=x287)%x288);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x289 = -3220LL;
	uint64_t x291 = 70LLU;
	uint16_t x292 = UINT16_MAX;
	volatile int32_t t49 = -57834551;

	t49 = (((x289*x290)<=x291)%x292);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int16_t x305 = -1;
	uint16_t x306 = UINT16_MAX;
	int8_t x307 = INT8_MIN;
	uint8_t x308 = UINT8_MAX;

	t50 = (((x305*x306)<=x307)%x308);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x309 = 1687703464845417LLU;
	uint8_t x310 = UINT8_MAX;
	uint32_t x311 = 50826734U;
	static int8_t x312 = INT8_MIN;
	volatile int32_t t51 = -7;

	t51 = (((x309*x310)<=x311)%x312);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x313 = UINT32_MAX;
	uint32_t x315 = 1638767U;
	int64_t x316 = INT64_MIN;
	int64_t t52 = 513451098810683LL;

	t52 = (((x313*x314)<=x315)%x316);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x317 = INT16_MAX;
	int8_t x319 = INT8_MAX;
	uint8_t x320 = 28U;
	int32_t t53 = 188944;

	t53 = (((x317*x318)<=x319)%x320);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x321 = 6U;
	int8_t x322 = -4;
	int8_t x323 = -1;
	static int32_t t54 = -17;

	t54 = (((x321*x322)<=x323)%x324);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x325 = 1;
	uint32_t x326 = UINT32_MAX;
	uint8_t x327 = 17U;

	t55 = (((x325*x326)<=x327)%x328);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x329 = UINT32_MAX;
	static int8_t x331 = INT8_MAX;
	int32_t x332 = INT32_MIN;
	volatile int32_t t56 = -243;

	t56 = (((x329*x330)<=x331)%x332);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x333 = INT16_MAX;
	int8_t x334 = INT8_MIN;
	volatile uint32_t x336 = UINT32_MAX;
	uint32_t t57 = 20188514U;

	t57 = (((x333*x334)<=x335)%x336);

	if (t57 != 1U) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x337 = 0U;
	int8_t x338 = 3;
	uint64_t x339 = UINT64_MAX;
	static int32_t t58 = 13400543;

	t58 = (((x337*x338)<=x339)%x340);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x341 = 15;
	static volatile int32_t x342 = -1;
	int64_t x343 = INT64_MIN;
	int32_t x344 = INT32_MAX;
	int32_t t59 = -5548;

	t59 = (((x341*x342)<=x343)%x344);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint8_t x345 = 3U;
	uint8_t x347 = 1U;
	volatile int16_t x348 = INT16_MIN;
	int32_t t60 = 7411438;

	t60 = (((x345*x346)<=x347)%x348);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x349 = 31U;
	int32_t x350 = -78;
	static int16_t x351 = INT16_MAX;
	uint16_t x352 = 48U;
	int32_t t61 = 0;

	t61 = (((x349*x350)<=x351)%x352);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x369 = -958949526LL;
	uint64_t x370 = 2570LLU;
	int16_t x371 = -1;
	int16_t x372 = -3757;
	int32_t t62 = 1;

	t62 = (((x369*x370)<=x371)%x372);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x373 = INT8_MIN;
	int8_t x375 = 0;
	static volatile int32_t t63 = 2779;

	t63 = (((x373*x374)<=x375)%x376);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x377 = 289U;
	int16_t x380 = INT16_MAX;
	int32_t t64 = 729857;

	t64 = (((x377*x378)<=x379)%x380);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint32_t x385 = 1470U;
	int16_t x386 = INT16_MAX;
	uint8_t x387 = UINT8_MAX;
	int64_t t65 = 1LL;

	t65 = (((x385*x386)<=x387)%x388);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x390 = 0U;
	volatile int16_t x392 = -1;
	volatile int32_t t66 = -6885859;

	t66 = (((x389*x390)<=x391)%x392);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x394 = 1;
	volatile int16_t x395 = -1;
	uint64_t x396 = 4472947323471903LLU;
	static uint64_t t67 = 40376LLU;

	t67 = (((x393*x394)<=x395)%x396);

	if (t67 != 1LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x397 = INT8_MIN;
	uint16_t x398 = 9U;
	int32_t x399 = INT32_MAX;
	int32_t x400 = INT32_MAX;
	int32_t t68 = 47;

	t68 = (((x397*x398)<=x399)%x400);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x401 = -1;
	int8_t x402 = INT8_MAX;
	uint16_t x403 = 31U;
	static int8_t x404 = INT8_MIN;
	int32_t t69 = -6835;

	t69 = (((x401*x402)<=x403)%x404);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x405 = UINT64_MAX;
	int8_t x407 = -1;
	volatile uint8_t x408 = UINT8_MAX;
	volatile int32_t t70 = -1904229;

	t70 = (((x405*x406)<=x407)%x408);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x409 = INT32_MAX;
	int16_t x412 = INT16_MAX;

	t71 = (((x409*x410)<=x411)%x412);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x413 = UINT16_MAX;
	static uint8_t x414 = 62U;
	uint8_t x415 = 2U;
	uint32_t x416 = 808486183U;
	volatile uint32_t t72 = 3903697U;

	t72 = (((x413*x414)<=x415)%x416);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x418 = 2867U;
	volatile int8_t x419 = 31;
	uint32_t x420 = 430U;
	static volatile uint32_t t73 = 0U;

	t73 = (((x417*x418)<=x419)%x420);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x421 = 42U;
	uint32_t x422 = 4469U;
	int32_t x424 = -1;
	volatile int32_t t74 = -579365500;

	t74 = (((x421*x422)<=x423)%x424);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x425 = -4;
	volatile int64_t x427 = -1LL;
	static uint64_t x428 = UINT64_MAX;
	uint64_t t75 = 15254750111LLU;

	t75 = (((x425*x426)<=x427)%x428);

	if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x429 = INT32_MAX;
	uint32_t x430 = 5U;
	volatile int16_t x431 = INT16_MAX;
	static int32_t t76 = -133;

	t76 = (((x429*x430)<=x431)%x432);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x434 = 2379441;
	volatile int64_t x435 = -2947LL;
	volatile int16_t x436 = -8399;
	int32_t t77 = 402316178;

	t77 = (((x433*x434)<=x435)%x436);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x446 = -1LL;
	static int16_t x448 = INT16_MAX;
	int32_t t78 = 2282;

	t78 = (((x445*x446)<=x447)%x448);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x450 = 167481901;
	volatile int8_t x451 = -1;
	static uint16_t x452 = 13U;
	volatile int32_t t79 = 108;

	t79 = (((x449*x450)<=x451)%x452);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x453 = UINT32_MAX;
	int64_t x454 = -1LL;
	volatile int32_t x455 = INT32_MIN;
	uint16_t x456 = UINT16_MAX;
	volatile int32_t t80 = -2545272;

	t80 = (((x453*x454)<=x455)%x456);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x457 = 0U;
	int8_t x458 = 0;
	static int8_t x459 = -2;
	uint64_t t81 = 90848LLU;

	t81 = (((x457*x458)<=x459)%x460);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x461 = INT8_MIN;
	volatile uint64_t x462 = 63080746685LLU;
	uint32_t x463 = 10U;
	static uint64_t x464 = 14780441450LLU;
	volatile uint64_t t82 = 11214LLU;

	t82 = (((x461*x462)<=x463)%x464);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint32_t x465 = 250688717U;
	int8_t x466 = -1;
	uint32_t x467 = 268U;
	static int8_t x468 = INT8_MAX;
	volatile int32_t t83 = -13518;

	t83 = (((x465*x466)<=x467)%x468);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x470 = 41959620U;
	int8_t x471 = INT8_MIN;
	static volatile int16_t x472 = INT16_MAX;
	int32_t t84 = 111219;

	t84 = (((x469*x470)<=x471)%x472);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x478 = UINT32_MAX;
	volatile int8_t x479 = INT8_MIN;
	uint32_t x480 = 10267U;
	uint32_t t85 = 1756008648U;

	t85 = (((x477*x478)<=x479)%x480);

	if (t85 != 1U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x482 = 7873U;
	int64_t x483 = -1LL;
	int8_t x484 = -1;
	int32_t t86 = -2;

	t86 = (((x481*x482)<=x483)%x484);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x486 = 1;
	int8_t x487 = 54;
	int32_t x488 = -1;
	int32_t t87 = -27;

	t87 = (((x485*x486)<=x487)%x488);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x493 = -916;
	uint16_t x494 = 0U;
	volatile uint64_t x495 = UINT64_MAX;
	uint8_t x496 = 3U;
	volatile int32_t t88 = -971866221;

	t88 = (((x493*x494)<=x495)%x496);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x497 = 33455517U;
	int16_t x498 = INT16_MAX;
	static uint16_t x500 = 23083U;
	volatile int32_t t89 = -168987073;

	t89 = (((x497*x498)<=x499)%x500);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x501 = 3173LLU;
	uint32_t x503 = 1935695U;
	int64_t x504 = -13292609678505144LL;
	static volatile int64_t t90 = -6406LL;

	t90 = (((x501*x502)<=x503)%x504);

	if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x505 = 18U;
	int16_t x507 = INT16_MIN;
	static volatile int64_t x508 = INT64_MIN;
	volatile int64_t t91 = -37776935838217LL;

	t91 = (((x505*x506)<=x507)%x508);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x509 = INT8_MIN;
	volatile uint32_t x510 = 15U;
	int16_t x511 = -1;
	int64_t t92 = -231617384137790261LL;

	t92 = (((x509*x510)<=x511)%x512);

	if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x517 = 109U;
	uint64_t x518 = 262LLU;
	int32_t x519 = 74668332;
	static volatile uint64_t x520 = UINT64_MAX;
	volatile uint64_t t93 = 14271452137990LLU;

	t93 = (((x517*x518)<=x519)%x520);

	if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x521 = UINT32_MAX;
	int32_t x522 = INT32_MAX;
	volatile uint64_t x524 = UINT64_MAX;
	volatile uint64_t t94 = 3423040304814767102LLU;

	t94 = (((x521*x522)<=x523)%x524);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x529 = -1;
	int16_t x530 = INT16_MIN;
	int32_t x531 = -8293343;
	static volatile int64_t x532 = -1LL;
	int64_t t95 = 1526719201373LL;

	t95 = (((x529*x530)<=x531)%x532);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x533 = 27U;
	int32_t x534 = -1;
	uint16_t x535 = UINT16_MAX;
	uint64_t x536 = 2855LLU;
	volatile uint64_t t96 = 7769LLU;

	t96 = (((x533*x534)<=x535)%x536);

	if (t96 != 1LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x541 = -1;
	int32_t x542 = -1;
	int8_t x543 = INT8_MIN;
	uint32_t x544 = 4817590U;

	t97 = (((x541*x542)<=x543)%x544);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x545 = -5;
	int16_t x546 = INT16_MIN;
	static uint16_t x547 = UINT16_MAX;
	static int32_t x548 = -1;
	int32_t t98 = 212110097;

	t98 = (((x545*x546)<=x547)%x548);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x549 = -10874637LL;
	int64_t x550 = 2082844877LL;
	volatile int16_t x551 = INT16_MAX;
	static int16_t x552 = -55;

	t99 = (((x549*x550)<=x551)%x552);

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


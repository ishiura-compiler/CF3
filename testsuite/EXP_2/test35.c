#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x1 = UINT8_MAX;
uint8_t x6 = 1U;
volatile int8_t x10 = INT8_MIN;
int32_t t2 = -3826066;
static volatile uint64_t x14 = UINT64_MAX;
volatile uint64_t x21 = UINT64_MAX;
static int8_t x23 = INT8_MIN;
volatile int32_t t5 = -98;
int64_t x31 = INT64_MAX;
int32_t x70 = -1;
int16_t x72 = INT16_MAX;
uint8_t x77 = 32U;
static uint64_t x80 = UINT64_MAX;
volatile int64_t x87 = 15537720649LL;
volatile uint8_t x88 = 87U;
int32_t x90 = -1;
int32_t x91 = INT32_MAX;
int8_t x93 = 60;
static volatile uint64_t x110 = 6685LLU;
uint16_t x116 = UINT16_MAX;
volatile int32_t t22 = 22;
volatile uint16_t x119 = UINT16_MAX;
uint8_t x125 = 19U;
uint16_t x126 = 14U;
uint8_t x130 = 26U;
volatile int32_t t25 = 57574;
int32_t x133 = 20104;
volatile uint8_t x135 = UINT8_MAX;
volatile int8_t x136 = -1;
uint16_t x142 = UINT16_MAX;
int32_t t29 = 121427108;
volatile int32_t t30 = -31622;
int32_t t31 = -106986;
volatile uint32_t x183 = 456901U;
uint8_t x192 = UINT8_MAX;
uint64_t x214 = 8458392396086622283LLU;
static int64_t x221 = -1LL;
volatile int32_t t39 = -10908;
int32_t x232 = INT32_MIN;
uint32_t x243 = 596U;
int8_t x247 = -1;
static volatile int32_t t43 = -32682669;
int32_t x250 = -1;
static uint32_t x265 = 6U;
volatile int64_t x268 = INT64_MAX;
int16_t x284 = INT16_MIN;
int32_t t51 = -597985697;
int16_t x286 = -1;
uint16_t x288 = 1480U;
int16_t x294 = 2;
volatile int8_t x297 = INT8_MIN;
volatile int32_t t58 = -12823;
volatile int32_t t62 = 246941692;
int8_t x367 = -1;
int32_t t65 = -6765;
volatile uint16_t x374 = 14241U;
volatile int32_t t66 = -2194;
int32_t x382 = INT32_MIN;
volatile int8_t x397 = 13;
volatile int8_t x408 = 1;
int8_t x418 = INT8_MIN;
int64_t x423 = -1LL;
uint64_t x429 = 898567399058LLU;
int8_t x430 = 11;
int16_t x437 = 0;
uint32_t x444 = 6049U;
uint32_t x452 = UINT32_MAX;
int32_t t83 = 3048;
volatile int32_t t84 = 174;
int32_t x482 = INT32_MAX;
static volatile int16_t x484 = INT16_MAX;
static uint8_t x497 = 2U;
int32_t x506 = -1;
int32_t t91 = -3;
int8_t x517 = -3;
int64_t x518 = -29352363755283129LL;
int32_t t94 = -717393;
int32_t x529 = INT32_MIN;
int32_t t97 = -101;
int32_t t99 = -338;


void f0(void) {
	int32_t x2 = -488;
	uint32_t x3 = 1981U;
	uint64_t x4 = 1069617LLU;
	int32_t t0 = -83190;

	t0 = ((x1*(x2+x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = 7LL;
	static int64_t x7 = -1LL;
	uint8_t x8 = 113U;
	int32_t t1 = -5740828;

	t1 = ((x5*(x6+x7))<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = 34;
	volatile int8_t x11 = INT8_MIN;
	int32_t x12 = -1296;

	t2 = ((x9*(x10+x11))<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint32_t x13 = UINT32_MAX;
	int8_t x15 = INT8_MAX;
	uint16_t x16 = 28U;
	static volatile int32_t t3 = -617;

	t3 = ((x13*(x14+x15))<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	int16_t x18 = -602;
	int64_t x19 = -958LL;
	int32_t x20 = INT32_MAX;
	int32_t t4 = 19187;

	t4 = ((x17*(x18+x19))<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = INT64_MAX;
	uint32_t x24 = UINT32_MAX;

	t5 = ((x21*(x22+x23))<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint64_t x25 = 19158009816790790LLU;
	uint16_t x26 = UINT16_MAX;
	int8_t x27 = INT8_MIN;
	int32_t x28 = INT32_MIN;
	int32_t t6 = 23503;

	t6 = ((x25*(x26+x27))<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = 1;
	int32_t x30 = 0;
	static int32_t x32 = INT32_MIN;
	int32_t t7 = -84385;

	t7 = ((x29*(x30+x31))<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x33 = 1669U;
	int8_t x34 = -3;
	int16_t x35 = INT16_MAX;
	int64_t x36 = INT64_MIN;
	int32_t t8 = 7;

	t8 = ((x33*(x34+x35))<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x41 = -3;
	int8_t x42 = -1;
	uint32_t x43 = 135774138U;
	int16_t x44 = INT16_MAX;
	volatile int32_t t9 = -12;

	t9 = ((x41*(x42+x43))<x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x53 = 3U;
	uint8_t x54 = UINT8_MAX;
	static int8_t x55 = INT8_MIN;
	uint64_t x56 = UINT64_MAX;
	volatile int32_t t10 = -22268;

	t10 = ((x53*(x54+x55))<x56);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x61 = 11900U;
	volatile int8_t x62 = 43;
	uint8_t x63 = 1U;
	uint8_t x64 = UINT8_MAX;
	int32_t t11 = 236;

	t11 = ((x61*(x62+x63))<x64);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x69 = -910;
	volatile int8_t x71 = 15;
	int32_t t12 = 1;

	t12 = ((x69*(x70+x71))<x72);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x73 = -37;
	static volatile int32_t x74 = -9314;
	static uint8_t x75 = UINT8_MAX;
	int64_t x76 = INT64_MIN;
	int32_t t13 = -1988482;

	t13 = ((x73*(x74+x75))<x76);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x78 = INT16_MIN;
	int16_t x79 = INT16_MIN;
	volatile int32_t t14 = 57;

	t14 = ((x77*(x78+x79))<x80);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x81 = 1907624411921481LLU;
	int8_t x82 = 0;
	int16_t x83 = INT16_MIN;
	static int64_t x84 = 3183LL;
	int32_t t15 = 5604;

	t15 = ((x81*(x82+x83))<x84);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x85 = 2LLU;
	static uint16_t x86 = 1U;
	int32_t t16 = -9579702;

	t16 = ((x85*(x86+x87))<x88);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x89 = UINT64_MAX;
	int16_t x92 = INT16_MAX;
	volatile int32_t t17 = -114;

	t17 = ((x89*(x90+x91))<x92);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x94 = INT8_MIN;
	int64_t x95 = -15161399LL;
	volatile int32_t x96 = 8058;
	int32_t t18 = 6182;

	t18 = ((x93*(x94+x95))<x96);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x97 = 1LL;
	int8_t x98 = 0;
	int64_t x99 = INT64_MAX;
	volatile uint16_t x100 = 24U;
	int32_t t19 = -3016672;

	t19 = ((x97*(x98+x99))<x100);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x105 = 40;
	int8_t x106 = -1;
	uint8_t x107 = 24U;
	uint8_t x108 = 3U;
	static volatile int32_t t20 = 960;

	t20 = ((x105*(x106+x107))<x108);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x109 = 0;
	int32_t x111 = INT32_MIN;
	static int16_t x112 = INT16_MIN;
	int32_t t21 = 1;

	t21 = ((x109*(x110+x111))<x112);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x113 = INT32_MAX;
	uint64_t x114 = 63182915541LLU;
	uint64_t x115 = 25580133970LLU;

	t22 = ((x113*(x114+x115))<x116);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x117 = 271134752312408991LLU;
	volatile int8_t x118 = -1;
	int32_t x120 = INT32_MIN;
	volatile int32_t t23 = -32755919;

	t23 = ((x117*(x118+x119))<x120);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x127 = UINT32_MAX;
	uint16_t x128 = UINT16_MAX;
	volatile int32_t t24 = -694446;

	t24 = ((x125*(x126+x127))<x128);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x129 = 1844447218835LLU;
	volatile int16_t x131 = INT16_MIN;
	volatile int32_t x132 = -1;

	t25 = ((x129*(x130+x131))<x132);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x134 = 15;
	int32_t t26 = -234733;

	t26 = ((x133*(x134+x135))<x136);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x137 = UINT64_MAX;
	int64_t x138 = 199159538509495011LL;
	uint64_t x139 = 2637LLU;
	uint32_t x140 = UINT32_MAX;
	int32_t t27 = 12;

	t27 = ((x137*(x138+x139))<x140);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x141 = -42574591;
	uint32_t x143 = 7U;
	static volatile int64_t x144 = INT64_MIN;
	int32_t t28 = -6;

	t28 = ((x141*(x142+x143))<x144);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x145 = INT8_MIN;
	uint64_t x146 = 138LLU;
	int8_t x147 = INT8_MIN;
	volatile int64_t x148 = 536356324LL;

	t29 = ((x145*(x146+x147))<x148);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x149 = -1;
	uint8_t x150 = UINT8_MAX;
	static int32_t x151 = -86603;
	volatile int64_t x152 = -1LL;

	t30 = ((x149*(x150+x151))<x152);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x153 = 10008U;
	volatile uint16_t x154 = 2U;
	int16_t x155 = INT16_MAX;
	int8_t x156 = -1;

	t31 = ((x153*(x154+x155))<x156);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x177 = 372564290198482693LLU;
	static int64_t x178 = INT64_MIN;
	int8_t x179 = 12;
	uint32_t x180 = 44121U;
	volatile int32_t t32 = 0;

	t32 = ((x177*(x178+x179))<x180);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x181 = UINT32_MAX;
	int16_t x182 = -1;
	uint32_t x184 = UINT32_MAX;
	volatile int32_t t33 = 0;

	t33 = ((x181*(x182+x183))<x184);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x185 = -1;
	static volatile uint64_t x186 = 126524138459990LLU;
	volatile uint32_t x187 = 243U;
	static int32_t x188 = INT32_MIN;
	volatile int32_t t34 = 5642;

	t34 = ((x185*(x186+x187))<x188);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x189 = 8U;
	volatile int8_t x190 = INT8_MIN;
	volatile int32_t x191 = -1;
	volatile int32_t t35 = 5368818;

	t35 = ((x189*(x190+x191))<x192);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x209 = -1;
	volatile uint32_t x210 = 36336503U;
	int8_t x211 = 1;
	int64_t x212 = INT64_MIN;
	int32_t t36 = -3;

	t36 = ((x209*(x210+x211))<x212);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x213 = 1145;
	int32_t x215 = 7124;
	static int64_t x216 = INT64_MAX;
	int32_t t37 = -1;

	t37 = ((x213*(x214+x215))<x216);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x222 = -1;
	int64_t x223 = 5LL;
	int64_t x224 = 1LL;
	int32_t t38 = -2640044;

	t38 = ((x221*(x222+x223))<x224);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x225 = -1;
	static uint8_t x226 = UINT8_MAX;
	volatile uint64_t x227 = 276418883948484888LLU;
	int8_t x228 = INT8_MIN;

	t39 = ((x225*(x226+x227))<x228);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x229 = UINT16_MAX;
	int16_t x230 = -1;
	uint16_t x231 = 702U;
	int32_t t40 = 46608652;

	t40 = ((x229*(x230+x231))<x232);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x233 = -1LL;
	static uint64_t x234 = UINT64_MAX;
	uint32_t x235 = 1011491U;
	int64_t x236 = INT64_MAX;
	int32_t t41 = -2290;

	t41 = ((x233*(x234+x235))<x236);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x241 = UINT8_MAX;
	static int16_t x242 = -1;
	uint16_t x244 = UINT16_MAX;
	int32_t t42 = 38;

	t42 = ((x241*(x242+x243))<x244);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x245 = INT8_MAX;
	int16_t x246 = INT16_MAX;
	int32_t x248 = INT32_MAX;

	t43 = ((x245*(x246+x247))<x248);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x249 = 54;
	static int16_t x251 = -1;
	uint32_t x252 = 4315U;
	volatile int32_t t44 = 54167;

	t44 = ((x249*(x250+x251))<x252);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x253 = -13173986792LL;
	volatile int8_t x254 = INT8_MIN;
	static uint16_t x255 = 95U;
	static volatile int64_t x256 = INT64_MAX;
	int32_t t45 = 24;

	t45 = ((x253*(x254+x255))<x256);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x257 = -8988;
	static uint16_t x258 = UINT16_MAX;
	int16_t x259 = INT16_MAX;
	int16_t x260 = 395;
	volatile int32_t t46 = -341637;

	t46 = ((x257*(x258+x259))<x260);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x266 = 4U;
	int16_t x267 = INT16_MIN;
	int32_t t47 = -50;

	t47 = ((x265*(x266+x267))<x268);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint8_t x269 = UINT8_MAX;
	int32_t x270 = -1;
	int8_t x271 = 0;
	static int64_t x272 = 1LL;
	static int32_t t48 = -25624136;

	t48 = ((x269*(x270+x271))<x272);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x273 = 237367698LLU;
	static int64_t x274 = 515967LL;
	volatile int32_t x275 = INT32_MIN;
	volatile int32_t x276 = INT32_MAX;
	volatile int32_t t49 = 513271;

	t49 = ((x273*(x274+x275))<x276);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x277 = UINT32_MAX;
	int8_t x278 = -5;
	int16_t x279 = 150;
	static int64_t x280 = INT64_MAX;
	volatile int32_t t50 = 306;

	t50 = ((x277*(x278+x279))<x280);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x281 = -1;
	int32_t x282 = -1;
	uint16_t x283 = 19508U;

	t51 = ((x281*(x282+x283))<x284);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x285 = 0U;
	int16_t x287 = INT16_MIN;
	volatile int32_t t52 = -19317;

	t52 = ((x285*(x286+x287))<x288);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x289 = -81;
	uint64_t x290 = 0LLU;
	static uint16_t x291 = 7934U;
	int8_t x292 = 40;
	volatile int32_t t53 = -1;

	t53 = ((x289*(x290+x291))<x292);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x293 = UINT16_MAX;
	int8_t x295 = INT8_MIN;
	int64_t x296 = -1LL;
	int32_t t54 = 13;

	t54 = ((x293*(x294+x295))<x296);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x298 = 380U;
	int32_t x299 = -1;
	static int64_t x300 = INT64_MAX;
	static int32_t t55 = -82;

	t55 = ((x297*(x298+x299))<x300);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x305 = INT16_MIN;
	static int32_t x306 = INT32_MAX;
	uint64_t x307 = UINT64_MAX;
	int16_t x308 = INT16_MIN;
	int32_t t56 = 6081;

	t56 = ((x305*(x306+x307))<x308);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x313 = -1;
	uint16_t x314 = UINT16_MAX;
	volatile uint8_t x315 = UINT8_MAX;
	volatile int32_t x316 = 5836864;
	static int32_t t57 = -1931531;

	t57 = ((x313*(x314+x315))<x316);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x325 = INT8_MAX;
	int16_t x326 = INT16_MIN;
	int8_t x327 = -6;
	int64_t x328 = 18349499LL;

	t58 = ((x325*(x326+x327))<x328);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x333 = INT64_MIN;
	volatile int8_t x334 = -1;
	volatile uint64_t x335 = 65832377624LLU;
	uint64_t x336 = 2690558973385015900LLU;
	int32_t t59 = 1;

	t59 = ((x333*(x334+x335))<x336);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x337 = INT16_MIN;
	uint8_t x338 = 1U;
	volatile uint64_t x339 = 122041901112240128LLU;
	static int8_t x340 = INT8_MIN;
	int32_t t60 = -69535201;

	t60 = ((x337*(x338+x339))<x340);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x341 = -1;
	int8_t x342 = -48;
	int16_t x343 = INT16_MIN;
	uint64_t x344 = UINT64_MAX;
	int32_t t61 = -192589089;

	t61 = ((x341*(x342+x343))<x344);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x345 = 53;
	int16_t x346 = -19;
	volatile int16_t x347 = 56;
	int16_t x348 = INT16_MIN;

	t62 = ((x345*(x346+x347))<x348);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x349 = -17762852LL;
	int64_t x350 = -24253704547LL;
	uint32_t x351 = 0U;
	int64_t x352 = INT64_MIN;
	int32_t t63 = -251279087;

	t63 = ((x349*(x350+x351))<x352);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x365 = INT16_MAX;
	uint64_t x366 = UINT64_MAX;
	static int8_t x368 = -1;
	static volatile int32_t t64 = 1;

	t64 = ((x365*(x366+x367))<x368);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x369 = 62134231U;
	volatile int16_t x370 = INT16_MAX;
	int64_t x371 = -74088LL;
	volatile int8_t x372 = INT8_MIN;

	t65 = ((x369*(x370+x371))<x372);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x373 = INT8_MIN;
	volatile uint16_t x375 = 32432U;
	static volatile int32_t x376 = INT32_MIN;

	t66 = ((x373*(x374+x375))<x376);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x377 = INT8_MIN;
	volatile uint64_t x378 = UINT64_MAX;
	int32_t x379 = INT32_MIN;
	static int64_t x380 = -1LL;
	static volatile int32_t t67 = -610;

	t67 = ((x377*(x378+x379))<x380);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x381 = 21U;
	static int32_t x383 = INT32_MAX;
	int8_t x384 = 8;
	int32_t t68 = 5;

	t68 = ((x381*(x382+x383))<x384);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x393 = 1627639LLU;
	int16_t x394 = -13;
	int16_t x395 = 8437;
	static uint32_t x396 = UINT32_MAX;
	int32_t t69 = 19;

	t69 = ((x393*(x394+x395))<x396);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x398 = -2091LL;
	int8_t x399 = 4;
	volatile int8_t x400 = -1;
	volatile int32_t t70 = 2391534;

	t70 = ((x397*(x398+x399))<x400);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x405 = INT32_MIN;
	volatile int32_t x406 = INT32_MIN;
	uint32_t x407 = UINT32_MAX;
	int32_t t71 = -50694;

	t71 = ((x405*(x406+x407))<x408);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x409 = INT32_MIN;
	uint64_t x410 = 43808LLU;
	volatile int64_t x411 = 71LL;
	int32_t x412 = -1;
	volatile int32_t t72 = -6;

	t72 = ((x409*(x410+x411))<x412);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x413 = 24;
	int16_t x414 = INT16_MIN;
	uint64_t x415 = 1845412856429418LLU;
	int8_t x416 = INT8_MAX;
	static int32_t t73 = 6;

	t73 = ((x413*(x414+x415))<x416);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x417 = 0;
	int64_t x419 = 0LL;
	int8_t x420 = -1;
	int32_t t74 = 0;

	t74 = ((x417*(x418+x419))<x420);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x421 = 3111U;
	int16_t x422 = INT16_MIN;
	int8_t x424 = INT8_MAX;
	volatile int32_t t75 = -449151;

	t75 = ((x421*(x422+x423))<x424);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x425 = UINT64_MAX;
	volatile int64_t x426 = -1LL;
	uint16_t x427 = 101U;
	int32_t x428 = INT32_MIN;
	volatile int32_t t76 = 1;

	t76 = ((x425*(x426+x427))<x428);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x431 = 1753746LLU;
	volatile uint64_t x432 = 3425LLU;
	int32_t t77 = -6919794;

	t77 = ((x429*(x430+x431))<x432);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x433 = 1661U;
	static int64_t x434 = 4542037LL;
	static int8_t x435 = 3;
	int64_t x436 = -200285345971989LL;
	volatile int32_t t78 = 20281;

	t78 = ((x433*(x434+x435))<x436);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x438 = -1649;
	uint8_t x439 = 3U;
	int8_t x440 = INT8_MIN;
	int32_t t79 = -95461;

	t79 = ((x437*(x438+x439))<x440);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x441 = INT8_MIN;
	int8_t x442 = INT8_MIN;
	int8_t x443 = -3;
	static int32_t t80 = -771;

	t80 = ((x441*(x442+x443))<x444);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x449 = -1;
	static volatile int16_t x450 = INT16_MAX;
	uint8_t x451 = UINT8_MAX;
	int32_t t81 = -74;

	t81 = ((x449*(x450+x451))<x452);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x457 = INT8_MIN;
	static uint64_t x458 = 504079LLU;
	int8_t x459 = INT8_MIN;
	static int64_t x460 = -1LL;
	int32_t t82 = 61918785;

	t82 = ((x457*(x458+x459))<x460);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x465 = 110150260225285LLU;
	volatile int64_t x466 = -3654469269072152LL;
	int16_t x467 = INT16_MAX;
	volatile int16_t x468 = -103;

	t83 = ((x465*(x466+x467))<x468);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x469 = -1;
	int16_t x470 = 500;
	int32_t x471 = -1;
	volatile int16_t x472 = INT16_MIN;

	t84 = ((x469*(x470+x471))<x472);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x477 = INT8_MAX;
	uint64_t x478 = UINT64_MAX;
	volatile uint8_t x479 = 0U;
	uint8_t x480 = 7U;
	int32_t t85 = 286;

	t85 = ((x477*(x478+x479))<x480);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x481 = 0U;
	volatile int8_t x483 = -1;
	volatile int32_t t86 = -246571;

	t86 = ((x481*(x482+x483))<x484);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x489 = -811781696;
	uint8_t x490 = 1U;
	int8_t x491 = -3;
	uint64_t x492 = 42187198353373876LLU;
	static int32_t t87 = -161258545;

	t87 = ((x489*(x490+x491))<x492);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x493 = -1;
	int32_t x494 = 14894;
	static volatile uint64_t x495 = 20120141657163270LLU;
	int64_t x496 = -1LL;
	int32_t t88 = -2;

	t88 = ((x493*(x494+x495))<x496);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x498 = INT64_MAX;
	volatile int64_t x499 = INT64_MIN;
	volatile int16_t x500 = INT16_MIN;
	volatile int32_t t89 = 51;

	t89 = ((x497*(x498+x499))<x500);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x505 = 78LLU;
	int8_t x507 = 0;
	uint8_t x508 = 23U;
	volatile int32_t t90 = 2;

	t90 = ((x505*(x506+x507))<x508);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x509 = 14U;
	uint8_t x510 = 5U;
	volatile int8_t x511 = INT8_MIN;
	int8_t x512 = INT8_MAX;

	t91 = ((x509*(x510+x511))<x512);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x513 = 1617LLU;
	int64_t x514 = 3LL;
	int64_t x515 = 389583387LL;
	static uint8_t x516 = 9U;
	volatile int32_t t92 = 107388;

	t92 = ((x513*(x514+x515))<x516);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x519 = UINT64_MAX;
	static int16_t x520 = 27;
	volatile int32_t t93 = -47583424;

	t93 = ((x517*(x518+x519))<x520);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x521 = UINT64_MAX;
	int32_t x522 = -1;
	int64_t x523 = -1LL;
	volatile int8_t x524 = INT8_MIN;

	t94 = ((x521*(x522+x523))<x524);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x530 = -392LL;
	volatile int64_t x531 = -30828481LL;
	static int16_t x532 = INT16_MIN;
	static volatile int32_t t95 = -161806;

	t95 = ((x529*(x530+x531))<x532);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x537 = INT16_MAX;
	int8_t x538 = INT8_MIN;
	uint64_t x539 = 15447164881041LLU;
	static int32_t x540 = INT32_MIN;
	volatile int32_t t96 = -12181997;

	t96 = ((x537*(x538+x539))<x540);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x541 = 347227U;
	volatile int16_t x542 = -12;
	int32_t x543 = -14242;
	static int32_t x544 = -1;

	t97 = ((x541*(x542+x543))<x544);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x557 = 5611;
	volatile int64_t x558 = 248LL;
	int16_t x559 = -1;
	int16_t x560 = -469;
	volatile int32_t t98 = 4;

	t98 = ((x557*(x558+x559))<x560);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x561 = -1;
	int64_t x562 = -131102LL;
	uint64_t x563 = 16332297434LLU;
	uint64_t x564 = UINT64_MAX;

	t99 = ((x561*(x562+x563))<x564);

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


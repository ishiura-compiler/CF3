#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x11 = 11U;
int8_t x14 = -1;
int64_t x15 = INT64_MAX;
static int32_t t2 = -1867;
volatile int64_t x21 = INT64_MIN;
volatile uint8_t x22 = 1U;
static uint8_t x33 = 104U;
uint16_t x38 = 4960U;
int64_t t5 = -549135929731LL;
volatile int32_t x43 = INT32_MAX;
int32_t x48 = INT32_MIN;
uint32_t x51 = 79177U;
static int32_t x52 = -7590652;
uint16_t x54 = UINT16_MAX;
int8_t x55 = INT8_MIN;
uint64_t t11 = 18771712431399710LLU;
int64_t x70 = INT64_MAX;
int32_t t12 = 5785;
int64_t x85 = -1LL;
int8_t x88 = -1;
int8_t x90 = 1;
static int32_t x95 = INT32_MIN;
uint32_t x96 = 21U;
volatile int64_t x97 = -510964566805LL;
volatile int64_t x98 = -1LL;
int8_t x111 = INT8_MAX;
static int32_t t20 = -39229;
uint32_t x114 = 19841767U;
static uint8_t x123 = 40U;
int16_t x136 = INT16_MIN;
static volatile int32_t t25 = -11072;
int16_t x144 = INT16_MAX;
volatile int32_t t26 = 3;
int32_t x153 = -761994;
volatile uint16_t x161 = 1U;
volatile int8_t x163 = INT8_MIN;
static volatile uint8_t x172 = UINT8_MAX;
uint8_t x173 = UINT8_MAX;
int8_t x175 = -1;
static volatile int32_t t31 = 904831;
int8_t x179 = INT8_MAX;
static int32_t t32 = 114886;
int16_t x185 = -1;
int32_t x187 = INT32_MAX;
static int32_t x189 = -30747;
volatile int8_t x199 = INT8_MIN;
volatile int32_t x211 = INT32_MAX;
volatile uint8_t x213 = 110U;
uint32_t x216 = UINT32_MAX;
volatile uint16_t x219 = 94U;
static volatile int32_t t40 = -51;
volatile int32_t t41 = 302521;
int16_t x235 = -1;
static volatile int16_t x236 = -11198;
static int64_t t48 = 6177LL;
uint16_t x263 = 277U;
int64_t x271 = -1LL;
volatile uint16_t x283 = 32565U;
int8_t x291 = -13;
static int8_t x293 = INT8_MIN;
int32_t t54 = 1;
int16_t x303 = 29;
volatile int64_t x308 = INT64_MIN;
int32_t t57 = 24291;
int8_t x315 = INT8_MIN;
static uint32_t x329 = 27694U;
int32_t x332 = INT32_MIN;
int64_t t62 = -384LL;
uint8_t x346 = 12U;
static int16_t x347 = INT16_MAX;
static int16_t x363 = 462;
uint64_t x365 = 3180219LLU;
volatile int16_t x366 = INT16_MIN;
uint8_t x367 = 49U;
int8_t x376 = INT8_MIN;
volatile uint16_t x377 = 3U;
int8_t x385 = INT8_MIN;
static int64_t x389 = 120210256872487462LL;
volatile int32_t x396 = 1951;
int32_t t73 = 2419133;
uint64_t x401 = 12957LLU;
int64_t x402 = -34027LL;
static int32_t x410 = 754;
int32_t x414 = -1;
uint64_t x415 = 4304794441LLU;
volatile int32_t x422 = 0;
int32_t t78 = -16312;
static volatile int8_t x428 = INT8_MIN;
static volatile uint32_t t80 = 30U;
uint16_t x436 = 0U;
volatile int16_t x437 = INT16_MAX;
int16_t x442 = -6;
int32_t x447 = 2004;
uint32_t x450 = UINT32_MAX;
static int16_t x453 = -1;
int8_t x458 = -1;
static int64_t x462 = -1LL;
int16_t x464 = -2637;
volatile int32_t t88 = -155;
static int16_t x479 = 51;
static int32_t t92 = 95;
uint16_t x485 = UINT16_MAX;
volatile uint64_t t96 = 26356309099LLU;
volatile int32_t t97 = 127357980;
static volatile int8_t x506 = INT8_MAX;
uint8_t x507 = 52U;
volatile uint32_t x508 = 12506717U;


void f0(void) {
	int64_t x9 = -1554LL;
	int8_t x10 = 6;
	volatile int64_t x12 = INT64_MIN;
	volatile int64_t t0 = -110122945900438LL;

	t0 = (((x9*x10)<x11)&x12);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int16_t x13 = -51;
	static int32_t x16 = INT32_MIN;
	volatile int32_t t1 = 4192588;

	t1 = (((x13*x14)<x15)&x16);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x17 = 0U;
	static volatile int64_t x18 = -1LL;
	static int32_t x19 = INT32_MIN;
	static volatile int32_t x20 = INT32_MIN;

	t2 = (((x17*x18)<x19)&x20);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x23 = -1;
	static int16_t x24 = 1;
	int32_t t3 = -38;

	t3 = (((x21*x22)<x23)&x24);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x34 = -1;
	volatile int32_t x35 = -5818225;
	uint32_t x36 = 3016536U;
	uint32_t t4 = 65U;

	t4 = (((x33*x34)<x35)&x36);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x37 = UINT8_MAX;
	int16_t x39 = INT16_MIN;
	int64_t x40 = 2176660560935112LL;

	t5 = (((x37*x38)<x39)&x40);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x41 = UINT64_MAX;
	static uint16_t x42 = UINT16_MAX;
	uint8_t x44 = UINT8_MAX;
	int32_t t6 = -1149898;

	t6 = (((x41*x42)<x43)&x44);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x45 = 23554345U;
	static int8_t x46 = -1;
	volatile int32_t x47 = 12;
	volatile int32_t t7 = 62323;

	t7 = (((x45*x46)<x47)&x48);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x49 = 1U;
	int32_t x50 = INT32_MIN;
	static int32_t t8 = 4446;

	t8 = (((x49*x50)<x51)&x52);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x53 = 309U;
	int64_t x56 = INT64_MAX;
	volatile int64_t t9 = 716380885LL;

	t9 = (((x53*x54)<x55)&x56);

	if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x57 = -1;
	int16_t x58 = -1;
	static int64_t x59 = INT64_MAX;
	int64_t x60 = -1LL;
	int64_t t10 = 68796LL;

	t10 = (((x57*x58)<x59)&x60);

	if (t10 != 1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x65 = INT16_MIN;
	static int16_t x66 = INT16_MIN;
	int64_t x67 = INT64_MIN;
	uint64_t x68 = UINT64_MAX;

	t11 = (((x65*x66)<x67)&x68);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x69 = -1;
	int16_t x71 = 8057;
	int8_t x72 = INT8_MIN;

	t12 = (((x69*x70)<x71)&x72);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x73 = INT8_MIN;
	int16_t x74 = INT16_MIN;
	volatile uint64_t x75 = UINT64_MAX;
	int16_t x76 = INT16_MAX;
	volatile int32_t t13 = 3141146;

	t13 = (((x73*x74)<x75)&x76);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint64_t x81 = UINT64_MAX;
	static int64_t x82 = -15977061LL;
	int64_t x83 = INT64_MIN;
	int32_t x84 = -1;
	static volatile int32_t t14 = -1;

	t14 = (((x81*x82)<x83)&x84);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x86 = 8853;
	int32_t x87 = INT32_MIN;
	int32_t t15 = 1;

	t15 = (((x85*x86)<x87)&x88);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x89 = INT32_MIN;
	static int16_t x91 = INT16_MIN;
	int64_t x92 = INT64_MIN;
	static volatile int64_t t16 = 1267462042149337210LL;

	t16 = (((x89*x90)<x91)&x92);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x93 = 335LLU;
	volatile int8_t x94 = INT8_MIN;
	static uint32_t t17 = 63026U;

	t17 = (((x93*x94)<x95)&x96);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x99 = UINT16_MAX;
	volatile int64_t x100 = INT64_MAX;
	static int64_t t18 = 12314146784240791LL;

	t18 = (((x97*x98)<x99)&x100);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x105 = 123;
	int64_t x106 = 276LL;
	int16_t x107 = 10;
	static volatile uint16_t x108 = 3U;
	int32_t t19 = -14124237;

	t19 = (((x105*x106)<x107)&x108);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x109 = -1;
	int32_t x110 = INT32_MAX;
	int16_t x112 = INT16_MIN;

	t20 = (((x109*x110)<x111)&x112);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x113 = INT32_MIN;
	int16_t x115 = INT16_MAX;
	uint64_t x116 = UINT64_MAX;
	uint64_t t21 = 510226675797LLU;

	t21 = (((x113*x114)<x115)&x116);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x121 = 21092U;
	uint8_t x122 = 5U;
	volatile int16_t x124 = INT16_MIN;
	int32_t t22 = 691;

	t22 = (((x121*x122)<x123)&x124);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x125 = 1LLU;
	static int16_t x126 = INT16_MIN;
	int16_t x127 = 214;
	static int16_t x128 = 1807;
	static int32_t t23 = 55809377;

	t23 = (((x125*x126)<x127)&x128);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x129 = 3;
	volatile int16_t x130 = -2437;
	static int16_t x131 = INT16_MIN;
	static volatile int32_t x132 = -1;
	volatile int32_t t24 = -2324;

	t24 = (((x129*x130)<x131)&x132);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x133 = 1U;
	volatile uint16_t x134 = UINT16_MAX;
	volatile uint64_t x135 = UINT64_MAX;

	t25 = (((x133*x134)<x135)&x136);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x141 = 3U;
	int32_t x142 = 6487;
	uint64_t x143 = UINT64_MAX;

	t26 = (((x141*x142)<x143)&x144);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x154 = 61814025U;
	uint32_t x155 = UINT32_MAX;
	int32_t x156 = -531933979;
	static int32_t t27 = -27420215;

	t27 = (((x153*x154)<x155)&x156);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x162 = INT64_MIN;
	int32_t x164 = 3;
	int32_t t28 = 244883;

	t28 = (((x161*x162)<x163)&x164);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x165 = 0U;
	uint16_t x166 = UINT16_MAX;
	int64_t x167 = INT64_MIN;
	uint32_t x168 = UINT32_MAX;
	uint32_t t29 = 764U;

	t29 = (((x165*x166)<x167)&x168);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x169 = INT16_MIN;
	uint64_t x170 = 622LLU;
	int64_t x171 = -887477LL;
	static volatile int32_t t30 = 240191;

	t30 = (((x169*x170)<x171)&x172);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x174 = INT16_MIN;
	uint8_t x176 = 84U;

	t31 = (((x173*x174)<x175)&x176);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint8_t x177 = UINT8_MAX;
	int16_t x178 = 37;
	int8_t x180 = INT8_MIN;

	t32 = (((x177*x178)<x179)&x180);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x186 = -3;
	volatile int64_t x188 = -1329787248LL;
	volatile int64_t t33 = 99LL;

	t33 = (((x185*x186)<x187)&x188);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x190 = 0LL;
	int8_t x191 = INT8_MAX;
	int8_t x192 = 1;
	volatile int32_t t34 = 42;

	t34 = (((x189*x190)<x191)&x192);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x193 = -1;
	volatile int8_t x194 = INT8_MIN;
	uint32_t x195 = 1637U;
	uint64_t x196 = 812873025LLU;
	volatile uint64_t t35 = 4690484726424367289LLU;

	t35 = (((x193*x194)<x195)&x196);

	if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x197 = -1LL;
	uint8_t x198 = UINT8_MAX;
	uint32_t x200 = 10735U;
	volatile uint32_t t36 = 2U;

	t36 = (((x197*x198)<x199)&x200);

	if (t36 != 1U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x201 = INT16_MIN;
	volatile uint8_t x202 = 3U;
	uint16_t x203 = UINT16_MAX;
	static int64_t x204 = INT64_MAX;
	int64_t t37 = -267479411997987LL;

	t37 = (((x201*x202)<x203)&x204);

	if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x209 = INT32_MIN;
	volatile int64_t x210 = -1LL;
	int32_t x212 = INT32_MAX;
	static int32_t t38 = -14468;

	t38 = (((x209*x210)<x211)&x212);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x214 = 50;
	uint16_t x215 = 108U;
	uint32_t t39 = 14558438U;

	t39 = (((x213*x214)<x215)&x216);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x217 = 0;
	int64_t x218 = INT64_MAX;
	int8_t x220 = INT8_MIN;

	t40 = (((x217*x218)<x219)&x220);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x221 = 14LLU;
	uint32_t x222 = UINT32_MAX;
	int8_t x223 = -29;
	uint8_t x224 = UINT8_MAX;

	t41 = (((x221*x222)<x223)&x224);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x225 = INT16_MAX;
	volatile int8_t x226 = -1;
	uint8_t x227 = 0U;
	uint64_t x228 = UINT64_MAX;
	static uint64_t t42 = 1920754003353351011LLU;

	t42 = (((x225*x226)<x227)&x228);

	if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x229 = INT8_MAX;
	volatile int8_t x230 = 41;
	static int8_t x231 = -1;
	int32_t x232 = 3997;
	static volatile int32_t t43 = 4983;

	t43 = (((x229*x230)<x231)&x232);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x233 = 5U;
	int8_t x234 = -1;
	volatile int32_t t44 = -1;

	t44 = (((x233*x234)<x235)&x236);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x237 = 7269773U;
	int8_t x238 = 0;
	int8_t x239 = 44;
	static uint8_t x240 = 0U;
	int32_t t45 = 64923;

	t45 = (((x237*x238)<x239)&x240);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x245 = INT8_MIN;
	int8_t x246 = -18;
	int32_t x247 = 2966507;
	static int32_t x248 = INT32_MIN;
	static volatile int32_t t46 = 671207;

	t46 = (((x245*x246)<x247)&x248);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x249 = INT8_MIN;
	static uint64_t x250 = UINT64_MAX;
	static volatile int32_t x251 = INT32_MAX;
	int64_t x252 = -1739779486LL;
	int64_t t47 = 4381787853215LL;

	t47 = (((x249*x250)<x251)&x252);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x257 = 1U;
	int8_t x258 = -1;
	volatile int8_t x259 = -1;
	int64_t x260 = -1LL;

	t48 = (((x257*x258)<x259)&x260);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x261 = INT16_MIN;
	int64_t x262 = -1LL;
	uint64_t x264 = 1LLU;
	uint64_t t49 = 106864051870368460LLU;

	t49 = (((x261*x262)<x263)&x264);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x269 = -73718625691LL;
	int8_t x270 = 0;
	int32_t x272 = INT32_MAX;
	int32_t t50 = 6709063;

	t50 = (((x269*x270)<x271)&x272);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x273 = 13U;
	int8_t x274 = INT8_MIN;
	int16_t x275 = INT16_MIN;
	uint16_t x276 = 711U;
	static int32_t t51 = -491354;

	t51 = (((x273*x274)<x275)&x276);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x281 = UINT8_MAX;
	uint64_t x282 = 212LLU;
	static volatile uint8_t x284 = 5U;
	volatile int32_t t52 = 569;

	t52 = (((x281*x282)<x283)&x284);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x289 = -1;
	int64_t x290 = INT64_MAX;
	int16_t x292 = INT16_MAX;
	volatile int32_t t53 = -853551;

	t53 = (((x289*x290)<x291)&x292);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x294 = UINT8_MAX;
	volatile uint16_t x295 = UINT16_MAX;
	volatile int32_t x296 = 255978358;

	t54 = (((x293*x294)<x295)&x296);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x301 = -1;
	static uint8_t x302 = 2U;
	uint8_t x304 = 3U;
	int32_t t55 = 31664927;

	t55 = (((x301*x302)<x303)&x304);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x305 = INT16_MIN;
	static uint32_t x306 = 1714U;
	int64_t x307 = INT64_MIN;
	volatile int64_t t56 = -7532633LL;

	t56 = (((x305*x306)<x307)&x308);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x309 = INT16_MIN;
	uint8_t x310 = 0U;
	static uint8_t x311 = 5U;
	int32_t x312 = -1;

	t57 = (((x309*x310)<x311)&x312);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x313 = INT16_MAX;
	uint16_t x314 = 0U;
	volatile int16_t x316 = INT16_MIN;
	int32_t t58 = -92267924;

	t58 = (((x313*x314)<x315)&x316);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x321 = INT64_MAX;
	uint16_t x322 = 1U;
	int8_t x323 = INT8_MIN;
	volatile int32_t x324 = INT32_MIN;
	int32_t t59 = 195;

	t59 = (((x321*x322)<x323)&x324);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x325 = 3641U;
	static uint32_t x326 = 2U;
	int16_t x327 = INT16_MAX;
	int8_t x328 = -1;
	static volatile int32_t t60 = 427;

	t60 = (((x325*x326)<x327)&x328);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x330 = INT32_MIN;
	static int16_t x331 = -1;
	volatile int32_t t61 = -142560531;

	t61 = (((x329*x330)<x331)&x332);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x333 = UINT64_MAX;
	int32_t x334 = 7015;
	static int8_t x335 = INT8_MAX;
	volatile int64_t x336 = 1256808926456245775LL;

	t62 = (((x333*x334)<x335)&x336);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x341 = INT8_MIN;
	int32_t x342 = -1;
	volatile int8_t x343 = INT8_MIN;
	volatile int64_t x344 = INT64_MIN;
	volatile int64_t t63 = 65563891LL;

	t63 = (((x341*x342)<x343)&x344);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x345 = 984017U;
	uint32_t x348 = 472U;
	uint32_t t64 = 369319651U;

	t64 = (((x345*x346)<x347)&x348);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x349 = 42U;
	static int64_t x350 = 116447LL;
	static volatile uint32_t x351 = 65329U;
	uint8_t x352 = 0U;
	int32_t t65 = -140083832;

	t65 = (((x349*x350)<x351)&x352);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x361 = UINT64_MAX;
	int64_t x362 = -1LL;
	uint8_t x364 = 11U;
	int32_t t66 = -27480229;

	t66 = (((x361*x362)<x363)&x364);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x368 = 76547735;
	volatile int32_t t67 = 109353947;

	t67 = (((x365*x366)<x367)&x368);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x373 = 7242;
	uint32_t x374 = 17U;
	int8_t x375 = -30;
	int32_t t68 = -364;

	t68 = (((x373*x374)<x375)&x376);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x378 = 8U;
	uint16_t x379 = 815U;
	int32_t x380 = INT32_MAX;
	volatile int32_t t69 = -28;

	t69 = (((x377*x378)<x379)&x380);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x381 = INT16_MIN;
	volatile int16_t x382 = INT16_MAX;
	int64_t x383 = -31191599059895765LL;
	int8_t x384 = INT8_MIN;
	int32_t t70 = 6;

	t70 = (((x381*x382)<x383)&x384);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x386 = -1LL;
	uint8_t x387 = 59U;
	uint32_t x388 = 901U;
	uint32_t t71 = 383248U;

	t71 = (((x385*x386)<x387)&x388);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x390 = 1U;
	static int64_t x391 = -1LL;
	uint8_t x392 = UINT8_MAX;
	volatile int32_t t72 = 419938373;

	t72 = (((x389*x390)<x391)&x392);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x393 = 3716869230445312LLU;
	static uint64_t x394 = 3775873440620LLU;
	int64_t x395 = -1LL;

	t73 = (((x393*x394)<x395)&x396);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x397 = -1;
	static volatile int32_t x398 = -1;
	uint32_t x399 = 140U;
	uint32_t x400 = 4314U;
	volatile uint32_t t74 = 439769U;

	t74 = (((x397*x398)<x399)&x400);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x403 = INT16_MIN;
	int16_t x404 = INT16_MIN;
	volatile int32_t t75 = 1;

	t75 = (((x401*x402)<x403)&x404);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x409 = 125519LL;
	int16_t x411 = -1;
	static uint16_t x412 = 1U;
	volatile int32_t t76 = -2655988;

	t76 = (((x409*x410)<x411)&x412);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x413 = 1U;
	int32_t x416 = INT32_MIN;
	int32_t t77 = 8561;

	t77 = (((x413*x414)<x415)&x416);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x421 = 12253U;
	volatile uint64_t x423 = 8048549387LLU;
	uint8_t x424 = 0U;

	t78 = (((x421*x422)<x423)&x424);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x425 = INT8_MAX;
	volatile int32_t x426 = -1;
	volatile uint8_t x427 = UINT8_MAX;
	volatile int32_t t79 = -974;

	t79 = (((x425*x426)<x427)&x428);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x429 = 1375;
	int64_t x430 = 376151LL;
	static int64_t x431 = -14043991104419127LL;
	static uint32_t x432 = 2306624U;

	t80 = (((x429*x430)<x431)&x432);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x433 = INT16_MIN;
	uint16_t x434 = 757U;
	volatile int32_t x435 = INT32_MAX;
	volatile int32_t t81 = -275;

	t81 = (((x433*x434)<x435)&x436);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x438 = INT16_MAX;
	int32_t x439 = -1;
	int16_t x440 = -2181;
	volatile int32_t t82 = -114372478;

	t82 = (((x437*x438)<x439)&x440);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x441 = -1;
	static int32_t x443 = INT32_MAX;
	volatile uint16_t x444 = 306U;
	static int32_t t83 = 219411;

	t83 = (((x441*x442)<x443)&x444);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x445 = 52;
	int16_t x446 = INT16_MIN;
	uint32_t x448 = UINT32_MAX;
	static volatile uint32_t t84 = 110311560U;

	t84 = (((x445*x446)<x447)&x448);

	if (t84 != 1U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x449 = -1;
	int64_t x451 = 28616LL;
	volatile int8_t x452 = -10;
	int32_t t85 = 156462653;

	t85 = (((x449*x450)<x451)&x452);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x454 = -1;
	static int16_t x455 = -1;
	int8_t x456 = INT8_MAX;
	int32_t t86 = 37;

	t86 = (((x453*x454)<x455)&x456);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x457 = 1U;
	uint8_t x459 = UINT8_MAX;
	volatile int16_t x460 = INT16_MIN;
	static int32_t t87 = 11;

	t87 = (((x457*x458)<x459)&x460);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x461 = -1;
	int8_t x463 = INT8_MIN;

	t88 = (((x461*x462)<x463)&x464);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x465 = INT8_MIN;
	uint16_t x466 = 25U;
	uint8_t x467 = 1U;
	uint64_t x468 = 45LLU;
	volatile uint64_t t89 = 7002199516764LLU;

	t89 = (((x465*x466)<x467)&x468);

	if (t89 != 1LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x469 = INT8_MIN;
	uint32_t x470 = UINT32_MAX;
	volatile int64_t x471 = INT64_MIN;
	volatile uint64_t x472 = 43919305651LLU;
	uint64_t t90 = 9579LLU;

	t90 = (((x469*x470)<x471)&x472);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x473 = INT8_MAX;
	uint32_t x474 = UINT32_MAX;
	volatile int8_t x475 = 1;
	int32_t x476 = INT32_MAX;
	int32_t t91 = 1;

	t91 = (((x473*x474)<x475)&x476);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x477 = 4U;
	int32_t x478 = -4125152;
	int32_t x480 = -1;

	t92 = (((x477*x478)<x479)&x480);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x481 = 32U;
	static int16_t x482 = INT16_MIN;
	uint64_t x483 = 6699LLU;
	int8_t x484 = INT8_MIN;
	static volatile int32_t t93 = -28162;

	t93 = (((x481*x482)<x483)&x484);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x486 = 196U;
	volatile int64_t x487 = INT64_MIN;
	int16_t x488 = -7284;
	int32_t t94 = -3419;

	t94 = (((x485*x486)<x487)&x488);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x489 = 1010U;
	static int32_t x490 = -1;
	int64_t x491 = -1LL;
	static uint32_t x492 = 1865U;
	volatile uint32_t t95 = 473U;

	t95 = (((x489*x490)<x491)&x492);

	if (t95 != 1U) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x497 = UINT8_MAX;
	volatile int8_t x498 = INT8_MIN;
	int64_t x499 = -75982LL;
	uint64_t x500 = UINT64_MAX;

	t96 = (((x497*x498)<x499)&x500);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x501 = UINT16_MAX;
	static uint32_t x502 = 6U;
	uint64_t x503 = UINT64_MAX;
	int16_t x504 = INT16_MIN;

	t97 = (((x501*x502)<x503)&x504);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x505 = INT8_MIN;
	uint32_t t98 = 103591U;

	t98 = (((x505*x506)<x507)&x508);

	if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x509 = UINT16_MAX;
	uint32_t x510 = UINT32_MAX;
	uint64_t x511 = UINT64_MAX;
	int8_t x512 = INT8_MAX;
	int32_t t99 = -35;

	t99 = (((x509*x510)<x511)&x512);

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


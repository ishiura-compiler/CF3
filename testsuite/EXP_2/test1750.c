#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = -7;
int32_t t0 = 660;
int16_t x6 = 16323;
int8_t x7 = -1;
volatile int32_t t2 = 16;
int16_t x15 = INT16_MIN;
static uint8_t x21 = 78U;
uint32_t x23 = UINT32_MAX;
volatile int32_t t4 = 274371;
static int32_t t5 = 170248;
static int32_t x34 = 730;
uint8_t x36 = 1U;
int16_t x39 = INT16_MIN;
int32_t x53 = 0;
static uint64_t x70 = 50LLU;
int32_t x71 = -1;
int64_t x80 = INT64_MIN;
static int8_t x81 = INT8_MIN;
static int8_t x82 = INT8_MIN;
volatile int64_t x89 = INT64_MAX;
static uint8_t x95 = 37U;
int32_t t18 = 151221;
int8_t x118 = -1;
uint16_t x125 = UINT16_MAX;
static volatile int32_t t21 = -21490;
static int16_t x142 = 1308;
int32_t t23 = 28896785;
int16_t x175 = INT16_MIN;
int16_t x184 = INT16_MAX;
static int32_t t28 = 21008828;
static volatile int32_t t29 = -2262;
uint64_t x197 = 42072LLU;
static int32_t x198 = 4122020;
static uint8_t x206 = 3U;
uint64_t x213 = UINT64_MAX;
int32_t x215 = INT32_MIN;
int32_t t32 = 127;
volatile int32_t t33 = -1103;
static int64_t x224 = INT64_MAX;
volatile uint16_t x229 = 32031U;
int32_t x230 = INT32_MAX;
int64_t x241 = -1LL;
uint16_t x243 = UINT16_MAX;
int32_t x246 = -1;
uint32_t x253 = 857800U;
volatile int8_t x255 = -3;
int32_t t42 = -9298619;
volatile int32_t t43 = -60656;
int16_t x271 = 133;
uint32_t x275 = 7171221U;
static uint8_t x285 = UINT8_MAX;
int16_t x295 = -17;
int16_t x296 = INT16_MAX;
volatile uint8_t x319 = UINT8_MAX;
static int16_t x333 = -4;
static uint64_t x337 = 1619748618351LLU;
volatile int32_t t56 = 930807;
int8_t x346 = INT8_MIN;
static int32_t x348 = INT32_MAX;
int8_t x353 = -1;
int32_t x354 = INT32_MAX;
uint64_t x355 = 778163052003962LLU;
int32_t t60 = -15195;
int64_t x368 = INT64_MIN;
int32_t x375 = -16292748;
static int8_t x393 = INT8_MIN;
static int32_t t67 = -29;
uint64_t x397 = 225789322LLU;
volatile int64_t x399 = INT64_MAX;
volatile int32_t t71 = 112;
int8_t x417 = INT8_MIN;
static volatile uint32_t x418 = UINT32_MAX;
int8_t x419 = INT8_MIN;
uint8_t x420 = 28U;
int32_t t73 = 26497;
int32_t t74 = 1;
int8_t x438 = 21;
int64_t x440 = 7834161416667630LL;
uint16_t x454 = 572U;
int8_t x463 = 45;
int64_t x470 = INT64_MIN;
uint64_t x478 = UINT64_MAX;
int32_t t82 = 152006540;
static int16_t x486 = INT16_MIN;
int8_t x491 = INT8_MAX;
volatile int32_t x493 = -302;
volatile int8_t x497 = 3;
uint64_t x499 = 24991LLU;
static int8_t x502 = INT8_MAX;
static int16_t x504 = INT16_MIN;
uint16_t x508 = UINT16_MAX;
volatile uint16_t x513 = 0U;
static int32_t x519 = -1;
uint64_t x521 = UINT64_MAX;
int64_t x524 = -131269966050131324LL;
volatile int32_t t94 = 40;
uint32_t x534 = UINT32_MAX;
uint8_t x537 = 0U;
int32_t x539 = INT32_MIN;
int8_t x540 = -1;
static int64_t x543 = INT64_MAX;
int32_t x544 = INT32_MIN;
int8_t x548 = 1;
int64_t x550 = 19LL;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	volatile int32_t x2 = INT32_MIN;
	int32_t x3 = INT32_MIN;

	t0 = ((x1%(x2&x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 1U;
	int32_t x8 = INT32_MAX;
	static int32_t t1 = 561812039;

	t1 = ((x5%(x6&x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	static int32_t x10 = -8664802;
	static int32_t x11 = -1341;
	int64_t x12 = INT64_MAX;

	t2 = ((x9%(x10&x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	uint16_t x14 = UINT16_MAX;
	static int32_t x16 = -1;
	volatile int32_t t3 = 4987458;

	t3 = ((x13%(x14&x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x22 = UINT16_MAX;
	static int16_t x24 = INT16_MIN;

	t4 = ((x21%(x22&x23))==x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = 1;
	uint16_t x26 = UINT16_MAX;
	uint16_t x27 = 500U;
	volatile int64_t x28 = INT64_MIN;

	t5 = ((x25%(x26&x27))==x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x33 = 1751LL;
	volatile int32_t x35 = -137;
	static volatile int32_t t6 = 191294829;

	t6 = ((x33%(x34&x35))==x36);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = INT8_MAX;
	uint32_t x38 = 52006966U;
	int16_t x40 = INT16_MIN;
	volatile int32_t t7 = -492023;

	t7 = ((x37%(x38&x39))==x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x54 = -186LL;
	static int64_t x55 = -1LL;
	int32_t x56 = INT32_MIN;
	volatile int32_t t8 = 28071;

	t8 = ((x53%(x54&x55))==x56);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x57 = INT64_MAX;
	volatile uint16_t x58 = UINT16_MAX;
	volatile uint8_t x59 = 95U;
	int8_t x60 = -1;
	int32_t t9 = 3682;

	t9 = ((x57%(x58&x59))==x60);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x61 = 20U;
	int8_t x62 = INT8_MIN;
	int8_t x63 = -1;
	int64_t x64 = INT64_MIN;
	volatile int32_t t10 = 133;

	t10 = ((x61%(x62&x63))==x64);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x69 = -26;
	int16_t x72 = -71;
	volatile int32_t t11 = -707067078;

	t11 = ((x69%(x70&x71))==x72);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x77 = UINT32_MAX;
	int32_t x78 = 2815212;
	volatile int64_t x79 = -1LL;
	int32_t t12 = -4;

	t12 = ((x77%(x78&x79))==x80);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x83 = -1;
	static int16_t x84 = -1;
	static int32_t t13 = -54683215;

	t13 = ((x81%(x82&x83))==x84);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x85 = INT8_MIN;
	uint64_t x86 = UINT64_MAX;
	volatile int64_t x87 = INT64_MIN;
	int16_t x88 = INT16_MIN;
	volatile int32_t t14 = -271488;

	t14 = ((x85%(x86&x87))==x88);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x90 = INT64_MAX;
	static uint16_t x91 = UINT16_MAX;
	uint8_t x92 = UINT8_MAX;
	int32_t t15 = 189;

	t15 = ((x89%(x90&x91))==x92);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x93 = -1;
	static int32_t x94 = INT32_MAX;
	volatile uint64_t x96 = 13392652068LLU;
	int32_t t16 = 53697;

	t16 = ((x93%(x94&x95))==x96);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x97 = -1LL;
	uint32_t x98 = 78063950U;
	int16_t x99 = -93;
	static int32_t x100 = 1780;
	int32_t t17 = 251;

	t17 = ((x97%(x98&x99))==x100);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x109 = 0U;
	static int64_t x110 = -1LL;
	int32_t x111 = -53;
	int32_t x112 = INT32_MAX;

	t18 = ((x109%(x110&x111))==x112);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x117 = INT32_MAX;
	volatile uint32_t x119 = UINT32_MAX;
	static volatile int64_t x120 = 693065409589LL;
	volatile int32_t t19 = 891636;

	t19 = ((x117%(x118&x119))==x120);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x126 = INT32_MIN;
	static int32_t x127 = INT32_MIN;
	static volatile int16_t x128 = 105;
	static int32_t t20 = 119699137;

	t20 = ((x125%(x126&x127))==x128);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x129 = UINT64_MAX;
	volatile int32_t x130 = INT32_MIN;
	int32_t x131 = INT32_MIN;
	int64_t x132 = -1479189LL;

	t21 = ((x129%(x130&x131))==x132);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x133 = 762808102562LLU;
	int16_t x134 = INT16_MIN;
	uint64_t x135 = 95274011459426LLU;
	int8_t x136 = INT8_MAX;
	static int32_t t22 = -5;

	t22 = ((x133%(x134&x135))==x136);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x141 = 480830LL;
	uint8_t x143 = 4U;
	uint64_t x144 = 802672793333LLU;

	t23 = ((x141%(x142&x143))==x144);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x145 = 895715;
	int8_t x146 = -8;
	int16_t x147 = -1;
	int64_t x148 = -1213LL;
	int32_t t24 = -130;

	t24 = ((x145%(x146&x147))==x148);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x153 = -2938;
	int16_t x154 = INT16_MAX;
	uint64_t x155 = UINT64_MAX;
	volatile uint32_t x156 = 971U;
	int32_t t25 = -219;

	t25 = ((x153%(x154&x155))==x156);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x169 = 33U;
	uint64_t x170 = 8414636740376075LLU;
	static uint8_t x171 = 3U;
	static uint32_t x172 = 14764030U;
	volatile int32_t t26 = -1;

	t26 = ((x169%(x170&x171))==x172);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x173 = -1687114LL;
	static volatile int8_t x174 = INT8_MIN;
	int16_t x176 = INT16_MIN;
	int32_t t27 = 49435844;

	t27 = ((x173%(x174&x175))==x176);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x181 = UINT16_MAX;
	volatile int64_t x182 = -1LL;
	volatile uint64_t x183 = UINT64_MAX;

	t28 = ((x181%(x182&x183))==x184);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x185 = UINT8_MAX;
	static volatile int64_t x186 = INT64_MAX;
	int8_t x187 = -1;
	int64_t x188 = -125LL;

	t29 = ((x185%(x186&x187))==x188);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x199 = INT8_MAX;
	int64_t x200 = -1LL;
	volatile int32_t t30 = -5125;

	t30 = ((x197%(x198&x199))==x200);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x205 = INT32_MIN;
	uint32_t x207 = 649942297U;
	static int64_t x208 = INT64_MAX;
	int32_t t31 = -1946123;

	t31 = ((x205%(x206&x207))==x208);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int64_t x214 = INT64_MAX;
	volatile int8_t x216 = 0;

	t32 = ((x213%(x214&x215))==x216);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x217 = 1U;
	int8_t x218 = INT8_MAX;
	uint32_t x219 = 1356257U;
	static int64_t x220 = -189348140979556LL;

	t33 = ((x217%(x218&x219))==x220);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x221 = INT8_MIN;
	int16_t x222 = INT16_MIN;
	static int32_t x223 = INT32_MIN;
	volatile int32_t t34 = -42688686;

	t34 = ((x221%(x222&x223))==x224);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x225 = INT8_MIN;
	int64_t x226 = 22602215542231LL;
	int64_t x227 = -1LL;
	int32_t x228 = -1;
	int32_t t35 = -1384397;

	t35 = ((x225%(x226&x227))==x228);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x231 = -78736938;
	uint16_t x232 = 1879U;
	volatile int32_t t36 = -29;

	t36 = ((x229%(x230&x231))==x232);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x237 = 283LLU;
	int16_t x238 = 170;
	static uint32_t x239 = UINT32_MAX;
	uint64_t x240 = 103887LLU;
	static int32_t t37 = 73450;

	t37 = ((x237%(x238&x239))==x240);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x242 = UINT8_MAX;
	static int8_t x244 = INT8_MAX;
	int32_t t38 = -181088;

	t38 = ((x241%(x242&x243))==x244);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x245 = INT16_MAX;
	uint64_t x247 = 32056073486780942LLU;
	int16_t x248 = INT16_MIN;
	static int32_t t39 = 502181742;

	t39 = ((x245%(x246&x247))==x248);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x249 = INT64_MIN;
	uint16_t x250 = UINT16_MAX;
	int16_t x251 = 1232;
	int8_t x252 = 4;
	volatile int32_t t40 = 50684729;

	t40 = ((x249%(x250&x251))==x252);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x254 = -1;
	int8_t x256 = INT8_MAX;
	volatile int32_t t41 = -3851;

	t41 = ((x253%(x254&x255))==x256);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x257 = INT64_MIN;
	int16_t x258 = -302;
	int32_t x259 = INT32_MIN;
	uint64_t x260 = 25742444722LLU;

	t42 = ((x257%(x258&x259))==x260);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x261 = INT16_MIN;
	volatile uint32_t x262 = 1U;
	volatile uint64_t x263 = 5698797661469155413LLU;
	uint8_t x264 = UINT8_MAX;

	t43 = ((x261%(x262&x263))==x264);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x265 = 51U;
	volatile int32_t x266 = -1;
	int8_t x267 = INT8_MAX;
	int64_t x268 = 60216043311304636LL;
	volatile int32_t t44 = 14129;

	t44 = ((x265%(x266&x267))==x268);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x269 = INT64_MAX;
	volatile uint16_t x270 = 13U;
	uint16_t x272 = 87U;
	int32_t t45 = 78333;

	t45 = ((x269%(x270&x271))==x272);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x273 = INT16_MAX;
	int32_t x274 = -696;
	int64_t x276 = -344LL;
	volatile int32_t t46 = -245;

	t46 = ((x273%(x274&x275))==x276);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int64_t x277 = -499769697552159692LL;
	static int16_t x278 = INT16_MAX;
	int16_t x279 = -1;
	static uint32_t x280 = UINT32_MAX;
	volatile int32_t t47 = 0;

	t47 = ((x277%(x278&x279))==x280);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x286 = UINT32_MAX;
	uint32_t x287 = UINT32_MAX;
	uint64_t x288 = UINT64_MAX;
	volatile int32_t t48 = -542594904;

	t48 = ((x285%(x286&x287))==x288);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x293 = 2609697392547LLU;
	volatile int64_t x294 = -1LL;
	volatile int32_t t49 = -4;

	t49 = ((x293%(x294&x295))==x296);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x301 = INT64_MIN;
	uint8_t x302 = 72U;
	volatile int32_t x303 = -3;
	static int8_t x304 = -12;
	volatile int32_t t50 = 3353626;

	t50 = ((x301%(x302&x303))==x304);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x309 = INT64_MAX;
	volatile uint32_t x310 = UINT32_MAX;
	int8_t x311 = INT8_MIN;
	int64_t x312 = INT64_MIN;
	static volatile int32_t t51 = 0;

	t51 = ((x309%(x310&x311))==x312);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x317 = INT64_MIN;
	uint16_t x318 = UINT16_MAX;
	volatile int64_t x320 = -1844LL;
	volatile int32_t t52 = 4409252;

	t52 = ((x317%(x318&x319))==x320);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x321 = 398207LL;
	int8_t x322 = INT8_MIN;
	int16_t x323 = INT16_MIN;
	static volatile int32_t x324 = 61531;
	static volatile int32_t t53 = 1033891419;

	t53 = ((x321%(x322&x323))==x324);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x325 = 0;
	volatile int64_t x326 = -11LL;
	int32_t x327 = 408;
	int16_t x328 = 1841;
	volatile int32_t t54 = -127609;

	t54 = ((x325%(x326&x327))==x328);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x334 = INT32_MAX;
	static uint16_t x335 = 12427U;
	int16_t x336 = -1;
	int32_t t55 = 10587666;

	t55 = ((x333%(x334&x335))==x336);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x338 = INT8_MIN;
	volatile uint32_t x339 = 799U;
	static int64_t x340 = INT64_MAX;

	t56 = ((x337%(x338&x339))==x340);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x341 = UINT8_MAX;
	int8_t x342 = INT8_MIN;
	static volatile int16_t x343 = INT16_MIN;
	int32_t x344 = INT32_MIN;
	int32_t t57 = -5;

	t57 = ((x341%(x342&x343))==x344);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x345 = INT8_MIN;
	int16_t x347 = INT16_MIN;
	int32_t t58 = 57376;

	t58 = ((x345%(x346&x347))==x348);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x349 = -1LL;
	uint8_t x350 = 83U;
	static int8_t x351 = -11;
	volatile int64_t x352 = 17425LL;
	static volatile int32_t t59 = -619;

	t59 = ((x349%(x350&x351))==x352);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x356 = INT16_MIN;

	t60 = ((x353%(x354&x355))==x356);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x361 = 68865341U;
	static int16_t x362 = INT16_MAX;
	int8_t x363 = INT8_MAX;
	int32_t x364 = 20;
	static volatile int32_t t61 = -151763279;

	t61 = ((x361%(x362&x363))==x364);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x365 = 426U;
	volatile int8_t x366 = INT8_MIN;
	uint64_t x367 = 1277LLU;
	int32_t t62 = -18531;

	t62 = ((x365%(x366&x367))==x368);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x373 = INT64_MIN;
	volatile int64_t x374 = 6765692407LL;
	static int64_t x376 = INT64_MIN;
	static int32_t t63 = -2694;

	t63 = ((x373%(x374&x375))==x376);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x377 = 37U;
	int16_t x378 = -1;
	static volatile int8_t x379 = -31;
	static volatile int16_t x380 = 12;
	static volatile int32_t t64 = 190;

	t64 = ((x377%(x378&x379))==x380);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x385 = INT64_MIN;
	static uint64_t x386 = UINT64_MAX;
	int64_t x387 = INT64_MAX;
	volatile int64_t x388 = INT64_MIN;
	int32_t t65 = -281;

	t65 = ((x385%(x386&x387))==x388);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x389 = INT16_MIN;
	int8_t x390 = -55;
	int8_t x391 = INT8_MIN;
	static int64_t x392 = 9756174965117837LL;
	int32_t t66 = -2930675;

	t66 = ((x389%(x390&x391))==x392);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x394 = 47U;
	int8_t x395 = INT8_MAX;
	uint8_t x396 = UINT8_MAX;

	t67 = ((x393%(x394&x395))==x396);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x398 = -1LL;
	volatile uint16_t x400 = UINT16_MAX;
	int32_t t68 = 211936;

	t68 = ((x397%(x398&x399))==x400);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x401 = -124;
	volatile int32_t x402 = -1;
	uint16_t x403 = UINT16_MAX;
	static volatile int64_t x404 = 3454725359545LL;
	volatile int32_t t69 = 3784;

	t69 = ((x401%(x402&x403))==x404);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x405 = INT8_MAX;
	uint16_t x406 = UINT16_MAX;
	int8_t x407 = INT8_MAX;
	uint32_t x408 = 200U;
	int32_t t70 = 3;

	t70 = ((x405%(x406&x407))==x408);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x409 = -1LL;
	volatile int16_t x410 = -1;
	uint16_t x411 = UINT16_MAX;
	static volatile int16_t x412 = INT16_MIN;

	t71 = ((x409%(x410&x411))==x412);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t t72 = 142554;

	t72 = ((x417%(x418&x419))==x420);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x421 = 0;
	volatile int16_t x422 = -2;
	int8_t x423 = INT8_MIN;
	uint32_t x424 = UINT32_MAX;

	t73 = ((x421%(x422&x423))==x424);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x433 = INT32_MIN;
	int16_t x434 = INT16_MIN;
	uint16_t x435 = UINT16_MAX;
	int8_t x436 = INT8_MIN;

	t74 = ((x433%(x434&x435))==x436);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x437 = 261U;
	int8_t x439 = INT8_MAX;
	int32_t t75 = 71320453;

	t75 = ((x437%(x438&x439))==x440);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x445 = -1;
	uint32_t x446 = UINT32_MAX;
	int32_t x447 = INT32_MAX;
	int8_t x448 = -1;
	static volatile int32_t t76 = 981663;

	t76 = ((x445%(x446&x447))==x448);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x449 = 1U;
	static int16_t x450 = -1;
	int8_t x451 = INT8_MAX;
	int64_t x452 = INT64_MIN;
	static int32_t t77 = 1019343;

	t77 = ((x449%(x450&x451))==x452);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x453 = -7;
	uint8_t x455 = 104U;
	volatile int16_t x456 = -10;
	int32_t t78 = 52378156;

	t78 = ((x453%(x454&x455))==x456);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x461 = INT32_MIN;
	uint8_t x462 = UINT8_MAX;
	uint8_t x464 = 2U;
	volatile int32_t t79 = 298;

	t79 = ((x461%(x462&x463))==x464);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x469 = INT8_MAX;
	int8_t x471 = INT8_MIN;
	int64_t x472 = -1LL;
	int32_t t80 = 3417;

	t80 = ((x469%(x470&x471))==x472);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x473 = INT64_MIN;
	volatile int32_t x474 = -1;
	int8_t x475 = -1;
	int32_t x476 = -124024965;
	int32_t t81 = 4213;

	t81 = ((x473%(x474&x475))==x476);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x477 = 31291355;
	int64_t x479 = INT64_MAX;
	int64_t x480 = INT64_MIN;

	t82 = ((x477%(x478&x479))==x480);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x481 = -1LL;
	uint8_t x482 = 1U;
	int16_t x483 = INT16_MAX;
	uint8_t x484 = 11U;
	volatile int32_t t83 = 4;

	t83 = ((x481%(x482&x483))==x484);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x485 = -1;
	uint16_t x487 = UINT16_MAX;
	static volatile int32_t x488 = -12844;
	int32_t t84 = -21375751;

	t84 = ((x485%(x486&x487))==x488);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x489 = 402U;
	int64_t x490 = INT64_MAX;
	int32_t x492 = -210;
	volatile int32_t t85 = -49925242;

	t85 = ((x489%(x490&x491))==x492);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x494 = -41;
	uint32_t x495 = 10U;
	int16_t x496 = INT16_MIN;
	static volatile int32_t t86 = -23684746;

	t86 = ((x493%(x494&x495))==x496);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x498 = -1LL;
	int16_t x500 = 9217;
	volatile int32_t t87 = -483;

	t87 = ((x497%(x498&x499))==x500);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x501 = INT8_MAX;
	int8_t x503 = -46;
	int32_t t88 = 3624110;

	t88 = ((x501%(x502&x503))==x504);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x505 = INT16_MAX;
	volatile int32_t x506 = -1;
	uint16_t x507 = 3U;
	int32_t t89 = -219119828;

	t89 = ((x505%(x506&x507))==x508);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x509 = INT64_MIN;
	int8_t x510 = -3;
	static int16_t x511 = -1;
	int16_t x512 = INT16_MAX;
	int32_t t90 = 1158;

	t90 = ((x509%(x510&x511))==x512);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x514 = -1;
	int8_t x515 = INT8_MAX;
	int64_t x516 = INT64_MIN;
	int32_t t91 = -11;

	t91 = ((x513%(x514&x515))==x516);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x517 = 1;
	int64_t x518 = INT64_MIN;
	int64_t x520 = INT64_MIN;
	int32_t t92 = 3;

	t92 = ((x517%(x518&x519))==x520);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x522 = -21;
	static uint8_t x523 = UINT8_MAX;
	volatile int32_t t93 = 0;

	t93 = ((x521%(x522&x523))==x524);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x529 = UINT8_MAX;
	int8_t x530 = INT8_MIN;
	int64_t x531 = -1LL;
	static int32_t x532 = -33415480;

	t94 = ((x529%(x530&x531))==x532);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x533 = INT8_MIN;
	uint8_t x535 = 5U;
	uint16_t x536 = 6U;
	static volatile int32_t t95 = 65481987;

	t95 = ((x533%(x534&x535))==x536);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x538 = 359645349877162723LLU;
	volatile int32_t t96 = -3556;

	t96 = ((x537%(x538&x539))==x540);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x541 = -5;
	volatile int16_t x542 = INT16_MIN;
	int32_t t97 = -148491;

	t97 = ((x541%(x542&x543))==x544);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x545 = 3435;
	int8_t x546 = INT8_MIN;
	static int8_t x547 = INT8_MIN;
	int32_t t98 = -3;

	t98 = ((x545%(x546&x547))==x548);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x549 = 25U;
	int64_t x551 = 503933829814LL;
	volatile int64_t x552 = INT64_MAX;
	volatile int32_t t99 = 16177721;

	t99 = ((x549%(x550&x551))==x552);

	if (t99 != 0) { NG(); } else { ; }
	
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


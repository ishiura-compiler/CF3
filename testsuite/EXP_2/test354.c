#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x8 = -34;
int32_t x17 = INT32_MAX;
volatile int64_t x34 = -1LL;
int64_t t5 = 55842302LL;
uint8_t x45 = 63U;
int8_t x46 = -60;
int32_t x47 = -30973;
uint64_t x54 = 40610496750LLU;
int16_t x78 = INT16_MIN;
uint8_t x79 = UINT8_MAX;
uint64_t x80 = 3890599LLU;
volatile int32_t x90 = -50239;
static uint8_t x91 = 40U;
volatile uint64_t x102 = 13839700570479LLU;
static uint64_t t14 = 9374561984403971LLU;
volatile uint64_t t15 = 6498LLU;
static int64_t t16 = 59566916LL;
uint16_t x124 = 1U;
int8_t x151 = INT8_MIN;
int64_t t19 = 3226930461LL;
static volatile int32_t t20 = 0;
uint32_t x213 = 1169851900U;
int8_t x218 = -43;
volatile int64_t x239 = -106LL;
static volatile int32_t x242 = INT32_MIN;
uint32_t x246 = 1313073455U;
uint16_t x253 = UINT16_MAX;
static uint64_t x256 = UINT64_MAX;
uint64_t x263 = 677681178646507LLU;
int8_t x274 = INT8_MIN;
int32_t t35 = 603;
static int64_t x277 = -1LL;
volatile uint8_t x280 = 19U;
uint16_t x304 = UINT16_MAX;
uint64_t t39 = 26678111179051281LLU;
int8_t x310 = 0;
uint64_t x319 = 108856041266831LLU;
static uint64_t t42 = 105727639170763LLU;
uint32_t x321 = 898123378U;
int8_t x323 = 0;
int8_t x324 = -1;
static int64_t x336 = -11952LL;
uint64_t x338 = 6653LLU;
uint32_t x340 = 1272762U;
static uint16_t x345 = UINT16_MAX;
volatile uint32_t x346 = 77U;
uint64_t x353 = UINT64_MAX;
uint64_t t52 = 22725421463LLU;
static volatile int64_t t55 = 1096097841342356LL;
int64_t x397 = -10505578826491LL;
int32_t x398 = -1;
int16_t x402 = -81;
int16_t x403 = INT16_MIN;
int8_t x452 = 46;
static uint8_t x454 = 0U;
int64_t x458 = INT64_MIN;
static volatile int8_t x462 = -1;
uint32_t x463 = UINT32_MAX;
static uint32_t t67 = 771754U;
int8_t x469 = 0;
uint16_t x474 = 6653U;
int32_t x481 = -1;
uint16_t x484 = UINT16_MAX;
uint32_t x491 = 13293051U;
int32_t x503 = INT32_MAX;
uint8_t x509 = UINT8_MAX;
int16_t x510 = INT16_MAX;
volatile int16_t x511 = -1;
volatile uint32_t t75 = 4U;
int8_t x524 = INT8_MIN;
static uint32_t x526 = UINT32_MAX;
int32_t x558 = -472124999;
uint32_t x587 = 16201885U;
int8_t x589 = -1;
volatile int32_t x591 = 1;
int32_t t83 = INT32_MIN;
int16_t x599 = -46;
int64_t x606 = -1LL;
static volatile int8_t x608 = -1;
static volatile uint64_t x629 = 324475LLU;
int8_t x632 = INT8_MIN;
int8_t x634 = 0;
static uint64_t x647 = 1LLU;
static uint32_t x657 = UINT32_MAX;
int64_t x669 = INT64_MIN;
int64_t x672 = INT64_MIN;
int16_t x678 = INT16_MAX;
static uint64_t x679 = UINT64_MAX;
int8_t x705 = 19;
uint32_t t98 = 55U;


void f0(void) {
	static volatile int64_t x5 = -1LL;
	volatile int16_t x6 = INT16_MAX;
	uint64_t x7 = 8255672591817LLU;
	uint64_t t0 = 13855817298005LLU;

	t0 = ((x5-(x6*x7))*x8);

	if (t0 != 9197463209746299760LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = 48;
	uint8_t x10 = 14U;
	int16_t x11 = INT16_MIN;
	uint64_t x12 = 1LLU;
	volatile uint64_t t1 = 256455856561736597LLU;

	t1 = ((x9-(x10*x11))*x12);

	if (t1 != 458800LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = 57;
	uint64_t x14 = 241641LLU;
	uint8_t x15 = UINT8_MAX;
	int16_t x16 = INT16_MAX;
	uint64_t t2 = 2155364LLU;

	t2 = ((x13-(x14*x15))*x16);

	if (t2 != 18446742054659504350LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x18 = 131U;
	static uint8_t x19 = 19U;
	int8_t x20 = -3;
	uint32_t t3 = 622779325U;

	t3 = ((x17-(x18*x19))*x20);

	if (t3 != 2147491118U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = 7;
	int32_t x26 = -1;
	uint32_t x27 = 227501U;
	static int32_t x28 = -50842434;
	static uint32_t t4 = 0U;

	t4 = ((x25-(x26*x27))*x28);

	if (t4 != 3581420952U) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x33 = 242347U;
	int16_t x35 = 681;
	int32_t x36 = -795355111;

	t5 = ((x33-(x34*x35))*x36);

	if (t5 != -193293561916108LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x48 = -1;
	static volatile int32_t t6 = -19721;

	t6 = ((x45-(x46*x47))*x48);

	if (t6 != 1858317) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint64_t x53 = UINT64_MAX;
	static volatile int32_t x55 = -1;
	static volatile int16_t x56 = 1;
	static uint64_t t7 = 19451424LLU;

	t7 = ((x53-(x54*x55))*x56);

	if (t7 != 40610496749LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x57 = UINT64_MAX;
	static volatile uint16_t x58 = 2053U;
	volatile int16_t x59 = 0;
	static int32_t x60 = INT32_MIN;
	uint64_t t8 = 947861857021518559LLU;

	t8 = ((x57-(x58*x59))*x60);

	if (t8 != 2147483648LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x65 = 5;
	static volatile int16_t x66 = INT16_MIN;
	uint32_t x67 = 2548U;
	static int32_t x68 = 18995;
	static uint32_t t9 = 441U;

	t9 = ((x65-(x66*x67))*x68);

	if (t9 != 1104114431U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x73 = INT64_MIN;
	int64_t x74 = INT64_MIN;
	uint8_t x75 = 1U;
	static volatile uint64_t x76 = 666324LLU;
	uint64_t t10 = 1126863876593LLU;

	t10 = ((x73-(x74*x75))*x76);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x77 = INT16_MIN;
	static volatile uint64_t t11 = 6780404112944624LLU;

	t11 = ((x77-(x78*x79))*x80);

	if (t11 != 32381735600128LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x81 = INT16_MAX;
	uint64_t x82 = UINT64_MAX;
	volatile int32_t x83 = INT32_MAX;
	static uint64_t x84 = 292968644058844218LLU;
	volatile uint64_t t12 = 1325494LLU;

	t12 = ((x81-(x82*x83))*x84);

	if (t12 != 6795816368969344908LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x89 = 1153916105LL;
	uint8_t x92 = UINT8_MAX;
	int64_t t13 = -66LL;

	t13 = ((x89-(x90*x91))*x92);

	if (t13 != 294761044575LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x101 = 1;
	uint8_t x103 = UINT8_MAX;
	static volatile int32_t x104 = INT32_MAX;

	t14 = ((x101-(x102*x103))*x104);

	if (t14 != 17252070745899646352LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x105 = 64924893LLU;
	int32_t x106 = 32;
	static int32_t x107 = -1;
	volatile int32_t x108 = INT32_MIN;

	t15 = ((x105-(x106*x107))*x108);

	if (t15 != 18307318858924425216LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x109 = -1LL;
	uint16_t x110 = 3U;
	int8_t x111 = -18;
	int8_t x112 = INT8_MIN;

	t16 = ((x109-(x110*x111))*x112);

	if (t16 != -6784LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x121 = UINT64_MAX;
	static int8_t x122 = 1;
	volatile uint64_t x123 = 1194165LLU;
	volatile uint64_t t17 = 958LLU;

	t17 = ((x121-(x122*x123))*x124);

	if (t17 != 18446744073708357450LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x125 = 166LLU;
	int16_t x126 = INT16_MIN;
	static int8_t x127 = 17;
	static volatile int64_t x128 = -395465299LL;
	volatile uint64_t t18 = 2198770218807492LLU;

	t18 = ((x125-(x126*x127))*x128);

	if (t18 != 18446523711744712238LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x149 = -730LL;
	static int8_t x150 = -1;
	volatile int64_t x152 = 292889LL;

	t19 = ((x149-(x150*x151))*x152);

	if (t19 != -251298762LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x169 = INT16_MIN;
	int16_t x170 = -1;
	uint8_t x171 = 86U;
	static int16_t x172 = INT16_MIN;

	t20 = ((x169-(x170*x171))*x172);

	if (t20 != 1070923776) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x177 = 1;
	int8_t x178 = 0;
	int8_t x179 = 8;
	int16_t x180 = INT16_MIN;
	int32_t t21 = 95869507;

	t21 = ((x177-(x178*x179))*x180);

	if (t21 != -32768) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x185 = UINT32_MAX;
	volatile uint64_t x186 = 2LLU;
	int64_t x187 = INT64_MIN;
	volatile int16_t x188 = INT16_MAX;
	static uint64_t t22 = 309759LLU;

	t22 = ((x185-(x186*x187))*x188);

	if (t22 != 140733193355265LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x189 = 11U;
	static int64_t x190 = 187501LL;
	int16_t x191 = INT16_MIN;
	uint64_t x192 = 1LLU;
	uint64_t t23 = 6LLU;

	t23 = ((x189-(x190*x191))*x192);

	if (t23 != 6144032779LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x193 = 21U;
	int8_t x194 = INT8_MIN;
	uint8_t x195 = 100U;
	int32_t x196 = -1;
	volatile int32_t t24 = -463107;

	t24 = ((x193-(x194*x195))*x196);

	if (t24 != -12821) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int16_t x201 = INT16_MIN;
	static uint64_t x202 = UINT64_MAX;
	static uint64_t x203 = UINT64_MAX;
	int64_t x204 = -1LL;
	uint64_t t25 = 15LLU;

	t25 = ((x201-(x202*x203))*x204);

	if (t25 != 32769LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x205 = -64399LL;
	static uint32_t x206 = 29583U;
	int32_t x207 = 365;
	int64_t x208 = -1LL;
	static volatile int64_t t26 = -1LL;

	t26 = ((x205-(x206*x207))*x208);

	if (t26 != 10862194LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x214 = 0LLU;
	int32_t x215 = INT32_MAX;
	static int32_t x216 = 1;
	static uint64_t t27 = 428511810LLU;

	t27 = ((x213-(x214*x215))*x216);

	if (t27 != 1169851900LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x217 = 142153784786452LLU;
	uint64_t x219 = 30987631631164LLU;
	uint16_t x220 = 12U;
	uint64_t t28 = 61LLU;

	t28 = ((x217-(x218*x219))*x220);

	if (t28 != 17695463339118048LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x221 = -108;
	static uint64_t x222 = 503LLU;
	uint64_t x223 = UINT64_MAX;
	volatile int16_t x224 = -85;
	static uint64_t t29 = 15022957949191LLU;

	t29 = ((x221-(x222*x223))*x224);

	if (t29 != 18446744073709518041LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x237 = UINT32_MAX;
	static uint8_t x238 = 52U;
	uint16_t x240 = UINT16_MAX;
	int64_t t30 = 103143725263565644LL;

	t30 = ((x237-(x238*x239))*x240);

	if (t30 != 281471042906745LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x241 = 5U;
	int64_t x243 = 66396LL;
	int16_t x244 = INT16_MIN;
	int64_t t31 = -3LL;

	t31 = ((x241-(x242*x243))*x244);

	if (t31 != -4672203138420342784LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x245 = -1;
	volatile uint32_t x247 = 1881U;
	volatile int16_t x248 = -3686;
	static uint32_t t32 = 402152U;

	t32 = ((x245-(x246*x247))*x248);

	if (t32 != 2440875792U) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x254 = 382818156080LLU;
	int32_t x255 = INT32_MAX;
	uint64_t t33 = 2LLU;

	t33 = ((x253-(x254*x255))*x256);

	if (t33 != 10438990713273287121LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x261 = INT64_MIN;
	uint8_t x262 = 64U;
	uint32_t x264 = UINT32_MAX;
	volatile uint64_t t34 = 160052119392LLU;

	t34 = ((x261-(x262*x263))*x264);

	if (t34 != 392969288944057024LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x273 = -1;
	int8_t x275 = INT8_MIN;
	volatile int8_t x276 = 6;

	t35 = ((x273-(x274*x275))*x276);

	if (t35 != -98310) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x278 = 250;
	uint8_t x279 = UINT8_MAX;
	int64_t t36 = -233618010205LL;

	t36 = ((x277-(x278*x279))*x280);

	if (t36 != -1211269LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x281 = 3684U;
	uint8_t x282 = 1U;
	static int64_t x283 = -27LL;
	volatile int64_t x284 = -10163577142LL;
	volatile int64_t t37 = 1187326394LL;

	t37 = ((x281-(x282*x283))*x284);

	if (t37 != -37717034773962LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x285 = INT8_MIN;
	uint16_t x286 = UINT16_MAX;
	int8_t x287 = INT8_MIN;
	uint8_t x288 = 51U;
	static volatile int32_t t38 = 41963359;

	t38 = ((x285-(x286*x287))*x288);

	if (t38 != 427805952) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x301 = INT32_MAX;
	int64_t x302 = -1275223489LL;
	uint64_t x303 = UINT64_MAX;

	t39 = ((x301-(x302*x303))*x304);

	if (t39 != 57163569454530LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x305 = INT32_MIN;
	int8_t x306 = INT8_MAX;
	int32_t x307 = -346;
	static uint32_t x308 = UINT32_MAX;
	uint32_t t40 = 89800U;

	t40 = ((x305-(x306*x307))*x308);

	if (t40 != 2147439706U) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x309 = 1983U;
	int64_t x311 = -16388911914478647LL;
	uint16_t x312 = UINT16_MAX;
	static int64_t t41 = 125983523265LL;

	t41 = ((x309-(x310*x311))*x312);

	if (t41 != 129955905LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x317 = -1LL;
	int16_t x318 = -1;
	static int16_t x320 = INT16_MIN;

	t42 = ((x317-(x318*x319))*x320);

	if (t42 != 14879749313478066176LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x322 = 20512U;
	volatile uint32_t t43 = 341914132U;

	t43 = ((x321-(x322*x323))*x324);

	if (t43 != 3396843918U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x325 = INT16_MAX;
	static int8_t x326 = INT8_MIN;
	int16_t x327 = INT16_MIN;
	volatile int8_t x328 = -1;
	static int32_t t44 = -6;

	t44 = ((x325-(x326*x327))*x328);

	if (t44 != 4161537) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x333 = 86U;
	volatile int8_t x334 = 0;
	static int16_t x335 = INT16_MAX;
	static volatile int64_t t45 = -11177051LL;

	t45 = ((x333-(x334*x335))*x336);

	if (t45 != -1027872LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x337 = INT8_MIN;
	int16_t x339 = -1;
	static uint64_t t46 = 90LLU;

	t46 = ((x337-(x338*x339))*x340);

	if (t46 != 8304772050LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x347 = INT8_MIN;
	int8_t x348 = INT8_MAX;
	volatile uint32_t t47 = 76815301U;

	t47 = ((x345-(x346*x347))*x348);

	if (t47 != 9574657U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x349 = -3;
	volatile int8_t x350 = INT8_MAX;
	int16_t x351 = INT16_MIN;
	int8_t x352 = -3;
	static int32_t t48 = 2939476;

	t48 = ((x349-(x350*x351))*x352);

	if (t48 != -12484599) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x354 = 257LLU;
	volatile int16_t x355 = -31;
	static volatile int16_t x356 = 906;
	static volatile uint64_t t49 = 135773605975LLU;

	t49 = ((x353-(x354*x355))*x356);

	if (t49 != 7217196LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x357 = UINT16_MAX;
	volatile int8_t x358 = INT8_MAX;
	uint64_t x359 = UINT64_MAX;
	uint8_t x360 = UINT8_MAX;
	volatile uint64_t t50 = 4LLU;

	t50 = ((x357-(x358*x359))*x360);

	if (t50 != 16743810LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x361 = UINT64_MAX;
	static volatile int32_t x362 = -1;
	uint32_t x363 = UINT32_MAX;
	uint32_t x364 = 234U;
	static uint64_t t51 = 1723774212468984179LLU;

	t51 = ((x361-(x362*x363))*x364);

	if (t51 != 18446744073709551148LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x365 = UINT64_MAX;
	int16_t x366 = INT16_MIN;
	int8_t x367 = INT8_MIN;
	uint8_t x368 = 1U;

	t52 = ((x365-(x366*x367))*x368);

	if (t52 != 18446744073705357311LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x373 = 19U;
	int8_t x374 = -1;
	int32_t x375 = INT32_MAX;
	int64_t x376 = -1LL;
	volatile int64_t t53 = 1804000500317LL;

	t53 = ((x373-(x374*x375))*x376);

	if (t53 != -2147483666LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x377 = -1;
	uint8_t x378 = UINT8_MAX;
	static int32_t x379 = -12;
	int8_t x380 = -5;
	static int32_t t54 = 9639;

	t54 = ((x377-(x378*x379))*x380);

	if (t54 != -15295) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x385 = -1;
	volatile int64_t x386 = INT64_MIN;
	int16_t x387 = 0;
	uint16_t x388 = 56U;

	t55 = ((x385-(x386*x387))*x388);

	if (t55 != -56LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x399 = -32714988;
	uint32_t x400 = 10U;
	int64_t t56 = -119573637LL;

	t56 = ((x397-(x398*x399))*x400);

	if (t56 != -105056115414790LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x401 = 95LL;
	uint8_t x404 = 107U;
	static volatile int64_t t57 = 2910669LL;

	t57 = ((x401-(x402*x403))*x404);

	if (t57 != -283990091LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x405 = INT8_MIN;
	int16_t x406 = -1;
	int32_t x407 = -1;
	static int64_t x408 = -1LL;
	static int64_t t58 = -8085054172LL;

	t58 = ((x405-(x406*x407))*x408);

	if (t58 != 129LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int16_t x409 = -3223;
	int64_t x410 = 4565185178956LL;
	volatile int8_t x411 = INT8_MIN;
	int16_t x412 = 1408;
	volatile int64_t t59 = -1067840389LL;

	t59 = ((x409-(x410*x411))*x412);

	if (t59 != 822755933687628160LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x413 = -3;
	volatile int64_t x414 = 4LL;
	uint8_t x415 = 0U;
	int8_t x416 = INT8_MIN;
	int64_t t60 = 1050LL;

	t60 = ((x413-(x414*x415))*x416);

	if (t60 != 384LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x425 = 1342U;
	static uint64_t x426 = 263710890403577LLU;
	volatile int8_t x427 = INT8_MAX;
	uint64_t x428 = 34042LLU;
	uint64_t t61 = 10678734740LLU;

	t61 = ((x425-(x426*x427))*x428);

	if (t61 != 3587873917979718838LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x437 = INT16_MIN;
	int16_t x438 = INT16_MIN;
	uint8_t x439 = UINT8_MAX;
	static volatile int16_t x440 = 28;
	volatile int32_t t62 = -101243854;

	t62 = ((x437-(x438*x439))*x440);

	if (t62 != 233046016) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x449 = 30675U;
	static volatile uint8_t x450 = 14U;
	volatile uint8_t x451 = 1U;
	volatile int32_t t63 = -1;

	t63 = ((x449-(x450*x451))*x452);

	if (t63 != 1410406) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x453 = -1LL;
	volatile uint8_t x455 = 11U;
	int16_t x456 = INT16_MAX;
	volatile int64_t t64 = 31876283824530LL;

	t64 = ((x453-(x454*x455))*x456);

	if (t64 != -32767LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x457 = -427LL;
	volatile uint64_t x459 = UINT64_MAX;
	int32_t x460 = 9097433;
	volatile uint64_t t65 = 4436LLU;

	t65 = ((x457-(x458*x459))*x460);

	if (t65 != 9223372032970171917LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x461 = INT64_MAX;
	int32_t x464 = 1;
	int64_t t66 = 533335798796839075LL;

	t66 = ((x461-(x462*x463))*x464);

	if (t66 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x465 = 11U;
	static int16_t x466 = 80;
	static uint32_t x467 = 2591722U;
	static volatile int8_t x468 = -1;

	t67 = ((x465-(x466*x467))*x468);

	if (t67 != 207337749U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x470 = -1;
	uint32_t x471 = 1365U;
	static int32_t x472 = INT32_MIN;
	static volatile uint32_t t68 = 34686U;

	t68 = ((x469-(x470*x471))*x472);

	if (t68 != 2147483648U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x473 = -1;
	volatile int32_t x475 = -1;
	int16_t x476 = 4;
	volatile int32_t t69 = -326;

	t69 = ((x473-(x474*x475))*x476);

	if (t69 != 26608) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x477 = INT16_MAX;
	static uint64_t x478 = UINT64_MAX;
	int64_t x479 = INT64_MIN;
	volatile uint16_t x480 = 10U;
	static uint64_t t70 = 3011LLU;

	t70 = ((x477-(x478*x479))*x480);

	if (t70 != 327670LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x482 = -1LL;
	int16_t x483 = -3;
	static volatile int64_t t71 = 893633LL;

	t71 = ((x481-(x482*x483))*x484);

	if (t71 != -262140LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x489 = INT16_MIN;
	int32_t x490 = INT32_MAX;
	uint16_t x492 = 6U;
	uint32_t t72 = 7154U;

	t72 = ((x489-(x490*x491))*x492);

	if (t72 != 79561698U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x497 = -1;
	int64_t x498 = -1LL;
	volatile int16_t x499 = -1;
	volatile int8_t x500 = INT8_MIN;
	volatile int64_t t73 = 1775357LL;

	t73 = ((x497-(x498*x499))*x500);

	if (t73 != 256LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x501 = UINT64_MAX;
	static uint32_t x502 = UINT32_MAX;
	uint16_t x504 = UINT16_MAX;
	volatile uint64_t t74 = 37995LLU;

	t74 = ((x501-(x502*x503))*x504);

	if (t74 != 18446603338368548866LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x512 = 9275U;

	t75 = ((x509-(x510*x511))*x512);

	if (t75 != 306279050U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x521 = INT16_MIN;
	static int32_t x522 = -5943;
	int8_t x523 = INT8_MIN;
	volatile int32_t t76 = 194068233;

	t76 = ((x521-(x522*x523))*x524);

	if (t76 != 101564416) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x525 = 2;
	static volatile int16_t x527 = -3978;
	static int64_t x528 = -1LL;
	int64_t t77 = 97822LL;

	t77 = ((x525-(x526*x527))*x528);

	if (t77 != -4294963320LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x553 = 0U;
	int8_t x554 = INT8_MIN;
	uint32_t x555 = UINT32_MAX;
	static uint8_t x556 = UINT8_MAX;
	uint32_t t78 = 6466339U;

	t78 = ((x553-(x554*x555))*x556);

	if (t78 != 4294934656U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x557 = UINT64_MAX;
	int64_t x559 = -14008085LL;
	uint8_t x560 = UINT8_MAX;
	uint64_t t79 = 16641855857LLU;

	t79 = ((x557-(x558*x559))*x560);

	if (t79 != 16760284458972238036LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x565 = -1LL;
	int16_t x566 = INT16_MAX;
	int32_t x567 = -1;
	int16_t x568 = INT16_MIN;
	int64_t t80 = 2197LL;

	t80 = ((x565-(x566*x567))*x568);

	if (t80 != -1073676288LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x577 = INT32_MAX;
	static volatile int8_t x578 = INT8_MIN;
	uint32_t x579 = 522335466U;
	int8_t x580 = -53;
	static volatile uint32_t t81 = 119U;

	t81 = ((x577-(x578*x579))*x580);

	if (t81 != 1971701557U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x585 = INT16_MIN;
	uint64_t x586 = 16512LLU;
	volatile int8_t x588 = 1;
	uint64_t t82 = 30343815LLU;

	t82 = ((x585-(x586*x587))*x588);

	if (t82 != 18446743806183993728LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x590 = INT32_MAX;
	int8_t x592 = 1;

	t83 = ((x589-(x590*x591))*x592);

	if (t83 != INT32_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x597 = INT64_MIN;
	uint64_t x598 = UINT64_MAX;
	int32_t x600 = INT32_MIN;
	uint64_t t84 = 49457909791LLU;

	t84 = ((x597-(x598*x599))*x600);

	if (t84 != 98784247808LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x601 = -1LL;
	int64_t x602 = -263969564LL;
	static int16_t x603 = -1;
	static volatile uint16_t x604 = 994U;
	static int64_t t85 = -121345762729LL;

	t85 = ((x601-(x602*x603))*x604);

	if (t85 != -262385747610LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x605 = 517796U;
	volatile int16_t x607 = -7;
	volatile int64_t t86 = -877776287714125914LL;

	t86 = ((x605-(x606*x607))*x608);

	if (t86 != -517789LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x617 = INT32_MIN;
	volatile int8_t x618 = -1;
	uint8_t x619 = 6U;
	int32_t x620 = -1;
	static int32_t t87 = 3;

	t87 = ((x617-(x618*x619))*x620);

	if (t87 != 2147483642) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x621 = 194351194LL;
	uint8_t x622 = UINT8_MAX;
	static int64_t x623 = -1LL;
	int32_t x624 = -27436478;
	int64_t t88 = 2038660881452833LL;

	t88 = ((x621-(x622*x623))*x624);

	if (t88 != -5332319254756622LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x630 = -1;
	int8_t x631 = INT8_MAX;
	static uint64_t t89 = 57518418942LLU;

	t89 = ((x629-(x630*x631))*x632);

	if (t89 != 18446744073668002560LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x633 = INT8_MIN;
	static int64_t x635 = INT64_MIN;
	static uint64_t x636 = UINT64_MAX;
	uint64_t t90 = 715154911094LLU;

	t90 = ((x633-(x634*x635))*x636);

	if (t90 != 128LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x645 = -1;
	volatile uint8_t x646 = 1U;
	int64_t x648 = 80364809LL;
	uint64_t t91 = 48265489949089768LLU;

	t91 = ((x645-(x646*x647))*x648);

	if (t91 != 18446744073548821998LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x653 = -1;
	uint8_t x654 = 33U;
	uint8_t x655 = 0U;
	volatile int8_t x656 = INT8_MAX;
	volatile int32_t t92 = -13;

	t92 = ((x653-(x654*x655))*x656);

	if (t92 != -127) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x658 = 146U;
	int8_t x659 = 1;
	int8_t x660 = INT8_MAX;
	volatile uint32_t t93 = 45U;

	t93 = ((x657-(x658*x659))*x660);

	if (t93 != 4294948627U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x665 = -18814;
	int8_t x666 = INT8_MIN;
	int64_t x667 = 470791264803006LL;
	int8_t x668 = INT8_MIN;
	volatile int64_t t94 = -4016379885141LL;

	t94 = ((x665-(x666*x667))*x668);

	if (t94 != -7713444082530042112LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x670 = 3;
	uint64_t x671 = 847725745573688278LLU;
	volatile uint64_t t95 = 4232LLU;

	t95 = ((x669-(x670*x671))*x672);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint16_t x677 = UINT16_MAX;
	int32_t x680 = -1;
	uint64_t t96 = 1006211014146LLU;

	t96 = ((x677-(x678*x679))*x680);

	if (t96 != 18446744073709453314LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x706 = 1U;
	uint8_t x707 = 1U;
	int8_t x708 = -1;
	int32_t t97 = 24;

	t97 = ((x705-(x706*x707))*x708);

	if (t97 != -18) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x717 = 133330743U;
	static int8_t x718 = -12;
	int16_t x719 = INT16_MIN;
	volatile uint8_t x720 = 1U;

	t98 = ((x717-(x718*x719))*x720);

	if (t98 != 132937527U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x721 = UINT8_MAX;
	int16_t x722 = -1;
	uint64_t x723 = UINT64_MAX;
	uint16_t x724 = 291U;
	volatile uint64_t t99 = 171200LLU;

	t99 = ((x721-(x722*x723))*x724);

	if (t99 != 73914LLU) { NG(); } else { ; }
	
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


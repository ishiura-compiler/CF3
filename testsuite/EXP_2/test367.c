#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x17 = -1LL;
uint64_t x20 = UINT64_MAX;
volatile int32_t t2 = 882977702;
uint64_t x30 = 52491937LLU;
volatile uint64_t t3 = 29LLU;
static int32_t x37 = 97057;
static int64_t x42 = -1LL;
volatile int32_t x43 = -22962;
int16_t x44 = INT16_MIN;
int64_t x51 = -1LL;
static int8_t x55 = 1;
volatile int64_t x102 = -476149811LL;
uint64_t t12 = 1423333403766503761LLU;
uint64_t t13 = 374668355252778LLU;
volatile int64_t x109 = INT64_MAX;
volatile int64_t x110 = INT64_MIN;
static uint64_t x111 = 199935707383906LLU;
volatile uint32_t t15 = 4710U;
volatile uint32_t x133 = 3U;
int8_t x145 = -1;
volatile uint32_t x148 = UINT32_MAX;
static int16_t x149 = -1;
volatile int16_t x150 = INT16_MAX;
static volatile uint16_t x155 = 8U;
int16_t x165 = INT16_MIN;
int64_t x174 = -18LL;
static uint16_t x175 = 23U;
int16_t x195 = INT16_MAX;
volatile uint8_t x196 = 50U;
int32_t x204 = INT32_MAX;
uint32_t x218 = 7522450U;
uint8_t x219 = UINT8_MAX;
int32_t x226 = INT32_MIN;
uint8_t x243 = 99U;
static int8_t x245 = INT8_MAX;
int8_t x270 = -1;
int8_t x271 = INT8_MIN;
int64_t x272 = -1LL;
uint64_t x273 = UINT64_MAX;
uint64_t x277 = 8626LLU;
static uint16_t x286 = 1589U;
uint8_t x311 = 57U;
uint64_t x317 = UINT64_MAX;
int32_t x324 = INT32_MIN;
uint8_t x328 = UINT8_MAX;
int32_t x348 = -1041;
static volatile int8_t x349 = INT8_MIN;
volatile int8_t x359 = INT8_MIN;
static volatile uint16_t x367 = 1U;
volatile uint32_t x377 = 640388U;
int8_t x394 = 60;
volatile int8_t x395 = INT8_MAX;
static uint16_t x397 = UINT16_MAX;
volatile int8_t x400 = INT8_MIN;
uint32_t t52 = 30916U;
uint8_t x426 = UINT8_MAX;
int16_t x475 = INT16_MIN;
uint64_t x476 = UINT64_MAX;
int32_t x488 = -1;
int32_t x490 = INT32_MIN;
int16_t x500 = 1;
int32_t t68 = 4;
volatile uint64_t t69 = 1408757LLU;
uint64_t x509 = 7371580227148286LLU;
uint64_t t72 = 35065920305882020LLU;
int8_t x535 = INT8_MIN;
volatile int64_t x537 = -911869585118LL;
int16_t x540 = INT16_MAX;
uint32_t x556 = 316310893U;
int8_t x557 = INT8_MAX;
volatile int16_t x564 = 3;
uint64_t x567 = 1704054LLU;
uint32_t x568 = 592845553U;
volatile uint64_t t78 = 108969093LLU;
uint64_t x569 = 799608381896702LLU;
volatile int32_t x593 = INT32_MAX;
int8_t x597 = INT8_MAX;
volatile int8_t x638 = INT8_MIN;
uint16_t x639 = UINT16_MAX;
volatile uint32_t t86 = 567U;
volatile uint64_t x646 = 1LLU;
volatile uint64_t t87 = 351580324869591LLU;
volatile uint32_t x649 = 3U;
int32_t x656 = INT32_MAX;
int16_t x664 = -83;
int64_t x671 = INT64_MAX;
uint16_t x672 = UINT16_MAX;
volatile uint64_t t92 = 8139888030428832LLU;
volatile int32_t t93 = 66197;
int16_t x685 = -1;
volatile uint64_t x686 = 2608745893967LLU;
static int8_t x690 = INT8_MIN;
static uint64_t x691 = UINT64_MAX;
int8_t x706 = INT8_MAX;
uint16_t x708 = 1U;


void f0(void) {
	static volatile uint64_t x13 = UINT64_MAX;
	static volatile uint32_t x14 = 14U;
	int32_t x15 = 0;
	int64_t x16 = -1LL;
	uint64_t t0 = 577814442311LLU;

	t0 = ((x13*(x14*x15))*x16);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x18 = INT16_MIN;
	volatile uint32_t x19 = UINT32_MAX;
	uint64_t t1 = 13740293LLU;

	t1 = ((x17*(x18*x19))*x20);

	if (t1 != 32768LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x25 = INT8_MAX;
	int8_t x26 = INT8_MIN;
	static int32_t x27 = -1;
	static volatile uint8_t x28 = UINT8_MAX;

	t2 = ((x25*(x26*x27))*x28);

	if (t2 != 4145280) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x29 = 0U;
	static volatile int8_t x31 = 3;
	int8_t x32 = INT8_MIN;

	t3 = ((x29*(x30*x31))*x32);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int64_t x33 = -1LL;
	uint64_t x34 = UINT64_MAX;
	int16_t x35 = 786;
	volatile uint32_t x36 = UINT32_MAX;
	uint64_t t4 = 1294363205LLU;

	t4 = ((x33*(x34*x35))*x36);

	if (t4 != 3375844293870LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x38 = UINT64_MAX;
	int64_t x39 = INT64_MIN;
	volatile int8_t x40 = INT8_MIN;
	uint64_t t5 = 135079720395124LLU;

	t5 = ((x37*(x38*x39))*x40);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x41 = INT32_MIN;
	volatile int64_t t6 = 2099043564LL;

	t6 = ((x41*(x42*x43))*x44);

	if (t6 != 1615807103807520768LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x49 = 9;
	int8_t x50 = INT8_MIN;
	static uint8_t x52 = 84U;
	static volatile int64_t t7 = 13725355821LL;

	t7 = ((x49*(x50*x51))*x52);

	if (t7 != 96768LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x53 = -91;
	int16_t x54 = -1;
	uint32_t x56 = UINT32_MAX;
	uint32_t t8 = 7U;

	t8 = ((x53*(x54*x55))*x56);

	if (t8 != 4294967205U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x61 = 1;
	int32_t x62 = -1;
	static volatile int8_t x63 = -1;
	int16_t x64 = INT16_MAX;
	volatile int32_t t9 = -474;

	t9 = ((x61*(x62*x63))*x64);

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint8_t x77 = 14U;
	volatile int64_t x78 = 0LL;
	static int64_t x79 = -316120627070LL;
	volatile uint32_t x80 = UINT32_MAX;
	volatile int64_t t10 = -982569707LL;

	t10 = ((x77*(x78*x79))*x80);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x81 = 324U;
	int64_t x82 = 1916200LL;
	uint32_t x83 = 46747U;
	int8_t x84 = INT8_MAX;
	volatile int64_t t11 = 539619243LL;

	t11 = ((x81*(x82*x83))*x84);

	if (t11 != 3685897994407200LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x101 = INT16_MIN;
	int32_t x103 = 203283;
	uint64_t x104 = 2641441547597LLU;

	t12 = ((x101*(x102*x103))*x104);

	if (t12 != 11900084228806311936LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x105 = -1;
	int32_t x106 = 38517799;
	uint64_t x107 = UINT64_MAX;
	static int8_t x108 = INT8_MAX;

	t13 = ((x105*(x106*x107))*x108);

	if (t13 != 4891760473LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x112 = 15855137LL;
	uint64_t t14 = 115569LLU;

	t14 = ((x109*(x110*x111))*x112);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x129 = 22U;
	volatile uint32_t x130 = UINT32_MAX;
	static int16_t x131 = -1;
	int8_t x132 = 0;

	t15 = ((x129*(x130*x131))*x132);

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x134 = 343U;
	uint32_t x135 = 918659U;
	static uint8_t x136 = 111U;
	volatile uint32_t t16 = 2U;

	t16 = ((x133*(x134*x135))*x136);

	if (t16 != 1849097217U) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x146 = 125U;
	uint16_t x147 = UINT16_MAX;
	volatile uint32_t t17 = 901456U;

	t17 = ((x145*(x146*x147))*x148);

	if (t17 != 8191875U) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x151 = INT8_MIN;
	uint8_t x152 = UINT8_MAX;
	volatile int32_t t18 = 471297750;

	t18 = ((x149*(x150*x151))*x152);

	if (t18 != 1069514880) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x153 = INT8_MAX;
	int16_t x154 = INT16_MAX;
	uint32_t x156 = UINT32_MAX;
	static uint32_t t19 = 4599248U;

	t19 = ((x153*(x154*x155))*x156);

	if (t19 != 4261676024U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x166 = -1;
	volatile uint32_t x167 = 104328U;
	static int8_t x168 = 1;
	uint32_t t20 = 66U;

	t20 = ((x165*(x166*x167))*x168);

	if (t20 != 3418619904U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x173 = INT32_MIN;
	uint32_t x176 = 2U;
	int64_t t21 = -6647686504523391LL;

	t21 = ((x173*(x174*x175))*x176);

	if (t21 != 1778116460544LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x177 = INT16_MIN;
	static volatile uint16_t x178 = 23754U;
	int64_t x179 = -4LL;
	int32_t x180 = 78373728;
	volatile int64_t t22 = 14LL;

	t22 = ((x177*(x178*x179))*x180);

	if (t22 != 244015370719985664LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x181 = UINT64_MAX;
	static volatile int32_t x182 = INT32_MIN;
	int64_t x183 = -1LL;
	uint32_t x184 = 12981967U;
	volatile uint64_t t23 = 46LLU;

	t23 = ((x181*(x182*x183))*x184);

	if (t23 != 18418865511858176000LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x193 = 2U;
	int32_t x194 = -7;
	volatile int32_t t24 = -15318871;

	t24 = ((x193*(x194*x195))*x196);

	if (t24 != -22936900) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x201 = 134519702038211391LL;
	static volatile uint64_t x202 = 12222LLU;
	static int16_t x203 = -1;
	uint64_t t25 = 365712750LLU;

	t25 = ((x201*(x202*x203))*x204);

	if (t25 != 2782875882588613058LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x217 = INT16_MIN;
	uint8_t x220 = 1U;
	volatile uint32_t t26 = 742072721U;

	t26 = ((x217*(x218*x219))*x220);

	if (t26 != 457768960U) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x221 = 15165709602845LLU;
	int32_t x222 = INT32_MAX;
	volatile uint8_t x223 = 0U;
	static int64_t x224 = INT64_MAX;
	uint64_t t27 = 1430330802LLU;

	t27 = ((x221*(x222*x223))*x224);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x225 = -1;
	int64_t x227 = -1LL;
	uint16_t x228 = UINT16_MAX;
	int64_t t28 = -2420647356942739LL;

	t28 = ((x225*(x226*x227))*x228);

	if (t28 != -140735340871680LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x229 = UINT64_MAX;
	int8_t x230 = INT8_MAX;
	volatile uint16_t x231 = UINT16_MAX;
	volatile int32_t x232 = -1;
	uint64_t t29 = 24095238780077LLU;

	t29 = ((x229*(x230*x231))*x232);

	if (t29 != 8322945LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x241 = 90349655327570777LLU;
	int16_t x242 = -1;
	int64_t x244 = INT64_MAX;
	uint64_t t30 = 67846631673284135LLU;

	t30 = ((x241*(x242*x243))*x244);

	if (t30 != 18167987914284282731LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x246 = 3646;
	volatile int16_t x247 = -1;
	int8_t x248 = -1;
	int32_t t31 = -908;

	t31 = ((x245*(x246*x247))*x248);

	if (t31 != 463042) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x257 = 5867LLU;
	volatile uint16_t x258 = 51U;
	static int16_t x259 = 9;
	volatile int16_t x260 = -1;
	static volatile uint64_t t32 = 488103171830506LLU;

	t32 = ((x257*(x258*x259))*x260);

	if (t32 != 18446744073706858663LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x265 = 11LL;
	int16_t x266 = INT16_MAX;
	int8_t x267 = INT8_MIN;
	static int64_t x268 = -1LL;
	volatile int64_t t33 = -6081380045LL;

	t33 = ((x265*(x266*x267))*x268);

	if (t33 != 46135936LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint64_t x269 = 240065340LLU;
	uint64_t t34 = 11804563508LLU;

	t34 = ((x269*(x270*x271))*x272);

	if (t34 != 18446744042981188096LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x274 = -1582726242459LL;
	int16_t x275 = -1;
	int16_t x276 = INT16_MIN;
	uint64_t t35 = 1565758536502LLU;

	t35 = ((x273*(x274*x275))*x276);

	if (t35 != 51862773512896512LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x278 = 1;
	uint64_t x279 = 2203556052LLU;
	volatile int16_t x280 = INT16_MIN;
	uint64_t t36 = 8799483111336744LLU;

	t36 = ((x277*(x278*x279))*x280);

	if (t36 != 17823894041944391680LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x281 = UINT64_MAX;
	int64_t x282 = -15LL;
	static volatile int32_t x283 = INT32_MIN;
	uint32_t x284 = 129914U;
	uint64_t t37 = 1555550345558139LLU;

	t37 = ((x281*(x282*x283))*x284);

	if (t37 != 18442559250849857536LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x285 = UINT32_MAX;
	int8_t x287 = 1;
	static int16_t x288 = -1;
	static uint32_t t38 = 77475U;

	t38 = ((x285*(x286*x287))*x288);

	if (t38 != 1589U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x309 = INT8_MAX;
	static int16_t x310 = -184;
	volatile int64_t x312 = 3382LL;
	int64_t t39 = -25347292LL;

	t39 = ((x309*(x310*x311))*x312);

	if (t39 != -4504742832LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x318 = -39377LL;
	int16_t x319 = INT16_MAX;
	int8_t x320 = INT8_MIN;
	static uint64_t t40 = 2491914892072090LLU;

	t40 = ((x317*(x318*x319))*x320);

	if (t40 != 18446743908555483264LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x321 = 138707035;
	volatile uint32_t x322 = 2000U;
	int16_t x323 = INT16_MIN;
	static volatile uint32_t t41 = 2837U;

	t41 = ((x321*(x322*x323))*x324);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x325 = INT16_MAX;
	uint16_t x326 = 0U;
	int8_t x327 = 0;
	static int32_t t42 = 0;

	t42 = ((x325*(x326*x327))*x328);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x333 = 3975LLU;
	int8_t x334 = INT8_MIN;
	volatile uint64_t x335 = 15286LLU;
	uint64_t x336 = 37800447LLU;
	volatile uint64_t t43 = 58256LLU;

	t43 = ((x333*(x334*x335))*x336);

	if (t43 != 18152750462119542016LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint8_t x345 = UINT8_MAX;
	int16_t x346 = -1;
	volatile uint8_t x347 = 0U;
	int32_t t44 = -3;

	t44 = ((x345*(x346*x347))*x348);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x350 = UINT8_MAX;
	uint64_t x351 = 337433206LLU;
	int32_t x352 = INT32_MIN;
	volatile uint64_t t45 = 15LLU;

	t45 = ((x349*(x350*x351))*x352);

	if (t45 != 3272114168668356608LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x357 = UINT8_MAX;
	int32_t x358 = -1493;
	volatile int16_t x360 = -1;
	static volatile int32_t t46 = 503184;

	t46 = ((x357*(x358*x359))*x360);

	if (t46 != -48731520) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x365 = UINT8_MAX;
	volatile int32_t x366 = 1;
	volatile int8_t x368 = -1;
	int32_t t47 = -10381;

	t47 = ((x365*(x366*x367))*x368);

	if (t47 != -255) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x369 = UINT64_MAX;
	static uint8_t x370 = 4U;
	uint32_t x371 = UINT32_MAX;
	int16_t x372 = -1;
	static uint64_t t48 = 198724826161LLU;

	t48 = ((x369*(x370*x371))*x372);

	if (t48 != 4294967292LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int8_t x378 = -1;
	static int16_t x379 = 541;
	uint16_t x380 = 22910U;
	static uint32_t t49 = 50U;

	t49 = ((x377*(x378*x379))*x380);

	if (t49 != 4227138024U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x385 = 950749366582921LLU;
	int32_t x386 = 23074;
	uint8_t x387 = UINT8_MAX;
	volatile int64_t x388 = INT64_MAX;
	volatile uint64_t t50 = 0LLU;

	t50 = ((x385*(x386*x387))*x388);

	if (t50 != 13724522851452306994LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x393 = UINT32_MAX;
	int8_t x396 = INT8_MAX;
	uint32_t t51 = 2584106U;

	t51 = ((x393*(x394*x395))*x396);

	if (t51 != 4293999556U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x398 = -5;
	uint32_t x399 = 1369313U;

	t52 = ((x397*(x398*x399))*x400);

	if (t52 != 4265856384U) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x413 = 668222U;
	int64_t x414 = -1LL;
	uint16_t x415 = UINT16_MAX;
	uint32_t x416 = 0U;
	volatile int64_t t53 = 68670961679569LL;

	t53 = ((x413*(x414*x415))*x416);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x425 = INT16_MIN;
	int64_t x427 = -1LL;
	uint32_t x428 = 102491U;
	volatile int64_t t54 = 37029389LL;

	t54 = ((x425*(x426*x427))*x428);

	if (t54 != 856398397440LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x429 = 22829U;
	uint8_t x430 = UINT8_MAX;
	uint64_t x431 = 584550165592636262LLU;
	static uint16_t x432 = 77U;
	static uint64_t t55 = 15915LLU;

	t55 = ((x429*(x430*x431))*x432);

	if (t55 != 13818528563457613930LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x433 = 8;
	int8_t x434 = INT8_MIN;
	int32_t x435 = -52;
	int8_t x436 = 1;
	volatile int32_t t56 = 1;

	t56 = ((x433*(x434*x435))*x436);

	if (t56 != 53248) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x437 = -8;
	int8_t x438 = -37;
	volatile uint16_t x439 = UINT16_MAX;
	int16_t x440 = -1;
	int32_t t57 = 18290;

	t57 = ((x437*(x438*x439))*x440);

	if (t57 != -19398360) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x449 = 1658189597LL;
	uint64_t x450 = UINT64_MAX;
	static int32_t x451 = -1;
	int16_t x452 = INT16_MAX;
	volatile uint64_t t58 = 3800000332LLU;

	t58 = ((x449*(x450*x451))*x452);

	if (t58 != 54333898524899LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x453 = -1;
	volatile int8_t x454 = INT8_MIN;
	static int64_t x455 = -1LL;
	static int32_t x456 = -1;
	volatile int64_t t59 = 85603881LL;

	t59 = ((x453*(x454*x455))*x456);

	if (t59 != 128LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x457 = 172405664;
	uint8_t x458 = 0U;
	static int64_t x459 = INT64_MIN;
	uint8_t x460 = UINT8_MAX;
	volatile int64_t t60 = -993325112339LL;

	t60 = ((x457*(x458*x459))*x460);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x465 = 602U;
	uint8_t x466 = 21U;
	uint64_t x467 = 1048LLU;
	int64_t x468 = -14890389LL;
	volatile uint64_t t61 = 244280579LLU;

	t61 = ((x465*(x466*x467))*x468);

	if (t61 != 18446546793685522192LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x469 = INT64_MIN;
	uint64_t x470 = 1343514LLU;
	volatile uint8_t x471 = UINT8_MAX;
	int32_t x472 = INT32_MIN;
	uint64_t t62 = 103LLU;

	t62 = ((x469*(x470*x471))*x472);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x473 = UINT16_MAX;
	static uint32_t x474 = UINT32_MAX;
	static uint64_t t63 = 3437LLU;

	t63 = ((x473*(x474*x475))*x476);

	if (t63 != 18446744071562100736LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x477 = INT32_MAX;
	int64_t x478 = 8LL;
	int8_t x479 = -1;
	int16_t x480 = 203;
	volatile int64_t t64 = -20245LL;

	t64 = ((x477*(x478*x479))*x480);

	if (t64 != -3487513442728LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x481 = INT64_MIN;
	uint32_t x482 = 4236098U;
	uint64_t x483 = UINT64_MAX;
	int32_t x484 = -1;
	uint64_t t65 = 2181010648443000LLU;

	t65 = ((x481*(x482*x483))*x484);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x485 = 0U;
	int8_t x486 = INT8_MIN;
	static int32_t x487 = -1;
	int32_t t66 = -16;

	t66 = ((x485*(x486*x487))*x488);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x489 = INT64_MAX;
	static uint64_t x491 = 21339894218982073LLU;
	int64_t x492 = INT64_MIN;
	uint64_t t67 = 102369686LLU;

	t67 = ((x489*(x490*x491))*x492);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x497 = 3U;
	int8_t x498 = INT8_MAX;
	int8_t x499 = INT8_MAX;

	t68 = ((x497*(x498*x499))*x500);

	if (t68 != 48387) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x505 = 14654LLU;
	volatile uint16_t x506 = 7831U;
	int32_t x507 = -1;
	int64_t x508 = -1LL;

	t69 = ((x505*(x506*x507))*x508);

	if (t69 != 114755474LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x510 = INT16_MIN;
	int8_t x511 = 0;
	uint32_t x512 = 426351U;
	static volatile uint64_t t70 = 29014LLU;

	t70 = ((x509*(x510*x511))*x512);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x525 = -12;
	int16_t x526 = INT16_MIN;
	uint8_t x527 = 16U;
	int16_t x528 = 11;
	int32_t t71 = 5661499;

	t71 = ((x525*(x526*x527))*x528);

	if (t71 != 69206016) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x529 = -1;
	uint64_t x530 = 24223LLU;
	static uint16_t x531 = UINT16_MAX;
	int32_t x532 = 5;

	t72 = ((x529*(x530*x531))*x532);

	if (t72 != 18446744065772280091LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x533 = -1;
	uint8_t x534 = UINT8_MAX;
	int16_t x536 = INT16_MAX;
	volatile int32_t t73 = -4175711;

	t73 = ((x533*(x534*x535))*x536);

	if (t73 != 1069514880) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x538 = UINT64_MAX;
	static uint8_t x539 = 9U;
	volatile uint64_t t74 = 34151446239LLU;

	t74 = ((x537*(x538*x539))*x540);

	if (t74 != 268913076260053554LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x553 = UINT32_MAX;
	volatile int16_t x554 = -1;
	int8_t x555 = INT8_MIN;
	static uint32_t t75 = 49U;

	t75 = ((x553*(x554*x555))*x556);

	if (t75 != 2461878656U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x558 = -1;
	int64_t x559 = -1LL;
	int16_t x560 = INT16_MAX;
	volatile int64_t t76 = -273044LL;

	t76 = ((x557*(x558*x559))*x560);

	if (t76 != 4161409LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x561 = INT64_MIN;
	static uint64_t x562 = 133931413195LLU;
	int32_t x563 = INT32_MIN;
	volatile uint64_t t77 = 57LLU;

	t77 = ((x561*(x562*x563))*x564);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x565 = 2LL;
	static uint32_t x566 = 1713233U;

	t78 = ((x565*(x566*x567))*x568);

	if (t78 != 12014734485475947500LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x570 = -1LL;
	int32_t x571 = INT32_MAX;
	int64_t x572 = INT64_MIN;
	volatile uint64_t t79 = 67048750492490799LLU;

	t79 = ((x569*(x570*x571))*x572);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x589 = -1;
	uint32_t x590 = 10191502U;
	volatile uint64_t x591 = 708989841604LLU;
	int8_t x592 = INT8_MAX;
	static volatile uint64_t t80 = 9LLU;

	t80 = ((x589*(x590*x591))*x592);

	if (t80 != 4676937322247731384LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x594 = -1LL;
	volatile uint64_t x595 = UINT64_MAX;
	static uint64_t x596 = 283056LLU;
	volatile uint64_t t81 = 7786218625LLU;

	t81 = ((x593*(x594*x595))*x596);

	if (t81 != 607858131185232LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x598 = 9119U;
	int64_t x599 = -1LL;
	int16_t x600 = INT16_MIN;
	volatile int64_t t82 = 11036758800584LL;

	t82 = ((x597*(x598*x599))*x600);

	if (t82 != 37949046784LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x605 = INT64_MIN;
	static volatile uint64_t x606 = 246LLU;
	static int8_t x607 = INT8_MIN;
	static int32_t x608 = 259557;
	uint64_t t83 = 17106995LLU;

	t83 = ((x605*(x606*x607))*x608);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x629 = 106333LLU;
	int16_t x630 = 0;
	uint8_t x631 = 10U;
	int8_t x632 = INT8_MIN;
	uint64_t t84 = 1543759627511589LLU;

	t84 = ((x629*(x630*x631))*x632);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint32_t x637 = 295163U;
	int16_t x640 = -1;
	uint32_t t85 = 30521691U;

	t85 = ((x637*(x638*x639))*x640);

	if (t85 != 2067759744U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x641 = -1;
	volatile int8_t x642 = INT8_MIN;
	uint32_t x643 = UINT32_MAX;
	uint16_t x644 = UINT16_MAX;

	t86 = ((x641*(x642*x643))*x644);

	if (t86 != 4286578816U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x645 = 0;
	int32_t x647 = INT32_MAX;
	static uint16_t x648 = UINT16_MAX;

	t87 = ((x645*(x646*x647))*x648);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x650 = INT8_MIN;
	int8_t x651 = -14;
	static int8_t x652 = -3;
	volatile uint32_t t88 = 944497U;

	t88 = ((x649*(x650*x651))*x652);

	if (t88 != 4294951168U) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x653 = 2U;
	int8_t x654 = INT8_MIN;
	static int8_t x655 = 0;
	int32_t t89 = -1;

	t89 = ((x653*(x654*x655))*x656);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x657 = INT32_MIN;
	uint32_t x658 = UINT32_MAX;
	int64_t x659 = -1LL;
	uint8_t x660 = 0U;
	static int64_t t90 = 18531570501LL;

	t90 = ((x657*(x658*x659))*x660);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x661 = INT16_MIN;
	uint64_t x662 = 484LLU;
	volatile int64_t x663 = -3601LL;
	static uint64_t t91 = 287773232043032533LLU;

	t91 = ((x661*(x662*x663))*x664);

	if (t91 != 18446739333511249920LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x669 = 1356573;
	uint64_t x670 = 231161708LLU;

	t92 = ((x669*(x670*x671))*x672);

	if (t92 != 16342516150021567292LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x673 = 1;
	uint16_t x674 = 1U;
	int16_t x675 = -560;
	uint16_t x676 = 3382U;

	t93 = ((x673*(x674*x675))*x676);

	if (t93 != -1893920) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x677 = 14486U;
	int32_t x678 = INT32_MIN;
	static uint32_t x679 = 214U;
	uint32_t x680 = 767125099U;
	static volatile uint32_t t94 = 5511U;

	t94 = ((x677*(x678*x679))*x680);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x687 = 8170514387119713196LLU;
	int16_t x688 = -3134;
	uint64_t t95 = 530693351LLU;

	t95 = ((x685*(x686*x687))*x688);

	if (t95 != 1619806245820235992LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x689 = -1;
	volatile uint8_t x692 = UINT8_MAX;
	uint64_t t96 = 9215364LLU;

	t96 = ((x689*(x690*x691))*x692);

	if (t96 != 18446744073709518976LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x697 = UINT8_MAX;
	static volatile int32_t x698 = -1;
	uint32_t x699 = 9783668U;
	static volatile int64_t x700 = 1LL;
	int64_t t97 = -3922349066029LL;

	t97 = ((x697*(x698*x699))*x700);

	if (t97 != 1800131956LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x705 = -1;
	volatile int8_t x707 = INT8_MAX;
	volatile int32_t t98 = -2255381;

	t98 = ((x705*(x706*x707))*x708);

	if (t98 != -16129) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x709 = 989446691989LLU;
	int16_t x710 = -12;
	static uint64_t x711 = UINT64_MAX;
	uint8_t x712 = 68U;
	volatile uint64_t t99 = 1390043693138163976LLU;

	t99 = ((x709*(x710*x711))*x712);

	if (t99 != 807388500663024LLU) { NG(); } else { ; }
	
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


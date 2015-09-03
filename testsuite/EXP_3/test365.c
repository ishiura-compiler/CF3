#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x1 = -1;
volatile uint16_t x2 = UINT16_MAX;
int32_t x3 = 347;
static volatile uint64_t x11 = UINT64_MAX;
static int64_t x19 = -1444095LL;
uint64_t x20 = 32464357LLU;
static volatile uint64_t t4 = 32314428643LLU;
int64_t x29 = 29195LL;
int16_t x39 = -1;
volatile uint64_t t8 = 112037879855021LLU;
int8_t x57 = -1;
static uint64_t x59 = UINT64_MAX;
int16_t x71 = INT16_MIN;
int64_t x79 = 1845389LL;
uint32_t x83 = 880156U;
int64_t x87 = INT64_MIN;
volatile int64_t t17 = -398652275248097LL;
int16_t x105 = INT16_MIN;
int16_t x106 = 730;
uint32_t t20 = 100125013U;
volatile int64_t x139 = -51637318840897557LL;
int64_t t21 = 6490652LL;
int64_t x161 = -279732LL;
volatile int32_t x167 = -1;
int64_t x168 = -2196541271113LL;
volatile uint32_t t27 = 402U;
volatile uint32_t t28 = 114U;
int64_t x206 = -883103428LL;
uint32_t x219 = 125494043U;
static int8_t x225 = -1;
static uint64_t x226 = UINT64_MAX;
int32_t x232 = INT32_MIN;
uint64_t t35 = 435211038448937LLU;
static int32_t x237 = 1301388;
uint32_t x241 = UINT32_MAX;
uint32_t t37 = 8187048U;
int8_t x254 = -1;
uint64_t x255 = UINT64_MAX;
uint64_t x264 = UINT64_MAX;
volatile uint32_t x267 = UINT32_MAX;
uint64_t x282 = UINT64_MAX;
int32_t x292 = -1;
volatile int8_t x294 = 7;
static volatile uint32_t t45 = 336U;
uint8_t x305 = 2U;
int16_t x306 = -1;
uint64_t x308 = UINT64_MAX;
static volatile int64_t x310 = -1LL;
volatile int64_t t47 = -1LL;
int16_t x316 = INT16_MAX;
int8_t x327 = INT8_MIN;
volatile uint64_t x328 = UINT64_MAX;
volatile uint64_t t50 = 143277457522091LLU;
uint64_t t52 = 19039LLU;
volatile int64_t t54 = 0LL;
volatile uint64_t t55 = 208477277803LLU;
int8_t x377 = -1;
volatile int32_t t56 = 128880766;
uint64_t t57 = 2378LLU;
volatile int32_t x409 = INT32_MIN;
int8_t x415 = -5;
int16_t x465 = 5000;
uint32_t x482 = UINT32_MAX;
int16_t x488 = INT16_MIN;
int32_t t69 = 62629;
int16_t x493 = INT16_MIN;
int16_t x494 = INT16_MIN;
int16_t x507 = 1;
volatile int32_t t72 = -143927;
int8_t x519 = 1;
int64_t x522 = 6661234761LL;
volatile int64_t t74 = 95LL;
static volatile int64_t x530 = 213623576945LL;
static int64_t t76 = -31273341LL;
int16_t x536 = -4;
volatile int32_t t77 = 234;
static uint16_t x538 = 14994U;
uint32_t t78 = 36858U;
int16_t x543 = -1;
int8_t x546 = 9;
uint8_t x547 = 0U;
static uint32_t x564 = 557892U;
uint32_t t83 = 1360768673U;
int8_t x565 = -15;
int64_t x567 = 98746487053LL;
int64_t t84 = 1134412LL;
volatile int64_t x587 = -4096716LL;
static volatile int64_t t85 = 98454701825LL;
int64_t x590 = -1LL;
volatile uint8_t x602 = 0U;
int64_t t87 = 3773822868684971LL;
uint32_t x605 = UINT32_MAX;
int64_t x608 = -44471689378LL;
static uint16_t x611 = 105U;
int16_t x622 = INT16_MAX;
volatile uint8_t x629 = 13U;
volatile uint64_t t92 = 745447748173756625LLU;
uint16_t x638 = 28U;
int16_t x645 = 3;
int16_t x653 = INT16_MAX;
int8_t x658 = INT8_MAX;
volatile int16_t x665 = INT16_MAX;
static volatile int32_t t99 = -142358;


void f0(void) {
	static int16_t x4 = INT16_MIN;
	volatile int32_t t0 = -499;

	t0 = ((x1*x2)+(x3*x4));

	if (t0 != -11436031) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = -6;
	int8_t x10 = -20;
	static int16_t x12 = INT16_MIN;
	volatile uint64_t t1 = 284397194LLU;

	t1 = ((x9*x10)+(x11*x12));

	if (t1 != 32888LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x13 = -1324393LL;
	uint32_t x14 = 23497U;
	int64_t x15 = -1071676445668LL;
	uint64_t x16 = 642LLU;
	uint64_t t2 = 228495LLU;

	t2 = ((x13*x14)+(x15*x16));

	if (t2 != 18446056026312170439LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x17 = INT16_MAX;
	static int8_t x18 = INT8_MIN;
	uint64_t t3 = 5706447LLU;

	t3 = ((x17*x18)+(x19*x20));

	if (t3 != 18446697192089735525LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x25 = 43U;
	uint64_t x26 = UINT64_MAX;
	volatile uint32_t x27 = UINT32_MAX;
	int16_t x28 = -15860;

	t4 = ((x25*x26)+(x27*x28));

	if (t4 != 15817LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x30 = -114;
	int8_t x31 = INT8_MAX;
	uint8_t x32 = UINT8_MAX;
	volatile int64_t t5 = 47242240LL;

	t5 = ((x29*x30)+(x31*x32));

	if (t5 != -3295845LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x33 = INT64_MIN;
	static uint8_t x34 = 1U;
	int64_t x35 = -1LL;
	static volatile int8_t x36 = -7;
	volatile int64_t t6 = -16696579473266685LL;

	t6 = ((x33*x34)+(x35*x36));

	if (t6 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x37 = INT16_MAX;
	static int64_t x38 = -1LL;
	volatile int64_t x40 = -1LL;
	volatile int64_t t7 = 472339589901LL;

	t7 = ((x37*x38)+(x39*x40));

	if (t7 != -32766LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int64_t x45 = INT64_MIN;
	volatile uint64_t x46 = UINT64_MAX;
	static int8_t x47 = -30;
	int64_t x48 = -20LL;

	t8 = ((x45*x46)+(x47*x48));

	if (t8 != 9223372036854776408LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x49 = 575581742LLU;
	uint16_t x50 = UINT16_MAX;
	uint64_t x51 = UINT64_MAX;
	int32_t x52 = INT32_MAX;
	uint64_t t9 = 19764669743LLU;

	t9 = ((x49*x50)+(x51*x52));

	if (t9 != 37718601978323LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x53 = INT16_MAX;
	uint8_t x54 = UINT8_MAX;
	int8_t x55 = INT8_MAX;
	int16_t x56 = INT16_MIN;
	int32_t t10 = -473152;

	t10 = ((x53*x54)+(x55*x56));

	if (t10 != 4194049) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x58 = -1;
	int8_t x60 = -1;
	volatile uint64_t t11 = 1133471993256587905LLU;

	t11 = ((x57*x58)+(x59*x60));

	if (t11 != 2LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x69 = -1564;
	volatile int16_t x70 = 3924;
	volatile uint8_t x72 = 38U;
	static int32_t t12 = 245473;

	t12 = ((x69*x70)+(x71*x72));

	if (t12 != -7382320) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x73 = UINT16_MAX;
	volatile int64_t x74 = -39LL;
	int64_t x75 = 149484718262219LL;
	uint8_t x76 = 97U;
	volatile int64_t t13 = -4000713451113LL;

	t13 = ((x73*x74)+(x75*x76));

	if (t13 != 14500017668879378LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x77 = UINT32_MAX;
	volatile uint8_t x78 = UINT8_MAX;
	int8_t x80 = INT8_MIN;
	volatile int64_t t14 = 14143LL;

	t14 = ((x77*x78)+(x79*x80));

	if (t14 != 4058757249LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x81 = INT16_MAX;
	uint8_t x82 = UINT8_MAX;
	volatile uint8_t x84 = 17U;
	volatile uint32_t t15 = 18U;

	t15 = ((x81*x82)+(x83*x84));

	if (t15 != 23318237U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x85 = 427611U;
	uint64_t x86 = UINT64_MAX;
	static int32_t x88 = 1;
	uint64_t t16 = 56751LLU;

	t16 = ((x85*x86)+(x87*x88));

	if (t16 != 9223372036854348197LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x93 = UINT8_MAX;
	uint16_t x94 = 37U;
	volatile int32_t x95 = -1;
	int64_t x96 = 15892755632105LL;

	t17 = ((x93*x94)+(x95*x96));

	if (t17 != -15892755622670LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x107 = 13727U;
	volatile uint16_t x108 = 84U;
	static int32_t t18 = 1;

	t18 = ((x105*x106)+(x107*x108));

	if (t18 != -22767572) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x109 = UINT16_MAX;
	uint8_t x110 = 40U;
	uint8_t x111 = 13U;
	volatile uint16_t x112 = 1142U;
	volatile int32_t t19 = -408775;

	t19 = ((x109*x110)+(x111*x112));

	if (t19 != 2636246) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x129 = UINT32_MAX;
	volatile int16_t x130 = INT16_MIN;
	static uint16_t x131 = UINT16_MAX;
	volatile int8_t x132 = -1;

	t20 = ((x129*x130)+(x131*x132));

	if (t20 != 4294934529U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x137 = -61;
	uint16_t x138 = 1449U;
	volatile int8_t x140 = -1;

	t21 = ((x137*x138)+(x139*x140));

	if (t21 != 51637318840809168LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x157 = -1;
	static int32_t x158 = -8125743;
	int32_t x159 = -22;
	volatile int8_t x160 = -1;
	volatile int32_t t22 = -1;

	t22 = ((x157*x158)+(x159*x160));

	if (t22 != 8125765) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x162 = -1;
	uint16_t x163 = 0U;
	static volatile int32_t x164 = -1;
	static volatile int64_t t23 = -8585740856LL;

	t23 = ((x161*x162)+(x163*x164));

	if (t23 != 279732LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x165 = 7839952;
	volatile int16_t x166 = -1;
	int64_t t24 = 7459737080080LL;

	t24 = ((x165*x166)+(x167*x168));

	if (t24 != 2196533431161LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x181 = -5284927;
	int64_t x182 = -1LL;
	static int64_t x183 = -1LL;
	volatile int8_t x184 = 59;
	int64_t t25 = 279416182756LL;

	t25 = ((x181*x182)+(x183*x184));

	if (t25 != 5284868LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x189 = -164;
	int64_t x190 = 1818910895176447LL;
	volatile int16_t x191 = 386;
	uint16_t x192 = 3077U;
	int64_t t26 = 75069502238LL;

	t26 = ((x189*x190)+(x191*x192));

	if (t26 != -298301386807749586LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x193 = 701U;
	int8_t x194 = INT8_MIN;
	uint8_t x195 = UINT8_MAX;
	int16_t x196 = 3;

	t27 = ((x193*x194)+(x195*x196));

	if (t27 != 4294878333U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x201 = INT8_MIN;
	volatile uint32_t x202 = UINT32_MAX;
	uint32_t x203 = 0U;
	volatile uint8_t x204 = UINT8_MAX;

	t28 = ((x201*x202)+(x203*x204));

	if (t28 != 128U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x205 = INT8_MIN;
	uint64_t x207 = 11407367750514LLU;
	volatile int8_t x208 = 2;
	static uint64_t t29 = 1118LLU;

	t29 = ((x205*x206)+(x207*x208));

	if (t29 != 22927772739812LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x209 = 2779477LL;
	volatile uint64_t x210 = UINT64_MAX;
	int8_t x211 = INT8_MIN;
	int64_t x212 = -1LL;
	static uint64_t t30 = 2371796LLU;

	t30 = ((x209*x210)+(x211*x212));

	if (t30 != 18446744073706772267LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x217 = 552920;
	int32_t x218 = -1853;
	static int16_t x220 = 8162;
	uint32_t t31 = 384969967U;

	t31 = ((x217*x218)+(x219*x220));

	if (t31 != 1055601758U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x221 = -5;
	volatile int8_t x222 = INT8_MAX;
	uint64_t x223 = 84331LLU;
	int32_t x224 = INT32_MAX;
	volatile uint64_t t32 = 76LLU;

	t32 = ((x221*x222)+(x223*x224));

	if (t32 != 181099443434522LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x227 = 47U;
	int8_t x228 = 1;
	volatile uint64_t t33 = 9LLU;

	t33 = ((x225*x226)+(x227*x228));

	if (t33 != 48LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x229 = -1;
	static uint64_t x230 = 39866102204557184LLU;
	static uint32_t x231 = 4U;
	uint64_t t34 = 0LLU;

	t34 = ((x229*x230)+(x231*x232));

	if (t34 != 18406877971504994432LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x233 = INT64_MIN;
	volatile uint8_t x234 = 1U;
	int16_t x235 = -1;
	uint64_t x236 = UINT64_MAX;

	t35 = ((x233*x234)+(x235*x236));

	if (t35 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x238 = 52U;
	int64_t x239 = -1356LL;
	int8_t x240 = INT8_MIN;
	volatile int64_t t36 = 962LL;

	t36 = ((x237*x238)+(x239*x240));

	if (t36 != 67845744LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x242 = 19U;
	volatile int32_t x243 = -1;
	int16_t x244 = INT16_MAX;

	t37 = ((x241*x242)+(x243*x244));

	if (t37 != 4294934510U) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x253 = INT8_MIN;
	volatile int64_t x256 = INT64_MAX;
	volatile uint64_t t38 = 191629LLU;

	t38 = ((x253*x254)+(x255*x256));

	if (t38 != 9223372036854775937LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x261 = INT8_MAX;
	int64_t x262 = 128721149LL;
	int64_t x263 = 61505082039672LL;
	volatile uint64_t t39 = 18LLU;

	t39 = ((x261*x262)+(x263*x264));

	if (t39 != 18446682584975097867LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x265 = -1;
	int8_t x266 = -35;
	uint64_t x268 = UINT64_MAX;
	uint64_t t40 = 25144116630633208LLU;

	t40 = ((x265*x266)+(x267*x268));

	if (t40 != 18446744069414584356LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x273 = -1;
	static uint8_t x274 = 10U;
	int8_t x275 = INT8_MIN;
	static int8_t x276 = -1;
	int32_t t41 = 1;

	t41 = ((x273*x274)+(x275*x276));

	if (t41 != 118) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x281 = 232U;
	static int16_t x283 = INT16_MIN;
	volatile int8_t x284 = INT8_MAX;
	static uint64_t t42 = 15867143547LLU;

	t42 = ((x281*x282)+(x283*x284));

	if (t42 != 18446744073705389848LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x289 = INT8_MIN;
	static int32_t x290 = 960481;
	uint16_t x291 = 3U;
	volatile int32_t t43 = -171;

	t43 = ((x289*x290)+(x291*x292));

	if (t43 != -122941571) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x293 = -1;
	int64_t x295 = INT64_MIN;
	static uint64_t x296 = UINT64_MAX;
	uint64_t t44 = 52698486972012872LLU;

	t44 = ((x293*x294)+(x295*x296));

	if (t44 != 9223372036854775801LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x297 = INT8_MAX;
	uint16_t x298 = 6994U;
	uint8_t x299 = 79U;
	uint32_t x300 = 2U;

	t45 = ((x297*x298)+(x299*x300));

	if (t45 != 888396U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x307 = INT8_MIN;
	uint64_t t46 = 22798953253985LLU;

	t46 = ((x305*x306)+(x307*x308));

	if (t46 != 126LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x309 = 40;
	uint32_t x311 = UINT32_MAX;
	int64_t x312 = 28LL;

	t47 = ((x309*x310)+(x311*x312));

	if (t47 != 120259084220LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x313 = 274009LLU;
	int16_t x314 = INT16_MIN;
	uint32_t x315 = UINT32_MAX;
	volatile uint64_t t48 = 1195606628903982LLU;

	t48 = ((x313*x314)+(x315*x316));

	if (t48 != 18446744069025759233LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x317 = INT16_MIN;
	static int8_t x318 = 1;
	static volatile uint64_t x319 = 30LLU;
	volatile int8_t x320 = INT8_MAX;
	volatile uint64_t t49 = 477839869848LLU;

	t49 = ((x317*x318)+(x319*x320));

	if (t49 != 18446744073709522658LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x325 = 23U;
	int64_t x326 = -843862965LL;

	t50 = ((x325*x326)+(x327*x328));

	if (t50 != 18446744054300703549LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x333 = -1LL;
	volatile int8_t x334 = INT8_MIN;
	int8_t x335 = 6;
	int8_t x336 = INT8_MIN;
	int64_t t51 = -62LL;

	t51 = ((x333*x334)+(x335*x336));

	if (t51 != -640LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x349 = -11;
	static uint64_t x350 = UINT64_MAX;
	uint8_t x351 = UINT8_MAX;
	int16_t x352 = INT16_MAX;

	t52 = ((x349*x350)+(x351*x352));

	if (t52 != 8355596LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x353 = INT32_MAX;
	int64_t x354 = -450LL;
	uint32_t x355 = 891322021U;
	int16_t x356 = -1;
	volatile int64_t t53 = -4302284718648LL;

	t53 = ((x353*x354)+(x355*x356));

	if (t53 != -962963995875LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x369 = 93897U;
	int64_t x370 = -1LL;
	static volatile int8_t x371 = INT8_MIN;
	static uint16_t x372 = 3506U;

	t54 = ((x369*x370)+(x371*x372));

	if (t54 != -542665LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x373 = INT32_MAX;
	uint64_t x374 = 280981291LLU;
	volatile int8_t x375 = -14;
	int8_t x376 = INT8_MAX;

	t55 = ((x373*x374)+(x375*x376));

	if (t55 != 603402727535446499LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x378 = INT8_MIN;
	int16_t x379 = -1;
	int32_t x380 = INT32_MAX;

	t56 = ((x377*x378)+(x379*x380));

	if (t56 != -2147483519) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x381 = 1;
	static volatile int8_t x382 = INT8_MIN;
	int64_t x383 = -3023LL;
	uint64_t x384 = 250LLU;

	t57 = ((x381*x382)+(x383*x384));

	if (t57 != 18446744073708795738LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x389 = INT16_MIN;
	int64_t x390 = -1738756LL;
	static uint64_t x391 = 0LLU;
	int16_t x392 = INT16_MIN;
	uint64_t t58 = 26833116373629513LLU;

	t58 = ((x389*x390)+(x391*x392));

	if (t58 != 56975556608LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x401 = 21U;
	int64_t x402 = -1LL;
	uint32_t x403 = 86000551U;
	int16_t x404 = 2030;
	int64_t t59 = -392LL;

	t59 = ((x401*x402)+(x403*x404));

	if (t59 != 2782426669LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x410 = 27U;
	static int64_t x411 = -18974192757007LL;
	int8_t x412 = INT8_MAX;
	int64_t t60 = 1190728LL;

	t60 = ((x409*x410)+(x411*x412));

	if (t60 != -2409720332656241LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x413 = UINT64_MAX;
	volatile int64_t x414 = INT64_MIN;
	int64_t x416 = -1LL;
	uint64_t t61 = 767391222922518LLU;

	t61 = ((x413*x414)+(x415*x416));

	if (t61 != 9223372036854775813LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x417 = 43U;
	uint64_t x418 = UINT64_MAX;
	uint8_t x419 = UINT8_MAX;
	int16_t x420 = 6;
	volatile uint64_t t62 = 1127LLU;

	t62 = ((x417*x418)+(x419*x420));

	if (t62 != 1487LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x437 = 24164467940166LLU;
	int32_t x438 = INT32_MIN;
	int8_t x439 = -1;
	int8_t x440 = -1;
	uint64_t t63 = 247617641829928697LLU;

	t63 = ((x437*x438)+(x439*x440));

	if (t63 != 16338059291950841857LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x457 = 57618U;
	int32_t x458 = INT32_MAX;
	uint16_t x459 = 0U;
	static int16_t x460 = INT16_MIN;
	volatile uint32_t t64 = 14952U;

	t64 = ((x457*x458)+(x459*x460));

	if (t64 != 4294909678U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x461 = -1LL;
	static uint32_t x462 = 15U;
	static int16_t x463 = -8;
	uint32_t x464 = UINT32_MAX;
	volatile int64_t t65 = -439741439LL;

	t65 = ((x461*x462)+(x463*x464));

	if (t65 != -7LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x466 = 220357304556LL;
	int32_t x467 = INT32_MIN;
	uint32_t x468 = 19481251U;
	int64_t t66 = -4205881784409106LL;

	t66 = ((x465*x466)+(x467*x468));

	if (t66 != 1101788670263648LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x469 = 1;
	int16_t x470 = INT16_MIN;
	uint8_t x471 = 21U;
	uint64_t x472 = 711LLU;
	volatile uint64_t t67 = 41556146LLU;

	t67 = ((x469*x470)+(x471*x472));

	if (t67 != 18446744073709533779LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x481 = 111301978341001LLU;
	int8_t x483 = INT8_MIN;
	uint64_t x484 = UINT64_MAX;
	uint64_t t68 = 145919948279533LLU;

	t68 = ((x481*x482)+(x483*x484));

	if (t68 != 9430917288331985399LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x485 = 101U;
	int32_t x486 = -1;
	static int8_t x487 = INT8_MIN;

	t69 = ((x485*x486)+(x487*x488));

	if (t69 != 4194203) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x489 = UINT8_MAX;
	int8_t x490 = 1;
	volatile int16_t x491 = -10;
	static int16_t x492 = INT16_MIN;
	volatile int32_t t70 = 1067;

	t70 = ((x489*x490)+(x491*x492));

	if (t70 != 327935) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x495 = 490U;
	int32_t x496 = INT32_MAX;
	volatile uint32_t t71 = 4023U;

	t71 = ((x493*x494)+(x495*x496));

	if (t71 != 1073741334U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x505 = INT8_MIN;
	uint8_t x506 = 19U;
	static int32_t x508 = INT32_MAX;

	t72 = ((x505*x506)+(x507*x508));

	if (t72 != 2147481215) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x517 = UINT32_MAX;
	int16_t x518 = 4;
	int16_t x520 = INT16_MIN;
	uint32_t t73 = 1568725U;

	t73 = ((x517*x518)+(x519*x520));

	if (t73 != 4294934524U) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x521 = 1;
	int8_t x523 = INT8_MIN;
	uint32_t x524 = UINT32_MAX;

	t74 = ((x521*x522)+(x523*x524));

	if (t74 != 6661234889LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x525 = 1U;
	volatile uint16_t x526 = 126U;
	int64_t x527 = -108991697268486830LL;
	static int32_t x528 = -1;
	volatile int64_t t75 = -503LL;

	t75 = ((x525*x526)+(x527*x528));

	if (t75 != 108991697268486956LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x529 = -8;
	int32_t x531 = INT32_MIN;
	static volatile uint8_t x532 = 0U;

	t76 = ((x529*x530)+(x531*x532));

	if (t76 != -1708988615560LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x533 = -1;
	int8_t x534 = INT8_MAX;
	int8_t x535 = 1;

	t77 = ((x533*x534)+(x535*x536));

	if (t77 != -131) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x537 = INT16_MAX;
	int16_t x539 = 1;
	uint32_t x540 = 2177090U;

	t78 = ((x537*x538)+(x539*x540));

	if (t78 != 493485488U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x541 = -22090730;
	volatile uint64_t x542 = 181898LLU;
	int32_t x544 = INT32_MAX;
	uint64_t t79 = 1602LLU;

	t79 = ((x541*x542)+(x543*x544));

	if (t79 != 18446740053302462429LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x545 = -1;
	int64_t x548 = -497631066861307LL;
	int64_t t80 = -527919241288LL;

	t80 = ((x545*x546)+(x547*x548));

	if (t80 != -9LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x549 = INT8_MAX;
	int16_t x550 = INT16_MAX;
	uint32_t x551 = 8U;
	int32_t x552 = INT32_MIN;
	uint32_t t81 = 0U;

	t81 = ((x549*x550)+(x551*x552));

	if (t81 != 4161409U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x553 = INT16_MIN;
	uint64_t x554 = 887161901LLU;
	volatile int16_t x555 = -1;
	static int8_t x556 = INT8_MIN;
	volatile uint64_t t82 = 4LLU;

	t82 = ((x553*x554)+(x555*x556));

	if (t82 != 18446715003188379776LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x561 = INT32_MAX;
	static int8_t x562 = -1;
	int32_t x563 = INT32_MAX;

	t83 = ((x561*x562)+(x563*x564));

	if (t83 != 2146925757U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x566 = INT16_MIN;
	static uint8_t x568 = 38U;

	t84 = ((x565*x566)+(x567*x568));

	if (t84 != 3752366999534LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x585 = -1;
	int8_t x586 = 6;
	static int64_t x588 = -255615734580LL;

	t85 = ((x585*x586)+(x587*x588));

	if (t85 != 1047185069705639274LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x589 = INT32_MIN;
	volatile int16_t x591 = INT16_MIN;
	static int8_t x592 = INT8_MIN;
	volatile int64_t t86 = -28694024LL;

	t86 = ((x589*x590)+(x591*x592));

	if (t86 != 2151677952LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x601 = -1LL;
	int64_t x603 = -1LL;
	static int16_t x604 = 53;

	t87 = ((x601*x602)+(x603*x604));

	if (t87 != -53LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x606 = -1LL;
	uint16_t x607 = 58U;
	static int64_t t88 = -238070432LL;

	t88 = ((x605*x606)+(x607*x608));

	if (t88 != -2583652951219LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x609 = UINT8_MAX;
	volatile int8_t x610 = INT8_MAX;
	uint8_t x612 = UINT8_MAX;
	static int32_t t89 = 308912;

	t89 = ((x609*x610)+(x611*x612));

	if (t89 != 59160) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x621 = -1;
	uint64_t x623 = 853LLU;
	static uint16_t x624 = 11U;
	volatile uint64_t t90 = 63481154152LLU;

	t90 = ((x621*x622)+(x623*x624));

	if (t90 != 18446744073709528232LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x630 = 0;
	int16_t x631 = -1;
	static volatile int16_t x632 = -1;
	int32_t t91 = -553134076;

	t91 = ((x629*x630)+(x631*x632));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x633 = -1LL;
	volatile uint32_t x634 = UINT32_MAX;
	static volatile int32_t x635 = -208292;
	uint64_t x636 = 518872302969935107LLU;

	t92 = ((x633*x634)+(x635*x636));

	if (t92 != 2523797646244643605LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x637 = -100851028936635LL;
	int16_t x639 = 767;
	volatile uint64_t x640 = 2455206245173840941LLU;
	volatile uint64_t t93 = 25232LLU;

	t93 = ((x637*x638)+(x639*x640));

	if (t93 != 1572470701151511135LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x641 = 170U;
	static int8_t x642 = -1;
	int64_t x643 = INT64_MIN;
	static uint64_t x644 = UINT64_MAX;
	volatile uint64_t t94 = 2171LLU;

	t94 = ((x641*x642)+(x643*x644));

	if (t94 != 9223372041149742934LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x646 = 12LL;
	volatile uint32_t x647 = UINT32_MAX;
	uint64_t x648 = UINT64_MAX;
	volatile uint64_t t95 = 361380894192LLU;

	t95 = ((x645*x646)+(x647*x648));

	if (t95 != 18446744069414584357LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x654 = 1;
	int32_t x655 = INT32_MIN;
	uint32_t x656 = 18U;
	uint32_t t96 = 425847229U;

	t96 = ((x653*x654)+(x655*x656));

	if (t96 != 32767U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x657 = INT16_MIN;
	uint16_t x659 = UINT16_MAX;
	uint64_t x660 = 51108LLU;
	uint64_t t97 = 4885905200556988514LLU;

	t97 = ((x657*x658)+(x659*x660));

	if (t97 != 3345201244LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x666 = 275470741U;
	volatile int8_t x667 = 1;
	int8_t x668 = INT8_MIN;
	uint32_t t98 = 2328U;

	t98 = ((x665*x666)+(x667*x668));

	if (t98 != 2623481323U) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint16_t x673 = 626U;
	uint8_t x674 = 16U;
	static int16_t x675 = INT16_MIN;
	static uint16_t x676 = UINT16_MAX;

	t99 = ((x673*x674)+(x675*x676));

	if (t99 != -2147440864) { NG(); } else { ; }
	
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


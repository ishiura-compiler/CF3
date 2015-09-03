#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x6 = UINT64_MAX;
int8_t x7 = 0;
int16_t x19 = 0;
static volatile int64_t x26 = INT64_MAX;
static int32_t x28 = -166476620;
volatile uint8_t x32 = 11U;
int16_t x38 = INT16_MIN;
volatile int32_t t7 = 872160;
int16_t x47 = INT16_MIN;
volatile int32_t t9 = 30;
uint32_t x62 = 34060U;
static uint8_t x68 = 47U;
volatile int32_t t11 = 33113684;
uint32_t x113 = 344U;
volatile int32_t x114 = INT32_MIN;
int64_t x163 = INT64_MIN;
static volatile int32_t t21 = 1;
int64_t x165 = 722882390243623LL;
int64_t x167 = -1LL;
int8_t x168 = -1;
volatile int32_t t22 = 169396;
int16_t x173 = 183;
uint32_t x177 = UINT32_MAX;
int8_t x188 = -1;
int8_t x198 = INT8_MIN;
int8_t x200 = INT8_MIN;
int32_t t28 = 4545638;
int8_t x225 = -1;
uint32_t x226 = 3837270U;
uint8_t x228 = UINT8_MAX;
uint64_t x235 = UINT64_MAX;
volatile uint8_t x237 = UINT8_MAX;
uint64_t x249 = 17845342LLU;
uint16_t x252 = 3U;
int32_t t35 = -6001046;
static volatile int32_t x253 = -1;
int8_t x254 = INT8_MAX;
int64_t x270 = -1LL;
int32_t t37 = -1;
int16_t x289 = -227;
uint8_t x292 = UINT8_MAX;
uint64_t x308 = 40804441872909LLU;
int16_t x314 = -330;
static volatile int64_t x325 = INT64_MIN;
volatile int8_t x338 = 1;
int64_t x348 = -404760LL;
static volatile int32_t t45 = -54903703;
int8_t x368 = INT8_MIN;
int32_t t47 = 229888430;
int32_t t48 = 1349874;
uint8_t x374 = 1U;
int8_t x384 = INT8_MAX;
uint32_t x392 = UINT32_MAX;
volatile int32_t t53 = -17275185;
int32_t t54 = -63;
uint8_t x424 = 122U;
uint32_t x438 = 1754U;
uint32_t x439 = UINT32_MAX;
int8_t x440 = INT8_MAX;
int8_t x446 = -1;
int32_t t58 = -3022120;
int64_t x468 = INT64_MAX;
uint32_t x473 = UINT32_MAX;
volatile int16_t x480 = -1;
static uint8_t x487 = 93U;
volatile uint64_t x488 = 7046355624564LLU;
int32_t t63 = 335829;
int32_t x494 = 45317251;
int32_t t64 = 87040657;
int32_t t65 = 29167388;
volatile uint8_t x504 = 1U;
uint32_t x517 = 21073081U;
int32_t x520 = 5109;
uint32_t x525 = 19920521U;
volatile int16_t x527 = INT16_MIN;
volatile uint32_t x528 = UINT32_MAX;
int32_t t70 = -113143;
volatile int32_t t71 = 17408;
uint16_t x582 = 499U;
int8_t x589 = 34;
volatile int16_t x590 = 36;
static uint8_t x591 = UINT8_MAX;
int8_t x601 = INT8_MAX;
int16_t x604 = INT16_MIN;
volatile int32_t t77 = -804036;
uint16_t x605 = 14U;
volatile int32_t t78 = 4;
uint32_t x610 = 2711U;
int32_t x623 = 12;
int8_t x624 = 7;
volatile uint32_t x626 = 2U;
volatile int32_t t82 = 66;
uint64_t x633 = 29452662LLU;
volatile uint32_t x634 = UINT32_MAX;
volatile int32_t t83 = -4;
uint64_t x656 = UINT64_MAX;
int16_t x658 = INT16_MAX;
volatile int32_t t86 = -169746182;
uint32_t x672 = UINT32_MAX;
uint32_t x675 = 2U;
uint16_t x701 = UINT16_MAX;
uint64_t x702 = 139769658041LLU;
int16_t x703 = 11711;
volatile uint64_t x704 = 5710464842LLU;
volatile int32_t t91 = -1;
static int8_t x718 = -2;
int8_t x726 = 47;
uint8_t x728 = UINT8_MAX;
int16_t x730 = -1;
int16_t x738 = -238;
volatile int32_t t96 = 30279;
volatile uint64_t x747 = 96147794269LLU;
uint8_t x753 = 1U;
int8_t x755 = INT8_MAX;
int16_t x756 = INT16_MIN;


void f0(void) {
	static int64_t x5 = -1LL;
	int8_t x8 = INT8_MIN;
	static int32_t t0 = 983450;

	t0 = ((x5*x6)<(x7*x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MIN;
	int8_t x10 = INT8_MIN;
	int8_t x11 = INT8_MAX;
	uint8_t x12 = 12U;
	int32_t t1 = 57;

	t1 = ((x9*x10)<(x11*x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x17 = INT32_MIN;
	uint64_t x18 = 1796097421745308LLU;
	volatile int32_t x20 = 113;
	int32_t t2 = -1922;

	t2 = ((x17*x18)<(x19*x20));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint64_t x21 = 174635966LLU;
	int64_t x22 = INT64_MAX;
	uint32_t x23 = 5U;
	uint64_t x24 = UINT64_MAX;
	int32_t t3 = 170919;

	t3 = ((x21*x22)<(x23*x24));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = -1;
	volatile uint32_t x27 = UINT32_MAX;
	static volatile int32_t t4 = 1;

	t4 = ((x25*x26)<(x27*x28));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x29 = INT8_MIN;
	int8_t x30 = 1;
	volatile int8_t x31 = -1;
	volatile int32_t t5 = -219;

	t5 = ((x29*x30)<(x31*x32));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x33 = 0;
	static uint32_t x34 = 5830699U;
	int16_t x35 = 0;
	int32_t x36 = INT32_MAX;
	volatile int32_t t6 = 398;

	t6 = ((x33*x34)<(x35*x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = -1;
	volatile int16_t x39 = INT16_MIN;
	uint16_t x40 = 2379U;

	t7 = ((x37*x38)<(x39*x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x45 = 944;
	uint32_t x46 = UINT32_MAX;
	int16_t x48 = 8019;
	int32_t t8 = -465568914;

	t8 = ((x45*x46)<(x47*x48));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x57 = 795037U;
	static int32_t x58 = INT32_MIN;
	int8_t x59 = INT8_MIN;
	int64_t x60 = 56842LL;

	t9 = ((x57*x58)<(x59*x60));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x61 = 2U;
	volatile int8_t x63 = 1;
	int8_t x64 = -1;
	int32_t t10 = -28149852;

	t10 = ((x61*x62)<(x63*x64));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x65 = INT16_MIN;
	volatile int16_t x66 = -1;
	uint8_t x67 = 1U;

	t11 = ((x65*x66)<(x67*x68));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x69 = INT16_MAX;
	int64_t x70 = -1LL;
	static int8_t x71 = -1;
	static int8_t x72 = 1;
	static int32_t t12 = -11;

	t12 = ((x69*x70)<(x71*x72));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x81 = 90763671LLU;
	static uint16_t x82 = 1618U;
	int32_t x83 = -1;
	uint64_t x84 = 1LLU;
	volatile int32_t t13 = -64;

	t13 = ((x81*x82)<(x83*x84));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x97 = INT8_MAX;
	int8_t x98 = INT8_MIN;
	volatile int32_t x99 = 57;
	int8_t x100 = INT8_MAX;
	volatile int32_t t14 = 4479683;

	t14 = ((x97*x98)<(x99*x100));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x115 = -1;
	static int16_t x116 = INT16_MAX;
	static int32_t t15 = -53;

	t15 = ((x113*x114)<(x115*x116));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x117 = -1;
	int16_t x118 = INT16_MIN;
	static int32_t x119 = INT32_MIN;
	uint64_t x120 = 2LLU;
	volatile int32_t t16 = 1;

	t16 = ((x117*x118)<(x119*x120));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x133 = -34809547LL;
	uint64_t x134 = 372584699652639LLU;
	static int8_t x135 = INT8_MAX;
	int16_t x136 = INT16_MIN;
	int32_t t17 = 745;

	t17 = ((x133*x134)<(x135*x136));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x141 = 7;
	int64_t x142 = 7LL;
	int16_t x143 = INT16_MAX;
	volatile int8_t x144 = 0;
	volatile int32_t t18 = 841450;

	t18 = ((x141*x142)<(x143*x144));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x145 = INT32_MIN;
	uint64_t x146 = 109LLU;
	int32_t x147 = 20;
	static volatile uint32_t x148 = 206132U;
	int32_t t19 = -121950;

	t19 = ((x145*x146)<(x147*x148));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x153 = UINT32_MAX;
	int8_t x154 = -1;
	int64_t x155 = INT64_MAX;
	static uint64_t x156 = UINT64_MAX;
	int32_t t20 = -263910295;

	t20 = ((x153*x154)<(x155*x156));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x161 = 172;
	uint8_t x162 = 6U;
	volatile uint16_t x164 = 0U;

	t21 = ((x161*x162)<(x163*x164));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x166 = UINT8_MAX;

	t22 = ((x165*x166)<(x167*x168));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x174 = -1LL;
	uint32_t x175 = 137850U;
	int8_t x176 = 1;
	volatile int32_t t23 = -49539;

	t23 = ((x173*x174)<(x175*x176));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x178 = 54;
	volatile int8_t x179 = INT8_MIN;
	volatile int16_t x180 = INT16_MAX;
	int32_t t24 = 241406;

	t24 = ((x177*x178)<(x179*x180));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x181 = -1;
	static int16_t x182 = 1702;
	int16_t x183 = 1;
	volatile int16_t x184 = INT16_MIN;
	volatile int32_t t25 = -17156;

	t25 = ((x181*x182)<(x183*x184));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x185 = UINT32_MAX;
	int16_t x186 = -2163;
	int32_t x187 = -1;
	static int32_t t26 = 416;

	t26 = ((x185*x186)<(x187*x188));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x189 = -24;
	static volatile uint16_t x190 = 366U;
	uint16_t x191 = UINT16_MAX;
	uint8_t x192 = 2U;
	volatile int32_t t27 = 89790815;

	t27 = ((x189*x190)<(x191*x192));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x197 = 9;
	int32_t x199 = -1;

	t28 = ((x197*x198)<(x199*x200));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x201 = -1547196535074450LL;
	int64_t x202 = -1951LL;
	volatile uint32_t x203 = 10U;
	static int64_t x204 = 100218579267LL;
	volatile int32_t t29 = 14506;

	t29 = ((x201*x202)<(x203*x204));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x209 = 1877U;
	static volatile int32_t x210 = -74212715;
	uint16_t x211 = UINT16_MAX;
	volatile int16_t x212 = INT16_MAX;
	static volatile int32_t t30 = 68672047;

	t30 = ((x209*x210)<(x211*x212));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x227 = INT8_MAX;
	volatile int32_t t31 = 5;

	t31 = ((x225*x226)<(x227*x228));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x233 = 0U;
	int64_t x234 = INT64_MIN;
	int8_t x236 = -4;
	int32_t t32 = -3;

	t32 = ((x233*x234)<(x235*x236));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x238 = -1;
	uint64_t x239 = UINT64_MAX;
	volatile int8_t x240 = INT8_MAX;
	static int32_t t33 = 951413161;

	t33 = ((x237*x238)<(x239*x240));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x241 = 49;
	int8_t x242 = 1;
	static uint8_t x243 = 28U;
	int16_t x244 = INT16_MAX;
	volatile int32_t t34 = 7437;

	t34 = ((x241*x242)<(x243*x244));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x250 = 212853800149132727LL;
	volatile uint64_t x251 = 2871378523LLU;

	t35 = ((x249*x250)<(x251*x252));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x255 = UINT8_MAX;
	int16_t x256 = INT16_MIN;
	volatile int32_t t36 = 10544655;

	t36 = ((x253*x254)<(x255*x256));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x269 = 961;
	int16_t x271 = INT16_MIN;
	static int16_t x272 = 3;

	t37 = ((x269*x270)<(x271*x272));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x290 = 0U;
	static volatile int16_t x291 = INT16_MIN;
	int32_t t38 = -91;

	t38 = ((x289*x290)<(x291*x292));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x305 = INT8_MIN;
	int64_t x306 = 10289111879210805LL;
	int32_t x307 = INT32_MIN;
	int32_t t39 = -1;

	t39 = ((x305*x306)<(x307*x308));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x309 = -1;
	uint8_t x310 = UINT8_MAX;
	static int16_t x311 = 30;
	static int16_t x312 = INT16_MIN;
	int32_t t40 = -258660;

	t40 = ((x309*x310)<(x311*x312));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x313 = -1;
	volatile int16_t x315 = INT16_MIN;
	uint64_t x316 = 47648LLU;
	int32_t t41 = -82;

	t41 = ((x313*x314)<(x315*x316));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x326 = 1;
	static uint64_t x327 = UINT64_MAX;
	uint16_t x328 = 235U;
	volatile int32_t t42 = 33;

	t42 = ((x325*x326)<(x327*x328));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x337 = -1;
	int64_t x339 = -1LL;
	int16_t x340 = -1821;
	static volatile int32_t t43 = 419;

	t43 = ((x337*x338)<(x339*x340));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x341 = 14519U;
	int8_t x342 = INT8_MIN;
	static int32_t x343 = INT32_MAX;
	uint64_t x344 = 3305575LLU;
	int32_t t44 = -4114609;

	t44 = ((x341*x342)<(x343*x344));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x345 = INT32_MIN;
	int32_t x346 = 0;
	int32_t x347 = INT32_MAX;

	t45 = ((x345*x346)<(x347*x348));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x361 = -1LL;
	static uint8_t x362 = UINT8_MAX;
	static uint16_t x363 = 14597U;
	int16_t x364 = INT16_MIN;
	int32_t t46 = 1;

	t46 = ((x361*x362)<(x363*x364));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x365 = -9525590850319685LL;
	uint16_t x366 = 30U;
	int32_t x367 = 23;

	t47 = ((x365*x366)<(x367*x368));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x369 = -60;
	static uint8_t x370 = 0U;
	volatile int16_t x371 = INT16_MIN;
	int16_t x372 = INT16_MIN;

	t48 = ((x369*x370)<(x371*x372));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x373 = 24890LLU;
	int8_t x375 = 1;
	uint16_t x376 = 2497U;
	int32_t t49 = -4288;

	t49 = ((x373*x374)<(x375*x376));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x377 = UINT8_MAX;
	uint64_t x378 = 63479014987027267LLU;
	int32_t x379 = -1;
	uint32_t x380 = UINT32_MAX;
	volatile int32_t t50 = 1;

	t50 = ((x377*x378)<(x379*x380));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x381 = 3;
	int8_t x382 = INT8_MIN;
	int32_t x383 = -106752;
	volatile int32_t t51 = 299730;

	t51 = ((x381*x382)<(x383*x384));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x389 = -1;
	static uint64_t x390 = UINT64_MAX;
	int64_t x391 = 1626LL;
	static volatile int32_t t52 = -2704;

	t52 = ((x389*x390)<(x391*x392));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x397 = INT8_MAX;
	static uint64_t x398 = UINT64_MAX;
	static int64_t x399 = -1LL;
	static volatile uint64_t x400 = UINT64_MAX;

	t53 = ((x397*x398)<(x399*x400));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x413 = -324575692387LL;
	uint64_t x414 = 63983466LLU;
	int16_t x415 = INT16_MIN;
	uint16_t x416 = 15789U;

	t54 = ((x413*x414)<(x415*x416));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x421 = 289910375879828LL;
	volatile uint16_t x422 = 52U;
	int8_t x423 = INT8_MIN;
	volatile int32_t t55 = 1;

	t55 = ((x421*x422)<(x423*x424));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x429 = INT32_MIN;
	uint16_t x430 = 1U;
	int64_t x431 = 93LL;
	static uint32_t x432 = 9964894U;
	volatile int32_t t56 = 2630745;

	t56 = ((x429*x430)<(x431*x432));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x437 = -1;
	int32_t t57 = -902930080;

	t57 = ((x437*x438)<(x439*x440));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x445 = UINT64_MAX;
	static int16_t x447 = INT16_MIN;
	static volatile int16_t x448 = -1;

	t58 = ((x445*x446)<(x447*x448));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x449 = 20U;
	static uint64_t x450 = 1LLU;
	static volatile uint32_t x451 = UINT32_MAX;
	uint64_t x452 = 20085101073LLU;
	volatile int32_t t59 = -91116;

	t59 = ((x449*x450)<(x451*x452));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x465 = 2;
	int32_t x466 = 262135;
	static int8_t x467 = 1;
	static int32_t t60 = -114;

	t60 = ((x465*x466)<(x467*x468));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x474 = 1;
	int8_t x475 = INT8_MAX;
	volatile int8_t x476 = INT8_MIN;
	int32_t t61 = 75947;

	t61 = ((x473*x474)<(x475*x476));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x477 = 29U;
	int8_t x478 = INT8_MAX;
	int16_t x479 = -1;
	int32_t t62 = -4;

	t62 = ((x477*x478)<(x479*x480));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x485 = 587936414LLU;
	static int16_t x486 = INT16_MAX;

	t63 = ((x485*x486)<(x487*x488));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x493 = UINT64_MAX;
	volatile uint8_t x495 = 0U;
	int8_t x496 = INT8_MAX;

	t64 = ((x493*x494)<(x495*x496));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x497 = 151U;
	int16_t x498 = -30;
	int8_t x499 = INT8_MAX;
	int64_t x500 = -1LL;

	t65 = ((x497*x498)<(x499*x500));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x501 = 50U;
	volatile int32_t x502 = -1;
	int32_t x503 = -1;
	volatile int32_t t66 = -13;

	t66 = ((x501*x502)<(x503*x504));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x518 = INT16_MAX;
	static int16_t x519 = INT16_MAX;
	int32_t t67 = -20;

	t67 = ((x517*x518)<(x519*x520));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x521 = -1;
	int8_t x522 = -1;
	static int16_t x523 = 6;
	int8_t x524 = 3;
	int32_t t68 = -3;

	t68 = ((x521*x522)<(x523*x524));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x526 = -1;
	volatile int32_t t69 = 1;

	t69 = ((x525*x526)<(x527*x528));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x529 = -1;
	static int64_t x530 = -298974LL;
	volatile int32_t x531 = -106137;
	volatile uint64_t x532 = UINT64_MAX;

	t70 = ((x529*x530)<(x531*x532));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x545 = 64934879795LLU;
	int16_t x546 = -154;
	static uint64_t x547 = UINT64_MAX;
	uint16_t x548 = 50U;

	t71 = ((x545*x546)<(x547*x548));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x557 = UINT32_MAX;
	volatile int32_t x558 = -1;
	int16_t x559 = INT16_MIN;
	static uint8_t x560 = 0U;
	int32_t t72 = -458;

	t72 = ((x557*x558)<(x559*x560));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x573 = UINT32_MAX;
	uint16_t x574 = 1U;
	uint8_t x575 = UINT8_MAX;
	static int16_t x576 = 0;
	static int32_t t73 = 40165676;

	t73 = ((x573*x574)<(x575*x576));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x581 = 3;
	int32_t x583 = 7;
	uint64_t x584 = 2019341776LLU;
	static volatile int32_t t74 = -1;

	t74 = ((x581*x582)<(x583*x584));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x592 = 3748930U;
	static int32_t t75 = -285;

	t75 = ((x589*x590)<(x591*x592));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x597 = INT16_MIN;
	uint64_t x598 = UINT64_MAX;
	uint16_t x599 = UINT16_MAX;
	uint64_t x600 = UINT64_MAX;
	static volatile int32_t t76 = -379449;

	t76 = ((x597*x598)<(x599*x600));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x602 = -1;
	uint32_t x603 = 595476U;

	t77 = ((x601*x602)<(x603*x604));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x606 = INT16_MIN;
	uint8_t x607 = 3U;
	uint8_t x608 = 43U;

	t78 = ((x605*x606)<(x607*x608));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x609 = 1717963556U;
	int16_t x611 = INT16_MIN;
	int8_t x612 = INT8_MIN;
	int32_t t79 = -599186505;

	t79 = ((x609*x610)<(x611*x612));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x613 = -8135;
	static uint16_t x614 = 0U;
	int32_t x615 = -68697;
	static int16_t x616 = -1;
	int32_t t80 = -72917793;

	t80 = ((x613*x614)<(x615*x616));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x621 = -124;
	int8_t x622 = INT8_MAX;
	int32_t t81 = 27722736;

	t81 = ((x621*x622)<(x623*x624));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x625 = UINT16_MAX;
	int16_t x627 = -5616;
	static int16_t x628 = INT16_MAX;

	t82 = ((x625*x626)<(x627*x628));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x635 = 172;
	static volatile int8_t x636 = INT8_MIN;

	t83 = ((x633*x634)<(x635*x636));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x637 = -422;
	volatile int8_t x638 = INT8_MAX;
	volatile int8_t x639 = 25;
	uint64_t x640 = 9448833752LLU;
	int32_t t84 = 461881;

	t84 = ((x637*x638)<(x639*x640));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x653 = 65U;
	static volatile uint16_t x654 = UINT16_MAX;
	static int32_t x655 = INT32_MIN;
	static volatile int32_t t85 = -1624;

	t85 = ((x653*x654)<(x655*x656));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x657 = -3;
	static volatile int16_t x659 = -469;
	volatile int16_t x660 = -1;

	t86 = ((x657*x658)<(x659*x660));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x665 = 0;
	int8_t x666 = -1;
	int8_t x667 = INT8_MAX;
	static uint8_t x668 = UINT8_MAX;
	int32_t t87 = 64364655;

	t87 = ((x665*x666)<(x667*x668));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x669 = INT32_MAX;
	volatile int8_t x670 = 0;
	int8_t x671 = INT8_MIN;
	static int32_t t88 = -763;

	t88 = ((x669*x670)<(x671*x672));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x673 = 14U;
	int8_t x674 = -1;
	uint32_t x676 = 6074U;
	volatile int32_t t89 = -1130;

	t89 = ((x673*x674)<(x675*x676));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x685 = -110990967;
	static uint64_t x686 = 14099784951LLU;
	uint16_t x687 = 4U;
	uint32_t x688 = UINT32_MAX;
	volatile int32_t t90 = -21415;

	t90 = ((x685*x686)<(x687*x688));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {


	t91 = ((x701*x702)<(x703*x704));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x709 = INT8_MIN;
	int8_t x710 = -5;
	int16_t x711 = INT16_MIN;
	uint32_t x712 = 1956567949U;
	volatile int32_t t92 = -97;

	t92 = ((x709*x710)<(x711*x712));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x717 = INT16_MAX;
	int32_t x719 = -26411;
	static uint64_t x720 = 12LLU;
	int32_t t93 = -329261995;

	t93 = ((x717*x718)<(x719*x720));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x725 = INT8_MAX;
	int8_t x727 = INT8_MIN;
	int32_t t94 = 15;

	t94 = ((x725*x726)<(x727*x728));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x729 = -10110;
	uint8_t x731 = 0U;
	int64_t x732 = 90364584LL;
	int32_t t95 = -4794233;

	t95 = ((x729*x730)<(x731*x732));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x737 = -26;
	static volatile int64_t x739 = 1117579880363LL;
	static int16_t x740 = 1;

	t96 = ((x737*x738)<(x739*x740));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x745 = -1LL;
	uint64_t x746 = 2483LLU;
	uint32_t x748 = 5784549U;
	volatile int32_t t97 = -2;

	t97 = ((x745*x746)<(x747*x748));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x749 = INT16_MAX;
	static uint64_t x750 = UINT64_MAX;
	volatile uint64_t x751 = 7686LLU;
	static int64_t x752 = INT64_MIN;
	volatile int32_t t98 = -369;

	t98 = ((x749*x750)<(x751*x752));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x754 = 10U;
	volatile int32_t t99 = -3;

	t99 = ((x753*x754)<(x755*x756));

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


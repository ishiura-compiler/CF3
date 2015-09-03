#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = 141249882LLU;
volatile int8_t x4 = 1;
int16_t x20 = INT16_MIN;
volatile uint32_t t8 = UINT32_MAX;
int32_t x120 = INT32_MIN;
uint32_t x135 = UINT32_MAX;
static int32_t t12 = 21;
int32_t x151 = -14647;
static volatile int32_t x157 = 8;
static volatile int64_t x165 = 2464794LL;
int8_t x166 = INT8_MIN;
uint8_t x178 = 40U;
int16_t x188 = INT16_MAX;
uint32_t x189 = 749515U;
int32_t x200 = INT32_MAX;
uint8_t x205 = UINT8_MAX;
int8_t x221 = 13;
int16_t x229 = 98;
uint16_t x230 = 110U;
int32_t t24 = 2126988;
static uint8_t x240 = UINT8_MAX;
int64_t x256 = INT64_MIN;
uint8_t x265 = UINT8_MAX;
uint64_t x266 = 496453909760397LLU;
static int64_t x267 = -85LL;
volatile int32_t x274 = -1;
int32_t t32 = -44271;
int16_t x310 = -1;
int16_t x319 = INT16_MIN;
int32_t x326 = -1;
int16_t x328 = INT16_MIN;
static uint32_t x332 = UINT32_MAX;
int32_t t39 = 7005175;
volatile uint64_t t42 = UINT64_MAX;
uint16_t x426 = UINT16_MAX;
static int32_t x428 = INT32_MIN;
volatile int64_t x430 = 1LL;
int8_t x439 = INT8_MIN;
volatile int32_t t47 = 399500;
static uint64_t x449 = 1653LLU;
static int16_t x451 = INT16_MIN;
volatile uint8_t x457 = UINT8_MAX;
uint16_t x458 = 3987U;
volatile int32_t t49 = -48;
volatile uint64_t t51 = UINT64_MAX;
volatile int64_t x486 = 225127LL;
int32_t x503 = INT32_MAX;
static uint32_t x506 = UINT32_MAX;
int64_t x517 = INT64_MAX;
int32_t x527 = 1;
volatile int64_t x529 = 6036LL;
static int8_t x532 = 1;
volatile int8_t x536 = INT8_MIN;
static int32_t t59 = 99;
static uint64_t x537 = 731311406019946LLU;
static int32_t x538 = INT32_MIN;
volatile int32_t t61 = 20216545;
int8_t x565 = 1;
volatile int16_t x566 = 12;
int64_t x580 = INT64_MIN;
volatile uint32_t t64 = 169376950U;
int16_t x595 = 5377;
int64_t x598 = INT64_MIN;
int16_t x599 = INT16_MIN;
static int32_t x602 = -1;
uint32_t t67 = UINT32_MAX;
uint8_t x609 = 1U;
volatile int64_t x611 = INT64_MIN;
static int32_t t68 = 168550;
int32_t x650 = INT32_MIN;
uint16_t x652 = UINT16_MAX;
static uint32_t t71 = 347852345U;
static int16_t x690 = INT16_MAX;
uint16_t x691 = UINT16_MAX;
static volatile int32_t x709 = 965;
int32_t t75 = -333495806;
volatile int32_t x726 = -1;
static int16_t x727 = INT16_MIN;
volatile int32_t t76 = -474517;
volatile uint32_t t77 = UINT32_MAX;
int64_t x743 = INT64_MAX;
static volatile int32_t t78 = -152;
uint8_t x753 = 36U;
static int64_t x754 = 69LL;
int32_t t81 = 11141928;
uint16_t x762 = 0U;
int8_t x764 = -1;
int16_t x779 = INT16_MIN;
volatile uint32_t t84 = 1251761U;
uint32_t x798 = UINT32_MAX;
int16_t x800 = -1;
volatile uint64_t x817 = 0LLU;
uint16_t x819 = UINT16_MAX;
volatile uint64_t t87 = 11LLU;
int64_t x828 = INT64_MAX;
int64_t x837 = 1059002929087LL;
uint64_t x838 = 1LLU;
int16_t x839 = 5;
volatile int32_t x841 = INT32_MAX;
int64_t x852 = -45LL;
volatile int64_t x855 = 1950679LL;
volatile uint16_t x860 = 3U;
volatile uint64_t x886 = UINT64_MAX;
static int32_t x899 = INT32_MAX;


void f0(void) {
	volatile uint32_t x1 = 43U;
	int64_t x3 = INT64_MAX;
	volatile uint32_t t0 = 34628683U;

	t0 = (x1<<((x2/x3)/x4));

	if (t0 != 43U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	uint8_t x6 = UINT8_MAX;
	volatile int64_t x7 = 8233LL;
	int8_t x8 = -1;
	static int32_t t1 = INT32_MAX;

	t1 = (x5<<((x6/x7)/x8));

	if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 344788U;
	static volatile uint64_t x10 = 33LLU;
	static volatile int16_t x11 = 7574;
	volatile int64_t x12 = -1LL;
	static volatile uint32_t t2 = 90417633U;

	t2 = (x9<<((x10/x11)/x12));

	if (t2 != 344788U) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = UINT16_MAX;
	uint32_t x18 = UINT32_MAX;
	int64_t x19 = INT64_MIN;
	static int32_t t3 = 84123484;

	t3 = (x17<<((x18/x19)/x20));

	if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x45 = INT64_MAX;
	static uint8_t x46 = UINT8_MAX;
	int16_t x47 = INT16_MAX;
	static uint8_t x48 = 32U;
	int64_t t4 = INT64_MAX;

	t4 = (x45<<((x46/x47)/x48));

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x49 = INT16_MAX;
	uint8_t x50 = 0U;
	static volatile int32_t x51 = INT32_MAX;
	uint8_t x52 = 1U;
	volatile int32_t t5 = -8516549;

	t5 = (x49<<((x50/x51)/x52));

	if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x57 = 1871988208U;
	static uint8_t x58 = 87U;
	int16_t x59 = -1;
	int16_t x60 = INT16_MIN;
	volatile uint32_t t6 = 45264U;

	t6 = (x57<<((x58/x59)/x60));

	if (t6 != 1871988208U) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x61 = UINT32_MAX;
	int32_t x62 = -1;
	volatile int8_t x63 = INT8_MIN;
	int16_t x64 = INT16_MIN;
	volatile uint32_t t7 = UINT32_MAX;

	t7 = (x61<<((x62/x63)/x64));

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x81 = UINT32_MAX;
	int8_t x82 = INT8_MAX;
	int16_t x83 = INT16_MIN;
	int32_t x84 = INT32_MAX;

	t8 = (x81<<((x82/x83)/x84));

	if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x97 = UINT8_MAX;
	static uint32_t x98 = 137071349U;
	int32_t x99 = INT32_MIN;
	static int16_t x100 = -1;
	volatile int32_t t9 = 3327326;

	t9 = (x97<<((x98/x99)/x100));

	if (t9 != 255) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x113 = INT8_MAX;
	int8_t x114 = INT8_MIN;
	int32_t x115 = INT32_MAX;
	uint64_t x116 = UINT64_MAX;
	int32_t t10 = -3;

	t10 = (x113<<((x114/x115)/x116));

	if (t10 != 127) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x117 = 20U;
	uint8_t x118 = 1U;
	volatile int32_t x119 = INT32_MIN;
	volatile int32_t t11 = -7489;

	t11 = (x117<<((x118/x119)/x120));

	if (t11 != 20) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x133 = INT8_MAX;
	int32_t x134 = INT32_MAX;
	int8_t x136 = -2;

	t12 = (x133<<((x134/x135)/x136));

	if (t12 != 127) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x149 = 3U;
	int16_t x150 = INT16_MIN;
	int16_t x152 = 11303;
	int32_t t13 = 681625;

	t13 = (x149<<((x150/x151)/x152));

	if (t13 != 3) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x158 = -4;
	volatile int32_t x159 = INT32_MAX;
	int16_t x160 = INT16_MIN;
	int32_t t14 = -105972140;

	t14 = (x157<<((x158/x159)/x160));

	if (t14 != 8) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x161 = INT16_MAX;
	volatile int16_t x162 = -1;
	uint8_t x163 = 59U;
	volatile int8_t x164 = -1;
	volatile int32_t t15 = -1;

	t15 = (x161<<((x162/x163)/x164));

	if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x167 = 1325;
	int8_t x168 = -19;
	int64_t t16 = 139181637LL;

	t16 = (x165<<((x166/x167)/x168));

	if (t16 != 2464794LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x177 = INT32_MAX;
	uint32_t x179 = UINT32_MAX;
	uint8_t x180 = 27U;
	static int32_t t17 = INT32_MAX;

	t17 = (x177<<((x178/x179)/x180));

	if (t17 != INT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x185 = 35907LL;
	volatile int64_t x186 = 67878LL;
	int64_t x187 = INT64_MIN;
	volatile int64_t t18 = -10940812LL;

	t18 = (x185<<((x186/x187)/x188));

	if (t18 != 35907LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x190 = 1LL;
	uint8_t x191 = 59U;
	int32_t x192 = INT32_MAX;
	static volatile uint32_t t19 = 3571882U;

	t19 = (x189<<((x190/x191)/x192));

	if (t19 != 749515U) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x197 = UINT8_MAX;
	int32_t x198 = 15426424;
	int32_t x199 = INT32_MIN;
	static int32_t t20 = 1059705350;

	t20 = (x197<<((x198/x199)/x200));

	if (t20 != 255) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x201 = UINT64_MAX;
	static uint64_t x202 = UINT64_MAX;
	uint8_t x203 = 27U;
	int64_t x204 = INT64_MIN;
	volatile uint64_t t21 = UINT64_MAX;

	t21 = (x201<<((x202/x203)/x204));

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x206 = -50;
	int8_t x207 = INT8_MIN;
	static int8_t x208 = INT8_MIN;
	volatile int32_t t22 = 224630498;

	t22 = (x205<<((x206/x207)/x208));

	if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x222 = 296677382055246869LLU;
	uint64_t x223 = UINT64_MAX;
	static int8_t x224 = INT8_MAX;
	int32_t t23 = 22652522;

	t23 = (x221<<((x222/x223)/x224));

	if (t23 != 13) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x231 = UINT32_MAX;
	int64_t x232 = INT64_MIN;

	t24 = (x229<<((x230/x231)/x232));

	if (t24 != 98) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x237 = UINT32_MAX;
	int8_t x238 = 12;
	uint8_t x239 = 11U;
	static volatile uint32_t t25 = UINT32_MAX;

	t25 = (x237<<((x238/x239)/x240));

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x245 = 0U;
	volatile uint64_t x246 = 5LLU;
	int16_t x247 = INT16_MIN;
	int64_t x248 = -1LL;
	static int32_t t26 = 20;

	t26 = (x245<<((x246/x247)/x248));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int64_t x253 = 40842628778792038LL;
	uint8_t x254 = UINT8_MAX;
	int16_t x255 = -1;
	int64_t t27 = -487665956859LL;

	t27 = (x253<<((x254/x255)/x256));

	if (t27 != 40842628778792038LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x257 = 2281273LLU;
	int32_t x258 = -1;
	volatile uint8_t x259 = 47U;
	int16_t x260 = -593;
	volatile uint64_t t28 = 60324396159862875LLU;

	t28 = (x257<<((x258/x259)/x260));

	if (t28 != 2281273LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x261 = 1U;
	uint16_t x262 = UINT16_MAX;
	int64_t x263 = 262308LL;
	volatile uint8_t x264 = 12U;
	int32_t t29 = -52236113;

	t29 = (x261<<((x262/x263)/x264));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x268 = INT32_MAX;
	int32_t t30 = 1665;

	t30 = (x265<<((x266/x267)/x268));

	if (t30 != 255) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x269 = 0;
	static int32_t x270 = -428;
	uint64_t x271 = UINT64_MAX;
	static volatile int16_t x272 = INT16_MIN;
	int32_t t31 = 0;

	t31 = (x269<<((x270/x271)/x272));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x273 = INT16_MAX;
	int8_t x275 = INT8_MIN;
	int32_t x276 = 3602;

	t32 = (x273<<((x274/x275)/x276));

	if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x285 = 53;
	uint16_t x286 = UINT16_MAX;
	int32_t x287 = INT32_MIN;
	volatile int64_t x288 = INT64_MIN;
	volatile int32_t t33 = -50993;

	t33 = (x285<<((x286/x287)/x288));

	if (t33 != 53) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x297 = 3168U;
	int16_t x298 = -1;
	static int8_t x299 = INT8_MAX;
	int16_t x300 = INT16_MIN;
	volatile int32_t t34 = -32865451;

	t34 = (x297<<((x298/x299)/x300));

	if (t34 != 3168) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x309 = 1U;
	int32_t x311 = -1;
	int8_t x312 = INT8_MIN;
	static uint32_t t35 = 4U;

	t35 = (x309<<((x310/x311)/x312));

	if (t35 != 1U) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x317 = 132352526241424LLU;
	int8_t x318 = -1;
	volatile int64_t x320 = INT64_MIN;
	static uint64_t t36 = 12LLU;

	t36 = (x317<<((x318/x319)/x320));

	if (t36 != 132352526241424LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x325 = 231;
	uint64_t x327 = UINT64_MAX;
	int32_t t37 = -737496;

	t37 = (x325<<((x326/x327)/x328));

	if (t37 != 231) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x329 = INT32_MAX;
	static uint64_t x330 = 3928LLU;
	int32_t x331 = 509362;
	int32_t t38 = INT32_MAX;

	t38 = (x329<<((x330/x331)/x332));

	if (t38 != INT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x349 = UINT8_MAX;
	int64_t x350 = -1LL;
	int16_t x351 = -3;
	static int64_t x352 = INT64_MIN;

	t39 = (x349<<((x350/x351)/x352));

	if (t39 != 255) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x389 = INT32_MAX;
	uint32_t x390 = 70389399U;
	static uint8_t x391 = 61U;
	int16_t x392 = INT16_MIN;
	int32_t t40 = INT32_MAX;

	t40 = (x389<<((x390/x391)/x392));

	if (t40 != INT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x397 = 23309874U;
	volatile uint16_t x398 = 1U;
	volatile int8_t x399 = INT8_MIN;
	volatile int32_t x400 = INT32_MAX;
	static uint32_t t41 = 5U;

	t41 = (x397<<((x398/x399)/x400));

	if (t41 != 23309874U) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x413 = UINT64_MAX;
	static uint32_t x414 = 30U;
	int8_t x415 = INT8_MAX;
	int32_t x416 = 5332;

	t42 = (x413<<((x414/x415)/x416));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x417 = 15496U;
	volatile int8_t x418 = INT8_MIN;
	int64_t x419 = -1LL;
	uint64_t x420 = 2524731466LLU;
	uint32_t t43 = 279702U;

	t43 = (x417<<((x418/x419)/x420));

	if (t43 != 15496U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x425 = 11;
	int8_t x427 = INT8_MIN;
	volatile int32_t t44 = 0;

	t44 = (x425<<((x426/x427)/x428));

	if (t44 != 11) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x429 = 1U;
	uint32_t x431 = 1209U;
	uint16_t x432 = 7U;
	int32_t t45 = -1721318;

	t45 = (x429<<((x430/x431)/x432));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x437 = INT16_MAX;
	int16_t x438 = INT16_MIN;
	volatile uint64_t x440 = 1887LLU;
	static volatile int32_t t46 = 209632104;

	t46 = (x437<<((x438/x439)/x440));

	if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x441 = 0U;
	volatile uint32_t x442 = UINT32_MAX;
	int32_t x443 = -1;
	static volatile int16_t x444 = INT16_MAX;

	t47 = (x441<<((x442/x443)/x444));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x450 = UINT8_MAX;
	uint16_t x452 = UINT16_MAX;
	uint64_t t48 = 1224519770131925628LLU;

	t48 = (x449<<((x450/x451)/x452));

	if (t48 != 1653LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x459 = INT32_MAX;
	static int16_t x460 = INT16_MIN;

	t49 = (x457<<((x458/x459)/x460));

	if (t49 != 255) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x465 = INT64_MAX;
	volatile uint64_t x466 = UINT64_MAX;
	int32_t x467 = 684;
	int32_t x468 = -1;
	static int64_t t50 = INT64_MAX;

	t50 = (x465<<((x466/x467)/x468));

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x481 = UINT64_MAX;
	int16_t x482 = -1;
	static volatile int8_t x483 = INT8_MIN;
	uint32_t x484 = 2659207U;

	t51 = (x481<<((x482/x483)/x484));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x485 = UINT8_MAX;
	static volatile uint32_t x487 = 1420729U;
	int16_t x488 = 9;
	volatile int32_t t52 = 32737;

	t52 = (x485<<((x486/x487)/x488));

	if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x497 = 189958276;
	volatile int8_t x498 = INT8_MIN;
	static int32_t x499 = -1;
	static int16_t x500 = -2013;
	volatile int32_t t53 = -248657;

	t53 = (x497<<((x498/x499)/x500));

	if (t53 != 189958276) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x501 = 16;
	static int32_t x502 = INT32_MIN;
	int16_t x504 = -1;
	int32_t t54 = 16846905;

	t54 = (x501<<((x502/x503)/x504));

	if (t54 != 32) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x505 = INT16_MAX;
	int32_t x507 = -1;
	int32_t x508 = -1;
	volatile int32_t t55 = 177802;

	t55 = (x505<<((x506/x507)/x508));

	if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x518 = 17558U;
	int64_t x519 = -170974655LL;
	uint64_t x520 = 771837918552341LLU;
	int64_t t56 = INT64_MAX;

	t56 = (x517<<((x518/x519)/x520));

	if (t56 != INT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x525 = 7U;
	int8_t x526 = -1;
	int64_t x528 = 2472215285758LL;
	volatile int32_t t57 = 0;

	t57 = (x525<<((x526/x527)/x528));

	if (t57 != 7) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x530 = -1;
	int8_t x531 = -1;
	int64_t t58 = -507245992383425LL;

	t58 = (x529<<((x530/x531)/x532));

	if (t58 != 12072LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x533 = 4U;
	uint64_t x534 = 5272LLU;
	int32_t x535 = INT32_MIN;

	t59 = (x533<<((x534/x535)/x536));

	if (t59 != 4) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x539 = -335;
	static uint64_t x540 = 5274473337124260118LLU;
	uint64_t t60 = 1009086758323LLU;

	t60 = (x537<<((x538/x539)/x540));

	if (t60 != 731311406019946LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x541 = UINT8_MAX;
	uint16_t x542 = 5U;
	int32_t x543 = INT32_MIN;
	int8_t x544 = INT8_MIN;

	t61 = (x541<<((x542/x543)/x544));

	if (t61 != 255) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x567 = 47U;
	int16_t x568 = -2;
	volatile int32_t t62 = -17565;

	t62 = (x565<<((x566/x567)/x568));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x577 = 2038198800365237884LL;
	int64_t x578 = INT64_MIN;
	int8_t x579 = INT8_MIN;
	int64_t t63 = 6053LL;

	t63 = (x577<<((x578/x579)/x580));

	if (t63 != 2038198800365237884LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x581 = 82971148U;
	uint64_t x582 = 1707930237944LLU;
	volatile int64_t x583 = INT64_MAX;
	volatile int16_t x584 = INT16_MAX;

	t64 = (x581<<((x582/x583)/x584));

	if (t64 != 82971148U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x593 = INT8_MAX;
	static volatile int32_t x594 = 10367;
	volatile uint64_t x596 = 1418019397163214LLU;
	int32_t t65 = -170983326;

	t65 = (x593<<((x594/x595)/x596));

	if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x597 = 13099730U;
	static volatile int64_t x600 = INT64_MIN;
	volatile uint32_t t66 = 210633728U;

	t66 = (x597<<((x598/x599)/x600));

	if (t66 != 13099730U) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x601 = UINT32_MAX;
	static int8_t x603 = 63;
	int8_t x604 = -13;

	t67 = (x601<<((x602/x603)/x604));

	if (t67 != UINT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x610 = -1LL;
	static uint64_t x612 = 1259LLU;

	t68 = (x609<<((x610/x611)/x612));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x617 = INT16_MAX;
	int64_t x618 = 3537LL;
	volatile int16_t x619 = 651;
	static volatile int64_t x620 = INT64_MIN;
	static int32_t t69 = -76189242;

	t69 = (x617<<((x618/x619)/x620));

	if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x629 = 1LLU;
	volatile int32_t x630 = -1;
	int32_t x631 = -1;
	volatile int8_t x632 = -9;
	uint64_t t70 = 1180860072LLU;

	t70 = (x629<<((x630/x631)/x632));

	if (t70 != 1LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x649 = 0U;
	int16_t x651 = INT16_MIN;

	t71 = (x649<<((x650/x651)/x652));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x669 = 11639711156912LLU;
	volatile int8_t x670 = INT8_MIN;
	int16_t x671 = INT16_MIN;
	int64_t x672 = INT64_MAX;
	uint64_t t72 = 51768634LLU;

	t72 = (x669<<((x670/x671)/x672));

	if (t72 != 11639711156912LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x689 = UINT16_MAX;
	volatile int8_t x692 = 2;
	int32_t t73 = 2600;

	t73 = (x689<<((x690/x691)/x692));

	if (t73 != 65535) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x693 = 25U;
	int64_t x694 = -1LL;
	static int32_t x695 = INT32_MIN;
	int64_t x696 = INT64_MAX;
	volatile uint32_t t74 = 76032925U;

	t74 = (x693<<((x694/x695)/x696));

	if (t74 != 25U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x710 = INT16_MIN;
	static volatile int8_t x711 = -7;
	int64_t x712 = INT64_MIN;

	t75 = (x709<<((x710/x711)/x712));

	if (t75 != 965) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x725 = 6U;
	uint32_t x728 = UINT32_MAX;

	t76 = (x725<<((x726/x727)/x728));

	if (t76 != 6) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x733 = UINT32_MAX;
	static uint16_t x734 = 13U;
	volatile uint32_t x735 = 76U;
	int8_t x736 = 11;

	t77 = (x733<<((x734/x735)/x736));

	if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x741 = 2U;
	int64_t x742 = INT64_MAX;
	int32_t x744 = INT32_MIN;

	t78 = (x741<<((x742/x743)/x744));

	if (t78 != 2) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x749 = UINT32_MAX;
	int8_t x750 = -1;
	int32_t x751 = INT32_MIN;
	volatile int32_t x752 = INT32_MIN;
	uint32_t t79 = UINT32_MAX;

	t79 = (x749<<((x750/x751)/x752));

	if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x755 = 62598;
	static int32_t x756 = INT32_MIN;
	volatile int32_t t80 = -88480854;

	t80 = (x753<<((x754/x755)/x756));

	if (t80 != 36) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x757 = 0;
	int64_t x758 = INT64_MIN;
	int64_t x759 = INT64_MIN;
	int32_t x760 = -31454227;

	t81 = (x757<<((x758/x759)/x760));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x761 = 470446LLU;
	volatile int16_t x763 = INT16_MIN;
	uint64_t t82 = 318892LLU;

	t82 = (x761<<((x762/x763)/x764));

	if (t82 != 470446LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x777 = 12762;
	uint32_t x778 = 131218415U;
	int8_t x780 = -2;
	static volatile int32_t t83 = -110436918;

	t83 = (x777<<((x778/x779)/x780));

	if (t83 != 12762) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x793 = 169U;
	int16_t x794 = -8;
	int32_t x795 = INT32_MAX;
	int16_t x796 = -435;

	t84 = (x793<<((x794/x795)/x796));

	if (t84 != 169U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x797 = 28;
	uint64_t x799 = 385230866960LLU;
	int32_t t85 = 1456;

	t85 = (x797<<((x798/x799)/x800));

	if (t85 != 28) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x813 = UINT16_MAX;
	int64_t x814 = -1LL;
	int16_t x815 = INT16_MAX;
	int32_t x816 = -1;
	volatile int32_t t86 = -177099508;

	t86 = (x813<<((x814/x815)/x816));

	if (t86 != 65535) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x818 = -420573992;
	int32_t x820 = INT32_MIN;

	t87 = (x817<<((x818/x819)/x820));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x825 = 1;
	static int16_t x826 = INT16_MAX;
	volatile int32_t x827 = -16952829;
	int32_t t88 = 117952978;

	t88 = (x825<<((x826/x827)/x828));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x840 = INT8_MIN;
	int64_t t89 = 122794050406LL;

	t89 = (x837<<((x838/x839)/x840));

	if (t89 != 1059002929087LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x842 = INT32_MIN;
	volatile uint64_t x843 = UINT64_MAX;
	volatile int16_t x844 = INT16_MIN;
	int32_t t90 = INT32_MAX;

	t90 = (x841<<((x842/x843)/x844));

	if (t90 != INT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x845 = 18582123U;
	int8_t x846 = INT8_MAX;
	volatile int16_t x847 = INT16_MAX;
	int32_t x848 = INT32_MIN;
	uint32_t t91 = 765U;

	t91 = (x845<<((x846/x847)/x848));

	if (t91 != 18582123U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x849 = 86839U;
	static int16_t x850 = INT16_MAX;
	int64_t x851 = INT64_MIN;
	uint32_t t92 = 70U;

	t92 = (x849<<((x850/x851)/x852));

	if (t92 != 86839U) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x853 = INT64_MAX;
	static int16_t x854 = 15388;
	volatile int64_t x856 = -7745LL;
	static int64_t t93 = INT64_MAX;

	t93 = (x853<<((x854/x855)/x856));

	if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x857 = 0U;
	int32_t x858 = 5954550;
	int64_t x859 = INT64_MAX;
	int32_t t94 = -187;

	t94 = (x857<<((x858/x859)/x860));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x873 = 255388800228426LL;
	static int16_t x874 = 2;
	uint64_t x875 = 5284LLU;
	volatile uint64_t x876 = UINT64_MAX;
	static volatile int64_t t95 = -263848025905LL;

	t95 = (x873<<((x874/x875)/x876));

	if (t95 != 255388800228426LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x877 = UINT8_MAX;
	int32_t x878 = -7485;
	int16_t x879 = -35;
	int32_t x880 = 9601404;
	int32_t t96 = -13919;

	t96 = (x877<<((x878/x879)/x880));

	if (t96 != 255) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x885 = 5480868U;
	int16_t x887 = -41;
	volatile int64_t x888 = -954346527676LL;
	uint32_t t97 = 87645U;

	t97 = (x885<<((x886/x887)/x888));

	if (t97 != 5480868U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x897 = 1;
	static int32_t x898 = -1;
	static uint32_t x900 = UINT32_MAX;
	volatile int32_t t98 = -757123;

	t98 = (x897<<((x898/x899)/x900));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x905 = 0;
	uint64_t x906 = 6263834284LLU;
	int32_t x907 = INT32_MAX;
	uint16_t x908 = 3995U;
	int32_t t99 = 1089;

	t99 = (x905<<((x906/x907)/x908));

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


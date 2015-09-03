#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x20 = -1;
volatile int64_t t0 = 7LL;
int16_t x32 = INT16_MAX;
uint16_t x44 = UINT16_MAX;
static int64_t x46 = -489141LL;
int8_t x47 = -22;
volatile uint16_t x48 = 1U;
static uint16_t x54 = UINT16_MAX;
static int8_t x59 = -1;
uint8_t x63 = 2U;
volatile uint16_t x64 = 3702U;
volatile int64_t t6 = 3499778785650609LL;
int64_t x67 = -695023376372490131LL;
static uint64_t t7 = 7099LLU;
int8_t x74 = -1;
uint32_t x80 = 2006544492U;
static uint8_t x89 = 0U;
uint64_t x94 = UINT64_MAX;
static int32_t x95 = INT32_MIN;
uint8_t x113 = UINT8_MAX;
int16_t x123 = -1;
volatile uint32_t t15 = 1966U;
static volatile uint8_t x126 = UINT8_MAX;
volatile int32_t t17 = -9;
int8_t x138 = -6;
int8_t x160 = -1;
uint64_t t19 = UINT64_MAX;
int64_t t20 = 80393LL;
uint32_t x174 = UINT32_MAX;
int32_t x185 = -1;
int8_t x186 = INT8_MAX;
int8_t x187 = -1;
volatile uint8_t x199 = 10U;
int16_t x210 = INT16_MAX;
volatile int64_t x212 = INT64_MIN;
int16_t x253 = INT16_MIN;
volatile int32_t x255 = -1;
int8_t x256 = 1;
int64_t x258 = INT64_MIN;
static volatile int8_t x267 = INT8_MIN;
int8_t x274 = INT8_MIN;
volatile int32_t t33 = 25547693;
int16_t x305 = 671;
uint32_t x307 = 31561816U;
uint32_t x308 = UINT32_MAX;
uint32_t t36 = UINT32_MAX;
int32_t x309 = -1;
int64_t x316 = INT64_MIN;
int16_t x319 = INT16_MIN;
uint64_t x323 = 2578895322428LLU;
int64_t x334 = -39LL;
static int64_t x340 = -32874256142511356LL;
int64_t t43 = -358849292619903695LL;
int64_t t44 = 29065LL;
int8_t x357 = INT8_MIN;
volatile int8_t x359 = -1;
int64_t t45 = -229788921LL;
static uint8_t x365 = 0U;
volatile int64_t t46 = INT64_MAX;
uint16_t x387 = 16U;
uint16_t x411 = 27U;
static uint64_t x413 = 1322341712128408LLU;
int16_t x414 = 34;
int8_t x415 = -1;
static int16_t x417 = INT16_MIN;
int8_t x419 = 3;
static int64_t x429 = -100560834515LL;
int32_t x430 = INT32_MIN;
uint8_t x432 = 35U;
volatile int64_t x437 = 1058LL;
uint8_t x461 = UINT8_MAX;
int32_t t56 = -83277042;
int8_t x465 = -1;
int64_t x468 = 3766193672360092440LL;
int8_t x478 = -1;
uint32_t t59 = 692U;
int8_t x483 = INT8_MIN;
int32_t t61 = -17192;
uint64_t t62 = 427546156LLU;
volatile int64_t t63 = -6055875867LL;
int16_t x510 = -1110;
int8_t x547 = -1;
uint64_t x552 = UINT64_MAX;
volatile int64_t t68 = 16557232131LL;
int16_t x562 = INT16_MIN;
int8_t x581 = INT8_MAX;
int64_t x584 = 31554LL;
uint32_t x623 = 49684320U;
volatile int64_t t74 = -465637LL;
volatile uint32_t t75 = 82U;
int8_t x634 = INT8_MIN;
uint64_t x637 = 233816232109LLU;
int64_t x640 = -849268308624LL;
static uint16_t x642 = 1122U;
int8_t x643 = INT8_MIN;
int64_t t79 = 0LL;
static uint64_t t80 = 4382998365134113905LLU;
int32_t x661 = INT32_MIN;
static int64_t x674 = INT64_MIN;
uint32_t x709 = 186705U;
int32_t x716 = 1;
volatile int64_t x718 = -1LL;
volatile int64_t x730 = 118025LL;
int16_t x733 = INT16_MIN;
int32_t x734 = -15184959;
volatile uint16_t x752 = UINT16_MAX;
int8_t x759 = INT8_MAX;
int64_t t95 = 154164575470LL;
uint64_t x771 = 4673056472950LLU;
volatile uint32_t t97 = 78746U;
int8_t x801 = INT8_MIN;
uint64_t t99 = 3616846068LLU;


void f0(void) {
	int64_t x17 = 31LL;
	volatile int32_t x18 = INT32_MAX;
	static int16_t x19 = -1;

	t0 = ((x17/(x18/x19))|x20);

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x29 = -1;
	volatile int8_t x30 = INT8_MIN;
	static int16_t x31 = -1;
	volatile int32_t t1 = 0;

	t1 = ((x29/(x30/x31))|x32);

	if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x41 = INT64_MIN;
	volatile int64_t x42 = -4255625810058687LL;
	volatile int64_t x43 = -60LL;
	volatile int64_t t2 = 9311LL;

	t2 = ((x41/(x42/x43))|x44);

	if (t2 != -65537LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x45 = 101439532U;
	int64_t t3 = 655241801LL;

	t3 = ((x45/(x46/x47))|x48);

	if (t3 != 4563LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x53 = INT32_MAX;
	static int8_t x55 = INT8_MIN;
	uint8_t x56 = 113U;
	int32_t t4 = 81219653;

	t4 = ((x53/(x54/x55))|x56);

	if (t4 != -4202511) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x57 = INT16_MIN;
	int64_t x58 = -920645720LL;
	int32_t x60 = 3;
	volatile int64_t t5 = 491654LL;

	t5 = ((x57/(x58/x59))|x60);

	if (t5 != 3LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x61 = INT64_MAX;
	int16_t x62 = 408;

	t6 = ((x61/(x62/x63))|x64);

	if (t6 != 45212608023801590LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x65 = 37493631LLU;
	uint64_t x66 = UINT64_MAX;
	uint8_t x68 = UINT8_MAX;

	t7 = ((x65/(x66/x67))|x68);

	if (t7 != 37493759LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x73 = INT8_MAX;
	int32_t x75 = 1;
	int8_t x76 = -1;
	int32_t t8 = -145284460;

	t8 = ((x73/(x74/x75))|x76);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x77 = INT8_MAX;
	volatile int8_t x78 = INT8_MAX;
	uint8_t x79 = 2U;
	uint32_t t9 = 1766U;

	t9 = ((x77/(x78/x79))|x80);

	if (t9 != 2006544494U) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x85 = 115607151729232683LLU;
	uint16_t x86 = 7032U;
	static int8_t x87 = INT8_MIN;
	uint64_t x88 = UINT64_MAX;
	volatile uint64_t t10 = UINT64_MAX;

	t10 = ((x85/(x86/x87))|x88);

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x90 = -121649LL;
	int16_t x91 = INT16_MIN;
	int16_t x92 = 898;
	volatile int64_t t11 = 7748708LL;

	t11 = ((x89/(x90/x91))|x92);

	if (t11 != 898LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x93 = 58LLU;
	int8_t x96 = INT8_MAX;
	volatile uint64_t t12 = 11580709LLU;

	t12 = ((x93/(x94/x95))|x96);

	if (t12 != 127LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x97 = INT16_MIN;
	int16_t x98 = INT16_MIN;
	uint64_t x99 = 4257790205301471243LLU;
	int64_t x100 = -42521734107390947LL;
	uint64_t t13 = 90937950758819LLU;

	t13 = ((x97/(x98/x99))|x100);

	if (t13 != 18446744073709550621LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x114 = INT16_MIN;
	static int32_t x115 = 1236;
	uint16_t x116 = 243U;
	static volatile int32_t t14 = -132536007;

	t14 = ((x113/(x114/x115))|x116);

	if (t14 != -9) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x121 = 130U;
	volatile uint16_t x122 = 1U;
	static volatile int32_t x124 = INT32_MIN;

	t15 = ((x121/(x122/x123))|x124);

	if (t15 != 2147483648U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x125 = 3349;
	int8_t x127 = INT8_MIN;
	volatile uint16_t x128 = 1592U;
	volatile int32_t t16 = -1;

	t16 = ((x125/(x126/x127))|x128);

	if (t16 != -2309) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x129 = INT16_MIN;
	static int16_t x130 = INT16_MIN;
	uint16_t x131 = 4832U;
	int16_t x132 = INT16_MIN;

	t17 = ((x129/(x130/x131))|x132);

	if (t17 != -27307) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x137 = 3U;
	static uint64_t x139 = 346LLU;
	static int64_t x140 = -84030LL;
	uint64_t t18 = 878185999929970377LLU;

	t18 = ((x137/(x138/x139))|x140);

	if (t18 != 18446744073709467586LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x157 = -5627927LL;
	uint64_t x158 = UINT64_MAX;
	int16_t x159 = INT16_MIN;

	t19 = ((x157/(x158/x159))|x160);

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x161 = -1LL;
	int8_t x162 = INT8_MIN;
	uint32_t x163 = 58U;
	int64_t x164 = -1LL;

	t20 = ((x161/(x162/x163))|x164);

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x173 = 2744908698932146165LLU;
	int32_t x175 = 885;
	volatile int64_t x176 = -9005278321001534LL;
	uint64_t t21 = 44125296028LLU;

	t21 = ((x173/(x174/x175))|x176);

	if (t21 != 18437738798341946338LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x177 = -1;
	volatile uint32_t x178 = 769396U;
	int64_t x179 = -1LL;
	static int64_t x180 = -6623521223754159LL;
	int64_t t22 = 3621LL;

	t22 = ((x177/(x178/x179))|x180);

	if (t22 != -6623521223754159LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x181 = UINT32_MAX;
	static uint64_t x182 = UINT64_MAX;
	uint16_t x183 = UINT16_MAX;
	static int8_t x184 = 1;
	volatile uint64_t t23 = 759LLU;

	t23 = ((x181/(x182/x183))|x184);

	if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x188 = 347;
	int32_t t24 = -1;

	t24 = ((x185/(x186/x187))|x188);

	if (t24 != 347) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x189 = -1;
	static int64_t x190 = INT64_MIN;
	uint32_t x191 = 73U;
	static volatile int16_t x192 = -497;
	volatile int64_t t25 = -761505761458266LL;

	t25 = ((x189/(x190/x191))|x192);

	if (t25 != -497LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x193 = UINT32_MAX;
	static int32_t x194 = -1;
	uint32_t x195 = UINT32_MAX;
	int16_t x196 = -1;
	volatile uint32_t t26 = UINT32_MAX;

	t26 = ((x193/(x194/x195))|x196);

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x197 = 67013183U;
	uint64_t x198 = 84356484LLU;
	int8_t x200 = INT8_MIN;
	uint64_t t27 = 1574775262471582LLU;

	t27 = ((x197/(x198/x199))|x200);

	if (t27 != 18446744073709551495LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x209 = UINT64_MAX;
	volatile uint8_t x211 = 23U;
	uint64_t t28 = 232910870554LLU;

	t28 = ((x209/(x210/x211))|x212);

	if (t28 != 9236326211063841504LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x229 = INT64_MIN;
	uint32_t x230 = 713543U;
	uint8_t x231 = UINT8_MAX;
	uint64_t x232 = UINT64_MAX;
	static volatile uint64_t t29 = UINT64_MAX;

	t29 = ((x229/(x230/x231))|x232);

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x254 = INT8_MIN;
	volatile int32_t t30 = -1883482;

	t30 = ((x253/(x254/x255))|x256);

	if (t30 != -255) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x257 = INT32_MIN;
	static volatile uint16_t x259 = 22746U;
	uint8_t x260 = 1U;
	volatile int64_t t31 = -201694170LL;

	t31 = ((x257/(x258/x259))|x260);

	if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x265 = UINT64_MAX;
	static int32_t x266 = 1869;
	uint32_t x268 = 618618231U;
	volatile uint64_t t32 = 236189168LLU;

	t32 = ((x265/(x266/x267))|x268);

	if (t32 != 618618231LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x273 = INT16_MAX;
	int32_t x275 = -1;
	int8_t x276 = 1;

	t33 = ((x273/(x274/x275))|x276);

	if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x289 = INT16_MAX;
	volatile uint64_t x290 = UINT64_MAX;
	static int32_t x291 = INT32_MAX;
	static uint8_t x292 = UINT8_MAX;
	static volatile uint64_t t34 = 2179LLU;

	t34 = ((x289/(x290/x291))|x292);

	if (t34 != 255LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x297 = INT8_MAX;
	int16_t x298 = -1;
	uint64_t x299 = 5LLU;
	int64_t x300 = -143089793345894LL;
	uint64_t t35 = 3446621007906350LLU;

	t35 = ((x297/(x298/x299))|x300);

	if (t35 != 18446600983916205722LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x306 = INT32_MIN;

	t36 = ((x305/(x306/x307))|x308);

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x310 = INT64_MIN;
	uint64_t x311 = 77LLU;
	uint8_t x312 = 1U;
	volatile uint64_t t37 = 0LLU;

	t37 = ((x309/(x310/x311))|x312);

	if (t37 != 155LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint16_t x313 = 16U;
	uint64_t x314 = UINT64_MAX;
	volatile int8_t x315 = INT8_MIN;
	static volatile uint64_t t38 = 711388LLU;

	t38 = ((x313/(x314/x315))|x316);

	if (t38 != 9223372036854775824LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x317 = 73694724;
	int32_t x318 = INT32_MIN;
	uint32_t x320 = 5U;
	static uint32_t t39 = 0U;

	t39 = ((x317/(x318/x319))|x320);

	if (t39 != 1125U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x321 = INT32_MAX;
	int32_t x322 = INT32_MIN;
	int16_t x324 = 3;
	static volatile uint64_t t40 = 528291211588151LLU;

	t40 = ((x321/(x322/x323))|x324);

	if (t40 != 303LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x329 = 739026889;
	int16_t x330 = -2;
	uint32_t x331 = 825203149U;
	volatile int8_t x332 = INT8_MAX;
	uint32_t t41 = 26505988U;

	t41 = ((x329/(x330/x331))|x332);

	if (t41 != 147805439U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x333 = 13194520U;
	static uint64_t x335 = 74642848LLU;
	volatile int32_t x336 = INT32_MIN;
	uint64_t t42 = 6200198621LLU;

	t42 = ((x333/(x334/x335))|x336);

	if (t42 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x337 = INT32_MIN;
	int8_t x338 = INT8_MIN;
	int64_t x339 = -1LL;

	t43 = ((x337/(x338/x339))|x340);

	if (t43 != -10562812LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x345 = INT64_MIN;
	int8_t x346 = INT8_MIN;
	static int8_t x347 = 2;
	int8_t x348 = INT8_MAX;

	t44 = ((x345/(x346/x347))|x348);

	if (t44 != 144115188075855999LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x358 = -1;
	int64_t x360 = -103990484666753LL;

	t45 = ((x357/(x358/x359))|x360);

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x366 = INT32_MIN;
	int16_t x367 = INT16_MAX;
	volatile int64_t x368 = INT64_MAX;

	t46 = ((x365/(x366/x367))|x368);

	if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x373 = 23632;
	int16_t x374 = -11919;
	int16_t x375 = -1;
	int64_t x376 = 12901495788408865LL;
	static volatile int64_t t47 = -1328LL;

	t47 = ((x373/(x374/x375))|x376);

	if (t47 != 12901495788408865LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x385 = -33;
	int32_t x386 = INT32_MIN;
	volatile int64_t x388 = 5976599LL;
	int64_t t48 = -206063351363LL;

	t48 = ((x385/(x386/x387))|x388);

	if (t48 != 5976599LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x397 = -1;
	int16_t x398 = INT16_MIN;
	volatile uint16_t x399 = 437U;
	static volatile uint16_t x400 = 100U;
	static int32_t t49 = -94946;

	t49 = ((x397/(x398/x399))|x400);

	if (t49 != 100) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x409 = 1339723416178LL;
	int16_t x410 = INT16_MIN;
	int32_t x412 = INT32_MAX;
	static int64_t t50 = -13LL;

	t50 = ((x409/(x410/x411))|x412);

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x416 = UINT8_MAX;
	uint64_t t51 = 17080690332LLU;

	t51 = ((x413/(x414/x415))|x416);

	if (t51 != 255LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x418 = 10U;
	volatile int32_t x420 = INT32_MIN;
	int32_t t52 = 44518490;

	t52 = ((x417/(x418/x419))|x420);

	if (t52 != -10922) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x431 = 22LLU;
	static volatile uint64_t t53 = 231294LLU;

	t53 = ((x429/(x430/x431))|x432);

	if (t53 != 55LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x438 = INT16_MIN;
	uint8_t x439 = 47U;
	uint32_t x440 = 0U;
	int64_t t54 = -885344932718769LL;

	t54 = ((x437/(x438/x439))|x440);

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x441 = 0;
	int64_t x442 = -854284316036908618LL;
	volatile int16_t x443 = INT16_MIN;
	uint8_t x444 = 57U;
	int64_t t55 = 3LL;

	t55 = ((x441/(x442/x443))|x444);

	if (t55 != 57LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x462 = INT16_MIN;
	int8_t x463 = 7;
	int32_t x464 = -1;

	t56 = ((x461/(x462/x463))|x464);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x466 = -1;
	uint64_t x467 = UINT64_MAX;
	volatile uint64_t t57 = UINT64_MAX;

	t57 = ((x465/(x466/x467))|x468);

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x473 = -61127941LL;
	static int64_t x474 = INT64_MIN;
	static volatile uint8_t x475 = UINT8_MAX;
	static int8_t x476 = 53;
	static volatile int64_t t58 = -959682056647LL;

	t58 = ((x473/(x474/x475))|x476);

	if (t58 != 53LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x477 = 0U;
	static volatile uint32_t x479 = 26U;
	static int8_t x480 = -35;

	t59 = ((x477/(x478/x479))|x480);

	if (t59 != 4294967261U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x481 = -1;
	int16_t x482 = -1533;
	static int32_t x484 = -1;
	volatile int32_t t60 = -140110;

	t60 = ((x481/(x482/x483))|x484);

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x485 = 31586U;
	volatile int16_t x486 = -15634;
	uint8_t x487 = 75U;
	int32_t x488 = 21833;

	t61 = ((x485/(x486/x487))|x488);

	if (t61 != -151) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x489 = -1;
	volatile uint64_t x490 = UINT64_MAX;
	static int16_t x491 = 2705;
	volatile uint32_t x492 = 2U;

	t62 = ((x489/(x490/x491))|x492);

	if (t62 != 2707LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x497 = -622397210937LL;
	int8_t x498 = INT8_MAX;
	int8_t x499 = INT8_MAX;
	int8_t x500 = -1;

	t63 = ((x497/(x498/x499))|x500);

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x509 = INT32_MIN;
	volatile int8_t x511 = INT8_MIN;
	static uint64_t x512 = UINT64_MAX;
	uint64_t t64 = UINT64_MAX;

	t64 = ((x509/(x510/x511))|x512);

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x529 = INT32_MIN;
	int16_t x530 = INT16_MIN;
	volatile int32_t x531 = 215;
	volatile int64_t x532 = 956915805859552LL;
	int64_t t65 = -238581924LL;

	t65 = ((x529/(x530/x531))|x532);

	if (t65 != 956915810549493LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x545 = INT8_MIN;
	int64_t x546 = INT64_MAX;
	uint32_t x548 = 63U;
	int64_t t66 = 31977523628464128LL;

	t66 = ((x545/(x546/x547))|x548);

	if (t66 != 63LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x549 = -1;
	int32_t x550 = INT32_MIN;
	static int16_t x551 = -10855;
	volatile uint64_t t67 = UINT64_MAX;

	t67 = ((x549/(x550/x551))|x552);

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x553 = -1;
	volatile int64_t x554 = -714468103LL;
	static int16_t x555 = -86;
	static volatile int32_t x556 = INT32_MIN;

	t68 = ((x553/(x554/x555))|x556);

	if (t68 != -2147483648LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x557 = UINT8_MAX;
	static int16_t x558 = -1;
	uint32_t x559 = 1874U;
	static volatile int32_t x560 = INT32_MAX;
	static uint32_t t69 = 894060777U;

	t69 = ((x557/(x558/x559))|x560);

	if (t69 != 2147483647U) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x561 = UINT16_MAX;
	int16_t x563 = -1;
	static int32_t x564 = -1;
	volatile int32_t t70 = -87255349;

	t70 = ((x561/(x562/x563))|x564);

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x582 = -451;
	static int8_t x583 = INT8_MIN;
	volatile int64_t t71 = -4LL;

	t71 = ((x581/(x582/x583))|x584);

	if (t71 != 31594LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x597 = INT8_MIN;
	int64_t x598 = INT64_MAX;
	static volatile int16_t x599 = 1;
	volatile uint8_t x600 = 16U;
	static volatile int64_t t72 = -2661798303347378LL;

	t72 = ((x597/(x598/x599))|x600);

	if (t72 != 16LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x613 = INT64_MAX;
	int32_t x614 = -1;
	volatile int32_t x615 = -1;
	uint16_t x616 = 3439U;
	volatile int64_t t73 = INT64_MAX;

	t73 = ((x613/(x614/x615))|x616);

	if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x621 = 2112674235LL;
	static int16_t x622 = -6585;
	int8_t x624 = INT8_MIN;

	t74 = ((x621/(x622/x623))|x624);

	if (t74 != -37LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x625 = INT16_MAX;
	uint8_t x626 = UINT8_MAX;
	int8_t x627 = 1;
	static uint32_t x628 = 8U;

	t75 = ((x625/(x626/x627))|x628);

	if (t75 != 136U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x629 = INT16_MAX;
	int8_t x630 = INT8_MIN;
	uint64_t x631 = 11824026003LLU;
	uint32_t x632 = 12426U;
	uint64_t t76 = 387674389LLU;

	t76 = ((x629/(x630/x631))|x632);

	if (t76 != 12426LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x633 = UINT64_MAX;
	volatile uint32_t x635 = 123101490U;
	uint64_t x636 = 3295845032LLU;
	uint64_t t77 = 3LLU;

	t77 = ((x633/(x634/x635))|x636);

	if (t77 != 542551297366663087LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x638 = INT16_MIN;
	uint8_t x639 = UINT8_MAX;
	volatile uint64_t t78 = 1988532LLU;

	t78 = ((x637/(x638/x639))|x640);

	if (t78 != 18446743224441242992LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x641 = 3084074LL;
	static int8_t x644 = -1;

	t79 = ((x641/(x642/x643))|x644);

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x653 = -1;
	volatile int64_t x654 = INT64_MIN;
	uint64_t x655 = 984049905099085LLU;
	int16_t x656 = INT16_MAX;

	t80 = ((x653/(x654/x655))|x656);

	if (t80 != 1968282551615487LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x662 = -1515265924869883LL;
	volatile uint16_t x663 = UINT16_MAX;
	static volatile int32_t x664 = INT32_MIN;
	volatile int64_t t81 = 22443671336366253LL;

	t81 = ((x661/(x662/x663))|x664);

	if (t81 != -2147483648LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x673 = INT32_MAX;
	int32_t x675 = INT32_MIN;
	int32_t x676 = INT32_MIN;
	volatile int64_t t82 = 0LL;

	t82 = ((x673/(x674/x675))|x676);

	if (t82 != -2147483648LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x685 = INT32_MIN;
	int64_t x686 = 46489341530995999LL;
	static int32_t x687 = 1;
	uint8_t x688 = UINT8_MAX;
	int64_t t83 = 3174322628734LL;

	t83 = ((x685/(x686/x687))|x688);

	if (t83 != 255LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x701 = INT16_MIN;
	int16_t x702 = INT16_MIN;
	uint16_t x703 = 15U;
	uint64_t x704 = 14501185266097LLU;
	volatile uint64_t t84 = 364476990LLU;

	t84 = ((x701/(x702/x703))|x704);

	if (t84 != 14501185266111LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x710 = 359221U;
	static int64_t x711 = -126LL;
	uint16_t x712 = UINT16_MAX;
	volatile int64_t t85 = -1621108414LL;

	t85 = ((x709/(x710/x711))|x712);

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x713 = -1;
	static int32_t x714 = INT32_MAX;
	volatile int16_t x715 = INT16_MIN;
	volatile int32_t t86 = -1;

	t86 = ((x713/(x714/x715))|x716);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x717 = INT32_MAX;
	int16_t x719 = -1;
	int16_t x720 = 8972;
	volatile int64_t t87 = 3041163098821467LL;

	t87 = ((x717/(x718/x719))|x720);

	if (t87 != 2147483647LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x725 = -1421;
	int16_t x726 = INT16_MIN;
	int8_t x727 = INT8_MIN;
	volatile int32_t x728 = -1;
	static int32_t t88 = 146;

	t88 = ((x725/(x726/x727))|x728);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x729 = 30U;
	uint16_t x731 = 18U;
	int8_t x732 = INT8_MIN;
	int64_t t89 = -70315648836838LL;

	t89 = ((x729/(x730/x731))|x732);

	if (t89 != -128LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x735 = 10U;
	static uint16_t x736 = UINT16_MAX;
	volatile uint32_t t90 = 892039479U;

	t90 = ((x733/(x734/x735))|x736);

	if (t90 != 65535U) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int16_t x741 = INT16_MAX;
	int16_t x742 = -320;
	uint64_t x743 = 1495773822230681LLU;
	int64_t x744 = INT64_MIN;
	volatile uint64_t t91 = 92543345452216LLU;

	t91 = ((x741/(x742/x743))|x744);

	if (t91 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x745 = 7;
	int16_t x746 = INT16_MIN;
	int16_t x747 = INT16_MAX;
	volatile uint32_t x748 = UINT32_MAX;
	uint32_t t92 = UINT32_MAX;

	t92 = ((x745/(x746/x747))|x748);

	if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x749 = INT32_MIN;
	int32_t x750 = INT32_MIN;
	static uint16_t x751 = 203U;
	int32_t t93 = -327903;

	t93 = ((x749/(x750/x751))|x752);

	if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x753 = 27430U;
	int8_t x754 = INT8_MIN;
	int8_t x755 = INT8_MIN;
	int32_t x756 = -64941;
	int32_t t94 = 99439;

	t94 = ((x753/(x754/x755))|x756);

	if (t94 != -38025) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x757 = INT64_MIN;
	int32_t x758 = INT32_MIN;
	static int8_t x760 = INT8_MAX;

	t95 = ((x757/(x758/x759))|x760);

	if (t95 != 545460848639LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x769 = 2445U;
	int32_t x770 = INT32_MIN;
	static int64_t x772 = INT64_MAX;
	uint64_t t96 = 3766437LLU;

	t96 = ((x769/(x770/x771))|x772);

	if (t96 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x777 = 0U;
	uint32_t x778 = UINT32_MAX;
	int16_t x779 = INT16_MIN;
	volatile int16_t x780 = INT16_MIN;

	t97 = ((x777/(x778/x779))|x780);

	if (t97 != 4294934528U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x797 = INT32_MAX;
	int64_t x798 = INT64_MIN;
	uint16_t x799 = 35U;
	uint32_t x800 = 42U;
	static volatile int64_t t98 = 19435LL;

	t98 = ((x797/(x798/x799))|x800);

	if (t98 != 42LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x802 = UINT64_MAX;
	uint32_t x803 = 2072U;
	volatile uint32_t x804 = UINT32_MAX;

	t99 = ((x801/(x802/x803))|x804);

	if (t99 != 4294967295LLU) { NG(); } else { ; }
	
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


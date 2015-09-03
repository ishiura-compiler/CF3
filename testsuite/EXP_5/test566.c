#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = INT16_MIN;
int16_t x12 = INT16_MIN;
static uint32_t x26 = 2U;
uint64_t x27 = UINT64_MAX;
volatile uint16_t x43 = UINT16_MAX;
int64_t x69 = 4180129970776998LL;
int16_t x87 = INT16_MAX;
int32_t x114 = INT32_MAX;
uint64_t x115 = UINT64_MAX;
volatile uint64_t t12 = 996742252LLU;
volatile uint8_t x158 = UINT8_MAX;
static uint16_t x171 = 1437U;
uint8_t x172 = 112U;
uint64_t x200 = 16634LLU;
uint64_t x225 = 7283483462LLU;
static int8_t x226 = -1;
volatile uint64_t x228 = 823571049079LLU;
int64_t x245 = 487578044587LL;
int8_t x247 = INT8_MIN;
volatile uint16_t x277 = 322U;
volatile int8_t x278 = INT8_MIN;
uint64_t x291 = UINT64_MAX;
volatile int32_t x292 = 11667;
int64_t x315 = -125223501LL;
uint16_t x321 = 4039U;
static int64_t x322 = -4066324117026742LL;
int16_t x323 = INT16_MIN;
uint32_t x329 = 4U;
int16_t x334 = INT16_MAX;
volatile uint32_t x345 = UINT32_MAX;
int32_t x348 = INT32_MIN;
int16_t x349 = INT16_MAX;
uint32_t x353 = 1334U;
int32_t x361 = INT32_MAX;
uint32_t x393 = 454246U;
int32_t t37 = -713745;
static volatile int64_t t39 = -4085592711164602260LL;
int32_t t40 = -1;
static int64_t x413 = INT64_MAX;
static int8_t x415 = INT8_MAX;
volatile int32_t t42 = -1816460;
int8_t x425 = 0;
uint16_t x427 = 8562U;
uint32_t x433 = UINT32_MAX;
int16_t x462 = -9073;
static int32_t x475 = 98476742;
int8_t x482 = -1;
volatile uint8_t x505 = 20U;
uint32_t x508 = UINT32_MAX;
int8_t x528 = INT8_MIN;
volatile uint64_t x538 = 45552LLU;
static int32_t x540 = -1;
volatile uint8_t x554 = 53U;
int16_t x586 = INT16_MAX;
int16_t x587 = INT16_MIN;
int32_t x599 = INT32_MIN;
uint32_t x604 = UINT32_MAX;
int8_t x605 = INT8_MAX;
int8_t x606 = -1;
volatile int32_t t61 = 115354970;
int64_t x619 = -842082111LL;
volatile int32_t t62 = -659648242;
int8_t x626 = INT8_MAX;
uint8_t x637 = 0U;
static volatile int32_t t65 = -15616630;
volatile int8_t x658 = 12;
static uint32_t x667 = 522075743U;
int32_t x680 = INT32_MAX;
int32_t x686 = -1;
int32_t t71 = 32;
int16_t x697 = 57;
volatile int32_t t72 = -817711998;
uint16_t x705 = 217U;
uint8_t x735 = 22U;
int32_t x740 = INT32_MIN;
static volatile uint64_t t75 = 37LLU;
int64_t x750 = INT64_MIN;
volatile int32_t t77 = 1;
uint64_t x773 = 29077139971742573LLU;
int32_t x782 = INT32_MIN;
int8_t x784 = INT8_MAX;
int32_t t81 = 61;
int32_t x810 = INT32_MIN;
static int64_t x811 = INT64_MIN;
static uint32_t x812 = 23174025U;
int64_t x839 = INT64_MIN;
int8_t x850 = 7;
volatile uint64_t x853 = UINT64_MAX;
volatile int32_t x854 = -1;
uint64_t t88 = UINT64_MAX;
volatile int32_t t89 = INT32_MAX;
uint16_t x889 = 130U;
uint16_t x890 = 2U;
volatile int32_t t93 = -5179;
static volatile uint64_t x917 = UINT64_MAX;
volatile uint64_t t95 = UINT64_MAX;
uint8_t x955 = UINT8_MAX;
int32_t t98 = -5611033;


void f0(void) {
	static uint16_t x1 = UINT16_MAX;
	uint64_t x2 = 462915LLU;
	int32_t x4 = -445;
	volatile int32_t t0 = -217311593;

	t0 = (x1>>((x2/x3)%x4));

	if (t0 != 65535) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint16_t x5 = 1U;
	int8_t x6 = 1;
	uint64_t x7 = UINT64_MAX;
	uint32_t x8 = UINT32_MAX;
	volatile int32_t t1 = 68289;

	t1 = (x5>>((x6/x7)%x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	static int32_t x10 = -181;
	static int64_t x11 = INT64_MIN;
	int32_t t2 = 916251719;

	t2 = (x9>>((x10/x11)%x12));

	if (t2 != 255) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 0;
	static volatile uint8_t x14 = UINT8_MAX;
	int32_t x15 = INT32_MIN;
	int32_t x16 = 437678600;
	int32_t t3 = -5461064;

	t3 = (x13>>((x14/x15)%x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = INT16_MAX;
	uint8_t x28 = UINT8_MAX;
	volatile int32_t t4 = 30;

	t4 = (x25>>((x26/x27)%x28));

	if (t4 != 32767) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = INT8_MAX;
	int64_t x30 = 99413088309LL;
	static int64_t x31 = -34024984515040LL;
	uint8_t x32 = 24U;
	int32_t t5 = -22;

	t5 = (x29>>((x30/x31)%x32));

	if (t5 != 127) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x41 = INT8_MAX;
	uint8_t x42 = 1U;
	int16_t x44 = -2;
	volatile int32_t t6 = 1;

	t6 = (x41>>((x42/x43)%x44));

	if (t6 != 127) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint64_t x57 = 1264282294872966420LLU;
	int16_t x58 = INT16_MIN;
	int64_t x59 = INT64_MIN;
	int64_t x60 = INT64_MIN;
	volatile uint64_t t7 = 20234415LLU;

	t7 = (x57>>((x58/x59)%x60));

	if (t7 != 1264282294872966420LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x70 = UINT32_MAX;
	int8_t x71 = -1;
	int16_t x72 = INT16_MAX;
	static int64_t t8 = 395715573776608694LL;

	t8 = (x69>>((x70/x71)%x72));

	if (t8 != 2090064985388499LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x81 = UINT32_MAX;
	static uint8_t x82 = 8U;
	int32_t x83 = 99094;
	static int8_t x84 = 5;
	uint32_t t9 = UINT32_MAX;

	t9 = (x81>>((x82/x83)%x84));

	if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x85 = 13935U;
	static uint8_t x86 = UINT8_MAX;
	int32_t x88 = -1;
	volatile uint32_t t10 = 7169U;

	t10 = (x85>>((x86/x87)%x88));

	if (t10 != 13935U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x113 = INT16_MAX;
	int64_t x116 = -1LL;
	volatile int32_t t11 = 235524736;

	t11 = (x113>>((x114/x115)%x116));

	if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x133 = 288LLU;
	int32_t x134 = INT32_MAX;
	volatile int8_t x135 = INT8_MIN;
	static int8_t x136 = 15;

	t12 = (x133>>((x134/x135)%x136));

	if (t12 != 288LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x157 = INT64_MAX;
	static int64_t x159 = INT64_MIN;
	uint8_t x160 = UINT8_MAX;
	volatile int64_t t13 = INT64_MAX;

	t13 = (x157>>((x158/x159)%x160));

	if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x169 = UINT64_MAX;
	uint16_t x170 = 1U;
	volatile uint64_t t14 = UINT64_MAX;

	t14 = (x169>>((x170/x171)%x172));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x197 = 2386129616982909686LL;
	static int32_t x198 = 8;
	int32_t x199 = -871;
	volatile int64_t t15 = -247175LL;

	t15 = (x197>>((x198/x199)%x200));

	if (t15 != 2386129616982909686LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x205 = 9613;
	int16_t x206 = -1;
	int32_t x207 = INT32_MAX;
	int16_t x208 = INT16_MIN;
	volatile int32_t t16 = 88374319;

	t16 = (x205>>((x206/x207)%x208));

	if (t16 != 9613) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x209 = UINT16_MAX;
	uint32_t x210 = 13882621U;
	int16_t x211 = -1;
	uint16_t x212 = 9516U;
	static int32_t t17 = -1;

	t17 = (x209>>((x210/x211)%x212));

	if (t17 != 65535) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x227 = INT8_MAX;
	volatile uint64_t t18 = 1254218823108LLU;

	t18 = (x225>>((x226/x227)%x228));

	if (t18 != 7283483462LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x229 = 2U;
	volatile int16_t x230 = INT16_MIN;
	static int8_t x231 = INT8_MAX;
	static int8_t x232 = -1;
	int32_t t19 = -1;

	t19 = (x229>>((x230/x231)%x232));

	if (t19 != 2) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x246 = INT32_MAX;
	int8_t x248 = -1;
	int64_t t20 = 1195184LL;

	t20 = (x245>>((x246/x247)%x248));

	if (t20 != 487578044587LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x279 = 1395U;
	static int16_t x280 = -3345;
	volatile int32_t t21 = -14756849;

	t21 = (x277>>((x278/x279)%x280));

	if (t21 != 322) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x281 = 103564414418LL;
	int16_t x282 = INT16_MIN;
	uint8_t x283 = 3U;
	volatile int32_t x284 = -2;
	volatile int64_t t22 = 3050LL;

	t22 = (x281>>((x282/x283)%x284));

	if (t22 != 103564414418LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x289 = INT8_MAX;
	uint64_t x290 = UINT64_MAX;
	volatile int32_t t23 = -7342;

	t23 = (x289>>((x290/x291)%x292));

	if (t23 != 63) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x305 = 93U;
	static uint16_t x306 = 59U;
	int32_t x307 = INT32_MIN;
	int64_t x308 = INT64_MIN;
	volatile int32_t t24 = 12;

	t24 = (x305>>((x306/x307)%x308));

	if (t24 != 93) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x313 = 1U;
	uint32_t x314 = 519720U;
	int32_t x316 = INT32_MAX;
	int32_t t25 = -360;

	t25 = (x313>>((x314/x315)%x316));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x324 = INT8_MIN;
	int32_t t26 = -264;

	t26 = (x321>>((x322/x323)%x324));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x325 = UINT64_MAX;
	int8_t x326 = -1;
	volatile uint8_t x327 = 5U;
	volatile uint16_t x328 = UINT16_MAX;
	volatile uint64_t t27 = UINT64_MAX;

	t27 = (x325>>((x326/x327)%x328));

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x330 = 836389930LLU;
	uint32_t x331 = UINT32_MAX;
	static volatile int16_t x332 = INT16_MAX;
	uint32_t t28 = 2354U;

	t28 = (x329>>((x330/x331)%x332));

	if (t28 != 4U) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x333 = 250U;
	int64_t x335 = INT64_MIN;
	uint32_t x336 = UINT32_MAX;
	volatile int32_t t29 = -1599;

	t29 = (x333>>((x334/x335)%x336));

	if (t29 != 250) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x346 = 117126719U;
	int8_t x347 = INT8_MIN;
	uint32_t t30 = UINT32_MAX;

	t30 = (x345>>((x346/x347)%x348));

	if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x350 = 210104877U;
	int64_t x351 = INT64_MIN;
	int8_t x352 = 3;
	int32_t t31 = -85584;

	t31 = (x349>>((x350/x351)%x352));

	if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x354 = 670U;
	uint8_t x355 = UINT8_MAX;
	volatile int16_t x356 = INT16_MIN;
	volatile uint32_t t32 = 7722489U;

	t32 = (x353>>((x354/x355)%x356));

	if (t32 != 333U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x357 = 2858015593859081LL;
	volatile int8_t x358 = 5;
	int8_t x359 = INT8_MIN;
	int16_t x360 = INT16_MAX;
	int64_t t33 = 7075157753LL;

	t33 = (x357>>((x358/x359)%x360));

	if (t33 != 2858015593859081LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x362 = -1;
	int32_t x363 = -197224;
	uint64_t x364 = 3051300847874LLU;
	volatile int32_t t34 = INT32_MAX;

	t34 = (x361>>((x362/x363)%x364));

	if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x369 = 50227064U;
	volatile uint8_t x370 = 6U;
	static int8_t x371 = INT8_MIN;
	volatile int16_t x372 = INT16_MAX;
	volatile uint32_t t35 = 20219U;

	t35 = (x369>>((x370/x371)%x372));

	if (t35 != 50227064U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x394 = 1507;
	static int64_t x395 = INT64_MIN;
	static int8_t x396 = INT8_MAX;
	volatile uint32_t t36 = 1943U;

	t36 = (x393>>((x394/x395)%x396));

	if (t36 != 454246U) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x397 = 1861U;
	int8_t x398 = 1;
	uint16_t x399 = 385U;
	static uint32_t x400 = UINT32_MAX;

	t37 = (x397>>((x398/x399)%x400));

	if (t37 != 1861) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x401 = INT64_MAX;
	volatile int16_t x402 = 1635;
	int32_t x403 = -515220;
	static int16_t x404 = 145;
	volatile int64_t t38 = INT64_MAX;

	t38 = (x401>>((x402/x403)%x404));

	if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x405 = 839578909153230LL;
	uint64_t x406 = UINT64_MAX;
	volatile int64_t x407 = -3449725333543929LL;
	uint8_t x408 = UINT8_MAX;

	t39 = (x405>>((x406/x407)%x408));

	if (t39 != 419789454576615LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x409 = 12U;
	volatile uint32_t x410 = 35589U;
	static volatile int32_t x411 = INT32_MIN;
	volatile int8_t x412 = INT8_MAX;

	t40 = (x409>>((x410/x411)%x412));

	if (t40 != 12) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x414 = 17;
	volatile int16_t x416 = -22;
	int64_t t41 = INT64_MAX;

	t41 = (x413>>((x414/x415)%x416));

	if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x421 = 3101;
	int16_t x422 = 0;
	volatile int64_t x423 = INT64_MIN;
	int8_t x424 = INT8_MAX;

	t42 = (x421>>((x422/x423)%x424));

	if (t42 != 3101) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x426 = 273U;
	int8_t x428 = INT8_MAX;
	volatile int32_t t43 = 3834;

	t43 = (x425>>((x426/x427)%x428));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x434 = 371288U;
	int8_t x435 = INT8_MIN;
	volatile int16_t x436 = 1;
	static uint32_t t44 = UINT32_MAX;

	t44 = (x433>>((x434/x435)%x436));

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x445 = INT16_MAX;
	uint8_t x446 = 0U;
	int64_t x447 = INT64_MIN;
	static uint32_t x448 = UINT32_MAX;
	int32_t t45 = 103655;

	t45 = (x445>>((x446/x447)%x448));

	if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x449 = 10;
	static volatile int16_t x450 = -12076;
	uint32_t x451 = 27898U;
	volatile uint8_t x452 = 14U;
	volatile int32_t t46 = 961350;

	t46 = (x449>>((x450/x451)%x452));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int16_t x461 = 43;
	volatile int64_t x463 = -35582559895445836LL;
	int16_t x464 = INT16_MAX;
	int32_t t47 = -1566674;

	t47 = (x461>>((x462/x463)%x464));

	if (t47 != 43) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x473 = INT64_MAX;
	uint32_t x474 = 1068923868U;
	int16_t x476 = INT16_MAX;
	volatile int64_t t48 = -132651894761704617LL;

	t48 = (x473>>((x474/x475)%x476));

	if (t48 != 9007199254740991LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x481 = 8U;
	int64_t x483 = -1LL;
	volatile uint8_t x484 = 58U;
	volatile int32_t t49 = -1356023;

	t49 = (x481>>((x482/x483)%x484));

	if (t49 != 4) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x506 = 159723U;
	int64_t x507 = INT64_MIN;
	static volatile int32_t t50 = -389768873;

	t50 = (x505>>((x506/x507)%x508));

	if (t50 != 20) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int64_t x525 = 420659967302617216LL;
	volatile int64_t x526 = -1LL;
	uint32_t x527 = UINT32_MAX;
	volatile int64_t t51 = -175387674LL;

	t51 = (x525>>((x526/x527)%x528));

	if (t51 != 420659967302617216LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x537 = 0U;
	static int32_t x539 = INT32_MAX;
	static int32_t t52 = -1862486;

	t52 = (x537>>((x538/x539)%x540));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x545 = 0U;
	volatile int16_t x546 = 1521;
	volatile int16_t x547 = INT16_MIN;
	int32_t x548 = -1;
	volatile uint32_t t53 = 7502U;

	t53 = (x545>>((x546/x547)%x548));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x553 = 8U;
	int32_t x555 = INT32_MIN;
	volatile int8_t x556 = INT8_MIN;
	volatile uint32_t t54 = 514640U;

	t54 = (x553>>((x554/x555)%x556));

	if (t54 != 8U) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x581 = 2;
	int64_t x582 = 6765812056LL;
	volatile int8_t x583 = INT8_MIN;
	int16_t x584 = 1;
	int32_t t55 = -5879900;

	t55 = (x581>>((x582/x583)%x584));

	if (t55 != 2) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x585 = 3U;
	volatile int32_t x588 = -1;
	volatile int32_t t56 = 240;

	t56 = (x585>>((x586/x587)%x588));

	if (t56 != 3) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x589 = 0U;
	int16_t x590 = 5;
	int8_t x591 = INT8_MIN;
	int64_t x592 = 577153995235LL;
	volatile int32_t t57 = -937993;

	t57 = (x589>>((x590/x591)%x592));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x597 = 0U;
	int16_t x598 = INT16_MIN;
	int8_t x600 = INT8_MIN;
	volatile uint32_t t58 = 15478724U;

	t58 = (x597>>((x598/x599)%x600));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x601 = 2400783205LL;
	int16_t x602 = INT16_MIN;
	volatile int32_t x603 = INT32_MAX;
	static volatile int64_t t59 = 2593038934560LL;

	t59 = (x601>>((x602/x603)%x604));

	if (t59 != 2400783205LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x607 = INT8_MAX;
	int32_t x608 = INT32_MIN;
	volatile int32_t t60 = -54;

	t60 = (x605>>((x606/x607)%x608));

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x613 = UINT16_MAX;
	static volatile uint16_t x614 = UINT16_MAX;
	int16_t x615 = INT16_MIN;
	int64_t x616 = -1LL;

	t61 = (x613>>((x614/x615)%x616));

	if (t61 != 65535) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x617 = 4U;
	int16_t x618 = INT16_MAX;
	static uint16_t x620 = UINT16_MAX;

	t62 = (x617>>((x618/x619)%x620));

	if (t62 != 4) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x621 = 21;
	int8_t x622 = INT8_MAX;
	static volatile int8_t x623 = INT8_MIN;
	uint32_t x624 = UINT32_MAX;
	int32_t t63 = 11977276;

	t63 = (x621>>((x622/x623)%x624));

	if (t63 != 21) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x625 = 0;
	volatile int8_t x627 = INT8_MIN;
	int8_t x628 = -2;
	static int32_t t64 = 4895;

	t64 = (x625>>((x626/x627)%x628));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x638 = 50646558U;
	int16_t x639 = INT16_MIN;
	int16_t x640 = -2569;

	t65 = (x637>>((x638/x639)%x640));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x657 = 2U;
	uint16_t x659 = 6U;
	uint32_t x660 = 931U;
	int32_t t66 = 177998;

	t66 = (x657>>((x658/x659)%x660));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x661 = 13928LLU;
	uint64_t x662 = 5407234817103LLU;
	int16_t x663 = INT16_MIN;
	int32_t x664 = 95;
	volatile uint64_t t67 = 1613728287132LLU;

	t67 = (x661>>((x662/x663)%x664));

	if (t67 != 13928LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x665 = 5933U;
	int8_t x666 = 1;
	volatile int8_t x668 = INT8_MIN;
	volatile int32_t t68 = -95162649;

	t68 = (x665>>((x666/x667)%x668));

	if (t68 != 5933) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x677 = 1472805U;
	volatile uint64_t x678 = 138186359908583111LLU;
	static int32_t x679 = -664488964;
	uint32_t t69 = 137U;

	t69 = (x677>>((x678/x679)%x680));

	if (t69 != 1472805U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x685 = 787LLU;
	int64_t x687 = -1LL;
	int64_t x688 = 7244LL;
	volatile uint64_t t70 = 355LLU;

	t70 = (x685>>((x686/x687)%x688));

	if (t70 != 393LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x693 = 161U;
	uint32_t x694 = 191U;
	int16_t x695 = INT16_MAX;
	int32_t x696 = INT32_MAX;

	t71 = (x693>>((x694/x695)%x696));

	if (t71 != 161) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x698 = 0;
	volatile int8_t x699 = 1;
	volatile uint8_t x700 = 1U;

	t72 = (x697>>((x698/x699)%x700));

	if (t72 != 57) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x706 = 95U;
	int32_t x707 = INT32_MIN;
	uint64_t x708 = UINT64_MAX;
	int32_t t73 = 0;

	t73 = (x705>>((x706/x707)%x708));

	if (t73 != 217) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x733 = 0U;
	uint16_t x734 = 2545U;
	uint8_t x736 = 3U;
	volatile int32_t t74 = -7022;

	t74 = (x733>>((x734/x735)%x736));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x737 = 885LLU;
	uint16_t x738 = 4U;
	volatile int64_t x739 = INT64_MAX;

	t75 = (x737>>((x738/x739)%x740));

	if (t75 != 885LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x749 = 1566777U;
	uint64_t x751 = 487597297571758LLU;
	int8_t x752 = 1;
	volatile uint32_t t76 = 796385U;

	t76 = (x749>>((x750/x751)%x752));

	if (t76 != 1566777U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x753 = 1381;
	uint8_t x754 = 3U;
	volatile int64_t x755 = INT64_MIN;
	int16_t x756 = INT16_MIN;

	t77 = (x753>>((x754/x755)%x756));

	if (t77 != 1381) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x765 = 27U;
	uint32_t x766 = UINT32_MAX;
	int16_t x767 = INT16_MIN;
	static int32_t x768 = -1;
	uint32_t t78 = 31205U;

	t78 = (x765>>((x766/x767)%x768));

	if (t78 != 13U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x774 = INT16_MAX;
	volatile int8_t x775 = -1;
	static int8_t x776 = -1;
	volatile uint64_t t79 = 1LLU;

	t79 = (x773>>((x774/x775)%x776));

	if (t79 != 29077139971742573LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x781 = 49U;
	static int16_t x783 = INT16_MIN;
	int32_t t80 = 12668136;

	t80 = (x781>>((x782/x783)%x784));

	if (t80 != 3) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x793 = 0U;
	volatile int64_t x794 = -1LL;
	volatile int32_t x795 = INT32_MIN;
	int16_t x796 = -1;

	t81 = (x793>>((x794/x795)%x796));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x797 = INT8_MAX;
	int32_t x798 = 596505333;
	uint32_t x799 = 15U;
	uint8_t x800 = 57U;
	static int32_t t82 = -224710;

	t82 = (x797>>((x798/x799)%x800));

	if (t82 != 15) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x809 = UINT8_MAX;
	volatile int32_t t83 = 1978097;

	t83 = (x809>>((x810/x811)%x812));

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x837 = INT16_MAX;
	uint64_t x838 = UINT64_MAX;
	int32_t x840 = -238;
	volatile int32_t t84 = -476782;

	t84 = (x837>>((x838/x839)%x840));

	if (t84 != 16383) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x841 = UINT8_MAX;
	volatile int64_t x842 = -1LL;
	uint16_t x843 = UINT16_MAX;
	int64_t x844 = INT64_MIN;
	int32_t t85 = -168169690;

	t85 = (x841>>((x842/x843)%x844));

	if (t85 != 255) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x845 = 114529941;
	int8_t x846 = -1;
	uint64_t x847 = UINT64_MAX;
	volatile int64_t x848 = INT64_MAX;
	int32_t t86 = -7335171;

	t86 = (x845>>((x846/x847)%x848));

	if (t86 != 57264970) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x849 = 1;
	int64_t x851 = 917679532800706LL;
	int64_t x852 = INT64_MIN;
	int32_t t87 = 153789;

	t87 = (x849>>((x850/x851)%x852));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x855 = INT32_MIN;
	int16_t x856 = -1;

	t88 = (x853>>((x854/x855)%x856));

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x877 = INT32_MAX;
	int8_t x878 = INT8_MIN;
	static int32_t x879 = INT32_MIN;
	int64_t x880 = INT64_MIN;

	t89 = (x877>>((x878/x879)%x880));

	if (t89 != INT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x891 = INT16_MIN;
	int16_t x892 = INT16_MIN;
	volatile int32_t t90 = -4969;

	t90 = (x889>>((x890/x891)%x892));

	if (t90 != 130) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x897 = UINT32_MAX;
	int32_t x898 = INT32_MIN;
	int8_t x899 = INT8_MIN;
	static int16_t x900 = INT16_MIN;
	volatile uint32_t t91 = UINT32_MAX;

	t91 = (x897>>((x898/x899)%x900));

	if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x901 = 12;
	int32_t x902 = 783528925;
	static uint32_t x903 = UINT32_MAX;
	static int32_t x904 = -3267;
	volatile int32_t t92 = -14980324;

	t92 = (x901>>((x902/x903)%x904));

	if (t92 != 12) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x913 = UINT8_MAX;
	int32_t x914 = INT32_MIN;
	int64_t x915 = INT64_MIN;
	int16_t x916 = INT16_MIN;

	t93 = (x913>>((x914/x915)%x916));

	if (t93 != 255) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x918 = -1;
	volatile int64_t x919 = -1LL;
	int64_t x920 = INT64_MIN;
	uint64_t t94 = 11568591234396295LLU;

	t94 = (x917>>((x918/x919)%x920));

	if (t94 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x929 = UINT64_MAX;
	int64_t x930 = -1LL;
	int16_t x931 = INT16_MAX;
	int16_t x932 = INT16_MAX;

	t95 = (x929>>((x930/x931)%x932));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x937 = INT8_MAX;
	int16_t x938 = INT16_MIN;
	volatile int32_t x939 = 935325;
	volatile uint16_t x940 = UINT16_MAX;
	int32_t t96 = -90402;

	t96 = (x937>>((x938/x939)%x940));

	if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x949 = UINT32_MAX;
	uint32_t x950 = UINT32_MAX;
	int64_t x951 = INT64_MAX;
	int32_t x952 = INT32_MAX;
	uint32_t t97 = UINT32_MAX;

	t97 = (x949>>((x950/x951)%x952));

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x953 = 720U;
	int64_t x954 = INT64_MIN;
	static uint8_t x956 = 8U;

	t98 = (x953>>((x954/x955)%x956));

	if (t98 != 720) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x961 = INT8_MAX;
	volatile int32_t x962 = INT32_MIN;
	int64_t x963 = INT64_MIN;
	volatile int16_t x964 = -700;
	int32_t t99 = 45;

	t99 = (x961>>((x962/x963)%x964));

	if (t99 != 127) { NG(); } else { ; }
	
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


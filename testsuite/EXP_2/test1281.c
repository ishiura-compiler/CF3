#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x9 = 1U;
static volatile uint64_t x12 = 29LLU;
int64_t x41 = INT64_MAX;
int16_t x42 = -1;
volatile int32_t t1 = -1457;
int32_t t2 = 109239;
uint8_t x133 = 23U;
volatile uint64_t x135 = 914LLU;
uint8_t x136 = 5U;
static int8_t x171 = -4;
uint32_t x223 = 8742620U;
volatile int32_t t8 = -11;
int32_t x254 = -7;
int8_t x255 = INT8_MAX;
static int32_t t10 = -343329490;
int8_t x294 = 8;
uint8_t x296 = 18U;
uint8_t x301 = UINT8_MAX;
uint64_t x317 = 74243946966889362LLU;
volatile int32_t x341 = 13545;
uint8_t x344 = 30U;
static int8_t x345 = INT8_MIN;
int16_t x394 = 1;
static int16_t x426 = -1;
static int32_t t19 = -87;
static int16_t x481 = 8457;
volatile uint64_t x484 = 9LLU;
int64_t x487 = INT64_MAX;
uint8_t x500 = 31U;
uint16_t x535 = UINT16_MAX;
int16_t x541 = -327;
uint32_t x543 = UINT32_MAX;
static int16_t x547 = INT16_MAX;
static uint8_t x646 = UINT8_MAX;
volatile int32_t x647 = -1;
int8_t x648 = 0;
volatile int8_t x669 = -1;
int8_t x714 = -1;
volatile int32_t t36 = -1232277;
int32_t x722 = 147528976;
int8_t x865 = 0;
int8_t x867 = INT8_MAX;
int8_t x871 = -1;
uint32_t x957 = 20892U;
uint8_t x968 = 27U;
int64_t x1038 = INT64_MAX;
int64_t x1039 = INT64_MIN;
uint8_t x1040 = 4U;
int16_t x1054 = 61;
static uint8_t x1055 = 13U;
static uint16_t x1056 = 2U;
uint16_t x1088 = 12U;
static int64_t x1211 = 13965LL;
static uint8_t x1212 = 0U;
static int16_t x1333 = -3030;
static int16_t x1335 = INT16_MAX;
uint32_t x1433 = UINT32_MAX;
int16_t x1435 = 0;
int16_t x1455 = -1;
volatile int64_t x1456 = 0LL;
volatile int16_t x1462 = -1887;
int32_t x1463 = INT32_MIN;
static volatile uint8_t x1516 = 0U;
volatile uint8_t x1536 = 1U;
int8_t x1545 = INT8_MIN;
static uint16_t x1548 = 25U;
int32_t x1657 = -1730298;
uint8_t x1659 = 1U;
uint16_t x1660 = 24U;
int8_t x1721 = -2;
uint8_t x1739 = UINT8_MAX;
int16_t x1740 = 1;
int32_t t69 = -25758084;
volatile int64_t x1777 = -1LL;
volatile int32_t t70 = 38;
int8_t x1924 = 0;
int32_t t73 = 0;
uint16_t x1994 = 31U;
static int32_t x2078 = -1;
uint8_t x2176 = 1U;
int32_t t78 = -264;
uint16_t x2215 = UINT16_MAX;
volatile int32_t t79 = -8;
int8_t x2397 = INT8_MIN;
uint16_t x2400 = 21U;
int8_t x2401 = -1;
uint32_t x2428 = 4U;
static int32_t t84 = -740556135;
int16_t x2437 = 374;
volatile uint16_t x2439 = UINT16_MAX;
uint64_t x2447 = UINT64_MAX;
uint8_t x2474 = UINT8_MAX;
int8_t x2581 = INT8_MIN;
volatile uint64_t x2587 = UINT64_MAX;
uint8_t x2612 = 14U;
int32_t x2615 = -1;
static volatile int32_t x2702 = INT32_MAX;
static uint16_t x2704 = 8U;


void f0(void) {
	int16_t x10 = -5;
	uint16_t x11 = UINT16_MAX;
	int32_t t0 = -3655;

	t0 = ((x9==(x10==x11))>>x12);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x43 = -1;
	int16_t x44 = 0;

	t1 = ((x41==(x42==x43))>>x44);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x65 = -1;
	int64_t x66 = INT64_MIN;
	volatile uint32_t x67 = UINT32_MAX;
	volatile int8_t x68 = 11;

	t2 = ((x65==(x66==x67))>>x68);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x69 = -7296707401711LL;
	volatile uint32_t x70 = 1719986U;
	uint8_t x71 = 0U;
	volatile uint8_t x72 = 30U;
	volatile int32_t t3 = 62130;

	t3 = ((x69==(x70==x71))>>x72);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint16_t x101 = 176U;
	int8_t x102 = INT8_MIN;
	int16_t x103 = INT16_MIN;
	int8_t x104 = 8;
	volatile int32_t t4 = 249282;

	t4 = ((x101==(x102==x103))>>x104);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x134 = -1;
	int32_t t5 = -121;

	t5 = ((x133==(x134==x135))>>x136);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x169 = INT32_MAX;
	uint8_t x170 = 14U;
	int16_t x172 = 1;
	int32_t t6 = 91;

	t6 = ((x169==(x170==x171))>>x172);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x217 = -56;
	int64_t x218 = 91267473134498LL;
	static volatile int32_t x219 = INT32_MIN;
	uint16_t x220 = 0U;
	static volatile int32_t t7 = 149192;

	t7 = ((x217==(x218==x219))>>x220);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x221 = INT32_MAX;
	int8_t x222 = 0;
	int16_t x224 = 1;

	t8 = ((x221==(x222==x223))>>x224);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x241 = -16;
	uint32_t x242 = UINT32_MAX;
	int32_t x243 = INT32_MIN;
	uint32_t x244 = 13U;
	int32_t t9 = -1060680742;

	t9 = ((x241==(x242==x243))>>x244);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x253 = INT32_MIN;
	uint8_t x256 = 0U;

	t10 = ((x253==(x254==x255))>>x256);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x289 = 461LL;
	int16_t x290 = 49;
	volatile uint32_t x291 = UINT32_MAX;
	uint8_t x292 = 11U;
	static int32_t t11 = -2103836;

	t11 = ((x289==(x290==x291))>>x292);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x293 = 526069LLU;
	int32_t x295 = -12;
	int32_t t12 = 5;

	t12 = ((x293==(x294==x295))>>x296);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x302 = INT32_MIN;
	uint64_t x303 = UINT64_MAX;
	volatile uint64_t x304 = 7LLU;
	volatile int32_t t13 = 6609279;

	t13 = ((x301==(x302==x303))>>x304);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x318 = 124176158U;
	uint16_t x319 = 45U;
	uint16_t x320 = 10U;
	static volatile int32_t t14 = 8;

	t14 = ((x317==(x318==x319))>>x320);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x329 = INT32_MIN;
	uint8_t x330 = 0U;
	int16_t x331 = INT16_MIN;
	uint8_t x332 = 14U;
	static volatile int32_t t15 = 662;

	t15 = ((x329==(x330==x331))>>x332);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x342 = INT64_MAX;
	static int32_t x343 = INT32_MIN;
	int32_t t16 = -15;

	t16 = ((x341==(x342==x343))>>x344);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x346 = 12U;
	int32_t x347 = INT32_MAX;
	uint16_t x348 = 1U;
	volatile int32_t t17 = -8911;

	t17 = ((x345==(x346==x347))>>x348);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x393 = INT16_MIN;
	static int16_t x395 = 34;
	uint8_t x396 = 2U;
	int32_t t18 = -6936090;

	t18 = ((x393==(x394==x395))>>x396);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x425 = UINT64_MAX;
	int32_t x427 = INT32_MIN;
	volatile uint32_t x428 = 3U;

	t19 = ((x425==(x426==x427))>>x428);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x437 = 56U;
	uint8_t x438 = 2U;
	static int16_t x439 = INT16_MIN;
	uint16_t x440 = 4U;
	static volatile int32_t t20 = 4475;

	t20 = ((x437==(x438==x439))>>x440);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x449 = UINT64_MAX;
	static uint16_t x450 = 787U;
	static uint32_t x451 = 920631U;
	int8_t x452 = 2;
	static volatile int32_t t21 = 12684;

	t21 = ((x449==(x450==x451))>>x452);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x461 = 1U;
	int64_t x462 = -1LL;
	static volatile int8_t x463 = 27;
	uint8_t x464 = 10U;
	volatile int32_t t22 = -98356;

	t22 = ((x461==(x462==x463))>>x464);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x482 = 0U;
	static int16_t x483 = INT16_MAX;
	int32_t t23 = -1;

	t23 = ((x481==(x482==x483))>>x484);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x485 = -1;
	uint16_t x486 = 1122U;
	static uint16_t x488 = 3U;
	int32_t t24 = -2684134;

	t24 = ((x485==(x486==x487))>>x488);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x497 = INT8_MAX;
	static uint8_t x498 = 16U;
	uint8_t x499 = UINT8_MAX;
	static int32_t t25 = 58174414;

	t25 = ((x497==(x498==x499))>>x500);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x505 = 57387U;
	int64_t x506 = INT64_MAX;
	int32_t x507 = INT32_MIN;
	volatile int8_t x508 = 1;
	volatile int32_t t26 = -33551662;

	t26 = ((x505==(x506==x507))>>x508);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x533 = -1;
	int16_t x534 = INT16_MIN;
	volatile int8_t x536 = 28;
	static volatile int32_t t27 = 0;

	t27 = ((x533==(x534==x535))>>x536);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x542 = 20;
	int8_t x544 = 25;
	static volatile int32_t t28 = 2986777;

	t28 = ((x541==(x542==x543))>>x544);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x545 = 18966U;
	uint32_t x546 = UINT32_MAX;
	int16_t x548 = 7;
	static volatile int32_t t29 = 26;

	t29 = ((x545==(x546==x547))>>x548);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x553 = UINT64_MAX;
	static int64_t x554 = INT64_MIN;
	int64_t x555 = INT64_MIN;
	int8_t x556 = 0;
	int32_t t30 = 3;

	t30 = ((x553==(x554==x555))>>x556);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x581 = INT8_MIN;
	static uint64_t x582 = UINT64_MAX;
	uint64_t x583 = UINT64_MAX;
	int8_t x584 = 1;
	int32_t t31 = -5;

	t31 = ((x581==(x582==x583))>>x584);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x645 = -1;
	volatile int32_t t32 = 1;

	t32 = ((x645==(x646==x647))>>x648);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x670 = UINT64_MAX;
	static volatile int32_t x671 = -1;
	static int8_t x672 = 7;
	int32_t t33 = 1;

	t33 = ((x669==(x670==x671))>>x672);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x673 = 222U;
	static int64_t x674 = 2014916957576068613LL;
	static volatile int32_t x675 = -1;
	volatile uint8_t x676 = 7U;
	volatile int32_t t34 = 76610;

	t34 = ((x673==(x674==x675))>>x676);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x677 = 70U;
	uint64_t x678 = UINT64_MAX;
	int16_t x679 = INT16_MIN;
	volatile uint8_t x680 = 7U;
	volatile int32_t t35 = 9466;

	t35 = ((x677==(x678==x679))>>x680);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x713 = INT8_MIN;
	volatile uint8_t x715 = UINT8_MAX;
	volatile uint8_t x716 = 1U;

	t36 = ((x713==(x714==x715))>>x716);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x721 = -1;
	static volatile uint32_t x723 = 6392U;
	static volatile int16_t x724 = 2;
	static int32_t t37 = -250735388;

	t37 = ((x721==(x722==x723))>>x724);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x769 = -14;
	static int8_t x770 = -1;
	uint8_t x771 = UINT8_MAX;
	volatile uint8_t x772 = 4U;
	int32_t t38 = 3;

	t38 = ((x769==(x770==x771))>>x772);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x777 = INT8_MIN;
	static uint16_t x778 = 1493U;
	static int32_t x779 = -4791094;
	uint8_t x780 = 5U;
	volatile int32_t t39 = -4501305;

	t39 = ((x777==(x778==x779))>>x780);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x793 = INT16_MAX;
	int64_t x794 = INT64_MAX;
	uint16_t x795 = UINT16_MAX;
	volatile int16_t x796 = 2;
	int32_t t40 = -345090324;

	t40 = ((x793==(x794==x795))>>x796);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x801 = INT16_MAX;
	volatile int8_t x802 = 3;
	uint64_t x803 = 2315371LLU;
	static int32_t x804 = 1;
	int32_t t41 = 179626351;

	t41 = ((x801==(x802==x803))>>x804);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x866 = -1LL;
	int8_t x868 = 1;
	volatile int32_t t42 = 13;

	t42 = ((x865==(x866==x867))>>x868);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x869 = -482;
	volatile int8_t x870 = INT8_MIN;
	uint8_t x872 = 1U;
	int32_t t43 = -818016;

	t43 = ((x869==(x870==x871))>>x872);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x958 = INT32_MIN;
	int64_t x959 = 118385702LL;
	int64_t x960 = 0LL;
	int32_t t44 = -6760;

	t44 = ((x957==(x958==x959))>>x960);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x965 = UINT8_MAX;
	int8_t x966 = -18;
	int64_t x967 = -1LL;
	static volatile int32_t t45 = 676;

	t45 = ((x965==(x966==x967))>>x968);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x997 = UINT64_MAX;
	volatile int16_t x998 = -1;
	int8_t x999 = INT8_MIN;
	int16_t x1000 = 1;
	volatile int32_t t46 = 2;

	t46 = ((x997==(x998==x999))>>x1000);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x1037 = INT16_MIN;
	int32_t t47 = 6869;

	t47 = ((x1037==(x1038==x1039))>>x1040);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x1053 = INT32_MAX;
	volatile int32_t t48 = -1;

	t48 = ((x1053==(x1054==x1055))>>x1056);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x1085 = 21954191LL;
	int8_t x1086 = -1;
	static uint8_t x1087 = 117U;
	int32_t t49 = 0;

	t49 = ((x1085==(x1086==x1087))>>x1088);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x1209 = 52U;
	static int16_t x1210 = -1;
	int32_t t50 = 659;

	t50 = ((x1209==(x1210==x1211))>>x1212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x1293 = INT32_MIN;
	int32_t x1294 = INT32_MAX;
	volatile int16_t x1295 = INT16_MAX;
	uint8_t x1296 = 3U;
	volatile int32_t t51 = -20268739;

	t51 = ((x1293==(x1294==x1295))>>x1296);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x1334 = 7;
	volatile int8_t x1336 = 0;
	int32_t t52 = 1032437;

	t52 = ((x1333==(x1334==x1335))>>x1336);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x1341 = 2846;
	static uint64_t x1342 = 8636837415585LLU;
	static uint8_t x1343 = UINT8_MAX;
	uint16_t x1344 = 10U;
	int32_t t53 = 119;

	t53 = ((x1341==(x1342==x1343))>>x1344);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x1357 = -1;
	int32_t x1358 = 9584;
	volatile int8_t x1359 = INT8_MIN;
	static uint8_t x1360 = 27U;
	static volatile int32_t t54 = -315;

	t54 = ((x1357==(x1358==x1359))>>x1360);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x1393 = INT8_MIN;
	volatile int8_t x1394 = -1;
	int16_t x1395 = INT16_MAX;
	uint8_t x1396 = 1U;
	volatile int32_t t55 = -250130101;

	t55 = ((x1393==(x1394==x1395))>>x1396);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x1434 = 113529190633086LLU;
	static int8_t x1436 = 0;
	volatile int32_t t56 = -411;

	t56 = ((x1433==(x1434==x1435))>>x1436);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x1449 = 1440LL;
	uint8_t x1450 = 3U;
	int16_t x1451 = 3;
	static uint32_t x1452 = 1U;
	int32_t t57 = 56923;

	t57 = ((x1449==(x1450==x1451))>>x1452);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x1453 = UINT32_MAX;
	uint16_t x1454 = 512U;
	int32_t t58 = -26487035;

	t58 = ((x1453==(x1454==x1455))>>x1456);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x1461 = 4U;
	uint16_t x1464 = 2U;
	int32_t t59 = -4086;

	t59 = ((x1461==(x1462==x1463))>>x1464);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x1513 = 63LL;
	int16_t x1514 = -1;
	int8_t x1515 = INT8_MIN;
	volatile int32_t t60 = 4493;

	t60 = ((x1513==(x1514==x1515))>>x1516);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x1533 = INT32_MAX;
	int8_t x1534 = INT8_MAX;
	uint64_t x1535 = 30502553825722236LLU;
	volatile int32_t t61 = -25;

	t61 = ((x1533==(x1534==x1535))>>x1536);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x1546 = 841669U;
	volatile int32_t x1547 = INT32_MIN;
	int32_t t62 = -1;

	t62 = ((x1545==(x1546==x1547))>>x1548);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x1573 = INT8_MAX;
	int64_t x1574 = INT64_MIN;
	int64_t x1575 = -296514335795LL;
	static int16_t x1576 = 12;
	volatile int32_t t63 = 57243;

	t63 = ((x1573==(x1574==x1575))>>x1576);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x1629 = -1;
	uint64_t x1630 = 2965825341625LLU;
	static int64_t x1631 = INT64_MIN;
	static uint8_t x1632 = 21U;
	static int32_t t64 = -1618419;

	t64 = ((x1629==(x1630==x1631))>>x1632);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x1658 = 82U;
	volatile int32_t t65 = -101059548;

	t65 = ((x1657==(x1658==x1659))>>x1660);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x1693 = INT32_MAX;
	uint8_t x1694 = UINT8_MAX;
	uint8_t x1695 = 15U;
	uint8_t x1696 = 6U;
	static int32_t t66 = -325589;

	t66 = ((x1693==(x1694==x1695))>>x1696);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x1717 = INT64_MIN;
	static int8_t x1718 = INT8_MAX;
	uint64_t x1719 = 29258248339538LLU;
	uint32_t x1720 = 5U;
	volatile int32_t t67 = 59106564;

	t67 = ((x1717==(x1718==x1719))>>x1720);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x1722 = -80618957562377LL;
	static uint16_t x1723 = 3908U;
	uint8_t x1724 = 5U;
	volatile int32_t t68 = 1463643;

	t68 = ((x1721==(x1722==x1723))>>x1724);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x1737 = 11187U;
	int32_t x1738 = -1;

	t69 = ((x1737==(x1738==x1739))>>x1740);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint32_t x1778 = 0U;
	int16_t x1779 = INT16_MIN;
	static uint8_t x1780 = 22U;

	t70 = ((x1777==(x1778==x1779))>>x1780);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x1781 = -1LL;
	volatile uint32_t x1782 = 168421959U;
	uint32_t x1783 = UINT32_MAX;
	static uint16_t x1784 = 0U;
	int32_t t71 = -10520;

	t71 = ((x1781==(x1782==x1783))>>x1784);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x1885 = UINT8_MAX;
	int8_t x1886 = 3;
	int64_t x1887 = INT64_MIN;
	int8_t x1888 = 24;
	int32_t t72 = -3968;

	t72 = ((x1885==(x1886==x1887))>>x1888);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x1921 = INT8_MIN;
	int16_t x1922 = 0;
	volatile int64_t x1923 = -2LL;

	t73 = ((x1921==(x1922==x1923))>>x1924);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x1993 = 2453701144285LLU;
	int32_t x1995 = 3940502;
	uint16_t x1996 = 3U;
	int32_t t74 = 2259108;

	t74 = ((x1993==(x1994==x1995))>>x1996);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x2037 = 20U;
	int16_t x2038 = INT16_MIN;
	int64_t x2039 = INT64_MAX;
	uint64_t x2040 = 15LLU;
	static int32_t t75 = 21125;

	t75 = ((x2037==(x2038==x2039))>>x2040);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x2077 = 54724296126265836LLU;
	int64_t x2079 = INT64_MAX;
	uint16_t x2080 = 1U;
	volatile int32_t t76 = 4044365;

	t76 = ((x2077==(x2078==x2079))>>x2080);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x2173 = INT8_MAX;
	volatile uint32_t x2174 = UINT32_MAX;
	int16_t x2175 = INT16_MIN;
	volatile int32_t t77 = 919083738;

	t77 = ((x2173==(x2174==x2175))>>x2176);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x2193 = -7;
	volatile uint64_t x2194 = 21LLU;
	int64_t x2195 = INT64_MIN;
	int16_t x2196 = 11;

	t78 = ((x2193==(x2194==x2195))>>x2196);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x2213 = INT64_MIN;
	int32_t x2214 = INT32_MIN;
	static uint8_t x2216 = 0U;

	t79 = ((x2213==(x2214==x2215))>>x2216);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x2277 = -16;
	int8_t x2278 = -13;
	static volatile uint16_t x2279 = 5726U;
	uint32_t x2280 = 1U;
	volatile int32_t t80 = 2126355;

	t80 = ((x2277==(x2278==x2279))>>x2280);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x2398 = INT32_MAX;
	volatile int32_t x2399 = INT32_MAX;
	volatile int32_t t81 = -17;

	t81 = ((x2397==(x2398==x2399))>>x2400);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x2402 = INT64_MIN;
	int8_t x2403 = INT8_MIN;
	uint8_t x2404 = 0U;
	int32_t t82 = 488239;

	t82 = ((x2401==(x2402==x2403))>>x2404);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x2425 = INT32_MIN;
	int32_t x2426 = INT32_MIN;
	uint32_t x2427 = 183065107U;
	volatile int32_t t83 = 884828795;

	t83 = ((x2425==(x2426==x2427))>>x2428);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x2433 = INT64_MIN;
	int16_t x2434 = 1567;
	int64_t x2435 = -509084494LL;
	volatile uint16_t x2436 = 12U;

	t84 = ((x2433==(x2434==x2435))>>x2436);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x2438 = UINT64_MAX;
	int8_t x2440 = 0;
	int32_t t85 = 434429;

	t85 = ((x2437==(x2438==x2439))>>x2440);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x2445 = INT32_MIN;
	uint8_t x2446 = UINT8_MAX;
	uint8_t x2448 = 0U;
	static int32_t t86 = -523;

	t86 = ((x2445==(x2446==x2447))>>x2448);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x2473 = INT64_MAX;
	int64_t x2475 = -1LL;
	uint16_t x2476 = 1U;
	volatile int32_t t87 = -4888;

	t87 = ((x2473==(x2474==x2475))>>x2476);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x2513 = INT16_MIN;
	volatile uint16_t x2514 = UINT16_MAX;
	int64_t x2515 = INT64_MIN;
	uint8_t x2516 = 23U;
	volatile int32_t t88 = -4052281;

	t88 = ((x2513==(x2514==x2515))>>x2516);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x2582 = 91U;
	uint16_t x2583 = UINT16_MAX;
	int16_t x2584 = 17;
	volatile int32_t t89 = 570;

	t89 = ((x2581==(x2582==x2583))>>x2584);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x2585 = -1;
	uint16_t x2586 = 146U;
	uint16_t x2588 = 3U;
	volatile int32_t t90 = 0;

	t90 = ((x2585==(x2586==x2587))>>x2588);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x2597 = UINT16_MAX;
	static uint8_t x2598 = UINT8_MAX;
	volatile uint32_t x2599 = UINT32_MAX;
	volatile uint8_t x2600 = 1U;
	static volatile int32_t t91 = -11800;

	t91 = ((x2597==(x2598==x2599))>>x2600);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x2609 = UINT8_MAX;
	volatile int16_t x2610 = INT16_MAX;
	uint8_t x2611 = UINT8_MAX;
	volatile int32_t t92 = 74453398;

	t92 = ((x2609==(x2610==x2611))>>x2612);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint64_t x2613 = 270847052296971986LLU;
	volatile int32_t x2614 = INT32_MIN;
	uint64_t x2616 = 31LLU;
	int32_t t93 = 293461;

	t93 = ((x2613==(x2614==x2615))>>x2616);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x2693 = -1;
	int16_t x2694 = INT16_MAX;
	uint32_t x2695 = 127U;
	volatile int8_t x2696 = 1;
	int32_t t94 = -25314;

	t94 = ((x2693==(x2694==x2695))>>x2696);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x2701 = INT16_MIN;
	int16_t x2703 = 4;
	volatile int32_t t95 = 239;

	t95 = ((x2701==(x2702==x2703))>>x2704);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x2713 = -1;
	int16_t x2714 = 13;
	int64_t x2715 = INT64_MIN;
	uint8_t x2716 = 7U;
	int32_t t96 = 122;

	t96 = ((x2713==(x2714==x2715))>>x2716);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x2717 = UINT16_MAX;
	int8_t x2718 = INT8_MAX;
	int16_t x2719 = INT16_MIN;
	uint8_t x2720 = 1U;
	volatile int32_t t97 = -4010082;

	t97 = ((x2717==(x2718==x2719))>>x2720);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x2749 = INT64_MIN;
	int64_t x2750 = INT64_MIN;
	uint64_t x2751 = UINT64_MAX;
	uint8_t x2752 = 15U;
	volatile int32_t t98 = -3;

	t98 = ((x2749==(x2750==x2751))>>x2752);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x2825 = 61724398U;
	uint32_t x2826 = UINT32_MAX;
	int32_t x2827 = INT32_MIN;
	static volatile uint8_t x2828 = 11U;
	volatile int32_t t99 = 31895;

	t99 = ((x2825==(x2826==x2827))>>x2828);

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


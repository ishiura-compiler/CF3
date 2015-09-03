#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x69 = INT16_MAX;
static uint16_t x75 = 13095U;
uint8_t x149 = UINT8_MAX;
int8_t x157 = INT8_MIN;
static int64_t x158 = -1771LL;
uint64_t x159 = 2043162317169LLU;
int64_t x273 = -5LL;
int8_t x275 = INT8_MAX;
int32_t t7 = 3;
int32_t t8 = 143;
volatile int32_t t9 = 246151;
uint8_t x335 = 2U;
int16_t x445 = 2;
int8_t x487 = -1;
int16_t x496 = 11;
int64_t x509 = -87139951808617822LL;
int8_t x529 = -1;
uint16_t x644 = 2U;
int16_t x668 = 21;
static uint8_t x693 = 61U;
volatile int8_t x708 = 18;
static volatile int32_t t22 = -1;
volatile int32_t x729 = 18859791;
volatile int32_t x732 = 0;
volatile uint32_t x753 = UINT32_MAX;
int16_t x755 = 111;
uint64_t x930 = UINT64_MAX;
static int32_t t28 = 0;
uint64_t x1002 = 1431404645948506LLU;
uint16_t x1046 = UINT16_MAX;
static volatile int32_t x1047 = -21992;
int16_t x1049 = -1;
int16_t x1051 = INT16_MIN;
int8_t x1052 = 1;
uint32_t x1090 = UINT32_MAX;
static uint8_t x1104 = 8U;
volatile uint8_t x1128 = 0U;
int32_t t36 = 111899;
static int32_t x1165 = INT32_MIN;
volatile uint32_t x1167 = 37428124U;
int8_t x1202 = -1;
int8_t x1204 = 5;
uint16_t x1206 = 174U;
int8_t x1305 = INT8_MIN;
volatile int32_t t42 = -1;
int32_t t43 = 3833;
uint16_t x1377 = 5655U;
static int8_t x1378 = INT8_MIN;
uint64_t x1380 = 1LLU;
int32_t t44 = 153384;
volatile int32_t t45 = 217;
volatile uint64_t x1398 = UINT64_MAX;
volatile int32_t t47 = -312546073;
int16_t x1472 = 1;
int16_t x1543 = 55;
int32_t t51 = 25213;
int64_t x1562 = INT64_MAX;
int16_t x1626 = INT16_MIN;
static int32_t t54 = 2294;
volatile uint32_t x1637 = 3U;
uint32_t x1639 = 12088U;
volatile int32_t t55 = -2965499;
static uint8_t x1745 = 4U;
static int16_t x1755 = -102;
int32_t x1894 = -34772;
int32_t t60 = 1508659;
static uint16_t x1940 = 4U;
volatile int8_t x1946 = -1;
volatile int32_t t65 = -46213;
static int16_t x1969 = INT16_MIN;
static int16_t x1971 = INT16_MAX;
int64_t x2012 = 30LL;
int16_t x2034 = INT16_MAX;
volatile int32_t x2035 = INT32_MIN;
static int32_t t69 = 26615871;
int8_t x2117 = INT8_MAX;
volatile int32_t t72 = 501710341;
volatile uint16_t x2150 = 6U;
static volatile int8_t x2157 = -1;
int8_t x2171 = 1;
int64_t x2223 = INT64_MAX;
int32_t t78 = 844778;
static int16_t x2287 = -486;
int8_t x2288 = 7;
uint8_t x2328 = 20U;
static volatile int32_t t82 = 1;
int8_t x2406 = INT8_MIN;
volatile int32_t t84 = 1609;
int64_t x2471 = INT64_MIN;
static uint16_t x2494 = 189U;
volatile int8_t x2592 = 0;
static int32_t x2649 = -1;
volatile int8_t x2707 = INT8_MIN;
volatile int32_t t93 = 589591;
int8_t x2772 = 0;
int64_t x2781 = -468559655411977680LL;
int8_t x2834 = INT8_MAX;
int32_t x2868 = 3;
int32_t x2871 = INT32_MIN;
static int8_t x2872 = 0;
int32_t x2875 = INT32_MAX;
int32_t t99 = -631;


void f0(void) {
	volatile int64_t x57 = INT64_MAX;
	static uint8_t x58 = UINT8_MAX;
	int32_t x59 = -1973269;
	uint16_t x60 = 14U;
	int32_t t0 = 27373009;

	t0 = ((x57<=(x58/x59))<<x60);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x70 = UINT16_MAX;
	uint8_t x71 = 2U;
	int16_t x72 = 1;
	volatile int32_t t1 = 18051;

	t1 = ((x69<=(x70/x71))<<x72);

	if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x73 = 296U;
	static int32_t x74 = INT32_MIN;
	static int16_t x76 = 3;
	static volatile int32_t t2 = -1;

	t2 = ((x73<=(x74/x75))<<x76);

	if (t2 != 8) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x150 = 125513686;
	int32_t x151 = INT32_MIN;
	uint16_t x152 = 0U;
	volatile int32_t t3 = 3528;

	t3 = ((x149<=(x150/x151))<<x152);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x153 = -1;
	volatile uint16_t x154 = 9U;
	int32_t x155 = -1025927;
	static uint16_t x156 = 25U;
	int32_t t4 = 214393077;

	t4 = ((x153<=(x154/x155))<<x156);

	if (t4 != 33554432) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x160 = 7U;
	static int32_t t5 = 287;

	t5 = ((x157<=(x158/x159))<<x160);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x261 = -1;
	int8_t x262 = INT8_MIN;
	uint8_t x263 = 30U;
	static int32_t x264 = 2;
	static volatile int32_t t6 = -1;

	t6 = ((x261<=(x262/x263))<<x264);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x274 = INT32_MIN;
	static volatile int8_t x276 = 22;

	t7 = ((x273<=(x274/x275))<<x276);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x285 = INT64_MIN;
	int32_t x286 = -38;
	static int64_t x287 = INT64_MIN;
	static int8_t x288 = 0;

	t8 = ((x285<=(x286/x287))<<x288);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x329 = 116304706U;
	int32_t x330 = INT32_MAX;
	volatile int32_t x331 = 1;
	uint8_t x332 = 7U;

	t9 = ((x329<=(x330/x331))<<x332);

	if (t9 != 128) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x333 = -1;
	int16_t x334 = -1;
	int8_t x336 = 0;
	int32_t t10 = -1;

	t10 = ((x333<=(x334/x335))<<x336);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x353 = INT32_MAX;
	int8_t x354 = -5;
	volatile uint16_t x355 = 30403U;
	static uint16_t x356 = 0U;
	volatile int32_t t11 = 14;

	t11 = ((x353<=(x354/x355))<<x356);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x446 = -1;
	uint8_t x447 = 108U;
	int16_t x448 = 1;
	static int32_t t12 = -28;

	t12 = ((x445<=(x446/x447))<<x448);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x485 = UINT8_MAX;
	static int16_t x486 = -1;
	static uint16_t x488 = 10U;
	static volatile int32_t t13 = 580273;

	t13 = ((x485<=(x486/x487))<<x488);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x493 = 5166;
	uint32_t x494 = 7092U;
	int64_t x495 = INT64_MIN;
	volatile int32_t t14 = 18;

	t14 = ((x493<=(x494/x495))<<x496);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x510 = 50898601;
	int32_t x511 = INT32_MIN;
	volatile int8_t x512 = 13;
	volatile int32_t t15 = 91407;

	t15 = ((x509<=(x510/x511))<<x512);

	if (t15 != 8192) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x530 = INT64_MAX;
	uint16_t x531 = 991U;
	uint8_t x532 = 5U;
	int32_t t16 = 620816;

	t16 = ((x529<=(x530/x531))<<x532);

	if (t16 != 32) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x585 = INT8_MIN;
	uint32_t x586 = 1704224U;
	volatile uint16_t x587 = UINT16_MAX;
	int8_t x588 = 4;
	static volatile int32_t t17 = -433876384;

	t17 = ((x585<=(x586/x587))<<x588);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x641 = 1400LLU;
	static volatile int8_t x642 = INT8_MIN;
	int8_t x643 = INT8_MIN;
	volatile int32_t t18 = -971557367;

	t18 = ((x641<=(x642/x643))<<x644);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x665 = INT32_MIN;
	int32_t x666 = INT32_MIN;
	int64_t x667 = INT64_MIN;
	int32_t t19 = 12188;

	t19 = ((x665<=(x666/x667))<<x668);

	if (t19 != 2097152) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x694 = INT16_MAX;
	int16_t x695 = INT16_MIN;
	static volatile int16_t x696 = 1;
	int32_t t20 = 80402;

	t20 = ((x693<=(x694/x695))<<x696);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x705 = 495525772;
	int16_t x706 = -1;
	int8_t x707 = -1;
	volatile int32_t t21 = -361800414;

	t21 = ((x705<=(x706/x707))<<x708);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x713 = 15514363774575026LLU;
	int8_t x714 = 0;
	int32_t x715 = -3;
	volatile uint8_t x716 = 6U;

	t22 = ((x713<=(x714/x715))<<x716);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x730 = INT16_MIN;
	volatile uint32_t x731 = 2045457062U;
	static int32_t t23 = -39602;

	t23 = ((x729<=(x730/x731))<<x732);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x754 = INT16_MIN;
	int8_t x756 = 0;
	int32_t t24 = 1006;

	t24 = ((x753<=(x754/x755))<<x756);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x757 = INT8_MIN;
	int64_t x758 = -144963651495303LL;
	int8_t x759 = INT8_MIN;
	uint16_t x760 = 2U;
	int32_t t25 = -603;

	t25 = ((x757<=(x758/x759))<<x760);

	if (t25 != 4) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x929 = -44641LL;
	uint32_t x931 = 510542U;
	static int8_t x932 = 0;
	int32_t t26 = 29;

	t26 = ((x929<=(x930/x931))<<x932);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x945 = 2589LL;
	static int16_t x946 = -1;
	int64_t x947 = 2804LL;
	int8_t x948 = 19;
	static volatile int32_t t27 = 395;

	t27 = ((x945<=(x946/x947))<<x948);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x969 = INT16_MIN;
	static int32_t x970 = INT32_MIN;
	int64_t x971 = -7164383480065LL;
	int8_t x972 = 12;

	t28 = ((x969<=(x970/x971))<<x972);

	if (t28 != 4096) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1001 = 485045563037946181LLU;
	int64_t x1003 = -169649450616524LL;
	volatile uint8_t x1004 = 9U;
	int32_t t29 = -747598;

	t29 = ((x1001<=(x1002/x1003))<<x1004);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x1005 = 10341U;
	static uint64_t x1006 = UINT64_MAX;
	uint64_t x1007 = UINT64_MAX;
	volatile uint16_t x1008 = 1U;
	volatile int32_t t30 = -947536;

	t30 = ((x1005<=(x1006/x1007))<<x1008);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int64_t x1045 = -509637979906LL;
	volatile uint8_t x1048 = 3U;
	int32_t t31 = 3938;

	t31 = ((x1045<=(x1046/x1047))<<x1048);

	if (t31 != 8) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int64_t x1050 = 0LL;
	volatile int32_t t32 = -9932;

	t32 = ((x1049<=(x1050/x1051))<<x1052);

	if (t32 != 2) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x1073 = 0;
	static uint8_t x1074 = 5U;
	static uint32_t x1075 = 540307706U;
	uint8_t x1076 = 13U;
	volatile int32_t t33 = -2779340;

	t33 = ((x1073<=(x1074/x1075))<<x1076);

	if (t33 != 8192) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1089 = INT64_MIN;
	int32_t x1091 = INT32_MAX;
	volatile uint8_t x1092 = 3U;
	int32_t t34 = -60;

	t34 = ((x1089<=(x1090/x1091))<<x1092);

	if (t34 != 8) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x1101 = -1;
	int16_t x1102 = INT16_MAX;
	static int64_t x1103 = -125395315LL;
	int32_t t35 = -400626896;

	t35 = ((x1101<=(x1102/x1103))<<x1104);

	if (t35 != 256) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x1125 = INT32_MIN;
	volatile uint16_t x1126 = 2977U;
	volatile uint32_t x1127 = 890U;

	t36 = ((x1125<=(x1126/x1127))<<x1128);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x1166 = UINT32_MAX;
	uint8_t x1168 = 0U;
	int32_t t37 = -333885743;

	t37 = ((x1165<=(x1166/x1167))<<x1168);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1201 = 83133803LL;
	volatile int16_t x1203 = 5287;
	int32_t t38 = -285;

	t38 = ((x1201<=(x1202/x1203))<<x1204);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1205 = INT8_MIN;
	uint8_t x1207 = 3U;
	uint16_t x1208 = 1U;
	int32_t t39 = 1229264;

	t39 = ((x1205<=(x1206/x1207))<<x1208);

	if (t39 != 2) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x1265 = -1LL;
	int32_t x1266 = 1;
	int64_t x1267 = 95832166180844381LL;
	uint8_t x1268 = 3U;
	static volatile int32_t t40 = -4;

	t40 = ((x1265<=(x1266/x1267))<<x1268);

	if (t40 != 8) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1306 = INT64_MAX;
	int64_t x1307 = INT64_MAX;
	int16_t x1308 = 0;
	int32_t t41 = -923;

	t41 = ((x1305<=(x1306/x1307))<<x1308);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x1309 = -1;
	int16_t x1310 = INT16_MAX;
	int16_t x1311 = -8078;
	static volatile int8_t x1312 = 13;

	t42 = ((x1309<=(x1310/x1311))<<x1312);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x1325 = INT64_MAX;
	volatile uint8_t x1326 = UINT8_MAX;
	int64_t x1327 = 339728LL;
	int64_t x1328 = 5LL;

	t43 = ((x1325<=(x1326/x1327))<<x1328);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x1379 = 31;

	t44 = ((x1377<=(x1378/x1379))<<x1380);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x1393 = -1;
	static int8_t x1394 = -1;
	int64_t x1395 = INT64_MAX;
	static uint8_t x1396 = 0U;

	t45 = ((x1393<=(x1394/x1395))<<x1396);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x1397 = 1U;
	volatile uint16_t x1399 = UINT16_MAX;
	volatile int16_t x1400 = 1;
	volatile int32_t t46 = 6;

	t46 = ((x1397<=(x1398/x1399))<<x1400);

	if (t46 != 2) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x1441 = INT8_MAX;
	int8_t x1442 = -1;
	uint8_t x1443 = 111U;
	uint8_t x1444 = 0U;

	t47 = ((x1441<=(x1442/x1443))<<x1444);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x1469 = INT8_MIN;
	int16_t x1470 = INT16_MIN;
	int64_t x1471 = INT64_MIN;
	static int32_t t48 = 7238;

	t48 = ((x1469<=(x1470/x1471))<<x1472);

	if (t48 != 2) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x1485 = -1;
	int8_t x1486 = -1;
	uint8_t x1487 = UINT8_MAX;
	int8_t x1488 = 14;
	int32_t t49 = 190799;

	t49 = ((x1485<=(x1486/x1487))<<x1488);

	if (t49 != 16384) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x1505 = 107LLU;
	int64_t x1506 = INT64_MIN;
	int64_t x1507 = 798215LL;
	int8_t x1508 = 1;
	int32_t t50 = 8578970;

	t50 = ((x1505<=(x1506/x1507))<<x1508);

	if (t50 != 2) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x1541 = INT8_MIN;
	int8_t x1542 = -6;
	volatile uint32_t x1544 = 6U;

	t51 = ((x1541<=(x1542/x1543))<<x1544);

	if (t51 != 64) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint8_t x1561 = 61U;
	volatile int8_t x1563 = -1;
	uint8_t x1564 = 4U;
	volatile int32_t t52 = -30533;

	t52 = ((x1561<=(x1562/x1563))<<x1564);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x1601 = INT16_MAX;
	uint64_t x1602 = UINT64_MAX;
	int16_t x1603 = INT16_MIN;
	uint8_t x1604 = 7U;
	static int32_t t53 = 12;

	t53 = ((x1601<=(x1602/x1603))<<x1604);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x1625 = 99228459407LLU;
	volatile int16_t x1627 = INT16_MIN;
	uint16_t x1628 = 1U;

	t54 = ((x1625<=(x1626/x1627))<<x1628);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x1638 = INT64_MIN;
	uint32_t x1640 = 1U;

	t55 = ((x1637<=(x1638/x1639))<<x1640);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x1746 = -1;
	int16_t x1747 = -1;
	int16_t x1748 = 30;
	int32_t t56 = 199980999;

	t56 = ((x1745<=(x1746/x1747))<<x1748);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x1753 = INT16_MIN;
	uint16_t x1754 = 16U;
	uint16_t x1756 = 1U;
	int32_t t57 = 80;

	t57 = ((x1753<=(x1754/x1755))<<x1756);

	if (t57 != 2) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x1873 = 7U;
	int32_t x1874 = INT32_MAX;
	static int16_t x1875 = INT16_MIN;
	int32_t x1876 = 3;
	static volatile int32_t t58 = -61304942;

	t58 = ((x1873<=(x1874/x1875))<<x1876);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x1885 = INT8_MIN;
	int16_t x1886 = -3;
	int64_t x1887 = -1LL;
	int8_t x1888 = 3;
	int32_t t59 = -6466865;

	t59 = ((x1885<=(x1886/x1887))<<x1888);

	if (t59 != 8) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x1893 = -8;
	int16_t x1895 = INT16_MIN;
	uint16_t x1896 = 2U;

	t60 = ((x1893<=(x1894/x1895))<<x1896);

	if (t60 != 4) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x1933 = 50U;
	static int16_t x1934 = INT16_MIN;
	int8_t x1935 = INT8_MAX;
	volatile uint16_t x1936 = 1U;
	volatile int32_t t61 = 388188;

	t61 = ((x1933<=(x1934/x1935))<<x1936);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x1937 = 30U;
	uint64_t x1938 = 890682893LLU;
	int16_t x1939 = INT16_MAX;
	static int32_t t62 = -3096587;

	t62 = ((x1937<=(x1938/x1939))<<x1940);

	if (t62 != 16) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x1941 = UINT64_MAX;
	uint64_t x1942 = 422732858LLU;
	static int8_t x1943 = 3;
	volatile int8_t x1944 = 3;
	volatile int32_t t63 = 943860;

	t63 = ((x1941<=(x1942/x1943))<<x1944);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x1945 = INT8_MAX;
	static volatile int32_t x1947 = -6477338;
	static int8_t x1948 = 7;
	int32_t t64 = 1500;

	t64 = ((x1945<=(x1946/x1947))<<x1948);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x1949 = INT8_MAX;
	static int8_t x1950 = -5;
	int8_t x1951 = INT8_MIN;
	uint32_t x1952 = 6U;

	t65 = ((x1949<=(x1950/x1951))<<x1952);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x1965 = 82U;
	int64_t x1966 = INT64_MIN;
	uint64_t x1967 = 10975932201LLU;
	uint16_t x1968 = 19U;
	int32_t t66 = 10;

	t66 = ((x1965<=(x1966/x1967))<<x1968);

	if (t66 != 524288) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x1970 = INT64_MIN;
	uint8_t x1972 = 19U;
	int32_t t67 = -495562;

	t67 = ((x1969<=(x1970/x1971))<<x1972);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x2009 = INT8_MAX;
	volatile int8_t x2010 = INT8_MAX;
	int16_t x2011 = INT16_MAX;
	volatile int32_t t68 = 11;

	t68 = ((x2009<=(x2010/x2011))<<x2012);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x2033 = 0LLU;
	static volatile uint8_t x2036 = 19U;

	t69 = ((x2033<=(x2034/x2035))<<x2036);

	if (t69 != 524288) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint64_t x2101 = 42LLU;
	int64_t x2102 = INT64_MIN;
	int16_t x2103 = INT16_MIN;
	uint32_t x2104 = 2U;
	volatile int32_t t70 = 179643;

	t70 = ((x2101<=(x2102/x2103))<<x2104);

	if (t70 != 4) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x2118 = UINT8_MAX;
	int64_t x2119 = -24605265465220887LL;
	static uint8_t x2120 = 3U;
	volatile int32_t t71 = -29083;

	t71 = ((x2117<=(x2118/x2119))<<x2120);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int32_t x2141 = -1;
	static int8_t x2142 = INT8_MAX;
	static int32_t x2143 = 913;
	uint16_t x2144 = 29U;

	t72 = ((x2141<=(x2142/x2143))<<x2144);

	if (t72 != 536870912) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint64_t x2149 = UINT64_MAX;
	static int16_t x2151 = INT16_MIN;
	volatile uint8_t x2152 = 26U;
	int32_t t73 = 8137778;

	t73 = ((x2149<=(x2150/x2151))<<x2152);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x2158 = INT16_MIN;
	int16_t x2159 = INT16_MIN;
	static uint16_t x2160 = 1U;
	int32_t t74 = 39141;

	t74 = ((x2157<=(x2158/x2159))<<x2160);

	if (t74 != 2) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x2169 = 3401053145LLU;
	static uint64_t x2170 = 1581771455LLU;
	static uint8_t x2172 = 12U;
	int32_t t75 = -8344647;

	t75 = ((x2169<=(x2170/x2171))<<x2172);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x2173 = -1;
	int16_t x2174 = INT16_MIN;
	int8_t x2175 = INT8_MAX;
	uint16_t x2176 = 8U;
	volatile int32_t t76 = -22465583;

	t76 = ((x2173<=(x2174/x2175))<<x2176);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x2189 = UINT64_MAX;
	int32_t x2190 = INT32_MIN;
	uint64_t x2191 = UINT64_MAX;
	uint8_t x2192 = 5U;
	int32_t t77 = -41705;

	t77 = ((x2189<=(x2190/x2191))<<x2192);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x2221 = INT8_MIN;
	int8_t x2222 = -30;
	int16_t x2224 = 1;

	t78 = ((x2221<=(x2222/x2223))<<x2224);

	if (t78 != 2) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x2285 = 114283555U;
	static uint8_t x2286 = 4U;
	static volatile int32_t t79 = 208023;

	t79 = ((x2285<=(x2286/x2287))<<x2288);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x2325 = -1LL;
	static uint16_t x2326 = 120U;
	static uint32_t x2327 = 166193309U;
	int32_t t80 = -22;

	t80 = ((x2325<=(x2326/x2327))<<x2328);

	if (t80 != 1048576) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x2333 = UINT16_MAX;
	int64_t x2334 = 223834LL;
	static volatile int8_t x2335 = INT8_MAX;
	uint64_t x2336 = 25LLU;
	int32_t t81 = 394609548;

	t81 = ((x2333<=(x2334/x2335))<<x2336);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x2385 = INT64_MIN;
	static int64_t x2386 = -179880205LL;
	int8_t x2387 = 57;
	int8_t x2388 = 7;

	t82 = ((x2385<=(x2386/x2387))<<x2388);

	if (t82 != 128) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x2401 = 5U;
	uint8_t x2402 = 0U;
	volatile int64_t x2403 = 48534156920LL;
	volatile uint32_t x2404 = 0U;
	volatile int32_t t83 = -14980796;

	t83 = ((x2401<=(x2402/x2403))<<x2404);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x2405 = INT32_MIN;
	volatile int16_t x2407 = -1;
	uint8_t x2408 = 0U;

	t84 = ((x2405<=(x2406/x2407))<<x2408);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x2413 = 1;
	uint8_t x2414 = UINT8_MAX;
	volatile int64_t x2415 = INT64_MAX;
	uint32_t x2416 = 14U;
	int32_t t85 = 100015;

	t85 = ((x2413<=(x2414/x2415))<<x2416);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x2453 = INT8_MAX;
	int8_t x2454 = INT8_MIN;
	uint16_t x2455 = 15U;
	volatile uint32_t x2456 = 1U;
	int32_t t86 = 3112604;

	t86 = ((x2453<=(x2454/x2455))<<x2456);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x2469 = 40135933U;
	uint32_t x2470 = UINT32_MAX;
	int8_t x2472 = 7;
	int32_t t87 = 98675737;

	t87 = ((x2469<=(x2470/x2471))<<x2472);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x2493 = UINT32_MAX;
	int16_t x2495 = -1364;
	uint16_t x2496 = 13U;
	int32_t t88 = -762237287;

	t88 = ((x2493<=(x2494/x2495))<<x2496);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x2509 = 1;
	int16_t x2510 = INT16_MIN;
	int8_t x2511 = 13;
	uint32_t x2512 = 21U;
	volatile int32_t t89 = -7123;

	t89 = ((x2509<=(x2510/x2511))<<x2512);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x2589 = -1;
	uint64_t x2590 = 420478LLU;
	volatile uint64_t x2591 = UINT64_MAX;
	volatile int32_t t90 = 1831;

	t90 = ((x2589<=(x2590/x2591))<<x2592);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x2633 = UINT8_MAX;
	int32_t x2634 = 217792;
	int8_t x2635 = -2;
	int8_t x2636 = 1;
	volatile int32_t t91 = -45690;

	t91 = ((x2633<=(x2634/x2635))<<x2636);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x2650 = 17049560LLU;
	static int8_t x2651 = 2;
	volatile int8_t x2652 = 1;
	int32_t t92 = -60;

	t92 = ((x2649<=(x2650/x2651))<<x2652);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x2705 = 6U;
	static int8_t x2706 = -1;
	volatile int8_t x2708 = 15;

	t93 = ((x2705<=(x2706/x2707))<<x2708);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x2769 = 18551942LLU;
	volatile uint32_t x2770 = UINT32_MAX;
	uint32_t x2771 = 23357U;
	volatile int32_t t94 = 91823690;

	t94 = ((x2769<=(x2770/x2771))<<x2772);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x2782 = 42068LLU;
	uint16_t x2783 = UINT16_MAX;
	volatile uint16_t x2784 = 0U;
	static volatile int32_t t95 = 6;

	t95 = ((x2781<=(x2782/x2783))<<x2784);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x2833 = 3869;
	int16_t x2835 = INT16_MIN;
	int8_t x2836 = 7;
	int32_t t96 = 1;

	t96 = ((x2833<=(x2834/x2835))<<x2836);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x2865 = 456235;
	int64_t x2866 = INT64_MIN;
	int8_t x2867 = 2;
	int32_t t97 = 716524;

	t97 = ((x2865<=(x2866/x2867))<<x2868);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x2869 = INT64_MIN;
	static volatile int32_t x2870 = -1;
	int32_t t98 = 0;

	t98 = ((x2869<=(x2870/x2871))<<x2872);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x2873 = -1;
	int32_t x2874 = -1;
	static uint8_t x2876 = 9U;

	t99 = ((x2873<=(x2874/x2875))<<x2876);

	if (t99 != 512) { NG(); } else { ; }
	
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


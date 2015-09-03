#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x63 = UINT8_MAX;
int64_t t2 = 8332LL;
int8_t x83 = 10;
volatile int32_t t3 = 3793;
static uint8_t x105 = UINT8_MAX;
int64_t x108 = 0LL;
static uint16_t x117 = 31U;
static int8_t x118 = 1;
uint64_t x119 = 426380LLU;
volatile uint64_t t5 = 639411135160051676LLU;
volatile int8_t x142 = -1;
volatile uint32_t x143 = 17425053U;
static int8_t x144 = 1;
volatile uint16_t x162 = UINT16_MAX;
uint32_t x241 = UINT32_MAX;
volatile int8_t x244 = 2;
uint32_t x263 = 114U;
volatile int64_t t11 = -95LL;
static int16_t x326 = -1;
int64_t x354 = INT64_MIN;
static int8_t x356 = 7;
static int16_t x477 = INT16_MIN;
int8_t x480 = 17;
int64_t x515 = 482LL;
int32_t x546 = -1;
int16_t x557 = 867;
int32_t x559 = INT32_MIN;
volatile int64_t t19 = 3525LL;
volatile uint16_t x592 = 15U;
uint64_t x601 = 5LLU;
uint32_t x705 = 4182U;
static uint16_t x759 = 24817U;
volatile int64_t t24 = 317944631254LL;
int64_t x846 = INT64_MIN;
uint32_t x848 = 16U;
int64_t t25 = -2776734734289980LL;
int32_t x891 = INT32_MIN;
uint64_t x894 = 16463461798LLU;
static uint64_t t28 = 140564290977559LLU;
uint64_t x932 = 31LLU;
uint8_t x1011 = 27U;
int64_t x1027 = -1LL;
volatile int64_t t34 = -3293796000575LL;
uint8_t x1160 = 6U;
uint32_t x1278 = 0U;
uint64_t x1279 = UINT64_MAX;
volatile uint64_t t37 = 10270481635674LLU;
int64_t x1307 = INT64_MIN;
int64_t t38 = 8358011535288244LL;
uint8_t x1324 = 8U;
int16_t x1373 = INT16_MIN;
volatile int8_t x1374 = 25;
static int64_t x1376 = 0LL;
volatile uint16_t x1435 = 0U;
static uint8_t x1436 = 11U;
int8_t x1484 = 7;
volatile int32_t t45 = -83;
uint16_t x1576 = 42U;
int16_t x1605 = 2014;
int16_t x1606 = INT16_MIN;
int32_t x1693 = -1;
int64_t x1698 = 1050267406LL;
static uint8_t x1700 = 3U;
volatile int32_t t52 = -5;
int16_t x1706 = INT16_MAX;
uint16_t x1799 = UINT16_MAX;
volatile uint8_t x1810 = UINT8_MAX;
static int8_t x1812 = 11;
static int64_t x1852 = 1LL;
int16_t x1873 = INT16_MIN;
uint32_t t59 = 73792U;
uint32_t x1881 = 257713U;
int32_t x1883 = INT32_MIN;
static int8_t x1884 = 7;
volatile int32_t x1922 = -121139;
volatile uint64_t x1923 = 3263178698432185LLU;
static int32_t x2008 = 21;
int8_t x2017 = INT8_MAX;
static int32_t x2067 = -451;
uint16_t x2068 = 1U;
int64_t x2087 = INT64_MAX;
int8_t x2096 = 27;
volatile int64_t t66 = -2695781LL;
uint16_t x2328 = 7U;
static int64_t t70 = -7977995LL;
volatile uint16_t x2418 = UINT16_MAX;
static volatile int8_t x2575 = INT8_MIN;
uint16_t x2576 = 12U;
int8_t x2603 = INT8_MIN;
volatile uint8_t x2622 = 47U;
int32_t x2641 = -16;
int8_t x2651 = 4;
uint64_t t79 = 1991LLU;
int8_t x2708 = 1;
static uint8_t x2713 = 99U;
int64_t x2774 = INT64_MIN;
int16_t x2849 = INT16_MIN;
int16_t x3001 = -1;
static int32_t t91 = 350486;
uint32_t x3115 = 238481U;
volatile int32_t x3321 = INT32_MIN;
static int8_t x3322 = 1;
int8_t x3441 = -1;
static int32_t t95 = -1818169;
static int16_t x3452 = 30;
static int16_t x3470 = INT16_MIN;
int8_t x3471 = -1;
int32_t t99 = -242415;


void f0(void) {
	int16_t x29 = INT16_MAX;
	uint8_t x30 = 4U;
	uint64_t x31 = 0LLU;
	volatile uint8_t x32 = 1U;
	volatile uint64_t t0 = 12227287113021LLU;

	t0 = ((x29/(x30^x31))>>x32);

	if (t0 != 4095LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x53 = INT16_MAX;
	uint32_t x54 = 473495U;
	int32_t x55 = INT32_MIN;
	int16_t x56 = 0;
	static volatile uint32_t t1 = 21407U;

	t1 = ((x53/(x54^x55))>>x56);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x61 = INT64_MIN;
	int8_t x62 = -29;
	volatile int16_t x64 = 10;

	t2 = ((x61/(x62^x63))>>x64);

	if (t2 != 39505259889214LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x81 = -1;
	static volatile int8_t x82 = -1;
	uint8_t x84 = 21U;

	t3 = ((x81/(x82^x83))>>x84);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x106 = 6LLU;
	int16_t x107 = INT16_MIN;
	uint64_t t4 = 958666265134676LLU;

	t4 = ((x105/(x106^x107))>>x108);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x120 = 10U;

	t5 = ((x117/(x118^x119))>>x120);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x141 = INT16_MIN;
	volatile uint32_t t6 = 135543414U;

	t6 = ((x141/(x142^x143))>>x144);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x161 = 6844U;
	int16_t x163 = INT16_MIN;
	int8_t x164 = 0;
	int32_t t7 = -1297;

	t7 = ((x161/(x162^x163))>>x164);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x242 = UINT32_MAX;
	static volatile uint64_t x243 = UINT64_MAX;
	uint64_t t8 = 16962504114LLU;

	t8 = ((x241/(x242^x243))>>x244);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x261 = INT8_MIN;
	static int32_t x262 = 13427626;
	uint8_t x264 = 0U;
	uint32_t t9 = 2614543U;

	t9 = ((x261/(x262^x263))>>x264);

	if (t9 != 319U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x281 = -1;
	int8_t x282 = 4;
	int32_t x283 = INT32_MIN;
	int32_t x284 = 1;
	static volatile int32_t t10 = -8253;

	t10 = ((x281/(x282^x283))>>x284);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x293 = -142LL;
	static uint32_t x294 = 747980443U;
	int32_t x295 = -548423;
	int8_t x296 = 22;

	t11 = ((x293/(x294^x295))>>x296);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x325 = 42;
	uint64_t x327 = 8LLU;
	uint32_t x328 = 19U;
	uint64_t t12 = 21766653631343LLU;

	t12 = ((x325/(x326^x327))>>x328);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x349 = INT64_MIN;
	int8_t x350 = INT8_MIN;
	int32_t x351 = 12560515;
	static int8_t x352 = 1;
	volatile int64_t t13 = 7176722LL;

	t13 = ((x349/(x350^x351))>>x352);

	if (t13 != 367153832916LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x353 = INT64_MAX;
	int32_t x355 = -1;
	static volatile int64_t t14 = 87095206999520279LL;

	t14 = ((x353/(x354^x355))>>x356);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x478 = -6600358787634336LL;
	int64_t x479 = -57200086322562731LL;
	volatile int64_t t15 = 0LL;

	t15 = ((x477/(x478^x479))>>x480);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint16_t x513 = 2U;
	static volatile int32_t x514 = INT32_MIN;
	static uint8_t x516 = 1U;
	volatile int64_t t16 = -2603609531LL;

	t16 = ((x513/(x514^x515))>>x516);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x545 = 185994440U;
	uint16_t x547 = UINT16_MAX;
	uint16_t x548 = 14U;
	volatile uint32_t t17 = 2570211U;

	t17 = ((x545/(x546^x547))>>x548);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x558 = 9U;
	volatile uint8_t x560 = 3U;
	int32_t t18 = 218964;

	t18 = ((x557/(x558^x559))>>x560);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x573 = -1;
	int64_t x574 = INT64_MIN;
	static int16_t x575 = -6246;
	int8_t x576 = 3;

	t19 = ((x573/(x574^x575))>>x576);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x589 = -64038;
	static int64_t x590 = -254779114004296LL;
	int64_t x591 = INT64_MIN;
	volatile int64_t t20 = -2801800336844LL;

	t20 = ((x589/(x590^x591))>>x592);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x602 = INT32_MAX;
	static int8_t x603 = INT8_MIN;
	int8_t x604 = 1;
	volatile uint64_t t21 = 0LLU;

	t21 = ((x601/(x602^x603))>>x604);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x681 = 13;
	int32_t x682 = INT32_MAX;
	static volatile int32_t x683 = -1;
	static int8_t x684 = 1;
	int32_t t22 = -1;

	t22 = ((x681/(x682^x683))>>x684);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x706 = -524;
	uint16_t x707 = UINT16_MAX;
	uint16_t x708 = 5U;
	uint32_t t23 = 70163007U;

	t23 = ((x705/(x706^x707))>>x708);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x757 = INT8_MAX;
	int64_t x758 = 1LL;
	int16_t x760 = 53;

	t24 = ((x757/(x758^x759))>>x760);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x845 = 6937;
	static int32_t x847 = INT32_MAX;

	t25 = ((x845/(x846^x847))>>x848);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x857 = -6158;
	int32_t x858 = 32;
	int32_t x859 = INT32_MIN;
	int8_t x860 = 1;
	static int32_t t26 = -123;

	t26 = ((x857/(x858^x859))>>x860);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x889 = -1LL;
	int8_t x890 = INT8_MAX;
	int16_t x892 = 26;
	int64_t t27 = 48LL;

	t27 = ((x889/(x890^x891))>>x892);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x893 = 11070093;
	int64_t x895 = INT64_MAX;
	int32_t x896 = 0;

	t28 = ((x893/(x894^x895))>>x896);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x925 = 1;
	uint64_t x926 = 1010476496006011982LLU;
	static int8_t x927 = INT8_MAX;
	volatile uint8_t x928 = 21U;
	volatile uint64_t t29 = 361751234046702LLU;

	t29 = ((x925/(x926^x927))>>x928);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x929 = INT8_MIN;
	volatile uint32_t x930 = UINT32_MAX;
	static uint16_t x931 = 296U;
	volatile uint32_t t30 = 12U;

	t30 = ((x929/(x930^x931))>>x932);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x977 = 939;
	volatile uint64_t x978 = 7LLU;
	int64_t x979 = -4277159277811864LL;
	int8_t x980 = 12;
	uint64_t t31 = 254903LLU;

	t31 = ((x977/(x978^x979))>>x980);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1009 = 486778705800528LLU;
	static uint64_t x1010 = 930655548762998034LLU;
	volatile uint8_t x1012 = 4U;
	volatile uint64_t t32 = 50648750LLU;

	t32 = ((x1009/(x1010^x1011))>>x1012);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x1025 = 171;
	int64_t x1026 = INT64_MIN;
	uint8_t x1028 = 1U;
	volatile int64_t t33 = -821160677LL;

	t33 = ((x1025/(x1026^x1027))>>x1028);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1141 = INT32_MIN;
	volatile int64_t x1142 = INT64_MAX;
	int32_t x1143 = -133;
	volatile int64_t x1144 = 52LL;

	t34 = ((x1141/(x1142^x1143))>>x1144);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint64_t x1157 = 43765107113926LLU;
	int32_t x1158 = INT32_MIN;
	static volatile uint32_t x1159 = 96074U;
	uint64_t t35 = 344LLU;

	t35 = ((x1157/(x1158^x1159))>>x1160);

	if (t35 != 318LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1189 = INT32_MAX;
	int16_t x1190 = -1;
	int32_t x1191 = -507522969;
	static int16_t x1192 = 1;
	int32_t t36 = -1431328;

	t36 = ((x1189/(x1190^x1191))>>x1192);

	if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x1277 = -1;
	uint8_t x1280 = 27U;

	t37 = ((x1277/(x1278^x1279))>>x1280);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x1305 = 52U;
	volatile uint8_t x1306 = 1U;
	uint8_t x1308 = 0U;

	t38 = ((x1305/(x1306^x1307))>>x1308);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x1321 = 0U;
	static uint64_t x1322 = UINT64_MAX;
	volatile int32_t x1323 = INT32_MIN;
	volatile uint64_t t39 = 1529LLU;

	t39 = ((x1321/(x1322^x1323))>>x1324);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x1375 = -1LL;
	int64_t t40 = 537052LL;

	t40 = ((x1373/(x1374^x1375))>>x1376);

	if (t40 != 1260LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x1433 = INT8_MAX;
	uint16_t x1434 = 10068U;
	volatile int32_t t41 = 52029;

	t41 = ((x1433/(x1434^x1435))>>x1436);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x1481 = 3493U;
	int64_t x1482 = -1LL;
	static volatile uint32_t x1483 = 1995911472U;
	static int64_t t42 = 2621526491072680LL;

	t42 = ((x1481/(x1482^x1483))>>x1484);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x1485 = 15747;
	volatile uint32_t x1486 = UINT32_MAX;
	static int32_t x1487 = 5;
	int8_t x1488 = 1;
	volatile uint32_t t43 = 6634381U;

	t43 = ((x1485/(x1486^x1487))>>x1488);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int16_t x1537 = 54;
	int8_t x1538 = -1;
	uint32_t x1539 = 28U;
	uint64_t x1540 = 6LLU;
	static uint32_t t44 = 10U;

	t44 = ((x1537/(x1538^x1539))>>x1540);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1541 = INT8_MIN;
	static int16_t x1542 = INT16_MAX;
	uint8_t x1543 = 48U;
	uint16_t x1544 = 9U;

	t45 = ((x1541/(x1542^x1543))>>x1544);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x1549 = INT8_MAX;
	static int8_t x1550 = INT8_MIN;
	int16_t x1551 = -1;
	static volatile int8_t x1552 = 0;
	int32_t t46 = -10;

	t46 = ((x1549/(x1550^x1551))>>x1552);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x1573 = 2960346LLU;
	int32_t x1574 = INT32_MAX;
	int64_t x1575 = INT64_MIN;
	uint64_t t47 = 55579819LLU;

	t47 = ((x1573/(x1574^x1575))>>x1576);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x1607 = INT64_MIN;
	uint16_t x1608 = 2U;
	volatile int64_t t48 = -4748465756233LL;

	t48 = ((x1605/(x1606^x1607))>>x1608);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x1653 = UINT8_MAX;
	uint64_t x1654 = 12435026903LLU;
	int32_t x1655 = INT32_MIN;
	volatile uint32_t x1656 = 2U;
	uint64_t t49 = 3LLU;

	t49 = ((x1653/(x1654^x1655))>>x1656);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x1694 = -1;
	static int64_t x1695 = INT64_MIN;
	uint8_t x1696 = 2U;
	static volatile int64_t t50 = 40629862185LL;

	t50 = ((x1693/(x1694^x1695))>>x1696);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x1697 = INT8_MIN;
	int32_t x1699 = -14342983;
	int64_t t51 = 2041609333LL;

	t51 = ((x1697/(x1698^x1699))>>x1700);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x1701 = INT8_MIN;
	int8_t x1702 = INT8_MIN;
	static uint8_t x1703 = 14U;
	uint8_t x1704 = 2U;

	t52 = ((x1701/(x1702^x1703))>>x1704);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x1705 = UINT32_MAX;
	uint64_t x1707 = UINT64_MAX;
	int8_t x1708 = 15;
	uint64_t t53 = 47542283053070256LLU;

	t53 = ((x1705/(x1706^x1707))>>x1708);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x1765 = 1555917289280647LLU;
	int32_t x1766 = INT32_MAX;
	int64_t x1767 = INT64_MIN;
	int64_t x1768 = 1LL;
	uint64_t t54 = 962LLU;

	t54 = ((x1765/(x1766^x1767))>>x1768);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x1797 = INT8_MAX;
	static volatile int64_t x1798 = INT64_MIN;
	uint8_t x1800 = 13U;
	int64_t t55 = -12110421188009LL;

	t55 = ((x1797/(x1798^x1799))>>x1800);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x1809 = -7226LL;
	uint32_t x1811 = 10412617U;
	int64_t t56 = -16149256015318LL;

	t56 = ((x1809/(x1810^x1811))>>x1812);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x1817 = -1;
	int8_t x1818 = -1;
	uint64_t x1819 = 17474305938845899LLU;
	volatile uint8_t x1820 = 1U;
	volatile uint64_t t57 = 3414150LLU;

	t57 = ((x1817/(x1818^x1819))>>x1820);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x1849 = 808410729630284010LLU;
	volatile int8_t x1850 = -29;
	volatile int64_t x1851 = INT64_MIN;
	uint64_t t58 = 331899764113439330LLU;

	t58 = ((x1849/(x1850^x1851))>>x1852);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x1874 = 2U;
	int32_t x1875 = INT32_MIN;
	uint32_t x1876 = 22U;

	t59 = ((x1873/(x1874^x1875))>>x1876);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x1882 = INT16_MIN;
	uint32_t t60 = 1U;

	t60 = ((x1881/(x1882^x1883))>>x1884);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x1921 = 39U;
	int32_t x1924 = 0;
	uint64_t t61 = 7231643306503015929LLU;

	t61 = ((x1921/(x1922^x1923))>>x1924);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x2005 = INT8_MIN;
	uint64_t x2006 = UINT64_MAX;
	volatile uint32_t x2007 = 1198167U;
	static uint64_t t62 = 3119337514877LLU;

	t62 = ((x2005/(x2006^x2007))>>x2008);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x2018 = -20;
	uint16_t x2019 = 1190U;
	volatile int64_t x2020 = 0LL;
	volatile int32_t t63 = -433;

	t63 = ((x2017/(x2018^x2019))>>x2020);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x2065 = 27U;
	uint32_t x2066 = 688739901U;
	static uint32_t t64 = 26642U;

	t64 = ((x2065/(x2066^x2067))>>x2068);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x2085 = UINT64_MAX;
	static int64_t x2086 = 34995LL;
	int8_t x2088 = 0;
	uint64_t t65 = 364661LLU;

	t65 = ((x2085/(x2086^x2087))>>x2088);

	if (t65 != 2LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x2093 = INT64_MIN;
	static int16_t x2094 = INT16_MIN;
	uint16_t x2095 = 19U;

	t66 = ((x2093/(x2094^x2095))>>x2096);

	if (t66 != 2098368LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x2141 = UINT32_MAX;
	int32_t x2142 = 24671;
	volatile int16_t x2143 = 6;
	volatile uint16_t x2144 = 5U;
	volatile uint32_t t67 = 24U;

	t67 = ((x2141/(x2142^x2143))>>x2144);

	if (t67 != 5441U) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x2325 = 3588375U;
	int32_t x2326 = -144;
	int8_t x2327 = 50;
	volatile uint32_t t68 = 119U;

	t68 = ((x2325/(x2326^x2327))>>x2328);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x2333 = 1762041523850942LLU;
	static uint8_t x2334 = 112U;
	int8_t x2335 = INT8_MIN;
	volatile int16_t x2336 = 0;
	uint64_t t69 = 34944354501789693LLU;

	t69 = ((x2333/(x2334^x2335))>>x2336);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x2401 = -1965180113523279LL;
	int8_t x2402 = 1;
	int32_t x2403 = INT32_MIN;
	uint32_t x2404 = 0U;

	t70 = ((x2401/(x2402^x2403))>>x2404);

	if (t70 != 915108LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x2417 = INT8_MAX;
	int32_t x2419 = 258887;
	int8_t x2420 = 3;
	int32_t t71 = 1364;

	t71 = ((x2417/(x2418^x2419))>>x2420);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x2469 = 21;
	static uint32_t x2470 = 158411210U;
	uint8_t x2471 = UINT8_MAX;
	uint8_t x2472 = 30U;
	volatile uint32_t t72 = 3U;

	t72 = ((x2469/(x2470^x2471))>>x2472);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x2573 = INT64_MIN;
	uint8_t x2574 = UINT8_MAX;
	static int64_t t73 = -74874795903278LL;

	t73 = ((x2573/(x2574^x2575))>>x2576);

	if (t73 != 17455812509187LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x2581 = 115;
	uint32_t x2582 = 20358U;
	int16_t x2583 = 481;
	volatile uint16_t x2584 = 1U;
	uint32_t t74 = 234U;

	t74 = ((x2581/(x2582^x2583))>>x2584);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x2601 = INT16_MAX;
	int8_t x2602 = -1;
	int16_t x2604 = 1;
	static int32_t t75 = -29;

	t75 = ((x2601/(x2602^x2603))>>x2604);

	if (t75 != 129) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x2621 = INT32_MIN;
	int32_t x2623 = INT32_MIN;
	volatile int32_t x2624 = 14;
	static int32_t t76 = 1;

	t76 = ((x2621/(x2622^x2623))>>x2624);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x2642 = 6559260802LLU;
	static int64_t x2643 = 36020798846854LL;
	static uint8_t x2644 = 25U;
	uint64_t t77 = 13352460137LLU;

	t77 = ((x2641/(x2642^x2643))>>x2644);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x2649 = UINT8_MAX;
	uint64_t x2650 = 37466142675LLU;
	uint16_t x2652 = 0U;
	volatile uint64_t t78 = 200203899128396492LLU;

	t78 = ((x2649/(x2650^x2651))>>x2652);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x2693 = 26LLU;
	uint64_t x2694 = 39603LLU;
	volatile uint32_t x2695 = UINT32_MAX;
	volatile int16_t x2696 = 0;

	t79 = ((x2693/(x2694^x2695))>>x2696);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x2705 = INT16_MIN;
	int64_t x2706 = -5210403538LL;
	static int8_t x2707 = 3;
	int64_t t80 = 14LL;

	t80 = ((x2705/(x2706^x2707))>>x2708);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x2714 = 0U;
	int64_t x2715 = INT64_MIN;
	volatile uint8_t x2716 = 6U;
	volatile int64_t t81 = 650667LL;

	t81 = ((x2713/(x2714^x2715))>>x2716);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x2717 = 707132593LL;
	uint64_t x2718 = 19848555LLU;
	int8_t x2719 = -1;
	uint8_t x2720 = 14U;
	uint64_t t82 = 340031209294LLU;

	t82 = ((x2717/(x2718^x2719))>>x2720);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x2753 = INT32_MIN;
	int16_t x2754 = INT16_MIN;
	volatile uint64_t x2755 = 15LLU;
	volatile int8_t x2756 = 7;
	volatile uint64_t t83 = 237294063603102LLU;

	t83 = ((x2753/(x2754^x2755))>>x2756);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x2757 = -2LL;
	uint8_t x2758 = 23U;
	static int64_t x2759 = INT64_MIN;
	uint8_t x2760 = 2U;
	volatile int64_t t84 = -2013854LL;

	t84 = ((x2757/(x2758^x2759))>>x2760);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x2773 = INT8_MIN;
	static int32_t x2775 = 30223457;
	uint8_t x2776 = 10U;
	static int64_t t85 = -1LL;

	t85 = ((x2773/(x2774^x2775))>>x2776);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x2850 = 454463457;
	int32_t x2851 = INT32_MIN;
	static volatile uint8_t x2852 = 7U;
	int32_t t86 = 10918655;

	t86 = ((x2849/(x2850^x2851))>>x2852);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x2857 = -1LL;
	int64_t x2858 = INT64_MAX;
	static int16_t x2859 = INT16_MAX;
	static uint8_t x2860 = 1U;
	static int64_t t87 = -26897LL;

	t87 = ((x2857/(x2858^x2859))>>x2860);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x2985 = -25;
	int32_t x2986 = -1;
	int32_t x2987 = INT32_MAX;
	static int8_t x2988 = 0;
	volatile int32_t t88 = -8084;

	t88 = ((x2985/(x2986^x2987))>>x2988);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x2993 = INT32_MIN;
	uint8_t x2994 = UINT8_MAX;
	int8_t x2995 = -1;
	volatile int64_t x2996 = 13LL;
	int32_t t89 = 617875;

	t89 = ((x2993/(x2994^x2995))>>x2996);

	if (t89 != 1024) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x3002 = UINT16_MAX;
	int16_t x3003 = INT16_MAX;
	uint8_t x3004 = 31U;
	int32_t t90 = 1;

	t90 = ((x3001/(x3002^x3003))>>x3004);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x3061 = INT16_MAX;
	volatile uint8_t x3062 = UINT8_MAX;
	static uint16_t x3063 = 0U;
	volatile int8_t x3064 = 3;

	t91 = ((x3061/(x3062^x3063))>>x3064);

	if (t91 != 16) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x3113 = -6;
	int64_t x3114 = -32763192575318LL;
	int8_t x3116 = 56;
	int64_t t92 = 149LL;

	t92 = ((x3113/(x3114^x3115))>>x3116);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x3323 = INT8_MIN;
	uint32_t x3324 = 12U;
	volatile int32_t t93 = 0;

	t93 = ((x3321/(x3322^x3323))>>x3324);

	if (t93 != 4128) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x3397 = 0;
	int32_t x3398 = INT32_MIN;
	uint16_t x3399 = 22445U;
	uint8_t x3400 = 1U;
	volatile int32_t t94 = 35156;

	t94 = ((x3397/(x3398^x3399))>>x3400);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x3442 = INT8_MAX;
	int32_t x3443 = -271927;
	int16_t x3444 = 1;

	t95 = ((x3441/(x3442^x3443))>>x3444);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x3449 = 2679863364889674129LLU;
	uint16_t x3450 = 652U;
	static int32_t x3451 = 121671773;
	volatile uint64_t t96 = 61939LLU;

	t96 = ((x3449/(x3450^x3451))>>x3452);

	if (t96 != 20LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x3469 = -59;
	int16_t x3472 = 1;
	volatile int32_t t97 = -881344;

	t97 = ((x3469/(x3470^x3471))>>x3472);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x3537 = 881U;
	volatile uint64_t x3538 = UINT64_MAX;
	static volatile uint8_t x3539 = 33U;
	volatile int16_t x3540 = 1;
	static uint64_t t98 = 275599LLU;

	t98 = ((x3537/(x3538^x3539))>>x3540);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x3545 = 23;
	uint8_t x3546 = 29U;
	volatile uint16_t x3547 = 4289U;
	volatile uint16_t x3548 = 7U;

	t99 = ((x3545/(x3546^x3547))>>x3548);

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


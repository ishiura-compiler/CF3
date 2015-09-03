#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x23 = 1714U;
static int16_t x73 = -509;
uint8_t x101 = UINT8_MAX;
volatile int8_t x104 = 8;
uint8_t x150 = 18U;
uint64_t x159 = 20074771027LLU;
volatile int8_t x160 = 1;
int32_t t5 = 166;
volatile uint16_t x176 = 20U;
volatile int32_t t6 = 6;
int32_t x182 = INT32_MIN;
int64_t x231 = INT64_MIN;
volatile int32_t t8 = 8852881;
uint64_t x237 = 8454779600706158673LLU;
int32_t t9 = 3948;
volatile uint32_t x247 = 1U;
int32_t t12 = 278719;
int64_t x330 = INT64_MAX;
static int32_t x333 = INT32_MIN;
int32_t x334 = -1;
static int32_t t14 = -73;
int16_t x353 = 165;
volatile uint32_t x356 = 11U;
volatile uint16_t x425 = UINT16_MAX;
int64_t x426 = INT64_MAX;
int64_t x434 = 20540615181270LL;
static uint8_t x435 = 0U;
int16_t x440 = 0;
volatile int16_t x589 = INT16_MAX;
static int16_t x592 = 1;
volatile int32_t t19 = -119048163;
volatile uint8_t x600 = 5U;
static volatile int32_t t22 = 2765619;
volatile int32_t t23 = -30744620;
uint8_t x748 = 25U;
volatile int64_t x777 = INT64_MAX;
volatile int64_t x779 = INT64_MAX;
int32_t t26 = -25409;
int32_t t27 = 8011151;
uint32_t x831 = 33265U;
int16_t x845 = INT16_MAX;
static uint64_t x846 = 9003LLU;
int32_t t31 = 0;
int32_t t33 = -7;
static volatile uint8_t x1003 = 1U;
int8_t x1010 = 24;
int32_t t38 = 2582167;
volatile int32_t t41 = -1947003;
uint64_t x1194 = 5760892816LLU;
volatile int16_t x1378 = -1880;
volatile int16_t x1394 = -2;
static uint16_t x1396 = 9U;
int64_t x1437 = -1LL;
static uint16_t x1494 = 1090U;
uint8_t x1496 = 0U;
int16_t x1587 = -1;
volatile int32_t t52 = 42183636;
int16_t x1632 = 8;
int64_t x1638 = INT64_MAX;
volatile int64_t x1730 = -1LL;
volatile int32_t t56 = 2248395;
static int16_t x1743 = INT16_MIN;
uint16_t x1744 = 2U;
uint16_t x1939 = UINT16_MAX;
uint8_t x1940 = 3U;
int16_t x1965 = -1;
static int16_t x1996 = 10;
int32_t t62 = 88;
static volatile int32_t t63 = -98380;
uint64_t x2086 = UINT64_MAX;
static int16_t x2087 = -1;
int8_t x2093 = -2;
int8_t x2095 = INT8_MAX;
int16_t x2155 = -1;
uint8_t x2156 = 1U;
int32_t x2337 = INT32_MAX;
static int64_t x2338 = 121LL;
volatile int16_t x2536 = 3;
int16_t x2833 = -1;
static volatile int32_t t78 = 4;
volatile uint32_t x2855 = 1U;
int32_t t80 = -3;
uint16_t x2926 = UINT16_MAX;
volatile int32_t t81 = -15;
uint32_t x2951 = UINT32_MAX;
static int64_t x2977 = INT64_MAX;
int32_t x2978 = -22346280;
int16_t x3003 = INT16_MAX;
int16_t x3113 = INT16_MIN;
volatile uint16_t x3116 = 0U;
static int32_t x3169 = INT32_MIN;
static int32_t x3171 = 1;
int16_t x3172 = 0;
int32_t t87 = 15612;
volatile int16_t x3181 = INT16_MIN;
int8_t x3253 = INT8_MAX;
int32_t t91 = -13;
int32_t t92 = 1000;
uint32_t x3390 = UINT32_MAX;
int32_t x3392 = 1;
uint64_t x3430 = 234879417774976623LLU;
volatile int32_t t96 = 932;
int64_t x3573 = INT64_MAX;
static int8_t x3703 = INT8_MIN;
static volatile int32_t t99 = -26298;


void f0(void) {
	volatile int8_t x21 = -39;
	int8_t x22 = 6;
	volatile uint16_t x24 = 0U;
	static int32_t t0 = 551516251;

	t0 = (x21<=((x22<x23)<<x24));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x29 = 339U;
	uint16_t x30 = UINT16_MAX;
	uint32_t x31 = UINT32_MAX;
	volatile uint8_t x32 = 25U;
	volatile int32_t t1 = 12728;

	t1 = (x29<=((x30<x31)<<x32));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x74 = -1LL;
	int32_t x75 = INT32_MIN;
	static int16_t x76 = 1;
	volatile int32_t t2 = -122;

	t2 = (x73<=((x74<x75)<<x76));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x102 = -1;
	uint64_t x103 = UINT64_MAX;
	int32_t t3 = -507;

	t3 = (x101<=((x102<x103)<<x104));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x149 = INT32_MIN;
	uint16_t x151 = 1087U;
	volatile uint16_t x152 = 3U;
	int32_t t4 = -10811;

	t4 = (x149<=((x150<x151)<<x152));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x157 = 418009442U;
	uint8_t x158 = 6U;

	t5 = (x157<=((x158<x159)<<x160));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x173 = -1LL;
	int64_t x174 = INT64_MIN;
	int64_t x175 = 2LL;

	t6 = (x173<=((x174<x175)<<x176));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x181 = -1;
	int32_t x183 = INT32_MAX;
	static volatile uint16_t x184 = 26U;
	volatile int32_t t7 = -13;

	t7 = (x181<=((x182<x183)<<x184));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x229 = UINT16_MAX;
	static int64_t x230 = -108069413125LL;
	uint16_t x232 = 9U;

	t8 = (x229<=((x230<x231)<<x232));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x238 = INT64_MAX;
	int8_t x239 = -1;
	static uint8_t x240 = 4U;

	t9 = (x237<=((x238<x239)<<x240));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x245 = UINT8_MAX;
	volatile int8_t x246 = INT8_MAX;
	uint8_t x248 = 1U;
	volatile int32_t t10 = -143;

	t10 = (x245<=((x246<x247)<<x248));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x265 = INT32_MAX;
	int64_t x266 = INT64_MIN;
	uint8_t x267 = 56U;
	uint32_t x268 = 0U;
	volatile int32_t t11 = 5737273;

	t11 = (x265<=((x266<x267)<<x268));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x285 = 6U;
	uint16_t x286 = 0U;
	static int8_t x287 = 1;
	int8_t x288 = 15;

	t12 = (x285<=((x286<x287)<<x288));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x329 = 2LL;
	uint32_t x331 = UINT32_MAX;
	int8_t x332 = 2;
	static int32_t t13 = 833920974;

	t13 = (x329<=((x330<x331)<<x332));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x335 = -4;
	int8_t x336 = 14;

	t14 = (x333<=((x334<x335)<<x336));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x354 = -12661LL;
	static int8_t x355 = -1;
	int32_t t15 = -333434;

	t15 = (x353<=((x354<x355)<<x356));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x427 = 0;
	volatile uint16_t x428 = 9U;
	int32_t t16 = 137186777;

	t16 = (x425<=((x426<x427)<<x428));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x433 = INT32_MIN;
	uint8_t x436 = 4U;
	int32_t t17 = -388;

	t17 = (x433<=((x434<x435)<<x436));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x437 = UINT64_MAX;
	int16_t x438 = INT16_MAX;
	int32_t x439 = INT32_MAX;
	volatile int32_t t18 = -459852;

	t18 = (x437<=((x438<x439)<<x440));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x590 = -1;
	int16_t x591 = 13;

	t19 = (x589<=((x590<x591)<<x592));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x597 = 1597;
	uint8_t x598 = UINT8_MAX;
	int32_t x599 = INT32_MIN;
	volatile int32_t t20 = -23029732;

	t20 = (x597<=((x598<x599)<<x600));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x633 = 21LLU;
	int8_t x634 = -1;
	int8_t x635 = -44;
	uint16_t x636 = 2U;
	int32_t t21 = -587712;

	t21 = (x633<=((x634<x635)<<x636));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x641 = 7U;
	int64_t x642 = INT64_MIN;
	int64_t x643 = -1LL;
	uint16_t x644 = 19U;

	t22 = (x641<=((x642<x643)<<x644));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x725 = UINT32_MAX;
	static int32_t x726 = -1;
	int8_t x727 = -1;
	int16_t x728 = 1;

	t23 = (x725<=((x726<x727)<<x728));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x745 = -1;
	static int32_t x746 = -1971;
	volatile int64_t x747 = -2098943084776LL;
	volatile int32_t t24 = 10727022;

	t24 = (x745<=((x746<x747)<<x748));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x773 = 58765968134348LLU;
	int32_t x774 = -1;
	int16_t x775 = INT16_MIN;
	int8_t x776 = 6;
	static volatile int32_t t25 = 6067745;

	t25 = (x773<=((x774<x775)<<x776));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x778 = 231063565U;
	static uint64_t x780 = 1LLU;

	t26 = (x777<=((x778<x779)<<x780));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x805 = 3U;
	int16_t x806 = INT16_MAX;
	int16_t x807 = INT16_MAX;
	int8_t x808 = 0;

	t27 = (x805<=((x806<x807)<<x808));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x829 = -1;
	int8_t x830 = -31;
	uint16_t x832 = 7U;
	int32_t t28 = -179802;

	t28 = (x829<=((x830<x831)<<x832));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x847 = INT32_MAX;
	volatile uint8_t x848 = 16U;
	int32_t t29 = -1554896;

	t29 = (x845<=((x846<x847)<<x848));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x873 = 2U;
	static uint16_t x874 = 3U;
	volatile int16_t x875 = 0;
	uint32_t x876 = 1U;
	static int32_t t30 = -4915;

	t30 = (x873<=((x874<x875)<<x876));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x905 = UINT16_MAX;
	uint64_t x906 = 43LLU;
	int32_t x907 = INT32_MAX;
	uint64_t x908 = 9LLU;

	t31 = (x905<=((x906<x907)<<x908));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x909 = 1;
	int16_t x910 = 125;
	int32_t x911 = 95;
	int32_t x912 = 2;
	int32_t t32 = -7;

	t32 = (x909<=((x910<x911)<<x912));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x925 = -27;
	int32_t x926 = -1;
	uint16_t x927 = 3002U;
	volatile uint8_t x928 = 0U;

	t33 = (x925<=((x926<x927)<<x928));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x973 = 7U;
	int16_t x974 = INT16_MIN;
	int64_t x975 = 434LL;
	static uint8_t x976 = 30U;
	volatile int32_t t34 = 7545;

	t34 = (x973<=((x974<x975)<<x976));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x989 = UINT16_MAX;
	int16_t x990 = INT16_MAX;
	int8_t x991 = INT8_MIN;
	volatile int8_t x992 = 1;
	volatile int32_t t35 = -6152;

	t35 = (x989<=((x990<x991)<<x992));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x993 = -1LL;
	int16_t x994 = -1;
	int8_t x995 = -8;
	int8_t x996 = 1;
	volatile int32_t t36 = -21701631;

	t36 = (x993<=((x994<x995)<<x996));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1001 = INT64_MIN;
	int16_t x1002 = INT16_MIN;
	uint8_t x1004 = 2U;
	static volatile int32_t t37 = 5451895;

	t37 = (x1001<=((x1002<x1003)<<x1004));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1009 = -120896LL;
	uint8_t x1011 = UINT8_MAX;
	uint8_t x1012 = 6U;

	t38 = (x1009<=((x1010<x1011)<<x1012));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x1069 = 2U;
	static uint16_t x1070 = 3457U;
	uint64_t x1071 = UINT64_MAX;
	uint64_t x1072 = 6LLU;
	int32_t t39 = 178805072;

	t39 = (x1069<=((x1070<x1071)<<x1072));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x1089 = INT64_MIN;
	int64_t x1090 = INT64_MIN;
	uint8_t x1091 = 17U;
	int8_t x1092 = 0;
	int32_t t40 = -2;

	t40 = (x1089<=((x1090<x1091)<<x1092));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1125 = -3;
	int16_t x1126 = INT16_MIN;
	volatile int64_t x1127 = INT64_MIN;
	uint8_t x1128 = 2U;

	t41 = (x1125<=((x1126<x1127)<<x1128));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x1145 = 1615U;
	int8_t x1146 = 2;
	static int16_t x1147 = -7984;
	uint8_t x1148 = 2U;
	int32_t t42 = 118358263;

	t42 = (x1145<=((x1146<x1147)<<x1148));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x1177 = -1;
	int8_t x1178 = INT8_MIN;
	uint16_t x1179 = UINT16_MAX;
	int8_t x1180 = 0;
	int32_t t43 = 4125502;

	t43 = (x1177<=((x1178<x1179)<<x1180));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x1193 = -1;
	uint8_t x1195 = UINT8_MAX;
	uint8_t x1196 = 7U;
	int32_t t44 = 65981697;

	t44 = (x1193<=((x1194<x1195)<<x1196));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1365 = INT8_MAX;
	int16_t x1366 = INT16_MIN;
	int32_t x1367 = INT32_MIN;
	int8_t x1368 = 21;
	volatile int32_t t45 = -3;

	t45 = (x1365<=((x1366<x1367)<<x1368));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x1377 = INT64_MAX;
	uint16_t x1379 = 11654U;
	volatile uint32_t x1380 = 2U;
	int32_t t46 = 29044321;

	t46 = (x1377<=((x1378<x1379)<<x1380));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x1393 = INT16_MAX;
	int64_t x1395 = 117461263379806LL;
	volatile int32_t t47 = -223923319;

	t47 = (x1393<=((x1394<x1395)<<x1396));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x1438 = INT64_MIN;
	static int16_t x1439 = 36;
	int8_t x1440 = 1;
	int32_t t48 = -407019;

	t48 = (x1437<=((x1438<x1439)<<x1440));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x1493 = -96;
	uint64_t x1495 = 20499LLU;
	int32_t t49 = 685235;

	t49 = (x1493<=((x1494<x1495)<<x1496));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x1549 = INT64_MIN;
	int32_t x1550 = INT32_MIN;
	static int8_t x1551 = 41;
	int8_t x1552 = 1;
	static volatile int32_t t50 = -14227;

	t50 = (x1549<=((x1550<x1551)<<x1552));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x1585 = -1788;
	uint8_t x1586 = UINT8_MAX;
	static uint8_t x1588 = 24U;
	int32_t t51 = -23;

	t51 = (x1585<=((x1586<x1587)<<x1588));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x1617 = -3;
	int64_t x1618 = INT64_MIN;
	static uint64_t x1619 = 4275LLU;
	int32_t x1620 = 0;

	t52 = (x1617<=((x1618<x1619)<<x1620));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x1629 = -1;
	uint16_t x1630 = 1U;
	static int64_t x1631 = -1LL;
	volatile int32_t t53 = 7004;

	t53 = (x1629<=((x1630<x1631)<<x1632));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x1637 = 43U;
	int32_t x1639 = INT32_MIN;
	int8_t x1640 = 4;
	int32_t t54 = -147301;

	t54 = (x1637<=((x1638<x1639)<<x1640));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x1645 = -1;
	int16_t x1646 = INT16_MIN;
	int64_t x1647 = -638478LL;
	volatile uint8_t x1648 = 2U;
	static volatile int32_t t55 = -649053904;

	t55 = (x1645<=((x1646<x1647)<<x1648));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x1729 = -1;
	static uint64_t x1731 = 451054LLU;
	uint8_t x1732 = 5U;

	t56 = (x1729<=((x1730<x1731)<<x1732));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x1741 = UINT16_MAX;
	int32_t x1742 = 7502;
	int32_t t57 = -153003;

	t57 = (x1741<=((x1742<x1743)<<x1744));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x1849 = INT8_MAX;
	static uint32_t x1850 = UINT32_MAX;
	volatile int32_t x1851 = 42000;
	uint16_t x1852 = 15U;
	volatile int32_t t58 = 46319;

	t58 = (x1849<=((x1850<x1851)<<x1852));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x1937 = 535211643572450LLU;
	static int8_t x1938 = -1;
	static int32_t t59 = 371361;

	t59 = (x1937<=((x1938<x1939)<<x1940));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x1966 = INT64_MIN;
	volatile int8_t x1967 = INT8_MIN;
	volatile int16_t x1968 = 3;
	int32_t t60 = 3;

	t60 = (x1965<=((x1966<x1967)<<x1968));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x1981 = -1;
	volatile int64_t x1982 = INT64_MIN;
	int32_t x1983 = INT32_MIN;
	volatile int16_t x1984 = 1;
	volatile int32_t t61 = 509;

	t61 = (x1981<=((x1982<x1983)<<x1984));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x1993 = -1;
	int8_t x1994 = INT8_MAX;
	int8_t x1995 = INT8_MIN;

	t62 = (x1993<=((x1994<x1995)<<x1996));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x2073 = UINT8_MAX;
	static volatile int8_t x2074 = INT8_MAX;
	volatile int8_t x2075 = INT8_MIN;
	uint16_t x2076 = 26U;

	t63 = (x2073<=((x2074<x2075)<<x2076));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x2085 = -1;
	uint32_t x2088 = 1U;
	int32_t t64 = -641;

	t64 = (x2085<=((x2086<x2087)<<x2088));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x2094 = 22;
	uint8_t x2096 = 0U;
	static volatile int32_t t65 = -1419;

	t65 = (x2093<=((x2094<x2095)<<x2096));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x2153 = -233;
	uint64_t x2154 = 238516947198LLU;
	int32_t t66 = -246858;

	t66 = (x2153<=((x2154<x2155)<<x2156));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x2177 = 211;
	int16_t x2178 = INT16_MAX;
	volatile uint64_t x2179 = 1016901LLU;
	uint8_t x2180 = 25U;
	volatile int32_t t67 = -1;

	t67 = (x2177<=((x2178<x2179)<<x2180));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x2309 = INT32_MIN;
	int64_t x2310 = -9838449298995LL;
	static int32_t x2311 = 1;
	int32_t x2312 = 1;
	volatile int32_t t68 = 76477292;

	t68 = (x2309<=((x2310<x2311)<<x2312));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x2325 = 1;
	int8_t x2326 = -54;
	static uint64_t x2327 = UINT64_MAX;
	uint8_t x2328 = 17U;
	static int32_t t69 = 97705;

	t69 = (x2325<=((x2326<x2327)<<x2328));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x2339 = INT64_MAX;
	uint8_t x2340 = 1U;
	static int32_t t70 = 6004;

	t70 = (x2337<=((x2338<x2339)<<x2340));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x2381 = 24U;
	uint8_t x2382 = 1U;
	uint16_t x2383 = 1U;
	int8_t x2384 = 13;
	int32_t t71 = -1;

	t71 = (x2381<=((x2382<x2383)<<x2384));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x2401 = UINT16_MAX;
	int8_t x2402 = -1;
	uint8_t x2403 = 12U;
	int8_t x2404 = 7;
	int32_t t72 = 11560;

	t72 = (x2401<=((x2402<x2403)<<x2404));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x2441 = INT16_MIN;
	int8_t x2442 = -23;
	int16_t x2443 = INT16_MAX;
	uint8_t x2444 = 6U;
	static int32_t t73 = -174534881;

	t73 = (x2441<=((x2442<x2443)<<x2444));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x2529 = -1330;
	uint8_t x2530 = UINT8_MAX;
	volatile int64_t x2531 = 3765980669988676LL;
	static volatile int16_t x2532 = 2;
	volatile int32_t t74 = -255929902;

	t74 = (x2529<=((x2530<x2531)<<x2532));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x2533 = INT8_MIN;
	volatile uint64_t x2534 = 24047491809LLU;
	int8_t x2535 = INT8_MIN;
	volatile int32_t t75 = -258359;

	t75 = (x2533<=((x2534<x2535)<<x2536));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x2689 = INT64_MAX;
	static int32_t x2690 = INT32_MIN;
	volatile int64_t x2691 = INT64_MAX;
	int8_t x2692 = 0;
	static volatile int32_t t76 = -61962222;

	t76 = (x2689<=((x2690<x2691)<<x2692));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x2697 = -1722LL;
	int32_t x2698 = INT32_MIN;
	int64_t x2699 = INT64_MIN;
	volatile uint32_t x2700 = 3U;
	volatile int32_t t77 = -11;

	t77 = (x2697<=((x2698<x2699)<<x2700));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x2834 = -1;
	int32_t x2835 = INT32_MIN;
	static volatile int64_t x2836 = 29LL;

	t78 = (x2833<=((x2834<x2835)<<x2836));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x2853 = INT16_MAX;
	uint8_t x2854 = 71U;
	int8_t x2856 = 8;
	static volatile int32_t t79 = -52;

	t79 = (x2853<=((x2854<x2855)<<x2856));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x2917 = UINT8_MAX;
	uint64_t x2918 = UINT64_MAX;
	int8_t x2919 = INT8_MIN;
	static int8_t x2920 = 0;

	t80 = (x2917<=((x2918<x2919)<<x2920));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x2925 = -1LL;
	volatile uint64_t x2927 = 494839800376822LLU;
	static uint32_t x2928 = 0U;

	t81 = (x2925<=((x2926<x2927)<<x2928));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x2949 = 1096691U;
	int8_t x2950 = -16;
	uint8_t x2952 = 0U;
	int32_t t82 = -119;

	t82 = (x2949<=((x2950<x2951)<<x2952));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x2979 = INT32_MIN;
	static uint8_t x2980 = 2U;
	volatile int32_t t83 = 1;

	t83 = (x2977<=((x2978<x2979)<<x2980));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x3001 = INT8_MIN;
	uint8_t x3002 = 5U;
	int8_t x3004 = 0;
	static volatile int32_t t84 = 1;

	t84 = (x3001<=((x3002<x3003)<<x3004));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x3114 = INT32_MAX;
	uint8_t x3115 = UINT8_MAX;
	volatile int32_t t85 = 26071;

	t85 = (x3113<=((x3114<x3115)<<x3116));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x3141 = 1;
	int16_t x3142 = INT16_MIN;
	uint32_t x3143 = UINT32_MAX;
	volatile uint8_t x3144 = 5U;
	volatile int32_t t86 = -36988;

	t86 = (x3141<=((x3142<x3143)<<x3144));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x3170 = -10;

	t87 = (x3169<=((x3170<x3171)<<x3172));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x3182 = 78U;
	int16_t x3183 = INT16_MIN;
	int8_t x3184 = 5;
	int32_t t88 = -9;

	t88 = (x3181<=((x3182<x3183)<<x3184));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x3254 = UINT32_MAX;
	uint32_t x3255 = 5549099U;
	int16_t x3256 = 1;
	static int32_t t89 = 10489137;

	t89 = (x3253<=((x3254<x3255)<<x3256));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x3313 = 49LLU;
	static uint32_t x3314 = 24884870U;
	uint64_t x3315 = UINT64_MAX;
	static uint8_t x3316 = 30U;
	volatile int32_t t90 = -20999471;

	t90 = (x3313<=((x3314<x3315)<<x3316));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x3369 = INT16_MAX;
	volatile int16_t x3370 = 28;
	int8_t x3371 = INT8_MIN;
	uint16_t x3372 = 12U;

	t91 = (x3369<=((x3370<x3371)<<x3372));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x3381 = INT64_MIN;
	int64_t x3382 = INT64_MIN;
	int8_t x3383 = INT8_MIN;
	uint16_t x3384 = 2U;

	t92 = (x3381<=((x3382<x3383)<<x3384));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x3389 = INT8_MAX;
	int8_t x3391 = 57;
	static volatile int32_t t93 = -1069;

	t93 = (x3389<=((x3390<x3391)<<x3392));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x3429 = 7;
	volatile int8_t x3431 = INT8_MIN;
	int16_t x3432 = 5;
	static volatile int32_t t94 = 2335759;

	t94 = (x3429<=((x3430<x3431)<<x3432));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x3521 = 5;
	volatile int64_t x3522 = -6169LL;
	int8_t x3523 = 3;
	static uint8_t x3524 = 0U;
	volatile int32_t t95 = 0;

	t95 = (x3521<=((x3522<x3523)<<x3524));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x3533 = -1;
	int8_t x3534 = -1;
	int64_t x3535 = -58867020024624010LL;
	int32_t x3536 = 0;

	t96 = (x3533<=((x3534<x3535)<<x3536));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x3574 = INT16_MIN;
	uint64_t x3575 = 9977725LLU;
	uint16_t x3576 = 10U;
	volatile int32_t t97 = 10;

	t97 = (x3573<=((x3574<x3575)<<x3576));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x3645 = INT64_MIN;
	int32_t x3646 = 541912;
	volatile uint64_t x3647 = 3894142803332287LLU;
	uint8_t x3648 = 0U;
	static int32_t t98 = 5;

	t98 = (x3645<=((x3646<x3647)<<x3648));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x3701 = 1;
	int8_t x3702 = -15;
	volatile uint8_t x3704 = 4U;

	t99 = (x3701<=((x3702<x3703)<<x3704));

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


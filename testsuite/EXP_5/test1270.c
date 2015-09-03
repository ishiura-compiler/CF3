#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x9 = UINT32_MAX;
volatile int64_t x21 = -1LL;
int8_t x130 = 2;
uint8_t x132 = 1U;
volatile uint8_t x140 = 9U;
uint64_t x197 = UINT64_MAX;
int32_t x237 = -173858;
uint8_t x478 = UINT8_MAX;
uint64_t x553 = UINT64_MAX;
uint8_t x556 = 4U;
int32_t t13 = 12090;
static int64_t x591 = INT64_MIN;
volatile int8_t x602 = -1;
static uint64_t x603 = 462180LLU;
volatile int32_t t15 = 933531344;
int32_t x813 = -1;
uint32_t x814 = 8U;
int8_t x815 = -1;
uint32_t x919 = 1138U;
static int8_t x920 = 2;
uint64_t x934 = 667087929LLU;
static volatile int64_t x935 = INT64_MAX;
volatile uint16_t x936 = 3U;
int8_t x977 = -5;
int64_t x1057 = -2LL;
volatile int32_t x1089 = INT32_MAX;
static int32_t t27 = 309749;
int16_t x1197 = 3;
uint16_t x1199 = 3747U;
int32_t x1214 = INT32_MIN;
int32_t x1223 = INT32_MIN;
volatile uint8_t x1224 = 10U;
volatile int32_t t30 = 75489392;
uint8_t x1226 = 1U;
uint8_t x1227 = 3U;
int8_t x1263 = 26;
volatile int8_t x1294 = INT8_MIN;
volatile int32_t t35 = -2;
uint16_t x1352 = 1U;
int32_t x1363 = INT32_MAX;
uint16_t x1382 = UINT16_MAX;
int16_t x1383 = -1;
uint8_t x1533 = 3U;
int64_t x1586 = INT64_MAX;
int64_t x1588 = 9LL;
static volatile int32_t t44 = 270785;
int32_t x1674 = 35786;
int32_t t47 = -1925;
volatile int32_t t48 = 38264;
int8_t x1821 = -1;
uint8_t x1845 = UINT8_MAX;
int32_t t50 = -70971280;
uint8_t x1888 = 15U;
int16_t x2122 = INT16_MAX;
uint64_t x2219 = 963426709LLU;
int64_t x2225 = -462156836589LL;
int32_t x2243 = 343859362;
uint64_t x2320 = 4LLU;
volatile uint64_t x2329 = 49735562713935LLU;
int8_t x2331 = INT8_MAX;
int32_t t61 = 19666;
uint8_t x2416 = 11U;
int32_t x2453 = 104;
volatile int64_t x2486 = -1741LL;
static int8_t x2488 = 27;
volatile int32_t t68 = 320655145;
int32_t x2509 = -1;
int8_t x2510 = INT8_MIN;
static int32_t x2553 = INT32_MIN;
volatile int32_t t70 = -7711405;
uint16_t x2565 = 1234U;
uint16_t x2661 = 3U;
int64_t x2662 = -1LL;
static volatile uint16_t x2664 = 29U;
uint16_t x2677 = 712U;
int32_t x2737 = INT32_MAX;
uint16_t x2740 = 4U;
int16_t x2753 = INT16_MAX;
static volatile int32_t x2754 = -1;
int32_t t78 = 9538091;
uint32_t x2762 = 31679U;
volatile int8_t x2764 = 1;
static volatile int32_t t79 = 4339;
uint16_t x2773 = 3U;
static uint16_t x2775 = 6152U;
volatile uint16_t x2776 = 0U;
volatile int64_t x2806 = INT64_MIN;
uint32_t x2807 = UINT32_MAX;
static uint16_t x2813 = 127U;
uint8_t x2852 = 16U;
uint16_t x2869 = 14U;
volatile int64_t x2871 = -2145LL;
volatile int64_t x2971 = 138301660342908928LL;
int8_t x3038 = INT8_MIN;
static uint64_t x3057 = 1436502725LLU;
volatile int32_t t91 = 1;
static uint16_t x3114 = UINT16_MAX;
volatile int64_t x3115 = INT64_MAX;
static uint8_t x3116 = 0U;
int32_t t92 = -41415;
int32_t t93 = -946;
int64_t x3217 = INT64_MIN;
static int64_t x3218 = -116024LL;
static int64_t x3293 = -7LL;
volatile int32_t t97 = 531618;
volatile uint16_t x3312 = 12U;
int32_t t98 = -512143;


void f0(void) {
	int8_t x10 = -1;
	int32_t x11 = INT32_MAX;
	static uint8_t x12 = 2U;
	volatile int32_t t0 = -89;

	t0 = (x9<((x10==x11)>>x12));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x22 = UINT32_MAX;
	volatile int32_t x23 = INT32_MAX;
	uint16_t x24 = 27U;
	int32_t t1 = 9023166;

	t1 = (x21<((x22==x23)>>x24));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x113 = 117241U;
	static int64_t x114 = 13295LL;
	volatile int32_t x115 = INT32_MAX;
	int8_t x116 = 0;
	volatile int32_t t2 = 17;

	t2 = (x113<((x114==x115)>>x116));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x129 = -1;
	int64_t x131 = -1LL;
	int32_t t3 = 931;

	t3 = (x129<((x130==x131)>>x132));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x137 = 5;
	uint64_t x138 = UINT64_MAX;
	int16_t x139 = -1;
	int32_t t4 = -5873;

	t4 = (x137<((x138==x139)>>x140));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x161 = UINT8_MAX;
	int8_t x162 = 2;
	int32_t x163 = INT32_MAX;
	int16_t x164 = 3;
	volatile int32_t t5 = -134050796;

	t5 = (x161<((x162==x163)>>x164));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x198 = INT16_MAX;
	volatile uint64_t x199 = 2176730006032438302LLU;
	uint8_t x200 = 1U;
	int32_t t6 = 1;

	t6 = (x197<((x198==x199)>>x200));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint8_t x213 = UINT8_MAX;
	static uint64_t x214 = UINT64_MAX;
	int32_t x215 = INT32_MIN;
	int64_t x216 = 1LL;
	volatile int32_t t7 = -20;

	t7 = (x213<((x214==x215)>>x216));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x238 = 40;
	int16_t x239 = INT16_MIN;
	uint32_t x240 = 3U;
	static int32_t t8 = -702602704;

	t8 = (x237<((x238==x239)>>x240));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x257 = 84135908215LLU;
	int8_t x258 = INT8_MIN;
	int32_t x259 = 15879059;
	uint8_t x260 = 0U;
	volatile int32_t t9 = 65768475;

	t9 = (x257<((x258==x259)>>x260));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x281 = INT16_MIN;
	int64_t x282 = -1LL;
	uint32_t x283 = UINT32_MAX;
	volatile uint64_t x284 = 2LLU;
	int32_t t10 = -10015054;

	t10 = (x281<((x282==x283)>>x284));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x445 = UINT32_MAX;
	uint16_t x446 = UINT16_MAX;
	static volatile int16_t x447 = -1;
	uint8_t x448 = 24U;
	static int32_t t11 = 0;

	t11 = (x445<((x446==x447)>>x448));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x477 = INT32_MIN;
	int16_t x479 = INT16_MAX;
	uint8_t x480 = 4U;
	int32_t t12 = -29010;

	t12 = (x477<((x478==x479)>>x480));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x554 = -1;
	int32_t x555 = -1;

	t13 = (x553<((x554==x555)>>x556));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x589 = 13;
	int8_t x590 = 0;
	uint8_t x592 = 6U;
	static int32_t t14 = 64098255;

	t14 = (x589<((x590==x591)>>x592));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x601 = -1;
	uint64_t x604 = 12LLU;

	t15 = (x601<((x602==x603)>>x604));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x621 = UINT16_MAX;
	uint16_t x622 = 9586U;
	int16_t x623 = -384;
	volatile uint32_t x624 = 5U;
	volatile int32_t t16 = 86954;

	t16 = (x621<((x622==x623)>>x624));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int16_t x641 = 5;
	int8_t x642 = -3;
	static int64_t x643 = -1LL;
	int16_t x644 = 1;
	volatile int32_t t17 = -1123783;

	t17 = (x641<((x642==x643)>>x644));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x685 = INT16_MAX;
	static volatile uint64_t x686 = UINT64_MAX;
	int32_t x687 = INT32_MAX;
	int64_t x688 = 2LL;
	int32_t t18 = -6448499;

	t18 = (x685<((x686==x687)>>x688));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x713 = INT64_MIN;
	uint8_t x714 = 54U;
	int32_t x715 = INT32_MAX;
	uint32_t x716 = 2U;
	volatile int32_t t19 = 449;

	t19 = (x713<((x714==x715)>>x716));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x717 = INT8_MIN;
	int64_t x718 = INT64_MAX;
	uint32_t x719 = 26U;
	int8_t x720 = 1;
	int32_t t20 = -81476;

	t20 = (x717<((x718==x719)>>x720));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x816 = 0U;
	static volatile int32_t t21 = 1;

	t21 = (x813<((x814==x815)>>x816));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x857 = -60927;
	static int64_t x858 = -1LL;
	static volatile int32_t x859 = -1;
	int16_t x860 = 1;
	volatile int32_t t22 = -23;

	t22 = (x857<((x858==x859)>>x860));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x917 = 1149U;
	volatile uint64_t x918 = UINT64_MAX;
	volatile int32_t t23 = -7;

	t23 = (x917<((x918==x919)>>x920));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x933 = UINT32_MAX;
	static int32_t t24 = -1516;

	t24 = (x933<((x934==x935)>>x936));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x978 = 4U;
	static volatile uint16_t x979 = 500U;
	int8_t x980 = 0;
	volatile int32_t t25 = -1005884;

	t25 = (x977<((x978==x979)>>x980));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1058 = 4U;
	static uint8_t x1059 = 5U;
	volatile int8_t x1060 = 1;
	volatile int32_t t26 = -55241539;

	t26 = (x1057<((x1058==x1059)>>x1060));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1090 = INT64_MAX;
	int16_t x1091 = INT16_MIN;
	static uint16_t x1092 = 1U;

	t27 = (x1089<((x1090==x1091)>>x1092));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1198 = 1;
	uint16_t x1200 = 3U;
	volatile int32_t t28 = 1715;

	t28 = (x1197<((x1198==x1199)>>x1200));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1213 = INT16_MIN;
	uint64_t x1215 = UINT64_MAX;
	int64_t x1216 = 0LL;
	int32_t t29 = -186996801;

	t29 = (x1213<((x1214==x1215)>>x1216));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x1221 = 113U;
	static uint32_t x1222 = UINT32_MAX;

	t30 = (x1221<((x1222==x1223)>>x1224));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x1225 = -1LL;
	static volatile int16_t x1228 = 0;
	int32_t t31 = -2791528;

	t31 = (x1225<((x1226==x1227)>>x1228));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1261 = UINT8_MAX;
	static int8_t x1262 = -1;
	int16_t x1264 = 4;
	int32_t t32 = 83263;

	t32 = (x1261<((x1262==x1263)>>x1264));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1269 = INT8_MIN;
	int8_t x1270 = -25;
	int64_t x1271 = -1LL;
	int8_t x1272 = 2;
	static volatile int32_t t33 = 6;

	t33 = (x1269<((x1270==x1271)>>x1272));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x1281 = UINT32_MAX;
	int8_t x1282 = INT8_MAX;
	static uint64_t x1283 = UINT64_MAX;
	uint8_t x1284 = 0U;
	int32_t t34 = -56584628;

	t34 = (x1281<((x1282==x1283)>>x1284));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1293 = -18;
	static int32_t x1295 = INT32_MIN;
	uint16_t x1296 = 0U;

	t35 = (x1293<((x1294==x1295)>>x1296));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x1349 = 10U;
	static int64_t x1350 = INT64_MIN;
	static volatile int64_t x1351 = -170411066554100514LL;
	volatile int32_t t36 = 1732217;

	t36 = (x1349<((x1350==x1351)>>x1352));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1361 = INT8_MIN;
	volatile int16_t x1362 = -3;
	int32_t x1364 = 1;
	int32_t t37 = -7;

	t37 = (x1361<((x1362==x1363)>>x1364));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x1381 = 1LLU;
	uint8_t x1384 = 9U;
	volatile int32_t t38 = -1;

	t38 = (x1381<((x1382==x1383)>>x1384));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1397 = INT64_MIN;
	static int64_t x1398 = 2012403337915621LL;
	int32_t x1399 = 21099990;
	uint32_t x1400 = 1U;
	static int32_t t39 = -3768929;

	t39 = (x1397<((x1398==x1399)>>x1400));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x1441 = INT64_MIN;
	uint16_t x1442 = 2726U;
	int64_t x1443 = INT64_MAX;
	static uint8_t x1444 = 7U;
	int32_t t40 = -16828;

	t40 = (x1441<((x1442==x1443)>>x1444));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1534 = INT32_MIN;
	uint8_t x1535 = UINT8_MAX;
	uint16_t x1536 = 12U;
	int32_t t41 = 510;

	t41 = (x1533<((x1534==x1535)>>x1536));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x1545 = 397326636052LLU;
	uint64_t x1546 = 6134LLU;
	uint8_t x1547 = 3U;
	uint8_t x1548 = 3U;
	int32_t t42 = 27;

	t42 = (x1545<((x1546==x1547)>>x1548));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x1577 = 222U;
	int32_t x1578 = -16659073;
	int32_t x1579 = -515682755;
	int16_t x1580 = 11;
	int32_t t43 = -245027947;

	t43 = (x1577<((x1578==x1579)>>x1580));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x1585 = INT8_MIN;
	static volatile int16_t x1587 = -1;

	t44 = (x1585<((x1586==x1587)>>x1588));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x1669 = -30;
	int64_t x1670 = 29LL;
	int64_t x1671 = -1LL;
	int8_t x1672 = 1;
	volatile int32_t t45 = 1;

	t45 = (x1669<((x1670==x1671)>>x1672));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x1673 = 393U;
	uint32_t x1675 = 7870081U;
	uint8_t x1676 = 1U;
	static int32_t t46 = 0;

	t46 = (x1673<((x1674==x1675)>>x1676));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x1697 = UINT32_MAX;
	int8_t x1698 = INT8_MIN;
	static int32_t x1699 = -7297;
	int8_t x1700 = 29;

	t47 = (x1697<((x1698==x1699)>>x1700));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x1777 = 33276308U;
	uint64_t x1778 = 5020LLU;
	static uint32_t x1779 = 670572U;
	uint8_t x1780 = 10U;

	t48 = (x1777<((x1778==x1779)>>x1780));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x1822 = 109U;
	static int64_t x1823 = -125LL;
	volatile int8_t x1824 = 8;
	int32_t t49 = -9907778;

	t49 = (x1821<((x1822==x1823)>>x1824));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x1846 = 791;
	uint8_t x1847 = UINT8_MAX;
	uint16_t x1848 = 28U;

	t50 = (x1845<((x1846==x1847)>>x1848));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x1881 = -1;
	int16_t x1882 = INT16_MIN;
	int32_t x1883 = INT32_MIN;
	uint8_t x1884 = 1U;
	static int32_t t51 = 3;

	t51 = (x1881<((x1882==x1883)>>x1884));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x1885 = 1196U;
	int32_t x1886 = -1;
	uint64_t x1887 = UINT64_MAX;
	static int32_t t52 = -7887371;

	t52 = (x1885<((x1886==x1887)>>x1888));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x1917 = UINT8_MAX;
	int64_t x1918 = 1952478641300827LL;
	int8_t x1919 = 1;
	uint8_t x1920 = 31U;
	volatile int32_t t53 = 96218911;

	t53 = (x1917<((x1918==x1919)>>x1920));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x1985 = 544U;
	int16_t x1986 = INT16_MIN;
	int64_t x1987 = -1LL;
	uint32_t x1988 = 31U;
	int32_t t54 = -1425;

	t54 = (x1985<((x1986==x1987)>>x1988));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x2121 = INT64_MIN;
	static int8_t x2123 = INT8_MAX;
	uint8_t x2124 = 17U;
	volatile int32_t t55 = 58632617;

	t55 = (x2121<((x2122==x2123)>>x2124));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x2197 = 41U;
	uint8_t x2198 = 3U;
	int32_t x2199 = -31001;
	int16_t x2200 = 1;
	int32_t t56 = 38089388;

	t56 = (x2197<((x2198==x2199)>>x2200));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x2217 = 37894;
	static int32_t x2218 = INT32_MAX;
	uint8_t x2220 = 14U;
	volatile int32_t t57 = 1557652;

	t57 = (x2217<((x2218==x2219)>>x2220));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int16_t x2226 = INT16_MIN;
	static int64_t x2227 = INT64_MIN;
	int32_t x2228 = 3;
	static volatile int32_t t58 = 1971;

	t58 = (x2225<((x2226==x2227)>>x2228));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x2241 = 8316860LLU;
	uint64_t x2242 = 82862377651744450LLU;
	int16_t x2244 = 7;
	int32_t t59 = -11526493;

	t59 = (x2241<((x2242==x2243)>>x2244));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x2317 = 65036237LL;
	static int16_t x2318 = -4;
	static int64_t x2319 = INT64_MIN;
	volatile int32_t t60 = 1;

	t60 = (x2317<((x2318==x2319)>>x2320));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x2330 = -1;
	uint16_t x2332 = 0U;

	t61 = (x2329<((x2330==x2331)>>x2332));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x2333 = UINT16_MAX;
	int32_t x2334 = -1;
	uint16_t x2335 = 40U;
	volatile int8_t x2336 = 1;
	int32_t t62 = -865789924;

	t62 = (x2333<((x2334==x2335)>>x2336));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x2345 = UINT32_MAX;
	int64_t x2346 = -60754894LL;
	static int16_t x2347 = -1;
	static uint8_t x2348 = 25U;
	volatile int32_t t63 = -669372730;

	t63 = (x2345<((x2346==x2347)>>x2348));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x2413 = 22270LLU;
	int8_t x2414 = INT8_MIN;
	int16_t x2415 = 3;
	volatile int32_t t64 = -27470085;

	t64 = (x2413<((x2414==x2415)>>x2416));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x2421 = -1;
	int16_t x2422 = -2;
	volatile uint64_t x2423 = 25116582LLU;
	uint16_t x2424 = 0U;
	volatile int32_t t65 = -92505;

	t65 = (x2421<((x2422==x2423)>>x2424));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x2454 = 5U;
	int8_t x2455 = INT8_MIN;
	uint16_t x2456 = 0U;
	int32_t t66 = 85;

	t66 = (x2453<((x2454==x2455)>>x2456));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x2477 = INT64_MIN;
	static int64_t x2478 = 78315371LL;
	int8_t x2479 = 37;
	static volatile int8_t x2480 = 5;
	int32_t t67 = -30;

	t67 = (x2477<((x2478==x2479)>>x2480));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x2485 = 1718;
	int16_t x2487 = -51;

	t68 = (x2485<((x2486==x2487)>>x2488));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x2511 = -102387219327510972LL;
	uint32_t x2512 = 6U;
	static int32_t t69 = 191;

	t69 = (x2509<((x2510==x2511)>>x2512));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x2554 = INT8_MIN;
	int64_t x2555 = -346192159662464LL;
	int8_t x2556 = 2;

	t70 = (x2553<((x2554==x2555)>>x2556));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x2566 = -1;
	static int64_t x2567 = INT64_MIN;
	volatile uint16_t x2568 = 14U;
	volatile int32_t t71 = -10;

	t71 = (x2565<((x2566==x2567)>>x2568));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x2663 = INT16_MIN;
	volatile int32_t t72 = 179837;

	t72 = (x2661<((x2662==x2663)>>x2664));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x2678 = 0;
	int16_t x2679 = INT16_MIN;
	static int32_t x2680 = 30;
	int32_t t73 = -25911;

	t73 = (x2677<((x2678==x2679)>>x2680));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x2701 = 484452279U;
	uint16_t x2702 = 359U;
	int16_t x2703 = 2;
	uint32_t x2704 = 8U;
	int32_t t74 = 1025871899;

	t74 = (x2701<((x2702==x2703)>>x2704));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x2713 = INT64_MIN;
	static volatile uint64_t x2714 = 15569LLU;
	uint8_t x2715 = UINT8_MAX;
	volatile int16_t x2716 = 0;
	int32_t t75 = -8235737;

	t75 = (x2713<((x2714==x2715)>>x2716));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x2725 = -357;
	int32_t x2726 = -1;
	int16_t x2727 = -364;
	static uint8_t x2728 = 4U;
	volatile int32_t t76 = 6860;

	t76 = (x2725<((x2726==x2727)>>x2728));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x2738 = 1U;
	int16_t x2739 = INT16_MAX;
	static volatile int32_t t77 = -23;

	t77 = (x2737<((x2738==x2739)>>x2740));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x2755 = 0U;
	uint8_t x2756 = 1U;

	t78 = (x2753<((x2754==x2755)>>x2756));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x2761 = -1618;
	uint32_t x2763 = 13435U;

	t79 = (x2761<((x2762==x2763)>>x2764));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint8_t x2774 = UINT8_MAX;
	static int32_t t80 = -80406985;

	t80 = (x2773<((x2774==x2775)>>x2776));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x2805 = INT16_MIN;
	static int16_t x2808 = 10;
	int32_t t81 = -1548378;

	t81 = (x2805<((x2806==x2807)>>x2808));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint16_t x2814 = UINT16_MAX;
	int16_t x2815 = -1;
	static uint8_t x2816 = 22U;
	int32_t t82 = 0;

	t82 = (x2813<((x2814==x2815)>>x2816));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x2829 = 1;
	int32_t x2830 = -1;
	int16_t x2831 = -1;
	volatile int32_t x2832 = 1;
	int32_t t83 = -151;

	t83 = (x2829<((x2830==x2831)>>x2832));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x2849 = 3505;
	int8_t x2850 = INT8_MIN;
	int8_t x2851 = -2;
	static int32_t t84 = -10;

	t84 = (x2849<((x2850==x2851)>>x2852));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x2870 = INT64_MIN;
	int8_t x2872 = 9;
	volatile int32_t t85 = -9738498;

	t85 = (x2869<((x2870==x2871)>>x2872));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x2945 = 131U;
	volatile uint64_t x2946 = 63LLU;
	static uint32_t x2947 = 3374648U;
	static uint64_t x2948 = 4LLU;
	volatile int32_t t86 = -3;

	t86 = (x2945<((x2946==x2947)>>x2948));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x2969 = 6U;
	volatile int16_t x2970 = INT16_MAX;
	volatile int64_t x2972 = 3LL;
	static int32_t t87 = -21524634;

	t87 = (x2969<((x2970==x2971)>>x2972));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x3021 = -1;
	int8_t x3022 = INT8_MAX;
	int8_t x3023 = INT8_MIN;
	static int8_t x3024 = 5;
	volatile int32_t t88 = -3828;

	t88 = (x3021<((x3022==x3023)>>x3024));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x3037 = 206788U;
	volatile int64_t x3039 = -467901LL;
	uint32_t x3040 = 1U;
	int32_t t89 = -3855436;

	t89 = (x3037<((x3038==x3039)>>x3040));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x3041 = 0U;
	int8_t x3042 = 0;
	int8_t x3043 = INT8_MIN;
	uint16_t x3044 = 1U;
	volatile int32_t t90 = 24620450;

	t90 = (x3041<((x3042==x3043)>>x3044));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x3058 = -896;
	uint16_t x3059 = 5U;
	uint32_t x3060 = 5U;

	t91 = (x3057<((x3058==x3059)>>x3060));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x3113 = INT8_MAX;

	t92 = (x3113<((x3114==x3115)>>x3116));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x3117 = 1;
	int16_t x3118 = INT16_MIN;
	int16_t x3119 = INT16_MIN;
	static uint8_t x3120 = 31U;

	t93 = (x3117<((x3118==x3119)>>x3120));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x3197 = INT32_MIN;
	static int16_t x3198 = INT16_MIN;
	int16_t x3199 = INT16_MIN;
	volatile uint16_t x3200 = 0U;
	int32_t t94 = 6959399;

	t94 = (x3197<((x3198==x3199)>>x3200));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x3219 = 192311;
	uint8_t x3220 = 3U;
	static int32_t t95 = 53261;

	t95 = (x3217<((x3218==x3219)>>x3220));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x3257 = 1909U;
	static int32_t x3258 = 7074462;
	uint32_t x3259 = UINT32_MAX;
	static int8_t x3260 = 1;
	volatile int32_t t96 = -86;

	t96 = (x3257<((x3258==x3259)>>x3260));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x3294 = INT8_MIN;
	uint32_t x3295 = UINT32_MAX;
	volatile int8_t x3296 = 7;

	t97 = (x3293<((x3294==x3295)>>x3296));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x3309 = -1;
	int16_t x3310 = -1;
	uint16_t x3311 = 8U;

	t98 = (x3309<((x3310==x3311)>>x3312));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x3369 = -1;
	static int32_t x3370 = -55225;
	int64_t x3371 = -1LL;
	volatile int8_t x3372 = 3;
	static int32_t t99 = 52;

	t99 = (x3369<((x3370==x3371)>>x3372));

	if (t99 != 1) { NG(); } else { ; }
	
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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x31 = UINT8_MAX;
int8_t x119 = INT8_MAX;
int64_t x229 = -1LL;
static volatile uint64_t x281 = UINT64_MAX;
int8_t x284 = 1;
uint8_t x286 = 0U;
int32_t t9 = -358;
uint16_t x339 = UINT16_MAX;
int32_t t10 = 0;
volatile int16_t x409 = -1;
static int8_t x438 = 1;
volatile int32_t t15 = -905411;
uint16_t x518 = 1U;
int32_t x522 = 141930;
static int32_t t17 = -199;
int16_t x688 = 3;
static int64_t x708 = 1LL;
volatile int32_t t24 = 990297;
uint64_t x757 = UINT64_MAX;
uint8_t x758 = UINT8_MAX;
volatile int32_t t25 = 9195;
int8_t x769 = 3;
volatile uint32_t x770 = 1488489U;
uint32_t x786 = UINT32_MAX;
static int16_t x826 = 3;
static volatile uint64_t x828 = 9LLU;
volatile int32_t t29 = -96812642;
int32_t x846 = INT32_MIN;
int8_t x853 = -1;
volatile int64_t x856 = 17LL;
int64_t x889 = INT64_MIN;
int8_t x925 = INT8_MAX;
volatile int8_t x1008 = 10;
uint64_t x1017 = 27774679LLU;
int64_t x1086 = INT64_MIN;
static int8_t x1087 = 42;
int8_t x1196 = 1;
volatile int32_t t40 = 3;
int64_t x1247 = INT64_MAX;
int64_t x1270 = INT64_MIN;
uint32_t x1271 = UINT32_MAX;
int32_t t44 = -19;
static uint64_t x1558 = 35580LLU;
int8_t x1562 = INT8_MIN;
int64_t x1715 = INT64_MIN;
volatile int32_t t54 = 991;
int32_t t55 = -273;
int16_t x1811 = INT16_MIN;
uint64_t x1830 = UINT64_MAX;
static volatile int32_t t58 = -1444;
static volatile int8_t x1934 = INT8_MAX;
volatile int32_t t61 = 2;
uint32_t x2113 = UINT32_MAX;
volatile uint64_t x2116 = 28LLU;
int32_t t64 = -1;
volatile int32_t x2133 = 35525;
int32_t t65 = -3;
int32_t x2142 = INT32_MAX;
static uint64_t x2210 = 997780585912LLU;
volatile int16_t x2269 = INT16_MIN;
volatile uint8_t x2272 = 1U;
static int32_t t70 = -1029045;
static volatile uint32_t x2295 = UINT32_MAX;
volatile int32_t t73 = -60202;
volatile uint8_t x2345 = 55U;
int64_t x2347 = -1069082881512LL;
volatile int32_t x2348 = 1;
int8_t x2355 = INT8_MIN;
static int64_t x2421 = INT64_MAX;
uint32_t x2424 = 0U;
uint8_t x2441 = 4U;
int8_t x2449 = -57;
volatile int32_t t80 = -94;
volatile int32_t t81 = -26665606;
int64_t x2523 = -311911744521094LL;
int32_t t82 = 1;
uint8_t x2588 = 1U;
volatile int16_t x2650 = INT16_MAX;
uint8_t x2652 = 21U;
int32_t x2741 = INT32_MAX;
volatile int8_t x2791 = INT8_MAX;
uint16_t x2792 = 7U;
int8_t x2967 = INT8_MIN;
int8_t x3011 = 4;
volatile int16_t x3041 = INT16_MIN;
static int64_t x3042 = INT64_MAX;
int8_t x3044 = 10;
static int64_t x3050 = -1LL;
int64_t x3093 = INT64_MIN;
int32_t t97 = -439222;
uint32_t x3102 = UINT32_MAX;
uint32_t x3103 = 544U;
uint8_t x3104 = 1U;
static uint16_t x3165 = 0U;
static int32_t x3166 = INT32_MAX;
static int32_t t99 = -2;


void f0(void) {
	uint8_t x17 = 1U;
	uint16_t x18 = 30U;
	uint16_t x19 = UINT16_MAX;
	volatile uint16_t x20 = 12U;
	volatile int32_t t0 = -48;

	t0 = ((x17==(x18/x19))>>x20);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x29 = -141446216;
	static int32_t x30 = INT32_MAX;
	int64_t x32 = 18LL;
	int32_t t1 = -69;

	t1 = ((x29==(x30/x31))>>x32);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x117 = INT8_MIN;
	static volatile uint8_t x118 = UINT8_MAX;
	uint8_t x120 = 7U;
	static int32_t t2 = -6;

	t2 = ((x117==(x118/x119))>>x120);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x197 = 180833U;
	static int64_t x198 = INT64_MAX;
	static int64_t x199 = INT64_MIN;
	uint8_t x200 = 12U;
	volatile int32_t t3 = 13736162;

	t3 = ((x197==(x198/x199))>>x200);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x201 = 97U;
	int16_t x202 = -950;
	int8_t x203 = INT8_MIN;
	uint8_t x204 = 3U;
	static int32_t t4 = 20;

	t4 = ((x201==(x202/x203))>>x204);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x213 = INT32_MIN;
	int32_t x214 = -369251;
	uint16_t x215 = 276U;
	int16_t x216 = 1;
	int32_t t5 = -26102652;

	t5 = ((x213==(x214/x215))>>x216);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x230 = INT32_MAX;
	uint64_t x231 = 3LLU;
	uint16_t x232 = 9U;
	int32_t t6 = -97332;

	t6 = ((x229==(x230/x231))>>x232);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x253 = -1;
	int64_t x254 = -100762478237528709LL;
	uint32_t x255 = 4835672U;
	static uint16_t x256 = 0U;
	static int32_t t7 = 1;

	t7 = ((x253==(x254/x255))>>x256);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x282 = 2;
	volatile int32_t x283 = 154982052;
	static int32_t t8 = 433;

	t8 = ((x281==(x282/x283))>>x284);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x285 = -2;
	int64_t x287 = INT64_MAX;
	int8_t x288 = 0;

	t9 = ((x285==(x286/x287))>>x288);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x337 = UINT16_MAX;
	int16_t x338 = -1;
	uint8_t x340 = 30U;

	t10 = ((x337==(x338/x339))>>x340);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x353 = UINT64_MAX;
	int8_t x354 = 2;
	uint32_t x355 = 918U;
	static int8_t x356 = 2;
	int32_t t11 = 1;

	t11 = ((x353==(x354/x355))>>x356);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x410 = INT32_MIN;
	static volatile int16_t x411 = INT16_MIN;
	int32_t x412 = 1;
	volatile int32_t t12 = -34;

	t12 = ((x409==(x410/x411))>>x412);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x437 = 12;
	uint64_t x439 = UINT64_MAX;
	int8_t x440 = 3;
	volatile int32_t t13 = 865065561;

	t13 = ((x437==(x438/x439))>>x440);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x465 = INT64_MIN;
	volatile uint32_t x466 = UINT32_MAX;
	int64_t x467 = INT64_MAX;
	int8_t x468 = 0;
	int32_t t14 = 0;

	t14 = ((x465==(x466/x467))>>x468);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x477 = UINT16_MAX;
	uint8_t x478 = 1U;
	volatile uint16_t x479 = 13017U;
	int8_t x480 = 0;

	t15 = ((x477==(x478/x479))>>x480);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x517 = 11U;
	uint8_t x519 = UINT8_MAX;
	int16_t x520 = 30;
	int32_t t16 = 11966407;

	t16 = ((x517==(x518/x519))>>x520);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x521 = 8577U;
	volatile uint64_t x523 = 84098LLU;
	int16_t x524 = 0;

	t17 = ((x521==(x522/x523))>>x524);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x653 = INT16_MIN;
	int64_t x654 = INT64_MIN;
	int32_t x655 = 4438;
	uint16_t x656 = 11U;
	volatile int32_t t18 = -5565683;

	t18 = ((x653==(x654/x655))>>x656);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x685 = -1;
	static uint8_t x686 = 3U;
	int16_t x687 = INT16_MIN;
	int32_t t19 = -8349;

	t19 = ((x685==(x686/x687))>>x688);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x689 = 25U;
	int16_t x690 = INT16_MAX;
	uint16_t x691 = 154U;
	volatile int8_t x692 = 30;
	int32_t t20 = -14214;

	t20 = ((x689==(x690/x691))>>x692);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x705 = UINT8_MAX;
	int32_t x706 = -1;
	int64_t x707 = -1LL;
	int32_t t21 = 5113413;

	t21 = ((x705==(x706/x707))>>x708);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x709 = -1;
	int16_t x710 = 2;
	volatile uint64_t x711 = UINT64_MAX;
	static volatile uint8_t x712 = 15U;
	volatile int32_t t22 = -16;

	t22 = ((x709==(x710/x711))>>x712);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x737 = UINT32_MAX;
	int16_t x738 = INT16_MIN;
	int64_t x739 = -5LL;
	int8_t x740 = 0;
	static int32_t t23 = -94873;

	t23 = ((x737==(x738/x739))>>x740);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x753 = -17;
	volatile uint32_t x754 = 2U;
	static int32_t x755 = 32487;
	volatile int32_t x756 = 1;

	t24 = ((x753==(x754/x755))>>x756);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x759 = -199568081293LL;
	uint16_t x760 = 17U;

	t25 = ((x757==(x758/x759))>>x760);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int32_t x771 = -5;
	uint16_t x772 = 4U;
	int32_t t26 = 785;

	t26 = ((x769==(x770/x771))>>x772);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x785 = INT32_MIN;
	volatile int8_t x787 = INT8_MAX;
	volatile int8_t x788 = 11;
	static volatile int32_t t27 = 2188;

	t27 = ((x785==(x786/x787))>>x788);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x809 = INT8_MIN;
	int64_t x810 = INT64_MIN;
	uint64_t x811 = UINT64_MAX;
	static uint8_t x812 = 2U;
	volatile int32_t t28 = -64618331;

	t28 = ((x809==(x810/x811))>>x812);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x825 = 20U;
	int8_t x827 = -1;

	t29 = ((x825==(x826/x827))>>x828);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x845 = INT16_MAX;
	static int32_t x847 = 184185;
	uint16_t x848 = 3U;
	int32_t t30 = -1;

	t30 = ((x845==(x846/x847))>>x848);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x854 = 2U;
	uint32_t x855 = UINT32_MAX;
	static volatile int32_t t31 = -46274;

	t31 = ((x853==(x854/x855))>>x856);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x861 = 9;
	int16_t x862 = -19;
	int64_t x863 = INT64_MIN;
	int8_t x864 = 1;
	volatile int32_t t32 = -119357;

	t32 = ((x861==(x862/x863))>>x864);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int64_t x890 = 72LL;
	static volatile uint16_t x891 = 327U;
	int8_t x892 = 1;
	volatile int32_t t33 = 8048469;

	t33 = ((x889==(x890/x891))>>x892);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x897 = 15U;
	static int8_t x898 = -1;
	int32_t x899 = -56;
	volatile uint64_t x900 = 4LLU;
	volatile int32_t t34 = 3443716;

	t34 = ((x897==(x898/x899))>>x900);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x926 = 1735242788U;
	int32_t x927 = 216;
	int16_t x928 = 1;
	int32_t t35 = -20;

	t35 = ((x925==(x926/x927))>>x928);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x1005 = 4U;
	volatile int16_t x1006 = INT16_MAX;
	static int64_t x1007 = INT64_MAX;
	static volatile int32_t t36 = 21793833;

	t36 = ((x1005==(x1006/x1007))>>x1008);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x1018 = -21LL;
	uint16_t x1019 = 1284U;
	uint8_t x1020 = 2U;
	int32_t t37 = -5878224;

	t37 = ((x1017==(x1018/x1019))>>x1020);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint64_t x1085 = 399543053LLU;
	static uint16_t x1088 = 2U;
	static int32_t t38 = 60134;

	t38 = ((x1085==(x1086/x1087))>>x1088);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x1121 = INT32_MAX;
	static int8_t x1122 = -1;
	static int32_t x1123 = -3314;
	uint16_t x1124 = 1U;
	volatile int32_t t39 = -9455;

	t39 = ((x1121==(x1122/x1123))>>x1124);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1193 = 0;
	int16_t x1194 = -7;
	int16_t x1195 = INT16_MIN;

	t40 = ((x1193==(x1194/x1195))>>x1196);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x1213 = INT64_MIN;
	static int8_t x1214 = 2;
	int64_t x1215 = INT64_MAX;
	static int8_t x1216 = 0;
	int32_t t41 = -3;

	t41 = ((x1213==(x1214/x1215))>>x1216);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1245 = -1;
	uint64_t x1246 = 871061979960689LLU;
	uint64_t x1248 = 0LLU;
	volatile int32_t t42 = 749555223;

	t42 = ((x1245==(x1246/x1247))>>x1248);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x1269 = 91348396LL;
	uint16_t x1272 = 21U;
	volatile int32_t t43 = -1012;

	t43 = ((x1269==(x1270/x1271))>>x1272);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x1485 = 11;
	uint16_t x1486 = 2852U;
	static int32_t x1487 = INT32_MIN;
	volatile int8_t x1488 = 1;

	t44 = ((x1485==(x1486/x1487))>>x1488);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1493 = INT8_MIN;
	int8_t x1494 = INT8_MIN;
	int32_t x1495 = 54;
	uint32_t x1496 = 6U;
	volatile int32_t t45 = -17383897;

	t45 = ((x1493==(x1494/x1495))>>x1496);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x1557 = UINT8_MAX;
	volatile int16_t x1559 = 615;
	volatile int16_t x1560 = 1;
	static int32_t t46 = 5814;

	t46 = ((x1557==(x1558/x1559))>>x1560);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x1561 = -72467206024312LL;
	int16_t x1563 = -26;
	uint16_t x1564 = 19U;
	volatile int32_t t47 = -300760848;

	t47 = ((x1561==(x1562/x1563))>>x1564);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x1577 = -10;
	static int8_t x1578 = -1;
	int32_t x1579 = -2021388;
	uint8_t x1580 = 1U;
	volatile int32_t t48 = -33;

	t48 = ((x1577==(x1578/x1579))>>x1580);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x1605 = INT16_MAX;
	int32_t x1606 = INT32_MIN;
	volatile int8_t x1607 = 1;
	uint16_t x1608 = 3U;
	int32_t t49 = 35872912;

	t49 = ((x1605==(x1606/x1607))>>x1608);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x1621 = -1;
	static int16_t x1622 = -1112;
	uint8_t x1623 = 6U;
	volatile int8_t x1624 = 22;
	volatile int32_t t50 = 30674;

	t50 = ((x1621==(x1622/x1623))>>x1624);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x1685 = 3U;
	int8_t x1686 = INT8_MAX;
	volatile int8_t x1687 = -1;
	static int8_t x1688 = 4;
	int32_t t51 = -1900;

	t51 = ((x1685==(x1686/x1687))>>x1688);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x1713 = INT32_MAX;
	static int64_t x1714 = INT64_MAX;
	int8_t x1716 = 0;
	int32_t t52 = -4;

	t52 = ((x1713==(x1714/x1715))>>x1716);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x1717 = -43363817174134082LL;
	uint64_t x1718 = 27144079507364LLU;
	volatile int32_t x1719 = -100;
	uint8_t x1720 = 10U;
	int32_t t53 = 4511;

	t53 = ((x1717==(x1718/x1719))>>x1720);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x1733 = INT16_MIN;
	int64_t x1734 = 79LL;
	volatile int8_t x1735 = -29;
	int8_t x1736 = 11;

	t54 = ((x1733==(x1734/x1735))>>x1736);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x1777 = 39230U;
	volatile uint64_t x1778 = 2326LLU;
	uint16_t x1779 = 1005U;
	int8_t x1780 = 1;

	t55 = ((x1777==(x1778/x1779))>>x1780);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x1809 = -1LL;
	volatile int32_t x1810 = 589665640;
	int8_t x1812 = 0;
	volatile int32_t t56 = -210510547;

	t56 = ((x1809==(x1810/x1811))>>x1812);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x1817 = INT32_MIN;
	int64_t x1818 = -1LL;
	int32_t x1819 = -1;
	uint8_t x1820 = 0U;
	int32_t t57 = -170;

	t57 = ((x1817==(x1818/x1819))>>x1820);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint32_t x1829 = 14972819U;
	uint8_t x1831 = 18U;
	int64_t x1832 = 2LL;

	t58 = ((x1829==(x1830/x1831))>>x1832);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x1921 = -217463447;
	static int8_t x1922 = INT8_MIN;
	static volatile uint16_t x1923 = UINT16_MAX;
	volatile int8_t x1924 = 7;
	volatile int32_t t59 = 27117;

	t59 = ((x1921==(x1922/x1923))>>x1924);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x1925 = -1;
	int16_t x1926 = -3;
	int8_t x1927 = -6;
	volatile uint16_t x1928 = 15U;
	volatile int32_t t60 = -11;

	t60 = ((x1925==(x1926/x1927))>>x1928);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x1933 = INT32_MIN;
	int16_t x1935 = -7;
	volatile int8_t x1936 = 3;

	t61 = ((x1933==(x1934/x1935))>>x1936);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x2053 = 81U;
	static int32_t x2054 = -1;
	static int64_t x2055 = -49489681809172052LL;
	volatile uint16_t x2056 = 1U;
	int32_t t62 = -744;

	t62 = ((x2053==(x2054/x2055))>>x2056);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x2089 = 63;
	int16_t x2090 = INT16_MIN;
	int64_t x2091 = -1LL;
	int8_t x2092 = 6;
	int32_t t63 = -3;

	t63 = ((x2089==(x2090/x2091))>>x2092);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x2114 = 0U;
	int64_t x2115 = INT64_MIN;

	t64 = ((x2113==(x2114/x2115))>>x2116);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x2134 = 112U;
	volatile int16_t x2135 = INT16_MAX;
	int16_t x2136 = 1;

	t65 = ((x2133==(x2134/x2135))>>x2136);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x2141 = -2;
	static int16_t x2143 = -101;
	uint32_t x2144 = 30U;
	volatile int32_t t66 = -3400;

	t66 = ((x2141==(x2142/x2143))>>x2144);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x2181 = INT64_MIN;
	int16_t x2182 = INT16_MAX;
	int16_t x2183 = 251;
	uint8_t x2184 = 0U;
	volatile int32_t t67 = 155;

	t67 = ((x2181==(x2182/x2183))>>x2184);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x2209 = INT64_MIN;
	uint32_t x2211 = UINT32_MAX;
	volatile int32_t x2212 = 2;
	int32_t t68 = -56;

	t68 = ((x2209==(x2210/x2211))>>x2212);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x2261 = INT16_MAX;
	volatile int8_t x2262 = 1;
	static int16_t x2263 = -1;
	uint16_t x2264 = 7U;
	int32_t t69 = 1;

	t69 = ((x2261==(x2262/x2263))>>x2264);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x2270 = INT8_MAX;
	static int64_t x2271 = 4120454740085LL;

	t70 = ((x2269==(x2270/x2271))>>x2272);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x2281 = 2U;
	static uint8_t x2282 = UINT8_MAX;
	int8_t x2283 = INT8_MAX;
	uint8_t x2284 = 2U;
	int32_t t71 = 273486618;

	t71 = ((x2281==(x2282/x2283))>>x2284);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x2293 = INT64_MAX;
	int64_t x2294 = -2663179258294LL;
	uint16_t x2296 = 6U;
	volatile int32_t t72 = -8894584;

	t72 = ((x2293==(x2294/x2295))>>x2296);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x2321 = UINT64_MAX;
	uint64_t x2322 = 968166321LLU;
	volatile uint64_t x2323 = 27044LLU;
	static uint16_t x2324 = 6U;

	t73 = ((x2321==(x2322/x2323))>>x2324);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x2333 = INT8_MAX;
	volatile int8_t x2334 = -1;
	int64_t x2335 = -5LL;
	uint32_t x2336 = 1U;
	int32_t t74 = -164;

	t74 = ((x2333==(x2334/x2335))>>x2336);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x2346 = INT32_MIN;
	volatile int32_t t75 = 106;

	t75 = ((x2345==(x2346/x2347))>>x2348);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x2353 = INT64_MIN;
	int64_t x2354 = 18644LL;
	volatile uint8_t x2356 = 13U;
	static volatile int32_t t76 = 6;

	t76 = ((x2353==(x2354/x2355))>>x2356);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x2422 = INT64_MIN;
	uint64_t x2423 = 398651340613LLU;
	volatile int32_t t77 = 14910;

	t77 = ((x2421==(x2422/x2423))>>x2424);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x2429 = 12390444U;
	volatile int16_t x2430 = 1;
	int64_t x2431 = -1LL;
	volatile uint32_t x2432 = 1U;
	int32_t t78 = 10898836;

	t78 = ((x2429==(x2430/x2431))>>x2432);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x2442 = INT16_MIN;
	static uint16_t x2443 = 11U;
	int16_t x2444 = 30;
	int32_t t79 = 600;

	t79 = ((x2441==(x2442/x2443))>>x2444);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x2450 = UINT32_MAX;
	static int8_t x2451 = INT8_MIN;
	uint32_t x2452 = 3U;

	t80 = ((x2449==(x2450/x2451))>>x2452);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x2509 = 524901589953113669LLU;
	int64_t x2510 = INT64_MAX;
	int16_t x2511 = -1;
	static int16_t x2512 = 8;

	t81 = ((x2509==(x2510/x2511))>>x2512);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x2521 = 7778U;
	int32_t x2522 = INT32_MIN;
	int8_t x2524 = 3;

	t82 = ((x2521==(x2522/x2523))>>x2524);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x2529 = -4LL;
	static volatile int8_t x2530 = INT8_MAX;
	int32_t x2531 = -10285;
	uint8_t x2532 = 1U;
	int32_t t83 = -742364;

	t83 = ((x2529==(x2530/x2531))>>x2532);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x2581 = INT32_MIN;
	volatile int16_t x2582 = -1;
	uint16_t x2583 = 2449U;
	uint8_t x2584 = 16U;
	volatile int32_t t84 = 895;

	t84 = ((x2581==(x2582/x2583))>>x2584);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x2585 = UINT64_MAX;
	int64_t x2586 = INT64_MAX;
	int64_t x2587 = -1LL;
	static volatile int32_t t85 = -1;

	t85 = ((x2585==(x2586/x2587))>>x2588);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x2605 = INT64_MAX;
	int32_t x2606 = -199566;
	int8_t x2607 = INT8_MIN;
	uint32_t x2608 = 0U;
	volatile int32_t t86 = -5631425;

	t86 = ((x2605==(x2606/x2607))>>x2608);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x2649 = -17547191932LL;
	volatile int8_t x2651 = INT8_MIN;
	volatile int32_t t87 = 1;

	t87 = ((x2649==(x2650/x2651))>>x2652);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int32_t x2742 = 1711;
	static int64_t x2743 = INT64_MAX;
	static volatile int16_t x2744 = 0;
	int32_t t88 = 302768325;

	t88 = ((x2741==(x2742/x2743))>>x2744);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x2789 = 3;
	volatile int16_t x2790 = INT16_MAX;
	volatile int32_t t89 = -632831;

	t89 = ((x2789==(x2790/x2791))>>x2792);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x2893 = INT16_MIN;
	int16_t x2894 = INT16_MIN;
	static volatile uint64_t x2895 = UINT64_MAX;
	uint8_t x2896 = 1U;
	static int32_t t90 = -14;

	t90 = ((x2893==(x2894/x2895))>>x2896);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x2909 = INT32_MIN;
	uint32_t x2910 = 119356249U;
	int8_t x2911 = INT8_MAX;
	uint8_t x2912 = 1U;
	int32_t t91 = 3428442;

	t91 = ((x2909==(x2910/x2911))>>x2912);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x2957 = 14204;
	volatile int64_t x2958 = -114949286537LL;
	uint16_t x2959 = 1U;
	uint8_t x2960 = 15U;
	volatile int32_t t92 = -130403332;

	t92 = ((x2957==(x2958/x2959))>>x2960);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x2965 = 2878216U;
	uint16_t x2966 = 19808U;
	int8_t x2968 = 7;
	volatile int32_t t93 = 3067992;

	t93 = ((x2965==(x2966/x2967))>>x2968);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x3009 = 3U;
	volatile uint16_t x3010 = 1U;
	static volatile uint64_t x3012 = 6LLU;
	volatile int32_t t94 = -42028;

	t94 = ((x3009==(x3010/x3011))>>x3012);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x3043 = INT16_MIN;
	volatile int32_t t95 = 1080428;

	t95 = ((x3041==(x3042/x3043))>>x3044);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x3049 = 4385U;
	int8_t x3051 = INT8_MAX;
	static uint16_t x3052 = 1U;
	int32_t t96 = 2;

	t96 = ((x3049==(x3050/x3051))>>x3052);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x3094 = UINT32_MAX;
	static int8_t x3095 = -1;
	static volatile uint8_t x3096 = 0U;

	t97 = ((x3093==(x3094/x3095))>>x3096);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x3101 = INT8_MIN;
	static volatile int32_t t98 = -577947;

	t98 = ((x3101==(x3102/x3103))>>x3104);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x3167 = INT8_MAX;
	static volatile uint8_t x3168 = 13U;

	t99 = ((x3165==(x3166/x3167))>>x3168);

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


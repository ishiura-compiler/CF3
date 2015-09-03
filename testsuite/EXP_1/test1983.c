#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = -380230;
volatile int32_t t1 = 655330;
uint16_t x120 = 0U;
uint8_t x140 = 1U;
int32_t t4 = 223790423;
uint32_t x162 = 505U;
volatile uint64_t x168 = 14LLU;
static int16_t x233 = INT16_MAX;
uint16_t x236 = 0U;
static volatile int64_t x250 = INT64_MAX;
int32_t t10 = -1;
volatile int32_t x301 = -857862113;
uint64_t x303 = 71LLU;
uint16_t x304 = 3U;
uint16_t x454 = UINT16_MAX;
volatile int32_t t13 = 11;
int32_t x487 = INT32_MAX;
static volatile int32_t t15 = -3023268;
int32_t t16 = -1;
static volatile int16_t x580 = 10;
int32_t t18 = 11606;
volatile int32_t t21 = 2927;
static uint64_t x759 = UINT64_MAX;
static volatile int8_t x760 = 1;
static uint64_t x761 = UINT64_MAX;
static uint8_t x770 = UINT8_MAX;
uint32_t x771 = UINT32_MAX;
uint32_t x809 = 11438U;
int32_t x811 = 9;
static uint8_t x812 = 6U;
int64_t x953 = INT64_MIN;
volatile int32_t x956 = 0;
static uint8_t x984 = 1U;
uint16_t x994 = UINT16_MAX;
static volatile uint8_t x995 = 29U;
static uint8_t x996 = 5U;
uint8_t x1099 = UINT8_MAX;
int8_t x1133 = INT8_MAX;
volatile uint64_t x1139 = 195LLU;
uint16_t x1190 = 6U;
uint16_t x1306 = 26483U;
int8_t x1389 = -3;
int16_t x1390 = INT16_MIN;
static uint32_t x1462 = UINT32_MAX;
volatile int64_t x1581 = 35889061LL;
volatile uint8_t x1596 = 0U;
uint32_t x1626 = 3746440U;
uint16_t x1628 = 1U;
int8_t x1748 = 0;
int32_t t49 = -4;
volatile int8_t x1792 = 1;
static volatile int32_t t51 = 22763063;
uint64_t x1793 = 533066LLU;
uint8_t x1846 = 0U;
int8_t x1847 = INT8_MIN;
int8_t x1884 = 0;
int64_t x2022 = INT64_MIN;
static int8_t x2023 = -1;
int8_t x2077 = INT8_MAX;
int8_t x2079 = INT8_MIN;
static volatile uint64_t x2145 = 22084993LLU;
int32_t t62 = 6203759;
static int64_t x2264 = 0LL;
volatile int32_t t64 = -1070;
int64_t x2297 = INT64_MIN;
volatile int32_t t65 = 284118;
int16_t x2350 = INT16_MIN;
volatile int16_t x2357 = INT16_MIN;
int8_t x2360 = 0;
volatile int32_t t67 = -18066;
volatile int8_t x2391 = -1;
uint32_t x2392 = 14U;
int32_t x2521 = 1;
int32_t x2523 = INT32_MAX;
int32_t x2536 = 0;
uint8_t x2580 = 1U;
uint16_t x2584 = 6U;
static int64_t x2633 = 4530808361984551101LL;
volatile int64_t x2646 = INT64_MIN;
static volatile int16_t x2658 = 69;
int16_t x2659 = 26;
static int64_t x2667 = INT64_MIN;
volatile uint32_t x2680 = 22U;
volatile uint8_t x2773 = UINT8_MAX;
static int64_t x2774 = INT64_MAX;
uint16_t x2813 = UINT16_MAX;
int32_t t86 = -2;
static uint8_t x2889 = 1U;
volatile int8_t x2890 = 1;
static uint16_t x2900 = 9U;
int8_t x2954 = INT8_MAX;
int32_t x2956 = 1;
volatile int32_t t95 = -92434;
volatile int16_t x3233 = INT16_MIN;
int32_t x3294 = -71453462;
int16_t x3310 = INT16_MIN;
static uint32_t x3325 = 943U;
uint16_t x3328 = 1U;
volatile int32_t t99 = -4;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	int8_t x2 = INT8_MIN;
	uint64_t x3 = UINT64_MAX;
	static uint16_t x4 = 12U;

	t0 = (((x1|x2)<=x3)>>x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x73 = 0U;
	int32_t x74 = INT32_MAX;
	uint64_t x75 = 114LLU;
	uint8_t x76 = 2U;

	t1 = (((x73|x74)<=x75)>>x76);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x105 = 757913U;
	int64_t x106 = -975642LL;
	uint32_t x107 = 311158683U;
	uint16_t x108 = 22U;
	volatile int32_t t2 = 802735317;

	t2 = (((x105|x106)<=x107)>>x108);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x117 = 403072648U;
	int64_t x118 = INT64_MAX;
	int32_t x119 = -1;
	int32_t t3 = 9790773;

	t3 = (((x117|x118)<=x119)>>x120);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x137 = -7849336355060LL;
	static int32_t x138 = -5209278;
	int64_t x139 = -1LL;

	t4 = (((x137|x138)<=x139)>>x140);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x161 = 6LLU;
	int64_t x163 = -22173424825LL;
	uint16_t x164 = 11U;
	int32_t t5 = 0;

	t5 = (((x161|x162)<=x163)>>x164);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x165 = UINT16_MAX;
	int64_t x166 = 2915704LL;
	int8_t x167 = INT8_MIN;
	int32_t t6 = -43;

	t6 = (((x165|x166)<=x167)>>x168);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x234 = INT64_MIN;
	uint16_t x235 = 58U;
	int32_t t7 = 15975;

	t7 = (((x233|x234)<=x235)>>x236);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x249 = 94U;
	int32_t x251 = -2555;
	volatile int8_t x252 = 3;
	static int32_t t8 = 70328594;

	t8 = (((x249|x250)<=x251)>>x252);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x285 = 15126784U;
	int8_t x286 = INT8_MAX;
	uint64_t x287 = 230954LLU;
	uint16_t x288 = 0U;
	static volatile int32_t t9 = 45719;

	t9 = (((x285|x286)<=x287)>>x288);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x289 = INT16_MIN;
	volatile int16_t x290 = -4068;
	uint16_t x291 = 519U;
	uint8_t x292 = 9U;

	t10 = (((x289|x290)<=x291)>>x292);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x302 = -1;
	int32_t t11 = -32471;

	t11 = (((x301|x302)<=x303)>>x304);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x429 = 0;
	int64_t x430 = 1016164LL;
	volatile int8_t x431 = 3;
	uint8_t x432 = 0U;
	int32_t t12 = -2;

	t12 = (((x429|x430)<=x431)>>x432);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint64_t x453 = UINT64_MAX;
	int16_t x455 = INT16_MIN;
	volatile uint16_t x456 = 7U;

	t13 = (((x453|x454)<=x455)>>x456);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x485 = UINT64_MAX;
	int32_t x486 = -1;
	static int8_t x488 = 14;
	volatile int32_t t14 = -71;

	t14 = (((x485|x486)<=x487)>>x488);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x545 = 1;
	uint8_t x546 = UINT8_MAX;
	volatile int64_t x547 = INT64_MIN;
	volatile int8_t x548 = 1;

	t15 = (((x545|x546)<=x547)>>x548);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x553 = 33;
	static int16_t x554 = -1;
	int32_t x555 = INT32_MAX;
	int8_t x556 = 1;

	t16 = (((x553|x554)<=x555)>>x556);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x557 = -14;
	int16_t x558 = -1;
	volatile int8_t x559 = INT8_MIN;
	static uint8_t x560 = 1U;
	static int32_t t17 = -2250;

	t17 = (((x557|x558)<=x559)>>x560);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x577 = INT8_MIN;
	static uint64_t x578 = 3668920844LLU;
	int16_t x579 = INT16_MAX;

	t18 = (((x577|x578)<=x579)>>x580);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x585 = INT16_MAX;
	int16_t x586 = -74;
	static int64_t x587 = INT64_MIN;
	uint16_t x588 = 1U;
	int32_t t19 = -31584977;

	t19 = (((x585|x586)<=x587)>>x588);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x653 = -1;
	uint32_t x654 = UINT32_MAX;
	int32_t x655 = -1;
	uint8_t x656 = 7U;
	static volatile int32_t t20 = -3549;

	t20 = (((x653|x654)<=x655)>>x656);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x685 = -1;
	int64_t x686 = -1LL;
	int64_t x687 = INT64_MAX;
	uint16_t x688 = 27U;

	t21 = (((x685|x686)<=x687)>>x688);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x729 = -1;
	uint8_t x730 = UINT8_MAX;
	uint16_t x731 = 16U;
	uint32_t x732 = 0U;
	int32_t t22 = -1979646;

	t22 = (((x729|x730)<=x731)>>x732);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x757 = UINT16_MAX;
	int32_t x758 = INT32_MIN;
	volatile int32_t t23 = -328;

	t23 = (((x757|x758)<=x759)>>x760);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x762 = 12U;
	int64_t x763 = 1147236907124104533LL;
	int32_t x764 = 1;
	int32_t t24 = -2536;

	t24 = (((x761|x762)<=x763)>>x764);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x769 = INT8_MAX;
	volatile int16_t x772 = 0;
	static volatile int32_t t25 = -129744;

	t25 = (((x769|x770)<=x771)>>x772);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x773 = -1;
	uint32_t x774 = 888740U;
	static volatile int64_t x775 = INT64_MIN;
	volatile int8_t x776 = 2;
	int32_t t26 = -7;

	t26 = (((x773|x774)<=x775)>>x776);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x810 = 51U;
	static int32_t t27 = -7140241;

	t27 = (((x809|x810)<=x811)>>x812);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x954 = INT16_MIN;
	uint8_t x955 = 0U;
	volatile int32_t t28 = -9391;

	t28 = (((x953|x954)<=x955)>>x956);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x981 = INT16_MIN;
	uint8_t x982 = 2U;
	int64_t x983 = INT64_MIN;
	static volatile int32_t t29 = 1;

	t29 = (((x981|x982)<=x983)>>x984);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x993 = INT32_MIN;
	int32_t t30 = 34;

	t30 = (((x993|x994)<=x995)>>x996);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x997 = INT16_MAX;
	int8_t x998 = INT8_MIN;
	int8_t x999 = INT8_MIN;
	int64_t x1000 = 1LL;
	int32_t t31 = -5474;

	t31 = (((x997|x998)<=x999)>>x1000);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1097 = 41U;
	int16_t x1098 = INT16_MIN;
	uint32_t x1100 = 10U;
	volatile int32_t t32 = 5191627;

	t32 = (((x1097|x1098)<=x1099)>>x1100);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x1134 = UINT8_MAX;
	static int64_t x1135 = 24899LL;
	volatile uint64_t x1136 = 0LLU;
	volatile int32_t t33 = -1472147;

	t33 = (((x1133|x1134)<=x1135)>>x1136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1137 = INT64_MIN;
	int8_t x1138 = -1;
	static volatile int16_t x1140 = 0;
	volatile int32_t t34 = 492519113;

	t34 = (((x1137|x1138)<=x1139)>>x1140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1157 = INT32_MAX;
	int64_t x1158 = INT64_MAX;
	static uint8_t x1159 = 97U;
	int64_t x1160 = 5LL;
	volatile int32_t t35 = 295956427;

	t35 = (((x1157|x1158)<=x1159)>>x1160);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x1165 = UINT16_MAX;
	int8_t x1166 = 41;
	volatile int32_t x1167 = INT32_MIN;
	int8_t x1168 = 0;
	volatile int32_t t36 = 74486;

	t36 = (((x1165|x1166)<=x1167)>>x1168);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x1189 = INT32_MIN;
	int16_t x1191 = -1;
	int8_t x1192 = 4;
	volatile int32_t t37 = -10973494;

	t37 = (((x1189|x1190)<=x1191)>>x1192);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1193 = INT8_MAX;
	int64_t x1194 = INT64_MIN;
	uint64_t x1195 = 1175037LLU;
	volatile int32_t x1196 = 24;
	static int32_t t38 = 34012;

	t38 = (((x1193|x1194)<=x1195)>>x1196);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x1233 = UINT64_MAX;
	uint64_t x1234 = 1311762111502128075LLU;
	int16_t x1235 = 80;
	uint8_t x1236 = 5U;
	int32_t t39 = -6227;

	t39 = (((x1233|x1234)<=x1235)>>x1236);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x1249 = 5647489U;
	volatile int64_t x1250 = -1LL;
	int64_t x1251 = INT64_MIN;
	int8_t x1252 = 3;
	int32_t t40 = -5272;

	t40 = (((x1249|x1250)<=x1251)>>x1252);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x1305 = 27;
	static uint32_t x1307 = 49963U;
	uint8_t x1308 = 0U;
	volatile int32_t t41 = 227;

	t41 = (((x1305|x1306)<=x1307)>>x1308);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x1391 = 307U;
	volatile uint8_t x1392 = 0U;
	volatile int32_t t42 = 1835011;

	t42 = (((x1389|x1390)<=x1391)>>x1392);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x1461 = -1;
	int32_t x1463 = INT32_MIN;
	int8_t x1464 = 1;
	int32_t t43 = -12911919;

	t43 = (((x1461|x1462)<=x1463)>>x1464);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x1557 = 19U;
	volatile int8_t x1558 = INT8_MAX;
	static int16_t x1559 = -1;
	int8_t x1560 = 1;
	volatile int32_t t44 = 11933498;

	t44 = (((x1557|x1558)<=x1559)>>x1560);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x1569 = -1980;
	uint64_t x1570 = UINT64_MAX;
	volatile int64_t x1571 = -1LL;
	uint16_t x1572 = 4U;
	volatile int32_t t45 = -42513804;

	t45 = (((x1569|x1570)<=x1571)>>x1572);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x1582 = 227U;
	uint32_t x1583 = UINT32_MAX;
	uint32_t x1584 = 0U;
	int32_t t46 = -1630;

	t46 = (((x1581|x1582)<=x1583)>>x1584);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x1593 = -1;
	static int32_t x1594 = -1;
	uint8_t x1595 = 25U;
	static int32_t t47 = -7649;

	t47 = (((x1593|x1594)<=x1595)>>x1596);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x1625 = INT64_MIN;
	uint16_t x1627 = 72U;
	volatile int32_t t48 = 913515;

	t48 = (((x1625|x1626)<=x1627)>>x1628);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x1745 = UINT8_MAX;
	volatile int16_t x1746 = INT16_MIN;
	int16_t x1747 = -1;

	t49 = (((x1745|x1746)<=x1747)>>x1748);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x1753 = 37;
	static int64_t x1754 = INT64_MAX;
	int32_t x1755 = INT32_MIN;
	uint32_t x1756 = 2U;
	volatile int32_t t50 = -596455782;

	t50 = (((x1753|x1754)<=x1755)>>x1756);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x1789 = -1;
	int32_t x1790 = 358;
	volatile uint64_t x1791 = UINT64_MAX;

	t51 = (((x1789|x1790)<=x1791)>>x1792);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x1794 = 39U;
	uint16_t x1795 = 2554U;
	int8_t x1796 = 0;
	int32_t t52 = -32035;

	t52 = (((x1793|x1794)<=x1795)>>x1796);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x1813 = INT32_MIN;
	static uint8_t x1814 = 106U;
	int8_t x1815 = INT8_MAX;
	static uint32_t x1816 = 21U;
	int32_t t53 = -112473519;

	t53 = (((x1813|x1814)<=x1815)>>x1816);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x1825 = 51;
	volatile uint8_t x1826 = 55U;
	static volatile int8_t x1827 = 2;
	static uint8_t x1828 = 26U;
	int32_t t54 = -289309;

	t54 = (((x1825|x1826)<=x1827)>>x1828);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x1845 = 7003LLU;
	uint16_t x1848 = 3U;
	static int32_t t55 = -16197;

	t55 = (((x1845|x1846)<=x1847)>>x1848);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x1881 = -1;
	int8_t x1882 = INT8_MIN;
	static int32_t x1883 = INT32_MIN;
	int32_t t56 = 1183;

	t56 = (((x1881|x1882)<=x1883)>>x1884);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x1889 = -1;
	volatile int8_t x1890 = 0;
	int64_t x1891 = 29899509071LL;
	uint16_t x1892 = 1U;
	volatile int32_t t57 = -1426651;

	t57 = (((x1889|x1890)<=x1891)>>x1892);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x1933 = INT16_MIN;
	static uint32_t x1934 = UINT32_MAX;
	int16_t x1935 = INT16_MIN;
	int8_t x1936 = 0;
	int32_t t58 = -31073;

	t58 = (((x1933|x1934)<=x1935)>>x1936);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x2009 = INT32_MIN;
	volatile uint8_t x2010 = UINT8_MAX;
	int64_t x2011 = -1LL;
	int8_t x2012 = 1;
	static int32_t t59 = -991115024;

	t59 = (((x2009|x2010)<=x2011)>>x2012);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x2021 = -1LL;
	uint8_t x2024 = 0U;
	int32_t t60 = 3;

	t60 = (((x2021|x2022)<=x2023)>>x2024);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x2078 = INT32_MIN;
	static uint8_t x2080 = 3U;
	volatile int32_t t61 = 13878861;

	t61 = (((x2077|x2078)<=x2079)>>x2080);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x2146 = 0;
	int64_t x2147 = -969LL;
	uint16_t x2148 = 4U;

	t62 = (((x2145|x2146)<=x2147)>>x2148);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x2221 = UINT16_MAX;
	uint8_t x2222 = UINT8_MAX;
	int64_t x2223 = 763641251LL;
	volatile uint8_t x2224 = 5U;
	static volatile int32_t t63 = 32671;

	t63 = (((x2221|x2222)<=x2223)>>x2224);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x2261 = UINT64_MAX;
	int16_t x2262 = INT16_MIN;
	static int8_t x2263 = -1;

	t64 = (((x2261|x2262)<=x2263)>>x2264);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x2298 = INT32_MAX;
	int32_t x2299 = INT32_MIN;
	uint16_t x2300 = 0U;

	t65 = (((x2297|x2298)<=x2299)>>x2300);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x2349 = INT16_MIN;
	volatile uint8_t x2351 = UINT8_MAX;
	int8_t x2352 = 0;
	volatile int32_t t66 = 346840165;

	t66 = (((x2349|x2350)<=x2351)>>x2352);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x2358 = 53424338364LLU;
	static int16_t x2359 = 84;

	t67 = (((x2357|x2358)<=x2359)>>x2360);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x2389 = INT16_MIN;
	volatile int32_t x2390 = INT32_MIN;
	int32_t t68 = -594575;

	t68 = (((x2389|x2390)<=x2391)>>x2392);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x2425 = 18U;
	int8_t x2426 = INT8_MIN;
	int8_t x2427 = 15;
	uint8_t x2428 = 1U;
	int32_t t69 = -31;

	t69 = (((x2425|x2426)<=x2427)>>x2428);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x2453 = INT8_MIN;
	int8_t x2454 = INT8_MIN;
	uint8_t x2455 = UINT8_MAX;
	static uint64_t x2456 = 2LLU;
	volatile int32_t t70 = -243;

	t70 = (((x2453|x2454)<=x2455)>>x2456);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x2522 = INT8_MIN;
	int8_t x2524 = 1;
	int32_t t71 = 0;

	t71 = (((x2521|x2522)<=x2523)>>x2524);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x2533 = 5U;
	int16_t x2534 = INT16_MIN;
	int64_t x2535 = INT64_MAX;
	static int32_t t72 = 50750601;

	t72 = (((x2533|x2534)<=x2535)>>x2536);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x2565 = INT64_MAX;
	volatile uint16_t x2566 = 1U;
	uint8_t x2567 = 89U;
	static uint8_t x2568 = 2U;
	static int32_t t73 = -42204735;

	t73 = (((x2565|x2566)<=x2567)>>x2568);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x2577 = -1;
	int64_t x2578 = INT64_MIN;
	int32_t x2579 = -1;
	volatile int32_t t74 = 2115344;

	t74 = (((x2577|x2578)<=x2579)>>x2580);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x2581 = UINT32_MAX;
	int16_t x2582 = -4047;
	int64_t x2583 = INT64_MIN;
	int32_t t75 = 501404;

	t75 = (((x2581|x2582)<=x2583)>>x2584);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x2605 = INT16_MAX;
	uint8_t x2606 = 1U;
	int32_t x2607 = -45;
	uint16_t x2608 = 19U;
	static int32_t t76 = -49887;

	t76 = (((x2605|x2606)<=x2607)>>x2608);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x2634 = UINT8_MAX;
	volatile uint8_t x2635 = UINT8_MAX;
	uint8_t x2636 = 3U;
	int32_t t77 = -435593110;

	t77 = (((x2633|x2634)<=x2635)>>x2636);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x2645 = INT16_MIN;
	volatile int64_t x2647 = INT64_MIN;
	uint8_t x2648 = 1U;
	int32_t t78 = 3;

	t78 = (((x2645|x2646)<=x2647)>>x2648);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x2657 = -2;
	int16_t x2660 = 3;
	volatile int32_t t79 = -257;

	t79 = (((x2657|x2658)<=x2659)>>x2660);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x2665 = -1;
	int32_t x2666 = -1;
	int16_t x2668 = 0;
	int32_t t80 = -11605;

	t80 = (((x2665|x2666)<=x2667)>>x2668);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x2677 = 52003U;
	uint16_t x2678 = 4764U;
	int8_t x2679 = INT8_MIN;
	int32_t t81 = 25559;

	t81 = (((x2677|x2678)<=x2679)>>x2680);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x2697 = -376;
	int8_t x2698 = INT8_MAX;
	int32_t x2699 = 5086;
	uint8_t x2700 = 1U;
	volatile int32_t t82 = -16864734;

	t82 = (((x2697|x2698)<=x2699)>>x2700);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x2765 = INT64_MAX;
	static uint8_t x2766 = UINT8_MAX;
	int8_t x2767 = INT8_MIN;
	static volatile int16_t x2768 = 1;
	volatile int32_t t83 = -203222184;

	t83 = (((x2765|x2766)<=x2767)>>x2768);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x2775 = 0;
	uint16_t x2776 = 3U;
	static volatile int32_t t84 = -39320;

	t84 = (((x2773|x2774)<=x2775)>>x2776);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x2814 = INT8_MIN;
	static volatile int16_t x2815 = INT16_MAX;
	volatile int64_t x2816 = 0LL;
	static volatile int32_t t85 = 4;

	t85 = (((x2813|x2814)<=x2815)>>x2816);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int32_t x2833 = 478192;
	int8_t x2834 = 1;
	static uint32_t x2835 = 24U;
	uint16_t x2836 = 1U;

	t86 = (((x2833|x2834)<=x2835)>>x2836);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x2891 = INT32_MAX;
	uint8_t x2892 = 5U;
	int32_t t87 = 990468;

	t87 = (((x2889|x2890)<=x2891)>>x2892);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x2897 = 60;
	int16_t x2898 = 13995;
	uint32_t x2899 = 33246608U;
	int32_t t88 = 3715;

	t88 = (((x2897|x2898)<=x2899)>>x2900);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x2933 = -1;
	int32_t x2934 = -1;
	int8_t x2935 = -1;
	int16_t x2936 = 3;
	static volatile int32_t t89 = 115;

	t89 = (((x2933|x2934)<=x2935)>>x2936);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x2953 = 16334U;
	int8_t x2955 = INT8_MIN;
	int32_t t90 = -11;

	t90 = (((x2953|x2954)<=x2955)>>x2956);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x2961 = -1LL;
	uint32_t x2962 = 120U;
	int8_t x2963 = INT8_MIN;
	uint8_t x2964 = 1U;
	int32_t t91 = -2751623;

	t91 = (((x2961|x2962)<=x2963)>>x2964);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x3009 = INT32_MAX;
	volatile int8_t x3010 = -28;
	static uint8_t x3011 = 14U;
	uint8_t x3012 = 5U;
	static volatile int32_t t92 = -232840801;

	t92 = (((x3009|x3010)<=x3011)>>x3012);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x3017 = UINT16_MAX;
	int8_t x3018 = -4;
	int32_t x3019 = -9547;
	int8_t x3020 = 12;
	volatile int32_t t93 = 1;

	t93 = (((x3017|x3018)<=x3019)>>x3020);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x3073 = INT8_MAX;
	int32_t x3074 = 107798;
	int8_t x3075 = INT8_MIN;
	int8_t x3076 = 2;
	static volatile int32_t t94 = 5;

	t94 = (((x3073|x3074)<=x3075)>>x3076);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x3129 = INT16_MIN;
	int8_t x3130 = INT8_MIN;
	uint32_t x3131 = 24123659U;
	static int8_t x3132 = 1;

	t95 = (((x3129|x3130)<=x3131)>>x3132);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x3234 = -198;
	int16_t x3235 = -1;
	int8_t x3236 = 18;
	int32_t t96 = 8366562;

	t96 = (((x3233|x3234)<=x3235)>>x3236);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x3293 = 1419LLU;
	static int8_t x3295 = 29;
	uint8_t x3296 = 19U;
	int32_t t97 = 0;

	t97 = (((x3293|x3294)<=x3295)>>x3296);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x3309 = INT64_MIN;
	int8_t x3311 = -1;
	static uint64_t x3312 = 5LLU;
	volatile int32_t t98 = -13342320;

	t98 = (((x3309|x3310)<=x3311)>>x3312);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x3326 = -55270164;
	int32_t x3327 = -6;

	t99 = (((x3325|x3326)<=x3327)>>x3328);

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


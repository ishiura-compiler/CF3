#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t t0 = -121;
int32_t t1 = -1;
uint8_t x78 = 41U;
int64_t x80 = 4LL;
volatile int32_t t4 = -3429276;
int32_t x125 = INT32_MAX;
uint16_t x127 = 25U;
uint8_t x137 = UINT8_MAX;
static int8_t x140 = 7;
static uint64_t x215 = UINT64_MAX;
volatile int8_t x282 = 1;
volatile uint64_t x283 = UINT64_MAX;
uint64_t x319 = 874745887556LLU;
volatile int32_t x402 = INT32_MIN;
int8_t x404 = 2;
volatile int32_t t12 = 126;
volatile int16_t x499 = INT16_MIN;
int32_t t13 = 52273;
uint8_t x507 = UINT8_MAX;
int32_t t17 = 35680;
int64_t x745 = -4270LL;
int16_t x747 = -24;
uint64_t x765 = 167LLU;
uint32_t x768 = 2U;
volatile int32_t t20 = 7639;
uint64_t x797 = 740085079LLU;
int32_t x798 = INT32_MIN;
uint64_t x810 = 1LLU;
volatile uint32_t x845 = 427465U;
uint16_t x846 = 58U;
int8_t x876 = 0;
int8_t x928 = 22;
int8_t x965 = INT8_MIN;
int16_t x1093 = INT16_MIN;
static volatile int64_t x1094 = 68LL;
int32_t t32 = 1857;
uint32_t x1157 = 2233U;
uint8_t x1161 = UINT8_MAX;
volatile int32_t x1165 = -164575;
int32_t x1167 = INT32_MIN;
uint8_t x1184 = 7U;
int32_t x1213 = INT32_MIN;
int64_t x1234 = -1360468LL;
int64_t x1275 = INT64_MIN;
volatile int32_t x1401 = INT32_MAX;
uint8_t x1505 = 6U;
uint16_t x1506 = 3148U;
static volatile int32_t t47 = 140726;
uint16_t x1672 = 0U;
int64_t x1673 = INT64_MIN;
static int64_t x1759 = INT64_MAX;
volatile int32_t t53 = 2931377;
int8_t x1822 = INT8_MIN;
static int32_t x1849 = -1;
int64_t x1850 = 7573884785984292LL;
volatile int32_t t56 = -105;
int8_t x1910 = INT8_MIN;
uint64_t x1911 = UINT64_MAX;
int8_t x1912 = 1;
uint8_t x2004 = 0U;
uint8_t x2008 = 5U;
uint64_t x2045 = 6760820817113284LLU;
int32_t t61 = 38;
int8_t x2049 = INT8_MIN;
int32_t t62 = 377286;
uint32_t x2062 = 210131U;
static int16_t x2081 = INT16_MIN;
volatile int32_t x2083 = INT32_MIN;
int8_t x2084 = 0;
static volatile int16_t x2106 = INT16_MIN;
int16_t x2245 = 495;
int16_t x2289 = 189;
uint32_t x2290 = 3U;
int32_t x2327 = INT32_MIN;
volatile int32_t t70 = -76040;
uint32_t x2424 = 30U;
volatile int32_t t71 = 1102;
uint16_t x2429 = UINT16_MAX;
uint64_t x2431 = UINT64_MAX;
int32_t x2441 = INT32_MIN;
int64_t x2445 = INT64_MAX;
int32_t x2446 = 1;
volatile int32_t t75 = -457;
static int16_t x2495 = -1;
volatile int16_t x2536 = 3;
volatile uint32_t x2773 = UINT32_MAX;
volatile int16_t x2830 = -1;
volatile int64_t x2851 = -900501LL;
int32_t x2991 = 2;
int8_t x2992 = 23;
static volatile int32_t t89 = 139086954;
static int64_t x3083 = INT64_MIN;
uint32_t x3173 = 30U;
int16_t x3209 = -1;
volatile int32_t x3251 = 174604549;
int16_t x3311 = INT16_MAX;
int8_t x3333 = INT8_MIN;
static uint16_t x3335 = 14U;
uint8_t x3336 = 8U;
int32_t t97 = 4966;


void f0(void) {
	int64_t x1 = INT64_MAX;
	int32_t x2 = INT32_MIN;
	uint16_t x3 = 7519U;
	volatile int32_t x4 = 0;

	t0 = ((x1==(x2/x3))<<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x33 = 33471839929824814LL;
	volatile int64_t x34 = INT64_MAX;
	static uint64_t x35 = 390830119157231038LLU;
	static int16_t x36 = 24;

	t1 = ((x33==(x34/x35))<<x36);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x37 = 2730LLU;
	uint64_t x38 = UINT64_MAX;
	int32_t x39 = INT32_MIN;
	volatile int8_t x40 = 1;
	static volatile int32_t t2 = 6617390;

	t2 = ((x37==(x38/x39))<<x40);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x77 = -598;
	int64_t x79 = 523302604072LL;
	static int32_t t3 = -54;

	t3 = ((x77==(x78/x79))<<x80);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x97 = UINT8_MAX;
	static int16_t x98 = INT16_MIN;
	volatile int8_t x99 = 14;
	uint8_t x100 = 11U;

	t4 = ((x97==(x98/x99))<<x100);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x126 = INT64_MAX;
	uint16_t x128 = 13U;
	static int32_t t5 = 0;

	t5 = ((x125==(x126/x127))<<x128);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x138 = 1;
	int16_t x139 = INT16_MIN;
	int32_t t6 = -55;

	t6 = ((x137==(x138/x139))<<x140);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x213 = INT16_MAX;
	int16_t x214 = INT16_MAX;
	volatile int64_t x216 = 17LL;
	volatile int32_t t7 = -556;

	t7 = ((x213==(x214/x215))<<x216);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x281 = INT8_MIN;
	static volatile int16_t x284 = 16;
	volatile int32_t t8 = 34072;

	t8 = ((x281==(x282/x283))<<x284);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x317 = INT8_MIN;
	static int32_t x318 = -24399813;
	uint32_t x320 = 3U;
	volatile int32_t t9 = 7;

	t9 = ((x317==(x318/x319))<<x320);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x329 = -1;
	uint16_t x330 = 92U;
	uint32_t x331 = 2950786U;
	static int8_t x332 = 1;
	static int32_t t10 = -10038812;

	t10 = ((x329==(x330/x331))<<x332);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x389 = UINT32_MAX;
	uint16_t x390 = UINT16_MAX;
	uint64_t x391 = 19942LLU;
	uint8_t x392 = 1U;
	static volatile int32_t t11 = 25;

	t11 = ((x389==(x390/x391))<<x392);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x401 = -1;
	volatile int64_t x403 = 257144400800LL;

	t12 = ((x401==(x402/x403))<<x404);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x497 = UINT16_MAX;
	uint64_t x498 = 13141472LLU;
	uint16_t x500 = 0U;

	t13 = ((x497==(x498/x499))<<x500);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x505 = -1LL;
	uint8_t x506 = UINT8_MAX;
	uint32_t x508 = 6U;
	int32_t t14 = -22;

	t14 = ((x505==(x506/x507))<<x508);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x545 = INT32_MIN;
	uint64_t x546 = 70319645735637LLU;
	int64_t x547 = INT64_MIN;
	static volatile int8_t x548 = 1;
	int32_t t15 = -478388;

	t15 = ((x545==(x546/x547))<<x548);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x601 = -18;
	uint64_t x602 = UINT64_MAX;
	static int8_t x603 = -1;
	int16_t x604 = 2;
	int32_t t16 = -210663838;

	t16 = ((x601==(x602/x603))<<x604);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x661 = INT32_MIN;
	uint64_t x662 = 2454094992422LLU;
	int8_t x663 = 2;
	static uint8_t x664 = 3U;

	t17 = ((x661==(x662/x663))<<x664);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x737 = INT16_MIN;
	static uint32_t x738 = 11U;
	uint8_t x739 = UINT8_MAX;
	volatile uint64_t x740 = 3LLU;
	volatile int32_t t18 = 0;

	t18 = ((x737==(x738/x739))<<x740);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x746 = -1LL;
	int8_t x748 = 10;
	volatile int32_t t19 = -520671448;

	t19 = ((x745==(x746/x747))<<x748);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x766 = INT16_MAX;
	uint64_t x767 = 4096123325LLU;

	t20 = ((x765==(x766/x767))<<x768);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x799 = 2660171U;
	static volatile uint8_t x800 = 30U;
	volatile int32_t t21 = -7679751;

	t21 = ((x797==(x798/x799))<<x800);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x809 = INT16_MAX;
	int64_t x811 = -1LL;
	uint8_t x812 = 4U;
	volatile int32_t t22 = 5082;

	t22 = ((x809==(x810/x811))<<x812);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x813 = 0U;
	int32_t x814 = INT32_MIN;
	uint64_t x815 = 6639774872465877LLU;
	volatile uint32_t x816 = 0U;
	int32_t t23 = -10841;

	t23 = ((x813==(x814/x815))<<x816);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint16_t x837 = 114U;
	volatile int32_t x838 = -1;
	int8_t x839 = 14;
	uint8_t x840 = 3U;
	volatile int32_t t24 = -493;

	t24 = ((x837==(x838/x839))<<x840);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x847 = 220916705138LLU;
	volatile int16_t x848 = 2;
	volatile int32_t t25 = -7550514;

	t25 = ((x845==(x846/x847))<<x848);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x873 = INT16_MAX;
	int64_t x874 = INT64_MIN;
	uint16_t x875 = UINT16_MAX;
	volatile int32_t t26 = 4822467;

	t26 = ((x873==(x874/x875))<<x876);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x925 = INT32_MIN;
	volatile int16_t x926 = INT16_MIN;
	static volatile uint64_t x927 = 26LLU;
	static int32_t t27 = 2397;

	t27 = ((x925==(x926/x927))<<x928);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x966 = -1;
	uint32_t x967 = 742320U;
	uint16_t x968 = 17U;
	static int32_t t28 = 794;

	t28 = ((x965==(x966/x967))<<x968);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1057 = 2LL;
	int8_t x1058 = -21;
	uint8_t x1059 = UINT8_MAX;
	static volatile uint16_t x1060 = 3U;
	static volatile int32_t t29 = -532425;

	t29 = ((x1057==(x1058/x1059))<<x1060);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1095 = UINT64_MAX;
	uint8_t x1096 = 0U;
	volatile int32_t t30 = 71136;

	t30 = ((x1093==(x1094/x1095))<<x1096);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x1141 = UINT16_MAX;
	int32_t x1142 = 45;
	volatile int16_t x1143 = INT16_MIN;
	int8_t x1144 = 10;
	int32_t t31 = 28579;

	t31 = ((x1141==(x1142/x1143))<<x1144);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x1149 = UINT64_MAX;
	int16_t x1150 = INT16_MIN;
	int32_t x1151 = -1;
	volatile int8_t x1152 = 0;

	t32 = ((x1149==(x1150/x1151))<<x1152);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x1158 = 78U;
	int64_t x1159 = INT64_MAX;
	int16_t x1160 = 4;
	static int32_t t33 = 463844;

	t33 = ((x1157==(x1158/x1159))<<x1160);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x1162 = INT64_MAX;
	int32_t x1163 = INT32_MAX;
	uint16_t x1164 = 1U;
	int32_t t34 = 0;

	t34 = ((x1161==(x1162/x1163))<<x1164);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x1166 = 4351U;
	uint32_t x1168 = 1U;
	volatile int32_t t35 = -490;

	t35 = ((x1165==(x1166/x1167))<<x1168);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1181 = -1;
	static int8_t x1182 = INT8_MAX;
	uint16_t x1183 = UINT16_MAX;
	int32_t t36 = -1;

	t36 = ((x1181==(x1182/x1183))<<x1184);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x1205 = 3;
	int8_t x1206 = 1;
	int64_t x1207 = INT64_MIN;
	int64_t x1208 = 0LL;
	volatile int32_t t37 = 252738433;

	t37 = ((x1205==(x1206/x1207))<<x1208);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x1214 = -1;
	uint16_t x1215 = 111U;
	uint8_t x1216 = 8U;
	volatile int32_t t38 = 129494412;

	t38 = ((x1213==(x1214/x1215))<<x1216);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x1233 = -49898986;
	uint32_t x1235 = 12556260U;
	int8_t x1236 = 11;
	volatile int32_t t39 = -1774;

	t39 = ((x1233==(x1234/x1235))<<x1236);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x1273 = 16U;
	int64_t x1274 = 752LL;
	int8_t x1276 = 25;
	volatile int32_t t40 = 1474;

	t40 = ((x1273==(x1274/x1275))<<x1276);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1402 = -1LL;
	uint32_t x1403 = 380447U;
	uint8_t x1404 = 0U;
	volatile int32_t t41 = 383;

	t41 = ((x1401==(x1402/x1403))<<x1404);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x1429 = -8;
	volatile int64_t x1430 = INT64_MAX;
	volatile int64_t x1431 = -1LL;
	static int16_t x1432 = 30;
	int32_t t42 = -15;

	t42 = ((x1429==(x1430/x1431))<<x1432);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x1477 = 261549322078LLU;
	static volatile int8_t x1478 = -4;
	uint16_t x1479 = 2203U;
	uint16_t x1480 = 25U;
	volatile int32_t t43 = 6277960;

	t43 = ((x1477==(x1478/x1479))<<x1480);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x1493 = UINT16_MAX;
	int64_t x1494 = INT64_MIN;
	int16_t x1495 = INT16_MAX;
	int8_t x1496 = 12;
	volatile int32_t t44 = 53949527;

	t44 = ((x1493==(x1494/x1495))<<x1496);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x1507 = INT16_MIN;
	int8_t x1508 = 10;
	int32_t t45 = 114;

	t45 = ((x1505==(x1506/x1507))<<x1508);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x1589 = 52310294046970621LLU;
	int8_t x1590 = 17;
	volatile int64_t x1591 = INT64_MIN;
	int32_t x1592 = 0;
	static volatile int32_t t46 = -4454979;

	t46 = ((x1589==(x1590/x1591))<<x1592);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x1625 = UINT64_MAX;
	int16_t x1626 = INT16_MAX;
	uint64_t x1627 = 2352703085LLU;
	int8_t x1628 = 2;

	t47 = ((x1625==(x1626/x1627))<<x1628);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x1661 = INT8_MIN;
	int32_t x1662 = INT32_MAX;
	volatile uint16_t x1663 = UINT16_MAX;
	uint16_t x1664 = 1U;
	int32_t t48 = 599;

	t48 = ((x1661==(x1662/x1663))<<x1664);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x1669 = 2468;
	static int16_t x1670 = INT16_MIN;
	volatile uint16_t x1671 = UINT16_MAX;
	volatile int32_t t49 = -10;

	t49 = ((x1669==(x1670/x1671))<<x1672);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x1674 = INT8_MIN;
	int8_t x1675 = -1;
	static volatile uint32_t x1676 = 16U;
	static int32_t t50 = 160;

	t50 = ((x1673==(x1674/x1675))<<x1676);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x1717 = 950753219649LLU;
	uint32_t x1718 = UINT32_MAX;
	static volatile int8_t x1719 = -5;
	static volatile uint16_t x1720 = 5U;
	volatile int32_t t51 = -247;

	t51 = ((x1717==(x1718/x1719))<<x1720);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x1725 = 925808906U;
	static uint16_t x1726 = 23703U;
	int16_t x1727 = INT16_MIN;
	volatile uint8_t x1728 = 0U;
	volatile int32_t t52 = -2260601;

	t52 = ((x1725==(x1726/x1727))<<x1728);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x1757 = UINT32_MAX;
	int64_t x1758 = INT64_MIN;
	int16_t x1760 = 24;

	t53 = ((x1757==(x1758/x1759))<<x1760);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x1821 = UINT32_MAX;
	uint8_t x1823 = UINT8_MAX;
	uint8_t x1824 = 1U;
	volatile int32_t t54 = -207477;

	t54 = ((x1821==(x1822/x1823))<<x1824);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x1851 = 3710408;
	static uint64_t x1852 = 10LLU;
	int32_t t55 = 1210268;

	t55 = ((x1849==(x1850/x1851))<<x1852);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x1865 = INT8_MAX;
	volatile uint8_t x1866 = 3U;
	int32_t x1867 = -1;
	uint16_t x1868 = 2U;

	t56 = ((x1865==(x1866/x1867))<<x1868);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x1909 = 27U;
	int32_t t57 = 152715547;

	t57 = ((x1909==(x1910/x1911))<<x1912);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x1937 = INT16_MIN;
	static int8_t x1938 = INT8_MAX;
	uint64_t x1939 = 8379563476484LLU;
	uint16_t x1940 = 0U;
	volatile int32_t t58 = 103;

	t58 = ((x1937==(x1938/x1939))<<x1940);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x2001 = UINT16_MAX;
	uint16_t x2002 = UINT16_MAX;
	uint32_t x2003 = 1U;
	static int32_t t59 = 949559;

	t59 = ((x2001==(x2002/x2003))<<x2004);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x2005 = INT8_MIN;
	uint64_t x2006 = 525018416057LLU;
	static volatile int64_t x2007 = 83609024LL;
	volatile int32_t t60 = 5136960;

	t60 = ((x2005==(x2006/x2007))<<x2008);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x2046 = 13136698U;
	static int32_t x2047 = -1;
	uint32_t x2048 = 1U;

	t61 = ((x2045==(x2046/x2047))<<x2048);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x2050 = 3917U;
	volatile int64_t x2051 = INT64_MIN;
	int8_t x2052 = 6;

	t62 = ((x2049==(x2050/x2051))<<x2052);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x2061 = 419U;
	static volatile int64_t x2063 = -1150LL;
	int8_t x2064 = 1;
	volatile int32_t t63 = 3114;

	t63 = ((x2061==(x2062/x2063))<<x2064);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x2082 = INT32_MIN;
	volatile int32_t t64 = -30701756;

	t64 = ((x2081==(x2082/x2083))<<x2084);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x2105 = 0;
	int64_t x2107 = 16573759253401LL;
	static uint64_t x2108 = 29LLU;
	int32_t t65 = -4;

	t65 = ((x2105==(x2106/x2107))<<x2108);

	if (t65 != 536870912) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int64_t x2153 = 12142246875LL;
	static volatile uint32_t x2154 = 11794687U;
	uint16_t x2155 = UINT16_MAX;
	static uint16_t x2156 = 1U;
	volatile int32_t t66 = -102;

	t66 = ((x2153==(x2154/x2155))<<x2156);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x2246 = UINT64_MAX;
	volatile int64_t x2247 = 9762LL;
	uint8_t x2248 = 0U;
	volatile int32_t t67 = -12307092;

	t67 = ((x2245==(x2246/x2247))<<x2248);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x2291 = INT16_MIN;
	uint8_t x2292 = 10U;
	volatile int32_t t68 = 91686;

	t68 = ((x2289==(x2290/x2291))<<x2292);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x2325 = UINT8_MAX;
	int32_t x2326 = INT32_MIN;
	uint16_t x2328 = 2U;
	int32_t t69 = 82;

	t69 = ((x2325==(x2326/x2327))<<x2328);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x2413 = 3U;
	uint16_t x2414 = 2U;
	int32_t x2415 = -1;
	static volatile uint8_t x2416 = 11U;

	t70 = ((x2413==(x2414/x2415))<<x2416);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x2421 = INT8_MAX;
	static int8_t x2422 = 7;
	int8_t x2423 = INT8_MIN;

	t71 = ((x2421==(x2422/x2423))<<x2424);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x2430 = INT64_MAX;
	uint8_t x2432 = 6U;
	volatile int32_t t72 = 814;

	t72 = ((x2429==(x2430/x2431))<<x2432);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x2442 = -1LL;
	uint8_t x2443 = UINT8_MAX;
	uint32_t x2444 = 29U;
	volatile int32_t t73 = -1;

	t73 = ((x2441==(x2442/x2443))<<x2444);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x2447 = INT64_MAX;
	uint32_t x2448 = 10U;
	int32_t t74 = -7578706;

	t74 = ((x2445==(x2446/x2447))<<x2448);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x2485 = 0LLU;
	volatile int64_t x2486 = 4061LL;
	static uint64_t x2487 = 2736274884957002LLU;
	int8_t x2488 = 0;

	t75 = ((x2485==(x2486/x2487))<<x2488);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x2493 = 110016702LLU;
	int16_t x2494 = INT16_MAX;
	uint8_t x2496 = 15U;
	int32_t t76 = 160;

	t76 = ((x2493==(x2494/x2495))<<x2496);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x2501 = INT64_MIN;
	volatile uint8_t x2502 = UINT8_MAX;
	uint16_t x2503 = 67U;
	volatile uint8_t x2504 = 28U;
	int32_t t77 = 5098499;

	t77 = ((x2501==(x2502/x2503))<<x2504);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x2533 = -1;
	int32_t x2534 = INT32_MIN;
	int32_t x2535 = INT32_MAX;
	static int32_t t78 = 204169698;

	t78 = ((x2533==(x2534/x2535))<<x2536);

	if (t78 != 8) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x2637 = -1LL;
	uint32_t x2638 = 14625U;
	static int32_t x2639 = -1;
	static volatile int32_t x2640 = 27;
	int32_t t79 = -1284;

	t79 = ((x2637==(x2638/x2639))<<x2640);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x2641 = UINT8_MAX;
	int32_t x2642 = -1;
	int32_t x2643 = INT32_MAX;
	uint8_t x2644 = 0U;
	int32_t t80 = 0;

	t80 = ((x2641==(x2642/x2643))<<x2644);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x2673 = 2641409056866735491LL;
	volatile int8_t x2674 = INT8_MAX;
	volatile int16_t x2675 = INT16_MIN;
	volatile int32_t x2676 = 1;
	int32_t t81 = 2432189;

	t81 = ((x2673==(x2674/x2675))<<x2676);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x2774 = INT8_MIN;
	static int32_t x2775 = INT32_MAX;
	int16_t x2776 = 1;
	int32_t t82 = 0;

	t82 = ((x2773==(x2774/x2775))<<x2776);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x2829 = INT8_MAX;
	uint32_t x2831 = 4332078U;
	volatile int8_t x2832 = 1;
	volatile int32_t t83 = -96027;

	t83 = ((x2829==(x2830/x2831))<<x2832);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x2849 = UINT64_MAX;
	volatile int8_t x2850 = INT8_MAX;
	int8_t x2852 = 1;
	int32_t t84 = 1;

	t84 = ((x2849==(x2850/x2851))<<x2852);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x2861 = 98U;
	static volatile int16_t x2862 = INT16_MIN;
	volatile int64_t x2863 = -305735899680LL;
	uint16_t x2864 = 0U;
	volatile int32_t t85 = -140888;

	t85 = ((x2861==(x2862/x2863))<<x2864);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x2885 = 4;
	int8_t x2886 = -1;
	volatile int64_t x2887 = INT64_MIN;
	int16_t x2888 = 0;
	int32_t t86 = 1;

	t86 = ((x2885==(x2886/x2887))<<x2888);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int16_t x2989 = -1;
	volatile int32_t x2990 = 349;
	static int32_t t87 = -3888786;

	t87 = ((x2989==(x2990/x2991))<<x2992);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x2993 = -1;
	volatile int8_t x2994 = INT8_MIN;
	int16_t x2995 = INT16_MIN;
	uint8_t x2996 = 3U;
	int32_t t88 = 899938;

	t88 = ((x2993==(x2994/x2995))<<x2996);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x3045 = 12U;
	int32_t x3046 = -299;
	uint64_t x3047 = 916446614376446LLU;
	int16_t x3048 = 1;

	t89 = ((x3045==(x3046/x3047))<<x3048);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x3081 = INT64_MIN;
	static volatile int8_t x3082 = INT8_MAX;
	int16_t x3084 = 11;
	int32_t t90 = 15912;

	t90 = ((x3081==(x3082/x3083))<<x3084);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x3174 = INT16_MIN;
	static volatile uint16_t x3175 = UINT16_MAX;
	uint8_t x3176 = 27U;
	static volatile int32_t t91 = 2731;

	t91 = ((x3173==(x3174/x3175))<<x3176);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x3205 = INT32_MIN;
	volatile int64_t x3206 = INT64_MIN;
	int16_t x3207 = -492;
	uint8_t x3208 = 7U;
	int32_t t92 = 2722943;

	t92 = ((x3205==(x3206/x3207))<<x3208);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x3210 = 329121809U;
	static uint32_t x3211 = 105712316U;
	volatile uint8_t x3212 = 3U;
	int32_t t93 = -37;

	t93 = ((x3209==(x3210/x3211))<<x3212);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x3249 = UINT8_MAX;
	int64_t x3250 = INT64_MAX;
	uint16_t x3252 = 0U;
	int32_t t94 = 46879499;

	t94 = ((x3249==(x3250/x3251))<<x3252);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x3253 = 31597U;
	int32_t x3254 = -10208;
	uint64_t x3255 = 12563045287302LLU;
	uint8_t x3256 = 12U;
	static int32_t t95 = 154768484;

	t95 = ((x3253==(x3254/x3255))<<x3256);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x3309 = INT64_MAX;
	int64_t x3310 = 51915219132LL;
	uint8_t x3312 = 1U;
	static volatile int32_t t96 = 873206;

	t96 = ((x3309==(x3310/x3311))<<x3312);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x3334 = 295030143LLU;

	t97 = ((x3333==(x3334/x3335))<<x3336);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x3345 = INT32_MIN;
	volatile uint16_t x3346 = UINT16_MAX;
	uint8_t x3347 = 2U;
	int8_t x3348 = 1;
	int32_t t98 = 82153;

	t98 = ((x3345==(x3346/x3347))<<x3348);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x3369 = INT8_MIN;
	static int8_t x3370 = -1;
	int16_t x3371 = -1;
	uint32_t x3372 = 0U;
	volatile int32_t t99 = -382;

	t99 = ((x3369==(x3370/x3371))<<x3372);

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


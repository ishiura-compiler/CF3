#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x88 = 27U;
uint64_t t0 = 3182LLU;
uint16_t x210 = UINT16_MAX;
uint64_t x239 = UINT64_MAX;
int16_t x321 = INT16_MAX;
uint8_t x324 = 24U;
static uint64_t x342 = UINT64_MAX;
uint32_t x343 = 56324U;
uint64_t t5 = 8298386114124LLU;
uint64_t x467 = UINT64_MAX;
static volatile uint64_t t7 = 934637920488585LLU;
int32_t x557 = -1;
static int32_t x593 = 39349;
static int8_t x736 = 1;
int64_t x790 = -1LL;
int16_t x838 = 159;
uint32_t x840 = 1U;
uint64_t t15 = 64364170704LLU;
static volatile int16_t x975 = -1;
uint64_t x976 = 0LLU;
uint64_t x990 = UINT64_MAX;
volatile uint64_t t17 = 133128611844301LLU;
uint32_t x1029 = 24253U;
static int32_t x1030 = -1;
int8_t x1058 = INT8_MAX;
int64_t x1059 = -52725LL;
int64_t t19 = 11948283427302LL;
uint8_t x1084 = 4U;
uint32_t x1165 = UINT32_MAX;
uint32_t x1179 = 3259026U;
volatile int64_t t23 = 27057665755132LL;
uint64_t x1245 = 204794LLU;
int8_t x1248 = 1;
volatile int16_t x1430 = -205;
uint64_t t26 = 1922066LLU;
uint32_t x1491 = UINT32_MAX;
uint16_t x1492 = 14U;
int64_t x1518 = INT64_MAX;
int8_t x1520 = 22;
int64_t t28 = 1748LL;
static uint64_t x1530 = 1451LLU;
uint16_t x1531 = 19U;
volatile uint64_t t29 = 6917738072LLU;
uint64_t x1538 = 564LLU;
static volatile uint32_t x1583 = 60309U;
uint16_t x1613 = 1U;
int32_t x1614 = -182;
static volatile uint16_t x1615 = 8U;
int32_t x1711 = -7;
uint8_t x1777 = UINT8_MAX;
static uint32_t x1779 = 991U;
uint8_t x1780 = 2U;
uint64_t x1866 = UINT64_MAX;
uint8_t x1874 = 14U;
uint64_t x1919 = 555LLU;
int16_t x1961 = 1;
uint32_t x2025 = UINT32_MAX;
uint32_t x2069 = 30116U;
uint32_t x2193 = UINT32_MAX;
uint32_t x2194 = 180884U;
volatile uint32_t t47 = 2629520U;
static uint8_t x2274 = 6U;
uint32_t x2332 = 50U;
volatile int8_t x2334 = INT8_MIN;
int8_t x2335 = -1;
int16_t x2336 = 7;
static uint16_t x2430 = 551U;
volatile int32_t t51 = -2229;
static int16_t x2458 = INT16_MIN;
static int32_t x2550 = -1;
uint64_t x2654 = 391982165439163LLU;
volatile uint32_t t57 = 660762072U;
volatile uint8_t x2714 = UINT8_MAX;
static int64_t x2747 = -1LL;
uint16_t x2850 = 0U;
volatile uint8_t x2852 = 6U;
uint32_t x2900 = 1U;
int64_t x2903 = INT64_MIN;
int8_t x2945 = 4;
static uint16_t x2948 = 0U;
volatile uint32_t t65 = 375U;
uint64_t x2990 = 5LLU;
int16_t x2991 = -28;
int8_t x2992 = 7;
uint8_t x3364 = 0U;
static uint8_t x3495 = 18U;
int32_t t73 = -167;
int8_t x3631 = -1;
volatile uint32_t x3634 = 33U;
static int32_t t77 = 706925;
static uint8_t x3750 = 15U;
volatile uint64_t t79 = 685281139124837660LLU;
uint64_t x3983 = 26144LLU;
uint32_t x4014 = UINT32_MAX;
uint16_t x4122 = UINT16_MAX;
uint32_t x4123 = UINT32_MAX;
volatile uint32_t t85 = 9657403U;
int64_t x4209 = INT64_MAX;
volatile uint64_t t87 = 288847663557LLU;
int32_t x4233 = 34257335;
volatile int8_t x4235 = -1;
int32_t t88 = 5654;
static int16_t x4270 = INT16_MAX;
static volatile uint8_t x4306 = UINT8_MAX;
uint8_t x4322 = 93U;
uint8_t x4452 = 10U;
static volatile int8_t x4512 = 3;
static volatile int32_t x4578 = -1;
int32_t x4621 = -1;
static uint8_t x4673 = 7U;
static int16_t x4676 = 2;


void f0(void) {
	static int16_t x85 = INT16_MAX;
	uint8_t x86 = 76U;
	uint64_t x87 = UINT64_MAX;

	t0 = ((x85-(x86*x87))>>x88);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x209 = 2934U;
	int16_t x211 = INT16_MIN;
	int32_t x212 = 10;
	uint32_t t1 = 295033135U;

	t1 = ((x209-(x210*x211))>>x212);

	if (t1 != 2097122U) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int16_t x237 = INT16_MAX;
	volatile uint32_t x238 = 5U;
	volatile int8_t x240 = 1;
	uint64_t t2 = 257LLU;

	t2 = ((x237-(x238*x239))>>x240);

	if (t2 != 16386LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x305 = UINT32_MAX;
	int16_t x306 = 929;
	uint32_t x307 = 9057915U;
	uint8_t x308 = 1U;
	volatile uint32_t t3 = 1U;

	t3 = ((x305-(x306*x307))>>x308);

	if (t3 != 87565778U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x322 = INT64_MIN;
	int16_t x323 = 0;
	volatile int64_t t4 = 41LL;

	t4 = ((x321-(x322*x323))>>x324);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x341 = 924LLU;
	static int8_t x344 = 5;

	t5 = ((x341-(x342*x343))>>x344);

	if (t5 != 1789LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x437 = INT8_MIN;
	int32_t x438 = 16290227;
	uint64_t x439 = 288645375402255LLU;
	int8_t x440 = 0;
	uint64_t t6 = 1067533357484LLU;

	t6 = ((x437-(x438*x439))>>x440);

	if (t6 != 1821050992985400067LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x465 = -1;
	int8_t x466 = 56;
	int32_t x468 = 9;

	t7 = ((x465-(x466*x467))>>x468);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x558 = 176776741912LL;
	uint64_t x559 = 48810761LLU;
	volatile int8_t x560 = 1;
	volatile uint64_t t8 = 2498165895645LLU;

	t8 = ((x557-(x558*x559))>>x560);

	if (t8 != 4909068386942118291LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x594 = -83;
	int32_t x595 = -1;
	uint8_t x596 = 6U;
	int32_t t9 = 129069697;

	t9 = ((x593-(x594*x595))>>x596);

	if (t9 != 613) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x637 = INT16_MIN;
	int16_t x638 = INT16_MIN;
	int8_t x639 = 11;
	static volatile uint64_t x640 = 2LLU;
	static int32_t t10 = -1;

	t10 = ((x637-(x638*x639))>>x640);

	if (t10 != 81920) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x649 = INT8_MIN;
	int32_t x650 = INT32_MAX;
	volatile uint64_t x651 = 295763120LLU;
	int8_t x652 = 1;
	volatile uint64_t t11 = 91338801589676543LLU;

	t11 = ((x649-(x650*x651))>>x652);

	if (t11 != 8905798805061926424LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x677 = 4831U;
	int16_t x678 = INT16_MAX;
	int64_t x679 = -1LL;
	uint8_t x680 = 3U;
	int64_t t12 = 83342LL;

	t12 = ((x677-(x678*x679))>>x680);

	if (t12 != 4699LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x733 = 18230LLU;
	int32_t x734 = -6879;
	volatile int8_t x735 = -1;
	uint64_t t13 = 74247547909LLU;

	t13 = ((x733-(x734*x735))>>x736);

	if (t13 != 5675LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x789 = -1;
	uint32_t x791 = UINT32_MAX;
	int16_t x792 = 0;
	int64_t t14 = -10673273737636LL;

	t14 = ((x789-(x790*x791))>>x792);

	if (t14 != 4294967294LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x837 = 543463141557LLU;
	uint16_t x839 = 13U;

	t15 = ((x837-(x838*x839))>>x840);

	if (t15 != 271731569745LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x973 = UINT64_MAX;
	static volatile uint64_t x974 = UINT64_MAX;
	uint64_t t16 = 1618LLU;

	t16 = ((x973-(x974*x975))>>x976);

	if (t16 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x989 = INT16_MIN;
	int8_t x991 = INT8_MAX;
	int16_t x992 = 12;

	t17 = ((x989-(x990*x991))>>x992);

	if (t17 != 4503599627370488LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x1031 = 38U;
	int32_t x1032 = 14;
	uint32_t t18 = 6145U;

	t18 = ((x1029-(x1030*x1031))>>x1032);

	if (t18 != 1U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1057 = 9;
	static uint16_t x1060 = 25U;

	t19 = ((x1057-(x1058*x1059))>>x1060);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x1081 = INT32_MIN;
	volatile uint64_t x1082 = UINT64_MAX;
	static int32_t x1083 = INT32_MAX;
	volatile uint64_t t20 = 11139872LLU;

	t20 = ((x1081-(x1082*x1083))>>x1084);

	if (t20 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1166 = 277;
	volatile uint64_t x1167 = 60LLU;
	uint8_t x1168 = 1U;
	uint64_t t21 = 2693805339107220LLU;

	t21 = ((x1165-(x1166*x1167))>>x1168);

	if (t21 != 2147475337LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x1177 = -1LL;
	uint64_t x1178 = UINT64_MAX;
	uint16_t x1180 = 16U;
	uint64_t t22 = 18LLU;

	t22 = ((x1177-(x1178*x1179))>>x1180);

	if (t22 != 49LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x1193 = 0;
	uint8_t x1194 = 3U;
	static int64_t x1195 = -49179LL;
	static int8_t x1196 = 0;

	t23 = ((x1193-(x1194*x1195))>>x1196);

	if (t23 != 147537LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x1246 = 727201172163048LLU;
	volatile uint32_t x1247 = UINT32_MAX;
	uint64_t t24 = 1500911LLU;

	t24 = ((x1245-(x1246*x1247))>>x1248);

	if (t24 != 2610757088582276337LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1329 = 354;
	int64_t x1330 = -1LL;
	int32_t x1331 = 99806;
	int8_t x1332 = 0;
	static int64_t t25 = -1657462968043188026LL;

	t25 = ((x1329-(x1330*x1331))>>x1332);

	if (t25 != 100160LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x1429 = INT16_MAX;
	uint64_t x1431 = 5262345039LLU;
	volatile uint8_t x1432 = 28U;

	t26 = ((x1429-(x1430*x1431))>>x1432);

	if (t26 != 4018LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1489 = -1;
	uint8_t x1490 = UINT8_MAX;
	uint32_t t27 = 970U;

	t27 = ((x1489-(x1490*x1491))>>x1492);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x1517 = -1LL;
	int8_t x1519 = -1;

	t28 = ((x1517-(x1518*x1519))>>x1520);

	if (t28 != 2199023255551LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1529 = UINT64_MAX;
	static int8_t x1532 = 42;

	t29 = ((x1529-(x1530*x1531))>>x1532);

	if (t29 != 4194303LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x1537 = 1;
	volatile uint64_t x1539 = 1314LLU;
	uint8_t x1540 = 50U;
	uint64_t t30 = 309732LLU;

	t30 = ((x1537-(x1538*x1539))>>x1540);

	if (t30 != 16383LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1581 = -53034105;
	int16_t x1582 = -1;
	uint16_t x1584 = 2U;
	volatile uint32_t t31 = 490764U;

	t31 = ((x1581-(x1582*x1583))>>x1584);

	if (t31 != 1060498375U) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1616 = 0U;
	int32_t t32 = -8244273;

	t32 = ((x1613-(x1614*x1615))>>x1616);

	if (t32 != 1457) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x1709 = 31U;
	static int64_t x1710 = 53LL;
	int8_t x1712 = 0;
	volatile int64_t t33 = -60LL;

	t33 = ((x1709-(x1710*x1711))>>x1712);

	if (t33 != 402LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x1778 = UINT64_MAX;
	uint64_t t34 = 1619338589387094102LLU;

	t34 = ((x1777-(x1778*x1779))>>x1780);

	if (t34 != 311LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1821 = INT32_MAX;
	int64_t x1822 = INT64_MAX;
	volatile uint64_t x1823 = UINT64_MAX;
	int8_t x1824 = 5;
	uint64_t t35 = 1292449133925LLU;

	t35 = ((x1821-(x1822*x1823))>>x1824);

	if (t35 != 288230376218820607LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1865 = 1;
	uint32_t x1867 = 162871712U;
	volatile uint8_t x1868 = 3U;
	uint64_t t36 = 3878395LLU;

	t36 = ((x1865-(x1866*x1867))>>x1868);

	if (t36 != 20358964LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x1873 = 3292894U;
	volatile int64_t x1875 = -1LL;
	static uint16_t x1876 = 2U;
	volatile int64_t t37 = 178675LL;

	t37 = ((x1873-(x1874*x1875))>>x1876);

	if (t37 != 823227LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x1917 = 137U;
	int64_t x1918 = INT64_MIN;
	int32_t x1920 = 17;
	uint64_t t38 = 116307597535271LLU;

	t38 = ((x1917-(x1918*x1919))>>x1920);

	if (t38 != 70368744177664LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x1957 = 112463LLU;
	uint8_t x1958 = 15U;
	static int32_t x1959 = -51;
	uint8_t x1960 = 14U;
	static volatile uint64_t t39 = 407957LLU;

	t39 = ((x1957-(x1958*x1959))>>x1960);

	if (t39 != 6LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1962 = -1;
	volatile uint32_t x1963 = UINT32_MAX;
	static volatile uint16_t x1964 = 18U;
	uint32_t t40 = 29666U;

	t40 = ((x1961-(x1962*x1963))>>x1964);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2026 = INT32_MAX;
	volatile uint8_t x2027 = 1U;
	static uint8_t x2028 = 11U;
	volatile uint32_t t41 = 13U;

	t41 = ((x2025-(x2026*x2027))>>x2028);

	if (t41 != 1048576U) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x2037 = 2585U;
	volatile uint32_t x2038 = 2U;
	static int32_t x2039 = 3815;
	int8_t x2040 = 1;
	volatile uint32_t t42 = 228187374U;

	t42 = ((x2037-(x2038*x2039))>>x2040);

	if (t42 != 2147481125U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x2041 = UINT32_MAX;
	uint8_t x2042 = UINT8_MAX;
	volatile uint64_t x2043 = 347812310254LLU;
	static int8_t x2044 = 2;
	volatile uint64_t t43 = 7883757611880LLU;

	t43 = ((x2041-(x2042*x2043))>>x2044);

	if (t43 != 4611663846466351035LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x2070 = -497;
	uint32_t x2071 = 125U;
	uint64_t x2072 = 1LLU;
	uint32_t t44 = 24518U;

	t44 = ((x2069-(x2070*x2071))>>x2072);

	if (t44 != 46120U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x2081 = 868LL;
	uint64_t x2082 = UINT64_MAX;
	static int32_t x2083 = INT32_MIN;
	uint8_t x2084 = 4U;
	volatile uint64_t t45 = 156254800977890LLU;

	t45 = ((x2081-(x2082*x2083))>>x2084);

	if (t45 != 1152921504472629302LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x2195 = -57019046LL;
	uint16_t x2196 = 36U;
	volatile int64_t t46 = 6733294101043475LL;

	t46 = ((x2193-(x2194*x2195))>>x2196);

	if (t46 != 150LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x2233 = INT32_MIN;
	int32_t x2234 = -22257;
	uint32_t x2235 = 9797U;
	int8_t x2236 = 1;

	t47 = ((x2233-(x2234*x2235))>>x2236);

	if (t47 != 1182767738U) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x2273 = -10894;
	uint64_t x2275 = 2681734LLU;
	uint8_t x2276 = 0U;
	volatile uint64_t t48 = 32429266787LLU;

	t48 = ((x2273-(x2274*x2275))>>x2276);

	if (t48 != 18446744073693450318LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x2329 = -1356;
	int16_t x2330 = INT16_MAX;
	volatile uint64_t x2331 = UINT64_MAX;
	volatile uint64_t t49 = 7353517765453LLU;

	t49 = ((x2329-(x2330*x2331))>>x2332);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x2333 = 8U;
	static volatile uint32_t t50 = 17U;

	t50 = ((x2333-(x2334*x2335))>>x2336);

	if (t50 != 33554431U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x2429 = -17;
	int8_t x2431 = INT8_MIN;
	volatile uint32_t x2432 = 0U;

	t51 = ((x2429-(x2430*x2431))>>x2432);

	if (t51 != 70511) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x2457 = INT32_MAX;
	volatile int8_t x2459 = INT8_MIN;
	int8_t x2460 = 0;
	static volatile int32_t t52 = 12098524;

	t52 = ((x2457-(x2458*x2459))>>x2460);

	if (t52 != 2143289343) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x2545 = INT32_MAX;
	uint32_t x2546 = 105118U;
	static uint64_t x2547 = 367239672LLU;
	volatile int8_t x2548 = 48;
	uint64_t t53 = 732211684009824990LLU;

	t53 = ((x2545-(x2546*x2547))>>x2548);

	if (t53 != 65535LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x2549 = 453551753658LL;
	uint16_t x2551 = 3871U;
	uint32_t x2552 = 2U;
	int64_t t54 = -3977LL;

	t54 = ((x2549-(x2550*x2551))>>x2552);

	if (t54 != 113387939382LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x2637 = 85U;
	uint16_t x2638 = 2U;
	volatile int8_t x2639 = INT8_MIN;
	uint8_t x2640 = 4U;
	volatile int32_t t55 = -842054920;

	t55 = ((x2637-(x2638*x2639))>>x2640);

	if (t55 != 21) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x2653 = 20U;
	int32_t x2655 = -21948;
	int8_t x2656 = 1;
	static uint64_t t56 = 307169686LLU;

	t56 = ((x2653-(x2654*x2655))>>x2656);

	if (t56 != 4301612283529374772LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x2705 = 208U;
	int8_t x2706 = 57;
	volatile uint32_t x2707 = 394068U;
	static volatile uint8_t x2708 = 23U;

	t57 = ((x2705-(x2706*x2707))>>x2708);

	if (t57 != 509U) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int32_t x2713 = -407;
	int64_t x2715 = -1523418675730352LL;
	int8_t x2716 = 15;
	int64_t t58 = -107114249392500942LL;

	t58 = ((x2713-(x2714*x2715))>>x2716);

	if (t58 != 11855217355689LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x2745 = INT64_MAX;
	volatile int8_t x2746 = -1;
	uint8_t x2748 = 0U;
	int64_t t59 = 11534390860LL;

	t59 = ((x2745-(x2746*x2747))>>x2748);

	if (t59 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x2769 = 3744916U;
	uint32_t x2770 = 29110333U;
	uint64_t x2771 = 287074LLU;
	uint8_t x2772 = 38U;
	volatile uint64_t t60 = 281136808200151LLU;

	t60 = ((x2769-(x2770*x2771))>>x2772);

	if (t60 != 67108833LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x2849 = 4332;
	int8_t x2851 = 16;
	volatile int32_t t61 = 165363;

	t61 = ((x2849-(x2850*x2851))>>x2852);

	if (t61 != 67) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x2897 = UINT32_MAX;
	int16_t x2898 = 11994;
	int16_t x2899 = 5901;
	volatile uint32_t t62 = 5442U;

	t62 = ((x2897-(x2898*x2899))>>x2900);

	if (t62 != 2112095350U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x2901 = INT16_MIN;
	static volatile uint64_t x2902 = UINT64_MAX;
	int8_t x2904 = 1;
	uint64_t t63 = 2649456LLU;

	t63 = ((x2901-(x2902*x2903))>>x2904);

	if (t63 != 4611686018427371520LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x2929 = 223440745;
	static volatile uint8_t x2930 = 73U;
	static int8_t x2931 = INT8_MIN;
	uint8_t x2932 = 11U;
	int32_t t64 = -191;

	t64 = ((x2929-(x2930*x2931))>>x2932);

	if (t64 != 109106) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint32_t x2946 = 104073824U;
	uint32_t x2947 = UINT32_MAX;

	t65 = ((x2945-(x2946*x2947))>>x2948);

	if (t65 != 104073828U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x2953 = -1LL;
	static volatile int32_t x2954 = -658415;
	volatile uint64_t x2955 = UINT64_MAX;
	uint8_t x2956 = 1U;
	volatile uint64_t t66 = 13750133631LLU;

	t66 = ((x2953-(x2954*x2955))>>x2956);

	if (t66 != 9223372036854446600LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x2985 = 63282794U;
	uint16_t x2986 = 1185U;
	int32_t x2987 = -1;
	volatile uint16_t x2988 = 13U;
	uint32_t t67 = 52454078U;

	t67 = ((x2985-(x2986*x2987))>>x2988);

	if (t67 != 7725U) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x2989 = UINT64_MAX;
	uint64_t t68 = 120381500678765333LLU;

	t68 = ((x2989-(x2990*x2991))>>x2992);

	if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x3093 = -1;
	uint32_t x3094 = 6061417U;
	int8_t x3095 = -1;
	uint32_t x3096 = 7U;
	volatile uint32_t t69 = 149U;

	t69 = ((x3093-(x3094*x3095))>>x3096);

	if (t69 != 47354U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x3169 = INT8_MAX;
	uint64_t x3170 = 52488535228LLU;
	volatile int16_t x3171 = 1;
	int64_t x3172 = 1LL;
	uint64_t t70 = 25857288837374LLU;

	t70 = ((x3169-(x3170*x3171))>>x3172);

	if (t70 != 9223372010610508257LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x3265 = 32U;
	volatile uint16_t x3266 = UINT16_MAX;
	uint64_t x3267 = UINT64_MAX;
	static uint16_t x3268 = 0U;
	uint64_t t71 = 261643119LLU;

	t71 = ((x3265-(x3266*x3267))>>x3268);

	if (t71 != 65567LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x3361 = UINT64_MAX;
	uint32_t x3362 = 7U;
	static int8_t x3363 = -4;
	uint64_t t72 = 8300005LLU;

	t72 = ((x3361-(x3362*x3363))>>x3364);

	if (t72 != 18446744069414584347LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x3493 = 97U;
	int8_t x3494 = -1;
	uint8_t x3496 = 4U;

	t73 = ((x3493-(x3494*x3495))>>x3496);

	if (t73 != 7) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x3581 = INT8_MAX;
	int8_t x3582 = 0;
	int16_t x3583 = INT16_MAX;
	static uint8_t x3584 = 24U;
	static int32_t t74 = -1;

	t74 = ((x3581-(x3582*x3583))>>x3584);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x3629 = 450631;
	int32_t x3630 = 66301944;
	volatile int8_t x3632 = 1;
	volatile int32_t t75 = 1;

	t75 = ((x3629-(x3630*x3631))>>x3632);

	if (t75 != 33376287) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x3633 = -361356;
	int32_t x3635 = INT32_MAX;
	uint8_t x3636 = 7U;
	volatile uint32_t t76 = 10U;

	t76 = ((x3633-(x3634*x3635))>>x3636);

	if (t76 != 16774393U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x3673 = -4;
	static int8_t x3674 = -19;
	uint16_t x3675 = UINT16_MAX;
	uint32_t x3676 = 7U;

	t77 = ((x3673-(x3674*x3675))>>x3676);

	if (t77 != 9727) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x3749 = UINT8_MAX;
	uint32_t x3751 = UINT32_MAX;
	uint64_t x3752 = 9LLU;
	volatile uint32_t t78 = 15245U;

	t78 = ((x3749-(x3750*x3751))>>x3752);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x3937 = -1;
	static int8_t x3938 = -1;
	volatile uint64_t x3939 = 188883LLU;
	int8_t x3940 = 10;

	t79 = ((x3937-(x3938*x3939))>>x3940);

	if (t79 != 184LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x3981 = 15006;
	int8_t x3982 = 2;
	static int32_t x3984 = 0;
	uint64_t t80 = 10518010162LLU;

	t80 = ((x3981-(x3982*x3983))>>x3984);

	if (t80 != 18446744073709514334LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x4005 = UINT64_MAX;
	static volatile uint16_t x4006 = UINT16_MAX;
	volatile int16_t x4007 = INT16_MIN;
	int16_t x4008 = 1;
	static volatile uint64_t t81 = 57003684483LLU;

	t81 = ((x4005-(x4006*x4007))>>x4008);

	if (t81 != 1073725439LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x4013 = INT64_MAX;
	int32_t x4015 = 14279058;
	int32_t x4016 = 10;
	volatile int64_t t82 = -8589063749467LL;

	t82 = ((x4013-(x4014*x4015))>>x4016);

	if (t82 != 9007199250560632LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x4089 = 14U;
	static int16_t x4090 = -1;
	static uint64_t x4091 = 34510LLU;
	static volatile uint8_t x4092 = 23U;
	static uint64_t t83 = 195121514814705736LLU;

	t83 = ((x4089-(x4090*x4091))>>x4092);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x4101 = INT16_MIN;
	static int8_t x4102 = INT8_MAX;
	volatile uint32_t x4103 = 1U;
	uint8_t x4104 = 0U;
	uint32_t t84 = 145404000U;

	t84 = ((x4101-(x4102*x4103))>>x4104);

	if (t84 != 4294934401U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x4121 = INT16_MAX;
	volatile int8_t x4124 = 28;

	t85 = ((x4121-(x4122*x4123))>>x4124);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x4125 = 905501993033LLU;
	static volatile uint8_t x4126 = UINT8_MAX;
	volatile int16_t x4127 = 3;
	uint16_t x4128 = 15U;
	volatile uint64_t t86 = 216314361LLU;

	t86 = ((x4125-(x4126*x4127))>>x4128);

	if (t86 != 27633727LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint64_t x4210 = UINT64_MAX;
	int8_t x4211 = INT8_MIN;
	volatile int16_t x4212 = 0;

	t87 = ((x4209-(x4210*x4211))>>x4212);

	if (t87 != 9223372036854775679LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x4234 = INT8_MAX;
	uint16_t x4236 = 0U;

	t88 = ((x4233-(x4234*x4235))>>x4236);

	if (t88 != 34257462) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x4269 = -722479377;
	uint64_t x4271 = 58LLU;
	int8_t x4272 = 1;
	volatile uint64_t t89 = 81471841698LLU;

	t89 = ((x4269-(x4270*x4271))>>x4272);

	if (t89 != 9223372036492585876LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x4305 = 477226236;
	static volatile int64_t x4307 = 1348981LL;
	uint8_t x4308 = 17U;
	volatile int64_t t90 = -69985603LL;

	t90 = ((x4305-(x4306*x4307))>>x4308);

	if (t90 != 1016LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x4321 = 67;
	uint32_t x4323 = UINT32_MAX;
	int8_t x4324 = 0;
	volatile uint32_t t91 = 764578U;

	t91 = ((x4321-(x4322*x4323))>>x4324);

	if (t91 != 160U) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x4445 = -1;
	uint16_t x4446 = 22966U;
	int16_t x4447 = -1;
	static uint8_t x4448 = 6U;
	volatile int32_t t92 = -226;

	t92 = ((x4445-(x4446*x4447))>>x4448);

	if (t92 != 358) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x4449 = -7004;
	int32_t x4450 = INT32_MAX;
	uint32_t x4451 = 58436978U;
	uint32_t t93 = 481473980U;

	t93 = ((x4449-(x4450*x4451))>>x4452);

	if (t93 != 57060U) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x4509 = UINT64_MAX;
	volatile int16_t x4510 = -1;
	uint64_t x4511 = UINT64_MAX;
	static volatile uint64_t t94 = 244464LLU;

	t94 = ((x4509-(x4510*x4511))>>x4512);

	if (t94 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x4517 = 0;
	int32_t x4518 = INT32_MIN;
	uint64_t x4519 = 217829963443633LLU;
	uint16_t x4520 = 7U;
	static uint64_t t95 = 81LLU;

	t95 = ((x4517-(x4518*x4519))>>x4520);

	if (t95 != 107408738381463552LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x4577 = 12LLU;
	int64_t x4579 = INT64_MAX;
	uint16_t x4580 = 52U;
	uint64_t t96 = 590LLU;

	t96 = ((x4577-(x4578*x4579))>>x4580);

	if (t96 != 2048LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x4581 = INT16_MIN;
	uint8_t x4582 = 102U;
	volatile uint64_t x4583 = 29LLU;
	uint8_t x4584 = 4U;
	volatile uint64_t t97 = 227402551058915369LLU;

	t97 = ((x4581-(x4582*x4583))>>x4584);

	if (t97 != 1152921504606844743LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x4622 = INT16_MIN;
	uint16_t x4623 = 71U;
	uint8_t x4624 = 26U;
	static int32_t t98 = 59913089;

	t98 = ((x4621-(x4622*x4623))>>x4624);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x4674 = -5;
	volatile uint16_t x4675 = UINT16_MAX;
	volatile int32_t t99 = 2;

	t99 = ((x4673-(x4674*x4675))>>x4676);

	if (t99 != 81920) { NG(); } else { ; }
	
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


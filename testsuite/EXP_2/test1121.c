#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = 4648734;
uint16_t x240 = UINT16_MAX;
uint32_t t3 = 31023U;
static int16_t x258 = INT16_MAX;
int16_t x260 = INT16_MIN;
volatile int8_t x266 = 2;
uint32_t t6 = 308U;
int16_t x494 = INT16_MAX;
int64_t x624 = INT64_MAX;
static volatile int64_t t10 = -7523LL;
uint16_t x907 = 5U;
volatile int32_t t13 = -796550489;
int8_t x911 = 1;
int32_t t14 = 105688914;
uint16_t x998 = UINT16_MAX;
uint16_t x1066 = 3307U;
int32_t t18 = -13311;
static volatile int8_t x1070 = 0;
static int8_t x1071 = 0;
int32_t x1078 = 38849077;
uint8_t x1079 = 30U;
volatile int32_t t20 = INT32_MAX;
uint16_t x1149 = 32730U;
int32_t t22 = -121678941;
static uint64_t x1169 = 395LLU;
uint8_t x1311 = 3U;
volatile uint8_t x1405 = UINT8_MAX;
uint32_t x1473 = UINT32_MAX;
uint32_t x1474 = 2106854498U;
int64_t x1476 = -1LL;
volatile int8_t x1528 = INT8_MIN;
uint8_t x1529 = UINT8_MAX;
int32_t x1532 = -935479219;
volatile int32_t t31 = -5330917;
int64_t x1601 = -1LL;
volatile int16_t x1604 = INT16_MIN;
volatile int32_t t34 = 40340;
volatile uint32_t x1616 = 24106251U;
volatile int32_t t37 = 696373114;
uint8_t x1783 = 25U;
int64_t x1984 = -1LL;
int32_t t47 = -39992146;
static int32_t x2241 = -1;
uint64_t x2250 = UINT64_MAX;
uint8_t x2251 = 7U;
volatile int16_t x2311 = 0;
uint16_t x2312 = 1U;
static volatile int64_t t51 = INT64_MIN;
int16_t x2367 = 3;
volatile int64_t x2368 = INT64_MIN;
int64_t t52 = INT64_MIN;
uint8_t x2495 = 2U;
int32_t t54 = 0;
static int16_t x2728 = INT16_MIN;
uint32_t x2810 = UINT32_MAX;
uint16_t x2812 = 2U;
int16_t x2931 = 0;
uint32_t x2961 = 14047U;
uint8_t x2964 = 2U;
volatile int32_t t60 = -4016733;
uint32_t x2966 = 449U;
int8_t x2968 = -27;
int32_t t61 = -723;
uint64_t x3000 = 1296527LLU;
volatile int32_t t66 = -10792;
volatile int32_t t67 = 961830772;
uint8_t x3364 = UINT8_MAX;
int32_t t68 = 24105907;
static volatile uint16_t x3369 = 3U;
uint32_t x3371 = 13U;
int8_t x3416 = INT8_MIN;
static int32_t t70 = -291555624;
uint8_t x3486 = 2U;
static uint8_t x3527 = 2U;
int64_t t73 = 89912502193176LL;
uint64_t x3551 = 1LLU;
volatile uint32_t t75 = UINT32_MAX;
int8_t x3765 = INT8_MAX;
uint32_t x3766 = 2580U;
uint8_t x3767 = 0U;
uint16_t x3768 = 2U;
int16_t x3774 = INT16_MAX;
volatile uint8_t x3775 = 2U;
volatile int64_t x3873 = INT64_MIN;
int64_t x3874 = 15972712168140927LL;
int16_t x3977 = INT16_MIN;
uint8_t x3992 = 56U;
static int8_t x4075 = 4;
int8_t x4137 = INT8_MIN;
volatile int32_t t86 = INT32_MAX;
int16_t x4231 = 16;
uint32_t x4306 = UINT32_MAX;
uint64_t x4307 = 12LLU;
int32_t t90 = 3156;
static int32_t x4521 = -31812;
int16_t x4524 = -1;
int32_t t92 = 29688557;
int32_t x4552 = 985;
uint64_t x4628 = 5945445LLU;
volatile uint64_t t94 = 245764813LLU;
static uint16_t x4716 = UINT16_MAX;
int16_t x4733 = 44;
uint8_t x4736 = 1U;
uint8_t x4759 = 0U;


void f0(void) {
	uint16_t x33 = 1U;
	int64_t x34 = 10LL;
	volatile uint8_t x35 = 10U;
	volatile int64_t x36 = -1LL;
	volatile int64_t t0 = 44193470LL;

	t0 = ((x33<(x34>>x35))*x36);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int8_t x77 = INT8_MAX;
	int8_t x78 = INT8_MAX;
	uint16_t x79 = 12U;
	int32_t x80 = INT32_MIN;

	t1 = ((x77<(x78>>x79))*x80);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x237 = -1LL;
	int16_t x238 = 1169;
	int64_t x239 = 0LL;
	volatile int32_t t2 = 949641;

	t2 = ((x237<(x238>>x239))*x240);

	if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x253 = UINT32_MAX;
	uint64_t x254 = UINT64_MAX;
	volatile uint16_t x255 = 7U;
	uint32_t x256 = 191146U;

	t3 = ((x253<(x254>>x255))*x256);

	if (t3 != 191146U) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x257 = UINT16_MAX;
	uint32_t x259 = 19U;
	volatile int32_t t4 = 106274334;

	t4 = ((x257<(x258>>x259))*x260);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x265 = INT32_MIN;
	int8_t x267 = 12;
	volatile uint64_t x268 = 2417783334857960LLU;
	static uint64_t t5 = 70719556LLU;

	t5 = ((x265<(x266>>x267))*x268);

	if (t5 != 2417783334857960LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x277 = INT8_MIN;
	volatile uint64_t x278 = 54252618558LLU;
	uint8_t x279 = 11U;
	uint32_t x280 = 304669318U;

	t6 = ((x277<(x278>>x279))*x280);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x281 = 81U;
	static volatile uint8_t x282 = UINT8_MAX;
	uint8_t x283 = 1U;
	int64_t x284 = INT64_MIN;
	int64_t t7 = INT64_MIN;

	t7 = ((x281<(x282>>x283))*x284);

	if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x373 = INT64_MIN;
	int8_t x374 = INT8_MAX;
	int8_t x375 = 1;
	uint16_t x376 = UINT16_MAX;
	volatile int32_t t8 = -22;

	t8 = ((x373<(x374>>x375))*x376);

	if (t8 != 65535) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x493 = INT32_MIN;
	uint8_t x495 = 1U;
	uint8_t x496 = 5U;
	volatile int32_t t9 = -2;

	t9 = ((x493<(x494>>x495))*x496);

	if (t9 != 5) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x621 = -30;
	uint32_t x622 = 5U;
	int8_t x623 = 31;

	t10 = ((x621<(x622>>x623))*x624);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x721 = INT32_MAX;
	uint16_t x722 = 82U;
	volatile int8_t x723 = 3;
	volatile uint64_t x724 = 1329LLU;
	volatile uint64_t t11 = 430LLU;

	t11 = ((x721<(x722>>x723))*x724);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x809 = INT16_MIN;
	static int32_t x810 = INT32_MAX;
	static volatile int8_t x811 = 4;
	int8_t x812 = -1;
	volatile int32_t t12 = -88974;

	t12 = ((x809<(x810>>x811))*x812);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x905 = INT16_MIN;
	static volatile uint32_t x906 = 171979U;
	int32_t x908 = INT32_MIN;

	t13 = ((x905<(x906>>x907))*x908);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x909 = 9453U;
	volatile uint32_t x910 = UINT32_MAX;
	int8_t x912 = -1;

	t14 = ((x909<(x910>>x911))*x912);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x917 = 10U;
	int32_t x918 = INT32_MAX;
	int8_t x919 = 0;
	int8_t x920 = INT8_MIN;
	int32_t t15 = 473860;

	t15 = ((x917<(x918>>x919))*x920);

	if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x957 = INT32_MAX;
	uint16_t x958 = 26458U;
	static uint16_t x959 = 19U;
	uint64_t x960 = 135602518656LLU;
	volatile uint64_t t16 = 6LLU;

	t16 = ((x957<(x958>>x959))*x960);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x997 = 47U;
	static uint16_t x999 = 9U;
	uint32_t x1000 = UINT32_MAX;
	static uint32_t t17 = UINT32_MAX;

	t17 = ((x997<(x998>>x999))*x1000);

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1065 = INT64_MAX;
	uint32_t x1067 = 13U;
	static int32_t x1068 = -86155360;

	t18 = ((x1065<(x1066>>x1067))*x1068);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x1069 = INT32_MIN;
	volatile int8_t x1072 = -10;
	volatile int32_t t19 = 209;

	t19 = ((x1069<(x1070>>x1071))*x1072);

	if (t19 != -10) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x1077 = INT32_MIN;
	static int32_t x1080 = INT32_MAX;

	t20 = ((x1077<(x1078>>x1079))*x1080);

	if (t20 != INT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x1097 = 14U;
	uint32_t x1098 = 228146U;
	volatile uint8_t x1099 = 1U;
	int64_t x1100 = INT64_MIN;
	int64_t t21 = INT64_MIN;

	t21 = ((x1097<(x1098>>x1099))*x1100);

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x1150 = 17419769U;
	volatile int32_t x1151 = 4;
	int16_t x1152 = -15;

	t22 = ((x1149<(x1150>>x1151))*x1152);

	if (t22 != -15) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x1170 = 128617U;
	int8_t x1171 = 0;
	uint8_t x1172 = 55U;
	volatile int32_t t23 = -2169752;

	t23 = ((x1169<(x1170>>x1171))*x1172);

	if (t23 != 55) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1201 = -17;
	static uint8_t x1202 = 3U;
	uint32_t x1203 = 1U;
	int64_t x1204 = 10273504090LL;
	int64_t t24 = -381140609LL;

	t24 = ((x1201<(x1202>>x1203))*x1204);

	if (t24 != 10273504090LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1309 = -1LL;
	volatile uint8_t x1310 = 8U;
	int16_t x1312 = -1;
	volatile int32_t t25 = 582530837;

	t25 = ((x1309<(x1310>>x1311))*x1312);

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1357 = -3686;
	uint64_t x1358 = 14564420LLU;
	uint16_t x1359 = 2U;
	static int16_t x1360 = INT16_MIN;
	volatile int32_t t26 = 9925;

	t26 = ((x1357<(x1358>>x1359))*x1360);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x1406 = UINT8_MAX;
	static int16_t x1407 = 14;
	uint8_t x1408 = 12U;
	int32_t t27 = 2;

	t27 = ((x1405<(x1406>>x1407))*x1408);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x1445 = -8;
	uint64_t x1446 = 1461321194761LLU;
	uint8_t x1447 = 1U;
	int64_t x1448 = INT64_MIN;
	int64_t t28 = -22642LL;

	t28 = ((x1445<(x1446>>x1447))*x1448);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x1475 = 5U;
	volatile int64_t t29 = 425LL;

	t29 = ((x1473<(x1474>>x1475))*x1476);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1525 = -1LL;
	int8_t x1526 = 1;
	int32_t x1527 = 26;
	volatile int32_t t30 = 23231;

	t30 = ((x1525<(x1526>>x1527))*x1528);

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1530 = UINT32_MAX;
	uint32_t x1531 = 6U;

	t31 = ((x1529<(x1530>>x1531))*x1532);

	if (t31 != -935479219) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1565 = UINT16_MAX;
	uint32_t x1566 = 3651U;
	uint8_t x1567 = 7U;
	static int16_t x1568 = INT16_MAX;
	volatile int32_t t32 = 67;

	t32 = ((x1565<(x1566>>x1567))*x1568);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x1573 = INT8_MIN;
	uint64_t x1574 = UINT64_MAX;
	volatile int16_t x1575 = 38;
	int16_t x1576 = 1651;
	int32_t t33 = -58263753;

	t33 = ((x1573<(x1574>>x1575))*x1576);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1602 = 12;
	static uint8_t x1603 = 28U;

	t34 = ((x1601<(x1602>>x1603))*x1604);

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1613 = INT16_MIN;
	volatile uint16_t x1614 = 30753U;
	uint8_t x1615 = 3U;
	uint32_t t35 = 37045U;

	t35 = ((x1613<(x1614>>x1615))*x1616);

	if (t35 != 24106251U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1669 = 44;
	volatile int8_t x1670 = 0;
	static uint8_t x1671 = 7U;
	int64_t x1672 = 241LL;
	static int64_t t36 = -1368191937033891LL;

	t36 = ((x1669<(x1670>>x1671))*x1672);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x1705 = 13U;
	static volatile int8_t x1706 = INT8_MAX;
	volatile uint16_t x1707 = 14U;
	static uint16_t x1708 = 8U;

	t37 = ((x1705<(x1706>>x1707))*x1708);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x1765 = 77LLU;
	volatile int64_t x1766 = 4LL;
	int8_t x1767 = 1;
	int8_t x1768 = -19;
	volatile int32_t t38 = 860407184;

	t38 = ((x1765<(x1766>>x1767))*x1768);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x1781 = INT16_MIN;
	uint64_t x1782 = 2797046081LLU;
	uint64_t x1784 = 311071LLU;
	uint64_t t39 = 230LLU;

	t39 = ((x1781<(x1782>>x1783))*x1784);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x1873 = -3063LL;
	uint16_t x1874 = 632U;
	uint32_t x1875 = 1U;
	static volatile int64_t x1876 = INT64_MIN;
	int64_t t40 = INT64_MIN;

	t40 = ((x1873<(x1874>>x1875))*x1876);

	if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x1913 = 1U;
	uint8_t x1914 = UINT8_MAX;
	int64_t x1915 = 0LL;
	static uint16_t x1916 = UINT16_MAX;
	volatile int32_t t41 = -1484803;

	t41 = ((x1913<(x1914>>x1915))*x1916);

	if (t41 != 65535) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x1981 = UINT16_MAX;
	static uint64_t x1982 = UINT64_MAX;
	uint16_t x1983 = 61U;
	volatile int64_t t42 = 130295LL;

	t42 = ((x1981<(x1982>>x1983))*x1984);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x1989 = UINT16_MAX;
	int32_t x1990 = INT32_MAX;
	int8_t x1991 = 10;
	int16_t x1992 = INT16_MAX;
	volatile int32_t t43 = 6832677;

	t43 = ((x1989<(x1990>>x1991))*x1992);

	if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x2093 = 3097;
	static int64_t x2094 = INT64_MAX;
	int8_t x2095 = 0;
	volatile int8_t x2096 = 0;
	int32_t t44 = 1;

	t44 = ((x2093<(x2094>>x2095))*x2096);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x2117 = -1LL;
	volatile uint64_t x2118 = 506787187694788290LLU;
	volatile uint32_t x2119 = 0U;
	static int8_t x2120 = INT8_MIN;
	int32_t t45 = -9926144;

	t45 = ((x2117<(x2118>>x2119))*x2120);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x2145 = 0U;
	volatile uint16_t x2146 = 17646U;
	static uint8_t x2147 = 27U;
	int8_t x2148 = 12;
	static volatile int32_t t46 = -15517608;

	t46 = ((x2145<(x2146>>x2147))*x2148);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x2233 = 1418138868997255810LLU;
	static uint32_t x2234 = 5561071U;
	uint32_t x2235 = 11U;
	uint16_t x2236 = UINT16_MAX;

	t47 = ((x2233<(x2234>>x2235))*x2236);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x2242 = 30;
	int64_t x2243 = 1LL;
	int8_t x2244 = INT8_MIN;
	int32_t t48 = 87797481;

	t48 = ((x2241<(x2242>>x2243))*x2244);

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x2249 = 2990663388LLU;
	uint16_t x2252 = 14U;
	int32_t t49 = -88739;

	t49 = ((x2249<(x2250>>x2251))*x2252);

	if (t49 != 14) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x2309 = INT16_MAX;
	int64_t x2310 = 1LL;
	int32_t t50 = 337714;

	t50 = ((x2309<(x2310>>x2311))*x2312);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x2361 = INT32_MAX;
	int64_t x2362 = INT64_MAX;
	uint8_t x2363 = 16U;
	int64_t x2364 = INT64_MIN;

	t51 = ((x2361<(x2362>>x2363))*x2364);

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x2365 = -6;
	uint8_t x2366 = 63U;

	t52 = ((x2365<(x2366>>x2367))*x2368);

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int16_t x2425 = INT16_MAX;
	uint16_t x2426 = UINT16_MAX;
	static int16_t x2427 = 0;
	int64_t x2428 = INT64_MAX;
	int64_t t53 = INT64_MAX;

	t53 = ((x2425<(x2426>>x2427))*x2428);

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x2493 = 108;
	volatile int64_t x2494 = 6941098956LL;
	volatile int16_t x2496 = -1;

	t54 = ((x2493<(x2494>>x2495))*x2496);

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x2573 = 61;
	int32_t x2574 = INT32_MAX;
	static uint8_t x2575 = 1U;
	uint8_t x2576 = UINT8_MAX;
	int32_t t55 = -1506079;

	t55 = ((x2573<(x2574>>x2575))*x2576);

	if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x2693 = INT32_MIN;
	uint16_t x2694 = UINT16_MAX;
	int32_t x2695 = 3;
	volatile uint8_t x2696 = UINT8_MAX;
	volatile int32_t t56 = -205031174;

	t56 = ((x2693<(x2694>>x2695))*x2696);

	if (t56 != 255) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x2725 = INT16_MAX;
	uint8_t x2726 = UINT8_MAX;
	int32_t x2727 = 1;
	int32_t t57 = -4;

	t57 = ((x2725<(x2726>>x2727))*x2728);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x2809 = -1;
	volatile int16_t x2811 = 6;
	volatile int32_t t58 = -28395144;

	t58 = ((x2809<(x2810>>x2811))*x2812);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x2929 = -1;
	int32_t x2930 = INT32_MAX;
	volatile uint32_t x2932 = 3994397U;
	uint32_t t59 = 22U;

	t59 = ((x2929<(x2930>>x2931))*x2932);

	if (t59 != 3994397U) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x2962 = 1034044771U;
	uint16_t x2963 = 17U;

	t60 = ((x2961<(x2962>>x2963))*x2964);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x2965 = INT16_MIN;
	int8_t x2967 = 20;

	t61 = ((x2965<(x2966>>x2967))*x2968);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x2997 = UINT16_MAX;
	uint8_t x2998 = 9U;
	volatile uint8_t x2999 = 8U;
	uint64_t t62 = 325908468989LLU;

	t62 = ((x2997<(x2998>>x2999))*x3000);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x3089 = UINT32_MAX;
	uint16_t x3090 = 0U;
	volatile uint64_t x3091 = 1LLU;
	int16_t x3092 = -303;
	volatile int32_t t63 = 95838810;

	t63 = ((x3089<(x3090>>x3091))*x3092);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint64_t x3145 = UINT64_MAX;
	static uint16_t x3146 = 6672U;
	volatile uint16_t x3147 = 0U;
	uint64_t x3148 = UINT64_MAX;
	uint64_t t64 = 766742002957424185LLU;

	t64 = ((x3145<(x3146>>x3147))*x3148);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x3181 = INT32_MAX;
	uint64_t x3182 = 6697159401359LLU;
	uint32_t x3183 = 35U;
	uint32_t x3184 = 1U;
	volatile uint32_t t65 = 1301380U;

	t65 = ((x3181<(x3182>>x3183))*x3184);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x3301 = INT16_MIN;
	uint8_t x3302 = 4U;
	uint8_t x3303 = 1U;
	static int32_t x3304 = 7576;

	t66 = ((x3301<(x3302>>x3303))*x3304);

	if (t66 != 7576) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x3325 = 0U;
	static int64_t x3326 = INT64_MAX;
	int64_t x3327 = 24LL;
	int8_t x3328 = -1;

	t67 = ((x3325<(x3326>>x3327))*x3328);

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x3361 = -1LL;
	static int32_t x3362 = INT32_MAX;
	uint8_t x3363 = 1U;

	t68 = ((x3361<(x3362>>x3363))*x3364);

	if (t68 != 255) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x3370 = 30;
	static uint16_t x3372 = 109U;
	volatile int32_t t69 = 62467685;

	t69 = ((x3369<(x3370>>x3371))*x3372);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x3413 = INT32_MAX;
	static uint16_t x3414 = 3840U;
	volatile int64_t x3415 = 1LL;

	t70 = ((x3413<(x3414>>x3415))*x3416);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x3485 = UINT32_MAX;
	uint8_t x3487 = 0U;
	uint32_t x3488 = 108U;
	static uint32_t t71 = 246402U;

	t71 = ((x3485<(x3486>>x3487))*x3488);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x3517 = INT32_MIN;
	uint32_t x3518 = 843U;
	int16_t x3519 = 1;
	int16_t x3520 = 0;
	int32_t t72 = -434;

	t72 = ((x3517<(x3518>>x3519))*x3520);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x3525 = 1U;
	int8_t x3526 = INT8_MAX;
	int64_t x3528 = -1LL;

	t73 = ((x3525<(x3526>>x3527))*x3528);

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x3549 = 0U;
	uint32_t x3550 = 49U;
	uint64_t x3552 = UINT64_MAX;
	uint64_t t74 = UINT64_MAX;

	t74 = ((x3549<(x3550>>x3551))*x3552);

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x3689 = 1U;
	uint64_t x3690 = UINT64_MAX;
	int16_t x3691 = 7;
	uint32_t x3692 = UINT32_MAX;

	t75 = ((x3689<(x3690>>x3691))*x3692);

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t t76 = -83;

	t76 = ((x3765<(x3766>>x3767))*x3768);

	if (t76 != 2) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x3773 = -1LL;
	int16_t x3776 = INT16_MAX;
	volatile int32_t t77 = -1;

	t77 = ((x3773<(x3774>>x3775))*x3776);

	if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x3821 = -7542;
	static int64_t x3822 = 311970LL;
	static int16_t x3823 = 59;
	uint16_t x3824 = 0U;
	volatile int32_t t78 = 432384;

	t78 = ((x3821<(x3822>>x3823))*x3824);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x3875 = 0;
	int32_t x3876 = INT32_MIN;
	volatile int32_t t79 = INT32_MIN;

	t79 = ((x3873<(x3874>>x3875))*x3876);

	if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x3978 = 122310877688670LL;
	uint8_t x3979 = 28U;
	uint64_t x3980 = 676932633550LLU;
	static volatile uint64_t t80 = 394173516155LLU;

	t80 = ((x3977<(x3978>>x3979))*x3980);

	if (t80 != 676932633550LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x3989 = INT32_MIN;
	uint8_t x3990 = UINT8_MAX;
	int16_t x3991 = 1;
	int32_t t81 = 68403028;

	t81 = ((x3989<(x3990>>x3991))*x3992);

	if (t81 != 56) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x4021 = UINT32_MAX;
	int16_t x4022 = INT16_MAX;
	uint8_t x4023 = 0U;
	int32_t x4024 = 49;
	int32_t t82 = 638067215;

	t82 = ((x4021<(x4022>>x4023))*x4024);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x4057 = INT16_MAX;
	int64_t x4058 = 1LL;
	volatile int8_t x4059 = 12;
	int32_t x4060 = -12657763;
	int32_t t83 = -36;

	t83 = ((x4057<(x4058>>x4059))*x4060);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x4073 = -1;
	uint8_t x4074 = 6U;
	static int8_t x4076 = INT8_MIN;
	static volatile int32_t t84 = 11601209;

	t84 = ((x4073<(x4074>>x4075))*x4076);

	if (t84 != -128) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x4077 = INT16_MAX;
	int8_t x4078 = 1;
	uint8_t x4079 = 12U;
	int64_t x4080 = -1LL;
	volatile int64_t t85 = -75923821LL;

	t85 = ((x4077<(x4078>>x4079))*x4080);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x4138 = 0U;
	static uint64_t x4139 = 0LLU;
	int32_t x4140 = INT32_MAX;

	t86 = ((x4137<(x4138>>x4139))*x4140);

	if (t86 != INT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x4229 = INT8_MIN;
	static uint8_t x4230 = UINT8_MAX;
	int64_t x4232 = INT64_MIN;
	volatile int64_t t87 = INT64_MIN;

	t87 = ((x4229<(x4230>>x4231))*x4232);

	if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x4293 = 136;
	volatile uint16_t x4294 = UINT16_MAX;
	volatile uint8_t x4295 = 0U;
	int8_t x4296 = INT8_MIN;
	volatile int32_t t88 = 5;

	t88 = ((x4293<(x4294>>x4295))*x4296);

	if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x4305 = -1;
	uint8_t x4308 = UINT8_MAX;
	int32_t t89 = 2785;

	t89 = ((x4305<(x4306>>x4307))*x4308);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x4389 = 49;
	uint64_t x4390 = 1910586317LLU;
	uint8_t x4391 = 3U;
	uint8_t x4392 = 30U;

	t90 = ((x4389<(x4390>>x4391))*x4392);

	if (t90 != 30) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x4405 = UINT8_MAX;
	uint16_t x4406 = 15U;
	static uint8_t x4407 = 2U;
	static volatile int64_t x4408 = -1086558LL;
	static volatile int64_t t91 = -3408260229311264LL;

	t91 = ((x4405<(x4406>>x4407))*x4408);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x4522 = 134;
	static uint8_t x4523 = 12U;

	t92 = ((x4521<(x4522>>x4523))*x4524);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x4549 = INT64_MAX;
	volatile uint8_t x4550 = 1U;
	int8_t x4551 = 24;
	volatile int32_t t93 = 932895;

	t93 = ((x4549<(x4550>>x4551))*x4552);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x4625 = 21U;
	uint16_t x4626 = 53U;
	uint16_t x4627 = 3U;

	t94 = ((x4625<(x4626>>x4627))*x4628);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x4629 = INT8_MIN;
	int16_t x4630 = 52;
	volatile uint8_t x4631 = 0U;
	static volatile int8_t x4632 = INT8_MIN;
	volatile int32_t t95 = 177358;

	t95 = ((x4629<(x4630>>x4631))*x4632);

	if (t95 != -128) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x4713 = INT64_MAX;
	uint64_t x4714 = 54976475124933527LLU;
	int8_t x4715 = 2;
	int32_t t96 = 96180795;

	t96 = ((x4713<(x4714>>x4715))*x4716);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x4734 = UINT32_MAX;
	uint8_t x4735 = 0U;
	static int32_t t97 = 215854522;

	t97 = ((x4733<(x4734>>x4735))*x4736);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x4757 = UINT16_MAX;
	int16_t x4758 = 13199;
	int16_t x4760 = -1;
	volatile int32_t t98 = 101789207;

	t98 = ((x4757<(x4758>>x4759))*x4760);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x4829 = INT16_MIN;
	uint32_t x4830 = 2U;
	uint8_t x4831 = 9U;
	volatile int8_t x4832 = INT8_MIN;
	volatile int32_t t99 = 194231;

	t99 = ((x4829<(x4830>>x4831))*x4832);

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


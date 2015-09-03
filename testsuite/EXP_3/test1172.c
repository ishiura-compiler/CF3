#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x66 = 1U;
static uint64_t x67 = 1673507987LLU;
int64_t x206 = INT64_MAX;
volatile int32_t x208 = 1;
static int8_t x255 = 0;
uint16_t x256 = 0U;
volatile int8_t x302 = INT8_MIN;
static uint64_t x494 = 2032730935LLU;
volatile int16_t x495 = 269;
static volatile uint64_t t7 = 29712139LLU;
int32_t x509 = -1;
uint8_t x512 = 1U;
volatile int64_t t8 = -22436380LL;
static int16_t x541 = INT16_MAX;
int32_t x649 = 15;
volatile uint16_t x865 = 0U;
int16_t x867 = 3185;
uint64_t x910 = 1869609749705917LLU;
int32_t x912 = 0;
uint64_t t18 = 731295081375239LLU;
static int32_t x1061 = -1;
static uint32_t x1064 = 0U;
uint64_t t21 = 154582044896LLU;
int32_t x1087 = INT32_MAX;
static uint8_t x1102 = 50U;
static volatile int64_t t23 = -4260111LL;
int16_t x1195 = INT16_MAX;
uint32_t x1196 = 4U;
volatile uint16_t x1311 = 31144U;
static volatile int32_t t26 = -19;
uint16_t x1314 = 1525U;
int64_t x1315 = INT64_MAX;
int64_t t28 = -29LL;
volatile int32_t x1400 = 1;
int32_t x1634 = 97;
uint16_t x1635 = UINT16_MAX;
int16_t x1774 = -1;
int8_t x1875 = INT8_MAX;
int64_t t35 = -1LL;
uint32_t x1925 = 110835673U;
volatile uint16_t x1928 = 0U;
uint32_t x1951 = 116431U;
static int64_t t38 = -27LL;
uint8_t x2060 = 2U;
uint64_t x2429 = UINT64_MAX;
int64_t x2430 = 7729039689106811LL;
int16_t x2473 = -1;
uint64_t t45 = 7093320961278186LLU;
int16_t x2499 = INT16_MAX;
uint8_t x2553 = 1U;
uint16_t x2696 = 10U;
volatile uint64_t t49 = 720106464LLU;
uint64_t x2712 = 1LLU;
static volatile int64_t t50 = -178151441011LL;
volatile uint64_t x2845 = 262834811LLU;
int16_t x2846 = INT16_MAX;
static int32_t x2971 = 2306684;
int32_t t53 = -1524917;
volatile uint16_t x3146 = 1868U;
static int64_t t55 = 2026757883LL;
int32_t t57 = 45774847;
volatile uint32_t x3270 = 1572320U;
int64_t t58 = -10592475654LL;
volatile uint8_t x3296 = 0U;
int32_t t60 = -877541358;
uint8_t x3447 = 21U;
int16_t x3477 = INT16_MIN;
static uint8_t x3478 = 14U;
static uint8_t x3479 = UINT8_MAX;
volatile uint8_t x3480 = 6U;
int32_t t62 = -135605;
uint16_t x3515 = UINT16_MAX;
uint16_t x3538 = UINT16_MAX;
uint32_t t65 = 348505U;
static volatile uint32_t x3562 = UINT32_MAX;
uint16_t x3606 = UINT16_MAX;
static uint16_t x3608 = 7U;
uint16_t x3761 = 6U;
volatile uint64_t t70 = 8455973542204979LLU;
uint32_t x3905 = 17551U;
static int8_t x3906 = INT8_MIN;
uint32_t x3907 = 26320U;
uint16_t x3908 = 1U;
static int32_t x4137 = INT32_MIN;
uint32_t x4139 = 4020103U;
static volatile int32_t t75 = -238598168;
uint16_t x4370 = UINT16_MAX;
uint32_t t77 = 98424U;
int64_t x4421 = INT64_MIN;
volatile int8_t x4424 = 3;
uint32_t x4625 = UINT32_MAX;
volatile uint32_t t81 = 110907U;
int64_t x4765 = INT64_MIN;
volatile uint16_t x4816 = 1U;
int32_t x4890 = 118;
static uint16_t x4958 = UINT16_MAX;
static uint16_t x4959 = UINT16_MAX;
static uint64_t x4992 = 1LLU;
int64_t t86 = 1685451792825LL;
static volatile uint32_t t87 = 3646073U;
volatile int8_t x5013 = 6;
int8_t x5015 = INT8_MAX;
volatile uint8_t x5016 = 4U;
uint64_t x5187 = UINT64_MAX;
int16_t x5194 = INT16_MAX;
uint32_t t90 = 3899157U;
int8_t x5239 = INT8_MAX;
uint32_t x5327 = UINT32_MAX;
uint16_t x5342 = 1128U;
uint32_t t96 = 36U;


void f0(void) {
	static uint32_t x65 = 46U;
	int16_t x68 = 0;
	volatile uint64_t t0 = 257LLU;

	t0 = ((x65^x66)-(x67>>x68));

	if (t0 != 18446744072036043676LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x205 = INT16_MIN;
	uint8_t x207 = UINT8_MAX;
	volatile int64_t t1 = 11953654881LL;

	t1 = ((x205^x206)-(x207>>x208));

	if (t1 != -9223372036854743168LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x249 = 121932919U;
	int8_t x250 = INT8_MIN;
	int64_t x251 = INT64_MAX;
	uint8_t x252 = 21U;
	int64_t t2 = 291LL;

	t2 = ((x249^x250)-(x251>>x252));

	if (t2 != -4393873476616LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x253 = -1;
	uint32_t x254 = 4U;
	uint32_t t3 = 130626302U;

	t3 = ((x253^x254)-(x255>>x256));

	if (t3 != 4294967291U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x301 = 1848275580LLU;
	static uint64_t x303 = 373427003421635486LLU;
	volatile int8_t x304 = 1;
	volatile uint64_t t4 = 1LLU;

	t4 = ((x301^x302)-(x303>>x304));

	if (t4 != 18260030570150458413LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x381 = INT8_MIN;
	volatile uint64_t x382 = UINT64_MAX;
	static int16_t x383 = INT16_MAX;
	static uint16_t x384 = 3U;
	uint64_t t5 = 4138079802617LLU;

	t5 = ((x381^x382)-(x383>>x384));

	if (t5 != 18446744073709547648LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x465 = 15904891809LLU;
	int64_t x466 = INT64_MIN;
	static int8_t x467 = INT8_MAX;
	uint8_t x468 = 0U;
	uint64_t t6 = 6003970762686463LLU;

	t6 = ((x465^x466)-(x467>>x468));

	if (t6 != 9223372052759667490LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x493 = INT16_MIN;
	int8_t x496 = 0;

	t7 = ((x493^x494)-(x495>>x496));

	if (t7 != 18446744071676789290LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x510 = INT64_MIN;
	uint16_t x511 = 3189U;

	t8 = ((x509^x510)-(x511>>x512));

	if (t8 != 9223372036854774213LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x521 = 1;
	int8_t x522 = -59;
	int32_t x523 = 139;
	uint8_t x524 = 7U;
	volatile int32_t t9 = 195397;

	t9 = ((x521^x522)-(x523>>x524));

	if (t9 != -61) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x542 = -1;
	int8_t x543 = 6;
	static int32_t x544 = 1;
	volatile int32_t t10 = 12;

	t10 = ((x541^x542)-(x543>>x544));

	if (t10 != -32771) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x605 = 33LLU;
	uint64_t x606 = 37353688578011LLU;
	int64_t x607 = INT64_MAX;
	uint16_t x608 = 9U;
	volatile uint64_t t11 = 13LLU;

	t11 = ((x605^x606)-(x607>>x608));

	if (t11 != 18428767028888647675LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x645 = INT8_MAX;
	int8_t x646 = -1;
	static int8_t x647 = 1;
	static uint8_t x648 = 1U;
	static volatile int32_t t12 = -2;

	t12 = ((x645^x646)-(x647>>x648));

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x650 = 3;
	int8_t x651 = 5;
	volatile uint16_t x652 = 0U;
	volatile int32_t t13 = 68242;

	t13 = ((x649^x650)-(x651>>x652));

	if (t13 != 7) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x677 = UINT8_MAX;
	int64_t x678 = INT64_MIN;
	uint8_t x679 = 5U;
	uint32_t x680 = 6U;
	volatile int64_t t14 = 0LL;

	t14 = ((x677^x678)-(x679>>x680));

	if (t14 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x761 = INT32_MIN;
	int16_t x762 = INT16_MIN;
	int16_t x763 = 375;
	uint8_t x764 = 1U;
	int32_t t15 = -2;

	t15 = ((x761^x762)-(x763>>x764));

	if (t15 != 2147450693) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x821 = -1LL;
	volatile uint8_t x822 = 12U;
	int64_t x823 = INT64_MAX;
	uint8_t x824 = 23U;
	volatile int64_t t16 = 211587LL;

	t16 = ((x821^x822)-(x823>>x824));

	if (t16 != -1099511627788LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x866 = -1;
	int8_t x868 = 6;
	volatile int32_t t17 = 131796864;

	t17 = ((x865^x866)-(x867>>x868));

	if (t17 != -50) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x909 = 15U;
	uint8_t x911 = UINT8_MAX;

	t18 = ((x909^x910)-(x911>>x912));

	if (t18 != 1869609749705651LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x1041 = -939LL;
	static int16_t x1042 = 3554;
	volatile uint8_t x1043 = UINT8_MAX;
	uint16_t x1044 = 1U;
	static int64_t t19 = 86014LL;

	t19 = ((x1041^x1042)-(x1043>>x1044));

	if (t19 != -3784LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1062 = INT16_MAX;
	uint8_t x1063 = 75U;
	int32_t t20 = -299297;

	t20 = ((x1061^x1062)-(x1063>>x1064));

	if (t20 != -32843) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1077 = INT32_MIN;
	int16_t x1078 = -1;
	uint64_t x1079 = UINT64_MAX;
	static uint8_t x1080 = 1U;

	t21 = ((x1077^x1078)-(x1079>>x1080));

	if (t21 != 9223372039002259456LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x1085 = UINT16_MAX;
	int32_t x1086 = INT32_MIN;
	int8_t x1088 = 19;
	volatile int32_t t22 = 0;

	t22 = ((x1085^x1086)-(x1087>>x1088));

	if (t22 != -2147422208) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1101 = -245998574967LL;
	static volatile int32_t x1103 = INT32_MAX;
	static uint16_t x1104 = 15U;

	t23 = ((x1101^x1102)-(x1103>>x1104));

	if (t23 != -245998640452LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1125 = 18;
	int64_t x1126 = INT64_MIN;
	volatile int8_t x1127 = 5;
	static int64_t x1128 = 0LL;
	static int64_t t24 = 1234052527746LL;

	t24 = ((x1125^x1126)-(x1127>>x1128));

	if (t24 != -9223372036854775795LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1193 = -9539LL;
	int16_t x1194 = 12974;
	volatile int64_t t25 = 16505439LL;

	t25 = ((x1193^x1194)-(x1195>>x1196));

	if (t25 != -8172LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1309 = 0U;
	static int8_t x1310 = INT8_MAX;
	uint64_t x1312 = 1LLU;

	t26 = ((x1309^x1310)-(x1311>>x1312));

	if (t26 != -15445) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x1313 = 1;
	int64_t x1316 = 3LL;
	static int64_t t27 = -3686615751459LL;

	t27 = ((x1313^x1314)-(x1315>>x1316));

	if (t27 != -1152921504606845451LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x1373 = -193LL;
	static volatile int8_t x1374 = INT8_MAX;
	uint8_t x1375 = UINT8_MAX;
	uint8_t x1376 = 8U;

	t28 = ((x1373^x1374)-(x1375>>x1376));

	if (t28 != -192LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x1397 = 45U;
	int32_t x1398 = 23192;
	static int64_t x1399 = 403765024430811460LL;
	volatile int64_t t29 = 160010658086374LL;

	t29 = ((x1397^x1398)-(x1399>>x1400));

	if (t29 != -201882512215382509LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1457 = -12;
	int16_t x1458 = INT16_MIN;
	int32_t x1459 = 14;
	uint64_t x1460 = 3LLU;
	volatile int32_t t30 = -109788;

	t30 = ((x1457^x1458)-(x1459>>x1460));

	if (t30 != 32755) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1597 = 9U;
	static int64_t x1598 = -15LL;
	uint16_t x1599 = 1U;
	volatile int32_t x1600 = 3;
	volatile int64_t t31 = -4115377136032LL;

	t31 = ((x1597^x1598)-(x1599>>x1600));

	if (t31 != -8LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x1633 = INT64_MIN;
	uint8_t x1636 = 26U;
	int64_t t32 = -18323588LL;

	t32 = ((x1633^x1634)-(x1635>>x1636));

	if (t32 != -9223372036854775711LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1773 = 320674085LLU;
	int16_t x1775 = INT16_MAX;
	uint16_t x1776 = 10U;
	uint64_t t33 = 759508872449LLU;

	t33 = ((x1773^x1774)-(x1775>>x1776));

	if (t33 != 18446744073388877499LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1873 = INT16_MAX;
	volatile int32_t x1874 = INT32_MIN;
	static uint8_t x1876 = 1U;
	volatile int32_t t34 = 225484;

	t34 = ((x1873^x1874)-(x1875>>x1876));

	if (t34 != -2147450944) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1881 = UINT8_MAX;
	volatile int8_t x1882 = INT8_MIN;
	int64_t x1883 = INT64_MAX;
	uint32_t x1884 = 5U;

	t35 = ((x1881^x1882)-(x1883>>x1884));

	if (t35 != -288230376151711872LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x1926 = -1LL;
	volatile uint32_t x1927 = 1705U;
	volatile int64_t t36 = -763562040189992844LL;

	t36 = ((x1925^x1926)-(x1927>>x1928));

	if (t36 != -110837379LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1945 = 0;
	int32_t x1946 = INT32_MAX;
	uint32_t x1947 = UINT32_MAX;
	uint8_t x1948 = 6U;
	static volatile uint32_t t37 = 49427U;

	t37 = ((x1945^x1946)-(x1947>>x1948));

	if (t37 != 2080374784U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1949 = -3155193065166LL;
	uint8_t x1950 = 55U;
	volatile uint8_t x1952 = 0U;

	t38 = ((x1949^x1950)-(x1951>>x1952));

	if (t38 != -3155193181642LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x2057 = INT32_MIN;
	int64_t x2058 = 110406LL;
	volatile uint64_t x2059 = 0LLU;
	static uint64_t t39 = 178456925283196LLU;

	t39 = ((x2057^x2058)-(x2059>>x2060));

	if (t39 != 18446744071562178374LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int32_t x2209 = -1;
	uint16_t x2210 = 4U;
	volatile uint8_t x2211 = 96U;
	uint8_t x2212 = 0U;
	int32_t t40 = -12712;

	t40 = ((x2209^x2210)-(x2211>>x2212));

	if (t40 != -101) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2289 = -99536422;
	int16_t x2290 = 9272;
	int8_t x2291 = 4;
	uint16_t x2292 = 1U;
	int32_t t41 = 41384279;

	t41 = ((x2289^x2290)-(x2291>>x2292));

	if (t41 != -99543584) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x2329 = INT16_MIN;
	int32_t x2330 = 922;
	uint16_t x2331 = 1011U;
	uint16_t x2332 = 31U;
	int32_t t42 = -19626;

	t42 = ((x2329^x2330)-(x2331>>x2332));

	if (t42 != -31846) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2431 = INT64_MAX;
	static volatile int8_t x2432 = 8;
	static uint64_t t43 = 375809676735572LLU;

	t43 = ((x2429^x2430)-(x2431>>x2432));

	if (t43 != 18402986237001480837LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x2453 = 12U;
	int32_t x2454 = -1;
	uint8_t x2455 = 0U;
	uint8_t x2456 = 24U;
	int32_t t44 = -1;

	t44 = ((x2453^x2454)-(x2455>>x2456));

	if (t44 != -13) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x2474 = 131200899LLU;
	static volatile int8_t x2475 = INT8_MAX;
	uint64_t x2476 = 30LLU;

	t45 = ((x2473^x2474)-(x2475>>x2476));

	if (t45 != 18446744073578350716LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x2497 = -1;
	static int16_t x2498 = INT16_MAX;
	uint8_t x2500 = 15U;
	static int32_t t46 = 234;

	t46 = ((x2497^x2498)-(x2499>>x2500));

	if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x2549 = INT32_MIN;
	uint32_t x2550 = 16U;
	uint32_t x2551 = UINT32_MAX;
	uint16_t x2552 = 1U;
	uint32_t t47 = 457733U;

	t47 = ((x2549^x2550)-(x2551>>x2552));

	if (t47 != 17U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x2554 = INT8_MAX;
	uint32_t x2555 = 0U;
	static volatile uint8_t x2556 = 11U;
	static volatile uint32_t t48 = 15U;

	t48 = ((x2553^x2554)-(x2555>>x2556));

	if (t48 != 126U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x2693 = INT16_MIN;
	uint64_t x2694 = 62000291526983628LLU;
	static int32_t x2695 = INT32_MAX;

	t49 = ((x2693^x2694)-(x2695>>x2696));

	if (t49 != 18384743782180470733LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x2709 = -1LL;
	uint16_t x2710 = 81U;
	uint32_t x2711 = 226U;

	t50 = ((x2709^x2710)-(x2711>>x2712));

	if (t50 != -195LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x2829 = INT32_MIN;
	static uint64_t x2830 = 462622497LLU;
	int16_t x2831 = 76;
	int8_t x2832 = 5;
	static volatile uint64_t t51 = 636356505836882LLU;

	t51 = ((x2829^x2830)-(x2831>>x2832));

	if (t51 != 18446744072024690463LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int64_t x2847 = 15004955LL;
	uint16_t x2848 = 31U;
	volatile uint64_t t52 = 118LLU;

	t52 = ((x2845^x2846)-(x2847>>x2848));

	if (t52 != 262862212LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x2969 = UINT8_MAX;
	int16_t x2970 = INT16_MIN;
	uint8_t x2972 = 0U;

	t53 = ((x2969^x2970)-(x2971>>x2972));

	if (t53 != -2339197) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x2977 = 4351322U;
	uint16_t x2978 = 6U;
	int8_t x2979 = INT8_MAX;
	volatile uint32_t x2980 = 13U;
	uint32_t t54 = 2144545605U;

	t54 = ((x2977^x2978)-(x2979>>x2980));

	if (t54 != 4351324U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x3145 = INT64_MAX;
	uint16_t x3147 = 96U;
	uint32_t x3148 = 3U;

	t55 = ((x3145^x3146)-(x3147>>x3148));

	if (t55 != 9223372036854773927LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x3185 = INT8_MIN;
	uint32_t x3186 = 1190558920U;
	volatile uint16_t x3187 = UINT16_MAX;
	int8_t x3188 = 1;
	static uint32_t t56 = 17266U;

	t56 = ((x3185^x3186)-(x3187>>x3188));

	if (t56 != 3104375625U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x3209 = -3474;
	volatile int16_t x3210 = INT16_MAX;
	int8_t x3211 = 0;
	static volatile uint8_t x3212 = 2U;

	t57 = ((x3209^x3210)-(x3211>>x3212));

	if (t57 != -29295) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int64_t x3269 = INT64_MIN;
	uint8_t x3271 = 3U;
	static volatile uint16_t x3272 = 26U;

	t58 = ((x3269^x3270)-(x3271>>x3272));

	if (t58 != -9223372036853203488LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x3277 = UINT8_MAX;
	static uint64_t x3278 = UINT64_MAX;
	static uint32_t x3279 = 174U;
	volatile uint16_t x3280 = 1U;
	volatile uint64_t t59 = 171LLU;

	t59 = ((x3277^x3278)-(x3279>>x3280));

	if (t59 != 18446744073709551273LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x3293 = UINT16_MAX;
	int8_t x3294 = INT8_MIN;
	int8_t x3295 = 14;

	t60 = ((x3293^x3294)-(x3295>>x3296));

	if (t60 != -65423) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x3445 = 5769374;
	uint64_t x3446 = 33310537794LLU;
	static uint8_t x3448 = 0U;
	uint64_t t61 = 651LLU;

	t61 = ((x3445^x3446)-(x3447>>x3448));

	if (t61 != 33305817287LLU) { NG(); } else { ; }
	
}

void f62(void) {


	t62 = ((x3477^x3478)-(x3479>>x3480));

	if (t62 != -32757) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x3513 = -2;
	uint64_t x3514 = 23411LLU;
	uint8_t x3516 = 1U;
	uint64_t t63 = 35278831305LLU;

	t63 = ((x3513^x3514)-(x3515>>x3516));

	if (t63 != 18446744073709495438LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x3533 = INT32_MIN;
	int16_t x3534 = INT16_MAX;
	static volatile uint64_t x3535 = 500733549LLU;
	uint8_t x3536 = 1U;
	volatile uint64_t t64 = 8305535151LLU;

	t64 = ((x3533^x3534)-(x3535>>x3536));

	if (t64 != 18446744071311733961LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x3537 = -77;
	volatile uint32_t x3539 = 130020288U;
	uint8_t x3540 = 0U;

	t65 = ((x3537^x3538)-(x3539>>x3540));

	if (t65 != 4164881548U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x3561 = -1;
	int16_t x3563 = 0;
	volatile int8_t x3564 = 1;
	volatile uint32_t t66 = 51772U;

	t66 = ((x3561^x3562)-(x3563>>x3564));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x3605 = 117LLU;
	uint32_t x3607 = 119762796U;
	volatile uint64_t t67 = 260723721861LLU;

	t67 = ((x3605^x3606)-(x3607>>x3608));

	if (t67 != 18446744073708681388LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x3757 = 7133;
	volatile int16_t x3758 = -1;
	volatile uint32_t x3759 = 3673105U;
	uint16_t x3760 = 6U;
	uint32_t t68 = 25614U;

	t68 = ((x3757^x3758)-(x3759>>x3760));

	if (t68 != 4294902770U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x3762 = UINT64_MAX;
	uint32_t x3763 = 1191985U;
	uint16_t x3764 = 11U;
	volatile uint64_t t69 = 2034635LLU;

	t69 = ((x3761^x3762)-(x3763>>x3764));

	if (t69 != 18446744073709551027LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x3845 = 81732LLU;
	int8_t x3846 = INT8_MIN;
	uint8_t x3847 = UINT8_MAX;
	uint8_t x3848 = 4U;

	t70 = ((x3845^x3846)-(x3847>>x3848));

	if (t70 != 18446744073709469877LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t t71 = 14U;

	t71 = ((x3905^x3906)-(x3907>>x3908));

	if (t71 != 4294936487U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x3961 = 54;
	static int32_t x3962 = INT32_MIN;
	static int16_t x3963 = 9;
	uint32_t x3964 = 0U;
	int32_t t72 = -45312618;

	t72 = ((x3961^x3962)-(x3963>>x3964));

	if (t72 != -2147483603) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x4138 = INT64_MAX;
	uint64_t x4140 = 19LLU;
	volatile int64_t t73 = 72554819976462182LL;

	t73 = ((x4137^x4138)-(x4139>>x4140));

	if (t73 != -9223372034707292168LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x4281 = -1;
	volatile int32_t x4282 = INT32_MIN;
	static int32_t x4283 = 2;
	uint8_t x4284 = 0U;
	int32_t t74 = 18271189;

	t74 = ((x4281^x4282)-(x4283>>x4284));

	if (t74 != 2147483645) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x4353 = INT16_MAX;
	volatile int8_t x4354 = -6;
	int32_t x4355 = 2868070;
	int32_t x4356 = 1;

	t75 = ((x4353^x4354)-(x4355>>x4356));

	if (t75 != -1466798) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x4369 = 25;
	volatile int16_t x4371 = 151;
	uint16_t x4372 = 0U;
	volatile int32_t t76 = 17746;

	t76 = ((x4369^x4370)-(x4371>>x4372));

	if (t76 != 65359) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x4401 = 3;
	volatile int32_t x4402 = INT32_MAX;
	uint32_t x4403 = 2908U;
	int16_t x4404 = 17;

	t77 = ((x4401^x4402)-(x4403>>x4404));

	if (t77 != 2147483644U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x4422 = 72LLU;
	uint8_t x4423 = UINT8_MAX;
	uint64_t t78 = 122559571LLU;

	t78 = ((x4421^x4422)-(x4423>>x4424));

	if (t78 != 9223372036854775849LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x4477 = INT16_MIN;
	static volatile int64_t x4478 = -11LL;
	uint32_t x4479 = 59727U;
	uint8_t x4480 = 1U;
	int64_t t79 = 4181027376986LL;

	t79 = ((x4477^x4478)-(x4479>>x4480));

	if (t79 != 2894LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x4513 = INT8_MIN;
	volatile int16_t x4514 = INT16_MAX;
	uint64_t x4515 = UINT64_MAX;
	int8_t x4516 = 3;
	static volatile uint64_t t80 = 1364LLU;

	t80 = ((x4513^x4514)-(x4515>>x4516));

	if (t80 != 16140901064495825024LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x4626 = -1;
	uint32_t x4627 = 291757252U;
	int8_t x4628 = 0;

	t81 = ((x4625^x4626)-(x4627>>x4628));

	if (t81 != 4003210044U) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x4766 = UINT64_MAX;
	static int8_t x4767 = 6;
	static uint8_t x4768 = 28U;
	uint64_t t82 = 626737795LLU;

	t82 = ((x4765^x4766)-(x4767>>x4768));

	if (t82 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x4813 = -1;
	uint16_t x4814 = 497U;
	uint16_t x4815 = 1860U;
	int32_t t83 = 3214101;

	t83 = ((x4813^x4814)-(x4815>>x4816));

	if (t83 != -1428) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x4889 = INT8_MIN;
	int64_t x4891 = INT64_MAX;
	volatile uint16_t x4892 = 18U;
	volatile int64_t t84 = -210130582942LL;

	t84 = ((x4889^x4890)-(x4891>>x4892));

	if (t84 != -35184372088841LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x4957 = INT16_MIN;
	static uint16_t x4960 = 2U;
	int32_t t85 = 87062313;

	t85 = ((x4957^x4958)-(x4959>>x4960));

	if (t85 != -49152) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x4989 = -1LL;
	int32_t x4990 = -1;
	volatile uint16_t x4991 = 96U;

	t86 = ((x4989^x4990)-(x4991>>x4992));

	if (t86 != -48LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x5001 = INT16_MAX;
	static uint32_t x5002 = 1U;
	uint32_t x5003 = UINT32_MAX;
	uint16_t x5004 = 9U;

	t87 = ((x5001^x5002)-(x5003>>x5004));

	if (t87 != 4286611455U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x5014 = 0;
	int32_t t88 = 26138;

	t88 = ((x5013^x5014)-(x5015>>x5016));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x5185 = -1;
	int64_t x5186 = INT64_MIN;
	int16_t x5188 = 0;
	uint64_t t89 = 28016575973251LLU;

	t89 = ((x5185^x5186)-(x5187>>x5188));

	if (t89 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x5193 = 6U;
	volatile uint32_t x5195 = 366U;
	static int8_t x5196 = 26;

	t90 = ((x5193^x5194)-(x5195>>x5196));

	if (t90 != 32761U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x5237 = INT16_MIN;
	int16_t x5238 = -1;
	int32_t x5240 = 12;
	int32_t t91 = 38294;

	t91 = ((x5237^x5238)-(x5239>>x5240));

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x5241 = INT32_MIN;
	int8_t x5242 = -7;
	volatile uint32_t x5243 = UINT32_MAX;
	uint32_t x5244 = 4U;
	uint32_t t92 = 20U;

	t92 = ((x5241^x5242)-(x5243>>x5244));

	if (t92 != 1879048186U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x5265 = -1344482037480LL;
	volatile uint8_t x5266 = UINT8_MAX;
	uint16_t x5267 = 472U;
	uint32_t x5268 = 3U;
	volatile int64_t t93 = -1LL;

	t93 = ((x5265^x5266)-(x5267>>x5268));

	if (t93 != -1344482037332LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x5273 = INT16_MAX;
	static int64_t x5274 = INT64_MAX;
	uint32_t x5275 = 799U;
	int16_t x5276 = 1;
	int64_t t94 = 5358018842LL;

	t94 = ((x5273^x5274)-(x5275>>x5276));

	if (t94 != 9223372036854742641LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x5325 = INT64_MIN;
	static int16_t x5326 = -251;
	int8_t x5328 = 25;
	volatile int64_t t95 = -23050609383LL;

	t95 = ((x5325^x5326)-(x5327>>x5328));

	if (t95 != 9223372036854775430LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x5341 = -5442;
	uint32_t x5343 = 68U;
	static uint8_t x5344 = 7U;

	t96 = ((x5341^x5342)-(x5343>>x5344));

	if (t96 != 4294962902U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x5553 = INT32_MIN;
	int8_t x5554 = INT8_MIN;
	volatile uint64_t x5555 = 1758481LLU;
	int8_t x5556 = 40;
	volatile uint64_t t97 = 16132990LLU;

	t97 = ((x5553^x5554)-(x5555>>x5556));

	if (t97 != 2147483520LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x5581 = UINT16_MAX;
	int8_t x5582 = INT8_MAX;
	volatile int8_t x5583 = INT8_MAX;
	int8_t x5584 = 12;
	volatile int32_t t98 = 321498;

	t98 = ((x5581^x5582)-(x5583>>x5584));

	if (t98 != 65408) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x5593 = -1;
	static int16_t x5594 = INT16_MIN;
	uint32_t x5595 = 66795836U;
	volatile uint16_t x5596 = 1U;
	volatile uint32_t t99 = 216132U;

	t99 = ((x5593^x5594)-(x5595>>x5596));

	if (t99 != 4261602145U) { NG(); } else { ; }
	
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


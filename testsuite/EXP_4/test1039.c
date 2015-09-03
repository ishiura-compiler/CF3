#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x60 = 54;
volatile uint32_t t3 = 0U;
uint32_t x117 = UINT32_MAX;
int64_t t4 = -790LL;
static volatile int16_t x277 = INT16_MIN;
uint64_t t6 = 17653237190197206LLU;
volatile int32_t x437 = INT32_MIN;
int32_t x439 = 6239;
int16_t x440 = 6;
volatile uint64_t x477 = 4998181375315159LLU;
uint16_t x480 = 3U;
int64_t x517 = INT64_MIN;
volatile int16_t x582 = INT16_MIN;
int32_t x713 = INT32_MAX;
int64_t x719 = 1LL;
int64_t x869 = -310LL;
uint64_t x870 = 19LLU;
volatile int16_t x985 = -1;
volatile uint8_t x986 = 1U;
volatile int32_t t17 = -9650240;
static int64_t x1092 = 1LL;
volatile uint32_t t19 = UINT32_MAX;
volatile uint64_t x1175 = 51LLU;
volatile uint64_t t22 = 163726670421LLU;
int8_t x1199 = INT8_MAX;
uint32_t x1283 = UINT32_MAX;
int64_t x1360 = 0LL;
uint32_t x1490 = UINT32_MAX;
static uint8_t x1492 = 13U;
uint8_t x1505 = 19U;
uint64_t x1602 = 192757503241996LLU;
volatile int64_t x1690 = -1LL;
int8_t x1836 = 3;
static int32_t x1886 = -1;
uint64_t t36 = 4659832108730LLU;
static int64_t x1957 = INT64_MIN;
uint8_t x2159 = 1U;
static uint16_t x2160 = 6U;
static uint64_t x2222 = 1270442687LLU;
volatile uint8_t x2223 = 3U;
uint32_t t42 = 95U;
int16_t x2281 = INT16_MIN;
int16_t x2283 = INT16_MAX;
static volatile uint32_t x2351 = UINT32_MAX;
int16_t x2352 = 7;
uint16_t x2383 = 98U;
static uint64_t x2479 = UINT64_MAX;
static volatile int32_t x2753 = INT32_MIN;
int8_t x2754 = 8;
uint32_t x2755 = 0U;
uint32_t t49 = 1U;
static uint8_t x2757 = UINT8_MAX;
uint64_t x2862 = UINT64_MAX;
volatile int64_t x2873 = -1LL;
int16_t x2875 = 22;
uint8_t x2876 = 0U;
int32_t x3077 = INT32_MIN;
int64_t x3183 = INT64_MAX;
uint8_t x3606 = 40U;
int16_t x3686 = 242;
int16_t x3687 = INT16_MAX;
static int8_t x3688 = 0;
int32_t x3702 = INT32_MAX;
volatile int32_t x3703 = INT32_MAX;
uint32_t t62 = 1116589U;
int32_t x3794 = INT32_MAX;
int16_t x3857 = INT16_MIN;
uint64_t x3860 = 6LLU;
int32_t x3961 = INT32_MAX;
int8_t x3962 = INT8_MIN;
int16_t x4341 = -1;
uint32_t x4343 = 33U;
volatile uint16_t x4510 = 2103U;
uint16_t x4511 = 3895U;
volatile int32_t x4512 = 0;
volatile uint64_t t71 = 91364LLU;
uint64_t x4551 = UINT64_MAX;
uint16_t x4588 = 20U;
volatile int8_t x4594 = INT8_MIN;
int8_t x4600 = 42;
volatile uint64_t t75 = UINT64_MAX;
uint8_t x4662 = 6U;
int32_t x4741 = INT32_MAX;
int8_t x4743 = 26;
volatile int64_t t79 = -2812865328236LL;
uint8_t x4769 = UINT8_MAX;
uint16_t x4771 = UINT16_MAX;
uint32_t x4814 = 69U;
uint16_t x4818 = 7U;
volatile uint16_t x4819 = 1U;
int8_t x4856 = 9;
static int16_t x4877 = -16092;
int8_t x4889 = 22;
static uint32_t x4890 = 724475109U;
int16_t x4941 = -1;
int32_t t88 = 14;
int64_t t89 = -146275354LL;
static uint32_t x5060 = 24U;
int32_t x5073 = INT32_MIN;
uint64_t t92 = 68779158649347LLU;
static volatile uint32_t x5123 = 23527U;
uint8_t x5124 = 0U;
int16_t x5247 = INT16_MAX;
int32_t x5282 = INT32_MAX;
static uint16_t x5380 = 1U;
int16_t x5441 = INT16_MIN;
uint64_t x5447 = UINT64_MAX;


void f0(void) {
	int8_t x13 = INT8_MIN;
	volatile int32_t x14 = INT32_MIN;
	uint8_t x15 = UINT8_MAX;
	uint64_t x16 = 31LLU;
	volatile int32_t t0 = -26846015;

	t0 = (x13|(x14-(x15>>x16)));

	if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int8_t x37 = -1;
	uint16_t x38 = 0U;
	static uint16_t x39 = 1U;
	int16_t x40 = 2;
	volatile int32_t t1 = 84;

	t1 = (x37|(x38-(x39>>x40)));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x57 = -13;
	volatile int64_t x58 = INT64_MIN;
	volatile uint64_t x59 = 6420LLU;
	uint64_t t2 = 3504471544695598LLU;

	t2 = (x57|(x58-(x59>>x60)));

	if (t2 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x109 = 823U;
	int8_t x110 = INT8_MIN;
	uint32_t x111 = 3U;
	int32_t x112 = 3;

	t3 = (x109|(x110-(x111>>x112)));

	if (t3 != 4294967223U) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x118 = -1LL;
	uint32_t x119 = 3005U;
	uint64_t x120 = 1LLU;

	t4 = (x117|(x118-(x119>>x120)));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x129 = INT64_MAX;
	int32_t x130 = -1;
	int16_t x131 = INT16_MAX;
	int16_t x132 = 1;
	static volatile int64_t t5 = 21244436590644124LL;

	t5 = (x129|(x130-(x131>>x132)));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x278 = INT32_MIN;
	static volatile uint64_t x279 = 14156044LLU;
	uint8_t x280 = 0U;

	t6 = (x277|(x278-(x279>>x280)));

	if (t6 != 18446744073709551348LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x438 = 13593U;
	static uint32_t t7 = 3850U;

	t7 = (x437|(x438-(x439>>x440)));

	if (t7 != 2147497144U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x478 = INT16_MIN;
	uint16_t x479 = 774U;
	volatile uint64_t t8 = 144899926091LLU;

	t8 = (x477|(x478-(x479>>x480)));

	if (t8 != 18446744073709518839LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x518 = -1;
	uint16_t x519 = 0U;
	static int8_t x520 = 0;
	volatile int64_t t9 = -114LL;

	t9 = (x517|(x518-(x519>>x520)));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x581 = 7519U;
	static volatile uint16_t x583 = UINT16_MAX;
	int8_t x584 = 0;
	static uint32_t t10 = 26862U;

	t10 = (x581|(x582-(x583>>x584)));

	if (t10 != 4294876511U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x601 = 1449U;
	int16_t x602 = INT16_MIN;
	volatile int16_t x603 = 1;
	volatile int32_t x604 = 1;
	int32_t t11 = -1943;

	t11 = (x601|(x602-(x603>>x604)));

	if (t11 != -31319) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x714 = 14U;
	volatile int8_t x715 = INT8_MAX;
	uint64_t x716 = 2LLU;
	volatile int32_t t12 = -13422;

	t12 = (x713|(x714-(x715>>x716)));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x717 = -1;
	int8_t x718 = INT8_MIN;
	uint64_t x720 = 49LLU;
	int64_t t13 = -245993027085582202LL;

	t13 = (x717|(x718-(x719>>x720)));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x789 = 79U;
	int64_t x790 = 53157LL;
	uint64_t x791 = UINT64_MAX;
	int32_t x792 = 1;
	uint64_t t14 = 3602032730111625171LLU;

	t14 = (x789|(x790-(x791>>x792)));

	if (t14 != 9223372036854829039LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x871 = 47U;
	int16_t x872 = 8;
	volatile uint64_t t15 = 445LLU;

	t15 = (x869|(x870-(x871>>x872)));

	if (t15 != 18446744073709551323LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x981 = UINT8_MAX;
	int16_t x982 = INT16_MIN;
	static uint8_t x983 = UINT8_MAX;
	uint64_t x984 = 6LLU;
	static int32_t t16 = -59658159;

	t16 = (x981|(x982-(x983>>x984)));

	if (t16 != -32769) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x987 = INT16_MAX;
	uint16_t x988 = 1U;

	t17 = (x985|(x986-(x987>>x988)));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1049 = INT64_MIN;
	static int32_t x1050 = -1;
	uint64_t x1051 = UINT64_MAX;
	static uint16_t x1052 = 3U;
	uint64_t t18 = 2LLU;

	t18 = (x1049|(x1050-(x1051>>x1052)));

	if (t18 != 16140901064495857664LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x1089 = UINT32_MAX;
	static int8_t x1090 = -1;
	uint16_t x1091 = UINT16_MAX;

	t19 = (x1089|(x1090-(x1091>>x1092)));

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1113 = 527;
	int64_t x1114 = INT64_MAX;
	uint32_t x1115 = UINT32_MAX;
	static volatile int8_t x1116 = 0;
	volatile int64_t t20 = -77859575492722983LL;

	t20 = (x1113|(x1114-(x1115>>x1116)));

	if (t20 != 9223372032559809039LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x1157 = -18;
	volatile int16_t x1158 = INT16_MIN;
	int16_t x1159 = INT16_MAX;
	uint32_t x1160 = 29U;
	volatile int32_t t21 = 44567;

	t21 = (x1157|(x1158-(x1159>>x1160)));

	if (t21 != -18) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1173 = INT32_MAX;
	int64_t x1174 = 18477LL;
	uint8_t x1176 = 0U;

	t22 = (x1173|(x1174-(x1175>>x1176)));

	if (t22 != 2147483647LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1197 = -47;
	uint16_t x1198 = 9U;
	static uint8_t x1200 = 3U;
	volatile int32_t t23 = -86;

	t23 = (x1197|(x1198-(x1199>>x1200)));

	if (t23 != -5) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1281 = -1;
	static volatile uint32_t x1282 = 11U;
	volatile uint64_t x1284 = 7LLU;
	uint32_t t24 = UINT32_MAX;

	t24 = (x1281|(x1282-(x1283>>x1284)));

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x1357 = 1264U;
	static int64_t x1358 = -1LL;
	uint32_t x1359 = 1779U;
	volatile int64_t t25 = -757LL;

	t25 = (x1357|(x1358-(x1359>>x1360)));

	if (t25 != -516LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1393 = 6991161291906LL;
	int64_t x1394 = INT64_MAX;
	volatile uint64_t x1395 = 14409341469LLU;
	static volatile int8_t x1396 = 3;
	uint64_t t26 = 263445030059LLU;

	t26 = (x1393|(x1394-(x1395>>x1396)));

	if (t26 != 9223372036144856254LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1465 = INT8_MIN;
	static int8_t x1466 = -11;
	int32_t x1467 = INT32_MAX;
	uint32_t x1468 = 27U;
	volatile int32_t t27 = 2;

	t27 = (x1465|(x1466-(x1467>>x1468)));

	if (t27 != -26) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x1489 = 1965649206U;
	int16_t x1491 = INT16_MAX;
	uint32_t t28 = 27U;

	t28 = (x1489|(x1490-(x1491>>x1492)));

	if (t28 != 4294967294U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x1506 = 1U;
	uint8_t x1507 = 111U;
	static uint16_t x1508 = 0U;
	volatile int32_t t29 = 409591899;

	t29 = (x1505|(x1506-(x1507>>x1508)));

	if (t29 != -109) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x1601 = UINT8_MAX;
	static uint8_t x1603 = UINT8_MAX;
	uint32_t x1604 = 1U;
	static volatile uint64_t t30 = 29912475390245LLU;

	t30 = (x1601|(x1602-(x1603>>x1604)));

	if (t30 != 192757503241983LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x1689 = UINT16_MAX;
	static uint8_t x1691 = 7U;
	int8_t x1692 = 2;
	static volatile int64_t t31 = 1120196272LL;

	t31 = (x1689|(x1690-(x1691>>x1692)));

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1725 = 0;
	int8_t x1726 = INT8_MAX;
	int16_t x1727 = INT16_MAX;
	uint8_t x1728 = 2U;
	static volatile int32_t t32 = 183363;

	t32 = (x1725|(x1726-(x1727>>x1728)));

	if (t32 != -8064) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x1773 = -1;
	static volatile int64_t x1774 = 0LL;
	uint32_t x1775 = 992U;
	static uint8_t x1776 = 3U;
	volatile int64_t t33 = -7LL;

	t33 = (x1773|(x1774-(x1775>>x1776)));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1833 = 53;
	static volatile int8_t x1834 = INT8_MIN;
	uint16_t x1835 = UINT16_MAX;
	volatile int32_t t34 = -14702;

	t34 = (x1833|(x1834-(x1835>>x1836)));

	if (t34 != -8267) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x1885 = INT8_MIN;
	static uint64_t x1887 = 34124212697LLU;
	uint8_t x1888 = 4U;
	static volatile uint64_t t35 = 11LLU;

	t35 = (x1885|(x1886-(x1887>>x1888)));

	if (t35 != 18446744073709551586LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x1929 = 1302189654LLU;
	static int32_t x1930 = -1;
	int16_t x1931 = INT16_MAX;
	uint8_t x1932 = 1U;

	t36 = (x1929|(x1930-(x1931>>x1932)));

	if (t36 != 18446744073709540950LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1933 = -2;
	uint32_t x1934 = 3742014U;
	static uint16_t x1935 = 2273U;
	static int32_t x1936 = 7;
	volatile uint32_t t37 = UINT32_MAX;

	t37 = (x1933|(x1934-(x1935>>x1936)));

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1958 = INT8_MAX;
	uint16_t x1959 = 209U;
	volatile uint8_t x1960 = 0U;
	int64_t t38 = 3LL;

	t38 = (x1957|(x1958-(x1959>>x1960)));

	if (t38 != -82LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x2057 = 186U;
	volatile uint32_t x2058 = 6002U;
	uint64_t x2059 = 67204174379LLU;
	uint16_t x2060 = 15U;
	volatile uint64_t t39 = 43003603LLU;

	t39 = (x2057|(x2058-(x2059>>x2060)));

	if (t39 != 18446744073707506878LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x2157 = UINT32_MAX;
	volatile int16_t x2158 = INT16_MIN;
	volatile uint32_t t40 = UINT32_MAX;

	t40 = (x2157|(x2158-(x2159>>x2160)));

	if (t40 != UINT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2221 = -1;
	static volatile int16_t x2224 = 1;
	uint64_t t41 = UINT64_MAX;

	t41 = (x2221|(x2222-(x2223>>x2224)));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2229 = INT8_MAX;
	int32_t x2230 = INT32_MIN;
	static volatile uint32_t x2231 = UINT32_MAX;
	volatile uint8_t x2232 = 0U;

	t42 = (x2229|(x2230-(x2231>>x2232)));

	if (t42 != 2147483775U) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x2282 = 42U;
	static int16_t x2284 = 0;
	static int32_t t43 = 1005100;

	t43 = (x2281|(x2282-(x2283>>x2284)));

	if (t43 != -32725) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x2349 = INT16_MAX;
	static uint32_t x2350 = 431478U;
	volatile uint32_t t44 = 887305U;

	t44 = (x2349|(x2350-(x2351>>x2352)));

	if (t44 != 4261871615U) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x2381 = INT64_MIN;
	int32_t x2382 = -1;
	int8_t x2384 = 8;
	static int64_t t45 = -2242496712442590LL;

	t45 = (x2381|(x2382-(x2383>>x2384)));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x2477 = INT16_MIN;
	int32_t x2478 = 98526;
	uint8_t x2480 = 1U;
	volatile uint64_t t46 = 196755282LLU;

	t46 = (x2477|(x2478-(x2479>>x2480)));

	if (t46 != 18446744073709519071LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x2485 = INT64_MIN;
	int64_t x2486 = INT64_MAX;
	int64_t x2487 = INT64_MAX;
	volatile uint8_t x2488 = 0U;
	volatile int64_t t47 = INT64_MIN;

	t47 = (x2485|(x2486-(x2487>>x2488)));

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x2625 = -1LL;
	static volatile int32_t x2626 = INT32_MAX;
	int64_t x2627 = 9575LL;
	int64_t x2628 = 2LL;
	int64_t t48 = 13309399468271776LL;

	t48 = (x2625|(x2626-(x2627>>x2628)));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x2756 = 11U;

	t49 = (x2753|(x2754-(x2755>>x2756)));

	if (t49 != 2147483656U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x2758 = UINT32_MAX;
	int64_t x2759 = INT64_MAX;
	static int8_t x2760 = 1;
	static volatile int64_t t50 = -3841LL;

	t50 = (x2757|(x2758-(x2759>>x2760)));

	if (t50 != -4611686014132420353LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x2861 = INT32_MIN;
	uint32_t x2863 = 48572U;
	int8_t x2864 = 27;
	static uint64_t t51 = UINT64_MAX;

	t51 = (x2861|(x2862-(x2863>>x2864)));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x2874 = -1;
	volatile int64_t t52 = -11835LL;

	t52 = (x2873|(x2874-(x2875>>x2876)));

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x2977 = 11820971;
	volatile uint16_t x2978 = 237U;
	int32_t x2979 = 3;
	volatile int16_t x2980 = 3;
	volatile int32_t t53 = -5105;

	t53 = (x2977|(x2978-(x2979>>x2980)));

	if (t53 != 11821039) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x3021 = UINT64_MAX;
	int64_t x3022 = -1LL;
	volatile uint32_t x3023 = 2U;
	uint8_t x3024 = 2U;
	volatile uint64_t t54 = UINT64_MAX;

	t54 = (x3021|(x3022-(x3023>>x3024)));

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int32_t x3078 = INT32_MIN;
	uint16_t x3079 = 26U;
	volatile uint32_t x3080 = 6U;
	volatile int32_t t55 = INT32_MIN;

	t55 = (x3077|(x3078-(x3079>>x3080)));

	if (t55 != INT32_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x3181 = 12U;
	uint8_t x3182 = 1U;
	volatile uint8_t x3184 = 8U;
	static volatile int64_t t56 = 26903215224237022LL;

	t56 = (x3181|(x3182-(x3183>>x3184)));

	if (t56 != -36028797018963954LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x3273 = 33;
	uint8_t x3274 = 11U;
	static int8_t x3275 = 4;
	int8_t x3276 = 12;
	int32_t t57 = 1229292;

	t57 = (x3273|(x3274-(x3275>>x3276)));

	if (t57 != 43) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x3605 = INT64_MAX;
	uint8_t x3607 = 0U;
	static uint8_t x3608 = 12U;
	static int64_t t58 = INT64_MAX;

	t58 = (x3605|(x3606-(x3607>>x3608)));

	if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x3685 = 0;
	volatile int32_t t59 = -589;

	t59 = (x3685|(x3686-(x3687>>x3688)));

	if (t59 != -32525) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x3689 = 3U;
	int32_t x3690 = 130248495;
	int8_t x3691 = 1;
	uint8_t x3692 = 1U;
	int32_t t60 = -1390;

	t60 = (x3689|(x3690-(x3691>>x3692)));

	if (t60 != 130248495) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x3701 = -1;
	int8_t x3704 = 21;
	int32_t t61 = 108620;

	t61 = (x3701|(x3702-(x3703>>x3704)));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x3765 = UINT8_MAX;
	uint32_t x3766 = 4624U;
	uint8_t x3767 = UINT8_MAX;
	volatile int8_t x3768 = 0;

	t62 = (x3765|(x3766-(x3767>>x3768)));

	if (t62 != 4607U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x3769 = -196686467333391171LL;
	int32_t x3770 = -987;
	int32_t x3771 = INT32_MAX;
	volatile int8_t x3772 = 24;
	volatile int64_t t63 = 3070560163222681LL;

	t63 = (x3769|(x3770-(x3771>>x3772)));

	if (t63 != -65LL) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint8_t x3793 = 1U;
	int16_t x3795 = INT16_MAX;
	volatile uint8_t x3796 = 20U;
	int32_t t64 = INT32_MAX;

	t64 = (x3793|(x3794-(x3795>>x3796)));

	if (t64 != INT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x3858 = 1258;
	static volatile int16_t x3859 = INT16_MAX;
	volatile int32_t t65 = -18;

	t65 = (x3857|(x3858-(x3859>>x3860)));

	if (t65 != -32021) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x3963 = INT16_MAX;
	int8_t x3964 = 3;
	int32_t t66 = -3763756;

	t66 = (x3961|(x3962-(x3963>>x3964)));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x4057 = 1;
	int8_t x4058 = INT8_MAX;
	int16_t x4059 = 0;
	uint8_t x4060 = 1U;
	volatile int32_t t67 = 14651;

	t67 = (x4057|(x4058-(x4059>>x4060)));

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x4342 = 3737U;
	volatile uint8_t x4344 = 1U;
	static volatile uint32_t t68 = UINT32_MAX;

	t68 = (x4341|(x4342-(x4343>>x4344)));

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint64_t x4381 = 170098781145LLU;
	uint64_t x4382 = UINT64_MAX;
	uint32_t x4383 = UINT32_MAX;
	volatile uint16_t x4384 = 8U;
	volatile uint64_t t69 = 1LLU;

	t69 = (x4381|(x4382-(x4383>>x4384)));

	if (t69 != 18446744073704139737LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x4509 = -1;
	volatile int32_t t70 = 1550;

	t70 = (x4509|(x4510-(x4511>>x4512)));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x4521 = 1087170000851232LLU;
	int64_t x4522 = 1536094606751LL;
	static volatile uint64_t x4523 = UINT64_MAX;
	volatile int16_t x4524 = 1;

	t71 = (x4521|(x4522-(x4523>>x4524)));

	if (t71 != 9224460450287031712LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x4549 = 5;
	volatile uint8_t x4550 = UINT8_MAX;
	uint16_t x4552 = 25U;
	volatile uint64_t t72 = 33846499517165129LLU;

	t72 = (x4549|(x4550-(x4551>>x4552)));

	if (t72 != 18446743523953737989LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x4585 = INT32_MAX;
	uint8_t x4586 = UINT8_MAX;
	volatile int16_t x4587 = INT16_MAX;
	volatile int32_t t73 = INT32_MAX;

	t73 = (x4585|(x4586-(x4587>>x4588)));

	if (t73 != INT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x4593 = -1;
	volatile uint8_t x4595 = UINT8_MAX;
	int16_t x4596 = 1;
	volatile int32_t t74 = 32;

	t74 = (x4593|(x4594-(x4595>>x4596)));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x4597 = -1;
	int8_t x4598 = INT8_MAX;
	uint64_t x4599 = 403822977603032LLU;

	t75 = (x4597|(x4598-(x4599>>x4600)));

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x4661 = -3;
	static uint64_t x4663 = UINT64_MAX;
	static uint16_t x4664 = 62U;
	uint64_t t76 = UINT64_MAX;

	t76 = (x4661|(x4662-(x4663>>x4664)));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x4685 = INT64_MIN;
	int32_t x4686 = INT32_MIN;
	int64_t x4687 = 25985880668LL;
	volatile uint8_t x4688 = 4U;
	static volatile int64_t t77 = -202053968587857642LL;

	t77 = (x4685|(x4686-(x4687>>x4688)));

	if (t77 != -3771601189LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x4697 = INT8_MAX;
	uint32_t x4698 = 711405U;
	uint8_t x4699 = 30U;
	static uint16_t x4700 = 13U;
	uint32_t t78 = 94584692U;

	t78 = (x4697|(x4698-(x4699>>x4700)));

	if (t78 != 711423U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x4742 = -1LL;
	uint8_t x4744 = 14U;

	t79 = (x4741|(x4742-(x4743>>x4744)));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x4770 = 506127592613LLU;
	uint32_t x4772 = 1U;
	uint64_t t80 = 1LLU;

	t80 = (x4769|(x4770-(x4771>>x4772)));

	if (t80 != 506127559935LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x4777 = 1461;
	static int64_t x4778 = -1LL;
	uint64_t x4779 = 16214085234420LLU;
	uint16_t x4780 = 9U;
	uint64_t t81 = 8413227579667LLU;

	t81 = (x4777|(x4778-(x4779>>x4780)));

	if (t81 != 18446744042041417725LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x4813 = UINT8_MAX;
	uint16_t x4815 = 5385U;
	uint8_t x4816 = 0U;
	uint32_t t82 = 65081U;

	t82 = (x4813|(x4814-(x4815>>x4816)));

	if (t82 != 4294962175U) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x4817 = -12;
	volatile uint8_t x4820 = 3U;
	volatile int32_t t83 = 379;

	t83 = (x4817|(x4818-(x4819>>x4820)));

	if (t83 != -9) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x4853 = INT16_MIN;
	uint64_t x4854 = UINT64_MAX;
	static uint8_t x4855 = UINT8_MAX;
	uint64_t t84 = UINT64_MAX;

	t84 = (x4853|(x4854-(x4855>>x4856)));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x4878 = -2;
	volatile uint8_t x4879 = 13U;
	static int64_t x4880 = 6LL;
	static volatile int32_t t85 = 342;

	t85 = (x4877|(x4878-(x4879>>x4880)));

	if (t85 != -2) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x4891 = INT64_MAX;
	uint8_t x4892 = 1U;
	volatile int64_t t86 = -4293362114101744254LL;

	t86 = (x4889|(x4890-(x4891>>x4892)));

	if (t86 != -4611686017702912778LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x4893 = INT16_MIN;
	static int32_t x4894 = 3664;
	uint16_t x4895 = 1U;
	uint8_t x4896 = 7U;
	static int32_t t87 = 15211109;

	t87 = (x4893|(x4894-(x4895>>x4896)));

	if (t87 != -29104) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x4942 = -36166333;
	uint16_t x4943 = UINT16_MAX;
	int16_t x4944 = 0;

	t88 = (x4941|(x4942-(x4943>>x4944)));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x5045 = 2;
	int16_t x5046 = INT16_MIN;
	static int64_t x5047 = INT64_MAX;
	volatile uint32_t x5048 = 23U;

	t89 = (x5045|(x5046-(x5047>>x5048)));

	if (t89 != -1099511660541LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x5057 = INT8_MIN;
	volatile int32_t x5058 = -17591;
	uint16_t x5059 = UINT16_MAX;
	volatile int32_t t90 = -537825;

	t90 = (x5057|(x5058-(x5059>>x5060)));

	if (t90 != -55) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x5074 = -1;
	volatile uint64_t x5075 = 101658736222616350LLU;
	uint16_t x5076 = 43U;
	uint64_t t91 = 2795538LLU;

	t91 = (x5073|(x5074-(x5075>>x5076)));

	if (t91 != 18446744073709540058LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x5101 = 6333;
	int16_t x5102 = INT16_MIN;
	static uint64_t x5103 = UINT64_MAX;
	int16_t x5104 = 1;

	t92 = (x5101|(x5102-(x5103>>x5104)));

	if (t92 != 9223372036854749373LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x5121 = INT64_MAX;
	int16_t x5122 = INT16_MIN;
	volatile int64_t t93 = INT64_MAX;

	t93 = (x5121|(x5122-(x5123>>x5124)));

	if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x5245 = INT8_MIN;
	int16_t x5246 = INT16_MAX;
	static int16_t x5248 = 1;
	volatile int32_t t94 = -132966;

	t94 = (x5245|(x5246-(x5247>>x5248)));

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x5281 = INT64_MIN;
	uint64_t x5283 = UINT64_MAX;
	uint8_t x5284 = 0U;
	uint64_t t95 = 640138292783LLU;

	t95 = (x5281|(x5282-(x5283>>x5284)));

	if (t95 != 9223372039002259456LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x5377 = INT8_MIN;
	uint32_t x5378 = 12591540U;
	uint32_t x5379 = 16986U;
	uint32_t t96 = 372992U;

	t96 = (x5377|(x5378-(x5379>>x5380)));

	if (t96 != 4294967175U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x5442 = INT16_MIN;
	int8_t x5443 = 6;
	uint8_t x5444 = 1U;
	volatile int32_t t97 = -326;

	t97 = (x5441|(x5442-(x5443>>x5444)));

	if (t97 != -3) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x5445 = -1;
	uint32_t x5446 = 130U;
	uint8_t x5448 = 1U;
	volatile uint64_t t98 = UINT64_MAX;

	t98 = (x5445|(x5446-(x5447>>x5448)));

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x5461 = -1;
	volatile int16_t x5462 = -1;
	static int16_t x5463 = INT16_MAX;
	uint8_t x5464 = 4U;
	volatile int32_t t99 = 1236419;

	t99 = (x5461|(x5462-(x5463>>x5464)));

	if (t99 != -1) { NG(); } else { ; }
	
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


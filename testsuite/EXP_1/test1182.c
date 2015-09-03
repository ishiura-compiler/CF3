#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t0 = -1683184625670LL;
volatile int16_t x48 = -67;
static volatile int32_t t1 = 384979;
uint16_t x70 = 22U;
static int8_t x423 = INT8_MIN;
volatile uint32_t t6 = UINT32_MAX;
uint8_t x473 = 12U;
int8_t x474 = 0;
int8_t x512 = INT8_MAX;
static uint8_t x533 = UINT8_MAX;
static int64_t x667 = -264135LL;
volatile uint32_t t15 = 89392U;
volatile uint32_t t19 = 8U;
int32_t x1004 = INT32_MAX;
uint64_t x1025 = 27191LLU;
uint32_t x1057 = 0U;
uint8_t x1058 = 0U;
int16_t x1059 = INT16_MIN;
int32_t x1075 = INT32_MAX;
volatile int32_t t23 = INT32_MAX;
uint32_t x1145 = 57321U;
volatile int32_t x1236 = 33109;
static uint64_t t26 = 950813248LLU;
uint16_t x1322 = 2U;
uint8_t x1323 = 103U;
int32_t x1324 = INT32_MAX;
int32_t t27 = INT32_MAX;
uint16_t x1498 = 30U;
uint16_t x1948 = UINT16_MAX;
int64_t t32 = 1722936795LL;
uint8_t x2010 = 4U;
uint8_t x2290 = 16U;
int32_t t38 = 0;
int8_t x2586 = 5;
static uint8_t x3026 = 6U;
int32_t x3027 = INT32_MAX;
static int16_t x3028 = -10919;
int16_t x3081 = INT16_MAX;
volatile int16_t x3217 = 67;
static volatile int8_t x3218 = 2;
uint64_t x3219 = 35858LLU;
uint8_t x3230 = 5U;
volatile int16_t x3340 = -3508;
int64_t x3387 = INT64_MIN;
static volatile uint32_t x3841 = 156264206U;
uint64_t x4032 = UINT64_MAX;
int16_t x4104 = 0;
static uint8_t x4138 = 5U;
uint8_t x4326 = 1U;
int8_t x4327 = 3;
uint32_t x4328 = 940689U;
volatile int32_t x4421 = 63405;
int8_t x4599 = INT8_MIN;
int16_t x4602 = 29;
int16_t x4603 = INT16_MIN;
int8_t x4691 = 7;
int8_t x4708 = 3;
static int64_t t66 = -6986330421716LL;
int8_t x4746 = 23;
uint8_t x4784 = 1U;
int8_t x4858 = 0;
uint16_t x4917 = 1015U;
int32_t x4919 = -1163807;
int8_t x4920 = -1;
static volatile int32_t t70 = 1;
int32_t x5070 = 5;
volatile uint16_t x5071 = UINT16_MAX;
int32_t t73 = -221040;
static uint8_t x5101 = UINT8_MAX;
int64_t x5104 = INT64_MAX;
uint8_t x5211 = 2U;
int32_t x5212 = INT32_MIN;
static int32_t t78 = -29594;
static volatile uint64_t t80 = 2512LLU;
volatile int64_t t83 = -7986LL;
int8_t x5407 = -9;
static volatile int16_t x5408 = 1;
uint16_t x5430 = 27U;
volatile int32_t t86 = 16500310;
int16_t x5756 = -1;
volatile uint64_t t87 = UINT64_MAX;
volatile int32_t x5809 = 0;
uint64_t x5811 = UINT64_MAX;
int64_t x5812 = INT64_MIN;
int64_t x6021 = 1160LL;
volatile int64_t t90 = -398297395269002555LL;
int32_t x6073 = INT32_MAX;
int8_t x6098 = 23;
int32_t x6100 = 379;
uint32_t x6118 = 3U;
int32_t x6209 = INT32_MAX;
uint32_t x6212 = UINT32_MAX;
static uint16_t x6394 = 0U;
volatile int32_t t99 = -363674990;


void f0(void) {
	volatile uint16_t x13 = 27U;
	int8_t x14 = 1;
	volatile uint16_t x15 = 15U;
	static int64_t x16 = INT64_MIN;

	t0 = (((x13>>x14)^x15)|x16);

	if (t0 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x45 = INT16_MAX;
	int64_t x46 = 0LL;
	volatile int16_t x47 = INT16_MIN;

	t1 = (((x45>>x46)^x47)|x48);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int16_t x69 = 4924;
	uint64_t x71 = 182817548246818LLU;
	volatile uint16_t x72 = 1544U;
	volatile uint64_t t2 = 1393013008863608LLU;

	t2 = (((x69>>x70)^x71)|x72);

	if (t2 != 182817548246826LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x169 = UINT64_MAX;
	static int8_t x170 = 2;
	int64_t x171 = INT64_MAX;
	int32_t x172 = 15353616;
	uint64_t t3 = 2LLU;

	t3 = (((x169>>x170)^x171)|x172);

	if (t3 != 4611686018442741520LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x193 = INT8_MAX;
	static uint32_t x194 = 1U;
	int32_t x195 = INT32_MAX;
	int8_t x196 = INT8_MAX;
	volatile int32_t t4 = INT32_MAX;

	t4 = (((x193>>x194)^x195)|x196);

	if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x421 = 6;
	uint8_t x422 = 2U;
	static int8_t x424 = 1;
	static int32_t t5 = -357;

	t5 = (((x421>>x422)^x423)|x424);

	if (t5 != -127) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x453 = 4966U;
	int8_t x454 = 6;
	int32_t x455 = INT32_MIN;
	volatile int16_t x456 = -1;

	t6 = (((x453>>x454)^x455)|x456);

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x475 = INT32_MIN;
	volatile int16_t x476 = INT16_MAX;
	static volatile int32_t t7 = -126;

	t7 = (((x473>>x474)^x475)|x476);

	if (t7 != -2147450881) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x485 = 786484487;
	uint64_t x486 = 0LLU;
	uint32_t x487 = 13U;
	int16_t x488 = 295;
	volatile uint32_t t8 = 22U;

	t8 = (((x485>>x486)^x487)|x488);

	if (t8 != 786484527U) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x509 = 9U;
	uint16_t x510 = 19U;
	int32_t x511 = INT32_MAX;
	int32_t t9 = INT32_MAX;

	t9 = (((x509>>x510)^x511)|x512);

	if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x534 = 0;
	int64_t x535 = INT64_MIN;
	int16_t x536 = -1;
	int64_t t10 = 4076363087921882LL;

	t10 = (((x533>>x534)^x535)|x536);

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x593 = 5060U;
	uint8_t x594 = 13U;
	int32_t x595 = INT32_MAX;
	uint16_t x596 = 1282U;
	int32_t t11 = INT32_MAX;

	t11 = (((x593>>x594)^x595)|x596);

	if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x617 = INT64_MAX;
	int8_t x618 = 1;
	int16_t x619 = 8819;
	static volatile int16_t x620 = INT16_MIN;
	int64_t t12 = -2005809LL;

	t12 = (((x617>>x618)^x619)|x620);

	if (t12 != -8820LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x641 = 28;
	uint8_t x642 = 27U;
	int64_t x643 = -1LL;
	int16_t x644 = INT16_MIN;
	int64_t t13 = -804769962457LL;

	t13 = (((x641>>x642)^x643)|x644);

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x665 = 0U;
	uint8_t x666 = 6U;
	int16_t x668 = INT16_MIN;
	static volatile int64_t t14 = 10LL;

	t14 = (((x665>>x666)^x667)|x668);

	if (t14 != -1991LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x717 = 0U;
	int8_t x718 = 23;
	uint32_t x719 = 39U;
	static int8_t x720 = INT8_MAX;

	t15 = (((x717>>x718)^x719)|x720);

	if (t15 != 127U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x801 = UINT8_MAX;
	volatile uint8_t x802 = 0U;
	static int8_t x803 = INT8_MIN;
	int8_t x804 = INT8_MIN;
	int32_t t16 = -86110;

	t16 = (((x801>>x802)^x803)|x804);

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x877 = 0U;
	int16_t x878 = 1;
	int64_t x879 = INT64_MAX;
	uint32_t x880 = UINT32_MAX;
	volatile int64_t t17 = INT64_MAX;

	t17 = (((x877>>x878)^x879)|x880);

	if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x961 = 14110;
	int8_t x962 = 0;
	int32_t x963 = -1;
	volatile int32_t x964 = -1;
	int32_t t18 = -1582;

	t18 = (((x961>>x962)^x963)|x964);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x973 = UINT32_MAX;
	int16_t x974 = 2;
	volatile uint32_t x975 = 17092U;
	int8_t x976 = -23;

	t19 = (((x973>>x974)^x975)|x976);

	if (t19 != 4294967291U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x1001 = 6656945U;
	int64_t x1002 = 1LL;
	static int64_t x1003 = -1LL;
	volatile int64_t t20 = -1926394805924241702LL;

	t20 = (((x1001>>x1002)^x1003)|x1004);

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1026 = 6U;
	static uint64_t x1027 = 47LLU;
	int64_t x1028 = INT64_MIN;
	uint64_t t21 = 103576706164LLU;

	t21 = (((x1025>>x1026)^x1027)|x1028);

	if (t21 != 9223372036854776199LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1060 = 922983809333LL;
	int64_t t22 = -1390LL;

	t22 = (((x1057>>x1058)^x1059)|x1060);

	if (t22 != 923417952565LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1073 = 0;
	int16_t x1074 = 15;
	uint16_t x1076 = 7788U;

	t23 = (((x1073>>x1074)^x1075)|x1076);

	if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x1146 = 4;
	static int64_t x1147 = INT64_MAX;
	int32_t x1148 = INT32_MIN;
	int64_t t24 = 12569666061LL;

	t24 = (((x1145>>x1146)^x1147)|x1148);

	if (t24 != -3583LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x1181 = UINT16_MAX;
	volatile int8_t x1182 = 7;
	int32_t x1183 = 14292700;
	volatile uint64_t x1184 = 46208730LLU;
	volatile uint64_t t25 = 31594287065372LLU;

	t25 = (((x1181>>x1182)^x1183)|x1184);

	if (t25 != 47912955LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1233 = 36801548615LLU;
	int64_t x1234 = 7LL;
	int64_t x1235 = -45474252702025LL;

	t26 = (((x1233>>x1234)^x1235)|x1236);

	if (t26 != 18446698599173695957LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1321 = 13U;

	t27 = (((x1321>>x1322)^x1323)|x1324);

	if (t27 != INT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x1353 = 16U;
	uint8_t x1354 = 23U;
	int16_t x1355 = 0;
	uint8_t x1356 = 51U;
	static uint32_t t28 = 257541U;

	t28 = (((x1353>>x1354)^x1355)|x1356);

	if (t28 != 51U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x1497 = 1LL;
	int16_t x1499 = INT16_MIN;
	int8_t x1500 = INT8_MIN;
	int64_t t29 = 53024LL;

	t29 = (((x1497>>x1498)^x1499)|x1500);

	if (t29 != -128LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1581 = 55;
	static int8_t x1582 = 3;
	int8_t x1583 = INT8_MIN;
	int8_t x1584 = INT8_MIN;
	volatile int32_t t30 = -261;

	t30 = (((x1581>>x1582)^x1583)|x1584);

	if (t30 != -122) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1609 = INT16_MAX;
	int32_t x1610 = 0;
	int32_t x1611 = INT32_MIN;
	int64_t x1612 = -1LL;
	volatile int64_t t31 = 72853699901LL;

	t31 = (((x1609>>x1610)^x1611)|x1612);

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1945 = INT32_MAX;
	volatile uint8_t x1946 = 6U;
	int64_t x1947 = -133443542697LL;

	t32 = (((x1945>>x1946)^x1947)|x1948);

	if (t32 != -133414846465LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x1965 = INT32_MAX;
	static uint8_t x1966 = 0U;
	int16_t x1967 = -752;
	volatile uint16_t x1968 = 463U;
	int32_t t33 = 7115;

	t33 = (((x1965>>x1966)^x1967)|x1968);

	if (t33 != -2147482641) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x1973 = 109U;
	uint32_t x1974 = 26U;
	static uint32_t x1975 = UINT32_MAX;
	int16_t x1976 = INT16_MAX;
	volatile uint32_t t34 = UINT32_MAX;

	t34 = (((x1973>>x1974)^x1975)|x1976);

	if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x2009 = UINT32_MAX;
	volatile int16_t x2011 = 40;
	int32_t x2012 = 0;
	volatile uint32_t t35 = 183511699U;

	t35 = (((x2009>>x2010)^x2011)|x2012);

	if (t35 != 268435415U) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x2013 = UINT16_MAX;
	static volatile int8_t x2014 = 0;
	uint64_t x2015 = 3394692322000102LLU;
	int64_t x2016 = -1LL;
	uint64_t t36 = UINT64_MAX;

	t36 = (((x2013>>x2014)^x2015)|x2016);

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x2057 = 15LL;
	uint16_t x2058 = 1U;
	static uint8_t x2059 = 0U;
	static int32_t x2060 = INT32_MIN;
	int64_t t37 = 14996757343986LL;

	t37 = (((x2057>>x2058)^x2059)|x2060);

	if (t37 != -2147483641LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x2289 = INT32_MAX;
	static int8_t x2291 = -57;
	int8_t x2292 = 21;

	t38 = (((x2289>>x2290)^x2291)|x2292);

	if (t38 != -32707) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x2569 = UINT64_MAX;
	int8_t x2570 = 0;
	int8_t x2571 = 31;
	uint8_t x2572 = 3U;
	static volatile uint64_t t39 = 4955071219361240LLU;

	t39 = (((x2569>>x2570)^x2571)|x2572);

	if (t39 != 18446744073709551587LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x2585 = INT16_MAX;
	volatile int64_t x2587 = INT64_MIN;
	static uint32_t x2588 = 189U;
	static int64_t t40 = -37964468147LL;

	t40 = (((x2585>>x2586)^x2587)|x2588);

	if (t40 != -9223372036854774785LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x2689 = 747310043LLU;
	int8_t x2690 = 44;
	static int32_t x2691 = 0;
	static int16_t x2692 = -1;
	static uint64_t t41 = UINT64_MAX;

	t41 = (((x2689>>x2690)^x2691)|x2692);

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x2953 = INT8_MAX;
	volatile int16_t x2954 = 3;
	uint32_t x2955 = UINT32_MAX;
	volatile uint64_t x2956 = 34908LLU;
	volatile uint64_t t42 = 49172802886348LLU;

	t42 = (((x2953>>x2954)^x2955)|x2956);

	if (t42 != 4294967292LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x3025 = 1;
	int32_t t43 = 10;

	t43 = (((x3025>>x3026)^x3027)|x3028);

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x3082 = 1;
	int16_t x3083 = INT16_MIN;
	static int8_t x3084 = -15;
	volatile int32_t t44 = -2;

	t44 = (((x3081>>x3082)^x3083)|x3084);

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x3220 = INT8_MIN;
	volatile uint64_t t45 = 2218053541568997258LLU;

	t45 = (((x3217>>x3218)^x3219)|x3220);

	if (t45 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x3229 = UINT32_MAX;
	static int32_t x3231 = 1;
	int64_t x3232 = INT64_MAX;
	static int64_t t46 = INT64_MAX;

	t46 = (((x3229>>x3230)^x3231)|x3232);

	if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint16_t x3337 = UINT16_MAX;
	static int8_t x3338 = 3;
	uint64_t x3339 = UINT64_MAX;
	static volatile uint64_t t47 = 112LLU;

	t47 = (((x3337>>x3338)^x3339)|x3340);

	if (t47 != 18446744073709548108LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x3385 = UINT16_MAX;
	uint16_t x3386 = 7U;
	int64_t x3388 = -929883LL;
	int64_t t48 = 2171044070236729934LL;

	t48 = (((x3385>>x3386)^x3387)|x3388);

	if (t48 != -929793LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x3765 = UINT32_MAX;
	uint8_t x3766 = 4U;
	volatile int8_t x3767 = -23;
	static int64_t x3768 = INT64_MAX;
	static volatile int64_t t49 = INT64_MAX;

	t49 = (((x3765>>x3766)^x3767)|x3768);

	if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x3813 = 12U;
	uint8_t x3814 = 27U;
	static int64_t x3815 = INT64_MAX;
	uint16_t x3816 = UINT16_MAX;
	int64_t t50 = INT64_MAX;

	t50 = (((x3813>>x3814)^x3815)|x3816);

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x3842 = 0;
	uint8_t x3843 = UINT8_MAX;
	static int32_t x3844 = -27560980;
	uint32_t t51 = 0U;

	t51 = (((x3841>>x3842)^x3843)|x3844);

	if (t51 != 4284184573U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x3857 = 1210U;
	uint8_t x3858 = 1U;
	uint32_t x3859 = 145U;
	uint64_t x3860 = 5LLU;
	uint64_t t52 = 120645708LLU;

	t52 = (((x3857>>x3858)^x3859)|x3860);

	if (t52 != 717LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x3965 = UINT16_MAX;
	int16_t x3966 = 0;
	int8_t x3967 = -1;
	volatile int8_t x3968 = INT8_MIN;
	volatile int32_t t53 = -32461;

	t53 = (((x3965>>x3966)^x3967)|x3968);

	if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x4029 = 10097257245662341LL;
	uint16_t x4030 = 1U;
	uint32_t x4031 = 499U;
	static volatile uint64_t t54 = UINT64_MAX;

	t54 = (((x4029>>x4030)^x4031)|x4032);

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x4101 = 309;
	uint8_t x4102 = 4U;
	int64_t x4103 = INT64_MIN;
	volatile int64_t t55 = 16539LL;

	t55 = (((x4101>>x4102)^x4103)|x4104);

	if (t55 != -9223372036854775789LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x4129 = 10U;
	static uint64_t x4130 = 0LLU;
	int32_t x4131 = INT32_MAX;
	uint8_t x4132 = 0U;
	volatile int32_t t56 = 7;

	t56 = (((x4129>>x4130)^x4131)|x4132);

	if (t56 != 2147483637) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x4137 = 88634265;
	uint32_t x4139 = UINT32_MAX;
	static int16_t x4140 = INT16_MIN;
	volatile uint32_t t57 = 56218U;

	t57 = (((x4137>>x4138)^x4139)|x4140);

	if (t57 != 4294949987U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x4217 = 32772048268LLU;
	uint8_t x4218 = 1U;
	int64_t x4219 = INT64_MIN;
	volatile int16_t x4220 = INT16_MIN;
	uint64_t t58 = 1940729010716889085LLU;

	t58 = (((x4217>>x4218)^x4219)|x4220);

	if (t58 != 18446744073709544134LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x4309 = 5521;
	uint16_t x4310 = 3U;
	int16_t x4311 = -1;
	static volatile int32_t x4312 = INT32_MIN;
	static int32_t t59 = 9441;

	t59 = (((x4309>>x4310)^x4311)|x4312);

	if (t59 != -691) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x4325 = 1U;
	volatile uint32_t t60 = 4115335U;

	t60 = (((x4325>>x4326)^x4327)|x4328);

	if (t60 != 940691U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x4422 = 10;
	static uint64_t x4423 = 335553106LLU;
	uint32_t x4424 = UINT32_MAX;
	static uint64_t t61 = 37LLU;

	t61 = (((x4421>>x4422)^x4423)|x4424);

	if (t61 != 4294967295LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x4469 = 125223;
	uint8_t x4470 = 3U;
	int32_t x4471 = -1;
	uint16_t x4472 = UINT16_MAX;
	volatile int32_t t62 = 4289;

	t62 = (((x4469>>x4470)^x4471)|x4472);

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x4597 = INT16_MAX;
	uint8_t x4598 = 4U;
	int64_t x4600 = -2LL;
	volatile int64_t t63 = 2LL;

	t63 = (((x4597>>x4598)^x4599)|x4600);

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x4601 = 728122556795569LL;
	uint64_t x4604 = 33191141LLU;
	static uint64_t t64 = 7814802924015LLU;

	t64 = (((x4601>>x4602)^x4603)|x4604);

	if (t64 != 18446744073709254125LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x4689 = 18U;
	static uint8_t x4690 = 0U;
	static int32_t x4692 = INT32_MAX;
	int32_t t65 = INT32_MAX;

	t65 = (((x4689>>x4690)^x4691)|x4692);

	if (t65 != INT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x4705 = INT64_MAX;
	uint8_t x4706 = 9U;
	int16_t x4707 = 1;

	t66 = (((x4705>>x4706)^x4707)|x4708);

	if (t66 != 18014398509481983LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x4745 = INT32_MAX;
	static int64_t x4747 = -6083685317861LL;
	int16_t x4748 = INT16_MIN;
	volatile int64_t t67 = 99LL;

	t67 = (((x4745>>x4746)^x4747)|x4748);

	if (t67 != -31772LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x4781 = 5;
	uint8_t x4782 = 0U;
	static int8_t x4783 = -11;
	static int32_t t68 = -15492591;

	t68 = (((x4781>>x4782)^x4783)|x4784);

	if (t68 != -15) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x4857 = 3993;
	volatile uint32_t x4859 = UINT32_MAX;
	int32_t x4860 = 23764925;
	volatile uint32_t t69 = UINT32_MAX;

	t69 = (((x4857>>x4858)^x4859)|x4860);

	if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x4918 = 29;

	t70 = (((x4917>>x4918)^x4919)|x4920);

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x4981 = 36;
	uint8_t x4982 = 3U;
	volatile int8_t x4983 = -1;
	int64_t x4984 = INT64_MIN;
	volatile int64_t t71 = 5LL;

	t71 = (((x4981>>x4982)^x4983)|x4984);

	if (t71 != -5LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x5033 = 563U;
	uint8_t x5034 = 0U;
	static int8_t x5035 = INT8_MAX;
	int64_t x5036 = INT64_MAX;
	static int64_t t72 = INT64_MAX;

	t72 = (((x5033>>x5034)^x5035)|x5036);

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x5069 = INT8_MAX;
	static int8_t x5072 = -1;

	t73 = (((x5069>>x5070)^x5071)|x5072);

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint64_t x5081 = 1851LLU;
	int16_t x5082 = 14;
	int16_t x5083 = INT16_MIN;
	uint64_t x5084 = UINT64_MAX;
	uint64_t t74 = UINT64_MAX;

	t74 = (((x5081>>x5082)^x5083)|x5084);

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x5102 = 22LLU;
	volatile int8_t x5103 = INT8_MIN;
	int64_t t75 = 2887395LL;

	t75 = (((x5101>>x5102)^x5103)|x5104);

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x5185 = UINT32_MAX;
	volatile int16_t x5186 = 11;
	int32_t x5187 = 1;
	static volatile uint32_t x5188 = 1U;
	uint32_t t76 = 102043939U;

	t76 = (((x5185>>x5186)^x5187)|x5188);

	if (t76 != 2097151U) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x5197 = 725435651;
	int16_t x5198 = 0;
	int32_t x5199 = -1;
	uint64_t x5200 = 9LLU;
	uint64_t t77 = 6220226466LLU;

	t77 = (((x5197>>x5198)^x5199)|x5200);

	if (t77 != 18446744072984115965LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x5209 = UINT8_MAX;
	uint8_t x5210 = 6U;

	t78 = (((x5209>>x5210)^x5211)|x5212);

	if (t78 != -2147483647) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x5225 = UINT64_MAX;
	uint8_t x5226 = 7U;
	uint16_t x5227 = 234U;
	uint64_t x5228 = 951962082779229LLU;
	volatile uint64_t t79 = 131491898352LLU;

	t79 = (((x5225>>x5226)^x5227)|x5228);

	if (t79 != 144115188075855709LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x5233 = 2LLU;
	static uint64_t x5234 = 1LLU;
	volatile int16_t x5235 = INT16_MIN;
	volatile int8_t x5236 = INT8_MIN;

	t80 = (((x5233>>x5234)^x5235)|x5236);

	if (t80 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x5293 = UINT64_MAX;
	uint8_t x5294 = 1U;
	int32_t x5295 = -1;
	int32_t x5296 = -24;
	static volatile uint64_t t81 = 172605188940123LLU;

	t81 = (((x5293>>x5294)^x5295)|x5296);

	if (t81 != 18446744073709551592LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x5321 = 1132394U;
	uint16_t x5322 = 10U;
	int64_t x5323 = INT64_MIN;
	int8_t x5324 = -1;
	static volatile int64_t t82 = 99071596LL;

	t82 = (((x5321>>x5322)^x5323)|x5324);

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x5325 = 842U;
	uint8_t x5326 = 25U;
	int16_t x5327 = 4894;
	static int64_t x5328 = INT64_MIN;

	t83 = (((x5325>>x5326)^x5327)|x5328);

	if (t83 != -9223372036854770914LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x5405 = UINT32_MAX;
	static int64_t x5406 = 1LL;
	uint32_t t84 = 124911U;

	t84 = (((x5405>>x5406)^x5407)|x5408);

	if (t84 != 2147483657U) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint8_t x5429 = 53U;
	static int16_t x5431 = INT16_MIN;
	int32_t x5432 = 370178;
	int32_t t85 = -17502;

	t85 = (((x5429>>x5430)^x5431)|x5432);

	if (t85 != -23038) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x5617 = 5338U;
	volatile uint8_t x5618 = 15U;
	static volatile uint8_t x5619 = 0U;
	int8_t x5620 = -1;

	t86 = (((x5617>>x5618)^x5619)|x5620);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x5753 = 98U;
	static int16_t x5754 = 1;
	volatile uint64_t x5755 = 73788581276LLU;

	t87 = (((x5753>>x5754)^x5755)|x5756);

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x5793 = UINT16_MAX;
	uint8_t x5794 = 2U;
	volatile uint8_t x5795 = 0U;
	uint32_t x5796 = 938U;
	static uint32_t t88 = 2053U;

	t88 = (((x5793>>x5794)^x5795)|x5796);

	if (t88 != 16383U) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x5810 = 1;
	static uint64_t t89 = UINT64_MAX;

	t89 = (((x5809>>x5810)^x5811)|x5812);

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x6022 = 59U;
	int64_t x6023 = INT64_MIN;
	int8_t x6024 = 6;

	t90 = (((x6021>>x6022)^x6023)|x6024);

	if (t90 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x6041 = INT64_MAX;
	uint8_t x6042 = 42U;
	volatile int64_t x6043 = -14879916113303LL;
	uint32_t x6044 = 7U;
	static int64_t t91 = -27LL;

	t91 = (((x6041>>x6042)^x6043)|x6044);

	if (t91 != -14879914377833LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x6074 = 4;
	static int8_t x6075 = -3;
	uint64_t x6076 = 24986749294LLU;
	volatile uint64_t t92 = 109410571LLU;

	t92 = (((x6073>>x6074)^x6075)|x6076);

	if (t92 != 18446744073597585774LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x6089 = INT8_MAX;
	volatile uint8_t x6090 = 7U;
	int64_t x6091 = INT64_MIN;
	int16_t x6092 = INT16_MAX;
	int64_t t93 = -903962LL;

	t93 = (((x6089>>x6090)^x6091)|x6092);

	if (t93 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x6097 = 39U;
	volatile uint32_t x6099 = 393U;
	uint32_t t94 = 595510U;

	t94 = (((x6097>>x6098)^x6099)|x6100);

	if (t94 != 507U) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x6117 = 218U;
	int32_t x6119 = INT32_MIN;
	int16_t x6120 = -35;
	int32_t t95 = 5;

	t95 = (((x6117>>x6118)^x6119)|x6120);

	if (t95 != -33) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x6137 = 8U;
	uint32_t x6138 = 3U;
	int32_t x6139 = INT32_MIN;
	uint16_t x6140 = UINT16_MAX;
	int32_t t96 = 0;

	t96 = (((x6137>>x6138)^x6139)|x6140);

	if (t96 != -2147418113) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x6210 = 6U;
	volatile int32_t x6211 = -66065464;
	volatile uint32_t t97 = UINT32_MAX;

	t97 = (((x6209>>x6210)^x6211)|x6212);

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x6245 = 36060;
	static uint32_t x6246 = 1U;
	int64_t x6247 = INT64_MIN;
	static int16_t x6248 = -1;
	int64_t t98 = 1LL;

	t98 = (((x6245>>x6246)^x6247)|x6248);

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x6393 = INT32_MAX;
	int16_t x6395 = INT16_MAX;
	int8_t x6396 = INT8_MAX;

	t99 = (((x6393>>x6394)^x6395)|x6396);

	if (t99 != 2147451007) { NG(); } else { ; }
	
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


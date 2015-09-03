#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = -62701230044319LL;
volatile int8_t x13 = INT8_MAX;
uint8_t x129 = 1U;
static uint32_t x157 = 122U;
int32_t t5 = -219;
volatile int32_t t8 = -179;
static uint8_t x612 = 18U;
volatile int32_t t10 = 146958;
static int64_t x828 = INT64_MIN;
int64_t x992 = -1384732LL;
uint64_t x1041 = UINT64_MAX;
uint32_t x1043 = UINT32_MAX;
int64_t x1044 = INT64_MAX;
int16_t x1164 = INT16_MAX;
int8_t x1174 = 6;
volatile uint32_t x1176 = 862U;
int16_t x1245 = INT16_MAX;
uint16_t x1422 = 7U;
volatile uint8_t x1424 = 55U;
static int16_t x1441 = 1986;
uint8_t x1442 = 1U;
uint16_t x1619 = 795U;
int64_t x1620 = INT64_MIN;
static int32_t x1788 = 106640;
int16_t x1902 = 2;
volatile uint8_t x1905 = 1U;
uint16_t x1908 = UINT16_MAX;
volatile int16_t x1918 = 1;
volatile int32_t t31 = 16046725;
uint8_t x1957 = UINT8_MAX;
int32_t x1958 = 0;
static int64_t x1982 = 1LL;
volatile int32_t x2050 = 0;
int32_t t35 = -191165070;
uint8_t x2137 = 126U;
volatile int32_t t37 = -6;
uint8_t x2254 = 0U;
uint16_t x2266 = 0U;
uint16_t x2318 = 3U;
int8_t x2319 = INT8_MIN;
static uint8_t x2377 = 0U;
int32_t x2380 = 15874304;
volatile int32_t t42 = 62;
uint16_t x2577 = 307U;
static uint8_t x2579 = 15U;
int16_t x2866 = 1;
uint16_t x2872 = 1385U;
uint8_t x2990 = 28U;
int64_t x2991 = INT64_MIN;
uint32_t x3041 = 478U;
int32_t t52 = -96404211;
static uint64_t x3179 = 2302017340958450LLU;
int16_t x3490 = 1;
uint16_t x3506 = 2U;
uint64_t x3508 = 32825644873656857LLU;
volatile int32_t t55 = 49;
uint8_t x3687 = 53U;
volatile int32_t t58 = -2;
uint32_t x3909 = UINT32_MAX;
uint8_t x3990 = 24U;
uint64_t x3991 = UINT64_MAX;
uint64_t x4044 = 5LLU;
uint8_t x4106 = 0U;
uint32_t x4140 = UINT32_MAX;
int8_t x4164 = INT8_MAX;
volatile int8_t x4192 = -1;
static int32_t t65 = 6737;
uint32_t x4317 = UINT32_MAX;
int32_t t66 = -4636;
uint8_t x4424 = UINT8_MAX;
int32_t t68 = -390417;
int64_t x4527 = INT64_MAX;
int64_t x4573 = 71627009224342867LL;
int16_t x4574 = 0;
uint8_t x4616 = UINT8_MAX;
static volatile uint8_t x4706 = 1U;
uint64_t x4753 = 56228LLU;
volatile int8_t x4756 = -4;
int32_t t74 = -161410719;
volatile int16_t x4916 = -12534;
volatile int32_t t76 = 2083040;
static uint16_t x4922 = 14U;
int32_t x4923 = -6967;
int64_t x4924 = INT64_MIN;
volatile int32_t t77 = 264590575;
static volatile int32_t t81 = -7715;
int8_t x5261 = 1;
static volatile int8_t x5289 = INT8_MAX;
static int8_t x5329 = INT8_MAX;
int64_t x5332 = 525LL;
int32_t t84 = -4;
static uint64_t x5380 = UINT64_MAX;
volatile uint64_t x5398 = 9LLU;
int32_t x5399 = INT32_MIN;
volatile int16_t x5454 = 29;
int16_t x5456 = INT16_MIN;
static volatile int8_t x5568 = INT8_MAX;
static int32_t t90 = 0;
int64_t x6035 = INT64_MIN;
int64_t x6036 = INT64_MIN;
int32_t x6051 = INT32_MIN;
static uint64_t x6134 = 10LLU;
volatile int32_t t94 = -167826;
uint16_t x6251 = UINT16_MAX;
uint8_t x6458 = 14U;
uint64_t x6460 = 582LLU;


void f0(void) {
	uint32_t x1 = 184U;
	uint8_t x2 = 18U;
	int32_t x4 = -2;
	static volatile int32_t t0 = -540;

	t0 = (((x1<<x2)%x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x14 = 13U;
	static int32_t x15 = -398853;
	int32_t x16 = INT32_MAX;
	static volatile int32_t t1 = 122178;

	t1 = (((x13<<x14)%x15)==x16);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x49 = 13LLU;
	uint32_t x50 = 1U;
	static uint8_t x51 = UINT8_MAX;
	int8_t x52 = 6;
	int32_t t2 = 0;

	t2 = (((x49<<x50)%x51)==x52);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x130 = 27U;
	uint8_t x131 = 16U;
	int64_t x132 = INT64_MIN;
	int32_t t3 = -80844424;

	t3 = (((x129<<x130)%x131)==x132);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x158 = 7;
	uint32_t x159 = 115U;
	int32_t x160 = INT32_MIN;
	static volatile int32_t t4 = -765260264;

	t4 = (((x157<<x158)%x159)==x160);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x193 = 11U;
	int32_t x194 = 4;
	int8_t x195 = INT8_MIN;
	uint8_t x196 = 86U;

	t5 = (((x193<<x194)%x195)==x196);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x261 = 0U;
	volatile uint64_t x262 = 1LLU;
	int32_t x263 = 50;
	int32_t x264 = INT32_MAX;
	int32_t t6 = -228754292;

	t6 = (((x261<<x262)%x263)==x264);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x397 = UINT32_MAX;
	uint8_t x398 = 7U;
	int32_t x399 = -70;
	static volatile int16_t x400 = -1;
	int32_t t7 = 152491;

	t7 = (((x397<<x398)%x399)==x400);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x437 = 3U;
	static uint8_t x438 = 1U;
	int64_t x439 = 5327LL;
	uint32_t x440 = 57662U;

	t8 = (((x437<<x438)%x439)==x440);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x609 = 0U;
	uint8_t x610 = 5U;
	volatile int8_t x611 = INT8_MAX;
	static volatile int32_t t9 = 0;

	t9 = (((x609<<x610)%x611)==x612);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x705 = 27179U;
	int8_t x706 = 0;
	volatile int8_t x707 = INT8_MIN;
	static int8_t x708 = -1;

	t10 = (((x705<<x706)%x707)==x708);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x737 = 10U;
	uint8_t x738 = 1U;
	int64_t x739 = INT64_MAX;
	uint32_t x740 = 13U;
	int32_t t11 = -1546;

	t11 = (((x737<<x738)%x739)==x740);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x825 = UINT32_MAX;
	volatile uint32_t x826 = 0U;
	int32_t x827 = INT32_MIN;
	int32_t t12 = -30;

	t12 = (((x825<<x826)%x827)==x828);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x937 = 64;
	int8_t x938 = 0;
	volatile uint8_t x939 = UINT8_MAX;
	static volatile int32_t x940 = INT32_MIN;
	volatile int32_t t13 = 0;

	t13 = (((x937<<x938)%x939)==x940);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x989 = UINT8_MAX;
	uint8_t x990 = 0U;
	volatile int32_t x991 = INT32_MIN;
	volatile int32_t t14 = 46211;

	t14 = (((x989<<x990)%x991)==x992);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x1009 = INT16_MAX;
	uint8_t x1010 = 5U;
	volatile uint16_t x1011 = 59U;
	uint16_t x1012 = 29U;
	int32_t t15 = 53869838;

	t15 = (((x1009<<x1010)%x1011)==x1012);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x1037 = 1U;
	uint8_t x1038 = 6U;
	volatile int16_t x1039 = INT16_MIN;
	uint8_t x1040 = 0U;
	static volatile int32_t t16 = 139372041;

	t16 = (((x1037<<x1038)%x1039)==x1040);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x1042 = 22U;
	int32_t t17 = -14;

	t17 = (((x1041<<x1042)%x1043)==x1044);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x1049 = 99728122721LLU;
	static uint8_t x1050 = 6U;
	int32_t x1051 = -697177;
	static int64_t x1052 = INT64_MIN;
	static volatile int32_t t18 = 1839656;

	t18 = (((x1049<<x1050)%x1051)==x1052);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1161 = INT8_MAX;
	static int8_t x1162 = 0;
	int32_t x1163 = -1;
	static volatile int32_t t19 = 1982;

	t19 = (((x1161<<x1162)%x1163)==x1164);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1173 = 0;
	int32_t x1175 = 129522807;
	volatile int32_t t20 = -15;

	t20 = (((x1173<<x1174)%x1175)==x1176);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1246 = 0;
	int64_t x1247 = -1LL;
	volatile int16_t x1248 = 431;
	volatile int32_t t21 = 17831;

	t21 = (((x1245<<x1246)%x1247)==x1248);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x1421 = INT8_MAX;
	int8_t x1423 = INT8_MIN;
	static int32_t t22 = 15312;

	t22 = (((x1421<<x1422)%x1423)==x1424);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x1443 = -1;
	uint16_t x1444 = UINT16_MAX;
	static int32_t t23 = -16515;

	t23 = (((x1441<<x1442)%x1443)==x1444);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x1449 = 5U;
	uint64_t x1450 = 3LLU;
	static uint8_t x1451 = 59U;
	uint8_t x1452 = UINT8_MAX;
	int32_t t24 = 63327775;

	t24 = (((x1449<<x1450)%x1451)==x1452);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1617 = UINT32_MAX;
	int16_t x1618 = 0;
	volatile int32_t t25 = 61979;

	t25 = (((x1617<<x1618)%x1619)==x1620);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1741 = 38237653207575LLU;
	uint32_t x1742 = 5U;
	volatile uint64_t x1743 = 126517LLU;
	static uint8_t x1744 = 0U;
	int32_t t26 = 947;

	t26 = (((x1741<<x1742)%x1743)==x1744);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1781 = UINT16_MAX;
	volatile uint8_t x1782 = 2U;
	volatile uint8_t x1783 = 3U;
	int8_t x1784 = 1;
	int32_t t27 = 63;

	t27 = (((x1781<<x1782)%x1783)==x1784);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x1785 = INT16_MAX;
	volatile int16_t x1786 = 0;
	static int64_t x1787 = -1LL;
	volatile int32_t t28 = -4694238;

	t28 = (((x1785<<x1786)%x1787)==x1788);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x1901 = 0;
	volatile int32_t x1903 = INT32_MIN;
	int32_t x1904 = -1;
	int32_t t29 = -2472;

	t29 = (((x1901<<x1902)%x1903)==x1904);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1906 = 4;
	int32_t x1907 = INT32_MAX;
	int32_t t30 = -178921;

	t30 = (((x1905<<x1906)%x1907)==x1908);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1917 = 102986344424084LL;
	volatile uint64_t x1919 = 6631755LLU;
	static int32_t x1920 = -83260;

	t31 = (((x1917<<x1918)%x1919)==x1920);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1959 = -1890992;
	uint8_t x1960 = 79U;
	int32_t t32 = 224;

	t32 = (((x1957<<x1958)%x1959)==x1960);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x1981 = 14U;
	volatile int64_t x1983 = INT64_MIN;
	int64_t x1984 = 87026250487157LL;
	volatile int32_t t33 = -1795803;

	t33 = (((x1981<<x1982)%x1983)==x1984);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x2049 = UINT16_MAX;
	static uint16_t x2051 = UINT16_MAX;
	static int32_t x2052 = -3304;
	volatile int32_t t34 = 47331;

	t34 = (((x2049<<x2050)%x2051)==x2052);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x2105 = UINT64_MAX;
	uint16_t x2106 = 49U;
	volatile int32_t x2107 = 56168245;
	int32_t x2108 = INT32_MAX;

	t35 = (((x2105<<x2106)%x2107)==x2108);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x2138 = 5;
	uint8_t x2139 = 52U;
	uint32_t x2140 = 693U;
	static int32_t t36 = 3340129;

	t36 = (((x2137<<x2138)%x2139)==x2140);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x2217 = 18431643LLU;
	int32_t x2218 = 2;
	int16_t x2219 = INT16_MIN;
	volatile int32_t x2220 = INT32_MIN;

	t37 = (((x2217<<x2218)%x2219)==x2220);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x2253 = 48;
	static int16_t x2255 = INT16_MAX;
	int16_t x2256 = INT16_MAX;
	int32_t t38 = -36;

	t38 = (((x2253<<x2254)%x2255)==x2256);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x2265 = 1628U;
	volatile uint8_t x2267 = 6U;
	int64_t x2268 = INT64_MAX;
	volatile int32_t t39 = -13;

	t39 = (((x2265<<x2266)%x2267)==x2268);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2317 = INT8_MAX;
	static volatile uint64_t x2320 = 1LLU;
	static int32_t t40 = 69882;

	t40 = (((x2317<<x2318)%x2319)==x2320);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x2378 = 28U;
	int32_t x2379 = INT32_MAX;
	int32_t t41 = -1304794;

	t41 = (((x2377<<x2378)%x2379)==x2380);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x2429 = UINT8_MAX;
	int32_t x2430 = 13;
	static uint8_t x2431 = UINT8_MAX;
	uint16_t x2432 = 0U;

	t42 = (((x2429<<x2430)%x2431)==x2432);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x2485 = 1658061591U;
	int8_t x2486 = 0;
	int64_t x2487 = -1LL;
	uint64_t x2488 = UINT64_MAX;
	volatile int32_t t43 = 883;

	t43 = (((x2485<<x2486)%x2487)==x2488);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x2557 = 320LLU;
	static uint16_t x2558 = 2U;
	int32_t x2559 = INT32_MIN;
	int64_t x2560 = INT64_MIN;
	static volatile int32_t t44 = -20550;

	t44 = (((x2557<<x2558)%x2559)==x2560);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2578 = 11;
	int32_t x2580 = 1;
	static int32_t t45 = 3849;

	t45 = (((x2577<<x2578)%x2579)==x2580);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x2717 = 8142606LLU;
	int16_t x2718 = 62;
	static int64_t x2719 = -1LL;
	int32_t x2720 = INT32_MIN;
	int32_t t46 = -8165428;

	t46 = (((x2717<<x2718)%x2719)==x2720);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x2865 = 1;
	int8_t x2867 = INT8_MIN;
	int16_t x2868 = INT16_MIN;
	int32_t t47 = 291988353;

	t47 = (((x2865<<x2866)%x2867)==x2868);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x2869 = 1;
	static volatile uint16_t x2870 = 0U;
	int32_t x2871 = INT32_MIN;
	int32_t t48 = 712251;

	t48 = (((x2869<<x2870)%x2871)==x2872);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x2953 = UINT16_MAX;
	volatile uint8_t x2954 = 0U;
	volatile int64_t x2955 = INT64_MIN;
	uint8_t x2956 = 41U;
	int32_t t49 = -10;

	t49 = (((x2953<<x2954)%x2955)==x2956);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x2989 = 9874581U;
	volatile int16_t x2992 = INT16_MIN;
	int32_t t50 = -18173;

	t50 = (((x2989<<x2990)%x2991)==x2992);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x3042 = 1U;
	uint64_t x3043 = 19015660LLU;
	uint64_t x3044 = 175533030LLU;
	int32_t t51 = -5;

	t51 = (((x3041<<x3042)%x3043)==x3044);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int16_t x3093 = INT16_MAX;
	static uint8_t x3094 = 6U;
	int8_t x3095 = INT8_MIN;
	uint16_t x3096 = 104U;

	t52 = (((x3093<<x3094)%x3095)==x3096);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x3177 = INT8_MAX;
	static uint8_t x3178 = 5U;
	static volatile int64_t x3180 = INT64_MIN;
	static volatile int32_t t53 = -113834835;

	t53 = (((x3177<<x3178)%x3179)==x3180);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x3489 = INT16_MAX;
	uint64_t x3491 = UINT64_MAX;
	static int32_t x3492 = -1;
	volatile int32_t t54 = -5104;

	t54 = (((x3489<<x3490)%x3491)==x3492);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x3505 = 1128931U;
	int32_t x3507 = -8421343;

	t55 = (((x3505<<x3506)%x3507)==x3508);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x3641 = 2U;
	static volatile uint64_t x3642 = 30LLU;
	static uint8_t x3643 = 103U;
	uint32_t x3644 = UINT32_MAX;
	static int32_t t56 = 70090;

	t56 = (((x3641<<x3642)%x3643)==x3644);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x3685 = 21;
	uint8_t x3686 = 17U;
	uint64_t x3688 = 6LLU;
	int32_t t57 = 7190;

	t57 = (((x3685<<x3686)%x3687)==x3688);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x3785 = 6237U;
	volatile uint8_t x3786 = 2U;
	int32_t x3787 = 105041;
	static int32_t x3788 = 13;

	t58 = (((x3785<<x3786)%x3787)==x3788);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x3910 = 0;
	static uint16_t x3911 = 5379U;
	volatile int64_t x3912 = -1LL;
	volatile int32_t t59 = -10;

	t59 = (((x3909<<x3910)%x3911)==x3912);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x3989 = 1U;
	int16_t x3992 = -2;
	volatile int32_t t60 = 783;

	t60 = (((x3989<<x3990)%x3991)==x3992);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x4041 = UINT16_MAX;
	static uint16_t x4042 = 0U;
	volatile int32_t x4043 = INT32_MIN;
	volatile int32_t t61 = -13;

	t61 = (((x4041<<x4042)%x4043)==x4044);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x4105 = 0;
	volatile int32_t x4107 = INT32_MAX;
	static uint16_t x4108 = 1680U;
	volatile int32_t t62 = -225024;

	t62 = (((x4105<<x4106)%x4107)==x4108);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x4137 = 13090117758825LLU;
	volatile uint8_t x4138 = 29U;
	static int32_t x4139 = -2;
	int32_t t63 = 631;

	t63 = (((x4137<<x4138)%x4139)==x4140);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x4161 = INT8_MAX;
	int32_t x4162 = 2;
	static int8_t x4163 = -4;
	static int32_t t64 = -3691501;

	t64 = (((x4161<<x4162)%x4163)==x4164);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x4189 = UINT16_MAX;
	uint8_t x4190 = 5U;
	static volatile int16_t x4191 = 6346;

	t65 = (((x4189<<x4190)%x4191)==x4192);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x4318 = 0;
	static uint8_t x4319 = 50U;
	int64_t x4320 = -70273840107451449LL;

	t66 = (((x4317<<x4318)%x4319)==x4320);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x4413 = 25U;
	static volatile uint16_t x4414 = 0U;
	volatile int16_t x4415 = INT16_MAX;
	static volatile int16_t x4416 = INT16_MIN;
	int32_t t67 = 7;

	t67 = (((x4413<<x4414)%x4415)==x4416);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x4421 = 14156931679830LLU;
	volatile uint8_t x4422 = 6U;
	int8_t x4423 = -1;

	t68 = (((x4421<<x4422)%x4423)==x4424);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x4525 = 0U;
	uint8_t x4526 = 23U;
	uint32_t x4528 = 80162608U;
	volatile int32_t t69 = 33322;

	t69 = (((x4525<<x4526)%x4527)==x4528);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x4545 = INT64_MAX;
	volatile uint16_t x4546 = 0U;
	static volatile int32_t x4547 = INT32_MIN;
	int64_t x4548 = INT64_MIN;
	volatile int32_t t70 = -200978560;

	t70 = (((x4545<<x4546)%x4547)==x4548);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x4575 = 99;
	int64_t x4576 = INT64_MIN;
	static int32_t t71 = -20;

	t71 = (((x4573<<x4574)%x4575)==x4576);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x4613 = 0U;
	uint16_t x4614 = 2U;
	int32_t x4615 = -1;
	int32_t t72 = 15708425;

	t72 = (((x4613<<x4614)%x4615)==x4616);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x4705 = 759150LLU;
	int16_t x4707 = -1;
	volatile int64_t x4708 = -1LL;
	int32_t t73 = 97;

	t73 = (((x4705<<x4706)%x4707)==x4708);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x4754 = 0U;
	static int8_t x4755 = -1;

	t74 = (((x4753<<x4754)%x4755)==x4756);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x4901 = 1370364203192456LLU;
	static uint16_t x4902 = 51U;
	static uint16_t x4903 = UINT16_MAX;
	static int64_t x4904 = INT64_MIN;
	volatile int32_t t75 = -2;

	t75 = (((x4901<<x4902)%x4903)==x4904);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x4913 = 68U;
	uint8_t x4914 = 4U;
	int32_t x4915 = -1;

	t76 = (((x4913<<x4914)%x4915)==x4916);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int64_t x4921 = 599LL;

	t77 = (((x4921<<x4922)%x4923)==x4924);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x4929 = UINT32_MAX;
	volatile int8_t x4930 = 2;
	static uint16_t x4931 = UINT16_MAX;
	int8_t x4932 = -1;
	volatile int32_t t78 = -1255;

	t78 = (((x4929<<x4930)%x4931)==x4932);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x4965 = 12795497705LLU;
	uint16_t x4966 = 31U;
	static int16_t x4967 = -1;
	volatile int16_t x4968 = INT16_MIN;
	static int32_t t79 = -231;

	t79 = (((x4965<<x4966)%x4967)==x4968);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x5057 = 3U;
	uint16_t x5058 = 15U;
	uint64_t x5059 = UINT64_MAX;
	static volatile int16_t x5060 = INT16_MIN;
	static int32_t t80 = 454201;

	t80 = (((x5057<<x5058)%x5059)==x5060);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x5089 = 45;
	uint16_t x5090 = 2U;
	int16_t x5091 = 245;
	volatile uint32_t x5092 = 210925U;

	t81 = (((x5089<<x5090)%x5091)==x5092);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x5262 = 15U;
	int16_t x5263 = INT16_MAX;
	int32_t x5264 = 257002;
	int32_t t82 = 5;

	t82 = (((x5261<<x5262)%x5263)==x5264);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x5290 = 7U;
	uint8_t x5291 = 3U;
	int8_t x5292 = INT8_MIN;
	volatile int32_t t83 = 6062736;

	t83 = (((x5289<<x5290)%x5291)==x5292);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int8_t x5330 = 7;
	uint64_t x5331 = 7444171397531390722LLU;

	t84 = (((x5329<<x5330)%x5331)==x5332);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x5377 = 3;
	int8_t x5378 = 1;
	uint8_t x5379 = 108U;
	int32_t t85 = -73575958;

	t85 = (((x5377<<x5378)%x5379)==x5380);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x5397 = 8685846453717015LLU;
	int8_t x5400 = INT8_MAX;
	int32_t t86 = 12245;

	t86 = (((x5397<<x5398)%x5399)==x5400);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x5405 = 227;
	volatile uint8_t x5406 = 2U;
	int32_t x5407 = -169;
	volatile int16_t x5408 = -7105;
	volatile int32_t t87 = -1;

	t87 = (((x5405<<x5406)%x5407)==x5408);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x5453 = 46225LL;
	volatile uint32_t x5455 = 917U;
	volatile int32_t t88 = 5060946;

	t88 = (((x5453<<x5454)%x5455)==x5456);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x5565 = 20732163LL;
	int8_t x5566 = 5;
	static uint64_t x5567 = 41843LLU;
	volatile int32_t t89 = -151;

	t89 = (((x5565<<x5566)%x5567)==x5568);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x5745 = UINT64_MAX;
	int8_t x5746 = 21;
	int8_t x5747 = 16;
	uint32_t x5748 = 403436U;

	t90 = (((x5745<<x5746)%x5747)==x5748);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x6033 = INT8_MAX;
	int8_t x6034 = 0;
	volatile int32_t t91 = 94;

	t91 = (((x6033<<x6034)%x6035)==x6036);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x6041 = 26047664297972LLU;
	uint32_t x6042 = 7U;
	int64_t x6043 = INT64_MIN;
	int8_t x6044 = INT8_MAX;
	static volatile int32_t t92 = -6415;

	t92 = (((x6041<<x6042)%x6043)==x6044);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x6049 = INT16_MAX;
	volatile uint16_t x6050 = 5U;
	int16_t x6052 = -13;
	int32_t t93 = 22;

	t93 = (((x6049<<x6050)%x6051)==x6052);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x6133 = 13U;
	volatile int64_t x6135 = -1LL;
	uint32_t x6136 = UINT32_MAX;

	t94 = (((x6133<<x6134)%x6135)==x6136);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x6249 = 76;
	int16_t x6250 = 5;
	uint16_t x6252 = 2344U;
	volatile int32_t t95 = 12787958;

	t95 = (((x6249<<x6250)%x6251)==x6252);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x6269 = INT32_MAX;
	volatile uint64_t x6270 = 0LLU;
	int8_t x6271 = -1;
	volatile int32_t x6272 = 0;
	int32_t t96 = 1014;

	t96 = (((x6269<<x6270)%x6271)==x6272);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x6369 = 54240847307080098LLU;
	static uint8_t x6370 = 2U;
	static int8_t x6371 = INT8_MAX;
	int16_t x6372 = INT16_MIN;
	int32_t t97 = 1637;

	t97 = (((x6369<<x6370)%x6371)==x6372);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x6397 = INT16_MAX;
	uint16_t x6398 = 14U;
	uint16_t x6399 = UINT16_MAX;
	int64_t x6400 = 126087260LL;
	volatile int32_t t98 = 195;

	t98 = (((x6397<<x6398)%x6399)==x6400);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x6457 = 53733355U;
	int8_t x6459 = -1;
	int32_t t99 = 1285;

	t99 = (((x6457<<x6458)%x6459)==x6460);

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


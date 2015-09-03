#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x66 = UINT16_MAX;
volatile int64_t t1 = 297121546710537LL;
int32_t x135 = INT32_MAX;
static int32_t x341 = INT32_MIN;
volatile int64_t t6 = 876539LL;
volatile uint16_t x631 = 23909U;
static uint32_t x681 = 35679775U;
static uint64_t t14 = 7065365390329744266LLU;
int16_t x822 = -7;
int64_t x823 = INT64_MAX;
static volatile int64_t t17 = -684674756LL;
uint8_t x1052 = 0U;
int8_t x1137 = INT8_MAX;
int64_t x1139 = 33597691536002678LL;
volatile uint8_t x1146 = 42U;
uint64_t x1164 = 31LLU;
volatile uint32_t x1427 = 1577207U;
uint8_t x1956 = 2U;
uint16_t x1981 = 3584U;
uint16_t x2077 = UINT16_MAX;
uint16_t x2108 = 3U;
static uint16_t x2124 = 7U;
static volatile int64_t t34 = 398968950877346LL;
int16_t x2183 = 178;
volatile uint32_t t35 = 2880050U;
int64_t t36 = 333570767882LL;
int16_t x2249 = INT16_MIN;
volatile uint64_t x2251 = 121526203427LLU;
int8_t x2280 = 1;
int64_t x2386 = -178039329LL;
uint16_t x2388 = 10U;
static int64_t x2566 = -1LL;
int8_t x2572 = 0;
uint8_t x2634 = 8U;
int32_t x2686 = -1;
static uint8_t x2694 = 120U;
int64_t x2695 = 3918278LL;
static int32_t x2756 = 1;
static int8_t x2785 = -1;
uint64_t x2827 = UINT64_MAX;
volatile uint64_t t51 = 15994046011918446LLU;
static uint64_t t52 = 617514LLU;
volatile int8_t x3206 = INT8_MIN;
volatile uint8_t x3288 = 1U;
volatile uint64_t t54 = 987374447530577LLU;
int16_t x3337 = -1;
uint64_t x3395 = UINT64_MAX;
volatile uint64_t t56 = 34LLU;
volatile uint16_t x3462 = UINT16_MAX;
static volatile int64_t x3463 = 247619029127LL;
static uint64_t x3523 = UINT64_MAX;
uint32_t x3641 = 13U;
static uint32_t x3644 = 25U;
static int64_t x3658 = 79798975541LL;
static int64_t x3815 = 53019239248707LL;
int16_t x3818 = 509;
static uint32_t t63 = 2981U;
int16_t x3827 = 11948;
static uint8_t x3913 = 0U;
int16_t x3916 = 0;
static int8_t x3921 = INT8_MIN;
int16_t x3937 = -1;
volatile int64_t x3950 = -1LL;
int8_t x3952 = 1;
uint16_t x4008 = 14U;
uint64_t t71 = 462256939471LLU;
int32_t x4154 = -180;
int32_t x4385 = INT32_MIN;
static uint32_t x4592 = 16U;
volatile int64_t t75 = 1971482843132440695LL;
int16_t x4682 = -1927;
static int8_t x4683 = 37;
int64_t x4795 = INT64_MAX;
volatile int64_t x4897 = -1LL;
uint16_t x4899 = 1370U;
uint16_t x4900 = 6U;
uint32_t x4970 = 397671725U;
uint8_t x4971 = 3U;
volatile int32_t x5007 = 218759557;
int16_t x5019 = INT16_MAX;
volatile uint32_t x5105 = 4U;
int8_t x5106 = INT8_MIN;
uint16_t x5137 = 222U;
static int8_t x5140 = 2;
int16_t x5204 = 1;
static int32_t x5245 = -1;
volatile uint64_t x5246 = UINT64_MAX;
uint64_t x5288 = 3LLU;
volatile int32_t t88 = 123580610;
volatile int16_t x5633 = INT16_MIN;
volatile uint64_t t90 = 160LLU;
int16_t x5654 = INT16_MAX;
static uint16_t x5775 = UINT16_MAX;
volatile int16_t x5865 = 1;
volatile int8_t x5867 = INT8_MAX;
int32_t x5989 = INT32_MAX;
volatile int32_t x6043 = 87;
int8_t x6357 = 0;
static uint64_t x6359 = UINT64_MAX;
uint64_t t97 = 107431LLU;
uint16_t x6652 = 1U;


void f0(void) {
	int16_t x1 = -1128;
	int32_t x2 = 1;
	static uint32_t x3 = 297U;
	uint16_t x4 = 7U;
	uint32_t t0 = 18U;

	t0 = ((x1&x2)%(x3>>x4));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x65 = INT16_MIN;
	volatile int64_t x67 = INT64_MAX;
	uint8_t x68 = 45U;

	t1 = ((x65&x66)%(x67>>x68));

	if (t1 != 32768LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x133 = INT64_MIN;
	uint32_t x134 = 320U;
	uint8_t x136 = 27U;
	volatile int64_t t2 = -36441608190487567LL;

	t2 = ((x133&x134)%(x135>>x136));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x185 = 11U;
	int8_t x186 = INT8_MAX;
	int8_t x187 = 38;
	volatile uint16_t x188 = 4U;
	volatile int32_t t3 = -77561186;

	t3 = ((x185&x186)%(x187>>x188));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x342 = 154;
	uint32_t x343 = UINT32_MAX;
	int32_t x344 = 19;
	volatile uint32_t t4 = 7495U;

	t4 = ((x341&x342)%(x343>>x344));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x357 = -1LL;
	volatile uint64_t x358 = 8LLU;
	static uint32_t x359 = 188U;
	int16_t x360 = 0;
	static uint64_t t5 = 3579667116LLU;

	t5 = ((x357&x358)%(x359>>x360));

	if (t5 != 8LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x413 = INT32_MAX;
	int64_t x414 = INT64_MIN;
	int32_t x415 = 63193398;
	volatile uint16_t x416 = 3U;

	t6 = ((x413&x414)%(x415>>x416));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x433 = UINT32_MAX;
	volatile uint8_t x434 = UINT8_MAX;
	int32_t x435 = INT32_MAX;
	static uint8_t x436 = 14U;
	volatile uint32_t t7 = 2453U;

	t7 = ((x433&x434)%(x435>>x436));

	if (t7 != 255U) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x453 = UINT16_MAX;
	int16_t x454 = INT16_MAX;
	volatile int8_t x455 = 1;
	int16_t x456 = 0;
	int32_t t8 = 578;

	t8 = ((x453&x454)%(x455>>x456));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint64_t x465 = 73677755732LLU;
	int64_t x466 = 39177860756155790LL;
	static int64_t x467 = 2996940LL;
	volatile uint16_t x468 = 0U;
	volatile uint64_t t9 = 4231847395669LLU;

	t9 = ((x465&x466)%(x467>>x468));

	if (t9 != 2318088LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x577 = INT64_MAX;
	volatile int8_t x578 = -1;
	uint32_t x579 = 153590U;
	int8_t x580 = 4;
	volatile int64_t t10 = 842336LL;

	t10 = ((x577&x578)%(x579>>x580));

	if (t10 != 3317LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x629 = -1LL;
	static int16_t x630 = INT16_MAX;
	static int8_t x632 = 0;
	static volatile int64_t t11 = 16287540260408LL;

	t11 = ((x629&x630)%(x631>>x632));

	if (t11 != 8858LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x682 = 47;
	static uint16_t x683 = UINT16_MAX;
	int32_t x684 = 13;
	volatile uint32_t t12 = 10782684U;

	t12 = ((x681&x682)%(x683>>x684));

	if (t12 != 1U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x757 = -13;
	int64_t x758 = -1LL;
	static uint16_t x759 = UINT16_MAX;
	volatile uint16_t x760 = 8U;
	static volatile int64_t t13 = 670LL;

	t13 = ((x757&x758)%(x759>>x760));

	if (t13 != -13LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x773 = 6977U;
	int64_t x774 = INT64_MIN;
	static volatile uint64_t x775 = 26091921LLU;
	uint16_t x776 = 5U;

	t14 = ((x773&x774)%(x775>>x776));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x821 = UINT16_MAX;
	static uint16_t x824 = 16U;
	int64_t t15 = 1192880865464338LL;

	t15 = ((x821&x822)%(x823>>x824));

	if (t15 != 65529LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x833 = INT64_MIN;
	int32_t x834 = INT32_MIN;
	int64_t x835 = INT64_MAX;
	uint16_t x836 = 31U;
	int64_t t16 = 31521844LL;

	t16 = ((x833&x834)%(x835>>x836));

	if (t16 != -2147483648LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x933 = INT8_MAX;
	int64_t x934 = INT64_MIN;
	static int64_t x935 = 16628895999195LL;
	uint8_t x936 = 1U;

	t17 = ((x933&x934)%(x935>>x936));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x1049 = INT32_MIN;
	int64_t x1050 = -329809LL;
	static int64_t x1051 = 3050563453LL;
	int64_t t18 = -1LL;

	t18 = ((x1049&x1050)%(x1051>>x1052));

	if (t18 != -2147483648LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x1097 = INT8_MIN;
	int16_t x1098 = -1;
	int32_t x1099 = INT32_MAX;
	uint16_t x1100 = 0U;
	volatile int32_t t19 = -377293185;

	t19 = ((x1097&x1098)%(x1099>>x1100));

	if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1138 = -1;
	uint8_t x1140 = 0U;
	static volatile int64_t t20 = -161542LL;

	t20 = ((x1137&x1138)%(x1139>>x1140));

	if (t20 != 127LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x1145 = -1LL;
	uint8_t x1147 = 16U;
	int32_t x1148 = 0;
	int64_t t21 = -25556284998467284LL;

	t21 = ((x1145&x1146)%(x1147>>x1148));

	if (t21 != 10LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x1161 = 76U;
	int16_t x1162 = INT16_MIN;
	uint32_t x1163 = UINT32_MAX;
	volatile uint32_t t22 = 124U;

	t22 = ((x1161&x1162)%(x1163>>x1164));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1393 = INT16_MIN;
	int64_t x1394 = INT64_MIN;
	static int32_t x1395 = 19301117;
	static volatile uint8_t x1396 = 6U;
	int64_t t23 = -1771434379988198800LL;

	t23 = ((x1393&x1394)%(x1395>>x1396));

	if (t23 != -162884LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1425 = INT64_MAX;
	uint8_t x1426 = 51U;
	volatile int16_t x1428 = 1;
	int64_t t24 = 110LL;

	t24 = ((x1425&x1426)%(x1427>>x1428));

	if (t24 != 51LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x1489 = INT8_MIN;
	int8_t x1490 = 1;
	int32_t x1491 = 15;
	static uint8_t x1492 = 3U;
	static volatile int32_t t25 = -1637192;

	t25 = ((x1489&x1490)%(x1491>>x1492));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x1585 = -35140975;
	static uint16_t x1586 = 195U;
	uint16_t x1587 = UINT16_MAX;
	volatile uint8_t x1588 = 15U;
	int32_t t26 = -69057;

	t26 = ((x1585&x1586)%(x1587>>x1588));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1821 = UINT64_MAX;
	int16_t x1822 = -1;
	volatile int64_t x1823 = INT64_MAX;
	int16_t x1824 = 29;
	volatile uint64_t t27 = 265955314481451LLU;

	t27 = ((x1821&x1822)%(x1823>>x1824));

	if (t27 != 1073741823LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1921 = INT64_MIN;
	int32_t x1922 = INT32_MIN;
	uint32_t x1923 = UINT32_MAX;
	int64_t x1924 = 1LL;
	static volatile int64_t t28 = 9723LL;

	t28 = ((x1921&x1922)%(x1923>>x1924));

	if (t28 != -2LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1937 = INT8_MAX;
	int64_t x1938 = -6873790718414754LL;
	volatile uint64_t x1939 = 209154LLU;
	int8_t x1940 = 9;
	volatile uint64_t t29 = 2558214LLU;

	t29 = ((x1937&x1938)%(x1939>>x1940));

	if (t29 != 94LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1953 = 37;
	uint8_t x1954 = 40U;
	uint32_t x1955 = 7709818U;
	volatile uint32_t t30 = 1796731U;

	t30 = ((x1953&x1954)%(x1955>>x1956));

	if (t30 != 32U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1982 = -927;
	static int64_t x1983 = INT64_MAX;
	uint16_t x1984 = 58U;
	volatile int64_t t31 = 12628137837LL;

	t31 = ((x1981&x1982)%(x1983>>x1984));

	if (t31 != 3LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x2078 = INT64_MIN;
	uint16_t x2079 = UINT16_MAX;
	int8_t x2080 = 7;
	volatile int64_t t32 = 15792LL;

	t32 = ((x2077&x2078)%(x2079>>x2080));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x2105 = -1305;
	uint16_t x2106 = 1U;
	int16_t x2107 = INT16_MAX;
	int32_t t33 = -157;

	t33 = ((x2105&x2106)%(x2107>>x2108));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x2121 = -85819558197LL;
	static uint16_t x2122 = 2U;
	uint32_t x2123 = UINT32_MAX;

	t34 = ((x2121&x2122)%(x2123>>x2124));

	if (t34 != 2LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x2181 = -216552376;
	uint32_t x2182 = 800662040U;
	int8_t x2184 = 1;

	t35 = ((x2181&x2182)%(x2183>>x2184));

	if (t35 != 73U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x2245 = INT64_MIN;
	int64_t x2246 = INT64_MIN;
	int64_t x2247 = INT64_MAX;
	static volatile uint8_t x2248 = 7U;

	t36 = ((x2245&x2246)%(x2247>>x2248));

	if (t36 != -128LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x2250 = UINT8_MAX;
	static int64_t x2252 = 1LL;
	volatile uint64_t t37 = 5006679LLU;

	t37 = ((x2249&x2250)%(x2251>>x2252));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x2277 = 23585U;
	int32_t x2278 = INT32_MIN;
	uint64_t x2279 = UINT64_MAX;
	static uint64_t t38 = 45297956770LLU;

	t38 = ((x2277&x2278)%(x2279>>x2280));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x2309 = INT32_MIN;
	volatile int64_t x2310 = -1LL;
	static uint8_t x2311 = 27U;
	int8_t x2312 = 1;
	volatile int64_t t39 = 653952922LL;

	t39 = ((x2309&x2310)%(x2311>>x2312));

	if (t39 != -11LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x2341 = 532833LLU;
	uint8_t x2342 = 1U;
	int64_t x2343 = 6845826875LL;
	volatile uint8_t x2344 = 25U;
	volatile uint64_t t40 = 33524176LLU;

	t40 = ((x2341&x2342)%(x2343>>x2344));

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x2385 = INT16_MIN;
	uint32_t x2387 = 3861686U;
	int64_t t41 = -4LL;

	t41 = ((x2385&x2386)%(x2387>>x2388));

	if (t41 != -2234LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x2513 = INT32_MAX;
	uint64_t x2514 = UINT64_MAX;
	int32_t x2515 = INT32_MAX;
	uint8_t x2516 = 1U;
	static uint64_t t42 = 2000LLU;

	t42 = ((x2513&x2514)%(x2515>>x2516));

	if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x2565 = INT32_MAX;
	static int64_t x2567 = INT64_MAX;
	uint16_t x2568 = 5U;
	int64_t t43 = 0LL;

	t43 = ((x2565&x2566)%(x2567>>x2568));

	if (t43 != 2147483647LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x2569 = INT64_MIN;
	volatile uint64_t x2570 = 12838034918075996LLU;
	uint16_t x2571 = 3U;
	uint64_t t44 = 6LLU;

	t44 = ((x2569&x2570)%(x2571>>x2572));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x2633 = INT32_MIN;
	uint64_t x2635 = UINT64_MAX;
	uint16_t x2636 = 5U;
	uint64_t t45 = 157160179144LLU;

	t45 = ((x2633&x2634)%(x2635>>x2636));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x2685 = INT64_MIN;
	static int32_t x2687 = INT32_MAX;
	volatile uint16_t x2688 = 5U;
	static volatile int64_t t46 = -97LL;

	t46 = ((x2685&x2686)%(x2687>>x2688));

	if (t46 != -2048LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x2693 = 12212498U;
	uint32_t x2696 = 14U;
	int64_t t47 = 2205176777LL;

	t47 = ((x2693&x2694)%(x2695>>x2696));

	if (t47 != 16LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x2753 = INT16_MIN;
	int64_t x2754 = INT64_MAX;
	uint8_t x2755 = UINT8_MAX;
	volatile int64_t t48 = -286997LL;

	t48 = ((x2753&x2754)%(x2755>>x2756));

	if (t48 != 126LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x2786 = INT32_MIN;
	int8_t x2787 = INT8_MAX;
	uint32_t x2788 = 0U;
	static int32_t t49 = -332;

	t49 = ((x2785&x2786)%(x2787>>x2788));

	if (t49 != -8) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x2825 = UINT32_MAX;
	static int8_t x2826 = 0;
	static uint32_t x2828 = 1U;
	volatile uint64_t t50 = 1596502LLU;

	t50 = ((x2825&x2826)%(x2827>>x2828));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x2977 = -2LL;
	static uint64_t x2978 = 317LLU;
	static uint64_t x2979 = 785LLU;
	uint32_t x2980 = 1U;

	t51 = ((x2977&x2978)%(x2979>>x2980));

	if (t51 != 316LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x3025 = 11451LLU;
	uint16_t x3026 = UINT16_MAX;
	uint64_t x3027 = UINT64_MAX;
	uint16_t x3028 = 5U;

	t52 = ((x3025&x3026)%(x3027>>x3028));

	if (t52 != 11451LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x3205 = INT16_MIN;
	int32_t x3207 = 54534511;
	int16_t x3208 = 1;
	volatile int32_t t53 = -4283;

	t53 = ((x3205&x3206)%(x3207>>x3208));

	if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x3285 = INT64_MIN;
	static volatile int64_t x3286 = -138LL;
	uint64_t x3287 = 6829213LLU;

	t54 = ((x3285&x3286)%(x3287>>x3288));

	if (t54 != 510986LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x3338 = -1;
	uint64_t x3339 = 109227LLU;
	uint8_t x3340 = 14U;
	uint64_t t55 = 215LLU;

	t55 = ((x3337&x3338)%(x3339>>x3340));

	if (t55 != 3LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x3393 = INT16_MIN;
	uint8_t x3394 = UINT8_MAX;
	volatile uint16_t x3396 = 1U;

	t56 = ((x3393&x3394)%(x3395>>x3396));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x3461 = INT64_MIN;
	static uint8_t x3464 = 0U;
	volatile int64_t t57 = -43LL;

	t57 = ((x3461&x3462)%(x3463>>x3464));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x3521 = UINT64_MAX;
	static int8_t x3522 = INT8_MIN;
	uint8_t x3524 = 0U;
	static volatile uint64_t t58 = 18550823LLU;

	t58 = ((x3521&x3522)%(x3523>>x3524));

	if (t58 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x3642 = 55;
	uint64_t x3643 = UINT64_MAX;
	uint64_t t59 = 0LLU;

	t59 = ((x3641&x3642)%(x3643>>x3644));

	if (t59 != 5LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x3657 = 0;
	int64_t x3659 = 1216258568051LL;
	uint32_t x3660 = 0U;
	volatile int64_t t60 = 584839565319LL;

	t60 = ((x3657&x3658)%(x3659>>x3660));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x3733 = 6622U;
	static int32_t x3734 = INT32_MAX;
	volatile uint64_t x3735 = 1448256862LLU;
	volatile uint8_t x3736 = 16U;
	volatile uint64_t t61 = 24118220LLU;

	t61 = ((x3733&x3734)%(x3735>>x3736));

	if (t61 != 6622LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x3813 = -1;
	int8_t x3814 = INT8_MIN;
	uint16_t x3816 = 1U;
	volatile int64_t t62 = -160391780567LL;

	t62 = ((x3813&x3814)%(x3815>>x3816));

	if (t62 != -128LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x3817 = 183U;
	static uint32_t x3819 = 28584U;
	static int8_t x3820 = 0;

	t63 = ((x3817&x3818)%(x3819>>x3820));

	if (t63 != 181U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x3825 = 0;
	static int16_t x3826 = INT16_MAX;
	uint16_t x3828 = 3U;
	int32_t t64 = 253084;

	t64 = ((x3825&x3826)%(x3827>>x3828));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x3914 = UINT8_MAX;
	static uint8_t x3915 = 46U;
	volatile int32_t t65 = 3486957;

	t65 = ((x3913&x3914)%(x3915>>x3916));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x3922 = -1LL;
	static uint64_t x3923 = UINT64_MAX;
	volatile uint64_t x3924 = 4LLU;
	static volatile uint64_t t66 = 3923161683LLU;

	t66 = ((x3921&x3922)%(x3923>>x3924));

	if (t66 != 1152921504606846863LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x3938 = -1LL;
	int8_t x3939 = INT8_MAX;
	static uint32_t x3940 = 6U;
	int64_t t67 = -4LL;

	t67 = ((x3937&x3938)%(x3939>>x3940));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int8_t x3941 = INT8_MIN;
	int32_t x3942 = -93;
	static uint8_t x3943 = 31U;
	uint8_t x3944 = 1U;
	static int32_t t68 = -1654154;

	t68 = ((x3941&x3942)%(x3943>>x3944));

	if (t68 != -8) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x3949 = 2066706046U;
	uint32_t x3951 = 130U;
	int64_t t69 = 467679468LL;

	t69 = ((x3949&x3950)%(x3951>>x3952));

	if (t69 != 41LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x3953 = UINT32_MAX;
	uint32_t x3954 = 5457171U;
	volatile int16_t x3955 = 273;
	uint16_t x3956 = 7U;
	volatile uint32_t t70 = 1838391U;

	t70 = ((x3953&x3954)%(x3955>>x3956));

	if (t70 != 1U) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x4005 = 362226850308LLU;
	static volatile uint16_t x4006 = 167U;
	static uint32_t x4007 = UINT32_MAX;

	t71 = ((x4005&x4006)%(x4007>>x4008));

	if (t71 != 4LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x4153 = 7482579271LLU;
	uint64_t x4155 = 1595273LLU;
	int64_t x4156 = 3LL;
	uint64_t t72 = 0LLU;

	t72 = ((x4153&x4154)%(x4155>>x4156));

	if (t72 != 155361LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x4386 = INT16_MAX;
	uint64_t x4387 = 4002174898081LLU;
	volatile int16_t x4388 = 1;
	volatile uint64_t t73 = 2394875193403052751LLU;

	t73 = ((x4385&x4386)%(x4387>>x4388));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x4509 = INT16_MAX;
	int64_t x4510 = INT64_MAX;
	uint32_t x4511 = UINT32_MAX;
	uint16_t x4512 = 13U;
	volatile int64_t t74 = -14129720312842LL;

	t74 = ((x4509&x4510)%(x4511>>x4512));

	if (t74 != 32767LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x4589 = -1;
	int8_t x4590 = -1;
	volatile int64_t x4591 = INT64_MAX;

	t75 = ((x4589&x4590)%(x4591>>x4592));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int32_t x4645 = INT32_MIN;
	static int16_t x4646 = INT16_MAX;
	volatile uint16_t x4647 = UINT16_MAX;
	int8_t x4648 = 0;
	int32_t t76 = 26253673;

	t76 = ((x4645&x4646)%(x4647>>x4648));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x4681 = INT8_MIN;
	volatile int16_t x4684 = 0;
	int32_t t77 = -449999251;

	t77 = ((x4681&x4682)%(x4683>>x4684));

	if (t77 != -13) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x4793 = -1LL;
	static int16_t x4794 = -14;
	volatile uint8_t x4796 = 39U;
	volatile int64_t t78 = -7947245479873LL;

	t78 = ((x4793&x4794)%(x4795>>x4796));

	if (t78 != -14LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x4898 = -1;
	int64_t t79 = -84522548803929LL;

	t79 = ((x4897&x4898)%(x4899>>x4900));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x4969 = INT32_MIN;
	static uint8_t x4972 = 1U;
	volatile uint32_t t80 = 21823733U;

	t80 = ((x4969&x4970)%(x4971>>x4972));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x4997 = INT8_MIN;
	int64_t x4998 = 161337494663826378LL;
	int16_t x4999 = INT16_MAX;
	int64_t x5000 = 3LL;
	volatile int64_t t81 = 1457005686586LL;

	t81 = ((x4997&x4998)%(x4999>>x5000));

	if (t81 != 4009LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x5005 = UINT32_MAX;
	int8_t x5006 = -1;
	static int8_t x5008 = 0;
	uint32_t t82 = 18U;

	t82 = ((x5005&x5006)%(x5007>>x5008));

	if (t82 != 138535712U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x5017 = 966072594508373278LLU;
	uint8_t x5018 = 9U;
	volatile uint16_t x5020 = 3U;
	uint64_t t83 = 880LLU;

	t83 = ((x5017&x5018)%(x5019>>x5020));

	if (t83 != 8LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x5107 = UINT64_MAX;
	uint8_t x5108 = 1U;
	static uint64_t t84 = 113972911LLU;

	t84 = ((x5105&x5106)%(x5107>>x5108));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x5138 = -1;
	uint16_t x5139 = 4168U;
	volatile int32_t t85 = 125549565;

	t85 = ((x5137&x5138)%(x5139>>x5140));

	if (t85 != 222) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x5201 = -1;
	int64_t x5202 = INT64_MIN;
	uint8_t x5203 = 2U;
	volatile int64_t t86 = 16267244676653493LL;

	t86 = ((x5201&x5202)%(x5203>>x5204));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x5247 = 69396;
	uint8_t x5248 = 12U;
	volatile uint64_t t87 = 2LLU;

	t87 = ((x5245&x5246)%(x5247>>x5248));

	if (t87 != 15LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x5285 = INT32_MAX;
	static volatile int8_t x5286 = -37;
	uint8_t x5287 = 103U;

	t88 = ((x5285&x5286)%(x5287>>x5288));

	if (t88 != 7) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x5477 = 7U;
	static uint8_t x5478 = 29U;
	int16_t x5479 = 153;
	uint8_t x5480 = 3U;
	static volatile int32_t t89 = 6601292;

	t89 = ((x5477&x5478)%(x5479>>x5480));

	if (t89 != 5) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x5634 = 13934800LLU;
	int16_t x5635 = 4596;
	int16_t x5636 = 6;

	t90 = ((x5633&x5634)%(x5635>>x5636));

	if (t90 != 34LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x5653 = 139210715137LL;
	uint64_t x5655 = UINT64_MAX;
	uint8_t x5656 = 27U;
	static volatile uint64_t t91 = 74704399133542039LLU;

	t91 = ((x5653&x5654)%(x5655>>x5656));

	if (t91 != 28673LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x5773 = UINT8_MAX;
	int32_t x5774 = -1;
	uint8_t x5776 = 5U;
	volatile int32_t t92 = -52495;

	t92 = ((x5773&x5774)%(x5775>>x5776));

	if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x5866 = -1LL;
	uint8_t x5868 = 3U;
	int64_t t93 = -341906009662141362LL;

	t93 = ((x5865&x5866)%(x5867>>x5868));

	if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x5990 = 1893273810980809238LL;
	uint16_t x5991 = 25440U;
	uint32_t x5992 = 1U;
	volatile int64_t t94 = -45LL;

	t94 = ((x5989&x5990)%(x5991>>x5992));

	if (t94 != 6198LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x6041 = INT32_MIN;
	int8_t x6042 = -3;
	uint16_t x6044 = 1U;
	int32_t t95 = 909;

	t95 = ((x6041&x6042)%(x6043>>x6044));

	if (t95 != -8) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x6217 = INT8_MIN;
	volatile uint32_t x6218 = 30559281U;
	int32_t x6219 = 53915;
	static volatile uint8_t x6220 = 3U;
	uint32_t t96 = 224359U;

	t96 = ((x6217&x6218)%(x6219>>x6220));

	if (t96 != 4606U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x6358 = -13;
	static int32_t x6360 = 29;

	t97 = ((x6357&x6358)%(x6359>>x6360));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x6549 = -1;
	int16_t x6550 = 9685;
	int8_t x6551 = INT8_MAX;
	int64_t x6552 = 3LL;
	volatile int32_t t98 = -35791621;

	t98 = ((x6549&x6550)%(x6551>>x6552));

	if (t98 != 10) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x6649 = 6284U;
	static int32_t x6650 = INT32_MIN;
	uint32_t x6651 = 3U;
	volatile uint32_t t99 = 2597U;

	t99 = ((x6649&x6650)%(x6651>>x6652));

	if (t99 != 0U) { NG(); } else { ; }
	
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


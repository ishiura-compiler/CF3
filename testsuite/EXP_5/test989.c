#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t t0 = -11405683;
static int64_t x129 = -17374383304228LL;
int8_t x131 = 0;
static volatile uint64_t t1 = 302236473LLU;
int8_t x173 = INT8_MIN;
int64_t x174 = 2165798132366LL;
volatile int8_t x176 = INT8_MIN;
volatile int8_t x237 = -27;
uint8_t x239 = 0U;
int16_t x240 = INT16_MIN;
static uint32_t x462 = UINT32_MAX;
volatile int8_t x519 = 28;
uint8_t x614 = 0U;
uint8_t x651 = 30U;
int64_t x664 = -13784439LL;
static int64_t t12 = 7347191307LL;
volatile uint16_t x843 = 17U;
int32_t x922 = 665671;
uint8_t x999 = 0U;
int16_t x1079 = 0;
int16_t x1080 = -27;
uint8_t x1203 = 28U;
static uint32_t x1204 = 195310U;
uint16_t x1282 = 128U;
volatile uint32_t x1284 = UINT32_MAX;
int16_t x1375 = 6;
static volatile int32_t t27 = -8056;
int64_t x1414 = 7005372751116LL;
volatile int32_t x1443 = 1;
int64_t t30 = 142559415865409LL;
volatile uint16_t x1811 = 23U;
volatile uint8_t x1835 = 27U;
uint16_t x1933 = 19181U;
static volatile uint8_t x1935 = 0U;
volatile uint64_t t34 = 288652409815935091LLU;
int16_t x1949 = INT16_MIN;
static int64_t t35 = -3551682LL;
uint64_t t36 = 778392544531LLU;
static uint32_t x2040 = 1930938620U;
int64_t t38 = -1496315LL;
static volatile int8_t x2191 = 0;
int8_t x2284 = INT8_MIN;
int8_t x2538 = 15;
static volatile int16_t x2553 = INT16_MIN;
volatile uint64_t x2658 = 14LLU;
uint8_t x3007 = 3U;
uint32_t x3008 = 1U;
int8_t x3025 = INT8_MIN;
static int16_t x3109 = INT16_MAX;
int8_t x3111 = 5;
volatile uint8_t x3279 = 1U;
volatile int32_t t54 = -2;
volatile int64_t t55 = 72104787LL;
int16_t x3658 = INT16_MAX;
uint32_t x3659 = 0U;
int32_t x3660 = -4727856;
uint64_t x3750 = UINT64_MAX;
volatile int8_t x3753 = -1;
uint32_t x3756 = 5020778U;
static uint32_t t60 = 2U;
uint64_t x3778 = 0LLU;
volatile uint16_t x3779 = 8U;
volatile uint64_t t61 = 157494LLU;
uint32_t x3783 = 0U;
int16_t x3789 = -1;
uint8_t x3790 = UINT8_MAX;
static int8_t x3811 = 3;
static int64_t t64 = -1LL;
uint8_t x3842 = 67U;
volatile uint8_t x3843 = 20U;
int32_t x3844 = INT32_MIN;
uint64_t x3904 = UINT64_MAX;
static uint16_t x4051 = 0U;
uint32_t x4170 = 1U;
uint64_t t71 = 1016008211356478LLU;
uint64_t t72 = 256300221684LLU;
static volatile uint64_t t73 = 21LLU;
int64_t x4304 = INT64_MIN;
int16_t x4317 = 1817;
int8_t x4318 = INT8_MAX;
uint32_t x4332 = 0U;
uint32_t t78 = 2U;
uint8_t x4355 = 9U;
uint64_t x4483 = 0LLU;
volatile int8_t x4564 = INT8_MIN;
int32_t x4665 = -1;
static volatile int32_t t84 = 253161028;
volatile uint32_t t85 = 14244158U;
volatile int32_t x4830 = 100341067;
int8_t x4839 = 1;
volatile uint16_t x4869 = UINT16_MAX;
volatile uint32_t x4871 = 0U;
static int8_t x5127 = 7;
int64_t x5128 = INT64_MIN;
uint32_t x5171 = 5U;
int64_t t91 = -509706LL;
uint64_t t93 = 5421076239145142105LLU;
uint32_t x5394 = UINT32_MAX;
volatile int8_t x5395 = 2;
volatile uint8_t x5454 = UINT8_MAX;
uint8_t x5695 = 0U;
volatile uint64_t x5909 = 3159426LLU;


void f0(void) {
	uint8_t x69 = 6U;
	static uint16_t x70 = UINT16_MAX;
	uint64_t x71 = 12LLU;
	int32_t x72 = -1;

	t0 = (x69+((x70<<x71)|x72));

	if (t0 != 5) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x130 = UINT64_MAX;
	int16_t x132 = INT16_MAX;

	t1 = (x129+((x130<<x131)|x132));

	if (t1 != 18446726699326247387LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x165 = INT64_MIN;
	int8_t x166 = 0;
	uint32_t x167 = 10U;
	int64_t x168 = INT64_MAX;
	static volatile int64_t t2 = -33901832353LL;

	t2 = (x165+((x166<<x167)|x168));

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x175 = 15;
	volatile int64_t t3 = 248LL;

	t3 = (x173+((x174<<x175)|x176));

	if (t3 != -256LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x205 = INT32_MIN;
	static uint64_t x206 = 4489315064LLU;
	int8_t x207 = 0;
	uint64_t x208 = 92LLU;
	static uint64_t t4 = 88781388046866LLU;

	t4 = (x205+((x206<<x207)|x208));

	if (t4 != 2341831420LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x238 = 1990628829U;
	uint32_t t5 = 15218855U;

	t5 = (x237+((x238<<x239)|x240));

	if (t5 != 4294940098U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x277 = INT32_MIN;
	uint32_t x278 = 2028U;
	uint8_t x279 = 0U;
	int64_t x280 = -1031211033841LL;
	volatile int64_t t6 = -24255188624948627LL;

	t6 = (x277+((x278<<x279)|x280));

	if (t6 != -1033358516241LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x461 = UINT16_MAX;
	volatile uint8_t x463 = 1U;
	uint32_t x464 = 10U;
	uint32_t t7 = 54109569U;

	t7 = (x461+((x462<<x463)|x464));

	if (t7 != 65533U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x517 = INT8_MAX;
	volatile uint64_t x518 = 96898176861505880LLU;
	int64_t x520 = INT64_MIN;
	uint64_t t8 = 7LLU;

	t8 = (x517+((x518<<x519)|x520));

	if (t8 != 10246648568504909951LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x549 = INT16_MIN;
	int64_t x550 = 20048693528171LL;
	uint16_t x551 = 13U;
	int8_t x552 = -8;
	volatile int64_t t9 = 88376070097600LL;

	t9 = (x549+((x550<<x551)|x552));

	if (t9 != -32776LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x613 = INT16_MIN;
	int16_t x615 = 1;
	static int64_t x616 = INT64_MAX;
	int64_t t10 = 130LL;

	t10 = (x613+((x614<<x615)|x616));

	if (t10 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x649 = -1205;
	uint64_t x650 = UINT64_MAX;
	static uint32_t x652 = 1U;
	uint64_t t11 = 0LLU;

	t11 = (x649+((x650<<x651)|x652));

	if (t11 != 18446744072635808588LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x661 = 73445U;
	uint32_t x662 = 674574138U;
	int16_t x663 = 1;

	t12 = (x661+((x662<<x663)|x664));

	if (t12 != -9363998LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x685 = 96U;
	uint8_t x686 = UINT8_MAX;
	int8_t x687 = 4;
	uint8_t x688 = 25U;
	int32_t t13 = -13;

	t13 = (x685+((x686<<x687)|x688));

	if (t13 != 4185) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x693 = 403U;
	int16_t x694 = 9866;
	uint8_t x695 = 6U;
	uint16_t x696 = 1U;
	uint32_t t14 = 682U;

	t14 = (x693+((x694<<x695)|x696));

	if (t14 != 631828U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x705 = -1LL;
	static uint64_t x706 = 695401537LLU;
	volatile int32_t x707 = 1;
	static uint8_t x708 = 0U;
	uint64_t t15 = 104248660826503LLU;

	t15 = (x705+((x706<<x707)|x708));

	if (t15 != 1390803073LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x733 = -1;
	uint8_t x734 = UINT8_MAX;
	volatile uint8_t x735 = 1U;
	uint32_t x736 = UINT32_MAX;
	static uint32_t t16 = 15U;

	t16 = (x733+((x734<<x735)|x736));

	if (t16 != 4294967294U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x761 = INT64_MIN;
	volatile uint64_t x762 = 1272557LLU;
	uint8_t x763 = 2U;
	int8_t x764 = INT8_MIN;
	volatile uint64_t t17 = 20309906975LLU;

	t17 = (x761+((x762<<x763)|x764));

	if (t17 != 9223372036854775732LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x841 = INT8_MIN;
	uint8_t x842 = 3U;
	int64_t x844 = -7241835446LL;
	int64_t t18 = -28969LL;

	t18 = (x841+((x842<<x843)|x844));

	if (t18 != -7241573430LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x909 = UINT32_MAX;
	volatile uint8_t x910 = 8U;
	uint8_t x911 = 23U;
	static int8_t x912 = INT8_MAX;
	static uint32_t t19 = 233U;

	t19 = (x909+((x910<<x911)|x912));

	if (t19 != 67108990U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x921 = 39U;
	uint8_t x923 = 3U;
	int64_t x924 = -1LL;
	int64_t t20 = 94457379085530LL;

	t20 = (x921+((x922<<x923)|x924));

	if (t20 != 38LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x977 = -1;
	uint16_t x978 = 3548U;
	volatile uint16_t x979 = 13U;
	volatile int64_t x980 = INT64_MIN;
	volatile int64_t t21 = 30139345619948717LL;

	t21 = (x977+((x978<<x979)|x980));

	if (t21 != -9223372036825710593LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x997 = UINT32_MAX;
	volatile uint32_t x998 = 357U;
	static uint64_t x1000 = 6054LLU;
	uint64_t t22 = 546518142LLU;

	t22 = (x997+((x998<<x999)|x1000));

	if (t22 != 4294973414LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x1077 = UINT8_MAX;
	volatile uint8_t x1078 = 9U;
	int32_t t23 = -40383138;

	t23 = (x1077+((x1078<<x1079)|x1080));

	if (t23 != 236) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1201 = 1629LL;
	volatile int64_t x1202 = 835996LL;
	int64_t t24 = -64LL;

	t24 = (x1201+((x1202<<x1203)|x1204));

	if (t24 != 224410967671115LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x1233 = 1LLU;
	uint64_t x1234 = 66303109096303LLU;
	volatile uint16_t x1235 = 0U;
	int32_t x1236 = 781514240;
	volatile uint64_t t25 = 42LLU;

	t25 = (x1233+((x1234<<x1235)|x1236));

	if (t25 != 66303286572912LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x1281 = 3;
	static volatile uint8_t x1283 = 2U;
	static volatile uint32_t t26 = 408569094U;

	t26 = (x1281+((x1282<<x1283)|x1284));

	if (t26 != 2U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x1373 = INT8_MAX;
	static int16_t x1374 = 2845;
	int32_t x1376 = INT32_MIN;

	t27 = (x1373+((x1374<<x1375)|x1376));

	if (t27 != -2147301441) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x1413 = 1092704U;
	uint8_t x1415 = 11U;
	int16_t x1416 = -5;
	volatile int64_t t28 = 174094150380741LL;

	t28 = (x1413+((x1414<<x1415)|x1416));

	if (t28 != 1092699LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x1441 = 1;
	int8_t x1442 = INT8_MAX;
	int8_t x1444 = -38;
	int32_t t29 = 343033652;

	t29 = (x1441+((x1442<<x1443)|x1444));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1661 = INT64_MAX;
	int8_t x1662 = 0;
	int8_t x1663 = 31;
	static int32_t x1664 = -1;

	t30 = (x1661+((x1662<<x1663)|x1664));

	if (t30 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1809 = -1LL;
	uint64_t x1810 = UINT64_MAX;
	uint64_t x1812 = UINT64_MAX;
	uint64_t t31 = 96999633993LLU;

	t31 = (x1809+((x1810<<x1811)|x1812));

	if (t31 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x1833 = 1415729613106142LLU;
	uint64_t x1834 = 610LLU;
	uint64_t x1836 = UINT64_MAX;
	volatile uint64_t t32 = 483LLU;

	t32 = (x1833+((x1834<<x1835)|x1836));

	if (t32 != 1415729613106141LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x1929 = INT16_MIN;
	uint64_t x1930 = UINT64_MAX;
	int8_t x1931 = 8;
	int32_t x1932 = INT32_MIN;
	uint64_t t33 = 51719LLU;

	t33 = (x1929+((x1930<<x1931)|x1932));

	if (t33 != 18446744073709518592LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x1934 = 32399LLU;
	uint16_t x1936 = 10U;

	t34 = (x1933+((x1934<<x1935)|x1936));

	if (t34 != 51580LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x1950 = INT64_MAX;
	static int8_t x1951 = 0;
	static volatile int32_t x1952 = INT32_MIN;

	t35 = (x1949+((x1950<<x1951)|x1952));

	if (t35 != -32769LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x2033 = INT8_MAX;
	uint64_t x2034 = 16000255LLU;
	static int8_t x2035 = 0;
	static int32_t x2036 = -25;

	t36 = (x2033+((x2034<<x2035)|x2036));

	if (t36 != 126LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x2037 = -1;
	uint32_t x2038 = 6U;
	static int32_t x2039 = 0;
	uint32_t t37 = 103365661U;

	t37 = (x2037+((x2038<<x2039)|x2040));

	if (t37 != 1930938621U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2093 = INT16_MIN;
	volatile uint16_t x2094 = 0U;
	uint8_t x2095 = 1U;
	int64_t x2096 = 3157928490382804LL;

	t38 = (x2093+((x2094<<x2095)|x2096));

	if (t38 != 3157928490350036LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x2189 = 1141;
	uint64_t x2190 = 136863LLU;
	static int32_t x2192 = INT32_MAX;
	static uint64_t t39 = 131183233218LLU;

	t39 = (x2189+((x2190<<x2191)|x2192));

	if (t39 != 2147484788LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x2273 = 11276613654979726LL;
	int8_t x2274 = INT8_MAX;
	static uint8_t x2275 = 3U;
	static uint64_t x2276 = UINT64_MAX;
	volatile uint64_t t40 = 13768229663LLU;

	t40 = (x2273+((x2274<<x2275)|x2276));

	if (t40 != 11276613654979725LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x2281 = 7U;
	uint8_t x2282 = 5U;
	uint16_t x2283 = 1U;
	volatile int32_t t41 = -3;

	t41 = (x2281+((x2282<<x2283)|x2284));

	if (t41 != -111) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x2485 = 333;
	int16_t x2486 = 0;
	int16_t x2487 = 1;
	uint64_t x2488 = 17LLU;
	volatile uint64_t t42 = 127LLU;

	t42 = (x2485+((x2486<<x2487)|x2488));

	if (t42 != 350LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x2537 = UINT8_MAX;
	uint8_t x2539 = 1U;
	int16_t x2540 = INT16_MIN;
	int32_t t43 = -1;

	t43 = (x2537+((x2538<<x2539)|x2540));

	if (t43 != -32483) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x2554 = 73U;
	uint8_t x2555 = 18U;
	static int8_t x2556 = 1;
	static int32_t t44 = 5842220;

	t44 = (x2553+((x2554<<x2555)|x2556));

	if (t44 != 19103745) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x2657 = UINT32_MAX;
	uint16_t x2659 = 38U;
	int8_t x2660 = INT8_MAX;
	volatile uint64_t t45 = 4793439846LLU;

	t45 = (x2657+((x2658<<x2659)|x2660));

	if (t45 != 3852585664638LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x2809 = -1;
	uint8_t x2810 = 0U;
	static uint16_t x2811 = 1U;
	volatile int64_t x2812 = -8935LL;
	volatile int64_t t46 = 12238303LL;

	t46 = (x2809+((x2810<<x2811)|x2812));

	if (t46 != -8936LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x2873 = INT8_MIN;
	uint8_t x2874 = 6U;
	static uint8_t x2875 = 19U;
	uint32_t x2876 = 3364731U;
	volatile uint32_t t47 = 15303U;

	t47 = (x2873+((x2874<<x2875)|x2876));

	if (t47 != 3364603U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x3005 = UINT32_MAX;
	int8_t x3006 = 2;
	volatile uint32_t t48 = 46292823U;

	t48 = (x3005+((x3006<<x3007)|x3008));

	if (t48 != 16U) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x3026 = 1U;
	uint16_t x3027 = 0U;
	volatile int8_t x3028 = INT8_MAX;
	static uint32_t t49 = UINT32_MAX;

	t49 = (x3025+((x3026<<x3027)|x3028));

	if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x3089 = INT32_MAX;
	uint8_t x3090 = 64U;
	int8_t x3091 = 1;
	volatile int8_t x3092 = INT8_MIN;
	volatile int32_t t50 = 2090;

	t50 = (x3089+((x3090<<x3091)|x3092));

	if (t50 != 2147483519) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x3110 = 250U;
	volatile int16_t x3112 = -8128;
	static int32_t t51 = -4718;

	t51 = (x3109+((x3110<<x3111)|x3112));

	if (t51 != 32575) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x3121 = -1;
	uint64_t x3122 = UINT64_MAX;
	uint8_t x3123 = 3U;
	uint64_t x3124 = 15052980847242LLU;
	static uint64_t t52 = 877934928672LLU;

	t52 = (x3121+((x3122<<x3123)|x3124));

	if (t52 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x3277 = INT64_MIN;
	static uint32_t x3278 = UINT32_MAX;
	int8_t x3280 = INT8_MIN;
	volatile int64_t t53 = -10288LL;

	t53 = (x3277+((x3278<<x3279)|x3280));

	if (t53 != -9223372032559808514LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x3361 = INT32_MIN;
	static uint16_t x3362 = 0U;
	uint16_t x3363 = 0U;
	uint16_t x3364 = 9824U;

	t54 = (x3361+((x3362<<x3363)|x3364));

	if (t54 != -2147473824) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x3465 = INT8_MIN;
	static volatile int64_t x3466 = 856366674787573LL;
	volatile int8_t x3467 = 9;
	int16_t x3468 = INT16_MAX;

	t55 = (x3465+((x3466<<x3467)|x3468));

	if (t55 != 438459737491242879LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x3585 = -1;
	uint32_t x3586 = 45126561U;
	uint8_t x3587 = 14U;
	uint16_t x3588 = 727U;
	static volatile uint32_t t56 = 0U;

	t56 = (x3585+((x3586<<x3587)|x3588));

	if (t56 != 619201238U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x3657 = -1;
	static volatile int32_t t57 = -8074;

	t57 = (x3657+((x3658<<x3659)|x3660));

	if (t57 != -4718594) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x3729 = 0;
	int8_t x3730 = 1;
	int8_t x3731 = 6;
	int16_t x3732 = -1;
	int32_t t58 = -39;

	t58 = (x3729+((x3730<<x3731)|x3732));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x3749 = 453U;
	uint8_t x3751 = 14U;
	uint64_t x3752 = UINT64_MAX;
	volatile uint64_t t59 = 372130910992822LLU;

	t59 = (x3749+((x3750<<x3751)|x3752));

	if (t59 != 452LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x3754 = 29U;
	uint8_t x3755 = 2U;

	t60 = (x3753+((x3754<<x3755)|x3756));

	if (t60 != 5020797U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x3777 = -1;
	int16_t x3780 = -34;

	t61 = (x3777+((x3778<<x3779)|x3780));

	if (t61 != 18446744073709551581LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x3781 = -1494855LL;
	uint8_t x3782 = 21U;
	int64_t x3784 = -1LL;
	int64_t t62 = -1LL;

	t62 = (x3781+((x3782<<x3783)|x3784));

	if (t62 != -1494856LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x3791 = 8U;
	uint32_t x3792 = 7537155U;
	static volatile uint32_t t63 = 591103U;

	t63 = (x3789+((x3790<<x3791)|x3792));

	if (t63 != 7601922U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x3809 = INT64_MIN;
	volatile int16_t x3810 = INT16_MAX;
	int16_t x3812 = 511;

	t64 = (x3809+((x3810<<x3811)|x3812));

	if (t64 != -9223372036854513665LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x3825 = INT16_MAX;
	static volatile uint16_t x3826 = UINT16_MAX;
	volatile uint8_t x3827 = 1U;
	uint16_t x3828 = UINT16_MAX;
	int32_t t65 = -7019;

	t65 = (x3825+((x3826<<x3827)|x3828));

	if (t65 != 163838) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x3841 = INT16_MAX;
	static volatile int32_t t66 = -15707436;

	t66 = (x3841+((x3842<<x3843)|x3844));

	if (t66 != -2077196289) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x3901 = -1;
	uint8_t x3902 = UINT8_MAX;
	volatile int8_t x3903 = 0;
	uint64_t t67 = 2154632414543LLU;

	t67 = (x3901+((x3902<<x3903)|x3904));

	if (t67 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x3921 = 119515425049873315LLU;
	int8_t x3922 = INT8_MAX;
	static volatile int16_t x3923 = 2;
	int8_t x3924 = -4;
	uint64_t t68 = 7282588LLU;

	t68 = (x3921+((x3922<<x3923)|x3924));

	if (t68 != 119515425049873311LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x4049 = UINT32_MAX;
	volatile uint8_t x4050 = 2U;
	int64_t x4052 = INT64_MIN;
	int64_t t69 = 268943946087LL;

	t69 = (x4049+((x4050<<x4051)|x4052));

	if (t69 != -9223372032559808511LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x4129 = 83988439643LLU;
	volatile uint8_t x4130 = 0U;
	volatile int64_t x4131 = 0LL;
	uint64_t x4132 = UINT64_MAX;
	volatile uint64_t t70 = 938094LLU;

	t70 = (x4129+((x4130<<x4131)|x4132));

	if (t70 != 83988439642LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x4169 = 23707755114LLU;
	uint8_t x4171 = 1U;
	int64_t x4172 = 770311142573LL;

	t71 = (x4169+((x4170<<x4171)|x4172));

	if (t71 != 794018897689LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x4213 = INT64_MIN;
	uint64_t x4214 = UINT64_MAX;
	uint32_t x4215 = 49U;
	volatile int32_t x4216 = 21092899;

	t72 = (x4213+((x4214<<x4215)|x4216));

	if (t72 != 9222809086922447395LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x4233 = 2943162179311364378LLU;
	int16_t x4234 = 339;
	int8_t x4235 = 0;
	volatile uint16_t x4236 = 1968U;

	t73 = (x4233+((x4234<<x4235)|x4236));

	if (t73 != 2943162179311366413LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x4281 = 1LLU;
	uint16_t x4282 = 3U;
	int8_t x4283 = 1;
	int32_t x4284 = INT32_MAX;
	uint64_t t74 = 287531385LLU;

	t74 = (x4281+((x4282<<x4283)|x4284));

	if (t74 != 2147483648LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x4293 = INT8_MAX;
	static volatile int64_t x4294 = 143345LL;
	int8_t x4295 = 34;
	uint32_t x4296 = 918447724U;
	int64_t t75 = 7LL;

	t75 = (x4293+((x4294<<x4295)|x4296));

	if (t75 != 2462649266628331LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x4301 = INT8_MIN;
	volatile uint32_t x4302 = UINT32_MAX;
	uint8_t x4303 = 2U;
	static volatile int64_t t76 = 94348812LL;

	t76 = (x4301+((x4302<<x4303)|x4304));

	if (t76 != -9223372032559808644LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x4319 = 23;
	uint32_t x4320 = UINT32_MAX;
	uint32_t t77 = 1065061U;

	t77 = (x4317+((x4318<<x4319)|x4320));

	if (t77 != 1816U) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int8_t x4329 = -1;
	uint8_t x4330 = UINT8_MAX;
	uint8_t x4331 = 4U;

	t78 = (x4329+((x4330<<x4331)|x4332));

	if (t78 != 4079U) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x4341 = 937U;
	volatile uint64_t x4342 = 35603LLU;
	volatile uint16_t x4343 = 7U;
	uint8_t x4344 = UINT8_MAX;
	static volatile uint64_t t79 = 1981556467410597504LLU;

	t79 = (x4341+((x4342<<x4343)|x4344));

	if (t79 != 4558248LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x4353 = -3;
	uint64_t x4354 = 20748LLU;
	int64_t x4356 = INT64_MAX;
	volatile uint64_t t80 = 53425022464796032LLU;

	t80 = (x4353+((x4354<<x4355)|x4356));

	if (t80 != 9223372036854775804LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x4385 = 12U;
	uint64_t x4386 = 12LLU;
	uint16_t x4387 = 0U;
	int32_t x4388 = -1;
	static uint64_t t81 = 7LLU;

	t81 = (x4385+((x4386<<x4387)|x4388));

	if (t81 != 11LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x4481 = INT32_MAX;
	int32_t x4482 = 12;
	uint64_t x4484 = 1125760368083LLU;
	uint64_t t82 = 28062029065286LLU;

	t82 = (x4481+((x4482<<x4483)|x4484));

	if (t82 != 1127907851742LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x4561 = INT16_MIN;
	static uint32_t x4562 = 1495163166U;
	int8_t x4563 = 1;
	uint32_t t83 = 31908939U;

	t83 = (x4561+((x4562<<x4563)|x4564));

	if (t83 != 4294934460U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x4666 = 10;
	int8_t x4667 = 2;
	int16_t x4668 = INT16_MIN;

	t84 = (x4665+((x4666<<x4667)|x4668));

	if (t84 != -32729) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x4733 = 1;
	int32_t x4734 = 123265859;
	volatile int64_t x4735 = 1LL;
	uint32_t x4736 = UINT32_MAX;

	t85 = (x4733+((x4734<<x4735)|x4736));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x4829 = INT16_MIN;
	static volatile uint8_t x4831 = 0U;
	int16_t x4832 = -7065;
	static volatile int32_t t86 = 124672430;

	t86 = (x4829+((x4830<<x4831)|x4832));

	if (t86 != -35473) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x4837 = UINT64_MAX;
	volatile uint16_t x4838 = 5042U;
	int8_t x4840 = -1;
	static volatile uint64_t t87 = 4042566323531549LLU;

	t87 = (x4837+((x4838<<x4839)|x4840));

	if (t87 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x4870 = UINT8_MAX;
	uint64_t x4872 = 1904777462793LLU;
	volatile uint64_t t88 = 17329104531LLU;

	t88 = (x4869+((x4870<<x4871)|x4872));

	if (t88 != 1904777528574LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x5125 = INT8_MIN;
	int8_t x5126 = INT8_MAX;
	int64_t t89 = -657345469207769LL;

	t89 = (x5125+((x5126<<x5127)|x5128));

	if (t89 != -9223372036854759680LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x5133 = UINT64_MAX;
	volatile uint16_t x5134 = 1440U;
	uint16_t x5135 = 13U;
	int8_t x5136 = -1;
	volatile uint64_t t90 = 3949871166881LLU;

	t90 = (x5133+((x5134<<x5135)|x5136));

	if (t90 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x5169 = 3369942;
	uint32_t x5170 = 18639U;
	int64_t x5172 = INT64_MIN;

	t91 = (x5169+((x5170<<x5171)|x5172));

	if (t91 != -9223372036850809418LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x5193 = 23224784371955756LLU;
	uint32_t x5194 = UINT32_MAX;
	static uint8_t x5195 = 29U;
	uint8_t x5196 = 15U;
	volatile uint64_t t92 = 417703578934254542LLU;

	t92 = (x5193+((x5194<<x5195)|x5196));

	if (t92 != 23224788130052155LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x5221 = 193U;
	volatile int64_t x5222 = 8034678485622LL;
	volatile uint16_t x5223 = 1U;
	static uint64_t x5224 = 101LLU;

	t93 = (x5221+((x5222<<x5223)|x5224));

	if (t93 != 16069356971438LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x5269 = INT64_MIN;
	static uint8_t x5270 = UINT8_MAX;
	int8_t x5271 = 6;
	uint64_t x5272 = 2407359388545860LLU;
	volatile uint64_t t94 = 4664LLU;

	t94 = (x5269+((x5270<<x5271)|x5272));

	if (t94 != 9225779396243324868LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x5393 = -1LL;
	uint64_t x5396 = 27354650709918LLU;
	uint64_t t95 = 48989152LLU;

	t95 = (x5393+((x5394<<x5395)|x5396));

	if (t95 != 27358941675517LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x5453 = 2U;
	uint8_t x5455 = 7U;
	static int8_t x5456 = -1;
	static int32_t t96 = -15766144;

	t96 = (x5453+((x5454<<x5455)|x5456));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x5693 = INT16_MIN;
	int64_t x5694 = INT64_MAX;
	static uint64_t x5696 = 114730LLU;
	volatile uint64_t t97 = 6601626057559484069LLU;

	t97 = (x5693+((x5694<<x5695)|x5696));

	if (t97 != 9223372036854743039LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x5897 = INT16_MAX;
	uint8_t x5898 = UINT8_MAX;
	uint8_t x5899 = 1U;
	volatile uint64_t x5900 = UINT64_MAX;
	uint64_t t98 = 1228629LLU;

	t98 = (x5897+((x5898<<x5899)|x5900));

	if (t98 != 32766LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x5910 = 862U;
	int8_t x5911 = 0;
	int8_t x5912 = -1;
	volatile uint64_t t99 = 466946991976LLU;

	t99 = (x5909+((x5910<<x5911)|x5912));

	if (t99 != 4298126721LLU) { NG(); } else { ; }
	
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


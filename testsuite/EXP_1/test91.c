#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x32 = INT8_MAX;
uint64_t x122 = 135371LLU;
int64_t x124 = -1LL;
uint32_t x142 = 82609970U;
volatile int16_t x154 = -1;
static uint16_t x155 = 0U;
int64_t x384 = INT64_MIN;
int16_t x472 = -2217;
volatile int8_t x488 = INT8_MAX;
uint8_t x621 = 1U;
int16_t x624 = -118;
int8_t x640 = -49;
int16_t x646 = -1;
int16_t x648 = INT16_MIN;
uint8_t x675 = 11U;
uint16_t x676 = 107U;
uint8_t x727 = 3U;
volatile int8_t x747 = 2;
uint64_t x778 = 371907672431LLU;
static int16_t x876 = -48;
static int64_t x937 = INT64_MAX;
uint16_t x1023 = 3U;
int32_t t26 = 1052916235;
volatile uint8_t x1082 = UINT8_MAX;
uint16_t x1083 = 3U;
static uint32_t t28 = 205735764U;
volatile int16_t x1116 = INT16_MAX;
static volatile uint64_t x1190 = UINT64_MAX;
static int64_t x1192 = INT64_MAX;
static uint8_t x1495 = 7U;
uint64_t t34 = 8380035274411124586LLU;
volatile uint16_t x1597 = 1321U;
static uint8_t x1649 = 1U;
int8_t x1650 = INT8_MAX;
volatile int16_t x1652 = 0;
volatile uint8_t x1927 = 1U;
int8_t x2047 = 47;
int8_t x2079 = 3;
int64_t x2080 = 9929150381LL;
static volatile int64_t t44 = 39668LL;
int8_t x2106 = INT8_MAX;
volatile uint32_t x2108 = 324U;
uint64_t x2118 = UINT64_MAX;
uint64_t x2129 = 6998165LLU;
static volatile uint8_t x2131 = 1U;
volatile uint8_t x2423 = 17U;
uint64_t x2525 = UINT64_MAX;
uint32_t x2526 = UINT32_MAX;
uint8_t x2527 = 1U;
int16_t x2565 = INT16_MIN;
static int8_t x2567 = 0;
int32_t x2576 = INT32_MIN;
uint8_t x2582 = UINT8_MAX;
volatile uint16_t x2666 = UINT16_MAX;
static uint8_t x2667 = 1U;
int32_t x2704 = INT32_MAX;
int8_t x2890 = -1;
int32_t x2892 = 0;
static int64_t t64 = 579LL;
static int16_t x2973 = INT16_MIN;
int32_t x2984 = INT32_MAX;
uint64_t x3014 = UINT64_MAX;
volatile int16_t x3015 = 35;
volatile uint8_t x3077 = 102U;
uint8_t x3079 = 3U;
static int32_t x3080 = 1;
int16_t x3117 = 12;
int16_t x3121 = 13;
volatile uint8_t x3133 = 35U;
static uint8_t x3134 = 3U;
int16_t x3221 = -309;
int64_t x3224 = -1LL;
uint32_t x3315 = 3U;
static uint64_t x3337 = UINT64_MAX;
int16_t x3338 = INT16_MIN;
uint8_t x3391 = 10U;
int64_t x3449 = 239714125087186544LL;
static volatile int32_t t78 = -1;
uint16_t x3536 = 3U;
uint8_t x3575 = 4U;
int64_t t80 = -295361954LL;
int64_t x3704 = INT64_MIN;
uint64_t t82 = 2LLU;
static volatile int16_t x3837 = INT16_MAX;
uint8_t x3839 = 6U;
volatile int64_t t84 = 555LL;
volatile uint64_t x3943 = 2LLU;
volatile int64_t x3974 = INT64_MAX;
int32_t x4006 = INT32_MIN;
uint8_t x4007 = 11U;
volatile uint32_t t89 = 54999U;
static uint8_t x4031 = 1U;
uint32_t x4212 = 2U;
uint16_t x4257 = 1680U;
uint8_t x4258 = 0U;
uint32_t x4303 = 10U;
int8_t x4336 = 9;
uint8_t x4427 = 20U;
int32_t x4456 = -1;


void f0(void) {
	uint16_t x29 = 76U;
	int16_t x30 = INT16_MAX;
	uint8_t x31 = 0U;
	int32_t t0 = -1;

	t0 = (((x29+x30)>>x31)^x32);

	if (t0 != 32820) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x117 = 764805454311157LLU;
	int64_t x118 = 10771434LL;
	uint16_t x119 = 0U;
	static int16_t x120 = INT16_MIN;
	volatile uint64_t t1 = 40LLU;

	t1 = (((x117+x118)>>x119)^x120);

	if (t1 != 18445979268244441823LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x121 = UINT8_MAX;
	uint64_t x123 = 0LLU;
	static volatile uint64_t t2 = 227LLU;

	t2 = (((x121+x122)>>x123)^x124);

	if (t2 != 18446744073709415989LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x141 = -1;
	int8_t x143 = 0;
	int8_t x144 = -26;
	volatile uint32_t t3 = 55U;

	t3 = (((x141+x142)>>x143)^x144);

	if (t3 != 4212357335U) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x153 = UINT32_MAX;
	uint64_t x156 = 492460LLU;
	volatile uint64_t t4 = 20671435392929633LLU;

	t4 = (((x153+x154)>>x155)^x156);

	if (t4 != 4294474834LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x381 = -1;
	static uint64_t x382 = UINT64_MAX;
	int8_t x383 = 5;
	static volatile uint64_t t5 = 269976093293477410LLU;

	t5 = (((x381+x382)>>x383)^x384);

	if (t5 != 9799832789158199295LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x397 = INT32_MAX;
	int8_t x398 = INT8_MIN;
	static uint16_t x399 = 0U;
	int64_t x400 = INT64_MIN;
	volatile int64_t t6 = 65625840LL;

	t6 = (((x397+x398)>>x399)^x400);

	if (t6 != -9223372034707292289LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x453 = INT16_MIN;
	uint64_t x454 = 16510325216803LLU;
	volatile uint16_t x455 = 3U;
	int16_t x456 = 1;
	static volatile uint64_t t7 = 1786199697LLU;

	t7 = (((x453+x454)>>x455)^x456);

	if (t7 != 2063790648005LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x457 = UINT64_MAX;
	int64_t x458 = INT64_MIN;
	volatile int16_t x459 = 1;
	volatile uint32_t x460 = 359153U;
	volatile uint64_t t8 = 40932173484223331LLU;

	t8 = (((x457+x458)>>x459)^x460);

	if (t8 != 4611686018427028750LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x469 = 64609792614LL;
	uint16_t x470 = 4547U;
	uint8_t x471 = 36U;
	volatile int64_t t9 = 69226230777073564LL;

	t9 = (((x469+x470)>>x471)^x472);

	if (t9 != -2217LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x485 = 0U;
	uint64_t x486 = UINT64_MAX;
	uint8_t x487 = 12U;
	volatile uint64_t t10 = 27691581394317LLU;

	t10 = (((x485+x486)>>x487)^x488);

	if (t10 != 4503599627370368LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x622 = -1LL;
	int64_t x623 = 26LL;
	int64_t t11 = 443LL;

	t11 = (((x621+x622)>>x623)^x624);

	if (t11 != -118LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x637 = UINT32_MAX;
	static int8_t x638 = INT8_MIN;
	uint8_t x639 = 0U;
	volatile uint32_t t12 = 185U;

	t12 = (((x637+x638)>>x639)^x640);

	if (t12 != 176U) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x645 = UINT32_MAX;
	static int8_t x647 = 15;
	uint32_t t13 = 4926748U;

	t13 = (((x645+x646)>>x647)^x648);

	if (t13 != 4294868991U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x653 = -1LL;
	int32_t x654 = INT32_MAX;
	volatile int16_t x655 = 1;
	uint16_t x656 = 800U;
	static int64_t t14 = 11603LL;

	t14 = (((x653+x654)>>x655)^x656);

	if (t14 != 1073741023LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x673 = -923;
	static uint64_t x674 = 968935695633318LLU;
	uint64_t t15 = 5369LLU;

	t15 = (((x673+x674)>>x675)^x676);

	if (t15 != 473113132594LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x693 = 2U;
	static volatile int16_t x694 = 550;
	static uint32_t x695 = 1U;
	uint32_t x696 = 17445U;
	volatile uint32_t t16 = 8U;

	t16 = (((x693+x694)>>x695)^x696);

	if (t16 != 17713U) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x725 = UINT16_MAX;
	int32_t x726 = -5823;
	uint32_t x728 = 80517U;
	uint32_t t17 = 235U;

	t17 = (((x725+x726)>>x727)^x728);

	if (t17 != 75693U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x745 = -1LL;
	int32_t x746 = 1;
	volatile int64_t x748 = INT64_MIN;
	int64_t t18 = INT64_MIN;

	t18 = (((x745+x746)>>x747)^x748);

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x777 = INT8_MIN;
	uint16_t x779 = 5U;
	volatile uint64_t x780 = UINT64_MAX;
	uint64_t t19 = 7LLU;

	t19 = (((x777+x778)>>x779)^x780);

	if (t19 != 18446744062087436856LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x809 = 0;
	static volatile int8_t x810 = INT8_MAX;
	uint32_t x811 = 28U;
	int8_t x812 = INT8_MIN;
	int32_t t20 = -747993928;

	t20 = (((x809+x810)>>x811)^x812);

	if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x841 = 405052124;
	int32_t x842 = -1;
	uint8_t x843 = 1U;
	volatile int16_t x844 = 872;
	volatile int32_t t21 = -75838066;

	t21 = (((x841+x842)>>x843)^x844);

	if (t21 != 202526213) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x873 = UINT64_MAX;
	volatile int64_t x874 = INT64_MIN;
	static uint8_t x875 = 30U;
	uint64_t t22 = 1LLU;

	t22 = (((x873+x874)>>x875)^x876);

	if (t22 != 18446744065119617071LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x938 = -1LL;
	volatile uint8_t x939 = 5U;
	volatile int8_t x940 = INT8_MAX;
	static volatile int64_t t23 = 35829837828252046LL;

	t23 = (((x937+x938)>>x939)^x940);

	if (t23 != 288230376151711616LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x945 = INT32_MAX;
	uint32_t x946 = 45565895U;
	int64_t x947 = 3LL;
	int64_t x948 = -6141484LL;
	static int64_t t24 = 225495LL;

	t24 = (((x945+x946)>>x947)^x948);

	if (t24 != -269180628LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x1013 = INT8_MIN;
	uint8_t x1014 = UINT8_MAX;
	uint16_t x1015 = 20U;
	static uint32_t x1016 = 912968U;
	volatile uint32_t t25 = 21324710U;

	t25 = (((x1013+x1014)>>x1015)^x1016);

	if (t25 != 912968U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x1021 = UINT8_MAX;
	static int32_t x1022 = -1;
	uint8_t x1024 = UINT8_MAX;

	t26 = (((x1021+x1022)>>x1023)^x1024);

	if (t26 != 224) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1081 = -1LL;
	int8_t x1084 = -8;
	int64_t t27 = 204176971080312686LL;

	t27 = (((x1081+x1082)>>x1083)^x1084);

	if (t27 != -25LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x1105 = 25763U;
	volatile uint8_t x1106 = UINT8_MAX;
	uint8_t x1107 = 3U;
	uint16_t x1108 = 6851U;

	t28 = (((x1105+x1106)>>x1107)^x1108);

	if (t28 != 5751U) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint8_t x1113 = UINT8_MAX;
	static volatile uint8_t x1114 = 29U;
	uint8_t x1115 = 0U;
	volatile int32_t t29 = -11;

	t29 = (((x1113+x1114)>>x1115)^x1116);

	if (t29 != 32483) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1189 = -1;
	int16_t x1191 = 0;
	uint64_t t30 = 655801977215LLU;

	t30 = (((x1189+x1190)>>x1191)^x1192);

	if (t30 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x1221 = 0;
	uint64_t x1222 = UINT64_MAX;
	int8_t x1223 = 0;
	static uint32_t x1224 = 64512U;
	uint64_t t31 = 115537288LLU;

	t31 = (((x1221+x1222)>>x1223)^x1224);

	if (t31 != 18446744073709487103LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x1365 = 7057;
	int8_t x1366 = INT8_MAX;
	uint8_t x1367 = 0U;
	static volatile uint32_t x1368 = 72212U;
	uint32_t t32 = 1U;

	t32 = (((x1365+x1366)>>x1367)^x1368);

	if (t32 != 67076U) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1485 = UINT64_MAX;
	volatile int16_t x1486 = INT16_MIN;
	int16_t x1487 = 0;
	uint32_t x1488 = 170U;
	volatile uint64_t t33 = 8826717403865LLU;

	t33 = (((x1485+x1486)>>x1487)^x1488);

	if (t33 != 18446744073709518677LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x1493 = 1LLU;
	uint32_t x1494 = UINT32_MAX;
	static uint16_t x1496 = UINT16_MAX;

	t34 = (((x1493+x1494)>>x1495)^x1496);

	if (t34 != 33619967LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x1593 = -2132263612LL;
	uint64_t x1594 = 7108385LLU;
	uint32_t x1595 = 15U;
	int16_t x1596 = 0;
	static volatile uint64_t t35 = 148540LLU;

	t35 = (((x1593+x1594)>>x1595)^x1596);

	if (t35 != 562949953356457LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x1598 = 105U;
	int32_t x1599 = 2;
	uint8_t x1600 = 16U;
	static int32_t t36 = 24617161;

	t36 = (((x1597+x1598)>>x1599)^x1600);

	if (t36 != 372) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x1651 = 0U;
	volatile int32_t t37 = 0;

	t37 = (((x1649+x1650)>>x1651)^x1652);

	if (t37 != 128) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x1905 = 9973210847947LLU;
	uint64_t x1906 = 2459575096LLU;
	int8_t x1907 = 1;
	uint32_t x1908 = UINT32_MAX;
	uint64_t t38 = 33275864876824LLU;

	t38 = (((x1905+x1906)>>x1907)^x1908);

	if (t38 != 4989373817086LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x1925 = UINT16_MAX;
	static int32_t x1926 = -1;
	int16_t x1928 = -75;
	int32_t t39 = -13322;

	t39 = (((x1925+x1926)>>x1927)^x1928);

	if (t39 != -32694) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x1937 = -1;
	uint16_t x1938 = UINT16_MAX;
	volatile uint32_t x1939 = 4U;
	int16_t x1940 = INT16_MIN;
	int32_t t40 = 0;

	t40 = (((x1937+x1938)>>x1939)^x1940);

	if (t40 != -28673) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x1961 = 50547413072971729LLU;
	static int16_t x1962 = INT16_MIN;
	static uint8_t x1963 = 38U;
	volatile int8_t x1964 = 1;
	volatile uint64_t t41 = 12804LLU;

	t41 = (((x1961+x1962)>>x1963)^x1964);

	if (t41 != 183891LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint8_t x2041 = UINT8_MAX;
	volatile int32_t x2042 = -1;
	volatile int16_t x2043 = 0;
	int32_t x2044 = INT32_MIN;
	volatile int32_t t42 = -240920144;

	t42 = (((x2041+x2042)>>x2043)^x2044);

	if (t42 != -2147483394) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x2045 = -15;
	uint64_t x2046 = UINT64_MAX;
	int64_t x2048 = -1LL;
	static uint64_t t43 = 167160LLU;

	t43 = (((x2045+x2046)>>x2047)^x2048);

	if (t43 != 18446744073709420544LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x2077 = 7559U;
	int64_t x2078 = 43LL;

	t44 = (((x2077+x2078)>>x2079)^x2080);

	if (t44 != 9929149467LL) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int64_t x2089 = INT64_MIN;
	static volatile uint64_t x2090 = UINT64_MAX;
	static uint16_t x2091 = 19U;
	static uint16_t x2092 = 13546U;
	uint64_t t45 = 2765256109173793987LLU;

	t45 = (((x2089+x2090)>>x2091)^x2092);

	if (t45 != 17592186030869LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x2105 = UINT64_MAX;
	uint16_t x2107 = 15U;
	static volatile uint64_t t46 = 2116LLU;

	t46 = (((x2105+x2106)>>x2107)^x2108);

	if (t46 != 324LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2117 = INT16_MIN;
	static volatile uint16_t x2119 = 35U;
	volatile uint64_t x2120 = UINT64_MAX;
	volatile uint64_t t47 = 8102378947333213267LLU;

	t47 = (((x2117+x2118)>>x2119)^x2120);

	if (t47 != 18446744073172680704LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x2130 = INT8_MIN;
	int8_t x2132 = INT8_MIN;
	volatile uint64_t t48 = 2166434201270LLU;

	t48 = (((x2129+x2130)>>x2131)^x2132);

	if (t48 != 18446744073706052490LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x2157 = UINT64_MAX;
	int32_t x2158 = INT32_MIN;
	uint16_t x2159 = 5U;
	int8_t x2160 = -1;
	static uint64_t t49 = 1206174094751628215LLU;

	t49 = (((x2157+x2158)>>x2159)^x2160);

	if (t49 != 17870283321473236992LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x2197 = INT64_MAX;
	int32_t x2198 = INT32_MIN;
	volatile uint8_t x2199 = 1U;
	int8_t x2200 = -7;
	volatile int64_t t50 = 834LL;

	t50 = (((x2197+x2198)>>x2199)^x2200);

	if (t50 != -4611686017353646074LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x2241 = UINT32_MAX;
	int16_t x2242 = 0;
	volatile uint8_t x2243 = 11U;
	uint8_t x2244 = 2U;
	volatile uint32_t t51 = 415540300U;

	t51 = (((x2241+x2242)>>x2243)^x2244);

	if (t51 != 2097149U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x2269 = INT16_MIN;
	volatile int32_t x2270 = INT32_MAX;
	int16_t x2271 = 4;
	int32_t x2272 = 137;
	int32_t t52 = 290074;

	t52 = (((x2269+x2270)>>x2271)^x2272);

	if (t52 != 134215542) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x2333 = INT8_MIN;
	int64_t x2334 = 953LL;
	volatile uint8_t x2335 = 14U;
	static int64_t x2336 = INT64_MIN;
	int64_t t53 = INT64_MIN;

	t53 = (((x2333+x2334)>>x2335)^x2336);

	if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x2421 = 4898LLU;
	int8_t x2422 = INT8_MIN;
	static uint8_t x2424 = 21U;
	volatile uint64_t t54 = 672158LLU;

	t54 = (((x2421+x2422)>>x2423)^x2424);

	if (t54 != 21LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x2528 = 0U;
	volatile uint64_t t55 = 8586325039LLU;

	t55 = (((x2525+x2526)>>x2527)^x2528);

	if (t55 != 2147483647LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x2566 = UINT16_MAX;
	volatile int16_t x2568 = -1;
	static int32_t t56 = -4340;

	t56 = (((x2565+x2566)>>x2567)^x2568);

	if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x2573 = 62U;
	int8_t x2574 = -1;
	uint8_t x2575 = 3U;
	volatile uint32_t t57 = 19795U;

	t57 = (((x2573+x2574)>>x2575)^x2576);

	if (t57 != 2147483655U) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x2581 = UINT16_MAX;
	static uint8_t x2583 = 0U;
	uint64_t x2584 = 650LLU;
	uint64_t t58 = 349695LLU;

	t58 = (((x2581+x2582)>>x2583)^x2584);

	if (t58 != 66164LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x2621 = 1U;
	static volatile int64_t x2622 = 3892643LL;
	int8_t x2623 = 5;
	volatile uint8_t x2624 = 5U;
	volatile int64_t t59 = -41305327587228LL;

	t59 = (((x2621+x2622)>>x2623)^x2624);

	if (t59 != 121640LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x2665 = 25U;
	int16_t x2668 = INT16_MIN;
	int32_t t60 = -1165697;

	t60 = (((x2665+x2666)>>x2667)^x2668);

	if (t60 != -65524) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x2701 = 418;
	uint16_t x2702 = 0U;
	volatile int8_t x2703 = 2;
	static volatile int32_t t61 = 0;

	t61 = (((x2701+x2702)>>x2703)^x2704);

	if (t61 != 2147483543) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x2865 = UINT64_MAX;
	volatile uint8_t x2866 = 1U;
	int8_t x2867 = 32;
	volatile uint8_t x2868 = UINT8_MAX;
	uint64_t t62 = 2767494874LLU;

	t62 = (((x2865+x2866)>>x2867)^x2868);

	if (t62 != 255LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x2889 = INT16_MAX;
	static volatile int8_t x2891 = 10;
	volatile int32_t t63 = 81;

	t63 = (((x2889+x2890)>>x2891)^x2892);

	if (t63 != 31) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x2917 = 18040U;
	static int32_t x2918 = -1;
	static int16_t x2919 = 11;
	int64_t x2920 = INT64_MAX;

	t64 = (((x2917+x2918)>>x2919)^x2920);

	if (t64 != 9223372036854775799LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x2941 = -1;
	uint64_t x2942 = 57879155LLU;
	int8_t x2943 = 6;
	int16_t x2944 = INT16_MIN;
	static volatile uint64_t t65 = 3893633840835LLU;

	t65 = (((x2941+x2942)>>x2943)^x2944);

	if (t65 != 18446744073708653737LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x2974 = INT32_MAX;
	volatile uint64_t x2975 = 19LLU;
	uint16_t x2976 = 0U;
	int32_t t66 = -4084;

	t66 = (((x2973+x2974)>>x2975)^x2976);

	if (t66 != 4095) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x2981 = INT64_MAX;
	int16_t x2982 = -2930;
	uint16_t x2983 = 2U;
	int64_t t67 = 5157626LL;

	t67 = (((x2981+x2982)>>x2983)^x2984);

	if (t67 != 2305843007066211036LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x3013 = INT64_MIN;
	int32_t x3016 = -1;
	volatile uint64_t t68 = 5602290985LLU;

	t68 = (((x3013+x3014)>>x3015)^x3016);

	if (t68 != 18446744073441116160LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x3078 = 0;
	int32_t t69 = -135;

	t69 = (((x3077+x3078)>>x3079)^x3080);

	if (t69 != 13) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x3118 = UINT64_MAX;
	uint8_t x3119 = 44U;
	uint32_t x3120 = 2801456U;
	uint64_t t70 = 4360804LLU;

	t70 = (((x3117+x3118)>>x3119)^x3120);

	if (t70 != 2801456LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x3122 = -1LL;
	volatile int8_t x3123 = 3;
	uint64_t x3124 = 2100459368854542LLU;
	uint64_t t71 = 3041LLU;

	t71 = (((x3121+x3122)>>x3123)^x3124);

	if (t71 != 2100459368854543LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x3135 = 26;
	uint16_t x3136 = 3U;
	volatile int32_t t72 = 15;

	t72 = (((x3133+x3134)>>x3135)^x3136);

	if (t72 != 3) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x3222 = 142199LL;
	uint64_t x3223 = 20LLU;
	int64_t t73 = -179152451983568721LL;

	t73 = (((x3221+x3222)>>x3223)^x3224);

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x3313 = 145468LLU;
	int16_t x3314 = -3;
	static int8_t x3316 = -1;
	volatile uint64_t t74 = 79LLU;

	t74 = (((x3313+x3314)>>x3315)^x3316);

	if (t74 != 18446744073709533432LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x3339 = 8U;
	uint32_t x3340 = 629428852U;
	uint64_t t75 = 83895910621LLU;

	t75 = (((x3337+x3338)>>x3339)^x3340);

	if (t75 != 72057593408498955LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x3389 = 1185698;
	static uint64_t x3390 = 5168909256237LLU;
	int32_t x3392 = INT32_MIN;
	volatile uint64_t t76 = 34LLU;

	t76 = (((x3389+x3390)>>x3391)^x3392);

	if (t76 != 18446744068019897479LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x3450 = 3;
	uint32_t x3451 = 30U;
	static int64_t x3452 = INT64_MIN;
	int64_t t77 = 529LL;

	t77 = (((x3449+x3450)>>x3451)^x3452);

	if (t77 != -9223372036631524632LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint16_t x3529 = 71U;
	uint8_t x3530 = 2U;
	int8_t x3531 = 0;
	int8_t x3532 = INT8_MIN;

	t78 = (((x3529+x3530)>>x3531)^x3532);

	if (t78 != -55) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x3533 = UINT64_MAX;
	uint64_t x3534 = UINT64_MAX;
	uint16_t x3535 = 6U;
	volatile uint64_t t79 = 6563052588159673LLU;

	t79 = (((x3533+x3534)>>x3535)^x3536);

	if (t79 != 288230376151711740LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x3573 = INT32_MAX;
	static int8_t x3574 = -1;
	int64_t x3576 = INT64_MAX;

	t80 = (((x3573+x3574)>>x3575)^x3576);

	if (t80 != 9223372036720558080LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x3661 = 6;
	volatile uint16_t x3662 = 2980U;
	volatile uint8_t x3663 = 19U;
	int16_t x3664 = -1;
	volatile int32_t t81 = 22372;

	t81 = (((x3661+x3662)>>x3663)^x3664);

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x3701 = 75226045592LLU;
	int32_t x3702 = INT32_MIN;
	static int16_t x3703 = 2;

	t82 = (((x3701+x3702)>>x3703)^x3704);

	if (t82 != 9223372055124416294LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x3777 = 2362471028LLU;
	volatile uint16_t x3778 = 1443U;
	uint8_t x3779 = 0U;
	int16_t x3780 = INT16_MIN;
	uint64_t t83 = 49LLU;

	t83 = (((x3777+x3778)>>x3779)^x3780);

	if (t83 != 18446744071347107863LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x3838 = 16;
	static int64_t x3840 = INT64_MIN;

	t84 = (((x3837+x3838)>>x3839)^x3840);

	if (t84 != -9223372036854775296LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x3941 = INT16_MIN;
	static uint64_t x3942 = 67492306696087LLU;
	int64_t x3944 = INT64_MIN;
	uint64_t t85 = 1090064497LLU;

	t85 = (((x3941+x3942)>>x3943)^x3944);

	if (t85 != 9223388909931441637LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x3945 = UINT8_MAX;
	uint16_t x3946 = 6U;
	static uint8_t x3947 = 1U;
	uint32_t x3948 = 8113U;
	volatile uint32_t t86 = 73U;

	t86 = (((x3945+x3946)>>x3947)^x3948);

	if (t86 != 7987U) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x3973 = 891638673517402958LLU;
	int8_t x3975 = 54;
	uint32_t x3976 = 281U;
	volatile uint64_t t87 = 98593536LLU;

	t87 = (((x3973+x3974)>>x3975)^x3976);

	if (t87 != 808LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x3981 = -1;
	int64_t x3982 = 68039657149780921LL;
	uint8_t x3983 = 1U;
	int32_t x3984 = INT32_MAX;
	static int64_t t88 = 2LL;

	t88 = (((x3981+x3982)>>x3983)^x3984);

	if (t88 != 34019830000080419LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x4005 = 12636U;
	int32_t x4008 = INT32_MAX;

	t89 = (((x4005+x4006)>>x4007)^x4008);

	if (t89 != 2146435065U) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x4029 = 1455908U;
	int32_t x4030 = INT32_MAX;
	uint32_t x4032 = UINT32_MAX;
	volatile uint32_t t90 = 2U;

	t90 = (((x4029+x4030)>>x4031)^x4032);

	if (t90 != 3220497518U) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x4121 = INT8_MAX;
	uint8_t x4122 = 2U;
	int16_t x4123 = 7;
	static uint64_t x4124 = UINT64_MAX;
	volatile uint64_t t91 = 62LLU;

	t91 = (((x4121+x4122)>>x4123)^x4124);

	if (t91 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x4209 = 0;
	uint64_t x4210 = UINT64_MAX;
	uint32_t x4211 = 0U;
	static uint64_t t92 = 1LLU;

	t92 = (((x4209+x4210)>>x4211)^x4212);

	if (t92 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x4259 = 2U;
	int16_t x4260 = INT16_MAX;
	volatile int32_t t93 = -23199;

	t93 = (((x4257+x4258)>>x4259)^x4260);

	if (t93 != 32347) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x4301 = 16U;
	volatile int32_t x4302 = -5;
	int8_t x4304 = 2;
	volatile int32_t t94 = -50;

	t94 = (((x4301+x4302)>>x4303)^x4304);

	if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x4321 = -1LL;
	static int16_t x4322 = 1914;
	static int8_t x4323 = 1;
	uint64_t x4324 = 1LLU;
	static volatile uint64_t t95 = 8LLU;

	t95 = (((x4321+x4322)>>x4323)^x4324);

	if (t95 != 957LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x4333 = UINT32_MAX;
	int16_t x4334 = 14;
	uint8_t x4335 = 5U;
	uint32_t t96 = 18602158U;

	t96 = (((x4333+x4334)>>x4335)^x4336);

	if (t96 != 9U) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x4425 = 1U;
	volatile int32_t x4426 = 2;
	static int16_t x4428 = 24;
	volatile int32_t t97 = 20;

	t97 = (((x4425+x4426)>>x4427)^x4428);

	if (t97 != 24) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x4453 = UINT8_MAX;
	int8_t x4454 = -1;
	static uint8_t x4455 = 7U;
	int32_t t98 = 1982;

	t98 = (((x4453+x4454)>>x4455)^x4456);

	if (t98 != -2) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x4469 = -104LL;
	static int8_t x4470 = INT8_MAX;
	volatile int32_t x4471 = 1;
	volatile int32_t x4472 = -1;
	static volatile int64_t t99 = -3546326452187115LL;

	t99 = (((x4469+x4470)>>x4471)^x4472);

	if (t99 != -12LL) { NG(); } else { ; }
	
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


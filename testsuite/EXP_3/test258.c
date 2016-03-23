
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x6 = 19;
static int32_t x8 = -1;
uint16_t x13 = 12U;
int8_t x15 = -31;
int8_t x16 = -61;
static int16_t x108 = -1;
volatile int8_t x203 = 26;
volatile int64_t x337 = INT64_MAX;
volatile int64_t t7 = 53LL;
int32_t x644 = INT32_MIN;
int8_t x679 = -1;
int8_t x680 = -1;
int32_t t12 = 640;
int8_t x687 = -1;
int64_t x717 = INT64_MIN;
int8_t x746 = -1;
static uint64_t x749 = 502LLU;
uint64_t x751 = UINT64_MAX;
uint16_t x770 = UINT16_MAX;
uint16_t x777 = UINT16_MAX;
static volatile int8_t x791 = -3;
volatile int32_t x837 = 0;
uint32_t x838 = 33426U;
int16_t x840 = -1;
int32_t x966 = INT32_MAX;
static int32_t x967 = INT32_MAX;
volatile int32_t t22 = 353953;
int8_t x1014 = 4;
uint16_t x1061 = 1066U;
int32_t x1062 = INT32_MIN;
int64_t x1162 = -1LL;
int8_t x1164 = -61;
int8_t x1205 = INT8_MIN;
int8_t x1295 = INT8_MAX;
int8_t x1320 = -1;
int8_t x1324 = -2;
volatile int32_t t30 = 225316767;
volatile int32_t x1666 = -1;
static uint32_t x1776 = UINT32_MAX;
volatile uint64_t x1876 = UINT64_MAX;
int8_t x1892 = -1;
static int64_t x1952 = -1LL;
volatile int32_t t38 = 29502246;
volatile uint64_t x2002 = UINT64_MAX;
int32_t x2003 = -1;
int16_t x2004 = -1;
int16_t x2249 = 10;
int64_t x2298 = INT64_MIN;
volatile int64_t t43 = 86620765LL;
uint16_t x2388 = 2U;
static uint64_t t45 = 647810432273840LLU;
int16_t x2421 = 4540;
volatile int64_t x2456 = -1LL;
int16_t x2514 = -1;
int32_t x2515 = 1;
int64_t x2558 = INT64_MIN;
uint32_t x2647 = 40U;
uint8_t x2657 = UINT8_MAX;
int8_t x2658 = -1;
int32_t t51 = -1;
uint64_t x2759 = UINT64_MAX;
int32_t x2959 = INT32_MIN;
volatile uint32_t x2965 = 199848817U;
int8_t x3068 = 2;
volatile int32_t t61 = -2402;
volatile uint32_t x3166 = 737U;
uint32_t x3167 = UINT32_MAX;
static int64_t x3341 = 2123LL;
int64_t x3343 = 15LL;
int64_t x3344 = -1LL;
int32_t t65 = 2;
int64_t x3654 = INT64_MIN;
int64_t t67 = -84733LL;
uint16_t x3722 = 29U;
int8_t x3724 = -28;
volatile int16_t x3739 = INT16_MIN;
int16_t x3740 = INT16_MIN;
static volatile uint32_t t69 = 369173U;
int64_t x3781 = 154083518LL;
int8_t x3784 = INT8_MIN;
static int64_t t70 = 729009277LL;
int16_t x3821 = INT16_MAX;
static volatile int64_t t72 = 633LL;
uint16_t x3885 = 5U;
static uint8_t x3994 = UINT8_MAX;
int64_t t76 = -1746LL;
volatile int16_t x4380 = INT16_MIN;
int32_t x4501 = 38724;
static int64_t x4502 = -1LL;
volatile int8_t x4515 = 4;
uint16_t x4769 = 9258U;
static volatile int64_t x5007 = -1LL;
volatile int32_t x5010 = INT32_MIN;
static int8_t x5011 = 1;
int8_t x5012 = -1;
uint16_t x5138 = 28U;
uint16_t x5141 = 5U;
static int16_t x5219 = -1;
volatile uint64_t t91 = 221437339471LLU;
uint64_t x5237 = 12097989046705257LLU;
int64_t x5238 = 447620787987559257LL;
int64_t x5261 = 56894347887LL;
volatile uint32_t x5262 = 882721U;
int32_t x5264 = INT32_MIN;
volatile int64_t t94 = 13937012LL;
static uint64_t x5737 = 993900394174223LLU;
uint8_t x5738 = UINT8_MAX;
volatile uint64_t t99 = 917373867604698049LLU;
uint32_t x5777 = 10113U;
int32_t x5779 = INT32_MIN;
int32_t x5780 = INT32_MIN;
static uint32_t t100 = 1474909U;
uint32_t x5933 = 3131U;
volatile int64_t x6005 = INT64_MAX;
uint8_t x6007 = 1U;
int8_t x6008 = -1;
int8_t x6180 = -1;
static volatile int64_t t108 = -14LL;
int16_t x6328 = -1;
static uint64_t t110 = 728447199398512416LLU;
static volatile uint32_t x6932 = UINT32_MAX;
static uint8_t x6942 = 1U;
int64_t x6943 = -1LL;
static int16_t x6954 = INT16_MAX;
volatile uint32_t x6974 = 2U;
volatile int32_t x6975 = -1;
int32_t x6976 = -1;
uint32_t x7065 = UINT32_MAX;
static volatile int8_t x7068 = INT8_MIN;
volatile int8_t x7196 = -1;
uint64_t x7217 = 229813178321263147LLU;
int8_t x7258 = -3;
int8_t x7456 = INT8_MIN;
volatile int32_t x7474 = INT32_MIN;
static int32_t t127 = -610;
static uint32_t x7918 = 6U;
static int8_t x7981 = INT8_MIN;
int64_t x7984 = INT64_MIN;
volatile int32_t t131 = 420;
volatile int16_t x8072 = 45;
static int8_t x8100 = 0;
int16_t x8207 = -14;
volatile int8_t x8208 = -27;
static uint16_t x8237 = 227U;
uint64_t t139 = 4092LLU;
volatile int64_t x8543 = INT64_MIN;
uint16_t x8769 = 0U;
volatile uint32_t t145 = 24341862U;
int32_t x8940 = -1;
volatile uint64_t t146 = 660322383985710LLU;
int16_t x9259 = -1;
static volatile int32_t x9266 = -1;
volatile uint32_t t152 = 87U;
volatile uint16_t x9561 = 88U;
int64_t t156 = 14710700LL;
uint32_t x9593 = UINT32_MAX;
int16_t x9627 = INT16_MIN;
int16_t x9628 = INT16_MIN;
static uint64_t x9854 = UINT64_MAX;
uint32_t x9883 = UINT32_MAX;
int64_t x10145 = 95526LL;
static int16_t x10148 = 3;
int8_t x10156 = -16;
static uint32_t x10158 = 202715132U;
int8_t x10193 = INT8_MAX;
static uint64_t t170 = 4526343322279158LLU;
uint16_t x10393 = 26U;
volatile uint32_t x10448 = UINT32_MAX;
int32_t x10785 = INT32_MAX;
volatile int32_t t175 = 0;
volatile uint16_t x10894 = UINT16_MAX;
int64_t x10986 = INT64_MIN;
int8_t x11173 = INT8_MIN;
int64_t x11174 = -1LL;
volatile int64_t t180 = -26031918LL;
volatile uint16_t x11298 = 2947U;
uint64_t x11300 = UINT64_MAX;
uint64_t t182 = 30353839518203195LLU;
uint8_t x11452 = 7U;
int32_t x11524 = -1;
volatile uint8_t x11646 = 23U;
int32_t x11648 = -1;
int64_t x11692 = -1LL;
int32_t t191 = 12;
int8_t x11696 = 1;
static volatile int64_t t192 = 2811LL;
static volatile int64_t t193 = -22927905334513285LL;
int32_t x11942 = 248307;
int8_t x11954 = 1;
int32_t x11965 = INT32_MIN;
static uint64_t t196 = 4268732458324715262LLU;
uint16_t x12001 = 2126U;
uint64_t x12004 = UINT64_MAX;
int32_t x12050 = -1;
static uint32_t t198 = 6U;
volatile int32_t t199 = 283401749;


void f0(void) {
    	int16_t x5 = INT16_MAX;
	int16_t x7 = 2;
	int32_t t0 = 16911269;

    t0 = ((x5%x6)<<(x7-x8));

    if (t0 != 88) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x14 = UINT64_MAX;
	volatile uint64_t t1 = 1LLU;

    t1 = ((x13%x14)<<(x15-x16));

    if (t1 != 12884901888LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint32_t x105 = 111076U;
	int8_t x106 = -1;
	int32_t x107 = -1;
	static uint32_t t2 = 2U;

    t2 = ((x105%x106)<<(x107-x108));

    if (t2 != 111076U) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x201 = UINT32_MAX;
	volatile uint8_t x202 = 110U;
	int16_t x204 = 0;
	static volatile uint32_t t3 = 27153U;

    t3 = ((x201%x202)<<(x203-x204));

    if (t3 != 1677721600U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x338 = UINT8_MAX;
	int8_t x339 = 3;
	uint32_t x340 = UINT32_MAX;
	volatile int64_t t4 = -8041303LL;

    t4 = ((x337%x338)<<(x339-x340));

    if (t4 != 2032LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x349 = -40LL;
	static int64_t x350 = -1LL;
	static int32_t x351 = INT32_MIN;
	int32_t x352 = INT32_MIN;
	int64_t t5 = 8499053200316LL;

    t5 = ((x349%x350)<<(x351-x352));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint8_t x389 = 0U;
	int16_t x390 = INT16_MIN;
	int8_t x391 = 1;
	uint32_t x392 = UINT32_MAX;
	volatile int32_t t6 = -124230;

    t6 = ((x389%x390)<<(x391-x392));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x393 = 100U;
	static int64_t x394 = INT64_MIN;
	int32_t x395 = -1;
	int16_t x396 = -1;

    t7 = ((x393%x394)<<(x395-x396));

    if (t7 != 100LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x421 = 358LLU;
	int64_t x422 = INT64_MIN;
	uint8_t x423 = 35U;
	int8_t x424 = 10;
	static volatile uint64_t t8 = 85423348987347579LLU;

    t8 = ((x421%x422)<<(x423-x424));

    if (t8 != 12012486656LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x449 = -2166582637144LL;
	static uint16_t x450 = 2U;
	uint16_t x451 = 9U;
	static int16_t x452 = -1;
	volatile int64_t t9 = -1987836949779191LL;

    t9 = ((x449%x450)<<(x451-x452));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x637 = INT64_MIN;
	volatile uint64_t x638 = 31168LLU;
	int8_t x639 = -1;
	static volatile int64_t x640 = -1LL;
	volatile uint64_t t10 = 43LLU;

    t10 = ((x637%x638)<<(x639-x640));

    if (t10 != 19136LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x641 = INT8_MAX;
	volatile uint8_t x642 = UINT8_MAX;
	static int32_t x643 = INT32_MIN;
	volatile int32_t t11 = -23;

    t11 = ((x641%x642)<<(x643-x644));

    if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x677 = 136U;
	int8_t x678 = 4;

    t12 = ((x677%x678)<<(x679-x680));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint32_t x685 = 638156U;
	int64_t x686 = -1LL;
	uint32_t x688 = UINT32_MAX;
	int64_t t13 = -796869643003LL;

    t13 = ((x685%x686)<<(x687-x688));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint64_t x718 = UINT64_MAX;
	int8_t x719 = 6;
	volatile int16_t x720 = -1;
	uint64_t t14 = 10956629124LLU;

    t14 = ((x717%x718)<<(x719-x720));

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x745 = 1654;
	uint8_t x747 = 4U;
	volatile int64_t x748 = -1LL;
	volatile int32_t t15 = -63;

    t15 = ((x745%x746)<<(x747-x748));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x750 = INT8_MIN;
	uint64_t x752 = UINT64_MAX;
	uint64_t t16 = 2378417484624101LLU;

    t16 = ((x749%x750)<<(x751-x752));

    if (t16 != 502LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x769 = 224422751596LL;
	uint8_t x771 = 2U;
	static uint64_t x772 = UINT64_MAX;
	static int64_t t17 = -1423514755359226408LL;

    t17 = ((x769%x770)<<(x771-x772));

    if (t17 != 356888LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile uint64_t x778 = UINT64_MAX;
	uint8_t x779 = 112U;
	int8_t x780 = 55;
	volatile uint64_t t18 = 525LLU;

    t18 = ((x777%x778)<<(x779-x780));

    if (t18 != 18302628885633695744LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x789 = INT64_MAX;
	uint64_t x790 = 34795LLU;
	int8_t x792 = -57;
	static uint64_t t19 = 15010658LLU;

    t19 = ((x789%x790)<<(x791-x792));

    if (t19 != 1044835113549955072LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x839 = -1LL;
	volatile uint32_t t20 = 507134U;

    t20 = ((x837%x838)<<(x839-x840));

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x873 = INT64_MIN;
	int32_t x874 = INT32_MIN;
	int8_t x875 = 0;
	uint64_t x876 = UINT64_MAX;
	volatile int64_t t21 = -257394836988343LL;

    t21 = ((x873%x874)<<(x875-x876));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint16_t x965 = 0U;
	int32_t x968 = INT32_MAX;

    t22 = ((x965%x966)<<(x967-x968));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x985 = 74;
	int32_t x986 = -14890;
	int16_t x987 = -1;
	int8_t x988 = -1;
	static int32_t t23 = 1282631;

    t23 = ((x985%x986)<<(x987-x988));

    if (t23 != 74) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int32_t x1013 = INT32_MIN;
	uint32_t x1015 = UINT32_MAX;
	uint32_t x1016 = UINT32_MAX;
	int32_t t24 = 128992;

    t24 = ((x1013%x1014)<<(x1015-x1016));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x1063 = INT8_MIN;
	static volatile int8_t x1064 = INT8_MIN;
	volatile int32_t t25 = 25380055;

    t25 = ((x1061%x1062)<<(x1063-x1064));

    if (t25 != 1066) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x1161 = INT16_MIN;
	int64_t x1163 = -1LL;
	int64_t t26 = -88164944LL;

    t26 = ((x1161%x1162)<<(x1163-x1164));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x1206 = 2;
	uint32_t x1207 = 0U;
	int16_t x1208 = -1;
	volatile int32_t t27 = 3;

    t27 = ((x1205%x1206)<<(x1207-x1208));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x1293 = -1;
	uint64_t x1294 = UINT64_MAX;
	static uint8_t x1296 = 100U;
	volatile uint64_t t28 = 40271354669691066LLU;

    t28 = ((x1293%x1294)<<(x1295-x1296));

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint16_t x1317 = 1091U;
	int32_t x1318 = 26;
	int8_t x1319 = -1;
	volatile int32_t t29 = -373974;

    t29 = ((x1317%x1318)<<(x1319-x1320));

    if (t29 != 25) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint16_t x1321 = 11U;
	static volatile uint16_t x1322 = 3124U;
	int32_t x1323 = -1;

    t30 = ((x1321%x1322)<<(x1323-x1324));

    if (t30 != 22) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x1465 = UINT16_MAX;
	uint32_t x1466 = 213416294U;
	int16_t x1467 = -1;
	int32_t x1468 = -1;
	volatile uint32_t t31 = 63755U;

    t31 = ((x1465%x1466)<<(x1467-x1468));

    if (t31 != 65535U) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x1609 = UINT32_MAX;
	volatile uint64_t x1610 = 26770276LLU;
	int8_t x1611 = 14;
	static volatile uint16_t x1612 = 5U;
	volatile uint64_t t32 = 4018731LLU;

    t32 = ((x1609%x1610)<<(x1611-x1612));

    if (t32 != 6002245120LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x1625 = INT8_MAX;
	int32_t x1626 = -111;
	int16_t x1627 = -1;
	int8_t x1628 = -4;
	int32_t t33 = 92;

    t33 = ((x1625%x1626)<<(x1627-x1628));

    if (t33 != 128) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x1665 = -1;
	volatile int8_t x1667 = -1;
	volatile int8_t x1668 = -1;
	int32_t t34 = -281;

    t34 = ((x1665%x1666)<<(x1667-x1668));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x1773 = INT32_MIN;
	int16_t x1774 = INT16_MIN;
	uint32_t x1775 = UINT32_MAX;
	volatile int32_t t35 = -1658785;

    t35 = ((x1773%x1774)<<(x1775-x1776));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x1873 = INT16_MIN;
	int16_t x1874 = INT16_MIN;
	int8_t x1875 = 13;
	volatile int32_t t36 = -670562509;

    t36 = ((x1873%x1874)<<(x1875-x1876));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x1889 = 29;
	static int32_t x1890 = 64991104;
	static volatile int8_t x1891 = -1;
	static int32_t t37 = 141989323;

    t37 = ((x1889%x1890)<<(x1891-x1892));

    if (t37 != 29) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x1949 = INT8_MAX;
	static int16_t x1950 = -9;
	volatile int64_t x1951 = -1LL;

    t38 = ((x1949%x1950)<<(x1951-x1952));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x2001 = 93U;
	static volatile uint64_t t39 = 8583LLU;

    t39 = ((x2001%x2002)<<(x2003-x2004));

    if (t39 != 93LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x2165 = 8LL;
	int8_t x2166 = INT8_MIN;
	static uint64_t x2167 = 5LLU;
	static volatile int8_t x2168 = 1;
	int64_t t40 = -597249LL;

    t40 = ((x2165%x2166)<<(x2167-x2168));

    if (t40 != 128LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint8_t x2250 = UINT8_MAX;
	volatile int64_t x2251 = -1LL;
	int16_t x2252 = -2;
	volatile int32_t t41 = 22;

    t41 = ((x2249%x2250)<<(x2251-x2252));

    if (t41 != 20) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x2297 = UINT8_MAX;
	static int8_t x2299 = 5;
	volatile int8_t x2300 = 0;
	volatile int64_t t42 = 141920499LL;

    t42 = ((x2297%x2298)<<(x2299-x2300));

    if (t42 != 8160LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x2337 = 610767977846225871LL;
	static int32_t x2338 = -1;
	volatile uint16_t x2339 = 1U;
	volatile int8_t x2340 = 1;

    t43 = ((x2337%x2338)<<(x2339-x2340));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint64_t x2353 = UINT64_MAX;
	int16_t x2354 = INT16_MAX;
	uint8_t x2355 = 1U;
	uint64_t x2356 = UINT64_MAX;
	volatile uint64_t t44 = 20075680LLU;

    t44 = ((x2353%x2354)<<(x2355-x2356));

    if (t44 != 60LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint64_t x2385 = 19888840025396203LLU;
	int16_t x2386 = INT16_MIN;
	static int8_t x2387 = 24;

    t45 = ((x2385%x2386)<<(x2387-x2388));

    if (t45 != 3664572564803420160LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x2422 = INT64_MIN;
	uint8_t x2423 = 7U;
	static volatile uint8_t x2424 = 0U;
	volatile int64_t t46 = -136666LL;

    t46 = ((x2421%x2422)<<(x2423-x2424));

    if (t46 != 581120LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x2453 = 5258U;
	uint16_t x2454 = UINT16_MAX;
	int64_t x2455 = -1LL;
	volatile int32_t t47 = -2;

    t47 = ((x2453%x2454)<<(x2455-x2456));

    if (t47 != 5258) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x2513 = 10;
	static uint16_t x2516 = 0U;
	static volatile int32_t t48 = -429440562;

    t48 = ((x2513%x2514)<<(x2515-x2516));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x2557 = 1889555;
	static int16_t x2559 = INT16_MIN;
	static int16_t x2560 = INT16_MIN;
	volatile int64_t t49 = -76942561610749LL;

    t49 = ((x2557%x2558)<<(x2559-x2560));

    if (t49 != 1889555LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint64_t x2645 = 31939171337796LLU;
	static int8_t x2646 = INT8_MIN;
	static volatile int64_t x2648 = -1LL;
	uint64_t t50 = 5324449852412970LLU;

    t50 = ((x2645%x2646)<<(x2647-x2648));

    if (t50 != 17045148223271862272LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x2659 = 1LL;
	int32_t x2660 = -1;

    t51 = ((x2657%x2658)<<(x2659-x2660));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint8_t x2701 = 22U;
	static volatile uint64_t x2702 = 7402LLU;
	int16_t x2703 = INT16_MIN;
	int16_t x2704 = INT16_MIN;
	uint64_t t52 = 594673295632253904LLU;

    t52 = ((x2701%x2702)<<(x2703-x2704));

    if (t52 != 22LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x2705 = 37LLU;
	static int16_t x2706 = -1;
	int32_t x2707 = INT32_MIN;
	int32_t x2708 = INT32_MIN;
	static volatile uint64_t t53 = 7018799052352815169LLU;

    t53 = ((x2705%x2706)<<(x2707-x2708));

    if (t53 != 37LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x2733 = UINT16_MAX;
	uint32_t x2734 = UINT32_MAX;
	static uint64_t x2735 = 0LLU;
	volatile int16_t x2736 = -11;
	uint32_t t54 = 1762U;

    t54 = ((x2733%x2734)<<(x2735-x2736));

    if (t54 != 134215680U) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x2757 = INT16_MAX;
	static int32_t x2758 = 25;
	int64_t x2760 = -1LL;
	int32_t t55 = -13421072;

    t55 = ((x2757%x2758)<<(x2759-x2760));

    if (t55 != 17) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x2921 = INT16_MAX;
	volatile int16_t x2922 = INT16_MAX;
	uint32_t x2923 = UINT32_MAX;
	static int8_t x2924 = -1;
	int32_t t56 = 10398;

    t56 = ((x2921%x2922)<<(x2923-x2924));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x2945 = INT16_MAX;
	int8_t x2946 = -1;
	int8_t x2947 = 1;
	uint64_t x2948 = UINT64_MAX;
	volatile int32_t t57 = -477663;

    t57 = ((x2945%x2946)<<(x2947-x2948));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint8_t x2957 = 36U;
	int16_t x2958 = INT16_MIN;
	volatile int32_t x2960 = INT32_MIN;
	int32_t t58 = 10252293;

    t58 = ((x2957%x2958)<<(x2959-x2960));

    if (t58 != 36) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x2966 = 12LLU;
	uint32_t x2967 = 1U;
	int32_t x2968 = 1;
	volatile uint64_t t59 = 1LLU;

    t59 = ((x2965%x2966)<<(x2967-x2968));

    if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x3065 = 125U;
	volatile uint16_t x3066 = UINT16_MAX;
	static uint8_t x3067 = 6U;
	volatile int32_t t60 = -327431052;

    t60 = ((x3065%x3066)<<(x3067-x3068));

    if (t60 != 2000) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x3117 = 1U;
	int32_t x3118 = INT32_MAX;
	static volatile int32_t x3119 = -1;
	static uint32_t x3120 = UINT32_MAX;

    t61 = ((x3117%x3118)<<(x3119-x3120));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x3165 = INT16_MIN;
	volatile int32_t x3168 = -1;
	volatile uint32_t t62 = 459838666U;

    t62 = ((x3165%x3166)<<(x3167-x3168));

    if (t62 != 698U) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x3201 = INT8_MIN;
	uint32_t x3202 = UINT32_MAX;
	int64_t x3203 = INT64_MIN;
	static volatile int64_t x3204 = INT64_MIN;
	uint32_t t63 = 969824U;

    t63 = ((x3201%x3202)<<(x3203-x3204));

    if (t63 != 4294967168U) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x3342 = 14U;
	int64_t t64 = -876330069930206421LL;

    t64 = ((x3341%x3342)<<(x3343-x3344));

    if (t64 != 589824LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x3481 = 1;
	int8_t x3482 = -1;
	int32_t x3483 = 4;
	volatile int8_t x3484 = -1;

    t65 = ((x3481%x3482)<<(x3483-x3484));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x3605 = 1325976650812LL;
	int32_t x3606 = INT32_MAX;
	static int16_t x3607 = -1;
	volatile uint64_t x3608 = UINT64_MAX;
	volatile int64_t t66 = -452591332018613697LL;

    t66 = ((x3605%x3606)<<(x3607-x3608));

    if (t66 != 979240613LL) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint16_t x3653 = UINT16_MAX;
	int16_t x3655 = INT16_MIN;
	int16_t x3656 = INT16_MIN;

    t67 = ((x3653%x3654)<<(x3655-x3656));

    if (t67 != 65535LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint16_t x3721 = UINT16_MAX;
	int8_t x3723 = -7;
	int32_t t68 = 119;

    t68 = ((x3721%x3722)<<(x3723-x3724));

    if (t68 != 50331648) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x3737 = 1773;
	uint32_t x3738 = 39391930U;

    t69 = ((x3737%x3738)<<(x3739-x3740));

    if (t69 != 1773U) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint32_t x3782 = UINT32_MAX;
	int8_t x3783 = INT8_MIN;

    t70 = ((x3781%x3782)<<(x3783-x3784));

    if (t70 != 154083518LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x3822 = INT32_MIN;
	int8_t x3823 = INT8_MIN;
	int8_t x3824 = INT8_MIN;
	volatile int32_t t71 = -7363927;

    t71 = ((x3821%x3822)<<(x3823-x3824));

    if (t71 != 32767) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x3857 = 313197U;
	static int64_t x3858 = 5364450182355613LL;
	uint16_t x3859 = 1U;
	static uint64_t x3860 = UINT64_MAX;

    t72 = ((x3857%x3858)<<(x3859-x3860));

    if (t72 != 1252788LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint8_t x3886 = 112U;
	uint8_t x3887 = 12U;
	uint32_t x3888 = 6U;
	volatile int32_t t73 = 1938;

    t73 = ((x3885%x3886)<<(x3887-x3888));

    if (t73 != 320) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x3993 = 0;
	int16_t x3995 = INT16_MIN;
	volatile int16_t x3996 = INT16_MIN;
	int32_t t74 = -642546;

    t74 = ((x3993%x3994)<<(x3995-x3996));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x4177 = 5;
	uint32_t x4178 = UINT32_MAX;
	int16_t x4179 = -25;
	volatile int16_t x4180 = -35;
	uint32_t t75 = 7U;

    t75 = ((x4177%x4178)<<(x4179-x4180));

    if (t75 != 5120U) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x4205 = INT64_MIN;
	int16_t x4206 = INT16_MIN;
	static volatile uint16_t x4207 = 59U;
	static int64_t x4208 = 0LL;

    t76 = ((x4205%x4206)<<(x4207-x4208));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int16_t x4261 = -1;
	int8_t x4262 = -1;
	volatile uint8_t x4263 = 3U;
	uint8_t x4264 = 0U;
	volatile int32_t t77 = -6126768;

    t77 = ((x4261%x4262)<<(x4263-x4264));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x4377 = 5U;
	volatile int8_t x4378 = INT8_MIN;
	int16_t x4379 = INT16_MIN;
	int32_t t78 = -29;

    t78 = ((x4377%x4378)<<(x4379-x4380));

    if (t78 != 5) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x4425 = UINT8_MAX;
	int64_t x4426 = 127LL;
	uint64_t x4427 = UINT64_MAX;
	static volatile int8_t x4428 = -1;
	static volatile int64_t t79 = -1LL;

    t79 = ((x4425%x4426)<<(x4427-x4428));

    if (t79 != 1LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x4473 = 53;
	uint8_t x4474 = 13U;
	uint64_t x4475 = UINT64_MAX;
	volatile int64_t x4476 = -1LL;
	static int32_t t80 = -62366;

    t80 = ((x4473%x4474)<<(x4475-x4476));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x4503 = INT64_MIN;
	static int64_t x4504 = INT64_MIN;
	volatile int64_t t81 = 338LL;

    t81 = ((x4501%x4502)<<(x4503-x4504));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x4513 = 0U;
	int32_t x4514 = -1;
	int32_t x4516 = -1;
	static volatile int32_t t82 = 18925;

    t82 = ((x4513%x4514)<<(x4515-x4516));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint8_t x4529 = 4U;
	int8_t x4530 = INT8_MAX;
	int32_t x4531 = -1;
	static int8_t x4532 = -8;
	int32_t t83 = -24655;

    t83 = ((x4529%x4530)<<(x4531-x4532));

    if (t83 != 512) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x4765 = 5238U;
	static uint32_t x4766 = 499621552U;
	int8_t x4767 = -1;
	int8_t x4768 = -1;
	volatile uint32_t t84 = 9147466U;

    t84 = ((x4765%x4766)<<(x4767-x4768));

    if (t84 != 5238U) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint32_t x4770 = 4877U;
	static uint8_t x4771 = 2U;
	static int8_t x4772 = -22;
	uint32_t t85 = 782346709U;

    t85 = ((x4769%x4770)<<(x4771-x4772));

    if (t85 != 486539264U) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x4917 = 1018242;
	int32_t x4918 = INT32_MIN;
	static uint8_t x4919 = 2U;
	int64_t x4920 = -1LL;
	static int32_t t86 = 2;

    t86 = ((x4917%x4918)<<(x4919-x4920));

    if (t86 != 8145936) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x5005 = 74LL;
	static volatile int16_t x5006 = 1;
	int8_t x5008 = -1;
	int64_t t87 = 915LL;

    t87 = ((x5005%x5006)<<(x5007-x5008));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x5009 = UINT32_MAX;
	volatile uint32_t t88 = 29971817U;

    t88 = ((x5009%x5010)<<(x5011-x5012));

    if (t88 != 4294967292U) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x5137 = 3;
	volatile uint32_t x5139 = UINT32_MAX;
	uint32_t x5140 = UINT32_MAX;
	int32_t t89 = 648296039;

    t89 = ((x5137%x5138)<<(x5139-x5140));

    if (t89 != 3) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint32_t x5142 = UINT32_MAX;
	int32_t x5143 = -1;
	static volatile int16_t x5144 = -1;
	volatile uint32_t t90 = 0U;

    t90 = ((x5141%x5142)<<(x5143-x5144));

    if (t90 != 5U) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x5217 = 760636372624LLU;
	volatile int32_t x5218 = INT32_MIN;
	uint32_t x5220 = UINT32_MAX;

    t91 = ((x5217%x5218)<<(x5219-x5220));

    if (t91 != 760636372624LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x5239 = -1LL;
	static int8_t x5240 = -1;
	volatile uint64_t t92 = 51222012665938792LLU;

    t92 = ((x5237%x5238)<<(x5239-x5240));

    if (t92 != 12097989046705257LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x5263 = INT32_MIN;
	int64_t t93 = 4LL;

    t93 = ((x5261%x5262)<<(x5263-x5264));

    if (t93 != 331274LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x5445 = INT64_MAX;
	uint16_t x5446 = 160U;
	volatile int8_t x5447 = INT8_MIN;
	volatile int8_t x5448 = INT8_MIN;

    t94 = ((x5445%x5446)<<(x5447-x5448));

    if (t94 != 127LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x5461 = 58U;
	uint16_t x5462 = UINT16_MAX;
	static int8_t x5463 = -1;
	int8_t x5464 = -1;
	uint32_t t95 = 1U;

    t95 = ((x5461%x5462)<<(x5463-x5464));

    if (t95 != 58U) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x5533 = INT16_MIN;
	volatile uint32_t x5534 = 35U;
	int8_t x5535 = -1;
	static int16_t x5536 = -1;
	static volatile uint32_t t96 = 8306U;

    t96 = ((x5533%x5534)<<(x5535-x5536));

    if (t96 != 3U) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x5573 = INT64_MAX;
	volatile uint64_t x5574 = 34356911231LLU;
	int32_t x5575 = INT32_MIN;
	int32_t x5576 = INT32_MIN;
	uint64_t t97 = 147273675LLU;

    t97 = ((x5573%x5574)<<(x5575-x5576));

    if (t97 != 28354499143LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint16_t x5721 = 8U;
	volatile int16_t x5722 = -1;
	int16_t x5723 = -1;
	int64_t x5724 = -1LL;
	static volatile int32_t t98 = 874;

    t98 = ((x5721%x5722)<<(x5723-x5724));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x5739 = 11U;
	uint16_t x5740 = 0U;

    t99 = ((x5737%x5738)<<(x5739-x5740));

    if (t99 != 415744LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x5778 = UINT16_MAX;

    t100 = ((x5777%x5778)<<(x5779-x5780));

    if (t100 != 10113U) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint8_t x5913 = 0U;
	uint64_t x5914 = 199353039398LLU;
	uint8_t x5915 = 15U;
	int16_t x5916 = 0;
	uint64_t t101 = 461LLU;

    t101 = ((x5913%x5914)<<(x5915-x5916));

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x5934 = 1LLU;
	int32_t x5935 = -1;
	int64_t x5936 = -1LL;
	uint64_t t102 = 868379LLU;

    t102 = ((x5933%x5934)<<(x5935-x5936));

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x5941 = 75LL;
	static uint64_t x5942 = 3862710823264535206LLU;
	int64_t x5943 = -1LL;
	static int64_t x5944 = -1LL;
	uint64_t t103 = 3800311871175425LLU;

    t103 = ((x5941%x5942)<<(x5943-x5944));

    if (t103 != 75LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint64_t x5997 = 149166929LLU;
	int8_t x5998 = 19;
	uint32_t x5999 = UINT32_MAX;
	int8_t x6000 = -26;
	uint64_t t104 = 221LLU;

    t104 = ((x5997%x5998)<<(x5999-x6000));

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x6006 = INT16_MIN;
	int64_t t105 = 317LL;

    t105 = ((x6005%x6006)<<(x6007-x6008));

    if (t105 != 131068LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint64_t x6033 = 358801474LLU;
	static int64_t x6034 = INT64_MIN;
	static uint8_t x6035 = 5U;
	uint8_t x6036 = 3U;
	static uint64_t t106 = 230429LLU;

    t106 = ((x6033%x6034)<<(x6035-x6036));

    if (t106 != 1435205896LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x6177 = INT16_MAX;
	int32_t x6178 = -1;
	uint64_t x6179 = 0LLU;
	volatile int32_t t107 = 11904;

    t107 = ((x6177%x6178)<<(x6179-x6180));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x6213 = 0;
	int64_t x6214 = INT64_MIN;
	static int16_t x6215 = INT16_MIN;
	static int16_t x6216 = INT16_MIN;

    t108 = ((x6213%x6214)<<(x6215-x6216));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint32_t x6325 = UINT32_MAX;
	uint32_t x6326 = UINT32_MAX;
	int32_t x6327 = 0;
	volatile uint32_t t109 = 437368686U;

    t109 = ((x6325%x6326)<<(x6327-x6328));

    if (t109 != 0U) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x6393 = -792;
	static uint64_t x6394 = UINT64_MAX;
	int8_t x6395 = 1;
	volatile int8_t x6396 = -1;

    t110 = ((x6393%x6394)<<(x6395-x6396));

    if (t110 != 18446744073709548448LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x6685 = -12;
	uint64_t x6686 = 155737878784LLU;
	int64_t x6687 = -1LL;
	volatile int64_t x6688 = -1LL;
	uint64_t t111 = 6104LLU;

    t111 = ((x6685%x6686)<<(x6687-x6688));

    if (t111 != 53511408116LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x6929 = 109368U;
	int32_t x6930 = INT32_MIN;
	uint16_t x6931 = 13U;
	uint32_t t112 = 71U;

    t112 = ((x6929%x6930)<<(x6931-x6932));

    if (t112 != 1791885312U) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x6937 = INT64_MIN;
	uint64_t x6938 = 3589568300256736LLU;
	uint8_t x6939 = 0U;
	int16_t x6940 = -1;
	uint64_t t113 = 7234317364LLU;

    t113 = ((x6937%x6938)<<(x6939-x6940));

    if (t113 != 3542146990442048LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x6941 = -2302;
	static int8_t x6944 = -8;
	static volatile int32_t t114 = -14554;

    t114 = ((x6941%x6942)<<(x6943-x6944));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint16_t x6953 = UINT16_MAX;
	volatile int64_t x6955 = INT64_MIN;
	int64_t x6956 = INT64_MIN;
	int32_t t115 = 27301376;

    t115 = ((x6953%x6954)<<(x6955-x6956));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint16_t x6973 = UINT16_MAX;
	static uint32_t t116 = 11659044U;

    t116 = ((x6973%x6974)<<(x6975-x6976));

    if (t116 != 1U) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x7066 = 4;
	int8_t x7067 = INT8_MIN;
	volatile uint32_t t117 = 17181U;

    t117 = ((x7065%x7066)<<(x7067-x7068));

    if (t117 != 3U) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x7137 = UINT32_MAX;
	uint32_t x7138 = 3283U;
	int16_t x7139 = 22;
	int8_t x7140 = 8;
	uint32_t t118 = 201443326U;

    t118 = ((x7137%x7138)<<(x7139-x7140));

    if (t118 != 36749312U) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint16_t x7189 = 15U;
	static int8_t x7190 = -25;
	int8_t x7191 = 28;
	static int64_t x7192 = 11LL;
	int32_t t119 = 4;

    t119 = ((x7189%x7190)<<(x7191-x7192));

    if (t119 != 1966080) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x7193 = 0U;
	int16_t x7194 = INT16_MAX;
	int32_t x7195 = -1;
	int32_t t120 = -1;

    t120 = ((x7193%x7194)<<(x7195-x7196));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x7218 = -85LL;
	int16_t x7219 = INT16_MIN;
	volatile int16_t x7220 = INT16_MIN;
	uint64_t t121 = 25590969LLU;

    t121 = ((x7217%x7218)<<(x7219-x7220));

    if (t121 != 229813178321263147LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x7257 = 550;
	static volatile int16_t x7259 = -1;
	static int32_t x7260 = -1;
	volatile int32_t t122 = -89701299;

    t122 = ((x7257%x7258)<<(x7259-x7260));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint64_t x7453 = UINT64_MAX;
	int64_t x7454 = -1LL;
	int8_t x7455 = INT8_MIN;
	volatile uint64_t t123 = 504961LLU;

    t123 = ((x7453%x7454)<<(x7455-x7456));

    if (t123 != 0LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x7461 = INT16_MIN;
	static volatile int8_t x7462 = 1;
	uint32_t x7463 = 1U;
	int64_t x7464 = 0LL;
	volatile int32_t t124 = 51;

    t124 = ((x7461%x7462)<<(x7463-x7464));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x7473 = 26U;
	uint64_t x7475 = UINT64_MAX;
	static int64_t x7476 = -6LL;
	int32_t t125 = 890645454;

    t125 = ((x7473%x7474)<<(x7475-x7476));

    if (t125 != 832) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x7589 = 5;
	static int64_t x7590 = INT64_MIN;
	volatile uint8_t x7591 = UINT8_MAX;
	volatile uint8_t x7592 = UINT8_MAX;
	volatile int64_t t126 = 56801758878486421LL;

    t126 = ((x7589%x7590)<<(x7591-x7592));

    if (t126 != 5LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x7601 = 3;
	uint8_t x7602 = 56U;
	int8_t x7603 = -1;
	volatile int8_t x7604 = -1;

    t127 = ((x7601%x7602)<<(x7603-x7604));

    if (t127 != 3) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint16_t x7637 = UINT16_MAX;
	static int16_t x7638 = INT16_MIN;
	static int32_t x7639 = -1;
	static uint64_t x7640 = UINT64_MAX;
	static int32_t t128 = 26698;

    t128 = ((x7637%x7638)<<(x7639-x7640));

    if (t128 != 32767) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile uint16_t x7853 = 95U;
	uint32_t x7854 = 108670U;
	int16_t x7855 = -1;
	static int8_t x7856 = -1;
	uint32_t t129 = 29363U;

    t129 = ((x7853%x7854)<<(x7855-x7856));

    if (t129 != 95U) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x7917 = 8691480166668464LL;
	int32_t x7919 = -1;
	int8_t x7920 = -1;
	volatile int64_t t130 = 82472265176319LL;

    t130 = ((x7917%x7918)<<(x7919-x7920));

    if (t130 != 2LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x7982 = INT8_MIN;
	int64_t x7983 = INT64_MIN;

    t131 = ((x7981%x7982)<<(x7983-x7984));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x8005 = 21;
	int64_t x8006 = INT64_MIN;
	uint16_t x8007 = 1U;
	uint64_t x8008 = UINT64_MAX;
	volatile int64_t t132 = -238735222644678LL;

    t132 = ((x8005%x8006)<<(x8007-x8008));

    if (t132 != 84LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x8069 = 11;
	volatile uint8_t x8070 = UINT8_MAX;
	volatile uint8_t x8071 = 48U;
	int32_t t133 = 77150311;

    t133 = ((x8069%x8070)<<(x8071-x8072));

    if (t133 != 88) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x8097 = 0;
	uint64_t x8098 = 190LLU;
	uint8_t x8099 = 21U;
	static uint64_t t134 = 8507155LLU;

    t134 = ((x8097%x8098)<<(x8099-x8100));

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x8157 = 1318866366319LLU;
	volatile int32_t x8158 = INT32_MIN;
	uint8_t x8159 = 2U;
	uint16_t x8160 = 2U;
	uint64_t t135 = 7416LLU;

    t135 = ((x8157%x8158)<<(x8159-x8160));

    if (t135 != 1318866366319LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint8_t x8205 = 68U;
	uint16_t x8206 = 724U;
	static volatile int32_t t136 = 12;

    t136 = ((x8205%x8206)<<(x8207-x8208));

    if (t136 != 557056) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int64_t x8238 = INT64_MIN;
	int32_t x8239 = -1;
	volatile int64_t x8240 = -20LL;
	int64_t t137 = 56313223624LL;

    t137 = ((x8237%x8238)<<(x8239-x8240));

    if (t137 != 119013376LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x8353 = 2651;
	volatile int64_t x8354 = 3LL;
	int32_t x8355 = -1;
	uint32_t x8356 = UINT32_MAX;
	int64_t t138 = -198246336617530424LL;

    t138 = ((x8353%x8354)<<(x8355-x8356));

    if (t138 != 2LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x8425 = 429483883762898600LLU;
	int16_t x8426 = INT16_MIN;
	volatile uint64_t x8427 = UINT64_MAX;
	static int64_t x8428 = -1LL;

    t139 = ((x8425%x8426)<<(x8427-x8428));

    if (t139 != 429483883762898600LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x8541 = -1;
	uint32_t x8542 = UINT32_MAX;
	volatile int64_t x8544 = INT64_MIN;
	uint32_t t140 = 47583U;

    t140 = ((x8541%x8542)<<(x8543-x8544));

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint64_t x8649 = UINT64_MAX;
	static int64_t x8650 = INT64_MAX;
	uint8_t x8651 = 8U;
	uint32_t x8652 = 2U;
	volatile uint64_t t141 = 352085539723575961LLU;

    t141 = ((x8649%x8650)<<(x8651-x8652));

    if (t141 != 64LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x8770 = 1773LLU;
	int16_t x8771 = INT16_MIN;
	int16_t x8772 = INT16_MIN;
	uint64_t t142 = 2636325142LLU;

    t142 = ((x8769%x8770)<<(x8771-x8772));

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x8785 = 64LLU;
	int8_t x8786 = INT8_MIN;
	uint8_t x8787 = 22U;
	int16_t x8788 = -13;
	uint64_t t143 = 3307008795118LLU;

    t143 = ((x8785%x8786)<<(x8787-x8788));

    if (t143 != 2199023255552LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint8_t x8901 = UINT8_MAX;
	uint8_t x8902 = 1U;
	uint8_t x8903 = 17U;
	int8_t x8904 = -1;
	volatile int32_t t144 = 726726022;

    t144 = ((x8901%x8902)<<(x8903-x8904));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x8905 = 38144622U;
	volatile uint8_t x8906 = 2U;
	volatile int8_t x8907 = -3;
	int8_t x8908 = -5;

    t145 = ((x8905%x8906)<<(x8907-x8908));

    if (t145 != 0U) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x8937 = -13250;
	uint64_t x8938 = 883832187LLU;
	uint8_t x8939 = 22U;

    t146 = ((x8937%x8938)<<(x8939-x8940));

    if (t146 != 3644344703647744LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint64_t x9245 = 5838724LLU;
	int8_t x9246 = INT8_MAX;
	uint32_t x9247 = UINT32_MAX;
	int8_t x9248 = -1;
	uint64_t t147 = 4064LLU;

    t147 = ((x9245%x9246)<<(x9247-x9248));

    if (t147 != 26LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x9257 = UINT16_MAX;
	static int64_t x9258 = INT64_MIN;
	int32_t x9260 = -21;
	int64_t t148 = -55127962631LL;

    t148 = ((x9257%x9258)<<(x9259-x9260));

    if (t148 != 68718428160LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x9265 = 46204U;
	int16_t x9267 = INT16_MIN;
	static int16_t x9268 = INT16_MIN;
	uint32_t t149 = 344U;

    t149 = ((x9265%x9266)<<(x9267-x9268));

    if (t149 != 46204U) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x9349 = UINT64_MAX;
	uint32_t x9350 = 902444368U;
	int16_t x9351 = 4;
	int64_t x9352 = -1LL;
	static volatile uint64_t t150 = 3377126398394LLU;

    t150 = ((x9349%x9350)<<(x9351-x9352));

    if (t150 != 23976974816LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x9361 = UINT64_MAX;
	static int8_t x9362 = INT8_MIN;
	int16_t x9363 = INT16_MIN;
	volatile int16_t x9364 = INT16_MIN;
	static volatile uint64_t t151 = 67305248359LLU;

    t151 = ((x9361%x9362)<<(x9363-x9364));

    if (t151 != 127LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x9445 = 15;
	volatile uint32_t x9446 = 5U;
	static volatile int64_t x9447 = -1LL;
	volatile int64_t x9448 = -1LL;

    t152 = ((x9445%x9446)<<(x9447-x9448));

    if (t152 != 0U) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint64_t x9485 = 1536LLU;
	volatile uint8_t x9486 = UINT8_MAX;
	static uint8_t x9487 = 5U;
	int16_t x9488 = -1;
	uint64_t t153 = 1040125862026LLU;

    t153 = ((x9485%x9486)<<(x9487-x9488));

    if (t153 != 384LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x9562 = -1;
	volatile int64_t x9563 = 3LL;
	static uint64_t x9564 = 1LLU;
	volatile int32_t t154 = 1;

    t154 = ((x9561%x9562)<<(x9563-x9564));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x9569 = 30373LL;
	int64_t x9570 = -178604056LL;
	uint8_t x9571 = 2U;
	volatile int16_t x9572 = -1;
	volatile int64_t t155 = 577560519605173686LL;

    t155 = ((x9569%x9570)<<(x9571-x9572));

    if (t155 != 242984LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x9589 = INT32_MAX;
	static int64_t x9590 = -1LL;
	uint8_t x9591 = 6U;
	uint32_t x9592 = 6U;

    t156 = ((x9589%x9590)<<(x9591-x9592));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x9594 = -115723094349637822LL;
	int32_t x9595 = INT32_MAX;
	static int32_t x9596 = INT32_MAX;
	static int64_t t157 = -109226297773458LL;

    t157 = ((x9593%x9594)<<(x9595-x9596));

    if (t157 != 4294967295LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x9625 = 829824117LLU;
	uint32_t x9626 = UINT32_MAX;
	volatile uint64_t t158 = 8623953LLU;

    t158 = ((x9625%x9626)<<(x9627-x9628));

    if (t158 != 829824117LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x9853 = UINT64_MAX;
	uint8_t x9855 = 7U;
	int32_t x9856 = -1;
	uint64_t t159 = 6447LLU;

    t159 = ((x9853%x9854)<<(x9855-x9856));

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x9881 = 2U;
	uint64_t x9882 = 219LLU;
	int8_t x9884 = -1;
	volatile uint64_t t160 = 1616759763LLU;

    t160 = ((x9881%x9882)<<(x9883-x9884));

    if (t160 != 2LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x9885 = 1;
	int64_t x9886 = -1LL;
	int8_t x9887 = INT8_MIN;
	volatile int8_t x9888 = INT8_MIN;
	volatile int64_t t161 = -142437298719611396LL;

    t161 = ((x9885%x9886)<<(x9887-x9888));

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x10009 = INT8_MIN;
	uint32_t x10010 = 22422066U;
	volatile int32_t x10011 = -1;
	volatile uint64_t x10012 = UINT64_MAX;
	static volatile uint32_t t162 = 1474439U;

    t162 = ((x10009%x10010)<<(x10011-x10012));

    if (t162 != 12352562U) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x10021 = 3U;
	uint32_t x10022 = 84772481U;
	volatile uint8_t x10023 = 1U;
	int8_t x10024 = -1;
	static uint32_t t163 = 1554U;

    t163 = ((x10021%x10022)<<(x10023-x10024));

    if (t163 != 12U) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint64_t x10101 = UINT64_MAX;
	static uint64_t x10102 = UINT64_MAX;
	uint8_t x10103 = 5U;
	uint8_t x10104 = 1U;
	volatile uint64_t t164 = 746589526768LLU;

    t164 = ((x10101%x10102)<<(x10103-x10104));

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x10146 = INT16_MIN;
	uint8_t x10147 = 37U;
	int64_t t165 = 8079952025LL;

    t165 = ((x10145%x10146)<<(x10147-x10148));

    if (t165 != 515224276828160LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x10153 = INT32_MIN;
	int8_t x10154 = -1;
	static uint64_t x10155 = UINT64_MAX;
	static int32_t t166 = -14224;

    t166 = ((x10153%x10154)<<(x10155-x10156));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x10157 = INT32_MAX;
	uint8_t x10159 = 7U;
	int16_t x10160 = -1;
	volatile uint32_t t167 = 10737244U;

    t167 = ((x10157%x10158)<<(x10159-x10160));

    if (t167 != 740304640U) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x10194 = INT16_MIN;
	uint16_t x10195 = 1U;
	static int8_t x10196 = -1;
	volatile int32_t t168 = 607494;

    t168 = ((x10193%x10194)<<(x10195-x10196));

    if (t168 != 508) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x10229 = INT8_MAX;
	static uint32_t x10230 = 96556U;
	int64_t x10231 = 0LL;
	static volatile int8_t x10232 = -1;
	static uint32_t t169 = 6521106U;

    t169 = ((x10229%x10230)<<(x10231-x10232));

    if (t169 != 254U) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x10241 = UINT64_MAX;
	int16_t x10242 = 2307;
	uint32_t x10243 = UINT32_MAX;
	int16_t x10244 = -1;

    t170 = ((x10241%x10242)<<(x10243-x10244));

    if (t170 != 360LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int8_t x10394 = -1;
	int16_t x10395 = -1;
	int64_t x10396 = -1LL;
	volatile int32_t t171 = 270265;

    t171 = ((x10393%x10394)<<(x10395-x10396));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x10429 = 4;
	int64_t x10430 = INT64_MAX;
	int32_t x10431 = -1;
	static int8_t x10432 = -3;
	volatile int64_t t172 = -103968LL;

    t172 = ((x10429%x10430)<<(x10431-x10432));

    if (t172 != 16LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x10445 = UINT16_MAX;
	static int32_t x10446 = -1;
	int16_t x10447 = -1;
	volatile int32_t t173 = -20701297;

    t173 = ((x10445%x10446)<<(x10447-x10448));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint32_t x10609 = 90819U;
	int8_t x10610 = INT8_MAX;
	volatile int8_t x10611 = INT8_MIN;
	static int8_t x10612 = INT8_MIN;
	volatile uint32_t t174 = 0U;

    t174 = ((x10609%x10610)<<(x10611-x10612));

    if (t174 != 14U) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x10786 = UINT8_MAX;
	volatile int8_t x10787 = -1;
	int16_t x10788 = -1;

    t175 = ((x10785%x10786)<<(x10787-x10788));

    if (t175 != 127) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x10893 = 104;
	static volatile int32_t x10895 = -1;
	volatile int32_t x10896 = -14;
	int32_t t176 = 111;

    t176 = ((x10893%x10894)<<(x10895-x10896));

    if (t176 != 851968) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x10981 = -1;
	uint32_t x10982 = 22261575U;
	volatile int8_t x10983 = INT8_MIN;
	int8_t x10984 = INT8_MIN;
	volatile uint32_t t177 = 41676U;

    t177 = ((x10981%x10982)<<(x10983-x10984));

    if (t177 != 20744895U) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x10985 = INT32_MAX;
	int32_t x10987 = INT32_MIN;
	int32_t x10988 = INT32_MIN;
	volatile int64_t t178 = -183LL;

    t178 = ((x10985%x10986)<<(x10987-x10988));

    if (t178 != 2147483647LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x11017 = UINT32_MAX;
	int32_t x11018 = INT32_MIN;
	int8_t x11019 = 4;
	int8_t x11020 = -1;
	static volatile uint32_t t179 = 29142U;

    t179 = ((x11017%x11018)<<(x11019-x11020));

    if (t179 != 4294967264U) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint8_t x11175 = 4U;
	static volatile uint8_t x11176 = 1U;

    t180 = ((x11173%x11174)<<(x11175-x11176));

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x11297 = INT8_MAX;
	static int64_t x11299 = 1LL;
	volatile int32_t t181 = 425;

    t181 = ((x11297%x11298)<<(x11299-x11300));

    if (t181 != 508) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x11329 = 2;
	volatile uint64_t x11330 = 1705757249LLU;
	volatile int8_t x11331 = 10;
	volatile uint8_t x11332 = 9U;

    t182 = ((x11329%x11330)<<(x11331-x11332));

    if (t182 != 4LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x11353 = INT16_MIN;
	int16_t x11354 = -1;
	uint8_t x11355 = 3U;
	uint8_t x11356 = 0U;
	volatile int32_t t183 = -1578181;

    t183 = ((x11353%x11354)<<(x11355-x11356));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x11393 = 65568381534LL;
	int32_t x11394 = INT32_MAX;
	uint32_t x11395 = UINT32_MAX;
	int32_t x11396 = -1;
	volatile int64_t t184 = 1135091LL;

    t184 = ((x11393%x11394)<<(x11395-x11396));

    if (t184 != 1143872124LL) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint8_t x11449 = 30U;
	int16_t x11450 = INT16_MIN;
	uint8_t x11451 = 11U;
	static volatile int32_t t185 = 11518;

    t185 = ((x11449%x11450)<<(x11451-x11452));

    if (t185 != 480) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x11461 = 261;
	uint16_t x11462 = 14U;
	int16_t x11463 = -1;
	int8_t x11464 = -1;
	static volatile int32_t t186 = 752313;

    t186 = ((x11461%x11462)<<(x11463-x11464));

    if (t186 != 9) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x11521 = 1U;
	uint32_t x11522 = 1U;
	int8_t x11523 = -1;
	volatile uint32_t t187 = 7102426U;

    t187 = ((x11521%x11522)<<(x11523-x11524));

    if (t187 != 0U) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x11601 = INT32_MIN;
	uint8_t x11602 = 2U;
	int32_t x11603 = INT32_MAX;
	int32_t x11604 = INT32_MAX;
	static int32_t t188 = 126097;

    t188 = ((x11601%x11602)<<(x11603-x11604));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x11633 = -1;
	uint32_t x11634 = 29666498U;
	static int8_t x11635 = -1;
	int32_t x11636 = -1;
	uint32_t t189 = 11456747U;

    t189 = ((x11633%x11634)<<(x11635-x11636));

    if (t189 != 22991583U) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x11645 = INT16_MAX;
	volatile int16_t x11647 = 0;
	static int32_t t190 = 10929;

    t190 = ((x11645%x11646)<<(x11647-x11648));

    if (t190 != 30) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile uint16_t x11689 = 5U;
	int32_t x11690 = -1;
	static uint64_t x11691 = UINT64_MAX;

    t191 = ((x11689%x11690)<<(x11691-x11692));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int64_t x11693 = -1LL;
	volatile int32_t x11694 = 1;
	int8_t x11695 = 2;

    t192 = ((x11693%x11694)<<(x11695-x11696));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x11725 = 1;
	volatile int64_t x11726 = INT64_MIN;
	uint32_t x11727 = 5U;
	int64_t x11728 = -1LL;

    t193 = ((x11725%x11726)<<(x11727-x11728));

    if (t193 != 64LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x11941 = INT8_MAX;
	uint8_t x11943 = 6U;
	static uint32_t x11944 = UINT32_MAX;
	volatile int32_t t194 = -980097375;

    t194 = ((x11941%x11942)<<(x11943-x11944));

    if (t194 != 16256) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x11953 = -1858537975335225631LL;
	static uint64_t x11955 = UINT64_MAX;
	uint64_t x11956 = UINT64_MAX;
	volatile int64_t t195 = -437283956LL;

    t195 = ((x11953%x11954)<<(x11955-x11956));

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x11966 = 15LLU;
	int8_t x11967 = 2;
	int8_t x11968 = 0;

    t196 = ((x11965%x11966)<<(x11967-x11968));

    if (t196 != 32LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x12002 = -5;
	uint8_t x12003 = 14U;
	int32_t t197 = 628201281;

    t197 = ((x12001%x12002)<<(x12003-x12004));

    if (t197 != 32768) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x12049 = 131291U;
	int16_t x12051 = -1;
	int8_t x12052 = -1;

    t198 = ((x12049%x12050)<<(x12051-x12052));

    if (t198 != 131291U) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x12189 = INT16_MIN;
	int8_t x12190 = -1;
	uint32_t x12191 = UINT32_MAX;
	int8_t x12192 = -1;

    t199 = ((x12189%x12190)<<(x12191-x12192));

    if (t199 != 0) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}


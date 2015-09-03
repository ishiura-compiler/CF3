#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x8 = -1360;
volatile int8_t x60 = -1;
static volatile uint64_t t1 = 2863474LLU;
static uint8_t x236 = 15U;
uint32_t x240 = 0U;
uint32_t t5 = 24U;
uint8_t x251 = 4U;
int64_t x273 = -29149300719614LL;
uint32_t x275 = 0U;
static uint32_t x276 = UINT32_MAX;
int32_t x351 = 0;
volatile uint64_t t9 = 4021182LLU;
static int32_t x491 = 0;
volatile int32_t x602 = 0;
static uint32_t x663 = 17U;
int16_t x713 = INT16_MIN;
int64_t x716 = -5LL;
static volatile int32_t x717 = INT32_MAX;
int32_t x720 = INT32_MIN;
uint8_t x754 = 45U;
int16_t x850 = 2711;
volatile int64_t t18 = 870LL;
static uint16_t x916 = 267U;
volatile uint8_t x938 = UINT8_MAX;
volatile int32_t t20 = 31716;
uint32_t x1089 = 13933U;
uint32_t x1110 = 14U;
int8_t x1155 = 0;
int64_t t24 = INT64_MIN;
uint8_t x1383 = 0U;
int64_t x1384 = -1652687LL;
uint64_t x1502 = 3836391633495553185LLU;
static volatile uint64_t t28 = 87167255004400LLU;
int8_t x1513 = -1;
static int32_t x1514 = INT32_MAX;
uint32_t x1542 = UINT32_MAX;
static uint32_t t30 = 6839U;
int16_t x1645 = -1212;
static uint16_t x1646 = 7202U;
static int32_t x1669 = -1;
int8_t x1672 = -47;
int8_t x1720 = INT8_MAX;
uint8_t x1782 = UINT8_MAX;
int8_t x1811 = 0;
int8_t x1865 = -4;
static int64_t x1868 = INT64_MIN;
int32_t x1881 = -1;
uint32_t x1882 = 1439852U;
uint8_t x1883 = 1U;
int64_t t42 = -952963448599787378LL;
uint32_t x2082 = 3722U;
uint8_t x2084 = UINT8_MAX;
static int16_t x2158 = 218;
static int16_t x2159 = 12;
uint16_t x2691 = 4U;
int32_t x2738 = 9270;
int8_t x2755 = 3;
volatile uint32_t x2802 = 26740U;
static uint8_t x3191 = 15U;
int8_t x3192 = 1;
int16_t x3215 = 12;
int32_t x3346 = 10;
static uint16_t x3348 = 434U;
static int32_t t57 = 2039395;
static int16_t x3497 = -1;
int16_t x3600 = INT16_MAX;
static int8_t x3643 = 16;
static uint16_t x3790 = 19U;
uint64_t x3796 = UINT64_MAX;
volatile int8_t x3797 = INT8_MIN;
volatile uint32_t t66 = 240738U;
uint16_t x3819 = 0U;
int32_t x3820 = 571239798;
static int64_t x3901 = INT64_MAX;
uint16_t x4109 = 74U;
uint64_t x4198 = 90872190313547LLU;
int8_t x4200 = INT8_MIN;
static int16_t x4264 = 0;
static int8_t x4303 = 5;
volatile uint64_t t76 = 2110811141626152LLU;
volatile int64_t t77 = 5793LL;
uint64_t x4749 = 11379897566LLU;
int64_t x4753 = 2836LL;
volatile uint64_t t81 = 37393LLU;
int32_t x4765 = 4547233;
static volatile int64_t t83 = 103816668414492LL;
static volatile uint32_t x4798 = UINT32_MAX;
int16_t x4800 = INT16_MIN;
volatile int32_t x4813 = INT32_MAX;
static volatile uint32_t x4815 = 4U;
uint64_t x4858 = 16186926174LLU;
int64_t x4860 = INT64_MIN;
uint64_t t87 = 1412046LLU;
uint8_t x5013 = 1U;
uint16_t x5034 = 278U;
uint64_t x5035 = 2LLU;
static int16_t x5191 = 1;
volatile int32_t t91 = 53075;
volatile uint16_t x5247 = 0U;
int64_t t94 = 195741LL;
static uint16_t x5435 = 0U;
static volatile uint64_t x5502 = UINT64_MAX;
volatile int16_t x5503 = 2;
uint64_t t96 = 645276454806992542LLU;
uint64_t x5554 = UINT64_MAX;
uint16_t x5671 = 19U;
volatile int64_t t98 = -14210504321229146LL;
int64_t x5685 = INT64_MIN;


void f0(void) {
	int64_t x5 = 22733804793LL;
	static int16_t x6 = 1097;
	int8_t x7 = 0;
	volatile int64_t t0 = 62125801LL;

	t0 = (x5&((x6<<x7)|x8));

	if (t0 != 22733804793LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x57 = UINT16_MAX;
	volatile uint64_t x58 = UINT64_MAX;
	uint16_t x59 = 1U;

	t1 = (x57&((x58<<x59)|x60));

	if (t1 != 65535LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x105 = INT16_MIN;
	uint16_t x106 = 5U;
	int32_t x107 = 27;
	int32_t x108 = INT32_MIN;
	volatile int32_t t2 = -4337375;

	t2 = (x105&((x106<<x107)|x108));

	if (t2 != -1476395008) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x209 = 244599U;
	volatile int64_t x210 = INT64_MAX;
	static volatile int8_t x211 = 0;
	int32_t x212 = -1;
	static int64_t t3 = -420929956998428820LL;

	t3 = (x209&((x210<<x211)|x212));

	if (t3 != 244599LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x233 = INT32_MAX;
	uint8_t x234 = 13U;
	volatile uint16_t x235 = 9U;
	int32_t t4 = 4827620;

	t4 = (x233&((x234<<x235)|x236));

	if (t4 != 6671) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x237 = 1U;
	int8_t x238 = 0;
	uint32_t x239 = 0U;

	t5 = (x237&((x238<<x239)|x240));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x249 = UINT16_MAX;
	int64_t x250 = 4999600238241LL;
	volatile int32_t x252 = 862173;
	int64_t t6 = 1157LL;

	t6 = (x249&((x250<<x251)|x252));

	if (t6 != 61405LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x274 = 585;
	int64_t t7 = -14013LL;

	t7 = (x273&((x274<<x275)|x276));

	if (t7 != 642318338LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x337 = 0;
	int16_t x338 = INT16_MAX;
	int8_t x339 = 1;
	static uint64_t x340 = 40980361320733LLU;
	static volatile uint64_t t8 = 284458818LLU;

	t8 = (x337&((x338<<x339)|x340));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x349 = -830311LL;
	volatile uint64_t x350 = 108667846958007LLU;
	int32_t x352 = INT32_MAX;

	t9 = (x349&((x350<<x351)|x352));

	if (t9 != 108669114209433LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x489 = INT16_MAX;
	uint64_t x490 = UINT64_MAX;
	int16_t x492 = INT16_MIN;
	volatile uint64_t t10 = 11270369854LLU;

	t10 = (x489&((x490<<x491)|x492));

	if (t10 != 32767LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x601 = INT8_MIN;
	int8_t x603 = 1;
	volatile int32_t x604 = -1;
	static volatile int32_t t11 = -30843;

	t11 = (x601&((x602<<x603)|x604));

	if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x661 = INT64_MAX;
	uint8_t x662 = UINT8_MAX;
	uint8_t x664 = UINT8_MAX;
	volatile int64_t t12 = -14300LL;

	t12 = (x661&((x662<<x663)|x664));

	if (t12 != 33423615LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x677 = INT32_MIN;
	int64_t x678 = 2805LL;
	uint64_t x679 = 0LLU;
	int64_t x680 = INT64_MAX;
	int64_t t13 = 31222450666603719LL;

	t13 = (x677&((x678<<x679)|x680));

	if (t13 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x714 = 426U;
	volatile uint16_t x715 = 12U;
	int64_t t14 = 134641014757324LL;

	t14 = (x713&((x714<<x715)|x716));

	if (t14 != -32768LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x718 = 1;
	int16_t x719 = 6;
	int32_t t15 = 21125;

	t15 = (x717&((x718<<x719)|x720));

	if (t15 != 64) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x753 = INT8_MIN;
	uint16_t x755 = 20U;
	static int16_t x756 = INT16_MAX;
	int32_t t16 = -233;

	t16 = (x753&((x754<<x755)|x756));

	if (t16 != 47218560) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x849 = INT8_MIN;
	uint32_t x851 = 1U;
	static volatile int32_t x852 = INT32_MIN;
	int32_t t17 = 1065152;

	t17 = (x849&((x850<<x851)|x852));

	if (t17 != -2147478272) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x905 = -1LL;
	volatile uint32_t x906 = 1U;
	static volatile uint8_t x907 = 9U;
	int64_t x908 = -20496097468771252LL;

	t18 = (x905&((x906<<x907)|x908));

	if (t18 != -20496097468770740LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x913 = UINT32_MAX;
	int16_t x914 = 0;
	uint8_t x915 = 3U;
	volatile uint32_t t19 = 104U;

	t19 = (x913&((x914<<x915)|x916));

	if (t19 != 267U) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x937 = 21396U;
	int8_t x939 = 10;
	int16_t x940 = INT16_MIN;

	t20 = (x937&((x938<<x939)|x940));

	if (t20 != 20480) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x973 = 179U;
	uint32_t x974 = 611171U;
	static uint16_t x975 = 21U;
	int64_t x976 = -1LL;
	volatile int64_t t21 = -3615656404670708303LL;

	t21 = (x973&((x974<<x975)|x976));

	if (t21 != 179LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1090 = 871462LLU;
	uint16_t x1091 = 2U;
	volatile int16_t x1092 = INT16_MIN;
	volatile uint64_t t22 = 915LLU;

	t22 = (x1089&((x1090<<x1091)|x1092));

	if (t22 != 12296LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1109 = INT16_MIN;
	uint16_t x1111 = 30U;
	static int16_t x1112 = INT16_MAX;
	static volatile uint32_t t23 = 391875U;

	t23 = (x1109&((x1110<<x1111)|x1112));

	if (t23 != 2147483648U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1153 = INT64_MIN;
	static uint16_t x1154 = 100U;
	static volatile int8_t x1156 = INT8_MIN;

	t24 = (x1153&((x1154<<x1155)|x1156));

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1381 = INT16_MIN;
	uint16_t x1382 = 3890U;
	volatile int64_t t25 = -1823982131LL;

	t25 = (x1381&((x1382<<x1383)|x1384));

	if (t25 != -1671168LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x1389 = INT32_MIN;
	int32_t x1390 = 3;
	volatile int8_t x1391 = 4;
	uint64_t x1392 = 333296700512344825LLU;
	uint64_t t26 = 218LLU;

	t26 = (x1389&((x1390<<x1391)|x1392));

	if (t26 != 333296699189493760LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1421 = 1LL;
	uint64_t x1422 = 56255774952LLU;
	uint8_t x1423 = 23U;
	uint8_t x1424 = 49U;
	uint64_t t27 = 1665993LLU;

	t27 = (x1421&((x1422<<x1423)|x1424));

	if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1501 = -20;
	uint8_t x1503 = 16U;
	int64_t x1504 = 45LL;

	t28 = (x1501&((x1502<<x1503)|x1504));

	if (t28 != 11087112177094557740LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1515 = 0U;
	int16_t x1516 = 271;
	int32_t t29 = INT32_MAX;

	t29 = (x1513&((x1514<<x1515)|x1516));

	if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x1541 = -575;
	uint64_t x1543 = 8LLU;
	volatile int8_t x1544 = 28;

	t30 = (x1541&((x1542<<x1543)|x1544));

	if (t30 != 4294966528U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1561 = INT16_MIN;
	volatile uint32_t x1562 = 222U;
	uint8_t x1563 = 12U;
	int32_t x1564 = 232;
	volatile uint32_t t31 = 781558U;

	t31 = (x1561&((x1562<<x1563)|x1564));

	if (t31 != 884736U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1641 = INT32_MAX;
	volatile int16_t x1642 = 0;
	static uint8_t x1643 = 7U;
	volatile int32_t x1644 = INT32_MIN;
	int32_t t32 = -2019252;

	t32 = (x1641&((x1642<<x1643)|x1644));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x1647 = 5U;
	volatile int8_t x1648 = INT8_MIN;
	static volatile int32_t t33 = -92;

	t33 = (x1645&((x1646<<x1647)|x1648));

	if (t33 != -1216) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x1670 = 3770381LL;
	int8_t x1671 = 0;
	int64_t t34 = -253251969627LL;

	t34 = (x1669&((x1670<<x1671)|x1672));

	if (t34 != -35LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1717 = INT32_MIN;
	uint32_t x1718 = 20549U;
	int16_t x1719 = 0;
	volatile uint32_t t35 = 0U;

	t35 = (x1717&((x1718<<x1719)|x1720));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1781 = INT64_MAX;
	uint8_t x1783 = 14U;
	static int8_t x1784 = 5;
	int64_t t36 = 10LL;

	t36 = (x1781&((x1782<<x1783)|x1784));

	if (t36 != 4177925LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1809 = INT8_MIN;
	int16_t x1810 = 2;
	uint64_t x1812 = 523567676835321LLU;
	uint64_t t37 = 8388328152LLU;

	t37 = (x1809&((x1810<<x1811)|x1812));

	if (t37 != 523567676835200LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x1841 = 5U;
	uint32_t x1842 = 16222U;
	uint8_t x1843 = 0U;
	volatile int64_t x1844 = INT64_MIN;
	static int64_t t38 = -156775132575940LL;

	t38 = (x1841&((x1842<<x1843)|x1844));

	if (t38 != 4LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x1853 = 21647019993920LLU;
	static int8_t x1854 = 4;
	uint64_t x1855 = 1LLU;
	uint16_t x1856 = 177U;
	volatile uint64_t t39 = 169547205297454LLU;

	t39 = (x1853&((x1854<<x1855)|x1856));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x1866 = 310880880762530LL;
	uint16_t x1867 = 9U;
	volatile int64_t t40 = 78172951LL;

	t40 = (x1865&((x1866<<x1867)|x1868));

	if (t40 != -9064201025904360448LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x1884 = 50;
	volatile uint32_t t41 = 78U;

	t41 = (x1881&((x1882<<x1883)|x1884));

	if (t41 != 2879738U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x1909 = INT64_MIN;
	uint32_t x1910 = UINT32_MAX;
	uint32_t x1911 = 24U;
	static int32_t x1912 = -23900865;

	t42 = (x1909&((x1910<<x1911)|x1912));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x2081 = UINT8_MAX;
	uint8_t x2083 = 1U;
	volatile uint32_t t43 = 0U;

	t43 = (x2081&((x2082<<x2083)|x2084));

	if (t43 != 255U) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x2157 = UINT8_MAX;
	int8_t x2160 = INT8_MIN;
	volatile int32_t t44 = -3739499;

	t44 = (x2157&((x2158<<x2159)|x2160));

	if (t44 != 128) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x2237 = INT16_MIN;
	uint64_t x2238 = 2559101104431LLU;
	static int8_t x2239 = 0;
	volatile uint8_t x2240 = UINT8_MAX;
	volatile uint64_t t45 = 4472891LLU;

	t45 = (x2237&((x2238<<x2239)|x2240));

	if (t45 != 2559101075456LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x2337 = 2U;
	static int16_t x2338 = INT16_MAX;
	volatile uint8_t x2339 = 1U;
	int64_t x2340 = -1LL;
	int64_t t46 = 11717983LL;

	t46 = (x2337&((x2338<<x2339)|x2340));

	if (t46 != 2LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x2421 = INT32_MIN;
	volatile int8_t x2422 = 3;
	int8_t x2423 = 24;
	int16_t x2424 = INT16_MAX;
	int32_t t47 = 587823;

	t47 = (x2421&((x2422<<x2423)|x2424));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x2449 = 6;
	uint64_t x2450 = UINT64_MAX;
	uint8_t x2451 = 51U;
	uint16_t x2452 = 20U;
	volatile uint64_t t48 = 85269196LLU;

	t48 = (x2449&((x2450<<x2451)|x2452));

	if (t48 != 4LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x2689 = -2156792518001LL;
	int16_t x2690 = INT16_MAX;
	int8_t x2692 = INT8_MIN;
	static volatile int64_t t49 = 956881400905143LL;

	t49 = (x2689&((x2690<<x2691)|x2692));

	if (t49 != -2156792518016LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x2737 = -1LL;
	uint16_t x2739 = 5U;
	int8_t x2740 = INT8_MIN;
	volatile int64_t t50 = -219LL;

	t50 = (x2737&((x2738<<x2739)|x2740));

	if (t50 != -64LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x2753 = INT8_MAX;
	static int16_t x2754 = 695;
	static uint64_t x2756 = UINT64_MAX;
	static volatile uint64_t t51 = 88LLU;

	t51 = (x2753&((x2754<<x2755)|x2756));

	if (t51 != 127LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x2801 = -1;
	uint8_t x2803 = 26U;
	int16_t x2804 = 0;
	volatile uint32_t t52 = 171926U;

	t52 = (x2801&((x2802<<x2803)|x2804));

	if (t52 != 3489660928U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x3009 = UINT32_MAX;
	static int32_t x3010 = 687;
	static int16_t x3011 = 1;
	uint16_t x3012 = UINT16_MAX;
	volatile uint32_t t53 = 12518399U;

	t53 = (x3009&((x3010<<x3011)|x3012));

	if (t53 != 65535U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x3025 = -1346;
	uint32_t x3026 = 8915U;
	uint16_t x3027 = 18U;
	int64_t x3028 = -1LL;
	int64_t t54 = 17576075950029LL;

	t54 = (x3025&((x3026<<x3027)|x3028));

	if (t54 != -1346LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x3189 = 12552801U;
	uint32_t x3190 = UINT32_MAX;
	volatile uint32_t t55 = 0U;

	t55 = (x3189&((x3190<<x3191)|x3192));

	if (t55 != 12550145U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x3213 = INT16_MAX;
	uint32_t x3214 = 197U;
	uint64_t x3216 = UINT64_MAX;
	uint64_t t56 = 711231767659322241LLU;

	t56 = (x3213&((x3214<<x3215)|x3216));

	if (t56 != 32767LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x3345 = 1;
	volatile uint16_t x3347 = 0U;

	t57 = (x3345&((x3346<<x3347)|x3348));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x3498 = INT64_MAX;
	uint32_t x3499 = 0U;
	int8_t x3500 = INT8_MIN;
	int64_t t58 = -89732191089LL;

	t58 = (x3497&((x3498<<x3499)|x3500));

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x3537 = -1;
	uint32_t x3538 = 13U;
	static uint8_t x3539 = 15U;
	uint8_t x3540 = 0U;
	static volatile uint32_t t59 = 1108390U;

	t59 = (x3537&((x3538<<x3539)|x3540));

	if (t59 != 425984U) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x3597 = -1;
	static uint8_t x3598 = UINT8_MAX;
	volatile int32_t x3599 = 1;
	int32_t t60 = -1;

	t60 = (x3597&((x3598<<x3599)|x3600));

	if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x3641 = UINT16_MAX;
	uint16_t x3642 = 79U;
	static volatile uint64_t x3644 = 25233426316456LLU;
	uint64_t t61 = 22547LLU;

	t61 = (x3641&((x3642<<x3643)|x3644));

	if (t61 != 31912LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x3665 = 107906U;
	int16_t x3666 = 0;
	uint64_t x3667 = 6LLU;
	volatile int8_t x3668 = -1;
	uint32_t t62 = 17026U;

	t62 = (x3665&((x3666<<x3667)|x3668));

	if (t62 != 107906U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x3701 = INT32_MAX;
	uint16_t x3702 = UINT16_MAX;
	int8_t x3703 = 2;
	static int64_t x3704 = -39815393LL;
	volatile int64_t t63 = -4059LL;

	t63 = (x3701&((x3702<<x3703)|x3704));

	if (t63 != 2107899903LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x3789 = UINT32_MAX;
	int8_t x3791 = 1;
	uint8_t x3792 = 38U;
	uint32_t t64 = 290729U;

	t64 = (x3789&((x3790<<x3791)|x3792));

	if (t64 != 38U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x3793 = INT32_MAX;
	uint16_t x3794 = UINT16_MAX;
	static uint16_t x3795 = 3U;
	uint64_t t65 = 5968504623LLU;

	t65 = (x3793&((x3794<<x3795)|x3796));

	if (t65 != 2147483647LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x3798 = 2711U;
	uint8_t x3799 = 1U;
	int32_t x3800 = INT32_MIN;

	t66 = (x3797&((x3798<<x3799)|x3800));

	if (t66 != 2147489024U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x3817 = INT8_MIN;
	static uint64_t x3818 = 1545044180931LLU;
	uint64_t t67 = 236381LLU;

	t67 = (x3817&((x3818<<x3819)|x3820));

	if (t67 != 1545044197248LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x3902 = UINT16_MAX;
	int64_t x3903 = 5LL;
	static int8_t x3904 = -1;
	int64_t t68 = INT64_MAX;

	t68 = (x3901&((x3902<<x3903)|x3904));

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x4009 = -1;
	int16_t x4010 = INT16_MAX;
	volatile uint16_t x4011 = 4U;
	static uint32_t x4012 = 13U;
	volatile uint32_t t69 = 474964U;

	t69 = (x4009&((x4010<<x4011)|x4012));

	if (t69 != 524285U) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x4110 = 9U;
	static uint8_t x4111 = 0U;
	int64_t x4112 = INT64_MIN;
	int64_t t70 = -28142945589417726LL;

	t70 = (x4109&((x4110<<x4111)|x4112));

	if (t70 != 8LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x4145 = 0;
	volatile uint16_t x4146 = 71U;
	uint64_t x4147 = 5LLU;
	volatile uint32_t x4148 = UINT32_MAX;
	uint32_t t71 = 1224629U;

	t71 = (x4145&((x4146<<x4147)|x4148));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x4197 = 2528;
	static int16_t x4199 = 0;
	uint64_t t72 = 4557855869933615LLU;

	t72 = (x4197&((x4198<<x4199)|x4200));

	if (t72 != 2496LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x4213 = UINT64_MAX;
	volatile int16_t x4214 = 509;
	int8_t x4215 = 0;
	static int64_t x4216 = 516966068946712LL;
	uint64_t t73 = 197LLU;

	t73 = (x4213&((x4214<<x4215)|x4216));

	if (t73 != 516966068946941LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x4261 = INT8_MIN;
	int64_t x4262 = 20727LL;
	int32_t x4263 = 0;
	volatile int64_t t74 = 1258614LL;

	t74 = (x4261&((x4262<<x4263)|x4264));

	if (t74 != 20608LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x4301 = 58;
	static uint8_t x4302 = 55U;
	static uint64_t x4304 = 11667672LLU;
	uint64_t t75 = 2484931LLU;

	t75 = (x4301&((x4302<<x4303)|x4304));

	if (t75 != 56LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x4341 = 600654262LLU;
	uint8_t x4342 = UINT8_MAX;
	int32_t x4343 = 0;
	static int16_t x4344 = 0;

	t76 = (x4341&((x4342<<x4343)|x4344));

	if (t76 != 182LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x4597 = INT64_MAX;
	uint32_t x4598 = UINT32_MAX;
	volatile uint8_t x4599 = 0U;
	volatile int64_t x4600 = INT64_MIN;

	t77 = (x4597&((x4598<<x4599)|x4600));

	if (t77 != 4294967295LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x4609 = UINT64_MAX;
	volatile uint16_t x4610 = UINT16_MAX;
	volatile uint8_t x4611 = 3U;
	int16_t x4612 = INT16_MIN;
	uint64_t t78 = 3474570LLU;

	t78 = (x4609&((x4610<<x4611)|x4612));

	if (t78 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x4677 = INT8_MAX;
	volatile uint8_t x4678 = UINT8_MAX;
	uint32_t x4679 = 0U;
	int8_t x4680 = 0;
	int32_t t79 = -61;

	t79 = (x4677&((x4678<<x4679)|x4680));

	if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x4750 = UINT16_MAX;
	volatile uint8_t x4751 = 14U;
	static int8_t x4752 = INT8_MIN;
	uint64_t t80 = 25861620432406582LLU;

	t80 = (x4749&((x4750<<x4751)|x4752));

	if (t80 != 11379897472LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x4754 = 18LLU;
	static volatile uint64_t x4755 = 17LLU;
	uint32_t x4756 = UINT32_MAX;

	t81 = (x4753&((x4754<<x4755)|x4756));

	if (t81 != 2836LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x4757 = 6315U;
	uint8_t x4758 = UINT8_MAX;
	int32_t x4759 = 1;
	uint32_t x4760 = 561U;
	volatile uint32_t t82 = 1639248U;

	t82 = (x4757&((x4758<<x4759)|x4760));

	if (t82 != 171U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x4766 = INT64_MAX;
	int32_t x4767 = 0;
	int16_t x4768 = INT16_MIN;

	t83 = (x4765&((x4766<<x4767)|x4768));

	if (t83 != 4547233LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x4789 = 125U;
	uint64_t x4790 = 23829227339890735LLU;
	int8_t x4791 = 6;
	uint8_t x4792 = 14U;
	uint64_t t84 = 3392977090LLU;

	t84 = (x4789&((x4790<<x4791)|x4792));

	if (t84 != 76LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x4797 = INT32_MIN;
	uint16_t x4799 = 2U;
	uint32_t t85 = 466074618U;

	t85 = (x4797&((x4798<<x4799)|x4800));

	if (t85 != 2147483648U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x4814 = 1;
	int8_t x4816 = INT8_MIN;
	volatile int32_t t86 = 9;

	t86 = (x4813&((x4814<<x4815)|x4816));

	if (t86 != 2147483536) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x4857 = -1;
	uint8_t x4859 = 0U;

	t87 = (x4857&((x4858<<x4859)|x4860));

	if (t87 != 9223372053041701982LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x4989 = -1LL;
	uint64_t x4990 = UINT64_MAX;
	uint32_t x4991 = 58U;
	int16_t x4992 = -1;
	uint64_t t88 = UINT64_MAX;

	t88 = (x4989&((x4990<<x4991)|x4992));

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x5014 = 1;
	static uint8_t x5015 = 4U;
	volatile uint8_t x5016 = 0U;
	volatile int32_t t89 = -58727562;

	t89 = (x5013&((x5014<<x5015)|x5016));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x5033 = INT32_MIN;
	int64_t x5036 = -1LL;
	static volatile int64_t t90 = -5925723116846330LL;

	t90 = (x5033&((x5034<<x5035)|x5036));

	if (t90 != -2147483648LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x5189 = INT32_MIN;
	uint16_t x5190 = UINT16_MAX;
	uint8_t x5192 = 1U;

	t91 = (x5189&((x5190<<x5191)|x5192));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x5245 = UINT16_MAX;
	static volatile uint8_t x5246 = UINT8_MAX;
	int64_t x5248 = -1LL;
	volatile int64_t t92 = -29LL;

	t92 = (x5245&((x5246<<x5247)|x5248));

	if (t92 != 65535LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x5253 = -180415630503426111LL;
	static int8_t x5254 = 1;
	uint64_t x5255 = 0LLU;
	volatile uint32_t x5256 = 38U;
	volatile int64_t t93 = 156765LL;

	t93 = (x5253&((x5254<<x5255)|x5256));

	if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x5385 = 66U;
	static int64_t x5386 = 57815610693LL;
	uint8_t x5387 = 1U;
	int32_t x5388 = 382;

	t94 = (x5385&((x5386<<x5387)|x5388));

	if (t94 != 66LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x5433 = INT64_MAX;
	uint32_t x5434 = 10U;
	volatile int8_t x5436 = INT8_MIN;
	int64_t t95 = -5893584LL;

	t95 = (x5433&((x5434<<x5435)|x5436));

	if (t95 != 4294967178LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x5501 = INT16_MIN;
	volatile uint16_t x5504 = 1U;

	t96 = (x5501&((x5502<<x5503)|x5504));

	if (t96 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x5553 = 87;
	uint16_t x5555 = 36U;
	int8_t x5556 = -1;
	static uint64_t t97 = 7758523401166396766LLU;

	t97 = (x5553&((x5554<<x5555)|x5556));

	if (t97 != 87LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int64_t x5669 = INT64_MAX;
	uint32_t x5670 = 559984180U;
	int64_t x5672 = INT64_MIN;

	t98 = (x5669&((x5670<<x5671)|x5672));

	if (t98 != 1906311168LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x5686 = 4527U;
	uint16_t x5687 = 5U;
	int16_t x5688 = -8;
	volatile int64_t t99 = 0LL;

	t99 = (x5685&((x5686<<x5687)|x5688));

	if (t99 != 0LL) { NG(); } else { ; }
	
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


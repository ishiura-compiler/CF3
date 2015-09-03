#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x23 = 6;
int32_t x24 = 3;
int16_t x157 = -1;
static volatile uint32_t x159 = 108U;
volatile uint32_t t3 = 2U;
volatile int16_t x192 = 1;
volatile uint32_t t4 = 34U;
volatile uint64_t x207 = UINT64_MAX;
static uint64_t x262 = 913565LLU;
uint64_t x263 = 17128007586776490LLU;
int64_t x267 = -1639935918346220464LL;
uint32_t x268 = 13U;
volatile int8_t x395 = INT8_MAX;
uint8_t x396 = 10U;
uint64_t x405 = UINT64_MAX;
int16_t x407 = INT16_MIN;
static int32_t x434 = -1;
uint8_t x436 = 31U;
volatile int32_t t12 = 0;
uint16_t x542 = 968U;
uint64_t x574 = 36249099LLU;
uint16_t x685 = UINT16_MAX;
uint64_t x701 = UINT64_MAX;
uint64_t t16 = 538881669868LLU;
volatile uint32_t t17 = 590U;
uint32_t x742 = 71281U;
int32_t x751 = INT32_MIN;
int16_t x752 = 1;
static volatile uint64_t t19 = 34857206302782856LLU;
volatile int32_t t20 = 616464314;
uint64_t x829 = 90LLU;
uint32_t x832 = 10U;
uint64_t t22 = 12023LLU;
uint8_t x856 = 61U;
int16_t x877 = INT16_MIN;
uint32_t x878 = 13U;
int8_t x1005 = INT8_MAX;
uint16_t x1008 = 16U;
volatile int64_t x1009 = 59878LL;
uint32_t x1010 = 1U;
int16_t x1011 = -1;
int16_t x1149 = 106;
uint32_t x1186 = 1206817194U;
uint32_t t30 = 1259113818U;
uint8_t x1193 = 104U;
static int32_t x1195 = INT32_MAX;
static volatile int16_t x1196 = 1;
int8_t x1208 = 22;
int16_t x1280 = 3;
uint16_t x1413 = 0U;
uint8_t x1456 = 5U;
int64_t t37 = 72LL;
int32_t x1493 = 712;
uint64_t x1505 = 22953386809LLU;
int16_t x1507 = INT16_MIN;
static volatile uint64_t t39 = 149491LLU;
volatile uint32_t t40 = 559436090U;
uint32_t x1622 = 211093957U;
static int64_t x1650 = 228LL;
volatile uint64_t t42 = 217946LLU;
volatile int32_t t45 = 947;
int32_t x1781 = -1;
uint64_t x1782 = UINT64_MAX;
uint8_t x1827 = 26U;
int64_t x1833 = INT64_MAX;
uint8_t x1834 = UINT8_MAX;
int16_t x1870 = INT16_MAX;
int8_t x1872 = 6;
volatile int64_t t50 = -38154386LL;
static uint16_t x1980 = 1U;
int16_t x1997 = 278;
int8_t x1999 = INT8_MIN;
volatile int16_t x2000 = 10;
int8_t x2132 = 13;
int8_t x2160 = 0;
static uint8_t x2162 = 30U;
static uint64_t x2488 = 9LLU;
uint64_t x2646 = 1512774417LLU;
volatile int16_t x2647 = INT16_MAX;
volatile uint64_t x3302 = UINT64_MAX;
uint64_t x3303 = UINT64_MAX;
int16_t x3304 = 13;
uint64_t t62 = 3LLU;
volatile uint8_t x3352 = 28U;
volatile int64_t t63 = -42LL;
uint64_t x3357 = UINT64_MAX;
uint64_t x3430 = 77408076963699441LLU;
uint64_t x3457 = 1050618441926761LLU;
int16_t x3459 = INT16_MAX;
static uint8_t x3472 = 9U;
volatile uint64_t t68 = 7502135037LLU;
uint64_t t73 = 5613263LLU;
uint16_t x4025 = 1089U;
int32_t x4028 = 13;
int8_t x4327 = -52;
volatile int32_t t76 = 6;
static int8_t x4347 = INT8_MIN;
volatile int16_t x4405 = -28;
static volatile uint8_t x4804 = 2U;
int64_t x4838 = INT64_MIN;
int16_t x4839 = -1;
static volatile int8_t x4982 = INT8_MIN;
volatile uint32_t t82 = 3496U;
volatile uint8_t x5096 = 5U;
volatile int16_t x5121 = 1;
uint8_t x5124 = 0U;
static volatile uint64_t t84 = 1668682783312404LLU;
int16_t x5452 = 3;
uint64_t x5477 = UINT64_MAX;
uint32_t x5515 = 1525000U;
static int8_t x5516 = 7;
static volatile uint32_t t87 = 43201164U;
int32_t x5558 = 5543182;
volatile int32_t t88 = 2;
static uint32_t x5563 = 38U;
volatile uint64_t x5670 = 72LLU;
static int16_t x5671 = 5868;
volatile uint8_t x5740 = 16U;
uint8_t x5796 = 1U;
int32_t x5813 = 2251;
volatile int32_t x5815 = -1;
uint16_t x5829 = 1U;
uint32_t t95 = 2569U;
volatile uint64_t t98 = 2667405235LLU;


void f0(void) {
	int32_t x21 = INT32_MAX;
	static uint16_t x22 = 320U;
	volatile int32_t t0 = -19840;

	t0 = ((x21|(x22%x23))>>x24);

	if (t0 != 268435455) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x53 = UINT64_MAX;
	uint16_t x54 = UINT16_MAX;
	uint32_t x55 = 59U;
	uint8_t x56 = 8U;
	static uint64_t t1 = 42853471726452LLU;

	t1 = ((x53|(x54%x55))>>x56);

	if (t1 != 72057594037927935LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x101 = INT8_MAX;
	int64_t x102 = INT64_MAX;
	int16_t x103 = INT16_MAX;
	static uint16_t x104 = 2U;
	int64_t t2 = -1687LL;

	t2 = ((x101|(x102%x103))>>x104);

	if (t2 != 31LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x158 = 157066828U;
	volatile int16_t x160 = 15;

	t3 = ((x157|(x158%x159))>>x160);

	if (t3 != 131071U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x189 = INT16_MAX;
	uint32_t x190 = UINT32_MAX;
	volatile int32_t x191 = INT32_MIN;

	t4 = ((x189|(x190%x191))>>x192);

	if (t4 != 1073741823U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x205 = UINT8_MAX;
	int32_t x206 = INT32_MIN;
	static volatile int8_t x208 = 5;
	uint64_t t5 = 2016LLU;

	t5 = ((x205|(x206%x207))>>x208);

	if (t5 != 576460752236314631LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x253 = 28750891;
	uint64_t x254 = 254527279029598LLU;
	static volatile int8_t x255 = INT8_MIN;
	volatile uint8_t x256 = 0U;
	volatile uint64_t t6 = 21360679LLU;

	t6 = ((x253|(x254%x255))>>x256);

	if (t6 != 254527307513215LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x261 = 7U;
	volatile int32_t x264 = 44;
	volatile uint64_t t7 = 1609174190536925375LLU;

	t7 = ((x261|(x262%x263))>>x264);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x265 = UINT32_MAX;
	int64_t x266 = INT64_MAX;
	static int64_t t8 = 199213040810036LL;

	t8 = ((x265|(x266%x267))>>x268);

	if (t8 != 124962456731647LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x393 = 2985715U;
	int16_t x394 = INT16_MAX;
	volatile uint32_t t9 = 19069U;

	t9 = ((x393|(x394%x395))>>x396);

	if (t9 != 2915U) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x406 = INT64_MIN;
	uint8_t x408 = 7U;
	volatile uint64_t t10 = 420125244194LLU;

	t10 = ((x405|(x406%x407))>>x408);

	if (t10 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x433 = -1;
	uint32_t x435 = 9U;
	volatile uint32_t t11 = 38842U;

	t11 = ((x433|(x434%x435))>>x436);

	if (t11 != 1U) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x505 = 23U;
	int32_t x506 = 4;
	uint8_t x507 = 11U;
	int8_t x508 = 0;

	t12 = ((x505|(x506%x507))>>x508);

	if (t12 != 23) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x541 = INT8_MAX;
	static uint16_t x543 = 1U;
	int8_t x544 = 1;
	volatile int32_t t13 = -5546;

	t13 = ((x541|(x542%x543))>>x544);

	if (t13 != 63) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x573 = 3666467913LLU;
	uint16_t x575 = 6U;
	uint8_t x576 = 4U;
	uint64_t t14 = 57395723LLU;

	t14 = ((x573|(x574%x575))>>x576);

	if (t14 != 229154244LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x686 = 10U;
	static uint8_t x687 = UINT8_MAX;
	static volatile int8_t x688 = 0;
	static int32_t t15 = -2;

	t15 = ((x685|(x686%x687))>>x688);

	if (t15 != 65535) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x702 = INT8_MIN;
	int64_t x703 = -1LL;
	volatile uint8_t x704 = 53U;

	t16 = ((x701|(x702%x703))>>x704);

	if (t16 != 2047LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x709 = -752543666;
	static uint16_t x710 = 11230U;
	uint32_t x711 = 3770399U;
	int64_t x712 = 2LL;

	t17 = ((x709|(x710%x711))>>x712);

	if (t17 != 885608183U) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x741 = INT8_MIN;
	uint64_t x743 = UINT64_MAX;
	uint16_t x744 = 1U;
	static uint64_t t18 = 26770129368411LLU;

	t18 = ((x741|(x742%x743))>>x744);

	if (t18 != 9223372036854775800LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x749 = 24254510628914LLU;
	uint16_t x750 = 3U;

	t19 = ((x749|(x750%x751))>>x752);

	if (t19 != 12127255314457LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x761 = 77;
	int16_t x762 = INT16_MAX;
	int32_t x763 = -57743;
	static uint8_t x764 = 3U;

	t20 = ((x761|(x762%x763))>>x764);

	if (t20 != 4095) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x769 = UINT8_MAX;
	int32_t x770 = INT32_MAX;
	volatile int64_t x771 = INT64_MIN;
	uint8_t x772 = 8U;
	volatile int64_t t21 = 38974125846864LL;

	t21 = ((x769|(x770%x771))>>x772);

	if (t21 != 8388607LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x830 = 40U;
	static int64_t x831 = INT64_MAX;

	t22 = ((x829|(x830%x831))>>x832);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x853 = 1;
	int64_t x854 = 7061397796304589LL;
	uint8_t x855 = 55U;
	volatile int64_t t23 = -825281LL;

	t23 = ((x853|(x854%x855))>>x856);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x879 = 78228077U;
	uint8_t x880 = 6U;
	static volatile uint32_t t24 = 240U;

	t24 = ((x877|(x878%x879))>>x880);

	if (t24 != 67108352U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x933 = INT16_MIN;
	uint64_t x934 = 349397LLU;
	int32_t x935 = INT32_MIN;
	static uint8_t x936 = 5U;
	uint64_t t25 = 4069738986293836LLU;

	t25 = ((x933|(x934%x935))>>x936);

	if (t25 != 576460752303423142LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1006 = 4116541;
	int16_t x1007 = INT16_MIN;
	int32_t t26 = 5512;

	t26 = ((x1005|(x1006%x1007))>>x1008);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1012 = 1;
	volatile int64_t t27 = 17354162921LL;

	t27 = ((x1009|(x1010%x1011))>>x1012);

	if (t27 != 29939LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x1113 = 650806688U;
	int64_t x1114 = -18LL;
	uint8_t x1115 = 2U;
	static int8_t x1116 = 34;
	static volatile int64_t t28 = -23128310651LL;

	t28 = ((x1113|(x1114%x1115))>>x1116);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1150 = INT16_MAX;
	int64_t x1151 = INT64_MIN;
	uint8_t x1152 = 7U;
	int64_t t29 = 706404496737577LL;

	t29 = ((x1149|(x1150%x1151))>>x1152);

	if (t29 != 255LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1185 = INT8_MIN;
	int8_t x1187 = INT8_MAX;
	uint32_t x1188 = 10U;

	t30 = ((x1185|(x1186%x1187))>>x1188);

	if (t30 != 4194303U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1194 = 8110;
	static int32_t t31 = -53;

	t31 = ((x1193|(x1194%x1195))>>x1196);

	if (t31 != 4087) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1205 = UINT64_MAX;
	static uint32_t x1206 = 575U;
	volatile int32_t x1207 = -162405437;
	volatile uint64_t t32 = 12229LLU;

	t32 = ((x1205|(x1206%x1207))>>x1208);

	if (t32 != 4398046511103LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x1277 = -2927LL;
	int16_t x1278 = -5688;
	uint64_t x1279 = 417LLU;
	static uint64_t t33 = 8283LLU;

	t33 = ((x1277|(x1278%x1279))>>x1280);

	if (t33 != 2305843009213693590LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x1414 = 7186U;
	int32_t x1415 = INT32_MIN;
	int32_t x1416 = 0;
	volatile int32_t t34 = 31916389;

	t34 = ((x1413|(x1414%x1415))>>x1416);

	if (t34 != 7186) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1453 = 0;
	volatile int16_t x1454 = 2;
	uint32_t x1455 = 587086U;
	uint32_t t35 = 8U;

	t35 = ((x1453|(x1454%x1455))>>x1456);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x1473 = 269;
	volatile int16_t x1474 = INT16_MIN;
	uint32_t x1475 = 1574U;
	uint32_t x1476 = 12U;
	volatile uint32_t t36 = 0U;

	t36 = ((x1473|(x1474%x1475))>>x1476);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x1481 = INT8_MAX;
	volatile uint32_t x1482 = 19017715U;
	int64_t x1483 = INT64_MAX;
	static volatile int8_t x1484 = 0;

	t37 = ((x1481|(x1482%x1483))>>x1484);

	if (t37 != 19017727LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x1494 = UINT32_MAX;
	int16_t x1495 = -1;
	int64_t x1496 = 2LL;
	uint32_t t38 = 1U;

	t38 = ((x1493|(x1494%x1495))>>x1496);

	if (t38 != 178U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x1506 = INT8_MIN;
	int16_t x1508 = 1;

	t39 = ((x1505|(x1506%x1507))>>x1508);

	if (t39 != 9223372036854775772LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1605 = 0;
	int8_t x1606 = INT8_MIN;
	volatile uint32_t x1607 = UINT32_MAX;
	volatile uint8_t x1608 = 5U;

	t40 = ((x1605|(x1606%x1607))>>x1608);

	if (t40 != 134217724U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x1621 = INT8_MIN;
	int16_t x1623 = -1;
	uint32_t x1624 = 5U;
	uint32_t t41 = 196U;

	t41 = ((x1621|(x1622%x1623))>>x1624);

	if (t41 != 134217726U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x1649 = -1LL;
	uint64_t x1651 = UINT64_MAX;
	volatile int8_t x1652 = 7;

	t42 = ((x1649|(x1650%x1651))>>x1652);

	if (t42 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x1661 = 883U;
	uint32_t x1662 = UINT32_MAX;
	volatile uint16_t x1663 = 28951U;
	static uint16_t x1664 = 0U;
	volatile uint32_t t43 = 475115U;

	t43 = ((x1661|(x1662%x1663))>>x1664);

	if (t43 != 28543U) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x1733 = 64U;
	volatile int8_t x1734 = 0;
	int32_t x1735 = 4383748;
	static uint8_t x1736 = 2U;
	int32_t t44 = -5536777;

	t44 = ((x1733|(x1734%x1735))>>x1736);

	if (t44 != 16) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x1749 = INT16_MAX;
	uint16_t x1750 = 1U;
	int8_t x1751 = -1;
	volatile uint8_t x1752 = 3U;

	t45 = ((x1749|(x1750%x1751))>>x1752);

	if (t45 != 4095) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x1783 = -1;
	uint8_t x1784 = 13U;
	volatile uint64_t t46 = 1090928801117LLU;

	t46 = ((x1781|(x1782%x1783))>>x1784);

	if (t46 != 2251799813685247LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x1825 = 59U;
	uint16_t x1826 = UINT16_MAX;
	volatile uint8_t x1828 = 3U;
	volatile uint32_t t47 = 4U;

	t47 = ((x1825|(x1826%x1827))>>x1828);

	if (t47 != 7U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x1835 = UINT8_MAX;
	int32_t x1836 = 13;
	int64_t t48 = 123381883170986LL;

	t48 = ((x1833|(x1834%x1835))>>x1836);

	if (t48 != 1125899906842623LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x1869 = 7U;
	uint64_t x1871 = 72678689853LLU;
	volatile uint64_t t49 = 511654989930691571LLU;

	t49 = ((x1869|(x1870%x1871))>>x1872);

	if (t49 != 511LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x1937 = 0U;
	static int64_t x1938 = -20980198374178LL;
	static uint8_t x1939 = 1U;
	int32_t x1940 = 0;

	t50 = ((x1937|(x1938%x1939))>>x1940);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x1977 = 1810783U;
	int16_t x1978 = -711;
	int16_t x1979 = INT16_MIN;
	uint32_t t51 = 43690U;

	t51 = ((x1977|(x1978%x1979))>>x1980);

	if (t51 != 2147483327U) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x1998 = UINT32_MAX;
	uint32_t t52 = 234511259U;

	t52 = ((x1997|(x1998%x1999))>>x2000);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x2109 = UINT16_MAX;
	int32_t x2110 = INT32_MIN;
	int32_t x2111 = -1;
	int8_t x2112 = 2;
	volatile int32_t t53 = -812;

	t53 = ((x2109|(x2110%x2111))>>x2112);

	if (t53 != 16383) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x2129 = 1738465LLU;
	volatile int16_t x2130 = INT16_MIN;
	uint32_t x2131 = 505980060U;
	volatile uint64_t t54 = 52127LLU;

	t54 = ((x2129|(x2130%x2131))>>x2132);

	if (t54 != 30166LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x2157 = -1;
	volatile uint64_t x2158 = 23986LLU;
	uint64_t x2159 = 139540606783586081LLU;
	static uint64_t t55 = UINT64_MAX;

	t55 = ((x2157|(x2158%x2159))>>x2160);

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x2161 = 95U;
	static uint64_t x2163 = 2LLU;
	static uint8_t x2164 = 49U;
	uint64_t t56 = 6911745491417LLU;

	t56 = ((x2161|(x2162%x2163))>>x2164);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x2413 = 2U;
	uint16_t x2414 = 98U;
	static int64_t x2415 = 8395119921LL;
	static uint8_t x2416 = 11U;
	static volatile int64_t t57 = 33273181328LL;

	t57 = ((x2413|(x2414%x2415))>>x2416);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x2485 = INT32_MIN;
	uint32_t x2486 = 246U;
	uint8_t x2487 = 10U;
	volatile uint32_t t58 = 10348U;

	t58 = ((x2485|(x2486%x2487))>>x2488);

	if (t58 != 4194304U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x2645 = INT16_MIN;
	volatile uint16_t x2648 = 59U;
	uint64_t t59 = 6623101049LLU;

	t59 = ((x2645|(x2646%x2647))>>x2648);

	if (t59 != 31LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x2733 = -1;
	uint16_t x2734 = 93U;
	uint32_t x2735 = UINT32_MAX;
	uint8_t x2736 = 1U;
	volatile uint32_t t60 = 4875U;

	t60 = ((x2733|(x2734%x2735))>>x2736);

	if (t60 != 2147483647U) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x2965 = UINT16_MAX;
	static volatile int32_t x2966 = INT32_MIN;
	int8_t x2967 = -1;
	int32_t x2968 = 4;
	volatile int32_t t61 = -119;

	t61 = ((x2965|(x2966%x2967))>>x2968);

	if (t61 != 4095) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x3301 = INT16_MAX;

	t62 = ((x3301|(x3302%x3303))>>x3304);

	if (t62 != 3LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x3349 = 2045328815U;
	int64_t x3350 = INT64_MIN;
	int64_t x3351 = -1LL;

	t63 = ((x3349|(x3350%x3351))>>x3352);

	if (t63 != 7LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x3358 = INT8_MIN;
	uint32_t x3359 = 3U;
	uint32_t x3360 = 1U;
	uint64_t t64 = 1653712072531LLU;

	t64 = ((x3357|(x3358%x3359))>>x3360);

	if (t64 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x3429 = 3U;
	int16_t x3431 = INT16_MIN;
	volatile uint16_t x3432 = 2U;
	uint64_t t65 = 895621LLU;

	t65 = ((x3429|(x3430%x3431))>>x3432);

	if (t65 != 19352019240924860LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x3458 = 1U;
	uint64_t x3460 = 1LLU;
	uint64_t t66 = 9LLU;

	t66 = ((x3457|(x3458%x3459))>>x3460);

	if (t66 != 525309220963380LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x3469 = 21U;
	int8_t x3470 = INT8_MAX;
	uint16_t x3471 = UINT16_MAX;
	int32_t t67 = 1485;

	t67 = ((x3469|(x3470%x3471))>>x3472);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x3521 = -1LL;
	static uint64_t x3522 = 324437779175LLU;
	uint8_t x3523 = 36U;
	static int8_t x3524 = 29;

	t68 = ((x3521|(x3522%x3523))>>x3524);

	if (t68 != 34359738367LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x3537 = -1;
	uint64_t x3538 = 10054389LLU;
	uint64_t x3539 = 448464056464LLU;
	static uint8_t x3540 = 0U;
	volatile uint64_t t69 = UINT64_MAX;

	t69 = ((x3537|(x3538%x3539))>>x3540);

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x3669 = UINT16_MAX;
	int32_t x3670 = -842070435;
	int16_t x3671 = -1;
	uint16_t x3672 = 16U;
	volatile int32_t t70 = -1;

	t70 = ((x3669|(x3670%x3671))>>x3672);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x3737 = 36U;
	int32_t x3738 = -43413289;
	uint64_t x3739 = 42191951LLU;
	uint8_t x3740 = 1U;
	volatile uint64_t t71 = 3897670454LLU;

	t71 = ((x3737|(x3738%x3739))>>x3740);

	if (t71 != 5832607LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x3781 = INT8_MIN;
	uint32_t x3782 = UINT32_MAX;
	uint8_t x3783 = 1U;
	int32_t x3784 = 1;
	static volatile uint32_t t72 = 0U;

	t72 = ((x3781|(x3782%x3783))>>x3784);

	if (t72 != 2147483584U) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x3785 = 7317999988140LLU;
	int32_t x3786 = -1932;
	int16_t x3787 = INT16_MAX;
	static volatile uint8_t x3788 = 10U;

	t73 = ((x3785|(x3786%x3787))>>x3788);

	if (t73 != 18014398509481983LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x3801 = INT64_MIN;
	uint64_t x3802 = UINT64_MAX;
	volatile int8_t x3803 = INT8_MIN;
	int16_t x3804 = 1;
	uint64_t t74 = 1050597710627260LLU;

	t74 = ((x3801|(x3802%x3803))>>x3804);

	if (t74 != 4611686018427387967LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x4026 = 15U;
	static volatile int64_t x4027 = -2327267LL;
	volatile int64_t t75 = 9483LL;

	t75 = ((x4025|(x4026%x4027))>>x4028);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x4325 = INT32_MAX;
	static int16_t x4326 = INT16_MAX;
	int8_t x4328 = 9;

	t76 = ((x4325|(x4326%x4327))>>x4328);

	if (t76 != 4194303) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x4345 = 16861;
	static int64_t x4346 = INT64_MAX;
	static int16_t x4348 = 33;
	int64_t t77 = -2528LL;

	t77 = ((x4345|(x4346%x4347))>>x4348);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x4406 = 16505668377368802LLU;
	int32_t x4407 = -3106273;
	uint8_t x4408 = 25U;
	static volatile uint64_t t78 = 1523753LLU;

	t78 = ((x4405|(x4406%x4407))>>x4408);

	if (t78 != 549755813887LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x4677 = 1U;
	uint64_t x4678 = UINT64_MAX;
	int16_t x4679 = INT16_MIN;
	uint32_t x4680 = 1U;
	static volatile uint64_t t79 = 52LLU;

	t79 = ((x4677|(x4678%x4679))>>x4680);

	if (t79 != 16383LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x4801 = 162LLU;
	volatile int16_t x4802 = INT16_MIN;
	volatile uint8_t x4803 = 3U;
	uint64_t t80 = 962901695065790LLU;

	t80 = ((x4801|(x4802%x4803))>>x4804);

	if (t80 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x4837 = 458U;
	int8_t x4840 = 15;
	static int64_t t81 = 0LL;

	t81 = ((x4837|(x4838%x4839))>>x4840);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x4981 = 63U;
	int8_t x4983 = INT8_MIN;
	uint32_t x4984 = 13U;

	t82 = ((x4981|(x4982%x4983))>>x4984);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x5093 = 95U;
	int8_t x5094 = INT8_MIN;
	uint32_t x5095 = 954485U;
	static uint32_t t83 = 119619226U;

	t83 = ((x5093|(x5094%x5095))>>x5096);

	if (t83 != 23098U) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x5122 = UINT8_MAX;
	uint64_t x5123 = UINT64_MAX;

	t84 = ((x5121|(x5122%x5123))>>x5124);

	if (t84 != 255LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x5449 = -5;
	uint32_t x5450 = UINT32_MAX;
	int16_t x5451 = INT16_MIN;
	uint32_t t85 = 431196721U;

	t85 = ((x5449|(x5450%x5451))>>x5452);

	if (t85 != 536870911U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x5478 = -1;
	int64_t x5479 = INT64_MAX;
	int16_t x5480 = 0;
	volatile uint64_t t86 = UINT64_MAX;

	t86 = ((x5477|(x5478%x5479))>>x5480);

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x5513 = -1;
	uint32_t x5514 = UINT32_MAX;

	t87 = ((x5513|(x5514%x5515))>>x5516);

	if (t87 != 33554431U) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x5557 = UINT16_MAX;
	uint8_t x5559 = 73U;
	static int8_t x5560 = 7;

	t88 = ((x5557|(x5558%x5559))>>x5560);

	if (t88 != 511) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x5561 = UINT8_MAX;
	static int16_t x5562 = INT16_MAX;
	volatile uint16_t x5564 = 4U;
	uint32_t t89 = 47U;

	t89 = ((x5561|(x5562%x5563))>>x5564);

	if (t89 != 15U) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x5565 = 2U;
	int16_t x5566 = INT16_MAX;
	static uint8_t x5567 = 72U;
	int16_t x5568 = 2;
	volatile uint32_t t90 = 1740549582U;

	t90 = ((x5565|(x5566%x5567))>>x5568);

	if (t90 != 1U) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x5669 = INT8_MAX;
	static uint32_t x5672 = 44U;
	volatile uint64_t t91 = 2626279344414LLU;

	t91 = ((x5669|(x5670%x5671))>>x5672);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x5737 = -45;
	static uint32_t x5738 = 3U;
	uint64_t x5739 = 35750669304LLU;
	uint64_t t92 = 16351023831650145LLU;

	t92 = ((x5737|(x5738%x5739))>>x5740);

	if (t92 != 281474976710655LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x5793 = 0;
	static int8_t x5794 = INT8_MAX;
	uint16_t x5795 = 29U;
	int32_t t93 = 20099022;

	t93 = ((x5793|(x5794%x5795))>>x5796);

	if (t93 != 5) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x5814 = UINT8_MAX;
	int8_t x5816 = 0;
	int32_t t94 = 4622;

	t94 = ((x5813|(x5814%x5815))>>x5816);

	if (t94 != 2251) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x5830 = 1720648445U;
	uint8_t x5831 = 68U;
	int16_t x5832 = 0;

	t95 = ((x5829|(x5830%x5831))>>x5832);

	if (t95 != 41U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x5965 = 58U;
	static uint64_t x5966 = 11LLU;
	static int16_t x5967 = INT16_MIN;
	uint16_t x5968 = 0U;
	volatile uint64_t t96 = 3114LLU;

	t96 = ((x5965|(x5966%x5967))>>x5968);

	if (t96 != 59LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x6037 = 98U;
	volatile uint8_t x6038 = 2U;
	int64_t x6039 = -1LL;
	uint16_t x6040 = 1U;
	int64_t t97 = 1043558763986875414LL;

	t97 = ((x6037|(x6038%x6039))>>x6040);

	if (t97 != 49LL) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint64_t x6249 = 0LLU;
	volatile int16_t x6250 = -1;
	uint64_t x6251 = 908273520LLU;
	static int32_t x6252 = 1;

	t98 = ((x6249|(x6250%x6251))>>x6252);

	if (t98 != 260817487LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x6265 = -8027350;
	volatile uint64_t x6266 = UINT64_MAX;
	volatile uint16_t x6267 = 86U;
	uint32_t x6268 = 0U;
	volatile uint64_t t99 = 3192958683566608113LLU;

	t99 = ((x6265|(x6266%x6267))>>x6268);

	if (t99 != 18446744073701524347LLU) { NG(); } else { ; }
	
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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x8 = 5U;
volatile int8_t x23 = 1;
int16_t x145 = -860;
uint64_t t6 = 202456206913LLU;
int32_t x410 = 485371373;
static int32_t t8 = 989603;
int16_t x520 = -852;
uint8_t x561 = UINT8_MAX;
int32_t x562 = INT32_MAX;
int32_t t10 = 855004527;
volatile int16_t x565 = INT16_MAX;
volatile uint32_t x612 = UINT32_MAX;
int32_t t14 = 0;
volatile uint16_t x794 = UINT16_MAX;
int8_t x795 = 1;
int32_t x796 = INT32_MAX;
int16_t x830 = 3;
int64_t x832 = INT64_MIN;
uint64_t t17 = 1896319493801545LLU;
static uint64_t t18 = 8525169780271101LLU;
int16_t x1071 = 1;
static uint16_t x1086 = 10844U;
uint32_t x1207 = 3U;
static uint16_t x1286 = UINT16_MAX;
volatile int8_t x1288 = -8;
uint64_t t24 = 273719LLU;
int64_t x1310 = INT64_MAX;
int8_t x1311 = 3;
uint8_t x1349 = 1U;
int64_t t27 = 590284685951631267LL;
int32_t x1397 = -1;
uint8_t x1399 = 30U;
volatile uint64_t x1489 = 22LLU;
volatile uint16_t x1490 = 2U;
uint8_t x1491 = 15U;
int8_t x1510 = 6;
uint16_t x1511 = 0U;
int32_t t30 = 209123157;
uint64_t x1618 = 1125637734305683441LLU;
volatile int64_t x1620 = INT64_MIN;
int8_t x1694 = 26;
static int32_t x1745 = INT32_MIN;
int32_t t34 = INT32_MIN;
volatile int16_t x1782 = INT16_MAX;
uint32_t x1784 = UINT32_MAX;
volatile int32_t t42 = 88178;
volatile uint16_t x2315 = 27U;
static int64_t t45 = 798154319862474687LL;
uint64_t x2442 = 6444LLU;
static int16_t x2444 = -118;
int64_t x2617 = INT64_MIN;
int32_t x2618 = 84;
int16_t x2620 = 291;
volatile uint8_t x2706 = 2U;
uint8_t x2755 = 1U;
volatile int8_t x2777 = 3;
static volatile uint8_t x2786 = 7U;
static int8_t x2888 = INT8_MIN;
static int16_t x3143 = 1;
volatile int8_t x3185 = INT8_MIN;
static volatile uint64_t x3186 = 35304229856445690LLU;
uint64_t t57 = 270772598599LLU;
static volatile int32_t t60 = -20316;
int32_t x3536 = INT32_MIN;
int8_t x3541 = 2;
volatile int64_t x3560 = -1LL;
static int64_t t65 = -752LL;
static uint64_t x3679 = 2LLU;
int64_t t66 = -668LL;
int8_t x3775 = 0;
int8_t x3837 = -1;
int64_t x3870 = 5615259912977LL;
volatile uint8_t x3872 = UINT8_MAX;
uint8_t x3984 = UINT8_MAX;
volatile int64_t t71 = -368188LL;
int32_t x4007 = 1;
int16_t x4296 = INT16_MIN;
volatile uint64_t x4384 = 1LLU;
int16_t x4389 = INT16_MIN;
int16_t x4466 = 5;
volatile int32_t x4476 = -1;
static volatile int32_t t80 = -2155;
uint8_t x4568 = UINT8_MAX;
static int64_t t81 = 39LL;
uint16_t x4750 = 242U;
uint16_t x4787 = 1U;
int16_t x4859 = 1;
static uint16_t x4860 = 3U;
volatile uint32_t t85 = 675384928U;
int64_t x4866 = 118241944537414LL;
volatile int8_t x4867 = 4;
static int32_t x4873 = 0;
uint64_t x4973 = 1152557327LLU;
static int32_t x5057 = INT32_MIN;
int8_t x5098 = INT8_MAX;
volatile uint16_t x5110 = UINT16_MAX;
uint8_t x5111 = 4U;
volatile int32_t t92 = 292;
int8_t x5148 = INT8_MAX;
volatile uint8_t x5191 = 7U;
volatile uint32_t x5192 = 448490U;
static uint32_t x5246 = 1263279U;
uint64_t x5478 = 47013747682213559LLU;
volatile int8_t x5528 = 8;


void f0(void) {
	uint64_t x5 = 252LLU;
	int64_t x6 = INT64_MAX;
	int8_t x7 = 1;
	static volatile uint64_t t0 = 194263LLU;

	t0 = (x5+((x6>>x7)%x8));

	if (t0 != 255LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x21 = INT8_MAX;
	int32_t x22 = INT32_MAX;
	uint32_t x24 = UINT32_MAX;
	static uint32_t t1 = 73U;

	t1 = (x21+((x22>>x23)%x24));

	if (t1 != 1073741950U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x146 = INT16_MAX;
	uint8_t x147 = 5U;
	int64_t x148 = INT64_MIN;
	volatile int64_t t2 = 843LL;

	t2 = (x145+((x146>>x147)%x148));

	if (t2 != 163LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x169 = 8416087684493328LLU;
	static volatile uint8_t x170 = 5U;
	int8_t x171 = 1;
	static int8_t x172 = -26;
	static uint64_t t3 = 18869130LLU;

	t3 = (x169+((x170>>x171)%x172));

	if (t3 != 8416087684493330LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x209 = 54U;
	int64_t x210 = 44LL;
	uint8_t x211 = 50U;
	int64_t x212 = INT64_MIN;
	static volatile int64_t t4 = 138576693718960LL;

	t4 = (x209+((x210>>x211)%x212));

	if (t4 != 54LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x237 = 3977939766LLU;
	uint8_t x238 = 1U;
	int32_t x239 = 7;
	static volatile uint64_t x240 = 33779600LLU;
	static volatile uint64_t t5 = 648849LLU;

	t5 = (x237+((x238>>x239)%x240));

	if (t5 != 3977939766LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x249 = INT8_MIN;
	volatile int16_t x250 = INT16_MAX;
	static int64_t x251 = 1LL;
	uint64_t x252 = UINT64_MAX;

	t6 = (x249+((x250>>x251)%x252));

	if (t6 != 16255LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x329 = INT64_MIN;
	int8_t x330 = 15;
	int16_t x331 = 17;
	uint64_t x332 = 3LLU;
	volatile uint64_t t7 = 459333LLU;

	t7 = (x329+((x330>>x331)%x332));

	if (t7 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x409 = 8999U;
	int8_t x411 = 21;
	int16_t x412 = INT16_MIN;

	t8 = (x409+((x410>>x411)%x412));

	if (t8 != 9230) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x517 = -32LL;
	volatile int32_t x518 = INT32_MAX;
	uint8_t x519 = 4U;
	volatile int64_t t9 = -3LL;

	t9 = (x517+((x518>>x519)%x520));

	if (t9 != 431LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x563 = 1U;
	uint16_t x564 = 62U;

	t10 = (x561+((x562>>x563)%x564));

	if (t10 != 286) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x566 = UINT64_MAX;
	static volatile int8_t x567 = 7;
	int16_t x568 = 3;
	uint64_t t11 = 1456210LLU;

	t11 = (x565+((x566>>x567)%x568));

	if (t11 != 32768LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x609 = 186676U;
	int64_t x610 = INT64_MAX;
	uint8_t x611 = 12U;
	volatile int64_t t12 = 1304936LL;

	t12 = (x609+((x610>>x611)%x612));

	if (t12 != 710963LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x673 = INT64_MIN;
	uint16_t x674 = 281U;
	int8_t x675 = 19;
	int64_t x676 = INT64_MIN;
	int64_t t13 = INT64_MIN;

	t13 = (x673+((x674>>x675)%x676));

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x733 = 1U;
	int16_t x734 = INT16_MAX;
	volatile uint8_t x735 = 9U;
	int16_t x736 = INT16_MAX;

	t14 = (x733+((x734>>x735)%x736));

	if (t14 != 64) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x793 = INT8_MIN;
	static int32_t t15 = 1;

	t15 = (x793+((x794>>x795)%x796));

	if (t15 != 32639) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x829 = 1;
	int16_t x831 = 3;
	int64_t t16 = 404LL;

	t16 = (x829+((x830>>x831)%x832));

	if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x893 = -249;
	volatile int8_t x894 = INT8_MAX;
	uint16_t x895 = 2U;
	uint64_t x896 = 6253047668LLU;

	t17 = (x893+((x894>>x895)%x896));

	if (t17 != 18446744073709551398LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x905 = 44697724716LL;
	uint8_t x906 = 0U;
	volatile uint16_t x907 = 0U;
	static uint64_t x908 = 4202614918448448403LLU;

	t18 = (x905+((x906>>x907)%x908));

	if (t18 != 44697724716LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x1069 = -8;
	int16_t x1070 = 628;
	static int64_t x1072 = INT64_MIN;
	int64_t t19 = -4137230259LL;

	t19 = (x1069+((x1070>>x1071)%x1072));

	if (t19 != 306LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1085 = -1;
	volatile uint16_t x1087 = 31U;
	int32_t x1088 = -309381543;
	volatile int32_t t20 = -436;

	t20 = (x1085+((x1086>>x1087)%x1088));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1089 = -1;
	int16_t x1090 = 1;
	int16_t x1091 = 0;
	static int32_t x1092 = -1;
	int32_t t21 = -11870120;

	t21 = (x1089+((x1090>>x1091)%x1092));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x1205 = 12U;
	uint64_t x1206 = 427246960887228952LLU;
	int64_t x1208 = -1LL;
	uint64_t t22 = 836LLU;

	t22 = (x1205+((x1206>>x1207)%x1208));

	if (t22 != 53405870110903631LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x1241 = 8670256;
	uint8_t x1242 = 102U;
	uint8_t x1243 = 2U;
	int8_t x1244 = -1;
	volatile int32_t t23 = 219580426;

	t23 = (x1241+((x1242>>x1243)%x1244));

	if (t23 != 8670256) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x1285 = 1LLU;
	uint8_t x1287 = 0U;

	t24 = (x1285+((x1286>>x1287)%x1288));

	if (t24 != 8LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x1309 = 108U;
	volatile uint8_t x1312 = UINT8_MAX;
	int64_t t25 = -65387406783891LL;

	t25 = (x1309+((x1310>>x1311)%x1312));

	if (t25 != 123LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x1350 = UINT16_MAX;
	int32_t x1351 = 3;
	static volatile int8_t x1352 = -10;
	int32_t t26 = 6978247;

	t26 = (x1349+((x1350>>x1351)%x1352));

	if (t26 != 2) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1353 = INT64_MIN;
	int64_t x1354 = INT64_MAX;
	static int8_t x1355 = 49;
	int16_t x1356 = INT16_MIN;

	t27 = (x1353+((x1354>>x1355)%x1356));

	if (t27 != -9223372036854759425LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1398 = 1285U;
	volatile int64_t x1400 = -40762139599429004LL;
	int64_t t28 = -3015468624359LL;

	t28 = (x1397+((x1398>>x1399)%x1400));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x1492 = INT8_MIN;
	volatile uint64_t t29 = 980LLU;

	t29 = (x1489+((x1490>>x1491)%x1492));

	if (t29 != 22LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x1509 = INT32_MIN;
	int16_t x1512 = INT16_MAX;

	t30 = (x1509+((x1510>>x1511)%x1512));

	if (t30 != -2147483642) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1617 = 115U;
	int32_t x1619 = 12;
	uint64_t t31 = 9521830490399652LLU;

	t31 = (x1617+((x1618>>x1619)%x1620));

	if (t31 != 274813899977088LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1681 = INT8_MAX;
	int32_t x1682 = 2;
	uint8_t x1683 = 5U;
	uint64_t x1684 = 4182426LLU;
	volatile uint64_t t32 = 32329554833LLU;

	t32 = (x1681+((x1682>>x1683)%x1684));

	if (t32 != 127LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x1693 = 170U;
	uint8_t x1695 = 26U;
	int8_t x1696 = INT8_MIN;
	volatile uint32_t t33 = 5634757U;

	t33 = (x1693+((x1694>>x1695)%x1696));

	if (t33 != 170U) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x1746 = 0U;
	uint64_t x1747 = 2LLU;
	int8_t x1748 = 1;

	t34 = (x1745+((x1746>>x1747)%x1748));

	if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x1765 = 11;
	int16_t x1766 = INT16_MAX;
	int8_t x1767 = 1;
	uint64_t x1768 = 665032274LLU;
	volatile uint64_t t35 = 174LLU;

	t35 = (x1765+((x1766>>x1767)%x1768));

	if (t35 != 16394LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x1781 = 393LLU;
	static volatile uint8_t x1783 = 15U;
	uint64_t t36 = 42124LLU;

	t36 = (x1781+((x1782>>x1783)%x1784));

	if (t36 != 393LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x1797 = 84091118LLU;
	int16_t x1798 = 1;
	int8_t x1799 = 1;
	static int16_t x1800 = -1;
	static volatile uint64_t t37 = 113128703091137LLU;

	t37 = (x1797+((x1798>>x1799)%x1800));

	if (t37 != 84091118LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x1813 = 15799U;
	volatile uint64_t x1814 = UINT64_MAX;
	volatile int8_t x1815 = 1;
	int32_t x1816 = INT32_MIN;
	uint64_t t38 = 11624748LLU;

	t38 = (x1813+((x1814>>x1815)%x1816));

	if (t38 != 9223372036854791606LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1877 = -1LL;
	int16_t x1878 = 0;
	uint8_t x1879 = 7U;
	int8_t x1880 = INT8_MAX;
	int64_t t39 = 8010LL;

	t39 = (x1877+((x1878>>x1879)%x1880));

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x2005 = INT16_MIN;
	uint8_t x2006 = 0U;
	volatile uint8_t x2007 = 14U;
	uint8_t x2008 = 44U;
	int32_t t40 = -264930567;

	t40 = (x2005+((x2006>>x2007)%x2008));

	if (t40 != -32768) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x2017 = INT32_MAX;
	uint64_t x2018 = 10LLU;
	uint8_t x2019 = 19U;
	int8_t x2020 = -9;
	volatile uint64_t t41 = 27167LLU;

	t41 = (x2017+((x2018>>x2019)%x2020));

	if (t41 != 2147483647LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x2193 = -74743;
	static int32_t x2194 = 433098023;
	uint64_t x2195 = 25LLU;
	int16_t x2196 = 8;

	t42 = (x2193+((x2194>>x2195)%x2196));

	if (t42 != -74739) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x2241 = 656381310U;
	static uint8_t x2242 = 0U;
	uint8_t x2243 = 10U;
	int16_t x2244 = INT16_MIN;
	volatile uint32_t t43 = 53610U;

	t43 = (x2241+((x2242>>x2243)%x2244));

	if (t43 != 656381310U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x2313 = INT16_MIN;
	uint64_t x2314 = 250696051644LLU;
	int32_t x2316 = -1;
	static volatile uint64_t t44 = 48644914LLU;

	t44 = (x2313+((x2314>>x2315)%x2316));

	if (t44 != 18446744073709520715LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x2333 = -131348180210055LL;
	static int16_t x2334 = INT16_MAX;
	int64_t x2335 = 7LL;
	uint8_t x2336 = 1U;

	t45 = (x2333+((x2334>>x2335)%x2336));

	if (t45 != -131348180210055LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x2441 = -1;
	int8_t x2443 = 30;
	static uint64_t t46 = UINT64_MAX;

	t46 = (x2441+((x2442>>x2443)%x2444));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2509 = INT16_MIN;
	static int32_t x2510 = INT32_MAX;
	uint8_t x2511 = 4U;
	static volatile uint8_t x2512 = 32U;
	int32_t t47 = 151970;

	t47 = (x2509+((x2510>>x2511)%x2512));

	if (t47 != -32737) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x2619 = 6U;
	volatile int64_t t48 = -2447183913767272LL;

	t48 = (x2617+((x2618>>x2619)%x2620));

	if (t48 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x2705 = 15U;
	uint8_t x2707 = 20U;
	int16_t x2708 = INT16_MIN;
	volatile int32_t t49 = 17468574;

	t49 = (x2705+((x2706>>x2707)%x2708));

	if (t49 != 15) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x2753 = INT8_MIN;
	int32_t x2754 = INT32_MAX;
	volatile uint32_t x2756 = 7823966U;
	volatile uint32_t t50 = 291041U;

	t50 = (x2753+((x2754>>x2755)%x2756));

	if (t50 != 1858353U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x2778 = INT32_MAX;
	volatile uint64_t x2779 = 0LLU;
	static uint16_t x2780 = 22U;
	volatile int32_t t51 = 7347470;

	t51 = (x2777+((x2778>>x2779)%x2780));

	if (t51 != 4) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x2785 = UINT32_MAX;
	static int32_t x2787 = 0;
	volatile int64_t x2788 = -220214980881865466LL;
	volatile int64_t t52 = -16475606LL;

	t52 = (x2785+((x2786>>x2787)%x2788));

	if (t52 != 4294967302LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x2853 = INT32_MIN;
	uint32_t x2854 = UINT32_MAX;
	uint8_t x2855 = 4U;
	volatile uint16_t x2856 = 46U;
	volatile uint32_t t53 = 7869U;

	t53 = (x2853+((x2854>>x2855)%x2856));

	if (t53 != 2147483665U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x2873 = -14288LL;
	uint32_t x2874 = 2112463491U;
	static volatile int16_t x2875 = 1;
	volatile uint64_t x2876 = UINT64_MAX;
	uint64_t t54 = 8577109400096367LLU;

	t54 = (x2873+((x2874>>x2875)%x2876));

	if (t54 != 1056217457LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x2885 = 1U;
	uint64_t x2886 = UINT64_MAX;
	uint16_t x2887 = 1U;
	volatile uint64_t t55 = 2637LLU;

	t55 = (x2885+((x2886>>x2887)%x2888));

	if (t55 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x3141 = -1;
	static volatile int16_t x3142 = INT16_MAX;
	volatile uint64_t x3144 = 2353LLU;
	uint64_t t56 = 302926440243946885LLU;

	t56 = (x3141+((x3142>>x3143)%x3144));

	if (t56 != 2264LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x3187 = 1U;
	int16_t x3188 = INT16_MIN;

	t57 = (x3185+((x3186>>x3187)%x3188));

	if (t57 != 17652114928222717LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x3461 = -1LL;
	volatile int8_t x3462 = 0;
	static int8_t x3463 = 5;
	int16_t x3464 = INT16_MIN;
	volatile int64_t t58 = 146947LL;

	t58 = (x3461+((x3462>>x3463)%x3464));

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x3469 = 87LLU;
	uint16_t x3470 = 1U;
	uint16_t x3471 = 0U;
	int32_t x3472 = 57952;
	volatile uint64_t t59 = 297459773935LLU;

	t59 = (x3469+((x3470>>x3471)%x3472));

	if (t59 != 88LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x3481 = 109U;
	static uint8_t x3482 = 5U;
	int8_t x3483 = 1;
	int8_t x3484 = INT8_MAX;

	t60 = (x3481+((x3482>>x3483)%x3484));

	if (t60 != 111) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x3533 = -3LL;
	uint8_t x3534 = 3U;
	uint8_t x3535 = 3U;
	static int64_t t61 = 167111292567LL;

	t61 = (x3533+((x3534>>x3535)%x3536));

	if (t61 != -3LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x3542 = UINT32_MAX;
	uint8_t x3543 = 4U;
	int32_t x3544 = INT32_MAX;
	static volatile uint32_t t62 = 92694U;

	t62 = (x3541+((x3542>>x3543)%x3544));

	if (t62 != 268435457U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x3545 = INT16_MAX;
	uint16_t x3546 = 1U;
	uint32_t x3547 = 2U;
	static int8_t x3548 = INT8_MIN;
	volatile int32_t t63 = -2309245;

	t63 = (x3545+((x3546>>x3547)%x3548));

	if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x3557 = UINT16_MAX;
	volatile int64_t x3558 = INT64_MAX;
	int8_t x3559 = 0;
	volatile int64_t t64 = -1LL;

	t64 = (x3557+((x3558>>x3559)%x3560));

	if (t64 != 65535LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x3625 = INT8_MIN;
	int64_t x3626 = 322LL;
	uint16_t x3627 = 27U;
	int64_t x3628 = -1LL;

	t65 = (x3625+((x3626>>x3627)%x3628));

	if (t65 != -128LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x3677 = -1;
	int64_t x3678 = 6LL;
	int8_t x3680 = 13;

	t66 = (x3677+((x3678>>x3679)%x3680));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x3773 = INT32_MIN;
	volatile uint16_t x3774 = 1U;
	static uint64_t x3776 = 55967332096LLU;
	volatile uint64_t t67 = 77371008245418992LLU;

	t67 = (x3773+((x3774>>x3775)%x3776));

	if (t67 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x3838 = UINT64_MAX;
	uint8_t x3839 = 50U;
	static int16_t x3840 = INT16_MAX;
	volatile uint64_t t68 = 6945367116752034525LLU;

	t68 = (x3837+((x3838>>x3839)%x3840));

	if (t68 != 16382LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x3869 = 102U;
	static int16_t x3871 = 33;
	volatile int64_t t69 = 248LL;

	t69 = (x3869+((x3870>>x3871)%x3872));

	if (t69 != 245LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x3877 = 107212297LL;
	uint32_t x3878 = 2026U;
	uint16_t x3879 = 1U;
	volatile int32_t x3880 = -135500608;
	int64_t t70 = -47732688359736203LL;

	t70 = (x3877+((x3878>>x3879)%x3880));

	if (t70 != 107213310LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x3981 = UINT32_MAX;
	static volatile int64_t x3982 = INT64_MAX;
	static uint8_t x3983 = 15U;

	t71 = (x3981+((x3982>>x3983)%x3984));

	if (t71 != 4294967295LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x4005 = INT8_MIN;
	int64_t x4006 = 235LL;
	int8_t x4008 = INT8_MIN;
	static int64_t t72 = 1845546973655568LL;

	t72 = (x4005+((x4006>>x4007)%x4008));

	if (t72 != -11LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x4085 = 1162U;
	static uint8_t x4086 = 1U;
	uint8_t x4087 = 0U;
	int16_t x4088 = -8713;
	volatile int32_t t73 = 1508;

	t73 = (x4085+((x4086>>x4087)%x4088));

	if (t73 != 1163) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x4089 = 2U;
	uint8_t x4090 = 112U;
	uint16_t x4091 = 3U;
	volatile int16_t x4092 = -248;
	volatile int32_t t74 = 363850867;

	t74 = (x4089+((x4090>>x4091)%x4092));

	if (t74 != 16) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x4293 = -1;
	uint8_t x4294 = 4U;
	static uint8_t x4295 = 0U;
	volatile int32_t t75 = 598522064;

	t75 = (x4293+((x4294>>x4295)%x4296));

	if (t75 != 3) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x4381 = 2U;
	uint16_t x4382 = 67U;
	int64_t x4383 = 1LL;
	uint64_t t76 = 965LLU;

	t76 = (x4381+((x4382>>x4383)%x4384));

	if (t76 != 2LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x4390 = UINT64_MAX;
	volatile uint8_t x4391 = 1U;
	volatile int16_t x4392 = INT16_MIN;
	volatile uint64_t t77 = 26059699LLU;

	t77 = (x4389+((x4390>>x4391)%x4392));

	if (t77 != 9223372036854743039LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x4417 = -1LL;
	static int64_t x4418 = 5462045LL;
	int8_t x4419 = 50;
	int16_t x4420 = INT16_MAX;
	volatile int64_t t78 = 10667352584314LL;

	t78 = (x4417+((x4418>>x4419)%x4420));

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x4465 = 54;
	volatile uint8_t x4467 = 0U;
	int64_t x4468 = INT64_MIN;
	volatile int64_t t79 = 4LL;

	t79 = (x4465+((x4466>>x4467)%x4468));

	if (t79 != 59LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x4473 = UINT8_MAX;
	int16_t x4474 = INT16_MAX;
	uint32_t x4475 = 7U;

	t80 = (x4473+((x4474>>x4475)%x4476));

	if (t80 != 255) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x4565 = 644LL;
	int16_t x4566 = 1;
	static uint8_t x4567 = 0U;

	t81 = (x4565+((x4566>>x4567)%x4568));

	if (t81 != 645LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x4677 = 87498981;
	volatile uint32_t x4678 = 12U;
	static int16_t x4679 = 0;
	volatile int8_t x4680 = 4;
	static volatile uint32_t t82 = 7U;

	t82 = (x4677+((x4678>>x4679)%x4680));

	if (t82 != 87498981U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x4749 = 3147;
	uint8_t x4751 = 1U;
	int64_t x4752 = INT64_MAX;
	volatile int64_t t83 = 2011187693LL;

	t83 = (x4749+((x4750>>x4751)%x4752));

	if (t83 != 3268LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x4785 = 3U;
	uint32_t x4786 = 0U;
	static uint32_t x4788 = UINT32_MAX;
	volatile uint32_t t84 = 18400U;

	t84 = (x4785+((x4786>>x4787)%x4788));

	if (t84 != 3U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x4857 = INT16_MIN;
	uint32_t x4858 = 1U;

	t85 = (x4857+((x4858>>x4859)%x4860));

	if (t85 != 4294934528U) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x4865 = 13U;
	uint16_t x4868 = 143U;
	int64_t t86 = 12433117LL;

	t86 = (x4865+((x4866>>x4867)%x4868));

	if (t86 != 92LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x4874 = UINT8_MAX;
	int8_t x4875 = 17;
	uint32_t x4876 = 1U;
	uint32_t t87 = 23U;

	t87 = (x4873+((x4874>>x4875)%x4876));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x4901 = 27LLU;
	static int16_t x4902 = 10;
	static int8_t x4903 = 4;
	int8_t x4904 = -6;
	static volatile uint64_t t88 = 1059771024262180228LLU;

	t88 = (x4901+((x4902>>x4903)%x4904));

	if (t88 != 27LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x4974 = 3U;
	uint32_t x4975 = 1U;
	int64_t x4976 = INT64_MAX;
	volatile uint64_t t89 = 327920842825LLU;

	t89 = (x4973+((x4974>>x4975)%x4976));

	if (t89 != 1152557328LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x5058 = 346523LL;
	uint8_t x5059 = 0U;
	uint8_t x5060 = UINT8_MAX;
	volatile int64_t t90 = -8057LL;

	t90 = (x5057+((x5058>>x5059)%x5060));

	if (t90 != -2147483415LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x5097 = 16697028LL;
	uint32_t x5099 = 23U;
	int64_t x5100 = -1LL;
	int64_t t91 = 2896LL;

	t91 = (x5097+((x5098>>x5099)%x5100));

	if (t91 != 16697028LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x5109 = 217;
	volatile int32_t x5112 = -193;

	t92 = (x5109+((x5110>>x5111)%x5112));

	if (t92 != 259) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x5145 = 2771874416LL;
	uint8_t x5146 = 5U;
	uint64_t x5147 = 28LLU;
	int64_t t93 = 27168014359153LL;

	t93 = (x5145+((x5146>>x5147)%x5148));

	if (t93 != 2771874416LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x5189 = INT16_MAX;
	volatile int16_t x5190 = 15288;
	uint32_t t94 = 1305745399U;

	t94 = (x5189+((x5190>>x5191)%x5192));

	if (t94 != 32886U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x5217 = INT64_MIN;
	volatile uint64_t x5218 = 1026540263983602389LLU;
	uint8_t x5219 = 2U;
	volatile int64_t x5220 = INT64_MAX;
	uint64_t t95 = 49954LLU;

	t95 = (x5217+((x5218>>x5219)%x5220));

	if (t95 != 9480007102850676405LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x5245 = 58;
	static volatile uint16_t x5247 = 3U;
	static uint32_t x5248 = 13670U;
	uint32_t t96 = 478U;

	t96 = (x5245+((x5246>>x5247)%x5248));

	if (t96 != 7597U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x5477 = INT64_MIN;
	volatile uint16_t x5479 = 43U;
	int8_t x5480 = INT8_MIN;
	static volatile uint64_t t97 = 17270LLU;

	t97 = (x5477+((x5478>>x5479)%x5480));

	if (t97 != 9223372036854781152LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x5525 = -62;
	uint32_t x5526 = 8034216U;
	uint32_t x5527 = 4U;
	uint32_t t98 = 3719U;

	t98 = (x5525+((x5526>>x5527)%x5528));

	if (t98 != 4294967236U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x5573 = 233030158967009LL;
	volatile uint16_t x5574 = 1U;
	uint16_t x5575 = 1U;
	uint64_t x5576 = UINT64_MAX;
	uint64_t t99 = 5237432557494LLU;

	t99 = (x5573+((x5574>>x5575)%x5576));

	if (t99 != 233030158967009LLU) { NG(); } else { ; }
	
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


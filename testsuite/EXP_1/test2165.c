#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MAX;
int64_t x3 = INT64_MIN;
volatile int32_t x57 = -1;
uint64_t x58 = 52LLU;
volatile uint8_t x59 = 3U;
static int16_t x63 = 1;
int64_t t3 = -2540343830627403305LL;
uint64_t t4 = 7214330852LLU;
int64_t x282 = INT64_MIN;
int16_t x342 = -667;
static volatile uint32_t x383 = 402058U;
static int8_t x384 = 0;
static int64_t t15 = 33656350870LL;
volatile int64_t x485 = INT64_MIN;
int64_t t17 = 137958LL;
volatile int32_t x555 = INT32_MAX;
uint64_t t18 = 399LLU;
uint16_t x593 = UINT16_MAX;
int16_t x595 = INT16_MAX;
static volatile int64_t t20 = -451825095872LL;
int16_t x645 = 1;
static int8_t x648 = 35;
uint64_t x663 = 8865371053226558LLU;
int8_t x668 = 52;
static int16_t x686 = 0;
uint64_t x727 = 491424372779386LLU;
int8_t x747 = -1;
int32_t x753 = INT32_MAX;
static int8_t x827 = INT8_MAX;
uint64_t t30 = 294098719LLU;
volatile int32_t x961 = 252871969;
int32_t x962 = -1;
static volatile int16_t x963 = INT16_MAX;
uint8_t x1076 = 1U;
static volatile uint8_t x1082 = UINT8_MAX;
uint32_t t37 = 0U;
int32_t x1166 = -32599;
int64_t x1173 = 946854611LL;
static int16_t x1174 = INT16_MIN;
volatile int16_t x1270 = INT16_MIN;
uint64_t t41 = 100441497605442138LLU;
static volatile int8_t x1452 = 0;
int16_t x1505 = -1386;
static int64_t x1506 = INT64_MIN;
uint32_t t48 = 7453U;
volatile uint32_t t49 = 1190581095U;
int64_t t51 = -944110009358LL;
int32_t t54 = 16237;
static int64_t x1811 = INT64_MIN;
int64_t x1812 = 11LL;
static int16_t x1897 = INT16_MIN;
uint8_t x1940 = 5U;
volatile int32_t t57 = -716;
uint32_t x1980 = 57U;
volatile uint32_t x1995 = 218129U;
uint32_t t60 = 16U;
uint32_t x2015 = UINT32_MAX;
int64_t x2110 = -1LL;
int64_t t65 = 278140014868382107LL;
uint8_t x2192 = 63U;
volatile int16_t x2198 = INT16_MIN;
int64_t x2242 = INT64_MIN;
static uint8_t x2244 = 5U;
static int64_t x2334 = INT64_MIN;
volatile int64_t x2346 = INT64_MAX;
static int8_t x2347 = INT8_MIN;
static uint8_t x2457 = 46U;
volatile uint32_t t74 = 3457U;
int32_t x2655 = INT32_MAX;
uint16_t x2780 = 0U;
int32_t x2800 = 0;
uint32_t x2808 = 1U;
static int16_t x2857 = 3563;
uint16_t x2860 = 6U;
int8_t x2889 = INT8_MIN;
int8_t x2906 = INT8_MAX;
int8_t x2907 = -1;
volatile int32_t x2949 = -1;
int64_t x2950 = INT64_MIN;
int16_t x3035 = INT16_MAX;
volatile uint8_t x3041 = UINT8_MAX;
static uint32_t x3079 = 5U;
static uint32_t t90 = 1120987U;
uint32_t x3097 = 547265556U;
uint64_t x3099 = 1653095122798694LLU;
int16_t x3134 = 5483;
uint8_t x3136 = 0U;
int8_t x3145 = INT8_MIN;
int16_t x3148 = 42;
int32_t x3179 = INT32_MIN;
static int8_t x3180 = 11;
int16_t x3182 = 540;
static int8_t x3184 = 28;
volatile int16_t x3247 = INT16_MIN;
volatile uint8_t x3248 = 0U;
int64_t x3285 = INT64_MIN;
int32_t x3286 = INT32_MIN;
int8_t x3288 = 23;
int64_t x3383 = INT64_MAX;


void f0(void) {
	int32_t x1 = INT32_MAX;
	volatile uint8_t x4 = 7U;
	volatile int64_t t0 = 5296641LL;

	t0 = (((x1^x2)&x3)>>x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x29 = UINT64_MAX;
	int8_t x30 = -1;
	int32_t x31 = -1114936;
	volatile uint8_t x32 = 38U;
	uint64_t t1 = 165358559776295LLU;

	t1 = (((x29^x30)&x31)>>x32);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x60 = 9LLU;
	volatile uint64_t t2 = 1LLU;

	t2 = (((x57^x58)&x59)>>x60);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x61 = INT16_MIN;
	int64_t x62 = INT64_MIN;
	int8_t x64 = 1;

	t3 = (((x61^x62)&x63)>>x64);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x145 = -1;
	int8_t x146 = INT8_MAX;
	volatile uint64_t x147 = UINT64_MAX;
	uint32_t x148 = 45U;

	t4 = (((x145^x146)&x147)>>x148);

	if (t4 != 524287LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x169 = 3U;
	uint16_t x170 = UINT16_MAX;
	int16_t x171 = -12;
	static uint16_t x172 = 10U;
	volatile int32_t t5 = -12974418;

	t5 = (((x169^x170)&x171)>>x172);

	if (t5 != 63) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x193 = 1956007LLU;
	int64_t x194 = -1LL;
	uint8_t x195 = UINT8_MAX;
	int8_t x196 = 50;
	uint64_t t6 = 1470487805LLU;

	t6 = (((x193^x194)&x195)>>x196);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x221 = 288U;
	int16_t x222 = 4;
	int16_t x223 = INT16_MAX;
	uint16_t x224 = 0U;
	uint32_t t7 = 1288288U;

	t7 = (((x221^x222)&x223)>>x224);

	if (t7 != 292U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x225 = 21;
	volatile uint8_t x226 = 1U;
	int8_t x227 = INT8_MIN;
	uint64_t x228 = 11LLU;
	int32_t t8 = -1;

	t8 = (((x225^x226)&x227)>>x228);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x249 = 544092;
	static volatile uint16_t x250 = 0U;
	uint64_t x251 = UINT64_MAX;
	uint8_t x252 = 6U;
	uint64_t t9 = 1502355648793751LLU;

	t9 = (((x249^x250)&x251)>>x252);

	if (t9 != 8501LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x281 = 12U;
	int64_t x283 = 973988LL;
	static uint8_t x284 = 61U;
	volatile int64_t t10 = 16625693581LL;

	t10 = (((x281^x282)&x283)>>x284);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x341 = -321LL;
	static uint64_t x343 = 793467961521LLU;
	uint8_t x344 = 8U;
	volatile uint64_t t11 = 8661LLU;

	t11 = (((x341^x342)&x343)>>x344);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x381 = -5391249;
	uint32_t x382 = 4U;
	static uint32_t t12 = 867067U;

	t12 = (((x381^x382)&x383)>>x384);

	if (t12 != 270346U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x425 = INT16_MAX;
	uint16_t x426 = 9888U;
	static int8_t x427 = INT8_MAX;
	int16_t x428 = 14;
	volatile int32_t t13 = 26470421;

	t13 = (((x425^x426)&x427)>>x428);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x437 = 1;
	int16_t x438 = -1;
	static int32_t x439 = 111;
	uint16_t x440 = 2U;
	volatile int32_t t14 = -329378;

	t14 = (((x437^x438)&x439)>>x440);

	if (t14 != 27) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x453 = INT64_MIN;
	volatile int32_t x454 = INT32_MAX;
	uint16_t x455 = UINT16_MAX;
	static int16_t x456 = 1;

	t15 = (((x453^x454)&x455)>>x456);

	if (t15 != 32767LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x477 = 94958385066LLU;
	static uint32_t x478 = 391313497U;
	static uint32_t x479 = 120U;
	static uint16_t x480 = 0U;
	volatile uint64_t t16 = 906LLU;

	t16 = (((x477^x478)&x479)>>x480);

	if (t16 != 112LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x486 = INT32_MAX;
	static int16_t x487 = 16185;
	static int8_t x488 = 2;

	t17 = (((x485^x486)&x487)>>x488);

	if (t17 != 4046LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x553 = 11470LLU;
	volatile int16_t x554 = -1;
	volatile uint8_t x556 = 16U;

	t18 = (((x553^x554)&x555)>>x556);

	if (t18 != 32767LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x594 = 0;
	uint8_t x596 = 2U;
	volatile int32_t t19 = -2;

	t19 = (((x593^x594)&x595)>>x596);

	if (t19 != 8191) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x597 = -1;
	int64_t x598 = -1LL;
	uint32_t x599 = UINT32_MAX;
	int8_t x600 = 5;

	t20 = (((x597^x598)&x599)>>x600);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x646 = -22;
	uint64_t x647 = UINT64_MAX;
	uint64_t t21 = 3758242603874LLU;

	t21 = (((x645^x646)&x647)>>x648);

	if (t21 != 536870911LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x661 = 7;
	int64_t x662 = INT64_MAX;
	uint8_t x664 = 1U;
	uint64_t t22 = 3522839317364713LLU;

	t22 = (((x661^x662)&x663)>>x664);

	if (t22 != 4432685526613276LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x665 = UINT64_MAX;
	uint16_t x666 = 16208U;
	int32_t x667 = -1;
	volatile uint64_t t23 = 227005549LLU;

	t23 = (((x665^x666)&x667)>>x668);

	if (t23 != 4095LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x685 = INT8_MAX;
	static uint64_t x687 = UINT64_MAX;
	volatile int16_t x688 = 4;
	uint64_t t24 = 89913LLU;

	t24 = (((x685^x686)&x687)>>x688);

	if (t24 != 7LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x725 = 2U;
	volatile uint16_t x726 = UINT16_MAX;
	int32_t x728 = 0;
	uint64_t t25 = 2930166LLU;

	t25 = (((x725^x726)&x727)>>x728);

	if (t25 != 27000LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x745 = 513U;
	int32_t x746 = INT32_MIN;
	int8_t x748 = 7;
	static uint32_t t26 = 13944648U;

	t26 = (((x745^x746)&x747)>>x748);

	if (t26 != 16777220U) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x754 = 123U;
	uint8_t x755 = UINT8_MAX;
	uint32_t x756 = 1U;
	int32_t t27 = 38814162;

	t27 = (((x753^x754)&x755)>>x756);

	if (t27 != 66) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x825 = INT8_MIN;
	uint64_t x826 = 977LLU;
	int16_t x828 = 0;
	volatile uint64_t t28 = 110471LLU;

	t28 = (((x825^x826)&x827)>>x828);

	if (t28 != 81LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x861 = INT32_MAX;
	int32_t x862 = INT32_MAX;
	volatile int64_t x863 = INT64_MIN;
	uint8_t x864 = 0U;
	int64_t t29 = 1749785LL;

	t29 = (((x861^x862)&x863)>>x864);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x897 = UINT64_MAX;
	volatile int8_t x898 = INT8_MIN;
	int32_t x899 = -1;
	uint8_t x900 = 1U;

	t30 = (((x897^x898)&x899)>>x900);

	if (t30 != 63LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x913 = 35265253867474LL;
	static int16_t x914 = 0;
	int16_t x915 = 15;
	int8_t x916 = 6;
	volatile int64_t t31 = -2283406075663513LL;

	t31 = (((x913^x914)&x915)>>x916);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x964 = 6U;
	int32_t t32 = -1;

	t32 = (((x961^x962)&x963)>>x964);

	if (t32 != 491) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1061 = INT32_MIN;
	int8_t x1062 = -1;
	uint8_t x1063 = 1U;
	int16_t x1064 = 1;
	int32_t t33 = 7059129;

	t33 = (((x1061^x1062)&x1063)>>x1064);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1073 = INT64_MAX;
	static int16_t x1074 = -1;
	static int32_t x1075 = INT32_MAX;
	int64_t t34 = -46438822847LL;

	t34 = (((x1073^x1074)&x1075)>>x1076);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1081 = INT16_MAX;
	uint8_t x1083 = 0U;
	uint8_t x1084 = 7U;
	static volatile int32_t t35 = 156;

	t35 = (((x1081^x1082)&x1083)>>x1084);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1125 = INT32_MIN;
	int16_t x1126 = -6;
	int16_t x1127 = 10;
	static uint16_t x1128 = 14U;
	volatile int32_t t36 = -4506;

	t36 = (((x1125^x1126)&x1127)>>x1128);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x1161 = 1466532U;
	volatile int16_t x1162 = 14834;
	int32_t x1163 = -1;
	int16_t x1164 = 1;

	t37 = (((x1161^x1162)&x1163)>>x1164);

	if (t37 != 732331U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1165 = -60811626LL;
	volatile int32_t x1167 = INT32_MAX;
	static int64_t x1168 = 1LL;
	static int64_t t38 = 10282492939293333LL;

	t38 = (((x1165^x1166)&x1167)>>x1168);

	if (t38 != 30395167LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x1175 = 4918354LLU;
	uint8_t x1176 = 2U;
	uint64_t t39 = 2474443LLU;

	t39 = (((x1173^x1174)&x1175)>>x1176);

	if (t39 != 532LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x1269 = 724656617U;
	int16_t x1271 = INT16_MIN;
	volatile int32_t x1272 = 27;
	uint32_t t40 = 6841U;

	t40 = (((x1269^x1270)&x1271)>>x1272);

	if (t40 != 26U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1297 = -1;
	uint64_t x1298 = UINT64_MAX;
	volatile int64_t x1299 = 902384695LL;
	uint32_t x1300 = 26U;

	t41 = (((x1297^x1298)&x1299)>>x1300);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x1321 = INT8_MIN;
	int8_t x1322 = -1;
	static int16_t x1323 = INT16_MIN;
	static volatile uint8_t x1324 = 1U;
	static int32_t t42 = -15954529;

	t42 = (((x1321^x1322)&x1323)>>x1324);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x1429 = UINT64_MAX;
	static uint64_t x1430 = 685489779001224778LLU;
	int64_t x1431 = INT64_MIN;
	uint8_t x1432 = 38U;
	uint64_t t43 = 13006883184892759LLU;

	t43 = (((x1429^x1430)&x1431)>>x1432);

	if (t43 != 33554432LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x1449 = 0;
	volatile int32_t x1450 = 1;
	volatile int8_t x1451 = -1;
	static volatile int32_t t44 = -209849705;

	t44 = (((x1449^x1450)&x1451)>>x1452);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x1507 = 23858799U;
	static uint8_t x1508 = 10U;
	int64_t t45 = 77334227LL;

	t45 = (((x1505^x1506)&x1507)>>x1508);

	if (t45 != 23298LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1537 = 20;
	int16_t x1538 = -2;
	volatile int32_t x1539 = INT32_MAX;
	static uint16_t x1540 = 0U;
	int32_t t46 = -1872;

	t46 = (((x1537^x1538)&x1539)>>x1540);

	if (t46 != 2147483626) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x1617 = 1U;
	static int16_t x1618 = INT16_MIN;
	uint16_t x1619 = UINT16_MAX;
	volatile uint32_t x1620 = 3U;
	volatile int32_t t47 = -84636549;

	t47 = (((x1617^x1618)&x1619)>>x1620);

	if (t47 != 4096) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x1665 = UINT32_MAX;
	int16_t x1666 = INT16_MAX;
	int32_t x1667 = INT32_MAX;
	uint64_t x1668 = 31LLU;

	t48 = (((x1665^x1666)&x1667)>>x1668);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x1685 = 167;
	uint8_t x1686 = 11U;
	volatile uint32_t x1687 = UINT32_MAX;
	uint8_t x1688 = 0U;

	t49 = (((x1685^x1686)&x1687)>>x1688);

	if (t49 != 172U) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x1689 = UINT32_MAX;
	uint32_t x1690 = 27U;
	volatile int8_t x1691 = -7;
	uint8_t x1692 = 0U;
	static volatile uint32_t t50 = 1U;

	t50 = (((x1689^x1690)&x1691)>>x1692);

	if (t50 != 4294967264U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x1713 = 121U;
	static volatile int64_t x1714 = INT64_MAX;
	uint16_t x1715 = 14809U;
	uint8_t x1716 = 1U;

	t51 = (((x1713^x1714)&x1715)>>x1716);

	if (t51 != 7360LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x1729 = 4U;
	static uint32_t x1730 = 57U;
	volatile int64_t x1731 = 0LL;
	uint8_t x1732 = 50U;
	static int64_t t52 = 23889LL;

	t52 = (((x1729^x1730)&x1731)>>x1732);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x1753 = 94U;
	int16_t x1754 = INT16_MAX;
	volatile uint32_t x1755 = 6833068U;
	static uint8_t x1756 = 0U;
	uint32_t t53 = 23889613U;

	t53 = (((x1753^x1754)&x1755)>>x1756);

	if (t53 != 17312U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x1757 = 19808U;
	static int16_t x1758 = -1;
	int8_t x1759 = 14;
	volatile uint64_t x1760 = 7LLU;

	t54 = (((x1757^x1758)&x1759)>>x1760);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x1809 = -1;
	int64_t x1810 = INT64_MIN;
	static int64_t t55 = 4LL;

	t55 = (((x1809^x1810)&x1811)>>x1812);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x1898 = INT8_MAX;
	uint32_t x1899 = 5828081U;
	int8_t x1900 = 14;
	volatile uint32_t t56 = 409U;

	t56 = (((x1897^x1898)&x1899)>>x1900);

	if (t56 != 354U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x1937 = UINT8_MAX;
	static volatile int32_t x1938 = INT32_MAX;
	int16_t x1939 = 1428;

	t57 = (((x1937^x1938)&x1939)>>x1940);

	if (t57 != 40) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint64_t x1945 = 11LLU;
	int16_t x1946 = INT16_MAX;
	int16_t x1947 = INT16_MAX;
	int32_t x1948 = 14;
	volatile uint64_t t58 = 25153121547458983LLU;

	t58 = (((x1945^x1946)&x1947)>>x1948);

	if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x1977 = 100U;
	uint64_t x1978 = 130453946LLU;
	volatile int32_t x1979 = 409801;
	uint64_t t59 = 203659508LLU;

	t59 = (((x1977^x1978)&x1979)>>x1980);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int16_t x1993 = INT16_MIN;
	uint32_t x1994 = 109111U;
	int16_t x1996 = 3;

	t60 = (((x1993^x1994)&x1995)>>x1996);

	if (t60 != 16386U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x2013 = 8155;
	int8_t x2014 = INT8_MIN;
	uint16_t x2016 = 10U;
	static volatile uint32_t t61 = 120472384U;

	t61 = (((x2013^x2014)&x2015)>>x2016);

	if (t61 != 4194296U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x2073 = 0U;
	int64_t x2074 = 7580525039128562LL;
	int16_t x2075 = 446;
	volatile uint64_t x2076 = 1LLU;
	int64_t t62 = -2466582LL;

	t62 = (((x2073^x2074)&x2075)>>x2076);

	if (t62 != 217LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x2085 = UINT64_MAX;
	uint32_t x2086 = 3U;
	static uint32_t x2087 = UINT32_MAX;
	uint8_t x2088 = 21U;
	volatile uint64_t t63 = 21672145590LLU;

	t63 = (((x2085^x2086)&x2087)>>x2088);

	if (t63 != 2047LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x2101 = INT64_MIN;
	uint8_t x2102 = UINT8_MAX;
	uint16_t x2103 = 3U;
	int8_t x2104 = 5;
	int64_t t64 = -61LL;

	t64 = (((x2101^x2102)&x2103)>>x2104);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x2109 = -232981241;
	static volatile int16_t x2111 = -2285;
	volatile int32_t x2112 = 2;

	t65 = (((x2109^x2110)&x2111)>>x2112);

	if (t65 != 58245252LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x2189 = 386;
	uint64_t x2190 = UINT64_MAX;
	int32_t x2191 = INT32_MIN;
	uint64_t t66 = 3509LLU;

	t66 = (((x2189^x2190)&x2191)>>x2192);

	if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x2197 = 26U;
	volatile int8_t x2199 = INT8_MAX;
	static uint64_t x2200 = 5LLU;
	volatile int32_t t67 = 1;

	t67 = (((x2197^x2198)&x2199)>>x2200);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x2241 = INT32_MIN;
	static uint8_t x2243 = UINT8_MAX;
	static volatile int64_t t68 = -27162288LL;

	t68 = (((x2241^x2242)&x2243)>>x2244);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x2269 = UINT16_MAX;
	int64_t x2270 = INT64_MAX;
	int16_t x2271 = INT16_MIN;
	int32_t x2272 = 1;
	volatile int64_t t69 = -2088505112523LL;

	t69 = (((x2269^x2270)&x2271)>>x2272);

	if (t69 != 4611686018427355136LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x2333 = INT16_MIN;
	uint32_t x2335 = UINT32_MAX;
	int8_t x2336 = 8;
	volatile int64_t t70 = 1848157349319714395LL;

	t70 = (((x2333^x2334)&x2335)>>x2336);

	if (t70 != 16777088LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x2345 = INT64_MAX;
	int32_t x2348 = 15;
	volatile int64_t t71 = -2369857964270580865LL;

	t71 = (((x2345^x2346)&x2347)>>x2348);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x2458 = 109U;
	uint64_t x2459 = 63699393180LLU;
	volatile uint16_t x2460 = 36U;
	uint64_t t72 = 242125121054787LLU;

	t72 = (((x2457^x2458)&x2459)>>x2460);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x2465 = UINT32_MAX;
	int16_t x2466 = -5;
	int64_t x2467 = 89735007237734LL;
	int64_t x2468 = 28LL;
	static volatile int64_t t73 = 444185LL;

	t73 = (((x2465^x2466)&x2467)>>x2468);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x2473 = INT16_MIN;
	int8_t x2474 = -1;
	static uint32_t x2475 = 0U;
	uint64_t x2476 = 8LLU;

	t74 = (((x2473^x2474)&x2475)>>x2476);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x2493 = -4845132LL;
	static volatile int8_t x2494 = 1;
	uint64_t x2495 = 1575342469LLU;
	volatile uint32_t x2496 = 2U;
	uint64_t t75 = 3382477881008LLU;

	t75 = (((x2493^x2494)&x2495)>>x2496);

	if (t75 != 392758369LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x2525 = 9U;
	static volatile int64_t x2526 = -85384341548207279LL;
	uint64_t x2527 = 137781102LLU;
	uint8_t x2528 = 4U;
	uint64_t t76 = 142LLU;

	t76 = (((x2525^x2526)&x2527)>>x2528);

	if (t76 != 8529204LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x2653 = -1;
	uint32_t x2654 = UINT32_MAX;
	uint64_t x2656 = 14LLU;
	static volatile uint32_t t77 = 3U;

	t77 = (((x2653^x2654)&x2655)>>x2656);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x2741 = 666U;
	int16_t x2742 = INT16_MAX;
	static uint64_t x2743 = UINT64_MAX;
	uint8_t x2744 = 29U;
	uint64_t t78 = 22076823LLU;

	t78 = (((x2741^x2742)&x2743)>>x2744);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x2777 = INT16_MIN;
	int32_t x2778 = INT32_MIN;
	int8_t x2779 = INT8_MAX;
	int32_t t79 = 87221967;

	t79 = (((x2777^x2778)&x2779)>>x2780);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x2797 = 13991072LL;
	int32_t x2798 = INT32_MIN;
	int8_t x2799 = 4;
	volatile int64_t t80 = 160LL;

	t80 = (((x2797^x2798)&x2799)>>x2800);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x2805 = -1LL;
	int16_t x2806 = -70;
	int64_t x2807 = INT64_MIN;
	int64_t t81 = -2130732841723408LL;

	t81 = (((x2805^x2806)&x2807)>>x2808);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x2858 = UINT8_MAX;
	int32_t x2859 = -1;
	volatile int32_t t82 = -11737;

	t82 = (((x2857^x2858)&x2859)>>x2860);

	if (t82 != 52) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x2890 = UINT64_MAX;
	int16_t x2891 = INT16_MAX;
	volatile uint8_t x2892 = 63U;
	volatile uint64_t t83 = 65581LLU;

	t83 = (((x2889^x2890)&x2891)>>x2892);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x2905 = 0U;
	static uint8_t x2908 = 1U;
	int32_t t84 = -268;

	t84 = (((x2905^x2906)&x2907)>>x2908);

	if (t84 != 63) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x2909 = 5U;
	volatile int16_t x2910 = 1;
	int32_t x2911 = INT32_MAX;
	uint8_t x2912 = 25U;
	volatile int32_t t85 = 21084763;

	t85 = (((x2909^x2910)&x2911)>>x2912);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x2951 = 1LLU;
	volatile int8_t x2952 = 25;
	uint64_t t86 = 873583LLU;

	t86 = (((x2949^x2950)&x2951)>>x2952);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x2981 = INT16_MIN;
	int64_t x2982 = INT64_MIN;
	int16_t x2983 = INT16_MAX;
	int16_t x2984 = 2;
	int64_t t87 = 19965LL;

	t87 = (((x2981^x2982)&x2983)>>x2984);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x3033 = INT16_MIN;
	int64_t x3034 = INT64_MIN;
	static uint8_t x3036 = 23U;
	static volatile int64_t t88 = 10LL;

	t88 = (((x3033^x3034)&x3035)>>x3036);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x3042 = -1;
	uint32_t x3043 = 751U;
	int8_t x3044 = 2;
	uint32_t t89 = 129322U;

	t89 = (((x3041^x3042)&x3043)>>x3044);

	if (t89 != 128U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x3077 = INT16_MIN;
	static uint8_t x3078 = UINT8_MAX;
	uint8_t x3080 = 0U;

	t90 = (((x3077^x3078)&x3079)>>x3080);

	if (t90 != 5U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x3098 = INT64_MIN;
	static volatile int64_t x3100 = 1LL;
	uint64_t t91 = 1035278282771348LLU;

	t91 = (((x3097^x3098)&x3099)>>x3100);

	if (t91 != 273220610LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x3133 = 1U;
	uint32_t x3135 = 1U;
	uint32_t t92 = 144484684U;

	t92 = (((x3133^x3134)&x3135)>>x3136);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x3146 = 123;
	volatile uint64_t x3147 = UINT64_MAX;
	uint64_t t93 = 627131161LLU;

	t93 = (((x3145^x3146)&x3147)>>x3148);

	if (t93 != 4194303LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x3177 = INT64_MIN;
	int8_t x3178 = -1;
	static int64_t t94 = -24LL;

	t94 = (((x3177^x3178)&x3179)>>x3180);

	if (t94 != 4503599626321920LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x3181 = 3;
	static uint32_t x3183 = UINT32_MAX;
	volatile uint32_t t95 = 243043939U;

	t95 = (((x3181^x3182)&x3183)>>x3184);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x3245 = INT16_MAX;
	int32_t x3246 = INT32_MAX;
	int32_t t96 = 15;

	t96 = (((x3245^x3246)&x3247)>>x3248);

	if (t96 != 2147450880) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x3287 = -1LL;
	static int64_t t97 = 427264400128LL;

	t97 = (((x3285^x3286)&x3287)>>x3288);

	if (t97 != 1099511627520LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x3365 = 6801880464LL;
	volatile int32_t x3366 = INT32_MIN;
	uint32_t x3367 = 2141153896U;
	int8_t x3368 = 10;
	int64_t t98 = -101004207837LL;

	t98 = (((x3365^x3366)&x3367)>>x3368);

	if (t98 != 344856LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x3381 = 1U;
	uint64_t x3382 = UINT64_MAX;
	uint16_t x3384 = 6U;
	volatile uint64_t t99 = 58700080763050609LLU;

	t99 = (((x3381^x3382)&x3383)>>x3384);

	if (t99 != 144115188075855871LLU) { NG(); } else { ; }
	
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


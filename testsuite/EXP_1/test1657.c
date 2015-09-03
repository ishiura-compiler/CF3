#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x65 = INT8_MIN;
int8_t x117 = INT8_MAX;
static volatile uint64_t t3 = 525501484627LLU;
static uint8_t x125 = 39U;
volatile uint8_t x128 = 3U;
int64_t x163 = -2647LL;
volatile int64_t t5 = 75LL;
int32_t x171 = INT32_MAX;
static int32_t x172 = 0;
uint16_t x256 = 3U;
uint8_t x412 = 2U;
int64_t x474 = -10124485117935LL;
int64_t x476 = 6LL;
int32_t t12 = -141;
volatile uint8_t x568 = 14U;
volatile int32_t t13 = 589291457;
static int32_t x587 = INT32_MIN;
int64_t x591 = -1LL;
static volatile uint64_t x597 = 12283227794355LLU;
int64_t x599 = -3513315LL;
uint64_t x646 = 589451066975466LLU;
static volatile int8_t x647 = 9;
int8_t x683 = INT8_MAX;
int32_t t19 = -31800;
int16_t x799 = INT16_MIN;
int64_t x857 = INT64_MAX;
volatile int32_t t22 = 1843;
int8_t x892 = 0;
uint8_t x908 = 0U;
uint8_t x912 = 6U;
int8_t x951 = INT8_MIN;
int64_t x952 = 1LL;
volatile int32_t x985 = INT32_MIN;
uint8_t x1004 = 4U;
int8_t x1104 = 1;
int64_t x1171 = -1LL;
static int32_t x1183 = INT32_MIN;
static int8_t x1189 = 0;
uint16_t x1204 = 9U;
int8_t x1252 = 12;
int32_t t42 = -20;
volatile int64_t t43 = 1713487029660853742LL;
static int32_t x1343 = INT32_MIN;
volatile int32_t x1347 = -1;
int8_t x1412 = 7;
int64_t x1461 = -1LL;
static volatile uint16_t x1468 = 0U;
uint32_t t50 = 1550U;
volatile int32_t t51 = 1220;
static uint8_t x1493 = 3U;
volatile int32_t x1495 = -1;
int32_t x1662 = -1;
static volatile int32_t t54 = -6;
int8_t x1713 = INT8_MIN;
int16_t x1734 = 1230;
static uint8_t x1736 = 0U;
volatile int64_t t57 = 12468694961LL;
int8_t x1769 = 1;
int8_t x1771 = -12;
uint16_t x1896 = 0U;
volatile int64_t t62 = 112595015088LL;
volatile int32_t t63 = -59226;
uint64_t x2066 = 861405355712018872LLU;
int8_t x2074 = -1;
int32_t t67 = -1813542;
volatile uint16_t x2224 = 1U;
uint8_t x2316 = 11U;
volatile int32_t t71 = -1;
int32_t t73 = 9251;
uint16_t x2428 = 11U;
static volatile int32_t t77 = -27397;
int16_t x2535 = INT16_MIN;
uint16_t x2536 = 0U;
int8_t x2538 = INT8_MAX;
int64_t x2541 = INT64_MIN;
static int8_t x2552 = 1;
static volatile uint16_t x2586 = UINT16_MAX;
int64_t x2587 = INT64_MAX;
uint8_t x2588 = 8U;
volatile int16_t x2760 = 3;
uint32_t x2778 = 1684U;
static int16_t x2803 = INT16_MIN;
uint16_t x2825 = 6U;
static int32_t x2827 = INT32_MIN;
uint32_t x2837 = UINT32_MAX;
int8_t x2839 = INT8_MIN;
int8_t x2842 = INT8_MIN;
uint16_t x2911 = 21107U;
int8_t x2972 = 7;
uint16_t x2984 = 7U;
int16_t x3038 = INT16_MAX;
uint32_t x3040 = 0U;
int32_t t97 = -420;
int64_t x3081 = -8063570LL;
int32_t x3083 = INT32_MIN;
int8_t x3084 = 0;


void f0(void) {
	uint64_t x41 = UINT64_MAX;
	static volatile int64_t x42 = INT64_MAX;
	volatile int8_t x43 = -56;
	volatile int8_t x44 = 2;
	volatile int32_t t0 = 8393213;

	t0 = (((x41<=x42)&x43)<<x44);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x61 = 122831679160927189LLU;
	int16_t x62 = INT16_MIN;
	uint8_t x63 = 1U;
	int8_t x64 = 1;
	volatile int32_t t1 = 18;

	t1 = (((x61<=x62)&x63)<<x64);

	if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x66 = UINT16_MAX;
	int8_t x67 = 11;
	int8_t x68 = 2;
	volatile int32_t t2 = -236829058;

	t2 = (((x65<=x66)&x67)<<x68);

	if (t2 != 4) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x118 = 853180940U;
	uint64_t x119 = 716369409624LLU;
	int8_t x120 = 59;

	t3 = (((x117<=x118)&x119)<<x120);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x126 = -7403;
	static volatile int8_t x127 = 5;
	int32_t t4 = -59281788;

	t4 = (((x125<=x126)&x127)<<x128);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x161 = -1063413040200LL;
	static int32_t x162 = INT32_MIN;
	volatile int8_t x164 = 12;

	t5 = (((x161<=x162)&x163)<<x164);

	if (t5 != 4096LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x169 = INT16_MIN;
	static int32_t x170 = INT32_MIN;
	static int32_t t6 = 28;

	t6 = (((x169<=x170)&x171)<<x172);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x253 = -1;
	volatile int64_t x254 = -1LL;
	static int16_t x255 = INT16_MIN;
	volatile int32_t t7 = -32483732;

	t7 = (((x253<=x254)&x255)<<x256);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x277 = INT8_MIN;
	volatile int8_t x278 = INT8_MIN;
	int64_t x279 = INT64_MIN;
	static volatile int16_t x280 = 8;
	int64_t t8 = 53151LL;

	t8 = (((x277<=x278)&x279)<<x280);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x281 = -1;
	static int16_t x282 = INT16_MIN;
	static uint64_t x283 = 14718732805LLU;
	int8_t x284 = 19;
	uint64_t t9 = 6301LLU;

	t9 = (((x281<=x282)&x283)<<x284);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x409 = 30313;
	int16_t x410 = INT16_MAX;
	uint32_t x411 = UINT32_MAX;
	volatile uint32_t t10 = 1815081U;

	t10 = (((x409<=x410)&x411)<<x412);

	if (t10 != 4U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x473 = INT16_MIN;
	uint16_t x475 = 1U;
	int32_t t11 = 1575;

	t11 = (((x473<=x474)&x475)<<x476);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x517 = 882;
	volatile uint16_t x518 = UINT16_MAX;
	int32_t x519 = INT32_MIN;
	volatile int16_t x520 = 15;

	t12 = (((x517<=x518)&x519)<<x520);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x565 = INT8_MIN;
	int64_t x566 = INT64_MIN;
	volatile uint8_t x567 = 0U;

	t13 = (((x565<=x566)&x567)<<x568);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x585 = -1LL;
	static volatile int64_t x586 = -1LL;
	int64_t x588 = 11LL;
	int32_t t14 = -78262;

	t14 = (((x585<=x586)&x587)<<x588);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x589 = INT8_MAX;
	static volatile int32_t x590 = INT32_MAX;
	int8_t x592 = 10;
	int64_t t15 = -502124648015LL;

	t15 = (((x589<=x590)&x591)<<x592);

	if (t15 != 1024LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x598 = 54U;
	uint16_t x600 = 4U;
	static volatile int64_t t16 = -15028576931LL;

	t16 = (((x597<=x598)&x599)<<x600);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x645 = -1;
	int8_t x648 = 1;
	volatile int32_t t17 = 90;

	t17 = (((x645<=x646)&x647)<<x648);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x653 = -3;
	int8_t x654 = INT8_MAX;
	volatile int64_t x655 = INT64_MAX;
	int16_t x656 = 5;
	volatile int64_t t18 = 19160976993LL;

	t18 = (((x653<=x654)&x655)<<x656);

	if (t18 != 32LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x681 = 1104525U;
	uint16_t x682 = 35U;
	int16_t x684 = 0;

	t19 = (((x681<=x682)&x683)<<x684);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x685 = INT64_MIN;
	int8_t x686 = -1;
	volatile int32_t x687 = INT32_MIN;
	static volatile uint64_t x688 = 1LLU;
	int32_t t20 = 374262358;

	t20 = (((x685<=x686)&x687)<<x688);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x797 = INT64_MAX;
	int64_t x798 = INT64_MIN;
	uint32_t x800 = 2U;
	volatile int32_t t21 = -23;

	t21 = (((x797<=x798)&x799)<<x800);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x858 = 1624637799908066LL;
	int16_t x859 = 253;
	uint16_t x860 = 1U;

	t22 = (((x857<=x858)&x859)<<x860);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x889 = INT16_MAX;
	int32_t x890 = INT32_MAX;
	uint64_t x891 = 1347652562220805LLU;
	uint64_t t23 = 29816749536408330LLU;

	t23 = (((x889<=x890)&x891)<<x892);

	if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x905 = 440491LL;
	int32_t x906 = INT32_MAX;
	uint64_t x907 = UINT64_MAX;
	volatile uint64_t t24 = 395726406807LLU;

	t24 = (((x905<=x906)&x907)<<x908);

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x909 = -1;
	int32_t x910 = 2;
	static int16_t x911 = INT16_MAX;
	static int32_t t25 = -300263566;

	t25 = (((x909<=x910)&x911)<<x912);

	if (t25 != 64) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x929 = INT32_MIN;
	uint8_t x930 = 1U;
	volatile uint8_t x931 = UINT8_MAX;
	volatile uint8_t x932 = 1U;
	int32_t t26 = -3;

	t26 = (((x929<=x930)&x931)<<x932);

	if (t26 != 2) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x949 = UINT8_MAX;
	static uint16_t x950 = 21U;
	int32_t t27 = 61733146;

	t27 = (((x949<=x950)&x951)<<x952);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x953 = 147425052921466LL;
	int8_t x954 = INT8_MIN;
	int8_t x955 = INT8_MAX;
	uint16_t x956 = 19U;
	static int32_t t28 = 15109;

	t28 = (((x953<=x954)&x955)<<x956);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x969 = INT64_MIN;
	uint16_t x970 = 6U;
	int8_t x971 = -17;
	uint8_t x972 = 7U;
	volatile int32_t t29 = 0;

	t29 = (((x969<=x970)&x971)<<x972);

	if (t29 != 128) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x973 = INT8_MIN;
	uint16_t x974 = 1013U;
	int32_t x975 = INT32_MIN;
	uint16_t x976 = 2U;
	static volatile int32_t t30 = 5061619;

	t30 = (((x973<=x974)&x975)<<x976);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x986 = UINT16_MAX;
	static int8_t x987 = INT8_MIN;
	static uint8_t x988 = 3U;
	int32_t t31 = -48;

	t31 = (((x985<=x986)&x987)<<x988);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1001 = UINT32_MAX;
	static volatile int8_t x1002 = 1;
	volatile int16_t x1003 = 5;
	int32_t t32 = 28;

	t32 = (((x1001<=x1002)&x1003)<<x1004);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x1097 = 54;
	int8_t x1098 = INT8_MIN;
	int64_t x1099 = INT64_MAX;
	volatile uint8_t x1100 = 59U;
	volatile int64_t t33 = -2115697836086LL;

	t33 = (((x1097<=x1098)&x1099)<<x1100);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1101 = INT32_MIN;
	uint64_t x1102 = UINT64_MAX;
	int64_t x1103 = INT64_MIN;
	volatile int64_t t34 = -107860667984LL;

	t34 = (((x1101<=x1102)&x1103)<<x1104);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x1133 = UINT16_MAX;
	int32_t x1134 = -18;
	static int8_t x1135 = 52;
	int8_t x1136 = 27;
	int32_t t35 = 0;

	t35 = (((x1133<=x1134)&x1135)<<x1136);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1137 = -105125;
	volatile int8_t x1138 = -1;
	volatile uint8_t x1139 = 30U;
	static uint8_t x1140 = 13U;
	volatile int32_t t36 = -1;

	t36 = (((x1137<=x1138)&x1139)<<x1140);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x1169 = INT32_MIN;
	int16_t x1170 = INT16_MAX;
	uint8_t x1172 = 0U;
	volatile int64_t t37 = 43LL;

	t37 = (((x1169<=x1170)&x1171)<<x1172);

	if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x1181 = INT16_MIN;
	int32_t x1182 = INT32_MIN;
	uint8_t x1184 = 4U;
	volatile int32_t t38 = -768274;

	t38 = (((x1181<=x1182)&x1183)<<x1184);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x1190 = 7U;
	volatile uint16_t x1191 = 23U;
	static uint16_t x1192 = 27U;
	volatile int32_t t39 = -66217870;

	t39 = (((x1189<=x1190)&x1191)<<x1192);

	if (t39 != 134217728) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x1193 = INT64_MIN;
	uint32_t x1194 = 8182858U;
	uint32_t x1195 = UINT32_MAX;
	volatile uint16_t x1196 = 1U;
	static volatile uint32_t t40 = 192191U;

	t40 = (((x1193<=x1194)&x1195)<<x1196);

	if (t40 != 2U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x1201 = 118;
	int32_t x1202 = -1;
	volatile int16_t x1203 = -1;
	static volatile int32_t t41 = -10479;

	t41 = (((x1201<=x1202)&x1203)<<x1204);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int32_t x1249 = INT32_MIN;
	int8_t x1250 = -1;
	int16_t x1251 = INT16_MIN;

	t42 = (((x1249<=x1250)&x1251)<<x1252);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint64_t x1265 = UINT64_MAX;
	volatile uint64_t x1266 = 155LLU;
	int64_t x1267 = INT64_MIN;
	int32_t x1268 = 28;

	t43 = (((x1265<=x1266)&x1267)<<x1268);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x1337 = INT64_MIN;
	int8_t x1338 = -6;
	int16_t x1339 = -1;
	volatile uint32_t x1340 = 29U;
	volatile int32_t t44 = -33;

	t44 = (((x1337<=x1338)&x1339)<<x1340);

	if (t44 != 536870912) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x1341 = INT16_MIN;
	uint16_t x1342 = 873U;
	uint8_t x1344 = 3U;
	volatile int32_t t45 = 0;

	t45 = (((x1341<=x1342)&x1343)<<x1344);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x1345 = -1;
	static int64_t x1346 = INT64_MIN;
	volatile uint16_t x1348 = 17U;
	int32_t t46 = -1811364;

	t46 = (((x1345<=x1346)&x1347)<<x1348);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x1389 = INT64_MIN;
	uint16_t x1390 = 106U;
	int64_t x1391 = INT64_MIN;
	uint16_t x1392 = 1U;
	int64_t t47 = -93LL;

	t47 = (((x1389<=x1390)&x1391)<<x1392);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x1409 = INT16_MAX;
	int32_t x1410 = INT32_MIN;
	int8_t x1411 = 13;
	int32_t t48 = -1;

	t48 = (((x1409<=x1410)&x1411)<<x1412);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x1462 = 12106220U;
	int32_t x1463 = -978451;
	uint16_t x1464 = 2U;
	volatile int32_t t49 = 3040442;

	t49 = (((x1461<=x1462)&x1463)<<x1464);

	if (t49 != 4) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x1465 = 20;
	int64_t x1466 = -983122769502443102LL;
	uint32_t x1467 = UINT32_MAX;

	t50 = (((x1465<=x1466)&x1467)<<x1468);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x1489 = -1;
	uint32_t x1490 = 2202U;
	static int8_t x1491 = -1;
	static uint8_t x1492 = 14U;

	t51 = (((x1489<=x1490)&x1491)<<x1492);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x1494 = INT8_MAX;
	uint64_t x1496 = 0LLU;
	int32_t t52 = 3554522;

	t52 = (((x1493<=x1494)&x1495)<<x1496);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x1641 = INT32_MAX;
	int32_t x1642 = -1734;
	volatile uint64_t x1643 = 11LLU;
	uint16_t x1644 = 4U;
	volatile uint64_t t53 = 38188079LLU;

	t53 = (((x1641<=x1642)&x1643)<<x1644);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x1661 = 4U;
	uint8_t x1663 = 14U;
	uint8_t x1664 = 10U;

	t54 = (((x1661<=x1662)&x1663)<<x1664);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x1714 = INT64_MIN;
	volatile uint32_t x1715 = 0U;
	static int8_t x1716 = 5;
	uint32_t t55 = 2U;

	t55 = (((x1713<=x1714)&x1715)<<x1716);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x1733 = UINT16_MAX;
	int32_t x1735 = -22;
	volatile int32_t t56 = 2910;

	t56 = (((x1733<=x1734)&x1735)<<x1736);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x1749 = -1;
	int16_t x1750 = INT16_MAX;
	static int64_t x1751 = INT64_MIN;
	uint8_t x1752 = 5U;

	t57 = (((x1749<=x1750)&x1751)<<x1752);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x1770 = INT64_MAX;
	static int16_t x1772 = 15;
	int32_t t58 = -1;

	t58 = (((x1769<=x1770)&x1771)<<x1772);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x1777 = 33086206921LLU;
	volatile int8_t x1778 = -1;
	volatile uint64_t x1779 = 47675LLU;
	volatile uint8_t x1780 = 7U;
	volatile uint64_t t59 = 0LLU;

	t59 = (((x1777<=x1778)&x1779)<<x1780);

	if (t59 != 128LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x1893 = -20901759192709050LL;
	uint16_t x1894 = UINT16_MAX;
	int32_t x1895 = INT32_MIN;
	int32_t t60 = 47990095;

	t60 = (((x1893<=x1894)&x1895)<<x1896);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x1965 = 3564514055544109709LLU;
	int8_t x1966 = -1;
	static int64_t x1967 = INT64_MIN;
	uint8_t x1968 = 9U;
	int64_t t61 = 2088019LL;

	t61 = (((x1965<=x1966)&x1967)<<x1968);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x1981 = 4LL;
	uint8_t x1982 = 3U;
	static int64_t x1983 = INT64_MIN;
	static int8_t x1984 = 0;

	t62 = (((x1981<=x1982)&x1983)<<x1984);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x2045 = UINT16_MAX;
	volatile int64_t x2046 = INT64_MIN;
	uint8_t x2047 = UINT8_MAX;
	int32_t x2048 = 0;

	t63 = (((x2045<=x2046)&x2047)<<x2048);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x2065 = INT64_MAX;
	uint16_t x2067 = 6523U;
	static volatile int8_t x2068 = 1;
	int32_t t64 = 7933097;

	t64 = (((x2065<=x2066)&x2067)<<x2068);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x2073 = INT8_MIN;
	int16_t x2075 = INT16_MIN;
	int32_t x2076 = 10;
	static int32_t t65 = 4841;

	t65 = (((x2073<=x2074)&x2075)<<x2076);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x2157 = INT16_MIN;
	int64_t x2158 = INT64_MIN;
	int32_t x2159 = -11499013;
	int8_t x2160 = 1;
	volatile int32_t t66 = 107058078;

	t66 = (((x2157<=x2158)&x2159)<<x2160);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x2173 = INT64_MIN;
	volatile int8_t x2174 = INT8_MIN;
	int16_t x2175 = INT16_MIN;
	int8_t x2176 = 1;

	t67 = (((x2173<=x2174)&x2175)<<x2176);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x2221 = UINT8_MAX;
	int16_t x2222 = INT16_MIN;
	int64_t x2223 = 0LL;
	int64_t t68 = 1094254737296909LL;

	t68 = (((x2221<=x2222)&x2223)<<x2224);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x2225 = 97U;
	uint16_t x2226 = UINT16_MAX;
	static int16_t x2227 = 4;
	int8_t x2228 = 15;
	int32_t t69 = 7;

	t69 = (((x2225<=x2226)&x2227)<<x2228);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x2313 = INT16_MIN;
	static volatile int32_t x2314 = INT32_MAX;
	static uint16_t x2315 = UINT16_MAX;
	int32_t t70 = 419;

	t70 = (((x2313<=x2314)&x2315)<<x2316);

	if (t70 != 2048) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x2341 = 374215;
	uint64_t x2342 = UINT64_MAX;
	int8_t x2343 = INT8_MIN;
	static uint8_t x2344 = 13U;

	t71 = (((x2341<=x2342)&x2343)<<x2344);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x2385 = INT32_MAX;
	static int8_t x2386 = -1;
	volatile uint16_t x2387 = 9901U;
	volatile int32_t x2388 = 0;
	volatile int32_t t72 = -983007616;

	t72 = (((x2385<=x2386)&x2387)<<x2388);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x2397 = 699LLU;
	static int64_t x2398 = INT64_MIN;
	uint8_t x2399 = UINT8_MAX;
	int8_t x2400 = 7;

	t73 = (((x2397<=x2398)&x2399)<<x2400);

	if (t73 != 128) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x2425 = INT8_MIN;
	volatile uint32_t x2426 = UINT32_MAX;
	uint64_t x2427 = UINT64_MAX;
	uint64_t t74 = 96816042164LLU;

	t74 = (((x2425<=x2426)&x2427)<<x2428);

	if (t74 != 2048LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x2449 = 3690902487LLU;
	volatile int32_t x2450 = INT32_MIN;
	int32_t x2451 = -381;
	int8_t x2452 = 1;
	static int32_t t75 = -46;

	t75 = (((x2449<=x2450)&x2451)<<x2452);

	if (t75 != 2) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x2465 = -1;
	int32_t x2466 = INT32_MAX;
	int64_t x2467 = INT64_MIN;
	static uint8_t x2468 = 42U;
	volatile int64_t t76 = -9LL;

	t76 = (((x2465<=x2466)&x2467)<<x2468);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x2477 = INT16_MIN;
	static int8_t x2478 = -1;
	int16_t x2479 = INT16_MIN;
	int16_t x2480 = 13;

	t77 = (((x2477<=x2478)&x2479)<<x2480);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x2481 = 2763587408768LLU;
	uint32_t x2482 = 49U;
	int16_t x2483 = INT16_MAX;
	uint8_t x2484 = 3U;
	volatile int32_t t78 = -48582;

	t78 = (((x2481<=x2482)&x2483)<<x2484);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x2505 = 82806596790LLU;
	uint16_t x2506 = 0U;
	int32_t x2507 = INT32_MIN;
	int8_t x2508 = 0;
	volatile int32_t t79 = 0;

	t79 = (((x2505<=x2506)&x2507)<<x2508);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x2533 = INT64_MIN;
	int64_t x2534 = INT64_MIN;
	volatile int32_t t80 = -6417;

	t80 = (((x2533<=x2534)&x2535)<<x2536);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x2537 = -1;
	uint16_t x2539 = 4034U;
	int8_t x2540 = 0;
	int32_t t81 = 1;

	t81 = (((x2537<=x2538)&x2539)<<x2540);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x2542 = 11U;
	int16_t x2543 = INT16_MIN;
	volatile uint16_t x2544 = 29U;
	volatile int32_t t82 = 145998030;

	t82 = (((x2541<=x2542)&x2543)<<x2544);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x2549 = 1U;
	volatile uint16_t x2550 = UINT16_MAX;
	int16_t x2551 = INT16_MIN;
	int32_t t83 = 2161;

	t83 = (((x2549<=x2550)&x2551)<<x2552);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x2585 = 158;
	int64_t t84 = 106LL;

	t84 = (((x2585<=x2586)&x2587)<<x2588);

	if (t84 != 256LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x2753 = UINT64_MAX;
	volatile uint32_t x2754 = UINT32_MAX;
	uint16_t x2755 = UINT16_MAX;
	uint8_t x2756 = 14U;
	volatile int32_t t85 = -12555;

	t85 = (((x2753<=x2754)&x2755)<<x2756);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x2757 = 8655;
	int16_t x2758 = INT16_MIN;
	int8_t x2759 = INT8_MIN;
	volatile int32_t t86 = 3;

	t86 = (((x2757<=x2758)&x2759)<<x2760);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x2777 = -601228669;
	int8_t x2779 = -1;
	uint8_t x2780 = 1U;
	int32_t t87 = -4173050;

	t87 = (((x2777<=x2778)&x2779)<<x2780);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x2801 = -1;
	uint32_t x2802 = UINT32_MAX;
	uint16_t x2804 = 3U;
	int32_t t88 = 631;

	t88 = (((x2801<=x2802)&x2803)<<x2804);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x2826 = 347390014302395LLU;
	static uint8_t x2828 = 1U;
	static int32_t t89 = -387418;

	t89 = (((x2825<=x2826)&x2827)<<x2828);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x2838 = 18U;
	uint8_t x2840 = 0U;
	int32_t t90 = -1;

	t90 = (((x2837<=x2838)&x2839)<<x2840);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x2841 = -1;
	int64_t x2843 = 4030LL;
	volatile int16_t x2844 = 43;
	volatile int64_t t91 = 1LL;

	t91 = (((x2841<=x2842)&x2843)<<x2844);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x2909 = 7667271;
	int8_t x2910 = INT8_MAX;
	int8_t x2912 = 5;
	static volatile int32_t t92 = -680812966;

	t92 = (((x2909<=x2910)&x2911)<<x2912);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x2945 = 3677425634710955LL;
	uint64_t x2946 = 367LLU;
	int32_t x2947 = INT32_MAX;
	int8_t x2948 = 1;
	int32_t t93 = 5770458;

	t93 = (((x2945<=x2946)&x2947)<<x2948);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x2957 = INT32_MIN;
	int16_t x2958 = -1;
	int32_t x2959 = 16476;
	static volatile int8_t x2960 = 1;
	volatile int32_t t94 = -53000084;

	t94 = (((x2957<=x2958)&x2959)<<x2960);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x2969 = 3U;
	int64_t x2970 = -76189LL;
	int64_t x2971 = INT64_MAX;
	int64_t t95 = -95639545253524LL;

	t95 = (((x2969<=x2970)&x2971)<<x2972);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x2981 = 0U;
	volatile uint64_t x2982 = 34125956774LLU;
	int16_t x2983 = -1201;
	int32_t t96 = 17802607;

	t96 = (((x2981<=x2982)&x2983)<<x2984);

	if (t96 != 128) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x3037 = 16;
	volatile int8_t x3039 = 47;

	t97 = (((x3037<=x3038)&x3039)<<x3040);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x3053 = 13LLU;
	int8_t x3054 = INT8_MIN;
	int16_t x3055 = -869;
	static uint8_t x3056 = 11U;
	int32_t t98 = 63955466;

	t98 = (((x3053<=x3054)&x3055)<<x3056);

	if (t98 != 2048) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x3082 = INT32_MAX;
	volatile int32_t t99 = 167683548;

	t99 = (((x3081<=x3082)&x3083)<<x3084);

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


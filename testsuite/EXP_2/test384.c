
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

uint16_t x125 = 13U;
uint16_t x150 = UINT16_MAX;
static volatile int32_t x242 = -1;
int16_t x409 = -1;
volatile uint8_t x412 = 1U;
uint32_t x462 = 0U;
int16_t x463 = INT16_MAX;
volatile uint64_t x473 = 16089241651422150LLU;
int32_t x475 = INT32_MIN;
int8_t x476 = 1;
uint8_t x536 = 13U;
volatile int64_t x598 = -3727941LL;
uint16_t x599 = 2U;
static uint64_t x611 = 58LLU;
volatile uint64_t t10 = 7LLU;
int8_t x694 = -31;
uint16_t x696 = 1U;
static uint64_t x705 = 57LLU;
volatile int32_t x766 = -172763;
volatile uint64_t x925 = 0LLU;
uint64_t x926 = 14940134657LLU;
uint64_t t14 = 1776LLU;
uint8_t x1024 = 4U;
uint64_t t15 = 6197656513957511124LLU;
uint64_t x1148 = 0LLU;
uint64_t x1185 = 2LLU;
int64_t x1187 = INT64_MIN;
uint64_t t21 = 65LLU;
static volatile int8_t x1406 = -37;
volatile int8_t x1408 = 2;
int32_t x1581 = -1;
int8_t x1609 = INT8_MIN;
int8_t x1612 = 0;
volatile uint32_t x1841 = 4U;
int64_t x1915 = 10606859354595LL;
volatile int8_t x1968 = 8;
uint16_t x1980 = 1U;
uint64_t x2126 = UINT64_MAX;
int16_t x2127 = -1;
static uint32_t x2171 = 87U;
uint8_t x2172 = 22U;
int8_t x2185 = INT8_MIN;
int8_t x2255 = -1;
uint16_t x2506 = 4666U;
volatile uint64_t t45 = 155011050412LLU;
static int64_t x2674 = INT64_MIN;
int8_t x2889 = -1;
uint64_t x2890 = 95LLU;
int8_t x2892 = 0;
uint64_t t50 = 10341971478687439LLU;
volatile int8_t x2991 = INT8_MAX;
uint32_t t52 = 1329050U;
static uint16_t x3023 = UINT16_MAX;
int8_t x3250 = INT8_MAX;
uint32_t x3251 = 120178U;
static int32_t x3445 = INT32_MIN;
volatile uint8_t x3456 = 5U;
static int16_t x3526 = 0;
int16_t x3527 = INT16_MIN;
static int16_t x3550 = 0;
volatile uint32_t x3551 = 146U;
static int32_t t66 = -115987;
uint64_t x3619 = 41938608218976LLU;
int32_t t68 = -2;
uint8_t x3814 = 92U;
static volatile int32_t t70 = -41403;
volatile uint32_t t72 = 1192845U;
int8_t x3925 = INT8_MIN;
uint32_t t73 = 926710456U;
static volatile int32_t x4005 = 356;
static uint32_t x4006 = 50142U;
volatile int64_t t75 = -42020282LL;
volatile int8_t x4032 = 13;
volatile int64_t t77 = 45LL;
uint32_t x4261 = 315916U;
uint32_t x4262 = 1259U;
volatile uint8_t x4280 = 1U;
volatile uint32_t t81 = 3803744U;
volatile uint64_t t82 = 1539961443LLU;
static int8_t x4399 = 1;
uint32_t x4500 = 9U;
volatile int64_t t89 = -2346700132865LL;
volatile uint64_t x4533 = 3534316LLU;
int16_t x4542 = -331;
static int16_t x4543 = INT16_MIN;
int16_t x4559 = -1;
volatile int64_t t92 = 251621528291LL;
uint64_t x4566 = UINT64_MAX;
int64_t x4568 = 1LL;
volatile uint64_t t93 = 107514302182621LLU;
int8_t x4573 = 1;
int64_t x4575 = -132672906922LL;
static volatile int32_t t98 = -4918692;
int8_t x4901 = 8;
volatile int32_t x4902 = -1;
uint32_t t101 = 2631638U;
volatile uint64_t x5045 = 929030907522LLU;
int32_t x5046 = INT32_MIN;
int32_t x5048 = 4;
int16_t x5057 = -1;
int8_t x5105 = -9;
volatile uint64_t t106 = 5829926LLU;
int16_t x5181 = -38;
int16_t x5183 = INT16_MAX;
int8_t x5184 = 0;
static volatile int64_t t108 = -536987361878323951LL;
static int32_t x5363 = -1;
uint16_t x5454 = UINT16_MAX;
static int16_t x5685 = INT16_MIN;
uint8_t x5706 = UINT8_MAX;
volatile uint64_t t115 = 4666LLU;
volatile uint8_t x5853 = 1U;
uint64_t x5861 = 535124LLU;
uint32_t x5863 = UINT32_MAX;
volatile uint8_t x5937 = UINT8_MAX;
int64_t x5978 = 454LL;
static uint16_t x5979 = UINT16_MAX;
uint64_t x5985 = 1LLU;
uint16_t x5986 = 26U;
int32_t x5987 = -1;
uint16_t x5988 = 36U;
uint64_t t121 = 16412002507LLU;
uint16_t x6012 = 4U;
int32_t x6045 = -10277;
static uint16_t x6048 = 10U;
int32_t t123 = -1069170;
static uint32_t x6089 = 22U;
int32_t x6091 = -1;
int8_t x6179 = INT8_MAX;
volatile uint32_t t128 = 1385703U;
int32_t x6201 = -1;
static int8_t x6204 = 1;
int64_t x6214 = -103103731137152LL;
volatile uint64_t t130 = 3293872LLU;
uint64_t x6331 = 407489481968LLU;
uint32_t x6343 = 18U;
uint16_t x6344 = 1U;
int8_t x6362 = -12;
int16_t x6375 = 1;
int8_t x6378 = INT8_MAX;
uint32_t x6493 = 3U;
static int16_t x6495 = -4;
volatile int8_t x6718 = 2;
int16_t x6719 = INT16_MAX;
volatile uint32_t x6737 = 126458U;
volatile uint32_t t142 = 0U;
volatile uint16_t x6811 = 926U;
static int32_t x6854 = INT32_MIN;
uint8_t x6856 = 33U;
static int64_t x6870 = -1LL;
static int8_t x6942 = -1;
volatile int64_t t147 = -258513LL;
volatile uint64_t t149 = 472820276319LLU;
int8_t x7232 = 1;
int16_t x7307 = -1;
uint64_t x7322 = 25676477LLU;
static volatile uint16_t x7346 = UINT16_MAX;
volatile int32_t x7363 = -99;
volatile int16_t x7364 = 4;
volatile int32_t t159 = -104825;
int16_t x7538 = INT16_MIN;
int8_t x7539 = -1;
int8_t x7578 = INT8_MIN;
static volatile int8_t x7579 = -1;
int32_t x7580 = 1;
int32_t x7641 = INT32_MIN;
uint64_t x7643 = UINT64_MAX;
uint64_t t166 = 182523531969212045LLU;
static int16_t x7770 = INT16_MAX;
uint32_t x7772 = 14U;
uint32_t x7838 = 111U;
int8_t x7851 = INT8_MAX;
volatile uint64_t t169 = 2LLU;
uint64_t x7871 = 676287140532269LLU;
volatile uint64_t t170 = 13165267488LLU;
volatile int32_t t171 = 24178167;
volatile int64_t t172 = 15082944833571LL;
uint32_t x7959 = 431U;
int8_t x8021 = INT8_MIN;
static int16_t x8023 = INT16_MIN;
static volatile uint32_t t174 = 1457065U;
volatile int32_t x8061 = INT32_MIN;
uint32_t t179 = 1624U;
static int8_t x8173 = 2;
uint8_t x8176 = 1U;
volatile int16_t x8201 = INT16_MIN;
int8_t x8204 = 1;
uint32_t t183 = 3419986U;
volatile int16_t x8251 = INT16_MAX;
volatile int32_t t184 = 1154164;
static int32_t x8290 = -1;
static uint64_t x8291 = 1731385542789LLU;
uint8_t x8374 = 118U;
static volatile uint16_t x8456 = 6U;
uint64_t x8472 = 1LLU;
volatile int32_t t192 = -107;
volatile int32_t x8553 = INT32_MIN;
static int8_t x8555 = INT8_MAX;
int64_t x8609 = -1LL;
int8_t x8613 = INT8_MIN;
int16_t x8638 = -15;
int64_t x8648 = 14LL;
volatile int8_t x8689 = -3;
static int8_t x8692 = 17;
static uint64_t t199 = 26772966871862LLU;


void f0(void) {
    	int32_t x126 = INT32_MIN;
	int32_t x127 = INT32_MIN;
	uint64_t x128 = 15LLU;
	int32_t t0 = 1;

    t0 = ((x125^(x126-x127))<<x128);

    if (t0 != 425984) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint64_t x149 = 1090702LLU;
	int32_t x151 = -30;
	uint8_t x152 = 26U;
	uint64_t t1 = 132772LLU;

    t1 = ((x149^(x150-x151))<<x152);

    if (t1 != 77594154237952LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int8_t x241 = 59;
	int64_t x243 = -272386305325194114LL;
	uint8_t x244 = 2U;
	static int64_t t2 = 2626581818883LL;

    t2 = ((x241^(x242-x243))<<x244);

    if (t2 != 1089545221300776680LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x253 = INT8_MIN;
	uint32_t x254 = 208149U;
	volatile int8_t x255 = 0;
	static int8_t x256 = 13;
	volatile uint32_t t3 = 90U;

    t3 = ((x253^(x254-x255))<<x256);

    if (t3 != 2589106176U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x373 = 56738LLU;
	int8_t x374 = INT8_MAX;
	static uint64_t x375 = 223930206635LLU;
	uint8_t x376 = 8U;
	volatile uint64_t t4 = 15284143419183107LLU;

    t4 = ((x373^(x374-x375))<<x376);

    if (t4 != 18446686747588523520LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x410 = 0;
	static uint8_t x411 = 10U;
	int32_t t5 = -138377410;

    t5 = ((x409^(x410-x411))<<x412);

    if (t5 != 18) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x461 = -1;
	int32_t x464 = 22;
	volatile uint32_t t6 = 285U;

    t6 = ((x461^(x462-x463))<<x464);

    if (t6 != 4286578688U) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x474 = -1;
	volatile uint64_t t7 = 6752LLU;

    t7 = ((x473^(x474-x475))<<x476);

    if (t7 != 32178479186491506LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x533 = 21U;
	uint64_t x534 = 751LLU;
	int64_t x535 = INT64_MAX;
	uint64_t t8 = 55611010LLU;

    t8 = ((x533^(x534-x535))<<x536);

    if (t8 != 6070272LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x597 = INT64_MIN;
	static int16_t x600 = 0;
	volatile int64_t t9 = 255LL;

    t9 = ((x597^(x598-x599))<<x600);

    if (t9 != 9223372036851047865LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x609 = 434U;
	int64_t x610 = -28947LL;
	static uint32_t x612 = 23U;

    t10 = ((x609^(x610-x611))<<x612);

    if (t10 != 18446743831052288000LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x693 = -1LL;
	int64_t x695 = 53617LL;
	static volatile int64_t t11 = 8415923LL;

    t11 = ((x693^(x694-x695))<<x696);

    if (t11 != 107294LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x706 = -144707414406652LL;
	int64_t x707 = -1LL;
	static volatile uint8_t x708 = 4U;
	uint64_t t12 = 7393895298639LLU;

    t12 = ((x705^(x706-x707))<<x708);

    if (t12 != 18444428755079046080LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x765 = INT8_MIN;
	int8_t x767 = -1;
	static uint16_t x768 = 2U;
	volatile int32_t t13 = -777267109;

    t13 = ((x765^(x766-x767))<<x768);

    if (t13 != 690840) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x927 = INT32_MIN;
	int8_t x928 = 0;

    t14 = ((x925^(x926-x927))<<x928);

    if (t14 != 17087618305LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x1021 = -1;
	static volatile int16_t x1022 = -1;
	static uint64_t x1023 = 2968171463012LLU;

    t15 = ((x1021^(x1022-x1023))<<x1024);

    if (t15 != 47490743408192LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x1025 = -1;
	static volatile uint64_t x1026 = 128130LLU;
	uint8_t x1027 = 4U;
	uint8_t x1028 = 2U;
	volatile uint64_t t16 = 87220200LLU;

    t16 = ((x1025^(x1026-x1027))<<x1028);

    if (t16 != 18446744073709039108LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile uint32_t x1065 = UINT32_MAX;
	uint16_t x1066 = 44U;
	int8_t x1067 = INT8_MIN;
	volatile int8_t x1068 = 17;
	volatile uint32_t t17 = 76693U;

    t17 = ((x1065^(x1066-x1067))<<x1068);

    if (t17 != 4272291840U) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x1101 = 1;
	int8_t x1102 = -1;
	volatile uint64_t x1103 = 44224026LLU;
	volatile uint16_t x1104 = 0U;
	static uint64_t t18 = 963663LLU;

    t18 = ((x1101^(x1102-x1103))<<x1104);

    if (t18 != 18446744073665327588LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x1133 = 3U;
	static int32_t x1134 = 874939;
	int32_t x1135 = -1;
	int8_t x1136 = 6;
	static volatile int32_t t19 = -3652;

    t19 = ((x1133^(x1134-x1135))<<x1136);

    if (t19 != 55996352) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x1145 = INT32_MAX;
	int64_t x1146 = INT64_MAX;
	static int64_t x1147 = 4679LL;
	int64_t t20 = 71164681LL;

    t20 = ((x1145^(x1146-x1147))<<x1148);

    if (t20 != 9223372034707296839LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x1186 = INT8_MIN;
	uint8_t x1188 = 58U;

    t21 = ((x1185^(x1186-x1187))<<x1188);

    if (t21 != 576460752303423488LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x1225 = 3;
	static uint64_t x1226 = UINT64_MAX;
	int32_t x1227 = INT32_MAX;
	volatile uint16_t x1228 = 1U;
	volatile uint64_t t22 = 3348710299650237LLU;

    t22 = ((x1225^(x1226-x1227))<<x1228);

    if (t22 != 18446744069414584326LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint64_t x1329 = 11LLU;
	int32_t x1330 = INT32_MAX;
	uint64_t x1331 = 45351302767LLU;
	static int8_t x1332 = 1;
	uint64_t t23 = 7808800LLU;

    t23 = ((x1329^(x1330-x1331))<<x1332);

    if (t23 != 18446743987301913398LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x1405 = UINT64_MAX;
	static int32_t x1407 = 32753;
	uint64_t t24 = 36707139843LLU;

    t24 = ((x1405^(x1406-x1407))<<x1408);

    if (t24 != 131156LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint32_t x1441 = UINT32_MAX;
	int16_t x1442 = INT16_MIN;
	int8_t x1443 = INT8_MAX;
	uint8_t x1444 = 0U;
	volatile uint32_t t25 = 657972U;

    t25 = ((x1441^(x1442-x1443))<<x1444);

    if (t25 != 32894U) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x1582 = 403U;
	int8_t x1583 = -1;
	uint16_t x1584 = 9U;
	volatile uint32_t t26 = 1518U;

    t26 = ((x1581^(x1582-x1583))<<x1584);

    if (t26 != 4294759936U) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x1610 = 221861619571627LLU;
	int32_t x1611 = -1;
	volatile uint64_t t27 = 40080817956654952LLU;

    t27 = ((x1609^(x1610-x1611))<<x1612);

    if (t27 != 18446522212089979948LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x1641 = 78U;
	uint64_t x1642 = UINT64_MAX;
	uint32_t x1643 = UINT32_MAX;
	int8_t x1644 = 1;
	uint64_t t28 = 246LLU;

    t28 = ((x1641^(x1642-x1643))<<x1644);

    if (t28 != 18446744065119617180LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x1661 = INT32_MIN;
	uint64_t x1662 = 156135692LLU;
	int8_t x1663 = -1;
	int16_t x1664 = 7;
	uint64_t t29 = 11422371LLU;

    t29 = ((x1661^(x1662-x1663))<<x1664);

    if (t29 != 18446743818817013376LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x1685 = 23U;
	uint64_t x1686 = UINT64_MAX;
	int8_t x1687 = -35;
	static uint32_t x1688 = 32U;
	uint64_t t30 = 108578LLU;

    t30 = ((x1685^(x1686-x1687))<<x1688);

    if (t30 != 227633266688LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x1829 = 388U;
	int32_t x1830 = 1;
	uint32_t x1831 = UINT32_MAX;
	static uint16_t x1832 = 20U;
	uint32_t t31 = 7973027U;

    t31 = ((x1829^(x1830-x1831))<<x1832);

    if (t31 != 408944640U) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x1842 = 140;
	int32_t x1843 = -1;
	uint16_t x1844 = 6U;
	volatile uint32_t t32 = 66281U;

    t32 = ((x1841^(x1842-x1843))<<x1844);

    if (t32 != 8768U) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x1913 = INT8_MIN;
	uint32_t x1914 = UINT32_MAX;
	int64_t x1916 = 11LL;
	volatile int64_t t33 = 164348389989LL;

    t33 = ((x1913^(x1914-x1915))<<x1916);

    if (t33 != 21714051865042944LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int32_t x1965 = INT32_MAX;
	static uint8_t x1966 = UINT8_MAX;
	static uint64_t x1967 = UINT64_MAX;
	uint64_t t34 = 300620884243389LLU;

    t34 = ((x1965^(x1966-x1967))<<x1968);

    if (t34 != 549755748096LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x1977 = -3381;
	int8_t x1978 = INT8_MIN;
	int8_t x1979 = -1;
	int32_t t35 = -5122;

    t35 = ((x1977^(x1978-x1979))<<x1980);

    if (t35 != 6804) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x2093 = -1;
	int32_t x2094 = 18671;
	uint32_t x2095 = UINT32_MAX;
	uint8_t x2096 = 1U;
	uint32_t t36 = 16U;

    t36 = ((x2093^(x2094-x2095))<<x2096);

    if (t36 != 4294929950U) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x2125 = -1;
	static uint16_t x2128 = 57U;
	volatile uint64_t t37 = 5LLU;

    t37 = ((x2125^(x2126-x2127))<<x2128);

    if (t37 != 18302628885633695744LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x2133 = 14306208LLU;
	static int16_t x2134 = -1;
	int16_t x2135 = INT16_MAX;
	uint64_t x2136 = 3LLU;
	volatile uint64_t t38 = 7LLU;

    t38 = ((x2133^(x2134-x2135))<<x2136);

    if (t38 != 18446744073595149568LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int32_t x2169 = INT32_MIN;
	uint16_t x2170 = UINT16_MAX;
	uint32_t t39 = 133876129U;

    t39 = ((x2169^(x2170-x2171))<<x2172);

    if (t39 != 3925868544U) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x2186 = 13296201LL;
	uint64_t x2187 = UINT64_MAX;
	volatile uint16_t x2188 = 43U;
	uint64_t t40 = 8LLU;

    t40 = ((x2185^(x2186-x2187))<<x2188);

    if (t40 != 12172754803759251456LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x2229 = -1;
	int64_t x2230 = -619LL;
	uint32_t x2231 = 121U;
	uint8_t x2232 = 2U;
	int64_t t41 = -247212LL;

    t41 = ((x2229^(x2230-x2231))<<x2232);

    if (t41 != 2956LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint32_t x2253 = 47U;
	uint32_t x2254 = UINT32_MAX;
	uint16_t x2256 = 23U;
	uint32_t t42 = 64726145U;

    t42 = ((x2253^(x2254-x2255))<<x2256);

    if (t42 != 394264576U) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x2321 = INT64_MIN;
	uint64_t x2322 = 792012490187988LLU;
	uint8_t x2323 = 4U;
	uint16_t x2324 = 0U;
	uint64_t t43 = 2356896761573961LLU;

    t43 = ((x2321^(x2322-x2323))<<x2324);

    if (t43 != 9224164049344963792LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint8_t x2505 = 0U;
	static volatile int32_t x2507 = 0;
	static uint8_t x2508 = 7U;
	int32_t t44 = -13761;

    t44 = ((x2505^(x2506-x2507))<<x2508);

    if (t44 != 597248) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x2585 = 29LLU;
	int8_t x2586 = 19;
	static int16_t x2587 = INT16_MIN;
	uint8_t x2588 = 4U;

    t45 = ((x2585^(x2586-x2587))<<x2588);

    if (t45 != 524512LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x2625 = INT16_MAX;
	int32_t x2626 = -1;
	uint64_t x2627 = UINT64_MAX;
	static volatile uint32_t x2628 = 1U;
	static volatile uint64_t t46 = 0LLU;

    t46 = ((x2625^(x2626-x2627))<<x2628);

    if (t46 != 65534LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x2673 = INT64_MIN;
	static uint64_t x2675 = 7936509LLU;
	uint8_t x2676 = 7U;
	volatile uint64_t t47 = 67953LLU;

    t47 = ((x2673^(x2674-x2675))<<x2676);

    if (t47 != 18446744072693678464LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x2733 = INT16_MIN;
	int16_t x2734 = INT16_MIN;
	volatile int8_t x2735 = -1;
	int16_t x2736 = 4;
	int32_t t48 = 40404489;

    t48 = ((x2733^(x2734-x2735))<<x2736);

    if (t48 != 16) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint32_t x2861 = 5337U;
	int64_t x2862 = INT64_MAX;
	int16_t x2863 = INT16_MAX;
	uint8_t x2864 = 0U;
	int64_t t49 = 6638211LL;

    t49 = ((x2861^(x2862-x2863))<<x2864);

    if (t49 != 9223372036854748377LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x2891 = UINT32_MAX;

    t50 = ((x2889^(x2890-x2891))<<x2892);

    if (t50 != 4294967199LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile uint8_t x2949 = 0U;
	int8_t x2950 = 3;
	uint8_t x2951 = 3U;
	uint8_t x2952 = 1U;
	volatile int32_t t51 = 0;

    t51 = ((x2949^(x2950-x2951))<<x2952);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x2989 = 20U;
	int8_t x2990 = INT8_MIN;
	volatile int32_t x2992 = 11;

    t52 = ((x2989^(x2990-x2991))<<x2992);

    if (t52 != 4294486016U) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x3021 = -1;
	int8_t x3022 = INT8_MIN;
	uint8_t x3024 = 7U;
	int32_t t53 = -8;

    t53 = ((x3021^(x3022-x3023))<<x3024);

    if (t53 != 8404736) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x3089 = 1178;
	uint32_t x3090 = 787U;
	uint64_t x3091 = 1341165LLU;
	uint64_t x3092 = 3LLU;
	uint64_t t54 = 9574923031LLU;

    t54 = ((x3089^(x3090-x3091))<<x3092);

    if (t54 != 18446744073698821600LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint64_t x3177 = 3280034759LLU;
	int16_t x3178 = -1;
	int16_t x3179 = 1;
	static uint16_t x3180 = 10U;
	static uint64_t t55 = 253417333572164LLU;

    t55 = ((x3177^(x3178-x3179))<<x3180);

    if (t55 != 18446740714953958400LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint32_t x3245 = 856587767U;
	static volatile int32_t x3246 = -1;
	int8_t x3247 = -4;
	int8_t x3248 = 0;
	uint32_t t56 = 1353701397U;

    t56 = ((x3245^(x3246-x3247))<<x3248);

    if (t56 != 856587764U) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x3249 = INT16_MAX;
	static int8_t x3252 = 0;
	static uint32_t t57 = 1497U;

    t57 = ((x3249^(x3250-x3251))<<x3252);

    if (t57 != 4294857970U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x3269 = 0U;
	volatile int32_t x3270 = -155527883;
	int16_t x3271 = INT16_MAX;
	uint16_t x3272 = 0U;
	volatile uint32_t t58 = 437561705U;

    t58 = ((x3269^(x3270-x3271))<<x3272);

    if (t58 != 4139406646U) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile uint8_t x3281 = 2U;
	int16_t x3282 = 1;
	uint32_t x3283 = UINT32_MAX;
	int64_t x3284 = 12LL;
	volatile uint32_t t59 = 29U;

    t59 = ((x3281^(x3282-x3283))<<x3284);

    if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x3446 = 2201749832502LLU;
	static int16_t x3447 = INT16_MIN;
	int16_t x3448 = 5;
	volatile uint64_t t60 = 266793952405741586LLU;

    t60 = ((x3445^(x3446-x3447))<<x3448);

    if (t60 != 18446673586058454720LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x3453 = 1;
	uint64_t x3454 = UINT64_MAX;
	int32_t x3455 = INT32_MAX;
	uint64_t t61 = 11215317350248LLU;

    t61 = ((x3453^(x3454-x3455))<<x3456);

    if (t61 != 18446744004990074912LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x3505 = UINT64_MAX;
	static int32_t x3506 = INT32_MIN;
	volatile int16_t x3507 = 0;
	uint32_t x3508 = 43U;
	volatile uint64_t t62 = 90791873LLU;

    t62 = ((x3505^(x3506-x3507))<<x3508);

    if (t62 != 18446735277616529408LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x3513 = UINT64_MAX;
	int16_t x3514 = 26;
	uint8_t x3515 = 12U;
	volatile int8_t x3516 = 11;
	volatile uint64_t t63 = 2319511213914424252LLU;

    t63 = ((x3513^(x3514-x3515))<<x3516);

    if (t63 != 18446744073709520896LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x3525 = 1942;
	static uint8_t x3528 = 1U;
	static int32_t t64 = 0;

    t64 = ((x3525^(x3526-x3527))<<x3528);

    if (t64 != 69420) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x3549 = -2;
	uint8_t x3552 = 2U;
	volatile uint32_t t65 = 2713664U;

    t65 = ((x3549^(x3550-x3551))<<x3552);

    if (t65 != 576U) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint8_t x3589 = 51U;
	static int16_t x3590 = -1;
	int32_t x3591 = -1;
	static uint16_t x3592 = 5U;

    t66 = ((x3589^(x3590-x3591))<<x3592);

    if (t66 != 1632) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x3617 = INT32_MAX;
	int16_t x3618 = -1;
	int8_t x3620 = 1;
	uint64_t t67 = 2002392035LLU;

    t67 = ((x3617^(x3618-x3619))<<x3620);

    if (t67 != 18446660193798375104LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x3649 = -1;
	static volatile int16_t x3650 = 0;
	volatile uint8_t x3651 = 2U;
	uint8_t x3652 = 0U;

    t68 = ((x3649^(x3650-x3651))<<x3652);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x3709 = INT32_MAX;
	volatile int16_t x3710 = -1;
	int64_t x3711 = INT64_MIN;
	int32_t x3712 = 0;
	volatile int64_t t69 = -253720220171259106LL;

    t69 = ((x3709^(x3710-x3711))<<x3712);

    if (t69 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x3813 = INT8_MAX;
	static int16_t x3815 = -1;
	int8_t x3816 = 1;

    t70 = ((x3813^(x3814-x3815))<<x3816);

    if (t70 != 68) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x3869 = INT32_MIN;
	uint32_t x3870 = 4272U;
	static int64_t x3871 = 18066LL;
	static uint8_t x3872 = 5U;
	volatile int64_t t71 = 2069LL;

    t71 = ((x3869^(x3870-x3871))<<x3872);

    if (t71 != 68719035328LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x3909 = 447U;
	uint32_t x3910 = 1520U;
	int8_t x3911 = INT8_MAX;
	uint32_t x3912 = 11U;

    t72 = ((x3909^(x3910-x3911))<<x3912);

    if (t72 != 2519040U) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x3926 = 745U;
	static int8_t x3927 = -21;
	int8_t x3928 = 14;

    t73 = ((x3925^(x3926-x3927))<<x3928);

    if (t73 != 4284448768U) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x3973 = INT8_MAX;
	static volatile uint16_t x3974 = 22756U;
	int8_t x3975 = INT8_MIN;
	int8_t x3976 = 0;
	volatile int32_t t74 = -5;

    t74 = ((x3973^(x3974-x3975))<<x3976);

    if (t74 != 22811) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int64_t x4007 = -1LL;
	uint32_t x4008 = 0U;

    t75 = ((x4005^(x4006-x4007))<<x4008);

    if (t75 != 49851LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x4029 = UINT64_MAX;
	static volatile uint64_t x4030 = 153777945LLU;
	volatile int64_t x4031 = INT64_MIN;
	volatile uint64_t t76 = 13899748LLU;

    t76 = ((x4029^(x4030-x4031))<<x4032);

    if (t76 != 18446742813960617984LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x4109 = -1LL;
	uint8_t x4110 = 2U;
	int32_t x4111 = 60;
	int16_t x4112 = 48;

    t77 = ((x4109^(x4110-x4111))<<x4112);

    if (t77 != 16044073672507392LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x4173 = 15163U;
	int64_t x4174 = -1LL;
	static int16_t x4175 = -1;
	int64_t x4176 = 1LL;
	int64_t t78 = -7299042943895534LL;

    t78 = ((x4173^(x4174-x4175))<<x4176);

    if (t78 != 30326LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x4197 = UINT64_MAX;
	uint16_t x4198 = 6941U;
	volatile uint32_t x4199 = 254U;
	static int8_t x4200 = 4;
	uint64_t t79 = 47172LLU;

    t79 = ((x4197^(x4198-x4199))<<x4200);

    if (t79 != 18446744073709444608LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x4263 = 265LL;
	volatile uint8_t x4264 = 2U;
	static int64_t t80 = -422LL;

    t80 = ((x4261^(x4262-x4263))<<x4264);

    if (t80 != 1263544LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x4277 = INT32_MIN;
	static volatile uint8_t x4278 = 15U;
	uint32_t x4279 = 1936U;

    t81 = ((x4277^(x4278-x4279))<<x4280);

    if (t81 != 4294963454U) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x4321 = 1535775272163991LL;
	static int32_t x4322 = -308;
	uint64_t x4323 = 6430469897LLU;
	static uint64_t x4324 = 0LLU;

    t82 = ((x4321^(x4322-x4323))<<x4324);

    if (t82 != 18445208300967138644LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x4349 = INT16_MIN;
	volatile int8_t x4350 = -13;
	uint8_t x4351 = UINT8_MAX;
	uint8_t x4352 = 2U;
	int32_t t83 = -43;

    t83 = ((x4349^(x4350-x4351))<<x4352);

    if (t83 != 130000) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x4397 = 142478496758LLU;
	static int16_t x4398 = -1;
	uint16_t x4400 = 16U;
	volatile uint64_t t84 = 1LLU;

    t84 = ((x4397^(x4398-x4399))<<x4400);

    if (t84 != 18437406602945888256LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x4417 = -54563196149322737LL;
	static int64_t x4418 = INT64_MAX;
	static uint64_t x4419 = 3288610138865734272LLU;
	uint8_t x4420 = 0U;
	volatile uint64_t t85 = 381836206875144983LLU;

    t85 = ((x4417^(x4418-x4419))<<x4420);

    if (t85 != 12493730351213789552LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint8_t x4437 = 20U;
	uint64_t x4438 = 2055428116025633LLU;
	uint64_t x4439 = 7061243576750LLU;
	uint8_t x4440 = 0U;
	volatile uint64_t t86 = 38315LLU;

    t86 = ((x4437^(x4438-x4439))<<x4440);

    if (t86 != 2048366872448871LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x4445 = -1;
	int16_t x4446 = -1;
	int32_t x4447 = 241;
	int8_t x4448 = 4;
	int32_t t87 = 36480;

    t87 = ((x4445^(x4446-x4447))<<x4448);

    if (t87 != 3856) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int32_t x4497 = 76540789;
	int8_t x4498 = INT8_MAX;
	uint64_t x4499 = 18LLU;
	static volatile uint64_t t88 = 23676LLU;

    t88 = ((x4497^(x4498-x4499))<<x4500);

    if (t88 != 39188836352LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint8_t x4505 = UINT8_MAX;
	static int16_t x4506 = INT16_MIN;
	int64_t x4507 = INT64_MIN;
	int8_t x4508 = 0;

    t89 = ((x4505^(x4506-x4507))<<x4508);

    if (t89 != 9223372036854743295LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x4534 = 1921007129U;
	volatile uint64_t x4535 = 17726285837448618LLU;
	static int32_t x4536 = 6;
	volatile uint64_t t90 = 248503LLU;

    t90 = ((x4533^(x4534-x4535))<<x4536);

    if (t90 != 17312261902872174784LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint8_t x4541 = 10U;
	uint32_t x4544 = 1U;
	int32_t t91 = -449293134;

    t91 = ((x4541^(x4542-x4543))<<x4544);

    if (t91 != 64894) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x4557 = INT8_MAX;
	static int64_t x4558 = -1LL;
	uint16_t x4560 = 28U;

    t92 = ((x4557^(x4558-x4559))<<x4560);

    if (t92 != 34091302912LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int64_t x4565 = -694124662091798176LL;
	volatile int64_t x4567 = -1LL;

    t93 = ((x4565^(x4566-x4567))<<x4568);

    if (t93 != 17058494749525955264LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x4574 = -1470LL;
	uint16_t x4576 = 10U;
	int64_t t94 = 1106731669817310LL;

    t94 = ((x4573^(x4574-x4575))<<x4576);

    if (t94 != 135857055183872LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x4625 = -10;
	uint8_t x4626 = 0U;
	static uint8_t x4627 = 41U;
	uint8_t x4628 = 5U;
	volatile int32_t t95 = -108644556;

    t95 = ((x4625^(x4626-x4627))<<x4628);

    if (t95 != 1056) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x4677 = UINT64_MAX;
	volatile int16_t x4678 = INT16_MIN;
	int8_t x4679 = -28;
	static int16_t x4680 = 1;
	volatile uint64_t t96 = 1LLU;

    t96 = ((x4677^(x4678-x4679))<<x4680);

    if (t96 != 65478LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x4745 = 7614;
	uint8_t x4746 = 2U;
	int16_t x4747 = INT16_MIN;
	int16_t x4748 = 1;
	int32_t t97 = -15142;

    t97 = ((x4745^(x4746-x4747))<<x4748);

    if (t97 != 80760) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x4777 = -67;
	static int8_t x4778 = INT8_MIN;
	uint16_t x4779 = 4U;
	uint16_t x4780 = 9U;

    t98 = ((x4777^(x4778-x4779))<<x4780);

    if (t98 != 98816) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint8_t x4801 = 8U;
	int16_t x4802 = 0;
	uint16_t x4803 = 0U;
	uint8_t x4804 = 20U;
	int32_t t99 = -32;

    t99 = ((x4801^(x4802-x4803))<<x4804);

    if (t99 != 8388608) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x4903 = 1U;
	volatile uint8_t x4904 = 15U;
	volatile uint32_t t100 = 127213290U;

    t100 = ((x4901^(x4902-x4903))<<x4904);

    if (t100 != 4294639616U) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x4937 = -16;
	int32_t x4938 = -1;
	uint32_t x4939 = 108303774U;
	static volatile uint8_t x4940 = 3U;

    t101 = ((x4937^(x4938-x4939))<<x4940);

    if (t101 != 866430088U) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x5021 = 3531914U;
	uint16_t x5022 = UINT16_MAX;
	int16_t x5023 = 0;
	static uint8_t x5024 = 1U;
	uint32_t t102 = 1252U;

    t102 = ((x5021^(x5022-x5023))<<x5024);

    if (t102 != 6960874U) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x5047 = 397675313LL;
	uint64_t t103 = 761LLU;

    t103 = ((x5045^(x5046-x5047))<<x5048);

    if (t103 != 18446729171990553808LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x5058 = 3U;
	volatile int16_t x5059 = -110;
	int16_t x5060 = 1;
	volatile uint32_t t104 = 5418U;

    t104 = ((x5057^(x5058-x5059))<<x5060);

    if (t104 != 4294967068U) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile uint64_t x5106 = UINT64_MAX;
	static int16_t x5107 = INT16_MAX;
	volatile int8_t x5108 = 7;
	volatile uint64_t t105 = 246LLU;

    t105 = ((x5105^(x5106-x5107))<<x5108);

    if (t105 != 4193152LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int8_t x5109 = -8;
	uint64_t x5110 = 4054719LLU;
	int64_t x5111 = 2939LL;
	volatile int8_t x5112 = 21;

    t106 = ((x5109^(x5110-x5111))<<x5112);

    if (t106 != 18446735576511021056LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x5145 = UINT16_MAX;
	int32_t x5146 = -1;
	int16_t x5147 = -36;
	uint8_t x5148 = 10U;
	static int32_t t107 = 50597;

    t107 = ((x5145^(x5146-x5147))<<x5148);

    if (t107 != 67072000) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x5182 = -7LL;

    t108 = ((x5181^(x5182-x5183))<<x5184);

    if (t108 != 32800LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x5361 = 0;
	uint64_t x5362 = UINT64_MAX;
	uint16_t x5364 = 5U;
	uint64_t t109 = 119569238178775LLU;

    t109 = ((x5361^(x5362-x5363))<<x5364);

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint32_t x5453 = UINT32_MAX;
	uint16_t x5455 = UINT16_MAX;
	static int16_t x5456 = 0;
	static volatile uint32_t t110 = UINT32_MAX;

    t110 = ((x5453^(x5454-x5455))<<x5456);

    if (t110 != UINT32_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x5465 = UINT64_MAX;
	volatile int64_t x5466 = -1LL;
	uint8_t x5467 = UINT8_MAX;
	volatile uint8_t x5468 = 1U;
	volatile uint64_t t111 = 459682039007899LLU;

    t111 = ((x5465^(x5466-x5467))<<x5468);

    if (t111 != 510LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x5581 = -14;
	int8_t x5582 = 0;
	volatile int8_t x5583 = INT8_MAX;
	uint16_t x5584 = 1U;
	volatile int32_t t112 = -914459;

    t112 = ((x5581^(x5582-x5583))<<x5584);

    if (t112 != 230) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x5597 = UINT16_MAX;
	int64_t x5598 = 1707LL;
	uint64_t x5599 = 528198245787957958LLU;
	int32_t x5600 = 1;
	uint64_t t113 = 530LLU;

    t113 = ((x5597^(x5598-x5599))<<x5600);

    if (t113 != 17390347582133758004LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x5686 = INT16_MIN;
	int64_t x5687 = -1LL;
	uint32_t x5688 = 3U;
	volatile int64_t t114 = 2LL;

    t114 = ((x5685^(x5686-x5687))<<x5688);

    if (t114 != 8LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint64_t x5705 = UINT64_MAX;
	int8_t x5707 = -1;
	uint16_t x5708 = 0U;

    t115 = ((x5705^(x5706-x5707))<<x5708);

    if (t115 != 18446744073709551359LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x5854 = INT16_MAX;
	volatile int8_t x5855 = 1;
	static uint8_t x5856 = 0U;
	static int32_t t116 = 17494;

    t116 = ((x5853^(x5854-x5855))<<x5856);

    if (t116 != 32767) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x5862 = -5;
	volatile uint8_t x5864 = 4U;
	static uint64_t t117 = 283514LLU;

    t117 = ((x5861^(x5862-x5863))<<x5864);

    if (t117 != 68710914688LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x5917 = INT32_MIN;
	uint32_t x5918 = 68367956U;
	static volatile int16_t x5919 = INT16_MAX;
	static volatile uint8_t x5920 = 4U;
	volatile uint32_t t118 = 35001498U;

    t118 = ((x5917^(x5918-x5919))<<x5920);

    if (t118 != 1093363024U) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x5938 = INT64_MAX;
	static uint16_t x5939 = 411U;
	int8_t x5940 = 0;
	static volatile int64_t t119 = -2110913398442973800LL;

    t119 = ((x5937^(x5938-x5939))<<x5940);

    if (t119 != 9223372036854775451LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x5977 = INT32_MIN;
	int64_t x5980 = 0LL;
	volatile int64_t t120 = -15627LL;

    t120 = ((x5977^(x5978-x5979))<<x5980);

    if (t120 != 2147418567LL) { NG(); } else { ; }
	
}

void f121(void) {
    

    t121 = ((x5985^(x5986-x5987))<<x5988);

    if (t121 != 1786706395136LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x6009 = -1;
	volatile uint8_t x6010 = 9U;
	int8_t x6011 = 53;
	volatile int32_t t122 = -1313984;

    t122 = ((x6009^(x6010-x6011))<<x6012);

    if (t122 != 688) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x6046 = INT16_MIN;
	int8_t x6047 = INT8_MIN;

    t123 = ((x6045^(x6046-x6047))<<x6048);

    if (t123 != 22899712) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x6049 = INT32_MIN;
	volatile int64_t x6050 = -867LL;
	int8_t x6051 = -3;
	uint8_t x6052 = 1U;
	volatile int64_t t124 = -7336054120704LL;

    t124 = ((x6049^(x6050-x6051))<<x6052);

    if (t124 != 4294965568LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x6065 = INT16_MIN;
	volatile uint32_t x6066 = 263261013U;
	int16_t x6067 = INT16_MIN;
	static int32_t x6068 = 11;
	uint32_t t125 = 3635974U;

    t125 = ((x6065^(x6066-x6067))<<x6068);

    if (t125 != 1884989440U) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x6090 = 1U;
	uint64_t x6092 = 7LLU;
	volatile uint32_t t126 = 11851141U;

    t126 = ((x6089^(x6090-x6091))<<x6092);

    if (t126 != 2560U) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x6149 = -1;
	int8_t x6150 = -1;
	uint8_t x6151 = 38U;
	int8_t x6152 = 0;
	static int32_t t127 = 129333;

    t127 = ((x6149^(x6150-x6151))<<x6152);

    if (t127 != 38) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x6177 = -1;
	volatile uint32_t x6178 = 971U;
	int64_t x6180 = 0LL;

    t128 = ((x6177^(x6178-x6179))<<x6180);

    if (t128 != 4294966451U) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint32_t x6202 = UINT32_MAX;
	static int32_t x6203 = -1;
	uint32_t t129 = 9122U;

    t129 = ((x6201^(x6202-x6203))<<x6204);

    if (t129 != 4294967294U) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x6213 = 1027459373LLU;
	int16_t x6215 = -15685;
	uint8_t x6216 = 0U;

    t130 = ((x6213^(x6214-x6215))<<x6216);

    if (t130 != 18446640970729950184LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x6245 = INT64_MAX;
	uint64_t x6246 = UINT64_MAX;
	int8_t x6247 = -7;
	uint16_t x6248 = 0U;
	volatile uint64_t t131 = 6025392LLU;

    t131 = ((x6245^(x6246-x6247))<<x6248);

    if (t131 != 9223372036854775801LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x6321 = INT32_MIN;
	int64_t x6322 = -1LL;
	uint64_t x6323 = 243592LLU;
	uint16_t x6324 = 0U;
	static uint64_t t132 = 0LLU;

    t132 = ((x6321^(x6322-x6323))<<x6324);

    if (t132 != 2147240055LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x6329 = 14U;
	volatile uint32_t x6330 = UINT32_MAX;
	int16_t x6332 = 4;
	volatile uint64_t t133 = 2147729790954LLU;

    t133 = ((x6329^(x6330-x6331))<<x6332);

    if (t133 != 18446737622597316624LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x6341 = -1;
	int8_t x6342 = INT8_MIN;
	uint32_t t134 = 3U;

    t134 = ((x6341^(x6342-x6343))<<x6344);

    if (t134 != 290U) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x6361 = 930518842669165723LLU;
	int64_t x6363 = -1LL;
	int8_t x6364 = 1;
	volatile uint64_t t135 = 1942573830LLU;

    t135 = ((x6361^(x6362-x6363))<<x6364);

    if (t135 != 16585706388371220188LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x6373 = 110176;
	static int8_t x6374 = INT8_MAX;
	int16_t x6376 = 2;
	int32_t t136 = 9370341;

    t136 = ((x6373^(x6374-x6375))<<x6376);

    if (t136 != 440440) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile uint64_t x6377 = 11706858228926828LLU;
	uint64_t x6379 = 12250LLU;
	int16_t x6380 = 11;
	uint64_t t137 = 295307741928LLU;

    t137 = ((x6377^(x6378-x6379))<<x6380);

    if (t137 != 12917842494561863680LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x6437 = 231439869905737LLU;
	uint8_t x6438 = 47U;
	uint16_t x6439 = UINT16_MAX;
	volatile uint8_t x6440 = 3U;
	volatile uint64_t t138 = 1728646LLU;

    t138 = ((x6437^(x6438-x6439))<<x6440);

    if (t138 != 18444892554750352328LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x6494 = UINT8_MAX;
	int16_t x6496 = 0;
	uint32_t t139 = 3767073U;

    t139 = ((x6493^(x6494-x6495))<<x6496);

    if (t139 != 256U) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile uint64_t x6569 = 27343LLU;
	volatile uint32_t x6570 = 108780U;
	volatile uint64_t x6571 = 380LLU;
	static uint8_t x6572 = 28U;
	uint64_t t140 = 988132502LLU;

    t140 = ((x6569^(x6570-x6571))<<x6572);

    if (t140 != 31730949947392LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x6717 = -1;
	uint64_t x6720 = 3LLU;
	volatile int32_t t141 = -49292613;

    t141 = ((x6717^(x6718-x6719))<<x6720);

    if (t141 != 262112) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x6738 = -2;
	int8_t x6739 = INT8_MIN;
	static uint8_t x6740 = 25U;

    t142 = ((x6737^(x6738-x6739))<<x6740);

    if (t142 != 134217728U) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x6785 = 4U;
	volatile uint8_t x6786 = 1U;
	static int8_t x6787 = -1;
	volatile uint8_t x6788 = 1U;
	volatile int32_t t143 = 2756;

    t143 = ((x6785^(x6786-x6787))<<x6788);

    if (t143 != 12) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint32_t x6809 = 101U;
	uint32_t x6810 = 3432300U;
	static volatile int8_t x6812 = 0;
	volatile uint32_t t144 = 51613253U;

    t144 = ((x6809^(x6810-x6811))<<x6812);

    if (t144 != 3431339U) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint64_t x6853 = 18683365LLU;
	int32_t x6855 = -1;
	uint64_t t145 = 1385859669914LLU;

    t145 = ((x6853^(x6854-x6855))<<x6856);

    if (t145 != 160488874718527488LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x6869 = INT16_MAX;
	int64_t x6871 = -1869607180LL;
	static volatile int8_t x6872 = 28;
	static int64_t t146 = 523LL;

    t146 = ((x6869^(x6870-x6871))<<x6872);

    if (t146 != 501862114953003008LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x6941 = -1LL;
	uint8_t x6943 = UINT8_MAX;
	static uint8_t x6944 = 6U;

    t147 = ((x6941^(x6942-x6943))<<x6944);

    if (t147 != 16320LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x6953 = 122;
	static uint64_t x6954 = UINT64_MAX;
	uint64_t x6955 = UINT64_MAX;
	uint64_t x6956 = 6LLU;
	static uint64_t t148 = 7131326666303LLU;

    t148 = ((x6953^(x6954-x6955))<<x6956);

    if (t148 != 7808LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x7057 = 62151LLU;
	uint16_t x7058 = 0U;
	volatile uint8_t x7059 = 1U;
	uint8_t x7060 = 45U;

    t149 = ((x7057^(x7058-x7059))<<x7060);

    if (t149 != 16259964979644465152LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x7121 = INT64_MAX;
	int64_t x7122 = -1LL;
	volatile uint64_t x7123 = 24760771556023841LLU;
	uint8_t x7124 = 12U;
	static volatile uint64_t t150 = 7744734LLU;

    t150 = ((x7121^(x7122-x7123))<<x7124);

    if (t150 != 9186399924925894656LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x7165 = -64;
	uint32_t x7166 = 26724752U;
	uint64_t x7167 = 1310047760LLU;
	int8_t x7168 = 0;
	static volatile uint64_t t151 = 115138297LLU;

    t151 = ((x7165^(x7166-x7167))<<x7168);

    if (t151 != 1283322944LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint64_t x7185 = 1050843681424448119LLU;
	volatile int64_t x7186 = 1222080739871LL;
	int16_t x7187 = INT16_MAX;
	static volatile uint8_t x7188 = 15U;
	uint64_t t152 = 970108LLU;

    t152 = ((x7185^(x7186-x7187))<<x7188);

    if (t152 != 12461205312288555008LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x7229 = INT32_MAX;
	static int64_t x7230 = INT64_MIN;
	static uint64_t x7231 = 9739181137568198LLU;
	static volatile uint64_t t153 = 208854008859619LLU;

    t153 = ((x7229^(x7230-x7231))<<x7232);

    if (t153 != 18427265712515400586LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x7301 = UINT64_MAX;
	int16_t x7302 = INT16_MAX;
	int64_t x7303 = 5824240LL;
	static int8_t x7304 = 0;
	static uint64_t t154 = 54LLU;

    t154 = ((x7301^(x7302-x7303))<<x7304);

    if (t154 != 5791472LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x7305 = INT16_MAX;
	volatile int16_t x7306 = 6;
	uint16_t x7308 = 6U;
	int32_t t155 = 190;

    t155 = ((x7305^(x7306-x7307))<<x7308);

    if (t155 != 2096640) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x7317 = UINT16_MAX;
	volatile int64_t x7318 = -1LL;
	int16_t x7319 = INT16_MIN;
	volatile uint16_t x7320 = 11U;
	volatile int64_t t156 = -5LL;

    t156 = ((x7317^(x7318-x7319))<<x7320);

    if (t156 != 67108864LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint8_t x7321 = UINT8_MAX;
	int16_t x7323 = INT16_MIN;
	uint8_t x7324 = 1U;
	uint64_t t157 = 461636113LLU;

    t157 = ((x7321^(x7322-x7323))<<x7324);

    if (t157 != 51418244LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x7345 = UINT32_MAX;
	static uint8_t x7347 = UINT8_MAX;
	volatile int16_t x7348 = 0;
	volatile uint32_t t158 = 631U;

    t158 = ((x7345^(x7346-x7347))<<x7348);

    if (t158 != 4294902015U) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint16_t x7361 = UINT16_MAX;
	int8_t x7362 = -1;

    t159 = ((x7361^(x7362-x7363))<<x7364);

    if (t159 != 1046992) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x7365 = -2320692;
	int32_t x7366 = INT32_MIN;
	volatile uint64_t x7367 = 5524381017890391039LLU;
	uint16_t x7368 = 29U;
	uint64_t t160 = 3360848889906682222LLU;

    t160 = ((x7365^(x7366-x7367))<<x7368);

    if (t160 != 10803288167533248512LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x7381 = INT8_MIN;
	int64_t x7382 = INT64_MIN;
	int64_t x7383 = -3425272311382LL;
	uint8_t x7384 = 0U;
	static int64_t t161 = -100506705528LL;

    t161 = ((x7381^(x7382-x7383))<<x7384);

    if (t161 != 9223368611582464470LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x7501 = 3533U;
	uint32_t x7502 = 3482U;
	static int8_t x7503 = INT8_MIN;
	static uint8_t x7504 = 1U;
	uint32_t t162 = 1862U;

    t162 = ((x7501^(x7502-x7503))<<x7504);

    if (t162 != 1966U) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x7537 = INT8_MIN;
	static uint8_t x7540 = 0U;
	int32_t t163 = -971178;

    t163 = ((x7537^(x7538-x7539))<<x7540);

    if (t163 != 32641) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x7541 = 988922677369462510LLU;
	static volatile int32_t x7542 = -669;
	uint8_t x7543 = UINT8_MAX;
	static volatile uint16_t x7544 = 3U;
	uint64_t t164 = 59958347636LLU;

    t164 = ((x7541^(x7542-x7543))<<x7544);

    if (t164 != 10535362654753854544LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x7577 = UINT64_MAX;
	uint64_t t165 = 0LLU;

    t165 = ((x7577^(x7578-x7579))<<x7580);

    if (t165 != 252LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x7642 = -30629904;
	int8_t x7644 = 1;

    t166 = ((x7641^(x7642-x7643))<<x7644);

    if (t166 != 4233707490LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x7769 = INT32_MAX;
	int64_t x7771 = -474301383340LL;
	volatile int64_t t167 = 0LL;

    t167 = ((x7769^(x7770-x7771))<<x7772);

    if (t167 != 7745353689661440LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x7837 = INT8_MAX;
	volatile int32_t x7839 = 0;
	int8_t x7840 = 4;
	uint32_t t168 = 94964U;

    t168 = ((x7837^(x7838-x7839))<<x7840);

    if (t168 != 256U) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x7849 = -1;
	uint64_t x7850 = 764LLU;
	uint8_t x7852 = 25U;

    t169 = ((x7849^(x7850-x7851))<<x7852);

    if (t169 != 18446744052301824000LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x7869 = INT8_MIN;
	uint64_t x7870 = 5LLU;
	static uint8_t x7872 = 0U;

    t170 = ((x7869^(x7870-x7871))<<x7872);

    if (t170 != 676287140532312LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint8_t x7881 = 1U;
	static uint16_t x7882 = 57U;
	static int8_t x7883 = 42;
	static int8_t x7884 = 18;

    t171 = ((x7881^(x7882-x7883))<<x7884);

    if (t171 != 3670016) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int64_t x7941 = INT64_MIN;
	int64_t x7942 = INT64_MIN;
	int32_t x7943 = -1;
	int32_t x7944 = 61;

    t172 = ((x7941^(x7942-x7943))<<x7944);

    if (t172 != 2305843009213693952LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x7957 = INT16_MIN;
	volatile int16_t x7958 = INT16_MAX;
	uint32_t x7960 = 15U;
	uint32_t t173 = 98U;

    t173 = ((x7957^(x7958-x7959))<<x7960);

    if (t173 != 4280811520U) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint32_t x8022 = UINT32_MAX;
	int8_t x8024 = 1;

    t174 = ((x8021^(x8022-x8023))<<x8024);

    if (t174 != 4294902014U) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x8033 = 0;
	volatile int8_t x8034 = -45;
	int16_t x8035 = -9583;
	uint8_t x8036 = 1U;
	int32_t t175 = -6397;

    t175 = ((x8033^(x8034-x8035))<<x8036);

    if (t175 != 19076) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x8037 = -1;
	uint64_t x8038 = 963777562LLU;
	int32_t x8039 = -1;
	uint8_t x8040 = 1U;
	uint64_t t176 = 529113178743007LLU;

    t176 = ((x8037^(x8038-x8039))<<x8040);

    if (t176 != 18446744071781996488LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x8062 = 38718396951LLU;
	uint32_t x8063 = 87451256U;
	int64_t x8064 = 11LL;
	uint64_t t177 = 1666168787LLU;

    t177 = ((x8061^(x8062-x8063))<<x8064);

    if (t177 != 18446669258258446336LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x8073 = -1;
	static volatile uint32_t x8074 = 1U;
	int16_t x8075 = INT16_MAX;
	volatile uint8_t x8076 = 4U;
	uint32_t t178 = 1844900363U;

    t178 = ((x8073^(x8074-x8075))<<x8076);

    if (t178 != 524240U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x8137 = UINT8_MAX;
	static volatile uint32_t x8138 = UINT32_MAX;
	uint8_t x8139 = 1U;
	static int64_t x8140 = 0LL;

    t179 = ((x8137^(x8138-x8139))<<x8140);

    if (t179 != 4294967041U) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x8174 = 81U;
	int8_t x8175 = INT8_MIN;
	static int32_t t180 = 141754;

    t180 = ((x8173^(x8174-x8175))<<x8176);

    if (t180 != 422) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x8177 = 50;
	volatile int32_t x8178 = INT32_MIN;
	uint64_t x8179 = 1LLU;
	int8_t x8180 = 18;
	uint64_t t181 = 14968389LLU;

    t181 = ((x8177^(x8178-x8179))<<x8180);

    if (t181 != 18446181123742760960LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x8202 = -1;
	uint8_t x8203 = 0U;
	static volatile int32_t t182 = 115147;

    t182 = ((x8201^(x8202-x8203))<<x8204);

    if (t182 != 65534) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x8233 = -1;
	int16_t x8234 = INT16_MIN;
	uint32_t x8235 = 10418U;
	volatile int64_t x8236 = 21LL;

    t183 = ((x8233^(x8234-x8235))<<x8236);

    if (t183 != 371195904U) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x8249 = -324;
	int8_t x8250 = -1;
	volatile uint8_t x8252 = 13U;

    t184 = ((x8249^(x8250-x8251))<<x8252);

    if (t184 != 265781248) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x8289 = -1;
	uint16_t x8292 = 36U;
	volatile uint64_t t185 = 388083492351LLU;

    t185 = ((x8289^(x8290-x8291))<<x8292);

    if (t185 != 16855997382519685120LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x8373 = 0;
	uint64_t x8375 = 149283LLU;
	uint8_t x8376 = 41U;
	uint64_t t186 = 7085LLU;

    t186 = ((x8373^(x8374-x8375))<<x8376);

    if (t186 != 18118726769795137536LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static int16_t x8445 = INT16_MIN;
	uint16_t x8446 = 1533U;
	uint32_t x8447 = UINT32_MAX;
	int32_t x8448 = 4;
	static volatile uint32_t t187 = 1U;

    t187 = ((x8445^(x8446-x8447))<<x8448);

    if (t187 != 4294467552U) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint32_t x8449 = 5U;
	int16_t x8450 = -1;
	int32_t x8451 = INT32_MIN;
	uint16_t x8452 = 0U;
	static volatile uint32_t t188 = 80903713U;

    t188 = ((x8449^(x8450-x8451))<<x8452);

    if (t188 != 2147483642U) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x8453 = UINT64_MAX;
	uint64_t x8454 = 7991587367095LLU;
	volatile uint8_t x8455 = 3U;
	uint64_t t189 = 4LLU;

    t189 = ((x8453^(x8454-x8455))<<x8456);

    if (t189 != 18446232612118057664LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x8469 = -2;
	static volatile uint64_t x8470 = 1056135713986LLU;
	uint64_t x8471 = 13753285820502LLU;
	volatile uint64_t t190 = 398580797066896037LLU;

    t190 = ((x8469^(x8470-x8471))<<x8472);

    if (t190 != 25394300213028LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x8501 = 2808643327000914LL;
	volatile uint16_t x8502 = UINT16_MAX;
	static volatile int8_t x8503 = INT8_MAX;
	uint8_t x8504 = 0U;
	int64_t t191 = -186210032LL;

    t191 = ((x8501^(x8502-x8503))<<x8504);

    if (t191 != 2808643327000274LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x8529 = -1;
	int16_t x8530 = 981;
	uint16_t x8531 = UINT16_MAX;
	uint8_t x8532 = 0U;

    t192 = ((x8529^(x8530-x8531))<<x8532);

    if (t192 != 64553) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x8554 = -1LL;
	int16_t x8556 = 1;
	volatile int64_t t193 = 17013627298232LL;

    t193 = ((x8553^(x8554-x8555))<<x8556);

    if (t193 != 4294967040LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x8610 = INT8_MIN;
	volatile uint16_t x8611 = 13U;
	int8_t x8612 = 0;
	volatile int64_t t194 = -3161683LL;

    t194 = ((x8609^(x8610-x8611))<<x8612);

    if (t194 != 140LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x8614 = 5601U;
	int64_t x8615 = 13182534193548LL;
	static uint64_t x8616 = 0LLU;
	int64_t t195 = 399LL;

    t195 = ((x8613^(x8614-x8615))<<x8616);

    if (t195 != 13182534187989LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x8637 = -1;
	uint64_t x8639 = 432595452577009LLU;
	int32_t x8640 = 2;
	static volatile uint64_t t196 = 91LLU;

    t196 = ((x8637^(x8638-x8639))<<x8640);

    if (t196 != 1730381810308092LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x8645 = INT8_MIN;
	volatile int64_t x8646 = -1593615LL;
	int16_t x8647 = 13408;
	volatile int64_t t197 = -2952935LL;

    t197 = ((x8645^(x8646-x8647))<<x8648);

    if (t197 != 26327924736LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint64_t x8677 = 1748LLU;
	int8_t x8678 = INT8_MIN;
	int16_t x8679 = -41;
	static uint8_t x8680 = 9U;
	uint64_t t198 = 8200564392654LLU;

    t198 = ((x8677^(x8678-x8679))<<x8680);

    if (t198 != 18446744073708698112LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x8690 = UINT64_MAX;
	volatile int32_t x8691 = INT32_MIN;

    t199 = ((x8689^(x8690-x8691))<<x8692);

    if (t199 != 18446462598733103104LLU) { NG(); } else { ; }
	
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


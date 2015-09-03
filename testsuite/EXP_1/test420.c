#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x57 = 45758U;
static uint16_t x58 = UINT16_MAX;
int16_t x60 = -1013;
volatile int16_t x95 = 24;
volatile int8_t x107 = 6;
static uint64_t t3 = 14396225218896LLU;
uint8_t x125 = 1U;
int32_t t4 = -208374;
uint8_t x282 = 121U;
static uint16_t x303 = 17U;
static uint64_t x344 = 24980388316594014LLU;
volatile uint16_t x360 = UINT16_MAX;
int64_t t10 = 100564129395LL;
int64_t x386 = INT64_MIN;
int16_t x445 = INT16_MIN;
static int16_t x446 = INT16_MIN;
uint8_t x526 = 3U;
int8_t x759 = 2;
volatile int64_t t15 = 1915858482175LL;
int32_t x776 = INT32_MIN;
static int32_t t16 = 0;
uint64_t x892 = 361993219LLU;
uint32_t t18 = 37U;
static uint64_t x997 = 1LLU;
uint64_t t19 = 99893647343LLU;
int32_t x1012 = INT32_MIN;
int64_t x1041 = -1LL;
static volatile uint8_t x1127 = 0U;
static int16_t x1147 = 0;
int32_t x1148 = INT32_MAX;
int64_t t27 = -98LL;
uint64_t x1289 = UINT64_MAX;
uint8_t x1291 = 0U;
int64_t t30 = -12600395LL;
int8_t x1917 = -56;
static int16_t x1918 = -1;
uint8_t x2047 = 21U;
int16_t x2063 = 1;
static uint8_t x2071 = 8U;
uint8_t x2237 = 1U;
static volatile uint16_t x2240 = 101U;
int8_t x2282 = -48;
static volatile int64_t t41 = -214838303467LL;
int8_t x2298 = -1;
static uint8_t x2300 = UINT8_MAX;
uint32_t x2304 = 62U;
uint64_t x2326 = 22160151LLU;
uint8_t x2327 = 27U;
int16_t x2411 = 58;
volatile int64_t t45 = 10787928147596LL;
int32_t x2430 = INT32_MAX;
int16_t x2670 = 315;
int8_t x2733 = 0;
volatile uint64_t x2736 = 90LLU;
static uint64_t x2749 = UINT64_MAX;
uint16_t x2750 = UINT16_MAX;
uint16_t x2803 = 0U;
uint8_t x2978 = 0U;
static uint16_t x2979 = 13U;
int32_t t58 = -122;
uint8_t x2991 = 6U;
uint8_t x3021 = 15U;
int32_t x3022 = 25608747;
int32_t t60 = 9;
uint32_t x3042 = 108135888U;
uint32_t t61 = 4088964U;
volatile uint64_t t62 = 1874LLU;
uint32_t x3118 = 2841U;
uint16_t x3119 = 2U;
volatile int8_t x3181 = INT8_MIN;
volatile int16_t x3184 = -21;
volatile int64_t t66 = -18716767489660680LL;
volatile uint32_t x3384 = 121709U;
static int8_t x3423 = 0;
int32_t x3524 = -1;
uint64_t t74 = 2590LLU;
static volatile int8_t x3684 = INT8_MIN;
int8_t x3783 = 18;
static volatile uint64_t t76 = 474002378LLU;
static uint32_t x3822 = 2046469651U;
static volatile uint32_t x4175 = 0U;
static int8_t x4176 = -58;
volatile int32_t t80 = 3363999;
uint16_t x4183 = 1U;
uint64_t t82 = 278459120858769703LLU;
int16_t x4244 = -1;
uint8_t x4249 = 0U;
int8_t x4385 = INT8_MAX;
int8_t x4387 = 7;
uint32_t x4512 = 10016832U;
volatile int16_t x4531 = 4;
uint64_t x4601 = 89165377821LLU;
uint32_t x4656 = 819U;
volatile int8_t x4680 = -1;
static volatile int32_t t94 = 5474750;
volatile uint32_t x4889 = 68050282U;
int8_t x4891 = 10;
int8_t x4959 = 16;
volatile uint32_t t97 = 153517043U;
int64_t x5008 = INT64_MIN;
static volatile uint64_t t98 = 28458106358845245LLU;
volatile uint64_t t99 = 98LLU;


void f0(void) {
	volatile uint16_t x59 = 3U;
	volatile uint32_t t0 = 230617829U;

	t0 = (((x57*x58)>>x59)/x60);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x65 = 1540525278LLU;
	int64_t x66 = -1LL;
	uint8_t x67 = 3U;
	int32_t x68 = INT32_MIN;
	volatile uint64_t t1 = 13248801455LLU;

	t1 = (((x65*x66)>>x67)/x68);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x93 = 15254724LL;
	uint16_t x94 = 11768U;
	uint16_t x96 = 2258U;
	volatile int64_t t2 = 18401852017327732LL;

	t2 = (((x93*x94)>>x95)/x96);

	if (t2 != 4LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x105 = 58U;
	uint64_t x106 = 109LLU;
	int8_t x108 = -1;

	t3 = (((x105*x106)>>x107)/x108);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x126 = 1U;
	int64_t x127 = 15LL;
	int16_t x128 = INT16_MIN;

	t4 = (((x125*x126)>>x127)/x128);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x153 = 16868351U;
	uint16_t x154 = 244U;
	volatile int8_t x155 = 0;
	volatile uint64_t x156 = UINT64_MAX;
	uint64_t t5 = 117566LLU;

	t5 = (((x153*x154)>>x155)/x156);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x281 = 12U;
	volatile int8_t x283 = 1;
	int64_t x284 = -1LL;
	volatile int64_t t6 = 148587367736LL;

	t6 = (((x281*x282)>>x283)/x284);

	if (t6 != -726LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x301 = UINT64_MAX;
	int16_t x302 = -1;
	volatile int64_t x304 = -1LL;
	uint64_t t7 = 2012770915516939798LLU;

	t7 = (((x301*x302)>>x303)/x304);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x341 = -692;
	uint64_t x342 = UINT64_MAX;
	volatile int8_t x343 = 10;
	static volatile uint64_t t8 = 3768871563254125093LLU;

	t8 = (((x341*x342)>>x343)/x344);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x357 = 0U;
	int64_t x358 = 1628053202036177291LL;
	int8_t x359 = 1;
	int64_t t9 = 1028389868899LL;

	t9 = (((x357*x358)>>x359)/x360);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x361 = 69053;
	int8_t x362 = INT8_MAX;
	static volatile uint8_t x363 = 14U;
	int64_t x364 = INT64_MIN;

	t10 = (((x361*x362)>>x363)/x364);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x385 = 563254146660633574LLU;
	uint8_t x387 = 1U;
	static int32_t x388 = INT32_MIN;
	static volatile uint64_t t11 = 3508694513LLU;

	t11 = (((x385*x386)>>x387)/x388);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x447 = 0;
	static int64_t x448 = -1LL;
	volatile int64_t t12 = 0LL;

	t12 = (((x445*x446)>>x447)/x448);

	if (t12 != -1073741824LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x525 = 1LLU;
	static uint8_t x527 = 2U;
	volatile int16_t x528 = -22;
	volatile uint64_t t13 = 20668789237LLU;

	t13 = (((x525*x526)>>x527)/x528);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x753 = -1;
	int8_t x754 = INT8_MIN;
	uint16_t x755 = 8U;
	static uint32_t x756 = 9U;
	static uint32_t t14 = 43816U;

	t14 = (((x753*x754)>>x755)/x756);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x757 = -391278248270401LL;
	volatile int32_t x758 = -1;
	volatile int64_t x760 = -132720655402LL;

	t15 = (((x757*x758)>>x759)/x760);

	if (t15 != -737LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x773 = UINT8_MAX;
	static volatile uint16_t x774 = 117U;
	static uint8_t x775 = 0U;

	t16 = (((x773*x774)>>x775)/x776);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x889 = 977829U;
	int32_t x890 = INT32_MAX;
	int8_t x891 = 15;
	static volatile uint64_t t17 = 193998LLU;

	t17 = (((x889*x890)>>x891)/x892);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x949 = UINT32_MAX;
	static volatile int16_t x950 = INT16_MAX;
	uint64_t x951 = 18LLU;
	int16_t x952 = -12;

	t18 = (((x949*x950)>>x951)/x952);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x998 = INT32_MIN;
	static volatile uint8_t x999 = 48U;
	static int64_t x1000 = -1LL;

	t19 = (((x997*x998)>>x999)/x1000);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x1009 = UINT64_MAX;
	static int32_t x1010 = -30037;
	int32_t x1011 = 3;
	uint64_t t20 = 5084LLU;

	t20 = (((x1009*x1010)>>x1011)/x1012);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1042 = INT16_MIN;
	int32_t x1043 = 0;
	uint8_t x1044 = UINT8_MAX;
	volatile int64_t t21 = -5638LL;

	t21 = (((x1041*x1042)>>x1043)/x1044);

	if (t21 != 128LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1057 = INT16_MIN;
	int16_t x1058 = INT16_MIN;
	static int32_t x1059 = 0;
	static volatile uint32_t x1060 = 11U;
	volatile uint32_t t22 = 1U;

	t22 = (((x1057*x1058)>>x1059)/x1060);

	if (t22 != 97612893U) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1125 = 8072072905317346LLU;
	int8_t x1126 = -54;
	int16_t x1128 = INT16_MIN;
	volatile uint64_t t23 = 1402447249358944441LLU;

	t23 = (((x1125*x1126)>>x1127)/x1128);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x1145 = -126;
	uint64_t x1146 = 119637LLU;
	uint64_t t24 = 482188005866964LLU;

	t24 = (((x1145*x1146)>>x1147)/x1148);

	if (t24 != 8589934595LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x1157 = 9U;
	int16_t x1158 = 2477;
	uint8_t x1159 = 22U;
	static int64_t x1160 = -3357587073LL;
	volatile int64_t t25 = 138420564831738553LL;

	t25 = (((x1157*x1158)>>x1159)/x1160);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint64_t x1161 = 7947LLU;
	volatile int64_t x1162 = INT64_MIN;
	int16_t x1163 = 26;
	int16_t x1164 = 4077;
	volatile uint64_t t26 = 120443765523423LLU;

	t26 = (((x1161*x1162)>>x1163)/x1164);

	if (t26 != 33710805LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x1189 = 3;
	int64_t x1190 = 827745LL;
	static int64_t x1191 = 15LL;
	volatile int64_t x1192 = INT64_MIN;

	t27 = (((x1189*x1190)>>x1191)/x1192);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x1290 = INT32_MIN;
	int32_t x1292 = INT32_MIN;
	uint64_t t28 = 524218336279LLU;

	t28 = (((x1289*x1290)>>x1291)/x1292);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1405 = UINT8_MAX;
	int8_t x1406 = 7;
	static uint8_t x1407 = 0U;
	static int32_t x1408 = -1;
	int32_t t29 = 779583;

	t29 = (((x1405*x1406)>>x1407)/x1408);

	if (t29 != -1785) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x1469 = -176577799058166LL;
	volatile int8_t x1470 = -1;
	int8_t x1471 = 52;
	uint32_t x1472 = UINT32_MAX;

	t30 = (((x1469*x1470)>>x1471)/x1472);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint16_t x1601 = 9197U;
	volatile uint32_t x1602 = UINT32_MAX;
	int32_t x1603 = 3;
	uint32_t x1604 = 87U;
	uint32_t t31 = 2553U;

	t31 = (((x1601*x1602)>>x1603)/x1604);

	if (t31 != 6170916U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1617 = INT8_MAX;
	uint64_t x1618 = UINT64_MAX;
	volatile int16_t x1619 = 45;
	int64_t x1620 = 4820819105467369LL;
	static volatile uint64_t t32 = 20404LLU;

	t32 = (((x1617*x1618)>>x1619)/x1620);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x1661 = INT8_MAX;
	uint32_t x1662 = 103U;
	uint16_t x1663 = 3U;
	int16_t x1664 = INT16_MIN;
	uint32_t t33 = 507U;

	t33 = (((x1661*x1662)>>x1663)/x1664);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x1733 = UINT16_MAX;
	uint32_t x1734 = 362U;
	int8_t x1735 = 2;
	static int16_t x1736 = -5436;
	uint32_t t34 = 115131560U;

	t34 = (((x1733*x1734)>>x1735)/x1736);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1841 = -1;
	static uint32_t x1842 = 11U;
	int32_t x1843 = 6;
	volatile int32_t x1844 = 1252;
	static uint32_t t35 = 18U;

	t35 = (((x1841*x1842)>>x1843)/x1844);

	if (t35 != 53601U) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x1919 = 12U;
	int16_t x1920 = 9066;
	int32_t t36 = 3050;

	t36 = (((x1917*x1918)>>x1919)/x1920);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x2045 = 5U;
	int32_t x2046 = 6892517;
	int32_t x2048 = -1;
	volatile uint32_t t37 = 59U;

	t37 = (((x2045*x2046)>>x2047)/x2048);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x2061 = 11;
	uint16_t x2062 = 14U;
	uint8_t x2064 = UINT8_MAX;
	int32_t t38 = 17;

	t38 = (((x2061*x2062)>>x2063)/x2064);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x2069 = 1;
	int8_t x2070 = INT8_MAX;
	volatile uint64_t x2072 = 641488665988593LLU;
	volatile uint64_t t39 = 6143133728LLU;

	t39 = (((x2069*x2070)>>x2071)/x2072);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x2238 = INT16_MAX;
	uint16_t x2239 = 2U;
	int32_t t40 = -53466567;

	t40 = (((x2237*x2238)>>x2239)/x2240);

	if (t40 != 81) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x2281 = UINT32_MAX;
	volatile uint64_t x2283 = 29LLU;
	int64_t x2284 = 30LL;

	t41 = (((x2281*x2282)>>x2283)/x2284);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x2297 = -1LL;
	uint8_t x2299 = 7U;
	volatile int64_t t42 = 11988143997LL;

	t42 = (((x2297*x2298)>>x2299)/x2300);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2301 = 14772;
	int8_t x2302 = 0;
	int8_t x2303 = 2;
	uint32_t t43 = 3798U;

	t43 = (((x2301*x2302)>>x2303)/x2304);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x2325 = 2058;
	static uint32_t x2328 = 221960893U;
	uint64_t t44 = 129481796800LLU;

	t44 = (((x2325*x2326)>>x2327)/x2328);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x2409 = -1LL;
	static int16_t x2410 = -1;
	volatile int8_t x2412 = 21;

	t45 = (((x2409*x2410)>>x2411)/x2412);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x2429 = 1;
	int64_t x2431 = 7LL;
	int64_t x2432 = INT64_MAX;
	volatile int64_t t46 = 81460LL;

	t46 = (((x2429*x2430)>>x2431)/x2432);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x2441 = 15;
	int64_t x2442 = 345LL;
	uint16_t x2443 = 45U;
	volatile int16_t x2444 = INT16_MAX;
	static volatile int64_t t47 = 1948964164LL;

	t47 = (((x2441*x2442)>>x2443)/x2444);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x2537 = 1;
	int32_t x2538 = INT32_MAX;
	volatile uint16_t x2539 = 23U;
	volatile int16_t x2540 = INT16_MAX;
	int32_t t48 = 46621688;

	t48 = (((x2537*x2538)>>x2539)/x2540);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x2625 = 4080LLU;
	uint8_t x2626 = 10U;
	int32_t x2627 = 2;
	int64_t x2628 = INT64_MIN;
	volatile uint64_t t49 = 1214LLU;

	t49 = (((x2625*x2626)>>x2627)/x2628);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x2645 = 1989242U;
	uint8_t x2646 = UINT8_MAX;
	uint16_t x2647 = 3U;
	uint32_t x2648 = 30U;
	uint32_t t50 = 10786872U;

	t50 = (((x2645*x2646)>>x2647)/x2648);

	if (t50 != 2113569U) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x2653 = INT32_MIN;
	volatile uint32_t x2654 = UINT32_MAX;
	int8_t x2655 = 1;
	static int16_t x2656 = INT16_MIN;
	volatile uint32_t t51 = 605666U;

	t51 = (((x2653*x2654)>>x2655)/x2656);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x2669 = 3789802U;
	static uint32_t x2671 = 27U;
	int64_t x2672 = INT64_MIN;
	static int64_t t52 = -2909492817123LL;

	t52 = (((x2669*x2670)>>x2671)/x2672);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x2734 = INT64_MIN;
	uint16_t x2735 = 2U;
	static uint64_t t53 = 11985313488006LLU;

	t53 = (((x2733*x2734)>>x2735)/x2736);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x2745 = 10U;
	int16_t x2746 = 10;
	int8_t x2747 = 0;
	int64_t x2748 = INT64_MIN;
	static int64_t t54 = 300194080542719575LL;

	t54 = (((x2745*x2746)>>x2747)/x2748);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x2751 = 8;
	int8_t x2752 = -6;
	uint64_t t55 = 7051860LLU;

	t55 = (((x2749*x2750)>>x2751)/x2752);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x2801 = UINT64_MAX;
	static uint8_t x2802 = 0U;
	uint32_t x2804 = UINT32_MAX;
	uint64_t t56 = 46101023104LLU;

	t56 = (((x2801*x2802)>>x2803)/x2804);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x2961 = INT16_MAX;
	static int16_t x2962 = 85;
	static uint32_t x2963 = 0U;
	int8_t x2964 = INT8_MAX;
	int32_t t57 = 1;

	t57 = (((x2961*x2962)>>x2963)/x2964);

	if (t57 != 21930) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x2977 = -1;
	volatile int16_t x2980 = -1;

	t58 = (((x2977*x2978)>>x2979)/x2980);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x2989 = -1;
	volatile uint64_t x2990 = UINT64_MAX;
	int64_t x2992 = 345203994963166274LL;
	volatile uint64_t t59 = 0LLU;

	t59 = (((x2989*x2990)>>x2991)/x2992);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x3023 = 10U;
	int32_t x3024 = -1;

	t60 = (((x3021*x3022)>>x3023)/x3024);

	if (t60 != -375128) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x3041 = 5770527U;
	uint64_t x3043 = 1LLU;
	int16_t x3044 = INT16_MAX;

	t61 = (((x3041*x3042)>>x3043)/x3044);

	if (t61 != 37275U) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x3077 = 6U;
	static volatile uint64_t x3078 = 402713908490017LLU;
	volatile int8_t x3079 = 1;
	int32_t x3080 = INT32_MIN;

	t62 = (((x3077*x3078)>>x3079)/x3080);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x3117 = 20;
	int64_t x3120 = 11185453672658LL;
	volatile int64_t t63 = 23178966675LL;

	t63 = (((x3117*x3118)>>x3119)/x3120);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int64_t x3165 = -5781LL;
	int64_t x3166 = -1LL;
	uint16_t x3167 = 51U;
	int32_t x3168 = INT32_MIN;
	volatile int64_t t64 = -4LL;

	t64 = (((x3165*x3166)>>x3167)/x3168);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x3182 = -1;
	static volatile int8_t x3183 = 0;
	static int32_t t65 = 22564;

	t65 = (((x3181*x3182)>>x3183)/x3184);

	if (t65 != -6) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x3245 = 16031;
	uint16_t x3246 = 2811U;
	static uint8_t x3247 = 12U;
	static int64_t x3248 = INT64_MAX;

	t66 = (((x3245*x3246)>>x3247)/x3248);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x3253 = UINT64_MAX;
	int8_t x3254 = -1;
	uint8_t x3255 = 8U;
	static uint64_t x3256 = 8496614653911LLU;
	static uint64_t t67 = 1974226LLU;

	t67 = (((x3253*x3254)>>x3255)/x3256);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x3289 = UINT64_MAX;
	uint16_t x3290 = 10343U;
	int32_t x3291 = 0;
	uint16_t x3292 = 3U;
	uint64_t t68 = 14670019090262993LLU;

	t68 = (((x3289*x3290)>>x3291)/x3292);

	if (t68 != 6148914691236513757LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x3381 = 449037U;
	int32_t x3382 = INT32_MIN;
	uint16_t x3383 = 7U;
	static uint32_t t69 = 198590U;

	t69 = (((x3381*x3382)>>x3383)/x3384);

	if (t69 != 137U) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x3409 = 1978;
	static volatile uint64_t x3410 = 13215LLU;
	int16_t x3411 = 1;
	int64_t x3412 = INT64_MIN;
	uint64_t t70 = 46033800370966LLU;

	t70 = (((x3409*x3410)>>x3411)/x3412);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x3421 = 1456159667U;
	int8_t x3422 = INT8_MAX;
	int32_t x3424 = -641109;
	volatile uint32_t t71 = 1U;

	t71 = (((x3421*x3422)>>x3423)/x3424);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x3441 = INT8_MAX;
	uint16_t x3442 = 7377U;
	static volatile int16_t x3443 = 4;
	int32_t x3444 = -19628;
	int32_t t72 = -855550479;

	t72 = (((x3441*x3442)>>x3443)/x3444);

	if (t72 != -2) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int64_t x3481 = INT64_MAX;
	uint64_t x3482 = UINT64_MAX;
	volatile uint8_t x3483 = 2U;
	uint8_t x3484 = 15U;
	volatile uint64_t t73 = 31260096LLU;

	t73 = (((x3481*x3482)>>x3483)/x3484);

	if (t73 != 153722867280912930LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x3521 = -1;
	uint64_t x3522 = UINT64_MAX;
	uint8_t x3523 = 3U;

	t74 = (((x3521*x3522)>>x3523)/x3524);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x3681 = 507LLU;
	uint64_t x3682 = 180105812206122LLU;
	uint8_t x3683 = 1U;
	uint64_t t75 = 49707LLU;

	t75 = (((x3681*x3682)>>x3683)/x3684);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x3781 = 44U;
	static uint64_t x3782 = 1860565720223091LLU;
	int32_t x3784 = INT32_MAX;

	t76 = (((x3781*x3782)>>x3783)/x3784);

	if (t76 != 145LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x3821 = 8U;
	int16_t x3823 = 0;
	int8_t x3824 = -10;
	uint32_t t77 = 1U;

	t77 = (((x3821*x3822)>>x3823)/x3824);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x3897 = 0;
	static int16_t x3898 = 1;
	static uint16_t x3899 = 31U;
	uint32_t x3900 = UINT32_MAX;
	uint32_t t78 = 7U;

	t78 = (((x3897*x3898)>>x3899)/x3900);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x3969 = INT16_MIN;
	int16_t x3970 = INT16_MIN;
	uint8_t x3971 = 1U;
	int32_t x3972 = INT32_MIN;
	int32_t t79 = 864706468;

	t79 = (((x3969*x3970)>>x3971)/x3972);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x4173 = 44U;
	int8_t x4174 = 59;

	t80 = (((x4173*x4174)>>x4175)/x4176);

	if (t80 != -44) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x4181 = -1;
	volatile int32_t x4182 = -6905370;
	volatile int64_t x4184 = INT64_MIN;
	static volatile int64_t t81 = 6553620LL;

	t81 = (((x4181*x4182)>>x4183)/x4184);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x4217 = UINT64_MAX;
	int32_t x4218 = INT32_MIN;
	uint32_t x4219 = 42U;
	int8_t x4220 = -1;

	t82 = (((x4217*x4218)>>x4219)/x4220);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x4241 = INT16_MIN;
	int64_t x4242 = -1583LL;
	volatile int8_t x4243 = 0;
	static int64_t t83 = -99849652097637784LL;

	t83 = (((x4241*x4242)>>x4243)/x4244);

	if (t83 != -51871744LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x4250 = UINT32_MAX;
	uint8_t x4251 = 5U;
	int8_t x4252 = INT8_MAX;
	volatile uint32_t t84 = 31020554U;

	t84 = (((x4249*x4250)>>x4251)/x4252);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x4337 = 120061194U;
	int32_t x4338 = -1;
	uint8_t x4339 = 24U;
	int64_t x4340 = INT64_MIN;
	int64_t t85 = 4472486801340210LL;

	t85 = (((x4337*x4338)>>x4339)/x4340);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x4386 = 26684424801890617LLU;
	uint64_t x4388 = UINT64_MAX;
	volatile uint64_t t86 = 83911702LLU;

	t86 = (((x4385*x4386)>>x4387)/x4388);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x4397 = INT16_MIN;
	volatile int8_t x4398 = -1;
	uint16_t x4399 = 10U;
	volatile uint16_t x4400 = 75U;
	int32_t t87 = -273396;

	t87 = (((x4397*x4398)>>x4399)/x4400);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x4509 = INT16_MAX;
	uint8_t x4510 = 0U;
	volatile uint8_t x4511 = 0U;
	static uint32_t t88 = 28097540U;

	t88 = (((x4509*x4510)>>x4511)/x4512);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x4529 = UINT32_MAX;
	uint8_t x4530 = UINT8_MAX;
	volatile int8_t x4532 = -1;
	uint32_t t89 = 5462U;

	t89 = (((x4529*x4530)>>x4531)/x4532);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x4602 = 26;
	uint8_t x4603 = 0U;
	uint64_t x4604 = 10473004417888LLU;
	uint64_t t90 = 560926070790465225LLU;

	t90 = (((x4601*x4602)>>x4603)/x4604);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x4653 = 26LLU;
	int16_t x4654 = INT16_MIN;
	volatile uint8_t x4655 = 13U;
	volatile uint64_t t91 = 64484486918LLU;

	t91 = (((x4653*x4654)>>x4655)/x4656);

	if (t91 != 2749450321959LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x4677 = 1500;
	static uint8_t x4678 = 35U;
	uint8_t x4679 = 2U;
	static volatile int32_t t92 = 1;

	t92 = (((x4677*x4678)>>x4679)/x4680);

	if (t92 != -13125) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x4817 = 4LL;
	uint64_t x4818 = 2443165517575373436LLU;
	int32_t x4819 = 2;
	int32_t x4820 = INT32_MAX;
	uint64_t t93 = 6593953926177878145LLU;

	t93 = (((x4817*x4818)>>x4819)/x4820);

	if (t93 != 1137687600LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x4877 = 0U;
	uint8_t x4878 = 123U;
	volatile uint32_t x4879 = 8U;
	static volatile int32_t x4880 = -204;

	t94 = (((x4877*x4878)>>x4879)/x4880);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x4890 = 158908;
	int16_t x4892 = INT16_MIN;
	volatile uint32_t t95 = 187320497U;

	t95 = (((x4889*x4890)>>x4891)/x4892);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x4917 = -1;
	int16_t x4918 = INT16_MIN;
	volatile int16_t x4919 = 1;
	static int32_t x4920 = INT32_MIN;
	int32_t t96 = 22599514;

	t96 = (((x4917*x4918)>>x4919)/x4920);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x4957 = INT16_MIN;
	static volatile uint32_t x4958 = 3U;
	int16_t x4960 = INT16_MIN;

	t97 = (((x4957*x4958)>>x4959)/x4960);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x5005 = 149LLU;
	int32_t x5006 = INT32_MIN;
	uint16_t x5007 = 1U;

	t98 = (((x5005*x5006)>>x5007)/x5008);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x5057 = 1U;
	uint64_t x5058 = UINT64_MAX;
	uint8_t x5059 = 4U;
	static int16_t x5060 = INT16_MIN;

	t99 = (((x5057*x5058)>>x5059)/x5060);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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


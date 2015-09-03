#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x217 = 445;
int8_t x219 = INT8_MAX;
volatile int32_t t0 = -204;
int16_t x237 = INT16_MAX;
static uint16_t x265 = UINT16_MAX;
static int64_t x267 = -1138670634066202077LL;
volatile int8_t x325 = INT8_MIN;
static uint64_t t3 = 250650456734535087LLU;
volatile uint64_t x329 = 207573294LLU;
uint16_t x486 = 3U;
uint32_t x521 = UINT32_MAX;
static uint64_t x522 = 1773679038930790LLU;
volatile uint64_t t7 = 231LLU;
uint8_t x588 = 31U;
uint8_t x705 = 3U;
int64_t t10 = 1017080216LL;
int8_t x841 = -2;
volatile int16_t x842 = INT16_MAX;
uint64_t t11 = 231590456090484838LLU;
int64_t t13 = -199291188771824LL;
uint8_t x942 = 3U;
uint8_t x944 = 12U;
volatile int64_t t15 = -3077386269551LL;
int32_t x1015 = INT32_MAX;
int64_t t16 = -13148455288LL;
volatile uint32_t x1405 = 760523U;
static uint8_t x1408 = 15U;
volatile int64_t x1458 = 5217205LL;
int64_t t24 = -41LL;
volatile uint8_t x1580 = 30U;
volatile uint32_t t25 = 523524U;
uint8_t x1588 = 0U;
int8_t x1804 = 3;
int32_t x1838 = 185;
volatile int32_t x1839 = INT32_MIN;
static uint32_t t31 = 0U;
uint64_t t33 = 126900414LLU;
int8_t x1917 = INT8_MIN;
volatile uint32_t t34 = 1984137U;
volatile int32_t t35 = -1;
uint32_t x2008 = 1U;
int64_t t37 = 25973816LL;
int8_t x2209 = 3;
int16_t x2360 = 49;
uint32_t x2666 = UINT32_MAX;
volatile int64_t x2713 = -1LL;
volatile int32_t x2715 = -164214;
static int64_t t45 = -85723912286456LL;
static int64_t x2793 = -1LL;
volatile uint64_t x2794 = UINT64_MAX;
int32_t x2799 = INT32_MIN;
volatile int32_t t48 = 238;
uint64_t t52 = 1LLU;
volatile uint64_t x3060 = 0LLU;
volatile uint8_t x3160 = 57U;
static int8_t x3388 = 52;
uint32_t x3517 = UINT32_MAX;
int16_t x3658 = INT16_MIN;
volatile uint8_t x3660 = 7U;
uint16_t x3755 = 108U;
static int32_t t63 = 3;
static volatile int8_t x3850 = INT8_MIN;
volatile uint32_t t64 = 1509U;
int8_t x3909 = INT8_MIN;
static uint64_t x4022 = 1291LLU;
uint64_t t66 = 715459996LLU;
int32_t x4059 = INT32_MIN;
static volatile int64_t t69 = -1548682970766432115LL;
uint8_t x4400 = 12U;
int32_t t71 = -328;
int8_t x4402 = -1;
uint8_t x4404 = 0U;
static int8_t x4446 = -14;
uint8_t x4448 = 13U;
int16_t x4485 = INT16_MIN;
uint8_t x4505 = UINT8_MAX;
uint32_t x4508 = 18U;
uint8_t x4808 = 30U;
int16_t x4819 = -1;
uint16_t x4832 = 1U;
volatile int64_t t82 = -7493473LL;
int8_t x4878 = INT8_MAX;
int8_t x4900 = 1;
uint64_t x5077 = 1383896442LLU;
uint64_t x5129 = 25438LLU;
int64_t x5182 = -1LL;
int32_t x5183 = INT32_MAX;
static volatile int64_t t89 = -277577641302419382LL;
volatile int32_t x5187 = -1;
int8_t x5212 = 0;
uint64_t x5350 = 453857589114303LLU;
int16_t x5351 = INT16_MIN;
int16_t x5352 = 4;
int16_t x5461 = INT16_MIN;
uint32_t x5464 = 10U;
int64_t x5494 = INT64_MAX;
uint64_t x5562 = UINT64_MAX;
static uint64_t t99 = 512771035501444LLU;


void f0(void) {
	int8_t x218 = 10;
	int8_t x220 = 4;

	t0 = (((x217*x218)-x219)>>x220);

	if (t0 != 270) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x238 = -1;
	uint32_t x239 = 747533U;
	volatile uint8_t x240 = 5U;
	volatile uint32_t t1 = 2450U;

	t1 = (((x237*x238)-x239)>>x240);

	if (t1 != 134193343U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x266 = INT16_MAX;
	uint32_t x268 = 22U;
	static int64_t t2 = 809552229643022LL;

	t2 = (((x265*x266)-x267)>>x268);

	if (t2 != 271480235150LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x326 = 6618U;
	volatile uint64_t x327 = UINT64_MAX;
	int64_t x328 = 3LL;

	t3 = (((x325*x326)-x327)>>x328);

	if (t3 != 536765024LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x330 = INT16_MAX;
	uint8_t x331 = 20U;
	uint8_t x332 = 0U;
	volatile uint64_t t4 = 13LLU;

	t4 = (((x329*x330)-x331)>>x332);

	if (t4 != 6801554124478LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x385 = 10029070LL;
	static volatile uint64_t x386 = UINT64_MAX;
	volatile int16_t x387 = INT16_MIN;
	uint8_t x388 = 3U;
	static volatile uint64_t t5 = 709314966121669110LLU;

	t5 = (((x385*x386)-x387)>>x388);

	if (t5 != 2305843009212444414LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x485 = INT16_MIN;
	static uint32_t x487 = UINT32_MAX;
	volatile int32_t x488 = 1;
	static volatile uint32_t t6 = 57948435U;

	t6 = (((x485*x486)-x487)>>x488);

	if (t6 != 2147434496U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x523 = -1232;
	int8_t x524 = 2;

	t7 = (((x521*x522)-x523)>>x524);

	if (t7 != 3837722809031465306LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x585 = -1;
	int32_t x586 = -4;
	static uint32_t x587 = UINT32_MAX;
	volatile uint32_t t8 = 867411905U;

	t8 = (((x585*x586)-x587)>>x588);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x706 = INT16_MAX;
	int16_t x707 = INT16_MIN;
	uint8_t x708 = 1U;
	int32_t t9 = 151440229;

	t9 = (((x705*x706)-x707)>>x708);

	if (t9 != 65534) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x733 = UINT32_MAX;
	int8_t x734 = 36;
	int64_t x735 = 1977496397LL;
	uint8_t x736 = 7U;

	t10 = (((x733*x734)-x735)>>x736);

	if (t10 != 18105241LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x843 = UINT64_MAX;
	static uint16_t x844 = 33U;

	t11 = (((x841*x842)-x843)>>x844);

	if (t11 != 2147483647LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x857 = 1540889LLU;
	uint64_t x858 = 8LLU;
	volatile uint16_t x859 = 4U;
	int8_t x860 = 0;
	volatile uint64_t t12 = 5464252855627LLU;

	t12 = (((x857*x858)-x859)>>x860);

	if (t12 != 12327108LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x865 = 16193U;
	int64_t x866 = 3344655462LL;
	volatile int16_t x867 = -1;
	int8_t x868 = 0;

	t13 = (((x865*x866)-x867)>>x868);

	if (t13 != 54160005896167LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x873 = INT8_MIN;
	static int16_t x874 = -3759;
	int8_t x875 = -1;
	int8_t x876 = 24;
	int32_t t14 = -16018535;

	t14 = (((x873*x874)-x875)>>x876);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x941 = UINT8_MAX;
	int64_t x943 = -164LL;

	t15 = (((x941*x942)-x943)>>x944);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x1013 = 245U;
	int64_t x1014 = 371022111979037LL;
	int8_t x1016 = 0;

	t16 = (((x1013*x1014)-x1015)>>x1016);

	if (t16 != 90900415287380418LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x1101 = 3U;
	uint16_t x1102 = 62U;
	int16_t x1103 = INT16_MIN;
	volatile uint8_t x1104 = 27U;
	int32_t t17 = 5392688;

	t17 = (((x1101*x1102)-x1103)>>x1104);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1129 = INT16_MAX;
	int64_t x1130 = 0LL;
	int8_t x1131 = -1;
	int8_t x1132 = 0;
	volatile int64_t t18 = -1LL;

	t18 = (((x1129*x1130)-x1131)>>x1132);

	if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x1157 = 49650;
	int8_t x1158 = INT8_MIN;
	static uint32_t x1159 = 23286440U;
	static int8_t x1160 = 1;
	uint32_t t19 = 503U;

	t19 = (((x1157*x1158)-x1159)>>x1160);

	if (t19 != 2132662828U) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x1173 = UINT32_MAX;
	int8_t x1174 = 0;
	uint64_t x1175 = 170769149LLU;
	int8_t x1176 = 1;
	static volatile uint64_t t20 = 484928LLU;

	t20 = (((x1173*x1174)-x1175)>>x1176);

	if (t20 != 9223372036769391233LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x1281 = UINT64_MAX;
	uint64_t x1282 = UINT64_MAX;
	uint8_t x1283 = 10U;
	int8_t x1284 = 7;
	volatile uint64_t t21 = 1197474291LLU;

	t21 = (((x1281*x1282)-x1283)>>x1284);

	if (t21 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x1406 = 3U;
	static uint8_t x1407 = 60U;
	volatile uint32_t t22 = 1U;

	t22 = (((x1405*x1406)-x1407)>>x1408);

	if (t22 != 69U) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1421 = 14U;
	static uint64_t x1422 = 5867398LLU;
	uint8_t x1423 = 79U;
	uint8_t x1424 = 0U;
	static uint64_t t23 = 69275LLU;

	t23 = (((x1421*x1422)-x1423)>>x1424);

	if (t23 != 82143493LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x1457 = 5006;
	static int16_t x1459 = INT16_MIN;
	static int32_t x1460 = 0;

	t24 = (((x1457*x1458)-x1459)>>x1460);

	if (t24 != 26117360998LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x1577 = 12;
	uint32_t x1578 = 6U;
	int32_t x1579 = INT32_MAX;

	t25 = (((x1577*x1578)-x1579)>>x1580);

	if (t25 != 2U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1585 = INT8_MIN;
	uint16_t x1586 = 182U;
	uint32_t x1587 = UINT32_MAX;
	static uint32_t t26 = 274U;

	t26 = (((x1585*x1586)-x1587)>>x1588);

	if (t26 != 4294944001U) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x1617 = INT8_MIN;
	static uint8_t x1618 = 16U;
	uint64_t x1619 = 1523453110448LLU;
	uint32_t x1620 = 55U;
	uint64_t t27 = 6409LLU;

	t27 = (((x1617*x1618)-x1619)>>x1620);

	if (t27 != 511LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1745 = -62;
	int16_t x1746 = INT16_MIN;
	int32_t x1747 = -1;
	uint32_t x1748 = 27U;
	int32_t t28 = 202;

	t28 = (((x1745*x1746)-x1747)>>x1748);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1757 = -12;
	volatile uint64_t x1758 = 737849787429447LLU;
	uint16_t x1759 = UINT16_MAX;
	int8_t x1760 = 23;
	uint64_t t29 = 74LLU;

	t29 = (((x1757*x1758)-x1759)>>x1760);

	if (t29 != 2197967752964LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1801 = 29LLU;
	int32_t x1802 = INT32_MIN;
	uint64_t x1803 = UINT64_MAX;
	volatile uint64_t t30 = 16LLU;

	t30 = (((x1801*x1802)-x1803)>>x1804);

	if (t30 != 2305843001429065728LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1837 = 1955992U;
	volatile int64_t x1840 = 0LL;

	t31 = (((x1837*x1838)-x1839)>>x1840);

	if (t31 != 2509342168U) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1841 = UINT16_MAX;
	uint8_t x1842 = 12U;
	volatile int8_t x1843 = INT8_MIN;
	uint64_t x1844 = 2LLU;
	int32_t t32 = 218443;

	t32 = (((x1841*x1842)-x1843)>>x1844);

	if (t32 != 196637) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x1897 = UINT32_MAX;
	uint64_t x1898 = 26LLU;
	uint16_t x1899 = 1U;
	static uint8_t x1900 = 27U;

	t33 = (((x1897*x1898)-x1899)>>x1900);

	if (t33 != 831LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x1918 = 2U;
	uint8_t x1919 = 81U;
	static uint32_t x1920 = 26U;

	t34 = (((x1917*x1918)-x1919)>>x1920);

	if (t34 != 63U) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x1965 = -1;
	static int8_t x1966 = INT8_MIN;
	int8_t x1967 = -1;
	static uint16_t x1968 = 0U;

	t35 = (((x1965*x1966)-x1967)>>x1968);

	if (t35 != 129) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x2005 = 120261U;
	int16_t x2006 = -1;
	int8_t x2007 = -1;
	uint32_t t36 = 1U;

	t36 = (((x2005*x2006)-x2007)>>x2008);

	if (t36 != 2147423518U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x2173 = -1038440LL;
	volatile uint16_t x2174 = 2U;
	int32_t x2175 = INT32_MIN;
	int16_t x2176 = 15;

	t37 = (((x2173*x2174)-x2175)>>x2176);

	if (t37 != 65472LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x2210 = 1;
	int16_t x2211 = -428;
	volatile int8_t x2212 = 1;
	int32_t t38 = 13562703;

	t38 = (((x2209*x2210)-x2211)>>x2212);

	if (t38 != 215) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x2217 = UINT16_MAX;
	int8_t x2218 = INT8_MIN;
	int32_t x2219 = INT32_MIN;
	uint32_t x2220 = 1U;
	volatile int32_t t39 = -203;

	t39 = (((x2217*x2218)-x2219)>>x2220);

	if (t39 != 1069547584) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2357 = INT8_MAX;
	volatile uint64_t x2358 = 12866858LLU;
	int8_t x2359 = INT8_MIN;
	uint64_t t40 = 1134LLU;

	t40 = (((x2357*x2358)-x2359)>>x2360);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int32_t x2377 = -1;
	uint16_t x2378 = 5742U;
	int16_t x2379 = INT16_MIN;
	int8_t x2380 = 0;
	static volatile int32_t t41 = -7066587;

	t41 = (((x2377*x2378)-x2379)>>x2380);

	if (t41 != 27026) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x2497 = -8;
	int32_t x2498 = -1;
	volatile int16_t x2499 = -4937;
	uint16_t x2500 = 0U;
	int32_t t42 = -2038567;

	t42 = (((x2497*x2498)-x2499)>>x2500);

	if (t42 != 4945) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x2533 = 1259U;
	uint32_t x2534 = 5U;
	uint64_t x2535 = UINT64_MAX;
	uint16_t x2536 = 1U;
	volatile uint64_t t43 = 65323007082LLU;

	t43 = (((x2533*x2534)-x2535)>>x2536);

	if (t43 != 3148LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x2665 = 0U;
	volatile uint8_t x2667 = 14U;
	int16_t x2668 = 3;
	uint32_t t44 = 1212U;

	t44 = (((x2665*x2666)-x2667)>>x2668);

	if (t44 != 536870910U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2714 = INT8_MIN;
	int16_t x2716 = 0;

	t45 = (((x2713*x2714)-x2715)>>x2716);

	if (t45 != 164342LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x2733 = UINT64_MAX;
	int16_t x2734 = 8;
	uint8_t x2735 = UINT8_MAX;
	volatile uint8_t x2736 = 3U;
	static uint64_t t46 = 2705724182095441124LLU;

	t46 = (((x2733*x2734)-x2735)>>x2736);

	if (t46 != 2305843009213693919LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x2795 = INT32_MIN;
	static uint16_t x2796 = 3U;
	volatile uint64_t t47 = 251879005583311485LLU;

	t47 = (((x2793*x2794)-x2795)>>x2796);

	if (t47 != 268435456LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x2797 = INT8_MIN;
	static int8_t x2798 = INT8_MAX;
	static int8_t x2800 = 3;

	t48 = (((x2797*x2798)-x2799)>>x2800);

	if (t48 != 268433424) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x2845 = 2U;
	uint32_t x2846 = 121326579U;
	int16_t x2847 = INT16_MAX;
	int32_t x2848 = 0;
	volatile uint32_t t49 = 1456392041U;

	t49 = (((x2845*x2846)-x2847)>>x2848);

	if (t49 != 242620391U) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x2877 = INT16_MAX;
	static uint64_t x2878 = 3035385016749713LLU;
	static volatile int8_t x2879 = -1;
	uint8_t x2880 = 26U;
	volatile uint64_t t50 = 235197LLU;

	t50 = (((x2877*x2878)-x2879)>>x2880);

	if (t50 != 107686824728LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x2981 = -1;
	int16_t x2982 = -20;
	int64_t x2983 = -1LL;
	int32_t x2984 = 1;
	int64_t t51 = -4751878575028627LL;

	t51 = (((x2981*x2982)-x2983)>>x2984);

	if (t51 != 10LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x3029 = 4023LLU;
	int64_t x3030 = 2729846205031LL;
	int16_t x3031 = INT16_MIN;
	uint32_t x3032 = 15U;

	t52 = (((x3029*x3030)-x3031)>>x3032);

	if (t52 != 335149270107LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x3057 = 124;
	static int64_t x3058 = -1LL;
	volatile int16_t x3059 = INT16_MIN;
	static int64_t t53 = -298LL;

	t53 = (((x3057*x3058)-x3059)>>x3060);

	if (t53 != 32644LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x3145 = INT8_MIN;
	int8_t x3146 = INT8_MIN;
	uint8_t x3147 = UINT8_MAX;
	uint8_t x3148 = 0U;
	int32_t t54 = -19027302;

	t54 = (((x3145*x3146)-x3147)>>x3148);

	if (t54 != 16129) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x3157 = 2856413619LLU;
	int8_t x3158 = -1;
	int64_t x3159 = 2281322730417273203LL;
	uint64_t t55 = 1717005720LLU;

	t55 = (((x3157*x3158)-x3159)>>x3160);

	if (t55 != 112LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int16_t x3225 = INT16_MIN;
	static int16_t x3226 = INT16_MIN;
	int64_t x3227 = 69766LL;
	volatile uint32_t x3228 = 31U;
	volatile int64_t t56 = -910812LL;

	t56 = (((x3225*x3226)-x3227)>>x3228);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x3385 = UINT64_MAX;
	int8_t x3386 = -1;
	int16_t x3387 = INT16_MAX;
	uint64_t t57 = 18702226798183156LLU;

	t57 = (((x3385*x3386)-x3387)>>x3388);

	if (t57 != 4095LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x3485 = 19LLU;
	int8_t x3486 = -1;
	int16_t x3487 = -1;
	int8_t x3488 = 0;
	volatile uint64_t t58 = 126216112LLU;

	t58 = (((x3485*x3486)-x3487)>>x3488);

	if (t58 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x3518 = 3988U;
	int32_t x3519 = INT32_MIN;
	uint8_t x3520 = 23U;
	volatile uint32_t t59 = 129123U;

	t59 = (((x3517*x3518)-x3519)>>x3520);

	if (t59 != 255U) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x3533 = INT32_MIN;
	static uint64_t x3534 = UINT64_MAX;
	uint16_t x3535 = UINT16_MAX;
	static volatile uint8_t x3536 = 0U;
	uint64_t t60 = 7LLU;

	t60 = (((x3533*x3534)-x3535)>>x3536);

	if (t60 != 2147418113LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x3613 = UINT8_MAX;
	int8_t x3614 = INT8_MIN;
	uint64_t x3615 = 113084940LLU;
	uint16_t x3616 = 12U;
	volatile uint64_t t61 = 604164940LLU;

	t61 = (((x3613*x3614)-x3615)>>x3616);

	if (t61 != 4503599627342879LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x3657 = UINT32_MAX;
	int8_t x3659 = INT8_MAX;
	static uint32_t t62 = 89504992U;

	t62 = (((x3657*x3658)-x3659)>>x3660);

	if (t62 != 255U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x3753 = INT8_MIN;
	static volatile int8_t x3754 = INT8_MIN;
	uint8_t x3756 = 3U;

	t63 = (((x3753*x3754)-x3755)>>x3756);

	if (t63 != 2034) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x3849 = 1327U;
	volatile uint32_t x3851 = UINT32_MAX;
	static uint8_t x3852 = 1U;

	t64 = (((x3849*x3850)-x3851)>>x3852);

	if (t64 != 2147398720U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x3910 = INT16_MIN;
	static uint8_t x3911 = 29U;
	uint8_t x3912 = 21U;
	static int32_t t65 = -1750023;

	t65 = (((x3909*x3910)-x3911)>>x3912);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x4021 = -12;
	int8_t x4023 = -1;
	uint8_t x4024 = 6U;

	t66 = (((x4021*x4022)-x4023)>>x4024);

	if (t66 != 288230376151711501LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x4057 = UINT32_MAX;
	uint32_t x4058 = 20U;
	uint8_t x4060 = 0U;
	volatile uint32_t t67 = 6465U;

	t67 = (((x4057*x4058)-x4059)>>x4060);

	if (t67 != 2147483628U) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x4245 = UINT8_MAX;
	static volatile uint64_t x4246 = 498194LLU;
	int8_t x4247 = INT8_MIN;
	uint8_t x4248 = 10U;
	uint64_t t68 = 912145588483008LLU;

	t68 = (((x4245*x4246)-x4247)>>x4248);

	if (t68 != 124062LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x4313 = -4246LL;
	int16_t x4314 = INT16_MIN;
	uint16_t x4315 = 5U;
	int16_t x4316 = 10;

	t69 = (((x4313*x4314)-x4315)>>x4316);

	if (t69 != 135871LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x4389 = -1;
	static int8_t x4390 = INT8_MIN;
	uint16_t x4391 = 97U;
	static uint8_t x4392 = 0U;
	static volatile int32_t t70 = -191838;

	t70 = (((x4389*x4390)-x4391)>>x4392);

	if (t70 != 31) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x4397 = 0;
	volatile int16_t x4398 = -1;
	int32_t x4399 = -1;

	t71 = (((x4397*x4398)-x4399)>>x4400);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x4401 = INT16_MIN;
	int8_t x4403 = -11;
	int32_t t72 = 11;

	t72 = (((x4401*x4402)-x4403)>>x4404);

	if (t72 != 32779) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x4445 = 7158229LLU;
	uint32_t x4447 = UINT32_MAX;
	volatile uint64_t t73 = 13004465032LLU;

	t73 = (((x4445*x4446)-x4447)>>x4448);

	if (t73 != 2251799813148726LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x4449 = 4U;
	static uint16_t x4450 = UINT16_MAX;
	int16_t x4451 = -1;
	static uint16_t x4452 = 12U;
	volatile int32_t t74 = -893;

	t74 = (((x4449*x4450)-x4451)>>x4452);

	if (t74 != 63) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x4453 = -4;
	volatile uint64_t x4454 = 389651508795897626LLU;
	int32_t x4455 = -123082361;
	int8_t x4456 = 0;
	volatile uint64_t t75 = 125734795410703703LLU;

	t75 = (((x4453*x4454)-x4455)>>x4456);

	if (t75 != 16888138038649043473LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint64_t x4486 = UINT64_MAX;
	int8_t x4487 = 1;
	volatile uint32_t x4488 = 17U;
	uint64_t t76 = 241LLU;

	t76 = (((x4485*x4486)-x4487)>>x4488);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x4506 = UINT64_MAX;
	int32_t x4507 = INT32_MAX;
	static volatile uint64_t t77 = 10477155915LLU;

	t77 = (((x4505*x4506)-x4507)>>x4508);

	if (t77 != 70368744169471LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x4689 = 346225533LL;
	uint32_t x4690 = 3699014U;
	volatile int32_t x4691 = 2724299;
	volatile int16_t x4692 = 56;
	int64_t t78 = -744250252307LL;

	t78 = (((x4689*x4690)-x4691)>>x4692);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x4721 = 220LLU;
	static uint32_t x4722 = 63386821U;
	uint32_t x4723 = 530U;
	uint64_t x4724 = 0LLU;
	volatile uint64_t t79 = 193368024450LLU;

	t79 = (((x4721*x4722)-x4723)>>x4724);

	if (t79 != 13945100090LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x4805 = 1;
	int32_t x4806 = -44701;
	volatile uint64_t x4807 = 529809619035LLU;
	volatile uint64_t t80 = 78884857435522LLU;

	t80 = (((x4805*x4806)-x4807)>>x4808);

	if (t80 != 17179868690LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x4817 = INT8_MAX;
	int8_t x4818 = INT8_MAX;
	uint32_t x4820 = 1U;
	volatile int32_t t81 = -635851;

	t81 = (((x4817*x4818)-x4819)>>x4820);

	if (t81 != 8065) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x4829 = 664763U;
	uint16_t x4830 = 768U;
	int64_t x4831 = -5351387067LL;

	t82 = (((x4829*x4830)-x4831)>>x4832);

	if (t82 != 2930962525LL) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint32_t x4877 = 11712U;
	uint64_t x4879 = UINT64_MAX;
	volatile int8_t x4880 = 1;
	static uint64_t t83 = 303700351445103073LLU;

	t83 = (((x4877*x4878)-x4879)>>x4880);

	if (t83 != 743712LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x4897 = INT16_MAX;
	uint16_t x4898 = 0U;
	int32_t x4899 = -1;
	int32_t t84 = -2;

	t84 = (((x4897*x4898)-x4899)>>x4900);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x4917 = 2002284U;
	static uint32_t x4918 = 969732U;
	int32_t x4919 = INT32_MIN;
	int8_t x4920 = 3;
	static volatile uint32_t t85 = 9421U;

	t85 = (((x4917*x4918)-x4919)>>x4920);

	if (t85 != 312641718U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x5078 = INT8_MIN;
	uint32_t x5079 = 3868U;
	uint8_t x5080 = 2U;
	volatile uint64_t t86 = 1906158330354874LLU;

	t86 = (((x5077*x5078)-x5079)>>x5080);

	if (t86 != 4611685974142700793LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x5130 = INT8_MAX;
	static int8_t x5131 = INT8_MIN;
	int8_t x5132 = 1;
	uint64_t t87 = 2944262184LLU;

	t87 = (((x5129*x5130)-x5131)>>x5132);

	if (t87 != 1615377LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x5153 = INT16_MAX;
	volatile int8_t x5154 = INT8_MAX;
	int8_t x5155 = -1;
	uint16_t x5156 = 9U;
	int32_t t88 = -2737;

	t88 = (((x5153*x5154)-x5155)>>x5156);

	if (t88 != 8127) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x5181 = INT32_MIN;
	uint8_t x5184 = 3U;

	t89 = (((x5181*x5182)-x5183)>>x5184);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x5185 = -5693962541600LL;
	static int16_t x5186 = -1;
	static uint8_t x5188 = 3U;
	volatile int64_t t90 = -2722LL;

	t90 = (((x5185*x5186)-x5187)>>x5188);

	if (t90 != 711745317700LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x5209 = 12;
	static uint16_t x5210 = 23829U;
	static uint32_t x5211 = UINT32_MAX;
	static volatile uint32_t t91 = 22482U;

	t91 = (((x5209*x5210)-x5211)>>x5212);

	if (t91 != 285949U) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint64_t x5245 = 664708283LLU;
	int8_t x5246 = INT8_MIN;
	static int32_t x5247 = -3;
	volatile uint16_t x5248 = 4U;
	uint64_t t92 = 229LLU;

	t92 = (((x5245*x5246)-x5247)>>x5248);

	if (t92 != 1152921499289180712LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x5325 = 89816LLU;
	volatile int64_t x5326 = -1LL;
	static int64_t x5327 = INT64_MIN;
	uint16_t x5328 = 58U;
	uint64_t t93 = 3794046679650691LLU;

	t93 = (((x5325*x5326)-x5327)>>x5328);

	if (t93 != 31LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x5341 = INT16_MAX;
	volatile int16_t x5342 = INT16_MAX;
	int32_t x5343 = 4993122;
	int32_t x5344 = 0;
	volatile int32_t t94 = -1258;

	t94 = (((x5341*x5342)-x5343)>>x5344);

	if (t94 != 1068683167) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x5349 = INT8_MIN;
	static uint64_t t95 = 3787175086LLU;

	t95 = (((x5349*x5350)-x5351)>>x5352);

	if (t95 != 1149290643893934600LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x5353 = 2189;
	uint32_t x5354 = UINT32_MAX;
	int16_t x5355 = INT16_MIN;
	uint8_t x5356 = 2U;
	static volatile uint32_t t96 = 56631U;

	t96 = (((x5353*x5354)-x5355)>>x5356);

	if (t96 != 7644U) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x5462 = UINT8_MAX;
	int32_t x5463 = INT32_MIN;
	static int32_t t97 = 10286;

	t97 = (((x5461*x5462)-x5463)>>x5464);

	if (t97 != 2088992) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x5493 = UINT64_MAX;
	static uint16_t x5495 = 1726U;
	volatile uint8_t x5496 = 15U;
	uint64_t t98 = 1656797883603LLU;

	t98 = (((x5493*x5494)-x5495)>>x5496);

	if (t98 != 281474976710655LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint64_t x5561 = 7530907055954LLU;
	int64_t x5563 = -1LL;
	volatile int8_t x5564 = 52;

	t99 = (((x5561*x5562)-x5563)>>x5564);

	if (t99 != 4095LLU) { NG(); } else { ; }
	
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


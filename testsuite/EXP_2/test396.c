#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 128679LLU;
uint16_t x35 = 1253U;
int32_t x109 = -1;
volatile uint16_t x128 = 44U;
int64_t x199 = -598038613611730LL;
volatile uint16_t x266 = 32U;
volatile uint8_t x268 = 6U;
static int32_t t7 = -229991;
static uint16_t x299 = 293U;
int8_t x347 = -3;
uint8_t x348 = 12U;
volatile int16_t x361 = INT16_MIN;
int16_t x362 = -2;
uint64_t x405 = 135LLU;
volatile int8_t x417 = INT8_MIN;
static int32_t x419 = INT32_MAX;
int8_t x574 = 14;
int64_t x575 = 134132147434LL;
static int16_t x643 = INT16_MAX;
uint64_t t17 = 1824165742LLU;
static uint64_t x750 = 3376LLU;
volatile uint16_t x752 = 21U;
uint64_t x835 = UINT64_MAX;
volatile int16_t x862 = 9;
int32_t t21 = 516461834;
static uint8_t x925 = 16U;
int32_t x926 = INT32_MIN;
volatile uint64_t t24 = 50898685854365385LLU;
volatile uint32_t t26 = 426380U;
uint8_t x1399 = 2U;
uint64_t x1406 = UINT64_MAX;
uint32_t x1407 = 1784043U;
static volatile uint64_t t28 = 1382259251697338LLU;
uint8_t x1704 = 28U;
volatile uint64_t t32 = 548841708626542018LLU;
int8_t x2218 = INT8_MIN;
uint16_t x2220 = 19U;
int16_t x2255 = INT16_MIN;
int8_t x2256 = 0;
volatile int8_t x2276 = 17;
volatile uint8_t x2325 = UINT8_MAX;
static uint32_t x2327 = UINT32_MAX;
uint8_t x2328 = 3U;
volatile uint32_t x2410 = 6154925U;
static volatile int8_t x2622 = INT8_MIN;
int32_t x2726 = INT32_MIN;
int32_t x2841 = -234464175;
volatile uint32_t x2842 = 704691U;
uint16_t x2843 = 7U;
volatile uint32_t t47 = 176U;
static int16_t x3042 = -1;
volatile uint64_t x3044 = 6LLU;
int64_t t49 = 5LL;
uint64_t x3058 = 2077968192LLU;
int64_t t52 = 2401LL;
uint32_t x3261 = 4U;
uint32_t x3263 = UINT32_MAX;
int32_t x3315 = -1;
volatile int32_t t56 = -3;
uint64_t t58 = 750207028143LLU;
uint32_t x3471 = UINT32_MAX;
volatile uint64_t t61 = 34431706284786005LLU;
int64_t x3522 = INT64_MIN;
int16_t x3615 = 61;
static uint32_t x3699 = 1429709384U;
volatile int8_t x3700 = 0;
static volatile uint16_t x3855 = UINT16_MAX;
static uint32_t x4070 = 581031280U;
static int8_t x4072 = 1;
uint16_t x4073 = 0U;
static int32_t t73 = 11890;
static uint64_t x4121 = 9LLU;
int8_t x4122 = -1;
int16_t x4185 = INT16_MIN;
static uint32_t x4289 = 9U;
uint64_t t77 = 230LLU;
static volatile uint32_t t78 = 507361143U;
int64_t x4524 = 34LL;
uint64_t t79 = 924562769575LLU;
uint64_t t80 = 2124230686LLU;
volatile uint32_t x4630 = 16002114U;
static volatile uint8_t x4662 = UINT8_MAX;
volatile int32_t x4693 = INT32_MIN;
volatile uint64_t x4714 = 6484253401095928150LLU;
volatile uint64_t t85 = 205638LLU;
volatile uint32_t t86 = 1590394U;
static int8_t x4883 = INT8_MAX;
volatile int32_t t88 = 3;
int32_t x4949 = INT32_MAX;
uint8_t x4951 = 4U;
volatile int32_t t90 = 1;
int32_t x4961 = INT32_MIN;
int64_t x5093 = INT64_MAX;
static volatile uint64_t x5123 = 109LLU;
int16_t x5251 = INT16_MAX;
uint8_t x5268 = 1U;


void f0(void) {
	int8_t x29 = INT8_MIN;
	uint64_t x30 = 86940LLU;
	int8_t x31 = INT8_MAX;
	uint8_t x32 = 23U;

	t0 = ((x29%(x30*x31))<<x32);

	if (t0 != 38673395482624LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x33 = UINT64_MAX;
	uint64_t x34 = 49842544001090419LLU;
	volatile uint8_t x36 = 1U;
	volatile uint64_t t1 = 324730070564LLU;

	t1 = ((x33%(x34*x35))<<x36);

	if (t1 != 8443586498468542594LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x110 = UINT32_MAX;
	uint8_t x111 = 68U;
	int8_t x112 = 1;
	volatile uint32_t t2 = 1734058980U;

	t2 = ((x109%(x110*x111))<<x112);

	if (t2 != 134U) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x125 = INT8_MAX;
	int64_t x126 = -13844133832LL;
	uint16_t x127 = 8U;
	volatile int64_t t3 = 2632LL;

	t3 = ((x125%(x126*x127))<<x128);

	if (t3 != 2234207627640832LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x153 = 1322494766LL;
	int64_t x154 = INT64_MAX;
	static int16_t x155 = -1;
	int32_t x156 = 9;
	static volatile int64_t t4 = 15308011647LL;

	t4 = ((x153%(x154*x155))<<x156);

	if (t4 != 677117320192LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x197 = 9989;
	int64_t x198 = -1LL;
	uint8_t x200 = 3U;
	volatile int64_t t5 = -179176273614965LL;

	t5 = ((x197%(x198*x199))<<x200);

	if (t5 != 79912LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x209 = INT64_MAX;
	int16_t x210 = 102;
	static volatile uint8_t x211 = 61U;
	uint16_t x212 = 3U;
	static int64_t t6 = 35LL;

	t6 = ((x209%(x210*x211))<<x212);

	if (t6 != 5912LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x265 = INT8_MAX;
	int8_t x267 = -6;

	t7 = ((x265%(x266*x267))<<x268);

	if (t7 != 8128) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x297 = 193764624255960038LL;
	volatile int64_t x298 = 151108176567LL;
	int8_t x300 = 1;
	volatile int64_t t8 = -140006181611924LL;

	t8 = ((x297%(x298*x299))<<x300);

	if (t8 != 37111446805564LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x345 = UINT16_MAX;
	static uint32_t x346 = 2029U;
	static volatile uint32_t t9 = 852400U;

	t9 = ((x345%(x346*x347))<<x348);

	if (t9 != 268431360U) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x363 = 2U;
	uint8_t x364 = 2U;
	volatile int32_t t10 = 61904266;

	t10 = ((x361%(x362*x363))<<x364);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x406 = -1;
	uint8_t x407 = 1U;
	uint16_t x408 = 3U;
	static uint64_t t11 = 82868681982LLU;

	t11 = ((x405%(x406*x407))<<x408);

	if (t11 != 1080LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x413 = INT8_MIN;
	int16_t x414 = 860;
	uint32_t x415 = 1198641636U;
	static int8_t x416 = 0;
	uint32_t t12 = 236U;

	t12 = ((x413%(x414*x415))<<x416);

	if (t12 != 12127808U) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint64_t x418 = 1988LLU;
	uint32_t x420 = 6U;
	uint64_t t13 = 8634LLU;

	t13 = ((x417%(x418*x419))<<x420);

	if (t13 != 178670639422464LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x469 = INT64_MIN;
	uint16_t x470 = 5018U;
	uint64_t x471 = UINT64_MAX;
	static int8_t x472 = 1;
	static uint64_t t14 = 93374479269LLU;

	t14 = ((x469%(x470*x471))<<x472);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x573 = UINT64_MAX;
	static uint16_t x576 = 7U;
	volatile uint64_t t15 = 201200LLU;

	t15 = ((x573%(x574*x575))<<x576);

	if (t15 != 169717733690752LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x641 = INT16_MIN;
	uint32_t x642 = 162872665U;
	static uint16_t x644 = 6U;
	volatile uint32_t t16 = 1U;

	t16 = ((x641%(x642*x643))<<x644);

	if (t16 != 3255785024U) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x677 = 13U;
	int8_t x678 = 1;
	static uint64_t x679 = 123LLU;
	uint16_t x680 = 11U;

	t17 = ((x677%(x678*x679))<<x680);

	if (t17 != 26624LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x713 = INT32_MIN;
	int64_t x714 = INT64_MIN;
	uint64_t x715 = UINT64_MAX;
	int8_t x716 = 0;
	volatile uint64_t t18 = 522614901178102686LLU;

	t18 = ((x713%(x714*x715))<<x716);

	if (t18 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x749 = -478137024LL;
	uint16_t x751 = UINT16_MAX;
	uint64_t t19 = 65376690632344LLU;

	t19 = ((x749%(x750*x751))<<x752);

	if (t19 != 107901221863424LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x833 = 7110800LLU;
	int64_t x834 = INT64_MAX;
	static uint8_t x836 = 7U;
	volatile uint64_t t20 = 3923022LLU;

	t20 = ((x833%(x834*x835))<<x836);

	if (t20 != 910182400LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x861 = UINT16_MAX;
	volatile int16_t x863 = INT16_MIN;
	int32_t x864 = 1;

	t21 = ((x861%(x862*x863))<<x864);

	if (t21 != 131070) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x927 = UINT64_MAX;
	uint16_t x928 = 15U;
	uint64_t t22 = 3487LLU;

	t22 = ((x925%(x926*x927))<<x928);

	if (t22 != 524288LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1085 = -1;
	uint32_t x1086 = 3256U;
	static int16_t x1087 = INT16_MIN;
	static uint8_t x1088 = 16U;
	uint32_t t23 = 1U;

	t23 = ((x1085%(x1086*x1087))<<x1088);

	if (t23 != 4294901760U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1101 = 29895147620016711LLU;
	volatile int32_t x1102 = 79;
	int16_t x1103 = INT16_MIN;
	int8_t x1104 = 7;

	t24 = ((x1101%(x1102*x1103))<<x1104);

	if (t24 != 3826578895362139008LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1129 = 1525285549803LL;
	uint32_t x1130 = 400U;
	static uint64_t x1131 = 1LLU;
	uint16_t x1132 = 0U;
	volatile uint64_t t25 = 920262966LLU;

	t25 = ((x1129%(x1130*x1131))<<x1132);

	if (t25 != 203LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1245 = 441U;
	uint16_t x1246 = UINT16_MAX;
	int16_t x1247 = INT16_MIN;
	uint16_t x1248 = 0U;

	t26 = ((x1245%(x1246*x1247))<<x1248);

	if (t26 != 441U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x1397 = 92U;
	static volatile int16_t x1398 = -1;
	int16_t x1400 = 0;
	volatile int32_t t27 = -244976666;

	t27 = ((x1397%(x1398*x1399))<<x1400);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1405 = 13;
	int8_t x1408 = 0;

	t28 = ((x1405%(x1406*x1407))<<x1408);

	if (t28 != 13LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1413 = INT32_MIN;
	uint64_t x1414 = UINT64_MAX;
	int16_t x1415 = -1;
	uint8_t x1416 = 1U;
	volatile uint64_t t29 = 90941140844LLU;

	t29 = ((x1413%(x1414*x1415))<<x1416);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x1701 = 3713009990774743834LL;
	volatile uint32_t x1702 = UINT32_MAX;
	int16_t x1703 = INT16_MIN;
	static int64_t t30 = 40860090990LL;

	t30 = ((x1701%(x1702*x1703))<<x1704);

	if (t30 != 6810207518720LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1881 = UINT32_MAX;
	int32_t x1882 = -1;
	static int16_t x1883 = 268;
	uint8_t x1884 = 0U;
	volatile uint32_t t31 = 0U;

	t31 = ((x1881%(x1882*x1883))<<x1884);

	if (t31 != 267U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x2169 = 9151;
	static uint64_t x2170 = UINT64_MAX;
	static int64_t x2171 = INT64_MIN;
	int8_t x2172 = 0;

	t32 = ((x2169%(x2170*x2171))<<x2172);

	if (t32 != 9151LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x2197 = INT8_MAX;
	int64_t x2198 = -39104LL;
	uint32_t x2199 = 4624617U;
	volatile int8_t x2200 = 19;
	volatile int64_t t33 = 788762606698695LL;

	t33 = ((x2197%(x2198*x2199))<<x2200);

	if (t33 != 66584576LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x2217 = 23244080LLU;
	int64_t x2219 = 1979554108LL;
	volatile uint64_t t34 = 24565418546747LLU;

	t34 = ((x2217%(x2218*x2219))<<x2220);

	if (t34 != 12186592215040LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x2225 = UINT32_MAX;
	uint32_t x2226 = UINT32_MAX;
	int8_t x2227 = INT8_MAX;
	volatile uint32_t x2228 = 20U;
	static volatile uint32_t t35 = 3U;

	t35 = ((x2225%(x2226*x2227))<<x2228);

	if (t35 != 132120576U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x2253 = 703;
	uint8_t x2254 = 1U;
	int32_t t36 = 1;

	t36 = ((x2253%(x2254*x2255))<<x2256);

	if (t36 != 703) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x2273 = 5845437791042LLU;
	int64_t x2274 = -1LL;
	int32_t x2275 = -1316;
	volatile uint64_t t37 = 7106343415700LLU;

	t37 = ((x2273%(x2274*x2275))<<x2276);

	if (t37 != 115081216LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2326 = -1;
	volatile uint32_t t38 = 0U;

	t38 = ((x2325%(x2326*x2327))<<x2328);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x2369 = 15452U;
	int32_t x2370 = -14723;
	volatile uint64_t x2371 = 5LLU;
	uint16_t x2372 = 27U;
	uint64_t t39 = 294253033219979LLU;

	t39 = ((x2369%(x2370*x2371))<<x2372);

	if (t39 != 2073932333056LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x2409 = 62U;
	uint64_t x2411 = 67209225112LLU;
	int8_t x2412 = 1;
	volatile uint64_t t40 = 640926398912689LLU;

	t40 = ((x2409%(x2410*x2411))<<x2412);

	if (t40 != 124LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x2613 = 5;
	static int16_t x2614 = INT16_MIN;
	static volatile int32_t x2615 = -1;
	volatile uint16_t x2616 = 0U;
	int32_t t41 = 1;

	t41 = ((x2613%(x2614*x2615))<<x2616);

	if (t41 != 5) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x2617 = UINT32_MAX;
	int8_t x2618 = -41;
	int64_t x2619 = 1703030816048719LL;
	uint8_t x2620 = 0U;
	volatile int64_t t42 = 263811LL;

	t42 = ((x2617%(x2618*x2619))<<x2620);

	if (t42 != 4294967295LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2621 = INT16_MAX;
	volatile uint32_t x2623 = 745819U;
	uint8_t x2624 = 2U;
	volatile uint32_t t43 = 6857596U;

	t43 = ((x2621%(x2622*x2623))<<x2624);

	if (t43 != 131068U) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x2725 = INT16_MIN;
	volatile uint64_t x2727 = 6021LLU;
	uint8_t x2728 = 2U;
	uint64_t t44 = 2244LLU;

	t44 = ((x2725%(x2726*x2727))<<x2728);

	if (t44 != 51719996047360LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2753 = 11;
	int64_t x2754 = -132091LL;
	uint16_t x2755 = 17134U;
	uint8_t x2756 = 51U;
	int64_t t45 = -9609940186634206LL;

	t45 = ((x2753%(x2754*x2755))<<x2756);

	if (t45 != 24769797950537728LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x2817 = INT32_MAX;
	int64_t x2818 = -1LL;
	int8_t x2819 = 1;
	uint8_t x2820 = 2U;
	int64_t t46 = 156LL;

	t46 = ((x2817%(x2818*x2819))<<x2820);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x2844 = 7U;

	t47 = ((x2841%(x2842*x2843))<<x2844);

	if (t47 != 99618560U) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x2893 = -1;
	static uint32_t x2894 = UINT32_MAX;
	static uint32_t x2895 = 51880U;
	uint8_t x2896 = 5U;
	uint32_t t48 = 14U;

	t48 = ((x2893%(x2894*x2895))<<x2896);

	if (t48 != 1660128U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x3041 = 1U;
	static int64_t x3043 = 220454LL;

	t49 = ((x3041%(x3042*x3043))<<x3044);

	if (t49 != 64LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x3057 = INT8_MIN;
	int16_t x3059 = -15;
	static uint16_t x3060 = 1U;
	volatile uint64_t t50 = 598266452037LLU;

	t50 = ((x3057%(x3058*x3059))<<x3060);

	if (t50 != 62339045504LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x3145 = INT64_MAX;
	uint8_t x3146 = 2U;
	static uint16_t x3147 = 103U;
	volatile uint8_t x3148 = 12U;
	int64_t t51 = 17754038LL;

	t51 = ((x3145%(x3146*x3147))<<x3148);

	if (t51 != 741376LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x3193 = INT64_MIN;
	static int8_t x3194 = INT8_MIN;
	int8_t x3195 = INT8_MIN;
	int8_t x3196 = 16;

	t52 = ((x3193%(x3194*x3195))<<x3196);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x3205 = INT16_MIN;
	int8_t x3206 = 7;
	uint32_t x3207 = UINT32_MAX;
	int32_t x3208 = 0;
	static uint32_t t53 = 1538865114U;

	t53 = ((x3205%(x3206*x3207))<<x3208);

	if (t53 != 4294934528U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x3262 = INT32_MIN;
	uint16_t x3264 = 4U;
	volatile uint32_t t54 = 43U;

	t54 = ((x3261%(x3262*x3263))<<x3264);

	if (t54 != 64U) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x3309 = 28;
	int64_t x3310 = -1LL;
	static int16_t x3311 = INT16_MAX;
	uint16_t x3312 = 6U;
	volatile int64_t t55 = -36LL;

	t55 = ((x3309%(x3310*x3311))<<x3312);

	if (t55 != 1792LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x3313 = UINT16_MAX;
	int16_t x3314 = -2;
	int64_t x3316 = 6LL;

	t56 = ((x3313%(x3314*x3315))<<x3316);

	if (t56 != 64) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x3377 = -1LL;
	uint64_t x3378 = UINT64_MAX;
	static uint16_t x3379 = 1715U;
	static uint32_t x3380 = 36U;
	uint64_t t57 = 61871321963LLU;

	t57 = ((x3377%(x3378*x3379))<<x3380);

	if (t57 != 117785183125504LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x3417 = 1;
	static int16_t x3418 = -1;
	uint64_t x3419 = 9LLU;
	int16_t x3420 = 0;

	t58 = ((x3417%(x3418*x3419))<<x3420);

	if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x3421 = INT64_MAX;
	int8_t x3422 = 1;
	volatile uint32_t x3423 = 32401U;
	uint8_t x3424 = 30U;
	int64_t t59 = 453566296412LL;

	t59 = ((x3421%(x3422*x3423))<<x3424);

	if (t59 != 10538776002560LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x3469 = -1;
	volatile int32_t x3470 = -1;
	uint8_t x3472 = 1U;
	volatile uint32_t t60 = 10347U;

	t60 = ((x3469%(x3470*x3471))<<x3472);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x3489 = -1;
	uint64_t x3490 = UINT64_MAX;
	static int32_t x3491 = -1;
	int8_t x3492 = 17;

	t61 = ((x3489%(x3490*x3491))<<x3492);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x3521 = 20048U;
	int16_t x3523 = 1;
	uint8_t x3524 = 22U;
	volatile int64_t t62 = 531821954LL;

	t62 = ((x3521%(x3522*x3523))<<x3524);

	if (t62 != 84087406592LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x3533 = -1;
	int8_t x3534 = -1;
	static volatile uint32_t x3535 = 59U;
	volatile uint32_t x3536 = 14U;
	static uint32_t t63 = 28U;

	t63 = ((x3533%(x3534*x3535))<<x3536);

	if (t63 != 950272U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x3581 = INT16_MIN;
	int8_t x3582 = INT8_MIN;
	static uint32_t x3583 = UINT32_MAX;
	int16_t x3584 = 1;
	uint32_t t64 = 911U;

	t64 = ((x3581%(x3582*x3583))<<x3584);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x3613 = 14906U;
	uint32_t x3614 = 3966U;
	uint8_t x3616 = 31U;
	volatile uint32_t t65 = 31962U;

	t65 = ((x3613%(x3614*x3615))<<x3616);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x3697 = 0U;
	volatile uint8_t x3698 = 7U;
	volatile uint32_t t66 = 8189U;

	t66 = ((x3697%(x3698*x3699))<<x3700);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x3701 = 1U;
	volatile int16_t x3702 = -1;
	uint64_t x3703 = 17257LLU;
	int8_t x3704 = 3;
	uint64_t t67 = 192854276059489LLU;

	t67 = ((x3701%(x3702*x3703))<<x3704);

	if (t67 != 8LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x3853 = 3373;
	uint16_t x3854 = 16U;
	int8_t x3856 = 0;
	volatile int32_t t68 = 380444;

	t68 = ((x3853%(x3854*x3855))<<x3856);

	if (t68 != 3373) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x3857 = INT8_MAX;
	static volatile int16_t x3858 = 3803;
	volatile uint16_t x3859 = 1460U;
	static uint8_t x3860 = 9U;
	int32_t t69 = 205;

	t69 = ((x3857%(x3858*x3859))<<x3860);

	if (t69 != 65024) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x3873 = INT8_MAX;
	int16_t x3874 = INT16_MIN;
	uint16_t x3875 = UINT16_MAX;
	int16_t x3876 = 3;
	volatile int32_t t70 = 1015565;

	t70 = ((x3873%(x3874*x3875))<<x3876);

	if (t70 != 1016) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x4057 = -2;
	uint64_t x4058 = 120394944LLU;
	static volatile int16_t x4059 = INT16_MAX;
	uint32_t x4060 = 3U;
	uint64_t t71 = 169LLU;

	t71 = ((x4057%(x4058*x4059))<<x4060);

	if (t71 != 3797293707760LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x4069 = INT16_MIN;
	int8_t x4071 = -1;
	volatile uint32_t t72 = 3426U;

	t72 = ((x4069%(x4070*x4071))<<x4072);

	if (t72 != 1161997024U) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x4074 = UINT8_MAX;
	int16_t x4075 = INT16_MIN;
	uint8_t x4076 = 7U;

	t73 = ((x4073%(x4074*x4075))<<x4076);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x4123 = 3U;
	int16_t x4124 = 1;
	uint64_t t74 = 92LLU;

	t74 = ((x4121%(x4122*x4123))<<x4124);

	if (t74 != 18LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x4186 = INT32_MAX;
	uint64_t x4187 = 95235483897LLU;
	int16_t x4188 = 1;
	static volatile uint64_t t75 = 2243761131LLU;

	t75 = ((x4185%(x4186*x4187))<<x4188);

	if (t75 != 1639379760465216870LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x4245 = 7U;
	int64_t x4246 = 1133080988657LL;
	int32_t x4247 = -19686;
	int8_t x4248 = 1;
	static volatile int64_t t76 = -1128LL;

	t76 = ((x4245%(x4246*x4247))<<x4248);

	if (t76 != 14LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x4290 = UINT64_MAX;
	uint32_t x4291 = 867476U;
	static int16_t x4292 = 31;

	t77 = ((x4289%(x4290*x4291))<<x4292);

	if (t77 != 19327352832LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x4461 = INT16_MIN;
	int16_t x4462 = 45;
	uint32_t x4463 = 700346712U;
	uint8_t x4464 = 1U;

	t78 = ((x4461%(x4462*x4463))<<x4464);

	if (t78 != 2786545184U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x4521 = 5146834938880106LLU;
	static volatile int32_t x4522 = INT32_MIN;
	uint64_t x4523 = 5774069LLU;

	t79 = ((x4521%(x4522*x4523))<<x4524);

	if (t79 != 10448212219077328896LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x4581 = 105U;
	uint64_t x4582 = 184994232400682078LLU;
	uint32_t x4583 = 7011U;
	int16_t x4584 = 3;

	t80 = ((x4581%(x4582*x4583))<<x4584);

	if (t80 != 840LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x4629 = -3720;
	uint32_t x4631 = 8U;
	uint8_t x4632 = 3U;
	uint32_t t81 = 1014417576U;

	t81 = ((x4629%(x4630*x4631))<<x4632);

	if (t81 != 563243840U) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x4661 = 0U;
	volatile int8_t x4663 = -4;
	static int8_t x4664 = 7;
	static int32_t t82 = -3355;

	t82 = ((x4661%(x4662*x4663))<<x4664);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x4694 = UINT8_MAX;
	uint64_t x4695 = 83LLU;
	int8_t x4696 = 2;
	uint64_t t83 = 60727186654457094LLU;

	t83 = ((x4693%(x4694*x4695))<<x4696);

	if (t83 != 84152LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x4697 = UINT8_MAX;
	static volatile uint8_t x4698 = 13U;
	int64_t x4699 = 3956036837053710LL;
	uint8_t x4700 = 3U;
	int64_t t84 = -20777283468772LL;

	t84 = ((x4697%(x4698*x4699))<<x4700);

	if (t84 != 2040LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x4713 = -38;
	int8_t x4715 = -1;
	uint16_t x4716 = 36U;

	t85 = ((x4713%(x4714*x4715))<<x4716);

	if (t85 != 16073227223317872640LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x4857 = -1;
	uint32_t x4858 = 1355341229U;
	volatile int16_t x4859 = 4;
	int16_t x4860 = 1;

	t86 = ((x4857%(x4858*x4859))<<x4860);

	if (t86 != 1831548870U) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x4881 = UINT8_MAX;
	static volatile int8_t x4882 = INT8_MIN;
	static uint64_t x4884 = 21LLU;
	int32_t t87 = 1181;

	t87 = ((x4881%(x4882*x4883))<<x4884);

	if (t87 != 534773760) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x4905 = INT16_MAX;
	int8_t x4906 = 7;
	static int8_t x4907 = INT8_MIN;
	volatile uint8_t x4908 = 0U;

	t88 = ((x4905%(x4906*x4907))<<x4908);

	if (t88 != 511) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x4909 = UINT32_MAX;
	volatile int8_t x4910 = INT8_MIN;
	int64_t x4911 = -1LL;
	static uint16_t x4912 = 5U;
	int64_t t89 = 2071LL;

	t89 = ((x4909%(x4910*x4911))<<x4912);

	if (t89 != 4064LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x4950 = INT16_MAX;
	static int16_t x4952 = 0;

	t90 = ((x4949%(x4950*x4951))<<x4952);

	if (t90 != 65535) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int32_t x4962 = -1;
	uint64_t x4963 = 10LLU;
	int8_t x4964 = 14;
	uint64_t t91 = 45LLU;

	t91 = ((x4961%(x4962*x4963))<<x4964);

	if (t91 != 18446708889337462784LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x5009 = INT16_MIN;
	static uint64_t x5010 = UINT64_MAX;
	volatile int16_t x5011 = 2493;
	uint16_t x5012 = 0U;
	uint64_t t92 = 855LLU;

	t92 = ((x5009%(x5010*x5011))<<x5012);

	if (t92 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x5094 = 294797493;
	uint64_t x5095 = UINT64_MAX;
	uint8_t x5096 = 40U;
	volatile uint64_t t93 = 104293LLU;

	t93 = ((x5093%(x5094*x5095))<<x5096);

	if (t93 != 18446742974197923840LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x5121 = UINT8_MAX;
	uint16_t x5122 = 12826U;
	static volatile int8_t x5124 = 1;
	uint64_t t94 = 6613603621597547776LLU;

	t94 = ((x5121%(x5122*x5123))<<x5124);

	if (t94 != 510LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x5169 = UINT64_MAX;
	static int32_t x5170 = -1;
	int32_t x5171 = -1;
	static uint16_t x5172 = 29U;
	volatile uint64_t t95 = 17007016031LLU;

	t95 = ((x5169%(x5170*x5171))<<x5172);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x5177 = UINT16_MAX;
	int64_t x5178 = -13946LL;
	static int16_t x5179 = INT16_MIN;
	uint8_t x5180 = 2U;
	volatile int64_t t96 = 1620890166LL;

	t96 = ((x5177%(x5178*x5179))<<x5180);

	if (t96 != 262140LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x5249 = 127U;
	uint64_t x5250 = UINT64_MAX;
	uint64_t x5252 = 10LLU;
	uint64_t t97 = 10LLU;

	t97 = ((x5249%(x5250*x5251))<<x5252);

	if (t97 != 130048LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x5265 = UINT8_MAX;
	volatile uint8_t x5266 = UINT8_MAX;
	volatile uint16_t x5267 = UINT16_MAX;
	int32_t t98 = -1130383;

	t98 = ((x5265%(x5266*x5267))<<x5268);

	if (t98 != 510) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x5269 = UINT16_MAX;
	uint64_t x5270 = 13LLU;
	volatile uint8_t x5271 = 1U;
	uint64_t x5272 = 9LLU;
	uint64_t t99 = 152LLU;

	t99 = ((x5269%(x5270*x5271))<<x5272);

	if (t99 != 1024LLU) { NG(); } else { ; }
	
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


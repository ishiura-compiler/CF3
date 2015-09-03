#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint16_t x109 = 3595U;
int16_t x112 = 1;
static int8_t x206 = -3;
int16_t x239 = 3;
uint64_t x298 = UINT64_MAX;
int8_t x579 = -5;
int8_t x580 = 7;
static volatile int32_t t9 = -1997220;
int32_t x716 = 0;
int64_t x762 = INT64_MIN;
int16_t x943 = -1;
int16_t x949 = INT16_MAX;
static volatile uint8_t x1056 = 3U;
volatile uint8_t x1058 = 127U;
uint8_t x1060 = 2U;
int32_t t18 = -2;
static int32_t t19 = 31;
uint16_t x1136 = 47U;
int16_t x1375 = INT16_MAX;
int16_t x1497 = 29;
volatile uint16_t x1498 = 38U;
static uint64_t x1597 = UINT64_MAX;
int64_t x1598 = -1LL;
volatile uint8_t x1652 = 1U;
int32_t t27 = 7;
volatile uint32_t t29 = 271813U;
volatile int64_t x1931 = INT64_MIN;
uint8_t x1980 = 9U;
uint8_t x2171 = 100U;
uint8_t x2172 = 1U;
uint32_t t38 = UINT32_MAX;
int8_t x2638 = INT8_MIN;
volatile uint64_t x2640 = 1LLU;
static int64_t x2690 = INT64_MIN;
static uint8_t x2692 = 5U;
volatile int32_t t42 = 0;
static uint16_t x2897 = 1U;
int32_t x2899 = INT32_MIN;
int8_t x3025 = INT8_MAX;
static int32_t x3067 = INT32_MIN;
static int64_t x3267 = 239062351LL;
static uint8_t x3325 = UINT8_MAX;
int32_t t51 = 1778165;
volatile int32_t t53 = -867;
uint32_t x3377 = 807U;
uint32_t x3419 = UINT32_MAX;
uint8_t x3420 = 0U;
static uint8_t x3422 = 3U;
static volatile int32_t t56 = 222526;
uint16_t x3629 = 1U;
static uint8_t x3631 = UINT8_MAX;
static volatile int32_t t59 = -34261;
volatile int64_t x3651 = -3280551LL;
int8_t x3652 = 3;
volatile uint64_t t60 = 9751208198436LLU;
int8_t x3675 = -1;
uint16_t x3699 = UINT16_MAX;
int16_t x3843 = INT16_MIN;
volatile int32_t t64 = 31054060;
int32_t x3862 = -1;
volatile uint16_t x3910 = 567U;
uint32_t t68 = 33U;
uint8_t x3952 = 1U;
static uint32_t x4028 = 1U;
volatile int64_t x4101 = 5802693696182LL;
uint8_t x4244 = 3U;
volatile int16_t x4613 = 15439;
uint16_t x4793 = 30833U;
int16_t x4826 = INT16_MAX;
int32_t x4923 = INT32_MIN;
static uint32_t t79 = 6797U;
int32_t x4955 = -474828552;
uint8_t x4961 = 1U;
volatile uint8_t x4962 = 28U;
static uint32_t x5050 = UINT32_MAX;
volatile int32_t t82 = -11;
static uint64_t x5079 = 51047236LLU;
uint16_t x5085 = 283U;
volatile int8_t x5087 = INT8_MIN;
static volatile int32_t t84 = 570558;
static int32_t t86 = -2601;
volatile uint32_t x5233 = 42U;
int8_t x5251 = INT8_MAX;
int8_t x5252 = 9;
int32_t t88 = -137;
int32_t t89 = -16545;
int32_t x5275 = INT32_MIN;
volatile int32_t t92 = 984172;
uint32_t x5453 = 659692U;
volatile uint32_t t93 = 21499U;
uint32_t x5505 = 4631U;
uint32_t t94 = 1471122867U;
static int16_t x5530 = -1;
uint64_t x5531 = 28939871210415LLU;
int64_t x5585 = 0LL;
static volatile int64_t x5587 = 5921180LL;
int16_t x5593 = 7;
int32_t x5594 = 7;
uint32_t x5597 = 5U;


void f0(void) {
	volatile uint8_t x110 = UINT8_MAX;
	uint16_t x111 = UINT16_MAX;
	volatile int32_t t0 = -14901199;

	t0 = (x109<<((x110==x111)+x112));

	if (t0 != 7190) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x149 = 131858883;
	int32_t x150 = INT32_MIN;
	int64_t x151 = -11758990LL;
	uint16_t x152 = 0U;
	volatile int32_t t1 = 3;

	t1 = (x149<<((x150==x151)+x152));

	if (t1 != 131858883) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x189 = 1988198LLU;
	uint64_t x190 = 553426LLU;
	volatile uint64_t x191 = 483713894678LLU;
	static volatile uint16_t x192 = 15U;
	static volatile uint64_t t2 = 29241479575335495LLU;

	t2 = (x189<<((x190==x191)+x192));

	if (t2 != 65149272064LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x205 = 14;
	uint8_t x207 = UINT8_MAX;
	uint8_t x208 = 7U;
	int32_t t3 = 181405326;

	t3 = (x205<<((x206==x207)+x208));

	if (t3 != 1792) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x237 = UINT32_MAX;
	int8_t x238 = 0;
	int8_t x240 = 1;
	volatile uint32_t t4 = 712U;

	t4 = (x237<<((x238==x239)+x240));

	if (t4 != 4294967294U) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x297 = 2805937120364197LLU;
	volatile int8_t x299 = INT8_MIN;
	uint8_t x300 = 4U;
	volatile uint64_t t5 = 12783249571LLU;

	t5 = (x297<<((x298==x299)+x300));

	if (t5 != 44894993925827152LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x417 = 1U;
	int16_t x418 = 0;
	static int64_t x419 = INT64_MIN;
	int8_t x420 = 0;
	volatile int32_t t6 = 57338881;

	t6 = (x417<<((x418==x419)+x420));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x465 = UINT32_MAX;
	uint32_t x466 = 14234227U;
	int16_t x467 = INT16_MIN;
	volatile int8_t x468 = 6;
	uint32_t t7 = 4799U;

	t7 = (x465<<((x466==x467)+x468));

	if (t7 != 4294967232U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x529 = INT16_MAX;
	volatile int64_t x530 = -1LL;
	int32_t x531 = INT32_MIN;
	int8_t x532 = 3;
	static int32_t t8 = -285;

	t8 = (x529<<((x530==x531)+x532));

	if (t8 != 262136) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x577 = 524U;
	volatile int64_t x578 = INT64_MAX;

	t9 = (x577<<((x578==x579)+x580));

	if (t9 != 67072) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x693 = UINT8_MAX;
	uint8_t x694 = UINT8_MAX;
	static int32_t x695 = 3346;
	int8_t x696 = 10;
	int32_t t10 = 1;

	t10 = (x693<<((x694==x695)+x696));

	if (t10 != 261120) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x713 = INT32_MAX;
	int32_t x714 = -1;
	uint16_t x715 = UINT16_MAX;
	volatile int32_t t11 = INT32_MAX;

	t11 = (x713<<((x714==x715)+x716));

	if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x761 = UINT8_MAX;
	uint16_t x763 = 15831U;
	uint16_t x764 = 5U;
	volatile int32_t t12 = -833354146;

	t12 = (x761<<((x762==x763)+x764));

	if (t12 != 8160) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x941 = 15713533373770003LL;
	uint64_t x942 = UINT64_MAX;
	static uint16_t x944 = 1U;
	volatile int64_t t13 = 4550294136753230429LL;

	t13 = (x941<<((x942==x943)+x944));

	if (t13 != 62854133495080012LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x950 = 3;
	int16_t x951 = -87;
	uint8_t x952 = 0U;
	int32_t t14 = 12953;

	t14 = (x949<<((x950==x951)+x952));

	if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x1049 = 11LL;
	static int32_t x1050 = -1;
	static volatile int8_t x1051 = -1;
	int32_t x1052 = 3;
	int64_t t15 = 8126699884632751LL;

	t15 = (x1049<<((x1050==x1051)+x1052));

	if (t15 != 176LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x1053 = 11550559382985LL;
	volatile int8_t x1054 = 2;
	volatile int8_t x1055 = -1;
	static int64_t t16 = 35083634656LL;

	t16 = (x1053<<((x1054==x1055)+x1056));

	if (t16 != 92404475063880LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x1057 = 6029664729813913LLU;
	int64_t x1059 = 1219LL;
	uint64_t t17 = 969587813711999552LLU;

	t17 = (x1057<<((x1058==x1059)+x1060));

	if (t17 != 24118658919255652LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x1061 = 472760;
	static uint8_t x1062 = 10U;
	int8_t x1063 = INT8_MAX;
	uint8_t x1064 = 3U;

	t18 = (x1061<<((x1062==x1063)+x1064));

	if (t18 != 3782080) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x1069 = 488U;
	volatile uint8_t x1070 = 4U;
	static volatile int16_t x1071 = -1;
	static volatile uint8_t x1072 = 0U;

	t19 = (x1069<<((x1070==x1071)+x1072));

	if (t19 != 488) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x1133 = 8LLU;
	int16_t x1134 = INT16_MIN;
	int32_t x1135 = INT32_MIN;
	uint64_t t20 = 17430493465167455LLU;

	t20 = (x1133<<((x1134==x1135)+x1136));

	if (t20 != 1125899906842624LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x1177 = UINT16_MAX;
	int64_t x1178 = -1216795LL;
	int16_t x1179 = INT16_MIN;
	uint8_t x1180 = 0U;
	volatile int32_t t21 = 75407094;

	t21 = (x1177<<((x1178==x1179)+x1180));

	if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x1373 = 532814452U;
	uint8_t x1374 = 1U;
	static volatile uint16_t x1376 = 5U;
	uint32_t t22 = 4507681U;

	t22 = (x1373<<((x1374==x1375)+x1376));

	if (t22 != 4165160576U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x1401 = UINT64_MAX;
	int64_t x1402 = 53478671067LL;
	volatile uint16_t x1403 = 43U;
	static int8_t x1404 = 1;
	volatile uint64_t t23 = 1446162LLU;

	t23 = (x1401<<((x1402==x1403)+x1404));

	if (t23 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1499 = -507064497;
	int8_t x1500 = 0;
	int32_t t24 = 0;

	t24 = (x1497<<((x1498==x1499)+x1500));

	if (t24 != 29) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x1599 = INT8_MIN;
	volatile uint16_t x1600 = 14U;
	static uint64_t t25 = 615002663024222198LLU;

	t25 = (x1597<<((x1598==x1599)+x1600));

	if (t25 != 18446744073709535232LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1649 = 11U;
	int64_t x1650 = -139619120691601754LL;
	int64_t x1651 = 2LL;
	volatile int32_t t26 = -115055;

	t26 = (x1649<<((x1650==x1651)+x1652));

	if (t26 != 22) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x1729 = 24;
	int32_t x1730 = -1;
	int32_t x1731 = -1;
	uint32_t x1732 = UINT32_MAX;

	t27 = (x1729<<((x1730==x1731)+x1732));

	if (t27 != 24) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1749 = 2064LL;
	uint32_t x1750 = UINT32_MAX;
	int16_t x1751 = -1;
	volatile int8_t x1752 = -1;
	int64_t t28 = 924295LL;

	t28 = (x1749<<((x1750==x1751)+x1752));

	if (t28 != 2064LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1797 = 0U;
	uint64_t x1798 = 23690034469421LLU;
	int16_t x1799 = INT16_MIN;
	uint64_t x1800 = 0LLU;

	t29 = (x1797<<((x1798==x1799)+x1800));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1825 = 24734921069689754LL;
	uint8_t x1826 = UINT8_MAX;
	int32_t x1827 = INT32_MIN;
	int8_t x1828 = 4;
	int64_t t30 = 30372481970091LL;

	t30 = (x1825<<((x1826==x1827)+x1828));

	if (t30 != 395758737115036064LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x1917 = INT64_MAX;
	int32_t x1918 = -1;
	int16_t x1919 = -1;
	int8_t x1920 = -1;
	int64_t t31 = INT64_MAX;

	t31 = (x1917<<((x1918==x1919)+x1920));

	if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x1929 = 115U;
	int16_t x1930 = 1760;
	uint32_t x1932 = 0U;
	static volatile int32_t t32 = -61292;

	t32 = (x1929<<((x1930==x1931)+x1932));

	if (t32 != 115) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x1977 = 1U;
	int16_t x1978 = 0;
	int16_t x1979 = INT16_MIN;
	volatile int32_t t33 = 8;

	t33 = (x1977<<((x1978==x1979)+x1980));

	if (t33 != 512) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x2169 = 142;
	volatile int8_t x2170 = INT8_MAX;
	volatile int32_t t34 = -7;

	t34 = (x2169<<((x2170==x2171)+x2172));

	if (t34 != 284) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x2381 = 13LLU;
	uint64_t x2382 = 16455715493564LLU;
	int64_t x2383 = -1LL;
	volatile uint8_t x2384 = 5U;
	uint64_t t35 = 15977327261LLU;

	t35 = (x2381<<((x2382==x2383)+x2384));

	if (t35 != 416LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x2405 = 279097LLU;
	uint64_t x2406 = 14349932661LLU;
	uint64_t x2407 = 1101LLU;
	volatile int8_t x2408 = 1;
	uint64_t t36 = 2020044763LLU;

	t36 = (x2405<<((x2406==x2407)+x2408));

	if (t36 != 558194LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x2513 = INT32_MAX;
	int8_t x2514 = -1;
	static int64_t x2515 = INT64_MIN;
	volatile int64_t x2516 = 0LL;
	static volatile int32_t t37 = INT32_MAX;

	t37 = (x2513<<((x2514==x2515)+x2516));

	if (t37 != INT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x2565 = UINT32_MAX;
	volatile int8_t x2566 = 14;
	int64_t x2567 = INT64_MAX;
	int16_t x2568 = 0;

	t38 = (x2565<<((x2566==x2567)+x2568));

	if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2637 = 2;
	static int64_t x2639 = -1LL;
	int32_t t39 = -1;

	t39 = (x2637<<((x2638==x2639)+x2640));

	if (t39 != 4) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x2661 = UINT32_MAX;
	int16_t x2662 = 1;
	volatile int32_t x2663 = INT32_MAX;
	uint16_t x2664 = 1U;
	uint32_t t40 = 13767931U;

	t40 = (x2661<<((x2662==x2663)+x2664));

	if (t40 != 4294967294U) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x2689 = 114U;
	uint64_t x2691 = 84289LLU;
	uint32_t t41 = 20U;

	t41 = (x2689<<((x2690==x2691)+x2692));

	if (t41 != 3648U) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x2821 = 53U;
	volatile int16_t x2822 = 4;
	static int64_t x2823 = INT64_MAX;
	int8_t x2824 = 0;

	t42 = (x2821<<((x2822==x2823)+x2824));

	if (t42 != 53) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x2885 = 25;
	int8_t x2886 = 3;
	uint64_t x2887 = UINT64_MAX;
	static int8_t x2888 = 1;
	int32_t t43 = 0;

	t43 = (x2885<<((x2886==x2887)+x2888));

	if (t43 != 50) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x2898 = 7;
	volatile uint64_t x2900 = 5LLU;
	int32_t t44 = -125878;

	t44 = (x2897<<((x2898==x2899)+x2900));

	if (t44 != 32) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x2985 = UINT64_MAX;
	volatile int64_t x2986 = INT64_MIN;
	int64_t x2987 = INT64_MIN;
	static uint16_t x2988 = 0U;
	volatile uint64_t t45 = 156310LLU;

	t45 = (x2985<<((x2986==x2987)+x2988));

	if (t45 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x3026 = INT32_MIN;
	volatile int64_t x3027 = -886678LL;
	int16_t x3028 = 0;
	volatile int32_t t46 = -462634;

	t46 = (x3025<<((x3026==x3027)+x3028));

	if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x3065 = UINT16_MAX;
	uint16_t x3066 = UINT16_MAX;
	uint64_t x3068 = 4LLU;
	int32_t t47 = 236069;

	t47 = (x3065<<((x3066==x3067)+x3068));

	if (t47 != 1048560) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x3137 = INT8_MAX;
	static volatile int16_t x3138 = -112;
	int16_t x3139 = 0;
	int16_t x3140 = 5;
	volatile int32_t t48 = 16;

	t48 = (x3137<<((x3138==x3139)+x3140));

	if (t48 != 4064) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x3205 = 1429LLU;
	int8_t x3206 = INT8_MAX;
	int32_t x3207 = -44113;
	uint32_t x3208 = 49U;
	uint64_t t49 = 1923LLU;

	t49 = (x3205<<((x3206==x3207)+x3208));

	if (t49 != 804455483439054848LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x3265 = UINT16_MAX;
	int64_t x3266 = INT64_MAX;
	uint8_t x3268 = 1U;
	int32_t t50 = 8434;

	t50 = (x3265<<((x3266==x3267)+x3268));

	if (t50 != 131070) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x3326 = -13;
	int16_t x3327 = -1;
	uint8_t x3328 = 1U;

	t51 = (x3325<<((x3326==x3327)+x3328));

	if (t51 != 510) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x3341 = INT8_MAX;
	uint8_t x3342 = 2U;
	int64_t x3343 = -1LL;
	static uint16_t x3344 = 5U;
	volatile int32_t t52 = -2744638;

	t52 = (x3341<<((x3342==x3343)+x3344));

	if (t52 != 4064) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x3365 = UINT16_MAX;
	uint16_t x3366 = 1944U;
	static int16_t x3367 = INT16_MIN;
	uint8_t x3368 = 1U;

	t53 = (x3365<<((x3366==x3367)+x3368));

	if (t53 != 131070) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint32_t x3378 = UINT32_MAX;
	static int8_t x3379 = INT8_MIN;
	volatile int32_t x3380 = 14;
	static uint32_t t54 = 51632387U;

	t54 = (x3377<<((x3378==x3379)+x3380));

	if (t54 != 13221888U) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x3417 = 1123U;
	volatile int64_t x3418 = INT64_MIN;
	static volatile uint32_t t55 = 14748831U;

	t55 = (x3417<<((x3418==x3419)+x3420));

	if (t55 != 1123U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x3421 = INT8_MAX;
	uint8_t x3423 = UINT8_MAX;
	volatile int8_t x3424 = 0;

	t56 = (x3421<<((x3422==x3423)+x3424));

	if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x3465 = INT64_MAX;
	uint32_t x3466 = 189U;
	volatile int8_t x3467 = INT8_MAX;
	int8_t x3468 = 0;
	int64_t t57 = INT64_MAX;

	t57 = (x3465<<((x3466==x3467)+x3468));

	if (t57 != INT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x3493 = UINT8_MAX;
	static int64_t x3494 = -1LL;
	uint8_t x3495 = 3U;
	uint8_t x3496 = 1U;
	static int32_t t58 = -7;

	t58 = (x3493<<((x3494==x3495)+x3496));

	if (t58 != 510) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x3630 = INT8_MIN;
	volatile uint8_t x3632 = 0U;

	t59 = (x3629<<((x3630==x3631)+x3632));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x3649 = 3121731880883340560LLU;
	uint16_t x3650 = 10U;

	t60 = (x3649<<((x3650==x3651)+x3652));

	if (t60 != 6527110973357172864LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x3673 = 0U;
	int64_t x3674 = INT64_MIN;
	volatile uint16_t x3676 = 2U;
	int32_t t61 = -4740527;

	t61 = (x3673<<((x3674==x3675)+x3676));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x3697 = 10007U;
	volatile int64_t x3698 = INT64_MIN;
	int8_t x3700 = 1;
	uint32_t t62 = 21U;

	t62 = (x3697<<((x3698==x3699)+x3700));

	if (t62 != 20014U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x3817 = INT16_MAX;
	uint64_t x3818 = UINT64_MAX;
	static uint8_t x3819 = 48U;
	uint64_t x3820 = 1LLU;
	int32_t t63 = 524634;

	t63 = (x3817<<((x3818==x3819)+x3820));

	if (t63 != 65534) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x3841 = INT8_MAX;
	int32_t x3842 = -20870;
	uint8_t x3844 = 6U;

	t64 = (x3841<<((x3842==x3843)+x3844));

	if (t64 != 8128) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x3861 = UINT8_MAX;
	volatile uint64_t x3863 = 176901546525030213LLU;
	uint8_t x3864 = 4U;
	int32_t t65 = 33904452;

	t65 = (x3861<<((x3862==x3863)+x3864));

	if (t65 != 4080) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x3909 = 21597407483LLU;
	uint8_t x3911 = 1U;
	int8_t x3912 = 8;
	static uint64_t t66 = 31LLU;

	t66 = (x3909<<((x3910==x3911)+x3912));

	if (t66 != 5528936315648LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x3913 = UINT64_MAX;
	uint8_t x3914 = 14U;
	int64_t x3915 = INT64_MIN;
	volatile uint16_t x3916 = 20U;
	static volatile uint64_t t67 = 1973341732100LLU;

	t67 = (x3913<<((x3914==x3915)+x3916));

	if (t67 != 18446744073708503040LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x3933 = UINT32_MAX;
	volatile uint64_t x3934 = 5LLU;
	uint8_t x3935 = 1U;
	int8_t x3936 = 21;

	t68 = (x3933<<((x3934==x3935)+x3936));

	if (t68 != 4292870144U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x3949 = 4405;
	uint8_t x3950 = UINT8_MAX;
	int64_t x3951 = -1LL;
	int32_t t69 = -847233113;

	t69 = (x3949<<((x3950==x3951)+x3952));

	if (t69 != 8810) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x3969 = 70768098LLU;
	int16_t x3970 = -1;
	static int8_t x3971 = -1;
	int16_t x3972 = 13;
	static volatile uint64_t t70 = 12010LLU;

	t70 = (x3969<<((x3970==x3971)+x3972));

	if (t70 != 1159464517632LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x4025 = 30U;
	uint32_t x4026 = UINT32_MAX;
	int32_t x4027 = INT32_MIN;
	int32_t t71 = -5153;

	t71 = (x4025<<((x4026==x4027)+x4028));

	if (t71 != 60) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x4102 = -187406705LL;
	int64_t x4103 = 690219585728LL;
	static int16_t x4104 = 1;
	volatile int64_t t72 = 1538LL;

	t72 = (x4101<<((x4102==x4103)+x4104));

	if (t72 != 11605387392364LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x4113 = 3;
	uint64_t x4114 = 11971LLU;
	static int32_t x4115 = INT32_MAX;
	int8_t x4116 = 0;
	static int32_t t73 = -1870;

	t73 = (x4113<<((x4114==x4115)+x4116));

	if (t73 != 3) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x4241 = 15U;
	static int16_t x4242 = -390;
	int16_t x4243 = INT16_MIN;
	volatile uint32_t t74 = 61U;

	t74 = (x4241<<((x4242==x4243)+x4244));

	if (t74 != 120U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x4614 = -1;
	uint16_t x4615 = 25494U;
	static volatile uint32_t x4616 = 5U;
	volatile int32_t t75 = 739889672;

	t75 = (x4613<<((x4614==x4615)+x4616));

	if (t75 != 494048) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x4794 = INT32_MIN;
	volatile int32_t x4795 = INT32_MIN;
	static int16_t x4796 = 0;
	volatile int32_t t76 = 406;

	t76 = (x4793<<((x4794==x4795)+x4796));

	if (t76 != 61666) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x4825 = 441U;
	uint32_t x4827 = UINT32_MAX;
	uint16_t x4828 = 0U;
	static volatile int32_t t77 = 25;

	t77 = (x4825<<((x4826==x4827)+x4828));

	if (t77 != 441) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x4917 = INT8_MAX;
	static volatile int32_t x4918 = 60;
	static volatile int64_t x4919 = INT64_MIN;
	int16_t x4920 = 1;
	volatile int32_t t78 = 6;

	t78 = (x4917<<((x4918==x4919)+x4920));

	if (t78 != 254) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x4921 = 14917990U;
	int8_t x4922 = INT8_MAX;
	int16_t x4924 = 11;

	t79 = (x4921<<((x4922==x4923)+x4924));

	if (t79 != 487272448U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x4953 = 16;
	int8_t x4954 = INT8_MAX;
	int16_t x4956 = 1;
	int32_t t80 = -4;

	t80 = (x4953<<((x4954==x4955)+x4956));

	if (t80 != 32) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x4963 = -1;
	int16_t x4964 = 9;
	volatile int32_t t81 = -1949;

	t81 = (x4961<<((x4962==x4963)+x4964));

	if (t81 != 512) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x5049 = 23;
	int8_t x5051 = 62;
	volatile int8_t x5052 = 21;

	t82 = (x5049<<((x5050==x5051)+x5052));

	if (t82 != 48234496) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x5077 = INT16_MAX;
	volatile int16_t x5078 = INT16_MIN;
	uint8_t x5080 = 0U;
	int32_t t83 = 1;

	t83 = (x5077<<((x5078==x5079)+x5080));

	if (t83 != 32767) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x5086 = INT8_MAX;
	uint32_t x5088 = 13U;

	t84 = (x5085<<((x5086==x5087)+x5088));

	if (t84 != 2318336) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x5193 = UINT64_MAX;
	uint32_t x5194 = 1134U;
	volatile int32_t x5195 = INT32_MIN;
	int16_t x5196 = 1;
	static volatile uint64_t t85 = 1787818729656LLU;

	t85 = (x5193<<((x5194==x5195)+x5196));

	if (t85 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x5197 = 49;
	int16_t x5198 = INT16_MIN;
	int16_t x5199 = -1;
	static volatile uint8_t x5200 = 0U;

	t86 = (x5197<<((x5198==x5199)+x5200));

	if (t86 != 49) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x5234 = 83U;
	int32_t x5235 = -1;
	int8_t x5236 = 4;
	uint32_t t87 = 1313U;

	t87 = (x5233<<((x5234==x5235)+x5236));

	if (t87 != 672U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x5249 = 0;
	uint32_t x5250 = 370167296U;

	t88 = (x5249<<((x5250==x5251)+x5252));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x5265 = 22;
	int8_t x5266 = INT8_MAX;
	int32_t x5267 = INT32_MAX;
	int16_t x5268 = 0;

	t89 = (x5265<<((x5266==x5267)+x5268));

	if (t89 != 22) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x5273 = 211U;
	int32_t x5274 = INT32_MAX;
	uint8_t x5276 = 1U;
	uint32_t t90 = 207065670U;

	t90 = (x5273<<((x5274==x5275)+x5276));

	if (t90 != 422U) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x5281 = 2821U;
	volatile int8_t x5282 = -1;
	volatile uint16_t x5283 = 21002U;
	int8_t x5284 = 0;
	volatile uint32_t t91 = 4586U;

	t91 = (x5281<<((x5282==x5283)+x5284));

	if (t91 != 2821U) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x5377 = 1U;
	volatile int32_t x5378 = -1;
	volatile int64_t x5379 = -1LL;
	uint16_t x5380 = 15U;

	t92 = (x5377<<((x5378==x5379)+x5380));

	if (t92 != 65536) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x5454 = INT16_MAX;
	static int16_t x5455 = -1;
	int8_t x5456 = 4;

	t93 = (x5453<<((x5454==x5455)+x5456));

	if (t93 != 10555072U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x5506 = INT16_MIN;
	uint8_t x5507 = UINT8_MAX;
	volatile uint16_t x5508 = 8U;

	t94 = (x5505<<((x5506==x5507)+x5508));

	if (t94 != 1185536U) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x5529 = 2505130907792511386LLU;
	static uint8_t x5532 = 1U;
	uint64_t t95 = 6LLU;

	t95 = (x5529<<((x5530==x5531)+x5532));

	if (t95 != 5010261815585022772LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x5541 = 2U;
	int16_t x5542 = 87;
	uint16_t x5543 = 472U;
	volatile uint8_t x5544 = 3U;
	volatile int32_t t96 = 5;

	t96 = (x5541<<((x5542==x5543)+x5544));

	if (t96 != 16) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x5586 = UINT8_MAX;
	uint8_t x5588 = 0U;
	int64_t t97 = 12554185LL;

	t97 = (x5585<<((x5586==x5587)+x5588));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x5595 = INT32_MIN;
	volatile uint8_t x5596 = 0U;
	int32_t t98 = -1369;

	t98 = (x5593<<((x5594==x5595)+x5596));

	if (t98 != 7) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x5598 = INT8_MIN;
	uint32_t x5599 = UINT32_MAX;
	int64_t x5600 = 14LL;
	volatile uint32_t t99 = 83887U;

	t99 = (x5597<<((x5598==x5599)+x5600));

	if (t99 != 81920U) { NG(); } else { ; }
	
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


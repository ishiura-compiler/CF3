#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x17 = UINT8_MAX;
int32_t t0 = -1;
uint8_t x31 = 3U;
volatile int32_t t1 = -503631;
uint16_t x93 = 42U;
static volatile int16_t x157 = 0;
int8_t x158 = 1;
static uint16_t x213 = UINT16_MAX;
volatile uint32_t x277 = UINT32_MAX;
int64_t x279 = -2567743581647LL;
static int16_t x393 = INT16_MAX;
uint16_t x396 = 22U;
int16_t x654 = 0;
uint64_t x686 = 0LLU;
volatile int64_t x699 = INT64_MIN;
int32_t t11 = -690072;
uint64_t x811 = 23439984157LLU;
int32_t t13 = -11;
uint16_t x1000 = UINT16_MAX;
int32_t t17 = -12567975;
static uint64_t x1066 = 3LLU;
int16_t x1068 = INT16_MAX;
volatile int8_t x1149 = INT8_MAX;
int16_t x1289 = 23;
int8_t x1461 = 0;
uint8_t x1477 = UINT8_MAX;
int32_t t22 = 4003590;
int8_t x1489 = 57;
int8_t x1586 = 17;
uint8_t x1588 = UINT8_MAX;
static int32_t t24 = -222337418;
uint8_t x1598 = 30U;
uint16_t x1641 = 163U;
static volatile int32_t t26 = -1;
uint8_t x1678 = 5U;
uint16_t x1989 = 48U;
static int64_t x1991 = -1LL;
uint8_t x2120 = 11U;
volatile uint8_t x2125 = 4U;
static int32_t x2217 = 45;
static int32_t x2219 = INT32_MAX;
static int32_t t36 = -30;
static uint8_t x2401 = UINT8_MAX;
uint32_t x2466 = 2U;
int64_t x2471 = 1352LL;
int8_t x2664 = 0;
static volatile int32_t t44 = 656;
int16_t x2700 = INT16_MIN;
uint64_t x2703 = 187795040437119LLU;
int32_t x2737 = 62607702;
uint8_t x2738 = 0U;
static volatile int32_t t47 = -576032;
static int16_t x2763 = INT16_MAX;
int64_t x2887 = INT64_MIN;
int8_t x3054 = 2;
volatile int32_t t52 = 1;
static volatile int32_t t55 = 125134;
volatile int32_t t57 = 6;
uint64_t x3729 = 1LLU;
int8_t x3731 = INT8_MAX;
volatile int32_t t60 = -24;
static uint32_t x3815 = 1248844785U;
int32_t x4028 = -492313718;
int32_t x4035 = INT32_MIN;
uint16_t x4053 = 12U;
int32_t t65 = 145928325;
int32_t t66 = 2899940;
int16_t x4155 = -1;
int32_t t67 = -15;
uint8_t x4197 = 78U;
static int32_t x4300 = -1;
static int8_t x4314 = 14;
uint32_t x4325 = 108313U;
static uint64_t x4417 = 158LLU;
int8_t x4418 = 20;
static uint32_t x4420 = 2054U;
static volatile int32_t t73 = -61;
int8_t x4706 = 3;
int32_t x4818 = 4;
static int64_t x4819 = INT64_MAX;
volatile uint64_t x4861 = UINT64_MAX;
int32_t x4864 = -1;
static volatile uint8_t x5061 = 3U;
int16_t x5062 = 1;
int8_t x5063 = 1;
volatile int32_t t79 = -3865145;
static uint8_t x5082 = 1U;
volatile uint32_t x5119 = 7200U;
uint64_t x5201 = 896LLU;
volatile uint8_t x5242 = 0U;
static volatile int32_t x5244 = INT32_MAX;
volatile int32_t t86 = -505522635;
uint64_t x5548 = 77639950788348LLU;
static uint16_t x5644 = 8U;
int8_t x5748 = 1;
static int32_t t91 = -646199948;
volatile int32_t t92 = -20;
int32_t x5980 = INT32_MIN;
int32_t t93 = -69;
uint8_t x6131 = 69U;
uint8_t x6232 = 10U;
static volatile uint64_t x6336 = UINT64_MAX;
volatile int64_t x6348 = INT64_MAX;
int32_t t99 = -6;


void f0(void) {
	volatile int8_t x18 = 2;
	int64_t x19 = INT64_MAX;
	uint8_t x20 = UINT8_MAX;

	t0 = ((x17<<x18)<=(x19<=x20));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x29 = 3;
	static uint8_t x30 = 1U;
	int32_t x32 = -1;

	t1 = ((x29<<x30)<=(x31<=x32));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x94 = 2U;
	uint32_t x95 = UINT32_MAX;
	volatile int16_t x96 = INT16_MIN;
	volatile int32_t t2 = -10158152;

	t2 = ((x93<<x94)<=(x95<=x96));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x159 = INT16_MIN;
	uint8_t x160 = 21U;
	volatile int32_t t3 = -1;

	t3 = ((x157<<x158)<=(x159<=x160));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x214 = 4U;
	uint64_t x215 = 5363091065LLU;
	volatile int8_t x216 = INT8_MAX;
	volatile int32_t t4 = -165284418;

	t4 = ((x213<<x214)<=(x215<=x216));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x278 = 1U;
	int16_t x280 = -2;
	int32_t t5 = 114163633;

	t5 = ((x277<<x278)<=(x279<=x280));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x394 = 1U;
	volatile int8_t x395 = -26;
	volatile int32_t t6 = -6113;

	t6 = ((x393<<x394)<=(x395<=x396));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint32_t x637 = 2252571U;
	static uint16_t x638 = 4U;
	int8_t x639 = 12;
	int16_t x640 = -136;
	static int32_t t7 = 15371192;

	t7 = ((x637<<x638)<=(x639<=x640));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x641 = 37U;
	int32_t x642 = 7;
	uint32_t x643 = 38383U;
	int64_t x644 = INT64_MIN;
	volatile int32_t t8 = -1;

	t8 = ((x641<<x642)<=(x643<=x644));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x653 = UINT8_MAX;
	uint64_t x655 = UINT64_MAX;
	uint8_t x656 = 68U;
	int32_t t9 = -507666334;

	t9 = ((x653<<x654)<=(x655<=x656));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x685 = UINT8_MAX;
	int16_t x687 = -1;
	int16_t x688 = 1;
	volatile int32_t t10 = -1305026;

	t10 = ((x685<<x686)<=(x687<=x688));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x697 = 35860160LL;
	static int64_t x698 = 0LL;
	static int8_t x700 = INT8_MAX;

	t11 = ((x697<<x698)<=(x699<=x700));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x809 = 6;
	volatile uint8_t x810 = 5U;
	int8_t x812 = -1;
	static volatile int32_t t12 = 464;

	t12 = ((x809<<x810)<=(x811<=x812));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x865 = 856700541984369793LLU;
	uint8_t x866 = 6U;
	uint8_t x867 = 2U;
	static int16_t x868 = INT16_MAX;

	t13 = ((x865<<x866)<=(x867<=x868));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x933 = UINT16_MAX;
	int8_t x934 = 0;
	uint32_t x935 = 7987980U;
	static int8_t x936 = INT8_MIN;
	int32_t t14 = -1083545;

	t14 = ((x933<<x934)<=(x935<=x936));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x977 = UINT8_MAX;
	static uint16_t x978 = 16U;
	uint64_t x979 = UINT64_MAX;
	static uint16_t x980 = 26791U;
	volatile int32_t t15 = -1623;

	t15 = ((x977<<x978)<=(x979<=x980));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x997 = 3471921;
	uint64_t x998 = 3LLU;
	int8_t x999 = -1;
	int32_t t16 = 643593;

	t16 = ((x997<<x998)<=(x999<=x1000));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x1061 = 4U;
	int8_t x1062 = 5;
	uint8_t x1063 = 47U;
	uint16_t x1064 = 6U;

	t17 = ((x1061<<x1062)<=(x1063<=x1064));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x1065 = UINT32_MAX;
	volatile int32_t x1067 = INT32_MIN;
	volatile int32_t t18 = 2224;

	t18 = ((x1065<<x1066)<=(x1067<=x1068));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1150 = 0;
	int8_t x1151 = INT8_MAX;
	volatile uint32_t x1152 = 18932211U;
	volatile int32_t t19 = -1933;

	t19 = ((x1149<<x1150)<=(x1151<=x1152));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x1290 = 3;
	int8_t x1291 = -1;
	static int16_t x1292 = INT16_MIN;
	int32_t t20 = -4240307;

	t20 = ((x1289<<x1290)<=(x1291<=x1292));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x1462 = 3U;
	int8_t x1463 = 13;
	int16_t x1464 = INT16_MIN;
	int32_t t21 = 891;

	t21 = ((x1461<<x1462)<=(x1463<=x1464));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1478 = 14;
	int8_t x1479 = -10;
	static uint32_t x1480 = 4222U;

	t22 = ((x1477<<x1478)<=(x1479<=x1480));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1490 = 1LL;
	uint32_t x1491 = 131656U;
	static uint16_t x1492 = UINT16_MAX;
	int32_t t23 = -2577;

	t23 = ((x1489<<x1490)<=(x1491<=x1492));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x1585 = INT8_MAX;
	uint8_t x1587 = UINT8_MAX;

	t24 = ((x1585<<x1586)<=(x1587<=x1588));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x1597 = 75371U;
	int8_t x1599 = INT8_MIN;
	uint8_t x1600 = 117U;
	static volatile int32_t t25 = 10;

	t25 = ((x1597<<x1598)<=(x1599<=x1600));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x1642 = 1;
	uint32_t x1643 = UINT32_MAX;
	int64_t x1644 = -173LL;

	t26 = ((x1641<<x1642)<=(x1643<=x1644));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x1677 = INT8_MAX;
	static int32_t x1679 = INT32_MIN;
	int64_t x1680 = -1LL;
	volatile int32_t t27 = -106989223;

	t27 = ((x1677<<x1678)<=(x1679<=x1680));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1873 = 37U;
	uint16_t x1874 = 1U;
	int32_t x1875 = 1;
	volatile int16_t x1876 = 338;
	static volatile int32_t t28 = 31;

	t28 = ((x1873<<x1874)<=(x1875<=x1876));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x1945 = 11900U;
	volatile int8_t x1946 = 0;
	static uint64_t x1947 = UINT64_MAX;
	int32_t x1948 = 114826865;
	volatile int32_t t29 = 73;

	t29 = ((x1945<<x1946)<=(x1947<=x1948));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1977 = 744;
	static volatile uint8_t x1978 = 5U;
	static volatile int32_t x1979 = INT32_MIN;
	static int64_t x1980 = INT64_MAX;
	int32_t t30 = 23490127;

	t30 = ((x1977<<x1978)<=(x1979<=x1980));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint8_t x1990 = 4U;
	volatile uint8_t x1992 = 2U;
	int32_t t31 = 868558714;

	t31 = ((x1989<<x1990)<=(x1991<=x1992));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x2117 = UINT64_MAX;
	uint16_t x2118 = 0U;
	int16_t x2119 = -1735;
	volatile int32_t t32 = -5737;

	t32 = ((x2117<<x2118)<=(x2119<=x2120));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint8_t x2126 = 15U;
	volatile uint64_t x2127 = 481466727283LLU;
	volatile int8_t x2128 = -1;
	int32_t t33 = 0;

	t33 = ((x2125<<x2126)<=(x2127<=x2128));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x2218 = 1U;
	int8_t x2220 = INT8_MIN;
	int32_t t34 = 125141462;

	t34 = ((x2217<<x2218)<=(x2219<=x2220));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x2257 = 19U;
	int8_t x2258 = 7;
	uint64_t x2259 = 4481150650493141LLU;
	int8_t x2260 = 1;
	volatile int32_t t35 = 5;

	t35 = ((x2257<<x2258)<=(x2259<=x2260));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x2305 = 3U;
	int8_t x2306 = 29;
	static uint32_t x2307 = 134989U;
	int16_t x2308 = 132;

	t36 = ((x2305<<x2306)<=(x2307<=x2308));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x2402 = 11U;
	uint32_t x2403 = 2U;
	static volatile uint16_t x2404 = 7U;
	volatile int32_t t37 = -4133877;

	t37 = ((x2401<<x2402)<=(x2403<=x2404));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x2417 = 0U;
	volatile int8_t x2418 = 0;
	static int64_t x2419 = INT64_MAX;
	int16_t x2420 = INT16_MIN;
	volatile int32_t t38 = 123;

	t38 = ((x2417<<x2418)<=(x2419<=x2420));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2465 = 3;
	volatile uint64_t x2467 = UINT64_MAX;
	uint16_t x2468 = 1U;
	static volatile int32_t t39 = -2;

	t39 = ((x2465<<x2466)<=(x2467<=x2468));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2469 = 1;
	int8_t x2470 = 2;
	int8_t x2472 = INT8_MIN;
	static int32_t t40 = 420834;

	t40 = ((x2469<<x2470)<=(x2471<=x2472));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x2573 = UINT16_MAX;
	static int8_t x2574 = 0;
	static int8_t x2575 = -8;
	static volatile int32_t x2576 = -1;
	int32_t t41 = -13726797;

	t41 = ((x2573<<x2574)<=(x2575<=x2576));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x2581 = 985516767907LL;
	static uint16_t x2582 = 9U;
	static uint32_t x2583 = UINT32_MAX;
	int8_t x2584 = INT8_MAX;
	static volatile int32_t t42 = 1;

	t42 = ((x2581<<x2582)<=(x2583<=x2584));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x2661 = 4893826U;
	uint8_t x2662 = 17U;
	int8_t x2663 = -1;
	volatile int32_t t43 = 116231;

	t43 = ((x2661<<x2662)<=(x2663<=x2664));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint64_t x2673 = UINT64_MAX;
	volatile int8_t x2674 = 0;
	static int32_t x2675 = INT32_MIN;
	volatile int64_t x2676 = INT64_MIN;

	t44 = ((x2673<<x2674)<=(x2675<=x2676));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x2697 = 2U;
	uint8_t x2698 = 10U;
	static int32_t x2699 = INT32_MIN;
	volatile int32_t t45 = 6;

	t45 = ((x2697<<x2698)<=(x2699<=x2700));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x2701 = 2020416154U;
	int8_t x2702 = 7;
	uint32_t x2704 = 339U;
	volatile int32_t t46 = 704052593;

	t46 = ((x2701<<x2702)<=(x2703<=x2704));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x2739 = INT8_MIN;
	uint32_t x2740 = 321U;

	t47 = ((x2737<<x2738)<=(x2739<=x2740));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x2761 = 1U;
	int8_t x2762 = 0;
	uint8_t x2764 = 18U;
	int32_t t48 = -23;

	t48 = ((x2761<<x2762)<=(x2763<=x2764));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x2885 = INT8_MAX;
	int8_t x2886 = 1;
	int8_t x2888 = INT8_MIN;
	int32_t t49 = -151192;

	t49 = ((x2885<<x2886)<=(x2887<=x2888));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x2913 = INT64_MAX;
	int16_t x2914 = 0;
	volatile uint32_t x2915 = 508715U;
	volatile int64_t x2916 = -9579441167LL;
	int32_t t50 = 15;

	t50 = ((x2913<<x2914)<=(x2915<=x2916));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x2965 = 702082;
	uint32_t x2966 = 4U;
	volatile int8_t x2967 = -1;
	int16_t x2968 = -24;
	int32_t t51 = 30142241;

	t51 = ((x2965<<x2966)<=(x2967<=x2968));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x3053 = 54658;
	uint64_t x3055 = 222399746781996LLU;
	uint8_t x3056 = 1U;

	t52 = ((x3053<<x3054)<=(x3055<=x3056));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x3165 = 607938U;
	volatile int8_t x3166 = 0;
	int32_t x3167 = -27986949;
	int16_t x3168 = INT16_MIN;
	volatile int32_t t53 = -332;

	t53 = ((x3165<<x3166)<=(x3167<=x3168));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x3249 = UINT64_MAX;
	int16_t x3250 = 0;
	static uint32_t x3251 = UINT32_MAX;
	int16_t x3252 = INT16_MIN;
	static int32_t t54 = 789322086;

	t54 = ((x3249<<x3250)<=(x3251<=x3252));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x3321 = 49;
	volatile int16_t x3322 = 14;
	int32_t x3323 = -1;
	volatile uint32_t x3324 = 15318642U;

	t55 = ((x3321<<x3322)<=(x3323<=x3324));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint32_t x3393 = 66006930U;
	int8_t x3394 = 4;
	int16_t x3395 = -1;
	static int64_t x3396 = -1LL;
	int32_t t56 = -21;

	t56 = ((x3393<<x3394)<=(x3395<=x3396));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x3397 = 242U;
	uint16_t x3398 = 1U;
	static uint64_t x3399 = UINT64_MAX;
	volatile int8_t x3400 = -30;

	t57 = ((x3397<<x3398)<=(x3399<=x3400));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x3585 = 23U;
	uint8_t x3586 = 25U;
	uint32_t x3587 = UINT32_MAX;
	volatile uint8_t x3588 = 24U;
	volatile int32_t t58 = -24702607;

	t58 = ((x3585<<x3586)<=(x3587<=x3588));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint64_t x3657 = UINT64_MAX;
	static uint32_t x3658 = 26U;
	static uint64_t x3659 = 6LLU;
	int8_t x3660 = INT8_MAX;
	int32_t t59 = -248522035;

	t59 = ((x3657<<x3658)<=(x3659<=x3660));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x3730 = 34;
	int8_t x3732 = -1;

	t60 = ((x3729<<x3730)<=(x3731<=x3732));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x3805 = UINT32_MAX;
	int16_t x3806 = 1;
	int8_t x3807 = INT8_MIN;
	int16_t x3808 = INT16_MIN;
	volatile int32_t t61 = 92173000;

	t61 = ((x3805<<x3806)<=(x3807<=x3808));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x3813 = 109U;
	uint8_t x3814 = 20U;
	int8_t x3816 = -1;
	volatile int32_t t62 = 35;

	t62 = ((x3813<<x3814)<=(x3815<=x3816));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x4025 = UINT8_MAX;
	uint8_t x4026 = 3U;
	int8_t x4027 = -1;
	int32_t t63 = 6;

	t63 = ((x4025<<x4026)<=(x4027<=x4028));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x4033 = 19;
	uint8_t x4034 = 1U;
	uint8_t x4036 = 54U;
	volatile int32_t t64 = 588610;

	t64 = ((x4033<<x4034)<=(x4035<=x4036));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x4054 = 0;
	static volatile int32_t x4055 = -1401324;
	static int64_t x4056 = INT64_MIN;

	t65 = ((x4053<<x4054)<=(x4055<=x4056));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x4105 = 4135U;
	uint8_t x4106 = 2U;
	volatile uint8_t x4107 = 10U;
	int16_t x4108 = INT16_MIN;

	t66 = ((x4105<<x4106)<=(x4107<=x4108));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x4153 = UINT64_MAX;
	int16_t x4154 = 3;
	uint8_t x4156 = UINT8_MAX;

	t67 = ((x4153<<x4154)<=(x4155<=x4156));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x4198 = 1LL;
	uint16_t x4199 = 9U;
	static int32_t x4200 = -1;
	static int32_t t68 = 15;

	t68 = ((x4197<<x4198)<=(x4199<=x4200));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x4297 = INT8_MAX;
	int32_t x4298 = 15;
	int8_t x4299 = -1;
	static volatile int32_t t69 = 161748901;

	t69 = ((x4297<<x4298)<=(x4299<=x4300));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x4313 = UINT16_MAX;
	int32_t x4315 = INT32_MAX;
	volatile int16_t x4316 = INT16_MAX;
	volatile int32_t t70 = -1;

	t70 = ((x4313<<x4314)<=(x4315<=x4316));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x4326 = 9U;
	static int64_t x4327 = INT64_MIN;
	uint32_t x4328 = 16262U;
	int32_t t71 = -5;

	t71 = ((x4325<<x4326)<=(x4327<=x4328));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x4373 = UINT16_MAX;
	int16_t x4374 = 0;
	volatile int8_t x4375 = INT8_MAX;
	int16_t x4376 = INT16_MAX;
	int32_t t72 = 0;

	t72 = ((x4373<<x4374)<=(x4375<=x4376));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x4419 = -47;

	t73 = ((x4417<<x4418)<=(x4419<=x4420));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x4593 = UINT64_MAX;
	int16_t x4594 = 49;
	uint16_t x4595 = 3797U;
	int8_t x4596 = INT8_MAX;
	volatile int32_t t74 = 1125308;

	t74 = ((x4593<<x4594)<=(x4595<=x4596));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x4705 = 1U;
	uint8_t x4707 = 63U;
	int8_t x4708 = INT8_MIN;
	volatile int32_t t75 = 39833;

	t75 = ((x4705<<x4706)<=(x4707<=x4708));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x4817 = UINT8_MAX;
	int32_t x4820 = -1;
	volatile int32_t t76 = -1314420;

	t76 = ((x4817<<x4818)<=(x4819<=x4820));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x4862 = 7U;
	int64_t x4863 = -45739LL;
	volatile int32_t t77 = 28099;

	t77 = ((x4861<<x4862)<=(x4863<=x4864));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x4953 = 3;
	uint8_t x4954 = 9U;
	int8_t x4955 = 1;
	uint32_t x4956 = 121U;
	volatile int32_t t78 = -3750239;

	t78 = ((x4953<<x4954)<=(x4955<=x4956));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x5064 = 28U;

	t79 = ((x5061<<x5062)<=(x5063<=x5064));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x5081 = 37U;
	volatile int64_t x5083 = -1LL;
	int64_t x5084 = INT64_MIN;
	int32_t t80 = -2;

	t80 = ((x5081<<x5082)<=(x5083<=x5084));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x5117 = 51786017LLU;
	uint8_t x5118 = 5U;
	uint16_t x5120 = 414U;
	volatile int32_t t81 = 65497712;

	t81 = ((x5117<<x5118)<=(x5119<=x5120));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x5202 = 0;
	volatile int8_t x5203 = 63;
	volatile int64_t x5204 = INT64_MAX;
	int32_t t82 = -14;

	t82 = ((x5201<<x5202)<=(x5203<=x5204));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x5241 = 511LLU;
	static uint16_t x5243 = 5U;
	volatile int32_t t83 = 0;

	t83 = ((x5241<<x5242)<=(x5243<=x5244));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x5253 = 7U;
	int8_t x5254 = 1;
	uint8_t x5255 = 75U;
	int16_t x5256 = -1;
	int32_t t84 = 21633023;

	t84 = ((x5253<<x5254)<=(x5255<=x5256));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x5425 = 4734417745696414LLU;
	uint32_t x5426 = 14U;
	uint64_t x5427 = UINT64_MAX;
	static uint16_t x5428 = 1415U;
	int32_t t85 = -165587738;

	t85 = ((x5425<<x5426)<=(x5427<=x5428));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x5469 = UINT16_MAX;
	volatile int32_t x5470 = 1;
	uint64_t x5471 = UINT64_MAX;
	static uint64_t x5472 = 53837641644LLU;

	t86 = ((x5469<<x5470)<=(x5471<=x5472));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int8_t x5545 = 29;
	volatile uint32_t x5546 = 2U;
	uint8_t x5547 = 1U;
	volatile int32_t t87 = 3865746;

	t87 = ((x5545<<x5546)<=(x5547<=x5548));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x5641 = INT8_MAX;
	uint16_t x5642 = 1U;
	volatile int8_t x5643 = INT8_MIN;
	static int32_t t88 = -29;

	t88 = ((x5641<<x5642)<=(x5643<=x5644));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x5689 = 43U;
	uint64_t x5690 = 15LLU;
	volatile uint16_t x5691 = UINT16_MAX;
	volatile int64_t x5692 = INT64_MIN;
	volatile int32_t t89 = 23;

	t89 = ((x5689<<x5690)<=(x5691<=x5692));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x5697 = INT16_MAX;
	int8_t x5698 = 1;
	uint8_t x5699 = 7U;
	int64_t x5700 = INT64_MIN;
	int32_t t90 = -1797055;

	t90 = ((x5697<<x5698)<=(x5699<=x5700));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x5745 = 10U;
	static int8_t x5746 = 7;
	int16_t x5747 = -7388;

	t91 = ((x5745<<x5746)<=(x5747<=x5748));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x5969 = INT8_MAX;
	uint32_t x5970 = 1U;
	static uint8_t x5971 = 0U;
	int64_t x5972 = 20LL;

	t92 = ((x5969<<x5970)<=(x5971<=x5972));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x5977 = 21U;
	uint8_t x5978 = 7U;
	int64_t x5979 = -472276469LL;

	t93 = ((x5977<<x5978)<=(x5979<=x5980));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x6129 = 66285002931119LL;
	uint16_t x6130 = 4U;
	int64_t x6132 = 9492272174734418LL;
	volatile int32_t t94 = -16693;

	t94 = ((x6129<<x6130)<=(x6131<=x6132));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x6149 = 4280967070531LLU;
	uint16_t x6150 = 3U;
	int8_t x6151 = -1;
	int64_t x6152 = INT64_MIN;
	int32_t t95 = 7;

	t95 = ((x6149<<x6150)<=(x6151<=x6152));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x6157 = 276115094347895725LL;
	uint8_t x6158 = 4U;
	static int64_t x6159 = 189292LL;
	volatile uint32_t x6160 = 4667059U;
	int32_t t96 = -303;

	t96 = ((x6157<<x6158)<=(x6159<=x6160));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x6229 = 252648U;
	static volatile uint8_t x6230 = 13U;
	uint8_t x6231 = UINT8_MAX;
	int32_t t97 = -371038;

	t97 = ((x6229<<x6230)<=(x6231<=x6232));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x6333 = UINT64_MAX;
	static uint16_t x6334 = 25U;
	volatile uint16_t x6335 = UINT16_MAX;
	static volatile int32_t t98 = 230;

	t98 = ((x6333<<x6334)<=(x6335<=x6336));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x6345 = 1684200019231525LL;
	static uint8_t x6346 = 2U;
	int16_t x6347 = -1;

	t99 = ((x6345<<x6346)<=(x6347<=x6348));

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


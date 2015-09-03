#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x158 = INT32_MIN;
uint32_t x159 = UINT32_MAX;
int32_t x258 = 984135125;
int16_t x260 = -1;
int16_t x497 = -273;
int64_t x498 = -1LL;
volatile int8_t x509 = INT8_MIN;
int8_t x715 = 0;
int64_t x738 = -94714LL;
uint32_t x761 = UINT32_MAX;
volatile int64_t x769 = INT64_MAX;
volatile uint8_t x771 = UINT8_MAX;
int16_t x905 = INT16_MIN;
volatile uint64_t t14 = 160020376LLU;
static int64_t x1029 = 3014619LL;
volatile uint8_t x1284 = 0U;
static uint64_t x1398 = 11268763996928561LLU;
int16_t x1400 = 0;
volatile uint64_t t19 = 8380LLU;
int32_t t20 = 177842589;
uint32_t x1564 = UINT32_MAX;
static uint64_t t22 = 118307LLU;
static uint64_t x1662 = UINT64_MAX;
uint64_t x1733 = 2038464654LLU;
volatile int32_t x1929 = INT32_MAX;
int8_t x2010 = -1;
int8_t x2030 = INT8_MIN;
volatile int32_t t28 = 932;
uint32_t x2034 = UINT32_MAX;
static uint64_t t29 = 7136489586220317050LLU;
uint8_t x2171 = 0U;
uint16_t x2201 = 1U;
int16_t x2204 = -1;
static int8_t x2374 = INT8_MIN;
int16_t x2405 = INT16_MIN;
int16_t x2406 = INT16_MIN;
uint64_t x2563 = 7LLU;
int8_t x2564 = 1;
int8_t x2666 = -1;
uint64_t x2843 = UINT64_MAX;
volatile uint64_t t39 = 46LLU;
int16_t x2969 = INT16_MAX;
int8_t x2971 = -1;
static int32_t x3015 = INT32_MIN;
int32_t t42 = -4125;
int32_t x3081 = 590555988;
uint8_t x3084 = 0U;
volatile int64_t t53 = -10LL;
volatile int64_t x3418 = INT64_MAX;
static uint8_t x3420 = 1U;
int16_t x3548 = 0;
volatile int64_t x3577 = -1LL;
int32_t x3676 = INT32_MIN;
static int64_t t60 = 16956754867LL;
uint64_t x3941 = 814999LLU;
int64_t x3981 = 2333421LL;
int8_t x4097 = INT8_MIN;
uint32_t x4603 = UINT32_MAX;
int8_t x4604 = -5;
int16_t x4621 = INT16_MAX;
int64_t x4622 = INT64_MAX;
int64_t x4774 = INT64_MIN;
int32_t x4775 = -1;
static int64_t x4834 = -1LL;
static int32_t x4869 = 148240;
volatile uint32_t x4897 = UINT32_MAX;
static volatile uint64_t x4902 = UINT64_MAX;
int64_t x4907 = 0LL;
int32_t t79 = 369221278;
static volatile int16_t x5117 = INT16_MAX;
static uint64_t x5119 = UINT64_MAX;
int8_t x5120 = -1;
int32_t x5325 = INT32_MIN;
int16_t x5327 = -26;
int32_t x5396 = 0;
int32_t t83 = -33;
volatile uint32_t t84 = 2U;
volatile int64_t t85 = 547256LL;
uint64_t x5717 = UINT64_MAX;
uint64_t t92 = 172189350LLU;
int8_t x5812 = 3;
volatile int8_t x5917 = 12;
int32_t x5918 = -1;
volatile uint64_t t95 = 9441724367710LLU;
int16_t x5983 = -15;
int32_t x6009 = 0;
volatile int64_t x6011 = INT64_MIN;


void f0(void) {
	int16_t x157 = 224;
	int32_t x160 = -2;
	volatile int32_t t0 = -210;

	t0 = ((x157%x158)>>(x159*x160));

	if (t0 != 56) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x257 = 1U;
	int16_t x259 = -1;
	static volatile int32_t t1 = 101;

	t1 = ((x257%x258)>>(x259*x260));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x337 = -1;
	static uint64_t x338 = 3109660705476362938LLU;
	static uint8_t x339 = 2U;
	uint16_t x340 = 4U;
	uint64_t t2 = 1659534274658LLU;

	t2 = ((x337%x338)>>(x339*x340));

	if (t2 != 11322033384092722LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x417 = INT64_MAX;
	volatile int32_t x418 = -1;
	uint32_t x419 = 6U;
	int64_t x420 = 1LL;
	int64_t t3 = -4079127824717LL;

	t3 = ((x417%x418)>>(x419*x420));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x499 = -1;
	static volatile int16_t x500 = -1;
	volatile int64_t t4 = 31847384194977806LL;

	t4 = ((x497%x498)>>(x499*x500));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x510 = UINT64_MAX;
	static volatile uint32_t x511 = UINT32_MAX;
	int16_t x512 = -1;
	volatile uint64_t t5 = 3LLU;

	t5 = ((x509%x510)>>(x511*x512));

	if (t5 != 9223372036854775744LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x541 = UINT32_MAX;
	uint16_t x542 = 467U;
	static uint64_t x543 = UINT64_MAX;
	static uint8_t x544 = 0U;
	volatile uint32_t t6 = 74504218U;

	t6 = ((x541%x542)>>(x543*x544));

	if (t6 != 51U) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x673 = UINT64_MAX;
	int64_t x674 = INT64_MIN;
	volatile uint16_t x675 = 0U;
	int8_t x676 = 1;
	volatile uint64_t t7 = 3653481725008061LLU;

	t7 = ((x673%x674)>>(x675*x676));

	if (t7 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x713 = UINT8_MAX;
	volatile int64_t x714 = INT64_MIN;
	int32_t x716 = INT32_MIN;
	int64_t t8 = -2610912LL;

	t8 = ((x713%x714)>>(x715*x716));

	if (t8 != 255LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x737 = INT64_MAX;
	volatile int8_t x739 = 0;
	int64_t x740 = -6619522848LL;
	static volatile int64_t t9 = 1LL;

	t9 = ((x737%x738)>>(x739*x740));

	if (t9 != 45657LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x762 = -1;
	uint8_t x763 = 1U;
	static uint8_t x764 = 1U;
	volatile uint32_t t10 = 2571U;

	t10 = ((x761%x762)>>(x763*x764));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x770 = 300937655U;
	int8_t x772 = 0;
	int64_t t11 = 256LL;

	t11 = ((x769%x770)>>(x771*x772));

	if (t11 != 273222597LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int16_t x906 = INT16_MIN;
	int8_t x907 = 9;
	int16_t x908 = 2;
	volatile int32_t t12 = 24;

	t12 = ((x905%x906)>>(x907*x908));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x977 = INT16_MAX;
	volatile uint64_t x978 = 7893878972072245LLU;
	static int32_t x979 = INT32_MIN;
	uint32_t x980 = 22U;
	uint64_t t13 = 3078538978LLU;

	t13 = ((x977%x978)>>(x979*x980));

	if (t13 != 32767LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x1025 = UINT64_MAX;
	volatile uint32_t x1026 = UINT32_MAX;
	uint8_t x1027 = UINT8_MAX;
	int8_t x1028 = 0;

	t14 = ((x1025%x1026)>>(x1027*x1028));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x1030 = -1;
	int64_t x1031 = -1LL;
	int8_t x1032 = 0;
	volatile int64_t t15 = -132691363496403LL;

	t15 = ((x1029%x1030)>>(x1031*x1032));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x1057 = INT8_MIN;
	volatile int8_t x1058 = -1;
	int64_t x1059 = 357665LL;
	uint8_t x1060 = 0U;
	int32_t t16 = -466213;

	t16 = ((x1057%x1058)>>(x1059*x1060));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1197 = INT8_MAX;
	static int16_t x1198 = INT16_MAX;
	int8_t x1199 = INT8_MIN;
	uint8_t x1200 = 0U;
	static volatile int32_t t17 = 1;

	t17 = ((x1197%x1198)>>(x1199*x1200));

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x1281 = 165054;
	volatile uint32_t x1282 = 1515U;
	static uint32_t x1283 = 254U;
	static uint32_t t18 = 57949421U;

	t18 = ((x1281%x1282)>>(x1283*x1284));

	if (t18 != 1434U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1397 = INT8_MAX;
	static volatile int16_t x1399 = INT16_MIN;

	t19 = ((x1397%x1398)>>(x1399*x1400));

	if (t19 != 127LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x1421 = INT16_MIN;
	int16_t x1422 = -1;
	uint16_t x1423 = 0U;
	volatile uint64_t x1424 = UINT64_MAX;

	t20 = ((x1421%x1422)>>(x1423*x1424));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1437 = UINT32_MAX;
	int32_t x1438 = 21397;
	uint8_t x1439 = 6U;
	uint8_t x1440 = 0U;
	static volatile uint32_t t21 = 22320U;

	t21 = ((x1437%x1438)>>(x1439*x1440));

	if (t21 != 11676U) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x1561 = INT16_MIN;
	static volatile uint64_t x1562 = 9LLU;
	volatile int32_t x1563 = -1;

	t22 = ((x1561%x1562)>>(x1563*x1564));

	if (t22 != 4LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1661 = 149550036076LLU;
	int32_t x1663 = -1;
	int64_t x1664 = -1LL;
	static volatile uint64_t t23 = 2965017016394817LLU;

	t23 = ((x1661%x1662)>>(x1663*x1664));

	if (t23 != 74775018038LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1685 = INT32_MIN;
	static uint64_t x1686 = UINT64_MAX;
	static uint16_t x1687 = 0U;
	static int64_t x1688 = -442211LL;
	volatile uint64_t t24 = 453657314741LLU;

	t24 = ((x1685%x1686)>>(x1687*x1688));

	if (t24 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1734 = INT64_MIN;
	volatile uint64_t x1735 = 0LLU;
	int32_t x1736 = 8065122;
	static volatile uint64_t t25 = 494000501675516LLU;

	t25 = ((x1733%x1734)>>(x1735*x1736));

	if (t25 != 2038464654LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1930 = -1LL;
	int16_t x1931 = -1;
	static uint64_t x1932 = UINT64_MAX;
	volatile int64_t t26 = 612898212450693539LL;

	t26 = ((x1929%x1930)>>(x1931*x1932));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x2009 = 228U;
	int16_t x2011 = 0;
	int64_t x2012 = -302973065885842650LL;
	uint32_t t27 = 3886U;

	t27 = ((x2009%x2010)>>(x2011*x2012));

	if (t27 != 228U) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x2029 = INT32_MIN;
	uint64_t x2031 = UINT64_MAX;
	int64_t x2032 = -1LL;

	t28 = ((x2029%x2030)>>(x2031*x2032));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x2033 = UINT64_MAX;
	int8_t x2035 = 0;
	int8_t x2036 = INT8_MIN;

	t29 = ((x2033%x2034)>>(x2035*x2036));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x2169 = INT16_MAX;
	volatile uint16_t x2170 = 10U;
	int32_t x2172 = INT32_MIN;
	static volatile int32_t t30 = 1633;

	t30 = ((x2169%x2170)>>(x2171*x2172));

	if (t30 != 7) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x2202 = 4U;
	static int8_t x2203 = -1;
	int32_t t31 = -12863;

	t31 = ((x2201%x2202)>>(x2203*x2204));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x2373 = UINT8_MAX;
	volatile int64_t x2375 = -1LL;
	int32_t x2376 = -1;
	volatile int32_t t32 = -2910592;

	t32 = ((x2373%x2374)>>(x2375*x2376));

	if (t32 != 63) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x2407 = UINT64_MAX;
	static int64_t x2408 = -1LL;
	int32_t t33 = 15051831;

	t33 = ((x2405%x2406)>>(x2407*x2408));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x2429 = -118;
	static int64_t x2430 = -1LL;
	int16_t x2431 = INT16_MAX;
	uint8_t x2432 = 0U;
	volatile int64_t t34 = 56541057508LL;

	t34 = ((x2429%x2430)>>(x2431*x2432));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x2561 = UINT32_MAX;
	int8_t x2562 = INT8_MIN;
	uint32_t t35 = 98U;

	t35 = ((x2561%x2562)>>(x2563*x2564));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x2585 = INT16_MAX;
	uint16_t x2586 = 2U;
	static volatile uint32_t x2587 = UINT32_MAX;
	int32_t x2588 = -1;
	volatile int32_t t36 = -489609724;

	t36 = ((x2585%x2586)>>(x2587*x2588));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x2665 = 1U;
	int8_t x2667 = -1;
	volatile uint32_t x2668 = UINT32_MAX;
	int32_t t37 = 49;

	t37 = ((x2665%x2666)>>(x2667*x2668));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x2841 = UINT32_MAX;
	volatile int32_t x2842 = INT32_MIN;
	uint64_t x2844 = UINT64_MAX;
	uint32_t t38 = 124U;

	t38 = ((x2841%x2842)>>(x2843*x2844));

	if (t38 != 1073741823U) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x2909 = 1439LLU;
	uint32_t x2910 = 415131719U;
	int32_t x2911 = 1;
	uint8_t x2912 = 10U;

	t39 = ((x2909%x2910)>>(x2911*x2912));

	if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x2970 = 329U;
	static int64_t x2972 = -1LL;
	int32_t t40 = 122097969;

	t40 = ((x2969%x2970)>>(x2971*x2972));

	if (t40 != 98) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x3013 = 61;
	int64_t x3014 = INT64_MIN;
	volatile int8_t x3016 = 0;
	int64_t t41 = 3282894566380LL;

	t41 = ((x3013%x3014)>>(x3015*x3016));

	if (t41 != 61LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x3037 = INT32_MAX;
	int16_t x3038 = INT16_MIN;
	int16_t x3039 = 0;
	int64_t x3040 = -1LL;

	t42 = ((x3037%x3038)>>(x3039*x3040));

	if (t42 != 32767) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x3041 = 8170927U;
	int32_t x3042 = 1;
	static int16_t x3043 = -1;
	uint64_t x3044 = UINT64_MAX;
	volatile uint32_t t43 = 93802U;

	t43 = ((x3041%x3042)>>(x3043*x3044));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x3069 = INT16_MAX;
	uint8_t x3070 = UINT8_MAX;
	int8_t x3071 = -8;
	static int64_t x3072 = -1LL;
	int32_t t44 = -158394915;

	t44 = ((x3069%x3070)>>(x3071*x3072));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x3082 = 18495554471648LLU;
	int8_t x3083 = INT8_MIN;
	static volatile uint64_t t45 = 765263LLU;

	t45 = ((x3081%x3082)>>(x3083*x3084));

	if (t45 != 590555988LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x3161 = INT32_MIN;
	uint8_t x3162 = 4U;
	uint16_t x3163 = 2U;
	int16_t x3164 = 1;
	int32_t t46 = -230;

	t46 = ((x3161%x3162)>>(x3163*x3164));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x3185 = 63631111;
	static uint64_t x3186 = UINT64_MAX;
	int64_t x3187 = -1LL;
	int8_t x3188 = -1;
	uint64_t t47 = 97646671584LLU;

	t47 = ((x3185%x3186)>>(x3187*x3188));

	if (t47 != 31815555LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x3217 = 0;
	int8_t x3218 = 3;
	static uint64_t x3219 = UINT64_MAX;
	int32_t x3220 = -1;
	volatile int32_t t48 = 2098;

	t48 = ((x3217%x3218)>>(x3219*x3220));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x3221 = INT32_MAX;
	int8_t x3222 = INT8_MIN;
	int8_t x3223 = -1;
	uint32_t x3224 = UINT32_MAX;
	volatile int32_t t49 = -6575;

	t49 = ((x3221%x3222)>>(x3223*x3224));

	if (t49 != 63) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x3253 = INT32_MIN;
	static volatile int16_t x3254 = 1;
	static int8_t x3255 = -1;
	volatile int8_t x3256 = -1;
	int32_t t50 = 1;

	t50 = ((x3253%x3254)>>(x3255*x3256));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x3293 = 3U;
	int64_t x3294 = INT64_MIN;
	static int16_t x3295 = INT16_MIN;
	uint16_t x3296 = 0U;
	int64_t t51 = -174406234LL;

	t51 = ((x3293%x3294)>>(x3295*x3296));

	if (t51 != 3LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x3377 = UINT16_MAX;
	int8_t x3378 = 1;
	volatile int16_t x3379 = -1;
	int16_t x3380 = -1;
	volatile int32_t t52 = -81554;

	t52 = ((x3377%x3378)>>(x3379*x3380));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x3405 = INT64_MIN;
	int32_t x3406 = -1;
	int64_t x3407 = INT64_MIN;
	volatile uint8_t x3408 = 0U;

	t53 = ((x3405%x3406)>>(x3407*x3408));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x3417 = 1;
	uint8_t x3419 = 0U;
	volatile int64_t t54 = 218LL;

	t54 = ((x3417%x3418)>>(x3419*x3420));

	if (t54 != 1LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x3545 = 138792643497LLU;
	uint64_t x3546 = 687634LLU;
	int16_t x3547 = -3915;
	uint64_t t55 = 923333LLU;

	t55 = ((x3545%x3546)>>(x3547*x3548));

	if (t55 != 596937LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x3561 = 2654LL;
	static uint8_t x3562 = 12U;
	int8_t x3563 = 0;
	int64_t x3564 = 2102321912433523771LL;
	volatile int64_t t56 = 0LL;

	t56 = ((x3561%x3562)>>(x3563*x3564));

	if (t56 != 2LL) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int16_t x3578 = 1;
	uint64_t x3579 = UINT64_MAX;
	int64_t x3580 = -1LL;
	volatile int64_t t57 = -5381173805911LL;

	t57 = ((x3577%x3578)>>(x3579*x3580));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x3589 = UINT16_MAX;
	int32_t x3590 = 172;
	volatile uint64_t x3591 = UINT64_MAX;
	static int64_t x3592 = -1LL;
	int32_t t58 = -5912;

	t58 = ((x3589%x3590)>>(x3591*x3592));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x3673 = INT64_MAX;
	static int32_t x3674 = INT32_MIN;
	volatile uint8_t x3675 = 0U;
	int64_t t59 = -2696LL;

	t59 = ((x3673%x3674)>>(x3675*x3676));

	if (t59 != 2147483647LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x3749 = INT64_MAX;
	static uint8_t x3750 = 31U;
	volatile int8_t x3751 = -5;
	volatile uint64_t x3752 = UINT64_MAX;

	t60 = ((x3749%x3750)>>(x3751*x3752));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x3942 = 18569185U;
	static int8_t x3943 = 0;
	int32_t x3944 = 0;
	volatile uint64_t t61 = 2308528402LLU;

	t61 = ((x3941%x3942)>>(x3943*x3944));

	if (t61 != 814999LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x3982 = -16;
	static int8_t x3983 = -5;
	int16_t x3984 = -1;
	volatile int64_t t62 = 181708977995921567LL;

	t62 = ((x3981%x3982)>>(x3983*x3984));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x4098 = INT8_MIN;
	int16_t x4099 = 529;
	static int8_t x4100 = 0;
	static volatile int32_t t63 = 471900560;

	t63 = ((x4097%x4098)>>(x4099*x4100));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x4309 = INT8_MIN;
	int8_t x4310 = -1;
	static int32_t x4311 = INT32_MIN;
	uint8_t x4312 = 0U;
	volatile int32_t t64 = -445271207;

	t64 = ((x4309%x4310)>>(x4311*x4312));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x4357 = 45137LL;
	uint8_t x4358 = UINT8_MAX;
	static volatile int32_t x4359 = -159618;
	uint32_t x4360 = 0U;
	int64_t t65 = -13LL;

	t65 = ((x4357%x4358)>>(x4359*x4360));

	if (t65 != 2LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x4477 = UINT16_MAX;
	static volatile int64_t x4478 = INT64_MAX;
	volatile int64_t x4479 = INT64_MIN;
	uint64_t x4480 = 457638620LLU;
	static int64_t t66 = 59321606851757LL;

	t66 = ((x4477%x4478)>>(x4479*x4480));

	if (t66 != 65535LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x4481 = 59U;
	int16_t x4482 = -2907;
	static volatile int16_t x4483 = -3;
	uint64_t x4484 = UINT64_MAX;
	static volatile int32_t t67 = -135;

	t67 = ((x4481%x4482)>>(x4483*x4484));

	if (t67 != 7) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x4601 = UINT16_MAX;
	int32_t x4602 = INT32_MIN;
	static int32_t t68 = 14483395;

	t68 = ((x4601%x4602)>>(x4603*x4604));

	if (t68 != 2047) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x4623 = -1;
	volatile uint32_t x4624 = UINT32_MAX;
	int64_t t69 = 5914589LL;

	t69 = ((x4621%x4622)>>(x4623*x4624));

	if (t69 != 16383LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x4689 = INT64_MAX;
	int32_t x4690 = -1;
	static int8_t x4691 = -1;
	int64_t x4692 = -1LL;
	volatile int64_t t70 = 8668287149463343LL;

	t70 = ((x4689%x4690)>>(x4691*x4692));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x4773 = INT8_MAX;
	int64_t x4776 = -1LL;
	static int64_t t71 = 745744LL;

	t71 = ((x4773%x4774)>>(x4775*x4776));

	if (t71 != 63LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x4797 = INT8_MIN;
	int64_t x4798 = -1LL;
	volatile uint16_t x4799 = 453U;
	uint8_t x4800 = 0U;
	static int64_t t72 = 3LL;

	t72 = ((x4797%x4798)>>(x4799*x4800));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x4833 = UINT16_MAX;
	uint64_t x4835 = 108560749564LLU;
	int64_t x4836 = 0LL;
	static volatile int64_t t73 = -1298622066234LL;

	t73 = ((x4833%x4834)>>(x4835*x4836));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x4870 = 519904LLU;
	int8_t x4871 = 0;
	int64_t x4872 = 15768186LL;
	volatile uint64_t t74 = 793LLU;

	t74 = ((x4869%x4870)>>(x4871*x4872));

	if (t74 != 148240LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x4885 = 17LL;
	int64_t x4886 = INT64_MIN;
	int8_t x4887 = -1;
	volatile int8_t x4888 = -1;
	volatile int64_t t75 = 511740LL;

	t75 = ((x4885%x4886)>>(x4887*x4888));

	if (t75 != 8LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x4898 = -24;
	static uint64_t x4899 = UINT64_MAX;
	int8_t x4900 = -10;
	volatile uint32_t t76 = 0U;

	t76 = ((x4897%x4898)>>(x4899*x4900));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x4901 = 78245LL;
	volatile int32_t x4903 = -1;
	int16_t x4904 = -1;
	volatile uint64_t t77 = 2614LLU;

	t77 = ((x4901%x4902)>>(x4903*x4904));

	if (t77 != 39122LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x4905 = 103U;
	int16_t x4906 = INT16_MAX;
	int32_t x4908 = INT32_MIN;
	static int32_t t78 = -172795441;

	t78 = ((x4905%x4906)>>(x4907*x4908));

	if (t78 != 103) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x5033 = 0U;
	static int32_t x5034 = -2491856;
	static int8_t x5035 = 0;
	static int8_t x5036 = INT8_MAX;

	t79 = ((x5033%x5034)>>(x5035*x5036));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int32_t x5093 = INT32_MAX;
	int32_t x5094 = INT32_MAX;
	uint64_t x5095 = UINT64_MAX;
	int8_t x5096 = -7;
	volatile int32_t t80 = 116005;

	t80 = ((x5093%x5094)>>(x5095*x5096));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x5118 = 1U;
	volatile int32_t t81 = 37;

	t81 = ((x5117%x5118)>>(x5119*x5120));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x5326 = INT32_MIN;
	static volatile uint32_t x5328 = UINT32_MAX;
	int32_t t82 = 2145;

	t82 = ((x5325%x5326)>>(x5327*x5328));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x5393 = 36526826;
	static uint16_t x5394 = UINT16_MAX;
	int64_t x5395 = -5LL;

	t83 = ((x5393%x5394)>>(x5395*x5396));

	if (t83 != 23831) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x5405 = 11U;
	uint32_t x5406 = 86521519U;
	static volatile uint16_t x5407 = 0U;
	uint32_t x5408 = 951763U;

	t84 = ((x5405%x5406)>>(x5407*x5408));

	if (t84 != 11U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x5429 = 136742U;
	volatile int64_t x5430 = -1LL;
	int8_t x5431 = -11;
	int8_t x5432 = -1;

	t85 = ((x5429%x5430)>>(x5431*x5432));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x5449 = INT64_MAX;
	uint8_t x5450 = 95U;
	uint32_t x5451 = 0U;
	volatile uint16_t x5452 = UINT16_MAX;
	volatile int64_t t86 = 1LL;

	t86 = ((x5449%x5450)>>(x5451*x5452));

	if (t86 != 17LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x5453 = INT16_MIN;
	uint64_t x5454 = UINT64_MAX;
	uint8_t x5455 = 0U;
	static int32_t x5456 = INT32_MIN;
	static volatile uint64_t t87 = 40105762681517908LLU;

	t87 = ((x5453%x5454)>>(x5455*x5456));

	if (t87 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x5529 = -4;
	uint8_t x5530 = 2U;
	uint8_t x5531 = 0U;
	int64_t x5532 = -1LL;
	static int32_t t88 = 19487;

	t88 = ((x5529%x5530)>>(x5531*x5532));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x5549 = UINT8_MAX;
	int64_t x5550 = INT64_MIN;
	uint32_t x5551 = UINT32_MAX;
	int8_t x5552 = -1;
	static int64_t t89 = 514238915365141LL;

	t89 = ((x5549%x5550)>>(x5551*x5552));

	if (t89 != 127LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x5689 = INT32_MAX;
	uint32_t x5690 = 22794U;
	static uint8_t x5691 = 0U;
	uint8_t x5692 = 12U;
	uint32_t t90 = 39307874U;

	t90 = ((x5689%x5690)>>(x5691*x5692));

	if (t90 != 15319U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x5718 = INT8_MAX;
	uint64_t x5719 = UINT64_MAX;
	int16_t x5720 = -1;
	uint64_t t91 = 179380LLU;

	t91 = ((x5717%x5718)>>(x5719*x5720));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x5785 = 9560204625496LLU;
	uint64_t x5786 = 41136LLU;
	int8_t x5787 = -1;
	uint64_t x5788 = UINT64_MAX;

	t92 = ((x5785%x5786)>>(x5787*x5788));

	if (t92 != 16124LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x5809 = UINT8_MAX;
	uint64_t x5810 = 265122405LLU;
	int8_t x5811 = 3;
	volatile uint64_t t93 = 500304415219692LLU;

	t93 = ((x5809%x5810)>>(x5811*x5812));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x5919 = 7295U;
	int16_t x5920 = 0;
	volatile int32_t t94 = -24131;

	t94 = ((x5917%x5918)>>(x5919*x5920));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x5921 = 171U;
	uint64_t x5922 = 894484LLU;
	int64_t x5923 = -1LL;
	static volatile int32_t x5924 = -1;

	t95 = ((x5921%x5922)>>(x5923*x5924));

	if (t95 != 85LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x5965 = 5U;
	int64_t x5966 = INT64_MIN;
	uint32_t x5967 = UINT32_MAX;
	volatile uint16_t x5968 = 0U;
	int64_t t96 = -1LL;

	t96 = ((x5965%x5966)>>(x5967*x5968));

	if (t96 != 5LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x5981 = INT8_MAX;
	uint8_t x5982 = 9U;
	uint64_t x5984 = UINT64_MAX;
	volatile int32_t t97 = -63852547;

	t97 = ((x5981%x5982)>>(x5983*x5984));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x6010 = INT8_MIN;
	uint16_t x6012 = 0U;
	static volatile int32_t t98 = -467;

	t98 = ((x6009%x6010)>>(x6011*x6012));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x6041 = UINT8_MAX;
	int32_t x6042 = INT32_MIN;
	volatile int8_t x6043 = -2;
	static volatile uint32_t x6044 = UINT32_MAX;
	static volatile int32_t t99 = 3880;

	t99 = ((x6041%x6042)>>(x6043*x6044));

	if (t99 != 63) { NG(); } else { ; }
	
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


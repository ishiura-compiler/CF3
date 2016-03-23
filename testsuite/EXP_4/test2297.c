
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

uint32_t x4 = 33923U;
int32_t x37 = INT32_MIN;
uint32_t x38 = 100754U;
volatile int32_t x57 = INT32_MIN;
volatile int8_t x58 = INT8_MAX;
static int32_t t3 = -48;
uint16_t x70 = 20U;
volatile int32_t t4 = INT32_MIN;
volatile int16_t x97 = -1;
int64_t x99 = INT64_MIN;
uint32_t x128 = 8046U;
static int16_t x145 = INT16_MIN;
int8_t x148 = INT8_MIN;
int8_t x162 = 0;
int32_t x208 = INT32_MIN;
uint32_t x210 = UINT32_MAX;
int64_t x211 = -31LL;
int16_t x212 = 1;
volatile uint32_t t12 = 925836U;
uint64_t x217 = UINT64_MAX;
volatile int8_t x223 = INT8_MAX;
uint8_t x243 = 0U;
uint32_t t15 = 9416164U;
int64_t t18 = -524951671261LL;
uint64_t x376 = 2670494038460834850LLU;
int32_t x388 = -1;
volatile uint32_t t22 = 1152U;
uint64_t x458 = UINT64_MAX;
uint8_t x460 = 67U;
volatile int8_t x503 = 56;
uint64_t t27 = 1635094LLU;
uint8_t x534 = 1U;
uint8_t x544 = UINT8_MAX;
static uint8_t x561 = UINT8_MAX;
uint8_t x562 = 5U;
uint64_t x570 = 1070426800LLU;
static int16_t x572 = INT16_MIN;
volatile int32_t t32 = 276;
int8_t x615 = 48;
volatile uint64_t t33 = 59352246LLU;
uint32_t x630 = 9U;
int32_t x642 = 344;
uint8_t x657 = UINT8_MAX;
uint64_t x676 = UINT64_MAX;
volatile uint64_t t37 = 791878635842804LLU;
int32_t x690 = 66414489;
uint16_t x699 = 1U;
int8_t x700 = -13;
static uint16_t x722 = UINT16_MAX;
int32_t t43 = -56;
volatile int8_t x770 = 12;
volatile int64_t x790 = 1309505230159810LL;
int8_t x825 = INT8_MIN;
int32_t x856 = INT32_MIN;
volatile int32_t x905 = INT32_MAX;
int32_t x908 = INT32_MIN;
int64_t x911 = INT64_MIN;
int64_t x994 = 291050403870079LL;
static uint32_t x996 = 4U;
int8_t x1036 = 0;
static uint32_t x1045 = UINT32_MAX;
int64_t x1059 = -1LL;
uint32_t t59 = 2932103U;
uint64_t x1178 = 3396052984389658LLU;
static uint8_t x1207 = 4U;
uint32_t x1228 = 657920315U;
volatile uint64_t t63 = 857246961623LLU;
static volatile int16_t x1251 = INT16_MIN;
int8_t x1256 = 0;
int64_t x1258 = 41773849LL;
uint8_t x1259 = UINT8_MAX;
uint8_t x1318 = 4U;
volatile int32_t x1320 = 2;
int32_t t70 = 1;
uint32_t x1347 = 6U;
static int32_t x1348 = -441212379;
uint64_t x1382 = 8186028516830546182LLU;
int32_t t74 = -692558;
int32_t x1415 = INT32_MIN;
uint16_t x1416 = 7U;
uint64_t x1422 = 13711903435074LLU;
static int64_t x1425 = INT64_MIN;
volatile int64_t t77 = 209850476354337LL;
uint8_t x1563 = 1U;
uint16_t x1569 = 7431U;
uint32_t x1570 = UINT32_MAX;
volatile uint8_t x1572 = 0U;
uint16_t x1583 = 2U;
volatile uint64_t x1586 = UINT64_MAX;
static uint16_t x1756 = 12U;
volatile int32_t t87 = 413411;
static uint16_t x1824 = 9801U;
int8_t x1825 = INT8_MAX;
uint16_t x1828 = 1U;
uint64_t x1877 = 77LLU;
volatile int16_t x1947 = 0;
int32_t t95 = -18183209;
uint32_t x1955 = 8U;
static volatile int64_t t97 = 912559603740917830LL;
int8_t x1963 = INT8_MIN;
int8_t x1965 = INT8_MAX;
volatile int32_t t99 = 11;
int64_t x2013 = INT64_MIN;
int8_t x2015 = INT8_MAX;
int64_t x2027 = INT64_MIN;
volatile uint32_t x2040 = 7515719U;
static int32_t x2075 = INT32_MIN;
uint16_t x2082 = UINT16_MAX;
int8_t x2083 = 1;
static int32_t x2127 = INT32_MAX;
int8_t x2163 = 3;
int32_t t109 = -22;
uint32_t x2194 = 0U;
volatile uint32_t t110 = 247507388U;
int64_t x2279 = 3LL;
int8_t x2332 = 1;
static int64_t x2360 = INT64_MAX;
uint16_t x2385 = UINT16_MAX;
volatile int32_t x2386 = INT32_MAX;
static int32_t x2420 = INT32_MIN;
int16_t x2464 = INT16_MIN;
int32_t t123 = 745415;
volatile uint32_t x2524 = 14U;
uint64_t x2634 = 46974LLU;
volatile uint32_t x2636 = UINT32_MAX;
static volatile uint64_t x2688 = UINT64_MAX;
uint64_t t127 = 6LLU;
static uint8_t x2694 = 16U;
static uint32_t x2707 = 0U;
static int64_t t129 = -17264975950290237LL;
int8_t x2741 = 1;
uint16_t x2742 = UINT16_MAX;
static int8_t x2743 = -1;
uint16_t x2754 = UINT16_MAX;
uint8_t x2756 = 1U;
int16_t x2807 = 0;
int64_t t135 = 1LL;
int32_t x2825 = -11;
static volatile int8_t x2828 = -1;
static int32_t x2875 = 455250;
static volatile uint8_t x2876 = 3U;
uint8_t x2939 = 3U;
int8_t x2945 = -1;
int8_t x2946 = INT8_MAX;
static int32_t x2951 = -1;
volatile int8_t x2952 = 4;
int32_t t145 = -21482586;
static int8_t x2990 = INT8_MAX;
static volatile int32_t t146 = -92;
static int16_t x2996 = INT16_MIN;
volatile int32_t t147 = 5;
uint32_t t148 = 975645121U;
uint8_t x3036 = UINT8_MAX;
uint32_t x3046 = 61493U;
int16_t x3048 = 15;
int64_t x3073 = -4546353LL;
static uint32_t x3074 = 694211180U;
static uint16_t x3122 = 26031U;
int8_t x3162 = 22;
volatile uint32_t x3183 = UINT32_MAX;
uint64_t x3266 = 144992124219841LLU;
volatile uint8_t x3304 = 3U;
int32_t x3315 = 11028194;
uint32_t x3317 = 121U;
static volatile uint64_t x3318 = UINT64_MAX;
uint64_t t162 = 74215772LLU;
int16_t x3365 = -6;
volatile uint16_t x3388 = UINT16_MAX;
volatile int64_t t164 = -46036069162LL;
int32_t x3405 = INT32_MIN;
volatile uint64_t x3407 = 0LLU;
static uint16_t x3408 = 1234U;
volatile uint64_t t165 = 3520170213715274042LLU;
static int64_t x3425 = INT64_MIN;
static uint32_t x3442 = 10375005U;
static volatile uint32_t t168 = 58U;
uint16_t x3454 = 8331U;
int32_t t169 = 176102723;
int32_t t170 = -6051;
uint8_t x3500 = 11U;
int32_t x3519 = 0;
static uint32_t t174 = 15280218U;
int64_t x3534 = 164165797439160LL;
volatile uint8_t x3536 = UINT8_MAX;
int32_t x3569 = INT32_MIN;
int8_t x3598 = 0;
static int64_t x3608 = INT64_MIN;
uint32_t t180 = 15145U;
static int32_t t182 = -131958958;
int32_t x3660 = INT32_MIN;
static int16_t x3681 = -1;
uint64_t t187 = 9870538587LLU;
static volatile uint64_t x3740 = 380821LLU;
volatile int32_t x3825 = -1;
uint32_t x3837 = UINT32_MAX;
volatile int8_t x3839 = INT8_MAX;
uint16_t x3934 = 165U;
int32_t t195 = 2;
int16_t x3943 = -246;
uint8_t x3944 = UINT8_MAX;
int16_t x3950 = INT16_MAX;


void f0(void) {
    	uint64_t x1 = 1825981916002657219LLU;
	int8_t x2 = INT8_MAX;
	uint16_t x3 = 273U;
	static volatile uint64_t t0 = 176901LLU;

    t0 = (x1+(x2>>(x3&x4)));

    if (t0 != 1825981916002657282LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x21 = INT32_MIN;
	uint8_t x22 = UINT8_MAX;
	int64_t x23 = INT64_MIN;
	static uint32_t x24 = 263U;
	volatile int32_t t1 = -48;

    t1 = (x21+(x22>>(x23&x24)));

    if (t1 != -2147483393) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x39 = INT8_MAX;
	int64_t x40 = INT64_MIN;
	volatile uint32_t t2 = 2392390U;

    t2 = (x37+(x38>>(x39&x40)));

    if (t2 != 2147584402U) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x59 = -1;
	uint8_t x60 = 5U;

    t3 = (x57+(x58>>(x59&x60)));

    if (t3 != -2147483645) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x69 = INT32_MIN;
	static volatile uint8_t x71 = 10U;
	int32_t x72 = 1992;

    t4 = (x69+(x70>>(x71&x72)));

    if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x98 = UINT64_MAX;
	uint8_t x100 = 8U;
	uint64_t t5 = 8528876291903982444LLU;

    t5 = (x97+(x98>>(x99&x100)));

    if (t5 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x125 = INT8_MIN;
	volatile uint16_t x126 = UINT16_MAX;
	int8_t x127 = 11;
	int32_t t6 = 0;

    t6 = (x125+(x126>>(x127&x128)));

    if (t6 != -65) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x137 = 9591U;
	uint8_t x138 = 103U;
	uint8_t x139 = 7U;
	int64_t x140 = 2761566733935LL;
	int32_t t7 = 407;

    t7 = (x137+(x138>>(x139&x140)));

    if (t7 != 9591) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x146 = 108614347LL;
	int8_t x147 = INT8_MAX;
	int64_t t8 = 1364288732LL;

    t8 = (x145+(x146>>(x147&x148)));

    if (t8 != 108581579LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x157 = UINT16_MAX;
	static uint16_t x158 = UINT16_MAX;
	int32_t x159 = INT32_MIN;
	uint8_t x160 = 67U;
	volatile int32_t t9 = -1;

    t9 = (x157+(x158>>(x159&x160)));

    if (t9 != 131070) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint8_t x161 = UINT8_MAX;
	static uint16_t x163 = 0U;
	uint64_t x164 = UINT64_MAX;
	int32_t t10 = 885839;

    t10 = (x161+(x162>>(x163&x164)));

    if (t10 != 255) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint16_t x205 = UINT16_MAX;
	static uint32_t x206 = 15506748U;
	uint8_t x207 = 28U;
	uint32_t t11 = 1U;

    t11 = (x205+(x206>>(x207&x208)));

    if (t11 != 15572283U) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint16_t x209 = 0U;

    t12 = (x209+(x210>>(x211&x212)));

    if (t12 != 2147483647U) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x218 = 0;
	static int64_t x219 = INT64_MAX;
	static uint64_t x220 = 15LLU;
	uint64_t t13 = UINT64_MAX;

    t13 = (x217+(x218>>(x219&x220)));

    if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x221 = 14852U;
	uint8_t x222 = 12U;
	int64_t x224 = INT64_MIN;
	volatile int32_t t14 = 405;

    t14 = (x221+(x222>>(x223&x224)));

    if (t14 != 14864) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x241 = INT32_MAX;
	uint32_t x242 = 1965683U;
	uint8_t x244 = 1U;

    t15 = (x241+(x242>>(x243&x244)));

    if (t15 != 2149449330U) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint32_t x289 = 20383258U;
	static uint16_t x290 = 12354U;
	static volatile int8_t x291 = INT8_MAX;
	uint16_t x292 = 150U;
	static volatile uint32_t t16 = 2U;

    t16 = (x289+(x290>>(x291&x292)));

    if (t16 != 20383258U) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x305 = -3;
	volatile uint32_t x306 = UINT32_MAX;
	uint32_t x307 = 6U;
	int64_t x308 = INT64_MIN;
	uint32_t t17 = 28765U;

    t17 = (x305+(x306>>(x307&x308)));

    if (t17 != 4294967292U) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x317 = 96316LL;
	int16_t x318 = 2471;
	volatile int8_t x319 = 24;
	static uint16_t x320 = 56U;

    t18 = (x317+(x318>>(x319&x320)));

    if (t18 != 96316LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x357 = 18LLU;
	static int32_t x358 = INT32_MAX;
	static uint8_t x359 = 53U;
	int32_t x360 = INT32_MIN;
	volatile uint64_t t19 = 1080426048623LLU;

    t19 = (x357+(x358>>(x359&x360)));

    if (t19 != 2147483665LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint64_t x373 = 209403124LLU;
	uint8_t x374 = 49U;
	uint16_t x375 = 1U;
	static uint64_t t20 = 36166239369LLU;

    t20 = (x373+(x374>>(x375&x376)));

    if (t20 != 209403173LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x385 = -186675247LL;
	uint64_t x386 = 215757630759858407LLU;
	volatile int8_t x387 = 28;
	volatile uint64_t t21 = 19406137LLU;

    t21 = (x385+(x386>>(x387&x388)));

    if (t21 != 617084561LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x389 = INT8_MIN;
	uint32_t x390 = 900953U;
	int16_t x391 = 15864;
	int64_t x392 = INT64_MIN;

    t22 = (x389+(x390>>(x391&x392)));

    if (t22 != 900825U) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x397 = -731512460363631663LL;
	static volatile uint8_t x398 = 5U;
	int64_t x399 = INT64_MIN;
	int64_t x400 = INT64_MAX;
	int64_t t23 = 365302LL;

    t23 = (x397+(x398>>(x399&x400)));

    if (t23 != -731512460363631658LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x433 = UINT8_MAX;
	int32_t x434 = INT32_MAX;
	volatile int8_t x435 = 6;
	int32_t x436 = 24561668;
	int32_t t24 = 2936;

    t24 = (x433+(x434>>(x435&x436)));

    if (t24 != 134217982) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x457 = UINT64_MAX;
	static uint8_t x459 = 1U;
	volatile uint64_t t25 = 92077884LLU;

    t25 = (x457+(x458>>(x459&x460)));

    if (t25 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x489 = -1LL;
	int32_t x490 = 0;
	uint64_t x491 = 8LLU;
	static int16_t x492 = INT16_MIN;
	int64_t t26 = -14589147692059327LL;

    t26 = (x489+(x490>>(x491&x492)));

    if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x501 = 13U;
	static volatile uint64_t x502 = UINT64_MAX;
	uint8_t x504 = 77U;

    t27 = (x501+(x502>>(x503&x504)));

    if (t27 != 72057594037927948LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x533 = INT32_MIN;
	int16_t x535 = 0;
	int8_t x536 = INT8_MIN;
	static int32_t t28 = -46184;

    t28 = (x533+(x534>>(x535&x536)));

    if (t28 != -2147483647) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x541 = 80788LLU;
	volatile int64_t x542 = 24544698626993356LL;
	int16_t x543 = INT16_MIN;
	volatile uint64_t t29 = 127777430472388LLU;

    t29 = (x541+(x542>>(x543&x544)));

    if (t29 != 24544698627074144LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x563 = 1U;
	volatile int16_t x564 = INT16_MIN;
	int32_t t30 = 710;

    t30 = (x561+(x562>>(x563&x564)));

    if (t30 != 260) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x569 = -1LL;
	uint16_t x571 = 200U;
	static uint64_t t31 = 1825LLU;

    t31 = (x569+(x570>>(x571&x572)));

    if (t31 != 1070426799LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int8_t x593 = -1;
	volatile int32_t x594 = 2368;
	uint32_t x595 = UINT32_MAX;
	int64_t x596 = INT64_MIN;

    t32 = (x593+(x594>>(x595&x596)));

    if (t32 != 2367) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x613 = 1065541477880LLU;
	uint64_t x614 = 18LLU;
	uint16_t x616 = 7U;

    t33 = (x613+(x614>>(x615&x616)));

    if (t33 != 1065541477898LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x629 = INT32_MIN;
	uint32_t x631 = 2U;
	volatile uint64_t x632 = UINT64_MAX;
	uint32_t t34 = 4183507U;

    t34 = (x629+(x630>>(x631&x632)));

    if (t34 != 2147483650U) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x641 = INT8_MIN;
	volatile int8_t x643 = 4;
	int32_t x644 = INT32_MIN;
	volatile int32_t t35 = 4066;

    t35 = (x641+(x642>>(x643&x644)));

    if (t35 != 216) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x658 = 402932U;
	volatile int16_t x659 = INT16_MIN;
	int16_t x660 = INT16_MAX;
	volatile uint32_t t36 = 97098373U;

    t36 = (x657+(x658>>(x659&x660)));

    if (t36 != 403187U) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x673 = UINT32_MAX;
	uint64_t x674 = 365LLU;
	uint64_t x675 = 1LLU;

    t37 = (x673+(x674>>(x675&x676)));

    if (t37 != 4294967477LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x689 = INT64_MIN;
	volatile int8_t x691 = 52;
	static int16_t x692 = 715;
	int64_t t38 = 19122548LL;

    t38 = (x689+(x690>>(x691&x692)));

    if (t38 != -9223372036788361319LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x697 = -7295;
	volatile uint8_t x698 = 1U;
	int32_t t39 = -181726361;

    t39 = (x697+(x698>>(x699&x700)));

    if (t39 != -7295) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x721 = -11566255;
	int64_t x723 = -1LL;
	uint8_t x724 = 16U;
	volatile int32_t t40 = -74093;

    t40 = (x721+(x722>>(x723&x724)));

    if (t40 != -11566255) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x729 = INT16_MAX;
	static volatile uint8_t x730 = UINT8_MAX;
	static int32_t x731 = 45647729;
	uint8_t x732 = 2U;
	volatile int32_t t41 = 3015112;

    t41 = (x729+(x730>>(x731&x732)));

    if (t41 != 33022) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x737 = 23;
	uint16_t x738 = 2092U;
	uint32_t x739 = 23604U;
	int64_t x740 = INT64_MIN;
	int32_t t42 = -945032675;

    t42 = (x737+(x738>>(x739&x740)));

    if (t42 != 2115) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x753 = 0;
	static int32_t x754 = 0;
	int8_t x755 = INT8_MAX;
	int16_t x756 = INT16_MIN;

    t43 = (x753+(x754>>(x755&x756)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x769 = 87U;
	int16_t x771 = 1;
	static int32_t x772 = -1;
	int32_t t44 = -238;

    t44 = (x769+(x770>>(x771&x772)));

    if (t44 != 93) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int8_t x789 = 31;
	int8_t x791 = 1;
	int64_t x792 = -17229425746512LL;
	int64_t t45 = 161364132787684403LL;

    t45 = (x789+(x790>>(x791&x792)));

    if (t45 != 1309505230159841LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x797 = INT64_MIN;
	static volatile uint32_t x798 = 4273514U;
	int32_t x799 = -1;
	static volatile int8_t x800 = 1;
	int64_t t46 = -4851087768LL;

    t46 = (x797+(x798>>(x799&x800)));

    if (t46 != -9223372036852639051LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x801 = 18U;
	uint16_t x802 = 14235U;
	int64_t x803 = 2934272756272139LL;
	int64_t x804 = INT64_MIN;
	volatile int32_t t47 = 26470683;

    t47 = (x801+(x802>>(x803&x804)));

    if (t47 != 14253) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x826 = 28U;
	int64_t x827 = 7LL;
	int8_t x828 = -5;
	uint32_t t48 = 121567729U;

    t48 = (x825+(x826>>(x827&x828)));

    if (t48 != 4294967171U) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x849 = INT8_MAX;
	uint64_t x850 = 301998LLU;
	uint64_t x851 = UINT64_MAX;
	static uint32_t x852 = 1U;
	volatile uint64_t t49 = 3447742675LLU;

    t49 = (x849+(x850>>(x851&x852)));

    if (t49 != 151126LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x853 = -1;
	int8_t x854 = INT8_MAX;
	int64_t x855 = 794LL;
	int32_t t50 = -4491;

    t50 = (x853+(x854>>(x855&x856)));

    if (t50 != 126) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int16_t x857 = INT16_MIN;
	uint32_t x858 = 1791911462U;
	volatile int8_t x859 = 0;
	uint16_t x860 = UINT16_MAX;
	static uint32_t t51 = 1096562U;

    t51 = (x857+(x858>>(x859&x860)));

    if (t51 != 1791878694U) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint32_t x906 = UINT32_MAX;
	volatile uint32_t x907 = 83729870U;
	volatile uint32_t t52 = 4615U;

    t52 = (x905+(x906>>(x907&x908)));

    if (t52 != 2147483646U) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x909 = 93U;
	uint64_t x910 = 44007221909840LLU;
	static volatile int64_t x912 = INT64_MAX;
	uint64_t t53 = 23800LLU;

    t53 = (x909+(x910>>(x911&x912)));

    if (t53 != 44007221909933LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x993 = INT32_MIN;
	uint64_t x995 = 1631228LLU;
	volatile int64_t t54 = -3788860852310322748LL;

    t54 = (x993+(x994>>(x995&x996)));

    if (t54 != 18188502758231LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x1033 = INT16_MAX;
	uint64_t x1034 = UINT64_MAX;
	uint64_t x1035 = 4792031LLU;
	static volatile uint64_t t55 = 224853482413437LLU;

    t55 = (x1033+(x1034>>(x1035&x1036)));

    if (t55 != 32766LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x1046 = 9024745;
	uint8_t x1047 = 8U;
	int8_t x1048 = 0;
	volatile uint32_t t56 = 9934785U;

    t56 = (x1045+(x1046>>(x1047&x1048)));

    if (t56 != 9024744U) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x1057 = INT8_MIN;
	volatile uint16_t x1058 = 21594U;
	static volatile uint16_t x1060 = 16U;
	volatile int32_t t57 = 1456370;

    t57 = (x1057+(x1058>>(x1059&x1060)));

    if (t57 != -128) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int16_t x1073 = -20;
	uint32_t x1074 = 0U;
	static uint8_t x1075 = 7U;
	int64_t x1076 = INT64_MIN;
	static uint32_t t58 = 217559U;

    t58 = (x1073+(x1074>>(x1075&x1076)));

    if (t58 != 4294967276U) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x1089 = INT32_MIN;
	uint32_t x1090 = 1802963752U;
	static volatile uint32_t x1091 = UINT32_MAX;
	uint8_t x1092 = 24U;

    t59 = (x1089+(x1090>>(x1091&x1092)));

    if (t59 != 2147483755U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x1117 = 108160088613LLU;
	static uint16_t x1118 = 435U;
	uint8_t x1119 = 60U;
	int64_t x1120 = INT64_MIN;
	uint64_t t60 = 7544LLU;

    t60 = (x1117+(x1118>>(x1119&x1120)));

    if (t60 != 108160089048LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x1177 = 4U;
	int32_t x1179 = INT32_MAX;
	int8_t x1180 = 2;
	volatile uint64_t t61 = 666123327431883LLU;

    t61 = (x1177+(x1178>>(x1179&x1180)));

    if (t61 != 849013246097418LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x1205 = INT32_MIN;
	int8_t x1206 = 44;
	uint8_t x1208 = 83U;
	volatile int32_t t62 = 12;

    t62 = (x1205+(x1206>>(x1207&x1208)));

    if (t62 != -2147483604) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint32_t x1225 = UINT32_MAX;
	uint64_t x1226 = 3LLU;
	int32_t x1227 = INT32_MIN;

    t63 = (x1225+(x1226>>(x1227&x1228)));

    if (t63 != 4294967298LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x1233 = INT8_MIN;
	static uint16_t x1234 = UINT16_MAX;
	volatile int32_t x1235 = INT32_MIN;
	static uint16_t x1236 = 1789U;
	volatile int32_t t64 = 0;

    t64 = (x1233+(x1234>>(x1235&x1236)));

    if (t64 != 65407) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x1249 = 11325U;
	int64_t x1250 = 158501265LL;
	uint8_t x1252 = 56U;
	int64_t t65 = -661303928LL;

    t65 = (x1249+(x1250>>(x1251&x1252)));

    if (t65 != 158512590LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x1253 = -16;
	volatile int8_t x1254 = INT8_MAX;
	uint64_t x1255 = UINT64_MAX;
	static int32_t t66 = -2;

    t66 = (x1253+(x1254>>(x1255&x1256)));

    if (t66 != 111) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x1257 = -1LL;
	uint64_t x1260 = 117908670031797799LLU;
	int64_t t67 = 1LL;

    t67 = (x1257+(x1258>>(x1259&x1260)));

    if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x1261 = 7529;
	uint64_t x1262 = 6LLU;
	static int8_t x1263 = 23;
	int8_t x1264 = INT8_MAX;
	volatile uint64_t t68 = 1227530LLU;

    t68 = (x1261+(x1262>>(x1263&x1264)));

    if (t68 != 7529LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x1309 = UINT32_MAX;
	static int16_t x1310 = 4223;
	volatile int32_t x1311 = INT32_MIN;
	volatile int64_t x1312 = 0LL;
	static uint32_t t69 = 1530482U;

    t69 = (x1309+(x1310>>(x1311&x1312)));

    if (t69 != 4222U) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x1317 = 972;
	static int64_t x1319 = INT64_MAX;

    t70 = (x1317+(x1318>>(x1319&x1320)));

    if (t70 != 973) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x1345 = INT16_MIN;
	uint16_t x1346 = 25469U;
	volatile int32_t t71 = 16204700;

    t71 = (x1345+(x1346>>(x1347&x1348)));

    if (t71 != -31177) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x1361 = 15123322210740438LLU;
	uint32_t x1362 = UINT32_MAX;
	int32_t x1363 = INT32_MIN;
	uint32_t x1364 = 1736967319U;
	uint64_t t72 = 212239725594716845LLU;

    t72 = (x1361+(x1362>>(x1363&x1364)));

    if (t72 != 15123326505707733LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x1381 = INT64_MAX;
	int64_t x1383 = INT64_MIN;
	int32_t x1384 = INT32_MAX;
	volatile uint64_t t73 = 2176167399272LLU;

    t73 = (x1381+(x1382>>(x1383&x1384)));

    if (t73 != 17409400553685321989LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x1409 = 383;
	static uint16_t x1410 = UINT16_MAX;
	int16_t x1411 = -120;
	static int8_t x1412 = 27;

    t74 = (x1409+(x1410>>(x1411&x1412)));

    if (t74 != 638) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x1413 = 5U;
	static uint32_t x1414 = UINT32_MAX;
	volatile uint32_t t75 = 12291319U;

    t75 = (x1413+(x1414>>(x1415&x1416)));

    if (t75 != 4U) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x1421 = INT32_MAX;
	int16_t x1423 = -1;
	uint8_t x1424 = 5U;
	static uint64_t t76 = 32394785715LLU;

    t76 = (x1421+(x1422>>(x1423&x1424)));

    if (t76 != 430644465993LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x1426 = UINT32_MAX;
	volatile uint16_t x1427 = 0U;
	int64_t x1428 = -1076009997751967846LL;

    t77 = (x1425+(x1426>>(x1427&x1428)));

    if (t77 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x1505 = UINT8_MAX;
	volatile int64_t x1506 = 14190LL;
	uint8_t x1507 = 9U;
	volatile int64_t x1508 = -1LL;
	int64_t t78 = -4262690178321665LL;

    t78 = (x1505+(x1506>>(x1507&x1508)));

    if (t78 != 282LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x1521 = INT32_MIN;
	uint64_t x1522 = 14150LLU;
	int16_t x1523 = 3;
	int8_t x1524 = INT8_MIN;
	volatile uint64_t t79 = 86108515967794516LLU;

    t79 = (x1521+(x1522>>(x1523&x1524)));

    if (t79 != 18446744071562082118LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x1525 = 258145502U;
	volatile uint16_t x1526 = 298U;
	int64_t x1527 = INT64_MAX;
	volatile int64_t x1528 = INT64_MIN;
	uint32_t t80 = 3207U;

    t80 = (x1525+(x1526>>(x1527&x1528)));

    if (t80 != 258145800U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x1533 = 5U;
	static int64_t x1534 = 3514608952520233LL;
	int8_t x1535 = 11;
	volatile int8_t x1536 = -1;
	volatile int64_t t81 = 15LL;

    t81 = (x1533+(x1534>>(x1535&x1536)));

    if (t81 != 1716117652602LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x1561 = -7500;
	static uint32_t x1562 = UINT32_MAX;
	int32_t x1564 = -1;
	uint32_t t82 = 501021U;

    t82 = (x1561+(x1562>>(x1563&x1564)));

    if (t82 != 2147476147U) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x1571 = INT8_MIN;
	uint32_t t83 = 3623U;

    t83 = (x1569+(x1570>>(x1571&x1572)));

    if (t83 != 7430U) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint64_t x1581 = 10611244814430406LLU;
	uint8_t x1582 = UINT8_MAX;
	int16_t x1584 = -1;
	static volatile uint64_t t84 = 743435098526885LLU;

    t84 = (x1581+(x1582>>(x1583&x1584)));

    if (t84 != 10611244814430469LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x1585 = INT8_MIN;
	int16_t x1587 = INT16_MIN;
	uint8_t x1588 = UINT8_MAX;
	uint64_t t85 = 79688849542541063LLU;

    t85 = (x1585+(x1586>>(x1587&x1588)));

    if (t85 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x1753 = -1LL;
	static int64_t x1754 = INT64_MAX;
	static uint8_t x1755 = UINT8_MAX;
	int64_t t86 = 7LL;

    t86 = (x1753+(x1754>>(x1755&x1756)));

    if (t86 != 2251799813685246LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x1761 = 1782;
	int32_t x1762 = INT32_MAX;
	uint32_t x1763 = 11U;
	int16_t x1764 = -1;

    t87 = (x1761+(x1762>>(x1763&x1764)));

    if (t87 != 1050357) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x1789 = INT16_MIN;
	static uint16_t x1790 = 1U;
	uint16_t x1791 = 13U;
	volatile uint16_t x1792 = UINT16_MAX;
	int32_t t88 = -1336750;

    t88 = (x1789+(x1790>>(x1791&x1792)));

    if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x1821 = INT16_MIN;
	static int8_t x1822 = INT8_MAX;
	int16_t x1823 = INT16_MIN;
	volatile int32_t t89 = 2317;

    t89 = (x1821+(x1822>>(x1823&x1824)));

    if (t89 != -32641) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x1826 = INT8_MAX;
	static uint16_t x1827 = 0U;
	int32_t t90 = 858732177;

    t90 = (x1825+(x1826>>(x1827&x1828)));

    if (t90 != 254) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x1853 = -1LL;
	int64_t x1854 = 23559LL;
	static int32_t x1855 = INT32_MIN;
	uint32_t x1856 = 630U;
	int64_t t91 = 17754028748LL;

    t91 = (x1853+(x1854>>(x1855&x1856)));

    if (t91 != 23558LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x1878 = INT16_MAX;
	int8_t x1879 = INT8_MAX;
	int32_t x1880 = INT32_MIN;
	volatile uint64_t t92 = 760599833837006LLU;

    t92 = (x1877+(x1878>>(x1879&x1880)));

    if (t92 != 32844LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x1893 = -1;
	uint16_t x1894 = 6U;
	static int16_t x1895 = 31;
	int16_t x1896 = 6607;
	int32_t t93 = 0;

    t93 = (x1893+(x1894>>(x1895&x1896)));

    if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x1901 = INT32_MIN;
	uint16_t x1902 = UINT16_MAX;
	uint16_t x1903 = 29U;
	int32_t x1904 = -25863059;
	static int32_t t94 = -3755457;

    t94 = (x1901+(x1902>>(x1903&x1904)));

    if (t94 != -2147483641) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x1945 = 1;
	volatile int32_t x1946 = 255129;
	int32_t x1948 = 979;

    t95 = (x1945+(x1946>>(x1947&x1948)));

    if (t95 != 255130) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x1953 = UINT64_MAX;
	uint32_t x1954 = UINT32_MAX;
	static uint32_t x1956 = 46U;
	volatile uint64_t t96 = 65LLU;

    t96 = (x1953+(x1954>>(x1955&x1956)));

    if (t96 != 16777214LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x1957 = 8;
	static int64_t x1958 = 38LL;
	static int8_t x1959 = INT8_MAX;
	int8_t x1960 = INT8_MIN;

    t97 = (x1957+(x1958>>(x1959&x1960)));

    if (t97 != 46LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint64_t x1961 = 437671371LLU;
	uint16_t x1962 = UINT16_MAX;
	volatile uint8_t x1964 = 16U;
	volatile uint64_t t98 = 14848427099398LLU;

    t98 = (x1961+(x1962>>(x1963&x1964)));

    if (t98 != 437736906LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x1966 = INT8_MAX;
	static int16_t x1967 = 3;
	static volatile int64_t x1968 = INT64_MIN;

    t99 = (x1965+(x1966>>(x1967&x1968)));

    if (t99 != 254) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint16_t x2014 = 4U;
	int8_t x2016 = 0;
	int64_t t100 = -98924208019086LL;

    t100 = (x2013+(x2014>>(x2015&x2016)));

    if (t100 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x2017 = INT16_MIN;
	uint16_t x2018 = UINT16_MAX;
	int64_t x2019 = INT64_MIN;
	uint32_t x2020 = 1345U;
	volatile int32_t t101 = -60286;

    t101 = (x2017+(x2018>>(x2019&x2020)));

    if (t101 != 32767) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x2025 = INT64_MIN;
	static uint8_t x2026 = UINT8_MAX;
	uint32_t x2028 = UINT32_MAX;
	int64_t t102 = 121LL;

    t102 = (x2025+(x2026>>(x2027&x2028)));

    if (t102 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x2037 = INT32_MIN;
	uint16_t x2038 = 544U;
	uint16_t x2039 = 31U;
	static volatile int32_t t103 = 424;

    t103 = (x2037+(x2038>>(x2039&x2040)));

    if (t103 != -2147483644) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x2073 = INT16_MAX;
	int8_t x2074 = 1;
	uint32_t x2076 = 1826633U;
	volatile int32_t t104 = 21886200;

    t104 = (x2073+(x2074>>(x2075&x2076)));

    if (t104 != 32768) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x2081 = INT64_MIN;
	static uint16_t x2084 = 13279U;
	volatile int64_t t105 = -59613877LL;

    t105 = (x2081+(x2082>>(x2083&x2084)));

    if (t105 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x2093 = INT8_MIN;
	volatile uint32_t x2094 = UINT32_MAX;
	int8_t x2095 = -1;
	static uint8_t x2096 = 9U;
	uint32_t t106 = 1147552046U;

    t106 = (x2093+(x2094>>(x2095&x2096)));

    if (t106 != 8388479U) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x2125 = INT16_MIN;
	static uint8_t x2126 = 7U;
	int32_t x2128 = 1;
	static volatile int32_t t107 = -1386098;

    t107 = (x2125+(x2126>>(x2127&x2128)));

    if (t107 != -32765) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x2149 = -10928;
	int8_t x2150 = INT8_MAX;
	uint8_t x2151 = UINT8_MAX;
	static int16_t x2152 = -254;
	volatile int32_t t108 = -76504;

    t108 = (x2149+(x2150>>(x2151&x2152)));

    if (t108 != -10897) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint8_t x2161 = 4U;
	int16_t x2162 = 1249;
	int64_t x2164 = -1LL;

    t109 = (x2161+(x2162>>(x2163&x2164)));

    if (t109 != 160) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint16_t x2193 = 5U;
	uint32_t x2195 = 30990302U;
	uint32_t x2196 = 7U;

    t110 = (x2193+(x2194>>(x2195&x2196)));

    if (t110 != 5U) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x2249 = -1LL;
	uint32_t x2250 = 15998U;
	volatile int64_t x2251 = INT64_MIN;
	volatile int64_t x2252 = INT64_MAX;
	volatile int64_t t111 = 246LL;

    t111 = (x2249+(x2250>>(x2251&x2252)));

    if (t111 != 15997LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x2277 = UINT32_MAX;
	uint16_t x2278 = 26U;
	int16_t x2280 = -1;
	uint32_t t112 = 233U;

    t112 = (x2277+(x2278>>(x2279&x2280)));

    if (t112 != 2U) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x2293 = -27;
	int64_t x2294 = INT64_MAX;
	int8_t x2295 = 53;
	int8_t x2296 = INT8_MIN;
	volatile int64_t t113 = 19200095LL;

    t113 = (x2293+(x2294>>(x2295&x2296)));

    if (t113 != 9223372036854775780LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x2317 = INT16_MIN;
	static uint8_t x2318 = UINT8_MAX;
	int16_t x2319 = INT16_MIN;
	static uint8_t x2320 = 2U;
	volatile int32_t t114 = 1114494;

    t114 = (x2317+(x2318>>(x2319&x2320)));

    if (t114 != -32513) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x2325 = -1LL;
	uint32_t x2326 = 34U;
	static uint16_t x2327 = UINT16_MAX;
	volatile uint16_t x2328 = 4U;
	int64_t t115 = 25042929323231LL;

    t115 = (x2325+(x2326>>(x2327&x2328)));

    if (t115 != 1LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x2329 = 20265855568LLU;
	int8_t x2330 = INT8_MAX;
	static volatile int64_t x2331 = -1LL;
	volatile uint64_t t116 = 1447357887782LLU;

    t116 = (x2329+(x2330>>(x2331&x2332)));

    if (t116 != 20265855631LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x2337 = INT16_MAX;
	static uint64_t x2338 = 678952069226947LLU;
	volatile int32_t x2339 = 905;
	static int16_t x2340 = INT16_MIN;
	volatile uint64_t t117 = 0LLU;

    t117 = (x2337+(x2338>>(x2339&x2340)));

    if (t117 != 678952069259714LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x2357 = -28793405044112399LL;
	volatile uint8_t x2358 = 18U;
	volatile int64_t x2359 = INT64_MIN;
	volatile int64_t t118 = -978666264LL;

    t118 = (x2357+(x2358>>(x2359&x2360)));

    if (t118 != -28793405044112381LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x2387 = -1;
	volatile uint8_t x2388 = 5U;
	int32_t t119 = 34260528;

    t119 = (x2385+(x2386>>(x2387&x2388)));

    if (t119 != 67174398) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint32_t x2405 = 821712366U;
	static uint64_t x2406 = 55LLU;
	int64_t x2407 = -768635216LL;
	static uint8_t x2408 = 1U;
	uint64_t t120 = 1531744265698041528LLU;

    t120 = (x2405+(x2406>>(x2407&x2408)));

    if (t120 != 821712421LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x2417 = INT32_MAX;
	int64_t x2418 = 86933158815LL;
	volatile int8_t x2419 = 1;
	int64_t t121 = 5165LL;

    t121 = (x2417+(x2418>>(x2419&x2420)));

    if (t121 != 89080642462LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x2457 = -2127160899081513LL;
	uint16_t x2458 = 122U;
	static int8_t x2459 = 13;
	volatile int8_t x2460 = INT8_MAX;
	int64_t t122 = -66996148145LL;

    t122 = (x2457+(x2458>>(x2459&x2460)));

    if (t122 != -2127160899081513LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x2461 = -40;
	int32_t x2462 = INT32_MAX;
	uint8_t x2463 = UINT8_MAX;

    t123 = (x2461+(x2462>>(x2463&x2464)));

    if (t123 != 2147483607) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x2485 = INT64_MAX;
	uint64_t x2486 = UINT64_MAX;
	static uint8_t x2487 = 76U;
	volatile uint8_t x2488 = 7U;
	static volatile uint64_t t124 = 249635368057582LLU;

    t124 = (x2485+(x2486>>(x2487&x2488)));

    if (t124 != 10376293541461622782LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x2521 = -2;
	volatile uint8_t x2522 = 4U;
	int8_t x2523 = INT8_MIN;
	static volatile int32_t t125 = 5;

    t125 = (x2521+(x2522>>(x2523&x2524)));

    if (t125 != 2) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x2633 = -57;
	int16_t x2635 = 2;
	uint64_t t126 = 464033113LLU;

    t126 = (x2633+(x2634>>(x2635&x2636)));

    if (t126 != 11686LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x2685 = 8189776741504LLU;
	static int8_t x2686 = 13;
	uint8_t x2687 = 0U;

    t127 = (x2685+(x2686>>(x2687&x2688)));

    if (t127 != 8189776741517LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x2693 = -1;
	volatile int32_t x2695 = -1;
	uint16_t x2696 = 3U;
	int32_t t128 = 308;

    t128 = (x2693+(x2694>>(x2695&x2696)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x2705 = 1LL;
	static uint16_t x2706 = 447U;
	int16_t x2708 = INT16_MAX;

    t129 = (x2705+(x2706>>(x2707&x2708)));

    if (t129 != 448LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x2744 = 1;
	static int32_t t130 = 65206;

    t130 = (x2741+(x2742>>(x2743&x2744)));

    if (t130 != 32768) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x2753 = -1;
	uint8_t x2755 = UINT8_MAX;
	static int32_t t131 = -1060;

    t131 = (x2753+(x2754>>(x2755&x2756)));

    if (t131 != 32766) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x2757 = 4092U;
	uint64_t x2758 = UINT64_MAX;
	static volatile int32_t x2759 = -277948078;
	static uint16_t x2760 = 0U;
	volatile uint64_t t132 = 1175750212713LLU;

    t132 = (x2757+(x2758>>(x2759&x2760)));

    if (t132 != 4091LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x2769 = INT64_MAX;
	int16_t x2770 = INT16_MAX;
	int64_t x2771 = -1LL;
	int16_t x2772 = 22;
	static volatile int64_t t133 = INT64_MAX;

    t133 = (x2769+(x2770>>(x2771&x2772)));

    if (t133 != INT64_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x2793 = 3U;
	uint64_t x2794 = UINT64_MAX;
	volatile int32_t x2795 = INT32_MIN;
	uint16_t x2796 = 12U;
	volatile uint64_t t134 = 34099845407475LLU;

    t134 = (x2793+(x2794>>(x2795&x2796)));

    if (t134 != 2LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x2805 = 134743644538852LL;
	uint16_t x2806 = 4U;
	volatile uint8_t x2808 = 3U;

    t135 = (x2805+(x2806>>(x2807&x2808)));

    if (t135 != 134743644538856LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x2809 = 674;
	int16_t x2810 = INT16_MAX;
	int64_t x2811 = -1LL;
	uint32_t x2812 = 27U;
	volatile int32_t t136 = -135;

    t136 = (x2809+(x2810>>(x2811&x2812)));

    if (t136 != 674) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x2813 = 2073LL;
	uint32_t x2814 = UINT32_MAX;
	static uint64_t x2815 = 3891450539937039599LLU;
	static uint8_t x2816 = 14U;
	volatile int64_t t137 = 7864100200940116LL;

    t137 = (x2813+(x2814>>(x2815&x2816)));

    if (t137 != 264216LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x2826 = UINT16_MAX;
	volatile uint16_t x2827 = 5U;
	static int32_t t138 = -1853;

    t138 = (x2825+(x2826>>(x2827&x2828)));

    if (t138 != 2036) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x2873 = -1LL;
	volatile int16_t x2874 = INT16_MAX;
	int64_t t139 = 70306639892786LL;

    t139 = (x2873+(x2874>>(x2875&x2876)));

    if (t139 != 8190LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x2881 = INT8_MAX;
	uint32_t x2882 = 2085U;
	int32_t x2883 = INT32_MIN;
	uint16_t x2884 = UINT16_MAX;
	uint32_t t140 = 791418590U;

    t140 = (x2881+(x2882>>(x2883&x2884)));

    if (t140 != 2212U) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x2893 = UINT8_MAX;
	uint64_t x2894 = UINT64_MAX;
	int32_t x2895 = INT32_MAX;
	uint8_t x2896 = 12U;
	volatile uint64_t t141 = 1LLU;

    t141 = (x2893+(x2894>>(x2895&x2896)));

    if (t141 != 4503599627370750LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x2937 = UINT32_MAX;
	uint8_t x2938 = 0U;
	volatile int16_t x2940 = INT16_MIN;
	volatile uint32_t t142 = UINT32_MAX;

    t142 = (x2937+(x2938>>(x2939&x2940)));

    if (t142 != UINT32_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x2947 = 6U;
	static volatile int32_t x2948 = INT32_MAX;
	volatile int32_t t143 = -1061;

    t143 = (x2945+(x2946>>(x2947&x2948)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x2949 = INT64_MIN;
	int16_t x2950 = 170;
	volatile int64_t t144 = -19LL;

    t144 = (x2949+(x2950>>(x2951&x2952)));

    if (t144 != -9223372036854775798LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x2977 = INT8_MIN;
	int32_t x2978 = INT32_MAX;
	int32_t x2979 = 206287;
	uint8_t x2980 = 1U;

    t145 = (x2977+(x2978>>(x2979&x2980)));

    if (t145 != 1073741695) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x2989 = INT32_MIN;
	uint16_t x2991 = 8U;
	int16_t x2992 = INT16_MIN;

    t146 = (x2989+(x2990>>(x2991&x2992)));

    if (t146 != -2147483521) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x2993 = 4U;
	static int16_t x2994 = 204;
	int8_t x2995 = 0;

    t147 = (x2993+(x2994>>(x2995&x2996)));

    if (t147 != 208) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x2997 = INT16_MAX;
	static uint32_t x2998 = 3993832U;
	volatile int64_t x2999 = INT64_MIN;
	int32_t x3000 = 16491;

    t148 = (x2997+(x2998>>(x2999&x3000)));

    if (t148 != 4026599U) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x3033 = 467U;
	static uint16_t x3034 = 10175U;
	static int64_t x3035 = INT64_MIN;
	volatile uint32_t t149 = 68123U;

    t149 = (x3033+(x3034>>(x3035&x3036)));

    if (t149 != 10642U) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x3045 = INT8_MIN;
	volatile int8_t x3047 = INT8_MAX;
	uint32_t t150 = 21U;

    t150 = (x3045+(x3046>>(x3047&x3048)));

    if (t150 != 4294967169U) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x3075 = 14U;
	int16_t x3076 = 0;
	int64_t t151 = -9037574170LL;

    t151 = (x3073+(x3074>>(x3075&x3076)));

    if (t151 != 689664827LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int32_t x3081 = INT32_MIN;
	static uint64_t x3082 = UINT64_MAX;
	uint64_t x3083 = 199538LLU;
	int64_t x3084 = 42LL;
	static uint64_t t152 = 2075957864328680246LLU;

    t152 = (x3081+(x3082>>(x3083&x3084)));

    if (t152 != 18446744072635809791LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x3089 = -1;
	uint8_t x3090 = 3U;
	uint16_t x3091 = 9U;
	int32_t x3092 = INT32_MIN;
	static int32_t t153 = 1040601;

    t153 = (x3089+(x3090>>(x3091&x3092)));

    if (t153 != 2) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x3121 = 2222U;
	volatile int16_t x3123 = INT16_MIN;
	volatile uint8_t x3124 = 1U;
	volatile int32_t t154 = 4232;

    t154 = (x3121+(x3122>>(x3123&x3124)));

    if (t154 != 28253) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int8_t x3161 = 10;
	volatile int8_t x3163 = 11;
	static volatile uint64_t x3164 = UINT64_MAX;
	int32_t t155 = 968373;

    t155 = (x3161+(x3162>>(x3163&x3164)));

    if (t155 != 10) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x3181 = -1;
	uint64_t x3182 = UINT64_MAX;
	volatile int8_t x3184 = 9;
	uint64_t t156 = 44725548838849LLU;

    t156 = (x3181+(x3182>>(x3183&x3184)));

    if (t156 != 36028797018963966LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x3213 = 4;
	static uint64_t x3214 = 60798672668LLU;
	static uint16_t x3215 = 487U;
	int64_t x3216 = INT64_MIN;
	uint64_t t157 = 1741308252LLU;

    t157 = (x3213+(x3214>>(x3215&x3216)));

    if (t157 != 60798672672LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x3265 = 1U;
	static int16_t x3267 = 6582;
	volatile int8_t x3268 = INT8_MAX;
	uint64_t t158 = 164991877LLU;

    t158 = (x3265+(x3266>>(x3267&x3268)));

    if (t158 != 1LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x3281 = UINT32_MAX;
	volatile uint8_t x3282 = UINT8_MAX;
	int64_t x3283 = 266344565LL;
	static uint8_t x3284 = 13U;
	volatile uint32_t t159 = 40617U;

    t159 = (x3281+(x3282>>(x3283&x3284)));

    if (t159 != 6U) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x3301 = -1;
	uint32_t x3302 = 408U;
	static uint16_t x3303 = UINT16_MAX;
	volatile uint32_t t160 = 5023U;

    t160 = (x3301+(x3302>>(x3303&x3304)));

    if (t160 != 50U) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x3313 = INT32_MIN;
	uint64_t x3314 = 765LLU;
	volatile uint8_t x3316 = 3U;
	uint64_t t161 = 8074LLU;

    t161 = (x3313+(x3314>>(x3315&x3316)));

    if (t161 != 18446744071562068159LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x3319 = INT64_MIN;
	int64_t x3320 = 3109LL;

    t162 = (x3317+(x3318>>(x3319&x3320)));

    if (t162 != 120LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x3366 = INT16_MAX;
	volatile int8_t x3367 = 1;
	volatile int32_t x3368 = INT32_MIN;
	static int32_t t163 = -2;

    t163 = (x3365+(x3366>>(x3367&x3368)));

    if (t163 != 32761) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x3385 = -499635058471828LL;
	int16_t x3386 = INT16_MAX;
	int32_t x3387 = INT32_MIN;

    t164 = (x3385+(x3386>>(x3387&x3388)));

    if (t164 != -499635058439061LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x3406 = 6181LLU;

    t165 = (x3405+(x3406>>(x3407&x3408)));

    if (t165 != 18446744071562074149LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int16_t x3413 = -1;
	volatile int32_t x3414 = INT32_MAX;
	int16_t x3415 = INT16_MAX;
	int32_t x3416 = INT32_MIN;
	volatile int32_t t166 = 3328;

    t166 = (x3413+(x3414>>(x3415&x3416)));

    if (t166 != 2147483646) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x3426 = 7;
	int64_t x3427 = -1LL;
	uint64_t x3428 = 20LLU;
	static int64_t t167 = INT64_MIN;

    t167 = (x3425+(x3426>>(x3427&x3428)));

    if (t167 != INT64_MIN) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x3441 = UINT32_MAX;
	int8_t x3443 = INT8_MIN;
	int8_t x3444 = INT8_MAX;

    t168 = (x3441+(x3442>>(x3443&x3444)));

    if (t168 != 10375004U) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x3453 = 2083003;
	static volatile uint16_t x3455 = 8332U;
	uint8_t x3456 = 105U;

    t169 = (x3453+(x3454>>(x3455&x3456)));

    if (t169 != 2083035) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x3465 = -2;
	int16_t x3466 = INT16_MAX;
	int16_t x3467 = INT16_MIN;
	uint8_t x3468 = UINT8_MAX;

    t170 = (x3465+(x3466>>(x3467&x3468)));

    if (t170 != 32765) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x3497 = INT8_MIN;
	uint64_t x3498 = 222527471LLU;
	volatile int64_t x3499 = -2746395632226517227LL;
	volatile uint64_t t171 = 24669224793294LLU;

    t171 = (x3497+(x3498>>(x3499&x3500)));

    if (t171 != 111263607LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x3501 = 3;
	int8_t x3502 = 16;
	int64_t x3503 = -658LL;
	volatile int8_t x3504 = 7;
	int32_t t172 = -27066;

    t172 = (x3501+(x3502>>(x3503&x3504)));

    if (t172 != 3) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x3513 = -1;
	volatile uint32_t x3514 = 480U;
	int64_t x3515 = INT64_MIN;
	int8_t x3516 = INT8_MAX;
	uint32_t t173 = 26U;

    t173 = (x3513+(x3514>>(x3515&x3516)));

    if (t173 != 479U) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x3517 = 909058671U;
	volatile int32_t x3518 = 10421;
	int32_t x3520 = INT32_MIN;

    t174 = (x3517+(x3518>>(x3519&x3520)));

    if (t174 != 909069092U) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x3525 = INT16_MIN;
	volatile int32_t x3526 = 75;
	volatile uint8_t x3527 = 1U;
	uint16_t x3528 = 689U;
	int32_t t175 = -7;

    t175 = (x3525+(x3526>>(x3527&x3528)));

    if (t175 != -32731) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x3533 = -1124;
	volatile int16_t x3535 = INT16_MIN;
	int64_t t176 = -682986301944LL;

    t176 = (x3533+(x3534>>(x3535&x3536)));

    if (t176 != 164165797438036LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x3570 = 11;
	int8_t x3571 = 3;
	uint64_t x3572 = 11756267642397612LLU;
	volatile int32_t t177 = -384290009;

    t177 = (x3569+(x3570>>(x3571&x3572)));

    if (t177 != -2147483637) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x3593 = -1;
	static volatile uint64_t x3594 = 27142111400311056LLU;
	int8_t x3595 = INT8_MIN;
	static int16_t x3596 = 1;
	uint64_t t178 = 25596548001723155LLU;

    t178 = (x3593+(x3594>>(x3595&x3596)));

    if (t178 != 27142111400311055LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x3597 = INT64_MAX;
	int8_t x3599 = INT8_MIN;
	static volatile int8_t x3600 = INT8_MAX;
	static volatile int64_t t179 = INT64_MAX;

    t179 = (x3597+(x3598>>(x3599&x3600)));

    if (t179 != INT64_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x3605 = 5U;
	volatile uint32_t x3606 = UINT32_MAX;
	int8_t x3607 = INT8_MAX;

    t180 = (x3605+(x3606>>(x3607&x3608)));

    if (t180 != 4U) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x3625 = 3LLU;
	uint16_t x3626 = 48U;
	uint8_t x3627 = 53U;
	uint8_t x3628 = 1U;
	uint64_t t181 = 326190999288517LLU;

    t181 = (x3625+(x3626>>(x3627&x3628)));

    if (t181 != 27LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x3645 = INT8_MIN;
	uint16_t x3646 = UINT16_MAX;
	uint32_t x3647 = 233U;
	uint16_t x3648 = 0U;

    t182 = (x3645+(x3646>>(x3647&x3648)));

    if (t182 != 65407) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x3657 = -1;
	static volatile int64_t x3658 = INT64_MAX;
	volatile int32_t x3659 = 10161358;
	static int64_t t183 = 222267LL;

    t183 = (x3657+(x3658>>(x3659&x3660)));

    if (t183 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x3682 = UINT32_MAX;
	int64_t x3683 = -138077950394LL;
	volatile int16_t x3684 = 0;
	volatile uint32_t t184 = 29472169U;

    t184 = (x3681+(x3682>>(x3683&x3684)));

    if (t184 != 4294967294U) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x3693 = -1;
	int32_t x3694 = 15533;
	int64_t x3695 = 605430418690365529LL;
	int8_t x3696 = 3;
	int32_t t185 = 658040204;

    t185 = (x3693+(x3694>>(x3695&x3696)));

    if (t185 != 7765) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x3713 = 1U;
	uint64_t x3714 = 956771137230LLU;
	uint16_t x3715 = 4482U;
	int16_t x3716 = 109;
	uint64_t t186 = 42222405LLU;

    t186 = (x3713+(x3714>>(x3715&x3716)));

    if (t186 != 956771137231LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x3733 = 71LLU;
	static uint16_t x3734 = 15U;
	int8_t x3735 = 52;
	volatile uint64_t x3736 = 38429700959877LLU;

    t187 = (x3733+(x3734>>(x3735&x3736)));

    if (t187 != 71LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int16_t x3737 = INT16_MIN;
	static uint32_t x3738 = 15109U;
	volatile int32_t x3739 = INT32_MIN;
	volatile uint32_t t188 = 8023020U;

    t188 = (x3737+(x3738>>(x3739&x3740)));

    if (t188 != 4294949637U) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x3761 = 1777327;
	uint32_t x3762 = UINT32_MAX;
	int64_t x3763 = -1LL;
	uint32_t x3764 = 18U;
	uint32_t t189 = 113686391U;

    t189 = (x3761+(x3762>>(x3763&x3764)));

    if (t189 != 1793710U) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x3826 = UINT32_MAX;
	static int8_t x3827 = INT8_MAX;
	int8_t x3828 = INT8_MIN;
	uint32_t t190 = 7101U;

    t190 = (x3825+(x3826>>(x3827&x3828)));

    if (t190 != 4294967294U) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint16_t x3838 = 1592U;
	static int16_t x3840 = INT16_MIN;
	uint32_t t191 = 62182U;

    t191 = (x3837+(x3838>>(x3839&x3840)));

    if (t191 != 1591U) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x3877 = -1206;
	uint16_t x3878 = UINT16_MAX;
	int64_t x3879 = INT64_MIN;
	volatile uint32_t x3880 = UINT32_MAX;
	volatile int32_t t192 = 75558;

    t192 = (x3877+(x3878>>(x3879&x3880)));

    if (t192 != 64329) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x3881 = INT32_MIN;
	int32_t x3882 = 251823382;
	uint16_t x3883 = 16U;
	uint32_t x3884 = UINT32_MAX;
	int32_t t193 = 994080;

    t193 = (x3881+(x3882>>(x3883&x3884)));

    if (t193 != -2147479806) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x3897 = UINT32_MAX;
	uint16_t x3898 = 12U;
	uint16_t x3899 = 245U;
	int32_t x3900 = INT32_MIN;
	uint32_t t194 = 127682358U;

    t194 = (x3897+(x3898>>(x3899&x3900)));

    if (t194 != 11U) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x3933 = 0;
	static uint32_t x3935 = 50396954U;
	uint16_t x3936 = 1U;

    t195 = (x3933+(x3934>>(x3935&x3936)));

    if (t195 != 165) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x3941 = INT32_MIN;
	uint64_t x3942 = 1740798182LLU;
	uint64_t t196 = 102663851019457442LLU;

    t196 = (x3941+(x3942>>(x3943&x3944)));

    if (t196 != 18446744071563767966LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x3949 = -1;
	volatile int64_t x3951 = INT64_MIN;
	volatile uint16_t x3952 = UINT16_MAX;
	int32_t t197 = 15756;

    t197 = (x3949+(x3950>>(x3951&x3952)));

    if (t197 != 32766) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x3953 = -1;
	int64_t x3954 = INT64_MAX;
	volatile uint8_t x3955 = 76U;
	uint16_t x3956 = 6U;
	volatile int64_t t198 = 116310733426646LL;

    t198 = (x3953+(x3954>>(x3955&x3956)));

    if (t198 != 576460752303423486LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint64_t x3973 = 7676970910168LLU;
	int32_t x3974 = INT32_MAX;
	static int32_t x3975 = 6568135;
	volatile int32_t x3976 = INT32_MIN;
	volatile uint64_t t199 = 18579LLU;

    t199 = (x3973+(x3974>>(x3975&x3976)));

    if (t199 != 7679118393815LLU) { NG(); } else { ; }
	
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


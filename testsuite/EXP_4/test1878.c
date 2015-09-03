#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x209 = INT32_MAX;
static volatile int8_t x512 = -3;
int8_t x558 = 20;
uint16_t x573 = UINT16_MAX;
static volatile int32_t x575 = INT32_MAX;
static int32_t t9 = -676;
int32_t x630 = -1;
int8_t x632 = -1;
int8_t x774 = -1;
volatile int64_t t12 = INT64_MAX;
int16_t x843 = -13;
uint8_t x844 = 16U;
int32_t t13 = 267189;
int64_t x946 = -1LL;
static uint8_t x953 = 2U;
uint8_t x1037 = UINT8_MAX;
static volatile int8_t x1038 = -1;
static volatile uint64_t x1040 = 59793770LLU;
int32_t t18 = -260643;
int16_t x1119 = -1;
int32_t t19 = -253;
volatile int16_t x1276 = 71;
int32_t t20 = 17798658;
int32_t t21 = 159;
uint64_t x1382 = UINT64_MAX;
int16_t x1384 = -1;
uint32_t x1427 = UINT32_MAX;
uint8_t x1457 = 106U;
int16_t x1460 = -97;
int64_t x2099 = INT64_MIN;
uint8_t x2102 = 2U;
static uint64_t x2104 = UINT64_MAX;
static volatile int32_t t31 = 211481015;
int8_t x2150 = -1;
volatile int8_t x2152 = -7;
static int16_t x2179 = 3;
static int16_t x2210 = -1;
volatile int32_t t34 = INT32_MAX;
uint16_t x2253 = UINT16_MAX;
uint16_t x2276 = 63U;
static int8_t x2326 = 5;
static int64_t x2343 = INT64_MAX;
volatile int8_t x2344 = -1;
int32_t t39 = 3014;
volatile int32_t x2417 = INT32_MAX;
uint8_t x2422 = 0U;
static int16_t x2423 = -1;
static int32_t t41 = -4149;
static volatile int32_t x2547 = INT32_MAX;
uint64_t t43 = 1606991939LLU;
volatile int8_t x2622 = 6;
volatile int32_t t44 = 444;
uint8_t x2702 = 6U;
int16_t x2703 = -1;
uint8_t x2817 = UINT8_MAX;
int64_t x2819 = INT64_MAX;
int8_t x3003 = INT8_MAX;
static volatile int32_t t48 = 90;
uint32_t x3011 = UINT32_MAX;
uint32_t t49 = 41U;
int8_t x3039 = INT8_MAX;
int8_t x3131 = -1;
volatile uint32_t x3217 = UINT32_MAX;
static uint64_t x3220 = 841LLU;
static uint64_t x3273 = UINT64_MAX;
int32_t x3275 = INT32_MIN;
static int8_t x3276 = -1;
int32_t x3347 = -1;
volatile int64_t t55 = INT64_MAX;
uint16_t x3361 = 121U;
int8_t x3363 = INT8_MAX;
static volatile uint64_t t57 = 1485717641LLU;
static int16_t x3484 = -1;
uint16_t x3561 = UINT16_MAX;
volatile uint64_t t61 = 9520056LLU;
uint16_t x3663 = UINT16_MAX;


void f0(void) {
	uint32_t x49 = 79U;
	static uint32_t x50 = UINT32_MAX;
	int16_t x51 = INT16_MAX;
	int16_t x52 = -1;
	uint32_t t0 = 445U;

	t0 = (x49<<(x50-(x51|x52)));

	if (t0 != 79U) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x210 = UINT64_MAX;
	static int64_t x211 = INT64_MIN;
	int64_t x212 = INT64_MAX;
	int32_t t1 = INT32_MAX;

	t1 = (x209<<(x210-(x211|x212)));

	if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x233 = 13666;
	uint32_t x234 = 1U;
	int64_t x235 = -130LL;
	int8_t x236 = -1;
	int32_t t2 = 1;

	t2 = (x233<<(x234-(x235|x236)));

	if (t2 != 54664) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x429 = 90;
	int8_t x430 = 4;
	static int8_t x431 = INT8_MIN;
	uint8_t x432 = UINT8_MAX;
	int32_t t3 = 1042383;

	t3 = (x429<<(x430-(x431|x432)));

	if (t3 != 2880) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x445 = 271993507154LLU;
	int8_t x446 = INT8_MIN;
	static volatile int8_t x447 = INT8_MIN;
	int32_t x448 = INT32_MIN;
	volatile uint64_t t4 = 1179887945622440598LLU;

	t4 = (x445<<(x446-(x447|x448)));

	if (t4 != 271993507154LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x501 = 29783703785LLU;
	static uint8_t x502 = 2U;
	int32_t x503 = INT32_MIN;
	int64_t x504 = INT64_MAX;
	volatile uint64_t t5 = 822321LLU;

	t5 = (x501<<(x502-(x503|x504)));

	if (t5 != 238269630280LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x509 = 1U;
	uint64_t x510 = UINT64_MAX;
	static int8_t x511 = INT8_MIN;
	volatile int32_t t6 = 0;

	t6 = (x509<<(x510-(x511|x512)));

	if (t6 != 4) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x545 = 6351769994754234LLU;
	int8_t x546 = -1;
	uint64_t x547 = 13LLU;
	static volatile uint64_t x548 = UINT64_MAX;
	uint64_t t7 = 0LLU;

	t7 = (x545<<(x546-(x547|x548)));

	if (t7 != 6351769994754234LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x557 = UINT64_MAX;
	int32_t x559 = -1;
	int8_t x560 = -1;
	uint64_t t8 = 2030LLU;

	t8 = (x557<<(x558-(x559|x560)));

	if (t8 != 18446744073707454464LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x574 = 1LL;
	int8_t x576 = INT8_MIN;

	t9 = (x573<<(x574-(x575|x576)));

	if (t9 != 262140) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x629 = UINT32_MAX;
	static int16_t x631 = INT16_MIN;
	volatile uint32_t t10 = UINT32_MAX;

	t10 = (x629<<(x630-(x631|x632)));

	if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x689 = 55U;
	uint8_t x690 = UINT8_MAX;
	uint8_t x691 = 2U;
	static uint8_t x692 = UINT8_MAX;
	volatile int32_t t11 = 121;

	t11 = (x689<<(x690-(x691|x692)));

	if (t11 != 55) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x773 = INT64_MAX;
	int8_t x775 = -1;
	int32_t x776 = -1;

	t12 = (x773<<(x774-(x775|x776)));

	if (t12 != INT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x841 = 1;
	static int64_t x842 = -1LL;

	t13 = (x841<<(x842-(x843|x844)));

	if (t13 != 4096) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x945 = UINT16_MAX;
	int32_t x947 = INT32_MIN;
	volatile int16_t x948 = -3;
	static volatile int32_t t14 = 71902380;

	t14 = (x945<<(x946-(x947|x948)));

	if (t14 != 262140) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x954 = 1U;
	static int16_t x955 = INT16_MIN;
	static int64_t x956 = -1LL;
	int32_t t15 = 7417;

	t15 = (x953<<(x954-(x955|x956)));

	if (t15 != 8) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x969 = 24;
	int8_t x970 = -1;
	int8_t x971 = INT8_MIN;
	int32_t x972 = INT32_MAX;
	volatile int32_t t16 = 991066771;

	t16 = (x969<<(x970-(x971|x972)));

	if (t16 != 24) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1039 = INT8_MIN;
	volatile int32_t t17 = -164029;

	t17 = (x1037<<(x1038-(x1039|x1040)));

	if (t17 != 534773760) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1093 = INT16_MAX;
	uint8_t x1094 = 15U;
	static int64_t x1095 = -1LL;
	int16_t x1096 = INT16_MAX;

	t18 = (x1093<<(x1094-(x1095|x1096)));

	if (t18 != 2147418112) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x1117 = 8U;
	static int8_t x1118 = 2;
	int32_t x1120 = -388366;

	t19 = (x1117<<(x1118-(x1119|x1120)));

	if (t19 != 64) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1273 = 39U;
	int64_t x1274 = -1LL;
	int8_t x1275 = -6;

	t20 = (x1273<<(x1274-(x1275|x1276)));

	if (t20 != 39) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1333 = 0;
	int8_t x1334 = 1;
	int8_t x1335 = INT8_MIN;
	int64_t x1336 = -1LL;

	t21 = (x1333<<(x1334-(x1335|x1336)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x1381 = 332U;
	int16_t x1383 = INT16_MIN;
	volatile uint32_t t22 = 61U;

	t22 = (x1381<<(x1382-(x1383|x1384)));

	if (t22 != 332U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x1385 = UINT16_MAX;
	int8_t x1386 = -1;
	uint16_t x1387 = 17665U;
	static int32_t x1388 = -1;
	int32_t t23 = 121364890;

	t23 = (x1385<<(x1386-(x1387|x1388)));

	if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x1425 = 20665708173552883LLU;
	int64_t x1426 = 1LL;
	uint64_t x1428 = UINT64_MAX;
	uint64_t t24 = 103946687LLU;

	t24 = (x1425<<(x1426-(x1427|x1428)));

	if (t24 != 82662832694211532LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1458 = 15;
	int64_t x1459 = -1LL;
	int32_t t25 = 17648;

	t25 = (x1457<<(x1458-(x1459|x1460)));

	if (t25 != 6946816) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x1697 = 0;
	int64_t x1698 = INT64_MIN;
	int64_t x1699 = INT64_MIN;
	int64_t x1700 = INT64_MIN;
	int32_t t26 = -74843;

	t26 = (x1697<<(x1698-(x1699|x1700)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1729 = UINT64_MAX;
	static uint8_t x1730 = 6U;
	int64_t x1731 = INT64_MAX;
	int16_t x1732 = INT16_MIN;
	static uint64_t t27 = 43709332163LLU;

	t27 = (x1729<<(x1730-(x1731|x1732)));

	if (t27 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x1881 = 1164941U;
	int64_t x1882 = INT64_MIN;
	static int8_t x1883 = 0;
	static int64_t x1884 = INT64_MIN;
	volatile uint32_t t28 = 5U;

	t28 = (x1881<<(x1882-(x1883|x1884)));

	if (t28 != 1164941U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x2097 = INT64_MAX;
	volatile int8_t x2098 = INT8_MIN;
	int8_t x2100 = INT8_MIN;
	volatile int64_t t29 = INT64_MAX;

	t29 = (x2097<<(x2098-(x2099|x2100)));

	if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x2101 = 28894051972LLU;
	int8_t x2103 = 5;
	uint64_t t30 = 25898554390237825LLU;

	t30 = (x2101<<(x2102-(x2103|x2104)));

	if (t30 != 231152415776LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x2133 = 0U;
	uint8_t x2134 = 0U;
	volatile int32_t x2135 = -1;
	int32_t x2136 = INT32_MIN;

	t31 = (x2133<<(x2134-(x2135|x2136)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x2149 = 4028U;
	static int64_t x2151 = -28LL;
	static volatile int32_t t32 = 2900259;

	t32 = (x2149<<(x2150-(x2151|x2152)));

	if (t32 != 16112) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x2177 = UINT8_MAX;
	uint16_t x2178 = UINT16_MAX;
	uint16_t x2180 = UINT16_MAX;
	int32_t t33 = 825327;

	t33 = (x2177<<(x2178-(x2179|x2180)));

	if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x2209 = INT32_MAX;
	int16_t x2211 = INT16_MAX;
	int64_t x2212 = -1LL;

	t34 = (x2209<<(x2210-(x2211|x2212)));

	if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x2254 = 0U;
	static int64_t x2255 = INT64_MAX;
	int16_t x2256 = INT16_MIN;
	int32_t t35 = -172;

	t35 = (x2253<<(x2254-(x2255|x2256)));

	if (t35 != 131070) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x2273 = 0;
	int16_t x2274 = -1;
	int64_t x2275 = -1LL;
	volatile int32_t t36 = 73854775;

	t36 = (x2273<<(x2274-(x2275|x2276)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x2309 = 1U;
	uint8_t x2310 = 3U;
	static int16_t x2311 = -14;
	static int64_t x2312 = INT64_MAX;
	int32_t t37 = 62;

	t37 = (x2309<<(x2310-(x2311|x2312)));

	if (t37 != 16) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x2325 = UINT64_MAX;
	volatile int16_t x2327 = INT16_MAX;
	int32_t x2328 = -1;
	volatile uint64_t t38 = 2079278633691LLU;

	t38 = (x2325<<(x2326-(x2327|x2328)));

	if (t38 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x2341 = 24;
	int64_t x2342 = -1LL;

	t39 = (x2341<<(x2342-(x2343|x2344)));

	if (t39 != 24) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x2418 = UINT64_MAX;
	int16_t x2419 = INT16_MIN;
	volatile int8_t x2420 = -1;
	int32_t t40 = INT32_MAX;

	t40 = (x2417<<(x2418-(x2419|x2420)));

	if (t40 != INT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x2421 = 1125;
	volatile int8_t x2424 = INT8_MIN;

	t41 = (x2421<<(x2422-(x2423|x2424)));

	if (t41 != 2250) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x2545 = INT16_MAX;
	volatile int64_t x2546 = -1LL;
	int16_t x2548 = INT16_MIN;
	volatile int32_t t42 = 0;

	t42 = (x2545<<(x2546-(x2547|x2548)));

	if (t42 != 32767) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x2597 = 1945441LLU;
	volatile uint8_t x2598 = 8U;
	static int64_t x2599 = INT64_MIN;
	int64_t x2600 = -1LL;

	t43 = (x2597<<(x2598-(x2599|x2600)));

	if (t43 != 996065792LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2621 = INT8_MAX;
	uint64_t x2623 = UINT64_MAX;
	uint8_t x2624 = UINT8_MAX;

	t44 = (x2621<<(x2622-(x2623|x2624)));

	if (t44 != 16256) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x2649 = 1U;
	static int32_t x2650 = -1;
	uint8_t x2651 = UINT8_MAX;
	uint32_t x2652 = UINT32_MAX;
	int32_t t45 = 33281;

	t45 = (x2649<<(x2650-(x2651|x2652)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x2701 = 45486;
	int16_t x2704 = -1;
	int32_t t46 = 14950018;

	t46 = (x2701<<(x2702-(x2703|x2704)));

	if (t46 != 5822208) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2818 = 4;
	int32_t x2820 = -1;
	static volatile int32_t t47 = 5643;

	t47 = (x2817<<(x2818-(x2819|x2820)));

	if (t47 != 8160) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x3001 = 7U;
	volatile int32_t x3002 = -1;
	int16_t x3004 = -1;

	t48 = (x3001<<(x3002-(x3003|x3004)));

	if (t48 != 7) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x3009 = 4621858U;
	int32_t x3010 = 1;
	int8_t x3012 = 1;

	t49 = (x3009<<(x3010-(x3011|x3012)));

	if (t49 != 18487432U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x3037 = 4U;
	int32_t x3038 = -1;
	int8_t x3040 = INT8_MIN;
	int32_t t50 = -105479;

	t50 = (x3037<<(x3038-(x3039|x3040)));

	if (t50 != 4) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x3045 = 28;
	volatile uint8_t x3046 = 7U;
	static int32_t x3047 = -1;
	static int8_t x3048 = -1;
	static int32_t t51 = 714048;

	t51 = (x3045<<(x3046-(x3047|x3048)));

	if (t51 != 7168) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x3129 = UINT64_MAX;
	volatile int8_t x3130 = 1;
	int64_t x3132 = -275715080499263991LL;
	volatile uint64_t t52 = 896358545LLU;

	t52 = (x3129<<(x3130-(x3131|x3132)));

	if (t52 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x3218 = -1LL;
	volatile uint64_t x3219 = UINT64_MAX;
	uint32_t t53 = UINT32_MAX;

	t53 = (x3217<<(x3218-(x3219|x3220)));

	if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x3274 = 1;
	uint64_t t54 = 843097LLU;

	t54 = (x3273<<(x3274-(x3275|x3276)));

	if (t54 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x3345 = INT64_MAX;
	volatile int64_t x3346 = -1LL;
	volatile uint16_t x3348 = UINT16_MAX;

	t55 = (x3345<<(x3346-(x3347|x3348)));

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x3362 = -1;
	static int32_t x3364 = -15;
	volatile int32_t t56 = 32311;

	t56 = (x3361<<(x3362-(x3363|x3364)));

	if (t56 != 121) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x3421 = 64995457916LLU;
	uint32_t x3422 = UINT32_MAX;
	int16_t x3423 = INT16_MIN;
	int16_t x3424 = INT16_MAX;

	t57 = (x3421<<(x3422-(x3423|x3424)));

	if (t57 != 64995457916LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x3481 = 8U;
	uint32_t x3482 = UINT32_MAX;
	volatile int32_t x3483 = -1;
	int32_t t58 = -111395;

	t58 = (x3481<<(x3482-(x3483|x3484)));

	if (t58 != 8) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x3562 = 0U;
	uint16_t x3563 = UINT16_MAX;
	int16_t x3564 = -7;
	volatile int32_t t59 = -18498552;

	t59 = (x3561<<(x3562-(x3563|x3564)));

	if (t59 != 131070) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x3609 = INT16_MAX;
	int8_t x3610 = -1;
	uint32_t x3611 = UINT32_MAX;
	int16_t x3612 = INT16_MAX;
	int32_t t60 = 63646;

	t60 = (x3609<<(x3610-(x3611|x3612)));

	if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x3617 = 15595830814422LLU;
	int64_t x3618 = 13LL;
	int16_t x3619 = 2036;
	int8_t x3620 = -6;

	t61 = (x3617<<(x3618-(x3619|x3620)));

	if (t61 != 511044184126980096LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x3661 = 969U;
	uint64_t x3662 = UINT64_MAX;
	int16_t x3664 = INT16_MIN;
	uint32_t t62 = 812685U;

	t62 = (x3661<<(x3662-(x3663|x3664)));

	if (t62 != 969U) { NG(); } else { ; }
	
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


    return 0;
}


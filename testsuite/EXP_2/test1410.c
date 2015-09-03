#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t1 = 50;
volatile int64_t t2 = -353438LL;
uint16_t x407 = UINT16_MAX;
volatile int64_t x578 = -98576399630LL;
int64_t x649 = 162672LL;
volatile int64_t x741 = INT64_MIN;
volatile int8_t x824 = 1;
int64_t x946 = INT64_MIN;
uint16_t x1032 = 19U;
int64_t x1103 = INT64_MAX;
static int32_t t13 = -237970333;
uint8_t x1190 = 1U;
int16_t x1273 = INT16_MIN;
uint64_t x1301 = 246476594843581646LLU;
int16_t x1303 = INT16_MIN;
int32_t t18 = 308561136;
volatile int32_t x1405 = INT32_MIN;
uint16_t x1408 = 23U;
uint64_t x1449 = 228405091872LLU;
uint32_t x1451 = UINT32_MAX;
uint32_t x1539 = 6381U;
uint32_t t21 = 27527U;
volatile int32_t t22 = 6457490;
uint8_t x1628 = 30U;
static int16_t x1894 = INT16_MIN;
int16_t x2046 = -1001;
int32_t x2078 = -29859938;
int32_t x2199 = -1;
int8_t x2200 = 22;
volatile int32_t x2244 = 8;
static uint16_t x2267 = 1884U;
static volatile int16_t x2296 = 17;
int64_t t33 = -187326564370LL;
int8_t x2369 = INT8_MIN;
volatile uint32_t x2515 = 412001289U;
uint8_t x2516 = 4U;
int32_t t35 = -28884057;
int8_t x2605 = 1;
int32_t x2617 = INT32_MIN;
static volatile int64_t x2618 = INT64_MIN;
volatile int32_t x2718 = INT32_MIN;
volatile int32_t t39 = -1161392;
int64_t x2809 = INT64_MIN;
uint16_t x2903 = UINT16_MAX;
static uint8_t x2904 = 1U;
int32_t x3086 = -8685672;
uint8_t x3180 = 1U;
volatile uint32_t x3263 = 405U;
uint32_t x3445 = UINT32_MAX;
uint32_t x3446 = 83864U;
uint8_t x3448 = 28U;
uint8_t x3510 = 7U;
static int64_t x3511 = 481798LL;
static volatile int32_t t51 = -338266;
int32_t x3518 = -1;
uint8_t x3519 = UINT8_MAX;
int32_t x3615 = 1196982;
int8_t x3622 = -1;
uint16_t x3674 = 13340U;
uint64_t t60 = 0LLU;
volatile int32_t x4025 = -1;
volatile int32_t x4027 = -1;
uint32_t x4070 = 63344830U;
int32_t t62 = 17640915;
static int32_t x4410 = -1;
volatile int8_t x4459 = -1;
int8_t x4634 = -1;
int8_t x4786 = INT8_MAX;
uint8_t x4787 = UINT8_MAX;
volatile int8_t x4788 = 3;
int16_t x4810 = 0;
volatile int32_t t74 = 604279;
int32_t t75 = -182;
static volatile uint32_t t76 = 763U;
int8_t x4941 = INT8_MAX;
int8_t x4963 = 0;
int8_t x4964 = 18;
volatile int32_t t78 = 13280139;
int8_t x4978 = -1;
uint8_t x4996 = 27U;
int64_t x5037 = -1LL;
static int16_t x5052 = 0;
volatile int64_t x5106 = INT64_MIN;
volatile int8_t x5108 = 50;
volatile int64_t t83 = 5674623626LL;
int8_t x5113 = 1;
static int16_t x5150 = INT16_MIN;
static int32_t x5151 = 12;
volatile uint8_t x5405 = 37U;
volatile int16_t x5443 = 10197;
int32_t x5606 = 0;
uint8_t x5608 = 31U;
static volatile int64_t t94 = -19984611LL;
uint64_t x5688 = 0LLU;
int16_t x5863 = INT16_MIN;


void f0(void) {
	uint64_t x45 = 7150073LLU;
	uint32_t x46 = 137835351U;
	int16_t x47 = INT16_MIN;
	uint32_t x48 = 1U;
	static uint64_t t0 = 48091298871578162LLU;

	t0 = ((x45%(x46<x47))<<x48);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint16_t x293 = 12182U;
	int8_t x294 = INT8_MIN;
	static uint16_t x295 = UINT16_MAX;
	uint8_t x296 = 1U;

	t1 = ((x293%(x294<x295))<<x296);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x389 = 1895701364249063921LL;
	volatile uint8_t x390 = UINT8_MAX;
	static int64_t x391 = 2619840040611912LL;
	int8_t x392 = 4;

	t2 = ((x389%(x390<x391))<<x392);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x405 = 179758;
	int64_t x406 = INT64_MIN;
	int16_t x408 = 1;
	int32_t t3 = 395;

	t3 = ((x405%(x406<x407))<<x408);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x541 = INT32_MIN;
	int8_t x542 = 15;
	uint64_t x543 = UINT64_MAX;
	uint8_t x544 = 27U;
	int32_t t4 = 196;

	t4 = ((x541%(x542<x543))<<x544);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x577 = -31252978194LL;
	int8_t x579 = INT8_MIN;
	static uint8_t x580 = 37U;
	int64_t t5 = -55899364049836LL;

	t5 = ((x577%(x578<x579))<<x580);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x650 = INT32_MIN;
	volatile uint8_t x651 = UINT8_MAX;
	uint16_t x652 = 31U;
	volatile int64_t t6 = -64273LL;

	t6 = ((x649%(x650<x651))<<x652);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x661 = -1210;
	static volatile uint16_t x662 = 3U;
	static uint16_t x663 = 203U;
	static volatile uint8_t x664 = 3U;
	static volatile int32_t t7 = 0;

	t7 = ((x661%(x662<x663))<<x664);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x742 = INT8_MIN;
	uint8_t x743 = 7U;
	uint16_t x744 = 24U;
	int64_t t8 = -279299373747LL;

	t8 = ((x741%(x742<x743))<<x744);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x745 = -1;
	int16_t x746 = -1;
	int64_t x747 = 4186570415468893LL;
	int8_t x748 = 1;
	volatile int32_t t9 = 114511;

	t9 = ((x745%(x746<x747))<<x748);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x821 = -331LL;
	static int64_t x822 = INT64_MIN;
	int16_t x823 = -1;
	int64_t t10 = -20482057LL;

	t10 = ((x821%(x822<x823))<<x824);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x945 = INT32_MAX;
	static volatile uint8_t x947 = 27U;
	static uint16_t x948 = 3U;
	static int32_t t11 = -15009;

	t11 = ((x945%(x946<x947))<<x948);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x1029 = INT32_MAX;
	uint8_t x1030 = UINT8_MAX;
	int32_t x1031 = 6200881;
	int32_t t12 = -833434443;

	t12 = ((x1029%(x1030<x1031))<<x1032);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint16_t x1101 = UINT16_MAX;
	volatile int32_t x1102 = -948;
	int8_t x1104 = 0;

	t13 = ((x1101%(x1102<x1103))<<x1104);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x1189 = 5U;
	uint32_t x1191 = 1934191151U;
	static uint32_t x1192 = 5U;
	static volatile int32_t t14 = -1;

	t14 = ((x1189%(x1190<x1191))<<x1192);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x1274 = 1;
	static uint8_t x1275 = UINT8_MAX;
	int16_t x1276 = 0;
	int32_t t15 = 9051;

	t15 = ((x1273%(x1274<x1275))<<x1276);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x1297 = INT64_MIN;
	uint8_t x1298 = 0U;
	int16_t x1299 = INT16_MAX;
	static uint8_t x1300 = 2U;
	int64_t t16 = -47LL;

	t16 = ((x1297%(x1298<x1299))<<x1300);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x1302 = 478098077892LLU;
	static int8_t x1304 = 3;
	volatile uint64_t t17 = 326429LLU;

	t17 = ((x1301%(x1302<x1303))<<x1304);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x1353 = 12U;
	uint8_t x1354 = UINT8_MAX;
	int64_t x1355 = INT64_MAX;
	int64_t x1356 = 0LL;

	t18 = ((x1353%(x1354<x1355))<<x1356);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x1406 = -1;
	int8_t x1407 = 0;
	volatile int32_t t19 = -2549;

	t19 = ((x1405%(x1406<x1407))<<x1408);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x1450 = 12U;
	volatile int8_t x1452 = 24;
	volatile uint64_t t20 = 112301LLU;

	t20 = ((x1449%(x1450<x1451))<<x1452);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x1537 = 0U;
	static volatile uint32_t x1538 = 12U;
	uint8_t x1540 = 3U;

	t21 = ((x1537%(x1538<x1539))<<x1540);

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1613 = INT32_MAX;
	uint64_t x1614 = 1801LLU;
	uint64_t x1615 = 486777688LLU;
	uint8_t x1616 = 3U;

	t22 = ((x1613%(x1614<x1615))<<x1616);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x1625 = INT16_MAX;
	int16_t x1626 = 1012;
	volatile int64_t x1627 = 2737LL;
	volatile int32_t t23 = 1382168;

	t23 = ((x1625%(x1626<x1627))<<x1628);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1837 = UINT64_MAX;
	volatile int8_t x1838 = INT8_MIN;
	static int8_t x1839 = 1;
	static uint8_t x1840 = 0U;
	volatile uint64_t t24 = 216661667979037LLU;

	t24 = ((x1837%(x1838<x1839))<<x1840);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x1893 = INT16_MIN;
	int64_t x1895 = -1LL;
	static volatile uint32_t x1896 = 0U;
	static volatile int32_t t25 = -7421;

	t25 = ((x1893%(x1894<x1895))<<x1896);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x2045 = INT16_MAX;
	int8_t x2047 = INT8_MAX;
	uint8_t x2048 = 27U;
	volatile int32_t t26 = -197251;

	t26 = ((x2045%(x2046<x2047))<<x2048);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x2077 = INT64_MAX;
	volatile uint32_t x2079 = UINT32_MAX;
	static uint8_t x2080 = 0U;
	volatile int64_t t27 = -1LL;

	t27 = ((x2077%(x2078<x2079))<<x2080);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x2169 = 104U;
	int32_t x2170 = -7;
	uint8_t x2171 = UINT8_MAX;
	uint8_t x2172 = 11U;
	static int32_t t28 = 41;

	t28 = ((x2169%(x2170<x2171))<<x2172);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x2197 = 3035LLU;
	uint64_t x2198 = 186172293024496265LLU;
	uint64_t t29 = 177368LLU;

	t29 = ((x2197%(x2198<x2199))<<x2200);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint16_t x2241 = 1439U;
	int8_t x2242 = INT8_MIN;
	static volatile uint8_t x2243 = 17U;
	int32_t t30 = 1;

	t30 = ((x2241%(x2242<x2243))<<x2244);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x2257 = 0U;
	static volatile int8_t x2258 = -1;
	uint8_t x2259 = 1U;
	static uint16_t x2260 = 1U;
	int32_t t31 = 1680630;

	t31 = ((x2257%(x2258<x2259))<<x2260);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x2265 = INT16_MAX;
	uint8_t x2266 = 1U;
	uint64_t x2268 = 9LLU;
	static int32_t t32 = 1074;

	t32 = ((x2265%(x2266<x2267))<<x2268);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x2293 = INT64_MIN;
	static int64_t x2294 = INT64_MIN;
	uint16_t x2295 = UINT16_MAX;

	t33 = ((x2293%(x2294<x2295))<<x2296);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x2370 = UINT16_MAX;
	volatile int32_t x2371 = INT32_MAX;
	int32_t x2372 = 0;
	static int32_t t34 = 10;

	t34 = ((x2369%(x2370<x2371))<<x2372);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x2513 = INT8_MIN;
	int64_t x2514 = -1LL;

	t35 = ((x2513%(x2514<x2515))<<x2516);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x2606 = INT64_MIN;
	static uint8_t x2607 = 3U;
	uint32_t x2608 = 2U;
	int32_t t36 = -1052636;

	t36 = ((x2605%(x2606<x2607))<<x2608);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x2619 = UINT32_MAX;
	static int16_t x2620 = 1;
	volatile int32_t t37 = -432382;

	t37 = ((x2617%(x2618<x2619))<<x2620);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x2709 = -7459108;
	int64_t x2710 = -13683926343217LL;
	volatile int8_t x2711 = INT8_MIN;
	uint16_t x2712 = 4U;
	volatile int32_t t38 = 370;

	t38 = ((x2709%(x2710<x2711))<<x2712);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x2717 = 1;
	uint8_t x2719 = 72U;
	int8_t x2720 = 1;

	t39 = ((x2717%(x2718<x2719))<<x2720);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x2810 = INT32_MIN;
	uint16_t x2811 = UINT16_MAX;
	int16_t x2812 = 1;
	volatile int64_t t40 = 650920497083928LL;

	t40 = ((x2809%(x2810<x2811))<<x2812);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x2885 = INT8_MAX;
	int64_t x2886 = INT64_MIN;
	int16_t x2887 = -1755;
	int8_t x2888 = 12;
	int32_t t41 = 2;

	t41 = ((x2885%(x2886<x2887))<<x2888);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x2901 = INT32_MIN;
	int16_t x2902 = INT16_MAX;
	int32_t t42 = -2;

	t42 = ((x2901%(x2902<x2903))<<x2904);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x2905 = 28U;
	int8_t x2906 = INT8_MAX;
	static volatile uint32_t x2907 = UINT32_MAX;
	uint8_t x2908 = 3U;
	volatile int32_t t43 = -16;

	t43 = ((x2905%(x2906<x2907))<<x2908);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x3085 = 932631U;
	int32_t x3087 = 10;
	uint16_t x3088 = 3U;
	uint32_t t44 = 22620102U;

	t44 = ((x3085%(x3086<x3087))<<x3088);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x3177 = 27U;
	int8_t x3178 = -20;
	int16_t x3179 = 3731;
	volatile int32_t t45 = -637810;

	t45 = ((x3177%(x3178<x3179))<<x3180);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x3261 = UINT16_MAX;
	static uint64_t x3262 = 0LLU;
	volatile uint8_t x3264 = 4U;
	volatile int32_t t46 = -740632314;

	t46 = ((x3261%(x3262<x3263))<<x3264);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x3265 = INT8_MIN;
	int64_t x3266 = INT64_MIN;
	volatile int8_t x3267 = 0;
	uint16_t x3268 = 1U;
	volatile int32_t t47 = 6199991;

	t47 = ((x3265%(x3266<x3267))<<x3268);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x3447 = INT16_MIN;
	static uint32_t t48 = 1U;

	t48 = ((x3445%(x3446<x3447))<<x3448);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x3485 = INT32_MIN;
	int16_t x3486 = INT16_MIN;
	volatile int8_t x3487 = 7;
	volatile int16_t x3488 = 3;
	static volatile int32_t t49 = 10182;

	t49 = ((x3485%(x3486<x3487))<<x3488);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x3509 = 4887255U;
	int8_t x3512 = 4;
	uint32_t t50 = 15145U;

	t50 = ((x3509%(x3510<x3511))<<x3512);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x3513 = -1;
	int32_t x3514 = -1;
	uint16_t x3515 = 1611U;
	uint8_t x3516 = 21U;

	t51 = ((x3513%(x3514<x3515))<<x3516);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x3517 = 1;
	static uint8_t x3520 = 1U;
	int32_t t52 = -349;

	t52 = ((x3517%(x3518<x3519))<<x3520);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x3597 = INT32_MAX;
	int16_t x3598 = INT16_MIN;
	volatile int64_t x3599 = INT64_MAX;
	uint8_t x3600 = 15U;
	static volatile int32_t t53 = -168136519;

	t53 = ((x3597%(x3598<x3599))<<x3600);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x3613 = INT8_MIN;
	volatile int8_t x3614 = -47;
	int64_t x3616 = 1LL;
	volatile int32_t t54 = -29355;

	t54 = ((x3613%(x3614<x3615))<<x3616);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x3621 = INT64_MIN;
	int8_t x3623 = INT8_MAX;
	uint8_t x3624 = 12U;
	int64_t t55 = -697254555610716LL;

	t55 = ((x3621%(x3622<x3623))<<x3624);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x3661 = INT32_MIN;
	int32_t x3662 = -429357184;
	uint16_t x3663 = UINT16_MAX;
	volatile uint64_t x3664 = 18LLU;
	int32_t t56 = -1283;

	t56 = ((x3661%(x3662<x3663))<<x3664);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x3673 = 21213975361569942LL;
	static uint32_t x3675 = UINT32_MAX;
	int32_t x3676 = 0;
	int64_t t57 = 1445170481252940LL;

	t57 = ((x3673%(x3674<x3675))<<x3676);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x3817 = -1;
	uint32_t x3818 = 57057U;
	volatile int32_t x3819 = INT32_MIN;
	static int8_t x3820 = 1;
	int32_t t58 = -178884680;

	t58 = ((x3817%(x3818<x3819))<<x3820);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x3869 = INT64_MIN;
	volatile uint64_t x3870 = 1003452LLU;
	static int8_t x3871 = -1;
	static uint16_t x3872 = 0U;
	int64_t t59 = -667495121LL;

	t59 = ((x3869%(x3870<x3871))<<x3872);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x3949 = 25492836874492LLU;
	int32_t x3950 = INT32_MAX;
	volatile uint32_t x3951 = UINT32_MAX;
	uint16_t x3952 = 0U;

	t60 = ((x3949%(x3950<x3951))<<x3952);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x4026 = INT64_MIN;
	volatile uint64_t x4028 = 2LLU;
	volatile int32_t t61 = -36;

	t61 = ((x4025%(x4026<x4027))<<x4028);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x4069 = 113;
	int16_t x4071 = INT16_MIN;
	uint16_t x4072 = 7U;

	t62 = ((x4069%(x4070<x4071))<<x4072);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x4101 = INT64_MIN;
	volatile int32_t x4102 = INT32_MIN;
	int16_t x4103 = 754;
	int16_t x4104 = 1;
	int64_t t63 = 942537741609407LL;

	t63 = ((x4101%(x4102<x4103))<<x4104);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x4325 = -1;
	int64_t x4326 = INT64_MAX;
	uint64_t x4327 = UINT64_MAX;
	uint16_t x4328 = 0U;
	static int32_t t64 = -1;

	t64 = ((x4325%(x4326<x4327))<<x4328);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x4409 = 25974U;
	int64_t x4411 = INT64_MAX;
	int16_t x4412 = 0;
	volatile int32_t t65 = 0;

	t65 = ((x4409%(x4410<x4411))<<x4412);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint16_t x4453 = 10588U;
	int8_t x4454 = INT8_MAX;
	uint64_t x4455 = 51129932815LLU;
	volatile int8_t x4456 = 4;
	volatile int32_t t66 = -17070978;

	t66 = ((x4453%(x4454<x4455))<<x4456);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x4457 = INT32_MIN;
	static int8_t x4458 = INT8_MIN;
	uint32_t x4460 = 2U;
	static int32_t t67 = -1;

	t67 = ((x4457%(x4458<x4459))<<x4460);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x4633 = 8066576U;
	static volatile int8_t x4635 = INT8_MAX;
	int8_t x4636 = 2;
	volatile uint32_t t68 = 1U;

	t68 = ((x4633%(x4634<x4635))<<x4636);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x4669 = -1;
	uint8_t x4670 = 1U;
	uint8_t x4671 = UINT8_MAX;
	static uint8_t x4672 = 1U;
	static volatile int32_t t69 = -204;

	t69 = ((x4669%(x4670<x4671))<<x4672);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x4785 = INT64_MAX;
	int64_t t70 = 2068441565711648216LL;

	t70 = ((x4785%(x4786<x4787))<<x4788);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x4809 = 95U;
	uint32_t x4811 = 1537U;
	uint8_t x4812 = 4U;
	int32_t t71 = 40078095;

	t71 = ((x4809%(x4810<x4811))<<x4812);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x4841 = INT8_MIN;
	static volatile int8_t x4842 = INT8_MAX;
	volatile int32_t x4843 = INT32_MAX;
	uint8_t x4844 = 27U;
	volatile int32_t t72 = 2349;

	t72 = ((x4841%(x4842<x4843))<<x4844);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x4849 = INT16_MIN;
	uint16_t x4850 = 1U;
	int16_t x4851 = INT16_MAX;
	int8_t x4852 = 20;
	volatile int32_t t73 = -56921;

	t73 = ((x4849%(x4850<x4851))<<x4852);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x4885 = 6479;
	static volatile int16_t x4886 = -15;
	int16_t x4887 = 17;
	uint8_t x4888 = 22U;

	t74 = ((x4885%(x4886<x4887))<<x4888);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x4933 = 125U;
	volatile int16_t x4934 = -7;
	uint16_t x4935 = UINT16_MAX;
	uint8_t x4936 = 7U;

	t75 = ((x4933%(x4934<x4935))<<x4936);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x4937 = 194885U;
	int16_t x4938 = INT16_MAX;
	uint64_t x4939 = UINT64_MAX;
	uint8_t x4940 = 1U;

	t76 = ((x4937%(x4938<x4939))<<x4940);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x4942 = -33LL;
	static int8_t x4943 = INT8_MAX;
	static uint16_t x4944 = 28U;
	volatile int32_t t77 = 4771;

	t77 = ((x4941%(x4942<x4943))<<x4944);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x4961 = 111U;
	int32_t x4962 = INT32_MIN;

	t78 = ((x4961%(x4962<x4963))<<x4964);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint32_t x4977 = UINT32_MAX;
	static volatile int64_t x4979 = 7LL;
	int8_t x4980 = 1;
	volatile uint32_t t79 = 2U;

	t79 = ((x4977%(x4978<x4979))<<x4980);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x4993 = UINT64_MAX;
	int8_t x4994 = INT8_MIN;
	static uint16_t x4995 = 39U;
	uint64_t t80 = 402424LLU;

	t80 = ((x4993%(x4994<x4995))<<x4996);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x5038 = 53;
	static uint16_t x5039 = 146U;
	static int8_t x5040 = 0;
	static int64_t t81 = -40974341LL;

	t81 = ((x5037%(x5038<x5039))<<x5040);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x5049 = INT16_MIN;
	static uint32_t x5050 = UINT32_MAX;
	static uint64_t x5051 = UINT64_MAX;
	volatile int32_t t82 = 3739715;

	t82 = ((x5049%(x5050<x5051))<<x5052);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x5105 = 34134624144658525LL;
	uint16_t x5107 = UINT16_MAX;

	t83 = ((x5105%(x5106<x5107))<<x5108);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x5109 = INT16_MAX;
	volatile int16_t x5110 = 3257;
	static volatile uint32_t x5111 = 128467U;
	int8_t x5112 = 3;
	static volatile int32_t t84 = -9;

	t84 = ((x5109%(x5110<x5111))<<x5112);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x5114 = 6;
	uint32_t x5115 = 20U;
	uint8_t x5116 = 24U;
	int32_t t85 = 0;

	t85 = ((x5113%(x5114<x5115))<<x5116);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x5149 = INT64_MAX;
	int16_t x5152 = 0;
	volatile int64_t t86 = 990651602742533203LL;

	t86 = ((x5149%(x5150<x5151))<<x5152);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x5157 = INT64_MAX;
	volatile int64_t x5158 = INT64_MIN;
	volatile int16_t x5159 = INT16_MIN;
	volatile uint8_t x5160 = 23U;
	int64_t t87 = -17737009128218381LL;

	t87 = ((x5157%(x5158<x5159))<<x5160);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x5245 = 15874U;
	static int32_t x5246 = INT32_MIN;
	int32_t x5247 = 84;
	static uint8_t x5248 = 2U;
	volatile uint32_t t88 = 4446902U;

	t88 = ((x5245%(x5246<x5247))<<x5248);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x5277 = 52U;
	volatile int32_t x5278 = INT32_MIN;
	volatile int64_t x5279 = 5194LL;
	uint32_t x5280 = 25U;
	volatile int32_t t89 = 4;

	t89 = ((x5277%(x5278<x5279))<<x5280);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x5377 = INT16_MIN;
	int8_t x5378 = -13;
	static volatile int8_t x5379 = 13;
	volatile int8_t x5380 = 1;
	volatile int32_t t90 = 10;

	t90 = ((x5377%(x5378<x5379))<<x5380);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x5406 = 5996825U;
	int32_t x5407 = INT32_MIN;
	uint16_t x5408 = 28U;
	int32_t t91 = -233;

	t91 = ((x5405%(x5406<x5407))<<x5408);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x5417 = INT32_MAX;
	uint8_t x5418 = UINT8_MAX;
	static uint32_t x5419 = 155142U;
	volatile uint8_t x5420 = 1U;
	volatile int32_t t92 = 38851;

	t92 = ((x5417%(x5418<x5419))<<x5420);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x5441 = UINT8_MAX;
	int8_t x5442 = INT8_MAX;
	uint8_t x5444 = 0U;
	volatile int32_t t93 = 13;

	t93 = ((x5441%(x5442<x5443))<<x5444);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x5605 = -24LL;
	uint8_t x5607 = UINT8_MAX;

	t94 = ((x5605%(x5606<x5607))<<x5608);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x5609 = UINT64_MAX;
	static int32_t x5610 = INT32_MIN;
	uint16_t x5611 = 166U;
	static int16_t x5612 = 0;
	static volatile uint64_t t95 = 3LLU;

	t95 = ((x5609%(x5610<x5611))<<x5612);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint16_t x5657 = UINT16_MAX;
	static int8_t x5658 = -8;
	int16_t x5659 = -1;
	volatile int16_t x5660 = 1;
	int32_t t96 = 460313532;

	t96 = ((x5657%(x5658<x5659))<<x5660);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x5685 = 53058262U;
	static int16_t x5686 = -1;
	int32_t x5687 = INT32_MAX;
	uint32_t t97 = 2436754U;

	t97 = ((x5685%(x5686<x5687))<<x5688);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x5861 = INT8_MIN;
	volatile int64_t x5862 = INT64_MIN;
	int8_t x5864 = 0;
	volatile int32_t t98 = -11716;

	t98 = ((x5861%(x5862<x5863))<<x5864);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x5865 = 613856LLU;
	int8_t x5866 = -10;
	int64_t x5867 = 399432824038LL;
	uint8_t x5868 = 46U;
	uint64_t t99 = 71685664685LLU;

	t99 = ((x5865%(x5866<x5867))<<x5868);

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


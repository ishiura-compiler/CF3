#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MIN;
uint16_t x3 = 6U;
int32_t t2 = -57253;
uint16_t x233 = 7603U;
int8_t x234 = 0;
volatile int32_t x386 = 33493;
int8_t x452 = INT8_MAX;
volatile int32_t t7 = 273213775;
uint8_t x476 = 2U;
static int8_t x582 = 14;
uint8_t x584 = 2U;
int8_t x601 = INT8_MIN;
static int32_t x688 = -1;
uint64_t x694 = 34991087802498339LLU;
int16_t x696 = INT16_MIN;
static int8_t x784 = -1;
int32_t t16 = 254;
volatile int32_t x925 = 12363464;
uint8_t x951 = 2U;
volatile int32_t t19 = 3681;
uint32_t x1269 = 23812842U;
int64_t x1340 = -1LL;
int32_t t21 = 34474264;
volatile uint16_t x1372 = 14929U;
int8_t x1583 = 0;
static int32_t x1685 = 4498;
int64_t x1776 = INT64_MIN;
volatile int32_t t29 = -876538277;
volatile int32_t t30 = 34;
static uint32_t x2224 = 851874198U;
static uint64_t x2409 = 98030LLU;
int32_t t39 = 211643154;
static uint64_t x2726 = 63021599864037LLU;
volatile int16_t x2827 = 1;
static int64_t x3224 = 74997707121LL;
volatile uint64_t x3278 = UINT64_MAX;
int8_t x3298 = INT8_MAX;
volatile int64_t x3516 = INT64_MIN;
static int16_t x3585 = INT16_MIN;
volatile int32_t t52 = 3026;
uint32_t x3642 = 258U;
int16_t x3653 = INT16_MIN;
uint64_t x3655 = 28LLU;
static uint64_t x3826 = 87LLU;
int64_t x3844 = 1028033609124LL;
int16_t x3858 = 19;
int64_t x3900 = INT64_MAX;
int64_t x4276 = -1LL;
uint64_t x4361 = 2118696LLU;
uint32_t x4452 = 1572513U;
int8_t x4484 = INT8_MAX;
int32_t t67 = -121505;
uint32_t x4521 = 69866883U;
static volatile int8_t x4523 = 3;
int32_t x4524 = 22687;
int16_t x4539 = 14;
uint8_t x4559 = 4U;
static volatile int8_t x4560 = INT8_MAX;
int32_t t71 = 13432125;
static int16_t x4762 = 73;
uint8_t x4763 = 0U;
int32_t t72 = 85;
volatile int32_t t74 = -3115140;
uint16_t x5020 = 2U;
uint64_t x5034 = 16347974777612584LLU;
uint64_t x5169 = 2LLU;
uint8_t x5171 = 1U;
volatile int32_t t78 = 739096893;
volatile int64_t x5236 = INT64_MIN;
int32_t t81 = -26744;
volatile int32_t x5576 = INT32_MIN;
int32_t t83 = 31783;
int32_t t84 = 303;
int16_t x5768 = INT16_MAX;
int32_t t85 = -15803;
uint64_t x5909 = UINT64_MAX;
volatile int32_t t88 = 14751;
uint16_t x6018 = 6U;
int64_t x6137 = -1LL;
static volatile uint8_t x6138 = 1U;
static volatile int32_t t92 = 202904;
int32_t t94 = -155582815;
volatile int32_t x6288 = INT32_MIN;
int32_t x6362 = 2071976;
static int8_t x6363 = 0;
static volatile int16_t x6479 = 1;
int8_t x6481 = 10;
int32_t x6483 = 0;


void f0(void) {
	uint8_t x2 = 0U;
	uint32_t x4 = 523881131U;
	int32_t t0 = 29451;

	t0 = (x1==((x2<<x3)&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x105 = INT32_MIN;
	static volatile uint8_t x106 = UINT8_MAX;
	uint8_t x107 = 4U;
	int8_t x108 = -41;
	volatile int32_t t1 = -1176913;

	t1 = (x105==((x106<<x107)&x108));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x201 = 2LLU;
	static uint16_t x202 = 6488U;
	uint8_t x203 = 0U;
	uint16_t x204 = 21U;

	t2 = (x201==((x202<<x203)&x204));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x235 = 14U;
	volatile int8_t x236 = INT8_MIN;
	int32_t t3 = 26;

	t3 = (x233==((x234<<x235)&x236));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x257 = INT64_MIN;
	uint16_t x258 = 181U;
	uint8_t x259 = 1U;
	int16_t x260 = 56;
	static volatile int32_t t4 = -1;

	t4 = (x257==((x258<<x259)&x260));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x333 = 195U;
	uint32_t x334 = 1504126389U;
	uint64_t x335 = 2LLU;
	static uint16_t x336 = UINT16_MAX;
	volatile int32_t t5 = 25629;

	t5 = (x333==((x334<<x335)&x336));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x385 = -1;
	volatile uint8_t x387 = 9U;
	int8_t x388 = INT8_MAX;
	volatile int32_t t6 = -31;

	t6 = (x385==((x386<<x387)&x388));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x449 = -282623576202437LL;
	volatile uint64_t x450 = 42485LLU;
	uint64_t x451 = 4LLU;

	t7 = (x449==((x450<<x451)&x452));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x473 = 173U;
	uint8_t x474 = UINT8_MAX;
	int8_t x475 = 2;
	int32_t t8 = -1434;

	t8 = (x473==((x474<<x475)&x476));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x581 = -15218LL;
	uint64_t x583 = 3LLU;
	int32_t t9 = -84733511;

	t9 = (x581==((x582<<x583)&x584));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x602 = 4U;
	static volatile uint8_t x603 = 0U;
	static uint8_t x604 = 18U;
	int32_t t10 = 5030;

	t10 = (x601==((x602<<x603)&x604));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x685 = INT16_MIN;
	uint64_t x686 = 113807LLU;
	uint8_t x687 = 17U;
	volatile int32_t t11 = -254014;

	t11 = (x685==((x686<<x687)&x688));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x693 = INT16_MIN;
	int16_t x695 = 55;
	volatile int32_t t12 = 150196;

	t12 = (x693==((x694<<x695)&x696));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x709 = -44;
	int16_t x710 = 21;
	volatile uint8_t x711 = 8U;
	int16_t x712 = INT16_MAX;
	volatile int32_t t13 = -14639216;

	t13 = (x709==((x710<<x711)&x712));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x745 = 29U;
	static uint32_t x746 = UINT32_MAX;
	uint8_t x747 = 7U;
	volatile int64_t x748 = 472213547921565LL;
	static volatile int32_t t14 = 991323;

	t14 = (x745==((x746<<x747)&x748));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x781 = 651981951U;
	uint64_t x782 = 25121147347883LLU;
	int16_t x783 = 62;
	volatile int32_t t15 = -78443;

	t15 = (x781==((x782<<x783)&x784));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x849 = -1;
	uint8_t x850 = 4U;
	volatile int8_t x851 = 0;
	int32_t x852 = INT32_MIN;

	t16 = (x849==((x850<<x851)&x852));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x926 = 1U;
	int16_t x927 = 1;
	int8_t x928 = INT8_MIN;
	volatile int32_t t17 = 2828;

	t17 = (x925==((x926<<x927)&x928));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x949 = 23803U;
	uint32_t x950 = 633537754U;
	int16_t x952 = INT16_MIN;
	volatile int32_t t18 = 425;

	t18 = (x949==((x950<<x951)&x952));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x1085 = UINT8_MAX;
	uint8_t x1086 = 3U;
	volatile uint16_t x1087 = 7U;
	static int8_t x1088 = INT8_MAX;

	t19 = (x1085==((x1086<<x1087)&x1088));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x1270 = 621219;
	uint16_t x1271 = 1U;
	int32_t x1272 = 13079;
	volatile int32_t t20 = 17920;

	t20 = (x1269==((x1270<<x1271)&x1272));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x1337 = -1;
	uint32_t x1338 = 732691805U;
	static uint8_t x1339 = 23U;

	t21 = (x1337==((x1338<<x1339)&x1340));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x1369 = INT32_MAX;
	uint64_t x1370 = UINT64_MAX;
	uint8_t x1371 = 7U;
	int32_t t22 = -1038149759;

	t22 = (x1369==((x1370<<x1371)&x1372));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1421 = UINT64_MAX;
	uint32_t x1422 = UINT32_MAX;
	static int16_t x1423 = 2;
	int32_t x1424 = INT32_MAX;
	int32_t t23 = -1324420;

	t23 = (x1421==((x1422<<x1423)&x1424));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1529 = INT32_MIN;
	uint32_t x1530 = 10U;
	uint8_t x1531 = 1U;
	int16_t x1532 = INT16_MIN;
	int32_t t24 = -93041736;

	t24 = (x1529==((x1530<<x1531)&x1532));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1581 = 4646495U;
	uint32_t x1582 = 385793704U;
	int8_t x1584 = -1;
	static int32_t t25 = -988049;

	t25 = (x1581==((x1582<<x1583)&x1584));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x1686 = INT8_MAX;
	uint8_t x1687 = 20U;
	int8_t x1688 = INT8_MIN;
	int32_t t26 = 0;

	t26 = (x1685==((x1686<<x1687)&x1688));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1729 = 2054U;
	volatile uint64_t x1730 = 748087388535LLU;
	static volatile uint16_t x1731 = 2U;
	volatile int8_t x1732 = INT8_MIN;
	int32_t t27 = 567;

	t27 = (x1729==((x1730<<x1731)&x1732));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1773 = -1;
	static uint32_t x1774 = 57121487U;
	static uint16_t x1775 = 17U;
	volatile int32_t t28 = 24;

	t28 = (x1773==((x1774<<x1775)&x1776));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1785 = 0U;
	uint16_t x1786 = 20U;
	int8_t x1787 = 1;
	int64_t x1788 = 530LL;

	t29 = (x1785==((x1786<<x1787)&x1788));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1837 = INT8_MAX;
	uint64_t x1838 = 199897LLU;
	int16_t x1839 = 3;
	volatile uint32_t x1840 = UINT32_MAX;

	t30 = (x1837==((x1838<<x1839)&x1840));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1881 = INT32_MAX;
	int32_t x1882 = 1;
	uint16_t x1883 = 1U;
	static int32_t x1884 = -2399;
	volatile int32_t t31 = 508;

	t31 = (x1881==((x1882<<x1883)&x1884));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x2085 = INT8_MIN;
	uint32_t x2086 = 1372187U;
	int8_t x2087 = 1;
	static int8_t x2088 = INT8_MIN;
	volatile int32_t t32 = -3145440;

	t32 = (x2085==((x2086<<x2087)&x2088));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x2137 = -1635;
	uint8_t x2138 = 1U;
	static uint8_t x2139 = 0U;
	volatile int16_t x2140 = INT16_MIN;
	int32_t t33 = 7;

	t33 = (x2137==((x2138<<x2139)&x2140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x2221 = 89U;
	uint32_t x2222 = 11U;
	int8_t x2223 = 2;
	int32_t t34 = -5;

	t34 = (x2221==((x2222<<x2223)&x2224));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x2273 = INT16_MIN;
	int32_t x2274 = INT32_MAX;
	volatile uint8_t x2275 = 0U;
	int32_t x2276 = INT32_MIN;
	int32_t t35 = -84732129;

	t35 = (x2273==((x2274<<x2275)&x2276));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x2305 = 1485762731U;
	volatile int16_t x2306 = 56;
	uint16_t x2307 = 9U;
	uint32_t x2308 = UINT32_MAX;
	volatile int32_t t36 = -31845425;

	t36 = (x2305==((x2306<<x2307)&x2308));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x2349 = INT32_MIN;
	uint64_t x2350 = 166LLU;
	uint64_t x2351 = 13LLU;
	int16_t x2352 = -13545;
	volatile int32_t t37 = 399545;

	t37 = (x2349==((x2350<<x2351)&x2352));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x2410 = 586U;
	static int8_t x2411 = 0;
	uint32_t x2412 = 860U;
	int32_t t38 = -28;

	t38 = (x2409==((x2410<<x2411)&x2412));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x2477 = INT16_MAX;
	uint64_t x2478 = 10253889LLU;
	uint16_t x2479 = 1U;
	int64_t x2480 = INT64_MAX;

	t39 = (x2477==((x2478<<x2479)&x2480));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x2545 = -1;
	int8_t x2546 = 1;
	uint64_t x2547 = 1LLU;
	int8_t x2548 = INT8_MAX;
	volatile int32_t t40 = 266540475;

	t40 = (x2545==((x2546<<x2547)&x2548));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x2725 = INT32_MIN;
	int64_t x2727 = 16LL;
	int16_t x2728 = -3984;
	int32_t t41 = -16;

	t41 = (x2725==((x2726<<x2727)&x2728));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2825 = INT8_MIN;
	volatile uint16_t x2826 = 7U;
	static int16_t x2828 = -6;
	volatile int32_t t42 = 80;

	t42 = (x2825==((x2826<<x2827)&x2828));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x3105 = 72U;
	volatile int8_t x3106 = INT8_MAX;
	static volatile uint16_t x3107 = 1U;
	int8_t x3108 = -1;
	int32_t t43 = 31;

	t43 = (x3105==((x3106<<x3107)&x3108));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x3153 = UINT64_MAX;
	static int16_t x3154 = INT16_MAX;
	static uint8_t x3155 = 1U;
	volatile uint64_t x3156 = 118356949549978862LLU;
	volatile int32_t t44 = 762877239;

	t44 = (x3153==((x3154<<x3155)&x3156));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x3221 = 7914LLU;
	uint32_t x3222 = 783U;
	uint32_t x3223 = 1U;
	volatile int32_t t45 = -902029594;

	t45 = (x3221==((x3222<<x3223)&x3224));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x3241 = -2;
	uint32_t x3242 = UINT32_MAX;
	uint64_t x3243 = 3LLU;
	int64_t x3244 = INT64_MIN;
	volatile int32_t t46 = -1;

	t46 = (x3241==((x3242<<x3243)&x3244));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x3277 = INT8_MIN;
	int8_t x3279 = 3;
	uint32_t x3280 = UINT32_MAX;
	volatile int32_t t47 = -8289903;

	t47 = (x3277==((x3278<<x3279)&x3280));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x3293 = -2;
	uint64_t x3294 = 63763670001362LLU;
	int8_t x3295 = 1;
	int32_t x3296 = INT32_MIN;
	volatile int32_t t48 = 2270734;

	t48 = (x3293==((x3294<<x3295)&x3296));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x3297 = -118;
	static int16_t x3299 = 1;
	static uint8_t x3300 = UINT8_MAX;
	int32_t t49 = -983;

	t49 = (x3297==((x3298<<x3299)&x3300));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x3445 = INT32_MIN;
	uint64_t x3446 = 0LLU;
	static uint8_t x3447 = 38U;
	static int8_t x3448 = INT8_MAX;
	volatile int32_t t50 = -2611524;

	t50 = (x3445==((x3446<<x3447)&x3448));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x3513 = INT64_MAX;
	static uint32_t x3514 = 40U;
	uint16_t x3515 = 1U;
	volatile int32_t t51 = -5492;

	t51 = (x3513==((x3514<<x3515)&x3516));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x3586 = 1U;
	uint16_t x3587 = 18U;
	int64_t x3588 = -1LL;

	t52 = (x3585==((x3586<<x3587)&x3588));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x3641 = 228675805LLU;
	uint8_t x3643 = 9U;
	int32_t x3644 = INT32_MAX;
	volatile int32_t t53 = 8178;

	t53 = (x3641==((x3642<<x3643)&x3644));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x3654 = 2;
	uint8_t x3656 = 4U;
	static volatile int32_t t54 = -105;

	t54 = (x3653==((x3654<<x3655)&x3656));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x3705 = -1;
	int16_t x3706 = 3017;
	static uint8_t x3707 = 10U;
	int64_t x3708 = INT64_MIN;
	int32_t t55 = 111;

	t55 = (x3705==((x3706<<x3707)&x3708));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x3749 = UINT64_MAX;
	uint16_t x3750 = 7337U;
	volatile uint16_t x3751 = 1U;
	uint8_t x3752 = UINT8_MAX;
	volatile int32_t t56 = 0;

	t56 = (x3749==((x3750<<x3751)&x3752));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x3825 = 118310452329676LLU;
	uint16_t x3827 = 51U;
	int64_t x3828 = -3588846871314911682LL;
	volatile int32_t t57 = 0;

	t57 = (x3825==((x3826<<x3827)&x3828));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x3841 = 15U;
	uint32_t x3842 = 1072692737U;
	uint16_t x3843 = 22U;
	volatile int32_t t58 = -1457011;

	t58 = (x3841==((x3842<<x3843)&x3844));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x3857 = -1;
	uint8_t x3859 = 4U;
	volatile int64_t x3860 = -45749390875003LL;
	volatile int32_t t59 = -43368246;

	t59 = (x3857==((x3858<<x3859)&x3860));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x3897 = INT64_MIN;
	static uint64_t x3898 = 28874805290325LLU;
	uint8_t x3899 = 0U;
	volatile int32_t t60 = 93385948;

	t60 = (x3897==((x3898<<x3899)&x3900));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x4273 = INT8_MAX;
	uint8_t x4274 = UINT8_MAX;
	volatile uint8_t x4275 = 1U;
	static volatile int32_t t61 = -982943056;

	t61 = (x4273==((x4274<<x4275)&x4276));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x4289 = INT8_MAX;
	uint8_t x4290 = UINT8_MAX;
	volatile uint32_t x4291 = 8U;
	int64_t x4292 = -139686431212737087LL;
	static int32_t t62 = -2478443;

	t62 = (x4289==((x4290<<x4291)&x4292));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x4362 = 32881U;
	uint16_t x4363 = 8U;
	int16_t x4364 = 3;
	volatile int32_t t63 = -15714227;

	t63 = (x4361==((x4362<<x4363)&x4364));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x4401 = UINT8_MAX;
	volatile uint32_t x4402 = 87079643U;
	uint8_t x4403 = 18U;
	int32_t x4404 = -1;
	volatile int32_t t64 = 4;

	t64 = (x4401==((x4402<<x4403)&x4404));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x4449 = INT16_MAX;
	int8_t x4450 = INT8_MAX;
	uint16_t x4451 = 21U;
	volatile int32_t t65 = -45;

	t65 = (x4449==((x4450<<x4451)&x4452));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x4477 = -1LL;
	uint32_t x4478 = UINT32_MAX;
	volatile uint8_t x4479 = 9U;
	int64_t x4480 = 110543LL;
	int32_t t66 = -926;

	t66 = (x4477==((x4478<<x4479)&x4480));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x4481 = -1273678;
	uint8_t x4482 = UINT8_MAX;
	static int8_t x4483 = 7;

	t67 = (x4481==((x4482<<x4483)&x4484));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x4522 = UINT64_MAX;
	int32_t t68 = 221;

	t68 = (x4521==((x4522<<x4523)&x4524));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x4537 = 53229991793436LLU;
	int8_t x4538 = INT8_MAX;
	volatile int16_t x4540 = -1;
	static volatile int32_t t69 = 50;

	t69 = (x4537==((x4538<<x4539)&x4540));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x4557 = UINT32_MAX;
	uint8_t x4558 = UINT8_MAX;
	volatile int32_t t70 = 13;

	t70 = (x4557==((x4558<<x4559)&x4560));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x4657 = UINT32_MAX;
	uint16_t x4658 = UINT16_MAX;
	static uint8_t x4659 = 8U;
	volatile int32_t x4660 = INT32_MAX;

	t71 = (x4657==((x4658<<x4659)&x4660));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x4761 = INT32_MIN;
	int64_t x4764 = -1LL;

	t72 = (x4761==((x4762<<x4763)&x4764));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x4933 = INT64_MIN;
	volatile int32_t x4934 = INT32_MAX;
	static uint8_t x4935 = 0U;
	int8_t x4936 = -1;
	int32_t t73 = 1;

	t73 = (x4933==((x4934<<x4935)&x4936));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x4965 = -1;
	uint8_t x4966 = 6U;
	int16_t x4967 = 23;
	volatile int16_t x4968 = 5086;

	t74 = (x4965==((x4966<<x4967)&x4968));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x5017 = -1LL;
	int64_t x5018 = INT64_MAX;
	volatile int8_t x5019 = 0;
	static int32_t t75 = 26;

	t75 = (x5017==((x5018<<x5019)&x5020));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x5033 = 14293LLU;
	uint8_t x5035 = 8U;
	int64_t x5036 = INT64_MAX;
	volatile int32_t t76 = -60575;

	t76 = (x5033==((x5034<<x5035)&x5036));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x5165 = INT8_MIN;
	uint32_t x5166 = 23556215U;
	volatile int32_t x5167 = 1;
	volatile uint64_t x5168 = 204005845103628LLU;
	int32_t t77 = -55;

	t77 = (x5165==((x5166<<x5167)&x5168));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x5170 = 95U;
	static int8_t x5172 = -1;

	t78 = (x5169==((x5170<<x5171)&x5172));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x5197 = UINT64_MAX;
	static int16_t x5198 = 14;
	uint16_t x5199 = 10U;
	static volatile int8_t x5200 = 38;
	int32_t t79 = 4;

	t79 = (x5197==((x5198<<x5199)&x5200));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x5233 = INT16_MIN;
	uint8_t x5234 = 3U;
	volatile uint16_t x5235 = 0U;
	int32_t t80 = 10059;

	t80 = (x5233==((x5234<<x5235)&x5236));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x5381 = 5;
	int16_t x5382 = 7;
	static uint16_t x5383 = 0U;
	uint8_t x5384 = 16U;

	t81 = (x5381==((x5382<<x5383)&x5384));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x5417 = 5070293024980787354LLU;
	uint8_t x5418 = UINT8_MAX;
	volatile int16_t x5419 = 4;
	volatile int8_t x5420 = -1;
	int32_t t82 = 2;

	t82 = (x5417==((x5418<<x5419)&x5420));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x5573 = -1;
	static uint32_t x5574 = 171835U;
	int64_t x5575 = 4LL;

	t83 = (x5573==((x5574<<x5575)&x5576));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x5669 = INT8_MIN;
	uint16_t x5670 = UINT16_MAX;
	volatile uint8_t x5671 = 0U;
	static int8_t x5672 = 5;

	t84 = (x5669==((x5670<<x5671)&x5672));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x5765 = 40U;
	uint16_t x5766 = 10252U;
	uint8_t x5767 = 2U;

	t85 = (x5765==((x5766<<x5767)&x5768));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x5809 = INT8_MIN;
	uint16_t x5810 = 979U;
	uint16_t x5811 = 7U;
	int32_t x5812 = INT32_MAX;
	volatile int32_t t86 = -86;

	t86 = (x5809==((x5810<<x5811)&x5812));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x5910 = 0;
	uint16_t x5911 = 1U;
	static volatile int8_t x5912 = 59;
	volatile int32_t t87 = 20475;

	t87 = (x5909==((x5910<<x5911)&x5912));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x5969 = 14583;
	uint16_t x5970 = 24295U;
	int8_t x5971 = 1;
	int32_t x5972 = -1;

	t88 = (x5969==((x5970<<x5971)&x5972));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x6017 = 25U;
	int8_t x6019 = 6;
	int16_t x6020 = INT16_MIN;
	volatile int32_t t89 = 954;

	t89 = (x6017==((x6018<<x6019)&x6020));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x6069 = INT16_MAX;
	int8_t x6070 = INT8_MAX;
	static int16_t x6071 = 2;
	volatile int64_t x6072 = INT64_MIN;
	volatile int32_t t90 = -393350;

	t90 = (x6069==((x6070<<x6071)&x6072));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x6085 = -671;
	volatile int8_t x6086 = 6;
	uint8_t x6087 = 5U;
	int16_t x6088 = 1;
	volatile int32_t t91 = 4;

	t91 = (x6085==((x6086<<x6087)&x6088));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x6139 = 4U;
	uint16_t x6140 = UINT16_MAX;

	t92 = (x6137==((x6138<<x6139)&x6140));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x6169 = 99LL;
	static uint32_t x6170 = UINT32_MAX;
	int8_t x6171 = 1;
	int64_t x6172 = -75455755LL;
	int32_t t93 = 0;

	t93 = (x6169==((x6170<<x6171)&x6172));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x6265 = INT64_MIN;
	volatile int32_t x6266 = 145;
	int16_t x6267 = 2;
	int64_t x6268 = INT64_MAX;

	t94 = (x6265==((x6266<<x6267)&x6268));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x6269 = -1;
	uint16_t x6270 = 0U;
	static uint8_t x6271 = 7U;
	int32_t x6272 = -1;
	int32_t t95 = 890156;

	t95 = (x6269==((x6270<<x6271)&x6272));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x6285 = 5U;
	int8_t x6286 = INT8_MAX;
	int8_t x6287 = 20;
	static int32_t t96 = 21;

	t96 = (x6285==((x6286<<x6287)&x6288));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x6361 = INT64_MIN;
	int16_t x6364 = INT16_MIN;
	static int32_t t97 = -94662;

	t97 = (x6361==((x6362<<x6363)&x6364));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x6477 = 47U;
	uint64_t x6478 = 1469403543055LLU;
	int8_t x6480 = INT8_MAX;
	volatile int32_t t98 = -835859086;

	t98 = (x6477==((x6478<<x6479)&x6480));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x6482 = 5481572;
	volatile uint16_t x6484 = 5U;
	int32_t t99 = -60171051;

	t99 = (x6481==((x6482<<x6483)&x6484));

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


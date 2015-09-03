#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x136 = INT16_MIN;
uint16_t x385 = 27U;
int32_t t3 = 205;
uint32_t x552 = 2029U;
volatile int32_t t6 = 7664540;
uint8_t x747 = UINT8_MAX;
int16_t x920 = -1;
int8_t x1077 = 0;
volatile uint16_t x1078 = 5U;
uint32_t x1109 = 57519386U;
volatile int16_t x1204 = INT16_MAX;
uint8_t x1626 = 3U;
static int64_t x1804 = -511LL;
static volatile int32_t x2133 = INT32_MAX;
int32_t t27 = 9767;
int8_t x2207 = -1;
static int32_t t28 = -16564033;
int64_t x2278 = 11LL;
int16_t x2280 = -1;
volatile int32_t t29 = 328534487;
volatile int32_t x2387 = 312290;
static int32_t x2388 = INT32_MIN;
int64_t x2520 = 91526LL;
int32_t t32 = -456170;
int16_t x2691 = -43;
uint16_t x2778 = 32U;
int16_t x2779 = 3;
static int32_t x2819 = 10506806;
int8_t x2859 = 10;
int16_t x2870 = 1;
int16_t x2944 = INT16_MIN;
volatile int64_t x2959 = -1LL;
static volatile uint64_t x2960 = UINT64_MAX;
int32_t t40 = -15694;
static volatile uint8_t x3166 = 2U;
uint8_t x3185 = 7U;
static int8_t x3188 = INT8_MIN;
int32_t t44 = -191675852;
volatile int32_t t45 = 1942083;
int8_t x3405 = 3;
uint32_t x3406 = 22U;
volatile int32_t t46 = 127;
int8_t x3535 = -1;
uint32_t x3609 = 655743U;
static int32_t t49 = -62;
volatile int64_t x3643 = -1LL;
static volatile int8_t x3644 = INT8_MAX;
static int16_t x3809 = 411;
int8_t x3810 = 0;
uint32_t x3881 = UINT32_MAX;
uint8_t x3906 = 1U;
volatile int16_t x4078 = 1;
volatile int32_t t59 = -366665;
uint8_t x4142 = 7U;
int16_t x4264 = -746;
volatile int8_t x4321 = INT8_MAX;
uint8_t x4322 = 2U;
int32_t x4332 = -26590;
volatile int16_t x4468 = -155;
volatile int8_t x4615 = 4;
int16_t x4645 = 40;
static int8_t x4647 = INT8_MIN;
volatile int32_t t70 = 486;
uint64_t x4657 = 80997089LLU;
volatile uint32_t x4822 = 2U;
uint64_t x5014 = 16LLU;
uint32_t x5015 = UINT32_MAX;
int8_t x5082 = 3;
uint8_t x5086 = 0U;
static int64_t x5087 = INT64_MIN;
static int32_t x5088 = -1;
int64_t x5221 = 70040048450831317LL;
int16_t x5370 = 15;
int8_t x5371 = -8;
static volatile uint64_t x5561 = 3274406103180300122LLU;
volatile uint64_t x5612 = UINT64_MAX;
int32_t t82 = -14498;
uint16_t x5631 = 0U;
static volatile int64_t x5632 = 21972LL;
volatile int32_t t85 = 148;
uint64_t x6425 = 1103707514263350LLU;
uint64_t x6427 = 34827921649233LLU;
static uint64_t x6471 = UINT64_MAX;
uint64_t x6501 = 3LLU;
uint64_t x6504 = 874133LLU;
volatile int32_t t93 = -4897819;
int16_t x6953 = INT16_MAX;
uint8_t x6955 = UINT8_MAX;
static volatile int32_t t96 = -23;
static int8_t x7128 = INT8_MAX;
volatile uint32_t x7133 = 80461U;


void f0(void) {
	int16_t x1 = 936;
	static int16_t x2 = 2;
	static int16_t x3 = 1224;
	uint32_t x4 = 2034013U;
	volatile int32_t t0 = 5;

	t0 = ((x1<<x2)==(x3%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x133 = 3051;
	int32_t x134 = 2;
	volatile uint16_t x135 = 147U;
	int32_t t1 = 10249003;

	t1 = ((x133<<x134)==(x135%x136));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x386 = 5U;
	static int16_t x387 = INT16_MIN;
	int64_t x388 = 1278LL;
	static volatile int32_t t2 = 1995895;

	t2 = ((x385<<x386)==(x387%x388));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x537 = 1923120U;
	static volatile int16_t x538 = 1;
	static int32_t x539 = 10;
	static int32_t x540 = INT32_MAX;

	t3 = ((x537<<x538)==(x539%x540));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x549 = 65U;
	uint64_t x550 = 1LLU;
	volatile uint64_t x551 = UINT64_MAX;
	static int32_t t4 = -8075;

	t4 = ((x549<<x550)==(x551%x552));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x585 = 20967395187LL;
	uint8_t x586 = 5U;
	uint32_t x587 = 41U;
	volatile uint8_t x588 = UINT8_MAX;
	static int32_t t5 = -50237;

	t5 = ((x585<<x586)==(x587%x588));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x589 = 4755997LLU;
	volatile uint16_t x590 = 0U;
	int32_t x591 = INT32_MIN;
	volatile int8_t x592 = 1;

	t6 = ((x589<<x590)==(x591%x592));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x613 = UINT64_MAX;
	static int8_t x614 = 26;
	volatile int8_t x615 = 28;
	int64_t x616 = 3736478LL;
	volatile int32_t t7 = -132930172;

	t7 = ((x613<<x614)==(x615%x616));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x745 = INT16_MAX;
	volatile uint8_t x746 = 0U;
	volatile int64_t x748 = INT64_MIN;
	static int32_t t8 = 2481;

	t8 = ((x745<<x746)==(x747%x748));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x917 = 2U;
	volatile uint16_t x918 = 0U;
	static int16_t x919 = -6;
	volatile int32_t t9 = 677118696;

	t9 = ((x917<<x918)==(x919%x920));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x1079 = 200006U;
	static volatile int64_t x1080 = -1LL;
	int32_t t10 = 88816216;

	t10 = ((x1077<<x1078)==(x1079%x1080));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x1110 = 1;
	int8_t x1111 = -26;
	static volatile int64_t x1112 = INT64_MIN;
	volatile int32_t t11 = -199153;

	t11 = ((x1109<<x1110)==(x1111%x1112));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x1201 = INT8_MAX;
	uint8_t x1202 = 1U;
	int16_t x1203 = 1;
	int32_t t12 = 14428;

	t12 = ((x1201<<x1202)==(x1203%x1204));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x1257 = 73U;
	uint32_t x1258 = 1U;
	static int32_t x1259 = -273;
	uint64_t x1260 = 510839155LLU;
	int32_t t13 = 157665698;

	t13 = ((x1257<<x1258)==(x1259%x1260));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x1353 = 184451914U;
	uint8_t x1354 = 29U;
	int64_t x1355 = INT64_MAX;
	volatile uint16_t x1356 = 904U;
	volatile int32_t t14 = 0;

	t14 = ((x1353<<x1354)==(x1355%x1356));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x1381 = 1816869;
	uint32_t x1382 = 3U;
	int64_t x1383 = 118268913LL;
	int8_t x1384 = 63;
	volatile int32_t t15 = -472019287;

	t15 = ((x1381<<x1382)==(x1383%x1384));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x1429 = 475965209U;
	static int8_t x1430 = 6;
	int16_t x1431 = -1;
	volatile int64_t x1432 = INT64_MAX;
	int32_t t16 = -71;

	t16 = ((x1429<<x1430)==(x1431%x1432));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x1449 = 10381070LL;
	volatile int8_t x1450 = 4;
	int64_t x1451 = -581799LL;
	int8_t x1452 = INT8_MIN;
	static volatile int32_t t17 = -160650041;

	t17 = ((x1449<<x1450)==(x1451%x1452));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x1585 = 1012520309573998LLU;
	uint8_t x1586 = 5U;
	int32_t x1587 = -1;
	uint64_t x1588 = 2846910433718619325LLU;
	volatile int32_t t18 = -1424840;

	t18 = ((x1585<<x1586)==(x1587%x1588));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x1625 = 15U;
	uint64_t x1627 = 627LLU;
	uint64_t x1628 = 691581129145928799LLU;
	int32_t t19 = 248187;

	t19 = ((x1625<<x1626)==(x1627%x1628));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1633 = 0;
	volatile uint8_t x1634 = 6U;
	static volatile int8_t x1635 = -1;
	int16_t x1636 = -1;
	int32_t t20 = 13;

	t20 = ((x1633<<x1634)==(x1635%x1636));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1789 = UINT8_MAX;
	static volatile int8_t x1790 = 0;
	static int64_t x1791 = INT64_MIN;
	volatile int32_t x1792 = -16193585;
	volatile int32_t t21 = 140;

	t21 = ((x1789<<x1790)==(x1791%x1792));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1801 = 15;
	static volatile uint8_t x1802 = 3U;
	volatile int64_t x1803 = INT64_MIN;
	volatile int32_t t22 = -1602224;

	t22 = ((x1801<<x1802)==(x1803%x1804));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1813 = 794LLU;
	uint8_t x1814 = 37U;
	volatile int16_t x1815 = INT16_MIN;
	int16_t x1816 = 4394;
	volatile int32_t t23 = -1010;

	t23 = ((x1813<<x1814)==(x1815%x1816));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1845 = 46;
	static uint32_t x1846 = 7U;
	int8_t x1847 = INT8_MAX;
	static int8_t x1848 = 1;
	static volatile int32_t t24 = 15957508;

	t24 = ((x1845<<x1846)==(x1847%x1848));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x1861 = 29598U;
	uint64_t x1862 = 1LLU;
	int8_t x1863 = INT8_MIN;
	uint16_t x1864 = 8862U;
	static volatile int32_t t25 = 5954;

	t25 = ((x1861<<x1862)==(x1863%x1864));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x2134 = 0;
	static int64_t x2135 = INT64_MIN;
	uint64_t x2136 = UINT64_MAX;
	volatile int32_t t26 = -674625227;

	t26 = ((x2133<<x2134)==(x2135%x2136));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x2149 = UINT8_MAX;
	uint8_t x2150 = 3U;
	int64_t x2151 = 35051025LL;
	int8_t x2152 = -6;

	t27 = ((x2149<<x2150)==(x2151%x2152));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x2205 = 0U;
	volatile uint8_t x2206 = 0U;
	uint64_t x2208 = UINT64_MAX;

	t28 = ((x2205<<x2206)==(x2207%x2208));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x2277 = INT8_MAX;
	int64_t x2279 = INT64_MIN;

	t29 = ((x2277<<x2278)==(x2279%x2280));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x2385 = 6U;
	uint64_t x2386 = 0LLU;
	int32_t t30 = 865620;

	t30 = ((x2385<<x2386)==(x2387%x2388));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x2517 = UINT64_MAX;
	int8_t x2518 = 4;
	int32_t x2519 = -1;
	static int32_t t31 = 77487521;

	t31 = ((x2517<<x2518)==(x2519%x2520));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x2621 = 0U;
	volatile int8_t x2622 = 23;
	int8_t x2623 = INT8_MIN;
	int64_t x2624 = INT64_MIN;

	t32 = ((x2621<<x2622)==(x2623%x2624));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x2689 = 697878952050649LL;
	static uint8_t x2690 = 11U;
	int16_t x2692 = INT16_MIN;
	static volatile int32_t t33 = -68694;

	t33 = ((x2689<<x2690)==(x2691%x2692));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x2777 = 530368086124LLU;
	int8_t x2780 = 1;
	volatile int32_t t34 = -419669132;

	t34 = ((x2777<<x2778)==(x2779%x2780));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x2817 = 109U;
	static uint8_t x2818 = 0U;
	int8_t x2820 = INT8_MIN;
	static int32_t t35 = -259349;

	t35 = ((x2817<<x2818)==(x2819%x2820));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x2857 = INT8_MAX;
	uint8_t x2858 = 9U;
	uint16_t x2860 = UINT16_MAX;
	volatile int32_t t36 = 753877;

	t36 = ((x2857<<x2858)==(x2859%x2860));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x2869 = 41U;
	static uint16_t x2871 = UINT16_MAX;
	uint8_t x2872 = 7U;
	static int32_t t37 = 949911;

	t37 = ((x2869<<x2870)==(x2871%x2872));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x2913 = 23456U;
	static uint16_t x2914 = 7U;
	int32_t x2915 = INT32_MAX;
	int32_t x2916 = 46027054;
	int32_t t38 = 1885458;

	t38 = ((x2913<<x2914)==(x2915%x2916));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x2941 = 443914756LLU;
	uint32_t x2942 = 27U;
	static int64_t x2943 = INT64_MIN;
	volatile int32_t t39 = 3;

	t39 = ((x2941<<x2942)==(x2943%x2944));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x2957 = 4;
	uint8_t x2958 = 1U;

	t40 = ((x2957<<x2958)==(x2959%x2960));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x3165 = 1;
	volatile int16_t x3167 = -14622;
	int16_t x3168 = INT16_MAX;
	volatile int32_t t41 = 46;

	t41 = ((x3165<<x3166)==(x3167%x3168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x3181 = 32899U;
	static uint16_t x3182 = 6U;
	volatile int16_t x3183 = INT16_MIN;
	static int8_t x3184 = INT8_MAX;
	volatile int32_t t42 = -1698;

	t42 = ((x3181<<x3182)==(x3183%x3184));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x3186 = 2U;
	int64_t x3187 = INT64_MIN;
	volatile int32_t t43 = -35747;

	t43 = ((x3185<<x3186)==(x3187%x3188));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x3189 = 3332433U;
	volatile uint8_t x3190 = 1U;
	int16_t x3191 = -145;
	static uint32_t x3192 = 33639940U;

	t44 = ((x3189<<x3190)==(x3191%x3192));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x3369 = 399077094184079322LLU;
	uint8_t x3370 = 3U;
	int16_t x3371 = INT16_MAX;
	volatile int8_t x3372 = -1;

	t45 = ((x3369<<x3370)==(x3371%x3372));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x3407 = 1411096LL;
	int32_t x3408 = 197;

	t46 = ((x3405<<x3406)==(x3407%x3408));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x3533 = 2302095U;
	volatile int8_t x3534 = 8;
	static int16_t x3536 = INT16_MIN;
	static int32_t t47 = 4092;

	t47 = ((x3533<<x3534)==(x3535%x3536));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x3565 = 1648364232480LLU;
	int32_t x3566 = 40;
	int8_t x3567 = 8;
	int32_t x3568 = -1;
	static volatile int32_t t48 = -56068;

	t48 = ((x3565<<x3566)==(x3567%x3568));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x3610 = 30U;
	uint64_t x3611 = 1LLU;
	uint16_t x3612 = 3986U;

	t49 = ((x3609<<x3610)==(x3611%x3612));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x3641 = 1LLU;
	uint8_t x3642 = 2U;
	int32_t t50 = 26885915;

	t50 = ((x3641<<x3642)==(x3643%x3644));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x3773 = 1826854U;
	uint8_t x3774 = 2U;
	int8_t x3775 = -7;
	int32_t x3776 = INT32_MAX;
	int32_t t51 = 210739061;

	t51 = ((x3773<<x3774)==(x3775%x3776));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x3811 = UINT8_MAX;
	uint16_t x3812 = UINT16_MAX;
	volatile int32_t t52 = 584071720;

	t52 = ((x3809<<x3810)==(x3811%x3812));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x3833 = 239LLU;
	uint16_t x3834 = 11U;
	uint16_t x3835 = UINT16_MAX;
	uint8_t x3836 = UINT8_MAX;
	int32_t t53 = 2091524;

	t53 = ((x3833<<x3834)==(x3835%x3836));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x3841 = 2U;
	uint8_t x3842 = 3U;
	int32_t x3843 = INT32_MAX;
	int16_t x3844 = INT16_MAX;
	static volatile int32_t t54 = 235;

	t54 = ((x3841<<x3842)==(x3843%x3844));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x3882 = 31U;
	static uint8_t x3883 = UINT8_MAX;
	int16_t x3884 = INT16_MAX;
	int32_t t55 = -27075;

	t55 = ((x3881<<x3882)==(x3883%x3884));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x3905 = 0LL;
	uint64_t x3907 = 57576712900433464LLU;
	int16_t x3908 = 769;
	int32_t t56 = 2;

	t56 = ((x3905<<x3906)==(x3907%x3908));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x3997 = 6U;
	volatile int16_t x3998 = 1;
	uint8_t x3999 = UINT8_MAX;
	int64_t x4000 = -512178LL;
	int32_t t57 = 0;

	t57 = ((x3997<<x3998)==(x3999%x4000));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x4017 = 16848178571660LLU;
	volatile uint8_t x4018 = 1U;
	uint32_t x4019 = UINT32_MAX;
	int32_t x4020 = -1;
	volatile int32_t t58 = 0;

	t58 = ((x4017<<x4018)==(x4019%x4020));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x4077 = 750;
	volatile int64_t x4079 = -9LL;
	static int32_t x4080 = -1;

	t59 = ((x4077<<x4078)==(x4079%x4080));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x4141 = 4;
	uint8_t x4143 = UINT8_MAX;
	uint64_t x4144 = 6LLU;
	int32_t t60 = -8;

	t60 = ((x4141<<x4142)==(x4143%x4144));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x4229 = INT16_MAX;
	uint8_t x4230 = 9U;
	uint8_t x4231 = UINT8_MAX;
	int8_t x4232 = INT8_MIN;
	volatile int32_t t61 = -88176014;

	t61 = ((x4229<<x4230)==(x4231%x4232));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x4261 = 3LLU;
	int32_t x4262 = 0;
	int8_t x4263 = -18;
	static int32_t t62 = 99124;

	t62 = ((x4261<<x4262)==(x4263%x4264));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x4317 = UINT8_MAX;
	uint64_t x4318 = 6LLU;
	int16_t x4319 = -1;
	volatile int32_t x4320 = -1;
	static volatile int32_t t63 = 121052462;

	t63 = ((x4317<<x4318)==(x4319%x4320));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint8_t x4323 = 3U;
	int16_t x4324 = INT16_MAX;
	static int32_t t64 = 114;

	t64 = ((x4321<<x4322)==(x4323%x4324));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x4329 = 106972464;
	static int16_t x4330 = 0;
	volatile int8_t x4331 = INT8_MIN;
	volatile int32_t t65 = 9;

	t65 = ((x4329<<x4330)==(x4331%x4332));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x4345 = UINT64_MAX;
	uint16_t x4346 = 1U;
	int64_t x4347 = INT64_MAX;
	static int32_t x4348 = INT32_MAX;
	int32_t t66 = 123;

	t66 = ((x4345<<x4346)==(x4347%x4348));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x4465 = 2887603783091LLU;
	static int16_t x4466 = 0;
	static int8_t x4467 = -1;
	int32_t t67 = 138;

	t67 = ((x4465<<x4466)==(x4467%x4468));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x4473 = 15;
	uint8_t x4474 = 2U;
	int16_t x4475 = -1;
	int16_t x4476 = 654;
	static volatile int32_t t68 = 24099;

	t68 = ((x4473<<x4474)==(x4475%x4476));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x4613 = 568;
	uint32_t x4614 = 7U;
	volatile int64_t x4616 = 4354LL;
	volatile int32_t t69 = -456918397;

	t69 = ((x4613<<x4614)==(x4615%x4616));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x4646 = 1U;
	int32_t x4648 = 285806;

	t70 = ((x4645<<x4646)==(x4647%x4648));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x4658 = 7;
	int32_t x4659 = -1;
	int32_t x4660 = -1;
	volatile int32_t t71 = -18218;

	t71 = ((x4657<<x4658)==(x4659%x4660));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x4781 = 1;
	uint8_t x4782 = 1U;
	volatile int32_t x4783 = INT32_MIN;
	uint64_t x4784 = 131495632941LLU;
	volatile int32_t t72 = 147;

	t72 = ((x4781<<x4782)==(x4783%x4784));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x4821 = 30221086LLU;
	int8_t x4823 = INT8_MIN;
	volatile int32_t x4824 = INT32_MIN;
	int32_t t73 = 2782;

	t73 = ((x4821<<x4822)==(x4823%x4824));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x4881 = 1;
	int8_t x4882 = 7;
	uint64_t x4883 = 167552630410314LLU;
	static uint64_t x4884 = 326LLU;
	int32_t t74 = -21;

	t74 = ((x4881<<x4882)==(x4883%x4884));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x5013 = UINT64_MAX;
	static int8_t x5016 = INT8_MIN;
	volatile int32_t t75 = -44;

	t75 = ((x5013<<x5014)==(x5015%x5016));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x5081 = 1132U;
	uint16_t x5083 = 14U;
	static int16_t x5084 = INT16_MIN;
	static volatile int32_t t76 = -26;

	t76 = ((x5081<<x5082)==(x5083%x5084));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x5085 = 81U;
	int32_t t77 = -209;

	t77 = ((x5085<<x5086)==(x5087%x5088));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x5157 = 529556261LLU;
	uint8_t x5158 = 12U;
	int8_t x5159 = -1;
	volatile int8_t x5160 = INT8_MIN;
	volatile int32_t t78 = -1950961;

	t78 = ((x5157<<x5158)==(x5159%x5160));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x5222 = 6;
	int16_t x5223 = 15870;
	int32_t x5224 = INT32_MIN;
	volatile int32_t t79 = 12533640;

	t79 = ((x5221<<x5222)==(x5223%x5224));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x5369 = 952827U;
	static volatile int8_t x5372 = 3;
	int32_t t80 = -2;

	t80 = ((x5369<<x5370)==(x5371%x5372));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x5562 = 4U;
	static int64_t x5563 = -87831382002121222LL;
	uint64_t x5564 = UINT64_MAX;
	int32_t t81 = -6162211;

	t81 = ((x5561<<x5562)==(x5563%x5564));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x5609 = 111U;
	uint8_t x5610 = 11U;
	int16_t x5611 = -1;

	t82 = ((x5609<<x5610)==(x5611%x5612));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x5629 = 681679411U;
	int16_t x5630 = 0;
	int32_t t83 = 11692;

	t83 = ((x5629<<x5630)==(x5631%x5632));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x5649 = UINT64_MAX;
	uint16_t x5650 = 58U;
	uint16_t x5651 = 2327U;
	int64_t x5652 = 1315LL;
	int32_t t84 = 688;

	t84 = ((x5649<<x5650)==(x5651%x5652));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x5801 = 17208LLU;
	uint8_t x5802 = 5U;
	int16_t x5803 = 1;
	int16_t x5804 = INT16_MIN;

	t85 = ((x5801<<x5802)==(x5803%x5804));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x6189 = UINT16_MAX;
	uint16_t x6190 = 1U;
	int64_t x6191 = -965207163111LL;
	int64_t x6192 = 161270857027LL;
	volatile int32_t t86 = 950923271;

	t86 = ((x6189<<x6190)==(x6191%x6192));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x6317 = UINT16_MAX;
	uint16_t x6318 = 3U;
	static uint32_t x6319 = 6247U;
	int32_t x6320 = -1;
	int32_t t87 = -15311;

	t87 = ((x6317<<x6318)==(x6319%x6320));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x6426 = 1;
	static int32_t x6428 = INT32_MIN;
	volatile int32_t t88 = -186581;

	t88 = ((x6425<<x6426)==(x6427%x6428));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x6469 = 253847U;
	int16_t x6470 = 2;
	int32_t x6472 = -1;
	static int32_t t89 = -157888;

	t89 = ((x6469<<x6470)==(x6471%x6472));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x6502 = 24;
	volatile int32_t x6503 = INT32_MAX;
	volatile int32_t t90 = 426031964;

	t90 = ((x6501<<x6502)==(x6503%x6504));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x6597 = INT32_MAX;
	static uint8_t x6598 = 0U;
	uint8_t x6599 = UINT8_MAX;
	static int64_t x6600 = -1LL;
	int32_t t91 = -42490913;

	t91 = ((x6597<<x6598)==(x6599%x6600));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x6681 = 95U;
	uint8_t x6682 = 5U;
	volatile int32_t x6683 = 61896;
	static int8_t x6684 = -4;
	static volatile int32_t t92 = -33861709;

	t92 = ((x6681<<x6682)==(x6683%x6684));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x6685 = INT64_MAX;
	static volatile int8_t x6686 = 0;
	int16_t x6687 = INT16_MAX;
	volatile int16_t x6688 = INT16_MIN;

	t93 = ((x6685<<x6686)==(x6687%x6688));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x6749 = 12U;
	volatile uint8_t x6750 = 4U;
	int32_t x6751 = 4;
	int16_t x6752 = -4294;
	volatile int32_t t94 = -8779103;

	t94 = ((x6749<<x6750)==(x6751%x6752));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x6869 = 12U;
	volatile int8_t x6870 = 1;
	uint8_t x6871 = UINT8_MAX;
	int64_t x6872 = INT64_MIN;
	int32_t t95 = -758647;

	t95 = ((x6869<<x6870)==(x6871%x6872));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x6954 = 6U;
	volatile int32_t x6956 = INT32_MAX;

	t96 = ((x6953<<x6954)==(x6955%x6956));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x7065 = INT8_MAX;
	uint64_t x7066 = 6LLU;
	uint8_t x7067 = 20U;
	static uint16_t x7068 = 2U;
	volatile int32_t t97 = -137236;

	t97 = ((x7065<<x7066)==(x7067%x7068));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x7125 = 4655828U;
	uint8_t x7126 = 10U;
	volatile int8_t x7127 = -1;
	volatile int32_t t98 = 47;

	t98 = ((x7125<<x7126)==(x7127%x7128));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x7134 = 4;
	int32_t x7135 = INT32_MIN;
	volatile int64_t x7136 = INT64_MIN;
	volatile int32_t t99 = 4;

	t99 = ((x7133<<x7134)==(x7135%x7136));

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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x185 = UINT32_MAX;
uint8_t x186 = 45U;
static int8_t x187 = 0;
uint16_t x269 = UINT16_MAX;
int32_t t2 = 31290674;
uint32_t x390 = UINT32_MAX;
uint16_t x447 = 3U;
int32_t t4 = -2021718;
uint32_t x630 = UINT32_MAX;
uint8_t x686 = 21U;
static uint8_t x687 = 25U;
volatile int32_t t11 = -25328;
int8_t x933 = INT8_MAX;
int32_t t14 = 10858208;
int8_t x1102 = 0;
uint32_t x1103 = 3U;
int8_t x1104 = 1;
static volatile int32_t t15 = 1;
uint8_t x1142 = UINT8_MAX;
volatile int32_t t17 = -5736790;
static int64_t x1224 = 15LL;
int32_t x1321 = -1;
volatile int16_t x1324 = INT16_MIN;
uint32_t x1690 = 3452362U;
uint16_t x1710 = UINT16_MAX;
volatile int32_t t24 = 40180231;
volatile int32_t t26 = -511;
static int16_t x1818 = 983;
int8_t x1961 = 3;
volatile int32_t t29 = 33;
static volatile uint64_t x2246 = 6109462116519846LLU;
uint16_t x2248 = 93U;
volatile int32_t t31 = 2955881;
uint64_t x2269 = 1200LLU;
uint8_t x2506 = 6U;
static uint8_t x2711 = 22U;
uint8_t x2823 = 0U;
static int8_t x2824 = INT8_MAX;
int64_t x3136 = -1LL;
int8_t x3163 = 4;
uint32_t x3382 = 12U;
static uint16_t x3435 = 6U;
volatile int32_t t48 = 707;
int16_t x3526 = 1;
int32_t x3615 = 1;
static int32_t t52 = 0;
static uint8_t x3655 = 3U;
int32_t x3656 = -115;
int16_t x3713 = -2850;
uint64_t x3714 = 65260962548LLU;
int16_t x3716 = 6;
volatile int32_t t54 = 849;
volatile int32_t t55 = 20;
uint32_t x3866 = UINT32_MAX;
int16_t x3886 = 738;
volatile int64_t x4021 = -1LL;
static uint16_t x4023 = 10U;
int64_t x4106 = 0LL;
volatile int32_t t60 = 1;
static uint16_t x4176 = UINT16_MAX;
volatile int32_t t63 = 1059;
volatile int32_t t64 = 570742742;
volatile uint8_t x4335 = 5U;
int8_t x4336 = -1;
uint8_t x4350 = 52U;
volatile uint8_t x4531 = 0U;
int32_t x4532 = -1;
volatile int32_t t69 = -2003;
uint16_t x4610 = UINT16_MAX;
int16_t x4632 = 2697;
int16_t x4704 = -1;
volatile int32_t t72 = 684;
int16_t x4741 = 392;
uint64_t x4742 = 11LLU;
static volatile int32_t t74 = -4;
volatile int8_t x4995 = 51;
static int8_t x5258 = 17;
static int16_t x5493 = INT16_MAX;
uint8_t x5556 = 1U;
uint16_t x5579 = 0U;
int32_t x5636 = -61837;
int16_t x5723 = 0;
int32_t t85 = -221;
uint8_t x5758 = 1U;
uint8_t x5833 = 24U;
uint64_t x5841 = 288378358377626LLU;
volatile int32_t t90 = 15219865;
volatile uint16_t x5907 = 14U;
volatile int32_t t91 = -1002150;
int64_t x5972 = INT64_MIN;
int8_t x6115 = 1;
uint64_t x6119 = 9LLU;
volatile int32_t t94 = 135176048;
int32_t x6347 = 2;
static int16_t x6402 = INT16_MAX;
volatile int32_t x6494 = INT32_MAX;
int16_t x6496 = INT16_MIN;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	uint64_t x2 = 16673116LLU;
	uint16_t x3 = 1U;
	static uint32_t x4 = 20163769U;
	int32_t t0 = -466388952;

	t0 = (x1<((x2<<x3)==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x188 = 1078U;
	static int32_t t1 = -121;

	t1 = (x185<((x186<<x187)==x188));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x270 = 22U;
	uint8_t x271 = 21U;
	uint32_t x272 = 2U;

	t2 = (x269<((x270<<x271)==x272));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x389 = INT16_MIN;
	uint8_t x391 = 16U;
	int64_t x392 = INT64_MIN;
	static volatile int32_t t3 = -8;

	t3 = (x389<((x390<<x391)==x392));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x445 = INT32_MIN;
	volatile uint8_t x446 = 13U;
	int16_t x448 = INT16_MAX;

	t4 = (x445<((x446<<x447)==x448));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x513 = -1;
	volatile uint64_t x514 = 121648639LLU;
	int32_t x515 = 1;
	uint32_t x516 = 6460803U;
	int32_t t5 = -3185;

	t5 = (x513<((x514<<x515)==x516));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x557 = INT16_MAX;
	uint64_t x558 = 4662139LLU;
	volatile uint8_t x559 = 0U;
	uint8_t x560 = 2U;
	static volatile int32_t t6 = -2;

	t6 = (x557<((x558<<x559)==x560));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x617 = INT32_MIN;
	volatile uint64_t x618 = UINT64_MAX;
	static int8_t x619 = 1;
	volatile int16_t x620 = INT16_MIN;
	volatile int32_t t7 = -71;

	t7 = (x617<((x618<<x619)==x620));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x629 = UINT8_MAX;
	uint8_t x631 = 0U;
	uint8_t x632 = 3U;
	int32_t t8 = -906;

	t8 = (x629<((x630<<x631)==x632));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x637 = INT16_MIN;
	int8_t x638 = 59;
	int16_t x639 = 0;
	static uint32_t x640 = UINT32_MAX;
	static volatile int32_t t9 = -248;

	t9 = (x637<((x638<<x639)==x640));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x677 = 2;
	uint64_t x678 = 5LLU;
	uint64_t x679 = 0LLU;
	volatile uint16_t x680 = 1U;
	volatile int32_t t10 = 1;

	t10 = (x677<((x678<<x679)==x680));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x685 = 1810LLU;
	int64_t x688 = 202720LL;

	t11 = (x685<((x686<<x687)==x688));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x921 = UINT16_MAX;
	uint32_t x922 = 6U;
	static uint8_t x923 = 30U;
	uint32_t x924 = 1148958U;
	volatile int32_t t12 = -34383;

	t12 = (x921<((x922<<x923)==x924));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x934 = UINT32_MAX;
	uint16_t x935 = 1U;
	uint16_t x936 = 2145U;
	volatile int32_t t13 = -3;

	t13 = (x933<((x934<<x935)==x936));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x1005 = UINT32_MAX;
	volatile uint64_t x1006 = 1241109405114188LLU;
	volatile uint8_t x1007 = 13U;
	int32_t x1008 = 1;

	t14 = (x1005<((x1006<<x1007)==x1008));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x1101 = INT32_MAX;

	t15 = (x1101<((x1102<<x1103)==x1104));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x1141 = INT16_MIN;
	int16_t x1143 = 17;
	int32_t x1144 = -1;
	static int32_t t16 = -2970;

	t16 = (x1141<((x1142<<x1143)==x1144));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x1173 = UINT64_MAX;
	volatile uint64_t x1174 = 324575824162913470LLU;
	volatile uint8_t x1175 = 22U;
	volatile int8_t x1176 = -1;

	t17 = (x1173<((x1174<<x1175)==x1176));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x1221 = UINT16_MAX;
	uint16_t x1222 = 0U;
	static uint8_t x1223 = 2U;
	volatile int32_t t18 = 9061882;

	t18 = (x1221<((x1222<<x1223)==x1224));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x1322 = 0;
	uint8_t x1323 = 1U;
	static volatile int32_t t19 = 1523811;

	t19 = (x1321<((x1322<<x1323)==x1324));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x1533 = UINT32_MAX;
	static volatile int8_t x1534 = 0;
	uint16_t x1535 = 4U;
	int16_t x1536 = -657;
	volatile int32_t t20 = 1;

	t20 = (x1533<((x1534<<x1535)==x1536));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1585 = -1;
	volatile uint64_t x1586 = 16162802663302LLU;
	uint64_t x1587 = 45LLU;
	int64_t x1588 = INT64_MIN;
	static int32_t t21 = -29;

	t21 = (x1585<((x1586<<x1587)==x1588));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x1637 = INT64_MAX;
	volatile uint64_t x1638 = 0LLU;
	static uint16_t x1639 = 0U;
	volatile int64_t x1640 = INT64_MAX;
	int32_t t22 = 9805551;

	t22 = (x1637<((x1638<<x1639)==x1640));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1689 = INT8_MIN;
	uint8_t x1691 = 9U;
	int32_t x1692 = 2;
	volatile int32_t t23 = 1;

	t23 = (x1689<((x1690<<x1691)==x1692));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x1709 = -49095076192LL;
	static uint8_t x1711 = 11U;
	static uint64_t x1712 = UINT64_MAX;

	t24 = (x1709<((x1710<<x1711)==x1712));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x1757 = INT64_MIN;
	uint8_t x1758 = UINT8_MAX;
	uint16_t x1759 = 1U;
	int32_t x1760 = INT32_MAX;
	volatile int32_t t25 = 0;

	t25 = (x1757<((x1758<<x1759)==x1760));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1813 = INT16_MIN;
	uint8_t x1814 = UINT8_MAX;
	uint8_t x1815 = 0U;
	uint16_t x1816 = 6U;

	t26 = (x1813<((x1814<<x1815)==x1816));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x1817 = -1;
	int16_t x1819 = 0;
	uint16_t x1820 = UINT16_MAX;
	static volatile int32_t t27 = -132745123;

	t27 = (x1817<((x1818<<x1819)==x1820));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x1962 = 1U;
	int16_t x1963 = 1;
	int64_t x1964 = -1LL;
	volatile int32_t t28 = 0;

	t28 = (x1961<((x1962<<x1963)==x1964));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x1965 = INT8_MAX;
	uint8_t x1966 = UINT8_MAX;
	uint32_t x1967 = 20U;
	static int64_t x1968 = INT64_MIN;

	t29 = (x1965<((x1966<<x1967)==x1968));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x2061 = INT32_MAX;
	int8_t x2062 = 12;
	uint8_t x2063 = 6U;
	static uint16_t x2064 = UINT16_MAX;
	int32_t t30 = -6;

	t30 = (x2061<((x2062<<x2063)==x2064));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x2245 = 61U;
	uint8_t x2247 = 4U;

	t31 = (x2245<((x2246<<x2247)==x2248));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x2270 = 1U;
	uint8_t x2271 = 2U;
	static volatile int32_t x2272 = -1;
	volatile int32_t t32 = -202861;

	t32 = (x2269<((x2270<<x2271)==x2272));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x2321 = 40460532LLU;
	volatile int64_t x2322 = INT64_MAX;
	int64_t x2323 = 0LL;
	int32_t x2324 = -1;
	volatile int32_t t33 = -1579;

	t33 = (x2321<((x2322<<x2323)==x2324));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x2401 = -1LL;
	static uint8_t x2402 = 19U;
	uint8_t x2403 = 13U;
	uint8_t x2404 = 3U;
	static int32_t t34 = 3905771;

	t34 = (x2401<((x2402<<x2403)==x2404));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x2481 = 3U;
	static volatile uint8_t x2482 = 61U;
	int64_t x2483 = 1LL;
	int16_t x2484 = INT16_MIN;
	volatile int32_t t35 = 303331490;

	t35 = (x2481<((x2482<<x2483)==x2484));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x2493 = UINT16_MAX;
	uint16_t x2494 = 92U;
	uint32_t x2495 = 1U;
	volatile int8_t x2496 = -3;
	int32_t t36 = -120591480;

	t36 = (x2493<((x2494<<x2495)==x2496));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x2505 = -2;
	int16_t x2507 = 2;
	static int16_t x2508 = 2;
	int32_t t37 = 75;

	t37 = (x2505<((x2506<<x2507)==x2508));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x2629 = INT8_MIN;
	static int8_t x2630 = 15;
	uint8_t x2631 = 18U;
	int16_t x2632 = 260;
	int32_t t38 = 0;

	t38 = (x2629<((x2630<<x2631)==x2632));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x2709 = 742878838LLU;
	uint64_t x2710 = UINT64_MAX;
	int16_t x2712 = -1;
	volatile int32_t t39 = 7874807;

	t39 = (x2709<((x2710<<x2711)==x2712));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x2821 = -1LL;
	int64_t x2822 = 36219160361273108LL;
	static volatile int32_t t40 = -186562113;

	t40 = (x2821<((x2822<<x2823)==x2824));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int32_t x2961 = -1;
	uint64_t x2962 = UINT64_MAX;
	volatile uint16_t x2963 = 0U;
	volatile int16_t x2964 = 3;
	volatile int32_t t41 = 117696106;

	t41 = (x2961<((x2962<<x2963)==x2964));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x2965 = 0;
	uint8_t x2966 = UINT8_MAX;
	volatile uint8_t x2967 = 2U;
	volatile uint64_t x2968 = 758LLU;
	static volatile int32_t t42 = 291;

	t42 = (x2965<((x2966<<x2967)==x2968));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x3133 = -1;
	uint16_t x3134 = 1U;
	int8_t x3135 = 18;
	int32_t t43 = 53;

	t43 = (x3133<((x3134<<x3135)==x3136));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x3161 = INT32_MIN;
	volatile uint64_t x3162 = UINT64_MAX;
	int64_t x3164 = INT64_MIN;
	volatile int32_t t44 = 1;

	t44 = (x3161<((x3162<<x3163)==x3164));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x3241 = INT64_MIN;
	uint64_t x3242 = UINT64_MAX;
	uint8_t x3243 = 3U;
	int32_t x3244 = INT32_MIN;
	int32_t t45 = 128408342;

	t45 = (x3241<((x3242<<x3243)==x3244));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x3381 = -1;
	uint16_t x3383 = 21U;
	int64_t x3384 = 11126084LL;
	int32_t t46 = 5;

	t46 = (x3381<((x3382<<x3383)==x3384));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x3413 = INT8_MIN;
	volatile int32_t x3414 = 7556125;
	volatile uint32_t x3415 = 5U;
	volatile uint16_t x3416 = UINT16_MAX;
	volatile int32_t t47 = 0;

	t47 = (x3413<((x3414<<x3415)==x3416));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x3433 = INT64_MIN;
	uint8_t x3434 = 22U;
	uint64_t x3436 = 6502LLU;

	t48 = (x3433<((x3434<<x3435)==x3436));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x3481 = INT32_MIN;
	static volatile int8_t x3482 = 14;
	int16_t x3483 = 0;
	int16_t x3484 = -15647;
	volatile int32_t t49 = 1879639;

	t49 = (x3481<((x3482<<x3483)==x3484));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x3525 = 207LL;
	volatile int8_t x3527 = 27;
	volatile int64_t x3528 = -1LL;
	volatile int32_t t50 = 25688534;

	t50 = (x3525<((x3526<<x3527)==x3528));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x3549 = INT64_MAX;
	uint8_t x3550 = 14U;
	int16_t x3551 = 2;
	volatile int16_t x3552 = INT16_MAX;
	int32_t t51 = -1578439;

	t51 = (x3549<((x3550<<x3551)==x3552));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x3613 = 1482863U;
	uint32_t x3614 = 389396U;
	int16_t x3616 = INT16_MIN;

	t52 = (x3613<((x3614<<x3615)==x3616));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x3653 = -1LL;
	uint8_t x3654 = UINT8_MAX;
	static int32_t t53 = 394553;

	t53 = (x3653<((x3654<<x3655)==x3656));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x3715 = 1;

	t54 = (x3713<((x3714<<x3715)==x3716));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x3733 = 0U;
	static volatile uint8_t x3734 = UINT8_MAX;
	static int8_t x3735 = 1;
	int32_t x3736 = INT32_MIN;

	t55 = (x3733<((x3734<<x3735)==x3736));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x3865 = 45U;
	int32_t x3867 = 3;
	uint16_t x3868 = 1931U;
	volatile int32_t t56 = 99593;

	t56 = (x3865<((x3866<<x3867)==x3868));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x3885 = -101629093737271LL;
	uint8_t x3887 = 5U;
	uint32_t x3888 = 33499U;
	static int32_t t57 = -1;

	t57 = (x3885<((x3886<<x3887)==x3888));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x3901 = -432223530;
	uint16_t x3902 = 82U;
	volatile uint8_t x3903 = 7U;
	int64_t x3904 = -8149913960LL;
	volatile int32_t t58 = 5;

	t58 = (x3901<((x3902<<x3903)==x3904));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x4022 = UINT8_MAX;
	volatile uint64_t x4024 = 715814622563828446LLU;
	static volatile int32_t t59 = -49033;

	t59 = (x4021<((x4022<<x4023)==x4024));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x4105 = -21698;
	static volatile int8_t x4107 = 0;
	int32_t x4108 = INT32_MIN;

	t60 = (x4105<((x4106<<x4107)==x4108));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x4173 = INT8_MAX;
	uint64_t x4174 = UINT64_MAX;
	int8_t x4175 = 12;
	volatile int32_t t61 = -20;

	t61 = (x4173<((x4174<<x4175)==x4176));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x4233 = UINT8_MAX;
	uint16_t x4234 = 1946U;
	uint8_t x4235 = 13U;
	static int32_t x4236 = INT32_MAX;
	static volatile int32_t t62 = 1;

	t62 = (x4233<((x4234<<x4235)==x4236));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x4277 = INT16_MIN;
	int16_t x4278 = INT16_MAX;
	static uint16_t x4279 = 2U;
	uint64_t x4280 = 13471100LLU;

	t63 = (x4277<((x4278<<x4279)==x4280));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x4313 = -1LL;
	volatile uint8_t x4314 = 1U;
	static int64_t x4315 = 7LL;
	uint32_t x4316 = UINT32_MAX;

	t64 = (x4313<((x4314<<x4315)==x4316));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x4333 = 1464U;
	static uint32_t x4334 = 57U;
	int32_t t65 = 49412;

	t65 = (x4333<((x4334<<x4335)==x4336));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x4349 = INT8_MAX;
	static uint32_t x4351 = 11U;
	int32_t x4352 = -116;
	int32_t t66 = -6326;

	t66 = (x4349<((x4350<<x4351)==x4352));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x4485 = INT64_MAX;
	uint16_t x4486 = 20961U;
	static volatile int8_t x4487 = 0;
	int32_t x4488 = INT32_MAX;
	volatile int32_t t67 = -18;

	t67 = (x4485<((x4486<<x4487)==x4488));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x4529 = 1446;
	static int16_t x4530 = INT16_MAX;
	volatile int32_t t68 = -254253;

	t68 = (x4529<((x4530<<x4531)==x4532));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x4585 = -6;
	int64_t x4586 = 130392469169511LL;
	int16_t x4587 = 0;
	int64_t x4588 = -1LL;

	t69 = (x4585<((x4586<<x4587)==x4588));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x4609 = -1LL;
	int8_t x4611 = 0;
	int8_t x4612 = -1;
	int32_t t70 = 309;

	t70 = (x4609<((x4610<<x4611)==x4612));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x4629 = 3652;
	static uint64_t x4630 = 243LLU;
	uint8_t x4631 = 14U;
	volatile int32_t t71 = 85;

	t71 = (x4629<((x4630<<x4631)==x4632));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x4701 = INT16_MIN;
	uint64_t x4702 = 772978008LLU;
	uint16_t x4703 = 6U;

	t72 = (x4701<((x4702<<x4703)==x4704));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x4743 = 5U;
	int8_t x4744 = INT8_MAX;
	volatile int32_t t73 = 534450334;

	t73 = (x4741<((x4742<<x4743)==x4744));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x4853 = INT32_MIN;
	uint8_t x4854 = 6U;
	int8_t x4855 = 3;
	int16_t x4856 = INT16_MIN;

	t74 = (x4853<((x4854<<x4855)==x4856));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x4993 = UINT32_MAX;
	uint64_t x4994 = 80LLU;
	int32_t x4996 = INT32_MAX;
	int32_t t75 = -19696692;

	t75 = (x4993<((x4994<<x4995)==x4996));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x5065 = 11U;
	int8_t x5066 = 23;
	volatile uint16_t x5067 = 2U;
	uint64_t x5068 = 41139453384704LLU;
	volatile int32_t t76 = -776296093;

	t76 = (x5065<((x5066<<x5067)==x5068));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x5257 = INT16_MIN;
	static uint8_t x5259 = 23U;
	uint16_t x5260 = 61U;
	volatile int32_t t77 = 13043;

	t77 = (x5257<((x5258<<x5259)==x5260));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x5361 = 19;
	uint32_t x5362 = 25U;
	uint8_t x5363 = 5U;
	int8_t x5364 = INT8_MIN;
	volatile int32_t t78 = 166433591;

	t78 = (x5361<((x5362<<x5363)==x5364));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x5445 = -1;
	uint16_t x5446 = 24U;
	int8_t x5447 = 5;
	int8_t x5448 = 0;
	volatile int32_t t79 = 1891178;

	t79 = (x5445<((x5446<<x5447)==x5448));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x5494 = UINT64_MAX;
	volatile uint8_t x5495 = 0U;
	uint16_t x5496 = UINT16_MAX;
	int32_t t80 = 4;

	t80 = (x5493<((x5494<<x5495)==x5496));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x5553 = -3153815;
	int8_t x5554 = 1;
	uint8_t x5555 = 22U;
	int32_t t81 = -1955412;

	t81 = (x5553<((x5554<<x5555)==x5556));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x5577 = 18U;
	static uint16_t x5578 = 16287U;
	volatile uint32_t x5580 = 19U;
	volatile int32_t t82 = -48;

	t82 = (x5577<((x5578<<x5579)==x5580));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x5633 = 0U;
	uint32_t x5634 = 4998U;
	static uint16_t x5635 = 2U;
	static volatile int32_t t83 = -76;

	t83 = (x5633<((x5634<<x5635)==x5636));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x5721 = 30;
	int16_t x5722 = 382;
	uint32_t x5724 = 340652189U;
	int32_t t84 = -5746;

	t84 = (x5721<((x5722<<x5723)==x5724));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x5745 = INT64_MIN;
	uint8_t x5746 = 114U;
	int16_t x5747 = 1;
	int16_t x5748 = INT16_MIN;

	t85 = (x5745<((x5746<<x5747)==x5748));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x5757 = 29LLU;
	int16_t x5759 = 4;
	uint8_t x5760 = 2U;
	volatile int32_t t86 = 176892006;

	t86 = (x5757<((x5758<<x5759)==x5760));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x5789 = -7412416927884LL;
	volatile uint8_t x5790 = 5U;
	int8_t x5791 = 3;
	uint32_t x5792 = 68907238U;
	int32_t t87 = -324570697;

	t87 = (x5789<((x5790<<x5791)==x5792));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x5834 = 44U;
	static uint8_t x5835 = 0U;
	int8_t x5836 = INT8_MIN;
	int32_t t88 = -15314;

	t88 = (x5833<((x5834<<x5835)==x5836));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x5842 = 253076966527LLU;
	int32_t x5843 = 10;
	uint64_t x5844 = 132LLU;
	static int32_t t89 = 2;

	t89 = (x5841<((x5842<<x5843)==x5844));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x5889 = INT32_MAX;
	uint8_t x5890 = UINT8_MAX;
	int8_t x5891 = 0;
	uint64_t x5892 = 1182364616223145LLU;

	t90 = (x5889<((x5890<<x5891)==x5892));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x5905 = INT64_MIN;
	uint32_t x5906 = 1U;
	volatile int32_t x5908 = -1;

	t91 = (x5905<((x5906<<x5907)==x5908));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x5969 = 115U;
	int8_t x5970 = 14;
	uint8_t x5971 = 5U;
	static volatile int32_t t92 = 101558;

	t92 = (x5969<((x5970<<x5971)==x5972));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x6113 = 6291;
	uint16_t x6114 = UINT16_MAX;
	uint32_t x6116 = UINT32_MAX;
	int32_t t93 = -5;

	t93 = (x6113<((x6114<<x6115)==x6116));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x6117 = -15;
	static uint16_t x6118 = UINT16_MAX;
	static int64_t x6120 = INT64_MIN;

	t94 = (x6117<((x6118<<x6119)==x6120));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x6205 = INT32_MAX;
	volatile uint32_t x6206 = 1008695852U;
	static int8_t x6207 = 16;
	int8_t x6208 = -5;
	volatile int32_t t95 = 60866563;

	t95 = (x6205<((x6206<<x6207)==x6208));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x6269 = -1;
	volatile uint64_t x6270 = 3478619414LLU;
	int8_t x6271 = 2;
	volatile int8_t x6272 = INT8_MIN;
	static volatile int32_t t96 = -409856666;

	t96 = (x6269<((x6270<<x6271)==x6272));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x6345 = UINT32_MAX;
	uint64_t x6346 = 1592532544LLU;
	int8_t x6348 = -1;
	int32_t t97 = 131882909;

	t97 = (x6345<((x6346<<x6347)==x6348));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x6401 = INT16_MAX;
	int8_t x6403 = 1;
	int32_t x6404 = -367393765;
	int32_t t98 = 11765429;

	t98 = (x6401<((x6402<<x6403)==x6404));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x6493 = UINT8_MAX;
	int8_t x6495 = 0;
	int32_t t99 = 234;

	t99 = (x6493<((x6494<<x6495)==x6496));

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


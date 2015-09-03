#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x10 = 1LL;
int16_t x11 = 1;
volatile int8_t x20 = INT8_MAX;
int8_t x190 = 1;
int64_t x192 = INT64_MAX;
uint64_t x201 = 796867LLU;
static uint16_t x210 = 21U;
int32_t x212 = -1;
uint16_t x422 = 13U;
int16_t x450 = 16;
int16_t x567 = 143;
static volatile uint64_t t9 = 49685137719LLU;
int16_t x605 = INT16_MAX;
static int16_t x608 = INT16_MIN;
int32_t t10 = 645732;
uint8_t x642 = 6U;
uint64_t x643 = 101178532258163829LLU;
int32_t x660 = -241;
static volatile uint64_t t12 = 55800191814478075LLU;
static int16_t x1088 = 14971;
uint8_t x1310 = 22U;
int8_t x1312 = INT8_MIN;
volatile int64_t x1571 = INT64_MIN;
int64_t x1659 = -31858LL;
volatile int16_t x1719 = -746;
uint32_t t22 = 5U;
volatile uint16_t x1825 = 458U;
int8_t x1827 = INT8_MIN;
uint8_t x1857 = UINT8_MAX;
int32_t t25 = 0;
static int64_t x1933 = 1072663481384404LL;
volatile uint16_t x1935 = UINT16_MAX;
volatile uint64_t x2005 = 0LLU;
int64_t x2008 = INT64_MIN;
int16_t x2181 = 0;
uint64_t x2184 = 0LLU;
uint8_t x2340 = UINT8_MAX;
uint8_t x2618 = 1U;
uint8_t x2726 = 6U;
int32_t x2922 = 0;
uint8_t x3005 = UINT8_MAX;
int32_t t40 = 92645;
int16_t x3192 = -2026;
volatile uint32_t t43 = 37180U;
uint16_t x3281 = 669U;
int64_t x3283 = -1LL;
uint32_t x3359 = 1164768U;
volatile uint32_t t48 = 252U;
uint16_t x3382 = 5U;
int32_t t49 = 1;
int16_t x3472 = -1;
uint16_t x3574 = 9U;
volatile int32_t t52 = -1;
static int16_t x3641 = 2048;
static uint16_t x3643 = 3U;
int16_t x3663 = INT16_MAX;
volatile uint64_t t55 = 458231LLU;
static int32_t t56 = -22;
static uint32_t x3721 = 1891703U;
int32_t x3789 = 47838;
uint64_t x3792 = 14118900617LLU;
int32_t t59 = 138823;
int8_t x3807 = INT8_MAX;
uint8_t x3810 = 2U;
static volatile uint32_t x3811 = 4129U;
static uint8_t x3922 = 23U;
int16_t x3924 = INT16_MAX;
uint8_t x3970 = 58U;
int32_t t67 = -1979549;
uint8_t x4297 = 1U;
volatile int32_t t68 = 504;
uint32_t x4321 = 13U;
static uint16_t x4386 = 3U;
int64_t x4387 = -1LL;
volatile int32_t t71 = 62624149;
uint16_t x4537 = 2879U;
uint8_t x4538 = 15U;
static volatile int32_t t72 = 589796;
static volatile int64_t x4659 = INT64_MIN;
int32_t t74 = -17308481;
volatile uint8_t x4794 = 4U;
uint8_t x4900 = 12U;
volatile int32_t t77 = 1725525;
int32_t x4932 = 4023040;
int8_t x4999 = INT8_MIN;
int8_t x5012 = -16;
int16_t x5151 = -19;
uint64_t x5184 = 12411050540670743LLU;
int16_t x5325 = 0;
uint8_t x5326 = 23U;
volatile uint8_t x5330 = 11U;
volatile uint8_t x5383 = UINT8_MAX;
volatile int32_t t86 = 1;
int16_t x5391 = -41;
uint32_t x5425 = 532742U;
uint8_t x5426 = 3U;
static int8_t x5601 = 3;
static int64_t x5643 = -1074650LL;
int64_t x5752 = -1LL;
static int32_t t92 = -172132;
volatile uint64_t x5869 = 2589652LLU;
int32_t x5872 = INT32_MIN;
static volatile uint64_t t94 = 6445LLU;
int64_t x5992 = -1LL;
int32_t x6064 = 1669918;
int32_t t97 = -32865;
volatile int32_t t98 = 49;
uint16_t x6130 = 22U;
int8_t x6131 = -1;


void f0(void) {
	static uint16_t x5 = UINT16_MAX;
	static uint16_t x6 = 10U;
	uint8_t x7 = UINT8_MAX;
	volatile uint8_t x8 = 40U;
	int32_t t0 = -61;

	t0 = (x5<<(x6-(x7<=x8)));

	if (t0 != 67107840) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = 4346;
	volatile int8_t x12 = -11;
	static volatile int32_t t1 = 135213010;

	t1 = (x9<<(x10-(x11<=x12)));

	if (t1 != 8692) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x17 = UINT8_MAX;
	uint8_t x18 = 0U;
	uint16_t x19 = 241U;
	int32_t t2 = 6;

	t2 = (x17<<(x18-(x19<=x20)));

	if (t2 != 255) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x189 = 1056U;
	volatile int64_t x191 = -1LL;
	volatile int32_t t3 = -49974;

	t3 = (x189<<(x190-(x191<=x192)));

	if (t3 != 1056) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int8_t x202 = 1;
	int32_t x203 = -1;
	int8_t x204 = INT8_MIN;
	uint64_t t4 = 245318835862159338LLU;

	t4 = (x201<<(x202-(x203<=x204)));

	if (t4 != 1593734LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int16_t x209 = 189;
	int16_t x211 = 4448;
	static volatile int32_t t5 = 126;

	t5 = (x209<<(x210-(x211<=x212)));

	if (t5 != 396361728) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x421 = INT8_MAX;
	uint8_t x423 = 1U;
	int64_t x424 = 5926LL;
	int32_t t6 = -231834829;

	t6 = (x421<<(x422-(x423<=x424)));

	if (t6 != 520192) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x429 = UINT32_MAX;
	static int8_t x430 = 22;
	int16_t x431 = INT16_MIN;
	uint16_t x432 = UINT16_MAX;
	uint32_t t7 = 8803U;

	t7 = (x429<<(x430-(x431<=x432)));

	if (t7 != 4292870144U) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x449 = 286926207LLU;
	uint64_t x451 = UINT64_MAX;
	static int32_t x452 = -111600460;
	volatile uint64_t t8 = 58LLU;

	t8 = (x449<<(x450-(x451<=x452)));

	if (t8 != 18803995901952LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x565 = 114466905LLU;
	uint64_t x566 = 1LLU;
	uint8_t x568 = 4U;

	t9 = (x565<<(x566-(x567<=x568)));

	if (t9 != 228933810LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x606 = 0;
	int32_t x607 = 6;

	t10 = (x605<<(x606-(x607<=x608)));

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x641 = 12674U;
	int16_t x644 = -4779;
	int32_t t11 = 3531655;

	t11 = (x641<<(x642-(x643<=x644)));

	if (t11 != 405568) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint64_t x657 = 88242840314413620LLU;
	static int64_t x658 = 11LL;
	int64_t x659 = INT64_MIN;

	t12 = (x657<<(x658-(x659<=x660)));

	if (t12 != 16573692187121340416LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x985 = 230U;
	uint8_t x986 = 1U;
	uint16_t x987 = 15054U;
	static int16_t x988 = INT16_MIN;
	volatile int32_t t13 = 1;

	t13 = (x985<<(x986-(x987<=x988)));

	if (t13 != 460) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x1085 = UINT16_MAX;
	uint32_t x1086 = 7U;
	volatile int64_t x1087 = -997801369LL;
	static volatile int32_t t14 = 116511;

	t14 = (x1085<<(x1086-(x1087<=x1088)));

	if (t14 != 4194240) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x1173 = UINT32_MAX;
	int64_t x1174 = 9LL;
	static volatile int8_t x1175 = INT8_MIN;
	uint16_t x1176 = 120U;
	uint32_t t15 = 12U;

	t15 = (x1173<<(x1174-(x1175<=x1176)));

	if (t15 != 4294967040U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x1269 = 4U;
	uint8_t x1270 = 26U;
	int32_t x1271 = INT32_MAX;
	static uint16_t x1272 = 7U;
	int32_t t16 = -287514;

	t16 = (x1269<<(x1270-(x1271<=x1272)));

	if (t16 != 268435456) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x1309 = 7U;
	uint16_t x1311 = UINT16_MAX;
	static volatile int32_t t17 = 1;

	t17 = (x1309<<(x1310-(x1311<=x1312)));

	if (t17 != 29360128) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x1469 = 15912978LLU;
	static uint16_t x1470 = 26U;
	uint64_t x1471 = 978816608300280632LLU;
	static int16_t x1472 = 4;
	static uint64_t t18 = 50179320808120LLU;

	t18 = (x1469<<(x1470-(x1471<=x1472)));

	if (t18 != 1067901876436992LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x1545 = 16690146567LLU;
	int8_t x1546 = 55;
	uint16_t x1547 = 7U;
	int32_t x1548 = INT32_MAX;
	uint64_t t19 = 132542202052104LLU;

	t19 = (x1545<<(x1546-(x1547<=x1548)));

	if (t19 != 4737786807993761792LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x1569 = 2;
	uint32_t x1570 = 1U;
	uint8_t x1572 = UINT8_MAX;
	volatile int32_t t20 = -25;

	t20 = (x1569<<(x1570-(x1571<=x1572)));

	if (t20 != 2) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1657 = INT16_MAX;
	int16_t x1658 = 1;
	int8_t x1660 = -2;
	int32_t t21 = 50387969;

	t21 = (x1657<<(x1658-(x1659<=x1660)));

	if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x1717 = 10163U;
	volatile uint16_t x1718 = 0U;
	volatile uint64_t x1720 = 426618855725125LLU;

	t22 = (x1717<<(x1718-(x1719<=x1720)));

	if (t22 != 10163U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1729 = INT16_MAX;
	int8_t x1730 = 4;
	int8_t x1731 = 0;
	volatile int16_t x1732 = INT16_MAX;
	int32_t t23 = -3348858;

	t23 = (x1729<<(x1730-(x1731<=x1732)));

	if (t23 != 262136) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x1826 = 1U;
	int32_t x1828 = -1;
	volatile int32_t t24 = 3675;

	t24 = (x1825<<(x1826-(x1827<=x1828)));

	if (t24 != 458) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x1858 = 6U;
	int32_t x1859 = 22;
	static uint16_t x1860 = UINT16_MAX;

	t25 = (x1857<<(x1858-(x1859<=x1860)));

	if (t25 != 8160) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1934 = 6U;
	static int32_t x1936 = 125;
	volatile int64_t t26 = -108LL;

	t26 = (x1933<<(x1934-(x1935<=x1936)));

	if (t26 != 68650462808601856LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x2006 = 3U;
	uint8_t x2007 = UINT8_MAX;
	volatile uint64_t t27 = 2133028635105LLU;

	t27 = (x2005<<(x2006-(x2007<=x2008)));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x2037 = 0;
	static int8_t x2038 = 15;
	static int64_t x2039 = INT64_MIN;
	static volatile int16_t x2040 = INT16_MAX;
	static int32_t t28 = -23310;

	t28 = (x2037<<(x2038-(x2039<=x2040)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x2145 = 91680U;
	uint8_t x2146 = 5U;
	int64_t x2147 = INT64_MIN;
	uint64_t x2148 = 2429021LLU;
	volatile uint32_t t29 = 121068U;

	t29 = (x2145<<(x2146-(x2147<=x2148)));

	if (t29 != 2933760U) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x2182 = 23U;
	uint16_t x2183 = 1689U;
	volatile int32_t t30 = 940608;

	t30 = (x2181<<(x2182-(x2183<=x2184)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x2229 = INT32_MAX;
	volatile int8_t x2230 = 0;
	int64_t x2231 = 264200829620167LL;
	static uint32_t x2232 = 3944443U;
	volatile int32_t t31 = INT32_MAX;

	t31 = (x2229<<(x2230-(x2231<=x2232)));

	if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x2337 = 0U;
	uint32_t x2338 = 6U;
	static int64_t x2339 = INT64_MIN;
	int32_t t32 = -11714754;

	t32 = (x2337<<(x2338-(x2339<=x2340)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x2493 = 3;
	uint16_t x2494 = 1U;
	int8_t x2495 = 2;
	uint64_t x2496 = UINT64_MAX;
	volatile int32_t t33 = -215;

	t33 = (x2493<<(x2494-(x2495<=x2496)));

	if (t33 != 3) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x2593 = UINT32_MAX;
	uint8_t x2594 = 25U;
	int8_t x2595 = -1;
	int64_t x2596 = INT64_MIN;
	uint32_t t34 = 3736610U;

	t34 = (x2593<<(x2594-(x2595<=x2596)));

	if (t34 != 4261412864U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x2617 = 2270475344117LL;
	static uint8_t x2619 = 12U;
	int16_t x2620 = INT16_MIN;
	int64_t t35 = 46255LL;

	t35 = (x2617<<(x2618-(x2619<=x2620)));

	if (t35 != 4540950688234LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x2725 = UINT8_MAX;
	int8_t x2727 = INT8_MIN;
	int16_t x2728 = INT16_MIN;
	int32_t t36 = -15324;

	t36 = (x2725<<(x2726-(x2727<=x2728)));

	if (t36 != 16320) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x2921 = 15U;
	volatile uint8_t x2923 = 2U;
	volatile int8_t x2924 = -1;
	int32_t t37 = 6;

	t37 = (x2921<<(x2922-(x2923<=x2924)));

	if (t37 != 15) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x3006 = 5U;
	static int32_t x3007 = INT32_MIN;
	int64_t x3008 = 55248902729LL;
	static volatile int32_t t38 = 656787;

	t38 = (x3005<<(x3006-(x3007<=x3008)));

	if (t38 != 4080) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x3033 = INT32_MAX;
	int8_t x3034 = 1;
	static volatile int8_t x3035 = -1;
	uint16_t x3036 = 972U;
	int32_t t39 = INT32_MAX;

	t39 = (x3033<<(x3034-(x3035<=x3036)));

	if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x3129 = 13200;
	static int8_t x3130 = 0;
	int32_t x3131 = INT32_MAX;
	int32_t x3132 = 125;

	t40 = (x3129<<(x3130-(x3131<=x3132)));

	if (t40 != 13200) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x3149 = 253;
	uint32_t x3150 = 16U;
	int16_t x3151 = INT16_MIN;
	uint16_t x3152 = UINT16_MAX;
	volatile int32_t t41 = -366;

	t41 = (x3149<<(x3150-(x3151<=x3152)));

	if (t41 != 8290304) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x3181 = INT32_MAX;
	int32_t x3182 = 0;
	int64_t x3183 = -1LL;
	int64_t x3184 = -28017591349334LL;
	volatile int32_t t42 = INT32_MAX;

	t42 = (x3181<<(x3182-(x3183<=x3184)));

	if (t42 != INT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x3189 = 838120U;
	static uint16_t x3190 = 25U;
	volatile int16_t x3191 = INT16_MIN;

	t43 = (x3189<<(x3190-(x3191<=x3192)));

	if (t43 != 3892314112U) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x3241 = 35U;
	uint8_t x3242 = 9U;
	int16_t x3243 = -1;
	int16_t x3244 = INT16_MAX;
	volatile int32_t t44 = -1062891;

	t44 = (x3241<<(x3242-(x3243<=x3244)));

	if (t44 != 8960) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x3265 = 5;
	uint8_t x3266 = 12U;
	int16_t x3267 = INT16_MIN;
	volatile uint16_t x3268 = UINT16_MAX;
	static volatile int32_t t45 = 361270895;

	t45 = (x3265<<(x3266-(x3267<=x3268)));

	if (t45 != 10240) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x3282 = 18U;
	uint8_t x3284 = 93U;
	volatile int32_t t46 = 20861087;

	t46 = (x3281<<(x3282-(x3283<=x3284)));

	if (t46 != 87687168) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x3289 = UINT8_MAX;
	uint8_t x3290 = 2U;
	volatile int64_t x3291 = -4192161418LL;
	static volatile int16_t x3292 = -1;
	static volatile int32_t t47 = -742043;

	t47 = (x3289<<(x3290-(x3291<=x3292)));

	if (t47 != 510) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x3357 = 48U;
	volatile uint8_t x3358 = 2U;
	int8_t x3360 = INT8_MAX;

	t48 = (x3357<<(x3358-(x3359<=x3360)));

	if (t48 != 192U) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x3381 = UINT16_MAX;
	volatile uint32_t x3383 = UINT32_MAX;
	uint32_t x3384 = UINT32_MAX;

	t49 = (x3381<<(x3382-(x3383<=x3384)));

	if (t49 != 1048560) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x3469 = UINT32_MAX;
	volatile uint16_t x3470 = 2U;
	uint32_t x3471 = 104U;
	volatile uint32_t t50 = 682116932U;

	t50 = (x3469<<(x3470-(x3471<=x3472)));

	if (t50 != 4294967294U) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x3573 = 3U;
	static int16_t x3575 = INT16_MIN;
	int16_t x3576 = -1;
	int32_t t51 = -13127429;

	t51 = (x3573<<(x3574-(x3575<=x3576)));

	if (t51 != 768) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x3577 = 22798U;
	static uint32_t x3578 = 0U;
	uint64_t x3579 = UINT64_MAX;
	volatile uint8_t x3580 = 5U;

	t52 = (x3577<<(x3578-(x3579<=x3580)));

	if (t52 != 22798) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x3642 = 6;
	int8_t x3644 = INT8_MAX;
	volatile int32_t t53 = 229;

	t53 = (x3641<<(x3642-(x3643<=x3644)));

	if (t53 != 65536) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x3661 = 6890796U;
	volatile uint32_t x3662 = 1U;
	uint64_t x3664 = 8815053262428556LLU;
	uint32_t t54 = 2343U;

	t54 = (x3661<<(x3662-(x3663<=x3664)));

	if (t54 != 6890796U) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint64_t x3681 = UINT64_MAX;
	uint8_t x3682 = 14U;
	uint32_t x3683 = 593503U;
	int8_t x3684 = 1;

	t55 = (x3681<<(x3682-(x3683<=x3684)));

	if (t55 != 18446744073709535232LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x3693 = 12292;
	uint8_t x3694 = 8U;
	int32_t x3695 = INT32_MIN;
	uint16_t x3696 = 13U;

	t56 = (x3693<<(x3694-(x3695<=x3696)));

	if (t56 != 1573376) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x3722 = 14U;
	uint8_t x3723 = 16U;
	static uint32_t x3724 = 320U;
	uint32_t t57 = 116U;

	t57 = (x3721<<(x3722-(x3723<=x3724)));

	if (t57 != 2611929088U) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x3761 = UINT8_MAX;
	int64_t x3762 = 1LL;
	int8_t x3763 = INT8_MAX;
	uint64_t x3764 = 2028688LLU;
	static int32_t t58 = -1;

	t58 = (x3761<<(x3762-(x3763<=x3764)));

	if (t58 != 255) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x3790 = 2LLU;
	uint32_t x3791 = 530880U;

	t59 = (x3789<<(x3790-(x3791<=x3792)));

	if (t59 != 95676) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x3805 = 17U;
	uint8_t x3806 = 3U;
	int16_t x3808 = -1523;
	volatile int32_t t60 = 0;

	t60 = (x3805<<(x3806-(x3807<=x3808)));

	if (t60 != 136) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x3809 = INT8_MAX;
	int8_t x3812 = 3;
	volatile int32_t t61 = 299;

	t61 = (x3809<<(x3810-(x3811<=x3812)));

	if (t61 != 508) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x3921 = 41;
	int16_t x3923 = INT16_MIN;
	int32_t t62 = 3105;

	t62 = (x3921<<(x3922-(x3923<=x3924)));

	if (t62 != 171966464) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x3929 = 13017U;
	uint16_t x3930 = 3U;
	volatile uint32_t x3931 = 8702U;
	int16_t x3932 = -1;
	static int32_t t63 = 7541776;

	t63 = (x3929<<(x3930-(x3931<=x3932)));

	if (t63 != 52068) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x3969 = 88LLU;
	int32_t x3971 = 81;
	int32_t x3972 = -134910;
	volatile uint64_t t64 = 44338LLU;

	t64 = (x3969<<(x3970-(x3971<=x3972)));

	if (t64 != 6917529027641081856LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x4061 = 18;
	int16_t x4062 = 1;
	static volatile int64_t x4063 = INT64_MIN;
	int32_t x4064 = INT32_MIN;
	volatile int32_t t65 = 1;

	t65 = (x4061<<(x4062-(x4063<=x4064)));

	if (t65 != 18) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x4117 = 189301046194LL;
	volatile uint8_t x4118 = 0U;
	int64_t x4119 = INT64_MAX;
	static int16_t x4120 = -2081;
	volatile int64_t t66 = -14663780214LL;

	t66 = (x4117<<(x4118-(x4119<=x4120)));

	if (t66 != 189301046194LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x4205 = 9;
	static uint8_t x4206 = 2U;
	static int16_t x4207 = INT16_MIN;
	volatile int16_t x4208 = 1;

	t67 = (x4205<<(x4206-(x4207<=x4208)));

	if (t67 != 18) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x4298 = 1U;
	volatile uint16_t x4299 = 214U;
	int16_t x4300 = -832;

	t68 = (x4297<<(x4298-(x4299<=x4300)));

	if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x4322 = 29U;
	int8_t x4323 = 59;
	static volatile int64_t x4324 = INT64_MAX;
	uint32_t t69 = 1826U;

	t69 = (x4321<<(x4322-(x4323<=x4324)));

	if (t69 != 3489660928U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x4373 = 77827LLU;
	volatile uint16_t x4374 = 6U;
	static int64_t x4375 = INT64_MIN;
	static int8_t x4376 = 1;
	volatile uint64_t t70 = 64457306321698341LLU;

	t70 = (x4373<<(x4374-(x4375<=x4376)));

	if (t70 != 2490464LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x4385 = 0U;
	uint16_t x4388 = 186U;

	t71 = (x4385<<(x4386-(x4387<=x4388)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x4539 = 3U;
	int8_t x4540 = 1;

	t72 = (x4537<<(x4538-(x4539<=x4540)));

	if (t72 != 94339072) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x4569 = INT64_MAX;
	uint8_t x4570 = 1U;
	int32_t x4571 = INT32_MIN;
	int32_t x4572 = INT32_MIN;
	volatile int64_t t73 = INT64_MAX;

	t73 = (x4569<<(x4570-(x4571<=x4572)));

	if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x4657 = 15315;
	uint8_t x4658 = 6U;
	volatile uint16_t x4660 = 1852U;

	t74 = (x4657<<(x4658-(x4659<=x4660)));

	if (t74 != 490080) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x4793 = 97U;
	volatile int16_t x4795 = INT16_MIN;
	int8_t x4796 = -1;
	volatile int32_t t75 = 3;

	t75 = (x4793<<(x4794-(x4795<=x4796)));

	if (t75 != 776) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x4873 = 329198U;
	static int16_t x4874 = 0;
	uint32_t x4875 = UINT32_MAX;
	volatile uint16_t x4876 = 17U;
	uint32_t t76 = 10U;

	t76 = (x4873<<(x4874-(x4875<=x4876)));

	if (t76 != 329198U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x4897 = 1;
	static volatile uint8_t x4898 = 0U;
	static uint64_t x4899 = UINT64_MAX;

	t77 = (x4897<<(x4898-(x4899<=x4900)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x4929 = 1U;
	uint8_t x4930 = 3U;
	uint8_t x4931 = 1U;
	static int32_t t78 = -2377;

	t78 = (x4929<<(x4930-(x4931<=x4932)));

	if (t78 != 4) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x4997 = 58U;
	uint16_t x4998 = 0U;
	volatile int32_t x5000 = INT32_MIN;
	volatile int32_t t79 = 1644;

	t79 = (x4997<<(x4998-(x4999<=x5000)));

	if (t79 != 58) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x5009 = 0U;
	static volatile uint8_t x5010 = 5U;
	volatile int8_t x5011 = -1;
	uint32_t t80 = 1281418320U;

	t80 = (x5009<<(x5010-(x5011<=x5012)));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x5149 = INT16_MAX;
	uint64_t x5150 = 16LLU;
	static volatile int32_t x5152 = INT32_MAX;
	static volatile int32_t t81 = 507743699;

	t81 = (x5149<<(x5150-(x5151<=x5152)));

	if (t81 != 1073709056) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x5181 = 2372404160878LLU;
	uint16_t x5182 = 3U;
	static volatile int64_t x5183 = -21551LL;
	uint64_t t82 = 193LLU;

	t82 = (x5181<<(x5182-(x5183<=x5184)));

	if (t82 != 18979233287024LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x5221 = 272393208020LL;
	int8_t x5222 = 10;
	volatile int32_t x5223 = 59738;
	volatile uint8_t x5224 = 35U;
	int64_t t83 = -594LL;

	t83 = (x5221<<(x5222-(x5223<=x5224)));

	if (t83 != 278930645012480LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x5327 = INT32_MIN;
	int32_t x5328 = INT32_MIN;
	int32_t t84 = 60696662;

	t84 = (x5325<<(x5326-(x5327<=x5328)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x5329 = 1766255U;
	static volatile int64_t x5331 = INT64_MIN;
	uint16_t x5332 = 4568U;
	uint32_t t85 = 939U;

	t85 = (x5329<<(x5330-(x5331<=x5332)));

	if (t85 != 1808645120U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x5381 = 11982;
	volatile uint8_t x5382 = 7U;
	volatile uint64_t x5384 = 264837372140593499LLU;

	t86 = (x5381<<(x5382-(x5383<=x5384)));

	if (t86 != 766848) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x5389 = 1;
	uint8_t x5390 = 23U;
	int8_t x5392 = INT8_MIN;
	volatile int32_t t87 = 507001;

	t87 = (x5389<<(x5390-(x5391<=x5392)));

	if (t87 != 8388608) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x5427 = -7;
	int8_t x5428 = INT8_MIN;
	volatile uint32_t t88 = 1041118615U;

	t88 = (x5425<<(x5426-(x5427<=x5428)));

	if (t88 != 4261936U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x5602 = 17U;
	static volatile int64_t x5603 = -129LL;
	uint32_t x5604 = UINT32_MAX;
	volatile int32_t t89 = 8342551;

	t89 = (x5601<<(x5602-(x5603<=x5604)));

	if (t89 != 196608) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x5633 = 2828;
	uint8_t x5634 = 1U;
	int64_t x5635 = INT64_MAX;
	uint8_t x5636 = 1U;
	static volatile int32_t t90 = 216167;

	t90 = (x5633<<(x5634-(x5635<=x5636)));

	if (t90 != 5656) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x5641 = UINT16_MAX;
	uint8_t x5642 = 1U;
	static int32_t x5644 = INT32_MIN;
	int32_t t91 = -5310362;

	t91 = (x5641<<(x5642-(x5643<=x5644)));

	if (t91 != 131070) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x5749 = INT8_MAX;
	static uint16_t x5750 = 10U;
	int32_t x5751 = INT32_MIN;

	t92 = (x5749<<(x5750-(x5751<=x5752)));

	if (t92 != 65024) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x5757 = 0U;
	int8_t x5758 = 11;
	int32_t x5759 = INT32_MAX;
	volatile uint32_t x5760 = 198742U;
	volatile int32_t t93 = 20;

	t93 = (x5757<<(x5758-(x5759<=x5760)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x5870 = 20;
	static uint32_t x5871 = UINT32_MAX;

	t94 = (x5869<<(x5870-(x5871<=x5872)));

	if (t94 != 2715446935552LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x5893 = UINT8_MAX;
	static volatile uint16_t x5894 = 1U;
	int8_t x5895 = INT8_MIN;
	static uint16_t x5896 = UINT16_MAX;
	static volatile int32_t t95 = 2023130;

	t95 = (x5893<<(x5894-(x5895<=x5896)));

	if (t95 != 255) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x5989 = 32;
	static uint16_t x5990 = 3U;
	uint8_t x5991 = UINT8_MAX;
	volatile int32_t t96 = 968532663;

	t96 = (x5989<<(x5990-(x5991<=x5992)));

	if (t96 != 256) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x6061 = 2505491;
	static int8_t x6062 = 1;
	int8_t x6063 = 53;

	t97 = (x6061<<(x6062-(x6063<=x6064)));

	if (t97 != 2505491) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x6105 = INT16_MAX;
	uint16_t x6106 = 1U;
	volatile int16_t x6107 = 1;
	uint8_t x6108 = 0U;

	t98 = (x6105<<(x6106-(x6107<=x6108)));

	if (t98 != 65534) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x6129 = 234LL;
	uint16_t x6132 = UINT16_MAX;
	int64_t t99 = 308715LL;

	t99 = (x6129<<(x6130-(x6131<=x6132)));

	if (t99 != 490733568LL) { NG(); } else { ; }
	
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


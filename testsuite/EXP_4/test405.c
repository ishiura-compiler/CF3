#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int16_t x47 = 0;
volatile uint8_t x51 = 0U;
int8_t x81 = INT8_MIN;
static volatile int32_t t2 = -1;
uint64_t x221 = 16173476436156LLU;
uint8_t x224 = 2U;
int32_t t4 = 254399303;
static int16_t x542 = 5038;
int8_t x543 = INT8_MAX;
uint8_t x842 = 3U;
int64_t x903 = 0LL;
uint16_t x922 = 563U;
uint32_t x923 = 207404U;
static volatile int32_t x1181 = INT32_MIN;
int16_t x1236 = -1;
volatile int8_t x1380 = -13;
uint64_t x1559 = 0LLU;
int64_t x1590 = 16964937160LL;
volatile int64_t t19 = -56600196LL;
volatile int32_t x1595 = 0;
uint64_t x1662 = UINT64_MAX;
int64_t x1779 = INT64_MIN;
static int32_t x1829 = INT32_MIN;
int8_t x1887 = 3;
static int16_t x1888 = 0;
int16_t x2243 = -1;
uint64_t x2445 = 298LLU;
static int8_t x2448 = INT8_MAX;
static int16_t x2515 = -1;
uint32_t x2854 = UINT32_MAX;
int32_t x2855 = 2;
static volatile int32_t x2856 = 1;
int16_t x2868 = 0;
int16_t x2917 = 1821;
volatile int32_t t38 = 13020;
int8_t x2972 = -1;
int8_t x3006 = 3;
static int16_t x3007 = -1;
int64_t x3008 = -1LL;
volatile uint64_t t40 = 49958438843LLU;
uint64_t t43 = 1310805675128108755LLU;
volatile uint16_t x3556 = 13871U;
int32_t x3594 = 20;
uint64_t x3751 = UINT64_MAX;
int32_t t49 = -648418097;
uint64_t x3785 = UINT64_MAX;
int32_t x3788 = 0;
uint64_t t50 = 30397LLU;
static int64_t x3800 = -1LL;
int16_t x3842 = INT16_MAX;
int8_t x3969 = INT8_MIN;
int32_t x4151 = INT32_MIN;
int16_t x4565 = INT16_MAX;
volatile uint32_t x4566 = 4897U;
static int64_t x4567 = -1LL;
int8_t x4741 = INT8_MAX;
int64_t x4743 = INT64_MIN;
volatile int32_t t61 = 84064677;
volatile uint8_t x4795 = 4U;
int16_t x4796 = 3;
static volatile int32_t x5398 = 691;
static int64_t x5399 = -1LL;
int32_t x5537 = 184;
int8_t x5540 = 0;
volatile int64_t x5550 = 10067886244381012LL;
static volatile uint32_t x5552 = 17936680U;
volatile uint32_t x5690 = UINT32_MAX;
uint8_t x5692 = 0U;
volatile uint32_t x5792 = UINT32_MAX;
int8_t x5844 = 7;
uint32_t x6149 = UINT32_MAX;
int32_t x6150 = 829800429;
uint8_t x6247 = 2U;
uint8_t x6248 = 0U;
int16_t x6542 = 190;
int32_t t79 = 823541;
int16_t x6632 = 0;
int32_t x6661 = INT32_MIN;
uint16_t x6663 = 0U;
uint32_t x6693 = 196U;
static volatile uint64_t x6777 = UINT64_MAX;
int64_t x6808 = INT64_MAX;
int32_t t84 = 35785510;
int8_t x6994 = 15;
int32_t x6996 = -10;
static volatile int64_t t88 = 7641228LL;
static uint32_t x7120 = UINT32_MAX;
static uint64_t x7156 = UINT64_MAX;
int32_t t91 = 248684451;
volatile uint32_t x7214 = 27933467U;
uint16_t x7215 = 0U;
uint32_t t92 = 493134136U;
uint8_t x7352 = 0U;
int32_t t94 = 300;
int16_t x7427 = 0;
volatile uint64_t x7469 = 231418LLU;
int64_t x7470 = INT64_MAX;
static int16_t x7471 = -1;
static uint16_t x7494 = 164U;
uint8_t x7496 = UINT8_MAX;


void f0(void) {
	int8_t x45 = INT8_MIN;
	int64_t x46 = 90LL;
	int16_t x48 = INT16_MIN;
	int64_t t0 = -948871LL;

	t0 = (x45-(x46<<(x47*x48)));

	if (t0 != -218LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x49 = -1;
	uint16_t x50 = 1U;
	int32_t x52 = INT32_MIN;
	int32_t t1 = -464;

	t1 = (x49-(x50<<(x51*x52)));

	if (t1 != -2) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x82 = 26U;
	int8_t x83 = -1;
	int8_t x84 = -1;

	t2 = (x81-(x82<<(x83*x84)));

	if (t2 != -180) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x222 = 233217;
	uint8_t x223 = 5U;
	static uint64_t t3 = 15304161145LLU;

	t3 = (x221-(x222<<(x223*x224)));

	if (t3 != 16173237621948LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x241 = 849774;
	static uint16_t x242 = 138U;
	int8_t x243 = -1;
	volatile uint64_t x244 = UINT64_MAX;

	t4 = (x241-(x242<<(x243*x244)));

	if (t4 != 849498) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x541 = -1;
	int8_t x544 = 0;
	int32_t t5 = -12;

	t5 = (x541-(x542<<(x543*x544)));

	if (t5 != -5039) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x705 = 17253253;
	uint8_t x706 = UINT8_MAX;
	int64_t x707 = 0LL;
	int64_t x708 = -1LL;
	volatile int32_t t6 = -34872836;

	t6 = (x705-(x706<<(x707*x708)));

	if (t6 != 17252998) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x841 = INT64_MAX;
	int32_t x843 = -124;
	uint64_t x844 = 0LLU;
	static int64_t t7 = -46860LL;

	t7 = (x841-(x842<<(x843*x844)));

	if (t7 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x889 = 20835532378LLU;
	uint32_t x890 = UINT32_MAX;
	int8_t x891 = -23;
	int32_t x892 = -1;
	static volatile uint64_t t8 = 0LLU;

	t8 = (x889-(x890<<(x891*x892)));

	if (t8 != 16548953690LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x901 = INT8_MIN;
	uint16_t x902 = 142U;
	uint8_t x904 = UINT8_MAX;
	static volatile int32_t t9 = 1898;

	t9 = (x901-(x902<<(x903*x904)));

	if (t9 != -270) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int64_t x921 = INT64_MAX;
	static int32_t x924 = INT32_MIN;
	static volatile int64_t t10 = -66006463260255252LL;

	t10 = (x921-(x922<<(x923*x924)));

	if (t10 != 9223372036854775244LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x1165 = 9;
	uint64_t x1166 = 3488119142074LLU;
	int32_t x1167 = -1;
	int32_t x1168 = -1;
	volatile uint64_t t11 = 6270205520654LLU;

	t11 = (x1165-(x1166<<(x1167*x1168)));

	if (t11 != 18446737097471267477LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x1182 = UINT64_MAX;
	int16_t x1183 = INT16_MIN;
	static uint8_t x1184 = 0U;
	volatile uint64_t t12 = 18LLU;

	t12 = (x1181-(x1182<<(x1183*x1184)));

	if (t12 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x1233 = -1;
	int32_t x1234 = 1587689;
	int8_t x1235 = 0;
	int32_t t13 = 323;

	t13 = (x1233-(x1234<<(x1235*x1236)));

	if (t13 != -1587690) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x1257 = 57U;
	int16_t x1258 = 24;
	uint8_t x1259 = 0U;
	int64_t x1260 = INT64_MAX;
	int32_t t14 = 58211;

	t14 = (x1257-(x1258<<(x1259*x1260)));

	if (t14 != 33) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x1365 = INT16_MAX;
	static int16_t x1366 = 1;
	static int32_t x1367 = INT32_MIN;
	uint32_t x1368 = 46784U;
	int32_t t15 = 2;

	t15 = (x1365-(x1366<<(x1367*x1368)));

	if (t15 != 32766) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1377 = -1;
	uint16_t x1378 = UINT16_MAX;
	uint64_t x1379 = UINT64_MAX;
	volatile int32_t t16 = 17;

	t16 = (x1377-(x1378<<(x1379*x1380)));

	if (t16 != -536862721) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x1521 = 1869U;
	int16_t x1522 = 10638;
	static int8_t x1523 = -1;
	uint64_t x1524 = UINT64_MAX;
	volatile int32_t t17 = 692097855;

	t17 = (x1521-(x1522<<(x1523*x1524)));

	if (t17 != -19407) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x1557 = -1;
	uint8_t x1558 = 7U;
	uint16_t x1560 = 1U;
	static volatile int32_t t18 = 795766;

	t18 = (x1557-(x1558<<(x1559*x1560)));

	if (t18 != -8) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x1589 = UINT32_MAX;
	volatile uint64_t x1591 = 146334LLU;
	int64_t x1592 = INT64_MIN;

	t19 = (x1589-(x1590<<(x1591*x1592)));

	if (t19 != -12669969865LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x1593 = -875271;
	uint16_t x1594 = 1U;
	int8_t x1596 = 1;
	volatile int32_t t20 = 67632224;

	t20 = (x1593-(x1594<<(x1595*x1596)));

	if (t20 != -875272) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x1661 = -7163274155924512LL;
	static int32_t x1663 = -1;
	int8_t x1664 = 0;
	volatile uint64_t t21 = 1384915089681LLU;

	t21 = (x1661-(x1662<<(x1663*x1664)));

	if (t21 != 18439580799553627105LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x1777 = 15162998U;
	int64_t x1778 = INT64_MAX;
	uint64_t x1780 = 942192LLU;
	volatile int64_t t22 = 448LL;

	t22 = (x1777-(x1778<<(x1779*x1780)));

	if (t22 != -9223372036839612809LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x1830 = UINT32_MAX;
	static int16_t x1831 = 1;
	volatile int16_t x1832 = 14;
	uint32_t t23 = 11535852U;

	t23 = (x1829-(x1830<<(x1831*x1832)));

	if (t23 != 2147500032U) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x1857 = 1;
	static uint8_t x1858 = 6U;
	static int8_t x1859 = -9;
	int64_t x1860 = -1LL;
	int32_t t24 = 1;

	t24 = (x1857-(x1858<<(x1859*x1860)));

	if (t24 != -3071) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x1877 = 23U;
	int16_t x1878 = 9949;
	uint8_t x1879 = 0U;
	int8_t x1880 = INT8_MIN;
	volatile int32_t t25 = -95;

	t25 = (x1877-(x1878<<(x1879*x1880)));

	if (t25 != -9926) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int8_t x1885 = INT8_MAX;
	uint16_t x1886 = 159U;
	volatile int32_t t26 = -28561;

	t26 = (x1885-(x1886<<(x1887*x1888)));

	if (t26 != -32) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x1909 = 1317947U;
	static volatile int64_t x1910 = INT64_MAX;
	int16_t x1911 = INT16_MIN;
	volatile int8_t x1912 = 0;
	static volatile int64_t t27 = 136715399587629LL;

	t27 = (x1909-(x1910<<(x1911*x1912)));

	if (t27 != -9223372036853457860LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x2109 = -1;
	volatile int32_t x2110 = 21675100;
	int8_t x2111 = -1;
	int8_t x2112 = -1;
	volatile int32_t t28 = -23676690;

	t28 = (x2109-(x2110<<(x2111*x2112)));

	if (t28 != -43350201) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x2241 = INT8_MIN;
	uint64_t x2242 = UINT64_MAX;
	volatile int16_t x2244 = -1;
	uint64_t t29 = 129472947906042LLU;

	t29 = (x2241-(x2242<<(x2243*x2244)));

	if (t29 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x2446 = 424254888;
	uint8_t x2447 = 0U;
	static uint64_t t30 = 14828772LLU;

	t30 = (x2445-(x2446<<(x2447*x2448)));

	if (t30 != 18446744073285297026LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x2513 = -1;
	uint16_t x2514 = 10U;
	uint64_t x2516 = UINT64_MAX;
	int32_t t31 = -8054190;

	t31 = (x2513-(x2514<<(x2515*x2516)));

	if (t31 != -21) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x2545 = INT64_MAX;
	int16_t x2546 = INT16_MAX;
	static volatile int64_t x2547 = -1LL;
	int8_t x2548 = -10;
	static volatile int64_t t32 = -5215327594165LL;

	t32 = (x2545-(x2546<<(x2547*x2548)));

	if (t32 != 9223372036821222399LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x2601 = UINT64_MAX;
	volatile uint64_t x2602 = 3855537458526LLU;
	int16_t x2603 = 0;
	uint8_t x2604 = 5U;
	uint64_t t33 = 312743013096LLU;

	t33 = (x2601-(x2602<<(x2603*x2604)));

	if (t33 != 18446740218172093089LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x2633 = -1;
	static uint8_t x2634 = 1U;
	int32_t x2635 = -1;
	static int64_t x2636 = -6LL;
	volatile int32_t t34 = 520174289;

	t34 = (x2633-(x2634<<(x2635*x2636)));

	if (t34 != -65) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x2741 = INT32_MIN;
	volatile uint64_t x2742 = UINT64_MAX;
	uint64_t x2743 = 1232292938050LLU;
	static volatile uint32_t x2744 = 0U;
	volatile uint64_t t35 = 5158113LLU;

	t35 = (x2741-(x2742<<(x2743*x2744)));

	if (t35 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x2853 = INT32_MIN;
	uint32_t t36 = 17036469U;

	t36 = (x2853-(x2854<<(x2855*x2856)));

	if (t36 != 2147483652U) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x2865 = 103U;
	uint64_t x2866 = 702412LLU;
	volatile uint16_t x2867 = 3U;
	uint64_t t37 = 28554670334006544LLU;

	t37 = (x2865-(x2866<<(x2867*x2868)));

	if (t37 != 18446744073708849307LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x2918 = 7U;
	int8_t x2919 = 1;
	int16_t x2920 = 0;

	t38 = (x2917-(x2918<<(x2919*x2920)));

	if (t38 != 1814) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x2969 = 1U;
	uint64_t x2970 = UINT64_MAX;
	volatile uint32_t x2971 = UINT32_MAX;
	volatile uint64_t t39 = 68970LLU;

	t39 = (x2969-(x2970<<(x2971*x2972)));

	if (t39 != 3LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x3005 = UINT64_MAX;

	t40 = (x3005-(x3006<<(x3007*x3008)));

	if (t40 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x3025 = INT8_MAX;
	uint64_t x3026 = 1LLU;
	uint64_t x3027 = UINT64_MAX;
	int16_t x3028 = -1;
	uint64_t t41 = 33691152484573LLU;

	t41 = (x3025-(x3026<<(x3027*x3028)));

	if (t41 != 125LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x3289 = UINT64_MAX;
	uint32_t x3290 = UINT32_MAX;
	static int16_t x3291 = INT16_MAX;
	int8_t x3292 = 0;
	uint64_t t42 = 1109372709991LLU;

	t42 = (x3289-(x3290<<(x3291*x3292)));

	if (t42 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x3353 = 5U;
	static uint64_t x3354 = UINT64_MAX;
	int64_t x3355 = -1LL;
	int8_t x3356 = -1;

	t43 = (x3353-(x3354<<(x3355*x3356)));

	if (t43 != 7LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x3373 = -6750687;
	uint16_t x3374 = 12U;
	volatile uint64_t x3375 = UINT64_MAX;
	static uint64_t x3376 = UINT64_MAX;
	int32_t t44 = 134;

	t44 = (x3373-(x3374<<(x3375*x3376)));

	if (t44 != -6750711) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x3381 = INT8_MIN;
	int16_t x3382 = 17;
	static int8_t x3383 = INT8_MIN;
	int32_t x3384 = 0;
	static volatile int32_t t45 = 337;

	t45 = (x3381-(x3382<<(x3383*x3384)));

	if (t45 != -145) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x3429 = UINT32_MAX;
	uint64_t x3430 = 1130003587772LLU;
	int32_t x3431 = INT32_MIN;
	volatile int8_t x3432 = 0;
	volatile uint64_t t46 = 39670LLU;

	t46 = (x3429-(x3430<<(x3431*x3432)));

	if (t46 != 18446742948000931139LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x3553 = 413;
	uint16_t x3554 = 643U;
	int8_t x3555 = 0;
	int32_t t47 = 0;

	t47 = (x3553-(x3554<<(x3555*x3556)));

	if (t47 != -230) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x3593 = -1;
	int32_t x3595 = INT32_MIN;
	uint32_t x3596 = 694U;
	int32_t t48 = -321707;

	t48 = (x3593-(x3594<<(x3595*x3596)));

	if (t48 != -21) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x3749 = 11;
	int8_t x3750 = INT8_MAX;
	int64_t x3752 = -17LL;

	t49 = (x3749-(x3750<<(x3751*x3752)));

	if (t49 != -16646133) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x3786 = 5U;
	uint16_t x3787 = UINT16_MAX;

	t50 = (x3785-(x3786<<(x3787*x3788)));

	if (t50 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x3797 = -1;
	uint32_t x3798 = 6377U;
	int8_t x3799 = -1;
	uint32_t t51 = 27U;

	t51 = (x3797-(x3798<<(x3799*x3800)));

	if (t51 != 4294954541U) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint16_t x3829 = 410U;
	uint8_t x3830 = 0U;
	uint64_t x3831 = 25167765104898LLU;
	int64_t x3832 = INT64_MIN;
	static int32_t t52 = 114281;

	t52 = (x3829-(x3830<<(x3831*x3832)));

	if (t52 != 410) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x3841 = INT16_MIN;
	int16_t x3843 = -3;
	int8_t x3844 = -1;
	static volatile int32_t t53 = 33316;

	t53 = (x3841-(x3842<<(x3843*x3844)));

	if (t53 != -294904) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x3885 = INT8_MIN;
	uint16_t x3886 = 1U;
	uint32_t x3887 = 4U;
	int32_t x3888 = INT32_MIN;
	int32_t t54 = 6073;

	t54 = (x3885-(x3886<<(x3887*x3888)));

	if (t54 != -129) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x3970 = UINT32_MAX;
	static int32_t x3971 = INT32_MIN;
	static volatile uint32_t x3972 = 120981884U;
	volatile uint32_t t55 = 17527U;

	t55 = (x3969-(x3970<<(x3971*x3972)));

	if (t55 != 4294967169U) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x4149 = 3602U;
	int32_t x4150 = 0;
	int8_t x4152 = 0;
	static int32_t t56 = 365;

	t56 = (x4149-(x4150<<(x4151*x4152)));

	if (t56 != 3602) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x4357 = UINT32_MAX;
	uint8_t x4358 = UINT8_MAX;
	volatile uint16_t x4359 = 2U;
	volatile uint8_t x4360 = 11U;
	uint32_t t57 = 148749U;

	t57 = (x4357-(x4358<<(x4359*x4360)));

	if (t57 != 3225419775U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x4397 = INT16_MAX;
	uint16_t x4398 = UINT16_MAX;
	int32_t x4399 = INT32_MIN;
	static uint8_t x4400 = 0U;
	int32_t t58 = -3;

	t58 = (x4397-(x4398<<(x4399*x4400)));

	if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x4568 = -1;
	volatile uint32_t t59 = 5U;

	t59 = (x4565-(x4566<<(x4567*x4568)));

	if (t59 != 22973U) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x4609 = 481332682LLU;
	volatile int16_t x4610 = 67;
	volatile uint64_t x4611 = 1LLU;
	uint8_t x4612 = 3U;
	static volatile uint64_t t60 = 35554LLU;

	t60 = (x4609-(x4610<<(x4611*x4612)));

	if (t60 != 481332146LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x4742 = 1U;
	uint8_t x4744 = 0U;

	t61 = (x4741-(x4742<<(x4743*x4744)));

	if (t61 != 126) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x4793 = 3348U;
	uint64_t x4794 = 31018265762046873LLU;
	volatile uint64_t t62 = 3295455LLU;

	t62 = (x4793-(x4794<<(x4795*x4796)));

	if (t62 != 2076391954622872852LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x5169 = 61U;
	uint8_t x5170 = 2U;
	uint32_t x5171 = UINT32_MAX;
	volatile uint32_t x5172 = UINT32_MAX;
	int32_t t63 = -5453672;

	t63 = (x5169-(x5170<<(x5171*x5172)));

	if (t63 != 57) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x5265 = -808955032649LL;
	uint16_t x5266 = 15880U;
	int32_t x5267 = -1;
	int8_t x5268 = -1;
	static int64_t t64 = -39725146552341462LL;

	t64 = (x5265-(x5266<<(x5267*x5268)));

	if (t64 != -808955064409LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x5397 = INT16_MAX;
	volatile uint8_t x5400 = 0U;
	int32_t t65 = -536708;

	t65 = (x5397-(x5398<<(x5399*x5400)));

	if (t65 != 32076) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x5538 = 280229635679647LL;
	static int8_t x5539 = INT8_MAX;
	volatile int64_t t66 = -7742166336548614LL;

	t66 = (x5537-(x5538<<(x5539*x5540)));

	if (t66 != -280229635679463LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x5549 = INT32_MIN;
	int32_t x5551 = INT32_MIN;
	int64_t t67 = -1598870298LL;

	t67 = (x5549-(x5550<<(x5551*x5552)));

	if (t67 != -10067888391864660LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x5689 = INT32_MIN;
	uint16_t x5691 = 0U;
	volatile uint32_t t68 = 2432805U;

	t68 = (x5689-(x5690<<(x5691*x5692)));

	if (t68 != 2147483649U) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int64_t x5733 = 58LL;
	uint8_t x5734 = 12U;
	int64_t x5735 = 36609LL;
	int16_t x5736 = 0;
	int64_t t69 = -3161LL;

	t69 = (x5733-(x5734<<(x5735*x5736)));

	if (t69 != 46LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x5789 = 6;
	static volatile uint32_t x5790 = UINT32_MAX;
	int32_t x5791 = 0;
	static uint32_t t70 = 3520U;

	t70 = (x5789-(x5790<<(x5791*x5792)));

	if (t70 != 7U) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x5813 = 473U;
	volatile int16_t x5814 = INT16_MAX;
	uint32_t x5815 = UINT32_MAX;
	int32_t x5816 = -1;
	volatile int32_t t71 = 1437744;

	t71 = (x5813-(x5814<<(x5815*x5816)));

	if (t71 != -65061) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x5817 = INT8_MIN;
	int8_t x5818 = INT8_MAX;
	static int8_t x5819 = 0;
	uint16_t x5820 = 9658U;
	int32_t t72 = -12329;

	t72 = (x5817-(x5818<<(x5819*x5820)));

	if (t72 != -255) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x5841 = 0;
	static volatile uint16_t x5842 = UINT16_MAX;
	uint8_t x5843 = 0U;
	volatile int32_t t73 = -28852;

	t73 = (x5841-(x5842<<(x5843*x5844)));

	if (t73 != -65535) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x6151 = 0;
	int64_t x6152 = INT64_MAX;
	volatile uint32_t t74 = 38995285U;

	t74 = (x6149-(x6150<<(x6151*x6152)));

	if (t74 != 3465166866U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x6245 = INT32_MIN;
	int16_t x6246 = 0;
	volatile int32_t t75 = INT32_MIN;

	t75 = (x6245-(x6246<<(x6247*x6248)));

	if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x6393 = 2095U;
	volatile int16_t x6394 = 863;
	static uint8_t x6395 = 0U;
	int8_t x6396 = 1;
	int32_t t76 = -968;

	t76 = (x6393-(x6394<<(x6395*x6396)));

	if (t76 != 1232) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x6465 = 3U;
	uint64_t x6466 = UINT64_MAX;
	int16_t x6467 = -1;
	int64_t x6468 = -1LL;
	uint64_t t77 = 118652542362069LLU;

	t77 = (x6465-(x6466<<(x6467*x6468)));

	if (t77 != 5LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x6537 = UINT64_MAX;
	static uint16_t x6538 = UINT16_MAX;
	uint8_t x6539 = 0U;
	int16_t x6540 = -69;
	volatile uint64_t t78 = 16531612682581LLU;

	t78 = (x6537-(x6538<<(x6539*x6540)));

	if (t78 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x6541 = INT8_MIN;
	static uint32_t x6543 = UINT32_MAX;
	volatile int32_t x6544 = -9;

	t79 = (x6541-(x6542<<(x6543*x6544)));

	if (t79 != -97408) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x6629 = INT16_MIN;
	uint16_t x6630 = 58U;
	int16_t x6631 = -34;
	volatile int32_t t80 = -3877;

	t80 = (x6629-(x6630<<(x6631*x6632)));

	if (t80 != -32826) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x6662 = 414323356357LLU;
	uint32_t x6664 = 68754625U;
	uint64_t t81 = 183726694437080LLU;

	t81 = (x6661-(x6662<<(x6663*x6664)));

	if (t81 != 18446743657238711611LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x6694 = 2U;
	uint8_t x6695 = 0U;
	uint8_t x6696 = UINT8_MAX;
	uint32_t t82 = 2028U;

	t82 = (x6693-(x6694<<(x6695*x6696)));

	if (t82 != 194U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x6778 = 6486;
	int8_t x6779 = -18;
	int32_t x6780 = -1;
	volatile uint64_t t83 = 949834LLU;

	t83 = (x6777-(x6778<<(x6779*x6780)));

	if (t83 != 18446744072009285631LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x6805 = 35U;
	static volatile uint16_t x6806 = 5U;
	int32_t x6807 = 0;

	t84 = (x6805-(x6806<<(x6807*x6808)));

	if (t84 != 30) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x6933 = 63;
	uint64_t x6934 = 3LLU;
	static volatile int64_t x6935 = 3386291238677236596LL;
	uint16_t x6936 = 0U;
	uint64_t t85 = 6272LLU;

	t85 = (x6933-(x6934<<(x6935*x6936)));

	if (t85 != 60LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x6937 = 31677U;
	static volatile int32_t x6938 = 0;
	int32_t x6939 = INT32_MAX;
	uint8_t x6940 = 0U;
	int32_t t86 = 31573727;

	t86 = (x6937-(x6938<<(x6939*x6940)));

	if (t86 != 31677) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x6993 = 7174U;
	int8_t x6995 = -1;
	volatile int32_t t87 = -114;

	t87 = (x6993-(x6994<<(x6995*x6996)));

	if (t87 != -8186) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x7065 = 29U;
	int64_t x7066 = 5LL;
	int32_t x7067 = INT32_MIN;
	volatile int8_t x7068 = 0;

	t88 = (x7065-(x7066<<(x7067*x7068)));

	if (t88 != 24LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x7117 = -1;
	uint8_t x7118 = 0U;
	static int8_t x7119 = -1;
	int32_t t89 = -93433080;

	t89 = (x7117-(x7118<<(x7119*x7120)));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x7141 = INT8_MIN;
	uint64_t x7142 = 354334LLU;
	int8_t x7143 = 0;
	int32_t x7144 = -1;
	uint64_t t90 = 17527583744002007LLU;

	t90 = (x7141-(x7142<<(x7143*x7144)));

	if (t90 != 18446744073709197154LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x7153 = -1;
	volatile uint8_t x7154 = UINT8_MAX;
	int64_t x7155 = -1LL;

	t91 = (x7153-(x7154<<(x7155*x7156)));

	if (t91 != -511) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x7213 = 3U;
	int32_t x7216 = INT32_MIN;

	t92 = (x7213-(x7214<<(x7215*x7216)));

	if (t92 != 4267033832U) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x7265 = 3250U;
	int8_t x7266 = INT8_MAX;
	int64_t x7267 = -1LL;
	int8_t x7268 = -1;
	static int32_t t93 = -2;

	t93 = (x7265-(x7266<<(x7267*x7268)));

	if (t93 != 2996) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x7349 = 5769U;
	uint8_t x7350 = 3U;
	int32_t x7351 = INT32_MIN;

	t94 = (x7349-(x7350<<(x7351*x7352)));

	if (t94 != 5766) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x7425 = INT64_MAX;
	uint32_t x7426 = UINT32_MAX;
	uint64_t x7428 = 9493805639LLU;
	volatile int64_t t95 = 15773666506005563LL;

	t95 = (x7425-(x7426<<(x7427*x7428)));

	if (t95 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x7437 = 24;
	static int64_t x7438 = INT64_MAX;
	static uint8_t x7439 = 0U;
	int64_t x7440 = INT64_MAX;
	static int64_t t96 = -11LL;

	t96 = (x7437-(x7438<<(x7439*x7440)));

	if (t96 != -9223372036854775783LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x7472 = 0;
	static volatile uint64_t t97 = 258653652LLU;

	t97 = (x7469-(x7470<<(x7471*x7472)));

	if (t97 != 9223372036855007227LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x7493 = INT8_MAX;
	uint8_t x7495 = 0U;
	volatile int32_t t98 = 3854245;

	t98 = (x7493-(x7494<<(x7495*x7496)));

	if (t98 != -37) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x7525 = INT16_MIN;
	int16_t x7526 = INT16_MAX;
	int64_t x7527 = -1LL;
	int8_t x7528 = -1;
	static int32_t t99 = 16262426;

	t99 = (x7525-(x7526<<(x7527*x7528)));

	if (t99 != -98302) { NG(); } else { ; }
	
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


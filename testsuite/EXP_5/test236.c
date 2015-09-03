#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t2 = UINT64_MAX;
volatile int32_t x137 = INT32_MAX;
uint32_t x215 = 2363U;
static uint8_t x216 = 6U;
uint8_t x327 = 5U;
uint32_t x333 = UINT32_MAX;
int32_t x351 = 87;
static volatile int64_t x352 = 0LL;
int32_t x453 = -2364183;
static int32_t t11 = 0;
static uint8_t x519 = 6U;
volatile uint32_t t12 = 104U;
int16_t x611 = INT16_MIN;
uint64_t t13 = 11675640LLU;
uint32_t x750 = 23084342U;
int8_t x752 = 24;
volatile uint32_t t14 = 2U;
int16_t x770 = -126;
int16_t x771 = -3279;
int8_t x850 = -28;
static int32_t x929 = -115;
uint8_t x955 = 41U;
uint64_t t19 = 2LLU;
uint32_t x1122 = 231U;
static uint32_t x1165 = UINT32_MAX;
volatile uint8_t x1168 = 11U;
uint16_t x1358 = 24381U;
uint32_t x1361 = UINT32_MAX;
volatile uint64_t x1629 = 227529LLU;
uint16_t x1632 = 6U;
volatile int8_t x1680 = 3;
uint32_t x1712 = 3U;
static uint64_t x1741 = UINT64_MAX;
int16_t x1744 = 1;
uint8_t x2617 = 6U;
int16_t x2620 = 13;
int8_t x2639 = -1;
uint64_t x2686 = 1712LLU;
static volatile uint64_t t39 = 91545865LLU;
volatile uint8_t x2840 = 31U;
volatile uint64_t t41 = 1497075LLU;
static uint16_t x2886 = UINT16_MAX;
uint32_t x2887 = 43U;
uint8_t x2922 = UINT8_MAX;
int64_t x2965 = INT64_MAX;
volatile int8_t x2969 = -1;
uint16_t x2972 = 9U;
static volatile uint32_t t47 = 0U;
uint64_t x3035 = 211714458644358LLU;
uint64_t x3057 = 200874343476312LLU;
uint64_t x3102 = UINT64_MAX;
uint64_t t50 = 2066175858175236331LLU;
int64_t t51 = -94881352059458LL;
static int8_t x3402 = INT8_MIN;
volatile uint8_t x3404 = 0U;
uint64_t t54 = 183968017LLU;
int8_t x3457 = -62;
static int8_t x3460 = 2;
static volatile uint8_t x3498 = 1U;
static uint32_t x3499 = 1496543995U;
static int32_t x3590 = INT32_MIN;
int8_t x3592 = 1;
volatile uint32_t x3616 = 4U;
uint32_t x3731 = UINT32_MAX;
int32_t x3964 = 54;
int64_t x4265 = INT64_MIN;
uint64_t x4266 = 198179677LLU;
static uint32_t t65 = 44761U;
static uint32_t x4317 = 2U;
uint64_t t68 = 3228664181789839753LLU;
volatile int64_t x4539 = INT64_MAX;
static uint8_t x4540 = 3U;
static volatile uint8_t x4568 = 6U;
static uint64_t t70 = 684948LLU;
uint32_t x4637 = 225373617U;
uint16_t x4670 = 3U;
volatile int16_t x4894 = -14;
int32_t x4896 = 1;
int32_t x5014 = 16775051;
volatile uint64_t x5026 = 81LLU;
static volatile uint16_t x5213 = 1U;
static uint8_t x5216 = 1U;
int16_t x5278 = INT16_MAX;
uint64_t t82 = 325004LLU;
int64_t x5547 = -1LL;
int64_t x5562 = 2028292599123317LL;
static int64_t t84 = 77410266465LL;
static volatile int32_t x5645 = 7;
int16_t x5647 = -1;
static volatile uint32_t x5648 = 28U;
uint8_t x5716 = 1U;
volatile int64_t t86 = 68520083LL;
uint8_t x5741 = 0U;
uint32_t x5781 = 5U;
int16_t x5922 = -1;
int16_t x5924 = 0;
static volatile uint64_t x6033 = 7781LLU;
volatile uint64_t t90 = 259462471216LLU;
uint8_t x6057 = UINT8_MAX;
int16_t x6187 = -1;
uint32_t x6279 = UINT32_MAX;
int32_t x6280 = 2;
int8_t x6339 = -1;
volatile uint64_t t97 = 98119446LLU;
int32_t x6414 = 93245599;
volatile int32_t x6415 = -1;


void f0(void) {
	uint8_t x77 = 3U;
	static int16_t x78 = 5274;
	uint16_t x79 = 278U;
	int32_t x80 = 3;
	int32_t t0 = 1390;

	t0 = (x77-((x78-x79)<<x80));

	if (t0 != -39965) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x85 = INT16_MAX;
	uint64_t x86 = 94734822058755221LLU;
	int8_t x87 = INT8_MAX;
	uint8_t x88 = 0U;
	volatile uint64_t t1 = 6984647390LLU;

	t1 = (x85-((x86-x87)<<x88));

	if (t1 != 18352009251650829289LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x109 = -1LL;
	volatile uint64_t x110 = UINT64_MAX;
	int32_t x111 = -1;
	int16_t x112 = 24;

	t2 = (x109-((x110-x111)<<x112));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x138 = UINT64_MAX;
	volatile uint16_t x139 = UINT16_MAX;
	static volatile int16_t x140 = 0;
	volatile uint64_t t3 = 152488557273LLU;

	t3 = (x137-((x138-x139)<<x140));

	if (t3 != 2147549183LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x213 = 7U;
	int16_t x214 = INT16_MIN;
	static uint32_t t4 = 169026U;

	t4 = (x213-((x214-x215)<<x216));

	if (t4 != 2248391U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x325 = INT16_MIN;
	volatile int8_t x326 = 62;
	int16_t x328 = 14;
	volatile int32_t t5 = -74;

	t5 = (x325-((x326-x327)<<x328));

	if (t5 != -966656) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x334 = 1638996491088LL;
	int32_t x335 = -1;
	int8_t x336 = 0;
	int64_t t6 = 547909413036LL;

	t6 = (x333-((x334-x335)<<x336));

	if (t6 != -1634701523794LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x345 = INT16_MIN;
	static volatile int32_t x346 = INT32_MIN;
	uint64_t x347 = UINT64_MAX;
	int8_t x348 = 3;
	static uint64_t t7 = 5560835206701000LLU;

	t7 = (x345-((x346-x347)<<x348));

	if (t7 != 17179836408LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x349 = -1;
	static uint32_t x350 = 32316783U;
	static volatile uint32_t t8 = 4328U;

	t8 = (x349-((x350-x351)<<x352));

	if (t8 != 4262650599U) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x445 = UINT16_MAX;
	int16_t x446 = -1;
	int16_t x447 = -262;
	static uint8_t x448 = 0U;
	volatile int32_t t9 = -133857202;

	t9 = (x445-((x446-x447)<<x448));

	if (t9 != 65274) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x454 = INT16_MIN;
	uint64_t x455 = 2112597926480292LLU;
	static uint32_t x456 = 12U;
	uint64_t t10 = 38LLU;

	t10 = (x453-((x454-x455)<<x456));

	if (t10 != 8653201106995129577LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x485 = INT16_MIN;
	static int8_t x486 = INT8_MAX;
	int16_t x487 = -1;
	static uint8_t x488 = 14U;

	t11 = (x485-((x486-x487)<<x488));

	if (t11 != -2129920) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x517 = INT32_MIN;
	static uint32_t x518 = 8U;
	int8_t x520 = 3;

	t12 = (x517-((x518-x519)<<x520));

	if (t12 != 2147483632U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x609 = -12831656084382312LL;
	uint64_t x610 = 17LLU;
	static uint16_t x612 = 0U;

	t13 = (x609-((x610-x611)<<x612));

	if (t13 != 18433912417625136519LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x749 = -1;
	uint8_t x751 = 48U;

	t14 = (x749-((x750-x751)<<x752));

	if (t14 != 4194303999U) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x769 = 18265U;
	static uint16_t x772 = 0U;
	int32_t t15 = 207252462;

	t15 = (x769-((x770-x771)<<x772));

	if (t15 != 15112) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x793 = UINT16_MAX;
	uint64_t x794 = 24237101023462LLU;
	static uint64_t x795 = 15026395780LLU;
	static int8_t x796 = 37;
	uint64_t t16 = 173507LLU;

	t16 = (x793-((x794-x795)<<x796));

	if (t16 != 8868488990949441535LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x849 = UINT16_MAX;
	uint32_t x851 = 23253905U;
	volatile uint32_t x852 = 16U;
	uint32_t t17 = 693806U;

	t17 = (x849-((x850-x851)<<x852));

	if (t17 != 3551395839U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x930 = INT16_MIN;
	uint32_t x931 = 225U;
	uint16_t x932 = 14U;
	volatile uint32_t t18 = 7560566U;

	t18 = (x929-((x930-x931)<<x932));

	if (t18 != 540557197U) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x953 = 468187;
	volatile uint64_t x954 = 63046779463LLU;
	volatile uint8_t x956 = 8U;

	t19 = (x953-((x954-x955)<<x956));

	if (t19 != 18446727933734487771LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x981 = 644U;
	int8_t x982 = INT8_MAX;
	uint64_t x983 = UINT64_MAX;
	uint8_t x984 = 62U;
	uint64_t t20 = 272145565970LLU;

	t20 = (x981-((x982-x983)<<x984));

	if (t20 != 644LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x1121 = 9LLU;
	uint16_t x1123 = UINT16_MAX;
	uint16_t x1124 = 1U;
	volatile uint64_t t21 = 41898309913898312LLU;

	t21 = (x1121-((x1122-x1123)<<x1124));

	if (t21 != 18446744069414714937LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1166 = INT32_MIN;
	uint64_t x1167 = 385177513094527012LLU;
	uint64_t t22 = 2096575154146738091LLU;

	t22 = (x1165-((x1166-x1167)<<x1168));

	if (t22 != 14080300124131631103LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x1357 = UINT32_MAX;
	uint8_t x1359 = UINT8_MAX;
	uint16_t x1360 = 1U;
	static volatile uint32_t t23 = 52U;

	t23 = (x1357-((x1358-x1359)<<x1360));

	if (t23 != 4294919043U) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint64_t x1362 = 41639805030LLU;
	int16_t x1363 = INT16_MIN;
	int8_t x1364 = 0;
	uint64_t t24 = 33923585504379509LLU;

	t24 = (x1361-((x1362-x1363)<<x1364));

	if (t24 != 18446744036364681113LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x1630 = UINT8_MAX;
	volatile int8_t x1631 = -1;
	static uint64_t t25 = 27529481699678LLU;

	t25 = (x1629-((x1630-x1631)<<x1632));

	if (t25 != 211145LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x1669 = UINT16_MAX;
	uint32_t x1670 = UINT32_MAX;
	uint16_t x1671 = 45U;
	int16_t x1672 = 16;
	uint32_t t26 = 0U;

	t26 = (x1669-((x1670-x1671)<<x1672));

	if (t26 != 3080191U) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1677 = UINT16_MAX;
	uint32_t x1678 = 2759179U;
	uint64_t x1679 = 2467354126LLU;
	volatile uint64_t t27 = 25504LLU;

	t27 = (x1677-((x1678-x1679)<<x1680));

	if (t27 != 19716825111LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x1685 = -26123819050394LL;
	volatile uint8_t x1686 = UINT8_MAX;
	int32_t x1687 = -949552;
	uint8_t x1688 = 0U;
	volatile int64_t t28 = -1498726714LL;

	t28 = (x1685-((x1686-x1687)<<x1688));

	if (t28 != -26123820000201LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x1709 = 292U;
	volatile int8_t x1710 = INT8_MIN;
	int8_t x1711 = INT8_MIN;
	volatile uint32_t t29 = 129611600U;

	t29 = (x1709-((x1710-x1711)<<x1712));

	if (t29 != 292U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1742 = 450;
	uint32_t x1743 = 424052091U;
	uint64_t t30 = 11291070377103LLU;

	t30 = (x1741-((x1742-x1743)<<x1744));

	if (t30 != 18446744070262687601LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x1793 = 32;
	volatile int64_t x1794 = 76175LL;
	int32_t x1795 = INT32_MIN;
	static int32_t x1796 = 6;
	static volatile int64_t t31 = 7235921632605267LL;

	t31 = (x1793-((x1794-x1795)<<x1796));

	if (t31 != -137443828640LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1877 = INT8_MIN;
	static int64_t x1878 = -1LL;
	uint64_t x1879 = 781008955249LLU;
	static uint16_t x1880 = 2U;
	static uint64_t t32 = 510540798736126LLU;

	t32 = (x1877-((x1878-x1879)<<x1880));

	if (t32 != 3124035820872LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x2201 = -5349863LL;
	uint16_t x2202 = UINT16_MAX;
	int16_t x2203 = 12;
	int16_t x2204 = 1;
	volatile int64_t t33 = -77386486842227011LL;

	t33 = (x2201-((x2202-x2203)<<x2204));

	if (t33 != -5480909LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x2301 = INT8_MIN;
	uint64_t x2302 = 8289351423221285137LLU;
	int16_t x2303 = INT16_MAX;
	uint8_t x2304 = 3U;
	static volatile uint64_t t34 = 463164577139484LLU;

	t34 = (x2301-((x2302-x2303)<<x2304));

	if (t34 != 7472164909068187376LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x2561 = INT8_MIN;
	static volatile uint32_t x2562 = 1298U;
	uint8_t x2563 = 3U;
	static volatile int8_t x2564 = 28;
	static volatile uint32_t t35 = 62712819U;

	t35 = (x2561-((x2562-x2563)<<x2564));

	if (t35 != 268435328U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x2618 = UINT16_MAX;
	int16_t x2619 = INT16_MIN;
	int32_t t36 = -968253;

	t36 = (x2617-((x2618-x2619)<<x2620));

	if (t36 != -805298170) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x2637 = 375555207U;
	uint8_t x2638 = 6U;
	volatile uint8_t x2640 = 22U;
	uint32_t t37 = 162306U;

	t37 = (x2637-((x2638-x2639)<<x2640));

	if (t37 != 346195079U) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x2685 = 6720U;
	static int8_t x2687 = -1;
	uint16_t x2688 = 2U;
	uint64_t t38 = 509012438LLU;

	t38 = (x2685-((x2686-x2687)<<x2688));

	if (t38 != 18446744073709551484LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x2741 = 967LL;
	uint64_t x2742 = UINT64_MAX;
	uint16_t x2743 = 16U;
	volatile int16_t x2744 = 33;

	t39 = (x2741-((x2742-x2743)<<x2744));

	if (t39 != 146028889031LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2837 = -9;
	int16_t x2838 = INT16_MIN;
	int16_t x2839 = INT16_MIN;
	int32_t t40 = 6409;

	t40 = (x2837-((x2838-x2839)<<x2840));

	if (t40 != -9) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x2873 = INT16_MIN;
	static int8_t x2874 = -11;
	static uint64_t x2875 = 23LLU;
	uint16_t x2876 = 0U;

	t41 = (x2873-((x2874-x2875)<<x2876));

	if (t41 != 18446744073709518882LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x2885 = INT16_MIN;
	uint16_t x2888 = 22U;
	volatile uint32_t t42 = 188U;

	t42 = (x2885-((x2886-x2887)<<x2888));

	if (t42 != 184516608U) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x2917 = 5U;
	static volatile uint64_t x2918 = 13273468753LLU;
	uint64_t x2919 = 10321416839123LLU;
	static int64_t x2920 = 58LL;
	uint64_t t43 = 3LLU;

	t43 = (x2917-((x2918-x2919)<<x2920));

	if (t43 != 576460752303423493LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x2921 = -544059;
	uint64_t x2923 = UINT64_MAX;
	uint8_t x2924 = 34U;
	uint64_t t44 = 39LLU;

	t44 = (x2921-((x2922-x2923)<<x2924));

	if (t44 != 18446739675662496453LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x2966 = 682U;
	uint64_t x2967 = 19028212550729LLU;
	volatile int8_t x2968 = 39;
	static uint64_t t45 = 893LLU;

	t45 = (x2965-((x2966-x2967)<<x2968));

	if (t45 != 7837617400194269183LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x2970 = 322U;
	int8_t x2971 = INT8_MIN;
	volatile int32_t t46 = 99295583;

	t46 = (x2969-((x2970-x2971)<<x2972));

	if (t46 != -230401) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x3021 = INT32_MIN;
	uint32_t x3022 = 37612U;
	int32_t x3023 = -1;
	volatile int8_t x3024 = 0;

	t47 = (x3021-((x3022-x3023)<<x3024));

	if (t47 != 2147446035U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x3033 = 21463068118LLU;
	volatile int64_t x3034 = INT64_MAX;
	int8_t x3036 = 0;
	volatile uint64_t t48 = 182294780350LLU;

	t48 = (x3033-((x3034-x3035)<<x3036));

	if (t48 != 9223583772776488285LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x3058 = UINT32_MAX;
	static uint64_t x3059 = 738320064575434LLU;
	uint32_t x3060 = 8U;
	volatile uint64_t t49 = 3921022LLU;

	t49 = (x3057-((x3058-x3059)<<x3060));

	if (t49 != 189209711363159896LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x3101 = 85U;
	static int32_t x3103 = INT32_MIN;
	uint16_t x3104 = 4U;

	t50 = (x3101-((x3102-x3103)<<x3104));

	if (t50 != 18446744039349813349LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x3261 = 86U;
	int64_t x3262 = INT64_MIN;
	int64_t x3263 = INT64_MIN;
	uint8_t x3264 = 5U;

	t51 = (x3261-((x3262-x3263)<<x3264));

	if (t51 != 86LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x3345 = UINT32_MAX;
	int64_t x3346 = 115038803277LL;
	int8_t x3347 = -1;
	uint8_t x3348 = 3U;
	static int64_t t52 = 26LL;

	t52 = (x3345-((x3346-x3347)<<x3348));

	if (t52 != -916015458929LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x3349 = 32228493LL;
	int32_t x3350 = 12844;
	int8_t x3351 = 0;
	volatile uint16_t x3352 = 7U;
	int64_t t53 = 848887958018703057LL;

	t53 = (x3349-((x3350-x3351)<<x3352));

	if (t53 != 30584461LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x3401 = 8001265437443509759LLU;
	int8_t x3403 = INT8_MIN;

	t54 = (x3401-((x3402-x3403)<<x3404));

	if (t54 != 8001265437443509759LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x3458 = 12LLU;
	static uint64_t x3459 = 33341906885LLU;
	volatile uint64_t t55 = 818839712645LLU;

	t55 = (x3457-((x3458-x3459)<<x3460));

	if (t55 != 133367627430LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x3497 = -1;
	uint16_t x3500 = 0U;
	uint32_t t56 = 24U;

	t56 = (x3497-((x3498-x3499)<<x3500));

	if (t56 != 1496543993U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x3577 = 883;
	uint16_t x3578 = UINT16_MAX;
	uint8_t x3579 = 2U;
	uint8_t x3580 = 4U;
	int32_t t57 = 7526566;

	t57 = (x3577-((x3578-x3579)<<x3580));

	if (t57 != -1047645) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x3589 = UINT64_MAX;
	static uint64_t x3591 = 7338672LLU;
	volatile uint64_t t58 = 22563586774LLU;

	t58 = (x3589-((x3590-x3591)<<x3592));

	if (t58 != 4309644639LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x3613 = 76U;
	volatile int8_t x3614 = INT8_MAX;
	uint64_t x3615 = 1993022165LLU;
	static volatile uint64_t t59 = 6LLU;

	t59 = (x3613-((x3614-x3615)<<x3616));

	if (t59 != 31888352684LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint64_t x3729 = 61LLU;
	int16_t x3730 = -396;
	uint8_t x3732 = 19U;
	volatile uint64_t t60 = 38LLU;

	t60 = (x3729-((x3730-x3731)<<x3732));

	if (t60 != 18446744069621678141LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x3893 = 0U;
	volatile int8_t x3894 = -3;
	uint64_t x3895 = UINT64_MAX;
	uint16_t x3896 = 7U;
	volatile uint64_t t61 = 462772480774LLU;

	t61 = (x3893-((x3894-x3895)<<x3896));

	if (t61 != 256LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x3925 = 0U;
	int16_t x3926 = -21;
	static int16_t x3927 = INT16_MIN;
	uint16_t x3928 = 1U;
	static volatile int32_t t62 = 140108608;

	t62 = (x3925-((x3926-x3927)<<x3928));

	if (t62 != -65494) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x3961 = INT32_MIN;
	static volatile int16_t x3962 = INT16_MIN;
	volatile uint64_t x3963 = 10710602409048LLU;
	uint64_t t63 = 317363530964211291LLU;

	t63 = (x3961-((x3962-x3963)<<x3964));

	if (t63 != 1585267066686930944LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x4267 = -2;
	uint8_t x4268 = 12U;
	uint64_t t64 = 79660667117455LLU;

	t64 = (x4265-((x4266-x4267)<<x4268));

	if (t64 != 9223371225110810624LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x4277 = 1;
	int8_t x4278 = INT8_MIN;
	static uint32_t x4279 = UINT32_MAX;
	uint16_t x4280 = 2U;

	t65 = (x4277-((x4278-x4279)<<x4280));

	if (t65 != 509U) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x4318 = 95U;
	int8_t x4319 = 1;
	static int16_t x4320 = 0;
	uint32_t t66 = 1845U;

	t66 = (x4317-((x4318-x4319)<<x4320));

	if (t66 != 4294967204U) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x4453 = 89U;
	uint8_t x4454 = UINT8_MAX;
	volatile int8_t x4455 = INT8_MIN;
	uint8_t x4456 = 11U;
	static int32_t t67 = 37908;

	t67 = (x4453-((x4454-x4455)<<x4456));

	if (t67 != -784295) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x4489 = 793U;
	uint64_t x4490 = 4360729846091LLU;
	int8_t x4491 = INT8_MAX;
	uint32_t x4492 = 10U;

	t68 = (x4489-((x4490-x4491)<<x4492));

	if (t68 != 18442278686347285273LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x4537 = 8599U;
	uint64_t x4538 = 8320836566657LLU;
	volatile uint64_t t69 = 1245171721183LLU;

	t69 = (x4537-((x4538-x4539)<<x4540));

	if (t69 != 18446677507017026951LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x4565 = 0U;
	volatile uint64_t x4566 = 201LLU;
	uint64_t x4567 = UINT64_MAX;

	t70 = (x4565-((x4566-x4567)<<x4568));

	if (t70 != 18446744073709538688LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x4638 = 24408154339LLU;
	int32_t x4639 = INT32_MIN;
	int8_t x4640 = 16;
	volatile uint64_t t71 = 6LLU;

	t71 = (x4637-((x4638-x4639)<<x4640));

	if (t71 != 18445003723643809201LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x4669 = INT8_MAX;
	int64_t x4671 = 3LL;
	uint16_t x4672 = 56U;
	volatile int64_t t72 = 281154164381721LL;

	t72 = (x4669-((x4670-x4671)<<x4672));

	if (t72 != 127LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x4893 = UINT32_MAX;
	uint32_t x4895 = 420U;
	uint32_t t73 = 22957U;

	t73 = (x4893-((x4894-x4895)<<x4896));

	if (t73 != 867U) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x4909 = 4190699009358057LLU;
	static volatile int8_t x4910 = INT8_MAX;
	uint8_t x4911 = 84U;
	volatile int8_t x4912 = 1;
	uint64_t t74 = 2869831698612470293LLU;

	t74 = (x4909-((x4910-x4911)<<x4912));

	if (t74 != 4190699009357971LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x5013 = UINT64_MAX;
	int8_t x5015 = INT8_MIN;
	static volatile int8_t x5016 = 2;
	volatile uint64_t t75 = 4752300460014LLU;

	t75 = (x5013-((x5014-x5015)<<x5016));

	if (t75 != 18446744073642450899LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x5025 = UINT8_MAX;
	int8_t x5027 = -1;
	uint32_t x5028 = 4U;
	uint64_t t76 = 46427604LLU;

	t76 = (x5025-((x5026-x5027)<<x5028));

	if (t76 != 18446744073709550559LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x5165 = 2631U;
	uint16_t x5166 = UINT16_MAX;
	static volatile int8_t x5167 = 0;
	uint8_t x5168 = 5U;
	volatile uint32_t t77 = 817U;

	t77 = (x5165-((x5166-x5167)<<x5168));

	if (t77 != 4292872807U) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x5214 = 18791991901LLU;
	int64_t x5215 = INT64_MAX;
	static uint64_t t78 = 161844LLU;

	t78 = (x5213-((x5214-x5215)<<x5216));

	if (t78 != 18446744036125567813LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x5277 = UINT16_MAX;
	volatile int8_t x5279 = 8;
	uint8_t x5280 = 16U;
	int32_t t79 = 12;

	t79 = (x5277-((x5278-x5279)<<x5280));

	if (t79 != -2146828289) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x5409 = UINT32_MAX;
	static int64_t x5410 = -1LL;
	volatile uint64_t x5411 = 297276992789LLU;
	uint16_t x5412 = 2U;
	uint64_t t80 = 102301534384867LLU;

	t80 = (x5409-((x5410-x5411)<<x5412));

	if (t80 != 1193402938455LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x5441 = 29;
	int32_t x5442 = -16;
	volatile int8_t x5443 = INT8_MIN;
	int64_t x5444 = 7LL;
	int32_t t81 = 11580;

	t81 = (x5441-((x5442-x5443)<<x5444));

	if (t81 != -14307) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x5481 = -1;
	uint16_t x5482 = 187U;
	uint64_t x5483 = 23039LLU;
	static uint8_t x5484 = 14U;

	t82 = (x5481-((x5482-x5483)<<x5484));

	if (t82 != 374407167LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x5545 = 1689946LLU;
	static uint32_t x5546 = 4093U;
	volatile uint16_t x5548 = 1U;
	uint64_t t83 = 26962435952663495LLU;

	t83 = (x5545-((x5546-x5547)<<x5548));

	if (t83 != 1681758LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x5561 = INT32_MAX;
	static volatile int8_t x5563 = INT8_MAX;
	int8_t x5564 = 1;

	t84 = (x5561-((x5562-x5563)<<x5564));

	if (t84 != -4056583050762733LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x5646 = 3U;
	static volatile int32_t t85 = 1920;

	t85 = (x5645-((x5646-x5647)<<x5648));

	if (t85 != -1073741817) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x5713 = INT8_MIN;
	uint32_t x5714 = 9453214U;
	static int64_t x5715 = -1LL;

	t86 = (x5713-((x5714-x5715)<<x5716));

	if (t86 != -18906558LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x5742 = 2U;
	int16_t x5743 = -966;
	int8_t x5744 = 1;
	int32_t t87 = 28976;

	t87 = (x5741-((x5742-x5743)<<x5744));

	if (t87 != -1936) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x5782 = -1LL;
	volatile int8_t x5783 = INT8_MIN;
	static int32_t x5784 = 0;
	int64_t t88 = -213897132576LL;

	t88 = (x5781-((x5782-x5783)<<x5784));

	if (t88 != -122LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x5921 = 1166633181783385192LLU;
	uint32_t x5923 = 6U;
	uint64_t t89 = 2847LLU;

	t89 = (x5921-((x5922-x5923)<<x5924));

	if (t89 != 1166633177488417903LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x6034 = 61334251834LLU;
	volatile int8_t x6035 = INT8_MIN;
	volatile int16_t x6036 = 5;

	t90 = (x6033-((x6034-x6035)<<x6036));

	if (t90 != 18446742111013496613LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x6058 = UINT64_MAX;
	int64_t x6059 = -981438LL;
	static uint32_t x6060 = 1U;
	volatile uint64_t t91 = 4911LLU;

	t91 = (x6057-((x6058-x6059)<<x6060));

	if (t91 != 18446744073707588997LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x6081 = -9454927770LL;
	static uint32_t x6082 = 2U;
	uint32_t x6083 = UINT32_MAX;
	int64_t x6084 = 21LL;
	int64_t t92 = 874561941419LL;

	t92 = (x6081-((x6082-x6083)<<x6084));

	if (t92 != -9461219226LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x6145 = -9;
	uint16_t x6146 = UINT16_MAX;
	uint64_t x6147 = 657415763LLU;
	int8_t x6148 = 15;
	uint64_t t93 = 133108028LLU;

	t93 = (x6145-((x6146-x6147)<<x6148));

	if (t93 != 21540052271095LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x6185 = INT8_MAX;
	int16_t x6186 = INT16_MAX;
	static int16_t x6188 = 0;
	volatile int32_t t94 = -1;

	t94 = (x6185-((x6186-x6187)<<x6188));

	if (t94 != -32641) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x6277 = UINT64_MAX;
	uint16_t x6278 = 14U;
	volatile uint64_t t95 = 14528871694830252LLU;

	t95 = (x6277-((x6278-x6279)<<x6280));

	if (t95 != 18446744073709551555LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x6289 = INT8_MAX;
	volatile int16_t x6290 = 10115;
	int16_t x6291 = -1;
	uint32_t x6292 = 3U;
	int32_t t96 = 1;

	t96 = (x6289-((x6290-x6291)<<x6292));

	if (t96 != -80801) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x6337 = 7LLU;
	static int64_t x6338 = -1LL;
	uint16_t x6340 = 2U;

	t97 = (x6337-((x6338-x6339)<<x6340));

	if (t97 != 7LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x6397 = -1;
	uint32_t x6398 = UINT32_MAX;
	int32_t x6399 = INT32_MAX;
	uint32_t x6400 = 0U;
	volatile uint32_t t98 = 1169759U;

	t98 = (x6397-((x6398-x6399)<<x6400));

	if (t98 != 2147483647U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x6413 = INT64_MAX;
	volatile int8_t x6416 = 1;
	int64_t t99 = -234735LL;

	t99 = (x6413-((x6414-x6415)<<x6416));

	if (t99 != 9223372036668284607LL) { NG(); } else { ; }
	
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


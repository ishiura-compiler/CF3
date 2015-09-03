#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x66 = 0U;
static int8_t x214 = 0;
int8_t x215 = -2;
int64_t x216 = -1LL;
volatile int64_t t1 = -4467838215411399926LL;
uint64_t x281 = 507334619LLU;
int8_t x284 = INT8_MIN;
uint64_t t3 = 313024304056067308LLU;
volatile uint64_t t4 = 763082626782382985LLU;
int8_t x829 = 2;
int64_t x925 = 41032LL;
int64_t x1100 = INT64_MIN;
volatile uint32_t x1193 = UINT32_MAX;
static int16_t x1195 = INT16_MIN;
volatile uint64_t t12 = 112366LLU;
volatile uint64_t t13 = 161179606LLU;
static uint32_t x1373 = UINT32_MAX;
int32_t x1375 = 1;
volatile uint32_t t15 = 88U;
volatile int8_t x1625 = INT8_MAX;
volatile uint32_t t18 = 657U;
uint8_t x1793 = 2U;
uint8_t x1794 = 2U;
uint64_t x1808 = 11474LLU;
uint16_t x1947 = UINT16_MAX;
int16_t x1948 = INT16_MIN;
volatile uint8_t x2025 = UINT8_MAX;
static int64_t t25 = -533LL;
uint32_t t26 = 6U;
volatile uint64_t x2131 = UINT64_MAX;
static volatile int8_t x2181 = INT8_MAX;
uint16_t x2184 = 13475U;
uint16_t x2318 = 45U;
int8_t x2319 = INT8_MIN;
static int64_t x2380 = INT64_MIN;
int8_t x2591 = INT8_MIN;
uint32_t x2607 = 6766009U;
int32_t x2608 = INT32_MIN;
volatile uint32_t t33 = 180U;
static uint16_t x3289 = 120U;
uint8_t x3290 = 2U;
int16_t x3347 = 0;
static int64_t t38 = 1LL;
volatile int32_t t40 = 876;
static uint64_t x3612 = 9233893398LLU;
int8_t x3622 = 1;
static volatile uint8_t x3823 = 0U;
static uint64_t x3927 = 2258LLU;
int16_t x3928 = INT16_MIN;
uint64_t x4033 = UINT64_MAX;
uint32_t x4217 = 23075172U;
int64_t x4219 = -17275992758LL;
volatile int64_t t49 = -566519LL;
uint16_t x4466 = 1U;
uint64_t x4561 = 542230814853LLU;
uint64_t t52 = 206LLU;
volatile uint64_t x4626 = 1LLU;
volatile uint64_t x4627 = 9847449LLU;
static uint64_t x4628 = 280740806175104LLU;
uint64_t x4689 = 497839086LLU;
int64_t x4764 = -31272428LL;
volatile int64_t t55 = 690862065259597LL;
static uint32_t x4857 = 640775U;
int8_t x4860 = 4;
uint32_t t56 = 12412861U;
volatile int32_t x4947 = INT32_MIN;
volatile int64_t t57 = 1599500LL;
volatile uint32_t t58 = 41053280U;
int16_t x5230 = 1;
int16_t x5232 = INT16_MAX;
volatile uint64_t t60 = 159LLU;
volatile int16_t x5582 = 1;
int64_t t61 = -209LL;
static int16_t x5845 = 1393;
uint16_t x5989 = 10U;
uint32_t x5992 = UINT32_MAX;
static uint64_t x6039 = 80256LLU;
volatile uint64_t t68 = 48LLU;
uint16_t x6405 = UINT16_MAX;
uint64_t x6408 = 240242526680LLU;
volatile uint8_t x6537 = 3U;
static volatile int8_t x6538 = 1;
volatile int8_t x6539 = INT8_MAX;
static uint32_t x6785 = 1244U;
int16_t x6808 = INT16_MIN;
volatile uint64_t x7073 = 3386444233034487LLU;
static uint8_t x7166 = 21U;
uint32_t x7169 = UINT32_MAX;
uint64_t x7389 = 13200653871937260LLU;
static volatile uint64_t t81 = 1359LLU;
uint16_t x7481 = 1U;
int16_t x7484 = -1;
uint8_t x7658 = 5U;
uint64_t x7752 = 1392LLU;
volatile uint64_t t85 = 3336605071184400LLU;
int8_t x7791 = 60;
volatile uint16_t x7792 = UINT16_MAX;
volatile int32_t t86 = 611758;
uint8_t x7877 = UINT8_MAX;
uint64_t x7879 = 2310004989625682748LLU;
uint64_t t87 = 96458025LLU;
uint64_t x7885 = UINT64_MAX;
uint8_t x7978 = 3U;
uint32_t t89 = 3883U;
uint32_t x8069 = 89111U;
int8_t x8072 = INT8_MIN;
int8_t x8119 = -1;
volatile uint64_t x8321 = UINT64_MAX;
uint8_t x8387 = 125U;
uint64_t t94 = 52498146157743LLU;
static int64_t t95 = -363298208LL;
static uint64_t x8664 = UINT64_MAX;
uint64_t x8773 = 110988729109062LLU;


void f0(void) {
	volatile int8_t x65 = INT8_MAX;
	int16_t x67 = -1;
	static volatile int16_t x68 = INT16_MAX;
	int32_t t0 = 0;

	t0 = ((x65<<x66)*(x67*x68));

	if (t0 != -4161409) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint8_t x213 = UINT8_MAX;

	t1 = ((x213<<x214)*(x215*x216));

	if (t1 != 510LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x269 = UINT64_MAX;
	uint32_t x270 = 6U;
	int16_t x271 = -1;
	uint32_t x272 = UINT32_MAX;
	uint64_t t2 = 32115388167LLU;

	t2 = ((x269<<x270)*(x271*x272));

	if (t2 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x282 = 4;
	static uint32_t x283 = 1590370269U;

	t3 = ((x281<<x282)*(x283*x284));

	if (t3 != 2585610298007717888LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x377 = 507268768259LLU;
	static int8_t x378 = 1;
	uint16_t x379 = 521U;
	int64_t x380 = 44LL;

	t4 = ((x377<<x378)*(x379*x380));

	if (t4 != 23257258487138632LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x569 = 2650020LL;
	uint8_t x570 = 1U;
	int16_t x571 = -1;
	static uint64_t x572 = 6273204876LLU;
	uint64_t t5 = 985913LLU;

	t5 = ((x569<<x570)*(x571*x572));

	if (t5 != 18413495836938556576LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x713 = 2;
	int8_t x714 = 24;
	volatile int16_t x715 = INT16_MIN;
	uint64_t x716 = UINT64_MAX;
	static uint64_t t6 = 91104539788432LLU;

	t6 = ((x713<<x714)*(x715*x716));

	if (t6 != 1099511627776LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x830 = 0U;
	int8_t x831 = INT8_MIN;
	uint32_t x832 = UINT32_MAX;
	volatile uint32_t t7 = 12U;

	t7 = ((x829<<x830)*(x831*x832));

	if (t7 != 256U) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x926 = 3U;
	uint16_t x927 = 132U;
	int64_t x928 = 200LL;
	volatile int64_t t8 = -21308254602108LL;

	t8 = ((x925<<x926)*(x927*x928));

	if (t8 != 8665958400LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x1097 = 14096239U;
	uint8_t x1098 = 1U;
	uint8_t x1099 = 0U;
	int64_t t9 = 1032769LL;

	t9 = ((x1097<<x1098)*(x1099*x1100));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x1149 = INT16_MAX;
	int8_t x1150 = 1;
	uint64_t x1151 = 112960096997862939LLU;
	int64_t x1152 = INT64_MIN;
	volatile uint64_t t10 = 22433612859518LLU;

	t10 = ((x1149<<x1150)*(x1151*x1152));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x1194 = 0U;
	uint16_t x1196 = UINT16_MAX;
	uint32_t t11 = 1462U;

	t11 = ((x1193<<x1194)*(x1195*x1196));

	if (t11 != 2147450880U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x1289 = 21;
	int8_t x1290 = 3;
	uint64_t x1291 = 36LLU;
	volatile int64_t x1292 = INT64_MAX;

	t12 = ((x1289<<x1290)*(x1291*x1292));

	if (t12 != 18446744073709545568LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x1345 = 15U;
	uint8_t x1346 = 19U;
	static uint64_t x1347 = 143319580434384286LLU;
	static int16_t x1348 = -1;

	t13 = ((x1345<<x1346)*(x1347*x1348));

	if (t13 != 3466845990285213696LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x1374 = 1U;
	uint32_t x1376 = 218190022U;
	volatile uint32_t t14 = 31073710U;

	t14 = ((x1373<<x1374)*(x1375*x1376));

	if (t14 != 3858587252U) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x1549 = 500U;
	int8_t x1550 = 4;
	uint32_t x1551 = 3872U;
	static int32_t x1552 = INT32_MIN;

	t15 = ((x1549<<x1550)*(x1551*x1552));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x1609 = INT32_MAX;
	int16_t x1610 = 0;
	uint64_t x1611 = 374LLU;
	int64_t x1612 = -924742369271LL;
	static uint64_t t16 = 27LLU;

	t16 = ((x1609<<x1610)*(x1611*x1612));

	if (t16 != 6207368899755274970LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x1626 = 10U;
	static int8_t x1627 = -6;
	static int16_t x1628 = -1;
	static volatile int32_t t17 = -23;

	t17 = ((x1625<<x1626)*(x1627*x1628));

	if (t17 != 780288) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x1681 = INT16_MAX;
	int64_t x1682 = 1LL;
	int16_t x1683 = 7632;
	uint32_t x1684 = UINT32_MAX;

	t18 = ((x1681<<x1682)*(x1683*x1684));

	if (t18 != 3794811808U) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint8_t x1693 = 8U;
	static volatile uint32_t x1694 = 0U;
	static int8_t x1695 = 0;
	static volatile int64_t x1696 = -62271LL;
	volatile int64_t t19 = 2842834LL;

	t19 = ((x1693<<x1694)*(x1695*x1696));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1697 = 0U;
	int16_t x1698 = 4;
	static int16_t x1699 = INT16_MIN;
	int32_t x1700 = 68;
	int32_t t20 = 3;

	t20 = ((x1697<<x1698)*(x1699*x1700));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x1795 = INT8_MIN;
	volatile int16_t x1796 = 8066;
	static volatile int32_t t21 = 193;

	t21 = ((x1793<<x1794)*(x1795*x1796));

	if (t21 != -8259584) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x1805 = 1008;
	uint8_t x1806 = 0U;
	volatile uint32_t x1807 = 15U;
	volatile uint64_t t22 = 58450LLU;

	t22 = ((x1805<<x1806)*(x1807*x1808));

	if (t22 != 173486880LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1945 = UINT64_MAX;
	uint8_t x1946 = 6U;
	volatile uint64_t t23 = 1878445069537LLU;

	t23 = ((x1945<<x1946)*(x1947*x1948));

	if (t23 != 137436856320LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int32_t x2021 = 39467;
	volatile int8_t x2022 = 0;
	int16_t x2023 = -1;
	int16_t x2024 = -1;
	int32_t t24 = -355720;

	t24 = ((x2021<<x2022)*(x2023*x2024));

	if (t24 != 39467) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x2026 = 17U;
	int32_t x2027 = -1;
	volatile int64_t x2028 = -1LL;

	t25 = ((x2025<<x2026)*(x2027*x2028));

	if (t25 != 33423360LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x2069 = 35U;
	volatile uint8_t x2070 = 25U;
	volatile uint32_t x2071 = 1649988U;
	int8_t x2072 = INT8_MAX;

	t26 = ((x2069<<x2070)*(x2071*x2072));

	if (t26 != 1744830464U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x2121 = 1623257154542LL;
	static int8_t x2122 = 0;
	static uint64_t x2123 = 6114098297563554LLU;
	static int64_t x2124 = INT64_MIN;
	uint64_t t27 = 17180LLU;

	t27 = ((x2121<<x2122)*(x2123*x2124));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x2129 = 65U;
	int16_t x2130 = 10;
	int64_t x2132 = INT64_MIN;
	volatile uint64_t t28 = 31516LLU;

	t28 = ((x2129<<x2130)*(x2131*x2132));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x2182 = 1U;
	int64_t x2183 = -18906699521LL;
	volatile int64_t t29 = 227238400713616926LL;

	t29 = ((x2181<<x2182)*(x2183*x2184));

	if (t29 != -64711015115550650LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x2317 = 5542183712481LLU;
	int8_t x2320 = -1;
	static uint64_t t30 = 12191112602287LLU;

	t30 = ((x2317<<x2318)*(x2319*x2320));

	if (t30 != 7930838943799443456LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x2377 = UINT32_MAX;
	volatile uint64_t x2378 = 2LLU;
	static uint64_t x2379 = 13212266825064168LLU;
	uint64_t t31 = 1630962963190LLU;

	t31 = ((x2377<<x2378)*(x2379*x2380));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x2589 = 1U;
	uint8_t x2590 = 1U;
	static uint32_t x2592 = 97U;
	static uint32_t t32 = 249486U;

	t32 = ((x2589<<x2590)*(x2591*x2592));

	if (t32 != 4294942464U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x2605 = INT16_MAX;
	static int32_t x2606 = 1;

	t33 = ((x2605<<x2606)*(x2607*x2608));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x2657 = 19393U;
	static volatile uint16_t x2658 = 0U;
	int32_t x2659 = -3524598;
	static int8_t x2660 = INT8_MAX;
	volatile uint32_t t34 = 4U;

	t34 = ((x2657<<x2658)*(x2659*x2660));

	if (t34 != 3652687734U) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x2781 = 3U;
	int16_t x2782 = 1;
	volatile int8_t x2783 = INT8_MAX;
	static int16_t x2784 = -1;
	volatile int32_t t35 = 44729258;

	t35 = ((x2781<<x2782)*(x2783*x2784));

	if (t35 != -762) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x3157 = 118U;
	int16_t x3158 = 1;
	static int32_t x3159 = 15862747;
	static volatile int64_t x3160 = -75639LL;
	int64_t t36 = 33LL;

	t36 = ((x3157<<x3158)*(x3159*x3160));

	if (t36 != -283162787598588LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x3291 = INT8_MAX;
	uint64_t x3292 = 0LLU;
	static volatile uint64_t t37 = 919191LLU;

	t37 = ((x3289<<x3290)*(x3291*x3292));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x3345 = INT16_MAX;
	uint16_t x3346 = 2U;
	static volatile int64_t x3348 = INT64_MIN;

	t38 = ((x3345<<x3346)*(x3347*x3348));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x3389 = UINT8_MAX;
	uint8_t x3390 = 1U;
	int32_t x3391 = INT32_MIN;
	uint32_t x3392 = UINT32_MAX;
	volatile uint32_t t39 = 15U;

	t39 = ((x3389<<x3390)*(x3391*x3392));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x3445 = 174U;
	uint8_t x3446 = 0U;
	uint8_t x3447 = 87U;
	uint16_t x3448 = 29U;

	t40 = ((x3445<<x3446)*(x3447*x3448));

	if (t40 != 439002) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x3609 = INT16_MAX;
	uint8_t x3610 = 3U;
	uint16_t x3611 = 4U;
	static volatile uint64_t t41 = 803917355LLU;

	t41 = ((x3609<<x3610)*(x3611*x3612));

	if (t41 != 9682143519112512LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x3621 = 9631;
	int8_t x3623 = INT8_MIN;
	static uint32_t x3624 = 1646070U;
	volatile uint32_t t42 = 3667U;

	t42 = ((x3621<<x3622)*(x3623*x3624));

	if (t42 != 299251200U) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x3797 = UINT8_MAX;
	static int64_t x3798 = 13LL;
	int64_t x3799 = -1LL;
	int8_t x3800 = 0;
	static volatile int64_t t43 = 47062LL;

	t43 = ((x3797<<x3798)*(x3799*x3800));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x3805 = UINT8_MAX;
	static int8_t x3806 = 0;
	uint32_t x3807 = 39U;
	int16_t x3808 = INT16_MAX;
	volatile uint32_t t44 = 40167U;

	t44 = ((x3805<<x3806)*(x3807*x3808));

	if (t44 != 325867815U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x3821 = 4416U;
	int16_t x3822 = 1;
	static uint32_t x3824 = 110069158U;
	static uint32_t t45 = 0U;

	t45 = ((x3821<<x3822)*(x3823*x3824));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x3925 = 17888LLU;
	uint16_t x3926 = 0U;
	volatile uint64_t t46 = 612098135180LLU;

	t46 = ((x3925<<x3926)*(x3927*x3928));

	if (t46 != 18446742750173855744LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x4034 = 3;
	int16_t x4035 = INT16_MIN;
	static volatile int8_t x4036 = INT8_MIN;
	volatile uint64_t t47 = 387LLU;

	t47 = ((x4033<<x4034)*(x4035*x4036));

	if (t47 != 18446744073675997184LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x4213 = 202;
	uint16_t x4214 = 0U;
	int8_t x4215 = INT8_MIN;
	int8_t x4216 = INT8_MAX;
	int32_t t48 = 5728727;

	t48 = ((x4213<<x4214)*(x4215*x4216));

	if (t48 != -3283712) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x4218 = 30;
	volatile int16_t x4220 = -106;

	t49 = ((x4217<<x4218)*(x4219*x4220));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x4465 = 2878037325LLU;
	volatile int32_t x4467 = -132383;
	static uint8_t x4468 = 9U;
	uint64_t t50 = 2647348502921624LLU;

	t50 = ((x4465<<x4466)*(x4467*x4468));

	if (t50 != 18439886015836033066LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x4562 = 42U;
	int64_t x4563 = -11LL;
	uint8_t x4564 = 60U;
	uint64_t t51 = 1532241LLU;

	t51 = ((x4561<<x4562)*(x4563*x4564));

	if (t51 != 13304882344461598720LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x4565 = 33242553;
	int16_t x4566 = 0;
	volatile uint32_t x4567 = UINT32_MAX;
	uint64_t x4568 = UINT64_MAX;

	t52 = ((x4565<<x4566)*(x4567*x4568));

	if (t52 != 18303968395772247481LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x4625 = 3064U;
	volatile uint64_t t53 = 16491104731LLU;

	t53 = ((x4625<<x4626)*(x4627*x4628));

	if (t53 != 8781518680109295616LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x4690 = 22U;
	uint64_t x4691 = UINT64_MAX;
	int16_t x4692 = INT16_MIN;
	volatile uint64_t t54 = 51658855473444LLU;

	t54 = ((x4689<<x4690)*(x4691*x4692));

	if (t54 != 13082250756168351744LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x4761 = UINT16_MAX;
	volatile uint16_t x4762 = 1U;
	int8_t x4763 = INT8_MAX;

	t55 = ((x4761<<x4762)*(x4763*x4764));

	if (t55 != -520557396520920LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x4858 = 13LLU;
	int32_t x4859 = 583;

	t56 = ((x4857<<x4858)*(x4859*x4860));

	if (t56 != 544768000U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x4945 = 59;
	volatile uint8_t x4946 = 15U;
	volatile int64_t x4948 = -649LL;

	t57 = ((x4945<<x4946)*(x4947*x4948));

	if (t57 != 2694489583306932224LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x4981 = 1480756U;
	uint16_t x4982 = 1U;
	static uint8_t x4983 = 1U;
	volatile int32_t x4984 = INT32_MAX;

	t58 = ((x4981<<x4982)*(x4983*x4984));

	if (t58 != 4292005784U) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x5229 = UINT8_MAX;
	static int8_t x5231 = 12;
	int32_t t59 = -1;

	t59 = ((x5229<<x5230)*(x5231*x5232));

	if (t59 != 200534040) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x5525 = 430LLU;
	int32_t x5526 = 15;
	int64_t x5527 = -180LL;
	volatile uint16_t x5528 = 3234U;

	t60 = ((x5525<<x5526)*(x5527*x5528));

	if (t60 != 18446735871499042816LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x5581 = UINT16_MAX;
	volatile int64_t x5583 = 1LL;
	int32_t x5584 = INT32_MAX;

	t61 = ((x5581<<x5582)*(x5583*x5584));

	if (t61 != 281470681612290LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x5713 = INT8_MAX;
	static int16_t x5714 = 6;
	uint32_t x5715 = 63712U;
	uint32_t x5716 = 104U;
	static uint32_t t62 = 91U;

	t62 = ((x5713<<x5714)*(x5715*x5716));

	if (t62 != 2316910592U) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x5757 = UINT16_MAX;
	int16_t x5758 = 0;
	uint64_t x5759 = 13302697307LLU;
	uint8_t x5760 = 3U;
	static volatile uint64_t t63 = 26170LLU;

	t63 = ((x5757<<x5758)*(x5759*x5760));

	if (t63 != 2615376804042735LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x5773 = 486U;
	int8_t x5774 = 0;
	int8_t x5775 = -1;
	volatile int16_t x5776 = -1;
	volatile int32_t t64 = -246720898;

	t64 = ((x5773<<x5774)*(x5775*x5776));

	if (t64 != 486) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x5846 = 12LLU;
	uint32_t x5847 = UINT32_MAX;
	uint16_t x5848 = 59U;
	uint32_t t65 = 395599U;

	t65 = ((x5845<<x5846)*(x5847*x5848));

	if (t65 != 3958329344U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x5990 = 9;
	static uint16_t x5991 = 4U;
	volatile uint32_t t66 = 58463852U;

	t66 = ((x5989<<x5990)*(x5991*x5992));

	if (t66 != 4294946816U) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x6037 = 0U;
	static uint8_t x6038 = 26U;
	volatile int32_t x6040 = INT32_MAX;
	uint64_t t67 = 1774448970107269LLU;

	t67 = ((x6037<<x6038)*(x6039*x6040));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x6249 = 134968584U;
	uint64_t x6250 = 13LLU;
	uint64_t x6251 = UINT64_MAX;
	int32_t x6252 = -974;

	t68 = ((x6249<<x6250)*(x6251*x6252));

	if (t68 != 1807787884544LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x6385 = 1U;
	uint8_t x6386 = 1U;
	int16_t x6387 = -1;
	uint32_t x6388 = 3U;
	uint32_t t69 = 3128603U;

	t69 = ((x6385<<x6386)*(x6387*x6388));

	if (t69 != 4294967290U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x6406 = 0;
	int16_t x6407 = INT16_MIN;
	uint64_t t70 = 3153215LLU;

	t70 = ((x6405<<x6406)*(x6407*x6408));

	if (t70 != 599808731477966848LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x6540 = INT16_MIN;
	static volatile int32_t t71 = -2985;

	t71 = ((x6537<<x6538)*(x6539*x6540));

	if (t71 != -24969216) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x6786 = 2U;
	int64_t x6787 = -1LL;
	volatile uint8_t x6788 = 111U;
	volatile int64_t t72 = 128114985095770608LL;

	t72 = ((x6785<<x6786)*(x6787*x6788));

	if (t72 != -552336LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x6805 = INT8_MAX;
	uint8_t x6806 = 2U;
	uint16_t x6807 = 0U;
	volatile int32_t t73 = -1;

	t73 = ((x6805<<x6806)*(x6807*x6808));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x6813 = 2U;
	uint16_t x6814 = 1U;
	int16_t x6815 = 54;
	uint64_t x6816 = 22LLU;
	uint64_t t74 = 2342851555750328415LLU;

	t74 = ((x6813<<x6814)*(x6815*x6816));

	if (t74 != 4752LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x6905 = 170569U;
	volatile uint8_t x6906 = 29U;
	uint8_t x6907 = 1U;
	static uint64_t x6908 = 560156430424483682LLU;
	uint64_t t75 = 19796799LLU;

	t75 = ((x6905<<x6906)*(x6907*x6908));

	if (t75 != 14394424615482949632LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x7074 = 10U;
	int32_t x7075 = -1;
	int16_t x7076 = -1;
	volatile uint64_t t76 = 2178862145042931902LLU;

	t76 = ((x7073<<x7074)*(x7075*x7076));

	if (t76 != 3467718894627314688LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x7077 = 198895U;
	volatile uint8_t x7078 = 1U;
	uint16_t x7079 = 3509U;
	int16_t x7080 = INT16_MIN;
	volatile uint32_t t77 = 63101U;

	t77 = ((x7077<<x7078)*(x7079*x7080));

	if (t77 != 2349137920U) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x7093 = UINT64_MAX;
	uint32_t x7094 = 0U;
	int8_t x7095 = INT8_MIN;
	int64_t x7096 = -9345611550LL;
	volatile uint64_t t78 = 5244062299LLU;

	t78 = ((x7093<<x7094)*(x7095*x7096));

	if (t78 != 18446742877471273216LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x7165 = 31U;
	int16_t x7167 = -15;
	int8_t x7168 = -1;
	int32_t t79 = 9012142;

	t79 = ((x7165<<x7166)*(x7167*x7168));

	if (t79 != 975175680) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x7170 = 9U;
	int8_t x7171 = -1;
	int64_t x7172 = -173LL;
	volatile int64_t t80 = -1308246674652535LL;

	t80 = ((x7169<<x7170)*(x7171*x7172));

	if (t80 != 743029253632LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x7390 = 1U;
	uint32_t x7391 = 9U;
	static int32_t x7392 = INT32_MAX;

	t81 = ((x7389<<x7390)*(x7391*x7392));

	if (t81 != 13369723047924376424LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x7482 = 7;
	volatile int8_t x7483 = INT8_MIN;
	static int32_t t82 = -7676435;

	t82 = ((x7481<<x7482)*(x7483*x7484));

	if (t82 != 16384) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x7517 = 0;
	static int16_t x7518 = 5;
	static int16_t x7519 = INT16_MIN;
	volatile uint16_t x7520 = 15U;
	static volatile int32_t t83 = 25048797;

	t83 = ((x7517<<x7518)*(x7519*x7520));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x7657 = 4U;
	volatile uint8_t x7659 = UINT8_MAX;
	static volatile uint8_t x7660 = 48U;
	int32_t t84 = 1141;

	t84 = ((x7657<<x7658)*(x7659*x7660));

	if (t84 != 1566720) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x7749 = UINT8_MAX;
	volatile uint8_t x7750 = 5U;
	static uint8_t x7751 = 107U;

	t85 = ((x7749<<x7750)*(x7751*x7752));

	if (t85 != 1215383040LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x7789 = 0U;
	uint8_t x7790 = 14U;

	t86 = ((x7789<<x7790)*(x7791*x7792));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x7878 = 6;
	uint8_t x7880 = 11U;

	t87 = ((x7877<<x7878)*(x7879*x7880));

	if (t87 != 9288960611846593280LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x7886 = 58U;
	static int8_t x7887 = INT8_MIN;
	uint16_t x7888 = 485U;
	uint64_t t88 = 33513LLU;

	t88 = ((x7885<<x7886)*(x7887*x7888));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x7977 = 55320U;
	volatile int32_t x7979 = 2354;
	static int8_t x7980 = -10;

	t89 = ((x7977<<x7978)*(x7979*x7980));

	if (t89 != 2467039488U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x8049 = 8;
	int8_t x8050 = 2;
	int8_t x8051 = INT8_MIN;
	volatile int32_t x8052 = -1;
	int32_t t90 = -5291;

	t90 = ((x8049<<x8050)*(x8051*x8052));

	if (t90 != 4096) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x8070 = 1;
	int8_t x8071 = INT8_MIN;
	volatile uint32_t t91 = 1U;

	t91 = ((x8069<<x8070)*(x8071*x8072));

	if (t91 != 2919989248U) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x8117 = 85103698369623735LLU;
	volatile uint8_t x8118 = 15U;
	static int64_t x8120 = -31847405431865LL;
	volatile uint64_t t92 = 237977922004LLU;

	t92 = ((x8117<<x8118)*(x8119*x8120));

	if (t92 != 10436188541101768704LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x8322 = 0;
	static uint32_t x8323 = 2728U;
	int16_t x8324 = INT16_MIN;
	uint64_t t93 = 13LLU;

	t93 = ((x8321<<x8322)*(x8323*x8324));

	if (t93 != 18446744069503975424LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x8385 = UINT64_MAX;
	uint8_t x8386 = 5U;
	int32_t x8388 = 263;

	t94 = ((x8385<<x8386)*(x8387*x8388));

	if (t94 != 18446744073708499616LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x8481 = 11U;
	volatile int16_t x8482 = 1;
	int8_t x8483 = INT8_MAX;
	int64_t x8484 = 85128921LL;

	t95 = ((x8481<<x8482)*(x8483*x8484));

	if (t95 != 237850205274LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x8585 = INT8_MAX;
	int8_t x8586 = 1;
	uint64_t x8587 = 179204778418777LLU;
	static uint64_t x8588 = 26337150730743765LLU;
	volatile uint64_t t96 = 12910519LLU;

	t96 = ((x8585<<x8586)*(x8587*x8588));

	if (t96 != 17284666649428276966LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x8661 = 23624;
	static int64_t x8662 = 6LL;
	volatile int64_t x8663 = INT64_MAX;
	static volatile uint64_t t97 = 4770LLU;

	t97 = ((x8661<<x8662)*(x8663*x8664));

	if (t97 != 1511936LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x8774 = 43U;
	static uint32_t x8775 = 602122U;
	int16_t x8776 = INT16_MIN;
	static volatile uint64_t t98 = 3LLU;

	t98 = ((x8773<<x8774)*(x8775*x8776));

	if (t98 != 1152921504606846976LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x8837 = UINT64_MAX;
	uint8_t x8838 = 15U;
	static int16_t x8839 = INT16_MIN;
	int64_t x8840 = -1947280600LL;
	uint64_t t99 = 15883790LLU;

	t99 = ((x8837<<x8838)*(x8839*x8840));

	if (t99 != 16355867450425737216LLU) { NG(); } else { ; }
	
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


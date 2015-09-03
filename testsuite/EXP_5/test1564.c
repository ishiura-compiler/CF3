#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x78 = INT8_MIN;
int32_t x121 = -1;
int16_t x193 = 57;
int16_t x196 = -1;
int8_t x223 = 3;
int64_t t4 = 1513301245LL;
int32_t t5 = 194368;
static int16_t x229 = INT16_MAX;
volatile uint32_t x253 = UINT32_MAX;
int8_t x256 = -1;
uint16_t x341 = UINT16_MAX;
int32_t x342 = INT32_MIN;
volatile uint8_t x344 = 1U;
volatile int32_t t8 = -5304;
int8_t x447 = INT8_MAX;
int8_t x448 = -1;
static uint32_t x595 = UINT32_MAX;
volatile int16_t x724 = -1;
volatile int32_t t12 = -509;
int16_t x795 = INT16_MAX;
int8_t x1108 = -1;
static int64_t x1178 = INT64_MIN;
static uint16_t x1193 = UINT16_MAX;
volatile int32_t t19 = 66233;
int32_t t20 = -65811;
uint32_t x1401 = 7077U;
static int8_t x1404 = -1;
uint32_t t21 = 15U;
int16_t x1517 = -1;
uint16_t x1518 = 756U;
int32_t t22 = -410257;
int64_t x1695 = -1LL;
volatile uint64_t x1806 = 5447485LLU;
int16_t x1808 = -1;
int8_t x2108 = -1;
int32_t x2178 = INT32_MIN;
int16_t x2702 = INT16_MIN;
uint16_t x2703 = UINT16_MAX;
volatile int32_t t39 = 339;
static int8_t x2739 = -1;
int16_t x2788 = 1;
int64_t t44 = -221934591905404216LL;
int16_t x2889 = 0;
static int32_t t48 = -50136853;
int64_t x3153 = INT64_MAX;
volatile int32_t x3155 = INT32_MIN;
static int16_t x3156 = -1;
uint64_t t50 = 199133297072272828LLU;
int16_t x3175 = -1;
int32_t x3336 = -1;
static int64_t t53 = 6LL;
int64_t x3417 = 2917434709966529LL;
volatile int64_t t54 = 2270982845391392921LL;
int16_t x3496 = -1;
int64_t t55 = -10131073479072LL;
int32_t x3531 = -1;
volatile int32_t t57 = -394;
int32_t x3609 = 5038550;
uint16_t x3619 = 1800U;
static int32_t t64 = -1846196;
volatile int32_t x3797 = -1;
int64_t x3845 = INT64_MAX;
volatile int64_t t66 = -53088LL;
int8_t x3886 = -23;
uint32_t t67 = 242U;
int32_t t68 = -7;
static int64_t x3904 = -1LL;
int16_t x4155 = 2674;
volatile int32_t t74 = 19323795;
int16_t x4269 = -2;
int32_t x4271 = 22;
static int64_t x4272 = -1LL;
int16_t x4284 = -1;
volatile int16_t x4299 = 10;
int8_t x4305 = INT8_MIN;
volatile int32_t t79 = 206469;
volatile int64_t x4342 = INT64_MIN;
volatile uint8_t x4365 = 62U;
static int16_t x4405 = -1;
uint16_t x4409 = 10713U;
int32_t x4445 = INT32_MAX;
int64_t x4448 = -1LL;
volatile uint16_t x4481 = 28858U;
int8_t x4482 = INT8_MIN;
volatile int32_t x4557 = INT32_MAX;
int32_t x4559 = INT32_MIN;
volatile int32_t t90 = 89905;
int16_t x4736 = -1;
static int32_t x4980 = -1;
int64_t x5287 = 860068474LL;


void f0(void) {
	int32_t x77 = -1;
	static uint8_t x79 = 0U;
	int8_t x80 = -1;
	volatile int32_t t0 = -3;

	t0 = (x77/((x78<=x79)/x80));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x122 = 0LLU;
	int64_t x123 = INT64_MIN;
	volatile int16_t x124 = 1;
	int32_t t1 = 768718112;

	t1 = (x121/((x122<=x123)/x124));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x189 = INT16_MAX;
	int16_t x190 = -22;
	volatile uint64_t x191 = UINT64_MAX;
	int32_t x192 = -1;
	volatile int32_t t2 = -33803;

	t2 = (x189/((x190<=x191)/x192));

	if (t2 != -32767) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x194 = INT64_MIN;
	static int64_t x195 = -1LL;
	static volatile int32_t t3 = -112018750;

	t3 = (x193/((x194<=x195)/x196));

	if (t3 != -57) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x221 = 11575;
	int8_t x222 = -6;
	int64_t x224 = -1LL;

	t4 = (x221/((x222<=x223)/x224));

	if (t4 != -11575LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x225 = UINT16_MAX;
	int64_t x226 = INT64_MIN;
	volatile int8_t x227 = 43;
	static int8_t x228 = -1;

	t5 = (x225/((x226<=x227)/x228));

	if (t5 != -65535) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x230 = 1U;
	uint8_t x231 = 1U;
	int64_t x232 = -1LL;
	volatile int64_t t6 = -11152LL;

	t6 = (x229/((x230<=x231)/x232));

	if (t6 != -32767LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x254 = -1LL;
	static volatile int64_t x255 = INT64_MAX;
	volatile uint32_t t7 = 226402U;

	t7 = (x253/((x254<=x255)/x256));

	if (t7 != 1U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x343 = 49;

	t8 = (x341/((x342<=x343)/x344));

	if (t8 != 65535) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x445 = INT8_MIN;
	volatile int64_t x446 = INT64_MIN;
	volatile int32_t t9 = -408;

	t9 = (x445/((x446<=x447)/x448));

	if (t9 != 128) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x585 = UINT64_MAX;
	volatile int64_t x586 = 319068248422925491LL;
	int64_t x587 = INT64_MAX;
	int32_t x588 = -1;
	uint64_t t10 = 7LLU;

	t10 = (x585/((x586<=x587)/x588));

	if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x593 = INT16_MAX;
	static int32_t x594 = INT32_MIN;
	int16_t x596 = 1;
	int32_t t11 = -2546;

	t11 = (x593/((x594<=x595)/x596));

	if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x721 = INT16_MIN;
	int64_t x722 = INT64_MIN;
	int32_t x723 = 0;

	t12 = (x721/((x722<=x723)/x724));

	if (t12 != 32768) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x793 = 1496133302596224269LLU;
	static int64_t x794 = -77526984148262483LL;
	int16_t x796 = -1;
	uint64_t t13 = 1259262LLU;

	t13 = (x793/((x794<=x795)/x796));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x885 = -36488;
	int8_t x886 = -3;
	int8_t x887 = -1;
	static int64_t x888 = -1LL;
	volatile int64_t t14 = -10LL;

	t14 = (x885/((x886<=x887)/x888));

	if (t14 != 36488LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x1025 = 4458U;
	int64_t x1026 = -5057202285452LL;
	static int32_t x1027 = -1;
	static int8_t x1028 = -1;
	int32_t t15 = -1081423;

	t15 = (x1025/((x1026<=x1027)/x1028));

	if (t15 != -4458) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x1105 = -148;
	int8_t x1106 = 3;
	int32_t x1107 = 502227;
	int32_t t16 = 2053;

	t16 = (x1105/((x1106<=x1107)/x1108));

	if (t16 != 148) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x1177 = INT8_MIN;
	uint8_t x1179 = UINT8_MAX;
	int8_t x1180 = 1;
	static int32_t t17 = -5;

	t17 = (x1177/((x1178<=x1179)/x1180));

	if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x1194 = INT32_MIN;
	int16_t x1195 = -1;
	int16_t x1196 = -1;
	static volatile int32_t t18 = 4047;

	t18 = (x1193/((x1194<=x1195)/x1196));

	if (t18 != -65535) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x1313 = 2703277;
	static uint32_t x1314 = UINT32_MAX;
	int16_t x1315 = -1;
	int8_t x1316 = -1;

	t19 = (x1313/((x1314<=x1315)/x1316));

	if (t19 != -2703277) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x1389 = -2108;
	int64_t x1390 = INT64_MIN;
	int16_t x1391 = -29;
	int8_t x1392 = -1;

	t20 = (x1389/((x1390<=x1391)/x1392));

	if (t20 != 2108) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x1402 = -1LL;
	static volatile int8_t x1403 = INT8_MAX;

	t21 = (x1401/((x1402<=x1403)/x1404));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x1519 = 15102U;
	int8_t x1520 = -1;

	t22 = (x1517/((x1518<=x1519)/x1520));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x1577 = 59U;
	int16_t x1578 = -5923;
	uint8_t x1579 = UINT8_MAX;
	static int64_t x1580 = -1LL;
	volatile int64_t t23 = 715LL;

	t23 = (x1577/((x1578<=x1579)/x1580));

	if (t23 != -59LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x1693 = 518152262U;
	static int64_t x1694 = INT64_MIN;
	int64_t x1696 = -1LL;
	int64_t t24 = 1LL;

	t24 = (x1693/((x1694<=x1695)/x1696));

	if (t24 != -518152262LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1701 = 7;
	uint8_t x1702 = 7U;
	volatile uint16_t x1703 = UINT16_MAX;
	static int16_t x1704 = -1;
	volatile int32_t t25 = 7715;

	t25 = (x1701/((x1702<=x1703)/x1704));

	if (t25 != -7) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1777 = 7;
	int32_t x1778 = INT32_MIN;
	int8_t x1779 = INT8_MIN;
	volatile int8_t x1780 = -1;
	int32_t t26 = 3;

	t26 = (x1777/((x1778<=x1779)/x1780));

	if (t26 != -7) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x1805 = -1;
	int64_t x1807 = INT64_MIN;
	static volatile int32_t t27 = -266021;

	t27 = (x1805/((x1806<=x1807)/x1808));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1809 = 5U;
	uint32_t x1810 = 3609172U;
	int16_t x1811 = -1;
	int16_t x1812 = -1;
	int32_t t28 = 1997049;

	t28 = (x1809/((x1810<=x1811)/x1812));

	if (t28 != -5) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x2009 = -1;
	int32_t x2010 = 2;
	int8_t x2011 = INT8_MAX;
	static int32_t x2012 = -1;
	int32_t t29 = 60088;

	t29 = (x2009/((x2010<=x2011)/x2012));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x2077 = 5559037U;
	static volatile int16_t x2078 = INT16_MAX;
	uint64_t x2079 = UINT64_MAX;
	uint8_t x2080 = 1U;
	volatile uint32_t t30 = 223214U;

	t30 = (x2077/((x2078<=x2079)/x2080));

	if (t30 != 5559037U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x2105 = INT16_MIN;
	int64_t x2106 = INT64_MIN;
	volatile int16_t x2107 = -7;
	volatile int32_t t31 = -306974;

	t31 = (x2105/((x2106<=x2107)/x2108));

	if (t31 != 32768) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x2177 = 0U;
	static int16_t x2179 = -1;
	int16_t x2180 = -1;
	int32_t t32 = -1;

	t32 = (x2177/((x2178<=x2179)/x2180));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x2377 = 5857247U;
	int8_t x2378 = INT8_MAX;
	volatile int16_t x2379 = 1278;
	int32_t x2380 = -1;
	volatile uint32_t t33 = 922970620U;

	t33 = (x2377/((x2378<=x2379)/x2380));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x2421 = INT64_MAX;
	int32_t x2422 = -15176479;
	int16_t x2423 = -2;
	volatile int64_t x2424 = -1LL;
	int64_t t34 = -332548673LL;

	t34 = (x2421/((x2422<=x2423)/x2424));

	if (t34 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x2489 = UINT32_MAX;
	volatile int32_t x2490 = INT32_MIN;
	int64_t x2491 = -1LL;
	uint8_t x2492 = 1U;
	volatile uint32_t t35 = UINT32_MAX;

	t35 = (x2489/((x2490<=x2491)/x2492));

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x2673 = -7895;
	int64_t x2674 = -978533670739LL;
	int32_t x2675 = -1;
	static int32_t x2676 = -1;
	static int32_t t36 = -91529;

	t36 = (x2673/((x2674<=x2675)/x2676));

	if (t36 != 7895) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x2677 = 3497948;
	uint32_t x2678 = 0U;
	static int64_t x2679 = INT64_MAX;
	int64_t x2680 = -1LL;
	int64_t t37 = -64201550LL;

	t37 = (x2677/((x2678<=x2679)/x2680));

	if (t37 != -3497948LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x2701 = INT8_MAX;
	int32_t x2704 = -1;
	int32_t t38 = 175812555;

	t38 = (x2701/((x2702<=x2703)/x2704));

	if (t38 != -127) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x2725 = -9872;
	static int64_t x2726 = 1695690282LL;
	volatile uint32_t x2727 = UINT32_MAX;
	volatile int16_t x2728 = -1;

	t39 = (x2725/((x2726<=x2727)/x2728));

	if (t39 != 9872) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x2729 = 193U;
	int8_t x2730 = -1;
	int32_t x2731 = INT32_MAX;
	static int64_t x2732 = -1LL;
	volatile int64_t t40 = -1LL;

	t40 = (x2729/((x2730<=x2731)/x2732));

	if (t40 != -193LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2737 = INT16_MAX;
	volatile int16_t x2738 = -1;
	int32_t x2740 = 1;
	volatile int32_t t41 = -57435;

	t41 = (x2737/((x2738<=x2739)/x2740));

	if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x2741 = 39U;
	static int8_t x2742 = INT8_MIN;
	int8_t x2743 = -4;
	int8_t x2744 = -1;
	volatile int32_t t42 = -126;

	t42 = (x2741/((x2742<=x2743)/x2744));

	if (t42 != -39) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x2785 = 725;
	int16_t x2786 = -1;
	int8_t x2787 = -1;
	volatile int32_t t43 = -1466153;

	t43 = (x2785/((x2786<=x2787)/x2788));

	if (t43 != 725) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x2849 = 12;
	int32_t x2850 = -1;
	int16_t x2851 = 218;
	static int64_t x2852 = -1LL;

	t44 = (x2849/((x2850<=x2851)/x2852));

	if (t44 != -12LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x2873 = 12;
	volatile int32_t x2874 = -1;
	uint8_t x2875 = UINT8_MAX;
	volatile int16_t x2876 = -1;
	volatile int32_t t45 = 6054919;

	t45 = (x2873/((x2874<=x2875)/x2876));

	if (t45 != -12) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2890 = -1;
	int16_t x2891 = -1;
	int8_t x2892 = -1;
	volatile int32_t t46 = -1612;

	t46 = (x2889/((x2890<=x2891)/x2892));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2957 = INT16_MIN;
	int64_t x2958 = 1LL;
	volatile uint16_t x2959 = 31U;
	int8_t x2960 = -1;
	int32_t t47 = 0;

	t47 = (x2957/((x2958<=x2959)/x2960));

	if (t47 != 32768) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x3125 = -724357735;
	static uint64_t x3126 = 1825264670782LLU;
	int8_t x3127 = -7;
	int16_t x3128 = -1;

	t48 = (x3125/((x3126<=x3127)/x3128));

	if (t48 != 724357735) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x3154 = 14141336159506530LLU;
	static volatile int64_t t49 = -696323819008813LL;

	t49 = (x3153/((x3154<=x3155)/x3156));

	if (t49 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x3165 = 1549LLU;
	int32_t x3166 = INT32_MIN;
	volatile int32_t x3167 = INT32_MIN;
	static int32_t x3168 = -1;

	t50 = (x3165/((x3166<=x3167)/x3168));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x3173 = 2313;
	static volatile int8_t x3174 = -1;
	static int16_t x3176 = -1;
	volatile int32_t t51 = 24304;

	t51 = (x3173/((x3174<=x3175)/x3176));

	if (t51 != -2313) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x3333 = INT8_MIN;
	static int32_t x3334 = INT32_MIN;
	uint16_t x3335 = 14U;
	static volatile int32_t t52 = 125204233;

	t52 = (x3333/((x3334<=x3335)/x3336));

	if (t52 != 128) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x3349 = INT8_MAX;
	int64_t x3350 = INT64_MIN;
	static int8_t x3351 = 1;
	int64_t x3352 = -1LL;

	t53 = (x3349/((x3350<=x3351)/x3352));

	if (t53 != -127LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x3418 = -8;
	int8_t x3419 = INT8_MAX;
	int32_t x3420 = -1;

	t54 = (x3417/((x3418<=x3419)/x3420));

	if (t54 != -2917434709966529LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x3493 = -1LL;
	int8_t x3494 = 15;
	static int32_t x3495 = INT32_MAX;

	t55 = (x3493/((x3494<=x3495)/x3496));

	if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x3509 = 872491706U;
	int16_t x3510 = -2659;
	static int64_t x3511 = INT64_MAX;
	volatile int16_t x3512 = -1;
	volatile uint32_t t56 = 28190032U;

	t56 = (x3509/((x3510<=x3511)/x3512));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x3529 = INT16_MAX;
	static int8_t x3530 = INT8_MIN;
	static volatile int16_t x3532 = -1;

	t57 = (x3529/((x3530<=x3531)/x3532));

	if (t57 != -32767) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x3610 = 404405489U;
	int64_t x3611 = 394594493063LL;
	static int16_t x3612 = -1;
	volatile int32_t t58 = -3485463;

	t58 = (x3609/((x3610<=x3611)/x3612));

	if (t58 != -5038550) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x3617 = -1LL;
	int8_t x3618 = INT8_MIN;
	int16_t x3620 = -1;
	volatile int64_t t59 = -2435679247910LL;

	t59 = (x3617/((x3618<=x3619)/x3620));

	if (t59 != 1LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x3633 = 0;
	int16_t x3634 = -1;
	uint8_t x3635 = 1U;
	int8_t x3636 = -1;
	int32_t t60 = -475833;

	t60 = (x3633/((x3634<=x3635)/x3636));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x3657 = INT8_MAX;
	int64_t x3658 = -911740567750087LL;
	static int16_t x3659 = -55;
	volatile int64_t x3660 = -1LL;
	static int64_t t61 = -2LL;

	t61 = (x3657/((x3658<=x3659)/x3660));

	if (t61 != -127LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x3677 = INT16_MAX;
	int16_t x3678 = INT16_MIN;
	volatile int16_t x3679 = INT16_MIN;
	int8_t x3680 = 1;
	static int32_t t62 = 2208;

	t62 = (x3677/((x3678<=x3679)/x3680));

	if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x3717 = 0;
	uint32_t x3718 = 1531U;
	int8_t x3719 = -1;
	int64_t x3720 = -1LL;
	int64_t t63 = 357LL;

	t63 = (x3717/((x3718<=x3719)/x3720));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x3721 = INT8_MAX;
	int8_t x3722 = -1;
	int64_t x3723 = INT64_MAX;
	int32_t x3724 = -1;

	t64 = (x3721/((x3722<=x3723)/x3724));

	if (t64 != -127) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x3798 = INT8_MIN;
	volatile int8_t x3799 = INT8_MIN;
	int8_t x3800 = -1;
	int32_t t65 = -12;

	t65 = (x3797/((x3798<=x3799)/x3800));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x3846 = INT16_MIN;
	uint16_t x3847 = 0U;
	static int32_t x3848 = -1;

	t66 = (x3845/((x3846<=x3847)/x3848));

	if (t66 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x3885 = UINT32_MAX;
	int32_t x3887 = 1058018081;
	int8_t x3888 = -1;

	t67 = (x3885/((x3886<=x3887)/x3888));

	if (t67 != 1U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x3893 = 8976;
	int32_t x3894 = INT32_MIN;
	int64_t x3895 = -1LL;
	static int8_t x3896 = -1;

	t68 = (x3893/((x3894<=x3895)/x3896));

	if (t68 != -8976) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x3901 = UINT8_MAX;
	int8_t x3902 = 1;
	int32_t x3903 = INT32_MAX;
	static volatile int64_t t69 = -196LL;

	t69 = (x3901/((x3902<=x3903)/x3904));

	if (t69 != -255LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x3997 = -1;
	static int64_t x3998 = INT64_MIN;
	volatile int8_t x3999 = -12;
	int32_t x4000 = -1;
	int32_t t70 = -401735460;

	t70 = (x3997/((x3998<=x3999)/x4000));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x4029 = INT8_MIN;
	volatile int64_t x4030 = INT64_MIN;
	static uint16_t x4031 = 321U;
	int32_t x4032 = -1;
	volatile int32_t t71 = -1644;

	t71 = (x4029/((x4030<=x4031)/x4032));

	if (t71 != 128) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x4153 = 152681027LLU;
	volatile uint16_t x4154 = 204U;
	int64_t x4156 = -1LL;
	static uint64_t t72 = 97750814128LLU;

	t72 = (x4153/((x4154<=x4155)/x4156));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x4157 = INT16_MIN;
	static int8_t x4158 = -1;
	int32_t x4159 = 289696;
	int64_t x4160 = -1LL;
	volatile int64_t t73 = -123367713045LL;

	t73 = (x4157/((x4158<=x4159)/x4160));

	if (t73 != 32768LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x4237 = INT16_MIN;
	static int8_t x4238 = INT8_MAX;
	static uint64_t x4239 = UINT64_MAX;
	volatile int32_t x4240 = -1;

	t74 = (x4237/((x4238<=x4239)/x4240));

	if (t74 != 32768) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x4270 = -1;
	volatile int64_t t75 = 8053356197LL;

	t75 = (x4269/((x4270<=x4271)/x4272));

	if (t75 != 2LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x4281 = -55;
	int16_t x4282 = INT16_MIN;
	static int32_t x4283 = -1;
	volatile int32_t t76 = 198379337;

	t76 = (x4281/((x4282<=x4283)/x4284));

	if (t76 != 55) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x4293 = INT8_MAX;
	int64_t x4294 = -67200319157597171LL;
	uint32_t x4295 = 21839671U;
	static int16_t x4296 = -1;
	static volatile int32_t t77 = 79250;

	t77 = (x4293/((x4294<=x4295)/x4296));

	if (t77 != -127) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x4297 = -1;
	int32_t x4298 = -827;
	static int16_t x4300 = -1;
	int32_t t78 = 12522528;

	t78 = (x4297/((x4298<=x4299)/x4300));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x4306 = INT32_MIN;
	volatile uint16_t x4307 = UINT16_MAX;
	volatile int16_t x4308 = -1;

	t79 = (x4305/((x4306<=x4307)/x4308));

	if (t79 != 128) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x4317 = -619;
	int8_t x4318 = INT8_MIN;
	int8_t x4319 = 46;
	int8_t x4320 = -1;
	volatile int32_t t80 = 1496468;

	t80 = (x4317/((x4318<=x4319)/x4320));

	if (t80 != 619) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x4341 = -11222LL;
	static uint32_t x4343 = 5057U;
	int8_t x4344 = -1;
	static int64_t t81 = 10345629511LL;

	t81 = (x4341/((x4342<=x4343)/x4344));

	if (t81 != 11222LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x4366 = -45;
	uint8_t x4367 = UINT8_MAX;
	int64_t x4368 = -1LL;
	volatile int64_t t82 = 0LL;

	t82 = (x4365/((x4366<=x4367)/x4368));

	if (t82 != -62LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x4406 = INT16_MIN;
	uint32_t x4407 = UINT32_MAX;
	int32_t x4408 = -1;
	volatile int32_t t83 = 68180;

	t83 = (x4405/((x4406<=x4407)/x4408));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x4410 = 681307341U;
	volatile uint32_t x4411 = UINT32_MAX;
	int64_t x4412 = -1LL;
	int64_t t84 = -392493LL;

	t84 = (x4409/((x4410<=x4411)/x4412));

	if (t84 != -10713LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x4446 = -94460280LL;
	int32_t x4447 = -1;
	volatile int64_t t85 = 1LL;

	t85 = (x4445/((x4446<=x4447)/x4448));

	if (t85 != -2147483647LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x4483 = UINT8_MAX;
	int16_t x4484 = -1;
	static volatile int32_t t86 = 0;

	t86 = (x4481/((x4482<=x4483)/x4484));

	if (t86 != -28858) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x4525 = 14390U;
	int16_t x4526 = -3354;
	int8_t x4527 = INT8_MIN;
	int8_t x4528 = -1;
	static int32_t t87 = 123721355;

	t87 = (x4525/((x4526<=x4527)/x4528));

	if (t87 != -14390) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x4545 = UINT64_MAX;
	static int64_t x4546 = INT64_MIN;
	uint16_t x4547 = 9U;
	uint8_t x4548 = 1U;
	uint64_t t88 = UINT64_MAX;

	t88 = (x4545/((x4546<=x4547)/x4548));

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint32_t x4558 = 11425289U;
	int8_t x4560 = -1;
	int32_t t89 = 1;

	t89 = (x4557/((x4558<=x4559)/x4560));

	if (t89 != -2147483647) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x4597 = INT32_MAX;
	int32_t x4598 = INT32_MIN;
	static int8_t x4599 = -1;
	static volatile int8_t x4600 = -1;

	t90 = (x4597/((x4598<=x4599)/x4600));

	if (t90 != -2147483647) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x4613 = 10U;
	static int32_t x4614 = INT32_MIN;
	static int32_t x4615 = -1;
	int32_t x4616 = 1;
	static volatile int32_t t91 = 20516249;

	t91 = (x4613/((x4614<=x4615)/x4616));

	if (t91 != 10) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x4733 = -34737929541LL;
	volatile int8_t x4734 = INT8_MIN;
	int16_t x4735 = INT16_MAX;
	int64_t t92 = -423925587221LL;

	t92 = (x4733/((x4734<=x4735)/x4736));

	if (t92 != 34737929541LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x4849 = UINT8_MAX;
	int16_t x4850 = INT16_MIN;
	static uint32_t x4851 = UINT32_MAX;
	int64_t x4852 = -1LL;
	int64_t t93 = 928309419697413163LL;

	t93 = (x4849/((x4850<=x4851)/x4852));

	if (t93 != -255LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x4977 = -1;
	static int8_t x4978 = -1;
	volatile uint16_t x4979 = UINT16_MAX;
	volatile int32_t t94 = -406486966;

	t94 = (x4977/((x4978<=x4979)/x4980));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x5037 = -287LL;
	volatile int16_t x5038 = INT16_MIN;
	int8_t x5039 = INT8_MIN;
	volatile int8_t x5040 = -1;
	int64_t t95 = -12213467808024LL;

	t95 = (x5037/((x5038<=x5039)/x5040));

	if (t95 != 287LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x5045 = INT64_MAX;
	int8_t x5046 = INT8_MAX;
	volatile uint32_t x5047 = 1895U;
	int8_t x5048 = -1;
	volatile int64_t t96 = 17720744291383355LL;

	t96 = (x5045/((x5046<=x5047)/x5048));

	if (t96 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x5061 = INT8_MIN;
	int8_t x5062 = INT8_MIN;
	static uint32_t x5063 = UINT32_MAX;
	int8_t x5064 = -1;
	volatile int32_t t97 = 156806439;

	t97 = (x5061/((x5062<=x5063)/x5064));

	if (t97 != 128) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x5077 = -1;
	static int64_t x5078 = -1319LL;
	uint64_t x5079 = UINT64_MAX;
	int32_t x5080 = -1;
	static volatile int32_t t98 = 154803895;

	t98 = (x5077/((x5078<=x5079)/x5080));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x5285 = 1114964144LL;
	int8_t x5286 = INT8_MAX;
	int32_t x5288 = -1;
	static volatile int64_t t99 = -44498224409163LL;

	t99 = (x5285/((x5286<=x5287)/x5288));

	if (t99 != -1114964144LL) { NG(); } else { ; }
	
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


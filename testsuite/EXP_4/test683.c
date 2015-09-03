#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x146 = 13U;
int32_t t0 = -89489202;
volatile int32_t x250 = -1;
uint64_t x411 = UINT64_MAX;
int32_t t2 = 385;
uint16_t x449 = UINT16_MAX;
uint8_t x851 = 1U;
static int16_t x984 = -19;
volatile int32_t t11 = -265;
int32_t t12 = 125318191;
uint16_t x1131 = 14U;
static int32_t t13 = -57732;
int16_t x1205 = INT16_MAX;
uint8_t x1211 = 2U;
static uint8_t x1326 = 2U;
static int32_t t16 = 2;
volatile int32_t x1481 = INT32_MAX;
volatile int32_t t19 = -100086630;
static uint16_t x1587 = 3U;
static uint32_t x1588 = 1217115U;
uint8_t x1591 = 21U;
volatile int32_t t21 = 2489541;
int8_t x1620 = INT8_MIN;
uint16_t x1677 = UINT16_MAX;
int64_t x1680 = INT64_MIN;
int8_t x2007 = 1;
static int32_t x2024 = INT32_MIN;
uint32_t x2105 = UINT32_MAX;
uint32_t x2109 = UINT32_MAX;
volatile int64_t x2265 = 4065792242721955217LL;
static int16_t x2992 = INT16_MIN;
static int32_t t42 = 0;
uint8_t x3093 = 1U;
static uint8_t x3149 = UINT8_MAX;
int64_t t45 = -8240467125319736LL;
int8_t x3437 = 1;
int8_t x3438 = 4;
volatile uint8_t x3447 = 1U;
uint64_t x3545 = 32351774173995773LLU;
volatile uint64_t t49 = 3804755LLU;
volatile int8_t x3612 = -1;
volatile int32_t t50 = 659960782;
volatile uint64_t x3681 = 3602293705184064694LLU;
int16_t x3684 = -1;
int8_t x3826 = -1;
uint32_t x3849 = 32962937U;
volatile uint16_t x3850 = 29U;
int16_t x3852 = INT16_MIN;
int32_t x3897 = INT32_MAX;
uint32_t x3898 = UINT32_MAX;
uint16_t x3900 = UINT16_MAX;
int64_t t58 = 1365421604834LL;
uint32_t x4025 = 2U;
uint32_t x4049 = UINT32_MAX;
volatile uint32_t t60 = 16355542U;
static uint8_t x4086 = 0U;
int16_t x4087 = INT16_MIN;
uint32_t x4101 = 217687U;
volatile int32_t x4103 = -1;
static int8_t x4104 = 3;
uint32_t t62 = 183440922U;
volatile uint32_t t64 = 294940U;
uint64_t x4454 = UINT64_MAX;
uint16_t x4455 = 3U;
static int16_t x4456 = INT16_MAX;
uint8_t x4513 = 4U;
int8_t x4514 = 25;
volatile uint16_t x4530 = 22U;
int16_t x4567 = -1;
uint8_t x4617 = 8U;
int8_t x4722 = 1;
volatile int32_t x4724 = INT32_MAX;
uint32_t x4736 = 37U;
int32_t x5295 = -178;
volatile uint64_t t82 = 227071232LLU;
volatile uint16_t x5501 = UINT16_MAX;
static int8_t x5502 = -3;
static uint16_t x5504 = 101U;
uint16_t x5635 = 1383U;
static int8_t x5886 = 3;
int8_t x6228 = INT8_MAX;
volatile int32_t t94 = -215;
static int32_t t95 = 6390;
volatile uint64_t x6573 = UINT64_MAX;
int32_t x6576 = INT32_MAX;
uint64_t t96 = 11886803531LLU;
uint8_t x6732 = 4U;
int32_t t98 = -54703049;
static volatile int8_t x6779 = 16;


void f0(void) {
	static volatile int16_t x145 = INT16_MAX;
	int8_t x147 = -61;
	int16_t x148 = -1;

	t0 = (x145>>(x146+(x147%x148)));

	if (t0 != 3) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x249 = 22U;
	static int16_t x251 = 23;
	int8_t x252 = INT8_MIN;
	volatile int32_t t1 = 13;

	t1 = (x249>>(x250+(x251%x252)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint8_t x409 = 38U;
	uint16_t x410 = 2U;
	volatile int32_t x412 = -1;

	t2 = (x409>>(x410+(x411%x412)));

	if (t2 != 9) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x450 = 0;
	int16_t x451 = 3;
	volatile uint64_t x452 = 122179LLU;
	volatile int32_t t3 = 2014354;

	t3 = (x449>>(x450+(x451%x452)));

	if (t3 != 8191) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x497 = INT32_MAX;
	static uint8_t x498 = 1U;
	int16_t x499 = -1;
	int64_t x500 = INT64_MIN;
	static int32_t t4 = INT32_MAX;

	t4 = (x497>>(x498+(x499%x500)));

	if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x605 = INT32_MAX;
	int16_t x606 = 0;
	int16_t x607 = INT16_MIN;
	int8_t x608 = -1;
	int32_t t5 = INT32_MAX;

	t5 = (x605>>(x606+(x607%x608)));

	if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x785 = UINT8_MAX;
	static volatile uint16_t x786 = 4U;
	volatile int8_t x787 = INT8_MIN;
	int32_t x788 = -1;
	int32_t t6 = 175;

	t6 = (x785>>(x786+(x787%x788)));

	if (t6 != 15) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x849 = 1207763U;
	int8_t x850 = 14;
	int16_t x852 = INT16_MIN;
	volatile uint32_t t7 = 1447537481U;

	t7 = (x849>>(x850+(x851%x852)));

	if (t7 != 36U) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x865 = 5492;
	int16_t x866 = 14;
	static int8_t x867 = 0;
	uint16_t x868 = 1U;
	int32_t t8 = -6841;

	t8 = (x865>>(x866+(x867%x868)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x937 = 28U;
	uint16_t x938 = 10U;
	static int64_t x939 = INT64_MIN;
	int32_t x940 = INT32_MAX;
	int32_t t9 = 31;

	t9 = (x937>>(x938+(x939%x940)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x953 = UINT32_MAX;
	int32_t x954 = -1;
	volatile int16_t x955 = 1;
	uint16_t x956 = 56U;
	uint32_t t10 = UINT32_MAX;

	t10 = (x953>>(x954+(x955%x956)));

	if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x981 = INT16_MAX;
	int64_t x982 = -1LL;
	uint8_t x983 = 5U;

	t11 = (x981>>(x982+(x983%x984)));

	if (t11 != 2047) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x1081 = UINT16_MAX;
	int16_t x1082 = -1;
	uint8_t x1083 = 28U;
	uint8_t x1084 = UINT8_MAX;

	t12 = (x1081>>(x1082+(x1083%x1084)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x1129 = 0U;
	static uint64_t x1130 = 1LLU;
	int16_t x1132 = INT16_MAX;

	t13 = (x1129>>(x1130+(x1131%x1132)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint8_t x1206 = 26U;
	volatile int8_t x1207 = -1;
	volatile int16_t x1208 = INT16_MIN;
	volatile int32_t t14 = -195209220;

	t14 = (x1205>>(x1206+(x1207%x1208)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x1209 = 10961106435234818LLU;
	int16_t x1210 = -1;
	volatile uint8_t x1212 = UINT8_MAX;
	uint64_t t15 = 1797LLU;

	t15 = (x1209>>(x1210+(x1211%x1212)));

	if (t15 != 5480553217617409LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x1325 = 80U;
	int64_t x1327 = -1LL;
	int32_t x1328 = -1;

	t16 = (x1325>>(x1326+(x1327%x1328)));

	if (t16 != 20) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x1385 = 191409133435LL;
	static uint8_t x1386 = 1U;
	int32_t x1387 = INT32_MAX;
	int8_t x1388 = 25;
	int64_t t17 = 772827241067LL;

	t17 = (x1385>>(x1386+(x1387%x1388)));

	if (t17 != 22817LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x1425 = INT64_MAX;
	uint64_t x1426 = UINT64_MAX;
	uint8_t x1427 = 1U;
	int16_t x1428 = INT16_MAX;
	volatile int64_t t18 = INT64_MAX;

	t18 = (x1425>>(x1426+(x1427%x1428)));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x1482 = 11U;
	int64_t x1483 = -1LL;
	uint64_t x1484 = 123LLU;

	t19 = (x1481>>(x1482+(x1483%x1484)));

	if (t19 != 31) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x1585 = 2101726077188LL;
	int16_t x1586 = -1;
	volatile int64_t t20 = 1445709538135811LL;

	t20 = (x1585>>(x1586+(x1587%x1588)));

	if (t20 != 525431519297LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x1589 = UINT16_MAX;
	uint64_t x1590 = 2LLU;
	int8_t x1592 = 29;

	t21 = (x1589>>(x1590+(x1591%x1592)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x1593 = INT8_MAX;
	uint8_t x1594 = 0U;
	uint8_t x1595 = 1U;
	int32_t x1596 = -1;
	volatile int32_t t22 = -916051;

	t22 = (x1593>>(x1594+(x1595%x1596)));

	if (t22 != 127) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x1617 = 3263U;
	uint64_t x1618 = UINT64_MAX;
	static uint8_t x1619 = 14U;
	uint32_t t23 = 22688157U;

	t23 = (x1617>>(x1618+(x1619%x1620)));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1678 = -1;
	uint16_t x1679 = 8U;
	volatile int32_t t24 = -2093207;

	t24 = (x1677>>(x1678+(x1679%x1680)));

	if (t24 != 511) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x1809 = 16355;
	uint8_t x1810 = 15U;
	volatile int8_t x1811 = -1;
	int16_t x1812 = INT16_MIN;
	int32_t t25 = -2;

	t25 = (x1809>>(x1810+(x1811%x1812)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1941 = 63U;
	int16_t x1942 = 11;
	volatile uint32_t x1943 = UINT32_MAX;
	uint8_t x1944 = 15U;
	volatile int32_t t26 = 0;

	t26 = (x1941>>(x1942+(x1943%x1944)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x2005 = 17U;
	int64_t x2006 = -1LL;
	volatile uint16_t x2008 = 21998U;
	uint32_t t27 = 94135U;

	t27 = (x2005>>(x2006+(x2007%x2008)));

	if (t27 != 17U) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x2021 = 42129723LL;
	static volatile uint8_t x2022 = 12U;
	int64_t x2023 = INT64_MIN;
	int64_t t28 = -8250241933679561LL;

	t28 = (x2021>>(x2022+(x2023%x2024)));

	if (t28 != 10285LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x2041 = 0;
	int64_t x2042 = INT64_MIN;
	int64_t x2043 = INT64_MIN;
	static uint64_t x2044 = UINT64_MAX;
	int32_t t29 = -103;

	t29 = (x2041>>(x2042+(x2043%x2044)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x2106 = 18U;
	int32_t x2107 = -1;
	int32_t x2108 = -1;
	static volatile uint32_t t30 = 62150480U;

	t30 = (x2105>>(x2106+(x2107%x2108)));

	if (t30 != 16383U) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x2110 = -1;
	int32_t x2111 = 1;
	uint64_t x2112 = UINT64_MAX;
	static uint32_t t31 = UINT32_MAX;

	t31 = (x2109>>(x2110+(x2111%x2112)));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x2189 = 108U;
	static uint8_t x2190 = 3U;
	uint8_t x2191 = 1U;
	int32_t x2192 = -56038352;
	volatile int32_t t32 = -7582289;

	t32 = (x2189>>(x2190+(x2191%x2192)));

	if (t32 != 6) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint32_t x2266 = UINT32_MAX;
	static uint8_t x2267 = UINT8_MAX;
	uint16_t x2268 = 34U;
	int64_t t33 = -324LL;

	t33 = (x2265>>(x2266+(x2267%x2268)));

	if (t33 != 62039066203643LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x2377 = 4;
	int8_t x2378 = 1;
	int16_t x2379 = -1;
	int32_t x2380 = INT32_MAX;
	static int32_t t34 = -21203070;

	t34 = (x2377>>(x2378+(x2379%x2380)));

	if (t34 != 4) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x2445 = INT8_MAX;
	static int16_t x2446 = -1;
	int8_t x2447 = 12;
	int32_t x2448 = -1858;
	volatile int32_t t35 = 2706095;

	t35 = (x2445>>(x2446+(x2447%x2448)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x2637 = UINT64_MAX;
	int16_t x2638 = 0;
	volatile int32_t x2639 = 773;
	volatile int64_t x2640 = -1LL;
	volatile uint64_t t36 = UINT64_MAX;

	t36 = (x2637>>(x2638+(x2639%x2640)));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x2789 = 2LLU;
	int8_t x2790 = 4;
	uint64_t x2791 = 113LLU;
	int8_t x2792 = 13;
	volatile uint64_t t37 = 131914996992260LLU;

	t37 = (x2789>>(x2790+(x2791%x2792)));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x2865 = INT8_MAX;
	int16_t x2866 = -1;
	static volatile uint64_t x2867 = UINT64_MAX;
	int64_t x2868 = INT64_MAX;
	int32_t t38 = 5;

	t38 = (x2865>>(x2866+(x2867%x2868)));

	if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x2953 = 12318LLU;
	int8_t x2954 = 0;
	int32_t x2955 = INT32_MIN;
	int32_t x2956 = INT32_MIN;
	volatile uint64_t t39 = 5038805785LLU;

	t39 = (x2953>>(x2954+(x2955%x2956)));

	if (t39 != 12318LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x2973 = 1330U;
	static uint8_t x2974 = 16U;
	int16_t x2975 = 1;
	int8_t x2976 = INT8_MIN;
	volatile int32_t t40 = -30845694;

	t40 = (x2973>>(x2974+(x2975%x2976)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x2989 = UINT32_MAX;
	int8_t x2990 = -1;
	static uint32_t x2991 = 1U;
	static uint32_t t41 = UINT32_MAX;

	t41 = (x2989>>(x2990+(x2991%x2992)));

	if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x3005 = 24;
	uint8_t x3006 = 28U;
	volatile uint32_t x3007 = 0U;
	int64_t x3008 = INT64_MIN;

	t42 = (x3005>>(x3006+(x3007%x3008)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x3094 = UINT64_MAX;
	int32_t x3095 = 8;
	int64_t x3096 = INT64_MAX;
	int32_t t43 = 75642;

	t43 = (x3093>>(x3094+(x3095%x3096)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x3150 = -1;
	static int8_t x3151 = INT8_MAX;
	uint8_t x3152 = 42U;
	volatile int32_t t44 = -84;

	t44 = (x3149>>(x3150+(x3151%x3152)));

	if (t44 != 255) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x3365 = 306LL;
	volatile int8_t x3366 = 7;
	int8_t x3367 = -1;
	int8_t x3368 = 23;

	t45 = (x3365>>(x3366+(x3367%x3368)));

	if (t45 != 4LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x3421 = 0;
	int8_t x3422 = -1;
	static int16_t x3423 = -205;
	uint32_t x3424 = 11U;
	volatile int32_t t46 = -269;

	t46 = (x3421>>(x3422+(x3423%x3424)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x3439 = -1LL;
	int8_t x3440 = INT8_MIN;
	volatile int32_t t47 = -198777;

	t47 = (x3437>>(x3438+(x3439%x3440)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x3445 = INT16_MAX;
	int8_t x3446 = -1;
	static int8_t x3448 = INT8_MIN;
	int32_t t48 = 56161;

	t48 = (x3445>>(x3446+(x3447%x3448)));

	if (t48 != 32767) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x3546 = -1LL;
	int16_t x3547 = 4;
	int32_t x3548 = INT32_MIN;

	t49 = (x3545>>(x3546+(x3547%x3548)));

	if (t49 != 4043971771749471LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x3609 = 0;
	volatile uint64_t x3610 = 8LLU;
	int32_t x3611 = -7129;

	t50 = (x3609>>(x3610+(x3611%x3612)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x3617 = UINT32_MAX;
	uint16_t x3618 = 6U;
	static volatile int32_t x3619 = INT32_MIN;
	int16_t x3620 = 2;
	volatile uint32_t t51 = 2U;

	t51 = (x3617>>(x3618+(x3619%x3620)));

	if (t51 != 67108863U) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int32_t x3682 = 10;
	int8_t x3683 = 6;
	uint64_t t52 = 7169687486748723LLU;

	t52 = (x3681>>(x3682+(x3683%x3684)));

	if (t52 != 3517864946468813LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x3729 = 76U;
	static int32_t x3730 = 1;
	volatile int8_t x3731 = 0;
	uint32_t x3732 = 25365847U;
	int32_t t53 = 52;

	t53 = (x3729>>(x3730+(x3731%x3732)));

	if (t53 != 38) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x3825 = 22846LL;
	uint32_t x3827 = 3141U;
	static volatile uint8_t x3828 = 2U;
	static volatile int64_t t54 = 0LL;

	t54 = (x3825>>(x3826+(x3827%x3828)));

	if (t54 != 22846LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x3833 = 764U;
	volatile int16_t x3834 = -1;
	static volatile uint16_t x3835 = 155U;
	static int16_t x3836 = 21;
	static int32_t t55 = 110045220;

	t55 = (x3833>>(x3834+(x3835%x3836)));

	if (t55 != 5) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x3851 = INT32_MIN;
	uint32_t t56 = 2651568U;

	t56 = (x3849>>(x3850+(x3851%x3852)));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x3899 = 4U;
	int32_t t57 = 98547943;

	t57 = (x3897>>(x3898+(x3899%x3900)));

	if (t57 != 268435455) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x3905 = 119LL;
	volatile uint64_t x3906 = UINT64_MAX;
	uint16_t x3907 = 63U;
	volatile int64_t x3908 = 26623971LL;

	t58 = (x3905>>(x3906+(x3907%x3908)));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x4026 = 0U;
	int16_t x4027 = 71;
	static int16_t x4028 = -1;
	static uint32_t t59 = 0U;

	t59 = (x4025>>(x4026+(x4027%x4028)));

	if (t59 != 2U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x4050 = 2U;
	static int64_t x4051 = -1LL;
	static volatile int16_t x4052 = -1;

	t60 = (x4049>>(x4050+(x4051%x4052)));

	if (t60 != 1073741823U) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x4085 = UINT64_MAX;
	int16_t x4088 = INT16_MIN;
	uint64_t t61 = UINT64_MAX;

	t61 = (x4085>>(x4086+(x4087%x4088)));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x4102 = 17;

	t62 = (x4101>>(x4102+(x4103%x4104)));

	if (t62 != 3U) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x4217 = UINT8_MAX;
	int64_t x4218 = -1LL;
	uint8_t x4219 = 11U;
	int32_t x4220 = 720988;
	int32_t t63 = 1189;

	t63 = (x4217>>(x4218+(x4219%x4220)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x4265 = 8559U;
	uint32_t x4266 = 1U;
	int64_t x4267 = -1LL;
	static volatile int16_t x4268 = 19;

	t64 = (x4265>>(x4266+(x4267%x4268)));

	if (t64 != 8559U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x4269 = 4;
	uint16_t x4270 = 1U;
	static volatile uint16_t x4271 = UINT16_MAX;
	uint8_t x4272 = 22U;
	int32_t t65 = 6;

	t65 = (x4269>>(x4270+(x4271%x4272)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x4281 = 72LLU;
	uint16_t x4282 = 17U;
	int16_t x4283 = INT16_MIN;
	volatile int16_t x4284 = INT16_MIN;
	volatile uint64_t t66 = 993822124313069336LLU;

	t66 = (x4281>>(x4282+(x4283%x4284)));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x4441 = 10915725;
	static uint16_t x4442 = 3U;
	uint8_t x4443 = UINT8_MAX;
	static volatile uint8_t x4444 = 3U;
	volatile int32_t t67 = -3113;

	t67 = (x4441>>(x4442+(x4443%x4444)));

	if (t67 != 1364465) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x4453 = UINT32_MAX;
	volatile uint32_t t68 = 6U;

	t68 = (x4453>>(x4454+(x4455%x4456)));

	if (t68 != 1073741823U) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x4485 = 20663U;
	int32_t x4486 = 7;
	int64_t x4487 = INT64_MIN;
	static volatile int16_t x4488 = -1;
	volatile uint32_t t69 = 321797952U;

	t69 = (x4485>>(x4486+(x4487%x4488)));

	if (t69 != 161U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x4515 = 2;
	static uint32_t x4516 = 1197884U;
	volatile int32_t t70 = 62903895;

	t70 = (x4513>>(x4514+(x4515%x4516)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x4529 = 307824188U;
	int8_t x4531 = -1;
	int8_t x4532 = INT8_MAX;
	static uint32_t t71 = 43U;

	t71 = (x4529>>(x4530+(x4531%x4532)));

	if (t71 != 146U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x4565 = INT8_MAX;
	volatile uint16_t x4566 = 13U;
	uint16_t x4568 = 13445U;
	int32_t t72 = -51710;

	t72 = (x4565>>(x4566+(x4567%x4568)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x4618 = 1U;
	int8_t x4619 = INT8_MAX;
	volatile int32_t x4620 = -1;
	int32_t t73 = 203005832;

	t73 = (x4617>>(x4618+(x4619%x4620)));

	if (t73 != 4) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x4721 = INT32_MAX;
	static uint32_t x4723 = UINT32_MAX;
	int32_t t74 = -5052070;

	t74 = (x4721>>(x4722+(x4723%x4724)));

	if (t74 != 536870911) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x4733 = INT16_MAX;
	static int8_t x4734 = -1;
	uint16_t x4735 = 14718U;
	volatile int32_t t75 = -14096;

	t75 = (x4733>>(x4734+(x4735%x4736)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x4749 = 7U;
	static int64_t x4750 = -1LL;
	uint8_t x4751 = 3U;
	uint64_t x4752 = 204LLU;
	volatile int32_t t76 = -3;

	t76 = (x4749>>(x4750+(x4751%x4752)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x4949 = UINT8_MAX;
	uint16_t x4950 = 26U;
	int64_t x4951 = INT64_MIN;
	int16_t x4952 = INT16_MIN;
	static int32_t t77 = 16;

	t77 = (x4949>>(x4950+(x4951%x4952)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x5129 = 1;
	int8_t x5130 = 23;
	int8_t x5131 = INT8_MIN;
	int8_t x5132 = 15;
	volatile int32_t t78 = 24;

	t78 = (x5129>>(x5130+(x5131%x5132)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x5133 = 2719840750952LL;
	uint16_t x5134 = 2U;
	uint32_t x5135 = 55863U;
	int8_t x5136 = 48;
	int64_t t79 = -3463810301486LL;

	t79 = (x5133>>(x5134+(x5135%x5136)));

	if (t79 != 1LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int64_t x5261 = INT64_MAX;
	static int8_t x5262 = 8;
	int32_t x5263 = -1;
	int8_t x5264 = -52;
	volatile int64_t t80 = -13533053911773LL;

	t80 = (x5261>>(x5262+(x5263%x5264)));

	if (t80 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x5293 = 0;
	int8_t x5294 = 3;
	static volatile int16_t x5296 = 7;
	int32_t t81 = -1622;

	t81 = (x5293>>(x5294+(x5295%x5296)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x5405 = 7339510627LLU;
	uint8_t x5406 = 41U;
	int64_t x5407 = -1LL;
	uint16_t x5408 = UINT16_MAX;

	t82 = (x5405>>(x5406+(x5407%x5408)));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x5489 = 489LLU;
	static uint8_t x5490 = 16U;
	volatile int16_t x5491 = -1;
	int16_t x5492 = -1;
	volatile uint64_t t83 = 66880988296940LLU;

	t83 = (x5489>>(x5490+(x5491%x5492)));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x5503 = 39908U;
	int32_t t84 = 2079610;

	t84 = (x5501>>(x5502+(x5503%x5504)));

	if (t84 != 63) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x5581 = UINT16_MAX;
	int32_t x5582 = 14;
	int64_t x5583 = -1LL;
	int64_t x5584 = 959519521231552LL;
	int32_t t85 = -858181;

	t85 = (x5581>>(x5582+(x5583%x5584)));

	if (t85 != 7) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x5633 = UINT8_MAX;
	static uint8_t x5634 = 0U;
	volatile int32_t x5636 = -1;
	volatile int32_t t86 = 71426;

	t86 = (x5633>>(x5634+(x5635%x5636)));

	if (t86 != 255) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x5885 = UINT16_MAX;
	int64_t x5887 = INT64_MIN;
	volatile int32_t x5888 = INT32_MIN;
	int32_t t87 = 15957;

	t87 = (x5885>>(x5886+(x5887%x5888)));

	if (t87 != 8191) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x6013 = UINT16_MAX;
	uint16_t x6014 = 4U;
	volatile int16_t x6015 = INT16_MIN;
	int8_t x6016 = INT8_MIN;
	static int32_t t88 = 1341619;

	t88 = (x6013>>(x6014+(x6015%x6016)));

	if (t88 != 4095) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x6033 = INT16_MAX;
	uint8_t x6034 = 13U;
	int32_t x6035 = INT32_MIN;
	int8_t x6036 = INT8_MIN;
	volatile int32_t t89 = 622078;

	t89 = (x6033>>(x6034+(x6035%x6036)));

	if (t89 != 3) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x6125 = 1;
	uint16_t x6126 = 3U;
	int32_t x6127 = -1;
	int8_t x6128 = INT8_MAX;
	int32_t t90 = 1;

	t90 = (x6125>>(x6126+(x6127%x6128)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x6209 = 1;
	static volatile uint64_t x6210 = 1LLU;
	static int32_t x6211 = INT32_MIN;
	int16_t x6212 = 512;
	int32_t t91 = -60748;

	t91 = (x6209>>(x6210+(x6211%x6212)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x6225 = 4155147LLU;
	static int32_t x6226 = 1;
	uint64_t x6227 = UINT64_MAX;
	volatile uint64_t t92 = 59872LLU;

	t92 = (x6225>>(x6226+(x6227%x6228)));

	if (t92 != 1038786LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x6257 = 121U;
	static int8_t x6258 = -1;
	int64_t x6259 = INT64_MAX;
	uint32_t x6260 = 310U;
	static int32_t t93 = 1;

	t93 = (x6257>>(x6258+(x6259%x6260)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x6441 = 2;
	int8_t x6442 = 2;
	static int32_t x6443 = 37;
	volatile int16_t x6444 = -6;

	t94 = (x6441>>(x6442+(x6443%x6444)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x6565 = INT32_MAX;
	int32_t x6566 = -1;
	uint32_t x6567 = 704335U;
	static volatile uint8_t x6568 = UINT8_MAX;

	t95 = (x6565>>(x6566+(x6567%x6568)));

	if (t95 != 127) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x6574 = -1;
	int16_t x6575 = 3;

	t96 = (x6573>>(x6574+(x6575%x6576)));

	if (t96 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x6581 = 1;
	uint16_t x6582 = 0U;
	static int16_t x6583 = 1;
	uint32_t x6584 = 82383U;
	int32_t t97 = 1015;

	t97 = (x6581>>(x6582+(x6583%x6584)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x6729 = 1;
	int32_t x6730 = -1;
	volatile int8_t x6731 = 3;

	t98 = (x6729>>(x6730+(x6731%x6732)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x6777 = INT16_MAX;
	static int16_t x6778 = -1;
	static int16_t x6780 = INT16_MIN;
	static int32_t t99 = -4797509;

	t99 = (x6777>>(x6778+(x6779%x6780)));

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


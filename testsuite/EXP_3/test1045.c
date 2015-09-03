#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x148 = 0;
static uint16_t x152 = 18U;
uint32_t x193 = 1827617U;
uint64_t x290 = 16720199058LLU;
uint64_t t3 = 446280296740078LLU;
int64_t t4 = 1136864LL;
uint16_t x397 = UINT16_MAX;
static uint8_t x528 = 0U;
volatile int8_t x732 = 2;
uint16_t x838 = 46U;
static volatile int8_t x840 = 0;
int64_t x876 = 3LL;
int32_t x1278 = INT32_MIN;
int64_t x1279 = INT64_MAX;
int16_t x1511 = INT16_MAX;
int64_t x1742 = -1LL;
uint64_t x1744 = 10LLU;
static volatile int64_t t18 = -37230434419LL;
uint8_t x2280 = 1U;
int16_t x2286 = -1;
int16_t x2409 = INT16_MIN;
int8_t x2410 = 0;
static uint16_t x2763 = UINT16_MAX;
static uint8_t x2764 = 0U;
static volatile int64_t t29 = -68230LL;
int64_t x2874 = 733080LL;
int64_t x2876 = 1LL;
uint8_t x2882 = 41U;
int64_t x2953 = -4892939525311205LL;
volatile int64_t t33 = -4870LL;
uint8_t x3010 = UINT8_MAX;
int32_t x3011 = 1439;
static uint8_t x3115 = UINT8_MAX;
uint64_t x3562 = 21402064880157391LLU;
static volatile uint32_t t41 = 47U;
volatile uint8_t x3850 = 26U;
static uint16_t x3852 = 29U;
static volatile uint64_t x3874 = UINT64_MAX;
uint16_t x4059 = UINT16_MAX;
int64_t t45 = -784056413693514287LL;
volatile uint8_t x4063 = 14U;
volatile int64_t t46 = -19LL;
uint64_t x4280 = 0LLU;
int64_t t47 = -1819293321760LL;
static volatile uint64_t x4407 = 1256216954113LLU;
uint16_t x4411 = 32U;
int8_t x4589 = INT8_MIN;
volatile int8_t x4901 = -6;
int64_t x4902 = -1LL;
uint32_t x5027 = UINT32_MAX;
volatile uint32_t t55 = 44881U;
volatile uint64_t x5139 = UINT64_MAX;
int16_t x5205 = -1;
uint64_t x5206 = UINT64_MAX;
uint8_t x5208 = 0U;
uint8_t x5389 = 0U;
uint64_t x5390 = 14423300LLU;
static volatile int32_t x5392 = 1;
static volatile int32_t x5573 = -3996066;
uint16_t x5770 = 1283U;
uint8_t x5772 = 27U;
volatile int8_t x6165 = -1;
volatile int8_t x6166 = 19;
uint32_t x6332 = 0U;
static volatile int64_t t70 = -88LL;


void f0(void) {
	uint8_t x145 = 21U;
	int16_t x146 = -1;
	uint64_t x147 = UINT64_MAX;
	volatile uint64_t t0 = 5635235980828LLU;

	t0 = ((x145*x146)%(x147>>x148));

	if (t0 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x149 = INT16_MIN;
	int64_t x150 = -1LL;
	uint64_t x151 = 494786060LLU;
	static volatile uint64_t t1 = 3174901596753406258LLU;

	t1 = ((x149*x150)%(x151>>x152));

	if (t1 != 689LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x194 = INT32_MIN;
	int32_t x195 = INT32_MAX;
	uint32_t x196 = 1U;
	volatile uint32_t t2 = 1U;

	t2 = ((x193*x194)%(x195>>x196));

	if (t2 != 2U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x289 = 7636396325282104LL;
	int8_t x291 = INT8_MAX;
	int8_t x292 = 0;

	t3 = ((x289*x290)%(x291>>x292));

	if (t3 != 37LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x353 = UINT32_MAX;
	int64_t x354 = -1LL;
	uint8_t x355 = 3U;
	volatile uint8_t x356 = 0U;

	t4 = ((x353*x354)%(x355>>x356));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x398 = 1LL;
	volatile uint64_t x399 = UINT64_MAX;
	volatile int8_t x400 = 1;
	volatile uint64_t t5 = 1232096LLU;

	t5 = ((x397*x398)%(x399>>x400));

	if (t5 != 65535LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x437 = -1LL;
	static int64_t x438 = INT64_MAX;
	uint32_t x439 = UINT32_MAX;
	volatile uint8_t x440 = 28U;
	volatile int64_t t6 = 2929229380802LL;

	t6 = ((x437*x438)%(x439>>x440));

	if (t6 != -7LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x457 = 1;
	int16_t x458 = -1;
	uint32_t x459 = UINT32_MAX;
	uint16_t x460 = 0U;
	static volatile uint32_t t7 = 1552885U;

	t7 = ((x457*x458)%(x459>>x460));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x525 = INT8_MAX;
	int16_t x526 = INT16_MIN;
	uint8_t x527 = 7U;
	int32_t t8 = -807289941;

	t8 = ((x525*x526)%(x527>>x528));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x533 = -223;
	int16_t x534 = INT16_MIN;
	int64_t x535 = 1722LL;
	uint8_t x536 = 2U;
	static volatile int64_t t9 = -19712115879LL;

	t9 = ((x533*x534)%(x535>>x536));

	if (t9 != 274LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x729 = 15;
	uint64_t x730 = 60435576328LLU;
	int16_t x731 = 231;
	static volatile uint64_t t10 = 3826LLU;

	t10 = ((x729*x730)%(x731>>x732));

	if (t10 != 39LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x737 = 10449;
	static int16_t x738 = 2;
	uint32_t x739 = UINT32_MAX;
	uint8_t x740 = 24U;
	uint32_t t11 = 0U;

	t11 = ((x737*x738)%(x739>>x740));

	if (t11 != 243U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x837 = INT16_MIN;
	static uint32_t x839 = UINT32_MAX;
	volatile uint32_t t12 = 0U;

	t12 = ((x837*x838)%(x839>>x840));

	if (t12 != 4293459968U) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x861 = -13LL;
	volatile int32_t x862 = -71613;
	uint32_t x863 = 36236U;
	static volatile int8_t x864 = 12;
	volatile int64_t t13 = -40752LL;

	t13 = ((x861*x862)%(x863>>x864));

	if (t13 != 1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x873 = -1;
	int32_t x874 = INT32_MAX;
	volatile int8_t x875 = INT8_MAX;
	volatile int32_t t14 = -113543181;

	t14 = ((x873*x874)%(x875>>x876));

	if (t14 != -7) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x1277 = UINT32_MAX;
	volatile int8_t x1280 = 25;
	volatile int64_t t15 = 847LL;

	t15 = ((x1277*x1278)%(x1279>>x1280));

	if (t15 != 2147483648LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x1509 = UINT16_MAX;
	static uint8_t x1510 = UINT8_MAX;
	static uint8_t x1512 = 3U;
	int32_t t16 = 1;

	t16 = ((x1509*x1510)%(x1511>>x1512));

	if (t16 != 3825) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x1721 = -1;
	int8_t x1722 = INT8_MIN;
	uint64_t x1723 = 441267265706816LLU;
	static volatile int32_t x1724 = 1;
	volatile uint64_t t17 = 152153881LLU;

	t17 = ((x1721*x1722)%(x1723>>x1724));

	if (t17 != 128LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x1741 = -138;
	uint32_t x1743 = 31626037U;

	t18 = ((x1741*x1742)%(x1743>>x1744));

	if (t18 != 138LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x1925 = INT32_MAX;
	volatile int32_t x1926 = -1;
	uint32_t x1927 = 77U;
	uint8_t x1928 = 3U;
	uint32_t t19 = 120U;

	t19 = ((x1925*x1926)%(x1927>>x1928));

	if (t19 != 3U) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x1989 = INT16_MIN;
	int8_t x1990 = 6;
	volatile int64_t x1991 = INT64_MAX;
	uint32_t x1992 = 31U;
	volatile int64_t t20 = 553LL;

	t20 = ((x1989*x1990)%(x1991>>x1992));

	if (t20 != -196608LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x2277 = UINT32_MAX;
	static uint32_t x2278 = UINT32_MAX;
	static int8_t x2279 = INT8_MAX;
	volatile uint32_t t21 = 77146U;

	t21 = ((x2277*x2278)%(x2279>>x2280));

	if (t21 != 1U) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x2285 = 1U;
	volatile uint16_t x2287 = UINT16_MAX;
	static int8_t x2288 = 1;
	int32_t t22 = 46;

	t22 = ((x2285*x2286)%(x2287>>x2288));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x2385 = -3028966;
	uint32_t x2386 = UINT32_MAX;
	static int32_t x2387 = 105148225;
	volatile uint16_t x2388 = 0U;
	static uint32_t t23 = 1818237903U;

	t23 = ((x2385*x2386)%(x2387>>x2388));

	if (t23 != 3028966U) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int32_t x2405 = -1;
	uint32_t x2406 = UINT32_MAX;
	uint32_t x2407 = 303U;
	uint16_t x2408 = 7U;
	volatile uint32_t t24 = 313288116U;

	t24 = ((x2405*x2406)%(x2407>>x2408));

	if (t24 != 1U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x2411 = 4740723U;
	volatile uint16_t x2412 = 5U;
	volatile uint32_t t25 = 303778U;

	t25 = ((x2409*x2410)%(x2411>>x2412));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x2525 = -1LL;
	int8_t x2526 = -35;
	volatile int8_t x2527 = 5;
	uint8_t x2528 = 2U;
	int64_t t26 = -145617292LL;

	t26 = ((x2525*x2526)%(x2527>>x2528));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x2617 = 24923LL;
	int32_t x2618 = INT32_MIN;
	int64_t x2619 = INT64_MAX;
	int32_t x2620 = 47;
	volatile int64_t t27 = 205519LL;

	t27 = ((x2617*x2618)%(x2619>>x2620));

	if (t27 != -45229LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x2685 = -1;
	int32_t x2686 = INT32_MAX;
	static volatile int16_t x2687 = INT16_MAX;
	uint32_t x2688 = 8U;
	int32_t t28 = 1;

	t28 = ((x2685*x2686)%(x2687>>x2688));

	if (t28 != -7) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x2761 = 590603U;
	static int64_t x2762 = 160199029459LL;

	t29 = ((x2761*x2762)%(x2763>>x2764));

	if (t29 != 45572LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x2873 = 5U;
	uint64_t x2875 = 61LLU;
	volatile uint64_t t30 = 21227378465LLU;

	t30 = ((x2873*x2874)%(x2875>>x2876));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x2881 = INT8_MIN;
	uint32_t x2883 = 6584403U;
	uint8_t x2884 = 7U;
	static uint32_t t31 = 2009U;

	t31 = ((x2881*x2882)%(x2883>>x2884));

	if (t31 != 30688U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x2949 = -1LL;
	static uint8_t x2950 = 63U;
	int16_t x2951 = 15755;
	uint8_t x2952 = 11U;
	int64_t t32 = 406561LL;

	t32 = ((x2949*x2950)%(x2951>>x2952));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x2954 = INT8_MAX;
	static volatile int16_t x2955 = 3;
	uint8_t x2956 = 0U;

	t33 = ((x2953*x2954)%(x2955>>x2956));

	if (t33 != -2LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x3009 = 9679565U;
	int32_t x3012 = 1;
	uint32_t t34 = 2428U;

	t34 = ((x3009*x3010)%(x3011>>x3012));

	if (t34 != 182U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x3113 = -1;
	int64_t x3114 = 1LL;
	uint8_t x3116 = 6U;
	static volatile int64_t t35 = -383779056LL;

	t35 = ((x3113*x3114)%(x3115>>x3116));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x3129 = INT8_MAX;
	static volatile int8_t x3130 = 1;
	uint32_t x3131 = 97795U;
	volatile uint8_t x3132 = 2U;
	volatile uint32_t t36 = 22U;

	t36 = ((x3129*x3130)%(x3131>>x3132));

	if (t36 != 127U) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x3385 = 26842486;
	volatile int16_t x3386 = -1;
	int32_t x3387 = INT32_MAX;
	volatile int8_t x3388 = 12;
	int32_t t37 = -57545;

	t37 = ((x3385*x3386)%(x3387>>x3388));

	if (t37 != -103849) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x3489 = UINT8_MAX;
	int16_t x3490 = 1640;
	static uint8_t x3491 = UINT8_MAX;
	int16_t x3492 = 1;
	int32_t t38 = -492234;

	t38 = ((x3489*x3490)%(x3491>>x3492));

	if (t38 != 116) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x3557 = -1;
	int8_t x3558 = -2;
	uint16_t x3559 = 1U;
	int8_t x3560 = 0;
	int32_t t39 = -731;

	t39 = ((x3557*x3558)%(x3559>>x3560));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x3561 = INT32_MIN;
	static uint64_t x3563 = 1886790200285968LLU;
	static int16_t x3564 = 0;
	volatile uint64_t t40 = 60LLU;

	t40 = ((x3561*x3562)%(x3563>>x3564));

	if (t40 != 725070750752624LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x3681 = 2U;
	static int8_t x3682 = INT8_MAX;
	uint32_t x3683 = 412316U;
	uint16_t x3684 = 3U;

	t41 = ((x3681*x3682)%(x3683>>x3684));

	if (t41 != 254U) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x3773 = 3960U;
	int8_t x3774 = INT8_MIN;
	volatile int8_t x3775 = INT8_MAX;
	volatile int8_t x3776 = 0;
	int32_t t42 = -33565;

	t42 = ((x3773*x3774)%(x3775>>x3776));

	if (t42 != -23) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x3849 = 1;
	int64_t x3851 = 32362327316LL;
	static int64_t t43 = -12805418311LL;

	t43 = ((x3849*x3850)%(x3851>>x3852));

	if (t43 != 26LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x3873 = INT32_MAX;
	static uint64_t x3875 = 96LLU;
	uint64_t x3876 = 0LLU;
	uint64_t t44 = 58148631759514248LLU;

	t44 = ((x3873*x3874)%(x3875>>x3876));

	if (t44 != 33LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x4057 = UINT16_MAX;
	static int64_t x4058 = -1LL;
	static uint8_t x4060 = 7U;

	t45 = ((x4057*x4058)%(x4059>>x4060));

	if (t45 != -127LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x4061 = INT64_MAX;
	static volatile int16_t x4062 = 0;
	volatile int16_t x4064 = 0;

	t46 = ((x4061*x4062)%(x4063>>x4064));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x4277 = 1965LL;
	static uint8_t x4278 = 2U;
	uint16_t x4279 = 9666U;

	t47 = ((x4277*x4278)%(x4279>>x4280));

	if (t47 != 3930LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x4349 = 8078;
	int32_t x4350 = -1;
	int64_t x4351 = 183479900LL;
	volatile uint8_t x4352 = 1U;
	volatile int64_t t48 = -23LL;

	t48 = ((x4349*x4350)%(x4351>>x4352));

	if (t48 != -8078LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x4405 = UINT8_MAX;
	uint8_t x4406 = 2U;
	uint8_t x4408 = 1U;
	volatile uint64_t t49 = 44310327311LLU;

	t49 = ((x4405*x4406)%(x4407>>x4408));

	if (t49 != 510LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x4409 = INT8_MIN;
	static int32_t x4410 = 3421265;
	static volatile int16_t x4412 = 0;
	volatile int32_t t50 = -1;

	t50 = ((x4409*x4410)%(x4411>>x4412));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x4449 = UINT16_MAX;
	static uint8_t x4450 = UINT8_MAX;
	int32_t x4451 = INT32_MAX;
	static int64_t x4452 = 0LL;
	int32_t t51 = 2194499;

	t51 = ((x4449*x4450)%(x4451>>x4452));

	if (t51 != 16711425) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x4590 = 3;
	uint32_t x4591 = UINT32_MAX;
	uint8_t x4592 = 4U;
	static volatile uint32_t t52 = 46U;

	t52 = ((x4589*x4590)%(x4591>>x4592));

	if (t52 != 268435087U) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x4697 = 513592551LLU;
	uint64_t x4698 = UINT64_MAX;
	uint8_t x4699 = UINT8_MAX;
	volatile uint32_t x4700 = 0U;
	volatile uint64_t t53 = 884823788209LLU;

	t53 = ((x4697*x4698)%(x4699>>x4700));

	if (t53 != 145LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x4903 = UINT8_MAX;
	volatile uint32_t x4904 = 4U;
	int64_t t54 = -17456794699LL;

	t54 = ((x4901*x4902)%(x4903>>x4904));

	if (t54 != 6LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x5025 = INT16_MIN;
	uint32_t x5026 = 11477596U;
	int32_t x5028 = 6;

	t55 = ((x5025*x5026)%(x5027>>x5028));

	if (t55 != 47317019U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x5137 = 2U;
	int8_t x5138 = -1;
	uint32_t x5140 = 1U;
	uint64_t t56 = 118756498337410LLU;

	t56 = ((x5137*x5138)%(x5139>>x5140));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x5207 = 13U;
	uint64_t t57 = 397068687700LLU;

	t57 = ((x5205*x5206)%(x5207>>x5208));

	if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x5305 = UINT64_MAX;
	int32_t x5306 = -3318379;
	static uint16_t x5307 = 17U;
	uint32_t x5308 = 2U;
	uint64_t t58 = 6245444LLU;

	t58 = ((x5305*x5306)%(x5307>>x5308));

	if (t58 != 3LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x5391 = INT8_MAX;
	uint64_t t59 = 12280407789LLU;

	t59 = ((x5389*x5390)%(x5391>>x5392));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x5521 = 11878;
	static uint32_t x5522 = 2U;
	uint64_t x5523 = 178883169202039580LLU;
	uint16_t x5524 = 2U;
	uint64_t t60 = 45973973996754LLU;

	t60 = ((x5521*x5522)%(x5523>>x5524));

	if (t60 != 23756LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x5574 = UINT32_MAX;
	uint32_t x5575 = UINT32_MAX;
	uint32_t x5576 = 0U;
	static uint32_t t61 = 4422U;

	t61 = ((x5573*x5574)%(x5575>>x5576));

	if (t61 != 3996066U) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x5629 = 1;
	int8_t x5630 = 0;
	static uint16_t x5631 = 32615U;
	uint8_t x5632 = 0U;
	int32_t t62 = -20667;

	t62 = ((x5629*x5630)%(x5631>>x5632));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x5665 = 0;
	int8_t x5666 = -1;
	uint8_t x5667 = 29U;
	int8_t x5668 = 2;
	int32_t t63 = -174645;

	t63 = ((x5665*x5666)%(x5667>>x5668));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x5769 = -1LL;
	int32_t x5771 = INT32_MAX;
	static int64_t t64 = 5904653LL;

	t64 = ((x5769*x5770)%(x5771>>x5772));

	if (t64 != -8LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x5797 = INT64_MAX;
	uint64_t x5798 = 43411015142708LLU;
	volatile int64_t x5799 = 2475LL;
	uint8_t x5800 = 3U;
	volatile uint64_t t65 = 14104578LLU;

	t65 = ((x5797*x5798)%(x5799>>x5800));

	if (t65 != 152LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x5909 = -1;
	int8_t x5910 = INT8_MIN;
	int16_t x5911 = INT16_MAX;
	static int8_t x5912 = 1;
	int32_t t66 = -1875362;

	t66 = ((x5909*x5910)%(x5911>>x5912));

	if (t66 != 128) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x5941 = 6LLU;
	volatile int16_t x5942 = INT16_MAX;
	int16_t x5943 = INT16_MAX;
	uint8_t x5944 = 7U;
	uint64_t t67 = 2633851718127LLU;

	t67 = ((x5941*x5942)%(x5943>>x5944));

	if (t67 != 252LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x6167 = INT8_MAX;
	volatile uint8_t x6168 = 1U;
	int32_t t68 = 0;

	t68 = ((x6165*x6166)%(x6167>>x6168));

	if (t68 != -19) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x6225 = 503244815U;
	int8_t x6226 = INT8_MAX;
	volatile int64_t x6227 = 14274528999110937LL;
	int16_t x6228 = 12;
	volatile int64_t t69 = 5LL;

	t69 = ((x6225*x6226)%(x6227>>x6228));

	if (t69 != 3782549361LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x6329 = 400LL;
	int8_t x6330 = -1;
	int8_t x6331 = 13;

	t70 = ((x6329*x6330)%(x6331>>x6332));

	if (t70 != -10LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x6457 = UINT64_MAX;
	int16_t x6458 = -113;
	uint8_t x6459 = 2U;
	uint16_t x6460 = 1U;
	uint64_t t71 = 1150245158786924885LLU;

	t71 = ((x6457*x6458)%(x6459>>x6460));

	if (t71 != 0LLU) { NG(); } else { ; }
	
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


    return 0;
}


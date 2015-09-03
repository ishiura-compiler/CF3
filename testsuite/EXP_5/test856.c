#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x78 = UINT32_MAX;
volatile int32_t x80 = INT32_MIN;
static uint8_t x203 = 3U;
int8_t x306 = INT8_MAX;
volatile int8_t x317 = INT8_MIN;
static uint16_t x318 = 2U;
volatile uint8_t x320 = 5U;
int8_t x353 = INT8_MAX;
volatile uint8_t x543 = 2U;
uint64_t x586 = 13089188LLU;
uint8_t x587 = 20U;
uint64_t t10 = 509088LLU;
int32_t x624 = INT32_MAX;
uint8_t x674 = UINT8_MAX;
int8_t x675 = 12;
static volatile int8_t x777 = 4;
uint8_t x779 = 0U;
uint16_t x787 = 1U;
static uint64_t t19 = 229324650049LLU;
static int8_t x1164 = INT8_MIN;
uint64_t t22 = 5999155757619LLU;
uint32_t x1451 = 10U;
volatile uint8_t x1563 = 1U;
volatile uint64_t t25 = 2167196583233LLU;
uint64_t x1694 = 353378621808173LLU;
volatile uint64_t t27 = 58975993LLU;
int16_t x1725 = INT16_MAX;
volatile int32_t t31 = -37277;
uint8_t x2127 = 1U;
static uint32_t x2331 = 2U;
uint32_t t35 = 15U;
int64_t x2642 = 195LL;
uint64_t x2657 = 16624032892297896LLU;
uint64_t t38 = 1196994863LLU;
uint8_t x2748 = UINT8_MAX;
uint64_t x2858 = 12210552511LLU;
uint64_t t40 = 1666959340LLU;
volatile int16_t x2893 = -1;
uint32_t t44 = 23U;
uint64_t x3382 = UINT64_MAX;
int16_t x3384 = 1;
volatile int16_t x3389 = -104;
volatile uint16_t x3390 = 3U;
uint32_t x3438 = UINT32_MAX;
volatile uint8_t x3574 = UINT8_MAX;
uint64_t t50 = 0LLU;
volatile int32_t t52 = -4188357;
int64_t x3822 = INT64_MAX;
uint32_t x3823 = 0U;
static int64_t x3824 = -1LL;
volatile uint8_t x3827 = 1U;
uint8_t x3870 = 9U;
int64_t x3872 = 217273LL;
volatile int64_t t57 = 3607519385788514LL;
int64_t x3945 = INT64_MAX;
int8_t x3947 = 7;
uint32_t x3948 = UINT32_MAX;
volatile uint64_t x4075 = 0LLU;
volatile int64_t x4076 = INT64_MIN;
int32_t x4194 = 11922;
uint64_t t62 = 1237LLU;
int64_t x4234 = 54848449764521006LL;
volatile int8_t x4235 = 7;
static uint32_t x4257 = 125U;
static uint32_t x4259 = 4U;
int32_t x4260 = INT32_MIN;
volatile int32_t x4516 = INT32_MAX;
volatile uint64_t t65 = 147651961088428LLU;
uint64_t x5054 = UINT64_MAX;
int64_t x5205 = -1047819162LL;
volatile int64_t x5242 = 13828747LL;
volatile int16_t x5244 = INT16_MIN;
int16_t x5341 = -1;
uint64_t x5456 = 73566LLU;
static uint64_t t75 = 128195913LLU;
int64_t x5516 = INT64_MIN;
uint32_t t77 = 185206890U;
static volatile uint64_t t78 = 2607257LLU;
static volatile uint32_t x5763 = 2U;
volatile uint64_t t80 = 6165310379456449LLU;
static int8_t x6002 = 2;
volatile int32_t t81 = 722;
uint8_t x6239 = 3U;
uint32_t x6543 = 12U;
int32_t x6585 = 94457538;
volatile int8_t x6587 = 3;
int16_t x6750 = 1;
int64_t t89 = 1LL;
int16_t x6781 = INT16_MIN;
uint8_t x6783 = 2U;
static volatile int16_t x6806 = INT16_MAX;
static volatile uint64_t t93 = 6LLU;
static int64_t x7053 = INT64_MAX;
int64_t x7061 = -1LL;
int32_t x7113 = 30;
static int16_t x7199 = 13;
int16_t x7200 = -1;


void f0(void) {
	int64_t x53 = INT64_MAX;
	uint64_t x54 = 34LLU;
	uint8_t x55 = 5U;
	int64_t x56 = 392159473814276712LL;
	volatile uint64_t t0 = 23836666906003010LLU;

	t0 = (x53&((x54<<x55)+x56));

	if (t0 != 392159473814277800LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x77 = 3867U;
	uint8_t x79 = 8U;
	uint32_t t1 = 1U;

	t1 = (x77&((x78<<x79)+x80));

	if (t1 != 3840U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x125 = 116697LLU;
	uint16_t x126 = 0U;
	uint8_t x127 = 1U;
	static uint64_t x128 = 67545093166377LLU;
	static volatile uint64_t t2 = 3LLU;

	t2 = (x125&((x126<<x127)+x128));

	if (t2 != 50441LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x201 = INT64_MAX;
	uint64_t x202 = UINT64_MAX;
	static volatile int8_t x204 = INT8_MAX;
	uint64_t t3 = 3113893237LLU;

	t3 = (x201&((x202<<x203)+x204));

	if (t3 != 119LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x217 = INT8_MIN;
	static uint64_t x218 = 148379LLU;
	volatile uint8_t x219 = 30U;
	int16_t x220 = INT16_MAX;
	volatile uint64_t t4 = 170572LLU;

	t4 = (x217&((x218<<x219)+x220));

	if (t4 != 159320738135936LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x305 = 30201343U;
	int16_t x307 = 7;
	static volatile int16_t x308 = -6219;
	uint32_t t5 = 8906102U;

	t5 = (x305&((x306<<x307)+x308));

	if (t5 != 1333U) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x319 = 24LLU;
	int32_t t6 = 218067116;

	t6 = (x317&((x318<<x319)+x320));

	if (t6 != 33554432) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x354 = 3U;
	uint8_t x355 = 1U;
	int32_t x356 = INT32_MIN;
	int32_t t7 = 4586;

	t7 = (x353&((x354<<x355)+x356));

	if (t7 != 6) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x537 = INT32_MIN;
	static volatile uint16_t x538 = UINT16_MAX;
	static int8_t x539 = 0;
	int8_t x540 = -9;
	volatile int32_t t8 = -1;

	t8 = (x537&((x538<<x539)+x540));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x541 = INT16_MIN;
	static volatile int8_t x542 = 46;
	static volatile int32_t x544 = 38973;
	volatile int32_t t9 = 624070528;

	t9 = (x541&((x542<<x543)+x544));

	if (t9 != 32768) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x585 = 982LLU;
	int64_t x588 = INT64_MIN;

	t10 = (x585&((x586<<x587)+x588));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x621 = INT32_MAX;
	uint64_t x622 = UINT64_MAX;
	uint8_t x623 = 4U;
	static volatile uint64_t t11 = 1640LLU;

	t11 = (x621&((x622<<x623)+x624));

	if (t11 != 2147483631LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x661 = UINT64_MAX;
	uint32_t x662 = 23U;
	uint16_t x663 = 30U;
	static int32_t x664 = INT32_MAX;
	uint64_t t12 = 102261505593LLU;

	t12 = (x661&((x662<<x663)+x664));

	if (t12 != 1073741823LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x673 = 17781U;
	uint64_t x676 = UINT64_MAX;
	uint64_t t13 = 0LLU;

	t13 = (x673&((x674<<x675)+x676));

	if (t13 != 17781LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x749 = 2U;
	static int16_t x750 = 2;
	uint16_t x751 = 3U;
	uint32_t x752 = 14U;
	static uint32_t t14 = 866995U;

	t14 = (x749&((x750<<x751)+x752));

	if (t14 != 2U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x757 = -1;
	static uint8_t x758 = UINT8_MAX;
	uint16_t x759 = 2U;
	volatile int8_t x760 = INT8_MIN;
	int32_t t15 = -30960663;

	t15 = (x757&((x758<<x759)+x760));

	if (t15 != 892) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint8_t x778 = 81U;
	int8_t x780 = 2;
	int32_t t16 = -819;

	t16 = (x777&((x778<<x779)+x780));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x785 = 6818U;
	uint8_t x786 = UINT8_MAX;
	int32_t x788 = INT32_MIN;
	volatile int32_t t17 = 24804091;

	t17 = (x785&((x786<<x787)+x788));

	if (t17 != 162) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x933 = -1;
	volatile int16_t x934 = INT16_MAX;
	int16_t x935 = 0;
	volatile int32_t x936 = INT32_MIN;
	int32_t t18 = 26109986;

	t18 = (x933&((x934<<x935)+x936));

	if (t18 != -2147450881) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1025 = UINT64_MAX;
	int64_t x1026 = 11LL;
	int16_t x1027 = 0;
	int16_t x1028 = INT16_MIN;

	t19 = (x1025&((x1026<<x1027)+x1028));

	if (t19 != 18446744073709518859LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint8_t x1149 = 14U;
	uint32_t x1150 = 424509U;
	uint16_t x1151 = 3U;
	uint32_t x1152 = 632830U;
	volatile uint32_t t20 = 457659U;

	t20 = (x1149&((x1150<<x1151)+x1152));

	if (t20 != 6U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1161 = 4;
	uint8_t x1162 = 25U;
	uint32_t x1163 = 15U;
	static volatile int32_t t21 = -214;

	t21 = (x1161&((x1162<<x1163)+x1164));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x1325 = 1853623088054641LLU;
	volatile int8_t x1326 = INT8_MAX;
	int16_t x1327 = 3;
	int64_t x1328 = 2386321536LL;

	t22 = (x1325&((x1326<<x1327)+x1328));

	if (t22 != 3407984LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1329 = INT16_MIN;
	int16_t x1330 = INT16_MAX;
	uint64_t x1331 = 13LLU;
	volatile int8_t x1332 = INT8_MAX;
	static int32_t t23 = -155140;

	t23 = (x1329&((x1330<<x1331)+x1332));

	if (t23 != 268402688) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x1449 = 1799411U;
	uint64_t x1450 = UINT64_MAX;
	static int64_t x1452 = -1LL;
	static volatile uint64_t t24 = 11160919LLU;

	t24 = (x1449&((x1450<<x1451)+x1452));

	if (t24 != 1798387LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x1561 = 7227623486787138558LLU;
	static int8_t x1562 = INT8_MAX;
	static int32_t x1564 = 61;

	t25 = (x1561&((x1562<<x1563)+x1564));

	if (t25 != 314LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x1633 = -414;
	uint32_t x1634 = UINT32_MAX;
	static uint16_t x1635 = 2U;
	int32_t x1636 = INT32_MAX;
	uint32_t t26 = 31U;

	t26 = (x1633&((x1634<<x1635)+x1636));

	if (t26 != 2147483234U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1693 = INT16_MIN;
	uint8_t x1695 = 3U;
	volatile int32_t x1696 = INT32_MIN;

	t27 = (x1693&((x1694<<x1695)+x1696));

	if (t27 != 2827026826952704LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x1726 = 11244;
	volatile uint8_t x1727 = 2U;
	int32_t x1728 = INT32_MIN;
	volatile int32_t t28 = 0;

	t28 = (x1725&((x1726<<x1727)+x1728));

	if (t28 != 12208) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1961 = 0;
	uint32_t x1962 = 1270190U;
	uint16_t x1963 = 0U;
	int8_t x1964 = INT8_MIN;
	uint32_t t29 = 13U;

	t29 = (x1961&((x1962<<x1963)+x1964));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x1993 = 29177472U;
	static volatile uint8_t x1994 = 18U;
	volatile int16_t x1995 = 13;
	uint8_t x1996 = 50U;
	uint32_t t30 = 6899U;

	t30 = (x1993&((x1994<<x1995)+x1996));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x2061 = 145U;
	uint16_t x2062 = 37U;
	uint16_t x2063 = 0U;
	int16_t x2064 = INT16_MIN;

	t31 = (x2061&((x2062<<x2063)+x2064));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x2093 = INT32_MAX;
	volatile uint8_t x2094 = UINT8_MAX;
	uint16_t x2095 = 3U;
	int64_t x2096 = -1LL;
	volatile int64_t t32 = -896063700980118LL;

	t32 = (x2093&((x2094<<x2095)+x2096));

	if (t32 != 2039LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x2125 = -1;
	int16_t x2126 = INT16_MAX;
	int64_t x2128 = INT64_MIN;
	static volatile int64_t t33 = 486LL;

	t33 = (x2125&((x2126<<x2127)+x2128));

	if (t33 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x2221 = 21089217U;
	volatile uint16_t x2222 = UINT16_MAX;
	volatile int8_t x2223 = 13;
	uint16_t x2224 = UINT16_MAX;
	uint32_t t34 = 785597896U;

	t34 = (x2221&((x2222<<x2223)+x2224));

	if (t34 != 52161U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x2329 = INT32_MIN;
	uint8_t x2330 = 6U;
	volatile uint32_t x2332 = UINT32_MAX;

	t35 = (x2329&((x2330<<x2331)+x2332));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x2429 = 11176;
	static int16_t x2430 = 0;
	int8_t x2431 = 31;
	uint16_t x2432 = 1199U;
	int32_t t36 = 6;

	t36 = (x2429&((x2430<<x2431)+x2432));

	if (t36 != 168) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x2641 = INT8_MAX;
	uint8_t x2643 = 3U;
	volatile int64_t x2644 = 3691676502450306LL;
	volatile int64_t t37 = -538LL;

	t37 = (x2641&((x2642<<x2643)+x2644));

	if (t37 != 26LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x2658 = 2408891;
	uint8_t x2659 = 7U;
	uint64_t x2660 = 3359587LLU;

	t38 = (x2657&((x2658<<x2659)+x2660));

	if (t38 != 33824928LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x2745 = 9450U;
	uint32_t x2746 = 1774005985U;
	int8_t x2747 = 1;
	uint32_t t39 = 1212U;

	t39 = (x2745&((x2746<<x2747)+x2748));

	if (t39 != 1216U) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x2857 = -1;
	uint64_t x2859 = 3LLU;
	static uint8_t x2860 = 9U;

	t40 = (x2857&((x2858<<x2859)+x2860));

	if (t40 != 97684420097LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x2894 = UINT64_MAX;
	volatile int16_t x2895 = 10;
	int64_t x2896 = -4365637477363006LL;
	static uint64_t t41 = 115950021792LLU;

	t41 = (x2893&((x2894<<x2895)+x2896));

	if (t41 != 18442378436232187586LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x2921 = INT32_MAX;
	uint32_t x2922 = 382146299U;
	volatile int8_t x2923 = 0;
	int64_t x2924 = INT64_MIN;
	int64_t t42 = 26958937LL;

	t42 = (x2921&((x2922<<x2923)+x2924));

	if (t42 != 382146299LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x2937 = 0U;
	uint64_t x2938 = 1183129193LLU;
	static volatile int16_t x2939 = 17;
	int64_t x2940 = -1LL;
	static volatile uint64_t t43 = 152LLU;

	t43 = (x2937&((x2938<<x2939)+x2940));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x3041 = 0;
	uint32_t x3042 = 9213U;
	uint32_t x3043 = 10U;
	int8_t x3044 = INT8_MAX;

	t44 = (x3041&((x3042<<x3043)+x3044));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x3381 = INT64_MAX;
	uint64_t x3383 = 1LLU;
	uint64_t t45 = 3403229643689457694LLU;

	t45 = (x3381&((x3382<<x3383)+x3384));

	if (t45 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x3391 = 0U;
	int32_t x3392 = 92;
	int32_t t46 = 77530497;

	t46 = (x3389&((x3390<<x3391)+x3392));

	if (t46 != 24) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x3437 = -103828433500LL;
	volatile int8_t x3439 = 14;
	int16_t x3440 = INT16_MIN;
	volatile int64_t t47 = -217LL;

	t47 = (x3437&((x3438<<x3439)+x3440));

	if (t47 != 3545710592LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x3453 = 31325U;
	uint16_t x3454 = 15U;
	volatile uint16_t x3455 = 6U;
	int32_t x3456 = -1;
	static volatile uint32_t t48 = 1448312U;

	t48 = (x3453&((x3454<<x3455)+x3456));

	if (t48 != 541U) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x3573 = -1;
	int8_t x3575 = 5;
	int16_t x3576 = INT16_MIN;
	int32_t t49 = -13935333;

	t49 = (x3573&((x3574<<x3575)+x3576));

	if (t49 != -24608) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x3597 = -914;
	uint64_t x3598 = 7145846838113LLU;
	static uint8_t x3599 = 12U;
	volatile uint16_t x3600 = 112U;

	t50 = (x3597&((x3598<<x3599)+x3600));

	if (t50 != 29269388648910944LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x3693 = INT16_MIN;
	uint8_t x3694 = 0U;
	int8_t x3695 = 4;
	int64_t x3696 = 323352584034LL;
	volatile int64_t t51 = -633295901899980LL;

	t51 = (x3693&((x3694<<x3695)+x3696));

	if (t51 != 323352559616LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x3797 = 0U;
	int32_t x3798 = 18117565;
	volatile uint8_t x3799 = 0U;
	uint16_t x3800 = UINT16_MAX;

	t52 = (x3797&((x3798<<x3799)+x3800));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x3809 = INT64_MAX;
	static uint16_t x3810 = UINT16_MAX;
	int8_t x3811 = 7;
	uint16_t x3812 = UINT16_MAX;
	static int64_t t53 = -9101LL;

	t53 = (x3809&((x3810<<x3811)+x3812));

	if (t53 != 8454015LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x3821 = -3418;
	int64_t t54 = -4203946LL;

	t54 = (x3821&((x3822<<x3823)+x3824));

	if (t54 != 9223372036854772390LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x3825 = INT8_MIN;
	static int8_t x3826 = 1;
	int8_t x3828 = -13;
	static volatile int32_t t55 = -10454;

	t55 = (x3825&((x3826<<x3827)+x3828));

	if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x3829 = -6659;
	static int8_t x3830 = 26;
	int16_t x3831 = 7;
	static volatile int8_t x3832 = INT8_MIN;
	volatile int32_t t56 = -13254590;

	t56 = (x3829&((x3830<<x3831)+x3832));

	if (t56 != 1152) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x3869 = INT8_MIN;
	uint64_t x3871 = 1LLU;

	t57 = (x3869&((x3870<<x3871)+x3872));

	if (t57 != 217216LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x3946 = 22U;
	int64_t t58 = 56678793482LL;

	t58 = (x3945&((x3946<<x3947)+x3948));

	if (t58 != 2815LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x4037 = INT64_MIN;
	static uint32_t x4038 = 21U;
	static volatile uint16_t x4039 = 7U;
	static uint8_t x4040 = UINT8_MAX;
	volatile int64_t t59 = -368307LL;

	t59 = (x4037&((x4038<<x4039)+x4040));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x4073 = -2916;
	int16_t x4074 = 4278;
	int64_t t60 = 1739029900431220969LL;

	t60 = (x4073&((x4074<<x4075)+x4076));

	if (t60 != -9223372036854771564LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x4193 = INT64_MIN;
	uint8_t x4195 = 2U;
	int8_t x4196 = 0;
	int64_t t61 = 58458LL;

	t61 = (x4193&((x4194<<x4195)+x4196));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x4205 = INT16_MAX;
	static int64_t x4206 = 902501807410409525LL;
	static volatile uint16_t x4207 = 3U;
	volatile uint64_t x4208 = 1623775934491LLU;

	t62 = (x4205&((x4206<<x4207)+x4208));

	if (t62 != 31171LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x4233 = -2;
	uint8_t x4236 = 15U;
	volatile int64_t t63 = -125278409LL;

	t63 = (x4233&((x4234<<x4235)+x4236));

	if (t63 != 7020601569858688782LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x4258 = INT8_MAX;
	uint32_t t64 = 330049841U;

	t64 = (x4257&((x4258<<x4259)+x4260));

	if (t64 != 112U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x4513 = 19424684731LLU;
	uint32_t x4514 = UINT32_MAX;
	int16_t x4515 = 7;

	t65 = (x4513&((x4514<<x4515)+x4516));

	if (t65 != 97331771LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x4793 = UINT8_MAX;
	int8_t x4794 = INT8_MAX;
	uint8_t x4795 = 9U;
	volatile int8_t x4796 = -21;
	volatile int32_t t66 = 391242114;

	t66 = (x4793&((x4794<<x4795)+x4796));

	if (t66 != 235) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x4817 = -1;
	static int8_t x4818 = 23;
	static int16_t x4819 = 4;
	int16_t x4820 = INT16_MIN;
	volatile int32_t t67 = -426;

	t67 = (x4817&((x4818<<x4819)+x4820));

	if (t67 != -32400) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x5053 = UINT32_MAX;
	static volatile uint8_t x5055 = 28U;
	int64_t x5056 = INT64_MAX;
	uint64_t t68 = 922353452666LLU;

	t68 = (x5053&((x5054<<x5055)+x5056));

	if (t68 != 4026531839LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x5206 = 0U;
	uint16_t x5207 = 0U;
	int16_t x5208 = -1;
	static volatile int64_t t69 = -140312594362641LL;

	t69 = (x5205&((x5206<<x5207)+x5208));

	if (t69 != -1047819162LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x5241 = 1U;
	volatile uint8_t x5243 = 5U;
	static int64_t t70 = -6LL;

	t70 = (x5241&((x5242<<x5243)+x5244));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x5261 = INT64_MIN;
	uint32_t x5262 = 4242089U;
	volatile uint8_t x5263 = 17U;
	int32_t x5264 = INT32_MIN;
	int64_t t71 = -11330LL;

	t71 = (x5261&((x5262<<x5263)+x5264));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x5342 = 66U;
	static int64_t x5343 = 1LL;
	int64_t x5344 = 59200002462298266LL;
	int64_t t72 = -952904701751034061LL;

	t72 = (x5341&((x5342<<x5343)+x5344));

	if (t72 != 59200002462298398LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x5409 = INT16_MIN;
	uint32_t x5410 = 130659U;
	int16_t x5411 = 3;
	uint32_t x5412 = UINT32_MAX;
	uint32_t t73 = 0U;

	t73 = (x5409&((x5410<<x5411)+x5412));

	if (t73 != 1015808U) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x5425 = INT8_MAX;
	uint32_t x5426 = 598U;
	uint16_t x5427 = 4U;
	uint8_t x5428 = 93U;
	volatile uint32_t t74 = 288U;

	t74 = (x5425&((x5426<<x5427)+x5428));

	if (t74 != 61U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x5453 = 0;
	uint64_t x5454 = 57787LLU;
	uint64_t x5455 = 2LLU;

	t75 = (x5453&((x5454<<x5455)+x5456));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x5513 = UINT64_MAX;
	static int16_t x5514 = INT16_MAX;
	volatile int8_t x5515 = 2;
	volatile uint64_t t76 = 132263210097LLU;

	t76 = (x5513&((x5514<<x5515)+x5516));

	if (t76 != 9223372036854906876LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x5585 = 467U;
	uint32_t x5586 = 0U;
	volatile uint16_t x5587 = 29U;
	uint32_t x5588 = 4484U;

	t77 = (x5585&((x5586<<x5587)+x5588));

	if (t77 != 384U) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x5753 = 205U;
	uint64_t x5754 = 1488151387757099LLU;
	uint8_t x5755 = 1U;
	int64_t x5756 = -1LL;

	t78 = (x5753&((x5754<<x5755)+x5756));

	if (t78 != 69LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x5761 = -31035939;
	uint64_t x5762 = 1104054434440550784LLU;
	int8_t x5764 = 19;
	volatile uint64_t t79 = 1917LLU;

	t79 = (x5761&((x5762<<x5763)+x5764));

	if (t79 != 4416217737760629777LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x5765 = UINT64_MAX;
	uint8_t x5766 = 0U;
	uint8_t x5767 = 14U;
	int8_t x5768 = 15;

	t80 = (x5765&((x5766<<x5767)+x5768));

	if (t80 != 15LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x6001 = 111074;
	int8_t x6003 = 5;
	volatile int32_t x6004 = -1;

	t81 = (x6001&((x6002<<x6003)+x6004));

	if (t81 != 34) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x6005 = -1;
	volatile uint32_t x6006 = UINT32_MAX;
	static volatile int8_t x6007 = 13;
	int32_t x6008 = INT32_MIN;
	uint32_t t82 = 472U;

	t82 = (x6005&((x6006<<x6007)+x6008));

	if (t82 != 2147475456U) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x6237 = 4689391154087684LL;
	volatile uint16_t x6238 = 2862U;
	static volatile int16_t x6240 = INT16_MAX;
	static int64_t t83 = -67697388116LL;

	t83 = (x6237&((x6238<<x6239)+x6240));

	if (t83 != 49412LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x6301 = INT64_MAX;
	uint32_t x6302 = 0U;
	uint8_t x6303 = 31U;
	static uint16_t x6304 = 248U;
	static int64_t t84 = 7171535248688LL;

	t84 = (x6301&((x6302<<x6303)+x6304));

	if (t84 != 248LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x6541 = 1174LLU;
	uint16_t x6542 = 27U;
	int16_t x6544 = -1012;
	volatile uint64_t t85 = 4457271LLU;

	t85 = (x6541&((x6542<<x6543)+x6544));

	if (t85 != 1028LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x6553 = 6691U;
	static volatile uint32_t x6554 = 190U;
	int8_t x6555 = 2;
	uint64_t x6556 = 1LLU;
	uint64_t t86 = 34905431815LLU;

	t86 = (x6553&((x6554<<x6555)+x6556));

	if (t86 != 545LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x6569 = INT64_MIN;
	uint64_t x6570 = 6770666037LLU;
	int16_t x6571 = 5;
	int8_t x6572 = -1;
	uint64_t t87 = 0LLU;

	t87 = (x6569&((x6570<<x6571)+x6572));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x6586 = 26141676895321LLU;
	int16_t x6588 = INT16_MIN;
	static uint64_t t88 = 632LLU;

	t88 = (x6585&((x6586<<x6587)+x6588));

	if (t88 != 10568384LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x6749 = INT8_MIN;
	int64_t x6751 = 0LL;
	int64_t x6752 = -16LL;

	t89 = (x6749&((x6750<<x6751)+x6752));

	if (t89 != -128LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint16_t x6782 = 7967U;
	int8_t x6784 = -1;
	volatile int32_t t90 = -1;

	t90 = (x6781&((x6782<<x6783)+x6784));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x6805 = 3677LLU;
	int8_t x6807 = 0;
	uint16_t x6808 = 3U;
	volatile uint64_t t91 = 129967033702725883LLU;

	t91 = (x6805&((x6806<<x6807)+x6808));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x6825 = 808119U;
	volatile uint32_t x6826 = 42U;
	uint16_t x6827 = 21U;
	int8_t x6828 = INT8_MIN;
	static volatile uint32_t t92 = 3U;

	t92 = (x6825&((x6826<<x6827)+x6828));

	if (t92 != 808064U) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x6929 = 2U;
	uint64_t x6930 = 757771455702720LLU;
	volatile uint32_t x6931 = 1U;
	volatile uint16_t x6932 = UINT16_MAX;

	t93 = (x6929&((x6930<<x6931)+x6932));

	if (t93 != 2LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x6997 = UINT16_MAX;
	int32_t x6998 = 1;
	uint8_t x6999 = 1U;
	static uint8_t x7000 = 73U;
	static int32_t t94 = -595208912;

	t94 = (x6997&((x6998<<x6999)+x7000));

	if (t94 != 75) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x7054 = 435U;
	uint8_t x7055 = 1U;
	static volatile uint64_t x7056 = 3140886LLU;
	volatile uint64_t t95 = 1LLU;

	t95 = (x7053&((x7054<<x7055)+x7056));

	if (t95 != 3141756LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint64_t x7062 = 6907294067406599697LLU;
	volatile int8_t x7063 = 1;
	uint8_t x7064 = UINT8_MAX;
	uint64_t t96 = 3LLU;

	t96 = (x7061&((x7062<<x7063)+x7064));

	if (t96 != 13814588134813199649LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x7114 = 11U;
	static uint16_t x7115 = 13U;
	int32_t x7116 = 50;
	static volatile int32_t t97 = -4297;

	t97 = (x7113&((x7114<<x7115)+x7116));

	if (t97 != 18) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x7189 = 1249974U;
	uint64_t x7190 = UINT64_MAX;
	volatile int32_t x7191 = 0;
	volatile int32_t x7192 = INT32_MAX;
	uint64_t t98 = 883LLU;

	t98 = (x7189&((x7190<<x7191)+x7192));

	if (t98 != 1249974LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x7197 = 414354U;
	uint16_t x7198 = UINT16_MAX;
	volatile uint32_t t99 = 958U;

	t99 = (x7197&((x7198<<x7199)+x7200));

	if (t99 != 414354U) { NG(); } else { ; }
	
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


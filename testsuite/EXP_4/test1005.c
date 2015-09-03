#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = INT32_MAX;
int16_t x94 = -3;
int32_t t1 = 3;
int64_t x591 = 16314704731910930LL;
volatile int64_t x633 = INT64_MIN;
static uint32_t x635 = UINT32_MAX;
int64_t x750 = INT64_MIN;
static volatile uint8_t x769 = UINT8_MAX;
int8_t x835 = 7;
int32_t t8 = -351178;
static volatile uint8_t x909 = UINT8_MAX;
static int16_t x911 = INT16_MAX;
int32_t x938 = -871534718;
int32_t x939 = 20;
int16_t x1022 = -1;
uint64_t x1103 = 2276781857323426LLU;
volatile uint8_t x1128 = 24U;
int16_t x1185 = 21;
uint64_t x1320 = 2LLU;
volatile uint64_t t19 = 44225489LLU;
volatile uint64_t t20 = 156019300729312433LLU;
volatile uint64_t x1588 = 8LLU;
int64_t t21 = -6LL;
int32_t x1782 = INT32_MAX;
uint32_t t24 = 9666U;
int32_t x2034 = INT32_MAX;
static uint32_t x2035 = UINT32_MAX;
volatile uint64_t t26 = 721751606LLU;
volatile uint16_t x2047 = UINT16_MAX;
uint32_t x2205 = 849U;
int8_t x2335 = 8;
uint8_t x2400 = 0U;
static volatile uint16_t x2521 = 58U;
int64_t x2522 = INT64_MAX;
static int64_t x2523 = 6953364466LL;
uint32_t x2621 = 1428753469U;
static uint16_t x2701 = 21520U;
uint16_t x2703 = 0U;
int8_t x2780 = 1;
volatile int32_t t37 = -11;
int32_t x2821 = INT32_MIN;
int8_t x2822 = -1;
int8_t x2861 = 1;
int64_t x2863 = 25LL;
volatile int8_t x2864 = 27;
uint16_t x2966 = 797U;
uint32_t x2968 = 3U;
static uint16_t x3126 = 14657U;
uint32_t x3167 = UINT32_MAX;
uint8_t x3168 = 6U;
static volatile int16_t x3322 = -21;
uint8_t x3324 = 9U;
int64_t x3362 = -59LL;
volatile uint8_t x3496 = 2U;
static int8_t x3602 = 2;
static uint32_t t51 = 108U;
uint16_t x3805 = 6U;
uint32_t x3865 = 0U;
static uint64_t x3868 = 0LLU;
int64_t x3989 = 2858542771566131852LL;
int16_t x4197 = 148;
uint32_t x4199 = 25U;
int8_t x4269 = INT8_MIN;
int32_t x4292 = 1;
volatile uint16_t x4396 = 6U;
int32_t t60 = -600916;
int16_t x4401 = -1;
int64_t t62 = -46990LL;
uint32_t x4575 = UINT32_MAX;
uint32_t t63 = 1105189361U;
static uint16_t x4611 = 3826U;
int64_t x4612 = 1LL;
int32_t t64 = 28555303;
static int8_t x4957 = -1;
int64_t t68 = -17LL;
int64_t x4999 = 698307LL;
int64_t x5038 = -1LL;
uint16_t x5040 = 9U;
volatile int64_t t70 = -528LL;
volatile int8_t x5048 = 4;
int32_t t71 = 0;
volatile uint8_t x5210 = 22U;
static int64_t x5226 = -385798993411302LL;
volatile uint8_t x5228 = 2U;
int32_t t76 = -260147968;
static uint16_t x5745 = 14502U;
volatile int8_t x5746 = -1;
int8_t x5993 = 0;
int8_t x5994 = INT8_MIN;
volatile uint8_t x6068 = 56U;
uint8_t x6248 = 8U;
uint16_t x6266 = 34U;
static volatile int32_t t82 = 58;
static uint32_t x6479 = 0U;
uint16_t x6480 = 15U;
int32_t x6582 = 910381;
static uint64_t t84 = 25LLU;
int8_t x6609 = INT8_MIN;
uint8_t x6728 = 11U;
volatile int16_t x6751 = INT16_MAX;
uint16_t x6841 = 11U;
int16_t x7228 = 1;
static int8_t x7370 = INT8_MAX;
uint8_t x7372 = 1U;
uint64_t x7529 = UINT64_MAX;
uint64_t x7590 = 1LLU;
uint8_t x7628 = 0U;


void f0(void) {
	static int16_t x1 = INT16_MIN;
	uint8_t x2 = UINT8_MAX;
	volatile uint8_t x4 = 0U;
	static int32_t t0 = -2755456;

	t0 = (x1/(x2^(x3<<x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x93 = -1;
	int8_t x95 = 1;
	uint8_t x96 = 1U;

	t1 = (x93/(x94^(x95<<x96)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x121 = -110346545;
	int64_t x122 = -1LL;
	int8_t x123 = 40;
	uint8_t x124 = 8U;
	int64_t t2 = -129480737257LL;

	t2 = (x121/(x122^(x123<<x124)));

	if (t2 != 10774LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x477 = 15675601LLU;
	static int32_t x478 = 21424281;
	uint16_t x479 = 7975U;
	int16_t x480 = 1;
	volatile uint64_t t3 = 1419219LLU;

	t3 = (x477/(x478^(x479<<x480)));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x589 = UINT8_MAX;
	int64_t x590 = INT64_MAX;
	volatile uint16_t x592 = 3U;
	static volatile int64_t t4 = -200439050894LL;

	t4 = (x589/(x590^(x591<<x592)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x634 = -11655;
	int64_t x636 = 23LL;
	int64_t t5 = -23436702976081090LL;

	t5 = (x633/(x634^(x635<<x636)));

	if (t5 != -1101041397373LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x749 = 1;
	int8_t x751 = INT8_MAX;
	static int8_t x752 = 19;
	volatile int64_t t6 = 6457442LL;

	t6 = (x749/(x750^(x751<<x752)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x770 = 0U;
	int8_t x771 = 18;
	uint64_t x772 = 0LLU;
	volatile int32_t t7 = 1503206;

	t7 = (x769/(x770^(x771<<x772)));

	if (t7 != 14) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x833 = INT8_MIN;
	int16_t x834 = 14012;
	uint8_t x836 = 11U;

	t8 = (x833/(x834^(x835<<x836)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x910 = INT8_MAX;
	static uint32_t x912 = 15U;
	int32_t t9 = 14200;

	t9 = (x909/(x910^(x911<<x912)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x937 = UINT16_MAX;
	int8_t x940 = 11;
	volatile int32_t t10 = -480045;

	t10 = (x937/(x938^(x939<<x940)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x981 = UINT8_MAX;
	uint64_t x982 = UINT64_MAX;
	uint16_t x983 = UINT16_MAX;
	uint8_t x984 = 11U;
	volatile uint64_t t11 = 4LLU;

	t11 = (x981/(x982^(x983<<x984)));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x1001 = 615U;
	uint32_t x1002 = UINT32_MAX;
	uint64_t x1003 = UINT64_MAX;
	static int8_t x1004 = 1;
	static volatile uint64_t t12 = 485098076348984825LLU;

	t12 = (x1001/(x1002^(x1003<<x1004)));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x1021 = -514644612LL;
	static uint32_t x1023 = 930072U;
	volatile int8_t x1024 = 0;
	int64_t t13 = -3640802272610LL;

	t13 = (x1021/(x1022^(x1023<<x1024)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x1049 = -1LL;
	int8_t x1050 = 0;
	static int8_t x1051 = 5;
	uint8_t x1052 = 3U;
	volatile int64_t t14 = 50296LL;

	t14 = (x1049/(x1050^(x1051<<x1052)));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x1101 = -3625514;
	static volatile int16_t x1102 = 1;
	static int8_t x1104 = 25;
	volatile uint64_t t15 = 102LLU;

	t15 = (x1101/(x1102^(x1103<<x1104)));

	if (t15 != 2LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x1125 = 50282678041656LLU;
	static uint16_t x1126 = 439U;
	volatile uint32_t x1127 = UINT32_MAX;
	static volatile uint64_t t16 = 1467901LLU;

	t16 = (x1125/(x1126^(x1127<<x1128)));

	if (t16 != 11753LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x1186 = INT16_MIN;
	static volatile int16_t x1187 = 15;
	volatile int16_t x1188 = 1;
	volatile int32_t t17 = 36;

	t17 = (x1185/(x1186^(x1187<<x1188)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1317 = -1LL;
	int32_t x1318 = INT32_MIN;
	volatile uint16_t x1319 = UINT16_MAX;
	static int64_t t18 = 100472LL;

	t18 = (x1317/(x1318^(x1319<<x1320)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x1505 = INT32_MIN;
	static int64_t x1506 = 1LL;
	volatile uint64_t x1507 = UINT64_MAX;
	int16_t x1508 = 27;

	t19 = (x1505/(x1506^(x1507<<x1508)));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x1557 = UINT64_MAX;
	int8_t x1558 = INT8_MIN;
	uint16_t x1559 = UINT16_MAX;
	uint32_t x1560 = 7U;

	t20 = (x1557/(x1558^(x1559<<x1560)));

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x1585 = INT8_MIN;
	int8_t x1586 = INT8_MIN;
	int64_t x1587 = 294612LL;

	t21 = (x1585/(x1586^(x1587<<x1588)));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x1653 = 1;
	uint64_t x1654 = 47186127LLU;
	uint64_t x1655 = UINT64_MAX;
	volatile uint8_t x1656 = 0U;
	volatile uint64_t t22 = 1640539001199102740LLU;

	t22 = (x1653/(x1654^(x1655<<x1656)));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1709 = INT64_MIN;
	int32_t x1710 = -402584145;
	uint16_t x1711 = 1U;
	volatile int16_t x1712 = 7;
	int64_t t23 = -55444591321LL;

	t23 = (x1709/(x1710^(x1711<<x1712)));

	if (t23 != 22910413186LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1781 = 754;
	uint32_t x1783 = UINT32_MAX;
	uint16_t x1784 = 3U;

	t24 = (x1781/(x1782^(x1783<<x1784)));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1865 = 103;
	uint64_t x1866 = 3797372597LLU;
	uint32_t x1867 = 2U;
	int16_t x1868 = 0;
	uint64_t t25 = 7945078031394LLU;

	t25 = (x1865/(x1866^(x1867<<x1868)));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x2033 = UINT64_MAX;
	uint8_t x2036 = 7U;

	t26 = (x2033/(x2034^(x2035<<x2036)));

	if (t26 != 8589934084LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x2045 = 49;
	int32_t x2046 = INT32_MAX;
	static int8_t x2048 = 5;
	int32_t t27 = 1200;

	t27 = (x2045/(x2046^(x2047<<x2048)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x2153 = INT64_MIN;
	int32_t x2154 = INT32_MAX;
	uint32_t x2155 = 93U;
	uint8_t x2156 = 1U;
	volatile int64_t t28 = 30LL;

	t28 = (x2153/(x2154^(x2155<<x2156)));

	if (t28 != -4294967670LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint64_t x2206 = 189957134230216895LLU;
	static uint64_t x2207 = 1178019503920218531LLU;
	uint16_t x2208 = 6U;
	volatile uint64_t t29 = 353795412111746LLU;

	t29 = (x2205/(x2206^(x2207<<x2208)));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x2333 = 836409675327097165LLU;
	int32_t x2334 = INT32_MIN;
	int8_t x2336 = 4;
	static uint64_t t30 = 56157713144LLU;

	t30 = (x2333/(x2334^(x2335<<x2336)));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x2397 = INT32_MAX;
	int16_t x2398 = INT16_MAX;
	int8_t x2399 = 2;
	volatile int32_t t31 = 20859;

	t31 = (x2397/(x2398^(x2399<<x2400)));

	if (t31 != 65542) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x2524 = 2;
	volatile int64_t t32 = -1LL;

	t32 = (x2521/(x2522^(x2523<<x2524)));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x2622 = 31588473321LLU;
	volatile uint16_t x2623 = 61U;
	static uint16_t x2624 = 12U;
	uint64_t t33 = 1007045290893LLU;

	t33 = (x2621/(x2622^(x2623<<x2624)));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x2681 = -1;
	uint32_t x2682 = 3795594U;
	static uint64_t x2683 = UINT64_MAX;
	volatile uint16_t x2684 = 2U;
	static volatile uint64_t t34 = 48159531456530071LLU;

	t34 = (x2681/(x2682^(x2683<<x2684)));

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x2702 = INT8_MAX;
	volatile uint16_t x2704 = 2U;
	volatile int32_t t35 = 0;

	t35 = (x2701/(x2702^(x2703<<x2704)));

	if (t35 != 169) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x2737 = 103U;
	int64_t x2738 = INT64_MIN;
	volatile uint64_t x2739 = 3749446668451LLU;
	uint16_t x2740 = 26U;
	static uint64_t t36 = 3410827711755384389LLU;

	t36 = (x2737/(x2738^(x2739<<x2740)));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x2777 = 11757;
	uint16_t x2778 = 5U;
	int8_t x2779 = 1;

	t37 = (x2777/(x2778^(x2779<<x2780)));

	if (t37 != 1679) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x2785 = INT32_MIN;
	int16_t x2786 = -359;
	volatile uint32_t x2787 = 716617859U;
	uint32_t x2788 = 2U;
	volatile uint32_t t38 = 84510689U;

	t38 = (x2785/(x2786^(x2787<<x2788)));

	if (t38 != 1U) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x2823 = UINT8_MAX;
	uint16_t x2824 = 0U;
	volatile int32_t t39 = 595;

	t39 = (x2821/(x2822^(x2823<<x2824)));

	if (t39 != 8388608) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x2862 = 180U;
	int64_t t40 = 2LL;

	t40 = (x2861/(x2862^(x2863<<x2864)));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x2965 = -1;
	static volatile uint16_t x2967 = 159U;
	int32_t t41 = -39901140;

	t41 = (x2965/(x2966^(x2967<<x2968)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x2989 = 1U;
	int8_t x2990 = -2;
	uint16_t x2991 = 2568U;
	int8_t x2992 = 1;
	int32_t t42 = 24937515;

	t42 = (x2989/(x2990^(x2991<<x2992)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x3077 = 9937U;
	static int8_t x3078 = INT8_MAX;
	int16_t x3079 = INT16_MAX;
	static volatile uint16_t x3080 = 0U;
	static volatile uint32_t t43 = 4U;

	t43 = (x3077/(x3078^(x3079<<x3080)));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x3125 = -1LL;
	uint16_t x3127 = 4216U;
	static uint16_t x3128 = 11U;
	int64_t t44 = 63486LL;

	t44 = (x3125/(x3126^(x3127<<x3128)));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x3165 = INT8_MIN;
	static int64_t x3166 = INT64_MIN;
	volatile int64_t t45 = 6410LL;

	t45 = (x3165/(x3166^(x3167<<x3168)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x3321 = UINT16_MAX;
	static volatile int16_t x3323 = 110;
	int32_t t46 = 216;

	t46 = (x3321/(x3322^(x3323<<x3324)));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x3361 = -1;
	volatile uint32_t x3363 = UINT32_MAX;
	static uint8_t x3364 = 5U;
	volatile int64_t t47 = 2488884221890061349LL;

	t47 = (x3361/(x3362^(x3363<<x3364)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x3373 = INT16_MIN;
	int64_t x3374 = INT64_MIN;
	int8_t x3375 = 44;
	volatile int8_t x3376 = 3;
	int64_t t48 = -8227957559LL;

	t48 = (x3373/(x3374^(x3375<<x3376)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x3409 = INT32_MIN;
	int32_t x3410 = -1;
	static uint16_t x3411 = UINT16_MAX;
	uint8_t x3412 = 0U;
	volatile int32_t t49 = -25;

	t49 = (x3409/(x3410^(x3411<<x3412)));

	if (t49 != 32768) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x3493 = -604188;
	uint32_t x3494 = 14U;
	static uint32_t x3495 = 254179U;
	volatile uint32_t t50 = 14352U;

	t50 = (x3493/(x3494^(x3495<<x3496)));

	if (t50 != 4223U) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x3601 = 6345761;
	uint32_t x3603 = UINT32_MAX;
	volatile uint32_t x3604 = 6U;

	t51 = (x3601/(x3602^(x3603<<x3604)));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x3645 = 74U;
	int32_t x3646 = 167118537;
	static uint64_t x3647 = 19322830295970LLU;
	uint16_t x3648 = 0U;
	static uint64_t t52 = 611172373894LLU;

	t52 = (x3645/(x3646^(x3647<<x3648)));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x3649 = 18443213U;
	int16_t x3650 = -654;
	int64_t x3651 = 45250233LL;
	uint32_t x3652 = 24U;
	static volatile int64_t t53 = -322468739134732631LL;

	t53 = (x3649/(x3650^(x3651<<x3652)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x3806 = -1;
	uint64_t x3807 = UINT64_MAX;
	static uint8_t x3808 = 2U;
	volatile uint64_t t54 = 884850618874LLU;

	t54 = (x3805/(x3806^(x3807<<x3808)));

	if (t54 != 2LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x3866 = INT64_MIN;
	uint8_t x3867 = UINT8_MAX;
	int64_t t55 = 13581860480042LL;

	t55 = (x3865/(x3866^(x3867<<x3868)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x3990 = 3228;
	uint64_t x3991 = 421005LLU;
	uint64_t x3992 = 6LLU;
	uint64_t t56 = 413817608LLU;

	t56 = (x3989/(x3990^(x3991<<x3992)));

	if (t56 != 106078028752LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x4198 = 9U;
	uint8_t x4200 = 0U;
	uint32_t t57 = 0U;

	t57 = (x4197/(x4198^(x4199<<x4200)));

	if (t57 != 9U) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x4270 = 212U;
	uint32_t x4271 = UINT32_MAX;
	int8_t x4272 = 22;
	uint32_t t58 = 25U;

	t58 = (x4269/(x4270^(x4271<<x4272)));

	if (t58 != 1U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x4289 = INT64_MIN;
	volatile int8_t x4290 = INT8_MIN;
	static uint16_t x4291 = 81U;
	int64_t t59 = 7LL;

	t59 = (x4289/(x4290^(x4291<<x4292)));

	if (t59 != 41546720886733224LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x4393 = 1277;
	uint16_t x4394 = UINT16_MAX;
	uint16_t x4395 = 41U;

	t60 = (x4393/(x4394^(x4395<<x4396)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x4402 = 0;
	uint64_t x4403 = 41LLU;
	uint8_t x4404 = 23U;
	volatile uint64_t t61 = 51LLU;

	t61 = (x4401/(x4402^(x4403<<x4404)));

	if (t61 != 53634713550LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x4421 = -262509;
	int32_t x4422 = -1;
	int64_t x4423 = 71545LL;
	uint16_t x4424 = 38U;

	t62 = (x4421/(x4422^(x4423<<x4424)));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x4573 = -1;
	static uint32_t x4574 = 648935U;
	uint8_t x4576 = 26U;

	t63 = (x4573/(x4574^(x4575<<x4576)));

	if (t63 != 1U) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x4609 = INT32_MIN;
	static volatile int16_t x4610 = INT16_MAX;

	t64 = (x4609/(x4610^(x4611<<x4612)));

	if (t64 != -85506) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x4797 = 20U;
	uint16_t x4798 = 10600U;
	static uint64_t x4799 = UINT64_MAX;
	uint8_t x4800 = 2U;
	static volatile uint64_t t65 = 457243941759226LLU;

	t65 = (x4797/(x4798^(x4799<<x4800)));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x4913 = 89690148;
	uint8_t x4914 = UINT8_MAX;
	static volatile uint32_t x4915 = UINT32_MAX;
	uint16_t x4916 = 14U;
	uint32_t t66 = 574807U;

	t66 = (x4913/(x4914^(x4915<<x4916)));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x4933 = 9;
	int32_t x4934 = -1;
	int16_t x4935 = INT16_MAX;
	static int8_t x4936 = 4;
	int32_t t67 = 185;

	t67 = (x4933/(x4934^(x4935<<x4936)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x4958 = INT64_MIN;
	static volatile int16_t x4959 = INT16_MAX;
	uint8_t x4960 = 15U;

	t68 = (x4957/(x4958^(x4959<<x4960)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x4997 = -1;
	int32_t x4998 = INT32_MAX;
	volatile uint8_t x5000 = 0U;
	int64_t t69 = 898LL;

	t69 = (x4997/(x4998^(x4999<<x5000)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x5037 = -1319;
	uint8_t x5039 = 9U;

	t70 = (x5037/(x5038^(x5039<<x5040)));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x5045 = INT16_MIN;
	int16_t x5046 = -12670;
	static uint8_t x5047 = 15U;

	t71 = (x5045/(x5046^(x5047<<x5048)));

	if (t71 != 2) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x5077 = -1;
	int8_t x5078 = INT8_MAX;
	uint16_t x5079 = 135U;
	int8_t x5080 = 3;
	int32_t t72 = 8297;

	t72 = (x5077/(x5078^(x5079<<x5080)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x5209 = -1;
	int8_t x5211 = INT8_MAX;
	uint8_t x5212 = 0U;
	static int32_t t73 = 15266;

	t73 = (x5209/(x5210^(x5211<<x5212)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x5225 = 984261747;
	static uint16_t x5227 = UINT16_MAX;
	static volatile int64_t t74 = -2LL;

	t74 = (x5225/(x5226^(x5227<<x5228)));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x5425 = -1;
	static int64_t x5426 = -15895966LL;
	volatile int16_t x5427 = INT16_MAX;
	static uint8_t x5428 = 1U;
	volatile int64_t t75 = 1600911509090585358LL;

	t75 = (x5425/(x5426^(x5427<<x5428)));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x5509 = 1013401;
	int32_t x5510 = INT32_MIN;
	uint8_t x5511 = 2U;
	uint32_t x5512 = 3U;

	t76 = (x5509/(x5510^(x5511<<x5512)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x5747 = 0;
	static uint16_t x5748 = 0U;
	volatile int32_t t77 = -3401735;

	t77 = (x5745/(x5746^(x5747<<x5748)));

	if (t77 != -14502) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x5995 = INT16_MAX;
	int16_t x5996 = 1;
	static int32_t t78 = -9;

	t78 = (x5993/(x5994^(x5995<<x5996)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x6013 = -1;
	int16_t x6014 = INT16_MIN;
	uint32_t x6015 = UINT32_MAX;
	volatile uint32_t x6016 = 2U;
	uint32_t t79 = 1175519708U;

	t79 = (x6013/(x6014^(x6015<<x6016)));

	if (t79 != 131088U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x6065 = 3U;
	int64_t x6066 = INT64_MIN;
	static int64_t x6067 = 58LL;
	volatile int64_t t80 = 14LL;

	t80 = (x6065/(x6066^(x6067<<x6068)));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int64_t x6245 = INT64_MIN;
	static int8_t x6246 = INT8_MIN;
	uint32_t x6247 = UINT32_MAX;
	int64_t t81 = -37616089370250046LL;

	t81 = (x6245/(x6246^(x6247<<x6248)));

	if (t81 != -72057594037927936LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x6265 = INT32_MAX;
	int8_t x6267 = INT8_MAX;
	volatile uint16_t x6268 = 1U;

	t82 = (x6265/(x6266^(x6267<<x6268)));

	if (t82 != 9761289) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x6477 = -156;
	uint16_t x6478 = 323U;
	volatile uint32_t t83 = 70685304U;

	t83 = (x6477/(x6478^(x6479<<x6480)));

	if (t83 != 13297111U) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x6581 = 972016LLU;
	static uint32_t x6583 = 4943U;
	static uint8_t x6584 = 1U;

	t84 = (x6581/(x6582^(x6583<<x6584)));

	if (t84 != 1LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x6610 = UINT8_MAX;
	uint64_t x6611 = UINT64_MAX;
	volatile int8_t x6612 = 2;
	uint64_t t85 = 806084320241239454LLU;

	t85 = (x6609/(x6610^(x6611<<x6612)));

	if (t85 != 1LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x6725 = 3U;
	uint8_t x6726 = 23U;
	int8_t x6727 = 0;
	int32_t t86 = -5950108;

	t86 = (x6725/(x6726^(x6727<<x6728)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x6749 = INT32_MIN;
	int32_t x6750 = -1;
	volatile int16_t x6752 = 3;
	volatile int32_t t87 = -324;

	t87 = (x6749/(x6750^(x6751<<x6752)));

	if (t87 != 8192) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x6842 = 25501;
	int8_t x6843 = INT8_MAX;
	uint64_t x6844 = 1LLU;
	int32_t t88 = 13834;

	t88 = (x6841/(x6842^(x6843<<x6844)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int32_t x6865 = -1;
	int8_t x6866 = 0;
	static uint32_t x6867 = 57U;
	volatile uint16_t x6868 = 15U;
	static uint32_t t89 = 489U;

	t89 = (x6865/(x6866^(x6867<<x6868)));

	if (t89 != 2299U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x6893 = 27;
	uint64_t x6894 = 3778964520700147LLU;
	int16_t x6895 = 20;
	uint8_t x6896 = 23U;
	uint64_t t90 = 17402728266035LLU;

	t90 = (x6893/(x6894^(x6895<<x6896)));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x7001 = -1;
	int16_t x7002 = -1;
	uint64_t x7003 = 57LLU;
	static uint16_t x7004 = 56U;
	uint64_t t91 = 131971LLU;

	t91 = (x7001/(x7002^(x7003<<x7004)));

	if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x7157 = UINT16_MAX;
	int64_t x7158 = -1LL;
	int8_t x7159 = 14;
	static volatile uint8_t x7160 = 2U;
	int64_t t92 = -48312LL;

	t92 = (x7157/(x7158^(x7159<<x7160)));

	if (t92 != -1149LL) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x7165 = INT16_MIN;
	uint64_t x7166 = UINT64_MAX;
	uint16_t x7167 = 3015U;
	int8_t x7168 = 0;
	uint64_t t93 = 621238LLU;

	t93 = (x7165/(x7166^(x7167<<x7168)));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x7225 = -280307504LL;
	static uint64_t x7226 = UINT64_MAX;
	uint32_t x7227 = UINT32_MAX;
	volatile uint64_t t94 = 2614513655LLU;

	t94 = (x7225/(x7226^(x7227<<x7228)));

	if (t94 != 1LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x7241 = 1124693360U;
	uint16_t x7242 = UINT16_MAX;
	uint16_t x7243 = UINT16_MAX;
	static volatile int64_t x7244 = 2LL;
	static uint32_t t95 = 27U;

	t95 = (x7241/(x7242^(x7243<<x7244)));

	if (t95 != 5720U) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x7369 = 44U;
	uint64_t x7371 = 4124902295LLU;
	uint64_t t96 = 217396711225470099LLU;

	t96 = (x7369/(x7370^(x7371<<x7372)));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x7530 = INT16_MAX;
	uint8_t x7531 = 2U;
	int8_t x7532 = 13;
	uint64_t t97 = 188349825781LLU;

	t97 = (x7529/(x7530^(x7531<<x7532)));

	if (t97 != 1125968630513920LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x7589 = -2;
	uint16_t x7591 = 4U;
	volatile int8_t x7592 = 16;
	uint64_t t98 = 4356LLU;

	t98 = (x7589/(x7590^(x7591<<x7592)));

	if (t98 != 70368475743231LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x7625 = INT8_MAX;
	int16_t x7626 = -627;
	int64_t x7627 = INT64_MAX;
	int64_t t99 = -31258431806LL;

	t99 = (x7625/(x7626^(x7627<<x7628)));

	if (t99 != 0LL) { NG(); } else { ; }
	
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


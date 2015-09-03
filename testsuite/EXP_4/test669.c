#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t x75 = INT32_MAX;
uint64_t x153 = 714718676LLU;
static volatile int32_t x197 = 350;
int32_t t5 = -5014603;
uint8_t x422 = 2U;
uint32_t x595 = 2792856U;
int16_t x596 = INT16_MIN;
int8_t x751 = -13;
int32_t t10 = 361974;
int32_t x894 = 0;
int32_t t12 = 561207207;
volatile int64_t t13 = INT64_MAX;
uint64_t x1014 = UINT64_MAX;
int16_t x1138 = 0;
int16_t x1148 = INT16_MIN;
int16_t x1256 = -1;
uint16_t x1365 = 111U;
volatile int32_t t19 = 5668;
int8_t x1747 = 1;
int8_t x1940 = INT8_MIN;
int32_t x2058 = 12;
static int64_t x2059 = -1LL;
uint16_t x2111 = 6U;
uint64_t t30 = 91119808901LLU;
int8_t x2165 = INT8_MAX;
int8_t x2439 = 1;
uint32_t x2461 = 7U;
uint32_t t33 = 709U;
static volatile int32_t t34 = -256660;
uint64_t x2529 = 31707843570LLU;
uint8_t x2530 = 58U;
uint8_t x2614 = 0U;
uint32_t t41 = 0U;
uint8_t x3102 = 1U;
uint64_t t42 = 71LLU;
volatile int8_t x3238 = INT8_MIN;
uint64_t x3282 = 55LLU;
int16_t x3283 = 30;
int32_t x3428 = INT32_MIN;
static uint16_t x3485 = UINT16_MAX;
static uint32_t x3886 = 1U;
static volatile int64_t x3888 = -610139239LL;
volatile int32_t x3902 = 1;
volatile int16_t x3903 = 13;
int8_t x3904 = INT8_MIN;
int16_t x4121 = 311;
uint64_t x4122 = UINT64_MAX;
volatile uint64_t x4135 = 6LLU;
uint8_t x4158 = 59U;
uint64_t t56 = 5522809304LLU;
static volatile uint8_t x4185 = 1U;
static int64_t x4188 = INT64_MIN;
uint32_t t58 = 0U;
volatile uint8_t x4517 = 111U;
uint32_t x4518 = 3U;
volatile int64_t x4696 = 7339364217634807LL;
int8_t x4734 = -1;
int64_t x4736 = INT64_MAX;
volatile int64_t t61 = -315735855198LL;
int64_t x4764 = INT64_MIN;
int16_t x4852 = INT16_MIN;
uint32_t t63 = 484U;
volatile int32_t x4938 = -12;
volatile int32_t t64 = -298;
int8_t x5072 = INT8_MIN;
int32_t t66 = -917713;
int8_t x5410 = 1;
volatile uint32_t t67 = 661U;
uint16_t x5433 = 126U;
static int16_t x5434 = INT16_MIN;
uint32_t x5477 = 23251093U;
uint16_t x5478 = 0U;
int8_t x5502 = 0;
volatile uint64_t x5665 = 8600LLU;
int32_t x5667 = INT32_MAX;
uint64_t x5935 = UINT64_MAX;
int8_t x6122 = -1;
uint8_t x6198 = 11U;
static volatile uint16_t x6199 = 2754U;
int16_t x6200 = INT16_MAX;
static uint16_t x6321 = UINT16_MAX;
volatile int64_t x6351 = -1LL;
volatile int64_t t77 = 3LL;
int8_t x6446 = 0;
uint8_t x6461 = 2U;
volatile int8_t x6463 = 0;
volatile uint8_t x6464 = UINT8_MAX;
int32_t t80 = 11820425;
volatile int8_t x6526 = 0;
volatile int64_t x6680 = INT64_MIN;
int8_t x6781 = 1;
int8_t x6789 = INT8_MAX;
uint32_t x6881 = 429U;
volatile uint8_t x6882 = 21U;
uint32_t t88 = 9192U;
uint32_t x6950 = 0U;
volatile int64_t x6951 = 6581421430LL;
volatile int32_t t89 = -652;
uint8_t x7005 = UINT8_MAX;
uint32_t x7008 = 2616658U;
int8_t x7049 = 5;
static uint8_t x7050 = 8U;
volatile int16_t x7218 = 0;
uint16_t x7674 = 63U;
volatile uint16_t x7809 = 1U;
int32_t x7811 = -1;
int32_t t98 = -13;
static int8_t x7817 = 0;
volatile int32_t x7818 = 18;
volatile uint32_t x7819 = UINT32_MAX;


void f0(void) {
	int32_t x73 = INT32_MAX;
	int16_t x74 = 1;
	volatile int32_t x76 = INT32_MAX;
	volatile int32_t t0 = INT32_MAX;

	t0 = (x73<<(x74^(x75/x76)));

	if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x105 = 23008U;
	static int32_t x106 = 1;
	int8_t x107 = INT8_MIN;
	volatile uint32_t x108 = UINT32_MAX;
	int32_t t1 = 133934786;

	t1 = (x105<<(x106^(x107/x108)));

	if (t1 != 46016) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x154 = 52;
	uint64_t x155 = 100835LLU;
	static int32_t x156 = INT32_MIN;
	uint64_t t2 = 50678LLU;

	t2 = (x153<<(x154^(x155/x156)));

	if (t2 != 15942742680891555840LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x198 = 1U;
	static uint16_t x199 = 32U;
	static volatile int16_t x200 = 85;
	int32_t t3 = -1428857;

	t3 = (x197<<(x198^(x199/x200)));

	if (t3 != 700) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint16_t x353 = UINT16_MAX;
	static uint8_t x354 = 2U;
	volatile uint32_t x355 = 28101U;
	uint64_t x356 = UINT64_MAX;
	volatile int32_t t4 = -20891094;

	t4 = (x353<<(x354^(x355/x356)));

	if (t4 != 262140) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x385 = UINT16_MAX;
	volatile uint8_t x386 = 6U;
	static uint8_t x387 = 0U;
	uint8_t x388 = 1U;

	t5 = (x385<<(x386^(x387/x388)));

	if (t5 != 4194240) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x421 = UINT64_MAX;
	uint8_t x423 = 99U;
	static int16_t x424 = INT16_MIN;
	volatile uint64_t t6 = 27163824912848102LLU;

	t6 = (x421<<(x422^(x423/x424)));

	if (t6 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x593 = 24U;
	uint8_t x594 = 3U;
	volatile int32_t t7 = 2;

	t7 = (x593<<(x594^(x595/x596)));

	if (t7 != 192) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x733 = INT8_MAX;
	int16_t x734 = 22;
	int64_t x735 = INT64_MIN;
	static volatile uint64_t x736 = UINT64_MAX;
	int32_t t8 = -1;

	t8 = (x733<<(x734^(x735/x736)));

	if (t8 != 532676608) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x749 = 66690154U;
	int8_t x750 = 5;
	volatile int8_t x752 = -2;
	uint32_t t9 = 3986U;

	t9 = (x749<<(x750^(x751/x752)));

	if (t9 != 533521232U) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x821 = 1;
	volatile uint16_t x822 = 9U;
	static volatile uint32_t x823 = UINT32_MAX;
	static volatile int32_t x824 = INT32_MIN;

	t10 = (x821<<(x822^(x823/x824)));

	if (t10 != 256) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x893 = 1898;
	volatile int8_t x895 = -53;
	volatile int8_t x896 = INT8_MAX;
	static volatile int32_t t11 = -1;

	t11 = (x893<<(x894^(x895/x896)));

	if (t11 != 1898) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x937 = 2U;
	int64_t x938 = 0LL;
	volatile uint8_t x939 = 1U;
	int64_t x940 = 3481LL;

	t12 = (x937<<(x938^(x939/x940)));

	if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x985 = INT64_MAX;
	uint16_t x986 = 0U;
	int64_t x987 = -1LL;
	int16_t x988 = INT16_MIN;

	t13 = (x985<<(x986^(x987/x988)));

	if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x1013 = 2U;
	int64_t x1015 = INT64_MIN;
	static int64_t x1016 = INT64_MAX;
	static int32_t t14 = 405939308;

	t14 = (x1013<<(x1014^(x1015/x1016)));

	if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x1077 = 5U;
	static volatile uint32_t x1078 = 0U;
	volatile int16_t x1079 = 16;
	int32_t x1080 = INT32_MIN;
	uint32_t t15 = 417U;

	t15 = (x1077<<(x1078^(x1079/x1080)));

	if (t15 != 5U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x1137 = INT32_MAX;
	int32_t x1139 = -1;
	int16_t x1140 = INT16_MIN;
	static int32_t t16 = INT32_MAX;

	t16 = (x1137<<(x1138^(x1139/x1140)));

	if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint16_t x1145 = 1U;
	int8_t x1146 = 1;
	uint16_t x1147 = 28U;
	static volatile int32_t t17 = 34045;

	t17 = (x1145<<(x1146^(x1147/x1148)));

	if (t17 != 2) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x1253 = UINT64_MAX;
	uint16_t x1254 = 1U;
	int64_t x1255 = -1LL;
	uint64_t t18 = UINT64_MAX;

	t18 = (x1253<<(x1254^(x1255/x1256)));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x1366 = 0;
	static volatile int8_t x1367 = 0;
	static uint64_t x1368 = UINT64_MAX;

	t19 = (x1365<<(x1366^(x1367/x1368)));

	if (t19 != 111) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint32_t x1657 = 48549621U;
	static int8_t x1658 = 0;
	int32_t x1659 = -83;
	volatile int32_t x1660 = INT32_MIN;
	static uint32_t t20 = 1675996U;

	t20 = (x1657<<(x1658^(x1659/x1660)));

	if (t20 != 48549621U) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1745 = UINT8_MAX;
	uint8_t x1746 = 1U;
	int16_t x1748 = INT16_MIN;
	int32_t t21 = 14574;

	t21 = (x1745<<(x1746^(x1747/x1748)));

	if (t21 != 510) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x1749 = 640U;
	uint16_t x1750 = 4U;
	volatile int16_t x1751 = -1;
	int8_t x1752 = 15;
	static uint32_t t22 = 6U;

	t22 = (x1749<<(x1750^(x1751/x1752)));

	if (t22 != 10240U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x1765 = 7U;
	int8_t x1766 = -1;
	uint16_t x1767 = UINT16_MAX;
	int16_t x1768 = INT16_MIN;
	static volatile int32_t t23 = -24;

	t23 = (x1765<<(x1766^(x1767/x1768)));

	if (t23 != 7) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1873 = 1;
	static int16_t x1874 = -4;
	uint8_t x1875 = 96U;
	volatile int8_t x1876 = -36;
	int32_t t24 = 121;

	t24 = (x1873<<(x1874^(x1875/x1876)));

	if (t24 != 4) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1937 = 3689U;
	volatile uint16_t x1938 = 1U;
	int8_t x1939 = INT8_MIN;
	static uint32_t t25 = 3455U;

	t25 = (x1937<<(x1938^(x1939/x1940)));

	if (t25 != 3689U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1965 = 0;
	int32_t x1966 = 0;
	uint16_t x1967 = 1U;
	uint8_t x1968 = UINT8_MAX;
	int32_t t26 = -1974702;

	t26 = (x1965<<(x1966^(x1967/x1968)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x2045 = 3U;
	uint8_t x2046 = 3U;
	uint8_t x2047 = 3U;
	int8_t x2048 = INT8_MAX;
	volatile int32_t t27 = -4158332;

	t27 = (x2045<<(x2046^(x2047/x2048)));

	if (t27 != 24) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x2057 = 17443U;
	static uint16_t x2060 = 4U;
	uint32_t t28 = 8U;

	t28 = (x2057<<(x2058^(x2059/x2060)));

	if (t28 != 71446528U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x2109 = 51983830880LL;
	int8_t x2110 = 11;
	static int8_t x2112 = 42;
	int64_t t29 = 0LL;

	t29 = (x2109<<(x2110^(x2111/x2112)));

	if (t29 != 106462885642240LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x2125 = 8109278103274112935LLU;
	volatile uint8_t x2126 = 4U;
	static int16_t x2127 = INT16_MAX;
	int16_t x2128 = INT16_MIN;

	t30 = (x2125<<(x2126^(x2127/x2128)));

	if (t30 != 621241136418945648LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x2166 = 1U;
	static int64_t x2167 = -1LL;
	int32_t x2168 = INT32_MIN;
	volatile int32_t t31 = 1026809;

	t31 = (x2165<<(x2166^(x2167/x2168)));

	if (t31 != 254) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x2437 = 3242999729760LLU;
	uint8_t x2438 = 23U;
	uint16_t x2440 = UINT16_MAX;
	uint64_t t32 = 2719982637LLU;

	t32 = (x2437<<(x2438^(x2439/x2440)));

	if (t32 != 8757509403353022464LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x2462 = 31;
	static uint32_t x2463 = 12905692U;
	int32_t x2464 = -103951;

	t33 = (x2461<<(x2462^(x2463/x2464)));

	if (t33 != 2147483648U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x2493 = INT8_MAX;
	int8_t x2494 = 0;
	int32_t x2495 = -1;
	int8_t x2496 = INT8_MAX;

	t34 = (x2493<<(x2494^(x2495/x2496)));

	if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x2531 = 0;
	int64_t x2532 = INT64_MAX;
	static uint64_t t35 = 625LLU;

	t35 = (x2529<<(x2530^(x2531/x2532)));

	if (t35 != 14411518807585587200LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x2573 = 7LL;
	static int64_t x2574 = 0LL;
	volatile int16_t x2575 = -372;
	int64_t x2576 = INT64_MAX;
	int64_t t36 = 1019609473201948LL;

	t36 = (x2573<<(x2574^(x2575/x2576)));

	if (t36 != 7LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x2613 = 1011LLU;
	int64_t x2615 = -1LL;
	int8_t x2616 = INT8_MIN;
	uint64_t t37 = 4147004473829LLU;

	t37 = (x2613<<(x2614^(x2615/x2616)));

	if (t37 != 1011LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x2629 = 7U;
	uint8_t x2630 = 7U;
	volatile uint16_t x2631 = UINT16_MAX;
	static uint64_t x2632 = 16234217476519495LLU;
	volatile int32_t t38 = 69543;

	t38 = (x2629<<(x2630^(x2631/x2632)));

	if (t38 != 896) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2669 = INT8_MAX;
	uint8_t x2670 = UINT8_MAX;
	volatile uint32_t x2671 = 521136U;
	int64_t x2672 = 2069LL;
	static int32_t t39 = -4327;

	t39 = (x2669<<(x2670^(x2671/x2672)));

	if (t39 != 2032) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x2865 = 17U;
	uint16_t x2866 = 3U;
	int32_t x2867 = 15;
	static uint32_t x2868 = 13U;
	static volatile int32_t t40 = -52840;

	t40 = (x2865<<(x2866^(x2867/x2868)));

	if (t40 != 68) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x2933 = 91547U;
	int16_t x2934 = 1;
	int8_t x2935 = INT8_MAX;
	uint8_t x2936 = 24U;

	t41 = (x2933<<(x2934^(x2935/x2936)));

	if (t41 != 1464752U) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x3101 = UINT64_MAX;
	static uint8_t x3103 = 0U;
	volatile int16_t x3104 = -223;

	t42 = (x3101<<(x3102^(x3103/x3104)));

	if (t42 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x3237 = 886;
	int16_t x3239 = INT16_MIN;
	int64_t x3240 = 295LL;
	int32_t t43 = 2283943;

	t43 = (x3237<<(x3238^(x3239/x3240)));

	if (t43 != 116129792) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x3257 = 181U;
	uint8_t x3258 = 0U;
	static uint64_t x3259 = 888515LLU;
	uint32_t x3260 = 6251898U;
	static volatile int32_t t44 = -131841645;

	t44 = (x3257<<(x3258^(x3259/x3260)));

	if (t44 != 181) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x3281 = 76550223973679LLU;
	int8_t x3284 = INT8_MAX;
	uint64_t t45 = 229614593118320LLU;

	t45 = (x3281<<(x3282^(x3283/x3284)));

	if (t45 != 10916725496746082304LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int32_t x3425 = 85600854;
	uint8_t x3426 = 3U;
	static uint8_t x3427 = UINT8_MAX;
	int32_t t46 = -38;

	t46 = (x3425<<(x3426^(x3427/x3428)));

	if (t46 != 684806832) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x3486 = 2LLU;
	int64_t x3487 = INT64_MAX;
	int64_t x3488 = INT64_MAX;
	static int32_t t47 = -23;

	t47 = (x3485<<(x3486^(x3487/x3488)));

	if (t47 != 524280) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x3717 = 9;
	int16_t x3718 = 26;
	int16_t x3719 = -1;
	int32_t x3720 = -88202;
	volatile int32_t t48 = 1537;

	t48 = (x3717<<(x3718^(x3719/x3720)));

	if (t48 != 603979776) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x3761 = 55022;
	uint8_t x3762 = 14U;
	int16_t x3763 = INT16_MAX;
	int64_t x3764 = INT64_MIN;
	volatile int32_t t49 = 422198;

	t49 = (x3761<<(x3762^(x3763/x3764)));

	if (t49 != 901480448) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x3885 = UINT8_MAX;
	static int8_t x3887 = INT8_MAX;
	int32_t t50 = 127247;

	t50 = (x3885<<(x3886^(x3887/x3888)));

	if (t50 != 510) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x3901 = 16047;
	int32_t t51 = -10;

	t51 = (x3901<<(x3902^(x3903/x3904)));

	if (t51 != 32094) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x4057 = 35412854006285314LLU;
	static volatile uint8_t x4058 = 2U;
	static uint16_t x4059 = 30U;
	volatile int64_t x4060 = INT64_MAX;
	volatile uint64_t t52 = 22613451961LLU;

	t52 = (x4057<<(x4058^(x4059/x4060)));

	if (t52 != 141651416025141256LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x4065 = UINT16_MAX;
	static uint8_t x4066 = 13U;
	uint64_t x4067 = 11855110352539486LLU;
	static int16_t x4068 = INT16_MIN;
	int32_t t53 = 924;

	t53 = (x4065<<(x4066^(x4067/x4068)));

	if (t53 != 536862720) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x4123 = -63;
	int8_t x4124 = 47;
	int32_t t54 = 2;

	t54 = (x4121<<(x4122^(x4123/x4124)));

	if (t54 != 311) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x4133 = 13426U;
	int8_t x4134 = 1;
	volatile int8_t x4136 = INT8_MIN;
	int32_t t55 = -10836294;

	t55 = (x4133<<(x4134^(x4135/x4136)));

	if (t55 != 26852) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x4157 = 183LLU;
	static int16_t x4159 = 11630;
	int16_t x4160 = INT16_MIN;

	t56 = (x4157<<(x4158^(x4159/x4160)));

	if (t56 != 13258597302978740224LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x4186 = 8U;
	uint32_t x4187 = 0U;
	volatile int32_t t57 = -151111;

	t57 = (x4185<<(x4186^(x4187/x4188)));

	if (t57 != 256) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x4357 = 143690176U;
	int16_t x4358 = -1;
	int64_t x4359 = -1LL;
	int8_t x4360 = 1;

	t58 = (x4357<<(x4358^(x4359/x4360)));

	if (t58 != 143690176U) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x4519 = 5U;
	uint32_t x4520 = 9264U;
	volatile int32_t t59 = 363428874;

	t59 = (x4517<<(x4518^(x4519/x4520)));

	if (t59 != 888) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x4693 = UINT32_MAX;
	int8_t x4694 = 6;
	uint32_t x4695 = UINT32_MAX;
	volatile uint32_t t60 = 997U;

	t60 = (x4693<<(x4694^(x4695/x4696)));

	if (t60 != 4294967232U) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x4733 = 41394LL;
	static int64_t x4735 = INT64_MIN;

	t61 = (x4733<<(x4734^(x4735/x4736)));

	if (t61 != 41394LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x4761 = 0;
	static uint64_t x4762 = 0LLU;
	uint32_t x4763 = UINT32_MAX;
	int32_t t62 = -182;

	t62 = (x4761<<(x4762^(x4763/x4764)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x4849 = 344248U;
	uint16_t x4850 = 0U;
	static int64_t x4851 = -7LL;

	t63 = (x4849<<(x4850^(x4851/x4852)));

	if (t63 != 344248U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x4937 = 1;
	volatile int16_t x4939 = -1;
	static int16_t x4940 = 1;

	t64 = (x4937<<(x4938^(x4939/x4940)));

	if (t64 != 2048) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x4993 = 16U;
	int8_t x4994 = -1;
	static volatile uint8_t x4995 = UINT8_MAX;
	int8_t x4996 = INT8_MIN;
	static int32_t t65 = -67708807;

	t65 = (x4993<<(x4994^(x4995/x4996)));

	if (t65 != 16) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x5069 = 27U;
	uint64_t x5070 = 5LLU;
	int16_t x5071 = -1;

	t66 = (x5069<<(x5070^(x5071/x5072)));

	if (t66 != 864) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x5409 = 525240U;
	static uint32_t x5411 = 104390U;
	int64_t x5412 = -1482730LL;

	t67 = (x5409<<(x5410^(x5411/x5412)));

	if (t67 != 1050480U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x5435 = INT16_MAX;
	int16_t x5436 = -1;
	static int32_t t68 = 13963649;

	t68 = (x5433<<(x5434^(x5435/x5436)));

	if (t68 != 252) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x5479 = 1LLU;
	uint8_t x5480 = UINT8_MAX;
	uint32_t t69 = 31746903U;

	t69 = (x5477<<(x5478^(x5479/x5480)));

	if (t69 != 23251093U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x5501 = 0;
	uint8_t x5503 = 0U;
	static int64_t x5504 = -413565LL;
	volatile int32_t t70 = -354922488;

	t70 = (x5501<<(x5502^(x5503/x5504)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x5601 = 2079865;
	uint16_t x5602 = 1U;
	int8_t x5603 = INT8_MIN;
	static int32_t x5604 = INT32_MIN;
	static int32_t t71 = 3;

	t71 = (x5601<<(x5602^(x5603/x5604)));

	if (t71 != 4159730) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x5666 = 5U;
	volatile uint64_t x5668 = UINT64_MAX;
	uint64_t t72 = 11065519391372513LLU;

	t72 = (x5665<<(x5666^(x5667/x5668)));

	if (t72 != 275200LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x5933 = INT64_MAX;
	static int8_t x5934 = -1;
	uint8_t x5936 = 1U;
	volatile int64_t t73 = INT64_MAX;

	t73 = (x5933<<(x5934^(x5935/x5936)));

	if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x6121 = INT8_MAX;
	int8_t x6123 = 2;
	int16_t x6124 = -1;
	volatile int32_t t74 = 7257;

	t74 = (x6121<<(x6122^(x6123/x6124)));

	if (t74 != 254) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x6197 = 0;
	int32_t t75 = -3;

	t75 = (x6197<<(x6198^(x6199/x6200)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x6322 = 0;
	int32_t x6323 = -1;
	int8_t x6324 = 52;
	volatile int32_t t76 = -16;

	t76 = (x6321<<(x6322^(x6323/x6324)));

	if (t76 != 65535) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x6349 = 445549LL;
	static int8_t x6350 = -29;
	int8_t x6352 = 1;

	t77 = (x6349<<(x6350^(x6351/x6352)));

	if (t77 != 119601148985344LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint8_t x6389 = 42U;
	uint8_t x6390 = 3U;
	int16_t x6391 = -88;
	int32_t x6392 = INT32_MIN;
	int32_t t78 = -180850903;

	t78 = (x6389<<(x6390^(x6391/x6392)));

	if (t78 != 336) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x6445 = UINT8_MAX;
	uint16_t x6447 = 13U;
	uint8_t x6448 = 27U;
	int32_t t79 = 13;

	t79 = (x6445<<(x6446^(x6447/x6448)));

	if (t79 != 255) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x6462 = 1U;

	t80 = (x6461<<(x6462^(x6463/x6464)));

	if (t80 != 4) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x6469 = UINT16_MAX;
	uint8_t x6470 = 4U;
	int64_t x6471 = -1LL;
	int8_t x6472 = -10;
	volatile int32_t t81 = -61452322;

	t81 = (x6469<<(x6470^(x6471/x6472)));

	if (t81 != 1048560) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x6525 = 1459752U;
	volatile int64_t x6527 = -1LL;
	static uint32_t x6528 = 48U;
	uint32_t t82 = 4379777U;

	t82 = (x6525<<(x6526^(x6527/x6528)));

	if (t82 != 1459752U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x6657 = 21LLU;
	uint16_t x6658 = 20U;
	static volatile int16_t x6659 = INT16_MIN;
	int32_t x6660 = 44777;
	static volatile uint64_t t83 = 7382024217466LLU;

	t83 = (x6657<<(x6658^(x6659/x6660)));

	if (t83 != 22020096LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x6677 = UINT64_MAX;
	uint8_t x6678 = 21U;
	uint32_t x6679 = 120U;
	static uint64_t t84 = 10710003348933LLU;

	t84 = (x6677<<(x6678^(x6679/x6680)));

	if (t84 != 18446744073707454464LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x6709 = 155LLU;
	int8_t x6710 = 1;
	int64_t x6711 = -1LL;
	int16_t x6712 = INT16_MIN;
	uint64_t t85 = 6115529046171540842LLU;

	t85 = (x6709<<(x6710^(x6711/x6712)));

	if (t85 != 310LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x6782 = 3U;
	int32_t x6783 = 57;
	uint32_t x6784 = 20U;
	int32_t t86 = 1538;

	t86 = (x6781<<(x6782^(x6783/x6784)));

	if (t86 != 2) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x6790 = 1;
	uint16_t x6791 = 35U;
	static int8_t x6792 = INT8_MIN;
	volatile int32_t t87 = -1;

	t87 = (x6789<<(x6790^(x6791/x6792)));

	if (t87 != 254) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x6883 = -1LL;
	int64_t x6884 = INT64_MIN;

	t88 = (x6881<<(x6882^(x6883/x6884)));

	if (t88 != 899678208U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x6949 = 17;
	uint64_t x6952 = UINT64_MAX;

	t89 = (x6949<<(x6950^(x6951/x6952)));

	if (t89 != 17) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x7006 = 2U;
	volatile int64_t x7007 = 51007LL;
	static int32_t t90 = 214632;

	t90 = (x7005<<(x7006^(x7007/x7008)));

	if (t90 != 1020) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x7033 = 0U;
	uint32_t x7034 = 1U;
	volatile uint64_t x7035 = 2511877LLU;
	static uint64_t x7036 = UINT64_MAX;
	static volatile int32_t t91 = -7;

	t91 = (x7033<<(x7034^(x7035/x7036)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x7051 = INT32_MAX;
	volatile uint64_t x7052 = UINT64_MAX;
	int32_t t92 = -38;

	t92 = (x7049<<(x7050^(x7051/x7052)));

	if (t92 != 1280) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x7157 = 1;
	uint32_t x7158 = 1U;
	uint64_t x7159 = UINT64_MAX;
	int8_t x7160 = INT8_MIN;
	volatile int32_t t93 = -196;

	t93 = (x7157<<(x7158^(x7159/x7160)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x7217 = UINT16_MAX;
	int8_t x7219 = INT8_MIN;
	int16_t x7220 = INT16_MIN;
	volatile int32_t t94 = -1;

	t94 = (x7217<<(x7218^(x7219/x7220)));

	if (t94 != 65535) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x7289 = 1498U;
	static uint8_t x7290 = 2U;
	int8_t x7291 = INT8_MAX;
	int64_t x7292 = INT64_MIN;
	static volatile uint32_t t95 = 1630932328U;

	t95 = (x7289<<(x7290^(x7291/x7292)));

	if (t95 != 5992U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x7601 = UINT64_MAX;
	int8_t x7602 = 1;
	uint8_t x7603 = 0U;
	uint8_t x7604 = UINT8_MAX;
	uint64_t t96 = 26016206815131650LLU;

	t96 = (x7601<<(x7602^(x7603/x7604)));

	if (t96 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x7673 = UINT64_MAX;
	uint8_t x7675 = UINT8_MAX;
	uint8_t x7676 = 49U;
	volatile uint64_t t97 = 297439LLU;

	t97 = (x7673<<(x7674^(x7675/x7676)));

	if (t97 != 18158513697557839872LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x7810 = 8U;
	static int64_t x7812 = INT64_MIN;

	t98 = (x7809<<(x7810^(x7811/x7812)));

	if (t98 != 256) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x7820 = -1;
	static volatile int32_t t99 = 3185;

	t99 = (x7817<<(x7818^(x7819/x7820)));

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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t2 = 24514664;
static int8_t x331 = -1;
uint64_t t3 = 3319LLU;
static int64_t x495 = -1LL;
int16_t x515 = 3780;
int16_t x645 = 61;
uint16_t x647 = 212U;
int8_t x648 = INT8_MIN;
static int32_t t7 = -6705;
volatile uint32_t t9 = 258U;
volatile int16_t x784 = INT16_MIN;
static volatile int32_t t11 = 13029825;
uint32_t t12 = 0U;
volatile int8_t x974 = 5;
int32_t x975 = -139;
volatile int8_t x985 = INT8_MAX;
volatile uint64_t x986 = 18LLU;
int32_t x988 = INT32_MIN;
static volatile uint32_t t16 = 98443U;
int32_t t18 = 104256557;
uint16_t x1265 = UINT16_MAX;
volatile uint32_t x1268 = 720264963U;
int16_t x1509 = INT16_MAX;
static int16_t x1510 = 0;
int32_t t20 = 2013;
int8_t x1687 = INT8_MIN;
volatile int32_t x1688 = INT32_MIN;
static volatile uint64_t t23 = 134636712638LLU;
uint64_t t25 = 1LLU;
static volatile uint32_t x1999 = UINT32_MAX;
uint16_t x2033 = 859U;
static uint8_t x2034 = 2U;
volatile uint64_t t28 = 63557128434116LLU;
uint32_t x2278 = 0U;
int64_t x2279 = INT64_MIN;
int8_t x2587 = INT8_MAX;
static int8_t x2606 = 0;
uint64_t t32 = UINT64_MAX;
volatile uint32_t x2629 = 125U;
volatile uint16_t x2630 = 8U;
static uint8_t x2670 = 3U;
int8_t x2790 = 1;
static int32_t x2792 = INT32_MIN;
uint32_t x2857 = UINT32_MAX;
int32_t x2859 = INT32_MAX;
volatile uint64_t x2885 = 10379348257LLU;
static uint64_t t39 = 7969507973LLU;
static volatile uint64_t t40 = 576LLU;
static volatile int32_t t41 = -28;
uint8_t x3394 = 0U;
uint16_t x3395 = UINT16_MAX;
uint16_t x3480 = 2U;
static int32_t t45 = -177267116;
uint8_t x3498 = 20U;
volatile uint64_t x3537 = UINT64_MAX;
volatile uint16_t x3538 = 0U;
uint64_t x3539 = UINT64_MAX;
uint16_t x3553 = UINT16_MAX;
int32_t x3554 = 4;
static uint64_t x3556 = UINT64_MAX;
int16_t x3612 = -1600;
static volatile int16_t x3662 = 0;
uint32_t x3843 = 4620686U;
volatile int32_t t54 = 0;
int16_t x3893 = 4205;
volatile int8_t x3968 = INT8_MIN;
static uint8_t x4074 = 11U;
volatile int8_t x4100 = INT8_MIN;
uint64_t x4107 = 621843875489263738LLU;
static uint32_t x4201 = 787687371U;
uint32_t t62 = 102U;
static volatile int32_t t63 = -23160;
uint64_t t65 = 53271954539227LLU;
int64_t x4607 = INT64_MIN;
volatile int32_t t66 = 10;
int64_t x4644 = -1LL;
uint32_t x4721 = 7U;
int8_t x4723 = INT8_MAX;
static uint32_t t68 = 41U;
volatile uint32_t x4764 = 2108U;
static uint16_t x4780 = 3U;
volatile int32_t t70 = -9591690;
volatile int64_t x4996 = -1LL;
int8_t x5108 = INT8_MIN;
uint8_t x5125 = UINT8_MAX;
int16_t x5127 = INT16_MAX;
static int8_t x5194 = 12;
static uint64_t x5195 = 208307667829LLU;
volatile int32_t x5456 = INT32_MIN;
static int32_t x5471 = INT32_MIN;
int32_t t83 = -54985215;
int32_t t85 = 14778047;
int32_t x5753 = 4275;
static int16_t x5754 = 0;
volatile int64_t x5756 = -1LL;
int16_t x5765 = 6822;
int8_t x5766 = 0;
volatile int16_t x5954 = 1;
int64_t x5955 = INT64_MIN;
int32_t x5995 = INT32_MIN;
volatile uint64_t t90 = 68979490LLU;
static uint8_t x6073 = 2U;
int64_t x6075 = INT64_MIN;
static int16_t x6248 = -2;
volatile int8_t x6389 = 1;
uint8_t x6438 = 6U;
volatile int32_t x6439 = INT32_MIN;
int32_t t96 = 95402320;
uint32_t t97 = 706884641U;
volatile int32_t x6563 = -1;
int32_t t98 = -25;


void f0(void) {
	static uint8_t x69 = UINT8_MAX;
	uint16_t x70 = 1U;
	static int64_t x71 = -1LL;
	uint8_t x72 = UINT8_MAX;
	volatile int32_t t0 = -1126;

	t0 = (x69<<(x70<<(x71==x72)));

	if (t0 != 510) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x229 = UINT32_MAX;
	static uint16_t x230 = 4U;
	int8_t x231 = 0;
	int16_t x232 = 122;
	uint32_t t1 = 7821U;

	t1 = (x229<<(x230<<(x231==x232)));

	if (t1 != 4294967280U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x281 = 12;
	int8_t x282 = 9;
	int16_t x283 = INT16_MAX;
	volatile int16_t x284 = INT16_MIN;

	t2 = (x281<<(x282<<(x283==x284)));

	if (t2 != 6144) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x329 = 50683932958LLU;
	uint16_t x330 = 0U;
	volatile uint16_t x332 = 5U;

	t3 = (x329<<(x330<<(x331==x332)));

	if (t3 != 50683932958LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x493 = 21;
	int8_t x494 = 6;
	uint16_t x496 = UINT16_MAX;
	int32_t t4 = -26747;

	t4 = (x493<<(x494<<(x495==x496)));

	if (t4 != 1344) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x513 = 5781430;
	volatile uint8_t x514 = 1U;
	uint8_t x516 = UINT8_MAX;
	int32_t t5 = -964605;

	t5 = (x513<<(x514<<(x515==x516)));

	if (t5 != 11562860) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x529 = 16744124402LL;
	volatile uint8_t x530 = 0U;
	int32_t x531 = INT32_MIN;
	static int32_t x532 = 281;
	int64_t t6 = 46956LL;

	t6 = (x529<<(x530<<(x531==x532)));

	if (t6 != 16744124402LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x646 = 9U;

	t7 = (x645<<(x646<<(x647==x648)));

	if (t7 != 31232) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x725 = UINT32_MAX;
	uint8_t x726 = 17U;
	int32_t x727 = 89;
	volatile uint16_t x728 = 3U;
	volatile uint32_t t8 = 1391U;

	t8 = (x725<<(x726<<(x727==x728)));

	if (t8 != 4294836224U) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x749 = UINT32_MAX;
	static int16_t x750 = 3;
	int16_t x751 = -1;
	int64_t x752 = 2567292009LL;

	t9 = (x749<<(x750<<(x751==x752)));

	if (t9 != 4294967288U) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x753 = 238U;
	static int8_t x754 = 1;
	static uint16_t x755 = 28447U;
	int8_t x756 = -1;
	static int32_t t10 = 1721124;

	t10 = (x753<<(x754<<(x755==x756)));

	if (t10 != 476) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint8_t x781 = 1U;
	uint64_t x782 = 0LLU;
	uint64_t x783 = 5786106536962LLU;

	t11 = (x781<<(x782<<(x783==x784)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x789 = UINT32_MAX;
	static uint8_t x790 = 17U;
	uint32_t x791 = 304961452U;
	int16_t x792 = -28;

	t12 = (x789<<(x790<<(x791==x792)));

	if (t12 != 4294836224U) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x973 = UINT8_MAX;
	int32_t x976 = INT32_MIN;
	volatile int32_t t13 = 36737;

	t13 = (x973<<(x974<<(x975==x976)));

	if (t13 != 8160) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x987 = INT8_MIN;
	int32_t t14 = -4;

	t14 = (x985<<(x986<<(x987==x988)));

	if (t14 != 33292288) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x1029 = 1566270434U;
	uint16_t x1030 = 4U;
	static uint16_t x1031 = 14U;
	int64_t x1032 = INT64_MIN;
	uint32_t t15 = 37U;

	t15 = (x1029<<(x1030<<(x1031==x1032)));

	if (t15 != 3585490464U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x1129 = 1U;
	int64_t x1130 = 0LL;
	uint16_t x1131 = 1U;
	uint32_t x1132 = UINT32_MAX;

	t16 = (x1129<<(x1130<<(x1131==x1132)));

	if (t16 != 1U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x1165 = 2319655038LL;
	int8_t x1166 = 6;
	static int8_t x1167 = INT8_MIN;
	static int32_t x1168 = -4047;
	volatile int64_t t17 = 1354029251329914142LL;

	t17 = (x1165<<(x1166<<(x1167==x1168)));

	if (t17 != 148457922432LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x1229 = INT8_MAX;
	uint8_t x1230 = 1U;
	uint16_t x1231 = 5728U;
	volatile int64_t x1232 = 1LL;

	t18 = (x1229<<(x1230<<(x1231==x1232)));

	if (t18 != 254) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x1266 = 13U;
	int8_t x1267 = INT8_MIN;
	volatile int32_t t19 = -211;

	t19 = (x1265<<(x1266<<(x1267==x1268)));

	if (t19 != 536862720) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x1511 = INT32_MIN;
	int16_t x1512 = INT16_MIN;

	t20 = (x1509<<(x1510<<(x1511==x1512)));

	if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1613 = INT8_MAX;
	volatile int32_t x1614 = 13;
	volatile int8_t x1615 = INT8_MIN;
	int64_t x1616 = -215666090LL;
	int32_t t21 = 3075020;

	t21 = (x1613<<(x1614<<(x1615==x1616)));

	if (t21 != 1040384) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1685 = INT16_MAX;
	int16_t x1686 = 1;
	static volatile int32_t t22 = -6;

	t22 = (x1685<<(x1686<<(x1687==x1688)));

	if (t22 != 65534) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x1705 = UINT64_MAX;
	static int32_t x1706 = 1;
	int64_t x1707 = 23022LL;
	volatile int16_t x1708 = -1412;

	t23 = (x1705<<(x1706<<(x1707==x1708)));

	if (t23 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x1769 = 1939U;
	int8_t x1770 = 10;
	uint8_t x1771 = 8U;
	uint64_t x1772 = UINT64_MAX;
	int32_t t24 = -1359;

	t24 = (x1769<<(x1770<<(x1771==x1772)));

	if (t24 != 1985536) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x1885 = 116LLU;
	int8_t x1886 = 6;
	uint8_t x1887 = 0U;
	volatile int16_t x1888 = INT16_MIN;

	t25 = (x1885<<(x1886<<(x1887==x1888)));

	if (t25 != 7424LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1997 = 2U;
	int8_t x1998 = 1;
	int8_t x2000 = -6;
	int32_t t26 = 804966515;

	t26 = (x1997<<(x1998<<(x1999==x2000)));

	if (t26 != 4) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x2035 = 2U;
	int8_t x2036 = -1;
	int32_t t27 = 2252;

	t27 = (x2033<<(x2034<<(x2035==x2036)));

	if (t27 != 3436) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x2149 = 11729784LLU;
	uint8_t x2150 = 1U;
	static int32_t x2151 = -696176;
	int32_t x2152 = 6889;

	t28 = (x2149<<(x2150<<(x2151==x2152)));

	if (t28 != 23459568LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x2277 = UINT16_MAX;
	uint8_t x2280 = 58U;
	int32_t t29 = -766632;

	t29 = (x2277<<(x2278<<(x2279==x2280)));

	if (t29 != 65535) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x2301 = UINT16_MAX;
	uint32_t x2302 = 3U;
	static int16_t x2303 = INT16_MIN;
	static int64_t x2304 = 29423318558173LL;
	int32_t t30 = -63328006;

	t30 = (x2301<<(x2302<<(x2303==x2304)));

	if (t30 != 524280) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x2585 = 1U;
	uint32_t x2586 = 0U;
	int8_t x2588 = INT8_MAX;
	int32_t t31 = 15552;

	t31 = (x2585<<(x2586<<(x2587==x2588)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x2605 = UINT64_MAX;
	volatile int64_t x2607 = INT64_MIN;
	int16_t x2608 = INT16_MIN;

	t32 = (x2605<<(x2606<<(x2607==x2608)));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x2631 = 282174781388752366LLU;
	int64_t x2632 = 54198764975576784LL;
	uint32_t t33 = 15U;

	t33 = (x2629<<(x2630<<(x2631==x2632)));

	if (t33 != 32000U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x2653 = 1007366935LL;
	int16_t x2654 = 1;
	int64_t x2655 = -5913748447506921LL;
	int64_t x2656 = -1LL;
	volatile int64_t t34 = -976988997LL;

	t34 = (x2653<<(x2654<<(x2655==x2656)));

	if (t34 != 2014733870LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x2669 = 55;
	static uint16_t x2671 = 433U;
	int32_t x2672 = -39716;
	int32_t t35 = 0;

	t35 = (x2669<<(x2670<<(x2671==x2672)));

	if (t35 != 440) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x2789 = 0U;
	uint64_t x2791 = UINT64_MAX;
	volatile int32_t t36 = 467398;

	t36 = (x2789<<(x2790<<(x2791==x2792)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x2858 = 3LLU;
	static int16_t x2860 = INT16_MIN;
	volatile uint32_t t37 = 133U;

	t37 = (x2857<<(x2858<<(x2859==x2860)));

	if (t37 != 4294967288U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x2873 = 131327917LL;
	volatile uint16_t x2874 = 11U;
	uint8_t x2875 = 105U;
	uint8_t x2876 = 59U;
	int64_t t38 = 28875LL;

	t38 = (x2873<<(x2874<<(x2875==x2876)));

	if (t38 != 268959574016LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2886 = 0;
	uint16_t x2887 = 0U;
	uint16_t x2888 = 1318U;

	t39 = (x2885<<(x2886<<(x2887==x2888)));

	if (t39 != 10379348257LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x2993 = UINT64_MAX;
	int8_t x2994 = 3;
	static uint16_t x2995 = 24U;
	volatile int8_t x2996 = -2;

	t40 = (x2993<<(x2994<<(x2995==x2996)));

	if (t40 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x3217 = 0;
	static int16_t x3218 = 5;
	uint64_t x3219 = 215582482026LLU;
	static uint8_t x3220 = UINT8_MAX;

	t41 = (x3217<<(x3218<<(x3219==x3220)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x3277 = 113574U;
	int64_t x3278 = 9LL;
	int8_t x3279 = 1;
	int16_t x3280 = -1;
	volatile uint32_t t42 = 2U;

	t42 = (x3277<<(x3278<<(x3279==x3280)));

	if (t42 != 58149888U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x3369 = INT8_MAX;
	uint64_t x3370 = 0LLU;
	uint64_t x3371 = 2LLU;
	int64_t x3372 = -2730252357590755288LL;
	volatile int32_t t43 = 0;

	t43 = (x3369<<(x3370<<(x3371==x3372)));

	if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x3393 = INT32_MAX;
	int32_t x3396 = INT32_MIN;
	volatile int32_t t44 = INT32_MAX;

	t44 = (x3393<<(x3394<<(x3395==x3396)));

	if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x3477 = 3146;
	volatile uint8_t x3478 = 1U;
	uint32_t x3479 = 1484702U;

	t45 = (x3477<<(x3478<<(x3479==x3480)));

	if (t45 != 6292) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x3497 = 4541202661LLU;
	volatile int16_t x3499 = -118;
	volatile int8_t x3500 = INT8_MIN;
	uint64_t t46 = 444608999635104LLU;

	t46 = (x3497<<(x3498<<(x3499==x3500)));

	if (t46 != 4761796121460736LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x3540 = INT64_MAX;
	volatile uint64_t t47 = UINT64_MAX;

	t47 = (x3537<<(x3538<<(x3539==x3540)));

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x3555 = 4;
	volatile int32_t t48 = 23;

	t48 = (x3553<<(x3554<<(x3555==x3556)));

	if (t48 != 1048560) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x3609 = UINT8_MAX;
	int16_t x3610 = 13;
	int8_t x3611 = -42;
	volatile int32_t t49 = -1052334893;

	t49 = (x3609<<(x3610<<(x3611==x3612)));

	if (t49 != 2088960) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x3661 = 3U;
	uint16_t x3663 = 194U;
	volatile int32_t x3664 = INT32_MAX;
	volatile int32_t t50 = 1;

	t50 = (x3661<<(x3662<<(x3663==x3664)));

	if (t50 != 3) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x3697 = UINT8_MAX;
	int8_t x3698 = 1;
	int16_t x3699 = INT16_MAX;
	static int32_t x3700 = 1640;
	int32_t t51 = 10054968;

	t51 = (x3697<<(x3698<<(x3699==x3700)));

	if (t51 != 510) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x3805 = UINT64_MAX;
	int8_t x3806 = 16;
	int16_t x3807 = -15181;
	static volatile uint8_t x3808 = 1U;
	uint64_t t52 = 10981229444359LLU;

	t52 = (x3805<<(x3806<<(x3807==x3808)));

	if (t52 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x3833 = UINT8_MAX;
	uint32_t x3834 = 3U;
	static int64_t x3835 = INT64_MIN;
	int64_t x3836 = INT64_MAX;
	int32_t t53 = 18;

	t53 = (x3833<<(x3834<<(x3835==x3836)));

	if (t53 != 2040) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x3841 = UINT16_MAX;
	static uint8_t x3842 = 10U;
	int64_t x3844 = -1LL;

	t54 = (x3841<<(x3842<<(x3843==x3844)));

	if (t54 != 67107840) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x3894 = 8U;
	int16_t x3895 = -1;
	int32_t x3896 = -9724370;
	volatile int32_t t55 = 325438;

	t55 = (x3893<<(x3894<<(x3895==x3896)));

	if (t55 != 1076480) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x3965 = UINT8_MAX;
	volatile uint8_t x3966 = 4U;
	int8_t x3967 = -1;
	static volatile int32_t t56 = 3456;

	t56 = (x3965<<(x3966<<(x3967==x3968)));

	if (t56 != 4080) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x4029 = 1;
	int8_t x4030 = 1;
	uint64_t x4031 = 669465LLU;
	volatile int16_t x4032 = 4120;
	volatile int32_t t57 = 2610;

	t57 = (x4029<<(x4030<<(x4031==x4032)));

	if (t57 != 2) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x4073 = 3LLU;
	int16_t x4075 = -34;
	volatile uint16_t x4076 = UINT16_MAX;
	uint64_t t58 = 1741721652741744LLU;

	t58 = (x4073<<(x4074<<(x4075==x4076)));

	if (t58 != 6144LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x4097 = 121U;
	static int32_t x4098 = 3;
	int8_t x4099 = INT8_MAX;
	static int32_t t59 = -58356875;

	t59 = (x4097<<(x4098<<(x4099==x4100)));

	if (t59 != 968) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x4105 = INT16_MAX;
	uint8_t x4106 = 2U;
	int16_t x4108 = INT16_MIN;
	int32_t t60 = 969230304;

	t60 = (x4105<<(x4106<<(x4107==x4108)));

	if (t60 != 131068) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x4161 = 3U;
	int8_t x4162 = 0;
	volatile uint8_t x4163 = 14U;
	int16_t x4164 = INT16_MAX;
	static volatile int32_t t61 = 692432;

	t61 = (x4161<<(x4162<<(x4163==x4164)));

	if (t61 != 3) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x4202 = 1U;
	uint32_t x4203 = UINT32_MAX;
	volatile uint32_t x4204 = 10475U;

	t62 = (x4201<<(x4202<<(x4203==x4204)));

	if (t62 != 1575374742U) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x4413 = 73U;
	uint8_t x4414 = 2U;
	uint32_t x4415 = UINT32_MAX;
	volatile int8_t x4416 = -1;

	t63 = (x4413<<(x4414<<(x4415==x4416)));

	if (t63 != 1168) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x4521 = UINT8_MAX;
	int8_t x4522 = 4;
	int64_t x4523 = INT64_MIN;
	volatile int8_t x4524 = -1;
	volatile int32_t t64 = 383594;

	t64 = (x4521<<(x4522<<(x4523==x4524)));

	if (t64 != 4080) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x4541 = 1661287771662146739LLU;
	uint32_t x4542 = 1U;
	int32_t x4543 = INT32_MIN;
	int64_t x4544 = INT64_MIN;

	t65 = (x4541<<(x4542<<(x4543==x4544)));

	if (t65 != 3322575543324293478LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint8_t x4605 = 3U;
	static volatile int16_t x4606 = 1;
	int32_t x4608 = INT32_MAX;

	t66 = (x4605<<(x4606<<(x4607==x4608)));

	if (t66 != 6) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x4641 = 9632;
	uint8_t x4642 = 3U;
	volatile uint64_t x4643 = UINT64_MAX;
	int32_t t67 = -161419;

	t67 = (x4641<<(x4642<<(x4643==x4644)));

	if (t67 != 616448) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x4722 = 0;
	static int64_t x4724 = -2LL;

	t68 = (x4721<<(x4722<<(x4723==x4724)));

	if (t68 != 7U) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x4761 = 94U;
	uint8_t x4762 = 1U;
	int16_t x4763 = INT16_MIN;
	int32_t t69 = -2;

	t69 = (x4761<<(x4762<<(x4763==x4764)));

	if (t69 != 188) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x4777 = 521513;
	int8_t x4778 = 2;
	int64_t x4779 = INT64_MAX;

	t70 = (x4777<<(x4778<<(x4779==x4780)));

	if (t70 != 2086052) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x4905 = 437070U;
	uint16_t x4906 = 0U;
	int64_t x4907 = 72369LL;
	int8_t x4908 = 1;
	volatile uint32_t t71 = 11U;

	t71 = (x4905<<(x4906<<(x4907==x4908)));

	if (t71 != 437070U) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x4993 = UINT16_MAX;
	uint32_t x4994 = 0U;
	uint32_t x4995 = UINT32_MAX;
	static int32_t t72 = 1027541471;

	t72 = (x4993<<(x4994<<(x4995==x4996)));

	if (t72 != 65535) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x5105 = 1U;
	volatile uint8_t x5106 = 4U;
	int64_t x5107 = INT64_MAX;
	volatile int32_t t73 = 0;

	t73 = (x5105<<(x5106<<(x5107==x5108)));

	if (t73 != 16) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x5113 = 24861U;
	static uint32_t x5114 = 20U;
	int64_t x5115 = 0LL;
	int8_t x5116 = -1;
	uint32_t t74 = 10122117U;

	t74 = (x5113<<(x5114<<(x5115==x5116)));

	if (t74 != 298844160U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x5126 = 6U;
	static int64_t x5128 = -1LL;
	static int32_t t75 = 189270108;

	t75 = (x5125<<(x5126<<(x5127==x5128)));

	if (t75 != 16320) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x5193 = 0;
	volatile int16_t x5196 = INT16_MIN;
	volatile int32_t t76 = -1;

	t76 = (x5193<<(x5194<<(x5195==x5196)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x5257 = 6549992U;
	int8_t x5258 = 6;
	static int64_t x5259 = 4757002886LL;
	uint32_t x5260 = 52U;
	uint32_t t77 = 187573U;

	t77 = (x5257<<(x5258<<(x5259==x5260)));

	if (t77 != 419199488U) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x5349 = 72U;
	uint16_t x5350 = 1U;
	uint16_t x5351 = UINT16_MAX;
	uint32_t x5352 = 28U;
	static uint32_t t78 = 1U;

	t78 = (x5349<<(x5350<<(x5351==x5352)));

	if (t78 != 144U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x5441 = 46LLU;
	int8_t x5442 = 0;
	int64_t x5443 = INT64_MAX;
	static volatile int16_t x5444 = INT16_MIN;
	static volatile uint64_t t79 = 44074494957443LLU;

	t79 = (x5441<<(x5442<<(x5443==x5444)));

	if (t79 != 46LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x5453 = 1270447099580965001LLU;
	int16_t x5454 = 1;
	int64_t x5455 = -3133700835LL;
	uint64_t t80 = 303461897651594628LLU;

	t80 = (x5453<<(x5454<<(x5455==x5456)));

	if (t80 != 2540894199161930002LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x5469 = INT16_MAX;
	volatile uint8_t x5470 = 0U;
	int16_t x5472 = -3608;
	int32_t t81 = -7945;

	t81 = (x5469<<(x5470<<(x5471==x5472)));

	if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint32_t x5521 = UINT32_MAX;
	int8_t x5522 = 0;
	volatile int8_t x5523 = -1;
	int8_t x5524 = -1;
	static uint32_t t82 = UINT32_MAX;

	t82 = (x5521<<(x5522<<(x5523==x5524)));

	if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x5533 = INT16_MAX;
	volatile uint64_t x5534 = 0LLU;
	volatile int64_t x5535 = -1LL;
	uint32_t x5536 = 43193U;

	t83 = (x5533<<(x5534<<(x5535==x5536)));

	if (t83 != 32767) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x5681 = 44U;
	uint16_t x5682 = 5U;
	int32_t x5683 = INT32_MAX;
	volatile uint16_t x5684 = 14251U;
	int32_t t84 = 27;

	t84 = (x5681<<(x5682<<(x5683==x5684)));

	if (t84 != 1408) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x5717 = 1U;
	int8_t x5718 = 14;
	int8_t x5719 = 12;
	uint32_t x5720 = UINT32_MAX;

	t85 = (x5717<<(x5718<<(x5719==x5720)));

	if (t85 != 16384) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x5755 = -140858LL;
	int32_t t86 = -3676535;

	t86 = (x5753<<(x5754<<(x5755==x5756)));

	if (t86 != 4275) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x5767 = -28;
	int8_t x5768 = -1;
	int32_t t87 = -6932386;

	t87 = (x5765<<(x5766<<(x5767==x5768)));

	if (t87 != 6822) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x5953 = 1930910U;
	static int64_t x5956 = 79544LL;
	uint32_t t88 = 50U;

	t88 = (x5953<<(x5954<<(x5955==x5956)));

	if (t88 != 3861820U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x5961 = INT32_MAX;
	uint8_t x5962 = 0U;
	static volatile int16_t x5963 = -6316;
	int16_t x5964 = INT16_MIN;
	volatile int32_t t89 = INT32_MAX;

	t89 = (x5961<<(x5962<<(x5963==x5964)));

	if (t89 != INT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x5993 = 230964563LLU;
	int8_t x5994 = 1;
	int64_t x5996 = INT64_MAX;

	t90 = (x5993<<(x5994<<(x5995==x5996)));

	if (t90 != 461929126LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x6045 = INT64_MAX;
	static int64_t x6046 = 0LL;
	uint8_t x6047 = UINT8_MAX;
	int32_t x6048 = INT32_MIN;
	int64_t t91 = INT64_MAX;

	t91 = (x6045<<(x6046<<(x6047==x6048)));

	if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x6074 = 7U;
	uint8_t x6076 = 56U;
	int32_t t92 = -4465;

	t92 = (x6073<<(x6074<<(x6075==x6076)));

	if (t92 != 256) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x6081 = 12U;
	uint8_t x6082 = 1U;
	int32_t x6083 = INT32_MIN;
	uint8_t x6084 = 6U;
	int32_t t93 = 311550;

	t93 = (x6081<<(x6082<<(x6083==x6084)));

	if (t93 != 24) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x6245 = 11317567483467LLU;
	volatile int16_t x6246 = 4;
	int16_t x6247 = INT16_MAX;
	uint64_t t94 = 28463220514LLU;

	t94 = (x6245<<(x6246<<(x6247==x6248)));

	if (t94 != 181081079735472LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x6390 = 4U;
	int64_t x6391 = -1826198LL;
	static uint64_t x6392 = 269716598957078LLU;
	static int32_t t95 = 4703438;

	t95 = (x6389<<(x6390<<(x6391==x6392)));

	if (t95 != 16) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x6437 = INT16_MAX;
	int64_t x6440 = -1LL;

	t96 = (x6437<<(x6438<<(x6439==x6440)));

	if (t96 != 2097088) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x6501 = 3431U;
	uint16_t x6502 = 31U;
	volatile uint16_t x6503 = UINT16_MAX;
	static int32_t x6504 = INT32_MAX;

	t97 = (x6501<<(x6502<<(x6503==x6504)));

	if (t97 != 2147483648U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x6561 = 9366992;
	uint64_t x6562 = 3LLU;
	uint16_t x6564 = 392U;

	t98 = (x6561<<(x6562<<(x6563==x6564)));

	if (t98 != 74935936) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x6721 = UINT8_MAX;
	static int8_t x6722 = 2;
	uint64_t x6723 = 11748702175474LLU;
	int32_t x6724 = -1;
	volatile int32_t t99 = 274;

	t99 = (x6721<<(x6722<<(x6723==x6724)));

	if (t99 != 1020) { NG(); } else { ; }
	
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


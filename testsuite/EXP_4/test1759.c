#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x8 = 1;
uint8_t x21 = 2U;
int64_t x37 = -7833898LL;
volatile uint16_t x40 = 3U;
static uint16_t x60 = 10328U;
int64_t t3 = -7033LL;
uint32_t t6 = 257544484U;
volatile int8_t x152 = -2;
int32_t t7 = -8073789;
static volatile int32_t t8 = 8192;
static int16_t x184 = INT16_MAX;
volatile int32_t x245 = -1;
uint64_t x320 = 541669545LLU;
uint16_t x349 = 458U;
int64_t x417 = -1881345778067786659LL;
uint64_t t19 = 874LLU;
volatile uint32_t t20 = 0U;
uint8_t x493 = 9U;
uint64_t t21 = 99472LLU;
static volatile int32_t t24 = 35;
volatile int32_t x570 = INT32_MAX;
int8_t x571 = 8;
int8_t x643 = -1;
int16_t x675 = 0;
uint64_t x757 = 25613LLU;
int32_t x768 = -1;
int64_t x783 = INT64_MAX;
static int32_t x793 = INT32_MIN;
volatile uint16_t x795 = 223U;
volatile int32_t t36 = 428466;
int64_t x827 = INT64_MIN;
int16_t x831 = 6147;
volatile int32_t x832 = INT32_MIN;
uint16_t x835 = 4U;
static uint8_t x836 = 3U;
volatile int32_t t39 = -2;
int16_t x845 = INT16_MIN;
volatile int16_t x846 = 168;
int16_t x886 = INT16_MAX;
uint64_t x904 = 12227216753578LLU;
int8_t x928 = INT8_MIN;
volatile uint64_t x930 = UINT64_MAX;
int16_t x931 = INT16_MIN;
uint16_t x932 = 246U;
volatile uint64_t t44 = 256631727LLU;
int32_t x986 = 13033;
volatile int32_t t48 = 399170;
uint16_t x997 = UINT16_MAX;
int16_t x1044 = INT16_MIN;
volatile int32_t t51 = -5479;
static uint64_t x1046 = 281322674712307619LLU;
static volatile int32_t t53 = -48023;
int8_t x1121 = -1;
int32_t t56 = -129;
int8_t x1138 = INT8_MAX;
volatile int16_t x1139 = INT16_MIN;
int32_t x1167 = INT32_MIN;
int32_t x1168 = 210341;
int32_t x1171 = INT32_MIN;
static uint16_t x1172 = 101U;
uint16_t x1179 = 1U;
static volatile uint32_t x1197 = 30937934U;
uint64_t x1199 = 0LLU;
int32_t x1207 = 2;
int16_t x1208 = INT16_MIN;
volatile int32_t x1226 = 6;
volatile uint16_t x1227 = 6U;
volatile int32_t t65 = 84802;
uint8_t x1235 = 0U;
uint32_t x1254 = UINT32_MAX;
uint16_t x1274 = UINT16_MAX;
static int32_t t71 = 568;
int16_t x1333 = INT16_MIN;
int64_t x1345 = INT64_MIN;
uint32_t x1365 = UINT32_MAX;
int64_t x1367 = INT64_MIN;
volatile int32_t t77 = -42940201;
uint8_t x1408 = 5U;
volatile int32_t t78 = -2;
uint64_t x1428 = 113842919128LLU;
uint16_t x1437 = 9U;
static uint64_t x1438 = 2783863260LLU;
volatile int32_t t81 = -30;
int64_t x1477 = -18443LL;
uint8_t x1502 = 47U;
volatile int32_t t84 = -3782141;
static uint16_t x1549 = 2U;
int32_t x1550 = 48945472;
volatile uint8_t x1565 = 81U;
uint16_t x1579 = 0U;
static uint8_t x1580 = 7U;
int32_t x1631 = INT32_MAX;
int32_t t92 = 6323;
int32_t t94 = 91;
static int8_t x1733 = INT8_MIN;
int32_t x1778 = 5295;
uint16_t x1779 = 0U;


void f0(void) {
	volatile int8_t x5 = -1;
	volatile uint8_t x6 = 102U;
	static volatile uint64_t x7 = 33155136LLU;
	static int32_t t0 = 3;

	t0 = (x5/(x6<<(x7&x8)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x22 = 28U;
	volatile uint8_t x23 = UINT8_MAX;
	volatile int32_t x24 = INT32_MIN;
	static volatile int32_t t1 = -1;

	t1 = (x21/(x22<<(x23&x24)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x38 = 59869902541LLU;
	uint32_t x39 = 1564U;
	static uint64_t t2 = 7550730608LLU;

	t2 = (x37/(x38<<(x39&x40)));

	if (t2 != 308113814LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x57 = INT64_MIN;
	volatile int64_t x58 = INT64_MAX;
	int16_t x59 = INT16_MIN;

	t3 = (x57/(x58<<(x59&x60)));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x89 = 354107296;
	volatile uint32_t x90 = UINT32_MAX;
	int32_t x91 = -1368;
	int8_t x92 = 6;
	uint32_t t4 = 23U;

	t4 = (x89/(x90<<(x91&x92)));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x129 = 33540587LL;
	uint8_t x130 = UINT8_MAX;
	int64_t x131 = INT64_MIN;
	static int8_t x132 = 8;
	int64_t t5 = 6665LL;

	t5 = (x129/(x130<<(x131&x132)));

	if (t5 != 131531LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x137 = 81654656U;
	int32_t x138 = 213;
	uint16_t x139 = UINT16_MAX;
	uint8_t x140 = 1U;

	t6 = (x137/(x138<<(x139&x140)));

	if (t6 != 191677U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x149 = -1;
	uint16_t x150 = 13U;
	uint8_t x151 = 12U;

	t7 = (x149/(x150<<(x151&x152)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint16_t x157 = 17366U;
	uint16_t x158 = 7015U;
	uint16_t x159 = 30U;
	int64_t x160 = 921921298LL;

	t8 = (x157/(x158<<(x159&x160)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x161 = INT32_MIN;
	uint64_t x162 = 64677256LLU;
	volatile int64_t x163 = INT64_MIN;
	uint16_t x164 = 1863U;
	uint64_t t9 = 106676071806200LLU;

	t9 = (x161/(x162<<(x163&x164)));

	if (t9 != 285212224704LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x169 = 5084U;
	static int32_t x170 = INT32_MAX;
	volatile uint8_t x171 = 6U;
	int32_t x172 = INT32_MIN;
	uint32_t t10 = 180U;

	t10 = (x169/(x170<<(x171&x172)));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x181 = -35;
	static uint16_t x182 = 1396U;
	int64_t x183 = INT64_MIN;
	volatile int32_t t11 = -1;

	t11 = (x181/(x182<<(x183&x184)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x193 = 4471458119398251663LLU;
	volatile uint32_t x194 = UINT32_MAX;
	volatile int32_t x195 = INT32_MIN;
	uint32_t x196 = 2U;
	static volatile uint64_t t12 = 50328611LLU;

	t12 = (x193/(x194<<(x195&x196)));

	if (t12 != 1041092472LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x205 = 0;
	volatile int64_t x206 = 4331882973650805LL;
	uint64_t x207 = UINT64_MAX;
	volatile int8_t x208 = 0;
	int64_t t13 = -38746778909428362LL;

	t13 = (x205/(x206<<(x207&x208)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x246 = 2;
	int32_t x247 = INT32_MAX;
	static int64_t x248 = INT64_MIN;
	volatile int32_t t14 = -795150961;

	t14 = (x245/(x246<<(x247&x248)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x317 = INT8_MIN;
	int64_t x318 = INT64_MAX;
	uint32_t x319 = 0U;
	static int64_t t15 = -631896490531536248LL;

	t15 = (x317/(x318<<(x319&x320)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x350 = UINT64_MAX;
	static uint32_t x351 = 4U;
	int64_t x352 = -1LL;
	static volatile uint64_t t16 = 270529446168LLU;

	t16 = (x349/(x350<<(x351&x352)));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x353 = 8U;
	volatile int16_t x354 = 294;
	int32_t x355 = INT32_MAX;
	static int64_t x356 = INT64_MIN;
	static volatile int32_t t17 = 8;

	t17 = (x353/(x354<<(x355&x356)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x418 = 426U;
	uint64_t x419 = 9LLU;
	uint64_t x420 = 3573876974199LLU;
	int64_t t18 = -167393015323482320LL;

	t18 = (x417/(x418<<(x419&x420)));

	if (t18 != -2208152321675805LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x465 = 461874224LLU;
	uint16_t x466 = 1U;
	int16_t x467 = -7;
	int8_t x468 = 1;

	t19 = (x465/(x466<<(x467&x468)));

	if (t19 != 230937112LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x469 = 1U;
	int8_t x470 = INT8_MAX;
	int64_t x471 = INT64_MIN;
	uint16_t x472 = 2U;

	t20 = (x469/(x470<<(x471&x472)));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x494 = UINT64_MAX;
	int32_t x495 = INT32_MIN;
	int16_t x496 = 12558;

	t21 = (x493/(x494<<(x495&x496)));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x505 = -1;
	int32_t x506 = INT32_MAX;
	static uint16_t x507 = 548U;
	volatile int64_t x508 = INT64_MIN;
	volatile int32_t t22 = 436;

	t22 = (x505/(x506<<(x507&x508)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x517 = INT64_MIN;
	volatile uint32_t x518 = 81509528U;
	volatile uint16_t x519 = 0U;
	int64_t x520 = INT64_MAX;
	int64_t t23 = -1280LL;

	t23 = (x517/(x518<<(x519&x520)));

	if (t23 != -113156980087LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x529 = INT32_MIN;
	uint16_t x530 = 21667U;
	volatile uint16_t x531 = 2268U;
	int64_t x532 = INT64_MIN;

	t24 = (x529/(x530<<(x531&x532)));

	if (t24 != -99113) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x569 = 776U;
	static int8_t x572 = INT8_MIN;
	volatile uint32_t t25 = 12U;

	t25 = (x569/(x570<<(x571&x572)));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x597 = INT16_MIN;
	int8_t x598 = 5;
	uint8_t x599 = 7U;
	int32_t x600 = -7936;
	volatile int32_t t26 = -39631065;

	t26 = (x597/(x598<<(x599&x600)));

	if (t26 != -6553) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x641 = INT8_MIN;
	uint16_t x642 = UINT16_MAX;
	int8_t x644 = 1;
	int32_t t27 = -3;

	t27 = (x641/(x642<<(x643&x644)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x673 = INT32_MIN;
	int8_t x674 = 1;
	int8_t x676 = -1;
	volatile int32_t t28 = INT32_MIN;

	t28 = (x673/(x674<<(x675&x676)));

	if (t28 != INT32_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x693 = UINT64_MAX;
	uint8_t x694 = 1U;
	volatile int16_t x695 = 4;
	volatile int64_t x696 = INT64_MAX;
	volatile uint64_t t29 = 5231LLU;

	t29 = (x693/(x694<<(x695&x696)));

	if (t29 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x709 = 3642U;
	volatile uint64_t x710 = UINT64_MAX;
	int8_t x711 = -26;
	volatile int8_t x712 = 6;
	volatile uint64_t t30 = 74635359LLU;

	t30 = (x709/(x710<<(x711&x712)));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x758 = UINT64_MAX;
	uint64_t x759 = 33LLU;
	volatile int16_t x760 = INT16_MIN;
	static volatile uint64_t t31 = 6383523002806323583LLU;

	t31 = (x757/(x758<<(x759&x760)));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x765 = 176;
	static uint16_t x766 = 6U;
	int16_t x767 = 23;
	static volatile int32_t t32 = -68601;

	t32 = (x765/(x766<<(x767&x768)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x781 = INT64_MIN;
	int16_t x782 = 3;
	uint8_t x784 = 0U;
	static int64_t t33 = 643166756LL;

	t33 = (x781/(x782<<(x783&x784)));

	if (t33 != -3074457345618258602LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x794 = 17475246LL;
	uint16_t x796 = 30U;
	volatile int64_t t34 = -7867587139LL;

	t34 = (x793/(x794<<(x795&x796)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x817 = INT16_MIN;
	uint64_t x818 = 60LLU;
	volatile int16_t x819 = INT16_MAX;
	uint8_t x820 = 5U;
	uint64_t t35 = 499970LLU;

	t35 = (x817/(x818<<(x819&x820)));

	if (t35 != 9607679205057041LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x821 = INT16_MIN;
	uint8_t x822 = UINT8_MAX;
	static int64_t x823 = INT64_MIN;
	uint16_t x824 = UINT16_MAX;

	t36 = (x821/(x822<<(x823&x824)));

	if (t36 != -128) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x825 = INT16_MIN;
	volatile uint32_t x826 = UINT32_MAX;
	uint16_t x828 = 36U;
	uint32_t t37 = 1U;

	t37 = (x825/(x826<<(x827&x828)));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x829 = 57;
	uint32_t x830 = 2939514U;
	volatile uint32_t t38 = 928921U;

	t38 = (x829/(x830<<(x831&x832)));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x833 = 6938;
	volatile int32_t x834 = INT32_MAX;

	t39 = (x833/(x834<<(x835&x836)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x847 = 60U;
	volatile int64_t x848 = INT64_MIN;
	volatile int32_t t40 = 1966;

	t40 = (x845/(x846<<(x847&x848)));

	if (t40 != -195) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x885 = 2277U;
	int64_t x887 = INT64_MIN;
	static uint32_t x888 = 27U;
	volatile int32_t t41 = 1684;

	t41 = (x885/(x886<<(x887&x888)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x901 = 771U;
	uint16_t x902 = 6U;
	uint8_t x903 = 19U;
	volatile uint32_t t42 = 5U;

	t42 = (x901/(x902<<(x903&x904)));

	if (t42 != 32U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x925 = INT16_MAX;
	static uint64_t x926 = 174386290072629813LLU;
	volatile int8_t x927 = INT8_MAX;
	volatile uint64_t t43 = 0LLU;

	t43 = (x925/(x926<<(x927&x928)));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x929 = INT32_MAX;

	t44 = (x929/(x930<<(x931&x932)));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x965 = 3;
	uint16_t x966 = UINT16_MAX;
	volatile int16_t x967 = INT16_MIN;
	static int8_t x968 = INT8_MAX;
	int32_t t45 = -60647;

	t45 = (x965/(x966<<(x967&x968)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x969 = -224;
	int64_t x970 = 4LL;
	int16_t x971 = 40;
	int16_t x972 = -1;
	volatile int64_t t46 = 30628LL;

	t46 = (x969/(x970<<(x971&x972)));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x977 = INT32_MAX;
	uint8_t x978 = UINT8_MAX;
	uint16_t x979 = UINT16_MAX;
	static volatile int64_t x980 = INT64_MIN;
	static volatile int32_t t47 = -18143;

	t47 = (x977/(x978<<(x979&x980)));

	if (t47 != 8421504) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x985 = -4;
	int32_t x987 = -1;
	int8_t x988 = 0;

	t48 = (x985/(x986<<(x987&x988)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x993 = INT8_MAX;
	volatile uint64_t x994 = UINT64_MAX;
	static uint16_t x995 = 1U;
	volatile int16_t x996 = -66;
	volatile uint64_t t49 = 1395LLU;

	t49 = (x993/(x994<<(x995&x996)));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x998 = 38639LLU;
	uint8_t x999 = UINT8_MAX;
	static volatile int16_t x1000 = 0;
	volatile uint64_t t50 = 890615431027215403LLU;

	t50 = (x997/(x998<<(x999&x1000)));

	if (t50 != 1LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x1041 = INT32_MAX;
	volatile uint16_t x1042 = 3U;
	static int8_t x1043 = 0;

	t51 = (x1041/(x1042<<(x1043&x1044)));

	if (t51 != 715827882) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x1045 = -1;
	int32_t x1047 = 105495992;
	int64_t x1048 = 0LL;
	static uint64_t t52 = 6533871054658LLU;

	t52 = (x1045/(x1046<<(x1047&x1048)));

	if (t52 != 65LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x1049 = 0;
	int16_t x1050 = 900;
	volatile uint16_t x1051 = 11U;
	static int8_t x1052 = -4;

	t53 = (x1049/(x1050<<(x1051&x1052)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x1073 = INT64_MIN;
	int8_t x1074 = INT8_MAX;
	int8_t x1075 = -41;
	static uint8_t x1076 = 12U;
	volatile int64_t t54 = 1LL;

	t54 = (x1073/(x1074<<(x1075&x1076)));

	if (t54 != -4539061041759240LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x1097 = UINT16_MAX;
	static uint64_t x1098 = 50386089170LLU;
	int16_t x1099 = -3;
	volatile uint8_t x1100 = 1U;
	uint64_t t55 = 32600502415689701LLU;

	t55 = (x1097/(x1098<<(x1099&x1100)));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x1122 = 77U;
	volatile int32_t x1123 = INT32_MIN;
	int64_t x1124 = 5LL;

	t56 = (x1121/(x1122<<(x1123&x1124)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x1137 = UINT16_MAX;
	uint64_t x1140 = 96LLU;
	volatile int32_t t57 = -25;

	t57 = (x1137/(x1138<<(x1139&x1140)));

	if (t57 != 516) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x1165 = 2U;
	static uint16_t x1166 = UINT16_MAX;
	volatile int32_t t58 = 1;

	t58 = (x1165/(x1166<<(x1167&x1168)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x1169 = -1LL;
	volatile int16_t x1170 = 64;
	volatile int64_t t59 = 285364454728356889LL;

	t59 = (x1169/(x1170<<(x1171&x1172)));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x1173 = 1;
	int16_t x1174 = 3406;
	volatile uint32_t x1175 = 0U;
	uint16_t x1176 = 1U;
	volatile int32_t t60 = -11052;

	t60 = (x1173/(x1174<<(x1175&x1176)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x1177 = INT64_MIN;
	uint16_t x1178 = 42U;
	volatile int64_t x1180 = INT64_MIN;
	static int64_t t61 = 18519895347063LL;

	t61 = (x1177/(x1178<<(x1179&x1180)));

	if (t61 != -219604096115589900LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x1189 = INT64_MIN;
	uint32_t x1190 = UINT32_MAX;
	int8_t x1191 = 1;
	int8_t x1192 = 1;
	volatile int64_t t62 = -27355586609271LL;

	t62 = (x1189/(x1190<<(x1191&x1192)));

	if (t62 != -2147483649LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x1198 = 9261508;
	volatile uint32_t x1200 = 1020270U;
	static uint32_t t63 = 28117539U;

	t63 = (x1197/(x1198<<(x1199&x1200)));

	if (t63 != 3U) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x1205 = INT8_MAX;
	int16_t x1206 = INT16_MAX;
	int32_t t64 = 428;

	t64 = (x1205/(x1206<<(x1207&x1208)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x1225 = 109U;
	uint16_t x1228 = 5U;

	t65 = (x1225/(x1226<<(x1227&x1228)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x1233 = -516735742;
	uint32_t x1234 = 16494058U;
	static volatile uint8_t x1236 = UINT8_MAX;
	uint32_t t66 = 10565163U;

	t66 = (x1233/(x1234<<(x1235&x1236)));

	if (t66 != 229U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x1253 = -1;
	int32_t x1255 = INT32_MAX;
	uint16_t x1256 = 1U;
	uint32_t t67 = 434978U;

	t67 = (x1253/(x1254<<(x1255&x1256)));

	if (t67 != 1U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x1261 = INT64_MIN;
	int64_t x1262 = INT64_MAX;
	static int16_t x1263 = INT16_MIN;
	uint16_t x1264 = 14337U;
	volatile int64_t t68 = -3LL;

	t68 = (x1261/(x1262<<(x1263&x1264)));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x1273 = 9U;
	static uint8_t x1275 = 58U;
	static int64_t x1276 = INT64_MIN;
	volatile int32_t t69 = 99307;

	t69 = (x1273/(x1274<<(x1275&x1276)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x1277 = 268789931U;
	static uint64_t x1278 = 7512001LLU;
	int32_t x1279 = 70705;
	int64_t x1280 = INT64_MIN;
	uint64_t t70 = 1002784LLU;

	t70 = (x1277/(x1278<<(x1279&x1280)));

	if (t70 != 35LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint8_t x1293 = 0U;
	volatile int8_t x1294 = 1;
	uint32_t x1295 = 11012U;
	int32_t x1296 = INT32_MIN;

	t71 = (x1293/(x1294<<(x1295&x1296)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x1334 = UINT64_MAX;
	volatile int8_t x1335 = 5;
	uint32_t x1336 = 3122429U;
	static uint64_t t72 = 15LLU;

	t72 = (x1333/(x1334<<(x1335&x1336)));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x1346 = 190;
	int32_t x1347 = INT32_MIN;
	volatile int32_t x1348 = INT32_MAX;
	volatile int64_t t73 = -111LL;

	t73 = (x1345/(x1346<<(x1347&x1348)));

	if (t73 != -48544063351867241LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x1349 = INT64_MIN;
	int16_t x1350 = 14;
	static int16_t x1351 = INT16_MIN;
	static uint16_t x1352 = 1U;
	int64_t t74 = 920376756415353507LL;

	t74 = (x1349/(x1350<<(x1351&x1352)));

	if (t74 != -658812288346769700LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x1366 = 67U;
	volatile int64_t x1368 = 1LL;
	volatile uint32_t t75 = 271U;

	t75 = (x1365/(x1366<<(x1367&x1368)));

	if (t75 != 64103989U) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint8_t x1369 = 3U;
	int8_t x1370 = 14;
	volatile int64_t x1371 = -1LL;
	volatile uint8_t x1372 = 0U;
	volatile int32_t t76 = 8302;

	t76 = (x1369/(x1370<<(x1371&x1372)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x1389 = -4113104;
	volatile uint16_t x1390 = UINT16_MAX;
	uint32_t x1391 = 660U;
	static uint32_t x1392 = 1318U;

	t77 = (x1389/(x1390<<(x1391&x1392)));

	if (t77 != -3) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x1405 = INT16_MIN;
	static int8_t x1406 = 5;
	static int32_t x1407 = INT32_MIN;

	t78 = (x1405/(x1406<<(x1407&x1408)));

	if (t78 != -6553) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x1425 = 1U;
	int16_t x1426 = 12;
	int64_t x1427 = INT64_MIN;
	volatile int32_t t79 = -59;

	t79 = (x1425/(x1426<<(x1427&x1428)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x1439 = INT8_MAX;
	int8_t x1440 = 7;
	volatile uint64_t t80 = 2717256050LLU;

	t80 = (x1437/(x1438<<(x1439&x1440)));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x1457 = UINT8_MAX;
	volatile int8_t x1458 = 44;
	int32_t x1459 = 1;
	uint32_t x1460 = 20U;

	t81 = (x1457/(x1458<<(x1459&x1460)));

	if (t81 != 5) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x1473 = INT32_MAX;
	int8_t x1474 = 3;
	int16_t x1475 = 24;
	int64_t x1476 = INT64_MIN;
	volatile int32_t t82 = -222849716;

	t82 = (x1473/(x1474<<(x1475&x1476)));

	if (t82 != 715827882) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x1478 = INT16_MAX;
	static int16_t x1479 = -1;
	static volatile uint8_t x1480 = 1U;
	volatile int64_t t83 = -1LL;

	t83 = (x1477/(x1478<<(x1479&x1480)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x1501 = 3;
	int8_t x1503 = INT8_MIN;
	uint8_t x1504 = 2U;

	t84 = (x1501/(x1502<<(x1503&x1504)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x1529 = -1;
	volatile int32_t x1530 = 850604292;
	int64_t x1531 = INT64_MAX;
	int32_t x1532 = 0;
	int32_t t85 = -53285051;

	t85 = (x1529/(x1530<<(x1531&x1532)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x1551 = INT64_MAX;
	int64_t x1552 = INT64_MIN;
	volatile int32_t t86 = -2032313;

	t86 = (x1549/(x1550<<(x1551&x1552)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x1566 = 6U;
	int16_t x1567 = INT16_MAX;
	int16_t x1568 = INT16_MIN;
	volatile uint32_t t87 = 15677U;

	t87 = (x1565/(x1566<<(x1567&x1568)));

	if (t87 != 13U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x1577 = INT8_MIN;
	uint64_t x1578 = 1385837071111512868LLU;
	uint64_t t88 = 51342826403LLU;

	t88 = (x1577/(x1578<<(x1579&x1580)));

	if (t88 != 13LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x1589 = -1;
	int8_t x1590 = INT8_MAX;
	static int16_t x1591 = 1;
	int8_t x1592 = INT8_MAX;
	volatile int32_t t89 = 332;

	t89 = (x1589/(x1590<<(x1591&x1592)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x1625 = 1;
	uint8_t x1626 = 8U;
	int64_t x1627 = INT64_MAX;
	volatile int64_t x1628 = INT64_MIN;
	volatile int32_t t90 = 221117;

	t90 = (x1625/(x1626<<(x1627&x1628)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x1629 = 1851543U;
	uint8_t x1630 = 27U;
	static int32_t x1632 = INT32_MIN;
	uint32_t t91 = 73988523U;

	t91 = (x1629/(x1630<<(x1631&x1632)));

	if (t91 != 68575U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x1645 = -826867661;
	uint8_t x1646 = UINT8_MAX;
	static int8_t x1647 = 6;
	int8_t x1648 = INT8_MIN;

	t92 = (x1645/(x1646<<(x1647&x1648)));

	if (t92 != -3242618) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x1669 = UINT64_MAX;
	uint64_t x1670 = 13168806201LLU;
	int16_t x1671 = -1;
	int64_t x1672 = 13LL;
	static volatile uint64_t t93 = 24273319630LLU;

	t93 = (x1669/(x1670<<(x1671&x1672)));

	if (t93 != 170994LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x1705 = -2;
	uint8_t x1706 = UINT8_MAX;
	int16_t x1707 = INT16_MIN;
	uint16_t x1708 = 47U;

	t94 = (x1705/(x1706<<(x1707&x1708)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x1734 = UINT64_MAX;
	int16_t x1735 = INT16_MIN;
	volatile uint8_t x1736 = UINT8_MAX;
	uint64_t t95 = 28201772445740LLU;

	t95 = (x1733/(x1734<<(x1735&x1736)));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x1761 = INT32_MIN;
	int8_t x1762 = INT8_MAX;
	int32_t x1763 = -1;
	uint16_t x1764 = 0U;
	volatile int32_t t96 = -718156;

	t96 = (x1761/(x1762<<(x1763&x1764)));

	if (t96 != -16909320) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x1777 = UINT32_MAX;
	volatile int8_t x1780 = INT8_MIN;
	static volatile uint32_t t97 = 3714U;

	t97 = (x1777/(x1778<<(x1779&x1780)));

	if (t97 != 811136U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x1809 = INT16_MIN;
	int64_t x1810 = INT64_MAX;
	static int16_t x1811 = -64;
	int8_t x1812 = 57;
	volatile int64_t t98 = 1642990919348503849LL;

	t98 = (x1809/(x1810<<(x1811&x1812)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x1833 = -1;
	volatile uint64_t x1834 = 89814198LLU;
	int32_t x1835 = -331;
	static int16_t x1836 = 3;
	uint64_t t99 = 2584LLU;

	t99 = (x1833/(x1834<<(x1835&x1836)));

	if (t99 != 102693919694LLU) { NG(); } else { ; }
	
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


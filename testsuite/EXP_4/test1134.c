#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x24 = 0U;
static uint32_t x118 = UINT32_MAX;
uint8_t x203 = 3U;
static int8_t x206 = INT8_MIN;
int8_t x208 = 25;
volatile int32_t t4 = -63828212;
int32_t t5 = -243972;
uint32_t x281 = 368047U;
uint32_t x284 = 20U;
uint32_t t6 = 58418918U;
static int8_t x335 = 1;
int64_t x353 = INT64_MAX;
uint16_t x355 = 13U;
int64_t t9 = INT64_MAX;
static int32_t x502 = -424;
static volatile int32_t t10 = 13;
uint16_t x620 = 1U;
volatile uint8_t x670 = 14U;
static volatile int32_t t14 = 238;
static uint8_t x1160 = 0U;
int16_t x1319 = 14697;
volatile uint32_t x1320 = 1U;
static uint8_t x1366 = 28U;
int16_t x1392 = 0;
volatile int64_t t22 = INT64_MIN;
volatile uint16_t x1600 = 2U;
int32_t x1678 = 4;
volatile int8_t x1721 = -1;
int64_t x1722 = 2146887244768431419LL;
volatile int64_t x1758 = INT64_MIN;
uint8_t x1864 = 63U;
int8_t x1894 = -1;
uint16_t x1902 = 1448U;
int8_t x2002 = INT8_MIN;
static volatile uint8_t x2246 = UINT8_MAX;
int32_t x2248 = 0;
int16_t x2358 = INT16_MIN;
static uint64_t x2360 = 2LLU;
int64_t t36 = INT64_MIN;
uint32_t x2474 = 13134803U;
static uint64_t x2476 = 2LLU;
int8_t x2508 = 7;
static uint8_t x2520 = 3U;
static uint8_t x2656 = 8U;
volatile int16_t x2678 = INT16_MIN;
uint8_t x2709 = UINT8_MAX;
uint16_t x2712 = 2U;
int64_t x2813 = -1LL;
int32_t x2845 = INT32_MIN;
volatile uint8_t x2856 = 27U;
uint16_t x3140 = 4U;
int8_t x3216 = 0;
volatile int64_t x3335 = INT64_MAX;
uint8_t x3528 = 1U;
int8_t x3601 = -1;
int32_t t58 = -2854531;
uint8_t x3828 = 1U;
uint32_t t59 = 1992872U;
static int8_t x3872 = 11;
volatile int32_t t60 = 4843;
uint32_t x3925 = UINT32_MAX;
uint8_t x4006 = UINT8_MAX;
int32_t x4110 = INT32_MAX;
volatile int8_t x4112 = 19;
int8_t x4297 = INT8_MIN;
uint8_t x4365 = 0U;
volatile int16_t x4379 = INT16_MAX;
static int32_t x4484 = 1;
int64_t t71 = -1452LL;
int16_t x4518 = INT16_MIN;
volatile int32_t t74 = -1460;
int8_t x4734 = INT8_MIN;
int64_t x4735 = 38325936571LL;
int8_t x4736 = 1;
static int32_t t77 = -866896499;
int8_t x4881 = -1;
int32_t x4883 = INT32_MAX;
int64_t x4993 = INT64_MIN;
uint32_t x4995 = 1253824052U;
volatile int32_t t81 = INT32_MAX;
int32_t x5257 = -116073672;
uint8_t x5258 = 0U;
volatile int32_t t82 = -79223099;
int8_t x5361 = -26;
uint32_t x5362 = 80402U;
uint16_t x5363 = 6U;
int16_t x5636 = 2;
volatile int32_t x5827 = INT32_MAX;
int8_t x5838 = INT8_MAX;
static int32_t t92 = 1;
uint16_t x5905 = 17U;
int16_t x5906 = -3;
int8_t x5921 = INT8_MIN;
uint16_t x5923 = UINT16_MAX;
int16_t x6127 = INT16_MAX;
static int32_t t97 = 11790036;
volatile uint32_t x6205 = 49551575U;
uint8_t x6208 = 1U;


void f0(void) {
	volatile uint64_t x21 = 2LLU;
	static volatile int32_t x22 = -1280177;
	uint16_t x23 = UINT16_MAX;
	volatile uint64_t t0 = 26431460LLU;

	t0 = (x21*(x22<=(x23>>x24)));

	if (t0 != 2LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x117 = INT64_MIN;
	uint16_t x119 = UINT16_MAX;
	uint16_t x120 = 10U;
	int64_t t1 = 137865730202449LL;

	t1 = (x117*(x118<=(x119>>x120)));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x201 = -4159370830879LL;
	int64_t x202 = -1LL;
	static volatile uint32_t x204 = 0U;
	volatile int64_t t2 = -1488954920577672601LL;

	t2 = (x201*(x202<=(x203>>x204)));

	if (t2 != -4159370830879LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x205 = UINT16_MAX;
	uint16_t x207 = 3615U;
	int32_t t3 = 59320;

	t3 = (x205*(x206<=(x207>>x208)));

	if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x213 = 51U;
	int16_t x214 = -52;
	int8_t x215 = INT8_MAX;
	uint8_t x216 = 2U;

	t4 = (x213*(x214<=(x215>>x216)));

	if (t4 != 51) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x225 = 1234U;
	static int64_t x226 = -492LL;
	int16_t x227 = 1764;
	uint8_t x228 = 25U;

	t5 = (x225*(x226<=(x227>>x228)));

	if (t5 != 1234) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x282 = -1;
	static uint16_t x283 = 560U;

	t6 = (x281*(x282<=(x283>>x284)));

	if (t6 != 368047U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x333 = 0;
	volatile int16_t x334 = INT16_MIN;
	uint32_t x336 = 1U;
	volatile int32_t t7 = 1;

	t7 = (x333*(x334<=(x335>>x336)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint16_t x337 = 1U;
	int16_t x338 = -3;
	int32_t x339 = 3852629;
	int8_t x340 = 1;
	volatile int32_t t8 = -1027;

	t8 = (x337*(x338<=(x339>>x340)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x354 = -1;
	int8_t x356 = 0;

	t9 = (x353*(x354<=(x355>>x356)));

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x501 = -1;
	uint32_t x503 = UINT32_MAX;
	int32_t x504 = 1;

	t10 = (x501*(x502<=(x503>>x504)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x577 = UINT8_MAX;
	volatile int16_t x578 = INT16_MIN;
	int32_t x579 = INT32_MAX;
	int8_t x580 = 0;
	volatile int32_t t11 = -585;

	t11 = (x577*(x578<=(x579>>x580)));

	if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x617 = 2;
	static int32_t x618 = -14844349;
	int16_t x619 = INT16_MAX;
	int32_t t12 = -1222;

	t12 = (x617*(x618<=(x619>>x620)));

	if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x669 = 31846U;
	uint8_t x671 = 92U;
	static int8_t x672 = 4;
	static int32_t t13 = 572485246;

	t13 = (x669*(x670<=(x671>>x672)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x685 = INT8_MAX;
	int64_t x686 = INT64_MAX;
	int32_t x687 = 360902780;
	static int8_t x688 = 0;

	t14 = (x685*(x686<=(x687>>x688)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x697 = INT16_MIN;
	volatile int8_t x698 = -50;
	int8_t x699 = 4;
	uint8_t x700 = 0U;
	int32_t t15 = 3446;

	t15 = (x697*(x698<=(x699>>x700)));

	if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x877 = -1;
	static int8_t x878 = INT8_MAX;
	int32_t x879 = 0;
	volatile uint16_t x880 = 27U;
	volatile int32_t t16 = 258;

	t16 = (x877*(x878<=(x879>>x880)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x1025 = INT64_MIN;
	int16_t x1026 = -1;
	int8_t x1027 = INT8_MAX;
	static volatile uint8_t x1028 = 1U;
	int64_t t17 = INT64_MIN;

	t17 = (x1025*(x1026<=(x1027>>x1028)));

	if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x1157 = 309;
	static uint8_t x1158 = 12U;
	int32_t x1159 = 4;
	volatile int32_t t18 = -4;

	t18 = (x1157*(x1158<=(x1159>>x1160)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1237 = -19;
	uint8_t x1238 = UINT8_MAX;
	uint16_t x1239 = 200U;
	static int8_t x1240 = 3;
	volatile int32_t t19 = 458;

	t19 = (x1237*(x1238<=(x1239>>x1240)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint64_t x1317 = UINT64_MAX;
	int32_t x1318 = 256;
	volatile uint64_t t20 = UINT64_MAX;

	t20 = (x1317*(x1318<=(x1319>>x1320)));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x1365 = INT64_MAX;
	uint8_t x1367 = 15U;
	volatile uint16_t x1368 = 1U;
	int64_t t21 = -24375506561521238LL;

	t21 = (x1365*(x1366<=(x1367>>x1368)));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x1389 = INT64_MIN;
	static int16_t x1390 = 1;
	uint16_t x1391 = UINT16_MAX;

	t22 = (x1389*(x1390<=(x1391>>x1392)));

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x1597 = INT8_MIN;
	int64_t x1598 = -279479LL;
	volatile uint32_t x1599 = 875878U;
	volatile int32_t t23 = -9;

	t23 = (x1597*(x1598<=(x1599>>x1600)));

	if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x1677 = 0;
	uint8_t x1679 = 5U;
	static volatile uint16_t x1680 = 7U;
	static volatile int32_t t24 = 3717;

	t24 = (x1677*(x1678<=(x1679>>x1680)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x1723 = 0U;
	volatile uint8_t x1724 = 4U;
	volatile int32_t t25 = 200326;

	t25 = (x1721*(x1722<=(x1723>>x1724)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x1757 = -68535999018LL;
	int16_t x1759 = INT16_MAX;
	int16_t x1760 = 20;
	int64_t t26 = -152963LL;

	t26 = (x1757*(x1758<=(x1759>>x1760)));

	if (t26 != -68535999018LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1789 = -338;
	int32_t x1790 = -1;
	uint64_t x1791 = 729887759394LLU;
	int8_t x1792 = 3;
	volatile int32_t t27 = -30241;

	t27 = (x1789*(x1790<=(x1791>>x1792)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x1837 = INT32_MAX;
	uint64_t x1838 = 73780584613LLU;
	static uint32_t x1839 = UINT32_MAX;
	uint16_t x1840 = 29U;
	volatile int32_t t28 = 2084071;

	t28 = (x1837*(x1838<=(x1839>>x1840)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1861 = -91;
	int32_t x1862 = -1;
	static volatile uint64_t x1863 = UINT64_MAX;
	int32_t t29 = 14840955;

	t29 = (x1861*(x1862<=(x1863>>x1864)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1893 = INT32_MAX;
	uint64_t x1895 = 1450466510109LLU;
	int8_t x1896 = 49;
	int32_t t30 = -121632;

	t30 = (x1893*(x1894<=(x1895>>x1896)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1901 = 217127410;
	uint32_t x1903 = 44U;
	uint8_t x1904 = 0U;
	int32_t t31 = -18187;

	t31 = (x1901*(x1902<=(x1903>>x1904)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x1957 = -1;
	int32_t x1958 = -1;
	uint16_t x1959 = 5U;
	static uint8_t x1960 = 1U;
	static int32_t t32 = 30;

	t32 = (x1957*(x1958<=(x1959>>x1960)));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x2001 = 28556LLU;
	int32_t x2003 = INT32_MAX;
	uint16_t x2004 = 0U;
	volatile uint64_t t33 = 28478LLU;

	t33 = (x2001*(x2002<=(x2003>>x2004)));

	if (t33 != 28556LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x2225 = 3;
	volatile int32_t x2226 = -1;
	uint32_t x2227 = UINT32_MAX;
	uint8_t x2228 = 0U;
	volatile int32_t t34 = -3692033;

	t34 = (x2225*(x2226<=(x2227>>x2228)));

	if (t34 != 3) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x2245 = 3331947175342LLU;
	static int32_t x2247 = INT32_MAX;
	volatile uint64_t t35 = 110LLU;

	t35 = (x2245*(x2246<=(x2247>>x2248)));

	if (t35 != 3331947175342LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x2357 = INT64_MIN;
	int16_t x2359 = INT16_MAX;

	t36 = (x2357*(x2358<=(x2359>>x2360)));

	if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x2469 = -1;
	int32_t x2470 = INT32_MIN;
	volatile int16_t x2471 = 355;
	uint8_t x2472 = 21U;
	int32_t t37 = -737485;

	t37 = (x2469*(x2470<=(x2471>>x2472)));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x2473 = -1LL;
	static volatile uint32_t x2475 = 5U;
	int64_t t38 = -26889533916997LL;

	t38 = (x2473*(x2474<=(x2475>>x2476)));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x2505 = 10U;
	int32_t x2506 = INT32_MIN;
	static uint32_t x2507 = 194554U;
	volatile int32_t t39 = 32344;

	t39 = (x2505*(x2506<=(x2507>>x2508)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x2517 = INT16_MAX;
	volatile int32_t x2518 = -3;
	static uint8_t x2519 = 0U;
	volatile int32_t t40 = 104447;

	t40 = (x2517*(x2518<=(x2519>>x2520)));

	if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x2653 = 1LL;
	uint8_t x2654 = 15U;
	static uint16_t x2655 = 12U;
	volatile int64_t t41 = -4224348953LL;

	t41 = (x2653*(x2654<=(x2655>>x2656)));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x2677 = 0U;
	uint16_t x2679 = UINT16_MAX;
	int8_t x2680 = 21;
	volatile int32_t t42 = -1;

	t42 = (x2677*(x2678<=(x2679>>x2680)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int8_t x2710 = INT8_MAX;
	uint8_t x2711 = UINT8_MAX;
	volatile int32_t t43 = 40;

	t43 = (x2709*(x2710<=(x2711>>x2712)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x2814 = 1U;
	uint16_t x2815 = 724U;
	uint16_t x2816 = 5U;
	int64_t t44 = -7938LL;

	t44 = (x2813*(x2814<=(x2815>>x2816)));

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2846 = -1;
	uint8_t x2847 = 120U;
	uint64_t x2848 = 31LLU;
	int32_t t45 = INT32_MIN;

	t45 = (x2845*(x2846<=(x2847>>x2848)));

	if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x2853 = 1;
	int32_t x2854 = INT32_MAX;
	uint64_t x2855 = 1373769716LLU;
	static volatile int32_t t46 = 35;

	t46 = (x2853*(x2854<=(x2855>>x2856)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x2985 = -1LL;
	int16_t x2986 = 3;
	uint32_t x2987 = UINT32_MAX;
	int8_t x2988 = 0;
	static int64_t t47 = 3535LL;

	t47 = (x2985*(x2986<=(x2987>>x2988)));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x3137 = INT16_MIN;
	volatile int64_t x3138 = -1LL;
	int64_t x3139 = INT64_MAX;
	int32_t t48 = -29041;

	t48 = (x3137*(x3138<=(x3139>>x3140)));

	if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x3213 = 3U;
	int64_t x3214 = 1851866832057LL;
	uint32_t x3215 = 26933958U;
	volatile uint32_t t49 = 2441820U;

	t49 = (x3213*(x3214<=(x3215>>x3216)));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x3269 = 891535LLU;
	static volatile int64_t x3270 = -1LL;
	uint16_t x3271 = UINT16_MAX;
	uint8_t x3272 = 26U;
	uint64_t t50 = 46027433944441224LLU;

	t50 = (x3269*(x3270<=(x3271>>x3272)));

	if (t50 != 891535LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x3333 = INT64_MIN;
	uint8_t x3334 = 0U;
	uint16_t x3336 = 3U;
	volatile int64_t t51 = INT64_MIN;

	t51 = (x3333*(x3334<=(x3335>>x3336)));

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x3357 = -1;
	static int64_t x3358 = INT64_MAX;
	static uint32_t x3359 = 1583802019U;
	volatile uint16_t x3360 = 1U;
	volatile int32_t t52 = 0;

	t52 = (x3357*(x3358<=(x3359>>x3360)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int8_t x3369 = -1;
	int8_t x3370 = -1;
	static uint8_t x3371 = 0U;
	static volatile uint8_t x3372 = 8U;
	volatile int32_t t53 = 143316973;

	t53 = (x3369*(x3370<=(x3371>>x3372)));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x3469 = 0;
	int16_t x3470 = INT16_MAX;
	static uint64_t x3471 = UINT64_MAX;
	int32_t x3472 = 2;
	volatile int32_t t54 = -1698;

	t54 = (x3469*(x3470<=(x3471>>x3472)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x3525 = 16121LLU;
	int8_t x3526 = INT8_MIN;
	static int32_t x3527 = INT32_MAX;
	volatile uint64_t t55 = 128129830390LLU;

	t55 = (x3525*(x3526<=(x3527>>x3528)));

	if (t55 != 16121LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x3602 = INT16_MIN;
	uint8_t x3603 = UINT8_MAX;
	int8_t x3604 = 10;
	volatile int32_t t56 = 59;

	t56 = (x3601*(x3602<=(x3603>>x3604)));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x3713 = INT16_MAX;
	int8_t x3714 = INT8_MAX;
	volatile int16_t x3715 = 15;
	uint16_t x3716 = 5U;
	volatile int32_t t57 = 127498;

	t57 = (x3713*(x3714<=(x3715>>x3716)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x3813 = UINT16_MAX;
	volatile int32_t x3814 = INT32_MIN;
	volatile uint16_t x3815 = 24665U;
	int8_t x3816 = 1;

	t58 = (x3813*(x3814<=(x3815>>x3816)));

	if (t58 != 65535) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x3825 = UINT32_MAX;
	int32_t x3826 = 478551853;
	uint16_t x3827 = 6U;

	t59 = (x3825*(x3826<=(x3827>>x3828)));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x3869 = 5;
	int64_t x3870 = INT64_MAX;
	int64_t x3871 = INT64_MAX;

	t60 = (x3869*(x3870<=(x3871>>x3872)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x3926 = 0U;
	uint8_t x3927 = UINT8_MAX;
	static volatile uint8_t x3928 = 18U;
	static uint32_t t61 = UINT32_MAX;

	t61 = (x3925*(x3926<=(x3927>>x3928)));

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x4005 = INT8_MIN;
	volatile uint16_t x4007 = 21U;
	static uint8_t x4008 = 14U;
	volatile int32_t t62 = 13119704;

	t62 = (x4005*(x4006<=(x4007>>x4008)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x4061 = INT8_MAX;
	static int64_t x4062 = 405LL;
	uint64_t x4063 = 5073078754605166LLU;
	uint8_t x4064 = 1U;
	static volatile int32_t t63 = 2;

	t63 = (x4061*(x4062<=(x4063>>x4064)));

	if (t63 != 127) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x4109 = UINT8_MAX;
	volatile uint64_t x4111 = 836148685637917315LLU;
	volatile int32_t t64 = 208178748;

	t64 = (x4109*(x4110<=(x4111>>x4112)));

	if (t64 != 255) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x4281 = 41671U;
	int64_t x4282 = -1LL;
	static volatile int32_t x4283 = INT32_MAX;
	static uint16_t x4284 = 6U;
	volatile uint32_t t65 = 1220811U;

	t65 = (x4281*(x4282<=(x4283>>x4284)));

	if (t65 != 41671U) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x4298 = 144682211LLU;
	volatile uint8_t x4299 = 9U;
	static uint32_t x4300 = 7U;
	int32_t t66 = 27268;

	t66 = (x4297*(x4298<=(x4299>>x4300)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x4366 = 35;
	static uint8_t x4367 = 60U;
	uint32_t x4368 = 4U;
	volatile int32_t t67 = -447440;

	t67 = (x4365*(x4366<=(x4367>>x4368)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x4377 = UINT64_MAX;
	int8_t x4378 = -1;
	static int8_t x4380 = 0;
	volatile uint64_t t68 = UINT64_MAX;

	t68 = (x4377*(x4378<=(x4379>>x4380)));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x4425 = -1LL;
	uint8_t x4426 = 1U;
	volatile uint32_t x4427 = 64U;
	uint8_t x4428 = 14U;
	int64_t t69 = 5388944LL;

	t69 = (x4425*(x4426<=(x4427>>x4428)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x4481 = 101U;
	volatile int64_t x4482 = INT64_MAX;
	uint32_t x4483 = 313832U;
	int32_t t70 = -3407;

	t70 = (x4481*(x4482<=(x4483>>x4484)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x4485 = INT64_MIN;
	uint64_t x4486 = 2232360405LLU;
	volatile uint8_t x4487 = 8U;
	uint16_t x4488 = 7U;

	t71 = (x4485*(x4486<=(x4487>>x4488)));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x4517 = -28;
	int8_t x4519 = INT8_MAX;
	volatile uint8_t x4520 = 9U;
	volatile int32_t t72 = -350;

	t72 = (x4517*(x4518<=(x4519>>x4520)));

	if (t72 != -28) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x4521 = -1;
	uint8_t x4522 = 3U;
	uint64_t x4523 = UINT64_MAX;
	volatile uint16_t x4524 = 26U;
	volatile int32_t t73 = -389208;

	t73 = (x4521*(x4522<=(x4523>>x4524)));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x4621 = INT32_MIN;
	int32_t x4622 = 82995;
	volatile uint8_t x4623 = 1U;
	static uint8_t x4624 = 7U;

	t74 = (x4621*(x4622<=(x4623>>x4624)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x4681 = -2467585;
	static volatile int16_t x4682 = INT16_MIN;
	uint8_t x4683 = UINT8_MAX;
	uint8_t x4684 = 16U;
	int32_t t75 = -1787;

	t75 = (x4681*(x4682<=(x4683>>x4684)));

	if (t75 != -2467585) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x4733 = UINT16_MAX;
	static volatile int32_t t76 = -3591280;

	t76 = (x4733*(x4734<=(x4735>>x4736)));

	if (t76 != 65535) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x4829 = UINT16_MAX;
	uint8_t x4830 = 5U;
	uint16_t x4831 = 458U;
	static uint16_t x4832 = 2U;

	t77 = (x4829*(x4830<=(x4831>>x4832)));

	if (t77 != 65535) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x4882 = INT64_MIN;
	volatile int8_t x4884 = 7;
	int32_t t78 = -435;

	t78 = (x4881*(x4882<=(x4883>>x4884)));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x4917 = -1;
	uint16_t x4918 = 29489U;
	uint64_t x4919 = UINT64_MAX;
	static uint8_t x4920 = 1U;
	volatile int32_t t79 = -215449;

	t79 = (x4917*(x4918<=(x4919>>x4920)));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x4994 = INT64_MAX;
	uint64_t x4996 = 1LLU;
	static volatile int64_t t80 = 11701946576LL;

	t80 = (x4993*(x4994<=(x4995>>x4996)));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x5105 = INT32_MAX;
	static int16_t x5106 = INT16_MIN;
	int32_t x5107 = INT32_MAX;
	int32_t x5108 = 0;

	t81 = (x5105*(x5106<=(x5107>>x5108)));

	if (t81 != INT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x5259 = UINT32_MAX;
	volatile uint8_t x5260 = 6U;

	t82 = (x5257*(x5258<=(x5259>>x5260)));

	if (t82 != -116073672) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x5265 = INT64_MIN;
	int32_t x5266 = INT32_MIN;
	volatile uint8_t x5267 = UINT8_MAX;
	int64_t x5268 = 14LL;
	volatile int64_t t83 = INT64_MIN;

	t83 = (x5265*(x5266<=(x5267>>x5268)));

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x5364 = 7U;
	int32_t t84 = -3835127;

	t84 = (x5361*(x5362<=(x5363>>x5364)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x5405 = 627788LLU;
	static uint32_t x5406 = UINT32_MAX;
	uint8_t x5407 = 38U;
	uint8_t x5408 = 1U;
	static uint64_t t85 = 711681255529LLU;

	t85 = (x5405*(x5406<=(x5407>>x5408)));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x5465 = UINT8_MAX;
	int16_t x5466 = INT16_MIN;
	int64_t x5467 = INT64_MAX;
	int8_t x5468 = 45;
	volatile int32_t t86 = -5853158;

	t86 = (x5465*(x5466<=(x5467>>x5468)));

	if (t86 != 255) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x5485 = INT64_MIN;
	int8_t x5486 = INT8_MAX;
	uint64_t x5487 = UINT64_MAX;
	volatile int8_t x5488 = 57;
	volatile int64_t t87 = INT64_MIN;

	t87 = (x5485*(x5486<=(x5487>>x5488)));

	if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x5585 = UINT64_MAX;
	static volatile int8_t x5586 = 0;
	uint16_t x5587 = UINT16_MAX;
	uint16_t x5588 = 24U;
	uint64_t t88 = UINT64_MAX;

	t88 = (x5585*(x5586<=(x5587>>x5588)));

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x5633 = INT16_MIN;
	int32_t x5634 = -1;
	uint8_t x5635 = UINT8_MAX;
	int32_t t89 = -43601087;

	t89 = (x5633*(x5634<=(x5635>>x5636)));

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x5825 = 3U;
	uint16_t x5826 = 1U;
	uint16_t x5828 = 5U;
	int32_t t90 = 404;

	t90 = (x5825*(x5826<=(x5827>>x5828)));

	if (t90 != 3) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x5837 = INT16_MIN;
	int16_t x5839 = 5;
	int32_t x5840 = 1;
	int32_t t91 = -25160446;

	t91 = (x5837*(x5838<=(x5839>>x5840)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int32_t x5885 = INT32_MAX;
	volatile uint32_t x5886 = 16186164U;
	int8_t x5887 = INT8_MAX;
	uint8_t x5888 = 9U;

	t92 = (x5885*(x5886<=(x5887>>x5888)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x5907 = 7103031139699477305LLU;
	volatile uint64_t x5908 = 21LLU;
	int32_t t93 = -6809285;

	t93 = (x5905*(x5906<=(x5907>>x5908)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x5917 = -356;
	int16_t x5918 = -4;
	volatile uint64_t x5919 = 140392LLU;
	volatile int16_t x5920 = 0;
	volatile int32_t t94 = -2722;

	t94 = (x5917*(x5918<=(x5919>>x5920)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x5922 = 1U;
	static int64_t x5924 = 1LL;
	int32_t t95 = -22259;

	t95 = (x5921*(x5922<=(x5923>>x5924)));

	if (t95 != -128) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x6125 = UINT16_MAX;
	volatile int16_t x6126 = -6375;
	static uint16_t x6128 = 1U;
	static volatile int32_t t96 = -18;

	t96 = (x6125*(x6126<=(x6127>>x6128)));

	if (t96 != 65535) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x6177 = -78;
	int16_t x6178 = INT16_MAX;
	uint32_t x6179 = 295U;
	static int32_t x6180 = 1;

	t97 = (x6177*(x6178<=(x6179>>x6180)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x6185 = INT8_MAX;
	uint16_t x6186 = UINT16_MAX;
	int64_t x6187 = INT64_MAX;
	uint16_t x6188 = 7U;
	int32_t t98 = -87770212;

	t98 = (x6185*(x6186<=(x6187>>x6188)));

	if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x6206 = 28178834U;
	uint64_t x6207 = 702LLU;
	volatile uint32_t t99 = 4887215U;

	t99 = (x6205*(x6206<=(x6207>>x6208)));

	if (t99 != 0U) { NG(); } else { ; }
	
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


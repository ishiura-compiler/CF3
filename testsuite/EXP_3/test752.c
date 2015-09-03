#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int16_t x118 = 0;
int8_t x119 = 2;
volatile uint16_t x122 = 15U;
volatile int64_t t3 = -3182372339146LL;
int32_t x163 = 3520475;
volatile uint64_t t4 = 30909858241835LLU;
uint8_t x341 = UINT8_MAX;
int64_t x343 = -123LL;
volatile uint8_t x344 = 5U;
int64_t x379 = INT64_MAX;
int64_t x380 = INT64_MIN;
static uint16_t x402 = 6U;
volatile int8_t x498 = 1;
volatile uint64_t t9 = 676387986535LLU;
int64_t t10 = -147LL;
static uint8_t x550 = 1U;
int8_t x578 = 8;
static volatile int64_t x580 = -1LL;
int64_t x651 = -1LL;
int64_t t13 = 22045605298536519LL;
volatile uint32_t x657 = UINT32_MAX;
static int64_t x668 = 2697LL;
uint32_t x735 = 126134U;
uint8_t x1106 = 3U;
int8_t x1107 = INT8_MAX;
volatile int32_t t20 = 18988190;
int8_t x1228 = -1;
static int8_t x1298 = 1;
int8_t x1334 = 24;
int32_t x1357 = 43;
uint64_t x1501 = UINT64_MAX;
int16_t x1502 = 2;
uint8_t x1518 = 2U;
static volatile uint64_t t30 = 32LLU;
uint16_t x1821 = 9057U;
int16_t x1824 = 198;
uint64_t x2101 = UINT64_MAX;
volatile int32_t x2227 = INT32_MAX;
int32_t x2228 = -389263;
int32_t t37 = 88;
int8_t x2334 = 1;
uint16_t x2413 = UINT16_MAX;
uint8_t x2414 = 2U;
volatile int32_t t39 = -106562243;
uint64_t t40 = 216828726650389431LLU;
static volatile int64_t x2580 = INT64_MAX;
static uint16_t x2653 = UINT16_MAX;
static uint32_t x2654 = 14U;
volatile int8_t x2655 = -1;
static int16_t x2684 = -1;
volatile int32_t t45 = 1005056714;
int32_t x2725 = 244;
volatile int64_t t46 = 4949646LL;
uint32_t x2733 = UINT32_MAX;
volatile uint64_t t47 = 48495655083999LLU;
int64_t x2823 = INT64_MIN;
int8_t x2824 = INT8_MIN;
uint8_t x2914 = 15U;
static int16_t x2919 = -1;
uint8_t x2990 = 13U;
int32_t t54 = 1;
uint8_t x3373 = UINT8_MAX;
int16_t x3375 = INT16_MIN;
int32_t x3376 = 2;
int16_t x3410 = 0;
static volatile uint64_t t57 = 2626571LLU;
uint64_t x3533 = 980LLU;
static volatile int64_t x3536 = 144LL;
int64_t t59 = 1LL;
uint64_t x3705 = 150572483198898LLU;
volatile uint8_t x3706 = 24U;
int64_t x3707 = INT64_MAX;
static volatile int32_t x3708 = -1;
static volatile uint64_t x4037 = 11604356922LLU;
static volatile uint8_t x4058 = 21U;
volatile int16_t x4230 = 8;
uint32_t x4453 = UINT32_MAX;
int16_t x4525 = INT16_MAX;
uint16_t x4526 = 0U;
uint16_t x4527 = UINT16_MAX;
uint64_t x4635 = 1402904LLU;
uint32_t x4728 = 3683U;
uint32_t t74 = 7U;
int16_t x4747 = INT16_MIN;
volatile int32_t t75 = -15346260;
static int32_t x4765 = 1;
int8_t x4801 = INT8_MAX;
uint32_t x4814 = 5U;
int8_t x4815 = -1;
int8_t x4816 = INT8_MAX;
volatile uint32_t t79 = 3733U;
uint8_t x4839 = 114U;
uint64_t x4877 = 271544450475052998LLU;
uint16_t x4878 = 1U;
uint64_t x4901 = 799083788944098511LLU;
int8_t x4902 = 23;
uint32_t x5185 = UINT32_MAX;
static int8_t x5190 = 60;
int32_t x5259 = INT32_MIN;
uint64_t x5277 = 21611654LLU;
uint64_t t90 = 544889997997241LLU;
volatile uint64_t t91 = 12396LLU;
int16_t x5646 = 0;
int64_t x5648 = INT64_MIN;
uint16_t x5766 = 0U;
uint16_t x5809 = UINT16_MAX;
int8_t x6011 = 5;
volatile uint64_t t96 = 16813LLU;
int16_t x6047 = 87;
volatile int32_t t97 = -411903148;
int64_t x6064 = -1LL;


void f0(void) {
	uint64_t x9 = UINT64_MAX;
	volatile uint32_t x10 = 3U;
	uint16_t x11 = UINT16_MAX;
	uint16_t x12 = 24819U;
	uint64_t t0 = 132LLU;

	t0 = ((x9<<x10)&(x11%x12));

	if (t0 != 15896LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x117 = UINT8_MAX;
	uint16_t x120 = 5U;
	volatile int32_t t1 = 25579692;

	t1 = ((x117<<x118)&(x119%x120));

	if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x121 = 336U;
	int8_t x123 = -1;
	static volatile int16_t x124 = INT16_MAX;
	int32_t t2 = -24732;

	t2 = ((x121<<x122)&(x123%x124));

	if (t2 != 11010048) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x137 = 134595LL;
	uint8_t x138 = 1U;
	int8_t x139 = INT8_MIN;
	static volatile int16_t x140 = -3039;

	t3 = ((x137<<x138)&(x139%x140));

	if (t3 != 269184LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x161 = 216096530779LLU;
	int16_t x162 = 15;
	static int64_t x164 = -1LL;

	t4 = ((x161<<x162)&(x163%x164));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x342 = 1;
	int64_t t5 = -1140947307062639596LL;

	t5 = ((x341<<x342)&(x343%x344));

	if (t5 != 508LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x377 = 91932447215340LLU;
	uint8_t x378 = 19U;
	uint64_t t6 = 2196205LLU;

	t6 = ((x377<<x378)&(x379%x380));

	if (t6 != 2082218701362298880LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x401 = 1;
	int64_t x403 = INT64_MIN;
	int32_t x404 = -12832;
	volatile int64_t t7 = -60226617LL;

	t7 = ((x401<<x402)&(x403%x404));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x417 = INT16_MAX;
	static volatile uint16_t x418 = 0U;
	int8_t x419 = INT8_MIN;
	uint16_t x420 = UINT16_MAX;
	volatile int32_t t8 = 5290;

	t8 = ((x417<<x418)&(x419%x420));

	if (t8 != 32640) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x497 = UINT64_MAX;
	int8_t x499 = 31;
	int16_t x500 = -1;

	t9 = ((x497<<x498)&(x499%x500));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x529 = UINT32_MAX;
	int8_t x530 = 0;
	int64_t x531 = INT64_MIN;
	int64_t x532 = INT64_MAX;

	t10 = ((x529<<x530)&(x531%x532));

	if (t10 != 4294967295LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x549 = 14802LLU;
	volatile uint16_t x551 = 2U;
	volatile int16_t x552 = -7769;
	volatile uint64_t t11 = 6710685009013050161LLU;

	t11 = ((x549<<x550)&(x551%x552));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x577 = UINT32_MAX;
	int8_t x579 = INT8_MIN;
	int64_t t12 = -335444891019612874LL;

	t12 = ((x577<<x578)&(x579%x580));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x649 = INT8_MAX;
	uint16_t x650 = 17U;
	int64_t x652 = INT64_MIN;

	t13 = ((x649<<x650)&(x651%x652));

	if (t13 != 16646144LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x658 = 1;
	uint64_t x659 = 3478265524LLU;
	uint16_t x660 = 26U;
	uint64_t t14 = 57363939752LLU;

	t14 = ((x657<<x658)&(x659%x660));

	if (t14 != 6LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x665 = 61377541606LLU;
	uint8_t x666 = 5U;
	int32_t x667 = INT32_MIN;
	volatile uint64_t t15 = 822LLU;

	t15 = ((x665<<x666)&(x667%x668));

	if (t15 != 1964081331328LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x733 = 91U;
	uint32_t x734 = 3U;
	static uint64_t x736 = UINT64_MAX;
	uint64_t t16 = 1LLU;

	t16 = ((x733<<x734)&(x735%x736));

	if (t16 != 144LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x793 = 0;
	uint8_t x794 = 2U;
	int64_t x795 = INT64_MIN;
	uint64_t x796 = UINT64_MAX;
	static uint64_t t17 = 60567126897436841LLU;

	t17 = ((x793<<x794)&(x795%x796));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x833 = 4757U;
	uint16_t x834 = 15U;
	int32_t x835 = INT32_MIN;
	uint32_t x836 = UINT32_MAX;
	uint32_t t18 = 6U;

	t18 = ((x833<<x834)&(x835%x836));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x845 = UINT32_MAX;
	int16_t x846 = 26;
	uint32_t x847 = UINT32_MAX;
	static int32_t x848 = INT32_MAX;
	uint32_t t19 = 26056363U;

	t19 = ((x845<<x846)&(x847%x848));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1105 = UINT8_MAX;
	int32_t x1108 = INT32_MIN;

	t20 = ((x1105<<x1106)&(x1107%x1108));

	if (t20 != 120) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x1121 = UINT16_MAX;
	int16_t x1122 = 7;
	int32_t x1123 = INT32_MIN;
	int64_t x1124 = INT64_MAX;
	int64_t t21 = 2813995LL;

	t21 = ((x1121<<x1122)&(x1123%x1124));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x1225 = 21523U;
	static volatile int16_t x1226 = 7;
	uint8_t x1227 = 1U;
	int32_t t22 = 675152;

	t22 = ((x1225<<x1226)&(x1227%x1228));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x1297 = 26860164U;
	uint32_t x1299 = UINT32_MAX;
	int64_t x1300 = INT64_MIN;
	int64_t t23 = -1388941257694758077LL;

	t23 = ((x1297<<x1298)&(x1299%x1300));

	if (t23 != 53720328LL) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x1333 = INT8_MAX;
	int8_t x1335 = INT8_MIN;
	int16_t x1336 = INT16_MAX;
	static int32_t t24 = 31;

	t24 = ((x1333<<x1334)&(x1335%x1336));

	if (t24 != 2130706432) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x1349 = UINT64_MAX;
	static uint8_t x1350 = 33U;
	int8_t x1351 = -1;
	uint16_t x1352 = 10388U;
	volatile uint64_t t25 = 1LLU;

	t25 = ((x1349<<x1350)&(x1351%x1352));

	if (t25 != 18446744065119617024LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x1358 = 1;
	volatile uint16_t x1359 = 137U;
	int64_t x1360 = -1LL;
	static volatile int64_t t26 = 2041956LL;

	t26 = ((x1357<<x1358)&(x1359%x1360));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x1503 = 63U;
	static int8_t x1504 = -1;
	uint64_t t27 = 204398194451244LLU;

	t27 = ((x1501<<x1502)&(x1503%x1504));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1517 = 4418;
	int64_t x1519 = -600954287716563498LL;
	volatile uint16_t x1520 = UINT16_MAX;
	volatile int64_t t28 = 11306LL;

	t28 = ((x1517<<x1518)&(x1519%x1520));

	if (t28 != 16648LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1537 = 16125973363024LLU;
	int16_t x1538 = 1;
	static uint8_t x1539 = 82U;
	int16_t x1540 = INT16_MIN;
	uint64_t t29 = 41LLU;

	t29 = ((x1537<<x1538)&(x1539%x1540));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1601 = 80325882LLU;
	uint8_t x1602 = 31U;
	uint64_t x1603 = 65148605556343LLU;
	volatile uint32_t x1604 = 1825U;

	t30 = ((x1601<<x1602)&(x1603%x1604));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1617 = 0;
	int16_t x1618 = 2;
	volatile int8_t x1619 = 4;
	int64_t x1620 = INT64_MAX;
	volatile int64_t t31 = -4LL;

	t31 = ((x1617<<x1618)&(x1619%x1620));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1749 = 10925598LLU;
	uint64_t x1750 = 0LLU;
	uint64_t x1751 = 254006469315LLU;
	static uint64_t x1752 = 13029LLU;
	volatile uint64_t t32 = 499340361067LLU;

	t32 = ((x1749<<x1750)&(x1751%x1752));

	if (t32 != 1538LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1822 = 2;
	volatile uint8_t x1823 = UINT8_MAX;
	int32_t t33 = -1;

	t33 = ((x1821<<x1822)&(x1823%x1824));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1985 = 48;
	int8_t x1986 = 22;
	static volatile uint8_t x1987 = 77U;
	int64_t x1988 = 18316LL;
	volatile int64_t t34 = 1287404525273422251LL;

	t34 = ((x1985<<x1986)&(x1987%x1988));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x2102 = 5U;
	volatile int32_t x2103 = INT32_MIN;
	volatile int16_t x2104 = -580;
	uint64_t t35 = 4754873LLU;

	t35 = ((x2101<<x2102)&(x2103%x2104));

	if (t35 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x2185 = 0U;
	volatile uint8_t x2186 = 5U;
	uint32_t x2187 = 0U;
	int8_t x2188 = -1;
	uint32_t t36 = 1232U;

	t36 = ((x2185<<x2186)&(x2187%x2188));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x2225 = INT16_MAX;
	uint8_t x2226 = 5U;

	t37 = ((x2225<<x2226)&(x2227%x2228));

	if (t37 != 308928) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x2333 = UINT16_MAX;
	static uint16_t x2335 = UINT16_MAX;
	volatile int16_t x2336 = 63;
	int32_t t38 = 67;

	t38 = ((x2333<<x2334)&(x2335%x2336));

	if (t38 != 14) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x2415 = INT16_MIN;
	int32_t x2416 = -1500;

	t39 = ((x2413<<x2414)&(x2415%x2416));

	if (t39 != 260876) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x2445 = 24539706U;
	static int16_t x2446 = 13;
	uint64_t x2447 = 3053654LLU;
	int16_t x2448 = 2;

	t40 = ((x2445<<x2446)&(x2447%x2448));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x2465 = INT8_MAX;
	static uint16_t x2466 = 11U;
	uint16_t x2467 = UINT16_MAX;
	volatile uint8_t x2468 = 7U;
	int32_t t41 = -2;

	t41 = ((x2465<<x2466)&(x2467%x2468));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x2577 = 783;
	volatile uint8_t x2578 = 1U;
	static uint64_t x2579 = 4985LLU;
	volatile uint64_t t42 = 142247082201972LLU;

	t42 = ((x2577<<x2578)&(x2579%x2580));

	if (t42 != 536LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2633 = INT16_MAX;
	uint8_t x2634 = 8U;
	int32_t x2635 = INT32_MAX;
	static uint64_t x2636 = 2881168581LLU;
	static volatile uint64_t t43 = 1446115935413356996LLU;

	t43 = ((x2633<<x2634)&(x2635%x2636));

	if (t43 != 8388352LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x2656 = 28218610;
	int32_t t44 = -2706;

	t44 = ((x2653<<x2654)&(x2655%x2656));

	if (t44 != 1073725440) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x2681 = 10090U;
	int8_t x2682 = 1;
	static uint16_t x2683 = 5193U;

	t45 = ((x2681<<x2682)&(x2683%x2684));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x2726 = 1U;
	volatile int64_t x2727 = -1LL;
	static int32_t x2728 = INT32_MAX;

	t46 = ((x2725<<x2726)&(x2727%x2728));

	if (t46 != 488LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x2734 = 0U;
	static uint64_t x2735 = 120LLU;
	volatile int16_t x2736 = INT16_MIN;

	t47 = ((x2733<<x2734)&(x2735%x2736));

	if (t47 != 120LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x2821 = INT8_MAX;
	volatile int16_t x2822 = 7;
	volatile int64_t t48 = -30474473262901475LL;

	t48 = ((x2821<<x2822)&(x2823%x2824));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x2913 = 0U;
	volatile int64_t x2915 = -1LL;
	volatile uint8_t x2916 = UINT8_MAX;
	volatile int64_t t49 = -64058679LL;

	t49 = ((x2913<<x2914)&(x2915%x2916));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x2917 = INT16_MAX;
	int16_t x2918 = 13;
	int64_t x2920 = INT64_MAX;
	static int64_t t50 = 18425443483551LL;

	t50 = ((x2917<<x2918)&(x2919%x2920));

	if (t50 != 268427264LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x2945 = 59U;
	int16_t x2946 = 0;
	volatile uint64_t x2947 = 196920721652965LLU;
	int32_t x2948 = -1;
	uint64_t t51 = 2150586172712890LLU;

	t51 = ((x2945<<x2946)&(x2947%x2948));

	if (t51 != 33LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x2989 = UINT32_MAX;
	volatile uint16_t x2991 = 15909U;
	static volatile uint64_t x2992 = UINT64_MAX;
	uint64_t t52 = 458LLU;

	t52 = ((x2989<<x2990)&(x2991%x2992));

	if (t52 != 8192LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x3125 = 3U;
	static uint8_t x3126 = 5U;
	int64_t x3127 = INT64_MAX;
	static uint16_t x3128 = 3U;
	volatile int64_t t53 = -59683LL;

	t53 = ((x3125<<x3126)&(x3127%x3128));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x3189 = INT8_MAX;
	volatile int16_t x3190 = 1;
	int8_t x3191 = -1;
	int8_t x3192 = INT8_MAX;

	t54 = ((x3189<<x3190)&(x3191%x3192));

	if (t54 != 254) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x3317 = UINT8_MAX;
	volatile int8_t x3318 = 0;
	static int8_t x3319 = -1;
	uint16_t x3320 = 6154U;
	int32_t t55 = 2;

	t55 = ((x3317<<x3318)&(x3319%x3320));

	if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x3374 = 3U;
	volatile int32_t t56 = 68576466;

	t56 = ((x3373<<x3374)&(x3375%x3376));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x3409 = UINT64_MAX;
	volatile int8_t x3411 = INT8_MIN;
	int8_t x3412 = INT8_MIN;

	t57 = ((x3409<<x3410)&(x3411%x3412));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x3534 = 2U;
	volatile uint64_t x3535 = 851LLU;
	uint64_t t58 = 483925LLU;

	t58 = ((x3533<<x3534)&(x3535%x3536));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x3601 = INT16_MAX;
	volatile int8_t x3602 = 5;
	int64_t x3603 = -641797244LL;
	uint16_t x3604 = 6825U;

	t59 = ((x3601<<x3602)&(x3603%x3604));

	if (t59 != 1047008LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t t60 = 206173202411817409LLU;

	t60 = ((x3705<<x3706)&(x3707%x3708));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x3869 = 12U;
	uint32_t x3870 = 0U;
	static int64_t x3871 = INT64_MIN;
	int64_t x3872 = -1LL;
	volatile int64_t t61 = 30054383LL;

	t61 = ((x3869<<x3870)&(x3871%x3872));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x3929 = UINT32_MAX;
	uint8_t x3930 = 5U;
	uint16_t x3931 = 26U;
	uint8_t x3932 = 1U;
	volatile uint32_t t62 = 66664U;

	t62 = ((x3929<<x3930)&(x3931%x3932));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x4038 = 0;
	static uint8_t x4039 = 14U;
	int8_t x4040 = INT8_MAX;
	volatile uint64_t t63 = 17414578LLU;

	t63 = ((x4037<<x4038)&(x4039%x4040));

	if (t63 != 10LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x4057 = 0U;
	int32_t x4059 = INT32_MAX;
	int8_t x4060 = 14;
	volatile int32_t t64 = -4548281;

	t64 = ((x4057<<x4058)&(x4059%x4060));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x4121 = INT16_MAX;
	uint8_t x4122 = 4U;
	int8_t x4123 = INT8_MAX;
	volatile int16_t x4124 = -1;
	int32_t t65 = 1016;

	t65 = ((x4121<<x4122)&(x4123%x4124));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x4177 = 28U;
	volatile int16_t x4178 = 6;
	uint8_t x4179 = 26U;
	int8_t x4180 = 1;
	volatile int32_t t66 = 283;

	t66 = ((x4177<<x4178)&(x4179%x4180));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x4193 = UINT32_MAX;
	uint8_t x4194 = 6U;
	static uint32_t x4195 = UINT32_MAX;
	static int8_t x4196 = 7;
	uint32_t t67 = 118955U;

	t67 = ((x4193<<x4194)&(x4195%x4196));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x4229 = UINT16_MAX;
	static int16_t x4231 = 1325;
	int64_t x4232 = INT64_MIN;
	int64_t t68 = 1343294679915069363LL;

	t68 = ((x4229<<x4230)&(x4231%x4232));

	if (t68 != 1280LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x4454 = 0;
	volatile int32_t x4455 = INT32_MIN;
	uint16_t x4456 = UINT16_MAX;
	volatile uint32_t t69 = 8213U;

	t69 = ((x4453<<x4454)&(x4455%x4456));

	if (t69 != 4294934528U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x4457 = 2043571LLU;
	int32_t x4458 = 1;
	uint32_t x4459 = 17U;
	int32_t x4460 = -102366303;
	static uint64_t t70 = 3633437238LLU;

	t70 = ((x4457<<x4458)&(x4459%x4460));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x4528 = UINT16_MAX;
	volatile int32_t t71 = -20443742;

	t71 = ((x4525<<x4526)&(x4527%x4528));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x4577 = 360U;
	volatile uint32_t x4578 = 2U;
	uint8_t x4579 = 16U;
	int8_t x4580 = INT8_MAX;
	volatile int32_t t72 = 274672618;

	t72 = ((x4577<<x4578)&(x4579%x4580));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x4633 = UINT32_MAX;
	uint16_t x4634 = 10U;
	volatile int64_t x4636 = INT64_MIN;
	volatile uint64_t t73 = 3892281562LLU;

	t73 = ((x4633<<x4634)&(x4635%x4636));

	if (t73 != 1402880LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x4725 = 13U;
	uint8_t x4726 = 5U;
	volatile int8_t x4727 = -1;

	t74 = ((x4725<<x4726)&(x4727%x4728));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x4745 = 56;
	int8_t x4746 = 1;
	int8_t x4748 = -32;

	t75 = ((x4745<<x4746)&(x4747%x4748));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x4766 = 2U;
	int16_t x4767 = INT16_MAX;
	int64_t x4768 = 2LL;
	volatile int64_t t76 = -124803LL;

	t76 = ((x4765<<x4766)&(x4767%x4768));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x4773 = INT8_MAX;
	volatile uint16_t x4774 = 1U;
	int16_t x4775 = -6903;
	int64_t x4776 = -67LL;
	volatile int64_t t77 = 1191167707723681332LL;

	t77 = ((x4773<<x4774)&(x4775%x4776));

	if (t77 != 254LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x4802 = 22LL;
	static int64_t x4803 = INT64_MIN;
	int16_t x4804 = INT16_MAX;
	volatile int64_t t78 = -2689710658198024101LL;

	t78 = ((x4801<<x4802)&(x4803%x4804));

	if (t78 != 532676608LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x4813 = UINT32_MAX;

	t79 = ((x4813<<x4814)&(x4815%x4816));

	if (t79 != 4294967264U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x4837 = UINT16_MAX;
	int16_t x4838 = 7;
	volatile int32_t x4840 = INT32_MAX;
	int32_t t80 = 41593547;

	t80 = ((x4837<<x4838)&(x4839%x4840));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x4845 = 6U;
	volatile int8_t x4846 = 25;
	volatile int32_t x4847 = -1;
	static uint16_t x4848 = UINT16_MAX;
	volatile uint32_t t81 = 559705U;

	t81 = ((x4845<<x4846)&(x4847%x4848));

	if (t81 != 201326592U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x4879 = INT32_MAX;
	uint64_t x4880 = 44179266121112LLU;
	volatile uint64_t t82 = 16508060881322LLU;

	t82 = ((x4877<<x4878)&(x4879%x4880));

	if (t82 != 1586929548LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x4903 = INT16_MIN;
	uint8_t x4904 = UINT8_MAX;
	volatile uint64_t t83 = 192982370LLU;

	t83 = ((x4901<<x4902)&(x4903%x4904));

	if (t83 != 4356358125746388992LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x4929 = 62434393414LL;
	int16_t x4930 = 1;
	static volatile int32_t x4931 = INT32_MIN;
	static volatile uint16_t x4932 = 3725U;
	static volatile int64_t t84 = -218533936403955827LL;

	t84 = ((x4929<<x4930)&(x4931%x4932));

	if (t84 != 124868784644LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x5105 = 0;
	uint16_t x5106 = 1U;
	int32_t x5107 = 376542;
	uint16_t x5108 = UINT16_MAX;
	int32_t t85 = 452153;

	t85 = ((x5105<<x5106)&(x5107%x5108));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x5186 = 24U;
	int16_t x5187 = INT16_MIN;
	int64_t x5188 = 394376LL;
	volatile int64_t t86 = 38404455779355578LL;

	t86 = ((x5185<<x5186)&(x5187%x5188));

	if (t86 != 4278190080LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x5189 = UINT64_MAX;
	static volatile int16_t x5191 = INT16_MAX;
	uint16_t x5192 = UINT16_MAX;
	volatile uint64_t t87 = 1867795LLU;

	t87 = ((x5189<<x5190)&(x5191%x5192));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x5257 = 1090U;
	volatile uint8_t x5258 = 4U;
	volatile int16_t x5260 = INT16_MIN;
	volatile int32_t t88 = 3588422;

	t88 = ((x5257<<x5258)&(x5259%x5260));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x5273 = INT16_MAX;
	int16_t x5274 = 9;
	uint16_t x5275 = 79U;
	uint32_t x5276 = 3820349U;
	volatile uint32_t t89 = 0U;

	t89 = ((x5273<<x5274)&(x5275%x5276));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x5278 = 28U;
	volatile int16_t x5279 = INT16_MAX;
	static uint16_t x5280 = UINT16_MAX;

	t90 = ((x5277<<x5278)&(x5279%x5280));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x5377 = 74773349LLU;
	static volatile uint16_t x5378 = 4U;
	uint16_t x5379 = 2339U;
	int16_t x5380 = INT16_MIN;

	t91 = ((x5377<<x5378)&(x5379%x5380));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x5645 = 47U;
	int32_t x5647 = INT32_MAX;
	static int64_t t92 = 3845619784662LL;

	t92 = ((x5645<<x5646)&(x5647%x5648));

	if (t92 != 47LL) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint8_t x5753 = UINT8_MAX;
	static int64_t x5754 = 7LL;
	uint8_t x5755 = 2U;
	int16_t x5756 = 8570;
	static int32_t t93 = 111252;

	t93 = ((x5753<<x5754)&(x5755%x5756));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x5765 = 3U;
	static int32_t x5767 = INT32_MAX;
	static int8_t x5768 = INT8_MAX;
	volatile int32_t t94 = 1;

	t94 = ((x5765<<x5766)&(x5767%x5768));

	if (t94 != 3) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x5810 = 1;
	int32_t x5811 = -1;
	uint8_t x5812 = UINT8_MAX;
	volatile int32_t t95 = 5725719;

	t95 = ((x5809<<x5810)&(x5811%x5812));

	if (t95 != 131070) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x6009 = INT8_MAX;
	uint8_t x6010 = 2U;
	static uint64_t x6012 = 13554646814423108LLU;

	t96 = ((x6009<<x6010)&(x6011%x6012));

	if (t96 != 4LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x6045 = 16U;
	uint16_t x6046 = 0U;
	int32_t x6048 = INT32_MAX;

	t97 = ((x6045<<x6046)&(x6047%x6048));

	if (t97 != 16) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x6061 = 0U;
	volatile int16_t x6062 = 0;
	int16_t x6063 = -904;
	int64_t t98 = -798452882169LL;

	t98 = ((x6061<<x6062)&(x6063%x6064));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x6125 = 14U;
	int8_t x6126 = 2;
	int8_t x6127 = -1;
	int32_t x6128 = 46024636;
	int32_t t99 = -72578421;

	t99 = ((x6125<<x6126)&(x6127%x6128));

	if (t99 != 56) { NG(); } else { ; }
	
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


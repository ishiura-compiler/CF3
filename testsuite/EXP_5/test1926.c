#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x15 = -14;
static volatile uint64_t t0 = 8LLU;
static volatile uint64_t x55 = 1LLU;
static volatile uint64_t x59 = 69096475401411LLU;
static uint8_t x60 = 5U;
uint64_t t2 = 4632085786403580697LLU;
uint64_t x223 = UINT64_MAX;
uint32_t t5 = 611061U;
int64_t x541 = INT64_MAX;
int32_t x542 = INT32_MAX;
uint32_t x543 = 3U;
uint16_t x613 = 3U;
volatile int8_t x616 = 0;
volatile uint32_t t9 = 1U;
int8_t x701 = INT8_MAX;
uint64_t x704 = 1LLU;
volatile uint32_t t11 = 190010407U;
volatile uint64_t x710 = 6399588934LLU;
static uint16_t x725 = 3396U;
uint64_t x1473 = 133319469826185123LLU;
uint64_t t20 = 315397346835968LLU;
int32_t x1646 = -1;
uint64_t t24 = 86152356670004261LLU;
uint32_t x2049 = 437783385U;
uint64_t t26 = 32367788595042946LLU;
static uint8_t x2291 = 14U;
uint8_t x2292 = 12U;
volatile int32_t t27 = 4157513;
static int32_t x2507 = 1146728;
static uint32_t x2567 = 560210U;
uint8_t x2756 = 7U;
uint32_t x2795 = 523475931U;
uint8_t x2796 = 5U;
volatile int64_t x2817 = 17015966LL;
static uint16_t x2820 = 8U;
int64_t t33 = 541761544LL;
int16_t x2926 = INT16_MAX;
static volatile uint8_t x2985 = 64U;
uint8_t x2988 = 27U;
int64_t x3014 = INT64_MIN;
volatile uint64_t x3015 = 15326188LLU;
static uint64_t x3016 = 1LLU;
int8_t x3206 = INT8_MIN;
volatile uint64_t t39 = 2031523157198894044LLU;
static uint64_t t45 = 802749LLU;
uint16_t x4128 = 50U;
uint16_t x4170 = 1U;
static int16_t x4418 = 15;
uint32_t t50 = 1U;
uint64_t t51 = 1230879546668LLU;
volatile uint8_t x4724 = 1U;
volatile uint32_t t52 = 1U;
volatile uint32_t t53 = 45893U;
uint32_t x5142 = 1808561446U;
uint32_t t56 = 500461U;
int8_t x5294 = INT8_MAX;
uint64_t x5373 = 498759978LLU;
uint8_t x5376 = 6U;
static int64_t x5505 = 10623LL;
int8_t x6063 = -6;
static int16_t x6167 = INT16_MAX;
static uint32_t x6168 = 10U;
static int32_t x6280 = 0;
int16_t x6509 = INT16_MIN;
int32_t x6510 = 276;
volatile int64_t t69 = -330758529LL;
int8_t x6534 = INT8_MAX;
volatile uint32_t t70 = 1999U;
volatile uint32_t t71 = 4328U;
static uint32_t t72 = 30583U;
static volatile int64_t t73 = -1058LL;
volatile uint64_t t74 = 141369LLU;
volatile uint32_t x6907 = UINT32_MAX;
uint8_t x6908 = 11U;
uint8_t x6937 = 9U;
static volatile uint8_t x6969 = UINT8_MAX;
uint32_t x6970 = 152576U;
int32_t x7074 = INT32_MIN;
volatile uint64_t x7261 = UINT64_MAX;
int16_t x7581 = INT16_MIN;
int64_t x7601 = -1313LL;
volatile uint8_t x7602 = 13U;
int64_t t86 = 240354002067LL;
uint16_t x8288 = 45U;
int32_t x8354 = -1;
static volatile uint16_t x8356 = 5U;
static volatile int16_t x8489 = -1;
static int16_t x8541 = -1;
int64_t x8553 = INT64_MIN;
volatile uint64_t t96 = 7LLU;
volatile int64_t x8574 = INT64_MAX;
static int16_t x8576 = 7;


void f0(void) {
	static int8_t x13 = 20;
	static uint64_t x14 = 916865174950804128LLU;
	static uint32_t x16 = 9U;

	t0 = (x13-((x14|x15)<<x16));

	if (t0 != 7188LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x53 = -26;
	static volatile int8_t x54 = INT8_MAX;
	uint8_t x56 = 2U;
	volatile uint64_t t1 = 1243LLU;

	t1 = (x53-((x54|x55)<<x56));

	if (t1 != 18446744073709551082LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x57 = 1U;
	uint64_t x58 = UINT64_MAX;

	t2 = (x57-((x58|x59)<<x60));

	if (t2 != 33LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x221 = INT64_MIN;
	volatile int32_t x222 = INT32_MIN;
	uint16_t x224 = 1U;
	uint64_t t3 = 1651095LLU;

	t3 = (x221-((x222|x223)<<x224));

	if (t3 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x389 = 8;
	uint32_t x390 = 1729382623U;
	int16_t x391 = 720;
	uint16_t x392 = 2U;
	static volatile uint32_t t4 = 203U;

	t4 = (x389-((x390|x391)<<x392));

	if (t4 != 1672402060U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x393 = -1;
	volatile int32_t x394 = -1;
	volatile uint32_t x395 = 341472115U;
	uint8_t x396 = 0U;

	t5 = (x393-((x394|x395)<<x396));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x525 = 1U;
	uint32_t x526 = 49U;
	int32_t x527 = 233763366;
	uint8_t x528 = 2U;
	volatile uint32_t t6 = 53U;

	t6 = (x525-((x526|x527)<<x528));

	if (t6 != 3359913765U) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x544 = 0U;
	int64_t t7 = -8317785LL;

	t7 = (x541-((x542|x543)<<x544));

	if (t7 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x614 = 4U;
	int8_t x615 = 1;
	static int32_t t8 = -2;

	t8 = (x613-((x614|x615)<<x616));

	if (t8 != -2) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x617 = UINT32_MAX;
	static uint8_t x618 = UINT8_MAX;
	volatile uint32_t x619 = 22740U;
	static uint32_t x620 = 0U;

	t9 = (x617-((x618|x619)<<x620));

	if (t9 != 4294944512U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x697 = INT16_MAX;
	static uint64_t x698 = UINT64_MAX;
	static uint64_t x699 = 3783LLU;
	uint32_t x700 = 22U;
	uint64_t t10 = 49571445589023LLU;

	t10 = (x697-((x698|x699)<<x700));

	if (t10 != 4227071LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x702 = 137728093U;
	volatile int16_t x703 = 1;

	t11 = (x701-((x702|x703)<<x704));

	if (t11 != 4019511237U) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x709 = 4U;
	int64_t x711 = INT64_MIN;
	int16_t x712 = 15;
	volatile uint64_t t12 = 71085945LLU;

	t12 = (x709-((x710|x711)<<x712));

	if (t12 != 18446534371979362308LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x726 = 1432597153LLU;
	int16_t x727 = INT16_MIN;
	static uint8_t x728 = 0U;
	uint64_t t13 = 4053582LLU;

	t13 = (x725-((x726|x727)<<x728));

	if (t13 != 23203LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x869 = -1;
	int64_t x870 = 902637LL;
	uint64_t x871 = UINT64_MAX;
	static volatile uint8_t x872 = 12U;
	static uint64_t t14 = 879701563490104LLU;

	t14 = (x869-((x870|x871)<<x872));

	if (t14 != 4095LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x1033 = UINT8_MAX;
	uint64_t x1034 = 3651LLU;
	int64_t x1035 = INT64_MIN;
	uint8_t x1036 = 2U;
	volatile uint64_t t15 = 21776LLU;

	t15 = (x1033-((x1034|x1035)<<x1036));

	if (t15 != 18446744073709537267LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x1153 = INT32_MAX;
	int8_t x1154 = -1;
	static volatile uint32_t x1155 = 28299996U;
	uint8_t x1156 = 0U;
	uint32_t t16 = 2602U;

	t16 = (x1153-((x1154|x1155)<<x1156));

	if (t16 != 2147483648U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x1445 = INT16_MIN;
	static int32_t x1446 = INT32_MAX;
	static uint32_t x1447 = 15U;
	uint32_t x1448 = 15U;
	uint32_t t17 = 1409363531U;

	t17 = (x1445-((x1446|x1447)<<x1448));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x1449 = UINT64_MAX;
	uint16_t x1450 = UINT16_MAX;
	int16_t x1451 = 33;
	int16_t x1452 = 1;
	uint64_t t18 = 40534230940660458LLU;

	t18 = (x1449-((x1450|x1451)<<x1452));

	if (t18 != 18446744073709420545LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x1457 = -1;
	static volatile uint32_t x1458 = 922024179U;
	volatile uint8_t x1459 = 15U;
	int8_t x1460 = 0;
	uint32_t t19 = 1500U;

	t19 = (x1457-((x1458|x1459)<<x1460));

	if (t19 != 3372943104U) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1474 = 25U;
	volatile uint32_t x1475 = UINT32_MAX;
	volatile int16_t x1476 = 1;

	t20 = (x1473-((x1474|x1475)<<x1476));

	if (t20 != 133319465531217829LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x1645 = INT8_MIN;
	uint32_t x1647 = 22U;
	uint32_t x1648 = 1U;
	uint32_t t21 = 3515950U;

	t21 = (x1645-((x1646|x1647)<<x1648));

	if (t21 != 4294967170U) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x1769 = -1;
	static int32_t x1770 = INT32_MIN;
	uint32_t x1771 = 99120U;
	static int8_t x1772 = 0;
	static volatile uint32_t t22 = 8271146U;

	t22 = (x1769-((x1770|x1771)<<x1772));

	if (t22 != 2147384527U) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1777 = UINT8_MAX;
	uint32_t x1778 = 53070U;
	uint8_t x1779 = UINT8_MAX;
	int8_t x1780 = 6;
	volatile uint32_t t23 = 1118923887U;

	t23 = (x1777-((x1778|x1779)<<x1780));

	if (t23 != 4291559743U) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x2033 = 8U;
	uint64_t x2034 = UINT64_MAX;
	volatile int16_t x2035 = INT16_MAX;
	static uint8_t x2036 = 38U;

	t24 = (x2033-((x2034|x2035)<<x2036));

	if (t24 != 274877906952LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x2041 = 1;
	uint16_t x2042 = 3261U;
	volatile int64_t x2043 = 66743154LL;
	uint32_t x2044 = 0U;
	static int64_t t25 = 23620874591LL;

	t25 = (x2041-((x2042|x2043)<<x2044));

	if (t25 != -66744318LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x2050 = 4022LLU;
	volatile int16_t x2051 = INT16_MIN;
	volatile int64_t x2052 = 1LL;

	t26 = (x2049-((x2050|x2051)<<x2052));

	if (t26 != 437840877LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x2289 = INT16_MIN;
	static volatile uint8_t x2290 = UINT8_MAX;

	t27 = (x2289-((x2290|x2291)<<x2292));

	if (t27 != -1077248) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x2505 = 6;
	volatile int64_t x2506 = 83927LL;
	uint8_t x2508 = 3U;
	int64_t t28 = 140201164763979289LL;

	t28 = (x2505-((x2506|x2507)<<x2508));

	if (t28 != -9175026LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x2565 = 7;
	int8_t x2566 = INT8_MIN;
	uint8_t x2568 = 16U;
	uint32_t t29 = 1U;

	t29 = (x2565-((x2566|x2567)<<x2568));

	if (t29 != 3014663U) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x2593 = 1U;
	static uint32_t x2594 = UINT32_MAX;
	static uint8_t x2595 = 0U;
	uint8_t x2596 = 4U;
	uint32_t t30 = 60121435U;

	t30 = (x2593-((x2594|x2595)<<x2596));

	if (t30 != 17U) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x2753 = INT64_MAX;
	uint64_t x2754 = 3147LLU;
	static int16_t x2755 = -1;
	static volatile uint64_t t31 = 765446LLU;

	t31 = (x2753-((x2754|x2755)<<x2756));

	if (t31 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x2793 = 623;
	int8_t x2794 = INT8_MIN;
	static uint32_t t32 = 650871U;

	t32 = (x2793-((x2794|x2795)<<x2796));

	if (t32 != 1807U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x2818 = INT32_MIN;
	uint32_t x2819 = UINT32_MAX;

	t33 = (x2817-((x2818|x2819)<<x2820));

	if (t33 != -4277951074LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x2925 = INT8_MAX;
	static volatile uint32_t x2927 = UINT32_MAX;
	static volatile uint8_t x2928 = 12U;
	volatile uint32_t t34 = 798U;

	t34 = (x2925-((x2926|x2927)<<x2928));

	if (t34 != 4223U) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x2986 = 3;
	int16_t x2987 = 3;
	int32_t t35 = -798059704;

	t35 = (x2985-((x2986|x2987)<<x2988));

	if (t35 != -402653120) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x3013 = 938U;
	uint64_t t36 = 14207258006639099LLU;

	t36 = (x3013-((x3014|x3015)<<x3016));

	if (t36 != 18446744073678900178LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x3017 = 1020264741506023LL;
	int8_t x3018 = INT8_MAX;
	uint8_t x3019 = 12U;
	uint8_t x3020 = 3U;
	int64_t t37 = 7012012LL;

	t37 = (x3017-((x3018|x3019)<<x3020));

	if (t37 != 1020264741505007LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x3073 = 4U;
	uint32_t x3074 = 27680U;
	int32_t x3075 = INT32_MIN;
	int32_t x3076 = 0;
	uint32_t t38 = 399800590U;

	t38 = (x3073-((x3074|x3075)<<x3076));

	if (t38 != 2147455972U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x3205 = INT32_MAX;
	uint64_t x3207 = UINT64_MAX;
	uint8_t x3208 = 5U;

	t39 = (x3205-((x3206|x3207)<<x3208));

	if (t39 != 2147483679LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x3265 = -1;
	uint32_t x3266 = 102484732U;
	uint16_t x3267 = 2155U;
	int8_t x3268 = 1;
	uint32_t t40 = 424U;

	t40 = (x3265-((x3266|x3267)<<x3268));

	if (t40 != 4089997825U) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x3317 = INT16_MAX;
	static uint64_t x3318 = UINT64_MAX;
	uint16_t x3319 = 1763U;
	uint8_t x3320 = 31U;
	uint64_t t41 = 69103792709856340LLU;

	t41 = (x3317-((x3318|x3319)<<x3320));

	if (t41 != 2147516415LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x3609 = INT64_MIN;
	uint64_t x3610 = UINT64_MAX;
	static int32_t x3611 = -1;
	int32_t x3612 = 0;
	volatile uint64_t t42 = 215862LLU;

	t42 = (x3609-((x3610|x3611)<<x3612));

	if (t42 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x3661 = -1;
	uint32_t x3662 = 101U;
	int8_t x3663 = -6;
	int8_t x3664 = 8;
	volatile uint32_t t43 = 19677274U;

	t43 = (x3661-((x3662|x3663)<<x3664));

	if (t43 != 255U) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x3761 = -1LL;
	uint8_t x3762 = 1U;
	uint32_t x3763 = 1U;
	volatile int16_t x3764 = 24;
	volatile int64_t t44 = -3441734988074372096LL;

	t44 = (x3761-((x3762|x3763)<<x3764));

	if (t44 != -16777217LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x3801 = INT16_MIN;
	volatile uint64_t x3802 = UINT64_MAX;
	uint64_t x3803 = 50370812LLU;
	uint16_t x3804 = 52U;

	t45 = (x3801-((x3802|x3803)<<x3804));

	if (t45 != 4503599627337728LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x4125 = INT32_MIN;
	volatile uint64_t x4126 = 2LLU;
	int32_t x4127 = INT32_MIN;
	uint64_t t46 = 13LLU;

	t46 = (x4125-((x4126|x4127)<<x4128));

	if (t46 != 18444492271748382720LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x4137 = UINT64_MAX;
	volatile int16_t x4138 = INT16_MIN;
	uint32_t x4139 = 170953U;
	uint8_t x4140 = 3U;
	uint64_t t47 = 1LLU;

	t47 = (x4137-((x4138|x4139)<<x4140));

	if (t47 != 18446744069414789559LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x4169 = 1;
	static uint16_t x4171 = UINT16_MAX;
	volatile int8_t x4172 = 15;
	int32_t t48 = -112;

	t48 = (x4169-((x4170|x4171)<<x4172));

	if (t48 != -2147450879) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x4417 = INT16_MAX;
	static uint16_t x4419 = UINT16_MAX;
	static uint16_t x4420 = 1U;
	int32_t t49 = 4512;

	t49 = (x4417-((x4418|x4419)<<x4420));

	if (t49 != -98303) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x4497 = INT16_MIN;
	volatile uint32_t x4498 = UINT32_MAX;
	volatile uint32_t x4499 = 15166069U;
	uint8_t x4500 = 1U;

	t50 = (x4497-((x4498|x4499)<<x4500));

	if (t50 != 4294934530U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x4621 = INT32_MIN;
	uint32_t x4622 = UINT32_MAX;
	static uint64_t x4623 = 1004383099567909LLU;
	volatile int16_t x4624 = 10;

	t51 = (x4621-((x4622|x4623)<<x4624));

	if (t51 != 17418252098847376384LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x4721 = -1;
	int8_t x4722 = -3;
	uint32_t x4723 = 2U;

	t52 = (x4721-((x4722|x4723)<<x4724));

	if (t52 != 1U) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x4733 = UINT8_MAX;
	volatile uint32_t x4734 = 3806091U;
	static int8_t x4735 = INT8_MIN;
	uint16_t x4736 = 3U;

	t53 = (x4733-((x4734|x4735)<<x4736));

	if (t53 != 1191U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x4861 = INT8_MAX;
	uint8_t x4862 = UINT8_MAX;
	int64_t x4863 = 2210519250878296LL;
	uint16_t x4864 = 12U;
	static int64_t t54 = 16LL;

	t54 = (x4861-((x4862|x4863)<<x4864));

	if (t54 != -9054286851598184321LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x5141 = -334024125;
	int32_t x5143 = -1;
	uint8_t x5144 = 2U;
	volatile uint32_t t55 = 247U;

	t55 = (x5141-((x5142|x5143)<<x5144));

	if (t55 != 3960943175U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x5189 = INT16_MAX;
	static uint32_t x5190 = 7U;
	int8_t x5191 = 0;
	int16_t x5192 = 3;

	t56 = (x5189-((x5190|x5191)<<x5192));

	if (t56 != 32711U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x5293 = INT64_MAX;
	uint32_t x5295 = 604326U;
	int8_t x5296 = 0;
	static volatile int64_t t57 = 61212073LL;

	t57 = (x5293-((x5294|x5295)<<x5296));

	if (t57 != 9223372036854171392LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x5374 = INT16_MIN;
	uint64_t x5375 = 1050076083388978LLU;
	uint64_t t58 = 75816LLU;

	t58 = (x5373-((x5374|x5375)<<x5376));

	if (t58 != 500821162LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x5385 = INT8_MAX;
	uint32_t x5386 = 37050U;
	int8_t x5387 = 4;
	volatile int16_t x5388 = 1;
	volatile uint32_t t59 = 640U;

	t59 = (x5385-((x5386|x5387)<<x5388));

	if (t59 != 4294893315U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x5506 = 8113;
	volatile uint8_t x5507 = 90U;
	uint16_t x5508 = 1U;
	static int64_t t60 = -18935823021840LL;

	t60 = (x5505-((x5506|x5507)<<x5508));

	if (t60 != -5751LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x5561 = -1;
	uint8_t x5562 = 61U;
	static uint8_t x5563 = UINT8_MAX;
	int32_t x5564 = 2;
	volatile int32_t t61 = -95;

	t61 = (x5561-((x5562|x5563)<<x5564));

	if (t61 != -1021) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x5565 = UINT8_MAX;
	int32_t x5566 = -1;
	uint64_t x5567 = 0LLU;
	int8_t x5568 = 39;
	volatile uint64_t t62 = 5LLU;

	t62 = (x5565-((x5566|x5567)<<x5568));

	if (t62 != 549755814143LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x5885 = INT8_MAX;
	uint32_t x5886 = 102437074U;
	volatile int16_t x5887 = INT16_MIN;
	volatile uint32_t x5888 = 1U;
	uint32_t t63 = 76219873U;

	t63 = (x5885-((x5886|x5887)<<x5888));

	if (t63 != 57051U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x6061 = 36357574017086LL;
	volatile uint32_t x6062 = UINT32_MAX;
	static uint8_t x6064 = 12U;
	volatile int64_t t64 = -127LL;

	t64 = (x6061-((x6062|x6063)<<x6064));

	if (t64 != 36353279053886LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x6165 = 1U;
	int64_t x6166 = 18985LL;
	int64_t t65 = 70160699LL;

	t65 = (x6165-((x6166|x6167)<<x6168));

	if (t65 != -33553407LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x6277 = UINT16_MAX;
	int16_t x6278 = -1;
	static uint64_t x6279 = 2404976551871LLU;
	uint64_t t66 = 2853514889415LLU;

	t66 = (x6277-((x6278|x6279)<<x6280));

	if (t66 != 65536LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x6305 = 10100;
	volatile int16_t x6306 = -117;
	volatile uint64_t x6307 = 458146608LLU;
	int8_t x6308 = 2;
	uint64_t t67 = 8808867LLU;

	t67 = (x6305-((x6306|x6307)<<x6308));

	if (t67 != 10376LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x6485 = 96352889654506840LLU;
	int16_t x6486 = 605;
	uint8_t x6487 = 16U;
	int16_t x6488 = 0;
	volatile uint64_t t68 = 28065LLU;

	t68 = (x6485-((x6486|x6487)<<x6488));

	if (t68 != 96352889654506235LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x6511 = 578908LL;
	uint16_t x6512 = 8U;

	t69 = (x6509-((x6510|x6511)<<x6512));

	if (t69 != -148233216LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x6533 = 12U;
	volatile uint32_t x6535 = UINT32_MAX;
	int8_t x6536 = 1;

	t70 = (x6533-((x6534|x6535)<<x6536));

	if (t70 != 14U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x6537 = INT8_MAX;
	uint32_t x6538 = 1928U;
	static volatile uint8_t x6539 = UINT8_MAX;
	static uint8_t x6540 = 6U;

	t71 = (x6537-((x6538|x6539)<<x6540));

	if (t71 != 4294836415U) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x6573 = 5U;
	uint8_t x6574 = UINT8_MAX;
	static uint32_t x6575 = UINT32_MAX;
	volatile int16_t x6576 = 1;

	t72 = (x6573-((x6574|x6575)<<x6576));

	if (t72 != 7U) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x6589 = 2370U;
	int64_t x6590 = 1207LL;
	volatile int8_t x6591 = INT8_MAX;
	volatile uint8_t x6592 = 27U;

	t73 = (x6589-((x6590|x6591)<<x6592));

	if (t73 != -171664471742LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x6645 = 349059407782660LLU;
	uint32_t x6646 = 8892U;
	int32_t x6647 = -19842;
	int32_t x6648 = 7;

	t74 = (x6645-((x6646|x6647)<<x6648));

	if (t74 != 349055115338756LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x6677 = -1LL;
	int32_t x6678 = -1;
	uint32_t x6679 = UINT32_MAX;
	volatile int8_t x6680 = 0;
	int64_t t75 = 233942487LL;

	t75 = (x6677-((x6678|x6679)<<x6680));

	if (t75 != -4294967296LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x6721 = INT16_MAX;
	uint16_t x6722 = UINT16_MAX;
	volatile int16_t x6723 = 174;
	uint8_t x6724 = 1U;
	volatile int32_t t76 = 124;

	t76 = (x6721-((x6722|x6723)<<x6724));

	if (t76 != -98303) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x6849 = 32U;
	static uint16_t x6850 = UINT16_MAX;
	int16_t x6851 = 3;
	static volatile int8_t x6852 = 13;
	int32_t t77 = 1;

	t77 = (x6849-((x6850|x6851)<<x6852));

	if (t77 != -536862688) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint8_t x6905 = 3U;
	uint8_t x6906 = 27U;
	volatile uint32_t t78 = 857U;

	t78 = (x6905-((x6906|x6907)<<x6908));

	if (t78 != 2051U) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int32_t x6938 = INT32_MIN;
	uint64_t x6939 = UINT64_MAX;
	volatile int32_t x6940 = 1;
	uint64_t t79 = 761LLU;

	t79 = (x6937-((x6938|x6939)<<x6940));

	if (t79 != 11LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x6971 = INT32_MIN;
	volatile uint16_t x6972 = 6U;
	volatile uint32_t t80 = 3041U;

	t80 = (x6969-((x6970|x6971)<<x6972));

	if (t80 != 4285202687U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x7073 = INT64_MIN;
	uint64_t x7075 = 3576085302815LLU;
	int16_t x7076 = 4;
	volatile uint64_t t81 = 254LLU;

	t81 = (x7073-((x7074|x7075)<<x7076));

	if (t81 != 9223372062814051856LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x7262 = UINT8_MAX;
	uint64_t x7263 = UINT64_MAX;
	volatile int64_t x7264 = 8LL;
	static uint64_t t82 = 2396342LLU;

	t82 = (x7261-((x7262|x7263)<<x7264));

	if (t82 != 255LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x7381 = 25U;
	int32_t x7382 = 311;
	volatile uint16_t x7383 = 7U;
	uint16_t x7384 = 3U;
	volatile uint32_t t83 = 6504U;

	t83 = (x7381-((x7382|x7383)<<x7384));

	if (t83 != 4294964833U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x7457 = -1;
	int8_t x7458 = INT8_MAX;
	int8_t x7459 = INT8_MAX;
	uint16_t x7460 = 8U;
	static int32_t t84 = -142512425;

	t84 = (x7457-((x7458|x7459)<<x7460));

	if (t84 != -32513) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x7582 = 5452318484589LLU;
	int32_t x7583 = 5196;
	volatile int8_t x7584 = 1;
	volatile uint64_t t85 = 10582274738219LLU;

	t85 = (x7581-((x7582|x7583)<<x7584));

	if (t85 != 18446733169072539430LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x7603 = 0;
	int16_t x7604 = 1;

	t86 = (x7601-((x7602|x7603)<<x7604));

	if (t86 != -1339LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x7789 = UINT16_MAX;
	static int8_t x7790 = INT8_MIN;
	uint64_t x7791 = 393443574591936LLU;
	int8_t x7792 = 24;
	volatile uint64_t t87 = 4150072548945300871LLU;

	t87 = (x7789-((x7790|x7791)<<x7792));

	if (t87 != 1073807359LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x7913 = UINT16_MAX;
	int64_t x7914 = 31LL;
	uint16_t x7915 = 3657U;
	uint64_t x7916 = 19LLU;
	volatile int64_t t88 = 1977730071437LL;

	t88 = (x7913-((x7914|x7915)<<x7916));

	if (t88 != -1928790017LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x8145 = UINT32_MAX;
	int8_t x8146 = INT8_MIN;
	static uint32_t x8147 = UINT32_MAX;
	static int16_t x8148 = 0;
	uint32_t t89 = 221008249U;

	t89 = (x8145-((x8146|x8147)<<x8148));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x8285 = 123436253LLU;
	uint64_t x8286 = 1LLU;
	volatile int8_t x8287 = 59;
	uint64_t t90 = 272LLU;

	t90 = (x8285-((x8286|x8287)<<x8288));

	if (t90 != 18444668195879746781LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x8329 = INT8_MIN;
	static uint16_t x8330 = UINT16_MAX;
	int16_t x8331 = INT16_MAX;
	volatile uint16_t x8332 = 9U;
	int32_t t91 = 1;

	t91 = (x8329-((x8330|x8331)<<x8332));

	if (t91 != -33554048) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x8353 = INT64_MIN;
	static uint64_t x8355 = 17879257633LLU;
	static volatile uint64_t t92 = 3LLU;

	t92 = (x8353-((x8354|x8355)<<x8356));

	if (t92 != 9223372036854775840LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x8433 = -1594;
	int32_t x8434 = INT32_MIN;
	static uint64_t x8435 = UINT64_MAX;
	uint32_t x8436 = 37U;
	volatile uint64_t t93 = 0LLU;

	t93 = (x8433-((x8434|x8435)<<x8436));

	if (t93 != 137438951878LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x8490 = 14LLU;
	volatile uint8_t x8491 = 95U;
	uint32_t x8492 = 0U;
	volatile uint64_t t94 = 118LLU;

	t94 = (x8489-((x8490|x8491)<<x8492));

	if (t94 != 18446744073709551520LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x8542 = 41502U;
	int16_t x8543 = 12;
	uint16_t x8544 = 6U;
	volatile uint32_t t95 = 25U;

	t95 = (x8541-((x8542|x8543)<<x8544));

	if (t95 != 4292311167U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x8554 = INT64_MIN;
	static uint64_t x8555 = 619747LLU;
	uint32_t x8556 = 35U;

	t96 = (x8553-((x8554|x8555)<<x8556));

	if (t96 != 9202077692080422912LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x8573 = 45137U;
	uint64_t x8575 = 79634670942LLU;
	volatile uint64_t t97 = 490379845932LLU;

	t97 = (x8573-((x8574|x8575)<<x8576));

	if (t97 != 45265LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x8625 = INT64_MAX;
	volatile int16_t x8626 = -1;
	static uint32_t x8627 = 183U;
	uint8_t x8628 = 12U;
	static volatile int64_t t98 = 20974995879LL;

	t98 = (x8625-((x8626|x8627)<<x8628));

	if (t98 != 9223372032559812607LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x8685 = INT32_MIN;
	uint8_t x8686 = 0U;
	static uint32_t x8687 = 12318666U;
	int8_t x8688 = 1;
	static uint32_t t99 = 6778U;

	t99 = (x8685-((x8686|x8687)<<x8688));

	if (t99 != 2122846316U) { NG(); } else { ; }
	
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


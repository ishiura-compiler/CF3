#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x4 = 3U;
int32_t x95 = INT32_MIN;
static int32_t t1 = 178;
uint8_t x199 = UINT8_MAX;
int32_t t2 = 0;
int8_t x224 = INT8_MIN;
uint8_t x251 = 1U;
int32_t x252 = INT32_MIN;
int16_t x355 = INT16_MIN;
int32_t t5 = -1;
int16_t x381 = 1;
uint32_t x382 = 20U;
volatile int8_t x384 = INT8_MIN;
uint8_t x485 = UINT8_MAX;
int64_t t8 = -9397212727355LL;
uint16_t x506 = 11U;
volatile uint8_t x617 = 72U;
uint64_t x690 = 0LLU;
int64_t t13 = -683894LL;
uint8_t x771 = UINT8_MAX;
static uint8_t x777 = 91U;
uint8_t x842 = 10U;
volatile int16_t x844 = -1;
volatile uint32_t t18 = 1U;
volatile int8_t x880 = 29;
volatile int32_t t21 = -1423;
volatile uint64_t t22 = 29491133122135792LLU;
uint64_t x993 = 10LLU;
int64_t x1000 = INT64_MIN;
uint64_t t26 = 4051885374290483553LLU;
volatile uint32_t t28 = 0U;
uint16_t x1369 = UINT16_MAX;
int16_t x1502 = 17;
volatile int32_t x1830 = 6;
static uint8_t x1907 = 35U;
int64_t t36 = 11LL;
uint8_t x2317 = 5U;
int8_t x2364 = INT8_MAX;
volatile uint64_t x2465 = 1626445342612848430LLU;
volatile int8_t x2466 = 1;
volatile int64_t x2598 = 25LL;
uint64_t x2708 = 385777713066653701LLU;
uint32_t x2779 = UINT32_MAX;
volatile int32_t x2921 = 16477023;
static uint8_t x2987 = UINT8_MAX;
uint16_t x3021 = 14017U;
uint64_t x3025 = 165LLU;
int16_t x3116 = INT16_MAX;
static int64_t t58 = -843LL;
volatile uint8_t x3133 = 1U;
int32_t x3324 = INT32_MAX;
uint8_t x3341 = UINT8_MAX;
volatile uint64_t t62 = 3594214273792LLU;
int16_t x3383 = 70;
uint16_t x3389 = UINT16_MAX;
volatile uint16_t x3471 = 19U;
uint8_t x3670 = 9U;
uint8_t x3685 = 0U;
int8_t x3686 = 3;
int64_t t70 = 25229679LL;
int64_t x3689 = 0LL;
uint16_t x3690 = 7U;
uint64_t t72 = 73962581124161LLU;
uint8_t x3723 = 5U;
volatile int16_t x3724 = -1;
int32_t t73 = -15;
int16_t x3833 = INT16_MAX;
int8_t x3836 = INT8_MIN;
volatile uint64_t t76 = 727902675833LLU;
int8_t x3948 = -1;
uint8_t x3988 = 2U;
int8_t x4029 = INT8_MAX;
int16_t x4035 = INT16_MIN;
int16_t x4094 = 0;
int64_t x4135 = 1138164979908550119LL;
int64_t t84 = -1LL;
uint32_t t85 = 2031540U;
int32_t x4204 = 501172377;
int32_t x4207 = -351762094;
int8_t x4208 = INT8_MIN;
uint16_t x4278 = 6U;
static uint16_t x4543 = 24U;
int32_t x4573 = 40213;
uint8_t x4574 = 14U;
int64_t x4575 = -35LL;
uint16_t x4576 = 12U;
int64_t t91 = -2722308LL;
static volatile uint32_t t92 = 3U;
static volatile uint16_t x4685 = UINT16_MAX;
int8_t x4811 = -14;
uint64_t x4812 = 79562628070471LLU;
static volatile uint16_t x4847 = 14U;
static uint32_t x4848 = 457632777U;
uint8_t x4942 = 5U;
uint32_t x4956 = UINT32_MAX;
volatile uint16_t x4993 = UINT16_MAX;


void f0(void) {
	static uint32_t x1 = 110368U;
	uint16_t x2 = 4U;
	volatile int8_t x3 = INT8_MIN;
	uint32_t t0 = 35240119U;

	t0 = ((x1>>x2)&(x3^x4));

	if (t0 != 6786U) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x93 = UINT16_MAX;
	uint8_t x94 = 8U;
	int8_t x96 = -59;

	t1 = ((x93>>x94)&(x95^x96));

	if (t1 != 197) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x197 = 16U;
	static int16_t x198 = 10;
	int8_t x200 = INT8_MIN;

	t2 = ((x197>>x198)&(x199^x200));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x221 = UINT64_MAX;
	uint8_t x222 = 8U;
	int8_t x223 = -1;
	volatile uint64_t t3 = 2714511425585467437LLU;

	t3 = ((x221>>x222)&(x223^x224));

	if (t3 != 127LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x249 = 11U;
	static int8_t x250 = 0;
	volatile int32_t t4 = 308;

	t4 = ((x249>>x250)&(x251^x252));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x353 = 3U;
	int8_t x354 = 3;
	int8_t x356 = -1;

	t5 = ((x353>>x354)&(x355^x356));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x383 = UINT32_MAX;
	uint32_t t6 = 51U;

	t6 = ((x381>>x382)&(x383^x384));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x473 = INT8_MAX;
	uint8_t x474 = 25U;
	int32_t x475 = INT32_MAX;
	int16_t x476 = INT16_MIN;
	int32_t t7 = 48;

	t7 = ((x473>>x474)&(x475^x476));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x486 = 10U;
	int64_t x487 = -973015213844899824LL;
	static int64_t x488 = INT64_MIN;

	t8 = ((x485>>x486)&(x487^x488));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x505 = UINT32_MAX;
	int64_t x507 = INT64_MAX;
	uint32_t x508 = 56899972U;
	int64_t t9 = 27346LL;

	t9 = ((x505>>x506)&(x507^x508));

	if (t9 != 1820283LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x581 = 12444;
	uint16_t x582 = 0U;
	static int64_t x583 = 16262141730620340LL;
	static uint8_t x584 = UINT8_MAX;
	int64_t t10 = 18LL;

	t10 = ((x581>>x582)&(x583^x584));

	if (t10 != 8LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x618 = 1LLU;
	uint32_t x619 = 233U;
	uint16_t x620 = 7849U;
	uint32_t t11 = 650864U;

	t11 = ((x617>>x618)&(x619^x620));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x673 = UINT16_MAX;
	uint8_t x674 = 6U;
	int8_t x675 = -1;
	int8_t x676 = INT8_MAX;
	int32_t t12 = -1;

	t12 = ((x673>>x674)&(x675^x676));

	if (t12 != 896) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x689 = 0;
	int32_t x691 = 1;
	static int64_t x692 = INT64_MAX;

	t13 = ((x689>>x690)&(x691^x692));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x713 = 4091082507543439LLU;
	volatile uint32_t x714 = 1U;
	int16_t x715 = 17;
	int32_t x716 = 29402;
	volatile uint64_t t14 = 13306LLU;

	t14 = ((x713>>x714)&(x715^x716));

	if (t14 != 28867LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x769 = 14262U;
	uint8_t x770 = 7U;
	int32_t x772 = -1;
	static volatile uint32_t t15 = 425U;

	t15 = ((x769>>x770)&(x771^x772));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x778 = 0U;
	static uint32_t x779 = 11U;
	volatile uint64_t x780 = 6854758140453197486LLU;
	uint64_t t16 = 113163947519671LLU;

	t16 = ((x777>>x778)&(x779^x780));

	if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x841 = 63U;
	int32_t x843 = INT32_MIN;
	static int32_t t17 = 1;

	t17 = ((x841>>x842)&(x843^x844));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x849 = 217U;
	uint16_t x850 = 3U;
	int32_t x851 = -57;
	int8_t x852 = INT8_MIN;

	t18 = ((x849>>x850)&(x851^x852));

	if (t18 != 3U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x865 = INT64_MAX;
	uint8_t x866 = 37U;
	volatile int64_t x867 = INT64_MAX;
	int16_t x868 = -1;
	volatile int64_t t19 = -243338822609443LL;

	t19 = ((x865>>x866)&(x867^x868));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x877 = 470583090791976LL;
	int8_t x878 = 0;
	uint32_t x879 = 2917U;
	int64_t t20 = 722585052134LL;

	t20 = ((x877>>x878)&(x879^x880));

	if (t20 != 552LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint8_t x893 = 3U;
	uint8_t x894 = 4U;
	int8_t x895 = INT8_MAX;
	int16_t x896 = INT16_MIN;

	t21 = ((x893>>x894)&(x895^x896));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x925 = 7212679LLU;
	volatile uint16_t x926 = 39U;
	int16_t x927 = -1;
	static int32_t x928 = INT32_MIN;

	t22 = ((x925>>x926)&(x927^x928));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x929 = 26508212;
	uint8_t x930 = 7U;
	int8_t x931 = 4;
	static int32_t x932 = INT32_MIN;
	volatile int32_t t23 = -213955;

	t23 = ((x929>>x930)&(x931^x932));

	if (t23 != 4) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x965 = INT32_MAX;
	uint32_t x966 = 22U;
	int32_t x967 = INT32_MIN;
	int8_t x968 = 24;
	volatile int32_t t24 = 2765;

	t24 = ((x965>>x966)&(x967^x968));

	if (t24 != 24) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x994 = 1;
	volatile int8_t x995 = INT8_MIN;
	int32_t x996 = -526;
	uint64_t t25 = 150333581036LLU;

	t25 = ((x993>>x994)&(x995^x996));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x997 = 91761448884799LLU;
	uint16_t x998 = 27U;
	uint32_t x999 = UINT32_MAX;

	t26 = ((x997>>x998)&(x999^x1000));

	if (t26 != 683676LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1173 = UINT64_MAX;
	uint64_t x1174 = 1LLU;
	uint64_t x1175 = UINT64_MAX;
	uint64_t x1176 = UINT64_MAX;
	volatile uint64_t t27 = 917LLU;

	t27 = ((x1173>>x1174)&(x1175^x1176));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x1277 = INT16_MAX;
	static uint8_t x1278 = 30U;
	static uint32_t x1279 = UINT32_MAX;
	static int16_t x1280 = 0;

	t28 = ((x1277>>x1278)&(x1279^x1280));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1337 = 512986153706LLU;
	int8_t x1338 = 0;
	uint64_t x1339 = 145942102145LLU;
	uint32_t x1340 = UINT32_MAX;
	uint64_t t29 = 109894547544566028LLU;

	t29 = ((x1337>>x1338)&(x1339^x1340));

	if (t29 != 141734445674LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x1370 = 23U;
	volatile uint32_t x1371 = 31257U;
	int8_t x1372 = INT8_MIN;
	uint32_t t30 = 11829933U;

	t30 = ((x1369>>x1370)&(x1371^x1372));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1381 = 10439;
	static uint8_t x1382 = 1U;
	static int16_t x1383 = INT16_MAX;
	int8_t x1384 = INT8_MAX;
	int32_t t31 = -1;

	t31 = ((x1381>>x1382)&(x1383^x1384));

	if (t31 != 5120) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1501 = 10990U;
	uint32_t x1503 = 146719U;
	uint8_t x1504 = UINT8_MAX;
	static volatile uint32_t t32 = 680544U;

	t32 = ((x1501>>x1502)&(x1503^x1504));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1797 = 8452828969141LLU;
	volatile uint8_t x1798 = 2U;
	int32_t x1799 = -93316;
	volatile int64_t x1800 = -8026654797LL;
	volatile uint64_t t33 = 1280408800LLU;

	t33 = ((x1797>>x1798)&(x1799^x1800));

	if (t33 != 73663501LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x1829 = 32060U;
	uint16_t x1831 = 0U;
	static int32_t x1832 = -1;
	volatile int32_t t34 = 2254817;

	t34 = ((x1829>>x1830)&(x1831^x1832));

	if (t34 != 500) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x1905 = 42931U;
	volatile int8_t x1906 = 0;
	int8_t x1908 = INT8_MAX;
	volatile uint32_t t35 = 18109128U;

	t35 = ((x1905>>x1906)&(x1907^x1908));

	if (t35 != 16U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x1913 = INT64_MAX;
	static uint8_t x1914 = 0U;
	uint8_t x1915 = 22U;
	int64_t x1916 = -543925922656731LL;

	t36 = ((x1913>>x1914)&(x1915^x1916));

	if (t36 != 9222828110932119091LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x2193 = 222568LLU;
	uint8_t x2194 = 1U;
	static uint64_t x2195 = 15886706LLU;
	uint16_t x2196 = UINT16_MAX;
	static uint64_t t37 = 126963090324LLU;

	t37 = ((x2193>>x2194)&(x2195^x2196));

	if (t37 != 37508LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x2197 = 59U;
	volatile uint8_t x2198 = 8U;
	uint32_t x2199 = UINT32_MAX;
	uint64_t x2200 = UINT64_MAX;
	uint64_t t38 = 399825510906LLU;

	t38 = ((x2197>>x2198)&(x2199^x2200));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x2229 = 5LL;
	uint8_t x2230 = 3U;
	static uint16_t x2231 = 55U;
	volatile int16_t x2232 = -1;
	volatile int64_t t39 = -10830LL;

	t39 = ((x2229>>x2230)&(x2231^x2232));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x2261 = 1U;
	volatile uint32_t x2262 = 0U;
	int8_t x2263 = 2;
	int16_t x2264 = INT16_MIN;
	int32_t t40 = -7626540;

	t40 = ((x2261>>x2262)&(x2263^x2264));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x2318 = 0LL;
	static int64_t x2319 = INT64_MIN;
	uint64_t x2320 = 2521LLU;
	volatile uint64_t t41 = 131071236476LLU;

	t41 = ((x2317>>x2318)&(x2319^x2320));

	if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x2361 = 52033394;
	volatile uint64_t x2362 = 26LLU;
	int64_t x2363 = -1LL;
	static volatile int64_t t42 = -652331848086615LL;

	t42 = ((x2361>>x2362)&(x2363^x2364));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2467 = INT64_MIN;
	int64_t x2468 = INT64_MIN;
	uint64_t t43 = 3718742074572016978LLU;

	t43 = ((x2465>>x2466)&(x2467^x2468));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x2469 = 10657LL;
	volatile uint32_t x2470 = 2U;
	volatile int32_t x2471 = -1;
	int8_t x2472 = -17;
	volatile int64_t t44 = 107LL;

	t44 = ((x2469>>x2470)&(x2471^x2472));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x2553 = INT64_MAX;
	volatile int16_t x2554 = 0;
	static int64_t x2555 = -527160408803LL;
	uint64_t x2556 = UINT64_MAX;
	volatile uint64_t t45 = 54127694213577382LLU;

	t45 = ((x2553>>x2554)&(x2555^x2556));

	if (t45 != 527160408802LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x2597 = 229U;
	int8_t x2599 = -1;
	static int64_t x2600 = INT64_MIN;
	static volatile int64_t t46 = 326095LL;

	t46 = ((x2597>>x2598)&(x2599^x2600));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x2605 = 30948U;
	int16_t x2606 = 1;
	volatile int8_t x2607 = -1;
	int32_t x2608 = INT32_MIN;
	static volatile uint32_t t47 = 134U;

	t47 = ((x2605>>x2606)&(x2607^x2608));

	if (t47 != 15474U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x2649 = INT64_MAX;
	int8_t x2650 = 5;
	static uint8_t x2651 = 61U;
	uint32_t x2652 = 769571828U;
	int64_t t48 = 172223LL;

	t48 = ((x2649>>x2650)&(x2651^x2652));

	if (t48 != 769571785LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x2705 = INT16_MAX;
	volatile int64_t x2706 = 6LL;
	uint32_t x2707 = 0U;
	volatile uint64_t t49 = 3231445096551626LLU;

	t49 = ((x2705>>x2706)&(x2707^x2708));

	if (t49 != 5LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint32_t x2777 = UINT32_MAX;
	uint8_t x2778 = 28U;
	volatile int64_t x2780 = 63LL;
	int64_t t50 = -132091823641458913LL;

	t50 = ((x2777>>x2778)&(x2779^x2780));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x2825 = 51U;
	volatile uint8_t x2826 = 18U;
	static int32_t x2827 = INT32_MIN;
	int8_t x2828 = -11;
	volatile int32_t t51 = -619668;

	t51 = ((x2825>>x2826)&(x2827^x2828));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x2849 = 47;
	int8_t x2850 = 14;
	uint32_t x2851 = 570U;
	int8_t x2852 = INT8_MIN;
	uint32_t t52 = 4592U;

	t52 = ((x2849>>x2850)&(x2851^x2852));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x2881 = 1;
	static uint16_t x2882 = 0U;
	int8_t x2883 = 0;
	static int64_t x2884 = INT64_MIN;
	int64_t t53 = 97394871652LL;

	t53 = ((x2881>>x2882)&(x2883^x2884));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x2922 = 6U;
	uint8_t x2923 = 76U;
	int32_t x2924 = INT32_MAX;
	volatile int32_t t54 = 13120;

	t54 = ((x2921>>x2922)&(x2923^x2924));

	if (t54 != 257441) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x2985 = 2797;
	uint16_t x2986 = 0U;
	int64_t x2988 = INT64_MAX;
	static int64_t t55 = 15255LL;

	t55 = ((x2985>>x2986)&(x2987^x2988));

	if (t55 != 2560LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x3022 = 0;
	uint16_t x3023 = UINT16_MAX;
	static uint64_t x3024 = 23693LLU;
	volatile uint64_t t56 = 12LLU;

	t56 = ((x3021>>x3022)&(x3023^x3024));

	if (t56 != 8768LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x3026 = 2U;
	int32_t x3027 = 625946311;
	int32_t x3028 = 5;
	uint64_t t57 = 55LLU;

	t57 = ((x3025>>x3026)&(x3027^x3028));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x3113 = 0LL;
	static int8_t x3114 = 0;
	int8_t x3115 = INT8_MIN;

	t58 = ((x3113>>x3114)&(x3115^x3116));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x3134 = 12LL;
	volatile int8_t x3135 = 1;
	int8_t x3136 = -36;
	volatile int32_t t59 = 5;

	t59 = ((x3133>>x3134)&(x3135^x3136));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x3205 = 25694LL;
	uint8_t x3206 = 13U;
	int32_t x3207 = INT32_MIN;
	int16_t x3208 = -1;
	volatile int64_t t60 = -1170071LL;

	t60 = ((x3205>>x3206)&(x3207^x3208));

	if (t60 != 3LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x3321 = 19U;
	int8_t x3322 = 9;
	uint8_t x3323 = UINT8_MAX;
	volatile int32_t t61 = -1725;

	t61 = ((x3321>>x3322)&(x3323^x3324));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x3342 = 9;
	static uint64_t x3343 = 4765LLU;
	int16_t x3344 = INT16_MAX;

	t62 = ((x3341>>x3342)&(x3343^x3344));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint8_t x3373 = 1U;
	static uint8_t x3374 = 0U;
	volatile int32_t x3375 = -3928;
	uint32_t x3376 = 301U;
	uint32_t t63 = 1986U;

	t63 = ((x3373>>x3374)&(x3375^x3376));

	if (t63 != 1U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x3381 = UINT32_MAX;
	uint32_t x3382 = 13U;
	int64_t x3384 = INT64_MAX;
	volatile int64_t t64 = -1497463201LL;

	t64 = ((x3381>>x3382)&(x3383^x3384));

	if (t64 != 524217LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x3390 = 1U;
	volatile int16_t x3391 = INT16_MIN;
	uint8_t x3392 = UINT8_MAX;
	int32_t t65 = -533823;

	t65 = ((x3389>>x3390)&(x3391^x3392));

	if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x3469 = 0;
	static uint8_t x3470 = 18U;
	uint8_t x3472 = UINT8_MAX;
	volatile int32_t t66 = 189;

	t66 = ((x3469>>x3470)&(x3471^x3472));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x3525 = 9814U;
	uint8_t x3526 = 8U;
	static volatile int64_t x3527 = -74LL;
	int32_t x3528 = INT32_MIN;
	int64_t t67 = 3797598973202822038LL;

	t67 = ((x3525>>x3526)&(x3527^x3528));

	if (t67 != 38LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x3541 = 10954503203LLU;
	uint8_t x3542 = 0U;
	int32_t x3543 = -332977;
	static int8_t x3544 = -2;
	volatile uint64_t t68 = 2099449LLU;

	t68 = ((x3541>>x3542)&(x3543^x3544));

	if (t68 != 5153LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x3669 = UINT8_MAX;
	static int64_t x3671 = INT64_MAX;
	int16_t x3672 = INT16_MIN;
	int64_t t69 = -581491477362LL;

	t69 = ((x3669>>x3670)&(x3671^x3672));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int64_t x3687 = INT64_MAX;
	static volatile int64_t x3688 = 26882166929LL;

	t70 = ((x3685>>x3686)&(x3687^x3688));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x3691 = 0;
	uint64_t x3692 = 371579313613085631LLU;
	volatile uint64_t t71 = 273693417718LLU;

	t71 = ((x3689>>x3690)&(x3691^x3692));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x3693 = 7004934915LLU;
	int8_t x3694 = 1;
	uint8_t x3695 = 18U;
	uint16_t x3696 = 3862U;

	t72 = ((x3693>>x3694)&(x3695^x3696));

	if (t72 != 2304LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x3721 = 2U;
	volatile int8_t x3722 = 1;

	t73 = ((x3721>>x3722)&(x3723^x3724));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x3834 = 0U;
	int16_t x3835 = INT16_MIN;
	volatile int32_t t74 = 861;

	t74 = ((x3833>>x3834)&(x3835^x3836));

	if (t74 != 32640) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x3849 = UINT16_MAX;
	int8_t x3850 = 1;
	volatile int64_t x3851 = INT64_MIN;
	int32_t x3852 = 193606;
	volatile int64_t t75 = 95584328251425LL;

	t75 = ((x3849>>x3850)&(x3851^x3852));

	if (t75 != 29766LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x3929 = UINT64_MAX;
	uint8_t x3930 = 0U;
	volatile int32_t x3931 = INT32_MIN;
	int64_t x3932 = INT64_MIN;

	t76 = ((x3929>>x3930)&(x3931^x3932));

	if (t76 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x3945 = UINT16_MAX;
	static volatile int8_t x3946 = 8;
	volatile int64_t x3947 = INT64_MAX;
	static volatile int64_t t77 = 1LL;

	t77 = ((x3945>>x3946)&(x3947^x3948));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x3985 = UINT8_MAX;
	static int8_t x3986 = 7;
	uint64_t x3987 = 12100384550LLU;
	volatile uint64_t t78 = 487303745138281LLU;

	t78 = ((x3985>>x3986)&(x3987^x3988));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x4030 = 28LL;
	volatile int16_t x4031 = 32;
	static int64_t x4032 = INT64_MIN;
	int64_t t79 = 21LL;

	t79 = ((x4029>>x4030)&(x4031^x4032));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int32_t x4033 = 17166;
	uint16_t x4034 = 8U;
	int64_t x4036 = -57160857LL;
	int64_t t80 = -7858409LL;

	t80 = ((x4033>>x4034)&(x4035^x4036));

	if (t80 != 67LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x4057 = 14645303146315LL;
	uint32_t x4058 = 7U;
	int8_t x4059 = INT8_MAX;
	volatile int32_t x4060 = -3003623;
	volatile int64_t t81 = -40859637LL;

	t81 = ((x4057>>x4058)&(x4059^x4060));

	if (t81 != 114416429670LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x4093 = 123726932U;
	volatile int16_t x4095 = 56;
	volatile uint8_t x4096 = UINT8_MAX;
	uint32_t t82 = 19U;

	t82 = ((x4093>>x4094)&(x4095^x4096));

	if (t82 != 68U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x4121 = INT8_MAX;
	int16_t x4122 = 1;
	static uint32_t x4123 = 185076U;
	int16_t x4124 = -1;
	volatile uint32_t t83 = 616310901U;

	t83 = ((x4121>>x4122)&(x4123^x4124));

	if (t83 != 11U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x4133 = INT32_MAX;
	uint8_t x4134 = 0U;
	int8_t x4136 = -1;

	t84 = ((x4133>>x4134)&(x4135^x4136));

	if (t84 != 616751640LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x4137 = 68U;
	uint8_t x4138 = 0U;
	uint32_t x4139 = 15461924U;
	int16_t x4140 = -1381;

	t85 = ((x4137>>x4138)&(x4139^x4140));

	if (t85 != 4U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x4201 = 118;
	uint16_t x4202 = 0U;
	static uint16_t x4203 = 500U;
	volatile int32_t t86 = -541528;

	t86 = ((x4201>>x4202)&(x4203^x4204));

	if (t86 != 100) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x4205 = INT8_MAX;
	int16_t x4206 = 1;
	static volatile int32_t t87 = 483266;

	t87 = ((x4205>>x4206)&(x4207^x4208));

	if (t87 != 18) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x4277 = 0U;
	uint64_t x4279 = 975917328521LLU;
	int64_t x4280 = INT64_MIN;
	uint64_t t88 = 4LLU;

	t88 = ((x4277>>x4278)&(x4279^x4280));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x4449 = INT64_MAX;
	uint8_t x4450 = 22U;
	static int32_t x4451 = -27;
	volatile int16_t x4452 = INT16_MIN;
	int64_t t89 = 135605730175685LL;

	t89 = ((x4449>>x4450)&(x4451^x4452));

	if (t89 != 32741LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x4541 = 22084254677625LLU;
	static uint8_t x4542 = 31U;
	int16_t x4544 = -1;
	volatile uint64_t t90 = 1202547249415655881LLU;

	t90 = ((x4541>>x4542)&(x4543^x4544));

	if (t90 != 10275LLU) { NG(); } else { ; }
	
}

void f91(void) {


	t91 = ((x4573>>x4574)&(x4575^x4576));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x4681 = 3;
	int16_t x4682 = 1;
	uint32_t x4683 = 61881U;
	uint16_t x4684 = 640U;

	t92 = ((x4681>>x4682)&(x4683^x4684));

	if (t92 != 1U) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x4686 = 0U;
	static int8_t x4687 = INT8_MIN;
	static int32_t x4688 = -356;
	int32_t t93 = -6869;

	t93 = ((x4685>>x4686)&(x4687^x4688));

	if (t93 != 284) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x4797 = UINT16_MAX;
	volatile uint64_t x4798 = 1LLU;
	static int16_t x4799 = INT16_MIN;
	uint16_t x4800 = UINT16_MAX;
	int32_t t94 = 51100;

	t94 = ((x4797>>x4798)&(x4799^x4800));

	if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x4809 = 22691873U;
	volatile uint16_t x4810 = 0U;
	static volatile uint64_t t95 = 28786982LLU;

	t95 = ((x4809>>x4810)&(x4811^x4812));

	if (t95 != 22020129LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x4845 = INT64_MAX;
	uint8_t x4846 = 0U;
	volatile int64_t t96 = 57509408298LL;

	t96 = ((x4845>>x4846)&(x4847^x4848));

	if (t96 != 457632775LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x4941 = 2;
	int8_t x4943 = INT8_MIN;
	uint64_t x4944 = 2449036913094LLU;
	volatile uint64_t t97 = 28639406801LLU;

	t97 = ((x4941>>x4942)&(x4943^x4944));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x4953 = 1391722161640115717LLU;
	int8_t x4954 = 6;
	uint16_t x4955 = 0U;
	uint64_t t98 = 44641LLU;

	t98 = ((x4953>>x4954)&(x4955^x4956));

	if (t98 != 3132777528LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x4994 = 0U;
	int32_t x4995 = -1;
	static uint32_t x4996 = 315799074U;
	volatile uint32_t t99 = 0U;

	t99 = ((x4993>>x4994)&(x4995^x4996));

	if (t99 != 18909U) { NG(); } else { ; }
	
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


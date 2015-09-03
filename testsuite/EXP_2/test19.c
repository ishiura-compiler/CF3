#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 1630;
uint32_t x90 = UINT32_MAX;
volatile uint64_t t2 = 23155565917265LLU;
int8_t x281 = INT8_MIN;
uint16_t x282 = UINT16_MAX;
int16_t x284 = 10;
volatile uint32_t t4 = 818870027U;
int8_t x298 = -1;
static int8_t x299 = INT8_MIN;
uint64_t x318 = UINT64_MAX;
int32_t x570 = -1;
volatile int32_t t9 = -40;
int16_t x678 = INT16_MAX;
volatile int8_t x803 = 5;
volatile int8_t x811 = INT8_MAX;
int16_t x822 = -1;
uint32_t t14 = 11278U;
uint16_t x834 = UINT16_MAX;
static int32_t x836 = 0;
static uint8_t x968 = 0U;
uint8_t x1040 = 1U;
uint8_t x1148 = 1U;
static uint16_t x1202 = 6U;
uint16_t x1204 = 0U;
int32_t x1218 = -1;
volatile uint32_t t27 = 15U;
volatile int16_t x1317 = -3910;
int8_t x1391 = INT8_MIN;
uint64_t t29 = 4560164081LLU;
volatile uint64_t t31 = 584562824197323LLU;
int8_t x1555 = INT8_MIN;
uint16_t x1614 = UINT16_MAX;
volatile int64_t t33 = -3104LL;
uint64_t t35 = 48515133LLU;
uint64_t x2089 = 2273LLU;
uint16_t x2090 = UINT16_MAX;
uint8_t x2281 = 0U;
static uint64_t t39 = 3603087870LLU;
int8_t x2408 = 39;
uint64_t t40 = 167311360LLU;
volatile uint64_t t41 = 5850699844LLU;
int32_t x2468 = 1;
uint32_t x2469 = 3U;
uint32_t x2477 = UINT32_MAX;
static uint64_t t45 = 19564LLU;
static int32_t x2575 = INT32_MIN;
volatile int8_t x2615 = INT8_MIN;
static uint16_t x2636 = 4U;
volatile int64_t t49 = -488827LL;
int32_t x2709 = INT32_MAX;
uint16_t x2716 = 6U;
volatile uint64_t t51 = 10519086954576LLU;
int64_t x2822 = INT64_MIN;
int64_t x2938 = INT64_MAX;
volatile uint8_t x3048 = 7U;
int16_t x3110 = -1;
int64_t x3193 = INT64_MAX;
static int32_t x3421 = INT32_MAX;
int32_t x3422 = INT32_MIN;
int32_t x3642 = INT32_MIN;
uint32_t x3643 = UINT32_MAX;
uint32_t x3696 = 2U;
int64_t t64 = 159461LL;
volatile int8_t x3751 = INT8_MIN;
int32_t x3790 = -89838572;
uint64_t x3806 = 381525LLU;
int64_t x3808 = 0LL;
volatile int16_t x3843 = INT16_MIN;
uint8_t x3844 = 14U;
int16_t x3854 = INT16_MIN;
int8_t x3894 = 49;
uint64_t x3895 = 0LLU;
volatile int32_t t73 = 14;
volatile uint64_t x3917 = UINT64_MAX;
volatile uint8_t x3919 = 13U;
uint8_t x3920 = 15U;
uint64_t t74 = 4LLU;
static int8_t x3949 = INT8_MAX;
volatile uint8_t x3952 = 11U;
uint32_t t75 = 1193822646U;
static int32_t t77 = -4336;
int32_t x4177 = INT32_MAX;
static int64_t x4178 = INT64_MIN;
uint64_t x4180 = 1LLU;
uint16_t x4380 = 0U;
volatile uint32_t t82 = 1U;
static uint32_t x4479 = 2281U;
int16_t x4530 = INT16_MIN;
uint16_t x4552 = 0U;
volatile int16_t x4801 = INT16_MAX;
int32_t x4804 = 7;
uint8_t x4852 = 1U;
uint64_t x4950 = UINT64_MAX;
volatile uint64_t x5109 = 60285365419419LLU;
uint8_t x5112 = 11U;
int8_t x5177 = INT8_MIN;
volatile int8_t x5249 = 0;
static uint8_t x5252 = 11U;
uint64_t t94 = 963485757882261249LLU;
static volatile int32_t t96 = 1790622;
uint8_t x5434 = 97U;
uint64_t t99 = 156287523056562197LLU;


void f0(void) {
	static int16_t x65 = -1;
	volatile int16_t x66 = INT16_MIN;
	uint16_t x67 = 20U;
	uint8_t x68 = 0U;

	t0 = ((x65-(x66+x67))<<x68);

	if (t0 != 32747) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x89 = 102020674379699315LLU;
	int64_t x91 = -1LL;
	uint64_t x92 = 5LLU;
	uint64_t t1 = 8LLU;

	t1 = ((x89-(x90+x91))<<x92);

	if (t1 != 3264661442711424672LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x153 = 173304896145LLU;
	int32_t x154 = -1;
	volatile int64_t x155 = 54975770201239LL;
	static uint8_t x156 = 34U;

	t2 = ((x153-(x154+x155))<<x156);

	if (t2 != 4185875865415974912LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x201 = UINT64_MAX;
	uint16_t x202 = 30U;
	static volatile int32_t x203 = INT32_MIN;
	static uint32_t x204 = 3U;
	volatile uint64_t t3 = 4380607827317LLU;

	t3 = ((x201-(x202+x203))<<x204);

	if (t3 != 17179868936LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x283 = 20440U;

	t4 = ((x281-(x282+x283))<<x284);

	if (t4 != 4206797824U) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x297 = INT8_MIN;
	int16_t x300 = 8;
	volatile int32_t t5 = -11069679;

	t5 = ((x297-(x298+x299))<<x300);

	if (t5 != 256) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x317 = 21906810541081LLU;
	volatile int64_t x319 = INT64_MIN;
	int16_t x320 = 12;
	uint64_t t6 = 1633LLU;

	t6 = ((x317-(x318+x319))<<x320);

	if (t6 != 89730295976271872LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x569 = 13LLU;
	int32_t x571 = -1033868;
	uint64_t x572 = 34LLU;
	uint64_t t7 = 1813LLU;

	t7 = ((x569-(x570+x571))<<x572);

	if (t7 != 17761957511692288LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x597 = INT32_MIN;
	uint32_t x598 = 782U;
	uint64_t x599 = UINT64_MAX;
	uint16_t x600 = 1U;
	static uint64_t t8 = 28102240LLU;

	t8 = ((x597-(x598+x599))<<x600);

	if (t8 != 18446744069414582758LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x649 = 116U;
	volatile int32_t x650 = -1;
	volatile int16_t x651 = -1;
	uint8_t x652 = 3U;

	t9 = ((x649-(x650+x651))<<x652);

	if (t9 != 944) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x677 = 46U;
	int64_t x679 = -1716568LL;
	static volatile uint8_t x680 = 0U;
	int64_t t10 = 5915743LL;

	t10 = ((x677-(x678+x679))<<x680);

	if (t10 != 1683847LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x713 = 526371506510LLU;
	volatile int32_t x714 = INT32_MIN;
	volatile uint8_t x715 = 7U;
	int64_t x716 = 2LL;
	uint64_t t11 = 331938942750627LLU;

	t11 = ((x713-(x714+x715))<<x716);

	if (t11 != 2114075960604LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x801 = 35816592388280138LLU;
	int32_t x802 = -1;
	uint8_t x804 = 4U;
	uint64_t t12 = 1311605LLU;

	t12 = ((x801-(x802+x803))<<x804);

	if (t12 != 573065478212482144LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x809 = 2252U;
	uint64_t x810 = 4602037249862614484LLU;
	int32_t x812 = 5;
	uint64_t t13 = 194075365495441LLU;

	t13 = ((x809-(x810+x811))<<x812);

	if (t13 != 308760594072817440LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x821 = 0U;
	uint32_t x823 = 422550U;
	uint8_t x824 = 0U;

	t14 = ((x821-(x822+x823))<<x824);

	if (t14 != 4294544747U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x833 = INT8_MIN;
	volatile uint64_t x835 = 567067356219635153LLU;
	volatile uint64_t t15 = 986296LLU;

	t15 = ((x833-(x834+x835))<<x836);

	if (t15 != 17879676717489850800LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x857 = 8139LLU;
	int32_t x858 = INT32_MIN;
	uint64_t x859 = 7801149841339129341LLU;
	volatile int8_t x860 = 7;
	uint64_t t16 = 4479242387939843LLU;

	t16 = ((x857-(x858+x859))<<x860);

	if (t16 != 16023744637495731968LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x913 = -1;
	int32_t x914 = -5118;
	int32_t x915 = -2041;
	int8_t x916 = 1;
	int32_t t17 = -3373;

	t17 = ((x913-(x914+x915))<<x916);

	if (t17 != 14316) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x965 = 30523547894174097LL;
	volatile uint32_t x966 = 87139076U;
	uint64_t x967 = 313LLU;
	static uint64_t t18 = 543163259371LLU;

	t18 = ((x965-(x966+x967))<<x968);

	if (t18 != 30523547807034708LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x1037 = -1;
	static volatile uint64_t x1038 = 70LLU;
	uint8_t x1039 = UINT8_MAX;
	uint64_t t19 = 20258311LLU;

	t19 = ((x1037-(x1038+x1039))<<x1040);

	if (t19 != 18446744073709550964LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1117 = -1;
	int8_t x1118 = -7;
	static volatile uint8_t x1119 = 1U;
	uint8_t x1120 = 0U;
	int32_t t20 = 32;

	t20 = ((x1117-(x1118+x1119))<<x1120);

	if (t20 != 5) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint16_t x1137 = UINT16_MAX;
	volatile int8_t x1138 = INT8_MAX;
	volatile int8_t x1139 = -6;
	static uint8_t x1140 = 1U;
	static int32_t t21 = -1;

	t21 = ((x1137-(x1138+x1139))<<x1140);

	if (t21 != 130828) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1145 = INT8_MAX;
	int16_t x1146 = INT16_MAX;
	int16_t x1147 = INT16_MIN;
	volatile int32_t t22 = -182362;

	t22 = ((x1145-(x1146+x1147))<<x1148);

	if (t22 != 256) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1169 = UINT64_MAX;
	volatile int8_t x1170 = INT8_MAX;
	int64_t x1171 = -1LL;
	static int8_t x1172 = 12;
	volatile uint64_t t23 = 334149537932LLU;

	t23 = ((x1169-(x1170+x1171))<<x1172);

	if (t23 != 18446744073709031424LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1201 = -1LL;
	uint64_t x1203 = 2481048877497803083LLU;
	uint64_t t24 = 200619522352623LLU;

	t24 = ((x1201-(x1202+x1203))<<x1204);

	if (t24 != 15965695196211748526LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1217 = -322;
	uint32_t x1219 = 115512U;
	int8_t x1220 = 3;
	volatile uint32_t t25 = 31U;

	t25 = ((x1217-(x1218+x1219))<<x1220);

	if (t25 != 4294040632U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1285 = -1;
	uint16_t x1286 = UINT16_MAX;
	static int64_t x1287 = -864766087058059170LL;
	uint32_t x1288 = 0U;
	volatile int64_t t26 = -107LL;

	t26 = ((x1285-(x1286+x1287))<<x1288);

	if (t26 != 864766087057993634LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1309 = UINT32_MAX;
	volatile uint32_t x1310 = 100625U;
	static volatile int16_t x1311 = 0;
	uint8_t x1312 = 3U;

	t27 = ((x1309-(x1310+x1311))<<x1312);

	if (t27 != 4294162288U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x1318 = UINT64_MAX;
	uint8_t x1319 = UINT8_MAX;
	uint8_t x1320 = 8U;
	volatile uint64_t t28 = 4874102393LLU;

	t28 = ((x1317-(x1318+x1319))<<x1320);

	if (t28 != 18446744073708485632LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1389 = 145918490659433356LLU;
	uint16_t x1390 = UINT16_MAX;
	uint8_t x1392 = 3U;

	t29 = ((x1389-(x1390+x1391))<<x1392);

	if (t29 != 1167347925274943592LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1469 = -1;
	int8_t x1470 = -1;
	uint32_t x1471 = 1311007733U;
	int8_t x1472 = 0;
	volatile uint32_t t30 = 359U;

	t30 = ((x1469-(x1470+x1471))<<x1472);

	if (t30 != 2983959563U) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1533 = 41750568LLU;
	int32_t x1534 = -1;
	int8_t x1535 = INT8_MIN;
	volatile uint8_t x1536 = 2U;

	t31 = ((x1533-(x1534+x1535))<<x1536);

	if (t31 != 167002788LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1553 = INT16_MAX;
	static uint16_t x1554 = 4U;
	uint8_t x1556 = 5U;
	int32_t t32 = 1;

	t32 = ((x1553-(x1554+x1555))<<x1556);

	if (t32 != 1052512) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x1613 = INT64_MAX;
	static int8_t x1615 = -3;
	int8_t x1616 = 0;

	t33 = ((x1613-(x1614+x1615))<<x1616);

	if (t33 != 9223372036854710275LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x1677 = 538U;
	static int8_t x1678 = INT8_MAX;
	static volatile int16_t x1679 = INT16_MIN;
	uint16_t x1680 = 0U;
	static int32_t t34 = -75193572;

	t34 = ((x1677-(x1678+x1679))<<x1680);

	if (t34 != 33179) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x1825 = INT32_MIN;
	int16_t x1826 = INT16_MIN;
	uint64_t x1827 = 23LLU;
	int32_t x1828 = 0;

	t35 = ((x1825-(x1826+x1827))<<x1828);

	if (t35 != 18446744071562100713LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x2091 = 0U;
	uint32_t x2092 = 55U;
	volatile uint64_t t36 = 241LLU;

	t36 = ((x2089-(x2090+x2091))<<x2092);

	if (t36 != 8142508126285856768LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x2217 = 0U;
	static int16_t x2218 = -1;
	uint8_t x2219 = 0U;
	volatile uint16_t x2220 = 1U;
	volatile int32_t t37 = 39841036;

	t37 = ((x2217-(x2218+x2219))<<x2220);

	if (t37 != 2) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int16_t x2282 = INT16_MIN;
	static int16_t x2283 = INT16_MIN;
	static uint64_t x2284 = 11LLU;
	int32_t t38 = 635758;

	t38 = ((x2281-(x2282+x2283))<<x2284);

	if (t38 != 134217728) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x2381 = UINT64_MAX;
	uint32_t x2382 = 4U;
	uint16_t x2383 = 90U;
	static int32_t x2384 = 11;

	t39 = ((x2381-(x2382+x2383))<<x2384);

	if (t39 != 18446744073709357056LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x2405 = UINT32_MAX;
	static uint64_t x2406 = 2399LLU;
	uint16_t x2407 = UINT16_MAX;

	t40 = ((x2405-(x2406+x2407))<<x2408);

	if (t40 != 18409396412493070336LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x2433 = 924261536476612850LLU;
	int64_t x2434 = INT64_MIN;
	uint32_t x2435 = UINT32_MAX;
	uint32_t x2436 = 0U;

	t41 = ((x2433-(x2434+x2435))<<x2436);

	if (t41 != 10147633569036421363LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x2441 = 0U;
	volatile uint8_t x2442 = UINT8_MAX;
	int32_t x2443 = 56699;
	uint16_t x2444 = 1U;
	static volatile uint32_t t42 = 24794U;

	t42 = ((x2441-(x2442+x2443))<<x2444);

	if (t42 != 4294853388U) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x2465 = INT64_MAX;
	volatile uint64_t x2466 = UINT64_MAX;
	volatile int64_t x2467 = 320188533182LL;
	uint64_t t43 = 543973458855209457LLU;

	t43 = ((x2465-(x2466+x2467))<<x2468);

	if (t43 != 18446743433332485252LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x2470 = -1;
	static uint16_t x2471 = UINT16_MAX;
	uint32_t x2472 = 0U;
	volatile uint32_t t44 = 124U;

	t44 = ((x2469-(x2470+x2471))<<x2472);

	if (t44 != 4294901765U) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x2478 = 4U;
	uint64_t x2479 = 39073LLU;
	int16_t x2480 = 1;

	t45 = ((x2477-(x2478+x2479))<<x2480);

	if (t45 != 8589856436LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x2573 = 777U;
	uint16_t x2574 = UINT16_MAX;
	volatile int8_t x2576 = 12;
	volatile uint32_t t46 = 1969346U;

	t46 = ((x2573-(x2574+x2575))<<x2576);

	if (t46 != 4029718528U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2613 = -285;
	static int64_t x2614 = -4726806LL;
	uint8_t x2616 = 1U;
	volatile int64_t t47 = 1523117709866174LL;

	t47 = ((x2613-(x2614+x2615))<<x2616);

	if (t47 != 9453298LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x2633 = INT64_MAX;
	uint64_t x2634 = UINT64_MAX;
	int32_t x2635 = -309118;
	volatile uint64_t t48 = 14LLU;

	t48 = ((x2633-(x2634+x2635))<<x2636);

	if (t48 != 4945888LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x2689 = 681U;
	static volatile int64_t x2690 = -3518LL;
	static int16_t x2691 = 3;
	static uint8_t x2692 = 2U;

	t49 = ((x2689-(x2690+x2691))<<x2692);

	if (t49 != 16784LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x2710 = INT32_MIN;
	int64_t x2711 = -86242110903LL;
	int16_t x2712 = 14;
	int64_t t50 = -1265979516209LL;

	t50 = ((x2709-(x2710+x2711))<<x2712);

	if (t50 != 1483359489196032LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x2713 = 2U;
	static uint64_t x2714 = 221LLU;
	volatile uint64_t x2715 = 53784LLU;

	t51 = ((x2713-(x2714+x2715))<<x2716);

	if (t51 != 18446744073706095424LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x2765 = 0;
	int16_t x2766 = 8360;
	int32_t x2767 = -23484222;
	int64_t x2768 = 4LL;
	int32_t t52 = 0;

	t52 = ((x2765-(x2766+x2767))<<x2768);

	if (t52 != 375613792) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x2821 = 65310268424381150LLU;
	uint16_t x2823 = UINT16_MAX;
	int32_t x2824 = 1;
	uint64_t t53 = 98101LLU;

	t53 = ((x2821-(x2822+x2823))<<x2824);

	if (t53 != 130620536848631230LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x2865 = UINT32_MAX;
	static int32_t x2866 = -171;
	static int8_t x2867 = INT8_MAX;
	int16_t x2868 = 1;
	uint32_t t54 = 72055312U;

	t54 = ((x2865-(x2866+x2867))<<x2868);

	if (t54 != 86U) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int32_t x2889 = 3164;
	static uint32_t x2890 = 3837682U;
	int32_t x2891 = -1;
	uint64_t x2892 = 3LLU;
	uint32_t t55 = 503479242U;

	t55 = ((x2889-(x2890+x2891))<<x2892);

	if (t55 != 4264291160U) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x2937 = 1866515U;
	static volatile int64_t x2939 = INT64_MIN;
	static uint8_t x2940 = 7U;
	int64_t t56 = 30319377967683333LL;

	t56 = ((x2937-(x2938+x2939))<<x2940);

	if (t56 != 238914048LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x3045 = 27293867918151853LL;
	volatile int8_t x3046 = INT8_MIN;
	int8_t x3047 = INT8_MIN;
	volatile int64_t t57 = 30882432995244546LL;

	t57 = ((x3045-(x3046+x3047))<<x3048);

	if (t57 != 3493615093523469952LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x3109 = 0LLU;
	static volatile uint8_t x3111 = 5U;
	int8_t x3112 = 49;
	static uint64_t t58 = 542369255LLU;

	t58 = ((x3109-(x3110+x3111))<<x3112);

	if (t58 != 18444492273895866368LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x3194 = -7004;
	static volatile int64_t x3195 = 8646LL;
	uint16_t x3196 = 0U;
	int64_t t59 = -1LL;

	t59 = ((x3193-(x3194+x3195))<<x3196);

	if (t59 != 9223372036854774165LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x3423 = 45442544LL;
	volatile uint8_t x3424 = 0U;
	int64_t t60 = 1LL;

	t60 = ((x3421-(x3422+x3423))<<x3424);

	if (t60 != 4249524751LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x3429 = INT16_MAX;
	uint32_t x3430 = UINT32_MAX;
	uint64_t x3431 = 42538385503LLU;
	int32_t x3432 = 0;
	volatile uint64_t t61 = 54LLU;

	t61 = ((x3429-(x3430+x3431))<<x3432);

	if (t61 != 18446744026876231585LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x3545 = INT16_MIN;
	int16_t x3546 = INT16_MIN;
	int8_t x3547 = INT8_MIN;
	uint8_t x3548 = 18U;
	volatile int32_t t62 = 1038758;

	t62 = ((x3545-(x3546+x3547))<<x3548);

	if (t62 != 33554432) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x3641 = INT32_MIN;
	static uint8_t x3644 = 0U;
	volatile uint32_t t63 = 454110U;

	t63 = ((x3641-(x3642+x3643))<<x3644);

	if (t63 != 1U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x3693 = INT32_MAX;
	int64_t x3694 = -12369752809988LL;
	static int32_t x3695 = 34768590;

	t64 = ((x3693-(x3694+x3695))<<x3696);

	if (t64 != 49487462100180LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x3749 = UINT64_MAX;
	volatile int16_t x3750 = INT16_MIN;
	int8_t x3752 = 5;
	uint64_t t65 = 16195952671757LLU;

	t65 = ((x3749-(x3750+x3751))<<x3752);

	if (t65 != 1052640LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x3789 = UINT8_MAX;
	uint16_t x3791 = UINT16_MAX;
	uint32_t x3792 = 0U;
	volatile int32_t t66 = -2566701;

	t66 = ((x3789-(x3790+x3791))<<x3792);

	if (t66 != 89773292) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x3805 = INT16_MIN;
	volatile uint16_t x3807 = 6U;
	static volatile uint64_t t67 = 1146654880580390LLU;

	t67 = ((x3805-(x3806+x3807))<<x3808);

	if (t67 != 18446744073709137317LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x3841 = INT8_MIN;
	volatile int8_t x3842 = INT8_MIN;
	static int32_t t68 = 152596889;

	t68 = ((x3841-(x3842+x3843))<<x3844);

	if (t68 != 536870912) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x3849 = INT64_MIN;
	static uint16_t x3850 = UINT16_MAX;
	uint64_t x3851 = 0LLU;
	volatile uint8_t x3852 = 14U;
	uint64_t t69 = 245909225293671LLU;

	t69 = ((x3849-(x3850+x3851))<<x3852);

	if (t69 != 18446744072635826176LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x3853 = -182;
	int32_t x3855 = -31046567;
	int8_t x3856 = 0;
	volatile int32_t t70 = -503042997;

	t70 = ((x3853-(x3854+x3855))<<x3856);

	if (t70 != 31079153) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x3885 = -1;
	int16_t x3886 = INT16_MIN;
	static int8_t x3887 = 4;
	volatile int8_t x3888 = 12;
	volatile int32_t t71 = -11414;

	t71 = ((x3885-(x3886+x3887))<<x3888);

	if (t71 != 134197248) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x3893 = 16LLU;
	int16_t x3896 = 9;
	static uint64_t t72 = 229LLU;

	t72 = ((x3893-(x3894+x3895))<<x3896);

	if (t72 != 18446744073709534720LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x3901 = 16596U;
	int16_t x3902 = 10631;
	int8_t x3903 = INT8_MIN;
	volatile int32_t x3904 = 6;

	t73 = ((x3901-(x3902+x3903))<<x3904);

	if (t73 != 389952) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x3918 = 2869LLU;

	t74 = ((x3917-(x3918+x3919))<<x3920);

	if (t74 != 18446744073615081472LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x3950 = 1U;
	uint32_t x3951 = UINT32_MAX;

	t75 = ((x3949-(x3950+x3951))<<x3952);

	if (t75 != 260096U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x3989 = UINT64_MAX;
	int64_t x3990 = INT64_MAX;
	volatile int64_t x3991 = -1LL;
	int64_t x3992 = 1LL;
	volatile uint64_t t76 = 587506218831994480LLU;

	t76 = ((x3989-(x3990+x3991))<<x3992);

	if (t76 != 2LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x4021 = 6052U;
	volatile int16_t x4022 = INT16_MIN;
	int16_t x4023 = -2533;
	int8_t x4024 = 1;

	t77 = ((x4021-(x4022+x4023))<<x4024);

	if (t77 != 82706) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x4141 = INT32_MIN;
	volatile uint16_t x4142 = UINT16_MAX;
	uint64_t x4143 = 61423LLU;
	uint8_t x4144 = 11U;
	uint64_t t78 = 23824LLU;

	t78 = ((x4141-(x4142+x4143))<<x4144);

	if (t78 != 18446739675403030528LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x4179 = 47978244296165640LLU;
	uint64_t t79 = 13LLU;

	t79 = ((x4177-(x4178+x4179))<<x4180);

	if (t79 != 18350787589412187630LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x4365 = INT8_MAX;
	static int16_t x4366 = -964;
	static int16_t x4367 = INT16_MIN;
	static int64_t x4368 = 1LL;
	volatile int32_t t80 = 1;

	t80 = ((x4365-(x4366+x4367))<<x4368);

	if (t80 != 67718) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x4377 = 4U;
	static volatile int16_t x4378 = -1;
	int16_t x4379 = -9;
	static uint32_t t81 = 4500U;

	t81 = ((x4377-(x4378+x4379))<<x4380);

	if (t81 != 14U) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x4421 = UINT32_MAX;
	int16_t x4422 = INT16_MIN;
	int8_t x4423 = -1;
	static uint8_t x4424 = 2U;

	t82 = ((x4421-(x4422+x4423))<<x4424);

	if (t82 != 131072U) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x4477 = 5U;
	int16_t x4478 = 1;
	static uint8_t x4480 = 0U;
	uint32_t t83 = 0U;

	t83 = ((x4477-(x4478+x4479))<<x4480);

	if (t83 != 4294965019U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x4529 = INT16_MIN;
	uint64_t x4531 = UINT64_MAX;
	uint8_t x4532 = 0U;
	volatile uint64_t t84 = 1742071715687988984LLU;

	t84 = ((x4529-(x4530+x4531))<<x4532);

	if (t84 != 1LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x4549 = 276496712U;
	uint8_t x4550 = 7U;
	int32_t x4551 = INT32_MIN;
	volatile uint32_t t85 = 216420883U;

	t85 = ((x4549-(x4550+x4551))<<x4552);

	if (t85 != 2423980353U) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x4802 = UINT32_MAX;
	static uint16_t x4803 = 3U;
	uint32_t t86 = 7925604U;

	t86 = ((x4801-(x4802+x4803))<<x4804);

	if (t86 != 4193920U) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x4849 = UINT64_MAX;
	volatile int8_t x4850 = INT8_MAX;
	int8_t x4851 = -1;
	volatile uint64_t t87 = 747197635LLU;

	t87 = ((x4849-(x4850+x4851))<<x4852);

	if (t87 != 18446744073709551362LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x4861 = 33410LLU;
	static uint16_t x4862 = 2U;
	uint8_t x4863 = 0U;
	uint64_t x4864 = 2LLU;
	volatile uint64_t t88 = 204LLU;

	t88 = ((x4861-(x4862+x4863))<<x4864);

	if (t88 != 133632LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x4949 = 0U;
	int8_t x4951 = INT8_MAX;
	volatile uint16_t x4952 = 63U;
	uint64_t t89 = 59069716LLU;

	t89 = ((x4949-(x4950+x4951))<<x4952);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x5005 = UINT16_MAX;
	int16_t x5006 = INT16_MIN;
	int16_t x5007 = INT16_MIN;
	uint32_t x5008 = 5U;
	volatile int32_t t90 = 1;

	t90 = ((x5005-(x5006+x5007))<<x5008);

	if (t90 != 4194272) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x5049 = 1236;
	int8_t x5050 = -1;
	static uint32_t x5051 = 82525415U;
	volatile int8_t x5052 = 1;
	static uint32_t t91 = 87667786U;

	t91 = ((x5049-(x5050+x5051))<<x5052);

	if (t91 != 4129918940U) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x5110 = 19LLU;
	int32_t x5111 = -1;
	uint64_t t92 = 61LLU;

	t92 = ((x5109-(x5110+x5111))<<x5112);

	if (t92 != 123464428378933248LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x5178 = 505397687062886549LLU;
	int16_t x5179 = INT16_MIN;
	uint8_t x5180 = 0U;
	uint64_t t93 = 762721381248798LLU;

	t93 = ((x5177-(x5178+x5179))<<x5180);

	if (t93 != 17941346386646697707LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x5250 = UINT64_MAX;
	int16_t x5251 = -2456;

	t94 = ((x5249-(x5250+x5251))<<x5252);

	if (t94 != 5031936LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x5265 = -4405;
	int16_t x5266 = INT16_MIN;
	uint8_t x5267 = 0U;
	uint64_t x5268 = 0LLU;
	static int32_t t95 = -903;

	t95 = ((x5265-(x5266+x5267))<<x5268);

	if (t95 != 28363) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x5269 = UINT8_MAX;
	uint8_t x5270 = 1U;
	int8_t x5271 = INT8_MIN;
	uint16_t x5272 = 1U;

	t96 = ((x5269-(x5270+x5271))<<x5272);

	if (t96 != 764) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x5353 = 1LLU;
	static int32_t x5354 = INT32_MAX;
	uint64_t x5355 = 221604685346597219LLU;
	int16_t x5356 = 22;
	uint64_t t97 = 3LLU;

	t97 = ((x5353-(x5354+x5355))<<x5356);

	if (t97 != 17113210903538434048LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x5385 = -3;
	volatile int16_t x5386 = INT16_MIN;
	static int16_t x5387 = -2;
	static uint8_t x5388 = 6U;
	int32_t t98 = 1074726;

	t98 = ((x5385-(x5386+x5387))<<x5388);

	if (t98 != 2097088) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x5433 = 470U;
	uint64_t x5435 = UINT64_MAX;
	uint32_t x5436 = 0U;

	t99 = ((x5433-(x5434+x5435))<<x5436);

	if (t99 != 374LLU) { NG(); } else { ; }
	
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


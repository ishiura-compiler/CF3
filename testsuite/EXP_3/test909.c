#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x21 = -1LL;
int64_t x69 = INT64_MIN;
volatile uint64_t x170 = 11123052964989653LLU;
int64_t x433 = INT64_MIN;
int16_t x434 = INT16_MIN;
static volatile uint16_t x435 = 9U;
volatile int32_t x553 = 10191127;
int16_t x556 = 49;
uint64_t t6 = 692158914636921103LLU;
volatile int32_t x590 = -1;
static uint8_t x701 = UINT8_MAX;
volatile int16_t x704 = 1;
uint8_t x796 = 2U;
int32_t t15 = -412;
uint32_t x1108 = 6U;
uint32_t x1111 = 61U;
int64_t t20 = -56798LL;
int32_t t21 = 1;
int8_t x1216 = 0;
static uint16_t x1421 = 1975U;
int32_t t25 = 1;
int32_t x1554 = INT32_MIN;
int16_t x1556 = 13;
volatile uint64_t t27 = 424LLU;
volatile uint16_t x1559 = 51U;
uint16_t x1747 = UINT16_MAX;
int8_t x1748 = 10;
int16_t x2057 = 3663;
uint8_t x2280 = 23U;
volatile uint64_t x2348 = 1LLU;
static uint8_t x2452 = 2U;
int16_t x2569 = -164;
static int8_t x2571 = 18;
uint8_t x2721 = 16U;
static int32_t x2834 = INT32_MIN;
static volatile int64_t x2925 = INT64_MIN;
int8_t x2927 = INT8_MAX;
static volatile int16_t x2943 = 0;
uint16_t x3185 = 2212U;
int8_t x3186 = -7;
int64_t t48 = INT64_MAX;
uint8_t x3228 = 4U;
volatile uint64_t t49 = 8541938030LLU;
int32_t x3321 = INT32_MAX;
static volatile uint8_t x3408 = 21U;


void f0(void) {
	int64_t x22 = -12082705710976LL;
	uint16_t x23 = UINT16_MAX;
	int16_t x24 = 0;
	int64_t t0 = -1664746948176LL;

	t0 = ((x21%x22)|(x23<<x24));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x70 = UINT32_MAX;
	int8_t x71 = INT8_MAX;
	uint64_t x72 = 24LLU;
	int64_t t1 = 148429023LL;

	t1 = ((x69%x70)|(x71<<x72));

	if (t1 != -16777216LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x97 = INT8_MAX;
	static int8_t x98 = INT8_MIN;
	static int32_t x99 = 369;
	volatile uint32_t x100 = 0U;
	static volatile int32_t t2 = -72651452;

	t2 = ((x97%x98)|(x99<<x100));

	if (t2 != 383) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x169 = UINT8_MAX;
	uint16_t x171 = 8731U;
	uint16_t x172 = 15U;
	uint64_t t3 = 153948LLU;

	t3 = ((x169%x170)|(x171<<x172));

	if (t3 != 286097663LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x301 = 1510U;
	static int16_t x302 = -8650;
	int64_t x303 = 93890LL;
	static volatile int8_t x304 = 3;
	volatile int64_t t4 = -1843290480403LL;

	t4 = ((x301%x302)|(x303<<x304));

	if (t4 != 751606LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x436 = 1U;
	volatile int64_t t5 = -4LL;

	t5 = ((x433%x434)|(x435<<x436));

	if (t5 != 18LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x554 = UINT8_MAX;
	static uint64_t x555 = UINT64_MAX;

	t6 = ((x553%x554)|(x555<<x556));

	if (t6 != 18446181123756130356LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x569 = INT16_MAX;
	uint8_t x570 = UINT8_MAX;
	static int8_t x571 = INT8_MAX;
	volatile int16_t x572 = 3;
	volatile int32_t t7 = 88;

	t7 = ((x569%x570)|(x571<<x572));

	if (t7 != 1023) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x589 = 3871323453468LLU;
	volatile uint64_t x591 = UINT64_MAX;
	int8_t x592 = 34;
	static volatile uint64_t t8 = 343024015050LLU;

	t8 = ((x589%x590)|(x591<<x592));

	if (t8 != 18446744062382569500LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x633 = INT16_MIN;
	int16_t x634 = -59;
	uint64_t x635 = UINT64_MAX;
	int8_t x636 = 1;
	volatile uint64_t t9 = UINT64_MAX;

	t9 = ((x633%x634)|(x635<<x636));

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x645 = INT16_MAX;
	int8_t x646 = -1;
	static uint16_t x647 = UINT16_MAX;
	uint8_t x648 = 1U;
	int32_t t10 = 14736;

	t10 = ((x645%x646)|(x647<<x648));

	if (t10 != 131070) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x702 = 86089U;
	uint8_t x703 = 21U;
	volatile uint32_t t11 = 81987541U;

	t11 = ((x701%x702)|(x703<<x704));

	if (t11 != 255U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x793 = INT16_MAX;
	int32_t x794 = INT32_MAX;
	volatile uint16_t x795 = 9747U;
	volatile int32_t t12 = -531060972;

	t12 = ((x793%x794)|(x795<<x796));

	if (t12 != 65535) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x817 = -1;
	static int8_t x818 = INT8_MAX;
	uint32_t x819 = 5U;
	uint8_t x820 = 3U;
	volatile uint32_t t13 = UINT32_MAX;

	t13 = ((x817%x818)|(x819<<x820));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x821 = INT16_MIN;
	int32_t x822 = INT32_MIN;
	static int64_t x823 = 536774192536972LL;
	int8_t x824 = 0;
	static volatile int64_t t14 = -7955131LL;

	t14 = ((x821%x822)|(x823<<x824));

	if (t14 != -25204LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x853 = -1;
	static int8_t x854 = INT8_MIN;
	int8_t x855 = 1;
	uint8_t x856 = 6U;

	t15 = ((x853%x854)|(x855<<x856));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x957 = UINT8_MAX;
	uint32_t x958 = 341U;
	static uint32_t x959 = 3U;
	int16_t x960 = 0;
	static volatile uint32_t t16 = 1611144U;

	t16 = ((x957%x958)|(x959<<x960));

	if (t16 != 255U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x1025 = 1;
	int32_t x1026 = -3642;
	uint64_t x1027 = 8104421863LLU;
	static uint16_t x1028 = 12U;
	uint64_t t17 = 105425213591947LLU;

	t17 = ((x1025%x1026)|(x1027<<x1028));

	if (t17 != 33195711950849LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x1041 = 1U;
	static uint32_t x1042 = 1962U;
	int32_t x1043 = 1;
	uint8_t x1044 = 15U;
	uint32_t t18 = 282219058U;

	t18 = ((x1041%x1042)|(x1043<<x1044));

	if (t18 != 32769U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x1105 = -1LL;
	uint64_t x1106 = 6531008576456571LLU;
	static uint16_t x1107 = UINT16_MAX;
	static uint64_t t19 = 1874735646LLU;

	t19 = ((x1105%x1106)|(x1107<<x1108));

	if (t19 != 3175853798195175LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x1109 = INT64_MIN;
	int32_t x1110 = -1;
	uint8_t x1112 = 5U;

	t20 = ((x1109%x1110)|(x1111<<x1112));

	if (t20 != 1952LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1149 = -1;
	uint8_t x1150 = 54U;
	volatile uint8_t x1151 = 22U;
	static int8_t x1152 = 1;

	t21 = ((x1149%x1150)|(x1151<<x1152));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x1213 = 1U;
	volatile uint16_t x1214 = UINT16_MAX;
	volatile uint32_t x1215 = UINT32_MAX;
	static volatile uint32_t t22 = UINT32_MAX;

	t22 = ((x1213%x1214)|(x1215<<x1216));

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x1237 = -1;
	int8_t x1238 = 1;
	static int8_t x1239 = INT8_MAX;
	volatile int16_t x1240 = 11;
	volatile int32_t t23 = -4925;

	t23 = ((x1237%x1238)|(x1239<<x1240));

	if (t23 != 260096) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1353 = INT32_MIN;
	uint16_t x1354 = 12444U;
	volatile int16_t x1355 = INT16_MAX;
	uint8_t x1356 = 2U;
	int32_t t24 = -15;

	t24 = ((x1353%x1354)|(x1355<<x1356));

	if (t24 != -4) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1422 = INT32_MIN;
	int32_t x1423 = 20414;
	uint32_t x1424 = 1U;

	t25 = ((x1421%x1422)|(x1423<<x1424));

	if (t25 != 40959) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1433 = 1;
	int64_t x1434 = -136011LL;
	volatile uint64_t x1435 = 15365971LLU;
	uint8_t x1436 = 0U;
	volatile uint64_t t26 = 115LLU;

	t26 = ((x1433%x1434)|(x1435<<x1436));

	if (t26 != 15365971LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x1553 = UINT64_MAX;
	static uint8_t x1555 = UINT8_MAX;

	t27 = ((x1553%x1554)|(x1555<<x1556));

	if (t27 != 2147483647LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1557 = INT8_MIN;
	int16_t x1558 = INT16_MAX;
	static int16_t x1560 = 0;
	static int32_t t28 = 124381063;

	t28 = ((x1557%x1558)|(x1559<<x1560));

	if (t28 != -77) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1745 = 25388;
	static volatile uint64_t x1746 = UINT64_MAX;
	volatile uint64_t t29 = 345662934076829383LLU;

	t29 = ((x1745%x1746)|(x1747<<x1748));

	if (t29 != 67108652LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x1765 = -1;
	static int64_t x1766 = -1LL;
	int8_t x1767 = 0;
	uint16_t x1768 = 24U;
	volatile int64_t t30 = 135580621762404LL;

	t30 = ((x1765%x1766)|(x1767<<x1768));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x1805 = 74127302;
	int16_t x1806 = -32;
	static volatile uint8_t x1807 = UINT8_MAX;
	uint16_t x1808 = 0U;
	volatile int32_t t31 = 43400;

	t31 = ((x1805%x1806)|(x1807<<x1808));

	if (t31 != 255) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1953 = UINT32_MAX;
	int32_t x1954 = 13;
	uint8_t x1955 = 122U;
	uint8_t x1956 = 4U;
	static uint32_t t32 = 887336335U;

	t32 = ((x1953%x1954)|(x1955<<x1956));

	if (t32 != 1960U) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x2058 = UINT32_MAX;
	uint16_t x2059 = 5U;
	uint32_t x2060 = 0U;
	volatile uint32_t t33 = 834343U;

	t33 = ((x2057%x2058)|(x2059<<x2060));

	if (t33 != 3663U) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x2233 = 9454U;
	int16_t x2234 = 1231;
	static uint8_t x2235 = UINT8_MAX;
	int8_t x2236 = 0;
	uint32_t t34 = 1425777328U;

	t34 = ((x2233%x2234)|(x2235<<x2236));

	if (t34 != 1023U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x2277 = -1;
	int64_t x2278 = INT64_MIN;
	volatile uint32_t x2279 = UINT32_MAX;
	int64_t t35 = -1094388148207LL;

	t35 = ((x2277%x2278)|(x2279<<x2280));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x2345 = -41;
	int8_t x2346 = INT8_MIN;
	int16_t x2347 = INT16_MAX;
	int32_t t36 = 854969537;

	t36 = ((x2345%x2346)|(x2347<<x2348));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x2449 = INT32_MAX;
	int16_t x2450 = -1;
	uint32_t x2451 = UINT32_MAX;
	volatile uint32_t t37 = 115769U;

	t37 = ((x2449%x2450)|(x2451<<x2452));

	if (t37 != 4294967292U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2513 = INT16_MIN;
	uint8_t x2514 = 71U;
	static uint32_t x2515 = 24441U;
	static volatile int16_t x2516 = 0;
	static volatile uint32_t t38 = 23392U;

	t38 = ((x2513%x2514)|(x2515<<x2516));

	if (t38 != 4294967291U) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x2570 = UINT32_MAX;
	uint8_t x2572 = 12U;
	volatile uint32_t t39 = 4108280U;

	t39 = ((x2569%x2570)|(x2571<<x2572));

	if (t39 != 4294967132U) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x2645 = 538654533033309439LLU;
	static uint32_t x2646 = 1U;
	int8_t x2647 = INT8_MAX;
	uint8_t x2648 = 16U;
	volatile uint64_t t40 = 8493957097LLU;

	t40 = ((x2645%x2646)|(x2647<<x2648));

	if (t40 != 8323072LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x2693 = 38U;
	int8_t x2694 = INT8_MIN;
	static volatile int16_t x2695 = 15901;
	volatile int8_t x2696 = 15;
	volatile int32_t t41 = 353445735;

	t41 = ((x2693%x2694)|(x2695<<x2696));

	if (t41 != 521044006) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x2722 = INT32_MIN;
	uint16_t x2723 = 2238U;
	uint16_t x2724 = 1U;
	volatile int32_t t42 = 1;

	t42 = ((x2721%x2722)|(x2723<<x2724));

	if (t42 != 4476) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x2805 = INT32_MAX;
	int16_t x2806 = -18;
	volatile uint32_t x2807 = 523U;
	volatile int16_t x2808 = 4;
	volatile uint32_t t43 = 8U;

	t43 = ((x2805%x2806)|(x2807<<x2808));

	if (t43 != 8369U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x2833 = -1;
	uint64_t x2835 = 519559LLU;
	volatile uint16_t x2836 = 1U;
	static uint64_t t44 = UINT64_MAX;

	t44 = ((x2833%x2834)|(x2835<<x2836));

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x2926 = INT64_MAX;
	uint32_t x2928 = 3U;
	volatile int64_t t45 = 3838478914502498LL;

	t45 = ((x2925%x2926)|(x2927<<x2928));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x2941 = INT16_MIN;
	uint16_t x2942 = 1U;
	volatile uint8_t x2944 = 7U;
	volatile int32_t t46 = 150156;

	t46 = ((x2941%x2942)|(x2943<<x2944));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x3017 = UINT8_MAX;
	uint64_t x3018 = 3525929866000091LLU;
	uint32_t x3019 = UINT32_MAX;
	uint8_t x3020 = 1U;
	uint64_t t47 = 9121214LLU;

	t47 = ((x3017%x3018)|(x3019<<x3020));

	if (t47 != 4294967295LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x3187 = INT64_MAX;
	static int8_t x3188 = 0;

	t48 = ((x3185%x3186)|(x3187<<x3188));

	if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x3225 = 418LLU;
	int8_t x3226 = INT8_MIN;
	uint8_t x3227 = 20U;

	t49 = ((x3225%x3226)|(x3227<<x3228));

	if (t49 != 482LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x3322 = INT64_MAX;
	uint64_t x3323 = UINT64_MAX;
	uint32_t x3324 = 3U;
	uint64_t t50 = UINT64_MAX;

	t50 = ((x3321%x3322)|(x3323<<x3324));

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x3405 = -3563;
	static uint8_t x3406 = 93U;
	uint64_t x3407 = 1031709270LLU;
	static volatile uint64_t t51 = 128703LLU;

	t51 = ((x3405%x3406)|(x3407<<x3408));

	if (t51 != 18446744073709551587LLU) { NG(); } else { ; }
	
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


    return 0;
}


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x18 = 13U;
uint64_t t1 = UINT64_MAX;
volatile int32_t x94 = 0;
volatile int64_t x96 = -1816496201360LL;
volatile int64_t t4 = -64364LL;
static int64_t x288 = INT64_MIN;
int64_t x335 = INT64_MIN;
int16_t x549 = INT16_MAX;
int64_t x557 = INT64_MAX;
int64_t x559 = INT64_MIN;
uint8_t x598 = 5U;
static volatile uint16_t x682 = 2U;
uint32_t x684 = 1489613U;
uint8_t x865 = 76U;
uint32_t x866 = 3U;
int64_t x868 = INT64_MIN;
static uint8_t x962 = 14U;
int8_t x963 = INT8_MIN;
uint8_t x1357 = 2U;
uint8_t x1394 = 5U;
static int8_t x1480 = 24;
int64_t t22 = -225786576276819924LL;
uint64_t x1485 = 293902092875343LLU;
static uint64_t x1488 = 7645652LLU;
volatile uint64_t t23 = 4568143783LLU;
volatile int64_t x1661 = 289LL;
volatile int64_t t25 = 29LL;
uint32_t x1667 = 2612395U;
int32_t x1728 = -1;
volatile int64_t x1755 = INT64_MIN;
uint32_t x1813 = 867640893U;
static int64_t x1815 = 6LL;
volatile uint64_t t32 = 7899821764515565423LLU;
uint64_t x2049 = 0LLU;
volatile uint8_t x2052 = 1U;
uint64_t t34 = 1513334664456546LLU;
int16_t x2206 = 1;
volatile uint16_t x2314 = 12U;
int64_t x2321 = INT64_MAX;
int64_t x2383 = -1LL;
uint64_t x2456 = 6015417LLU;
int16_t x2457 = 186;
uint32_t x2521 = UINT32_MAX;
int64_t x2523 = 13316764426LL;
uint32_t x2527 = UINT32_MAX;
uint32_t t44 = 91U;
int8_t x2566 = 0;
volatile uint32_t x2582 = 11U;
volatile int8_t x2597 = INT8_MAX;
int8_t x2598 = 5;
uint32_t x2765 = UINT32_MAX;
static int64_t t48 = 43810648229839502LL;
static uint8_t x2806 = 0U;
int64_t x2939 = -693547165459LL;
volatile int16_t x3010 = 2;
volatile int64_t x3012 = 40066493006860LL;
uint16_t x3250 = 3U;
volatile int64_t t56 = INT64_MAX;
static int8_t x3300 = INT8_MIN;
int8_t x3371 = -3;
static int16_t x3372 = INT16_MAX;
int32_t t60 = -1986;
volatile uint8_t x3607 = 59U;
int32_t x3739 = INT32_MAX;
int16_t x3762 = 0;
uint32_t x3848 = UINT32_MAX;
static int64_t t66 = 278121319167197250LL;
static volatile uint64_t x3910 = 24LLU;
static volatile int16_t x3911 = 1;
uint32_t x4049 = 26876684U;
static int16_t x4087 = INT16_MIN;
int8_t x4088 = INT8_MIN;
int32_t t71 = 977012596;
uint16_t x4113 = UINT16_MAX;
volatile int32_t t72 = -5;
uint16_t x4418 = 10U;
int8_t x4419 = INT8_MIN;
static int8_t x4420 = 2;
uint8_t x4495 = UINT8_MAX;
static int64_t t76 = 427894247044LL;
volatile int16_t x4716 = 12183;
uint16_t x4717 = 190U;
int8_t x4719 = 1;
static int64_t x4773 = 460950640614303LL;
uint8_t x4861 = UINT8_MAX;
static uint8_t x4993 = 4U;
int8_t x5230 = 6;
int32_t x5231 = INT32_MAX;
uint32_t t84 = 38848937U;
volatile int8_t x5578 = 0;
int8_t x5580 = -5;
uint32_t x5592 = UINT32_MAX;
uint8_t x5600 = UINT8_MAX;
uint64_t t88 = 7042LLU;
int64_t x5623 = INT64_MIN;
volatile int64_t t89 = -590454343812285009LL;
static volatile int64_t x5760 = INT64_MAX;
static int16_t x5766 = 23;
static int32_t x5767 = -13;
uint16_t x5790 = 1U;
uint16_t x5792 = 5111U;
int32_t x5799 = 3041;
int16_t x5859 = -62;
static int64_t t95 = 98529723LL;
uint32_t x6095 = 392588U;
volatile uint32_t t98 = 364U;
int64_t x6173 = 1105661560LL;
static volatile uint64_t t99 = 253LLU;


void f0(void) {
	static int64_t x13 = 468921945629564967LL;
	uint16_t x14 = 5U;
	volatile int64_t x15 = INT64_MIN;
	volatile int64_t x16 = INT64_MIN;
	volatile int64_t t0 = INT64_MIN;

	t0 = (((x13>>x14)/x15)+x16);

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x17 = 1755;
	static volatile int64_t x19 = INT64_MAX;
	static uint64_t x20 = UINT64_MAX;

	t1 = (((x17>>x18)/x19)+x20);

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x69 = 2193430;
	int8_t x70 = 31;
	uint32_t x71 = 1U;
	uint16_t x72 = 149U;
	uint32_t t2 = 7988U;

	t2 = (((x69>>x70)/x71)+x72);

	if (t2 != 149U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x93 = INT32_MAX;
	static int16_t x95 = INT16_MAX;
	static int64_t t3 = 411LL;

	t3 = (((x93>>x94)/x95)+x96);

	if (t3 != -1816496135822LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x169 = 135LL;
	volatile uint16_t x170 = 7U;
	int32_t x171 = -1;
	static int16_t x172 = INT16_MIN;

	t4 = (((x169>>x170)/x171)+x172);

	if (t4 != -32769LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x213 = UINT8_MAX;
	volatile uint16_t x214 = 22U;
	uint8_t x215 = 1U;
	int16_t x216 = 3225;
	static int32_t t5 = 24034312;

	t5 = (((x213>>x214)/x215)+x216);

	if (t5 != 3225) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x237 = 4U;
	uint16_t x238 = 20U;
	volatile int16_t x239 = 1;
	int8_t x240 = INT8_MIN;
	volatile int32_t t6 = -29407972;

	t6 = (((x237>>x238)/x239)+x240);

	if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x285 = UINT64_MAX;
	volatile int8_t x286 = 0;
	volatile int64_t x287 = -2281285982LL;
	static uint64_t t7 = 3058609153040241LLU;

	t7 = (((x285>>x286)/x287)+x288);

	if (t7 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x333 = INT64_MAX;
	volatile int8_t x334 = 5;
	int8_t x336 = INT8_MIN;
	int64_t t8 = 340LL;

	t8 = (((x333>>x334)/x335)+x336);

	if (t8 != -128LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x550 = 7U;
	volatile int64_t x551 = INT64_MAX;
	int64_t x552 = INT64_MAX;
	volatile int64_t t9 = INT64_MAX;

	t9 = (((x549>>x550)/x551)+x552);

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x558 = 0;
	int32_t x560 = -12;
	static volatile int64_t t10 = -8139890LL;

	t10 = (((x557>>x558)/x559)+x560);

	if (t10 != -12LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x597 = 87764U;
	int8_t x599 = -2;
	int8_t x600 = -51;
	volatile uint32_t t11 = 1U;

	t11 = (((x597>>x598)/x599)+x600);

	if (t11 != 4294967245U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x681 = INT8_MAX;
	static uint8_t x683 = UINT8_MAX;
	volatile uint32_t t12 = 195497U;

	t12 = (((x681>>x682)/x683)+x684);

	if (t12 != 1489613U) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x781 = 391706600LLU;
	uint8_t x782 = 5U;
	int32_t x783 = INT32_MIN;
	static int32_t x784 = -1;
	volatile uint64_t t13 = UINT64_MAX;

	t13 = (((x781>>x782)/x783)+x784);

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x867 = UINT16_MAX;
	volatile int64_t t14 = INT64_MIN;

	t14 = (((x865>>x866)/x867)+x868);

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x961 = 59U;
	int32_t x964 = 491;
	int32_t t15 = 802;

	t15 = (((x961>>x962)/x963)+x964);

	if (t15 != 491) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x1073 = 3356049946LL;
	int16_t x1074 = 0;
	volatile int64_t x1075 = -1LL;
	static int16_t x1076 = 12;
	static int64_t t16 = -538012320632982LL;

	t16 = (((x1073>>x1074)/x1075)+x1076);

	if (t16 != -3356049934LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x1121 = INT16_MAX;
	static uint16_t x1122 = 3U;
	int64_t x1123 = INT64_MAX;
	int32_t x1124 = INT32_MIN;
	static volatile int64_t t17 = -26439088376992LL;

	t17 = (((x1121>>x1122)/x1123)+x1124);

	if (t17 != -2147483648LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x1217 = 9666LLU;
	volatile int16_t x1218 = 7;
	int8_t x1219 = -1;
	uint64_t x1220 = UINT64_MAX;
	static volatile uint64_t t18 = UINT64_MAX;

	t18 = (((x1217>>x1218)/x1219)+x1220);

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1358 = 4LLU;
	int16_t x1359 = -1;
	uint32_t x1360 = 1038394U;
	uint32_t t19 = 3776U;

	t19 = (((x1357>>x1358)/x1359)+x1360);

	if (t19 != 1038394U) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x1393 = 968U;
	int8_t x1395 = 16;
	int8_t x1396 = INT8_MIN;
	int32_t t20 = 4941;

	t20 = (((x1393>>x1394)/x1395)+x1396);

	if (t20 != -127) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1401 = UINT32_MAX;
	uint8_t x1402 = 25U;
	int8_t x1403 = INT8_MIN;
	static uint16_t x1404 = 7589U;
	uint32_t t21 = 4U;

	t21 = (((x1401>>x1402)/x1403)+x1404);

	if (t21 != 7589U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1477 = 4229018846LL;
	uint8_t x1478 = 25U;
	uint8_t x1479 = 5U;

	t22 = (((x1477>>x1478)/x1479)+x1480);

	if (t22 != 49LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x1486 = 1;
	uint16_t x1487 = UINT16_MAX;

	t23 = (((x1485>>x1486)/x1487)+x1488);

	if (t23 != 2249974887LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x1569 = UINT64_MAX;
	uint16_t x1570 = 21U;
	static int32_t x1571 = 15799;
	int32_t x1572 = -2038737;
	uint64_t t24 = 1952754LLU;

	t24 = (((x1569>>x1570)/x1571)+x1572);

	if (t24 != 554711248LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x1662 = 12U;
	int64_t x1663 = 57668447606452996LL;
	int16_t x1664 = -1;

	t25 = (((x1661>>x1662)/x1663)+x1664);

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1665 = UINT32_MAX;
	int32_t x1666 = 10;
	volatile uint16_t x1668 = UINT16_MAX;
	static uint32_t t26 = 1968U;

	t26 = (((x1665>>x1666)/x1667)+x1668);

	if (t26 != 65536U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1725 = 10;
	int8_t x1726 = 1;
	int64_t x1727 = INT64_MAX;
	int64_t t27 = 68135753577070LL;

	t27 = (((x1725>>x1726)/x1727)+x1728);

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1753 = 62544LL;
	int8_t x1754 = 30;
	volatile uint8_t x1756 = 2U;
	volatile int64_t t28 = -14038177038LL;

	t28 = (((x1753>>x1754)/x1755)+x1756);

	if (t28 != 2LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1785 = INT64_MAX;
	static uint32_t x1786 = 4U;
	uint16_t x1787 = UINT16_MAX;
	uint32_t x1788 = 442U;
	int64_t t29 = 286876261132396068LL;

	t29 = (((x1785>>x1786)/x1787)+x1788);

	if (t29 != 8796227242426LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x1814 = 0;
	int64_t x1816 = INT64_MIN;
	static int64_t t30 = 34LL;

	t30 = (((x1813>>x1814)/x1815)+x1816);

	if (t30 != -9223372036710168993LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1861 = INT64_MAX;
	uint8_t x1862 = 3U;
	int16_t x1863 = -1;
	int16_t x1864 = INT16_MIN;
	int64_t t31 = 17151687673LL;

	t31 = (((x1861>>x1862)/x1863)+x1864);

	if (t31 != -1152921504606879743LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x2013 = 49933713022LLU;
	volatile uint16_t x2014 = 6U;
	int16_t x2015 = -4;
	uint16_t x2016 = UINT16_MAX;

	t32 = (((x2013>>x2014)/x2015)+x2016);

	if (t32 != 65535LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x2017 = 2046839599861668LLU;
	static int8_t x2018 = 0;
	volatile int64_t x2019 = INT64_MIN;
	int64_t x2020 = 88412359LL;
	uint64_t t33 = 460127450073233LLU;

	t33 = (((x2017>>x2018)/x2019)+x2020);

	if (t33 != 88412359LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x2050 = 0U;
	int16_t x2051 = INT16_MIN;

	t34 = (((x2049>>x2050)/x2051)+x2052);

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x2205 = UINT64_MAX;
	uint8_t x2207 = 48U;
	int8_t x2208 = 63;
	volatile uint64_t t35 = 16LLU;

	t35 = (((x2205>>x2206)/x2207)+x2208);

	if (t35 != 192153584101141225LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x2313 = UINT16_MAX;
	static int8_t x2315 = INT8_MAX;
	volatile int32_t x2316 = INT32_MAX;
	volatile int32_t t36 = INT32_MAX;

	t36 = (((x2313>>x2314)/x2315)+x2316);

	if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x2322 = 2U;
	int8_t x2323 = -1;
	static int16_t x2324 = -1;
	volatile int64_t t37 = 3475LL;

	t37 = (((x2321>>x2322)/x2323)+x2324);

	if (t37 != -2305843009213693952LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x2373 = 272256366792LL;
	int16_t x2374 = 13;
	int32_t x2375 = 4374321;
	int16_t x2376 = INT16_MIN;
	volatile int64_t t38 = -61035LL;

	t38 = (((x2373>>x2374)/x2375)+x2376);

	if (t38 != -32761LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x2381 = 3U;
	uint16_t x2382 = 0U;
	uint64_t x2384 = 8928815978LLU;
	static volatile uint64_t t39 = 147527788066578LLU;

	t39 = (((x2381>>x2382)/x2383)+x2384);

	if (t39 != 8928815975LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x2389 = 85LLU;
	uint8_t x2390 = 12U;
	uint32_t x2391 = UINT32_MAX;
	int64_t x2392 = 17954008073639390LL;
	volatile uint64_t t40 = 137484212656141041LLU;

	t40 = (((x2389>>x2390)/x2391)+x2392);

	if (t40 != 17954008073639390LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x2453 = 3820041461391601LLU;
	int8_t x2454 = 19;
	static volatile int16_t x2455 = INT16_MIN;
	uint64_t t41 = 34185465628LLU;

	t41 = (((x2453>>x2454)/x2455)+x2456);

	if (t41 != 6015417LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x2458 = 6U;
	uint16_t x2459 = UINT16_MAX;
	static uint64_t x2460 = UINT64_MAX;
	uint64_t t42 = UINT64_MAX;

	t42 = (((x2457>>x2458)/x2459)+x2460);

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x2522 = 0U;
	int64_t x2524 = -51613225LL;
	volatile int64_t t43 = 236LL;

	t43 = (((x2521>>x2522)/x2523)+x2524);

	if (t43 != -51613225LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint8_t x2525 = 1U;
	uint16_t x2526 = 1U;
	static int16_t x2528 = 2;

	t44 = (((x2525>>x2526)/x2527)+x2528);

	if (t44 != 2U) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x2565 = 6U;
	uint16_t x2567 = 3493U;
	int8_t x2568 = INT8_MAX;
	volatile int32_t t45 = -1;

	t45 = (((x2565>>x2566)/x2567)+x2568);

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x2581 = INT16_MAX;
	static int16_t x2583 = INT16_MIN;
	int64_t x2584 = INT64_MAX;
	volatile int64_t t46 = INT64_MAX;

	t46 = (((x2581>>x2582)/x2583)+x2584);

	if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x2599 = INT8_MIN;
	volatile int32_t x2600 = -17083;
	static int32_t t47 = 1066061231;

	t47 = (((x2597>>x2598)/x2599)+x2600);

	if (t47 != -17083) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x2766 = 2;
	static int64_t x2767 = -22111LL;
	int32_t x2768 = INT32_MIN;

	t48 = (((x2765>>x2766)/x2767)+x2768);

	if (t48 != -2147532209LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x2805 = INT32_MAX;
	int8_t x2807 = INT8_MIN;
	volatile int16_t x2808 = 7450;
	static int32_t t49 = -24509170;

	t49 = (((x2805>>x2806)/x2807)+x2808);

	if (t49 != -16769765) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x2937 = 60530672506258LLU;
	uint8_t x2938 = 29U;
	volatile int16_t x2940 = 0;
	uint64_t t50 = 14486229738LLU;

	t50 = (((x2937>>x2938)/x2939)+x2940);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x3009 = 1490134034U;
	int32_t x3011 = INT32_MIN;
	int64_t t51 = -25470252LL;

	t51 = (((x3009>>x3010)/x3011)+x3012);

	if (t51 != 40066493006860LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x3053 = INT16_MAX;
	uint16_t x3054 = 4U;
	static volatile int64_t x3055 = 4098577872576737991LL;
	int8_t x3056 = INT8_MIN;
	static volatile int64_t t52 = -1489LL;

	t52 = (((x3053>>x3054)/x3055)+x3056);

	if (t52 != -128LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x3069 = 7U;
	volatile uint16_t x3070 = 10U;
	volatile int16_t x3071 = INT16_MIN;
	int8_t x3072 = INT8_MAX;
	int32_t t53 = -110089;

	t53 = (((x3069>>x3070)/x3071)+x3072);

	if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x3157 = 6U;
	uint8_t x3158 = 6U;
	static int64_t x3159 = -1LL;
	int8_t x3160 = INT8_MAX;
	int64_t t54 = 1183876823788LL;

	t54 = (((x3157>>x3158)/x3159)+x3160);

	if (t54 != 127LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x3173 = UINT32_MAX;
	volatile uint32_t x3174 = 4U;
	int16_t x3175 = -1;
	uint8_t x3176 = UINT8_MAX;
	uint32_t t55 = 41855U;

	t55 = (((x3173>>x3174)/x3175)+x3176);

	if (t55 != 255U) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x3249 = 0U;
	uint16_t x3251 = 305U;
	int64_t x3252 = INT64_MAX;

	t56 = (((x3249>>x3250)/x3251)+x3252);

	if (t56 != INT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x3297 = 5474U;
	int64_t x3298 = 0LL;
	uint64_t x3299 = UINT64_MAX;
	static uint64_t t57 = 60992654144LLU;

	t57 = (((x3297>>x3298)/x3299)+x3300);

	if (t57 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x3365 = UINT16_MAX;
	uint8_t x3366 = 1U;
	int16_t x3367 = -1;
	uint16_t x3368 = UINT16_MAX;
	int32_t t58 = 6;

	t58 = (((x3365>>x3366)/x3367)+x3368);

	if (t58 != 32768) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x3369 = UINT16_MAX;
	static uint8_t x3370 = 0U;
	int32_t t59 = -3250868;

	t59 = (((x3369>>x3370)/x3371)+x3372);

	if (t59 != 10922) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x3437 = UINT16_MAX;
	uint8_t x3438 = 3U;
	int32_t x3439 = INT32_MIN;
	int8_t x3440 = -1;

	t60 = (((x3437>>x3438)/x3439)+x3440);

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x3537 = 6459594548739842317LLU;
	static volatile uint8_t x3538 = 0U;
	int8_t x3539 = -1;
	int64_t x3540 = 10563510478413LL;
	static uint64_t t61 = 7442LLU;

	t61 = (((x3537>>x3538)/x3539)+x3540);

	if (t61 != 10563510478413LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x3605 = 1592LL;
	uint32_t x3606 = 0U;
	int32_t x3608 = -1;
	int64_t t62 = -67207775LL;

	t62 = (((x3605>>x3606)/x3607)+x3608);

	if (t62 != 25LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x3737 = UINT16_MAX;
	volatile int8_t x3738 = 2;
	int8_t x3740 = INT8_MIN;
	static int32_t t63 = -83;

	t63 = (((x3737>>x3738)/x3739)+x3740);

	if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x3761 = 4628LLU;
	int16_t x3763 = -559;
	int32_t x3764 = -1931;
	static volatile uint64_t t64 = 3786LLU;

	t64 = (((x3761>>x3762)/x3763)+x3764);

	if (t64 != 18446744073709549685LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x3833 = INT8_MAX;
	int8_t x3834 = 1;
	int16_t x3835 = INT16_MAX;
	uint16_t x3836 = UINT16_MAX;
	static int32_t t65 = 0;

	t65 = (((x3833>>x3834)/x3835)+x3836);

	if (t65 != 65535) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x3845 = 144981870;
	static volatile int32_t x3846 = 3;
	static volatile int64_t x3847 = 589490202924LL;

	t66 = (((x3845>>x3846)/x3847)+x3848);

	if (t66 != 4294967295LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x3909 = INT8_MAX;
	volatile uint8_t x3912 = 52U;
	int32_t t67 = 10;

	t67 = (((x3909>>x3910)/x3911)+x3912);

	if (t67 != 52) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x3917 = 1413U;
	int16_t x3918 = 1;
	int32_t x3919 = -17985;
	static volatile uint16_t x3920 = 6609U;
	static volatile int32_t t68 = 9528309;

	t68 = (((x3917>>x3918)/x3919)+x3920);

	if (t68 != 6609) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x3981 = 3821472;
	volatile uint8_t x3982 = 0U;
	volatile int16_t x3983 = INT16_MIN;
	uint64_t x3984 = 15598LLU;
	uint64_t t69 = 421066182695LLU;

	t69 = (((x3981>>x3982)/x3983)+x3984);

	if (t69 != 15482LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x4050 = 3;
	uint32_t x4051 = 153392752U;
	int64_t x4052 = -13065826814944LL;
	static volatile int64_t t70 = 74270983600429779LL;

	t70 = (((x4049>>x4050)/x4051)+x4052);

	if (t70 != -13065826814944LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x4085 = 1;
	uint16_t x4086 = 30U;

	t71 = (((x4085>>x4086)/x4087)+x4088);

	if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x4114 = 4U;
	int16_t x4115 = 1;
	uint8_t x4116 = UINT8_MAX;

	t72 = (((x4113>>x4114)/x4115)+x4116);

	if (t72 != 4350) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x4417 = 1;
	int32_t t73 = 16603;

	t73 = (((x4417>>x4418)/x4419)+x4420);

	if (t73 != 2) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x4493 = INT16_MAX;
	static uint8_t x4494 = 0U;
	int8_t x4496 = INT8_MIN;
	volatile int32_t t74 = -1735479;

	t74 = (((x4493>>x4494)/x4495)+x4496);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x4633 = INT16_MAX;
	int32_t x4634 = 0;
	int8_t x4635 = INT8_MIN;
	static volatile int64_t x4636 = 80LL;
	int64_t t75 = -2722963384671995125LL;

	t75 = (((x4633>>x4634)/x4635)+x4636);

	if (t75 != -175LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x4685 = INT64_MAX;
	static uint16_t x4686 = 6U;
	static int8_t x4687 = -1;
	uint16_t x4688 = 3590U;

	t76 = (((x4685>>x4686)/x4687)+x4688);

	if (t76 != -144115188075852281LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x4693 = 351U;
	uint16_t x4694 = 0U;
	uint32_t x4695 = UINT32_MAX;
	static uint64_t x4696 = UINT64_MAX;
	volatile uint64_t t77 = UINT64_MAX;

	t77 = (((x4693>>x4694)/x4695)+x4696);

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x4713 = UINT32_MAX;
	uint8_t x4714 = 0U;
	static uint16_t x4715 = 520U;
	uint32_t t78 = 17499755U;

	t78 = (((x4713>>x4714)/x4715)+x4716);

	if (t78 != 8271735U) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x4718 = 0U;
	uint32_t x4720 = 197813380U;
	volatile uint32_t t79 = 105041755U;

	t79 = (((x4717>>x4718)/x4719)+x4720);

	if (t79 != 197813570U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x4774 = 5;
	static int64_t x4775 = INT64_MIN;
	static int16_t x4776 = INT16_MAX;
	int64_t t80 = -8480219926LL;

	t80 = (((x4773>>x4774)/x4775)+x4776);

	if (t80 != 32767LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x4862 = 13U;
	int64_t x4863 = -1LL;
	volatile uint16_t x4864 = 15U;
	int64_t t81 = 72810141LL;

	t81 = (((x4861>>x4862)/x4863)+x4864);

	if (t81 != 15LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x4994 = 0U;
	volatile int32_t x4995 = INT32_MIN;
	int8_t x4996 = INT8_MIN;
	volatile int32_t t82 = -7858;

	t82 = (((x4993>>x4994)/x4995)+x4996);

	if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x5229 = 24;
	int8_t x5232 = 13;
	volatile int32_t t83 = -3;

	t83 = (((x5229>>x5230)/x5231)+x5232);

	if (t83 != 13) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x5361 = 3638U;
	uint8_t x5362 = 10U;
	uint8_t x5363 = 2U;
	int32_t x5364 = -1;

	t84 = (((x5361>>x5362)/x5363)+x5364);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x5385 = 125639446U;
	int8_t x5386 = 0;
	int32_t x5387 = -1;
	int8_t x5388 = -12;
	static uint32_t t85 = 181067439U;

	t85 = (((x5385>>x5386)/x5387)+x5388);

	if (t85 != 4294967284U) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x5577 = UINT64_MAX;
	int8_t x5579 = INT8_MAX;
	uint64_t t86 = 2442816063669LLU;

	t86 = (((x5577>>x5578)/x5579)+x5580);

	if (t86 != 145249953336295677LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x5589 = 0;
	int8_t x5590 = 13;
	uint8_t x5591 = 3U;
	static uint32_t t87 = UINT32_MAX;

	t87 = (((x5589>>x5590)/x5591)+x5592);

	if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x5597 = INT8_MAX;
	uint8_t x5598 = 1U;
	static volatile uint64_t x5599 = UINT64_MAX;

	t88 = (((x5597>>x5598)/x5599)+x5600);

	if (t88 != 255LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x5621 = UINT8_MAX;
	volatile uint8_t x5622 = 9U;
	int64_t x5624 = 13974373LL;

	t89 = (((x5621>>x5622)/x5623)+x5624);

	if (t89 != 13974373LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x5757 = 15U;
	uint8_t x5758 = 14U;
	volatile uint16_t x5759 = UINT16_MAX;
	int64_t t90 = INT64_MAX;

	t90 = (((x5757>>x5758)/x5759)+x5760);

	if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x5765 = 136U;
	int64_t x5768 = INT64_MIN;
	volatile int64_t t91 = INT64_MIN;

	t91 = (((x5765>>x5766)/x5767)+x5768);

	if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x5789 = UINT32_MAX;
	uint8_t x5791 = 23U;
	uint32_t t92 = 707688U;

	t92 = (((x5789>>x5790)/x5791)+x5792);

	if (t92 != 93373965U) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x5797 = UINT16_MAX;
	uint16_t x5798 = 5U;
	volatile uint64_t x5800 = 3388LLU;
	static volatile uint64_t t93 = 12661393999320944LLU;

	t93 = (((x5797>>x5798)/x5799)+x5800);

	if (t93 != 3388LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x5857 = 2;
	uint8_t x5858 = 5U;
	static uint64_t x5860 = 7274618609586582692LLU;
	static uint64_t t94 = 2232967392LLU;

	t94 = (((x5857>>x5858)/x5859)+x5860);

	if (t94 != 7274618609586582692LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x5929 = 3U;
	uint16_t x5930 = 2U;
	static int64_t x5931 = -3171747LL;
	volatile uint8_t x5932 = 114U;

	t95 = (((x5929>>x5930)/x5931)+x5932);

	if (t95 != 114LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x6037 = INT16_MAX;
	uint16_t x6038 = 5U;
	int64_t x6039 = 1286855144207497345LL;
	int64_t x6040 = INT64_MIN;
	int64_t t96 = INT64_MIN;

	t96 = (((x6037>>x6038)/x6039)+x6040);

	if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x6093 = 319974314U;
	volatile int64_t x6094 = 6LL;
	volatile uint64_t x6096 = 0LLU;
	volatile uint64_t t97 = 3323506272480LLU;

	t97 = (((x6093>>x6094)/x6095)+x6096);

	if (t97 != 12LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x6145 = UINT32_MAX;
	volatile uint16_t x6146 = 6U;
	static int16_t x6147 = INT16_MIN;
	uint32_t x6148 = 904536529U;

	t98 = (((x6145>>x6146)/x6147)+x6148);

	if (t98 != 904536529U) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x6174 = 2U;
	static volatile int16_t x6175 = -1;
	uint64_t x6176 = UINT64_MAX;

	t99 = (((x6173>>x6174)/x6175)+x6176);

	if (t99 != 18446744073433136225LLU) { NG(); } else { ; }
	
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


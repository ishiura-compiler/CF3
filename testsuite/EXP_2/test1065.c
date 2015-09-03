#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x217 = -6886921;
uint16_t x219 = 2U;
static uint64_t x220 = 14534289869481825LLU;
int32_t t2 = -105725775;
int16_t x396 = 1;
volatile int64_t t5 = 181LL;
int16_t x448 = INT16_MAX;
int16_t x715 = 1;
uint64_t t8 = 16LLU;
static uint8_t x761 = 0U;
static int64_t t11 = -185427829214660LL;
uint32_t x842 = UINT32_MAX;
uint64_t x844 = 4445433LLU;
int64_t x850 = INT64_MAX;
volatile int64_t t13 = 108LL;
volatile uint8_t x862 = 4U;
uint64_t x1065 = UINT64_MAX;
volatile uint64_t t17 = 472LLU;
uint8_t x1264 = 0U;
static int32_t t18 = -25003;
int64_t x1310 = INT64_MAX;
volatile uint8_t x1435 = 0U;
volatile int32_t t21 = -2110;
uint8_t x1447 = 1U;
int32_t x1533 = -1965;
uint64_t x1534 = UINT64_MAX;
volatile int8_t x1536 = 0;
uint64_t x1574 = 21310433LLU;
static int16_t x1667 = 1;
int8_t x1881 = 21;
uint8_t x2006 = 4U;
int64_t t29 = -1371LL;
uint16_t x2074 = 1035U;
int32_t x2076 = -1;
int64_t x2268 = INT64_MIN;
static int16_t x2544 = 3484;
int64_t x2558 = INT64_MAX;
static uint64_t x2694 = UINT64_MAX;
static volatile uint8_t x2696 = UINT8_MAX;
volatile int8_t x2919 = 0;
int8_t x2937 = INT8_MIN;
int32_t x2940 = INT32_MIN;
static volatile uint32_t t41 = 3942U;
volatile uint64_t t42 = 337LLU;
static uint8_t x3062 = UINT8_MAX;
volatile int64_t t44 = 1040712151374LL;
uint64_t x3178 = 7990331246657303LLU;
static volatile int64_t x3213 = -31942LL;
int64_t t46 = 22662LL;
uint64_t x3237 = UINT64_MAX;
volatile uint32_t t48 = 22733U;
static int16_t x3427 = 0;
volatile int8_t x3428 = INT8_MAX;
uint32_t x3561 = UINT32_MAX;
static int32_t x3728 = -1;
volatile int64_t x3777 = INT64_MIN;
uint8_t x3855 = 1U;
uint8_t x3958 = UINT8_MAX;


void f0(void) {
	static uint32_t x141 = 15099U;
	uint8_t x142 = 93U;
	int32_t x143 = 1;
	uint32_t x144 = UINT32_MAX;
	uint32_t t0 = UINT32_MAX;

	t0 = ((x141/(x142>>x143))|x144);

	if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x218 = INT8_MAX;
	uint64_t t1 = 439105694460556002LLU;

	t1 = ((x217/(x218>>x219))|x220);

	if (t1 != 18446744073709535091LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x221 = -1;
	volatile uint16_t x222 = 40U;
	int16_t x223 = 1;
	uint16_t x224 = 1426U;

	t2 = ((x221/(x222>>x223))|x224);

	if (t2 != 1426) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x225 = UINT16_MAX;
	volatile int8_t x226 = INT8_MAX;
	uint16_t x227 = 0U;
	int64_t x228 = INT64_MIN;
	volatile int64_t t3 = -215825678LL;

	t3 = ((x225/(x226>>x227))|x228);

	if (t3 != -9223372036854775292LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint32_t x269 = 12483U;
	int8_t x270 = 20;
	static uint32_t x271 = 2U;
	uint64_t x272 = 27008684425116LLU;
	static volatile uint64_t t4 = 1264494181411363043LLU;

	t4 = ((x269/(x270>>x271))|x272);

	if (t4 != 27008684425180LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x393 = INT64_MIN;
	uint16_t x394 = UINT16_MAX;
	int8_t x395 = 1;

	t5 = ((x393/(x394>>x395))|x396);

	if (t5 != -281483566907399LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x445 = INT64_MIN;
	static int32_t x446 = INT32_MAX;
	int8_t x447 = 28;
	volatile int64_t t6 = 97586643348LL;

	t6 = ((x445/(x446>>x447))|x448);

	if (t6 != -1317624576693534721LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x541 = UINT8_MAX;
	uint64_t x542 = 55435LLU;
	static uint16_t x543 = 3U;
	uint32_t x544 = UINT32_MAX;
	uint64_t t7 = 78445492407524LLU;

	t7 = ((x541/(x542>>x543))|x544);

	if (t7 != 4294967295LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x713 = 0;
	static volatile uint8_t x714 = UINT8_MAX;
	static uint64_t x716 = 2002LLU;

	t8 = ((x713/(x714>>x715))|x716);

	if (t8 != 2002LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x762 = 2970U;
	uint8_t x763 = 1U;
	int64_t x764 = INT64_MIN;
	volatile int64_t t9 = INT64_MIN;

	t9 = ((x761/(x762>>x763))|x764);

	if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x801 = -1;
	uint32_t x802 = 222517U;
	uint8_t x803 = 1U;
	static uint64_t x804 = 379015597879167168LLU;
	static volatile uint64_t t10 = 1223LLU;

	t10 = ((x801/(x802>>x803))|x804);

	if (t10 != 379015597879172811LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x833 = 16249601771LL;
	static int64_t x834 = 2884263987040679622LL;
	int8_t x835 = 7;
	int32_t x836 = INT32_MIN;

	t11 = ((x833/(x834>>x835))|x836);

	if (t11 != -2147483648LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x841 = 317822;
	volatile int8_t x843 = 3;
	volatile uint64_t t12 = 3925733674326LLU;

	t12 = ((x841/(x842>>x843))|x844);

	if (t12 != 4445433LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x849 = 559186573U;
	int8_t x851 = 0;
	volatile int64_t x852 = -1LL;

	t13 = ((x849/(x850>>x851))|x852);

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x861 = INT16_MIN;
	uint8_t x863 = 0U;
	int32_t x864 = -8;
	int32_t t14 = -136;

	t14 = ((x861/(x862>>x863))|x864);

	if (t14 != -8) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x905 = INT16_MIN;
	static uint16_t x906 = 147U;
	uint8_t x907 = 6U;
	volatile int64_t x908 = -7360268184LL;
	static int64_t t15 = 9699952LL;

	t15 = ((x905/(x906>>x907))|x908);

	if (t15 != -1944LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x1066 = INT64_MAX;
	static uint16_t x1067 = 31U;
	static volatile uint16_t x1068 = 14U;
	static volatile uint64_t t16 = 749506LLU;

	t16 = ((x1065/(x1066>>x1067))|x1068);

	if (t16 != 4294967311LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1225 = INT8_MIN;
	uint64_t x1226 = 1999023021438346872LLU;
	int8_t x1227 = 0;
	int64_t x1228 = INT64_MIN;

	t17 = ((x1225/(x1226>>x1227))|x1228);

	if (t17 != 9223372036854775817LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1261 = -17;
	int16_t x1262 = INT16_MAX;
	volatile uint8_t x1263 = 0U;

	t18 = ((x1261/(x1262>>x1263))|x1264);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x1309 = 2U;
	int8_t x1311 = 14;
	uint64_t x1312 = 546LLU;
	uint64_t t19 = 20LLU;

	t19 = ((x1309/(x1310>>x1311))|x1312);

	if (t19 != 546LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1317 = INT16_MIN;
	uint16_t x1318 = 6U;
	volatile uint8_t x1319 = 0U;
	uint32_t x1320 = 1037736U;
	volatile uint32_t t20 = 72134U;

	t20 = ((x1317/(x1318>>x1319))|x1320);

	if (t20 != 4294967211U) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x1433 = -9028;
	uint16_t x1434 = 10U;
	static int16_t x1436 = INT16_MAX;

	t21 = ((x1433/(x1434>>x1435))|x1436);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x1445 = INT32_MIN;
	uint16_t x1446 = 29588U;
	int8_t x1448 = -61;
	volatile int32_t t22 = 2370;

	t22 = ((x1445/(x1446>>x1447))|x1448);

	if (t22 != -5) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x1535 = 29;
	volatile uint64_t t23 = 1881978366834857419LLU;

	t23 = ((x1533/(x1534>>x1535))|x1536);

	if (t23 != 536870912LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1565 = -25069289LL;
	uint8_t x1566 = UINT8_MAX;
	int32_t x1567 = 5;
	int16_t x1568 = INT16_MIN;
	int64_t t24 = 1323308LL;

	t24 = ((x1565/(x1566>>x1567))|x1568);

	if (t24 != -9615LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1573 = INT32_MAX;
	uint8_t x1575 = 4U;
	int16_t x1576 = INT16_MIN;
	volatile uint64_t t25 = 6247575977590203LLU;

	t25 = ((x1573/(x1574>>x1575))|x1576);

	if (t25 != 18446744073709520460LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1665 = INT16_MIN;
	volatile uint64_t x1666 = UINT64_MAX;
	volatile int32_t x1668 = INT32_MIN;
	static uint64_t t26 = 2383441LLU;

	t26 = ((x1665/(x1666>>x1667))|x1668);

	if (t26 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x1821 = -1LL;
	uint64_t x1822 = 388724771LLU;
	int16_t x1823 = 1;
	int32_t x1824 = INT32_MIN;
	volatile uint64_t t27 = 15282838LLU;

	t27 = ((x1821/(x1822>>x1823))|x1824);

	if (t27 != 18446744071981810483LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x1882 = INT32_MAX;
	uint16_t x1883 = 10U;
	volatile uint8_t x1884 = 48U;
	int32_t t28 = -849349269;

	t28 = ((x1881/(x1882>>x1883))|x1884);

	if (t28 != 48) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x2005 = 2954075104446148LL;
	static int8_t x2007 = 0;
	int64_t x2008 = INT64_MIN;

	t29 = ((x2005/(x2006>>x2007))|x2008);

	if (t29 != -9222633518078664271LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x2009 = INT8_MIN;
	volatile int16_t x2010 = 4356;
	uint64_t x2011 = 1LLU;
	int16_t x2012 = INT16_MIN;
	int32_t t30 = 1717674;

	t30 = ((x2009/(x2010>>x2011))|x2012);

	if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x2033 = 6U;
	int32_t x2034 = 5654;
	int8_t x2035 = 1;
	static uint16_t x2036 = UINT16_MAX;
	static volatile int32_t t31 = -18495540;

	t31 = ((x2033/(x2034>>x2035))|x2036);

	if (t31 != 65535) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x2045 = INT16_MIN;
	int16_t x2046 = INT16_MAX;
	uint8_t x2047 = 0U;
	int32_t x2048 = INT32_MIN;
	int32_t t32 = 30;

	t32 = ((x2045/(x2046>>x2047))|x2048);

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x2073 = -236LL;
	static uint64_t x2075 = 2LLU;
	int64_t t33 = -999999773094781LL;

	t33 = ((x2073/(x2074>>x2075))|x2076);

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x2241 = INT32_MIN;
	volatile int64_t x2242 = INT64_MAX;
	volatile uint16_t x2243 = 2U;
	int16_t x2244 = -32;
	int64_t t34 = -7012331LL;

	t34 = ((x2241/(x2242>>x2243))|x2244);

	if (t34 != -32LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x2265 = INT32_MIN;
	int8_t x2266 = 5;
	static int16_t x2267 = 1;
	volatile int64_t t35 = 967998471LL;

	t35 = ((x2265/(x2266>>x2267))|x2268);

	if (t35 != -1073741824LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x2369 = 62U;
	static int64_t x2370 = 227LL;
	static uint8_t x2371 = 0U;
	volatile int8_t x2372 = INT8_MIN;
	volatile int64_t t36 = -82182056810135LL;

	t36 = ((x2369/(x2370>>x2371))|x2372);

	if (t36 != -128LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x2541 = 12870LL;
	int8_t x2542 = INT8_MAX;
	int16_t x2543 = 0;
	volatile int64_t t37 = 2136811458923666LL;

	t37 = ((x2541/(x2542>>x2543))|x2544);

	if (t37 != 3581LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x2557 = 8005U;
	uint8_t x2559 = 12U;
	volatile uint16_t x2560 = UINT16_MAX;
	static int64_t t38 = 394352LL;

	t38 = ((x2557/(x2558>>x2559))|x2560);

	if (t38 != 65535LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x2693 = 107;
	volatile uint16_t x2695 = 2U;
	uint64_t t39 = 18375LLU;

	t39 = ((x2693/(x2694>>x2695))|x2696);

	if (t39 != 255LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int32_t x2917 = INT32_MAX;
	int32_t x2918 = 31080166;
	int8_t x2920 = INT8_MIN;
	static int32_t t40 = -101;

	t40 = ((x2917/(x2918>>x2919))|x2920);

	if (t40 != -59) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x2938 = 1U;
	uint32_t x2939 = 0U;

	t41 = ((x2937/(x2938>>x2939))|x2940);

	if (t41 != 4294967168U) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x3049 = 5U;
	uint64_t x3050 = UINT64_MAX;
	volatile uint16_t x3051 = 24U;
	int8_t x3052 = INT8_MIN;

	t42 = ((x3049/(x3050>>x3051))|x3052);

	if (t42 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x3053 = 1LLU;
	uint32_t x3054 = 12590U;
	uint16_t x3055 = 0U;
	int64_t x3056 = INT64_MAX;
	volatile uint64_t t43 = 9087070667178669459LLU;

	t43 = ((x3053/(x3054>>x3055))|x3056);

	if (t43 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x3061 = INT64_MAX;
	uint8_t x3063 = 1U;
	static volatile int32_t x3064 = -1;

	t44 = ((x3061/(x3062>>x3063))|x3064);

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x3177 = 15U;
	uint16_t x3179 = 7U;
	static uint32_t x3180 = 7U;
	volatile uint64_t t45 = 63LLU;

	t45 = ((x3177/(x3178>>x3179))|x3180);

	if (t45 != 7LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x3214 = INT16_MAX;
	uint8_t x3215 = 0U;
	uint32_t x3216 = 10U;

	t46 = ((x3213/(x3214>>x3215))|x3216);

	if (t46 != 10LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x3238 = 656286139838603526LLU;
	uint8_t x3239 = 6U;
	uint32_t x3240 = UINT32_MAX;
	uint64_t t47 = 36LLU;

	t47 = ((x3237/(x3238>>x3239))|x3240);

	if (t47 != 4294967295LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x3329 = 2869U;
	int16_t x3330 = 22;
	int64_t x3331 = 2LL;
	static int32_t x3332 = 330;

	t48 = ((x3329/(x3330>>x3331))|x3332);

	if (t48 != 895U) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x3421 = 3027LLU;
	uint16_t x3422 = UINT16_MAX;
	uint8_t x3423 = 1U;
	uint32_t x3424 = UINT32_MAX;
	static uint64_t t49 = 2208371275075613LLU;

	t49 = ((x3421/(x3422>>x3423))|x3424);

	if (t49 != 4294967295LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x3425 = UINT64_MAX;
	static int64_t x3426 = 60469894148647397LL;
	static volatile uint64_t t50 = 7499LLU;

	t50 = ((x3425/(x3426>>x3427))|x3428);

	if (t50 != 383LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x3562 = 4435115916484758202LLU;
	uint64_t x3563 = 20LLU;
	int32_t x3564 = INT32_MIN;
	uint64_t t51 = 508LLU;

	t51 = ((x3561/(x3562>>x3563))|x3564);

	if (t51 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x3725 = INT64_MAX;
	volatile uint16_t x3726 = 3U;
	int8_t x3727 = 1;
	static volatile int64_t t52 = -1085546005889LL;

	t52 = ((x3725/(x3726>>x3727))|x3728);

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x3778 = UINT32_MAX;
	volatile uint8_t x3779 = 0U;
	int64_t x3780 = 3115971852943443LL;
	static volatile int64_t t53 = -7611361021559236LL;

	t53 = ((x3777/(x3778>>x3779))|x3780);

	if (t53 != -1150500781LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x3853 = INT8_MIN;
	uint32_t x3854 = UINT32_MAX;
	volatile uint64_t x3856 = UINT64_MAX;
	uint64_t t54 = UINT64_MAX;

	t54 = ((x3853/(x3854>>x3855))|x3856);

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x3957 = UINT32_MAX;
	int16_t x3959 = 0;
	int64_t x3960 = INT64_MAX;
	volatile int64_t t55 = INT64_MAX;

	t55 = ((x3957/(x3958>>x3959))|x3960);

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
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


    return 0;
}


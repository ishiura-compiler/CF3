#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x56 = 28346U;
volatile uint32_t t0 = 126U;
volatile int64_t x286 = 0LL;
volatile uint16_t x287 = 0U;
int32_t x288 = INT32_MAX;
volatile int8_t x422 = -1;
static volatile int32_t x424 = INT32_MIN;
int32_t x599 = INT32_MIN;
int64_t t6 = 7026614206592LL;
int16_t x695 = -1;
int32_t x763 = -1;
uint64_t x785 = 2069139474LLU;
uint64_t x787 = UINT64_MAX;
volatile int64_t t14 = -3490171LL;
int64_t x1150 = INT64_MAX;
int64_t x1228 = 84417LL;
int64_t x1347 = -1LL;
volatile int32_t x1358 = INT32_MIN;
int32_t x1543 = INT32_MIN;
int64_t x1705 = INT64_MIN;
static int8_t x1706 = INT8_MIN;
int8_t x1707 = INT8_MIN;
uint16_t x1810 = UINT16_MAX;
volatile uint64_t t26 = 10523240LLU;
int8_t x2001 = -1;
static int32_t x2004 = -1;
static int32_t t28 = 1179582;
static volatile int64_t t29 = -3521430700652899LL;
volatile uint64_t t30 = 992518036LLU;
int8_t x2116 = INT8_MIN;
static uint32_t x2206 = UINT32_MAX;
uint64_t t32 = 1LLU;
static uint32_t x2363 = UINT32_MAX;
static int8_t x2532 = INT8_MAX;
volatile uint32_t t34 = 1484057U;
uint16_t x2746 = UINT16_MAX;
int64_t t37 = -110675280141LL;
int16_t x2878 = INT16_MIN;
int8_t x2902 = -1;
uint32_t x2904 = UINT32_MAX;
uint32_t t41 = 77407307U;
uint64_t x2958 = UINT64_MAX;
static int32_t x3081 = 3514015;
int8_t x3083 = INT8_MAX;
uint32_t x3769 = UINT32_MAX;
volatile int16_t x3770 = -1;
uint16_t x4049 = 1762U;
volatile int64_t x4109 = -1LL;
uint32_t x4114 = UINT32_MAX;
int32_t t50 = 2736438;
int8_t x4220 = INT8_MIN;
int8_t x4398 = -1;
int16_t x4399 = -1;
volatile int64_t x4412 = INT64_MIN;
int8_t x4722 = 1;
int64_t t56 = 979481958179071523LL;
static uint32_t x4784 = 185474138U;
static volatile int64_t t58 = -727851720055LL;
volatile int64_t x4979 = INT64_MIN;
int16_t x5072 = INT16_MIN;
static volatile int32_t t61 = 520401;


void f0(void) {
	uint32_t x53 = 837580685U;
	int16_t x54 = INT16_MAX;
	static int16_t x55 = INT16_MAX;

	t0 = (x53%((x54==x55)*x56));

	if (t0 != 13077U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x101 = -276118LL;
	int32_t x102 = -1;
	int16_t x103 = -1;
	volatile uint16_t x104 = UINT16_MAX;
	volatile int64_t t1 = 840941773152LL;

	t1 = (x101%((x102==x103)*x104));

	if (t1 != -13978LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x109 = -669581419LL;
	int64_t x110 = -1LL;
	volatile int16_t x111 = -1;
	uint64_t x112 = UINT64_MAX;
	uint64_t t2 = 59311LLU;

	t2 = (x109%((x110==x111)*x112));

	if (t2 != 18446744073039970197LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x205 = 844;
	volatile int32_t x206 = -1;
	static int32_t x207 = -1;
	int32_t x208 = INT32_MIN;
	volatile int32_t t3 = -33;

	t3 = (x205%((x206==x207)*x208));

	if (t3 != 844) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x285 = 26812600U;
	volatile uint32_t t4 = 187U;

	t4 = (x285%((x286==x287)*x288));

	if (t4 != 26812600U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x421 = 191;
	int32_t x423 = -1;
	volatile int32_t t5 = 2;

	t5 = (x421%((x422==x423)*x424));

	if (t5 != 191) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x597 = -3;
	volatile int32_t x598 = INT32_MIN;
	int64_t x600 = INT64_MIN;

	t6 = (x597%((x598==x599)*x600));

	if (t6 != -3LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x677 = INT32_MIN;
	static volatile int8_t x678 = -1;
	int32_t x679 = -1;
	uint32_t x680 = UINT32_MAX;
	static volatile uint32_t t7 = 59164U;

	t7 = (x677%((x678==x679)*x680));

	if (t7 != 2147483648U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x693 = 11;
	int32_t x694 = -1;
	uint32_t x696 = 11524071U;
	uint32_t t8 = 1818348U;

	t8 = (x693%((x694==x695)*x696));

	if (t8 != 11U) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x761 = 108613880292906412LL;
	volatile uint64_t x762 = UINT64_MAX;
	int64_t x764 = 15301488167LL;
	volatile int64_t t9 = -4518095835639633607LL;

	t9 = (x761%((x762==x763)*x764));

	if (t9 != 102569660LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x786 = -1;
	int8_t x788 = INT8_MAX;
	volatile uint64_t t10 = 2954LLU;

	t10 = (x785%((x786==x787)*x788));

	if (t10 != 102LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x833 = INT8_MIN;
	volatile int32_t x834 = -1;
	volatile int8_t x835 = -1;
	uint64_t x836 = UINT64_MAX;
	volatile uint64_t t11 = 121LLU;

	t11 = (x833%((x834==x835)*x836));

	if (t11 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x897 = 3U;
	int64_t x898 = INT64_MIN;
	int64_t x899 = INT64_MIN;
	int8_t x900 = -1;
	static int32_t t12 = 15234753;

	t12 = (x897%((x898==x899)*x900));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x1029 = 6455U;
	static int32_t x1030 = -1;
	int32_t x1031 = -1;
	uint8_t x1032 = 20U;
	volatile uint32_t t13 = 58555U;

	t13 = (x1029%((x1030==x1031)*x1032));

	if (t13 != 15U) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x1093 = UINT8_MAX;
	static volatile uint8_t x1094 = 3U;
	int32_t x1095 = 3;
	int64_t x1096 = -1LL;

	t14 = (x1093%((x1094==x1095)*x1096));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x1097 = INT16_MAX;
	volatile int8_t x1098 = -1;
	uint64_t x1099 = UINT64_MAX;
	int64_t x1100 = 3430277696LL;
	int64_t t15 = -58987305822855879LL;

	t15 = (x1097%((x1098==x1099)*x1100));

	if (t15 != 32767LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1149 = INT8_MIN;
	int64_t x1151 = INT64_MAX;
	int32_t x1152 = INT32_MAX;
	volatile int32_t t16 = 1889279;

	t16 = (x1149%((x1150==x1151)*x1152));

	if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x1225 = 21604U;
	static int8_t x1226 = INT8_MAX;
	volatile int8_t x1227 = INT8_MAX;
	int64_t t17 = -1789LL;

	t17 = (x1225%((x1226==x1227)*x1228));

	if (t17 != 21604LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1273 = -2;
	volatile int16_t x1274 = -1;
	static volatile int16_t x1275 = -1;
	static int8_t x1276 = -1;
	volatile int32_t t18 = -247;

	t18 = (x1273%((x1274==x1275)*x1276));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1345 = -1;
	static int16_t x1346 = -1;
	int32_t x1348 = -82;
	volatile int32_t t19 = -131;

	t19 = (x1345%((x1346==x1347)*x1348));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x1357 = 893;
	static volatile int32_t x1359 = INT32_MIN;
	int16_t x1360 = 1;
	int32_t t20 = 0;

	t20 = (x1357%((x1358==x1359)*x1360));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x1449 = -1;
	uint64_t x1450 = UINT64_MAX;
	int64_t x1451 = -1LL;
	uint8_t x1452 = 19U;
	volatile int32_t t21 = -1019968470;

	t21 = (x1449%((x1450==x1451)*x1452));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x1493 = 20U;
	static int32_t x1494 = INT32_MIN;
	int32_t x1495 = INT32_MIN;
	int8_t x1496 = -1;
	volatile int32_t t22 = 254713752;

	t22 = (x1493%((x1494==x1495)*x1496));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x1541 = 262421778;
	int32_t x1542 = INT32_MIN;
	uint16_t x1544 = 429U;
	static volatile int32_t t23 = 4;

	t23 = (x1541%((x1542==x1543)*x1544));

	if (t23 != 333) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1708 = -1;
	int64_t t24 = 69386006LL;

	t24 = (x1705%((x1706==x1707)*x1708));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1785 = -280330;
	static volatile int64_t x1786 = -1LL;
	int64_t x1787 = -1LL;
	int16_t x1788 = INT16_MIN;
	static volatile int32_t t25 = -392148739;

	t25 = (x1785%((x1786==x1787)*x1788));

	if (t25 != -18186) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x1809 = INT8_MIN;
	uint16_t x1811 = UINT16_MAX;
	uint64_t x1812 = 372938LLU;

	t26 = (x1809%((x1810==x1811)*x1812));

	if (t26 != 47700LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1849 = 193;
	static uint64_t x1850 = UINT64_MAX;
	volatile uint64_t x1851 = UINT64_MAX;
	int8_t x1852 = -2;
	volatile int32_t t27 = -307;

	t27 = (x1849%((x1850==x1851)*x1852));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x2002 = -1;
	uint32_t x2003 = UINT32_MAX;

	t28 = (x2001%((x2002==x2003)*x2004));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x2009 = 1LL;
	int8_t x2010 = -1;
	uint32_t x2011 = UINT32_MAX;
	int32_t x2012 = INT32_MIN;

	t29 = (x2009%((x2010==x2011)*x2012));

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x2013 = UINT32_MAX;
	volatile int32_t x2014 = -1;
	int32_t x2015 = -1;
	uint64_t x2016 = 2962892137173LLU;

	t30 = (x2013%((x2014==x2015)*x2016));

	if (t30 != 4294967295LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x2113 = 3U;
	volatile int8_t x2114 = INT8_MAX;
	volatile int8_t x2115 = INT8_MAX;
	volatile int32_t t31 = -442;

	t31 = (x2113%((x2114==x2115)*x2116));

	if (t31 != 3) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x2205 = 119891LLU;
	int8_t x2207 = -1;
	volatile int32_t x2208 = -1;

	t32 = (x2205%((x2206==x2207)*x2208));

	if (t32 != 119891LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x2361 = 114U;
	int16_t x2362 = -1;
	int8_t x2364 = -26;
	static int32_t t33 = -1468;

	t33 = (x2361%((x2362==x2363)*x2364));

	if (t33 != 10) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x2529 = 7651U;
	int64_t x2530 = -1LL;
	int32_t x2531 = -1;

	t34 = (x2529%((x2530==x2531)*x2532));

	if (t34 != 31U) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x2541 = INT64_MIN;
	static int8_t x2542 = INT8_MIN;
	int8_t x2543 = INT8_MIN;
	int32_t x2544 = INT32_MIN;
	volatile int64_t t35 = -67957595441347LL;

	t35 = (x2541%((x2542==x2543)*x2544));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x2645 = 20;
	uint32_t x2646 = UINT32_MAX;
	uint32_t x2647 = UINT32_MAX;
	int64_t x2648 = 6669295LL;
	volatile int64_t t36 = 511173305LL;

	t36 = (x2645%((x2646==x2647)*x2648));

	if (t36 != 20LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x2745 = -9;
	uint16_t x2747 = UINT16_MAX;
	int64_t x2748 = INT64_MIN;

	t37 = (x2745%((x2746==x2747)*x2748));

	if (t37 != -9LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x2753 = INT16_MIN;
	int8_t x2754 = -1;
	int32_t x2755 = -1;
	volatile uint16_t x2756 = 8U;
	int32_t t38 = -1625;

	t38 = (x2753%((x2754==x2755)*x2756));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x2789 = -1LL;
	volatile int32_t x2790 = -1;
	static int16_t x2791 = -1;
	int16_t x2792 = 1012;
	volatile int64_t t39 = 110295207846985996LL;

	t39 = (x2789%((x2790==x2791)*x2792));

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x2877 = INT16_MAX;
	int16_t x2879 = INT16_MIN;
	static uint64_t x2880 = 121034530932997758LLU;
	uint64_t t40 = 3103029LLU;

	t40 = (x2877%((x2878==x2879)*x2880));

	if (t40 != 32767LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x2901 = UINT32_MAX;
	uint64_t x2903 = UINT64_MAX;

	t41 = (x2901%((x2902==x2903)*x2904));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x2957 = -1LL;
	int16_t x2959 = -1;
	static int16_t x2960 = INT16_MIN;
	volatile int64_t t42 = 7361LL;

	t42 = (x2957%((x2958==x2959)*x2960));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x3082 = INT8_MAX;
	volatile int16_t x3084 = INT16_MIN;
	static volatile int32_t t43 = 59;

	t43 = (x3081%((x3082==x3083)*x3084));

	if (t43 != 7839) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x3105 = 1680374639188LLU;
	volatile uint64_t x3106 = UINT64_MAX;
	static int32_t x3107 = -1;
	static uint64_t x3108 = 269851431618LLU;
	volatile uint64_t t44 = 54401732LLU;

	t44 = (x3105%((x3106==x3107)*x3108));

	if (t44 != 61266049480LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x3305 = -1;
	uint16_t x3306 = 0U;
	int64_t x3307 = 0LL;
	uint32_t x3308 = 940430037U;
	uint32_t t45 = 418U;

	t45 = (x3305%((x3306==x3307)*x3308));

	if (t45 != 533247147U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x3505 = 41880885LLU;
	int32_t x3506 = INT32_MIN;
	static int32_t x3507 = INT32_MIN;
	static int8_t x3508 = -3;
	volatile uint64_t t46 = 1602LLU;

	t46 = (x3505%((x3506==x3507)*x3508));

	if (t46 != 41880885LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x3771 = -1LL;
	volatile uint8_t x3772 = UINT8_MAX;
	static uint32_t t47 = 829U;

	t47 = (x3769%((x3770==x3771)*x3772));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x4050 = INT64_MIN;
	int64_t x4051 = INT64_MIN;
	uint64_t x4052 = 3721109273221LLU;
	uint64_t t48 = 62702135600810LLU;

	t48 = (x4049%((x4050==x4051)*x4052));

	if (t48 != 1762LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x4110 = UINT16_MAX;
	uint16_t x4111 = UINT16_MAX;
	int8_t x4112 = INT8_MIN;
	volatile int64_t t49 = -335651409LL;

	t49 = (x4109%((x4110==x4111)*x4112));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x4113 = INT32_MIN;
	int32_t x4115 = -1;
	int8_t x4116 = INT8_MAX;

	t50 = (x4113%((x4114==x4115)*x4116));

	if (t50 != -8) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x4157 = -14;
	int8_t x4158 = INT8_MIN;
	int8_t x4159 = INT8_MIN;
	uint64_t x4160 = 221037165668560LLU;
	volatile uint64_t t51 = 1029374166502753913LLU;

	t51 = (x4157%((x4158==x4159)*x4160));

	if (t51 != 87412839876802LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x4217 = 6567807071898LL;
	int32_t x4218 = -1;
	volatile int64_t x4219 = -1LL;
	int64_t t52 = 6709460296LL;

	t52 = (x4217%((x4218==x4219)*x4220));

	if (t52 != 26LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x4397 = UINT8_MAX;
	static int16_t x4400 = -54;
	volatile int32_t t53 = 1;

	t53 = (x4397%((x4398==x4399)*x4400));

	if (t53 != 39) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x4409 = 4LLU;
	int64_t x4410 = INT64_MIN;
	int64_t x4411 = INT64_MIN;
	volatile uint64_t t54 = 201339447674LLU;

	t54 = (x4409%((x4410==x4411)*x4412));

	if (t54 != 4LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x4717 = UINT16_MAX;
	int8_t x4718 = INT8_MIN;
	int8_t x4719 = INT8_MIN;
	int8_t x4720 = INT8_MIN;
	int32_t t55 = -51049;

	t55 = (x4717%((x4718==x4719)*x4720));

	if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x4721 = INT64_MIN;
	uint16_t x4723 = 1U;
	int64_t x4724 = -33131481603110LL;

	t56 = (x4721%((x4722==x4723)*x4724));

	if (t56 != -31399291395348LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x4781 = UINT32_MAX;
	static int8_t x4782 = -1;
	int8_t x4783 = -1;
	volatile uint32_t t57 = 256894625U;

	t57 = (x4781%((x4782==x4783)*x4784));

	if (t57 != 29062121U) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x4961 = 22U;
	int8_t x4962 = -1;
	static int32_t x4963 = -1;
	int64_t x4964 = 818538984589LL;

	t58 = (x4961%((x4962==x4963)*x4964));

	if (t58 != 22LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x4977 = 4502255U;
	int64_t x4978 = INT64_MIN;
	volatile uint16_t x4980 = 223U;
	uint32_t t59 = 11U;

	t59 = (x4977%((x4978==x4979)*x4980));

	if (t59 != 108U) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x5069 = 40452911U;
	int64_t x5070 = -1LL;
	int16_t x5071 = -1;
	uint32_t t60 = 18545848U;

	t60 = (x5069%((x5070==x5071)*x5072));

	if (t60 != 40452911U) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint8_t x5093 = 30U;
	static volatile int32_t x5094 = INT32_MIN;
	static int32_t x5095 = INT32_MIN;
	int8_t x5096 = INT8_MIN;

	t61 = (x5093%((x5094==x5095)*x5096));

	if (t61 != 30) { NG(); } else { ; }
	
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


    return 0;
}


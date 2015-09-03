#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x213 = -1;
int8_t x214 = INT8_MIN;
int64_t x216 = -268803619025636LL;
uint64_t x249 = 204697400520LLU;
static volatile uint16_t x252 = 6537U;
uint64_t x274 = 2549304698914LLU;
static uint32_t x329 = UINT32_MAX;
int64_t x330 = 673512219LL;
uint8_t x341 = 47U;
uint8_t x343 = 5U;
int32_t t7 = 11;
volatile int32_t x561 = INT32_MIN;
int64_t t9 = 1LL;
volatile uint32_t x576 = 19U;
static int32_t x626 = -1;
static volatile uint16_t x791 = 1U;
static uint32_t x818 = 172883908U;
int64_t t15 = -36426476LL;
volatile int64_t x908 = INT64_MAX;
static uint64_t x909 = 636737287885328006LLU;
static int16_t x910 = -1;
uint32_t x911 = 55U;
int8_t x919 = 0;
static volatile uint32_t x1118 = 104293336U;
uint64_t x1130 = UINT64_MAX;
int64_t x1249 = INT64_MIN;
uint64_t x1413 = 14LLU;
uint8_t x1415 = 31U;
static uint64_t x1421 = 411184LLU;
volatile uint64_t t25 = 15474360132433007LLU;
volatile int64_t x1442 = INT64_MIN;
uint8_t x1768 = 0U;
uint8_t x1840 = 112U;
uint64_t x1882 = UINT64_MAX;
volatile uint8_t x1931 = 48U;
uint64_t t34 = 169LLU;
int16_t x2022 = INT16_MAX;
volatile int16_t x2023 = 12;
int8_t x2097 = INT8_MIN;
volatile int8_t x2098 = -4;
uint8_t x2159 = 0U;
volatile uint32_t t37 = 0U;
uint16_t x2307 = 6U;
int64_t x2394 = -1LL;
static uint64_t t42 = 157108381469LLU;
static volatile uint8_t x2507 = 10U;
int16_t x2508 = -115;
volatile int32_t x2613 = -345759;
volatile uint8_t x2689 = 0U;
uint16_t x2891 = 0U;
static volatile uint64_t t50 = 691073675973592495LLU;
static uint32_t t51 = 13207U;
uint32_t x3198 = 31973U;
int16_t x3200 = 1;
static uint64_t x3322 = UINT64_MAX;
volatile uint64_t x3324 = UINT64_MAX;
static uint32_t x3345 = 25U;
int32_t x3346 = INT32_MIN;
int8_t x3349 = INT8_MIN;
static volatile uint16_t x3383 = 6U;
int32_t x3398 = -1;
uint8_t x3410 = 94U;
uint8_t x3603 = 13U;
int32_t x3672 = -2192;
int32_t x3892 = -1;
volatile int8_t x3966 = INT8_MIN;
volatile uint64_t t69 = 20942LLU;
int8_t x4249 = INT8_MIN;
int32_t t70 = -7;
volatile int8_t x4283 = 0;
int16_t x4344 = INT16_MIN;
volatile int8_t x4411 = 35;
uint8_t x4507 = 1U;
int32_t x4509 = 64643591;
int16_t x4558 = INT16_MIN;
volatile int16_t x4640 = INT16_MAX;
volatile int32_t x4742 = INT32_MIN;
uint16_t x4758 = UINT16_MAX;
int8_t x4759 = 1;
static int8_t x4760 = INT8_MAX;
int32_t x5138 = INT32_MIN;
uint64_t x5153 = 81132517573354235LLU;
static volatile uint64_t t86 = 3153671067LLU;
int16_t x5360 = -1;
int64_t x5392 = 2824LL;
int16_t x5532 = INT16_MIN;
int16_t x5598 = 1;
volatile uint32_t x5600 = UINT32_MAX;
volatile uint32_t t92 = 1000833U;
uint32_t x5722 = 4U;
int16_t x5765 = INT16_MIN;
int16_t x5768 = INT16_MIN;
static volatile int64_t t95 = 8734753332653LL;
uint64_t x5784 = 11883838LLU;
uint64_t t96 = 417393907156568LLU;
uint8_t x5844 = 5U;
volatile uint32_t x6030 = UINT32_MAX;
volatile int64_t t98 = -737934893013LL;
static int64_t x6069 = -1LL;
uint16_t x6072 = 66U;
volatile int64_t t99 = 33817787119LL;


void f0(void) {
	int64_t x41 = 3058667268003491LL;
	volatile uint64_t x42 = 183LLU;
	volatile int16_t x43 = 1;
	volatile uint64_t x44 = 4010934086158746LLU;
	uint64_t t0 = 1136401722854082628LLU;

	t0 = (((x41*x42)>>x43)-x44);

	if (t0 != 275857120936160680LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x215 = 25;
	int64_t t1 = -259314096LL;

	t1 = (((x213*x214)>>x215)-x216);

	if (t1 != 268803619025636LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x250 = -1;
	volatile int16_t x251 = 4;
	uint64_t t2 = 4100442LLU;

	t2 = (((x249*x250)>>x251)-x252);

	if (t2 != 1152921491813252906LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x273 = INT32_MIN;
	uint8_t x275 = 11U;
	int64_t x276 = INT64_MIN;
	static uint64_t t3 = 237530070710184824LLU;

	t3 = (((x273*x274)>>x275)-x276);

	if (t3 != 9225370491544403968LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x331 = 1;
	int16_t x332 = INT16_MIN;
	static volatile int64_t t4 = -366742803142136067LL;

	t4 = (((x329*x330)>>x331)-x332);

	if (t4 != 1446356476693971570LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x342 = 6359904284836533862LLU;
	volatile int16_t x344 = INT16_MIN;
	uint64_t t5 = 7052LLU;

	t5 = (((x341*x342)>>x343)-x344);

	if (t5 != 117737381498916069LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x345 = INT8_MIN;
	uint64_t x346 = 313687264474361071LLU;
	uint16_t x347 = 1U;
	volatile uint64_t x348 = 8LLU;
	uint64_t t6 = 943LLU;

	t6 = (((x345*x346)>>x347)-x348);

	if (t6 != 7594131184205218872LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x481 = 0;
	int16_t x482 = INT16_MAX;
	volatile int32_t x483 = 3;
	static int8_t x484 = 50;

	t7 = (((x481*x482)>>x483)-x484);

	if (t7 != -50) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x557 = 86067300756317LLU;
	int8_t x558 = 1;
	volatile int8_t x559 = 3;
	volatile int32_t x560 = -1;
	static uint64_t t8 = 10419504725427536LLU;

	t8 = (((x557*x558)>>x559)-x560);

	if (t8 != 10758412594540LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x562 = -1LL;
	volatile int8_t x563 = 0;
	int8_t x564 = 36;

	t9 = (((x561*x562)>>x563)-x564);

	if (t9 != 2147483612LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x573 = 1270U;
	int16_t x574 = 504;
	uint8_t x575 = 21U;
	volatile uint32_t t10 = 1776200U;

	t10 = (((x573*x574)>>x575)-x576);

	if (t10 != 4294967277U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x625 = INT16_MIN;
	int8_t x627 = 6;
	static int8_t x628 = INT8_MIN;
	int32_t t11 = 107511;

	t11 = (((x625*x626)>>x627)-x628);

	if (t11 != 640) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x685 = INT8_MIN;
	int16_t x686 = -37;
	uint8_t x687 = 0U;
	uint64_t x688 = UINT64_MAX;
	volatile uint64_t t12 = 0LLU;

	t12 = (((x685*x686)>>x687)-x688);

	if (t12 != 4737LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x789 = INT32_MAX;
	volatile uint32_t x790 = 5825U;
	static volatile int16_t x792 = INT16_MAX;
	volatile uint32_t t13 = 159294U;

	t13 = (((x789*x790)>>x791)-x792);

	if (t13 != 1073706144U) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x813 = 30079U;
	static int8_t x814 = INT8_MAX;
	static int32_t x815 = 0;
	uint8_t x816 = 18U;
	int32_t t14 = 28;

	t14 = (((x813*x814)>>x815)-x816);

	if (t14 != 3820015) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x817 = -1;
	static int8_t x819 = 12;
	int64_t x820 = -5983832551LL;

	t15 = (((x817*x818)>>x819)-x820);

	if (t15 != 5984838919LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x841 = UINT64_MAX;
	static int64_t x842 = -1LL;
	uint16_t x843 = 30U;
	static int16_t x844 = -1;
	volatile uint64_t t16 = 464LLU;

	t16 = (((x841*x842)>>x843)-x844);

	if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x905 = 1;
	volatile uint16_t x906 = 0U;
	uint32_t x907 = 2U;
	volatile int64_t t17 = 13LL;

	t17 = (((x905*x906)>>x907)-x908);

	if (t17 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x912 = INT8_MIN;
	uint64_t t18 = 39610577347LLU;

	t18 = (((x909*x910)>>x911)-x912);

	if (t18 != 622LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x917 = INT8_MIN;
	int16_t x918 = INT16_MIN;
	volatile int64_t x920 = -1LL;
	volatile int64_t t19 = 13021LL;

	t19 = (((x917*x918)>>x919)-x920);

	if (t19 != 4194305LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x1077 = UINT64_MAX;
	static int8_t x1078 = -34;
	volatile int8_t x1079 = 1;
	static uint8_t x1080 = 3U;
	uint64_t t20 = 27218LLU;

	t20 = (((x1077*x1078)>>x1079)-x1080);

	if (t20 != 14LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x1117 = INT8_MIN;
	uint8_t x1119 = 2U;
	uint16_t x1120 = 23U;
	uint32_t t21 = 52726U;

	t21 = (((x1117*x1118)>>x1119)-x1120);

	if (t21 != 957580521U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1129 = INT32_MAX;
	int8_t x1131 = 0;
	uint64_t x1132 = 134822895041534LLU;
	volatile uint64_t t22 = 3608LLU;

	t22 = (((x1129*x1130)>>x1131)-x1132);

	if (t22 != 18446609248667026435LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x1250 = 832103398119LLU;
	int8_t x1251 = 9;
	uint64_t x1252 = 88734750144LLU;
	uint64_t t23 = 717001174789LLU;

	t23 = (((x1249*x1250)>>x1251)-x1252);

	if (t23 != 18014309774731840LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1414 = INT64_MIN;
	uint16_t x1416 = 30513U;
	uint64_t t24 = 116612LLU;

	t24 = (((x1413*x1414)>>x1415)-x1416);

	if (t24 != 18446744073709521103LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1422 = INT64_MIN;
	volatile uint8_t x1423 = 4U;
	volatile int16_t x1424 = -1;

	t25 = (((x1421*x1422)>>x1423)-x1424);

	if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1441 = 753473337373LLU;
	static int8_t x1443 = 0;
	int64_t x1444 = -1LL;
	uint64_t t26 = 392316LLU;

	t26 = (((x1441*x1442)>>x1443)-x1444);

	if (t26 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1517 = -1;
	volatile int16_t x1518 = -1;
	uint8_t x1519 = 10U;
	int64_t x1520 = 150LL;
	static volatile int64_t t27 = -36LL;

	t27 = (((x1517*x1518)>>x1519)-x1520);

	if (t27 != -150LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1621 = INT64_MIN;
	volatile uint64_t x1622 = 1792651002571617369LLU;
	static uint16_t x1623 = 46U;
	volatile int8_t x1624 = -32;
	volatile uint64_t t28 = 91250863229630LLU;

	t28 = (((x1621*x1622)>>x1623)-x1624);

	if (t28 != 131104LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x1765 = INT32_MIN;
	int64_t x1766 = -1LL;
	volatile uint8_t x1767 = 3U;
	volatile int64_t t29 = 4584139609882LL;

	t29 = (((x1765*x1766)>>x1767)-x1768);

	if (t29 != 268435456LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1837 = -1;
	static uint32_t x1838 = UINT32_MAX;
	uint8_t x1839 = 8U;
	volatile uint32_t t30 = 2967253U;

	t30 = (((x1837*x1838)>>x1839)-x1840);

	if (t30 != 4294967184U) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint32_t x1881 = UINT32_MAX;
	volatile uint8_t x1883 = 1U;
	int16_t x1884 = INT16_MIN;
	volatile uint64_t t31 = 86760686316549591LLU;

	t31 = (((x1881*x1882)>>x1883)-x1884);

	if (t31 != 9223372034707324928LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1909 = UINT64_MAX;
	int64_t x1910 = -1662010521413LL;
	uint8_t x1911 = 13U;
	int16_t x1912 = INT16_MIN;
	volatile uint64_t t32 = 197000433276948LLU;

	t32 = (((x1909*x1910)>>x1911)-x1912);

	if (t32 != 202914911LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1929 = -1LL;
	static int16_t x1930 = INT16_MIN;
	static volatile int16_t x1932 = INT16_MIN;
	int64_t t33 = 1324330008956LL;

	t33 = (((x1929*x1930)>>x1931)-x1932);

	if (t33 != 32768LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x1981 = 10LLU;
	int16_t x1982 = 7308;
	static uint32_t x1983 = 2U;
	static int16_t x1984 = INT16_MIN;

	t34 = (((x1981*x1982)>>x1983)-x1984);

	if (t34 != 51038LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x2021 = 26359;
	volatile uint16_t x2024 = 486U;
	int32_t t35 = -153486587;

	t35 = (((x2021*x2022)>>x2023)-x2024);

	if (t35 != 210379) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x2099 = 13U;
	int8_t x2100 = INT8_MIN;
	int32_t t36 = -8263205;

	t36 = (((x2097*x2098)>>x2099)-x2100);

	if (t36 != 128) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x2157 = UINT32_MAX;
	int8_t x2158 = INT8_MIN;
	static volatile uint16_t x2160 = 6035U;

	t37 = (((x2157*x2158)>>x2159)-x2160);

	if (t37 != 4294961389U) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x2305 = 13U;
	uint16_t x2306 = 8U;
	int8_t x2308 = INT8_MIN;
	static volatile int32_t t38 = -181993;

	t38 = (((x2305*x2306)>>x2307)-x2308);

	if (t38 != 129) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x2341 = -1;
	int32_t x2342 = -1;
	int8_t x2343 = 0;
	volatile uint16_t x2344 = 805U;
	int32_t t39 = 747;

	t39 = (((x2341*x2342)>>x2343)-x2344);

	if (t39 != -804) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x2369 = INT64_MIN;
	uint64_t x2370 = 5642721976692086LLU;
	int8_t x2371 = 1;
	uint8_t x2372 = UINT8_MAX;
	uint64_t t40 = 8981726310035LLU;

	t40 = (((x2369*x2370)>>x2371)-x2372);

	if (t40 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x2389 = INT8_MIN;
	volatile int16_t x2390 = INT16_MIN;
	static int8_t x2391 = 10;
	uint64_t x2392 = 1043488170184345LLU;
	uint64_t t41 = 58147218828150LLU;

	t41 = (((x2389*x2390)>>x2391)-x2392);

	if (t41 != 18445700585539371367LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x2393 = 247526LLU;
	volatile uint32_t x2395 = 0U;
	int8_t x2396 = INT8_MIN;

	t42 = (((x2393*x2394)>>x2395)-x2396);

	if (t42 != 18446744073709304218LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x2505 = 24U;
	int32_t x2506 = 164400;
	int32_t t43 = 2234;

	t43 = (((x2505*x2506)>>x2507)-x2508);

	if (t43 != 3968) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x2614 = 16LLU;
	volatile uint16_t x2615 = 2U;
	static int64_t x2616 = -1LL;
	uint64_t t44 = 265875521167947471LLU;

	t44 = (((x2613*x2614)>>x2615)-x2616);

	if (t44 != 4611686018426004869LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2690 = INT16_MAX;
	int8_t x2691 = 6;
	uint16_t x2692 = 1U;
	int32_t t45 = 5635312;

	t45 = (((x2689*x2690)>>x2691)-x2692);

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2697 = -1;
	static int8_t x2698 = INT8_MIN;
	static volatile uint16_t x2699 = 0U;
	int16_t x2700 = INT16_MIN;
	volatile int32_t t46 = 812719675;

	t46 = (((x2697*x2698)>>x2699)-x2700);

	if (t46 != 32896) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x2833 = INT32_MIN;
	static uint32_t x2834 = 174U;
	static int8_t x2835 = 0;
	volatile uint16_t x2836 = UINT16_MAX;
	static volatile uint32_t t47 = 306U;

	t47 = (((x2833*x2834)>>x2835)-x2836);

	if (t47 != 4294901761U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x2857 = 564967004712LLU;
	int32_t x2858 = INT32_MIN;
	uint32_t x2859 = 14U;
	int64_t x2860 = INT64_MAX;
	volatile uint64_t t48 = 3269557522LLU;

	t48 = (((x2857*x2858)>>x2859)-x2860);

	if (t48 != 9223630075464777729LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x2889 = INT8_MIN;
	volatile uint32_t x2890 = 1516U;
	volatile int16_t x2892 = -1;
	uint32_t t49 = 727U;

	t49 = (((x2889*x2890)>>x2891)-x2892);

	if (t49 != 4294773249U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x2901 = 360;
	static uint64_t x2902 = 686703890821102LLU;
	int8_t x2903 = 14;
	volatile int16_t x2904 = 0;

	t50 = (((x2901*x2902)>>x2903)-x2904);

	if (t50 != 15088708538549LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x3009 = 876U;
	uint16_t x3010 = 27545U;
	int8_t x3011 = 0;
	static int8_t x3012 = -1;

	t51 = (((x3009*x3010)>>x3011)-x3012);

	if (t51 != 24129421U) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x3057 = 1345069483U;
	int64_t x3058 = 83993548LL;
	int32_t x3059 = 7;
	static uint64_t x3060 = 1092303329711739827LLU;
	volatile uint64_t t52 = 468035677076950LLU;

	t52 = (((x3057*x3058)>>x3059)-x3060);

	if (t52 != 17355323378046121911LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x3065 = 32043LLU;
	static int16_t x3066 = -3;
	int8_t x3067 = 1;
	static uint32_t x3068 = UINT32_MAX;
	volatile uint64_t t53 = 28323395827986LLU;

	t53 = (((x3065*x3066)>>x3067)-x3068);

	if (t53 != 9223372032559760448LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x3089 = 4935648U;
	uint64_t x3090 = 2LLU;
	uint8_t x3091 = 41U;
	volatile int64_t x3092 = -473316331483LL;
	static uint64_t t54 = 524183601191556LLU;

	t54 = (((x3089*x3090)>>x3091)-x3092);

	if (t54 != 473316331483LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x3197 = INT16_MAX;
	int8_t x3199 = 2;
	uint32_t t55 = 1563649308U;

	t55 = (((x3197*x3198)>>x3199)-x3200);

	if (t55 != 261914821U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x3321 = INT8_MIN;
	static volatile uint32_t x3323 = 13U;
	uint64_t t56 = 2084082LLU;

	t56 = (((x3321*x3322)>>x3323)-x3324);

	if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x3347 = 1U;
	int32_t x3348 = -25;
	uint32_t t57 = 1291587488U;

	t57 = (((x3345*x3346)>>x3347)-x3348);

	if (t57 != 1073741849U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x3350 = -1375107LL;
	uint8_t x3351 = 2U;
	volatile uint64_t x3352 = 20124233196106541LLU;
	static uint64_t t58 = 1720247LLU;

	t58 = (((x3349*x3350)>>x3351)-x3352);

	if (t58 != 18426619840557448499LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x3381 = INT32_MAX;
	uint32_t x3382 = 18642354U;
	int32_t x3384 = INT32_MIN;
	volatile uint32_t t59 = 76U;

	t59 = (((x3381*x3382)>>x3383)-x3384);

	if (t59 != 2214301225U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x3397 = UINT32_MAX;
	uint8_t x3399 = 14U;
	volatile int8_t x3400 = -1;
	volatile uint32_t t60 = 21051U;

	t60 = (((x3397*x3398)>>x3399)-x3400);

	if (t60 != 1U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x3409 = INT8_MAX;
	static int8_t x3411 = 3;
	int64_t x3412 = -1LL;
	int64_t t61 = 62144055964096LL;

	t61 = (((x3409*x3410)>>x3411)-x3412);

	if (t61 != 1493LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x3489 = -60LL;
	uint8_t x3490 = 0U;
	uint16_t x3491 = 1U;
	int16_t x3492 = INT16_MAX;
	volatile int64_t t62 = 15LL;

	t62 = (((x3489*x3490)>>x3491)-x3492);

	if (t62 != -32767LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x3601 = -83698746926800277LL;
	volatile int16_t x3602 = -109;
	int16_t x3604 = INT16_MAX;
	int64_t t63 = 284672768184369351LL;

	t63 = (((x3601*x3602)>>x3603)-x3604);

	if (t63 != 1113667409027441LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x3669 = INT8_MIN;
	static int16_t x3670 = INT16_MIN;
	uint8_t x3671 = 0U;
	int32_t t64 = -1923;

	t64 = (((x3669*x3670)>>x3671)-x3672);

	if (t64 != 4196496) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x3729 = 1389;
	uint16_t x3730 = 18U;
	int8_t x3731 = 3;
	uint32_t x3732 = 87612U;
	volatile uint32_t t65 = 8151U;

	t65 = (((x3729*x3730)>>x3731)-x3732);

	if (t65 != 4294882809U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x3757 = 0;
	uint32_t x3758 = 1038U;
	uint16_t x3759 = 29U;
	static volatile int8_t x3760 = -13;
	volatile uint32_t t66 = 622U;

	t66 = (((x3757*x3758)>>x3759)-x3760);

	if (t66 != 13U) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x3889 = 7261U;
	uint16_t x3890 = 2854U;
	volatile int16_t x3891 = 2;
	static int32_t t67 = -1804731;

	t67 = (((x3889*x3890)>>x3891)-x3892);

	if (t67 != 5180724) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x3965 = UINT32_MAX;
	static int32_t x3967 = 27;
	volatile uint8_t x3968 = UINT8_MAX;
	volatile uint32_t t68 = 1U;

	t68 = (((x3965*x3966)>>x3967)-x3968);

	if (t68 != 4294967041U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x4161 = UINT64_MAX;
	static int16_t x4162 = 4644;
	int32_t x4163 = 3;
	int16_t x4164 = -1;

	t69 = (((x4161*x4162)>>x4163)-x4164);

	if (t69 != 2305843009213693372LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x4250 = 0U;
	uint8_t x4251 = 12U;
	uint16_t x4252 = 2U;

	t70 = (((x4249*x4250)>>x4251)-x4252);

	if (t70 != -2) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x4281 = INT8_MIN;
	volatile int8_t x4282 = INT8_MIN;
	int16_t x4284 = INT16_MIN;
	volatile int32_t t71 = -24857097;

	t71 = (((x4281*x4282)>>x4283)-x4284);

	if (t71 != 49152) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x4341 = 34554657U;
	int16_t x4342 = INT16_MAX;
	volatile uint8_t x4343 = 0U;
	volatile uint32_t t72 = 2323561U;

	t72 = (((x4341*x4342)>>x4343)-x4344);

	if (t72 != 2676079839U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x4409 = -64;
	uint64_t x4410 = 7214LLU;
	int8_t x4412 = INT8_MAX;
	static volatile uint64_t t73 = 254LLU;

	t73 = (((x4409*x4410)>>x4411)-x4412);

	if (t73 != 536870784LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x4505 = -14;
	uint32_t x4506 = 419729U;
	volatile uint64_t x4508 = 11500887223525741LLU;
	volatile uint64_t t74 = 144LLU;

	t74 = (((x4505*x4506)>>x4507)-x4508);

	if (t74 != 18435243188630571420LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x4510 = 5U;
	int8_t x4511 = 10;
	int64_t x4512 = 4653023019054LL;
	volatile int64_t t75 = 11116900425276LL;

	t75 = (((x4509*x4510)>>x4511)-x4512);

	if (t75 != -4653022703412LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x4537 = -1;
	uint64_t x4538 = 379268309LLU;
	int64_t x4539 = 1LL;
	int8_t x4540 = INT8_MIN;
	volatile uint64_t t76 = 1702829LLU;

	t76 = (((x4537*x4538)>>x4539)-x4540);

	if (t76 != 9223372036665141781LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x4557 = 18LLU;
	static uint16_t x4559 = 18U;
	int64_t x4560 = 14417649576376LL;
	static volatile uint64_t t77 = 0LLU;

	t77 = (((x4557*x4558)>>x4559)-x4560);

	if (t77 != 55951094601285LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x4589 = -1;
	int32_t x4590 = -1;
	uint64_t x4591 = 27LLU;
	int64_t x4592 = INT64_MAX;
	int64_t t78 = 251LL;

	t78 = (((x4589*x4590)>>x4591)-x4592);

	if (t78 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x4637 = UINT64_MAX;
	int8_t x4638 = INT8_MAX;
	static uint16_t x4639 = 2U;
	volatile uint64_t t79 = 9LLU;

	t79 = (((x4637*x4638)>>x4639)-x4640);

	if (t79 != 4611686018427355105LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x4741 = 0;
	int32_t x4743 = 3;
	volatile int32_t x4744 = 1;
	int32_t t80 = 250793;

	t80 = (((x4741*x4742)>>x4743)-x4744);

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x4757 = 1448989U;
	uint32_t t81 = 42U;

	t81 = (((x4757*x4758)>>x4759)-x4760);

	if (t81 != 235106674U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x4921 = 14941LLU;
	int64_t x4922 = INT64_MIN;
	uint16_t x4923 = 7U;
	int32_t x4924 = -1;
	static uint64_t t82 = 15LLU;

	t82 = (((x4921*x4922)>>x4923)-x4924);

	if (t82 != 72057594037927937LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x4929 = UINT64_MAX;
	int8_t x4930 = -45;
	volatile int16_t x4931 = 2;
	int32_t x4932 = 172040;
	volatile uint64_t t83 = 36896246660LLU;

	t83 = (((x4929*x4930)>>x4931)-x4932);

	if (t83 != 18446744073709379587LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x5021 = UINT64_MAX;
	volatile uint16_t x5022 = 18U;
	uint16_t x5023 = 25U;
	int8_t x5024 = -1;
	uint64_t t84 = 857358695763753188LLU;

	t84 = (((x5021*x5022)>>x5023)-x5024);

	if (t84 != 549755813888LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x5137 = -15251256LL;
	int32_t x5139 = 2;
	static volatile uint8_t x5140 = 7U;
	int64_t t85 = -145026LL;

	t85 = (((x5137*x5138)>>x5139)-x5140);

	if (t85 != 8187955717865465LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x5154 = UINT32_MAX;
	uint16_t x5155 = 6U;
	uint8_t x5156 = UINT8_MAX;

	t86 = (((x5153*x5154)>>x5155)-x5156);

	if (t86 != 81703152316397941LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int16_t x5193 = 0;
	volatile int64_t x5194 = -1LL;
	uint8_t x5195 = 12U;
	uint32_t x5196 = UINT32_MAX;
	int64_t t87 = -4LL;

	t87 = (((x5193*x5194)>>x5195)-x5196);

	if (t87 != -4294967295LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x5357 = 13U;
	volatile uint8_t x5358 = 28U;
	int8_t x5359 = 3;
	static volatile int32_t t88 = 716242299;

	t88 = (((x5357*x5358)>>x5359)-x5360);

	if (t88 != 46) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x5389 = INT16_MIN;
	int16_t x5390 = INT16_MIN;
	static uint16_t x5391 = 2U;
	static volatile int64_t t89 = -1240LL;

	t89 = (((x5389*x5390)>>x5391)-x5392);

	if (t89 != 268432632LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x5437 = -1LL;
	int16_t x5438 = -7211;
	uint16_t x5439 = 1U;
	int16_t x5440 = -40;
	volatile int64_t t90 = 2188LL;

	t90 = (((x5437*x5438)>>x5439)-x5440);

	if (t90 != 3645LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x5529 = INT8_MIN;
	int8_t x5530 = -1;
	static uint16_t x5531 = 0U;
	int32_t t91 = -19705563;

	t91 = (((x5529*x5530)>>x5531)-x5532);

	if (t91 != 32896) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x5597 = 6U;
	int8_t x5599 = 31;

	t92 = (((x5597*x5598)>>x5599)-x5600);

	if (t92 != 1U) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x5705 = UINT8_MAX;
	volatile int8_t x5706 = 3;
	uint8_t x5707 = 0U;
	volatile int64_t x5708 = INT64_MAX;
	int64_t t93 = -488622910765LL;

	t93 = (((x5705*x5706)>>x5707)-x5708);

	if (t93 != -9223372036854775042LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x5721 = -1;
	int32_t x5723 = 6;
	int8_t x5724 = -1;
	uint32_t t94 = 3992115U;

	t94 = (((x5721*x5722)>>x5723)-x5724);

	if (t94 != 67108864U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x5766 = -1LL;
	int8_t x5767 = 1;

	t95 = (((x5765*x5766)>>x5767)-x5768);

	if (t95 != 49152LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x5781 = UINT32_MAX;
	volatile uint8_t x5782 = 1U;
	int16_t x5783 = 0;

	t96 = (((x5781*x5782)>>x5783)-x5784);

	if (t96 != 4283083457LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x5841 = 1;
	uint32_t x5842 = 169U;
	uint64_t x5843 = 6LLU;
	uint32_t t97 = 5U;

	t97 = (((x5841*x5842)>>x5843)-x5844);

	if (t97 != 4294967293U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x6029 = UINT32_MAX;
	uint8_t x6031 = 2U;
	int64_t x6032 = -1LL;

	t98 = (((x6029*x6030)>>x6031)-x6032);

	if (t98 != 1LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x6070 = -1;
	uint8_t x6071 = 29U;

	t99 = (((x6069*x6070)>>x6071)-x6072);

	if (t99 != -66LL) { NG(); } else { ; }
	
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


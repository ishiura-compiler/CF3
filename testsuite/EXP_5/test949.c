#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x26 = INT16_MAX;
uint16_t x200 = 29658U;
int8_t x235 = 1;
int64_t x296 = INT64_MIN;
static volatile int32_t t9 = 26981;
uint32_t x517 = UINT32_MAX;
int16_t x520 = INT16_MAX;
int16_t x561 = INT16_MAX;
int32_t t12 = 19;
int64_t x698 = 462158143LL;
uint32_t x766 = UINT32_MAX;
static uint8_t x768 = 123U;
volatile int32_t x872 = -66;
volatile int32_t t17 = -11;
uint16_t x911 = 3U;
static volatile uint8_t x939 = 1U;
int8_t x962 = INT8_MAX;
static int64_t x993 = -308121LL;
int64_t x1179 = 6LL;
int32_t x1233 = INT32_MAX;
uint16_t x1236 = 634U;
int8_t x1343 = 7;
volatile int64_t x1373 = INT64_MIN;
uint8_t x1374 = 87U;
static uint16_t x1375 = 21U;
int16_t x1496 = INT16_MAX;
static uint8_t x1497 = 38U;
volatile uint32_t t29 = 510843U;
volatile uint32_t x1749 = 74805407U;
uint8_t x1751 = 11U;
int16_t x1769 = INT16_MAX;
int64_t t32 = INT64_MIN;
volatile uint32_t x1955 = 7U;
int32_t x2080 = INT32_MIN;
static uint32_t x2190 = UINT32_MAX;
int32_t x2211 = 3;
int16_t x2212 = INT16_MIN;
uint64_t x2217 = UINT64_MAX;
uint64_t t38 = UINT64_MAX;
uint16_t x2234 = 97U;
int32_t x2235 = 1;
volatile int8_t x2236 = -1;
int64_t x2261 = -245LL;
uint64_t x2264 = UINT64_MAX;
uint8_t x2317 = 0U;
int16_t x2319 = 0;
uint16_t x2320 = 11308U;
volatile int16_t x2417 = -73;
static uint64_t x2419 = 18LLU;
uint16_t x2506 = 14224U;
static uint8_t x2507 = 8U;
static int64_t x2508 = INT64_MIN;
static volatile uint64_t x2668 = UINT64_MAX;
volatile int8_t x2791 = 1;
int8_t x2814 = 0;
int8_t x2857 = -9;
int32_t t51 = 209574644;
static uint16_t x2983 = 0U;
uint8_t x2984 = 5U;
int8_t x3179 = 9;
static volatile uint32_t t55 = 970571U;
volatile int16_t x3235 = 25;
static int16_t x3236 = INT16_MIN;
volatile int32_t t57 = INT32_MIN;
volatile uint32_t x3363 = 18U;
uint32_t x3507 = 1U;
int8_t x3508 = INT8_MAX;
static uint64_t x3514 = 1152838799751467020LLU;
static uint8_t x3515 = 4U;
volatile int32_t t61 = -74;
static int8_t x3521 = -1;
uint64_t x3522 = UINT64_MAX;
int8_t x3523 = 26;
int64_t x3529 = INT64_MIN;
static int16_t x3551 = 9;
uint64_t x3592 = UINT64_MAX;
volatile int64_t t65 = 0LL;
static uint32_t x3700 = 225658U;
static int32_t x3741 = INT32_MIN;
uint8_t x3887 = 4U;
uint8_t x3906 = 9U;
volatile int8_t x3920 = INT8_MIN;
uint64_t x3938 = UINT64_MAX;
uint64_t x3950 = 6205057373043481LLU;
uint32_t x3951 = 1U;
uint8_t x3972 = 56U;
int32_t t76 = 98553091;
int8_t x4009 = -1;
volatile int64_t x4010 = 459954394393340017LL;
uint16_t x4082 = 501U;
volatile int64_t t79 = -3777LL;
volatile uint64_t x4122 = 1471610230749LLU;
uint8_t x4123 = 4U;
int8_t x4170 = INT8_MAX;
static uint16_t x4171 = 0U;
int32_t t83 = INT32_MIN;
int32_t t84 = INT32_MIN;
int64_t x4868 = INT64_MIN;
uint64_t x4976 = UINT64_MAX;


void f0(void) {
	int16_t x5 = -37;
	uint64_t x6 = 9650712263368LLU;
	static uint16_t x7 = 46U;
	int16_t x8 = -1;
	int32_t t0 = 6;

	t0 = (x5^((x6<<x7)==x8));

	if (t0 != -37) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x25 = 247U;
	int8_t x27 = 1;
	static volatile uint64_t x28 = UINT64_MAX;
	volatile int32_t t1 = -356510;

	t1 = (x25^((x26<<x27)==x28));

	if (t1 != 247) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x97 = 51U;
	int8_t x98 = 2;
	int64_t x99 = 6LL;
	volatile int32_t x100 = -1;
	volatile uint32_t t2 = 76163861U;

	t2 = (x97^((x98<<x99)==x100));

	if (t2 != 51U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x101 = INT16_MIN;
	uint8_t x102 = 0U;
	volatile int64_t x103 = 0LL;
	uint16_t x104 = UINT16_MAX;
	int32_t t3 = -3227;

	t3 = (x101^((x102<<x103)==x104));

	if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x157 = 29;
	static uint8_t x158 = UINT8_MAX;
	volatile uint8_t x159 = 1U;
	uint8_t x160 = UINT8_MAX;
	int32_t t4 = -2782;

	t4 = (x157^((x158<<x159)==x160));

	if (t4 != 29) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x173 = 40U;
	uint8_t x174 = 5U;
	uint8_t x175 = 4U;
	static uint64_t x176 = 5807985LLU;
	int32_t t5 = -14640469;

	t5 = (x173^((x174<<x175)==x176));

	if (t5 != 40) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x197 = 3007;
	uint32_t x198 = 105U;
	volatile int8_t x199 = 1;
	int32_t t6 = 5;

	t6 = (x197^((x198<<x199)==x200));

	if (t6 != 3007) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint16_t x233 = 2753U;
	volatile int64_t x234 = 95851LL;
	uint64_t x236 = UINT64_MAX;
	int32_t t7 = -100943998;

	t7 = (x233^((x234<<x235)==x236));

	if (t7 != 2753) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x237 = 3465;
	uint64_t x238 = UINT64_MAX;
	volatile uint8_t x239 = 48U;
	int16_t x240 = -1;
	int32_t t8 = 67058;

	t8 = (x237^((x238<<x239)==x240));

	if (t8 != 3465) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x293 = 7;
	int64_t x294 = 181LL;
	static uint64_t x295 = 7LLU;

	t9 = (x293^((x294<<x295)==x296));

	if (t9 != 7) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x349 = UINT8_MAX;
	int8_t x350 = INT8_MAX;
	uint64_t x351 = 16LLU;
	uint64_t x352 = 339416904956LLU;
	int32_t t10 = -990309;

	t10 = (x349^((x350<<x351)==x352));

	if (t10 != 255) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x518 = 63U;
	int16_t x519 = 0;
	volatile uint32_t t11 = UINT32_MAX;

	t11 = (x517^((x518<<x519)==x520));

	if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x562 = 1;
	int32_t x563 = 22;
	volatile uint32_t x564 = 1558121U;

	t12 = (x561^((x562<<x563)==x564));

	if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x697 = INT16_MAX;
	int8_t x699 = 3;
	int8_t x700 = -31;
	volatile int32_t t13 = -17351418;

	t13 = (x697^((x698<<x699)==x700));

	if (t13 != 32767) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x765 = -2458;
	uint8_t x767 = 2U;
	static int32_t t14 = 12;

	t14 = (x765^((x766<<x767)==x768));

	if (t14 != -2458) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x793 = 12891U;
	uint16_t x794 = UINT16_MAX;
	uint32_t x795 = 1U;
	static volatile int8_t x796 = INT8_MAX;
	static volatile int32_t t15 = -55266661;

	t15 = (x793^((x794<<x795)==x796));

	if (t15 != 12891) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x845 = INT16_MIN;
	static uint64_t x846 = 65691669LLU;
	int8_t x847 = 0;
	int64_t x848 = INT64_MAX;
	static int32_t t16 = 14282;

	t16 = (x845^((x846<<x847)==x848));

	if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x869 = -8;
	volatile int16_t x870 = 0;
	int8_t x871 = 0;

	t17 = (x869^((x870<<x871)==x872));

	if (t17 != -8) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x909 = 3324703348553761LL;
	uint64_t x910 = UINT64_MAX;
	int16_t x912 = INT16_MIN;
	int64_t t18 = -479687501LL;

	t18 = (x909^((x910<<x911)==x912));

	if (t18 != 3324703348553761LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x937 = 556901580LLU;
	uint64_t x938 = 997062070755LLU;
	int64_t x940 = INT64_MIN;
	uint64_t t19 = 19LLU;

	t19 = (x937^((x938<<x939)==x940));

	if (t19 != 556901580LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x961 = INT64_MIN;
	uint16_t x963 = 1U;
	volatile int8_t x964 = 17;
	volatile int64_t t20 = INT64_MIN;

	t20 = (x961^((x962<<x963)==x964));

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x994 = INT16_MAX;
	uint8_t x995 = 0U;
	uint16_t x996 = 234U;
	volatile int64_t t21 = -6687177363LL;

	t21 = (x993^((x994<<x995)==x996));

	if (t21 != -308121LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1157 = -1;
	uint16_t x1158 = 946U;
	int16_t x1159 = 5;
	volatile int8_t x1160 = 6;
	volatile int32_t t22 = 55;

	t22 = (x1157^((x1158<<x1159)==x1160));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1177 = INT16_MIN;
	static int32_t x1178 = 16789;
	int32_t x1180 = 524483334;
	static volatile int32_t t23 = 1821437;

	t23 = (x1177^((x1178<<x1179)==x1180));

	if (t23 != -32768) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1234 = 9105815666178070319LLU;
	uint16_t x1235 = 28U;
	volatile int32_t t24 = INT32_MAX;

	t24 = (x1233^((x1234<<x1235)==x1236));

	if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x1341 = 1;
	uint16_t x1342 = UINT16_MAX;
	uint16_t x1344 = UINT16_MAX;
	static int32_t t25 = -974204508;

	t25 = (x1341^((x1342<<x1343)==x1344));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1376 = -1;
	int64_t t26 = INT64_MIN;

	t26 = (x1373^((x1374<<x1375)==x1376));

	if (t26 != INT64_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1493 = INT64_MIN;
	uint32_t x1494 = UINT32_MAX;
	static uint16_t x1495 = 12U;
	int64_t t27 = INT64_MIN;

	t27 = (x1493^((x1494<<x1495)==x1496));

	if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1498 = 1;
	static uint16_t x1499 = 1U;
	static int64_t x1500 = 24956393308LL;
	int32_t t28 = 179270;

	t28 = (x1497^((x1498<<x1499)==x1500));

	if (t28 != 38) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint32_t x1553 = 205U;
	uint8_t x1554 = 5U;
	uint8_t x1555 = 2U;
	int64_t x1556 = INT64_MAX;

	t29 = (x1553^((x1554<<x1555)==x1556));

	if (t29 != 205U) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x1750 = UINT8_MAX;
	int8_t x1752 = INT8_MIN;
	uint32_t t30 = 257U;

	t30 = (x1749^((x1750<<x1751)==x1752));

	if (t30 != 74805407U) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x1770 = INT16_MAX;
	uint8_t x1771 = 0U;
	int16_t x1772 = -1;
	volatile int32_t t31 = -32721600;

	t31 = (x1769^((x1770<<x1771)==x1772));

	if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x1809 = INT64_MIN;
	int8_t x1810 = INT8_MAX;
	uint16_t x1811 = 0U;
	volatile int32_t x1812 = -1;

	t32 = (x1809^((x1810<<x1811)==x1812));

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1953 = INT64_MAX;
	uint64_t x1954 = UINT64_MAX;
	uint8_t x1956 = 2U;
	volatile int64_t t33 = INT64_MAX;

	t33 = (x1953^((x1954<<x1955)==x1956));

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x2077 = 3;
	int16_t x2078 = INT16_MAX;
	static uint32_t x2079 = 1U;
	int32_t t34 = -1;

	t34 = (x2077^((x2078<<x2079)==x2080));

	if (t34 != 3) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x2121 = INT16_MIN;
	int16_t x2122 = 885;
	uint8_t x2123 = 1U;
	static uint64_t x2124 = 130190246123LLU;
	static int32_t t35 = -107;

	t35 = (x2121^((x2122<<x2123)==x2124));

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x2189 = 2U;
	uint8_t x2191 = 15U;
	uint64_t x2192 = UINT64_MAX;
	volatile int32_t t36 = -41918;

	t36 = (x2189^((x2190<<x2191)==x2192));

	if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x2209 = INT32_MIN;
	uint16_t x2210 = 1U;
	int32_t t37 = INT32_MIN;

	t37 = (x2209^((x2210<<x2211)==x2212));

	if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x2218 = 455;
	int16_t x2219 = 12;
	int64_t x2220 = INT64_MAX;

	t38 = (x2217^((x2218<<x2219)==x2220));

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x2233 = INT16_MIN;
	static volatile int32_t t39 = 69567;

	t39 = (x2233^((x2234<<x2235)==x2236));

	if (t39 != -32768) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x2262 = 53LL;
	static uint8_t x2263 = 1U;
	volatile int64_t t40 = -83026323757337655LL;

	t40 = (x2261^((x2262<<x2263)==x2264));

	if (t40 != -245LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x2318 = 7808U;
	int32_t t41 = 7790;

	t41 = (x2317^((x2318<<x2319)==x2320));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x2418 = 217847902U;
	uint32_t x2420 = UINT32_MAX;
	int32_t t42 = 0;

	t42 = (x2417^((x2418<<x2419)==x2420));

	if (t42 != -73) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x2465 = UINT16_MAX;
	static uint32_t x2466 = UINT32_MAX;
	uint16_t x2467 = 25U;
	static int8_t x2468 = -3;
	static volatile int32_t t43 = 100858;

	t43 = (x2465^((x2466<<x2467)==x2468));

	if (t43 != 65535) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int32_t x2505 = INT32_MIN;
	int32_t t44 = INT32_MIN;

	t44 = (x2505^((x2506<<x2507)==x2508));

	if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x2665 = 3894LLU;
	int16_t x2666 = INT16_MAX;
	int16_t x2667 = 1;
	volatile uint64_t t45 = 967LLU;

	t45 = (x2665^((x2666<<x2667)==x2668));

	if (t45 != 3894LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2789 = 1;
	volatile int16_t x2790 = INT16_MAX;
	static volatile int32_t x2792 = INT32_MAX;
	static volatile int32_t t46 = -6;

	t46 = (x2789^((x2790<<x2791)==x2792));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x2801 = 47U;
	uint8_t x2802 = 13U;
	static uint8_t x2803 = 12U;
	uint8_t x2804 = 21U;
	static int32_t t47 = -64;

	t47 = (x2801^((x2802<<x2803)==x2804));

	if (t47 != 47) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x2813 = -1;
	volatile uint8_t x2815 = 15U;
	uint8_t x2816 = 0U;
	int32_t t48 = -13225;

	t48 = (x2813^((x2814<<x2815)==x2816));

	if (t48 != -2) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x2841 = INT8_MIN;
	static uint16_t x2842 = 1U;
	uint64_t x2843 = 24LLU;
	static uint16_t x2844 = 1U;
	static volatile int32_t t49 = 1890;

	t49 = (x2841^((x2842<<x2843)==x2844));

	if (t49 != -128) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x2853 = INT32_MIN;
	int16_t x2854 = INT16_MAX;
	uint16_t x2855 = 1U;
	int64_t x2856 = INT64_MIN;
	volatile int32_t t50 = INT32_MIN;

	t50 = (x2853^((x2854<<x2855)==x2856));

	if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x2858 = 11;
	int32_t x2859 = 1;
	uint32_t x2860 = UINT32_MAX;

	t51 = (x2857^((x2858<<x2859)==x2860));

	if (t51 != -9) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x2873 = INT64_MIN;
	uint32_t x2874 = 26481564U;
	uint16_t x2875 = 12U;
	int16_t x2876 = INT16_MIN;
	static volatile int64_t t52 = INT64_MIN;

	t52 = (x2873^((x2874<<x2875)==x2876));

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x2981 = -1;
	uint16_t x2982 = UINT16_MAX;
	int32_t t53 = -52;

	t53 = (x2981^((x2982<<x2983)==x2984));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x3101 = INT16_MAX;
	uint32_t x3102 = UINT32_MAX;
	int16_t x3103 = 1;
	int8_t x3104 = INT8_MIN;
	static volatile int32_t t54 = 0;

	t54 = (x3101^((x3102<<x3103)==x3104));

	if (t54 != 32767) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x3177 = 456023903U;
	volatile uint32_t x3178 = 18610U;
	uint32_t x3180 = 42997440U;

	t55 = (x3177^((x3178<<x3179)==x3180));

	if (t55 != 456023903U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x3225 = INT8_MIN;
	uint32_t x3226 = UINT32_MAX;
	int8_t x3227 = 6;
	int64_t x3228 = INT64_MAX;
	volatile int32_t t56 = 3784979;

	t56 = (x3225^((x3226<<x3227)==x3228));

	if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x3233 = INT32_MIN;
	uint32_t x3234 = 1737917U;

	t57 = (x3233^((x3234<<x3235)==x3236));

	if (t57 != INT32_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x3361 = INT16_MIN;
	uint64_t x3362 = 42640269LLU;
	int8_t x3364 = -1;
	volatile int32_t t58 = -172;

	t58 = (x3361^((x3362<<x3363)==x3364));

	if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x3445 = -1LL;
	int16_t x3446 = INT16_MAX;
	volatile uint32_t x3447 = 2U;
	static volatile int8_t x3448 = INT8_MAX;
	volatile int64_t t59 = 3562145074059801LL;

	t59 = (x3445^((x3446<<x3447)==x3448));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x3505 = INT16_MAX;
	uint16_t x3506 = 8572U;
	int32_t t60 = 5;

	t60 = (x3505^((x3506<<x3507)==x3508));

	if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x3513 = 29U;
	uint16_t x3516 = 95U;

	t61 = (x3513^((x3514<<x3515)==x3516));

	if (t61 != 29) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x3524 = 5U;
	volatile int32_t t62 = -279328;

	t62 = (x3521^((x3522<<x3523)==x3524));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x3530 = UINT16_MAX;
	uint8_t x3531 = 7U;
	int16_t x3532 = INT16_MIN;
	int64_t t63 = INT64_MIN;

	t63 = (x3529^((x3530<<x3531)==x3532));

	if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x3549 = INT64_MAX;
	int16_t x3550 = 100;
	static uint64_t x3552 = 1LLU;
	int64_t t64 = INT64_MAX;

	t64 = (x3549^((x3550<<x3551)==x3552));

	if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x3589 = -1LL;
	uint64_t x3590 = UINT64_MAX;
	static volatile int16_t x3591 = 1;

	t65 = (x3589^((x3590<<x3591)==x3592));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x3633 = INT64_MIN;
	uint16_t x3634 = 1057U;
	int8_t x3635 = 0;
	static uint64_t x3636 = UINT64_MAX;
	static volatile int64_t t66 = INT64_MIN;

	t66 = (x3633^((x3634<<x3635)==x3636));

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x3697 = -1656;
	uint16_t x3698 = 11273U;
	volatile uint16_t x3699 = 4U;
	volatile int32_t t67 = 491059567;

	t67 = (x3697^((x3698<<x3699)==x3700));

	if (t67 != -1656) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x3742 = 42415U;
	static uint8_t x3743 = 0U;
	uint32_t x3744 = 7U;
	int32_t t68 = INT32_MIN;

	t68 = (x3741^((x3742<<x3743)==x3744));

	if (t68 != INT32_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x3825 = INT8_MAX;
	uint32_t x3826 = 25994U;
	uint16_t x3827 = 6U;
	uint8_t x3828 = 28U;
	int32_t t69 = 675827053;

	t69 = (x3825^((x3826<<x3827)==x3828));

	if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x3885 = -1;
	static uint8_t x3886 = 72U;
	uint16_t x3888 = 5417U;
	int32_t t70 = 788;

	t70 = (x3885^((x3886<<x3887)==x3888));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x3905 = INT16_MIN;
	uint8_t x3907 = 2U;
	uint8_t x3908 = 4U;
	static volatile int32_t t71 = 65752;

	t71 = (x3905^((x3906<<x3907)==x3908));

	if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x3909 = -1;
	int8_t x3910 = 0;
	uint8_t x3911 = 18U;
	int64_t x3912 = 9089LL;
	volatile int32_t t72 = 6;

	t72 = (x3909^((x3910<<x3911)==x3912));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x3917 = INT32_MIN;
	int64_t x3918 = 537046344456LL;
	uint8_t x3919 = 1U;
	volatile int32_t t73 = INT32_MIN;

	t73 = (x3917^((x3918<<x3919)==x3920));

	if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x3937 = INT64_MAX;
	uint8_t x3939 = 7U;
	int8_t x3940 = 17;
	static volatile int64_t t74 = INT64_MAX;

	t74 = (x3937^((x3938<<x3939)==x3940));

	if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x3949 = INT16_MIN;
	uint16_t x3952 = 1890U;
	int32_t t75 = 5999923;

	t75 = (x3949^((x3950<<x3951)==x3952));

	if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x3969 = -5;
	static int32_t x3970 = 1243;
	volatile uint8_t x3971 = 1U;

	t76 = (x3969^((x3970<<x3971)==x3972));

	if (t76 != -5) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x4005 = 12725U;
	uint32_t x4006 = UINT32_MAX;
	uint16_t x4007 = 0U;
	volatile int8_t x4008 = -11;
	int32_t t77 = -4882308;

	t77 = (x4005^((x4006<<x4007)==x4008));

	if (t77 != 12725) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x4011 = 1LL;
	uint16_t x4012 = UINT16_MAX;
	static int32_t t78 = 380675;

	t78 = (x4009^((x4010<<x4011)==x4012));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x4081 = -8LL;
	volatile uint32_t x4083 = 2U;
	static uint64_t x4084 = 28960327778489814LLU;

	t79 = (x4081^((x4082<<x4083)==x4084));

	if (t79 != -8LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x4121 = UINT8_MAX;
	int64_t x4124 = INT64_MIN;
	static int32_t t80 = -76511;

	t80 = (x4121^((x4122<<x4123)==x4124));

	if (t80 != 255) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x4125 = 2U;
	uint8_t x4126 = UINT8_MAX;
	int16_t x4127 = 11;
	int32_t x4128 = -1;
	volatile int32_t t81 = -966627;

	t81 = (x4125^((x4126<<x4127)==x4128));

	if (t81 != 2) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x4169 = INT32_MAX;
	static uint16_t x4172 = 30U;
	volatile int32_t t82 = INT32_MAX;

	t82 = (x4169^((x4170<<x4171)==x4172));

	if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x4517 = INT32_MIN;
	uint32_t x4518 = 2558U;
	static int8_t x4519 = 0;
	volatile int64_t x4520 = INT64_MIN;

	t83 = (x4517^((x4518<<x4519)==x4520));

	if (t83 != INT32_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x4597 = INT32_MIN;
	uint16_t x4598 = UINT16_MAX;
	int8_t x4599 = 5;
	uint32_t x4600 = UINT32_MAX;

	t84 = (x4597^((x4598<<x4599)==x4600));

	if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x4865 = INT32_MIN;
	uint8_t x4866 = UINT8_MAX;
	static int32_t x4867 = 16;
	static int32_t t85 = INT32_MIN;

	t85 = (x4865^((x4866<<x4867)==x4868));

	if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x4973 = INT64_MIN;
	uint8_t x4974 = UINT8_MAX;
	int8_t x4975 = 2;
	static int64_t t86 = INT64_MIN;

	t86 = (x4973^((x4974<<x4975)==x4976));

	if (t86 != INT64_MIN) { NG(); } else { ; }
	
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


    return 0;
}


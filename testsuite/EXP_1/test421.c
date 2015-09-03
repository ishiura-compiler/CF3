#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x51 = 1U;
volatile int64_t x77 = -69771272018LL;
int32_t x78 = -1;
volatile int64_t t1 = -1020814684844798502LL;
uint16_t x273 = 4081U;
int16_t x275 = 2;
uint64_t x295 = 1LLU;
volatile uint64_t x309 = 0LLU;
int16_t x312 = -1;
uint64_t t5 = 835063072386610644LLU;
uint64_t x393 = 957556LLU;
int8_t x394 = INT8_MAX;
uint64_t x581 = 33851694318LLU;
volatile uint64_t t9 = 1498735200982707035LLU;
int16_t x1039 = 5;
static uint64_t t13 = 11788414466797754LLU;
uint64_t x1240 = 488395579385320546LLU;
uint32_t x1246 = 508U;
static volatile uint32_t t15 = 16518945U;
volatile int32_t x1269 = -2360;
volatile int64_t x1270 = -3691LL;
int8_t x1382 = 56;
int8_t x1546 = INT8_MIN;
int8_t x1548 = -1;
uint8_t x1555 = 4U;
static int64_t x1639 = 1LL;
uint64_t x1736 = UINT64_MAX;
volatile uint64_t x1882 = UINT64_MAX;
uint32_t x2125 = 8U;
int8_t x2144 = 18;
volatile uint64_t t29 = 4895667936LLU;
uint8_t x2383 = 6U;
uint64_t x2437 = 222577682350LLU;
uint8_t x2438 = 92U;
uint32_t x2439 = 13U;
int32_t t36 = 6960639;
int16_t x2482 = -1;
uint64_t x2490 = 120192159248348LLU;
volatile int8_t x2811 = 1;
volatile int32_t t41 = 64342480;
uint8_t x2839 = 62U;
volatile int64_t t42 = -1256160000482650LL;
static volatile uint32_t x2846 = UINT32_MAX;
volatile uint8_t x2857 = UINT8_MAX;
int32_t t45 = 430216;
int8_t x2918 = INT8_MAX;
int64_t x2969 = -1LL;
int16_t x2970 = INT16_MIN;
int16_t x2971 = 1;
int32_t x3022 = INT32_MIN;
int64_t x3049 = 8977LL;
uint64_t x3051 = 0LLU;
int16_t x3052 = INT16_MAX;
uint64_t x3101 = 14049922122143884LLU;
volatile uint64_t t52 = 229360510094499426LLU;
static volatile uint8_t x3171 = 5U;
uint32_t x3172 = 1218026165U;
volatile uint64_t t53 = 26153951165LLU;
int16_t x3243 = 8;
int64_t x3397 = -1LL;
static volatile int64_t x3400 = INT64_MAX;
int64_t x3544 = INT64_MAX;
uint64_t x3662 = 1LLU;
uint64_t x3678 = UINT64_MAX;
uint32_t x3743 = 3U;
uint16_t x3790 = 7U;
uint8_t x4019 = 0U;
int32_t t68 = -6438;
volatile int16_t x4170 = -1;
uint32_t x4171 = 2U;
int64_t t69 = -1802338787LL;
volatile int16_t x4299 = 0;
int16_t x4350 = INT16_MAX;
volatile int32_t t73 = 952;
static uint8_t x4415 = 1U;
int8_t x4416 = 1;
uint32_t x4431 = 1U;
int32_t t75 = 116928;
int8_t x4618 = INT8_MAX;
uint32_t x4634 = 0U;
uint32_t x4761 = 18500U;
uint64_t x4839 = 1LLU;
uint32_t x5002 = UINT32_MAX;
int16_t x5087 = 1;
volatile int64_t x5098 = -15446821LL;
static uint8_t x5100 = UINT8_MAX;
volatile uint64_t x5185 = UINT64_MAX;
int8_t x5186 = -1;
int64_t x5187 = 2LL;
int64_t x5468 = INT64_MIN;
uint8_t x5541 = 0U;
int8_t x5618 = INT8_MIN;
int32_t x5620 = -1;
static int64_t x5718 = -1LL;
static uint8_t x5719 = 30U;
uint8_t x5720 = 1U;
volatile uint64_t t93 = 756669848LLU;
uint8_t x5791 = 0U;
static int16_t x5835 = 3;
volatile uint64_t t96 = 39LLU;
uint64_t x5928 = 11LLU;
volatile int8_t x5989 = INT8_MAX;


void f0(void) {
	int16_t x49 = INT16_MIN;
	static uint32_t x50 = 8411U;
	int32_t x52 = -32533;
	static volatile uint32_t t0 = 101U;

	t0 = (((x49*x50)>>x51)%x52);

	if (t0 != 2009677824U) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x79 = 19U;
	static int32_t x80 = -102045;

	t1 = (((x77*x78)>>x79)%x80);

	if (t1 != 31033LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x177 = 341LL;
	volatile int32_t x178 = 1;
	uint64_t x179 = 0LLU;
	int32_t x180 = INT32_MAX;
	volatile int64_t t2 = -126450933304LL;

	t2 = (((x177*x178)>>x179)%x180);

	if (t2 != 341LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x274 = 5U;
	static int32_t x276 = INT32_MAX;
	volatile int32_t t3 = 0;

	t3 = (((x273*x274)>>x275)%x276);

	if (t3 != 5101) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x293 = 473LLU;
	int32_t x294 = INT32_MIN;
	int8_t x296 = INT8_MIN;
	volatile uint64_t t4 = 437342164665556523LLU;

	t4 = (((x293*x294)>>x295)%x296);

	if (t4 != 9223371528974893056LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x310 = 624;
	uint64_t x311 = 5LLU;

	t5 = (((x309*x310)>>x311)%x312);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x395 = 4;
	volatile int64_t x396 = INT64_MIN;
	uint64_t t6 = 721163LLU;

	t6 = (((x393*x394)>>x395)%x396);

	if (t6 != 7600600LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x501 = 856;
	volatile int32_t x502 = 148;
	int8_t x503 = 0;
	volatile uint64_t x504 = 1237LLU;
	uint64_t t7 = 56041190034LLU;

	t7 = (((x501*x502)>>x503)%x504);

	if (t7 != 514LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x565 = UINT64_MAX;
	static uint16_t x566 = 1739U;
	uint32_t x567 = 5U;
	static uint8_t x568 = 3U;
	uint64_t t8 = 453615816138308567LLU;

	t8 = (((x565*x566)>>x567)%x568);

	if (t8 != 1LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x582 = INT32_MAX;
	int64_t x583 = 6LL;
	static volatile int8_t x584 = -1;

	t9 = (((x581*x582)>>x583)%x584);

	if (t9 != 271183246094049420LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x637 = 529375U;
	int32_t x638 = -1;
	static volatile int8_t x639 = 2;
	int8_t x640 = -61;
	uint32_t t10 = 2324954U;

	t10 = (((x637*x638)>>x639)%x640);

	if (t10 != 1073609480U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x685 = INT32_MIN;
	volatile int64_t x686 = -80825473LL;
	volatile uint8_t x687 = 2U;
	uint32_t x688 = 7837840U;
	static int64_t t11 = -77754262511389513LL;

	t11 = (((x685*x686)>>x687)%x688);

	if (t11 != 553216LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x689 = 30680LL;
	int8_t x690 = 11;
	uint16_t x691 = 5U;
	static int8_t x692 = INT8_MIN;
	int64_t t12 = 44858657036LL;

	t12 = (((x689*x690)>>x691)%x692);

	if (t12 != 50LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x1037 = 2LLU;
	uint16_t x1038 = 245U;
	int16_t x1040 = 2;

	t13 = (((x1037*x1038)>>x1039)%x1040);

	if (t13 != 1LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x1237 = 17;
	int16_t x1238 = 0;
	static volatile int8_t x1239 = 0;
	volatile uint64_t t14 = 1LLU;

	t14 = (((x1237*x1238)>>x1239)%x1240);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x1245 = INT8_MAX;
	static uint32_t x1247 = 15U;
	uint32_t x1248 = UINT32_MAX;

	t15 = (((x1245*x1246)>>x1247)%x1248);

	if (t15 != 1U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x1271 = 1U;
	static uint64_t x1272 = 3854853056307LLU;
	volatile uint64_t t16 = 19968126568433328LLU;

	t16 = (((x1269*x1270)>>x1271)%x1272);

	if (t16 != 4355380LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x1273 = UINT64_MAX;
	volatile int32_t x1274 = INT32_MIN;
	uint8_t x1275 = 26U;
	volatile int32_t x1276 = -1;
	static uint64_t t17 = 46196029588LLU;

	t17 = (((x1273*x1274)>>x1275)%x1276);

	if (t17 != 32LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x1321 = UINT8_MAX;
	static uint16_t x1322 = 452U;
	int8_t x1323 = 2;
	volatile int32_t x1324 = INT32_MIN;
	int32_t t18 = -932472469;

	t18 = (((x1321*x1322)>>x1323)%x1324);

	if (t18 != 28815) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1381 = 0;
	volatile uint8_t x1383 = 8U;
	int64_t x1384 = 30727LL;
	int64_t t19 = 112811LL;

	t19 = (((x1381*x1382)>>x1383)%x1384);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x1545 = 4252639346300415519LLU;
	int8_t x1547 = 6;
	volatile uint64_t t20 = 107225LLU;

	t20 = (((x1545*x1546)>>x1547)%x1548);

	if (t20 != 141632591950521282LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1553 = INT8_MIN;
	int16_t x1554 = -141;
	volatile int32_t x1556 = INT32_MIN;
	volatile int32_t t21 = 9;

	t21 = (((x1553*x1554)>>x1555)%x1556);

	if (t21 != 1128) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1637 = -1;
	int16_t x1638 = -2020;
	static int8_t x1640 = -1;
	int32_t t22 = -14142310;

	t22 = (((x1637*x1638)>>x1639)%x1640);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x1733 = 138624443173812LLU;
	volatile int32_t x1734 = -1;
	int8_t x1735 = 27;
	static volatile uint64_t t23 = 89404532769LLU;

	t23 = (((x1733*x1734)>>x1735)%x1736);

	if (t23 != 137437920639LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x1881 = INT16_MIN;
	volatile int16_t x1883 = 3;
	volatile int8_t x1884 = INT8_MAX;
	uint64_t t24 = 3088764567333LLU;

	t24 = (((x1881*x1882)>>x1883)%x1884);

	if (t24 != 32LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1897 = UINT32_MAX;
	int16_t x1898 = -1;
	uint8_t x1899 = 17U;
	uint64_t x1900 = 34621967140027LLU;
	static volatile uint64_t t25 = 199282LLU;

	t25 = (((x1897*x1898)>>x1899)%x1900);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x2085 = 2747775317LLU;
	int16_t x2086 = -1;
	uint8_t x2087 = 0U;
	int64_t x2088 = INT64_MIN;
	volatile uint64_t t26 = 88236LLU;

	t26 = (((x2085*x2086)>>x2087)%x2088);

	if (t26 != 9223372034107000491LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x2126 = -1;
	int8_t x2127 = 7;
	static int64_t x2128 = INT64_MIN;
	int64_t t27 = 8139LL;

	t27 = (((x2125*x2126)>>x2127)%x2128);

	if (t27 != 33554431LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x2141 = -12669;
	volatile int8_t x2142 = INT8_MIN;
	static volatile uint8_t x2143 = 1U;
	volatile int32_t t28 = -467831;

	t28 = (((x2141*x2142)>>x2143)%x2144);

	if (t28 != 6) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x2149 = 137U;
	volatile uint64_t x2150 = UINT64_MAX;
	int16_t x2151 = 51;
	int8_t x2152 = INT8_MAX;

	t29 = (((x2149*x2150)>>x2151)%x2152);

	if (t29 != 63LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x2285 = INT16_MAX;
	uint64_t x2286 = 990817468LLU;
	volatile int8_t x2287 = 0;
	int32_t x2288 = INT32_MAX;
	uint64_t t30 = 3723674LLU;

	t30 = (((x2285*x2286)>>x2287)%x2288);

	if (t30 != 458198610LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x2309 = 2591LLU;
	static uint8_t x2310 = UINT8_MAX;
	static uint8_t x2311 = 14U;
	int64_t x2312 = -65493194561LL;
	uint64_t t31 = 18659317LLU;

	t31 = (((x2309*x2310)>>x2311)%x2312);

	if (t31 != 40LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x2333 = -1LL;
	int32_t x2334 = INT32_MIN;
	volatile uint16_t x2335 = 2U;
	uint64_t x2336 = 16901279506967318LLU;
	volatile uint64_t t32 = 15LLU;

	t32 = (((x2333*x2334)>>x2335)%x2336);

	if (t32 != 536870912LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x2337 = 15U;
	uint64_t x2338 = 8084550196637LLU;
	volatile uint8_t x2339 = 1U;
	static int32_t x2340 = -1;
	volatile uint64_t t33 = 4487737869086090032LLU;

	t33 = (((x2337*x2338)>>x2339)%x2340);

	if (t33 != 60634126474777LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x2381 = 974U;
	int8_t x2382 = INT8_MAX;
	volatile int32_t x2384 = INT32_MIN;
	static uint32_t t34 = 44072465U;

	t34 = (((x2381*x2382)>>x2383)%x2384);

	if (t34 != 1932U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x2440 = -1;
	uint64_t t35 = 824620LLU;

	t35 = (((x2437*x2438)>>x2439)%x2440);

	if (t35 != 2499651706LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x2477 = UINT8_MAX;
	uint8_t x2478 = 52U;
	uint16_t x2479 = 2U;
	int16_t x2480 = INT16_MAX;

	t36 = (((x2477*x2478)>>x2479)%x2480);

	if (t36 != 3315) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x2481 = UINT32_MAX;
	int8_t x2483 = 1;
	static volatile int32_t x2484 = 11;
	static volatile uint32_t t37 = 7753081U;

	t37 = (((x2481*x2482)>>x2483)%x2484);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x2489 = -26;
	uint8_t x2491 = 21U;
	static uint32_t x2492 = UINT32_MAX;
	uint64_t t38 = 100323115004342581LLU;

	t38 = (((x2489*x2490)>>x2491)%x2492);

	if (t38 != 2804855063LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x2549 = UINT64_MAX;
	int16_t x2550 = 247;
	int16_t x2551 = 1;
	int32_t x2552 = INT32_MAX;
	uint64_t t39 = 30407802664986774LLU;

	t39 = (((x2549*x2550)>>x2551)%x2552);

	if (t39 != 2147483525LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x2585 = INT32_MAX;
	uint32_t x2586 = 226U;
	uint8_t x2587 = 2U;
	static int8_t x2588 = -12;
	volatile uint32_t t40 = 2498U;

	t40 = (((x2585*x2586)>>x2587)%x2588);

	if (t40 != 1073741767U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x2809 = 0U;
	uint8_t x2810 = 3U;
	int32_t x2812 = INT32_MIN;

	t41 = (((x2809*x2810)>>x2811)%x2812);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x2837 = -1LL;
	static int8_t x2838 = INT8_MIN;
	volatile int64_t x2840 = INT64_MAX;

	t42 = (((x2837*x2838)>>x2839)%x2840);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x2845 = -1;
	static int16_t x2847 = 16;
	volatile int64_t x2848 = INT64_MAX;
	volatile int64_t t43 = 5980306LL;

	t43 = (((x2845*x2846)>>x2847)%x2848);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x2858 = INT16_MAX;
	uint32_t x2859 = 0U;
	int16_t x2860 = -1;
	volatile int32_t t44 = -2;

	t44 = (((x2857*x2858)>>x2859)%x2860);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2909 = -100;
	int16_t x2910 = -1;
	volatile uint8_t x2911 = 14U;
	int32_t x2912 = -1;

	t45 = (((x2909*x2910)>>x2911)%x2912);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x2917 = 312;
	uint8_t x2919 = 13U;
	volatile int32_t x2920 = -1;
	int32_t t46 = 12842350;

	t46 = (((x2917*x2918)>>x2919)%x2920);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x2941 = 80LL;
	static uint8_t x2942 = 56U;
	static volatile uint16_t x2943 = 11U;
	static int8_t x2944 = INT8_MIN;
	volatile int64_t t47 = -308408794854LL;

	t47 = (((x2941*x2942)>>x2943)%x2944);

	if (t47 != 2LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x2972 = INT32_MIN;
	int64_t t48 = -120220127805LL;

	t48 = (((x2969*x2970)>>x2971)%x2972);

	if (t48 != 16384LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x3021 = 16782U;
	uint8_t x3023 = 5U;
	int16_t x3024 = -1;
	static volatile uint32_t t49 = 1U;

	t49 = (((x3021*x3022)>>x3023)%x3024);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x3033 = INT32_MAX;
	uint32_t x3034 = 12U;
	uint32_t x3035 = 1U;
	uint64_t x3036 = 19215287LLU;
	volatile uint64_t t50 = 58792529LLU;

	t50 = (((x3033*x3034)>>x3035)%x3036);

	if (t50 != 14586785LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x3050 = INT8_MAX;
	int64_t t51 = 58169141005264LL;

	t51 = (((x3049*x3050)>>x3051)%x3052);

	if (t51 != 26001LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x3102 = INT32_MIN;
	volatile int8_t x3103 = 4;
	int8_t x3104 = INT8_MIN;

	t52 = (((x3101*x3102)>>x3103)%x3104);

	if (t52 != 916004492699238400LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x3169 = INT32_MIN;
	volatile uint64_t x3170 = 266637615LLU;

	t53 = (((x3169*x3170)>>x3171)%x3172);

	if (t53 != 953337708LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x3217 = 4319075857132958545LLU;
	static int32_t x3218 = -1;
	uint32_t x3219 = 1U;
	volatile int32_t x3220 = INT32_MIN;
	volatile uint64_t t54 = 11LLU;

	t54 = (((x3217*x3218)>>x3219)%x3220);

	if (t54 != 7063834108288296535LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x3241 = 47936740705LLU;
	int32_t x3242 = -1;
	int64_t x3244 = -1009290682743LL;
	uint64_t t55 = 485520678705569812LLU;

	t55 = (((x3241*x3242)>>x3243)%x3244);

	if (t55 != 72057593850675042LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x3398 = INT8_MIN;
	uint16_t x3399 = 5U;
	static int64_t t56 = 642996LL;

	t56 = (((x3397*x3398)>>x3399)%x3400);

	if (t56 != 4LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x3433 = INT16_MIN;
	static int16_t x3434 = -2;
	uint64_t x3435 = 0LLU;
	volatile int32_t x3436 = INT32_MIN;
	static volatile int32_t t57 = 30278;

	t57 = (((x3433*x3434)>>x3435)%x3436);

	if (t57 != 65536) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x3505 = INT32_MIN;
	uint32_t x3506 = UINT32_MAX;
	static int8_t x3507 = 0;
	int16_t x3508 = 1533;
	volatile uint32_t t58 = 138355636U;

	t58 = (((x3505*x3506)>>x3507)%x3508);

	if (t58 != 527U) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x3537 = 4U;
	uint16_t x3538 = 3U;
	volatile int8_t x3539 = 0;
	int64_t x3540 = -42082LL;
	volatile int64_t t59 = 14289734LL;

	t59 = (((x3537*x3538)>>x3539)%x3540);

	if (t59 != 12LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x3541 = 10U;
	uint16_t x3542 = UINT16_MAX;
	int8_t x3543 = 3;
	int64_t t60 = -405973603976699328LL;

	t60 = (((x3541*x3542)>>x3543)%x3544);

	if (t60 != 81918LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x3617 = 0LL;
	static int64_t x3618 = INT64_MIN;
	volatile int8_t x3619 = 1;
	int16_t x3620 = INT16_MIN;
	int64_t t61 = -142950128060253548LL;

	t61 = (((x3617*x3618)>>x3619)%x3620);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x3661 = 2808;
	uint8_t x3663 = 1U;
	int16_t x3664 = -941;
	volatile uint64_t t62 = 268130186LLU;

	t62 = (((x3661*x3662)>>x3663)%x3664);

	if (t62 != 1404LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x3677 = UINT8_MAX;
	int16_t x3679 = 4;
	uint8_t x3680 = UINT8_MAX;
	uint64_t t63 = 861478864117153542LLU;

	t63 = (((x3677*x3678)>>x3679)%x3680);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x3741 = 3083U;
	int32_t x3742 = 7;
	uint8_t x3744 = UINT8_MAX;
	int32_t t64 = 1672;

	t64 = (((x3741*x3742)>>x3743)%x3744);

	if (t64 != 147) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x3789 = 2U;
	uint8_t x3791 = 16U;
	uint32_t x3792 = UINT32_MAX;
	static uint32_t t65 = 95211320U;

	t65 = (((x3789*x3790)>>x3791)%x3792);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x3877 = 461399618936LLU;
	int16_t x3878 = -15048;
	uint8_t x3879 = 2U;
	uint16_t x3880 = 19065U;
	uint64_t t66 = 122546514037841LLU;

	t66 = (((x3877*x3878)>>x3879)%x3880);

	if (t66 != 472LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x3949 = 521859LL;
	static volatile uint64_t x3950 = UINT64_MAX;
	uint8_t x3951 = 28U;
	volatile uint8_t x3952 = 11U;
	uint64_t t67 = 330085613LLU;

	t67 = (((x3949*x3950)>>x3951)%x3952);

	if (t67 != 8LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x4017 = INT16_MIN;
	static int8_t x4018 = -1;
	volatile int8_t x4020 = -1;

	t68 = (((x4017*x4018)>>x4019)%x4020);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x4169 = -1;
	int64_t x4172 = 22LL;

	t69 = (((x4169*x4170)>>x4171)%x4172);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x4261 = -482;
	int8_t x4262 = INT8_MIN;
	static volatile int16_t x4263 = 3;
	int8_t x4264 = -5;
	volatile int32_t t70 = -88622543;

	t70 = (((x4261*x4262)>>x4263)%x4264);

	if (t70 != 2) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x4273 = 1;
	static volatile uint64_t x4274 = 17841314875LLU;
	uint8_t x4275 = 3U;
	uint8_t x4276 = 26U;
	uint64_t t71 = 44721701282889495LLU;

	t71 = (((x4273*x4274)>>x4275)%x4276);

	if (t71 != 7LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x4297 = INT16_MIN;
	static volatile uint32_t x4298 = 13046740U;
	uint64_t x4300 = UINT64_MAX;
	uint64_t t72 = 66709LLU;

	t72 = (((x4297*x4298)>>x4299)%x4300);

	if (t72 != 1981153280LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x4349 = 1;
	uint16_t x4351 = 12U;
	static int32_t x4352 = -1;

	t73 = (((x4349*x4350)>>x4351)%x4352);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x4413 = 6U;
	int16_t x4414 = 13594;
	volatile int32_t t74 = 6;

	t74 = (((x4413*x4414)>>x4415)%x4416);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x4429 = -1;
	static int16_t x4430 = INT16_MIN;
	volatile int32_t x4432 = 11432482;

	t75 = (((x4429*x4430)>>x4431)%x4432);

	if (t75 != 16384) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x4529 = UINT64_MAX;
	static volatile uint64_t x4530 = 60213843LLU;
	int16_t x4531 = 1;
	int64_t x4532 = INT64_MIN;
	uint64_t t76 = 54194LLU;

	t76 = (((x4529*x4530)>>x4531)%x4532);

	if (t76 != 9223372036824668886LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x4617 = UINT32_MAX;
	static int16_t x4619 = 1;
	static volatile int64_t x4620 = -1LL;
	static int64_t t77 = 26LL;

	t77 = (((x4617*x4618)>>x4619)%x4620);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x4633 = UINT64_MAX;
	volatile uint16_t x4635 = 3U;
	volatile int16_t x4636 = 1863;
	uint64_t t78 = 64439729815LLU;

	t78 = (((x4633*x4634)>>x4635)%x4636);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x4762 = INT8_MIN;
	volatile uint16_t x4763 = 2U;
	uint32_t x4764 = 31U;
	volatile uint32_t t79 = 44293U;

	t79 = (((x4761*x4762)>>x4763)%x4764);

	if (t79 != 8U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x4801 = INT32_MIN;
	volatile uint64_t x4802 = 8158169771244483LLU;
	static volatile uint8_t x4803 = 14U;
	int64_t x4804 = INT64_MIN;
	uint64_t t80 = 8999733393450255617LLU;

	t80 = (((x4801*x4802)>>x4803)%x4804);

	if (t80 != 45668529471488LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x4837 = UINT64_MAX;
	volatile uint64_t x4838 = UINT64_MAX;
	int16_t x4840 = INT16_MAX;
	uint64_t t81 = 121991856LLU;

	t81 = (((x4837*x4838)>>x4839)%x4840);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x5001 = INT16_MIN;
	uint8_t x5003 = 5U;
	int8_t x5004 = -1;
	static uint32_t t82 = 10070U;

	t82 = (((x5001*x5002)>>x5003)%x5004);

	if (t82 != 1024U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x5037 = 1734;
	uint32_t x5038 = UINT32_MAX;
	uint8_t x5039 = 13U;
	uint16_t x5040 = 452U;
	volatile uint32_t t83 = 15U;

	t83 = (((x5037*x5038)>>x5039)%x5040);

	if (t83 != 419U) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x5085 = INT8_MIN;
	int32_t x5086 = -1;
	int64_t x5088 = INT64_MIN;
	int64_t t84 = -625LL;

	t84 = (((x5085*x5086)>>x5087)%x5088);

	if (t84 != 64LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x5097 = -1;
	uint8_t x5099 = 28U;
	int64_t t85 = 167071231LL;

	t85 = (((x5097*x5098)>>x5099)%x5100);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x5109 = 0U;
	int64_t x5110 = INT64_MIN;
	uint16_t x5111 = 1U;
	int64_t x5112 = -1LL;
	int64_t t86 = -22702344925LL;

	t86 = (((x5109*x5110)>>x5111)%x5112);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x5188 = 5;
	static uint64_t t87 = 2LLU;

	t87 = (((x5185*x5186)>>x5187)%x5188);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x5325 = 284U;
	static int8_t x5326 = -30;
	uint8_t x5327 = 4U;
	static uint32_t x5328 = 32303U;
	volatile uint32_t t88 = 113387U;

	t88 = (((x5325*x5326)>>x5327)%x5328);

	if (t88 != 29296U) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x5465 = 0U;
	int16_t x5466 = INT16_MIN;
	uint16_t x5467 = 0U;
	static int64_t t89 = 19069128143LL;

	t89 = (((x5465*x5466)>>x5467)%x5468);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x5542 = 461641461891978LLU;
	int16_t x5543 = 4;
	static uint16_t x5544 = 215U;
	volatile uint64_t t90 = 1162104914LLU;

	t90 = (((x5541*x5542)>>x5543)%x5544);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x5557 = 26656U;
	int32_t x5558 = 67395169;
	uint16_t x5559 = 3U;
	int32_t x5560 = -1;
	volatile uint32_t t91 = 2U;

	t91 = (((x5557*x5558)>>x5559)%x5560);

	if (t91 != 148661892U) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x5617 = 304708718046208LLU;
	uint32_t x5619 = 2U;
	volatile uint64_t t92 = 27163134LLU;

	t92 = (((x5617*x5618)>>x5619)%x5620);

	if (t92 != 4601935339449909248LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x5717 = 11255LLU;

	t93 = (((x5717*x5718)>>x5719)%x5720);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x5781 = 3342597527171403570LL;
	uint64_t x5782 = UINT64_MAX;
	int8_t x5783 = 0;
	int16_t x5784 = -1;
	static uint64_t t94 = 13106092131494LLU;

	t94 = (((x5781*x5782)>>x5783)%x5784);

	if (t94 != 15104146546538148046LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x5789 = -2;
	int8_t x5790 = -38;
	static int16_t x5792 = 7;
	volatile int32_t t95 = 294;

	t95 = (((x5789*x5790)>>x5791)%x5792);

	if (t95 != 6) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x5833 = -1;
	uint64_t x5834 = 43LLU;
	uint8_t x5836 = 81U;

	t96 = (((x5833*x5834)>>x5835)%x5836);

	if (t96 != 41LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x5925 = INT32_MAX;
	uint64_t x5926 = 5417496625LLU;
	static uint16_t x5927 = 15U;
	volatile uint64_t t97 = 46817283226573911LLU;

	t97 = (((x5925*x5926)>>x5927)%x5928);

	if (t97 != 8LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x5957 = 56U;
	static int32_t x5958 = 1099;
	uint32_t x5959 = 7U;
	int64_t x5960 = INT64_MIN;
	volatile int64_t t98 = 85448020LL;

	t98 = (((x5957*x5958)>>x5959)%x5960);

	if (t98 != 480LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x5990 = 281U;
	uint8_t x5991 = 2U;
	int64_t x5992 = INT64_MIN;
	int64_t t99 = -67869LL;

	t99 = (((x5989*x5990)>>x5991)%x5992);

	if (t99 != 8921LL) { NG(); } else { ; }
	
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


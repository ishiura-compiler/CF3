#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x183 = 4914LLU;
volatile uint8_t x322 = 55U;
static int8_t x324 = 1;
static int8_t x338 = 33;
int32_t x370 = -1;
static int32_t x395 = 27565142;
static int8_t x401 = INT8_MIN;
static int8_t x418 = -1;
volatile int8_t x499 = 6;
int64_t x813 = -1LL;
uint64_t x814 = 25089657LLU;
volatile int8_t x849 = 0;
volatile int8_t x851 = INT8_MAX;
uint32_t x884 = 15U;
volatile int32_t t18 = 136;
int32_t x914 = INT32_MAX;
int32_t x957 = -56338862;
volatile int16_t x958 = 24;
volatile int32_t t21 = 95543;
uint64_t x1231 = UINT64_MAX;
volatile int16_t x1232 = 3;
int8_t x1296 = 0;
int16_t x1405 = INT16_MAX;
int8_t x1407 = INT8_MAX;
int16_t x1408 = 9;
volatile int8_t x1442 = 13;
int8_t x1443 = 1;
uint8_t x1737 = 7U;
int32_t t28 = -167671977;
uint16_t x1905 = UINT16_MAX;
static int32_t x1908 = 9;
int32_t t29 = 23;
uint64_t x1971 = UINT64_MAX;
uint8_t x1972 = 23U;
int8_t x2073 = 0;
uint16_t x2085 = 9U;
static uint8_t x2149 = UINT8_MAX;
static uint8_t x2344 = 1U;
volatile int16_t x2441 = INT16_MIN;
volatile int32_t t38 = 206233;
static volatile int16_t x2458 = INT16_MAX;
static uint32_t x2497 = 3U;
volatile int32_t t40 = -149;
int32_t x2563 = 0;
volatile int32_t t41 = 456644;
static int8_t x2565 = -1;
uint8_t x2628 = 1U;
uint32_t x2717 = 396505U;
int64_t x2854 = -3LL;
uint64_t x2908 = 11LLU;
uint64_t x2958 = 926214813226106285LLU;
uint64_t x2959 = UINT64_MAX;
volatile int32_t t51 = 255222301;
uint64_t x3039 = 15858716LLU;
int32_t x3065 = INT32_MIN;
volatile uint16_t x3142 = UINT16_MAX;
static int32_t t54 = 202257216;
uint64_t x3151 = UINT64_MAX;
int32_t t55 = 79;
int64_t x3265 = -2176204LL;
int32_t t56 = -3435187;
volatile uint64_t x3574 = UINT64_MAX;
int16_t x3898 = INT16_MAX;
int8_t x3900 = 26;
volatile uint16_t x4037 = UINT16_MAX;
static int32_t t63 = 37;
uint32_t x4322 = 504893367U;
static uint8_t x4324 = 7U;
uint16_t x4359 = 12U;
uint8_t x4409 = 5U;
static int32_t x4525 = -311485196;
static volatile int32_t t68 = -2;
int8_t x4588 = 0;
static uint8_t x4892 = 8U;
int32_t t70 = -362217469;
int16_t x5119 = INT16_MAX;
volatile int32_t t72 = 823427;
int8_t x5741 = 1;
volatile int32_t x5744 = 46;
static uint64_t x5746 = UINT64_MAX;
int8_t x5747 = INT8_MAX;
int64_t x5758 = -1LL;
static int8_t x5765 = INT8_MIN;
int16_t x5766 = -1;
volatile int16_t x5767 = 364;
int8_t x5768 = 1;
int32_t t77 = -1;
uint32_t x5786 = UINT32_MAX;
volatile uint8_t x5835 = 1U;
volatile int32_t t79 = 3936;
static volatile uint64_t x5957 = 3810404772623681560LLU;
uint32_t x6174 = UINT32_MAX;
int8_t x6175 = INT8_MAX;
volatile uint32_t x6305 = UINT32_MAX;
int16_t x6306 = -1;
volatile int32_t t86 = -728;
volatile int32_t t88 = -114646;
uint32_t x6542 = UINT32_MAX;
static int8_t x6561 = INT8_MAX;
static int8_t x6562 = 2;
int16_t x6564 = 4;
int64_t x7090 = -1LL;
static volatile int32_t t93 = -387880680;
int16_t x7101 = -1;
uint32_t x7102 = 168680719U;
uint8_t x7113 = 0U;
volatile int16_t x7192 = 2;


void f0(void) {
	static uint64_t x1 = 0LLU;
	int16_t x2 = INT16_MIN;
	int64_t x3 = INT64_MAX;
	uint8_t x4 = 0U;
	volatile int32_t t0 = -31909333;

	t0 = ((x1*x2)==(x3>>x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x17 = 1874U;
	int32_t x18 = 42;
	uint8_t x19 = UINT8_MAX;
	int8_t x20 = 0;
	volatile int32_t t1 = -1038372;

	t1 = ((x17*x18)==(x19>>x20));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x181 = 184U;
	int32_t x182 = -1;
	static int8_t x184 = 57;
	int32_t t2 = -440;

	t2 = ((x181*x182)==(x183>>x184));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x321 = INT8_MAX;
	uint8_t x323 = 2U;
	int32_t t3 = 130;

	t3 = ((x321*x322)==(x323>>x324));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x337 = INT8_MIN;
	static uint8_t x339 = 0U;
	static uint8_t x340 = 1U;
	int32_t t4 = 39110;

	t4 = ((x337*x338)==(x339>>x340));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x369 = INT8_MIN;
	volatile int16_t x371 = INT16_MAX;
	int8_t x372 = 3;
	int32_t t5 = -341483612;

	t5 = ((x369*x370)==(x371>>x372));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x393 = 1U;
	volatile uint64_t x394 = UINT64_MAX;
	static volatile uint16_t x396 = 14U;
	static volatile int32_t t6 = -1;

	t6 = ((x393*x394)==(x395>>x396));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x402 = INT16_MIN;
	uint32_t x403 = 2990U;
	static uint8_t x404 = 11U;
	volatile int32_t t7 = -149523700;

	t7 = ((x401*x402)==(x403>>x404));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x417 = 9665;
	uint64_t x419 = 1552759217655291591LLU;
	uint16_t x420 = 30U;
	int32_t t8 = 81754;

	t8 = ((x417*x418)==(x419>>x420));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x493 = INT32_MIN;
	uint16_t x494 = 0U;
	int32_t x495 = 121;
	int8_t x496 = 0;
	static int32_t t9 = -661112800;

	t9 = ((x493*x494)==(x495>>x496));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x497 = 5U;
	uint8_t x498 = UINT8_MAX;
	uint16_t x500 = 1U;
	int32_t t10 = 45903;

	t10 = ((x497*x498)==(x499>>x500));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x617 = INT8_MAX;
	volatile int64_t x618 = -26LL;
	volatile int32_t x619 = 979739;
	uint8_t x620 = 7U;
	int32_t t11 = -1239575;

	t11 = ((x617*x618)==(x619>>x620));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x657 = -1;
	uint16_t x658 = UINT16_MAX;
	uint8_t x659 = 50U;
	static uint64_t x660 = 0LLU;
	static int32_t t12 = 96491;

	t12 = ((x657*x658)==(x659>>x660));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x713 = -1LL;
	uint64_t x714 = UINT64_MAX;
	volatile int32_t x715 = 1;
	int16_t x716 = 12;
	volatile int32_t t13 = 104402157;

	t13 = ((x713*x714)==(x715>>x716));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x717 = 53195649964519457LLU;
	uint32_t x718 = UINT32_MAX;
	int32_t x719 = 2;
	int16_t x720 = 12;
	volatile int32_t t14 = 15896595;

	t14 = ((x717*x718)==(x719>>x720));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x815 = INT32_MAX;
	int8_t x816 = 0;
	volatile int32_t t15 = 15;

	t15 = ((x813*x814)==(x815>>x816));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x825 = INT8_MIN;
	volatile uint16_t x826 = 6U;
	uint8_t x827 = 13U;
	int16_t x828 = 3;
	volatile int32_t t16 = 0;

	t16 = ((x825*x826)==(x827>>x828));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x850 = 21454LLU;
	static uint8_t x852 = 7U;
	volatile int32_t t17 = -1441;

	t17 = ((x849*x850)==(x851>>x852));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x881 = 5300U;
	int8_t x882 = -1;
	int16_t x883 = INT16_MAX;

	t18 = ((x881*x882)==(x883>>x884));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x913 = -1;
	uint32_t x915 = 1118285860U;
	uint64_t x916 = 0LLU;
	volatile int32_t t19 = -2;

	t19 = ((x913*x914)==(x915>>x916));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x959 = UINT8_MAX;
	uint8_t x960 = 1U;
	int32_t t20 = 13501045;

	t20 = ((x957*x958)==(x959>>x960));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x1149 = -1LL;
	uint64_t x1150 = 801LLU;
	int16_t x1151 = INT16_MAX;
	uint8_t x1152 = 2U;

	t21 = ((x1149*x1150)==(x1151>>x1152));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x1229 = INT16_MIN;
	int8_t x1230 = -1;
	volatile int32_t t22 = 982502916;

	t22 = ((x1229*x1230)==(x1231>>x1232));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1293 = INT16_MAX;
	uint32_t x1294 = 3U;
	uint8_t x1295 = 47U;
	volatile int32_t t23 = 41542;

	t23 = ((x1293*x1294)==(x1295>>x1296));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1406 = INT8_MIN;
	volatile int32_t t24 = -1;

	t24 = ((x1405*x1406)==(x1407>>x1408));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x1441 = INT8_MAX;
	uint8_t x1444 = 4U;
	volatile int32_t t25 = 0;

	t25 = ((x1441*x1442)==(x1443>>x1444));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1661 = -1;
	uint64_t x1662 = UINT64_MAX;
	int8_t x1663 = 0;
	volatile uint16_t x1664 = 15U;
	int32_t t26 = 11;

	t26 = ((x1661*x1662)==(x1663>>x1664));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1738 = 0;
	uint8_t x1739 = 0U;
	int16_t x1740 = 13;
	static int32_t t27 = -23590;

	t27 = ((x1737*x1738)==(x1739>>x1740));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x1853 = 1230109U;
	uint64_t x1854 = 6809416384670105LLU;
	uint16_t x1855 = UINT16_MAX;
	static uint16_t x1856 = 1U;

	t28 = ((x1853*x1854)==(x1855>>x1856));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x1906 = INT16_MIN;
	volatile uint16_t x1907 = 337U;

	t29 = ((x1905*x1906)==(x1907>>x1908));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x1969 = -4;
	int8_t x1970 = INT8_MIN;
	volatile int32_t t30 = -4;

	t30 = ((x1969*x1970)==(x1971>>x1972));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x2057 = 877;
	static int8_t x2058 = INT8_MIN;
	int8_t x2059 = 58;
	volatile uint8_t x2060 = 2U;
	volatile int32_t t31 = 66138442;

	t31 = ((x2057*x2058)==(x2059>>x2060));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x2074 = 3;
	uint8_t x2075 = UINT8_MAX;
	uint16_t x2076 = 3U;
	int32_t t32 = -10579;

	t32 = ((x2073*x2074)==(x2075>>x2076));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x2086 = 7134;
	uint8_t x2087 = UINT8_MAX;
	static int16_t x2088 = 12;
	int32_t t33 = 19;

	t33 = ((x2085*x2086)==(x2087>>x2088));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x2150 = 12666538945LLU;
	static uint32_t x2151 = UINT32_MAX;
	volatile uint8_t x2152 = 31U;
	static int32_t t34 = 3165001;

	t34 = ((x2149*x2150)==(x2151>>x2152));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x2281 = 255818U;
	int32_t x2282 = -74;
	uint8_t x2283 = 5U;
	uint32_t x2284 = 21U;
	int32_t t35 = -7542703;

	t35 = ((x2281*x2282)==(x2283>>x2284));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x2297 = -1;
	static int16_t x2298 = INT16_MAX;
	int64_t x2299 = INT64_MAX;
	int16_t x2300 = 1;
	static int32_t t36 = -5;

	t36 = ((x2297*x2298)==(x2299>>x2300));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x2341 = -81;
	int32_t x2342 = -26;
	uint32_t x2343 = 155937U;
	static int32_t t37 = 7;

	t37 = ((x2341*x2342)==(x2343>>x2344));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x2442 = 9626U;
	static volatile int64_t x2443 = INT64_MAX;
	static uint8_t x2444 = 1U;

	t38 = ((x2441*x2442)==(x2443>>x2444));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint64_t x2457 = 3550552513155LLU;
	static int32_t x2459 = 894026;
	uint8_t x2460 = 5U;
	int32_t t39 = -2;

	t39 = ((x2457*x2458)==(x2459>>x2460));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x2498 = INT16_MIN;
	int16_t x2499 = INT16_MAX;
	uint8_t x2500 = 2U;

	t40 = ((x2497*x2498)==(x2499>>x2500));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x2561 = 3419LLU;
	volatile int32_t x2562 = -1;
	static uint16_t x2564 = 6U;

	t41 = ((x2561*x2562)==(x2563>>x2564));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x2566 = 35370313LL;
	int8_t x2567 = INT8_MAX;
	int8_t x2568 = 1;
	volatile int32_t t42 = -5601961;

	t42 = ((x2565*x2566)==(x2567>>x2568));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x2625 = INT8_MIN;
	uint16_t x2626 = UINT16_MAX;
	int64_t x2627 = 4794142877461LL;
	int32_t t43 = 4;

	t43 = ((x2625*x2626)==(x2627>>x2628));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x2693 = -4;
	int8_t x2694 = INT8_MIN;
	uint16_t x2695 = UINT16_MAX;
	int16_t x2696 = 26;
	volatile int32_t t44 = 0;

	t44 = ((x2693*x2694)==(x2695>>x2696));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x2713 = -352582635;
	volatile uint64_t x2714 = 156165214497032LLU;
	int64_t x2715 = 57045848158LL;
	uint8_t x2716 = 0U;
	int32_t t45 = 604871982;

	t45 = ((x2713*x2714)==(x2715>>x2716));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2718 = -12;
	uint64_t x2719 = UINT64_MAX;
	volatile int8_t x2720 = 5;
	volatile int32_t t46 = 1062530;

	t46 = ((x2717*x2718)==(x2719>>x2720));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x2769 = 1U;
	static uint16_t x2770 = 2965U;
	volatile uint16_t x2771 = 245U;
	uint32_t x2772 = 8U;
	volatile int32_t t47 = 125;

	t47 = ((x2769*x2770)==(x2771>>x2772));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x2853 = -1LL;
	static uint16_t x2855 = UINT16_MAX;
	static int16_t x2856 = 1;
	static int32_t t48 = 1544883;

	t48 = ((x2853*x2854)==(x2855>>x2856));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x2881 = 1408927U;
	volatile int64_t x2882 = -3467494976929LL;
	int32_t x2883 = 17293210;
	uint8_t x2884 = 11U;
	volatile int32_t t49 = -53428;

	t49 = ((x2881*x2882)==(x2883>>x2884));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x2905 = 4U;
	int32_t x2906 = -1;
	int64_t x2907 = 5LL;
	static int32_t t50 = 123468;

	t50 = ((x2905*x2906)==(x2907>>x2908));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x2957 = 20;
	int16_t x2960 = 4;

	t51 = ((x2957*x2958)==(x2959>>x2960));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x3037 = -577953510LL;
	int16_t x3038 = 1960;
	uint8_t x3040 = 30U;
	int32_t t52 = -309;

	t52 = ((x3037*x3038)==(x3039>>x3040));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x3066 = 8801350757501LLU;
	uint64_t x3067 = 8323536902078450418LLU;
	static uint8_t x3068 = 11U;
	int32_t t53 = 399542001;

	t53 = ((x3065*x3066)==(x3067>>x3068));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x3141 = INT8_MAX;
	uint32_t x3143 = UINT32_MAX;
	int64_t x3144 = 11LL;

	t54 = ((x3141*x3142)==(x3143>>x3144));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x3149 = INT32_MIN;
	volatile int16_t x3150 = 0;
	int8_t x3152 = 3;

	t55 = ((x3149*x3150)==(x3151>>x3152));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x3266 = INT16_MAX;
	int32_t x3267 = 1;
	uint16_t x3268 = 1U;

	t56 = ((x3265*x3266)==(x3267>>x3268));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x3329 = -1;
	int16_t x3330 = INT16_MAX;
	int16_t x3331 = 1521;
	int16_t x3332 = 1;
	static int32_t t57 = -1731951;

	t57 = ((x3329*x3330)==(x3331>>x3332));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x3561 = 3936061899642095841LLU;
	uint16_t x3562 = 26308U;
	uint8_t x3563 = 0U;
	uint16_t x3564 = 6U;
	volatile int32_t t58 = -302;

	t58 = ((x3561*x3562)==(x3563>>x3564));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x3573 = UINT8_MAX;
	int32_t x3575 = 66861;
	static volatile int32_t x3576 = 2;
	int32_t t59 = -1835559;

	t59 = ((x3573*x3574)==(x3575>>x3576));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint8_t x3857 = 0U;
	uint32_t x3858 = 0U;
	volatile uint16_t x3859 = 109U;
	static uint8_t x3860 = 9U;
	static int32_t t60 = 79632731;

	t60 = ((x3857*x3858)==(x3859>>x3860));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x3897 = 60195;
	static uint16_t x3899 = UINT16_MAX;
	volatile int32_t t61 = 971867;

	t61 = ((x3897*x3898)==(x3899>>x3900));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint16_t x4038 = 2U;
	int8_t x4039 = INT8_MAX;
	int16_t x4040 = 25;
	volatile int32_t t62 = -5;

	t62 = ((x4037*x4038)==(x4039>>x4040));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x4153 = INT32_MIN;
	uint32_t x4154 = UINT32_MAX;
	uint32_t x4155 = 45124115U;
	uint8_t x4156 = 5U;

	t63 = ((x4153*x4154)==(x4155>>x4156));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x4321 = 8413;
	uint32_t x4323 = UINT32_MAX;
	int32_t t64 = -1;

	t64 = ((x4321*x4322)==(x4323>>x4324));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x4357 = -1LL;
	volatile int16_t x4358 = -1;
	uint8_t x4360 = 2U;
	int32_t t65 = -1;

	t65 = ((x4357*x4358)==(x4359>>x4360));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x4410 = INT8_MIN;
	uint8_t x4411 = UINT8_MAX;
	int8_t x4412 = 19;
	int32_t t66 = 128792784;

	t66 = ((x4409*x4410)==(x4411>>x4412));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x4505 = -4124346256878LL;
	volatile int64_t x4506 = -1LL;
	uint16_t x4507 = 941U;
	uint64_t x4508 = 0LLU;
	volatile int32_t t67 = 227346753;

	t67 = ((x4505*x4506)==(x4507>>x4508));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x4526 = UINT64_MAX;
	static volatile uint32_t x4527 = 5384817U;
	static uint16_t x4528 = 0U;

	t68 = ((x4525*x4526)==(x4527>>x4528));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x4585 = -1;
	static volatile int32_t x4586 = -20473309;
	volatile int32_t x4587 = INT32_MAX;
	volatile int32_t t69 = 403;

	t69 = ((x4585*x4586)==(x4587>>x4588));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x4889 = -1;
	int16_t x4890 = -7;
	static uint64_t x4891 = UINT64_MAX;

	t70 = ((x4889*x4890)==(x4891>>x4892));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x5117 = INT16_MAX;
	volatile int16_t x5118 = INT16_MAX;
	static uint8_t x5120 = 3U;
	int32_t t71 = -8;

	t71 = ((x5117*x5118)==(x5119>>x5120));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x5473 = 2011859781U;
	static int16_t x5474 = 0;
	static uint16_t x5475 = 31U;
	uint16_t x5476 = 12U;

	t72 = ((x5473*x5474)==(x5475>>x5476));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x5569 = 188U;
	volatile int64_t x5570 = -1LL;
	uint64_t x5571 = 857435366153844LLU;
	int8_t x5572 = 3;
	volatile int32_t t73 = 11541;

	t73 = ((x5569*x5570)==(x5571>>x5572));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x5742 = 13U;
	int64_t x5743 = 848196704LL;
	int32_t t74 = 38;

	t74 = ((x5741*x5742)==(x5743>>x5744));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x5745 = 69;
	uint16_t x5748 = 2U;
	static volatile int32_t t75 = -465;

	t75 = ((x5745*x5746)==(x5747>>x5748));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x5757 = INT64_MAX;
	uint8_t x5759 = 23U;
	uint16_t x5760 = 2U;
	int32_t t76 = -331;

	t76 = ((x5757*x5758)==(x5759>>x5760));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {


	t77 = ((x5765*x5766)==(x5767>>x5768));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x5785 = -1;
	uint64_t x5787 = 0LLU;
	volatile uint32_t x5788 = 1U;
	volatile int32_t t78 = 564211060;

	t78 = ((x5785*x5786)==(x5787>>x5788));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x5833 = 25;
	static int8_t x5834 = INT8_MAX;
	static int8_t x5836 = 23;

	t79 = ((x5833*x5834)==(x5835>>x5836));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x5958 = 29;
	uint32_t x5959 = 34810690U;
	static int8_t x5960 = 1;
	static volatile int32_t t80 = 202084;

	t80 = ((x5957*x5958)==(x5959>>x5960));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x6037 = 0;
	uint16_t x6038 = UINT16_MAX;
	static uint8_t x6039 = 27U;
	uint8_t x6040 = 7U;
	volatile int32_t t81 = -28;

	t81 = ((x6037*x6038)==(x6039>>x6040));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x6129 = -1LL;
	uint32_t x6130 = 8023U;
	static int16_t x6131 = 4835;
	volatile int16_t x6132 = 0;
	static volatile int32_t t82 = -4;

	t82 = ((x6129*x6130)==(x6131>>x6132));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x6173 = INT16_MAX;
	uint8_t x6176 = 8U;
	int32_t t83 = 130;

	t83 = ((x6173*x6174)==(x6175>>x6176));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x6181 = -1570;
	uint16_t x6182 = 5U;
	volatile uint8_t x6183 = 25U;
	int16_t x6184 = 2;
	volatile int32_t t84 = -318;

	t84 = ((x6181*x6182)==(x6183>>x6184));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x6237 = INT64_MAX;
	uint16_t x6238 = 1U;
	volatile uint32_t x6239 = 762U;
	uint8_t x6240 = 13U;
	volatile int32_t t85 = -1022716521;

	t85 = ((x6237*x6238)==(x6239>>x6240));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x6307 = INT16_MAX;
	volatile uint8_t x6308 = 1U;

	t86 = ((x6305*x6306)==(x6307>>x6308));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x6329 = 4872LLU;
	uint8_t x6330 = UINT8_MAX;
	uint32_t x6331 = 1U;
	static uint64_t x6332 = 0LLU;
	volatile int32_t t87 = 61;

	t87 = ((x6329*x6330)==(x6331>>x6332));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x6461 = INT16_MIN;
	int8_t x6462 = 2;
	uint32_t x6463 = 217U;
	int8_t x6464 = 0;

	t88 = ((x6461*x6462)==(x6463>>x6464));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x6541 = 4689706LL;
	static uint8_t x6543 = 61U;
	static int8_t x6544 = 5;
	int32_t t89 = -3;

	t89 = ((x6541*x6542)==(x6543>>x6544));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x6563 = UINT16_MAX;
	static int32_t t90 = -223665131;

	t90 = ((x6561*x6562)==(x6563>>x6564));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x6813 = 20927U;
	uint8_t x6814 = UINT8_MAX;
	int64_t x6815 = INT64_MAX;
	uint8_t x6816 = 39U;
	volatile int32_t t91 = -8877204;

	t91 = ((x6813*x6814)==(x6815>>x6816));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x6933 = INT32_MAX;
	uint8_t x6934 = 0U;
	int16_t x6935 = INT16_MAX;
	int32_t x6936 = 1;
	static volatile int32_t t92 = -673296943;

	t92 = ((x6933*x6934)==(x6935>>x6936));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x7089 = INT16_MIN;
	uint16_t x7091 = 71U;
	int8_t x7092 = 0;

	t93 = ((x7089*x7090)==(x7091>>x7092));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x7103 = 97U;
	int16_t x7104 = 0;
	static int32_t t94 = -17783;

	t94 = ((x7101*x7102)==(x7103>>x7104));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x7114 = INT16_MAX;
	int64_t x7115 = 31998175354868937LL;
	uint16_t x7116 = 27U;
	static int32_t t95 = -53424;

	t95 = ((x7113*x7114)==(x7115>>x7116));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x7157 = INT8_MIN;
	uint16_t x7158 = 26U;
	int64_t x7159 = INT64_MAX;
	volatile int16_t x7160 = 1;
	int32_t t96 = -15;

	t96 = ((x7157*x7158)==(x7159>>x7160));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x7189 = 1;
	volatile int16_t x7190 = -3227;
	volatile int64_t x7191 = 510125903LL;
	volatile int32_t t97 = 61229;

	t97 = ((x7189*x7190)==(x7191>>x7192));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x7233 = 7;
	int64_t x7234 = 1580532018266LL;
	uint16_t x7235 = 7380U;
	uint8_t x7236 = 1U;
	static int32_t t98 = -1;

	t98 = ((x7233*x7234)==(x7235>>x7236));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x7241 = -12520067297LL;
	static uint64_t x7242 = 43618257000328LLU;
	uint32_t x7243 = 21674U;
	uint8_t x7244 = 13U;
	int32_t t99 = 8749292;

	t99 = ((x7241*x7242)==(x7243>>x7244));

	if (t99 != 0) { NG(); } else { ; }
	
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


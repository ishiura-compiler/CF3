#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x34 = INT64_MIN;
uint64_t x373 = 14LLU;
int8_t x374 = INT8_MIN;
int16_t x376 = -1;
uint16_t x529 = 94U;
int8_t x532 = -3;
int32_t x763 = 6;
int8_t x764 = 0;
volatile uint64_t t8 = 255038241594LLU;
static int16_t x974 = INT16_MIN;
int8_t x1106 = INT8_MAX;
static int32_t x1108 = -1;
int64_t t13 = 0LL;
int64_t x1374 = INT64_MIN;
static int32_t x1376 = -1;
volatile int32_t t14 = 1254036;
volatile int8_t x1391 = 5;
static volatile uint16_t x1481 = 21U;
static uint64_t x1482 = UINT64_MAX;
int32_t x1483 = INT32_MAX;
int64_t x1484 = -1LL;
static int64_t x1878 = -1857893513905LL;
int32_t x2137 = 728125;
int32_t t18 = 44558939;
int32_t x2207 = 1;
volatile uint8_t x2209 = UINT8_MAX;
uint64_t x2294 = UINT64_MAX;
uint16_t x2295 = 1654U;
uint32_t x2361 = UINT32_MAX;
static uint8_t x2363 = 44U;
int32_t x2414 = INT32_MIN;
uint64_t x2466 = 4437789LLU;
static volatile int32_t x2469 = INT32_MAX;
int32_t x2597 = INT32_MAX;
int16_t x2600 = -18;
int32_t t27 = 432;
volatile uint32_t x2602 = 203U;
static int8_t x2603 = -27;
static int16_t x2604 = -1;
uint32_t x2605 = 160U;
int16_t x2606 = -1;
volatile int16_t x2621 = INT16_MAX;
int64_t x2622 = -1LL;
int32_t x2623 = -252;
int16_t x2624 = -1;
int64_t x2716 = 0LL;
int16_t x2740 = -1;
volatile int32_t t32 = -883080;
static uint32_t x2757 = 41839267U;
int16_t x2759 = -100;
uint32_t t33 = 0U;
int16_t x2775 = -2;
static uint8_t x2866 = 1U;
int32_t x2867 = -1;
static uint8_t x2917 = UINT8_MAX;
int16_t x2919 = -51;
int64_t x2975 = -1LL;
uint32_t x3075 = 117692U;
static int64_t x3086 = 3LL;
uint8_t x3160 = 0U;
static uint64_t x3205 = UINT64_MAX;
static int8_t x3206 = INT8_MIN;
int32_t x3207 = INT32_MIN;
volatile int8_t x3208 = 0;
volatile uint64_t t43 = UINT64_MAX;
static int64_t x3268 = -1LL;
int64_t t44 = -129793676873578LL;
int16_t x3271 = -1;
static uint32_t x3341 = UINT32_MAX;
uint16_t x3343 = 125U;
uint32_t t46 = 186469010U;
static int16_t x3546 = INT16_MIN;
static int32_t t47 = 2532989;
int64_t x3592 = -1LL;
uint32_t x3604 = UINT32_MAX;
volatile uint64_t t49 = 577880LLU;
int8_t x3625 = 0;
uint64_t t51 = 54008LLU;
static volatile uint8_t x3888 = 0U;
uint16_t x3989 = 3382U;
uint64_t t56 = 20LLU;
int16_t x4232 = 0;
int8_t x4292 = 0;
static int16_t x4327 = -1;
static int64_t x4328 = -1LL;
static uint32_t t64 = 14087U;
volatile int32_t t65 = -224;
int16_t x4834 = -1;
int32_t x4914 = -1;
volatile int32_t t70 = 6146;
int64_t x4959 = 3745975532LL;
volatile int64_t x4965 = 1LL;
static int8_t x4986 = -1;
uint8_t x5041 = 80U;
int32_t x5042 = -1;
uint64_t x5046 = UINT64_MAX;
int32_t x5139 = -1;
uint8_t x5257 = 1U;
int8_t x5258 = 16;
volatile int32_t t84 = -20551;
int8_t x5261 = INT8_MAX;
int8_t x5262 = -10;
int64_t x5278 = -3LL;
static volatile int16_t x5279 = INT16_MAX;
volatile int8_t x5348 = 0;
int8_t x5354 = INT8_MIN;
static uint64_t t90 = 10367LLU;
int64_t x5427 = INT64_MAX;
int64_t x5482 = 971LL;
int64_t x5484 = -1LL;
static volatile uint8_t x5709 = UINT8_MAX;
static volatile uint8_t x5711 = 14U;
volatile int16_t x5864 = -1;
volatile int32_t t96 = -814038504;
int16_t x6459 = INT16_MAX;


void f0(void) {
	int16_t x33 = INT16_MAX;
	int32_t x35 = INT32_MIN;
	static int8_t x36 = 0;
	int32_t t0 = 1;

	t0 = (x33>>((x34|x35)*x36));

	if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x375 = INT32_MAX;
	uint64_t t1 = 453803LLU;

	t1 = (x373>>((x374|x375)*x376));

	if (t1 != 7LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x530 = -1;
	static int64_t x531 = -93477848LL;
	static int32_t t2 = -783398855;

	t2 = (x529>>((x530|x531)*x532));

	if (t2 != 11) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x589 = INT64_MAX;
	int8_t x590 = INT8_MIN;
	int64_t x591 = 14896772050648946LL;
	int8_t x592 = -1;
	int64_t t3 = -25521296298993398LL;

	t3 = (x589>>((x590|x591)*x592));

	if (t3 != 562949953421311LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x625 = 194U;
	int8_t x626 = -14;
	uint64_t x627 = UINT64_MAX;
	int64_t x628 = -1LL;
	volatile int32_t t4 = 7684;

	t4 = (x625>>((x626|x627)*x628));

	if (t4 != 97) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x761 = UINT8_MAX;
	static int32_t x762 = -3;
	volatile int32_t t5 = 101440326;

	t5 = (x761>>((x762|x763)*x764));

	if (t5 != 255) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x821 = 0U;
	volatile int16_t x822 = -5;
	int8_t x823 = -60;
	int16_t x824 = -1;
	static volatile int32_t t6 = 428;

	t6 = (x821>>((x822|x823)*x824));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x921 = 1U;
	uint64_t x922 = 487LLU;
	uint8_t x923 = 1U;
	int32_t x924 = 0;
	uint32_t t7 = 0U;

	t7 = (x921>>((x922|x923)*x924));

	if (t7 != 1U) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x961 = 40573418184948765LLU;
	volatile int8_t x962 = INT8_MAX;
	volatile int8_t x963 = INT8_MIN;
	volatile uint32_t x964 = UINT32_MAX;

	t8 = (x961>>((x962|x963)*x964));

	if (t8 != 20286709092474382LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x973 = 22;
	int16_t x975 = INT16_MAX;
	uint32_t x976 = UINT32_MAX;
	int32_t t9 = 240041;

	t9 = (x973>>((x974|x975)*x976));

	if (t9 != 11) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x1101 = INT32_MAX;
	static int64_t x1102 = INT64_MAX;
	int16_t x1103 = -115;
	int32_t x1104 = -19;
	volatile int32_t t10 = 26559;

	t10 = (x1101>>((x1102|x1103)*x1104));

	if (t10 != 4095) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x1105 = UINT64_MAX;
	int8_t x1107 = INT8_MIN;
	static uint64_t t11 = 1LLU;

	t11 = (x1105>>((x1106|x1107)*x1108));

	if (t11 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x1133 = 475866U;
	int16_t x1134 = -1;
	uint8_t x1135 = 28U;
	int16_t x1136 = -1;
	static volatile uint32_t t12 = 95U;

	t12 = (x1133>>((x1134|x1135)*x1136));

	if (t12 != 237933U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x1237 = 8000780014979LL;
	int32_t x1238 = INT32_MAX;
	int64_t x1239 = -1LL;
	static volatile int8_t x1240 = -1;

	t13 = (x1237>>((x1238|x1239)*x1240));

	if (t13 != 4000390007489LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x1373 = 27;
	int64_t x1375 = -1LL;

	t14 = (x1373>>((x1374|x1375)*x1376));

	if (t14 != 13) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x1389 = 3036247U;
	int8_t x1390 = INT8_MIN;
	uint32_t x1392 = 0U;
	static volatile uint32_t t15 = 3806102U;

	t15 = (x1389>>((x1390|x1391)*x1392));

	if (t15 != 3036247U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t t16 = 3178474;

	t16 = (x1481>>((x1482|x1483)*x1484));

	if (t16 != 10) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x1877 = INT32_MAX;
	int32_t x1879 = -1;
	static int64_t x1880 = -1LL;
	static volatile int32_t t17 = -5;

	t17 = (x1877>>((x1878|x1879)*x1880));

	if (t17 != 1073741823) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x2138 = INT8_MAX;
	int64_t x2139 = -1LL;
	static int8_t x2140 = 0;

	t18 = (x2137>>((x2138|x2139)*x2140));

	if (t18 != 728125) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x2205 = UINT64_MAX;
	static uint64_t x2206 = 118999508866068LLU;
	int8_t x2208 = 0;
	uint64_t t19 = UINT64_MAX;

	t19 = (x2205>>((x2206|x2207)*x2208));

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x2210 = UINT64_MAX;
	static volatile uint8_t x2211 = 33U;
	static int8_t x2212 = -1;
	int32_t t20 = -2942;

	t20 = (x2209>>((x2210|x2211)*x2212));

	if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x2293 = 1542655757LL;
	int16_t x2296 = -4;
	volatile int64_t t21 = 3651674509542LL;

	t21 = (x2293>>((x2294|x2295)*x2296));

	if (t21 != 96415984LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x2362 = UINT64_MAX;
	uint64_t x2364 = 0LLU;
	volatile uint32_t t22 = UINT32_MAX;

	t22 = (x2361>>((x2362|x2363)*x2364));

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x2413 = 3;
	int64_t x2415 = INT64_MAX;
	static int8_t x2416 = -1;
	int32_t t23 = -5462605;

	t23 = (x2413>>((x2414|x2415)*x2416));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x2465 = INT8_MAX;
	int32_t x2467 = -209809;
	static volatile int8_t x2468 = 0;
	int32_t t24 = 744;

	t24 = (x2465>>((x2466|x2467)*x2468));

	if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x2470 = -1;
	volatile uint32_t x2471 = UINT32_MAX;
	volatile int32_t x2472 = -1;
	static int32_t t25 = -1;

	t25 = (x2469>>((x2470|x2471)*x2472));

	if (t25 != 1073741823) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x2565 = 2U;
	volatile int64_t x2566 = -1LL;
	uint16_t x2567 = 6U;
	static int16_t x2568 = -1;
	static int32_t t26 = 12455;

	t26 = (x2565>>((x2566|x2567)*x2568));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x2598 = 10LL;
	volatile int32_t x2599 = -1;

	t27 = (x2597>>((x2598|x2599)*x2600));

	if (t27 != 8191) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x2601 = 11U;
	int32_t t28 = -88096;

	t28 = (x2601>>((x2602|x2603)*x2604));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x2607 = -1263600301LL;
	int16_t x2608 = -1;
	volatile uint32_t t29 = 79189U;

	t29 = (x2605>>((x2606|x2607)*x2608));

	if (t29 != 80U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t t30 = -4630;

	t30 = (x2621>>((x2622|x2623)*x2624));

	if (t30 != 16383) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x2713 = 1;
	uint64_t x2714 = UINT64_MAX;
	static volatile uint8_t x2715 = 28U;
	volatile int32_t t31 = -1;

	t31 = (x2713>>((x2714|x2715)*x2716));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x2737 = 1U;
	int64_t x2738 = INT64_MAX;
	int32_t x2739 = -52096265;

	t32 = (x2737>>((x2738|x2739)*x2740));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x2758 = UINT64_MAX;
	uint64_t x2760 = UINT64_MAX;

	t33 = (x2757>>((x2758|x2759)*x2760));

	if (t33 != 20919633U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x2773 = INT8_MAX;
	uint32_t x2774 = 111076578U;
	int32_t x2776 = INT32_MIN;
	volatile int32_t t34 = 55660136;

	t34 = (x2773>>((x2774|x2775)*x2776));

	if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x2865 = INT64_MAX;
	int32_t x2868 = -1;
	volatile int64_t t35 = 37281621LL;

	t35 = (x2865>>((x2866|x2867)*x2868));

	if (t35 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x2918 = -1;
	int32_t x2920 = -1;
	volatile int32_t t36 = 961200;

	t36 = (x2917>>((x2918|x2919)*x2920));

	if (t36 != 127) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x2973 = 13505U;
	int8_t x2974 = INT8_MAX;
	int64_t x2976 = -1LL;
	static int32_t t37 = -441021882;

	t37 = (x2973>>((x2974|x2975)*x2976));

	if (t37 != 6752) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x2993 = 7413385616900781LLU;
	static int32_t x2994 = INT32_MIN;
	int32_t x2995 = -1;
	uint64_t x2996 = UINT64_MAX;
	uint64_t t38 = 1391061340286002617LLU;

	t38 = (x2993>>((x2994|x2995)*x2996));

	if (t38 != 3706692808450390LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x3001 = 344954U;
	static int32_t x3002 = -23176675;
	volatile int16_t x3003 = INT16_MAX;
	int8_t x3004 = 0;
	volatile uint32_t t39 = 233231U;

	t39 = (x3001>>((x3002|x3003)*x3004));

	if (t39 != 344954U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x3073 = 27374872616LL;
	volatile uint64_t x3074 = UINT64_MAX;
	int32_t x3076 = -1;
	volatile int64_t t40 = -3535004LL;

	t40 = (x3073>>((x3074|x3075)*x3076));

	if (t40 != 13687436308LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x3085 = UINT8_MAX;
	uint8_t x3087 = 0U;
	static uint8_t x3088 = 5U;
	static int32_t t41 = -8;

	t41 = (x3085>>((x3086|x3087)*x3088));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x3157 = UINT32_MAX;
	uint8_t x3158 = 9U;
	int8_t x3159 = -1;
	static volatile uint32_t t42 = UINT32_MAX;

	t42 = (x3157>>((x3158|x3159)*x3160));

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {


	t43 = (x3205>>((x3206|x3207)*x3208));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x3265 = INT64_MAX;
	static int16_t x3266 = -1;
	uint8_t x3267 = 1U;

	t44 = (x3265>>((x3266|x3267)*x3268));

	if (t44 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x3269 = UINT16_MAX;
	static int32_t x3270 = -250;
	uint8_t x3272 = 0U;
	int32_t t45 = -11898381;

	t45 = (x3269>>((x3270|x3271)*x3272));

	if (t45 != 65535) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x3342 = -1;
	uint64_t x3344 = UINT64_MAX;

	t46 = (x3341>>((x3342|x3343)*x3344));

	if (t46 != 2147483647U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x3545 = 9;
	uint64_t x3547 = 89021LLU;
	uint8_t x3548 = 0U;

	t47 = (x3545>>((x3546|x3547)*x3548));

	if (t47 != 9) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x3589 = 676807778329005842LLU;
	uint64_t x3590 = UINT64_MAX;
	int16_t x3591 = INT16_MIN;
	uint64_t t48 = 6996634188776211LLU;

	t48 = (x3589>>((x3590|x3591)*x3592));

	if (t48 != 338403889164502921LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x3601 = 701LLU;
	int16_t x3602 = -1;
	uint32_t x3603 = 8005U;

	t49 = (x3601>>((x3602|x3603)*x3604));

	if (t49 != 350LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x3626 = -1LL;
	volatile uint16_t x3627 = UINT16_MAX;
	static int16_t x3628 = -1;
	int32_t t50 = 37393;

	t50 = (x3625>>((x3626|x3627)*x3628));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x3853 = 85246218LLU;
	int8_t x3854 = INT8_MIN;
	static volatile int32_t x3855 = -1;
	volatile uint64_t x3856 = UINT64_MAX;

	t51 = (x3853>>((x3854|x3855)*x3856));

	if (t51 != 42623109LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x3885 = 55U;
	uint8_t x3886 = UINT8_MAX;
	int64_t x3887 = INT64_MIN;
	static int32_t t52 = 1743;

	t52 = (x3885>>((x3886|x3887)*x3888));

	if (t52 != 55) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x3990 = 5;
	static uint64_t x3991 = UINT64_MAX;
	int64_t x3992 = -1LL;
	volatile int32_t t53 = -118097;

	t53 = (x3989>>((x3990|x3991)*x3992));

	if (t53 != 1691) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x3997 = UINT32_MAX;
	int64_t x3998 = -1LL;
	volatile int32_t x3999 = INT32_MIN;
	int32_t x4000 = -1;
	volatile uint32_t t54 = 2U;

	t54 = (x3997>>((x3998|x3999)*x4000));

	if (t54 != 2147483647U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x4069 = 0;
	uint16_t x4070 = 6U;
	static volatile uint64_t x4071 = 8792825357937860108LLU;
	int64_t x4072 = INT64_MIN;
	static int32_t t55 = 9043038;

	t55 = (x4069>>((x4070|x4071)*x4072));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x4181 = UINT64_MAX;
	volatile int32_t x4182 = INT32_MAX;
	int16_t x4183 = INT16_MIN;
	int8_t x4184 = -1;

	t56 = (x4181>>((x4182|x4183)*x4184));

	if (t56 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x4229 = UINT16_MAX;
	uint16_t x4230 = UINT16_MAX;
	int64_t x4231 = INT64_MAX;
	int32_t t57 = -23513;

	t57 = (x4229>>((x4230|x4231)*x4232));

	if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x4257 = UINT16_MAX;
	int16_t x4258 = -1;
	int32_t x4259 = INT32_MAX;
	int8_t x4260 = -1;
	int32_t t58 = 52423;

	t58 = (x4257>>((x4258|x4259)*x4260));

	if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x4289 = 80144107046002LLU;
	int16_t x4290 = 4420;
	static int64_t x4291 = INT64_MIN;
	static uint64_t t59 = 784074820258084495LLU;

	t59 = (x4289>>((x4290|x4291)*x4292));

	if (t59 != 80144107046002LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x4325 = UINT16_MAX;
	int16_t x4326 = INT16_MIN;
	volatile int32_t t60 = -379;

	t60 = (x4325>>((x4326|x4327)*x4328));

	if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x4385 = UINT16_MAX;
	uint64_t x4386 = 1839474321364LLU;
	int8_t x4387 = -7;
	static int8_t x4388 = 0;
	static volatile int32_t t61 = -845;

	t61 = (x4385>>((x4386|x4387)*x4388));

	if (t61 != 65535) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x4393 = 254749123LLU;
	int32_t x4394 = -1;
	int16_t x4395 = -1;
	uint8_t x4396 = 0U;
	uint64_t t62 = 12414LLU;

	t62 = (x4393>>((x4394|x4395)*x4396));

	if (t62 != 254749123LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x4473 = 161U;
	int8_t x4474 = INT8_MIN;
	int8_t x4475 = -1;
	static int16_t x4476 = -1;
	volatile int32_t t63 = -330664;

	t63 = (x4473>>((x4474|x4475)*x4476));

	if (t63 != 80) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x4485 = 1167880U;
	volatile int64_t x4486 = -1LL;
	volatile int64_t x4487 = INT64_MIN;
	static int8_t x4488 = -1;

	t64 = (x4485>>((x4486|x4487)*x4488));

	if (t64 != 583940U) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x4501 = 0;
	static int32_t x4502 = INT32_MIN;
	static int32_t x4503 = INT32_MIN;
	static int8_t x4504 = 0;

	t65 = (x4501>>((x4502|x4503)*x4504));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint8_t x4529 = 0U;
	uint16_t x4530 = 0U;
	static uint8_t x4531 = 0U;
	int64_t x4532 = INT64_MAX;
	volatile int32_t t66 = -236947631;

	t66 = (x4529>>((x4530|x4531)*x4532));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x4565 = UINT32_MAX;
	static int16_t x4566 = 2067;
	uint16_t x4567 = 1U;
	uint8_t x4568 = 0U;
	volatile uint32_t t67 = UINT32_MAX;

	t67 = (x4565>>((x4566|x4567)*x4568));

	if (t67 != UINT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x4833 = 3744U;
	int32_t x4835 = INT32_MAX;
	uint32_t x4836 = UINT32_MAX;
	volatile int32_t t68 = -119;

	t68 = (x4833>>((x4834|x4835)*x4836));

	if (t68 != 1872) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x4881 = 10530;
	int16_t x4882 = INT16_MIN;
	volatile int8_t x4883 = -6;
	int64_t x4884 = -1LL;
	volatile int32_t t69 = -31899;

	t69 = (x4881>>((x4882|x4883)*x4884));

	if (t69 != 164) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x4913 = 245290;
	uint8_t x4915 = UINT8_MAX;
	uint64_t x4916 = UINT64_MAX;

	t70 = (x4913>>((x4914|x4915)*x4916));

	if (t70 != 122645) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x4953 = UINT32_MAX;
	volatile int32_t x4954 = -1;
	volatile int8_t x4955 = -1;
	static uint32_t x4956 = UINT32_MAX;
	volatile uint32_t t71 = 455U;

	t71 = (x4953>>((x4954|x4955)*x4956));

	if (t71 != 2147483647U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x4957 = 3903918LLU;
	int32_t x4958 = -1;
	uint64_t x4960 = UINT64_MAX;
	static volatile uint64_t t72 = 11360539LLU;

	t72 = (x4957>>((x4958|x4959)*x4960));

	if (t72 != 1951959LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x4961 = UINT8_MAX;
	static int32_t x4962 = -14;
	int8_t x4963 = INT8_MAX;
	uint32_t x4964 = UINT32_MAX;
	volatile int32_t t73 = 6;

	t73 = (x4961>>((x4962|x4963)*x4964));

	if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x4966 = -1;
	volatile int16_t x4967 = INT16_MIN;
	static uint64_t x4968 = UINT64_MAX;
	static int64_t t74 = 239330LL;

	t74 = (x4965>>((x4966|x4967)*x4968));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x4985 = 27U;
	int64_t x4987 = -1127580521132768291LL;
	int64_t x4988 = -1LL;
	int32_t t75 = 6243;

	t75 = (x4985>>((x4986|x4987)*x4988));

	if (t75 != 13) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x5043 = INT8_MIN;
	uint32_t x5044 = UINT32_MAX;
	volatile int32_t t76 = 103;

	t76 = (x5041>>((x5042|x5043)*x5044));

	if (t76 != 40) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x5045 = 6LLU;
	static uint64_t x5047 = 75061281LLU;
	int16_t x5048 = -3;
	uint64_t t77 = 1465LLU;

	t77 = (x5045>>((x5046|x5047)*x5048));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x5061 = UINT64_MAX;
	uint16_t x5062 = UINT16_MAX;
	uint32_t x5063 = UINT32_MAX;
	int16_t x5064 = 0;
	volatile uint64_t t78 = UINT64_MAX;

	t78 = (x5061>>((x5062|x5063)*x5064));

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x5101 = UINT8_MAX;
	static int32_t x5102 = INT32_MIN;
	volatile uint16_t x5103 = 668U;
	int16_t x5104 = 0;
	volatile int32_t t79 = -83412;

	t79 = (x5101>>((x5102|x5103)*x5104));

	if (t79 != 255) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x5137 = UINT64_MAX;
	static volatile uint16_t x5138 = 21603U;
	int8_t x5140 = -1;
	uint64_t t80 = 597601339533726356LLU;

	t80 = (x5137>>((x5138|x5139)*x5140));

	if (t80 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x5169 = UINT64_MAX;
	int64_t x5170 = INT64_MAX;
	static int32_t x5171 = INT32_MIN;
	volatile int16_t x5172 = -1;
	volatile uint64_t t81 = 180505924400574LLU;

	t81 = (x5169>>((x5170|x5171)*x5172));

	if (t81 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x5189 = INT8_MAX;
	int8_t x5190 = INT8_MIN;
	static int16_t x5191 = -1;
	uint64_t x5192 = UINT64_MAX;
	int32_t t82 = -12;

	t82 = (x5189>>((x5190|x5191)*x5192));

	if (t82 != 63) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x5225 = 14941155LLU;
	int32_t x5226 = INT32_MAX;
	static int16_t x5227 = -1;
	uint16_t x5228 = 0U;
	uint64_t t83 = 677626LLU;

	t83 = (x5225>>((x5226|x5227)*x5228));

	if (t83 != 14941155LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x5259 = 4671955;
	uint8_t x5260 = 0U;

	t84 = (x5257>>((x5258|x5259)*x5260));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x5263 = INT32_MAX;
	int32_t x5264 = -1;
	int32_t t85 = -2;

	t85 = (x5261>>((x5262|x5263)*x5264));

	if (t85 != 63) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x5273 = 104340823161386175LL;
	int16_t x5274 = INT16_MIN;
	int16_t x5275 = INT16_MAX;
	volatile int8_t x5276 = -1;
	volatile int64_t t86 = -5LL;

	t86 = (x5273>>((x5274|x5275)*x5276));

	if (t86 != 52170411580693087LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x5277 = 55497277;
	volatile int32_t x5280 = -1;
	volatile int32_t t87 = -655218;

	t87 = (x5277>>((x5278|x5279)*x5280));

	if (t87 != 27748638) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x5345 = 25602517LLU;
	volatile int8_t x5346 = INT8_MAX;
	int8_t x5347 = -1;
	volatile uint64_t t88 = 13685415799591725LLU;

	t88 = (x5345>>((x5346|x5347)*x5348));

	if (t88 != 25602517LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x5353 = UINT16_MAX;
	int32_t x5355 = -1;
	int64_t x5356 = -1LL;
	int32_t t89 = 2982;

	t89 = (x5353>>((x5354|x5355)*x5356));

	if (t89 != 32767) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x5393 = 29990LLU;
	volatile int32_t x5394 = -1587;
	int64_t x5395 = -1LL;
	uint64_t x5396 = UINT64_MAX;

	t90 = (x5393>>((x5394|x5395)*x5396));

	if (t90 != 14995LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x5425 = 32966U;
	volatile int32_t x5426 = INT32_MIN;
	uint8_t x5428 = 0U;
	volatile uint32_t t91 = 12U;

	t91 = (x5425>>((x5426|x5427)*x5428));

	if (t91 != 32966U) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x5481 = INT32_MAX;
	static int8_t x5483 = -10;
	int32_t t92 = 1;

	t92 = (x5481>>((x5482|x5483)*x5484));

	if (t92 != 1073741823) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x5710 = -2;
	uint64_t x5712 = UINT64_MAX;
	volatile int32_t t93 = -4923109;

	t93 = (x5709>>((x5710|x5711)*x5712));

	if (t93 != 63) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x5753 = 1;
	uint8_t x5754 = 3U;
	uint32_t x5755 = 1U;
	uint64_t x5756 = 9LLU;
	static volatile int32_t t94 = 8466996;

	t94 = (x5753>>((x5754|x5755)*x5756));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x5825 = 31402U;
	volatile int8_t x5826 = INT8_MIN;
	static int64_t x5827 = -1LL;
	int8_t x5828 = -12;
	volatile int32_t t95 = -381603;

	t95 = (x5825>>((x5826|x5827)*x5828));

	if (t95 != 7) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x5861 = UINT16_MAX;
	uint16_t x5862 = 42U;
	volatile int8_t x5863 = -1;

	t96 = (x5861>>((x5862|x5863)*x5864));

	if (t96 != 32767) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x6045 = UINT32_MAX;
	int8_t x6046 = -1;
	uint16_t x6047 = UINT16_MAX;
	int64_t x6048 = -15LL;
	volatile uint32_t t97 = 146160U;

	t97 = (x6045>>((x6046|x6047)*x6048));

	if (t97 != 131071U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x6225 = 23;
	uint16_t x6226 = 0U;
	uint8_t x6227 = 0U;
	static uint32_t x6228 = 1321U;
	int32_t t98 = -6668676;

	t98 = (x6225>>((x6226|x6227)*x6228));

	if (t98 != 23) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x6457 = 190743;
	static uint8_t x6458 = UINT8_MAX;
	static int16_t x6460 = 0;
	volatile int32_t t99 = 798536979;

	t99 = (x6457>>((x6458|x6459)*x6460));

	if (t99 != 190743) { NG(); } else { ; }
	
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


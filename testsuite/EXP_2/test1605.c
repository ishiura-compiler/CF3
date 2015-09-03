#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x14 = 3U;
static uint16_t x53 = 9U;
int32_t t1 = -1423;
int8_t x77 = 53;
static volatile int32_t x79 = INT32_MAX;
volatile int32_t t3 = -4523;
uint64_t x333 = UINT64_MAX;
int16_t x372 = 22;
static volatile int16_t x463 = INT16_MIN;
int32_t t7 = -6;
uint32_t x469 = 14U;
int8_t x470 = -1;
uint8_t x536 = 13U;
static volatile uint64_t t9 = 5980LLU;
int32_t x571 = INT32_MAX;
uint8_t x572 = 3U;
uint64_t x597 = 3138379170015LLU;
int8_t x691 = INT8_MAX;
uint16_t x692 = 1U;
uint16_t x754 = 2U;
uint8_t x792 = 0U;
volatile int16_t x1075 = INT16_MIN;
int64_t x1102 = INT64_MAX;
uint64_t x1104 = 18LLU;
volatile uint64_t t22 = 11026541LLU;
volatile int8_t x1490 = INT8_MIN;
int32_t t24 = -1692;
uint8_t x1609 = UINT8_MAX;
volatile int16_t x1610 = -1;
int8_t x1649 = INT8_MAX;
volatile int16_t x1837 = INT16_MAX;
uint8_t x1840 = 5U;
volatile int32_t t28 = -10;
volatile int32_t t29 = 340;
static int16_t x2201 = INT16_MAX;
int32_t t32 = -76752160;
uint16_t x2208 = 1U;
int8_t x2274 = -1;
uint8_t x2327 = 0U;
static volatile int32_t t35 = -1687;
uint8_t x2329 = UINT8_MAX;
int8_t x2332 = 0;
volatile int32_t t36 = 467;
static int32_t x2465 = INT32_MAX;
int8_t x2468 = 1;
uint32_t x2480 = 0U;
uint32_t x2509 = 757959U;
uint32_t x2531 = 61408U;
int32_t t42 = -3650318;
int32_t x2545 = 7398779;
int32_t x2567 = INT32_MIN;
static uint8_t x2601 = UINT8_MAX;
static int32_t t45 = 1;
uint8_t x2737 = UINT8_MAX;
int32_t t47 = 3328;
uint8_t x2821 = 23U;
int32_t x2822 = 186480959;
int64_t x2870 = -1991852291347LL;
int32_t t49 = -566652908;
volatile int64_t x2931 = INT64_MIN;
uint16_t x3032 = 0U;
int32_t t52 = 15933160;
int16_t x3087 = 1;
volatile uint64_t t54 = 417471295494LLU;
uint64_t x3185 = 825085883930163965LLU;
static int8_t x3187 = -1;
volatile uint64_t x3389 = 228072060507LLU;
static int16_t x3391 = -6;
int32_t x3525 = 5;
volatile int8_t x3527 = 39;
uint8_t x3580 = 9U;
volatile int16_t x3724 = 3;
int32_t x3761 = 163219;
uint32_t x3764 = 0U;
uint32_t t67 = 122707U;
static int8_t x3794 = INT8_MIN;
uint32_t t68 = 1U;
int8_t x3979 = -2;
uint16_t x3995 = UINT16_MAX;
uint64_t x4061 = 1LLU;
volatile uint64_t t73 = 2164LLU;
volatile uint16_t x4134 = 489U;
int64_t x4136 = 5LL;
volatile uint64_t t76 = 46051542555222462LLU;


void f0(void) {
	int8_t x13 = 2;
	static volatile int16_t x15 = INT16_MIN;
	volatile uint8_t x16 = 1U;
	volatile int32_t t0 = 1035451045;

	t0 = ((x13>>(x14<=x15))<<x16);

	if (t0 != 4) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x54 = -33410;
	int16_t x55 = INT16_MIN;
	static uint16_t x56 = 0U;

	t1 = ((x53>>(x54<=x55))<<x56);

	if (t1 != 4) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x78 = 2807647529120131797LLU;
	int8_t x80 = 5;
	int32_t t2 = -167;

	t2 = ((x77>>(x78<=x79))<<x80);

	if (t2 != 1696) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x173 = UINT8_MAX;
	int8_t x174 = -2;
	uint16_t x175 = 1838U;
	static uint64_t x176 = 5LLU;

	t3 = ((x173>>(x174<=x175))<<x176);

	if (t3 != 4064) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x181 = 12LL;
	uint16_t x182 = 60U;
	volatile int16_t x183 = INT16_MIN;
	int16_t x184 = 0;
	volatile int64_t t4 = -8943LL;

	t4 = ((x181>>(x182<=x183))<<x184);

	if (t4 != 12LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x334 = INT64_MIN;
	volatile int16_t x335 = -1;
	int16_t x336 = 55;
	uint64_t t5 = 5034LLU;

	t5 = ((x333>>(x334<=x335))<<x336);

	if (t5 != 18410715276690587648LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x369 = UINT64_MAX;
	int32_t x370 = -1;
	int32_t x371 = INT32_MIN;
	uint64_t t6 = 124LLU;

	t6 = ((x369>>(x370<=x371))<<x372);

	if (t6 != 18446744073705357312LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x461 = INT16_MAX;
	static uint32_t x462 = UINT32_MAX;
	int16_t x464 = 1;

	t7 = ((x461>>(x462<=x463))<<x464);

	if (t7 != 65534) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x471 = INT16_MIN;
	int8_t x472 = 0;
	volatile uint32_t t8 = 702466042U;

	t8 = ((x469>>(x470<=x471))<<x472);

	if (t8 != 14U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x533 = 264392145LLU;
	int16_t x534 = -1;
	static volatile int16_t x535 = -208;

	t9 = ((x533>>(x534<=x535))<<x536);

	if (t9 != 2165900451840LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x569 = 1234223981U;
	static volatile int8_t x570 = INT8_MIN;
	volatile uint32_t t10 = 868613834U;

	t10 = ((x569>>(x570<=x571))<<x572);

	if (t10 != 641928624U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x598 = INT64_MIN;
	int8_t x599 = 24;
	uint8_t x600 = 28U;
	uint64_t t11 = 15008832LLU;

	t11 = ((x597>>(x598<=x599))<<x600);

	if (t11 != 15397752180194672640LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x689 = 288445413219584833LL;
	static int8_t x690 = INT8_MIN;
	static volatile int64_t t12 = 2040LL;

	t12 = ((x689>>(x690<=x691))<<x692);

	if (t12 != 288445413219584832LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x705 = UINT8_MAX;
	static int64_t x706 = INT64_MIN;
	int8_t x707 = INT8_MIN;
	uint8_t x708 = 1U;
	volatile int32_t t13 = -5;

	t13 = ((x705>>(x706<=x707))<<x708);

	if (t13 != 254) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x753 = 11U;
	int32_t x755 = INT32_MIN;
	uint16_t x756 = 3U;
	int32_t t14 = 117771;

	t14 = ((x753>>(x754<=x755))<<x756);

	if (t14 != 88) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x789 = INT16_MAX;
	int16_t x790 = -1;
	uint64_t x791 = UINT64_MAX;
	int32_t t15 = -238972;

	t15 = ((x789>>(x790<=x791))<<x792);

	if (t15 != 16383) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x853 = 0;
	volatile uint8_t x854 = 1U;
	volatile uint16_t x855 = 1U;
	volatile uint8_t x856 = 7U;
	int32_t t16 = 3;

	t16 = ((x853>>(x854<=x855))<<x856);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x961 = 83246U;
	volatile uint64_t x962 = 7232908478993841LLU;
	uint16_t x963 = 47U;
	uint16_t x964 = 7U;
	volatile uint32_t t17 = 10U;

	t17 = ((x961>>(x962<=x963))<<x964);

	if (t17 != 10655488U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x1073 = 41;
	volatile int16_t x1074 = -1482;
	static int16_t x1076 = 8;
	volatile int32_t t18 = 1;

	t18 = ((x1073>>(x1074<=x1075))<<x1076);

	if (t18 != 10496) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1101 = 0LLU;
	int8_t x1103 = -2;
	volatile uint64_t t19 = 448LLU;

	t19 = ((x1101>>(x1102<=x1103))<<x1104);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x1117 = 86U;
	volatile int8_t x1118 = INT8_MIN;
	volatile int8_t x1119 = 0;
	uint8_t x1120 = 12U;
	int32_t t20 = -40073;

	t20 = ((x1117>>(x1118<=x1119))<<x1120);

	if (t20 != 176128) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x1181 = 5713264361353LLU;
	uint64_t x1182 = 69960241078903LLU;
	int32_t x1183 = -1;
	static int8_t x1184 = 9;
	volatile uint64_t t21 = 200113037LLU;

	t21 = ((x1181>>(x1182<=x1183))<<x1184);

	if (t21 != 1462595676506112LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint64_t x1393 = UINT64_MAX;
	uint8_t x1394 = 44U;
	uint16_t x1395 = UINT16_MAX;
	static uint16_t x1396 = 0U;

	t22 = ((x1393>>(x1394<=x1395))<<x1396);

	if (t22 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1489 = INT16_MAX;
	static int32_t x1491 = -1;
	static volatile uint8_t x1492 = 5U;
	volatile int32_t t23 = -719450;

	t23 = ((x1489>>(x1490<=x1491))<<x1492);

	if (t23 != 524256) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x1601 = 9833;
	volatile int32_t x1602 = -1;
	volatile int16_t x1603 = INT16_MIN;
	int16_t x1604 = 0;

	t24 = ((x1601>>(x1602<=x1603))<<x1604);

	if (t24 != 9833) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x1611 = 3LLU;
	static volatile uint32_t x1612 = 0U;
	volatile int32_t t25 = 100601;

	t25 = ((x1609>>(x1610<=x1611))<<x1612);

	if (t25 != 255) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1633 = 22942923;
	static int32_t x1634 = 205041914;
	static uint32_t x1635 = 164218436U;
	volatile uint8_t x1636 = 2U;
	volatile int32_t t26 = 8138;

	t26 = ((x1633>>(x1634<=x1635))<<x1636);

	if (t26 != 91771692) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint16_t x1650 = UINT16_MAX;
	int16_t x1651 = INT16_MIN;
	int8_t x1652 = 9;
	int32_t t27 = -43305238;

	t27 = ((x1649>>(x1650<=x1651))<<x1652);

	if (t27 != 65024) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x1838 = 359U;
	int8_t x1839 = -25;

	t28 = ((x1837>>(x1838<=x1839))<<x1840);

	if (t28 != 1048544) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x1849 = UINT16_MAX;
	int16_t x1850 = -1;
	uint16_t x1851 = 7180U;
	static uint32_t x1852 = 1U;

	t29 = ((x1849>>(x1850<=x1851))<<x1852);

	if (t29 != 65534) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x2101 = INT16_MAX;
	int32_t x2102 = 491;
	static int8_t x2103 = INT8_MAX;
	static volatile uint8_t x2104 = 15U;
	int32_t t30 = -90316516;

	t30 = ((x2101>>(x2102<=x2103))<<x2104);

	if (t30 != 1073709056) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x2125 = 20;
	static int8_t x2126 = 0;
	int32_t x2127 = INT32_MIN;
	int8_t x2128 = 26;
	int32_t t31 = 44;

	t31 = ((x2125>>(x2126<=x2127))<<x2128);

	if (t31 != 1342177280) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x2202 = 78U;
	int8_t x2203 = INT8_MAX;
	uint64_t x2204 = 7LLU;

	t32 = ((x2201>>(x2202<=x2203))<<x2204);

	if (t32 != 2097024) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x2205 = 80U;
	int16_t x2206 = INT16_MAX;
	volatile int8_t x2207 = INT8_MIN;
	volatile int32_t t33 = -6258459;

	t33 = ((x2205>>(x2206<=x2207))<<x2208);

	if (t33 != 160) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x2273 = UINT8_MAX;
	int64_t x2275 = INT64_MIN;
	int32_t x2276 = 10;
	int32_t t34 = 15643;

	t34 = ((x2273>>(x2274<=x2275))<<x2276);

	if (t34 != 261120) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x2325 = 0U;
	int32_t x2326 = -2186496;
	int8_t x2328 = 3;

	t35 = ((x2325>>(x2326<=x2327))<<x2328);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x2330 = INT16_MAX;
	int8_t x2331 = INT8_MAX;

	t36 = ((x2329>>(x2330<=x2331))<<x2332);

	if (t36 != 255) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x2337 = 8;
	uint32_t x2338 = 1U;
	static volatile int32_t x2339 = 4267;
	static uint16_t x2340 = 4U;
	volatile int32_t t37 = 11340;

	t37 = ((x2337>>(x2338<=x2339))<<x2340);

	if (t37 != 64) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x2466 = INT32_MIN;
	int16_t x2467 = INT16_MIN;
	volatile int32_t t38 = 3;

	t38 = ((x2465>>(x2466<=x2467))<<x2468);

	if (t38 != 2147483646) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x2469 = 53U;
	int8_t x2470 = INT8_MIN;
	int16_t x2471 = -1;
	volatile uint16_t x2472 = 3U;
	static volatile int32_t t39 = 39;

	t39 = ((x2469>>(x2470<=x2471))<<x2472);

	if (t39 != 208) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x2477 = 0;
	static uint64_t x2478 = 1825302092748214627LLU;
	int64_t x2479 = -1LL;
	int32_t t40 = -28240203;

	t40 = ((x2477>>(x2478<=x2479))<<x2480);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x2510 = -10769;
	int32_t x2511 = INT32_MIN;
	int16_t x2512 = 2;
	volatile uint32_t t41 = 1U;

	t41 = ((x2509>>(x2510<=x2511))<<x2512);

	if (t41 != 3031836U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x2529 = 358;
	int8_t x2530 = INT8_MAX;
	static int16_t x2532 = 5;

	t42 = ((x2529>>(x2530<=x2531))<<x2532);

	if (t42 != 5728) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x2546 = INT16_MAX;
	static int16_t x2547 = 2974;
	uint8_t x2548 = 1U;
	static int32_t t43 = -1464021;

	t43 = ((x2545>>(x2546<=x2547))<<x2548);

	if (t43 != 14797558) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x2565 = 1;
	static int16_t x2566 = INT16_MIN;
	uint8_t x2568 = 15U;
	volatile int32_t t44 = 252;

	t44 = ((x2565>>(x2566<=x2567))<<x2568);

	if (t44 != 32768) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x2602 = -32170499;
	static int32_t x2603 = INT32_MIN;
	volatile int16_t x2604 = 15;

	t45 = ((x2601>>(x2602<=x2603))<<x2604);

	if (t45 != 8355840) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x2725 = 451503;
	int32_t x2726 = INT32_MIN;
	int64_t x2727 = INT64_MIN;
	uint8_t x2728 = 3U;
	volatile int32_t t46 = -727140;

	t46 = ((x2725>>(x2726<=x2727))<<x2728);

	if (t46 != 3612024) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x2738 = INT32_MIN;
	int16_t x2739 = 720;
	volatile uint8_t x2740 = 0U;

	t47 = ((x2737>>(x2738<=x2739))<<x2740);

	if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x2823 = INT8_MAX;
	uint16_t x2824 = 0U;
	volatile int32_t t48 = -241491857;

	t48 = ((x2821>>(x2822<=x2823))<<x2824);

	if (t48 != 23) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint16_t x2869 = 14U;
	volatile int8_t x2871 = INT8_MAX;
	uint16_t x2872 = 2U;

	t49 = ((x2869>>(x2870<=x2871))<<x2872);

	if (t49 != 28) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x2929 = INT8_MAX;
	static int64_t x2930 = 26522932722160LL;
	volatile int16_t x2932 = 6;
	int32_t t50 = 551049;

	t50 = ((x2929>>(x2930<=x2931))<<x2932);

	if (t50 != 8128) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x3029 = 0U;
	volatile uint8_t x3030 = UINT8_MAX;
	uint8_t x3031 = 0U;
	int32_t t51 = 1506371;

	t51 = ((x3029>>(x3030<=x3031))<<x3032);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int16_t x3049 = INT16_MAX;
	uint8_t x3050 = 1U;
	int16_t x3051 = -2;
	uint16_t x3052 = 0U;

	t52 = ((x3049>>(x3050<=x3051))<<x3052);

	if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x3085 = 0U;
	uint64_t x3086 = 190021139521206LLU;
	uint8_t x3088 = 8U;
	volatile int32_t t53 = 3312536;

	t53 = ((x3085>>(x3086<=x3087))<<x3088);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x3141 = 12469533138113LLU;
	uint64_t x3142 = 14098063LLU;
	int8_t x3143 = INT8_MAX;
	int8_t x3144 = 1;

	t54 = ((x3141>>(x3142<=x3143))<<x3144);

	if (t54 != 24939066276226LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x3181 = 29;
	int32_t x3182 = 6;
	int8_t x3183 = -1;
	uint32_t x3184 = 3U;
	volatile int32_t t55 = -139348;

	t55 = ((x3181>>(x3182<=x3183))<<x3184);

	if (t55 != 232) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x3186 = 2LL;
	static uint8_t x3188 = 29U;
	static uint64_t t56 = 1336094196162LLU;

	t56 = ((x3185>>(x3186<=x3187))<<x3188);

	if (t56 != 12509618089425371136LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x3241 = 12398;
	int64_t x3242 = -776820208249937LL;
	static int16_t x3243 = INT16_MAX;
	uint32_t x3244 = 4U;
	int32_t t57 = 24;

	t57 = ((x3241>>(x3242<=x3243))<<x3244);

	if (t57 != 99184) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x3273 = 4U;
	int32_t x3274 = INT32_MIN;
	int8_t x3275 = INT8_MIN;
	uint8_t x3276 = 0U;
	volatile int32_t t58 = 279891631;

	t58 = ((x3273>>(x3274<=x3275))<<x3276);

	if (t58 != 2) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x3329 = 110U;
	int64_t x3330 = INT64_MIN;
	static volatile uint8_t x3331 = 119U;
	static uint32_t x3332 = 3U;
	static int32_t t59 = 11721208;

	t59 = ((x3329>>(x3330<=x3331))<<x3332);

	if (t59 != 440) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x3390 = 1;
	static int8_t x3392 = 1;
	uint64_t t60 = 0LLU;

	t60 = ((x3389>>(x3390<=x3391))<<x3392);

	if (t60 != 456144121014LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x3521 = 0U;
	volatile uint8_t x3522 = 50U;
	int64_t x3523 = -929LL;
	int8_t x3524 = 0;
	volatile int32_t t61 = 0;

	t61 = ((x3521>>(x3522<=x3523))<<x3524);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x3526 = INT32_MIN;
	int16_t x3528 = 0;
	volatile int32_t t62 = 7145105;

	t62 = ((x3525>>(x3526<=x3527))<<x3528);

	if (t62 != 2) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x3577 = 58U;
	uint8_t x3578 = UINT8_MAX;
	static int32_t x3579 = -1;
	volatile int32_t t63 = -1230;

	t63 = ((x3577>>(x3578<=x3579))<<x3580);

	if (t63 != 29696) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x3665 = UINT64_MAX;
	int8_t x3666 = -1;
	int64_t x3667 = -1LL;
	uint8_t x3668 = 1U;
	uint64_t t64 = 59739019402083249LLU;

	t64 = ((x3665>>(x3666<=x3667))<<x3668);

	if (t64 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x3721 = 276;
	int32_t x3722 = -1;
	int16_t x3723 = 497;
	volatile int32_t t65 = 1;

	t65 = ((x3721>>(x3722<=x3723))<<x3724);

	if (t65 != 1104) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x3762 = UINT16_MAX;
	int32_t x3763 = INT32_MIN;
	int32_t t66 = 1023326;

	t66 = ((x3761>>(x3762<=x3763))<<x3764);

	if (t66 != 163219) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x3789 = UINT32_MAX;
	uint32_t x3790 = 308626U;
	static volatile int8_t x3791 = INT8_MIN;
	int16_t x3792 = 0;

	t67 = ((x3789>>(x3790<=x3791))<<x3792);

	if (t67 != 2147483647U) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x3793 = 452297217U;
	int32_t x3795 = INT32_MAX;
	uint64_t x3796 = 12LLU;

	t68 = ((x3793>>(x3794<=x3795))<<x3796);

	if (t68 != 2886729728U) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x3817 = 8U;
	static int16_t x3818 = INT16_MIN;
	int8_t x3819 = -1;
	int8_t x3820 = 8;
	int32_t t69 = 416753943;

	t69 = ((x3817>>(x3818<=x3819))<<x3820);

	if (t69 != 1024) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x3905 = 177954U;
	static int8_t x3906 = 39;
	volatile int16_t x3907 = INT16_MAX;
	int32_t x3908 = 1;
	uint32_t t70 = 5814U;

	t70 = ((x3905>>(x3906<=x3907))<<x3908);

	if (t70 != 177954U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x3977 = UINT32_MAX;
	int16_t x3978 = -1;
	static volatile int8_t x3980 = 1;
	volatile uint32_t t71 = 1187U;

	t71 = ((x3977>>(x3978<=x3979))<<x3980);

	if (t71 != 4294967294U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x3993 = 1652;
	static int32_t x3994 = INT32_MIN;
	uint8_t x3996 = 8U;
	volatile int32_t t72 = -1160575;

	t72 = ((x3993>>(x3994<=x3995))<<x3996);

	if (t72 != 211456) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x4062 = INT64_MIN;
	static int8_t x4063 = -1;
	volatile int16_t x4064 = 57;

	t73 = ((x4061>>(x4062<=x4063))<<x4064);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x4069 = 211U;
	static int8_t x4070 = -1;
	int32_t x4071 = 117457392;
	uint8_t x4072 = 0U;
	int32_t t74 = -3665;

	t74 = ((x4069>>(x4070<=x4071))<<x4072);

	if (t74 != 105) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x4133 = INT8_MAX;
	uint64_t x4135 = 512617817040LLU;
	int32_t t75 = 209208;

	t75 = ((x4133>>(x4134<=x4135))<<x4136);

	if (t75 != 2016) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x4145 = 26114961212LLU;
	int16_t x4146 = -1;
	static uint64_t x4147 = 60091082LLU;
	volatile uint8_t x4148 = 36U;

	t76 = ((x4145>>(x4146<=x4147))<<x4148);

	if (t76 != 5272294319749857280LLU) { NG(); } else { ; }
	
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


    return 0;
}


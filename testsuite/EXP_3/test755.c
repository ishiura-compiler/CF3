#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x329 = INT32_MAX;
volatile int16_t x341 = INT16_MAX;
int32_t x367 = -23;
uint8_t x402 = 53U;
uint64_t x462 = 4LLU;
static int16_t x464 = INT16_MIN;
static volatile uint8_t x506 = 15U;
volatile uint64_t t9 = 160166LLU;
static uint32_t t11 = 27U;
volatile uint8_t x613 = UINT8_MAX;
uint8_t x666 = 36U;
static int16_t x734 = 13;
uint16_t x750 = 7U;
int64_t x751 = -1LL;
volatile uint64_t t17 = 6243LLU;
uint8_t x825 = 3U;
static uint8_t x827 = 27U;
volatile int64_t x955 = INT64_MIN;
volatile int64_t x956 = INT64_MAX;
int64_t t22 = 1886923271120LL;
uint8_t x1116 = UINT8_MAX;
int16_t x1229 = INT16_MAX;
int32_t x1232 = -182;
int16_t x1328 = INT16_MIN;
uint64_t x1468 = 45LLU;
static int32_t x1678 = 6;
static int32_t t28 = -6;
volatile int16_t x1758 = 0;
static int8_t x1928 = INT8_MIN;
int8_t x1970 = 6;
static int8_t x2122 = 1;
uint8_t x2124 = 5U;
volatile int64_t t33 = 61875248323267LL;
uint64_t x2189 = UINT64_MAX;
static uint8_t x2190 = 55U;
int16_t x2192 = -2;
uint32_t x2245 = 31546158U;
static uint16_t x2357 = 1U;
static uint64_t x2359 = UINT64_MAX;
volatile int8_t x2360 = -1;
int64_t x2516 = INT64_MAX;
uint8_t x2881 = UINT8_MAX;
int64_t x2884 = 2145199186LL;
static uint32_t t45 = 1U;
static uint8_t x3086 = 1U;
volatile uint64_t t47 = 3968879995LLU;
int8_t x3138 = 57;
int32_t x3140 = -1;
volatile int64_t t48 = 31928994363LL;
int32_t x3185 = 3;
static uint32_t x3186 = 8U;
int16_t x3247 = -1;
int16_t x3248 = -25;
static uint32_t x3313 = UINT32_MAX;
int64_t x3480 = INT64_MAX;
int32_t x3567 = -166203336;
static uint64_t x3658 = 0LLU;
static volatile uint8_t x3757 = 5U;
uint8_t x3760 = UINT8_MAX;
uint16_t x3777 = UINT16_MAX;
uint8_t x3779 = 33U;
static uint8_t x3794 = 6U;
int16_t x3795 = INT16_MAX;
static int64_t x3796 = INT64_MIN;
uint64_t x3909 = UINT64_MAX;
int64_t x3923 = -449973246LL;
static uint8_t x4097 = 15U;
uint8_t x4098 = 7U;
static int64_t x4100 = INT64_MAX;
int64_t t63 = -1486478982035LL;
uint8_t x4354 = 3U;
uint64_t t65 = 20LLU;
static uint8_t x4670 = 20U;
uint16_t x4776 = UINT16_MAX;
uint64_t x4809 = 36LLU;
uint64_t x4812 = 2140065933017986115LLU;
volatile int32_t x4819 = 3;
volatile uint64_t x4820 = 3LLU;
int8_t x4833 = 13;
static volatile int32_t x4835 = -1;
volatile uint64_t x4875 = 10618964801LLU;
uint8_t x5046 = 31U;
int8_t x5210 = 0;
static int32_t x5435 = -1;
volatile int16_t x5643 = -1;
static uint8_t x5666 = 1U;
int32_t x5668 = -231;
uint16_t x5769 = 0U;
uint64_t x5832 = 31491397LLU;
uint8_t x5846 = 13U;
int32_t t92 = -220152371;
volatile int16_t x5929 = 601;
volatile uint64_t x6261 = 2100881863086436953LLU;
static uint8_t x6263 = 2U;
int32_t x6295 = INT32_MIN;


void f0(void) {
	int32_t x201 = INT32_MAX;
	volatile uint32_t x202 = 1U;
	static int16_t x203 = -1;
	int64_t x204 = -1LL;
	volatile int64_t t0 = -502331179714717LL;

	t0 = ((x201>>x202)+(x203%x204));

	if (t0 != 1073741823LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x265 = UINT32_MAX;
	int8_t x266 = 0;
	static int8_t x267 = INT8_MAX;
	volatile int32_t x268 = INT32_MAX;
	uint32_t t1 = 85973161U;

	t1 = ((x265>>x266)+(x267%x268));

	if (t1 != 126U) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x325 = UINT8_MAX;
	int64_t x326 = 2LL;
	int32_t x327 = INT32_MIN;
	static int16_t x328 = INT16_MAX;
	int32_t t2 = -111432187;

	t2 = ((x325>>x326)+(x327%x328));

	if (t2 != 61) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x330 = 2U;
	volatile uint8_t x331 = 10U;
	int16_t x332 = 62;
	volatile int32_t t3 = -227104443;

	t3 = ((x329>>x330)+(x331%x332));

	if (t3 != 536870921) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x342 = 20;
	int32_t x343 = -3227;
	volatile int64_t x344 = INT64_MIN;
	int64_t t4 = -2590606815LL;

	t4 = ((x341>>x342)+(x343%x344));

	if (t4 != -3227LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x365 = 925750U;
	static uint8_t x366 = 0U;
	volatile int64_t x368 = 5520011LL;
	volatile int64_t t5 = 15087865676375LL;

	t5 = ((x365>>x366)+(x367%x368));

	if (t5 != 925727LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x401 = 6512LLU;
	int32_t x403 = INT32_MIN;
	int32_t x404 = INT32_MAX;
	uint64_t t6 = UINT64_MAX;

	t6 = ((x401>>x402)+(x403%x404));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x461 = UINT16_MAX;
	int32_t x463 = INT32_MIN;
	int32_t t7 = 9955708;

	t7 = ((x461>>x462)+(x463%x464));

	if (t7 != 4095) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x477 = INT32_MAX;
	volatile uint16_t x478 = 0U;
	int64_t x479 = -1LL;
	int64_t x480 = INT64_MAX;
	static int64_t t8 = 185930746283770LL;

	t8 = ((x477>>x478)+(x479%x480));

	if (t8 != 2147483646LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x505 = 26368632LLU;
	volatile uint16_t x507 = 2U;
	static volatile int64_t x508 = -8664255138827LL;

	t9 = ((x505>>x506)+(x507%x508));

	if (t9 != 806LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x517 = 6;
	uint8_t x518 = 2U;
	uint8_t x519 = 0U;
	static uint64_t x520 = UINT64_MAX;
	volatile uint64_t t10 = 3LLU;

	t10 = ((x517>>x518)+(x519%x520));

	if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x533 = 358510682U;
	volatile uint64_t x534 = 26LLU;
	volatile int16_t x535 = INT16_MAX;
	int32_t x536 = INT32_MAX;

	t11 = ((x533>>x534)+(x535%x536));

	if (t11 != 32772U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x614 = 0;
	static int16_t x615 = INT16_MIN;
	static volatile int64_t x616 = INT64_MAX;
	volatile int64_t t12 = -3999LL;

	t12 = ((x613>>x614)+(x615%x616));

	if (t12 != -32513LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x665 = INT64_MAX;
	uint64_t x667 = UINT64_MAX;
	int16_t x668 = INT16_MIN;
	volatile uint64_t t13 = 206317109LLU;

	t13 = ((x665>>x666)+(x667%x668));

	if (t13 != 134250494LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x725 = 30673999LLU;
	volatile int16_t x726 = 0;
	int32_t x727 = INT32_MIN;
	int8_t x728 = INT8_MIN;
	static volatile uint64_t t14 = 5686227814816LLU;

	t14 = ((x725>>x726)+(x727%x728));

	if (t14 != 30673999LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x729 = 1;
	uint32_t x730 = 0U;
	int32_t x731 = INT32_MAX;
	int64_t x732 = INT64_MIN;
	int64_t t15 = -278715503440393LL;

	t15 = ((x729>>x730)+(x731%x732));

	if (t15 != 2147483648LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x733 = INT64_MAX;
	int16_t x735 = 480;
	static int64_t x736 = -1LL;
	int64_t t16 = 1446972976682561LL;

	t16 = ((x733>>x734)+(x735%x736));

	if (t16 != 1125899906842623LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x749 = 1112U;
	uint64_t x752 = UINT64_MAX;

	t17 = ((x749>>x750)+(x751%x752));

	if (t17 != 8LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x826 = 5U;
	static int64_t x828 = INT64_MAX;
	volatile int64_t t18 = -16LL;

	t18 = ((x825>>x826)+(x827%x828));

	if (t18 != 27LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x841 = UINT8_MAX;
	volatile uint16_t x842 = 4U;
	int8_t x843 = -51;
	volatile int16_t x844 = INT16_MAX;
	volatile int32_t t19 = 4009501;

	t19 = ((x841>>x842)+(x843%x844));

	if (t19 != -36) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x845 = 1U;
	uint16_t x846 = 11U;
	static int8_t x847 = INT8_MIN;
	volatile int32_t x848 = -6;
	volatile int32_t t20 = 203202;

	t20 = ((x845>>x846)+(x847%x848));

	if (t20 != -2) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x897 = INT32_MAX;
	volatile int8_t x898 = 1;
	int8_t x899 = INT8_MIN;
	int32_t x900 = INT32_MIN;
	static volatile int32_t t21 = 41667;

	t21 = ((x897>>x898)+(x899%x900));

	if (t21 != 1073741695) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x953 = 9U;
	static uint64_t x954 = 10LLU;

	t22 = ((x953>>x954)+(x955%x956));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1113 = INT8_MAX;
	uint8_t x1114 = 0U;
	static int64_t x1115 = -1LL;
	volatile int64_t t23 = 1628792911623026LL;

	t23 = ((x1113>>x1114)+(x1115%x1116));

	if (t23 != 126LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1230 = 2U;
	static volatile int32_t x1231 = -31758115;
	volatile int32_t t24 = -71;

	t24 = ((x1229>>x1230)+(x1231%x1232));

	if (t24 != 8166) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1241 = INT32_MAX;
	volatile uint8_t x1242 = 0U;
	int64_t x1243 = INT64_MIN;
	static uint16_t x1244 = 24U;
	int64_t t25 = -63302305228LL;

	t25 = ((x1241>>x1242)+(x1243%x1244));

	if (t25 != 2147483639LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x1325 = 815U;
	uint8_t x1326 = 18U;
	static int8_t x1327 = 27;
	volatile int32_t t26 = -27447893;

	t26 = ((x1325>>x1326)+(x1327%x1328));

	if (t26 != 27) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1465 = INT8_MAX;
	static int8_t x1466 = 0;
	volatile int32_t x1467 = INT32_MIN;
	volatile uint64_t t27 = 8221786427783LLU;

	t27 = ((x1465>>x1466)+(x1467%x1468));

	if (t27 != 150LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x1677 = INT8_MAX;
	int16_t x1679 = -1;
	int8_t x1680 = -2;

	t28 = ((x1677>>x1678)+(x1679%x1680));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x1757 = 3782U;
	uint16_t x1759 = 4514U;
	int64_t x1760 = INT64_MIN;
	int64_t t29 = -4442917440220611LL;

	t29 = ((x1757>>x1758)+(x1759%x1760));

	if (t29 != 8296LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x1781 = UINT32_MAX;
	uint8_t x1782 = 6U;
	int32_t x1783 = 71719354;
	int32_t x1784 = -1;
	uint32_t t30 = 195895612U;

	t30 = ((x1781>>x1782)+(x1783%x1784));

	if (t30 != 67108863U) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x1925 = INT64_MAX;
	uint32_t x1926 = 6U;
	volatile int8_t x1927 = INT8_MIN;
	volatile int64_t t31 = -43603141389402096LL;

	t31 = ((x1925>>x1926)+(x1927%x1928));

	if (t31 != 144115188075855871LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1969 = 6874283U;
	uint8_t x1971 = 52U;
	int64_t x1972 = -240676021030LL;
	int64_t t32 = -1010847572862115245LL;

	t32 = ((x1969>>x1970)+(x1971%x1972));

	if (t32 != 107462LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x2121 = 119U;
	int64_t x2123 = INT64_MIN;

	t33 = ((x2121>>x2122)+(x2123%x2124));

	if (t33 != 56LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x2181 = 1;
	int8_t x2182 = 2;
	int16_t x2183 = 7648;
	int64_t x2184 = -1LL;
	int64_t t34 = 11714LL;

	t34 = ((x2181>>x2182)+(x2183%x2184));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x2191 = 1U;
	volatile uint64_t t35 = 617044955LLU;

	t35 = ((x2189>>x2190)+(x2191%x2192));

	if (t35 != 512LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x2246 = 0;
	int64_t x2247 = INT64_MIN;
	int32_t x2248 = -1;
	static int64_t t36 = 4813LL;

	t36 = ((x2245>>x2246)+(x2247%x2248));

	if (t36 != 31546158LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x2261 = 11419;
	int8_t x2262 = 1;
	int32_t x2263 = INT32_MIN;
	static volatile int8_t x2264 = -1;
	int32_t t37 = -3071;

	t37 = ((x2261>>x2262)+(x2263%x2264));

	if (t37 != 5709) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x2301 = 936221;
	volatile int8_t x2302 = 0;
	volatile int64_t x2303 = INT64_MIN;
	int64_t x2304 = 1960805802289270570LL;
	volatile int64_t t38 = 9LL;

	t38 = ((x2301>>x2302)+(x2303%x2304));

	if (t38 != -1380148827696757307LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x2358 = 9LL;
	volatile uint64_t t39 = 668202494179341212LLU;

	t39 = ((x2357>>x2358)+(x2359%x2360));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x2513 = INT16_MAX;
	int8_t x2514 = 6;
	int32_t x2515 = -19;
	volatile int64_t t40 = 1594LL;

	t40 = ((x2513>>x2514)+(x2515%x2516));

	if (t40 != 492LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x2641 = UINT64_MAX;
	static volatile int16_t x2642 = 1;
	volatile int64_t x2643 = 1613360LL;
	int16_t x2644 = INT16_MIN;
	uint64_t t41 = 1105923319432LLU;

	t41 = ((x2641>>x2642)+(x2643%x2644));

	if (t41 != 9223372036854783535LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x2729 = UINT8_MAX;
	static int64_t x2730 = 1LL;
	static int8_t x2731 = INT8_MIN;
	static int16_t x2732 = -7;
	int32_t t42 = -22;

	t42 = ((x2729>>x2730)+(x2731%x2732));

	if (t42 != 125) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x2769 = UINT8_MAX;
	volatile uint8_t x2770 = 7U;
	int64_t x2771 = INT64_MIN;
	uint16_t x2772 = 148U;
	int64_t t43 = 42519839019382436LL;

	t43 = ((x2769>>x2770)+(x2771%x2772));

	if (t43 != -79LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x2882 = 0;
	static int16_t x2883 = -1;
	int64_t t44 = 12894586LL;

	t44 = ((x2881>>x2882)+(x2883%x2884));

	if (t44 != 254LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x3001 = 341;
	volatile uint32_t x3002 = 3U;
	uint8_t x3003 = 1U;
	uint32_t x3004 = 125U;

	t45 = ((x3001>>x3002)+(x3003%x3004));

	if (t45 != 43U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x3085 = 9;
	uint64_t x3087 = UINT64_MAX;
	int32_t x3088 = -1;
	volatile uint64_t t46 = 0LLU;

	t46 = ((x3085>>x3086)+(x3087%x3088));

	if (t46 != 4LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x3105 = UINT64_MAX;
	uint16_t x3106 = 14U;
	static volatile int16_t x3107 = INT16_MIN;
	int16_t x3108 = INT16_MAX;

	t47 = ((x3105>>x3106)+(x3107%x3108));

	if (t47 != 1125899906842622LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x3137 = INT64_MAX;
	int64_t x3139 = -1LL;

	t48 = ((x3137>>x3138)+(x3139%x3140));

	if (t48 != 63LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x3187 = 74U;
	int64_t x3188 = INT64_MIN;
	volatile int64_t t49 = -1205LL;

	t49 = ((x3185>>x3186)+(x3187%x3188));

	if (t49 != 74LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x3245 = INT64_MAX;
	uint8_t x3246 = 54U;
	volatile int64_t t50 = -1244171779LL;

	t50 = ((x3245>>x3246)+(x3247%x3248));

	if (t50 != 510LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x3314 = 12U;
	int8_t x3315 = -36;
	int32_t x3316 = INT32_MAX;
	uint32_t t51 = 15233536U;

	t51 = ((x3313>>x3314)+(x3315%x3316));

	if (t51 != 1048539U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x3325 = 63662317;
	static int8_t x3326 = 5;
	int16_t x3327 = INT16_MAX;
	uint64_t x3328 = 54LLU;
	uint64_t t52 = 2949276217LLU;

	t52 = ((x3325>>x3326)+(x3327%x3328));

	if (t52 != 1989490LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x3477 = 1U;
	volatile uint32_t x3478 = 3U;
	int8_t x3479 = INT8_MIN;
	static int64_t t53 = 137692571310LL;

	t53 = ((x3477>>x3478)+(x3479%x3480));

	if (t53 != -128LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint8_t x3565 = UINT8_MAX;
	int8_t x3566 = 0;
	uint32_t x3568 = 6U;
	volatile uint32_t t54 = 454991816U;

	t54 = ((x3565>>x3566)+(x3567%x3568));

	if (t54 != 259U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x3657 = 3;
	static uint8_t x3659 = UINT8_MAX;
	int16_t x3660 = INT16_MIN;
	volatile int32_t t55 = 10;

	t55 = ((x3657>>x3658)+(x3659%x3660));

	if (t55 != 258) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x3758 = 3U;
	static int64_t x3759 = INT64_MIN;
	static int64_t t56 = -3620616156893LL;

	t56 = ((x3757>>x3758)+(x3759%x3760));

	if (t56 != -128LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x3778 = 1U;
	uint8_t x3780 = UINT8_MAX;
	volatile int32_t t57 = -1442141;

	t57 = ((x3777>>x3778)+(x3779%x3780));

	if (t57 != 32800) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x3793 = 2131161443875746851LL;
	volatile int64_t t58 = 383711109LL;

	t58 = ((x3793>>x3794)+(x3795%x3796));

	if (t58 != 33299397560591311LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x3853 = 1U;
	volatile int8_t x3854 = 1;
	int64_t x3855 = -1LL;
	volatile int16_t x3856 = -1;
	volatile int64_t t59 = 363812143867712308LL;

	t59 = ((x3853>>x3854)+(x3855%x3856));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x3905 = INT32_MAX;
	uint8_t x3906 = 3U;
	int64_t x3907 = INT64_MIN;
	uint64_t x3908 = 522494LLU;
	uint64_t t60 = 6845712439980LLU;

	t60 = ((x3905>>x3906)+(x3907%x3908));

	if (t60 != 268771659LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x3910 = 10U;
	int32_t x3911 = INT32_MIN;
	int16_t x3912 = -7;
	static volatile uint64_t t61 = 1976035670LLU;

	t61 = ((x3909>>x3910)+(x3911%x3912));

	if (t61 != 18014398509481981LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x3921 = 221671LLU;
	uint8_t x3922 = 46U;
	uint32_t x3924 = 44U;
	volatile uint64_t t62 = 21126639962271322LLU;

	t62 = ((x3921>>x3922)+(x3923%x3924));

	if (t62 != 18446744073709551586LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x4099 = INT64_MIN;

	t63 = ((x4097>>x4098)+(x4099%x4100));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x4193 = UINT64_MAX;
	uint16_t x4194 = 1U;
	uint64_t x4195 = 309563243775000LLU;
	uint8_t x4196 = 11U;
	static uint64_t t64 = 6342766137047654LLU;

	t64 = ((x4193>>x4194)+(x4195%x4196));

	if (t64 != 9223372036854775813LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x4353 = 7080431389156920708LLU;
	volatile uint8_t x4355 = 34U;
	static uint8_t x4356 = UINT8_MAX;

	t65 = ((x4353>>x4354)+(x4355%x4356));

	if (t65 != 885053923644615122LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x4445 = 2030U;
	uint8_t x4446 = 15U;
	uint32_t x4447 = 287911120U;
	int32_t x4448 = INT32_MAX;
	uint32_t t66 = 1U;

	t66 = ((x4445>>x4446)+(x4447%x4448));

	if (t66 != 287911120U) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x4613 = 3832422976590LL;
	int8_t x4614 = 39;
	static volatile int8_t x4615 = INT8_MAX;
	static int8_t x4616 = 1;
	static volatile int64_t t67 = 109213524574LL;

	t67 = ((x4613>>x4614)+(x4615%x4616));

	if (t67 != 6LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x4669 = 13434865;
	static int16_t x4671 = -6;
	uint32_t x4672 = UINT32_MAX;
	uint32_t t68 = 120175117U;

	t68 = ((x4669>>x4670)+(x4671%x4672));

	if (t68 != 6U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x4677 = 225808LL;
	uint16_t x4678 = 0U;
	int32_t x4679 = -14635;
	int32_t x4680 = 6747891;
	int64_t t69 = 7479LL;

	t69 = ((x4677>>x4678)+(x4679%x4680));

	if (t69 != 211173LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x4729 = 3U;
	int16_t x4730 = 0;
	int16_t x4731 = INT16_MIN;
	volatile uint64_t x4732 = 25218132793007LLU;
	static uint64_t t70 = 78LLU;

	t70 = ((x4729>>x4730)+(x4731%x4732));

	if (t70 != 7771351207442LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x4773 = 44;
	static int8_t x4774 = 1;
	volatile int8_t x4775 = INT8_MIN;
	volatile int32_t t71 = 1;

	t71 = ((x4773>>x4774)+(x4775%x4776));

	if (t71 != -106) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x4810 = 1U;
	uint16_t x4811 = 49U;
	uint64_t t72 = 0LLU;

	t72 = ((x4809>>x4810)+(x4811%x4812));

	if (t72 != 67LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x4817 = UINT64_MAX;
	uint32_t x4818 = 1U;
	uint64_t t73 = 70073710526879848LLU;

	t73 = ((x4817>>x4818)+(x4819%x4820));

	if (t73 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x4834 = 21;
	uint64_t x4836 = 51104458890LLU;
	volatile uint64_t t74 = 2817141846LLU;

	t74 = ((x4833>>x4834)+(x4835%x4836));

	if (t74 != 45221837685LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x4873 = 31000U;
	int8_t x4874 = 1;
	uint8_t x4876 = 4U;
	static volatile uint64_t t75 = 143778622365983652LLU;

	t75 = ((x4873>>x4874)+(x4875%x4876));

	if (t75 != 15501LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x5045 = 30821U;
	static int32_t x5047 = INT32_MAX;
	volatile uint8_t x5048 = 55U;
	uint32_t t76 = 258786U;

	t76 = ((x5045>>x5046)+(x5047%x5048));

	if (t76 != 12U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x5049 = UINT32_MAX;
	uint16_t x5050 = 20U;
	int16_t x5051 = INT16_MIN;
	int8_t x5052 = -1;
	volatile uint32_t t77 = 14U;

	t77 = ((x5049>>x5050)+(x5051%x5052));

	if (t77 != 4095U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x5189 = 1;
	uint8_t x5190 = 10U;
	volatile int16_t x5191 = INT16_MIN;
	uint8_t x5192 = UINT8_MAX;
	volatile int32_t t78 = -1171506;

	t78 = ((x5189>>x5190)+(x5191%x5192));

	if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x5209 = 0;
	uint32_t x5211 = UINT32_MAX;
	uint16_t x5212 = 63U;
	static uint32_t t79 = 31291U;

	t79 = ((x5209>>x5210)+(x5211%x5212));

	if (t79 != 3U) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x5225 = 1U;
	int32_t x5226 = 0;
	int8_t x5227 = -1;
	int32_t x5228 = INT32_MIN;
	volatile int32_t t80 = -663782962;

	t80 = ((x5225>>x5226)+(x5227%x5228));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x5433 = 36509214;
	uint16_t x5434 = 0U;
	static int64_t x5436 = -1LL;
	volatile int64_t t81 = 1601393439891315LL;

	t81 = ((x5433>>x5434)+(x5435%x5436));

	if (t81 != 36509214LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x5441 = 13LLU;
	int64_t x5442 = 2LL;
	uint16_t x5443 = 13146U;
	int16_t x5444 = 16;
	uint64_t t82 = 502330LLU;

	t82 = ((x5441>>x5442)+(x5443%x5444));

	if (t82 != 13LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x5453 = UINT64_MAX;
	static uint8_t x5454 = 36U;
	static int16_t x5455 = INT16_MAX;
	volatile int8_t x5456 = -10;
	volatile uint64_t t83 = 27651958215LLU;

	t83 = ((x5453>>x5454)+(x5455%x5456));

	if (t83 != 268435462LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x5497 = UINT64_MAX;
	volatile uint16_t x5498 = 2U;
	static int32_t x5499 = -1;
	static volatile int16_t x5500 = -3037;
	uint64_t t84 = 10LLU;

	t84 = ((x5497>>x5498)+(x5499%x5500));

	if (t84 != 4611686018427387902LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x5569 = INT32_MAX;
	int16_t x5570 = 1;
	int8_t x5571 = INT8_MIN;
	int64_t x5572 = 22LL;
	volatile int64_t t85 = 11980496LL;

	t85 = ((x5569>>x5570)+(x5571%x5572));

	if (t85 != 1073741805LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x5641 = 2116U;
	uint16_t x5642 = 0U;
	static volatile uint16_t x5644 = UINT16_MAX;
	int32_t t86 = 27;

	t86 = ((x5641>>x5642)+(x5643%x5644));

	if (t86 != 2115) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x5665 = 4499;
	int64_t x5667 = INT64_MIN;
	volatile int64_t t87 = -14577103930LL;

	t87 = ((x5665>>x5666)+(x5667%x5668));

	if (t87 != 2241LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x5770 = 15;
	static int8_t x5771 = -1;
	static int16_t x5772 = INT16_MIN;
	volatile int32_t t88 = 4831;

	t88 = ((x5769>>x5770)+(x5771%x5772));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x5809 = 65U;
	int8_t x5810 = 0;
	uint16_t x5811 = UINT16_MAX;
	int16_t x5812 = -1;
	volatile int32_t t89 = -70569745;

	t89 = ((x5809>>x5810)+(x5811%x5812));

	if (t89 != 65) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x5821 = UINT32_MAX;
	int8_t x5822 = 3;
	uint8_t x5823 = UINT8_MAX;
	uint8_t x5824 = 1U;
	uint32_t t90 = 503U;

	t90 = ((x5821>>x5822)+(x5823%x5824));

	if (t90 != 536870911U) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x5829 = 3U;
	int8_t x5830 = 3;
	int8_t x5831 = INT8_MIN;
	static uint64_t t91 = 64365079LLU;

	t91 = ((x5829>>x5830)+(x5831%x5832));

	if (t91 != 7008239LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x5845 = 0U;
	static int8_t x5847 = 3;
	static int8_t x5848 = INT8_MAX;

	t92 = ((x5845>>x5846)+(x5847%x5848));

	if (t92 != 3) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x5889 = INT8_MAX;
	uint16_t x5890 = 10U;
	int16_t x5891 = INT16_MAX;
	uint8_t x5892 = 2U;
	volatile int32_t t93 = -44695;

	t93 = ((x5889>>x5890)+(x5891%x5892));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x5930 = 0U;
	static int64_t x5931 = -1LL;
	uint32_t x5932 = 509412011U;
	volatile int64_t t94 = -166168841850LL;

	t94 = ((x5929>>x5930)+(x5931%x5932));

	if (t94 != 600LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x5973 = 3552U;
	volatile uint8_t x5974 = 3U;
	static int64_t x5975 = -1LL;
	uint8_t x5976 = UINT8_MAX;
	static volatile int64_t t95 = 344246867LL;

	t95 = ((x5973>>x5974)+(x5975%x5976));

	if (t95 != 443LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x6177 = INT8_MAX;
	int8_t x6178 = 1;
	int8_t x6179 = INT8_MIN;
	int16_t x6180 = 1;
	int32_t t96 = 7255820;

	t96 = ((x6177>>x6178)+(x6179%x6180));

	if (t96 != 63) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x6249 = UINT8_MAX;
	int8_t x6250 = 9;
	static volatile uint8_t x6251 = 60U;
	int8_t x6252 = -1;
	static volatile int32_t t97 = 2576793;

	t97 = ((x6249>>x6250)+(x6251%x6252));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x6262 = 0U;
	uint32_t x6264 = 236U;
	uint64_t t98 = 962895423951688LLU;

	t98 = ((x6261>>x6262)+(x6263%x6264));

	if (t98 != 2100881863086436955LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x6293 = 3240957535517608279LL;
	static int8_t x6294 = 10;
	int32_t x6296 = INT32_MIN;
	int64_t t99 = 32LL;

	t99 = ((x6293>>x6294)+(x6295%x6296));

	if (t99 != 3164997593278914LL) { NG(); } else { ; }
	
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


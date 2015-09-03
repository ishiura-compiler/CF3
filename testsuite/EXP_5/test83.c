#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x274 = 8U;
uint64_t x275 = 424347LLU;
uint8_t x452 = 4U;
int8_t x496 = 5;
static volatile int64_t x537 = 2189510693011LL;
int64_t t4 = -80834067377LL;
volatile uint64_t t5 = 174884599LLU;
int8_t x665 = -1;
uint16_t x781 = 28U;
int8_t x828 = 0;
static uint16_t x835 = UINT16_MAX;
uint64_t x1066 = UINT64_MAX;
volatile int16_t x1067 = -327;
uint64_t x1101 = 309006LLU;
int64_t x1146 = -17679744LL;
uint64_t x1147 = 96257745664LLU;
int64_t x1349 = -3LL;
int16_t x1350 = INT16_MAX;
uint32_t x1637 = 360959524U;
int32_t x1709 = -50827;
volatile uint32_t t21 = 297599U;
volatile int32_t x1933 = -2572973;
int64_t x1936 = 2LL;
uint16_t x1941 = 798U;
uint32_t x1943 = UINT32_MAX;
uint32_t x2123 = 213279940U;
volatile int64_t t28 = 750LL;
int8_t x2343 = INT8_MAX;
uint8_t x2416 = 15U;
uint64_t x2450 = 266249LLU;
static volatile uint64_t t32 = 357379LLU;
int64_t x2571 = 8947117793LL;
uint8_t x2644 = 0U;
static int16_t x2762 = INT16_MAX;
static uint64_t x2763 = UINT64_MAX;
int32_t t37 = -241318;
static uint32_t x2886 = 63U;
volatile int64_t t38 = 224956284811331LL;
uint8_t x2932 = 2U;
int16_t x2942 = INT16_MIN;
volatile int64_t t41 = -1892735133414563102LL;
volatile uint32_t x2945 = 373106U;
static uint64_t t42 = 32989094255803922LLU;
int32_t t43 = -504150936;
int8_t x3137 = INT8_MAX;
uint32_t x3186 = UINT32_MAX;
static volatile uint32_t x3187 = UINT32_MAX;
uint32_t t46 = 712U;
int8_t x3245 = INT8_MAX;
static volatile int32_t x3247 = -13632523;
uint8_t x3398 = 57U;
int64_t t50 = 149465569374LL;
uint16_t x3409 = UINT16_MAX;
volatile uint32_t x3422 = UINT32_MAX;
uint16_t x3423 = 6560U;
uint16_t x3575 = UINT16_MAX;
int64_t x3606 = 21103938644121337LL;
uint64_t x3622 = 702352571873760127LLU;
static uint64_t x3699 = 2057334155LLU;
uint8_t x3700 = 9U;
volatile uint8_t x3808 = 1U;
int64_t x4041 = 405LL;
int8_t x4056 = 0;
int8_t x4073 = INT8_MIN;
volatile uint32_t t68 = 59U;
static int8_t x4405 = INT8_MAX;
static volatile uint16_t x4465 = 67U;
uint64_t x4475 = 39125LLU;
static volatile int8_t x4775 = INT8_MIN;
uint8_t x4776 = 2U;
volatile uint64_t t73 = 22306992279530LLU;
static volatile uint16_t x4810 = 2929U;
static uint16_t x4812 = 0U;
int32_t x4845 = INT32_MIN;
uint8_t x4847 = 6U;
uint16_t x4881 = 1U;
volatile int8_t x4883 = 9;
uint32_t t77 = 3U;
volatile int64_t t78 = 1513408282LL;
int16_t x5027 = INT16_MIN;
uint16_t x5033 = 190U;
static int16_t x5205 = 13;
uint16_t x5208 = 2U;
uint16_t x5282 = 4U;
volatile int32_t x5284 = 1;
int64_t x5351 = -1LL;
static volatile int64_t t86 = 396LL;
int32_t x5371 = 82310304;
uint64_t x5670 = 3016721671LLU;
volatile uint64_t t88 = 224550LLU;
volatile int32_t x5703 = -1;
int16_t x5794 = INT16_MAX;
uint32_t x5979 = 118U;
volatile int64_t t94 = 32588277202930LL;
uint64_t x6011 = UINT64_MAX;
volatile int8_t x6045 = INT8_MIN;
int16_t x6083 = -1;
uint64_t x6196 = 9LLU;


void f0(void) {
	int8_t x273 = -1;
	static int64_t x276 = 1LL;
	volatile uint64_t t0 = 167544699918LLU;

	t0 = (x273%((x274+x275)>>x276));

	if (t0 != 188819LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x373 = -477955LL;
	int16_t x374 = INT16_MIN;
	uint16_t x375 = UINT16_MAX;
	volatile uint16_t x376 = 5U;
	int64_t t1 = 24LL;

	t1 = (x373%((x374+x375)>>x376));

	if (t1 != -214LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x449 = INT16_MIN;
	uint64_t x450 = UINT64_MAX;
	int32_t x451 = 1241580;
	uint64_t t2 = 5LLU;

	t2 = (x449%((x450+x451)>>x452));

	if (t2 != 58166LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x493 = -1;
	volatile uint64_t x494 = 22LLU;
	volatile int8_t x495 = INT8_MIN;
	static uint64_t t3 = 107682034612682625LLU;

	t3 = (x493%((x494+x495)>>x496));

	if (t3 != 127LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint8_t x538 = UINT8_MAX;
	volatile int32_t x539 = 1184121;
	int16_t x540 = 3;

	t4 = (x537%((x538+x539)>>x540));

	if (t4 != 84193LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x645 = -1;
	uint64_t x646 = 1980043738LLU;
	int64_t x647 = INT64_MIN;
	volatile uint8_t x648 = 2U;

	t5 = (x645%((x646+x647)>>x648));

	if (t5 != 2305843005748617413LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x666 = UINT64_MAX;
	static int8_t x667 = INT8_MAX;
	uint32_t x668 = 5U;
	volatile uint64_t t6 = 1536863767LLU;

	t6 = (x665%((x666+x667)>>x668));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x782 = 2U;
	volatile int16_t x783 = 15;
	uint8_t x784 = 0U;
	int32_t t7 = -994073194;

	t7 = (x781%((x782+x783)>>x784));

	if (t7 != 11) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x825 = -1LL;
	uint32_t x826 = 1298U;
	int16_t x827 = 0;
	volatile int64_t t8 = -17001227784210LL;

	t8 = (x825%((x826+x827)>>x828));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x833 = 2470178LL;
	int64_t x834 = -1LL;
	uint16_t x836 = 5U;
	volatile int64_t t9 = -1111762051426626489LL;

	t9 = (x833%((x834+x835)>>x836));

	if (t9 != 1496LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x921 = INT16_MIN;
	uint64_t x922 = 64010LLU;
	static int16_t x923 = -2;
	uint8_t x924 = 1U;
	uint64_t t10 = 626514860533388247LLU;

	t10 = (x921%((x922+x923)>>x924));

	if (t10 != 1016LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x945 = 51U;
	uint32_t x946 = 27236649U;
	uint8_t x947 = 60U;
	volatile int8_t x948 = 3;
	volatile uint32_t t11 = 13322776U;

	t11 = (x945%((x946+x947)>>x948));

	if (t11 != 51U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x1065 = INT16_MIN;
	uint32_t x1068 = 1U;
	volatile uint64_t t12 = 95LLU;

	t12 = (x1065%((x1066+x1067)>>x1068));

	if (t12 != 9223372036854743204LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x1102 = INT64_MAX;
	static uint64_t x1103 = 1301257720827172960LLU;
	int8_t x1104 = 0;
	volatile uint64_t t13 = 270LLU;

	t13 = (x1101%((x1102+x1103)>>x1104));

	if (t13 != 309006LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x1145 = 21;
	volatile int8_t x1148 = 34;
	uint64_t t14 = 136646953LLU;

	t14 = (x1145%((x1146+x1147)>>x1148));

	if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x1351 = 60U;
	volatile uint16_t x1352 = 1U;
	volatile int64_t t15 = 2015670097616585669LL;

	t15 = (x1349%((x1350+x1351)>>x1352));

	if (t15 != -3LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1473 = INT8_MIN;
	int8_t x1474 = INT8_MIN;
	uint32_t x1475 = 225473766U;
	static volatile int16_t x1476 = 8;
	uint32_t t16 = 85387190U;

	t16 = (x1473%((x1474+x1475)>>x1476));

	if (t16 != 400912U) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x1609 = UINT16_MAX;
	volatile int8_t x1610 = -2;
	uint64_t x1611 = 26LLU;
	uint32_t x1612 = 2U;
	uint64_t t17 = 980282379141LLU;

	t17 = (x1609%((x1610+x1611)>>x1612));

	if (t17 != 3LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x1638 = 1567;
	static int8_t x1639 = -2;
	uint32_t x1640 = 1U;
	volatile uint32_t t18 = 3U;

	t18 = (x1637%((x1638+x1639)>>x1640));

	if (t18 != 54U) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1710 = 1037622LLU;
	int32_t x1711 = -13;
	volatile int8_t x1712 = 1;
	volatile uint64_t t19 = 184415LLU;

	t19 = (x1709%((x1710+x1711)>>x1712));

	if (t19 != 442253LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x1717 = -1LL;
	volatile uint64_t x1718 = 4190818068325LLU;
	int16_t x1719 = -1;
	int8_t x1720 = 4;
	uint64_t t20 = 3032LLU;

	t20 = (x1717%((x1718+x1719)>>x1720));

	if (t20 != 14073453825LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x1733 = 1655U;
	int16_t x1734 = 1;
	static uint32_t x1735 = 1566794U;
	uint8_t x1736 = 20U;

	t21 = (x1733%((x1734+x1735)>>x1736));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1934 = UINT64_MAX;
	int32_t x1935 = -1;
	volatile uint64_t t22 = 15528902006540LLU;

	t22 = (x1933%((x1934+x1935)>>x1936));

	if (t22 != 4611686018424814934LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1942 = 394U;
	int16_t x1944 = 7;
	volatile uint32_t t23 = 8U;

	t23 = (x1941%((x1942+x1943)>>x1944));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x2121 = 116;
	int8_t x2122 = -1;
	static uint8_t x2124 = 0U;
	uint32_t t24 = 106894U;

	t24 = (x2121%((x2122+x2123)>>x2124));

	if (t24 != 116U) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x2141 = UINT8_MAX;
	static uint16_t x2142 = 917U;
	int8_t x2143 = INT8_MAX;
	volatile int8_t x2144 = 2;
	int32_t t25 = 0;

	t25 = (x2141%((x2142+x2143)>>x2144));

	if (t25 != 255) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x2173 = 62U;
	volatile int8_t x2174 = -1;
	volatile uint32_t x2175 = UINT32_MAX;
	int32_t x2176 = 0;
	uint32_t t26 = 1826981U;

	t26 = (x2173%((x2174+x2175)>>x2176));

	if (t26 != 62U) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x2249 = 3438158128529049273LLU;
	uint64_t x2250 = 1703531527936566207LLU;
	uint64_t x2251 = 10187275761914LLU;
	uint16_t x2252 = 15U;
	volatile uint64_t t27 = 1430356720277LLU;

	t27 = (x2249%((x2250+x2251)>>x2252));

	if (t27 != 37881576677269LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x2289 = INT64_MAX;
	static uint32_t x2290 = UINT32_MAX;
	static volatile int16_t x2291 = -303;
	uint8_t x2292 = 1U;

	t28 = (x2289%((x2290+x2291)>>x2292));

	if (t28 != 46207LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x2293 = INT8_MAX;
	volatile uint16_t x2294 = 254U;
	int16_t x2295 = 2;
	static volatile uint16_t x2296 = 3U;
	volatile int32_t t29 = 155;

	t29 = (x2293%((x2294+x2295)>>x2296));

	if (t29 != 31) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x2341 = -1;
	int16_t x2342 = 2;
	int8_t x2344 = 1;
	volatile int32_t t30 = 26;

	t30 = (x2341%((x2342+x2343)>>x2344));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x2413 = 19980U;
	uint16_t x2414 = UINT16_MAX;
	volatile uint64_t x2415 = 22335997389306009LLU;
	uint64_t t31 = 26175LLU;

	t31 = (x2413%((x2414+x2415)>>x2416));

	if (t31 != 19980LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x2449 = INT8_MIN;
	uint64_t x2451 = 1249934876LLU;
	uint8_t x2452 = 0U;

	t32 = (x2449%((x2450+x2451)>>x2452));

	if (t32 != 75528488LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x2569 = -1;
	volatile uint8_t x2570 = UINT8_MAX;
	static int32_t x2572 = 8;
	int64_t t33 = 30200LL;

	t33 = (x2569%((x2570+x2571)>>x2572));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x2621 = INT32_MIN;
	int32_t x2622 = INT32_MIN;
	static uint32_t x2623 = UINT32_MAX;
	int64_t x2624 = 4LL;
	volatile uint32_t t34 = 3394077U;

	t34 = (x2621%((x2622+x2623)>>x2624));

	if (t34 != 16U) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x2641 = 8422491083364LLU;
	uint64_t x2642 = 0LLU;
	int32_t x2643 = INT32_MAX;
	uint64_t t35 = 28796806811077199LLU;

	t35 = (x2641%((x2642+x2643)>>x2644));

	if (t35 != 60219830LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x2761 = 5;
	static int8_t x2764 = 3;
	volatile uint64_t t36 = 75LLU;

	t36 = (x2761%((x2762+x2763)>>x2764));

	if (t36 != 5LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x2797 = 351;
	int8_t x2798 = -2;
	volatile uint8_t x2799 = 25U;
	uint64_t x2800 = 4LLU;

	t37 = (x2797%((x2798+x2799)>>x2800));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x2885 = -44LL;
	int16_t x2887 = INT16_MAX;
	int8_t x2888 = 1;

	t38 = (x2885%((x2886+x2887)>>x2888));

	if (t38 != -44LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x2929 = UINT8_MAX;
	uint32_t x2930 = 2307U;
	volatile int32_t x2931 = INT32_MAX;
	static volatile uint32_t t39 = 58808U;

	t39 = (x2929%((x2930+x2931)>>x2932));

	if (t39 != 255U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x2933 = 0U;
	uint16_t x2934 = UINT16_MAX;
	static int8_t x2935 = INT8_MIN;
	int32_t x2936 = 2;
	volatile int32_t t40 = -255085;

	t40 = (x2933%((x2934+x2935)>>x2936));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x2941 = INT64_MIN;
	uint32_t x2943 = 14374266U;
	int16_t x2944 = 0;

	t41 = (x2941%((x2942+x2943)>>x2944));

	if (t41 != -7460896LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x2946 = 224035125LLU;
	int16_t x2947 = INT16_MIN;
	static uint16_t x2948 = 3U;

	t42 = (x2945%((x2946+x2947)>>x2948));

	if (t42 != 373106LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x2961 = INT32_MIN;
	uint8_t x2962 = 32U;
	int16_t x2963 = INT16_MAX;
	uint8_t x2964 = 2U;

	t43 = (x2961%((x2962+x2963)>>x2964));

	if (t43 != -1568) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x3138 = INT8_MIN;
	volatile uint64_t x3139 = UINT64_MAX;
	volatile int8_t x3140 = 0;
	volatile uint64_t t44 = 1716LLU;

	t44 = (x3137%((x3138+x3139)>>x3140));

	if (t44 != 127LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x3153 = UINT64_MAX;
	int16_t x3154 = INT16_MIN;
	int32_t x3155 = INT32_MAX;
	uint8_t x3156 = 0U;
	volatile uint64_t t45 = 89317780990LLU;

	t45 = (x3153%((x3154+x3155)>>x3156));

	if (t45 != 327685LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x3185 = INT32_MIN;
	uint16_t x3188 = 0U;

	t46 = (x3185%((x3186+x3187)>>x3188));

	if (t46 != 2147483648U) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x3217 = 1051LLU;
	uint16_t x3218 = 7U;
	int16_t x3219 = INT16_MAX;
	static uint16_t x3220 = 3U;
	volatile uint64_t t47 = 131516LLU;

	t47 = (x3217%((x3218+x3219)>>x3220));

	if (t47 != 1051LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x3246 = UINT64_MAX;
	int32_t x3248 = 2;
	volatile uint64_t t48 = 0LLU;

	t48 = (x3245%((x3246+x3247)>>x3248));

	if (t48 != 127LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x3385 = -1;
	volatile uint32_t x3386 = 0U;
	int8_t x3387 = INT8_MIN;
	int16_t x3388 = 18;
	uint32_t t49 = 1032543600U;

	t49 = (x3385%((x3386+x3387)>>x3388));

	if (t49 != 15U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x3397 = 615LL;
	int8_t x3399 = -1;
	uint8_t x3400 = 1U;

	t50 = (x3397%((x3398+x3399)>>x3400));

	if (t50 != 27LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x3410 = UINT64_MAX;
	int64_t x3411 = INT64_MIN;
	int8_t x3412 = 0;
	volatile uint64_t t51 = 2016207384273LLU;

	t51 = (x3409%((x3410+x3411)>>x3412));

	if (t51 != 65535LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x3421 = 246LL;
	static uint8_t x3424 = 9U;
	int64_t t52 = 3319118454728295LL;

	t52 = (x3421%((x3422+x3423)>>x3424));

	if (t52 != 6LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x3573 = INT16_MAX;
	uint32_t x3574 = UINT32_MAX;
	volatile uint8_t x3576 = 2U;
	static volatile uint32_t t53 = 12998008U;

	t53 = (x3573%((x3574+x3575)>>x3576));

	if (t53 != 1U) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x3605 = INT16_MIN;
	volatile uint32_t x3607 = UINT32_MAX;
	static uint8_t x3608 = 1U;
	int64_t t54 = 1372815LL;

	t54 = (x3605%((x3606+x3607)>>x3608));

	if (t54 != -32768LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x3621 = INT32_MAX;
	volatile int8_t x3623 = INT8_MIN;
	static uint8_t x3624 = 18U;
	volatile uint64_t t55 = 541132189682620132LLU;

	t55 = (x3621%((x3622+x3623)>>x3624));

	if (t55 != 2147483647LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x3693 = -1LL;
	static uint32_t x3694 = UINT32_MAX;
	uint16_t x3695 = 2800U;
	int16_t x3696 = 0;
	volatile int64_t t56 = -120242LL;

	t56 = (x3693%((x3694+x3695)>>x3696));

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x3697 = INT8_MAX;
	uint64_t x3698 = UINT64_MAX;
	volatile uint64_t t57 = 139319812558LLU;

	t57 = (x3697%((x3698+x3699)>>x3700));

	if (t57 != 127LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x3713 = 91635928522414712LLU;
	uint16_t x3714 = 50U;
	int8_t x3715 = 1;
	uint8_t x3716 = 1U;
	volatile uint64_t t58 = 109LLU;

	t58 = (x3713%((x3714+x3715)>>x3716));

	if (t58 != 12LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x3765 = INT8_MAX;
	uint8_t x3766 = UINT8_MAX;
	static int16_t x3767 = 35;
	uint8_t x3768 = 2U;
	int32_t t59 = 66596299;

	t59 = (x3765%((x3766+x3767)>>x3768));

	if (t59 != 55) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x3805 = -356802205148073LL;
	uint16_t x3806 = UINT16_MAX;
	int32_t x3807 = -1;
	volatile int64_t t60 = -610105174082919LL;

	t60 = (x3805%((x3806+x3807)>>x3808));

	if (t60 != -28447LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x3829 = INT16_MIN;
	uint8_t x3830 = UINT8_MAX;
	static int16_t x3831 = INT16_MAX;
	uint32_t x3832 = 9U;
	int32_t t61 = 72131266;

	t61 = (x3829%((x3830+x3831)>>x3832));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x3853 = 3U;
	int8_t x3854 = 0;
	int32_t x3855 = INT32_MAX;
	uint16_t x3856 = 3U;
	uint32_t t62 = 25083U;

	t62 = (x3853%((x3854+x3855)>>x3856));

	if (t62 != 3U) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x3877 = 544U;
	int16_t x3878 = 580;
	static volatile uint16_t x3879 = 5U;
	static uint8_t x3880 = 9U;
	volatile int32_t t63 = 1;

	t63 = (x3877%((x3878+x3879)>>x3880));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x4042 = 3325660759547LLU;
	volatile int64_t x4043 = INT64_MIN;
	static volatile int8_t x4044 = 15;
	volatile uint64_t t64 = 2494116208222LLU;

	t64 = (x4041%((x4042+x4043)>>x4044));

	if (t64 != 405LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x4053 = UINT32_MAX;
	uint8_t x4054 = 0U;
	static int8_t x4055 = INT8_MAX;
	volatile uint32_t t65 = 247520U;

	t65 = (x4053%((x4054+x4055)>>x4056));

	if (t65 != 15U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x4074 = -156;
	int64_t x4075 = INT64_MAX;
	static volatile int16_t x4076 = 0;
	static int64_t t66 = 739934237LL;

	t66 = (x4073%((x4074+x4075)>>x4076));

	if (t66 != -128LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x4193 = INT16_MIN;
	int16_t x4194 = INT16_MAX;
	volatile uint32_t x4195 = 1008U;
	uint8_t x4196 = 0U;
	volatile uint32_t t67 = 367U;

	t67 = (x4193%((x4194+x4195)>>x4196));

	if (t67 != 4203U) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x4217 = 9251154U;
	uint32_t x4218 = 97U;
	static volatile uint32_t x4219 = UINT32_MAX;
	volatile uint8_t x4220 = 0U;

	t68 = (x4217%((x4218+x4219)>>x4220));

	if (t68 != 18U) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x4406 = 8U;
	uint8_t x4407 = UINT8_MAX;
	volatile int8_t x4408 = 2;
	static volatile int32_t t69 = 174;

	t69 = (x4405%((x4406+x4407)>>x4408));

	if (t69 != 62) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x4466 = 1979026;
	volatile uint32_t x4467 = 10462U;
	volatile uint8_t x4468 = 0U;
	volatile uint32_t t70 = 21U;

	t70 = (x4465%((x4466+x4467)>>x4468));

	if (t70 != 67U) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x4473 = 4U;
	int32_t x4474 = INT32_MAX;
	uint16_t x4476 = 1U;
	uint64_t t71 = 1099LLU;

	t71 = (x4473%((x4474+x4475)>>x4476));

	if (t71 != 4LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x4553 = INT32_MIN;
	uint64_t x4554 = UINT64_MAX;
	uint64_t x4555 = 0LLU;
	static volatile uint16_t x4556 = 1U;
	volatile uint64_t t72 = 131456420993579272LLU;

	t72 = (x4553%((x4554+x4555)>>x4556));

	if (t72 != 9223372034707292161LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x4773 = 59U;
	uint64_t x4774 = UINT64_MAX;

	t73 = (x4773%((x4774+x4775)>>x4776));

	if (t73 != 59LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x4809 = 67784;
	uint32_t x4811 = 63014119U;
	uint32_t t74 = 13037U;

	t74 = (x4809%((x4810+x4811)>>x4812));

	if (t74 != 67784U) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x4825 = 1937154028155154153LLU;
	uint8_t x4826 = UINT8_MAX;
	uint64_t x4827 = 3971501LLU;
	uint32_t x4828 = 1U;
	volatile uint64_t t75 = 4LLU;

	t75 = (x4825%((x4826+x4827)>>x4828));

	if (t75 != 730681LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x4846 = 8;
	volatile int8_t x4848 = 1;
	int32_t t76 = 0;

	t76 = (x4845%((x4846+x4847)>>x4848));

	if (t76 != -2) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x4882 = 124007U;
	uint8_t x4884 = 7U;

	t77 = (x4881%((x4882+x4883)>>x4884));

	if (t77 != 1U) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x4925 = -1LL;
	volatile int32_t x4926 = -1;
	static uint32_t x4927 = 3U;
	static uint16_t x4928 = 1U;

	t78 = (x4925%((x4926+x4927)>>x4928));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x5013 = 31U;
	uint32_t x5014 = 166U;
	uint8_t x5015 = 12U;
	static int8_t x5016 = 1;
	static uint32_t t79 = 4309843U;

	t79 = (x5013%((x5014+x5015)>>x5016));

	if (t79 != 31U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x5025 = 902191LLU;
	int64_t x5026 = INT64_MAX;
	int16_t x5028 = 13;
	volatile uint64_t t80 = 6875334010LLU;

	t80 = (x5025%((x5026+x5027)>>x5028));

	if (t80 != 902191LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x5034 = -23432367;
	int64_t x5035 = INT64_MAX;
	int8_t x5036 = 40;
	int64_t t81 = -18LL;

	t81 = (x5033%((x5034+x5035)>>x5036));

	if (t81 != 190LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x5073 = INT64_MAX;
	volatile int16_t x5074 = INT16_MAX;
	static int8_t x5075 = INT8_MIN;
	uint8_t x5076 = 5U;
	static int64_t t82 = 96184LL;

	t82 = (x5073%((x5074+x5075)>>x5076));

	if (t82 != 681LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x5206 = INT16_MIN;
	uint32_t x5207 = 1879673U;
	volatile uint32_t t83 = 26687U;

	t83 = (x5205%((x5206+x5207)>>x5208));

	if (t83 != 13U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x5281 = -1;
	static uint8_t x5283 = UINT8_MAX;
	static volatile int32_t t84 = -249784395;

	t84 = (x5281%((x5282+x5283)>>x5284));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x5293 = INT64_MAX;
	static int8_t x5294 = INT8_MAX;
	uint64_t x5295 = UINT64_MAX;
	volatile int16_t x5296 = 1;
	uint64_t t85 = 42683108663999LLU;

	t85 = (x5293%((x5294+x5295)>>x5296));

	if (t85 != 7LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x5349 = -1;
	uint16_t x5350 = UINT16_MAX;
	volatile uint16_t x5352 = 0U;

	t86 = (x5349%((x5350+x5351)>>x5352));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x5369 = -300477;
	int16_t x5370 = INT16_MAX;
	int16_t x5372 = 3;
	static int32_t t87 = -36378235;

	t87 = (x5369%((x5370+x5371)>>x5372));

	if (t87 != -300477) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x5669 = INT16_MAX;
	uint32_t x5671 = 17513U;
	uint16_t x5672 = 4U;

	t88 = (x5669%((x5670+x5671)>>x5672));

	if (t88 != 32767LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x5701 = -1;
	int16_t x5702 = INT16_MAX;
	uint8_t x5704 = 4U;
	volatile int32_t t89 = 28;

	t89 = (x5701%((x5702+x5703)>>x5704));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x5761 = UINT8_MAX;
	uint32_t x5762 = UINT32_MAX;
	int8_t x5763 = -4;
	uint64_t x5764 = 26LLU;
	uint32_t t90 = 3175U;

	t90 = (x5761%((x5762+x5763)>>x5764));

	if (t90 != 3U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x5793 = 7;
	volatile int8_t x5795 = 2;
	static uint16_t x5796 = 15U;
	volatile int32_t t91 = -385;

	t91 = (x5793%((x5794+x5795)>>x5796));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x5805 = INT8_MAX;
	int8_t x5806 = INT8_MIN;
	int32_t x5807 = INT32_MAX;
	int8_t x5808 = 1;
	volatile int32_t t92 = 3514;

	t92 = (x5805%((x5806+x5807)>>x5808));

	if (t92 != 127) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x5873 = 29758U;
	static int8_t x5874 = 0;
	volatile uint32_t x5875 = UINT32_MAX;
	uint8_t x5876 = 21U;
	volatile uint32_t t93 = 215014826U;

	t93 = (x5873%((x5874+x5875)>>x5876));

	if (t93 != 1100U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x5977 = 4243325575835858LL;
	static uint16_t x5978 = 174U;
	volatile int16_t x5980 = 0;

	t94 = (x5977%((x5978+x5979)>>x5980));

	if (t94 != 134LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x6009 = INT8_MAX;
	uint32_t x6010 = UINT32_MAX;
	volatile uint8_t x6012 = 9U;
	uint64_t t95 = 215890676315LLU;

	t95 = (x6009%((x6010+x6011)>>x6012));

	if (t95 != 127LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x6046 = INT8_MIN;
	uint16_t x6047 = UINT16_MAX;
	uint8_t x6048 = 8U;
	static volatile int32_t t96 = 2974;

	t96 = (x6045%((x6046+x6047)>>x6048));

	if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x6081 = INT32_MIN;
	int16_t x6082 = INT16_MAX;
	static uint16_t x6084 = 10U;
	int32_t t97 = -252921;

	t97 = (x6081%((x6082+x6083)>>x6084));

	if (t97 != -2) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x6193 = 42;
	uint32_t x6194 = 497961134U;
	int16_t x6195 = INT16_MIN;
	uint32_t t98 = 411005286U;

	t98 = (x6193%((x6194+x6195)>>x6196));

	if (t98 != 42U) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x6205 = UINT64_MAX;
	static int16_t x6206 = 1;
	uint32_t x6207 = 374598U;
	uint32_t x6208 = 14U;
	volatile uint64_t t99 = 1078407LLU;

	t99 = (x6205%((x6206+x6207)>>x6208));

	if (t99 != 15LLU) { NG(); } else { ; }
	
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


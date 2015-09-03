#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = INT64_MAX;
static volatile int32_t t0 = 769;
int32_t x50 = INT32_MAX;
volatile int64_t x55 = 786835322252867256LL;
int64_t t2 = 0LL;
static uint8_t x164 = 2U;
static uint32_t t4 = 1U;
static volatile uint64_t x281 = UINT64_MAX;
volatile uint64_t t6 = 1875649776LLU;
int8_t x374 = -1;
static uint32_t t9 = 394387612U;
static int8_t x406 = 5;
uint8_t x495 = 0U;
uint8_t x518 = UINT8_MAX;
static int32_t t16 = -51;
uint8_t x676 = 1U;
volatile uint64_t x913 = 17949580896490LLU;
int8_t x916 = 0;
volatile int64_t x997 = 77049114963007LL;
static int32_t x1078 = 1;
uint16_t x1080 = 5U;
int32_t t22 = -8;
uint64_t x1222 = 19LLU;
int8_t x1270 = INT8_MIN;
static volatile int16_t x1337 = INT16_MIN;
static int8_t x1338 = 1;
int32_t t26 = -1;
volatile uint8_t x1451 = UINT8_MAX;
static int8_t x1588 = 0;
volatile int32_t t28 = 67575;
volatile int32_t t29 = -18885991;
static uint8_t x1676 = 2U;
uint32_t x1712 = 6U;
int64_t x1878 = -1LL;
volatile int32_t t34 = 1648;
volatile int16_t x1918 = INT16_MIN;
uint16_t x1919 = UINT16_MAX;
uint16_t x1920 = 4U;
int32_t t35 = -4329369;
static int64_t x1954 = INT64_MIN;
uint16_t x1955 = UINT16_MAX;
uint16_t x2065 = 43U;
uint32_t t37 = 1332505898U;
volatile int8_t x2195 = INT8_MAX;
int32_t x2206 = -118738;
int16_t x2261 = INT16_MIN;
int8_t x2285 = INT8_MIN;
static uint64_t t44 = 49847425451888853LLU;
uint64_t x2319 = 3LLU;
uint64_t t45 = 2378917LLU;
uint8_t x2525 = UINT8_MAX;
uint16_t x2712 = 1U;
int16_t x2794 = -1;
uint16_t x2796 = 3U;
uint32_t x2797 = 2U;
int32_t t51 = 6;
volatile int8_t x2825 = 0;
static uint8_t x2905 = 1U;
uint8_t x2908 = 2U;
uint32_t t54 = 7229838U;
int8_t x2946 = INT8_MIN;
int16_t x2948 = 0;
static int32_t t55 = 2017994;
int16_t x3172 = 0;
int32_t x3193 = -1;
uint32_t x3196 = 3U;
int32_t t58 = -6;
uint8_t x3288 = 27U;
int32_t x3591 = 6238368;
int8_t x3609 = INT8_MIN;
uint32_t x3685 = 492470U;
int32_t t65 = -19;
uint64_t x3889 = 13635911LLU;
uint64_t x3890 = 1241940475210LLU;
uint8_t x3892 = 6U;
static int32_t t67 = 60850;
int32_t x4179 = 273734;
volatile int32_t t68 = -104;
uint8_t x4204 = 9U;
int64_t x4285 = INT64_MAX;
static uint16_t x4287 = UINT16_MAX;
volatile int64_t x4313 = INT64_MIN;
volatile uint32_t t71 = 1521U;
uint32_t x4321 = 111622680U;
static uint8_t x4324 = 26U;
int16_t x4513 = INT16_MIN;
static uint32_t t74 = 6268U;
static volatile int32_t t76 = -137055590;
volatile int8_t x4604 = 4;
volatile uint64_t t77 = 7104200655LLU;
static uint16_t x4655 = 4572U;
volatile int32_t t79 = -3;
static int8_t x4705 = -1;
int32_t t82 = -350497525;
uint8_t x4808 = 6U;
volatile uint32_t t84 = 376U;
int8_t x4889 = INT8_MIN;
uint32_t x4891 = 100U;
volatile uint32_t x5033 = 133U;
int64_t x5105 = 1382144727125954260LL;
uint32_t x5107 = 13U;
static volatile int16_t x5285 = 3502;
static int64_t x5354 = INT64_MIN;
uint16_t x5416 = 18U;
volatile uint32_t t93 = 1856034274U;
uint8_t x5519 = UINT8_MAX;
volatile int32_t t94 = -84;
uint32_t x5581 = 625U;
int8_t x5582 = 1;
static volatile int8_t x5659 = INT8_MAX;
uint32_t t97 = 0U;
int8_t x5790 = INT8_MAX;


void f0(void) {
	volatile uint8_t x1 = 21U;
	uint8_t x3 = UINT8_MAX;
	uint64_t x4 = 17LLU;

	t0 = ((x1==x2)*(x3<<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int16_t x49 = INT16_MIN;
	uint32_t x51 = UINT32_MAX;
	int8_t x52 = 0;
	static volatile uint32_t t1 = 5U;

	t1 = ((x49==x50)*(x51<<x52));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x53 = INT64_MAX;
	static uint16_t x54 = 257U;
	volatile uint16_t x56 = 1U;

	t2 = ((x53==x54)*(x55<<x56));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x77 = INT64_MIN;
	uint16_t x78 = UINT16_MAX;
	static volatile int16_t x79 = INT16_MAX;
	static uint64_t x80 = 0LLU;
	int32_t t3 = 4309268;

	t3 = ((x77==x78)*(x79<<x80));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x161 = 1158;
	static volatile uint64_t x162 = UINT64_MAX;
	uint32_t x163 = 46519216U;

	t4 = ((x161==x162)*(x163<<x164));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x197 = INT8_MIN;
	uint64_t x198 = 2090104LLU;
	static volatile int32_t x199 = INT32_MAX;
	static int8_t x200 = 0;
	volatile int32_t t5 = -531800940;

	t5 = ((x197==x198)*(x199<<x200));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x282 = -1;
	uint64_t x283 = 70043576908669770LLU;
	uint16_t x284 = 7U;

	t6 = ((x281==x282)*(x283<<x284));

	if (t6 != 8965577844309730560LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x321 = INT8_MAX;
	static int16_t x322 = -1;
	volatile uint64_t x323 = UINT64_MAX;
	int8_t x324 = 5;
	volatile uint64_t t7 = 686781963443892478LLU;

	t7 = ((x321==x322)*(x323<<x324));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x337 = -1;
	int32_t x338 = 24989481;
	volatile uint64_t x339 = UINT64_MAX;
	uint8_t x340 = 2U;
	uint64_t t8 = 185983617967613810LLU;

	t8 = ((x337==x338)*(x339<<x340));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x373 = INT32_MIN;
	uint32_t x375 = UINT32_MAX;
	uint16_t x376 = 1U;

	t9 = ((x373==x374)*(x375<<x376));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x405 = -1LL;
	static uint16_t x407 = 127U;
	uint16_t x408 = 1U;
	volatile int32_t t10 = -4;

	t10 = ((x405==x406)*(x407<<x408));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x485 = 14049612270010LL;
	int8_t x486 = 13;
	static volatile int64_t x487 = INT64_MAX;
	uint8_t x488 = 0U;
	volatile int64_t t11 = -152364089LL;

	t11 = ((x485==x486)*(x487<<x488));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x493 = INT64_MIN;
	volatile int32_t x494 = INT32_MIN;
	uint16_t x496 = 0U;
	static int32_t t12 = 25058;

	t12 = ((x493==x494)*(x495<<x496));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x517 = 52449103LLU;
	volatile uint8_t x519 = UINT8_MAX;
	uint8_t x520 = 2U;
	int32_t t13 = -1;

	t13 = ((x517==x518)*(x519<<x520));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x553 = -1;
	int32_t x554 = -632;
	volatile int8_t x555 = 7;
	volatile int32_t x556 = 0;
	static volatile int32_t t14 = 1;

	t14 = ((x553==x554)*(x555<<x556));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x577 = 18445U;
	uint64_t x578 = UINT64_MAX;
	uint16_t x579 = 1591U;
	int8_t x580 = 0;
	volatile int32_t t15 = 9534440;

	t15 = ((x577==x578)*(x579<<x580));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x609 = UINT64_MAX;
	volatile int32_t x610 = -1;
	static uint8_t x611 = UINT8_MAX;
	static int8_t x612 = 6;

	t16 = ((x609==x610)*(x611<<x612));

	if (t16 != 16320) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x673 = 1044215;
	volatile int64_t x674 = -1LL;
	static int64_t x675 = 11721735384LL;
	int64_t t17 = 2312520576LL;

	t17 = ((x673==x674)*(x675<<x676));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x785 = 15175;
	static int8_t x786 = -1;
	static int32_t x787 = INT32_MAX;
	static uint8_t x788 = 0U;
	volatile int32_t t18 = -17971;

	t18 = ((x785==x786)*(x787<<x788));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x914 = INT8_MIN;
	static int16_t x915 = INT16_MAX;
	int32_t t19 = 3799;

	t19 = ((x913==x914)*(x915<<x916));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x998 = -27;
	uint8_t x999 = UINT8_MAX;
	static int32_t x1000 = 6;
	volatile int32_t t20 = -112;

	t20 = ((x997==x998)*(x999<<x1000));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x1049 = INT8_MAX;
	uint8_t x1050 = 1U;
	uint32_t x1051 = 12324U;
	int8_t x1052 = 1;
	volatile uint32_t t21 = 23U;

	t21 = ((x1049==x1050)*(x1051<<x1052));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x1077 = 20271328;
	int32_t x1079 = 636;

	t22 = ((x1077==x1078)*(x1079<<x1080));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1221 = UINT16_MAX;
	uint64_t x1223 = 69148392800532LLU;
	uint8_t x1224 = 3U;
	volatile uint64_t t23 = 347909761118094LLU;

	t23 = ((x1221==x1222)*(x1223<<x1224));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1269 = INT64_MIN;
	uint64_t x1271 = 1221601925LLU;
	uint8_t x1272 = 1U;
	volatile uint64_t t24 = 6656757729559429320LLU;

	t24 = ((x1269==x1270)*(x1271<<x1272));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1329 = INT8_MAX;
	static volatile int64_t x1330 = INT64_MIN;
	uint32_t x1331 = 425183U;
	int8_t x1332 = 0;
	uint32_t t25 = 2230U;

	t25 = ((x1329==x1330)*(x1331<<x1332));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1339 = 0U;
	int8_t x1340 = 1;

	t26 = ((x1337==x1338)*(x1339<<x1340));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1449 = 170U;
	static int64_t x1450 = 255260452926606468LL;
	uint8_t x1452 = 1U;
	static volatile int32_t t27 = 1;

	t27 = ((x1449==x1450)*(x1451<<x1452));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x1585 = 5360LL;
	static int8_t x1586 = INT8_MIN;
	volatile uint8_t x1587 = 26U;

	t28 = ((x1585==x1586)*(x1587<<x1588));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x1601 = 9U;
	static int16_t x1602 = -25;
	int16_t x1603 = 8876;
	static uint8_t x1604 = 5U;

	t29 = ((x1601==x1602)*(x1603<<x1604));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1673 = INT64_MAX;
	int64_t x1674 = INT64_MAX;
	uint64_t x1675 = 24450832154089806LLU;
	volatile uint64_t t30 = 42248013995926LLU;

	t30 = ((x1673==x1674)*(x1675<<x1676));

	if (t30 != 97803328616359224LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x1709 = 0U;
	int64_t x1710 = -44702512710LL;
	volatile uint16_t x1711 = 1659U;
	int32_t t31 = -169212525;

	t31 = ((x1709==x1710)*(x1711<<x1712));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1745 = 30889U;
	uint32_t x1746 = UINT32_MAX;
	int8_t x1747 = INT8_MAX;
	int16_t x1748 = 13;
	int32_t t32 = 495142347;

	t32 = ((x1745==x1746)*(x1747<<x1748));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1877 = INT32_MIN;
	volatile uint64_t x1879 = UINT64_MAX;
	int32_t x1880 = 11;
	volatile uint64_t t33 = 796765086497LLU;

	t33 = ((x1877==x1878)*(x1879<<x1880));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x1913 = 125085799LLU;
	volatile uint64_t x1914 = 30704792101872LLU;
	int32_t x1915 = 122575;
	int8_t x1916 = 6;

	t34 = ((x1913==x1914)*(x1915<<x1916));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x1917 = UINT16_MAX;

	t35 = ((x1917==x1918)*(x1919<<x1920));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x1953 = INT16_MIN;
	int8_t x1956 = 4;
	static int32_t t36 = 55796535;

	t36 = ((x1953==x1954)*(x1955<<x1956));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x2066 = -36;
	volatile uint32_t x2067 = UINT32_MAX;
	uint8_t x2068 = 1U;

	t37 = ((x2065==x2066)*(x2067<<x2068));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x2073 = INT64_MIN;
	int16_t x2074 = -1;
	int8_t x2075 = 1;
	static int16_t x2076 = 4;
	int32_t t38 = 463199672;

	t38 = ((x2073==x2074)*(x2075<<x2076));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x2153 = INT64_MIN;
	uint64_t x2154 = 336353179812880994LLU;
	static uint64_t x2155 = 3957657279151443LLU;
	uint8_t x2156 = 0U;
	uint64_t t39 = 2773487999191902LLU;

	t39 = ((x2153==x2154)*(x2155<<x2156));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x2193 = 2131U;
	uint64_t x2194 = 24450303837335LLU;
	uint8_t x2196 = 0U;
	static int32_t t40 = -51018422;

	t40 = ((x2193==x2194)*(x2195<<x2196));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x2205 = 184465721U;
	uint16_t x2207 = 2190U;
	uint32_t x2208 = 5U;
	int32_t t41 = -665;

	t41 = ((x2205==x2206)*(x2207<<x2208));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x2221 = INT8_MIN;
	volatile int8_t x2222 = -1;
	volatile int64_t x2223 = 465232715933LL;
	uint16_t x2224 = 11U;
	volatile int64_t t42 = -1496881677192LL;

	t42 = ((x2221==x2222)*(x2223<<x2224));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2262 = 95;
	static volatile uint8_t x2263 = 19U;
	static uint32_t x2264 = 0U;
	static int32_t t43 = -3040651;

	t43 = ((x2261==x2262)*(x2263<<x2264));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x2286 = -12;
	uint64_t x2287 = 7946LLU;
	int8_t x2288 = 63;

	t44 = ((x2285==x2286)*(x2287<<x2288));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2317 = -1;
	uint64_t x2318 = 18596564670444LLU;
	volatile int8_t x2320 = 5;

	t45 = ((x2317==x2318)*(x2319<<x2320));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x2526 = UINT16_MAX;
	int16_t x2527 = INT16_MAX;
	static uint16_t x2528 = 0U;
	volatile int32_t t46 = 3772;

	t46 = ((x2525==x2526)*(x2527<<x2528));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x2529 = INT64_MIN;
	int16_t x2530 = -1;
	int32_t x2531 = 0;
	volatile uint32_t x2532 = 19U;
	int32_t t47 = 10761;

	t47 = ((x2529==x2530)*(x2531<<x2532));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x2709 = 899U;
	int64_t x2710 = INT64_MIN;
	uint8_t x2711 = 50U;
	volatile int32_t t48 = 12680;

	t48 = ((x2709==x2710)*(x2711<<x2712));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x2761 = UINT8_MAX;
	uint8_t x2762 = 4U;
	uint64_t x2763 = UINT64_MAX;
	uint8_t x2764 = 51U;
	volatile uint64_t t49 = 19364LLU;

	t49 = ((x2761==x2762)*(x2763<<x2764));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x2793 = INT8_MAX;
	uint64_t x2795 = 165LLU;
	volatile uint64_t t50 = 185041817805279250LLU;

	t50 = ((x2793==x2794)*(x2795<<x2796));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x2798 = -4;
	static volatile int8_t x2799 = 0;
	uint16_t x2800 = 13U;

	t51 = ((x2797==x2798)*(x2799<<x2800));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x2826 = -362;
	uint32_t x2827 = UINT32_MAX;
	uint16_t x2828 = 31U;
	uint32_t t52 = 132798U;

	t52 = ((x2825==x2826)*(x2827<<x2828));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x2861 = -223;
	static int64_t x2862 = INT64_MIN;
	uint32_t x2863 = 0U;
	uint8_t x2864 = 0U;
	volatile uint32_t t53 = 671018113U;

	t53 = ((x2861==x2862)*(x2863<<x2864));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x2906 = UINT32_MAX;
	uint32_t x2907 = 360U;

	t54 = ((x2905==x2906)*(x2907<<x2908));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x2945 = 3153;
	uint8_t x2947 = 52U;

	t55 = ((x2945==x2946)*(x2947<<x2948));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x2957 = UINT64_MAX;
	static volatile uint64_t x2958 = UINT64_MAX;
	static uint8_t x2959 = 1U;
	volatile uint8_t x2960 = 0U;
	volatile int32_t t56 = -29821;

	t56 = ((x2957==x2958)*(x2959<<x2960));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x3169 = 1930768U;
	int16_t x3170 = INT16_MAX;
	int8_t x3171 = INT8_MAX;
	volatile int32_t t57 = -228;

	t57 = ((x3169==x3170)*(x3171<<x3172));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x3194 = 6U;
	int8_t x3195 = INT8_MAX;

	t58 = ((x3193==x3194)*(x3195<<x3196));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x3261 = UINT32_MAX;
	volatile uint32_t x3262 = 66048696U;
	static int8_t x3263 = 7;
	uint8_t x3264 = 13U;
	int32_t t59 = -931429234;

	t59 = ((x3261==x3262)*(x3263<<x3264));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x3285 = 80LLU;
	int16_t x3286 = -1;
	uint16_t x3287 = 0U;
	volatile int32_t t60 = 101326;

	t60 = ((x3285==x3286)*(x3287<<x3288));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x3501 = 2U;
	uint16_t x3502 = 696U;
	volatile uint64_t x3503 = 54LLU;
	volatile int8_t x3504 = 27;
	uint64_t t61 = 729616727335805264LLU;

	t61 = ((x3501==x3502)*(x3503<<x3504));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x3589 = 167422845LLU;
	int32_t x3590 = INT32_MAX;
	static volatile uint8_t x3592 = 6U;
	volatile int32_t t62 = 122;

	t62 = ((x3589==x3590)*(x3591<<x3592));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x3610 = -1;
	int32_t x3611 = 0;
	uint64_t x3612 = 6LLU;
	volatile int32_t t63 = -1015;

	t63 = ((x3609==x3610)*(x3611<<x3612));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x3686 = 53U;
	static uint32_t x3687 = UINT32_MAX;
	int8_t x3688 = 3;
	static uint32_t t64 = 104U;

	t64 = ((x3685==x3686)*(x3687<<x3688));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x3729 = INT8_MIN;
	uint64_t x3730 = UINT64_MAX;
	int8_t x3731 = 24;
	static volatile uint16_t x3732 = 0U;

	t65 = ((x3729==x3730)*(x3731<<x3732));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int8_t x3891 = INT8_MAX;
	int32_t t66 = -61504911;

	t66 = ((x3889==x3890)*(x3891<<x3892));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x4017 = 995429150231889LLU;
	volatile uint16_t x4018 = UINT16_MAX;
	int16_t x4019 = 2309;
	uint8_t x4020 = 0U;

	t67 = ((x4017==x4018)*(x4019<<x4020));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x4177 = UINT8_MAX;
	static uint64_t x4178 = 26902672LLU;
	int8_t x4180 = 1;

	t68 = ((x4177==x4178)*(x4179<<x4180));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x4201 = 49779305LLU;
	int8_t x4202 = INT8_MAX;
	static volatile uint8_t x4203 = UINT8_MAX;
	int32_t t69 = -90879;

	t69 = ((x4201==x4202)*(x4203<<x4204));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x4286 = 107643450473706007LLU;
	int8_t x4288 = 12;
	int32_t t70 = -12214043;

	t70 = ((x4285==x4286)*(x4287<<x4288));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x4314 = INT64_MIN;
	static uint32_t x4315 = UINT32_MAX;
	int8_t x4316 = 10;

	t71 = ((x4313==x4314)*(x4315<<x4316));

	if (t71 != 4294966272U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x4322 = 27U;
	int8_t x4323 = 1;
	int32_t t72 = -43027;

	t72 = ((x4321==x4322)*(x4323<<x4324));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int8_t x4485 = 0;
	int8_t x4486 = -1;
	int8_t x4487 = INT8_MAX;
	volatile uint16_t x4488 = 3U;
	int32_t t73 = -123483000;

	t73 = ((x4485==x4486)*(x4487<<x4488));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x4514 = UINT8_MAX;
	uint32_t x4515 = 52182U;
	int16_t x4516 = 3;

	t74 = ((x4513==x4514)*(x4515<<x4516));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x4529 = -1;
	int32_t x4530 = INT32_MIN;
	uint16_t x4531 = 0U;
	uint8_t x4532 = 22U;
	int32_t t75 = -117911;

	t75 = ((x4529==x4530)*(x4531<<x4532));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x4569 = INT8_MIN;
	static volatile int64_t x4570 = INT64_MAX;
	int16_t x4571 = 1581;
	volatile uint8_t x4572 = 1U;

	t76 = ((x4569==x4570)*(x4571<<x4572));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x4601 = INT64_MIN;
	volatile uint32_t x4602 = 956U;
	uint64_t x4603 = 8498638640167250LLU;

	t77 = ((x4601==x4602)*(x4603<<x4604));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x4629 = UINT8_MAX;
	int64_t x4630 = INT64_MIN;
	int8_t x4631 = INT8_MAX;
	int16_t x4632 = 1;
	volatile int32_t t78 = -6910;

	t78 = ((x4629==x4630)*(x4631<<x4632));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x4653 = -9;
	int64_t x4654 = 189069403976669LL;
	static uint16_t x4656 = 5U;

	t79 = ((x4653==x4654)*(x4655<<x4656));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x4701 = -1;
	volatile uint64_t x4702 = 134708384571LLU;
	volatile uint8_t x4703 = 4U;
	uint8_t x4704 = 0U;
	static volatile int32_t t80 = -330;

	t80 = ((x4701==x4702)*(x4703<<x4704));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x4706 = -1LL;
	volatile uint16_t x4707 = 0U;
	uint8_t x4708 = 1U;
	volatile int32_t t81 = 59451907;

	t81 = ((x4705==x4706)*(x4707<<x4708));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x4741 = 7U;
	int32_t x4742 = 974267;
	int8_t x4743 = 1;
	int8_t x4744 = 0;

	t82 = ((x4741==x4742)*(x4743<<x4744));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x4805 = INT8_MIN;
	static int64_t x4806 = INT64_MAX;
	uint16_t x4807 = 24U;
	static volatile int32_t t83 = 221537;

	t83 = ((x4805==x4806)*(x4807<<x4808));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x4813 = INT16_MAX;
	static uint32_t x4814 = 448079U;
	uint32_t x4815 = UINT32_MAX;
	uint8_t x4816 = 9U;

	t84 = ((x4813==x4814)*(x4815<<x4816));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x4845 = INT64_MIN;
	static uint32_t x4846 = 181U;
	uint8_t x4847 = UINT8_MAX;
	uint8_t x4848 = 6U;
	volatile int32_t t85 = 6458033;

	t85 = ((x4845==x4846)*(x4847<<x4848));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint64_t x4890 = UINT64_MAX;
	uint16_t x4892 = 11U;
	static uint32_t t86 = 462U;

	t86 = ((x4889==x4890)*(x4891<<x4892));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x5034 = -1;
	uint64_t x5035 = 5197LLU;
	int16_t x5036 = 11;
	static uint64_t t87 = 276002420LLU;

	t87 = ((x5033==x5034)*(x5035<<x5036));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x5106 = INT32_MIN;
	static uint8_t x5108 = 2U;
	static volatile uint32_t t88 = 5U;

	t88 = ((x5105==x5106)*(x5107<<x5108));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x5145 = 5;
	int8_t x5146 = -1;
	static uint32_t x5147 = 86386U;
	static uint8_t x5148 = 10U;
	volatile uint32_t t89 = 2922522U;

	t89 = ((x5145==x5146)*(x5147<<x5148));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x5286 = INT8_MIN;
	int16_t x5287 = 122;
	int16_t x5288 = 4;
	volatile int32_t t90 = 213439;

	t90 = ((x5285==x5286)*(x5287<<x5288));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x5353 = UINT16_MAX;
	uint8_t x5355 = 5U;
	int8_t x5356 = 0;
	volatile int32_t t91 = 82762;

	t91 = ((x5353==x5354)*(x5355<<x5356));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x5413 = UINT32_MAX;
	int16_t x5414 = -1;
	int8_t x5415 = INT8_MAX;
	static int32_t t92 = 128804;

	t92 = ((x5413==x5414)*(x5415<<x5416));

	if (t92 != 33292288) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x5489 = 56U;
	uint64_t x5490 = 30406701578887LLU;
	uint32_t x5491 = 521164U;
	uint8_t x5492 = 2U;

	t93 = ((x5489==x5490)*(x5491<<x5492));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x5517 = 119U;
	static uint16_t x5518 = 2446U;
	int16_t x5520 = 1;

	t94 = ((x5517==x5518)*(x5519<<x5520));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x5583 = INT8_MAX;
	uint8_t x5584 = 18U;
	int32_t t95 = 50346;

	t95 = ((x5581==x5582)*(x5583<<x5584));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x5657 = 267531771U;
	static uint32_t x5658 = 9U;
	uint8_t x5660 = 11U;
	int32_t t96 = -793;

	t96 = ((x5657==x5658)*(x5659<<x5660));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x5765 = -1;
	volatile int8_t x5766 = INT8_MIN;
	volatile uint32_t x5767 = 11080U;
	uint16_t x5768 = 10U;

	t97 = ((x5765==x5766)*(x5767<<x5768));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x5789 = UINT16_MAX;
	uint32_t x5791 = 527473482U;
	volatile uint8_t x5792 = 13U;
	uint32_t t98 = 401U;

	t98 = ((x5789==x5790)*(x5791<<x5792));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x5837 = 24U;
	static int16_t x5838 = INT16_MIN;
	static uint16_t x5839 = 2U;
	int32_t x5840 = 0;
	int32_t t99 = 296;

	t99 = ((x5837==x5838)*(x5839<<x5840));

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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int8_t x118 = 0;
uint32_t x208 = 1250006U;
int32_t t1 = 1075462;
volatile uint64_t x222 = 5LLU;
volatile uint8_t x337 = 33U;
uint8_t x458 = 14U;
static uint32_t t9 = 106U;
int32_t x469 = 1902;
volatile uint8_t x471 = 4U;
int8_t x472 = 0;
int8_t x679 = INT8_MAX;
static uint64_t x763 = 13393LLU;
volatile uint32_t t14 = 149934U;
int16_t x948 = -243;
int32_t t16 = 1;
uint16_t x1101 = UINT16_MAX;
static int32_t x1287 = -1;
uint8_t x1310 = 60U;
int32_t x1516 = 4035961;
int32_t x1610 = 10;
int16_t x1611 = INT16_MIN;
int8_t x1772 = INT8_MIN;
int32_t t29 = -20;
int32_t t30 = -54652550;
uint8_t x1993 = 1U;
static uint64_t x2011 = UINT64_MAX;
uint16_t x2043 = 6469U;
int32_t t34 = 1767;
int64_t t36 = 362134LL;
static uint32_t x2236 = 225240157U;
int8_t x2291 = INT8_MIN;
int32_t x2317 = 5543;
int16_t x2339 = INT16_MIN;
int8_t x2350 = 0;
static volatile int16_t x2351 = -1;
uint8_t x2522 = 123U;
static int64_t x2543 = -1LL;
int8_t x2625 = 0;
static uint16_t x2627 = UINT16_MAX;
static volatile int32_t x2707 = 7576;
volatile int16_t x2964 = -173;
int64_t x3005 = 50573226077LL;
int64_t t52 = -201921LL;
uint8_t x3039 = 36U;
int32_t x3055 = INT32_MIN;
static int64_t t55 = -16571989359676731LL;
static int64_t x3114 = 6LL;
static uint32_t x3255 = 1626U;
int8_t x3256 = INT8_MIN;
int32_t x3359 = -371;
volatile int64_t t58 = 125858LL;
uint8_t x3369 = 3U;
uint8_t x3372 = 87U;
int8_t x3430 = 19;
volatile uint32_t t62 = 47U;
int32_t t63 = -7955100;
static int64_t x3524 = 55771626692LL;
uint8_t x3534 = 15U;
volatile int32_t t66 = 6;
uint8_t x3571 = UINT8_MAX;
uint32_t t68 = 1564U;
int64_t x3709 = INT64_MAX;
int8_t x3751 = INT8_MIN;
volatile int8_t x3752 = INT8_MAX;
uint32_t x3763 = 6U;
uint64_t t71 = 31740882472528LLU;
volatile int64_t t72 = 1993655186LL;
static uint16_t x3870 = 116U;
int8_t x4062 = 0;
int32_t x4064 = INT32_MAX;
int8_t x4074 = 5;
uint8_t x4168 = 25U;
volatile uint16_t x4317 = UINT16_MAX;
int32_t x4319 = -1;
int32_t t84 = -115;
static volatile uint64_t x4527 = 55344LLU;
uint16_t x4570 = 1U;
int16_t x4602 = 52;
volatile int32_t t90 = -167691331;
int8_t x4806 = 1;
volatile int8_t x4834 = 33;
static uint64_t x4959 = UINT64_MAX;
uint64_t t97 = 57852321682LLU;
volatile uint64_t x5017 = 86764413392LLU;
uint16_t x5018 = 29U;
uint16_t x5187 = UINT16_MAX;


void f0(void) {
	uint64_t x117 = 1LLU;
	volatile int16_t x119 = -1418;
	uint8_t x120 = UINT8_MAX;
	volatile uint64_t t0 = 9LLU;

	t0 = (x117>>(x118>>(x119<=x120)));

	if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x205 = 31;
	uint16_t x206 = 3U;
	int32_t x207 = -1;

	t1 = (x205>>(x206>>(x207<=x208)));

	if (t1 != 3) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x221 = UINT16_MAX;
	uint16_t x223 = 122U;
	int16_t x224 = -15;
	static int32_t t2 = 44482;

	t2 = (x221>>(x222>>(x223<=x224)));

	if (t2 != 2047) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x269 = 1;
	int8_t x270 = 3;
	static int16_t x271 = -6;
	int32_t x272 = INT32_MAX;
	int32_t t3 = 4741;

	t3 = (x269>>(x270>>(x271<=x272)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x273 = 72U;
	int8_t x274 = 0;
	int16_t x275 = INT16_MIN;
	int8_t x276 = 30;
	static int32_t t4 = -8898022;

	t4 = (x273>>(x274>>(x275<=x276)));

	if (t4 != 72) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x277 = INT32_MAX;
	uint64_t x278 = 3LLU;
	int8_t x279 = INT8_MAX;
	int8_t x280 = INT8_MIN;
	int32_t t5 = 1910;

	t5 = (x277>>(x278>>(x279<=x280)));

	if (t5 != 268435455) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint32_t x281 = 220U;
	volatile uint32_t x282 = 2U;
	static int16_t x283 = INT16_MIN;
	static int64_t x284 = 17LL;
	uint32_t t6 = 519U;

	t6 = (x281>>(x282>>(x283<=x284)));

	if (t6 != 110U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x338 = 1;
	volatile int8_t x339 = -13;
	uint16_t x340 = 166U;
	int32_t t7 = 1;

	t7 = (x337>>(x338>>(x339<=x340)));

	if (t7 != 33) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x457 = 4U;
	uint16_t x459 = UINT16_MAX;
	int16_t x460 = INT16_MIN;
	volatile int32_t t8 = 1447;

	t8 = (x457>>(x458>>(x459<=x460)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x461 = 60593U;
	uint8_t x462 = 60U;
	static int16_t x463 = -1;
	static uint32_t x464 = UINT32_MAX;

	t9 = (x461>>(x462>>(x463<=x464)));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x470 = 3LL;
	volatile int32_t t10 = 3;

	t10 = (x469>>(x470>>(x471<=x472)));

	if (t10 != 237) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x577 = UINT8_MAX;
	int16_t x578 = 0;
	int32_t x579 = INT32_MIN;
	int16_t x580 = INT16_MAX;
	static volatile int32_t t11 = 0;

	t11 = (x577>>(x578>>(x579<=x580)));

	if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x677 = INT16_MAX;
	uint32_t x678 = 0U;
	int32_t x680 = 27;
	volatile int32_t t12 = -10857;

	t12 = (x677>>(x678>>(x679<=x680)));

	if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x749 = 62;
	int16_t x750 = 0;
	int32_t x751 = INT32_MIN;
	int32_t x752 = INT32_MIN;
	static volatile int32_t t13 = 14174994;

	t13 = (x749>>(x750>>(x751<=x752)));

	if (t13 != 62) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x761 = 2201560U;
	static uint8_t x762 = 6U;
	volatile uint64_t x764 = 20295LLU;

	t14 = (x761>>(x762>>(x763<=x764)));

	if (t14 != 275195U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x945 = INT16_MAX;
	uint16_t x946 = 22U;
	static int16_t x947 = -1;
	volatile int32_t t15 = -4321;

	t15 = (x945>>(x946>>(x947<=x948)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x961 = 18695413;
	static uint8_t x962 = 2U;
	uint16_t x963 = 2306U;
	static uint64_t x964 = 1424863895578LLU;

	t16 = (x961>>(x962>>(x963<=x964)));

	if (t16 != 9347706) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x969 = 6U;
	int8_t x970 = 1;
	volatile int16_t x971 = INT16_MAX;
	int32_t x972 = INT32_MIN;
	volatile uint32_t t17 = 2764U;

	t17 = (x969>>(x970>>(x971<=x972)));

	if (t17 != 3U) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x1077 = UINT8_MAX;
	static uint8_t x1078 = 0U;
	int32_t x1079 = INT32_MIN;
	int8_t x1080 = INT8_MIN;
	static volatile int32_t t18 = 688917;

	t18 = (x1077>>(x1078>>(x1079<=x1080)));

	if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x1102 = 6U;
	static uint32_t x1103 = 40074U;
	int64_t x1104 = INT64_MIN;
	int32_t t19 = -4;

	t19 = (x1101>>(x1102>>(x1103<=x1104)));

	if (t19 != 1023) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1177 = INT8_MAX;
	int16_t x1178 = 1;
	static int64_t x1179 = 122698237366LL;
	volatile int8_t x1180 = -1;
	int32_t t20 = -11632;

	t20 = (x1177>>(x1178>>(x1179<=x1180)));

	if (t20 != 63) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x1285 = INT8_MAX;
	int16_t x1286 = 15;
	int16_t x1288 = 7;
	volatile int32_t t21 = -13933;

	t21 = (x1285>>(x1286>>(x1287<=x1288)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x1309 = 7U;
	volatile int8_t x1311 = INT8_MIN;
	int64_t x1312 = 2202122739737LL;
	volatile int32_t t22 = -207223;

	t22 = (x1309>>(x1310>>(x1311<=x1312)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1377 = 54U;
	static uint8_t x1378 = 49U;
	int32_t x1379 = INT32_MIN;
	int16_t x1380 = INT16_MAX;
	volatile int32_t t23 = 847267650;

	t23 = (x1377>>(x1378>>(x1379<=x1380)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1493 = UINT64_MAX;
	int8_t x1494 = 2;
	uint32_t x1495 = 1598U;
	int64_t x1496 = INT64_MIN;
	uint64_t t24 = 5447021266319503431LLU;

	t24 = (x1493>>(x1494>>(x1495<=x1496)));

	if (t24 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1513 = INT64_MAX;
	static volatile uint8_t x1514 = 1U;
	int64_t x1515 = 14910040LL;
	volatile int64_t t25 = 201LL;

	t25 = (x1513>>(x1514>>(x1515<=x1516)));

	if (t25 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x1525 = UINT32_MAX;
	static int32_t x1526 = 49;
	volatile int16_t x1527 = INT16_MIN;
	int8_t x1528 = INT8_MIN;
	static uint32_t t26 = 10221095U;

	t26 = (x1525>>(x1526>>(x1527<=x1528)));

	if (t26 != 255U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1601 = 2531916;
	static int8_t x1602 = 0;
	volatile int8_t x1603 = 52;
	int8_t x1604 = -1;
	static volatile int32_t t27 = -62825698;

	t27 = (x1601>>(x1602>>(x1603<=x1604)));

	if (t27 != 2531916) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint16_t x1609 = 59U;
	volatile uint64_t x1612 = 16803744296LLU;
	int32_t t28 = 1;

	t28 = (x1609>>(x1610>>(x1611<=x1612)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1769 = INT8_MAX;
	uint8_t x1770 = 52U;
	uint32_t x1771 = 1U;

	t29 = (x1769>>(x1770>>(x1771<=x1772)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1841 = INT32_MAX;
	uint8_t x1842 = 25U;
	volatile uint32_t x1843 = UINT32_MAX;
	int16_t x1844 = INT16_MAX;

	t30 = (x1841>>(x1842>>(x1843<=x1844)));

	if (t30 != 63) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1994 = 1;
	volatile int64_t x1995 = INT64_MIN;
	int32_t x1996 = -1;
	int32_t t31 = 1;

	t31 = (x1993>>(x1994>>(x1995<=x1996)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x2009 = INT16_MAX;
	static uint32_t x2010 = 0U;
	static volatile uint32_t x2012 = UINT32_MAX;
	volatile int32_t t32 = 0;

	t32 = (x2009>>(x2010>>(x2011<=x2012)));

	if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int64_t x2029 = INT64_MAX;
	static uint16_t x2030 = 25U;
	volatile int16_t x2031 = INT16_MIN;
	int8_t x2032 = INT8_MIN;
	static volatile int64_t t33 = -1365518LL;

	t33 = (x2029>>(x2030>>(x2031<=x2032)));

	if (t33 != 2251799813685247LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x2041 = 31126U;
	static volatile uint8_t x2042 = 10U;
	int32_t x2044 = 808876;

	t34 = (x2041>>(x2042>>(x2043<=x2044)));

	if (t34 != 972) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x2109 = 96LL;
	uint16_t x2110 = 46U;
	int32_t x2111 = INT32_MAX;
	uint8_t x2112 = 47U;
	int64_t t35 = 406LL;

	t35 = (x2109>>(x2110>>(x2111<=x2112)));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x2137 = INT64_MAX;
	volatile int8_t x2138 = INT8_MAX;
	volatile int16_t x2139 = -32;
	volatile uint64_t x2140 = UINT64_MAX;

	t36 = (x2137>>(x2138>>(x2139<=x2140)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x2233 = UINT16_MAX;
	int8_t x2234 = 0;
	int16_t x2235 = 231;
	int32_t t37 = -72821220;

	t37 = (x2233>>(x2234>>(x2235<=x2236)));

	if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x2269 = INT16_MAX;
	uint32_t x2270 = 11U;
	int64_t x2271 = -826094664LL;
	int16_t x2272 = INT16_MIN;
	int32_t t38 = 586476;

	t38 = (x2269>>(x2270>>(x2271<=x2272)));

	if (t38 != 1023) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2289 = 1;
	uint8_t x2290 = 0U;
	uint16_t x2292 = UINT16_MAX;
	int32_t t39 = 63838;

	t39 = (x2289>>(x2290>>(x2291<=x2292)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x2318 = 6;
	int32_t x2319 = INT32_MAX;
	int32_t x2320 = 15;
	int32_t t40 = -16086;

	t40 = (x2317>>(x2318>>(x2319<=x2320)));

	if (t40 != 86) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x2337 = 31566049819LLU;
	volatile int8_t x2338 = INT8_MAX;
	int8_t x2340 = 1;
	volatile uint64_t t41 = 457875047023048277LLU;

	t41 = (x2337>>(x2338>>(x2339<=x2340)));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x2349 = UINT16_MAX;
	int64_t x2352 = 29714075LL;
	volatile int32_t t42 = -1101;

	t42 = (x2349>>(x2350>>(x2351<=x2352)));

	if (t42 != 65535) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x2433 = 0U;
	int8_t x2434 = 6;
	volatile int32_t x2435 = -97850;
	int16_t x2436 = -1;
	volatile int32_t t43 = 439;

	t43 = (x2433>>(x2434>>(x2435<=x2436)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x2521 = 27012496423836LLU;
	int64_t x2523 = -1LL;
	uint8_t x2524 = UINT8_MAX;
	uint64_t t44 = 180641574LLU;

	t44 = (x2521>>(x2522>>(x2523<=x2524)));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x2541 = UINT16_MAX;
	uint8_t x2542 = 2U;
	int64_t x2544 = INT64_MAX;
	static volatile int32_t t45 = -6360;

	t45 = (x2541>>(x2542>>(x2543<=x2544)));

	if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x2605 = INT64_MAX;
	uint16_t x2606 = 16U;
	volatile int16_t x2607 = INT16_MAX;
	volatile int32_t x2608 = -222463;
	static int64_t t46 = -225LL;

	t46 = (x2605>>(x2606>>(x2607<=x2608)));

	if (t46 != 140737488355327LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x2626 = 1;
	int64_t x2628 = -2LL;
	static int32_t t47 = -282;

	t47 = (x2625>>(x2626>>(x2627<=x2628)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x2673 = 1;
	uint8_t x2674 = 10U;
	static int16_t x2675 = INT16_MIN;
	uint32_t x2676 = UINT32_MAX;
	volatile int32_t t48 = 13004540;

	t48 = (x2673>>(x2674>>(x2675<=x2676)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x2705 = UINT8_MAX;
	int8_t x2706 = 0;
	int16_t x2708 = INT16_MIN;
	volatile int32_t t49 = 57;

	t49 = (x2705>>(x2706>>(x2707<=x2708)));

	if (t49 != 255) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x2717 = 0;
	uint64_t x2718 = 0LLU;
	volatile int64_t x2719 = -1LL;
	int32_t x2720 = INT32_MAX;
	static volatile int32_t t50 = -1730138;

	t50 = (x2717>>(x2718>>(x2719<=x2720)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x2961 = 2U;
	volatile int16_t x2962 = 1;
	static int16_t x2963 = INT16_MIN;
	int32_t t51 = 3;

	t51 = (x2961>>(x2962>>(x2963<=x2964)));

	if (t51 != 2) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x3006 = 13LLU;
	volatile int16_t x3007 = -1772;
	int8_t x3008 = -1;

	t52 = (x3005>>(x3006>>(x3007<=x3008)));

	if (t52 != 790206657LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x3033 = INT64_MAX;
	uint8_t x3034 = 0U;
	static volatile int32_t x3035 = INT32_MIN;
	uint8_t x3036 = UINT8_MAX;
	volatile int64_t t53 = INT64_MAX;

	t53 = (x3033>>(x3034>>(x3035<=x3036)));

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x3037 = 13595547676469LL;
	uint32_t x3038 = 1U;
	uint32_t x3040 = UINT32_MAX;
	int64_t t54 = 1640986213811LL;

	t54 = (x3037>>(x3038>>(x3039<=x3040)));

	if (t54 != 13595547676469LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x3053 = INT64_MAX;
	uint8_t x3054 = 21U;
	uint16_t x3056 = UINT16_MAX;

	t55 = (x3053>>(x3054>>(x3055<=x3056)));

	if (t55 != 9007199254740991LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint64_t x3113 = UINT64_MAX;
	static volatile int8_t x3115 = INT8_MIN;
	static int32_t x3116 = 10794;
	uint64_t t56 = 22757961LLU;

	t56 = (x3113>>(x3114>>(x3115<=x3116)));

	if (t56 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x3253 = 0U;
	uint16_t x3254 = 0U;
	int32_t t57 = 0;

	t57 = (x3253>>(x3254>>(x3255<=x3256)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x3357 = INT64_MAX;
	volatile int8_t x3358 = INT8_MAX;
	uint16_t x3360 = 0U;

	t58 = (x3357>>(x3358>>(x3359<=x3360)));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x3370 = 1U;
	static uint16_t x3371 = UINT16_MAX;
	int32_t t59 = 1395132;

	t59 = (x3369>>(x3370>>(x3371<=x3372)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x3385 = UINT16_MAX;
	int64_t x3386 = 0LL;
	uint32_t x3387 = 229316200U;
	int8_t x3388 = -1;
	int32_t t60 = 2535787;

	t60 = (x3385>>(x3386>>(x3387<=x3388)));

	if (t60 != 65535) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x3429 = INT16_MAX;
	int64_t x3431 = -1LL;
	int64_t x3432 = -43LL;
	int32_t t61 = -1;

	t61 = (x3429>>(x3430>>(x3431<=x3432)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x3437 = 3U;
	uint8_t x3438 = 50U;
	int8_t x3439 = -1;
	uint8_t x3440 = 110U;

	t62 = (x3437>>(x3438>>(x3439<=x3440)));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x3465 = 38U;
	volatile uint16_t x3466 = 12U;
	int32_t x3467 = INT32_MAX;
	static uint64_t x3468 = UINT64_MAX;

	t63 = (x3465>>(x3466>>(x3467<=x3468)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x3493 = INT8_MAX;
	static volatile uint8_t x3494 = 0U;
	int32_t x3495 = INT32_MAX;
	uint32_t x3496 = 96517U;
	int32_t t64 = -270891212;

	t64 = (x3493>>(x3494>>(x3495<=x3496)));

	if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x3521 = 57;
	volatile int16_t x3522 = 30;
	int64_t x3523 = -966134610609334079LL;
	int32_t t65 = -191;

	t65 = (x3521>>(x3522>>(x3523<=x3524)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x3533 = 18;
	uint16_t x3535 = UINT16_MAX;
	static int32_t x3536 = 2371096;

	t66 = (x3533>>(x3534>>(x3535<=x3536)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x3569 = 1;
	int16_t x3570 = 4;
	uint32_t x3572 = UINT32_MAX;
	int32_t t67 = -3581;

	t67 = (x3569>>(x3570>>(x3571<=x3572)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x3661 = 134221U;
	uint32_t x3662 = 1U;
	static int8_t x3663 = -1;
	static int16_t x3664 = -1;

	t68 = (x3661>>(x3662>>(x3663<=x3664)));

	if (t68 != 134221U) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x3710 = 24;
	int8_t x3711 = -45;
	volatile int8_t x3712 = 0;
	int64_t t69 = 258709759027522LL;

	t69 = (x3709>>(x3710>>(x3711<=x3712)));

	if (t69 != 2251799813685247LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x3749 = 1;
	volatile uint8_t x3750 = 1U;
	int32_t t70 = -2541;

	t70 = (x3749>>(x3750>>(x3751<=x3752)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x3761 = UINT64_MAX;
	static uint64_t x3762 = 22LLU;
	uint32_t x3764 = 113041U;

	t71 = (x3761>>(x3762>>(x3763<=x3764)));

	if (t71 != 9007199254740991LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x3777 = 1839LL;
	uint8_t x3778 = 114U;
	uint32_t x3779 = UINT32_MAX;
	int16_t x3780 = -1;

	t72 = (x3777>>(x3778>>(x3779<=x3780)));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x3869 = INT64_MAX;
	int16_t x3871 = -1;
	uint32_t x3872 = UINT32_MAX;
	volatile int64_t t73 = -1543264459405102969LL;

	t73 = (x3869>>(x3870>>(x3871<=x3872)));

	if (t73 != 31LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x3989 = 61U;
	int16_t x3990 = 0;
	static volatile int8_t x3991 = INT8_MIN;
	int64_t x3992 = 2572LL;
	static int32_t t74 = -8264;

	t74 = (x3989>>(x3990>>(x3991<=x3992)));

	if (t74 != 61) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x4061 = INT8_MAX;
	static volatile int16_t x4063 = 18;
	int32_t t75 = -239738;

	t75 = (x4061>>(x4062>>(x4063<=x4064)));

	if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x4073 = 7LLU;
	uint32_t x4075 = 329437U;
	int64_t x4076 = -1LL;
	volatile uint64_t t76 = 5522242373563957019LLU;

	t76 = (x4073>>(x4074>>(x4075<=x4076)));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x4093 = 953U;
	int8_t x4094 = 4;
	volatile uint16_t x4095 = UINT16_MAX;
	int8_t x4096 = INT8_MIN;
	volatile int32_t t77 = -152;

	t77 = (x4093>>(x4094>>(x4095<=x4096)));

	if (t77 != 59) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x4109 = 168191U;
	int16_t x4110 = 11;
	static uint64_t x4111 = 9LLU;
	uint8_t x4112 = 23U;
	uint32_t t78 = 522595476U;

	t78 = (x4109>>(x4110>>(x4111<=x4112)));

	if (t78 != 5255U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x4141 = 3707992969747694270LLU;
	int8_t x4142 = 0;
	int32_t x4143 = 1038642757;
	int16_t x4144 = INT16_MAX;
	uint64_t t79 = 3052118LLU;

	t79 = (x4141>>(x4142>>(x4143<=x4144)));

	if (t79 != 3707992969747694270LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x4165 = INT8_MAX;
	uint16_t x4166 = 4U;
	uint8_t x4167 = 8U;
	volatile int32_t t80 = 1;

	t80 = (x4165>>(x4166>>(x4167<=x4168)));

	if (t80 != 31) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x4318 = 12;
	int16_t x4320 = 4073;
	int32_t t81 = -219848777;

	t81 = (x4317>>(x4318>>(x4319<=x4320)));

	if (t81 != 1023) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x4405 = 5LLU;
	int8_t x4406 = 2;
	int64_t x4407 = 77742687841LL;
	int8_t x4408 = -33;
	volatile uint64_t t82 = 36129878105376541LLU;

	t82 = (x4405>>(x4406>>(x4407<=x4408)));

	if (t82 != 1LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x4421 = 3;
	int8_t x4422 = 0;
	volatile int8_t x4423 = INT8_MIN;
	static int16_t x4424 = 1;
	volatile int32_t t83 = 0;

	t83 = (x4421>>(x4422>>(x4423<=x4424)));

	if (t83 != 3) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x4453 = 2U;
	uint8_t x4454 = 49U;
	static uint64_t x4455 = 185LLU;
	int64_t x4456 = INT64_MIN;

	t84 = (x4453>>(x4454>>(x4455<=x4456)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x4521 = 71U;
	uint16_t x4522 = 17U;
	uint16_t x4523 = UINT16_MAX;
	int32_t x4524 = INT32_MAX;
	static int32_t t85 = -814068226;

	t85 = (x4521>>(x4522>>(x4523<=x4524)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x4525 = INT16_MAX;
	uint32_t x4526 = 30U;
	uint64_t x4528 = 6080LLU;
	int32_t t86 = 6;

	t86 = (x4525>>(x4526>>(x4527<=x4528)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x4569 = UINT64_MAX;
	static int64_t x4571 = INT64_MIN;
	int8_t x4572 = 0;
	uint64_t t87 = UINT64_MAX;

	t87 = (x4569>>(x4570>>(x4571<=x4572)));

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x4601 = UINT64_MAX;
	volatile uint64_t x4603 = UINT64_MAX;
	uint16_t x4604 = 15426U;
	volatile uint64_t t88 = 26782006LLU;

	t88 = (x4601>>(x4602>>(x4603<=x4604)));

	if (t88 != 4095LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x4625 = UINT32_MAX;
	uint16_t x4626 = 6U;
	int32_t x4627 = -1;
	uint16_t x4628 = 7U;
	uint32_t t89 = 389U;

	t89 = (x4625>>(x4626>>(x4627<=x4628)));

	if (t89 != 536870911U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x4721 = 2163043;
	uint8_t x4722 = 1U;
	static int16_t x4723 = INT16_MIN;
	int64_t x4724 = INT64_MIN;

	t90 = (x4721>>(x4722>>(x4723<=x4724)));

	if (t90 != 1081521) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x4769 = 61;
	uint16_t x4770 = 5U;
	uint64_t x4771 = UINT64_MAX;
	int64_t x4772 = -1LL;
	int32_t t91 = -56;

	t91 = (x4769>>(x4770>>(x4771<=x4772)));

	if (t91 != 15) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x4805 = INT64_MAX;
	int16_t x4807 = -1;
	static uint64_t x4808 = UINT64_MAX;
	int64_t t92 = INT64_MAX;

	t92 = (x4805>>(x4806>>(x4807<=x4808)));

	if (t92 != INT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x4833 = 6947137LLU;
	volatile uint32_t x4835 = 16207U;
	int64_t x4836 = -41979328859LL;
	uint64_t t93 = 33LLU;

	t93 = (x4833>>(x4834>>(x4835<=x4836)));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x4837 = INT8_MAX;
	int8_t x4838 = 13;
	static int32_t x4839 = INT32_MIN;
	static volatile int32_t x4840 = 492;
	int32_t t94 = 29010542;

	t94 = (x4837>>(x4838>>(x4839<=x4840)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x4937 = 2523U;
	static uint16_t x4938 = 36U;
	int64_t x4939 = 1376158LL;
	volatile uint64_t x4940 = UINT64_MAX;
	int32_t t95 = -173;

	t95 = (x4937>>(x4938>>(x4939<=x4940)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x4957 = 0U;
	int8_t x4958 = 1;
	int8_t x4960 = 1;
	volatile int32_t t96 = 2;

	t96 = (x4957>>(x4958>>(x4959<=x4960)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x4961 = 50887894533831100LLU;
	volatile int8_t x4962 = 0;
	volatile int16_t x4963 = 0;
	int8_t x4964 = INT8_MIN;

	t97 = (x4961>>(x4962>>(x4963<=x4964)));

	if (t97 != 50887894533831100LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x5019 = -1LL;
	int8_t x5020 = INT8_MAX;
	uint64_t t98 = 4126195LLU;

	t98 = (x5017>>(x5018>>(x5019<=x5020)));

	if (t98 != 5295679LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x5185 = 10;
	uint8_t x5186 = 1U;
	int32_t x5188 = INT32_MAX;
	volatile int32_t t99 = -17758637;

	t99 = (x5185>>(x5186>>(x5187<=x5188)));

	if (t99 != 10) { NG(); } else { ; }
	
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


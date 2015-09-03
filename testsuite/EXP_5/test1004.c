#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x67 = 0;
static uint8_t x126 = UINT8_MAX;
volatile int8_t x127 = 7;
volatile int32_t t1 = -5;
int32_t x140 = 3;
volatile uint64_t t2 = 55711099LLU;
volatile uint8_t x238 = 4U;
uint8_t x240 = 6U;
static int16_t x401 = INT16_MIN;
int64_t x404 = -1LL;
static uint64_t x464 = 58659LLU;
uint64_t x626 = 1LLU;
volatile uint16_t x730 = 25U;
uint32_t t11 = 210371156U;
int16_t x1401 = INT16_MIN;
static int64_t t16 = -3408016LL;
volatile int64_t x1696 = -3LL;
volatile int64_t t18 = -486454215LL;
int32_t x1844 = INT32_MIN;
volatile uint32_t t22 = 1007562199U;
static volatile int8_t x2273 = INT8_MIN;
int32_t x2274 = INT32_MAX;
uint8_t x2275 = 0U;
int32_t x2381 = -1;
int32_t x2407 = 6;
volatile uint64_t t29 = 4LLU;
volatile uint32_t x2564 = UINT32_MAX;
uint32_t x2599 = 3U;
int32_t x2664 = INT32_MAX;
volatile uint64_t t34 = 113044806905093LLU;
static volatile uint16_t x2758 = 38U;
static uint16_t x2760 = 2700U;
static uint64_t x2809 = 1744384358816576LLU;
static int32_t x2811 = 0;
uint64_t x2812 = 145LLU;
uint8_t x2962 = 21U;
volatile int64_t x2964 = 41601989306LL;
int8_t x3438 = 12;
static int64_t x3477 = 1LL;
int64_t x3487 = 0LL;
int32_t x3488 = INT32_MIN;
static volatile int64_t t44 = 6107065386823949LL;
static uint64_t t45 = 4LLU;
volatile uint32_t x3864 = UINT32_MAX;
volatile int32_t x4009 = -7771609;
int32_t x4011 = 0;
int8_t x4547 = 1;
volatile int8_t x4590 = 5;
volatile int32_t t52 = 53;
static uint64_t t54 = 43909218LLU;
static volatile uint32_t x4685 = 89U;
int64_t t56 = 49596437128489980LL;
int16_t x4702 = INT16_MAX;
int64_t x4704 = -278LL;
uint32_t x4711 = 47U;
static int16_t x4840 = INT16_MIN;
int64_t x4890 = 11067LL;
static uint16_t x4891 = 7U;
volatile uint8_t x4892 = UINT8_MAX;
static int8_t x4973 = INT8_MIN;
int16_t x4976 = -1;
int16_t x4995 = 3;
int8_t x5053 = INT8_MAX;
int16_t x5056 = INT16_MIN;
int16_t x5157 = 1;
int8_t x5184 = INT8_MIN;
int8_t x5232 = INT8_MAX;
volatile uint32_t x5365 = 112U;
volatile uint32_t t69 = 1000052U;
int8_t x5403 = 26;
volatile int8_t x5476 = -1;
int64_t x5625 = -58214LL;
int8_t x5627 = 3;
uint8_t x5628 = 4U;
volatile int8_t x5847 = 1;
int8_t x5983 = 0;
volatile uint64_t t78 = 260470186776693LLU;
static volatile uint64_t t79 = 117353655072LLU;
uint64_t x6406 = 31LLU;
volatile uint32_t t86 = 51789U;
volatile uint32_t x6686 = 2001U;
uint64_t t87 = 196673537LLU;
int32_t x6789 = -1;
int8_t x6817 = INT8_MIN;
volatile uint64_t t90 = 11132255802410722LLU;
uint8_t x7131 = 8U;
int64_t t94 = -32209675822685LL;
static int16_t x7273 = INT16_MIN;
int8_t x7322 = INT8_MAX;
uint32_t x7423 = 38U;
int64_t x7502 = INT64_MAX;
int64_t t99 = 112925593225481LL;


void f0(void) {
	volatile int16_t x65 = INT16_MIN;
	uint32_t x66 = 128236982U;
	uint64_t x68 = 242006633226LLU;
	volatile uint64_t t0 = 6591499515963673194LLU;

	t0 = (x65*((x66<<x67)^x68));

	if (t0 != 18438810486165340160LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x125 = INT8_MAX;
	int8_t x128 = -14;

	t1 = (x125*((x126<<x127)^x128));

	if (t1 != -4147058) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x137 = INT32_MIN;
	uint64_t x138 = 73103219758LLU;
	static int16_t x139 = 0;

	t2 = (x137*((x138<<x139)^x140));

	if (t2 != 9032727619077931008LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x209 = 42557342002127LLU;
	uint32_t x210 = UINT32_MAX;
	uint64_t x211 = 1LLU;
	static int8_t x212 = INT8_MAX;
	volatile uint64_t t3 = 5088LLU;

	t3 = (x209*((x210<<x211)^x212));

	if (t3 != 12046416725955757135LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x237 = -1;
	uint8_t x239 = 4U;
	static int32_t t4 = -3;

	t4 = (x237*((x238<<x239)^x240));

	if (t4 != -70) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x402 = INT16_MAX;
	static uint8_t x403 = 6U;
	int64_t t5 = -74587LL;

	t5 = (x401*((x402<<x403)^x404));

	if (t5 != 68717412352LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x461 = INT16_MAX;
	volatile int64_t x462 = 678630875690148825LL;
	uint8_t x463 = 1U;
	uint64_t t6 = 314188675746677LLU;

	t6 = (x461*((x462<<x463)^x464));

	if (t6 != 16742589838955961711LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x557 = 1650559;
	volatile uint32_t x558 = 24086367U;
	volatile uint64_t x559 = 5LLU;
	int32_t x560 = INT32_MAX;
	volatile uint32_t t7 = 3259U;

	t7 = (x557*((x558<<x559)^x560));

	if (t7 != 1899211873U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x561 = INT8_MIN;
	uint8_t x562 = UINT8_MAX;
	static volatile int16_t x563 = 0;
	static volatile uint32_t x564 = UINT32_MAX;
	volatile uint32_t t8 = 9485U;

	t8 = (x561*((x562<<x563)^x564));

	if (t8 != 32768U) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint16_t x625 = 8206U;
	static uint8_t x627 = 55U;
	uint16_t x628 = 8U;
	uint64_t t9 = 7587454654479137530LLU;

	t9 = (x625*((x626<<x627)^x628));

	if (t9 != 504403158265561200LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x729 = -68;
	volatile uint16_t x731 = 3U;
	volatile int16_t x732 = INT16_MIN;
	int32_t t10 = 314280060;

	t10 = (x729*((x730<<x731)^x732));

	if (t10 != 2214624) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x869 = 41U;
	uint32_t x870 = 49257U;
	static int8_t x871 = 1;
	static uint8_t x872 = 3U;

	t11 = (x869*((x870<<x871)^x872));

	if (t11 != 4039033U) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x997 = UINT64_MAX;
	volatile int32_t x998 = INT32_MAX;
	uint8_t x999 = 0U;
	int64_t x1000 = -1LL;
	volatile uint64_t t12 = 15146142191LLU;

	t12 = (x997*((x998<<x999)^x1000));

	if (t12 != 2147483648LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x1049 = -1;
	uint64_t x1050 = 890748521044109677LLU;
	volatile uint8_t x1051 = 3U;
	int16_t x1052 = INT16_MAX;
	volatile uint64_t t13 = 2638840957LLU;

	t13 = (x1049*((x1050<<x1051)^x1052));

	if (t13 != 11320755905356680041LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x1293 = UINT16_MAX;
	volatile uint16_t x1294 = UINT16_MAX;
	static int8_t x1295 = 4;
	uint64_t x1296 = UINT64_MAX;
	uint64_t t14 = 502437910890543LLU;

	t14 = (x1293*((x1294<<x1295)^x1296));

	if (t14 != 18446744004992106481LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x1402 = INT8_MAX;
	int8_t x1403 = 1;
	uint32_t x1404 = 8U;
	static volatile uint32_t t15 = 75U;

	t15 = (x1401*((x1402<<x1403)^x1404));

	if (t15 != 4286906368U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x1541 = -5936285844201LL;
	static uint8_t x1542 = 25U;
	volatile int8_t x1543 = 1;
	int8_t x1544 = INT8_MIN;

	t16 = (x1541*((x1542<<x1543)^x1544));

	if (t16 != 463030295847678LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x1657 = 0;
	static uint16_t x1658 = UINT16_MAX;
	uint16_t x1659 = 1U;
	static int8_t x1660 = -1;
	int32_t t17 = -164677;

	t17 = (x1657*((x1658<<x1659)^x1660));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x1693 = INT32_MAX;
	uint32_t x1694 = 2325U;
	volatile int8_t x1695 = 29;

	t18 = (x1693*((x1694<<x1695)^x1696));

	if (t18 != -5764607526792331261LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x1725 = INT64_MIN;
	uint64_t x1726 = UINT64_MAX;
	static volatile int8_t x1727 = 7;
	int32_t x1728 = INT32_MIN;
	volatile uint64_t t19 = 4038LLU;

	t19 = (x1725*((x1726<<x1727)^x1728));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1841 = -18;
	uint32_t x1842 = 109805U;
	uint32_t x1843 = 26U;
	uint32_t t20 = 5U;

	t20 = (x1841*((x1842<<x1843)^x1844));

	if (t20 != 1476395008U) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x1857 = 6135U;
	int8_t x1858 = INT8_MAX;
	int16_t x1859 = 11;
	uint64_t x1860 = UINT64_MAX;
	uint64_t t21 = 10267LLU;

	t21 = (x1857*((x1858<<x1859)^x1860));

	if (t21 != 18446744072113856521LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1881 = INT32_MIN;
	uint32_t x1882 = UINT32_MAX;
	uint8_t x1883 = 0U;
	volatile uint8_t x1884 = 9U;

	t22 = (x1881*((x1882<<x1883)^x1884));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x1981 = INT16_MIN;
	static uint8_t x1982 = 1U;
	int16_t x1983 = 1;
	volatile int16_t x1984 = INT16_MAX;
	static int32_t t23 = 0;

	t23 = (x1981*((x1982<<x1983)^x1984));

	if (t23 != -1073643520) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x2017 = INT8_MAX;
	uint64_t x2018 = UINT64_MAX;
	uint8_t x2019 = 12U;
	static uint64_t x2020 = UINT64_MAX;
	volatile uint64_t t24 = 1070LLU;

	t24 = (x2017*((x2018<<x2019)^x2020));

	if (t24 != 520065LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x2029 = INT16_MIN;
	uint64_t x2030 = UINT64_MAX;
	static uint8_t x2031 = 0U;
	int32_t x2032 = INT32_MAX;
	static uint64_t t25 = 1019LLU;

	t25 = (x2029*((x2030<<x2031)^x2032));

	if (t25 != 70368744177664LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x2276 = UINT64_MAX;
	static volatile uint64_t t26 = 105LLU;

	t26 = (x2273*((x2274<<x2275)^x2276));

	if (t26 != 274877906944LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x2313 = 96400200U;
	volatile uint32_t x2314 = 9U;
	uint16_t x2315 = 3U;
	static uint32_t x2316 = 122U;
	static uint32_t t27 = 32078920U;

	t27 = (x2313*((x2314<<x2315)^x2316));

	if (t27 != 525042704U) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x2382 = 14U;
	uint64_t x2383 = 0LLU;
	uint32_t x2384 = 1U;
	volatile uint32_t t28 = 67264U;

	t28 = (x2381*((x2382<<x2383)^x2384));

	if (t28 != 4294967281U) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x2405 = UINT64_MAX;
	volatile int32_t x2406 = 2696;
	uint64_t x2408 = 268LLU;

	t29 = (x2405*((x2406<<x2407)^x2408));

	if (t29 != 18446744073709378804LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x2561 = 9339U;
	static uint8_t x2562 = 38U;
	static uint8_t x2563 = 24U;
	volatile uint32_t t30 = 1543U;

	t30 = (x2561*((x2562<<x2563)^x2564));

	if (t30 != 3187661701U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x2597 = 4437;
	uint64_t x2598 = UINT64_MAX;
	int64_t x2600 = INT64_MIN;
	volatile uint64_t t31 = 56753477LLU;

	t31 = (x2597*((x2598<<x2599)^x2600));

	if (t31 != 9223372036854740312LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x2661 = -1;
	volatile uint8_t x2662 = UINT8_MAX;
	uint8_t x2663 = 13U;
	static volatile int32_t t32 = 716941984;

	t32 = (x2661*((x2662<<x2663)^x2664));

	if (t32 != -2145394687) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x2685 = UINT32_MAX;
	static uint16_t x2686 = 236U;
	static volatile int32_t x2687 = 1;
	uint8_t x2688 = UINT8_MAX;
	volatile uint32_t t33 = 13U;

	t33 = (x2685*((x2686<<x2687)^x2688));

	if (t33 != 4294967001U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x2705 = 1325804200LLU;
	uint8_t x2706 = 4U;
	int16_t x2707 = 7;
	static int16_t x2708 = -6842;

	t34 = (x2705*((x2706<<x2707)^x2708));

	if (t34 != 18446735681368965616LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x2757 = INT8_MAX;
	static volatile uint32_t x2759 = 1U;
	volatile int32_t t35 = 78343494;

	t35 = (x2757*((x2758<<x2759)^x2760));

	if (t35 != 349504) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x2810 = INT8_MAX;
	volatile uint64_t t36 = 9490LLU;

	t36 = (x2809*((x2810<<x2811)^x2812));

	if (t36 != 415163477398345088LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x2961 = UINT64_MAX;
	int8_t x2963 = 0;
	static volatile uint64_t t37 = 235875225406493863LLU;

	t37 = (x2961*((x2962<<x2963)^x2964));

	if (t37 != 18446744032107562321LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x2981 = -47;
	uint8_t x2982 = UINT8_MAX;
	uint32_t x2983 = 1U;
	int16_t x2984 = -11;
	int32_t t38 = 6484830;

	t38 = (x2981*((x2982<<x2983)^x2984));

	if (t38 != 23547) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x3181 = INT8_MIN;
	uint16_t x3182 = 1U;
	static int16_t x3183 = 0;
	int8_t x3184 = 55;
	static int32_t t39 = 21645;

	t39 = (x3181*((x3182<<x3183)^x3184));

	if (t39 != -6912) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x3301 = -1;
	static uint8_t x3302 = 3U;
	static uint64_t x3303 = 5LLU;
	uint16_t x3304 = UINT16_MAX;
	volatile int32_t t40 = 541541713;

	t40 = (x3301*((x3302<<x3303)^x3304));

	if (t40 != -65439) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x3437 = 4U;
	uint8_t x3439 = 0U;
	static int16_t x3440 = 160;
	int32_t t41 = 169799273;

	t41 = (x3437*((x3438<<x3439)^x3440));

	if (t41 != 688) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x3473 = -1;
	static uint32_t x3474 = UINT32_MAX;
	static uint8_t x3475 = 17U;
	int64_t x3476 = -1LL;
	int64_t t42 = -2023LL;

	t42 = (x3473*((x3474<<x3475)^x3476));

	if (t42 != 4294836225LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x3478 = 15;
	int32_t x3479 = 0;
	int8_t x3480 = -1;
	static volatile int64_t t43 = 3166LL;

	t43 = (x3477*((x3478<<x3479)^x3480));

	if (t43 != -16LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x3485 = -10677LL;
	uint16_t x3486 = UINT16_MAX;

	t44 = (x3485*((x3486<<x3487)^x3488));

	if (t44 != 22927983192501LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x3761 = 7;
	uint64_t x3762 = UINT64_MAX;
	uint32_t x3763 = 7U;
	int32_t x3764 = INT32_MIN;

	t45 = (x3761*((x3762<<x3763)^x3764));

	if (t45 != 15032384640LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x3861 = INT32_MIN;
	int16_t x3862 = INT16_MAX;
	volatile uint64_t x3863 = 1LLU;
	uint32_t t46 = 3635691U;

	t46 = (x3861*((x3862<<x3863)^x3864));

	if (t46 != 2147483648U) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x4010 = 1;
	static volatile uint64_t x4012 = 180605410345LLU;
	volatile uint64_t t47 = 2262476768205446LLU;

	t47 = (x4009*((x4010<<x4011)^x4012));

	if (t47 != 17043149441231428120LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x4125 = -1;
	volatile uint32_t x4126 = UINT32_MAX;
	int8_t x4127 = 0;
	volatile uint32_t x4128 = 798521087U;
	uint32_t t48 = 64509U;

	t48 = (x4125*((x4126<<x4127)^x4128));

	if (t48 != 798521088U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x4257 = INT16_MIN;
	static volatile int8_t x4258 = 13;
	int16_t x4259 = 1;
	uint8_t x4260 = 4U;
	static volatile int32_t t49 = -253473;

	t49 = (x4257*((x4258<<x4259)^x4260));

	if (t49 != -983040) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x4305 = 1;
	uint8_t x4306 = 0U;
	static uint16_t x4307 = 7U;
	int64_t x4308 = INT64_MAX;
	volatile int64_t t50 = INT64_MAX;

	t50 = (x4305*((x4306<<x4307)^x4308));

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x4545 = -127;
	uint16_t x4546 = 406U;
	static volatile uint16_t x4548 = UINT16_MAX;
	volatile int32_t t51 = 667846;

	t51 = (x4545*((x4546<<x4547)^x4548));

	if (t51 != -8219821) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x4589 = 1422U;
	int8_t x4591 = 14;
	static int16_t x4592 = INT16_MIN;

	t52 = (x4589*((x4590<<x4591)^x4592));

	if (t52 != -116490240) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x4621 = INT16_MIN;
	uint32_t x4622 = 691300U;
	volatile uint16_t x4623 = 13U;
	uint8_t x4624 = 8U;
	static uint32_t t53 = 2029305465U;

	t53 = (x4621*((x4622<<x4623)^x4624));

	if (t53 != 3220963328U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x4673 = UINT64_MAX;
	uint8_t x4674 = 53U;
	uint8_t x4675 = 20U;
	static uint16_t x4676 = 1282U;

	t54 = (x4673*((x4674<<x4675)^x4676));

	if (t54 != 18446744073653975806LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x4686 = 36;
	int8_t x4687 = 0;
	static volatile int16_t x4688 = INT16_MIN;
	uint32_t t55 = 454556U;

	t55 = (x4685*((x4686<<x4687)^x4688));

	if (t55 != 4292054148U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x4693 = -1LL;
	uint8_t x4694 = UINT8_MAX;
	uint32_t x4695 = 5U;
	static int64_t x4696 = INT64_MIN;

	t56 = (x4693*((x4694<<x4695)^x4696));

	if (t56 != 9223372036854767648LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x4701 = -15360;
	volatile int8_t x4703 = 2;
	int64_t t57 = 817817LL;

	t57 = (x4701*((x4702<<x4703)^x4704));

	if (t57 != 2008995840LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x4709 = 2664U;
	uint64_t x4710 = UINT64_MAX;
	static uint32_t x4712 = 73U;
	volatile uint64_t t58 = 130005062LLU;

	t58 = (x4709*((x4710<<x4711)^x4712));

	if (t58 != 18071819404731152296LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x4721 = -1LL;
	uint64_t x4722 = 52923LLU;
	int64_t x4723 = 3LL;
	int64_t x4724 = INT64_MIN;
	static uint64_t t59 = 1025483595LLU;

	t59 = (x4721*((x4722<<x4723)^x4724));

	if (t59 != 9223372036854352424LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x4837 = -5;
	uint16_t x4838 = 0U;
	uint16_t x4839 = 7U;
	static volatile int32_t t60 = -113;

	t60 = (x4837*((x4838<<x4839)^x4840));

	if (t60 != 163840) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x4889 = 1;
	int64_t t61 = 4738424707211044LL;

	t61 = (x4889*((x4890<<x4891)^x4892));

	if (t61 != 1416575LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x4969 = 24394125U;
	static uint32_t x4970 = UINT32_MAX;
	int16_t x4971 = 8;
	static volatile int16_t x4972 = INT16_MIN;
	volatile uint32_t t62 = 0U;

	t62 = (x4969*((x4970<<x4971)^x4972));

	if (t62 != 2827809536U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x4974 = 99661358LL;
	volatile uint8_t x4975 = 1U;
	int64_t t63 = 26836619603081792LL;

	t63 = (x4973*((x4974<<x4975)^x4976));

	if (t63 != 25513307776LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x4993 = 327853055220999LLU;
	volatile uint32_t x4994 = UINT32_MAX;
	int8_t x4996 = -1;
	uint64_t t64 = 29206646489025465LLU;

	t64 = (x4993*((x4994<<x4995)^x4996));

	if (t64 != 2294971386546993LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x5054 = 6281U;
	uint8_t x5055 = 3U;
	volatile int32_t t65 = 1;

	t65 = (x5053*((x5054<<x5055)^x5056));

	if (t65 != -6103112) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x5158 = 851;
	uint8_t x5159 = 4U;
	uint32_t x5160 = 383U;
	static uint32_t t66 = 1U;

	t66 = (x5157*((x5158<<x5159)^x5160));

	if (t66 != 13391U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x5181 = -1LL;
	uint64_t x5182 = 69309956LLU;
	uint8_t x5183 = 8U;
	uint64_t t67 = 116768122LLU;

	t67 = (x5181*((x5182<<x5183)^x5184));

	if (t67 != 17743348864LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x5229 = -4;
	uint16_t x5230 = 504U;
	uint32_t x5231 = 11U;
	volatile int32_t t68 = -155407096;

	t68 = (x5229*((x5230<<x5231)^x5232));

	if (t68 != -4129276) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x5366 = 89U;
	static int8_t x5367 = 1;
	volatile uint16_t x5368 = UINT16_MAX;

	t69 = (x5365*((x5366<<x5367)^x5368));

	if (t69 != 7319984U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x5401 = -1;
	volatile uint32_t x5402 = 3U;
	static int32_t x5404 = INT32_MAX;
	volatile uint32_t t70 = 172233U;

	t70 = (x5401*((x5402<<x5403)^x5404));

	if (t70 != 2348810241U) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x5465 = 373;
	uint64_t x5466 = UINT64_MAX;
	volatile uint8_t x5467 = 23U;
	volatile uint64_t x5468 = 999LLU;
	volatile uint64_t t71 = 0LLU;

	t71 = (x5465*((x5466<<x5467)^x5468));

	if (t71 != 18446744070580973459LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x5473 = INT32_MIN;
	uint32_t x5474 = 8U;
	int8_t x5475 = 3;
	volatile uint32_t t72 = 343688891U;

	t72 = (x5473*((x5474<<x5475)^x5476));

	if (t72 != 2147483648U) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x5513 = 0U;
	uint64_t x5514 = UINT64_MAX;
	uint32_t x5515 = 17U;
	int8_t x5516 = INT8_MIN;
	uint64_t t73 = 15462085LLU;

	t73 = (x5513*((x5514<<x5515)^x5516));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x5597 = -1;
	int32_t x5598 = 22;
	static int16_t x5599 = 1;
	int32_t x5600 = INT32_MIN;
	volatile int32_t t74 = -12454121;

	t74 = (x5597*((x5598<<x5599)^x5600));

	if (t74 != 2147483604) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x5626 = UINT8_MAX;
	volatile int64_t t75 = 1586723988314LL;

	t75 = (x5625*((x5626<<x5627)^x5628));

	if (t75 != -118989416LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x5769 = UINT64_MAX;
	volatile uint16_t x5770 = 0U;
	uint8_t x5771 = 1U;
	volatile int8_t x5772 = INT8_MIN;
	uint64_t t76 = 349432035LLU;

	t76 = (x5769*((x5770<<x5771)^x5772));

	if (t76 != 128LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x5845 = 36;
	volatile int16_t x5846 = INT16_MAX;
	volatile uint16_t x5848 = 6U;
	volatile int32_t t77 = -249169262;

	t77 = (x5845*((x5846<<x5847)^x5848));

	if (t77 != 2359008) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x5981 = INT32_MIN;
	int32_t x5982 = INT32_MAX;
	uint64_t x5984 = 22669045LLU;

	t78 = (x5981*((x5982<<x5983)^x5984));

	if (t78 != 13883739460882923520LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x6129 = INT32_MIN;
	uint64_t x6130 = 20313930306352840LLU;
	int64_t x6131 = 4LL;
	uint32_t x6132 = 3U;

	t79 = (x6129*((x6130<<x6131)^x6132));

	if (t79 != 4668062096309616640LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x6221 = 12U;
	uint8_t x6222 = UINT8_MAX;
	uint16_t x6223 = 0U;
	volatile uint64_t x6224 = 190832802LLU;
	uint64_t t80 = 3LLU;

	t80 = (x6221*((x6222<<x6223)^x6224));

	if (t80 != 2289992796LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x6361 = 5640U;
	int16_t x6362 = INT16_MAX;
	volatile int8_t x6363 = 0;
	volatile uint8_t x6364 = 2U;
	int32_t t81 = 11;

	t81 = (x6361*((x6362<<x6363)^x6364));

	if (t81 != 184794600) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x6405 = INT32_MIN;
	volatile int32_t x6407 = 5;
	int64_t x6408 = INT64_MIN;
	uint64_t t82 = 27664680781113LLU;

	t82 = (x6405*((x6406<<x6407)^x6408));

	if (t82 != 18446741943405772800LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x6477 = -1;
	int64_t x6478 = 415973892894702511LL;
	uint8_t x6479 = 1U;
	volatile int64_t x6480 = -1LL;
	int64_t t83 = 26061271550493LL;

	t83 = (x6477*((x6478<<x6479)^x6480));

	if (t83 != 831947785789405023LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x6485 = UINT32_MAX;
	static uint64_t x6486 = UINT64_MAX;
	uint16_t x6487 = 5U;
	static int32_t x6488 = -24314699;
	static uint64_t t84 = 31915120167682299LLU;

	t84 = (x6485*((x6486<<x6487)^x6488));

	if (t84 != 104430879942442155LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x6557 = 58U;
	int8_t x6558 = 3;
	static int16_t x6559 = 0;
	volatile uint16_t x6560 = UINT16_MAX;
	volatile uint32_t t85 = 432U;

	t85 = (x6557*((x6558<<x6559)^x6560));

	if (t85 != 3800856U) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x6577 = INT32_MAX;
	uint32_t x6578 = 435U;
	int8_t x6579 = 0;
	uint32_t x6580 = 988738U;

	t86 = (x6577*((x6578<<x6579)^x6580));

	if (t86 != 2146494479U) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x6685 = 27290161LLU;
	int16_t x6687 = 3;
	uint16_t x6688 = UINT16_MAX;

	t87 = (x6685*((x6686<<x6687)^x6688));

	if (t87 != 1351599803847LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x6777 = INT64_MAX;
	int8_t x6778 = INT8_MAX;
	int32_t x6779 = 10;
	uint64_t x6780 = 719997902920LLU;
	uint64_t t88 = 0LLU;

	t88 = (x6777*((x6778<<x6779)^x6780));

	if (t88 != 18446743353711535032LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x6790 = INT16_MAX;
	int16_t x6791 = 1;
	uint64_t x6792 = 70350056448654559LLU;
	uint64_t t89 = 24158607369LLU;

	t89 = (x6789*((x6790<<x6791)^x6792));

	if (t89 != 18376394017260960991LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x6818 = UINT64_MAX;
	uint8_t x6819 = 2U;
	int8_t x6820 = INT8_MIN;

	t90 = (x6817*((x6818<<x6819)^x6820));

	if (t90 != 18446744073709535744LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x6877 = INT64_MAX;
	volatile uint64_t x6878 = 79020621698965791LLU;
	uint32_t x6879 = 1U;
	int32_t x6880 = INT32_MIN;
	static uint64_t t91 = 627277970469519533LLU;

	t91 = (x6877*((x6878<<x6879)^x6880));

	if (t91 != 158041241901579714LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x7033 = INT32_MIN;
	uint64_t x7034 = 62275627294098LLU;
	int32_t x7035 = 5;
	int64_t x7036 = INT64_MAX;
	volatile uint64_t t92 = 66002LLU;

	t92 = (x7033*((x7034<<x7035)^x7036));

	if (t92 != 14576420402570985472LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x7121 = UINT8_MAX;
	uint16_t x7122 = UINT16_MAX;
	uint16_t x7123 = 1U;
	int64_t x7124 = -1LL;
	int64_t t93 = -2820527LL;

	t93 = (x7121*((x7122<<x7123)^x7124));

	if (t93 != -33423105LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x7129 = -1LL;
	uint16_t x7130 = UINT16_MAX;
	int16_t x7132 = -108;

	t94 = (x7129*((x7130<<x7131)^x7132));

	if (t94 != 16777068LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x7257 = 40;
	static uint64_t x7258 = 1LLU;
	static int16_t x7259 = 23;
	uint64_t x7260 = 133203585435784555LLU;
	static volatile uint64_t t95 = 13136071551419LLU;

	t95 = (x7257*((x7258<<x7259)^x7260));

	if (t95 != 5328143417095837880LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x7274 = 165880U;
	int32_t x7275 = 1;
	int64_t x7276 = -209224170418LL;
	volatile int64_t t96 = -64957712957601LL;

	t96 = (x7273*((x7274<<x7275)^x7276));

	if (t96 != 6855863996317696LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x7321 = -521898105LL;
	static uint64_t x7323 = 2LLU;
	uint32_t x7324 = 1971395358U;
	volatile int64_t t97 = 14799138800370LL;

	t97 = (x7321*((x7322<<x7323)^x7324));

	if (t97 != -1028867470232110290LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x7421 = 20076U;
	uint64_t x7422 = 42994LLU;
	int32_t x7424 = INT32_MAX;
	static uint64_t t98 = 206336209155LLU;

	t98 = (x7421*((x7422<<x7423)^x7424));

	if (t98 != 15899304506941223316LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x7501 = INT8_MAX;
	int16_t x7503 = 0;
	int64_t x7504 = INT64_MAX;

	t99 = (x7501*((x7502<<x7503)^x7504));

	if (t99 != 0LL) { NG(); } else { ; }
	
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


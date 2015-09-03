#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x150 = INT32_MAX;
int16_t x151 = 853;
int64_t x245 = -1489039LL;
uint8_t x272 = 1U;
uint64_t x273 = UINT64_MAX;
int16_t x276 = 2;
int16_t x306 = -1;
uint8_t x460 = 0U;
int8_t x559 = INT8_MIN;
uint32_t t13 = 0U;
volatile int8_t x640 = 0;
int8_t x657 = 11;
static uint8_t x707 = UINT8_MAX;
static uint8_t x708 = 23U;
uint64_t x781 = 197413127135784LLU;
uint64_t t17 = 3LLU;
int32_t x785 = INT32_MIN;
uint32_t x829 = UINT32_MAX;
static uint32_t x859 = 2044472379U;
int64_t t21 = -246815LL;
int8_t x1325 = -1;
static volatile uint64_t x1327 = UINT64_MAX;
int32_t x1703 = INT32_MAX;
uint8_t x1911 = 24U;
uint8_t x1930 = 7U;
int32_t x1965 = INT32_MAX;
uint64_t x1998 = 21491LLU;
uint8_t x2149 = 10U;
uint64_t x2150 = 1542298314740926634LLU;
uint8_t x2220 = 1U;
volatile uint64_t t34 = 238743LLU;
volatile uint32_t t35 = 49U;
int32_t x2257 = 8301873;
int8_t x2280 = 12;
volatile uint32_t x2386 = UINT32_MAX;
uint8_t x2388 = 46U;
volatile int64_t x2513 = -1LL;
volatile int64_t t43 = 1LL;
int8_t x2637 = INT8_MAX;
int8_t x2653 = 50;
int16_t x2654 = INT16_MIN;
uint8_t x2736 = 1U;
static volatile uint64_t t47 = 434611608834327LLU;
int32_t x2789 = 681796;
volatile int64_t x2835 = INT64_MIN;
static uint64_t t51 = 2988142065748083LLU;
uint32_t t52 = 1U;
int8_t x3076 = 42;
int32_t x3081 = INT32_MIN;
uint32_t x3082 = 923659U;
uint64_t x3283 = 145108707LLU;
uint64_t t55 = 64350LLU;
uint64_t x3319 = 0LLU;
uint32_t t58 = 35757U;
uint64_t x3607 = UINT64_MAX;
uint8_t x3731 = 14U;
static int16_t x3743 = INT16_MAX;
int8_t x3745 = 44;
int16_t x3746 = 24;
volatile int16_t x4090 = -1;
int64_t x4150 = INT64_MAX;
static volatile int32_t x4241 = 22684;
static uint64_t x4242 = 73610163640LLU;
int8_t x4258 = INT8_MAX;
volatile uint16_t x4265 = UINT16_MAX;
static uint64_t x4273 = 97259LLU;
uint64_t t73 = UINT64_MAX;
static int16_t x4388 = 1;
uint16_t x4488 = 1U;
uint32_t x4555 = UINT32_MAX;
static uint32_t x4623 = 12U;
int16_t x4855 = INT16_MIN;
volatile int8_t x5045 = 1;
uint32_t x5048 = 14U;
int16_t x5069 = -1;
volatile uint16_t x5282 = UINT16_MAX;
int16_t x5283 = INT16_MIN;
int16_t x5321 = INT16_MIN;
int64_t x5406 = -1LL;
static uint64_t x5438 = 1454809117893512906LLU;
uint16_t x5598 = 32656U;
uint64_t x5865 = 125525682262892843LLU;
uint64_t x5994 = 453236486102441468LLU;
volatile uint64_t t96 = 15058112835LLU;
int32_t x6414 = -1;


void f0(void) {
	uint64_t x97 = 15241LLU;
	static uint8_t x98 = UINT8_MAX;
	int64_t x99 = INT64_MAX;
	int8_t x100 = 15;
	static volatile uint64_t t0 = 8664932227262LLU;

	t0 = (((x97+x98)|x99)<<x100);

	if (t0 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x149 = 782U;
	static volatile int32_t x152 = 18;
	uint32_t t1 = 8722U;

	t1 = (((x149+x150)|x151)<<x152);

	if (t1 != 225705984U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x157 = INT16_MAX;
	int16_t x158 = INT16_MIN;
	uint32_t x159 = 262689519U;
	uint8_t x160 = 7U;
	static volatile uint32_t t2 = 23401469U;

	t2 = (((x157+x158)|x159)<<x160);

	if (t2 != 4294967168U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x177 = INT64_MIN;
	uint64_t x178 = 18088LLU;
	static uint16_t x179 = UINT16_MAX;
	uint16_t x180 = 1U;
	uint64_t t3 = 45787810048LLU;

	t3 = (((x177+x178)|x179)<<x180);

	if (t3 != 131070LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x246 = -1;
	uint64_t x247 = UINT64_MAX;
	static int16_t x248 = 0;
	uint64_t t4 = UINT64_MAX;

	t4 = (((x245+x246)|x247)<<x248);

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x269 = -1;
	uint8_t x270 = UINT8_MAX;
	static uint8_t x271 = UINT8_MAX;
	static volatile int32_t t5 = 49215983;

	t5 = (((x269+x270)|x271)<<x272);

	if (t5 != 510) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x274 = UINT32_MAX;
	int64_t x275 = 1489605047LL;
	volatile uint64_t t6 = 882348512LLU;

	t6 = (((x273+x274)|x275)<<x276);

	if (t6 != 17179869180LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x305 = 68255401LLU;
	int16_t x307 = INT16_MIN;
	uint8_t x308 = 4U;
	uint64_t t7 = 3660228022664LLU;

	t7 = (((x305+x306)|x307)<<x308);

	if (t7 != 18446744073709546112LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x413 = UINT64_MAX;
	int16_t x414 = 2;
	int16_t x415 = INT16_MAX;
	uint8_t x416 = 6U;
	uint64_t t8 = 40654515LLU;

	t8 = (((x413+x414)|x415)<<x416);

	if (t8 != 2097088LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x425 = -1;
	uint16_t x426 = 1U;
	static uint64_t x427 = UINT64_MAX;
	volatile int8_t x428 = 25;
	uint64_t t9 = 1476099558988LLU;

	t9 = (((x425+x426)|x427)<<x428);

	if (t9 != 18446744073675997184LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x457 = UINT16_MAX;
	static int8_t x458 = INT8_MAX;
	volatile uint32_t x459 = 4U;
	volatile uint32_t t10 = 1041706843U;

	t10 = (((x457+x458)|x459)<<x460);

	if (t10 != 65662U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x557 = UINT64_MAX;
	static uint32_t x558 = UINT32_MAX;
	volatile uint8_t x560 = 11U;
	volatile uint64_t t11 = 3520307628334636LLU;

	t11 = (((x557+x558)|x559)<<x560);

	if (t11 != 18446744073709547520LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x577 = 1LLU;
	int16_t x578 = INT16_MAX;
	int8_t x579 = INT8_MAX;
	volatile uint8_t x580 = 0U;
	static volatile uint64_t t12 = 19862606730233LLU;

	t12 = (((x577+x578)|x579)<<x580);

	if (t12 != 32895LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x625 = -31;
	uint32_t x626 = 31870836U;
	uint8_t x627 = UINT8_MAX;
	uint8_t x628 = 0U;

	t13 = (((x625+x626)|x627)<<x628);

	if (t13 != 31870975U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x637 = 28165211547508828LLU;
	int16_t x638 = INT16_MAX;
	int8_t x639 = -1;
	static uint64_t t14 = UINT64_MAX;

	t14 = (((x637+x638)|x639)<<x640);

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x658 = 145U;
	uint8_t x659 = 0U;
	uint8_t x660 = 12U;
	static volatile uint32_t t15 = 246839U;

	t15 = (((x657+x658)|x659)<<x660);

	if (t15 != 638976U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x705 = 500LLU;
	uint64_t x706 = 0LLU;
	volatile uint64_t t16 = 371488491841317LLU;

	t16 = (((x705+x706)|x707)<<x708);

	if (t16 != 4286578688LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x782 = -1;
	int32_t x783 = INT32_MIN;
	uint8_t x784 = 0U;

	t17 = (((x781+x782)|x783)<<x784);

	if (t17 != 18446744072959894055LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x786 = 16037185601371990LLU;
	int32_t x787 = -1;
	uint16_t x788 = 6U;
	volatile uint64_t t18 = 1202474776547LLU;

	t18 = (((x785+x786)|x787)<<x788);

	if (t18 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x830 = 13853930640LLU;
	volatile int16_t x831 = -1;
	static volatile uint16_t x832 = 17U;
	volatile uint64_t t19 = 3191844323LLU;

	t19 = (((x829+x830)|x831)<<x832);

	if (t19 != 18446744073709420544LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x857 = 2LL;
	uint8_t x858 = 51U;
	int16_t x860 = 2;
	int64_t t20 = -1LL;

	t20 = (((x857+x858)|x859)<<x860);

	if (t20 != 8177889532LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x977 = -1LL;
	volatile uint8_t x978 = 1U;
	int8_t x979 = 51;
	uint8_t x980 = 0U;

	t21 = (((x977+x978)|x979)<<x980);

	if (t21 != 51LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x1313 = -696;
	static int64_t x1314 = 1051049688531839LL;
	volatile int8_t x1315 = 9;
	uint16_t x1316 = 2U;
	volatile int64_t t22 = -209815071LL;

	t22 = (((x1313+x1314)|x1315)<<x1316);

	if (t22 != 4204198754124604LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint8_t x1326 = 6U;
	uint8_t x1328 = 14U;
	volatile uint64_t t23 = 9711323306199530LLU;

	t23 = (((x1325+x1326)|x1327)<<x1328);

	if (t23 != 18446744073709535232LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x1397 = UINT32_MAX;
	uint8_t x1398 = UINT8_MAX;
	int8_t x1399 = INT8_MIN;
	uint64_t x1400 = 11LLU;
	volatile uint32_t t24 = 1789060352U;

	t24 = (((x1397+x1398)|x1399)<<x1400);

	if (t24 != 4294963200U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1585 = 422985U;
	int32_t x1586 = -17155819;
	uint64_t x1587 = 1077985007975LLU;
	int64_t x1588 = 24LL;
	volatile uint64_t t25 = 101256877LLU;

	t25 = (((x1585+x1586)|x1587)<<x1588);

	if (t25 != 18086431903509905408LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x1701 = 1;
	uint16_t x1702 = 1460U;
	uint8_t x1704 = 0U;
	int32_t t26 = INT32_MAX;

	t26 = (((x1701+x1702)|x1703)<<x1704);

	if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x1845 = 155938;
	int32_t x1846 = -23477;
	uint64_t x1847 = 15831LLU;
	volatile int32_t x1848 = 0;
	volatile uint64_t t27 = 78764LLU;

	t27 = (((x1845+x1846)|x1847)<<x1848);

	if (t27 != 146943LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1909 = INT16_MAX;
	uint8_t x1910 = 18U;
	volatile int8_t x1912 = 0;
	volatile int32_t t28 = -103467369;

	t28 = (((x1909+x1910)|x1911)<<x1912);

	if (t28 != 32793) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x1929 = INT16_MAX;
	volatile uint16_t x1931 = 24619U;
	uint16_t x1932 = 1U;
	int32_t t29 = -1098;

	t29 = (((x1929+x1930)|x1931)<<x1932);

	if (t29 != 114782) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x1966 = 584268631405932LLU;
	static int16_t x1967 = 1841;
	int16_t x1968 = 31;
	volatile uint64_t t30 = 737327874985109LLU;

	t30 = (((x1965+x1966)|x1967)<<x1968);

	if (t30 != 1305265152089653248LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1997 = INT16_MIN;
	int32_t x1999 = INT32_MIN;
	int64_t x2000 = 0LL;
	uint64_t t31 = 15250553LLU;

	t31 = (((x1997+x1998)|x1999)<<x2000);

	if (t31 != 18446744073709540339LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x2037 = 25694626U;
	int32_t x2038 = 42285677;
	uint64_t x2039 = 4521495702LLU;
	uint8_t x2040 = 59U;
	volatile uint64_t t32 = 35251LLU;

	t32 = (((x2037+x2038)|x2039)<<x2040);

	if (t32 != 17870283321406128128LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x2151 = 3990364856LL;
	volatile int16_t x2152 = 0;
	volatile uint64_t t33 = 9193507817999687236LLU;

	t33 = (((x2149+x2150)|x2151)<<x2152);

	if (t33 != 1542298317627140796LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x2217 = 23011878128LLU;
	int64_t x2218 = INT64_MIN;
	int64_t x2219 = 1443057715584162002LL;

	t34 = (((x2217+x2218)|x2219)<<x2220);

	if (t34 != 2886115476268644836LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x2225 = 131129458U;
	int16_t x2226 = 11677;
	int8_t x2227 = -1;
	uint8_t x2228 = 15U;

	t35 = (((x2225+x2226)|x2227)<<x2228);

	if (t35 != 4294934528U) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x2258 = 104U;
	volatile uint32_t x2259 = 554578690U;
	static int8_t x2260 = 13;
	volatile uint32_t t36 = 572U;

	t36 = (((x2257+x2258)|x2259)<<x2260);

	if (t36 != 3623051264U) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x2277 = 159687154125069LLU;
	uint16_t x2278 = UINT16_MAX;
	volatile int16_t x2279 = -1;
	volatile uint64_t t37 = 3881363336487LLU;

	t37 = (((x2277+x2278)|x2279)<<x2280);

	if (t37 != 18446744073709547520LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x2297 = 29U;
	static int8_t x2298 = -1;
	uint64_t x2299 = 39581560259652918LLU;
	int8_t x2300 = 26;
	uint64_t t38 = 566120LLU;

	t38 = (((x2297+x2298)|x2299)<<x2300);

	if (t38 != 16184734972303638528LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x2305 = UINT64_MAX;
	static int16_t x2306 = -1;
	int64_t x2307 = INT64_MIN;
	int8_t x2308 = 3;
	static uint64_t t39 = 3721LLU;

	t39 = (((x2305+x2306)|x2307)<<x2308);

	if (t39 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x2341 = 771LLU;
	uint16_t x2342 = 2159U;
	int16_t x2343 = INT16_MAX;
	int16_t x2344 = 0;
	volatile uint64_t t40 = 1741LLU;

	t40 = (((x2341+x2342)|x2343)<<x2344);

	if (t40 != 32767LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x2385 = 1U;
	uint64_t x2387 = 520323791413LLU;
	volatile uint64_t t41 = 516302354237182148LLU;

	t41 = (((x2385+x2386)|x2387)<<x2388);

	if (t41 != 13730701207666688000LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x2497 = 3LL;
	int64_t x2498 = -1LL;
	static int16_t x2499 = INT16_MAX;
	int16_t x2500 = 2;
	volatile int64_t t42 = -60LL;

	t42 = (((x2497+x2498)|x2499)<<x2500);

	if (t42 != 131068LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x2514 = 55;
	uint8_t x2515 = 0U;
	uint16_t x2516 = 2U;

	t43 = (((x2513+x2514)|x2515)<<x2516);

	if (t43 != 216LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x2589 = -1;
	uint16_t x2590 = UINT16_MAX;
	uint16_t x2591 = 96U;
	uint16_t x2592 = 0U;
	int32_t t44 = 27947;

	t44 = (((x2589+x2590)|x2591)<<x2592);

	if (t44 != 65534) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x2638 = 32454383U;
	static int32_t x2639 = -48145;
	int64_t x2640 = 1LL;
	volatile uint32_t t45 = 5541389U;

	t45 = (((x2637+x2638)|x2639)<<x2640);

	if (t45 != 4294897630U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x2655 = 73126867995130266LLU;
	static uint8_t x2656 = 8U;
	volatile uint64_t t46 = 31LLU;

	t46 = (((x2653+x2654)|x2655)<<x2656);

	if (t46 != 18446744073709140480LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x2733 = -1;
	uint64_t x2734 = UINT64_MAX;
	uint8_t x2735 = UINT8_MAX;

	t47 = (((x2733+x2734)|x2735)<<x2736);

	if (t47 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x2790 = INT8_MIN;
	static volatile uint16_t x2791 = 1U;
	uint8_t x2792 = 2U;
	volatile int32_t t48 = 12;

	t48 = (((x2789+x2790)|x2791)<<x2792);

	if (t48 != 2726676) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x2833 = 1168548819982062LLU;
	int64_t x2834 = -20281977412051LL;
	uint8_t x2836 = 27U;
	volatile uint64_t t49 = 19486076LLU;

	t49 = (((x2833+x2834)|x2835)<<x2836);

	if (t49 != 13666755710963154944LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x2909 = 3504700520457LL;
	int32_t x2910 = INT32_MIN;
	static uint16_t x2911 = 13187U;
	uint64_t x2912 = 6LLU;
	volatile int64_t t50 = 774441711191LL;

	t50 = (((x2909+x2910)|x2911)<<x2912);

	if (t50 != 224163394413248LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x2937 = INT16_MIN;
	uint64_t x2938 = 8391583135084585018LLU;
	int32_t x2939 = INT32_MAX;
	volatile uint8_t x2940 = 49U;

	t51 = (((x2937+x2938)|x2939)<<x2940);

	if (t51 != 18446181123756130304LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x2961 = UINT32_MAX;
	int8_t x2962 = INT8_MAX;
	int16_t x2963 = INT16_MIN;
	uint8_t x2964 = 4U;

	t52 = (((x2961+x2962)|x2963)<<x2964);

	if (t52 != 4294445024U) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x3073 = -1;
	volatile uint64_t x3074 = UINT64_MAX;
	static int16_t x3075 = -1;
	uint64_t t53 = 13030LLU;

	t53 = (((x3073+x3074)|x3075)<<x3076);

	if (t53 != 18446739675663040512LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x3083 = 1LL;
	int8_t x3084 = 0;
	static int64_t t54 = 3751060956736LL;

	t54 = (((x3081+x3082)|x3083)<<x3084);

	if (t54 != 2148407307LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x3281 = INT8_MIN;
	uint32_t x3282 = UINT32_MAX;
	uint32_t x3284 = 24U;

	t55 = (((x3281+x3282)|x3283)<<x3284);

	if (t55 != 72057594021150720LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x3289 = INT16_MIN;
	int8_t x3290 = INT8_MIN;
	uint32_t x3291 = 78U;
	uint8_t x3292 = 28U;
	static uint32_t t56 = 2427846U;

	t56 = (((x3289+x3290)|x3291)<<x3292);

	if (t56 != 3758096384U) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x3317 = 0;
	uint64_t x3318 = 24955525LLU;
	uint8_t x3320 = 2U;
	volatile uint64_t t57 = 743715126065461061LLU;

	t57 = (((x3317+x3318)|x3319)<<x3320);

	if (t57 != 99822100LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x3409 = -1;
	uint32_t x3410 = 31U;
	static uint32_t x3411 = UINT32_MAX;
	static uint8_t x3412 = 5U;

	t58 = (((x3409+x3410)|x3411)<<x3412);

	if (t58 != 4294967264U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x3605 = UINT8_MAX;
	static int64_t x3606 = -36719311076125LL;
	static int8_t x3608 = 3;
	static uint64_t t59 = 108LLU;

	t59 = (((x3605+x3606)|x3607)<<x3608);

	if (t59 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x3661 = UINT64_MAX;
	uint8_t x3662 = 1U;
	volatile int8_t x3663 = 1;
	uint16_t x3664 = 19U;
	uint64_t t60 = 95828647LLU;

	t60 = (((x3661+x3662)|x3663)<<x3664);

	if (t60 != 524288LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x3677 = 1093758072734617LLU;
	volatile uint8_t x3678 = UINT8_MAX;
	volatile int32_t x3679 = -1;
	uint8_t x3680 = 33U;
	uint64_t t61 = 120653237773LLU;

	t61 = (((x3677+x3678)|x3679)<<x3680);

	if (t61 != 18446744065119617024LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x3729 = UINT16_MAX;
	volatile int8_t x3730 = -1;
	volatile uint8_t x3732 = 4U;
	int32_t t62 = -7749968;

	t62 = (((x3729+x3730)|x3731)<<x3732);

	if (t62 != 1048544) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x3741 = 4U;
	int32_t x3742 = -1;
	int64_t x3744 = 2LL;
	int32_t t63 = -1;

	t63 = (((x3741+x3742)|x3743)<<x3744);

	if (t63 != 131068) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x3747 = 153448382611781LLU;
	uint16_t x3748 = 5U;
	uint64_t t64 = 199868079449875193LLU;

	t64 = (((x3745+x3746)|x3747)<<x3748);

	if (t64 != 4910348243576992LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x3801 = 88483918985LLU;
	volatile int64_t x3802 = -1LL;
	int32_t x3803 = INT32_MIN;
	int8_t x3804 = 1;
	volatile uint64_t t65 = 459597043334LLU;

	t65 = (((x3801+x3802)|x3803)<<x3804);

	if (t65 != 18446744070288763152LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x3989 = 2LLU;
	uint32_t x3990 = UINT32_MAX;
	uint32_t x3991 = UINT32_MAX;
	volatile int8_t x3992 = 0;
	volatile uint64_t t66 = 24705430706080LLU;

	t66 = (((x3989+x3990)|x3991)<<x3992);

	if (t66 != 8589934591LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x4089 = 3;
	static volatile int64_t x4091 = 13304LL;
	uint64_t x4092 = 42LLU;
	static volatile int64_t t67 = -2118863024075773218LL;

	t67 = (((x4089+x4090)|x4091)<<x4092);

	if (t67 != 58520406876749824LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x4149 = UINT64_MAX;
	int8_t x4151 = -10;
	uint16_t x4152 = 23U;
	uint64_t t68 = 466012650046LLU;

	t68 = (((x4149+x4150)|x4151)<<x4152);

	if (t68 != 18446744073692774400LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x4209 = 91U;
	uint32_t x4210 = 158901954U;
	uint8_t x4211 = UINT8_MAX;
	uint32_t x4212 = 28U;
	uint32_t t69 = 282704U;

	t69 = (((x4209+x4210)|x4211)<<x4212);

	if (t69 != 4026531840U) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x4243 = INT16_MAX;
	uint16_t x4244 = 0U;
	uint64_t t70 = 1LLU;

	t70 = (((x4241+x4242)|x4243)<<x4244);

	if (t70 != 73610199039LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x4257 = 0U;
	int64_t x4259 = 7076996455333LL;
	volatile uint8_t x4260 = 3U;
	int64_t t71 = 74625598LL;

	t71 = (((x4257+x4258)|x4259)<<x4260);

	if (t71 != 56615971643384LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x4266 = 580678910LLU;
	volatile int16_t x4267 = INT16_MIN;
	static uint8_t x4268 = 17U;
	volatile uint64_t t72 = 2LLU;

	t72 = (((x4265+x4266)|x4267)<<x4268);

	if (t72 != 18446744073340059648LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x4274 = 123174LL;
	int64_t x4275 = -1LL;
	uint16_t x4276 = 0U;

	t73 = (((x4273+x4274)|x4275)<<x4276);

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x4385 = -1;
	uint32_t x4386 = UINT32_MAX;
	volatile int16_t x4387 = INT16_MAX;
	static uint32_t t74 = 1071833U;

	t74 = (((x4385+x4386)|x4387)<<x4388);

	if (t74 != 4294967294U) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x4485 = 6508252160497322541LLU;
	static int32_t x4486 = -1;
	static int8_t x4487 = INT8_MIN;
	volatile uint64_t t75 = 699LLU;

	t75 = (((x4485+x4486)|x4487)<<x4488);

	if (t75 != 18446744073709551448LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x4513 = 2599472U;
	volatile int16_t x4514 = -126;
	int8_t x4515 = 0;
	uint16_t x4516 = 28U;
	static uint32_t t76 = 336210117U;

	t76 = (((x4513+x4514)|x4515)<<x4516);

	if (t76 != 536870912U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x4553 = -1;
	static uint16_t x4554 = 218U;
	volatile int8_t x4556 = 0;
	uint32_t t77 = UINT32_MAX;

	t77 = (((x4553+x4554)|x4555)<<x4556);

	if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x4621 = 7;
	static uint16_t x4622 = UINT16_MAX;
	int16_t x4624 = 0;
	uint32_t t78 = 3912432U;

	t78 = (((x4621+x4622)|x4623)<<x4624);

	if (t78 != 65550U) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x4737 = 25U;
	int64_t x4738 = INT64_MIN;
	uint64_t x4739 = 6991LLU;
	static uint8_t x4740 = 10U;
	static uint64_t t79 = 38397LLU;

	t79 = (((x4737+x4738)|x4739)<<x4740);

	if (t79 != 7175168LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x4853 = 113LLU;
	int16_t x4854 = INT16_MIN;
	uint8_t x4856 = 1U;
	volatile uint64_t t80 = 89876LLU;

	t80 = (((x4853+x4854)|x4855)<<x4856);

	if (t80 != 18446744073709486306LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x5046 = -1;
	static volatile uint16_t x5047 = 0U;
	volatile int32_t t81 = 117;

	t81 = (((x5045+x5046)|x5047)<<x5048);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x5070 = UINT16_MAX;
	volatile int16_t x5071 = INT16_MAX;
	volatile uint32_t x5072 = 0U;
	static int32_t t82 = 1;

	t82 = (((x5069+x5070)|x5071)<<x5072);

	if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x5281 = 47U;
	int8_t x5284 = 2;
	uint32_t t83 = 110U;

	t83 = (((x5281+x5282)|x5283)<<x5284);

	if (t83 != 4294836408U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x5289 = INT8_MAX;
	static uint32_t x5290 = 245670606U;
	uint16_t x5291 = UINT16_MAX;
	uint16_t x5292 = 16U;
	volatile uint32_t t84 = 30U;

	t84 = (((x5289+x5290)|x5291)<<x5292);

	if (t84 != 4294901760U) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x5322 = UINT64_MAX;
	int32_t x5323 = INT32_MAX;
	uint8_t x5324 = 56U;
	static uint64_t t85 = 376515308057669LLU;

	t85 = (((x5321+x5322)|x5323)<<x5324);

	if (t85 != 18374686479671623680LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint8_t x5405 = 4U;
	static volatile uint8_t x5407 = 0U;
	static uint8_t x5408 = 3U;
	static int64_t t86 = -47LL;

	t86 = (((x5405+x5406)|x5407)<<x5408);

	if (t86 != 24LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x5437 = 23U;
	uint8_t x5439 = UINT8_MAX;
	static int8_t x5440 = 0;
	static volatile uint64_t t87 = 28222463688411LLU;

	t87 = (((x5437+x5438)|x5439)<<x5440);

	if (t87 != 1454809117893512959LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x5485 = 565175LLU;
	uint64_t x5486 = 451698259187918632LLU;
	static uint16_t x5487 = UINT16_MAX;
	int8_t x5488 = 59;
	uint64_t t88 = 885LLU;

	t88 = (((x5485+x5486)|x5487)<<x5488);

	if (t88 != 17870283321406128128LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x5497 = 3821U;
	uint16_t x5498 = 15380U;
	static int64_t x5499 = 56253LL;
	static int8_t x5500 = 21;
	volatile int64_t t89 = -144400291398478616LL;

	t89 = (((x5497+x5498)|x5499)<<x5500);

	if (t89 != 117971091456LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x5597 = 4U;
	static volatile uint8_t x5599 = 19U;
	int8_t x5600 = 1;
	volatile int32_t t90 = 229822;

	t90 = (((x5597+x5598)|x5599)<<x5600);

	if (t90 != 65326) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x5769 = -344;
	int16_t x5770 = -1;
	volatile uint32_t x5771 = 260479166U;
	int8_t x5772 = 20;
	volatile uint32_t t91 = 111539U;

	t91 = (((x5769+x5770)|x5771)<<x5772);

	if (t91 != 3958374400U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x5857 = INT32_MIN;
	static volatile uint64_t x5858 = 87075333840LLU;
	int32_t x5859 = -1;
	uint8_t x5860 = 0U;
	uint64_t t92 = UINT64_MAX;

	t92 = (((x5857+x5858)|x5859)<<x5860);

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x5866 = 651683U;
	uint8_t x5867 = 0U;
	volatile int8_t x5868 = 0;
	volatile uint64_t t93 = 142531649067LLU;

	t93 = (((x5865+x5866)|x5867)<<x5868);

	if (t93 != 125525682263544526LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x5993 = 2224LLU;
	int8_t x5995 = INT8_MIN;
	int16_t x5996 = 1;
	uint64_t t94 = 1892666LLU;

	t94 = (((x5993+x5994)|x5995)<<x5996);

	if (t94 != 18446744073709551448LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x6149 = INT16_MIN;
	static uint32_t x6150 = UINT32_MAX;
	int8_t x6151 = -1;
	uint16_t x6152 = 25U;
	volatile uint32_t t95 = 1921905373U;

	t95 = (((x6149+x6150)|x6151)<<x6152);

	if (t95 != 4261412864U) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x6281 = 421513081679313403LLU;
	volatile uint64_t x6282 = UINT64_MAX;
	int16_t x6283 = INT16_MIN;
	volatile uint8_t x6284 = 3U;

	t96 = (((x6281+x6282)|x6283)<<x6284);

	if (t96 != 18446744073709539280LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int32_t x6301 = INT32_MIN;
	uint64_t x6302 = 8369272LLU;
	static int16_t x6303 = INT16_MAX;
	uint8_t x6304 = 0U;
	volatile uint64_t t97 = 839744005930133539LLU;

	t97 = (((x6301+x6302)|x6303)<<x6304);

	if (t97 != 18446744071570456575LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x6413 = 52649785838233102LLU;
	static volatile int32_t x6415 = INT32_MAX;
	int8_t x6416 = 0;
	static uint64_t t98 = 737653LLU;

	t98 = (((x6413+x6414)|x6415)<<x6416);

	if (t98 != 52649787878539263LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x6417 = 18LLU;
	uint32_t x6418 = 6U;
	uint64_t x6419 = UINT64_MAX;
	int16_t x6420 = 0;
	uint64_t t99 = UINT64_MAX;

	t99 = (((x6417+x6418)|x6419)<<x6420);

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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


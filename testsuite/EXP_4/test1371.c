#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x30 = 0U;
int16_t x273 = 1;
static int32_t t2 = -6297;
static uint8_t x310 = 1U;
static uint64_t x373 = 43656298686LLU;
volatile uint64_t t5 = 70277210095495238LLU;
int64_t x428 = -1LL;
int16_t x445 = INT16_MAX;
int8_t x448 = INT8_MAX;
int32_t x712 = INT32_MAX;
uint32_t x742 = 9U;
uint8_t x743 = 2U;
int32_t t9 = 35;
static volatile int32_t t10 = -1813;
uint8_t x846 = 4U;
volatile uint16_t x860 = 1U;
static volatile uint32_t t13 = 692690538U;
uint16_t x1148 = 197U;
int8_t x1210 = 1;
int16_t x1211 = INT16_MAX;
static int64_t x1345 = INT64_MAX;
static uint64_t x1348 = 64588439335LLU;
int8_t x1363 = 26;
int16_t x1364 = INT16_MIN;
static uint32_t t20 = 25906571U;
volatile int16_t x1615 = -3;
int16_t x1753 = 1;
static int8_t x1754 = 1;
volatile int32_t t26 = 6794215;
int8_t x2151 = INT8_MIN;
uint16_t x2178 = 17U;
static volatile uint64_t t30 = 3807LLU;
int8_t x2386 = 39;
static volatile uint16_t x2613 = 3672U;
int16_t x2615 = -1;
int16_t x2711 = -1;
int32_t x2751 = -1;
uint64_t t39 = 148030803178556LLU;
int8_t x2813 = INT8_MAX;
int32_t t41 = 11;
volatile int32_t x2939 = 404;
uint8_t x2990 = 7U;
uint16_t x2996 = 20U;
int32_t t44 = 73587;
static uint16_t x3103 = UINT16_MAX;
uint8_t x3116 = UINT8_MAX;
static int16_t x3151 = INT16_MIN;
int8_t x3180 = -3;
int8_t x3221 = INT8_MAX;
int64_t x3529 = 91683248400163LL;
static uint16_t x3530 = 14U;
static int32_t x3582 = 6;
static uint16_t x3584 = UINT16_MAX;
int64_t x4099 = 27121653723LL;
uint64_t x4124 = 19663429LLU;
uint64_t x4144 = 411LLU;
uint16_t x4160 = UINT16_MAX;
uint64_t t60 = 800867292443LLU;
int8_t x4515 = -1;
uint16_t x4624 = UINT16_MAX;
int8_t x4724 = -63;
uint16_t x4836 = UINT16_MAX;
int32_t t68 = -10272611;
int32_t t71 = 3;
volatile uint8_t x5762 = 29U;
uint16_t x5828 = 18540U;
volatile uint32_t t81 = 4U;
uint32_t x5910 = 0U;
uint8_t x5911 = 47U;
volatile int8_t x5912 = -16;
volatile int16_t x5916 = 1;
int32_t x5939 = 3999459;
volatile uint16_t x5999 = 6U;
uint32_t x6015 = 229095038U;
uint8_t x6094 = 6U;
static int32_t t88 = -39985;
static uint8_t x6156 = UINT8_MAX;
static uint32_t t90 = 6734U;
volatile uint32_t x6324 = UINT32_MAX;
static uint64_t x6569 = UINT64_MAX;
static uint64_t x6602 = 1LLU;
volatile uint64_t t95 = 31951154991976LLU;
uint64_t x6789 = UINT64_MAX;
int32_t x6976 = INT32_MAX;


void f0(void) {
	volatile int16_t x29 = INT16_MAX;
	volatile uint32_t x31 = 7844U;
	volatile int64_t x32 = INT64_MIN;
	volatile int32_t t0 = -272858678;

	t0 = (x29<<(x30-(x31<x32)));

	if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x165 = INT16_MAX;
	int8_t x166 = 0;
	int8_t x167 = -7;
	volatile uint32_t x168 = 272180U;
	volatile int32_t t1 = -57108;

	t1 = (x165<<(x166-(x167<x168)));

	if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x274 = 9U;
	int32_t x275 = 2;
	uint16_t x276 = 83U;

	t2 = (x273<<(x274-(x275<x276)));

	if (t2 != 256) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x309 = UINT8_MAX;
	int8_t x311 = INT8_MIN;
	static uint16_t x312 = 78U;
	volatile int32_t t3 = 1;

	t3 = (x309<<(x310-(x311<x312)));

	if (t3 != 255) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x357 = UINT32_MAX;
	int8_t x358 = 14;
	static int32_t x359 = INT32_MIN;
	volatile uint16_t x360 = 0U;
	static volatile uint32_t t4 = 1U;

	t4 = (x357<<(x358-(x359<x360)));

	if (t4 != 4294959104U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x374 = 2U;
	int64_t x375 = INT64_MAX;
	static uint32_t x376 = 0U;

	t5 = (x373<<(x374-(x375<x376)));

	if (t5 != 174625194744LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x425 = UINT8_MAX;
	int32_t x426 = 2;
	uint64_t x427 = UINT64_MAX;
	static int32_t t6 = 2339042;

	t6 = (x425<<(x426-(x427<x428)));

	if (t6 != 1020) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x446 = 3U;
	volatile int8_t x447 = -37;
	static volatile int32_t t7 = 82839;

	t7 = (x445<<(x446-(x447<x448)));

	if (t7 != 131068) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x709 = 3;
	static int16_t x710 = 6;
	int16_t x711 = -3;
	int32_t t8 = -206141959;

	t8 = (x709<<(x710-(x711<x712)));

	if (t8 != 96) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x741 = 7U;
	uint64_t x744 = 6761782908747LLU;

	t9 = (x741<<(x742-(x743<x744)));

	if (t9 != 1792) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x769 = 26;
	volatile uint64_t x770 = 16LLU;
	int8_t x771 = INT8_MIN;
	uint32_t x772 = 1823U;

	t10 = (x769<<(x770-(x771<x772)));

	if (t10 != 1703936) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x837 = UINT32_MAX;
	uint16_t x838 = 20U;
	int8_t x839 = INT8_MAX;
	int16_t x840 = INT16_MIN;
	uint32_t t11 = 9891U;

	t11 = (x837<<(x838-(x839<x840)));

	if (t11 != 4293918720U) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x845 = 118U;
	volatile uint16_t x847 = 27662U;
	int32_t x848 = INT32_MIN;
	volatile int32_t t12 = -3;

	t12 = (x845<<(x846-(x847<x848)));

	if (t12 != 1888) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x857 = 14U;
	static uint32_t x858 = 2U;
	int16_t x859 = INT16_MIN;

	t13 = (x857<<(x858-(x859<x860)));

	if (t13 != 28U) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x1137 = UINT16_MAX;
	int8_t x1138 = 0;
	int16_t x1139 = 392;
	static int8_t x1140 = INT8_MIN;
	static volatile int32_t t14 = -703;

	t14 = (x1137<<(x1138-(x1139<x1140)));

	if (t14 != 65535) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x1145 = 4U;
	int64_t x1146 = 1LL;
	int16_t x1147 = INT16_MAX;
	static volatile int32_t t15 = -179;

	t15 = (x1145<<(x1146-(x1147<x1148)));

	if (t15 != 8) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x1165 = 204441355LL;
	uint16_t x1166 = 24U;
	int8_t x1167 = INT8_MIN;
	int16_t x1168 = -1;
	volatile int64_t t16 = 1047LL;

	t16 = (x1165<<(x1166-(x1167<x1168)));

	if (t16 != 1714978386083840LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x1209 = 1;
	static int16_t x1212 = -376;
	int32_t t17 = -688450046;

	t17 = (x1209<<(x1210-(x1211<x1212)));

	if (t17 != 2) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x1346 = 0U;
	volatile int8_t x1347 = -16;
	volatile int64_t t18 = INT64_MAX;

	t18 = (x1345<<(x1346-(x1347<x1348)));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x1361 = 1448U;
	int8_t x1362 = 0;
	uint32_t t19 = 183U;

	t19 = (x1361<<(x1362-(x1363<x1364)));

	if (t19 != 1448U) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x1449 = 15909501U;
	int8_t x1450 = 1;
	volatile uint64_t x1451 = UINT64_MAX;
	volatile int16_t x1452 = 2;

	t20 = (x1449<<(x1450-(x1451<x1452)));

	if (t20 != 31819002U) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1509 = UINT32_MAX;
	uint16_t x1510 = 3U;
	static int8_t x1511 = -18;
	volatile int16_t x1512 = INT16_MIN;
	uint32_t t21 = 9220U;

	t21 = (x1509<<(x1510-(x1511<x1512)));

	if (t21 != 4294967288U) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x1613 = UINT8_MAX;
	static volatile uint8_t x1614 = 9U;
	uint32_t x1616 = UINT32_MAX;
	int32_t t22 = -1231593;

	t22 = (x1613<<(x1614-(x1615<x1616)));

	if (t22 != 65280) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1749 = UINT16_MAX;
	volatile int8_t x1750 = 8;
	int64_t x1751 = -12730LL;
	int16_t x1752 = -1;
	static volatile int32_t t23 = 3;

	t23 = (x1749<<(x1750-(x1751<x1752)));

	if (t23 != 8388480) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1755 = 2U;
	uint16_t x1756 = 384U;
	int32_t t24 = -62555181;

	t24 = (x1753<<(x1754-(x1755<x1756)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x1773 = UINT64_MAX;
	volatile uint8_t x1774 = 7U;
	volatile int32_t x1775 = 128665;
	uint64_t x1776 = UINT64_MAX;
	uint64_t t25 = 1346294124195117LLU;

	t25 = (x1773<<(x1774-(x1775<x1776)));

	if (t25 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1873 = UINT8_MAX;
	int32_t x1874 = 14;
	int16_t x1875 = INT16_MAX;
	uint64_t x1876 = 394178592221003LLU;

	t26 = (x1873<<(x1874-(x1875<x1876)));

	if (t26 != 2088960) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x2105 = 3U;
	uint8_t x2106 = 3U;
	int8_t x2107 = -18;
	uint64_t x2108 = 15305LLU;
	int32_t t27 = -15203;

	t27 = (x2105<<(x2106-(x2107<x2108)));

	if (t27 != 24) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x2149 = INT8_MAX;
	int16_t x2150 = 9;
	int8_t x2152 = INT8_MAX;
	static volatile int32_t t28 = -26454862;

	t28 = (x2149<<(x2150-(x2151<x2152)));

	if (t28 != 32512) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x2177 = 4419753U;
	volatile uint32_t x2179 = UINT32_MAX;
	int64_t x2180 = INT64_MIN;
	uint32_t t29 = 55U;

	t29 = (x2177<<(x2178-(x2179<x2180)));

	if (t29 != 3780247552U) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x2197 = UINT64_MAX;
	int16_t x2198 = 7;
	int16_t x2199 = INT16_MIN;
	uint32_t x2200 = 56U;

	t30 = (x2197<<(x2198-(x2199<x2200)));

	if (t30 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x2337 = 520036583117953378LLU;
	static uint8_t x2338 = 15U;
	uint8_t x2339 = 7U;
	static int8_t x2340 = -1;
	volatile uint64_t t31 = 27741LLU;

	t31 = (x2337<<(x2338-(x2339<x2340)));

	if (t31 != 14213975575180148736LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x2369 = 7U;
	uint16_t x2370 = 8U;
	int8_t x2371 = 3;
	static uint16_t x2372 = UINT16_MAX;
	uint32_t t32 = 34367U;

	t32 = (x2369<<(x2370-(x2371<x2372)));

	if (t32 != 896U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x2385 = 39LLU;
	volatile int8_t x2387 = -4;
	volatile uint32_t x2388 = 1553830U;
	uint64_t t33 = 1104LLU;

	t33 = (x2385<<(x2386-(x2387<x2388)));

	if (t33 != 21440476741632LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x2437 = UINT16_MAX;
	static uint16_t x2438 = 6U;
	int16_t x2439 = -289;
	volatile int8_t x2440 = INT8_MIN;
	int32_t t34 = 92;

	t34 = (x2437<<(x2438-(x2439<x2440)));

	if (t34 != 2097120) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x2465 = 29U;
	uint16_t x2466 = 11U;
	uint8_t x2467 = UINT8_MAX;
	uint16_t x2468 = UINT16_MAX;
	int32_t t35 = 59496274;

	t35 = (x2465<<(x2466-(x2467<x2468)));

	if (t35 != 29696) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x2477 = 9988806U;
	static int64_t x2478 = 23LL;
	volatile int16_t x2479 = INT16_MIN;
	int16_t x2480 = -3847;
	uint32_t t36 = 54645U;

	t36 = (x2477<<(x2478-(x2479<x2480)));

	if (t36 != 2977955840U) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x2614 = 3U;
	uint16_t x2616 = UINT16_MAX;
	volatile int32_t t37 = -92277;

	t37 = (x2613<<(x2614-(x2615<x2616)));

	if (t37 != 14688) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2709 = INT16_MAX;
	uint8_t x2710 = 8U;
	int64_t x2712 = INT64_MIN;
	volatile int32_t t38 = 4767521;

	t38 = (x2709<<(x2710-(x2711<x2712)));

	if (t38 != 8388352) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x2749 = 33970671741562372LLU;
	static uint8_t x2750 = 59U;
	int32_t x2752 = -1;

	t39 = (x2749<<(x2750-(x2751<x2752)));

	if (t39 != 2305843009213693952LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x2814 = 5U;
	volatile uint8_t x2815 = 17U;
	uint8_t x2816 = 22U;
	volatile int32_t t40 = -3;

	t40 = (x2813<<(x2814-(x2815<x2816)));

	if (t40 != 2032) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x2829 = UINT8_MAX;
	int8_t x2830 = 9;
	int16_t x2831 = -3046;
	uint16_t x2832 = UINT16_MAX;

	t41 = (x2829<<(x2830-(x2831<x2832)));

	if (t41 != 65280) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x2937 = 22;
	uint16_t x2938 = 11U;
	int16_t x2940 = -1;
	int32_t t42 = -1;

	t42 = (x2937<<(x2938-(x2939<x2940)));

	if (t42 != 45056) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x2989 = 1;
	int8_t x2991 = 0;
	int64_t x2992 = 26LL;
	volatile int32_t t43 = 0;

	t43 = (x2989<<(x2990-(x2991<x2992)));

	if (t43 != 64) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x2993 = UINT16_MAX;
	uint16_t x2994 = 12U;
	int16_t x2995 = -37;

	t44 = (x2993<<(x2994-(x2995<x2996)));

	if (t44 != 134215680) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x3001 = 31U;
	int16_t x3002 = 0;
	volatile uint32_t x3003 = UINT32_MAX;
	uint32_t x3004 = 52U;
	int32_t t45 = -223001;

	t45 = (x3001<<(x3002-(x3003<x3004)));

	if (t45 != 31) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x3021 = 3;
	uint16_t x3022 = 5U;
	int64_t x3023 = -263518844811LL;
	int64_t x3024 = INT64_MIN;
	volatile int32_t t46 = -1258;

	t46 = (x3021<<(x3022-(x3023<x3024)));

	if (t46 != 96) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x3101 = 6329936U;
	uint8_t x3102 = 15U;
	int16_t x3104 = INT16_MIN;
	uint32_t t47 = 70098085U;

	t47 = (x3101<<(x3102-(x3103<x3104)));

	if (t47 != 1260912640U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x3113 = INT8_MAX;
	uint8_t x3114 = 1U;
	static int64_t x3115 = INT64_MIN;
	int32_t t48 = -6172;

	t48 = (x3113<<(x3114-(x3115<x3116)));

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x3149 = 0U;
	int64_t x3150 = 1LL;
	int32_t x3152 = INT32_MIN;
	volatile int32_t t49 = 13;

	t49 = (x3149<<(x3150-(x3151<x3152)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x3177 = 64454U;
	int8_t x3178 = 0;
	volatile int8_t x3179 = 29;
	uint32_t t50 = 158103U;

	t50 = (x3177<<(x3178-(x3179<x3180)));

	if (t50 != 64454U) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint32_t x3222 = 19U;
	static uint8_t x3223 = 17U;
	static int16_t x3224 = INT16_MIN;
	int32_t t51 = -128871112;

	t51 = (x3221<<(x3222-(x3223<x3224)));

	if (t51 != 66584576) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x3531 = -1;
	static uint8_t x3532 = 3U;
	volatile int64_t t52 = -11LL;

	t52 = (x3529<<(x3530-(x3531<x3532)));

	if (t52 != 751069170894135296LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x3581 = 364891LLU;
	uint8_t x3583 = 32U;
	uint64_t t53 = 2987762167LLU;

	t53 = (x3581<<(x3582-(x3583<x3584)));

	if (t53 != 11676512LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x3889 = 10328LLU;
	uint8_t x3890 = 7U;
	int16_t x3891 = -1;
	int8_t x3892 = INT8_MAX;
	uint64_t t54 = 824LLU;

	t54 = (x3889<<(x3890-(x3891<x3892)));

	if (t54 != 660992LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x3957 = UINT32_MAX;
	volatile uint16_t x3958 = 3U;
	int16_t x3959 = -1;
	static int16_t x3960 = -1;
	uint32_t t55 = 42250373U;

	t55 = (x3957<<(x3958-(x3959<x3960)));

	if (t55 != 4294967288U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x3997 = INT16_MAX;
	uint8_t x3998 = 16U;
	int8_t x3999 = 1;
	int8_t x4000 = -11;
	volatile int32_t t56 = 4213746;

	t56 = (x3997<<(x3998-(x3999<x4000)));

	if (t56 != 2147418112) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x4097 = 1675;
	volatile uint8_t x4098 = 11U;
	uint32_t x4100 = UINT32_MAX;
	int32_t t57 = 0;

	t57 = (x4097<<(x4098-(x4099<x4100)));

	if (t57 != 3430400) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int16_t x4121 = 1;
	uint8_t x4122 = 12U;
	volatile uint16_t x4123 = UINT16_MAX;
	volatile int32_t t58 = 2768739;

	t58 = (x4121<<(x4122-(x4123<x4124)));

	if (t58 != 2048) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x4141 = 1U;
	static int16_t x4142 = 15;
	volatile int32_t x4143 = INT32_MIN;
	int32_t t59 = -61841534;

	t59 = (x4141<<(x4142-(x4143<x4144)));

	if (t59 != 32768) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x4157 = UINT64_MAX;
	static uint32_t x4158 = 37U;
	int32_t x4159 = INT32_MIN;

	t60 = (x4157<<(x4158-(x4159<x4160)));

	if (t60 != 18446744004990074880LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x4369 = UINT16_MAX;
	static int16_t x4370 = 5;
	int64_t x4371 = INT64_MIN;
	static int64_t x4372 = -14724070899LL;
	int32_t t61 = 952828546;

	t61 = (x4369<<(x4370-(x4371<x4372)));

	if (t61 != 1048560) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x4453 = 2U;
	uint16_t x4454 = 7U;
	int32_t x4455 = INT32_MAX;
	int32_t x4456 = INT32_MIN;
	volatile int32_t t62 = 692741;

	t62 = (x4453<<(x4454-(x4455<x4456)));

	if (t62 != 256) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x4501 = 17579U;
	uint8_t x4502 = 27U;
	uint64_t x4503 = 119247160896407149LLU;
	volatile int64_t x4504 = INT64_MAX;
	uint32_t t63 = 0U;

	t63 = (x4501<<(x4502-(x4503<x4504)));

	if (t63 != 2885681152U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x4513 = 8917633786LL;
	uint8_t x4514 = 1U;
	int64_t x4516 = -1LL;
	volatile int64_t t64 = 10580135815303LL;

	t64 = (x4513<<(x4514-(x4515<x4516)));

	if (t64 != 17835267572LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x4621 = 75999302134535LLU;
	static uint16_t x4622 = 12U;
	int16_t x4623 = -1;
	static uint64_t t65 = 25147527372LLU;

	t65 = (x4621<<(x4622-(x4623<x4624)));

	if (t65 != 155646570771527680LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x4721 = 3U;
	volatile uint16_t x4722 = 0U;
	uint8_t x4723 = 1U;
	int32_t t66 = 716;

	t66 = (x4721<<(x4722-(x4723<x4724)));

	if (t66 != 3) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x4737 = 52U;
	static uint16_t x4738 = 10U;
	volatile uint8_t x4739 = UINT8_MAX;
	int64_t x4740 = 47976LL;
	volatile int32_t t67 = 10393;

	t67 = (x4737<<(x4738-(x4739<x4740)));

	if (t67 != 26624) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x4833 = 16U;
	static int8_t x4834 = 1;
	int16_t x4835 = 9515;

	t68 = (x4833<<(x4834-(x4835<x4836)));

	if (t68 != 16) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x5057 = 1;
	volatile uint8_t x5058 = 1U;
	static uint64_t x5059 = 24661509LLU;
	uint64_t x5060 = 12LLU;
	volatile int32_t t69 = 137445015;

	t69 = (x5057<<(x5058-(x5059<x5060)));

	if (t69 != 2) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x5133 = 125;
	static uint8_t x5134 = 0U;
	volatile uint32_t x5135 = UINT32_MAX;
	volatile uint32_t x5136 = 14046U;
	volatile int32_t t70 = -50693;

	t70 = (x5133<<(x5134-(x5135<x5136)));

	if (t70 != 125) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x5157 = 1691U;
	int32_t x5158 = 5;
	static int64_t x5159 = 10248800062LL;
	int64_t x5160 = INT64_MIN;

	t71 = (x5157<<(x5158-(x5159<x5160)));

	if (t71 != 54112) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x5197 = UINT32_MAX;
	static volatile int8_t x5198 = 12;
	volatile int64_t x5199 = -27665677679LL;
	static volatile int16_t x5200 = -1;
	volatile uint32_t t72 = 341093864U;

	t72 = (x5197<<(x5198-(x5199<x5200)));

	if (t72 != 4294965248U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x5305 = 978860338541912302LLU;
	static int8_t x5306 = 62;
	int16_t x5307 = INT16_MIN;
	static uint16_t x5308 = 0U;
	uint64_t t73 = 6444926410709093LLU;

	t73 = (x5305<<(x5306-(x5307<x5308)));

	if (t73 != 13835058055282163712LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x5313 = 0U;
	uint8_t x5314 = 7U;
	static uint64_t x5315 = UINT64_MAX;
	int8_t x5316 = INT8_MIN;
	int32_t t74 = 1;

	t74 = (x5313<<(x5314-(x5315<x5316)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x5413 = 0;
	uint32_t x5414 = 1U;
	int32_t x5415 = -143537;
	int64_t x5416 = -1LL;
	int32_t t75 = -111;

	t75 = (x5413<<(x5414-(x5415<x5416)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x5429 = 238600LLU;
	uint16_t x5430 = 4U;
	volatile uint16_t x5431 = 0U;
	int16_t x5432 = INT16_MAX;
	volatile uint64_t t76 = 8239438379713658LLU;

	t76 = (x5429<<(x5430-(x5431<x5432)));

	if (t76 != 1908800LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x5489 = 4;
	uint8_t x5490 = 0U;
	uint8_t x5491 = UINT8_MAX;
	static int8_t x5492 = INT8_MIN;
	static volatile int32_t t77 = 0;

	t77 = (x5489<<(x5490-(x5491<x5492)));

	if (t77 != 4) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x5577 = INT8_MAX;
	int32_t x5578 = 2;
	static uint16_t x5579 = UINT16_MAX;
	uint8_t x5580 = UINT8_MAX;
	int32_t t78 = -142;

	t78 = (x5577<<(x5578-(x5579<x5580)));

	if (t78 != 508) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x5761 = 0U;
	uint32_t x5763 = 6159U;
	static uint16_t x5764 = 704U;
	int32_t t79 = -747276693;

	t79 = (x5761<<(x5762-(x5763<x5764)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x5825 = 7878280;
	static uint8_t x5826 = 5U;
	volatile int64_t x5827 = -1LL;
	int32_t t80 = 5051;

	t80 = (x5825<<(x5826-(x5827<x5828)));

	if (t80 != 126052480) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x5849 = UINT32_MAX;
	uint32_t x5850 = 14U;
	int16_t x5851 = INT16_MIN;
	static int8_t x5852 = 3;

	t81 = (x5849<<(x5850-(x5851<x5852)));

	if (t81 != 4294959104U) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x5861 = 2;
	uint8_t x5862 = 8U;
	static int8_t x5863 = INT8_MIN;
	int64_t x5864 = -3731LL;
	volatile int32_t t82 = -5933;

	t82 = (x5861<<(x5862-(x5863<x5864)));

	if (t82 != 512) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x5909 = UINT64_MAX;
	uint64_t t83 = UINT64_MAX;

	t83 = (x5909<<(x5910-(x5911<x5912)));

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x5913 = 5U;
	static int16_t x5914 = 3;
	static volatile int16_t x5915 = INT16_MIN;
	int32_t t84 = 0;

	t84 = (x5913<<(x5914-(x5915<x5916)));

	if (t84 != 20) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x5937 = 0;
	static uint16_t x5938 = 0U;
	int8_t x5940 = 1;
	int32_t t85 = 2443;

	t85 = (x5937<<(x5938-(x5939<x5940)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x5997 = UINT32_MAX;
	int64_t x5998 = 1LL;
	int32_t x6000 = INT32_MIN;
	uint32_t t86 = 137U;

	t86 = (x5997<<(x5998-(x5999<x6000)));

	if (t86 != 4294967294U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x6013 = 0U;
	volatile uint8_t x6014 = 15U;
	int64_t x6016 = -1983222856143776087LL;
	int32_t t87 = -256146154;

	t87 = (x6013<<(x6014-(x6015<x6016)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x6093 = 334U;
	int64_t x6095 = INT64_MIN;
	uint64_t x6096 = UINT64_MAX;

	t88 = (x6093<<(x6094-(x6095<x6096)));

	if (t88 != 10688) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x6153 = UINT16_MAX;
	uint16_t x6154 = 6U;
	volatile uint16_t x6155 = 3366U;
	int32_t t89 = -1;

	t89 = (x6153<<(x6154-(x6155<x6156)));

	if (t89 != 4194240) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x6229 = 122326779U;
	uint8_t x6230 = 5U;
	int64_t x6231 = -1LL;
	int64_t x6232 = -495159116LL;

	t90 = (x6229<<(x6230-(x6231<x6232)));

	if (t90 != 3914456928U) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x6321 = 12;
	static uint32_t x6322 = 1U;
	int32_t x6323 = 119092;
	volatile int32_t t91 = 191;

	t91 = (x6321<<(x6322-(x6323<x6324)));

	if (t91 != 12) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x6373 = 2075259958LLU;
	uint16_t x6374 = 3U;
	int32_t x6375 = INT32_MIN;
	int8_t x6376 = -1;
	uint64_t t92 = 5336210512011LLU;

	t92 = (x6373<<(x6374-(x6375<x6376)));

	if (t92 != 8301039832LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x6401 = 21442U;
	int16_t x6402 = 15;
	int64_t x6403 = INT64_MIN;
	int32_t x6404 = 430;
	int32_t t93 = -23146;

	t93 = (x6401<<(x6402-(x6403<x6404)));

	if (t93 != 351305728) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x6570 = 3;
	static volatile uint16_t x6571 = 152U;
	int16_t x6572 = INT16_MIN;
	uint64_t t94 = 17428180946309LLU;

	t94 = (x6569<<(x6570-(x6571<x6572)));

	if (t94 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x6601 = 50288991950896LLU;
	volatile uint16_t x6603 = UINT16_MAX;
	int8_t x6604 = INT8_MAX;

	t95 = (x6601<<(x6602-(x6603<x6604)));

	if (t95 != 100577983901792LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x6693 = 11228510LLU;
	volatile int8_t x6694 = 1;
	int32_t x6695 = INT32_MIN;
	static uint32_t x6696 = 83646306U;
	uint64_t t96 = 32771315672749071LLU;

	t96 = (x6693<<(x6694-(x6695<x6696)));

	if (t96 != 22457020LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x6790 = 7;
	int16_t x6791 = -1;
	static uint16_t x6792 = 2U;
	static uint64_t t97 = 11582431017491294LLU;

	t97 = (x6789<<(x6790-(x6791<x6792)));

	if (t97 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x6905 = UINT16_MAX;
	uint8_t x6906 = 2U;
	int16_t x6907 = 140;
	static int32_t x6908 = -1;
	volatile int32_t t98 = -461790226;

	t98 = (x6905<<(x6906-(x6907<x6908)));

	if (t98 != 262140) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x6973 = 254U;
	volatile int32_t x6974 = 2;
	static volatile int32_t x6975 = INT32_MIN;
	volatile uint32_t t99 = 12299U;

	t99 = (x6973<<(x6974-(x6975<x6976)));

	if (t99 != 508U) { NG(); } else { ; }
	
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


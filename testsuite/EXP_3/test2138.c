#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t x9 = -16638934;
uint64_t x221 = 368591LLU;
static uint16_t x222 = 40U;
volatile int32_t x223 = -1;
uint16_t x286 = UINT16_MAX;
volatile int8_t x287 = -18;
uint16_t x354 = 79U;
int16_t x391 = INT16_MIN;
volatile int32_t t8 = -2;
uint8_t x621 = UINT8_MAX;
static int16_t x624 = 0;
int8_t x644 = -1;
volatile int8_t x683 = -2;
static int64_t x685 = INT64_MIN;
static int16_t x687 = -1;
volatile int16_t x688 = -1;
int32_t t13 = -3;
int32_t x751 = 2;
volatile int32_t x756 = INT32_MIN;
static uint64_t x805 = UINT64_MAX;
static uint64_t x806 = 665LLU;
uint32_t x1090 = 334U;
int64_t x1109 = 159211332LL;
uint8_t x1110 = 38U;
int8_t x1112 = -1;
int8_t x1257 = 1;
int8_t x1262 = -1;
static uint32_t x1273 = 41339U;
volatile int32_t x1311 = -1;
volatile int32_t t26 = -3243073;
int32_t x1331 = -1;
int32_t t27 = -2742;
uint32_t x1358 = 236646966U;
int32_t t28 = 2767;
volatile int16_t x1581 = -16;
static int16_t x1582 = INT16_MIN;
int8_t x1674 = INT8_MIN;
int32_t t31 = -30698388;
int16_t x1730 = -1;
int16_t x1731 = -1;
volatile int64_t x1760 = -1LL;
static volatile uint32_t x1795 = UINT32_MAX;
volatile int32_t x1811 = -1;
int64_t x1812 = -1LL;
volatile uint8_t x1931 = 9U;
volatile int8_t x1933 = -55;
int32_t x2143 = INT32_MIN;
uint64_t x2145 = 108016812953002LLU;
int32_t x2146 = -1;
volatile int64_t x2147 = INT64_MIN;
int64_t x2154 = INT64_MIN;
int32_t t42 = 0;
int64_t x2345 = -1LL;
static volatile uint16_t x2347 = 1U;
volatile int32_t t45 = 207;
int16_t x2516 = -4;
int16_t x2699 = INT16_MAX;
int32_t t52 = -526;
int16_t x2801 = INT16_MIN;
int32_t t56 = 95;
int64_t x2900 = -1LL;
volatile int32_t t59 = 2;
volatile int32_t x2914 = INT32_MAX;
int64_t x2957 = INT64_MAX;
uint32_t x2960 = UINT32_MAX;
int32_t t63 = -3557;
int8_t x2977 = INT8_MIN;
static int32_t x2979 = -1;
int32_t t64 = -75375133;
int32_t x3066 = INT32_MAX;
int8_t x3067 = 0;
volatile uint16_t x3068 = 1U;
uint32_t x3237 = UINT32_MAX;
volatile int16_t x3238 = INT16_MIN;
uint8_t x3293 = 30U;
static volatile uint16_t x3295 = 26U;
uint32_t x3601 = 596682979U;
static volatile int32_t t75 = 31027343;
int16_t x3725 = INT16_MIN;
int16_t x3777 = -1;
int32_t x3823 = 5;
uint64_t x3825 = UINT64_MAX;
volatile int32_t t82 = -61687;
static volatile int32_t t84 = -847849756;
static volatile uint16_t x3968 = 7U;
int8_t x3996 = INT8_MIN;
volatile int32_t t86 = -2903584;
static int16_t x4020 = INT16_MIN;
uint32_t x4129 = UINT32_MAX;
uint16_t x4131 = 0U;
uint8_t x4132 = 4U;
uint8_t x4197 = 87U;
uint64_t x4204 = UINT64_MAX;
static volatile int8_t x4314 = 6;
int16_t x4317 = INT16_MAX;
static int8_t x4381 = INT8_MIN;
uint64_t x4382 = UINT64_MAX;
static int8_t x4383 = 1;
volatile int32_t t95 = 3;
int16_t x4559 = 58;
int32_t t96 = 986;
int8_t x4605 = INT8_MIN;
static int32_t x4606 = -1;
volatile int64_t x4700 = -1LL;


void f0(void) {
	int32_t x10 = INT32_MIN;
	int64_t x11 = -1LL;
	int64_t x12 = -1LL;
	int32_t t0 = -69292;

	t0 = ((x9<x10)<<(x11^x12));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x21 = 3637413289072341098LL;
	static uint16_t x22 = 4U;
	static int8_t x23 = -5;
	int64_t x24 = -1LL;
	volatile int32_t t1 = 685382224;

	t1 = ((x21<x22)<<(x23^x24));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x161 = 112519LLU;
	static int16_t x162 = INT16_MIN;
	int16_t x163 = 14;
	volatile int16_t x164 = 1;
	volatile int32_t t2 = -100448;

	t2 = ((x161<x162)<<(x163^x164));

	if (t2 != 32768) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x224 = -1;
	volatile int32_t t3 = 28867;

	t3 = ((x221<x222)<<(x223^x224));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x285 = INT8_MIN;
	volatile int64_t x288 = -1LL;
	static int32_t t4 = -3970356;

	t4 = ((x285<x286)<<(x287^x288));

	if (t4 != 131072) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x333 = INT8_MIN;
	uint8_t x334 = UINT8_MAX;
	static volatile int16_t x335 = -3;
	static uint64_t x336 = UINT64_MAX;
	static volatile int32_t t5 = 64678359;

	t5 = ((x333<x334)<<(x335^x336));

	if (t5 != 4) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x353 = INT32_MAX;
	int32_t x355 = -1;
	static int8_t x356 = -1;
	int32_t t6 = -29645;

	t6 = ((x353<x354)<<(x355^x356));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x389 = INT8_MIN;
	int64_t x390 = 51452069LL;
	int16_t x392 = INT16_MIN;
	int32_t t7 = -3;

	t7 = ((x389<x390)<<(x391^x392));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x465 = INT32_MIN;
	uint32_t x466 = 1013769616U;
	static int64_t x467 = 49LL;
	int32_t x468 = 57;

	t8 = ((x465<x466)<<(x467^x468));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x622 = INT64_MAX;
	uint16_t x623 = 6U;
	volatile int32_t t9 = 103587;

	t9 = ((x621<x622)<<(x623^x624));

	if (t9 != 64) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x641 = -1;
	int8_t x642 = -1;
	static int32_t x643 = -1;
	static volatile int32_t t10 = 57771283;

	t10 = ((x641<x642)<<(x643^x644));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x661 = UINT64_MAX;
	int32_t x662 = INT32_MIN;
	int32_t x663 = -1;
	uint32_t x664 = UINT32_MAX;
	int32_t t11 = 1886;

	t11 = ((x661<x662)<<(x663^x664));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x681 = 2;
	volatile int16_t x682 = -207;
	int64_t x684 = -1LL;
	int32_t t12 = 415636;

	t12 = ((x681<x682)<<(x683^x684));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x686 = -94257020;

	t13 = ((x685<x686)<<(x687^x688));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x749 = INT64_MIN;
	static int64_t x750 = INT64_MIN;
	int64_t x752 = 1LL;
	static volatile int32_t t14 = 26772;

	t14 = ((x749<x750)<<(x751^x752));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x753 = -1;
	static int16_t x754 = -1421;
	static int32_t x755 = INT32_MIN;
	static volatile int32_t t15 = -565;

	t15 = ((x753<x754)<<(x755^x756));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x793 = -1LL;
	int64_t x794 = INT64_MAX;
	uint8_t x795 = UINT8_MAX;
	uint8_t x796 = UINT8_MAX;
	static int32_t t16 = -10284876;

	t16 = ((x793<x794)<<(x795^x796));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x807 = 18U;
	uint16_t x808 = 12U;
	int32_t t17 = 41;

	t17 = ((x805<x806)<<(x807^x808));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x869 = INT64_MIN;
	int64_t x870 = 300536LL;
	int8_t x871 = 0;
	volatile uint16_t x872 = 5U;
	static volatile int32_t t18 = -2;

	t18 = ((x869<x870)<<(x871^x872));

	if (t18 != 32) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x941 = 5767035;
	static uint64_t x942 = UINT64_MAX;
	int64_t x943 = INT64_MIN;
	volatile int64_t x944 = INT64_MIN;
	int32_t t19 = 15554;

	t19 = ((x941<x942)<<(x943^x944));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1049 = -1;
	int32_t x1050 = -1;
	uint64_t x1051 = UINT64_MAX;
	uint64_t x1052 = UINT64_MAX;
	volatile int32_t t20 = -2;

	t20 = ((x1049<x1050)<<(x1051^x1052));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x1089 = 734LLU;
	int16_t x1091 = INT16_MIN;
	int16_t x1092 = INT16_MIN;
	volatile int32_t t21 = 679603;

	t21 = ((x1089<x1090)<<(x1091^x1092));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1111 = -1LL;
	volatile int32_t t22 = 715058;

	t22 = ((x1109<x1110)<<(x1111^x1112));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x1258 = INT16_MAX;
	volatile int16_t x1259 = -1;
	int32_t x1260 = -1;
	int32_t t23 = -1439;

	t23 = ((x1257<x1258)<<(x1259^x1260));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x1261 = INT32_MAX;
	int32_t x1263 = INT32_MIN;
	int32_t x1264 = INT32_MIN;
	volatile int32_t t24 = 303;

	t24 = ((x1261<x1262)<<(x1263^x1264));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1274 = -716438982;
	uint32_t x1275 = UINT32_MAX;
	volatile int8_t x1276 = -3;
	volatile int32_t t25 = -12136904;

	t25 = ((x1273<x1274)<<(x1275^x1276));

	if (t25 != 4) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1309 = -627121397355700LL;
	int8_t x1310 = INT8_MIN;
	int16_t x1312 = -1;

	t26 = ((x1309<x1310)<<(x1311^x1312));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x1329 = INT64_MIN;
	static int32_t x1330 = -1;
	static volatile int32_t x1332 = -1;

	t27 = ((x1329<x1330)<<(x1331^x1332));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1357 = INT64_MAX;
	int8_t x1359 = INT8_MIN;
	int8_t x1360 = INT8_MIN;

	t28 = ((x1357<x1358)<<(x1359^x1360));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x1373 = 1878053401940LLU;
	uint16_t x1374 = 22U;
	uint16_t x1375 = 0U;
	uint64_t x1376 = 2LLU;
	int32_t t29 = -49;

	t29 = ((x1373<x1374)<<(x1375^x1376));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1583 = -1;
	int8_t x1584 = -1;
	int32_t t30 = 455581;

	t30 = ((x1581<x1582)<<(x1583^x1584));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1673 = INT8_MAX;
	int8_t x1675 = 0;
	int16_t x1676 = 7;

	t31 = ((x1673<x1674)<<(x1675^x1676));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x1729 = -1;
	uint64_t x1732 = UINT64_MAX;
	int32_t t32 = -1309786;

	t32 = ((x1729<x1730)<<(x1731^x1732));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x1757 = -1;
	int8_t x1758 = -1;
	int64_t x1759 = -1LL;
	volatile int32_t t33 = 6403741;

	t33 = ((x1757<x1758)<<(x1759^x1760));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1793 = INT32_MIN;
	volatile int32_t x1794 = INT32_MIN;
	volatile int8_t x1796 = -1;
	int32_t t34 = -7;

	t34 = ((x1793<x1794)<<(x1795^x1796));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x1809 = 19370226U;
	int32_t x1810 = 25110;
	int32_t t35 = -2939395;

	t35 = ((x1809<x1810)<<(x1811^x1812));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1929 = INT64_MAX;
	int16_t x1930 = -1;
	int16_t x1932 = 1;
	volatile int32_t t36 = -151752;

	t36 = ((x1929<x1930)<<(x1931^x1932));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1934 = 2889;
	int16_t x1935 = INT16_MAX;
	int16_t x1936 = INT16_MAX;
	int32_t t37 = 16498189;

	t37 = ((x1933<x1934)<<(x1935^x1936));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x2141 = INT32_MIN;
	volatile int64_t x2142 = INT64_MIN;
	static int32_t x2144 = INT32_MIN;
	int32_t t38 = -636582;

	t38 = ((x2141<x2142)<<(x2143^x2144));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x2148 = INT64_MIN;
	int32_t t39 = 26;

	t39 = ((x2145<x2146)<<(x2147^x2148));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x2153 = 0;
	static uint64_t x2155 = UINT64_MAX;
	static volatile int32_t x2156 = -1;
	int32_t t40 = 2;

	t40 = ((x2153<x2154)<<(x2155^x2156));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x2273 = UINT64_MAX;
	uint64_t x2274 = 42077639551149LLU;
	uint64_t x2275 = UINT64_MAX;
	static int16_t x2276 = -1;
	static int32_t t41 = -281288;

	t41 = ((x2273<x2274)<<(x2275^x2276));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x2309 = INT64_MIN;
	uint8_t x2310 = 116U;
	static uint32_t x2311 = UINT32_MAX;
	static int32_t x2312 = -1;

	t42 = ((x2309<x2310)<<(x2311^x2312));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x2313 = 41793153LLU;
	volatile int16_t x2314 = 384;
	uint64_t x2315 = UINT64_MAX;
	static int8_t x2316 = -1;
	int32_t t43 = -941;

	t43 = ((x2313<x2314)<<(x2315^x2316));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x2321 = 59148054965761621LLU;
	static int16_t x2322 = -25;
	int32_t x2323 = -1;
	uint32_t x2324 = UINT32_MAX;
	volatile int32_t t44 = 607;

	t44 = ((x2321<x2322)<<(x2323^x2324));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x2346 = INT64_MIN;
	static volatile int8_t x2348 = 18;

	t45 = ((x2345<x2346)<<(x2347^x2348));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x2389 = 7U;
	static uint16_t x2390 = UINT16_MAX;
	static uint32_t x2391 = UINT32_MAX;
	volatile int16_t x2392 = -1;
	volatile int32_t t46 = 55742962;

	t46 = ((x2389<x2390)<<(x2391^x2392));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x2513 = INT16_MIN;
	volatile int8_t x2514 = 1;
	uint64_t x2515 = UINT64_MAX;
	int32_t t47 = 28;

	t47 = ((x2513<x2514)<<(x2515^x2516));

	if (t47 != 8) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x2529 = INT16_MIN;
	int32_t x2530 = INT32_MAX;
	uint32_t x2531 = UINT32_MAX;
	int16_t x2532 = -1;
	int32_t t48 = 20;

	t48 = ((x2529<x2530)<<(x2531^x2532));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x2621 = UINT16_MAX;
	int16_t x2622 = -1;
	volatile int16_t x2623 = -1;
	int64_t x2624 = -1LL;
	static int32_t t49 = -336758229;

	t49 = ((x2621<x2622)<<(x2623^x2624));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x2625 = 12U;
	int64_t x2626 = INT64_MIN;
	static volatile uint64_t x2627 = UINT64_MAX;
	int8_t x2628 = -1;
	volatile int32_t t50 = -35675;

	t50 = ((x2625<x2626)<<(x2627^x2628));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x2697 = -714;
	int32_t x2698 = INT32_MAX;
	static int16_t x2700 = INT16_MAX;
	static int32_t t51 = 56498708;

	t51 = ((x2697<x2698)<<(x2699^x2700));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x2749 = INT64_MIN;
	static uint64_t x2750 = 16379LLU;
	uint64_t x2751 = 30LLU;
	uint32_t x2752 = 1U;

	t52 = ((x2749<x2750)<<(x2751^x2752));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x2761 = 8755609638LLU;
	int16_t x2762 = INT16_MIN;
	uint32_t x2763 = 10U;
	int16_t x2764 = 3;
	volatile int32_t t53 = -1;

	t53 = ((x2761<x2762)<<(x2763^x2764));

	if (t53 != 512) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2793 = INT8_MAX;
	int32_t x2794 = INT32_MIN;
	volatile int8_t x2795 = INT8_MIN;
	int8_t x2796 = INT8_MIN;
	volatile int32_t t54 = -92;

	t54 = ((x2793<x2794)<<(x2795^x2796));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x2802 = UINT8_MAX;
	volatile int16_t x2803 = 1;
	uint8_t x2804 = 26U;
	int32_t t55 = -957973215;

	t55 = ((x2801<x2802)<<(x2803^x2804));

	if (t55 != 134217728) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x2825 = INT16_MIN;
	int64_t x2826 = INT64_MIN;
	uint32_t x2827 = UINT32_MAX;
	static uint32_t x2828 = UINT32_MAX;

	t56 = ((x2825<x2826)<<(x2827^x2828));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x2861 = -523253336241978017LL;
	int64_t x2862 = -1LL;
	int32_t x2863 = INT32_MIN;
	int32_t x2864 = INT32_MIN;
	volatile int32_t t57 = 407055360;

	t57 = ((x2861<x2862)<<(x2863^x2864));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x2865 = -1;
	static volatile int16_t x2866 = -12376;
	int32_t x2867 = -1;
	int8_t x2868 = -24;
	volatile int32_t t58 = -3;

	t58 = ((x2865<x2866)<<(x2867^x2868));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x2897 = -1;
	int64_t x2898 = INT64_MAX;
	uint64_t x2899 = UINT64_MAX;

	t59 = ((x2897<x2898)<<(x2899^x2900));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x2913 = INT32_MIN;
	uint16_t x2915 = 55U;
	uint16_t x2916 = 59U;
	int32_t t60 = 65;

	t60 = ((x2913<x2914)<<(x2915^x2916));

	if (t60 != 4096) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x2917 = UINT16_MAX;
	static uint64_t x2918 = UINT64_MAX;
	static int8_t x2919 = -1;
	int16_t x2920 = -1;
	volatile int32_t t61 = -49270;

	t61 = ((x2917<x2918)<<(x2919^x2920));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x2953 = -13180;
	static uint8_t x2954 = 79U;
	int32_t x2955 = -1;
	static volatile uint32_t x2956 = UINT32_MAX;
	int32_t t62 = 211132;

	t62 = ((x2953<x2954)<<(x2955^x2956));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x2958 = -1;
	int16_t x2959 = -1;

	t63 = ((x2957<x2958)<<(x2959^x2960));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x2978 = 1;
	uint64_t x2980 = UINT64_MAX;

	t64 = ((x2977<x2978)<<(x2979^x2980));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x3065 = 2052945187810LL;
	volatile int32_t t65 = 524598;

	t65 = ((x3065<x3066)<<(x3067^x3068));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int32_t x3239 = -4;
	int8_t x3240 = -20;
	static int32_t t66 = 29;

	t66 = ((x3237<x3238)<<(x3239^x3240));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x3261 = UINT32_MAX;
	int64_t x3262 = -1LL;
	volatile int32_t x3263 = INT32_MAX;
	static int32_t x3264 = INT32_MAX;
	int32_t t67 = 10877;

	t67 = ((x3261<x3262)<<(x3263^x3264));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x3294 = 3;
	int64_t x3296 = 1LL;
	int32_t t68 = -23283275;

	t68 = ((x3293<x3294)<<(x3295^x3296));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x3345 = INT16_MIN;
	int8_t x3346 = -1;
	int32_t x3347 = INT32_MIN;
	static volatile int32_t x3348 = INT32_MIN;
	static int32_t t69 = -496500;

	t69 = ((x3345<x3346)<<(x3347^x3348));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x3369 = INT32_MIN;
	volatile int8_t x3370 = -10;
	volatile uint8_t x3371 = UINT8_MAX;
	uint8_t x3372 = UINT8_MAX;
	volatile int32_t t70 = -187;

	t70 = ((x3369<x3370)<<(x3371^x3372));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x3489 = INT32_MIN;
	int8_t x3490 = -1;
	int8_t x3491 = 4;
	int16_t x3492 = 11;
	int32_t t71 = 41693093;

	t71 = ((x3489<x3490)<<(x3491^x3492));

	if (t71 != 32768) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x3521 = INT64_MIN;
	int16_t x3522 = 6;
	int32_t x3523 = -1;
	volatile uint64_t x3524 = UINT64_MAX;
	int32_t t72 = 84851;

	t72 = ((x3521<x3522)<<(x3523^x3524));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x3525 = 606045U;
	uint16_t x3526 = 2U;
	int32_t x3527 = -1;
	uint64_t x3528 = UINT64_MAX;
	int32_t t73 = -7559007;

	t73 = ((x3525<x3526)<<(x3527^x3528));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x3561 = UINT16_MAX;
	int32_t x3562 = INT32_MIN;
	volatile uint16_t x3563 = 1U;
	static uint16_t x3564 = 13U;
	volatile int32_t t74 = 0;

	t74 = ((x3561<x3562)<<(x3563^x3564));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x3602 = INT8_MIN;
	int16_t x3603 = -1;
	uint32_t x3604 = UINT32_MAX;

	t75 = ((x3601<x3602)<<(x3603^x3604));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x3721 = INT32_MIN;
	static int8_t x3722 = INT8_MIN;
	int64_t x3723 = -1LL;
	int8_t x3724 = -3;
	volatile int32_t t76 = -188081;

	t76 = ((x3721<x3722)<<(x3723^x3724));

	if (t76 != 4) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int64_t x3726 = -400389886126303LL;
	int32_t x3727 = -1;
	uint32_t x3728 = UINT32_MAX;
	int32_t t77 = 63631;

	t77 = ((x3725<x3726)<<(x3727^x3728));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x3773 = 31488829976507657LLU;
	uint32_t x3774 = UINT32_MAX;
	uint64_t x3775 = UINT64_MAX;
	int64_t x3776 = -1LL;
	static volatile int32_t t78 = 28933972;

	t78 = ((x3773<x3774)<<(x3775^x3776));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x3778 = -15;
	uint16_t x3779 = 4U;
	static uint64_t x3780 = 9LLU;
	volatile int32_t t79 = -224543;

	t79 = ((x3777<x3778)<<(x3779^x3780));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x3797 = 10397770LLU;
	int32_t x3798 = INT32_MAX;
	int16_t x3799 = INT16_MIN;
	int16_t x3800 = INT16_MIN;
	static volatile int32_t t80 = -176;

	t80 = ((x3797<x3798)<<(x3799^x3800));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x3821 = UINT16_MAX;
	int64_t x3822 = -269041869535357LL;
	uint8_t x3824 = 2U;
	static int32_t t81 = 202871014;

	t81 = ((x3821<x3822)<<(x3823^x3824));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x3826 = -159618;
	int32_t x3827 = -1;
	uint64_t x3828 = UINT64_MAX;

	t82 = ((x3825<x3826)<<(x3827^x3828));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x3925 = -1;
	uint32_t x3926 = UINT32_MAX;
	static uint8_t x3927 = 0U;
	uint8_t x3928 = 2U;
	volatile int32_t t83 = -5;

	t83 = ((x3925<x3926)<<(x3927^x3928));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x3957 = UINT16_MAX;
	uint64_t x3958 = 64775LLU;
	uint8_t x3959 = UINT8_MAX;
	static uint8_t x3960 = UINT8_MAX;

	t84 = ((x3957<x3958)<<(x3959^x3960));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x3965 = -132696378;
	int8_t x3966 = -24;
	uint16_t x3967 = 1U;
	static int32_t t85 = -1;

	t85 = ((x3965<x3966)<<(x3967^x3968));

	if (t85 != 64) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x3993 = UINT8_MAX;
	uint16_t x3994 = 48U;
	int32_t x3995 = -99;

	t86 = ((x3993<x3994)<<(x3995^x3996));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x4017 = -1;
	static int16_t x4018 = -4;
	int16_t x4019 = INT16_MIN;
	volatile int32_t t87 = 9;

	t87 = ((x4017<x4018)<<(x4019^x4020));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x4130 = -1;
	volatile int32_t t88 = -186251;

	t88 = ((x4129<x4130)<<(x4131^x4132));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int32_t x4198 = 1;
	static int64_t x4199 = -1LL;
	int8_t x4200 = -27;
	volatile int32_t t89 = -800776;

	t89 = ((x4197<x4198)<<(x4199^x4200));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x4201 = UINT32_MAX;
	int32_t x4202 = -1;
	int16_t x4203 = -7;
	int32_t t90 = 1;

	t90 = ((x4201<x4202)<<(x4203^x4204));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x4229 = 57;
	int8_t x4230 = -1;
	static volatile uint64_t x4231 = UINT64_MAX;
	static int16_t x4232 = -1;
	int32_t t91 = 10;

	t91 = ((x4229<x4230)<<(x4231^x4232));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x4313 = 33426LLU;
	volatile int64_t x4315 = -1LL;
	static int16_t x4316 = -1;
	int32_t t92 = -80588465;

	t92 = ((x4313<x4314)<<(x4315^x4316));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x4318 = 549401249105025LL;
	static uint8_t x4319 = 1U;
	volatile uint32_t x4320 = 1U;
	int32_t t93 = -4420;

	t93 = ((x4317<x4318)<<(x4319^x4320));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x4384 = 23U;
	static volatile int32_t t94 = 39877990;

	t94 = ((x4381<x4382)<<(x4383^x4384));

	if (t94 != 4194304) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x4409 = INT32_MAX;
	uint32_t x4410 = 197800766U;
	int32_t x4411 = -1;
	uint32_t x4412 = UINT32_MAX;

	t95 = ((x4409<x4410)<<(x4411^x4412));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x4557 = 228U;
	uint16_t x4558 = UINT16_MAX;
	int16_t x4560 = 40;

	t96 = ((x4557<x4558)<<(x4559^x4560));

	if (t96 != 262144) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x4573 = INT8_MIN;
	volatile int8_t x4574 = -14;
	int8_t x4575 = INT8_MIN;
	static int64_t x4576 = -125LL;
	int32_t t97 = 716520;

	t97 = ((x4573<x4574)<<(x4575^x4576));

	if (t97 != 8) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x4607 = -1LL;
	uint64_t x4608 = UINT64_MAX;
	volatile int32_t t98 = 21;

	t98 = ((x4605<x4606)<<(x4607^x4608));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x4697 = -1;
	uint16_t x4698 = UINT16_MAX;
	static volatile int16_t x4699 = -1;
	int32_t t99 = -3202728;

	t99 = ((x4697<x4698)<<(x4699^x4700));

	if (t99 != 1) { NG(); } else { ; }
	
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


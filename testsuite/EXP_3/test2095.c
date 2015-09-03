#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t0 = 13LL;
uint8_t x62 = 3U;
uint32_t x183 = 449408375U;
uint8_t x225 = 1U;
int16_t x226 = 0;
static volatile uint16_t x366 = 1U;
uint8_t x367 = 3U;
static volatile uint64_t t4 = 907LLU;
int16_t x496 = -1;
int32_t t8 = -6517017;
static uint16_t x1075 = UINT16_MAX;
static int8_t x1076 = 4;
uint64_t t13 = 817845347LLU;
int16_t x1087 = -1;
volatile uint64_t x1105 = 42387022353LLU;
uint8_t x1126 = 3U;
int16_t x1128 = 928;
volatile uint8_t x1238 = 9U;
volatile int32_t x1239 = -1;
int32_t x1240 = 46575057;
volatile uint64_t t19 = 5320639LLU;
static int64_t x1347 = INT64_MIN;
static int8_t x1625 = 0;
uint32_t x1626 = 3U;
int32_t t26 = -445676652;
uint16_t x1843 = 1U;
static int16_t x1851 = INT16_MAX;
static uint64_t t28 = 12341316951292351LLU;
volatile int32_t t30 = 1;
int64_t x2028 = -1LL;
static uint64_t t32 = 2178947LLU;
uint32_t x2265 = UINT32_MAX;
uint16_t x2267 = UINT16_MAX;
static volatile uint16_t x2315 = UINT16_MAX;
static int16_t x2316 = -1;
uint64_t t35 = 146585519972LLU;
volatile uint8_t x2574 = 0U;
uint8_t x2770 = 12U;
static volatile int8_t x2810 = 0;
int8_t x2811 = INT8_MIN;
int32_t t41 = -469661;
int16_t x2877 = INT16_MAX;
uint32_t x2982 = 2U;
static int32_t x2983 = INT32_MAX;
int8_t x2984 = -16;
static int32_t t44 = -51244;
volatile uint8_t x3070 = 13U;
int16_t x3087 = -1164;
int32_t x3142 = 2;
uint8_t x3152 = 17U;
uint16_t x3270 = 4U;
uint32_t x3271 = 1U;
static int8_t x3278 = 0;
uint16_t x3391 = UINT16_MAX;
int64_t x3575 = 116224849198138LL;
volatile uint8_t x4004 = 14U;
int8_t x4012 = INT8_MAX;
volatile int8_t x4325 = INT8_MAX;
uint32_t x4449 = UINT32_MAX;
static volatile uint32_t t63 = 1U;
uint8_t x4538 = 0U;
uint32_t t64 = 97100067U;
int8_t x4567 = -1;
static volatile uint64_t t65 = 2517831154974522LLU;
int32_t x4607 = INT32_MIN;
uint64_t x4730 = 10LLU;
static int8_t x4731 = INT8_MIN;
int8_t x4809 = 0;
uint64_t x5041 = 515455LLU;
static uint16_t x5059 = UINT16_MAX;
int8_t x5082 = 5;
int32_t x5083 = INT32_MIN;
volatile uint32_t x5086 = 20U;
int32_t t74 = 63840;
volatile uint8_t x5142 = 9U;
uint8_t x5198 = 3U;
int32_t t77 = -2;
int8_t x5236 = INT8_MIN;
volatile uint64_t x5310 = 1LLU;
int8_t x5482 = 1;
static volatile uint32_t x5484 = 437560U;
static volatile uint32_t t80 = 88823U;
static int16_t x5553 = INT16_MAX;
int16_t x5558 = 2;
int32_t x5560 = -1;
volatile uint64_t t86 = 1911705855042315654LLU;
int8_t x5926 = 1;
int32_t x5927 = -38570694;
uint32_t x5928 = UINT32_MAX;
int8_t x5949 = 5;
uint16_t x6032 = 108U;
int8_t x6047 = INT8_MIN;
uint32_t x6265 = UINT32_MAX;
volatile int16_t x6268 = -1;
int8_t x6299 = INT8_MIN;
int8_t x6362 = 0;
int32_t x6363 = 1;
volatile uint8_t x6522 = 0U;
volatile uint64_t x6523 = UINT64_MAX;
volatile uint64_t t99 = 11LLU;


void f0(void) {
	uint16_t x9 = 15U;
	uint8_t x10 = 6U;
	int64_t x11 = INT64_MIN;
	uint32_t x12 = 85834659U;

	t0 = ((x9<<x10)-(x11^x12));

	if (t0 != 9223372036768942109LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x61 = UINT16_MAX;
	static int16_t x63 = -1;
	volatile int8_t x64 = INT8_MAX;
	static volatile int32_t t1 = 507;

	t1 = ((x61<<x62)-(x63^x64));

	if (t1 != 524408) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x181 = UINT16_MAX;
	uint8_t x182 = 2U;
	uint16_t x184 = 46U;
	static uint32_t t2 = 211U;

	t2 = ((x181<<x182)-(x183^x184));

	if (t2 != 3845821091U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x227 = -1;
	static volatile int8_t x228 = -1;
	int32_t t3 = -291249;

	t3 = ((x225<<x226)-(x227^x228));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x365 = UINT16_MAX;
	uint64_t x368 = UINT64_MAX;

	t4 = ((x365<<x366)-(x367^x368));

	if (t4 != 131074LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x377 = 337492U;
	int8_t x378 = 5;
	int32_t x379 = -1;
	int32_t x380 = 16771973;
	volatile uint32_t t5 = 22970U;

	t5 = ((x377<<x378)-(x379^x380));

	if (t5 != 27571718U) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x385 = 0U;
	volatile uint32_t x386 = 6U;
	static uint16_t x387 = UINT16_MAX;
	uint64_t x388 = UINT64_MAX;
	volatile uint64_t t6 = 22LLU;

	t6 = ((x385<<x386)-(x387^x388));

	if (t6 != 65536LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x493 = 14;
	static volatile uint8_t x494 = 16U;
	int16_t x495 = INT16_MAX;
	volatile int32_t t7 = -149754;

	t7 = ((x493<<x494)-(x495^x496));

	if (t7 != 950272) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x501 = 1U;
	uint8_t x502 = 1U;
	int8_t x503 = INT8_MAX;
	int8_t x504 = -1;

	t8 = ((x501<<x502)-(x503^x504));

	if (t8 != 130) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x729 = 0;
	uint8_t x730 = 2U;
	int8_t x731 = INT8_MIN;
	static int16_t x732 = INT16_MAX;
	volatile int32_t t9 = -1983962;

	t9 = ((x729<<x730)-(x731^x732));

	if (t9 != 32641) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x837 = 2;
	uint16_t x838 = 1U;
	int32_t x839 = INT32_MIN;
	uint16_t x840 = UINT16_MAX;
	int32_t t10 = 82643924;

	t10 = ((x837<<x838)-(x839^x840));

	if (t10 != 2147418117) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x849 = 27855LLU;
	static uint16_t x850 = 2U;
	int8_t x851 = -19;
	uint16_t x852 = UINT16_MAX;
	volatile uint64_t t11 = 79981895425760994LLU;

	t11 = ((x849<<x850)-(x851^x852));

	if (t11 != 176938LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x877 = 104500;
	uint8_t x878 = 5U;
	int16_t x879 = INT16_MAX;
	volatile int16_t x880 = INT16_MAX;
	int32_t t12 = 124;

	t12 = ((x877<<x878)-(x879^x880));

	if (t12 != 3344000) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x1073 = UINT64_MAX;
	volatile uint8_t x1074 = 0U;

	t13 = ((x1073<<x1074)-(x1075^x1076));

	if (t13 != 18446744073709486084LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x1085 = 3U;
	uint16_t x1086 = 5U;
	static int64_t x1088 = INT64_MIN;
	volatile int64_t t14 = -173316LL;

	t14 = ((x1085<<x1086)-(x1087^x1088));

	if (t14 != -9223372036854775711LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x1106 = 16U;
	uint32_t x1107 = 7U;
	int64_t x1108 = 14551558492545086LL;
	volatile uint64_t t15 = 15075689309942LLU;

	t15 = ((x1105<<x1106)-(x1107^x1108));

	if (t15 != 18434970391113932743LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x1125 = 5U;
	int8_t x1127 = INT8_MIN;
	int32_t t16 = -657;

	t16 = ((x1125<<x1126)-(x1127^x1128));

	if (t16 != 1032) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x1185 = 29U;
	uint16_t x1186 = 9U;
	uint16_t x1187 = UINT16_MAX;
	static int32_t x1188 = 0;
	volatile int32_t t17 = 202216336;

	t17 = ((x1185<<x1186)-(x1187^x1188));

	if (t17 != -50687) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1237 = 7100;
	volatile int32_t t18 = 0;

	t18 = ((x1237<<x1238)-(x1239^x1240));

	if (t18 != 50210258) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x1329 = 7;
	uint8_t x1330 = 1U;
	volatile int8_t x1331 = INT8_MIN;
	uint64_t x1332 = 254035940LLU;

	t19 = ((x1329<<x1330)-(x1331^x1332));

	if (t19 != 254035882LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1345 = INT16_MAX;
	uint16_t x1346 = 0U;
	int8_t x1348 = -28;
	static volatile int64_t t20 = 16135LL;

	t20 = ((x1345<<x1346)-(x1347^x1348));

	if (t20 != -9223372036854743013LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1417 = 69239U;
	static uint64_t x1418 = 7LLU;
	static uint32_t x1419 = UINT32_MAX;
	volatile int8_t x1420 = -1;
	uint32_t t21 = 952424U;

	t21 = ((x1417<<x1418)-(x1419^x1420));

	if (t21 != 8862592U) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1517 = 652189939414390LLU;
	uint16_t x1518 = 20U;
	static int64_t x1519 = INT64_MIN;
	int64_t x1520 = 1LL;
	volatile uint64_t t22 = 522218369960667735LLU;

	t22 = ((x1517<<x1518)-(x1519^x1520));

	if (t22 != 10564559220984774655LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x1553 = 70LLU;
	static uint8_t x1554 = 0U;
	static int8_t x1555 = -1;
	int64_t x1556 = INT64_MIN;
	static volatile uint64_t t23 = 1LLU;

	t23 = ((x1553<<x1554)-(x1555^x1556));

	if (t23 != 9223372036854775879LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x1557 = 969LLU;
	volatile uint8_t x1558 = 15U;
	uint16_t x1559 = UINT16_MAX;
	int64_t x1560 = -1LL;
	volatile uint64_t t24 = 6264331LLU;

	t24 = ((x1557<<x1558)-(x1559^x1560));

	if (t24 != 31817728LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x1569 = 1LLU;
	uint16_t x1570 = 0U;
	int8_t x1571 = INT8_MIN;
	int8_t x1572 = INT8_MAX;
	static uint64_t t25 = 115757LLU;

	t25 = ((x1569<<x1570)-(x1571^x1572));

	if (t25 != 2LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x1627 = -1;
	int32_t x1628 = INT32_MIN;

	t26 = ((x1625<<x1626)-(x1627^x1628));

	if (t26 != -2147483647) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x1841 = 288U;
	uint8_t x1842 = 28U;
	uint32_t x1844 = 39797824U;
	uint32_t t27 = 5285U;

	t27 = ((x1841<<x1842)-(x1843^x1844));

	if (t27 != 4255169471U) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x1849 = INT64_MAX;
	volatile int8_t x1850 = 0;
	static uint64_t x1852 = UINT64_MAX;

	t28 = ((x1849<<x1850)-(x1851^x1852));

	if (t28 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint16_t x1969 = UINT16_MAX;
	uint64_t x1970 = 15LLU;
	int8_t x1971 = -27;
	uint8_t x1972 = UINT8_MAX;
	int32_t t29 = -241221072;

	t29 = ((x1969<<x1970)-(x1971^x1972));

	if (t29 != 2147451110) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1973 = 1;
	int8_t x1974 = 0;
	int8_t x1975 = 0;
	int8_t x1976 = -1;

	t30 = ((x1973<<x1974)-(x1975^x1976));

	if (t30 != 2) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x2025 = INT16_MAX;
	int16_t x2026 = 0;
	int16_t x2027 = INT16_MIN;
	volatile int64_t t31 = 6066419LL;

	t31 = ((x2025<<x2026)-(x2027^x2028));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x2113 = 1LLU;
	static int8_t x2114 = 46;
	int16_t x2115 = INT16_MIN;
	int16_t x2116 = INT16_MIN;

	t32 = ((x2113<<x2114)-(x2115^x2116));

	if (t32 != 70368744177664LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x2266 = 10LLU;
	int16_t x2268 = 17;
	uint32_t t33 = 181U;

	t33 = ((x2265<<x2266)-(x2267^x2268));

	if (t33 != 4294900754U) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x2313 = 1570U;
	uint64_t x2314 = 9LLU;
	volatile uint32_t t34 = 177446U;

	t34 = ((x2313<<x2314)-(x2315^x2316));

	if (t34 != 869376U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x2341 = 19;
	uint64_t x2342 = 12LLU;
	uint8_t x2343 = 3U;
	uint64_t x2344 = 17155384422LLU;

	t35 = ((x2341<<x2342)-(x2343^x2344));

	if (t35 != 18446744056554245019LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x2369 = 11U;
	static uint8_t x2370 = 14U;
	int64_t x2371 = -2088364926LL;
	int32_t x2372 = INT32_MIN;
	volatile int64_t t36 = 1LL;

	t36 = ((x2369<<x2370)-(x2371^x2372));

	if (t36 != -58938498LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x2525 = 329199721;
	uint8_t x2526 = 2U;
	static int64_t x2527 = -1LL;
	int32_t x2528 = -29445;
	int64_t t37 = -991341960893330214LL;

	t37 = ((x2525<<x2526)-(x2527^x2528));

	if (t37 != 1316769440LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x2573 = INT16_MAX;
	int16_t x2575 = INT16_MIN;
	int32_t x2576 = INT32_MIN;
	int32_t t38 = 8687;

	t38 = ((x2573<<x2574)-(x2575^x2576));

	if (t38 != -2147418113) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x2725 = INT16_MAX;
	uint16_t x2726 = 8U;
	int64_t x2727 = INT64_MIN;
	volatile int32_t x2728 = -1;
	int64_t t39 = -4495LL;

	t39 = ((x2725<<x2726)-(x2727^x2728));

	if (t39 != -9223372036846387455LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x2769 = 10399357948LLU;
	static int16_t x2771 = INT16_MAX;
	volatile int32_t x2772 = 38184;
	static volatile uint64_t t40 = 68451LLU;

	t40 = ((x2769<<x2770)-(x2771^x2772));

	if (t40 != 42595770094889LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2809 = INT32_MAX;
	int16_t x2812 = INT16_MIN;

	t41 = ((x2809<<x2810)-(x2811^x2812));

	if (t41 != 2147451007) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x2878 = 1U;
	int32_t x2879 = INT32_MAX;
	volatile int8_t x2880 = INT8_MAX;
	int32_t t42 = -1;

	t42 = ((x2877<<x2878)-(x2879^x2880));

	if (t42 != -2147417986) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x2981 = 1U;
	static volatile int32_t t43 = 18843301;

	t43 = ((x2981<<x2982)-(x2983^x2984));

	if (t43 != 2147483637) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x3057 = 0;
	uint8_t x3058 = 2U;
	volatile int8_t x3059 = INT8_MIN;
	int32_t x3060 = INT32_MIN;

	t44 = ((x3057<<x3058)-(x3059^x3060));

	if (t44 != -2147483520) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x3069 = 312U;
	int32_t x3071 = 2973238;
	int16_t x3072 = INT16_MIN;
	static int32_t t45 = 533;

	t45 = ((x3069<<x3070)-(x3071^x3072));

	if (t45 != 5513674) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x3085 = 27;
	static int32_t x3086 = 1;
	int8_t x3088 = INT8_MIN;
	volatile int32_t t46 = -9309;

	t46 = ((x3085<<x3086)-(x3087^x3088));

	if (t46 != -1214) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x3141 = 35610190LL;
	int8_t x3143 = -1;
	int64_t x3144 = INT64_MIN;
	int64_t t47 = -848751734808724318LL;

	t47 = ((x3141<<x3142)-(x3143^x3144));

	if (t47 != -9223372036712335047LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x3149 = 19U;
	uint8_t x3150 = 0U;
	int32_t x3151 = INT32_MAX;
	static int32_t t48 = -59256205;

	t48 = ((x3149<<x3150)-(x3151^x3152));

	if (t48 != -2147483611) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x3269 = UINT8_MAX;
	uint32_t x3272 = UINT32_MAX;
	volatile uint32_t t49 = 2216132U;

	t49 = ((x3269<<x3270)-(x3271^x3272));

	if (t49 != 4082U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x3277 = 16U;
	static volatile int32_t x3279 = INT32_MIN;
	int64_t x3280 = -3968624834166978804LL;
	int64_t t50 = 3847LL;

	t50 = ((x3277<<x3278)-(x3279^x3280));

	if (t50 != -3968624835800532732LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x3385 = 64883870511169776LLU;
	volatile uint16_t x3386 = 3U;
	uint32_t x3387 = 101U;
	static volatile uint8_t x3388 = UINT8_MAX;
	static uint64_t t51 = 14123955370371810LLU;

	t51 = ((x3385<<x3386)-(x3387^x3388));

	if (t51 != 519070964089358054LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x3389 = 1U;
	uint8_t x3390 = 5U;
	int16_t x3392 = -1;
	volatile int32_t t52 = 828486;

	t52 = ((x3389<<x3390)-(x3391^x3392));

	if (t52 != 65568) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x3573 = 23;
	int64_t x3574 = 0LL;
	static uint32_t x3576 = UINT32_MAX;
	volatile int64_t t53 = -1920713341669LL;

	t53 = ((x3573<<x3574)-(x3575^x3576));

	if (t53 != -116223075828654LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x3681 = 3U;
	uint8_t x3682 = 9U;
	int32_t x3683 = 924;
	static int8_t x3684 = -19;
	volatile int32_t t54 = 43315544;

	t54 = ((x3681<<x3682)-(x3683^x3684));

	if (t54 != 2447) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x3709 = UINT32_MAX;
	static uint8_t x3710 = 1U;
	int32_t x3711 = INT32_MAX;
	uint8_t x3712 = 19U;
	uint32_t t55 = 47207879U;

	t55 = ((x3709<<x3710)-(x3711^x3712));

	if (t55 != 2147483666U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x3793 = 7U;
	int8_t x3794 = 1;
	static int8_t x3795 = -13;
	int64_t x3796 = 0LL;
	volatile int64_t t56 = -164354347911LL;

	t56 = ((x3793<<x3794)-(x3795^x3796));

	if (t56 != 27LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x3873 = UINT8_MAX;
	int8_t x3874 = 0;
	uint16_t x3875 = UINT16_MAX;
	int8_t x3876 = INT8_MIN;
	int32_t t57 = -1651;

	t57 = ((x3873<<x3874)-(x3875^x3876));

	if (t57 != 65664) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x4001 = INT8_MAX;
	int32_t x4002 = 0;
	static int16_t x4003 = INT16_MIN;
	volatile int32_t t58 = 352870625;

	t58 = ((x4001<<x4002)-(x4003^x4004));

	if (t58 != 32881) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x4009 = 349406639855813004LL;
	uint32_t x4010 = 1U;
	static uint32_t x4011 = 3613977U;
	volatile int64_t t59 = 5700790349372LL;

	t59 = ((x4009<<x4010)-(x4011^x4012));

	if (t59 != 698813279708011954LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x4277 = 71372959U;
	static int8_t x4278 = 0;
	int32_t x4279 = 1546799;
	static int32_t x4280 = -1;
	volatile uint32_t t60 = 15229U;

	t60 = ((x4277<<x4278)-(x4279^x4280));

	if (t60 != 72919759U) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x4326 = 3U;
	int64_t x4327 = 85LL;
	volatile int16_t x4328 = INT16_MAX;
	volatile int64_t t61 = -5170938786496LL;

	t61 = ((x4325<<x4326)-(x4327^x4328));

	if (t61 != -31666LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x4401 = UINT64_MAX;
	uint8_t x4402 = 50U;
	int8_t x4403 = -1;
	static int8_t x4404 = INT8_MAX;
	static uint64_t t62 = 1033444176942647LLU;

	t62 = ((x4401<<x4402)-(x4403^x4404));

	if (t62 != 18445618173802709120LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x4450 = 5U;
	int8_t x4451 = INT8_MAX;
	static int32_t x4452 = INT32_MIN;

	t63 = ((x4449<<x4450)-(x4451^x4452));

	if (t63 != 2147483489U) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x4537 = 5U;
	static volatile uint32_t x4539 = 164366060U;
	uint32_t x4540 = UINT32_MAX;

	t64 = ((x4537<<x4538)-(x4539^x4540));

	if (t64 != 164366066U) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x4565 = 11483780760LLU;
	static uint16_t x4566 = 1U;
	uint32_t x4568 = 10U;

	t65 = ((x4565<<x4566)-(x4567^x4568));

	if (t65 != 18672594235LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x4605 = UINT16_MAX;
	int8_t x4606 = 0;
	int64_t x4608 = -1LL;
	volatile int64_t t66 = -14872LL;

	t66 = ((x4605<<x4606)-(x4607^x4608));

	if (t66 != -2147418112LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int32_t x4729 = 4647;
	volatile int16_t x4732 = -1;
	static volatile int32_t t67 = -132;

	t67 = ((x4729<<x4730)-(x4731^x4732));

	if (t67 != 4758401) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x4777 = 8;
	uint8_t x4778 = 0U;
	volatile uint8_t x4779 = 20U;
	int16_t x4780 = INT16_MIN;
	static volatile int32_t t68 = 54;

	t68 = ((x4777<<x4778)-(x4779^x4780));

	if (t68 != 32756) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint16_t x4810 = 0U;
	int64_t x4811 = INT64_MIN;
	int32_t x4812 = 96;
	volatile int64_t t69 = -3980555356LL;

	t69 = ((x4809<<x4810)-(x4811^x4812));

	if (t69 != 9223372036854775712LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x4885 = 5U;
	int32_t x4886 = 8;
	int16_t x4887 = INT16_MIN;
	int8_t x4888 = -1;
	volatile int32_t t70 = -823121067;

	t70 = ((x4885<<x4886)-(x4887^x4888));

	if (t70 != -31487) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x5042 = 0U;
	int32_t x5043 = INT32_MIN;
	uint64_t x5044 = 302298596192263046LLU;
	volatile uint64_t t71 = 54323187136462LLU;

	t71 = ((x5041<<x5042)-(x5043^x5044));

	if (t71 != 302298596389437945LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x5057 = 178357604048839327LLU;
	uint64_t x5058 = 11LLU;
	static int64_t x5060 = -35600944736296580LL;
	uint64_t t72 = 379LLU;

	t72 = ((x5057<<x5058)-(x5059^x5060));

	if (t72 != 14823836636277709181LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x5081 = UINT32_MAX;
	uint32_t x5084 = UINT32_MAX;
	uint32_t t73 = 114U;

	t73 = ((x5081<<x5082)-(x5083^x5084));

	if (t73 != 2147483617U) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x5085 = 3U;
	int32_t x5087 = INT32_MIN;
	int16_t x5088 = INT16_MIN;

	t74 = ((x5085<<x5086)-(x5087^x5088));

	if (t74 != -2144305152) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x5141 = 5;
	static volatile uint32_t x5143 = 866527589U;
	int32_t x5144 = -1;
	static volatile uint32_t t75 = 27U;

	t75 = ((x5141<<x5142)-(x5143^x5144));

	if (t75 != 866530150U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x5189 = 1;
	static int16_t x5190 = 5;
	int32_t x5191 = INT32_MAX;
	int16_t x5192 = INT16_MIN;
	static int32_t t76 = -92708897;

	t76 = ((x5189<<x5190)-(x5191^x5192));

	if (t76 != 2147450913) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int16_t x5197 = INT16_MAX;
	int16_t x5199 = -2063;
	static int32_t x5200 = 201851116;

	t77 = ((x5197<<x5198)-(x5199^x5200));

	if (t77 != 202115291) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x5233 = UINT32_MAX;
	int32_t x5234 = 1;
	uint8_t x5235 = 3U;
	uint32_t t78 = 39U;

	t78 = ((x5233<<x5234)-(x5235^x5236));

	if (t78 != 123U) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x5309 = 12U;
	static int8_t x5311 = INT8_MIN;
	volatile uint8_t x5312 = UINT8_MAX;
	volatile int32_t t79 = -31590;

	t79 = ((x5309<<x5310)-(x5311^x5312));

	if (t79 != 153) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x5481 = 10818;
	int8_t x5483 = 10;

	t80 = ((x5481<<x5482)-(x5483^x5484));

	if (t80 != 4294551378U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x5554 = 4U;
	volatile int16_t x5555 = INT16_MIN;
	uint8_t x5556 = 118U;
	volatile int32_t t81 = -6200963;

	t81 = ((x5553<<x5554)-(x5555^x5556));

	if (t81 != 556922) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x5557 = UINT64_MAX;
	static uint16_t x5559 = 49U;
	volatile uint64_t t82 = 488214243604184137LLU;

	t82 = ((x5557<<x5558)-(x5559^x5560));

	if (t82 != 46LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x5597 = 444168916618795192LL;
	int16_t x5598 = 2;
	int8_t x5599 = INT8_MIN;
	static int32_t x5600 = INT32_MIN;
	static int64_t t83 = 12083277589315657LL;

	t83 = ((x5597<<x5598)-(x5599^x5600));

	if (t83 != 1776675664327697248LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x5609 = 245816U;
	int8_t x5610 = 0;
	int16_t x5611 = -1;
	static volatile uint16_t x5612 = 2U;
	uint32_t t84 = 145420342U;

	t84 = ((x5609<<x5610)-(x5611^x5612));

	if (t84 != 245819U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x5709 = INT32_MAX;
	int16_t x5710 = 0;
	int64_t x5711 = 31363990404045397LL;
	static int64_t x5712 = -1LL;
	int64_t t85 = -348LL;

	t85 = ((x5709<<x5710)-(x5711^x5712));

	if (t85 != 31363992551529045LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x5721 = 446489U;
	int8_t x5722 = 1;
	int8_t x5723 = -49;
	static volatile uint64_t x5724 = UINT64_MAX;

	t86 = ((x5721<<x5722)-(x5723^x5724));

	if (t86 != 892930LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x5925 = 54843274590LL;
	int64_t t87 = -11765828672892038LL;

	t87 = ((x5925<<x5926)-(x5927^x5928));

	if (t87 != 109647978487LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x5950 = 7;
	int8_t x5951 = -1;
	int32_t x5952 = 174;
	volatile int32_t t88 = -31262;

	t88 = ((x5949<<x5950)-(x5951^x5952));

	if (t88 != 815) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x6029 = 8150LLU;
	static uint8_t x6030 = 52U;
	int8_t x6031 = 1;
	volatile uint64_t t89 = 1LLU;

	t89 = ((x6029<<x6030)-(x6031^x6032));

	if (t89 != 18257592889359990675LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x6045 = INT16_MAX;
	uint16_t x6046 = 0U;
	static int64_t x6048 = INT64_MIN;
	int64_t t90 = -726430071399177371LL;

	t90 = ((x6045<<x6046)-(x6047^x6048));

	if (t90 != -9223372036854742913LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x6073 = INT32_MAX;
	volatile uint16_t x6074 = 0U;
	int64_t x6075 = INT64_MIN;
	static int64_t x6076 = INT64_MIN;
	volatile int64_t t91 = 233148341646LL;

	t91 = ((x6073<<x6074)-(x6075^x6076));

	if (t91 != 2147483647LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x6125 = 61;
	int8_t x6126 = 0;
	int8_t x6127 = 6;
	volatile int8_t x6128 = INT8_MAX;
	static int32_t t92 = -12710127;

	t92 = ((x6125<<x6126)-(x6127^x6128));

	if (t92 != -60) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x6169 = UINT64_MAX;
	volatile uint16_t x6170 = 19U;
	int64_t x6171 = INT64_MIN;
	int64_t x6172 = 1796213919982LL;
	uint64_t t93 = 17068906069LLU;

	t93 = ((x6169<<x6170)-(x6171^x6172));

	if (t93 != 9223370240640331538LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x6197 = UINT32_MAX;
	uint8_t x6198 = 6U;
	uint8_t x6199 = 0U;
	uint16_t x6200 = UINT16_MAX;
	volatile uint32_t t94 = 1318801817U;

	t94 = ((x6197<<x6198)-(x6199^x6200));

	if (t94 != 4294901697U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x6266 = 0;
	int8_t x6267 = INT8_MIN;
	volatile uint32_t t95 = 689719141U;

	t95 = ((x6265<<x6266)-(x6267^x6268));

	if (t95 != 4294967168U) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x6293 = UINT64_MAX;
	int16_t x6294 = 12;
	static int8_t x6295 = -33;
	volatile uint32_t x6296 = 64043108U;
	uint64_t t96 = 1663766LLU;

	t96 = ((x6293<<x6294)-(x6295^x6296));

	if (t96 != 18446744069478623301LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x6297 = UINT64_MAX;
	volatile uint16_t x6298 = 28U;
	uint16_t x6300 = 0U;
	uint64_t t97 = 2209014742230LLU;

	t97 = ((x6297<<x6298)-(x6299^x6300));

	if (t97 != 18446744073441116288LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x6361 = 12448LLU;
	int8_t x6364 = 50;
	static uint64_t t98 = 7075672913631264LLU;

	t98 = ((x6361<<x6362)-(x6363^x6364));

	if (t98 != 12397LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x6521 = INT32_MAX;
	static volatile uint64_t x6524 = 12150308997LLU;

	t99 = ((x6521<<x6522)-(x6523^x6524));

	if (t99 != 14297792645LLU) { NG(); } else { ; }
	
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


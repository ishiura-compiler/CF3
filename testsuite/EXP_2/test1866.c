#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x6 = INT32_MIN;
volatile uint32_t x111 = UINT32_MAX;
volatile uint32_t t1 = 370U;
int16_t x139 = INT16_MAX;
int64_t x140 = 4LL;
volatile uint64_t t2 = 361530313409311069LLU;
uint64_t x273 = UINT64_MAX;
volatile uint64_t t4 = 5856LLU;
static uint8_t x472 = 7U;
int64_t t8 = 11414LL;
uint32_t x564 = 0U;
volatile int32_t x621 = -32223;
uint8_t x622 = 62U;
int32_t x682 = INT32_MIN;
volatile int16_t x683 = INT16_MAX;
static volatile uint32_t x774 = 1033U;
int32_t x962 = 14;
uint8_t x1008 = 17U;
volatile int8_t x1045 = -1;
static uint16_t x1097 = 949U;
uint64_t x1122 = UINT64_MAX;
int64_t x1266 = INT64_MAX;
uint8_t x1364 = 3U;
int32_t x1443 = -3076012;
uint32_t x1531 = 19140U;
uint64_t x1549 = UINT64_MAX;
volatile int64_t t30 = 16LL;
uint32_t x1618 = 119U;
int8_t x1632 = 1;
static volatile uint64_t x1766 = 10172293314LLU;
volatile uint8_t x1768 = 0U;
uint32_t x1815 = UINT32_MAX;
static volatile uint8_t x1816 = 20U;
volatile int64_t x1885 = 34017851549LL;
static uint16_t x1952 = 5U;
volatile int32_t t38 = -760530496;
static int8_t x1997 = INT8_MAX;
uint32_t x2261 = 1701233607U;
int64_t x2324 = 27LL;
volatile int32_t t43 = -1192036;
uint32_t x2369 = UINT32_MAX;
int16_t x2419 = INT16_MIN;
volatile int32_t x2484 = 1;
static int64_t t48 = 14722515147945LL;
int8_t x2529 = -6;
int8_t x2530 = -1;
int8_t x2674 = 25;
uint8_t x2732 = 12U;
volatile uint64_t t53 = 21496LLU;
volatile int8_t x2791 = INT8_MAX;
int16_t x2792 = 0;
static uint32_t x2795 = UINT32_MAX;
int8_t x2856 = 33;
int32_t x2857 = 3068431;
int16_t x2975 = 2;
int64_t t58 = 65430LL;
uint16_t x2977 = 8U;
static volatile int16_t x2978 = 5782;
int64_t t60 = -1005591874189144LL;
uint64_t x3030 = 57432945178609LLU;
uint8_t x3032 = 8U;
uint16_t x3073 = 7U;
uint16_t x3074 = 12U;
volatile uint32_t x3077 = 4U;
uint16_t x3094 = 3U;
uint32_t x3095 = 1U;
volatile uint64_t t65 = 1989893LLU;
static uint64_t t66 = 15679LLU;
volatile uint64_t t68 = 923220152462310583LLU;
volatile uint16_t x3403 = 185U;
volatile uint8_t x3404 = 0U;
uint64_t t73 = 96872902265LLU;
volatile int32_t t78 = -1;
int32_t x3639 = -1;
static int16_t x3650 = -1624;
volatile int64_t t80 = -6835262541364884LL;
int16_t x3660 = 35;
static uint64_t x3977 = 477685627706298499LLU;
uint32_t x3991 = 3313990U;
int16_t x3992 = 15;
static uint64_t x4123 = UINT64_MAX;
volatile uint64_t x4218 = UINT64_MAX;
volatile uint64_t t87 = UINT64_MAX;
int32_t x4306 = INT32_MIN;
int32_t x4329 = INT32_MIN;
int32_t x4342 = INT32_MIN;
uint32_t x4387 = 479U;
uint8_t x4388 = 18U;
volatile int64_t t92 = 301630052LL;
static volatile uint16_t x4415 = 1138U;
uint64_t x4416 = 60LLU;
int64_t t94 = -44LL;
int8_t x4656 = 0;
volatile int16_t x4738 = INT16_MAX;
int32_t t99 = -13368209;


void f0(void) {
	uint32_t x5 = 18U;
	uint64_t x7 = UINT64_MAX;
	int8_t x8 = 1;
	uint64_t t0 = 98716LLU;

	t0 = ((x5+(x6|x7))>>x8);

	if (t0 != 8LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x109 = INT16_MIN;
	int16_t x110 = 4005;
	int8_t x112 = 0;

	t1 = ((x109+(x110|x111))>>x112);

	if (t1 != 4294934527U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x137 = 3677179768138LLU;
	static int8_t x138 = 13;

	t2 = ((x137+(x138|x139))>>x140);

	if (t2 != 229823737556LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x225 = INT16_MAX;
	int16_t x226 = 2198;
	volatile int32_t x227 = -1;
	uint16_t x228 = 0U;
	volatile int32_t t3 = 16616;

	t3 = ((x225+(x226|x227))>>x228);

	if (t3 != 32766) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x274 = INT16_MIN;
	static int32_t x275 = INT32_MIN;
	volatile uint8_t x276 = 5U;

	t4 = ((x273+(x274|x275))>>x276);

	if (t4 != 576460752303422463LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x305 = -1;
	int16_t x306 = INT16_MAX;
	uint16_t x307 = UINT16_MAX;
	static uint64_t x308 = 7LLU;
	int32_t t5 = -7185;

	t5 = ((x305+(x306|x307))>>x308);

	if (t5 != 511) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x385 = INT16_MAX;
	int32_t x386 = INT32_MIN;
	int16_t x387 = -1;
	uint32_t x388 = 1U;
	static volatile int32_t t6 = 729354444;

	t6 = ((x385+(x386|x387))>>x388);

	if (t6 != 16383) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x409 = -1LL;
	int64_t x410 = INT64_MIN;
	uint64_t x411 = 476716319LLU;
	uint16_t x412 = 6U;
	volatile uint64_t t7 = 24471329LLU;

	t7 = ((x409+(x410|x411))>>x412);

	if (t7 != 144115188083304564LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x469 = 1;
	int32_t x470 = -7;
	volatile int64_t x471 = -1LL;

	t8 = ((x469+(x470|x471))>>x472);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x509 = 1;
	int32_t x510 = 1;
	static int16_t x511 = -1;
	uint16_t x512 = 28U;
	volatile int32_t t9 = -3709840;

	t9 = ((x509+(x510|x511))>>x512);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x561 = 3U;
	uint64_t x562 = 26665453147LLU;
	int32_t x563 = INT32_MIN;
	volatile uint64_t t10 = 17699608385420199LLU;

	t10 = ((x561+(x562|x563))>>x564);

	if (t10 != 18446744072457717342LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x623 = 1958773LLU;
	uint32_t x624 = 1U;
	volatile uint64_t t11 = 488612793671LLU;

	t11 = ((x621+(x622|x623))>>x624);

	if (t11 != 963280LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int64_t x681 = INT64_MAX;
	uint16_t x684 = 0U;
	int64_t t12 = -1217256LL;

	t12 = ((x681+(x682|x683))>>x684);

	if (t12 != 9223372034707324926LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x709 = UINT32_MAX;
	int16_t x710 = INT16_MIN;
	int8_t x711 = -1;
	int8_t x712 = 0;
	static uint32_t t13 = 911881U;

	t13 = ((x709+(x710|x711))>>x712);

	if (t13 != 4294967294U) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x773 = 147603199650LLU;
	int16_t x775 = INT16_MAX;
	uint64_t x776 = 15LLU;
	static volatile uint64_t t14 = 63815LLU;

	t14 = ((x773+(x774|x775))>>x776);

	if (t14 != 4504493LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x861 = 32969189075LL;
	int32_t x862 = -25192003;
	volatile int8_t x863 = INT8_MIN;
	uint8_t x864 = 25U;
	static int64_t t15 = -67609388520160LL;

	t15 = ((x861+(x862|x863))>>x864);

	if (t15 != 982LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x889 = 1402U;
	uint16_t x890 = UINT16_MAX;
	uint8_t x891 = 5U;
	volatile uint16_t x892 = 5U;
	static volatile int32_t t16 = -32316;

	t16 = ((x889+(x890|x891))>>x892);

	if (t16 != 2091) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x961 = -1;
	volatile uint8_t x963 = UINT8_MAX;
	uint8_t x964 = 22U;
	int32_t t17 = -1;

	t17 = ((x961+(x962|x963))>>x964);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x1005 = 1392U;
	int32_t x1006 = -1;
	volatile uint8_t x1007 = UINT8_MAX;
	uint32_t t18 = 4U;

	t18 = ((x1005+(x1006|x1007))>>x1008);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x1046 = UINT32_MAX;
	volatile uint8_t x1047 = 9U;
	uint8_t x1048 = 11U;
	volatile uint32_t t19 = 5807U;

	t19 = ((x1045+(x1046|x1047))>>x1048);

	if (t19 != 2097151U) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1098 = 35U;
	uint32_t x1099 = 32U;
	int32_t x1100 = 14;
	static uint32_t t20 = 19639U;

	t20 = ((x1097+(x1098|x1099))>>x1100);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x1121 = -6171;
	static uint32_t x1123 = 27U;
	int8_t x1124 = 6;
	uint64_t t21 = 210648611LLU;

	t21 = ((x1121+(x1122|x1123))>>x1124);

	if (t21 != 288230376151711647LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x1189 = 361;
	int32_t x1190 = -1;
	uint32_t x1191 = 3U;
	int64_t x1192 = 0LL;
	volatile uint32_t t22 = 8612488U;

	t22 = ((x1189+(x1190|x1191))>>x1192);

	if (t22 != 360U) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1265 = 122U;
	static int16_t x1267 = -13620;
	uint8_t x1268 = 31U;
	int64_t t23 = 32413965189LL;

	t23 = ((x1265+(x1266|x1267))>>x1268);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1273 = 2030235562LL;
	static int16_t x1274 = 954;
	uint64_t x1275 = 2022890211192561834LLU;
	uint8_t x1276 = 0U;
	volatile uint64_t t24 = 125206424373LLU;

	t24 = ((x1273+(x1274|x1275))>>x1276);

	if (t24 != 2022890213222798180LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x1361 = UINT32_MAX;
	uint16_t x1362 = 1U;
	int32_t x1363 = 4;
	volatile uint32_t t25 = 1019991964U;

	t25 = ((x1361+(x1362|x1363))>>x1364);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1393 = INT32_MAX;
	volatile uint64_t x1394 = 14922730495779LLU;
	uint32_t x1395 = UINT32_MAX;
	static uint8_t x1396 = 1U;
	volatile uint64_t t26 = 1742LLU;

	t26 = ((x1393+(x1394|x1395))>>x1396);

	if (t26 != 7463579418623LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1441 = 17U;
	uint16_t x1442 = 9U;
	uint8_t x1444 = 3U;
	static uint32_t t27 = 1449U;

	t27 = ((x1441+(x1442|x1443))>>x1444);

	if (t27 != 536486413U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1529 = -58;
	uint32_t x1530 = UINT32_MAX;
	uint16_t x1532 = 18U;
	volatile uint32_t t28 = 68149U;

	t28 = ((x1529+(x1530|x1531))>>x1532);

	if (t28 != 16383U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1550 = 10;
	int32_t x1551 = INT32_MAX;
	volatile uint8_t x1552 = 59U;
	volatile uint64_t t29 = 4819LLU;

	t29 = ((x1549+(x1550|x1551))>>x1552);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int16_t x1609 = 6552;
	int64_t x1610 = INT64_MAX;
	static int8_t x1611 = -1;
	static uint8_t x1612 = 2U;

	t30 = ((x1609+(x1610|x1611))>>x1612);

	if (t30 != 1637LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x1617 = INT32_MIN;
	int16_t x1619 = -1;
	static uint16_t x1620 = 0U;
	volatile uint32_t t31 = 7441900U;

	t31 = ((x1617+(x1618|x1619))>>x1620);

	if (t31 != 2147483647U) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1629 = UINT64_MAX;
	volatile int8_t x1630 = INT8_MIN;
	int64_t x1631 = INT64_MAX;
	uint64_t t32 = 71334LLU;

	t32 = ((x1629+(x1630|x1631))>>x1632);

	if (t32 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x1765 = INT16_MIN;
	int32_t x1767 = -1;
	static volatile uint64_t t33 = 1526500302149363LLU;

	t33 = ((x1765+(x1766|x1767))>>x1768);

	if (t33 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1813 = -5341;
	uint64_t x1814 = UINT64_MAX;
	static volatile uint64_t t34 = 588290300081LLU;

	t34 = ((x1813+(x1814|x1815))>>x1816);

	if (t34 != 17592186044415LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x1886 = 2632435178LL;
	int8_t x1887 = -1;
	volatile int8_t x1888 = 19;
	static volatile int64_t t35 = -193428652LL;

	t35 = ((x1885+(x1886|x1887))>>x1888);

	if (t35 != 64883LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x1909 = INT32_MAX;
	static uint64_t x1910 = 361477597098586LLU;
	uint8_t x1911 = UINT8_MAX;
	int8_t x1912 = 0;
	uint64_t t36 = 5950039511383910LLU;

	t36 = ((x1909+(x1910|x1911))>>x1912);

	if (t36 != 361479744582398LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1917 = -1;
	uint32_t x1918 = UINT32_MAX;
	uint64_t x1919 = 3LLU;
	uint8_t x1920 = 45U;
	volatile uint64_t t37 = 107442881932LLU;

	t37 = ((x1917+(x1918|x1919))>>x1920);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x1949 = INT16_MAX;
	int16_t x1950 = INT16_MAX;
	volatile uint8_t x1951 = UINT8_MAX;

	t38 = ((x1949+(x1950|x1951))>>x1952);

	if (t38 != 2047) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x1998 = 820U;
	uint64_t x1999 = 11654721872LLU;
	volatile int8_t x2000 = 1;
	volatile uint64_t t39 = 21855120LLU;

	t39 = ((x1997+(x1998|x1999))>>x2000);

	if (t39 != 5827361273LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x2161 = 9299U;
	uint8_t x2162 = UINT8_MAX;
	int8_t x2163 = INT8_MIN;
	uint8_t x2164 = 2U;
	static volatile int32_t t40 = -1422665;

	t40 = ((x2161+(x2162|x2163))>>x2164);

	if (t40 != 2324) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2262 = 0;
	int8_t x2263 = INT8_MAX;
	uint32_t x2264 = 6U;
	uint32_t t41 = 377773957U;

	t41 = ((x2261+(x2262|x2263))>>x2264);

	if (t41 != 26581777U) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x2321 = 2U;
	int16_t x2322 = INT16_MIN;
	static int8_t x2323 = INT8_MIN;
	uint32_t t42 = 171705398U;

	t42 = ((x2321+(x2322|x2323))>>x2324);

	if (t42 != 31U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x2341 = 7;
	int32_t x2342 = -1;
	int8_t x2343 = INT8_MIN;
	int16_t x2344 = 1;

	t43 = ((x2341+(x2342|x2343))>>x2344);

	if (t43 != 3) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x2370 = -1017;
	int8_t x2371 = -3;
	uint64_t x2372 = 2LLU;
	uint32_t t44 = 1520120U;

	t44 = ((x2369+(x2370|x2371))>>x2372);

	if (t44 != 1073741823U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2397 = -1;
	uint32_t x2398 = 862053U;
	static uint64_t x2399 = 2914747306812198LLU;
	volatile uint8_t x2400 = 1U;
	volatile uint64_t t45 = 3LLU;

	t45 = ((x2397+(x2398|x2399))>>x2400);

	if (t45 != 1457373653668787LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x2417 = 4;
	static volatile int64_t x2418 = -1LL;
	int16_t x2420 = 17;
	static volatile int64_t t46 = 8922LL;

	t46 = ((x2417+(x2418|x2419))>>x2420);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x2425 = -55;
	int16_t x2426 = INT16_MAX;
	volatile uint32_t x2427 = UINT32_MAX;
	uint8_t x2428 = 10U;
	uint32_t t47 = 781337169U;

	t47 = ((x2425+(x2426|x2427))>>x2428);

	if (t47 != 4194303U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x2481 = 12;
	uint8_t x2482 = UINT8_MAX;
	int64_t x2483 = 512678441312LL;

	t48 = ((x2481+(x2482|x2483))>>x2484);

	if (t48 != 256339220741LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x2531 = 1371540508630278259LLU;
	volatile uint32_t x2532 = 2U;
	volatile uint64_t t49 = 1669028929935838LLU;

	t49 = ((x2529+(x2530|x2531))>>x2532);

	if (t49 != 4611686018427387902LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x2581 = 10LL;
	volatile uint32_t x2582 = UINT32_MAX;
	uint16_t x2583 = UINT16_MAX;
	static volatile int8_t x2584 = 0;
	int64_t t50 = 1LL;

	t50 = ((x2581+(x2582|x2583))>>x2584);

	if (t50 != 4294967305LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x2589 = INT8_MAX;
	volatile uint8_t x2590 = 33U;
	static uint8_t x2591 = 1U;
	uint8_t x2592 = 14U;
	volatile int32_t t51 = 118855;

	t51 = ((x2589+(x2590|x2591))>>x2592);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x2673 = 1U;
	int16_t x2675 = 19;
	uint8_t x2676 = 5U;
	uint32_t t52 = 7176U;

	t52 = ((x2673+(x2674|x2675))>>x2676);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x2729 = 175897240097668LLU;
	int64_t x2730 = -1LL;
	int8_t x2731 = -1;

	t53 = ((x2729+(x2730|x2731))>>x2732);

	if (t53 != 42943662133LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x2789 = UINT32_MAX;
	int16_t x2790 = -1;
	volatile uint32_t t54 = 686U;

	t54 = ((x2789+(x2790|x2791))>>x2792);

	if (t54 != 4294967294U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x2793 = INT32_MIN;
	int8_t x2794 = -1;
	uint16_t x2796 = 1U;
	uint32_t t55 = 31206998U;

	t55 = ((x2793+(x2794|x2795))>>x2796);

	if (t55 != 1073741823U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x2853 = 24538934245LLU;
	static uint8_t x2854 = 1U;
	uint8_t x2855 = UINT8_MAX;
	volatile uint64_t t56 = 4458173600094038LLU;

	t56 = ((x2853+(x2854|x2855))>>x2856);

	if (t56 != 2LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x2858 = -16;
	volatile int8_t x2859 = -2;
	volatile int16_t x2860 = 19;
	int32_t t57 = -42;

	t57 = ((x2857+(x2858|x2859))>>x2860);

	if (t57 != 5) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x2973 = 61LL;
	volatile uint16_t x2974 = 60U;
	uint32_t x2976 = 2U;

	t58 = ((x2973+(x2974|x2975))>>x2976);

	if (t58 != 30LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x2979 = -1LL;
	static uint8_t x2980 = 55U;
	int64_t t59 = -138721539786LL;

	t59 = ((x2977+(x2978|x2979))>>x2980);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x2985 = INT32_MIN;
	int8_t x2986 = INT8_MAX;
	int64_t x2987 = 619485271149267LL;
	uint16_t x2988 = 4U;

	t60 = ((x2985+(x2986|x2987))>>x2988);

	if (t60 != 38717695229103LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x3029 = 2734U;
	int16_t x3031 = INT16_MAX;
	static uint64_t t61 = 1117109786650209LLU;

	t61 = ((x3029+(x3030|x3031))>>x3032);

	if (t61 != 224347442186LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x3061 = 116U;
	uint16_t x3062 = 11639U;
	static volatile int32_t x3063 = -1;
	uint8_t x3064 = 2U;
	volatile uint32_t t62 = 184546U;

	t62 = ((x3061+(x3062|x3063))>>x3064);

	if (t62 != 28U) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x3075 = 16805U;
	volatile uint16_t x3076 = 1U;
	volatile int32_t t63 = -117695;

	t63 = ((x3073+(x3074|x3075))>>x3076);

	if (t63 != 8410) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x3078 = 25U;
	int64_t x3079 = -1LL;
	uint16_t x3080 = 1U;
	static volatile int64_t t64 = 4069021407907156LL;

	t64 = ((x3077+(x3078|x3079))>>x3080);

	if (t64 != 1LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x3093 = 3139200708LLU;
	int8_t x3096 = 1;

	t65 = ((x3093+(x3094|x3095))>>x3096);

	if (t65 != 1569600355LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x3189 = INT64_MIN;
	uint64_t x3190 = 2215789LLU;
	int8_t x3191 = INT8_MIN;
	uint16_t x3192 = 6U;

	t66 = ((x3189+(x3190|x3191))>>x3192);

	if (t66 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x3209 = -37056504LL;
	static uint64_t x3210 = 22892806204LLU;
	uint16_t x3211 = 29U;
	static volatile int32_t x3212 = 12;
	volatile uint64_t t67 = 53792782731LLU;

	t67 = ((x3209+(x3210|x3211))>>x3212);

	if (t67 != 5580017LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x3225 = INT8_MIN;
	static volatile uint64_t x3226 = 9706132190018762LLU;
	volatile int64_t x3227 = INT64_MAX;
	volatile int8_t x3228 = 58;

	t68 = ((x3225+(x3226|x3227))>>x3228);

	if (t68 != 31LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x3249 = 3681340498LL;
	volatile int16_t x3250 = INT16_MIN;
	static int8_t x3251 = INT8_MIN;
	int16_t x3252 = 0;
	int64_t t69 = -1033889LL;

	t69 = ((x3249+(x3250|x3251))>>x3252);

	if (t69 != 3681340370LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x3273 = 2219U;
	uint32_t x3274 = UINT32_MAX;
	int8_t x3275 = -1;
	volatile uint32_t x3276 = 14U;
	uint32_t t70 = 31149738U;

	t70 = ((x3273+(x3274|x3275))>>x3276);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x3325 = UINT32_MAX;
	volatile uint8_t x3326 = UINT8_MAX;
	static volatile uint64_t x3327 = 6839536LLU;
	int8_t x3328 = 15;
	volatile uint64_t t71 = 84LLU;

	t71 = ((x3325+(x3326|x3327))>>x3328);

	if (t71 != 131280LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x3397 = INT8_MIN;
	int32_t x3398 = INT32_MAX;
	volatile uint8_t x3399 = 1U;
	static int16_t x3400 = 1;
	static int32_t t72 = 17;

	t72 = ((x3397+(x3398|x3399))>>x3400);

	if (t72 != 1073741759) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x3401 = 7LLU;
	int64_t x3402 = INT64_MAX;

	t73 = ((x3401+(x3402|x3403))>>x3404);

	if (t73 != 9223372036854775814LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x3469 = 2U;
	volatile int32_t x3470 = INT32_MAX;
	int8_t x3471 = INT8_MIN;
	int16_t x3472 = 1;
	volatile int32_t t74 = 10800;

	t74 = ((x3469+(x3470|x3471))>>x3472);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x3509 = 0U;
	volatile int64_t x3510 = INT64_MAX;
	static uint8_t x3511 = 16U;
	volatile int64_t x3512 = 24LL;
	static volatile int64_t t75 = 1LL;

	t75 = ((x3509+(x3510|x3511))>>x3512);

	if (t75 != 549755813887LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x3525 = INT16_MIN;
	volatile uint8_t x3526 = 113U;
	uint64_t x3527 = UINT64_MAX;
	uint8_t x3528 = 0U;
	uint64_t t76 = 1927145LLU;

	t76 = ((x3525+(x3526|x3527))>>x3528);

	if (t76 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x3569 = 144200374LLU;
	uint16_t x3570 = 41U;
	int64_t x3571 = -1LL;
	int8_t x3572 = 0;
	static volatile uint64_t t77 = 1321342843708631548LLU;

	t77 = ((x3569+(x3570|x3571))>>x3572);

	if (t77 != 144200373LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint8_t x3609 = 55U;
	volatile int8_t x3610 = 0;
	volatile int8_t x3611 = -30;
	uint8_t x3612 = 0U;

	t78 = ((x3609+(x3610|x3611))>>x3612);

	if (t78 != 25) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x3637 = 38;
	uint32_t x3638 = 914276U;
	uint8_t x3640 = 12U;
	uint32_t t79 = 18324U;

	t79 = ((x3637+(x3638|x3639))>>x3640);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x3649 = -14818LL;
	uint32_t x3651 = UINT32_MAX;
	int8_t x3652 = 1;

	t80 = ((x3649+(x3650|x3651))>>x3652);

	if (t80 != 2147476238LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x3657 = 3510516701019722LL;
	volatile int8_t x3658 = 1;
	static uint32_t x3659 = UINT32_MAX;
	int64_t t81 = 28112109LL;

	t81 = ((x3657+(x3658|x3659))>>x3660);

	if (t81 != 102169LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x3665 = UINT8_MAX;
	static uint8_t x3666 = 11U;
	static int8_t x3667 = INT8_MIN;
	volatile int32_t x3668 = 20;
	int32_t t82 = -13;

	t82 = ((x3665+(x3666|x3667))>>x3668);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x3978 = -1;
	uint8_t x3979 = 1U;
	uint16_t x3980 = 55U;
	uint64_t t83 = 563840690738223LLU;

	t83 = ((x3977+(x3978|x3979))>>x3980);

	if (t83 != 13LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x3989 = -1LL;
	volatile int32_t x3990 = INT32_MIN;
	static int64_t t84 = -18616LL;

	t84 = ((x3989+(x3990|x3991))>>x3992);

	if (t84 != 65637LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x4041 = UINT32_MAX;
	int16_t x4042 = INT16_MAX;
	int32_t x4043 = INT32_MIN;
	uint8_t x4044 = 12U;
	volatile uint32_t t85 = 105U;

	t85 = ((x4041+(x4042|x4043))>>x4044);

	if (t85 != 524295U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x4121 = -1LL;
	int16_t x4122 = 607;
	static volatile uint32_t x4124 = 55U;
	uint64_t t86 = 11369857578931LLU;

	t86 = ((x4121+(x4122|x4123))>>x4124);

	if (t86 != 511LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x4217 = 0U;
	int16_t x4219 = INT16_MIN;
	int8_t x4220 = 0;

	t87 = ((x4217+(x4218|x4219))>>x4220);

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x4305 = 2U;
	int16_t x4307 = -1;
	int32_t x4308 = 1;
	volatile int32_t t88 = -978;

	t88 = ((x4305+(x4306|x4307))>>x4308);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x4313 = 7U;
	int16_t x4314 = INT16_MAX;
	volatile uint64_t x4315 = 56306741854857LLU;
	int8_t x4316 = 0;
	static volatile uint64_t t89 = 279174158LLU;

	t89 = ((x4313+(x4314|x4315))>>x4316);

	if (t89 != 56306741870598LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x4330 = 39;
	uint32_t x4331 = UINT32_MAX;
	int8_t x4332 = 1;
	volatile uint32_t t90 = 11U;

	t90 = ((x4329+(x4330|x4331))>>x4332);

	if (t90 != 1073741823U) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x4341 = 0LLU;
	int16_t x4343 = 31;
	int8_t x4344 = 12;
	volatile uint64_t t91 = 8251266LLU;

	t91 = ((x4341+(x4342|x4343))>>x4344);

	if (t91 != 4503599626846208LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x4385 = 4U;
	volatile int64_t x4386 = -1LL;

	t92 = ((x4385+(x4386|x4387))>>x4388);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x4397 = -1;
	uint32_t x4398 = 97959282U;
	static int8_t x4399 = 0;
	uint32_t x4400 = 2U;
	uint32_t t93 = 756U;

	t93 = ((x4397+(x4398|x4399))>>x4400);

	if (t93 != 24489820U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x4413 = INT8_MAX;
	int64_t x4414 = -1LL;

	t94 = ((x4413+(x4414|x4415))>>x4416);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x4541 = UINT64_MAX;
	int64_t x4542 = -1LL;
	volatile int8_t x4543 = -1;
	static int8_t x4544 = 1;
	volatile uint64_t t95 = 216LLU;

	t95 = ((x4541+(x4542|x4543))>>x4544);

	if (t95 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x4653 = UINT16_MAX;
	int16_t x4654 = 917;
	int16_t x4655 = INT16_MIN;
	int32_t t96 = 520295;

	t96 = ((x4653+(x4654|x4655))>>x4656);

	if (t96 != 33684) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x4721 = 415LLU;
	int16_t x4722 = INT16_MAX;
	static uint16_t x4723 = UINT16_MAX;
	uint32_t x4724 = 5U;
	static volatile uint64_t t97 = 1657LLU;

	t97 = ((x4721+(x4722|x4723))>>x4724);

	if (t97 != 2060LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x4737 = INT8_MIN;
	int64_t x4739 = 3363155LL;
	int8_t x4740 = 10;
	volatile int64_t t98 = -265LL;

	t98 = ((x4737+(x4738|x4739))>>x4740);

	if (t98 != 3295LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x4797 = INT32_MAX;
	uint16_t x4798 = UINT16_MAX;
	int16_t x4799 = -9175;
	static int16_t x4800 = 0;

	t99 = ((x4797+(x4798|x4799))>>x4800);

	if (t99 != 2147483646) { NG(); } else { ; }
	
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


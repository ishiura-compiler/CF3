#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x149 = 57;
int32_t x240 = 3;
int16_t x306 = -10607;
uint8_t x308 = 6U;
static uint64_t x623 = 6LLU;
uint64_t t5 = 142009062738597486LLU;
uint8_t x678 = 66U;
uint32_t x679 = 37882604U;
int8_t x680 = 2;
static int16_t x796 = 0;
int32_t x869 = -69;
int32_t t8 = -15678173;
int32_t x982 = INT32_MIN;
volatile int32_t t10 = -12895786;
static uint8_t x991 = 1U;
static uint8_t x1009 = 1U;
int16_t x1053 = -1;
volatile uint16_t x1135 = UINT16_MAX;
volatile int32_t x1188 = 33;
int64_t x1242 = 63132LL;
uint8_t x1373 = 101U;
static int64_t x1374 = INT64_MIN;
static uint64_t x1375 = UINT64_MAX;
static uint16_t x1443 = 971U;
uint64_t x1547 = 854843568767759LLU;
volatile int8_t x1548 = 1;
int32_t x1589 = -1;
int32_t x1590 = 74;
int16_t x1669 = INT16_MAX;
int16_t x1671 = 6836;
static int8_t x1672 = 1;
volatile int32_t t25 = 2205;
int16_t x1785 = INT16_MIN;
int16_t x1786 = INT16_MAX;
int8_t x1788 = 3;
int32_t x1789 = INT32_MIN;
volatile uint16_t x1895 = UINT16_MAX;
volatile int32_t t28 = -3745366;
int64_t x2026 = 44778LL;
int32_t t29 = -2410;
volatile uint32_t t32 = 14U;
static int32_t x2306 = INT32_MAX;
volatile uint32_t x2414 = UINT32_MAX;
uint32_t x2534 = 12947291U;
int32_t t36 = 9185661;
uint32_t x2922 = 11U;
uint32_t x3079 = 81489U;
volatile uint8_t x3080 = 1U;
int32_t x3090 = INT32_MIN;
uint8_t x3092 = 0U;
int64_t x3405 = -1LL;
volatile uint8_t x3407 = UINT8_MAX;
uint8_t x3408 = 0U;
uint16_t x3587 = 29478U;
int32_t x3606 = -1;
int64_t x3749 = -1LL;
volatile uint32_t x3752 = 2U;
static volatile int64_t x3947 = 867548926819850LL;
static volatile uint32_t x3948 = 3U;
int8_t x4059 = 1;
int16_t x4060 = 1;
int8_t x4236 = 0;
volatile int32_t t50 = -38909266;
int32_t x4346 = INT32_MIN;
uint16_t x4362 = 0U;
static int32_t t53 = 1;
volatile uint64_t t57 = 268146937LLU;
volatile int32_t t58 = 2;
int32_t t59 = 1439724;
int64_t x5090 = -11602494388938884LL;
volatile uint32_t t60 = 6U;
int64_t x5114 = 73LL;
int32_t t61 = -4;
uint16_t x5240 = 44U;
int16_t x5319 = 3;
int32_t t64 = 5920589;
volatile uint32_t x5321 = 57025U;
int8_t x5427 = INT8_MAX;
volatile uint16_t x5437 = 7U;
uint16_t x5438 = 18U;
int32_t t68 = INT32_MAX;
static uint8_t x5557 = 18U;
int32_t t71 = 1;
int64_t x5705 = -564343064233033LL;
int32_t x5826 = 127228680;
int8_t x5828 = 54;
uint64_t x5979 = 15659802LLU;
uint8_t x5980 = 50U;
static int16_t x6001 = -4754;
static int16_t x6004 = 2;
int32_t x6037 = INT32_MIN;
static uint16_t x6081 = 5111U;
uint16_t x6082 = UINT16_MAX;
uint64_t x6150 = 3882106541LLU;
int64_t x6426 = INT64_MAX;
static int64_t x6427 = 655597282801LL;
volatile int32_t t84 = 391435266;
int8_t x6557 = INT8_MIN;
uint8_t x6559 = 127U;
int32_t x6581 = -1;
static uint32_t x6583 = 1856U;
int8_t x6608 = 12;
volatile int64_t t87 = 2953000104497275LL;
uint32_t x6643 = 55801U;
int8_t x6832 = 21;
uint64_t t91 = 17726180LLU;
uint64_t t92 = 15821410028684582LLU;
uint16_t x6896 = 1U;
int64_t x7021 = -1LL;
uint64_t x7023 = 1LLU;
int8_t x7057 = INT8_MAX;
static int16_t x7058 = INT16_MAX;
volatile int32_t t96 = 38231;
uint8_t x7089 = UINT8_MAX;
static int8_t x7091 = INT8_MAX;


void f0(void) {
	uint8_t x57 = 114U;
	static int64_t x58 = INT64_MAX;
	int32_t x59 = 5;
	static int8_t x60 = 0;
	volatile int32_t t0 = -7919286;

	t0 = (((x57==x58)|x59)<<x60);

	if (t0 != 5) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x150 = INT16_MIN;
	uint64_t x151 = UINT64_MAX;
	uint8_t x152 = 13U;
	static volatile uint64_t t1 = 32649730522938941LLU;

	t1 = (((x149==x150)|x151)<<x152);

	if (t1 != 18446744073709543424LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x237 = INT64_MIN;
	static uint16_t x238 = 1452U;
	uint16_t x239 = 18U;
	int32_t t2 = -32806961;

	t2 = (((x237==x238)|x239)<<x240);

	if (t2 != 144) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x305 = INT8_MIN;
	uint16_t x307 = 3857U;
	volatile int32_t t3 = -1;

	t3 = (((x305==x306)|x307)<<x308);

	if (t3 != 246848) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x569 = 2U;
	uint32_t x570 = 240390048U;
	uint64_t x571 = UINT64_MAX;
	uint64_t x572 = 3LLU;
	uint64_t t4 = 4841304757017945997LLU;

	t4 = (((x569==x570)|x571)<<x572);

	if (t4 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x621 = -1LL;
	int32_t x622 = 238722;
	volatile int64_t x624 = 1LL;

	t5 = (((x621==x622)|x623)<<x624);

	if (t5 != 12LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x677 = INT8_MIN;
	uint32_t t6 = 59U;

	t6 = (((x677==x678)|x679)<<x680);

	if (t6 != 151530416U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x793 = UINT16_MAX;
	uint32_t x794 = 30163U;
	volatile int16_t x795 = INT16_MAX;
	int32_t t7 = -1;

	t7 = (((x793==x794)|x795)<<x796);

	if (t7 != 32767) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x870 = UINT32_MAX;
	uint16_t x871 = 1U;
	int8_t x872 = 0;

	t8 = (((x869==x870)|x871)<<x872);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x965 = 1879;
	static uint16_t x966 = 4804U;
	uint32_t x967 = 3U;
	static int8_t x968 = 0;
	uint32_t t9 = 12724737U;

	t9 = (((x965==x966)|x967)<<x968);

	if (t9 != 3U) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x981 = UINT32_MAX;
	int32_t x983 = 1;
	volatile uint8_t x984 = 5U;

	t10 = (((x981==x982)|x983)<<x984);

	if (t10 != 32) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x989 = 156290675U;
	uint8_t x990 = UINT8_MAX;
	uint32_t x992 = 0U;
	volatile int32_t t11 = -431702;

	t11 = (((x989==x990)|x991)<<x992);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x1010 = 92518192;
	uint64_t x1011 = 4283LLU;
	uint8_t x1012 = 1U;
	uint64_t t12 = 0LLU;

	t12 = (((x1009==x1010)|x1011)<<x1012);

	if (t12 != 8566LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x1054 = -1;
	int8_t x1055 = 0;
	uint8_t x1056 = 2U;
	int32_t t13 = 255018;

	t13 = (((x1053==x1054)|x1055)<<x1056);

	if (t13 != 4) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x1133 = INT64_MIN;
	int64_t x1134 = INT64_MIN;
	int8_t x1136 = 0;
	volatile int32_t t14 = -586569;

	t14 = (((x1133==x1134)|x1135)<<x1136);

	if (t14 != 65535) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x1137 = 157225319477820303LL;
	volatile int64_t x1138 = INT64_MIN;
	int64_t x1139 = 0LL;
	int8_t x1140 = 0;
	volatile int64_t t15 = -948150513LL;

	t15 = (((x1137==x1138)|x1139)<<x1140);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x1185 = INT32_MIN;
	int8_t x1186 = -7;
	int64_t x1187 = 2560LL;
	int64_t t16 = -275582LL;

	t16 = (((x1185==x1186)|x1187)<<x1188);

	if (t16 != 21990232555520LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x1241 = INT16_MIN;
	volatile uint32_t x1243 = 2788U;
	uint32_t x1244 = 0U;
	volatile uint32_t t17 = 1U;

	t17 = (((x1241==x1242)|x1243)<<x1244);

	if (t17 != 2788U) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x1376 = 7U;
	uint64_t t18 = 10140696267836266LLU;

	t18 = (((x1373==x1374)|x1375)<<x1376);

	if (t18 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x1393 = -1;
	int64_t x1394 = -1LL;
	uint8_t x1395 = UINT8_MAX;
	uint8_t x1396 = 7U;
	volatile int32_t t19 = 1813844;

	t19 = (((x1393==x1394)|x1395)<<x1396);

	if (t19 != 32640) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x1441 = 77U;
	int32_t x1442 = INT32_MAX;
	uint8_t x1444 = 1U;
	int32_t t20 = -271272;

	t20 = (((x1441==x1442)|x1443)<<x1444);

	if (t20 != 1942) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1545 = INT16_MIN;
	volatile uint64_t x1546 = 15184LLU;
	static uint64_t t21 = 800301885LLU;

	t21 = (((x1545==x1546)|x1547)<<x1548);

	if (t21 != 1709687137535518LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x1561 = -545452739080874313LL;
	int16_t x1562 = INT16_MAX;
	int32_t x1563 = 86121251;
	volatile uint8_t x1564 = 3U;
	volatile int32_t t22 = -26;

	t22 = (((x1561==x1562)|x1563)<<x1564);

	if (t22 != 688970008) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1591 = INT64_MAX;
	static volatile int16_t x1592 = 0;
	int64_t t23 = INT64_MAX;

	t23 = (((x1589==x1590)|x1591)<<x1592);

	if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x1613 = 14U;
	int32_t x1614 = INT32_MAX;
	static uint64_t x1615 = 5342906099938LLU;
	int8_t x1616 = 47;
	uint64_t t24 = 92LLU;

	t24 = (((x1613==x1614)|x1615)<<x1616);

	if (t24 != 10696330589981638656LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x1670 = 2U;

	t25 = (((x1669==x1670)|x1671)<<x1672);

	if (t25 != 13672) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1787 = 4;
	volatile int32_t t26 = -260293;

	t26 = (((x1785==x1786)|x1787)<<x1788);

	if (t26 != 32) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1790 = -3;
	volatile uint16_t x1791 = UINT16_MAX;
	static int8_t x1792 = 0;
	volatile int32_t t27 = -14;

	t27 = (((x1789==x1790)|x1791)<<x1792);

	if (t27 != 65535) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1893 = 3U;
	volatile uint16_t x1894 = 0U;
	volatile uint32_t x1896 = 0U;

	t28 = (((x1893==x1894)|x1895)<<x1896);

	if (t28 != 65535) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x2025 = 4;
	uint8_t x2027 = 1U;
	uint8_t x2028 = 2U;

	t29 = (((x2025==x2026)|x2027)<<x2028);

	if (t29 != 4) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x2065 = INT32_MAX;
	uint64_t x2066 = 133211LLU;
	uint64_t x2067 = 818942753LLU;
	uint16_t x2068 = 2U;
	uint64_t t30 = 645LLU;

	t30 = (((x2065==x2066)|x2067)<<x2068);

	if (t30 != 3275771012LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x2093 = INT64_MIN;
	int64_t x2094 = INT64_MAX;
	uint16_t x2095 = 2336U;
	uint16_t x2096 = 1U;
	int32_t t31 = -13;

	t31 = (((x2093==x2094)|x2095)<<x2096);

	if (t31 != 4672) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x2265 = INT32_MAX;
	static int64_t x2266 = -1LL;
	uint32_t x2267 = 108173U;
	static int16_t x2268 = 1;

	t32 = (((x2265==x2266)|x2267)<<x2268);

	if (t32 != 216346U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x2305 = INT8_MAX;
	uint8_t x2307 = UINT8_MAX;
	int8_t x2308 = 0;
	volatile int32_t t33 = 8;

	t33 = (((x2305==x2306)|x2307)<<x2308);

	if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x2377 = 25U;
	static int16_t x2378 = -4;
	uint64_t x2379 = 5623LLU;
	int32_t x2380 = 0;
	volatile uint64_t t34 = 503047087159473LLU;

	t34 = (((x2377==x2378)|x2379)<<x2380);

	if (t34 != 5623LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x2413 = INT64_MAX;
	static uint32_t x2415 = 259U;
	int16_t x2416 = 1;
	volatile uint32_t t35 = 138530418U;

	t35 = (((x2413==x2414)|x2415)<<x2416);

	if (t35 != 518U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x2533 = INT32_MIN;
	int8_t x2535 = INT8_MAX;
	uint16_t x2536 = 15U;

	t36 = (((x2533==x2534)|x2535)<<x2536);

	if (t36 != 4161536) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x2921 = 468994800452LLU;
	volatile uint8_t x2923 = 1U;
	static uint8_t x2924 = 7U;
	int32_t t37 = -905532747;

	t37 = (((x2921==x2922)|x2923)<<x2924);

	if (t37 != 128) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x3061 = INT32_MIN;
	int32_t x3062 = INT32_MIN;
	volatile int32_t x3063 = 3296;
	volatile int16_t x3064 = 1;
	int32_t t38 = -495347;

	t38 = (((x3061==x3062)|x3063)<<x3064);

	if (t38 != 6594) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x3077 = 252602288250197LLU;
	int8_t x3078 = INT8_MIN;
	volatile uint32_t t39 = 3720260U;

	t39 = (((x3077==x3078)|x3079)<<x3080);

	if (t39 != 162978U) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x3089 = -1LL;
	volatile int16_t x3091 = 2;
	int32_t t40 = -4726;

	t40 = (((x3089==x3090)|x3091)<<x3092);

	if (t40 != 2) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x3369 = INT64_MIN;
	uint8_t x3370 = 4U;
	uint16_t x3371 = 3891U;
	int16_t x3372 = 0;
	static volatile int32_t t41 = 299245;

	t41 = (((x3369==x3370)|x3371)<<x3372);

	if (t41 != 3891) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x3406 = INT32_MIN;
	int32_t t42 = 178;

	t42 = (((x3405==x3406)|x3407)<<x3408);

	if (t42 != 255) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x3441 = UINT32_MAX;
	int64_t x3442 = 4469630724LL;
	static uint64_t x3443 = 22LLU;
	uint8_t x3444 = 0U;
	uint64_t t43 = 10LLU;

	t43 = (((x3441==x3442)|x3443)<<x3444);

	if (t43 != 22LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x3585 = INT64_MIN;
	volatile int64_t x3586 = -1LL;
	int8_t x3588 = 2;
	static int32_t t44 = -37362342;

	t44 = (((x3585==x3586)|x3587)<<x3588);

	if (t44 != 117912) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x3605 = UINT16_MAX;
	static volatile int8_t x3607 = INT8_MAX;
	static uint8_t x3608 = 0U;
	int32_t t45 = 3;

	t45 = (((x3605==x3606)|x3607)<<x3608);

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x3750 = INT32_MIN;
	volatile uint32_t x3751 = 820619U;
	uint32_t t46 = 375342U;

	t46 = (((x3749==x3750)|x3751)<<x3752);

	if (t46 != 3282476U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x3773 = -1LL;
	int32_t x3774 = -1;
	uint16_t x3775 = 12U;
	volatile uint16_t x3776 = 7U;
	volatile int32_t t47 = 105865602;

	t47 = (((x3773==x3774)|x3775)<<x3776);

	if (t47 != 1664) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x3945 = 1;
	int64_t x3946 = 6590795LL;
	volatile int64_t t48 = 2070958LL;

	t48 = (((x3945==x3946)|x3947)<<x3948);

	if (t48 != 6940391414558800LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x4057 = 0U;
	int16_t x4058 = 1;
	static volatile int32_t t49 = -17;

	t49 = (((x4057==x4058)|x4059)<<x4060);

	if (t49 != 2) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x4233 = 1;
	int32_t x4234 = INT32_MIN;
	int8_t x4235 = INT8_MAX;

	t50 = (((x4233==x4234)|x4235)<<x4236);

	if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x4345 = -1;
	int16_t x4347 = 53;
	volatile int8_t x4348 = 1;
	volatile int32_t t51 = -39486;

	t51 = (((x4345==x4346)|x4347)<<x4348);

	if (t51 != 106) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x4361 = -508702585567689081LL;
	uint64_t x4363 = UINT64_MAX;
	static volatile uint8_t x4364 = 1U;
	static uint64_t t52 = 1LLU;

	t52 = (((x4361==x4362)|x4363)<<x4364);

	if (t52 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x4461 = UINT64_MAX;
	volatile int64_t x4462 = INT64_MAX;
	static volatile int16_t x4463 = INT16_MAX;
	int8_t x4464 = 0;

	t53 = (((x4461==x4462)|x4463)<<x4464);

	if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x4733 = 4586045473753527625LLU;
	int32_t x4734 = INT32_MIN;
	int8_t x4735 = INT8_MAX;
	int16_t x4736 = 1;
	static volatile int32_t t54 = -32069535;

	t54 = (((x4733==x4734)|x4735)<<x4736);

	if (t54 != 254) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x4749 = -536303558LL;
	int8_t x4750 = INT8_MIN;
	uint64_t x4751 = 10509220LLU;
	static uint8_t x4752 = 0U;
	volatile uint64_t t55 = 3461464514620621279LLU;

	t55 = (((x4749==x4750)|x4751)<<x4752);

	if (t55 != 10509220LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x4849 = -1;
	int16_t x4850 = -4;
	uint8_t x4851 = UINT8_MAX;
	uint8_t x4852 = 9U;
	volatile int32_t t56 = -2;

	t56 = (((x4849==x4850)|x4851)<<x4852);

	if (t56 != 130560) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x4865 = -1;
	volatile int64_t x4866 = -386542876766LL;
	static volatile uint64_t x4867 = 39008809252604LLU;
	int32_t x4868 = 1;

	t57 = (((x4865==x4866)|x4867)<<x4868);

	if (t57 != 78017618505208LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x4945 = INT64_MIN;
	uint32_t x4946 = 115417U;
	int8_t x4947 = 2;
	static int8_t x4948 = 1;

	t58 = (((x4945==x4946)|x4947)<<x4948);

	if (t58 != 4) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x5017 = INT64_MAX;
	volatile uint32_t x5018 = 55U;
	int16_t x5019 = 288;
	static uint8_t x5020 = 12U;

	t59 = (((x5017==x5018)|x5019)<<x5020);

	if (t59 != 1179648) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x5089 = INT64_MAX;
	volatile uint32_t x5091 = UINT32_MAX;
	int32_t x5092 = 12;

	t60 = (((x5089==x5090)|x5091)<<x5092);

	if (t60 != 4294963200U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x5113 = 16205U;
	uint16_t x5115 = 26U;
	uint8_t x5116 = 16U;

	t61 = (((x5113==x5114)|x5115)<<x5116);

	if (t61 != 1703936) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x5145 = -1LL;
	static int64_t x5146 = INT64_MIN;
	volatile uint16_t x5147 = 207U;
	static uint8_t x5148 = 0U;
	int32_t t62 = 1;

	t62 = (((x5145==x5146)|x5147)<<x5148);

	if (t62 != 207) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x5237 = 8;
	int8_t x5238 = -1;
	uint64_t x5239 = 1621674LLU;
	volatile uint64_t t63 = 363297536LLU;

	t63 = (((x5237==x5238)|x5239)<<x5240);

	if (t63 != 10082046637682720768LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x5317 = 1739044756054155LLU;
	uint8_t x5318 = 7U;
	int8_t x5320 = 26;

	t64 = (((x5317==x5318)|x5319)<<x5320);

	if (t64 != 201326592) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x5322 = -1;
	uint64_t x5323 = 13002LLU;
	volatile int8_t x5324 = 0;
	static uint64_t t65 = 944033165360972310LLU;

	t65 = (((x5321==x5322)|x5323)<<x5324);

	if (t65 != 13002LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x5349 = -474625468LL;
	static volatile int64_t x5350 = INT64_MAX;
	volatile uint16_t x5351 = UINT16_MAX;
	int8_t x5352 = 2;
	volatile int32_t t66 = -6789077;

	t66 = (((x5349==x5350)|x5351)<<x5352);

	if (t66 != 262140) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x5425 = INT8_MIN;
	volatile int8_t x5426 = INT8_MAX;
	volatile int8_t x5428 = 12;
	int32_t t67 = -171;

	t67 = (((x5425==x5426)|x5427)<<x5428);

	if (t67 != 520192) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x5439 = INT32_MAX;
	volatile int32_t x5440 = 0;

	t68 = (((x5437==x5438)|x5439)<<x5440);

	if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x5558 = 30538028U;
	static uint32_t x5559 = UINT32_MAX;
	volatile int8_t x5560 = 1;
	static uint32_t t69 = 130U;

	t69 = (((x5557==x5558)|x5559)<<x5560);

	if (t69 != 4294967294U) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x5585 = INT32_MIN;
	static uint32_t x5586 = UINT32_MAX;
	uint8_t x5587 = UINT8_MAX;
	uint16_t x5588 = 2U;
	volatile int32_t t70 = -158;

	t70 = (((x5585==x5586)|x5587)<<x5588);

	if (t70 != 1020) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x5629 = UINT16_MAX;
	uint8_t x5630 = 2U;
	uint16_t x5631 = 13112U;
	uint8_t x5632 = 7U;

	t71 = (((x5629==x5630)|x5631)<<x5632);

	if (t71 != 1678336) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x5706 = -21;
	static volatile uint16_t x5707 = 17U;
	uint8_t x5708 = 1U;
	int32_t t72 = -469404039;

	t72 = (((x5705==x5706)|x5707)<<x5708);

	if (t72 != 34) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x5825 = -1;
	int64_t x5827 = 74LL;
	volatile int64_t t73 = -73186819LL;

	t73 = (((x5825==x5826)|x5827)<<x5828);

	if (t73 != 1333065489701666816LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x5977 = 92U;
	static uint32_t x5978 = UINT32_MAX;
	volatile uint64_t t74 = 3LLU;

	t74 = (((x5977==x5978)|x5979)<<x5980);

	if (t74 != 14729022581315207168LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x6002 = 1818945633LLU;
	uint64_t x6003 = UINT64_MAX;
	uint64_t t75 = 2395962991732489926LLU;

	t75 = (((x6001==x6002)|x6003)<<x6004);

	if (t75 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x6029 = -1;
	int32_t x6030 = INT32_MIN;
	static uint64_t x6031 = 1183340560911LLU;
	int16_t x6032 = 1;
	uint64_t t76 = 1LLU;

	t76 = (((x6029==x6030)|x6031)<<x6032);

	if (t76 != 2366681121822LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x6038 = -1;
	uint16_t x6039 = UINT16_MAX;
	uint64_t x6040 = 1LLU;
	volatile int32_t t77 = 1;

	t77 = (((x6037==x6038)|x6039)<<x6040);

	if (t77 != 131070) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x6083 = INT32_MAX;
	static uint8_t x6084 = 0U;
	int32_t t78 = INT32_MAX;

	t78 = (((x6081==x6082)|x6083)<<x6084);

	if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x6149 = 4;
	int64_t x6151 = 149227133LL;
	uint8_t x6152 = 16U;
	static int64_t t79 = 4004LL;

	t79 = (((x6149==x6150)|x6151)<<x6152);

	if (t79 != 9779749388288LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x6293 = 1278LL;
	int8_t x6294 = INT8_MIN;
	int32_t x6295 = INT32_MAX;
	uint8_t x6296 = 0U;
	int32_t t80 = INT32_MAX;

	t80 = (((x6293==x6294)|x6295)<<x6296);

	if (t80 != INT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x6397 = INT32_MAX;
	static int8_t x6398 = 1;
	uint64_t x6399 = 4279501391LLU;
	uint32_t x6400 = 1U;
	static volatile uint64_t t81 = 13236509145799287LLU;

	t81 = (((x6397==x6398)|x6399)<<x6400);

	if (t81 != 8559002782LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x6425 = 248499523U;
	volatile int8_t x6428 = 0;
	static volatile int64_t t82 = 46LL;

	t82 = (((x6425==x6426)|x6427)<<x6428);

	if (t82 != 655597282801LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x6497 = UINT64_MAX;
	volatile int8_t x6498 = INT8_MAX;
	static uint16_t x6499 = 14368U;
	volatile int8_t x6500 = 1;
	int32_t t83 = -496082;

	t83 = (((x6497==x6498)|x6499)<<x6500);

	if (t83 != 28736) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x6533 = INT32_MIN;
	uint32_t x6534 = 440U;
	uint16_t x6535 = UINT16_MAX;
	uint32_t x6536 = 13U;

	t84 = (((x6533==x6534)|x6535)<<x6536);

	if (t84 != 536862720) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x6558 = 88950439LL;
	uint8_t x6560 = 0U;
	volatile int32_t t85 = -42036;

	t85 = (((x6557==x6558)|x6559)<<x6560);

	if (t85 != 127) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x6582 = 174436043LL;
	uint64_t x6584 = 9LLU;
	uint32_t t86 = 45192295U;

	t86 = (((x6581==x6582)|x6583)<<x6584);

	if (t86 != 950272U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x6605 = INT64_MIN;
	volatile uint16_t x6606 = 1U;
	static int64_t x6607 = 35478LL;

	t87 = (((x6605==x6606)|x6607)<<x6608);

	if (t87 != 145317888LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x6625 = 2U;
	uint8_t x6626 = UINT8_MAX;
	static uint32_t x6627 = 6691098U;
	uint8_t x6628 = 13U;
	static volatile uint32_t t88 = 2332375U;

	t88 = (((x6625==x6626)|x6627)<<x6628);

	if (t88 != 3273867264U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x6641 = INT8_MIN;
	int32_t x6642 = -720;
	uint8_t x6644 = 1U;
	uint32_t t89 = 162453U;

	t89 = (((x6641==x6642)|x6643)<<x6644);

	if (t89 != 111602U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x6701 = INT8_MIN;
	volatile int8_t x6702 = 0;
	volatile uint64_t x6703 = 883385721500226LLU;
	uint8_t x6704 = 0U;
	volatile uint64_t t90 = 955476493LLU;

	t90 = (((x6701==x6702)|x6703)<<x6704);

	if (t90 != 883385721500226LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x6829 = -1;
	int64_t x6830 = INT64_MAX;
	volatile uint64_t x6831 = 4180312448629344LLU;

	t91 = (((x6829==x6830)|x6831)<<x6832);

	if (t91 != 4547177255889010688LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x6841 = INT64_MAX;
	int64_t x6842 = INT64_MIN;
	static uint64_t x6843 = 417976857256LLU;
	static int16_t x6844 = 31;

	t92 = (((x6841==x6842)|x6843)<<x6844);

	if (t92 != 12154750661631672320LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x6893 = 88775U;
	volatile uint64_t x6894 = 1724007613159315LLU;
	uint32_t x6895 = 204157U;
	static uint32_t t93 = 1317852069U;

	t93 = (((x6893==x6894)|x6895)<<x6896);

	if (t93 != 408314U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x6961 = 13491169U;
	int32_t x6962 = 974869107;
	static uint64_t x6963 = UINT64_MAX;
	uint16_t x6964 = 47U;
	volatile uint64_t t94 = 3514313034760202LLU;

	t94 = (((x6961==x6962)|x6963)<<x6964);

	if (t94 != 18446603336221196288LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x7022 = INT64_MAX;
	volatile int8_t x7024 = 29;
	uint64_t t95 = 552798578LLU;

	t95 = (((x7021==x7022)|x7023)<<x7024);

	if (t95 != 536870912LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x7059 = 773U;
	volatile uint8_t x7060 = 1U;

	t96 = (((x7057==x7058)|x7059)<<x7060);

	if (t96 != 1546) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x7090 = INT16_MIN;
	uint16_t x7092 = 13U;
	int32_t t97 = 1;

	t97 = (((x7089==x7090)|x7091)<<x7092);

	if (t97 != 1040384) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x7161 = 177U;
	static uint16_t x7162 = 81U;
	uint16_t x7163 = 280U;
	uint8_t x7164 = 3U;
	volatile int32_t t98 = -1;

	t98 = (((x7161==x7162)|x7163)<<x7164);

	if (t98 != 2240) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x7429 = 13;
	volatile uint8_t x7430 = 0U;
	static uint8_t x7431 = 8U;
	volatile uint8_t x7432 = 6U;
	int32_t t99 = 287259;

	t99 = (((x7429==x7430)|x7431)<<x7432);

	if (t99 != 512) { NG(); } else { ; }
	
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


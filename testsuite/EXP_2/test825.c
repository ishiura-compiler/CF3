#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x180 = 1U;
int64_t t3 = 45585866980LL;
volatile int32_t x254 = -1;
uint64_t x257 = 55096LLU;
static uint8_t x259 = UINT8_MAX;
volatile int8_t x260 = 1;
uint16_t x315 = UINT16_MAX;
uint64_t t8 = 844206339520134LLU;
int32_t x362 = -1;
static uint8_t x392 = 13U;
int8_t x406 = -1;
int64_t x434 = INT64_MAX;
uint32_t x448 = 7U;
volatile int64_t t13 = -1819510119479LL;
int8_t x566 = INT8_MIN;
static volatile int32_t t16 = 6;
int8_t x574 = INT8_MIN;
uint64_t x575 = UINT64_MAX;
int32_t x610 = INT32_MIN;
uint8_t x823 = UINT8_MAX;
uint8_t x824 = 4U;
int8_t x873 = INT8_MIN;
int64_t x1185 = INT64_MIN;
uint64_t t25 = 7719754855587LLU;
static uint32_t x1262 = 1U;
uint32_t x1313 = 0U;
uint16_t x1315 = UINT16_MAX;
uint32_t t27 = 5937U;
uint32_t x1359 = UINT32_MAX;
uint16_t x1360 = 2U;
int32_t t29 = -240298;
uint32_t t31 = 10U;
static uint16_t x1712 = 1U;
static int8_t x1796 = 9;
volatile int64_t x1867 = INT64_MIN;
uint8_t x1868 = 1U;
static int64_t t34 = 1019203010436863LL;
uint32_t x2079 = UINT32_MAX;
static int16_t x2080 = 1;
volatile int8_t x2107 = -13;
int16_t x2204 = 1;
uint8_t x2340 = 4U;
volatile int32_t t42 = -16485752;
volatile uint64_t t43 = 3068970755084669LLU;
static uint64_t x2486 = UINT64_MAX;
int64_t x2518 = 1LL;
int8_t x2635 = 9;
static uint32_t x2738 = UINT32_MAX;
uint32_t x2765 = 2021269U;
int64_t x2767 = INT64_MIN;
int8_t x2776 = 26;
int32_t x2836 = 11;
uint64_t x3151 = UINT64_MAX;
static volatile uint64_t x3226 = 265409264LLU;
uint8_t x3375 = 2U;
int32_t x3529 = 7;
uint8_t x3532 = 7U;
int32_t x3554 = INT32_MIN;
int32_t x3556 = 14;
static int32_t x3610 = 224679;
int8_t x3647 = INT8_MAX;
uint8_t x3648 = 42U;
static int8_t x3722 = -1;
uint32_t x3724 = 61U;
int16_t x3824 = 12;
uint64_t x3834 = 1901148821318LLU;
volatile int8_t x3878 = 5;
int64_t x3879 = -390LL;
int16_t x3907 = INT16_MIN;
volatile int16_t x3908 = 0;
static volatile uint64_t t66 = 669248859774832LLU;
uint32_t x3965 = 1U;
uint32_t x4030 = 13U;
volatile int64_t t68 = -237314063LL;
static volatile int16_t x4048 = 14;
int16_t x4184 = 13;
volatile int32_t t71 = -125;
uint8_t x4368 = 3U;
volatile uint8_t x4439 = 49U;
uint64_t x4513 = 7005776115805LLU;
volatile uint64_t x4514 = UINT64_MAX;
static volatile uint64_t t76 = 3LLU;
uint64_t x4526 = UINT64_MAX;
static volatile uint64_t t77 = 13220604974LLU;
volatile int8_t x4575 = 30;
uint64_t t78 = 3855818LLU;
static uint16_t x4628 = 2U;
volatile uint64_t x4730 = UINT64_MAX;
int8_t x4732 = 1;
int8_t x4773 = -3;
uint16_t x4892 = 3U;
volatile uint64_t x4919 = 812628700507770970LLU;
uint64_t t86 = UINT64_MAX;
uint64_t x4982 = 358491541LLU;
int8_t x4984 = 1;
uint8_t x5124 = 11U;
volatile uint64_t x5130 = UINT64_MAX;
int64_t x5195 = INT64_MIN;
int32_t x5422 = -1;
int8_t x5427 = INT8_MAX;
uint8_t x5437 = UINT8_MAX;
uint32_t x5440 = 7U;
uint64_t t96 = 6LLU;
volatile int8_t x5484 = 1;
volatile int64_t t99 = -177495853679371LL;


void f0(void) {
	uint16_t x45 = 29427U;
	int32_t x46 = 26;
	int32_t x47 = 32603109;
	volatile uint8_t x48 = 6U;
	int32_t t0 = -3;

	t0 = ((x45|(x46%x47))<<x48);

	if (t0 != 1883840) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int16_t x57 = -1;
	uint32_t x58 = 333941U;
	uint32_t x59 = 19U;
	int32_t x60 = 1;
	uint32_t t1 = 10645017U;

	t1 = ((x57|(x58%x59))<<x60);

	if (t1 != 4294967294U) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x161 = UINT16_MAX;
	int32_t x162 = INT32_MIN;
	uint64_t x163 = UINT64_MAX;
	int16_t x164 = 6;
	volatile uint64_t t2 = 5390332904LLU;

	t2 = ((x161|(x162%x163))<<x164);

	if (t2 != 18446743936274792384LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x177 = INT16_MAX;
	static int64_t x178 = INT64_MAX;
	uint16_t x179 = 28U;

	t3 = ((x177|(x178%x179))<<x180);

	if (t3 != 65534LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x233 = 1;
	int8_t x234 = INT8_MAX;
	uint16_t x235 = 103U;
	uint16_t x236 = 6U;
	volatile int32_t t4 = -20;

	t4 = ((x233|(x234%x235))<<x236);

	if (t4 != 1600) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x253 = 54306U;
	static uint64_t x255 = 7320LLU;
	int16_t x256 = 1;
	volatile uint64_t t5 = 540683488884886LLU;

	t5 = ((x253|(x254%x255))<<x256);

	if (t5 != 108638LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x258 = INT64_MIN;
	volatile uint64_t t6 = 973890940191886067LLU;

	t6 = ((x257|(x258%x259))<<x260);

	if (t6 != 18446744073709551472LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x313 = INT32_MIN;
	uint32_t x314 = UINT32_MAX;
	int8_t x316 = 0;
	volatile uint32_t t7 = 5023U;

	t7 = ((x313|(x314%x315))<<x316);

	if (t7 != 2147483648U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x341 = INT32_MAX;
	int8_t x342 = -1;
	uint64_t x343 = 1770044LLU;
	volatile uint32_t x344 = 2U;

	t8 = ((x341|(x342%x343))<<x344);

	if (t8 != 8589934588LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x361 = UINT32_MAX;
	uint64_t x363 = 38829376116293330LLU;
	int8_t x364 = 1;
	volatile uint64_t t9 = 565560500398648LLU;

	t9 = ((x361|(x362%x363))<<x364);

	if (t9 != 5580837554749438LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x389 = UINT64_MAX;
	int64_t x390 = INT64_MAX;
	int32_t x391 = -14;
	static uint64_t t10 = 186834LLU;

	t10 = ((x389|(x390%x391))<<x392);

	if (t10 != 18446744073709543424LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x405 = 13862227LLU;
	uint8_t x407 = 100U;
	uint8_t x408 = 46U;
	static volatile uint64_t t11 = 12308314768LLU;

	t11 = ((x405|(x406%x407))<<x408);

	if (t11 != 18446673704965373952LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x433 = INT16_MAX;
	static uint64_t x435 = 385301LLU;
	uint16_t x436 = 7U;
	static volatile uint64_t t12 = 8LLU;

	t12 = ((x433|(x434%x435))<<x436);

	if (t12 != 37748608LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x445 = 0LL;
	int16_t x446 = 29;
	static uint32_t x447 = UINT32_MAX;

	t13 = ((x445|(x446%x447))<<x448);

	if (t13 != 3712LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x449 = -1LL;
	uint64_t x450 = 587LLU;
	static uint8_t x451 = 20U;
	static uint16_t x452 = 7U;
	volatile uint64_t t14 = 1084156701LLU;

	t14 = ((x449|(x450%x451))<<x452);

	if (t14 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x493 = -1;
	uint32_t x494 = 1U;
	uint16_t x495 = 6U;
	int8_t x496 = 7;
	uint32_t t15 = 171U;

	t15 = ((x493|(x494%x495))<<x496);

	if (t15 != 4294967168U) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x565 = UINT16_MAX;
	int32_t x567 = -1;
	int8_t x568 = 1;

	t16 = ((x565|(x566%x567))<<x568);

	if (t16 != 131070) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x573 = 392817876U;
	static uint16_t x576 = 1U;
	static uint64_t t17 = 41LLU;

	t17 = ((x573|(x574%x575))<<x576);

	if (t17 != 18446744073709551528LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x609 = 124646U;
	uint16_t x611 = UINT16_MAX;
	int8_t x612 = 1;
	uint32_t t18 = 11582U;

	t18 = ((x609|(x610%x611))<<x612);

	if (t18 != 4294954444U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x821 = INT16_MIN;
	uint64_t x822 = 3113056289924238LLU;
	uint64_t t19 = 607667019522361817LLU;

	t19 = ((x821|(x822%x823))<<x824);

	if (t19 != 18446744073709030736LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t x869 = INT32_MIN;
	volatile int16_t x870 = -16;
	volatile uint64_t x871 = 118LLU;
	uint32_t x872 = 16U;
	uint64_t t20 = 240454030762008LLU;

	t20 = ((x869|(x870%x871))<<x872);

	if (t20 != 18446603336224342016LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x874 = INT16_MIN;
	uint64_t x875 = UINT64_MAX;
	uint8_t x876 = 1U;
	uint64_t t21 = 2052537037785LLU;

	t21 = ((x873|(x874%x875))<<x876);

	if (t21 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x877 = INT8_MIN;
	uint64_t x878 = 124473LLU;
	int16_t x879 = INT16_MAX;
	static uint32_t x880 = 1U;
	static uint64_t t22 = 15962567079532LLU;

	t22 = ((x877|(x878%x879))<<x880);

	if (t22 != 18446744073709551480LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x973 = 9;
	volatile int64_t x974 = INT64_MIN;
	int16_t x975 = -8;
	static uint64_t x976 = 1LLU;
	volatile int64_t t23 = -16265LL;

	t23 = ((x973|(x974%x975))<<x976);

	if (t23 != 18LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1017 = 69501886612402LL;
	int8_t x1018 = INT8_MIN;
	static uint64_t x1019 = 42LLU;
	uint64_t x1020 = 6LLU;
	static volatile uint64_t t24 = 4895157573470474LLU;

	t24 = ((x1017|(x1018%x1019))<<x1020);

	if (t24 != 4448120743194496LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1186 = INT16_MAX;
	static uint64_t x1187 = UINT64_MAX;
	int32_t x1188 = 0;

	t25 = ((x1185|(x1186%x1187))<<x1188);

	if (t25 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1261 = -1;
	static int32_t x1263 = INT32_MIN;
	volatile uint16_t x1264 = 18U;
	volatile uint32_t t26 = 91U;

	t26 = ((x1261|(x1262%x1263))<<x1264);

	if (t26 != 4294705152U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x1314 = 22;
	uint8_t x1316 = 4U;

	t27 = ((x1313|(x1314%x1315))<<x1316);

	if (t27 != 352U) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x1357 = 1U;
	static int16_t x1358 = -86;
	volatile uint32_t t28 = 934900412U;

	t28 = ((x1357|(x1358%x1359))<<x1360);

	if (t28 != 4294966956U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x1401 = 4;
	int16_t x1402 = 1;
	int32_t x1403 = INT32_MIN;
	volatile int8_t x1404 = 1;

	t29 = ((x1401|(x1402%x1403))<<x1404);

	if (t29 != 10) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1553 = INT8_MIN;
	volatile uint32_t x1554 = 456781U;
	static uint8_t x1555 = 83U;
	uint8_t x1556 = 3U;
	uint32_t t30 = 385180297U;

	t30 = ((x1553|(x1554%x1555))<<x1556);

	if (t30 != 4294966528U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x1625 = INT16_MIN;
	uint32_t x1626 = 1503070U;
	int16_t x1627 = INT16_MIN;
	uint64_t x1628 = 1LLU;

	t31 = ((x1625|(x1626%x1627))<<x1628);

	if (t31 != 4294958780U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x1709 = INT64_MIN;
	int16_t x1710 = INT16_MIN;
	static uint64_t x1711 = 213919LLU;
	static volatile uint64_t t32 = 82974432584052633LLU;

	t32 = ((x1709|(x1710%x1711))<<x1712);

	if (t32 != 302794LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x1793 = UINT32_MAX;
	int16_t x1794 = -400;
	volatile int8_t x1795 = -1;
	volatile uint32_t t33 = 530202U;

	t33 = ((x1793|(x1794%x1795))<<x1796);

	if (t33 != 4294966784U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1865 = INT8_MAX;
	int32_t x1866 = 22147782;

	t34 = ((x1865|(x1866%x1867))<<x1868);

	if (t34 != 44295678LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1897 = INT32_MIN;
	int64_t x1898 = INT64_MIN;
	uint64_t x1899 = 79060453740497LLU;
	uint32_t x1900 = 1U;
	uint64_t t35 = 274LLU;

	t35 = ((x1897|(x1898%x1899))<<x1900);

	if (t35 != 18446744069587047636LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x2077 = 105100721U;
	uint16_t x2078 = 2001U;
	volatile uint32_t t36 = 1016U;

	t36 = ((x2077|(x2078%x2079))<<x2080);

	if (t36 != 210202594U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x2105 = INT32_MAX;
	static int32_t x2106 = 221480031;
	uint64_t x2108 = 0LLU;
	volatile int32_t t37 = INT32_MAX;

	t37 = ((x2105|(x2106%x2107))<<x2108);

	if (t37 != INT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x2181 = 1581228936148022LLU;
	int32_t x2182 = INT32_MIN;
	int8_t x2183 = -15;
	int32_t x2184 = 21;
	static volatile uint64_t t38 = 478LLU;

	t38 = ((x2181|(x2182%x2183))<<x2184);

	if (t38 != 18446744073705357312LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x2201 = 347;
	uint16_t x2202 = 1U;
	volatile int32_t x2203 = -1;
	volatile int32_t t39 = -2;

	t39 = ((x2201|(x2202%x2203))<<x2204);

	if (t39 != 694) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x2337 = UINT16_MAX;
	volatile uint8_t x2338 = 4U;
	static volatile int8_t x2339 = INT8_MIN;
	static int32_t t40 = -517194;

	t40 = ((x2337|(x2338%x2339))<<x2340);

	if (t40 != 1048560) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x2405 = UINT64_MAX;
	static volatile uint8_t x2406 = 25U;
	static int32_t x2407 = 148728;
	int8_t x2408 = 52;
	uint64_t t41 = 14315469810042LLU;

	t41 = ((x2405|(x2406%x2407))<<x2408);

	if (t41 != 18442240474082181120LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2441 = 1;
	int8_t x2442 = INT8_MIN;
	volatile int8_t x2443 = INT8_MIN;
	volatile uint16_t x2444 = 8U;

	t42 = ((x2441|(x2442%x2443))<<x2444);

	if (t42 != 256) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x2473 = UINT64_MAX;
	int32_t x2474 = -1;
	uint32_t x2475 = 993945U;
	uint32_t x2476 = 31U;

	t43 = ((x2473|(x2474%x2475))<<x2476);

	if (t43 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x2485 = INT64_MAX;
	int32_t x2487 = INT32_MIN;
	uint8_t x2488 = 1U;
	volatile uint64_t t44 = 151201LLU;

	t44 = ((x2485|(x2486%x2487))<<x2488);

	if (t44 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x2517 = 97;
	static volatile int32_t x2519 = INT32_MAX;
	volatile uint8_t x2520 = 24U;
	int64_t t45 = 135975384496266590LL;

	t45 = ((x2517|(x2518%x2519))<<x2520);

	if (t45 != 1627389952LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x2633 = UINT64_MAX;
	int16_t x2634 = INT16_MIN;
	uint8_t x2636 = 18U;
	uint64_t t46 = 146584452454693LLU;

	t46 = ((x2633|(x2634%x2635))<<x2636);

	if (t46 != 18446744073709289472LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2689 = -964;
	uint64_t x2690 = 14386LLU;
	volatile int16_t x2691 = 2;
	uint16_t x2692 = 47U;
	static uint64_t t47 = 1LLU;

	t47 = ((x2689|(x2690%x2691))<<x2692);

	if (t47 != 18311073134935015424LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x2737 = 2983U;
	int8_t x2739 = INT8_MIN;
	static int32_t x2740 = 10;
	volatile uint32_t t48 = 0U;

	t48 = ((x2737|(x2738%x2739))<<x2740);

	if (t48 != 3144704U) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x2766 = 2U;
	static int16_t x2768 = 7;
	volatile int64_t t49 = -503625097LL;

	t49 = ((x2765|(x2766%x2767))<<x2768);

	if (t49 != 258722688LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x2773 = 180348LL;
	int32_t x2774 = -1;
	int16_t x2775 = 1;
	int64_t t50 = 6LL;

	t50 = ((x2773|(x2774%x2775))<<x2776);

	if (t50 != 12102949404672LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x2833 = 412U;
	uint64_t x2834 = 14LLU;
	static volatile int32_t x2835 = -1;
	uint64_t t51 = 126LLU;

	t51 = ((x2833|(x2834%x2835))<<x2836);

	if (t51 != 847872LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x3149 = UINT16_MAX;
	static uint64_t x3150 = 37LLU;
	volatile uint64_t x3152 = 40LLU;
	uint64_t t52 = 553571LLU;

	t52 = ((x3149|(x3150%x3151))<<x3152);

	if (t52 != 72056494526300160LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x3225 = 12U;
	int32_t x3227 = INT32_MIN;
	int8_t x3228 = 42;
	static volatile uint64_t t53 = 0LLU;

	t53 = ((x3225|(x3226%x3227))<<x3228);

	if (t53 != 5137463682736848896LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x3265 = INT8_MAX;
	int8_t x3266 = -1;
	volatile int32_t x3267 = -1;
	int8_t x3268 = 1;
	volatile int32_t t54 = 3;

	t54 = ((x3265|(x3266%x3267))<<x3268);

	if (t54 != 254) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x3345 = INT64_MAX;
	int32_t x3346 = INT32_MIN;
	uint64_t x3347 = 50303LLU;
	int32_t x3348 = 0;
	uint64_t t55 = 146LLU;

	t55 = ((x3345|(x3346%x3347))<<x3348);

	if (t55 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x3373 = INT32_MIN;
	volatile uint64_t x3374 = 19397889509006518LLU;
	uint8_t x3376 = 4U;
	uint64_t t56 = 61582189344759LLU;

	t56 = ((x3373|(x3374%x3375))<<x3376);

	if (t56 != 18446744039349813248LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x3530 = INT8_MAX;
	uint8_t x3531 = 10U;
	int32_t t57 = -1820717;

	t57 = ((x3529|(x3530%x3531))<<x3532);

	if (t57 != 896) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int16_t x3553 = -331;
	static uint32_t x3555 = 360U;
	static volatile uint32_t t58 = 14U;

	t58 = ((x3553|(x3554%x3555))<<x3556);

	if (t58 != 4289544192U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x3609 = 20;
	uint64_t x3611 = 1834LLU;
	int32_t x3612 = 36;
	volatile uint64_t t59 = 8683806296230225LLU;

	t59 = ((x3609|(x3610%x3611))<<x3612);

	if (t59 != 65352222375936LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x3645 = 1769U;
	static uint64_t x3646 = UINT64_MAX;
	uint64_t t60 = 11057120663691LLU;

	t60 = ((x3645|(x3646%x3647))<<x3648);

	if (t60 != 7780144278142976LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x3721 = 78206807064786LLU;
	int8_t x3723 = 6;
	uint64_t t61 = 39027530401LLU;

	t61 = ((x3721|(x3722%x3723))<<x3724);

	if (t61 != 16140901064495857664LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x3821 = 458032U;
	volatile int64_t x3822 = INT64_MIN;
	int32_t x3823 = -1;
	volatile int64_t t62 = 393395LL;

	t62 = ((x3821|(x3822%x3823))<<x3824);

	if (t62 != 1876099072LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x3833 = 30;
	int64_t x3835 = INT64_MIN;
	uint8_t x3836 = 1U;
	volatile uint64_t t63 = 49257427525LLU;

	t63 = ((x3833|(x3834%x3835))<<x3836);

	if (t63 != 3802297642684LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x3877 = UINT32_MAX;
	int8_t x3880 = 0;
	volatile int64_t t64 = 3287LL;

	t64 = ((x3877|(x3878%x3879))<<x3880);

	if (t64 != 4294967295LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x3905 = INT32_MAX;
	uint64_t x3906 = 11982672157872023LLU;
	static volatile uint64_t t65 = 121035066114231LLU;

	t65 = ((x3905|(x3906%x3907))<<x3908);

	if (t65 != 11982673140514815LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x3957 = INT32_MIN;
	volatile uint64_t x3958 = 12LLU;
	volatile uint16_t x3959 = 6739U;
	uint64_t x3960 = 0LLU;

	t66 = ((x3957|(x3958%x3959))<<x3960);

	if (t66 != 18446744071562067980LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x3966 = 0LL;
	static int16_t x3967 = INT16_MAX;
	static uint8_t x3968 = 3U;
	static int64_t t67 = -38210727863904LL;

	t67 = ((x3965|(x3966%x3967))<<x3968);

	if (t67 != 8LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x4029 = 254;
	int64_t x4031 = INT64_MIN;
	uint8_t x4032 = 2U;

	t68 = ((x4029|(x4030%x4031))<<x4032);

	if (t68 != 1020LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x4045 = 4U;
	int8_t x4046 = 2;
	uint8_t x4047 = 1U;
	static uint32_t t69 = 8089261U;

	t69 = ((x4045|(x4046%x4047))<<x4048);

	if (t69 != 65536U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x4181 = -1LL;
	uint64_t x4182 = 176024005087983396LLU;
	int8_t x4183 = INT8_MIN;
	static uint64_t t70 = 59200764291LLU;

	t70 = ((x4181|(x4182%x4183))<<x4184);

	if (t70 != 18446744073709543424LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x4321 = 45U;
	volatile int16_t x4322 = INT16_MIN;
	int8_t x4323 = -2;
	uint32_t x4324 = 3U;

	t71 = ((x4321|(x4322%x4323))<<x4324);

	if (t71 != 360) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x4337 = 8436U;
	uint64_t x4338 = 172652507978480LLU;
	int32_t x4339 = -1;
	volatile int8_t x4340 = 0;
	uint64_t t72 = 768800074451104643LLU;

	t72 = ((x4337|(x4338%x4339))<<x4340);

	if (t72 != 172652507986676LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x4365 = 0;
	static volatile int8_t x4366 = 1;
	uint64_t x4367 = 142668434719LLU;
	volatile uint64_t t73 = 2441389LLU;

	t73 = ((x4365|(x4366%x4367))<<x4368);

	if (t73 != 8LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x4437 = INT32_MIN;
	uint32_t x4438 = 2265683U;
	uint16_t x4440 = 15U;
	uint32_t t74 = 1000848358U;

	t74 = ((x4437|(x4438%x4439))<<x4440);

	if (t74 != 688128U) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x4457 = UINT8_MAX;
	static int8_t x4458 = 0;
	static int8_t x4459 = INT8_MAX;
	uint8_t x4460 = 9U;
	static volatile int32_t t75 = -70789027;

	t75 = ((x4457|(x4458%x4459))<<x4460);

	if (t75 != 130560) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x4515 = INT64_MIN;
	uint16_t x4516 = 25U;

	t76 = ((x4513|(x4514%x4515))<<x4516);

	if (t76 != 18446744073675997184LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x4525 = 59415U;
	static int8_t x4527 = -3;
	static int16_t x4528 = 2;

	t77 = ((x4525|(x4526%x4527))<<x4528);

	if (t77 != 237660LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x4573 = 2060647515018372808LLU;
	uint32_t x4574 = 3504U;
	uint16_t x4576 = 0U;

	t78 = ((x4573|(x4574%x4575))<<x4576);

	if (t78 != 2060647515018372824LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x4625 = INT8_MAX;
	uint8_t x4626 = 3U;
	int64_t x4627 = -2192638659477LL;
	volatile int64_t t79 = -78359486474779940LL;

	t79 = ((x4625|(x4626%x4627))<<x4628);

	if (t79 != 508LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x4729 = INT32_MAX;
	volatile int64_t x4731 = INT64_MIN;
	uint64_t t80 = 43652LLU;

	t80 = ((x4729|(x4730%x4731))<<x4732);

	if (t80 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x4774 = -19099281LL;
	static uint64_t x4775 = 24417LLU;
	int8_t x4776 = 2;
	uint64_t t81 = 8LLU;

	t81 = ((x4773|(x4774%x4775))<<x4776);

	if (t81 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x4777 = 5U;
	static int32_t x4778 = INT32_MIN;
	volatile int8_t x4779 = INT8_MIN;
	static uint8_t x4780 = 21U;
	int32_t t82 = -14;

	t82 = ((x4777|(x4778%x4779))<<x4780);

	if (t82 != 10485760) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x4833 = 2004543225LLU;
	uint8_t x4834 = 60U;
	int64_t x4835 = INT64_MIN;
	volatile uint8_t x4836 = 2U;
	volatile uint64_t t83 = 19786377LLU;

	t83 = ((x4833|(x4834%x4835))<<x4836);

	if (t83 != 8018172916LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x4885 = UINT64_MAX;
	static int64_t x4886 = -1947635768222821265LL;
	volatile int64_t x4887 = INT64_MIN;
	int8_t x4888 = 6;
	volatile uint64_t t84 = 420LLU;

	t84 = ((x4885|(x4886%x4887))<<x4888);

	if (t84 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x4889 = UINT64_MAX;
	static volatile uint16_t x4890 = UINT16_MAX;
	static int8_t x4891 = INT8_MIN;
	volatile uint64_t t85 = 18LLU;

	t85 = ((x4889|(x4890%x4891))<<x4892);

	if (t85 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x4917 = -1LL;
	static int16_t x4918 = INT16_MIN;
	uint32_t x4920 = 0U;

	t86 = ((x4917|(x4918%x4919))<<x4920);

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x4933 = 2036409746LLU;
	int32_t x4934 = -1;
	uint32_t x4935 = 717262U;
	uint16_t x4936 = 51U;
	uint64_t t87 = 2429851LLU;

	t87 = ((x4933|(x4934%x4935))<<x4936);

	if (t87 != 7834011551810977792LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x4981 = UINT8_MAX;
	static uint16_t x4983 = 1U;
	uint64_t t88 = 81LLU;

	t88 = ((x4981|(x4982%x4983))<<x4984);

	if (t88 != 510LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x5121 = INT32_MIN;
	int16_t x5122 = INT16_MAX;
	uint32_t x5123 = 9379U;
	uint32_t t89 = 474904139U;

	t89 = ((x5121|(x5122%x5123))<<x5124);

	if (t89 != 9482240U) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x5129 = INT16_MIN;
	int32_t x5131 = 9;
	volatile uint16_t x5132 = 51U;
	uint64_t t90 = 392898LLU;

	t90 = ((x5129|(x5130%x5131))<<x5132);

	if (t90 != 13510798882111488LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x5169 = 57U;
	volatile int32_t x5170 = INT32_MIN;
	volatile uint32_t x5171 = UINT32_MAX;
	static uint8_t x5172 = 19U;
	volatile uint32_t t91 = 20762787U;

	t91 = ((x5169|(x5170%x5171))<<x5172);

	if (t91 != 29884416U) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x5193 = UINT64_MAX;
	int64_t x5194 = INT64_MAX;
	uint8_t x5196 = 0U;
	uint64_t t92 = UINT64_MAX;

	t92 = ((x5193|(x5194%x5195))<<x5196);

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x5421 = 108U;
	static int8_t x5423 = 1;
	uint8_t x5424 = 2U;
	int32_t t93 = 68242174;

	t93 = ((x5421|(x5422%x5423))<<x5424);

	if (t93 != 432) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x5425 = INT32_MIN;
	volatile uint64_t x5426 = 16092LLU;
	static int8_t x5428 = 2;
	volatile uint64_t t94 = 154LLU;

	t94 = ((x5425|(x5426%x5427))<<x5428);

	if (t94 != 18446744065119617384LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x5438 = INT64_MIN;
	static int64_t x5439 = INT64_MIN;
	static int64_t t95 = -7055197LL;

	t95 = ((x5437|(x5438%x5439))<<x5440);

	if (t95 != 32640LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x5441 = 3;
	uint64_t x5442 = 178LLU;
	static int16_t x5443 = INT16_MIN;
	uint8_t x5444 = 32U;

	t96 = ((x5441|(x5442%x5443))<<x5444);

	if (t96 != 768799145984LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x5481 = 263125U;
	static int8_t x5482 = 0;
	uint16_t x5483 = 3734U;
	volatile uint32_t t97 = 17U;

	t97 = ((x5481|(x5482%x5483))<<x5484);

	if (t97 != 526250U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x5533 = INT16_MAX;
	volatile uint8_t x5534 = 59U;
	volatile uint16_t x5535 = UINT16_MAX;
	int32_t x5536 = 7;
	volatile int32_t t98 = 182;

	t98 = ((x5533|(x5534%x5535))<<x5536);

	if (t98 != 4194176) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x5545 = UINT16_MAX;
	static int64_t x5546 = INT64_MAX;
	int16_t x5547 = -6890;
	uint8_t x5548 = 3U;

	t99 = ((x5545|(x5546%x5547))<<x5548);

	if (t99 != 524280LL) { NG(); } else { ; }
	
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


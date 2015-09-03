#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x66 = 6U;
int32_t t0 = -6;
static volatile uint32_t t3 = 2290U;
int32_t x280 = 420;
int64_t x285 = INT64_MAX;
uint64_t x288 = UINT64_MAX;
volatile int32_t t6 = 169173658;
int8_t x374 = 21;
int64_t x386 = 4LL;
uint8_t x388 = 11U;
static int32_t t8 = -11418;
uint8_t x409 = 1U;
uint16_t x410 = 13U;
int16_t x411 = INT16_MIN;
uint8_t x437 = 4U;
volatile int32_t t11 = -180143679;
uint64_t x703 = 300LLU;
volatile uint32_t x706 = 0U;
volatile int64_t t13 = -274376531641LL;
uint64_t x789 = 3308056869505LLU;
static volatile uint32_t t14 = 5775962U;
uint64_t x820 = 948743430611493LLU;
volatile uint64_t t15 = 3637156899507LLU;
int8_t x922 = 0;
static volatile int32_t t17 = -766;
int8_t x1049 = INT8_MAX;
static int32_t x1085 = 939;
int8_t x1087 = INT8_MAX;
uint8_t x1088 = UINT8_MAX;
int16_t x1138 = 8;
static uint64_t x1369 = 41923257807527079LLU;
int32_t t26 = 74656971;
volatile int8_t x1453 = 46;
int16_t x1480 = 477;
int8_t x1558 = 3;
static int8_t x1612 = INT8_MAX;
int64_t x1685 = 53116943373263LL;
static int64_t x1687 = -3382LL;
int64_t x1691 = -1LL;
volatile uint64_t x1817 = 395478546383597858LLU;
uint64_t x1818 = 46LLU;
volatile int16_t x2404 = INT16_MAX;
uint64_t x2405 = 23408121LLU;
uint32_t x2626 = 56U;
static volatile uint8_t x2710 = 3U;
static uint8_t x2786 = 14U;
uint64_t x2795 = 30917606LLU;
uint64_t t50 = 14851277344469770LLU;
uint8_t x2848 = 7U;
int32_t x2953 = INT32_MAX;
uint8_t x2954 = 0U;
int16_t x2956 = INT16_MIN;
static int32_t x2969 = 4243;
int8_t x2970 = 0;
int32_t x2971 = 274864;
uint16_t x2974 = 27U;
int16_t x3023 = INT16_MIN;
int32_t t56 = 112;
int32_t t57 = 1;
volatile uint8_t x3263 = 3U;
uint8_t x3406 = 25U;
int8_t x3408 = -5;
volatile uint64_t x3492 = 304324102356627161LLU;
uint32_t x3629 = 190565044U;
int32_t x3659 = INT32_MIN;
int32_t x3660 = INT32_MIN;
volatile int16_t x3706 = 27;
int64_t x3765 = INT64_MAX;
uint32_t x3913 = 104486761U;
static uint64_t x3915 = 177089578166LLU;
int32_t x3932 = -397736400;
static uint8_t x3953 = 2U;
volatile uint32_t x3955 = 25U;
int8_t x4014 = 1;
int8_t x4015 = INT8_MAX;
volatile int16_t x4043 = -1;
volatile int8_t x4188 = INT8_MIN;
int64_t x4209 = 1002578898LL;
static int8_t x4210 = 0;
volatile uint16_t x4225 = 1788U;
volatile uint8_t x4310 = 30U;
volatile uint64_t t76 = 3851204381130760LLU;
static volatile int64_t x4552 = INT64_MIN;
volatile int64_t x4576 = INT64_MIN;
int8_t x4582 = 47;
volatile uint64_t x4583 = 42LLU;
uint8_t x4637 = 3U;
int32_t x4671 = INT32_MAX;
volatile int8_t x4850 = 9;
static int64_t x4852 = INT64_MIN;
int32_t x4924 = INT32_MAX;
uint32_t t89 = 11934U;
volatile uint64_t t90 = 85419LLU;
int16_t x5187 = -121;
static int64_t t93 = 1273432187401362LL;
volatile uint8_t x5246 = 2U;
int16_t x5248 = INT16_MAX;
int32_t x5270 = 6;
uint8_t x5330 = 7U;
int32_t t97 = -22512;
static int8_t x5351 = 2;
int64_t x5403 = INT64_MIN;
volatile uint64_t t99 = 15775029300225042LLU;


void f0(void) {
	int32_t x65 = 1;
	static uint32_t x67 = 90U;
	volatile int8_t x68 = -1;

	t0 = (((x65>>x66)==x67)%x68);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x181 = 24933255276LLU;
	int8_t x182 = 0;
	uint8_t x183 = 60U;
	int16_t x184 = INT16_MAX;
	static int32_t t1 = 13;

	t1 = (((x181>>x182)==x183)%x184);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x185 = INT8_MAX;
	volatile uint16_t x186 = 23U;
	static int64_t x187 = INT64_MAX;
	int8_t x188 = 29;
	static volatile int32_t t2 = -14014683;

	t2 = (((x185>>x186)==x187)%x188);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x225 = 53521652LL;
	uint8_t x226 = 1U;
	int64_t x227 = 19855LL;
	static uint32_t x228 = UINT32_MAX;

	t3 = (((x225>>x226)==x227)%x228);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x277 = 3;
	int8_t x278 = 28;
	int16_t x279 = INT16_MAX;
	volatile int32_t t4 = 3;

	t4 = (((x277>>x278)==x279)%x280);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x286 = 3U;
	uint64_t x287 = UINT64_MAX;
	volatile uint64_t t5 = 25498LLU;

	t5 = (((x285>>x286)==x287)%x288);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x341 = 45759106LLU;
	volatile uint8_t x342 = 1U;
	uint64_t x343 = UINT64_MAX;
	uint8_t x344 = 30U;

	t6 = (((x341>>x342)==x343)%x344);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x373 = INT16_MAX;
	int32_t x375 = -1;
	int16_t x376 = 353;
	volatile int32_t t7 = 90;

	t7 = (((x373>>x374)==x375)%x376);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x385 = 11LLU;
	static int32_t x387 = -1;

	t8 = (((x385>>x386)==x387)%x388);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x412 = -1;
	int32_t t9 = -996;

	t9 = (((x409>>x410)==x411)%x412);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x438 = 2U;
	uint16_t x439 = 3U;
	volatile int8_t x440 = -1;
	volatile int32_t t10 = 1324693;

	t10 = (((x437>>x438)==x439)%x440);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x453 = 1U;
	volatile int8_t x454 = 7;
	int64_t x455 = INT64_MIN;
	volatile int8_t x456 = INT8_MIN;

	t11 = (((x453>>x454)==x455)%x456);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x701 = UINT16_MAX;
	uint16_t x702 = 3U;
	int32_t x704 = -3;
	int32_t t12 = 279515304;

	t12 = (((x701>>x702)==x703)%x704);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x705 = 984LLU;
	static int16_t x707 = -1;
	volatile int64_t x708 = -1LL;

	t13 = (((x705>>x706)==x707)%x708);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x790 = 0U;
	int64_t x791 = 1479405LL;
	uint32_t x792 = 238U;

	t14 = (((x789>>x790)==x791)%x792);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x817 = 7786U;
	uint16_t x818 = 0U;
	uint32_t x819 = 2647U;

	t15 = (((x817>>x818)==x819)%x820);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x873 = 23395791577158937LLU;
	uint8_t x874 = 3U;
	volatile int64_t x875 = INT64_MAX;
	static int16_t x876 = INT16_MAX;
	volatile int32_t t16 = 64574524;

	t16 = (((x873>>x874)==x875)%x876);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x921 = UINT8_MAX;
	int16_t x923 = 1;
	int8_t x924 = INT8_MAX;

	t17 = (((x921>>x922)==x923)%x924);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x1050 = 4U;
	volatile uint8_t x1051 = UINT8_MAX;
	int64_t x1052 = -1LL;
	volatile int64_t t18 = -333006487209LL;

	t18 = (((x1049>>x1050)==x1051)%x1052);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x1086 = 0;
	int32_t t19 = 121;

	t19 = (((x1085>>x1086)==x1087)%x1088);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x1133 = 84U;
	uint16_t x1134 = 0U;
	uint32_t x1135 = 28809831U;
	static int16_t x1136 = -15770;
	int32_t t20 = 78308907;

	t20 = (((x1133>>x1134)==x1135)%x1136);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x1137 = 51U;
	uint8_t x1139 = 1U;
	uint32_t x1140 = UINT32_MAX;
	uint32_t t21 = 2059060U;

	t21 = (((x1137>>x1138)==x1139)%x1140);

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x1257 = 6327U;
	int8_t x1258 = 3;
	uint64_t x1259 = 2144031105990165885LLU;
	int8_t x1260 = 1;
	volatile int32_t t22 = -267848492;

	t22 = (((x1257>>x1258)==x1259)%x1260);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1261 = 45;
	int8_t x1262 = 0;
	uint64_t x1263 = 27334006055LLU;
	int64_t x1264 = -609LL;
	volatile int64_t t23 = 2632586402LL;

	t23 = (((x1261>>x1262)==x1263)%x1264);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x1313 = 10;
	volatile int16_t x1314 = 7;
	int64_t x1315 = INT64_MAX;
	uint32_t x1316 = UINT32_MAX;
	uint32_t t24 = 11U;

	t24 = (((x1313>>x1314)==x1315)%x1316);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1370 = 6;
	static int8_t x1371 = -52;
	int64_t x1372 = -4254LL;
	static volatile int64_t t25 = -8721714057359LL;

	t25 = (((x1369>>x1370)==x1371)%x1372);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1425 = 35089LL;
	volatile uint8_t x1426 = 63U;
	int8_t x1427 = INT8_MIN;
	static int32_t x1428 = -1;

	t26 = (((x1425>>x1426)==x1427)%x1428);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1454 = 1;
	int16_t x1455 = 62;
	static int32_t x1456 = 180599457;
	volatile int32_t t27 = -1;

	t27 = (((x1453>>x1454)==x1455)%x1456);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1469 = 15758U;
	uint8_t x1470 = 17U;
	volatile uint64_t x1471 = 16175LLU;
	volatile uint64_t x1472 = UINT64_MAX;
	static volatile uint64_t t28 = 446234309547367853LLU;

	t28 = (((x1469>>x1470)==x1471)%x1472);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x1477 = 6799U;
	uint8_t x1478 = 8U;
	static uint8_t x1479 = 16U;
	int32_t t29 = -4;

	t29 = (((x1477>>x1478)==x1479)%x1480);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1481 = INT64_MAX;
	static uint16_t x1482 = 2U;
	uint8_t x1483 = 3U;
	int64_t x1484 = INT64_MIN;
	int64_t t30 = -22140304255585LL;

	t30 = (((x1481>>x1482)==x1483)%x1484);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1557 = INT16_MAX;
	static int8_t x1559 = -1;
	uint32_t x1560 = 2518U;
	uint32_t t31 = 686052U;

	t31 = (((x1557>>x1558)==x1559)%x1560);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1585 = UINT64_MAX;
	uint8_t x1586 = 28U;
	static volatile int32_t x1587 = INT32_MIN;
	static int64_t x1588 = INT64_MIN;
	volatile int64_t t32 = 6LL;

	t32 = (((x1585>>x1586)==x1587)%x1588);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x1609 = INT64_MAX;
	uint32_t x1610 = 56U;
	int32_t x1611 = INT32_MAX;
	int32_t t33 = -14;

	t33 = (((x1609>>x1610)==x1611)%x1612);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x1686 = 11;
	uint64_t x1688 = 4336289LLU;
	uint64_t t34 = 58LLU;

	t34 = (((x1685>>x1686)==x1687)%x1688);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x1689 = 3318LL;
	volatile int8_t x1690 = 61;
	int64_t x1692 = 475741LL;
	int64_t t35 = -34LL;

	t35 = (((x1689>>x1690)==x1691)%x1692);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x1709 = UINT64_MAX;
	uint8_t x1710 = 5U;
	int64_t x1711 = 31947229LL;
	static int16_t x1712 = INT16_MIN;
	int32_t t36 = -2;

	t36 = (((x1709>>x1710)==x1711)%x1712);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1819 = -1;
	static int32_t x1820 = INT32_MIN;
	volatile int32_t t37 = 1206746;

	t37 = (((x1817>>x1818)==x1819)%x1820);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1885 = 0;
	volatile uint8_t x1886 = 25U;
	static int64_t x1887 = INT64_MAX;
	static volatile int64_t x1888 = 204222LL;
	int64_t t38 = -5LL;

	t38 = (((x1885>>x1886)==x1887)%x1888);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x2037 = 360151U;
	uint8_t x2038 = 6U;
	static int64_t x2039 = INT64_MIN;
	int16_t x2040 = INT16_MAX;
	volatile int32_t t39 = -14218;

	t39 = (((x2037>>x2038)==x2039)%x2040);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x2401 = 421369LLU;
	int8_t x2402 = 0;
	int64_t x2403 = -323235LL;
	int32_t t40 = 1;

	t40 = (((x2401>>x2402)==x2403)%x2404);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x2406 = 12;
	uint64_t x2407 = 15LLU;
	static uint32_t x2408 = 138591004U;
	uint32_t t41 = 421U;

	t41 = (((x2405>>x2406)==x2407)%x2408);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x2445 = 4145183103595602824LLU;
	static uint8_t x2446 = 0U;
	volatile int64_t x2447 = 0LL;
	static volatile int64_t x2448 = INT64_MIN;
	static volatile int64_t t42 = 585569LL;

	t42 = (((x2445>>x2446)==x2447)%x2448);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x2457 = 19U;
	uint16_t x2458 = 0U;
	uint8_t x2459 = 0U;
	volatile int64_t x2460 = INT64_MIN;
	int64_t t43 = 1LL;

	t43 = (((x2457>>x2458)==x2459)%x2460);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x2621 = INT16_MAX;
	int8_t x2622 = 30;
	int8_t x2623 = -1;
	volatile int8_t x2624 = INT8_MIN;
	volatile int32_t t44 = 84;

	t44 = (((x2621>>x2622)==x2623)%x2624);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x2625 = INT64_MAX;
	uint64_t x2627 = 1351LLU;
	static int8_t x2628 = INT8_MIN;
	volatile int32_t t45 = -771107441;

	t45 = (((x2625>>x2626)==x2627)%x2628);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x2701 = INT32_MAX;
	int8_t x2702 = 15;
	int64_t x2703 = -1LL;
	uint32_t x2704 = UINT32_MAX;
	volatile uint32_t t46 = 841471U;

	t46 = (((x2701>>x2702)==x2703)%x2704);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x2709 = 1;
	static int16_t x2711 = 825;
	volatile uint8_t x2712 = 1U;
	int32_t t47 = 859;

	t47 = (((x2709>>x2710)==x2711)%x2712);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x2765 = 132084466U;
	int8_t x2766 = 0;
	static int32_t x2767 = -1;
	uint32_t x2768 = 12352148U;
	uint32_t t48 = 169U;

	t48 = (((x2765>>x2766)==x2767)%x2768);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x2785 = 15282569049795606LL;
	int64_t x2787 = INT64_MAX;
	int64_t x2788 = -1LL;
	volatile int64_t t49 = -72450LL;

	t49 = (((x2785>>x2786)==x2787)%x2788);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x2793 = UINT16_MAX;
	uint8_t x2794 = 14U;
	uint64_t x2796 = 124748111504LLU;

	t50 = (((x2793>>x2794)==x2795)%x2796);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x2845 = INT8_MAX;
	int8_t x2846 = 7;
	volatile int16_t x2847 = 2577;
	int32_t t51 = -22772084;

	t51 = (((x2845>>x2846)==x2847)%x2848);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x2955 = -6;
	int32_t t52 = -48;

	t52 = (((x2953>>x2954)==x2955)%x2956);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x2972 = INT8_MAX;
	volatile int32_t t53 = -6049;

	t53 = (((x2969>>x2970)==x2971)%x2972);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x2973 = 28314141LLU;
	int32_t x2975 = -234070;
	int64_t x2976 = 154230013411351536LL;
	static volatile int64_t t54 = 15419090507327LL;

	t54 = (((x2973>>x2974)==x2975)%x2976);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x2977 = 3028214419LL;
	volatile int8_t x2978 = 23;
	uint16_t x2979 = 28U;
	volatile uint8_t x2980 = UINT8_MAX;
	volatile int32_t t55 = -26528239;

	t55 = (((x2977>>x2978)==x2979)%x2980);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x3021 = UINT16_MAX;
	int8_t x3022 = 0;
	volatile int8_t x3024 = -2;

	t56 = (((x3021>>x3022)==x3023)%x3024);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x3053 = UINT8_MAX;
	uint16_t x3054 = 1U;
	int8_t x3055 = -1;
	uint16_t x3056 = 15U;

	t57 = (((x3053>>x3054)==x3055)%x3056);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x3261 = 0U;
	int8_t x3262 = 0;
	int64_t x3264 = 8351081804871LL;
	int64_t t58 = -624539007LL;

	t58 = (((x3261>>x3262)==x3263)%x3264);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x3297 = 11;
	static uint16_t x3298 = 0U;
	volatile int8_t x3299 = 0;
	volatile int16_t x3300 = INT16_MIN;
	int32_t t59 = -4;

	t59 = (((x3297>>x3298)==x3299)%x3300);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x3405 = 133801402U;
	int64_t x3407 = -1LL;
	static int32_t t60 = 1;

	t60 = (((x3405>>x3406)==x3407)%x3408);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x3489 = 7788LLU;
	static uint8_t x3490 = 24U;
	static int16_t x3491 = INT16_MIN;
	uint64_t t61 = 352425453615940LLU;

	t61 = (((x3489>>x3490)==x3491)%x3492);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x3630 = 1;
	uint16_t x3631 = 13798U;
	volatile uint64_t x3632 = 143736615LLU;
	uint64_t t62 = 99163219425293LLU;

	t62 = (((x3629>>x3630)==x3631)%x3632);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x3657 = UINT16_MAX;
	uint8_t x3658 = 0U;
	volatile int32_t t63 = -5310;

	t63 = (((x3657>>x3658)==x3659)%x3660);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x3705 = 0U;
	static int64_t x3707 = -1LL;
	volatile uint16_t x3708 = UINT16_MAX;
	volatile int32_t t64 = 1;

	t64 = (((x3705>>x3706)==x3707)%x3708);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x3761 = 40357216;
	uint8_t x3762 = 6U;
	int16_t x3763 = -1;
	uint8_t x3764 = 3U;
	static volatile int32_t t65 = 900457;

	t65 = (((x3761>>x3762)==x3763)%x3764);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint8_t x3766 = 30U;
	volatile int16_t x3767 = -11924;
	uint64_t x3768 = 2220080188672149LLU;
	uint64_t t66 = 749778693264603176LLU;

	t66 = (((x3765>>x3766)==x3767)%x3768);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x3914 = 4U;
	static int64_t x3916 = INT64_MIN;
	volatile int64_t t67 = -665LL;

	t67 = (((x3913>>x3914)==x3915)%x3916);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x3929 = 0;
	volatile int8_t x3930 = 11;
	int64_t x3931 = -1096631633831739038LL;
	volatile int32_t t68 = -14454913;

	t68 = (((x3929>>x3930)==x3931)%x3932);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x3941 = 19LLU;
	volatile int8_t x3942 = 55;
	volatile int16_t x3943 = -31;
	int64_t x3944 = INT64_MIN;
	static volatile int64_t t69 = 275157991685115477LL;

	t69 = (((x3941>>x3942)==x3943)%x3944);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x3954 = 27U;
	volatile int32_t x3956 = 12;
	static volatile int32_t t70 = -118305;

	t70 = (((x3953>>x3954)==x3955)%x3956);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x4013 = 1;
	int8_t x4016 = INT8_MAX;
	volatile int32_t t71 = 179;

	t71 = (((x4013>>x4014)==x4015)%x4016);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x4041 = 197800500833LL;
	static uint8_t x4042 = 3U;
	uint64_t x4044 = 2508498827102061LLU;
	uint64_t t72 = 254597LLU;

	t72 = (((x4041>>x4042)==x4043)%x4044);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x4185 = 108U;
	uint8_t x4186 = 6U;
	int16_t x4187 = -42;
	static volatile int32_t t73 = -1532;

	t73 = (((x4185>>x4186)==x4187)%x4188);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x4211 = INT8_MIN;
	uint32_t x4212 = UINT32_MAX;
	volatile uint32_t t74 = 52U;

	t74 = (((x4209>>x4210)==x4211)%x4212);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x4226 = 1;
	int64_t x4227 = INT64_MIN;
	int16_t x4228 = INT16_MIN;
	volatile int32_t t75 = 17;

	t75 = (((x4225>>x4226)==x4227)%x4228);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x4309 = 2U;
	int64_t x4311 = -4138263914927944LL;
	uint64_t x4312 = 172669044331360774LLU;

	t76 = (((x4309>>x4310)==x4311)%x4312);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x4361 = 5;
	int8_t x4362 = 0;
	int8_t x4363 = -1;
	int32_t x4364 = 70;
	volatile int32_t t77 = 168113272;

	t77 = (((x4361>>x4362)==x4363)%x4364);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x4445 = 388U;
	uint8_t x4446 = 14U;
	int32_t x4447 = INT32_MIN;
	int32_t x4448 = 1;
	int32_t t78 = 9;

	t78 = (((x4445>>x4446)==x4447)%x4448);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x4533 = 84133133U;
	int32_t x4534 = 5;
	int64_t x4535 = -601145742LL;
	static int64_t x4536 = 751973961LL;
	volatile int64_t t79 = 79096923LL;

	t79 = (((x4533>>x4534)==x4535)%x4536);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x4549 = 0;
	volatile uint16_t x4550 = 13U;
	uint64_t x4551 = 819LLU;
	static int64_t t80 = -15LL;

	t80 = (((x4549>>x4550)==x4551)%x4552);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x4573 = 7822;
	static int16_t x4574 = 20;
	int8_t x4575 = -1;
	volatile int64_t t81 = -265090296LL;

	t81 = (((x4573>>x4574)==x4575)%x4576);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x4581 = INT64_MAX;
	uint16_t x4584 = 1U;
	int32_t t82 = -23412342;

	t82 = (((x4581>>x4582)==x4583)%x4584);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x4621 = 62334437U;
	uint8_t x4622 = 0U;
	volatile int8_t x4623 = INT8_MIN;
	volatile int16_t x4624 = INT16_MIN;
	int32_t t83 = -788507;

	t83 = (((x4621>>x4622)==x4623)%x4624);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x4638 = 0U;
	int8_t x4639 = -11;
	volatile int32_t x4640 = INT32_MIN;
	int32_t t84 = -144044885;

	t84 = (((x4637>>x4638)==x4639)%x4640);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x4669 = 1;
	static int32_t x4670 = 0;
	int64_t x4672 = INT64_MIN;
	int64_t t85 = 15086465972LL;

	t85 = (((x4669>>x4670)==x4671)%x4672);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x4849 = 58U;
	volatile uint64_t x4851 = 1440280405411741273LLU;
	volatile int64_t t86 = -1198662795LL;

	t86 = (((x4849>>x4850)==x4851)%x4852);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x4921 = UINT16_MAX;
	uint32_t x4922 = 13U;
	int32_t x4923 = INT32_MIN;
	int32_t t87 = -3;

	t87 = (((x4921>>x4922)==x4923)%x4924);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x4941 = 3585LL;
	uint8_t x4942 = 1U;
	int32_t x4943 = -1;
	int32_t x4944 = INT32_MAX;
	volatile int32_t t88 = 11734;

	t88 = (((x4941>>x4942)==x4943)%x4944);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x4989 = 988004LLU;
	uint8_t x4990 = 7U;
	uint8_t x4991 = 20U;
	uint32_t x4992 = 34957114U;

	t89 = (((x4989>>x4990)==x4991)%x4992);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x5049 = 812U;
	int32_t x5050 = 1;
	static int32_t x5051 = -1;
	uint64_t x5052 = UINT64_MAX;

	t90 = (((x5049>>x5050)==x5051)%x5052);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x5133 = 14885963260094LL;
	uint16_t x5134 = 42U;
	int8_t x5135 = INT8_MIN;
	volatile int32_t x5136 = -7051;
	int32_t t91 = -1;

	t91 = (((x5133>>x5134)==x5135)%x5136);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x5185 = 6U;
	int8_t x5186 = 7;
	static int64_t x5188 = -1LL;
	volatile int64_t t92 = -75216029434LL;

	t92 = (((x5185>>x5186)==x5187)%x5188);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x5197 = 0;
	int8_t x5198 = 1;
	static int64_t x5199 = INT64_MIN;
	int64_t x5200 = -1LL;

	t93 = (((x5197>>x5198)==x5199)%x5200);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x5245 = 40411439U;
	int16_t x5247 = 3072;
	static int32_t t94 = -232769;

	t94 = (((x5245>>x5246)==x5247)%x5248);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x5269 = UINT32_MAX;
	int32_t x5271 = INT32_MIN;
	int8_t x5272 = 1;
	int32_t t95 = 179;

	t95 = (((x5269>>x5270)==x5271)%x5272);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x5325 = 3876592LL;
	static int16_t x5326 = 0;
	uint64_t x5327 = 74690629LLU;
	volatile int32_t x5328 = -21142651;
	volatile int32_t t96 = 397;

	t96 = (((x5325>>x5326)==x5327)%x5328);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x5329 = INT8_MAX;
	uint8_t x5331 = 20U;
	static volatile int16_t x5332 = INT16_MAX;

	t97 = (((x5329>>x5330)==x5331)%x5332);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x5349 = 1U;
	int16_t x5350 = 17;
	static int64_t x5352 = INT64_MIN;
	volatile int64_t t98 = 161LL;

	t98 = (((x5349>>x5350)==x5351)%x5352);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x5401 = 8;
	volatile int16_t x5402 = 7;
	uint64_t x5404 = UINT64_MAX;

	t99 = (((x5401>>x5402)==x5403)%x5404);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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


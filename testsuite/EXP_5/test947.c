#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x46 = UINT8_MAX;
int16_t x47 = 0;
int64_t x48 = INT64_MIN;
volatile uint32_t x113 = UINT32_MAX;
static int8_t x210 = 1;
volatile uint16_t x215 = 7U;
static int64_t x216 = -1LL;
int8_t x233 = -8;
uint64_t x235 = 26LLU;
int64_t x314 = 164595LL;
volatile int64_t x549 = INT64_MAX;
volatile int64_t x550 = 8703351221958LL;
volatile int32_t t10 = -76;
uint64_t x857 = 1144376098037LLU;
uint64_t t11 = 20LLU;
int8_t x1010 = 7;
uint8_t x1011 = 6U;
static uint32_t x1012 = UINT32_MAX;
uint32_t x1014 = UINT32_MAX;
int8_t x1016 = INT8_MAX;
volatile uint64_t t15 = 371LLU;
static uint8_t x1195 = 9U;
int64_t x1208 = INT64_MIN;
int64_t x1300 = -1LL;
int32_t t20 = 275000;
int8_t x1329 = 1;
volatile int64_t t23 = -3783814899668LL;
static uint16_t x1531 = 0U;
int64_t x1532 = INT64_MIN;
volatile uint32_t t25 = 24616U;
int16_t x1620 = INT16_MAX;
static int16_t x1652 = -1;
static uint16_t x1655 = 5U;
volatile int32_t x1665 = INT32_MIN;
static int32_t t29 = -6080554;
volatile int8_t x1946 = 6;
uint32_t x1947 = 3U;
static volatile int32_t t30 = -2528290;
static int32_t t32 = -109177;
uint64_t x2286 = 2722438LLU;
int8_t x2287 = 5;
volatile uint8_t x2288 = 24U;
int32_t x2493 = 2266023;
static int8_t x2502 = 7;
uint8_t x2503 = 16U;
volatile int32_t t37 = 0;
int32_t x2748 = INT32_MIN;
static volatile int32_t t39 = -1514;
int16_t x2815 = 1;
volatile uint16_t x2839 = 2U;
int32_t x2840 = INT32_MIN;
int8_t x2884 = INT8_MIN;
uint32_t x3249 = 74482U;
int8_t x3253 = -1;
int8_t x3254 = INT8_MAX;
static volatile int32_t t46 = -14617;
volatile int8_t x3354 = 0;
int16_t x3356 = 1;
uint8_t x3402 = UINT8_MAX;
volatile int16_t x3404 = INT16_MAX;
int32_t t49 = -3;
volatile int32_t t50 = -5;
volatile int64_t x3690 = 5611753919LL;
int16_t x3692 = INT16_MAX;
volatile int32_t t51 = 6;
static int64_t x3760 = 20378515891LL;
volatile uint64_t x3774 = 1077912830258985LLU;
int32_t x3776 = -1151;
int32_t x3777 = INT32_MAX;
uint16_t x3778 = UINT16_MAX;
uint8_t x3779 = 1U;
uint64_t x3780 = 133364348LLU;
volatile int32_t t54 = 10620;
int32_t x3786 = INT32_MAX;
volatile int8_t x3797 = INT8_MIN;
int64_t x3800 = -1LL;
int32_t x3924 = INT32_MIN;
volatile uint32_t t57 = 1288U;
volatile int64_t x3944 = INT64_MIN;
volatile uint32_t x3981 = 296551592U;
uint32_t t59 = 1084277653U;
int32_t t60 = 7;
static int32_t x4160 = 57724077;
int64_t t61 = -18497136920LL;
static uint16_t x4232 = 297U;
static uint8_t x4413 = UINT8_MAX;
int16_t x4415 = 28;
int8_t x4509 = INT8_MAX;
static volatile int16_t x4512 = -1;
volatile int32_t t65 = -3985128;
int8_t x4581 = INT8_MIN;
uint16_t x4583 = 1U;
int8_t x4643 = 0;
int32_t x4644 = -1;
int8_t x4661 = -1;
int32_t x4664 = -1285715;
int32_t t69 = -16074;
static int64_t x4678 = 1311LL;
volatile int32_t t70 = -698811;
volatile int64_t x4696 = INT64_MIN;
volatile int64_t t71 = -4280LL;
static uint64_t x4880 = 56434LLU;
int8_t x4985 = INT8_MIN;
static int8_t x5007 = 1;
int16_t x5145 = INT16_MIN;
volatile int64_t x5274 = 177452LL;
int16_t x5276 = INT16_MAX;
static uint8_t x5285 = 2U;
uint8_t x5288 = 59U;
volatile int32_t t80 = 0;
volatile uint16_t x5415 = 1U;
int16_t x5473 = INT16_MIN;
int32_t t85 = -777;
int16_t x5667 = 4;
volatile int32_t t86 = -423262958;
uint8_t x5823 = 19U;
int16_t x6127 = 3;
volatile int16_t x6128 = -6641;
uint64_t x6242 = 4LLU;
int16_t x6259 = 17;
volatile uint16_t x6470 = UINT16_MAX;
int8_t x6485 = 9;
int32_t t99 = 17656;


void f0(void) {
	static int8_t x45 = INT8_MIN;
	volatile int32_t t0 = 567017078;

	t0 = (x45&((x46<<x47)==x48));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x114 = UINT8_MAX;
	int64_t x115 = 1LL;
	uint8_t x116 = UINT8_MAX;
	volatile uint32_t t1 = 8606U;

	t1 = (x113&((x114<<x115)==x116));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x197 = INT32_MIN;
	uint16_t x198 = 352U;
	static uint8_t x199 = 1U;
	volatile int8_t x200 = INT8_MIN;
	int32_t t2 = 31;

	t2 = (x197&((x198<<x199)==x200));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x209 = -1;
	uint8_t x211 = 7U;
	static int8_t x212 = -1;
	static int32_t t3 = -12564001;

	t3 = (x209&((x210<<x211)==x212));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x213 = INT16_MIN;
	static int64_t x214 = 15LL;
	int32_t t4 = -61840689;

	t4 = (x213&((x214<<x215)==x216));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x234 = UINT64_MAX;
	int16_t x236 = INT16_MIN;
	int32_t t5 = 235848338;

	t5 = (x233&((x234<<x235)==x236));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x253 = 6;
	int16_t x254 = INT16_MAX;
	uint8_t x255 = 5U;
	volatile uint16_t x256 = 5200U;
	volatile int32_t t6 = 165921;

	t6 = (x253&((x254<<x255)==x256));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x313 = 69;
	uint32_t x315 = 0U;
	static int8_t x316 = INT8_MIN;
	int32_t t7 = 337;

	t7 = (x313&((x314<<x315)==x316));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x551 = 11;
	int8_t x552 = -1;
	volatile int64_t t8 = 998LL;

	t8 = (x549&((x550<<x551)==x552));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x565 = UINT16_MAX;
	uint16_t x566 = UINT16_MAX;
	uint8_t x567 = 1U;
	uint64_t x568 = 21639420549LLU;
	volatile int32_t t9 = -6;

	t9 = (x565&((x566<<x567)==x568));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x609 = -1;
	uint8_t x610 = UINT8_MAX;
	uint8_t x611 = 3U;
	int32_t x612 = -1;

	t10 = (x609&((x610<<x611)==x612));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint8_t x858 = 21U;
	static int8_t x859 = 5;
	int64_t x860 = INT64_MAX;

	t11 = (x857&((x858<<x859)==x860));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x1009 = INT64_MIN;
	static int64_t t12 = 0LL;

	t12 = (x1009&((x1010<<x1011)==x1012));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x1013 = -1;
	int16_t x1015 = 0;
	static int32_t t13 = 28522;

	t13 = (x1013&((x1014<<x1015)==x1016));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x1057 = 8U;
	uint8_t x1058 = 4U;
	uint8_t x1059 = 13U;
	int16_t x1060 = INT16_MIN;
	static volatile int32_t t14 = 1;

	t14 = (x1057&((x1058<<x1059)==x1060));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x1117 = 95404613LLU;
	volatile int16_t x1118 = INT16_MAX;
	volatile uint8_t x1119 = 1U;
	int8_t x1120 = 6;

	t15 = (x1117&((x1118<<x1119)==x1120));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x1193 = 6901;
	uint16_t x1194 = UINT16_MAX;
	volatile int8_t x1196 = -1;
	volatile int32_t t16 = 7;

	t16 = (x1193&((x1194<<x1195)==x1196));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x1205 = -1;
	uint16_t x1206 = UINT16_MAX;
	volatile uint8_t x1207 = 1U;
	int32_t t17 = 505;

	t17 = (x1205&((x1206<<x1207)==x1208));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1269 = INT16_MAX;
	uint32_t x1270 = 37553149U;
	int16_t x1271 = 15;
	static uint16_t x1272 = UINT16_MAX;
	static int32_t t18 = -7731;

	t18 = (x1269&((x1270<<x1271)==x1272));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x1293 = -28376100;
	uint16_t x1294 = 4U;
	uint32_t x1295 = 0U;
	uint32_t x1296 = 4U;
	volatile int32_t t19 = 5411;

	t19 = (x1293&((x1294<<x1295)==x1296));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x1297 = 6360;
	int8_t x1298 = 1;
	uint8_t x1299 = 8U;

	t20 = (x1297&((x1298<<x1299)==x1300));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1330 = 11U;
	static int8_t x1331 = 1;
	int16_t x1332 = 9;
	volatile int32_t t21 = -4164155;

	t21 = (x1329&((x1330<<x1331)==x1332));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1365 = 1;
	static int64_t x1366 = 3344605LL;
	uint8_t x1367 = 20U;
	int8_t x1368 = INT8_MIN;
	int32_t t22 = -2981688;

	t22 = (x1365&((x1366<<x1367)==x1368));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x1485 = 8383851934622975LL;
	static int64_t x1486 = 1LL;
	uint8_t x1487 = 61U;
	static uint64_t x1488 = 36210LLU;

	t23 = (x1485&((x1486<<x1487)==x1488));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1513 = 15U;
	uint8_t x1514 = 59U;
	volatile int8_t x1515 = 15;
	volatile int16_t x1516 = INT16_MIN;
	int32_t t24 = 366956;

	t24 = (x1513&((x1514<<x1515)==x1516));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1529 = 82148615U;
	uint64_t x1530 = 699777530098983LLU;

	t25 = (x1529&((x1530<<x1531)==x1532));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1617 = -1;
	static uint16_t x1618 = 611U;
	uint8_t x1619 = 2U;
	int32_t t26 = 62520;

	t26 = (x1617&((x1618<<x1619)==x1620));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1649 = 2U;
	int64_t x1650 = 1594769938304231LL;
	int8_t x1651 = 1;
	int32_t t27 = 20;

	t27 = (x1649&((x1650<<x1651)==x1652));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1653 = 0U;
	uint64_t x1654 = 117933865600LLU;
	int64_t x1656 = INT64_MIN;
	volatile int32_t t28 = -3;

	t28 = (x1653&((x1654<<x1655)==x1656));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1666 = 277;
	uint16_t x1667 = 1U;
	int64_t x1668 = -1LL;

	t29 = (x1665&((x1666<<x1667)==x1668));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1945 = INT32_MAX;
	volatile int16_t x1948 = INT16_MIN;

	t30 = (x1945&((x1946<<x1947)==x1948));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x2005 = -1;
	uint32_t x2006 = UINT32_MAX;
	uint16_t x2007 = 0U;
	uint8_t x2008 = UINT8_MAX;
	int32_t t31 = 156138;

	t31 = (x2005&((x2006<<x2007)==x2008));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x2073 = -1;
	uint16_t x2074 = 2047U;
	static volatile uint8_t x2075 = 5U;
	volatile uint32_t x2076 = 3221U;

	t32 = (x2073&((x2074<<x2075)==x2076));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x2285 = 495143420656LLU;
	static volatile uint64_t t33 = 312936481543957644LLU;

	t33 = (x2285&((x2286<<x2287)==x2288));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x2317 = INT32_MIN;
	int16_t x2318 = INT16_MAX;
	uint16_t x2319 = 0U;
	uint16_t x2320 = UINT16_MAX;
	static volatile int32_t t34 = -6306791;

	t34 = (x2317&((x2318<<x2319)==x2320));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x2377 = UINT32_MAX;
	int8_t x2378 = 3;
	uint8_t x2379 = 1U;
	int32_t x2380 = INT32_MIN;
	uint32_t t35 = 2U;

	t35 = (x2377&((x2378<<x2379)==x2380));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x2494 = 5U;
	static uint16_t x2495 = 15U;
	static volatile int8_t x2496 = -17;
	int32_t t36 = 46;

	t36 = (x2493&((x2494<<x2495)==x2496));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x2501 = INT8_MIN;
	static int8_t x2504 = -1;

	t37 = (x2501&((x2502<<x2503)==x2504));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2581 = -3547;
	uint32_t x2582 = 2627U;
	volatile int8_t x2583 = 3;
	volatile uint8_t x2584 = 50U;
	int32_t t38 = -290241384;

	t38 = (x2581&((x2582<<x2583)==x2584));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x2745 = 2U;
	uint64_t x2746 = 2030495203791LLU;
	int32_t x2747 = 1;

	t39 = (x2745&((x2746<<x2747)==x2748));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x2813 = 42223LLU;
	int32_t x2814 = 1;
	uint64_t x2816 = 2LLU;
	uint64_t t40 = 203155078940422LLU;

	t40 = (x2813&((x2814<<x2815)==x2816));

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2837 = -1;
	int32_t x2838 = 0;
	int32_t t41 = 26;

	t41 = (x2837&((x2838<<x2839)==x2840));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x2881 = UINT32_MAX;
	int16_t x2882 = 20;
	static volatile int8_t x2883 = 1;
	uint32_t t42 = 1104525U;

	t42 = (x2881&((x2882<<x2883)==x2884));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x3081 = INT16_MIN;
	uint32_t x3082 = 5U;
	uint64_t x3083 = 1LLU;
	uint64_t x3084 = 78638566550044LLU;
	static volatile int32_t t43 = -348036671;

	t43 = (x3081&((x3082<<x3083)==x3084));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x3250 = 1;
	int64_t x3251 = 1LL;
	int64_t x3252 = INT64_MIN;
	volatile uint32_t t44 = 365416111U;

	t44 = (x3249&((x3250<<x3251)==x3252));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x3255 = 3U;
	static int16_t x3256 = -1;
	volatile int32_t t45 = -451774;

	t45 = (x3253&((x3254<<x3255)==x3256));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x3281 = 12956U;
	uint64_t x3282 = UINT64_MAX;
	uint8_t x3283 = 63U;
	uint16_t x3284 = 1911U;

	t46 = (x3281&((x3282<<x3283)==x3284));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x3353 = INT8_MIN;
	uint8_t x3355 = 8U;
	volatile int32_t t47 = -21737;

	t47 = (x3353&((x3354<<x3355)==x3356));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x3401 = -1;
	static int8_t x3403 = 1;
	int32_t t48 = -248235;

	t48 = (x3401&((x3402<<x3403)==x3404));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x3485 = INT8_MIN;
	uint64_t x3486 = 1475LLU;
	uint8_t x3487 = 6U;
	static int64_t x3488 = INT64_MAX;

	t49 = (x3485&((x3486<<x3487)==x3488));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x3597 = 8430U;
	volatile uint16_t x3598 = UINT16_MAX;
	static uint64_t x3599 = 6LLU;
	volatile uint64_t x3600 = UINT64_MAX;

	t50 = (x3597&((x3598<<x3599)==x3600));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x3689 = 21;
	uint32_t x3691 = 1U;

	t51 = (x3689&((x3690<<x3691)==x3692));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x3757 = 100;
	uint32_t x3758 = 429U;
	uint8_t x3759 = 6U;
	static int32_t t52 = -1352;

	t52 = (x3757&((x3758<<x3759)==x3760));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x3773 = INT32_MAX;
	int16_t x3775 = 6;
	static volatile int32_t t53 = 239;

	t53 = (x3773&((x3774<<x3775)==x3776));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {


	t54 = (x3777&((x3778<<x3779)==x3780));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x3785 = -1;
	uint32_t x3787 = 0U;
	static int16_t x3788 = INT16_MAX;
	int32_t t55 = 1;

	t55 = (x3785&((x3786<<x3787)==x3788));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x3798 = 146744386;
	uint32_t x3799 = 3U;
	volatile int32_t t56 = -53;

	t56 = (x3797&((x3798<<x3799)==x3800));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x3921 = 926583U;
	uint64_t x3922 = UINT64_MAX;
	uint8_t x3923 = 7U;

	t57 = (x3921&((x3922<<x3923)==x3924));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x3941 = INT32_MIN;
	uint8_t x3942 = UINT8_MAX;
	static int8_t x3943 = 2;
	int32_t t58 = -703449658;

	t58 = (x3941&((x3942<<x3943)==x3944));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x3982 = 1496U;
	int32_t x3983 = 0;
	int32_t x3984 = INT32_MIN;

	t59 = (x3981&((x3982<<x3983)==x3984));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x4105 = INT8_MIN;
	uint8_t x4106 = 9U;
	uint32_t x4107 = 0U;
	uint16_t x4108 = UINT16_MAX;

	t60 = (x4105&((x4106<<x4107)==x4108));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x4157 = INT64_MIN;
	volatile uint32_t x4158 = 87553U;
	int8_t x4159 = 1;

	t61 = (x4157&((x4158<<x4159)==x4160));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x4229 = -78;
	volatile uint64_t x4230 = 2222562949958LLU;
	uint32_t x4231 = 5U;
	volatile int32_t t62 = 5;

	t62 = (x4229&((x4230<<x4231)==x4232));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x4414 = 2815826753324750LLU;
	volatile int16_t x4416 = -1;
	static volatile int32_t t63 = -1;

	t63 = (x4413&((x4414<<x4415)==x4416));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x4441 = -1006706559724839793LL;
	int8_t x4442 = 1;
	uint64_t x4443 = 0LLU;
	static uint32_t x4444 = 2203U;
	volatile int64_t t64 = 18218006811498392LL;

	t64 = (x4441&((x4442<<x4443)==x4444));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x4510 = INT32_MAX;
	uint16_t x4511 = 0U;

	t65 = (x4509&((x4510<<x4511)==x4512));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x4537 = -2931;
	static uint8_t x4538 = UINT8_MAX;
	static uint8_t x4539 = 6U;
	int32_t x4540 = -619;
	static volatile int32_t t66 = 1641339;

	t66 = (x4537&((x4538<<x4539)==x4540));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x4582 = 2U;
	uint8_t x4584 = 0U;
	volatile int32_t t67 = -896988571;

	t67 = (x4581&((x4582<<x4583)==x4584));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x4641 = INT16_MIN;
	int64_t x4642 = INT64_MAX;
	int32_t t68 = 3237;

	t68 = (x4641&((x4642<<x4643)==x4644));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x4662 = UINT64_MAX;
	volatile uint16_t x4663 = 17U;

	t69 = (x4661&((x4662<<x4663)==x4664));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x4677 = INT8_MIN;
	volatile uint8_t x4679 = 7U;
	int16_t x4680 = -1;

	t70 = (x4677&((x4678<<x4679)==x4680));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x4693 = 37641419380LL;
	int8_t x4694 = 0;
	volatile int8_t x4695 = 1;

	t71 = (x4693&((x4694<<x4695)==x4696));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x4721 = 15418LLU;
	uint8_t x4722 = 24U;
	static int32_t x4723 = 0;
	int32_t x4724 = INT32_MIN;
	volatile uint64_t t72 = 9546LLU;

	t72 = (x4721&((x4722<<x4723)==x4724));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x4857 = INT64_MAX;
	uint32_t x4858 = UINT32_MAX;
	uint16_t x4859 = 2U;
	int8_t x4860 = -1;
	static volatile int64_t t73 = -85735436197661LL;

	t73 = (x4857&((x4858<<x4859)==x4860));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x4877 = 198U;
	static uint16_t x4878 = UINT16_MAX;
	uint16_t x4879 = 1U;
	int32_t t74 = 1;

	t74 = (x4877&((x4878<<x4879)==x4880));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x4986 = 1726497975005159455LLU;
	volatile uint8_t x4987 = 3U;
	static uint64_t x4988 = 774971768901039LLU;
	static volatile int32_t t75 = 0;

	t75 = (x4985&((x4986<<x4987)==x4988));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x5005 = INT64_MIN;
	int32_t x5006 = 158459927;
	uint16_t x5008 = 1116U;
	volatile int64_t t76 = 14910108122896886LL;

	t76 = (x5005&((x5006<<x5007)==x5008));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x5146 = 25051385360LL;
	int8_t x5147 = 0;
	int8_t x5148 = INT8_MIN;
	int32_t t77 = -72627279;

	t77 = (x5145&((x5146<<x5147)==x5148));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x5153 = INT8_MIN;
	uint32_t x5154 = UINT32_MAX;
	uint8_t x5155 = 8U;
	volatile int16_t x5156 = INT16_MIN;
	int32_t t78 = 6;

	t78 = (x5153&((x5154<<x5155)==x5156));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x5273 = -3319;
	uint16_t x5275 = 1U;
	volatile int32_t t79 = 145783709;

	t79 = (x5273&((x5274<<x5275)==x5276));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x5286 = 10067;
	uint8_t x5287 = 0U;

	t80 = (x5285&((x5286<<x5287)==x5288));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x5289 = 237;
	int8_t x5290 = 63;
	int8_t x5291 = 13;
	volatile uint64_t x5292 = 27LLU;
	static volatile int32_t t81 = 287870;

	t81 = (x5289&((x5290<<x5291)==x5292));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x5373 = -933411718318LL;
	static int64_t x5374 = 394110874LL;
	uint16_t x5375 = 31U;
	static int16_t x5376 = INT16_MIN;
	volatile int64_t t82 = 13604890573332659LL;

	t82 = (x5373&((x5374<<x5375)==x5376));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x5413 = -13847;
	uint64_t x5414 = UINT64_MAX;
	uint16_t x5416 = 3619U;
	int32_t t83 = 719;

	t83 = (x5413&((x5414<<x5415)==x5416));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x5429 = -1;
	uint32_t x5430 = 768306308U;
	uint8_t x5431 = 1U;
	int64_t x5432 = INT64_MAX;
	volatile int32_t t84 = 749292999;

	t84 = (x5429&((x5430<<x5431)==x5432));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x5474 = 245LL;
	static volatile uint16_t x5475 = 1U;
	int16_t x5476 = INT16_MIN;

	t85 = (x5473&((x5474<<x5475)==x5476));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x5665 = INT16_MAX;
	uint32_t x5666 = 34289U;
	uint32_t x5668 = UINT32_MAX;

	t86 = (x5665&((x5666<<x5667)==x5668));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x5673 = INT32_MIN;
	volatile int64_t x5674 = 57113319189145LL;
	int16_t x5675 = 15;
	int8_t x5676 = 11;
	volatile int32_t t87 = -51977;

	t87 = (x5673&((x5674<<x5675)==x5676));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x5821 = 5U;
	uint8_t x5822 = UINT8_MAX;
	volatile int16_t x5824 = -1;
	int32_t t88 = -207719563;

	t88 = (x5821&((x5822<<x5823)==x5824));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x5897 = -1LL;
	int8_t x5898 = INT8_MAX;
	static uint8_t x5899 = 1U;
	int32_t x5900 = -1;
	volatile int64_t t89 = -63752LL;

	t89 = (x5897&((x5898<<x5899)==x5900));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x5973 = -384330389;
	volatile uint64_t x5974 = UINT64_MAX;
	volatile uint32_t x5975 = 2U;
	static uint32_t x5976 = UINT32_MAX;
	int32_t t90 = 10826033;

	t90 = (x5973&((x5974<<x5975)==x5976));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x6025 = 699530999U;
	uint64_t x6026 = 3LLU;
	int32_t x6027 = 1;
	int8_t x6028 = INT8_MIN;
	uint32_t t91 = 601823U;

	t91 = (x6025&((x6026<<x6027)==x6028));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x6125 = -15389;
	int8_t x6126 = 3;
	int32_t t92 = -1656;

	t92 = (x6125&((x6126<<x6127)==x6128));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x6241 = UINT64_MAX;
	static int16_t x6243 = 19;
	volatile int64_t x6244 = INT64_MIN;
	uint64_t t93 = 181842LLU;

	t93 = (x6241&((x6242<<x6243)==x6244));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x6257 = 12U;
	uint64_t x6258 = UINT64_MAX;
	volatile int8_t x6260 = INT8_MAX;
	volatile int32_t t94 = -15124404;

	t94 = (x6257&((x6258<<x6259)==x6260));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int8_t x6349 = -3;
	uint64_t x6350 = 2483091305LLU;
	static int8_t x6351 = 0;
	uint32_t x6352 = 947672468U;
	static int32_t t95 = 15629;

	t95 = (x6349&((x6350<<x6351)==x6352));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x6425 = UINT32_MAX;
	static uint8_t x6426 = UINT8_MAX;
	volatile uint16_t x6427 = 3U;
	int8_t x6428 = -1;
	volatile uint32_t t96 = 29411281U;

	t96 = (x6425&((x6426<<x6427)==x6428));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x6469 = 963498965013846136LLU;
	uint8_t x6471 = 0U;
	int16_t x6472 = -1;
	uint64_t t97 = 6633829923500604003LLU;

	t97 = (x6469&((x6470<<x6471)==x6472));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x6486 = UINT64_MAX;
	static int8_t x6487 = 55;
	int64_t x6488 = 1996LL;
	int32_t t98 = -602461;

	t98 = (x6485&((x6486<<x6487)==x6488));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x6513 = INT32_MIN;
	static volatile uint64_t x6514 = UINT64_MAX;
	uint8_t x6515 = 12U;
	int8_t x6516 = -14;

	t99 = (x6513&((x6514<<x6515)==x6516));

	if (t99 != 0) { NG(); } else { ; }
	
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


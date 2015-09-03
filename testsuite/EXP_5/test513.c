#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x102 = -1;
volatile uint32_t x121 = UINT32_MAX;
uint8_t x124 = 1U;
volatile uint32_t t2 = 276134064U;
uint64_t t4 = 33882098336496301LLU;
uint8_t x204 = 2U;
int32_t x384 = 1;
uint32_t x432 = 10U;
static volatile int8_t x498 = INT8_MIN;
volatile int32_t t12 = -1580;
volatile int64_t x1015 = -505299713LL;
int8_t x1452 = 12;
static int8_t x1542 = -2;
int8_t x1555 = INT8_MAX;
uint8_t x1569 = UINT8_MAX;
uint8_t x1570 = 4U;
volatile uint32_t t23 = 46210U;
static volatile int16_t x1813 = INT16_MAX;
int16_t x1992 = 30;
int16_t x2009 = INT16_MAX;
int8_t x2010 = INT8_MAX;
static uint16_t x2309 = 1U;
int16_t x2310 = -1;
int64_t x2602 = -1LL;
volatile int32_t t35 = -269879382;
volatile int64_t t39 = -27LL;
volatile int8_t x2981 = INT8_MAX;
static int32_t x3079 = INT32_MAX;
uint32_t x3117 = 180U;
uint64_t x3362 = 2149689291636600LLU;
int16_t x3363 = INT16_MIN;
int8_t x3583 = INT8_MIN;
int64_t x3619 = 16625053226556LL;
uint16_t x3642 = 62U;
uint16_t x3644 = 5U;
volatile int32_t t48 = 127531650;
static int32_t t49 = -115;
uint16_t x4033 = 911U;
volatile int32_t x4035 = INT32_MAX;
int16_t x4051 = INT16_MAX;
int64_t x4166 = -1LL;
uint32_t x4241 = 12U;
static int8_t x4244 = -6;
int32_t t57 = -1156014;
int16_t x4500 = 1;
volatile uint8_t x4621 = UINT8_MAX;
static int16_t x4843 = INT16_MIN;
static int16_t x4906 = -1;
int8_t x5021 = INT8_MAX;
volatile uint8_t x5024 = 16U;
static volatile uint32_t x5111 = UINT32_MAX;
int32_t x5155 = INT32_MIN;
uint64_t x5156 = 7LLU;
volatile int32_t t68 = 16034;
int16_t x5193 = INT16_MAX;
static int8_t x5269 = 3;
uint64_t x5271 = UINT64_MAX;
volatile int32_t t70 = 558600021;
static int8_t x5333 = 3;
volatile int32_t t71 = 1010;
uint64_t x5405 = UINT64_MAX;
static int8_t x5406 = -1;
static int8_t x5408 = 7;
int16_t x5467 = -1;
static uint8_t x5484 = 0U;
uint8_t x5700 = 14U;
uint16_t x5765 = 32U;
uint64_t x5768 = 17LLU;
int64_t x5894 = 518398141LL;
volatile int8_t x6132 = 21;
uint8_t x6229 = 12U;
int32_t x6235 = INT32_MIN;
volatile int32_t t82 = -13767;
uint32_t x6517 = 5U;
uint8_t x6520 = 0U;
static int64_t x6523 = INT64_MAX;
uint32_t x6612 = 35U;
static int16_t x6787 = -2350;
volatile int16_t x6834 = -1;


void f0(void) {
	uint32_t x1 = 1983U;
	uint16_t x2 = 27U;
	int64_t x3 = INT64_MAX;
	static int8_t x4 = 1;
	volatile uint32_t t0 = 45U;

	t0 = (x1<<((x2/x3)+x4));

	if (t0 != 3966U) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x101 = INT16_MAX;
	int32_t x103 = -1928;
	uint16_t x104 = 0U;
	volatile int32_t t1 = 25;

	t1 = (x101<<((x102/x103)+x104));

	if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x122 = UINT32_MAX;
	int8_t x123 = -62;

	t2 = (x121<<((x122/x123)+x124));

	if (t2 != 4294967292U) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint32_t x169 = UINT32_MAX;
	static int16_t x170 = INT16_MIN;
	int16_t x171 = INT16_MAX;
	int16_t x172 = 1;
	uint32_t t3 = UINT32_MAX;

	t3 = (x169<<((x170/x171)+x172));

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x185 = 5550690599503508LLU;
	int16_t x186 = INT16_MIN;
	int64_t x187 = 376020LL;
	uint32_t x188 = 26U;

	t4 = (x185<<((x186/x187)+x188));

	if (t4 != 5437467742410113024LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x201 = 9050790130218180976LLU;
	uint32_t x202 = 72416403U;
	int16_t x203 = -1;
	volatile uint64_t t5 = 100262450LLU;

	t5 = (x201<<((x202/x203)+x204));

	if (t5 != 17756416447163172288LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint64_t x269 = UINT64_MAX;
	int8_t x270 = 10;
	uint16_t x271 = 105U;
	uint8_t x272 = 0U;
	uint64_t t6 = UINT64_MAX;

	t6 = (x269<<((x270/x271)+x272));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x381 = UINT32_MAX;
	int16_t x382 = INT16_MIN;
	static int16_t x383 = INT16_MIN;
	uint32_t t7 = 10137U;

	t7 = (x381<<((x382/x383)+x384));

	if (t7 != 4294967292U) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x429 = UINT16_MAX;
	int16_t x430 = -1;
	uint64_t x431 = UINT64_MAX;
	volatile int32_t t8 = 580;

	t8 = (x429<<((x430/x431)+x432));

	if (t8 != 134215680) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x497 = 2778360292LLU;
	int8_t x499 = INT8_MIN;
	int8_t x500 = -1;
	volatile uint64_t t9 = 34693649LLU;

	t9 = (x497<<((x498/x499)+x500));

	if (t9 != 2778360292LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x829 = INT16_MAX;
	uint8_t x830 = UINT8_MAX;
	volatile int32_t x831 = 96;
	volatile uint32_t x832 = UINT32_MAX;
	int32_t t10 = 1608366;

	t10 = (x829<<((x830/x831)+x832));

	if (t10 != 65534) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x857 = INT8_MAX;
	static volatile uint64_t x858 = 754896601444379LLU;
	uint64_t x859 = 221323862195499973LLU;
	static int8_t x860 = 16;
	int32_t t11 = 14773;

	t11 = (x857<<((x858/x859)+x860));

	if (t11 != 8323072) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x877 = 18874612;
	volatile int8_t x878 = -3;
	int16_t x879 = INT16_MIN;
	volatile uint8_t x880 = 3U;

	t12 = (x877<<((x878/x879)+x880));

	if (t12 != 150996896) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x1013 = 0;
	static int32_t x1014 = INT32_MIN;
	int8_t x1016 = -1;
	volatile int32_t t13 = 151;

	t13 = (x1013<<((x1014/x1015)+x1016));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x1017 = 44639006148260191LL;
	uint8_t x1018 = 33U;
	int64_t x1019 = -1447075548601248775LL;
	uint8_t x1020 = 1U;
	int64_t t14 = -1399216664LL;

	t14 = (x1017<<((x1018/x1019)+x1020));

	if (t14 != 89278012296520382LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x1037 = 125794943LL;
	int8_t x1038 = INT8_MIN;
	uint8_t x1039 = UINT8_MAX;
	uint8_t x1040 = 3U;
	volatile int64_t t15 = -243076LL;

	t15 = (x1037<<((x1038/x1039)+x1040));

	if (t15 != 1006359544LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x1353 = UINT64_MAX;
	volatile int64_t x1354 = -1LL;
	int64_t x1355 = INT64_MIN;
	uint8_t x1356 = 3U;
	volatile uint64_t t16 = 539698547053890LLU;

	t16 = (x1353<<((x1354/x1355)+x1356));

	if (t16 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x1449 = UINT64_MAX;
	uint32_t x1450 = 1378420124U;
	static volatile int8_t x1451 = INT8_MIN;
	uint64_t t17 = 5795331251LLU;

	t17 = (x1449<<((x1450/x1451)+x1452));

	if (t17 != 18446744073709547520LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1505 = 2;
	uint8_t x1506 = 1U;
	int8_t x1507 = INT8_MIN;
	int16_t x1508 = 19;
	static int32_t t18 = -801;

	t18 = (x1505<<((x1506/x1507)+x1508));

	if (t18 != 1048576) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x1541 = UINT32_MAX;
	int16_t x1543 = -1;
	int16_t x1544 = -1;
	volatile uint32_t t19 = 18797U;

	t19 = (x1541<<((x1542/x1543)+x1544));

	if (t19 != 4294967294U) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x1553 = 338873166U;
	volatile int8_t x1554 = INT8_MIN;
	uint8_t x1556 = 1U;
	volatile uint32_t t20 = 29U;

	t20 = (x1553<<((x1554/x1555)+x1556));

	if (t20 != 338873166U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x1561 = INT64_MAX;
	int32_t x1562 = INT32_MIN;
	static int32_t x1563 = INT32_MIN;
	int16_t x1564 = -1;
	volatile int64_t t21 = INT64_MAX;

	t21 = (x1561<<((x1562/x1563)+x1564));

	if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x1571 = 151667;
	static volatile uint8_t x1572 = 2U;
	int32_t t22 = 6;

	t22 = (x1569<<((x1570/x1571)+x1572));

	if (t22 != 1020) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x1613 = UINT32_MAX;
	uint16_t x1614 = 2U;
	uint8_t x1615 = 1U;
	uint16_t x1616 = 1U;

	t23 = (x1613<<((x1614/x1615)+x1616));

	if (t23 != 4294967288U) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x1617 = INT64_MAX;
	uint8_t x1618 = 15U;
	volatile int8_t x1619 = INT8_MIN;
	int16_t x1620 = 0;
	volatile int64_t t24 = INT64_MAX;

	t24 = (x1617<<((x1618/x1619)+x1620));

	if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x1777 = 1U;
	volatile int32_t x1778 = -1;
	int8_t x1779 = INT8_MAX;
	int8_t x1780 = 2;
	volatile int32_t t25 = -192047922;

	t25 = (x1777<<((x1778/x1779)+x1780));

	if (t25 != 4) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1814 = 4794439LLU;
	int8_t x1815 = INT8_MIN;
	static uint8_t x1816 = 0U;
	static volatile int32_t t26 = -10943342;

	t26 = (x1813<<((x1814/x1815)+x1816));

	if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1909 = UINT8_MAX;
	int16_t x1910 = -1;
	static int64_t x1911 = -17455304079LL;
	uint32_t x1912 = 0U;
	volatile int32_t t27 = -292860223;

	t27 = (x1909<<((x1910/x1911)+x1912));

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x1989 = UINT32_MAX;
	uint32_t x1990 = UINT32_MAX;
	int16_t x1991 = INT16_MIN;
	volatile uint32_t t28 = 10689U;

	t28 = (x1989<<((x1990/x1991)+x1992));

	if (t28 != 2147483648U) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x2011 = 14LLU;
	static int16_t x2012 = 3;
	volatile int32_t t29 = -62293;

	t29 = (x2009<<((x2010/x2011)+x2012));

	if (t29 != 134213632) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x2085 = UINT32_MAX;
	static volatile uint16_t x2086 = 4U;
	volatile int32_t x2087 = INT32_MIN;
	uint8_t x2088 = 8U;
	volatile uint32_t t30 = 337U;

	t30 = (x2085<<((x2086/x2087)+x2088));

	if (t30 != 4294967040U) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x2149 = 0U;
	uint8_t x2150 = 14U;
	uint64_t x2151 = 5283525617673201LLU;
	uint32_t x2152 = 0U;
	volatile uint32_t t31 = 29041U;

	t31 = (x2149<<((x2150/x2151)+x2152));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x2225 = 1U;
	int8_t x2226 = 3;
	int8_t x2227 = -1;
	volatile uint8_t x2228 = 6U;
	int32_t t32 = -1;

	t32 = (x2225<<((x2226/x2227)+x2228));

	if (t32 != 8) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x2311 = UINT16_MAX;
	static volatile int8_t x2312 = 26;
	volatile int32_t t33 = -724;

	t33 = (x2309<<((x2310/x2311)+x2312));

	if (t33 != 67108864) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x2349 = UINT32_MAX;
	static int32_t x2350 = INT32_MIN;
	int32_t x2351 = INT32_MIN;
	int16_t x2352 = 0;
	uint32_t t34 = 174028424U;

	t34 = (x2349<<((x2350/x2351)+x2352));

	if (t34 != 4294967294U) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int32_t x2601 = 11;
	volatile int16_t x2603 = INT16_MAX;
	int8_t x2604 = 4;

	t35 = (x2601<<((x2602/x2603)+x2604));

	if (t35 != 176) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x2693 = UINT16_MAX;
	static uint64_t x2694 = 8789219805600LLU;
	int64_t x2695 = INT64_MAX;
	uint8_t x2696 = 0U;
	int32_t t36 = -588212;

	t36 = (x2693<<((x2694/x2695)+x2696));

	if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x2709 = 1123U;
	int16_t x2710 = -1;
	int16_t x2711 = -1;
	int64_t x2712 = -1LL;
	int32_t t37 = 226;

	t37 = (x2709<<((x2710/x2711)+x2712));

	if (t37 != 1123) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x2721 = 27U;
	uint8_t x2722 = 9U;
	uint32_t x2723 = UINT32_MAX;
	uint8_t x2724 = 16U;
	volatile int32_t t38 = 80403500;

	t38 = (x2721<<((x2722/x2723)+x2724));

	if (t38 != 1769472) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x2733 = 1643940LL;
	static int8_t x2734 = 39;
	static uint32_t x2735 = UINT32_MAX;
	uint64_t x2736 = 30LLU;

	t39 = (x2733<<((x2734/x2735)+x2736));

	if (t39 != 1765167134146560LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x2982 = 64221086592677LLU;
	int64_t x2983 = -1LL;
	uint8_t x2984 = 0U;
	static volatile int32_t t40 = 5;

	t40 = (x2981<<((x2982/x2983)+x2984));

	if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x3077 = 4;
	uint8_t x3078 = UINT8_MAX;
	int32_t x3080 = 1;
	int32_t t41 = 2;

	t41 = (x3077<<((x3078/x3079)+x3080));

	if (t41 != 8) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x3118 = 38U;
	static uint16_t x3119 = UINT16_MAX;
	volatile uint8_t x3120 = 13U;
	uint32_t t42 = 104U;

	t42 = (x3117<<((x3118/x3119)+x3120));

	if (t42 != 1474560U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x3209 = INT8_MAX;
	int64_t x3210 = 2988235499735982462LL;
	uint64_t x3211 = UINT64_MAX;
	uint8_t x3212 = 12U;
	int32_t t43 = 17;

	t43 = (x3209<<((x3210/x3211)+x3212));

	if (t43 != 520192) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x3361 = INT32_MAX;
	static uint8_t x3364 = 0U;
	static volatile int32_t t44 = INT32_MAX;

	t44 = (x3361<<((x3362/x3363)+x3364));

	if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x3581 = 37;
	int8_t x3582 = INT8_MAX;
	uint16_t x3584 = 2U;
	volatile int32_t t45 = -63;

	t45 = (x3581<<((x3582/x3583)+x3584));

	if (t45 != 148) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x3605 = 24U;
	int8_t x3606 = -1;
	int64_t x3607 = -1LL;
	int16_t x3608 = -1;
	static volatile int32_t t46 = -1;

	t46 = (x3605<<((x3606/x3607)+x3608));

	if (t46 != 24) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x3617 = UINT32_MAX;
	volatile int8_t x3618 = INT8_MIN;
	volatile uint8_t x3620 = 2U;
	volatile uint32_t t47 = 12U;

	t47 = (x3617<<((x3618/x3619)+x3620));

	if (t47 != 4294967292U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x3641 = 13U;
	uint8_t x3643 = 31U;

	t48 = (x3641<<((x3642/x3643)+x3644));

	if (t48 != 1664) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x3737 = UINT8_MAX;
	int16_t x3738 = INT16_MAX;
	int64_t x3739 = 1262332850831167221LL;
	volatile int64_t x3740 = 1LL;

	t49 = (x3737<<((x3738/x3739)+x3740));

	if (t49 != 510) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x3945 = UINT32_MAX;
	uint32_t x3946 = 12U;
	int16_t x3947 = INT16_MAX;
	uint16_t x3948 = 5U;
	volatile uint32_t t50 = 822064U;

	t50 = (x3945<<((x3946/x3947)+x3948));

	if (t50 != 4294967264U) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x4029 = INT32_MAX;
	int16_t x4030 = -1;
	volatile int8_t x4031 = -1;
	static uint64_t x4032 = UINT64_MAX;
	int32_t t51 = INT32_MAX;

	t51 = (x4029<<((x4030/x4031)+x4032));

	if (t51 != INT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x4034 = -1;
	int8_t x4036 = 12;
	int32_t t52 = 9060;

	t52 = (x4033<<((x4034/x4035)+x4036));

	if (t52 != 3731456) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x4049 = 1U;
	int16_t x4050 = INT16_MAX;
	uint8_t x4052 = 14U;
	static int32_t t53 = -64;

	t53 = (x4049<<((x4050/x4051)+x4052));

	if (t53 != 32768) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x4165 = 1;
	static int8_t x4167 = INT8_MAX;
	uint8_t x4168 = 0U;
	static volatile int32_t t54 = 1543;

	t54 = (x4165<<((x4166/x4167)+x4168));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x4242 = INT16_MAX;
	volatile uint16_t x4243 = 3892U;
	uint32_t t55 = 182991U;

	t55 = (x4241<<((x4242/x4243)+x4244));

	if (t55 != 48U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x4337 = INT64_MAX;
	uint8_t x4338 = UINT8_MAX;
	int32_t x4339 = -90403;
	static int8_t x4340 = 0;
	volatile int64_t t56 = INT64_MAX;

	t56 = (x4337<<((x4338/x4339)+x4340));

	if (t56 != INT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x4477 = 2U;
	int16_t x4478 = -1;
	uint16_t x4479 = UINT16_MAX;
	int8_t x4480 = 29;

	t57 = (x4477<<((x4478/x4479)+x4480));

	if (t57 != 1073741824) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x4497 = 122U;
	int32_t x4498 = INT32_MIN;
	int32_t x4499 = INT32_MAX;
	int32_t t58 = -2280508;

	t58 = (x4497<<((x4498/x4499)+x4500));

	if (t58 != 122) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x4622 = 2159U;
	int64_t x4623 = INT64_MAX;
	uint8_t x4624 = 0U;
	int32_t t59 = -51;

	t59 = (x4621<<((x4622/x4623)+x4624));

	if (t59 != 255) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x4681 = 650914101U;
	uint8_t x4682 = UINT8_MAX;
	uint8_t x4683 = 93U;
	volatile int32_t x4684 = -1;
	volatile uint32_t t60 = 91U;

	t60 = (x4681<<((x4682/x4683)+x4684));

	if (t60 != 1301828202U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x4841 = 0;
	int64_t x4842 = -1LL;
	volatile int16_t x4844 = 29;
	int32_t t61 = -64282;

	t61 = (x4841<<((x4842/x4843)+x4844));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x4905 = 483391LL;
	int8_t x4907 = -34;
	int16_t x4908 = 1;
	static int64_t t62 = -793707864LL;

	t62 = (x4905<<((x4906/x4907)+x4908));

	if (t62 != 966782LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x4969 = 7366310;
	uint64_t x4970 = 16069408806893613LLU;
	volatile uint64_t x4971 = UINT64_MAX;
	volatile uint16_t x4972 = 5U;
	int32_t t63 = 2380962;

	t63 = (x4969<<((x4970/x4971)+x4972));

	if (t63 != 235721920) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x4997 = 7U;
	int32_t x4998 = -74;
	static volatile int16_t x4999 = INT16_MAX;
	uint16_t x5000 = 3U;
	volatile int32_t t64 = -733550;

	t64 = (x4997<<((x4998/x4999)+x5000));

	if (t64 != 56) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x5022 = 2U;
	uint8_t x5023 = 111U;
	static volatile int32_t t65 = 443215;

	t65 = (x5021<<((x5022/x5023)+x5024));

	if (t65 != 8323072) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x5109 = 16441430953030390LLU;
	int8_t x5110 = -5;
	uint32_t x5112 = 32U;
	uint64_t t66 = 7542604873LLU;

	t66 = (x5109<<((x5110/x5111)+x5112));

	if (t66 != 17549950461308567552LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x5153 = 1;
	static int8_t x5154 = -1;
	int32_t t67 = 26;

	t67 = (x5153<<((x5154/x5155)+x5156));

	if (t67 != 128) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x5177 = 61U;
	static volatile uint64_t x5178 = 1285955LLU;
	static volatile int16_t x5179 = -1;
	uint8_t x5180 = 1U;

	t68 = (x5177<<((x5178/x5179)+x5180));

	if (t68 != 122) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x5194 = -1;
	static int16_t x5195 = INT16_MIN;
	int64_t x5196 = 1LL;
	int32_t t69 = -330;

	t69 = (x5193<<((x5194/x5195)+x5196));

	if (t69 != 65534) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x5270 = -1;
	int64_t x5272 = -1LL;

	t70 = (x5269<<((x5270/x5271)+x5272));

	if (t70 != 3) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x5334 = 1;
	uint16_t x5335 = UINT16_MAX;
	volatile int32_t x5336 = 1;

	t71 = (x5333<<((x5334/x5335)+x5336));

	if (t71 != 6) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x5407 = -140826;
	uint64_t t72 = 54220LLU;

	t72 = (x5405<<((x5406/x5407)+x5408));

	if (t72 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x5465 = UINT32_MAX;
	volatile int8_t x5466 = -1;
	int32_t x5468 = -1;
	uint32_t t73 = UINT32_MAX;

	t73 = (x5465<<((x5466/x5467)+x5468));

	if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x5481 = 4;
	volatile int8_t x5482 = INT8_MIN;
	static uint64_t x5483 = UINT64_MAX;
	static int32_t t74 = 16335560;

	t74 = (x5481<<((x5482/x5483)+x5484));

	if (t74 != 4) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x5697 = INT8_MAX;
	volatile uint32_t x5698 = 48U;
	int16_t x5699 = INT16_MIN;
	volatile int32_t t75 = 436035509;

	t75 = (x5697<<((x5698/x5699)+x5700));

	if (t75 != 2080768) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x5766 = INT16_MIN;
	int32_t x5767 = INT32_MAX;
	int32_t t76 = 29418;

	t76 = (x5765<<((x5766/x5767)+x5768));

	if (t76 != 4194304) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x5893 = 50U;
	int64_t x5895 = INT64_MIN;
	uint8_t x5896 = 0U;
	int32_t t77 = 113;

	t77 = (x5893<<((x5894/x5895)+x5896));

	if (t77 != 50) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x5981 = 3U;
	volatile int64_t x5982 = -1LL;
	int16_t x5983 = INT16_MAX;
	static uint8_t x5984 = 1U;
	static volatile int32_t t78 = 35597;

	t78 = (x5981<<((x5982/x5983)+x5984));

	if (t78 != 6) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x6053 = 18U;
	int16_t x6054 = INT16_MAX;
	volatile uint64_t x6055 = 9661LLU;
	volatile int32_t x6056 = -1;
	int32_t t79 = 26;

	t79 = (x6053<<((x6054/x6055)+x6056));

	if (t79 != 72) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x6129 = INT8_MAX;
	int64_t x6130 = INT64_MIN;
	static int64_t x6131 = INT64_MAX;
	int32_t t80 = 23;

	t80 = (x6129<<((x6130/x6131)+x6132));

	if (t80 != 133169152) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x6230 = 1;
	static volatile int16_t x6231 = INT16_MIN;
	uint8_t x6232 = 2U;
	volatile int32_t t81 = 3995;

	t81 = (x6229<<((x6230/x6231)+x6232));

	if (t81 != 48) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x6233 = 1943U;
	uint64_t x6234 = UINT64_MAX;
	static int16_t x6236 = 12;

	t82 = (x6233<<((x6234/x6235)+x6236));

	if (t82 != 15917056) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x6518 = 7U;
	volatile uint8_t x6519 = 62U;
	uint32_t t83 = 1267729U;

	t83 = (x6517<<((x6518/x6519)+x6520));

	if (t83 != 5U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x6521 = 107U;
	static int16_t x6522 = INT16_MAX;
	uint32_t x6524 = 0U;
	static int32_t t84 = 7798167;

	t84 = (x6521<<((x6522/x6523)+x6524));

	if (t84 != 107) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x6609 = 29LLU;
	int16_t x6610 = -1;
	uint16_t x6611 = UINT16_MAX;
	uint64_t t85 = 6707020312LLU;

	t85 = (x6609<<((x6610/x6611)+x6612));

	if (t85 != 996432412672LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x6785 = 1514LLU;
	uint32_t x6786 = UINT32_MAX;
	uint64_t x6788 = UINT64_MAX;
	static uint64_t t86 = 1297LLU;

	t86 = (x6785<<((x6786/x6787)+x6788));

	if (t86 != 1514LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x6833 = 2219;
	static volatile uint8_t x6835 = 55U;
	volatile uint8_t x6836 = 11U;
	int32_t t87 = 562437563;

	t87 = (x6833<<((x6834/x6835)+x6836));

	if (t87 != 4544512) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x6841 = UINT32_MAX;
	int32_t x6842 = INT32_MIN;
	uint32_t x6843 = UINT32_MAX;
	int8_t x6844 = 3;
	uint32_t t88 = 4U;

	t88 = (x6841<<((x6842/x6843)+x6844));

	if (t88 != 4294967288U) { NG(); } else { ; }
	
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


    return 0;
}


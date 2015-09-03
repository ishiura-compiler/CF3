#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint8_t x26 = UINT8_MAX;
uint32_t x28 = UINT32_MAX;
volatile int32_t x70 = INT32_MAX;
uint8_t x72 = 0U;
volatile int32_t x83 = 0;
volatile uint64_t t3 = 23223LLU;
uint64_t x106 = 14695593LLU;
int32_t x218 = INT32_MIN;
volatile uint64_t t8 = 6499523601LLU;
volatile uint64_t x705 = UINT64_MAX;
int8_t x751 = 14;
static uint16_t x832 = 15U;
static uint32_t x845 = UINT32_MAX;
int32_t x848 = -50916737;
int8_t x853 = 17;
uint8_t x855 = 30U;
volatile uint32_t t22 = 59880U;
uint64_t x894 = 2638130655444788582LLU;
static volatile uint64_t t23 = 408128LLU;
volatile int8_t x1280 = INT8_MIN;
volatile int8_t x1314 = -1;
uint16_t x1318 = 1U;
volatile uint16_t x1320 = 591U;
static volatile uint8_t x1449 = 2U;
int32_t x1451 = 0;
int16_t x1484 = 319;
int16_t x1505 = 10211;
int8_t x1506 = INT8_MIN;
int8_t x1507 = 1;
int64_t t32 = -7569510154213064LL;
volatile uint16_t x1933 = 9U;
static int64_t x1936 = INT64_MIN;
int8_t x1954 = INT8_MIN;
int32_t x2018 = INT32_MIN;
uint64_t x2133 = UINT64_MAX;
static uint8_t x2135 = 1U;
uint16_t x2213 = 2U;
volatile int32_t t43 = 4701035;
static uint16_t x2265 = UINT16_MAX;
volatile int8_t x2266 = -1;
uint8_t x2315 = 1U;
volatile uint64_t t45 = 256LLU;
uint16_t x2409 = 65U;
uint16_t x2412 = 53U;
uint64_t t46 = 57599350LLU;
volatile uint8_t x2441 = 2U;
volatile uint8_t x2462 = UINT8_MAX;
volatile int16_t x2464 = INT16_MAX;
static volatile uint32_t x2525 = 4U;
uint8_t x2527 = 0U;
static volatile uint32_t t50 = 207378U;
static int8_t x2665 = INT8_MIN;
static volatile int64_t t51 = 4770459416LL;
uint8_t x2745 = UINT8_MAX;
int64_t t55 = -57LL;
uint64_t x2893 = 12504857LLU;
int8_t x2894 = INT8_MIN;
static uint16_t x2896 = 9303U;
static uint32_t x3032 = 1146864250U;
static uint64_t t64 = 11291865821247283LLU;
uint8_t x3199 = 22U;
int64_t x3270 = INT64_MAX;
int8_t x3272 = -1;
static volatile int16_t x3274 = 55;
volatile int16_t x3329 = INT16_MIN;
uint64_t x3330 = 207950537LLU;
int64_t x3332 = -7033LL;
uint16_t x3366 = 996U;
volatile int64_t x3368 = -2735456932132435LL;
volatile uint16_t x3387 = 1U;
static int64_t t72 = 799624730LL;
static int32_t x3413 = INT32_MIN;
static int8_t x3416 = INT8_MIN;
int32_t t73 = -80;
static int16_t x3541 = INT16_MIN;
uint64_t x3546 = 25LLU;
int8_t x3548 = INT8_MIN;
static int64_t x3558 = INT64_MIN;
static volatile int64_t t77 = 8LL;
uint32_t x3581 = UINT32_MAX;
uint64_t x3584 = 351680502677974LLU;
static volatile uint64_t t78 = 1638LLU;
int32_t x3590 = INT32_MIN;
int8_t x3591 = 31;
volatile int64_t t79 = -59913270382812LL;
static int64_t x3692 = INT64_MAX;
volatile int64_t t81 = -275886797085440LL;
uint8_t x3747 = 3U;
volatile int32_t t82 = -11039021;
int64_t x3794 = -1LL;
uint16_t x3795 = 0U;
int64_t x3800 = 2LL;
uint8_t x3979 = 0U;
int32_t x4023 = 0;
volatile uint64_t x4153 = 4746617974884LLU;
uint8_t x4155 = 2U;
int32_t t93 = 5488494;
int64_t x4181 = 14261876221468LL;
static volatile int64_t t94 = -76LL;
volatile uint32_t t95 = 10051U;
volatile int32_t x4365 = -1;


void f0(void) {
	volatile int64_t x25 = 1378703544562339LL;
	static volatile uint8_t x27 = 6U;
	static int64_t t0 = -11061650762291LL;

	t0 = (((x25&x26)<<x27)*x28);

	if (t0 != 44805098821440LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x69 = INT32_MIN;
	uint8_t x71 = 12U;
	int32_t t1 = -484;

	t1 = (((x69&x70)<<x71)*x72);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x77 = 13U;
	volatile int8_t x78 = INT8_MAX;
	uint64_t x79 = 20LLU;
	static int8_t x80 = INT8_MIN;
	volatile int32_t t2 = -123831561;

	t2 = (((x77&x78)<<x79)*x80);

	if (t2 != -1744830464) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x81 = 9LLU;
	int32_t x82 = -1;
	int64_t x84 = -230311220088608434LL;

	t3 = (((x81&x82)<<x83)*x84);

	if (t3 != 16373943092912075710LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x105 = INT16_MIN;
	static int8_t x107 = 2;
	int64_t x108 = 2394455LL;
	uint64_t t4 = 33598093400788114LLU;

	t4 = (((x105&x106)<<x107)*x108);

	if (t4 != 140603010580480LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x109 = INT8_MIN;
	static uint32_t x110 = UINT32_MAX;
	static volatile int16_t x111 = 6;
	static int64_t x112 = -3LL;
	volatile int64_t t5 = 621241876198LL;

	t5 = (((x109&x110)<<x111)*x112);

	if (t5 != -12884877312LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x161 = INT64_MAX;
	int8_t x162 = 1;
	int32_t x163 = 0;
	static uint64_t x164 = 1480396505328063754LLU;
	uint64_t t6 = 13398165630579LLU;

	t6 = (((x161&x162)<<x163)*x164);

	if (t6 != 1480396505328063754LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x217 = UINT8_MAX;
	volatile uint8_t x219 = 4U;
	int8_t x220 = 0;
	volatile int32_t t7 = 0;

	t7 = (((x217&x218)<<x219)*x220);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x237 = -1LL;
	static uint64_t x238 = UINT64_MAX;
	volatile int8_t x239 = 5;
	int32_t x240 = -1;

	t8 = (((x237&x238)<<x239)*x240);

	if (t8 != 32LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x289 = INT8_MAX;
	volatile uint16_t x290 = 1U;
	uint8_t x291 = 3U;
	int8_t x292 = INT8_MAX;
	volatile int32_t t9 = 46183;

	t9 = (((x289&x290)<<x291)*x292);

	if (t9 != 1016) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x409 = 2959972248725LLU;
	static int16_t x410 = 53;
	uint8_t x411 = 7U;
	uint32_t x412 = UINT32_MAX;
	uint64_t t10 = 1369LLU;

	t10 = (((x409&x410)<<x411)*x412);

	if (t10 != 11544872088960LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int64_t x473 = INT64_MIN;
	uint16_t x474 = 22368U;
	uint8_t x475 = 29U;
	int64_t x476 = INT64_MIN;
	int64_t t11 = 8426615771LL;

	t11 = (((x473&x474)<<x475)*x476);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x569 = UINT64_MAX;
	uint8_t x570 = 27U;
	uint8_t x571 = 26U;
	int32_t x572 = INT32_MIN;
	uint64_t t12 = 2354213035792680405LLU;

	t12 = (((x569&x570)<<x571)*x572);

	if (t12 != 14555633995661443072LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x653 = 1323713816724462612LLU;
	uint8_t x654 = 47U;
	int16_t x655 = 27;
	int8_t x656 = INT8_MIN;
	uint64_t t13 = 42775897415204LLU;

	t13 = (((x653&x654)<<x655)*x656);

	if (t13 != 18446744004990074880LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x673 = 1763;
	int32_t x674 = INT32_MIN;
	volatile int32_t x675 = 4;
	uint16_t x676 = 11U;
	int32_t t14 = -338039;

	t14 = (((x673&x674)<<x675)*x676);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x706 = 14342LL;
	static int8_t x707 = 23;
	static int64_t x708 = INT64_MIN;
	static volatile uint64_t t15 = 2824866913820772LLU;

	t15 = (((x705&x706)<<x707)*x708);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x725 = 0U;
	int64_t x726 = INT64_MIN;
	uint8_t x727 = 14U;
	volatile uint32_t x728 = 15U;
	volatile int64_t t16 = -1889860944730076LL;

	t16 = (((x725&x726)<<x727)*x728);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x749 = 1U;
	int64_t x750 = 7182LL;
	volatile int16_t x752 = 3;
	int64_t t17 = -56LL;

	t17 = (((x749&x750)<<x751)*x752);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x781 = -1LL;
	uint64_t x782 = 1069LLU;
	volatile int16_t x783 = 1;
	uint32_t x784 = UINT32_MAX;
	static uint64_t t18 = 62162052116018757LLU;

	t18 = (((x781&x782)<<x783)*x784);

	if (t18 != 9182640076710LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x813 = 76143928U;
	static int64_t x814 = INT64_MAX;
	static int8_t x815 = 0;
	uint8_t x816 = UINT8_MAX;
	volatile int64_t t19 = -7542027LL;

	t19 = (((x813&x814)<<x815)*x816);

	if (t19 != 19416701640LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x829 = INT64_MIN;
	volatile int8_t x830 = INT8_MAX;
	volatile int32_t x831 = 6;
	volatile int64_t t20 = -1582910LL;

	t20 = (((x829&x830)<<x831)*x832);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x846 = INT32_MIN;
	int8_t x847 = 7;
	volatile uint32_t t21 = 59U;

	t21 = (((x845&x846)<<x847)*x848);

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x854 = 4120296;
	uint32_t x856 = 758301U;

	t22 = (((x853&x854)<<x855)*x856);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x893 = INT16_MIN;
	int16_t x895 = 1;
	int32_t x896 = -120622685;

	t23 = (((x893&x894)<<x895)*x896);

	if (t23 != 11249857742766014464LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x921 = 0;
	int32_t x922 = INT32_MAX;
	int8_t x923 = 1;
	int16_t x924 = INT16_MIN;
	int32_t t24 = 1;

	t24 = (((x921&x922)<<x923)*x924);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x1053 = 1U;
	static uint16_t x1054 = 187U;
	static volatile uint64_t x1055 = 19LLU;
	int16_t x1056 = 2552;
	volatile int32_t t25 = 55908710;

	t25 = (((x1053&x1054)<<x1055)*x1056);

	if (t25 != 1337982976) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1277 = 1932878562365780LLU;
	int16_t x1278 = INT16_MAX;
	int8_t x1279 = 1;
	uint64_t t26 = 1817360LLU;

	t26 = (((x1277&x1278)<<x1279)*x1280);

	if (t26 != 18446744073708416000LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1313 = 7U;
	int8_t x1315 = 1;
	volatile int32_t x1316 = -1;
	volatile int32_t t27 = -15;

	t27 = (((x1313&x1314)<<x1315)*x1316);

	if (t27 != -14) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1317 = 6050U;
	uint16_t x1319 = 2U;
	volatile int32_t t28 = 22314;

	t28 = (((x1317&x1318)<<x1319)*x1320);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1450 = 911U;
	uint8_t x1452 = UINT8_MAX;
	uint32_t t29 = 2U;

	t29 = (((x1449&x1450)<<x1451)*x1452);

	if (t29 != 510U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1481 = 37;
	int8_t x1482 = INT8_MAX;
	volatile int8_t x1483 = 14;
	int32_t t30 = -1459;

	t30 = (((x1481&x1482)<<x1483)*x1484);

	if (t30 != 193380352) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1508 = 17LLU;
	uint64_t t31 = 5866920363700428LLU;

	t31 = (((x1505&x1506)<<x1507)*x1508);

	if (t31 != 343808LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x1585 = INT64_MIN;
	uint32_t x1586 = UINT32_MAX;
	volatile int8_t x1587 = 3;
	static int64_t x1588 = 2125518508822049371LL;

	t32 = (((x1585&x1586)<<x1587)*x1588);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1801 = INT8_MIN;
	uint16_t x1802 = 386U;
	uint16_t x1803 = 0U;
	static uint16_t x1804 = UINT16_MAX;
	volatile int32_t t33 = -186790;

	t33 = (((x1801&x1802)<<x1803)*x1804);

	if (t33 != 25165440) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x1873 = 6U;
	static int64_t x1874 = 1554LL;
	static uint32_t x1875 = 12U;
	int32_t x1876 = INT32_MIN;
	volatile int64_t t34 = -3515322249LL;

	t34 = (((x1873&x1874)<<x1875)*x1876);

	if (t34 != -17592186044416LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x1934 = 104547998520924826LLU;
	int16_t x1935 = 13;
	volatile uint64_t t35 = 100783915422992LLU;

	t35 = (((x1933&x1934)<<x1935)*x1936);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x1953 = UINT64_MAX;
	volatile int8_t x1955 = 6;
	int16_t x1956 = -261;
	uint64_t t36 = 64386550919455971LLU;

	t36 = (((x1953&x1954)<<x1955)*x1956);

	if (t36 != 2138112LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x1989 = UINT32_MAX;
	int16_t x1990 = -1;
	int32_t x1991 = 4;
	int8_t x1992 = 21;
	volatile uint32_t t37 = 25496U;

	t37 = (((x1989&x1990)<<x1991)*x1992);

	if (t37 != 4294966960U) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x2001 = 0U;
	uint16_t x2002 = UINT16_MAX;
	int32_t x2003 = 26;
	static int16_t x2004 = -1;
	volatile int32_t t38 = 1142125;

	t38 = (((x2001&x2002)<<x2003)*x2004);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x2017 = UINT64_MAX;
	static int8_t x2019 = 10;
	int64_t x2020 = INT64_MIN;
	volatile uint64_t t39 = 1587770474809654614LLU;

	t39 = (((x2017&x2018)<<x2019)*x2020);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x2041 = 2U;
	int8_t x2042 = INT8_MAX;
	static uint32_t x2043 = 0U;
	volatile int64_t x2044 = 63726687564972LL;
	volatile int64_t t40 = 2LL;

	t40 = (((x2041&x2042)<<x2043)*x2044);

	if (t40 != 127453375129944LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2134 = -1;
	int16_t x2136 = -15966;
	static volatile uint64_t t41 = 12368523544810389LLU;

	t41 = (((x2133&x2134)<<x2135)*x2136);

	if (t41 != 31932LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x2169 = INT64_MIN;
	uint32_t x2170 = 3842020U;
	static uint8_t x2171 = 1U;
	int32_t x2172 = INT32_MIN;
	int64_t t42 = 132246LL;

	t42 = (((x2169&x2170)<<x2171)*x2172);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x2214 = INT8_MAX;
	volatile uint16_t x2215 = 1U;
	int32_t x2216 = 0;

	t43 = (((x2213&x2214)<<x2215)*x2216);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x2267 = 1U;
	static volatile int8_t x2268 = -19;
	int32_t t44 = -16102;

	t44 = (((x2265&x2266)<<x2267)*x2268);

	if (t44 != -2490330) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x2313 = UINT64_MAX;
	int8_t x2314 = 51;
	static int16_t x2316 = INT16_MAX;

	t45 = (((x2313&x2314)<<x2315)*x2316);

	if (t45 != 3342234LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x2410 = 130034466509220543LLU;
	int32_t x2411 = 3;

	t46 = (((x2409&x2410)<<x2411)*x2412);

	if (t46 != 424LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x2442 = 4;
	volatile int8_t x2443 = 2;
	static int32_t x2444 = -1;
	int32_t t47 = -109714928;

	t47 = (((x2441&x2442)<<x2443)*x2444);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x2461 = -1;
	int8_t x2463 = 2;
	static int32_t t48 = 502569;

	t48 = (((x2461&x2462)<<x2463)*x2464);

	if (t48 != 33422340) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x2526 = 27342825LL;
	int16_t x2528 = 10;
	int64_t t49 = -96LL;

	t49 = (((x2525&x2526)<<x2527)*x2528);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x2589 = INT16_MIN;
	int32_t x2590 = 16863984;
	static uint32_t x2591 = 0U;
	static uint32_t x2592 = 29684628U;

	t50 = (((x2589&x2590)<<x2591)*x2592);

	if (t50 != 2274623488U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x2666 = 50U;
	uint8_t x2667 = 18U;
	volatile int64_t x2668 = -9624LL;

	t51 = (((x2665&x2666)<<x2667)*x2668);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x2677 = UINT32_MAX;
	int8_t x2678 = 16;
	volatile int32_t x2679 = 2;
	uint64_t x2680 = 2154905021LLU;
	volatile uint64_t t52 = 6267100171568474LLU;

	t52 = (((x2677&x2678)<<x2679)*x2680);

	if (t52 != 137913921344LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x2705 = 88U;
	int16_t x2706 = INT16_MIN;
	volatile int16_t x2707 = 0;
	int32_t x2708 = 6943;
	static int32_t t53 = 3450;

	t53 = (((x2705&x2706)<<x2707)*x2708);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2746 = INT8_MIN;
	int8_t x2747 = 5;
	static int32_t x2748 = 85;
	volatile int32_t t54 = 6;

	t54 = (((x2745&x2746)<<x2747)*x2748);

	if (t54 != 348160) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x2773 = INT8_MIN;
	int64_t x2774 = 494230LL;
	int32_t x2775 = 0;
	int16_t x2776 = INT16_MIN;

	t55 = (((x2773&x2774)<<x2775)*x2776);

	if (t55 != -16194207744LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x2841 = UINT64_MAX;
	int8_t x2842 = -1;
	int16_t x2843 = 3;
	int64_t x2844 = -1LL;
	volatile uint64_t t56 = 3292117641236231455LLU;

	t56 = (((x2841&x2842)<<x2843)*x2844);

	if (t56 != 8LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x2865 = INT32_MIN;
	uint32_t x2866 = 219U;
	int16_t x2867 = 0;
	static uint64_t x2868 = 836LLU;
	volatile uint64_t t57 = 90LLU;

	t57 = (((x2865&x2866)<<x2867)*x2868);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x2895 = 0U;
	volatile uint64_t t58 = 250007397830627LLU;

	t58 = (((x2893&x2894)<<x2895)*x2896);

	if (t58 != 116332452096LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x2937 = -24;
	volatile int32_t x2938 = 201978;
	volatile uint8_t x2939 = 0U;
	int8_t x2940 = INT8_MIN;
	volatile int32_t t59 = 3661376;

	t59 = (((x2937&x2938)<<x2939)*x2940);

	if (t59 != -25850880) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x3029 = 727524077U;
	int8_t x3030 = 21;
	uint16_t x3031 = 15U;
	volatile uint32_t t60 = 282U;

	t60 = (((x3029&x3030)<<x3031)*x3032);

	if (t60 != 1714487296U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x3033 = -1;
	uint16_t x3034 = UINT16_MAX;
	uint16_t x3035 = 4U;
	volatile uint8_t x3036 = 1U;
	volatile int32_t t61 = 663;

	t61 = (((x3033&x3034)<<x3035)*x3036);

	if (t61 != 1048560) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x3053 = UINT32_MAX;
	int64_t x3054 = INT64_MIN;
	uint8_t x3055 = 17U;
	static volatile int8_t x3056 = INT8_MIN;
	static volatile int64_t t62 = 1466073933966550881LL;

	t62 = (((x3053&x3054)<<x3055)*x3056);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x3117 = 31U;
	int64_t x3118 = INT64_MIN;
	volatile uint8_t x3119 = 9U;
	int32_t x3120 = -1;
	static volatile int64_t t63 = 17823887073467LL;

	t63 = (((x3117&x3118)<<x3119)*x3120);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x3177 = 16830905498691870LL;
	uint64_t x3178 = 44892727036LLU;
	uint8_t x3179 = 0U;
	int32_t x3180 = INT32_MIN;

	t64 = (((x3177&x3178)<<x3179)*x3180);

	if (t64 != 18327381031268646912LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x3197 = -1;
	uint64_t x3198 = 18290132491LLU;
	int64_t x3200 = INT64_MIN;
	static volatile uint64_t t65 = 5778LLU;

	t65 = (((x3197&x3198)<<x3199)*x3200);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x3245 = INT8_MAX;
	int8_t x3246 = INT8_MIN;
	static int8_t x3247 = 5;
	uint32_t x3248 = 253139809U;
	volatile uint32_t t66 = 3401U;

	t66 = (((x3245&x3246)<<x3247)*x3248);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x3269 = INT64_MIN;
	uint8_t x3271 = 2U;
	int64_t t67 = -3452404655797599567LL;

	t67 = (((x3269&x3270)<<x3271)*x3272);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x3273 = INT8_MAX;
	int16_t x3275 = 1;
	int16_t x3276 = 371;
	volatile int32_t t68 = -487896;

	t68 = (((x3273&x3274)<<x3275)*x3276);

	if (t68 != 40810) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x3331 = 8U;
	uint64_t t69 = 16LLU;

	t69 = (((x3329&x3330)<<x3331)*x3332);

	if (t69 != 18446369678239465472LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x3341 = INT16_MIN;
	uint64_t x3342 = 145680766454LLU;
	static uint8_t x3343 = 0U;
	volatile int32_t x3344 = INT32_MIN;
	uint64_t t70 = 522253367420747195LLU;

	t70 = (((x3341&x3342)<<x3343)*x3344);

	if (t70 != 747597538143502336LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint8_t x3365 = 1U;
	volatile int16_t x3367 = 0;
	volatile int64_t t71 = 3661831689292277076LL;

	t71 = (((x3365&x3366)<<x3367)*x3368);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x3385 = 127U;
	static int64_t x3386 = -335830579742177LL;
	volatile int32_t x3388 = INT32_MIN;

	t72 = (((x3385&x3386)<<x3387)*x3388);

	if (t72 != -133143986176LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x3414 = 13U;
	volatile uint8_t x3415 = 9U;

	t73 = (((x3413&x3414)<<x3415)*x3416);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x3497 = 16426U;
	uint64_t x3498 = UINT64_MAX;
	int8_t x3499 = 0;
	int8_t x3500 = INT8_MIN;
	uint64_t t74 = 2791353709LLU;

	t74 = (((x3497&x3498)<<x3499)*x3500);

	if (t74 != 18446744073707449088LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x3542 = 0U;
	static uint32_t x3543 = 18U;
	int8_t x3544 = INT8_MIN;
	volatile int32_t t75 = -1025098039;

	t75 = (((x3541&x3542)<<x3543)*x3544);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x3545 = INT32_MIN;
	uint8_t x3547 = 1U;
	static volatile uint64_t t76 = 10301149204821LLU;

	t76 = (((x3545&x3546)<<x3547)*x3548);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x3557 = 0;
	int8_t x3559 = 1;
	int8_t x3560 = INT8_MIN;

	t77 = (((x3557&x3558)<<x3559)*x3560);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x3582 = 7018U;
	volatile int8_t x3583 = 0;

	t78 = (((x3581&x3582)<<x3583)*x3584);

	if (t78 != 2468093767794021532LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x3589 = 7U;
	int64_t x3592 = INT64_MIN;

	t79 = (((x3589&x3590)<<x3591)*x3592);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x3685 = UINT16_MAX;
	uint64_t x3686 = 251025793869351LLU;
	uint8_t x3687 = 3U;
	volatile uint64_t x3688 = UINT64_MAX;
	volatile uint64_t t80 = 7559LLU;

	t80 = (((x3685&x3686)<<x3687)*x3688);

	if (t80 != 18446744073709080264LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x3689 = 29U;
	uint32_t x3690 = 18016U;
	uint64_t x3691 = 1LLU;

	t81 = (((x3689&x3690)<<x3691)*x3692);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x3745 = INT32_MIN;
	static int32_t x3746 = 44991;
	int8_t x3748 = -1;

	t82 = (((x3745&x3746)<<x3747)*x3748);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x3793 = INT16_MAX;
	int8_t x3796 = -1;
	int64_t t83 = 63165386291975276LL;

	t83 = (((x3793&x3794)<<x3795)*x3796);

	if (t83 != -32767LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x3797 = INT16_MAX;
	int32_t x3798 = INT32_MIN;
	int64_t x3799 = 18LL;
	volatile int64_t t84 = 92LL;

	t84 = (((x3797&x3798)<<x3799)*x3800);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x3809 = 7997U;
	static uint8_t x3810 = UINT8_MAX;
	int16_t x3811 = 0;
	volatile uint64_t x3812 = 22248626LLU;
	uint64_t t85 = 139LLU;

	t85 = (((x3809&x3810)<<x3811)*x3812);

	if (t85 != 1357166186LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x3945 = 275373U;
	int16_t x3946 = INT16_MAX;
	static volatile uint8_t x3947 = 24U;
	int16_t x3948 = INT16_MIN;
	uint32_t t86 = 136902003U;

	t86 = (((x3945&x3946)<<x3947)*x3948);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x3969 = INT8_MIN;
	uint8_t x3970 = 1U;
	uint8_t x3971 = 1U;
	static uint8_t x3972 = UINT8_MAX;
	volatile int32_t t87 = -97619;

	t87 = (((x3969&x3970)<<x3971)*x3972);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x3973 = 3U;
	static int8_t x3974 = 0;
	static int8_t x3975 = 6;
	uint32_t x3976 = UINT32_MAX;
	volatile uint32_t t88 = 1814745163U;

	t88 = (((x3973&x3974)<<x3975)*x3976);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x3977 = UINT8_MAX;
	int8_t x3978 = INT8_MIN;
	int16_t x3980 = -1;
	static volatile int32_t t89 = 7;

	t89 = (((x3977&x3978)<<x3979)*x3980);

	if (t89 != -128) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x4021 = -3LL;
	static uint8_t x4022 = UINT8_MAX;
	static int8_t x4024 = INT8_MAX;
	int64_t t90 = 723181568LL;

	t90 = (((x4021&x4022)<<x4023)*x4024);

	if (t90 != 32131LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x4053 = 1U;
	uint8_t x4054 = UINT8_MAX;
	uint16_t x4055 = 2U;
	uint16_t x4056 = 475U;
	static volatile int32_t t91 = 0;

	t91 = (((x4053&x4054)<<x4055)*x4056);

	if (t91 != 1900) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x4154 = UINT32_MAX;
	uint32_t x4156 = 14U;
	uint64_t t92 = 212418860817531LLU;

	t92 = (((x4153&x4154)<<x4155)*x4156);

	if (t92 != 38030317024LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x4173 = INT16_MIN;
	volatile uint16_t x4174 = 3090U;
	uint16_t x4175 = 29U;
	int8_t x4176 = 0;

	t93 = (((x4173&x4174)<<x4175)*x4176);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x4182 = 3U;
	uint8_t x4183 = 0U;
	static uint32_t x4184 = UINT32_MAX;

	t94 = (((x4181&x4182)<<x4183)*x4184);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x4253 = INT8_MIN;
	uint32_t x4254 = 3534U;
	uint32_t x4255 = 0U;
	int16_t x4256 = -1;

	t95 = (((x4253&x4254)<<x4255)*x4256);

	if (t95 != 4294963840U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x4265 = INT64_MIN;
	int32_t x4266 = 843;
	static uint32_t x4267 = 1U;
	static int32_t x4268 = INT32_MIN;
	volatile int64_t t96 = 124004795983LL;

	t96 = (((x4265&x4266)<<x4267)*x4268);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x4273 = -1LL;
	static volatile int32_t x4274 = 96232;
	volatile uint16_t x4275 = 8U;
	static uint8_t x4276 = UINT8_MAX;
	static int64_t t97 = 3966002LL;

	t97 = (((x4273&x4274)<<x4275)*x4276);

	if (t97 != 6282024960LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x4353 = UINT64_MAX;
	static int32_t x4354 = -10787;
	int16_t x4355 = 3;
	static int8_t x4356 = INT8_MAX;
	uint64_t t98 = 70787796481379935LLU;

	t98 = (((x4353&x4354)<<x4355)*x4356);

	if (t98 != 18446744073698592024LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x4366 = UINT16_MAX;
	static uint32_t x4367 = 7U;
	volatile int8_t x4368 = INT8_MIN;
	static int32_t t99 = 12;

	t99 = (((x4365&x4366)<<x4367)*x4368);

	if (t99 != -1073725440) { NG(); } else { ; }
	
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


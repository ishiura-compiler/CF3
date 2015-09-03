#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = INT8_MIN;
uint16_t x54 = UINT16_MAX;
volatile uint8_t x55 = 18U;
static int16_t x87 = 0;
volatile int32_t x128 = -243;
volatile int32_t t4 = -1356;
static int16_t x183 = 7;
int64_t x292 = INT64_MIN;
uint64_t x434 = 3701365924116019LLU;
int64_t x436 = -18470720444LL;
static int16_t x780 = -2;
static int32_t t14 = -14038133;
int32_t x858 = INT32_MAX;
uint16_t x873 = 6U;
static uint32_t x949 = 68259511U;
uint8_t x950 = 21U;
int32_t x952 = INT32_MIN;
int16_t x964 = 17;
int32_t x1151 = 0;
volatile int32_t t20 = -885839067;
static uint16_t x1231 = 15U;
int32_t x1453 = INT32_MAX;
uint64_t x1456 = 257180577LLU;
static int8_t x1525 = -21;
volatile uint64_t x1527 = 1LLU;
int64_t x1585 = 7921375583139833LL;
static int32_t t30 = 0;
volatile uint32_t x1798 = 1278U;
static int8_t x1853 = INT8_MIN;
int8_t x1863 = 1;
volatile int8_t x2146 = INT8_MAX;
volatile int64_t x2228 = -3743LL;
uint8_t x2277 = 1U;
uint32_t x2278 = UINT32_MAX;
volatile int8_t x2279 = 1;
volatile int16_t x2280 = INT16_MIN;
uint16_t x2329 = 181U;
static int32_t t44 = -2109825;
int32_t x2381 = -1;
uint8_t x2384 = 1U;
int8_t x2426 = INT8_MAX;
int8_t x2427 = 0;
int32_t t48 = 1870646;
uint16_t x2529 = UINT16_MAX;
volatile int32_t x2532 = -1;
static volatile int32_t t51 = -622676;
volatile uint16_t x2783 = 14U;
static int64_t x2784 = -1LL;
static int32_t t53 = 1;
volatile int32_t t54 = 651284;
uint8_t x3101 = UINT8_MAX;
uint64_t x3102 = UINT64_MAX;
int32_t x3198 = INT32_MAX;
uint16_t x3200 = 1514U;
volatile int32_t t60 = -38;
uint16_t x3233 = 2543U;
int32_t x3234 = 972140;
static int16_t x3252 = 10;
int32_t t65 = 0;
static int8_t x3364 = INT8_MAX;
volatile int64_t x3389 = INT64_MIN;
int32_t t69 = -38435193;
uint8_t x3611 = 4U;
int8_t x3612 = INT8_MAX;
int16_t x3640 = INT16_MIN;
uint16_t x3721 = UINT16_MAX;
static uint8_t x3821 = 6U;
int32_t x3822 = 141;
int8_t x3833 = -23;
static volatile int32_t t75 = -511682958;
int8_t x3977 = INT8_MAX;
int32_t t76 = -72373;
int64_t x4166 = 161176533970288536LL;
int64_t x4249 = 30187943572808LL;
volatile uint16_t x4250 = UINT16_MAX;
static int16_t x4252 = -1;
static int32_t t82 = 195;
static int32_t x4311 = 1;
volatile uint32_t x4438 = 1220U;
volatile int8_t x4504 = INT8_MAX;
static volatile int16_t x4521 = INT16_MIN;
int32_t x4523 = 9;
static volatile int8_t x4524 = -1;
volatile int32_t t87 = -1;
volatile int8_t x4749 = INT8_MIN;
static int64_t x4846 = 234235366522575171LL;
int32_t x4894 = INT32_MAX;
uint16_t x4895 = 0U;
uint8_t x4902 = 36U;
static volatile int16_t x4904 = INT16_MAX;
static int32_t t91 = -3834023;
static int32_t x5114 = 42022;
int32_t t92 = 12;
uint64_t x5217 = 6262941938265891LLU;
uint8_t x5327 = 1U;
int32_t x5328 = INT32_MAX;
uint8_t x5381 = 0U;
int16_t x5382 = 0;
static volatile int32_t t99 = -883595;


void f0(void) {
	static volatile int64_t x1 = INT64_MIN;
	int64_t x2 = INT64_MAX;
	volatile uint16_t x3 = 4U;
	int32_t t0 = 422735;

	t0 = (x1<((x2>>x3)<=x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x53 = INT32_MIN;
	volatile uint16_t x56 = 3U;
	volatile int32_t t1 = 10;

	t1 = (x53<((x54>>x55)<=x56));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x77 = UINT16_MAX;
	volatile int8_t x78 = INT8_MAX;
	static uint16_t x79 = 3U;
	uint64_t x80 = 2LLU;
	static volatile int32_t t2 = -37496;

	t2 = (x77<((x78>>x79)<=x80));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x85 = 23;
	volatile int32_t x86 = 1302614;
	int8_t x88 = INT8_MIN;
	volatile int32_t t3 = -16;

	t3 = (x85<((x86>>x87)<=x88));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint8_t x125 = 2U;
	uint64_t x126 = 129366500257304LLU;
	uint16_t x127 = 45U;

	t4 = (x125<((x126>>x127)<=x128));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x181 = -1;
	uint16_t x182 = UINT16_MAX;
	static uint8_t x184 = 2U;
	volatile int32_t t5 = 2474950;

	t5 = (x181<((x182>>x183)<=x184));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x189 = 2U;
	static uint8_t x190 = 103U;
	uint8_t x191 = 1U;
	static int64_t x192 = INT64_MIN;
	int32_t t6 = 10;

	t6 = (x189<((x190>>x191)<=x192));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x253 = UINT16_MAX;
	volatile uint16_t x254 = UINT16_MAX;
	volatile int8_t x255 = 8;
	uint64_t x256 = UINT64_MAX;
	int32_t t7 = -13;

	t7 = (x253<((x254>>x255)<=x256));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x265 = INT8_MIN;
	uint8_t x266 = 1U;
	uint8_t x267 = 1U;
	int16_t x268 = -8143;
	int32_t t8 = 99;

	t8 = (x265<((x266>>x267)<=x268));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x289 = INT16_MAX;
	uint16_t x290 = UINT16_MAX;
	volatile int8_t x291 = 1;
	volatile int32_t t9 = 97793787;

	t9 = (x289<((x290>>x291)<=x292));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x433 = 0;
	int8_t x435 = 1;
	static int32_t t10 = -14852008;

	t10 = (x433<((x434>>x435)<=x436));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x469 = 16;
	static int64_t x470 = INT64_MAX;
	uint8_t x471 = 8U;
	int8_t x472 = -1;
	int32_t t11 = -51313;

	t11 = (x469<((x470>>x471)<=x472));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x613 = UINT32_MAX;
	static volatile int8_t x614 = INT8_MAX;
	static int8_t x615 = 13;
	int16_t x616 = INT16_MIN;
	int32_t t12 = 6089;

	t12 = (x613<((x614>>x615)<=x616));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x701 = INT8_MAX;
	uint16_t x702 = 538U;
	int8_t x703 = 0;
	int64_t x704 = 7LL;
	int32_t t13 = 34;

	t13 = (x701<((x702>>x703)<=x704));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x777 = INT32_MIN;
	static volatile uint64_t x778 = UINT64_MAX;
	int16_t x779 = 15;

	t14 = (x777<((x778>>x779)<=x780));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x857 = INT8_MAX;
	int32_t x859 = 0;
	volatile uint8_t x860 = UINT8_MAX;
	int32_t t15 = 54399183;

	t15 = (x857<((x858>>x859)<=x860));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x874 = 59633103U;
	volatile uint32_t x875 = 3U;
	uint32_t x876 = 3953U;
	int32_t t16 = -75;

	t16 = (x873<((x874>>x875)<=x876));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x951 = 25U;
	int32_t t17 = 857;

	t17 = (x949<((x950>>x951)<=x952));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x961 = INT64_MIN;
	uint16_t x962 = 0U;
	volatile int16_t x963 = 5;
	volatile int32_t t18 = 1481;

	t18 = (x961<((x962>>x963)<=x964));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x969 = INT8_MIN;
	uint64_t x970 = 357LLU;
	static int16_t x971 = 1;
	uint16_t x972 = 10116U;
	volatile int32_t t19 = 12061365;

	t19 = (x969<((x970>>x971)<=x972));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x1149 = 167121743;
	uint16_t x1150 = 3182U;
	int32_t x1152 = -1;

	t20 = (x1149<((x1150>>x1151)<=x1152));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1229 = INT32_MAX;
	volatile int32_t x1230 = INT32_MAX;
	uint64_t x1232 = 45489071LLU;
	static int32_t t21 = -8;

	t21 = (x1229<((x1230>>x1231)<=x1232));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1265 = INT16_MAX;
	int8_t x1266 = 0;
	uint16_t x1267 = 1U;
	int8_t x1268 = -1;
	int32_t t22 = -1233;

	t22 = (x1265<((x1266>>x1267)<=x1268));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x1333 = UINT32_MAX;
	uint8_t x1334 = 115U;
	uint8_t x1335 = 1U;
	volatile uint64_t x1336 = 25430027261253964LLU;
	static volatile int32_t t23 = -829;

	t23 = (x1333<((x1334>>x1335)<=x1336));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x1345 = INT8_MAX;
	volatile uint16_t x1346 = 120U;
	int16_t x1347 = 0;
	int64_t x1348 = -1LL;
	static int32_t t24 = 47132906;

	t24 = (x1345<((x1346>>x1347)<=x1348));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x1454 = UINT32_MAX;
	static volatile uint32_t x1455 = 5U;
	int32_t t25 = 1;

	t25 = (x1453<((x1454>>x1455)<=x1456));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x1457 = 2897;
	uint8_t x1458 = 3U;
	uint16_t x1459 = 0U;
	int32_t x1460 = INT32_MIN;
	volatile int32_t t26 = 0;

	t26 = (x1457<((x1458>>x1459)<=x1460));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x1526 = UINT32_MAX;
	int8_t x1528 = INT8_MAX;
	volatile int32_t t27 = -763;

	t27 = (x1525<((x1526>>x1527)<=x1528));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x1577 = UINT64_MAX;
	static uint32_t x1578 = 11140639U;
	uint8_t x1579 = 7U;
	static int64_t x1580 = INT64_MIN;
	volatile int32_t t28 = 57336146;

	t28 = (x1577<((x1578>>x1579)<=x1580));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1586 = 33250400101953LLU;
	uint8_t x1587 = 0U;
	volatile uint8_t x1588 = 11U;
	int32_t t29 = 183593;

	t29 = (x1585<((x1586>>x1587)<=x1588));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1673 = INT64_MIN;
	static uint16_t x1674 = 2U;
	uint16_t x1675 = 0U;
	static uint64_t x1676 = 8703034408444176156LLU;

	t30 = (x1673<((x1674>>x1675)<=x1676));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1681 = INT8_MAX;
	int8_t x1682 = INT8_MAX;
	uint16_t x1683 = 4U;
	int32_t x1684 = INT32_MIN;
	volatile int32_t t31 = 969;

	t31 = (x1681<((x1682>>x1683)<=x1684));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1733 = -1;
	int8_t x1734 = INT8_MAX;
	uint8_t x1735 = 0U;
	int8_t x1736 = INT8_MIN;
	volatile int32_t t32 = -25419333;

	t32 = (x1733<((x1734>>x1735)<=x1736));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x1741 = -1;
	int8_t x1742 = 0;
	uint8_t x1743 = 10U;
	uint64_t x1744 = 1149LLU;
	int32_t t33 = -202997286;

	t33 = (x1741<((x1742>>x1743)<=x1744));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1757 = -1;
	volatile int8_t x1758 = INT8_MAX;
	uint16_t x1759 = 2U;
	static int8_t x1760 = -1;
	volatile int32_t t34 = 0;

	t34 = (x1757<((x1758>>x1759)<=x1760));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x1761 = UINT64_MAX;
	uint64_t x1762 = 129719LLU;
	static uint16_t x1763 = 20U;
	uint64_t x1764 = UINT64_MAX;
	volatile int32_t t35 = -15821228;

	t35 = (x1761<((x1762>>x1763)<=x1764));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1797 = INT8_MIN;
	int16_t x1799 = 13;
	static int8_t x1800 = 41;
	static int32_t t36 = 1035175;

	t36 = (x1797<((x1798>>x1799)<=x1800));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1854 = 33;
	uint64_t x1855 = 14LLU;
	static int8_t x1856 = INT8_MAX;
	int32_t t37 = 49078730;

	t37 = (x1853<((x1854>>x1855)<=x1856));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x1861 = 3609;
	int32_t x1862 = INT32_MAX;
	int32_t x1864 = 0;
	volatile int32_t t38 = 1;

	t38 = (x1861<((x1862>>x1863)<=x1864));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x2049 = INT16_MAX;
	uint64_t x2050 = 1012729347950LLU;
	uint8_t x2051 = 32U;
	int8_t x2052 = INT8_MIN;
	volatile int32_t t39 = -1;

	t39 = (x2049<((x2050>>x2051)<=x2052));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x2145 = 2069184845U;
	uint16_t x2147 = 1U;
	static int32_t x2148 = 1;
	static volatile int32_t t40 = -3;

	t40 = (x2145<((x2146>>x2147)<=x2148));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x2225 = 3966U;
	uint16_t x2226 = UINT16_MAX;
	static int8_t x2227 = 3;
	int32_t t41 = 48;

	t41 = (x2225<((x2226>>x2227)<=x2228));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t t42 = 3607;

	t42 = (x2277<((x2278>>x2279)<=x2280));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x2301 = UINT64_MAX;
	int16_t x2302 = 2543;
	uint8_t x2303 = 23U;
	static uint32_t x2304 = UINT32_MAX;
	int32_t t43 = 905835;

	t43 = (x2301<((x2302>>x2303)<=x2304));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint64_t x2330 = 111171465661LLU;
	static uint16_t x2331 = 2U;
	int8_t x2332 = 0;

	t44 = (x2329<((x2330>>x2331)<=x2332));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x2382 = 142523815556LLU;
	uint32_t x2383 = 3U;
	volatile int32_t t45 = -532717990;

	t45 = (x2381<((x2382>>x2383)<=x2384));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2425 = -2;
	uint8_t x2428 = 7U;
	static volatile int32_t t46 = -45817;

	t46 = (x2425<((x2426>>x2427)<=x2428));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x2449 = -1;
	int8_t x2450 = 6;
	uint8_t x2451 = 4U;
	static int64_t x2452 = 64187936LL;
	volatile int32_t t47 = 6416432;

	t47 = (x2449<((x2450>>x2451)<=x2452));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x2493 = INT64_MIN;
	uint16_t x2494 = 2814U;
	uint16_t x2495 = 1U;
	uint64_t x2496 = 3918013664731LLU;

	t48 = (x2493<((x2494>>x2495)<=x2496));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x2509 = 120LLU;
	uint32_t x2510 = 15420600U;
	int32_t x2511 = 1;
	int16_t x2512 = INT16_MIN;
	static int32_t t49 = -129727003;

	t49 = (x2509<((x2510>>x2511)<=x2512));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x2530 = INT16_MAX;
	uint64_t x2531 = 4LLU;
	static int32_t t50 = 0;

	t50 = (x2529<((x2530>>x2531)<=x2532));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x2737 = -9590LL;
	int16_t x2738 = 89;
	int8_t x2739 = 1;
	static uint32_t x2740 = 370U;

	t51 = (x2737<((x2738>>x2739)<=x2740));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x2781 = INT8_MIN;
	int8_t x2782 = 18;
	int32_t t52 = 8;

	t52 = (x2781<((x2782>>x2783)<=x2784));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x2861 = INT8_MIN;
	uint8_t x2862 = 5U;
	uint32_t x2863 = 8U;
	int16_t x2864 = -1;

	t53 = (x2861<((x2862>>x2863)<=x2864));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x2897 = INT32_MAX;
	int64_t x2898 = INT64_MAX;
	uint8_t x2899 = 2U;
	static uint16_t x2900 = 0U;

	t54 = (x2897<((x2898>>x2899)<=x2900));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x2993 = 1U;
	volatile int16_t x2994 = 0;
	uint32_t x2995 = 3U;
	volatile int16_t x2996 = -1;
	volatile int32_t t55 = -109;

	t55 = (x2993<((x2994>>x2995)<=x2996));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x3021 = 0U;
	uint8_t x3022 = 42U;
	static uint8_t x3023 = 1U;
	static uint32_t x3024 = 602437059U;
	volatile int32_t t56 = 6;

	t56 = (x3021<((x3022>>x3023)<=x3024));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x3089 = INT32_MIN;
	volatile uint32_t x3090 = UINT32_MAX;
	static uint32_t x3091 = 4U;
	int8_t x3092 = INT8_MIN;
	int32_t t57 = 67;

	t57 = (x3089<((x3090>>x3091)<=x3092));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x3103 = 2U;
	int64_t x3104 = INT64_MAX;
	static int32_t t58 = 22;

	t58 = (x3101<((x3102>>x3103)<=x3104));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x3149 = INT32_MIN;
	volatile int16_t x3150 = 36;
	uint16_t x3151 = 0U;
	static volatile int32_t x3152 = -5579969;
	int32_t t59 = 53919;

	t59 = (x3149<((x3150>>x3151)<=x3152));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x3197 = 227;
	volatile uint8_t x3199 = 1U;

	t60 = (x3197<((x3198>>x3199)<=x3200));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x3225 = INT8_MIN;
	int8_t x3226 = INT8_MAX;
	static int8_t x3227 = 2;
	int8_t x3228 = INT8_MIN;
	int32_t t61 = -124385515;

	t61 = (x3225<((x3226>>x3227)<=x3228));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x3235 = 0;
	volatile int8_t x3236 = -8;
	int32_t t62 = -39;

	t62 = (x3233<((x3234>>x3235)<=x3236));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x3249 = INT8_MIN;
	uint16_t x3250 = 21U;
	static volatile int8_t x3251 = 8;
	int32_t t63 = -372650;

	t63 = (x3249<((x3250>>x3251)<=x3252));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x3253 = 14U;
	volatile uint8_t x3254 = UINT8_MAX;
	static volatile uint8_t x3255 = 2U;
	uint32_t x3256 = 46852U;
	static volatile int32_t t64 = -58;

	t64 = (x3253<((x3254>>x3255)<=x3256));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x3313 = 9U;
	int64_t x3314 = 2LL;
	volatile uint64_t x3315 = 32LLU;
	int64_t x3316 = INT64_MIN;

	t65 = (x3313<((x3314>>x3315)<=x3316));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x3361 = INT64_MIN;
	volatile uint16_t x3362 = 2643U;
	int16_t x3363 = 11;
	int32_t t66 = 16126858;

	t66 = (x3361<((x3362>>x3363)<=x3364));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x3390 = 1862U;
	uint8_t x3391 = 9U;
	static int64_t x3392 = INT64_MIN;
	volatile int32_t t67 = 26409;

	t67 = (x3389<((x3390>>x3391)<=x3392));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x3477 = INT32_MIN;
	static uint64_t x3478 = UINT64_MAX;
	uint16_t x3479 = 7U;
	uint8_t x3480 = 1U;
	volatile int32_t t68 = -5186894;

	t68 = (x3477<((x3478>>x3479)<=x3480));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x3537 = -3144;
	uint8_t x3538 = UINT8_MAX;
	static uint16_t x3539 = 2U;
	int64_t x3540 = INT64_MAX;

	t69 = (x3537<((x3538>>x3539)<=x3540));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x3609 = 44213LLU;
	static uint8_t x3610 = 7U;
	volatile int32_t t70 = 5;

	t70 = (x3609<((x3610>>x3611)<=x3612));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x3637 = 381U;
	uint64_t x3638 = 12747LLU;
	uint16_t x3639 = 63U;
	volatile int32_t t71 = 1014;

	t71 = (x3637<((x3638>>x3639)<=x3640));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x3722 = 239U;
	volatile uint16_t x3723 = 9U;
	int32_t x3724 = INT32_MAX;
	int32_t t72 = -21;

	t72 = (x3721<((x3722>>x3723)<=x3724));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x3823 = 1;
	int64_t x3824 = INT64_MIN;
	int32_t t73 = 1038707386;

	t73 = (x3821<((x3822>>x3823)<=x3824));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x3834 = 1140;
	int8_t x3835 = 1;
	int32_t x3836 = INT32_MIN;
	static int32_t t74 = 1483425;

	t74 = (x3833<((x3834>>x3835)<=x3836));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x3953 = -1;
	volatile uint16_t x3954 = UINT16_MAX;
	uint16_t x3955 = 21U;
	volatile uint16_t x3956 = 23584U;

	t75 = (x3953<((x3954>>x3955)<=x3956));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x3978 = 102U;
	static uint8_t x3979 = 0U;
	uint32_t x3980 = UINT32_MAX;

	t76 = (x3977<((x3978>>x3979)<=x3980));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x4133 = INT8_MAX;
	uint16_t x4134 = UINT16_MAX;
	uint8_t x4135 = 30U;
	int8_t x4136 = INT8_MIN;
	volatile int32_t t77 = 11325;

	t77 = (x4133<((x4134>>x4135)<=x4136));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x4165 = 287U;
	static int32_t x4167 = 0;
	volatile uint8_t x4168 = 3U;
	int32_t t78 = -5067;

	t78 = (x4165<((x4166>>x4167)<=x4168));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x4181 = -1;
	static int32_t x4182 = INT32_MAX;
	uint8_t x4183 = 6U;
	uint32_t x4184 = 160915U;
	volatile int32_t t79 = 6298621;

	t79 = (x4181<((x4182>>x4183)<=x4184));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x4185 = 13;
	int16_t x4186 = 12445;
	uint32_t x4187 = 15U;
	int16_t x4188 = -1;
	volatile int32_t t80 = -451261;

	t80 = (x4185<((x4186>>x4187)<=x4188));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x4221 = INT8_MIN;
	uint64_t x4222 = UINT64_MAX;
	volatile int8_t x4223 = 0;
	int8_t x4224 = INT8_MIN;
	volatile int32_t t81 = 1915;

	t81 = (x4221<((x4222>>x4223)<=x4224));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x4251 = 27;

	t82 = (x4249<((x4250>>x4251)<=x4252));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x4309 = INT32_MIN;
	int32_t x4310 = INT32_MAX;
	int64_t x4312 = -1731332624937980487LL;
	int32_t t83 = -96364;

	t83 = (x4309<((x4310>>x4311)<=x4312));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x4437 = INT16_MIN;
	volatile int8_t x4439 = 1;
	int64_t x4440 = INT64_MIN;
	volatile int32_t t84 = 8;

	t84 = (x4437<((x4438>>x4439)<=x4440));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x4501 = -1;
	uint64_t x4502 = 372407354563502590LLU;
	uint8_t x4503 = 61U;
	volatile int32_t t85 = 0;

	t85 = (x4501<((x4502>>x4503)<=x4504));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x4522 = 108;
	int32_t t86 = 208;

	t86 = (x4521<((x4522>>x4523)<=x4524));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x4657 = 9777379526729LLU;
	volatile int64_t x4658 = INT64_MAX;
	uint8_t x4659 = 0U;
	volatile int32_t x4660 = INT32_MIN;

	t87 = (x4657<((x4658>>x4659)<=x4660));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x4750 = 229113280318312386LL;
	uint32_t x4751 = 7U;
	volatile int32_t x4752 = 1801;
	volatile int32_t t88 = -160077;

	t88 = (x4749<((x4750>>x4751)<=x4752));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x4845 = -5745892LL;
	uint8_t x4847 = 0U;
	uint64_t x4848 = 64LLU;
	static int32_t t89 = -39295988;

	t89 = (x4845<((x4846>>x4847)<=x4848));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x4893 = 7737130387LL;
	int32_t x4896 = INT32_MAX;
	volatile int32_t t90 = -796187526;

	t90 = (x4893<((x4894>>x4895)<=x4896));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x4901 = 642U;
	int32_t x4903 = 1;

	t91 = (x4901<((x4902>>x4903)<=x4904));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x5113 = 26662790LLU;
	volatile uint8_t x5115 = 5U;
	static int8_t x5116 = -50;

	t92 = (x5113<((x5114>>x5115)<=x5116));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x5218 = 8;
	uint8_t x5219 = 0U;
	uint64_t x5220 = 6465LLU;
	volatile int32_t t93 = -175579;

	t93 = (x5217<((x5218>>x5219)<=x5220));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x5285 = -1;
	uint32_t x5286 = UINT32_MAX;
	volatile uint8_t x5287 = 7U;
	static int16_t x5288 = INT16_MIN;
	volatile int32_t t94 = 460902;

	t94 = (x5285<((x5286>>x5287)<=x5288));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x5289 = 53;
	uint64_t x5290 = 2260LLU;
	uint8_t x5291 = 28U;
	int8_t x5292 = INT8_MIN;
	int32_t t95 = -19231026;

	t95 = (x5289<((x5290>>x5291)<=x5292));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x5325 = UINT32_MAX;
	volatile uint32_t x5326 = 107651U;
	volatile int32_t t96 = -7;

	t96 = (x5325<((x5326>>x5327)<=x5328));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x5369 = -1;
	uint32_t x5370 = 87062U;
	static uint32_t x5371 = 4U;
	int64_t x5372 = -64194017LL;
	int32_t t97 = -2;

	t97 = (x5369<((x5370>>x5371)<=x5372));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x5383 = 9U;
	int32_t x5384 = -47519691;
	int32_t t98 = -224;

	t98 = (x5381<((x5382>>x5383)<=x5384));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x5409 = INT64_MIN;
	uint64_t x5410 = UINT64_MAX;
	static uint8_t x5411 = 1U;
	static int16_t x5412 = INT16_MIN;

	t99 = (x5409<((x5410>>x5411)<=x5412));

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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x180 = 1U;
int8_t x307 = -1;
uint16_t x308 = 0U;
volatile uint16_t x408 = 51U;
int64_t t2 = -117533131256529LL;
uint8_t x471 = 9U;
uint32_t x472 = 1U;
int64_t t4 = -3855253521LL;
static volatile uint32_t x476 = 0U;
static int64_t t6 = 7846938LL;
static volatile int16_t x485 = INT16_MAX;
uint8_t x489 = 4U;
int8_t x490 = INT8_MAX;
uint8_t x492 = 3U;
int64_t x635 = 2048363LL;
uint32_t x709 = UINT32_MAX;
uint32_t x712 = 9U;
volatile uint32_t t13 = UINT32_MAX;
static uint64_t x901 = 2867080933LLU;
volatile int32_t x946 = -14580570;
uint32_t t17 = 18769696U;
uint64_t t18 = 323074823LLU;
int64_t x1095 = INT64_MIN;
int64_t t19 = -8500852768381761LL;
int64_t x1110 = -1LL;
uint16_t x1111 = 21432U;
uint32_t x1307 = UINT32_MAX;
static uint64_t t21 = 10079432911711LLU;
static uint64_t t22 = 775970874444987LLU;
uint64_t x1473 = 62404373444LLU;
uint32_t x1476 = 3U;
static volatile uint8_t x1637 = 2U;
int32_t x1638 = -251300972;
int32_t x1801 = INT32_MAX;
uint8_t x1804 = 57U;
static uint8_t x1808 = 23U;
uint64_t t31 = 135810306097327LLU;
int64_t x1879 = INT64_MIN;
volatile int32_t x1937 = INT32_MAX;
uint32_t x1938 = 15U;
int32_t x1939 = -1;
uint32_t t33 = 702700029U;
uint32_t x2028 = 2U;
uint64_t t34 = 158842LLU;
uint32_t t36 = 3375568U;
volatile uint16_t x2076 = 61U;
static int64_t t37 = 2LL;
volatile int32_t x2101 = INT32_MIN;
static volatile int8_t x2102 = -1;
volatile uint64_t t38 = 3544343060LLU;
static uint64_t x2113 = 102LLU;
volatile uint64_t t39 = 5418910369LLU;
int64_t x2121 = INT64_MAX;
int16_t x2162 = -1;
uint8_t x2168 = 0U;
uint16_t x2176 = 3U;
static int8_t x2236 = 0;
uint64_t t45 = 43612832038LLU;
uint16_t x2264 = 34U;
volatile uint32_t t48 = 26387036U;
uint8_t x2492 = 0U;
volatile int64_t x2705 = INT64_MIN;
volatile uint64_t t51 = 13513663690606015LLU;
uint16_t x2730 = UINT16_MAX;
uint8_t x2799 = UINT8_MAX;
static int8_t x2800 = 0;
uint8_t x2824 = 0U;
int32_t t55 = -13016;
int64_t x2842 = -50807221242340949LL;
int64_t t56 = -972314125474LL;
uint64_t x2853 = 120887336553156LLU;
int8_t x2909 = -2;
uint16_t x2912 = 6U;
volatile uint64_t t60 = 4441058172830LLU;
volatile uint64_t t61 = 5609502155437LLU;
int16_t x3145 = INT16_MIN;
uint16_t x3147 = 959U;
int16_t x3148 = 25;
int16_t x3172 = 3;
uint64_t x3248 = 6LLU;
volatile int8_t x3312 = 0;
volatile int64_t t69 = -274802009778061LL;
int8_t x3396 = 0;
uint64_t t70 = UINT64_MAX;
volatile int32_t x3410 = INT32_MIN;
int64_t x3412 = 1LL;
uint64_t t71 = 223805216LLU;
volatile int32_t t72 = 32210;
int8_t x3473 = -1;
uint64_t x3474 = 451LLU;
uint64_t t73 = 132099025861LLU;
static uint64_t x3489 = UINT64_MAX;
int8_t x3507 = INT8_MIN;
int64_t t75 = -21486LL;
uint16_t x3576 = 42U;
int32_t x3591 = INT32_MIN;
volatile int16_t x3638 = -1;
uint16_t x3793 = 6299U;
uint8_t x3796 = 11U;
volatile int64_t t82 = 2145026598LL;
int64_t x3937 = INT64_MAX;
uint16_t x4219 = 55U;
uint32_t x4414 = UINT32_MAX;
int16_t x4521 = 3168;
uint64_t x4523 = UINT64_MAX;
static int8_t x4602 = -1;
static int8_t x4619 = INT8_MIN;
volatile uint32_t t98 = 493618U;
int16_t x4624 = 14;


void f0(void) {
	volatile uint16_t x177 = 14U;
	static int64_t x178 = INT64_MAX;
	uint64_t x179 = UINT64_MAX;
	volatile uint64_t t0 = 97083024LLU;

	t0 = ((x177|(x178/x179))>>x180);

	if (t0 != 7LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x305 = 39350622U;
	static uint8_t x306 = 0U;
	static uint32_t t1 = 1533U;

	t1 = ((x305|(x306/x307))>>x308);

	if (t1 != 39350622U) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x405 = INT8_MAX;
	int8_t x406 = -1;
	int64_t x407 = INT64_MIN;

	t2 = ((x405|(x406/x407))>>x408);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x461 = 1U;
	volatile int32_t x462 = -1;
	uint64_t x463 = 3LLU;
	uint8_t x464 = 2U;
	volatile uint64_t t3 = 16622LLU;

	t3 = ((x461|(x462/x463))>>x464);

	if (t3 != 1537228672809129301LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x469 = 83833829LL;
	uint16_t x470 = 1078U;

	t4 = ((x469|(x470/x471))>>x472);

	if (t4 != 41916923LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x473 = 39LLU;
	int8_t x474 = 3;
	volatile int8_t x475 = -1;
	uint64_t t5 = UINT64_MAX;

	t5 = ((x473|(x474/x475))>>x476);

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x477 = 13361;
	volatile int64_t x478 = INT64_MIN;
	static int64_t x479 = -236302693341131174LL;
	int8_t x480 = 3;

	t6 = ((x477|(x478/x479))>>x480);

	if (t6 != 1670LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x486 = UINT16_MAX;
	volatile int64_t x487 = INT64_MIN;
	static int8_t x488 = 2;
	int64_t t7 = 3LL;

	t7 = ((x485|(x486/x487))>>x488);

	if (t7 != 8191LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x491 = INT8_MAX;
	int32_t t8 = -256847245;

	t8 = ((x489|(x490/x491))>>x492);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x497 = 4037;
	int32_t x498 = 368;
	uint16_t x499 = 219U;
	uint32_t x500 = 9U;
	int32_t t9 = 1049842327;

	t9 = ((x497|(x498/x499))>>x500);

	if (t9 != 7) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x601 = UINT32_MAX;
	volatile int32_t x602 = INT32_MIN;
	uint16_t x603 = 639U;
	volatile uint16_t x604 = 1U;
	static uint32_t t10 = 363755U;

	t10 = ((x601|(x602/x603))>>x604);

	if (t10 != 2147483647U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x633 = INT8_MAX;
	uint64_t x634 = UINT64_MAX;
	uint16_t x636 = 5U;
	volatile uint64_t t11 = 2300557332555765779LLU;

	t11 = ((x633|(x634/x635))>>x636);

	if (t11 != 281425095211LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x710 = -192;
	int64_t x711 = -1LL;
	int64_t t12 = 26489129533020604LL;

	t12 = ((x709|(x710/x711))>>x712);

	if (t12 != 8388607LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x829 = -1;
	static int32_t x830 = -358594132;
	uint32_t x831 = UINT32_MAX;
	volatile int8_t x832 = 0;

	t13 = ((x829|(x830/x831))>>x832);

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x857 = INT32_MIN;
	uint64_t x858 = UINT64_MAX;
	int16_t x859 = 1;
	uint8_t x860 = 1U;
	volatile uint64_t t14 = 4299329046529769483LLU;

	t14 = ((x857|(x858/x859))>>x860);

	if (t14 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x902 = INT32_MIN;
	uint32_t x903 = 1483U;
	uint8_t x904 = 1U;
	uint64_t t15 = 14LLU;

	t15 = ((x901|(x902/x903))>>x904);

	if (t15 != 1434132339LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x945 = 10848;
	int32_t x947 = INT32_MAX;
	uint64_t x948 = 0LLU;
	int32_t t16 = -554741;

	t16 = ((x945|(x946/x947))>>x948);

	if (t16 != 10848) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x989 = 22300459U;
	static volatile uint32_t x990 = UINT32_MAX;
	volatile int8_t x991 = 3;
	uint8_t x992 = 10U;

	t17 = ((x989|(x990/x991))>>x992);

	if (t17 != 1398101U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1017 = INT16_MIN;
	uint64_t x1018 = UINT64_MAX;
	int8_t x1019 = 1;
	static int32_t x1020 = 37;

	t18 = ((x1017|(x1018/x1019))>>x1020);

	if (t18 != 134217727LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x1093 = INT64_MAX;
	int16_t x1094 = INT16_MIN;
	uint8_t x1096 = 2U;

	t19 = ((x1093|(x1094/x1095))>>x1096);

	if (t19 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x1109 = INT8_MAX;
	uint32_t x1112 = 0U;
	static volatile int64_t t20 = -2754201LL;

	t20 = ((x1109|(x1110/x1111))>>x1112);

	if (t20 != 127LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x1305 = 11254696LL;
	uint64_t x1306 = 37975352735236424LLU;
	static volatile uint8_t x1308 = 1U;

	t21 = ((x1305|(x1306/x1307))>>x1308);

	if (t21 != 5766644LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1325 = -1;
	uint64_t x1326 = 1LLU;
	int32_t x1327 = -2;
	uint8_t x1328 = 34U;

	t22 = ((x1325|(x1326/x1327))>>x1328);

	if (t22 != 1073741823LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1349 = 1493;
	static int16_t x1350 = -7;
	static volatile int8_t x1351 = INT8_MIN;
	volatile uint8_t x1352 = 1U;
	static int32_t t23 = 848;

	t23 = ((x1349|(x1350/x1351))>>x1352);

	if (t23 != 746) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1474 = INT8_MAX;
	int32_t x1475 = 144;
	uint64_t t24 = 1750LLU;

	t24 = ((x1473|(x1474/x1475))>>x1476);

	if (t24 != 7800546680LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x1481 = INT16_MAX;
	static int16_t x1482 = -1840;
	uint64_t x1483 = 5975865LLU;
	int16_t x1484 = 1;
	volatile uint64_t t25 = 37497855652LLU;

	t25 = ((x1481|(x1482/x1483))>>x1484);

	if (t25 != 1543437156351LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1577 = -1;
	int8_t x1578 = INT8_MAX;
	uint32_t x1579 = UINT32_MAX;
	static uint8_t x1580 = 0U;
	volatile uint32_t t26 = UINT32_MAX;

	t26 = ((x1577|(x1578/x1579))>>x1580);

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1633 = -3108LL;
	volatile int32_t x1634 = INT32_MIN;
	uint64_t x1635 = 4783734641LLU;
	volatile uint8_t x1636 = 3U;
	uint64_t t27 = 975736799418607688LLU;

	t27 = ((x1633|(x1634/x1635))>>x1636);

	if (t27 != 2305843009213693567LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x1639 = INT32_MIN;
	static uint16_t x1640 = 0U;
	volatile int32_t t28 = -12;

	t28 = ((x1637|(x1638/x1639))>>x1640);

	if (t28 != 2) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1753 = INT32_MIN;
	uint64_t x1754 = 143443055943LLU;
	volatile uint64_t x1755 = 21205277377042944LLU;
	uint32_t x1756 = 45U;
	volatile uint64_t t29 = 7102749022306910LLU;

	t29 = ((x1753|(x1754/x1755))>>x1756);

	if (t29 != 524287LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1802 = -112419934702207LL;
	static int64_t x1803 = -15867673259410LL;
	int64_t t30 = -125313808704230552LL;

	t30 = ((x1801|(x1802/x1803))>>x1804);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1805 = 9LLU;
	int64_t x1806 = INT64_MIN;
	int64_t x1807 = 57074LL;

	t31 = ((x1805|(x1806/x1807))>>x1808);

	if (t31 != 2199003990884LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1877 = 15;
	static volatile int64_t x1878 = -1LL;
	int8_t x1880 = 0;
	int64_t t32 = -11LL;

	t32 = ((x1877|(x1878/x1879))>>x1880);

	if (t32 != 15LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x1940 = 15U;

	t33 = ((x1937|(x1938/x1939))>>x1940);

	if (t33 != 65535U) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x2025 = INT8_MIN;
	volatile uint64_t x2026 = 75858597909019LLU;
	volatile int64_t x2027 = INT64_MIN;

	t34 = ((x2025|(x2026/x2027))>>x2028);

	if (t34 != 4611686018427387872LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x2045 = 4346LLU;
	volatile int8_t x2046 = -1;
	int32_t x2047 = INT32_MIN;
	uint8_t x2048 = 1U;
	uint64_t t35 = 633600674LLU;

	t35 = ((x2045|(x2046/x2047))>>x2048);

	if (t35 != 2173LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x2053 = 52U;
	volatile int32_t x2054 = -643;
	volatile int16_t x2055 = INT16_MIN;
	int16_t x2056 = 0;

	t36 = ((x2053|(x2054/x2055))>>x2056);

	if (t36 != 52U) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x2073 = 609U;
	static uint32_t x2074 = 326052U;
	int64_t x2075 = 7LL;

	t37 = ((x2073|(x2074/x2075))>>x2076);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x2103 = UINT64_MAX;
	static uint8_t x2104 = 12U;

	t38 = ((x2101|(x2102/x2103))>>x2104);

	if (t38 != 4503599626846208LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x2114 = -1;
	static int32_t x2115 = INT32_MIN;
	uint32_t x2116 = 38U;

	t39 = ((x2113|(x2114/x2115))>>x2116);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x2122 = 58;
	volatile uint8_t x2123 = 87U;
	int16_t x2124 = 0;
	static int64_t t40 = INT64_MAX;

	t40 = ((x2121|(x2122/x2123))>>x2124);

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x2161 = -1LL;
	static uint64_t x2163 = 2LLU;
	static uint32_t x2164 = 1U;
	volatile uint64_t t41 = 406113701LLU;

	t41 = ((x2161|(x2162/x2163))>>x2164);

	if (t41 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x2165 = UINT16_MAX;
	int8_t x2166 = -1;
	volatile int16_t x2167 = -2;
	volatile int32_t t42 = -23979731;

	t42 = ((x2165|(x2166/x2167))>>x2168);

	if (t42 != 65535) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2173 = INT64_MAX;
	volatile int8_t x2174 = INT8_MIN;
	uint64_t x2175 = UINT64_MAX;
	volatile uint64_t t43 = 1933479LLU;

	t43 = ((x2173|(x2174/x2175))>>x2176);

	if (t43 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x2225 = INT32_MIN;
	uint64_t x2226 = 3368LLU;
	uint16_t x2227 = 14376U;
	int8_t x2228 = 3;
	uint64_t t44 = 119LLU;

	t44 = ((x2225|(x2226/x2227))>>x2228);

	if (t44 != 2305843008945258496LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x2233 = INT16_MAX;
	static int32_t x2234 = INT32_MIN;
	static uint64_t x2235 = UINT64_MAX;

	t45 = ((x2233|(x2234/x2235))>>x2236);

	if (t45 != 32767LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x2245 = INT8_MAX;
	volatile int8_t x2246 = -1;
	int32_t x2247 = -995989;
	static uint8_t x2248 = 3U;
	volatile int32_t t46 = -3;

	t46 = ((x2245|(x2246/x2247))>>x2248);

	if (t46 != 15) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x2261 = INT8_MAX;
	volatile int64_t x2262 = -1LL;
	int64_t x2263 = INT64_MIN;
	static int64_t t47 = -243LL;

	t47 = ((x2261|(x2262/x2263))>>x2264);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x2341 = INT32_MIN;
	volatile uint32_t x2342 = 168U;
	uint8_t x2343 = 3U;
	static uint8_t x2344 = 9U;

	t48 = ((x2341|(x2342/x2343))>>x2344);

	if (t48 != 4194304U) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x2489 = 0;
	static int64_t x2490 = 27098861325967291LL;
	uint8_t x2491 = 7U;
	volatile int64_t t49 = 1397387140LL;

	t49 = ((x2489|(x2490/x2491))>>x2492);

	if (t49 != 3871265903709613LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x2661 = 106U;
	uint64_t x2662 = 0LLU;
	uint64_t x2663 = 8891459LLU;
	int8_t x2664 = 5;
	static uint64_t t50 = 4680526730LLU;

	t50 = ((x2661|(x2662/x2663))>>x2664);

	if (t50 != 3LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x2706 = 3401950093150523LLU;
	int32_t x2707 = -840976;
	uint8_t x2708 = 0U;

	t51 = ((x2705|(x2706/x2707))>>x2708);

	if (t51 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x2729 = 0;
	static uint32_t x2731 = 19208U;
	int32_t x2732 = 2;
	static volatile uint32_t t52 = 867792U;

	t52 = ((x2729|(x2730/x2731))>>x2732);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x2797 = 0U;
	uint16_t x2798 = 2100U;
	static volatile int32_t t53 = -212;

	t53 = ((x2797|(x2798/x2799))>>x2800);

	if (t53 != 8) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x2801 = 50309373976LL;
	static int8_t x2802 = INT8_MIN;
	int8_t x2803 = INT8_MIN;
	int16_t x2804 = 1;
	volatile int64_t t54 = 39623418952LL;

	t54 = ((x2801|(x2802/x2803))>>x2804);

	if (t54 != 25154686988LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x2821 = 5849;
	int16_t x2822 = INT16_MIN;
	int32_t x2823 = INT32_MAX;

	t55 = ((x2821|(x2822/x2823))>>x2824);

	if (t55 != 5849) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x2841 = INT8_MAX;
	static int8_t x2843 = INT8_MIN;
	int8_t x2844 = 18;

	t56 = ((x2841|(x2842/x2843))>>x2844);

	if (t56 != 1514173187LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x2849 = INT16_MAX;
	int32_t x2850 = INT32_MAX;
	uint8_t x2851 = UINT8_MAX;
	int16_t x2852 = 16;
	volatile int32_t t57 = -3596870;

	t57 = ((x2849|(x2850/x2851))>>x2852);

	if (t57 != 128) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x2854 = INT64_MAX;
	int64_t x2855 = INT64_MIN;
	uint16_t x2856 = 7U;
	volatile uint64_t t58 = 0LLU;

	t58 = ((x2853|(x2854/x2855))>>x2856);

	if (t58 != 944432316821LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x2910 = 7449714U;
	int32_t x2911 = -1;
	static volatile uint32_t t59 = 56139U;

	t59 = ((x2909|(x2910/x2911))>>x2912);

	if (t59 != 67108863U) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x2921 = 4659573324752LLU;
	uint64_t x2922 = 4285507843833472LLU;
	int32_t x2923 = INT32_MIN;
	static volatile int32_t x2924 = 13;

	t60 = ((x2921|(x2922/x2923))>>x2924);

	if (t60 != 568795571LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x2977 = 50223702271468LLU;
	volatile uint8_t x2978 = 26U;
	int64_t x2979 = INT64_MAX;
	static uint16_t x2980 = 1U;

	t61 = ((x2977|(x2978/x2979))>>x2980);

	if (t61 != 25111851135734LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x3053 = 2763LLU;
	static uint64_t x3054 = UINT64_MAX;
	int64_t x3055 = -1LL;
	int8_t x3056 = 0;
	uint64_t t62 = 2093136298605595LLU;

	t62 = ((x3053|(x3054/x3055))>>x3056);

	if (t62 != 2763LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x3073 = 0;
	int32_t x3074 = -1;
	static int32_t x3075 = INT32_MIN;
	volatile int32_t x3076 = 7;
	volatile int32_t t63 = 6586;

	t63 = ((x3073|(x3074/x3075))>>x3076);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x3146 = 425U;
	volatile uint32_t t64 = 209570675U;

	t64 = ((x3145|(x3146/x3147))>>x3148);

	if (t64 != 127U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x3169 = 29557616167LL;
	int16_t x3170 = -838;
	uint64_t x3171 = 129LLU;
	static volatile uint64_t t65 = 534832245LLU;

	t65 = ((x3169|(x3170/x3171))>>x3172);

	if (t65 != 17874755700436959LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x3181 = UINT32_MAX;
	int16_t x3182 = -43;
	uint32_t x3183 = 186353U;
	int16_t x3184 = 0;
	static volatile uint32_t t66 = UINT32_MAX;

	t66 = ((x3181|(x3182/x3183))>>x3184);

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x3245 = 13U;
	int64_t x3246 = -1LL;
	int64_t x3247 = INT64_MAX;
	int64_t t67 = 3146972902LL;

	t67 = ((x3245|(x3246/x3247))>>x3248);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x3309 = 687100700;
	int8_t x3310 = -1;
	int8_t x3311 = INT8_MIN;
	int32_t t68 = 5092944;

	t68 = ((x3309|(x3310/x3311))>>x3312);

	if (t68 != 687100700) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x3365 = INT64_MAX;
	static uint8_t x3366 = 4U;
	uint32_t x3367 = 224085344U;
	volatile int8_t x3368 = 13;

	t69 = ((x3365|(x3366/x3367))>>x3368);

	if (t69 != 1125899906842623LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x3393 = -1LL;
	int64_t x3394 = INT64_MIN;
	volatile uint64_t x3395 = 382113791613LLU;

	t70 = ((x3393|(x3394/x3395))>>x3396);

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x3409 = 9U;
	uint64_t x3411 = UINT64_MAX;

	t71 = ((x3409|(x3410/x3411))>>x3412);

	if (t71 != 4LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x3441 = INT16_MAX;
	uint16_t x3442 = UINT16_MAX;
	volatile int32_t x3443 = INT32_MIN;
	static volatile int16_t x3444 = 3;

	t72 = ((x3441|(x3442/x3443))>>x3444);

	if (t72 != 4095) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x3475 = INT16_MAX;
	uint8_t x3476 = 42U;

	t73 = ((x3473|(x3474/x3475))>>x3476);

	if (t73 != 4194303LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x3490 = INT32_MIN;
	int32_t x3491 = INT32_MAX;
	uint32_t x3492 = 19U;
	static volatile uint64_t t74 = 460793929938646LLU;

	t74 = ((x3489|(x3490/x3491))>>x3492);

	if (t74 != 35184372088831LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x3505 = INT64_MAX;
	int64_t x3506 = -1LL;
	int16_t x3508 = 63;

	t75 = ((x3505|(x3506/x3507))>>x3508);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x3517 = INT32_MIN;
	uint8_t x3518 = UINT8_MAX;
	static volatile uint64_t x3519 = 948495680497884345LLU;
	static int8_t x3520 = 1;
	volatile uint64_t t76 = 3706784677217123100LLU;

	t76 = ((x3517|(x3518/x3519))>>x3520);

	if (t76 != 9223372035781033984LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x3573 = INT64_MIN;
	int32_t x3574 = -1;
	uint64_t x3575 = UINT64_MAX;
	static uint64_t t77 = 783035830601397652LLU;

	t77 = ((x3573|(x3574/x3575))>>x3576);

	if (t77 != 2097152LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x3589 = 49817731072763LLU;
	int8_t x3590 = -1;
	uint8_t x3592 = 1U;
	volatile uint64_t t78 = 6675451162LLU;

	t78 = ((x3589|(x3590/x3591))>>x3592);

	if (t78 != 24908865536381LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x3605 = INT8_MIN;
	int8_t x3606 = INT8_MAX;
	uint64_t x3607 = 2288181LLU;
	static uint8_t x3608 = 51U;
	uint64_t t79 = 223LLU;

	t79 = ((x3605|(x3606/x3607))>>x3608);

	if (t79 != 8191LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x3637 = INT8_MAX;
	static int64_t x3639 = INT64_MIN;
	static uint8_t x3640 = 3U;
	static int64_t t80 = 32649918701598LL;

	t80 = ((x3637|(x3638/x3639))>>x3640);

	if (t80 != 15LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x3657 = 6608U;
	uint32_t x3658 = 35054455U;
	int8_t x3659 = -1;
	int64_t x3660 = 18LL;
	volatile uint32_t t81 = 35103U;

	t81 = ((x3657|(x3658/x3659))>>x3660);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x3794 = UINT16_MAX;
	int64_t x3795 = 5833617602781LL;

	t82 = ((x3793|(x3794/x3795))>>x3796);

	if (t82 != 3LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x3849 = INT32_MAX;
	static volatile int64_t x3850 = INT64_MAX;
	int32_t x3851 = INT32_MAX;
	uint32_t x3852 = 0U;
	volatile int64_t t83 = -599613601LL;

	t83 = ((x3849|(x3850/x3851))>>x3852);

	if (t83 != 6442450943LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x3877 = 1U;
	volatile int8_t x3878 = INT8_MIN;
	volatile int16_t x3879 = INT16_MAX;
	int32_t x3880 = 26;
	static int32_t t84 = -7;

	t84 = ((x3877|(x3878/x3879))>>x3880);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x3938 = 11635573U;
	static uint64_t x3939 = UINT64_MAX;
	static volatile int8_t x3940 = 28;
	volatile uint64_t t85 = 706400343883405250LLU;

	t85 = ((x3937|(x3938/x3939))>>x3940);

	if (t85 != 34359738367LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int32_t x4045 = -1;
	uint64_t x4046 = 17682947LLU;
	int32_t x4047 = 107355062;
	int8_t x4048 = 1;
	uint64_t t86 = 19LLU;

	t86 = ((x4045|(x4046/x4047))>>x4048);

	if (t86 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x4125 = 0;
	int32_t x4126 = 1642;
	volatile uint64_t x4127 = UINT64_MAX;
	int8_t x4128 = 7;
	volatile uint64_t t87 = 80082LLU;

	t87 = ((x4125|(x4126/x4127))>>x4128);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x4165 = -1LL;
	volatile uint64_t x4166 = 1009485235LLU;
	int8_t x4167 = -4;
	int8_t x4168 = 3;
	static volatile uint64_t t88 = 130661053498145160LLU;

	t88 = ((x4165|(x4166/x4167))>>x4168);

	if (t88 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x4181 = 58U;
	uint64_t x4182 = 7LLU;
	volatile int8_t x4183 = -1;
	volatile uint8_t x4184 = 31U;
	volatile uint64_t t89 = 11559131LLU;

	t89 = ((x4181|(x4182/x4183))>>x4184);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x4197 = 7590;
	static volatile uint64_t x4198 = 15255LLU;
	int16_t x4199 = INT16_MIN;
	uint32_t x4200 = 9U;
	static volatile uint64_t t90 = 269063751741017295LLU;

	t90 = ((x4197|(x4198/x4199))>>x4200);

	if (t90 != 14LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x4217 = -1LL;
	uint64_t x4218 = UINT64_MAX;
	uint8_t x4220 = 1U;
	volatile uint64_t t91 = 98876580393462LLU;

	t91 = ((x4217|(x4218/x4219))>>x4220);

	if (t91 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x4293 = 2801594U;
	uint32_t x4294 = UINT32_MAX;
	int64_t x4295 = INT64_MAX;
	int8_t x4296 = 1;
	int64_t t92 = -3766530890LL;

	t92 = ((x4293|(x4294/x4295))>>x4296);

	if (t92 != 1400797LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x4353 = INT32_MIN;
	uint32_t x4354 = 504295U;
	uint8_t x4355 = 2U;
	uint8_t x4356 = 0U;
	uint32_t t93 = 3987502U;

	t93 = ((x4353|(x4354/x4355))>>x4356);

	if (t93 != 2147735795U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x4405 = 22LLU;
	int16_t x4406 = -1;
	int32_t x4407 = 1;
	volatile uint8_t x4408 = 0U;
	static volatile uint64_t t94 = UINT64_MAX;

	t94 = ((x4405|(x4406/x4407))>>x4408);

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x4413 = -1LL;
	static uint64_t x4415 = 687319721698LLU;
	static int8_t x4416 = 57;
	volatile uint64_t t95 = 1375821397329057LLU;

	t95 = ((x4413|(x4414/x4415))>>x4416);

	if (t95 != 127LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x4522 = INT16_MIN;
	volatile int32_t x4524 = 1;
	volatile uint64_t t96 = 19783608393796291LLU;

	t96 = ((x4521|(x4522/x4523))>>x4524);

	if (t96 != 1584LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x4601 = UINT32_MAX;
	static uint16_t x4603 = 32U;
	int64_t x4604 = 0LL;
	volatile uint32_t t97 = UINT32_MAX;

	t97 = ((x4601|(x4602/x4603))>>x4604);

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x4617 = -1;
	uint32_t x4618 = UINT32_MAX;
	uint16_t x4620 = 15U;

	t98 = ((x4617|(x4618/x4619))>>x4620);

	if (t98 != 131071U) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint64_t x4621 = 318549LLU;
	int64_t x4622 = INT64_MAX;
	int64_t x4623 = 381LL;
	volatile uint64_t t99 = 3895152LLU;

	t99 = ((x4621|(x4622/x4623))>>x4624);

	if (t99 != 1477558932883LLU) { NG(); } else { ; }
	
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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x61 = UINT8_MAX;
int16_t x69 = 241;
int16_t x70 = INT16_MAX;
volatile int8_t x71 = 0;
int64_t x72 = INT64_MAX;
int64_t t2 = INT64_MAX;
uint8_t x199 = 1U;
volatile int32_t x229 = -1;
static int8_t x230 = 0;
int16_t x232 = -3;
int32_t t5 = 603;
uint8_t x275 = 4U;
int64_t t6 = -48707852533LL;
uint64_t x382 = 422828664168LLU;
uint16_t x512 = 1159U;
volatile uint64_t t13 = 24785959120LLU;
volatile uint32_t t14 = 11U;
int64_t x637 = 2255341492876980664LL;
static volatile uint64_t t15 = 22741LLU;
int16_t x643 = 1;
volatile uint64_t t16 = UINT64_MAX;
uint64_t t17 = 1985958207896LLU;
volatile int8_t x661 = -1;
int32_t x666 = 4557281;
int8_t x675 = 12;
volatile int16_t x881 = 6;
uint64_t x882 = 7048659305309348LLU;
int8_t x883 = 1;
uint32_t x884 = 931327U;
volatile int16_t x892 = INT16_MIN;
uint32_t t23 = 417356846U;
uint8_t x1106 = UINT8_MAX;
int8_t x1141 = -1;
static volatile int64_t x1229 = INT64_MIN;
int64_t x1328 = 4413544289972LL;
volatile int8_t x1462 = 9;
int16_t x1463 = 10;
uint32_t x1673 = UINT32_MAX;
static int8_t x1705 = -23;
int32_t t30 = 38141;
int64_t x1814 = 1263907533566992751LL;
static volatile int64_t t31 = -5713438539LL;
volatile int32_t x1817 = 56;
uint16_t x1823 = 27U;
int32_t x1961 = INT32_MIN;
uint16_t x1964 = 0U;
int64_t x2009 = -1LL;
static uint32_t x2012 = UINT32_MAX;
int64_t x2026 = 1257037350941262LL;
volatile uint32_t t40 = 488500677U;
int64_t x2153 = 315LL;
volatile uint16_t x2154 = 3U;
uint8_t x2205 = 60U;
int8_t x2207 = 27;
static uint8_t x2231 = 21U;
static int64_t t43 = -79440958162805LL;
static int8_t x2334 = INT8_MAX;
volatile uint16_t x2365 = 2188U;
static volatile int64_t x2366 = 661439934063196178LL;
int32_t x2408 = -1;
uint8_t x2411 = 28U;
uint32_t x2412 = UINT32_MAX;
uint8_t x2460 = 114U;
int8_t x2555 = 1;
int8_t x2711 = 3;
int8_t x2712 = INT8_MIN;
static uint8_t x2799 = 5U;
volatile int32_t x2800 = INT32_MAX;
volatile int32_t t56 = INT32_MAX;
volatile int16_t x2833 = INT16_MAX;
int16_t x2968 = INT16_MIN;
uint16_t x3034 = UINT16_MAX;
int8_t x3044 = INT8_MAX;
static int64_t x3117 = INT64_MIN;
volatile int64_t x3348 = INT64_MAX;
uint16_t x3389 = UINT16_MAX;
static volatile int8_t x3647 = 24;
int16_t x3648 = INT16_MAX;
volatile uint8_t x3997 = UINT8_MAX;
static volatile int8_t x3999 = 0;
volatile int16_t x4000 = 92;
uint16_t x4244 = UINT16_MAX;
uint16_t x4286 = 14U;
volatile int8_t x4363 = 13;
int32_t x4529 = INT32_MIN;
int8_t x4567 = 1;
uint8_t x4666 = UINT8_MAX;
static int16_t x4668 = 3;
int32_t t79 = -72;
volatile int64_t t81 = 3344LL;
volatile int64_t t82 = INT64_MAX;
volatile uint16_t x4798 = 32U;
uint8_t x4803 = 22U;
uint8_t x4817 = 14U;
static int64_t t85 = INT64_MAX;
uint32_t x4850 = 331317066U;
static int64_t x4892 = INT64_MAX;
uint32_t x4926 = 37U;
static int8_t x4987 = 16;
volatile int64_t t94 = -4758643LL;
static int8_t x5369 = -1;
static volatile int8_t x5393 = INT8_MIN;
uint64_t t98 = 2685LLU;


void f0(void) {
	int64_t x37 = INT64_MAX;
	static uint32_t x38 = 3U;
	int16_t x39 = 16;
	int64_t x40 = INT64_MIN;
	int64_t t0 = -651634220175036LL;

	t0 = ((x37+(x38>>x39))|x40);

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x62 = 192726706931165810LL;
	int8_t x63 = 1;
	int8_t x64 = INT8_MIN;
	static volatile int64_t t1 = 24618712003838LL;

	t1 = ((x61+(x62>>x63))|x64);

	if (t1 != -72LL) { NG(); } else { ; }
	
}

void f2(void) {


	t2 = ((x69+(x70>>x71))|x72);

	if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x197 = UINT64_MAX;
	int32_t x198 = 41;
	volatile uint8_t x200 = 3U;
	volatile uint64_t t3 = 3935995587213379273LLU;

	t3 = ((x197+(x198>>x199))|x200);

	if (t3 != 19LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x231 = 1;
	volatile int32_t t4 = 61;

	t4 = ((x229+(x230>>x231))|x232);

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x257 = 1;
	volatile uint16_t x258 = 0U;
	static int8_t x259 = 26;
	int16_t x260 = INT16_MAX;

	t5 = ((x257+(x258>>x259))|x260);

	if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x273 = 21U;
	int64_t x274 = 5231844450LL;
	int32_t x276 = INT32_MIN;

	t6 = ((x273+(x274>>x275))|x276);

	if (t6 != -1820493349LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x281 = -1;
	int16_t x282 = INT16_MAX;
	static uint16_t x283 = 30U;
	int16_t x284 = INT16_MIN;
	volatile int32_t t7 = -356;

	t7 = ((x281+(x282>>x283))|x284);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x381 = 224314LLU;
	static uint64_t x383 = 6LLU;
	volatile int32_t x384 = INT32_MIN;
	volatile uint64_t t8 = 52383209LLU;

	t8 = ((x381+(x382>>x383))|x384);

	if (t8 != 18446744071726539215LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x425 = 1U;
	volatile uint32_t x426 = UINT32_MAX;
	static volatile int8_t x427 = 1;
	volatile uint16_t x428 = 6947U;
	static volatile uint32_t t9 = 189206U;

	t9 = ((x425+(x426>>x427))|x428);

	if (t9 != 2147490595U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x477 = 1950657383293822601LLU;
	uint64_t x478 = UINT64_MAX;
	volatile int16_t x479 = 3;
	int16_t x480 = 1151;
	volatile uint64_t t10 = 0LLU;

	t10 = ((x477+(x478>>x479))|x480);

	if (t10 != 4256500392507516671LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x493 = INT32_MAX;
	volatile int16_t x494 = 1;
	uint8_t x495 = 4U;
	int8_t x496 = -34;
	volatile int32_t t11 = -60;

	t11 = ((x493+(x494>>x495))|x496);

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x509 = -169;
	volatile uint32_t x510 = 9348U;
	volatile int32_t x511 = 0;
	uint32_t t12 = 39136281U;

	t12 = ((x509+(x510>>x511))|x512);

	if (t12 != 10207U) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x565 = 351285037LLU;
	uint32_t x566 = 181405U;
	int32_t x567 = 11;
	static uint32_t x568 = UINT32_MAX;

	t13 = ((x565+(x566>>x567))|x568);

	if (t13 != 4294967295LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x605 = UINT32_MAX;
	uint32_t x606 = 100U;
	int16_t x607 = 0;
	int32_t x608 = INT32_MIN;

	t14 = ((x605+(x606>>x607))|x608);

	if (t14 != 2147483747U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x638 = INT16_MAX;
	uint8_t x639 = 6U;
	uint64_t x640 = 1301611621LLU;

	t15 = ((x637+(x638>>x639))|x640);

	if (t15 != 2255341493104785399LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x641 = 8280397404179636365LLU;
	static volatile int8_t x642 = 7;
	volatile int32_t x644 = -1;

	t16 = ((x641+(x642>>x643))|x644);

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x653 = 2U;
	static volatile int16_t x654 = 4;
	uint8_t x655 = 28U;
	volatile uint64_t x656 = 66601933409620475LLU;

	t17 = ((x653+(x654>>x655))|x656);

	if (t17 != 66601933409620475LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x662 = UINT64_MAX;
	static uint8_t x663 = 21U;
	uint16_t x664 = 3357U;
	uint64_t t18 = 13906622895100753LLU;

	t18 = ((x661+(x662>>x663))|x664);

	if (t18 != 8796093022207LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x665 = INT8_MIN;
	int8_t x667 = 3;
	int64_t x668 = INT64_MIN;
	volatile int64_t t19 = 1LL;

	t19 = ((x665+(x666>>x667))|x668);

	if (t19 != -9223372036854206276LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x673 = 1796U;
	static int16_t x674 = INT16_MAX;
	static int32_t x676 = INT32_MIN;
	volatile uint32_t t20 = 26U;

	t20 = ((x673+(x674>>x675))|x676);

	if (t20 != 2147485451U) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint64_t t21 = 4089208LLU;

	t21 = ((x881+(x882>>x883))|x884);

	if (t21 != 3524329653319679LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x889 = INT64_MIN;
	volatile uint64_t x890 = 1015934861878LLU;
	static int16_t x891 = 1;
	uint64_t t22 = 672279642099575LLU;

	t22 = ((x889+(x890>>x891))|x892);

	if (t22 != 18446744073709543707LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x977 = 0;
	static uint32_t x978 = UINT32_MAX;
	volatile uint8_t x979 = 1U;
	uint8_t x980 = UINT8_MAX;

	t23 = ((x977+(x978>>x979))|x980);

	if (t23 != 2147483647U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x1105 = INT8_MAX;
	uint16_t x1107 = 9U;
	volatile uint8_t x1108 = UINT8_MAX;
	static int32_t t24 = -19762720;

	t24 = ((x1105+(x1106>>x1107))|x1108);

	if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x1142 = 1261040532910LLU;
	static volatile uint16_t x1143 = 4U;
	volatile int64_t x1144 = -3LL;
	volatile uint64_t t25 = 8810750040817613628LLU;

	t25 = ((x1141+(x1142>>x1143))|x1144);

	if (t25 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1230 = INT64_MAX;
	uint16_t x1231 = 0U;
	uint16_t x1232 = 4U;
	static int64_t t26 = -31559450264375LL;

	t26 = ((x1229+(x1230>>x1231))|x1232);

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1325 = 3685109126831LLU;
	static uint32_t x1326 = UINT32_MAX;
	int8_t x1327 = 12;
	static uint64_t t27 = 247178145812LLU;

	t27 = ((x1325+(x1326>>x1327))|x1328);

	if (t27 != 8090036459198LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x1461 = UINT32_MAX;
	volatile int32_t x1464 = INT32_MIN;
	static volatile uint32_t t28 = UINT32_MAX;

	t28 = ((x1461+(x1462>>x1463))|x1464);

	if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1674 = 110U;
	volatile int8_t x1675 = 9;
	int32_t x1676 = INT32_MIN;
	volatile uint32_t t29 = UINT32_MAX;

	t29 = ((x1673+(x1674>>x1675))|x1676);

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1706 = INT8_MAX;
	uint8_t x1707 = 14U;
	int8_t x1708 = -56;

	t30 = ((x1705+(x1706>>x1707))|x1708);

	if (t30 != -23) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1813 = 0;
	uint8_t x1815 = 22U;
	int32_t x1816 = INT32_MIN;

	t31 = ((x1813+(x1814>>x1815))|x1816);

	if (t31 != -1456156100LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x1818 = INT64_MAX;
	uint32_t x1819 = 7U;
	int16_t x1820 = INT16_MIN;
	volatile int64_t t32 = 34514526517604LL;

	t32 = ((x1817+(x1818>>x1819))|x1820);

	if (t32 != -32713LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x1821 = -1;
	uint64_t x1822 = 0LLU;
	int8_t x1824 = INT8_MAX;
	static volatile uint64_t t33 = UINT64_MAX;

	t33 = ((x1821+(x1822>>x1823))|x1824);

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1833 = 15062028101LL;
	uint16_t x1834 = 12U;
	int8_t x1835 = 0;
	uint8_t x1836 = 1U;
	int64_t t34 = -15751895LL;

	t34 = ((x1833+(x1834>>x1835))|x1836);

	if (t34 != 15062028113LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x1861 = -464488LL;
	volatile int8_t x1862 = INT8_MAX;
	int16_t x1863 = 0;
	int32_t x1864 = -1;
	static int64_t t35 = -6LL;

	t35 = ((x1861+(x1862>>x1863))|x1864);

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1962 = 677;
	int8_t x1963 = 21;
	volatile int32_t t36 = INT32_MIN;

	t36 = ((x1961+(x1962>>x1963))|x1964);

	if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x2010 = 6LL;
	uint16_t x2011 = 0U;
	volatile int64_t t37 = -23466LL;

	t37 = ((x2009+(x2010>>x2011))|x2012);

	if (t37 != 4294967295LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x2025 = 55LLU;
	uint8_t x2027 = 11U;
	int16_t x2028 = INT16_MAX;
	volatile uint64_t t38 = 3511LLU;

	t38 = ((x2025+(x2026>>x2027))|x2028);

	if (t38 != 613787795455LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x2065 = INT8_MAX;
	int64_t x2066 = INT64_MAX;
	int8_t x2067 = 1;
	uint16_t x2068 = UINT16_MAX;
	volatile int64_t t39 = 386LL;

	t39 = ((x2065+(x2066>>x2067))|x2068);

	if (t39 != 4611686018427453439LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x2093 = 2U;
	static uint8_t x2094 = 10U;
	int16_t x2095 = 0;
	volatile uint32_t x2096 = 4862263U;

	t40 = ((x2093+(x2094>>x2095))|x2096);

	if (t40 != 4862271U) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x2155 = 6U;
	uint8_t x2156 = 0U;
	int64_t t41 = 41592981405LL;

	t41 = ((x2153+(x2154>>x2155))|x2156);

	if (t41 != 315LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x2206 = 184472U;
	uint64_t x2208 = 126400765204LLU;
	volatile uint64_t t42 = 773367299507816LLU;

	t42 = ((x2205+(x2206>>x2207))|x2208);

	if (t42 != 126400765244LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x2229 = 4144;
	uint8_t x2230 = UINT8_MAX;
	volatile int64_t x2232 = -1LL;

	t43 = ((x2229+(x2230>>x2231))|x2232);

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x2321 = -1;
	int16_t x2322 = INT16_MAX;
	int32_t x2323 = 1;
	uint8_t x2324 = 32U;
	int32_t t44 = -6;

	t44 = ((x2321+(x2322>>x2323))|x2324);

	if (t44 != 16382) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x2333 = INT64_MIN;
	static int8_t x2335 = 0;
	static int16_t x2336 = INT16_MIN;
	static volatile int64_t t45 = -15771LL;

	t45 = ((x2333+(x2334>>x2335))|x2336);

	if (t45 != -32641LL) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint32_t x2367 = 1U;
	int32_t x2368 = INT32_MAX;
	volatile int64_t t46 = -1431LL;

	t46 = ((x2365+(x2366>>x2367))|x2368);

	if (t46 != 330719967919996927LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x2393 = -24842314;
	uint8_t x2394 = UINT8_MAX;
	static int16_t x2395 = 1;
	int64_t x2396 = -1LL;
	volatile int64_t t47 = -4123042160936262221LL;

	t47 = ((x2393+(x2394>>x2395))|x2396);

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x2405 = 0;
	static volatile int32_t x2406 = 3;
	int16_t x2407 = 1;
	volatile int32_t t48 = 444;

	t48 = ((x2405+(x2406>>x2407))|x2408);

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x2409 = 1U;
	static uint8_t x2410 = 2U;
	volatile uint32_t t49 = UINT32_MAX;

	t49 = ((x2409+(x2410>>x2411))|x2412);

	if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x2457 = UINT16_MAX;
	static volatile int64_t x2458 = 241604619600827LL;
	volatile uint8_t x2459 = 8U;
	volatile int64_t t50 = -48788LL;

	t50 = ((x2457+(x2458>>x2459))|x2460);

	if (t50 != 943768110962LL) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int64_t x2553 = 3388LL;
	static int8_t x2554 = INT8_MAX;
	static int16_t x2556 = INT16_MAX;
	volatile int64_t t51 = 37752290LL;

	t51 = ((x2553+(x2554>>x2555))|x2556);

	if (t51 != 32767LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x2609 = UINT8_MAX;
	int16_t x2610 = 22;
	uint16_t x2611 = 10U;
	uint32_t x2612 = UINT32_MAX;
	uint32_t t52 = UINT32_MAX;

	t52 = ((x2609+(x2610>>x2611))|x2612);

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x2701 = 20709661358LLU;
	uint16_t x2702 = UINT16_MAX;
	uint8_t x2703 = 0U;
	int64_t x2704 = INT64_MAX;
	uint64_t t53 = 974348373091LLU;

	t53 = ((x2701+(x2702>>x2703))|x2704);

	if (t53 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x2709 = 421U;
	int32_t x2710 = 0;
	volatile int32_t t54 = 37;

	t54 = ((x2709+(x2710>>x2711))|x2712);

	if (t54 != -91) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x2745 = 11U;
	static volatile uint8_t x2746 = 2U;
	int16_t x2747 = 13;
	int32_t x2748 = INT32_MIN;
	int32_t t55 = -1;

	t55 = ((x2745+(x2746>>x2747))|x2748);

	if (t55 != -2147483637) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x2797 = 18U;
	static uint8_t x2798 = 26U;

	t56 = ((x2797+(x2798>>x2799))|x2800);

	if (t56 != INT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x2834 = 58U;
	int16_t x2835 = 14;
	uint32_t x2836 = 1798439U;
	uint32_t t57 = 185240784U;

	t57 = ((x2833+(x2834>>x2835))|x2836);

	if (t57 != 1802239U) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x2965 = 58U;
	int16_t x2966 = INT16_MAX;
	volatile int16_t x2967 = 15;
	int32_t t58 = 6;

	t58 = ((x2965+(x2966>>x2967))|x2968);

	if (t58 != -32710) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x3033 = 511U;
	uint16_t x3035 = 13U;
	uint32_t x3036 = UINT32_MAX;
	volatile uint32_t t59 = UINT32_MAX;

	t59 = ((x3033+(x3034>>x3035))|x3036);

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x3041 = 0U;
	int32_t x3042 = 32996953;
	uint64_t x3043 = 20LLU;
	volatile int32_t t60 = 4072;

	t60 = ((x3041+(x3042>>x3043))|x3044);

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x3118 = UINT16_MAX;
	int8_t x3119 = 8;
	volatile uint8_t x3120 = 21U;
	volatile int64_t t61 = -6600230764LL;

	t61 = ((x3117+(x3118>>x3119))|x3120);

	if (t61 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x3345 = -705916886LL;
	uint64_t x3346 = 90893623233634LLU;
	int32_t x3347 = 2;
	uint64_t t62 = 1524292LLU;

	t62 = ((x3345+(x3346>>x3347))|x3348);

	if (t62 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x3390 = UINT16_MAX;
	int8_t x3391 = 4;
	uint32_t x3392 = 6742U;
	volatile uint32_t t63 = 13904522U;

	t63 = ((x3389+(x3390>>x3391))|x3392);

	if (t63 != 73726U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x3645 = UINT8_MAX;
	static volatile uint16_t x3646 = 4U;
	volatile int32_t t64 = -895733019;

	t64 = ((x3645+(x3646>>x3647))|x3648);

	if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x3777 = INT8_MIN;
	int8_t x3778 = INT8_MAX;
	static int8_t x3779 = 0;
	volatile int8_t x3780 = INT8_MAX;
	volatile int32_t t65 = -9758;

	t65 = ((x3777+(x3778>>x3779))|x3780);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x3797 = INT64_MIN;
	int16_t x3798 = 3;
	volatile int8_t x3799 = 0;
	int32_t x3800 = INT32_MIN;
	int64_t t66 = 112LL;

	t66 = ((x3797+(x3798>>x3799))|x3800);

	if (t66 != -2147483645LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x3817 = 43;
	static volatile int8_t x3818 = INT8_MAX;
	volatile uint8_t x3819 = 28U;
	int64_t x3820 = 4308456545LL;
	volatile int64_t t67 = 55913956LL;

	t67 = ((x3817+(x3818>>x3819))|x3820);

	if (t67 != 4308456555LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x3998 = 461U;
	static volatile uint32_t t68 = 1195411U;

	t68 = ((x3997+(x3998>>x3999))|x4000);

	if (t68 != 732U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x4001 = UINT64_MAX;
	int32_t x4002 = 52276131;
	volatile int32_t x4003 = 1;
	uint8_t x4004 = 98U;
	volatile uint64_t t69 = 1779323151LLU;

	t69 = ((x4001+(x4002>>x4003))|x4004);

	if (t69 != 26138098LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x4069 = INT64_MAX;
	static int64_t x4070 = 1042260501LL;
	volatile uint8_t x4071 = 53U;
	volatile int32_t x4072 = 121;
	volatile int64_t t70 = INT64_MAX;

	t70 = ((x4069+(x4070>>x4071))|x4072);

	if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x4109 = INT16_MIN;
	uint32_t x4110 = 120764609U;
	int8_t x4111 = 1;
	uint8_t x4112 = 9U;
	uint32_t t71 = 87175526U;

	t71 = ((x4109+(x4110>>x4111))|x4112);

	if (t71 != 60349545U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x4241 = INT8_MIN;
	int16_t x4242 = 252;
	int8_t x4243 = 1;
	static int32_t t72 = -5;

	t72 = ((x4241+(x4242>>x4243))|x4244);

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x4285 = INT8_MAX;
	int8_t x4287 = 0;
	static int64_t x4288 = INT64_MIN;
	volatile int64_t t73 = 5549686947786798LL;

	t73 = ((x4285+(x4286>>x4287))|x4288);

	if (t73 != -9223372036854775667LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x4329 = 3249U;
	uint32_t x4330 = 233173U;
	static uint16_t x4331 = 2U;
	static volatile uint64_t x4332 = 125000440277LLU;
	uint64_t t74 = 418LLU;

	t74 = ((x4329+(x4330>>x4331))|x4332);

	if (t74 != 125000481271LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x4361 = UINT8_MAX;
	uint64_t x4362 = 9176543933411619456LLU;
	volatile int64_t x4364 = INT64_MIN;
	volatile uint64_t t75 = 258922132417LLU;

	t75 = ((x4361+(x4362>>x4363))|x4364);

	if (t75 != 9224492220440397598LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x4481 = INT64_MAX;
	uint64_t x4482 = 834250051LLU;
	uint64_t x4483 = 27LLU;
	static uint8_t x4484 = 3U;
	uint64_t t76 = 83964452711485317LLU;

	t76 = ((x4481+(x4482>>x4483))|x4484);

	if (t76 != 9223372036854775815LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x4530 = UINT16_MAX;
	static volatile int8_t x4531 = 28;
	int64_t x4532 = INT64_MIN;
	int64_t t77 = 65749LL;

	t77 = ((x4529+(x4530>>x4531))|x4532);

	if (t77 != -2147483648LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x4565 = 696;
	int32_t x4566 = 345;
	int64_t x4568 = -55525923LL;
	static volatile int64_t t78 = -929354554572051740LL;

	t78 = ((x4565+(x4566>>x4567))|x4568);

	if (t78 != -55525379LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x4665 = INT32_MIN;
	uint8_t x4667 = 18U;

	t79 = ((x4665+(x4666>>x4667))|x4668);

	if (t79 != -2147483645) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x4677 = UINT32_MAX;
	uint16_t x4678 = 68U;
	int8_t x4679 = 1;
	int64_t x4680 = INT64_MIN;
	static volatile int64_t t80 = -26999413602648984LL;

	t80 = ((x4677+(x4678>>x4679))|x4680);

	if (t80 != -9223372036854775775LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x4789 = 50;
	volatile int8_t x4790 = 1;
	volatile int32_t x4791 = 1;
	int64_t x4792 = INT64_MIN;

	t81 = ((x4789+(x4790>>x4791))|x4792);

	if (t81 != -9223372036854775758LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x4793 = 964U;
	uint32_t x4794 = UINT32_MAX;
	int16_t x4795 = 2;
	int64_t x4796 = INT64_MAX;

	t82 = ((x4793+(x4794>>x4795))|x4796);

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x4797 = INT8_MAX;
	uint32_t x4799 = 12U;
	static volatile uint8_t x4800 = 13U;
	volatile int32_t t83 = 7703;

	t83 = ((x4797+(x4798>>x4799))|x4800);

	if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x4801 = INT8_MIN;
	uint64_t x4802 = 4086572449LLU;
	int16_t x4804 = -1;
	static volatile uint64_t t84 = UINT64_MAX;

	t84 = ((x4801+(x4802>>x4803))|x4804);

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint16_t x4818 = 29U;
	volatile uint8_t x4819 = 15U;
	int64_t x4820 = INT64_MAX;

	t85 = ((x4817+(x4818>>x4819))|x4820);

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x4849 = 64U;
	static uint8_t x4851 = 1U;
	int8_t x4852 = INT8_MAX;
	volatile uint32_t t86 = 1301662U;

	t86 = ((x4849+(x4850>>x4851))|x4852);

	if (t86 != 165658623U) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x4857 = UINT16_MAX;
	uint8_t x4858 = UINT8_MAX;
	int8_t x4859 = 0;
	volatile int32_t x4860 = -1;
	int32_t t87 = 1069681493;

	t87 = ((x4857+(x4858>>x4859))|x4860);

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x4889 = UINT32_MAX;
	static int64_t x4890 = 5LL;
	static uint64_t x4891 = 1LLU;
	int64_t t88 = INT64_MAX;

	t88 = ((x4889+(x4890>>x4891))|x4892);

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x4925 = 64U;
	uint8_t x4927 = 12U;
	uint64_t x4928 = UINT64_MAX;
	volatile uint64_t t89 = UINT64_MAX;

	t89 = ((x4925+(x4926>>x4927))|x4928);

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x4953 = 6LLU;
	uint16_t x4954 = 12338U;
	int8_t x4955 = 3;
	uint8_t x4956 = 3U;
	static uint64_t t90 = 9705525LLU;

	t90 = ((x4953+(x4954>>x4955))|x4956);

	if (t90 != 1551LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x4973 = 228U;
	uint32_t x4974 = 900826U;
	volatile uint16_t x4975 = 0U;
	volatile uint32_t x4976 = 4539U;
	uint32_t t91 = 81746754U;

	t91 = ((x4973+(x4974>>x4975))|x4976);

	if (t91 != 901055U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x4985 = INT32_MAX;
	int8_t x4986 = INT8_MAX;
	int16_t x4988 = -392;
	static int32_t t92 = -74;

	t92 = ((x4985+(x4986>>x4987))|x4988);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x4993 = 12626194;
	static int8_t x4994 = INT8_MAX;
	uint16_t x4995 = 20U;
	int64_t x4996 = 18429211LL;
	static int64_t t93 = -4096620LL;

	t93 = ((x4993+(x4994>>x4995))|x4996);

	if (t93 != 31046939LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x5021 = UINT8_MAX;
	volatile int8_t x5022 = 0;
	volatile uint8_t x5023 = 8U;
	int64_t x5024 = -1LL;

	t94 = ((x5021+(x5022>>x5023))|x5024);

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x5121 = -1;
	int64_t x5122 = 2457958522299195880LL;
	static int8_t x5123 = 0;
	int8_t x5124 = 8;
	static volatile int64_t t95 = 1583791727LL;

	t95 = ((x5121+(x5122>>x5123))|x5124);

	if (t95 != 2457958522299195887LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x5157 = INT8_MIN;
	uint64_t x5158 = UINT64_MAX;
	volatile uint8_t x5159 = 3U;
	int16_t x5160 = -1;
	static volatile uint64_t t96 = UINT64_MAX;

	t96 = ((x5157+(x5158>>x5159))|x5160);

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x5370 = INT64_MAX;
	volatile int16_t x5371 = 2;
	static uint16_t x5372 = UINT16_MAX;
	static int64_t t97 = 39086846717676LL;

	t97 = ((x5369+(x5370>>x5371))|x5372);

	if (t97 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x5394 = 6;
	uint8_t x5395 = 0U;
	uint64_t x5396 = 306867778626LLU;

	t98 = ((x5393+(x5394>>x5395))|x5396);

	if (t98 != 18446744073709551558LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x5417 = -1;
	uint16_t x5418 = 3207U;
	uint64_t x5419 = 12LLU;
	uint64_t x5420 = 14196888010LLU;
	static uint64_t t99 = UINT64_MAX;

	t99 = ((x5417+(x5418>>x5419))|x5420);

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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


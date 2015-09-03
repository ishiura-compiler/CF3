#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x48 = INT8_MIN;
int32_t x94 = -944710;
volatile uint64_t x96 = UINT64_MAX;
int16_t x97 = -1;
int8_t x99 = 3;
int8_t x111 = -1;
uint64_t x112 = UINT64_MAX;
int32_t x121 = -8277;
volatile int32_t t5 = 292;
int64_t x221 = INT64_MIN;
int8_t x269 = -49;
int16_t x270 = INT16_MIN;
uint32_t x380 = UINT32_MAX;
volatile int32_t t10 = 434406994;
static int8_t x452 = INT8_MAX;
int32_t t11 = 2111862;
static int32_t x473 = 48318;
static int16_t x505 = INT16_MAX;
int8_t x507 = INT8_MAX;
int32_t x546 = -1;
uint8_t x548 = 1U;
int64_t x570 = -1LL;
uint64_t x575 = UINT64_MAX;
static volatile int32_t t18 = 4708;
int32_t x577 = INT32_MAX;
int16_t x580 = INT16_MIN;
static int64_t x694 = -6841LL;
volatile uint64_t x751 = 6LLU;
int16_t x752 = -20;
int8_t x771 = INT8_MIN;
static int64_t x898 = INT64_MAX;
int16_t x955 = INT16_MIN;
int8_t x1008 = INT8_MIN;
volatile int32_t x1091 = -1;
volatile int8_t x1247 = INT8_MAX;
int32_t t30 = 14039;
static uint16_t x1293 = UINT16_MAX;
static int32_t x1340 = INT32_MIN;
static int32_t t33 = 12233118;
static int8_t x1397 = 6;
static int16_t x1489 = -51;
volatile int64_t x1750 = INT64_MAX;
volatile uint64_t x1800 = UINT64_MAX;
static uint16_t x1834 = 455U;
int32_t t39 = 6813819;
uint8_t x1880 = 0U;
int32_t t41 = 44;
volatile uint32_t x1902 = 2449U;
volatile int32_t t44 = -10189046;
int64_t x2022 = INT64_MIN;
uint8_t x2030 = 0U;
int32_t x2120 = -1;
uint16_t x2181 = 8830U;
int8_t x2182 = INT8_MAX;
int64_t x2183 = -1LL;
int8_t x2184 = -1;
volatile int32_t t50 = 9472413;
int8_t x2185 = 15;
int16_t x2196 = -1;
static int8_t x2285 = -1;
volatile int32_t t53 = -10;
volatile int32_t x2408 = -1;
volatile int32_t t59 = -496848;
int8_t x2483 = -1;
volatile int32_t t60 = 1790;
static uint64_t x2503 = UINT64_MAX;
volatile int32_t t61 = -460250;
volatile uint16_t x2561 = 4585U;
volatile int8_t x2564 = -1;
volatile int32_t t62 = 172;
uint16_t x2622 = 42U;
int32_t t64 = -13806;
uint16_t x2629 = 422U;
int32_t x2688 = -1;
int32_t x2814 = 125999128;
int64_t x2834 = -811382LL;
int8_t x2835 = 2;
volatile int32_t t71 = 205465;
volatile int32_t t73 = -1775925;
volatile int16_t x3201 = -1;
volatile int64_t x3202 = -1LL;
uint64_t x3219 = UINT64_MAX;
volatile uint32_t x3299 = UINT32_MAX;
int32_t x3300 = -1;
volatile int64_t x3317 = INT64_MAX;
volatile uint32_t x3318 = UINT32_MAX;
int8_t x3320 = -1;
int16_t x3549 = INT16_MIN;
int16_t x3550 = INT16_MAX;
int32_t t84 = 16928211;
uint32_t x3618 = UINT32_MAX;
static volatile uint16_t x3699 = 13U;
static int8_t x3706 = -1;
uint32_t x3820 = UINT32_MAX;
volatile int8_t x3857 = 41;
static volatile int8_t x3858 = INT8_MIN;
int8_t x3869 = INT8_MAX;
int16_t x3870 = -1;
volatile int32_t t94 = 116;
volatile int8_t x3909 = INT8_MIN;
int32_t t95 = -471;
int32_t t96 = 968;
volatile int32_t t99 = -468633;


void f0(void) {
	int32_t x33 = -7216;
	uint32_t x34 = 13U;
	uint32_t x35 = 0U;
	int8_t x36 = -1;
	int32_t t0 = -128001797;

	t0 = ((x33<x34)<<(x35-x36));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x45 = -1;
	static volatile uint8_t x46 = 105U;
	int16_t x47 = -123;
	int32_t t1 = 321806094;

	t1 = ((x45<x46)<<(x47-x48));

	if (t1 != 32) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x93 = UINT16_MAX;
	int8_t x95 = -1;
	volatile int32_t t2 = 0;

	t2 = ((x93<x94)<<(x95-x96));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x98 = INT64_MIN;
	int8_t x100 = -4;
	int32_t t3 = -1;

	t3 = ((x97<x98)<<(x99-x100));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x109 = 937889293;
	int64_t x110 = INT64_MIN;
	volatile int32_t t4 = -4;

	t4 = ((x109<x110)<<(x111-x112));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint32_t x122 = 2579206U;
	int8_t x123 = 7;
	uint8_t x124 = 1U;

	t5 = ((x121<x122)<<(x123-x124));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x222 = -1;
	static volatile int32_t x223 = INT32_MIN;
	volatile int32_t x224 = INT32_MIN;
	int32_t t6 = 6;

	t6 = ((x221<x222)<<(x223-x224));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x271 = INT32_MIN;
	int32_t x272 = INT32_MIN;
	static volatile int32_t t7 = 17460380;

	t7 = ((x269<x270)<<(x271-x272));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x325 = INT32_MAX;
	static int64_t x326 = -1LL;
	uint8_t x327 = 17U;
	int8_t x328 = -1;
	volatile int32_t t8 = -191645595;

	t8 = ((x325<x326)<<(x327-x328));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x333 = INT32_MIN;
	int32_t x334 = -57;
	int8_t x335 = INT8_MIN;
	int8_t x336 = INT8_MIN;
	volatile int32_t t9 = 52;

	t9 = ((x333<x334)<<(x335-x336));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x377 = UINT8_MAX;
	int64_t x378 = -1LL;
	static int8_t x379 = -1;

	t10 = ((x377<x378)<<(x379-x380));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x449 = 6015189U;
	static uint32_t x450 = 947U;
	int8_t x451 = INT8_MAX;

	t11 = ((x449<x450)<<(x451-x452));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x474 = -78LL;
	int32_t x475 = INT32_MIN;
	int32_t x476 = INT32_MIN;
	int32_t t12 = 52;

	t12 = ((x473<x474)<<(x475-x476));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x477 = 6U;
	static uint64_t x478 = UINT64_MAX;
	uint8_t x479 = 18U;
	int32_t x480 = -1;
	int32_t t13 = 31666;

	t13 = ((x477<x478)<<(x479-x480));

	if (t13 != 524288) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x506 = 464335636LL;
	int8_t x508 = INT8_MAX;
	volatile int32_t t14 = 3354086;

	t14 = ((x505<x506)<<(x507-x508));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x513 = -267;
	int8_t x514 = -1;
	uint64_t x515 = UINT64_MAX;
	static int32_t x516 = -1;
	int32_t t15 = -822;

	t15 = ((x513<x514)<<(x515-x516));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x545 = INT32_MIN;
	uint8_t x547 = 2U;
	volatile int32_t t16 = 521016;

	t16 = ((x545<x546)<<(x547-x548));

	if (t16 != 2) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x569 = INT32_MIN;
	volatile int8_t x571 = 0;
	static int32_t x572 = 0;
	int32_t t17 = -141307;

	t17 = ((x569<x570)<<(x571-x572));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x573 = INT16_MIN;
	uint16_t x574 = UINT16_MAX;
	volatile uint64_t x576 = UINT64_MAX;

	t18 = ((x573<x574)<<(x575-x576));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x578 = -88058460LL;
	static int16_t x579 = INT16_MIN;
	int32_t t19 = 9511842;

	t19 = ((x577<x578)<<(x579-x580));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x653 = 28491U;
	uint8_t x654 = 11U;
	int32_t x655 = INT32_MIN;
	int32_t x656 = INT32_MIN;
	int32_t t20 = 7;

	t20 = ((x653<x654)<<(x655-x656));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x693 = -3;
	volatile uint8_t x695 = 6U;
	uint64_t x696 = UINT64_MAX;
	static int32_t t21 = -3;

	t21 = ((x693<x694)<<(x695-x696));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x705 = UINT8_MAX;
	static int8_t x706 = INT8_MIN;
	int16_t x707 = -1;
	int16_t x708 = -1;
	int32_t t22 = -88100;

	t22 = ((x705<x706)<<(x707-x708));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x749 = 1591U;
	volatile int64_t x750 = INT64_MIN;
	volatile int32_t t23 = -523999;

	t23 = ((x749<x750)<<(x751-x752));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x769 = -1;
	int8_t x770 = INT8_MIN;
	volatile int8_t x772 = INT8_MIN;
	int32_t t24 = 1;

	t24 = ((x769<x770)<<(x771-x772));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x781 = 23LLU;
	uint16_t x782 = UINT16_MAX;
	uint8_t x783 = 3U;
	uint32_t x784 = UINT32_MAX;
	int32_t t25 = 250;

	t25 = ((x781<x782)<<(x783-x784));

	if (t25 != 16) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x897 = INT16_MAX;
	static int16_t x899 = INT16_MIN;
	static int16_t x900 = INT16_MIN;
	int32_t t26 = 6413;

	t26 = ((x897<x898)<<(x899-x900));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x953 = 576;
	uint64_t x954 = UINT64_MAX;
	int16_t x956 = INT16_MIN;
	static volatile int32_t t27 = 55450536;

	t27 = ((x953<x954)<<(x955-x956));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1005 = -7;
	int8_t x1006 = 25;
	int8_t x1007 = INT8_MIN;
	volatile int32_t t28 = -349;

	t28 = ((x1005<x1006)<<(x1007-x1008));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x1089 = 22U;
	volatile uint32_t x1090 = 4999U;
	uint32_t x1092 = UINT32_MAX;
	volatile int32_t t29 = 15542310;

	t29 = ((x1089<x1090)<<(x1091-x1092));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x1245 = UINT64_MAX;
	int64_t x1246 = INT64_MIN;
	uint16_t x1248 = 112U;

	t30 = ((x1245<x1246)<<(x1247-x1248));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1294 = 3154574LL;
	uint16_t x1295 = 10U;
	static int32_t x1296 = -1;
	volatile int32_t t31 = 88135036;

	t31 = ((x1293<x1294)<<(x1295-x1296));

	if (t31 != 2048) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x1337 = 20776341728224336LLU;
	static int8_t x1338 = 20;
	int32_t x1339 = INT32_MIN;
	int32_t t32 = -96785052;

	t32 = ((x1337<x1338)<<(x1339-x1340));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1353 = INT64_MIN;
	int8_t x1354 = 3;
	int8_t x1355 = INT8_MIN;
	int8_t x1356 = INT8_MIN;

	t33 = ((x1353<x1354)<<(x1355-x1356));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x1398 = -1;
	int16_t x1399 = INT16_MIN;
	int16_t x1400 = INT16_MIN;
	static int32_t t34 = -990035;

	t34 = ((x1397<x1398)<<(x1399-x1400));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1490 = 4U;
	int16_t x1491 = 0;
	int8_t x1492 = -3;
	volatile int32_t t35 = 13148983;

	t35 = ((x1489<x1490)<<(x1491-x1492));

	if (t35 != 8) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1749 = -1;
	int32_t x1751 = -1;
	static int8_t x1752 = -8;
	int32_t t36 = 1899;

	t36 = ((x1749<x1750)<<(x1751-x1752));

	if (t36 != 128) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1777 = -1LL;
	volatile int32_t x1778 = INT32_MAX;
	int16_t x1779 = -1;
	uint32_t x1780 = UINT32_MAX;
	int32_t t37 = 1;

	t37 = ((x1777<x1778)<<(x1779-x1780));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x1797 = INT16_MIN;
	static volatile int32_t x1798 = -1;
	volatile int32_t x1799 = -1;
	static int32_t t38 = 118362571;

	t38 = ((x1797<x1798)<<(x1799-x1800));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1833 = -1LL;
	static int16_t x1835 = 1;
	uint32_t x1836 = UINT32_MAX;

	t39 = ((x1833<x1834)<<(x1835-x1836));

	if (t39 != 4) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x1849 = 167U;
	int32_t x1850 = INT32_MAX;
	int16_t x1851 = INT16_MIN;
	int16_t x1852 = INT16_MIN;
	int32_t t40 = 105971;

	t40 = ((x1849<x1850)<<(x1851-x1852));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x1877 = INT8_MIN;
	int32_t x1878 = 0;
	static uint16_t x1879 = 1U;

	t41 = ((x1877<x1878)<<(x1879-x1880));

	if (t41 != 2) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x1901 = UINT32_MAX;
	static volatile int8_t x1903 = -1;
	volatile uint32_t x1904 = UINT32_MAX;
	volatile int32_t t42 = 8;

	t42 = ((x1901<x1902)<<(x1903-x1904));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x1961 = 160943LLU;
	volatile int64_t x1962 = INT64_MAX;
	uint8_t x1963 = 1U;
	volatile int16_t x1964 = -1;
	int32_t t43 = -13;

	t43 = ((x1961<x1962)<<(x1963-x1964));

	if (t43 != 4) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x1965 = INT32_MIN;
	int32_t x1966 = -1;
	volatile int8_t x1967 = 1;
	int16_t x1968 = 1;

	t44 = ((x1965<x1966)<<(x1967-x1968));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2021 = INT8_MIN;
	uint8_t x2023 = UINT8_MAX;
	uint8_t x2024 = UINT8_MAX;
	volatile int32_t t45 = 22254415;

	t45 = ((x2021<x2022)<<(x2023-x2024));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x2029 = INT64_MAX;
	uint8_t x2031 = 22U;
	uint8_t x2032 = 9U;
	volatile int32_t t46 = -395;

	t46 = ((x2029<x2030)<<(x2031-x2032));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x2101 = INT8_MAX;
	int64_t x2102 = INT64_MIN;
	uint32_t x2103 = 8U;
	volatile int64_t x2104 = -1LL;
	int32_t t47 = 842912;

	t47 = ((x2101<x2102)<<(x2103-x2104));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x2117 = -1;
	int8_t x2118 = INT8_MIN;
	volatile int16_t x2119 = 7;
	volatile int32_t t48 = 18664469;

	t48 = ((x2117<x2118)<<(x2119-x2120));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x2173 = INT8_MAX;
	static int8_t x2174 = INT8_MIN;
	uint64_t x2175 = UINT64_MAX;
	uint64_t x2176 = UINT64_MAX;
	volatile int32_t t49 = 907541;

	t49 = ((x2173<x2174)<<(x2175-x2176));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {


	t50 = ((x2181<x2182)<<(x2183-x2184));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x2186 = INT8_MIN;
	int32_t x2187 = INT32_MIN;
	static int32_t x2188 = INT32_MIN;
	int32_t t51 = 21;

	t51 = ((x2185<x2186)<<(x2187-x2188));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x2193 = INT32_MAX;
	int8_t x2194 = -1;
	int32_t x2195 = -1;
	volatile int32_t t52 = -434;

	t52 = ((x2193<x2194)<<(x2195-x2196));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x2286 = -1;
	int8_t x2287 = -1;
	int64_t x2288 = -1LL;

	t53 = ((x2285<x2286)<<(x2287-x2288));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x2353 = 2970451U;
	static int32_t x2354 = INT32_MIN;
	uint8_t x2355 = 5U;
	int8_t x2356 = -1;
	volatile int32_t t54 = 864207;

	t54 = ((x2353<x2354)<<(x2355-x2356));

	if (t54 != 64) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x2397 = -1224288;
	uint32_t x2398 = 29402226U;
	volatile int16_t x2399 = INT16_MIN;
	int16_t x2400 = INT16_MIN;
	volatile int32_t t55 = -2;

	t55 = ((x2397<x2398)<<(x2399-x2400));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x2405 = -53415;
	uint32_t x2406 = 40U;
	static uint8_t x2407 = 5U;
	volatile int32_t t56 = 70695;

	t56 = ((x2405<x2406)<<(x2407-x2408));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x2445 = 109825541LL;
	volatile int16_t x2446 = -1;
	volatile int16_t x2447 = -1;
	uint64_t x2448 = UINT64_MAX;
	volatile int32_t t57 = 230937905;

	t57 = ((x2445<x2446)<<(x2447-x2448));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x2449 = 8632926U;
	static uint16_t x2450 = 17U;
	static uint32_t x2451 = UINT32_MAX;
	int32_t x2452 = -1;
	static volatile int32_t t58 = -8;

	t58 = ((x2449<x2450)<<(x2451-x2452));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x2477 = 82U;
	static volatile int8_t x2478 = INT8_MAX;
	int8_t x2479 = -1;
	int64_t x2480 = -1LL;

	t59 = ((x2477<x2478)<<(x2479-x2480));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x2481 = 185;
	uint16_t x2482 = 7U;
	uint32_t x2484 = UINT32_MAX;

	t60 = ((x2481<x2482)<<(x2483-x2484));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x2501 = 1113176334U;
	uint32_t x2502 = UINT32_MAX;
	volatile int32_t x2504 = -1;

	t61 = ((x2501<x2502)<<(x2503-x2504));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x2562 = -1;
	int8_t x2563 = -1;

	t62 = ((x2561<x2562)<<(x2563-x2564));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x2621 = 449779900212LLU;
	uint64_t x2623 = UINT64_MAX;
	static uint64_t x2624 = UINT64_MAX;
	volatile int32_t t63 = -173;

	t63 = ((x2621<x2622)<<(x2623-x2624));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x2625 = -1;
	static volatile uint32_t x2626 = 192637U;
	int8_t x2627 = -1;
	uint64_t x2628 = UINT64_MAX;

	t64 = ((x2625<x2626)<<(x2627-x2628));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x2630 = 188U;
	static int8_t x2631 = INT8_MIN;
	int8_t x2632 = INT8_MIN;
	int32_t t65 = -43513;

	t65 = ((x2629<x2630)<<(x2631-x2632));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x2685 = 1374LLU;
	uint64_t x2686 = 360939185576102LLU;
	uint8_t x2687 = 15U;
	int32_t t66 = 7683735;

	t66 = ((x2685<x2686)<<(x2687-x2688));

	if (t66 != 65536) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x2693 = UINT8_MAX;
	int8_t x2694 = -11;
	uint8_t x2695 = 12U;
	int8_t x2696 = -1;
	int32_t t67 = 89492785;

	t67 = ((x2693<x2694)<<(x2695-x2696));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x2733 = 1915;
	int16_t x2734 = -1;
	volatile int32_t x2735 = 0;
	static volatile int32_t x2736 = -1;
	volatile int32_t t68 = 6960333;

	t68 = ((x2733<x2734)<<(x2735-x2736));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x2813 = INT64_MAX;
	static uint64_t x2815 = UINT64_MAX;
	int64_t x2816 = -1LL;
	static volatile int32_t t69 = 356660500;

	t69 = ((x2813<x2814)<<(x2815-x2816));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x2833 = INT32_MAX;
	static int32_t x2836 = 1;
	int32_t t70 = -6518;

	t70 = ((x2833<x2834)<<(x2835-x2836));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x2953 = -69775559LL;
	int32_t x2954 = -1;
	int32_t x2955 = 1;
	uint32_t x2956 = UINT32_MAX;

	t71 = ((x2953<x2954)<<(x2955-x2956));

	if (t71 != 4) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x3085 = 1U;
	int32_t x3086 = -1;
	volatile uint16_t x3087 = 0U;
	int8_t x3088 = -1;
	volatile int32_t t72 = 212047737;

	t72 = ((x3085<x3086)<<(x3087-x3088));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x3105 = -12902;
	int64_t x3106 = -1558109231224324315LL;
	uint64_t x3107 = UINT64_MAX;
	static int32_t x3108 = -1;

	t73 = ((x3105<x3106)<<(x3107-x3108));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint64_t x3177 = UINT64_MAX;
	int64_t x3178 = INT64_MIN;
	uint8_t x3179 = 3U;
	uint64_t x3180 = UINT64_MAX;
	volatile int32_t t74 = -20947;

	t74 = ((x3177<x3178)<<(x3179-x3180));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x3203 = -1;
	volatile int32_t x3204 = -1;
	int32_t t75 = -1;

	t75 = ((x3201<x3202)<<(x3203-x3204));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x3213 = -28819695;
	volatile int16_t x3214 = INT16_MIN;
	uint8_t x3215 = 27U;
	uint16_t x3216 = 0U;
	int32_t t76 = -14794;

	t76 = ((x3213<x3214)<<(x3215-x3216));

	if (t76 != 134217728) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x3217 = -1;
	int16_t x3218 = INT16_MAX;
	uint64_t x3220 = UINT64_MAX;
	volatile int32_t t77 = 23100764;

	t77 = ((x3217<x3218)<<(x3219-x3220));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x3297 = -1LL;
	int64_t x3298 = INT64_MAX;
	volatile int32_t t78 = 2042669;

	t78 = ((x3297<x3298)<<(x3299-x3300));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x3305 = UINT64_MAX;
	volatile int64_t x3306 = 48392652447984194LL;
	int32_t x3307 = -1;
	int32_t x3308 = -1;
	static int32_t t79 = 3177038;

	t79 = ((x3305<x3306)<<(x3307-x3308));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x3319 = UINT32_MAX;
	int32_t t80 = 304622237;

	t80 = ((x3317<x3318)<<(x3319-x3320));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x3369 = INT64_MIN;
	int16_t x3370 = -1;
	int16_t x3371 = 6;
	uint32_t x3372 = UINT32_MAX;
	int32_t t81 = -15;

	t81 = ((x3369<x3370)<<(x3371-x3372));

	if (t81 != 128) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x3413 = 9LLU;
	volatile int16_t x3414 = -1;
	uint16_t x3415 = UINT16_MAX;
	uint16_t x3416 = UINT16_MAX;
	volatile int32_t t82 = 105601;

	t82 = ((x3413<x3414)<<(x3415-x3416));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x3489 = UINT64_MAX;
	int8_t x3490 = INT8_MIN;
	volatile uint16_t x3491 = 16U;
	int64_t x3492 = -1LL;
	volatile int32_t t83 = 7355511;

	t83 = ((x3489<x3490)<<(x3491-x3492));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x3551 = -1;
	static int8_t x3552 = -2;

	t84 = ((x3549<x3550)<<(x3551-x3552));

	if (t84 != 2) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x3617 = INT8_MIN;
	int8_t x3619 = 13;
	int8_t x3620 = -1;
	static int32_t t85 = 33;

	t85 = ((x3617<x3618)<<(x3619-x3620));

	if (t85 != 16384) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x3669 = INT8_MAX;
	int8_t x3670 = INT8_MIN;
	int32_t x3671 = -1;
	static uint64_t x3672 = UINT64_MAX;
	int32_t t86 = 3365561;

	t86 = ((x3669<x3670)<<(x3671-x3672));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x3697 = INT32_MIN;
	int8_t x3698 = -1;
	static uint16_t x3700 = 0U;
	int32_t t87 = -17906195;

	t87 = ((x3697<x3698)<<(x3699-x3700));

	if (t87 != 8192) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x3701 = -1;
	volatile int64_t x3702 = -10043710752LL;
	static uint32_t x3703 = 7U;
	volatile uint16_t x3704 = 6U;
	static volatile int32_t t88 = 1785;

	t88 = ((x3701<x3702)<<(x3703-x3704));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x3705 = INT32_MIN;
	int32_t x3707 = -1;
	uint32_t x3708 = UINT32_MAX;
	volatile int32_t t89 = 5945;

	t89 = ((x3705<x3706)<<(x3707-x3708));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x3777 = 1;
	int16_t x3778 = INT16_MIN;
	int64_t x3779 = -1LL;
	int32_t x3780 = -1;
	int32_t t90 = -51;

	t90 = ((x3777<x3778)<<(x3779-x3780));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x3813 = 672529U;
	volatile int16_t x3814 = INT16_MAX;
	uint8_t x3815 = 1U;
	int16_t x3816 = -1;
	static volatile int32_t t91 = -1;

	t91 = ((x3813<x3814)<<(x3815-x3816));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x3817 = 0;
	volatile uint8_t x3818 = 2U;
	uint32_t x3819 = UINT32_MAX;
	int32_t t92 = 1628;

	t92 = ((x3817<x3818)<<(x3819-x3820));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x3859 = UINT64_MAX;
	volatile int16_t x3860 = -1;
	int32_t t93 = 1;

	t93 = ((x3857<x3858)<<(x3859-x3860));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x3871 = 7;
	static uint64_t x3872 = UINT64_MAX;

	t94 = ((x3869<x3870)<<(x3871-x3872));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x3910 = 1U;
	static int8_t x3911 = INT8_MIN;
	static volatile int8_t x3912 = INT8_MIN;

	t95 = ((x3909<x3910)<<(x3911-x3912));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x3937 = -1;
	int64_t x3938 = 63270366523LL;
	static int8_t x3939 = INT8_MIN;
	int8_t x3940 = INT8_MIN;

	t96 = ((x3937<x3938)<<(x3939-x3940));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x3945 = UINT8_MAX;
	uint32_t x3946 = UINT32_MAX;
	static volatile int16_t x3947 = -1;
	static int8_t x3948 = -12;
	int32_t t97 = 1710040;

	t97 = ((x3945<x3946)<<(x3947-x3948));

	if (t97 != 2048) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x3949 = INT8_MIN;
	uint64_t x3950 = UINT64_MAX;
	uint32_t x3951 = UINT32_MAX;
	static volatile int32_t x3952 = -1;
	int32_t t98 = 197685;

	t98 = ((x3949<x3950)<<(x3951-x3952));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x3957 = 1LLU;
	uint32_t x3958 = UINT32_MAX;
	volatile int16_t x3959 = 1;
	int16_t x3960 = -1;

	t99 = ((x3957<x3958)<<(x3959-x3960));

	if (t99 != 4) { NG(); } else { ; }
	
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


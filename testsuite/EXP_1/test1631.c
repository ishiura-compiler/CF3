#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x14 = -96LL;
static uint8_t x55 = 0U;
uint32_t x56 = 3U;
int32_t t1 = -3;
volatile int32_t x105 = -1;
uint32_t x114 = UINT32_MAX;
volatile int8_t x115 = INT8_MIN;
uint64_t x116 = 7LLU;
int32_t x126 = 29;
int8_t x194 = -1;
int16_t x199 = INT16_MIN;
static int8_t x200 = 0;
uint32_t x231 = 97930265U;
int32_t t9 = 881;
uint32_t x281 = UINT32_MAX;
int8_t x282 = INT8_MIN;
volatile int32_t t10 = 148;
uint8_t x293 = 112U;
uint8_t x296 = 3U;
int32_t t12 = -116585097;
int32_t t13 = -95;
volatile int32_t t15 = -87139;
int16_t x539 = -1;
static int8_t x540 = 1;
static int32_t t17 = 3;
int32_t x569 = INT32_MIN;
volatile int32_t t19 = 333168093;
static volatile int32_t x593 = 918110646;
uint64_t x594 = UINT64_MAX;
static int16_t x595 = -309;
int64_t x764 = 0LL;
int64_t x774 = INT64_MAX;
static int16_t x794 = INT16_MIN;
uint8_t x795 = UINT8_MAX;
int32_t t27 = -3268811;
volatile uint16_t x817 = UINT16_MAX;
int8_t x819 = INT8_MIN;
static volatile int16_t x867 = INT16_MAX;
int32_t x921 = INT32_MIN;
volatile int32_t t32 = 98905557;
int32_t t33 = -7;
static volatile uint8_t x950 = UINT8_MAX;
static int32_t x952 = 1;
volatile int32_t t34 = 49691;
int64_t x986 = INT64_MAX;
static int16_t x1027 = -1;
volatile uint16_t x1077 = 580U;
static int8_t x1080 = 6;
int8_t x1092 = 3;
volatile int32_t t39 = -5;
int64_t x1321 = 2758837086394651LL;
int16_t x1324 = 0;
static uint16_t x1361 = 314U;
volatile int32_t x1438 = -45;
uint8_t x1439 = 4U;
uint8_t x1448 = 7U;
volatile int32_t t48 = 4061;
int8_t x1459 = -28;
volatile int16_t x1493 = -1;
volatile int8_t x1494 = 0;
static int32_t t50 = -188;
int32_t t51 = 4988;
int16_t x1578 = INT16_MAX;
int32_t t52 = -58;
static int16_t x1587 = -495;
uint32_t x1588 = 4U;
int8_t x1658 = INT8_MAX;
int32_t x1729 = INT32_MIN;
static int32_t x1730 = -1;
int64_t x1861 = INT64_MAX;
uint64_t x1862 = UINT64_MAX;
volatile int32_t t59 = 119547707;
int64_t x2014 = INT64_MIN;
static int64_t x2053 = INT64_MIN;
int32_t x2078 = INT32_MAX;
static int32_t t62 = -15688;
static volatile uint32_t x2087 = 235U;
volatile int32_t t63 = -20659385;
uint64_t x2121 = 936556723LLU;
int32_t t64 = 24;
static int32_t x2133 = INT32_MIN;
volatile int64_t x2181 = 800127598LL;
int32_t x2182 = INT32_MAX;
volatile int64_t x2218 = INT64_MAX;
static uint64_t x2219 = UINT64_MAX;
int32_t x2231 = INT32_MIN;
volatile int32_t t71 = -102;
volatile int32_t t72 = -11781;
int64_t x2257 = -3842219126459643LL;
static volatile int32_t t73 = 1;
int32_t x2318 = INT32_MIN;
uint8_t x2320 = 9U;
uint16_t x2349 = 0U;
static uint8_t x2351 = 11U;
int32_t t75 = -254;
int16_t x2379 = -1;
uint64_t x2438 = 97099370719173888LLU;
uint64_t x2439 = 0LLU;
static uint32_t x2499 = 29460381U;
static uint8_t x2645 = UINT8_MAX;
volatile uint8_t x2692 = 9U;
int64_t x2767 = 16531575696109LL;
int64_t x2811 = -16LL;
uint8_t x2877 = 4U;
int64_t x2879 = -1LL;
int32_t t91 = 1;
int32_t x2987 = INT32_MIN;
volatile int32_t t93 = 0;
static int32_t x3023 = -89889273;
int64_t x3030 = -127124046522311392LL;
uint16_t x3070 = UINT16_MAX;
volatile int32_t t97 = -1453;
uint32_t x3078 = 44104906U;
volatile uint8_t x3084 = 14U;
static int32_t t99 = 7702;


void f0(void) {
	uint8_t x13 = UINT8_MAX;
	uint8_t x15 = 7U;
	uint8_t x16 = 2U;
	static int32_t t0 = -1785315;

	t0 = (((x13<=x14)<x15)<<x16);

	if (t0 != 4) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x53 = INT64_MAX;
	int8_t x54 = -52;

	t1 = (((x53<=x54)<x55)<<x56);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint8_t x106 = 108U;
	int32_t x107 = INT32_MIN;
	uint8_t x108 = 0U;
	volatile int32_t t2 = -1;

	t2 = (((x105<=x106)<x107)<<x108);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x113 = INT32_MIN;
	volatile int32_t t3 = -16496;

	t3 = (((x113<=x114)<x115)<<x116);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x125 = -1;
	volatile int8_t x127 = INT8_MAX;
	uint64_t x128 = 12LLU;
	int32_t t4 = 1;

	t4 = (((x125<=x126)<x127)<<x128);

	if (t4 != 4096) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x141 = 0U;
	int32_t x142 = INT32_MAX;
	int16_t x143 = -1;
	uint64_t x144 = 2LLU;
	int32_t t5 = 361543;

	t5 = (((x141<=x142)<x143)<<x144);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x193 = -1;
	int64_t x195 = INT64_MIN;
	int8_t x196 = 1;
	int32_t t6 = 38715;

	t6 = (((x193<=x194)<x195)<<x196);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x197 = -1LL;
	volatile int8_t x198 = INT8_MAX;
	volatile int32_t t7 = -979746;

	t7 = (((x197<=x198)<x199)<<x200);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x229 = INT16_MAX;
	int32_t x230 = 31574;
	uint16_t x232 = 3U;
	int32_t t8 = -29;

	t8 = (((x229<=x230)<x231)<<x232);

	if (t8 != 8) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x241 = 0;
	int64_t x242 = -1LL;
	int32_t x243 = 2992803;
	uint8_t x244 = 3U;

	t9 = (((x241<=x242)<x243)<<x244);

	if (t9 != 8) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x283 = 6;
	uint8_t x284 = 14U;

	t10 = (((x281<=x282)<x283)<<x284);

	if (t10 != 16384) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x294 = INT32_MAX;
	int16_t x295 = INT16_MIN;
	int32_t t11 = 529;

	t11 = (((x293<=x294)<x295)<<x296);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x337 = -75;
	uint64_t x338 = 2250492586LLU;
	static volatile int16_t x339 = -2128;
	uint16_t x340 = 0U;

	t12 = (((x337<=x338)<x339)<<x340);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x413 = -1;
	static int64_t x414 = INT64_MAX;
	int16_t x415 = 1875;
	static int32_t x416 = 1;

	t13 = (((x413<=x414)<x415)<<x416);

	if (t13 != 2) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x509 = 0U;
	static volatile int8_t x510 = -1;
	int64_t x511 = INT64_MIN;
	int16_t x512 = 15;
	int32_t t14 = 2433672;

	t14 = (((x509<=x510)<x511)<<x512);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x529 = INT32_MAX;
	volatile int16_t x530 = INT16_MIN;
	int16_t x531 = INT16_MAX;
	int16_t x532 = 8;

	t15 = (((x529<=x530)<x531)<<x532);

	if (t15 != 256) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x537 = 12;
	volatile uint64_t x538 = UINT64_MAX;
	int32_t t16 = -561010411;

	t16 = (((x537<=x538)<x539)<<x540);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x565 = INT64_MAX;
	uint64_t x566 = 620274800898992LLU;
	int8_t x567 = INT8_MIN;
	static int8_t x568 = 1;

	t17 = (((x565<=x566)<x567)<<x568);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x570 = 24U;
	uint8_t x571 = 19U;
	int16_t x572 = 0;
	int32_t t18 = -575;

	t18 = (((x569<=x570)<x571)<<x572);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x577 = -1129895739667LL;
	static int16_t x578 = 28;
	uint8_t x579 = 4U;
	uint16_t x580 = 27U;

	t19 = (((x577<=x578)<x579)<<x580);

	if (t19 != 134217728) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x589 = 779583010202669818LL;
	uint8_t x590 = 5U;
	volatile uint8_t x591 = UINT8_MAX;
	int8_t x592 = 3;
	volatile int32_t t20 = 329;

	t20 = (((x589<=x590)<x591)<<x592);

	if (t20 != 8) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x596 = 1;
	int32_t t21 = 3205587;

	t21 = (((x593<=x594)<x595)<<x596);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x753 = -1;
	static int64_t x754 = -562264404313047LL;
	uint64_t x755 = 27378LLU;
	static int32_t x756 = 4;
	static volatile int32_t t22 = 34;

	t22 = (((x753<=x754)<x755)<<x756);

	if (t22 != 16) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x761 = INT64_MIN;
	volatile uint8_t x762 = UINT8_MAX;
	uint64_t x763 = UINT64_MAX;
	static volatile int32_t t23 = -1476699;

	t23 = (((x761<=x762)<x763)<<x764);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x773 = 3713U;
	uint64_t x775 = UINT64_MAX;
	static int8_t x776 = 1;
	volatile int32_t t24 = -51096147;

	t24 = (((x773<=x774)<x775)<<x776);

	if (t24 != 2) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x793 = 197169;
	int64_t x796 = 0LL;
	static volatile int32_t t25 = 314391;

	t25 = (((x793<=x794)<x795)<<x796);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int32_t x797 = INT32_MIN;
	int8_t x798 = INT8_MIN;
	static int16_t x799 = INT16_MIN;
	uint32_t x800 = 30U;
	volatile int32_t t26 = 458907203;

	t26 = (((x797<=x798)<x799)<<x800);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x805 = INT16_MAX;
	int64_t x806 = INT64_MIN;
	int32_t x807 = 1;
	uint8_t x808 = 7U;

	t27 = (((x805<=x806)<x807)<<x808);

	if (t27 != 128) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x818 = INT64_MIN;
	uint32_t x820 = 0U;
	volatile int32_t t28 = 5679;

	t28 = (((x817<=x818)<x819)<<x820);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x829 = 13U;
	volatile int8_t x830 = INT8_MIN;
	static int8_t x831 = -1;
	static uint8_t x832 = 4U;
	static volatile int32_t t29 = 8;

	t29 = (((x829<=x830)<x831)<<x832);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x865 = UINT8_MAX;
	uint64_t x866 = 32248879769993LLU;
	static uint8_t x868 = 28U;
	volatile int32_t t30 = -1;

	t30 = (((x865<=x866)<x867)<<x868);

	if (t30 != 268435456) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x913 = -1;
	int8_t x914 = -9;
	static uint8_t x915 = 89U;
	int8_t x916 = 8;
	int32_t t31 = -7;

	t31 = (((x913<=x914)<x915)<<x916);

	if (t31 != 256) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x922 = UINT64_MAX;
	uint64_t x923 = UINT64_MAX;
	int8_t x924 = 5;

	t32 = (((x921<=x922)<x923)<<x924);

	if (t32 != 32) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x933 = INT32_MIN;
	static uint64_t x934 = UINT64_MAX;
	int32_t x935 = INT32_MIN;
	uint16_t x936 = 1U;

	t33 = (((x933<=x934)<x935)<<x936);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x949 = INT8_MIN;
	int16_t x951 = INT16_MIN;

	t34 = (((x949<=x950)<x951)<<x952);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x957 = UINT16_MAX;
	int16_t x958 = INT16_MIN;
	int32_t x959 = INT32_MIN;
	static int8_t x960 = 29;
	volatile int32_t t35 = 31061;

	t35 = (((x957<=x958)<x959)<<x960);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x985 = 0U;
	int64_t x987 = -1996356204067231LL;
	int64_t x988 = 6LL;
	int32_t t36 = 242;

	t36 = (((x985<=x986)<x987)<<x988);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1025 = 942079825943LL;
	uint8_t x1026 = 3U;
	int8_t x1028 = 1;
	volatile int32_t t37 = 93798;

	t37 = (((x1025<=x1026)<x1027)<<x1028);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1078 = INT32_MIN;
	volatile uint32_t x1079 = 30602840U;
	volatile int32_t t38 = -26;

	t38 = (((x1077<=x1078)<x1079)<<x1080);

	if (t38 != 64) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x1089 = 306U;
	volatile uint64_t x1090 = 398160310LLU;
	int16_t x1091 = INT16_MIN;

	t39 = (((x1089<=x1090)<x1091)<<x1092);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x1109 = INT16_MAX;
	uint32_t x1110 = UINT32_MAX;
	int64_t x1111 = INT64_MAX;
	uint8_t x1112 = 5U;
	volatile int32_t t40 = 339;

	t40 = (((x1109<=x1110)<x1111)<<x1112);

	if (t40 != 32) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1169 = INT32_MIN;
	int32_t x1170 = INT32_MIN;
	volatile uint16_t x1171 = UINT16_MAX;
	uint8_t x1172 = 3U;
	int32_t t41 = 466;

	t41 = (((x1169<=x1170)<x1171)<<x1172);

	if (t41 != 8) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x1241 = INT8_MIN;
	int32_t x1242 = -986625;
	int32_t x1243 = 110532247;
	uint16_t x1244 = 26U;
	int32_t t42 = 404016;

	t42 = (((x1241<=x1242)<x1243)<<x1244);

	if (t42 != 67108864) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x1253 = 0U;
	static int64_t x1254 = -9077933691452LL;
	int64_t x1255 = INT64_MIN;
	uint16_t x1256 = 3U;
	int32_t t43 = -13697;

	t43 = (((x1253<=x1254)<x1255)<<x1256);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x1322 = 7141U;
	uint32_t x1323 = 2U;
	volatile int32_t t44 = -22;

	t44 = (((x1321<=x1322)<x1323)<<x1324);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x1362 = 2149186485825864716LLU;
	volatile int32_t x1363 = INT32_MAX;
	static uint16_t x1364 = 7U;
	volatile int32_t t45 = -6161;

	t45 = (((x1361<=x1362)<x1363)<<x1364);

	if (t45 != 128) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x1421 = -7615;
	volatile int64_t x1422 = INT64_MIN;
	int64_t x1423 = 65002010270LL;
	int8_t x1424 = 0;
	int32_t t46 = 297;

	t46 = (((x1421<=x1422)<x1423)<<x1424);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x1437 = INT16_MIN;
	int16_t x1440 = 5;
	int32_t t47 = 7;

	t47 = (((x1437<=x1438)<x1439)<<x1440);

	if (t47 != 32) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x1445 = INT8_MIN;
	int8_t x1446 = INT8_MIN;
	int16_t x1447 = -1;

	t48 = (((x1445<=x1446)<x1447)<<x1448);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x1457 = UINT8_MAX;
	int32_t x1458 = -1;
	uint8_t x1460 = 7U;
	int32_t t49 = 279012432;

	t49 = (((x1457<=x1458)<x1459)<<x1460);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x1495 = INT64_MIN;
	int16_t x1496 = 0;

	t50 = (((x1493<=x1494)<x1495)<<x1496);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x1497 = 61LLU;
	volatile uint8_t x1498 = 30U;
	int16_t x1499 = -1426;
	static uint32_t x1500 = 4U;

	t51 = (((x1497<=x1498)<x1499)<<x1500);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x1577 = 0;
	uint16_t x1579 = 8631U;
	uint16_t x1580 = 3U;

	t52 = (((x1577<=x1578)<x1579)<<x1580);

	if (t52 != 8) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x1585 = INT64_MIN;
	int16_t x1586 = -404;
	volatile int32_t t53 = -115146;

	t53 = (((x1585<=x1586)<x1587)<<x1588);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x1657 = INT64_MIN;
	volatile int32_t x1659 = INT32_MAX;
	volatile int8_t x1660 = 0;
	int32_t t54 = 931044;

	t54 = (((x1657<=x1658)<x1659)<<x1660);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x1731 = -1LL;
	uint8_t x1732 = 3U;
	int32_t t55 = -2;

	t55 = (((x1729<=x1730)<x1731)<<x1732);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x1863 = INT8_MIN;
	uint16_t x1864 = 18U;
	static int32_t t56 = -4242599;

	t56 = (((x1861<=x1862)<x1863)<<x1864);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x1885 = INT32_MIN;
	int16_t x1886 = -1;
	static int16_t x1887 = -1;
	uint8_t x1888 = 2U;
	static volatile int32_t t57 = -7421;

	t57 = (((x1885<=x1886)<x1887)<<x1888);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x1897 = UINT8_MAX;
	static int8_t x1898 = 0;
	int64_t x1899 = INT64_MAX;
	uint8_t x1900 = 0U;
	volatile int32_t t58 = 4;

	t58 = (((x1897<=x1898)<x1899)<<x1900);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint32_t x1905 = 2U;
	int32_t x1906 = INT32_MIN;
	uint32_t x1907 = 429166U;
	uint8_t x1908 = 3U;

	t59 = (((x1905<=x1906)<x1907)<<x1908);

	if (t59 != 8) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x2013 = -9;
	int64_t x2015 = INT64_MIN;
	int8_t x2016 = 0;
	static int32_t t60 = 4164957;

	t60 = (((x2013<=x2014)<x2015)<<x2016);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x2054 = INT16_MAX;
	static int16_t x2055 = INT16_MIN;
	uint8_t x2056 = 1U;
	int32_t t61 = -6802;

	t61 = (((x2053<=x2054)<x2055)<<x2056);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x2077 = 1U;
	static int16_t x2079 = INT16_MAX;
	static int8_t x2080 = 1;

	t62 = (((x2077<=x2078)<x2079)<<x2080);

	if (t62 != 2) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x2085 = INT64_MAX;
	int16_t x2086 = INT16_MAX;
	uint8_t x2088 = 7U;

	t63 = (((x2085<=x2086)<x2087)<<x2088);

	if (t63 != 128) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x2122 = INT32_MIN;
	static int32_t x2123 = -157;
	volatile uint8_t x2124 = 29U;

	t64 = (((x2121<=x2122)<x2123)<<x2124);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x2134 = 11U;
	volatile uint32_t x2135 = 23949U;
	int8_t x2136 = 26;
	static int32_t t65 = -2956726;

	t65 = (((x2133<=x2134)<x2135)<<x2136);

	if (t65 != 67108864) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x2149 = INT8_MIN;
	static int8_t x2150 = INT8_MIN;
	volatile int16_t x2151 = -1;
	volatile uint8_t x2152 = 7U;
	int32_t t66 = 0;

	t66 = (((x2149<=x2150)<x2151)<<x2152);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x2157 = INT16_MIN;
	uint32_t x2158 = 60U;
	uint16_t x2159 = UINT16_MAX;
	uint64_t x2160 = 2LLU;
	int32_t t67 = 18;

	t67 = (((x2157<=x2158)<x2159)<<x2160);

	if (t67 != 4) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x2183 = 359938811U;
	int64_t x2184 = 0LL;
	int32_t t68 = 5;

	t68 = (((x2181<=x2182)<x2183)<<x2184);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x2217 = 580;
	uint32_t x2220 = 0U;
	volatile int32_t t69 = -8076194;

	t69 = (((x2217<=x2218)<x2219)<<x2220);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x2225 = 2132936;
	uint8_t x2226 = 10U;
	int8_t x2227 = INT8_MIN;
	volatile int8_t x2228 = 1;
	int32_t t70 = -270199;

	t70 = (((x2225<=x2226)<x2227)<<x2228);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x2229 = INT8_MIN;
	int8_t x2230 = INT8_MAX;
	uint8_t x2232 = 3U;

	t71 = (((x2229<=x2230)<x2231)<<x2232);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x2249 = -1;
	uint32_t x2250 = 124035447U;
	uint64_t x2251 = 451462143072325LLU;
	int32_t x2252 = 3;

	t72 = (((x2249<=x2250)<x2251)<<x2252);

	if (t72 != 8) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x2258 = UINT16_MAX;
	static int16_t x2259 = -7716;
	static volatile int16_t x2260 = 2;

	t73 = (((x2257<=x2258)<x2259)<<x2260);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint32_t x2317 = 8356U;
	int32_t x2319 = 8999;
	int32_t t74 = -444;

	t74 = (((x2317<=x2318)<x2319)<<x2320);

	if (t74 != 512) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x2350 = UINT32_MAX;
	uint8_t x2352 = 0U;

	t75 = (((x2349<=x2350)<x2351)<<x2352);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x2377 = 1186353;
	uint64_t x2378 = UINT64_MAX;
	uint8_t x2380 = 6U;
	int32_t t76 = 7787;

	t76 = (((x2377<=x2378)<x2379)<<x2380);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x2437 = -1;
	volatile uint8_t x2440 = 7U;
	volatile int32_t t77 = -6;

	t77 = (((x2437<=x2438)<x2439)<<x2440);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x2441 = 5U;
	static int32_t x2442 = INT32_MIN;
	static int16_t x2443 = INT16_MIN;
	static volatile int16_t x2444 = 29;
	int32_t t78 = -1243856;

	t78 = (((x2441<=x2442)<x2443)<<x2444);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x2477 = INT64_MAX;
	int64_t x2478 = INT64_MIN;
	int8_t x2479 = INT8_MIN;
	volatile int8_t x2480 = 0;
	int32_t t79 = 1381;

	t79 = (((x2477<=x2478)<x2479)<<x2480);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x2497 = 1;
	static volatile int8_t x2498 = INT8_MIN;
	static uint8_t x2500 = 13U;
	int32_t t80 = -72443955;

	t80 = (((x2497<=x2498)<x2499)<<x2500);

	if (t80 != 8192) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x2529 = INT32_MIN;
	int8_t x2530 = INT8_MAX;
	static int16_t x2531 = INT16_MIN;
	uint8_t x2532 = 0U;
	volatile int32_t t81 = -66924268;

	t81 = (((x2529<=x2530)<x2531)<<x2532);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x2617 = INT8_MIN;
	int64_t x2618 = -837456555968992712LL;
	volatile int32_t x2619 = -7274953;
	uint8_t x2620 = 0U;
	static volatile int32_t t82 = 7050;

	t82 = (((x2617<=x2618)<x2619)<<x2620);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x2646 = UINT64_MAX;
	int16_t x2647 = INT16_MAX;
	uint8_t x2648 = 13U;
	int32_t t83 = 0;

	t83 = (((x2645<=x2646)<x2647)<<x2648);

	if (t83 != 8192) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x2689 = 1257481084LLU;
	int32_t x2690 = -1;
	static int8_t x2691 = -1;
	static volatile int32_t t84 = 5;

	t84 = (((x2689<=x2690)<x2691)<<x2692);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x2733 = INT32_MIN;
	static int8_t x2734 = INT8_MIN;
	int16_t x2735 = -1;
	static uint8_t x2736 = 1U;
	int32_t t85 = -8248;

	t85 = (((x2733<=x2734)<x2735)<<x2736);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x2749 = 0U;
	uint64_t x2750 = UINT64_MAX;
	int64_t x2751 = INT64_MIN;
	uint8_t x2752 = 4U;
	static int32_t t86 = -25001772;

	t86 = (((x2749<=x2750)<x2751)<<x2752);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x2765 = 232LLU;
	static int32_t x2766 = -1;
	uint16_t x2768 = 7U;
	static int32_t t87 = 10580;

	t87 = (((x2765<=x2766)<x2767)<<x2768);

	if (t87 != 128) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x2809 = -1;
	int64_t x2810 = INT64_MAX;
	int64_t x2812 = 0LL;
	static int32_t t88 = 134257;

	t88 = (((x2809<=x2810)<x2811)<<x2812);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x2869 = UINT64_MAX;
	volatile uint64_t x2870 = 5750168795882442LLU;
	int32_t x2871 = 33129380;
	static uint32_t x2872 = 1U;
	volatile int32_t t89 = 135406;

	t89 = (((x2869<=x2870)<x2871)<<x2872);

	if (t89 != 2) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x2878 = 3745096025678LLU;
	static volatile uint8_t x2880 = 2U;
	int32_t t90 = -373446;

	t90 = (((x2877<=x2878)<x2879)<<x2880);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x2949 = INT16_MIN;
	int64_t x2950 = INT64_MAX;
	uint16_t x2951 = 310U;
	volatile int8_t x2952 = 22;

	t91 = (((x2949<=x2950)<x2951)<<x2952);

	if (t91 != 4194304) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x2965 = -1LL;
	static volatile uint64_t x2966 = UINT64_MAX;
	int16_t x2967 = -6;
	int8_t x2968 = 14;
	volatile int32_t t92 = -1;

	t92 = (((x2965<=x2966)<x2967)<<x2968);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x2985 = INT32_MIN;
	volatile int32_t x2986 = -1;
	uint32_t x2988 = 14U;

	t93 = (((x2985<=x2986)<x2987)<<x2988);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x3005 = INT16_MIN;
	static uint16_t x3006 = 8770U;
	int32_t x3007 = -1;
	uint8_t x3008 = 30U;
	volatile int32_t t94 = -12121;

	t94 = (((x3005<=x3006)<x3007)<<x3008);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x3021 = INT16_MIN;
	uint64_t x3022 = UINT64_MAX;
	int8_t x3024 = 0;
	int32_t t95 = -1;

	t95 = (((x3021<=x3022)<x3023)<<x3024);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x3029 = INT16_MIN;
	volatile uint8_t x3031 = 7U;
	static volatile int16_t x3032 = 24;
	int32_t t96 = 0;

	t96 = (((x3029<=x3030)<x3031)<<x3032);

	if (t96 != 16777216) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x3069 = 2675U;
	static uint64_t x3071 = UINT64_MAX;
	static uint16_t x3072 = 1U;

	t97 = (((x3069<=x3070)<x3071)<<x3072);

	if (t97 != 2) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x3077 = -9;
	int8_t x3079 = -1;
	int8_t x3080 = 0;
	volatile int32_t t98 = 269556;

	t98 = (((x3077<=x3078)<x3079)<<x3080);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x3081 = INT16_MAX;
	static volatile int8_t x3082 = INT8_MIN;
	int8_t x3083 = INT8_MIN;

	t99 = (((x3081<=x3082)<x3083)<<x3084);

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


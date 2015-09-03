#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x42 = 5U;
static uint64_t x43 = UINT64_MAX;
volatile int32_t t2 = 85872;
int8_t x90 = 1;
int64_t x285 = 83320410032163500LL;
uint64_t x321 = 350409LLU;
volatile uint8_t x394 = 17U;
int32_t x396 = INT32_MIN;
uint8_t x419 = UINT8_MAX;
static volatile int32_t t10 = 161660;
static int32_t x505 = INT32_MAX;
uint8_t x525 = 1U;
static int8_t x527 = INT8_MIN;
static volatile int16_t x549 = 1;
uint64_t x550 = UINT64_MAX;
static int32_t x551 = -1;
static uint32_t x626 = UINT32_MAX;
volatile int64_t x627 = -1LL;
uint16_t x688 = 324U;
volatile uint8_t x766 = 0U;
volatile int32_t t19 = 28030545;
volatile int16_t x799 = -1;
uint64_t x889 = 228632345LLU;
volatile int8_t x958 = 1;
uint8_t x959 = 24U;
volatile int8_t x960 = -1;
uint16_t x996 = 13710U;
static int32_t x1022 = -1;
static uint16_t x1024 = UINT16_MAX;
int32_t x1097 = 7516551;
uint32_t x1116 = UINT32_MAX;
uint32_t x1129 = 2365356U;
int8_t x1130 = -1;
volatile uint32_t x1149 = 90441275U;
uint8_t x1194 = 3U;
static volatile uint32_t t29 = 2U;
int8_t x1230 = -1;
uint16_t x1231 = 15U;
static int8_t x1233 = INT8_MAX;
int32_t x1285 = INT32_MAX;
uint32_t x1422 = UINT32_MAX;
int64_t x1424 = 0LL;
static volatile uint32_t t34 = 43034U;
int8_t x1463 = -1;
volatile uint64_t t35 = 5LLU;
int32_t x1479 = 8189405;
uint8_t x1481 = 8U;
uint64_t x1570 = UINT64_MAX;
int32_t x1571 = -671671695;
uint32_t x1573 = 10U;
volatile int16_t x1648 = INT16_MAX;
int64_t x1663 = INT64_MAX;
volatile uint64_t t42 = 99919848LLU;
static volatile int16_t x1676 = 8922;
volatile int32_t t43 = 1;
int32_t t44 = 0;
uint16_t x1749 = 11547U;
int8_t x1750 = 14;
uint64_t x1751 = UINT64_MAX;
int64_t x1752 = INT64_MIN;
int64_t x1771 = -1LL;
static int16_t x1777 = INT16_MAX;
int16_t x1805 = 1076;
int32_t x1884 = INT32_MAX;
volatile uint8_t x1961 = UINT8_MAX;
int8_t x2063 = INT8_MAX;
int8_t x2073 = INT8_MAX;
int8_t x2075 = 1;
volatile int32_t t58 = -1121;
int64_t x2081 = 5715847999LL;
int32_t x2082 = -1;
int32_t x2083 = -1;
volatile uint16_t x2101 = UINT16_MAX;
int32_t x2104 = -13059;
static int64_t x2122 = -1LL;
int32_t t64 = -3;
uint16_t x2249 = 20358U;
int8_t x2370 = 1;
static int16_t x2371 = INT16_MAX;
static int64_t x2372 = -1LL;
int8_t x2662 = 18;
uint32_t x2698 = UINT32_MAX;
uint8_t x2714 = 45U;
int64_t x2795 = -13547360LL;
volatile uint32_t t76 = 6U;
static volatile uint64_t x2818 = 3LLU;
uint64_t x2841 = 5259283297294LLU;
uint32_t x2843 = 121449U;
static uint16_t x2872 = 165U;
int8_t x2931 = INT8_MAX;
volatile int32_t t83 = 10466562;
static uint16_t x3117 = UINT16_MAX;
volatile int32_t x3119 = -999855;
int32_t x3121 = 95;
int8_t x3136 = -16;
uint8_t x3142 = 1U;
static int16_t x3175 = INT16_MAX;
int32_t x3338 = -1;
uint64_t x3393 = 475LLU;
int64_t x3409 = 188449908886LL;
int32_t x3422 = -1;
uint64_t x3449 = UINT64_MAX;
uint8_t x3452 = UINT8_MAX;
uint32_t t98 = 0U;


void f0(void) {
	uint8_t x1 = 4U;
	static int8_t x2 = 0;
	static int64_t x3 = -510148252527392LL;
	static volatile int64_t x4 = -1LL;
	volatile int32_t t0 = -7311;

	t0 = (x1>>(x2+(x3<x4)));

	if (t0 != 2) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	static int16_t x6 = -1;
	uint8_t x7 = 0U;
	uint32_t x8 = 1673U;
	int32_t t1 = 20223861;

	t1 = (x5>>(x6+(x7<x8)));

	if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x41 = INT8_MAX;
	int8_t x44 = INT8_MIN;

	t2 = (x41>>(x42+(x43<x44)));

	if (t2 != 3) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x69 = 523426;
	uint16_t x70 = 2U;
	int16_t x71 = 209;
	int32_t x72 = -38503;
	volatile int32_t t3 = -14000844;

	t3 = (x69>>(x70+(x71<x72)));

	if (t3 != 130856) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x89 = 99962414LLU;
	int16_t x91 = 1;
	int64_t x92 = -11101022867LL;
	volatile uint64_t t4 = 1073364LLU;

	t4 = (x89>>(x90+(x91<x92)));

	if (t4 != 49981207LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x241 = UINT64_MAX;
	int8_t x242 = 0;
	static uint64_t x243 = UINT64_MAX;
	uint32_t x244 = 5602U;
	volatile uint64_t t5 = UINT64_MAX;

	t5 = (x241>>(x242+(x243<x244)));

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x286 = 9U;
	int64_t x287 = INT64_MIN;
	static volatile int32_t x288 = -456752897;
	int64_t t6 = 1167387LL;

	t6 = (x285>>(x286+(x287<x288)));

	if (t6 != 81367587922034LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x322 = -1;
	int32_t x323 = -53582;
	volatile int32_t x324 = 15213;
	volatile uint64_t t7 = 14LLU;

	t7 = (x321>>(x322+(x323<x324)));

	if (t7 != 350409LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x325 = 824U;
	uint64_t x326 = UINT64_MAX;
	int16_t x327 = 0;
	uint16_t x328 = 118U;
	int32_t t8 = 5;

	t8 = (x325>>(x326+(x327<x328)));

	if (t8 != 824) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x393 = 1;
	uint16_t x395 = 0U;
	volatile int32_t t9 = 32;

	t9 = (x393>>(x394+(x395<x396)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x417 = 3U;
	volatile uint32_t x418 = UINT32_MAX;
	int32_t x420 = INT32_MAX;

	t10 = (x417>>(x418+(x419<x420)));

	if (t10 != 3) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x506 = -1;
	uint8_t x507 = 58U;
	uint8_t x508 = UINT8_MAX;
	static volatile int32_t t11 = INT32_MAX;

	t11 = (x505>>(x506+(x507<x508)));

	if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x526 = -1;
	static volatile uint8_t x528 = 25U;
	int32_t t12 = -40229;

	t12 = (x525>>(x526+(x527<x528)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x552 = UINT16_MAX;
	volatile int32_t t13 = -311;

	t13 = (x549>>(x550+(x551<x552)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x625 = 0;
	volatile uint32_t x628 = 203219400U;
	int32_t t14 = -178;

	t14 = (x625>>(x626+(x627<x628)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x685 = 118903142U;
	uint64_t x686 = UINT64_MAX;
	volatile int32_t x687 = -6962160;
	uint32_t t15 = 3051904U;

	t15 = (x685>>(x686+(x687<x688)));

	if (t15 != 118903142U) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x701 = UINT16_MAX;
	uint8_t x702 = 4U;
	static int64_t x703 = INT64_MIN;
	volatile uint16_t x704 = 3U;
	volatile int32_t t16 = 48;

	t16 = (x701>>(x702+(x703<x704)));

	if (t16 != 2047) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x713 = 17406U;
	static uint16_t x714 = 9U;
	int16_t x715 = -335;
	volatile int16_t x716 = INT16_MIN;
	int32_t t17 = -17;

	t17 = (x713>>(x714+(x715<x716)));

	if (t17 != 33) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x717 = 4955U;
	uint8_t x718 = 1U;
	uint64_t x719 = UINT64_MAX;
	int16_t x720 = INT16_MIN;
	volatile int32_t t18 = -1789818;

	t18 = (x717>>(x718+(x719<x720)));

	if (t18 != 2477) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x765 = 49U;
	static uint64_t x767 = UINT64_MAX;
	static volatile int16_t x768 = 19;

	t19 = (x765>>(x766+(x767<x768)));

	if (t19 != 49) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x797 = UINT64_MAX;
	uint8_t x798 = 2U;
	int8_t x800 = INT8_MIN;
	static volatile uint64_t t20 = 2244320364LLU;

	t20 = (x797>>(x798+(x799<x800)));

	if (t20 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x890 = -1;
	int64_t x891 = INT64_MIN;
	volatile int32_t x892 = INT32_MIN;
	volatile uint64_t t21 = 5572507LLU;

	t21 = (x889>>(x890+(x891<x892)));

	if (t21 != 228632345LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x957 = 2U;
	int32_t t22 = 98;

	t22 = (x957>>(x958+(x959<x960)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x993 = UINT32_MAX;
	static int64_t x994 = -1LL;
	volatile int8_t x995 = 0;
	uint32_t t23 = UINT32_MAX;

	t23 = (x993>>(x994+(x995<x996)));

	if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x1021 = UINT16_MAX;
	volatile int16_t x1023 = INT16_MIN;
	volatile int32_t t24 = 1136;

	t24 = (x1021>>(x1022+(x1023<x1024)));

	if (t24 != 65535) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x1098 = 30U;
	int64_t x1099 = -7507LL;
	int32_t x1100 = 2;
	static volatile int32_t t25 = -56;

	t25 = (x1097>>(x1098+(x1099<x1100)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1113 = 3U;
	int8_t x1114 = -1;
	int64_t x1115 = INT64_MIN;
	int32_t t26 = 40;

	t26 = (x1113>>(x1114+(x1115<x1116)));

	if (t26 != 3) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1131 = 82375046LLU;
	static volatile int8_t x1132 = INT8_MIN;
	static volatile uint32_t t27 = 25513775U;

	t27 = (x1129>>(x1130+(x1131<x1132)));

	if (t27 != 2365356U) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x1150 = 14;
	static uint64_t x1151 = 17857911LLU;
	uint64_t x1152 = UINT64_MAX;
	uint32_t t28 = 68384U;

	t28 = (x1149>>(x1150+(x1151<x1152)));

	if (t28 != 2760U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1193 = UINT32_MAX;
	int8_t x1195 = INT8_MIN;
	uint8_t x1196 = UINT8_MAX;

	t29 = (x1193>>(x1194+(x1195<x1196)));

	if (t29 != 268435455U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x1229 = 3U;
	int64_t x1232 = 2182640LL;
	volatile int32_t t30 = 173;

	t30 = (x1229>>(x1230+(x1231<x1232)));

	if (t30 != 3) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x1234 = 3U;
	int64_t x1235 = -370829LL;
	volatile int64_t x1236 = -17LL;
	int32_t t31 = -91364;

	t31 = (x1233>>(x1234+(x1235<x1236)));

	if (t31 != 7) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x1286 = 1;
	volatile int16_t x1287 = INT16_MAX;
	int32_t x1288 = -76848;
	static int32_t t32 = 0;

	t32 = (x1285>>(x1286+(x1287<x1288)));

	if (t32 != 1073741823) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1421 = 1;
	int64_t x1423 = -1881729888214116LL;
	int32_t t33 = -8741;

	t33 = (x1421>>(x1422+(x1423<x1424)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x1453 = 13U;
	volatile int64_t x1454 = 6LL;
	uint64_t x1455 = 880804139LLU;
	int64_t x1456 = INT64_MIN;

	t34 = (x1453>>(x1454+(x1455<x1456)));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x1461 = 4026LLU;
	int32_t x1462 = 0;
	static int64_t x1464 = -1LL;

	t35 = (x1461>>(x1462+(x1463<x1464)));

	if (t35 != 4026LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1477 = 954;
	uint64_t x1478 = UINT64_MAX;
	static volatile uint64_t x1480 = UINT64_MAX;
	int32_t t36 = -1;

	t36 = (x1477>>(x1478+(x1479<x1480)));

	if (t36 != 954) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x1482 = 27U;
	volatile uint64_t x1483 = 7856LLU;
	int32_t x1484 = -1;
	volatile int32_t t37 = 5;

	t37 = (x1481>>(x1482+(x1483<x1484)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1569 = 851511444887408LL;
	int8_t x1572 = INT8_MAX;
	static int64_t t38 = -1999LL;

	t38 = (x1569>>(x1570+(x1571<x1572)));

	if (t38 != 851511444887408LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x1574 = 17U;
	volatile int16_t x1575 = INT16_MIN;
	int64_t x1576 = 45212219939LL;
	uint32_t t39 = 374565U;

	t39 = (x1573>>(x1574+(x1575<x1576)));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x1601 = UINT16_MAX;
	uint64_t x1602 = UINT64_MAX;
	volatile int8_t x1603 = INT8_MAX;
	volatile int32_t x1604 = 3760;
	volatile int32_t t40 = -9863428;

	t40 = (x1601>>(x1602+(x1603<x1604)));

	if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x1645 = UINT32_MAX;
	uint64_t x1646 = UINT64_MAX;
	int8_t x1647 = -1;
	uint32_t t41 = UINT32_MAX;

	t41 = (x1645>>(x1646+(x1647<x1648)));

	if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x1661 = UINT64_MAX;
	volatile int8_t x1662 = 1;
	int8_t x1664 = INT8_MIN;

	t42 = (x1661>>(x1662+(x1663<x1664)));

	if (t42 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x1673 = INT16_MAX;
	static int16_t x1674 = 10;
	volatile int16_t x1675 = INT16_MIN;

	t43 = (x1673>>(x1674+(x1675<x1676)));

	if (t43 != 15) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x1741 = 5U;
	static uint32_t x1742 = UINT32_MAX;
	uint32_t x1743 = 158092466U;
	uint64_t x1744 = UINT64_MAX;

	t44 = (x1741>>(x1742+(x1743<x1744)));

	if (t44 != 5) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t t45 = 2;

	t45 = (x1749>>(x1750+(x1751<x1752)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x1761 = INT8_MAX;
	static uint8_t x1762 = 1U;
	volatile int32_t x1763 = INT32_MIN;
	int16_t x1764 = -1;
	volatile int32_t t46 = -1753855;

	t46 = (x1761>>(x1762+(x1763<x1764)));

	if (t46 != 31) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x1769 = 27;
	int8_t x1770 = -1;
	int64_t x1772 = 736154LL;
	int32_t t47 = 235382;

	t47 = (x1769>>(x1770+(x1771<x1772)));

	if (t47 != 27) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x1778 = 1U;
	uint32_t x1779 = 88U;
	uint16_t x1780 = 65U;
	int32_t t48 = 108;

	t48 = (x1777>>(x1778+(x1779<x1780)));

	if (t48 != 16383) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x1801 = INT8_MAX;
	volatile uint16_t x1802 = 3U;
	static int64_t x1803 = INT64_MIN;
	volatile int8_t x1804 = -1;
	int32_t t49 = 248184122;

	t49 = (x1801>>(x1802+(x1803<x1804)));

	if (t49 != 7) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x1806 = 1;
	int16_t x1807 = -3474;
	int64_t x1808 = -1274194314941608247LL;
	volatile int32_t t50 = 4011001;

	t50 = (x1805>>(x1806+(x1807<x1808)));

	if (t50 != 538) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x1865 = INT32_MAX;
	static volatile int16_t x1866 = 0;
	static int8_t x1867 = -1;
	uint64_t x1868 = UINT64_MAX;
	volatile int32_t t51 = INT32_MAX;

	t51 = (x1865>>(x1866+(x1867<x1868)));

	if (t51 != INT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x1881 = 940494590649064LLU;
	static int8_t x1882 = -1;
	static int16_t x1883 = INT16_MAX;
	uint64_t t52 = 40454882709LLU;

	t52 = (x1881>>(x1882+(x1883<x1884)));

	if (t52 != 940494590649064LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x1962 = 27U;
	int64_t x1963 = -1911LL;
	int16_t x1964 = INT16_MIN;
	int32_t t53 = 97001;

	t53 = (x1961>>(x1962+(x1963<x1964)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x1965 = 3U;
	uint64_t x1966 = UINT64_MAX;
	int64_t x1967 = -1LL;
	uint8_t x1968 = 0U;
	volatile int32_t t54 = -31670358;

	t54 = (x1965>>(x1966+(x1967<x1968)));

	if (t54 != 3) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x2025 = 47U;
	volatile uint8_t x2026 = 3U;
	uint64_t x2027 = UINT64_MAX;
	int8_t x2028 = 16;
	int32_t t55 = 228582229;

	t55 = (x2025>>(x2026+(x2027<x2028)));

	if (t55 != 5) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x2045 = INT8_MAX;
	uint16_t x2046 = 2U;
	int8_t x2047 = 0;
	uint16_t x2048 = 10967U;
	volatile int32_t t56 = -5236044;

	t56 = (x2045>>(x2046+(x2047<x2048)));

	if (t56 != 15) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x2061 = 25131U;
	int16_t x2062 = -1;
	uint16_t x2064 = 329U;
	volatile int32_t t57 = 3295173;

	t57 = (x2061>>(x2062+(x2063<x2064)));

	if (t57 != 25131) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x2074 = 23U;
	int64_t x2076 = -56554940LL;

	t58 = (x2073>>(x2074+(x2075<x2076)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x2084 = 64572453074666LL;
	volatile int64_t t59 = 1LL;

	t59 = (x2081>>(x2082+(x2083<x2084)));

	if (t59 != 5715847999LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x2102 = -1LL;
	int32_t x2103 = INT32_MIN;
	int32_t t60 = -26;

	t60 = (x2101>>(x2102+(x2103<x2104)));

	if (t60 != 65535) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x2109 = UINT32_MAX;
	static int16_t x2110 = -1;
	uint8_t x2111 = 58U;
	uint64_t x2112 = UINT64_MAX;
	uint32_t t61 = UINT32_MAX;

	t61 = (x2109>>(x2110+(x2111<x2112)));

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x2121 = UINT8_MAX;
	int16_t x2123 = INT16_MIN;
	static uint16_t x2124 = 13U;
	int32_t t62 = 7223;

	t62 = (x2121>>(x2122+(x2123<x2124)));

	if (t62 != 255) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x2129 = INT16_MAX;
	static uint8_t x2130 = 1U;
	static int16_t x2131 = 13;
	static uint16_t x2132 = 1001U;
	int32_t t63 = -3477798;

	t63 = (x2129>>(x2130+(x2131<x2132)));

	if (t63 != 8191) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x2173 = 139122;
	uint64_t x2174 = UINT64_MAX;
	volatile uint8_t x2175 = UINT8_MAX;
	volatile uint64_t x2176 = 587704324305188LLU;

	t64 = (x2173>>(x2174+(x2175<x2176)));

	if (t64 != 139122) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x2213 = 31143;
	volatile uint64_t x2214 = UINT64_MAX;
	volatile int16_t x2215 = INT16_MIN;
	static int16_t x2216 = 1718;
	volatile int32_t t65 = 7650510;

	t65 = (x2213>>(x2214+(x2215<x2216)));

	if (t65 != 31143) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x2250 = 7;
	int8_t x2251 = 15;
	volatile uint8_t x2252 = 4U;
	static int32_t t66 = -1529045;

	t66 = (x2249>>(x2250+(x2251<x2252)));

	if (t66 != 159) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x2365 = 9556592931973LL;
	static uint8_t x2366 = 2U;
	uint16_t x2367 = 3739U;
	static int32_t x2368 = 13680845;
	int64_t t67 = -15400436412706088LL;

	t67 = (x2365>>(x2366+(x2367<x2368)));

	if (t67 != 1194574116496LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x2369 = 230890800U;
	volatile uint32_t t68 = 3426815U;

	t68 = (x2369>>(x2370+(x2371<x2372)));

	if (t68 != 115445400U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x2461 = UINT64_MAX;
	static int32_t x2462 = -1;
	static volatile int64_t x2463 = -1LL;
	int8_t x2464 = 1;
	uint64_t t69 = UINT64_MAX;

	t69 = (x2461>>(x2462+(x2463<x2464)));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x2505 = INT8_MAX;
	static uint16_t x2506 = 22U;
	volatile int16_t x2507 = 0;
	int16_t x2508 = INT16_MIN;
	volatile int32_t t70 = 5;

	t70 = (x2505>>(x2506+(x2507<x2508)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x2661 = 2;
	volatile uint32_t x2663 = 9354U;
	static uint16_t x2664 = 2879U;
	volatile int32_t t71 = -25;

	t71 = (x2661>>(x2662+(x2663<x2664)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x2693 = 200776018LL;
	volatile uint8_t x2694 = 5U;
	int8_t x2695 = INT8_MIN;
	volatile int64_t x2696 = INT64_MIN;
	int64_t t72 = 3946967920LL;

	t72 = (x2693>>(x2694+(x2695<x2696)));

	if (t72 != 6274250LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x2697 = 3U;
	int16_t x2699 = INT16_MIN;
	uint8_t x2700 = UINT8_MAX;
	int32_t t73 = -71;

	t73 = (x2697>>(x2698+(x2699<x2700)));

	if (t73 != 3) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x2713 = INT64_MAX;
	int8_t x2715 = INT8_MIN;
	int32_t x2716 = INT32_MAX;
	static volatile int64_t t74 = 1757104804371267LL;

	t74 = (x2713>>(x2714+(x2715<x2716)));

	if (t74 != 131071LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x2765 = UINT8_MAX;
	int8_t x2766 = 1;
	int16_t x2767 = 8;
	int8_t x2768 = 0;
	static int32_t t75 = 221456;

	t75 = (x2765>>(x2766+(x2767<x2768)));

	if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x2793 = 196384U;
	uint8_t x2794 = 4U;
	int64_t x2796 = 18206LL;

	t76 = (x2793>>(x2794+(x2795<x2796)));

	if (t76 != 6137U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x2817 = INT32_MAX;
	volatile int64_t x2819 = INT64_MAX;
	int64_t x2820 = INT64_MIN;
	volatile int32_t t77 = 37270681;

	t77 = (x2817>>(x2818+(x2819<x2820)));

	if (t77 != 268435455) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x2842 = 2U;
	uint32_t x2844 = 19713109U;
	volatile uint64_t t78 = 51903651457LLU;

	t78 = (x2841>>(x2842+(x2843<x2844)));

	if (t78 != 657410412161LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x2869 = 11327277175LLU;
	uint8_t x2870 = 1U;
	volatile int8_t x2871 = INT8_MIN;
	volatile uint64_t t79 = 52264LLU;

	t79 = (x2869>>(x2870+(x2871<x2872)));

	if (t79 != 2831819293LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x2897 = 14U;
	static uint16_t x2898 = 7U;
	uint32_t x2899 = UINT32_MAX;
	int16_t x2900 = INT16_MAX;
	int32_t t80 = 1;

	t80 = (x2897>>(x2898+(x2899<x2900)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x2917 = INT32_MAX;
	uint16_t x2918 = 3U;
	static volatile uint8_t x2919 = UINT8_MAX;
	volatile uint64_t x2920 = 67227652143928602LLU;
	volatile int32_t t81 = -13;

	t81 = (x2917>>(x2918+(x2919<x2920)));

	if (t81 != 134217727) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x2929 = 63386557135LL;
	int32_t x2930 = -1;
	static int16_t x2932 = 285;
	int64_t t82 = 284177318087627214LL;

	t82 = (x2929>>(x2930+(x2931<x2932)));

	if (t82 != 63386557135LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x2977 = 933U;
	uint8_t x2978 = 0U;
	volatile uint64_t x2979 = UINT64_MAX;
	int32_t x2980 = INT32_MIN;

	t83 = (x2977>>(x2978+(x2979<x2980)));

	if (t83 != 933) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint32_t x3041 = 354U;
	static uint64_t x3042 = UINT64_MAX;
	int64_t x3043 = -44249LL;
	static int32_t x3044 = -1;
	volatile uint32_t t84 = 253211U;

	t84 = (x3041>>(x3042+(x3043<x3044)));

	if (t84 != 354U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x3118 = 1;
	int32_t x3120 = INT32_MIN;
	int32_t t85 = -7;

	t85 = (x3117>>(x3118+(x3119<x3120)));

	if (t85 != 32767) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x3122 = UINT32_MAX;
	int64_t x3123 = -22LL;
	uint16_t x3124 = UINT16_MAX;
	volatile int32_t t86 = 13631062;

	t86 = (x3121>>(x3122+(x3123<x3124)));

	if (t86 != 95) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x3133 = 11025847326504807LLU;
	volatile uint32_t x3134 = 21U;
	volatile int8_t x3135 = -1;
	uint64_t t87 = 1LLU;

	t87 = (x3133>>(x3134+(x3135<x3136)));

	if (t87 != 5257533705LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x3141 = INT8_MAX;
	int16_t x3143 = -1;
	volatile uint8_t x3144 = 1U;
	int32_t t88 = 128907;

	t88 = (x3141>>(x3142+(x3143<x3144)));

	if (t88 != 31) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x3161 = 15;
	int16_t x3162 = -1;
	int32_t x3163 = INT32_MIN;
	volatile uint8_t x3164 = UINT8_MAX;
	static volatile int32_t t89 = -546;

	t89 = (x3161>>(x3162+(x3163<x3164)));

	if (t89 != 15) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x3173 = UINT16_MAX;
	uint8_t x3174 = 26U;
	int16_t x3176 = INT16_MIN;
	volatile int32_t t90 = 337;

	t90 = (x3173>>(x3174+(x3175<x3176)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x3265 = 65106154LLU;
	static volatile int32_t x3266 = 1;
	int64_t x3267 = -6954509348609LL;
	int8_t x3268 = 61;
	uint64_t t91 = 9734860949563LLU;

	t91 = (x3265>>(x3266+(x3267<x3268)));

	if (t91 != 16276538LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x3337 = 131;
	int32_t x3339 = -1;
	uint8_t x3340 = 0U;
	int32_t t92 = -137479568;

	t92 = (x3337>>(x3338+(x3339<x3340)));

	if (t92 != 131) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint64_t x3394 = 7LLU;
	uint64_t x3395 = 19620904LLU;
	static int32_t x3396 = -1;
	volatile uint64_t t93 = 7525843082499LLU;

	t93 = (x3393>>(x3394+(x3395<x3396)));

	if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x3410 = 0;
	uint16_t x3411 = 7U;
	static uint64_t x3412 = 6406728351946569418LLU;
	volatile int64_t t94 = 55502506453507LL;

	t94 = (x3409>>(x3410+(x3411<x3412)));

	if (t94 != 94224954443LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x3421 = 29;
	volatile int64_t x3423 = INT64_MIN;
	uint16_t x3424 = UINT16_MAX;
	volatile int32_t t95 = -1111;

	t95 = (x3421>>(x3422+(x3423<x3424)));

	if (t95 != 29) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x3450 = UINT32_MAX;
	int8_t x3451 = -1;
	uint64_t t96 = UINT64_MAX;

	t96 = (x3449>>(x3450+(x3451<x3452)));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x3521 = INT8_MAX;
	int16_t x3522 = 1;
	volatile int8_t x3523 = -9;
	volatile int64_t x3524 = 339733LL;
	int32_t t97 = 262;

	t97 = (x3521>>(x3522+(x3523<x3524)));

	if (t97 != 31) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x3557 = 564U;
	int8_t x3558 = -1;
	uint16_t x3559 = UINT16_MAX;
	uint64_t x3560 = 1316606855741059LLU;

	t98 = (x3557>>(x3558+(x3559<x3560)));

	if (t98 != 564U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x3597 = INT64_MAX;
	int16_t x3598 = -1;
	volatile int64_t x3599 = INT64_MIN;
	int16_t x3600 = INT16_MIN;
	volatile int64_t t99 = INT64_MAX;

	t99 = (x3597>>(x3598+(x3599<x3600)));

	if (t99 != INT64_MAX) { NG(); } else { ; }
	
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


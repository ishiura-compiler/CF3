#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x26 = 27;
volatile uint16_t x101 = 41U;
volatile int16_t x151 = INT16_MIN;
static volatile int8_t x158 = -1;
int32_t x219 = -1;
uint64_t x257 = 27068701629LLU;
volatile uint64_t t7 = 194449426988LLU;
uint32_t x265 = 250U;
int8_t x266 = -1;
uint32_t t8 = 349U;
volatile uint64_t t9 = 2848996LLU;
int32_t x319 = -3105013;
volatile int8_t x381 = 2;
int64_t x384 = -191LL;
uint32_t t14 = 230845U;
static uint64_t x429 = UINT64_MAX;
static uint32_t x463 = 3329717U;
uint16_t x650 = 0U;
volatile int32_t t21 = 1;
int16_t x727 = -1;
static int32_t x762 = 5;
uint16_t x764 = 42U;
int32_t t25 = -2454;
int64_t x856 = INT64_MIN;
volatile uint16_t x877 = 1U;
static uint8_t x973 = 5U;
int32_t t30 = -22083616;
int16_t x1027 = INT16_MAX;
int8_t x1051 = 8;
volatile uint16_t x1061 = UINT16_MAX;
volatile int32_t x1062 = 3;
uint64_t x1063 = 68926984LLU;
static volatile int8_t x1087 = INT8_MIN;
int32_t x1088 = -1;
uint32_t x1241 = UINT32_MAX;
volatile uint64_t x1252 = UINT64_MAX;
static uint64_t x1269 = UINT64_MAX;
volatile int32_t t41 = 44344;
volatile uint16_t x1505 = UINT16_MAX;
int32_t x1506 = 16;
static volatile int64_t x1508 = -1LL;
int32_t t42 = 8;
uint8_t x1518 = 45U;
int8_t x1519 = -24;
static int8_t x1521 = INT8_MAX;
static int16_t x1615 = 98;
uint64_t t45 = UINT64_MAX;
int8_t x1659 = INT8_MIN;
uint64_t t48 = UINT64_MAX;
int64_t x1757 = INT64_MAX;
static volatile int64_t x1776 = INT64_MAX;
uint32_t x1786 = 1U;
int16_t x1807 = INT16_MIN;
volatile int16_t x1831 = 2812;
static uint16_t x1870 = 1U;
uint8_t x1879 = UINT8_MAX;
int32_t x1885 = 599001746;
volatile uint32_t x1888 = 7939U;
static volatile uint16_t x1895 = UINT16_MAX;
int8_t x1919 = INT8_MIN;
volatile int32_t x1927 = INT32_MIN;
static int32_t t62 = 469639;
uint8_t x1957 = 9U;
int32_t x2069 = INT32_MAX;
volatile uint8_t x2070 = 0U;
volatile int32_t t67 = 0;
volatile int32_t x2285 = 95;
static int32_t x2286 = -1;
int8_t x2301 = 10;
int8_t x2304 = -1;
int32_t x2355 = INT32_MIN;
uint64_t x2394 = UINT64_MAX;
int8_t x2411 = INT8_MIN;
uint64_t x2450 = 23LLU;
volatile int32_t t74 = 1689967;
static int64_t x2482 = -1LL;
volatile uint32_t t79 = 235U;
volatile uint16_t x2553 = UINT16_MAX;
int32_t x2564 = INT32_MIN;
int8_t x2635 = -1;
uint32_t x2689 = 1825U;
int64_t x2690 = -1LL;
int32_t t85 = -70;
uint8_t x2796 = 23U;
uint64_t x2813 = 18495502604LLU;
volatile uint16_t x2814 = 57U;
volatile uint32_t x2879 = 337272U;
static uint64_t x2880 = UINT64_MAX;
volatile int64_t t91 = 1753LL;
volatile int8_t x2881 = INT8_MAX;
int32_t x2928 = INT32_MIN;
int32_t t93 = 10294;
volatile int32_t t97 = -1;
static int32_t x3253 = 3;
volatile uint8_t x3255 = UINT8_MAX;


void f0(void) {
	static uint32_t x25 = UINT32_MAX;
	int16_t x27 = 189;
	int64_t x28 = INT64_MIN;
	volatile uint32_t t0 = 186U;

	t0 = (x25>>(x26+(x27<=x28)));

	if (t0 != 31U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x102 = 1;
	uint64_t x103 = UINT64_MAX;
	int16_t x104 = INT16_MIN;
	volatile int32_t t1 = -53017;

	t1 = (x101>>(x102+(x103<=x104)));

	if (t1 != 20) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x117 = INT64_MAX;
	uint32_t x118 = UINT32_MAX;
	static int16_t x119 = INT16_MIN;
	int8_t x120 = -37;
	int64_t t2 = INT64_MAX;

	t2 = (x117>>(x118+(x119<=x120)));

	if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x133 = 27;
	int8_t x134 = -1;
	uint8_t x135 = 2U;
	uint8_t x136 = UINT8_MAX;
	volatile int32_t t3 = 129135827;

	t3 = (x133>>(x134+(x135<=x136)));

	if (t3 != 27) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x149 = 516LLU;
	int16_t x150 = 0;
	int8_t x152 = 0;
	volatile uint64_t t4 = 7088433046LLU;

	t4 = (x149>>(x150+(x151<=x152)));

	if (t4 != 258LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x157 = INT16_MAX;
	uint8_t x159 = 32U;
	static volatile uint64_t x160 = 76LLU;
	int32_t t5 = 20878;

	t5 = (x157>>(x158+(x159<=x160)));

	if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x217 = INT16_MAX;
	int8_t x218 = 16;
	int16_t x220 = INT16_MIN;
	int32_t t6 = 126;

	t6 = (x217>>(x218+(x219<=x220)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x258 = -1LL;
	int8_t x259 = -1;
	static volatile int16_t x260 = INT16_MAX;

	t7 = (x257>>(x258+(x259<=x260)));

	if (t7 != 27068701629LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x267 = INT64_MIN;
	int32_t x268 = INT32_MAX;

	t8 = (x265>>(x266+(x267<=x268)));

	if (t8 != 250U) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x309 = 3700167585LLU;
	volatile uint8_t x310 = 2U;
	static uint64_t x311 = 17963958427314LLU;
	static volatile int64_t x312 = INT64_MIN;

	t9 = (x309>>(x310+(x311<=x312)));

	if (t9 != 462520948LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x317 = 34;
	int16_t x318 = 2;
	uint64_t x320 = 5170838LLU;
	int32_t t10 = 364;

	t10 = (x317>>(x318+(x319<=x320)));

	if (t10 != 8) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x329 = UINT32_MAX;
	uint16_t x330 = 7U;
	int32_t x331 = INT32_MIN;
	volatile uint8_t x332 = 1U;
	uint32_t t11 = 1758945U;

	t11 = (x329>>(x330+(x331<=x332)));

	if (t11 != 16777215U) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x382 = 5U;
	static int8_t x383 = INT8_MIN;
	static int32_t t12 = -1341;

	t12 = (x381>>(x382+(x383<=x384)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x405 = 11685914;
	uint32_t x406 = 7U;
	static volatile int32_t x407 = -1;
	int64_t x408 = INT64_MIN;
	volatile int32_t t13 = -209;

	t13 = (x405>>(x406+(x407<=x408)));

	if (t13 != 91296) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x421 = 405431181U;
	static uint64_t x422 = UINT64_MAX;
	static volatile int64_t x423 = INT64_MIN;
	int8_t x424 = INT8_MIN;

	t14 = (x421>>(x422+(x423<=x424)));

	if (t14 != 405431181U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x430 = -1;
	int8_t x431 = INT8_MAX;
	uint8_t x432 = UINT8_MAX;
	uint64_t t15 = UINT64_MAX;

	t15 = (x429>>(x430+(x431<=x432)));

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x461 = UINT64_MAX;
	uint32_t x462 = UINT32_MAX;
	int16_t x464 = INT16_MIN;
	volatile uint64_t t16 = UINT64_MAX;

	t16 = (x461>>(x462+(x463<=x464)));

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x513 = 3;
	static int64_t x514 = -1LL;
	int32_t x515 = INT32_MAX;
	int64_t x516 = 804562399264663295LL;
	static volatile int32_t t17 = -2220906;

	t17 = (x513>>(x514+(x515<=x516)));

	if (t17 != 3) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x529 = UINT64_MAX;
	static uint8_t x530 = 0U;
	int8_t x531 = INT8_MIN;
	int32_t x532 = INT32_MIN;
	volatile uint64_t t18 = UINT64_MAX;

	t18 = (x529>>(x530+(x531<=x532)));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x649 = 47;
	int32_t x651 = -1;
	uint64_t x652 = 27693031LLU;
	int32_t t19 = -1357;

	t19 = (x649>>(x650+(x651<=x652)));

	if (t19 != 47) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x669 = 229LLU;
	volatile uint32_t x670 = 5U;
	uint32_t x671 = 9102U;
	int8_t x672 = -13;
	uint64_t t20 = 3LLU;

	t20 = (x669>>(x670+(x671<=x672)));

	if (t20 != 3LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x677 = UINT8_MAX;
	uint8_t x678 = 1U;
	static int64_t x679 = -1LL;
	int64_t x680 = INT64_MIN;

	t21 = (x677>>(x678+(x679<=x680)));

	if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x725 = INT32_MAX;
	volatile int8_t x726 = -1;
	int64_t x728 = -1LL;
	volatile int32_t t22 = INT32_MAX;

	t22 = (x725>>(x726+(x727<=x728)));

	if (t22 != INT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x761 = 0U;
	static int32_t x763 = -1;
	volatile int32_t t23 = -321985425;

	t23 = (x761>>(x762+(x763<=x764)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x773 = 19;
	int64_t x774 = -1LL;
	uint8_t x775 = 3U;
	uint32_t x776 = UINT32_MAX;
	int32_t t24 = 6;

	t24 = (x773>>(x774+(x775<=x776)));

	if (t24 != 19) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x801 = INT16_MAX;
	volatile int32_t x802 = -1;
	static int32_t x803 = INT32_MIN;
	int16_t x804 = -1;

	t25 = (x801>>(x802+(x803<=x804)));

	if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x853 = 12103;
	static uint32_t x854 = 7U;
	static int32_t x855 = INT32_MIN;
	volatile int32_t t26 = 8398;

	t26 = (x853>>(x854+(x855<=x856)));

	if (t26 != 94) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x878 = -1;
	static volatile int64_t x879 = -2LL;
	int64_t x880 = -1LL;
	volatile int32_t t27 = 62605;

	t27 = (x877>>(x878+(x879<=x880)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x974 = 16;
	uint64_t x975 = 2685741454200036LLU;
	uint16_t x976 = UINT16_MAX;
	int32_t t28 = 815013333;

	t28 = (x973>>(x974+(x975<=x976)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x985 = 3919;
	uint16_t x986 = 1U;
	uint8_t x987 = 17U;
	int32_t x988 = -492997345;
	int32_t t29 = 27109;

	t29 = (x985>>(x986+(x987<=x988)));

	if (t29 != 1959) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1017 = 79;
	uint8_t x1018 = 1U;
	int32_t x1019 = INT32_MIN;
	int32_t x1020 = INT32_MIN;

	t30 = (x1017>>(x1018+(x1019<=x1020)));

	if (t30 != 19) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1025 = 116003LLU;
	int8_t x1026 = 3;
	int32_t x1028 = -5;
	volatile uint64_t t31 = 4818670662961234LLU;

	t31 = (x1025>>(x1026+(x1027<=x1028)));

	if (t31 != 14500LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1049 = INT32_MAX;
	uint32_t x1050 = UINT32_MAX;
	static volatile uint16_t x1052 = 90U;
	static volatile int32_t t32 = INT32_MAX;

	t32 = (x1049>>(x1050+(x1051<=x1052)));

	if (t32 != INT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1064 = INT32_MAX;
	int32_t t33 = 4;

	t33 = (x1061>>(x1062+(x1063<=x1064)));

	if (t33 != 4095) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x1085 = 6349U;
	int8_t x1086 = 4;
	uint32_t t34 = 204U;

	t34 = (x1085>>(x1086+(x1087<=x1088)));

	if (t34 != 198U) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint16_t x1197 = 14U;
	uint8_t x1198 = 6U;
	static int64_t x1199 = -144LL;
	volatile int16_t x1200 = INT16_MIN;
	int32_t t35 = 309;

	t35 = (x1197>>(x1198+(x1199<=x1200)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x1242 = 1U;
	volatile int16_t x1243 = INT16_MAX;
	static int64_t x1244 = INT64_MIN;
	volatile uint32_t t36 = 217641797U;

	t36 = (x1241>>(x1242+(x1243<=x1244)));

	if (t36 != 2147483647U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1249 = INT64_MAX;
	volatile uint16_t x1250 = 14U;
	int8_t x1251 = INT8_MIN;
	static int64_t t37 = -7579046182LL;

	t37 = (x1249>>(x1250+(x1251<=x1252)));

	if (t37 != 281474976710655LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x1270 = 0;
	uint64_t x1271 = UINT64_MAX;
	int32_t x1272 = -1;
	volatile uint64_t t38 = 1548LLU;

	t38 = (x1269>>(x1270+(x1271<=x1272)));

	if (t38 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x1273 = 1957;
	int8_t x1274 = 23;
	int16_t x1275 = 492;
	int32_t x1276 = INT32_MIN;
	int32_t t39 = -7;

	t39 = (x1273>>(x1274+(x1275<=x1276)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x1373 = 3LLU;
	static int64_t x1374 = -1LL;
	int64_t x1375 = INT64_MIN;
	int64_t x1376 = INT64_MIN;
	volatile uint64_t t40 = 346705878153809698LLU;

	t40 = (x1373>>(x1374+(x1375<=x1376)));

	if (t40 != 3LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x1381 = 122U;
	int8_t x1382 = 4;
	volatile int16_t x1383 = -5561;
	int16_t x1384 = INT16_MIN;

	t41 = (x1381>>(x1382+(x1383<=x1384)));

	if (t41 != 7) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x1507 = 6785LL;

	t42 = (x1505>>(x1506+(x1507<=x1508)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x1517 = UINT64_MAX;
	int16_t x1520 = INT16_MIN;
	uint64_t t43 = 47118218LLU;

	t43 = (x1517>>(x1518+(x1519<=x1520)));

	if (t43 != 524287LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x1522 = 1U;
	static volatile int16_t x1523 = INT16_MAX;
	static uint16_t x1524 = 49U;
	static int32_t t44 = -4957;

	t44 = (x1521>>(x1522+(x1523<=x1524)));

	if (t44 != 63) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x1613 = UINT64_MAX;
	int8_t x1614 = 0;
	int16_t x1616 = INT16_MIN;

	t45 = (x1613>>(x1614+(x1615<=x1616)));

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x1617 = UINT16_MAX;
	static int16_t x1618 = -1;
	volatile int32_t x1619 = INT32_MIN;
	int64_t x1620 = -1LL;
	static volatile int32_t t46 = -32;

	t46 = (x1617>>(x1618+(x1619<=x1620)));

	if (t46 != 65535) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x1657 = UINT64_MAX;
	static int32_t x1658 = -1;
	int8_t x1660 = INT8_MAX;
	volatile uint64_t t47 = UINT64_MAX;

	t47 = (x1657>>(x1658+(x1659<=x1660)));

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x1661 = UINT64_MAX;
	int16_t x1662 = -1;
	int16_t x1663 = INT16_MIN;
	uint8_t x1664 = 9U;

	t48 = (x1661>>(x1662+(x1663<=x1664)));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x1685 = UINT16_MAX;
	static int16_t x1686 = -1;
	int64_t x1687 = INT64_MIN;
	int8_t x1688 = 24;
	volatile int32_t t49 = -181;

	t49 = (x1685>>(x1686+(x1687<=x1688)));

	if (t49 != 65535) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x1758 = -1;
	int64_t x1759 = 46699920078LL;
	int64_t x1760 = INT64_MAX;
	int64_t t50 = INT64_MAX;

	t50 = (x1757>>(x1758+(x1759<=x1760)));

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x1773 = 126LLU;
	int16_t x1774 = 0;
	int16_t x1775 = INT16_MIN;
	uint64_t t51 = 180089479194818992LLU;

	t51 = (x1773>>(x1774+(x1775<=x1776)));

	if (t51 != 63LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x1777 = 12612;
	int32_t x1778 = -1;
	uint8_t x1779 = UINT8_MAX;
	int16_t x1780 = INT16_MAX;
	int32_t t52 = -1037470;

	t52 = (x1777>>(x1778+(x1779<=x1780)));

	if (t52 != 12612) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x1785 = 403U;
	int64_t x1787 = -6886826994977203LL;
	int32_t x1788 = -1;
	uint32_t t53 = 0U;

	t53 = (x1785>>(x1786+(x1787<=x1788)));

	if (t53 != 100U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x1805 = 1U;
	int64_t x1806 = -1LL;
	int8_t x1808 = -12;
	int32_t t54 = 26550141;

	t54 = (x1805>>(x1806+(x1807<=x1808)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x1813 = 17035737208274665LL;
	static int8_t x1814 = -1;
	int16_t x1815 = INT16_MIN;
	int64_t x1816 = -1LL;
	int64_t t55 = 1LL;

	t55 = (x1813>>(x1814+(x1815<=x1816)));

	if (t55 != 17035737208274665LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x1829 = 2009639U;
	uint16_t x1830 = 15U;
	uint32_t x1832 = 23U;
	static volatile uint32_t t56 = 68862353U;

	t56 = (x1829>>(x1830+(x1831<=x1832)));

	if (t56 != 61U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x1869 = 15194452446LL;
	uint32_t x1871 = UINT32_MAX;
	int32_t x1872 = -1;
	volatile int64_t t57 = 512383200980703LL;

	t57 = (x1869>>(x1870+(x1871<=x1872)));

	if (t57 != 3798613111LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x1877 = UINT32_MAX;
	static uint32_t x1878 = 5U;
	int8_t x1880 = 3;
	volatile uint32_t t58 = 3262035U;

	t58 = (x1877>>(x1878+(x1879<=x1880)));

	if (t58 != 134217727U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x1886 = 0;
	static int8_t x1887 = 0;
	int32_t t59 = 916073;

	t59 = (x1885>>(x1886+(x1887<=x1888)));

	if (t59 != 299500873) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x1893 = UINT32_MAX;
	static uint8_t x1894 = 9U;
	int64_t x1896 = 2834013616LL;
	volatile uint32_t t60 = 393954729U;

	t60 = (x1893>>(x1894+(x1895<=x1896)));

	if (t60 != 4194303U) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x1917 = INT32_MAX;
	int16_t x1918 = -1;
	uint16_t x1920 = 0U;
	int32_t t61 = INT32_MAX;

	t61 = (x1917>>(x1918+(x1919<=x1920)));

	if (t61 != INT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x1925 = 1U;
	uint32_t x1926 = 12U;
	uint8_t x1928 = UINT8_MAX;

	t62 = (x1925>>(x1926+(x1927<=x1928)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x1958 = -1;
	int8_t x1959 = INT8_MIN;
	volatile int8_t x1960 = -2;
	int32_t t63 = 1686452;

	t63 = (x1957>>(x1958+(x1959<=x1960)));

	if (t63 != 9) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x2071 = 1;
	int64_t x2072 = INT64_MIN;
	static volatile int32_t t64 = INT32_MAX;

	t64 = (x2069>>(x2070+(x2071<=x2072)));

	if (t64 != INT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x2077 = 2U;
	uint8_t x2078 = 2U;
	int16_t x2079 = 2604;
	uint64_t x2080 = 188002540742340LLU;
	volatile uint32_t t65 = 2U;

	t65 = (x2077>>(x2078+(x2079<=x2080)));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x2177 = 39U;
	int64_t x2178 = -1LL;
	volatile int32_t x2179 = -507;
	int16_t x2180 = 59;
	volatile int32_t t66 = -11900;

	t66 = (x2177>>(x2178+(x2179<=x2180)));

	if (t66 != 39) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x2225 = UINT8_MAX;
	uint8_t x2226 = 14U;
	uint32_t x2227 = 187335784U;
	int16_t x2228 = INT16_MIN;

	t67 = (x2225>>(x2226+(x2227<=x2228)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x2287 = INT8_MIN;
	int64_t x2288 = -1LL;
	static int32_t t68 = 43;

	t68 = (x2285>>(x2286+(x2287<=x2288)));

	if (t68 != 95) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x2302 = 1;
	int64_t x2303 = -126LL;
	int32_t t69 = 0;

	t69 = (x2301>>(x2302+(x2303<=x2304)));

	if (t69 != 2) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x2353 = 128759011U;
	static uint32_t x2354 = 4U;
	int8_t x2356 = -62;
	uint32_t t70 = 1014279U;

	t70 = (x2353>>(x2354+(x2355<=x2356)));

	if (t70 != 4023719U) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x2373 = 23U;
	uint64_t x2374 = 14LLU;
	static uint64_t x2375 = 2902397592036860303LLU;
	uint16_t x2376 = 12799U;
	volatile int32_t t71 = -4166;

	t71 = (x2373>>(x2374+(x2375<=x2376)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x2393 = 754527076294424904LLU;
	static int8_t x2395 = 1;
	uint64_t x2396 = UINT64_MAX;
	volatile uint64_t t72 = 0LLU;

	t72 = (x2393>>(x2394+(x2395<=x2396)));

	if (t72 != 754527076294424904LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x2409 = UINT8_MAX;
	volatile int64_t x2410 = -1LL;
	int8_t x2412 = -1;
	volatile int32_t t73 = 1005411;

	t73 = (x2409>>(x2410+(x2411<=x2412)));

	if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x2449 = INT16_MAX;
	static int32_t x2451 = 1032;
	int8_t x2452 = INT8_MIN;

	t74 = (x2449>>(x2450+(x2451<=x2452)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x2461 = 1316LLU;
	uint8_t x2462 = 37U;
	int8_t x2463 = -9;
	uint16_t x2464 = 1U;
	volatile uint64_t t75 = 34198975025136816LLU;

	t75 = (x2461>>(x2462+(x2463<=x2464)));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x2465 = INT16_MAX;
	static uint8_t x2466 = 24U;
	int64_t x2467 = -359638391117LL;
	volatile int32_t x2468 = -22;
	int32_t t76 = 0;

	t76 = (x2465>>(x2466+(x2467<=x2468)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x2481 = 248578329110076825LL;
	int32_t x2483 = INT32_MIN;
	static int32_t x2484 = -1;
	static volatile int64_t t77 = 1LL;

	t77 = (x2481>>(x2482+(x2483<=x2484)));

	if (t77 != 248578329110076825LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x2509 = 1357577004U;
	uint8_t x2510 = 0U;
	static int8_t x2511 = INT8_MIN;
	int8_t x2512 = -1;
	volatile uint32_t t78 = 16205U;

	t78 = (x2509>>(x2510+(x2511<=x2512)));

	if (t78 != 678788502U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x2545 = UINT32_MAX;
	uint8_t x2546 = 30U;
	uint8_t x2547 = 30U;
	int32_t x2548 = -184;

	t79 = (x2545>>(x2546+(x2547<=x2548)));

	if (t79 != 3U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x2554 = 2;
	int32_t x2555 = INT32_MAX;
	int16_t x2556 = -1;
	static int32_t t80 = 351;

	t80 = (x2553>>(x2554+(x2555<=x2556)));

	if (t80 != 16383) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x2561 = INT16_MAX;
	uint8_t x2562 = 12U;
	static volatile uint8_t x2563 = UINT8_MAX;
	int32_t t81 = 12;

	t81 = (x2561>>(x2562+(x2563<=x2564)));

	if (t81 != 7) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x2581 = 23707LLU;
	int32_t x2582 = -1;
	volatile int64_t x2583 = -101997914LL;
	static uint32_t x2584 = 5033175U;
	uint64_t t82 = 6LLU;

	t82 = (x2581>>(x2582+(x2583<=x2584)));

	if (t82 != 23707LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x2633 = 28866358U;
	uint64_t x2634 = UINT64_MAX;
	int8_t x2636 = INT8_MAX;
	static uint32_t t83 = 126535922U;

	t83 = (x2633>>(x2634+(x2635<=x2636)));

	if (t83 != 28866358U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x2691 = INT8_MIN;
	uint16_t x2692 = 14U;
	volatile uint32_t t84 = 180109U;

	t84 = (x2689>>(x2690+(x2691<=x2692)));

	if (t84 != 1825U) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x2693 = UINT16_MAX;
	int32_t x2694 = 14;
	int16_t x2695 = 1;
	uint8_t x2696 = 1U;

	t85 = (x2693>>(x2694+(x2695<=x2696)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x2773 = 24;
	uint8_t x2774 = 1U;
	uint16_t x2775 = UINT16_MAX;
	volatile int64_t x2776 = 214782924LL;
	volatile int32_t t86 = -7;

	t86 = (x2773>>(x2774+(x2775<=x2776)));

	if (t86 != 6) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x2789 = UINT32_MAX;
	static uint32_t x2790 = 13U;
	int8_t x2791 = INT8_MIN;
	int8_t x2792 = INT8_MIN;
	uint32_t t87 = 1565739358U;

	t87 = (x2789>>(x2790+(x2791<=x2792)));

	if (t87 != 262143U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x2793 = 3138U;
	int32_t x2794 = -1;
	int16_t x2795 = INT16_MIN;
	volatile int32_t t88 = -13832;

	t88 = (x2793>>(x2794+(x2795<=x2796)));

	if (t88 != 3138) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x2815 = INT8_MIN;
	uint16_t x2816 = UINT16_MAX;
	static uint64_t t89 = 0LLU;

	t89 = (x2813>>(x2814+(x2815<=x2816)));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x2825 = INT16_MAX;
	int16_t x2826 = -1;
	volatile uint32_t x2827 = 2464112U;
	int8_t x2828 = -1;
	int32_t t90 = -4058;

	t90 = (x2825>>(x2826+(x2827<=x2828)));

	if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x2877 = INT64_MAX;
	uint16_t x2878 = 3U;

	t91 = (x2877>>(x2878+(x2879<=x2880)));

	if (t91 != 576460752303423487LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x2882 = UINT32_MAX;
	int16_t x2883 = -1;
	int16_t x2884 = INT16_MAX;
	volatile int32_t t92 = -237615246;

	t92 = (x2881>>(x2882+(x2883<=x2884)));

	if (t92 != 127) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x2925 = 2U;
	uint8_t x2926 = 11U;
	int8_t x2927 = -8;

	t93 = (x2925>>(x2926+(x2927<=x2928)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x2941 = UINT32_MAX;
	volatile uint32_t x2942 = UINT32_MAX;
	uint64_t x2943 = 1899276140356LLU;
	int32_t x2944 = INT32_MIN;
	volatile uint32_t t94 = UINT32_MAX;

	t94 = (x2941>>(x2942+(x2943<=x2944)));

	if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x2973 = UINT32_MAX;
	volatile uint16_t x2974 = 25U;
	int32_t x2975 = -1;
	uint64_t x2976 = UINT64_MAX;
	volatile uint32_t t95 = 57U;

	t95 = (x2973>>(x2974+(x2975<=x2976)));

	if (t95 != 63U) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x3017 = 3006652864LLU;
	int8_t x3018 = -1;
	static uint64_t x3019 = 855802LLU;
	int64_t x3020 = INT64_MAX;
	volatile uint64_t t96 = 5992649337510968893LLU;

	t96 = (x3017>>(x3018+(x3019<=x3020)));

	if (t96 != 3006652864LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x3037 = 130435;
	volatile uint8_t x3038 = 0U;
	volatile int64_t x3039 = -1LL;
	uint16_t x3040 = 1U;

	t97 = (x3037>>(x3038+(x3039<=x3040)));

	if (t97 != 65217) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x3085 = 0U;
	volatile int32_t x3086 = -1;
	int16_t x3087 = 7;
	int32_t x3088 = INT32_MAX;
	static volatile int32_t t98 = 105;

	t98 = (x3085>>(x3086+(x3087<=x3088)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x3254 = 0U;
	uint8_t x3256 = 6U;
	int32_t t99 = 40;

	t99 = (x3253>>(x3254+(x3255<=x3256)));

	if (t99 != 3) { NG(); } else { ; }
	
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


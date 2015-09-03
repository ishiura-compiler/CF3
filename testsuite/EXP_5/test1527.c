#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = 6;
static uint32_t x4 = UINT32_MAX;
static int8_t x82 = -1;
volatile int16_t x105 = 208;
uint64_t x108 = UINT64_MAX;
volatile int64_t t5 = 31LL;
int32_t x275 = -1;
uint16_t x356 = 3U;
volatile int16_t x458 = INT16_MAX;
uint64_t x486 = 1793LLU;
int32_t t13 = 792380452;
volatile uint16_t x505 = 2865U;
static int32_t x508 = 0;
int8_t x547 = INT8_MIN;
volatile uint64_t t16 = 1600906873LLU;
int8_t x612 = -1;
static int16_t x652 = 1;
static int8_t x737 = INT8_MAX;
int64_t x738 = 6734550857393LL;
uint8_t x908 = 1U;
int32_t x958 = -430;
uint16_t x959 = UINT16_MAX;
int16_t x965 = 5;
uint8_t x968 = 1U;
int16_t x969 = INT16_MAX;
int32_t x970 = -1;
static int16_t x1002 = INT16_MIN;
volatile int32_t t27 = 8114;
int8_t x1011 = INT8_MIN;
int32_t x1018 = 1373534;
volatile int8_t x1093 = INT8_MAX;
uint8_t x1095 = UINT8_MAX;
int8_t x1110 = -7;
uint32_t x1282 = 6849225U;
volatile uint64_t x1283 = 2633192808619LLU;
uint64_t x1600 = UINT64_MAX;
int32_t t36 = -268737;
int8_t x1652 = -1;
static uint16_t x1705 = UINT16_MAX;
static volatile int32_t t38 = 605;
volatile int16_t x1730 = 5;
uint32_t x1839 = 1373960203U;
volatile int32_t t43 = -69953;
int64_t x1861 = INT64_MAX;
static int64_t t44 = INT64_MAX;
uint64_t x1905 = UINT64_MAX;
volatile uint64_t t47 = 525693419837833849LLU;
uint64_t x1929 = UINT64_MAX;
volatile int8_t x1930 = INT8_MIN;
uint16_t x1969 = 13453U;
int32_t x1971 = INT32_MIN;
volatile uint32_t t51 = 119381U;
uint8_t x2038 = 52U;
static int8_t x2076 = -1;
uint64_t x2102 = 12220932233309572LLU;
volatile int8_t x2103 = INT8_MIN;
uint64_t x2105 = 370868329LLU;
uint8_t x2145 = 97U;
uint32_t x2171 = 141U;
int32_t x2186 = INT32_MAX;
static int8_t x2232 = 4;
int32_t t59 = 15;
uint8_t x2272 = 19U;
uint64_t x2313 = 10818LLU;
uint32_t x2340 = UINT32_MAX;
uint8_t x2361 = 1U;
int8_t x2362 = INT8_MIN;
uint8_t x2364 = 0U;
static int32_t x2450 = INT32_MIN;
uint32_t x2460 = UINT32_MAX;
volatile int64_t x2467 = INT64_MAX;
volatile uint16_t x2557 = UINT16_MAX;
static int8_t x2576 = 1;
static uint8_t x2666 = 66U;
int64_t x2674 = INT64_MAX;
int32_t x2676 = 60;
static int16_t x2800 = -1;
int8_t x2805 = 1;
volatile int32_t t80 = 4;
static int32_t t82 = -1300533;
volatile uint8_t x2965 = 0U;
static volatile int32_t t87 = -8237;
uint64_t x3086 = 18040LLU;
int64_t x3097 = 8LL;
volatile int64_t x3099 = -14807618LL;
static int32_t x3162 = -17015295;
uint16_t x3163 = 1U;
uint8_t x3189 = 4U;
static int16_t x3199 = INT16_MAX;
volatile int8_t x3228 = 0;
uint32_t x3342 = 271U;
uint8_t x3412 = 24U;


void f0(void) {
	static uint16_t x1 = UINT16_MAX;
	uint64_t x3 = 18013930949147LLU;
	volatile int32_t t0 = 56725067;

	t0 = (x1<<((x2<=x3)+x4));

	if (t0 != 65535) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x29 = UINT64_MAX;
	int16_t x30 = INT16_MIN;
	int8_t x31 = INT8_MAX;
	static uint8_t x32 = 8U;
	volatile uint64_t t1 = 190418785251450451LLU;

	t1 = (x29<<((x30<=x31)+x32));

	if (t1 != 18446744073709551104LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint32_t x41 = 497767576U;
	int64_t x42 = -1LL;
	int32_t x43 = 1701318;
	int32_t x44 = -1;
	volatile uint32_t t2 = 2067496U;

	t2 = (x41<<((x42<=x43)+x44));

	if (t2 != 497767576U) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x81 = UINT8_MAX;
	int64_t x83 = INT64_MAX;
	int32_t x84 = -1;
	int32_t t3 = -80;

	t3 = (x81<<((x82<=x83)+x84));

	if (t3 != 255) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x106 = 4011876449151260532LLU;
	static int32_t x107 = INT32_MIN;
	static int32_t t4 = -252;

	t4 = (x105<<((x106<=x107)+x108));

	if (t4 != 208) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x209 = 8LL;
	static int32_t x210 = -1;
	int32_t x211 = INT32_MAX;
	uint32_t x212 = UINT32_MAX;

	t5 = (x209<<((x210<=x211)+x212));

	if (t5 != 8LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x273 = 25;
	int32_t x274 = -1641;
	uint8_t x276 = 10U;
	int32_t t6 = -13094497;

	t6 = (x273<<((x274<=x275)+x276));

	if (t6 != 51200) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x353 = 6;
	int16_t x354 = INT16_MAX;
	int8_t x355 = -1;
	int32_t t7 = 1895;

	t7 = (x353<<((x354<=x355)+x356));

	if (t7 != 48) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x357 = 473987186U;
	int64_t x358 = 1LL;
	volatile int16_t x359 = 47;
	volatile uint32_t x360 = UINT32_MAX;
	uint32_t t8 = 0U;

	t8 = (x357<<((x358<=x359)+x360));

	if (t8 != 473987186U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x397 = UINT8_MAX;
	static int8_t x398 = -1;
	uint64_t x399 = UINT64_MAX;
	int8_t x400 = -1;
	static volatile int32_t t9 = -116609122;

	t9 = (x397<<((x398<=x399)+x400));

	if (t9 != 255) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x401 = 700995U;
	static uint16_t x402 = 0U;
	static uint32_t x403 = 889U;
	uint32_t x404 = 8U;
	volatile uint32_t t10 = 49358309U;

	t10 = (x401<<((x402<=x403)+x404));

	if (t10 != 358909440U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x441 = 200259U;
	static volatile int64_t x442 = INT64_MIN;
	int16_t x443 = INT16_MAX;
	uint64_t x444 = UINT64_MAX;
	static volatile uint32_t t11 = 14256U;

	t11 = (x441<<((x442<=x443)+x444));

	if (t11 != 200259U) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x457 = 23116037U;
	uint16_t x459 = 864U;
	uint64_t x460 = 7LLU;
	volatile uint32_t t12 = 14396U;

	t12 = (x457<<((x458<=x459)+x460));

	if (t12 != 2958852736U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x485 = 7;
	volatile uint32_t x487 = UINT32_MAX;
	static uint32_t x488 = 3U;

	t13 = (x485<<((x486<=x487)+x488));

	if (t13 != 112) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x506 = -241;
	uint32_t x507 = UINT32_MAX;
	int32_t t14 = -569;

	t14 = (x505<<((x506<=x507)+x508));

	if (t14 != 5730) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x545 = 1524449;
	int8_t x546 = 1;
	uint8_t x548 = 1U;
	static volatile int32_t t15 = 289;

	t15 = (x545<<((x546<=x547)+x548));

	if (t15 != 3048898) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x605 = 1582LLU;
	int8_t x606 = -1;
	volatile int32_t x607 = INT32_MAX;
	int64_t x608 = -1LL;

	t16 = (x605<<((x606<=x607)+x608));

	if (t16 != 1582LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x609 = 0;
	int16_t x610 = INT16_MIN;
	volatile uint8_t x611 = 0U;
	volatile int32_t t17 = 91162;

	t17 = (x609<<((x610<=x611)+x612));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x649 = 13;
	int8_t x650 = INT8_MIN;
	uint8_t x651 = 64U;
	int32_t t18 = 22528573;

	t18 = (x649<<((x650<=x651)+x652));

	if (t18 != 52) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x689 = 120U;
	static int64_t x690 = -15910908LL;
	uint64_t x691 = UINT64_MAX;
	volatile int32_t x692 = -1;
	int32_t t19 = 66;

	t19 = (x689<<((x690<=x691)+x692));

	if (t19 != 120) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x739 = INT8_MIN;
	volatile uint8_t x740 = 1U;
	volatile int32_t t20 = -63182662;

	t20 = (x737<<((x738<=x739)+x740));

	if (t20 != 254) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x741 = 6853;
	uint64_t x742 = 3727489364LLU;
	int64_t x743 = -23469LL;
	int32_t x744 = 0;
	volatile int32_t t21 = 1591336;

	t21 = (x741<<((x742<=x743)+x744));

	if (t21 != 13706) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x813 = 65U;
	volatile int16_t x814 = INT16_MAX;
	uint32_t x815 = UINT32_MAX;
	static int8_t x816 = -1;
	int32_t t22 = -85785;

	t22 = (x813<<((x814<=x815)+x816));

	if (t22 != 65) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x905 = 7521958854LL;
	int64_t x906 = -56651957417358LL;
	int32_t x907 = -1;
	volatile int64_t t23 = -17883675833782629LL;

	t23 = (x905<<((x906<=x907)+x908));

	if (t23 != 30087835416LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x957 = 2624U;
	int32_t x960 = -1;
	static volatile uint32_t t24 = 2037151U;

	t24 = (x957<<((x958<=x959)+x960));

	if (t24 != 2624U) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x966 = UINT32_MAX;
	volatile uint16_t x967 = 15U;
	static volatile int32_t t25 = -26956;

	t25 = (x965<<((x966<=x967)+x968));

	if (t25 != 10) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x971 = 31U;
	static uint16_t x972 = 3U;
	int32_t t26 = -57342;

	t26 = (x969<<((x970<=x971)+x972));

	if (t26 != 524272) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1001 = 2631U;
	static int8_t x1003 = INT8_MAX;
	static int8_t x1004 = 10;

	t27 = (x1001<<((x1002<=x1003)+x1004));

	if (t27 != 5388288) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1009 = INT16_MAX;
	uint64_t x1010 = 4782094026LLU;
	uint8_t x1012 = 1U;
	volatile int32_t t28 = -25535;

	t28 = (x1009<<((x1010<=x1011)+x1012));

	if (t28 != 131068) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1017 = 59LL;
	int64_t x1019 = 564986366LL;
	int8_t x1020 = 8;
	int64_t t29 = 331286756LL;

	t29 = (x1017<<((x1018<=x1019)+x1020));

	if (t29 != 30208LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1057 = 19220464126733LL;
	uint16_t x1058 = 1538U;
	int32_t x1059 = INT32_MAX;
	uint16_t x1060 = 2U;
	int64_t t30 = 1LL;

	t30 = (x1057<<((x1058<=x1059)+x1060));

	if (t30 != 153763713013864LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1094 = 5U;
	static uint8_t x1096 = 0U;
	static volatile int32_t t31 = -14837700;

	t31 = (x1093<<((x1094<=x1095)+x1096));

	if (t31 != 254) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1109 = 369U;
	uint32_t x1111 = 13U;
	volatile int16_t x1112 = 7;
	int32_t t32 = -13958;

	t32 = (x1109<<((x1110<=x1111)+x1112));

	if (t32 != 47232) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1269 = INT64_MAX;
	uint8_t x1270 = 18U;
	uint64_t x1271 = UINT64_MAX;
	uint64_t x1272 = UINT64_MAX;
	int64_t t33 = INT64_MAX;

	t33 = (x1269<<((x1270<=x1271)+x1272));

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x1281 = UINT64_MAX;
	static volatile uint8_t x1284 = 3U;
	uint64_t t34 = 3386269290683950LLU;

	t34 = (x1281<<((x1282<=x1283)+x1284));

	if (t34 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint16_t x1525 = 26054U;
	uint8_t x1526 = 7U;
	int8_t x1527 = 36;
	int64_t x1528 = -1LL;
	volatile int32_t t35 = 209450;

	t35 = (x1525<<((x1526<=x1527)+x1528));

	if (t35 != 26054) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x1597 = 9U;
	int16_t x1598 = INT16_MIN;
	uint16_t x1599 = 39U;

	t36 = (x1597<<((x1598<=x1599)+x1600));

	if (t36 != 9) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x1649 = 62U;
	int64_t x1650 = -2550586936471LL;
	int64_t x1651 = 26404593824LL;
	int32_t t37 = -6973349;

	t37 = (x1649<<((x1650<=x1651)+x1652));

	if (t37 != 62) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x1706 = -9150;
	uint16_t x1707 = 6U;
	volatile int8_t x1708 = 0;

	t38 = (x1705<<((x1706<=x1707)+x1708));

	if (t38 != 131070) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1729 = INT8_MAX;
	volatile uint32_t x1731 = 28823805U;
	int16_t x1732 = 3;
	int32_t t39 = 314510;

	t39 = (x1729<<((x1730<=x1731)+x1732));

	if (t39 != 2032) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x1741 = UINT64_MAX;
	int16_t x1742 = INT16_MAX;
	int8_t x1743 = INT8_MIN;
	uint32_t x1744 = 24U;
	volatile uint64_t t40 = 8818315036LLU;

	t40 = (x1741<<((x1742<=x1743)+x1744));

	if (t40 != 18446744073692774400LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x1749 = 16515815LLU;
	int16_t x1750 = -16;
	volatile int16_t x1751 = 14;
	static uint8_t x1752 = 11U;
	volatile uint64_t t41 = 64508LLU;

	t41 = (x1749<<((x1750<=x1751)+x1752));

	if (t41 != 67648778240LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x1829 = 22;
	int64_t x1830 = INT64_MIN;
	volatile int64_t x1831 = INT64_MAX;
	int8_t x1832 = -1;
	int32_t t42 = -28983171;

	t42 = (x1829<<((x1830<=x1831)+x1832));

	if (t42 != 22) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x1837 = 242U;
	int8_t x1838 = INT8_MIN;
	uint8_t x1840 = 3U;

	t43 = (x1837<<((x1838<=x1839)+x1840));

	if (t43 != 1936) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint32_t x1862 = UINT32_MAX;
	static int64_t x1863 = INT64_MAX;
	static int16_t x1864 = -1;

	t44 = (x1861<<((x1862<=x1863)+x1864));

	if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x1877 = 1LL;
	int8_t x1878 = 1;
	int32_t x1879 = INT32_MAX;
	uint8_t x1880 = 9U;
	static volatile int64_t t45 = -51155404297866153LL;

	t45 = (x1877<<((x1878<=x1879)+x1880));

	if (t45 != 1024LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x1906 = INT8_MIN;
	volatile int64_t x1907 = -110978LL;
	uint8_t x1908 = 7U;
	uint64_t t46 = 7360415919957LLU;

	t46 = (x1905<<((x1906<=x1907)+x1908));

	if (t46 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x1913 = 64610862427LLU;
	uint8_t x1914 = 97U;
	uint64_t x1915 = 439645614630335262LLU;
	int8_t x1916 = -1;

	t47 = (x1913<<((x1914<=x1915)+x1916));

	if (t47 != 64610862427LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x1931 = INT8_MAX;
	int32_t x1932 = -1;
	uint64_t t48 = UINT64_MAX;

	t48 = (x1929<<((x1930<=x1931)+x1932));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x1945 = 44;
	int64_t x1946 = INT64_MIN;
	int64_t x1947 = -14LL;
	static int64_t x1948 = -1LL;
	int32_t t49 = -7;

	t49 = (x1945<<((x1946<=x1947)+x1948));

	if (t49 != 44) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x1970 = 63796U;
	uint64_t x1972 = 11LLU;
	volatile int32_t t50 = 780037;

	t50 = (x1969<<((x1970<=x1971)+x1972));

	if (t50 != 55103488) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x1985 = 1791367U;
	int16_t x1986 = -1;
	int16_t x1987 = INT16_MAX;
	int32_t x1988 = -1;

	t51 = (x1985<<((x1986<=x1987)+x1988));

	if (t51 != 1791367U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x2037 = 1;
	volatile int32_t x2039 = INT32_MIN;
	int8_t x2040 = 0;
	int32_t t52 = 116591775;

	t52 = (x2037<<((x2038<=x2039)+x2040));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x2073 = INT16_MAX;
	int64_t x2074 = INT64_MIN;
	int16_t x2075 = 1;
	static volatile int32_t t53 = 147;

	t53 = (x2073<<((x2074<=x2075)+x2076));

	if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x2101 = 240411793LL;
	static uint64_t x2104 = UINT64_MAX;
	volatile int64_t t54 = 773LL;

	t54 = (x2101<<((x2102<=x2103)+x2104));

	if (t54 != 240411793LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x2106 = INT32_MIN;
	uint16_t x2107 = 18882U;
	int16_t x2108 = 12;
	volatile uint64_t t55 = 4550508692880148LLU;

	t55 = (x2105<<((x2106<=x2107)+x2108));

	if (t55 != 3038153351168LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x2146 = 0;
	volatile int32_t x2147 = INT32_MAX;
	uint8_t x2148 = 6U;
	volatile int32_t t56 = -17506694;

	t56 = (x2145<<((x2146<=x2147)+x2148));

	if (t56 != 12416) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x2169 = 234980853876LLU;
	uint16_t x2170 = 2372U;
	volatile uint16_t x2172 = 3U;
	uint64_t t57 = 10518946847100LLU;

	t57 = (x2169<<((x2170<=x2171)+x2172));

	if (t57 != 1879846831008LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x2185 = 78U;
	volatile int16_t x2187 = -1;
	static uint8_t x2188 = 6U;
	static volatile int32_t t58 = -319755484;

	t58 = (x2185<<((x2186<=x2187)+x2188));

	if (t58 != 4992) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x2229 = 12U;
	uint8_t x2230 = 5U;
	int32_t x2231 = -1;

	t59 = (x2229<<((x2230<=x2231)+x2232));

	if (t59 != 192) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint32_t x2269 = UINT32_MAX;
	volatile int8_t x2270 = INT8_MIN;
	int16_t x2271 = -1;
	uint32_t t60 = 330672766U;

	t60 = (x2269<<((x2270<=x2271)+x2272));

	if (t60 != 4293918720U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x2297 = 15;
	int64_t x2298 = INT64_MAX;
	int32_t x2299 = INT32_MAX;
	uint16_t x2300 = 2U;
	volatile int32_t t61 = -1;

	t61 = (x2297<<((x2298<=x2299)+x2300));

	if (t61 != 60) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x2301 = 23;
	static uint8_t x2302 = 124U;
	int16_t x2303 = 5629;
	uint8_t x2304 = 4U;
	volatile int32_t t62 = 1874066;

	t62 = (x2301<<((x2302<=x2303)+x2304));

	if (t62 != 736) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x2314 = -1LL;
	int16_t x2315 = -1;
	uint8_t x2316 = 7U;
	volatile uint64_t t63 = 11LLU;

	t63 = (x2313<<((x2314<=x2315)+x2316));

	if (t63 != 2769408LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x2337 = 0U;
	volatile uint32_t x2338 = 6U;
	int16_t x2339 = 3389;
	static volatile int32_t t64 = 445786471;

	t64 = (x2337<<((x2338<=x2339)+x2340));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x2363 = 9;
	volatile int32_t t65 = 3;

	t65 = (x2361<<((x2362<=x2363)+x2364));

	if (t65 != 2) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x2449 = UINT32_MAX;
	int16_t x2451 = -502;
	uint64_t x2452 = UINT64_MAX;
	volatile uint32_t t66 = UINT32_MAX;

	t66 = (x2449<<((x2450<=x2451)+x2452));

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x2457 = INT8_MAX;
	int16_t x2458 = 2;
	uint8_t x2459 = UINT8_MAX;
	volatile int32_t t67 = 2797354;

	t67 = (x2457<<((x2458<=x2459)+x2460));

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x2465 = INT8_MAX;
	uint8_t x2466 = UINT8_MAX;
	int8_t x2468 = -1;
	int32_t t68 = 9494967;

	t68 = (x2465<<((x2466<=x2467)+x2468));

	if (t68 != 127) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x2521 = INT32_MAX;
	volatile int64_t x2522 = -1LL;
	int64_t x2523 = 10LL;
	int64_t x2524 = -1LL;
	static volatile int32_t t69 = INT32_MAX;

	t69 = (x2521<<((x2522<=x2523)+x2524));

	if (t69 != INT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x2541 = UINT16_MAX;
	volatile int16_t x2542 = INT16_MIN;
	uint8_t x2543 = 1U;
	uint32_t x2544 = UINT32_MAX;
	static int32_t t70 = -6038;

	t70 = (x2541<<((x2542<=x2543)+x2544));

	if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x2558 = UINT8_MAX;
	int64_t x2559 = 8213147508LL;
	int16_t x2560 = -1;
	volatile int32_t t71 = 1035;

	t71 = (x2557<<((x2558<=x2559)+x2560));

	if (t71 != 65535) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x2573 = UINT32_MAX;
	int8_t x2574 = -1;
	static uint8_t x2575 = 1U;
	static uint32_t t72 = 14480998U;

	t72 = (x2573<<((x2574<=x2575)+x2576));

	if (t72 != 4294967292U) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x2665 = 1993U;
	uint16_t x2667 = UINT16_MAX;
	uint32_t x2668 = UINT32_MAX;
	uint32_t t73 = 159947115U;

	t73 = (x2665<<((x2666<=x2667)+x2668));

	if (t73 != 1993U) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x2673 = 2683760870608474LLU;
	static volatile int16_t x2675 = INT16_MIN;
	uint64_t t74 = 18973LLU;

	t74 = (x2673<<((x2674<=x2675)+x2676));

	if (t74 != 11529215046068469760LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x2713 = 67U;
	int8_t x2714 = INT8_MIN;
	static int64_t x2715 = INT64_MIN;
	static int8_t x2716 = 3;
	int32_t t75 = -6762;

	t75 = (x2713<<((x2714<=x2715)+x2716));

	if (t75 != 536) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x2733 = INT8_MAX;
	int16_t x2734 = INT16_MIN;
	static volatile uint8_t x2735 = UINT8_MAX;
	uint8_t x2736 = 6U;
	int32_t t76 = -1543;

	t76 = (x2733<<((x2734<=x2735)+x2736));

	if (t76 != 16256) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x2765 = UINT32_MAX;
	int16_t x2766 = -7;
	int16_t x2767 = -1;
	int8_t x2768 = -1;
	volatile uint32_t t77 = UINT32_MAX;

	t77 = (x2765<<((x2766<=x2767)+x2768));

	if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x2797 = INT32_MAX;
	static volatile int32_t x2798 = INT32_MIN;
	static volatile uint8_t x2799 = 21U;
	int32_t t78 = INT32_MAX;

	t78 = (x2797<<((x2798<=x2799)+x2800));

	if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x2806 = 2U;
	static uint32_t x2807 = 4U;
	uint32_t x2808 = UINT32_MAX;
	int32_t t79 = -70;

	t79 = (x2805<<((x2806<=x2807)+x2808));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x2841 = 7;
	uint8_t x2842 = 91U;
	int32_t x2843 = -1;
	uint8_t x2844 = 0U;

	t80 = (x2841<<((x2842<=x2843)+x2844));

	if (t80 != 7) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x2897 = 1;
	int64_t x2898 = -1782389LL;
	volatile uint32_t x2899 = 59U;
	uint8_t x2900 = 15U;
	int32_t t81 = -787795280;

	t81 = (x2897<<((x2898<=x2899)+x2900));

	if (t81 != 65536) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x2905 = UINT16_MAX;
	static uint16_t x2906 = 3895U;
	int16_t x2907 = -9313;
	uint8_t x2908 = 6U;

	t82 = (x2905<<((x2906<=x2907)+x2908));

	if (t82 != 4194240) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x2961 = 7371U;
	uint32_t x2962 = 6037U;
	int16_t x2963 = 4;
	int64_t x2964 = 1LL;
	int32_t t83 = -1077931;

	t83 = (x2961<<((x2962<=x2963)+x2964));

	if (t83 != 14742) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int32_t x2966 = -3;
	static volatile uint32_t x2967 = UINT32_MAX;
	int16_t x2968 = -1;
	volatile int32_t t84 = -43667;

	t84 = (x2965<<((x2966<=x2967)+x2968));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x3005 = UINT16_MAX;
	int8_t x3006 = INT8_MIN;
	uint16_t x3007 = 48U;
	volatile int64_t x3008 = -1LL;
	int32_t t85 = -59823484;

	t85 = (x3005<<((x3006<=x3007)+x3008));

	if (t85 != 65535) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x3029 = 3808;
	uint8_t x3030 = UINT8_MAX;
	int32_t x3031 = 6864249;
	static volatile uint64_t x3032 = UINT64_MAX;
	volatile int32_t t86 = -52214;

	t86 = (x3029<<((x3030<=x3031)+x3032));

	if (t86 != 3808) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x3081 = INT16_MAX;
	uint8_t x3082 = 1U;
	static volatile int64_t x3083 = -1LL;
	volatile uint8_t x3084 = 5U;

	t87 = (x3081<<((x3082<=x3083)+x3084));

	if (t87 != 1048544) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x3085 = UINT64_MAX;
	static int64_t x3087 = -1LL;
	uint32_t x3088 = UINT32_MAX;
	uint64_t t88 = UINT64_MAX;

	t88 = (x3085<<((x3086<=x3087)+x3088));

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x3098 = INT64_MIN;
	uint16_t x3100 = 7U;
	int64_t t89 = 1049503805LL;

	t89 = (x3097<<((x3098<=x3099)+x3100));

	if (t89 != 2048LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x3161 = UINT16_MAX;
	volatile int8_t x3164 = 1;
	static volatile int32_t t90 = -2143380;

	t90 = (x3161<<((x3162<=x3163)+x3164));

	if (t90 != 262140) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x3190 = INT16_MIN;
	int8_t x3191 = INT8_MIN;
	volatile int32_t x3192 = 0;
	int32_t t91 = -206128587;

	t91 = (x3189<<((x3190<=x3191)+x3192));

	if (t91 != 8) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x3193 = 0;
	uint64_t x3194 = UINT64_MAX;
	int8_t x3195 = -14;
	uint16_t x3196 = 15U;
	int32_t t92 = -95016673;

	t92 = (x3193<<((x3194<=x3195)+x3196));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x3197 = UINT64_MAX;
	uint16_t x3198 = 23U;
	volatile uint64_t x3200 = UINT64_MAX;
	uint64_t t93 = UINT64_MAX;

	t93 = (x3197<<((x3198<=x3199)+x3200));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x3225 = INT8_MAX;
	int64_t x3226 = INT64_MAX;
	uint64_t x3227 = 14667201LLU;
	int32_t t94 = 65020615;

	t94 = (x3225<<((x3226<=x3227)+x3228));

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x3341 = 217782108LL;
	static uint64_t x3343 = 1LLU;
	int8_t x3344 = 0;
	int64_t t95 = -110826247LL;

	t95 = (x3341<<((x3342<=x3343)+x3344));

	if (t95 != 217782108LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x3361 = 30U;
	int64_t x3362 = -1LL;
	int64_t x3363 = -1LL;
	int32_t x3364 = -1;
	int32_t t96 = 16290;

	t96 = (x3361<<((x3362<=x3363)+x3364));

	if (t96 != 30) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x3381 = 62U;
	int32_t x3382 = -345;
	int16_t x3383 = INT16_MIN;
	volatile int8_t x3384 = 1;
	int32_t t97 = -6538882;

	t97 = (x3381<<((x3382<=x3383)+x3384));

	if (t97 != 124) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x3405 = 7U;
	uint8_t x3406 = 5U;
	static volatile uint64_t x3407 = 1580463774664495LLU;
	uint16_t x3408 = 7U;
	int32_t t98 = 1;

	t98 = (x3405<<((x3406<=x3407)+x3408));

	if (t98 != 1792) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int32_t x3409 = 20;
	int16_t x3410 = 90;
	uint16_t x3411 = 6U;
	int32_t t99 = -386;

	t99 = (x3409<<((x3410<=x3411)+x3412));

	if (t99 != 335544320) { NG(); } else { ; }
	
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


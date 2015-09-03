#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x82 = INT64_MIN;
static int8_t x84 = 32;
int16_t x143 = INT16_MAX;
int32_t x198 = INT32_MIN;
int16_t x227 = INT16_MAX;
static int8_t x297 = INT8_MIN;
int32_t t9 = -997784;
uint8_t x488 = 9U;
int32_t t10 = 3706;
volatile int8_t x531 = INT8_MAX;
volatile int8_t x532 = 3;
int16_t x533 = INT16_MIN;
volatile int32_t t12 = -2078;
static uint64_t x573 = UINT64_MAX;
static uint8_t x576 = 27U;
int32_t t13 = 6218315;
volatile int32_t t14 = 80455048;
static uint8_t x624 = 1U;
int32_t t17 = 10;
volatile int32_t x737 = 29584488;
int8_t x738 = -11;
static int64_t x739 = INT64_MAX;
uint8_t x740 = 16U;
uint32_t x744 = 3U;
int8_t x786 = -1;
int32_t t23 = 723;
static volatile uint16_t x1093 = 919U;
static uint32_t x1253 = 247003U;
volatile uint8_t x1256 = 8U;
int8_t x1485 = 0;
int16_t x1486 = -413;
volatile int8_t x1487 = 0;
uint8_t x1488 = 5U;
volatile int32_t t33 = -5746021;
uint16_t x1685 = 439U;
volatile int32_t x1686 = INT32_MAX;
int64_t x1760 = 21LL;
static uint32_t x1910 = 173416U;
int8_t x1938 = -8;
int8_t x2077 = -1;
volatile int32_t x2078 = -1;
int32_t t47 = 23;
uint16_t x2144 = 7U;
static uint8_t x2155 = 2U;
volatile int32_t t51 = -7034;
int16_t x2653 = -1;
static uint16_t x2759 = 21U;
volatile uint8_t x2760 = 3U;
static int32_t x2821 = INT32_MIN;
volatile int64_t x2823 = 3LL;
volatile int32_t t56 = 24194;
uint16_t x2865 = 0U;
volatile int32_t t58 = -46256683;
uint32_t x2965 = UINT32_MAX;
static int32_t t60 = -1;
static uint64_t x2991 = UINT64_MAX;
volatile int32_t t61 = 734;
int8_t x3004 = 0;
static int8_t x3061 = INT8_MAX;
static uint64_t x3063 = UINT64_MAX;
uint64_t x3108 = 30LLU;
int32_t t64 = -114;
int16_t x3198 = INT16_MIN;
uint64_t x3226 = UINT64_MAX;
int8_t x3275 = INT8_MAX;
volatile uint32_t x3276 = 29U;
volatile int32_t t69 = -1027660080;
uint8_t x3288 = 1U;
static int64_t x3293 = INT64_MAX;
int64_t x3294 = INT64_MIN;
static int8_t x3418 = 58;
int16_t x3430 = 1;
volatile int32_t x3462 = INT32_MAX;
volatile int64_t x3574 = 457771943540667LL;
uint8_t x3668 = 6U;
int16_t x3733 = INT16_MIN;
uint8_t x3736 = 2U;
static volatile int64_t x3815 = INT64_MAX;
uint16_t x3978 = UINT16_MAX;
volatile int32_t t87 = 49;
volatile int8_t x4030 = -1;
static uint16_t x4031 = UINT16_MAX;
volatile uint8_t x4075 = 31U;
int32_t t89 = -257;
uint8_t x4092 = 0U;
int32_t t90 = 70;
uint16_t x4119 = UINT16_MAX;
int8_t x4133 = -1;
int32_t t92 = 97;
uint16_t x4261 = 580U;
volatile int32_t t93 = -578;
static int8_t x4265 = INT8_MIN;
int64_t x4268 = 5LL;
static int64_t x4414 = INT64_MAX;
int32_t t95 = 40;
uint8_t x4452 = 6U;
int32_t t99 = -233717;


void f0(void) {
	int16_t x1 = 30;
	int32_t x2 = -159;
	volatile int8_t x3 = 23;
	uint8_t x4 = 6U;
	volatile int32_t t0 = 0;

	t0 = (x1==(x2&(x3>>x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x17 = -106427;
	int32_t x18 = -1;
	uint32_t x19 = 373858U;
	static int16_t x20 = 0;
	static volatile int32_t t1 = -1;

	t1 = (x17==(x18&(x19>>x20)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x69 = UINT32_MAX;
	static uint16_t x70 = 0U;
	int64_t x71 = 1LL;
	int16_t x72 = 1;
	volatile int32_t t2 = 2319;

	t2 = (x69==(x70&(x71>>x72)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x81 = INT16_MAX;
	uint64_t x83 = 807764474079428598LLU;
	static volatile int32_t t3 = 0;

	t3 = (x81==(x82&(x83>>x84)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x141 = INT16_MAX;
	int16_t x142 = -1;
	uint32_t x144 = 10U;
	int32_t t4 = -1904;

	t4 = (x141==(x142&(x143>>x144)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x197 = 98U;
	uint32_t x199 = 9029618U;
	int16_t x200 = 3;
	volatile int32_t t5 = -93384;

	t5 = (x197==(x198&(x199>>x200)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x225 = -1;
	int64_t x226 = -1LL;
	static int8_t x228 = 2;
	static int32_t t6 = -17549;

	t6 = (x225==(x226&(x227>>x228)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x298 = -1;
	uint16_t x299 = 1150U;
	uint8_t x300 = 5U;
	static int32_t t7 = 82;

	t7 = (x297==(x298&(x299>>x300)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x305 = INT16_MIN;
	uint64_t x306 = UINT64_MAX;
	volatile uint32_t x307 = 11U;
	uint64_t x308 = 1LLU;
	int32_t t8 = -9;

	t8 = (x305==(x306&(x307>>x308)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x309 = INT64_MIN;
	int32_t x310 = INT32_MIN;
	int32_t x311 = 111;
	int8_t x312 = 0;

	t9 = (x309==(x310&(x311>>x312)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x485 = -1;
	uint32_t x486 = UINT32_MAX;
	uint8_t x487 = UINT8_MAX;

	t10 = (x485==(x486&(x487>>x488)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x529 = INT16_MAX;
	volatile uint32_t x530 = 16787558U;
	volatile int32_t t11 = -367;

	t11 = (x529==(x530&(x531>>x532)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x534 = UINT16_MAX;
	static int64_t x535 = 588298794998675LL;
	int8_t x536 = 1;

	t12 = (x533==(x534&(x535>>x536)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x574 = INT8_MIN;
	uint64_t x575 = 957LLU;

	t13 = (x573==(x574&(x575>>x576)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x581 = INT64_MIN;
	static int16_t x582 = -9;
	uint64_t x583 = 338386LLU;
	uint16_t x584 = 30U;

	t14 = (x581==(x582&(x583>>x584)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x621 = INT64_MIN;
	volatile int16_t x622 = INT16_MIN;
	int32_t x623 = INT32_MAX;
	volatile int32_t t15 = 256892500;

	t15 = (x621==(x622&(x623>>x624)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x625 = -2350814;
	static uint16_t x626 = 0U;
	static volatile uint64_t x627 = 230587484369085LLU;
	int8_t x628 = 2;
	int32_t t16 = -12;

	t16 = (x625==(x626&(x627>>x628)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x709 = UINT16_MAX;
	int8_t x710 = INT8_MIN;
	static uint16_t x711 = UINT16_MAX;
	static uint16_t x712 = 15U;

	t17 = (x709==(x710&(x711>>x712)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t t18 = 364155;

	t18 = (x737==(x738&(x739>>x740)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x741 = INT8_MIN;
	int8_t x742 = INT8_MAX;
	static int32_t x743 = INT32_MAX;
	int32_t t19 = 6;

	t19 = (x741==(x742&(x743>>x744)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x749 = -1;
	uint16_t x750 = 141U;
	int16_t x751 = 12040;
	static int32_t x752 = 10;
	int32_t t20 = -52030;

	t20 = (x749==(x750&(x751>>x752)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x785 = INT16_MIN;
	volatile int64_t x787 = INT64_MAX;
	int8_t x788 = 12;
	volatile int32_t t21 = -5616404;

	t21 = (x785==(x786&(x787>>x788)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x925 = INT64_MAX;
	volatile int16_t x926 = 165;
	int8_t x927 = 0;
	int32_t x928 = 7;
	static volatile int32_t t22 = 435227;

	t22 = (x925==(x926&(x927>>x928)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x981 = -2329;
	int16_t x982 = -1;
	uint64_t x983 = UINT64_MAX;
	uint64_t x984 = 31LLU;

	t23 = (x981==(x982&(x983>>x984)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x1077 = INT16_MIN;
	volatile int8_t x1078 = 6;
	uint32_t x1079 = UINT32_MAX;
	uint16_t x1080 = 4U;
	int32_t t24 = 60114;

	t24 = (x1077==(x1078&(x1079>>x1080)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x1094 = INT64_MIN;
	static volatile int16_t x1095 = 361;
	static int16_t x1096 = 1;
	volatile int32_t t25 = -29;

	t25 = (x1093==(x1094&(x1095>>x1096)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x1125 = 13;
	int16_t x1126 = INT16_MAX;
	uint8_t x1127 = 0U;
	int64_t x1128 = 10LL;
	int32_t t26 = 66527701;

	t26 = (x1125==(x1126&(x1127>>x1128)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1161 = 0U;
	int32_t x1162 = INT32_MIN;
	static uint64_t x1163 = 33993782806LLU;
	int8_t x1164 = 15;
	int32_t t27 = 12211;

	t27 = (x1161==(x1162&(x1163>>x1164)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x1185 = -1;
	static int32_t x1186 = INT32_MAX;
	uint64_t x1187 = UINT64_MAX;
	int8_t x1188 = 1;
	static int32_t t28 = 413440;

	t28 = (x1185==(x1186&(x1187>>x1188)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x1254 = 1;
	uint16_t x1255 = 11747U;
	int32_t t29 = 487086;

	t29 = (x1253==(x1254&(x1255>>x1256)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x1285 = 9U;
	static int64_t x1286 = -1LL;
	volatile int32_t x1287 = INT32_MAX;
	volatile int8_t x1288 = 2;
	int32_t t30 = -429952;

	t30 = (x1285==(x1286&(x1287>>x1288)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x1449 = 7U;
	int16_t x1450 = INT16_MAX;
	uint32_t x1451 = 3535U;
	volatile uint16_t x1452 = 4U;
	volatile int32_t t31 = 0;

	t31 = (x1449==(x1450&(x1451>>x1452)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t t32 = 33043693;

	t32 = (x1485==(x1486&(x1487>>x1488)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x1593 = INT16_MAX;
	int16_t x1594 = INT16_MIN;
	static volatile uint16_t x1595 = UINT16_MAX;
	uint16_t x1596 = 5U;

	t33 = (x1593==(x1594&(x1595>>x1596)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1625 = 2236066022711714LL;
	uint32_t x1626 = 399U;
	uint32_t x1627 = 1035008734U;
	uint16_t x1628 = 16U;
	static volatile int32_t t34 = -44553;

	t34 = (x1625==(x1626&(x1627>>x1628)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x1687 = UINT64_MAX;
	int64_t x1688 = 0LL;
	static volatile int32_t t35 = -2;

	t35 = (x1685==(x1686&(x1687>>x1688)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x1749 = INT32_MIN;
	int16_t x1750 = -1344;
	int32_t x1751 = INT32_MAX;
	uint16_t x1752 = 7U;
	static volatile int32_t t36 = -93;

	t36 = (x1749==(x1750&(x1751>>x1752)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x1757 = 6;
	uint8_t x1758 = 56U;
	uint16_t x1759 = UINT16_MAX;
	volatile int32_t t37 = -63;

	t37 = (x1757==(x1758&(x1759>>x1760)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x1789 = 1;
	static int8_t x1790 = 5;
	uint16_t x1791 = 200U;
	static uint64_t x1792 = 7LLU;
	static int32_t t38 = 1965;

	t38 = (x1789==(x1790&(x1791>>x1792)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1829 = 246262577LL;
	uint64_t x1830 = 6574LLU;
	static uint8_t x1831 = 53U;
	int8_t x1832 = 3;
	static int32_t t39 = -1;

	t39 = (x1829==(x1830&(x1831>>x1832)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x1909 = -1;
	volatile uint8_t x1911 = UINT8_MAX;
	uint16_t x1912 = 0U;
	static int32_t t40 = -1002806839;

	t40 = (x1909==(x1910&(x1911>>x1912)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1921 = INT32_MIN;
	int8_t x1922 = INT8_MIN;
	uint8_t x1923 = 2U;
	static int8_t x1924 = 0;
	volatile int32_t t41 = -5969081;

	t41 = (x1921==(x1922&(x1923>>x1924)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x1937 = INT8_MAX;
	volatile int16_t x1939 = INT16_MAX;
	volatile int8_t x1940 = 1;
	int32_t t42 = -8267933;

	t42 = (x1937==(x1938&(x1939>>x1940)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x2079 = 170U;
	int32_t x2080 = 1;
	static volatile int32_t t43 = -13706251;

	t43 = (x2077==(x2078&(x2079>>x2080)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x2093 = 3088U;
	static int32_t x2094 = -8655;
	uint64_t x2095 = 6387805635268261LLU;
	uint16_t x2096 = 0U;
	int32_t t44 = 54;

	t44 = (x2093==(x2094&(x2095>>x2096)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2101 = INT16_MIN;
	uint16_t x2102 = UINT16_MAX;
	int16_t x2103 = INT16_MAX;
	int16_t x2104 = 1;
	int32_t t45 = 81;

	t45 = (x2101==(x2102&(x2103>>x2104)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x2105 = INT16_MAX;
	static int16_t x2106 = INT16_MIN;
	uint64_t x2107 = 252205293LLU;
	uint8_t x2108 = 1U;
	static int32_t t46 = 1;

	t46 = (x2105==(x2106&(x2107>>x2108)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2129 = INT16_MAX;
	volatile uint16_t x2130 = UINT16_MAX;
	volatile int16_t x2131 = INT16_MAX;
	uint32_t x2132 = 12U;

	t47 = (x2129==(x2130&(x2131>>x2132)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x2141 = INT8_MAX;
	uint16_t x2142 = 1775U;
	volatile uint64_t x2143 = 8643838268049950082LLU;
	static volatile int32_t t48 = -97681064;

	t48 = (x2141==(x2142&(x2143>>x2144)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x2153 = 4797562;
	static uint64_t x2154 = UINT64_MAX;
	int16_t x2156 = 18;
	int32_t t49 = -18835243;

	t49 = (x2153==(x2154&(x2155>>x2156)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x2269 = -1LL;
	volatile int32_t x2270 = INT32_MIN;
	int8_t x2271 = INT8_MAX;
	int8_t x2272 = 2;
	volatile int32_t t50 = -85510;

	t50 = (x2269==(x2270&(x2271>>x2272)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x2361 = 23U;
	int8_t x2362 = INT8_MAX;
	static uint32_t x2363 = UINT32_MAX;
	static uint8_t x2364 = 18U;

	t51 = (x2361==(x2362&(x2363>>x2364)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x2654 = -7;
	uint16_t x2655 = UINT16_MAX;
	int8_t x2656 = 0;
	int32_t t52 = 66646;

	t52 = (x2653==(x2654&(x2655>>x2656)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x2757 = INT64_MAX;
	static uint8_t x2758 = UINT8_MAX;
	int32_t t53 = 339;

	t53 = (x2757==(x2758&(x2759>>x2760)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2777 = INT8_MIN;
	int32_t x2778 = INT32_MIN;
	int64_t x2779 = INT64_MAX;
	volatile uint8_t x2780 = 0U;
	int32_t t54 = 199;

	t54 = (x2777==(x2778&(x2779>>x2780)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x2822 = 4U;
	uint32_t x2824 = 22U;
	int32_t t55 = 1;

	t55 = (x2821==(x2822&(x2823>>x2824)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x2837 = INT32_MIN;
	static int64_t x2838 = INT64_MIN;
	int32_t x2839 = INT32_MAX;
	int16_t x2840 = 1;

	t56 = (x2837==(x2838&(x2839>>x2840)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x2866 = -53126694807948551LL;
	int8_t x2867 = 1;
	static int8_t x2868 = 5;
	int32_t t57 = -110352;

	t57 = (x2865==(x2866&(x2867>>x2868)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x2889 = -1LL;
	volatile int8_t x2890 = 1;
	static uint64_t x2891 = 220334618773097LLU;
	uint64_t x2892 = 29LLU;

	t58 = (x2889==(x2890&(x2891>>x2892)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x2901 = INT32_MIN;
	uint32_t x2902 = UINT32_MAX;
	volatile int32_t x2903 = 211;
	int8_t x2904 = 1;
	volatile int32_t t59 = -2;

	t59 = (x2901==(x2902&(x2903>>x2904)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x2966 = UINT64_MAX;
	static int32_t x2967 = 16046065;
	volatile int8_t x2968 = 0;

	t60 = (x2965==(x2966&(x2967>>x2968)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x2989 = -2;
	int32_t x2990 = -3009622;
	int32_t x2992 = 3;

	t61 = (x2989==(x2990&(x2991>>x2992)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x3001 = INT8_MIN;
	uint8_t x3002 = 14U;
	volatile int64_t x3003 = INT64_MAX;
	volatile int32_t t62 = -410093601;

	t62 = (x3001==(x3002&(x3003>>x3004)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x3062 = 251U;
	int8_t x3064 = 5;
	int32_t t63 = -86;

	t63 = (x3061==(x3062&(x3063>>x3064)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x3105 = 196672782LL;
	static uint32_t x3106 = 80U;
	static uint32_t x3107 = 456U;

	t64 = (x3105==(x3106&(x3107>>x3108)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x3121 = 18799U;
	int32_t x3122 = INT32_MIN;
	volatile uint16_t x3123 = 4030U;
	static int16_t x3124 = 0;
	static volatile int32_t t65 = 736;

	t65 = (x3121==(x3122&(x3123>>x3124)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x3197 = -1;
	static int16_t x3199 = INT16_MAX;
	int8_t x3200 = 0;
	volatile int32_t t66 = 1359222;

	t66 = (x3197==(x3198&(x3199>>x3200)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x3225 = 31642LLU;
	static volatile uint8_t x3227 = UINT8_MAX;
	volatile int64_t x3228 = 0LL;
	int32_t t67 = 7;

	t67 = (x3225==(x3226&(x3227>>x3228)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x3261 = UINT16_MAX;
	static uint32_t x3262 = 1517341138U;
	uint16_t x3263 = 1013U;
	uint8_t x3264 = 0U;
	int32_t t68 = -8;

	t68 = (x3261==(x3262&(x3263>>x3264)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x3273 = 61015LLU;
	volatile int64_t x3274 = -1LL;

	t69 = (x3273==(x3274&(x3275>>x3276)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x3285 = 9528685U;
	uint64_t x3286 = 240287816838710113LLU;
	uint16_t x3287 = 23U;
	volatile int32_t t70 = 36039880;

	t70 = (x3285==(x3286&(x3287>>x3288)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x3289 = -1LL;
	int8_t x3290 = INT8_MAX;
	static int16_t x3291 = INT16_MAX;
	volatile int8_t x3292 = 1;
	volatile int32_t t71 = 64490;

	t71 = (x3289==(x3290&(x3291>>x3292)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x3295 = INT32_MAX;
	uint16_t x3296 = 0U;
	static int32_t t72 = 5765913;

	t72 = (x3293==(x3294&(x3295>>x3296)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x3417 = INT32_MIN;
	uint8_t x3419 = 105U;
	uint8_t x3420 = 12U;
	volatile int32_t t73 = -9041448;

	t73 = (x3417==(x3418&(x3419>>x3420)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint16_t x3429 = 2U;
	uint8_t x3431 = 31U;
	uint8_t x3432 = 7U;
	volatile int32_t t74 = 5;

	t74 = (x3429==(x3430&(x3431>>x3432)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x3461 = UINT8_MAX;
	uint16_t x3463 = UINT16_MAX;
	uint32_t x3464 = 7U;
	volatile int32_t t75 = 28310;

	t75 = (x3461==(x3462&(x3463>>x3464)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x3573 = INT8_MIN;
	uint8_t x3575 = UINT8_MAX;
	static int8_t x3576 = 1;
	int32_t t76 = -1;

	t76 = (x3573==(x3574&(x3575>>x3576)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x3665 = 10U;
	int16_t x3666 = -1;
	static uint64_t x3667 = 123928892720098LLU;
	static volatile int32_t t77 = -586;

	t77 = (x3665==(x3666&(x3667>>x3668)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x3709 = -2342946LL;
	static volatile int32_t x3710 = -1;
	int8_t x3711 = INT8_MAX;
	static int8_t x3712 = 0;
	volatile int32_t t78 = -9;

	t78 = (x3709==(x3710&(x3711>>x3712)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x3734 = -113;
	volatile uint8_t x3735 = UINT8_MAX;
	static volatile int32_t t79 = -5825;

	t79 = (x3733==(x3734&(x3735>>x3736)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x3813 = 30143;
	uint16_t x3814 = 234U;
	uint16_t x3816 = 6U;
	int32_t t80 = 3904;

	t80 = (x3813==(x3814&(x3815>>x3816)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x3829 = -2129315370571LL;
	static int8_t x3830 = -1;
	uint8_t x3831 = 4U;
	int8_t x3832 = 1;
	volatile int32_t t81 = 329;

	t81 = (x3829==(x3830&(x3831>>x3832)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x3893 = 17438LL;
	volatile int64_t x3894 = INT64_MAX;
	uint64_t x3895 = UINT64_MAX;
	uint8_t x3896 = 0U;
	volatile int32_t t82 = 458201224;

	t82 = (x3893==(x3894&(x3895>>x3896)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x3917 = UINT32_MAX;
	volatile uint8_t x3918 = 89U;
	uint64_t x3919 = 0LLU;
	int8_t x3920 = 0;
	static volatile int32_t t83 = 32023335;

	t83 = (x3917==(x3918&(x3919>>x3920)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x3929 = INT16_MIN;
	int8_t x3930 = -8;
	int16_t x3931 = INT16_MAX;
	int16_t x3932 = 23;
	static volatile int32_t t84 = -53476;

	t84 = (x3929==(x3930&(x3931>>x3932)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x3957 = -1LL;
	static uint8_t x3958 = 25U;
	static int64_t x3959 = 3LL;
	uint64_t x3960 = 7LLU;
	int32_t t85 = -80478;

	t85 = (x3957==(x3958&(x3959>>x3960)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x3977 = -43680670;
	int32_t x3979 = INT32_MAX;
	uint16_t x3980 = 1U;
	int32_t t86 = -968;

	t86 = (x3977==(x3978&(x3979>>x3980)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x3981 = INT64_MIN;
	volatile int64_t x3982 = INT64_MAX;
	static volatile uint64_t x3983 = 33793746105807LLU;
	uint32_t x3984 = 3U;

	t87 = (x3981==(x3982&(x3983>>x3984)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x4029 = UINT32_MAX;
	int32_t x4032 = 8;
	int32_t t88 = -926814772;

	t88 = (x4029==(x4030&(x4031>>x4032)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x4073 = INT64_MIN;
	uint16_t x4074 = UINT16_MAX;
	static int8_t x4076 = 13;

	t89 = (x4073==(x4074&(x4075>>x4076)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x4089 = 15;
	uint8_t x4090 = 31U;
	static int64_t x4091 = INT64_MAX;

	t90 = (x4089==(x4090&(x4091>>x4092)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x4117 = -1;
	static uint32_t x4118 = UINT32_MAX;
	volatile int16_t x4120 = 4;
	volatile int32_t t91 = 0;

	t91 = (x4117==(x4118&(x4119>>x4120)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x4134 = INT8_MIN;
	uint8_t x4135 = UINT8_MAX;
	uint8_t x4136 = 7U;

	t92 = (x4133==(x4134&(x4135>>x4136)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x4262 = 101U;
	static volatile uint8_t x4263 = 0U;
	uint8_t x4264 = 3U;

	t93 = (x4261==(x4262&(x4263>>x4264)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x4266 = UINT32_MAX;
	uint64_t x4267 = 3LLU;
	int32_t t94 = 3062778;

	t94 = (x4265==(x4266&(x4267>>x4268)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x4413 = INT64_MIN;
	volatile uint16_t x4415 = UINT16_MAX;
	uint64_t x4416 = 4LLU;

	t95 = (x4413==(x4414&(x4415>>x4416)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x4449 = 15U;
	volatile int64_t x4450 = INT64_MIN;
	int64_t x4451 = 1LL;
	volatile int32_t t96 = -30;

	t96 = (x4449==(x4450&(x4451>>x4452)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x4485 = 53U;
	uint16_t x4486 = 9U;
	uint32_t x4487 = 5522U;
	int32_t x4488 = 2;
	static volatile int32_t t97 = -648933567;

	t97 = (x4485==(x4486&(x4487>>x4488)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x4565 = UINT64_MAX;
	volatile int8_t x4566 = -39;
	int64_t x4567 = INT64_MAX;
	uint16_t x4568 = 13U;
	volatile int32_t t98 = -13228;

	t98 = (x4565==(x4566&(x4567>>x4568)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x4581 = -1LL;
	uint64_t x4582 = UINT64_MAX;
	int8_t x4583 = 0;
	uint16_t x4584 = 13U;

	t99 = (x4581==(x4582&(x4583>>x4584)));

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


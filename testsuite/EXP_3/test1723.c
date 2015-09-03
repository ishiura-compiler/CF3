#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x10 = UINT64_MAX;
static int64_t x12 = INT64_MIN;
int16_t x15 = INT16_MAX;
uint64_t t1 = 42780842899540090LLU;
int8_t x89 = -1;
volatile int64_t x91 = INT64_MIN;
int16_t x121 = -1;
int16_t x124 = 59;
int32_t t7 = -33426521;
uint32_t x126 = 726U;
int64_t x128 = INT64_MIN;
int16_t x185 = INT16_MIN;
uint64_t x194 = UINT64_MAX;
volatile int32_t x196 = INT32_MIN;
uint32_t x277 = UINT32_MAX;
volatile uint8_t x287 = 0U;
static uint8_t x298 = UINT8_MAX;
static int16_t x301 = INT16_MIN;
uint8_t x311 = UINT8_MAX;
uint32_t x337 = UINT32_MAX;
uint64_t x346 = 1398394479462520658LLU;
volatile uint8_t x368 = 62U;
int32_t x390 = -23;
volatile uint32_t x391 = 273675U;
volatile int64_t x402 = -1LL;
static int32_t x403 = INT32_MIN;
int64_t t22 = -1855LL;
int16_t x428 = INT16_MIN;
volatile int32_t t24 = -9;
uint32_t x481 = 27U;
uint16_t x483 = 6U;
uint64_t x484 = 3LLU;
uint8_t x504 = UINT8_MAX;
volatile int64_t x519 = INT64_MIN;
volatile int8_t x543 = 3;
volatile int32_t t28 = 928;
int8_t x582 = 0;
int64_t x609 = -1LL;
volatile int64_t t31 = 1934529801133342549LL;
static int8_t x614 = 0;
int64_t x638 = 40719513573750020LL;
int64_t x713 = -1LL;
volatile int64_t t35 = 138855LL;
volatile uint64_t t38 = 4LLU;
static volatile uint64_t x876 = 208659017816LLU;
uint32_t x923 = UINT32_MAX;
int16_t x940 = INT16_MAX;
int32_t x943 = INT32_MAX;
volatile int32_t x945 = -26;
uint64_t x946 = UINT64_MAX;
uint64_t x947 = 6LLU;
uint32_t x954 = UINT32_MAX;
uint8_t x956 = 6U;
volatile int32_t t48 = 5062340;
int16_t x969 = -1;
int8_t x974 = 27;
static volatile uint8_t x976 = UINT8_MAX;
int64_t x990 = -1LL;
int64_t x997 = -1LL;
int16_t x998 = INT16_MIN;
int64_t x1021 = 4954824827675921LL;
int8_t x1023 = INT8_MAX;
int64_t x1024 = INT64_MIN;
volatile uint64_t t54 = 1703LLU;
volatile uint32_t t55 = 1U;
int16_t x1058 = -425;
volatile uint32_t x1059 = 0U;
uint64_t x1060 = 11931536052871LLU;
int64_t x1065 = INT64_MIN;
uint64_t t59 = 51728334800452753LLU;
int64_t x1105 = -31854LL;
static uint8_t x1107 = 7U;
uint32_t x1108 = 1U;
static int8_t x1119 = INT8_MAX;
volatile int8_t x1123 = 3;
int32_t t64 = 1;
volatile uint16_t x1165 = 9370U;
int32_t x1167 = 2915041;
int16_t x1168 = 0;
int32_t t65 = 651;
uint16_t x1243 = 5U;
static volatile int8_t x1262 = -1;
uint8_t x1277 = UINT8_MAX;
volatile int16_t x1313 = -1;
uint32_t x1317 = UINT32_MAX;
uint8_t x1318 = UINT8_MAX;
int16_t x1320 = INT16_MIN;
int8_t x1363 = 0;
volatile int32_t t75 = -458;
uint32_t x1398 = 487787823U;
int64_t x1424 = 1716765917LL;
uint64_t t80 = 1078396LLU;
uint64_t x1497 = UINT64_MAX;
static int8_t x1585 = -3;
int16_t x1588 = INT16_MIN;
int32_t t85 = 13;
uint64_t x1627 = 10498LLU;
static volatile uint64_t t87 = 20394LLU;
int32_t x1662 = -123;
int32_t t90 = 0;
static int8_t x1766 = INT8_MIN;
static volatile int64_t x1841 = -644626658782885379LL;
static volatile uint64_t t95 = 1358LLU;
static volatile uint64_t t96 = 23975LLU;
uint16_t x1908 = UINT16_MAX;
uint64_t x1942 = UINT64_MAX;
uint64_t t98 = 1171720077LLU;
uint64_t x1954 = UINT64_MAX;
uint64_t t99 = 3LLU;


void f0(void) {
	volatile uint32_t x9 = UINT32_MAX;
	volatile uint8_t x11 = 1U;
	uint64_t t0 = 1453LLU;

	t0 = ((x9*x10)>>(x11&x12));

	if (t0 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x13 = 0;
	uint64_t x14 = UINT64_MAX;
	int32_t x16 = 23;

	t1 = ((x13*x14)>>(x15&x16));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x17 = INT64_MIN;
	uint64_t x18 = 826867029311LLU;
	uint32_t x19 = 5U;
	int64_t x20 = 230623416LL;
	static volatile uint64_t t2 = 2744402022334330LLU;

	t2 = ((x17*x18)>>(x19&x20));

	if (t2 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x21 = UINT32_MAX;
	uint32_t x22 = 38U;
	int16_t x23 = 4209;
	uint16_t x24 = 3U;
	uint32_t t3 = 634183879U;

	t3 = ((x21*x22)>>(x23&x24));

	if (t3 != 2147483629U) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x69 = 49U;
	uint32_t x70 = 1357733U;
	uint32_t x71 = 53291U;
	static int64_t x72 = INT64_MIN;
	uint32_t t4 = 237U;

	t4 = ((x69*x70)>>(x71&x72));

	if (t4 != 66528917U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x81 = 31U;
	int16_t x82 = INT16_MAX;
	int16_t x83 = -324;
	volatile uint16_t x84 = 12U;
	int32_t t5 = -323512478;

	t5 = ((x81*x82)>>(x83&x84));

	if (t5 != 247) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x90 = -1LL;
	int8_t x92 = INT8_MAX;
	int64_t t6 = 2031LL;

	t6 = ((x89*x90)>>(x91&x92));

	if (t6 != 1LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x122 = INT16_MIN;
	uint8_t x123 = 19U;

	t7 = ((x121*x122)>>(x123&x124));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x125 = INT32_MIN;
	static volatile uint64_t x127 = 70109LLU;
	volatile uint32_t t8 = 38972U;

	t8 = ((x125*x126)>>(x127&x128));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x186 = 0;
	static volatile int64_t x187 = INT64_MIN;
	static uint32_t x188 = UINT32_MAX;
	static volatile int32_t t9 = -10;

	t9 = ((x185*x186)>>(x187&x188));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x193 = -31510953LL;
	static uint16_t x195 = UINT16_MAX;
	uint64_t t10 = 24644LLU;

	t10 = ((x193*x194)>>(x195&x196));

	if (t10 != 31510953LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x257 = 0;
	int16_t x258 = INT16_MAX;
	int8_t x259 = INT8_MIN;
	volatile int8_t x260 = 6;
	int32_t t11 = -7051;

	t11 = ((x257*x258)>>(x259&x260));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x278 = INT16_MAX;
	volatile int32_t x279 = 1903;
	static uint8_t x280 = 23U;
	static uint32_t t12 = 76001U;

	t12 = ((x277*x278)>>(x279&x280));

	if (t12 != 33554176U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x285 = 12504369;
	static uint64_t x286 = 15703861336LLU;
	volatile int32_t x288 = 470255;
	static volatile uint64_t t13 = 48LLU;

	t13 = ((x285*x286)>>(x287&x288));

	if (t13 != 196366876870176984LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x297 = 15;
	static int8_t x299 = INT8_MAX;
	int64_t x300 = INT64_MIN;
	int32_t t14 = 423;

	t14 = ((x297*x298)>>(x299&x300));

	if (t14 != 3825) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x302 = 4U;
	uint8_t x303 = 19U;
	int64_t x304 = -1020366658LL;
	static volatile uint32_t t15 = 14559572U;

	t15 = ((x301*x302)>>(x303&x304));

	if (t15 != 16383U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x309 = 12;
	uint64_t x310 = UINT64_MAX;
	volatile int64_t x312 = INT64_MIN;
	volatile uint64_t t16 = 54098955623LLU;

	t16 = ((x309*x310)>>(x311&x312));

	if (t16 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x333 = 100U;
	static uint32_t x334 = 67U;
	int8_t x335 = 31;
	int32_t x336 = INT32_MIN;
	static volatile uint32_t t17 = 190198U;

	t17 = ((x333*x334)>>(x335&x336));

	if (t17 != 6700U) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x338 = -1;
	static int16_t x339 = INT16_MAX;
	volatile int16_t x340 = INT16_MIN;
	volatile uint32_t t18 = 426945U;

	t18 = ((x337*x338)>>(x339&x340));

	if (t18 != 1U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x345 = -1;
	int64_t x347 = INT64_MIN;
	uint32_t x348 = UINT32_MAX;
	uint64_t t19 = 66227650LLU;

	t19 = ((x345*x346)>>(x347&x348));

	if (t19 != 17048349594247030958LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x365 = INT16_MIN;
	static int16_t x366 = -1;
	static uint8_t x367 = 0U;
	int32_t t20 = -20;

	t20 = ((x365*x366)>>(x367&x368));

	if (t20 != 32768) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x389 = INT16_MIN;
	volatile int8_t x392 = INT8_MAX;
	volatile int32_t t21 = 14348804;

	t21 = ((x389*x390)>>(x391&x392));

	if (t21 != 368) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x401 = INT16_MIN;
	uint8_t x404 = UINT8_MAX;

	t22 = ((x401*x402)>>(x403&x404));

	if (t22 != 32768LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x425 = 6U;
	uint16_t x426 = UINT16_MAX;
	static uint16_t x427 = 117U;
	int32_t t23 = 3254;

	t23 = ((x425*x426)>>(x427&x428));

	if (t23 != 393210) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x461 = 15;
	uint16_t x462 = 11U;
	int16_t x463 = 1;
	static uint8_t x464 = 0U;

	t24 = ((x461*x462)>>(x463&x464));

	if (t24 != 165) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x482 = UINT32_MAX;
	uint32_t t25 = 493827U;

	t25 = ((x481*x482)>>(x483&x484));

	if (t25 != 1073741817U) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x501 = 3U;
	int32_t x502 = 1103;
	int16_t x503 = INT16_MIN;
	int32_t t26 = 1890;

	t26 = ((x501*x502)>>(x503&x504));

	if (t26 != 3309) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x517 = 0U;
	static volatile uint64_t x518 = 13980175070LLU;
	int32_t x520 = 135059;
	uint64_t t27 = 3772005LLU;

	t27 = ((x517*x518)>>(x519&x520));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x541 = INT16_MIN;
	volatile int8_t x542 = -6;
	uint64_t x544 = 440887547173LLU;

	t28 = ((x541*x542)>>(x543&x544));

	if (t28 != 98304) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x545 = -1LL;
	int16_t x546 = -1;
	int8_t x547 = 0;
	int64_t x548 = INT64_MIN;
	volatile int64_t t29 = 260612997LL;

	t29 = ((x545*x546)>>(x547&x548));

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x581 = 1065U;
	int16_t x583 = -128;
	uint8_t x584 = 6U;
	static volatile int32_t t30 = 123;

	t30 = ((x581*x582)>>(x583&x584));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x610 = INT8_MIN;
	static int16_t x611 = 0;
	static uint8_t x612 = 62U;

	t31 = ((x609*x610)>>(x611&x612));

	if (t31 != 128LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x613 = -2495295052662892LL;
	static volatile int8_t x615 = 4;
	int64_t x616 = INT64_MIN;
	volatile int64_t t32 = -104864796608LL;

	t32 = ((x613*x614)>>(x615&x616));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x637 = 1U;
	static int8_t x639 = 1;
	volatile uint32_t x640 = UINT32_MAX;
	int64_t t33 = -175265772332269427LL;

	t33 = ((x637*x638)>>(x639&x640));

	if (t33 != 20359756786875010LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x705 = 3U;
	uint16_t x706 = 143U;
	int16_t x707 = INT16_MIN;
	int8_t x708 = 5;
	int32_t t34 = 9155128;

	t34 = ((x705*x706)>>(x707&x708));

	if (t34 != 429) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x714 = INT32_MIN;
	int8_t x715 = 1;
	volatile int32_t x716 = -1;

	t35 = ((x713*x714)>>(x715&x716));

	if (t35 != 1073741824LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x729 = -1;
	int8_t x730 = 0;
	volatile uint8_t x731 = 14U;
	static int16_t x732 = INT16_MIN;
	static volatile int32_t t36 = -174;

	t36 = ((x729*x730)>>(x731&x732));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x765 = 826128487U;
	static volatile uint8_t x766 = 18U;
	uint16_t x767 = 17U;
	int32_t x768 = INT32_MIN;
	uint32_t t37 = 6U;

	t37 = ((x765*x766)>>(x767&x768));

	if (t37 != 1985410878U) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x813 = UINT64_MAX;
	uint32_t x814 = 3110U;
	int16_t x815 = INT16_MIN;
	volatile int16_t x816 = INT16_MAX;

	t38 = ((x813*x814)>>(x815&x816));

	if (t38 != 18446744073709548506LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x833 = 0U;
	int64_t x834 = -1LL;
	uint32_t x835 = 385U;
	int8_t x836 = 0;
	volatile int64_t t39 = 894304LL;

	t39 = ((x833*x834)>>(x835&x836));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x873 = UINT64_MAX;
	int64_t x874 = 93LL;
	uint8_t x875 = 42U;
	static volatile uint64_t t40 = 16221540889930924LLU;

	t40 = ((x873*x874)>>(x875&x876));

	if (t40 != 72057594037927935LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x897 = -3132LL;
	static uint64_t x898 = 941900419708LLU;
	volatile uint32_t x899 = 4U;
	int32_t x900 = -1;
	volatile uint64_t t41 = 34981903188488126LLU;

	t41 = ((x897*x898)>>(x899&x900));

	if (t41 != 1152737127599689135LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x901 = 74LLU;
	volatile int8_t x902 = -1;
	static uint32_t x903 = 85U;
	int16_t x904 = INT16_MIN;
	uint64_t t42 = 93891779648833659LLU;

	t42 = ((x901*x902)>>(x903&x904));

	if (t42 != 18446744073709551542LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x921 = 545034U;
	volatile uint64_t x922 = UINT64_MAX;
	static int16_t x924 = 7;
	volatile uint64_t t43 = 4065968LLU;

	t43 = ((x921*x922)>>(x923&x924));

	if (t43 != 144115188075851613LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x937 = INT16_MAX;
	volatile uint32_t x938 = UINT32_MAX;
	int16_t x939 = INT16_MIN;
	uint32_t t44 = 9U;

	t44 = ((x937*x938)>>(x939&x940));

	if (t44 != 4294934529U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x941 = INT8_MIN;
	static int16_t x942 = -1;
	volatile int64_t x944 = INT64_MIN;
	static int32_t t45 = 2984555;

	t45 = ((x941*x942)>>(x943&x944));

	if (t45 != 128) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x948 = INT8_MAX;
	volatile uint64_t t46 = 1153178371042454889LLU;

	t46 = ((x945*x946)>>(x947&x948));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x953 = UINT8_MAX;
	int32_t x955 = INT32_MIN;
	uint32_t t47 = 174212318U;

	t47 = ((x953*x954)>>(x955&x956));

	if (t47 != 4294967041U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x957 = 58U;
	volatile int8_t x958 = INT8_MAX;
	int32_t x959 = 0;
	uint8_t x960 = 13U;

	t48 = ((x957*x958)>>(x959&x960));

	if (t48 != 7366) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x970 = 65763818505506263LLU;
	int8_t x971 = 2;
	uint16_t x972 = UINT16_MAX;
	volatile uint64_t t49 = 4336211459604166LLU;

	t49 = ((x969*x970)>>(x971&x972));

	if (t49 != 4595245063801011338LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x973 = 43030379LLU;
	uint32_t x975 = 22U;
	static volatile uint64_t t50 = 557411384086761369LLU;

	t50 = ((x973*x974)>>(x975&x976));

	if (t50 != 276LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x989 = -1LL;
	int16_t x991 = INT16_MIN;
	static uint16_t x992 = 1U;
	int64_t t51 = 50240903270LL;

	t51 = ((x989*x990)>>(x991&x992));

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x999 = 4;
	int32_t x1000 = INT32_MAX;
	volatile int64_t t52 = -99916353665LL;

	t52 = ((x997*x998)>>(x999&x1000));

	if (t52 != 2048LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x1022 = 3U;
	static int64_t t53 = -26316644LL;

	t53 = ((x1021*x1022)>>(x1023&x1024));

	if (t53 != 14864474483027763LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x1033 = 23284LLU;
	int8_t x1034 = 1;
	volatile int64_t x1035 = INT64_MIN;
	int8_t x1036 = 63;

	t54 = ((x1033*x1034)>>(x1035&x1036));

	if (t54 != 23284LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x1045 = 0;
	uint32_t x1046 = UINT32_MAX;
	int32_t x1047 = 1;
	int8_t x1048 = 1;

	t55 = ((x1045*x1046)>>(x1047&x1048));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x1057 = INT16_MIN;
	static volatile int32_t t56 = -30;

	t56 = ((x1057*x1058)>>(x1059&x1060));

	if (t56 != 13926400) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x1066 = 0;
	int64_t x1067 = -36752617058900501LL;
	volatile uint16_t x1068 = 0U;
	static volatile int64_t t57 = 17LL;

	t57 = ((x1065*x1066)>>(x1067&x1068));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x1085 = 24071511LLU;
	int64_t x1086 = -40752057512655901LL;
	uint8_t x1087 = 14U;
	int32_t x1088 = -1;
	volatile uint64_t t58 = 17137822031394513LLU;

	t58 = ((x1085*x1086)>>(x1087&x1088));

	if (t58 != 964502396916824LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x1101 = 4974LLU;
	volatile uint8_t x1102 = 49U;
	int16_t x1103 = INT16_MIN;
	uint16_t x1104 = 0U;

	t59 = ((x1101*x1102)>>(x1103&x1104));

	if (t59 != 243726LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x1106 = -149LL;
	static volatile int64_t t60 = 378LL;

	t60 = ((x1105*x1106)>>(x1107&x1108));

	if (t60 != 2373123LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x1117 = INT16_MIN;
	volatile uint32_t x1118 = 430007U;
	uint32_t x1120 = 9U;
	volatile uint32_t t61 = 8U;

	t61 = ((x1117*x1118)>>(x1119&x1120));

	if (t61 != 6033984U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x1121 = INT8_MIN;
	volatile int8_t x1122 = -52;
	static volatile int32_t x1124 = INT32_MIN;
	int32_t t62 = 171462216;

	t62 = ((x1121*x1122)>>(x1123&x1124));

	if (t62 != 6656) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x1145 = -1;
	int16_t x1146 = INT16_MIN;
	int32_t x1147 = -1;
	uint32_t x1148 = 26U;
	int32_t t63 = -1283;

	t63 = ((x1145*x1146)>>(x1147&x1148));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x1161 = 324;
	volatile uint16_t x1162 = 4731U;
	int8_t x1163 = 14;
	uint64_t x1164 = UINT64_MAX;

	t64 = ((x1161*x1162)>>(x1163&x1164));

	if (t64 != 93) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x1166 = 1062;

	t65 = ((x1165*x1166)>>(x1167&x1168));

	if (t65 != 9950940) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x1181 = UINT16_MAX;
	static uint16_t x1182 = 0U;
	uint16_t x1183 = UINT16_MAX;
	static int64_t x1184 = INT64_MIN;
	int32_t t66 = -769386;

	t66 = ((x1181*x1182)>>(x1183&x1184));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x1185 = -21;
	int8_t x1186 = INT8_MIN;
	uint8_t x1187 = 3U;
	uint8_t x1188 = 50U;
	static int32_t t67 = 3331;

	t67 = ((x1185*x1186)>>(x1187&x1188));

	if (t67 != 672) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x1205 = INT8_MIN;
	int64_t x1206 = -1LL;
	static int16_t x1207 = INT16_MIN;
	uint8_t x1208 = 28U;
	int64_t t68 = 26269860327054LL;

	t68 = ((x1205*x1206)>>(x1207&x1208));

	if (t68 != 128LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x1241 = UINT32_MAX;
	int32_t x1242 = 0;
	int16_t x1244 = -1;
	uint32_t t69 = 49681U;

	t69 = ((x1241*x1242)>>(x1243&x1244));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x1261 = 69811731994455038LLU;
	int8_t x1263 = 0;
	uint64_t x1264 = UINT64_MAX;
	volatile uint64_t t70 = 761077LLU;

	t70 = ((x1261*x1262)>>(x1263&x1264));

	if (t70 != 18376932341715096578LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x1278 = 7099877U;
	static int32_t x1279 = INT32_MIN;
	volatile int8_t x1280 = INT8_MAX;
	volatile uint32_t t71 = 3121584U;

	t71 = ((x1277*x1278)>>(x1279&x1280));

	if (t71 != 1810468635U) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x1314 = UINT32_MAX;
	int8_t x1315 = 3;
	uint16_t x1316 = 0U;
	static volatile uint32_t t72 = 9437U;

	t72 = ((x1313*x1314)>>(x1315&x1316));

	if (t72 != 1U) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int8_t x1319 = 48;
	uint32_t t73 = 42242003U;

	t73 = ((x1317*x1318)>>(x1319&x1320));

	if (t73 != 4294967041U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x1341 = INT16_MIN;
	uint64_t x1342 = UINT64_MAX;
	int8_t x1343 = 53;
	int32_t x1344 = 7895;
	volatile uint64_t t74 = 18LLU;

	t74 = ((x1341*x1342)>>(x1343&x1344));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x1361 = -2;
	static volatile int16_t x1362 = 0;
	uint16_t x1364 = UINT16_MAX;

	t75 = ((x1361*x1362)>>(x1363&x1364));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x1397 = -2394929;
	volatile int64_t x1399 = INT64_MIN;
	static uint16_t x1400 = 795U;
	volatile uint32_t t76 = 7684305U;

	t76 = ((x1397*x1398)>>(x1399&x1400));

	if (t76 != 1016460545U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x1401 = 3;
	volatile int64_t x1402 = 89775925LL;
	int8_t x1403 = INT8_MIN;
	int8_t x1404 = 21;
	static volatile int64_t t77 = -5508LL;

	t77 = ((x1401*x1402)>>(x1403&x1404));

	if (t77 != 269327775LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint64_t x1421 = 2184411601866146LLU;
	uint16_t x1422 = UINT16_MAX;
	volatile uint8_t x1423 = 0U;
	volatile uint64_t t78 = 30643288LLU;

	t78 = ((x1421*x1422)>>(x1423&x1424));

	if (t78 != 14028205812331016798LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x1441 = -5816;
	int16_t x1442 = INT16_MIN;
	uint16_t x1443 = 962U;
	uint8_t x1444 = 59U;
	static int32_t t79 = 2866866;

	t79 = ((x1441*x1442)>>(x1443&x1444));

	if (t79 != 47644672) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x1493 = UINT64_MAX;
	int8_t x1494 = -1;
	int32_t x1495 = 0;
	static volatile uint64_t x1496 = UINT64_MAX;

	t80 = ((x1493*x1494)>>(x1495&x1496));

	if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x1498 = -1;
	uint64_t x1499 = 79638120LLU;
	int32_t x1500 = INT32_MIN;
	static volatile uint64_t t81 = 3273164136LLU;

	t81 = ((x1497*x1498)>>(x1499&x1500));

	if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x1521 = 2925491497959777630LLU;
	static int32_t x1522 = INT32_MIN;
	int16_t x1523 = INT16_MIN;
	static volatile int16_t x1524 = 13220;
	uint64_t t82 = 1147449403LLU;

	t82 = ((x1521*x1522)>>(x1523&x1524));

	if (t82 != 14075804170657464320LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x1525 = -7;
	static int16_t x1526 = INT16_MIN;
	uint16_t x1527 = 3U;
	volatile int32_t x1528 = INT32_MAX;
	int32_t t83 = -146182137;

	t83 = ((x1525*x1526)>>(x1527&x1528));

	if (t83 != 28672) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x1581 = 63U;
	uint16_t x1582 = 3317U;
	uint8_t x1583 = 23U;
	int32_t x1584 = INT32_MIN;
	int32_t t84 = 458401394;

	t84 = ((x1581*x1582)>>(x1583&x1584));

	if (t84 != 208971) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x1586 = -1;
	int16_t x1587 = 204;

	t85 = ((x1585*x1586)>>(x1587&x1588));

	if (t85 != 3) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x1625 = 82;
	volatile int32_t x1626 = 1;
	static int64_t x1628 = -29670671LL;
	int32_t t86 = -480;

	t86 = ((x1625*x1626)>>(x1627&x1628));

	if (t86 != 82) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x1645 = INT64_MIN;
	uint64_t x1646 = 13499474845345125LLU;
	uint64_t x1647 = 1882LLU;
	static int16_t x1648 = INT16_MIN;

	t87 = ((x1645*x1646)>>(x1647&x1648));

	if (t87 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x1661 = 126446094LLU;
	volatile int32_t x1663 = 4147445;
	int32_t x1664 = INT32_MIN;
	uint64_t t88 = 8LLU;

	t88 = ((x1661*x1662)>>(x1663&x1664));

	if (t88 != 18446744058156682054LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x1729 = UINT64_MAX;
	int32_t x1730 = -1;
	uint16_t x1731 = UINT16_MAX;
	int8_t x1732 = 24;
	uint64_t t89 = 292731LLU;

	t89 = ((x1729*x1730)>>(x1731&x1732));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x1753 = -1;
	int32_t x1754 = -1;
	static int64_t x1755 = INT64_MIN;
	static uint32_t x1756 = UINT32_MAX;

	t90 = ((x1753*x1754)>>(x1755&x1756));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x1765 = -1LL;
	volatile uint8_t x1767 = 3U;
	uint32_t x1768 = 50U;
	volatile int64_t t91 = -502646591181770LL;

	t91 = ((x1765*x1766)>>(x1767&x1768));

	if (t91 != 32LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x1817 = INT16_MIN;
	volatile int16_t x1818 = -1;
	volatile uint8_t x1819 = 1U;
	int32_t x1820 = INT32_MAX;
	volatile int32_t t92 = -547512978;

	t92 = ((x1817*x1818)>>(x1819&x1820));

	if (t92 != 16384) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x1842 = UINT64_MAX;
	volatile int8_t x1843 = INT8_MIN;
	int8_t x1844 = 63;
	uint64_t t93 = 248LLU;

	t93 = ((x1841*x1842)>>(x1843&x1844));

	if (t93 != 644626658782885379LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x1865 = 15329664LL;
	uint16_t x1866 = 31U;
	int32_t x1867 = 968869356;
	uint8_t x1868 = 3U;
	int64_t t94 = -4093453LL;

	t94 = ((x1865*x1866)>>(x1867&x1868));

	if (t94 != 475219584LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x1881 = UINT16_MAX;
	static uint64_t x1882 = 1LLU;
	int16_t x1883 = INT16_MIN;
	volatile uint8_t x1884 = UINT8_MAX;

	t95 = ((x1881*x1882)>>(x1883&x1884));

	if (t95 != 65535LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x1893 = UINT64_MAX;
	uint64_t x1894 = 135594234203639111LLU;
	volatile int64_t x1895 = INT64_MIN;
	uint64_t x1896 = 4306613946880LLU;

	t96 = ((x1893*x1894)>>(x1895&x1896));

	if (t96 != 18311149839505912505LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x1905 = UINT16_MAX;
	uint32_t x1906 = 72712U;
	static int64_t x1907 = INT64_MIN;
	volatile uint32_t t97 = 11U;

	t97 = ((x1905*x1906)>>(x1907&x1908));

	if (t97 != 470213624U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x1941 = 371;
	int8_t x1943 = INT8_MAX;
	static uint16_t x1944 = 0U;

	t98 = ((x1941*x1942)>>(x1943&x1944));

	if (t98 != 18446744073709551245LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x1953 = INT8_MIN;
	uint16_t x1955 = UINT16_MAX;
	int64_t x1956 = 17LL;

	t99 = ((x1953*x1954)>>(x1955&x1956));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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


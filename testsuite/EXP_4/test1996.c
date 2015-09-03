#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x78 = 10U;
int32_t x80 = 40428231;
static int16_t x114 = INT16_MIN;
static int32_t t5 = 514344642;
uint16_t x284 = 0U;
volatile uint32_t t8 = 7U;
volatile int16_t x319 = INT16_MIN;
int64_t x320 = -1LL;
static volatile int64_t x378 = INT64_MIN;
uint16_t x410 = 5U;
uint16_t x422 = 1U;
static int16_t x424 = 0;
int32_t t13 = 82;
int8_t x562 = 4;
uint64_t x565 = UINT64_MAX;
int64_t t17 = 738130017084LL;
int8_t x766 = 12;
static uint64_t x845 = 44LLU;
int8_t x918 = 6;
uint8_t x926 = UINT8_MAX;
int16_t x928 = INT16_MIN;
uint8_t x957 = 2U;
volatile uint32_t x1164 = 15U;
static uint64_t t29 = 134LLU;
static volatile int32_t x1242 = INT32_MIN;
volatile uint16_t x1277 = 13161U;
int8_t x1278 = 17;
volatile int32_t x1280 = INT32_MIN;
volatile int32_t t32 = 413;
int64_t x1326 = INT64_MIN;
static volatile int16_t x1410 = INT16_MIN;
uint8_t x1411 = 61U;
int32_t x1446 = INT32_MIN;
volatile uint8_t x1447 = UINT8_MAX;
int64_t x1540 = INT64_MIN;
volatile int32_t t37 = 108010598;
static int32_t x1545 = INT32_MAX;
static volatile int32_t t38 = -1195;
int16_t x1711 = INT16_MAX;
uint64_t x1730 = 3LLU;
uint32_t x1737 = UINT32_MAX;
volatile int64_t x1738 = INT64_MIN;
int8_t x1739 = 2;
int16_t x1790 = 3;
int8_t x1791 = INT8_MIN;
uint32_t x1792 = UINT32_MAX;
static volatile int32_t x1812 = 64420;
volatile int64_t x2005 = 8431672290269015LL;
volatile int32_t t48 = -9140841;
static uint64_t x2066 = 17LLU;
volatile int32_t x2071 = INT32_MIN;
volatile int8_t x2088 = 16;
static int64_t x2155 = INT64_MAX;
int8_t x2194 = 1;
volatile uint16_t x2197 = 4U;
uint16_t x2315 = 383U;
int32_t t56 = 9250;
int16_t x2343 = INT16_MIN;
int32_t t57 = 753095;
uint16_t x2378 = 11U;
int16_t x2379 = INT16_MAX;
static volatile uint16_t x2422 = 4309U;
int8_t x2492 = INT8_MIN;
volatile int64_t t66 = -6LL;
int8_t x2734 = 0;
volatile int64_t x2736 = -3LL;
uint32_t x2741 = UINT32_MAX;
volatile uint8_t x2898 = 1U;
volatile int16_t x2899 = INT16_MAX;
int32_t t71 = 2770;
uint8_t x2961 = UINT8_MAX;
static int64_t x2986 = INT64_MIN;
uint16_t x2989 = UINT16_MAX;
volatile int32_t t74 = 0;
volatile int16_t x3034 = INT16_MIN;
int8_t x3074 = 0;
uint16_t x3081 = UINT16_MAX;
uint16_t x3125 = UINT16_MAX;
uint8_t x3127 = UINT8_MAX;
int32_t x3350 = 4;
volatile int32_t t82 = -774;
int32_t x3355 = 1;
int32_t x3365 = INT32_MAX;
uint32_t x3367 = 941751477U;
uint64_t x3450 = 7LLU;
int32_t x3451 = 8601974;
static uint32_t x3452 = 35698477U;
uint32_t x3521 = 506577883U;
int64_t x3523 = INT64_MIN;
int64_t x3552 = -1LL;
volatile uint8_t x3621 = 3U;
volatile uint8_t x3659 = 10U;
int64_t x3702 = INT64_MIN;
static volatile int32_t t96 = 4;
int16_t x3779 = 3;
volatile uint8_t x3780 = 0U;
uint8_t x3799 = UINT8_MAX;
static volatile int32_t t99 = 8147;


void f0(void) {
	int32_t x9 = INT32_MAX;
	static int64_t x10 = INT64_MIN;
	int32_t x11 = INT32_MIN;
	uint32_t x12 = UINT32_MAX;
	volatile int32_t t0 = INT32_MAX;

	t0 = (x9>>(x10&(x11|x12)));

	if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x77 = UINT64_MAX;
	uint64_t x79 = UINT64_MAX;
	volatile uint64_t t1 = 30750175419LLU;

	t1 = (x77>>(x78&(x79|x80)));

	if (t1 != 18014398509481983LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x113 = 117030LLU;
	volatile uint16_t x115 = 1417U;
	volatile uint64_t x116 = 2LLU;
	volatile uint64_t t2 = 471263LLU;

	t2 = (x113>>(x114&(x115|x116)));

	if (t2 != 117030LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x173 = 13;
	uint32_t x174 = 41U;
	int16_t x175 = INT16_MIN;
	int64_t x176 = INT64_MIN;
	static int32_t t3 = 35;

	t3 = (x173>>(x174&(x175|x176)));

	if (t3 != 13) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x189 = 2591;
	uint8_t x190 = UINT8_MAX;
	static int16_t x191 = INT16_MIN;
	int8_t x192 = 3;
	static int32_t t4 = 2927;

	t4 = (x189>>(x190&(x191|x192)));

	if (t4 != 323) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x213 = UINT8_MAX;
	uint64_t x214 = 2LLU;
	volatile uint32_t x215 = 67082865U;
	volatile int32_t x216 = INT32_MIN;

	t5 = (x213>>(x214&(x215|x216)));

	if (t5 != 255) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x237 = INT64_MAX;
	int8_t x238 = 4;
	int8_t x239 = 2;
	static volatile uint16_t x240 = 121U;
	int64_t t6 = INT64_MAX;

	t6 = (x237>>(x238&(x239|x240)));

	if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x281 = UINT8_MAX;
	uint64_t x282 = 6402LLU;
	static int8_t x283 = 1;
	int32_t t7 = -191653;

	t7 = (x281>>(x282&(x283|x284)));

	if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint32_t x293 = UINT32_MAX;
	uint32_t x294 = UINT32_MAX;
	volatile uint32_t x295 = 1U;
	int8_t x296 = 0;

	t8 = (x293>>(x294&(x295|x296)));

	if (t8 != 2147483647U) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x317 = 30990U;
	uint8_t x318 = 1U;
	volatile int32_t t9 = -19;

	t9 = (x317>>(x318&(x319|x320)));

	if (t9 != 15495) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x377 = 0U;
	static int32_t x379 = INT32_MIN;
	uint32_t x380 = UINT32_MAX;
	volatile int32_t t10 = -7;

	t10 = (x377>>(x378&(x379|x380)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x409 = 44843448368164796LLU;
	uint64_t x411 = 308LLU;
	int32_t x412 = -1;
	static volatile uint64_t t11 = 20LLU;

	t11 = (x409>>(x410&(x411|x412)));

	if (t11 != 1401357761505149LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x421 = INT16_MAX;
	static volatile int8_t x423 = INT8_MIN;
	int32_t t12 = -113470;

	t12 = (x421>>(x422&(x423|x424)));

	if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x437 = UINT8_MAX;
	volatile uint16_t x438 = 137U;
	int32_t x439 = INT32_MIN;
	volatile uint32_t x440 = 33U;

	t13 = (x437>>(x438&(x439|x440)));

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int16_t x445 = 132;
	static uint8_t x446 = 3U;
	static int8_t x447 = -48;
	static int64_t x448 = -3941LL;
	int32_t t14 = -1389211;

	t14 = (x445>>(x446&(x447|x448)));

	if (t14 != 16) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x561 = 3012980U;
	uint32_t x563 = 860U;
	uint16_t x564 = 24219U;
	uint32_t t15 = 37015721U;

	t15 = (x561>>(x562&(x563|x564)));

	if (t15 != 188311U) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x566 = INT8_MAX;
	static uint8_t x567 = 2U;
	int64_t x568 = -53900186665703LL;
	uint64_t t16 = 1288122164825770045LLU;

	t16 = (x565>>(x566&(x567|x568)));

	if (t16 != 137438953471LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x709 = 129341776038209LL;
	int64_t x710 = INT64_MIN;
	volatile uint8_t x711 = UINT8_MAX;
	int16_t x712 = 67;

	t17 = (x709>>(x710&(x711|x712)));

	if (t17 != 129341776038209LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x721 = UINT32_MAX;
	uint32_t x722 = 27U;
	int32_t x723 = INT32_MIN;
	int64_t x724 = -102LL;
	uint32_t t18 = 59940717U;

	t18 = (x721>>(x722&(x723|x724)));

	if (t18 != 63U) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x765 = 2334U;
	uint32_t x767 = UINT32_MAX;
	int64_t x768 = -474334LL;
	uint32_t t19 = 7142U;

	t19 = (x765>>(x766&(x767|x768)));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x846 = INT64_MIN;
	int16_t x847 = -279;
	uint32_t x848 = 59U;
	volatile uint64_t t20 = 3LLU;

	t20 = (x845>>(x846&(x847|x848)));

	if (t20 != 44LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x889 = 86;
	uint32_t x890 = 826U;
	uint8_t x891 = 5U;
	int16_t x892 = INT16_MIN;
	int32_t t21 = 146426;

	t21 = (x889>>(x890&(x891|x892)));

	if (t21 != 86) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x905 = 15987U;
	uint8_t x906 = 2U;
	uint8_t x907 = UINT8_MAX;
	uint8_t x908 = UINT8_MAX;
	uint32_t t22 = 18017U;

	t22 = (x905>>(x906&(x907|x908)));

	if (t22 != 3996U) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x913 = 80U;
	int8_t x914 = 6;
	static int32_t x915 = -1;
	volatile uint64_t x916 = UINT64_MAX;
	int32_t t23 = 41;

	t23 = (x913>>(x914&(x915|x916)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x917 = 2;
	int32_t x919 = INT32_MIN;
	volatile int16_t x920 = INT16_MAX;
	volatile int32_t t24 = 67620061;

	t24 = (x917>>(x918&(x919|x920)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x925 = 0;
	uint16_t x927 = 11U;
	volatile int32_t t25 = -623756;

	t25 = (x925>>(x926&(x927|x928)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint8_t x958 = 50U;
	static volatile int64_t x959 = INT64_MIN;
	static int64_t x960 = INT64_MIN;
	volatile int32_t t26 = -16213;

	t26 = (x957>>(x958&(x959|x960)));

	if (t26 != 2) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1093 = 2301U;
	volatile uint8_t x1094 = 13U;
	volatile int32_t x1095 = INT32_MIN;
	volatile uint8_t x1096 = 26U;
	volatile int32_t t27 = -8632503;

	t27 = (x1093>>(x1094&(x1095|x1096)));

	if (t27 != 8) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1129 = INT8_MAX;
	uint8_t x1130 = 4U;
	volatile uint16_t x1131 = UINT16_MAX;
	int64_t x1132 = 23149573LL;
	volatile int32_t t28 = 124067762;

	t28 = (x1129>>(x1130&(x1131|x1132)));

	if (t28 != 7) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1161 = 1237477281776LLU;
	int16_t x1162 = -2573;
	int8_t x1163 = 9;

	t29 = (x1161>>(x1162&(x1163|x1164)));

	if (t29 != 154684660222LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x1189 = 1LL;
	uint8_t x1190 = 25U;
	static int64_t x1191 = 29851427330LL;
	uint64_t x1192 = 8418882554488443905LLU;
	int64_t t30 = -361907LL;

	t30 = (x1189>>(x1190&(x1191|x1192)));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1241 = 23;
	int16_t x1243 = 83;
	static uint32_t x1244 = 314U;
	int32_t t31 = -18;

	t31 = (x1241>>(x1242&(x1243|x1244)));

	if (t31 != 23) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1279 = 640020432U;

	t32 = (x1277>>(x1278&(x1279|x1280)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x1325 = UINT8_MAX;
	volatile int32_t x1327 = INT32_MAX;
	uint32_t x1328 = 80231U;
	static int32_t t33 = -180342;

	t33 = (x1325>>(x1326&(x1327|x1328)));

	if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int64_t x1409 = 162LL;
	int16_t x1412 = 12759;
	volatile int64_t t34 = 147466967545320LL;

	t34 = (x1409>>(x1410&(x1411|x1412)));

	if (t34 != 162LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint32_t x1445 = 30U;
	uint8_t x1448 = 1U;
	volatile uint32_t t35 = 3676U;

	t35 = (x1445>>(x1446&(x1447|x1448)));

	if (t35 != 30U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x1449 = 81050U;
	uint32_t x1450 = 76U;
	static int8_t x1451 = 1;
	int8_t x1452 = INT8_MIN;
	volatile uint32_t t36 = 154U;

	t36 = (x1449>>(x1450&(x1451|x1452)));

	if (t36 != 81050U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x1537 = 20;
	static uint32_t x1538 = UINT32_MAX;
	volatile uint8_t x1539 = 14U;

	t37 = (x1537>>(x1538&(x1539|x1540)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1546 = 8;
	volatile uint32_t x1547 = 82871U;
	uint8_t x1548 = UINT8_MAX;

	t38 = (x1545>>(x1546&(x1547|x1548)));

	if (t38 != 8388607) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x1609 = UINT8_MAX;
	int8_t x1610 = 0;
	int32_t x1611 = INT32_MIN;
	uint16_t x1612 = 3539U;
	static volatile int32_t t39 = 81544983;

	t39 = (x1609>>(x1610&(x1611|x1612)));

	if (t39 != 255) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x1709 = UINT64_MAX;
	static int8_t x1710 = 0;
	uint8_t x1712 = UINT8_MAX;
	uint64_t t40 = UINT64_MAX;

	t40 = (x1709>>(x1710&(x1711|x1712)));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1729 = 0;
	volatile uint32_t x1731 = UINT32_MAX;
	volatile uint64_t x1732 = UINT64_MAX;
	volatile int32_t t41 = 20;

	t41 = (x1729>>(x1730&(x1731|x1732)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x1740 = INT16_MAX;
	uint32_t t42 = UINT32_MAX;

	t42 = (x1737>>(x1738&(x1739|x1740)));

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x1789 = 12;
	static volatile int32_t t43 = -747;

	t43 = (x1789>>(x1790&(x1791|x1792)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x1797 = UINT16_MAX;
	int8_t x1798 = 0;
	int8_t x1799 = INT8_MIN;
	int64_t x1800 = -59965463049864LL;
	static int32_t t44 = 3080;

	t44 = (x1797>>(x1798&(x1799|x1800)));

	if (t44 != 65535) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x1809 = UINT32_MAX;
	int8_t x1810 = 1;
	uint16_t x1811 = UINT16_MAX;
	uint32_t t45 = 3924834U;

	t45 = (x1809>>(x1810&(x1811|x1812)));

	if (t45 != 2147483647U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x1845 = INT64_MAX;
	volatile int32_t x1846 = INT32_MIN;
	int8_t x1847 = 14;
	int32_t x1848 = 13;
	volatile int64_t t46 = INT64_MAX;

	t46 = (x1845>>(x1846&(x1847|x1848)));

	if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x2006 = 12674U;
	int8_t x2007 = INT8_MAX;
	int32_t x2008 = INT32_MIN;
	int64_t t47 = -5673935549857LL;

	t47 = (x2005>>(x2006&(x2007|x2008)));

	if (t47 != 2107918072567253LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x2033 = INT8_MAX;
	uint16_t x2034 = 28U;
	static volatile uint8_t x2035 = 0U;
	int8_t x2036 = INT8_MIN;

	t48 = (x2033>>(x2034&(x2035|x2036)));

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x2065 = UINT16_MAX;
	volatile uint16_t x2067 = UINT16_MAX;
	int32_t x2068 = -1;
	volatile int32_t t49 = -14484912;

	t49 = (x2065>>(x2066&(x2067|x2068)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x2069 = 66370181592369LL;
	int16_t x2070 = 1;
	int16_t x2072 = INT16_MIN;
	volatile int64_t t50 = -3LL;

	t50 = (x2069>>(x2070&(x2071|x2072)));

	if (t50 != 66370181592369LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x2085 = 3U;
	static uint8_t x2086 = 15U;
	uint16_t x2087 = UINT16_MAX;
	volatile int32_t t51 = 89;

	t51 = (x2085>>(x2086&(x2087|x2088)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x2101 = INT32_MAX;
	uint64_t x2102 = 11296986829LLU;
	int32_t x2103 = 3;
	volatile int64_t x2104 = INT64_MIN;
	int32_t t52 = 353345;

	t52 = (x2101>>(x2102&(x2103|x2104)));

	if (t52 != 1073741823) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x2153 = 31047U;
	int64_t x2154 = INT64_MIN;
	uint8_t x2156 = UINT8_MAX;
	volatile uint32_t t53 = 311452736U;

	t53 = (x2153>>(x2154&(x2155|x2156)));

	if (t53 != 31047U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x2193 = 23926U;
	int16_t x2195 = INT16_MAX;
	uint8_t x2196 = 1U;
	volatile int32_t t54 = 6806;

	t54 = (x2193>>(x2194&(x2195|x2196)));

	if (t54 != 11963) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x2198 = 6U;
	uint8_t x2199 = UINT8_MAX;
	static uint8_t x2200 = 12U;
	int32_t t55 = 517017004;

	t55 = (x2197>>(x2198&(x2199|x2200)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x2313 = INT32_MAX;
	uint8_t x2314 = 17U;
	uint8_t x2316 = 3U;

	t56 = (x2313>>(x2314&(x2315|x2316)));

	if (t56 != 16383) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x2341 = 221U;
	uint16_t x2342 = 1U;
	uint8_t x2344 = UINT8_MAX;

	t57 = (x2341>>(x2342&(x2343|x2344)));

	if (t57 != 110) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x2377 = INT8_MAX;
	int64_t x2380 = INT64_MAX;
	int32_t t58 = -79120445;

	t58 = (x2377>>(x2378&(x2379|x2380)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x2421 = INT16_MAX;
	static int32_t x2423 = INT32_MIN;
	volatile uint8_t x2424 = 2U;
	static int32_t t59 = 16270;

	t59 = (x2421>>(x2422&(x2423|x2424)));

	if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x2453 = 383U;
	int16_t x2454 = 510;
	uint16_t x2455 = 1U;
	int32_t x2456 = INT32_MIN;
	int32_t t60 = -495530;

	t60 = (x2453>>(x2454&(x2455|x2456)));

	if (t60 != 383) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x2469 = 52;
	int16_t x2470 = 0;
	int8_t x2471 = 5;
	uint32_t x2472 = UINT32_MAX;
	int32_t t61 = 10543806;

	t61 = (x2469>>(x2470&(x2471|x2472)));

	if (t61 != 52) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x2489 = 60;
	int16_t x2490 = 1;
	int64_t x2491 = -195864LL;
	int32_t t62 = 3;

	t62 = (x2489>>(x2490&(x2491|x2492)));

	if (t62 != 60) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x2517 = 13899;
	static int16_t x2518 = INT16_MIN;
	int8_t x2519 = 1;
	static uint8_t x2520 = UINT8_MAX;
	int32_t t63 = 825;

	t63 = (x2517>>(x2518&(x2519|x2520)));

	if (t63 != 13899) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x2593 = INT64_MAX;
	int8_t x2594 = 8;
	static int16_t x2595 = INT16_MIN;
	int8_t x2596 = INT8_MIN;
	static volatile int64_t t64 = INT64_MAX;

	t64 = (x2593>>(x2594&(x2595|x2596)));

	if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x2601 = INT64_MAX;
	volatile uint8_t x2602 = 7U;
	volatile uint32_t x2603 = UINT32_MAX;
	volatile int8_t x2604 = INT8_MAX;
	static int64_t t65 = 758LL;

	t65 = (x2601>>(x2602&(x2603|x2604)));

	if (t65 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x2665 = 0LL;
	uint32_t x2666 = UINT32_MAX;
	int64_t x2667 = INT64_MIN;
	uint8_t x2668 = 60U;

	t66 = (x2665>>(x2666&(x2667|x2668)));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x2733 = 3;
	static uint8_t x2735 = 22U;
	int32_t t67 = 850963;

	t67 = (x2733>>(x2734&(x2735|x2736)));

	if (t67 != 3) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint16_t x2742 = 2690U;
	static int64_t x2743 = 46LL;
	int8_t x2744 = INT8_MAX;
	uint32_t t68 = 3904033U;

	t68 = (x2741>>(x2742&(x2743|x2744)));

	if (t68 != 1073741823U) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x2805 = 5U;
	volatile uint8_t x2806 = 1U;
	int32_t x2807 = INT32_MAX;
	uint64_t x2808 = 287328840677733862LLU;
	volatile int32_t t69 = -18989741;

	t69 = (x2805>>(x2806&(x2807|x2808)));

	if (t69 != 2) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x2853 = INT32_MAX;
	volatile uint8_t x2854 = 0U;
	int32_t x2855 = -1;
	volatile int32_t x2856 = INT32_MAX;
	volatile int32_t t70 = INT32_MAX;

	t70 = (x2853>>(x2854&(x2855|x2856)));

	if (t70 != INT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x2897 = UINT8_MAX;
	uint8_t x2900 = 14U;

	t71 = (x2897>>(x2898&(x2899|x2900)));

	if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x2962 = INT16_MAX;
	int16_t x2963 = INT16_MIN;
	uint64_t x2964 = 0LLU;
	int32_t t72 = -11;

	t72 = (x2961>>(x2962&(x2963|x2964)));

	if (t72 != 255) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x2985 = 8U;
	uint64_t x2987 = 92431632516854229LLU;
	volatile int64_t x2988 = 4654443947LL;
	volatile int32_t t73 = -79;

	t73 = (x2985>>(x2986&(x2987|x2988)));

	if (t73 != 8) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x2990 = INT16_MAX;
	static volatile int16_t x2991 = 10;
	int64_t x2992 = INT64_MIN;

	t74 = (x2989>>(x2990&(x2991|x2992)));

	if (t74 != 63) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x3017 = 50453026550024LLU;
	volatile int32_t x3018 = INT32_MIN;
	uint32_t x3019 = 365U;
	int32_t x3020 = 480378988;
	uint64_t t75 = 124841566LLU;

	t75 = (x3017>>(x3018&(x3019|x3020)));

	if (t75 != 50453026550024LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x3021 = 169U;
	static uint16_t x3022 = 15U;
	int8_t x3023 = -31;
	int32_t x3024 = INT32_MAX;
	volatile int32_t t76 = -1832;

	t76 = (x3021>>(x3022&(x3023|x3024)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x3033 = UINT32_MAX;
	uint64_t x3035 = 1LLU;
	uint64_t x3036 = 24317LLU;
	static uint32_t t77 = UINT32_MAX;

	t77 = (x3033>>(x3034&(x3035|x3036)));

	if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x3073 = INT32_MAX;
	int32_t x3075 = INT32_MAX;
	int8_t x3076 = -16;
	volatile int32_t t78 = INT32_MAX;

	t78 = (x3073>>(x3074&(x3075|x3076)));

	if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x3082 = 6LL;
	static int16_t x3083 = INT16_MIN;
	uint8_t x3084 = 2U;
	static int32_t t79 = -2290820;

	t79 = (x3081>>(x3082&(x3083|x3084)));

	if (t79 != 16383) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x3126 = 2;
	volatile int8_t x3128 = -7;
	static int32_t t80 = 22;

	t80 = (x3125>>(x3126&(x3127|x3128)));

	if (t80 != 16383) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x3257 = UINT16_MAX;
	int8_t x3258 = 1;
	static int64_t x3259 = INT64_MAX;
	uint32_t x3260 = UINT32_MAX;
	static volatile int32_t t81 = -875;

	t81 = (x3257>>(x3258&(x3259|x3260)));

	if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x3349 = 350;
	uint64_t x3351 = 3966949544611181188LLU;
	static int16_t x3352 = INT16_MAX;

	t82 = (x3349>>(x3350&(x3351|x3352)));

	if (t82 != 21) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x3353 = UINT32_MAX;
	int8_t x3354 = 62;
	uint32_t x3356 = 4053U;
	static volatile uint32_t t83 = 6386U;

	t83 = (x3353>>(x3354&(x3355|x3356)));

	if (t83 != 4095U) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x3366 = 1LL;
	int8_t x3368 = -1;
	int32_t t84 = -34473898;

	t84 = (x3365>>(x3366&(x3367|x3368)));

	if (t84 != 1073741823) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x3425 = 3U;
	int8_t x3426 = 3;
	static int32_t x3427 = INT32_MAX;
	static int16_t x3428 = -1;
	static int32_t t85 = -14650429;

	t85 = (x3425>>(x3426&(x3427|x3428)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x3449 = 880U;
	static int32_t t86 = 13563846;

	t86 = (x3449>>(x3450&(x3451|x3452)));

	if (t86 != 6) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x3461 = INT16_MAX;
	uint8_t x3462 = 20U;
	static volatile int16_t x3463 = -1;
	int32_t x3464 = -43458;
	int32_t t87 = -2;

	t87 = (x3461>>(x3462&(x3463|x3464)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x3522 = 2U;
	static int64_t x3524 = -39186032931075775LL;
	volatile uint32_t t88 = 2U;

	t88 = (x3521>>(x3522&(x3523|x3524)));

	if (t88 != 506577883U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x3529 = INT8_MAX;
	static uint64_t x3530 = 12710LLU;
	int16_t x3531 = INT16_MIN;
	int8_t x3532 = 7;
	volatile int32_t t89 = -175307927;

	t89 = (x3529>>(x3530&(x3531|x3532)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x3549 = INT64_MAX;
	uint8_t x3550 = 6U;
	int32_t x3551 = -1;
	volatile int64_t t90 = -36632810968854LL;

	t90 = (x3549>>(x3550&(x3551|x3552)));

	if (t90 != 144115188075855871LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x3597 = INT8_MAX;
	int32_t x3598 = 1;
	static int16_t x3599 = 209;
	static uint16_t x3600 = 9419U;
	static volatile int32_t t91 = -174;

	t91 = (x3597>>(x3598&(x3599|x3600)));

	if (t91 != 63) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x3605 = 554799824;
	volatile int32_t x3606 = 3;
	static uint64_t x3607 = 20593LLU;
	uint64_t x3608 = UINT64_MAX;
	volatile int32_t t92 = 4486570;

	t92 = (x3605>>(x3606&(x3607|x3608)));

	if (t92 != 69349978) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x3622 = 10U;
	volatile uint64_t x3623 = UINT64_MAX;
	uint64_t x3624 = UINT64_MAX;
	volatile int32_t t93 = 25840;

	t93 = (x3621>>(x3622&(x3623|x3624)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x3657 = 2894;
	static int32_t x3658 = INT32_MIN;
	volatile int32_t x3660 = 30;
	volatile int32_t t94 = 3923;

	t94 = (x3657>>(x3658&(x3659|x3660)));

	if (t94 != 2894) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x3701 = UINT32_MAX;
	int32_t x3703 = 53469511;
	uint16_t x3704 = 3196U;
	volatile uint32_t t95 = UINT32_MAX;

	t95 = (x3701>>(x3702&(x3703|x3704)));

	if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x3713 = UINT16_MAX;
	int16_t x3714 = INT16_MIN;
	volatile uint64_t x3715 = 113LLU;
	int16_t x3716 = INT16_MAX;

	t96 = (x3713>>(x3714&(x3715|x3716)));

	if (t96 != 65535) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x3777 = UINT64_MAX;
	int32_t x3778 = 300;
	static volatile uint64_t t97 = UINT64_MAX;

	t97 = (x3777>>(x3778&(x3779|x3780)));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x3781 = 315LL;
	volatile uint16_t x3782 = 35U;
	static int32_t x3783 = -1;
	static int32_t x3784 = INT32_MAX;
	static volatile int64_t t98 = -1668141361763315293LL;

	t98 = (x3781>>(x3782&(x3783|x3784)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x3797 = 1958;
	uint16_t x3798 = 3U;
	volatile int16_t x3800 = INT16_MIN;

	t99 = (x3797>>(x3798&(x3799|x3800)));

	if (t99 != 244) { NG(); } else { ; }
	
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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x51 = 38U;
static uint32_t t1 = 0U;
volatile uint16_t x270 = UINT16_MAX;
uint64_t x272 = 0LLU;
int32_t t3 = -56704376;
int16_t x307 = INT16_MIN;
static uint64_t x311 = 1536LLU;
int16_t x395 = INT16_MIN;
int64_t x421 = -1LL;
int64_t x630 = -106LL;
static int8_t x631 = INT8_MIN;
volatile int64_t t14 = -2148939492548416065LL;
uint64_t t15 = 11553273LLU;
int8_t x643 = 20;
uint32_t x754 = UINT32_MAX;
int32_t x755 = -1;
static int64_t x838 = -1LL;
volatile int16_t x839 = INT16_MIN;
static int16_t x927 = INT16_MIN;
uint16_t x956 = 1U;
uint32_t x1034 = 282774U;
uint32_t x1188 = 28U;
static uint8_t x1265 = 44U;
volatile int32_t t29 = 115;
uint64_t t31 = 1843469464699350387LLU;
uint64_t x1367 = 14LLU;
uint16_t x1580 = 0U;
static volatile int64_t x1622 = -45852LL;
int64_t x1624 = 0LL;
int16_t x1693 = -71;
int64_t x1694 = INT64_MIN;
uint64_t t39 = 6791LLU;
uint16_t x1745 = 25259U;
uint64_t x1825 = 470LLU;
static uint64_t x2073 = UINT64_MAX;
volatile uint64_t t43 = 82967036LLU;
volatile int8_t x2113 = INT8_MIN;
uint32_t x2115 = 4059108U;
volatile uint64_t t45 = 23893593054396LLU;
volatile int8_t x2175 = 0;
int8_t x2193 = -4;
uint8_t x2196 = 23U;
uint32_t x2201 = 13841864U;
int8_t x2204 = 57;
static int16_t x2381 = INT16_MIN;
int16_t x2382 = -1;
int16_t x2383 = INT16_MIN;
uint16_t x2384 = 0U;
uint64_t x2425 = UINT64_MAX;
static uint64_t t55 = 0LLU;
static int8_t x2518 = INT8_MIN;
int16_t x2519 = INT16_MAX;
uint64_t t58 = 24360LLU;
uint64_t x2670 = UINT64_MAX;
static volatile uint64_t x2711 = 8829368571442906343LLU;
uint64_t t61 = 60449688912LLU;
uint32_t x2863 = UINT32_MAX;
uint32_t t63 = 15151U;
uint32_t x2988 = 23U;
static int64_t x3023 = -1LL;
volatile uint32_t x3185 = UINT32_MAX;
volatile uint16_t x3296 = 7U;
uint64_t t70 = 2799817974498305LLU;
volatile uint32_t t71 = 10U;
volatile int16_t x3321 = INT16_MAX;
int32_t x3323 = 19162;
volatile int8_t x3496 = 3;
int32_t x3525 = 137949786;
uint16_t x3528 = 2U;
volatile uint64_t t76 = 2973LLU;
int8_t x3740 = 39;
uint16_t x3797 = 88U;
uint64_t x3858 = 253432609691894304LLU;
static int16_t x3860 = 1;
int8_t x3864 = 21;
volatile uint8_t x3872 = 11U;
volatile uint64_t t81 = 8357589LLU;
int64_t x3947 = 8594979319937822LL;
volatile int64_t t82 = -30903905891497LL;
volatile uint8_t x3997 = UINT8_MAX;
volatile int16_t x4011 = INT16_MIN;
uint32_t x4133 = 112711U;
int8_t x4135 = 1;
int64_t x4139 = -1LL;
static volatile int8_t x4140 = 1;
volatile uint64_t x4331 = UINT64_MAX;
uint16_t x4360 = 18U;
static int32_t x4366 = INT32_MAX;
uint16_t x4533 = 1U;
int8_t x4534 = INT8_MAX;
int32_t x4695 = 1;
int64_t x4778 = -1880912LL;
int64_t t99 = -37784000194314005LL;


void f0(void) {
	int64_t x37 = -1LL;
	static int16_t x38 = INT16_MIN;
	uint32_t x39 = 482U;
	uint16_t x40 = 4U;
	static volatile int64_t t0 = -109LL;

	t0 = ((x37+(x38*x39))>>x40);

	if (t0 != 267448319LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x49 = -1;
	uint32_t x50 = 49828U;
	int16_t x52 = 1;

	t1 = ((x49+(x50*x51))>>x52);

	if (t1 != 946731U) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x249 = -13;
	uint16_t x250 = 30U;
	uint32_t x251 = UINT32_MAX;
	uint64_t x252 = 0LLU;
	uint32_t t2 = 0U;

	t2 = ((x249+(x250*x251))>>x252);

	if (t2 != 4294967253U) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x269 = 18U;
	int16_t x271 = INT16_MAX;

	t3 = ((x269+(x270*x271))>>x272);

	if (t3 != 2147385363) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x297 = -1;
	int16_t x298 = -132;
	int64_t x299 = -1LL;
	uint8_t x300 = 4U;
	int64_t t4 = -102089LL;

	t4 = ((x297+(x298*x299))>>x300);

	if (t4 != 8LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x305 = UINT32_MAX;
	int64_t x306 = 1LL;
	uint32_t x308 = 7U;
	int64_t t5 = -73822220008231008LL;

	t5 = ((x305+(x306*x307))>>x308);

	if (t5 != 33554175LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x309 = 800465420U;
	int32_t x310 = INT32_MIN;
	uint16_t x312 = 1U;
	uint64_t t6 = 38561494451742934LLU;

	t6 = ((x309+(x310*x311))>>x312);

	if (t6 != 9223370387987566854LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x369 = UINT64_MAX;
	static volatile int16_t x370 = INT16_MIN;
	int16_t x371 = INT16_MAX;
	static uint8_t x372 = 1U;
	volatile uint64_t t7 = 13993559611165248LLU;

	t7 = ((x369+(x370*x371))>>x372);

	if (t7 != 9223372036317921279LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x389 = -2;
	static uint64_t x390 = UINT64_MAX;
	int16_t x391 = -1;
	static int8_t x392 = 1;
	volatile uint64_t t8 = 1008160382549LLU;

	t8 = ((x389+(x390*x391))>>x392);

	if (t8 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x393 = UINT64_MAX;
	int8_t x394 = INT8_MIN;
	uint8_t x396 = 62U;
	uint64_t t9 = 772124299929120LLU;

	t9 = ((x393+(x394*x395))>>x396);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x413 = INT16_MIN;
	uint64_t x414 = 5180LLU;
	static volatile uint64_t x415 = 4LLU;
	int8_t x416 = 2;
	volatile uint64_t t10 = 1859203259954LLU;

	t10 = ((x413+(x414*x415))>>x416);

	if (t10 != 4611686018427384892LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint64_t x422 = UINT64_MAX;
	uint16_t x423 = 6U;
	int8_t x424 = 15;
	static volatile uint64_t t11 = 66901286123LLU;

	t11 = ((x421+(x422*x423))>>x424);

	if (t11 != 562949953421311LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x461 = 12U;
	uint64_t x462 = 506194LLU;
	int16_t x463 = INT16_MAX;
	uint8_t x464 = 0U;
	uint64_t t12 = 530327655362LLU;

	t12 = ((x461+(x462*x463))>>x464);

	if (t12 != 16586458810LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x557 = INT8_MAX;
	static volatile int32_t x558 = -214;
	uint64_t x559 = UINT64_MAX;
	static uint64_t x560 = 28LLU;
	uint64_t t13 = 11982762814947LLU;

	t13 = ((x557+(x558*x559))>>x560);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x629 = 9;
	uint32_t x632 = 6U;

	t14 = ((x629+(x630*x631))>>x632);

	if (t14 != 212LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x633 = UINT16_MAX;
	volatile int8_t x634 = -43;
	uint64_t x635 = 1631LLU;
	volatile uint8_t x636 = 4U;

	t15 = ((x633+(x634*x635))>>x636);

	if (t15 != 1152921504606846688LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x641 = 1U;
	int32_t x642 = 17721014;
	int8_t x644 = 1;
	static int32_t t16 = 54739;

	t16 = ((x641+(x642*x643))>>x644);

	if (t16 != 177210140) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x645 = 101921;
	static int16_t x646 = INT16_MIN;
	int8_t x647 = -8;
	uint32_t x648 = 1U;
	static volatile int32_t t17 = -293114997;

	t17 = ((x645+(x646*x647))>>x648);

	if (t17 != 182032) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x753 = UINT64_MAX;
	int32_t x756 = 1;
	uint64_t t18 = 8LLU;

	t18 = ((x753+(x754*x755))>>x756);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x821 = 100U;
	static volatile uint64_t x822 = 1167LLU;
	uint8_t x823 = UINT8_MAX;
	volatile uint64_t x824 = 29LLU;
	uint64_t t19 = 200802LLU;

	t19 = ((x821+(x822*x823))>>x824);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x837 = 1;
	volatile uint8_t x840 = 3U;
	volatile int64_t t20 = 737217484443154LL;

	t20 = ((x837+(x838*x839))>>x840);

	if (t20 != 4096LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x925 = 13;
	int32_t x926 = -1;
	int8_t x928 = 0;
	static int32_t t21 = 1014;

	t21 = ((x925+(x926*x927))>>x928);

	if (t21 != 32781) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x953 = 3U;
	uint64_t x954 = UINT64_MAX;
	uint8_t x955 = UINT8_MAX;
	static uint64_t t22 = 104626984502679539LLU;

	t22 = ((x953+(x954*x955))>>x956);

	if (t22 != 9223372036854775682LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x1033 = -23;
	int32_t x1035 = -1;
	uint8_t x1036 = 1U;
	volatile uint32_t t23 = 25U;

	t23 = ((x1033+(x1034*x1035))>>x1036);

	if (t23 != 2147342249U) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1041 = UINT8_MAX;
	int16_t x1042 = INT16_MIN;
	volatile int8_t x1043 = -1;
	volatile int8_t x1044 = 1;
	int32_t t24 = -65908;

	t24 = ((x1041+(x1042*x1043))>>x1044);

	if (t24 != 16511) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x1125 = UINT64_MAX;
	volatile uint8_t x1126 = UINT8_MAX;
	volatile uint8_t x1127 = UINT8_MAX;
	uint16_t x1128 = 22U;
	volatile uint64_t t25 = 30349034817LLU;

	t25 = ((x1125+(x1126*x1127))>>x1128);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1157 = -22;
	uint64_t x1158 = UINT64_MAX;
	int16_t x1159 = -1;
	volatile uint8_t x1160 = 0U;
	static volatile uint64_t t26 = 9604352107887LLU;

	t26 = ((x1157+(x1158*x1159))>>x1160);

	if (t26 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1185 = 0;
	int32_t x1186 = -1;
	int8_t x1187 = -1;
	static int32_t t27 = 10;

	t27 = ((x1185+(x1186*x1187))>>x1188);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x1266 = 311581427LLU;
	static uint8_t x1267 = 27U;
	volatile int16_t x1268 = 1;
	uint64_t t28 = 300249490801087LLU;

	t28 = ((x1265+(x1266*x1267))>>x1268);

	if (t28 != 4206349286LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1277 = 22U;
	uint8_t x1278 = 12U;
	volatile uint16_t x1279 = 9U;
	static int8_t x1280 = 1;

	t29 = ((x1277+(x1278*x1279))>>x1280);

	if (t29 != 65) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint64_t x1281 = UINT64_MAX;
	volatile uint16_t x1282 = 28U;
	int64_t x1283 = -91635780201744LL;
	uint16_t x1284 = 42U;
	volatile uint64_t t30 = 72LLU;

	t30 = ((x1281+(x1282*x1283))>>x1284);

	if (t30 != 4193720LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x1321 = INT64_MIN;
	uint32_t x1322 = 203U;
	uint64_t x1323 = UINT64_MAX;
	uint8_t x1324 = 12U;

	t31 = ((x1321+(x1322*x1323))>>x1324);

	if (t31 != 2251799813685247LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x1365 = UINT32_MAX;
	int32_t x1366 = INT32_MIN;
	int64_t x1368 = 51LL;
	volatile uint64_t t32 = 3268230629LLU;

	t32 = ((x1365+(x1366*x1367))>>x1368);

	if (t32 != 8191LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1441 = 1LL;
	int32_t x1442 = INT32_MIN;
	uint64_t x1443 = UINT64_MAX;
	static uint8_t x1444 = 2U;
	uint64_t t33 = 378LLU;

	t33 = ((x1441+(x1442*x1443))>>x1444);

	if (t33 != 536870912LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x1577 = INT16_MIN;
	static int8_t x1578 = -1;
	static uint32_t x1579 = UINT32_MAX;
	volatile uint32_t t34 = 28777968U;

	t34 = ((x1577+(x1578*x1579))>>x1580);

	if (t34 != 4294934529U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x1601 = -1;
	uint32_t x1602 = 2U;
	int8_t x1603 = -24;
	int16_t x1604 = 26;
	uint32_t t35 = 2405014U;

	t35 = ((x1601+(x1602*x1603))>>x1604);

	if (t35 != 63U) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x1621 = 1U;
	int64_t x1623 = -1LL;
	volatile int64_t t36 = 54LL;

	t36 = ((x1621+(x1622*x1623))>>x1624);

	if (t36 != 45853LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x1645 = 19472299354LLU;
	static uint32_t x1646 = 1570U;
	int16_t x1647 = INT16_MIN;
	static uint16_t x1648 = 11U;
	volatile uint64_t t37 = 32111612600LLU;

	t37 = ((x1645+(x1646*x1647))>>x1648);

	if (t37 != 11579990LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x1695 = 2078751194371LLU;
	uint16_t x1696 = 1U;
	volatile uint64_t t38 = 89764011786506881LLU;

	t38 = ((x1693+(x1694*x1695))>>x1696);

	if (t38 != 4611686018427387868LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x1717 = 80625U;
	uint64_t x1718 = 34932305381LLU;
	int64_t x1719 = -508431976LL;
	volatile int8_t x1720 = 46;

	t39 = ((x1717+(x1718*x1719))>>x1720);

	if (t39 != 9749LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1746 = 1;
	volatile uint8_t x1747 = 5U;
	int16_t x1748 = 3;
	static volatile int32_t t40 = 2733;

	t40 = ((x1745+(x1746*x1747))>>x1748);

	if (t40 != 3158) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x1826 = -1;
	int8_t x1827 = -1;
	static volatile uint8_t x1828 = 12U;
	uint64_t t41 = 7365711110219036LLU;

	t41 = ((x1825+(x1826*x1827))>>x1828);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x2029 = -1;
	int16_t x2030 = -1;
	uint64_t x2031 = 113LLU;
	volatile uint8_t x2032 = 4U;
	volatile uint64_t t42 = 29992287193LLU;

	t42 = ((x2029+(x2030*x2031))>>x2032);

	if (t42 != 1152921504606846968LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x2074 = -1LL;
	int32_t x2075 = INT32_MIN;
	static int64_t x2076 = 1LL;

	t43 = ((x2073+(x2074*x2075))>>x2076);

	if (t43 != 1073741823LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x2114 = UINT16_MAX;
	static volatile uint64_t x2116 = 2LLU;
	uint32_t t44 = 0U;

	t44 = ((x2113+(x2114*x2115))>>x2116);

	if (t44 != 1005159399U) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x2141 = UINT8_MAX;
	int16_t x2142 = -1;
	uint64_t x2143 = 587797768711555273LLU;
	uint16_t x2144 = 4U;

	t45 = ((x2141+(x2142*x2143))>>x2144);

	if (t45 != 1116184144062374787LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x2149 = INT32_MAX;
	int8_t x2150 = INT8_MIN;
	int16_t x2151 = 1399;
	static uint8_t x2152 = 17U;
	static int32_t t46 = -1;

	t46 = ((x2149+(x2150*x2151))>>x2152);

	if (t46 != 16382) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x2165 = UINT8_MAX;
	int8_t x2166 = INT8_MIN;
	uint32_t x2167 = 7U;
	uint16_t x2168 = 3U;
	volatile uint32_t t47 = 225882U;

	t47 = ((x2165+(x2166*x2167))>>x2168);

	if (t47 != 536870831U) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint64_t x2173 = 3539749LLU;
	uint16_t x2174 = UINT16_MAX;
	uint8_t x2176 = 9U;
	uint64_t t48 = 1334LLU;

	t48 = ((x2173+(x2174*x2175))>>x2176);

	if (t48 != 6913LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x2194 = UINT64_MAX;
	int64_t x2195 = INT64_MAX;
	volatile uint64_t t49 = 5215761685870691LLU;

	t49 = ((x2193+(x2194*x2195))>>x2196);

	if (t49 != 1099511627775LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x2202 = 23U;
	uint64_t x2203 = 130406667974385686LLU;
	uint64_t t50 = 217207571171LLU;

	t50 = ((x2201+(x2202*x2203))>>x2204);

	if (t50 != 20LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x2349 = -1;
	int16_t x2350 = -1;
	volatile uint32_t x2351 = 445460512U;
	static volatile uint8_t x2352 = 1U;
	static volatile uint32_t t51 = 3741U;

	t51 = ((x2349+(x2350*x2351))>>x2352);

	if (t51 != 1924753391U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t t52 = 502469271;

	t52 = ((x2381+(x2382*x2383))>>x2384);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x2393 = INT8_MIN;
	uint16_t x2394 = UINT16_MAX;
	uint64_t x2395 = 529LLU;
	static int8_t x2396 = 0;
	uint64_t t53 = 20819327387LLU;

	t53 = ((x2393+(x2394*x2395))>>x2396);

	if (t53 != 34667887LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x2426 = 158;
	static uint8_t x2427 = UINT8_MAX;
	int8_t x2428 = 1;
	static uint64_t t54 = 1735067644890LLU;

	t54 = ((x2425+(x2426*x2427))>>x2428);

	if (t54 != 20144LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x2445 = INT32_MIN;
	int64_t x2446 = INT64_MAX;
	volatile uint64_t x2447 = UINT64_MAX;
	uint8_t x2448 = 0U;

	t55 = ((x2445+(x2446*x2447))>>x2448);

	if (t55 != 9223372034707292161LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x2517 = INT32_MAX;
	uint8_t x2520 = 12U;
	int32_t t56 = 106;

	t56 = ((x2517+(x2518*x2519))>>x2520);

	if (t56 != 523264) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x2577 = -1;
	uint32_t x2578 = UINT32_MAX;
	volatile uint64_t x2579 = 266560869612453LLU;
	uint8_t x2580 = 17U;
	uint64_t t57 = 102769551053354298LLU;

	t57 = ((x2577+(x2578*x2579))>>x2580);

	if (t57 != 75833630440199LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x2585 = -1;
	int32_t x2586 = 12565910;
	static uint64_t x2587 = UINT64_MAX;
	int8_t x2588 = 0;

	t58 = ((x2585+(x2586*x2587))>>x2588);

	if (t58 != 18446744073696985705LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x2669 = 1804160257420401LLU;
	static volatile int16_t x2671 = INT16_MIN;
	volatile uint8_t x2672 = 11U;
	volatile uint64_t t59 = 4605LLU;

	t59 = ((x2669+(x2670*x2671))>>x2672);

	if (t59 != 880937625709LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x2681 = 1361442393LLU;
	uint16_t x2682 = 111U;
	uint16_t x2683 = 0U;
	uint16_t x2684 = 11U;
	volatile uint64_t t60 = 2308334LLU;

	t60 = ((x2681+(x2682*x2683))>>x2684);

	if (t60 != 664766LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x2709 = UINT64_MAX;
	int32_t x2710 = INT32_MAX;
	uint32_t x2712 = 17U;

	t61 = ((x2709+(x2710*x2711))>>x2712);

	if (t61 != 41448401664530LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint16_t x2809 = 6U;
	volatile int32_t x2810 = INT32_MAX;
	static uint32_t x2811 = 21U;
	uint64_t x2812 = 0LLU;
	volatile uint32_t t62 = 650226392U;

	t62 = ((x2809+(x2810*x2811))>>x2812);

	if (t62 != 2147483633U) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x2861 = INT32_MIN;
	int32_t x2862 = INT32_MIN;
	int8_t x2864 = 10;

	t63 = ((x2861+(x2862*x2863))>>x2864);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x2869 = UINT8_MAX;
	uint64_t x2870 = UINT64_MAX;
	int16_t x2871 = -1;
	int8_t x2872 = 4;
	static volatile uint64_t t64 = 1134824933795098944LLU;

	t64 = ((x2869+(x2870*x2871))>>x2872);

	if (t64 != 16LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x2913 = INT64_MAX;
	static volatile uint64_t x2914 = 1987866662965505LLU;
	int64_t x2915 = INT64_MIN;
	volatile int8_t x2916 = 0;
	static uint64_t t65 = UINT64_MAX;

	t65 = ((x2913+(x2914*x2915))>>x2916);

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x2973 = -1LL;
	int16_t x2974 = INT16_MIN;
	static volatile int16_t x2975 = -1;
	volatile uint64_t x2976 = 43LLU;
	volatile int64_t t66 = 1LL;

	t66 = ((x2973+(x2974*x2975))>>x2976);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x2985 = INT16_MIN;
	int8_t x2986 = 2;
	int32_t x2987 = 281781;
	volatile int32_t t67 = 3027678;

	t67 = ((x2985+(x2986*x2987))>>x2988);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x3021 = UINT64_MAX;
	int8_t x3022 = INT8_MAX;
	volatile int64_t x3024 = 31LL;
	volatile uint64_t t68 = 64499269925249LLU;

	t68 = ((x3021+(x3022*x3023))>>x3024);

	if (t68 != 8589934591LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x3186 = 3906U;
	uint16_t x3187 = 29144U;
	int16_t x3188 = 14;
	uint32_t t69 = 156U;

	t69 = ((x3185+(x3186*x3187))>>x3188);

	if (t69 != 6948U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x3293 = INT8_MIN;
	static volatile uint64_t x3294 = 52309655LLU;
	int32_t x3295 = INT32_MAX;

	t70 = ((x3293+(x3294*x3295))>>x3296);

	if (t70 != 877610380411809LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x3309 = INT32_MAX;
	uint16_t x3310 = UINT16_MAX;
	uint32_t x3311 = 906U;
	static int16_t x3312 = 6;

	t71 = ((x3309+(x3310*x3311))>>x3312);

	if (t71 != 34482161U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x3322 = 6;
	uint16_t x3324 = 23U;
	int32_t t72 = 753811752;

	t72 = ((x3321+(x3322*x3323))>>x3324);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x3493 = 0;
	static int8_t x3494 = INT8_MAX;
	volatile uint32_t x3495 = 98289U;
	uint32_t t73 = 4073U;

	t73 = ((x3493+(x3494*x3495))>>x3496);

	if (t73 != 1560337U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x3497 = INT8_MIN;
	volatile uint32_t x3498 = 561599207U;
	int32_t x3499 = -41267847;
	uint8_t x3500 = 3U;
	volatile uint32_t t74 = 3389993U;

	t74 = ((x3497+(x3498*x3499))>>x3500);

	if (t74 != 158971189U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x3526 = 523518;
	int16_t x3527 = 0;
	volatile int32_t t75 = 20146;

	t75 = ((x3525+(x3526*x3527))>>x3528);

	if (t75 != 34487446) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x3561 = 16405465U;
	static uint64_t x3562 = UINT64_MAX;
	uint32_t x3563 = 4U;
	int8_t x3564 = 2;

	t76 = ((x3561+(x3562*x3563))>>x3564);

	if (t76 != 4101365LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x3737 = -1;
	uint64_t x3738 = UINT64_MAX;
	int32_t x3739 = INT32_MIN;
	volatile uint64_t t77 = 2925287008783LLU;

	t77 = ((x3737+(x3738*x3739))>>x3740);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x3798 = -1;
	int8_t x3799 = INT8_MIN;
	int16_t x3800 = 1;
	int32_t t78 = 1;

	t78 = ((x3797+(x3798*x3799))>>x3800);

	if (t78 != 108) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x3857 = INT32_MAX;
	uint16_t x3859 = 2574U;
	uint64_t t79 = 0LLU;

	t79 = ((x3857+(x3858*x3859))>>x3860);

	if (t79 != 3349747384624557791LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x3861 = UINT64_MAX;
	int16_t x3862 = INT16_MAX;
	int64_t x3863 = 3250LL;
	volatile uint64_t t80 = 3LLU;

	t80 = ((x3861+(x3862*x3863))>>x3864);

	if (t80 != 50LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x3869 = UINT32_MAX;
	volatile int16_t x3870 = -1;
	static volatile uint64_t x3871 = 977LLU;

	t81 = ((x3869+(x3870*x3871))>>x3872);

	if (t81 != 2097151LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x3945 = 77;
	uint8_t x3946 = 2U;
	uint16_t x3948 = 7U;

	t82 = ((x3945+(x3946*x3947))>>x3948);

	if (t82 != 134296551874029LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x3961 = INT64_MIN;
	uint64_t x3962 = UINT64_MAX;
	volatile int16_t x3963 = INT16_MIN;
	static uint16_t x3964 = 3U;
	volatile uint64_t t83 = 13184460542372LLU;

	t83 = ((x3961+(x3962*x3963))>>x3964);

	if (t83 != 1152921504606851072LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x3998 = UINT64_MAX;
	uint64_t x3999 = UINT64_MAX;
	uint8_t x4000 = 1U;
	volatile uint64_t t84 = 10766793790018451LLU;

	t84 = ((x3997+(x3998*x3999))>>x4000);

	if (t84 != 128LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x4009 = -13;
	static uint32_t x4010 = UINT32_MAX;
	volatile uint32_t x4012 = 4U;
	static volatile uint32_t t85 = 1017U;

	t85 = ((x4009+(x4010*x4011))>>x4012);

	if (t85 != 2047U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x4134 = INT32_MAX;
	uint16_t x4136 = 1U;
	uint32_t t86 = 1940783U;

	t86 = ((x4133+(x4134*x4135))>>x4136);

	if (t86 != 1073798179U) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x4137 = -1LL;
	uint64_t x4138 = UINT64_MAX;
	volatile uint64_t t87 = 2556906LLU;

	t87 = ((x4137+(x4138*x4139))>>x4140);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x4149 = -362913LL;
	uint64_t x4150 = 233600LLU;
	int8_t x4151 = INT8_MIN;
	uint16_t x4152 = 11U;
	volatile uint64_t t88 = 12LLU;

	t88 = ((x4149+(x4150*x4151))>>x4152);

	if (t88 != 9007199254726214LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x4329 = INT64_MAX;
	volatile int32_t x4330 = INT32_MAX;
	volatile uint32_t x4332 = 5U;
	volatile uint64_t t89 = 5390013834576581LLU;

	t89 = ((x4329+(x4330*x4331))>>x4332);

	if (t89 != 288230376084602880LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x4357 = 6U;
	int32_t x4358 = -17;
	int16_t x4359 = 760;
	uint32_t t90 = 50U;

	t90 = ((x4357+(x4358*x4359))>>x4360);

	if (t90 != 16383U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x4365 = INT8_MIN;
	uint32_t x4367 = 58415468U;
	volatile uint8_t x4368 = 6U;
	static uint32_t t91 = 906161149U;

	t91 = ((x4365+(x4366*x4367))>>x4368);

	if (t91 != 66196120U) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x4453 = UINT8_MAX;
	static int64_t x4454 = -1LL;
	volatile int32_t x4455 = INT32_MIN;
	int8_t x4456 = 53;
	static volatile int64_t t92 = -2LL;

	t92 = ((x4453+(x4454*x4455))>>x4456);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x4535 = INT8_MAX;
	uint8_t x4536 = 12U;
	static int32_t t93 = -213;

	t93 = ((x4533+(x4534*x4535))>>x4536);

	if (t93 != 3) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x4597 = -1LL;
	volatile int32_t x4598 = 2363;
	uint16_t x4599 = 167U;
	uint8_t x4600 = 0U;
	int64_t t94 = 451331823LL;

	t94 = ((x4597+(x4598*x4599))>>x4600);

	if (t94 != 394620LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x4693 = 14U;
	static int16_t x4694 = -7;
	int8_t x4696 = 15;
	volatile int32_t t95 = -22741848;

	t95 = ((x4693+(x4694*x4695))>>x4696);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x4705 = -1;
	uint16_t x4706 = 548U;
	uint32_t x4707 = UINT32_MAX;
	volatile uint8_t x4708 = 16U;
	volatile uint32_t t96 = 1U;

	t96 = ((x4705+(x4706*x4707))>>x4708);

	if (t96 != 65535U) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x4709 = 790350241898106639LLU;
	uint32_t x4710 = UINT32_MAX;
	uint32_t x4711 = 3506U;
	static volatile uint32_t x4712 = 31U;
	uint64_t t97 = 195978746723807LLU;

	t97 = ((x4709+(x4710*x4711))>>x4712);

	if (t97 != 368035513LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x4721 = -152167514LL;
	static uint64_t x4722 = 14977321986072022LLU;
	int8_t x4723 = INT8_MAX;
	int8_t x4724 = 3;
	volatile uint64_t t98 = 46942LLU;

	t98 = ((x4721+(x4722*x4723))>>x4724);

	if (t98 != 237764986509872410LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x4777 = UINT16_MAX;
	int16_t x4779 = -1;
	uint32_t x4780 = 7U;

	t99 = ((x4777+(x4778*x4779))>>x4780);

	if (t99 != 15206LL) { NG(); } else { ; }
	
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


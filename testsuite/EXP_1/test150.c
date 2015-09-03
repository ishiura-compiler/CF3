#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 256536511395LLU;
int8_t x385 = INT8_MIN;
uint8_t x403 = UINT8_MAX;
static int8_t x404 = 1;
static volatile int32_t t3 = -22;
uint8_t x456 = 3U;
uint32_t x469 = 0U;
int8_t x823 = 7;
volatile uint8_t x880 = 0U;
uint16_t x1016 = 0U;
uint64_t x1109 = 1831433008410LLU;
volatile int32_t x1111 = INT32_MIN;
uint64_t x1155 = 99183985618457644LLU;
uint16_t x1169 = UINT16_MAX;
volatile int32_t t14 = 26198240;
int8_t x1201 = 3;
uint16_t x1203 = 7257U;
volatile uint16_t x1340 = 7U;
static uint64_t t20 = 9287482202378LLU;
int64_t x1723 = INT64_MIN;
uint16_t x1732 = 16U;
volatile uint64_t t24 = 62999597527129348LLU;
volatile uint8_t x1764 = 0U;
volatile uint64_t t26 = UINT64_MAX;
static volatile uint64_t t27 = 54885930217184851LLU;
static uint32_t x2098 = 26U;
static int16_t x2100 = 1;
int8_t x2119 = 0;
uint16_t x2197 = UINT16_MAX;
int64_t x2225 = INT64_MIN;
uint8_t x2254 = UINT8_MAX;
static int16_t x2255 = 11713;
uint16_t x2298 = 56U;
static uint16_t x2299 = UINT16_MAX;
uint16_t x2408 = 4U;
int16_t x2639 = INT16_MAX;
static uint64_t x2725 = 496618301LLU;
int16_t x2793 = INT16_MIN;
static int32_t x2844 = 2;
volatile uint32_t t42 = 1323001474U;
volatile int8_t x3330 = -1;
uint64_t t49 = 15882060941610LLU;
uint64_t x3527 = UINT64_MAX;
int8_t x3528 = 7;
uint16_t x3549 = 247U;
int32_t x3551 = 5818462;
static volatile uint32_t t53 = 15853226U;
volatile uint64_t x3645 = 2937840379719LLU;
int16_t x3669 = INT16_MAX;
volatile int32_t x3672 = 11;
uint64_t x3749 = 255787778454LLU;
volatile int64_t x3750 = INT64_MAX;
static int8_t x3751 = INT8_MAX;
int32_t x3758 = -1;
static int32_t x4123 = 11183;
uint64_t x4143 = UINT64_MAX;
uint64_t t63 = 31546734LLU;
static uint32_t t64 = 51685030U;
static uint8_t x4352 = 21U;
static int16_t x4433 = INT16_MAX;
volatile uint64_t x4434 = UINT64_MAX;
int8_t x4435 = 14;
int8_t x4514 = -1;
int32_t x4551 = -2;
uint32_t x4552 = 0U;
int16_t x4641 = INT16_MIN;
uint8_t x4644 = 10U;
int32_t x4947 = INT32_MIN;
static int16_t x4949 = -1;
int32_t t75 = 7;
uint32_t x5438 = 167119U;
static int32_t x5751 = -7891;
static uint16_t x5752 = 6U;
uint64_t x5762 = 718LLU;
int16_t x6039 = INT16_MIN;
uint32_t x6049 = UINT32_MAX;
volatile int16_t x6102 = -1;
volatile int64_t x6315 = INT64_MAX;
uint32_t t96 = UINT32_MAX;
static uint16_t x6438 = 5316U;


void f0(void) {
	int64_t x69 = INT64_MIN;
	static volatile uint16_t x70 = UINT16_MAX;
	static uint64_t x71 = UINT64_MAX;
	uint8_t x72 = 24U;

	t0 = (((x69+x70)|x71)>>x72);

	if (t0 != 1099511627775LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x277 = 236361U;
	int32_t x278 = INT32_MAX;
	int32_t x279 = INT32_MIN;
	volatile uint32_t x280 = 26U;
	uint32_t t1 = 371403614U;

	t1 = (((x277+x278)|x279)>>x280);

	if (t1 != 32U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x386 = -2;
	uint32_t x387 = 61664972U;
	static uint16_t x388 = 1U;
	volatile uint32_t t2 = 120911U;

	t2 = (((x385+x386)|x387)>>x388);

	if (t2 != 2147483647U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x401 = 12649;
	int8_t x402 = INT8_MAX;

	t3 = (((x401+x402)|x403)>>x404);

	if (t3 != 6399) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x453 = INT64_MIN;
	static uint64_t x454 = UINT64_MAX;
	int16_t x455 = INT16_MIN;
	uint64_t t4 = 1802613LLU;

	t4 = (((x453+x454)|x455)>>x456);

	if (t4 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x470 = 36U;
	int64_t x471 = 4831LL;
	uint8_t x472 = 4U;
	volatile int64_t t5 = 1LL;

	t5 = (((x469+x470)|x471)>>x472);

	if (t5 != 303LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x585 = INT32_MIN;
	uint64_t x586 = 3730851744LLU;
	static volatile int8_t x587 = INT8_MAX;
	uint32_t x588 = 3U;
	volatile uint64_t t6 = 19187LLU;

	t6 = (((x585+x586)|x587)>>x588);

	if (t6 != 197921023LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x761 = 24U;
	int16_t x762 = -1;
	int8_t x763 = 56;
	uint16_t x764 = 8U;
	int32_t t7 = -943267005;

	t7 = (((x761+x762)|x763)>>x764);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x821 = 32477U;
	int32_t x822 = INT32_MAX;
	volatile int8_t x824 = 3;
	static volatile uint32_t t8 = 64U;

	t8 = (((x821+x822)|x823)>>x824);

	if (t8 != 268439515U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x869 = -5;
	static volatile uint32_t x870 = UINT32_MAX;
	static int32_t x871 = INT32_MIN;
	uint32_t x872 = 2U;
	uint32_t t9 = 374856U;

	t9 = (((x869+x870)|x871)>>x872);

	if (t9 != 1073741822U) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x877 = 10U;
	static int16_t x878 = -1;
	volatile uint32_t x879 = 1116U;
	uint32_t t10 = 43948994U;

	t10 = (((x877+x878)|x879)>>x880);

	if (t10 != 1117U) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x1013 = 0U;
	uint32_t x1014 = 4407248U;
	uint32_t x1015 = 5U;
	static volatile uint32_t t11 = 1103U;

	t11 = (((x1013+x1014)|x1015)>>x1016);

	if (t11 != 4407253U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x1110 = 205;
	int8_t x1112 = 13;
	volatile uint64_t t12 = 3601077248LLU;

	t12 = (((x1109+x1110)|x1111)>>x1112);

	if (t12 != 2251799813640015LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x1153 = 3;
	volatile uint32_t x1154 = 908435555U;
	uint32_t x1156 = 29U;
	uint64_t t13 = 173428199500LLU;

	t13 = (((x1153+x1154)|x1155)>>x1156);

	if (t13 != 184744569LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x1170 = INT8_MIN;
	int32_t x1171 = INT32_MAX;
	int16_t x1172 = 5;

	t14 = (((x1169+x1170)|x1171)>>x1172);

	if (t14 != 67108863) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x1202 = 2421790LLU;
	static int8_t x1204 = 1;
	volatile uint64_t t15 = 1527LLU;

	t15 = (((x1201+x1202)|x1203)>>x1204);

	if (t15 != 1211964LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x1205 = INT8_MIN;
	uint16_t x1206 = 10379U;
	int16_t x1207 = 41;
	int32_t x1208 = 0;
	volatile int32_t t16 = 392138;

	t16 = (((x1205+x1206)|x1207)>>x1208);

	if (t16 != 10283) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x1337 = INT64_MAX;
	static uint64_t x1338 = UINT64_MAX;
	uint16_t x1339 = UINT16_MAX;
	uint64_t t17 = 26059642924394LLU;

	t17 = (((x1337+x1338)|x1339)>>x1340);

	if (t17 != 72057594037927935LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1449 = INT16_MIN;
	uint32_t x1450 = UINT32_MAX;
	uint16_t x1451 = UINT16_MAX;
	static volatile int16_t x1452 = 7;
	uint32_t t18 = 431560U;

	t18 = (((x1449+x1450)|x1451)>>x1452);

	if (t18 != 33554431U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x1513 = -778;
	int16_t x1514 = INT16_MAX;
	int8_t x1515 = INT8_MAX;
	uint32_t x1516 = 1U;
	int32_t t19 = -318262;

	t19 = (((x1513+x1514)|x1515)>>x1516);

	if (t19 != 15999) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x1621 = 147425U;
	uint64_t x1622 = 1303562LLU;
	volatile int32_t x1623 = -100;
	uint64_t x1624 = 11LLU;

	t20 = (((x1621+x1622)|x1623)>>x1624);

	if (t20 != 9007199254740991LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x1673 = INT64_MIN;
	uint8_t x1674 = 33U;
	uint64_t x1675 = UINT64_MAX;
	int8_t x1676 = 1;
	volatile uint64_t t21 = 3223742503800577LLU;

	t21 = (((x1673+x1674)|x1675)>>x1676);

	if (t21 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x1713 = -2;
	int32_t x1714 = -36286;
	static uint32_t x1715 = 1160105U;
	int8_t x1716 = 1;
	uint32_t t22 = 1U;

	t22 = (((x1713+x1714)|x1715)>>x1716);

	if (t22 != 2147482100U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1721 = -1;
	uint64_t x1722 = 609900745LLU;
	volatile int32_t x1724 = 26;
	static volatile uint64_t t23 = 1LLU;

	t23 = (((x1721+x1722)|x1723)>>x1724);

	if (t23 != 137438953481LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1729 = INT16_MIN;
	volatile uint64_t x1730 = 5LLU;
	int64_t x1731 = 219094260LL;

	t24 = (((x1729+x1730)|x1731)>>x1732);

	if (t24 != 281474976710655LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x1761 = 1LLU;
	uint64_t x1762 = 80LLU;
	uint64_t x1763 = 10326741372LLU;
	uint64_t t25 = 83LLU;

	t25 = (((x1761+x1762)|x1763)>>x1764);

	if (t25 != 10326741373LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1845 = UINT64_MAX;
	int16_t x1846 = INT16_MAX;
	int8_t x1847 = -1;
	uint8_t x1848 = 0U;

	t26 = (((x1845+x1846)|x1847)>>x1848);

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1873 = 45;
	uint64_t x1874 = 41588LLU;
	int16_t x1875 = INT16_MIN;
	uint32_t x1876 = 7U;

	t27 = (((x1873+x1874)|x1875)>>x1876);

	if (t27 != 144115188075855685LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1961 = UINT64_MAX;
	static volatile int16_t x1962 = INT16_MIN;
	int32_t x1963 = -1;
	int16_t x1964 = 4;
	static volatile uint64_t t28 = 6833988LLU;

	t28 = (((x1961+x1962)|x1963)>>x1964);

	if (t28 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x2037 = UINT64_MAX;
	int16_t x2038 = -14;
	int32_t x2039 = 1841687;
	volatile uint8_t x2040 = 30U;
	uint64_t t29 = 132333865LLU;

	t29 = (((x2037+x2038)|x2039)>>x2040);

	if (t29 != 17179869183LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x2053 = INT16_MAX;
	uint16_t x2054 = UINT16_MAX;
	volatile int64_t x2055 = 375450243870310LL;
	volatile uint32_t x2056 = 33U;
	volatile int64_t t30 = -15901LL;

	t30 = (((x2053+x2054)|x2055)>>x2056);

	if (t30 != 43708LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x2097 = -3;
	volatile uint16_t x2099 = UINT16_MAX;
	static volatile uint32_t t31 = 7035516U;

	t31 = (((x2097+x2098)|x2099)>>x2100);

	if (t31 != 32767U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x2117 = INT32_MAX;
	int8_t x2118 = INT8_MIN;
	uint8_t x2120 = 10U;
	volatile int32_t t32 = -5911139;

	t32 = (((x2117+x2118)|x2119)>>x2120);

	if (t32 != 2097151) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x2198 = 138939;
	uint64_t x2199 = 96067050LLU;
	volatile uint8_t x2200 = 1U;
	uint64_t t33 = 778123080441LLU;

	t33 = (((x2197+x2198)|x2199)>>x2200);

	if (t33 != 48099325LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x2226 = 237LLU;
	uint32_t x2227 = UINT32_MAX;
	uint32_t x2228 = 0U;
	uint64_t t34 = 0LLU;

	t34 = (((x2225+x2226)|x2227)>>x2228);

	if (t34 != 9223372041149743103LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x2253 = UINT32_MAX;
	uint16_t x2256 = 26U;
	volatile uint32_t t35 = 163741U;

	t35 = (((x2253+x2254)|x2255)>>x2256);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x2297 = UINT16_MAX;
	int16_t x2300 = 1;
	int32_t t36 = -1;

	t36 = (((x2297+x2298)|x2299)>>x2300);

	if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x2369 = 0;
	volatile uint16_t x2370 = UINT16_MAX;
	uint64_t x2371 = 24708LLU;
	static uint8_t x2372 = 1U;
	static uint64_t t37 = 467LLU;

	t37 = (((x2369+x2370)|x2371)>>x2372);

	if (t37 != 32767LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x2405 = 188060U;
	uint32_t x2406 = UINT32_MAX;
	uint8_t x2407 = 0U;
	static volatile uint32_t t38 = 29994280U;

	t38 = (((x2405+x2406)|x2407)>>x2408);

	if (t38 != 11753U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x2637 = -1LL;
	static uint64_t x2638 = 7080695154596378044LLU;
	int8_t x2640 = 3;
	volatile uint64_t t39 = 8133LLU;

	t39 = (((x2637+x2638)|x2639)>>x2640);

	if (t39 != 885086894324547583LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x2726 = 1881U;
	int64_t x2727 = INT64_MIN;
	int8_t x2728 = 1;
	uint64_t t40 = 856377014LLU;

	t40 = (((x2725+x2726)|x2727)>>x2728);

	if (t40 != 4611686018675697995LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2794 = INT16_MAX;
	static uint32_t x2795 = 198U;
	static uint16_t x2796 = 1U;
	uint32_t t41 = 185U;

	t41 = (((x2793+x2794)|x2795)>>x2796);

	if (t41 != 2147483647U) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x2841 = 193338U;
	static uint32_t x2842 = 361580U;
	volatile uint8_t x2843 = UINT8_MAX;

	t42 = (((x2841+x2842)|x2843)>>x2844);

	if (t42 != 138751U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2901 = -174LL;
	uint32_t x2902 = 59812U;
	int16_t x2903 = INT16_MAX;
	volatile uint8_t x2904 = 19U;
	volatile int64_t t43 = -1794658LL;

	t43 = (((x2901+x2902)|x2903)>>x2904);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x2993 = UINT64_MAX;
	static volatile int8_t x2994 = INT8_MIN;
	uint32_t x2995 = UINT32_MAX;
	uint16_t x2996 = 2U;
	volatile uint64_t t44 = 55099676579282778LLU;

	t44 = (((x2993+x2994)|x2995)>>x2996);

	if (t44 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x3073 = 15419;
	static uint32_t x3074 = 247U;
	uint16_t x3075 = 722U;
	static volatile uint16_t x3076 = 11U;
	volatile uint32_t t45 = 667754U;

	t45 = (((x3073+x3074)|x3075)>>x3076);

	if (t45 != 7U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x3201 = 959LL;
	static int32_t x3202 = 2346409;
	int16_t x3203 = INT16_MAX;
	volatile int16_t x3204 = 0;
	int64_t t46 = -268358598549360530LL;

	t46 = (((x3201+x3202)|x3203)>>x3204);

	if (t46 != 2359295LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x3289 = INT16_MIN;
	static int64_t x3290 = INT64_MAX;
	uint64_t x3291 = UINT64_MAX;
	uint8_t x3292 = 3U;
	volatile uint64_t t47 = 450119LLU;

	t47 = (((x3289+x3290)|x3291)>>x3292);

	if (t47 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x3329 = 8079LLU;
	int32_t x3331 = -511038;
	int8_t x3332 = 1;
	volatile uint64_t t48 = 29249931187LLU;

	t48 = (((x3329+x3330)|x3331)>>x3332);

	if (t48 != 9223372036854521831LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x3405 = 1299;
	volatile uint64_t x3406 = 801495585439901LLU;
	uint8_t x3407 = 127U;
	static int8_t x3408 = 0;

	t49 = (((x3405+x3406)|x3407)>>x3408);

	if (t49 != 801495585441279LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint8_t x3517 = 0U;
	volatile uint16_t x3518 = 51U;
	volatile uint16_t x3519 = 1764U;
	uint8_t x3520 = 5U;
	int32_t t50 = 48343;

	t50 = (((x3517+x3518)|x3519)>>x3520);

	if (t50 != 55) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x3525 = INT8_MAX;
	int64_t x3526 = -28282149426LL;
	static uint64_t t51 = 2900458728385332LLU;

	t51 = (((x3525+x3526)|x3527)>>x3528);

	if (t51 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x3550 = -1LL;
	uint16_t x3552 = 3U;
	volatile int64_t t52 = -31LL;

	t52 = (((x3549+x3550)|x3551)>>x3552);

	if (t52 != 727327LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x3565 = INT16_MIN;
	static uint32_t x3566 = 1595U;
	int8_t x3567 = INT8_MAX;
	static uint32_t x3568 = 4U;

	t53 = (((x3565+x3566)|x3567)>>x3568);

	if (t53 != 268433511U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x3646 = -1;
	int8_t x3647 = -1;
	uint16_t x3648 = 0U;
	uint64_t t54 = UINT64_MAX;

	t54 = (((x3645+x3646)|x3647)>>x3648);

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x3670 = 1;
	volatile int8_t x3671 = INT8_MAX;
	static int32_t t55 = -1932;

	t55 = (((x3669+x3670)|x3671)>>x3672);

	if (t55 != 16) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x3709 = INT64_MIN;
	volatile uint64_t x3710 = 2493027261977776171LLU;
	int16_t x3711 = -197;
	int8_t x3712 = 35;
	uint64_t t56 = 6448LLU;

	t56 = (((x3709+x3710)|x3711)>>x3712);

	if (t56 != 536870911LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x3752 = 2;
	volatile uint64_t t57 = 54961450210LLU;

	t57 = (((x3749+x3750)|x3751)>>x3752);

	if (t57 != 2305843073160638591LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x3757 = INT8_MIN;
	volatile uint64_t x3759 = 240950LLU;
	int8_t x3760 = 1;
	volatile uint64_t t58 = 4502LLU;

	t58 = (((x3757+x3758)|x3759)>>x3760);

	if (t58 != 9223372036854775743LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x3841 = 0;
	volatile uint32_t x3842 = UINT32_MAX;
	static uint8_t x3843 = UINT8_MAX;
	uint16_t x3844 = 29U;
	volatile uint32_t t59 = 6667694U;

	t59 = (((x3841+x3842)|x3843)>>x3844);

	if (t59 != 7U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x3885 = -85729574;
	static volatile uint64_t x3886 = 160LLU;
	uint64_t x3887 = 170448937189873LLU;
	uint8_t x3888 = 0U;
	uint64_t t60 = 2298LLU;

	t60 = (((x3885+x3886)|x3887)>>x3888);

	if (t60 != 18446744073692504059LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x4121 = 671537LL;
	uint16_t x4122 = UINT16_MAX;
	uint64_t x4124 = 3LLU;
	int64_t t61 = 1419179777354484LL;

	t61 = (((x4121+x4122)|x4123)>>x4124);

	if (t61 != 92151LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x4137 = INT8_MAX;
	uint64_t x4138 = 538382536990655191LLU;
	int8_t x4139 = INT8_MIN;
	int8_t x4140 = 0;
	volatile uint64_t t62 = 1648269716194416392LLU;

	t62 = (((x4137+x4138)|x4139)>>x4140);

	if (t62 != 18446744073709551574LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x4141 = 99U;
	int64_t x4142 = INT64_MIN;
	static volatile uint16_t x4144 = 5U;

	t63 = (((x4141+x4142)|x4143)>>x4144);

	if (t63 != 576460752303423487LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x4241 = 7840U;
	uint16_t x4242 = UINT16_MAX;
	int32_t x4243 = -150135325;
	uint8_t x4244 = 0U;

	t64 = (((x4241+x4242)|x4243)>>x4244);

	if (t64 != 4144832511U) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint8_t x4261 = 8U;
	static volatile uint32_t x4262 = 27865348U;
	static int8_t x4263 = -20;
	static uint16_t x4264 = 18U;
	uint32_t t65 = 512U;

	t65 = (((x4261+x4262)|x4263)>>x4264);

	if (t65 != 16383U) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x4349 = 54087661668730LLU;
	int64_t x4350 = INT64_MIN;
	int32_t x4351 = -1;
	static uint64_t t66 = 1307078LLU;

	t66 = (((x4349+x4350)|x4351)>>x4352);

	if (t66 != 8796093022207LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x4436 = 0;
	uint64_t t67 = 134021297065829912LLU;

	t67 = (((x4433+x4434)|x4435)>>x4436);

	if (t67 != 32766LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x4513 = UINT64_MAX;
	int32_t x4515 = -1;
	volatile uint8_t x4516 = 12U;
	volatile uint64_t t68 = 15699766837296033LLU;

	t68 = (((x4513+x4514)|x4515)>>x4516);

	if (t68 != 4503599627370495LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x4549 = 14912U;
	uint64_t x4550 = UINT64_MAX;
	uint64_t t69 = UINT64_MAX;

	t69 = (((x4549+x4550)|x4551)>>x4552);

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x4577 = 58U;
	int16_t x4578 = INT16_MIN;
	uint32_t x4579 = UINT32_MAX;
	uint8_t x4580 = 1U;
	static volatile uint32_t t70 = 547191U;

	t70 = (((x4577+x4578)|x4579)>>x4580);

	if (t70 != 2147483647U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x4642 = UINT32_MAX;
	int16_t x4643 = INT16_MIN;
	uint32_t t71 = 105211258U;

	t71 = (((x4641+x4642)|x4643)>>x4644);

	if (t71 != 4194303U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x4709 = INT8_MIN;
	uint32_t x4710 = UINT32_MAX;
	int32_t x4711 = INT32_MIN;
	uint8_t x4712 = 3U;
	uint32_t t72 = 570U;

	t72 = (((x4709+x4710)|x4711)>>x4712);

	if (t72 != 536870895U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x4929 = -88705853;
	volatile uint64_t x4930 = UINT64_MAX;
	volatile int16_t x4931 = -1;
	volatile uint32_t x4932 = 6U;
	volatile uint64_t t73 = 68941588858048LLU;

	t73 = (((x4929+x4930)|x4931)>>x4932);

	if (t73 != 288230376151711743LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x4945 = -36;
	uint32_t x4946 = 252U;
	static uint16_t x4948 = 6U;
	volatile uint32_t t74 = 40150U;

	t74 = (((x4945+x4946)|x4947)>>x4948);

	if (t74 != 33554435U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x4950 = INT16_MAX;
	uint16_t x4951 = UINT16_MAX;
	volatile uint16_t x4952 = 22U;

	t75 = (((x4949+x4950)|x4951)>>x4952);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x5081 = -1LL;
	uint32_t x5082 = 95622U;
	static uint64_t x5083 = 3174269724192945LLU;
	volatile uint64_t x5084 = 7LLU;
	volatile uint64_t t76 = 230LLU;

	t76 = (((x5081+x5082)|x5083)>>x5084);

	if (t76 != 24798982220779LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x5185 = INT32_MIN;
	uint64_t x5186 = 3LLU;
	int8_t x5187 = -31;
	int8_t x5188 = 0;
	volatile uint64_t t77 = 158LLU;

	t77 = (((x5185+x5186)|x5187)>>x5188);

	if (t77 != 18446744073709551587LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x5217 = INT32_MIN;
	static uint32_t x5218 = 1U;
	static int16_t x5219 = -1;
	uint16_t x5220 = 7U;
	uint32_t t78 = 30U;

	t78 = (((x5217+x5218)|x5219)>>x5220);

	if (t78 != 33554431U) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x5437 = -15;
	volatile int64_t x5439 = 1053748195988935LL;
	int8_t x5440 = 0;
	volatile int64_t t79 = -47LL;

	t79 = (((x5437+x5438)|x5439)>>x5440);

	if (t79 != 1053748195990983LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x5453 = 601950104LL;
	int16_t x5454 = INT16_MIN;
	static uint16_t x5455 = UINT16_MAX;
	uint8_t x5456 = 2U;
	volatile int64_t t80 = -4LL;

	t80 = (((x5453+x5454)|x5455)>>x5456);

	if (t80 != 150487039LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x5749 = -1;
	uint64_t x5750 = 472735612903LLU;
	uint64_t t81 = 2048LLU;

	t81 = (((x5749+x5750)|x5751)>>x5752);

	if (t81 != 288230376151711743LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint64_t x5761 = 1047401388104249391LLU;
	uint8_t x5763 = UINT8_MAX;
	int16_t x5764 = 9;
	volatile uint64_t t82 = 10813257252826LLU;

	t82 = (((x5761+x5762)|x5763)>>x5764);

	if (t82 != 2045705836141113LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x5765 = -316527200311587175LL;
	int32_t x5766 = 13059;
	uint64_t x5767 = 479528568555727LLU;
	uint64_t x5768 = 5LLU;
	static volatile uint64_t t83 = 6791372355LLU;

	t83 = (((x5765+x5766)|x5767)>>x5768);

	if (t83 != 566573812879980622LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x5901 = 6U;
	int32_t x5902 = INT32_MIN;
	uint64_t x5903 = 14LLU;
	static int32_t x5904 = 9;
	uint64_t t84 = 231LLU;

	t84 = (((x5901+x5902)|x5903)>>x5904);

	if (t84 != 36028797014769664LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x5921 = UINT64_MAX;
	static int8_t x5922 = INT8_MIN;
	int32_t x5923 = INT32_MIN;
	uint16_t x5924 = 13U;
	uint64_t t85 = 8622245LLU;

	t85 = (((x5921+x5922)|x5923)>>x5924);

	if (t85 != 2251799813685247LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x6037 = 1815U;
	uint64_t x6038 = UINT64_MAX;
	int8_t x6040 = 5;
	volatile uint64_t t86 = 152523178LLU;

	t86 = (((x6037+x6038)|x6039)>>x6040);

	if (t86 != 576460752303422520LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x6041 = -1;
	volatile int16_t x6042 = INT16_MAX;
	uint32_t x6043 = 5U;
	int8_t x6044 = 7;
	volatile uint32_t t87 = 20U;

	t87 = (((x6041+x6042)|x6043)>>x6044);

	if (t87 != 255U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x6050 = 41;
	int16_t x6051 = INT16_MAX;
	uint8_t x6052 = 1U;
	volatile uint32_t t88 = 26U;

	t88 = (((x6049+x6050)|x6051)>>x6052);

	if (t88 != 16383U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x6061 = 5;
	int32_t x6062 = -623174;
	uint32_t x6063 = 16406U;
	int32_t x6064 = 4;
	volatile uint32_t t89 = 178644357U;

	t89 = (((x6061+x6062)|x6063)>>x6064);

	if (t89 != 268396507U) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint8_t x6085 = 2U;
	volatile int8_t x6086 = -2;
	int32_t x6087 = 1;
	static volatile uint32_t x6088 = 0U;
	volatile int32_t t90 = -967;

	t90 = (((x6085+x6086)|x6087)>>x6088);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x6089 = 3172LL;
	static int8_t x6090 = INT8_MAX;
	int8_t x6091 = INT8_MAX;
	uint32_t x6092 = 12U;
	static int64_t t91 = -338LL;

	t91 = (((x6089+x6090)|x6091)>>x6092);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x6101 = 54560;
	uint8_t x6103 = 0U;
	uint64_t x6104 = 27LLU;
	int32_t t92 = -167730635;

	t92 = (((x6101+x6102)|x6103)>>x6104);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x6313 = 5885376860525381433LLU;
	static uint16_t x6314 = UINT16_MAX;
	uint8_t x6316 = 15U;
	uint64_t t93 = 24482650LLU;

	t93 = (((x6313+x6314)|x6315)>>x6316);

	if (t93 != 281474976710655LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x6337 = 1;
	int32_t x6338 = 829494334;
	static int64_t x6339 = 8042LL;
	uint8_t x6340 = 3U;
	volatile int64_t t94 = -15488LL;

	t94 = (((x6337+x6338)|x6339)>>x6340);

	if (t94 != 103687151LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x6341 = 56113U;
	int8_t x6342 = -1;
	uint32_t x6343 = 38U;
	uint8_t x6344 = 1U;
	uint32_t t95 = 1037U;

	t95 = (((x6341+x6342)|x6343)>>x6344);

	if (t95 != 28059U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x6381 = INT16_MIN;
	uint8_t x6382 = UINT8_MAX;
	static uint32_t x6383 = UINT32_MAX;
	uint8_t x6384 = 0U;

	t96 = (((x6381+x6382)|x6383)>>x6384);

	if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x6437 = -62;
	uint32_t x6439 = 177U;
	uint16_t x6440 = 11U;
	volatile uint32_t t97 = 10U;

	t97 = (((x6437+x6438)|x6439)>>x6440);

	if (t97 != 2U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x6465 = 4149550001088426LLU;
	int64_t x6466 = INT64_MIN;
	int32_t x6467 = -7;
	int8_t x6468 = 0;
	volatile uint64_t t98 = 2304887612917771225LLU;

	t98 = (((x6465+x6466)|x6467)>>x6468);

	if (t98 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x6469 = 87635453LLU;
	int32_t x6470 = 0;
	int8_t x6471 = INT8_MIN;
	static int64_t x6472 = 1LL;
	static volatile uint64_t t99 = 4139962162928213LLU;

	t99 = (((x6469+x6470)|x6471)>>x6472);

	if (t99 != 9223372036854775806LLU) { NG(); } else { ; }
	
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


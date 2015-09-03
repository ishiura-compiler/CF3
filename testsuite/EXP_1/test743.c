#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x97 = 21;
int32_t x99 = 1;
int32_t t1 = 0;
uint8_t x127 = 7U;
volatile int8_t x128 = INT8_MAX;
int32_t t2 = 432944957;
int64_t x172 = INT64_MAX;
volatile int64_t t4 = 2750023137701707LL;
uint32_t x229 = 592549U;
volatile uint32_t x241 = UINT32_MAX;
uint8_t x243 = 3U;
uint16_t x244 = UINT16_MAX;
int64_t t6 = -624LL;
static int64_t x313 = INT64_MAX;
int16_t x329 = INT16_MIN;
int16_t x330 = INT16_MIN;
uint32_t x385 = 12359U;
int16_t x386 = INT16_MIN;
int8_t x469 = INT8_MIN;
int16_t x586 = 4;
int8_t x616 = INT8_MIN;
int8_t x731 = 2;
static uint64_t x732 = 3LLU;
int64_t x762 = INT64_MIN;
static int64_t x802 = INT64_MIN;
volatile int16_t x822 = INT16_MIN;
static uint8_t x823 = 1U;
int32_t t18 = -64388;
uint32_t t19 = 27613U;
int8_t x913 = INT8_MIN;
int32_t x1147 = 1;
static volatile uint16_t x1217 = 0U;
static volatile uint32_t x1219 = 1U;
volatile int64_t t24 = 4531067089083373LL;
int8_t x1507 = 1;
int8_t x1508 = -11;
volatile int32_t t28 = 9908456;
uint32_t x1514 = 1151727U;
static uint64_t x1516 = 461LLU;
volatile uint64_t t29 = 238155LLU;
int16_t x1533 = INT16_MAX;
uint64_t x1534 = UINT64_MAX;
uint16_t x1535 = 51U;
int16_t x1606 = INT16_MIN;
uint32_t t33 = 1679274380U;
int64_t t34 = -602LL;
uint16_t x1739 = 1U;
uint16_t x1934 = 29U;
uint16_t x1935 = 3U;
int16_t x1938 = INT16_MIN;
static volatile uint16_t x1971 = 4U;
static int8_t x2032 = 0;
static uint8_t x2039 = 4U;
volatile int16_t x2040 = 14;
int32_t x2077 = INT32_MIN;
volatile int32_t t45 = 4;
int64_t x2117 = INT64_MIN;
int8_t x2123 = 0;
static uint16_t x2187 = 1U;
static uint16_t x2207 = 0U;
int16_t x2208 = -322;
int32_t x2255 = 9;
uint64_t x2331 = 12LLU;
uint64_t t53 = 24663176400LLU;
uint16_t x2441 = UINT16_MAX;
uint32_t x2457 = UINT32_MAX;
volatile int64_t t56 = 3627750840664LL;
volatile uint32_t x2485 = 5849972U;
uint8_t x2486 = 55U;
uint16_t x2487 = 1U;
uint32_t t57 = 1580687446U;
volatile int32_t x2522 = INT32_MAX;
uint16_t x2524 = UINT16_MAX;
volatile int64_t x2545 = INT64_MIN;
volatile uint8_t x2547 = 4U;
uint64_t x2548 = 1751357898373803861LLU;
uint64_t t60 = 3417218399612740LLU;
int16_t x2573 = -1;
uint64_t t61 = 1854978804818LLU;
uint8_t x2631 = 15U;
int8_t x2709 = INT8_MAX;
uint32_t x2710 = UINT32_MAX;
static uint64_t x2764 = 7990LLU;
int64_t x2830 = -1LL;
static uint8_t x2859 = 0U;
int8_t x2867 = 2;
int32_t x2946 = -1;
uint8_t x2947 = 22U;
uint64_t x3009 = UINT64_MAX;
static volatile int8_t x3011 = 1;
int8_t x3077 = INT8_MIN;
uint8_t x3078 = 2U;
int16_t x3080 = 3;
volatile uint8_t x3207 = 0U;
static int16_t x3333 = 59;
static int8_t x3421 = INT8_MAX;
volatile int8_t x3424 = -15;
volatile int32_t t77 = -63167077;
int64_t t78 = -31LL;
int8_t x3533 = 19;
static volatile uint64_t t81 = 10LLU;
int32_t x3713 = -15;
volatile int8_t x3714 = 3;
uint64_t x3822 = 74646LLU;
uint32_t x3824 = 4473U;
static volatile int8_t x3907 = 1;
int16_t x3921 = 2693;
static int8_t x3922 = -1;
static uint16_t x3991 = 3U;
static uint16_t x4133 = UINT16_MAX;
int8_t x4136 = -1;
uint16_t x4252 = 5189U;
volatile int32_t t96 = 36045895;
int32_t x4396 = 421106052;
static uint32_t x4404 = UINT32_MAX;


void f0(void) {
	uint8_t x57 = UINT8_MAX;
	int32_t x58 = -593101;
	static int8_t x59 = 2;
	int8_t x60 = INT8_MIN;
	static volatile int32_t t0 = 699367366;

	t0 = (((x57%x58)<<x59)-x60);

	if (t0 != 1148) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x98 = INT16_MAX;
	int8_t x100 = INT8_MAX;

	t1 = (((x97%x98)<<x99)-x100);

	if (t1 != -85) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x125 = 153;
	int8_t x126 = INT8_MAX;

	t2 = (((x125%x126)<<x127)-x128);

	if (t2 != 3201) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x133 = INT32_MIN;
	uint32_t x134 = 95519U;
	volatile uint8_t x135 = 15U;
	static int64_t x136 = INT64_MAX;
	volatile int64_t t3 = 186846802204243288LL;

	t3 = (((x133%x134)<<x135)-x136);

	if (t3 != -9223372036019519487LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x169 = 1447U;
	static int32_t x170 = -1;
	int8_t x171 = 17;

	t4 = (((x169%x170)<<x171)-x172);

	if (t4 != -9223372036665114623LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x230 = UINT64_MAX;
	volatile int16_t x231 = 5;
	int16_t x232 = 1;
	volatile uint64_t t5 = 3LLU;

	t5 = (((x229%x230)<<x231)-x232);

	if (t5 != 18961567LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x242 = -1LL;

	t6 = (((x241%x242)<<x243)-x244);

	if (t6 != -65535LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x314 = -1;
	static uint8_t x315 = 0U;
	static uint32_t x316 = 6U;
	int64_t t7 = 6083304085080LL;

	t7 = (((x313%x314)<<x315)-x316);

	if (t7 != -6LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x321 = 790063U;
	static volatile uint8_t x322 = 55U;
	int8_t x323 = 2;
	uint32_t x324 = 27U;
	uint32_t t8 = 16258U;

	t8 = (((x321%x322)<<x323)-x324);

	if (t8 != 145U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x331 = 7U;
	uint8_t x332 = 16U;
	volatile int32_t t9 = 885;

	t9 = (((x329%x330)<<x331)-x332);

	if (t9 != -16) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x357 = 20;
	int32_t x358 = INT32_MIN;
	static uint8_t x359 = 3U;
	uint8_t x360 = UINT8_MAX;
	int32_t t10 = -23624;

	t10 = (((x357%x358)<<x359)-x360);

	if (t10 != -95) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x387 = 3U;
	int16_t x388 = INT16_MIN;
	static uint32_t t11 = 11538095U;

	t11 = (((x385%x386)<<x387)-x388);

	if (t11 != 131640U) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x470 = UINT64_MAX;
	uint8_t x471 = 1U;
	int8_t x472 = 0;
	static uint64_t t12 = 25261210474286LLU;

	t12 = (((x469%x470)<<x471)-x472);

	if (t12 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x585 = INT8_MIN;
	uint8_t x587 = 3U;
	static volatile uint8_t x588 = 1U;
	static int32_t t13 = 2910;

	t13 = (((x585%x586)<<x587)-x588);

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x613 = INT16_MAX;
	uint16_t x614 = UINT16_MAX;
	static int16_t x615 = 1;
	volatile int32_t t14 = 10571;

	t14 = (((x613%x614)<<x615)-x616);

	if (t14 != 65662) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x729 = 196U;
	int64_t x730 = -3LL;
	static uint64_t t15 = 5864008845229LLU;

	t15 = (((x729%x730)<<x731)-x732);

	if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x761 = 3;
	int16_t x763 = 11;
	static int32_t x764 = INT32_MIN;
	int64_t t16 = 169218994965682897LL;

	t16 = (((x761%x762)<<x763)-x764);

	if (t16 != 2147489792LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x801 = INT64_MIN;
	volatile uint16_t x803 = 4U;
	int64_t x804 = -1LL;
	static int64_t t17 = -1027872065715160040LL;

	t17 = (((x801%x802)<<x803)-x804);

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x821 = 5U;
	volatile uint8_t x824 = 1U;

	t18 = (((x821%x822)<<x823)-x824);

	if (t18 != 9) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x857 = INT8_MAX;
	uint32_t x858 = 61U;
	uint8_t x859 = 15U;
	int16_t x860 = 74;

	t19 = (((x857%x858)<<x859)-x860);

	if (t19 != 163766U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x914 = -1LL;
	volatile uint8_t x915 = 6U;
	volatile int32_t x916 = 123649;
	int64_t t20 = -34664627547LL;

	t20 = (((x913%x914)<<x915)-x916);

	if (t20 != -123649LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint64_t x1045 = UINT64_MAX;
	uint32_t x1046 = 63379U;
	int8_t x1047 = 0;
	static uint64_t x1048 = 376322916759210LLU;
	uint64_t t21 = 5580LLU;

	t21 = (((x1045%x1046)<<x1047)-x1048);

	if (t21 != 18446367750792807000LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x1117 = 5U;
	static volatile int8_t x1118 = -1;
	int16_t x1119 = 21;
	volatile int32_t x1120 = 2980;
	int32_t t22 = -59746171;

	t22 = (((x1117%x1118)<<x1119)-x1120);

	if (t22 != -2980) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1145 = 20LLU;
	static uint16_t x1146 = 52U;
	uint64_t x1148 = 10LLU;
	volatile uint64_t t23 = 34LLU;

	t23 = (((x1145%x1146)<<x1147)-x1148);

	if (t23 != 30LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x1218 = -17103983667107107LL;
	int32_t x1220 = 0;

	t24 = (((x1217%x1218)<<x1219)-x1220);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x1221 = 0U;
	int8_t x1222 = -1;
	uint8_t x1223 = 14U;
	volatile uint8_t x1224 = 72U;
	volatile int32_t t25 = 7;

	t25 = (((x1221%x1222)<<x1223)-x1224);

	if (t25 != -72) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x1261 = 4U;
	int8_t x1262 = INT8_MAX;
	static uint64_t x1263 = 13LLU;
	static int16_t x1264 = -1;
	static int32_t t26 = -24;

	t26 = (((x1261%x1262)<<x1263)-x1264);

	if (t26 != 32769) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1317 = 1U;
	int8_t x1318 = 6;
	uint8_t x1319 = 0U;
	uint16_t x1320 = 1U;
	static int32_t t27 = -11;

	t27 = (((x1317%x1318)<<x1319)-x1320);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1505 = UINT16_MAX;
	int16_t x1506 = INT16_MIN;

	t28 = (((x1505%x1506)<<x1507)-x1508);

	if (t28 != 65545) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1513 = 56U;
	volatile int16_t x1515 = 1;

	t29 = (((x1513%x1514)<<x1515)-x1516);

	if (t29 != 18446744073709551267LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x1536 = INT16_MIN;
	uint64_t t30 = 857100277728LLU;

	t30 = (((x1533%x1534)<<x1535)-x1536);

	if (t30 != 18444492273895899136LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x1541 = UINT8_MAX;
	uint64_t x1542 = 396508426LLU;
	int32_t x1543 = 1;
	uint16_t x1544 = UINT16_MAX;
	static volatile uint64_t t31 = 5234675LLU;

	t31 = (((x1541%x1542)<<x1543)-x1544);

	if (t31 != 18446744073709486591LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x1605 = 1LLU;
	uint8_t x1607 = 0U;
	volatile uint8_t x1608 = UINT8_MAX;
	uint64_t t32 = 351380608739LLU;

	t32 = (((x1605%x1606)<<x1607)-x1608);

	if (t32 != 18446744073709551362LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1637 = INT32_MIN;
	int16_t x1638 = INT16_MIN;
	int8_t x1639 = 1;
	uint32_t x1640 = UINT32_MAX;

	t33 = (((x1637%x1638)<<x1639)-x1640);

	if (t33 != 1U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x1653 = 33054932LL;
	int32_t x1654 = -1831;
	volatile uint16_t x1655 = 1U;
	static int8_t x1656 = -1;

	t34 = (((x1653%x1654)<<x1655)-x1656);

	if (t34 != 3441LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1665 = INT8_MIN;
	uint8_t x1666 = 2U;
	int32_t x1667 = 0;
	uint64_t x1668 = 19802128662044127LLU;
	volatile uint64_t t35 = 778456904462128LLU;

	t35 = (((x1665%x1666)<<x1667)-x1668);

	if (t35 != 18426941945047507489LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int8_t x1669 = INT8_MAX;
	int16_t x1670 = INT16_MAX;
	volatile uint8_t x1671 = 12U;
	static int64_t x1672 = INT64_MAX;
	int64_t t36 = -222305377LL;

	t36 = (((x1669%x1670)<<x1671)-x1672);

	if (t36 != -9223372036854255615LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1737 = -1;
	static uint32_t x1738 = 20423U;
	static int32_t x1740 = INT32_MAX;
	uint32_t t37 = 2114961U;

	t37 = (((x1737%x1738)<<x1739)-x1740);

	if (t37 != 2147504439U) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x1933 = 115U;
	int64_t x1936 = -21105014038207LL;
	static volatile int64_t t38 = -650LL;

	t38 = (((x1933%x1934)<<x1935)-x1936);

	if (t38 != 21105014038431LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1937 = 33375;
	uint8_t x1939 = 0U;
	int8_t x1940 = -1;
	int32_t t39 = -60512392;

	t39 = (((x1937%x1938)<<x1939)-x1940);

	if (t39 != 608) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x1953 = INT32_MIN;
	uint32_t x1954 = 697949395U;
	static int16_t x1955 = 0;
	uint64_t x1956 = 44LLU;
	uint64_t t40 = 11239695157LLU;

	t40 = (((x1953%x1954)<<x1955)-x1956);

	if (t40 != 53635419LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x1969 = UINT8_MAX;
	uint16_t x1970 = UINT16_MAX;
	uint8_t x1972 = 78U;
	int32_t t41 = -1016;

	t41 = (((x1969%x1970)<<x1971)-x1972);

	if (t41 != 4002) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x2017 = INT64_MIN;
	int16_t x2018 = -1;
	static volatile int8_t x2019 = 1;
	uint8_t x2020 = UINT8_MAX;
	int64_t t42 = -8770258582900LL;

	t42 = (((x2017%x2018)<<x2019)-x2020);

	if (t42 != -255LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x2029 = 1011446U;
	uint16_t x2030 = 21648U;
	static uint8_t x2031 = 1U;
	uint32_t t43 = 23563141U;

	t43 = (((x2029%x2030)<<x2031)-x2032);

	if (t43 != 31276U) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x2037 = UINT32_MAX;
	int16_t x2038 = INT16_MIN;
	static uint32_t t44 = 0U;

	t44 = (((x2037%x2038)<<x2039)-x2040);

	if (t44 != 524258U) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x2078 = -1;
	static int8_t x2079 = 1;
	uint8_t x2080 = 11U;

	t45 = (((x2077%x2078)<<x2079)-x2080);

	if (t45 != -11) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x2118 = INT32_MIN;
	int16_t x2119 = 0;
	int16_t x2120 = -1;
	int64_t t46 = 32246LL;

	t46 = (((x2117%x2118)<<x2119)-x2120);

	if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x2121 = 20U;
	static uint8_t x2122 = 3U;
	int64_t x2124 = 711386533537856LL;
	volatile int64_t t47 = 25754313LL;

	t47 = (((x2121%x2122)<<x2123)-x2124);

	if (t47 != -711386533537854LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x2157 = 1U;
	uint64_t x2158 = 14193822618109083LLU;
	static uint8_t x2159 = 6U;
	int32_t x2160 = INT32_MIN;
	uint64_t t48 = 1930397615925797705LLU;

	t48 = (((x2157%x2158)<<x2159)-x2160);

	if (t48 != 2147483712LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x2185 = -1;
	volatile uint32_t x2186 = 30483U;
	volatile int16_t x2188 = -1897;
	static volatile uint32_t t49 = 55666759U;

	t49 = (((x2185%x2186)<<x2187)-x2188);

	if (t49 != 9985U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x2205 = INT16_MAX;
	volatile int8_t x2206 = INT8_MIN;
	volatile int32_t t50 = -9543728;

	t50 = (((x2205%x2206)<<x2207)-x2208);

	if (t50 != 449) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x2253 = INT8_MAX;
	static uint8_t x2254 = 1U;
	int32_t x2256 = 870886142;
	volatile int32_t t51 = 762438777;

	t51 = (((x2253%x2254)<<x2255)-x2256);

	if (t51 != -870886142) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x2329 = 98664LL;
	int32_t x2330 = INT32_MAX;
	int16_t x2332 = -1;
	volatile int64_t t52 = 139283285448LL;

	t52 = (((x2329%x2330)<<x2331)-x2332);

	if (t52 != 404127745LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x2357 = 0LLU;
	int32_t x2358 = INT32_MAX;
	static uint8_t x2359 = 46U;
	int64_t x2360 = -1LL;

	t53 = (((x2357%x2358)<<x2359)-x2360);

	if (t53 != 1LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2442 = INT8_MIN;
	static uint8_t x2443 = 0U;
	static uint32_t x2444 = 15U;
	volatile uint32_t t54 = 248550U;

	t54 = (((x2441%x2442)<<x2443)-x2444);

	if (t54 != 112U) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x2445 = 3U;
	volatile int32_t x2446 = 212;
	int32_t x2447 = 4;
	uint8_t x2448 = 0U;
	int32_t t55 = -94;

	t55 = (((x2445%x2446)<<x2447)-x2448);

	if (t55 != 48) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x2458 = INT64_MAX;
	uint64_t x2459 = 8LLU;
	volatile uint32_t x2460 = 188865827U;

	t56 = (((x2457%x2458)<<x2459)-x2460);

	if (t56 != 1099322761693LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x2488 = 1894U;

	t57 = (((x2485%x2486)<<x2487)-x2488);

	if (t57 != 4294965416U) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x2505 = 41U;
	volatile int64_t x2506 = -1LL;
	static uint8_t x2507 = 1U;
	static volatile uint32_t x2508 = 7621322U;
	volatile int64_t t58 = -1866741LL;

	t58 = (((x2505%x2506)<<x2507)-x2508);

	if (t58 != -7621322LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x2521 = INT8_MAX;
	uint8_t x2523 = 20U;
	static int32_t t59 = -4177186;

	t59 = (((x2521%x2522)<<x2523)-x2524);

	if (t59 != 133103617) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x2546 = UINT64_MAX;

	t60 = (((x2545%x2546)<<x2547)-x2548);

	if (t60 != 16695386175335747755LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x2574 = 131383368LLU;
	volatile uint64_t x2575 = 9LLU;
	int16_t x2576 = INT16_MIN;

	t61 = (((x2573%x2574)<<x2575)-x2576);

	if (t61 != 33999080960LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x2597 = 3436534;
	uint8_t x2598 = 98U;
	static uint8_t x2599 = 1U;
	static int16_t x2600 = INT16_MIN;
	volatile int32_t t62 = -53288047;

	t62 = (((x2597%x2598)<<x2599)-x2600);

	if (t62 != 32900) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x2605 = 1699;
	volatile int8_t x2606 = 1;
	static int8_t x2607 = 1;
	int8_t x2608 = INT8_MIN;
	static int32_t t63 = -484595918;

	t63 = (((x2605%x2606)<<x2607)-x2608);

	if (t63 != 128) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x2629 = 71U;
	int64_t x2630 = -48887211120342182LL;
	uint8_t x2632 = UINT8_MAX;
	int64_t t64 = 51418491500130107LL;

	t64 = (((x2629%x2630)<<x2631)-x2632);

	if (t64 != 2326273LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x2711 = 29U;
	volatile int8_t x2712 = -1;
	static uint32_t t65 = 14U;

	t65 = (((x2709%x2710)<<x2711)-x2712);

	if (t65 != 3758096385U) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x2761 = INT16_MIN;
	uint64_t x2762 = UINT64_MAX;
	uint32_t x2763 = 0U;
	uint64_t t66 = 4233527373340450LLU;

	t66 = (((x2761%x2762)<<x2763)-x2764);

	if (t66 != 18446744073709510858LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x2829 = INT64_MIN;
	int8_t x2831 = 2;
	volatile int32_t x2832 = -55254;
	volatile int64_t t67 = 428771151772516LL;

	t67 = (((x2829%x2830)<<x2831)-x2832);

	if (t67 != 55254LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x2857 = UINT64_MAX;
	int32_t x2858 = INT32_MIN;
	int64_t x2860 = INT64_MIN;
	uint64_t t68 = 300220875LLU;

	t68 = (((x2857%x2858)<<x2859)-x2860);

	if (t68 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x2865 = 3351567LLU;
	volatile int8_t x2866 = INT8_MAX;
	int8_t x2868 = INT8_MAX;
	static volatile uint64_t t69 = 3999163323762LLU;

	t69 = (((x2865%x2866)<<x2867)-x2868);

	if (t69 != 21LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x2945 = INT64_MIN;
	int8_t x2948 = 3;
	volatile int64_t t70 = 99LL;

	t70 = (((x2945%x2946)<<x2947)-x2948);

	if (t70 != -3LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x3010 = 395LLU;
	uint8_t x3012 = 2U;
	volatile uint64_t t71 = 6LLU;

	t71 = (((x3009%x3010)<<x3011)-x3012);

	if (t71 != 98LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x3079 = 7U;
	volatile int32_t t72 = 70959877;

	t72 = (((x3077%x3078)<<x3079)-x3080);

	if (t72 != -3) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint64_t x3133 = 1882685LLU;
	int16_t x3134 = INT16_MIN;
	static int64_t x3135 = 0LL;
	volatile int64_t x3136 = 153868781507124LL;
	uint64_t t73 = 12464508099146LLU;

	t73 = (((x3133%x3134)<<x3135)-x3136);

	if (t73 != 18446590204929927177LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint8_t x3153 = UINT8_MAX;
	int16_t x3154 = -1;
	volatile int16_t x3155 = 1;
	volatile int64_t x3156 = 8831653531725LL;
	int64_t t74 = -1818397479LL;

	t74 = (((x3153%x3154)<<x3155)-x3156);

	if (t74 != -8831653531725LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x3205 = UINT16_MAX;
	int32_t x3206 = -1;
	volatile int8_t x3208 = INT8_MAX;
	static volatile int32_t t75 = 0;

	t75 = (((x3205%x3206)<<x3207)-x3208);

	if (t75 != -127) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x3334 = -1LL;
	uint64_t x3335 = 5LLU;
	static int8_t x3336 = INT8_MIN;
	volatile int64_t t76 = 67146927628024183LL;

	t76 = (((x3333%x3334)<<x3335)-x3336);

	if (t76 != 128LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x3422 = INT32_MAX;
	int16_t x3423 = 0;

	t77 = (((x3421%x3422)<<x3423)-x3424);

	if (t77 != 142) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x3433 = 1065426782;
	int64_t x3434 = -1LL;
	static uint8_t x3435 = 3U;
	uint8_t x3436 = 37U;

	t78 = (((x3433%x3434)<<x3435)-x3436);

	if (t78 != -37LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x3481 = 403LLU;
	int16_t x3482 = INT16_MAX;
	uint32_t x3483 = 51U;
	static volatile int8_t x3484 = INT8_MIN;
	volatile uint64_t t79 = 44767762LLU;

	t79 = (((x3481%x3482)<<x3483)-x3484);

	if (t79 != 907475324915155072LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x3534 = INT64_MAX;
	int32_t x3535 = 6;
	uint16_t x3536 = 761U;
	static volatile int64_t t80 = -12871LL;

	t80 = (((x3533%x3534)<<x3535)-x3536);

	if (t80 != 455LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x3541 = 1983611398055LLU;
	static int8_t x3542 = 10;
	uint8_t x3543 = 31U;
	volatile uint8_t x3544 = UINT8_MAX;

	t81 = (((x3541%x3542)<<x3543)-x3544);

	if (t81 != 10737417985LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x3557 = 25;
	uint16_t x3558 = 387U;
	uint16_t x3559 = 7U;
	int32_t x3560 = 1550646;
	int32_t t82 = -16365429;

	t82 = (((x3557%x3558)<<x3559)-x3560);

	if (t82 != -1547446) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x3715 = 24U;
	int64_t x3716 = 7423235610472LL;
	volatile int64_t t83 = -131LL;

	t83 = (((x3713%x3714)<<x3715)-x3716);

	if (t83 != -7423235610472LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x3821 = 1LL;
	int64_t x3823 = 1LL;
	uint64_t t84 = 154091LLU;

	t84 = (((x3821%x3822)<<x3823)-x3824);

	if (t84 != 18446744073709547145LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x3849 = INT8_MAX;
	int64_t x3850 = INT64_MIN;
	static int8_t x3851 = 0;
	int32_t x3852 = INT32_MIN;
	int64_t t85 = -3850937LL;

	t85 = (((x3849%x3850)<<x3851)-x3852);

	if (t85 != 2147483775LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x3857 = INT8_MAX;
	int16_t x3858 = 19;
	uint16_t x3859 = 0U;
	int64_t x3860 = -1LL;
	int64_t t86 = 19899559LL;

	t86 = (((x3857%x3858)<<x3859)-x3860);

	if (t86 != 14LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x3905 = 983;
	static int32_t x3906 = 42468362;
	int16_t x3908 = -27;
	int32_t t87 = -1433;

	t87 = (((x3905%x3906)<<x3907)-x3908);

	if (t87 != 1993) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x3923 = 2U;
	int16_t x3924 = -1;
	volatile int32_t t88 = -20;

	t88 = (((x3921%x3922)<<x3923)-x3924);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x3937 = INT64_MIN;
	uint64_t x3938 = UINT64_MAX;
	uint16_t x3939 = 0U;
	uint32_t x3940 = UINT32_MAX;
	volatile uint64_t t89 = 2150LLU;

	t89 = (((x3937%x3938)<<x3939)-x3940);

	if (t89 != 9223372032559808513LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x3989 = 216684867;
	uint64_t x3990 = 326527499LLU;
	uint32_t x3992 = 126U;
	volatile uint64_t t90 = 513207LLU;

	t90 = (((x3989%x3990)<<x3991)-x3992);

	if (t90 != 1733478810LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x4089 = INT64_MAX;
	int8_t x4090 = INT8_MAX;
	int16_t x4091 = 24;
	int32_t x4092 = INT32_MAX;
	volatile int64_t t91 = 0LL;

	t91 = (((x4089%x4090)<<x4091)-x4092);

	if (t91 != -2147483647LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x4134 = 15916;
	static int8_t x4135 = 0;
	volatile int32_t t92 = 95269596;

	t92 = (((x4133%x4134)<<x4135)-x4136);

	if (t92 != 1872) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x4185 = INT8_MIN;
	static volatile int8_t x4186 = INT8_MIN;
	static uint32_t x4187 = 0U;
	int16_t x4188 = INT16_MIN;
	volatile int32_t t93 = -28398122;

	t93 = (((x4185%x4186)<<x4187)-x4188);

	if (t93 != 32768) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x4221 = -297672707350014067LL;
	uint64_t x4222 = 161823511406LLU;
	int16_t x4223 = 31;
	volatile int64_t x4224 = INT64_MAX;
	uint64_t t94 = 6412727LLU;

	t94 = (((x4221%x4222)<<x4223)-x4224);

	if (t94 != 12465576562227412993LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x4249 = UINT32_MAX;
	uint32_t x4250 = UINT32_MAX;
	static uint32_t x4251 = 0U;
	uint32_t t95 = 63066757U;

	t95 = (((x4249%x4250)<<x4251)-x4252);

	if (t95 != 4294962107U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x4309 = INT32_MIN;
	int8_t x4310 = INT8_MIN;
	int32_t x4311 = 1;
	int32_t x4312 = -1;

	t96 = (((x4309%x4310)<<x4311)-x4312);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x4389 = 108U;
	static uint16_t x4390 = 1523U;
	uint8_t x4391 = 1U;
	uint16_t x4392 = 12U;
	int32_t t97 = 9393;

	t97 = (((x4389%x4390)<<x4391)-x4392);

	if (t97 != 204) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x4393 = UINT32_MAX;
	volatile uint16_t x4394 = 3186U;
	volatile uint16_t x4395 = 2U;
	uint32_t t98 = 2931U;

	t98 = (((x4393%x4394)<<x4395)-x4396);

	if (t98 != 3873862624U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x4401 = 75U;
	volatile int32_t x4402 = INT32_MIN;
	static uint8_t x4403 = 9U;
	volatile uint32_t t99 = 13793U;

	t99 = (((x4401%x4402)<<x4403)-x4404);

	if (t99 != 38401U) { NG(); } else { ; }
	
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


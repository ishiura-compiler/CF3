#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint16_t x10 = UINT16_MAX;
int16_t x125 = INT16_MAX;
uint16_t x278 = UINT16_MAX;
uint64_t x279 = 116LLU;
volatile uint64_t x290 = UINT64_MAX;
int64_t x291 = INT64_MIN;
int16_t x402 = INT16_MAX;
int32_t x467 = 1962;
int16_t x501 = -3;
uint64_t x625 = 4960033443239LLU;
uint32_t x626 = UINT32_MAX;
volatile uint64_t t11 = 185216182870LLU;
uint8_t x690 = 2U;
volatile int8_t x691 = -15;
volatile int16_t x692 = 0;
int64_t x801 = 22983470014454196LL;
uint32_t x803 = 209539U;
int64_t x838 = -1LL;
volatile uint64_t x890 = UINT64_MAX;
uint64_t x891 = 1394698LLU;
static int8_t x892 = 1;
static int32_t x967 = 907684321;
static uint8_t x968 = 0U;
int64_t x991 = INT64_MIN;
volatile uint8_t x1032 = 3U;
volatile int32_t t20 = -445452199;
uint8_t x1181 = UINT8_MAX;
uint32_t x1185 = 2114U;
int16_t x1188 = 5;
int64_t x1193 = -1LL;
int32_t x1363 = INT32_MIN;
uint8_t x1364 = 5U;
volatile uint64_t x1531 = 3328328550543LLU;
volatile int64_t x1569 = INT64_MIN;
int64_t x1706 = INT64_MAX;
uint32_t x1707 = 80415665U;
static volatile int32_t x1749 = INT32_MIN;
volatile int16_t x1752 = 1;
volatile int64_t t38 = -90201246511325LL;
volatile uint32_t x1818 = UINT32_MAX;
uint32_t x1911 = 60U;
volatile uint64_t t42 = 3750880654031510LLU;
static volatile uint64_t t43 = 5546LLU;
volatile int64_t x1938 = INT64_MAX;
int16_t x2035 = INT16_MIN;
int8_t x2058 = INT8_MIN;
uint64_t t46 = 4772664LLU;
int8_t x2176 = 20;
int16_t x2224 = 3;
int32_t x2457 = INT32_MIN;
int16_t x2460 = 43;
volatile int8_t x2461 = 10;
int8_t x2463 = -13;
uint8_t x2663 = 15U;
uint64_t x2835 = UINT64_MAX;
int64_t x2930 = INT64_MAX;
volatile int64_t t62 = 75683446LL;
volatile int16_t x3017 = 0;
int64_t t63 = 64246991430LL;
volatile uint64_t x3043 = 2289317836018743209LLU;
int64_t x3103 = 2012LL;
static uint16_t x3104 = 36U;
volatile int64_t x3131 = -426LL;
uint32_t x3132 = 18U;
volatile uint64_t x3283 = 19LLU;
uint32_t x3303 = 738U;
static uint32_t t71 = 19U;
int16_t x3367 = INT16_MIN;
uint16_t x3426 = 8033U;
uint16_t x3506 = UINT16_MAX;
volatile uint16_t x3508 = 3U;
int8_t x3529 = INT8_MIN;
volatile int64_t t78 = -427661519603LL;
volatile uint32_t x3871 = 996U;
static uint8_t x3872 = 16U;
uint8_t x3937 = 1U;
uint8_t x3938 = 30U;
uint8_t x3940 = 56U;
volatile int64_t t83 = -120734868LL;
volatile int32_t x4065 = -20881;
static volatile int64_t x4067 = -1LL;
static int16_t x4090 = 27;
int32_t x4092 = 2;
int64_t x4111 = -146333118306862LL;
static uint8_t x4112 = 37U;
int32_t t87 = 22550;
int64_t t88 = 101656440LL;
volatile int16_t x4334 = INT16_MIN;
int8_t x4373 = INT8_MIN;
uint8_t x4386 = UINT8_MAX;
static int16_t x4388 = 2;
int32_t x4394 = INT32_MAX;
volatile uint64_t t93 = 486LLU;
int16_t x4481 = -1;
volatile int8_t x4484 = 1;
static int16_t x4487 = INT16_MAX;
int8_t x4488 = 0;
int32_t x4505 = -33400374;
int64_t x4507 = INT64_MAX;
static uint8_t x4508 = 1U;
int16_t x4545 = -417;
int16_t x4631 = INT16_MIN;
static uint8_t x4632 = 7U;


void f0(void) {
	uint32_t x9 = 1904990U;
	static int32_t x11 = INT32_MIN;
	uint8_t x12 = 0U;
	volatile uint32_t t0 = 30422608U;

	t0 = ((x9/(x10%x11))<<x12);

	if (t0 != 29U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x41 = INT32_MAX;
	int32_t x42 = 64699885;
	static int32_t x43 = INT32_MIN;
	uint16_t x44 = 12U;
	static volatile int32_t t1 = 753594307;

	t1 = ((x41/(x42%x43))<<x44);

	if (t1 != 135168) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x53 = INT32_MIN;
	static int64_t x54 = INT64_MIN;
	int16_t x55 = -7421;
	static uint8_t x56 = 36U;
	volatile int64_t t2 = -1778607002LL;

	t2 = ((x53/(x54%x55))<<x56);

	if (t2 != 197820283778760704LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x126 = 9;
	int8_t x127 = INT8_MIN;
	static uint16_t x128 = 6U;
	int32_t t3 = -1008555;

	t3 = ((x125/(x126%x127))<<x128);

	if (t3 != 232960) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x217 = -1LL;
	int32_t x218 = INT32_MAX;
	volatile uint16_t x219 = 594U;
	uint8_t x220 = 1U;
	int64_t t4 = 64203LL;

	t4 = ((x217/(x218%x219))<<x220);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x277 = 5U;
	volatile uint8_t x280 = 0U;
	volatile uint64_t t5 = 912758748375882062LLU;

	t5 = ((x277/(x278%x279))<<x280);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x289 = -13141;
	int32_t x292 = 55;
	uint64_t t6 = 216343526472LLU;

	t6 = ((x289/(x290%x291))<<x292);

	if (t6 != 36028797018963968LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x393 = 3910518381669082294LL;
	static int32_t x394 = INT32_MIN;
	static volatile uint64_t x395 = 7875103LLU;
	int16_t x396 = 20;
	volatile uint64_t t7 = 756288715090419464LLU;

	t7 = ((x393/(x394%x395))<<x396);

	if (t7 != 1225920035211444224LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x401 = -135633382;
	static uint32_t x403 = 479279061U;
	uint8_t x404 = 0U;
	volatile uint32_t t8 = 120070U;

	t8 = ((x401/(x402%x403))<<x404);

	if (t8 != 126936U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x465 = -9;
	uint64_t x466 = 1835720730512192LLU;
	int8_t x468 = 51;
	volatile uint64_t t9 = 32723960045599735LLU;

	t9 = ((x465/(x466%x467))<<x468);

	if (t9 != 5647513932722601984LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x502 = INT64_MIN;
	static uint16_t x503 = UINT16_MAX;
	uint32_t x504 = 5U;
	int64_t t10 = 52198278362LL;

	t10 = ((x501/(x502%x503))<<x504);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x627 = INT64_MAX;
	int8_t x628 = 0;

	t11 = ((x625/(x626%x627))<<x628);

	if (t11 != 1154LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x689 = -1LL;
	int64_t t12 = 1LL;

	t12 = ((x689/(x690%x691))<<x692);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x802 = 42750LLU;
	uint8_t x804 = 11U;
	uint64_t t13 = 4544758378848930LLU;

	t13 = ((x801/(x802%x803))<<x804);

	if (t13 != 1101056060573696LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x837 = -1;
	uint32_t x839 = 6865U;
	uint8_t x840 = 2U;
	int64_t t14 = 25158999907LL;

	t14 = ((x837/(x838%x839))<<x840);

	if (t14 != 4LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x889 = UINT8_MAX;
	static uint64_t t15 = 171LLU;

	t15 = ((x889/(x890%x891))<<x892);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x957 = 9702522U;
	int64_t x958 = 681553532993259418LL;
	volatile int16_t x959 = INT16_MIN;
	uint8_t x960 = 18U;
	int64_t t16 = -582319633081721LL;

	t16 = ((x957/(x958%x959))<<x960);

	if (t16 != 138674176LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x965 = 0;
	volatile int32_t x966 = INT32_MIN;
	int32_t t17 = -11006277;

	t17 = ((x965/(x966%x967))<<x968);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x989 = INT8_MAX;
	int8_t x990 = INT8_MIN;
	static int64_t x992 = 0LL;
	volatile int64_t t18 = -27178008276689263LL;

	t18 = ((x989/(x990%x991))<<x992);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x1029 = UINT16_MAX;
	uint8_t x1030 = 51U;
	static int32_t x1031 = -3055;
	int32_t t19 = -356718263;

	t19 = ((x1029/(x1030%x1031))<<x1032);

	if (t19 != 10280) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1053 = 10;
	volatile uint8_t x1054 = UINT8_MAX;
	int16_t x1055 = 19;
	uint8_t x1056 = 2U;

	t20 = ((x1053/(x1054%x1055))<<x1056);

	if (t20 != 4) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x1157 = -1LL;
	int8_t x1158 = INT8_MAX;
	static uint64_t x1159 = 17LLU;
	volatile uint64_t x1160 = 37LLU;
	volatile uint64_t t21 = 835LLU;

	t21 = ((x1157/(x1158%x1159))<<x1160);

	if (t21 != 18446743936270598144LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x1182 = INT16_MIN;
	int64_t x1183 = INT64_MIN;
	static uint64_t x1184 = 5LLU;
	volatile int64_t t22 = 16107443LL;

	t22 = ((x1181/(x1182%x1183))<<x1184);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x1186 = 33047054LLU;
	uint64_t x1187 = 927617616633LLU;
	uint64_t t23 = 477568841LLU;

	t23 = ((x1185/(x1186%x1187))<<x1188);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x1189 = INT8_MIN;
	int32_t x1190 = -1;
	uint64_t x1191 = 59593LLU;
	int16_t x1192 = 6;
	uint64_t t24 = 541516659426031LLU;

	t24 = ((x1189/(x1190%x1191))<<x1192);

	if (t24 != 39087260651483584LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x1194 = UINT16_MAX;
	int8_t x1195 = INT8_MIN;
	uint16_t x1196 = 0U;
	int64_t t25 = -485292387771741LL;

	t25 = ((x1193/(x1194%x1195))<<x1196);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1201 = UINT32_MAX;
	volatile int32_t x1202 = INT32_MIN;
	volatile int32_t x1203 = -3;
	volatile int8_t x1204 = 0;
	volatile uint32_t t26 = 1698988U;

	t26 = ((x1201/(x1202%x1203))<<x1204);

	if (t26 != 1U) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1361 = UINT64_MAX;
	int16_t x1362 = INT16_MIN;
	static uint64_t t27 = 760787401384213LLU;

	t27 = ((x1361/(x1362%x1363))<<x1364);

	if (t27 != 32LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1397 = INT8_MIN;
	uint32_t x1398 = 1007484928U;
	uint8_t x1399 = 17U;
	int8_t x1400 = 0;
	uint32_t t28 = 50882980U;

	t28 = ((x1397/(x1398%x1399))<<x1400);

	if (t28 != 858993433U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1529 = 224611;
	int32_t x1530 = -1;
	int8_t x1532 = 3;
	static volatile uint64_t t29 = 106257804LLU;

	t29 = ((x1529/(x1530%x1531))<<x1532);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1541 = 1981LL;
	static volatile uint64_t x1542 = 4796966402916LLU;
	volatile int16_t x1543 = INT16_MIN;
	uint16_t x1544 = 0U;
	volatile uint64_t t30 = 1572279025045758552LLU;

	t30 = ((x1541/(x1542%x1543))<<x1544);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x1561 = 23;
	volatile uint32_t x1562 = 27630U;
	int16_t x1563 = INT16_MAX;
	volatile int64_t x1564 = 4LL;
	volatile uint32_t t31 = 286479828U;

	t31 = ((x1561/(x1562%x1563))<<x1564);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x1570 = -6;
	volatile int8_t x1571 = INT8_MIN;
	int8_t x1572 = 2;
	volatile int64_t t32 = -685237056137797LL;

	t32 = ((x1569/(x1570%x1571))<<x1572);

	if (t32 != 6148914691236517204LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x1621 = 29;
	int16_t x1622 = 1127;
	static volatile uint64_t x1623 = UINT64_MAX;
	int32_t x1624 = 15;
	static volatile uint64_t t33 = 21361475158470LLU;

	t33 = ((x1621/(x1622%x1623))<<x1624);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x1633 = 4U;
	int32_t x1634 = INT32_MIN;
	int8_t x1635 = INT8_MAX;
	static volatile uint16_t x1636 = 1U;
	volatile int32_t t34 = -47;

	t34 = ((x1633/(x1634%x1635))<<x1636);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1705 = -97869;
	volatile uint16_t x1708 = 16U;
	int64_t t35 = -186LL;

	t35 = ((x1705/(x1706%x1707))<<x1708);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1733 = -1;
	int32_t x1734 = -1;
	int16_t x1735 = INT16_MIN;
	int16_t x1736 = 11;
	volatile int32_t t36 = -2305;

	t36 = ((x1733/(x1734%x1735))<<x1736);

	if (t36 != 2048) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x1750 = 732890285U;
	uint16_t x1751 = 13U;
	volatile uint32_t t37 = 605801415U;

	t37 = ((x1749/(x1750%x1751))<<x1752);

	if (t37 != 429496728U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1809 = 1373887LL;
	int32_t x1810 = INT32_MIN;
	volatile int64_t x1811 = -118154952897LL;
	volatile uint16_t x1812 = 0U;

	t38 = ((x1809/(x1810%x1811))<<x1812);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x1817 = 25892;
	int8_t x1819 = INT8_MAX;
	uint16_t x1820 = 8U;
	volatile uint32_t t39 = 1004U;

	t39 = ((x1817/(x1818%x1819))<<x1820);

	if (t39 != 441856U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x1833 = 47190459485279LLU;
	int64_t x1834 = -163LL;
	int8_t x1835 = INT8_MIN;
	int8_t x1836 = 7;
	volatile uint64_t t40 = 739LLU;

	t40 = ((x1833/(x1834%x1835))<<x1836);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x1897 = 16397U;
	int64_t x1898 = 827223LL;
	static volatile uint64_t x1899 = UINT64_MAX;
	int8_t x1900 = 2;
	uint64_t t41 = 6221LLU;

	t41 = ((x1897/(x1898%x1899))<<x1900);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x1909 = 32107714555LLU;
	int16_t x1910 = INT16_MIN;
	uint16_t x1912 = 18U;

	t42 = ((x1909/(x1910%x1911))<<x1912);

	if (t42 != 1052105590439936LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x1925 = INT16_MIN;
	int64_t x1926 = -1LL;
	uint64_t x1927 = 3282847LLU;
	volatile uint8_t x1928 = 14U;

	t43 = ((x1925/(x1926%x1927))<<x1928);

	if (t43 != 119861818269073408LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x1937 = 44LLU;
	int8_t x1939 = INT8_MIN;
	int8_t x1940 = 10;
	volatile uint64_t t44 = 1362138591168448728LLU;

	t44 = ((x1937/(x1938%x1939))<<x1940);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x2033 = 0U;
	uint32_t x2034 = UINT32_MAX;
	int16_t x2036 = 7;
	volatile uint32_t t45 = 160142U;

	t45 = ((x2033/(x2034%x2035))<<x2036);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x2057 = 295LLU;
	int32_t x2059 = INT32_MIN;
	uint8_t x2060 = 5U;

	t46 = ((x2057/(x2058%x2059))<<x2060);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x2097 = 225249568070558282LLU;
	uint64_t x2098 = UINT64_MAX;
	int64_t x2099 = 6LL;
	int8_t x2100 = 3;
	static volatile uint64_t t47 = 0LLU;

	t47 = ((x2097/(x2098%x2099))<<x2100);

	if (t47 != 600665514854822080LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x2137 = INT8_MIN;
	int64_t x2138 = INT64_MIN;
	int32_t x2139 = 458790;
	static uint32_t x2140 = 37U;
	volatile int64_t t48 = -1500940946956335254LL;

	t48 = ((x2137/(x2138%x2139))<<x2140);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x2173 = UINT16_MAX;
	int32_t x2174 = 1124234;
	int32_t x2175 = INT32_MIN;
	static int32_t t49 = -52597062;

	t49 = ((x2173/(x2174%x2175))<<x2176);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x2221 = 0;
	volatile uint8_t x2222 = 1U;
	volatile uint16_t x2223 = 8038U;
	volatile int32_t t50 = -6638656;

	t50 = ((x2221/(x2222%x2223))<<x2224);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x2233 = 39813596LLU;
	int16_t x2234 = INT16_MIN;
	static uint64_t x2235 = 133286613978LLU;
	uint16_t x2236 = 23U;
	uint64_t t51 = 1LLU;

	t51 = ((x2233/(x2234%x2235))<<x2236);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x2458 = 212090969LLU;
	int64_t x2459 = -91LL;
	volatile uint64_t t52 = 416LLU;

	t52 = ((x2457/(x2458%x2459))<<x2460);

	if (t52 != 3849873993959997440LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x2462 = INT16_MAX;
	volatile int8_t x2464 = 7;
	volatile int32_t t53 = -5516;

	t53 = ((x2461/(x2462%x2463))<<x2464);

	if (t53 != 128) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x2501 = INT32_MIN;
	static int64_t x2502 = 34390LL;
	uint64_t x2503 = 103758044543080266LLU;
	volatile uint8_t x2504 = 6U;
	volatile uint64_t t54 = 184025418438772LLU;

	t54 = ((x2501/(x2502%x2503))<<x2504);

	if (t54 != 34329503360859904LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x2517 = INT32_MIN;
	volatile int32_t x2518 = INT32_MIN;
	volatile uint64_t x2519 = 128922569000671LLU;
	uint8_t x2520 = 53U;
	volatile uint64_t t55 = 402939LLU;

	t55 = ((x2517/(x2518%x2519))<<x2520);

	if (t55 != 10331257545187917824LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int64_t x2549 = 1LL;
	static int32_t x2550 = INT32_MAX;
	int64_t x2551 = 416LL;
	uint32_t x2552 = 59U;
	volatile int64_t t56 = 220298843141669LL;

	t56 = ((x2549/(x2550%x2551))<<x2552);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x2661 = UINT8_MAX;
	volatile uint64_t x2662 = 126010869LLU;
	volatile uint8_t x2664 = 7U;
	static uint64_t t57 = 18168612313632633LLU;

	t57 = ((x2661/(x2662%x2663))<<x2664);

	if (t57 != 3584LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x2737 = INT8_MIN;
	uint64_t x2738 = 586726LLU;
	int32_t x2739 = -1;
	uint8_t x2740 = 18U;
	static volatile uint64_t t58 = 870201246641LLU;

	t58 = ((x2737/(x2738%x2739))<<x2740);

	if (t58 != 8241842492847423488LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x2769 = 38190;
	uint32_t x2770 = 32213U;
	static uint32_t x2771 = 1561U;
	static int8_t x2772 = 28;
	volatile uint32_t t59 = 1202473U;

	t59 = ((x2769/(x2770%x2771))<<x2772);

	if (t59 != 1610612736U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x2793 = INT8_MIN;
	static int64_t x2794 = -1LL;
	volatile int64_t x2795 = INT64_MIN;
	volatile uint8_t x2796 = 3U;
	int64_t t60 = -491512137532334LL;

	t60 = ((x2793/(x2794%x2795))<<x2796);

	if (t60 != 1024LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x2833 = 15;
	uint8_t x2834 = 6U;
	uint32_t x2836 = 2U;
	volatile uint64_t t61 = 34704613344451338LLU;

	t61 = ((x2833/(x2834%x2835))<<x2836);

	if (t61 != 8LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int64_t x2929 = -1LL;
	int8_t x2931 = INT8_MIN;
	static uint8_t x2932 = 5U;

	t62 = ((x2929/(x2930%x2931))<<x2932);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x3018 = INT64_MAX;
	int16_t x3019 = 206;
	uint64_t x3020 = 2LLU;

	t63 = ((x3017/(x3018%x3019))<<x3020);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x3041 = -612;
	int64_t x3042 = INT64_MIN;
	uint16_t x3044 = 3U;
	uint64_t t64 = 2712595068869885566LLU;

	t64 = ((x3041/(x3042%x3043))<<x3044);

	if (t64 != 2232LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x3057 = UINT32_MAX;
	int8_t x3058 = INT8_MIN;
	uint16_t x3059 = 3U;
	static uint16_t x3060 = 13U;
	uint32_t t65 = 20197U;

	t65 = ((x3057/(x3058%x3059))<<x3060);

	if (t65 != 8192U) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x3065 = INT16_MIN;
	int16_t x3066 = INT16_MIN;
	int32_t x3067 = 111;
	uint8_t x3068 = 3U;
	volatile int32_t t66 = 0;

	t66 = ((x3065/(x3066%x3067))<<x3068);

	if (t66 != 11392) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x3101 = 0U;
	uint8_t x3102 = UINT8_MAX;
	int64_t t67 = -30869764450LL;

	t67 = ((x3101/(x3102%x3103))<<x3104);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x3109 = -1;
	volatile uint16_t x3110 = 81U;
	volatile uint8_t x3111 = UINT8_MAX;
	static uint8_t x3112 = 22U;
	int32_t t68 = -54;

	t68 = ((x3109/(x3110%x3111))<<x3112);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x3129 = -1LL;
	static uint8_t x3130 = 14U;
	int64_t t69 = 2544LL;

	t69 = ((x3129/(x3130%x3131))<<x3132);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x3281 = 15588U;
	int64_t x3282 = -25298382LL;
	static uint32_t x3284 = 8U;
	uint64_t t70 = 950622239LLU;

	t70 = ((x3281/(x3282%x3283))<<x3284);

	if (t70 != 1995264LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x3301 = INT16_MAX;
	int32_t x3302 = INT32_MIN;
	int8_t x3304 = 1;

	t71 = ((x3301/(x3302%x3303))<<x3304);

	if (t71 != 200U) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x3365 = -1;
	int32_t x3366 = -1;
	volatile int8_t x3368 = 0;
	static volatile int32_t t72 = 5;

	t72 = ((x3365/(x3366%x3367))<<x3368);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x3425 = INT64_MAX;
	static volatile int32_t x3427 = INT32_MIN;
	int16_t x3428 = 1;
	static volatile int64_t t73 = -472LL;

	t73 = ((x3425/(x3426%x3427))<<x3428);

	if (t73 != 2296370480979652LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x3505 = 15U;
	int32_t x3507 = INT32_MAX;
	int32_t t74 = -1;

	t74 = ((x3505/(x3506%x3507))<<x3508);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x3530 = INT16_MAX;
	int32_t x3531 = INT32_MAX;
	uint8_t x3532 = 2U;
	int32_t t75 = 207589;

	t75 = ((x3529/(x3530%x3531))<<x3532);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x3541 = 3473U;
	int16_t x3542 = INT16_MIN;
	volatile int32_t x3543 = INT32_MIN;
	uint16_t x3544 = 0U;
	uint32_t t76 = 17805U;

	t76 = ((x3541/(x3542%x3543))<<x3544);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x3621 = -1LL;
	int16_t x3622 = INT16_MIN;
	static uint32_t x3623 = 447804U;
	uint8_t x3624 = 63U;
	volatile int64_t t77 = -3179962932LL;

	t77 = ((x3621/(x3622%x3623))<<x3624);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x3833 = 3U;
	int32_t x3834 = INT32_MIN;
	volatile int64_t x3835 = -741923323497504615LL;
	int8_t x3836 = 5;

	t78 = ((x3833/(x3834%x3835))<<x3836);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x3869 = INT32_MIN;
	int32_t x3870 = 4;
	uint32_t t79 = 191109949U;

	t79 = ((x3869/(x3870%x3871))<<x3872);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x3925 = -13418;
	int32_t x3926 = INT32_MIN;
	uint8_t x3927 = 10U;
	uint8_t x3928 = 3U;
	int32_t t80 = -435683877;

	t80 = ((x3925/(x3926%x3927))<<x3928);

	if (t80 != 13416) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x3933 = 1451U;
	static uint32_t x3934 = 88991100U;
	int32_t x3935 = -1;
	int8_t x3936 = 4;
	uint32_t t81 = 6293U;

	t81 = ((x3933/(x3934%x3935))<<x3936);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x3939 = INT64_MIN;
	volatile int64_t t82 = 17LL;

	t82 = ((x3937/(x3938%x3939))<<x3940);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x4053 = INT16_MAX;
	volatile int32_t x4054 = INT32_MIN;
	volatile int64_t x4055 = INT64_MIN;
	int8_t x4056 = 23;

	t83 = ((x4053/(x4054%x4055))<<x4056);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x4066 = 16567671LLU;
	int8_t x4068 = 0;
	uint64_t t84 = 23859875364416LLU;

	t84 = ((x4065/(x4066%x4067))<<x4068);

	if (t84 != 1113418058199LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x4089 = 7021;
	int8_t x4091 = -2;
	int32_t t85 = 4537322;

	t85 = ((x4089/(x4090%x4091))<<x4092);

	if (t85 != 28084) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x4109 = UINT8_MAX;
	uint32_t x4110 = UINT32_MAX;
	static int64_t t86 = 98475593282LL;

	t86 = ((x4109/(x4110%x4111))<<x4112);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x4129 = -1;
	static uint8_t x4130 = 97U;
	volatile int8_t x4131 = INT8_MIN;
	int16_t x4132 = 11;

	t87 = ((x4129/(x4130%x4131))<<x4132);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x4205 = 100U;
	int32_t x4206 = INT32_MIN;
	int64_t x4207 = -368875256750852302LL;
	uint8_t x4208 = 0U;

	t88 = ((x4205/(x4206%x4207))<<x4208);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x4245 = INT8_MIN;
	int64_t x4246 = INT64_MIN;
	uint8_t x4247 = 72U;
	int16_t x4248 = 1;
	volatile int64_t t89 = -3LL;

	t89 = ((x4245/(x4246%x4247))<<x4248);

	if (t89 != 32LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x4333 = INT8_MIN;
	volatile int32_t x4335 = 700338;
	int8_t x4336 = 0;
	static int32_t t90 = -256460;

	t90 = ((x4333/(x4334%x4335))<<x4336);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x4374 = -1;
	int32_t x4375 = 826124;
	int8_t x4376 = 0;
	static volatile int32_t t91 = 0;

	t91 = ((x4373/(x4374%x4375))<<x4376);

	if (t91 != 128) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x4385 = 1027539489U;
	int64_t x4387 = INT64_MAX;
	int64_t t92 = -216014LL;

	t92 = ((x4385/(x4386%x4387))<<x4388);

	if (t92 != 16118264LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x4393 = 39853002;
	uint64_t x4395 = 2059144256850LLU;
	volatile uint16_t x4396 = 4U;

	t93 = ((x4393/(x4394%x4395))<<x4396);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x4482 = INT8_MIN;
	int32_t x4483 = INT32_MAX;
	int32_t t94 = -771764123;

	t94 = ((x4481/(x4482%x4483))<<x4484);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x4485 = 3739564U;
	static uint8_t x4486 = UINT8_MAX;
	uint32_t t95 = 4884U;

	t95 = ((x4485/(x4486%x4487))<<x4488);

	if (t95 != 14664U) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x4506 = UINT32_MAX;
	volatile int64_t t96 = -5746112193326LL;

	t96 = ((x4505/(x4506%x4507))<<x4508);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x4521 = 9;
	int16_t x4522 = INT16_MAX;
	uint16_t x4523 = 16U;
	int16_t x4524 = 0;
	volatile int32_t t97 = 234148;

	t97 = ((x4521/(x4522%x4523))<<x4524);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int32_t x4546 = INT32_MIN;
	static uint64_t x4547 = 3697LLU;
	static int8_t x4548 = 0;
	uint64_t t98 = 1LLU;

	t98 = ((x4545/(x4546%x4547))<<x4548);

	if (t98 != 102481911520608617LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x4629 = INT64_MIN;
	int64_t x4630 = -15982645259LL;
	volatile int64_t t99 = 2148592LL;

	t99 = ((x4629/(x4630%x4631))<<x4632);

	if (t99 != 57615129604090112LL) { NG(); } else { ; }
	
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


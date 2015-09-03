#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x121 = -1;
uint8_t x124 = 1U;
int64_t x125 = -1LL;
static volatile uint64_t t2 = 0LLU;
int16_t x219 = INT16_MIN;
int32_t t3 = 13310;
int16_t x222 = INT16_MIN;
uint16_t x223 = 30U;
int64_t x224 = 1LL;
volatile int32_t t4 = 1409771;
static int8_t x228 = 5;
volatile int64_t x273 = 148935487365328054LL;
uint16_t x276 = 1U;
int16_t x306 = -1;
int8_t x315 = 10;
static uint64_t t9 = 96LLU;
int32_t x381 = -1;
int16_t x498 = -60;
uint8_t x500 = 10U;
uint8_t x536 = 0U;
int16_t x555 = INT16_MIN;
static uint64_t x556 = 2LLU;
uint64_t x629 = 1194LLU;
static int32_t x631 = -1;
volatile uint16_t x665 = 480U;
uint32_t t17 = 26U;
uint64_t x674 = 16236241525709LLU;
volatile int64_t x682 = 1081330973287138788LL;
static volatile int16_t x707 = INT16_MIN;
uint16_t x708 = 39U;
volatile int64_t t20 = -548LL;
int16_t x757 = -1;
uint64_t x789 = UINT64_MAX;
uint64_t x791 = UINT64_MAX;
static volatile int8_t x813 = -1;
volatile int32_t x815 = INT32_MIN;
int8_t x816 = 0;
int16_t x914 = INT16_MIN;
uint16_t x1046 = 391U;
static int16_t x1067 = INT16_MIN;
static uint16_t x1142 = 21815U;
int32_t x1219 = INT32_MAX;
uint64_t t33 = 127649355295403LLU;
static uint32_t x1693 = 1878473626U;
volatile uint32_t t42 = 41975741U;
static uint32_t x1844 = 2U;
static int64_t x1858 = INT64_MAX;
volatile int64_t x1929 = INT64_MIN;
volatile int32_t x1946 = 121885;
uint32_t x1947 = 22753U;
static int8_t x1954 = -57;
int16_t x1957 = INT16_MIN;
volatile uint16_t x1993 = 3223U;
uint16_t x1994 = UINT16_MAX;
int8_t x2018 = INT8_MAX;
static int64_t x2032 = 0LL;
volatile uint64_t t54 = 459653071160LLU;
uint64_t x2089 = UINT64_MAX;
uint8_t x2090 = 0U;
volatile uint64_t t55 = 398466139924763LLU;
int16_t x2109 = INT16_MAX;
uint16_t x2174 = 90U;
volatile int64_t t58 = -362LL;
int16_t x2294 = 1;
int16_t x2295 = INT16_MIN;
uint32_t x2309 = 193302288U;
volatile uint32_t t62 = 105698927U;
int16_t x2338 = -1;
uint64_t x2340 = 18LLU;
uint32_t x2349 = UINT32_MAX;
int64_t x2351 = INT64_MAX;
volatile uint32_t x2380 = 0U;
static volatile int32_t t67 = -2;
static int64_t x2514 = -1LL;
int16_t x2516 = 4;
static volatile int64_t t70 = 49710LL;
static uint64_t t71 = 3126385661784LLU;
static int8_t x2646 = INT8_MAX;
uint64_t t74 = 8218521LLU;
uint8_t x2782 = 55U;
int64_t x2817 = INT64_MIN;
volatile uint64_t t79 = 832880LLU;
int16_t x2971 = INT16_MAX;
int32_t x3001 = -1;
volatile uint8_t x3004 = 3U;
uint32_t x3005 = UINT32_MAX;
volatile int8_t x3006 = INT8_MIN;
static uint32_t x3030 = 73U;
int16_t x3049 = -1;
static uint64_t x3122 = UINT64_MAX;
volatile int16_t x3182 = INT16_MIN;
int16_t x3210 = -1742;
volatile int64_t t89 = -1503LL;
int64_t x3361 = -539037751095LL;
int8_t x3391 = INT8_MAX;
uint32_t t92 = 2U;
uint8_t x3677 = 8U;
uint32_t x3761 = 7656U;
int32_t x3763 = -1;
volatile uint32_t t97 = 60U;
uint64_t x3765 = 36119706930LLU;
static int16_t x3766 = INT16_MAX;
static int32_t x3849 = 437272634;


void f0(void) {
	volatile int32_t x117 = -1;
	uint16_t x118 = 2U;
	volatile int32_t x119 = -14956;
	uint8_t x120 = 3U;
	int32_t t0 = -47;

	t0 = (((x117-x118)/x119)>>x120);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x122 = 6065469U;
	int64_t x123 = INT64_MAX;
	volatile int64_t t1 = -4155582560528973LL;

	t1 = (((x121-x122)/x123)>>x124);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x126 = UINT64_MAX;
	int8_t x127 = INT8_MAX;
	int32_t x128 = 1;

	t2 = (((x125-x126)/x127)>>x128);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x217 = -1;
	int16_t x218 = INT16_MIN;
	int8_t x220 = 1;

	t3 = (((x217-x218)/x219)>>x220);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x221 = -1;

	t4 = (((x221-x222)/x223)>>x224);

	if (t4 != 546) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x225 = INT8_MIN;
	int16_t x226 = INT16_MAX;
	uint32_t x227 = UINT32_MAX;
	static uint32_t t5 = 2937853U;

	t5 = (((x225-x226)/x227)>>x228);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x274 = UINT64_MAX;
	static uint16_t x275 = UINT16_MAX;
	volatile uint64_t t6 = 22LLU;

	t6 = (((x273-x274)/x275)>>x276);

	if (t6 != 1136304931451LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x305 = INT16_MIN;
	int64_t x307 = 532242929LL;
	int8_t x308 = 48;
	int64_t t7 = 132312602842554LL;

	t7 = (((x305-x306)/x307)>>x308);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x313 = 5;
	int8_t x314 = -3;
	uint16_t x316 = 15U;
	int32_t t8 = 14638;

	t8 = (((x313-x314)/x315)>>x316);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x329 = 73238822766979316LLU;
	int32_t x330 = INT32_MIN;
	int32_t x331 = INT32_MIN;
	volatile uint8_t x332 = 4U;

	t9 = (((x329-x330)/x331)>>x332);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x382 = 2U;
	int8_t x383 = 1;
	uint8_t x384 = 1U;
	uint32_t t10 = 52U;

	t10 = (((x381-x382)/x383)>>x384);

	if (t10 != 2147483646U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x413 = -17;
	static int8_t x414 = 2;
	static int16_t x415 = INT16_MIN;
	static volatile int8_t x416 = 3;
	static int32_t t11 = -2002;

	t11 = (((x413-x414)/x415)>>x416);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x497 = -1;
	uint8_t x499 = UINT8_MAX;
	int32_t t12 = 9684436;

	t12 = (((x497-x498)/x499)>>x500);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x533 = INT16_MIN;
	static uint64_t x534 = 392LLU;
	int64_t x535 = INT64_MIN;
	uint64_t t13 = 6541140LLU;

	t13 = (((x533-x534)/x535)>>x536);

	if (t13 != 1LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x553 = 85U;
	volatile int8_t x554 = INT8_MAX;
	volatile int32_t t14 = 31964;

	t14 = (((x553-x554)/x555)>>x556);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x630 = INT64_MAX;
	static uint8_t x632 = 28U;
	uint64_t t15 = 1214919325076807388LLU;

	t15 = (((x629-x630)/x631)>>x632);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int16_t x657 = -1;
	int64_t x658 = 104LL;
	int16_t x659 = INT16_MIN;
	uint64_t x660 = 30LLU;
	static int64_t t16 = -90115327679819222LL;

	t16 = (((x657-x658)/x659)>>x660);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x666 = 195785526U;
	volatile int16_t x667 = INT16_MIN;
	uint32_t x668 = 0U;

	t17 = (((x665-x666)/x667)>>x668);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x673 = INT8_MAX;
	volatile int16_t x675 = INT16_MIN;
	static uint16_t x676 = 8U;
	uint64_t t18 = 989408142780978244LLU;

	t18 = (((x673-x674)/x675)>>x676);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x681 = 15494936325238LLU;
	volatile uint16_t x683 = UINT16_MAX;
	volatile uint8_t x684 = 53U;
	volatile uint64_t t19 = 182LLU;

	t19 = (((x681-x682)/x683)>>x684);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x705 = -1LL;
	int8_t x706 = 6;

	t20 = (((x705-x706)/x707)>>x708);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x758 = 1866315907749786LLU;
	int64_t x759 = 1032686019266902645LL;
	volatile int16_t x760 = 0;
	volatile uint64_t t21 = 4144443234LLU;

	t21 = (((x757-x758)/x759)>>x760);

	if (t21 != 17LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x769 = 208517021LLU;
	static volatile uint32_t x770 = 17143313U;
	volatile uint8_t x771 = 24U;
	int8_t x772 = 6;
	uint64_t t22 = 958562LLU;

	t22 = (((x769-x770)/x771)>>x772);

	if (t22 != 124592LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x790 = INT32_MIN;
	uint16_t x792 = 0U;
	volatile uint64_t t23 = 6263149158802LLU;

	t23 = (((x789-x790)/x791)>>x792);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x814 = 5U;
	volatile int32_t t24 = 5074596;

	t24 = (((x813-x814)/x815)>>x816);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x893 = UINT16_MAX;
	uint16_t x894 = 8342U;
	uint8_t x895 = UINT8_MAX;
	int8_t x896 = 10;
	static volatile int32_t t25 = 829903;

	t25 = (((x893-x894)/x895)>>x896);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x913 = 63LLU;
	volatile uint64_t x915 = UINT64_MAX;
	volatile uint8_t x916 = 2U;
	uint64_t t26 = 1941LLU;

	t26 = (((x913-x914)/x915)>>x916);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x989 = INT8_MIN;
	static int8_t x990 = INT8_MIN;
	int64_t x991 = INT64_MAX;
	uint8_t x992 = 0U;
	volatile int64_t t27 = 3738873216985009378LL;

	t27 = (((x989-x990)/x991)>>x992);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x1045 = 46U;
	int8_t x1047 = INT8_MIN;
	static uint8_t x1048 = 19U;
	volatile uint32_t t28 = 102805U;

	t28 = (((x1045-x1046)/x1047)>>x1048);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x1065 = -112LL;
	static int64_t x1066 = -1LL;
	uint64_t x1068 = 28LLU;
	static int64_t t29 = -905161756LL;

	t29 = (((x1065-x1066)/x1067)>>x1068);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1141 = INT16_MIN;
	int16_t x1143 = -13;
	volatile uint8_t x1144 = 1U;
	static int32_t t30 = -125;

	t30 = (((x1141-x1142)/x1143)>>x1144);

	if (t30 != 2099) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1173 = -32528508680702LL;
	volatile int64_t x1174 = -224LL;
	static uint64_t x1175 = 8180956952274259LLU;
	uint8_t x1176 = 0U;
	volatile uint64_t t31 = 1142112LLU;

	t31 = (((x1173-x1174)/x1175)>>x1176);

	if (t31 != 2254LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x1197 = INT64_MIN;
	int8_t x1198 = -1;
	int32_t x1199 = INT32_MIN;
	static int32_t x1200 = 5;
	int64_t t32 = -116556731LL;

	t32 = (((x1197-x1198)/x1199)>>x1200);

	if (t32 != 134217727LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1217 = 86547589949189225LLU;
	int16_t x1218 = -1;
	static uint8_t x1220 = 1U;

	t33 = (((x1217-x1218)/x1219)>>x1220);

	if (t33 != 20150931LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1309 = 63;
	int32_t x1310 = -1;
	uint32_t x1311 = 1U;
	uint8_t x1312 = 17U;
	volatile uint32_t t34 = 998U;

	t34 = (((x1309-x1310)/x1311)>>x1312);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1353 = 28U;
	uint64_t x1354 = UINT64_MAX;
	volatile int16_t x1355 = INT16_MAX;
	static uint16_t x1356 = 1U;
	uint64_t t35 = 1024587477LLU;

	t35 = (((x1353-x1354)/x1355)>>x1356);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x1393 = -7626;
	volatile int32_t x1394 = 978409643;
	int16_t x1395 = -1;
	int8_t x1396 = 1;
	volatile int32_t t36 = 0;

	t36 = (((x1393-x1394)/x1395)>>x1396);

	if (t36 != 489208634) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1449 = INT64_MAX;
	volatile int16_t x1450 = INT16_MAX;
	volatile int64_t x1451 = INT64_MIN;
	volatile uint8_t x1452 = 37U;
	volatile int64_t t37 = 189689501966LL;

	t37 = (((x1449-x1450)/x1451)>>x1452);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1509 = INT64_MAX;
	uint64_t x1510 = 4089686447084048377LLU;
	int8_t x1511 = -1;
	uint8_t x1512 = 15U;
	volatile uint64_t t38 = 106822LLU;

	t38 = (((x1509-x1510)/x1511)>>x1512);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1573 = INT32_MIN;
	int64_t x1574 = INT64_MIN;
	volatile uint16_t x1575 = 4U;
	uint8_t x1576 = 0U;
	static volatile int64_t t39 = -3940LL;

	t39 = (((x1573-x1574)/x1575)>>x1576);

	if (t39 != 2305843008676823040LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x1673 = 1633U;
	volatile uint32_t x1674 = 0U;
	int32_t x1675 = -1;
	static int8_t x1676 = 0;
	static uint32_t t40 = 31U;

	t40 = (((x1673-x1674)/x1675)>>x1676);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x1694 = INT16_MAX;
	int8_t x1695 = -1;
	uint16_t x1696 = 4U;
	volatile uint32_t t41 = 423945U;

	t41 = (((x1693-x1694)/x1695)>>x1696);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x1749 = 10467U;
	volatile int8_t x1750 = INT8_MIN;
	static volatile uint16_t x1751 = 868U;
	volatile uint8_t x1752 = 18U;

	t42 = (((x1749-x1750)/x1751)>>x1752);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x1805 = 62U;
	volatile int32_t x1806 = -1;
	static uint32_t x1807 = 476U;
	static int32_t x1808 = 12;
	uint32_t t43 = 53U;

	t43 = (((x1805-x1806)/x1807)>>x1808);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x1841 = INT64_MIN;
	int8_t x1842 = -10;
	int16_t x1843 = -1;
	int64_t t44 = 2262497880LL;

	t44 = (((x1841-x1842)/x1843)>>x1844);

	if (t44 != 2305843009213693949LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x1857 = 0U;
	int16_t x1859 = -1;
	int8_t x1860 = 3;
	static int64_t t45 = -131449892LL;

	t45 = (((x1857-x1858)/x1859)>>x1860);

	if (t45 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x1930 = -356284LL;
	volatile uint64_t x1931 = 3568281397378088864LLU;
	static uint8_t x1932 = 54U;
	uint64_t t46 = 48564240679LLU;

	t46 = (((x1929-x1930)/x1931)>>x1932);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x1945 = INT16_MAX;
	static uint64_t x1948 = 20LLU;
	uint32_t t47 = 4937U;

	t47 = (((x1945-x1946)/x1947)>>x1948);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x1953 = UINT32_MAX;
	int8_t x1955 = -13;
	uint16_t x1956 = 3U;
	uint32_t t48 = 5U;

	t48 = (((x1953-x1954)/x1955)>>x1956);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x1958 = INT32_MIN;
	uint32_t x1959 = UINT32_MAX;
	static int8_t x1960 = 15;
	static volatile uint32_t t49 = 45342666U;

	t49 = (((x1957-x1958)/x1959)>>x1960);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x1995 = INT64_MIN;
	int8_t x1996 = 3;
	int64_t t50 = 432572735050721LL;

	t50 = (((x1993-x1994)/x1995)>>x1996);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x2017 = UINT32_MAX;
	static volatile int64_t x2019 = INT64_MAX;
	static uint8_t x2020 = 0U;
	int64_t t51 = 4059741129LL;

	t51 = (((x2017-x2018)/x2019)>>x2020);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x2029 = 869389;
	int64_t x2030 = INT64_MAX;
	uint64_t x2031 = 149482LLU;
	volatile uint64_t t52 = 53208907484962692LLU;

	t52 = (((x2029-x2030)/x2031)>>x2032);

	if (t52 != 61702225263614LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x2033 = INT32_MIN;
	volatile uint64_t x2034 = UINT64_MAX;
	int8_t x2035 = INT8_MIN;
	static uint8_t x2036 = 1U;
	static uint64_t t53 = 14787773LLU;

	t53 = (((x2033-x2034)/x2035)>>x2036);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x2077 = 1445LLU;
	volatile int8_t x2078 = INT8_MIN;
	int16_t x2079 = INT16_MIN;
	static uint8_t x2080 = 7U;

	t54 = (((x2077-x2078)/x2079)>>x2080);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x2091 = UINT8_MAX;
	static int16_t x2092 = 21;

	t55 = (((x2089-x2090)/x2091)>>x2092);

	if (t55 != 34494482440LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x2110 = 31873928065LLU;
	uint8_t x2111 = 36U;
	uint16_t x2112 = 63U;
	uint64_t t56 = 129415161388LLU;

	t56 = (((x2109-x2110)/x2111)>>x2112);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x2113 = 32185492030340526LLU;
	uint32_t x2114 = 52U;
	int32_t x2115 = INT32_MIN;
	volatile uint8_t x2116 = 0U;
	volatile uint64_t t57 = 293849789718811719LLU;

	t57 = (((x2113-x2114)/x2115)>>x2116);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x2173 = UINT16_MAX;
	static int64_t x2175 = INT64_MIN;
	static uint16_t x2176 = 1U;

	t58 = (((x2173-x2174)/x2175)>>x2176);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x2221 = 2U;
	uint64_t x2222 = UINT64_MAX;
	uint64_t x2223 = 949397181LLU;
	volatile uint16_t x2224 = 2U;
	volatile uint64_t t59 = 3665LLU;

	t59 = (((x2221-x2222)/x2223)>>x2224);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x2281 = 18618352671719LLU;
	uint16_t x2282 = UINT16_MAX;
	volatile int8_t x2283 = INT8_MIN;
	uint8_t x2284 = 3U;
	volatile uint64_t t60 = 1450LLU;

	t60 = (((x2281-x2282)/x2283)>>x2284);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x2293 = 3;
	int8_t x2296 = 3;
	int32_t t61 = -124;

	t61 = (((x2293-x2294)/x2295)>>x2296);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int16_t x2310 = -2919;
	volatile int8_t x2311 = INT8_MAX;
	uint8_t x2312 = 29U;

	t62 = (((x2309-x2310)/x2311)>>x2312);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x2337 = 2U;
	int8_t x2339 = INT8_MIN;
	int32_t t63 = -7769567;

	t63 = (((x2337-x2338)/x2339)>>x2340);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x2341 = INT16_MAX;
	int8_t x2342 = -1;
	int32_t x2343 = -8001352;
	volatile uint8_t x2344 = 10U;
	static volatile int32_t t64 = -25812;

	t64 = (((x2341-x2342)/x2343)>>x2344);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x2350 = INT32_MIN;
	int8_t x2352 = 26;
	int64_t t65 = -14998303937912LL;

	t65 = (((x2349-x2350)/x2351)>>x2352);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x2377 = 29649066681794LLU;
	int64_t x2378 = 8089358979543LL;
	uint16_t x2379 = UINT16_MAX;
	uint64_t t66 = 19LLU;

	t66 = (((x2377-x2378)/x2379)>>x2380);

	if (t66 != 328980051LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x2389 = UINT16_MAX;
	int32_t x2390 = -1;
	uint16_t x2391 = 1899U;
	int32_t x2392 = 3;

	t67 = (((x2389-x2390)/x2391)>>x2392);

	if (t67 != 4) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x2413 = 17U;
	volatile int32_t x2414 = 1531790;
	int8_t x2415 = -1;
	volatile uint8_t x2416 = 3U;
	volatile int32_t t68 = 123;

	t68 = (((x2413-x2414)/x2415)>>x2416);

	if (t68 != 191471) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x2473 = -558961LL;
	volatile uint32_t x2474 = 6U;
	int32_t x2475 = -1;
	uint16_t x2476 = 1U;
	volatile int64_t t69 = 50LL;

	t69 = (((x2473-x2474)/x2475)>>x2476);

	if (t69 != 279483LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x2513 = 1;
	int8_t x2515 = INT8_MIN;

	t70 = (((x2513-x2514)/x2515)>>x2516);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x2529 = UINT64_MAX;
	int16_t x2530 = -1;
	int16_t x2531 = INT16_MIN;
	volatile uint8_t x2532 = 6U;

	t71 = (((x2529-x2530)/x2531)>>x2532);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x2589 = INT16_MIN;
	int8_t x2590 = -1;
	int32_t x2591 = -1;
	uint64_t x2592 = 0LLU;
	volatile int32_t t72 = -878;

	t72 = (((x2589-x2590)/x2591)>>x2592);

	if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x2605 = 29;
	uint16_t x2606 = UINT16_MAX;
	int8_t x2607 = -1;
	int8_t x2608 = 8;
	int32_t t73 = 458;

	t73 = (((x2605-x2606)/x2607)>>x2608);

	if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x2645 = 64348LLU;
	uint16_t x2647 = 5166U;
	uint8_t x2648 = 1U;

	t74 = (((x2645-x2646)/x2647)>>x2648);

	if (t74 != 6LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x2717 = INT64_MIN;
	int16_t x2718 = -1;
	int32_t x2719 = INT32_MIN;
	uint8_t x2720 = 15U;
	static volatile int64_t t75 = -648809LL;

	t75 = (((x2717-x2718)/x2719)>>x2720);

	if (t75 != 131071LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x2781 = -1429;
	uint64_t x2783 = 8792564246365888941LLU;
	static volatile uint64_t x2784 = 4LLU;
	uint64_t t76 = 50059910889939085LLU;

	t76 = (((x2781-x2782)/x2783)>>x2784);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x2818 = -2;
	int64_t x2819 = -1LL;
	static volatile int8_t x2820 = 11;
	volatile int64_t t77 = 492639LL;

	t77 = (((x2817-x2818)/x2819)>>x2820);

	if (t77 != 4503599627370495LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x2889 = -1;
	static volatile int16_t x2890 = INT16_MAX;
	static uint64_t x2891 = UINT64_MAX;
	uint8_t x2892 = 7U;
	static volatile uint64_t t78 = 351804108572029602LLU;

	t78 = (((x2889-x2890)/x2891)>>x2892);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x2949 = -11;
	uint64_t x2950 = 111357LLU;
	volatile int8_t x2951 = -9;
	volatile uint8_t x2952 = 0U;

	t79 = (((x2949-x2950)/x2951)>>x2952);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x2969 = INT32_MAX;
	uint16_t x2970 = 9U;
	uint16_t x2972 = 7U;
	int32_t t80 = -42346;

	t80 = (((x2969-x2970)/x2971)>>x2972);

	if (t80 != 512) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x3002 = -2;
	int64_t x3003 = INT64_MIN;
	volatile int64_t t81 = -68717300002041LL;

	t81 = (((x3001-x3002)/x3003)>>x3004);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x3007 = INT16_MIN;
	int32_t x3008 = 0;
	uint32_t t82 = 297U;

	t82 = (((x3005-x3006)/x3007)>>x3008);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x3029 = 0;
	int16_t x3031 = INT16_MIN;
	volatile uint16_t x3032 = 3U;
	uint32_t t83 = 189917U;

	t83 = (((x3029-x3030)/x3031)>>x3032);

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x3050 = 0;
	int8_t x3051 = INT8_MAX;
	int16_t x3052 = 1;
	int32_t t84 = -8967;

	t84 = (((x3049-x3050)/x3051)>>x3052);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x3081 = -3;
	static uint8_t x3082 = UINT8_MAX;
	volatile int16_t x3083 = INT16_MIN;
	int32_t x3084 = 17;
	volatile int32_t t85 = -2;

	t85 = (((x3081-x3082)/x3083)>>x3084);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x3121 = INT32_MAX;
	static int16_t x3123 = -207;
	volatile uint8_t x3124 = 9U;
	uint64_t t86 = 130157989233038465LLU;

	t86 = (((x3121-x3122)/x3123)>>x3124);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x3181 = 7934855LLU;
	volatile int64_t x3183 = 585119017LL;
	static volatile int8_t x3184 = 0;
	static uint64_t t87 = 50535377LLU;

	t87 = (((x3181-x3182)/x3183)>>x3184);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x3209 = -1;
	int32_t x3211 = INT32_MIN;
	int8_t x3212 = 0;
	int32_t t88 = -3217311;

	t88 = (((x3209-x3210)/x3211)>>x3212);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x3313 = 0U;
	int64_t x3314 = INT64_MAX;
	int64_t x3315 = INT64_MIN;
	uint8_t x3316 = 2U;

	t89 = (((x3313-x3314)/x3315)>>x3316);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x3333 = -1;
	int32_t x3334 = INT32_MIN;
	static int32_t x3335 = INT32_MIN;
	int8_t x3336 = 5;
	static int32_t t90 = 265464319;

	t90 = (((x3333-x3334)/x3335)>>x3336);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x3362 = 11794465U;
	volatile int32_t x3363 = -1;
	uint16_t x3364 = 0U;
	volatile int64_t t91 = -220937616LL;

	t91 = (((x3361-x3362)/x3363)>>x3364);

	if (t91 != 539049545560LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x3389 = INT16_MAX;
	static uint32_t x3390 = UINT32_MAX;
	volatile uint16_t x3392 = 1U;

	t92 = (((x3389-x3390)/x3391)>>x3392);

	if (t92 != 129U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x3453 = INT16_MIN;
	uint16_t x3454 = 2U;
	volatile uint32_t x3455 = 155069088U;
	static int8_t x3456 = 24;
	static uint32_t t93 = 463688003U;

	t93 = (((x3453-x3454)/x3455)>>x3456);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x3565 = INT32_MIN;
	int64_t x3566 = -1LL;
	static volatile int64_t x3567 = INT64_MIN;
	uint8_t x3568 = 31U;
	volatile int64_t t94 = 66013765040142LL;

	t94 = (((x3565-x3566)/x3567)>>x3568);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x3569 = INT64_MIN;
	volatile int8_t x3570 = -24;
	int64_t x3571 = -1LL;
	volatile uint16_t x3572 = 7U;
	int64_t t95 = 155LL;

	t95 = (((x3569-x3570)/x3571)>>x3572);

	if (t95 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x3678 = 3796U;
	int64_t x3679 = -4591868212750081LL;
	int64_t x3680 = 14LL;
	int64_t t96 = -82303111LL;

	t96 = (((x3677-x3678)/x3679)>>x3680);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x3762 = INT8_MIN;
	uint8_t x3764 = 5U;

	t97 = (((x3761-x3762)/x3763)>>x3764);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x3767 = 2U;
	uint8_t x3768 = 0U;
	volatile uint64_t t98 = 356944876621572391LLU;

	t98 = (((x3765-x3766)/x3767)>>x3768);

	if (t98 != 18059837081LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x3850 = 127LLU;
	int32_t x3851 = -113501351;
	int8_t x3852 = 0;
	static volatile uint64_t t99 = 207768678LLU;

	t99 = (((x3849-x3850)/x3851)>>x3852);

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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x3 = 9919690LL;
uint64_t x167 = 12910259LLU;
int32_t x438 = -1;
int16_t x499 = 1;
static int8_t x525 = -21;
int64_t x526 = INT64_MIN;
static int8_t x722 = INT8_MIN;
uint32_t x724 = 1U;
int16_t x1013 = 2969;
int32_t x1154 = -1;
volatile int8_t x1156 = 1;
int8_t x1266 = -1;
int8_t x1268 = 0;
volatile int32_t x1297 = -1;
int16_t x1450 = -1;
int16_t x1451 = 2;
uint16_t x1471 = 49U;
int32_t t18 = 665714;
static uint64_t x1479 = 8305983279LLU;
int64_t x1583 = 16884LL;
static volatile int16_t x1594 = INT16_MAX;
volatile int8_t x1596 = 25;
uint32_t x1605 = 97886026U;
volatile int32_t x1664 = 14;
int8_t x1665 = INT8_MIN;
volatile uint8_t x1667 = 6U;
uint8_t x1668 = 3U;
int16_t x1954 = -1;
uint32_t x1955 = 44180606U;
uint32_t x2146 = 60079097U;
volatile int64_t x2148 = 2LL;
static int16_t x2197 = INT16_MIN;
static int16_t x2198 = -1;
int16_t x2249 = -1;
uint16_t x2250 = 28U;
static uint32_t x2251 = UINT32_MAX;


void f0(void) {
	volatile uint16_t x1 = UINT16_MAX;
	uint32_t x2 = 35700U;
	volatile uint8_t x4 = 1U;
	static volatile int32_t t0 = -2573;

	t0 = (x1<=(x2|(x3<<x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x165 = 1531602997U;
	int8_t x166 = -1;
	static uint8_t x168 = 46U;
	int32_t t1 = 1391684;

	t1 = (x165<=(x166|(x167<<x168)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x437 = 183835333;
	uint16_t x439 = 38U;
	uint8_t x440 = 5U;
	int32_t t2 = -2530330;

	t2 = (x437<=(x438|(x439<<x440)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x497 = 6736594295331LLU;
	volatile uint8_t x498 = UINT8_MAX;
	uint64_t x500 = 6LLU;
	volatile int32_t t3 = 261302;

	t3 = (x497<=(x498|(x499<<x500)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x527 = UINT16_MAX;
	static int8_t x528 = 6;
	static volatile int32_t t4 = -1;

	t4 = (x525<=(x526|(x527<<x528)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x549 = -1LL;
	static int16_t x550 = INT16_MIN;
	static volatile int16_t x551 = 0;
	static int8_t x552 = 10;
	int32_t t5 = 1;

	t5 = (x549<=(x550|(x551<<x552)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x573 = 0U;
	volatile int8_t x574 = 0;
	volatile uint64_t x575 = UINT64_MAX;
	uint8_t x576 = 4U;
	int32_t t6 = 3;

	t6 = (x573<=(x574|(x575<<x576)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x721 = INT8_MAX;
	uint64_t x723 = UINT64_MAX;
	volatile int32_t t7 = -2;

	t7 = (x721<=(x722|(x723<<x724)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x809 = 5665U;
	uint64_t x810 = 12597812422082LLU;
	int8_t x811 = 0;
	int8_t x812 = 3;
	static volatile int32_t t8 = 714922792;

	t8 = (x809<=(x810|(x811<<x812)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x833 = -69;
	int64_t x834 = -2081731562069LL;
	static uint32_t x835 = 61U;
	int8_t x836 = 6;
	int32_t t9 = 1;

	t9 = (x833<=(x834|(x835<<x836)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x1014 = -1;
	int16_t x1015 = 45;
	volatile int8_t x1016 = 2;
	static int32_t t10 = 26964;

	t10 = (x1013<=(x1014|(x1015<<x1016)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x1153 = 998072572U;
	uint8_t x1155 = 12U;
	int32_t t11 = 104764;

	t11 = (x1153<=(x1154|(x1155<<x1156)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x1265 = 2;
	int32_t x1267 = 916;
	int32_t t12 = -7;

	t12 = (x1265<=(x1266|(x1267<<x1268)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x1285 = -257938479299794LL;
	int64_t x1286 = -1LL;
	volatile uint8_t x1287 = UINT8_MAX;
	int16_t x1288 = 1;
	volatile int32_t t13 = -586;

	t13 = (x1285<=(x1286|(x1287<<x1288)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x1293 = 8378LLU;
	int32_t x1294 = INT32_MIN;
	uint8_t x1295 = UINT8_MAX;
	volatile uint32_t x1296 = 2U;
	int32_t t14 = -6;

	t14 = (x1293<=(x1294|(x1295<<x1296)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x1298 = 4194860595021LLU;
	int8_t x1299 = INT8_MAX;
	uint32_t x1300 = 6U;
	static int32_t t15 = 89;

	t15 = (x1297<=(x1298|(x1299<<x1300)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1373 = INT8_MIN;
	int32_t x1374 = 12085;
	uint32_t x1375 = 403497528U;
	uint8_t x1376 = 21U;
	int32_t t16 = -1818152;

	t16 = (x1373<=(x1374|(x1375<<x1376)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x1449 = INT32_MAX;
	uint16_t x1452 = 0U;
	static int32_t t17 = 4171864;

	t17 = (x1449<=(x1450|(x1451<<x1452)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x1469 = INT8_MIN;
	static uint64_t x1470 = 1525934LLU;
	static uint16_t x1472 = 11U;

	t18 = (x1469<=(x1470|(x1471<<x1472)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x1477 = 0;
	static uint8_t x1478 = UINT8_MAX;
	uint8_t x1480 = 2U;
	volatile int32_t t19 = -6488239;

	t19 = (x1477<=(x1478|(x1479<<x1480)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1581 = -1;
	static int64_t x1582 = INT64_MIN;
	uint8_t x1584 = 0U;
	static int32_t t20 = -239;

	t20 = (x1581<=(x1582|(x1583<<x1584)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint8_t x1593 = 5U;
	uint8_t x1595 = 27U;
	static int32_t t21 = -566784;

	t21 = (x1593<=(x1594|(x1595<<x1596)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x1606 = 18U;
	static uint64_t x1607 = 819124LLU;
	int16_t x1608 = 0;
	volatile int32_t t22 = -2587886;

	t22 = (x1605<=(x1606|(x1607<<x1608)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1613 = -1;
	int64_t x1614 = 8360032LL;
	int8_t x1615 = INT8_MAX;
	int8_t x1616 = 0;
	volatile int32_t t23 = 52;

	t23 = (x1613<=(x1614|(x1615<<x1616)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1661 = 0U;
	int8_t x1662 = INT8_MIN;
	int8_t x1663 = 49;
	static int32_t t24 = 127393103;

	t24 = (x1661<=(x1662|(x1663<<x1664)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1666 = 43U;
	int32_t t25 = -445487;

	t25 = (x1665<=(x1666|(x1667<<x1668)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1893 = INT32_MIN;
	static int64_t x1894 = -49506LL;
	static uint8_t x1895 = 0U;
	static int8_t x1896 = 4;
	volatile int32_t t26 = -13481930;

	t26 = (x1893<=(x1894|(x1895<<x1896)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x1949 = 26949U;
	int64_t x1950 = 171165685986160LL;
	uint64_t x1951 = UINT64_MAX;
	volatile int8_t x1952 = 0;
	static volatile int32_t t27 = 62400;

	t27 = (x1949<=(x1950|(x1951<<x1952)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1953 = 1;
	uint8_t x1956 = 30U;
	volatile int32_t t28 = 22;

	t28 = (x1953<=(x1954|(x1955<<x1956)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1993 = -1;
	int32_t x1994 = INT32_MAX;
	uint16_t x1995 = UINT16_MAX;
	static uint16_t x1996 = 0U;
	volatile int32_t t29 = 30;

	t29 = (x1993<=(x1994|(x1995<<x1996)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x2145 = INT8_MIN;
	uint16_t x2147 = 5U;
	volatile int32_t t30 = 5;

	t30 = (x2145<=(x2146|(x2147<<x2148)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x2169 = INT32_MAX;
	int8_t x2170 = INT8_MIN;
	uint64_t x2171 = UINT64_MAX;
	static uint8_t x2172 = 0U;
	int32_t t31 = 31;

	t31 = (x2169<=(x2170|(x2171<<x2172)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x2199 = UINT32_MAX;
	uint16_t x2200 = 7U;
	volatile int32_t t32 = 469694972;

	t32 = (x2197<=(x2198|(x2199<<x2200)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x2252 = 1U;
	volatile int32_t t33 = -1287354;

	t33 = (x2249<=(x2250|(x2251<<x2252)));

	if (t33 != 0) { NG(); } else { ; }
	
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


    return 0;
}


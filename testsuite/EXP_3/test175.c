#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x94 = -1;
uint32_t t2 = 4560U;
static uint8_t x346 = UINT8_MAX;
int32_t t5 = 1164149;
static int64_t x419 = 16LL;
int64_t x633 = 3058783LL;
static int8_t x765 = INT8_MAX;
uint32_t t8 = 1907671U;
int8_t x951 = 1;
static uint64_t x1000 = UINT64_MAX;
volatile int32_t t11 = -85;
int8_t x1099 = 9;
static volatile int32_t t12 = -19876;
int64_t x1192 = -1LL;
uint64_t x1213 = 640LLU;
static volatile int8_t x1219 = -1;
static int64_t x1385 = 10344874409050903LL;
uint32_t x1513 = 1823467608U;
uint16_t x1516 = 0U;
int8_t x1593 = INT8_MIN;
static volatile int32_t x1595 = -1;
int8_t x1644 = INT8_MIN;


void f0(void) {
	static int16_t x41 = 0;
	uint8_t x42 = 36U;
	static int8_t x43 = -1;
	volatile int8_t x44 = -1;
	volatile int32_t t0 = 491378;

	t0 = ((x41+x42)<<(x43-x44));

	if (t0 != 36) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x93 = 1599944LL;
	int16_t x95 = -1;
	int8_t x96 = -1;
	volatile int64_t t1 = -3LL;

	t1 = ((x93+x94)<<(x95-x96));

	if (t1 != 1599943LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x165 = UINT32_MAX;
	int32_t x166 = -1;
	int32_t x167 = -1;
	int16_t x168 = -1;

	t2 = ((x165+x166)<<(x167-x168));

	if (t2 != 4294967294U) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x201 = 1U;
	uint32_t x202 = 7289U;
	uint8_t x203 = 12U;
	int8_t x204 = -1;
	static volatile uint32_t t3 = 0U;

	t3 = ((x201+x202)<<(x203-x204));

	if (t3 != 59719680U) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x345 = 48755472U;
	uint64_t x347 = UINT64_MAX;
	int8_t x348 = -1;
	volatile uint32_t t4 = 44540U;

	t4 = ((x345+x346)<<(x347-x348));

	if (t4 != 48755727U) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x397 = INT16_MAX;
	uint16_t x398 = 162U;
	int32_t x399 = -1;
	int32_t x400 = -5;

	t5 = ((x397+x398)<<(x399-x400));

	if (t5 != 526864) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x417 = UINT64_MAX;
	static int16_t x418 = -10042;
	volatile uint8_t x420 = 1U;
	volatile uint64_t t6 = 2011386484951843LLU;

	t6 = ((x417+x418)<<(x419-x420));

	if (t6 != 18446744073380462592LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x634 = 34U;
	static int16_t x635 = 0;
	int8_t x636 = -16;
	volatile int64_t t7 = -6329941071LL;

	t7 = ((x633+x634)<<(x635-x636));

	if (t7 != 200462630912LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x766 = 1941U;
	uint16_t x767 = 0U;
	uint32_t x768 = UINT32_MAX;

	t8 = ((x765+x766)<<(x767-x768));

	if (t8 != 4136U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x873 = 0U;
	uint64_t x874 = 208248242773681406LLU;
	int64_t x875 = -1LL;
	int32_t x876 = -1;
	uint64_t t9 = 147LLU;

	t9 = ((x873+x874)<<(x875-x876));

	if (t9 != 208248242773681406LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x949 = INT16_MIN;
	volatile uint32_t x950 = 1963427U;
	int16_t x952 = -1;
	uint32_t t10 = 2412359U;

	t10 = ((x949+x950)<<(x951-x952));

	if (t10 != 7722636U) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x997 = 2593U;
	static volatile uint16_t x998 = 14U;
	static int32_t x999 = -1;

	t11 = ((x997+x998)<<(x999-x1000));

	if (t11 != 2607) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x1097 = UINT16_MAX;
	int8_t x1098 = 31;
	static int64_t x1100 = -1LL;

	t12 = ((x1097+x1098)<<(x1099-x1100));

	if (t12 != 67139584) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x1117 = 252957LLU;
	static uint8_t x1118 = UINT8_MAX;
	volatile uint8_t x1119 = 8U;
	volatile int64_t x1120 = -1LL;
	static volatile uint64_t t13 = 305619464862906598LLU;

	t13 = ((x1117+x1118)<<(x1119-x1120));

	if (t13 != 129644544LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x1165 = 1U;
	volatile uint8_t x1166 = 2U;
	int64_t x1167 = -1LL;
	static int8_t x1168 = -3;
	volatile int32_t t14 = 116075;

	t14 = ((x1165+x1166)<<(x1167-x1168));

	if (t14 != 12) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint64_t x1189 = 15977LLU;
	static int64_t x1190 = -1LL;
	static int16_t x1191 = -1;
	uint64_t t15 = 333557LLU;

	t15 = ((x1189+x1190)<<(x1191-x1192));

	if (t15 != 15976LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x1201 = 151488389767039LL;
	int32_t x1202 = -959;
	int8_t x1203 = -1;
	int8_t x1204 = -14;
	static int64_t t16 = 25071244030LL;

	t16 = ((x1201+x1202)<<(x1203-x1204));

	if (t16 != 1240992888963727360LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x1214 = 3LLU;
	int16_t x1215 = 1;
	int8_t x1216 = 1;
	volatile uint64_t t17 = 113756923997452LLU;

	t17 = ((x1213+x1214)<<(x1215-x1216));

	if (t17 != 643LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1217 = -1;
	uint16_t x1218 = UINT16_MAX;
	int8_t x1220 = -4;
	volatile int32_t t18 = -8091347;

	t18 = ((x1217+x1218)<<(x1219-x1220));

	if (t18 != 524272) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x1386 = 7040U;
	int16_t x1387 = INT16_MIN;
	static int16_t x1388 = INT16_MIN;
	volatile int64_t t19 = -1591079348992952LL;

	t19 = ((x1385+x1386)<<(x1387-x1388));

	if (t19 != 10344874409057943LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x1389 = 244239258754180LL;
	uint8_t x1390 = 0U;
	uint8_t x1391 = 8U;
	int8_t x1392 = -7;
	volatile int64_t t20 = 2338631121LL;

	t20 = ((x1389+x1390)<<(x1391-x1392));

	if (t20 != 8003232030856970240LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1514 = INT32_MIN;
	uint16_t x1515 = 14U;
	static uint32_t t21 = 451U;

	t21 = ((x1513+x1514)<<(x1515-x1516));

	if (t21 != 4195745792U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1594 = 178;
	volatile int16_t x1596 = -1;
	int32_t t22 = -17;

	t22 = ((x1593+x1594)<<(x1595-x1596));

	if (t22 != 50) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1597 = -1;
	int8_t x1598 = INT8_MAX;
	volatile int32_t x1599 = INT32_MIN;
	static int32_t x1600 = INT32_MIN;
	int32_t t23 = 1;

	t23 = ((x1597+x1598)<<(x1599-x1600));

	if (t23 != 126) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1641 = 1628424304772276549LL;
	uint32_t x1642 = 7369U;
	static int8_t x1643 = INT8_MIN;
	volatile int64_t t24 = -5821LL;

	t24 = ((x1641+x1642)<<(x1643-x1644));

	if (t24 != 1628424304772283918LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1877 = INT8_MAX;
	uint32_t x1878 = 2980961U;
	uint64_t x1879 = UINT64_MAX;
	volatile int16_t x1880 = -1;
	uint32_t t25 = 85U;

	t25 = ((x1877+x1878)<<(x1879-x1880));

	if (t25 != 2981088U) { NG(); } else { ; }
	
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


    return 0;
}


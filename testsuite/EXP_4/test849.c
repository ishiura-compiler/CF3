#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x60 = 19U;
static volatile int32_t t0 = 71044030;
volatile int64_t t2 = -7LL;
int16_t x382 = INT16_MAX;
static int8_t x384 = 1;
uint64_t x415 = 48567886LLU;
static int8_t x444 = 8;
int8_t x494 = INT8_MIN;
static int8_t x495 = 0;
static volatile uint32_t x551 = 4784496U;
static volatile int32_t t8 = 102341;
int64_t x647 = 1159100131805253LL;
volatile uint16_t x648 = 1U;
uint16_t x802 = 120U;
int8_t x942 = 1;
volatile int64_t x969 = -1LL;
int8_t x1046 = -1;
uint32_t x1147 = 61909U;
int16_t x1166 = -623;
uint32_t x1335 = 8151U;
uint16_t x1391 = 20U;
int8_t x1613 = INT8_MAX;
volatile uint8_t x1616 = 1U;
static uint8_t x1668 = 2U;
static uint64_t x1697 = 259939LLU;
volatile int32_t x1745 = -1;
int8_t x1747 = 0;
static int8_t x1748 = 0;
static int8_t x1832 = 1;


void f0(void) {
	static int32_t x57 = INT32_MIN;
	int32_t x58 = 6129478;
	uint8_t x59 = 60U;

	t0 = (x57/(x58+(x59<<x60)));

	if (t0 != -57) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x121 = INT64_MIN;
	int64_t x122 = 46LL;
	uint8_t x123 = UINT8_MAX;
	int32_t x124 = 20;
	int64_t t1 = 1455812LL;

	t1 = (x121/(x122+(x123<<x124)));

	if (t1 != -34494476505LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x373 = INT64_MIN;
	int16_t x374 = -1;
	uint8_t x375 = UINT8_MAX;
	uint8_t x376 = 1U;

	t2 = (x373/(x374+(x375<<x376)));

	if (t2 != -18120573746276573LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x381 = -8;
	int64_t x383 = 7527928666LL;
	int64_t t3 = -21555772689225689LL;

	t3 = (x381/(x382+(x383<<x384)));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x413 = INT8_MIN;
	int32_t x414 = -445384276;
	volatile uint8_t x416 = 11U;
	volatile uint64_t t4 = 547121LLU;

	t4 = (x413/(x414+(x415<<x416)));

	if (t4 != 186290016LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x441 = INT8_MIN;
	static int64_t x442 = 4033LL;
	uint16_t x443 = 36U;
	volatile int64_t t5 = -192927289034034880LL;

	t5 = (x441/(x442+(x443<<x444)));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x493 = INT16_MAX;
	uint8_t x496 = 0U;
	volatile int32_t t6 = 1;

	t6 = (x493/(x494+(x495<<x496)));

	if (t6 != -255) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x549 = 2661U;
	int32_t x550 = INT32_MIN;
	uint64_t x552 = 24LLU;
	static volatile uint32_t t7 = 30378832U;

	t7 = (x549/(x550+(x551<<x552)));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x577 = 1U;
	int16_t x578 = INT16_MAX;
	uint16_t x579 = UINT16_MAX;
	int8_t x580 = 5;

	t8 = (x577/(x578+(x579<<x580)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x645 = 768255LL;
	volatile int8_t x646 = 3;
	static int64_t t9 = 49154101872LL;

	t9 = (x645/(x646+(x647<<x648)));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x801 = 1;
	int64_t x803 = 3166LL;
	static int8_t x804 = 1;
	int64_t t10 = -4488LL;

	t10 = (x801/(x802+(x803<<x804)));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x933 = 514062338915260LLU;
	int8_t x934 = -41;
	uint8_t x935 = 6U;
	static volatile uint8_t x936 = 20U;
	volatile uint64_t t11 = 168592635LLU;

	t11 = (x933/(x934+(x935<<x936)));

	if (t11 != 81708540LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x941 = 3641413LLU;
	uint16_t x943 = 2009U;
	uint32_t x944 = 4U;
	uint64_t t12 = 1LLU;

	t12 = (x941/(x942+(x943<<x944)));

	if (t12 != 113LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x970 = -1;
	static volatile uint8_t x971 = 2U;
	static uint64_t x972 = 4LLU;
	volatile int64_t t13 = -1527139801908675LL;

	t13 = (x969/(x970+(x971<<x972)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x1045 = INT64_MIN;
	volatile uint32_t x1047 = 83566U;
	uint8_t x1048 = 1U;
	int64_t t14 = -592179169LL;

	t14 = (x1045/(x1046+(x1047<<x1048)));

	if (t14 != -55186482680381LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x1129 = INT8_MAX;
	static uint32_t x1130 = 200922044U;
	uint8_t x1131 = 84U;
	static int32_t x1132 = 0;
	static volatile uint32_t t15 = 64606700U;

	t15 = (x1129/(x1130+(x1131<<x1132)));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x1145 = 5U;
	static volatile int64_t x1146 = INT64_MIN;
	volatile uint32_t x1148 = 9U;
	static volatile int64_t t16 = 1544866LL;

	t16 = (x1145/(x1146+(x1147<<x1148)));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x1165 = 685U;
	uint8_t x1167 = 2U;
	uint8_t x1168 = 8U;
	volatile int32_t t17 = -3887;

	t17 = (x1165/(x1166+(x1167<<x1168)));

	if (t17 != -6) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x1261 = UINT32_MAX;
	int16_t x1262 = -1;
	int8_t x1263 = 0;
	int8_t x1264 = 1;
	volatile uint32_t t18 = 588U;

	t18 = (x1261/(x1262+(x1263<<x1264)));

	if (t18 != 1U) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x1333 = 4U;
	volatile int32_t x1334 = INT32_MAX;
	uint8_t x1336 = 3U;
	uint32_t t19 = 5U;

	t19 = (x1333/(x1334+(x1335<<x1336)));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x1389 = INT64_MIN;
	uint64_t x1390 = 9LLU;
	static int64_t x1392 = 0LL;
	static uint64_t t20 = 542668475651016LLU;

	t20 = (x1389/(x1390+(x1391<<x1392)));

	if (t20 != 318047311615681924LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1614 = -339290;
	volatile uint16_t x1615 = 3U;
	volatile int32_t t21 = 2;

	t21 = (x1613/(x1614+(x1615<<x1616)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x1665 = 1942;
	int8_t x1666 = INT8_MIN;
	int16_t x1667 = INT16_MAX;
	volatile int32_t t22 = 95;

	t22 = (x1665/(x1666+(x1667<<x1668)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1698 = INT64_MIN;
	uint64_t x1699 = 702990233451LLU;
	uint16_t x1700 = 6U;
	volatile uint64_t t23 = 6817LLU;

	t23 = (x1697/(x1698+(x1699<<x1700)));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1746 = -1;
	static int32_t t24 = 117447151;

	t24 = (x1745/(x1746+(x1747<<x1748)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1777 = INT16_MAX;
	int8_t x1778 = 4;
	static volatile uint32_t x1779 = 13577U;
	int64_t x1780 = 0LL;
	uint32_t t25 = 34925U;

	t25 = (x1777/(x1778+(x1779<<x1780)));

	if (t25 != 2U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1785 = INT32_MAX;
	int32_t x1786 = -1;
	uint16_t x1787 = 32386U;
	uint32_t x1788 = 0U;
	volatile int32_t t26 = 177581820;

	t26 = (x1785/(x1786+(x1787<<x1788)));

	if (t26 != 66311) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1829 = 5U;
	int64_t x1830 = -60881336529903972LL;
	static int8_t x1831 = 0;
	int64_t t27 = -6LL;

	t27 = (x1829/(x1830+(x1831<<x1832)));

	if (t27 != 0LL) { NG(); } else { ; }
	
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


    return 0;
}


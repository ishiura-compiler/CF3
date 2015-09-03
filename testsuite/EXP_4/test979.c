#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x150 = UINT8_MAX;
uint64_t x183 = 515196814154049583LLU;
static int32_t x297 = -11505709;
static int32_t t3 = 785;
static int32_t x565 = -1;
uint64_t x567 = 1073487565910999LLU;
uint64_t t5 = 738LLU;
int8_t x630 = -1;
static uint64_t x991 = 2066367810211LLU;
uint64_t t11 = 159164231426LLU;
int64_t x1058 = -1LL;
uint8_t x1059 = 6U;
uint64_t t12 = 469769744987LLU;
volatile uint8_t x1156 = 8U;
int32_t t17 = -54;
int32_t x1467 = 366;
uint16_t x1468 = 14U;


void f0(void) {
	static int32_t x149 = 349;
	uint8_t x151 = 1U;
	uint16_t x152 = 1U;
	volatile int32_t t0 = -826461;

	t0 = (x149/(x150&(x151<<x152)));

	if (t0 != 174) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x181 = INT64_MAX;
	int64_t x182 = -15106453018367387LL;
	volatile uint8_t x184 = 40U;
	uint64_t t1 = 49LLU;

	t1 = (x181/(x182&(x183<<x184)));

	if (t1 != 7LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x298 = INT32_MAX;
	int64_t x299 = 512170202LL;
	volatile uint64_t x300 = 1LLU;
	int64_t t2 = -18204121905380050LL;

	t2 = (x297/(x298&(x299<<x300)));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x517 = INT32_MAX;
	uint16_t x518 = 2074U;
	uint8_t x519 = 18U;
	uint8_t x520 = 7U;

	t3 = (x517/(x518&(x519<<x520)));

	if (t3 != 1048575) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x566 = 736LLU;
	uint8_t x568 = 0U;
	static volatile uint64_t t4 = 16702798481809165LLU;

	t4 = (x565/(x566&(x567<<x568)));

	if (t4 != 26202761468337431LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x621 = UINT8_MAX;
	uint64_t x622 = UINT64_MAX;
	uint8_t x623 = 14U;
	volatile uint8_t x624 = 0U;

	t5 = (x621/(x622&(x623<<x624)));

	if (t5 != 18LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x629 = INT16_MAX;
	int64_t x631 = 109804667617LL;
	static int8_t x632 = 25;
	volatile int64_t t6 = -8LL;

	t6 = (x629/(x630&(x631<<x632)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x877 = 2055076882337LL;
	int16_t x878 = -52;
	uint64_t x879 = 2407953353023901388LLU;
	volatile uint16_t x880 = 6U;
	uint64_t t7 = 654111755780519LLU;

	t7 = (x877/(x878&(x879<<x880)));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x969 = 1193952;
	int8_t x970 = -18;
	uint32_t x971 = 4594U;
	uint32_t x972 = 1U;
	static volatile uint32_t t8 = 462U;

	t8 = (x969/(x970&(x971<<x972)));

	if (t8 != 129U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x985 = -4052;
	uint64_t x986 = UINT64_MAX;
	uint8_t x987 = 15U;
	static int16_t x988 = 2;
	volatile uint64_t t9 = 3770LLU;

	t9 = (x985/(x986&(x987<<x988)));

	if (t9 != 307445734561825792LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x989 = -1LL;
	int16_t x990 = 94;
	int16_t x992 = 0;
	uint64_t t10 = 3602237388285907306LLU;

	t10 = (x989/(x990&(x991<<x992)));

	if (t10 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x1041 = INT64_MIN;
	uint64_t x1042 = 1067205156243582570LLU;
	int32_t x1043 = INT32_MAX;
	static int8_t x1044 = 0;

	t11 = (x1041/(x1042&(x1043<<x1044)));

	if (t11 != 4892633453LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x1057 = 490718355260757LLU;
	uint8_t x1060 = 4U;

	t12 = (x1057/(x1058&(x1059<<x1060)));

	if (t12 != 5111649533966LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x1153 = INT32_MIN;
	uint32_t x1154 = UINT32_MAX;
	uint64_t x1155 = 322469852814LLU;
	uint64_t t13 = 83729328271LLU;

	t13 = (x1153/(x1154&(x1155<<x1156)));

	if (t13 != 6126672288LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x1213 = 23172907U;
	static int8_t x1214 = -1;
	int16_t x1215 = 20;
	static int16_t x1216 = 6;
	uint32_t t14 = 25577738U;

	t14 = (x1213/(x1214&(x1215<<x1216)));

	if (t14 != 18103U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x1225 = -1;
	uint64_t x1226 = 44LLU;
	int64_t x1227 = 1704856302875LL;
	int16_t x1228 = 1;
	uint64_t t15 = 879549LLU;

	t15 = (x1225/(x1226&(x1227<<x1228)));

	if (t15 != 512409557603043100LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x1325 = 8;
	int32_t x1326 = -1;
	uint8_t x1327 = 7U;
	uint16_t x1328 = 0U;
	volatile int32_t t16 = -28894307;

	t16 = (x1325/(x1326&(x1327<<x1328)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x1337 = INT16_MIN;
	volatile int16_t x1338 = INT16_MAX;
	static uint8_t x1339 = 1U;
	int32_t x1340 = 0;

	t17 = (x1337/(x1338&(x1339<<x1340)));

	if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x1353 = INT8_MIN;
	uint16_t x1354 = 3831U;
	uint16_t x1355 = 552U;
	int16_t x1356 = 0;
	volatile int32_t t18 = 4;

	t18 = (x1353/(x1354&(x1355<<x1356)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x1465 = 12U;
	int16_t x1466 = -1;
	uint32_t t19 = 410543854U;

	t19 = (x1465/(x1466&(x1467<<x1468)));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x1561 = -350288000LL;
	static int16_t x1562 = -1;
	int32_t x1563 = 569173;
	static uint8_t x1564 = 5U;
	static volatile int64_t t20 = 1023038LL;

	t20 = (x1561/(x1562&(x1563<<x1564)));

	if (t20 != -19LL) { NG(); } else { ; }
	
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


    return 0;
}


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x18 = -57;
volatile int32_t t0 = 318;
static int8_t x250 = INT8_MIN;
int32_t t1 = -681981;
static int8_t x280 = 1;
int64_t x349 = -1LL;
int16_t x352 = -1;
static volatile uint8_t x645 = 32U;
uint16_t x646 = UINT16_MAX;
int64_t x647 = INT64_MIN;
uint32_t x677 = 14371U;
uint32_t x796 = UINT32_MAX;
int16_t x807 = -1;
static int8_t x1022 = INT8_MAX;
volatile int32_t x1024 = 6;
uint32_t x1034 = 3816006U;
volatile uint8_t x1181 = UINT8_MAX;
int8_t x1183 = -1;
int32_t t14 = -79863;
uint32_t x1321 = 62U;
int64_t x1590 = INT64_MAX;
volatile uint8_t x1963 = 26U;
uint32_t x2037 = UINT32_MAX;
int8_t x2038 = INT8_MAX;


void f0(void) {
	static int32_t x17 = 16866;
	int8_t x19 = -1;
	uint64_t x20 = UINT64_MAX;

	t0 = ((x17+x18)<<(x19^x20));

	if (t0 != 16809) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x249 = 5274U;
	volatile int8_t x251 = 12;
	uint32_t x252 = 1U;

	t1 = ((x249+x250)<<(x251^x252));

	if (t1 != 42156032) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x277 = INT8_MIN;
	volatile uint16_t x278 = 347U;
	int16_t x279 = 10;
	volatile int32_t t2 = 3314953;

	t2 = ((x277+x278)<<(x279^x280));

	if (t2 != 448512) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x350 = 8436889187LLU;
	int64_t x351 = -1LL;
	static uint64_t t3 = 18633235LLU;

	t3 = ((x349+x350)<<(x351^x352));

	if (t3 != 8436889186LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x425 = 3135961LLU;
	volatile int8_t x426 = INT8_MAX;
	uint64_t x427 = UINT64_MAX;
	int32_t x428 = -1;
	uint64_t t4 = 356903LLU;

	t4 = ((x425+x426)<<(x427^x428));

	if (t4 != 3136088LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x617 = 27U;
	volatile uint64_t x618 = 386LLU;
	static int8_t x619 = -1;
	static int8_t x620 = -1;
	volatile uint64_t t5 = 1963267LLU;

	t5 = ((x617+x618)<<(x619^x620));

	if (t5 != 413LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x648 = INT64_MIN;
	static int32_t t6 = 58;

	t6 = ((x645+x646)<<(x647^x648));

	if (t6 != 65567) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x678 = INT32_MIN;
	volatile uint8_t x679 = 12U;
	uint64_t x680 = 2LLU;
	static volatile uint32_t t7 = 47844420U;

	t7 = ((x677+x678)<<(x679^x680));

	if (t7 != 235454464U) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x793 = 13636285429867LLU;
	volatile int64_t x794 = -157565LL;
	int16_t x795 = -1;
	uint64_t t8 = 683580371048982855LLU;

	t8 = ((x793+x794)<<(x795^x796));

	if (t8 != 13636285272302LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x805 = -1LL;
	uint16_t x806 = 3U;
	uint64_t x808 = UINT64_MAX;
	int64_t t9 = -1042925737LL;

	t9 = ((x805+x806)<<(x807^x808));

	if (t9 != 2LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint8_t x1009 = UINT8_MAX;
	volatile uint64_t x1010 = 152674LLU;
	uint8_t x1011 = 19U;
	uint8_t x1012 = 0U;
	volatile uint64_t t10 = 60583480LLU;

	t10 = ((x1009+x1010)<<(x1011^x1012));

	if (t10 != 80178839552LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x1021 = -1;
	int8_t x1023 = 0;
	volatile int32_t t11 = -397;

	t11 = ((x1021+x1022)<<(x1023^x1024));

	if (t11 != 8064) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x1033 = INT16_MIN;
	int8_t x1035 = INT8_MIN;
	int8_t x1036 = INT8_MIN;
	uint32_t t12 = 289071454U;

	t12 = ((x1033+x1034)<<(x1035^x1036));

	if (t12 != 3783238U) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x1041 = 192237747283445166LLU;
	int32_t x1042 = INT32_MIN;
	volatile int8_t x1043 = 4;
	uint8_t x1044 = 6U;
	static volatile uint64_t t13 = 798508479752686LLU;

	t13 = ((x1041+x1042)<<(x1043^x1044));

	if (t13 != 768950980543846072LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x1182 = INT8_MIN;
	int16_t x1184 = -1;

	t14 = ((x1181+x1182)<<(x1183^x1184));

	if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x1322 = UINT8_MAX;
	int32_t x1323 = -1;
	volatile uint64_t x1324 = UINT64_MAX;
	uint32_t t15 = 891411214U;

	t15 = ((x1321+x1322)<<(x1323^x1324));

	if (t15 != 317U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x1589 = UINT64_MAX;
	int16_t x1591 = INT16_MIN;
	int16_t x1592 = INT16_MIN;
	volatile uint64_t t16 = 1347LLU;

	t16 = ((x1589+x1590)<<(x1591^x1592));

	if (t16 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x1661 = INT32_MIN;
	uint64_t x1662 = 4127935246LLU;
	uint16_t x1663 = 0U;
	uint16_t x1664 = 49U;
	volatile uint64_t t17 = 243441211LLU;

	t17 = ((x1661+x1662)<<(x1663^x1664));

	if (t17 != 10816520405037088768LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x1737 = 3U;
	uint8_t x1738 = UINT8_MAX;
	uint16_t x1739 = UINT16_MAX;
	volatile uint16_t x1740 = UINT16_MAX;
	volatile int32_t t18 = -1;

	t18 = ((x1737+x1738)<<(x1739^x1740));

	if (t18 != 258) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x1749 = INT8_MIN;
	static volatile uint8_t x1750 = UINT8_MAX;
	static volatile int8_t x1751 = -2;
	int8_t x1752 = -2;
	int32_t t19 = 29091;

	t19 = ((x1749+x1750)<<(x1751^x1752));

	if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x1961 = 15U;
	int8_t x1962 = INT8_MIN;
	uint8_t x1964 = 8U;
	static volatile uint32_t t20 = 1U;

	t20 = ((x1961+x1962)<<(x1963^x1964));

	if (t20 != 4265345024U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x2039 = -30LL;
	uint64_t x2040 = UINT64_MAX;
	uint32_t t21 = 39U;

	t21 = ((x2037+x2038)<<(x2039^x2040));

	if (t21 != 3221225472U) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x2141 = 581U;
	uint32_t x2142 = 0U;
	int32_t x2143 = -1;
	uint32_t x2144 = UINT32_MAX;
	volatile uint32_t t22 = 21U;

	t22 = ((x2141+x2142)<<(x2143^x2144));

	if (t22 != 581U) { NG(); } else { ; }
	
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


    return 0;
}


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x93 = INT8_MIN;
int8_t x117 = INT8_MIN;
int16_t x189 = -165;
volatile uint8_t x190 = 0U;
static int32_t t2 = -7;
volatile int64_t x462 = INT64_MAX;
volatile int64_t t6 = -44503LL;
static uint64_t x726 = UINT64_MAX;
int8_t x727 = -13;
int64_t x728 = 0LL;
int32_t x902 = INT32_MAX;
uint8_t x1339 = 42U;
uint32_t x1510 = 7U;
uint32_t x1593 = 7U;
int32_t t14 = 118337467;
uint32_t x1727 = 909989699U;
int8_t x1728 = 0;
int8_t x1850 = INT8_MIN;
volatile int64_t x1925 = INT64_MIN;


void f0(void) {
	volatile int64_t x94 = 1615968014570206LL;
	static int64_t x95 = INT64_MIN;
	static int16_t x96 = 0;
	int32_t t0 = -63701;

	t0 = (x93/((x94<=x95)==x96));

	if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x118 = -7;
	uint32_t x119 = 2036455U;
	int64_t x120 = 0LL;
	int32_t t1 = 2050;

	t1 = (x117/((x118<=x119)==x120));

	if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x191 = 3087953813304642448LLU;
	static uint8_t x192 = 1U;

	t2 = (x189/((x190<=x191)==x192));

	if (t2 != -165) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x209 = INT32_MIN;
	int16_t x210 = -2407;
	int64_t x211 = -1LL;
	int8_t x212 = 1;
	volatile int32_t t3 = INT32_MIN;

	t3 = (x209/((x210<=x211)==x212));

	if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x317 = INT16_MIN;
	volatile int64_t x318 = INT64_MIN;
	uint16_t x319 = UINT16_MAX;
	static int64_t x320 = 1LL;
	volatile int32_t t4 = -2900;

	t4 = (x317/((x318<=x319)==x320));

	if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x325 = 0LLU;
	int32_t x326 = -1;
	int32_t x327 = INT32_MAX;
	uint8_t x328 = 1U;
	uint64_t t5 = 65516LLU;

	t5 = (x325/((x326<=x327)==x328));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x461 = -1LL;
	uint16_t x463 = UINT16_MAX;
	static volatile uint8_t x464 = 0U;

	t6 = (x461/((x462<=x463)==x464));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x533 = -4;
	int16_t x534 = INT16_MIN;
	static int8_t x535 = INT8_MIN;
	volatile uint32_t x536 = 1U;
	int32_t t7 = -800;

	t7 = (x533/((x534<=x535)==x536));

	if (t7 != -4) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x725 = INT16_MIN;
	int32_t t8 = 123987;

	t8 = (x725/((x726<=x727)==x728));

	if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x901 = -1;
	uint64_t x903 = UINT64_MAX;
	static int8_t x904 = 1;
	volatile int32_t t9 = 156110;

	t9 = (x901/((x902<=x903)==x904));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x1045 = 41U;
	uint32_t x1046 = 2U;
	int64_t x1047 = 3840382926739750LL;
	volatile int8_t x1048 = 1;
	static int32_t t10 = 1;

	t10 = (x1045/((x1046<=x1047)==x1048));

	if (t10 != 41) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x1337 = INT8_MAX;
	int16_t x1338 = 64;
	uint16_t x1340 = 0U;
	volatile int32_t t11 = 11947;

	t11 = (x1337/((x1338<=x1339)==x1340));

	if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x1509 = INT8_MIN;
	int64_t x1511 = INT64_MAX;
	static volatile int8_t x1512 = 1;
	volatile int32_t t12 = 93298873;

	t12 = (x1509/((x1510<=x1511)==x1512));

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x1594 = 477U;
	static uint32_t x1595 = UINT32_MAX;
	int16_t x1596 = 1;
	volatile uint32_t t13 = 1565802758U;

	t13 = (x1593/((x1594<=x1595)==x1596));

	if (t13 != 7U) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x1685 = INT8_MIN;
	uint8_t x1686 = 125U;
	static uint64_t x1687 = 3972312826LLU;
	volatile uint16_t x1688 = 1U;

	t14 = (x1685/((x1686<=x1687)==x1688));

	if (t14 != -128) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x1705 = 15U;
	int8_t x1706 = INT8_MIN;
	static uint64_t x1707 = UINT64_MAX;
	int8_t x1708 = 1;
	int32_t t15 = 49350433;

	t15 = (x1705/((x1706<=x1707)==x1708));

	if (t15 != 15) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x1725 = -5473;
	int8_t x1726 = INT8_MIN;
	volatile int32_t t16 = 116877;

	t16 = (x1725/((x1726<=x1727)==x1728));

	if (t16 != -5473) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x1849 = UINT8_MAX;
	volatile uint8_t x1851 = 2U;
	uint8_t x1852 = 1U;
	int32_t t17 = -51;

	t17 = (x1849/((x1850<=x1851)==x1852));

	if (t17 != 255) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x1926 = 1969U;
	uint8_t x1927 = UINT8_MAX;
	static int32_t x1928 = 0;
	int64_t t18 = INT64_MIN;

	t18 = (x1925/((x1926<=x1927)==x1928));

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
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


    return 0;
}


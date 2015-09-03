#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x78 = 45;
int64_t x79 = INT64_MIN;
int16_t x158 = 14;
uint32_t x221 = 2U;
volatile int32_t t3 = 1905;
volatile uint64_t x369 = 1122629068240616764LLU;
static volatile uint8_t x375 = 15U;
int32_t x376 = INT32_MIN;
int32_t t5 = 70;
uint8_t x414 = 18U;
int32_t x415 = 6886;
static int32_t t6 = -1955742;
static volatile uint64_t x605 = 13749942LLU;
volatile int16_t x606 = 0;
static uint8_t x774 = 0U;
int8_t x875 = -10;
uint64_t x876 = 59LLU;
static volatile int32_t x1059 = -1;
static int32_t t20 = -2409;
int64_t x1132 = 231117LL;
static volatile uint8_t x1174 = 1U;
int32_t t22 = -2379999;
volatile int64_t x1187 = -243295LL;
int32_t t23 = -30756611;
uint16_t x1267 = 8488U;
int32_t x1303 = INT32_MAX;
volatile uint64_t x1314 = 1LLU;
int16_t x1315 = -12;
int16_t x1332 = INT16_MIN;
static int32_t t30 = 239708;
int16_t x1635 = -6;
volatile int8_t x1636 = INT8_MIN;
static uint64_t x1665 = 303LLU;


void f0(void) {
	uint64_t x77 = 79LLU;
	static uint16_t x80 = UINT16_MAX;
	volatile int32_t t0 = 8810476;

	t0 = ((x77<<x78)<=(x79<x80));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x157 = 2LLU;
	int64_t x159 = -1LL;
	int64_t x160 = INT64_MIN;
	static int32_t t1 = 69818379;

	t1 = ((x157<<x158)<=(x159<x160));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x181 = 1U;
	volatile uint8_t x182 = 2U;
	int8_t x183 = 1;
	volatile int64_t x184 = INT64_MIN;
	volatile int32_t t2 = 12460665;

	t2 = ((x181<<x182)<=(x183<x184));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x222 = 0U;
	uint64_t x223 = 3749618872445839LLU;
	int32_t x224 = -138;

	t3 = ((x221<<x222)<=(x223<x224));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x370 = 2U;
	volatile int16_t x371 = INT16_MAX;
	uint8_t x372 = 27U;
	volatile int32_t t4 = 36936;

	t4 = ((x369<<x370)<=(x371<x372));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x373 = 5LLU;
	uint64_t x374 = 6LLU;

	t5 = ((x373<<x374)<=(x375<x376));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x413 = 249U;
	int32_t x416 = INT32_MIN;

	t6 = ((x413<<x414)<=(x415<x416));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x545 = INT64_MAX;
	uint8_t x546 = 0U;
	static volatile int16_t x547 = 6881;
	int32_t x548 = -109666434;
	int32_t t7 = 10;

	t7 = ((x545<<x546)<=(x547<x548));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x557 = 0U;
	uint32_t x558 = 0U;
	static volatile uint32_t x559 = UINT32_MAX;
	static uint64_t x560 = 917LLU;
	static volatile int32_t t8 = 17;

	t8 = ((x557<<x558)<=(x559<x560));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x581 = 75U;
	int16_t x582 = 7;
	static uint8_t x583 = 31U;
	int64_t x584 = INT64_MIN;
	volatile int32_t t9 = -3200;

	t9 = ((x581<<x582)<=(x583<x584));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x607 = INT8_MIN;
	volatile uint32_t x608 = 10325378U;
	static int32_t t10 = -265696879;

	t10 = ((x605<<x606)<=(x607<x608));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x621 = 944;
	uint8_t x622 = 1U;
	int8_t x623 = INT8_MIN;
	int16_t x624 = 778;
	volatile int32_t t11 = 791582;

	t11 = ((x621<<x622)<=(x623<x624));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x693 = 216829916743LLU;
	int16_t x694 = 8;
	uint64_t x695 = UINT64_MAX;
	uint8_t x696 = 0U;
	int32_t t12 = 266399;

	t12 = ((x693<<x694)<=(x695<x696));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x773 = INT16_MAX;
	int16_t x775 = 2;
	int64_t x776 = INT64_MIN;
	volatile int32_t t13 = 18812;

	t13 = ((x773<<x774)<=(x775<x776));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x781 = 20;
	static uint16_t x782 = 17U;
	int8_t x783 = INT8_MIN;
	int8_t x784 = 1;
	volatile int32_t t14 = 2;

	t14 = ((x781<<x782)<=(x783<x784));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x833 = 2U;
	int16_t x834 = 22;
	static volatile int16_t x835 = -1;
	volatile int16_t x836 = 2682;
	int32_t t15 = 3271882;

	t15 = ((x833<<x834)<=(x835<x836));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x845 = UINT64_MAX;
	uint32_t x846 = 2U;
	static volatile uint32_t x847 = 114907708U;
	int32_t x848 = INT32_MIN;
	int32_t t16 = -4;

	t16 = ((x845<<x846)<=(x847<x848));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x873 = 2601U;
	uint8_t x874 = 0U;
	int32_t t17 = 5589;

	t17 = ((x873<<x874)<=(x875<x876));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x909 = INT64_MAX;
	int8_t x910 = 0;
	int16_t x911 = INT16_MIN;
	static int64_t x912 = -3339LL;
	static volatile int32_t t18 = 108494;

	t18 = ((x909<<x910)<=(x911<x912));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1009 = UINT64_MAX;
	uint32_t x1010 = 1U;
	int64_t x1011 = INT64_MIN;
	int32_t x1012 = INT32_MIN;
	int32_t t19 = 210283040;

	t19 = ((x1009<<x1010)<=(x1011<x1012));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x1057 = UINT64_MAX;
	uint32_t x1058 = 12U;
	int16_t x1060 = INT16_MAX;

	t20 = ((x1057<<x1058)<=(x1059<x1060));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1129 = 505628607U;
	static uint16_t x1130 = 17U;
	int32_t x1131 = -262833;
	static int32_t t21 = 135491;

	t21 = ((x1129<<x1130)<=(x1131<x1132));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint32_t x1173 = 5809711U;
	uint32_t x1175 = UINT32_MAX;
	static uint16_t x1176 = UINT16_MAX;

	t22 = ((x1173<<x1174)<=(x1175<x1176));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1185 = 107U;
	int8_t x1186 = 19;
	static int32_t x1188 = INT32_MAX;

	t23 = ((x1185<<x1186)<=(x1187<x1188));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x1249 = UINT64_MAX;
	volatile int8_t x1250 = 5;
	int8_t x1251 = -1;
	int16_t x1252 = INT16_MIN;
	static int32_t t24 = 14041;

	t24 = ((x1249<<x1250)<=(x1251<x1252));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint64_t x1257 = 198709546575546981LLU;
	static uint8_t x1258 = 15U;
	volatile int8_t x1259 = -37;
	int8_t x1260 = INT8_MIN;
	int32_t t25 = -454746298;

	t25 = ((x1257<<x1258)<=(x1259<x1260));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1265 = 16;
	uint16_t x1266 = 0U;
	static volatile uint32_t x1268 = 106925752U;
	int32_t t26 = 3250;

	t26 = ((x1265<<x1266)<=(x1267<x1268));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1301 = 0U;
	volatile uint8_t x1302 = 5U;
	uint8_t x1304 = 5U;
	int32_t t27 = -9177777;

	t27 = ((x1301<<x1302)<=(x1303<x1304));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1313 = 0;
	int16_t x1316 = INT16_MAX;
	int32_t t28 = 23;

	t28 = ((x1313<<x1314)<=(x1315<x1316));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x1329 = 1397U;
	uint16_t x1330 = 7U;
	uint32_t x1331 = 103137476U;
	volatile int32_t t29 = -115;

	t29 = ((x1329<<x1330)<=(x1331<x1332));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x1353 = 8U;
	uint8_t x1354 = 1U;
	int16_t x1355 = 28;
	int8_t x1356 = 1;

	t30 = ((x1353<<x1354)<=(x1355<x1356));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1457 = 6154LLU;
	int8_t x1458 = 0;
	static volatile int8_t x1459 = INT8_MIN;
	int32_t x1460 = -134714436;
	int32_t t31 = 20926514;

	t31 = ((x1457<<x1458)<=(x1459<x1460));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1461 = INT8_MAX;
	int16_t x1462 = 6;
	volatile int64_t x1463 = -31LL;
	uint16_t x1464 = 10U;
	int32_t t32 = -246;

	t32 = ((x1461<<x1462)<=(x1463<x1464));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint8_t x1569 = UINT8_MAX;
	int16_t x1570 = 3;
	static int64_t x1571 = -7946006642296290LL;
	static volatile int16_t x1572 = -1;
	int32_t t33 = 51357;

	t33 = ((x1569<<x1570)<=(x1571<x1572));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1633 = INT16_MAX;
	static uint32_t x1634 = 7U;
	volatile int32_t t34 = -9;

	t34 = ((x1633<<x1634)<=(x1635<x1636));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x1666 = 2U;
	volatile int32_t x1667 = -1;
	volatile uint16_t x1668 = 6U;
	volatile int32_t t35 = -105394;

	t35 = ((x1665<<x1666)<=(x1667<x1668));

	if (t35 != 0) { NG(); } else { ; }
	
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


    return 0;
}


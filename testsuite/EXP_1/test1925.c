#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x99 = 5U;
int16_t x126 = INT16_MAX;
uint64_t t2 = 54LLU;
static uint64_t x501 = 1966LLU;
static int64_t x569 = 60982911LL;
static int16_t x572 = -1;
uint32_t x726 = UINT32_MAX;
int8_t x727 = 0;
int32_t x728 = -1;
uint32_t x821 = UINT32_MAX;
volatile int8_t x823 = 2;
int16_t x824 = INT16_MIN;
volatile uint32_t t8 = 215U;
uint8_t x893 = 0U;
volatile int32_t t10 = -3244;
int16_t x952 = -1;
volatile uint64_t t11 = 2349975609062074LLU;
uint32_t x1281 = 888227574U;
uint32_t t14 = 4440148U;
static volatile int32_t x1304 = INT32_MAX;
int8_t x1489 = INT8_MIN;
static uint16_t x1491 = 14U;
uint16_t x1492 = UINT16_MAX;
int64_t x1500 = INT64_MIN;
int32_t x1505 = INT32_MAX;
int64_t x1526 = -1LL;
int16_t x1528 = -1956;
volatile uint64_t x1557 = UINT64_MAX;
static uint32_t x1558 = UINT32_MAX;
uint64_t t23 = UINT64_MAX;


void f0(void) {
	int16_t x85 = INT16_MIN;
	volatile uint32_t x86 = UINT32_MAX;
	volatile uint16_t x87 = 31U;
	int16_t x88 = 0;
	static volatile uint32_t t0 = 732U;

	t0 = (((x85|x86)<<x87)+x88);

	if (t0 != 2147483648U) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x97 = 50183U;
	volatile int8_t x98 = INT8_MAX;
	static volatile int32_t x100 = INT32_MAX;
	uint32_t t1 = 1U;

	t1 = (((x97|x98)<<x99)+x100);

	if (t1 != 2149093343U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x125 = 957868496077504114LLU;
	uint8_t x127 = 14U;
	static volatile int16_t x128 = 0;

	t2 = (((x125|x126)<<x127)+x128);

	if (t2 != 13984977080983470080LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x141 = -1749325;
	volatile uint32_t x142 = UINT32_MAX;
	int64_t x143 = 1LL;
	int16_t x144 = INT16_MIN;
	volatile uint32_t t3 = 855404848U;

	t3 = (((x141|x142)<<x143)+x144);

	if (t3 != 4294934526U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x497 = -1;
	uint32_t x498 = UINT32_MAX;
	uint8_t x499 = 27U;
	static int8_t x500 = INT8_MIN;
	uint32_t t4 = 385109195U;

	t4 = (((x497|x498)<<x499)+x500);

	if (t4 != 4160749440U) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x502 = -1;
	uint8_t x503 = 33U;
	volatile int16_t x504 = 469;
	volatile uint64_t t5 = 652525390437927486LLU;

	t5 = (((x501|x502)<<x503)+x504);

	if (t5 != 18446744065119617493LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x570 = 0U;
	static volatile int8_t x571 = 0;
	int64_t t6 = -2550LL;

	t6 = (((x569|x570)<<x571)+x572);

	if (t6 != 60982910LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint64_t x725 = 594LLU;
	volatile uint64_t t7 = 3241717110978943LLU;

	t7 = (((x725|x726)<<x727)+x728);

	if (t7 != 4294967294LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x822 = INT32_MIN;

	t8 = (((x821|x822)<<x823)+x824);

	if (t8 != 4294934524U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x889 = INT16_MAX;
	uint8_t x890 = 61U;
	int8_t x891 = 0;
	int8_t x892 = -17;
	static volatile int32_t t9 = -3895510;

	t9 = (((x889|x890)<<x891)+x892);

	if (t9 != 32750) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x894 = 1;
	static uint8_t x895 = 9U;
	uint8_t x896 = UINT8_MAX;

	t10 = (((x893|x894)<<x895)+x896);

	if (t10 != 767) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x949 = 28127780603749LLU;
	int64_t x950 = INT64_MIN;
	static volatile int8_t x951 = 0;

	t11 = (((x949|x950)<<x951)+x952);

	if (t11 != 9223400164635379556LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x1049 = INT32_MAX;
	uint64_t x1050 = UINT64_MAX;
	static volatile int8_t x1051 = 3;
	uint8_t x1052 = UINT8_MAX;
	volatile uint64_t t12 = 12781684746913635LLU;

	t12 = (((x1049|x1050)<<x1051)+x1052);

	if (t12 != 247LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x1261 = 1958576LLU;
	volatile int64_t x1262 = INT64_MIN;
	uint16_t x1263 = 14U;
	uint16_t x1264 = 26414U;
	volatile uint64_t t13 = 5582321554531LLU;

	t13 = (((x1261|x1262)<<x1263)+x1264);

	if (t13 != 32089335598LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x1282 = UINT16_MAX;
	volatile uint8_t x1283 = 8U;
	int16_t x1284 = INT16_MIN;

	t14 = (((x1281|x1282)<<x1283)+x1284);

	if (t14 != 4060053248U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x1301 = 460826LLU;
	uint8_t x1302 = 25U;
	volatile uint16_t x1303 = 23U;
	volatile uint64_t t15 = 290LLU;

	t15 = (((x1301|x1302)<<x1303)+x1304);

	if (t15 != 3867844542463LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x1321 = UINT8_MAX;
	uint8_t x1322 = 33U;
	uint16_t x1323 = 7U;
	int16_t x1324 = -1;
	int32_t t16 = 2;

	t16 = (((x1321|x1322)<<x1323)+x1324);

	if (t16 != 32639) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x1325 = 3208932LLU;
	int16_t x1326 = -1953;
	static volatile int16_t x1327 = 0;
	int64_t x1328 = 1105173698108680LL;
	volatile uint64_t t17 = 1917495590LLU;

	t17 = (((x1325|x1326)<<x1327)+x1328);

	if (t17 != 1105173698108423LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x1490 = 1U;
	uint32_t t18 = 4U;

	t18 = (((x1489|x1490)<<x1491)+x1492);

	if (t18 != 4292952063U) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x1497 = INT16_MIN;
	static volatile uint64_t x1498 = 3LLU;
	uint8_t x1499 = 46U;
	volatile uint64_t t19 = 3409238774426LLU;

	t19 = (((x1497|x1498)<<x1499)+x1500);

	if (t19 != 6917740133873614848LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x1506 = UINT64_MAX;
	volatile uint8_t x1507 = 43U;
	volatile int32_t x1508 = -1;
	uint64_t t20 = 3896704718334LLU;

	t20 = (((x1505|x1506)<<x1507)+x1508);

	if (t20 != 18446735277616529407LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x1525 = UINT64_MAX;
	uint8_t x1527 = 59U;
	static volatile uint64_t t21 = 25666273395035LLU;

	t21 = (((x1525|x1526)<<x1527)+x1528);

	if (t21 != 17870283321406126172LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x1549 = UINT16_MAX;
	static uint16_t x1550 = 126U;
	static int32_t x1551 = 4;
	int8_t x1552 = INT8_MIN;
	volatile int32_t t22 = 324;

	t22 = (((x1549|x1550)<<x1551)+x1552);

	if (t22 != 1048432) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1559 = 2U;
	int8_t x1560 = 3;

	t23 = (((x1557|x1558)<<x1559)+x1560);

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
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


    return 0;
}


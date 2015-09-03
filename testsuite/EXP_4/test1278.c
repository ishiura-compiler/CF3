#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x31 = 19;
int64_t t0 = 8104484458470LL;
uint64_t t1 = UINT64_MAX;
int32_t x71 = 2178;
int8_t x184 = -2;
uint64_t x267 = UINT64_MAX;
uint8_t x341 = UINT8_MAX;
static volatile int32_t x343 = -1;
uint8_t x618 = 0U;
int8_t x702 = 1;
int32_t x704 = -1;
volatile int32_t t7 = -2641851;
volatile int64_t x723 = INT64_MIN;
uint8_t x755 = 118U;
uint64_t x766 = 0LLU;
int8_t x798 = 0;
static int64_t x799 = INT64_MAX;
volatile int32_t t11 = 13677;
uint64_t x844 = 1287579199164006942LLU;
static int8_t x889 = INT8_MAX;
volatile int8_t x891 = INT8_MAX;
int32_t x1011 = INT32_MAX;
int64_t t15 = 1854557984113842624LL;


void f0(void) {
	int64_t x29 = 11LL;
	uint8_t x30 = 0U;
	static int64_t x32 = INT64_MIN;

	t0 = (x29/(x30==(x31==x32)));

	if (t0 != 11LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x45 = UINT64_MAX;
	volatile uint8_t x46 = 0U;
	static int64_t x47 = INT64_MIN;
	uint32_t x48 = 993381U;

	t1 = (x45/(x46==(x47==x48)));

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x69 = 9154;
	uint8_t x70 = 0U;
	int64_t x72 = 105LL;
	volatile int32_t t2 = 13;

	t2 = (x69/(x70==(x71==x72)));

	if (t2 != 9154) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x181 = 1558;
	int8_t x182 = 0;
	int32_t x183 = -1;
	static int32_t t3 = -4559;

	t3 = (x181/(x182==(x183==x184)));

	if (t3 != 1558) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x265 = 1175953046228803LLU;
	int8_t x266 = 0;
	static volatile uint64_t x268 = 47272769LLU;
	volatile uint64_t t4 = 240210168645630LLU;

	t4 = (x265/(x266==(x267==x268)));

	if (t4 != 1175953046228803LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x342 = 1U;
	int8_t x344 = -1;
	volatile int32_t t5 = -114;

	t5 = (x341/(x342==(x343==x344)));

	if (t5 != 255) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x617 = -1;
	int8_t x619 = INT8_MIN;
	int32_t x620 = INT32_MIN;
	volatile int32_t t6 = -63215;

	t6 = (x617/(x618==(x619==x620)));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x701 = -1;
	int64_t x703 = -1LL;

	t7 = (x701/(x702==(x703==x704)));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x721 = 0U;
	int8_t x722 = 0;
	int16_t x724 = 959;
	int32_t t8 = 3;

	t8 = (x721/(x722==(x723==x724)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x753 = UINT64_MAX;
	uint16_t x754 = 0U;
	uint32_t x756 = UINT32_MAX;
	uint64_t t9 = UINT64_MAX;

	t9 = (x753/(x754==(x755==x756)));

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x765 = 12U;
	static int8_t x767 = 0;
	uint64_t x768 = 76236803677304LLU;
	volatile int32_t t10 = -60;

	t10 = (x765/(x766==(x767==x768)));

	if (t10 != 12) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x797 = INT16_MIN;
	volatile uint16_t x800 = 29U;

	t11 = (x797/(x798==(x799==x800)));

	if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x841 = UINT32_MAX;
	uint8_t x842 = 0U;
	uint8_t x843 = 30U;
	volatile uint32_t t12 = UINT32_MAX;

	t12 = (x841/(x842==(x843==x844)));

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x890 = 0;
	int16_t x892 = INT16_MIN;
	static int32_t t13 = 570203967;

	t13 = (x889/(x890==(x891==x892)));

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x1009 = -1703;
	static int8_t x1010 = 0;
	volatile int32_t x1012 = 112452507;
	int32_t t14 = -24925;

	t14 = (x1009/(x1010==(x1011==x1012)));

	if (t14 != -1703) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x1025 = -1486592919LL;
	uint16_t x1026 = 0U;
	volatile int8_t x1027 = 27;
	static uint16_t x1028 = UINT16_MAX;

	t15 = (x1025/(x1026==(x1027==x1028)));

	if (t15 != -1486592919LL) { NG(); } else { ; }
	
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


    return 0;
}


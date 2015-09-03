#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x13 = UINT64_MAX;
int64_t x16 = INT64_MAX;
volatile int16_t x99 = -3891;
uint8_t x106 = 9U;
static volatile uint16_t x211 = 211U;
int32_t t5 = -229;
static volatile int8_t x369 = 9;
int64_t x371 = -397937424227LL;
int8_t x378 = 1;
uint32_t x408 = 31603U;
int8_t x486 = 1;
volatile int8_t x610 = 1;
int32_t t10 = 245;
volatile uint8_t x729 = 85U;
uint16_t x730 = 2U;
volatile int16_t x749 = 2;
int32_t t13 = 55;
int32_t x754 = 1;
static volatile int32_t t14 = -26;
int32_t t16 = 6440;
uint16_t x958 = 1U;
uint8_t x960 = 106U;
volatile int64_t x975 = -2052511273138LL;
uint8_t x1018 = 29U;
uint16_t x1146 = 1U;
volatile int8_t x1274 = 0;
int16_t x1276 = INT16_MIN;


void f0(void) {
	static int32_t x14 = 15;
	volatile int64_t x15 = -1LL;
	static volatile uint64_t t0 = 13820LLU;

	t0 = ((x13>>x14)+(x15==x16));

	if (t0 != 562949953421311LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x97 = 185594;
	int16_t x98 = 0;
	uint8_t x100 = UINT8_MAX;
	static volatile int32_t t1 = -1505561;

	t1 = ((x97>>x98)+(x99==x100));

	if (t1 != 185594) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x105 = 2;
	uint8_t x107 = UINT8_MAX;
	int8_t x108 = 1;
	static volatile int32_t t2 = 2162;

	t2 = ((x105>>x106)+(x107==x108));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x209 = 184874726400429299LLU;
	static uint8_t x210 = 4U;
	int32_t x212 = -1485911;
	volatile uint64_t t3 = 13357LLU;

	t3 = ((x209>>x210)+(x211==x212));

	if (t3 != 11554670400026831LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x261 = 12497U;
	static volatile uint8_t x262 = 0U;
	int32_t x263 = 892480000;
	int32_t x264 = INT32_MIN;
	volatile int32_t t4 = -21;

	t4 = ((x261>>x262)+(x263==x264));

	if (t4 != 12497) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x361 = 16;
	int16_t x362 = 1;
	static uint16_t x363 = 555U;
	volatile int32_t x364 = 4763446;

	t5 = ((x361>>x362)+(x363==x364));

	if (t5 != 8) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x370 = 0U;
	static int64_t x372 = INT64_MAX;
	int32_t t6 = -10544;

	t6 = ((x369>>x370)+(x371==x372));

	if (t6 != 9) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x377 = UINT16_MAX;
	uint64_t x379 = UINT64_MAX;
	int16_t x380 = INT16_MIN;
	volatile int32_t t7 = 531;

	t7 = ((x377>>x378)+(x379==x380));

	if (t7 != 32767) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x405 = 12870U;
	uint8_t x406 = 11U;
	volatile uint8_t x407 = 9U;
	int32_t t8 = -66961273;

	t8 = ((x405>>x406)+(x407==x408));

	if (t8 != 6) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x485 = INT64_MAX;
	volatile int32_t x487 = INT32_MIN;
	static int64_t x488 = -1LL;
	int64_t t9 = -328577846046LL;

	t9 = ((x485>>x486)+(x487==x488));

	if (t9 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x609 = INT32_MAX;
	int32_t x611 = INT32_MIN;
	uint32_t x612 = UINT32_MAX;

	t10 = ((x609>>x610)+(x611==x612));

	if (t10 != 1073741823) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint16_t x617 = 347U;
	static int16_t x618 = 12;
	int32_t x619 = -1;
	static uint32_t x620 = UINT32_MAX;
	static volatile int32_t t11 = 944081060;

	t11 = ((x617>>x618)+(x619==x620));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x731 = INT16_MAX;
	volatile int16_t x732 = -1;
	int32_t t12 = 4231401;

	t12 = ((x729>>x730)+(x731==x732));

	if (t12 != 21) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x750 = 2U;
	int16_t x751 = -1;
	int16_t x752 = INT16_MIN;

	t13 = ((x749>>x750)+(x751==x752));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x753 = UINT16_MAX;
	static int64_t x755 = INT64_MAX;
	int8_t x756 = 1;

	t14 = ((x753>>x754)+(x755==x756));

	if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x793 = 1LLU;
	int32_t x794 = 0;
	static uint64_t x795 = 933202062207885235LLU;
	static int64_t x796 = -399547354392LL;
	uint64_t t15 = 45995972LLU;

	t15 = ((x793>>x794)+(x795==x796));

	if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x901 = 2173U;
	int16_t x902 = 3;
	uint16_t x903 = 832U;
	int16_t x904 = -12060;

	t16 = ((x901>>x902)+(x903==x904));

	if (t16 != 271) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x957 = 0;
	int8_t x959 = INT8_MAX;
	static volatile int32_t t17 = 1707604;

	t17 = ((x957>>x958)+(x959==x960));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x973 = INT8_MAX;
	uint16_t x974 = 1U;
	int8_t x976 = 0;
	int32_t t18 = 13123;

	t18 = ((x973>>x974)+(x975==x976));

	if (t18 != 63) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x1017 = INT64_MAX;
	uint16_t x1019 = UINT16_MAX;
	int16_t x1020 = -1;
	int64_t t19 = 2LL;

	t19 = ((x1017>>x1018)+(x1019==x1020));

	if (t19 != 17179869183LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1053 = 85U;
	static volatile uint16_t x1054 = 26U;
	int64_t x1055 = INT64_MAX;
	int16_t x1056 = INT16_MIN;
	volatile int32_t t20 = 34929624;

	t20 = ((x1053>>x1054)+(x1055==x1056));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1145 = INT16_MAX;
	volatile int8_t x1147 = -8;
	uint32_t x1148 = 104U;
	int32_t t21 = -250;

	t21 = ((x1145>>x1146)+(x1147==x1148));

	if (t21 != 16383) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x1273 = UINT8_MAX;
	int64_t x1275 = 13652403LL;
	int32_t t22 = -923;

	t22 = ((x1273>>x1274)+(x1275==x1276));

	if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1445 = 404;
	int8_t x1446 = 11;
	int16_t x1447 = INT16_MAX;
	volatile int16_t x1448 = INT16_MIN;
	volatile int32_t t23 = -1;

	t23 = ((x1445>>x1446)+(x1447==x1448));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x1453 = UINT64_MAX;
	int32_t x1454 = 1;
	int8_t x1455 = 1;
	uint64_t x1456 = 4320938329LLU;
	uint64_t t24 = 130334664LLU;

	t24 = ((x1453>>x1454)+(x1455==x1456));

	if (t24 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x1513 = UINT64_MAX;
	volatile uint8_t x1514 = 1U;
	volatile int8_t x1515 = 15;
	int64_t x1516 = INT64_MAX;
	static uint64_t t25 = 199895620324221231LLU;

	t25 = ((x1513>>x1514)+(x1515==x1516));

	if (t25 != 9223372036854775807LLU) { NG(); } else { ; }
	
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


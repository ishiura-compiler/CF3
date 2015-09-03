#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x256 = 1U;
volatile uint64_t x420 = UINT64_MAX;
static int32_t x437 = INT32_MIN;
int8_t x438 = 1;
int32_t t4 = INT32_MIN;
volatile uint32_t x509 = 67060U;
int16_t x511 = INT16_MAX;
int32_t t6 = INT32_MIN;
int32_t t10 = -1025948;
volatile int32_t t11 = 7;
int32_t x1125 = INT32_MIN;
int32_t x1128 = -1;
int16_t x1173 = -14895;
int32_t x1175 = -251149226;
volatile int16_t x1202 = 0;
volatile int32_t t14 = -11983;
volatile uint8_t x1215 = UINT8_MAX;
int16_t x1216 = -2000;
uint8_t x1317 = 16U;
static volatile int32_t t16 = 11172;
volatile int32_t t18 = 1020031399;
uint32_t x2057 = UINT32_MAX;
static uint32_t t20 = UINT32_MAX;
static uint16_t x2171 = UINT16_MAX;
int8_t x2222 = 0;
static volatile int64_t x2337 = 15LL;
volatile uint8_t x2339 = 4U;
static int64_t x2353 = 13317145581658040LL;
volatile int32_t x2356 = -1;
int8_t x2573 = INT8_MAX;
volatile uint8_t x3210 = 1U;
static int16_t x3230 = 0;
volatile uint8_t x3410 = 0U;
int64_t x3411 = INT64_MAX;
volatile uint64_t t34 = UINT64_MAX;
uint8_t x3866 = 1U;
static uint64_t x4202 = 0LLU;
int32_t t37 = -34;
int8_t x4213 = INT8_MAX;
int16_t x4214 = 0;
volatile int8_t x4502 = 0;
static int16_t x4503 = INT16_MIN;
uint8_t x4508 = 21U;
static int64_t x4519 = -244587481690007529LL;
volatile uint16_t x4945 = 1552U;
int32_t t45 = 2468802;
volatile int32_t t46 = 110;
int8_t x5011 = 0;
uint8_t x5046 = 1U;
static int8_t x5419 = INT8_MIN;
uint8_t x5469 = 4U;
static int8_t x5878 = 1;
int8_t x6187 = INT8_MIN;
static volatile int32_t x6525 = -2178423;
int32_t t57 = 298941270;
volatile int64_t x6912 = INT64_MIN;


void f0(void) {
	volatile int32_t x41 = INT32_MAX;
	uint8_t x42 = 0U;
	int32_t x43 = -1;
	uint32_t x44 = 1U;
	int32_t t0 = INT32_MAX;

	t0 = (x41/(x42==(x43<=x44)));

	if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x253 = -1;
	volatile int16_t x254 = 1;
	int32_t x255 = INT32_MIN;
	volatile int32_t t1 = 242175;

	t1 = (x253/(x254==(x255<=x256)));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x417 = 4165;
	int16_t x418 = 1;
	uint16_t x419 = 1U;
	int32_t t2 = 73;

	t2 = (x417/(x418==(x419<=x420)));

	if (t2 != 4165) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x429 = 1569U;
	uint64_t x430 = 1LLU;
	volatile int16_t x431 = INT16_MAX;
	uint32_t x432 = 33041U;
	int32_t t3 = -3;

	t3 = (x429/(x430==(x431<=x432)));

	if (t3 != 1569) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x439 = -1356LL;
	uint16_t x440 = 7U;

	t4 = (x437/(x438==(x439<=x440)));

	if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x510 = 0U;
	int64_t x512 = INT64_MIN;
	volatile uint32_t t5 = 1U;

	t5 = (x509/(x510==(x511<=x512)));

	if (t5 != 67060U) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x633 = INT32_MIN;
	int8_t x634 = 1;
	volatile uint32_t x635 = 2U;
	static int32_t x636 = -1;

	t6 = (x633/(x634==(x635<=x636)));

	if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x701 = -394393385LL;
	static int8_t x702 = 1;
	int32_t x703 = -1;
	int32_t x704 = 12;
	volatile int64_t t7 = 848352124LL;

	t7 = (x701/(x702==(x703<=x704)));

	if (t7 != -394393385LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x737 = INT64_MIN;
	int16_t x738 = 1;
	int32_t x739 = -1513;
	uint8_t x740 = 7U;
	int64_t t8 = INT64_MIN;

	t8 = (x737/(x738==(x739<=x740)));

	if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x785 = INT8_MIN;
	int32_t x786 = 0;
	uint8_t x787 = 6U;
	int8_t x788 = -1;
	int32_t t9 = -2;

	t9 = (x785/(x786==(x787<=x788)));

	if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x833 = INT16_MAX;
	uint64_t x834 = 1LLU;
	int16_t x835 = INT16_MIN;
	uint32_t x836 = UINT32_MAX;

	t10 = (x833/(x834==(x835<=x836)));

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x1057 = INT8_MIN;
	uint16_t x1058 = 0U;
	volatile int64_t x1059 = 52LL;
	int64_t x1060 = -1LL;

	t11 = (x1057/(x1058==(x1059<=x1060)));

	if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x1126 = 1U;
	uint64_t x1127 = 22687336544935LLU;
	volatile int32_t t12 = INT32_MIN;

	t12 = (x1125/(x1126==(x1127<=x1128)));

	if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x1174 = 1U;
	volatile uint64_t x1176 = UINT64_MAX;
	volatile int32_t t13 = 314532;

	t13 = (x1173/(x1174==(x1175<=x1176)));

	if (t13 != -14895) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x1201 = 19U;
	static int32_t x1203 = INT32_MIN;
	int64_t x1204 = -101010422360588LL;

	t14 = (x1201/(x1202==(x1203<=x1204)));

	if (t14 != 19) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x1213 = 61316236032LL;
	static uint32_t x1214 = 0U;
	volatile int64_t t15 = 329759LL;

	t15 = (x1213/(x1214==(x1215<=x1216)));

	if (t15 != 61316236032LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x1318 = 0LL;
	uint16_t x1319 = UINT16_MAX;
	volatile int16_t x1320 = -1;

	t16 = (x1317/(x1318==(x1319<=x1320)));

	if (t16 != 16) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x1517 = INT64_MAX;
	int8_t x1518 = 1;
	int64_t x1519 = -23608007572351LL;
	int8_t x1520 = -1;
	int64_t t17 = INT64_MAX;

	t17 = (x1517/(x1518==(x1519<=x1520)));

	if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x1785 = UINT8_MAX;
	uint16_t x1786 = 0U;
	int32_t x1787 = INT32_MIN;
	int64_t x1788 = INT64_MIN;

	t18 = (x1785/(x1786==(x1787<=x1788)));

	if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x1985 = INT32_MAX;
	int32_t x1986 = 1;
	int64_t x1987 = -156LL;
	int8_t x1988 = INT8_MIN;
	volatile int32_t t19 = INT32_MAX;

	t19 = (x1985/(x1986==(x1987<=x1988)));

	if (t19 != INT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x2058 = 0LL;
	volatile uint32_t x2059 = UINT32_MAX;
	uint8_t x2060 = UINT8_MAX;

	t20 = (x2057/(x2058==(x2059<=x2060)));

	if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x2121 = -1;
	static int8_t x2122 = 1;
	volatile int64_t x2123 = -1LL;
	uint64_t x2124 = UINT64_MAX;
	int32_t t21 = 73;

	t21 = (x2121/(x2122==(x2123<=x2124)));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x2169 = 97467;
	int8_t x2170 = 1;
	static volatile int64_t x2172 = INT64_MAX;
	volatile int32_t t22 = 15961537;

	t22 = (x2169/(x2170==(x2171<=x2172)));

	if (t22 != 97467) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x2221 = INT16_MIN;
	int32_t x2223 = INT32_MAX;
	uint64_t x2224 = 5LLU;
	int32_t t23 = 733280774;

	t23 = (x2221/(x2222==(x2223<=x2224)));

	if (t23 != -32768) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x2338 = 0;
	static int64_t x2340 = -109040LL;
	volatile int64_t t24 = 1631095395LL;

	t24 = (x2337/(x2338==(x2339<=x2340)));

	if (t24 != 15LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x2354 = 0;
	int64_t x2355 = 82LL;
	volatile int64_t t25 = -1873LL;

	t25 = (x2353/(x2354==(x2355<=x2356)));

	if (t25 != 13317145581658040LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x2574 = 1;
	int32_t x2575 = INT32_MIN;
	volatile int8_t x2576 = INT8_MIN;
	static volatile int32_t t26 = -188387;

	t26 = (x2573/(x2574==(x2575<=x2576)));

	if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x2841 = INT8_MAX;
	volatile int32_t x2842 = 1;
	int32_t x2843 = -1;
	int32_t x2844 = INT32_MAX;
	volatile int32_t t27 = 430215;

	t27 = (x2841/(x2842==(x2843<=x2844)));

	if (t27 != 127) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x2997 = INT16_MIN;
	int16_t x2998 = 1;
	uint64_t x2999 = 849759602LLU;
	volatile int8_t x3000 = INT8_MIN;
	volatile int32_t t28 = -231584043;

	t28 = (x2997/(x2998==(x2999<=x3000)));

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x3081 = INT64_MIN;
	static uint8_t x3082 = 0U;
	volatile uint8_t x3083 = UINT8_MAX;
	volatile int64_t x3084 = -1LL;
	int64_t t29 = INT64_MIN;

	t29 = (x3081/(x3082==(x3083<=x3084)));

	if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x3097 = -1;
	volatile int16_t x3098 = 1;
	int64_t x3099 = INT64_MIN;
	int8_t x3100 = 1;
	int32_t t30 = 126554972;

	t30 = (x3097/(x3098==(x3099<=x3100)));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x3209 = -39484609;
	static int8_t x3211 = INT8_MIN;
	int64_t x3212 = INT64_MAX;
	volatile int32_t t31 = -440937;

	t31 = (x3209/(x3210==(x3211<=x3212)));

	if (t31 != -39484609) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x3229 = -2;
	int8_t x3231 = -1;
	int64_t x3232 = INT64_MIN;
	static volatile int32_t t32 = 1362;

	t32 = (x3229/(x3230==(x3231<=x3232)));

	if (t32 != -2) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x3409 = 60LL;
	int8_t x3412 = -1;
	volatile int64_t t33 = 1039439959199449426LL;

	t33 = (x3409/(x3410==(x3411<=x3412)));

	if (t33 != 60LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint64_t x3493 = UINT64_MAX;
	int32_t x3494 = 0;
	uint32_t x3495 = UINT32_MAX;
	int16_t x3496 = INT16_MAX;

	t34 = (x3493/(x3494==(x3495<=x3496)));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x3865 = INT16_MIN;
	int64_t x3867 = INT64_MIN;
	int8_t x3868 = -1;
	int32_t t35 = -597;

	t35 = (x3865/(x3866==(x3867<=x3868)));

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x4089 = -1;
	uint8_t x4090 = 0U;
	int8_t x4091 = -1;
	uint64_t x4092 = 17121494718556912LLU;
	int32_t t36 = 452118225;

	t36 = (x4089/(x4090==(x4091<=x4092)));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x4201 = -1;
	int32_t x4203 = INT32_MAX;
	int64_t x4204 = INT64_MIN;

	t37 = (x4201/(x4202==(x4203<=x4204)));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x4215 = 7U;
	int16_t x4216 = INT16_MIN;
	volatile int32_t t38 = 864086969;

	t38 = (x4213/(x4214==(x4215<=x4216)));

	if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x4409 = INT64_MIN;
	uint16_t x4410 = 0U;
	uint16_t x4411 = 2U;
	static volatile int8_t x4412 = 0;
	int64_t t39 = INT64_MIN;

	t39 = (x4409/(x4410==(x4411<=x4412)));

	if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int8_t x4501 = INT8_MIN;
	volatile int64_t x4504 = -457438LL;
	int32_t t40 = 19148;

	t40 = (x4501/(x4502==(x4503<=x4504)));

	if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x4505 = INT32_MIN;
	int8_t x4506 = 0;
	uint32_t x4507 = UINT32_MAX;
	volatile int32_t t41 = INT32_MIN;

	t41 = (x4505/(x4506==(x4507<=x4508)));

	if (t41 != INT32_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x4517 = 495U;
	int8_t x4518 = 1;
	static int32_t x4520 = INT32_MIN;
	volatile int32_t t42 = -30906189;

	t42 = (x4517/(x4518==(x4519<=x4520)));

	if (t42 != 495) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x4797 = -1;
	uint64_t x4798 = 0LLU;
	uint8_t x4799 = 1U;
	volatile int16_t x4800 = INT16_MIN;
	volatile int32_t t43 = 2;

	t43 = (x4797/(x4798==(x4799<=x4800)));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x4893 = INT8_MIN;
	uint8_t x4894 = 1U;
	int64_t x4895 = INT64_MIN;
	volatile uint8_t x4896 = UINT8_MAX;
	int32_t t44 = -1;

	t44 = (x4893/(x4894==(x4895<=x4896)));

	if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x4946 = 0U;
	static int16_t x4947 = 6708;
	volatile uint16_t x4948 = 15U;

	t45 = (x4945/(x4946==(x4947<=x4948)));

	if (t45 != 1552) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x4993 = -738;
	uint16_t x4994 = 0U;
	volatile uint8_t x4995 = 0U;
	int8_t x4996 = -45;

	t46 = (x4993/(x4994==(x4995<=x4996)));

	if (t46 != -738) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x5009 = INT8_MIN;
	static volatile uint16_t x5010 = 0U;
	int32_t x5012 = -1;
	volatile int32_t t47 = -106554041;

	t47 = (x5009/(x5010==(x5011<=x5012)));

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x5045 = -53;
	int64_t x5047 = INT64_MIN;
	int32_t x5048 = INT32_MAX;
	volatile int32_t t48 = -3644;

	t48 = (x5045/(x5046==(x5047<=x5048)));

	if (t48 != -53) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x5417 = 1909;
	static uint8_t x5418 = 1U;
	int8_t x5420 = -1;
	volatile int32_t t49 = 43580760;

	t49 = (x5417/(x5418==(x5419<=x5420)));

	if (t49 != 1909) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x5470 = 0;
	static int64_t x5471 = INT64_MAX;
	int32_t x5472 = -1;
	volatile int32_t t50 = 0;

	t50 = (x5469/(x5470==(x5471<=x5472)));

	if (t50 != 4) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x5693 = INT16_MIN;
	uint16_t x5694 = 0U;
	uint16_t x5695 = 850U;
	static int8_t x5696 = INT8_MIN;
	int32_t t51 = 3;

	t51 = (x5693/(x5694==(x5695<=x5696)));

	if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x5877 = 4U;
	int32_t x5879 = INT32_MIN;
	int8_t x5880 = -7;
	int32_t t52 = -9150461;

	t52 = (x5877/(x5878==(x5879<=x5880)));

	if (t52 != 4) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint8_t x6185 = 120U;
	uint8_t x6186 = 0U;
	int32_t x6188 = INT32_MIN;
	volatile int32_t t53 = -4119197;

	t53 = (x6185/(x6186==(x6187<=x6188)));

	if (t53 != 120) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x6233 = -1293831;
	volatile uint8_t x6234 = 1U;
	int16_t x6235 = INT16_MAX;
	uint32_t x6236 = 28398276U;
	static volatile int32_t t54 = 3831821;

	t54 = (x6233/(x6234==(x6235<=x6236)));

	if (t54 != -1293831) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x6281 = INT8_MIN;
	int8_t x6282 = 1;
	static uint16_t x6283 = 123U;
	int64_t x6284 = INT64_MAX;
	static volatile int32_t t55 = 137472705;

	t55 = (x6281/(x6282==(x6283<=x6284)));

	if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x6389 = 20;
	static volatile uint8_t x6390 = 1U;
	uint8_t x6391 = UINT8_MAX;
	int32_t x6392 = INT32_MAX;
	int32_t t56 = 544230;

	t56 = (x6389/(x6390==(x6391<=x6392)));

	if (t56 != 20) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x6526 = 1U;
	uint16_t x6527 = 61U;
	uint64_t x6528 = 960LLU;

	t57 = (x6525/(x6526==(x6527<=x6528)));

	if (t57 != -2178423) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int16_t x6909 = 1;
	uint8_t x6910 = 0U;
	uint32_t x6911 = UINT32_MAX;
	int32_t t58 = 1329473;

	t58 = (x6909/(x6910==(x6911<=x6912)));

	if (t58 != 1) { NG(); } else { ; }
	
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
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();


    return 0;
}


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x35 = 6;
int32_t x36 = -1;
int8_t x213 = INT8_MAX;
int32_t x216 = -1;
static uint64_t x238 = UINT64_MAX;
static volatile uint32_t x329 = UINT32_MAX;
uint32_t x384 = UINT32_MAX;
int32_t x738 = -100770298;
volatile uint64_t t10 = 701594462LLU;
int8_t x1560 = INT8_MIN;
uint32_t x1659 = 4U;
int16_t x1660 = -1;
int64_t x1884 = -1LL;
static int8_t x1898 = INT8_MAX;
uint64_t x2230 = 40704696115401LLU;
static int32_t x2231 = INT32_MIN;
uint64_t x2356 = UINT64_MAX;
int64_t x2476 = -1LL;
int8_t x2710 = -18;
volatile int64_t t28 = INT64_MAX;
uint64_t x3066 = 503LLU;
int64_t x3327 = 10LL;
int16_t x3459 = -1;
uint8_t x3565 = 41U;
static int16_t x3595 = -1;
int32_t x4080 = 3;
volatile uint64_t t39 = UINT64_MAX;
int32_t x4251 = -1;
uint8_t x4310 = UINT8_MAX;
int32_t x4600 = -1;
static int64_t x4952 = INT64_MIN;
uint64_t t47 = 6393414156LLU;
volatile int64_t x5366 = INT64_MIN;
int32_t x5367 = -1;


void f0(void) {
	static uint16_t x33 = 21U;
	int8_t x34 = INT8_MAX;
	int32_t t0 = 0;

	t0 = ((x33|x34)<<(x35-x36));

	if (t0 != 16256) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x214 = INT32_MAX;
	int64_t x215 = -1LL;
	volatile int32_t t1 = INT32_MAX;

	t1 = ((x213|x214)<<(x215-x216));

	if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x237 = INT8_MIN;
	int16_t x239 = 15;
	int32_t x240 = -1;
	static volatile uint64_t t2 = 2LLU;

	t2 = ((x237|x238)<<(x239-x240));

	if (t2 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x330 = 15728;
	volatile int32_t x331 = INT32_MIN;
	int32_t x332 = INT32_MIN;
	volatile uint32_t t3 = UINT32_MAX;

	t3 = ((x329|x330)<<(x331-x332));

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x381 = 3707;
	uint64_t x382 = 1319577953820012LLU;
	int32_t x383 = -1;
	static uint64_t t4 = 195802629108957077LLU;

	t4 = ((x381|x382)<<(x383-x384));

	if (t4 != 1319577953820543LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x385 = 1;
	uint16_t x386 = 7U;
	volatile int16_t x387 = 14;
	static int8_t x388 = -4;
	int32_t t5 = -11;

	t5 = ((x385|x386)<<(x387-x388));

	if (t5 != 1835008) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x737 = UINT64_MAX;
	int8_t x739 = 55;
	volatile uint32_t x740 = 38U;
	static uint64_t t6 = 4168168LLU;

	t6 = ((x737|x738)<<(x739-x740));

	if (t6 != 18446744073709420544LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x917 = 1U;
	volatile uint64_t x918 = UINT64_MAX;
	volatile int32_t x919 = INT32_MIN;
	volatile int32_t x920 = INT32_MIN;
	volatile uint64_t t7 = UINT64_MAX;

	t7 = ((x917|x918)<<(x919-x920));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x1077 = UINT64_MAX;
	uint64_t x1078 = UINT64_MAX;
	int16_t x1079 = -1;
	int32_t x1080 = -1;
	static uint64_t t8 = UINT64_MAX;

	t8 = ((x1077|x1078)<<(x1079-x1080));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x1345 = 15U;
	uint32_t x1346 = UINT32_MAX;
	uint8_t x1347 = 1U;
	volatile int16_t x1348 = -1;
	uint32_t t9 = 19780U;

	t9 = ((x1345|x1346)<<(x1347-x1348));

	if (t9 != 4294967292U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x1373 = INT8_MIN;
	uint64_t x1374 = 59LLU;
	uint32_t x1375 = UINT32_MAX;
	int8_t x1376 = -1;

	t10 = ((x1373|x1374)<<(x1375-x1376));

	if (t10 != 18446744073709551547LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x1517 = 5;
	int64_t x1518 = INT64_MAX;
	volatile int64_t x1519 = -1LL;
	volatile int16_t x1520 = -1;
	volatile int64_t t11 = INT64_MAX;

	t11 = ((x1517|x1518)<<(x1519-x1520));

	if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x1557 = INT64_MAX;
	uint16_t x1558 = 27U;
	int8_t x1559 = INT8_MIN;
	int64_t t12 = INT64_MAX;

	t12 = ((x1557|x1558)<<(x1559-x1560));

	if (t12 != INT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x1645 = -1;
	uint32_t x1646 = UINT32_MAX;
	volatile uint64_t x1647 = UINT64_MAX;
	int16_t x1648 = -11;
	uint32_t t13 = 448U;

	t13 = ((x1645|x1646)<<(x1647-x1648));

	if (t13 != 4294966272U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x1657 = INT16_MAX;
	uint8_t x1658 = UINT8_MAX;
	volatile int32_t t14 = -1336;

	t14 = ((x1657|x1658)<<(x1659-x1660));

	if (t14 != 1048544) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x1797 = 1928U;
	uint32_t x1798 = 47112809U;
	int8_t x1799 = -1;
	uint64_t x1800 = UINT64_MAX;
	volatile uint32_t t15 = 19697013U;

	t15 = ((x1797|x1798)<<(x1799-x1800));

	if (t15 != 47114217U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x1881 = 168623U;
	int16_t x1882 = INT16_MIN;
	static int16_t x1883 = -1;
	volatile uint32_t t16 = 603485805U;

	t16 = ((x1881|x1882)<<(x1883-x1884));

	if (t16 != 4294939311U) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x1897 = INT8_MAX;
	volatile int8_t x1899 = 0;
	static int16_t x1900 = -1;
	volatile int32_t t17 = 6;

	t17 = ((x1897|x1898)<<(x1899-x1900));

	if (t17 != 254) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x2001 = 23374212LLU;
	int16_t x2002 = INT16_MAX;
	int8_t x2003 = 30;
	int32_t x2004 = 7;
	static volatile uint64_t t18 = 108790934913735154LLU;

	t18 = ((x2001|x2002)<<(x2003-x2004));

	if (t18 != 196262817169408LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x2229 = -11;
	volatile int32_t x2232 = INT32_MIN;
	volatile uint64_t t19 = 8LLU;

	t19 = ((x2229|x2230)<<(x2231-x2232));

	if (t19 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x2353 = INT32_MAX;
	uint64_t x2354 = 23LLU;
	uint16_t x2355 = 2U;
	uint64_t t20 = 8LLU;

	t20 = ((x2353|x2354)<<(x2355-x2356));

	if (t20 != 17179869176LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x2473 = UINT8_MAX;
	volatile uint64_t x2474 = 3642372809LLU;
	int8_t x2475 = -1;
	static uint64_t t21 = 6LLU;

	t21 = ((x2473|x2474)<<(x2475-x2476));

	if (t21 != 3642372863LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x2485 = 23U;
	uint8_t x2486 = 81U;
	uint64_t x2487 = UINT64_MAX;
	int32_t x2488 = -2;
	volatile int32_t t22 = 314;

	t22 = ((x2485|x2486)<<(x2487-x2488));

	if (t22 != 174) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x2645 = 130855561U;
	uint32_t x2646 = 59826U;
	volatile int16_t x2647 = -1;
	int16_t x2648 = -1;
	volatile uint32_t t23 = 90327873U;

	t23 = ((x2645|x2646)<<(x2647-x2648));

	if (t23 != 130874299U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x2709 = UINT64_MAX;
	uint32_t x2711 = 22U;
	uint8_t x2712 = 3U;
	volatile uint64_t t24 = 558090663985LLU;

	t24 = ((x2709|x2710)<<(x2711-x2712));

	if (t24 != 18446744073709027328LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x2885 = UINT16_MAX;
	int16_t x2886 = INT16_MAX;
	int8_t x2887 = -1;
	int16_t x2888 = -1;
	int32_t t25 = 1;

	t25 = ((x2885|x2886)<<(x2887-x2888));

	if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x2889 = 3U;
	volatile uint32_t x2890 = 350772501U;
	int16_t x2891 = -1;
	static volatile int16_t x2892 = -30;
	uint32_t t26 = 5818U;

	t26 = ((x2889|x2890)<<(x2891-x2892));

	if (t26 != 3758096384U) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x2941 = 85222U;
	static volatile uint32_t x2942 = UINT32_MAX;
	int8_t x2943 = -1;
	static volatile int32_t x2944 = -1;
	static volatile uint32_t t27 = UINT32_MAX;

	t27 = ((x2941|x2942)<<(x2943-x2944));

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x2953 = 7444U;
	int64_t x2954 = INT64_MAX;
	uint8_t x2955 = UINT8_MAX;
	uint8_t x2956 = UINT8_MAX;

	t28 = ((x2953|x2954)<<(x2955-x2956));

	if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x3065 = INT16_MAX;
	int32_t x3067 = INT32_MIN;
	int32_t x3068 = INT32_MIN;
	uint64_t t29 = 113609077336428817LLU;

	t29 = ((x3065|x3066)<<(x3067-x3068));

	if (t29 != 32767LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x3169 = 2U;
	static int32_t x3170 = 8658;
	static uint8_t x3171 = 1U;
	uint64_t x3172 = UINT64_MAX;
	int32_t t30 = -908;

	t30 = ((x3169|x3170)<<(x3171-x3172));

	if (t30 != 34632) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x3249 = 127U;
	static volatile uint32_t x3250 = 3548120U;
	int32_t x3251 = -1;
	uint64_t x3252 = UINT64_MAX;
	volatile uint32_t t31 = 30U;

	t31 = ((x3249|x3250)<<(x3251-x3252));

	if (t31 != 3548159U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x3325 = INT64_MIN;
	uint64_t x3326 = 2730349LLU;
	int32_t x3328 = 0;
	volatile uint64_t t32 = 21599839205780LLU;

	t32 = ((x3325|x3326)<<(x3327-x3328));

	if (t32 != 2795877376LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x3457 = UINT64_MAX;
	int64_t x3458 = INT64_MIN;
	int16_t x3460 = -1;
	static uint64_t t33 = UINT64_MAX;

	t33 = ((x3457|x3458)<<(x3459-x3460));

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x3566 = 173U;
	volatile int8_t x3567 = INT8_MIN;
	volatile int8_t x3568 = INT8_MIN;
	static volatile int32_t t34 = 8368;

	t34 = ((x3565|x3566)<<(x3567-x3568));

	if (t34 != 173) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x3593 = INT64_MAX;
	static int64_t x3594 = INT64_MAX;
	static int16_t x3596 = -1;
	static volatile int64_t t35 = INT64_MAX;

	t35 = ((x3593|x3594)<<(x3595-x3596));

	if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x3601 = UINT64_MAX;
	volatile int16_t x3602 = INT16_MAX;
	int16_t x3603 = -1;
	volatile int32_t x3604 = -1;
	volatile uint64_t t36 = UINT64_MAX;

	t36 = ((x3601|x3602)<<(x3603-x3604));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x3929 = -1;
	static uint32_t x3930 = UINT32_MAX;
	volatile uint8_t x3931 = 11U;
	int32_t x3932 = 3;
	volatile uint32_t t37 = 15189U;

	t37 = ((x3929|x3930)<<(x3931-x3932));

	if (t37 != 4294967040U) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x4077 = INT32_MIN;
	uint32_t x4078 = 0U;
	int16_t x4079 = 8;
	uint32_t t38 = 27723U;

	t38 = ((x4077|x4078)<<(x4079-x4080));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x4105 = UINT64_MAX;
	volatile uint8_t x4106 = 66U;
	int16_t x4107 = INT16_MIN;
	int16_t x4108 = INT16_MIN;

	t39 = ((x4105|x4106)<<(x4107-x4108));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x4249 = 3;
	uint32_t x4250 = 10U;
	int8_t x4252 = -1;
	static volatile uint32_t t40 = 2U;

	t40 = ((x4249|x4250)<<(x4251-x4252));

	if (t40 != 11U) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x4309 = UINT64_MAX;
	uint64_t x4311 = 1LLU;
	int32_t x4312 = -1;
	uint64_t t41 = 24682LLU;

	t41 = ((x4309|x4310)<<(x4311-x4312));

	if (t41 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint32_t x4457 = 6U;
	int32_t x4458 = INT32_MAX;
	int32_t x4459 = 0;
	int32_t x4460 = -1;
	volatile uint32_t t42 = 151U;

	t42 = ((x4457|x4458)<<(x4459-x4460));

	if (t42 != 4294967294U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x4597 = 716U;
	uint64_t x4598 = 177501116203665941LLU;
	int16_t x4599 = 11;
	static uint64_t t43 = 49803LLU;

	t43 = ((x4597|x4598)<<(x4599-x4600));

	if (t43 != 7621553095544000512LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x4861 = -15LL;
	static uint64_t x4862 = 18655078795876933LLU;
	static int32_t x4863 = -1;
	uint64_t x4864 = UINT64_MAX;
	uint64_t t44 = 1437344LLU;

	t44 = ((x4861|x4862)<<(x4863-x4864));

	if (t44 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x4949 = INT64_MAX;
	static uint16_t x4950 = 20558U;
	static int64_t x4951 = INT64_MIN;
	volatile int64_t t45 = INT64_MAX;

	t45 = ((x4949|x4950)<<(x4951-x4952));

	if (t45 != INT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x4957 = UINT32_MAX;
	volatile int16_t x4958 = INT16_MAX;
	uint8_t x4959 = 8U;
	int8_t x4960 = -1;
	uint32_t t46 = 1135102U;

	t46 = ((x4957|x4958)<<(x4959-x4960));

	if (t46 != 4294966784U) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x5137 = UINT64_MAX;
	int64_t x5138 = INT64_MIN;
	volatile uint32_t x5139 = 12U;
	volatile uint8_t x5140 = 3U;

	t47 = ((x5137|x5138)<<(x5139-x5140));

	if (t47 != 18446744073709551104LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x5357 = 17757LLU;
	int8_t x5358 = INT8_MAX;
	volatile int8_t x5359 = INT8_MAX;
	static uint32_t x5360 = 91U;
	static volatile uint64_t t48 = 44504949284LLU;

	t48 = ((x5357|x5358)<<(x5359-x5360));

	if (t48 != 1222588210610176LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x5365 = 57141LLU;
	int32_t x5368 = -1;
	uint64_t t49 = 20LLU;

	t49 = ((x5365|x5366)<<(x5367-x5368));

	if (t49 != 9223372036854832949LLU) { NG(); } else { ; }
	
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


    return 0;
}


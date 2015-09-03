#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x198 = 0;
int16_t x200 = 81;
volatile uint32_t x254 = 9U;
int16_t x628 = 1;
volatile uint16_t x736 = UINT16_MAX;
uint16_t x761 = 33U;
static int8_t x766 = 0;
static uint64_t x809 = UINT64_MAX;
volatile int8_t x810 = 0;
uint16_t x812 = 52U;
uint64_t t8 = UINT64_MAX;
volatile uint64_t t11 = UINT64_MAX;
volatile uint64_t x2102 = 2LLU;
int64_t x2837 = INT64_MAX;
uint64_t x2840 = UINT64_MAX;
volatile uint32_t x2929 = 499U;
uint64_t x3276 = 8450654LLU;
static uint32_t x3287 = 151686502U;
uint16_t x3541 = 5063U;
volatile int8_t x3543 = 1;
int16_t x3925 = INT16_MAX;
int32_t x3927 = INT32_MIN;
volatile int32_t t26 = 762;
uint64_t x3933 = 824576619152LLU;
static int8_t x3978 = 1;
uint64_t x3979 = 169LLU;
int8_t x4054 = 0;
int64_t x4055 = INT64_MIN;
static int16_t x4066 = 1;
volatile uint8_t x4090 = 2U;
uint8_t x4325 = 3U;
static int64_t x4461 = 2569925387724269LL;
static volatile uint8_t x4488 = UINT8_MAX;
uint16_t x4595 = 0U;
int64_t x4596 = INT64_MAX;
uint32_t t37 = 46055U;
volatile int32_t x4619 = INT32_MIN;
volatile int32_t t38 = -4;
volatile int8_t x4749 = 1;
uint16_t x4750 = 7U;
volatile int32_t t41 = 8;
int32_t x5005 = INT32_MAX;
static int32_t x5077 = 18;


void f0(void) {
	int8_t x197 = 1;
	volatile int16_t x199 = INT16_MIN;
	volatile int32_t t0 = -32883166;

	t0 = ((x197<<x198)/(x199<x200));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x253 = INT16_MAX;
	int32_t x255 = -1;
	uint8_t x256 = 0U;
	int32_t t1 = -32774625;

	t1 = ((x253<<x254)/(x255<x256));

	if (t1 != 16776704) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x405 = UINT64_MAX;
	volatile uint16_t x406 = 46U;
	int64_t x407 = INT64_MIN;
	static int32_t x408 = 239;
	uint64_t t2 = 1114LLU;

	t2 = ((x405<<x406)/(x407<x408));

	if (t2 != 18446673704965373952LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x625 = 0U;
	uint8_t x626 = 2U;
	static volatile int8_t x627 = -6;
	volatile int32_t t3 = 267438620;

	t3 = ((x625<<x626)/(x627<x628));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x733 = 47U;
	volatile uint8_t x734 = 26U;
	int32_t x735 = INT32_MIN;
	uint32_t t4 = 0U;

	t4 = ((x733<<x734)/(x735<x736));

	if (t4 != 3154116608U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x762 = 10;
	int16_t x763 = INT16_MIN;
	volatile int64_t x764 = INT64_MAX;
	volatile int32_t t5 = 1;

	t5 = ((x761<<x762)/(x763<x764));

	if (t5 != 33792) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x765 = UINT32_MAX;
	uint32_t x767 = 42U;
	static int16_t x768 = 7367;
	uint32_t t6 = UINT32_MAX;

	t6 = ((x765<<x766)/(x767<x768));

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x801 = 10931578479608LLU;
	int32_t x802 = 63;
	int32_t x803 = 2343987;
	int64_t x804 = INT64_MAX;
	static uint64_t t7 = 18344486LLU;

	t7 = ((x801<<x802)/(x803<x804));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x811 = 46U;

	t8 = ((x809<<x810)/(x811<x812));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x993 = 58518LLU;
	int16_t x994 = 36;
	uint64_t x995 = 958333879991LLU;
	int64_t x996 = 1439164022584735LL;
	uint64_t t9 = 61557LLU;

	t9 = ((x993<<x994)/(x995<x996));

	if (t9 != 4021326339637248LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x1285 = 38796916804LLU;
	int16_t x1286 = 0;
	int64_t x1287 = INT64_MIN;
	volatile uint8_t x1288 = UINT8_MAX;
	volatile uint64_t t10 = 5833334429396798583LLU;

	t10 = ((x1285<<x1286)/(x1287<x1288));

	if (t10 != 38796916804LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x1377 = UINT64_MAX;
	uint8_t x1378 = 0U;
	uint16_t x1379 = UINT16_MAX;
	uint64_t x1380 = UINT64_MAX;

	t11 = ((x1377<<x1378)/(x1379<x1380));

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x1505 = 1253967178267560LLU;
	uint8_t x1506 = 3U;
	int16_t x1507 = INT16_MIN;
	int8_t x1508 = 0;
	volatile uint64_t t12 = 226291948693384186LLU;

	t12 = ((x1505<<x1506)/(x1507<x1508));

	if (t12 != 10031737426140480LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x1817 = 53522067LLU;
	static volatile uint8_t x1818 = 0U;
	int16_t x1819 = 3054;
	volatile int16_t x1820 = INT16_MAX;
	static volatile uint64_t t13 = 121397510LLU;

	t13 = ((x1817<<x1818)/(x1819<x1820));

	if (t13 != 53522067LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x2101 = UINT8_MAX;
	int64_t x2103 = -4331591908639119963LL;
	int32_t x2104 = -431904;
	int32_t t14 = 3627;

	t14 = ((x2101<<x2102)/(x2103<x2104));

	if (t14 != 1020) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x2445 = 60850563799LL;
	uint16_t x2446 = 1U;
	static int32_t x2447 = -1;
	static int8_t x2448 = 0;
	volatile int64_t t15 = 15819994774016LL;

	t15 = ((x2445<<x2446)/(x2447<x2448));

	if (t15 != 121701127598LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x2521 = 1905357469LL;
	int8_t x2522 = 5;
	int8_t x2523 = INT8_MIN;
	uint32_t x2524 = UINT32_MAX;
	int64_t t16 = 0LL;

	t16 = ((x2521<<x2522)/(x2523<x2524));

	if (t16 != 60971439008LL) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x2813 = 246195477536336LL;
	int8_t x2814 = 0;
	int16_t x2815 = INT16_MIN;
	int32_t x2816 = -1;
	static int64_t t17 = 49855LL;

	t17 = ((x2813<<x2814)/(x2815<x2816));

	if (t17 != 246195477536336LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x2838 = 0;
	int32_t x2839 = INT32_MAX;
	volatile int64_t t18 = INT64_MAX;

	t18 = ((x2837<<x2838)/(x2839<x2840));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x2930 = 12LL;
	volatile int32_t x2931 = INT32_MIN;
	static int64_t x2932 = 103078493595478LL;
	static uint32_t t19 = 26447055U;

	t19 = ((x2929<<x2930)/(x2931<x2932));

	if (t19 != 2043904U) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x3049 = 1563U;
	int8_t x3050 = 1;
	volatile int16_t x3051 = INT16_MIN;
	int32_t x3052 = -19817;
	int32_t t20 = -1;

	t20 = ((x3049<<x3050)/(x3051<x3052));

	if (t20 != 3126) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x3225 = UINT32_MAX;
	uint32_t x3226 = 0U;
	static int32_t x3227 = INT32_MIN;
	int16_t x3228 = 128;
	volatile uint32_t t21 = UINT32_MAX;

	t21 = ((x3225<<x3226)/(x3227<x3228));

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x3273 = 19U;
	static int32_t x3274 = 0;
	uint8_t x3275 = 40U;
	int32_t t22 = 12212124;

	t22 = ((x3273<<x3274)/(x3275<x3276));

	if (t22 != 19) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x3285 = 221U;
	uint8_t x3286 = 1U;
	int8_t x3288 = -7;
	volatile int32_t t23 = 78294669;

	t23 = ((x3285<<x3286)/(x3287<x3288));

	if (t23 != 442) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x3542 = 1LLU;
	static uint32_t x3544 = UINT32_MAX;
	int32_t t24 = 6448571;

	t24 = ((x3541<<x3542)/(x3543<x3544));

	if (t24 != 10126) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x3885 = INT8_MAX;
	static volatile int32_t x3886 = 1;
	static volatile int8_t x3887 = -3;
	uint8_t x3888 = 28U;
	int32_t t25 = 6357;

	t25 = ((x3885<<x3886)/(x3887<x3888));

	if (t25 != 254) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x3926 = 0;
	uint64_t x3928 = UINT64_MAX;

	t26 = ((x3925<<x3926)/(x3927<x3928));

	if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x3934 = 50U;
	static int64_t x3935 = INT64_MIN;
	int32_t x3936 = INT32_MIN;
	static volatile uint64_t t27 = 3833927845579397LLU;

	t27 = ((x3933<<x3934)/(x3935<x3936));

	if (t27 != 14573648394170925056LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x3977 = INT16_MAX;
	uint16_t x3980 = 7781U;
	volatile int32_t t28 = 331657;

	t28 = ((x3977<<x3978)/(x3979<x3980));

	if (t28 != 65534) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x4053 = INT8_MAX;
	int64_t x4056 = -2217731998910115LL;
	int32_t t29 = 13805;

	t29 = ((x4053<<x4054)/(x4055<x4056));

	if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x4065 = 4149672;
	int16_t x4067 = INT16_MIN;
	int32_t x4068 = INT32_MAX;
	volatile int32_t t30 = 97;

	t30 = ((x4065<<x4066)/(x4067<x4068));

	if (t30 != 8299344) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x4089 = INT16_MAX;
	int8_t x4091 = 1;
	static uint32_t x4092 = 69U;
	volatile int32_t t31 = 14;

	t31 = ((x4089<<x4090)/(x4091<x4092));

	if (t31 != 131068) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x4285 = 227U;
	volatile uint16_t x4286 = 2U;
	uint16_t x4287 = 265U;
	int64_t x4288 = INT64_MAX;
	int32_t t32 = 1;

	t32 = ((x4285<<x4286)/(x4287<x4288));

	if (t32 != 908) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x4326 = 0LLU;
	int64_t x4327 = -46773828647106128LL;
	volatile uint32_t x4328 = 16U;
	int32_t t33 = 2083960;

	t33 = ((x4325<<x4326)/(x4327<x4328));

	if (t33 != 3) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x4417 = 2;
	uint8_t x4418 = 12U;
	volatile int16_t x4419 = INT16_MIN;
	static uint64_t x4420 = UINT64_MAX;
	int32_t t34 = 187351;

	t34 = ((x4417<<x4418)/(x4419<x4420));

	if (t34 != 8192) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x4462 = 1;
	int8_t x4463 = INT8_MIN;
	int8_t x4464 = -1;
	volatile int64_t t35 = -176LL;

	t35 = ((x4461<<x4462)/(x4463<x4464));

	if (t35 != 5139850775448538LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x4485 = UINT64_MAX;
	uint8_t x4486 = 0U;
	int16_t x4487 = INT16_MIN;
	volatile uint64_t t36 = UINT64_MAX;

	t36 = ((x4485<<x4486)/(x4487<x4488));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x4593 = UINT32_MAX;
	uint8_t x4594 = 12U;

	t37 = ((x4593<<x4594)/(x4595<x4596));

	if (t37 != 4294963200U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x4617 = 1;
	uint32_t x4618 = 1U;
	int64_t x4620 = -1LL;

	t38 = ((x4617<<x4618)/(x4619<x4620));

	if (t38 != 2) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x4661 = UINT32_MAX;
	static int8_t x4662 = 23;
	uint8_t x4663 = UINT8_MAX;
	uint64_t x4664 = 121561921365708836LLU;
	uint32_t t39 = 1249U;

	t39 = ((x4661<<x4662)/(x4663<x4664));

	if (t39 != 4286578688U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x4751 = -11763;
	uint16_t x4752 = 5U;
	int32_t t40 = 288;

	t40 = ((x4749<<x4750)/(x4751<x4752));

	if (t40 != 128) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x4837 = 418;
	static uint16_t x4838 = 9U;
	int16_t x4839 = -1;
	static volatile uint16_t x4840 = 2U;

	t41 = ((x4837<<x4838)/(x4839<x4840));

	if (t41 != 214016) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x5006 = 0U;
	static uint32_t x5007 = 5338080U;
	int16_t x5008 = -1;
	volatile int32_t t42 = INT32_MAX;

	t42 = ((x5005<<x5006)/(x5007<x5008));

	if (t42 != INT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x5078 = 2U;
	int8_t x5079 = -5;
	static int64_t x5080 = INT64_MAX;
	volatile int32_t t43 = 3;

	t43 = ((x5077<<x5078)/(x5079<x5080));

	if (t43 != 72) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x5101 = UINT8_MAX;
	int8_t x5102 = 1;
	uint64_t x5103 = 118LLU;
	int32_t x5104 = -1;
	int32_t t44 = 241153;

	t44 = ((x5101<<x5102)/(x5103<x5104));

	if (t44 != 510) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x5117 = 38;
	static uint16_t x5118 = 1U;
	uint32_t x5119 = 23U;
	static int64_t x5120 = 23485059903238LL;
	int32_t t45 = -22373;

	t45 = ((x5117<<x5118)/(x5119<x5120));

	if (t45 != 76) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x5145 = INT8_MAX;
	int8_t x5146 = 9;
	uint16_t x5147 = UINT16_MAX;
	static uint32_t x5148 = 318081U;
	volatile int32_t t46 = 8661;

	t46 = ((x5145<<x5146)/(x5147<x5148));

	if (t46 != 65024) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x5209 = 0U;
	int32_t x5210 = 1;
	int64_t x5211 = -276443702LL;
	int16_t x5212 = INT16_MIN;
	int32_t t47 = 642228091;

	t47 = ((x5209<<x5210)/(x5211<x5212));

	if (t47 != 0) { NG(); } else { ; }
	
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


    return 0;
}


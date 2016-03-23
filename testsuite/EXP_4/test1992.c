
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int16_t x325 = -2617;
int16_t x328 = 1;
uint8_t x336 = 53U;
uint64_t t2 = 2478870759312602862LLU;
uint32_t x611 = UINT32_MAX;
uint16_t x916 = 5U;
static volatile int64_t t8 = -76LL;
volatile uint16_t x917 = 489U;
volatile int16_t x933 = INT16_MIN;
static uint16_t x935 = UINT16_MAX;
int16_t x1580 = 0;
volatile int16_t x1639 = 35;
volatile int32_t t18 = 1503;
int64_t x1705 = -17207794LL;
uint32_t x1707 = 2666U;
volatile int16_t x1708 = 6;
volatile int8_t x1942 = INT8_MIN;
static uint64_t x2064 = 25LLU;
int64_t x2073 = 9254LL;
int16_t x2074 = 18;
static int32_t t25 = -1;
uint8_t x2383 = 12U;
volatile int8_t x2438 = INT8_MIN;
static volatile uint8_t x2440 = 1U;
uint8_t x2544 = 0U;
int8_t x2884 = 0;
uint64_t t33 = 406815LLU;
int16_t x2922 = 458;
int16_t x3265 = -1;
int8_t x3268 = 4;
uint32_t t37 = 64034U;
uint8_t x3411 = 91U;
int64_t x3427 = 173LL;
uint64_t x3471 = UINT64_MAX;
static int32_t x3701 = 62;
uint32_t x4002 = UINT32_MAX;
static uint32_t t44 = 60843U;
int64_t x4085 = -1LL;
int16_t x4086 = INT16_MAX;
int64_t t45 = 19314425733766549LL;
int64_t x4162 = -1LL;
static volatile uint16_t x4164 = 2U;
volatile int64_t t46 = -2LL;
uint16_t x4296 = 15U;
volatile uint64_t t47 = 405195LLU;
uint64_t x4730 = 1643517545842746LLU;
static int32_t x4769 = 1;
uint16_t x4771 = UINT16_MAX;
volatile uint64_t x5009 = 652738197616750879LLU;
uint64_t x5010 = 354327455859718012LLU;
uint8_t x5012 = 14U;
static int16_t x5079 = INT16_MAX;
int32_t x5385 = -1;
int64_t x5387 = 334291LL;
static uint16_t x5388 = 3U;


void f0(void) {
    	uint16_t x121 = 202U;
	volatile int8_t x122 = INT8_MIN;
	int8_t x123 = INT8_MAX;
	static uint8_t x124 = 1U;
	int32_t t0 = -697;

    t0 = (x121/(x122*(x123>>x124)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x326 = 6090364LL;
	volatile uint32_t x327 = UINT32_MAX;
	volatile int64_t t1 = -28116LL;

    t1 = (x325/(x326*(x327>>x328)));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x333 = 15;
	volatile uint64_t x334 = UINT64_MAX;
	volatile int64_t x335 = INT64_MAX;

    t2 = (x333/(x334*(x335>>x336)));

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x405 = -1;
	int32_t x406 = -1;
	uint64_t x407 = UINT64_MAX;
	volatile uint8_t x408 = 1U;
	static volatile uint64_t t3 = 48790065899LLU;

    t3 = (x405/(x406*(x407>>x408)));

    if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x601 = 37;
	volatile int32_t x602 = INT32_MIN;
	int64_t x603 = 100513139LL;
	uint16_t x604 = 1U;
	volatile int64_t t4 = -875146823LL;

    t4 = (x601/(x602*(x603>>x604)));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x609 = 50U;
	static int16_t x610 = -1;
	uint16_t x612 = 14U;
	volatile uint32_t t5 = 1U;

    t5 = (x609/(x610*(x611>>x612)));

    if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x733 = -1;
	volatile uint8_t x734 = 2U;
	static uint16_t x735 = UINT16_MAX;
	int8_t x736 = 8;
	int32_t t6 = 248;

    t6 = (x733/(x734*(x735>>x736)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x765 = -58671365041441LL;
	int8_t x766 = 30;
	static volatile uint16_t x767 = 12745U;
	int8_t x768 = 6;
	volatile int64_t t7 = 11949679980447LL;

    t7 = (x765/(x766*(x767>>x768)));

    if (t7 != -9827699336LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x913 = -117;
	static uint8_t x914 = 2U;
	int64_t x915 = 620LL;

    t8 = (x913/(x914*(x915>>x916)));

    if (t8 != -3LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x918 = INT64_MIN;
	static volatile uint8_t x919 = 1U;
	int8_t x920 = 0;
	volatile int64_t t9 = -3686144059729485LL;

    t9 = (x917/(x918*(x919>>x920)));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x934 = 63;
	uint16_t x936 = 2U;
	int32_t t10 = -50578;

    t10 = (x933/(x934*(x935>>x936)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x1029 = -1LL;
	volatile int16_t x1030 = -1;
	uint32_t x1031 = 11485U;
	uint64_t x1032 = 1LLU;
	volatile int64_t t11 = -7LL;

    t11 = (x1029/(x1030*(x1031>>x1032)));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x1125 = -1;
	uint64_t x1126 = 32338LLU;
	static int16_t x1127 = INT16_MAX;
	volatile uint8_t x1128 = 1U;
	uint64_t t12 = 3632386101LLU;

    t12 = (x1125/(x1126*(x1127>>x1128)));

    if (t12 != 34818746691LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x1149 = 1;
	int8_t x1150 = -43;
	int8_t x1151 = INT8_MAX;
	uint8_t x1152 = 1U;
	volatile int32_t t13 = 683809886;

    t13 = (x1149/(x1150*(x1151>>x1152)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint32_t x1393 = 759487621U;
	int16_t x1394 = INT16_MIN;
	uint8_t x1395 = UINT8_MAX;
	volatile uint8_t x1396 = 0U;
	volatile uint32_t t14 = 1U;

    t14 = (x1393/(x1394*(x1395>>x1396)));

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x1525 = INT16_MIN;
	int32_t x1526 = -9;
	uint32_t x1527 = UINT32_MAX;
	volatile uint16_t x1528 = 3U;
	static volatile uint32_t t15 = 846614753U;

    t15 = (x1525/(x1526*(x1527>>x1528)));

    if (t15 != 1U) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x1577 = -1LL;
	int16_t x1578 = INT16_MAX;
	int16_t x1579 = INT16_MAX;
	static volatile int64_t t16 = -268818LL;

    t16 = (x1577/(x1578*(x1579>>x1580)));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x1617 = INT32_MIN;
	int16_t x1618 = -10;
	uint32_t x1619 = 533401872U;
	uint8_t x1620 = 7U;
	static volatile uint32_t t17 = 481535601U;

    t17 = (x1617/(x1618*(x1619>>x1620)));

    if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x1637 = -1;
	static int8_t x1638 = INT8_MAX;
	uint8_t x1640 = 5U;

    t18 = (x1637/(x1638*(x1639>>x1640)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint16_t x1706 = 180U;
	int64_t t19 = -1118213351LL;

    t19 = (x1705/(x1706*(x1707>>x1708)));

    if (t19 != -2331LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x1841 = -1;
	uint32_t x1842 = UINT32_MAX;
	uint32_t x1843 = 520U;
	uint8_t x1844 = 3U;
	volatile uint32_t t20 = 307U;

    t20 = (x1841/(x1842*(x1843>>x1844)));

    if (t20 != 1U) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x1941 = 18U;
	static uint8_t x1943 = UINT8_MAX;
	static volatile int8_t x1944 = 1;
	static volatile int32_t t21 = 99;

    t21 = (x1941/(x1942*(x1943>>x1944)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x2061 = INT8_MIN;
	static volatile uint64_t x2062 = 79LLU;
	volatile int32_t x2063 = INT32_MAX;
	volatile uint64_t t22 = 2392LLU;

    t22 = (x2061/(x2062*(x2063>>x2064)));

    if (t22 != 3706398246676622LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile uint8_t x2075 = UINT8_MAX;
	uint16_t x2076 = 2U;
	int64_t t23 = -36092444026544550LL;

    t23 = (x2073/(x2074*(x2075>>x2076)));

    if (t23 != 8LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x2145 = 80802LLU;
	int16_t x2146 = INT16_MAX;
	uint32_t x2147 = UINT32_MAX;
	volatile uint8_t x2148 = 0U;
	uint64_t t24 = 28749LLU;

    t24 = (x2145/(x2146*(x2147>>x2148)));

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x2153 = -1;
	static int16_t x2154 = INT16_MAX;
	uint16_t x2155 = UINT16_MAX;
	static uint8_t x2156 = 7U;

    t25 = (x2153/(x2154*(x2155>>x2156)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x2161 = -1;
	static int8_t x2162 = INT8_MIN;
	int64_t x2163 = 6347352544LL;
	uint8_t x2164 = 8U;
	volatile int64_t t26 = -14813LL;

    t26 = (x2161/(x2162*(x2163>>x2164)));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x2381 = -13552322;
	uint8_t x2382 = 3U;
	static uint16_t x2384 = 2U;
	int32_t t27 = -504599;

    t27 = (x2381/(x2382*(x2383>>x2384)));

    if (t27 != -1505813) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x2417 = 1;
	static int64_t x2418 = INT64_MAX;
	uint64_t x2419 = 19690303628LLU;
	static int8_t x2420 = 1;
	volatile uint64_t t28 = 40LLU;

    t28 = (x2417/(x2418*(x2419>>x2420)));

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x2437 = 7649;
	uint8_t x2439 = UINT8_MAX;
	volatile int32_t t29 = -179330212;

    t29 = (x2437/(x2438*(x2439>>x2440)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x2541 = 5;
	uint8_t x2542 = 44U;
	volatile uint32_t x2543 = 915059U;
	static uint32_t t30 = 18630U;

    t30 = (x2541/(x2542*(x2543>>x2544)));

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x2545 = 1268U;
	int32_t x2546 = 42;
	static uint8_t x2547 = UINT8_MAX;
	uint8_t x2548 = 1U;
	int32_t t31 = 254;

    t31 = (x2545/(x2546*(x2547>>x2548)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x2653 = INT8_MAX;
	int8_t x2654 = -34;
	uint32_t x2655 = UINT32_MAX;
	volatile uint8_t x2656 = 0U;
	uint32_t t32 = 523985U;

    t32 = (x2653/(x2654*(x2655>>x2656)));

    if (t32 != 3U) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x2881 = INT32_MIN;
	volatile uint64_t x2882 = 31622528LLU;
	int64_t x2883 = INT64_MAX;

    t33 = (x2881/(x2882*(x2883>>x2884)));

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x2921 = INT8_MAX;
	uint64_t x2923 = 1011528LLU;
	static uint16_t x2924 = 0U;
	static volatile uint64_t t34 = 2096562454LLU;

    t34 = (x2921/(x2922*(x2923>>x2924)));

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x2973 = INT32_MIN;
	volatile int32_t x2974 = INT32_MAX;
	int64_t x2975 = 17LL;
	static uint8_t x2976 = 0U;
	int64_t t35 = 334173899484672923LL;

    t35 = (x2973/(x2974*(x2975>>x2976)));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint16_t x3181 = UINT16_MAX;
	int64_t x3182 = -1LL;
	int32_t x3183 = 75;
	uint8_t x3184 = 1U;
	int64_t t36 = -45464149LL;

    t36 = (x3181/(x3182*(x3183>>x3184)));

    if (t36 != -1771LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x3266 = 3U;
	volatile uint32_t x3267 = UINT32_MAX;

    t37 = (x3265/(x3266*(x3267>>x3268)));

    if (t37 != 5U) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x3409 = 2010U;
	int8_t x3410 = -1;
	int8_t x3412 = 1;
	volatile uint32_t t38 = 11960074U;

    t38 = (x3409/(x3410*(x3411>>x3412)));

    if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x3425 = -1;
	int8_t x3426 = -1;
	uint8_t x3428 = 1U;
	int64_t t39 = 2LL;

    t39 = (x3425/(x3426*(x3427>>x3428)));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x3469 = UINT64_MAX;
	int8_t x3470 = INT8_MIN;
	int8_t x3472 = 0;
	volatile uint64_t t40 = 9759016LLU;

    t40 = (x3469/(x3470*(x3471>>x3472)));

    if (t40 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x3673 = INT16_MIN;
	volatile uint64_t x3674 = 18297539406574LLU;
	volatile int64_t x3675 = 2030LL;
	volatile uint32_t x3676 = 6U;
	uint64_t t41 = 51118377519870286LLU;

    t41 = (x3673/(x3674*(x3675>>x3676)));

    if (t41 != 32521LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint8_t x3702 = UINT8_MAX;
	uint32_t x3703 = 143U;
	static int16_t x3704 = 7;
	volatile uint32_t t42 = 2307671U;

    t42 = (x3701/(x3702*(x3703>>x3704)));

    if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x3845 = -5;
	volatile int8_t x3846 = 1;
	int64_t x3847 = INT64_MAX;
	int8_t x3848 = 0;
	volatile int64_t t43 = -23589957863LL;

    t43 = (x3845/(x3846*(x3847>>x3848)));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x4001 = INT32_MAX;
	static uint8_t x4003 = 57U;
	uint8_t x4004 = 5U;

    t44 = (x4001/(x4002*(x4003>>x4004)));

    if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x4087 = 1860;
	int16_t x4088 = 0;

    t45 = (x4085/(x4086*(x4087>>x4088)));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x4161 = -1LL;
	volatile int16_t x4163 = INT16_MAX;

    t46 = (x4161/(x4162*(x4163>>x4164)));

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x4293 = 326686;
	int32_t x4294 = INT32_MAX;
	uint64_t x4295 = 30861087940LLU;

    t47 = (x4293/(x4294*(x4295>>x4296)));

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x4317 = INT64_MIN;
	static uint64_t x4318 = 1551655056LLU;
	uint32_t x4319 = 13084308U;
	int8_t x4320 = 1;
	volatile uint64_t t48 = 111361LLU;

    t48 = (x4317/(x4318*(x4319>>x4320)));

    if (t48 != 908LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x4437 = 414058357U;
	volatile int32_t x4438 = -1;
	uint64_t x4439 = 197829677736770LLU;
	uint32_t x4440 = 4U;
	volatile uint64_t t49 = 618063338740309LLU;

    t49 = (x4437/(x4438*(x4439>>x4440)));

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x4561 = INT64_MAX;
	static volatile int16_t x4562 = INT16_MAX;
	uint16_t x4563 = 1946U;
	uint32_t x4564 = 0U;
	int64_t t50 = 8539931360LL;

    t50 = (x4561/(x4562*(x4563>>x4564)));

    if (t50 != 144647259459LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x4701 = INT16_MIN;
	static volatile int16_t x4702 = INT16_MIN;
	static uint8_t x4703 = 64U;
	uint64_t x4704 = 0LLU;
	int32_t t51 = 0;

    t51 = (x4701/(x4702*(x4703>>x4704)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x4729 = 3U;
	volatile int32_t x4731 = INT32_MAX;
	volatile int8_t x4732 = 0;
	static uint64_t t52 = 220690848014LLU;

    t52 = (x4729/(x4730*(x4731>>x4732)));

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x4770 = -1;
	static volatile uint16_t x4772 = 0U;
	static int32_t t53 = -1;

    t53 = (x4769/(x4770*(x4771>>x4772)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint32_t x5011 = 14876590U;
	volatile uint64_t t54 = 7842LLU;

    t54 = (x5009/(x5010*(x5011>>x5012)));

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x5077 = UINT32_MAX;
	static uint16_t x5078 = 163U;
	uint8_t x5080 = 0U;
	volatile uint32_t t55 = 8998U;

    t55 = (x5077/(x5078*(x5079>>x5080)));

    if (t55 != 804U) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x5386 = -1LL;
	int64_t t56 = -114613324LL;

    t56 = (x5385/(x5386*(x5387>>x5388)));

    if (t56 != 0LL) { NG(); } else { ; }
	
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


    return 0;
}


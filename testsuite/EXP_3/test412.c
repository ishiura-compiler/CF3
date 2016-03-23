
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

uint64_t x39 = UINT64_MAX;
int16_t x123 = -1;
uint8_t x124 = 0U;
volatile uint64_t x137 = UINT64_MAX;
int16_t x322 = -1;
uint16_t x398 = 3898U;
int64_t x415 = -1LL;
static volatile int32_t t9 = 15045721;
static uint16_t x482 = 5U;
volatile int64_t t11 = -3858795353287542491LL;
uint64_t x489 = 24828794LLU;
int16_t x491 = -175;
int16_t x914 = -243;
int8_t x1051 = -1;
int16_t x1362 = INT16_MAX;
volatile uint8_t x1427 = 2U;
int64_t x1444 = -1LL;
int64_t x1475 = 1187935376049376LL;
static volatile int64_t t28 = 1LL;
static int8_t x1510 = INT8_MIN;
volatile uint32_t x1512 = UINT32_MAX;
volatile int64_t t29 = -1672621109LL;
int64_t x1874 = -156LL;
int64_t t33 = -1LL;
uint64_t t34 = 3220703136LLU;


void f0(void) {
    	int8_t x37 = INT8_MAX;
	uint32_t x38 = 33242U;
	int8_t x40 = -19;
	volatile uint32_t t0 = 2972393U;

    t0 = ((x37-x38)<<(x39*x40));

    if (t0 != 4113039360U) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x121 = -1;
	static int8_t x122 = -5;
	volatile int32_t t1 = 10925;

    t1 = ((x121-x122)<<(x123*x124));

    if (t1 != 4) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x138 = 1384074U;
	int64_t x139 = -1LL;
	int8_t x140 = 0;
	static uint64_t t2 = 211247896LLU;

    t2 = ((x137-x138)<<(x139*x140));

    if (t2 != 18446744073708167541LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x197 = INT8_MAX;
	int16_t x198 = -1;
	int32_t x199 = 0;
	uint64_t x200 = 479746287794018LLU;
	int32_t t3 = 381;

    t3 = ((x197-x198)<<(x199*x200));

    if (t3 != 128) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x201 = 177465054;
	uint64_t x202 = 84818678564LLU;
	int32_t x203 = INT32_MIN;
	uint32_t x204 = 214116U;
	volatile uint64_t t4 = 908986000830825569LLU;

    t4 = ((x201-x202)<<(x203*x204));

    if (t4 != 18446743989068338106LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x213 = 28;
	int32_t x214 = -1;
	uint32_t x215 = 1U;
	uint8_t x216 = 5U;
	int32_t t5 = 1647598;

    t5 = ((x213-x214)<<(x215*x216));

    if (t5 != 928) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x321 = INT16_MAX;
	static volatile uint16_t x323 = 1U;
	static uint8_t x324 = 1U;
	int32_t t6 = 11130282;

    t6 = ((x321-x322)<<(x323*x324));

    if (t6 != 65536) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x397 = UINT64_MAX;
	uint8_t x399 = 1U;
	static int64_t x400 = 1LL;
	uint64_t t7 = 729237642182LLU;

    t7 = ((x397-x398)<<(x399*x400));

    if (t7 != 18446744073709543818LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x413 = 919427926677508LL;
	int16_t x414 = INT16_MAX;
	static volatile int16_t x416 = -7;
	static int64_t t8 = 403LL;

    t8 = ((x413-x414)<<(x415*x416));

    if (t8 != 117686774610526848LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x449 = 1;
	static int8_t x450 = -1;
	volatile uint64_t x451 = 54344455440864LLU;
	static int8_t x452 = 0;

    t9 = ((x449-x450)<<(x451*x452));

    if (t9 != 2) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x473 = UINT16_MAX;
	uint32_t x474 = 796838U;
	uint32_t x475 = UINT32_MAX;
	volatile int32_t x476 = -1;
	volatile uint32_t t10 = 817977U;

    t10 = ((x473-x474)<<(x475*x476));

    if (t10 != 4293504690U) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x481 = 6LL;
	int8_t x483 = -1;
	static int64_t x484 = -1LL;

    t11 = ((x481-x482)<<(x483*x484));

    if (t11 != 2LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint64_t x490 = 263451LLU;
	static uint8_t x492 = 0U;
	volatile uint64_t t12 = 10518157774LLU;

    t12 = ((x489-x490)<<(x491*x492));

    if (t12 != 24565343LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x581 = 15;
	int64_t x582 = 4LL;
	int16_t x583 = -1;
	static int32_t x584 = -1;
	static int64_t t13 = 1732886554LL;

    t13 = ((x581-x582)<<(x583*x584));

    if (t13 != 22LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x913 = -1LL;
	int16_t x915 = INT16_MIN;
	int16_t x916 = 0;
	int64_t t14 = 3339173936LL;

    t14 = ((x913-x914)<<(x915*x916));

    if (t14 != 242LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile uint64_t x921 = 5022740498101350LLU;
	int64_t x922 = INT64_MAX;
	int64_t x923 = 1314904472548050LL;
	int8_t x924 = 0;
	static uint64_t t15 = 7LLU;

    t15 = ((x921-x922)<<(x923*x924));

    if (t15 != 9228394777352877159LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x1049 = 1LLU;
	uint16_t x1050 = 1U;
	int64_t x1052 = -1LL;
	volatile uint64_t t16 = 9098116190163609LLU;

    t16 = ((x1049-x1050)<<(x1051*x1052));

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint64_t x1169 = 57996775522664LLU;
	uint8_t x1170 = 5U;
	int32_t x1171 = -1;
	static uint64_t x1172 = 0LLU;
	static uint64_t t17 = 1580720LLU;

    t17 = ((x1169-x1170)<<(x1171*x1172));

    if (t17 != 57996775522659LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x1197 = UINT64_MAX;
	uint8_t x1198 = 32U;
	uint16_t x1199 = UINT16_MAX;
	uint8_t x1200 = 0U;
	volatile uint64_t t18 = 58LLU;

    t18 = ((x1197-x1198)<<(x1199*x1200));

    if (t18 != 18446744073709551583LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x1213 = -1;
	volatile int64_t x1214 = -1LL;
	static int8_t x1215 = -1;
	static int8_t x1216 = -28;
	static volatile int64_t t19 = -175352409LL;

    t19 = ((x1213-x1214)<<(x1215*x1216));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x1225 = UINT64_MAX;
	volatile int32_t x1226 = -844292215;
	int32_t x1227 = -1;
	int64_t x1228 = -1LL;
	uint64_t t20 = 478273LLU;

    t20 = ((x1225-x1226)<<(x1227*x1228));

    if (t20 != 1688584428LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x1237 = 98LLU;
	static uint64_t x1238 = 953038LLU;
	int64_t x1239 = 0LL;
	uint16_t x1240 = UINT16_MAX;
	uint64_t t21 = 10235848543LLU;

    t21 = ((x1237-x1238)<<(x1239*x1240));

    if (t21 != 18446744073708598676LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint64_t x1337 = 1918LLU;
	static uint16_t x1338 = UINT16_MAX;
	int64_t x1339 = 9LL;
	uint32_t x1340 = 6U;
	uint64_t t22 = 356337840024581485LLU;

    t22 = ((x1337-x1338)<<(x1339*x1340));

    if (t22 != 16122886665986375680LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x1361 = 439838896LL;
	static uint64_t x1363 = 1594275471049LLU;
	uint8_t x1364 = 0U;
	int64_t t23 = 753898809039565LL;

    t23 = ((x1361-x1362)<<(x1363*x1364));

    if (t23 != 439806129LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x1417 = -1;
	static int8_t x1418 = INT8_MIN;
	volatile uint16_t x1419 = UINT16_MAX;
	volatile int8_t x1420 = 0;
	volatile int32_t t24 = 11306;

    t24 = ((x1417-x1418)<<(x1419*x1420));

    if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x1425 = 1U;
	static volatile uint64_t x1426 = 1865549057569865774LLU;
	int64_t x1428 = 0LL;
	uint64_t t25 = 685600681734381LLU;

    t25 = ((x1425-x1426)<<(x1427*x1428));

    if (t25 != 16581195016139685843LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x1441 = -1LL;
	uint64_t x1442 = 59354707407026LLU;
	volatile int32_t x1443 = -1;
	static volatile uint64_t t26 = 1LLU;

    t26 = ((x1441-x1442)<<(x1443*x1444));

    if (t26 != 18446625364294737562LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint32_t x1469 = 2U;
	static volatile uint32_t x1470 = 348857318U;
	static uint64_t x1471 = UINT64_MAX;
	volatile int16_t x1472 = 0;
	uint32_t t27 = 2541867U;

    t27 = ((x1469-x1470)<<(x1471*x1472));

    if (t27 != 3946109980U) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x1473 = -1LL;
	int8_t x1474 = -3;
	volatile int16_t x1476 = 0;

    t28 = ((x1473-x1474)<<(x1475*x1476));

    if (t28 != 2LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x1509 = 164LL;
	int32_t x1511 = -1;

    t29 = ((x1509-x1510)<<(x1511*x1512));

    if (t29 != 584LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x1697 = -2;
	int16_t x1698 = INT16_MIN;
	int16_t x1699 = -1;
	volatile uint64_t x1700 = UINT64_MAX;
	volatile int32_t t30 = -1;

    t30 = ((x1697-x1698)<<(x1699*x1700));

    if (t30 != 65532) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x1701 = 1057096636166349357LLU;
	uint64_t x1702 = 16560651LLU;
	int16_t x1703 = 0;
	static volatile int64_t x1704 = 36LL;
	volatile uint64_t t31 = 6117282446205LLU;

    t31 = ((x1701-x1702)<<(x1703*x1704));

    if (t31 != 1057096636149788706LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x1793 = -32734;
	uint32_t x1794 = 1862638U;
	volatile uint8_t x1795 = 0U;
	volatile uint64_t x1796 = 3655704163417293054LLU;
	static volatile uint32_t t32 = 59U;

    t32 = ((x1793-x1794)<<(x1795*x1796));

    if (t32 != 4293071924U) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x1873 = 12U;
	volatile int64_t x1875 = -1LL;
	int8_t x1876 = -6;

    t33 = ((x1873-x1874)<<(x1875*x1876));

    if (t33 != 10752LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint64_t x1885 = 971374978LLU;
	static int8_t x1886 = INT8_MAX;
	static uint64_t x1887 = 381686LLU;
	int8_t x1888 = 0;

    t34 = ((x1885-x1886)<<(x1887*x1888));

    if (t34 != 971374851LLU) { NG(); } else { ; }
	
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


    return 0;
}


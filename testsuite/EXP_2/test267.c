
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

int32_t x227 = INT32_MAX;
static uint32_t t2 = 719649403U;
int64_t x623 = INT64_MAX;
int32_t x654 = -1;
int8_t x670 = 1;
volatile int32_t t7 = -54;
volatile int32_t t9 = -81339501;
volatile uint64_t t10 = 851747570410714LLU;
int8_t x918 = -1;
int16_t x1016 = -1;
uint8_t x1093 = UINT8_MAX;
volatile int32_t t15 = 3307;
int64_t x1269 = 1LL;
int32_t t18 = 26060;
int16_t x1380 = -1;
uint32_t x1706 = UINT32_MAX;


void f0(void) {
    	uint32_t x225 = 3U;
	int32_t x226 = INT32_MAX;
	int8_t x228 = INT8_MAX;
	uint32_t t0 = 14990U;

    t0 = ((x225<<(x226-x227))+x228);

    if (t0 != 130U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x229 = UINT32_MAX;
	int32_t x230 = INT32_MAX;
	int32_t x231 = INT32_MAX;
	static int8_t x232 = INT8_MIN;
	volatile uint32_t t1 = 113823U;

    t1 = ((x229<<(x230-x231))+x232);

    if (t1 != 4294967167U) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x317 = UINT8_MAX;
	uint32_t x318 = 2U;
	int8_t x319 = 0;
	uint32_t x320 = 224273U;

    t2 = ((x317<<(x318-x319))+x320);

    if (t2 != 225293U) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x365 = 75U;
	uint8_t x366 = 4U;
	int8_t x367 = -1;
	static uint8_t x368 = UINT8_MAX;
	static int32_t t3 = -93372880;

    t3 = ((x365<<(x366-x367))+x368);

    if (t3 != 2655) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x621 = 0;
	int64_t x622 = INT64_MAX;
	uint64_t x624 = UINT64_MAX;
	volatile uint64_t t4 = UINT64_MAX;

    t4 = ((x621<<(x622-x623))+x624);

    if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint32_t x653 = 598U;
	int8_t x655 = -1;
	static int8_t x656 = 0;
	uint32_t t5 = 8131U;

    t5 = ((x653<<(x654-x655))+x656);

    if (t5 != 598U) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint32_t x665 = 7204U;
	volatile int8_t x666 = -1;
	volatile int16_t x667 = -1;
	int64_t x668 = INT64_MIN;
	static int64_t t6 = -49LL;

    t6 = ((x665<<(x666-x667))+x668);

    if (t6 != -9223372036854768604LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint16_t x669 = UINT16_MAX;
	static volatile int64_t x671 = -1LL;
	uint8_t x672 = 8U;

    t7 = ((x669<<(x670-x671))+x672);

    if (t7 != 262148) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x749 = 652982403794623LLU;
	int8_t x750 = INT8_MIN;
	volatile int8_t x751 = INT8_MIN;
	int64_t x752 = INT64_MAX;
	volatile uint64_t t8 = 3884LLU;

    t8 = ((x749<<(x750-x751))+x752);

    if (t8 != 9224025019258570430LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x761 = 0;
	uint8_t x762 = 3U;
	int16_t x763 = 0;
	uint8_t x764 = 92U;

    t9 = ((x761<<(x762-x763))+x764);

    if (t9 != 92) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint64_t x857 = 29LLU;
	int16_t x858 = -1;
	int32_t x859 = -15;
	uint8_t x860 = 40U;

    t10 = ((x857<<(x858-x859))+x860);

    if (t10 != 475176LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x917 = UINT16_MAX;
	uint64_t x919 = UINT64_MAX;
	volatile uint16_t x920 = 166U;
	volatile int32_t t11 = -3374854;

    t11 = ((x917<<(x918-x919))+x920);

    if (t11 != 65701) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x1013 = 0;
	volatile int8_t x1014 = -1;
	static volatile uint32_t x1015 = UINT32_MAX;
	static volatile int32_t t12 = -4;

    t12 = ((x1013<<(x1014-x1015))+x1016);

    if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x1081 = 56129;
	uint16_t x1082 = 0U;
	int8_t x1083 = -1;
	int64_t x1084 = 0LL;
	static volatile int64_t t13 = 1LL;

    t13 = ((x1081<<(x1082-x1083))+x1084);

    if (t13 != 112258LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint32_t x1094 = UINT32_MAX;
	volatile int8_t x1095 = -24;
	uint64_t x1096 = UINT64_MAX;
	uint64_t t14 = 127868LLU;

    t14 = ((x1093<<(x1094-x1095))+x1096);

    if (t14 != 2139095039LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x1201 = 1;
	uint64_t x1202 = UINT64_MAX;
	int16_t x1203 = -1;
	int8_t x1204 = INT8_MIN;

    t15 = ((x1201<<(x1202-x1203))+x1204);

    if (t15 != -127) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x1245 = 1638;
	int16_t x1246 = INT16_MIN;
	int16_t x1247 = INT16_MIN;
	volatile int32_t x1248 = -1;
	int32_t t16 = 9228878;

    t16 = ((x1245<<(x1246-x1247))+x1248);

    if (t16 != 1637) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x1270 = 1U;
	volatile uint64_t x1271 = UINT64_MAX;
	int64_t x1272 = INT64_MIN;
	volatile int64_t t17 = 1746369267534LL;

    t17 = ((x1269<<(x1270-x1271))+x1272);

    if (t17 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x1357 = 41U;
	volatile int16_t x1358 = -1;
	int8_t x1359 = -1;
	uint8_t x1360 = UINT8_MAX;

    t18 = ((x1357<<(x1358-x1359))+x1360);

    if (t18 != 296) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x1377 = INT64_MAX;
	int32_t x1378 = -1;
	uint32_t x1379 = UINT32_MAX;
	int64_t t19 = -24440955336LL;

    t19 = ((x1377<<(x1378-x1379))+x1380);

    if (t19 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x1389 = 1U;
	static volatile int8_t x1390 = -1;
	int8_t x1391 = -1;
	volatile uint32_t x1392 = 6284U;
	static volatile uint32_t t20 = 65U;

    t20 = ((x1389<<(x1390-x1391))+x1392);

    if (t20 != 6285U) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x1705 = 2;
	int8_t x1707 = -2;
	int64_t x1708 = -1LL;
	static volatile int64_t t21 = -108036416LL;

    t21 = ((x1705<<(x1706-x1707))+x1708);

    if (t21 != 3LL) { NG(); } else { ; }
	
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


    return 0;
}



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

static int64_t t0 = -29916893LL;
uint16_t x43 = 8U;
static int8_t x262 = 0;
int64_t t4 = -1017510266686447LL;
uint8_t x271 = 21U;
uint32_t x362 = 340648U;
uint8_t x364 = 36U;
uint16_t x369 = UINT16_MAX;
int64_t x395 = 1LL;
volatile uint32_t t8 = 2172968U;
static volatile int64_t x566 = -1LL;
int32_t x680 = -7782;
int64_t x801 = -1LL;
static volatile uint8_t x803 = 28U;
int16_t x835 = 6;
static int32_t x882 = INT32_MIN;
static int8_t x883 = 0;


void f0(void) {
    	int32_t x9 = INT32_MIN;
	uint32_t x10 = 10088366U;
	uint8_t x11 = 9U;
	volatile int64_t x12 = 212212643LL;

    t0 = (((x9+x10)<<x11)|x12);

    if (t0 != 1073700771LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x41 = UINT16_MAX;
	static uint32_t x42 = 4U;
	int16_t x44 = 4065;
	volatile uint32_t t1 = 42597U;

    t1 = (((x41+x42)<<x43)|x44);

    if (t1 != 16781281U) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint32_t x145 = 22266951U;
	static volatile int8_t x146 = 13;
	uint8_t x147 = 0U;
	static int32_t x148 = -321215627;
	uint32_t t2 = 13895068U;

    t2 = (((x145+x146)<<x147)|x148);

    if (t2 != 3990611829U) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x165 = INT32_MAX;
	uint64_t x166 = 8415LLU;
	volatile uint64_t x167 = 6LLU;
	int64_t x168 = INT64_MAX;
	static uint64_t t3 = 34895LLU;

    t3 = (((x165+x166)<<x167)|x168);

    if (t3 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x261 = UINT16_MAX;
	uint8_t x263 = 1U;
	int64_t x264 = INT64_MIN;

    t4 = (((x261+x262)<<x263)|x264);

    if (t4 != -9223372036854644738LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile uint32_t x269 = 19527U;
	int8_t x270 = INT8_MAX;
	int8_t x272 = INT8_MIN;
	volatile uint32_t t5 = 25283880U;

    t5 = (((x269+x270)<<x271)|x272);

    if (t5 != 4294967168U) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int16_t x361 = 15;
	volatile uint16_t x363 = 14U;
	volatile uint32_t t6 = 193166994U;

    t6 = (((x361+x362)<<x363)|x364);

    if (t6 != 1286455332U) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x370 = 437LL;
	int8_t x371 = 7;
	volatile int64_t x372 = INT64_MAX;
	volatile int64_t t7 = INT64_MAX;

    t7 = (((x369+x370)<<x371)|x372);

    if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint16_t x393 = 25763U;
	uint32_t x394 = UINT32_MAX;
	static uint16_t x396 = 320U;

    t8 = (((x393+x394)<<x395)|x396);

    if (t8 != 51524U) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x517 = -1;
	static uint32_t x518 = 102216U;
	int16_t x519 = 0;
	uint32_t x520 = 92U;
	uint32_t t9 = 3U;

    t9 = (((x517+x518)<<x519)|x520);

    if (t9 != 102239U) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x565 = 35815LL;
	static uint16_t x567 = 8U;
	static int16_t x568 = -1;
	int64_t t10 = 96037315432556LL;

    t10 = (((x565+x566)<<x567)|x568);

    if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x677 = -1LL;
	uint16_t x678 = UINT16_MAX;
	int16_t x679 = 30;
	int64_t t11 = -7958187727673LL;

    t11 = (((x677+x678)<<x679)|x680);

    if (t11 != -7782LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x681 = 43491488174427LL;
	int16_t x682 = INT16_MIN;
	uint8_t x683 = 2U;
	int32_t x684 = -392;
	volatile int64_t t12 = -1132996LL;

    t12 = (((x681+x682)<<x683)|x684);

    if (t12 != -132LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x741 = 32LL;
	uint32_t x742 = 27U;
	int32_t x743 = 6;
	int64_t x744 = INT64_MAX;
	int64_t t13 = INT64_MAX;

    t13 = (((x741+x742)<<x743)|x744);

    if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x749 = 6437436019046LLU;
	uint64_t x750 = 181066298216610LLU;
	int8_t x751 = 21;
	int64_t x752 = INT64_MIN;
	uint64_t t14 = 209115891LLU;

    t14 = (((x749+x750)<<x751)|x752);

    if (t14 != 15065577748728643584LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x802 = 48;
	volatile int32_t x804 = INT32_MAX;
	int64_t t15 = -2311748757LL;

    t15 = (((x801+x802)<<x803)|x804);

    if (t15 != 12884901887LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x821 = 127089076227018LL;
	static int8_t x822 = INT8_MIN;
	int8_t x823 = 1;
	volatile int32_t x824 = -1;
	int64_t t16 = 3143368LL;

    t16 = (((x821+x822)<<x823)|x824);

    if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x833 = INT32_MAX;
	int64_t x834 = 902100LL;
	uint16_t x836 = UINT16_MAX;
	int64_t t17 = -219732LL;

    t17 = (((x833+x834)<<x835)|x836);

    if (t17 != 137496690687LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x837 = 0U;
	uint16_t x838 = UINT16_MAX;
	uint8_t x839 = 0U;
	static int32_t x840 = -26439;
	volatile int32_t t18 = -3851208;

    t18 = (((x837+x838)<<x839)|x840);

    if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x881 = INT64_MAX;
	int64_t x884 = -9412193781LL;
	volatile int64_t t19 = -7654040902821418LL;

    t19 = (((x881+x882)<<x883)|x884);

    if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x997 = -1LL;
	volatile uint64_t x998 = UINT64_MAX;
	volatile uint16_t x999 = 29U;
	static int8_t x1000 = INT8_MIN;
	static uint64_t t20 = 7516035368LLU;

    t20 = (((x997+x998)<<x999)|x1000);

    if (t20 != 18446744073709551488LLU) { NG(); } else { ; }
	
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


    return 0;
}


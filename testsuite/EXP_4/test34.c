
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

static int32_t x23 = -1;
static volatile int8_t x24 = 7;
int32_t t0 = -14791508;
static int64_t x197 = INT64_MAX;
static uint64_t x210 = UINT64_MAX;
volatile uint32_t x274 = UINT32_MAX;
uint8_t x305 = 0U;
uint64_t x306 = 780125241074778LLU;
volatile int32_t t7 = -178819;
int64_t x894 = 0LL;
volatile int32_t x1195 = -1;
int8_t x1581 = 7;
static uint32_t x1705 = 3744U;
int8_t x2003 = -1;
volatile int32_t t16 = -4680422;
uint8_t x2142 = 0U;
uint64_t x2143 = 100536387043LLU;
uint8_t x2261 = UINT8_MAX;
volatile int32_t t18 = 1262;
int64_t x2329 = 124808083686412LL;
uint8_t x2997 = UINT8_MAX;
static volatile uint16_t x3000 = 23U;
static int8_t x3006 = 0;
static uint16_t x3007 = UINT16_MAX;
uint64_t x3351 = UINT64_MAX;
int8_t x3668 = -1;
volatile int8_t x3761 = INT8_MAX;
int64_t x4103 = -1LL;
static int32_t t33 = 0;
uint32_t x4380 = 31914993U;
uint16_t x4734 = 0U;
volatile int16_t x4735 = -75;
uint64_t x4736 = UINT64_MAX;
static volatile uint32_t t40 = 14014U;
uint8_t x4981 = 2U;
int64_t x5016 = -1LL;
volatile int8_t x5185 = 13;
uint32_t x5188 = UINT32_MAX;
uint8_t x5205 = 0U;
volatile int32_t t44 = 0;
uint8_t x5466 = 0U;
uint16_t x5468 = 3U;
static uint16_t x5589 = UINT16_MAX;
int32_t x5698 = INT32_MIN;
static uint32_t x5699 = 2253U;
volatile int16_t x5754 = 0;
int8_t x5756 = 7;
int16_t x5922 = 0;
volatile int32_t t51 = 157;
volatile int64_t x5951 = -1LL;


void f0(void) {
    	int8_t x21 = 57;
	uint8_t x22 = 1U;

    t0 = (x21<<(x22*(x23+x24)));

    if (t0 != 3648) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x198 = -1;
	static int8_t x199 = -1;
	int8_t x200 = 1;
	int64_t t1 = INT64_MAX;

    t1 = (x197<<(x198*(x199+x200)));

    if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x209 = 3LL;
	static int32_t x211 = -61;
	uint8_t x212 = 1U;
	volatile int64_t t2 = 4901LL;

    t2 = (x209<<(x210*(x211+x212)));

    if (t2 != 3458764513820540928LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x273 = 29U;
	uint8_t x275 = 1U;
	int32_t x276 = -1;
	int32_t t3 = 14;

    t3 = (x273<<(x274*(x275+x276)));

    if (t3 != 29) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint16_t x307 = 1U;
	uint64_t x308 = UINT64_MAX;
	volatile int32_t t4 = -1753;

    t4 = (x305<<(x306*(x307+x308)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int16_t x469 = 12262;
	uint64_t x470 = 656LLU;
	volatile int64_t x471 = INT64_MIN;
	int8_t x472 = 0;
	int32_t t5 = 46484541;

    t5 = (x469<<(x470*(x471+x472)));

    if (t5 != 12262) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x625 = 3U;
	int16_t x626 = 0;
	int32_t x627 = -1;
	int16_t x628 = -1;
	static volatile uint32_t t6 = 1317738U;

    t6 = (x625<<(x626*(x627+x628)));

    if (t6 != 3U) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x773 = 42;
	volatile int8_t x774 = 0;
	int8_t x775 = 0;
	static int16_t x776 = -478;

    t7 = (x773<<(x774*(x775+x776)));

    if (t7 != 42) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x857 = 114U;
	int16_t x858 = 0;
	int8_t x859 = 1;
	static volatile uint32_t x860 = 4U;
	int32_t t8 = -1;

    t8 = (x857<<(x858*(x859+x860)));

    if (t8 != 114) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x893 = 3534281297281840LL;
	volatile int16_t x895 = -1;
	static int16_t x896 = 1;
	volatile int64_t t9 = 367716071LL;

    t9 = (x893<<(x894*(x895+x896)));

    if (t9 != 3534281297281840LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint16_t x1033 = UINT16_MAX;
	int32_t x1034 = INT32_MIN;
	uint8_t x1035 = UINT8_MAX;
	volatile uint32_t x1036 = 1U;
	volatile int32_t t10 = 11537;

    t10 = (x1033<<(x1034*(x1035+x1036)));

    if (t10 != 65535) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x1193 = 54U;
	int16_t x1194 = -1;
	static uint32_t x1196 = UINT32_MAX;
	volatile int32_t t11 = -8343538;

    t11 = (x1193<<(x1194*(x1195+x1196)));

    if (t11 != 216) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x1582 = INT16_MIN;
	int32_t x1583 = INT32_MAX;
	static uint32_t x1584 = 1U;
	int32_t t12 = -4404921;

    t12 = (x1581<<(x1582*(x1583+x1584)));

    if (t12 != 7) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x1706 = INT64_MIN;
	uint32_t x1707 = UINT32_MAX;
	static uint64_t x1708 = UINT64_MAX;
	uint32_t t13 = 0U;

    t13 = (x1705<<(x1706*(x1707+x1708)));

    if (t13 != 3744U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x1917 = 650U;
	static uint64_t x1918 = UINT64_MAX;
	int8_t x1919 = -1;
	uint8_t x1920 = 1U;
	int32_t t14 = -1985;

    t14 = (x1917<<(x1918*(x1919+x1920)));

    if (t14 != 650) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x1981 = 55U;
	volatile int8_t x1982 = -1;
	int64_t x1983 = -1LL;
	int32_t x1984 = -1;
	uint32_t t15 = 4962621U;

    t15 = (x1981<<(x1982*(x1983+x1984)));

    if (t15 != 220U) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x2001 = 10U;
	int8_t x2002 = -1;
	static int64_t x2004 = -1LL;

    t16 = (x2001<<(x2002*(x2003+x2004)));

    if (t16 != 40) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint32_t x2141 = 13263U;
	int64_t x2144 = -1LL;
	volatile uint32_t t17 = 6818U;

    t17 = (x2141<<(x2142*(x2143+x2144)));

    if (t17 != 13263U) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x2262 = -1;
	int16_t x2263 = -1;
	static int16_t x2264 = 1;

    t18 = (x2261<<(x2262*(x2263+x2264)));

    if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint8_t x2330 = UINT8_MAX;
	int8_t x2331 = 1;
	volatile int64_t x2332 = -1LL;
	volatile int64_t t19 = 11939635LL;

    t19 = (x2329<<(x2330*(x2331+x2332)));

    if (t19 != 124808083686412LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x2521 = 2013892514589580606LLU;
	int8_t x2522 = -1;
	int8_t x2523 = -1;
	static int32_t x2524 = -1;
	volatile uint64_t t20 = 0LLU;

    t20 = (x2521<<(x2522*(x2523+x2524)));

    if (t20 != 8055570058358322424LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x2801 = INT8_MAX;
	volatile uint8_t x2802 = 0U;
	uint8_t x2803 = 0U;
	volatile int16_t x2804 = INT16_MIN;
	volatile int32_t t21 = -3761;

    t21 = (x2801<<(x2802*(x2803+x2804)));

    if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x2998 = 0;
	volatile int32_t x2999 = 1;
	int32_t t22 = 218259617;

    t22 = (x2997<<(x2998*(x2999+x3000)));

    if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x3005 = 13U;
	int64_t x3008 = INT64_MIN;
	volatile int32_t t23 = -1933;

    t23 = (x3005<<(x3006*(x3007+x3008)));

    if (t23 != 13) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x3153 = UINT32_MAX;
	int32_t x3154 = INT32_MIN;
	int16_t x3155 = -1;
	int64_t x3156 = 1LL;
	uint32_t t24 = UINT32_MAX;

    t24 = (x3153<<(x3154*(x3155+x3156)));

    if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint16_t x3349 = UINT16_MAX;
	int32_t x3350 = -1;
	static volatile uint64_t x3352 = UINT64_MAX;
	int32_t t25 = -2093;

    t25 = (x3349<<(x3350*(x3351+x3352)));

    if (t25 != 262140) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x3437 = UINT8_MAX;
	int16_t x3438 = 0;
	int16_t x3439 = -1;
	int64_t x3440 = INT64_MAX;
	static volatile int32_t t26 = 326128;

    t26 = (x3437<<(x3438*(x3439+x3440)));

    if (t26 != 255) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x3649 = 0;
	static uint16_t x3650 = 0U;
	int32_t x3651 = 88145;
	int16_t x3652 = INT16_MAX;
	int32_t t27 = -4412713;

    t27 = (x3649<<(x3650*(x3651+x3652)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint8_t x3665 = UINT8_MAX;
	int8_t x3666 = INT8_MIN;
	static int16_t x3667 = 1;
	volatile int32_t t28 = 0;

    t28 = (x3665<<(x3666*(x3667+x3668)));

    if (t28 != 255) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x3689 = 10114309U;
	int64_t x3690 = 0LL;
	uint16_t x3691 = UINT16_MAX;
	static int8_t x3692 = INT8_MIN;
	uint32_t t29 = 12961U;

    t29 = (x3689<<(x3690*(x3691+x3692)));

    if (t29 != 10114309U) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint16_t x3762 = 0U;
	volatile uint32_t x3763 = UINT32_MAX;
	int8_t x3764 = INT8_MAX;
	int32_t t30 = 7386;

    t30 = (x3761<<(x3762*(x3763+x3764)));

    if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x3789 = 1;
	volatile int8_t x3790 = -1;
	int32_t x3791 = INT32_MAX;
	int32_t x3792 = INT32_MIN;
	int32_t t31 = -1;

    t31 = (x3789<<(x3790*(x3791+x3792)));

    if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x4101 = 2;
	static volatile int8_t x4102 = 0;
	uint32_t x4104 = UINT32_MAX;
	volatile int32_t t32 = 79078261;

    t32 = (x4101<<(x4102*(x4103+x4104)));

    if (t32 != 2) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint16_t x4249 = 7459U;
	int8_t x4250 = 0;
	volatile int32_t x4251 = INT32_MAX;
	int8_t x4252 = -1;

    t33 = (x4249<<(x4250*(x4251+x4252)));

    if (t33 != 7459) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x4289 = INT64_MAX;
	int16_t x4290 = 0;
	volatile int16_t x4291 = INT16_MIN;
	int64_t x4292 = -1LL;
	static int64_t t34 = INT64_MAX;

    t34 = (x4289<<(x4290*(x4291+x4292)));

    if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x4313 = 23017404U;
	int8_t x4314 = 1;
	uint8_t x4315 = 2U;
	volatile int32_t x4316 = -1;
	static volatile uint32_t t35 = 325844273U;

    t35 = (x4313<<(x4314*(x4315+x4316)));

    if (t35 != 46034808U) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x4365 = 166357749354968LLU;
	uint64_t x4366 = UINT64_MAX;
	int8_t x4367 = -4;
	volatile uint64_t x4368 = UINT64_MAX;
	uint64_t t36 = 20LLU;

    t36 = (x4365<<(x4366*(x4367+x4368)));

    if (t36 != 5323447979358976LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x4377 = 2882U;
	int32_t x4378 = INT32_MIN;
	volatile uint8_t x4379 = 27U;
	uint32_t t37 = 1262U;

    t37 = (x4377<<(x4378*(x4379+x4380)));

    if (t37 != 2882U) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x4601 = 63U;
	int64_t x4602 = INT64_MIN;
	static int64_t x4603 = -1LL;
	uint64_t x4604 = UINT64_MAX;
	volatile int32_t t38 = 0;

    t38 = (x4601<<(x4602*(x4603+x4604)));

    if (t38 != 63) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x4609 = UINT64_MAX;
	int64_t x4610 = INT64_MIN;
	static volatile int32_t x4611 = 5;
	uint64_t x4612 = 12833LLU;
	uint64_t t39 = UINT64_MAX;

    t39 = (x4609<<(x4610*(x4611+x4612)));

    if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint32_t x4733 = 3U;

    t40 = (x4733<<(x4734*(x4735+x4736)));

    if (t40 != 3U) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x4982 = 0;
	uint64_t x4983 = 581LLU;
	int64_t x4984 = INT64_MIN;
	static volatile int32_t t41 = -12;

    t41 = (x4981<<(x4982*(x4983+x4984)));

    if (t41 != 2) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint8_t x5013 = 29U;
	int64_t x5014 = -1LL;
	uint64_t x5015 = 0LLU;
	volatile int32_t t42 = -5777622;

    t42 = (x5013<<(x5014*(x5015+x5016)));

    if (t42 != 58) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x5186 = UINT32_MAX;
	static uint16_t x5187 = 1U;
	static volatile int32_t t43 = 4045;

    t43 = (x5185<<(x5186*(x5187+x5188)));

    if (t43 != 13) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x5206 = INT32_MIN;
	uint32_t x5207 = 111704248U;
	volatile int8_t x5208 = INT8_MIN;

    t44 = (x5205<<(x5206*(x5207+x5208)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x5465 = INT32_MAX;
	int16_t x5467 = INT16_MIN;
	volatile int32_t t45 = INT32_MAX;

    t45 = (x5465<<(x5466*(x5467+x5468)));

    if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x5590 = -1LL;
	uint64_t x5591 = UINT64_MAX;
	static int32_t x5592 = -1;
	volatile int32_t t46 = -10;

    t46 = (x5589<<(x5590*(x5591+x5592)));

    if (t46 != 262140) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x5697 = UINT32_MAX;
	uint8_t x5700 = UINT8_MAX;
	uint32_t t47 = UINT32_MAX;

    t47 = (x5697<<(x5698*(x5699+x5700)));

    if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint8_t x5701 = 12U;
	int32_t x5702 = INT32_MIN;
	int16_t x5703 = INT16_MIN;
	uint32_t x5704 = 20016U;
	volatile int32_t t48 = -16967;

    t48 = (x5701<<(x5702*(x5703+x5704)));

    if (t48 != 12) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int8_t x5753 = INT8_MAX;
	int8_t x5755 = -3;
	int32_t t49 = -1;

    t49 = (x5753<<(x5754*(x5755+x5756)));

    if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x5853 = INT64_MAX;
	int32_t x5854 = 0;
	uint8_t x5855 = 6U;
	uint64_t x5856 = UINT64_MAX;
	volatile int64_t t50 = INT64_MAX;

    t50 = (x5853<<(x5854*(x5855+x5856)));

    if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x5921 = UINT16_MAX;
	int16_t x5923 = -28;
	int32_t x5924 = -83170041;

    t51 = (x5921<<(x5922*(x5923+x5924)));

    if (t51 != 65535) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x5949 = 31U;
	int16_t x5950 = -1;
	int16_t x5952 = -1;
	int32_t t52 = 0;

    t52 = (x5949<<(x5950*(x5951+x5952)));

    if (t52 != 124) { NG(); } else { ; }
	
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


    return 0;
}


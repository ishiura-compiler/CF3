
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

static int64_t x4 = INT64_MIN;
int64_t x5 = 11LL;
uint64_t x6 = 1LLU;
volatile int64_t x12 = -1LL;
static int8_t x14 = INT8_MAX;
uint32_t x16 = 30292U;
uint8_t x33 = 31U;
int32_t x40 = INT32_MAX;
int32_t t6 = 22;
uint16_t x47 = 8494U;
volatile int64_t x48 = 9884LL;
int16_t x52 = INT16_MIN;
volatile int8_t x55 = -1;
int32_t x61 = 436;
static int8_t x64 = INT8_MAX;
int32_t x69 = INT32_MIN;
int16_t x70 = INT16_MIN;
volatile int8_t x71 = -1;
volatile int16_t x75 = INT16_MIN;
uint8_t x78 = 6U;
int16_t x84 = -1;
int32_t t15 = -4043;
static int16_t x89 = 378;
int8_t x91 = -1;
uint32_t x110 = 1U;
int32_t x118 = INT32_MIN;
uint16_t x122 = UINT16_MAX;
int32_t x124 = -4;
volatile int32_t t23 = 1425286;
volatile int64_t x143 = 1LL;
static int8_t x144 = -1;
uint64_t x148 = 1519808491296324973LLU;
int32_t t26 = 367725905;
uint32_t x158 = UINT32_MAX;
uint64_t x164 = 13938713LLU;
int64_t x168 = -3379996812810LL;
int32_t t30 = 59882;
int8_t x191 = -1;
int32_t x192 = INT32_MIN;
volatile uint16_t x196 = UINT16_MAX;
int32_t x202 = 2;
int32_t t35 = -3588;
static int8_t x210 = -1;
static uint8_t x212 = UINT8_MAX;
volatile int32_t t36 = 7116090;
uint8_t x214 = 2U;
int32_t t37 = 12;
int64_t x221 = INT64_MIN;
volatile int8_t x224 = INT8_MIN;
uint32_t x227 = UINT32_MAX;
static int64_t x232 = INT64_MAX;
uint64_t x238 = 62344926461035435LLU;
uint64_t x239 = 1LLU;
static int64_t x241 = 5LL;
int64_t x246 = 255006LL;
int32_t t45 = -2;
int8_t x251 = -3;
uint16_t x261 = 3U;
int32_t t48 = -1985076;
uint8_t x279 = 107U;
uint32_t x285 = 22844U;
uint64_t x287 = UINT64_MAX;
int32_t x301 = INT32_MIN;
static int16_t x302 = -1012;
uint32_t x303 = 4388706U;
static volatile int32_t t56 = 5807;
volatile int16_t x320 = INT16_MAX;
static int16_t x325 = -213;
int32_t t62 = 4068;
uint16_t x329 = 2261U;
uint32_t x331 = UINT32_MAX;
int32_t t65 = -1;
static int16_t x347 = INT16_MAX;
uint8_t x348 = UINT8_MAX;
volatile int32_t x357 = INT32_MAX;
static int8_t x364 = INT8_MIN;
uint64_t x378 = 1902724LLU;
volatile uint64_t x379 = 548498232485977013LLU;
uint32_t x390 = 2237344U;
static uint32_t x401 = UINT32_MAX;
static uint32_t x408 = 164106U;
volatile int16_t x421 = INT16_MIN;
volatile int8_t x422 = 8;
int16_t x425 = -1;
volatile int8_t x431 = INT8_MIN;
uint16_t x439 = 418U;
static volatile uint16_t x440 = 138U;
static uint8_t x444 = UINT8_MAX;
int32_t t85 = 29516015;
int8_t x455 = INT8_MAX;
volatile uint8_t x458 = 7U;
int32_t t89 = -831770;
int64_t x470 = -114LL;
static int32_t t91 = 22;
int8_t x480 = -1;
uint16_t x484 = 30321U;
uint64_t x486 = 8573966167752LLU;
int32_t x489 = -1;
int32_t t95 = -2;
static uint8_t x493 = 0U;
int16_t x495 = -1;
int32_t t96 = -212243;
int64_t x529 = INT64_MAX;
static uint64_t x530 = UINT64_MAX;
volatile int32_t x537 = INT32_MIN;
int64_t x538 = -1LL;
int64_t x539 = -629922370140LL;
int8_t x541 = INT8_MIN;
volatile uint64_t x550 = 5LLU;
static uint64_t x551 = UINT64_MAX;
int32_t t103 = -1003618317;
int16_t x574 = -149;
static int32_t t106 = -5915322;
int32_t x583 = -34;
uint8_t x603 = 5U;
volatile uint8_t x614 = 6U;
int32_t x636 = INT32_MIN;
int64_t x641 = INT64_MAX;
uint64_t x642 = UINT64_MAX;
volatile int64_t x645 = 479LL;
volatile int64_t x653 = -80679568488LL;
uint64_t x655 = UINT64_MAX;
int16_t x656 = INT16_MIN;
uint16_t x659 = UINT16_MAX;
static volatile int32_t t120 = -8281225;
int16_t x663 = -5;
static volatile int32_t t121 = -19;
volatile int64_t x666 = 8831825300LL;
int32_t t123 = -134;
volatile int32_t t124 = -14;
int32_t x680 = 3708370;
static volatile int32_t t126 = 8;
uint32_t x689 = 6U;
uint32_t x691 = 57U;
static volatile uint32_t x693 = 11691U;
int8_t x696 = INT8_MIN;
int16_t x701 = 6101;
uint8_t x706 = 1U;
uint32_t x708 = 101921U;
int32_t t130 = 2;
static int8_t x709 = -1;
static volatile int8_t x724 = 55;
static int32_t t133 = 2;
static int16_t x733 = 101;
uint64_t x736 = 29266140LLU;
volatile int8_t x765 = INT8_MAX;
static volatile int32_t t138 = -174442;
uint16_t x774 = 5346U;
int32_t t141 = -87535351;
volatile int16_t x781 = -119;
static int64_t x791 = -1LL;
volatile int32_t x792 = INT32_MIN;
uint64_t x803 = UINT64_MAX;
volatile int32_t t146 = -4138;
volatile uint32_t x810 = 3612232U;
int32_t x823 = 290415;
uint32_t x824 = UINT32_MAX;
int16_t x830 = INT16_MIN;
int32_t t151 = 16666865;
uint8_t x852 = UINT8_MAX;
volatile int32_t t153 = 90333;
volatile int8_t x855 = -2;
volatile int32_t t154 = 965211;
int16_t x858 = -1;
static uint8_t x859 = 1U;
int32_t x862 = INT32_MIN;
int32_t x863 = INT32_MAX;
int32_t x868 = INT32_MAX;
int16_t x869 = INT16_MIN;
uint8_t x876 = 7U;
int32_t t159 = -62649553;
volatile int8_t x882 = INT8_MIN;
int16_t x886 = -1;
int32_t t161 = -26194700;
int8_t x891 = INT8_MIN;
volatile int32_t x892 = INT32_MIN;
volatile int32_t t162 = -116242671;
int16_t x898 = INT16_MIN;
int32_t x920 = INT32_MIN;
uint16_t x921 = UINT16_MAX;
volatile uint16_t x924 = 5101U;
static uint8_t x927 = UINT8_MAX;
uint32_t x928 = UINT32_MAX;
int32_t t170 = -32150;
static uint32_t x939 = 31762U;
int32_t x941 = INT32_MAX;
volatile int8_t x942 = 3;
uint8_t x949 = 0U;
static int64_t x950 = INT64_MIN;
static uint32_t x951 = 6154U;
volatile int32_t t175 = 1;
volatile uint16_t x965 = UINT16_MAX;
uint64_t x967 = UINT64_MAX;
volatile int32_t t177 = 987;
volatile int64_t x971 = INT64_MIN;
volatile int32_t t180 = 54076993;
volatile int32_t x1000 = INT32_MIN;
volatile int16_t x1001 = INT16_MIN;
static int16_t x1003 = INT16_MAX;
volatile int32_t t184 = -7461;
volatile uint16_t x1011 = 8261U;
int16_t x1013 = 1;
volatile int32_t t188 = -13;
volatile int64_t x1040 = INT64_MIN;
volatile int32_t t191 = 178833843;
static volatile int32_t t192 = -5;
int8_t x1050 = INT8_MIN;
uint8_t x1062 = 2U;
uint64_t x1066 = UINT64_MAX;
static volatile int32_t t199 = -28;


void f0(void) {
    	uint16_t x1 = UINT16_MAX;
	int8_t x2 = INT8_MIN;
	int64_t x3 = INT64_MIN;
	int32_t t0 = 0;

    t0 = (x1==(x2/(x3&x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x7 = INT64_MIN;
	int8_t x8 = INT8_MIN;
	volatile int32_t t1 = 719083;

    t1 = (x5==(x6/(x7&x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint64_t x9 = 5105631466LLU;
	int16_t x10 = INT16_MAX;
	uint8_t x11 = UINT8_MAX;
	int32_t t2 = -926;

    t2 = (x9==(x10/(x11&x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = 1;
	uint8_t x15 = 30U;
	int32_t t3 = -7841132;

    t3 = (x13==(x14/(x15&x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x34 = 13011087U;
	volatile int8_t x35 = INT8_MIN;
	int16_t x36 = -1;
	static volatile int32_t t4 = 873984632;

    t4 = (x33==(x34/(x35&x36)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x37 = 3466760U;
	volatile int8_t x38 = -10;
	int64_t x39 = -1LL;
	int32_t t5 = 30;

    t5 = (x37==(x38/(x39&x40)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x41 = INT64_MIN;
	static volatile int64_t x42 = -1LL;
	int64_t x43 = INT64_MAX;
	int8_t x44 = INT8_MIN;

    t6 = (x41==(x42/(x43&x44)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x45 = 22319LLU;
	volatile uint8_t x46 = 7U;
	volatile int32_t t7 = -773443;

    t7 = (x45==(x46/(x47&x48)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x49 = INT16_MAX;
	uint32_t x50 = 30822968U;
	int64_t x51 = -12LL;
	volatile int32_t t8 = 242884641;

    t8 = (x49==(x50/(x51&x52)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x53 = UINT64_MAX;
	uint16_t x54 = 14U;
	int32_t x56 = -118687;
	int32_t t9 = -1046241771;

    t9 = (x53==(x54/(x55&x56)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x62 = 5;
	volatile int16_t x63 = INT16_MAX;
	volatile int32_t t10 = -14;

    t10 = (x61==(x62/(x63&x64)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x72 = 89U;
	static volatile int32_t t11 = -3;

    t11 = (x69==(x70/(x71&x72)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x73 = -1;
	int32_t x74 = INT32_MAX;
	int16_t x76 = -1;
	static volatile int32_t t12 = 1368140;

    t12 = (x73==(x74/(x75&x76)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x77 = INT64_MIN;
	int32_t x79 = INT32_MAX;
	uint64_t x80 = UINT64_MAX;
	static int32_t t13 = -1543;

    t13 = (x77==(x78/(x79&x80)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x81 = INT8_MAX;
	int32_t x82 = INT32_MAX;
	int64_t x83 = 12LL;
	static int32_t t14 = 94163428;

    t14 = (x81==(x82/(x83&x84)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x85 = UINT8_MAX;
	int16_t x86 = INT16_MIN;
	int32_t x87 = -1;
	volatile int64_t x88 = -32670506840566672LL;

    t15 = (x85==(x86/(x87&x88)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x90 = INT8_MIN;
	int8_t x92 = INT8_MAX;
	static volatile int32_t t16 = -76;

    t16 = (x89==(x90/(x91&x92)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x93 = 1U;
	volatile uint64_t x94 = 171434847256892827LLU;
	int16_t x95 = INT16_MIN;
	int64_t x96 = INT64_MIN;
	int32_t t17 = -881336;

    t17 = (x93==(x94/(x95&x96)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint64_t x101 = UINT64_MAX;
	int16_t x102 = 62;
	static volatile int32_t x103 = -207290;
	uint8_t x104 = 59U;
	volatile int32_t t18 = -3838174;

    t18 = (x101==(x102/(x103&x104)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x109 = 1LLU;
	int8_t x111 = -6;
	int32_t x112 = INT32_MIN;
	int32_t t19 = -3;

    t19 = (x109==(x110/(x111&x112)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x113 = 1LLU;
	volatile int8_t x114 = 15;
	int16_t x115 = 1;
	int64_t x116 = -1LL;
	int32_t t20 = 8130;

    t20 = (x113==(x114/(x115&x116)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint32_t x117 = 2416917U;
	int32_t x119 = INT32_MAX;
	uint8_t x120 = 107U;
	int32_t t21 = -244;

    t21 = (x117==(x118/(x119&x120)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x121 = INT8_MIN;
	volatile uint16_t x123 = UINT16_MAX;
	int32_t t22 = -273460;

    t22 = (x121==(x122/(x123&x124)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x125 = 150U;
	uint8_t x126 = 0U;
	static int8_t x127 = -1;
	uint8_t x128 = 53U;

    t23 = (x125==(x126/(x127&x128)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x133 = -1;
	uint32_t x134 = UINT32_MAX;
	int8_t x135 = -1;
	static uint64_t x136 = 405522864629776LLU;
	volatile int32_t t24 = -16544923;

    t24 = (x133==(x134/(x135&x136)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x141 = -1;
	volatile uint8_t x142 = UINT8_MAX;
	int32_t t25 = 492318896;

    t25 = (x141==(x142/(x143&x144)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x145 = INT64_MAX;
	int16_t x146 = -2;
	int16_t x147 = 9;

    t26 = (x145==(x146/(x147&x148)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x153 = 14288676110278LL;
	int16_t x154 = INT16_MAX;
	volatile int8_t x155 = -47;
	int32_t x156 = -127119;
	static int32_t t27 = -414;

    t27 = (x153==(x154/(x155&x156)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x157 = 1;
	int8_t x159 = INT8_MIN;
	uint32_t x160 = UINT32_MAX;
	int32_t t28 = -1443;

    t28 = (x157==(x158/(x159&x160)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x161 = INT32_MIN;
	uint8_t x162 = 9U;
	static int64_t x163 = INT64_MAX;
	int32_t t29 = -180123;

    t29 = (x161==(x162/(x163&x164)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint32_t x165 = 1953933310U;
	static int8_t x166 = 20;
	uint16_t x167 = 9814U;

    t30 = (x165==(x166/(x167&x168)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x181 = INT8_MIN;
	uint8_t x182 = UINT8_MAX;
	volatile int64_t x183 = -1091499181LL;
	int16_t x184 = INT16_MIN;
	int32_t t31 = -151645227;

    t31 = (x181==(x182/(x183&x184)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x189 = UINT8_MAX;
	static volatile int64_t x190 = INT64_MAX;
	int32_t t32 = -12545330;

    t32 = (x189==(x190/(x191&x192)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x193 = INT64_MIN;
	uint32_t x194 = UINT32_MAX;
	uint16_t x195 = 468U;
	int32_t t33 = -4347;

    t33 = (x193==(x194/(x195&x196)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x201 = INT64_MAX;
	static volatile int32_t x203 = -1;
	uint32_t x204 = 1U;
	int32_t t34 = 2420872;

    t34 = (x201==(x202/(x203&x204)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x205 = -1LL;
	int32_t x206 = -1;
	int16_t x207 = INT16_MIN;
	static int16_t x208 = -70;

    t35 = (x205==(x206/(x207&x208)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint64_t x209 = 1548886351943623LLU;
	uint32_t x211 = 1U;

    t36 = (x209==(x210/(x211&x212)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x213 = 967U;
	uint32_t x215 = UINT32_MAX;
	int16_t x216 = INT16_MAX;

    t37 = (x213==(x214/(x215&x216)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x217 = -1LL;
	static int16_t x218 = INT16_MIN;
	volatile int8_t x219 = -1;
	int32_t x220 = INT32_MIN;
	static int32_t t38 = -196;

    t38 = (x217==(x218/(x219&x220)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x222 = INT8_MIN;
	uint64_t x223 = UINT64_MAX;
	volatile int32_t t39 = 9636;

    t39 = (x221==(x222/(x223&x224)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x225 = INT32_MIN;
	int32_t x226 = -1;
	int8_t x228 = INT8_MAX;
	static int32_t t40 = -7;

    t40 = (x225==(x226/(x227&x228)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x229 = 112;
	int64_t x230 = 48015LL;
	volatile uint8_t x231 = 125U;
	volatile int32_t t41 = -30;

    t41 = (x229==(x230/(x231&x232)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x233 = -7033;
	int32_t x234 = -87816;
	volatile int64_t x235 = 20884680LL;
	int8_t x236 = -1;
	volatile int32_t t42 = 21229670;

    t42 = (x233==(x234/(x235&x236)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint64_t x237 = UINT64_MAX;
	int16_t x240 = 1;
	static volatile int32_t t43 = -1055328;

    t43 = (x237==(x238/(x239&x240)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x242 = 19U;
	int16_t x243 = -6;
	static uint64_t x244 = UINT64_MAX;
	volatile int32_t t44 = -640421;

    t44 = (x241==(x242/(x243&x244)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x245 = INT16_MIN;
	int32_t x247 = INT32_MIN;
	int64_t x248 = INT64_MIN;

    t45 = (x245==(x246/(x247&x248)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint32_t x249 = UINT32_MAX;
	int16_t x250 = INT16_MIN;
	int8_t x252 = INT8_MAX;
	int32_t t46 = 225705;

    t46 = (x249==(x250/(x251&x252)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int16_t x253 = INT16_MIN;
	int32_t x254 = 263168528;
	int16_t x255 = INT16_MIN;
	volatile uint32_t x256 = 7765764U;
	volatile int32_t t47 = -1;

    t47 = (x253==(x254/(x255&x256)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x262 = 7485U;
	int16_t x263 = 3;
	int32_t x264 = INT32_MAX;

    t48 = (x261==(x262/(x263&x264)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x265 = -1LL;
	int32_t x266 = -1;
	uint8_t x267 = 13U;
	int32_t x268 = -5;
	static int32_t t49 = -135;

    t49 = (x265==(x266/(x267&x268)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x269 = INT8_MAX;
	int8_t x270 = INT8_MIN;
	volatile int32_t x271 = -355;
	int8_t x272 = -47;
	volatile int32_t t50 = 124;

    t50 = (x269==(x270/(x271&x272)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x273 = 1235571024528137609LLU;
	int64_t x274 = -1LL;
	int64_t x275 = INT64_MIN;
	int32_t x276 = -1;
	volatile int32_t t51 = -48;

    t51 = (x273==(x274/(x275&x276)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x277 = -1;
	uint64_t x278 = 4228132143LLU;
	volatile int16_t x280 = 2;
	volatile int32_t t52 = -912;

    t52 = (x277==(x278/(x279&x280)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x286 = INT16_MIN;
	uint16_t x288 = 11U;
	volatile int32_t t53 = 2744422;

    t53 = (x285==(x286/(x287&x288)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint64_t x289 = 2092157032725065LLU;
	static int16_t x290 = -5935;
	int32_t x291 = INT32_MAX;
	int8_t x292 = -1;
	static volatile int32_t t54 = -418019392;

    t54 = (x289==(x290/(x291&x292)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x297 = -1;
	static int32_t x298 = -1;
	static int8_t x299 = -1;
	int8_t x300 = INT8_MIN;
	int32_t t55 = -139515;

    t55 = (x297==(x298/(x299&x300)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x304 = INT8_MIN;

    t56 = (x301==(x302/(x303&x304)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x305 = 3;
	volatile int16_t x306 = 254;
	int32_t x307 = INT32_MAX;
	uint64_t x308 = UINT64_MAX;
	static volatile int32_t t57 = -414306;

    t57 = (x305==(x306/(x307&x308)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x309 = -1;
	int8_t x310 = -1;
	int32_t x311 = -1;
	volatile uint8_t x312 = UINT8_MAX;
	static int32_t t58 = 6241;

    t58 = (x309==(x310/(x311&x312)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x313 = 5395;
	int64_t x314 = -6LL;
	uint64_t x315 = UINT64_MAX;
	int8_t x316 = -1;
	int32_t t59 = -1;

    t59 = (x313==(x314/(x315&x316)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x317 = INT64_MAX;
	volatile int64_t x318 = INT64_MAX;
	uint64_t x319 = 35444LLU;
	volatile int32_t t60 = 61;

    t60 = (x317==(x318/(x319&x320)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x321 = INT8_MAX;
	int16_t x322 = -1;
	static int32_t x323 = -595933462;
	int16_t x324 = 7;
	volatile int32_t t61 = 10;

    t61 = (x321==(x322/(x323&x324)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x326 = INT16_MIN;
	int8_t x327 = INT8_MAX;
	int32_t x328 = -1;

    t62 = (x325==(x326/(x327&x328)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x330 = 132U;
	int32_t x332 = INT32_MIN;
	static volatile int32_t t63 = 132113753;

    t63 = (x329==(x330/(x331&x332)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x333 = 49U;
	uint16_t x334 = 841U;
	volatile int64_t x335 = INT64_MAX;
	int32_t x336 = 21105311;
	volatile int32_t t64 = 0;

    t64 = (x333==(x334/(x335&x336)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x337 = 18371978400583758LLU;
	volatile int64_t x338 = INT64_MIN;
	volatile int16_t x339 = INT16_MIN;
	static uint64_t x340 = 127091528606974LLU;

    t65 = (x337==(x338/(x339&x340)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x345 = -1;
	volatile int16_t x346 = INT16_MIN;
	static volatile int32_t t66 = -1;

    t66 = (x345==(x346/(x347&x348)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x353 = 4;
	int64_t x354 = INT64_MIN;
	static int32_t x355 = -464430;
	int32_t x356 = INT32_MAX;
	volatile int32_t t67 = 558160334;

    t67 = (x353==(x354/(x355&x356)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x358 = 11U;
	int32_t x359 = 711817567;
	volatile uint8_t x360 = 110U;
	static volatile int32_t t68 = 171;

    t68 = (x357==(x358/(x359&x360)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x361 = -13;
	int64_t x362 = 7180LL;
	int16_t x363 = 10205;
	static volatile int32_t t69 = 783;

    t69 = (x361==(x362/(x363&x364)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x369 = INT16_MIN;
	int8_t x370 = INT8_MIN;
	int8_t x371 = -1;
	static volatile int16_t x372 = INT16_MIN;
	int32_t t70 = -3186154;

    t70 = (x369==(x370/(x371&x372)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x377 = INT16_MIN;
	volatile int8_t x380 = 1;
	static volatile int32_t t71 = -5732767;

    t71 = (x377==(x378/(x379&x380)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x381 = 46U;
	int64_t x382 = INT64_MIN;
	volatile uint16_t x383 = UINT16_MAX;
	volatile int8_t x384 = 33;
	volatile int32_t t72 = 470;

    t72 = (x381==(x382/(x383&x384)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x385 = -47532588406LL;
	static uint16_t x386 = UINT16_MAX;
	static uint8_t x387 = UINT8_MAX;
	volatile uint64_t x388 = 3339711670603349227LLU;
	volatile int32_t t73 = 7448;

    t73 = (x385==(x386/(x387&x388)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x389 = 3;
	uint16_t x391 = 2U;
	uint8_t x392 = 75U;
	int32_t t74 = -4624;

    t74 = (x389==(x390/(x391&x392)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint64_t x402 = 6761807033LLU;
	int64_t x403 = -1LL;
	static uint8_t x404 = 12U;
	int32_t t75 = 0;

    t75 = (x401==(x402/(x403&x404)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint16_t x405 = 3866U;
	int64_t x406 = -1LL;
	int8_t x407 = 27;
	volatile int32_t t76 = -108678;

    t76 = (x405==(x406/(x407&x408)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x409 = INT16_MIN;
	int32_t x410 = INT32_MAX;
	static volatile uint32_t x411 = 5U;
	static int64_t x412 = INT64_MAX;
	int32_t t77 = 29;

    t77 = (x409==(x410/(x411&x412)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x417 = INT8_MAX;
	int8_t x418 = 20;
	volatile int16_t x419 = INT16_MAX;
	static uint16_t x420 = UINT16_MAX;
	volatile int32_t t78 = -11;

    t78 = (x417==(x418/(x419&x420)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x423 = INT64_MAX;
	uint64_t x424 = 16538930625353LLU;
	static volatile int32_t t79 = 255048;

    t79 = (x421==(x422/(x423&x424)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x426 = 1778731601442LLU;
	volatile int8_t x427 = INT8_MAX;
	uint16_t x428 = 5U;
	int32_t t80 = -986916;

    t80 = (x425==(x426/(x427&x428)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x429 = INT64_MAX;
	volatile int32_t x430 = INT32_MIN;
	uint32_t x432 = 1399427U;
	volatile int32_t t81 = 410932;

    t81 = (x429==(x430/(x431&x432)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x433 = INT16_MIN;
	volatile uint64_t x434 = UINT64_MAX;
	volatile int64_t x435 = -1LL;
	int64_t x436 = -1LL;
	volatile int32_t t82 = 262666545;

    t82 = (x433==(x434/(x435&x436)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x437 = INT64_MIN;
	static int8_t x438 = -1;
	int32_t t83 = -244726972;

    t83 = (x437==(x438/(x439&x440)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint32_t x441 = 212807U;
	int64_t x442 = INT64_MIN;
	static int16_t x443 = -1;
	int32_t t84 = 35216;

    t84 = (x441==(x442/(x443&x444)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x445 = 1;
	static int16_t x446 = INT16_MAX;
	int32_t x447 = INT32_MIN;
	int64_t x448 = INT64_MIN;

    t85 = (x445==(x446/(x447&x448)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x449 = UINT64_MAX;
	static int16_t x450 = -3;
	int32_t x451 = -1;
	int8_t x452 = INT8_MIN;
	volatile int32_t t86 = -13541263;

    t86 = (x449==(x450/(x451&x452)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x453 = INT8_MAX;
	volatile int16_t x454 = 0;
	static volatile uint64_t x456 = 193LLU;
	volatile int32_t t87 = 89;

    t87 = (x453==(x454/(x455&x456)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x457 = -1;
	int64_t x459 = INT64_MIN;
	volatile int32_t x460 = -1;
	volatile int32_t t88 = 934809;

    t88 = (x457==(x458/(x459&x460)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int64_t x461 = -654388472153LL;
	uint16_t x462 = 14U;
	int8_t x463 = -1;
	int16_t x464 = -1;

    t89 = (x461==(x462/(x463&x464)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x469 = -5LL;
	static uint16_t x471 = 3U;
	static uint64_t x472 = 159590LLU;
	volatile int32_t t90 = 2;

    t90 = (x469==(x470/(x471&x472)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x473 = 25986;
	uint8_t x474 = UINT8_MAX;
	uint64_t x475 = UINT64_MAX;
	uint16_t x476 = 1U;

    t91 = (x473==(x474/(x475&x476)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x477 = UINT16_MAX;
	static volatile uint8_t x478 = 6U;
	uint32_t x479 = 418495956U;
	int32_t t92 = -3;

    t92 = (x477==(x478/(x479&x480)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x481 = 2U;
	int32_t x482 = -1;
	static volatile int16_t x483 = INT16_MAX;
	int32_t t93 = -9334;

    t93 = (x481==(x482/(x483&x484)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint16_t x485 = 0U;
	int32_t x487 = -1;
	static volatile int32_t x488 = INT32_MIN;
	int32_t t94 = 748238;

    t94 = (x485==(x486/(x487&x488)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x490 = INT16_MIN;
	volatile uint32_t x491 = UINT32_MAX;
	int8_t x492 = INT8_MIN;

    t95 = (x489==(x490/(x491&x492)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile uint8_t x494 = 61U;
	uint64_t x496 = UINT64_MAX;

    t96 = (x493==(x494/(x495&x496)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x509 = -1LL;
	int32_t x510 = INT32_MAX;
	int32_t x511 = INT32_MIN;
	static volatile int64_t x512 = INT64_MAX;
	volatile int32_t t97 = 204443627;

    t97 = (x509==(x510/(x511&x512)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x531 = UINT64_MAX;
	int8_t x532 = INT8_MIN;
	int32_t t98 = -99;

    t98 = (x529==(x530/(x531&x532)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x533 = UINT32_MAX;
	uint8_t x534 = 0U;
	static volatile uint32_t x535 = 45U;
	int64_t x536 = 47LL;
	volatile int32_t t99 = -34;

    t99 = (x533==(x534/(x535&x536)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint8_t x540 = 13U;
	int32_t t100 = 779;

    t100 = (x537==(x538/(x539&x540)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint16_t x542 = UINT16_MAX;
	uint32_t x543 = 3U;
	int16_t x544 = -1;
	int32_t t101 = 17;

    t101 = (x541==(x542/(x543&x544)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x545 = INT64_MAX;
	int8_t x546 = -1;
	int64_t x547 = -306456123794056LL;
	uint32_t x548 = 6626U;
	volatile int32_t t102 = 109176351;

    t102 = (x545==(x546/(x547&x548)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x549 = 4651304LLU;
	static int32_t x552 = INT32_MAX;

    t103 = (x549==(x550/(x551&x552)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x553 = -24;
	volatile int64_t x554 = INT64_MAX;
	int8_t x555 = INT8_MIN;
	int16_t x556 = -1;
	static int32_t t104 = 25579355;

    t104 = (x553==(x554/(x555&x556)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x573 = 6245;
	int64_t x575 = -1LL;
	int32_t x576 = INT32_MAX;
	volatile int32_t t105 = 14150;

    t105 = (x573==(x574/(x575&x576)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x577 = INT64_MAX;
	int16_t x578 = INT16_MIN;
	int16_t x579 = INT16_MAX;
	int8_t x580 = INT8_MAX;

    t106 = (x577==(x578/(x579&x580)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x581 = 582LL;
	volatile uint8_t x582 = 2U;
	int64_t x584 = 119954663LL;
	int32_t t107 = -57;

    t107 = (x581==(x582/(x583&x584)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x585 = UINT16_MAX;
	uint64_t x586 = 17LLU;
	static int8_t x587 = -31;
	volatile uint16_t x588 = UINT16_MAX;
	int32_t t108 = -1623259;

    t108 = (x585==(x586/(x587&x588)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x589 = -1LL;
	volatile uint32_t x590 = 1U;
	int32_t x591 = INT32_MAX;
	uint32_t x592 = 13U;
	volatile int32_t t109 = 13;

    t109 = (x589==(x590/(x591&x592)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x593 = -5337;
	static int16_t x594 = 1410;
	volatile int32_t x595 = INT32_MIN;
	uint64_t x596 = 707484215902334479LLU;
	int32_t t110 = -48;

    t110 = (x593==(x594/(x595&x596)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x601 = INT64_MIN;
	int32_t x602 = 162868;
	static int64_t x604 = INT64_MAX;
	int32_t t111 = -1;

    t111 = (x601==(x602/(x603&x604)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x613 = INT16_MIN;
	volatile int32_t x615 = -1;
	static volatile int16_t x616 = 1171;
	int32_t t112 = -84846558;

    t112 = (x613==(x614/(x615&x616)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x617 = 2416U;
	int16_t x618 = INT16_MIN;
	int32_t x619 = INT32_MAX;
	int64_t x620 = -986LL;
	int32_t t113 = 9945023;

    t113 = (x617==(x618/(x619&x620)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x621 = INT8_MAX;
	static int32_t x622 = INT32_MIN;
	static int8_t x623 = -3;
	int16_t x624 = INT16_MIN;
	int32_t t114 = 426;

    t114 = (x621==(x622/(x623&x624)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x625 = -1;
	uint64_t x626 = 45313294446LLU;
	static int32_t x627 = INT32_MIN;
	int16_t x628 = -1;
	int32_t t115 = -38879463;

    t115 = (x625==(x626/(x627&x628)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x633 = -217350903833796714LL;
	int32_t x634 = -1;
	uint64_t x635 = UINT64_MAX;
	volatile int32_t t116 = 6162;

    t116 = (x633==(x634/(x635&x636)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint16_t x643 = UINT16_MAX;
	volatile uint32_t x644 = UINT32_MAX;
	volatile int32_t t117 = 3652884;

    t117 = (x641==(x642/(x643&x644)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x646 = INT32_MAX;
	static int64_t x647 = INT64_MIN;
	int16_t x648 = INT16_MIN;
	static volatile int32_t t118 = 90809;

    t118 = (x645==(x646/(x647&x648)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x654 = 15U;
	static volatile int32_t t119 = -50;

    t119 = (x653==(x654/(x655&x656)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint32_t x657 = UINT32_MAX;
	volatile int32_t x658 = INT32_MIN;
	int16_t x660 = INT16_MIN;

    t120 = (x657==(x658/(x659&x660)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x661 = INT32_MIN;
	int32_t x662 = -34946765;
	uint8_t x664 = 14U;

    t121 = (x661==(x662/(x663&x664)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x665 = UINT32_MAX;
	uint8_t x667 = 8U;
	int32_t x668 = -1;
	static int32_t t122 = -15464;

    t122 = (x665==(x666/(x667&x668)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint32_t x669 = UINT32_MAX;
	uint16_t x670 = 304U;
	static volatile uint64_t x671 = 25679LLU;
	int32_t x672 = 1;

    t123 = (x669==(x670/(x671&x672)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x673 = -1;
	volatile int16_t x674 = -1;
	static uint32_t x675 = UINT32_MAX;
	static int64_t x676 = INT64_MAX;

    t124 = (x673==(x674/(x675&x676)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x677 = 477U;
	int32_t x678 = INT32_MIN;
	static int8_t x679 = -1;
	static int32_t t125 = -2;

    t125 = (x677==(x678/(x679&x680)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint16_t x685 = UINT16_MAX;
	static int16_t x686 = INT16_MAX;
	static int16_t x687 = 1897;
	int64_t x688 = -1LL;

    t126 = (x685==(x686/(x687&x688)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x690 = -1;
	volatile uint32_t x692 = 981040U;
	int32_t t127 = 182;

    t127 = (x689==(x690/(x691&x692)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x694 = -1;
	static int64_t x695 = INT64_MIN;
	static volatile int32_t t128 = 239188;

    t128 = (x693==(x694/(x695&x696)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x702 = INT64_MAX;
	int32_t x703 = 2970;
	uint64_t x704 = 406LLU;
	volatile int32_t t129 = 389058625;

    t129 = (x701==(x702/(x703&x704)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x705 = INT8_MIN;
	int8_t x707 = INT8_MAX;

    t130 = (x705==(x706/(x707&x708)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint32_t x710 = 24007U;
	int32_t x711 = INT32_MAX;
	int32_t x712 = 26;
	static int32_t t131 = -277698;

    t131 = (x709==(x710/(x711&x712)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint8_t x717 = UINT8_MAX;
	uint32_t x718 = 0U;
	volatile int32_t x719 = -29;
	uint32_t x720 = UINT32_MAX;
	volatile int32_t t132 = 1712588;

    t132 = (x717==(x718/(x719&x720)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x721 = 1U;
	volatile int64_t x722 = INT64_MIN;
	int16_t x723 = INT16_MAX;

    t133 = (x721==(x722/(x723&x724)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x725 = 14U;
	int32_t x726 = -1;
	uint64_t x727 = UINT64_MAX;
	static int16_t x728 = -9;
	volatile int32_t t134 = -9;

    t134 = (x725==(x726/(x727&x728)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint16_t x729 = UINT16_MAX;
	int32_t x730 = 26;
	volatile int16_t x731 = -1;
	volatile int16_t x732 = INT16_MAX;
	int32_t t135 = -518197182;

    t135 = (x729==(x730/(x731&x732)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x734 = 28400407784LLU;
	volatile uint8_t x735 = UINT8_MAX;
	int32_t t136 = -714;

    t136 = (x733==(x734/(x735&x736)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x745 = -1;
	int16_t x746 = INT16_MIN;
	int32_t x747 = -1;
	volatile int8_t x748 = INT8_MAX;
	int32_t t137 = -198563086;

    t137 = (x745==(x746/(x747&x748)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint16_t x766 = UINT16_MAX;
	static uint32_t x767 = 3027105U;
	static int64_t x768 = INT64_MAX;

    t138 = (x765==(x766/(x767&x768)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x769 = 0;
	volatile int32_t x770 = -1;
	static volatile int8_t x771 = INT8_MAX;
	static uint64_t x772 = 4471388LLU;
	volatile int32_t t139 = 515488996;

    t139 = (x769==(x770/(x771&x772)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x773 = 1U;
	static int16_t x775 = INT16_MAX;
	int8_t x776 = -1;
	volatile int32_t t140 = 1;

    t140 = (x773==(x774/(x775&x776)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x777 = -8453358LL;
	int16_t x778 = -257;
	uint64_t x779 = UINT64_MAX;
	uint32_t x780 = UINT32_MAX;

    t141 = (x777==(x778/(x779&x780)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint32_t x782 = 124427801U;
	int8_t x783 = -9;
	int32_t x784 = INT32_MIN;
	int32_t t142 = -6598;

    t142 = (x781==(x782/(x783&x784)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint16_t x789 = 18U;
	volatile int64_t x790 = INT64_MIN;
	volatile int32_t t143 = -39725;

    t143 = (x789==(x790/(x791&x792)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x797 = 4396716LLU;
	uint32_t x798 = 233262U;
	int16_t x799 = -1;
	static int16_t x800 = -1;
	int32_t t144 = -9820;

    t144 = (x797==(x798/(x799&x800)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x801 = -339314434152576LL;
	int16_t x802 = INT16_MIN;
	static int32_t x804 = INT32_MIN;
	static int32_t t145 = -1013;

    t145 = (x801==(x802/(x803&x804)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x805 = 217U;
	static volatile int16_t x806 = INT16_MIN;
	int32_t x807 = INT32_MIN;
	int8_t x808 = INT8_MIN;

    t146 = (x805==(x806/(x807&x808)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x809 = INT32_MIN;
	int16_t x811 = 333;
	uint8_t x812 = UINT8_MAX;
	volatile int32_t t147 = 1117800;

    t147 = (x809==(x810/(x811&x812)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x813 = 932;
	volatile int8_t x814 = INT8_MAX;
	static uint16_t x815 = UINT16_MAX;
	volatile uint32_t x816 = UINT32_MAX;
	volatile int32_t t148 = -317148;

    t148 = (x813==(x814/(x815&x816)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x821 = 4U;
	uint32_t x822 = 150U;
	int32_t t149 = -2147;

    t149 = (x821==(x822/(x823&x824)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile uint32_t x829 = UINT32_MAX;
	int8_t x831 = INT8_MAX;
	static int8_t x832 = -2;
	int32_t t150 = -394;

    t150 = (x829==(x830/(x831&x832)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x833 = INT64_MIN;
	int64_t x834 = INT64_MAX;
	static volatile int32_t x835 = -1;
	volatile int8_t x836 = INT8_MAX;

    t151 = (x833==(x834/(x835&x836)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x845 = UINT64_MAX;
	volatile int64_t x846 = -1LL;
	uint64_t x847 = 4888973201627805LLU;
	uint32_t x848 = 21602027U;
	int32_t t152 = -1643526;

    t152 = (x845==(x846/(x847&x848)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x849 = INT32_MAX;
	static uint8_t x850 = UINT8_MAX;
	uint64_t x851 = 16LLU;

    t153 = (x849==(x850/(x851&x852)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x853 = INT8_MIN;
	volatile uint64_t x854 = 89LLU;
	int32_t x856 = INT32_MIN;

    t154 = (x853==(x854/(x855&x856)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x857 = INT8_MIN;
	uint8_t x860 = UINT8_MAX;
	int32_t t155 = 9;

    t155 = (x857==(x858/(x859&x860)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x861 = 107920LLU;
	int8_t x864 = 1;
	volatile int32_t t156 = 4363700;

    t156 = (x861==(x862/(x863&x864)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x865 = INT8_MIN;
	uint8_t x866 = 1U;
	int32_t x867 = 12415;
	int32_t t157 = 120;

    t157 = (x865==(x866/(x867&x868)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x870 = INT8_MIN;
	uint64_t x871 = 901579929358LLU;
	int16_t x872 = 204;
	static volatile int32_t t158 = -334710668;

    t158 = (x869==(x870/(x871&x872)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x873 = UINT32_MAX;
	int16_t x874 = INT16_MIN;
	int64_t x875 = INT64_MAX;

    t159 = (x873==(x874/(x875&x876)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint8_t x881 = 91U;
	int16_t x883 = -1;
	static int32_t x884 = -4004;
	volatile int32_t t160 = 154;

    t160 = (x881==(x882/(x883&x884)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x885 = -107LL;
	static int16_t x887 = INT16_MIN;
	int64_t x888 = INT64_MIN;

    t161 = (x885==(x886/(x887&x888)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint32_t x889 = 115813321U;
	static int8_t x890 = INT8_MAX;

    t162 = (x889==(x890/(x891&x892)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x897 = INT16_MIN;
	uint16_t x899 = UINT16_MAX;
	int64_t x900 = -1LL;
	volatile int32_t t163 = -6;

    t163 = (x897==(x898/(x899&x900)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x901 = UINT64_MAX;
	uint64_t x902 = UINT64_MAX;
	uint32_t x903 = UINT32_MAX;
	uint32_t x904 = 616U;
	static volatile int32_t t164 = -56366;

    t164 = (x901==(x902/(x903&x904)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x905 = 64U;
	static int8_t x906 = -1;
	static volatile int32_t x907 = 384;
	volatile int8_t x908 = INT8_MIN;
	int32_t t165 = 44;

    t165 = (x905==(x906/(x907&x908)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint32_t x909 = 474928443U;
	uint32_t x910 = 357029510U;
	uint8_t x911 = UINT8_MAX;
	uint64_t x912 = 5989576914485453908LLU;
	int32_t t166 = -2615960;

    t166 = (x909==(x910/(x911&x912)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x917 = 310;
	static uint32_t x918 = UINT32_MAX;
	volatile uint64_t x919 = UINT64_MAX;
	int32_t t167 = -1040;

    t167 = (x917==(x918/(x919&x920)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x922 = -22;
	static int8_t x923 = INT8_MAX;
	volatile int32_t t168 = 12965;

    t168 = (x921==(x922/(x923&x924)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x925 = INT64_MIN;
	volatile int64_t x926 = -1LL;
	volatile int32_t t169 = 5;

    t169 = (x925==(x926/(x927&x928)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x929 = INT64_MIN;
	int16_t x930 = -1;
	int16_t x931 = 6434;
	int32_t x932 = -1199588;

    t170 = (x929==(x930/(x931&x932)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x933 = INT32_MIN;
	volatile int64_t x934 = -1LL;
	volatile int16_t x935 = INT16_MIN;
	int32_t x936 = INT32_MIN;
	volatile int32_t t171 = -258;

    t171 = (x933==(x934/(x935&x936)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x937 = 10U;
	int32_t x938 = INT32_MIN;
	int8_t x940 = INT8_MAX;
	volatile int32_t t172 = 15873;

    t172 = (x937==(x938/(x939&x940)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x943 = INT32_MAX;
	int64_t x944 = INT64_MAX;
	int32_t t173 = -6;

    t173 = (x941==(x942/(x943&x944)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x945 = -1;
	int64_t x946 = -1LL;
	volatile int16_t x947 = -4;
	volatile int8_t x948 = -1;
	volatile int32_t t174 = -1940;

    t174 = (x945==(x946/(x947&x948)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x952 = 6167U;

    t175 = (x949==(x950/(x951&x952)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x961 = 5983540U;
	volatile int8_t x962 = -15;
	int64_t x963 = INT64_MAX;
	static volatile uint16_t x964 = UINT16_MAX;
	volatile int32_t t176 = 853755235;

    t176 = (x961==(x962/(x963&x964)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint16_t x966 = UINT16_MAX;
	int8_t x968 = -1;

    t177 = (x965==(x966/(x967&x968)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x969 = -1;
	int64_t x970 = INT64_MAX;
	int16_t x972 = INT16_MIN;
	volatile int32_t t178 = -44715;

    t178 = (x969==(x970/(x971&x972)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x981 = INT8_MIN;
	uint16_t x982 = UINT16_MAX;
	uint8_t x983 = UINT8_MAX;
	static int16_t x984 = -47;
	static volatile int32_t t179 = -87;

    t179 = (x981==(x982/(x983&x984)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x985 = 32462211440750716LLU;
	int8_t x986 = INT8_MAX;
	static volatile int64_t x987 = -59322615LL;
	volatile int64_t x988 = 11638635905808LL;

    t180 = (x985==(x986/(x987&x988)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x989 = INT64_MAX;
	volatile int8_t x990 = 3;
	uint64_t x991 = 6187508LLU;
	uint64_t x992 = 4815338533517684523LLU;
	int32_t t181 = 8154745;

    t181 = (x989==(x990/(x991&x992)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x993 = INT64_MIN;
	static int16_t x994 = INT16_MAX;
	static int32_t x995 = 1;
	uint8_t x996 = UINT8_MAX;
	int32_t t182 = -5;

    t182 = (x993==(x994/(x995&x996)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x997 = INT8_MIN;
	int64_t x998 = -1LL;
	int16_t x999 = -1;
	volatile int32_t t183 = -43;

    t183 = (x997==(x998/(x999&x1000)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x1002 = 6033U;
	static uint16_t x1004 = 2814U;

    t184 = (x1001==(x1002/(x1003&x1004)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x1005 = INT32_MAX;
	static uint64_t x1006 = 9180760020647018313LLU;
	volatile int32_t x1007 = INT32_MAX;
	volatile uint32_t x1008 = 126672U;
	int32_t t185 = -294;

    t185 = (x1005==(x1006/(x1007&x1008)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x1009 = INT64_MIN;
	int64_t x1010 = INT64_MIN;
	int64_t x1012 = INT64_MAX;
	int32_t t186 = 2485;

    t186 = (x1009==(x1010/(x1011&x1012)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1014 = INT8_MAX;
	static int16_t x1015 = -1;
	uint16_t x1016 = 98U;
	int32_t t187 = -2;

    t187 = (x1013==(x1014/(x1015&x1016)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint32_t x1021 = 308206U;
	int64_t x1022 = INT64_MIN;
	volatile int8_t x1023 = -1;
	uint16_t x1024 = 886U;

    t188 = (x1021==(x1022/(x1023&x1024)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x1025 = 323917229U;
	static volatile int16_t x1026 = INT16_MIN;
	int64_t x1027 = -1LL;
	int16_t x1028 = INT16_MIN;
	int32_t t189 = 1;

    t189 = (x1025==(x1026/(x1027&x1028)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x1029 = 12U;
	uint8_t x1030 = UINT8_MAX;
	volatile int8_t x1031 = INT8_MIN;
	uint16_t x1032 = 3259U;
	int32_t t190 = 0;

    t190 = (x1029==(x1030/(x1031&x1032)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint8_t x1037 = 0U;
	int32_t x1038 = -151;
	int64_t x1039 = INT64_MIN;

    t191 = (x1037==(x1038/(x1039&x1040)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x1045 = 491512531099373306LL;
	uint8_t x1046 = UINT8_MAX;
	int64_t x1047 = INT64_MAX;
	int16_t x1048 = 12890;

    t192 = (x1045==(x1046/(x1047&x1048)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x1049 = 9U;
	int64_t x1051 = INT64_MIN;
	uint64_t x1052 = UINT64_MAX;
	int32_t t193 = 0;

    t193 = (x1049==(x1050/(x1051&x1052)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x1053 = INT64_MIN;
	volatile uint16_t x1054 = 1159U;
	static volatile uint32_t x1055 = UINT32_MAX;
	uint32_t x1056 = 11U;
	int32_t t194 = -1270558;

    t194 = (x1053==(x1054/(x1055&x1056)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint32_t x1057 = 47605571U;
	static int16_t x1058 = INT16_MIN;
	volatile uint8_t x1059 = 5U;
	int16_t x1060 = 4;
	int32_t t195 = 237;

    t195 = (x1057==(x1058/(x1059&x1060)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x1061 = INT8_MIN;
	int32_t x1063 = INT32_MAX;
	uint8_t x1064 = UINT8_MAX;
	volatile int32_t t196 = -97496;

    t196 = (x1061==(x1062/(x1063&x1064)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x1065 = -1;
	static int32_t x1067 = INT32_MIN;
	static volatile int64_t x1068 = INT64_MIN;
	int32_t t197 = -2387696;

    t197 = (x1065==(x1066/(x1067&x1068)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1069 = -1;
	int8_t x1070 = INT8_MIN;
	static int32_t x1071 = INT32_MIN;
	static int32_t x1072 = INT32_MIN;
	volatile int32_t t198 = 4;

    t198 = (x1069==(x1070/(x1071&x1072)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x1073 = INT16_MAX;
	int32_t x1074 = INT32_MIN;
	static int16_t x1075 = -1;
	uint8_t x1076 = 3U;

    t199 = (x1073==(x1074/(x1075&x1076)));

    if (t199 != 0) { NG(); } else { ; }
	
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
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}


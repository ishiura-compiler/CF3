
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

static volatile int32_t x5 = INT32_MIN;
int8_t x20 = INT8_MIN;
static int8_t x31 = INT8_MAX;
static int8_t x32 = -1;
uint16_t x38 = 105U;
int64_t x39 = -1LL;
volatile uint8_t x40 = UINT8_MAX;
int16_t x41 = INT16_MAX;
volatile int8_t x59 = 53;
uint32_t x61 = UINT32_MAX;
uint8_t x62 = 71U;
uint8_t x63 = 7U;
int32_t t13 = -229511;
uint64_t x66 = 1LLU;
static int32_t t15 = -74;
volatile int32_t t16 = 0;
int16_t x80 = -1;
volatile int8_t x84 = INT8_MAX;
volatile uint64_t t19 = 97905088038479811LLU;
int64_t x95 = 25029402LL;
int64_t x96 = -1LL;
uint8_t x102 = UINT8_MAX;
volatile uint64_t x108 = 145018LLU;
static int64_t x110 = -24LL;
static int32_t x120 = -15555255;
int8_t x130 = INT8_MAX;
int8_t x132 = INT8_MAX;
static int32_t t30 = -33600;
uint16_t x137 = 9U;
int32_t x142 = INT32_MIN;
int64_t x147 = 100869LL;
int32_t t35 = 46019336;
volatile int32_t t36 = 95;
int16_t x160 = INT16_MIN;
static volatile int32_t t37 = 4;
int8_t x168 = 1;
int64_t x175 = -766000651LL;
static int16_t x179 = 649;
int8_t x181 = INT8_MIN;
uint32_t x187 = UINT32_MAX;
int32_t t44 = -1739;
uint64_t x201 = 101294121LLU;
uint16_t x202 = 2U;
int32_t t46 = -49968205;
int8_t x208 = INT8_MAX;
static volatile int32_t x210 = -1;
int16_t x217 = INT16_MAX;
volatile int16_t x218 = INT16_MAX;
int64_t x235 = INT64_MIN;
volatile uint32_t t52 = 150U;
int64_t x241 = INT64_MIN;
uint16_t x242 = 283U;
int16_t x243 = -1;
int16_t x252 = 1;
int16_t x254 = INT16_MAX;
static volatile int16_t x256 = INT16_MIN;
volatile int32_t t57 = -1;
uint16_t x264 = 24U;
int8_t x266 = -9;
int32_t x268 = 391990607;
static int16_t x272 = -1;
uint16_t x276 = UINT16_MAX;
static volatile int32_t t61 = 1157;
int16_t x279 = -5887;
uint8_t x283 = 4U;
int16_t x290 = -1;
static volatile int16_t x293 = 1013;
uint32_t x298 = 266365142U;
int32_t x299 = INT32_MAX;
volatile uint32_t t67 = 70U;
int8_t x301 = 30;
int16_t x303 = INT16_MIN;
uint16_t x305 = UINT16_MAX;
volatile int64_t x317 = 18702520904LL;
uint64_t x321 = 1325020370227190536LLU;
uint32_t t74 = 536U;
uint16_t x334 = UINT16_MAX;
int16_t x337 = INT16_MAX;
uint64_t x340 = 777LLU;
int32_t x347 = INT32_MIN;
volatile int32_t t78 = -2441169;
static int16_t x362 = INT16_MIN;
uint64_t x366 = UINT64_MAX;
static uint32_t x371 = 1095819592U;
int32_t t82 = 6079781;
int32_t x389 = INT32_MIN;
int8_t x390 = -18;
int32_t x392 = -1;
int64_t x395 = INT64_MIN;
int32_t t87 = -19;
int16_t x411 = INT16_MIN;
uint8_t x412 = 6U;
int16_t x416 = INT16_MIN;
static int64_t x420 = INT64_MIN;
int32_t x426 = -56058769;
static int32_t x436 = INT32_MIN;
volatile int8_t x440 = 5;
static uint16_t x443 = 1224U;
int32_t t96 = -2029;
static uint64_t x448 = 7965370892117LLU;
volatile uint32_t x449 = 304U;
int64_t x455 = -1LL;
uint64_t x461 = 1LLU;
uint8_t x462 = 9U;
volatile int32_t x465 = -1;
static uint32_t x470 = UINT32_MAX;
int32_t x472 = 42;
int16_t x477 = INT16_MIN;
int32_t t106 = 2553;
uint64_t x492 = 2828675LLU;
uint8_t x500 = 8U;
int32_t x501 = -1;
int64_t x502 = 1LL;
volatile int16_t x517 = INT16_MIN;
static volatile int32_t t113 = 42;
int8_t x522 = INT8_MIN;
static volatile int32_t t114 = -12915376;
static uint8_t x525 = UINT8_MAX;
static volatile int32_t t116 = 327928;
volatile int64_t x533 = INT64_MAX;
static int8_t x534 = 3;
uint64_t x542 = 23991230682629LLU;
uint64_t x547 = 2860895419128721LLU;
volatile uint16_t x555 = 8U;
int64_t x563 = INT64_MIN;
volatile int32_t x565 = 123805483;
uint64_t x568 = 20947675316288004LLU;
static int8_t x575 = INT8_MIN;
int64_t x586 = INT64_MIN;
int32_t x587 = INT32_MAX;
uint64_t t130 = 330546512LLU;
int64_t x602 = INT64_MAX;
uint64_t x604 = UINT64_MAX;
int8_t x609 = -1;
int16_t x611 = INT16_MIN;
int8_t x619 = INT8_MIN;
int16_t x637 = INT16_MIN;
static int16_t x645 = INT16_MIN;
volatile uint32_t x650 = 743211U;
uint32_t x651 = UINT32_MAX;
int32_t x652 = INT32_MAX;
int8_t x655 = -8;
volatile uint8_t x659 = UINT8_MAX;
volatile int64_t t147 = 1137887194389LL;
uint16_t x667 = 31U;
int64_t x669 = 46699475092LL;
int32_t x676 = INT32_MAX;
static int16_t x677 = -7;
int64_t x681 = INT64_MAX;
int32_t x687 = -1;
uint32_t x688 = 1064U;
volatile int32_t t154 = -5716454;
uint32_t x702 = 47042220U;
volatile int32_t t156 = -2424;
static int64_t x710 = -1LL;
int32_t x721 = -1;
int32_t t161 = -8119;
volatile int32_t t162 = -58152310;
int32_t t163 = -2959751;
int16_t x733 = INT16_MIN;
int64_t t164 = -50371760331LL;
int16_t x738 = -1;
uint32_t x746 = UINT32_MAX;
int64_t x754 = INT64_MIN;
static int8_t x759 = INT8_MIN;
uint8_t x768 = UINT8_MAX;
volatile int32_t t173 = 31530695;
static uint8_t x815 = UINT8_MAX;
static volatile uint64_t t184 = 49165LLU;
static uint16_t x835 = 0U;
int16_t x847 = -1;
uint32_t x853 = UINT32_MAX;
int64_t x864 = INT64_MIN;
volatile uint16_t x869 = 8U;
int32_t t195 = -3034;
int32_t x876 = INT32_MIN;
int32_t x882 = INT32_MAX;
int8_t x889 = INT8_MAX;


void f0(void) {
    	int64_t x6 = -1LL;
	static int32_t x7 = -1;
	static int32_t x8 = INT32_MIN;
	int32_t t0 = -801066572;

    t0 = ((x5>(x6+x7))%x8);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x13 = -1;
	int16_t x14 = INT16_MIN;
	static int64_t x15 = INT64_MAX;
	uint32_t x16 = 186U;
	volatile uint32_t t1 = 9842458U;

    t1 = ((x13>(x14+x15))%x16);

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x17 = UINT8_MAX;
	static volatile int16_t x18 = INT16_MAX;
	int16_t x19 = 1827;
	volatile int32_t t2 = -49503795;

    t2 = ((x17>(x18+x19))%x20);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x21 = 32;
	uint32_t x22 = 7U;
	uint32_t x23 = UINT32_MAX;
	uint64_t x24 = 843186351758980245LLU;
	uint64_t t3 = 4441396LLU;

    t3 = ((x21>(x22+x23))%x24);

    if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x25 = -1;
	int16_t x26 = -24;
	int8_t x27 = 13;
	uint64_t x28 = 2054852400840LLU;
	uint64_t t4 = 3LLU;

    t4 = ((x25>(x26+x27))%x28);

    if (t4 != 1LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint16_t x29 = 6004U;
	int16_t x30 = INT16_MIN;
	volatile int32_t t5 = 565721129;

    t5 = ((x29>(x30+x31))%x32);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x33 = 31U;
	static volatile int8_t x34 = INT8_MIN;
	static int64_t x35 = -12703436LL;
	int64_t x36 = INT64_MIN;
	volatile int64_t t6 = -2061583869LL;

    t6 = ((x33>(x34+x35))%x36);

    if (t6 != 1LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int16_t x37 = INT16_MAX;
	static volatile int32_t t7 = 6;

    t7 = ((x37>(x38+x39))%x40);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x42 = -1;
	static int8_t x43 = INT8_MIN;
	uint8_t x44 = 44U;
	int32_t t8 = -472474;

    t8 = ((x41>(x42+x43))%x44);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x45 = INT32_MAX;
	volatile int16_t x46 = -439;
	int32_t x47 = -1;
	static uint32_t x48 = UINT32_MAX;
	volatile uint32_t t9 = 861U;

    t9 = ((x45>(x46+x47))%x48);

    if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x49 = 4576747LLU;
	int32_t x50 = INT32_MIN;
	volatile int32_t x51 = 11314091;
	int16_t x52 = INT16_MIN;
	static volatile int32_t t10 = 238;

    t10 = ((x49>(x50+x51))%x52);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x53 = 23235788511082921LL;
	volatile int8_t x54 = -1;
	int8_t x55 = INT8_MAX;
	int8_t x56 = INT8_MAX;
	volatile int32_t t11 = 58530;

    t11 = ((x53>(x54+x55))%x56);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x57 = INT8_MAX;
	uint8_t x58 = UINT8_MAX;
	int8_t x60 = INT8_MIN;
	int32_t t12 = -428973;

    t12 = ((x57>(x58+x59))%x60);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x64 = 700U;

    t13 = ((x61>(x62+x63))%x64);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x65 = INT8_MIN;
	uint32_t x67 = 27083714U;
	static uint8_t x68 = 102U;
	int32_t t14 = 51;

    t14 = ((x65>(x66+x67))%x68);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x69 = INT64_MIN;
	int64_t x70 = INT64_MIN;
	int64_t x71 = 1LL;
	int32_t x72 = 130;

    t15 = ((x69>(x70+x71))%x72);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x73 = UINT32_MAX;
	int16_t x74 = -5;
	static int8_t x75 = 27;
	int16_t x76 = INT16_MAX;

    t16 = ((x73>(x74+x75))%x76);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x77 = 1717;
	volatile int8_t x78 = 3;
	uint8_t x79 = 0U;
	static int32_t t17 = 5268;

    t17 = ((x77>(x78+x79))%x80);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x81 = INT64_MIN;
	volatile uint16_t x82 = UINT16_MAX;
	int32_t x83 = INT32_MIN;
	volatile int32_t t18 = -1;

    t18 = ((x81>(x82+x83))%x84);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x85 = INT8_MIN;
	volatile int8_t x86 = 9;
	volatile int32_t x87 = INT32_MIN;
	uint64_t x88 = 38806082740637LLU;

    t19 = ((x85>(x86+x87))%x88);

    if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x89 = -1;
	int16_t x90 = INT16_MIN;
	uint16_t x91 = UINT16_MAX;
	static int8_t x92 = INT8_MIN;
	static volatile int32_t t20 = 96061;

    t20 = ((x89>(x90+x91))%x92);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x93 = INT16_MAX;
	uint32_t x94 = 564191U;
	static volatile int64_t t21 = -40824223865781322LL;

    t21 = ((x93>(x94+x95))%x96);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x97 = 10278U;
	static uint16_t x98 = 12995U;
	int8_t x99 = INT8_MIN;
	static int8_t x100 = -1;
	int32_t t22 = 53;

    t22 = ((x97>(x98+x99))%x100);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x101 = INT16_MIN;
	int16_t x103 = -1;
	uint16_t x104 = 28187U;
	volatile int32_t t23 = -492;

    t23 = ((x101>(x102+x103))%x104);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x105 = -1LL;
	static int16_t x106 = -32;
	static int16_t x107 = -1;
	static volatile uint64_t t24 = 2721181196061798672LLU;

    t24 = ((x105>(x106+x107))%x108);

    if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x109 = INT32_MAX;
	volatile uint64_t x111 = 16832749492LLU;
	volatile int16_t x112 = -2;
	int32_t t25 = 632;

    t25 = ((x109>(x110+x111))%x112);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x113 = INT32_MIN;
	int8_t x114 = INT8_MAX;
	int64_t x115 = 809143593409642LL;
	int8_t x116 = INT8_MIN;
	int32_t t26 = 2209079;

    t26 = ((x113>(x114+x115))%x116);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x117 = -1LL;
	static volatile uint16_t x118 = 798U;
	int16_t x119 = 330;
	volatile int32_t t27 = 216;

    t27 = ((x117>(x118+x119))%x120);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x121 = INT16_MIN;
	int8_t x122 = INT8_MIN;
	volatile int32_t x123 = -57;
	uint16_t x124 = 15314U;
	int32_t t28 = 2306669;

    t28 = ((x121>(x122+x123))%x124);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x125 = 0;
	uint16_t x126 = 1U;
	uint16_t x127 = 11792U;
	volatile int8_t x128 = INT8_MIN;
	int32_t t29 = 1;

    t29 = ((x125>(x126+x127))%x128);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x129 = INT64_MIN;
	volatile uint8_t x131 = 28U;

    t30 = ((x129>(x130+x131))%x132);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x133 = INT32_MIN;
	int8_t x134 = 2;
	volatile uint32_t x135 = 7U;
	int64_t x136 = INT64_MAX;
	int64_t t31 = -93225LL;

    t31 = ((x133>(x134+x135))%x136);

    if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x138 = -72LL;
	uint8_t x139 = 5U;
	static int8_t x140 = -1;
	int32_t t32 = 97;

    t32 = ((x137>(x138+x139))%x140);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x141 = -1;
	static uint64_t x143 = UINT64_MAX;
	volatile int64_t x144 = INT64_MAX;
	static volatile int64_t t33 = -1530228343341955591LL;

    t33 = ((x141>(x142+x143))%x144);

    if (t33 != 1LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint64_t x145 = 15163LLU;
	int64_t x146 = -1LL;
	int32_t x148 = -1;
	static int32_t t34 = -216223;

    t34 = ((x145>(x146+x147))%x148);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x149 = 0U;
	int16_t x150 = -1;
	static int8_t x151 = -1;
	int8_t x152 = INT8_MIN;

    t35 = ((x149>(x150+x151))%x152);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x153 = 10;
	uint32_t x154 = 1760606281U;
	int16_t x155 = INT16_MAX;
	static uint8_t x156 = UINT8_MAX;

    t36 = ((x153>(x154+x155))%x156);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x157 = 0;
	int32_t x158 = INT32_MIN;
	uint8_t x159 = 1U;

    t37 = ((x157>(x158+x159))%x160);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint32_t x161 = 13049421U;
	int32_t x162 = 5728;
	int64_t x163 = INT64_MIN;
	int64_t x164 = -744176965634508182LL;
	int64_t t38 = -640LL;

    t38 = ((x161>(x162+x163))%x164);

    if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x165 = -25337;
	volatile int32_t x166 = INT32_MIN;
	int32_t x167 = INT32_MAX;
	volatile int32_t t39 = 967814876;

    t39 = ((x165>(x166+x167))%x168);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int8_t x173 = -1;
	uint32_t x174 = UINT32_MAX;
	uint64_t x176 = 293226438055LLU;
	uint64_t t40 = 108LLU;

    t40 = ((x173>(x174+x175))%x176);

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x177 = 3869;
	uint64_t x178 = 8031962651491985708LLU;
	uint32_t x180 = 30U;
	uint32_t t41 = 7630U;

    t41 = ((x177>(x178+x179))%x180);

    if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x182 = INT64_MAX;
	int16_t x183 = INT16_MIN;
	uint16_t x184 = UINT16_MAX;
	volatile int32_t t42 = 26903365;

    t42 = ((x181>(x182+x183))%x184);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x185 = 55U;
	uint16_t x186 = 17087U;
	uint16_t x188 = 13U;
	static int32_t t43 = -157296464;

    t43 = ((x185>(x186+x187))%x188);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint8_t x193 = 39U;
	static int8_t x194 = -1;
	int16_t x195 = -1;
	static uint8_t x196 = 6U;

    t44 = ((x193>(x194+x195))%x196);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x197 = INT8_MIN;
	int16_t x198 = 1;
	int16_t x199 = INT16_MIN;
	static int64_t x200 = -1LL;
	volatile int64_t t45 = -181746488115601186LL;

    t45 = ((x197>(x198+x199))%x200);

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x203 = 478;
	int32_t x204 = INT32_MIN;

    t46 = ((x201>(x202+x203))%x204);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x205 = 88;
	volatile int8_t x206 = INT8_MIN;
	int16_t x207 = INT16_MIN;
	int32_t t47 = -9721;

    t47 = ((x205>(x206+x207))%x208);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x209 = -1LL;
	int8_t x211 = INT8_MAX;
	volatile uint32_t x212 = 378811162U;
	uint32_t t48 = 33U;

    t48 = ((x209>(x210+x211))%x212);

    if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x213 = INT16_MAX;
	volatile int8_t x214 = INT8_MAX;
	int32_t x215 = INT32_MIN;
	uint8_t x216 = UINT8_MAX;
	int32_t t49 = 2786;

    t49 = ((x213>(x214+x215))%x216);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x219 = 110;
	volatile int64_t x220 = INT64_MIN;
	int64_t t50 = -5971089405050865LL;

    t50 = ((x217>(x218+x219))%x220);

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x221 = -1;
	int16_t x222 = -1;
	static int64_t x223 = INT64_MAX;
	uint64_t x224 = UINT64_MAX;
	volatile uint64_t t51 = 18079LLU;

    t51 = ((x221>(x222+x223))%x224);

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x233 = INT16_MIN;
	volatile uint16_t x234 = UINT16_MAX;
	uint32_t x236 = 5U;

    t52 = ((x233>(x234+x235))%x236);

    if (t52 != 1U) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x237 = INT16_MIN;
	uint8_t x238 = UINT8_MAX;
	volatile int8_t x239 = INT8_MIN;
	int32_t x240 = 215;
	static int32_t t53 = 12579;

    t53 = ((x237>(x238+x239))%x240);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x244 = 23LL;
	static int64_t t54 = -447845LL;

    t54 = ((x241>(x242+x243))%x244);

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x245 = 5U;
	static int32_t x246 = INT32_MIN;
	static volatile int8_t x247 = INT8_MAX;
	volatile int8_t x248 = INT8_MIN;
	int32_t t55 = 26087157;

    t55 = ((x245>(x246+x247))%x248);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x249 = INT16_MAX;
	uint32_t x250 = 1U;
	int16_t x251 = INT16_MAX;
	static int32_t t56 = 10;

    t56 = ((x249>(x250+x251))%x252);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x253 = -1;
	uint64_t x255 = 5050LLU;

    t57 = ((x253>(x254+x255))%x256);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x261 = -5;
	int64_t x262 = -801827433386773924LL;
	static volatile int16_t x263 = 34;
	int32_t t58 = -1038;

    t58 = ((x261>(x262+x263))%x264);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x265 = UINT32_MAX;
	volatile int8_t x267 = 7;
	static int32_t t59 = -4716;

    t59 = ((x265>(x266+x267))%x268);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint16_t x269 = UINT16_MAX;
	static volatile int32_t x270 = INT32_MAX;
	int64_t x271 = INT64_MIN;
	int32_t t60 = 1;

    t60 = ((x269>(x270+x271))%x272);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint64_t x273 = 59829550LLU;
	int64_t x274 = 488591LL;
	uint32_t x275 = UINT32_MAX;

    t61 = ((x273>(x274+x275))%x276);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint8_t x277 = 29U;
	volatile int16_t x278 = INT16_MIN;
	volatile uint64_t x280 = 758631927926LLU;
	static uint64_t t62 = 119087674839LLU;

    t62 = ((x277>(x278+x279))%x280);

    if (t62 != 1LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x281 = 44;
	int64_t x282 = 144972134157693674LL;
	volatile int16_t x284 = INT16_MIN;
	int32_t t63 = -55;

    t63 = ((x281>(x282+x283))%x284);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x285 = 224475;
	uint8_t x286 = 53U;
	uint32_t x287 = 191731217U;
	int8_t x288 = INT8_MIN;
	int32_t t64 = -9;

    t64 = ((x285>(x286+x287))%x288);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x289 = -152723;
	int16_t x291 = INT16_MIN;
	static int64_t x292 = -3119LL;
	int64_t t65 = -4607543085793LL;

    t65 = ((x289>(x290+x291))%x292);

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x294 = 1504U;
	uint32_t x295 = 5601U;
	uint32_t x296 = UINT32_MAX;
	uint32_t t66 = 1967U;

    t66 = ((x293>(x294+x295))%x296);

    if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x297 = INT64_MIN;
	static uint32_t x300 = UINT32_MAX;

    t67 = ((x297>(x298+x299))%x300);

    if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int64_t x302 = INT64_MAX;
	int8_t x304 = -1;
	static volatile int32_t t68 = 3446158;

    t68 = ((x301>(x302+x303))%x304);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x306 = 76U;
	int32_t x307 = INT32_MIN;
	int32_t x308 = INT32_MIN;
	int32_t t69 = -294;

    t69 = ((x305>(x306+x307))%x308);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x309 = INT32_MIN;
	uint64_t x310 = UINT64_MAX;
	volatile uint32_t x311 = UINT32_MAX;
	int64_t x312 = -7LL;
	int64_t t70 = 202345LL;

    t70 = ((x309>(x310+x311))%x312);

    if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint32_t x313 = 1U;
	int64_t x314 = -28418147500LL;
	static int64_t x315 = 10458170LL;
	volatile uint64_t x316 = UINT64_MAX;
	volatile uint64_t t71 = 1LLU;

    t71 = ((x313>(x314+x315))%x316);

    if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x318 = UINT8_MAX;
	static int16_t x319 = 11;
	int32_t x320 = INT32_MIN;
	int32_t t72 = -121650622;

    t72 = ((x317>(x318+x319))%x320);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x322 = INT16_MIN;
	int64_t x323 = 383282768LL;
	static uint64_t x324 = UINT64_MAX;
	static uint64_t t73 = 5140752453LLU;

    t73 = ((x321>(x322+x323))%x324);

    if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x325 = 74718425;
	uint64_t x326 = 1052748883LLU;
	int64_t x327 = -183773206LL;
	uint32_t x328 = UINT32_MAX;

    t74 = ((x325>(x326+x327))%x328);

    if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x333 = 1U;
	int32_t x335 = INT32_MIN;
	int32_t x336 = INT32_MIN;
	int32_t t75 = -1;

    t75 = ((x333>(x334+x335))%x336);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x338 = 8787780006797434LLU;
	static uint8_t x339 = 11U;
	volatile uint64_t t76 = 861408881675LLU;

    t76 = ((x337>(x338+x339))%x340);

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x341 = INT64_MIN;
	int64_t x342 = -14569LL;
	int16_t x343 = INT16_MIN;
	uint64_t x344 = 1462702689283631LLU;
	volatile uint64_t t77 = 23634434307LLU;

    t77 = ((x341>(x342+x343))%x344);

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x345 = -1;
	volatile int64_t x346 = -547965851LL;
	int16_t x348 = -1;

    t78 = ((x345>(x346+x347))%x348);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x353 = INT8_MIN;
	static int16_t x354 = 498;
	int8_t x355 = INT8_MIN;
	int8_t x356 = INT8_MAX;
	volatile int32_t t79 = -170502616;

    t79 = ((x353>(x354+x355))%x356);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x361 = -13018;
	int8_t x363 = INT8_MIN;
	uint16_t x364 = UINT16_MAX;
	volatile int32_t t80 = -151313258;

    t80 = ((x361>(x362+x363))%x364);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x365 = -1LL;
	volatile int32_t x367 = INT32_MIN;
	int64_t x368 = 6LL;
	static volatile int64_t t81 = 9522665103806LL;

    t81 = ((x365>(x366+x367))%x368);

    if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x369 = -1165371;
	int64_t x370 = INT64_MIN;
	int16_t x372 = 15;

    t82 = ((x369>(x370+x371))%x372);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x377 = -1;
	static uint16_t x378 = UINT16_MAX;
	volatile int64_t x379 = 929791605265407LL;
	uint16_t x380 = 435U;
	static int32_t t83 = 1597963;

    t83 = ((x377>(x378+x379))%x380);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x381 = -3;
	uint32_t x382 = UINT32_MAX;
	int64_t x383 = -30LL;
	int32_t x384 = -1;
	static int32_t t84 = -658;

    t84 = ((x381>(x382+x383))%x384);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x391 = 5794U;
	static int32_t t85 = 959529;

    t85 = ((x389>(x390+x391))%x392);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x393 = INT8_MAX;
	static uint8_t x394 = 1U;
	volatile int8_t x396 = INT8_MIN;
	int32_t t86 = 3110;

    t86 = ((x393>(x394+x395))%x396);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x397 = INT64_MIN;
	uint64_t x398 = 6304LLU;
	static uint32_t x399 = 130170U;
	int32_t x400 = 14172;

    t87 = ((x397>(x398+x399))%x400);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x401 = -10;
	static int64_t x402 = -1LL;
	volatile int16_t x403 = INT16_MAX;
	int16_t x404 = 46;
	volatile int32_t t88 = 2;

    t88 = ((x401>(x402+x403))%x404);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x405 = -1;
	uint32_t x406 = 19U;
	int64_t x407 = -792626641158267LL;
	int32_t x408 = -1;
	int32_t t89 = -421;

    t89 = ((x405>(x406+x407))%x408);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x409 = INT64_MIN;
	uint8_t x410 = UINT8_MAX;
	volatile int32_t t90 = -3632947;

    t90 = ((x409>(x410+x411))%x412);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x413 = -1;
	uint32_t x414 = 26U;
	static volatile int16_t x415 = 185;
	static int32_t t91 = -1525;

    t91 = ((x413>(x414+x415))%x416);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x417 = INT64_MIN;
	volatile int8_t x418 = -30;
	static uint8_t x419 = 67U;
	static volatile int64_t t92 = 4456365776751974784LL;

    t92 = ((x417>(x418+x419))%x420);

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint64_t x425 = 797LLU;
	int32_t x427 = -7;
	static int32_t x428 = -1;
	static int32_t t93 = -15121;

    t93 = ((x425>(x426+x427))%x428);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x433 = INT8_MIN;
	int32_t x434 = INT32_MAX;
	int16_t x435 = INT16_MIN;
	static volatile int32_t t94 = 275780348;

    t94 = ((x433>(x434+x435))%x436);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x437 = INT64_MAX;
	uint64_t x438 = 717981391326058LLU;
	uint32_t x439 = 38850994U;
	int32_t t95 = 3291;

    t95 = ((x437>(x438+x439))%x440);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x441 = -1;
	int16_t x442 = INT16_MAX;
	static volatile uint8_t x444 = 43U;

    t96 = ((x441>(x442+x443))%x444);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x445 = 92072U;
	uint8_t x446 = 71U;
	static int8_t x447 = 0;
	uint64_t t97 = 34466LLU;

    t97 = ((x445>(x446+x447))%x448);

    if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x450 = 6521;
	int16_t x451 = INT16_MAX;
	volatile int8_t x452 = INT8_MIN;
	int32_t t98 = -129941;

    t98 = ((x449>(x450+x451))%x452);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint8_t x453 = 3U;
	int64_t x454 = -1LL;
	volatile int16_t x456 = INT16_MAX;
	volatile int32_t t99 = 201;

    t99 = ((x453>(x454+x455))%x456);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint8_t x457 = UINT8_MAX;
	int8_t x458 = INT8_MIN;
	uint8_t x459 = UINT8_MAX;
	int64_t x460 = INT64_MAX;
	volatile int64_t t100 = 11852821927LL;

    t100 = ((x457>(x458+x459))%x460);

    if (t100 != 1LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint16_t x463 = 23U;
	uint64_t x464 = 18LLU;
	uint64_t t101 = 49810039079663338LLU;

    t101 = ((x461>(x462+x463))%x464);

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x466 = INT16_MAX;
	int16_t x467 = INT16_MAX;
	uint64_t x468 = UINT64_MAX;
	uint64_t t102 = 67874218LLU;

    t102 = ((x465>(x466+x467))%x468);

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x469 = 2023672519923LL;
	int32_t x471 = 428681;
	int32_t t103 = -342354;

    t103 = ((x469>(x470+x471))%x472);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x473 = INT64_MIN;
	int8_t x474 = -1;
	volatile int8_t x475 = INT8_MAX;
	static int32_t x476 = 892726;
	volatile int32_t t104 = -14;

    t104 = ((x473>(x474+x475))%x476);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x478 = INT16_MIN;
	uint16_t x479 = 7780U;
	int64_t x480 = INT64_MAX;
	int64_t t105 = -244940583LL;

    t105 = ((x477>(x478+x479))%x480);

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint16_t x481 = 42U;
	volatile int16_t x482 = INT16_MIN;
	int8_t x483 = -1;
	int8_t x484 = INT8_MIN;

    t106 = ((x481>(x482+x483))%x484);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x485 = -4;
	static uint8_t x486 = 57U;
	int16_t x487 = INT16_MAX;
	int16_t x488 = INT16_MAX;
	static volatile int32_t t107 = 62733;

    t107 = ((x485>(x486+x487))%x488);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x489 = 302U;
	volatile uint32_t x490 = UINT32_MAX;
	int8_t x491 = -1;
	volatile uint64_t t108 = 635614432561150LLU;

    t108 = ((x489>(x490+x491))%x492);

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x493 = -18;
	int8_t x494 = 1;
	int8_t x495 = -6;
	uint16_t x496 = 21U;
	static volatile int32_t t109 = -1367086;

    t109 = ((x493>(x494+x495))%x496);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x497 = -670;
	uint32_t x498 = 1949U;
	int16_t x499 = -1;
	volatile int32_t t110 = 4;

    t110 = ((x497>(x498+x499))%x500);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x503 = 4174808LLU;
	volatile int16_t x504 = -8540;
	volatile int32_t t111 = 51570;

    t111 = ((x501>(x502+x503))%x504);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x505 = INT8_MIN;
	static int64_t x506 = 1LL;
	static int8_t x507 = -1;
	int16_t x508 = -1;
	volatile int32_t t112 = -65446;

    t112 = ((x505>(x506+x507))%x508);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x518 = -462;
	int32_t x519 = -1;
	int8_t x520 = -1;

    t113 = ((x517>(x518+x519))%x520);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x521 = INT32_MAX;
	int16_t x523 = INT16_MIN;
	int32_t x524 = -55904414;

    t114 = ((x521>(x522+x523))%x524);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x526 = 10986474U;
	static uint64_t x527 = UINT64_MAX;
	int8_t x528 = INT8_MIN;
	static volatile int32_t t115 = -1103038;

    t115 = ((x525>(x526+x527))%x528);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x529 = 162U;
	uint32_t x530 = 391U;
	static int32_t x531 = -1;
	int8_t x532 = INT8_MIN;

    t116 = ((x529>(x530+x531))%x532);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x535 = UINT8_MAX;
	int16_t x536 = -1645;
	volatile int32_t t117 = 14455;

    t117 = ((x533>(x534+x535))%x536);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x541 = 32U;
	uint64_t x543 = UINT64_MAX;
	static uint32_t x544 = 910966260U;
	uint32_t t118 = 7977485U;

    t118 = ((x541>(x542+x543))%x544);

    if (t118 != 0U) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x545 = 22813U;
	int32_t x546 = -4;
	static volatile int32_t x548 = INT32_MIN;
	volatile int32_t t119 = -1;

    t119 = ((x545>(x546+x547))%x548);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile uint64_t x549 = UINT64_MAX;
	int32_t x550 = INT32_MIN;
	uint16_t x551 = UINT16_MAX;
	int16_t x552 = -392;
	static volatile int32_t t120 = 1215;

    t120 = ((x549>(x550+x551))%x552);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x553 = 44U;
	int16_t x554 = -1;
	uint16_t x556 = 128U;
	volatile int32_t t121 = -1349;

    t121 = ((x553>(x554+x555))%x556);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x557 = -1;
	int8_t x558 = INT8_MIN;
	static uint64_t x559 = 46LLU;
	int8_t x560 = -6;
	static volatile int32_t t122 = 253632;

    t122 = ((x557>(x558+x559))%x560);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x561 = 5U;
	static int64_t x562 = INT64_MAX;
	uint8_t x564 = UINT8_MAX;
	static volatile int32_t t123 = -1172;

    t123 = ((x561>(x562+x563))%x564);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x566 = -1;
	int64_t x567 = INT64_MAX;
	uint64_t t124 = 25118713LLU;

    t124 = ((x565>(x566+x567))%x568);

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x569 = UINT16_MAX;
	int32_t x570 = 48;
	uint16_t x571 = 49U;
	int8_t x572 = -4;
	volatile int32_t t125 = 685307;

    t125 = ((x569>(x570+x571))%x572);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x573 = -142442583;
	int8_t x574 = 0;
	static int16_t x576 = INT16_MIN;
	int32_t t126 = 6296623;

    t126 = ((x573>(x574+x575))%x576);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint32_t x577 = 214896316U;
	int32_t x578 = -3482;
	int8_t x579 = -3;
	int16_t x580 = INT16_MAX;
	int32_t t127 = 500406883;

    t127 = ((x577>(x578+x579))%x580);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x581 = INT32_MIN;
	uint16_t x582 = UINT16_MAX;
	int32_t x583 = -24200886;
	volatile uint64_t x584 = 250779172984904610LLU;
	volatile uint64_t t128 = 1417122450428LLU;

    t128 = ((x581>(x582+x583))%x584);

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int8_t x585 = INT8_MIN;
	int32_t x588 = 13;
	int32_t t129 = 59155;

    t129 = ((x585>(x586+x587))%x588);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x589 = 1034952964;
	int16_t x590 = INT16_MIN;
	uint32_t x591 = 6U;
	volatile uint64_t x592 = 304787281082362LLU;

    t130 = ((x589>(x590+x591))%x592);

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x593 = 1U;
	volatile int32_t x594 = 190709;
	int8_t x595 = INT8_MIN;
	uint32_t x596 = 38U;
	uint32_t t131 = 154627U;

    t131 = ((x593>(x594+x595))%x596);

    if (t131 != 0U) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x597 = -18LL;
	int16_t x598 = INT16_MIN;
	int16_t x599 = INT16_MIN;
	static int32_t x600 = -2881140;
	int32_t t132 = -371;

    t132 = ((x597>(x598+x599))%x600);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x601 = UINT32_MAX;
	int32_t x603 = INT32_MIN;
	volatile uint64_t t133 = 5324842872481LLU;

    t133 = ((x601>(x602+x603))%x604);

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x605 = INT16_MIN;
	volatile int32_t x606 = -1;
	uint32_t x607 = 30851614U;
	uint64_t x608 = 5504LLU;
	uint64_t t134 = 731656881LLU;

    t134 = ((x605>(x606+x607))%x608);

    if (t134 != 1LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x610 = 10359042560306009LLU;
	static int32_t x612 = INT32_MIN;
	int32_t t135 = -3286409;

    t135 = ((x609>(x610+x611))%x612);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x613 = INT16_MAX;
	uint64_t x614 = 126083LLU;
	int16_t x615 = -1;
	static int16_t x616 = INT16_MIN;
	int32_t t136 = -6804055;

    t136 = ((x613>(x614+x615))%x616);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint16_t x617 = 643U;
	uint16_t x618 = UINT16_MAX;
	int8_t x620 = -1;
	int32_t t137 = -3540;

    t137 = ((x617>(x618+x619))%x620);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile int64_t x621 = INT64_MIN;
	uint16_t x622 = 3U;
	uint32_t x623 = UINT32_MAX;
	int32_t x624 = -530329;
	int32_t t138 = -427;

    t138 = ((x621>(x622+x623))%x624);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x625 = INT16_MIN;
	int64_t x626 = 1476917913LL;
	static uint64_t x627 = 7594749667917LLU;
	uint16_t x628 = 6U;
	static volatile int32_t t139 = 3063127;

    t139 = ((x625>(x626+x627))%x628);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x629 = INT32_MAX;
	int16_t x630 = INT16_MAX;
	uint32_t x631 = 2U;
	int32_t x632 = -1;
	int32_t t140 = -326;

    t140 = ((x629>(x630+x631))%x632);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x633 = 142055054U;
	uint32_t x634 = 7547U;
	volatile uint64_t x635 = 149LLU;
	int64_t x636 = INT64_MAX;
	static int64_t t141 = 208074LL;

    t141 = ((x633>(x634+x635))%x636);

    if (t141 != 1LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x638 = 359094U;
	static volatile int16_t x639 = -1;
	int32_t x640 = INT32_MIN;
	volatile int32_t t142 = 13;

    t142 = ((x637>(x638+x639))%x640);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x641 = -385710167760983LL;
	static int32_t x642 = -1;
	volatile uint8_t x643 = UINT8_MAX;
	uint32_t x644 = UINT32_MAX;
	uint32_t t143 = 10U;

    t143 = ((x641>(x642+x643))%x644);

    if (t143 != 0U) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x646 = UINT8_MAX;
	static int32_t x647 = INT32_MIN;
	int8_t x648 = INT8_MIN;
	volatile int32_t t144 = -1;

    t144 = ((x645>(x646+x647))%x648);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x649 = -3669016903LL;
	volatile int32_t t145 = 0;

    t145 = ((x649>(x650+x651))%x652);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x653 = INT32_MIN;
	static int16_t x654 = INT16_MIN;
	int64_t x656 = INT64_MAX;
	static int64_t t146 = -134678546996LL;

    t146 = ((x653>(x654+x655))%x656);

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x657 = INT8_MIN;
	uint8_t x658 = UINT8_MAX;
	int64_t x660 = 282686191263LL;

    t147 = ((x657>(x658+x659))%x660);

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x665 = -51LL;
	int32_t x666 = -95;
	int32_t x668 = -1;
	volatile int32_t t148 = 4860047;

    t148 = ((x665>(x666+x667))%x668);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint16_t x670 = 12115U;
	static volatile int32_t x671 = INT32_MIN;
	uint16_t x672 = UINT16_MAX;
	int32_t t149 = 718611;

    t149 = ((x669>(x670+x671))%x672);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int64_t x673 = INT64_MIN;
	int32_t x674 = INT32_MIN;
	static int8_t x675 = 5;
	volatile int32_t t150 = 196107;

    t150 = ((x673>(x674+x675))%x676);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x678 = 30625532U;
	uint8_t x679 = 113U;
	int16_t x680 = -30;
	int32_t t151 = -2629;

    t151 = ((x677>(x678+x679))%x680);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile uint64_t x682 = 56075097LLU;
	uint64_t x683 = UINT64_MAX;
	volatile uint16_t x684 = 1023U;
	static volatile int32_t t152 = -46;

    t152 = ((x681>(x682+x683))%x684);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x685 = UINT16_MAX;
	int64_t x686 = -172809655645029031LL;
	static volatile uint32_t t153 = 123895999U;

    t153 = ((x685>(x686+x687))%x688);

    if (t153 != 1U) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x689 = 57770U;
	int32_t x690 = -1;
	uint64_t x691 = 109LLU;
	int8_t x692 = -1;

    t154 = ((x689>(x690+x691))%x692);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x693 = -1LL;
	static uint32_t x694 = UINT32_MAX;
	int16_t x695 = -1;
	uint32_t x696 = UINT32_MAX;
	volatile uint32_t t155 = 798U;

    t155 = ((x693>(x694+x695))%x696);

    if (t155 != 0U) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x701 = INT32_MAX;
	int16_t x703 = INT16_MIN;
	int16_t x704 = -1;

    t156 = ((x701>(x702+x703))%x704);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x705 = 156U;
	int8_t x706 = INT8_MIN;
	int8_t x707 = -1;
	uint16_t x708 = 180U;
	volatile int32_t t157 = 920229;

    t157 = ((x705>(x706+x707))%x708);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x709 = 25;
	int8_t x711 = INT8_MIN;
	int16_t x712 = -38;
	volatile int32_t t158 = 14924980;

    t158 = ((x709>(x710+x711))%x712);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint16_t x713 = UINT16_MAX;
	int8_t x714 = INT8_MIN;
	int64_t x715 = -1LL;
	volatile int64_t x716 = INT64_MIN;
	int64_t t159 = -88012290908LL;

    t159 = ((x713>(x714+x715))%x716);

    if (t159 != 1LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x717 = INT16_MAX;
	volatile int16_t x718 = INT16_MIN;
	int32_t x719 = -1;
	static int16_t x720 = -1;
	volatile int32_t t160 = -47862765;

    t160 = ((x717>(x718+x719))%x720);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x722 = 122U;
	int16_t x723 = INT16_MIN;
	static volatile int32_t x724 = -1086130;

    t161 = ((x721>(x722+x723))%x724);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint16_t x725 = UINT16_MAX;
	int32_t x726 = INT32_MAX;
	int32_t x727 = INT32_MIN;
	static int8_t x728 = INT8_MIN;

    t162 = ((x725>(x726+x727))%x728);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x729 = 6;
	volatile uint8_t x730 = 0U;
	uint32_t x731 = 128691U;
	int16_t x732 = INT16_MIN;

    t163 = ((x729>(x730+x731))%x732);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x734 = 134U;
	int16_t x735 = INT16_MIN;
	static int64_t x736 = -1LL;

    t164 = ((x733>(x734+x735))%x736);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int64_t x737 = INT64_MIN;
	static volatile int16_t x739 = -1;
	int8_t x740 = INT8_MIN;
	int32_t t165 = 0;

    t165 = ((x737>(x738+x739))%x740);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x745 = -1826561LL;
	int32_t x747 = -64889343;
	int32_t x748 = -1;
	int32_t t166 = -72207854;

    t166 = ((x745>(x746+x747))%x748);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x749 = INT64_MAX;
	int16_t x750 = -195;
	static int64_t x751 = -1LL;
	static int8_t x752 = 56;
	volatile int32_t t167 = -16152544;

    t167 = ((x749>(x750+x751))%x752);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x753 = 13;
	static int8_t x755 = 1;
	uint32_t x756 = UINT32_MAX;
	uint32_t t168 = 225U;

    t168 = ((x753>(x754+x755))%x756);

    if (t168 != 1U) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x757 = -130;
	int64_t x758 = -1LL;
	volatile int16_t x760 = INT16_MIN;
	int32_t t169 = 1884;

    t169 = ((x757>(x758+x759))%x760);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x761 = -4;
	volatile int64_t x762 = -1LL;
	uint8_t x763 = 5U;
	static volatile int32_t x764 = -1;
	static volatile int32_t t170 = -17600;

    t170 = ((x761>(x762+x763))%x764);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x765 = -103;
	uint8_t x766 = 45U;
	int32_t x767 = INT32_MIN;
	static int32_t t171 = -350468077;

    t171 = ((x765>(x766+x767))%x768);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x769 = -1LL;
	uint32_t x770 = 2870823U;
	int16_t x771 = -451;
	int32_t x772 = -2;
	int32_t t172 = 1;

    t172 = ((x769>(x770+x771))%x772);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x777 = -32953755056529LL;
	volatile int32_t x778 = 4112639;
	int64_t x779 = INT64_MIN;
	int16_t x780 = 4;

    t173 = ((x777>(x778+x779))%x780);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x785 = 1812U;
	uint64_t x786 = 211950763LLU;
	int8_t x787 = -12;
	volatile uint8_t x788 = 7U;
	static int32_t t174 = 13081388;

    t174 = ((x785>(x786+x787))%x788);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint32_t x789 = 32246719U;
	int64_t x790 = -1LL;
	int64_t x791 = -1304676960742LL;
	static uint32_t x792 = 461304U;
	volatile uint32_t t175 = 3U;

    t175 = ((x789>(x790+x791))%x792);

    if (t175 != 1U) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint8_t x793 = UINT8_MAX;
	static int16_t x794 = -4866;
	static uint8_t x795 = 15U;
	int32_t x796 = INT32_MIN;
	volatile int32_t t176 = 7;

    t176 = ((x793>(x794+x795))%x796);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x797 = INT16_MIN;
	static int8_t x798 = INT8_MAX;
	static volatile int16_t x799 = INT16_MAX;
	static volatile int8_t x800 = INT8_MAX;
	int32_t t177 = -61;

    t177 = ((x797>(x798+x799))%x800);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x801 = UINT32_MAX;
	uint32_t x802 = UINT32_MAX;
	int32_t x803 = INT32_MIN;
	int16_t x804 = INT16_MIN;
	volatile int32_t t178 = -496011447;

    t178 = ((x801>(x802+x803))%x804);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x805 = INT16_MAX;
	static uint32_t x806 = 22162U;
	int8_t x807 = -13;
	int64_t x808 = -232287410LL;
	static int64_t t179 = 1LL;

    t179 = ((x805>(x806+x807))%x808);

    if (t179 != 1LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x809 = -4639;
	int32_t x810 = 0;
	volatile int64_t x811 = 12879385108538637LL;
	int32_t x812 = -1;
	volatile int32_t t180 = 21030;

    t180 = ((x809>(x810+x811))%x812);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x813 = 494U;
	uint8_t x814 = 52U;
	int32_t x816 = INT32_MIN;
	volatile int32_t t181 = -13;

    t181 = ((x813>(x814+x815))%x816);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x817 = INT32_MAX;
	volatile uint32_t x818 = 49968060U;
	uint32_t x819 = 43613U;
	uint8_t x820 = 1U;
	volatile int32_t t182 = 172;

    t182 = ((x817>(x818+x819))%x820);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x821 = INT16_MIN;
	static int32_t x822 = INT32_MIN;
	int16_t x823 = 45;
	volatile uint16_t x824 = UINT16_MAX;
	int32_t t183 = -227;

    t183 = ((x821>(x822+x823))%x824);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x825 = 5U;
	volatile uint64_t x826 = 42288LLU;
	uint64_t x827 = 7497680975LLU;
	volatile uint64_t x828 = 58LLU;

    t184 = ((x825>(x826+x827))%x828);

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint32_t x829 = 25978978U;
	int16_t x830 = INT16_MAX;
	int16_t x831 = INT16_MAX;
	int32_t x832 = INT32_MIN;
	volatile int32_t t185 = -1359;

    t185 = ((x829>(x830+x831))%x832);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x833 = INT32_MIN;
	volatile int64_t x834 = 1381433109LL;
	uint16_t x836 = 210U;
	static volatile int32_t t186 = 1374164;

    t186 = ((x833>(x834+x835))%x836);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x837 = 69300342567019549LLU;
	volatile int32_t x838 = -1;
	uint64_t x839 = 110570LLU;
	int32_t x840 = INT32_MIN;
	int32_t t187 = 11;

    t187 = ((x837>(x838+x839))%x840);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x841 = INT32_MIN;
	static uint16_t x842 = 13874U;
	int8_t x843 = INT8_MIN;
	int64_t x844 = INT64_MIN;
	int64_t t188 = -3LL;

    t188 = ((x841>(x842+x843))%x844);

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x845 = -593110LL;
	int16_t x846 = -721;
	uint16_t x848 = UINT16_MAX;
	int32_t t189 = 5978178;

    t189 = ((x845>(x846+x847))%x848);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x849 = INT16_MIN;
	uint64_t x850 = 90LLU;
	int16_t x851 = 6;
	volatile int16_t x852 = INT16_MIN;
	static int32_t t190 = 229998;

    t190 = ((x849>(x850+x851))%x852);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint32_t x854 = 407U;
	int64_t x855 = INT64_MIN;
	int8_t x856 = -1;
	int32_t t191 = -148623383;

    t191 = ((x853>(x854+x855))%x856);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x857 = UINT16_MAX;
	uint64_t x858 = 3347828060640275461LLU;
	static int8_t x859 = -2;
	uint64_t x860 = UINT64_MAX;
	uint64_t t192 = 1LLU;

    t192 = ((x857>(x858+x859))%x860);

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x861 = -1LL;
	volatile int16_t x862 = INT16_MIN;
	static uint8_t x863 = UINT8_MAX;
	int64_t t193 = 23619LL;

    t193 = ((x861>(x862+x863))%x864);

    if (t193 != 1LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x865 = 14U;
	static uint8_t x866 = 2U;
	static volatile uint8_t x867 = 0U;
	static int64_t x868 = INT64_MAX;
	int64_t t194 = -5944LL;

    t194 = ((x865>(x866+x867))%x868);

    if (t194 != 1LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x870 = -1;
	int32_t x871 = 161;
	volatile int16_t x872 = INT16_MAX;

    t195 = ((x869>(x870+x871))%x872);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x873 = -1;
	volatile int32_t x874 = INT32_MAX;
	int8_t x875 = -1;
	volatile int32_t t196 = 17;

    t196 = ((x873>(x874+x875))%x876);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x877 = 93744947016147LLU;
	static uint32_t x878 = 502086U;
	static uint16_t x879 = 1U;
	int32_t x880 = INT32_MIN;
	volatile int32_t t197 = 1;

    t197 = ((x877>(x878+x879))%x880);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x881 = UINT64_MAX;
	volatile int8_t x883 = INT8_MIN;
	static uint8_t x884 = UINT8_MAX;
	volatile int32_t t198 = 18630646;

    t198 = ((x881>(x882+x883))%x884);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x890 = 203532;
	int64_t x891 = INT64_MIN;
	static int64_t x892 = INT64_MAX;
	volatile int64_t t199 = 190908083450615177LL;

    t199 = ((x889>(x890+x891))%x892);

    if (t199 != 1LL) { NG(); } else { ; }
	
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


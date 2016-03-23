
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

int32_t x11 = 0;
int8_t x14 = INT8_MIN;
int8_t x15 = -2;
int16_t x16 = INT16_MIN;
uint8_t x18 = 5U;
uint16_t x23 = 851U;
static int16_t x24 = INT16_MAX;
volatile int16_t x26 = INT16_MIN;
volatile uint16_t x28 = 19692U;
volatile int32_t t5 = 845338036;
int64_t x30 = -67549253004467349LL;
static volatile uint64_t x31 = 24802920LLU;
uint64_t x43 = UINT64_MAX;
int64_t t9 = -18290215LL;
int32_t x50 = -1;
volatile int16_t x56 = -47;
uint32_t x60 = 485220U;
int8_t x62 = INT8_MIN;
int64_t x63 = -2554989504574999709LL;
int8_t x64 = INT8_MIN;
uint32_t x80 = UINT32_MAX;
volatile uint32_t t16 = 24U;
uint8_t x81 = 0U;
int64_t x82 = INT64_MIN;
static volatile uint8_t x83 = UINT8_MAX;
uint8_t x85 = 119U;
int64_t x93 = INT64_MIN;
volatile int64_t x95 = -1LL;
volatile int64_t t20 = -85135716LL;
int32_t x103 = INT32_MIN;
int16_t x104 = -166;
volatile int32_t x107 = -70973;
int16_t x108 = INT16_MIN;
int16_t x110 = INT16_MIN;
uint8_t x111 = 21U;
static int32_t t24 = -13;
int16_t x114 = -1;
static int16_t x116 = 1647;
int64_t x118 = 1809416LL;
volatile int64_t t26 = 1367464897208460LL;
int8_t x129 = -16;
int16_t x130 = INT16_MIN;
uint8_t x145 = UINT8_MAX;
static volatile int64_t x146 = -4086164LL;
volatile uint64_t x149 = 2LLU;
volatile uint64_t x154 = 5LLU;
uint8_t x158 = 35U;
uint64_t x159 = 80LLU;
int32_t x164 = 4466;
int8_t x174 = -48;
volatile uint8_t x177 = 93U;
int32_t x178 = INT32_MIN;
int32_t x179 = INT32_MIN;
int8_t x184 = INT8_MAX;
uint8_t x191 = UINT8_MAX;
uint16_t x197 = 189U;
int16_t x198 = -290;
static int8_t x199 = INT8_MAX;
volatile int32_t t46 = -70822;
static uint32_t x204 = 4U;
int16_t x206 = INT16_MIN;
int64_t x222 = INT64_MIN;
int16_t x225 = 0;
volatile int64_t t55 = 564LL;
int32_t x237 = -1;
static uint64_t x241 = 1LLU;
static volatile int16_t x249 = -1;
static int8_t x250 = -1;
volatile int32_t t61 = -1;
static uint64_t x261 = 12405257511768LLU;
uint64_t x262 = UINT64_MAX;
volatile int32_t x272 = INT32_MIN;
volatile uint64_t x295 = 6733529LLU;
volatile int16_t x296 = INT16_MIN;
int8_t x298 = -1;
int32_t t72 = 81230;
int32_t t73 = -12210742;
static volatile int32_t x309 = -7360;
volatile int64_t t76 = -1LL;
volatile int8_t x326 = -20;
volatile int32_t x328 = INT32_MIN;
int16_t x330 = INT16_MIN;
volatile int32_t t79 = -49;
static int32_t x338 = -194;
int64_t x340 = INT64_MAX;
int8_t x345 = INT8_MAX;
static uint32_t x346 = 7934U;
volatile uint32_t t82 = 0U;
int16_t x356 = 3;
int16_t x368 = INT16_MIN;
uint8_t x369 = 93U;
static int16_t x373 = 7474;
static int32_t t89 = 3;
int8_t x377 = -1;
volatile int8_t x388 = 34;
uint32_t t96 = 449U;
volatile int16_t x405 = INT16_MIN;
int32_t x407 = INT32_MIN;
int8_t x409 = INT8_MAX;
int32_t t98 = 1;
int8_t x414 = INT8_MAX;
volatile int16_t x426 = 9206;
volatile int64_t x431 = INT64_MAX;
static int64_t x435 = INT64_MAX;
static int64_t x438 = INT64_MAX;
volatile int64_t t105 = -7588140131681599LL;
static uint16_t x441 = UINT16_MAX;
uint32_t x443 = UINT32_MAX;
int8_t x447 = -41;
int64_t x449 = 26LL;
volatile int64_t x452 = INT64_MAX;
uint32_t x455 = 9711U;
volatile int32_t t109 = -40330;
uint32_t x464 = UINT32_MAX;
uint64_t t112 = 1LLU;
int64_t x470 = INT64_MAX;
static uint8_t x478 = UINT8_MAX;
static volatile int32_t t115 = -270531;
int64_t x488 = 11148LL;
uint64_t x493 = UINT64_MAX;
int32_t x494 = -39292301;
volatile uint64_t x499 = 282844723LLU;
int32_t x500 = INT32_MIN;
static uint8_t x503 = UINT8_MAX;
static volatile int32_t x504 = INT32_MAX;
static int16_t x508 = INT16_MIN;
int8_t x514 = -7;
int16_t x526 = -1;
int16_t x528 = INT16_MIN;
int32_t t127 = 233;
static volatile uint16_t x537 = UINT16_MAX;
uint8_t x538 = 9U;
int16_t x545 = INT16_MIN;
int16_t x547 = 6;
static int64_t x548 = INT64_MAX;
uint8_t x553 = UINT8_MAX;
volatile uint8_t x556 = 30U;
static volatile int64_t x562 = INT64_MIN;
int8_t x566 = INT8_MAX;
volatile int64_t x569 = INT64_MIN;
volatile int64_t t136 = 858LL;
volatile int8_t x573 = 33;
volatile int8_t x574 = INT8_MIN;
static int32_t x575 = -677372;
uint32_t x579 = 7U;
int16_t x580 = -1;
int32_t t138 = 302;
uint16_t x588 = UINT16_MAX;
uint8_t x590 = 119U;
int32_t t143 = 24;
int64_t x608 = INT64_MIN;
uint8_t x612 = 109U;
volatile int64_t t145 = 416777057293491444LL;
volatile uint32_t t146 = 20U;
int32_t x620 = INT32_MAX;
uint16_t x622 = 1063U;
static int16_t x623 = INT16_MIN;
volatile int16_t x625 = INT16_MIN;
int16_t x627 = 1;
volatile int8_t x633 = 4;
volatile uint64_t t150 = 4320328277551350LLU;
uint32_t x639 = 136683027U;
static int64_t t151 = 240LL;
int16_t x641 = INT16_MIN;
int16_t x643 = 6;
uint16_t x644 = 19U;
int64_t x645 = -36405018LL;
int64_t x648 = 2650179919308LL;
int64_t x655 = -7481638LL;
uint16_t x660 = UINT16_MAX;
static volatile uint16_t x661 = 41U;
static uint16_t x662 = 366U;
static int16_t x663 = 6;
int64_t x666 = INT64_MIN;
int16_t x668 = -1;
int32_t x680 = -16;
volatile int16_t x682 = INT16_MAX;
int32_t t162 = -249448662;
static volatile int32_t t165 = 1;
volatile int8_t x701 = INT8_MAX;
volatile int32_t x703 = INT32_MAX;
volatile int32_t t167 = 751459091;
volatile uint64_t x710 = 9874747898876LLU;
uint64_t x716 = UINT64_MAX;
uint8_t x726 = 1U;
int64_t x727 = -1LL;
int16_t x729 = INT16_MAX;
volatile uint16_t x733 = UINT16_MAX;
uint8_t x738 = 2U;
int32_t t177 = 7269041;
volatile int8_t x747 = INT8_MIN;
int16_t x748 = INT16_MIN;
uint8_t x756 = 12U;
int32_t x763 = INT32_MAX;
static int64_t x772 = -5549334656513940LL;
int32_t x774 = -1;
static int64_t x777 = 1400LL;
uint8_t x780 = 12U;
static int16_t x782 = INT16_MIN;
volatile int16_t x784 = 1011;
volatile int64_t x787 = INT64_MIN;
int16_t x789 = INT16_MIN;
int8_t x798 = INT8_MIN;
uint16_t x800 = 1021U;
static uint16_t x803 = UINT16_MAX;
volatile int32_t x804 = INT32_MIN;
volatile int32_t x808 = -21;
volatile int32_t t192 = 279793162;
int8_t x809 = INT8_MAX;
int8_t x811 = INT8_MIN;
uint64_t x822 = 20498669806354689LLU;
int8_t x824 = INT8_MAX;
uint32_t x826 = 64424U;
volatile int32_t x827 = -8;
static volatile uint32_t t197 = 24U;


void f0(void) {
    	volatile uint8_t x1 = UINT8_MAX;
	volatile int8_t x2 = 1;
	volatile int32_t x3 = 28;
	int32_t x4 = INT32_MIN;
	static volatile int32_t t0 = 233125;

    t0 = (x1%(x2/(x3!=x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x9 = 11U;
	int32_t x10 = INT32_MIN;
	volatile int64_t x12 = 1LL;
	volatile uint32_t t1 = 374757U;

    t1 = (x9%(x10/(x11!=x12)));

    if (t1 != 11U) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x13 = -13;
	int32_t t2 = 65391008;

    t2 = (x13%(x14/(x15!=x16)));

    if (t2 != -13) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x17 = INT16_MAX;
	int8_t x19 = -1;
	static int64_t x20 = INT64_MAX;
	volatile int32_t t3 = 22564;

    t3 = (x17%(x18/(x19!=x20)));

    if (t3 != 2) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x21 = -1;
	uint8_t x22 = UINT8_MAX;
	int32_t t4 = 7;

    t4 = (x21%(x22/(x23!=x24)));

    if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x25 = -745;
	uint8_t x27 = 1U;

    t5 = (x25%(x26/(x27!=x28)));

    if (t5 != -745) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x29 = -1LL;
	uint32_t x32 = UINT32_MAX;
	volatile int64_t t6 = 24371LL;

    t6 = (x29%(x30/(x31!=x32)));

    if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x33 = 1171979619U;
	int16_t x34 = 91;
	static int64_t x35 = 27439634927315754LL;
	int16_t x36 = 2486;
	volatile uint32_t t7 = 4U;

    t7 = (x33%(x34/(x35!=x36)));

    if (t7 != 83U) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x37 = INT16_MIN;
	static int16_t x38 = 3;
	volatile uint8_t x39 = 13U;
	int32_t x40 = 1;
	volatile int32_t t8 = -111;

    t8 = (x37%(x38/(x39!=x40)));

    if (t8 != -2) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x41 = 17U;
	int64_t x42 = INT64_MIN;
	int32_t x44 = INT32_MAX;

    t9 = (x41%(x42/(x43!=x44)));

    if (t9 != 17LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x49 = 7124611413719928LL;
	int8_t x51 = INT8_MIN;
	int16_t x52 = 27;
	volatile int64_t t10 = -267LL;

    t10 = (x49%(x50/(x51!=x52)));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x53 = INT16_MIN;
	uint32_t x54 = UINT32_MAX;
	volatile uint8_t x55 = UINT8_MAX;
	volatile uint32_t t11 = 408U;

    t11 = (x53%(x54/(x55!=x56)));

    if (t11 != 4294934528U) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x57 = 16794511227631LL;
	int8_t x58 = 11;
	static int64_t x59 = -11267727054LL;
	int64_t t12 = 141883876633667LL;

    t12 = (x57%(x58/(x59!=x60)));

    if (t12 != 5LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int64_t x61 = INT64_MIN;
	static int64_t t13 = 7LL;

    t13 = (x61%(x62/(x63!=x64)));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x65 = INT32_MIN;
	int64_t x66 = INT64_MIN;
	int16_t x67 = -1563;
	uint8_t x68 = 0U;
	int64_t t14 = 6014482476LL;

    t14 = (x65%(x66/(x67!=x68)));

    if (t14 != -2147483648LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x73 = 1;
	volatile int16_t x74 = 112;
	static uint8_t x75 = 59U;
	int16_t x76 = 1;
	int32_t t15 = -15;

    t15 = (x73%(x74/(x75!=x76)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x77 = 7;
	volatile uint32_t x78 = 61543U;
	int16_t x79 = 0;

    t16 = (x77%(x78/(x79!=x80)));

    if (t16 != 7U) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x84 = -10405277663LL;
	int64_t t17 = 1676472LL;

    t17 = (x81%(x82/(x83!=x84)));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x86 = INT64_MAX;
	int32_t x87 = INT32_MIN;
	int8_t x88 = -1;
	static volatile int64_t t18 = 134548LL;

    t18 = (x85%(x86/(x87!=x88)));

    if (t18 != 119LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x89 = 28;
	volatile uint32_t x90 = 574445085U;
	int32_t x91 = -574286;
	volatile int32_t x92 = INT32_MAX;
	uint32_t t19 = 16036620U;

    t19 = (x89%(x90/(x91!=x92)));

    if (t19 != 28U) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x94 = -64157204985995LL;
	int8_t x96 = INT8_MAX;

    t20 = (x93%(x94/(x95!=x96)));

    if (t20 != -3933658162618LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x97 = -3;
	static int16_t x98 = -587;
	uint32_t x99 = 4966U;
	int16_t x100 = INT16_MIN;
	volatile int32_t t21 = 207;

    t21 = (x97%(x98/(x99!=x100)));

    if (t21 != -3) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x101 = -1;
	volatile int8_t x102 = INT8_MAX;
	static volatile int32_t t22 = -92827169;

    t22 = (x101%(x102/(x103!=x104)));

    if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x105 = INT16_MIN;
	uint16_t x106 = 6U;
	int32_t t23 = -4082;

    t23 = (x105%(x106/(x107!=x108)));

    if (t23 != -2) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x109 = INT32_MIN;
	static volatile uint8_t x112 = 0U;

    t24 = (x109%(x110/(x111!=x112)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x113 = 13;
	int32_t x115 = 203348;
	int32_t t25 = 8154;

    t25 = (x113%(x114/(x115!=x116)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x117 = -1;
	int16_t x119 = -11867;
	int16_t x120 = -1;

    t26 = (x117%(x118/(x119!=x120)));

    if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint32_t x121 = UINT32_MAX;
	static int32_t x122 = INT32_MIN;
	volatile int32_t x123 = -145515573;
	uint64_t x124 = UINT64_MAX;
	uint32_t t27 = 94475U;

    t27 = (x121%(x122/(x123!=x124)));

    if (t27 != 2147483647U) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x125 = -1;
	uint16_t x126 = UINT16_MAX;
	int8_t x127 = -1;
	static int64_t x128 = INT64_MIN;
	volatile int32_t t28 = -509194512;

    t28 = (x125%(x126/(x127!=x128)));

    if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x131 = 151101U;
	int32_t x132 = 1045;
	volatile int32_t t29 = 41784;

    t29 = (x129%(x130/(x131!=x132)));

    if (t29 != -16) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x133 = INT16_MIN;
	int64_t x134 = -1LL;
	int8_t x135 = INT8_MIN;
	uint8_t x136 = UINT8_MAX;
	int64_t t30 = -32302LL;

    t30 = (x133%(x134/(x135!=x136)));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x137 = INT32_MIN;
	static int64_t x138 = INT64_MIN;
	volatile int32_t x139 = INT32_MIN;
	int64_t x140 = INT64_MIN;
	volatile int64_t t31 = 1LL;

    t31 = (x137%(x138/(x139!=x140)));

    if (t31 != -2147483648LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int8_t x141 = -1;
	int64_t x142 = -1LL;
	uint16_t x143 = 250U;
	static volatile int32_t x144 = -61;
	int64_t t32 = -15756LL;

    t32 = (x141%(x142/(x143!=x144)));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x147 = 1;
	uint8_t x148 = 4U;
	volatile int64_t t33 = -4LL;

    t33 = (x145%(x146/(x147!=x148)));

    if (t33 != 255LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x150 = -181913;
	int8_t x151 = INT8_MIN;
	uint8_t x152 = 7U;
	volatile uint64_t t34 = 1307358156LLU;

    t34 = (x149%(x150/(x151!=x152)));

    if (t34 != 2LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x153 = 150U;
	volatile int16_t x155 = -1;
	static int8_t x156 = INT8_MAX;
	uint64_t t35 = 4648LLU;

    t35 = (x153%(x154/(x155!=x156)));

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x157 = INT16_MIN;
	int16_t x160 = INT16_MIN;
	static int32_t t36 = -6;

    t36 = (x157%(x158/(x159!=x160)));

    if (t36 != -8) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x161 = INT8_MIN;
	static int16_t x162 = INT16_MIN;
	int32_t x163 = INT32_MIN;
	int32_t t37 = -2743127;

    t37 = (x161%(x162/(x163!=x164)));

    if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x165 = -1LL;
	uint64_t x166 = 172298LLU;
	uint32_t x167 = UINT32_MAX;
	int8_t x168 = INT8_MIN;
	volatile uint64_t t38 = 14LLU;

    t38 = (x165%(x166/(x167!=x168)));

    if (t38 != 56869LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x169 = -1LL;
	volatile uint8_t x170 = 1U;
	uint64_t x171 = UINT64_MAX;
	static uint8_t x172 = UINT8_MAX;
	int64_t t39 = -25004378538LL;

    t39 = (x169%(x170/(x171!=x172)));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x173 = INT16_MIN;
	uint16_t x175 = UINT16_MAX;
	static uint64_t x176 = 2LLU;
	static int32_t t40 = -3;

    t40 = (x173%(x174/(x175!=x176)));

    if (t40 != -32) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int64_t x180 = INT64_MIN;
	int32_t t41 = -574;

    t41 = (x177%(x178/(x179!=x180)));

    if (t41 != 93) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x181 = INT64_MIN;
	int8_t x182 = INT8_MIN;
	static int16_t x183 = -7;
	int64_t t42 = -1LL;

    t42 = (x181%(x182/(x183!=x184)));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x185 = -1;
	static int32_t x186 = INT32_MIN;
	int64_t x187 = INT64_MAX;
	static volatile uint8_t x188 = 15U;
	volatile int32_t t43 = -18;

    t43 = (x185%(x186/(x187!=x188)));

    if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x189 = 63332;
	uint32_t x190 = 11457U;
	volatile int8_t x192 = -3;
	volatile uint32_t t44 = 4369U;

    t44 = (x189%(x190/(x191!=x192)));

    if (t44 != 6047U) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x193 = INT8_MIN;
	volatile uint16_t x194 = UINT16_MAX;
	volatile int16_t x195 = INT16_MAX;
	static int32_t x196 = INT32_MAX;
	volatile int32_t t45 = -285221;

    t45 = (x193%(x194/(x195!=x196)));

    if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x200 = -3389542967532621371LL;

    t46 = (x197%(x198/(x199!=x200)));

    if (t46 != 189) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x201 = -1;
	uint16_t x202 = 60U;
	static int64_t x203 = 106298226LL;
	static volatile int32_t t47 = 107;

    t47 = (x201%(x202/(x203!=x204)));

    if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x205 = -1;
	static volatile int8_t x207 = -46;
	volatile uint32_t x208 = UINT32_MAX;
	static volatile int32_t t48 = 129823728;

    t48 = (x205%(x206/(x207!=x208)));

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x209 = 1;
	int8_t x210 = INT8_MIN;
	static int16_t x211 = INT16_MIN;
	int32_t x212 = -1;
	int32_t t49 = -18293;

    t49 = (x209%(x210/(x211!=x212)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x213 = -8;
	volatile uint32_t x214 = UINT32_MAX;
	int32_t x215 = -4;
	static uint32_t x216 = 4U;
	uint32_t t50 = 828735U;

    t50 = (x213%(x214/(x215!=x216)));

    if (t50 != 4294967288U) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x217 = 8;
	static volatile int8_t x218 = INT8_MIN;
	uint32_t x219 = UINT32_MAX;
	int16_t x220 = -388;
	int32_t t51 = 32056;

    t51 = (x217%(x218/(x219!=x220)));

    if (t51 != 8) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x221 = INT32_MIN;
	int32_t x223 = -52008;
	uint8_t x224 = 1U;
	static volatile int64_t t52 = -1282588LL;

    t52 = (x221%(x222/(x223!=x224)));

    if (t52 != -2147483648LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile uint32_t x226 = 35546205U;
	static uint64_t x227 = UINT64_MAX;
	static int32_t x228 = INT32_MIN;
	static uint32_t t53 = 827384057U;

    t53 = (x225%(x226/(x227!=x228)));

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x229 = INT64_MIN;
	uint64_t x230 = 419655LLU;
	int32_t x231 = INT32_MIN;
	int64_t x232 = 20470809994465196LL;
	volatile uint64_t t54 = 119925189786027LLU;

    t54 = (x229%(x230/(x231!=x232)));

    if (t54 != 87758LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x233 = -1LL;
	static int16_t x234 = INT16_MAX;
	int64_t x235 = INT64_MIN;
	static uint16_t x236 = 3U;

    t55 = (x233%(x234/(x235!=x236)));

    if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x238 = UINT16_MAX;
	int32_t x239 = -1;
	static int8_t x240 = 5;
	int32_t t56 = 1039645;

    t56 = (x237%(x238/(x239!=x240)));

    if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x242 = -13511553;
	volatile int8_t x243 = INT8_MIN;
	volatile int8_t x244 = -1;
	volatile uint64_t t57 = 1778263LLU;

    t57 = (x241%(x242/(x243!=x244)));

    if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x245 = -1;
	volatile int32_t x246 = -1;
	uint8_t x247 = UINT8_MAX;
	int16_t x248 = 498;
	volatile int32_t t58 = -1755679;

    t58 = (x245%(x246/(x247!=x248)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x251 = 0U;
	uint16_t x252 = 38U;
	int32_t t59 = 0;

    t59 = (x249%(x250/(x251!=x252)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x253 = -179749;
	int8_t x254 = INT8_MIN;
	int16_t x255 = INT16_MIN;
	int64_t x256 = 3903703866164861023LL;
	volatile int32_t t60 = 28;

    t60 = (x253%(x254/(x255!=x256)));

    if (t60 != -37) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x257 = INT16_MIN;
	int8_t x258 = -1;
	uint8_t x259 = 3U;
	volatile uint64_t x260 = 1LLU;

    t61 = (x257%(x258/(x259!=x260)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint16_t x263 = 2029U;
	int8_t x264 = INT8_MIN;
	volatile uint64_t t62 = 1442LLU;

    t62 = (x261%(x262/(x263!=x264)));

    if (t62 != 12405257511768LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint32_t x265 = 2853850U;
	int64_t x266 = INT64_MAX;
	int16_t x267 = -13;
	uint64_t x268 = UINT64_MAX;
	volatile int64_t t63 = -3221LL;

    t63 = (x265%(x266/(x267!=x268)));

    if (t63 != 2853850LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x269 = INT16_MIN;
	volatile uint32_t x270 = UINT32_MAX;
	volatile uint32_t x271 = 244867812U;
	volatile uint32_t t64 = 94726U;

    t64 = (x269%(x270/(x271!=x272)));

    if (t64 != 4294934528U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x273 = 2276U;
	static uint16_t x274 = 110U;
	int8_t x275 = 3;
	int32_t x276 = INT32_MAX;
	volatile uint32_t t65 = 32U;

    t65 = (x273%(x274/(x275!=x276)));

    if (t65 != 76U) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x277 = INT32_MIN;
	static int32_t x278 = -836486;
	static int16_t x279 = INT16_MIN;
	static int64_t x280 = INT64_MIN;
	static volatile int32_t t66 = 1240;

    t66 = (x277%(x278/(x279!=x280)));

    if (t66 != -224086) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x281 = -71;
	volatile int16_t x282 = INT16_MIN;
	volatile uint32_t x283 = 7516516U;
	volatile uint32_t x284 = 681455545U;
	static volatile int32_t t67 = -14391;

    t67 = (x281%(x282/(x283!=x284)));

    if (t67 != -71) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x285 = 1;
	uint64_t x286 = 66289731LLU;
	uint64_t x287 = 3742001699099337LLU;
	int8_t x288 = INT8_MIN;
	static uint64_t t68 = 1441484188065251LLU;

    t68 = (x285%(x286/(x287!=x288)));

    if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x289 = 12850563634LL;
	int8_t x290 = -1;
	int64_t x291 = INT64_MIN;
	uint16_t x292 = 3U;
	int64_t t69 = -22995213709109LL;

    t69 = (x289%(x290/(x291!=x292)));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x293 = -1LL;
	int8_t x294 = INT8_MIN;
	int64_t t70 = 16392662LL;

    t70 = (x293%(x294/(x295!=x296)));

    if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x297 = INT8_MIN;
	volatile int32_t x299 = INT32_MIN;
	volatile uint32_t x300 = UINT32_MAX;
	volatile int32_t t71 = -97615342;

    t71 = (x297%(x298/(x299!=x300)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x301 = -1;
	uint16_t x302 = UINT16_MAX;
	volatile int8_t x303 = -1;
	volatile uint64_t x304 = 105733624117LLU;

    t72 = (x301%(x302/(x303!=x304)));

    if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x305 = UINT16_MAX;
	int32_t x306 = 92374;
	static int16_t x307 = -7289;
	static uint64_t x308 = UINT64_MAX;

    t73 = (x305%(x306/(x307!=x308)));

    if (t73 != 65535) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x310 = 96U;
	int64_t x311 = 39111074775665008LL;
	uint16_t x312 = 122U;
	int32_t t74 = -1;

    t74 = (x309%(x310/(x311!=x312)));

    if (t74 != -64) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint64_t x313 = 228529610063064LLU;
	int16_t x314 = INT16_MIN;
	int16_t x315 = -1;
	int16_t x316 = -312;
	uint64_t t75 = 302673178954028LLU;

    t75 = (x313%(x314/(x315!=x316)));

    if (t75 != 228529610063064LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x321 = INT32_MAX;
	int64_t x322 = -1LL;
	int64_t x323 = INT64_MIN;
	uint8_t x324 = 1U;

    t76 = (x321%(x322/(x323!=x324)));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x325 = -1222260294LL;
	uint8_t x327 = UINT8_MAX;
	static volatile int64_t t77 = 1679430097605526389LL;

    t77 = (x325%(x326/(x327!=x328)));

    if (t77 != -14LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x329 = INT16_MIN;
	int16_t x331 = -13;
	uint64_t x332 = UINT64_MAX;
	static int32_t t78 = -1;

    t78 = (x329%(x330/(x331!=x332)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x333 = 6U;
	int16_t x334 = INT16_MIN;
	static int64_t x335 = -1LL;
	int8_t x336 = INT8_MAX;

    t79 = (x333%(x334/(x335!=x336)));

    if (t79 != 6) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x337 = INT32_MIN;
	int32_t x339 = INT32_MIN;
	volatile int32_t t80 = 187658;

    t80 = (x337%(x338/(x339!=x340)));

    if (t80 != -66) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint32_t x341 = 20089715U;
	static uint64_t x342 = 5145789178048708LLU;
	int32_t x343 = INT32_MIN;
	int32_t x344 = 3;
	volatile uint64_t t81 = 78647016293141LLU;

    t81 = (x341%(x342/(x343!=x344)));

    if (t81 != 20089715LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x347 = INT32_MAX;
	volatile uint32_t x348 = 567528U;

    t82 = (x345%(x346/(x347!=x348)));

    if (t82 != 127U) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x349 = INT16_MIN;
	uint32_t x350 = UINT32_MAX;
	int64_t x351 = 178LL;
	int64_t x352 = INT64_MAX;
	static uint32_t t83 = 2791U;

    t83 = (x349%(x350/(x351!=x352)));

    if (t83 != 4294934528U) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x353 = -4176124;
	volatile uint16_t x354 = UINT16_MAX;
	static int64_t x355 = 1125181901702144LL;
	volatile int32_t t84 = -2168509;

    t84 = (x353%(x354/(x355!=x356)));

    if (t84 != -47419) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x357 = -1;
	int16_t x358 = 310;
	volatile uint32_t x359 = 4728581U;
	int64_t x360 = INT64_MIN;
	volatile int32_t t85 = -1997;

    t85 = (x357%(x358/(x359!=x360)));

    if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x361 = UINT16_MAX;
	static volatile int16_t x362 = 7751;
	int32_t x363 = -1;
	static volatile uint64_t x364 = 920442233785LLU;
	volatile int32_t t86 = -88714;

    t86 = (x361%(x362/(x363!=x364)));

    if (t86 != 3527) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x365 = INT16_MAX;
	int8_t x366 = 14;
	uint8_t x367 = 0U;
	static int32_t t87 = -26;

    t87 = (x365%(x366/(x367!=x368)));

    if (t87 != 7) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x370 = INT16_MIN;
	volatile int64_t x371 = INT64_MIN;
	int32_t x372 = 178408035;
	volatile int32_t t88 = -22666403;

    t88 = (x369%(x370/(x371!=x372)));

    if (t88 != 93) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x374 = 1U;
	int16_t x375 = -1;
	int64_t x376 = -3316850785849LL;

    t89 = (x373%(x374/(x375!=x376)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x378 = -1LL;
	static uint32_t x379 = UINT32_MAX;
	int64_t x380 = INT64_MAX;
	volatile int64_t t90 = -8590934623338LL;

    t90 = (x377%(x378/(x379!=x380)));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x381 = INT32_MIN;
	int16_t x382 = -1;
	volatile uint8_t x383 = UINT8_MAX;
	int32_t x384 = 2584004;
	static int32_t t91 = 42986560;

    t91 = (x381%(x382/(x383!=x384)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x385 = -7;
	int16_t x386 = INT16_MAX;
	int32_t x387 = INT32_MAX;
	int32_t t92 = 1194;

    t92 = (x385%(x386/(x387!=x388)));

    if (t92 != -7) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x389 = -1;
	uint8_t x390 = UINT8_MAX;
	volatile int16_t x391 = INT16_MIN;
	volatile uint64_t x392 = UINT64_MAX;
	int32_t t93 = -99300306;

    t93 = (x389%(x390/(x391!=x392)));

    if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x393 = -1;
	volatile int8_t x394 = INT8_MIN;
	int64_t x395 = -30366515966090960LL;
	static int8_t x396 = -1;
	int32_t t94 = 1018;

    t94 = (x393%(x394/(x395!=x396)));

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x397 = 5U;
	volatile int8_t x398 = 22;
	volatile int16_t x399 = -1;
	int64_t x400 = -112686LL;
	volatile int32_t t95 = 28367;

    t95 = (x397%(x398/(x399!=x400)));

    if (t95 != 5) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x401 = INT8_MIN;
	uint32_t x402 = UINT32_MAX;
	int16_t x403 = INT16_MIN;
	int8_t x404 = INT8_MIN;

    t96 = (x401%(x402/(x403!=x404)));

    if (t96 != 4294967168U) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x406 = UINT32_MAX;
	volatile int16_t x408 = INT16_MIN;
	volatile uint32_t t97 = 36102487U;

    t97 = (x405%(x406/(x407!=x408)));

    if (t97 != 4294934528U) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x410 = INT32_MIN;
	int8_t x411 = INT8_MIN;
	static int8_t x412 = -1;

    t98 = (x409%(x410/(x411!=x412)));

    if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x413 = 60;
	volatile uint16_t x415 = UINT16_MAX;
	uint32_t x416 = 1U;
	static int32_t t99 = 2;

    t99 = (x413%(x414/(x415!=x416)));

    if (t99 != 60) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x417 = INT16_MAX;
	static volatile int32_t x418 = INT32_MAX;
	volatile uint64_t x419 = 2769LLU;
	uint8_t x420 = 26U;
	static int32_t t100 = -175;

    t100 = (x417%(x418/(x419!=x420)));

    if (t100 != 32767) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint64_t x421 = 8818458LLU;
	int64_t x422 = -1LL;
	static uint16_t x423 = 1762U;
	volatile int64_t x424 = 1455589721LL;
	uint64_t t101 = 63702LLU;

    t101 = (x421%(x422/(x423!=x424)));

    if (t101 != 8818458LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x425 = INT64_MIN;
	static int8_t x427 = -2;
	static int16_t x428 = INT16_MIN;
	int64_t t102 = 52448830785LL;

    t102 = (x425%(x426/(x427!=x428)));

    if (t102 != -1568LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x429 = -1LL;
	static int8_t x430 = INT8_MIN;
	static uint64_t x432 = UINT64_MAX;
	volatile int64_t t103 = 30469035039231LL;

    t103 = (x429%(x430/(x431!=x432)));

    if (t103 != -1LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x433 = 27LL;
	int16_t x434 = -12;
	static volatile uint64_t x436 = UINT64_MAX;
	static int64_t t104 = -2041850892LL;

    t104 = (x433%(x434/(x435!=x436)));

    if (t104 != 3LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x437 = -1;
	int8_t x439 = INT8_MIN;
	int8_t x440 = 1;

    t105 = (x437%(x438/(x439!=x440)));

    if (t105 != -1LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x442 = 678638589U;
	int32_t x444 = INT32_MIN;
	uint32_t t106 = 69216260U;

    t106 = (x441%(x442/(x443!=x444)));

    if (t106 != 65535U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x445 = 221U;
	volatile int64_t x446 = -500LL;
	int32_t x448 = -1;
	static int64_t t107 = -320LL;

    t107 = (x445%(x446/(x447!=x448)));

    if (t107 != 221LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint64_t x450 = UINT64_MAX;
	volatile uint32_t x451 = 755U;
	uint64_t t108 = 304636LLU;

    t108 = (x449%(x450/(x451!=x452)));

    if (t108 != 26LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x453 = 2;
	volatile int16_t x454 = -1;
	static volatile uint32_t x456 = 1U;

    t109 = (x453%(x454/(x455!=x456)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x457 = INT32_MIN;
	int16_t x458 = 5;
	int64_t x459 = -27968LL;
	int16_t x460 = INT16_MIN;
	static volatile int32_t t110 = 0;

    t110 = (x457%(x458/(x459!=x460)));

    if (t110 != -3) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x461 = 63LLU;
	uint8_t x462 = UINT8_MAX;
	volatile int16_t x463 = INT16_MAX;
	static uint64_t t111 = 4830243741864912LLU;

    t111 = (x461%(x462/(x463!=x464)));

    if (t111 != 63LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x465 = INT64_MAX;
	uint64_t x466 = 1553193448446LLU;
	int32_t x467 = INT32_MIN;
	volatile int32_t x468 = -5;

    t112 = (x465%(x466/(x467!=x468)));

    if (t112 != 1445724785965LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x469 = 221978887123671LL;
	int64_t x471 = 28559333127411595LL;
	int32_t x472 = INT32_MAX;
	int64_t t113 = -1515080LL;

    t113 = (x469%(x470/(x471!=x472)));

    if (t113 != 221978887123671LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x473 = 7U;
	int8_t x474 = -1;
	static int16_t x475 = -7;
	int64_t x476 = -1964LL;
	uint32_t t114 = 169535U;

    t114 = (x473%(x474/(x475!=x476)));

    if (t114 != 7U) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x477 = INT8_MIN;
	uint16_t x479 = 14822U;
	int64_t x480 = INT64_MIN;

    t115 = (x477%(x478/(x479!=x480)));

    if (t115 != -128) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x481 = -1LL;
	int32_t x482 = 111;
	static int32_t x483 = INT32_MIN;
	int8_t x484 = 1;
	volatile int64_t t116 = 18776373080267993LL;

    t116 = (x481%(x482/(x483!=x484)));

    if (t116 != -1LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x485 = -9LL;
	uint64_t x486 = 352LLU;
	int64_t x487 = INT64_MIN;
	uint64_t t117 = 507171750120998LLU;

    t117 = (x485%(x486/(x487!=x488)));

    if (t117 != 183LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x489 = 0;
	int64_t x490 = -1LL;
	static volatile int8_t x491 = INT8_MIN;
	uint64_t x492 = UINT64_MAX;
	volatile int64_t t118 = 4157272LL;

    t118 = (x489%(x490/(x491!=x492)));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x495 = INT64_MIN;
	static int64_t x496 = -13841285359LL;
	static volatile uint64_t t119 = 201LLU;

    t119 = (x493%(x494/(x495!=x496)));

    if (t119 != 39292300LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int16_t x497 = INT16_MIN;
	volatile uint8_t x498 = UINT8_MAX;
	volatile int32_t t120 = -14027639;

    t120 = (x497%(x498/(x499!=x500)));

    if (t120 != -128) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x501 = 4U;
	int32_t x502 = -1;
	volatile int32_t t121 = -186424;

    t121 = (x501%(x502/(x503!=x504)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x505 = UINT16_MAX;
	static volatile int64_t x506 = INT64_MIN;
	static int32_t x507 = INT32_MIN;
	int64_t t122 = -487LL;

    t122 = (x505%(x506/(x507!=x508)));

    if (t122 != 65535LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static int64_t x509 = INT64_MIN;
	static uint32_t x510 = 123485U;
	volatile int16_t x511 = INT16_MAX;
	int64_t x512 = INT64_MIN;
	int64_t t123 = 2122587700405098LL;

    t123 = (x509%(x510/(x511!=x512)));

    if (t123 != -62893LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x513 = UINT16_MAX;
	volatile int64_t x515 = INT64_MAX;
	uint64_t x516 = 2374926639494453336LLU;
	static int32_t t124 = 0;

    t124 = (x513%(x514/(x515!=x516)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x517 = 47U;
	int64_t x518 = INT64_MIN;
	int16_t x519 = -1;
	uint16_t x520 = 7U;
	volatile int64_t t125 = 306025200622593651LL;

    t125 = (x517%(x518/(x519!=x520)));

    if (t125 != 47LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x521 = INT64_MIN;
	int16_t x522 = 430;
	int8_t x523 = INT8_MIN;
	volatile int16_t x524 = -7551;
	int64_t t126 = 3LL;

    t126 = (x521%(x522/(x523!=x524)));

    if (t126 != -128LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x525 = 1;
	static int8_t x527 = INT8_MIN;

    t127 = (x525%(x526/(x527!=x528)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint16_t x533 = 2307U;
	static volatile uint64_t x534 = UINT64_MAX;
	static int8_t x535 = INT8_MIN;
	static int64_t x536 = INT64_MIN;
	volatile uint64_t t128 = 8908LLU;

    t128 = (x533%(x534/(x535!=x536)));

    if (t128 != 2307LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x539 = -1;
	int32_t x540 = 1;
	volatile int32_t t129 = -2;

    t129 = (x537%(x538/(x539!=x540)));

    if (t129 != 6) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint16_t x541 = 847U;
	int16_t x542 = INT16_MIN;
	int64_t x543 = 92676973454200664LL;
	int16_t x544 = INT16_MIN;
	int32_t t130 = 2031;

    t130 = (x541%(x542/(x543!=x544)));

    if (t130 != 847) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x546 = 186682U;
	static volatile uint32_t t131 = 131314U;

    t131 = (x545%(x546/(x547!=x548)));

    if (t131 != 128436U) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x554 = -1;
	int32_t x555 = INT32_MIN;
	volatile int32_t t132 = 34658532;

    t132 = (x553%(x554/(x555!=x556)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x557 = INT32_MAX;
	static uint16_t x558 = 26U;
	static uint64_t x559 = 547439836829LLU;
	uint16_t x560 = 81U;
	int32_t t133 = -1;

    t133 = (x557%(x558/(x559!=x560)));

    if (t133 != 23) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile uint8_t x561 = 3U;
	int8_t x563 = INT8_MAX;
	uint8_t x564 = 24U;
	int64_t t134 = -35385395601142LL;

    t134 = (x561%(x562/(x563!=x564)));

    if (t134 != 3LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x565 = INT32_MIN;
	static int16_t x567 = -1;
	int32_t x568 = INT32_MIN;
	static int32_t t135 = -62;

    t135 = (x565%(x566/(x567!=x568)));

    if (t135 != -8) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x570 = -31;
	volatile int8_t x571 = INT8_MIN;
	volatile uint64_t x572 = 239237194057LLU;

    t136 = (x569%(x570/(x571!=x572)));

    if (t136 != -8LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x576 = -1;
	static int32_t t137 = -86798;

    t137 = (x573%(x574/(x575!=x576)));

    if (t137 != 33) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x577 = INT16_MIN;
	volatile int16_t x578 = -1;

    t138 = (x577%(x578/(x579!=x580)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x585 = 41U;
	static volatile int8_t x586 = -1;
	int64_t x587 = INT64_MIN;
	volatile int32_t t139 = -15596475;

    t139 = (x585%(x586/(x587!=x588)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x589 = INT16_MAX;
	int64_t x591 = 65738963583641164LL;
	uint64_t x592 = UINT64_MAX;
	volatile int32_t t140 = 3521;

    t140 = (x589%(x590/(x591!=x592)));

    if (t140 != 42) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x593 = INT16_MIN;
	int64_t x594 = -233746816833130LL;
	int64_t x595 = -1LL;
	uint32_t x596 = 8841U;
	static volatile int64_t t141 = 978425288766920LL;

    t141 = (x593%(x594/(x595!=x596)));

    if (t141 != -32768LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x597 = -614136LL;
	int16_t x598 = INT16_MIN;
	static int32_t x599 = INT32_MIN;
	static int16_t x600 = INT16_MIN;
	volatile int64_t t142 = 11524313LL;

    t142 = (x597%(x598/(x599!=x600)));

    if (t142 != -24312LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x601 = INT32_MIN;
	int8_t x602 = INT8_MIN;
	static int8_t x603 = INT8_MAX;
	uint16_t x604 = 39U;

    t143 = (x601%(x602/(x603!=x604)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x605 = 3159673U;
	static int8_t x606 = INT8_MAX;
	volatile int32_t x607 = 148537820;
	uint32_t t144 = 7520146U;

    t144 = (x605%(x606/(x607!=x608)));

    if (t144 != 40U) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int64_t x609 = INT64_MAX;
	int8_t x610 = INT8_MIN;
	static volatile int16_t x611 = 0;

    t145 = (x609%(x610/(x611!=x612)));

    if (t145 != 127LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint16_t x613 = UINT16_MAX;
	static uint32_t x614 = 44053745U;
	uint8_t x615 = UINT8_MAX;
	static uint8_t x616 = 3U;

    t146 = (x613%(x614/(x615!=x616)));

    if (t146 != 65535U) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x617 = 126U;
	int16_t x618 = INT16_MIN;
	uint32_t x619 = 1040262U;
	volatile int32_t t147 = -100;

    t147 = (x617%(x618/(x619!=x620)));

    if (t147 != 126) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x621 = -166314919;
	volatile int16_t x624 = INT16_MAX;
	volatile int32_t t148 = -61;

    t148 = (x621%(x622/(x623!=x624)));

    if (t148 != -65) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x626 = 9;
	volatile int8_t x628 = -1;
	volatile int32_t t149 = 37685;

    t149 = (x625%(x626/(x627!=x628)));

    if (t149 != -8) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x634 = UINT64_MAX;
	int64_t x635 = -22017494692727LL;
	static volatile int16_t x636 = INT16_MIN;

    t150 = (x633%(x634/(x635!=x636)));

    if (t150 != 4LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x637 = INT64_MIN;
	volatile int16_t x638 = -1;
	int64_t x640 = INT64_MIN;

    t151 = (x637%(x638/(x639!=x640)));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x642 = INT16_MAX;
	volatile int32_t t152 = -4674355;

    t152 = (x641%(x642/(x643!=x644)));

    if (t152 != -1) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x646 = INT16_MAX;
	static uint16_t x647 = UINT16_MAX;
	int64_t t153 = -388259LL;

    t153 = (x645%(x646/(x647!=x648)));

    if (t153 != -881LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x649 = INT16_MIN;
	int8_t x650 = INT8_MIN;
	int32_t x651 = -2200446;
	static uint16_t x652 = UINT16_MAX;
	volatile int32_t t154 = 210;

    t154 = (x649%(x650/(x651!=x652)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x653 = -1LL;
	int16_t x654 = INT16_MIN;
	uint16_t x656 = 120U;
	int64_t t155 = -118714711LL;

    t155 = (x653%(x654/(x655!=x656)));

    if (t155 != -1LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x657 = INT16_MAX;
	int16_t x658 = INT16_MIN;
	int64_t x659 = 46646459215LL;
	static volatile int32_t t156 = -16;

    t156 = (x657%(x658/(x659!=x660)));

    if (t156 != 32767) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x664 = 32389932LLU;
	volatile int32_t t157 = 1;

    t157 = (x661%(x662/(x663!=x664)));

    if (t157 != 41) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x665 = -1;
	volatile int32_t x667 = INT32_MIN;
	static volatile int64_t t158 = 11LL;

    t158 = (x665%(x666/(x667!=x668)));

    if (t158 != -1LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x669 = 0U;
	volatile int16_t x670 = -411;
	int32_t x671 = INT32_MIN;
	static uint16_t x672 = UINT16_MAX;
	int32_t t159 = 537660792;

    t159 = (x669%(x670/(x671!=x672)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint32_t x673 = UINT32_MAX;
	uint32_t x674 = UINT32_MAX;
	volatile int32_t x675 = INT32_MIN;
	static uint8_t x676 = 26U;
	uint32_t t160 = 12949U;

    t160 = (x673%(x674/(x675!=x676)));

    if (t160 != 0U) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x677 = -1;
	int64_t x678 = INT64_MIN;
	volatile int64_t x679 = 2022577LL;
	volatile int64_t t161 = 703225LL;

    t161 = (x677%(x678/(x679!=x680)));

    if (t161 != -1LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x681 = -1;
	static int32_t x683 = 1762784;
	uint8_t x684 = 30U;

    t162 = (x681%(x682/(x683!=x684)));

    if (t162 != -1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x685 = UINT16_MAX;
	uint64_t x686 = UINT64_MAX;
	int32_t x687 = -1;
	int16_t x688 = 7;
	static uint64_t t163 = 8004LLU;

    t163 = (x685%(x686/(x687!=x688)));

    if (t163 != 65535LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x689 = INT8_MIN;
	int8_t x690 = INT8_MIN;
	int32_t x691 = -9692584;
	volatile int32_t x692 = -140422;
	volatile int32_t t164 = -189920946;

    t164 = (x689%(x690/(x691!=x692)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x693 = 10;
	int16_t x694 = INT16_MIN;
	int8_t x695 = -1;
	int32_t x696 = INT32_MIN;

    t165 = (x693%(x694/(x695!=x696)));

    if (t165 != 10) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x697 = INT16_MIN;
	static uint64_t x698 = 553047681788LLU;
	int64_t x699 = INT64_MIN;
	int8_t x700 = 0;
	volatile uint64_t t166 = 15705LLU;

    t166 = (x697%(x698/(x699!=x700)));

    if (t166 != 137593860944LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x702 = INT8_MIN;
	int32_t x704 = -1;

    t167 = (x701%(x702/(x703!=x704)));

    if (t167 != 127) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x705 = -1;
	volatile uint16_t x706 = 6069U;
	volatile int64_t x707 = -1LL;
	int32_t x708 = INT32_MIN;
	volatile int32_t t168 = -40;

    t168 = (x705%(x706/(x707!=x708)));

    if (t168 != -1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x709 = 10U;
	static int32_t x711 = INT32_MIN;
	volatile uint32_t x712 = UINT32_MAX;
	uint64_t t169 = 19058429003967030LLU;

    t169 = (x709%(x710/(x711!=x712)));

    if (t169 != 10LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x713 = INT8_MIN;
	static volatile int32_t x714 = 7;
	static int32_t x715 = INT32_MIN;
	volatile int32_t t170 = -6987;

    t170 = (x713%(x714/(x715!=x716)));

    if (t170 != -2) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x717 = INT64_MAX;
	volatile int32_t x718 = 1;
	volatile int32_t x719 = -85719372;
	int64_t x720 = 804263734LL;
	int64_t t171 = 247LL;

    t171 = (x717%(x718/(x719!=x720)));

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int32_t x721 = 6000;
	static int64_t x722 = -54642246172824LL;
	static volatile uint8_t x723 = 11U;
	uint16_t x724 = 15386U;
	int64_t t172 = 6417479746937LL;

    t172 = (x721%(x722/(x723!=x724)));

    if (t172 != 6000LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x725 = -1;
	int32_t x728 = -459969;
	volatile int32_t t173 = 127509;

    t173 = (x725%(x726/(x727!=x728)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x730 = 8933;
	static volatile int64_t x731 = INT64_MIN;
	uint32_t x732 = 624603U;
	static int32_t t174 = -349;

    t174 = (x729%(x730/(x731!=x732)));

    if (t174 != 5968) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x734 = INT32_MIN;
	int16_t x735 = INT16_MIN;
	static volatile int64_t x736 = -723695LL;
	volatile int32_t t175 = -2;

    t175 = (x733%(x734/(x735!=x736)));

    if (t175 != 65535) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x737 = INT32_MIN;
	volatile uint32_t x739 = 139U;
	int32_t x740 = -1;
	int32_t t176 = 780334;

    t176 = (x737%(x738/(x739!=x740)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x741 = UINT16_MAX;
	static int32_t x742 = 4457;
	static int64_t x743 = INT64_MIN;
	volatile int64_t x744 = -1LL;

    t177 = (x741%(x742/(x743!=x744)));

    if (t177 != 3137) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x745 = -73208;
	uint64_t x746 = UINT64_MAX;
	static volatile uint64_t t178 = 12589LLU;

    t178 = (x745%(x746/(x747!=x748)));

    if (t178 != 18446744073709478408LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x749 = INT64_MIN;
	static int32_t x750 = -141;
	uint8_t x751 = UINT8_MAX;
	int8_t x752 = INT8_MIN;
	volatile int64_t t179 = 164043482LL;

    t179 = (x749%(x750/(x751!=x752)));

    if (t179 != -83LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x753 = 0LL;
	static int32_t x754 = INT32_MIN;
	int64_t x755 = INT64_MAX;
	volatile int64_t t180 = 2799217070444401374LL;

    t180 = (x753%(x754/(x755!=x756)));

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x761 = -1;
	uint16_t x762 = 43U;
	volatile int32_t x764 = -86;
	static volatile int32_t t181 = 946287201;

    t181 = (x761%(x762/(x763!=x764)));

    if (t181 != -1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x765 = 17U;
	int64_t x766 = INT64_MAX;
	volatile int64_t x767 = 469231886354890914LL;
	static uint32_t x768 = UINT32_MAX;
	volatile int64_t t182 = -46813097140496922LL;

    t182 = (x765%(x766/(x767!=x768)));

    if (t182 != 17LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x769 = INT64_MIN;
	uint64_t x770 = UINT64_MAX;
	int64_t x771 = 645LL;
	uint64_t t183 = 60814097740809586LLU;

    t183 = (x769%(x770/(x771!=x772)));

    if (t183 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x773 = INT64_MIN;
	int8_t x775 = -2;
	uint8_t x776 = 55U;
	volatile int64_t t184 = -1LL;

    t184 = (x773%(x774/(x775!=x776)));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x778 = 4701624822352LL;
	int64_t x779 = INT64_MAX;
	volatile int64_t t185 = -64332560115316456LL;

    t185 = (x777%(x778/(x779!=x780)));

    if (t185 != 1400LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x781 = 11;
	static volatile int16_t x783 = INT16_MIN;
	int32_t t186 = -104952601;

    t186 = (x781%(x782/(x783!=x784)));

    if (t186 != 11) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x785 = UINT32_MAX;
	uint16_t x786 = UINT16_MAX;
	volatile uint8_t x788 = UINT8_MAX;
	static uint32_t t187 = 3202U;

    t187 = (x785%(x786/(x787!=x788)));

    if (t187 != 0U) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint32_t x790 = UINT32_MAX;
	uint16_t x791 = 4910U;
	int64_t x792 = -19LL;
	volatile uint32_t t188 = 6U;

    t188 = (x789%(x790/(x791!=x792)));

    if (t188 != 4294934528U) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x793 = 2737;
	int16_t x794 = INT16_MAX;
	volatile int32_t x795 = 1;
	volatile int8_t x796 = -16;
	volatile int32_t t189 = 65953;

    t189 = (x793%(x794/(x795!=x796)));

    if (t189 != 2737) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x797 = -4691;
	uint8_t x799 = 5U;
	int32_t t190 = 0;

    t190 = (x797%(x798/(x799!=x800)));

    if (t190 != -83) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x801 = UINT8_MAX;
	static int16_t x802 = -3;
	int32_t t191 = 58;

    t191 = (x801%(x802/(x803!=x804)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x805 = 45U;
	static int32_t x806 = INT32_MIN;
	int64_t x807 = 6LL;

    t192 = (x805%(x806/(x807!=x808)));

    if (t192 != 45) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint8_t x810 = UINT8_MAX;
	volatile uint32_t x812 = 19U;
	int32_t t193 = 0;

    t193 = (x809%(x810/(x811!=x812)));

    if (t193 != 127) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x813 = INT16_MIN;
	volatile int64_t x814 = 617957989498LL;
	int64_t x815 = INT64_MIN;
	int8_t x816 = INT8_MIN;
	volatile int64_t t194 = -1LL;

    t194 = (x813%(x814/(x815!=x816)));

    if (t194 != -32768LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static int32_t x817 = INT32_MAX;
	int64_t x818 = -7027754384846855LL;
	volatile uint32_t x819 = 977761U;
	int32_t x820 = -1835366;
	static volatile int64_t t195 = 30627LL;

    t195 = (x817%(x818/(x819!=x820)));

    if (t195 != 2147483647LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x821 = INT16_MAX;
	int32_t x823 = INT32_MIN;
	volatile uint64_t t196 = 131571491LLU;

    t196 = (x821%(x822/(x823!=x824)));

    if (t196 != 32767LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile uint16_t x825 = 1146U;
	uint64_t x828 = 55120913582613LLU;

    t197 = (x825%(x826/(x827!=x828)));

    if (t197 != 1146U) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint8_t x829 = 5U;
	int16_t x830 = -1662;
	uint8_t x831 = 22U;
	volatile int8_t x832 = -1;
	int32_t t198 = 121;

    t198 = (x829%(x830/(x831!=x832)));

    if (t198 != 5) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x833 = INT64_MIN;
	int32_t x834 = -1;
	uint16_t x835 = UINT16_MAX;
	static int32_t x836 = -1;
	volatile int64_t t199 = 1892476458684249208LL;

    t199 = (x833%(x834/(x835!=x836)));

    if (t199 != 0LL) { NG(); } else { ; }
	
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


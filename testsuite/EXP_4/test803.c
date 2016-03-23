
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

static int64_t x3 = -1LL;
static volatile uint64_t t0 = 35LLU;
int8_t x5 = INT8_MAX;
uint64_t x8 = UINT64_MAX;
static volatile uint8_t x10 = 2U;
int16_t x11 = INT16_MAX;
int64_t x14 = INT64_MIN;
static int64_t x18 = 869LL;
int8_t x20 = INT8_MIN;
int8_t x25 = INT8_MIN;
static int32_t x28 = INT32_MIN;
uint16_t x30 = 0U;
volatile int64_t x31 = -1LL;
uint64_t t8 = 154300LLU;
int8_t x42 = INT8_MAX;
int32_t x48 = -1;
static uint16_t x49 = UINT16_MAX;
uint16_t x51 = UINT16_MAX;
int16_t x57 = -1;
static volatile uint32_t t15 = 1U;
volatile uint64_t t16 = 2105377268LLU;
int16_t x72 = 228;
int64_t t18 = 28377811122LL;
uint64_t x91 = 154LLU;
int32_t x94 = 222987;
static int8_t x97 = 1;
uint64_t x98 = 133410536LLU;
static int16_t x100 = INT16_MIN;
volatile int16_t x109 = -1;
int32_t x110 = INT32_MIN;
int8_t x113 = -7;
int64_t x122 = -1LL;
int16_t x130 = -1;
uint32_t x138 = 5U;
uint64_t x139 = 54LLU;
int8_t x147 = -1;
volatile int64_t t33 = -20LL;
int8_t x168 = 7;
int64_t x171 = INT64_MIN;
int64_t t36 = -184LL;
volatile int64_t t38 = -2548016245029655661LL;
static volatile uint8_t x189 = UINT8_MAX;
uint64_t t40 = 806LLU;
int32_t t47 = 2070;
int32_t x244 = INT32_MIN;
static int64_t x250 = INT64_MIN;
uint16_t x262 = 0U;
int16_t x286 = 116;
int64_t x292 = 287181362491358196LL;
static volatile int64_t t62 = -7594010230LL;
int8_t x298 = INT8_MIN;
volatile int32_t t63 = -3955;
uint8_t x301 = UINT8_MAX;
uint8_t x309 = 0U;
volatile int16_t x310 = INT16_MAX;
int8_t x312 = -1;
volatile int32_t t66 = 8385116;
int8_t x313 = INT8_MAX;
int32_t x315 = INT32_MIN;
int32_t x316 = -102;
uint64_t x322 = 1902LLU;
volatile uint64_t t68 = 214844LLU;
uint64_t x330 = 11LLU;
int16_t x343 = -1;
uint16_t x351 = UINT16_MAX;
int16_t x352 = INT16_MAX;
volatile int64_t t75 = 2104462649122LL;
static uint32_t x353 = 1996U;
uint64_t t76 = 2025317053021LLU;
static int8_t x363 = -1;
static uint16_t x365 = UINT16_MAX;
volatile int32_t x369 = INT32_MIN;
uint8_t x383 = 1U;
uint64_t t84 = 513306914LLU;
int64_t x393 = INT64_MIN;
uint64_t x394 = 262440085LLU;
volatile int16_t x395 = INT16_MIN;
uint64_t t85 = 5LLU;
static volatile int8_t x399 = 1;
int16_t x403 = 1;
uint16_t x404 = UINT16_MAX;
uint64_t t87 = 1243773187396LLU;
int32_t x419 = INT32_MAX;
int8_t x420 = -1;
int32_t x426 = -1;
static int32_t t93 = -3035;
int64_t x429 = INT64_MIN;
uint8_t x438 = UINT8_MAX;
int8_t x441 = INT8_MIN;
int64_t x442 = -1LL;
int64_t x454 = -1LL;
int16_t x456 = 258;
volatile int32_t t101 = 21405;
int32_t x469 = INT32_MIN;
int32_t x470 = -1;
uint8_t x472 = 6U;
static int8_t x475 = INT8_MAX;
int16_t x476 = -1;
uint8_t x483 = 55U;
int32_t t106 = 0;
int16_t x486 = INT16_MIN;
int16_t x490 = INT16_MAX;
static int32_t x491 = INT32_MIN;
int64_t x496 = INT64_MAX;
uint64_t t109 = 16653429209496190LLU;
int16_t x497 = INT16_MIN;
uint64_t x502 = 898572556053LLU;
uint32_t x503 = 2739322U;
int16_t x508 = INT16_MAX;
uint64_t t112 = 1746103614LLU;
volatile int32_t x519 = INT32_MIN;
int32_t t115 = -107;
uint8_t x525 = 0U;
volatile int8_t x526 = -5;
int8_t x540 = INT8_MIN;
int64_t x551 = INT64_MAX;
static uint64_t x554 = 6164LLU;
volatile uint64_t t124 = 402205101613LLU;
int32_t x568 = 1;
int32_t x570 = -1;
int64_t x574 = 4008LL;
static uint64_t x581 = UINT64_MAX;
int64_t x583 = -9836700044LL;
int64_t t131 = 13666461LL;
int8_t x594 = INT8_MIN;
int32_t x596 = -1;
int8_t x599 = INT8_MAX;
uint16_t x605 = UINT16_MAX;
int64_t x611 = INT64_MIN;
int64_t t136 = 220LL;
volatile int32_t t137 = -983759;
uint8_t x623 = UINT8_MAX;
static volatile uint64_t t139 = 2145842LLU;
static volatile int32_t x626 = 22;
static int16_t x632 = -12;
uint8_t x633 = UINT8_MAX;
static int64_t x639 = -1LL;
static uint16_t x643 = 267U;
int32_t x647 = 1065354222;
int16_t x653 = -1;
uint32_t x672 = 233U;
uint16_t x674 = 100U;
uint32_t x680 = 136U;
static volatile int64_t t152 = 3646330346LL;
int8_t x686 = INT8_MIN;
static int8_t x688 = INT8_MAX;
volatile int64_t t154 = 4806035620777LL;
int16_t x692 = INT16_MAX;
uint64_t x700 = 31318902722183LLU;
uint64_t x702 = 226615867LLU;
int8_t x707 = INT8_MIN;
volatile int64_t x708 = 63667152116280892LL;
int64_t t159 = -51136300468071LL;
int16_t x718 = 15;
volatile int64_t t162 = 7011458LL;
int64_t x725 = INT64_MIN;
int8_t x735 = -1;
uint16_t x739 = 773U;
int32_t x749 = -1;
uint32_t x760 = 26U;
uint16_t x771 = 3U;
static volatile int64_t x787 = INT64_MIN;
uint16_t x798 = UINT16_MAX;
volatile uint64_t t179 = 3745426LLU;
uint32_t x806 = 22189U;
static int8_t x807 = INT8_MAX;
static volatile int8_t x812 = -1;
volatile int16_t x814 = INT16_MIN;
volatile int64_t x815 = -1LL;
uint64_t x818 = 210611LLU;
volatile uint32_t x819 = 2442U;
volatile int8_t x827 = -3;
uint64_t x828 = 6423699260866LLU;
int16_t x832 = -5;
uint32_t t190 = 471U;
uint8_t x854 = UINT8_MAX;
uint32_t x858 = 700954334U;
int16_t x862 = INT16_MIN;
int32_t x863 = INT32_MIN;
int8_t x866 = INT8_MAX;
volatile int16_t x876 = INT16_MIN;
static int64_t x885 = 3971009979LL;
int16_t x888 = INT16_MIN;
volatile uint64_t t199 = 1LLU;


void f0(void) {
    	uint64_t x1 = 10779045896974291LLU;
	static uint64_t x2 = 153532106229262LLU;
	uint64_t x4 = UINT64_MAX;

    t0 = (x1%(x2-(x3%x4)));

    if (t0 != 31798460925951LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int32_t x6 = INT32_MIN;
	int64_t x7 = 1LL;
	uint64_t t1 = 10407705672617LLU;

    t1 = (x5%(x6-(x7%x8)));

    if (t1 != 127LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = 791480527LL;
	int32_t x12 = 1;
	static int64_t t2 = -46193LL;

    t2 = (x9%(x10-(x11%x12)));

    if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = UINT8_MAX;
	volatile int32_t x15 = INT32_MIN;
	static int8_t x16 = INT8_MIN;
	volatile int64_t t3 = -1498886LL;

    t3 = (x13%(x14-(x15%x16)));

    if (t3 != 255LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = 431253578U;
	uint32_t x19 = UINT32_MAX;
	volatile int64_t t4 = -93779422477671LL;

    t4 = (x17%(x18-(x19%x20)));

    if (t4 != 210LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MAX;
	int64_t x22 = 19596LL;
	int32_t x23 = 559786657;
	int8_t x24 = INT8_MAX;
	static int64_t t5 = 704240576542725LL;

    t5 = (x21%(x22-(x23%x24)));

    if (t5 != 14347LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile uint64_t x26 = UINT64_MAX;
	int64_t x27 = INT64_MIN;
	volatile uint64_t t6 = 317840610140820LLU;

    t6 = (x25%(x26-(x27%x28)));

    if (t6 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int32_t x29 = INT32_MIN;
	static int16_t x32 = INT16_MAX;
	static int64_t t7 = -104487834LL;

    t7 = (x29%(x30-(x31%x32)));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = 2205108618710LLU;
	static volatile int8_t x34 = INT8_MAX;
	uint16_t x35 = 15U;
	uint32_t x36 = 9508197U;

    t8 = (x33%(x34-(x35%x36)));

    if (t8 != 102LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = INT64_MIN;
	volatile int8_t x38 = -6;
	int32_t x39 = 2;
	static volatile int32_t x40 = INT32_MAX;
	int64_t t9 = 1LL;

    t9 = (x37%(x38-(x39%x40)));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x41 = INT32_MIN;
	int32_t x43 = -1;
	int32_t x44 = 1;
	int32_t t10 = -10443217;

    t10 = (x41%(x42-(x43%x44)));

    if (t10 != -8) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x45 = -1;
	volatile int16_t x46 = INT16_MAX;
	int64_t x47 = INT64_MIN;
	volatile int64_t t11 = -11809614211LL;

    t11 = (x45%(x46-(x47%x48)));

    if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x50 = INT16_MAX;
	int8_t x52 = -1;
	int32_t t12 = 1;

    t12 = (x49%(x50-(x51%x52)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = 88701531235263LL;
	static int64_t x54 = 229822069794427LL;
	uint64_t x55 = 19LLU;
	uint64_t x56 = 419119577LLU;
	uint64_t t13 = 2044492LLU;

    t13 = (x53%(x54-(x55%x56)));

    if (t13 != 88701531235263LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x58 = -1;
	uint32_t x59 = 3U;
	uint8_t x60 = UINT8_MAX;
	uint32_t t14 = 6U;

    t14 = (x57%(x58-(x59%x60)));

    if (t14 != 3U) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x61 = -1;
	static int16_t x62 = -1;
	int32_t x63 = 720670;
	uint32_t x64 = 252562712U;

    t15 = (x61%(x62-(x63%x64)));

    if (t15 != 720670U) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint64_t x65 = 8863941807535733743LLU;
	int32_t x66 = -119;
	int64_t x67 = 11600975405565LL;
	static int32_t x68 = INT32_MAX;

    t16 = (x65%(x66-(x67%x68)));

    if (t16 != 8863941807535733743LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = 336717587;
	uint16_t x70 = 20U;
	int8_t x71 = INT8_MIN;
	volatile int32_t t17 = 1;

    t17 = (x69%(x70-(x71%x72)));

    if (t17 != 123) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x85 = -1;
	int64_t x86 = -1LL;
	volatile int32_t x87 = INT32_MIN;
	volatile uint32_t x88 = UINT32_MAX;

    t18 = (x85%(x86-(x87%x88)));

    if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x89 = 31U;
	int16_t x90 = INT16_MIN;
	int16_t x92 = INT16_MIN;
	uint64_t t19 = 7387134497LLU;

    t19 = (x89%(x90-(x91%x92)));

    if (t19 != 31LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x93 = 26U;
	uint32_t x95 = 3U;
	int64_t x96 = INT64_MAX;
	int64_t t20 = -4218978LL;

    t20 = (x93%(x94-(x95%x96)));

    if (t20 != 26LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x99 = -501;
	volatile uint64_t t21 = 1LLU;

    t21 = (x97%(x98-(x99%x100)));

    if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x111 = -1;
	volatile int8_t x112 = -28;
	volatile int32_t t22 = -1332;

    t22 = (x109%(x110-(x111%x112)));

    if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint16_t x114 = UINT16_MAX;
	uint16_t x115 = UINT16_MAX;
	int8_t x116 = INT8_MIN;
	volatile int32_t t23 = -46143405;

    t23 = (x113%(x114-(x115%x116)));

    if (t23 != -7) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x117 = -380;
	volatile uint32_t x118 = 9325U;
	uint64_t x119 = 5578036482164LLU;
	int16_t x120 = -31;
	volatile uint64_t t24 = 7LLU;

    t24 = (x117%(x118-(x119%x120)));

    if (t24 != 5578036472459LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x121 = INT64_MAX;
	int16_t x123 = INT16_MAX;
	static volatile int32_t x124 = -46962142;
	volatile int64_t t25 = 5559173410429189LL;

    t25 = (x121%(x122-(x123%x124)));

    if (t25 != 32767LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int32_t x125 = -1;
	int64_t x126 = INT64_MAX;
	uint64_t x127 = 416499182156LLU;
	int32_t x128 = INT32_MIN;
	volatile uint64_t t26 = 6992458484352166185LLU;

    t26 = (x125%(x126-(x127%x128)));

    if (t26 != 832998364313LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x129 = 27927238881LLU;
	volatile int64_t x131 = INT64_MAX;
	volatile int8_t x132 = INT8_MIN;
	static uint64_t t27 = 53350116059LLU;

    t27 = (x129%(x130-(x131%x132)));

    if (t27 != 27927238881LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x133 = -1;
	volatile int64_t x134 = INT64_MIN;
	int16_t x135 = INT16_MIN;
	volatile int16_t x136 = 2;
	int64_t t28 = 759995LL;

    t28 = (x133%(x134-(x135%x136)));

    if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint16_t x137 = 8U;
	int8_t x140 = INT8_MIN;
	static volatile uint64_t t29 = 257777177LLU;

    t29 = (x137%(x138-(x139%x140)));

    if (t29 != 8LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x141 = INT32_MAX;
	uint32_t x142 = UINT32_MAX;
	static volatile uint64_t x143 = 413706862608815222LLU;
	uint32_t x144 = 430098785U;
	volatile uint64_t t30 = 4868686297529007747LLU;

    t30 = (x141%(x142-(x143%x144)));

    if (t30 != 2147483647LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x145 = 2U;
	int32_t x146 = INT32_MAX;
	volatile uint64_t x148 = UINT64_MAX;
	volatile uint64_t t31 = 147709676139642890LLU;

    t31 = (x145%(x146-(x147%x148)));

    if (t31 != 2LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int64_t x149 = INT64_MIN;
	volatile int16_t x150 = 548;
	volatile int8_t x151 = -1;
	int8_t x152 = 44;
	int64_t t32 = -176083834080881943LL;

    t32 = (x149%(x150-(x151%x152)));

    if (t32 != -8LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x157 = UINT16_MAX;
	uint8_t x158 = UINT8_MAX;
	int64_t x159 = INT64_MAX;
	static int64_t x160 = -1LL;

    t33 = (x157%(x158-(x159%x160)));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x161 = -1;
	int16_t x162 = -3;
	volatile int64_t x163 = -1LL;
	static int8_t x164 = INT8_MAX;
	volatile int64_t t34 = 1159370021001934592LL;

    t34 = (x161%(x162-(x163%x164)));

    if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile uint16_t x165 = UINT16_MAX;
	uint64_t x166 = 32073206606395837LLU;
	volatile uint16_t x167 = UINT16_MAX;
	uint64_t t35 = 1LLU;

    t35 = (x165%(x166-(x167%x168)));

    if (t35 != 65535LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x169 = INT16_MAX;
	int8_t x170 = INT8_MAX;
	int8_t x172 = INT8_MIN;

    t36 = (x169%(x170-(x171%x172)));

    if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x173 = 5U;
	volatile int16_t x174 = -1;
	int16_t x175 = INT16_MIN;
	int32_t x176 = 14;
	volatile int32_t t37 = 12850;

    t37 = (x173%(x174-(x175%x176)));

    if (t37 != 5) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x181 = INT16_MAX;
	uint16_t x182 = UINT16_MAX;
	int64_t x183 = -1LL;
	uint32_t x184 = 3861201U;

    t38 = (x181%(x182-(x183%x184)));

    if (t38 != 32767LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x185 = -1;
	static uint16_t x186 = 5U;
	volatile int16_t x187 = -1;
	int64_t x188 = -1LL;
	int64_t t39 = -2713321907LL;

    t39 = (x185%(x186-(x187%x188)));

    if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint64_t x190 = UINT64_MAX;
	static int64_t x191 = INT64_MIN;
	uint64_t x192 = 1490645LLU;

    t40 = (x189%(x190-(x191%x192)));

    if (t40 != 255LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x193 = 25U;
	volatile int16_t x194 = -153;
	int32_t x195 = INT32_MIN;
	int64_t x196 = INT64_MIN;
	volatile int64_t t41 = -300009284367230LL;

    t41 = (x193%(x194-(x195%x196)));

    if (t41 != 25LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x205 = 2159205U;
	static uint16_t x206 = UINT16_MAX;
	static int32_t x207 = INT32_MIN;
	int8_t x208 = -1;
	static uint32_t t42 = 8U;

    t42 = (x205%(x206-(x207%x208)));

    if (t42 != 62085U) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x213 = INT32_MAX;
	uint32_t x214 = 125U;
	int16_t x215 = INT16_MIN;
	uint64_t x216 = 29093119657LLU;
	volatile uint64_t t43 = 14LLU;

    t43 = (x213%(x214-(x215%x216)));

    if (t43 != 2147483647LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x217 = 248U;
	int64_t x218 = INT64_MAX;
	int16_t x219 = INT16_MIN;
	uint64_t x220 = 146035321LLU;
	uint64_t t44 = 192069674834912180LLU;

    t44 = (x217%(x218-(x219%x220)));

    if (t44 != 248LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x221 = INT8_MAX;
	uint32_t x222 = 3894U;
	int8_t x223 = -59;
	int32_t x224 = INT32_MIN;
	volatile uint32_t t45 = 259078U;

    t45 = (x221%(x222-(x223%x224)));

    if (t45 != 127U) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint64_t x225 = 368LLU;
	volatile int16_t x226 = INT16_MAX;
	int64_t x227 = 1036971747848267LL;
	int32_t x228 = -1;
	volatile uint64_t t46 = 238380127048875710LLU;

    t46 = (x225%(x226-(x227%x228)));

    if (t46 != 368LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x229 = INT8_MIN;
	volatile uint8_t x230 = 3U;
	int8_t x231 = 34;
	int8_t x232 = INT8_MIN;

    t47 = (x229%(x230-(x231%x232)));

    if (t47 != -4) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x233 = INT32_MIN;
	static int8_t x234 = -1;
	static int16_t x235 = INT16_MIN;
	volatile int32_t x236 = -1;
	int32_t t48 = 4735650;

    t48 = (x233%(x234-(x235%x236)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint8_t x237 = UINT8_MAX;
	int8_t x238 = -1;
	static uint16_t x239 = 80U;
	int8_t x240 = -1;
	volatile int32_t t49 = 191314;

    t49 = (x237%(x238-(x239%x240)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x241 = INT8_MIN;
	int16_t x242 = -5840;
	int64_t x243 = -1LL;
	volatile int64_t t50 = -359852386176390LL;

    t50 = (x241%(x242-(x243%x244)));

    if (t50 != -128LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint8_t x245 = 22U;
	int32_t x246 = INT32_MIN;
	uint32_t x247 = 2952U;
	uint32_t x248 = UINT32_MAX;
	static volatile uint32_t t51 = 457U;

    t51 = (x245%(x246-(x247%x248)));

    if (t51 != 22U) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x249 = INT64_MIN;
	int64_t x251 = -70445557654LL;
	int32_t x252 = 707419014;
	int64_t t52 = -17140100LL;

    t52 = (x249%(x250-(x251%x252)));

    if (t52 != -411075268LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x253 = 39513868LLU;
	int64_t x254 = -1LL;
	static int8_t x255 = INT8_MIN;
	volatile int32_t x256 = 135136;
	uint64_t t53 = 4738960228639600LLU;

    t53 = (x253%(x254-(x255%x256)));

    if (t53 != 104LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x257 = INT32_MIN;
	uint64_t x258 = 23215576891094LLU;
	volatile uint8_t x259 = 111U;
	volatile int8_t x260 = -1;
	static volatile uint64_t t54 = 9755LLU;

    t54 = (x257%(x258-(x259%x260)));

    if (t54 != 18123129033072LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x261 = 5;
	uint64_t x263 = 194338655345026604LLU;
	static volatile int8_t x264 = -4;
	uint64_t t55 = 90LLU;

    t55 = (x261%(x262-(x263%x264)));

    if (t55 != 5LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint8_t x265 = 5U;
	uint16_t x266 = 17276U;
	uint8_t x267 = UINT8_MAX;
	int64_t x268 = INT64_MIN;
	volatile int64_t t56 = 9708LL;

    t56 = (x265%(x266-(x267%x268)));

    if (t56 != 5LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x269 = -4LL;
	uint16_t x270 = 27U;
	static int32_t x271 = 10941;
	uint16_t x272 = 1U;
	int64_t t57 = 878383469LL;

    t57 = (x269%(x270-(x271%x272)));

    if (t57 != -4LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x273 = 238529562525LL;
	uint64_t x274 = UINT64_MAX;
	int16_t x275 = INT16_MIN;
	int8_t x276 = -1;
	uint64_t t58 = 2202793381041636LLU;

    t58 = (x273%(x274-(x275%x276)));

    if (t58 != 238529562525LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x277 = INT32_MIN;
	int32_t x278 = -61431;
	int64_t x279 = INT64_MIN;
	uint8_t x280 = 101U;
	int64_t t59 = 979048691152626320LL;

    t59 = (x277%(x278-(x279%x280)));

    if (t59 != -57920LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x281 = 1283740LLU;
	volatile uint64_t x282 = UINT64_MAX;
	int64_t x283 = INT64_MIN;
	int16_t x284 = 45;
	volatile uint64_t t60 = 3130148818018341712LLU;

    t60 = (x281%(x282-(x283%x284)));

    if (t60 != 3LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x285 = 5;
	static volatile int16_t x287 = 7413;
	int32_t x288 = -1;
	volatile int32_t t61 = 13534;

    t61 = (x285%(x286-(x287%x288)));

    if (t61 != 5) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x289 = 0;
	int16_t x290 = 70;
	int16_t x291 = -1235;

    t62 = (x289%(x290-(x291%x292)));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x297 = INT16_MIN;
	uint16_t x299 = 100U;
	static volatile int32_t x300 = -4745;

    t63 = (x297%(x298-(x299%x300)));

    if (t63 != -164) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x302 = 17;
	int8_t x303 = -1;
	int32_t x304 = 417;
	volatile int32_t t64 = -47;

    t64 = (x301%(x302-(x303%x304)));

    if (t64 != 3) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x305 = -1;
	volatile uint32_t x306 = 525879550U;
	static uint16_t x307 = 2902U;
	static volatile int32_t x308 = INT32_MAX;
	volatile uint32_t t65 = 1405240454U;

    t65 = (x305%(x306-(x307%x308)));

    if (t65 != 87954111U) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x311 = 17;

    t66 = (x309%(x310-(x311%x312)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x314 = 0;
	static volatile int32_t t67 = -2260680;

    t67 = (x313%(x314-(x315%x316)));

    if (t67 != 23) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x321 = INT16_MIN;
	static int32_t x323 = INT32_MAX;
	int16_t x324 = -1;

    t68 = (x321%(x322-(x323%x324)));

    if (t68 != 134LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x325 = INT8_MIN;
	int64_t x326 = INT64_MAX;
	volatile int16_t x327 = 163;
	static int32_t x328 = INT32_MAX;
	volatile int64_t t69 = 5LL;

    t69 = (x325%(x326-(x327%x328)));

    if (t69 != -128LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint16_t x329 = 4979U;
	int32_t x331 = -1;
	int32_t x332 = -1;
	volatile uint64_t t70 = 263955735356740147LLU;

    t70 = (x329%(x330-(x331%x332)));

    if (t70 != 7LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x333 = 853;
	int32_t x334 = INT32_MAX;
	volatile uint32_t x335 = 1266193691U;
	static int16_t x336 = 916;
	uint32_t t71 = 2U;

    t71 = (x333%(x334-(x335%x336)));

    if (t71 != 853U) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x337 = INT16_MAX;
	int8_t x338 = -6;
	uint32_t x339 = UINT32_MAX;
	int32_t x340 = -1;
	volatile uint32_t t72 = 692U;

    t72 = (x337%(x338-(x339%x340)));

    if (t72 != 32767U) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint16_t x341 = 5810U;
	volatile int64_t x342 = INT64_MIN;
	volatile int32_t x344 = -25913689;
	static volatile int64_t t73 = -2697491817LL;

    t73 = (x341%(x342-(x343%x344)));

    if (t73 != 5810LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x345 = INT32_MIN;
	uint64_t x346 = 254813329159371LLU;
	int8_t x347 = -3;
	static int8_t x348 = INT8_MIN;
	uint64_t t74 = 86LLU;

    t74 = (x345%(x346-(x347%x348)));

    if (t74 != 42733727505986LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x349 = INT16_MAX;
	volatile int64_t x350 = 1022131LL;

    t75 = (x349%(x350-(x351%x352)));

    if (t75 != 32767LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x354 = 108LLU;
	int16_t x355 = INT16_MAX;
	uint16_t x356 = 1U;

    t76 = (x353%(x354-(x355%x356)));

    if (t76 != 52LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint32_t x361 = 10U;
	int64_t x362 = 1218235458LL;
	uint64_t x364 = UINT64_MAX;
	uint64_t t77 = 255196961683LLU;

    t77 = (x361%(x362-(x363%x364)));

    if (t77 != 10LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x366 = INT16_MAX;
	int64_t x367 = INT64_MIN;
	int32_t x368 = -1;
	volatile int64_t t78 = -29609LL;

    t78 = (x365%(x366-(x367%x368)));

    if (t78 != 1LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x370 = 11;
	static uint16_t x371 = UINT16_MAX;
	int16_t x372 = INT16_MAX;
	volatile int32_t t79 = 2644;

    t79 = (x369%(x370-(x371%x372)));

    if (t79 != -8) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x373 = INT8_MIN;
	volatile int64_t x374 = INT64_MIN;
	int16_t x375 = INT16_MAX;
	volatile uint64_t x376 = UINT64_MAX;
	static volatile uint64_t t80 = 11947181LLU;

    t80 = (x373%(x374-(x375%x376)));

    if (t80 != 65406LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x377 = -1;
	volatile int64_t x378 = 4LL;
	int16_t x379 = -1;
	static uint32_t x380 = 3097687U;
	static int64_t t81 = -341LL;

    t81 = (x377%(x378-(x379%x380)));

    if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x381 = UINT8_MAX;
	uint8_t x382 = UINT8_MAX;
	uint16_t x384 = UINT16_MAX;
	static int32_t t82 = 63426372;

    t82 = (x381%(x382-(x383%x384)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x385 = INT32_MIN;
	int64_t x386 = INT64_MIN;
	int8_t x387 = -5;
	volatile uint8_t x388 = UINT8_MAX;
	int64_t t83 = -62288878920715674LL;

    t83 = (x385%(x386-(x387%x388)));

    if (t83 != -2147483648LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x389 = UINT16_MAX;
	uint64_t x390 = 6259976926885441LLU;
	uint64_t x391 = 2899LLU;
	static uint64_t x392 = 3564510430LLU;

    t84 = (x389%(x390-(x391%x392)));

    if (t84 != 65535LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x396 = 1U;

    t85 = (x393%(x394-(x395%x396)));

    if (t85 != 93745113LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x397 = UINT8_MAX;
	int16_t x398 = INT16_MIN;
	int8_t x400 = -1;
	static int32_t t86 = -2;

    t86 = (x397%(x398-(x399%x400)));

    if (t86 != 255) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile uint16_t x401 = 12776U;
	uint64_t x402 = 730192898LLU;

    t87 = (x401%(x402-(x403%x404)));

    if (t87 != 12776LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x405 = 0;
	int16_t x406 = INT16_MIN;
	int32_t x407 = INT32_MIN;
	static int64_t x408 = 547664394417747LL;
	int64_t t88 = 208818404900467LL;

    t88 = (x405%(x406-(x407%x408)));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x409 = INT32_MAX;
	int8_t x410 = INT8_MIN;
	int16_t x411 = -1803;
	int8_t x412 = -1;
	static int32_t t89 = 263030;

    t89 = (x409%(x410-(x411%x412)));

    if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint32_t x413 = 714363U;
	static uint64_t x414 = 4523LLU;
	int64_t x415 = 17LL;
	static uint32_t x416 = UINT32_MAX;
	uint64_t t90 = 74837591LLU;

    t90 = (x413%(x414-(x415%x416)));

    if (t90 != 2415LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x417 = 796LL;
	int32_t x418 = 149;
	volatile int64_t t91 = 331153LL;

    t91 = (x417%(x418-(x419%x420)));

    if (t91 != 51LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x421 = 9647548278078LLU;
	uint32_t x422 = 441836U;
	uint16_t x423 = 607U;
	static int32_t x424 = -1;
	uint64_t t92 = 405179780085952442LLU;

    t92 = (x421%(x422-(x423%x424)));

    if (t92 != 12054LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x425 = 0;
	uint8_t x427 = 0U;
	volatile int8_t x428 = INT8_MAX;

    t93 = (x425%(x426-(x427%x428)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint8_t x430 = 0U;
	int8_t x431 = INT8_MAX;
	static int64_t x432 = 2218147750193617LL;
	static int64_t t94 = 70833835786252418LL;

    t94 = (x429%(x430-(x431%x432)));

    if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x433 = INT64_MIN;
	int32_t x434 = -266348;
	volatile uint16_t x435 = 653U;
	static int8_t x436 = INT8_MIN;
	int64_t t95 = 6428LL;

    t95 = (x433%(x434-(x435%x436)));

    if (t95 != -16244LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x437 = INT32_MIN;
	volatile int16_t x439 = -1;
	uint8_t x440 = UINT8_MAX;
	volatile int32_t t96 = 979;

    t96 = (x437%(x438-(x439%x440)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x443 = INT16_MIN;
	static int64_t x444 = -2283625078LL;
	static int64_t t97 = -1093LL;

    t97 = (x441%(x442-(x443%x444)));

    if (t97 != -128LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x449 = 58U;
	static int16_t x450 = INT16_MIN;
	volatile int8_t x451 = -1;
	int32_t x452 = 231130;
	int32_t t98 = 265715394;

    t98 = (x449%(x450-(x451%x452)));

    if (t98 != 58) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile uint32_t x453 = 4689189U;
	int32_t x455 = INT32_MAX;
	int64_t t99 = -3296771771008002994LL;

    t99 = (x453%(x454-(x455%x456)));

    if (t99 != 5LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x457 = INT8_MIN;
	volatile int8_t x458 = -1;
	int32_t x459 = INT32_MIN;
	volatile int32_t x460 = INT32_MIN;
	volatile int32_t t100 = -51192;

    t100 = (x457%(x458-(x459%x460)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x461 = INT32_MIN;
	int8_t x462 = INT8_MIN;
	int16_t x463 = -401;
	int16_t x464 = 596;

    t101 = (x461%(x462-(x463%x464)));

    if (t101 != -128) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x465 = INT16_MAX;
	volatile uint16_t x466 = 800U;
	int16_t x467 = -1510;
	int64_t x468 = INT64_MIN;
	volatile int64_t t102 = 249649438735402966LL;

    t102 = (x465%(x466-(x467%x468)));

    if (t102 != 427LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x471 = INT64_MAX;
	volatile int64_t t103 = -2LL;

    t103 = (x469%(x470-(x471%x472)));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x473 = INT8_MIN;
	int8_t x474 = -1;
	volatile int32_t t104 = 7402181;

    t104 = (x473%(x474-(x475%x476)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x477 = 4;
	int16_t x478 = INT16_MIN;
	volatile uint64_t x479 = 390068830929509LLU;
	uint16_t x480 = 32U;
	volatile uint64_t t105 = 219645679034LLU;

    t105 = (x477%(x478-(x479%x480)));

    if (t105 != 4LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x481 = 380U;
	int16_t x482 = 1;
	int32_t x484 = INT32_MIN;

    t106 = (x481%(x482-(x483%x484)));

    if (t106 != 2) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint16_t x485 = UINT16_MAX;
	static int8_t x487 = INT8_MAX;
	volatile int16_t x488 = -2028;
	static int32_t t107 = -332876;

    t107 = (x485%(x486-(x487%x488)));

    if (t107 != 32640) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x489 = 9700274;
	volatile int64_t x492 = INT64_MIN;
	volatile int64_t t108 = -10LL;

    t108 = (x489%(x490-(x491%x492)));

    if (t108 != 9700274LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint32_t x493 = UINT32_MAX;
	uint64_t x494 = 6400470120LLU;
	volatile int8_t x495 = INT8_MAX;

    t109 = (x493%(x494-(x495%x496)));

    if (t109 != 4294967295LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x498 = -212423;
	int8_t x499 = -6;
	uint16_t x500 = UINT16_MAX;
	static int32_t t110 = 65196;

    t110 = (x497%(x498-(x499%x500)));

    if (t110 != -32768) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint64_t x501 = UINT64_MAX;
	uint32_t x504 = UINT32_MAX;
	volatile uint64_t t111 = 730725619610LLU;

    t111 = (x501%(x502-(x503%x504)));

    if (t111 != 711759585691LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x505 = INT8_MIN;
	int8_t x506 = 1;
	uint64_t x507 = UINT64_MAX;

    t112 = (x505%(x506-(x507%x508)));

    if (t112 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x509 = INT16_MIN;
	uint32_t x510 = 1740629366U;
	int64_t x511 = INT64_MAX;
	volatile int16_t x512 = 3;
	volatile int64_t t113 = 8375308LL;

    t113 = (x509%(x510-(x511%x512)));

    if (t113 != -32768LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint16_t x517 = UINT16_MAX;
	int16_t x518 = INT16_MAX;
	int16_t x520 = -1;
	int32_t t114 = 163;

    t114 = (x517%(x518-(x519%x520)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x521 = -36;
	static uint8_t x522 = 1U;
	static uint8_t x523 = 52U;
	int8_t x524 = -1;

    t115 = (x521%(x522-(x523%x524)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x527 = -9847;
	int8_t x528 = INT8_MAX;
	int32_t t116 = -65155;

    t116 = (x525%(x526-(x527%x528)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x533 = -38;
	volatile uint32_t x534 = 2U;
	int64_t x535 = INT64_MAX;
	static int8_t x536 = -18;
	volatile int64_t t117 = -4231414824237LL;

    t117 = (x533%(x534-(x535%x536)));

    if (t117 != -3LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x537 = 8379843U;
	uint64_t x538 = 12881825356727LLU;
	int16_t x539 = -5834;
	volatile uint64_t t118 = 138914694LLU;

    t118 = (x537%(x538-(x539%x540)));

    if (t118 != 8379843LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x541 = 16669717198734047LLU;
	uint32_t x542 = 484U;
	uint32_t x543 = UINT32_MAX;
	uint8_t x544 = 7U;
	uint64_t t119 = 63722074502LLU;

    t119 = (x541%(x542-(x543%x544)));

    if (t119 != 383LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x545 = -5183920LL;
	volatile int32_t x546 = 74;
	static volatile int32_t x547 = -1;
	static int8_t x548 = 13;
	volatile int64_t t120 = -288894537819LL;

    t120 = (x545%(x546-(x547%x548)));

    if (t120 != -70LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x549 = UINT16_MAX;
	uint32_t x550 = 1085162932U;
	int8_t x552 = INT8_MIN;
	int64_t t121 = 45678409737380978LL;

    t121 = (x549%(x550-(x551%x552)));

    if (t121 != 65535LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x553 = 350U;
	int16_t x555 = -1719;
	static int8_t x556 = INT8_MIN;
	uint64_t t122 = 32782LLU;

    t122 = (x553%(x554-(x555%x556)));

    if (t122 != 350LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x557 = INT64_MAX;
	uint32_t x558 = 107U;
	uint16_t x559 = 6U;
	static int8_t x560 = 4;
	static int64_t t123 = -25829LL;

    t123 = (x557%(x558-(x559%x560)));

    if (t123 != 7LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int32_t x561 = INT32_MIN;
	int8_t x562 = 13;
	uint64_t x563 = 12839991LLU;
	int32_t x564 = INT32_MAX;

    t124 = (x561%(x562-(x563%x564)));

    if (t124 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x565 = -1LL;
	uint8_t x566 = 57U;
	int64_t x567 = -388LL;
	static volatile int64_t t125 = 214421LL;

    t125 = (x565%(x566-(x567%x568)));

    if (t125 != -1LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x569 = INT8_MIN;
	static volatile int8_t x571 = INT8_MIN;
	uint8_t x572 = 96U;
	int32_t t126 = -128784715;

    t126 = (x569%(x570-(x571%x572)));

    if (t126 != -4) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint8_t x573 = 21U;
	static int8_t x575 = INT8_MAX;
	uint16_t x576 = 19U;
	int64_t t127 = 58858215180501249LL;

    t127 = (x573%(x574-(x575%x576)));

    if (t127 != 21LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x577 = -1;
	int32_t x578 = INT32_MAX;
	int64_t x579 = INT64_MIN;
	uint16_t x580 = UINT16_MAX;
	volatile int64_t t128 = -17616169462LL;

    t128 = (x577%(x578-(x579%x580)));

    if (t128 != -1LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x582 = 5;
	int16_t x584 = INT16_MAX;
	static uint64_t t129 = 578314489992LLU;

    t129 = (x581%(x582-(x583%x584)));

    if (t129 != 1819LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x585 = INT8_MAX;
	int32_t x586 = -161;
	static int16_t x587 = INT16_MIN;
	volatile int32_t x588 = INT32_MIN;
	volatile int32_t t130 = 9458733;

    t130 = (x585%(x586-(x587%x588)));

    if (t130 != 127) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x589 = INT64_MIN;
	uint32_t x590 = UINT32_MAX;
	int8_t x591 = -7;
	int64_t x592 = INT64_MIN;

    t131 = (x589%(x590-(x591%x592)));

    if (t131 != -18LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x593 = 1;
	uint8_t x595 = UINT8_MAX;
	volatile int32_t t132 = -241688;

    t132 = (x593%(x594-(x595%x596)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint32_t x597 = 1202216U;
	int32_t x598 = -39189;
	static int32_t x600 = -1;
	volatile uint32_t t133 = 265U;

    t133 = (x597%(x598-(x599%x600)));

    if (t133 != 1202216U) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x601 = 0;
	static int64_t x602 = INT64_MAX;
	static int16_t x603 = INT16_MIN;
	int16_t x604 = INT16_MIN;
	volatile int64_t t134 = -770200021223175921LL;

    t134 = (x601%(x602-(x603%x604)));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint8_t x606 = UINT8_MAX;
	volatile int64_t x607 = -1LL;
	static uint8_t x608 = UINT8_MAX;
	volatile int64_t t135 = -25LL;

    t135 = (x605%(x606-(x607%x608)));

    if (t135 != 255LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x609 = INT32_MIN;
	static int16_t x610 = INT16_MIN;
	static int16_t x612 = -1;

    t136 = (x609%(x610-(x611%x612)));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x613 = -1;
	int8_t x614 = 3;
	int8_t x615 = INT8_MIN;
	int8_t x616 = -1;

    t137 = (x613%(x614-(x615%x616)));

    if (t137 != -1) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x617 = INT8_MIN;
	static int32_t x618 = INT32_MIN;
	volatile int16_t x619 = INT16_MIN;
	uint8_t x620 = 98U;
	volatile int32_t t138 = -24871080;

    t138 = (x617%(x618-(x619%x620)));

    if (t138 != -128) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint64_t x621 = 2225439715LLU;
	uint32_t x622 = UINT32_MAX;
	int64_t x624 = INT64_MAX;

    t139 = (x621%(x622-(x623%x624)));

    if (t139 != 2225439715LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x625 = INT64_MIN;
	uint64_t x627 = UINT64_MAX;
	volatile int16_t x628 = -1;
	uint64_t t140 = 111571544669869770LLU;

    t140 = (x625%(x626-(x627%x628)));

    if (t140 != 8LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x629 = 2238U;
	uint32_t x630 = 974109000U;
	int16_t x631 = -1;
	uint32_t t141 = 70742497U;

    t141 = (x629%(x630-(x631%x632)));

    if (t141 != 2238U) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x634 = 1U;
	int32_t x635 = INT32_MIN;
	uint16_t x636 = 31U;
	volatile int32_t t142 = 5;

    t142 = (x633%(x634-(x635%x636)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x637 = 27LLU;
	static uint32_t x638 = 1153245U;
	static int16_t x640 = INT16_MIN;
	uint64_t t143 = 5404689LLU;

    t143 = (x637%(x638-(x639%x640)));

    if (t143 != 27LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int64_t x641 = INT64_MIN;
	int32_t x642 = 828538;
	volatile int16_t x644 = INT16_MIN;
	int64_t t144 = 3163367501108LL;

    t144 = (x641%(x642-(x643%x644)));

    if (t144 != -244652LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint8_t x645 = UINT8_MAX;
	volatile int16_t x646 = -1;
	static volatile uint16_t x648 = 7U;
	static int32_t t145 = -10;

    t145 = (x645%(x646-(x647%x648)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x649 = INT8_MIN;
	int32_t x650 = -1;
	int64_t x651 = INT64_MAX;
	uint32_t x652 = UINT32_MAX;
	int64_t t146 = 110306891273841207LL;

    t146 = (x649%(x650-(x651%x652)));

    if (t146 != -128LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x654 = INT8_MIN;
	volatile int32_t x655 = -41338244;
	static int16_t x656 = INT16_MAX;
	volatile int32_t t147 = -2348313;

    t147 = (x653%(x654-(x655%x656)));

    if (t147 != -1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x661 = 1U;
	static int16_t x662 = INT16_MIN;
	int64_t x663 = -1LL;
	int8_t x664 = INT8_MAX;
	int64_t t148 = -5737183691911534LL;

    t148 = (x661%(x662-(x663%x664)));

    if (t148 != 1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint16_t x665 = UINT16_MAX;
	int8_t x666 = 1;
	int16_t x667 = -1;
	uint8_t x668 = 2U;
	int32_t t149 = -21491891;

    t149 = (x665%(x666-(x667%x668)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x669 = INT16_MIN;
	uint64_t x670 = 3986310LLU;
	int32_t x671 = INT32_MAX;
	static uint64_t t150 = 5763LLU;

    t150 = (x669%(x670-(x671%x672)));

    if (t150 != 3675329LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x673 = -13834;
	int8_t x675 = -7;
	int32_t x676 = -9;
	static volatile int32_t t151 = 6063;

    t151 = (x673%(x674-(x675%x676)));

    if (t151 != -31) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x677 = UINT32_MAX;
	int64_t x678 = -1LL;
	int8_t x679 = INT8_MAX;

    t152 = (x677%(x678-(x679%x680)));

    if (t152 != 127LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x681 = 4432U;
	volatile int32_t x682 = INT32_MIN;
	int64_t x683 = -1LL;
	uint32_t x684 = UINT32_MAX;
	volatile int64_t t153 = 10530794863LL;

    t153 = (x681%(x682-(x683%x684)));

    if (t153 != 4432LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x685 = INT16_MIN;
	int64_t x687 = INT64_MIN;

    t154 = (x685%(x686-(x687%x688)));

    if (t154 != -2LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x689 = INT64_MIN;
	int64_t x690 = 148242875047LL;
	int32_t x691 = INT32_MIN;
	int64_t t155 = 2682656LL;

    t155 = (x689%(x690-(x691%x692)));

    if (t155 != -98399344886LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x693 = 86596655U;
	volatile int8_t x694 = 0;
	static int64_t x695 = -3124504547671062LL;
	uint32_t x696 = UINT32_MAX;
	static int64_t t156 = -9473777148LL;

    t156 = (x693%(x694-(x695%x696)));

    if (t156 != 86596655LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x697 = INT64_MIN;
	uint32_t x698 = 4087442U;
	static volatile uint8_t x699 = UINT8_MAX;
	volatile uint64_t t157 = 1LLU;

    t157 = (x697%(x698-(x699%x700)));

    if (t157 != 2237347LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x701 = INT32_MIN;
	uint64_t x703 = 4094131LLU;
	int64_t x704 = -5675065LL;
	volatile uint64_t t158 = 9LLU;

    t158 = (x701%(x702-(x703%x704)));

    if (t158 != 184780712LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x705 = 1U;
	static uint32_t x706 = UINT32_MAX;

    t159 = (x705%(x706-(x707%x708)));

    if (t159 != 1LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x709 = INT64_MIN;
	volatile uint16_t x710 = 29975U;
	int16_t x711 = INT16_MAX;
	int32_t x712 = INT32_MIN;
	volatile int64_t t160 = 0LL;

    t160 = (x709%(x710-(x711%x712)));

    if (t160 != -1680LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint64_t x717 = UINT64_MAX;
	static int32_t x719 = -1;
	static int32_t x720 = 571013;
	uint64_t t161 = 8530743665LLU;

    t161 = (x717%(x718-(x719%x720)));

    if (t161 != 15LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x721 = 2556468LL;
	uint8_t x722 = 21U;
	uint16_t x723 = 6U;
	int32_t x724 = INT32_MIN;

    t162 = (x721%(x722-(x723%x724)));

    if (t162 != 3LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x726 = INT16_MIN;
	volatile int64_t x727 = 16529866LL;
	uint16_t x728 = 2381U;
	volatile int64_t t163 = 1248LL;

    t163 = (x725%(x726-(x727%x728)));

    if (t163 != -8792LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x733 = -1;
	volatile int16_t x734 = INT16_MIN;
	uint16_t x736 = 8U;
	int32_t t164 = -3;

    t164 = (x733%(x734-(x735%x736)));

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x737 = -1LL;
	int64_t x738 = 9808703574LL;
	int32_t x740 = -369431083;
	volatile int64_t t165 = 17LL;

    t165 = (x737%(x738-(x739%x740)));

    if (t165 != -1LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint32_t x741 = 53U;
	volatile int16_t x742 = -1;
	uint16_t x743 = 30611U;
	volatile int8_t x744 = INT8_MIN;
	uint32_t t166 = 0U;

    t166 = (x741%(x742-(x743%x744)));

    if (t166 != 53U) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x745 = INT32_MAX;
	int16_t x746 = INT16_MIN;
	uint64_t x747 = UINT64_MAX;
	uint16_t x748 = 6U;
	uint64_t t167 = 52746249550985LLU;

    t167 = (x745%(x746-(x747%x748)));

    if (t167 != 2147483647LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x750 = INT64_MAX;
	int64_t x751 = 6897056545LL;
	static int64_t x752 = -1LL;
	volatile int64_t t168 = -17628472125LL;

    t168 = (x749%(x750-(x751%x752)));

    if (t168 != -1LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x753 = INT64_MAX;
	int16_t x754 = INT16_MIN;
	uint16_t x755 = 0U;
	static int16_t x756 = INT16_MIN;
	int64_t t169 = 7397924465LL;

    t169 = (x753%(x754-(x755%x756)));

    if (t169 != 32767LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x757 = -1;
	volatile int16_t x758 = INT16_MIN;
	int16_t x759 = -99;
	uint32_t t170 = 6601U;

    t170 = (x757%(x758-(x759%x760)));

    if (t170 != 32768U) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint8_t x761 = 44U;
	int8_t x762 = INT8_MIN;
	uint16_t x763 = UINT16_MAX;
	int16_t x764 = INT16_MIN;
	volatile int32_t t171 = 83;

    t171 = (x761%(x762-(x763%x764)));

    if (t171 != 44) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint32_t x765 = 613U;
	int64_t x766 = 25738635260833LL;
	uint32_t x767 = 113743U;
	int64_t x768 = -1LL;
	static int64_t t172 = -403559853755625LL;

    t172 = (x765%(x766-(x767%x768)));

    if (t172 != 613LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x769 = -56;
	int8_t x770 = INT8_MAX;
	volatile int64_t x772 = -1LL;
	volatile int64_t t173 = -13LL;

    t173 = (x769%(x770-(x771%x772)));

    if (t173 != -56LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x777 = -1LL;
	uint16_t x778 = 181U;
	static uint8_t x779 = 24U;
	volatile uint64_t x780 = 63998721621482LLU;
	volatile uint64_t t174 = 7418392370721757LLU;

    t174 = (x777%(x778-(x779%x780)));

    if (t174 != 13LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x785 = INT32_MIN;
	volatile int16_t x786 = -7226;
	int64_t x788 = INT64_MIN;
	volatile int64_t t175 = -3249176853931379LL;

    t175 = (x785%(x786-(x787%x788)));

    if (t175 != -3160LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x789 = INT64_MIN;
	int8_t x790 = INT8_MIN;
	volatile uint16_t x791 = 14338U;
	volatile int8_t x792 = -22;
	int64_t t176 = 1163298LL;

    t176 = (x789%(x790-(x791%x792)));

    if (t176 != -80LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x793 = 58;
	int16_t x794 = INT16_MIN;
	int8_t x795 = 4;
	int16_t x796 = -32;
	static volatile int32_t t177 = -1;

    t177 = (x793%(x794-(x795%x796)));

    if (t177 != 58) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint32_t x797 = 433U;
	static int8_t x799 = -1;
	static uint32_t x800 = 2148417U;
	uint32_t t178 = 1769U;

    t178 = (x797%(x798-(x799%x800)));

    if (t178 != 433U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x801 = 41421U;
	uint64_t x802 = UINT64_MAX;
	int8_t x803 = INT8_MIN;
	int32_t x804 = -57760176;

    t179 = (x801%(x802-(x803%x804)));

    if (t179 != 19LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint16_t x805 = UINT16_MAX;
	uint8_t x808 = UINT8_MAX;
	volatile uint32_t t180 = 850U;

    t180 = (x805%(x806-(x807%x808)));

    if (t180 != 21411U) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x809 = 393;
	int16_t x810 = INT16_MAX;
	volatile int16_t x811 = -650;
	int32_t t181 = 0;

    t181 = (x809%(x810-(x811%x812)));

    if (t181 != 393) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x813 = INT64_MAX;
	int32_t x816 = 13795;
	volatile int64_t t182 = -24266LL;

    t182 = (x813%(x814-(x815%x816)));

    if (t182 != 7LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x817 = -1410896;
	int32_t x820 = INT32_MIN;
	uint64_t t183 = 364791018155801896LLU;

    t183 = (x817%(x818-(x819%x820)));

    if (t183 != 181711LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x821 = INT16_MAX;
	int64_t x822 = INT64_MAX;
	uint16_t x823 = UINT16_MAX;
	int8_t x824 = -16;
	int64_t t184 = -3130792791LL;

    t184 = (x821%(x822-(x823%x824)));

    if (t184 != 32767LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x825 = INT8_MIN;
	int8_t x826 = INT8_MIN;
	static uint64_t t185 = 8LLU;

    t185 = (x825%(x826-(x827%x828)));

    if (t185 != 6040957746259LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int64_t x829 = -1LL;
	static uint16_t x830 = UINT16_MAX;
	int8_t x831 = 1;
	volatile int64_t t186 = 12366LL;

    t186 = (x829%(x830-(x831%x832)));

    if (t186 != -1LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x833 = INT32_MAX;
	int16_t x834 = INT16_MAX;
	int16_t x835 = INT16_MIN;
	int8_t x836 = INT8_MIN;
	int32_t t187 = -91409;

    t187 = (x833%(x834-(x835%x836)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x837 = INT32_MIN;
	int16_t x838 = INT16_MIN;
	int32_t x839 = INT32_MIN;
	uint16_t x840 = 10465U;
	volatile int32_t t188 = 624166;

    t188 = (x837%(x838-(x839%x840)));

    if (t188 != -5468) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x841 = 27480LLU;
	int32_t x842 = -1;
	volatile int32_t x843 = INT32_MIN;
	int16_t x844 = -1;
	uint64_t t189 = 4327LLU;

    t189 = (x841%(x842-(x843%x844)));

    if (t189 != 27480LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x845 = UINT16_MAX;
	int32_t x846 = INT32_MIN;
	volatile uint32_t x847 = 0U;
	int32_t x848 = 59;

    t190 = (x845%(x846-(x847%x848)));

    if (t190 != 65535U) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x849 = UINT32_MAX;
	int32_t x850 = -1;
	volatile int8_t x851 = INT8_MIN;
	static int16_t x852 = 359;
	uint32_t t191 = 15U;

    t191 = (x849%(x850-(x851%x852)));

    if (t191 != 15U) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x853 = 608LLU;
	static uint16_t x855 = UINT16_MAX;
	volatile int8_t x856 = -38;
	static volatile uint64_t t192 = 7063032929031LLU;

    t192 = (x853%(x854-(x855%x856)));

    if (t192 != 144LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x857 = 3091792301888819LLU;
	volatile int16_t x859 = 7791;
	uint8_t x860 = 1U;
	volatile uint64_t t193 = 20933513354LLU;

    t193 = (x857%(x858-(x859%x860)));

    if (t193 != 494942931LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x861 = INT16_MAX;
	static int64_t x864 = INT64_MIN;
	int64_t t194 = -679383439395LL;

    t194 = (x861%(x862-(x863%x864)));

    if (t194 != 32767LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x865 = INT32_MAX;
	volatile int32_t x867 = INT32_MIN;
	int32_t x868 = -182645804;
	static int32_t t195 = -35;

    t195 = (x865%(x866-(x867%x868)));

    if (t195 != 71784682) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x869 = 59;
	uint16_t x870 = UINT16_MAX;
	int64_t x871 = INT64_MAX;
	int16_t x872 = 22;
	volatile int64_t t196 = -11127124982807LL;

    t196 = (x869%(x870-(x871%x872)));

    if (t196 != 59LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x873 = -1;
	static uint32_t x874 = UINT32_MAX;
	static int64_t x875 = INT64_MAX;
	int64_t t197 = -321405711298286LL;

    t197 = (x873%(x874-(x875%x876)));

    if (t197 != -1LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x881 = 4;
	volatile uint8_t x882 = 0U;
	int8_t x883 = INT8_MIN;
	int64_t x884 = INT64_MAX;
	int64_t t198 = 4626506LL;

    t198 = (x881%(x882-(x883%x884)));

    if (t198 != 4LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint64_t x886 = UINT64_MAX;
	int8_t x887 = INT8_MAX;

    t199 = (x885%(x886-(x887%x888)));

    if (t199 != 3971009979LLU) { NG(); } else { ; }
	
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


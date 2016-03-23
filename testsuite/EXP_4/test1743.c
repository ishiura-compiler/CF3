
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

int32_t x4 = INT32_MIN;
static volatile uint16_t x7 = UINT16_MAX;
uint32_t x8 = UINT32_MAX;
static int32_t x9 = INT32_MAX;
static uint32_t x10 = 147U;
volatile int8_t x15 = -1;
int8_t x16 = INT8_MIN;
uint32_t x20 = UINT32_MAX;
volatile int32_t t4 = 421262511;
static volatile uint32_t x23 = 20U;
int8_t x35 = 1;
int16_t x44 = INT16_MAX;
int32_t x45 = INT32_MIN;
int32_t t11 = -463702;
volatile int32_t t14 = -191;
int32_t t15 = 24566;
static int32_t x69 = -454422543;
static int32_t x71 = -2;
int32_t x74 = INT32_MIN;
int64_t x76 = INT64_MAX;
uint16_t x78 = 3005U;
static uint8_t x81 = UINT8_MAX;
volatile int32_t t21 = -1055;
uint32_t x91 = UINT32_MAX;
volatile int8_t x92 = 3;
int16_t x96 = INT16_MAX;
static volatile int32_t t23 = 51044157;
uint16_t x103 = 2441U;
uint64_t x107 = 5475503064LLU;
uint32_t x109 = UINT32_MAX;
static int16_t x116 = 158;
volatile uint64_t x118 = 13850111289LLU;
int16_t x121 = INT16_MIN;
int32_t x123 = INT32_MIN;
int8_t x130 = INT8_MIN;
int8_t x145 = INT8_MIN;
int16_t x147 = 6657;
static int32_t t37 = -16657862;
uint32_t x153 = 0U;
volatile uint32_t x155 = 78828699U;
volatile uint32_t x157 = 12529U;
volatile int16_t x159 = INT16_MIN;
static volatile int32_t t39 = 451;
int32_t x164 = INT32_MIN;
volatile int32_t t40 = -712402999;
int32_t t43 = -304658;
uint32_t x177 = 824813U;
int8_t x189 = INT8_MIN;
uint32_t x197 = 7427912U;
int32_t t50 = 12058339;
volatile int64_t x208 = -1LL;
int32_t t51 = -251831243;
static int64_t x212 = 8946790681594948LL;
int16_t x222 = -1;
static int8_t x228 = INT8_MIN;
int16_t x229 = INT16_MAX;
int16_t x230 = -299;
int8_t x231 = INT8_MAX;
static int32_t t57 = -1;
static volatile int64_t x235 = 28816LL;
volatile uint64_t x243 = 29861505143LLU;
uint16_t x251 = UINT16_MAX;
uint8_t x252 = 1U;
int64_t x254 = INT64_MAX;
static uint64_t x266 = 28745406699LLU;
volatile int8_t x280 = 59;
int32_t t69 = -101;
int8_t x282 = 17;
int64_t x283 = INT64_MIN;
volatile int64_t x292 = -112781844443LL;
uint8_t x298 = 121U;
volatile int32_t t74 = 5636;
int32_t t75 = -5;
int8_t x307 = INT8_MIN;
static uint16_t x315 = 18967U;
static int32_t t78 = -20;
uint64_t x317 = 2329LLU;
uint64_t x321 = 137175688192856492LLU;
int32_t t80 = 131462;
volatile int32_t t81 = -3572056;
uint8_t x329 = 4U;
uint32_t x339 = 2142U;
int16_t x340 = INT16_MIN;
uint8_t x345 = 75U;
static int16_t x347 = INT16_MIN;
static uint8_t x351 = 10U;
volatile int32_t t87 = -584;
uint64_t x354 = 11085614LLU;
static volatile int32_t t88 = -7886;
uint16_t x357 = 2725U;
uint64_t x358 = 96427LLU;
volatile int32_t t91 = 562886378;
int64_t x375 = 551927577110LL;
int64_t x381 = INT64_MIN;
static uint8_t x385 = 2U;
static uint32_t x387 = UINT32_MAX;
volatile int32_t t96 = -65356;
volatile int32_t t97 = -30936933;
uint32_t x393 = 13U;
int64_t x395 = -1LL;
int32_t x396 = -2;
int32_t t98 = 294;
uint16_t x397 = 21U;
int32_t x400 = -1875;
static int32_t t100 = 344;
uint64_t x405 = 562262199535969126LLU;
int32_t t101 = -122517290;
uint8_t x410 = 87U;
volatile int8_t x412 = INT8_MIN;
uint16_t x415 = 31252U;
static volatile int32_t t105 = 200330348;
int16_t x433 = INT16_MIN;
uint16_t x435 = 1171U;
int32_t t108 = 3345;
static volatile uint8_t x441 = UINT8_MAX;
static int32_t x444 = INT32_MAX;
volatile int32_t t110 = -14264064;
volatile int32_t t111 = 288871491;
int8_t x452 = INT8_MIN;
volatile int32_t t112 = -9;
int32_t x453 = 1501;
static int8_t x455 = INT8_MAX;
int16_t x457 = 15826;
int8_t x461 = -1;
uint32_t x463 = 2974U;
volatile int8_t x466 = -22;
int32_t x469 = 65;
int32_t x475 = -412;
int32_t t119 = -1;
uint32_t x483 = 1437158U;
static int32_t x486 = -227728607;
volatile int16_t x487 = INT16_MIN;
static int32_t t121 = 1;
static uint8_t x490 = 1U;
static int64_t x491 = -1LL;
int8_t x492 = INT8_MIN;
static volatile int8_t x494 = INT8_MIN;
static volatile int8_t x496 = INT8_MIN;
int32_t t123 = -520;
volatile int32_t t124 = 239;
static int64_t x507 = -1LL;
int64_t x508 = INT64_MIN;
volatile int32_t t126 = 8;
uint64_t x515 = 2201263547618259LLU;
volatile int16_t x519 = -1;
uint64_t x522 = UINT64_MAX;
volatile int32_t t130 = 417283791;
int16_t x525 = INT16_MIN;
volatile int8_t x531 = 14;
uint64_t x535 = 62LLU;
int32_t t134 = 483608132;
int32_t x541 = INT32_MAX;
int8_t x547 = -1;
volatile int8_t x548 = -47;
static uint64_t x552 = 787311395627551LLU;
volatile int32_t t137 = -66129340;
uint16_t x554 = UINT16_MAX;
int16_t x557 = INT16_MIN;
volatile int64_t x561 = -1LL;
uint8_t x566 = UINT8_MAX;
static int32_t t144 = -455612;
uint16_t x584 = UINT16_MAX;
static int16_t x587 = -1;
static int32_t t146 = 2266345;
int32_t t147 = 1168;
static volatile uint64_t x598 = UINT64_MAX;
uint64_t x599 = 3229659960LLU;
int32_t x607 = INT32_MAX;
static uint8_t x608 = UINT8_MAX;
volatile uint8_t x609 = 9U;
int16_t x621 = 2728;
int32_t x622 = INT32_MAX;
volatile int32_t t155 = -14267;
static int16_t x625 = INT16_MIN;
volatile int16_t x628 = INT16_MIN;
volatile int32_t t156 = -9;
volatile int16_t x633 = INT16_MIN;
volatile uint32_t x638 = 8157U;
static uint32_t x639 = UINT32_MAX;
volatile int16_t x641 = INT16_MIN;
volatile int32_t t160 = -437129166;
uint16_t x645 = 0U;
int8_t x646 = INT8_MIN;
int64_t x647 = -1LL;
volatile uint32_t x655 = 906U;
volatile uint16_t x659 = UINT16_MAX;
uint8_t x666 = 6U;
int32_t x668 = -8007034;
uint16_t x673 = 24890U;
uint64_t x675 = 10443053254867LLU;
static int16_t x679 = -1;
int64_t x680 = INT64_MIN;
volatile int8_t x682 = -1;
static int32_t t173 = -474963919;
int8_t x701 = INT8_MIN;
int32_t t176 = 391712325;
uint64_t x715 = 64081216LLU;
static int8_t x720 = INT8_MAX;
static int32_t x721 = INT32_MIN;
static int32_t x723 = INT32_MIN;
int32_t t180 = -831855;
int32_t x726 = INT32_MAX;
int32_t x728 = INT32_MIN;
int32_t x734 = INT32_MAX;
volatile uint8_t x735 = UINT8_MAX;
static volatile int32_t t184 = 6;
volatile int32_t t185 = -126;
int8_t x746 = INT8_MIN;
int64_t x749 = INT64_MIN;
volatile int64_t x752 = INT64_MIN;
uint8_t x758 = 1U;
volatile uint16_t x761 = 629U;
static int32_t x762 = INT32_MIN;
int32_t t191 = 2981;
uint64_t x773 = 25081888LLU;
int16_t x774 = -1;
int8_t x775 = 1;
int8_t x777 = 25;
static int64_t x778 = -28688104210338798LL;
static volatile int32_t t194 = 98;
uint8_t x781 = UINT8_MAX;
uint32_t x791 = 2822652U;
static volatile int64_t x792 = -1LL;
volatile int64_t x799 = -1LL;
int8_t x800 = INT8_MAX;


void f0(void) {
    	uint16_t x1 = UINT16_MAX;
	int16_t x2 = 15;
	uint16_t x3 = 110U;
	volatile int32_t t0 = 15074778;

    t0 = (x1!=(x2|(x3>x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = 13U;
	static int32_t x6 = INT32_MIN;
	int32_t t1 = -31867971;

    t1 = (x5!=(x6|(x7>x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x11 = 15578U;
	uint16_t x12 = 1334U;
	int32_t t2 = -2711;

    t2 = (x9!=(x10|(x11>x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int8_t x13 = INT8_MIN;
	static volatile int64_t x14 = -274689368723495170LL;
	int32_t t3 = -15;

    t3 = (x13!=(x14|(x15>x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x17 = 0;
	volatile int8_t x18 = INT8_MAX;
	int8_t x19 = 1;

    t4 = (x17!=(x18|(x19>x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 3U;
	uint32_t x22 = 126U;
	int16_t x24 = -1;
	int32_t t5 = -771;

    t5 = (x21!=(x22|(x23>x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MIN;
	int8_t x26 = INT8_MIN;
	uint8_t x27 = 3U;
	int16_t x28 = INT16_MIN;
	int32_t t6 = 5465;

    t6 = (x25!=(x26|(x27>x28)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x29 = 181;
	volatile uint16_t x30 = 6344U;
	uint16_t x31 = 19577U;
	uint32_t x32 = UINT32_MAX;
	int32_t t7 = -119644667;

    t7 = (x29!=(x30|(x31>x32)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint8_t x33 = UINT8_MAX;
	uint64_t x34 = 1228950542973LLU;
	static int16_t x36 = INT16_MIN;
	volatile int32_t t8 = 745481077;

    t8 = (x33!=(x34|(x35>x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = INT64_MAX;
	static int32_t x38 = INT32_MIN;
	int64_t x39 = INT64_MIN;
	volatile int8_t x40 = INT8_MIN;
	static int32_t t9 = 699;

    t9 = (x37!=(x38|(x39>x40)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint16_t x41 = 0U;
	int8_t x42 = INT8_MIN;
	uint64_t x43 = 26612717998503008LLU;
	static volatile int32_t t10 = -50061;

    t10 = (x41!=(x42|(x43>x44)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x46 = UINT32_MAX;
	uint16_t x47 = 63U;
	static int32_t x48 = -1;

    t11 = (x45!=(x46|(x47>x48)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = INT16_MAX;
	int8_t x50 = 46;
	int64_t x51 = INT64_MIN;
	int8_t x52 = -21;
	volatile int32_t t12 = 100986;

    t12 = (x49!=(x50|(x51>x52)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint32_t x53 = UINT32_MAX;
	uint16_t x54 = 421U;
	static int64_t x55 = INT64_MIN;
	int16_t x56 = -1;
	static int32_t t13 = -317;

    t13 = (x53!=(x54|(x55>x56)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = INT16_MAX;
	static int64_t x58 = INT64_MIN;
	uint64_t x59 = UINT64_MAX;
	int32_t x60 = INT32_MIN;

    t14 = (x57!=(x58|(x59>x60)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = INT8_MIN;
	int32_t x62 = -1;
	int64_t x63 = -13LL;
	volatile int16_t x64 = INT16_MIN;

    t15 = (x61!=(x62|(x63>x64)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint64_t x65 = 428833833443LLU;
	int16_t x66 = INT16_MIN;
	int32_t x67 = 903981776;
	volatile int16_t x68 = INT16_MIN;
	volatile int32_t t16 = 559639545;

    t16 = (x65!=(x66|(x67>x68)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x70 = -43;
	int64_t x72 = INT64_MIN;
	volatile int32_t t17 = -274217962;

    t17 = (x69!=(x70|(x71>x72)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = 575878513285LL;
	int8_t x75 = 0;
	int32_t t18 = -16;

    t18 = (x73!=(x74|(x75>x76)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint8_t x77 = UINT8_MAX;
	volatile int8_t x79 = INT8_MIN;
	uint16_t x80 = 471U;
	int32_t t19 = -4;

    t19 = (x77!=(x78|(x79>x80)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint64_t x82 = 520096292094LLU;
	static volatile int32_t x83 = INT32_MIN;
	static uint64_t x84 = 32293LLU;
	static volatile int32_t t20 = 491439684;

    t20 = (x81!=(x82|(x83>x84)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x85 = UINT32_MAX;
	int32_t x86 = INT32_MIN;
	int8_t x87 = INT8_MIN;
	uint64_t x88 = 1316436346LLU;

    t21 = (x85!=(x86|(x87>x88)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x89 = UINT32_MAX;
	uint64_t x90 = 148440LLU;
	static int32_t t22 = -4685;

    t22 = (x89!=(x90|(x91>x92)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile uint32_t x93 = 1U;
	int16_t x94 = INT16_MAX;
	int16_t x95 = INT16_MAX;

    t23 = (x93!=(x94|(x95>x96)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint16_t x97 = 14U;
	int32_t x98 = 1269554;
	volatile int64_t x99 = 23648LL;
	uint8_t x100 = 0U;
	static volatile int32_t t24 = 1;

    t24 = (x97!=(x98|(x99>x100)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x101 = UINT64_MAX;
	uint32_t x102 = 319411U;
	static uint64_t x104 = UINT64_MAX;
	static int32_t t25 = 676;

    t25 = (x101!=(x102|(x103>x104)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x105 = INT16_MAX;
	int64_t x106 = INT64_MAX;
	int16_t x108 = 4548;
	volatile int32_t t26 = -933035992;

    t26 = (x105!=(x106|(x107>x108)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x110 = UINT8_MAX;
	int16_t x111 = -1;
	int64_t x112 = INT64_MAX;
	volatile int32_t t27 = -28455;

    t27 = (x109!=(x110|(x111>x112)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int64_t x113 = -12945818869491713LL;
	volatile uint8_t x114 = UINT8_MAX;
	static int32_t x115 = INT32_MAX;
	int32_t t28 = -716;

    t28 = (x113!=(x114|(x115>x116)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = -1;
	static int32_t x119 = INT32_MAX;
	uint16_t x120 = UINT16_MAX;
	static volatile int32_t t29 = 11046356;

    t29 = (x117!=(x118|(x119>x120)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x122 = 41371227290LLU;
	int32_t x124 = 4;
	int32_t t30 = -4;

    t30 = (x121!=(x122|(x123>x124)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint64_t x125 = 825914653668307LLU;
	uint16_t x126 = UINT16_MAX;
	static int8_t x127 = INT8_MAX;
	uint64_t x128 = 15LLU;
	volatile int32_t t31 = 11513348;

    t31 = (x125!=(x126|(x127>x128)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint64_t x129 = UINT64_MAX;
	static int32_t x131 = INT32_MAX;
	uint32_t x132 = UINT32_MAX;
	static int32_t t32 = 1;

    t32 = (x129!=(x130|(x131>x132)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = INT32_MIN;
	uint8_t x134 = UINT8_MAX;
	int8_t x135 = INT8_MIN;
	int64_t x136 = -105675861959214668LL;
	int32_t t33 = 0;

    t33 = (x133!=(x134|(x135>x136)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = INT8_MIN;
	int64_t x138 = 62708090LL;
	uint64_t x139 = UINT64_MAX;
	int32_t x140 = INT32_MIN;
	int32_t t34 = 2015649;

    t34 = (x137!=(x138|(x139>x140)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x141 = -1;
	static volatile int64_t x142 = -1LL;
	int8_t x143 = 3;
	uint64_t x144 = 84LLU;
	volatile int32_t t35 = 1919600;

    t35 = (x141!=(x142|(x143>x144)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x146 = 49;
	static int32_t x148 = 49828;
	static int32_t t36 = -50595014;

    t36 = (x145!=(x146|(x147>x148)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x149 = INT32_MIN;
	int8_t x150 = INT8_MIN;
	volatile uint16_t x151 = UINT16_MAX;
	int32_t x152 = INT32_MIN;

    t37 = (x149!=(x150|(x151>x152)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x154 = INT64_MIN;
	int64_t x156 = -129825384836LL;
	int32_t t38 = -742;

    t38 = (x153!=(x154|(x155>x156)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x158 = -5881;
	uint32_t x160 = 68651U;

    t39 = (x157!=(x158|(x159>x160)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint32_t x161 = 42783899U;
	volatile uint8_t x162 = 7U;
	volatile int16_t x163 = INT16_MIN;

    t40 = (x161!=(x162|(x163>x164)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = 285976082814431LL;
	uint64_t x166 = UINT64_MAX;
	uint8_t x167 = 30U;
	volatile uint8_t x168 = 83U;
	volatile int32_t t41 = 29;

    t41 = (x165!=(x166|(x167>x168)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = INT32_MAX;
	int32_t x170 = -1;
	uint64_t x171 = 2900473909045LLU;
	static int8_t x172 = INT8_MIN;
	static volatile int32_t t42 = 33891;

    t42 = (x169!=(x170|(x171>x172)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x173 = INT32_MIN;
	int32_t x174 = INT32_MIN;
	uint32_t x175 = 5969U;
	static int64_t x176 = INT64_MAX;

    t43 = (x173!=(x174|(x175>x176)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x178 = -1;
	uint32_t x179 = 461222595U;
	static volatile int8_t x180 = -1;
	static volatile int32_t t44 = -7;

    t44 = (x177!=(x178|(x179>x180)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint64_t x181 = 458350235641980LLU;
	static uint64_t x182 = 2231635815661728768LLU;
	volatile int16_t x183 = -1;
	static volatile int64_t x184 = INT64_MAX;
	int32_t t45 = -247;

    t45 = (x181!=(x182|(x183>x184)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x185 = -1;
	static int64_t x186 = -1LL;
	uint16_t x187 = UINT16_MAX;
	int64_t x188 = -1LL;
	volatile int32_t t46 = -321948;

    t46 = (x185!=(x186|(x187>x188)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x190 = INT64_MIN;
	uint16_t x191 = UINT16_MAX;
	int32_t x192 = INT32_MIN;
	static int32_t t47 = 20089;

    t47 = (x189!=(x190|(x191>x192)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int64_t x193 = -91486538784703351LL;
	int32_t x194 = INT32_MIN;
	static volatile uint16_t x195 = 3U;
	int64_t x196 = INT64_MAX;
	int32_t t48 = -88;

    t48 = (x193!=(x194|(x195>x196)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x198 = -1LL;
	static volatile uint8_t x199 = 22U;
	static int32_t x200 = -1;
	int32_t t49 = -51;

    t49 = (x197!=(x198|(x199>x200)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x201 = INT32_MAX;
	uint8_t x202 = UINT8_MAX;
	int8_t x203 = INT8_MIN;
	static volatile int8_t x204 = 7;

    t50 = (x201!=(x202|(x203>x204)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = INT8_MIN;
	int16_t x206 = INT16_MAX;
	uint16_t x207 = UINT16_MAX;

    t51 = (x205!=(x206|(x207>x208)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x209 = INT16_MIN;
	uint64_t x210 = 5698116831040LLU;
	uint32_t x211 = 44U;
	volatile int32_t t52 = 558318;

    t52 = (x209!=(x210|(x211>x212)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = INT32_MIN;
	static uint64_t x214 = 344613441750002946LLU;
	static uint64_t x215 = UINT64_MAX;
	int8_t x216 = -1;
	int32_t t53 = -931802;

    t53 = (x213!=(x214|(x215>x216)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = INT8_MAX;
	static int64_t x218 = -1820307004427LL;
	uint64_t x219 = UINT64_MAX;
	static uint8_t x220 = 83U;
	volatile int32_t t54 = -27073;

    t54 = (x217!=(x218|(x219>x220)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x221 = 544U;
	int8_t x223 = 62;
	static volatile int64_t x224 = INT64_MIN;
	int32_t t55 = 1010326417;

    t55 = (x221!=(x222|(x223>x224)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x225 = INT16_MIN;
	int16_t x226 = -13998;
	int16_t x227 = INT16_MIN;
	int32_t t56 = -6593;

    t56 = (x225!=(x226|(x227>x228)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x232 = 1;

    t57 = (x229!=(x230|(x231>x232)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x233 = -1;
	int8_t x234 = INT8_MIN;
	uint32_t x236 = 1297508U;
	static int32_t t58 = -118111411;

    t58 = (x233!=(x234|(x235>x236)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x237 = 27780256U;
	int16_t x238 = -1;
	int16_t x239 = INT16_MIN;
	uint8_t x240 = UINT8_MAX;
	volatile int32_t t59 = 1934996;

    t59 = (x237!=(x238|(x239>x240)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x241 = 14359165938126696LLU;
	int32_t x242 = INT32_MIN;
	static int16_t x244 = 0;
	int32_t t60 = -15;

    t60 = (x241!=(x242|(x243>x244)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int8_t x245 = INT8_MIN;
	volatile int64_t x246 = 1461458615660905327LL;
	volatile uint8_t x247 = UINT8_MAX;
	volatile int64_t x248 = INT64_MIN;
	static int32_t t61 = 2257300;

    t61 = (x245!=(x246|(x247>x248)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x249 = 13U;
	volatile int64_t x250 = 96308975261471181LL;
	int32_t t62 = -29966;

    t62 = (x249!=(x250|(x251>x252)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x253 = UINT32_MAX;
	uint32_t x255 = UINT32_MAX;
	uint64_t x256 = 1007718819771LLU;
	int32_t t63 = 40029;

    t63 = (x253!=(x254|(x255>x256)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x257 = INT16_MIN;
	uint16_t x258 = 2016U;
	int32_t x259 = INT32_MIN;
	static int8_t x260 = INT8_MIN;
	volatile int32_t t64 = -188;

    t64 = (x257!=(x258|(x259>x260)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = INT64_MAX;
	static int8_t x262 = -61;
	static uint16_t x263 = 7U;
	int16_t x264 = INT16_MIN;
	int32_t t65 = -14;

    t65 = (x261!=(x262|(x263>x264)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = -4989;
	int64_t x267 = INT64_MAX;
	uint32_t x268 = UINT32_MAX;
	static int32_t t66 = 92131;

    t66 = (x265!=(x266|(x267>x268)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x269 = 7U;
	int64_t x270 = -1LL;
	int16_t x271 = 722;
	int16_t x272 = INT16_MAX;
	static int32_t t67 = -3468900;

    t67 = (x269!=(x270|(x271>x272)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = -114LL;
	int32_t x274 = INT32_MAX;
	int32_t x275 = INT32_MIN;
	volatile uint64_t x276 = 15233280242LLU;
	volatile int32_t t68 = 1;

    t68 = (x273!=(x274|(x275>x276)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = INT8_MIN;
	static int8_t x278 = 0;
	uint16_t x279 = UINT16_MAX;

    t69 = (x277!=(x278|(x279>x280)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x281 = UINT8_MAX;
	int8_t x284 = 1;
	int32_t t70 = 4475;

    t70 = (x281!=(x282|(x283>x284)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = INT16_MIN;
	uint32_t x286 = 2439U;
	static int8_t x287 = INT8_MIN;
	static uint32_t x288 = UINT32_MAX;
	volatile int32_t t71 = -9;

    t71 = (x285!=(x286|(x287>x288)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = INT64_MIN;
	static volatile uint64_t x290 = UINT64_MAX;
	int16_t x291 = -1;
	volatile int32_t t72 = -681;

    t72 = (x289!=(x290|(x291>x292)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = INT64_MAX;
	uint8_t x294 = UINT8_MAX;
	int16_t x295 = -2614;
	int8_t x296 = 1;
	volatile int32_t t73 = -649541650;

    t73 = (x293!=(x294|(x295>x296)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x297 = 1066420230196836LLU;
	uint8_t x299 = 2U;
	volatile int32_t x300 = INT32_MIN;

    t74 = (x297!=(x298|(x299>x300)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x301 = -1;
	static int64_t x302 = INT64_MIN;
	int64_t x303 = -1LL;
	int64_t x304 = -1LL;

    t75 = (x301!=(x302|(x303>x304)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x305 = -1;
	uint64_t x306 = UINT64_MAX;
	int8_t x308 = INT8_MIN;
	volatile int32_t t76 = 1600714;

    t76 = (x305!=(x306|(x307>x308)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = INT16_MAX;
	int8_t x310 = 11;
	int64_t x311 = -1013893130LL;
	static uint32_t x312 = 10U;
	static int32_t t77 = 27460;

    t77 = (x309!=(x310|(x311>x312)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x313 = 2U;
	volatile int8_t x314 = INT8_MAX;
	volatile int64_t x316 = -68233099634949LL;

    t78 = (x313!=(x314|(x315>x316)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x318 = INT8_MAX;
	volatile int32_t x319 = -63075;
	volatile int8_t x320 = -1;
	volatile int32_t t79 = 124392;

    t79 = (x317!=(x318|(x319>x320)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x322 = UINT16_MAX;
	uint16_t x323 = UINT16_MAX;
	uint16_t x324 = UINT16_MAX;

    t80 = (x321!=(x322|(x323>x324)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x325 = -1;
	int16_t x326 = 0;
	int32_t x327 = -1;
	volatile int8_t x328 = INT8_MIN;

    t81 = (x325!=(x326|(x327>x328)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x330 = INT32_MAX;
	uint64_t x331 = 116805606399892187LLU;
	static uint16_t x332 = 434U;
	int32_t t82 = -349;

    t82 = (x329!=(x330|(x331>x332)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x333 = INT8_MIN;
	static int8_t x334 = -1;
	int8_t x335 = 2;
	static volatile int8_t x336 = INT8_MIN;
	int32_t t83 = -45452753;

    t83 = (x333!=(x334|(x335>x336)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x337 = 37U;
	int16_t x338 = INT16_MAX;
	int32_t t84 = -281;

    t84 = (x337!=(x338|(x339>x340)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint16_t x341 = 32U;
	volatile int16_t x342 = -1;
	static int8_t x343 = -1;
	static int16_t x344 = -15;
	volatile int32_t t85 = 431160;

    t85 = (x341!=(x342|(x343>x344)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x346 = INT32_MIN;
	static volatile uint16_t x348 = 2127U;
	volatile int32_t t86 = 21018;

    t86 = (x345!=(x346|(x347>x348)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x349 = UINT8_MAX;
	uint32_t x350 = 16950U;
	uint8_t x352 = 7U;

    t87 = (x349!=(x350|(x351>x352)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = INT8_MIN;
	uint16_t x355 = 6U;
	volatile uint16_t x356 = 0U;

    t88 = (x353!=(x354|(x355>x356)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint16_t x359 = UINT16_MAX;
	uint64_t x360 = 1902020584142LLU;
	int32_t t89 = 3538;

    t89 = (x357!=(x358|(x359>x360)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x361 = 195;
	static uint32_t x362 = 15616U;
	uint32_t x363 = UINT32_MAX;
	volatile int16_t x364 = -1;
	static volatile int32_t t90 = -8358;

    t90 = (x361!=(x362|(x363>x364)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x365 = 1U;
	static volatile int8_t x366 = INT8_MIN;
	static uint16_t x367 = 1451U;
	volatile int32_t x368 = -131;

    t91 = (x365!=(x366|(x367>x368)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x369 = INT16_MIN;
	static int32_t x370 = 179341;
	volatile int32_t x371 = INT32_MIN;
	uint64_t x372 = 28708LLU;
	int32_t t92 = 61502780;

    t92 = (x369!=(x370|(x371>x372)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = INT8_MIN;
	static uint8_t x374 = 1U;
	static int8_t x376 = INT8_MIN;
	int32_t t93 = 2738;

    t93 = (x373!=(x374|(x375>x376)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint8_t x377 = 112U;
	uint16_t x378 = 5746U;
	uint64_t x379 = UINT64_MAX;
	int8_t x380 = INT8_MIN;
	volatile int32_t t94 = -32759919;

    t94 = (x377!=(x378|(x379>x380)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x382 = INT16_MAX;
	volatile int64_t x383 = INT64_MIN;
	uint8_t x384 = UINT8_MAX;
	volatile int32_t t95 = -6022235;

    t95 = (x381!=(x382|(x383>x384)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x386 = INT32_MIN;
	int16_t x388 = -1;

    t96 = (x385!=(x386|(x387>x388)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = INT8_MAX;
	int64_t x390 = 537202LL;
	int8_t x391 = 1;
	int16_t x392 = INT16_MAX;

    t97 = (x389!=(x390|(x391>x392)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint8_t x394 = 31U;

    t98 = (x393!=(x394|(x395>x396)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x398 = 19414U;
	int64_t x399 = -1LL;
	volatile int32_t t99 = -97058747;

    t99 = (x397!=(x398|(x399>x400)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x401 = 12210U;
	volatile uint64_t x402 = 7568768LLU;
	int8_t x403 = 0;
	static int32_t x404 = 13859;

    t100 = (x401!=(x402|(x403>x404)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x406 = INT32_MAX;
	volatile int64_t x407 = -1LL;
	volatile int32_t x408 = -1;

    t101 = (x405!=(x406|(x407>x408)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x409 = INT16_MIN;
	int16_t x411 = -3460;
	volatile int32_t t102 = -190;

    t102 = (x409!=(x410|(x411>x412)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint8_t x413 = 27U;
	int64_t x414 = INT64_MIN;
	uint64_t x416 = 49LLU;
	volatile int32_t t103 = 54033247;

    t103 = (x413!=(x414|(x415>x416)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = INT16_MAX;
	int8_t x418 = -1;
	volatile int64_t x419 = INT64_MIN;
	int32_t x420 = INT32_MIN;
	int32_t t104 = 7448503;

    t104 = (x417!=(x418|(x419>x420)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x421 = 1726456380LLU;
	static uint8_t x422 = 3U;
	int8_t x423 = INT8_MIN;
	int64_t x424 = 109128LL;

    t105 = (x421!=(x422|(x423>x424)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x425 = INT8_MAX;
	static int64_t x426 = INT64_MIN;
	volatile int16_t x427 = INT16_MIN;
	int8_t x428 = INT8_MIN;
	int32_t t106 = -247214034;

    t106 = (x425!=(x426|(x427>x428)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = INT8_MIN;
	int32_t x430 = INT32_MIN;
	int32_t x431 = INT32_MIN;
	static int8_t x432 = INT8_MAX;
	volatile int32_t t107 = -1;

    t107 = (x429!=(x430|(x431>x432)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x434 = INT8_MAX;
	volatile int32_t x436 = 18799;

    t108 = (x433!=(x434|(x435>x436)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x437 = INT8_MIN;
	static int32_t x438 = 4;
	volatile int32_t x439 = INT32_MIN;
	uint32_t x440 = 797091611U;
	volatile int32_t t109 = 29077116;

    t109 = (x437!=(x438|(x439>x440)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x442 = INT8_MAX;
	static volatile int32_t x443 = -1;

    t110 = (x441!=(x442|(x443>x444)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = -30092088;
	uint16_t x446 = 167U;
	int8_t x447 = INT8_MIN;
	int64_t x448 = INT64_MIN;

    t111 = (x445!=(x446|(x447>x448)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint16_t x449 = UINT16_MAX;
	static volatile int64_t x450 = INT64_MIN;
	static uint8_t x451 = UINT8_MAX;

    t112 = (x449!=(x450|(x451>x452)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x454 = UINT16_MAX;
	static int64_t x456 = INT64_MAX;
	static volatile int32_t t113 = 15;

    t113 = (x453!=(x454|(x455>x456)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x458 = INT16_MIN;
	uint64_t x459 = 936LLU;
	uint64_t x460 = 28869706LLU;
	volatile int32_t t114 = -1;

    t114 = (x457!=(x458|(x459>x460)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x462 = INT32_MIN;
	int64_t x464 = INT64_MIN;
	int32_t t115 = -21659205;

    t115 = (x461!=(x462|(x463>x464)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = INT8_MAX;
	volatile uint64_t x467 = UINT64_MAX;
	static volatile uint8_t x468 = 19U;
	int32_t t116 = 566;

    t116 = (x465!=(x466|(x467>x468)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x470 = -1;
	uint64_t x471 = UINT64_MAX;
	int32_t x472 = INT32_MIN;
	volatile int32_t t117 = 983;

    t117 = (x469!=(x470|(x471>x472)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x473 = INT64_MIN;
	int32_t x474 = -283584;
	uint8_t x476 = 51U;
	volatile int32_t t118 = -503;

    t118 = (x473!=(x474|(x475>x476)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x477 = UINT64_MAX;
	int8_t x478 = INT8_MAX;
	uint16_t x479 = UINT16_MAX;
	volatile int8_t x480 = -1;

    t119 = (x477!=(x478|(x479>x480)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = INT64_MAX;
	uint32_t x482 = UINT32_MAX;
	int64_t x484 = -477057449LL;
	volatile int32_t t120 = 1;

    t120 = (x481!=(x482|(x483>x484)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x485 = INT32_MAX;
	static uint64_t x488 = 7542235992982LLU;

    t121 = (x485!=(x486|(x487>x488)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = -151;
	volatile int32_t t122 = -307;

    t122 = (x489!=(x490|(x491>x492)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x493 = UINT64_MAX;
	int16_t x495 = -1;

    t123 = (x493!=(x494|(x495>x496)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x497 = UINT8_MAX;
	static uint16_t x498 = 3912U;
	uint8_t x499 = 0U;
	uint32_t x500 = UINT32_MAX;

    t124 = (x497!=(x498|(x499>x500)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x501 = 19LLU;
	volatile uint32_t x502 = UINT32_MAX;
	static int16_t x503 = -251;
	int8_t x504 = INT8_MIN;
	static int32_t t125 = -1;

    t125 = (x501!=(x502|(x503>x504)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint32_t x505 = 26289970U;
	uint16_t x506 = UINT16_MAX;

    t126 = (x505!=(x506|(x507>x508)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x509 = INT32_MIN;
	volatile int16_t x510 = -1;
	volatile int8_t x511 = INT8_MIN;
	int8_t x512 = 1;
	int32_t t127 = 271;

    t127 = (x509!=(x510|(x511>x512)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = INT64_MAX;
	int32_t x514 = INT32_MIN;
	volatile int8_t x516 = INT8_MIN;
	static int32_t t128 = -52;

    t128 = (x513!=(x514|(x515>x516)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x517 = INT16_MAX;
	uint64_t x518 = 1689924570LLU;
	int64_t x520 = INT64_MIN;
	int32_t t129 = -639730037;

    t129 = (x517!=(x518|(x519>x520)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = 0;
	uint64_t x523 = UINT64_MAX;
	static volatile int64_t x524 = INT64_MIN;

    t130 = (x521!=(x522|(x523>x524)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x526 = UINT32_MAX;
	volatile uint16_t x527 = 225U;
	int16_t x528 = INT16_MAX;
	int32_t t131 = 333;

    t131 = (x525!=(x526|(x527>x528)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile uint32_t x529 = 1U;
	int32_t x530 = INT32_MIN;
	int32_t x532 = INT32_MIN;
	volatile int32_t t132 = -25967;

    t132 = (x529!=(x530|(x531>x532)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = INT32_MIN;
	int8_t x534 = -1;
	uint8_t x536 = UINT8_MAX;
	volatile int32_t t133 = -34;

    t133 = (x533!=(x534|(x535>x536)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x537 = INT8_MIN;
	uint8_t x538 = 22U;
	int32_t x539 = -1;
	static uint32_t x540 = 7452861U;

    t134 = (x537!=(x538|(x539>x540)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x542 = 861LLU;
	int8_t x543 = -1;
	int32_t x544 = 42846;
	int32_t t135 = 289751;

    t135 = (x541!=(x542|(x543>x544)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x545 = 3;
	static uint8_t x546 = UINT8_MAX;
	int32_t t136 = -4513194;

    t136 = (x545!=(x546|(x547>x548)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x549 = -1;
	int8_t x550 = 12;
	static int32_t x551 = INT32_MIN;

    t137 = (x549!=(x550|(x551>x552)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x553 = 2;
	int32_t x555 = -1;
	int8_t x556 = INT8_MIN;
	volatile int32_t t138 = -65105;

    t138 = (x553!=(x554|(x555>x556)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x558 = INT64_MAX;
	int32_t x559 = -1589436;
	static int32_t x560 = INT32_MAX;
	int32_t t139 = 30016569;

    t139 = (x557!=(x558|(x559>x560)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x562 = INT16_MIN;
	int32_t x563 = -14502654;
	static volatile int64_t x564 = INT64_MAX;
	int32_t t140 = 126;

    t140 = (x561!=(x562|(x563>x564)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x565 = INT64_MIN;
	volatile uint8_t x567 = 6U;
	int16_t x568 = INT16_MIN;
	static int32_t t141 = 522;

    t141 = (x565!=(x566|(x567>x568)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x569 = UINT8_MAX;
	int64_t x570 = 6843969008484LL;
	int32_t x571 = INT32_MIN;
	uint8_t x572 = UINT8_MAX;
	int32_t t142 = -326658;

    t142 = (x569!=(x570|(x571>x572)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = INT32_MIN;
	int16_t x574 = INT16_MAX;
	uint32_t x575 = 4U;
	volatile int64_t x576 = INT64_MAX;
	int32_t t143 = 43;

    t143 = (x573!=(x574|(x575>x576)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x577 = UINT16_MAX;
	int32_t x578 = -1;
	volatile uint32_t x579 = UINT32_MAX;
	volatile int8_t x580 = INT8_MIN;

    t144 = (x577!=(x578|(x579>x580)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x581 = -1;
	int8_t x582 = INT8_MIN;
	uint16_t x583 = 157U;
	int32_t t145 = 745753;

    t145 = (x581!=(x582|(x583>x584)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile uint16_t x585 = 186U;
	int8_t x586 = INT8_MAX;
	uint64_t x588 = 13900LLU;

    t146 = (x585!=(x586|(x587>x588)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint64_t x589 = UINT64_MAX;
	int16_t x590 = INT16_MIN;
	int32_t x591 = INT32_MAX;
	uint8_t x592 = UINT8_MAX;

    t147 = (x589!=(x590|(x591>x592)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x593 = INT16_MIN;
	volatile int16_t x594 = -1796;
	volatile uint16_t x595 = 4U;
	volatile int16_t x596 = INT16_MIN;
	static volatile int32_t t148 = -3161;

    t148 = (x593!=(x594|(x595>x596)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x597 = -1;
	static int8_t x600 = INT8_MIN;
	volatile int32_t t149 = -703414;

    t149 = (x597!=(x598|(x599>x600)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = -1;
	uint64_t x602 = 375160189LLU;
	int8_t x603 = INT8_MIN;
	int32_t x604 = INT32_MAX;
	volatile int32_t t150 = -1;

    t150 = (x601!=(x602|(x603>x604)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = -32989095712004285LL;
	uint32_t x606 = 1869U;
	int32_t t151 = -106;

    t151 = (x605!=(x606|(x607>x608)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x610 = INT64_MIN;
	int16_t x611 = INT16_MIN;
	static uint32_t x612 = 44232100U;
	static volatile int32_t t152 = 191107756;

    t152 = (x609!=(x610|(x611>x612)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x613 = 11640071U;
	uint64_t x614 = 2064377097LLU;
	int16_t x615 = 0;
	static int8_t x616 = 60;
	volatile int32_t t153 = -1;

    t153 = (x613!=(x614|(x615>x616)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x617 = UINT8_MAX;
	static uint16_t x618 = 2761U;
	int16_t x619 = -264;
	int16_t x620 = INT16_MAX;
	volatile int32_t t154 = 0;

    t154 = (x617!=(x618|(x619>x620)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x623 = INT8_MAX;
	int16_t x624 = INT16_MAX;

    t155 = (x621!=(x622|(x623>x624)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x626 = -1LL;
	int32_t x627 = INT32_MIN;

    t156 = (x625!=(x626|(x627>x628)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile uint32_t x629 = UINT32_MAX;
	int8_t x630 = INT8_MIN;
	static int16_t x631 = 1;
	static int8_t x632 = INT8_MIN;
	int32_t t157 = 10593;

    t157 = (x629!=(x630|(x631>x632)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x634 = -4192024;
	volatile uint64_t x635 = UINT64_MAX;
	static int8_t x636 = INT8_MIN;
	volatile int32_t t158 = -325464626;

    t158 = (x633!=(x634|(x635>x636)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x637 = UINT32_MAX;
	int32_t x640 = INT32_MIN;
	int32_t t159 = -198;

    t159 = (x637!=(x638|(x639>x640)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint32_t x642 = UINT32_MAX;
	int16_t x643 = INT16_MAX;
	int32_t x644 = INT32_MIN;

    t160 = (x641!=(x642|(x643>x644)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x648 = UINT64_MAX;
	volatile int32_t t161 = 959800;

    t161 = (x645!=(x646|(x647>x648)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint64_t x649 = 100733040251LLU;
	int64_t x650 = -1LL;
	uint16_t x651 = 42U;
	int32_t x652 = INT32_MAX;
	int32_t t162 = -1488;

    t162 = (x649!=(x650|(x651>x652)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint32_t x653 = 993619193U;
	int8_t x654 = INT8_MAX;
	uint8_t x656 = 3U;
	volatile int32_t t163 = 9;

    t163 = (x653!=(x654|(x655>x656)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = 1;
	int8_t x658 = -1;
	int8_t x660 = INT8_MIN;
	int32_t t164 = 5474;

    t164 = (x657!=(x658|(x659>x660)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = 91751LL;
	volatile int16_t x662 = INT16_MAX;
	uint16_t x663 = 14925U;
	int64_t x664 = INT64_MAX;
	static int32_t t165 = 2671423;

    t165 = (x661!=(x662|(x663>x664)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = INT8_MAX;
	uint64_t x667 = UINT64_MAX;
	int32_t t166 = -216;

    t166 = (x665!=(x666|(x667>x668)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x669 = UINT32_MAX;
	int8_t x670 = 1;
	int32_t x671 = 179272;
	int8_t x672 = INT8_MIN;
	volatile int32_t t167 = 174956;

    t167 = (x669!=(x670|(x671>x672)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x674 = 0U;
	static int16_t x676 = 4060;
	volatile int32_t t168 = 728;

    t168 = (x673!=(x674|(x675>x676)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x677 = INT16_MIN;
	volatile int16_t x678 = -4047;
	volatile int32_t t169 = 21903635;

    t169 = (x677!=(x678|(x679>x680)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint16_t x681 = 5U;
	volatile int8_t x683 = 62;
	int64_t x684 = INT64_MIN;
	static int32_t t170 = 49666897;

    t170 = (x681!=(x682|(x683>x684)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x685 = 78LL;
	int64_t x686 = INT64_MAX;
	int16_t x687 = -84;
	uint64_t x688 = UINT64_MAX;
	volatile int32_t t171 = 0;

    t171 = (x685!=(x686|(x687>x688)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = -6545;
	static int16_t x690 = INT16_MIN;
	uint8_t x691 = 54U;
	int16_t x692 = INT16_MIN;
	static volatile int32_t t172 = 6159647;

    t172 = (x689!=(x690|(x691>x692)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x693 = UINT16_MAX;
	int64_t x694 = INT64_MIN;
	uint8_t x695 = 20U;
	volatile int8_t x696 = INT8_MIN;

    t173 = (x693!=(x694|(x695>x696)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x697 = UINT8_MAX;
	static int32_t x698 = -1;
	uint32_t x699 = 613U;
	int32_t x700 = 126856;
	static volatile int32_t t174 = -1974299;

    t174 = (x697!=(x698|(x699>x700)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x702 = -1;
	int8_t x703 = 0;
	int32_t x704 = INT32_MIN;
	volatile int32_t t175 = -27737;

    t175 = (x701!=(x702|(x703>x704)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = INT64_MIN;
	volatile uint16_t x706 = 86U;
	static int32_t x707 = INT32_MIN;
	int8_t x708 = INT8_MIN;

    t176 = (x705!=(x706|(x707>x708)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x709 = INT16_MIN;
	static int8_t x710 = INT8_MIN;
	volatile int8_t x711 = -1;
	int8_t x712 = -1;
	int32_t t177 = 6154;

    t177 = (x709!=(x710|(x711>x712)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = 25651LL;
	int32_t x714 = INT32_MAX;
	int16_t x716 = -1;
	volatile int32_t t178 = 1261;

    t178 = (x713!=(x714|(x715>x716)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x717 = 263568026705LLU;
	int64_t x718 = -59708557143678779LL;
	int16_t x719 = -25;
	static volatile int32_t t179 = 642425394;

    t179 = (x717!=(x718|(x719>x720)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x722 = -1;
	volatile int16_t x724 = INT16_MIN;

    t180 = (x721!=(x722|(x723>x724)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x725 = 181;
	int16_t x727 = INT16_MIN;
	int32_t t181 = -3843;

    t181 = (x725!=(x726|(x727>x728)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile uint8_t x729 = 73U;
	int32_t x730 = 1;
	int32_t x731 = INT32_MAX;
	volatile uint64_t x732 = 66932309LLU;
	volatile int32_t t182 = -87032;

    t182 = (x729!=(x730|(x731>x732)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x733 = 741U;
	static uint64_t x736 = UINT64_MAX;
	int32_t t183 = -1;

    t183 = (x733!=(x734|(x735>x736)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint32_t x737 = 631U;
	int64_t x738 = INT64_MIN;
	uint64_t x739 = 1011LLU;
	int16_t x740 = INT16_MIN;

    t184 = (x737!=(x738|(x739>x740)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x741 = UINT64_MAX;
	uint64_t x742 = 2114983409666514390LLU;
	static volatile uint8_t x743 = UINT8_MAX;
	int64_t x744 = 138LL;

    t185 = (x741!=(x742|(x743>x744)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x745 = UINT8_MAX;
	volatile int64_t x747 = -1LL;
	volatile uint32_t x748 = 72285158U;
	static volatile int32_t t186 = -2949302;

    t186 = (x745!=(x746|(x747>x748)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint16_t x750 = UINT16_MAX;
	int16_t x751 = INT16_MAX;
	volatile int32_t t187 = 206;

    t187 = (x749!=(x750|(x751>x752)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint16_t x753 = 2238U;
	int16_t x754 = INT16_MAX;
	uint64_t x755 = UINT64_MAX;
	int16_t x756 = -2495;
	volatile int32_t t188 = 49;

    t188 = (x753!=(x754|(x755>x756)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x757 = 8055U;
	int32_t x759 = INT32_MAX;
	uint16_t x760 = 25820U;
	volatile int32_t t189 = -1;

    t189 = (x757!=(x758|(x759>x760)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x763 = -1513834;
	int32_t x764 = 103;
	volatile int32_t t190 = -109;

    t190 = (x761!=(x762|(x763>x764)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = 8;
	int8_t x766 = INT8_MIN;
	volatile uint64_t x767 = UINT64_MAX;
	uint16_t x768 = 0U;

    t191 = (x765!=(x766|(x767>x768)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x769 = -1;
	volatile uint8_t x770 = 11U;
	uint16_t x771 = UINT16_MAX;
	int64_t x772 = INT64_MIN;
	static int32_t t192 = -13250;

    t192 = (x769!=(x770|(x771>x772)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x776 = -5954;
	static int32_t t193 = -288653152;

    t193 = (x773!=(x774|(x775>x776)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x779 = 19331U;
	volatile int16_t x780 = -1;

    t194 = (x777!=(x778|(x779>x780)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int32_t x782 = -10715;
	int16_t x783 = -1551;
	int8_t x784 = INT8_MIN;
	int32_t t195 = 112406727;

    t195 = (x781!=(x782|(x783>x784)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int8_t x785 = -1;
	int8_t x786 = -1;
	volatile uint64_t x787 = 5007132049732462LLU;
	volatile int16_t x788 = INT16_MAX;
	volatile int32_t t196 = 29361837;

    t196 = (x785!=(x786|(x787>x788)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = 0;
	static volatile int32_t x790 = INT32_MIN;
	volatile int32_t t197 = -29950246;

    t197 = (x789!=(x790|(x791>x792)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x793 = -8781;
	int64_t x794 = 2539405998LL;
	uint8_t x795 = 75U;
	volatile uint64_t x796 = 110951727998932LLU;
	volatile int32_t t198 = 1;

    t198 = (x793!=(x794|(x795>x796)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x797 = 242963U;
	int16_t x798 = -9;
	volatile int32_t t199 = -445996175;

    t199 = (x797!=(x798|(x799>x800)));

    if (t199 != 1) { NG(); } else { ; }
	
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


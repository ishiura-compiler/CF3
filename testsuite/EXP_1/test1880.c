
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

static int16_t x1 = INT16_MIN;
static volatile int64_t x6 = INT64_MAX;
int32_t t1 = 1;
uint16_t x22 = UINT16_MAX;
uint8_t x26 = 30U;
volatile int16_t x34 = INT16_MAX;
int16_t x36 = INT16_MIN;
volatile int32_t t8 = -57474168;
int16_t x37 = INT16_MIN;
int32_t x40 = 15;
static volatile int32_t t10 = 412816732;
int16_t x52 = 4661;
volatile int32_t x56 = INT32_MIN;
volatile int64_t t15 = 449881064742538043LL;
uint16_t x66 = UINT16_MAX;
int64_t x67 = INT64_MIN;
volatile uint8_t x68 = UINT8_MAX;
volatile uint32_t x69 = UINT32_MAX;
static uint8_t x73 = 19U;
static uint32_t x76 = UINT32_MAX;
static uint32_t t18 = 788U;
uint16_t x77 = 40U;
uint64_t x82 = 25044LLU;
volatile int32_t t20 = 1;
int16_t x85 = 15817;
static uint32_t x86 = UINT32_MAX;
volatile int64_t t22 = 8LL;
static int64_t x99 = INT64_MIN;
volatile int32_t t24 = -933752;
int16_t x112 = INT16_MIN;
int16_t x118 = INT16_MAX;
int64_t t28 = -1103241166834543LL;
volatile int16_t x121 = -1;
int16_t x125 = -1;
int64_t x127 = INT64_MAX;
int32_t t33 = -28;
static volatile int32_t t37 = 161;
static volatile int16_t x162 = 777;
int16_t x165 = INT16_MIN;
volatile int32_t x172 = 39569129;
uint8_t x174 = 121U;
static volatile int32_t x179 = -4422651;
static volatile uint64_t x184 = 1580LLU;
uint8_t x186 = UINT8_MAX;
volatile int32_t t44 = -69259;
int32_t x199 = -1;
volatile int32_t t47 = 1;
int64_t x220 = 1476093655150LL;
volatile int8_t x221 = INT8_MIN;
uint8_t x222 = 4U;
int32_t x225 = -1;
static uint8_t x227 = 1U;
volatile uint64_t t54 = 106602982194308LLU;
uint64_t x229 = 0LLU;
int8_t x231 = -1;
static uint32_t x237 = UINT32_MAX;
int8_t x251 = INT8_MIN;
static int64_t x254 = -1LL;
uint16_t x258 = 2301U;
uint16_t x260 = 6219U;
volatile int32_t t62 = 1;
int8_t x261 = INT8_MIN;
volatile int64_t t63 = -6980078760LL;
int64_t x268 = INT64_MAX;
int16_t x275 = 563;
int16_t x278 = INT16_MIN;
int32_t t67 = 27069;
static volatile uint32_t t69 = 1048043935U;
volatile int16_t x291 = INT16_MIN;
int16_t x293 = 15071;
int32_t t71 = -309875234;
int8_t x300 = INT8_MIN;
static int8_t x304 = 17;
int64_t x309 = -1LL;
int32_t t75 = 5484317;
int16_t x321 = INT16_MAX;
volatile int32_t x326 = -6886;
static int32_t t79 = 66;
static volatile int32_t x330 = 625257510;
int32_t x342 = 11;
int64_t x346 = -598749530525558LL;
static volatile uint64_t x349 = UINT64_MAX;
uint16_t x351 = 1326U;
volatile int16_t x352 = INT16_MAX;
int8_t x353 = INT8_MAX;
volatile int32_t t85 = 101152;
uint64_t x373 = 118208323535LLU;
uint8_t x377 = UINT8_MAX;
uint64_t x383 = 69342080455832379LLU;
int32_t t92 = -12434230;
static uint64_t x387 = 208LLU;
int16_t x388 = 6445;
static int32_t x390 = -1;
volatile uint8_t x392 = UINT8_MAX;
int64_t x394 = INT64_MIN;
volatile int8_t x395 = INT8_MIN;
static uint64_t x397 = 1748LLU;
int32_t x406 = 22408099;
static int64_t t98 = 6592618261LL;
uint16_t x409 = 1U;
volatile int8_t x413 = -1;
int64_t x418 = INT64_MIN;
static int8_t x422 = INT8_MIN;
uint16_t x423 = 212U;
int32_t x427 = INT32_MIN;
int16_t x429 = -15966;
int32_t x430 = 361;
int8_t x434 = INT8_MIN;
int32_t x435 = INT32_MAX;
uint8_t x439 = 2U;
int32_t t106 = 2601041;
uint32_t x443 = 33U;
int8_t x450 = INT8_MIN;
volatile int8_t x451 = INT8_MIN;
static uint16_t x453 = 19U;
volatile uint8_t x468 = UINT8_MAX;
uint8_t x476 = 4U;
int32_t t115 = 16861193;
int16_t x483 = -4927;
static int32_t t116 = 0;
static int64_t t119 = 8475135134877527LL;
int32_t x498 = 741215;
static int16_t x499 = -1;
static int32_t t120 = 96;
volatile uint32_t x515 = UINT32_MAX;
int8_t x517 = INT8_MIN;
volatile int32_t x520 = INT32_MIN;
int32_t t125 = -3;
static int8_t x523 = 1;
int32_t t126 = 567740;
static uint64_t x529 = 2167LLU;
int16_t x530 = -3;
uint16_t x532 = 2332U;
int32_t x535 = INT32_MIN;
uint16_t x539 = 5473U;
int8_t x551 = -1;
int64_t x552 = -1LL;
uint16_t x555 = 0U;
int64_t x571 = INT64_MAX;
int8_t x575 = INT8_MIN;
volatile int32_t t138 = -32180;
int16_t x578 = INT16_MIN;
static int32_t x583 = INT32_MAX;
int8_t x584 = -1;
int8_t x590 = INT8_MAX;
int16_t x591 = INT16_MIN;
int8_t x592 = -13;
volatile int32_t t143 = -12890213;
static volatile uint16_t x603 = UINT16_MAX;
volatile int64_t t145 = 1LL;
volatile uint32_t x609 = 15U;
int8_t x610 = INT8_MIN;
volatile int16_t x612 = -3;
int32_t x614 = INT32_MIN;
uint64_t t148 = 288941201801LLU;
int8_t x619 = INT8_MAX;
static int16_t x622 = -47;
int64_t x624 = 8LL;
int32_t x626 = 150;
uint32_t x630 = 4U;
static volatile int16_t x633 = INT16_MIN;
volatile int8_t x639 = -1;
uint8_t x647 = 125U;
int64_t t156 = 4913558415811LL;
uint8_t x650 = UINT8_MAX;
volatile int8_t x654 = INT8_MAX;
int16_t x656 = INT16_MIN;
static volatile int32_t t158 = -6786;
static int64_t t159 = -643760841263563786LL;
volatile uint32_t x672 = UINT32_MAX;
int16_t x684 = 6;
int64_t x688 = -19LL;
static int64_t t165 = -218552424579035497LL;
volatile int64_t x690 = 253LL;
uint8_t x705 = 55U;
int32_t x708 = -1;
int16_t x711 = INT16_MIN;
static int32_t t171 = 7805927;
static uint64_t x720 = UINT64_MAX;
int8_t x724 = INT8_MIN;
int32_t t173 = -7370702;
static volatile int32_t x725 = -6;
int32_t t174 = 5815;
int32_t x729 = INT32_MIN;
volatile int32_t t175 = 0;
int64_t x735 = INT64_MIN;
static int16_t x737 = -1;
static int64_t t177 = 3042231976LL;
static int64_t x746 = INT64_MIN;
volatile int8_t x750 = INT8_MAX;
uint16_t x766 = 44U;
volatile int8_t x768 = INT8_MIN;
int64_t x770 = INT64_MIN;
uint16_t x772 = 2U;
volatile int32_t t184 = -7;
int8_t x774 = -1;
volatile int8_t x786 = 0;
volatile int16_t x787 = INT16_MIN;
int64_t x792 = 11980LL;
int8_t x794 = INT8_MIN;
int32_t x795 = -615723615;
volatile int64_t x800 = INT64_MIN;
static int64_t x807 = INT64_MIN;
static int16_t x809 = INT16_MIN;
uint64_t x815 = 2798266642853LLU;
static int16_t x820 = -72;
uint32_t x822 = 134982949U;
int64_t x823 = INT64_MIN;
volatile int64_t x827 = -3297158221066LL;
volatile int32_t x836 = 12936;
int32_t t199 = 15122963;


void f0(void) {
    	int32_t x2 = -1;
	static uint8_t x3 = UINT8_MAX;
	int8_t x4 = INT8_MIN;
	volatile int32_t t0 = 671112567;

    t0 = (((x1<=x2)>x3)/x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int8_t x5 = -2;
	static uint32_t x7 = 761426588U;
	volatile int8_t x8 = INT8_MIN;

    t1 = (((x5<=x6)>x7)/x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile uint64_t x9 = 19605LLU;
	int16_t x10 = -1;
	int32_t x11 = INT32_MAX;
	int16_t x12 = -71;
	static volatile int32_t t2 = -4195724;

    t2 = (((x9<=x10)>x11)/x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = -1;
	volatile int8_t x14 = 12;
	int32_t x15 = INT32_MIN;
	int32_t x16 = -1;
	volatile int32_t t3 = -50;

    t3 = (((x13<=x14)>x15)/x16);

    if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MIN;
	int64_t x18 = -1LL;
	static int32_t x19 = INT32_MIN;
	volatile uint32_t x20 = 124363U;
	static volatile uint32_t t4 = 71232989U;

    t4 = (((x17<=x18)>x19)/x20);

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x21 = INT32_MIN;
	volatile uint8_t x23 = 102U;
	int16_t x24 = INT16_MIN;
	volatile int32_t t5 = 469333;

    t5 = (((x21<=x22)>x23)/x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MIN;
	int16_t x27 = INT16_MAX;
	static int32_t x28 = 210690236;
	volatile int32_t t6 = 355613;

    t6 = (((x25<=x26)>x27)/x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x29 = INT64_MIN;
	int64_t x30 = INT64_MIN;
	int16_t x31 = 0;
	int16_t x32 = INT16_MAX;
	int32_t t7 = 5;

    t7 = (((x29<=x30)>x31)/x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MIN;
	int32_t x35 = INT32_MIN;

    t8 = (((x33<=x34)>x35)/x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x38 = UINT16_MAX;
	int64_t x39 = -1LL;
	static int32_t t9 = 14;

    t9 = (((x37<=x38)>x39)/x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint16_t x41 = 31822U;
	uint8_t x42 = 10U;
	static uint8_t x43 = 12U;
	uint16_t x44 = 15348U;

    t10 = (((x41<=x42)>x43)/x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x45 = INT32_MIN;
	int16_t x46 = -1;
	int64_t x47 = -821121274LL;
	static int16_t x48 = INT16_MIN;
	int32_t t11 = 1;

    t11 = (((x45<=x46)>x47)/x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = -9928514756622LL;
	static int16_t x50 = INT16_MIN;
	static int16_t x51 = INT16_MIN;
	volatile int32_t t12 = 99;

    t12 = (((x49<=x50)>x51)/x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint8_t x53 = UINT8_MAX;
	uint64_t x54 = 26112593994878LLU;
	uint32_t x55 = 1362U;
	static volatile int32_t t13 = 842;

    t13 = (((x53<=x54)>x55)/x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x57 = 6144U;
	uint64_t x58 = 14LLU;
	uint16_t x59 = UINT16_MAX;
	int8_t x60 = INT8_MAX;
	static volatile int32_t t14 = -122170;

    t14 = (((x57<=x58)>x59)/x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x61 = INT8_MIN;
	uint32_t x62 = UINT32_MAX;
	int8_t x63 = 56;
	int64_t x64 = 217791728179LL;

    t15 = (((x61<=x62)>x63)/x64);

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x65 = -112162532;
	int32_t t16 = 200122;

    t16 = (((x65<=x66)>x67)/x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x70 = -1;
	int16_t x71 = INT16_MIN;
	volatile uint32_t x72 = UINT32_MAX;
	uint32_t t17 = 3716U;

    t17 = (((x69<=x70)>x71)/x72);

    if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x74 = 1650924U;
	int16_t x75 = INT16_MIN;

    t18 = (((x73<=x74)>x75)/x76);

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x78 = -1;
	int64_t x79 = 56LL;
	volatile int64_t x80 = -1LL;
	volatile int64_t t19 = -432620793LL;

    t19 = (((x77<=x78)>x79)/x80);

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = -69;
	int32_t x83 = 0;
	volatile int8_t x84 = -1;

    t20 = (((x81<=x82)>x83)/x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x87 = -29;
	int32_t x88 = -1;
	int32_t t21 = -6771;

    t21 = (((x85<=x86)>x87)/x88);

    if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = INT64_MIN;
	static volatile int16_t x90 = -1;
	int16_t x91 = INT16_MIN;
	volatile int64_t x92 = -1LL;

    t22 = (((x89<=x90)>x91)/x92);

    if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = -1;
	int32_t x94 = 2470;
	int64_t x95 = INT64_MAX;
	static volatile uint64_t x96 = 4748128LLU;
	static uint64_t t23 = 1821368939LLU;

    t23 = (((x93<=x94)>x95)/x96);

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = INT32_MIN;
	uint32_t x98 = UINT32_MAX;
	int16_t x100 = 2431;

    t24 = (((x97<=x98)>x99)/x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint64_t x105 = 309613332692717LLU;
	int32_t x106 = INT32_MIN;
	volatile int64_t x107 = 36943472LL;
	uint32_t x108 = 29635004U;
	uint32_t t25 = 172U;

    t25 = (((x105<=x106)>x107)/x108);

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x109 = 0LL;
	volatile uint32_t x110 = 256708U;
	int8_t x111 = -7;
	int32_t t26 = -7676393;

    t26 = (((x109<=x110)>x111)/x112);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x113 = INT16_MIN;
	int32_t x114 = -1;
	int16_t x115 = INT16_MIN;
	int16_t x116 = INT16_MIN;
	static volatile int32_t t27 = 82072;

    t27 = (((x113<=x114)>x115)/x116);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x117 = UINT64_MAX;
	volatile uint32_t x119 = 4249011U;
	int64_t x120 = -4LL;

    t28 = (((x117<=x118)>x119)/x120);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x122 = INT32_MAX;
	int16_t x123 = INT16_MIN;
	int64_t x124 = INT64_MIN;
	volatile int64_t t29 = -3306423259906888LL;

    t29 = (((x121<=x122)>x123)/x124);

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x126 = UINT32_MAX;
	static int32_t x128 = INT32_MAX;
	volatile int32_t t30 = 4280630;

    t30 = (((x125<=x126)>x127)/x128);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x129 = -1662;
	static int64_t x130 = INT64_MAX;
	static int64_t x131 = INT64_MAX;
	static uint32_t x132 = UINT32_MAX;
	uint32_t t31 = 509217488U;

    t31 = (((x129<=x130)>x131)/x132);

    if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x133 = -3;
	uint32_t x134 = UINT32_MAX;
	static volatile uint8_t x135 = UINT8_MAX;
	static int32_t x136 = -1;
	int32_t t32 = 19275566;

    t32 = (((x133<=x134)>x135)/x136);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x137 = INT64_MIN;
	static int16_t x138 = INT16_MAX;
	int64_t x139 = -1LL;
	volatile uint8_t x140 = UINT8_MAX;

    t33 = (((x137<=x138)>x139)/x140);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x141 = 13;
	uint8_t x142 = 11U;
	volatile int64_t x143 = INT64_MIN;
	int64_t x144 = INT64_MAX;
	volatile int64_t t34 = -97662727LL;

    t34 = (((x141<=x142)>x143)/x144);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x149 = INT64_MAX;
	uint16_t x150 = UINT16_MAX;
	int16_t x151 = INT16_MAX;
	static int32_t x152 = INT32_MIN;
	volatile int32_t t35 = 60;

    t35 = (((x149<=x150)>x151)/x152);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x153 = INT8_MIN;
	int32_t x154 = 63556402;
	static int32_t x155 = INT32_MAX;
	volatile int32_t x156 = INT32_MAX;
	int32_t t36 = -13049;

    t36 = (((x153<=x154)>x155)/x156);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x157 = -1LL;
	static volatile int8_t x158 = INT8_MIN;
	uint64_t x159 = 5312LLU;
	static volatile int32_t x160 = 6;

    t37 = (((x157<=x158)>x159)/x160);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x161 = 30924196LLU;
	uint8_t x163 = 36U;
	int16_t x164 = INT16_MAX;
	volatile int32_t t38 = -1;

    t38 = (((x161<=x162)>x163)/x164);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x166 = -1;
	volatile uint64_t x167 = UINT64_MAX;
	static uint64_t x168 = 3040LLU;
	uint64_t t39 = 669146013489397589LLU;

    t39 = (((x165<=x166)>x167)/x168);

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x169 = INT64_MIN;
	static uint8_t x170 = UINT8_MAX;
	int8_t x171 = 3;
	static volatile int32_t t40 = 0;

    t40 = (((x169<=x170)>x171)/x172);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x173 = 12125738;
	int16_t x175 = INT16_MIN;
	uint8_t x176 = 6U;
	volatile int32_t t41 = 3776474;

    t41 = (((x173<=x174)>x175)/x176);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x177 = 239LLU;
	uint32_t x178 = UINT32_MAX;
	uint32_t x180 = UINT32_MAX;
	volatile uint32_t t42 = 1463U;

    t42 = (((x177<=x178)>x179)/x180);

    if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x181 = 0;
	int64_t x182 = INT64_MAX;
	static uint8_t x183 = 69U;
	uint64_t t43 = 82LLU;

    t43 = (((x181<=x182)>x183)/x184);

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x185 = -208329;
	volatile int16_t x187 = -2;
	static int32_t x188 = 248;

    t44 = (((x185<=x186)>x187)/x188);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x189 = INT8_MAX;
	uint32_t x190 = 0U;
	int16_t x191 = INT16_MAX;
	int8_t x192 = -1;
	volatile int32_t t45 = -206995;

    t45 = (((x189<=x190)>x191)/x192);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x193 = INT64_MAX;
	static int16_t x194 = -1;
	static int64_t x195 = INT64_MAX;
	volatile int64_t x196 = -1LL;
	volatile int64_t t46 = 12320154793049LL;

    t46 = (((x193<=x194)>x195)/x196);

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x197 = -1;
	int8_t x198 = INT8_MAX;
	static int32_t x200 = -1;

    t47 = (((x197<=x198)>x199)/x200);

    if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x201 = 567757;
	int8_t x202 = 0;
	static uint64_t x203 = 3339LLU;
	static int64_t x204 = INT64_MAX;
	volatile int64_t t48 = 28177LL;

    t48 = (((x201<=x202)>x203)/x204);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x205 = 120501U;
	int64_t x206 = INT64_MIN;
	static volatile int32_t x207 = INT32_MIN;
	int32_t x208 = -9;
	int32_t t49 = 540177;

    t49 = (((x205<=x206)>x207)/x208);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x209 = -1;
	int16_t x210 = INT16_MAX;
	volatile uint32_t x211 = UINT32_MAX;
	uint32_t x212 = UINT32_MAX;
	uint32_t t50 = 232952U;

    t50 = (((x209<=x210)>x211)/x212);

    if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x213 = 3362922926735571424LLU;
	uint64_t x214 = 41786LLU;
	uint64_t x215 = 0LLU;
	uint16_t x216 = UINT16_MAX;
	int32_t t51 = -2005222;

    t51 = (((x213<=x214)>x215)/x216);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x217 = -138722976;
	uint64_t x218 = 700742441893714LLU;
	volatile int8_t x219 = -1;
	volatile int64_t t52 = 3902160LL;

    t52 = (((x217<=x218)>x219)/x220);

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x223 = -1;
	static uint8_t x224 = 6U;
	int32_t t53 = -33791;

    t53 = (((x221<=x222)>x223)/x224);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x226 = UINT32_MAX;
	uint64_t x228 = UINT64_MAX;

    t54 = (((x225<=x226)>x227)/x228);

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x230 = 2;
	volatile int8_t x232 = INT8_MAX;
	volatile int32_t t55 = 771882555;

    t55 = (((x229<=x230)>x231)/x232);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x233 = INT16_MAX;
	int8_t x234 = INT8_MIN;
	int8_t x235 = INT8_MIN;
	volatile int16_t x236 = 923;
	volatile int32_t t56 = 36;

    t56 = (((x233<=x234)>x235)/x236);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x238 = 1205;
	volatile int32_t x239 = INT32_MAX;
	volatile uint16_t x240 = 13U;
	int32_t t57 = 2249;

    t57 = (((x237<=x238)>x239)/x240);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x241 = 13083780332632LL;
	static int32_t x242 = INT32_MIN;
	uint64_t x243 = 84413940974965LLU;
	static uint16_t x244 = 672U;
	volatile int32_t t58 = 16352567;

    t58 = (((x241<=x242)>x243)/x244);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x245 = INT8_MIN;
	uint32_t x246 = UINT32_MAX;
	int32_t x247 = -1;
	uint64_t x248 = 343778843594074520LLU;
	uint64_t t59 = 212198969LLU;

    t59 = (((x245<=x246)>x247)/x248);

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x249 = -1;
	int8_t x250 = INT8_MAX;
	volatile uint32_t x252 = UINT32_MAX;
	static uint32_t t60 = 493230U;

    t60 = (((x249<=x250)>x251)/x252);

    if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x253 = 3U;
	int64_t x255 = 25018951841300LL;
	int16_t x256 = INT16_MIN;
	volatile int32_t t61 = 1454;

    t61 = (((x253<=x254)>x255)/x256);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x257 = INT16_MAX;
	static volatile int16_t x259 = -1744;

    t62 = (((x257<=x258)>x259)/x260);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x262 = -3;
	int8_t x263 = INT8_MIN;
	volatile int64_t x264 = 5222883492LL;

    t63 = (((x261<=x262)>x263)/x264);

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x265 = 1051987891U;
	int32_t x266 = INT32_MIN;
	int64_t x267 = INT64_MIN;
	static volatile int64_t t64 = -15870454323193189LL;

    t64 = (((x265<=x266)>x267)/x268);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x269 = INT64_MIN;
	volatile int32_t x270 = INT32_MAX;
	static int8_t x271 = 1;
	static int32_t x272 = INT32_MIN;
	static int32_t t65 = 1491;

    t65 = (((x269<=x270)>x271)/x272);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint8_t x273 = UINT8_MAX;
	volatile uint32_t x274 = 423836961U;
	volatile int32_t x276 = -1;
	int32_t t66 = -226;

    t66 = (((x273<=x274)>x275)/x276);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x277 = INT16_MIN;
	static uint16_t x279 = UINT16_MAX;
	int8_t x280 = INT8_MIN;

    t67 = (((x277<=x278)>x279)/x280);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x281 = -6;
	uint16_t x282 = UINT16_MAX;
	volatile uint32_t x283 = 78189U;
	static uint64_t x284 = 69328806LLU;
	volatile uint64_t t68 = 7LLU;

    t68 = (((x281<=x282)>x283)/x284);

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x285 = INT16_MIN;
	int8_t x286 = INT8_MIN;
	volatile uint64_t x287 = 1LLU;
	static uint32_t x288 = 5U;

    t69 = (((x285<=x286)>x287)/x288);

    if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x289 = INT8_MIN;
	int64_t x290 = -1LL;
	volatile uint32_t x292 = 120U;
	uint32_t t70 = 9298U;

    t70 = (((x289<=x290)>x291)/x292);

    if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x294 = UINT32_MAX;
	uint64_t x295 = 10225LLU;
	int32_t x296 = INT32_MAX;

    t71 = (((x293<=x294)>x295)/x296);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x297 = UINT8_MAX;
	int16_t x298 = -1;
	int16_t x299 = INT16_MIN;
	volatile int32_t t72 = 150;

    t72 = (((x297<=x298)>x299)/x300);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x301 = INT8_MIN;
	int64_t x302 = -3303905297240108LL;
	int32_t x303 = INT32_MIN;
	volatile int32_t t73 = 1;

    t73 = (((x301<=x302)>x303)/x304);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x305 = 63;
	volatile uint8_t x306 = 13U;
	uint64_t x307 = UINT64_MAX;
	int32_t x308 = 32158617;
	int32_t t74 = -245614;

    t74 = (((x305<=x306)>x307)/x308);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x310 = INT32_MIN;
	volatile int32_t x311 = -1;
	static volatile uint16_t x312 = UINT16_MAX;

    t75 = (((x309<=x310)>x311)/x312);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x313 = 175407130LLU;
	int64_t x314 = INT64_MIN;
	volatile int64_t x315 = -1LL;
	static volatile uint8_t x316 = UINT8_MAX;
	volatile int32_t t76 = 13208;

    t76 = (((x313<=x314)>x315)/x316);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int64_t x317 = INT64_MIN;
	int8_t x318 = 0;
	volatile int8_t x319 = 24;
	uint16_t x320 = UINT16_MAX;
	volatile int32_t t77 = -175867054;

    t77 = (((x317<=x318)>x319)/x320);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x322 = 0LLU;
	int8_t x323 = INT8_MIN;
	static int16_t x324 = INT16_MAX;
	int32_t t78 = -339613012;

    t78 = (((x321<=x322)>x323)/x324);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x325 = -2;
	int64_t x327 = INT64_MIN;
	int32_t x328 = INT32_MIN;

    t79 = (((x325<=x326)>x327)/x328);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x329 = INT8_MIN;
	volatile int32_t x331 = INT32_MIN;
	int32_t x332 = 42310728;
	int32_t t80 = 7714360;

    t80 = (((x329<=x330)>x331)/x332);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint64_t x333 = 7183LLU;
	static uint32_t x334 = UINT32_MAX;
	int32_t x335 = INT32_MIN;
	volatile int32_t x336 = -34460335;
	static int32_t t81 = 17707;

    t81 = (((x333<=x334)>x335)/x336);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x341 = INT8_MIN;
	static int32_t x343 = -1;
	int64_t x344 = INT64_MIN;
	int64_t t82 = -884434645513335LL;

    t82 = (((x341<=x342)>x343)/x344);

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x345 = -327LL;
	int8_t x347 = INT8_MAX;
	volatile int16_t x348 = INT16_MIN;
	volatile int32_t t83 = 2838784;

    t83 = (((x345<=x346)>x347)/x348);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x350 = 1;
	volatile int32_t t84 = 331150816;

    t84 = (((x349<=x350)>x351)/x352);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x354 = -1;
	uint64_t x355 = 4119822LLU;
	int16_t x356 = INT16_MIN;

    t85 = (((x353<=x354)>x355)/x356);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x357 = 11U;
	int32_t x358 = INT32_MIN;
	int8_t x359 = INT8_MIN;
	uint8_t x360 = 126U;
	volatile int32_t t86 = 1591797;

    t86 = (((x357<=x358)>x359)/x360);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint64_t x361 = 594599733366369819LLU;
	static int32_t x362 = 1;
	int16_t x363 = -1;
	static int8_t x364 = -1;
	int32_t t87 = 4792693;

    t87 = (((x361<=x362)>x363)/x364);

    if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x365 = -7762845;
	uint64_t x366 = 140520LLU;
	int32_t x367 = INT32_MIN;
	int32_t x368 = INT32_MIN;
	volatile int32_t t88 = -1;

    t88 = (((x365<=x366)>x367)/x368);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x369 = -53;
	volatile int8_t x370 = INT8_MIN;
	volatile int32_t x371 = -1;
	uint32_t x372 = 458211709U;
	volatile uint32_t t89 = 61811924U;

    t89 = (((x369<=x370)>x371)/x372);

    if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint8_t x374 = UINT8_MAX;
	static int8_t x375 = 32;
	int16_t x376 = INT16_MIN;
	int32_t t90 = -2838091;

    t90 = (((x373<=x374)>x375)/x376);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x378 = 6055482355014LLU;
	static int16_t x379 = INT16_MAX;
	int16_t x380 = INT16_MIN;
	static volatile int32_t t91 = 2848;

    t91 = (((x377<=x378)>x379)/x380);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x381 = -484;
	uint8_t x382 = UINT8_MAX;
	int8_t x384 = INT8_MIN;

    t92 = (((x381<=x382)>x383)/x384);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x385 = -1LL;
	int32_t x386 = INT32_MAX;
	volatile int32_t t93 = -82104;

    t93 = (((x385<=x386)>x387)/x388);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x389 = 978726942759583487LLU;
	volatile uint32_t x391 = 841464022U;
	volatile int32_t t94 = 364294;

    t94 = (((x389<=x390)>x391)/x392);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x393 = INT16_MIN;
	static volatile int8_t x396 = -51;
	int32_t t95 = -5812291;

    t95 = (((x393<=x394)>x395)/x396);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x398 = INT64_MIN;
	volatile int64_t x399 = -2781919LL;
	int8_t x400 = INT8_MIN;
	volatile int32_t t96 = -1253430;

    t96 = (((x397<=x398)>x399)/x400);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint64_t x401 = 3594LLU;
	uint16_t x402 = 1063U;
	volatile uint32_t x403 = 4219555U;
	int64_t x404 = -907LL;
	volatile int64_t t97 = 5815202835762129LL;

    t97 = (((x401<=x402)>x403)/x404);

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x405 = 30582502U;
	uint64_t x407 = UINT64_MAX;
	int64_t x408 = -1LL;

    t98 = (((x405<=x406)>x407)/x408);

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x410 = INT8_MIN;
	volatile int8_t x411 = -1;
	int64_t x412 = INT64_MIN;
	volatile int64_t t99 = -99LL;

    t99 = (((x409<=x410)>x411)/x412);

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x414 = UINT32_MAX;
	uint64_t x415 = UINT64_MAX;
	int16_t x416 = INT16_MAX;
	int32_t t100 = -84693;

    t100 = (((x413<=x414)>x415)/x416);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x417 = 3U;
	int16_t x419 = 4;
	volatile int8_t x420 = 45;
	int32_t t101 = -56973614;

    t101 = (((x417<=x418)>x419)/x420);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x421 = 3487;
	int16_t x424 = -12768;
	static volatile int32_t t102 = 48474086;

    t102 = (((x421<=x422)>x423)/x424);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x425 = -33;
	volatile int16_t x426 = INT16_MAX;
	int8_t x428 = -1;
	volatile int32_t t103 = -32;

    t103 = (((x425<=x426)>x427)/x428);

    if (t103 != -1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x431 = 38U;
	volatile int32_t x432 = INT32_MIN;
	int32_t t104 = 0;

    t104 = (((x429<=x430)>x431)/x432);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x433 = INT8_MAX;
	int16_t x436 = -1;
	volatile int32_t t105 = -7718;

    t105 = (((x433<=x434)>x435)/x436);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x437 = 1;
	uint8_t x438 = UINT8_MAX;
	static int16_t x440 = INT16_MIN;

    t106 = (((x437<=x438)>x439)/x440);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x441 = -1100;
	int8_t x442 = 1;
	uint16_t x444 = UINT16_MAX;
	static volatile int32_t t107 = 51693;

    t107 = (((x441<=x442)>x443)/x444);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int8_t x445 = 1;
	int32_t x446 = -80359;
	volatile int32_t x447 = -1;
	int16_t x448 = INT16_MIN;
	int32_t t108 = -9119098;

    t108 = (((x445<=x446)>x447)/x448);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x449 = INT32_MAX;
	int16_t x452 = INT16_MAX;
	volatile int32_t t109 = 548209;

    t109 = (((x449<=x450)>x451)/x452);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x454 = 2U;
	int32_t x455 = INT32_MIN;
	static volatile int32_t x456 = 1;
	volatile int32_t t110 = 93015;

    t110 = (((x453<=x454)>x455)/x456);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x457 = INT64_MAX;
	int16_t x458 = -1;
	int64_t x459 = 1LL;
	static int32_t x460 = INT32_MIN;
	volatile int32_t t111 = -2784421;

    t111 = (((x457<=x458)>x459)/x460);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x461 = 3U;
	int64_t x462 = INT64_MIN;
	int64_t x463 = INT64_MIN;
	volatile uint64_t x464 = 2764556611LLU;
	uint64_t t112 = 1543263168147035LLU;

    t112 = (((x461<=x462)>x463)/x464);

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x465 = -1;
	volatile int8_t x466 = INT8_MIN;
	int64_t x467 = INT64_MIN;
	static int32_t t113 = -13;

    t113 = (((x465<=x466)>x467)/x468);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x473 = UINT16_MAX;
	int16_t x474 = INT16_MIN;
	int8_t x475 = INT8_MAX;
	volatile int32_t t114 = -563;

    t114 = (((x473<=x474)>x475)/x476);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x477 = -370616512;
	int64_t x478 = INT64_MIN;
	uint64_t x479 = 91435401408LLU;
	static int16_t x480 = INT16_MAX;

    t115 = (((x477<=x478)>x479)/x480);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int64_t x481 = INT64_MIN;
	volatile int8_t x482 = -1;
	int16_t x484 = -11;

    t116 = (((x481<=x482)>x483)/x484);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x485 = 262386690;
	int64_t x486 = INT64_MIN;
	uint64_t x487 = UINT64_MAX;
	int16_t x488 = -1;
	volatile int32_t t117 = 751395;

    t117 = (((x485<=x486)>x487)/x488);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x489 = INT8_MAX;
	int32_t x490 = INT32_MAX;
	uint32_t x491 = 615115U;
	uint32_t x492 = UINT32_MAX;
	uint32_t t118 = 4U;

    t118 = (((x489<=x490)>x491)/x492);

    if (t118 != 0U) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint64_t x493 = 454019080221LLU;
	int16_t x494 = -2147;
	static int8_t x495 = 2;
	int64_t x496 = INT64_MIN;

    t119 = (((x493<=x494)>x495)/x496);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x497 = INT8_MIN;
	int8_t x500 = INT8_MIN;

    t120 = (((x497<=x498)>x499)/x500);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x501 = 30U;
	volatile uint32_t x502 = UINT32_MAX;
	int32_t x503 = INT32_MIN;
	int16_t x504 = INT16_MIN;
	int32_t t121 = 0;

    t121 = (((x501<=x502)>x503)/x504);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x505 = 1;
	int64_t x506 = -1LL;
	volatile int64_t x507 = INT64_MIN;
	int64_t x508 = -1LL;
	static volatile int64_t t122 = 61458LL;

    t122 = (((x505<=x506)>x507)/x508);

    if (t122 != -1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x509 = INT64_MIN;
	int8_t x510 = INT8_MIN;
	static int8_t x511 = -17;
	int16_t x512 = 1693;
	static int32_t t123 = 39551;

    t123 = (((x509<=x510)>x511)/x512);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x513 = -1;
	static int32_t x514 = -1;
	int64_t x516 = 505976162LL;
	int64_t t124 = 122532LL;

    t124 = (((x513<=x514)>x515)/x516);

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x518 = INT8_MAX;
	int8_t x519 = 1;

    t125 = (((x517<=x518)>x519)/x520);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x521 = INT32_MIN;
	static int16_t x522 = 160;
	uint8_t x524 = UINT8_MAX;

    t126 = (((x521<=x522)>x523)/x524);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x525 = INT64_MIN;
	int64_t x526 = 539007587LL;
	int16_t x527 = 291;
	uint8_t x528 = UINT8_MAX;
	volatile int32_t t127 = -269819538;

    t127 = (((x525<=x526)>x527)/x528);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x531 = INT32_MAX;
	volatile int32_t t128 = -258778684;

    t128 = (((x529<=x530)>x531)/x532);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x533 = INT32_MIN;
	int16_t x534 = INT16_MIN;
	int64_t x536 = 1932119169378LL;
	static int64_t t129 = 1450230033764765757LL;

    t129 = (((x533<=x534)>x535)/x536);

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x537 = -1258148061429LL;
	volatile int16_t x538 = 1351;
	volatile uint64_t x540 = 33188LLU;
	uint64_t t130 = 9563612LLU;

    t130 = (((x537<=x538)>x539)/x540);

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x545 = 10U;
	int32_t x546 = INT32_MIN;
	volatile uint16_t x547 = UINT16_MAX;
	int16_t x548 = 1838;
	volatile int32_t t131 = -4843394;

    t131 = (((x545<=x546)>x547)/x548);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x549 = INT32_MIN;
	int16_t x550 = -1;
	static int64_t t132 = 32734LL;

    t132 = (((x549<=x550)>x551)/x552);

    if (t132 != -1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x553 = UINT16_MAX;
	int16_t x554 = -1;
	int8_t x556 = 9;
	int32_t t133 = 9663209;

    t133 = (((x553<=x554)>x555)/x556);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x557 = UINT32_MAX;
	uint8_t x558 = UINT8_MAX;
	int32_t x559 = -2387;
	int64_t x560 = 191944101LL;
	volatile int64_t t134 = -1963847903LL;

    t134 = (((x557<=x558)>x559)/x560);

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x561 = 3056024U;
	static int8_t x562 = INT8_MIN;
	volatile uint64_t x563 = UINT64_MAX;
	uint32_t x564 = 111773217U;
	volatile uint32_t t135 = 9078502U;

    t135 = (((x561<=x562)>x563)/x564);

    if (t135 != 0U) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x565 = 282756383LLU;
	int64_t x566 = -64614LL;
	uint16_t x567 = UINT16_MAX;
	volatile int32_t x568 = INT32_MAX;
	volatile int32_t t136 = -1055215;

    t136 = (((x565<=x566)>x567)/x568);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x569 = INT8_MIN;
	int16_t x570 = INT16_MAX;
	static int8_t x572 = INT8_MIN;
	int32_t t137 = 5941;

    t137 = (((x569<=x570)>x571)/x572);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x573 = INT64_MIN;
	volatile int32_t x574 = 3;
	uint16_t x576 = 12486U;

    t138 = (((x573<=x574)>x575)/x576);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x577 = INT32_MIN;
	int8_t x579 = INT8_MAX;
	static int16_t x580 = -1;
	volatile int32_t t139 = -250808255;

    t139 = (((x577<=x578)>x579)/x580);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x581 = 373LLU;
	uint8_t x582 = 102U;
	int32_t t140 = -1;

    t140 = (((x581<=x582)>x583)/x584);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x585 = INT16_MIN;
	uint8_t x586 = 1U;
	int16_t x587 = INT16_MIN;
	uint32_t x588 = 1845184756U;
	volatile uint32_t t141 = 45887U;

    t141 = (((x585<=x586)>x587)/x588);

    if (t141 != 0U) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t x589 = 2931505LL;
	int32_t t142 = 62;

    t142 = (((x589<=x590)>x591)/x592);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x593 = UINT8_MAX;
	int64_t x594 = -1LL;
	uint32_t x595 = UINT32_MAX;
	int8_t x596 = -1;

    t143 = (((x593<=x594)>x595)/x596);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x597 = INT64_MIN;
	volatile int64_t x598 = INT64_MIN;
	volatile uint16_t x599 = 252U;
	int64_t x600 = INT64_MIN;
	volatile int64_t t144 = -48635LL;

    t144 = (((x597<=x598)>x599)/x600);

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x601 = INT32_MIN;
	int64_t x602 = INT64_MIN;
	int64_t x604 = -1LL;

    t145 = (((x601<=x602)>x603)/x604);

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x605 = INT16_MIN;
	static volatile uint8_t x606 = UINT8_MAX;
	volatile int8_t x607 = INT8_MAX;
	volatile int32_t x608 = 26459640;
	static volatile int32_t t146 = 15;

    t146 = (((x605<=x606)>x607)/x608);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x611 = UINT16_MAX;
	int32_t t147 = -433;

    t147 = (((x609<=x610)>x611)/x612);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x613 = -9381;
	static int8_t x615 = -5;
	volatile uint64_t x616 = 21850426913192LLU;

    t148 = (((x613<=x614)>x615)/x616);

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint32_t x617 = 4630U;
	int32_t x618 = -1;
	static volatile int32_t x620 = INT32_MIN;
	int32_t t149 = 5;

    t149 = (((x617<=x618)>x619)/x620);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x621 = INT64_MIN;
	uint8_t x623 = 1U;
	int64_t t150 = 97516LL;

    t150 = (((x621<=x622)>x623)/x624);

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x625 = INT32_MIN;
	static uint32_t x627 = 463U;
	int16_t x628 = -1;
	static volatile int32_t t151 = -13802;

    t151 = (((x625<=x626)>x627)/x628);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x629 = INT16_MAX;
	volatile int16_t x631 = INT16_MIN;
	int8_t x632 = -19;
	int32_t t152 = -509460;

    t152 = (((x629<=x630)>x631)/x632);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x634 = 1U;
	static int8_t x635 = INT8_MIN;
	int16_t x636 = INT16_MAX;
	int32_t t153 = 24628;

    t153 = (((x633<=x634)>x635)/x636);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x637 = INT64_MIN;
	int64_t x638 = INT64_MAX;
	int8_t x640 = INT8_MAX;
	static volatile int32_t t154 = -3381591;

    t154 = (((x637<=x638)>x639)/x640);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x641 = 276468743058684652LL;
	int8_t x642 = INT8_MAX;
	int8_t x643 = INT8_MIN;
	uint32_t x644 = UINT32_MAX;
	volatile uint32_t t155 = 36365806U;

    t155 = (((x641<=x642)>x643)/x644);

    if (t155 != 0U) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x645 = INT64_MAX;
	volatile uint32_t x646 = 688348786U;
	int64_t x648 = 549810474406596431LL;

    t156 = (((x645<=x646)>x647)/x648);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x649 = INT64_MIN;
	volatile int16_t x651 = -1;
	int16_t x652 = -1;
	int32_t t157 = 1;

    t157 = (((x649<=x650)>x651)/x652);

    if (t157 != -1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x653 = 12073;
	uint64_t x655 = UINT64_MAX;

    t158 = (((x653<=x654)>x655)/x656);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x657 = -142;
	static uint8_t x658 = 39U;
	uint16_t x659 = 14944U;
	int64_t x660 = 20229958LL;

    t159 = (((x657<=x658)>x659)/x660);

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x665 = 9265885U;
	uint64_t x666 = UINT64_MAX;
	uint16_t x667 = UINT16_MAX;
	int16_t x668 = INT16_MIN;
	volatile int32_t t160 = -140878008;

    t160 = (((x665<=x666)>x667)/x668);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x669 = INT64_MIN;
	volatile int64_t x670 = 60384LL;
	uint64_t x671 = 20812064697806392LLU;
	uint32_t t161 = 2U;

    t161 = (((x669<=x670)>x671)/x672);

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x673 = 1116553;
	int32_t x674 = INT32_MAX;
	volatile uint16_t x675 = 1409U;
	static volatile uint16_t x676 = UINT16_MAX;
	volatile int32_t t162 = -193;

    t162 = (((x673<=x674)>x675)/x676);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x677 = 712U;
	static volatile uint64_t x678 = 117099416570LLU;
	static uint32_t x679 = 112U;
	static uint16_t x680 = 382U;
	static int32_t t163 = 192422446;

    t163 = (((x677<=x678)>x679)/x680);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x681 = UINT64_MAX;
	static uint32_t x682 = 751U;
	int64_t x683 = 265307106917795397LL;
	volatile int32_t t164 = 108;

    t164 = (((x681<=x682)>x683)/x684);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x685 = INT32_MAX;
	static int32_t x686 = INT32_MIN;
	uint8_t x687 = 8U;

    t165 = (((x685<=x686)>x687)/x688);

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x689 = INT8_MIN;
	static volatile uint64_t x691 = 9797178192670047LLU;
	int16_t x692 = INT16_MIN;
	int32_t t166 = 3482108;

    t166 = (((x689<=x690)>x691)/x692);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x697 = 8555601554LLU;
	uint64_t x698 = 1430561LLU;
	volatile int64_t x699 = -1LL;
	int16_t x700 = -190;
	int32_t t167 = -14;

    t167 = (((x697<=x698)>x699)/x700);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint16_t x701 = 1388U;
	int32_t x702 = INT32_MAX;
	volatile uint8_t x703 = 34U;
	uint64_t x704 = UINT64_MAX;
	volatile uint64_t t168 = 172027042746793103LLU;

    t168 = (((x701<=x702)>x703)/x704);

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x706 = -36235;
	volatile uint32_t x707 = UINT32_MAX;
	int32_t t169 = -736;

    t169 = (((x705<=x706)>x707)/x708);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x709 = 830;
	static uint16_t x710 = 13U;
	uint16_t x712 = 11677U;
	int32_t t170 = 41745;

    t170 = (((x709<=x710)>x711)/x712);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x713 = UINT32_MAX;
	int64_t x714 = INT64_MIN;
	int8_t x715 = -1;
	static volatile int16_t x716 = 8;

    t171 = (((x713<=x714)>x715)/x716);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x717 = -1;
	int16_t x718 = -1;
	int64_t x719 = -320498117104031046LL;
	uint64_t t172 = 8133103562216775LLU;

    t172 = (((x717<=x718)>x719)/x720);

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x721 = INT32_MAX;
	static int32_t x722 = INT32_MAX;
	static int8_t x723 = INT8_MIN;

    t173 = (((x721<=x722)>x723)/x724);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x726 = UINT16_MAX;
	static volatile uint8_t x727 = 0U;
	static uint8_t x728 = 51U;

    t174 = (((x725<=x726)>x727)/x728);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint8_t x730 = 0U;
	uint16_t x731 = UINT16_MAX;
	int8_t x732 = INT8_MIN;

    t175 = (((x729<=x730)>x731)/x732);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int64_t x733 = -1LL;
	uint8_t x734 = 1U;
	volatile int32_t x736 = -1;
	volatile int32_t t176 = -298250307;

    t176 = (((x733<=x734)>x735)/x736);

    if (t176 != -1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x738 = UINT8_MAX;
	int64_t x739 = -313409LL;
	int64_t x740 = INT64_MIN;

    t177 = (((x737<=x738)>x739)/x740);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x741 = INT16_MAX;
	int32_t x742 = INT32_MIN;
	uint16_t x743 = 10U;
	uint8_t x744 = UINT8_MAX;
	volatile int32_t t178 = 28;

    t178 = (((x741<=x742)>x743)/x744);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x745 = 22;
	uint32_t x747 = 0U;
	uint8_t x748 = 3U;
	int32_t t179 = -545467;

    t179 = (((x745<=x746)>x747)/x748);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x749 = -44;
	static int64_t x751 = INT64_MIN;
	static volatile int64_t x752 = INT64_MAX;
	int64_t t180 = -4505130850715408LL;

    t180 = (((x749<=x750)>x751)/x752);

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x753 = 142455U;
	uint64_t x754 = 962226LLU;
	static int32_t x755 = INT32_MIN;
	volatile int8_t x756 = -1;
	volatile int32_t t181 = 130036263;

    t181 = (((x753<=x754)>x755)/x756);

    if (t181 != -1) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int32_t x757 = INT32_MIN;
	uint8_t x758 = 17U;
	int32_t x759 = -237;
	int32_t x760 = INT32_MIN;
	volatile int32_t t182 = -56;

    t182 = (((x757<=x758)>x759)/x760);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x765 = INT32_MAX;
	volatile uint8_t x767 = 124U;
	int32_t t183 = -10936;

    t183 = (((x765<=x766)>x767)/x768);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x769 = -1;
	volatile int8_t x771 = -1;

    t184 = (((x769<=x770)>x771)/x772);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x773 = -1;
	uint64_t x775 = UINT64_MAX;
	volatile uint32_t x776 = 12047U;
	uint32_t t185 = 541U;

    t185 = (((x773<=x774)>x775)/x776);

    if (t185 != 0U) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x777 = 14167U;
	static uint64_t x778 = 1721019330314LLU;
	volatile uint32_t x779 = 7564839U;
	static int64_t x780 = 4287304422LL;
	int64_t t186 = 90549LL;

    t186 = (((x777<=x778)>x779)/x780);

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x785 = INT8_MAX;
	uint8_t x788 = 27U;
	volatile int32_t t187 = 382;

    t187 = (((x785<=x786)>x787)/x788);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x789 = INT64_MIN;
	int32_t x790 = -1;
	int8_t x791 = -1;
	static volatile int64_t t188 = -2060392850793554831LL;

    t188 = (((x789<=x790)>x791)/x792);

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x793 = -1;
	int16_t x796 = -22;
	static volatile int32_t t189 = 13;

    t189 = (((x793<=x794)>x795)/x796);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x797 = UINT64_MAX;
	static volatile int64_t x798 = -22934708953816LL;
	static uint8_t x799 = 0U;
	int64_t t190 = -140LL;

    t190 = (((x797<=x798)>x799)/x800);

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x801 = INT32_MIN;
	volatile int16_t x802 = INT16_MIN;
	volatile int32_t x803 = 579;
	int8_t x804 = INT8_MIN;
	int32_t t191 = -694;

    t191 = (((x801<=x802)>x803)/x804);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint32_t x805 = UINT32_MAX;
	static uint32_t x806 = UINT32_MAX;
	int32_t x808 = INT32_MAX;
	int32_t t192 = -1;

    t192 = (((x805<=x806)>x807)/x808);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x810 = -4;
	uint32_t x811 = UINT32_MAX;
	uint16_t x812 = 2057U;
	int32_t t193 = 1230542;

    t193 = (((x809<=x810)>x811)/x812);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x813 = 1336U;
	int16_t x814 = 116;
	uint64_t x816 = 3LLU;
	volatile uint64_t t194 = 183382938LLU;

    t194 = (((x813<=x814)>x815)/x816);

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint16_t x817 = 45U;
	int8_t x818 = INT8_MIN;
	volatile int32_t x819 = INT32_MAX;
	int32_t t195 = -704;

    t195 = (((x817<=x818)>x819)/x820);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x821 = INT64_MAX;
	uint16_t x824 = 821U;
	int32_t t196 = -159871;

    t196 = (((x821<=x822)>x823)/x824);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x825 = INT64_MIN;
	int32_t x826 = INT32_MAX;
	volatile int64_t x828 = -1351872020657LL;
	volatile int64_t t197 = 21334417919010064LL;

    t197 = (((x825<=x826)>x827)/x828);

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x829 = UINT32_MAX;
	int16_t x830 = -1;
	int32_t x831 = INT32_MIN;
	static int64_t x832 = INT64_MIN;
	int64_t t198 = -1968398912986LL;

    t198 = (((x829<=x830)>x831)/x832);

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x833 = -8372LL;
	uint64_t x834 = 80112019270023126LLU;
	volatile uint64_t x835 = UINT64_MAX;

    t199 = (((x833<=x834)>x835)/x836);

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



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

int32_t x2 = INT32_MAX;
int8_t x5 = -1;
static int64_t x6 = INT64_MAX;
static volatile int8_t x14 = 7;
volatile int32_t t4 = -299171;
int32_t x21 = INT32_MIN;
volatile int8_t x28 = -45;
static int32_t t6 = 1;
int32_t x29 = INT32_MIN;
static uint8_t x31 = UINT8_MAX;
int64_t x37 = INT64_MAX;
int16_t x38 = 1;
int32_t x42 = INT32_MAX;
int16_t x44 = -1;
volatile int16_t x53 = INT16_MIN;
int32_t x56 = 21;
int16_t x61 = 12689;
int16_t x78 = 0;
int32_t x82 = INT32_MIN;
int64_t x85 = INT64_MIN;
int32_t t22 = 10;
int32_t x93 = INT32_MIN;
int64_t x94 = -853LL;
volatile int64_t x98 = INT64_MIN;
static uint32_t x99 = UINT32_MAX;
static volatile uint16_t x102 = UINT16_MAX;
uint32_t x111 = 30968096U;
uint64_t x113 = UINT64_MAX;
uint16_t x128 = 3U;
int16_t x146 = INT16_MIN;
volatile int32_t t36 = 19104742;
uint64_t x152 = 1120949LLU;
static int16_t x164 = -1;
static volatile int8_t x169 = INT8_MAX;
int64_t x186 = INT64_MIN;
int64_t x191 = -1LL;
int32_t x194 = INT32_MIN;
int8_t x200 = INT8_MIN;
volatile int32_t t49 = -9966;
volatile int32_t x204 = INT32_MIN;
static volatile int32_t x206 = INT32_MAX;
volatile int8_t x208 = INT8_MAX;
int32_t t52 = 360437673;
static int64_t x213 = -1LL;
static volatile uint32_t x216 = 71402713U;
static int8_t x217 = -2;
static uint8_t x220 = 6U;
uint8_t x223 = 12U;
static int32_t t56 = 975;
int16_t x231 = -678;
int64_t x240 = -166404437835LL;
static int16_t x252 = -1;
static volatile uint16_t x257 = UINT16_MAX;
uint8_t x259 = 14U;
static uint16_t x261 = 22120U;
uint8_t x266 = 15U;
volatile int32_t x267 = -47891;
volatile int8_t x268 = INT8_MIN;
int64_t x276 = -1LL;
static int32_t t68 = 5;
uint16_t x287 = UINT16_MAX;
int64_t x293 = INT64_MIN;
uint32_t x294 = UINT32_MAX;
static int64_t x301 = INT64_MIN;
volatile int64_t x304 = -1LL;
static int32_t t75 = 84842;
uint32_t x308 = 8U;
int32_t t76 = -1;
int32_t x315 = INT32_MIN;
static int16_t x328 = INT16_MAX;
volatile uint16_t x329 = UINT16_MAX;
int32_t t83 = 1394786;
int32_t t84 = 1;
int16_t x351 = INT16_MIN;
volatile uint64_t x353 = 19LLU;
int32_t t89 = 172;
int32_t t90 = 30378267;
volatile int32_t x365 = INT32_MIN;
int16_t x366 = INT16_MIN;
uint64_t x375 = 273739612010578203LLU;
int8_t x378 = INT8_MIN;
volatile int64_t x385 = 134982655535131LL;
int8_t x390 = -1;
static volatile int32_t t98 = -40031326;
int8_t x397 = INT8_MAX;
int16_t x399 = -173;
volatile int32_t t99 = 6;
uint64_t x401 = 6485921401083LLU;
uint16_t x402 = 22841U;
int32_t x411 = INT32_MAX;
uint64_t x417 = UINT64_MAX;
int64_t x421 = INT64_MIN;
static int32_t x430 = INT32_MAX;
uint32_t x431 = UINT32_MAX;
int32_t t107 = 8876;
static int64_t x444 = 16383798113064253LL;
uint16_t x448 = 36U;
int32_t t111 = -10211;
volatile int32_t x452 = -1;
volatile int32_t t113 = 150838;
static int16_t x464 = 3;
static int32_t x472 = -9;
static volatile int8_t x476 = 0;
volatile int64_t x490 = INT64_MAX;
int64_t x498 = -2823917894LL;
int8_t x500 = INT8_MIN;
static int32_t t124 = -14858985;
uint16_t x501 = UINT16_MAX;
int16_t x505 = INT16_MIN;
int64_t x506 = -1LL;
int32_t x508 = -1;
static int32_t t126 = 296336;
static int32_t t127 = -302809;
static uint32_t x514 = 643U;
volatile int64_t x515 = INT64_MAX;
uint8_t x516 = 5U;
static int16_t x517 = -150;
int8_t x518 = -1;
int16_t x520 = -1;
volatile uint64_t x522 = 490706LLU;
static int32_t t132 = -2012861;
int32_t x535 = 6956286;
static int32_t t133 = -435303;
int16_t x539 = INT16_MAX;
uint64_t x540 = UINT64_MAX;
int64_t x541 = INT64_MIN;
int64_t x545 = INT64_MAX;
uint64_t x546 = 225276LLU;
static int16_t x547 = -4;
volatile int32_t t136 = -495311;
volatile int8_t x550 = INT8_MIN;
uint64_t x551 = 116LLU;
static uint16_t x562 = 450U;
int32_t t140 = 191;
int16_t x567 = 122;
volatile int32_t x569 = 2;
int32_t x576 = -1;
int32_t x577 = INT32_MIN;
volatile int32_t x594 = INT32_MIN;
volatile int32_t x595 = -1;
int8_t x599 = 15;
uint16_t x600 = UINT16_MAX;
volatile int32_t t151 = -39451;
uint8_t x609 = 5U;
uint64_t x611 = 13404297LLU;
static uint64_t x613 = 883168LLU;
uint16_t x616 = 3U;
int64_t x619 = INT64_MIN;
int16_t x621 = INT16_MAX;
uint16_t x626 = UINT16_MAX;
int16_t x627 = INT16_MIN;
int32_t t156 = -642;
int8_t x630 = 0;
int8_t x632 = 1;
volatile int32_t t157 = 97908583;
static uint8_t x634 = 30U;
volatile uint32_t x645 = 12U;
int32_t x646 = -73;
volatile uint8_t x654 = 0U;
static int32_t x660 = -31274;
int8_t x663 = INT8_MIN;
int32_t x664 = INT32_MIN;
int32_t t165 = 177731947;
volatile int64_t x668 = 3007822LL;
uint32_t x670 = 77121214U;
uint64_t x671 = 2002345444744819357LLU;
uint64_t x675 = 587535110LLU;
static int64_t x677 = INT64_MIN;
static int64_t x681 = INT64_MIN;
volatile int16_t x684 = -1;
uint8_t x685 = UINT8_MAX;
int32_t t171 = 3;
int8_t x692 = -1;
uint32_t x698 = UINT32_MAX;
static volatile uint8_t x709 = UINT8_MAX;
int8_t x714 = INT8_MIN;
uint64_t x715 = UINT64_MAX;
int32_t t180 = -1;
int16_t x727 = INT16_MIN;
static int32_t t181 = -14;
volatile int16_t x734 = 484;
volatile int16_t x736 = -1;
uint8_t x740 = UINT8_MAX;
int16_t x742 = 15489;
uint16_t x743 = UINT16_MAX;
static int32_t x744 = -388;
volatile uint8_t x747 = UINT8_MAX;
static uint16_t x753 = 31U;
static int64_t x754 = INT64_MAX;
static volatile int32_t t188 = 11210405;
int32_t x766 = -1;
static volatile int32_t t192 = -3996334;
int32_t x777 = -1;
int32_t x780 = INT32_MAX;
int16_t x789 = -50;
int32_t t197 = -6;
int32_t t198 = -10;


void f0(void) {
    	uint16_t x1 = UINT16_MAX;
	int8_t x3 = INT8_MIN;
	int64_t x4 = -1LL;
	int32_t t0 = 870;

    t0 = ((x1|(x2&x3))!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x7 = INT64_MAX;
	uint8_t x8 = 34U;
	int32_t t1 = -97654;

    t1 = ((x5|(x6&x7))!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint32_t x9 = 2068938U;
	uint64_t x10 = 9173036LLU;
	static volatile int8_t x11 = INT8_MIN;
	int8_t x12 = 9;
	int32_t t2 = -768;

    t2 = ((x9|(x10&x11))!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = UINT64_MAX;
	int8_t x15 = INT8_MIN;
	uint16_t x16 = UINT16_MAX;
	int32_t t3 = -242;

    t3 = ((x13|(x14&x15))!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MIN;
	volatile int8_t x18 = INT8_MIN;
	uint32_t x19 = 44U;
	static uint16_t x20 = 213U;

    t4 = ((x17|(x18&x19))!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x22 = INT8_MIN;
	int16_t x23 = INT16_MAX;
	int16_t x24 = INT16_MIN;
	static volatile int32_t t5 = 578246;

    t5 = ((x21|(x22&x23))!=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = 9007U;
	int16_t x26 = INT16_MIN;
	uint8_t x27 = 3U;

    t6 = ((x25|(x26&x27))!=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x30 = INT8_MIN;
	int16_t x32 = INT16_MIN;
	int32_t t7 = -529587098;

    t7 = ((x29|(x30&x31))!=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x33 = 6U;
	int16_t x34 = INT16_MAX;
	int32_t x35 = INT32_MIN;
	uint16_t x36 = 1U;
	volatile int32_t t8 = -545505513;

    t8 = ((x33|(x34&x35))!=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x39 = 516984161;
	int8_t x40 = -2;
	volatile int32_t t9 = -484;

    t9 = ((x37|(x38&x39))!=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int16_t x41 = INT16_MAX;
	static uint8_t x43 = UINT8_MAX;
	volatile int32_t t10 = 268;

    t10 = ((x41|(x42&x43))!=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = 2;
	volatile int64_t x46 = INT64_MIN;
	uint32_t x47 = UINT32_MAX;
	int8_t x48 = INT8_MIN;
	volatile int32_t t11 = 1;

    t11 = ((x45|(x46&x47))!=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = INT32_MIN;
	int8_t x50 = 1;
	static int64_t x51 = 171131627179LL;
	static int32_t x52 = INT32_MIN;
	volatile int32_t t12 = -9382743;

    t12 = ((x49|(x50&x51))!=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x54 = INT8_MIN;
	uint8_t x55 = 23U;
	static volatile int32_t t13 = 5;

    t13 = ((x53|(x54&x55))!=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = INT16_MIN;
	volatile int64_t x58 = -8063LL;
	uint32_t x59 = UINT32_MAX;
	static uint32_t x60 = 546575749U;
	static volatile int32_t t14 = 964590281;

    t14 = ((x57|(x58&x59))!=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x62 = UINT8_MAX;
	int8_t x63 = INT8_MIN;
	volatile uint64_t x64 = 6226LLU;
	volatile int32_t t15 = -67321;

    t15 = ((x61|(x62&x63))!=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint32_t x65 = 6774404U;
	volatile int8_t x66 = -1;
	static int32_t x67 = INT32_MIN;
	int8_t x68 = -4;
	int32_t t16 = 4676;

    t16 = ((x65|(x66&x67))!=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = 163259886000682LL;
	uint32_t x70 = 97278702U;
	int8_t x71 = INT8_MIN;
	uint32_t x72 = 32U;
	volatile int32_t t17 = -77028;

    t17 = ((x69|(x70&x71))!=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = 0U;
	uint64_t x74 = 66773134135893742LLU;
	int8_t x75 = INT8_MIN;
	volatile int8_t x76 = INT8_MIN;
	volatile int32_t t18 = 119;

    t18 = ((x73|(x74&x75))!=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = INT16_MIN;
	int64_t x79 = INT64_MAX;
	static volatile int8_t x80 = INT8_MAX;
	int32_t t19 = 322886379;

    t19 = ((x77|(x78&x79))!=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = -1;
	uint8_t x83 = 1U;
	int32_t x84 = -9;
	volatile int32_t t20 = 14282;

    t20 = ((x81|(x82&x83))!=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x86 = 3812804U;
	int16_t x87 = INT16_MAX;
	int16_t x88 = INT16_MAX;
	volatile int32_t t21 = -114;

    t21 = ((x85|(x86&x87))!=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = -1LL;
	int64_t x90 = INT64_MIN;
	int32_t x91 = -1;
	uint16_t x92 = UINT16_MAX;

    t22 = ((x89|(x90&x91))!=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x95 = -450LL;
	volatile int64_t x96 = INT64_MIN;
	static int32_t t23 = -76988394;

    t23 = ((x93|(x94&x95))!=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint16_t x97 = 22492U;
	uint32_t x100 = 137U;
	volatile int32_t t24 = 120562;

    t24 = ((x97|(x98&x99))!=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x101 = 115501;
	uint32_t x103 = 230255898U;
	int8_t x104 = INT8_MAX;
	volatile int32_t t25 = -15;

    t25 = ((x101|(x102&x103))!=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x105 = 1770U;
	volatile int8_t x106 = 0;
	int8_t x107 = -1;
	volatile uint8_t x108 = UINT8_MAX;
	static volatile int32_t t26 = 1;

    t26 = ((x105|(x106&x107))!=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x109 = 7U;
	static uint32_t x110 = 20896016U;
	static uint64_t x112 = 7LLU;
	volatile int32_t t27 = -753;

    t27 = ((x109|(x110&x111))!=x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x114 = 28293842893716LLU;
	int8_t x115 = -1;
	volatile int16_t x116 = INT16_MIN;
	int32_t t28 = -21997052;

    t28 = ((x113|(x114&x115))!=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = INT64_MIN;
	int8_t x118 = INT8_MIN;
	int64_t x119 = INT64_MIN;
	int16_t x120 = INT16_MIN;
	int32_t t29 = -64653;

    t29 = ((x117|(x118&x119))!=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x121 = -1;
	uint16_t x122 = 217U;
	uint8_t x123 = 51U;
	int16_t x124 = -7052;
	volatile int32_t t30 = 259803851;

    t30 = ((x121|(x122&x123))!=x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = 127;
	static int64_t x126 = -108136314440331075LL;
	int8_t x127 = INT8_MIN;
	int32_t t31 = -4;

    t31 = ((x125|(x126&x127))!=x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = 1388;
	volatile uint32_t x130 = UINT32_MAX;
	static int64_t x131 = -5LL;
	static uint32_t x132 = 4126U;
	volatile int32_t t32 = 54836;

    t32 = ((x129|(x130&x131))!=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x133 = INT8_MAX;
	volatile int32_t x134 = -1;
	uint8_t x135 = 1U;
	int64_t x136 = INT64_MIN;
	int32_t t33 = -11325;

    t33 = ((x133|(x134&x135))!=x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = INT8_MAX;
	static uint64_t x138 = 6252019LLU;
	static uint16_t x139 = 54U;
	int64_t x140 = INT64_MAX;
	int32_t t34 = 209166595;

    t34 = ((x137|(x138&x139))!=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = -203;
	int64_t x142 = 122159LL;
	int8_t x143 = 1;
	int8_t x144 = INT8_MAX;
	volatile int32_t t35 = 914222;

    t35 = ((x141|(x142&x143))!=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x145 = 305108611LLU;
	int16_t x147 = 44;
	int32_t x148 = INT32_MIN;

    t36 = ((x145|(x146&x147))!=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x149 = 452943770746270LL;
	volatile int16_t x150 = -1;
	int64_t x151 = INT64_MIN;
	int32_t t37 = 0;

    t37 = ((x149|(x150&x151))!=x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x153 = 4352054239887279LL;
	static int16_t x154 = -1;
	static int64_t x155 = INT64_MIN;
	volatile int8_t x156 = 13;
	int32_t t38 = 139808218;

    t38 = ((x153|(x154&x155))!=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x157 = 26U;
	uint8_t x158 = 27U;
	int32_t x159 = -1;
	uint64_t x160 = 0LLU;
	volatile int32_t t39 = -174;

    t39 = ((x157|(x158&x159))!=x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = 1923381165100580LL;
	volatile uint64_t x162 = UINT64_MAX;
	uint16_t x163 = 785U;
	int32_t t40 = -43782;

    t40 = ((x161|(x162&x163))!=x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = -1LL;
	static uint8_t x166 = 0U;
	static int16_t x167 = -12;
	uint64_t x168 = 1441LLU;
	static int32_t t41 = -774253714;

    t41 = ((x165|(x166&x167))!=x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x170 = INT16_MIN;
	static int8_t x171 = INT8_MIN;
	int32_t x172 = INT32_MAX;
	int32_t t42 = 6;

    t42 = ((x169|(x170&x171))!=x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = INT16_MAX;
	volatile uint64_t x174 = 443608LLU;
	int16_t x175 = -211;
	volatile int64_t x176 = INT64_MIN;
	volatile int32_t t43 = -113487;

    t43 = ((x173|(x174&x175))!=x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = INT8_MIN;
	static int32_t x178 = INT32_MIN;
	int64_t x179 = -1LL;
	int64_t x180 = -393618141894468LL;
	volatile int32_t t44 = -694;

    t44 = ((x177|(x178&x179))!=x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = INT64_MIN;
	int32_t x182 = INT32_MAX;
	int16_t x183 = INT16_MIN;
	volatile int16_t x184 = 1829;
	volatile int32_t t45 = 99506927;

    t45 = ((x181|(x182&x183))!=x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = INT8_MAX;
	int64_t x187 = INT64_MIN;
	static int8_t x188 = -26;
	int32_t t46 = 0;

    t46 = ((x185|(x186&x187))!=x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = -4272729LL;
	uint16_t x190 = 2448U;
	int8_t x192 = INT8_MIN;
	int32_t t47 = 15;

    t47 = ((x189|(x190&x191))!=x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = INT64_MIN;
	static uint8_t x195 = 59U;
	uint32_t x196 = 1768U;
	static volatile int32_t t48 = -1;

    t48 = ((x193|(x194&x195))!=x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = -21249426028160034LL;
	uint16_t x198 = 10092U;
	volatile int8_t x199 = 13;

    t49 = ((x197|(x198&x199))!=x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x201 = -1;
	static uint16_t x202 = 3U;
	int64_t x203 = -1LL;
	volatile int32_t t50 = -14;

    t50 = ((x201|(x202&x203))!=x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = INT8_MIN;
	volatile int64_t x207 = 37053956454887360LL;
	volatile int32_t t51 = -1657535;

    t51 = ((x205|(x206&x207))!=x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = -1;
	uint32_t x210 = 23U;
	int8_t x211 = INT8_MIN;
	int64_t x212 = INT64_MIN;

    t52 = ((x209|(x210&x211))!=x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x214 = INT64_MIN;
	int8_t x215 = -8;
	int32_t t53 = 39;

    t53 = ((x213|(x214&x215))!=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x218 = -1;
	int32_t x219 = -3111;
	int32_t t54 = 84;

    t54 = ((x217|(x218&x219))!=x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x221 = -2;
	int16_t x222 = -355;
	static int32_t x224 = -136;
	static volatile int32_t t55 = 457;

    t55 = ((x221|(x222&x223))!=x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x225 = 129852LLU;
	int32_t x226 = 43;
	volatile int16_t x227 = INT16_MIN;
	uint8_t x228 = 5U;

    t56 = ((x225|(x226&x227))!=x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x229 = 1LL;
	int16_t x230 = -1520;
	int16_t x232 = INT16_MIN;
	volatile int32_t t57 = 6261;

    t57 = ((x229|(x230&x231))!=x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x233 = -1;
	int64_t x234 = 1337144669968LL;
	uint16_t x235 = UINT16_MAX;
	static volatile uint32_t x236 = 84503791U;
	volatile int32_t t58 = 1252;

    t58 = ((x233|(x234&x235))!=x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x237 = 125538779760LLU;
	uint8_t x238 = 48U;
	static uint8_t x239 = 2U;
	volatile int32_t t59 = 939008;

    t59 = ((x237|(x238&x239))!=x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x241 = -99;
	int8_t x242 = INT8_MIN;
	int8_t x243 = -1;
	int8_t x244 = INT8_MAX;
	static int32_t t60 = -2;

    t60 = ((x241|(x242&x243))!=x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = -5;
	uint32_t x246 = 166138U;
	volatile int64_t x247 = INT64_MAX;
	int8_t x248 = -2;
	static volatile int32_t t61 = -487065;

    t61 = ((x245|(x246&x247))!=x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x249 = -1LL;
	static int64_t x250 = 1905408LL;
	int16_t x251 = -1;
	int32_t t62 = -104401;

    t62 = ((x249|(x250&x251))!=x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x253 = -62324625041588LL;
	uint8_t x254 = 126U;
	static uint8_t x255 = 5U;
	int16_t x256 = 6;
	int32_t t63 = 1;

    t63 = ((x253|(x254&x255))!=x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x258 = INT64_MIN;
	static int64_t x260 = 2LL;
	int32_t t64 = 368165824;

    t64 = ((x257|(x258&x259))!=x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x262 = INT64_MAX;
	uint32_t x263 = UINT32_MAX;
	uint8_t x264 = 2U;
	int32_t t65 = 11573368;

    t65 = ((x261|(x262&x263))!=x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x265 = -509054657418703122LL;
	int32_t t66 = -729370868;

    t66 = ((x265|(x266&x267))!=x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x269 = 5438468596309301LL;
	uint32_t x270 = 4U;
	int64_t x271 = -1LL;
	volatile int8_t x272 = INT8_MIN;
	int32_t t67 = -11042;

    t67 = ((x269|(x270&x271))!=x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = -1095;
	int64_t x274 = 1LL;
	volatile int8_t x275 = INT8_MAX;

    t68 = ((x273|(x274&x275))!=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint64_t x277 = UINT64_MAX;
	volatile int64_t x278 = INT64_MIN;
	int32_t x279 = INT32_MIN;
	uint16_t x280 = UINT16_MAX;
	volatile int32_t t69 = 3509404;

    t69 = ((x277|(x278&x279))!=x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x281 = INT16_MAX;
	volatile uint16_t x282 = 583U;
	uint32_t x283 = 34551U;
	uint64_t x284 = 2247267302379LLU;
	int32_t t70 = 218265;

    t70 = ((x281|(x282&x283))!=x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = INT16_MAX;
	uint32_t x286 = 226U;
	int32_t x288 = -1;
	int32_t t71 = -480203;

    t71 = ((x285|(x286&x287))!=x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = INT8_MIN;
	uint16_t x290 = UINT16_MAX;
	volatile int64_t x291 = -4783653271000LL;
	int16_t x292 = INT16_MAX;
	static volatile int32_t t72 = -1067;

    t72 = ((x289|(x290&x291))!=x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x295 = 6U;
	uint64_t x296 = UINT64_MAX;
	static volatile int32_t t73 = 20023;

    t73 = ((x293|(x294&x295))!=x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = -1;
	int32_t x298 = 254567324;
	int16_t x299 = INT16_MIN;
	int32_t x300 = 1518;
	volatile int32_t t74 = -7092684;

    t74 = ((x297|(x298&x299))!=x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint16_t x302 = 30U;
	int32_t x303 = INT32_MIN;

    t75 = ((x301|(x302&x303))!=x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile uint16_t x305 = 5211U;
	int64_t x306 = INT64_MIN;
	volatile int8_t x307 = INT8_MAX;

    t76 = ((x305|(x306&x307))!=x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = INT32_MIN;
	int32_t x310 = INT32_MIN;
	int16_t x311 = INT16_MIN;
	volatile int32_t x312 = INT32_MIN;
	int32_t t77 = -1;

    t77 = ((x309|(x310&x311))!=x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x313 = UINT16_MAX;
	int16_t x314 = -1;
	static int16_t x316 = 12;
	volatile int32_t t78 = 15;

    t78 = ((x313|(x314&x315))!=x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x317 = INT64_MIN;
	int64_t x318 = INT64_MAX;
	static int64_t x319 = -3241656177923445277LL;
	int16_t x320 = -1;
	volatile int32_t t79 = 111037402;

    t79 = ((x317|(x318&x319))!=x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = -1;
	static int64_t x322 = INT64_MAX;
	int32_t x323 = INT32_MIN;
	int64_t x324 = -1LL;
	volatile int32_t t80 = 4;

    t80 = ((x321|(x322&x323))!=x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x325 = -11;
	volatile int32_t x326 = INT32_MAX;
	static volatile int64_t x327 = INT64_MIN;
	int32_t t81 = 115;

    t81 = ((x325|(x326&x327))!=x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint32_t x330 = 51670U;
	int16_t x331 = INT16_MIN;
	int16_t x332 = -117;
	volatile int32_t t82 = 25929;

    t82 = ((x329|(x330&x331))!=x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x333 = INT8_MIN;
	int32_t x334 = -3654;
	uint8_t x335 = UINT8_MAX;
	int16_t x336 = INT16_MIN;

    t83 = ((x333|(x334&x335))!=x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x337 = 23903817338993LL;
	static volatile uint64_t x338 = 2091091108LLU;
	uint32_t x339 = 0U;
	static int16_t x340 = INT16_MAX;

    t84 = ((x337|(x338&x339))!=x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x341 = -18801211;
	uint16_t x342 = 358U;
	int16_t x343 = -763;
	uint32_t x344 = 3059U;
	static volatile int32_t t85 = -4835093;

    t85 = ((x341|(x342&x343))!=x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x345 = -1LL;
	int16_t x346 = -1;
	uint16_t x347 = 1123U;
	volatile int8_t x348 = INT8_MIN;
	volatile int32_t t86 = 1;

    t86 = ((x345|(x346&x347))!=x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = INT8_MIN;
	volatile int32_t x350 = INT32_MAX;
	int8_t x352 = INT8_MIN;
	volatile int32_t t87 = -1081338;

    t87 = ((x349|(x350&x351))!=x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x354 = -1;
	int16_t x355 = -113;
	volatile uint64_t x356 = 88577216LLU;
	int32_t t88 = 1;

    t88 = ((x353|(x354&x355))!=x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint8_t x357 = 3U;
	uint64_t x358 = 42353LLU;
	volatile int32_t x359 = INT32_MAX;
	static int8_t x360 = 1;

    t89 = ((x357|(x358&x359))!=x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x361 = 6U;
	int8_t x362 = INT8_MIN;
	int16_t x363 = INT16_MIN;
	volatile uint8_t x364 = 6U;

    t90 = ((x361|(x362&x363))!=x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x367 = 3U;
	int32_t x368 = -8956;
	volatile int32_t t91 = -457379390;

    t91 = ((x365|(x366&x367))!=x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x369 = 3574U;
	int16_t x370 = INT16_MAX;
	int64_t x371 = INT64_MIN;
	volatile int64_t x372 = 0LL;
	static int32_t t92 = 169990;

    t92 = ((x369|(x370&x371))!=x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = -17306030859LL;
	volatile uint16_t x374 = UINT16_MAX;
	uint64_t x376 = 195138394305LLU;
	int32_t t93 = -25;

    t93 = ((x373|(x374&x375))!=x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x377 = -343;
	int16_t x379 = 22;
	int32_t x380 = INT32_MIN;
	static volatile int32_t t94 = 573260;

    t94 = ((x377|(x378&x379))!=x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x381 = UINT64_MAX;
	uint32_t x382 = 218146920U;
	volatile int64_t x383 = INT64_MIN;
	volatile uint8_t x384 = 4U;
	static int32_t t95 = -1968458;

    t95 = ((x381|(x382&x383))!=x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x386 = 13U;
	uint64_t x387 = UINT64_MAX;
	volatile int64_t x388 = INT64_MIN;
	volatile int32_t t96 = 2068;

    t96 = ((x385|(x386&x387))!=x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x389 = INT8_MIN;
	volatile int32_t x391 = INT32_MIN;
	uint16_t x392 = 1U;
	volatile int32_t t97 = 3;

    t97 = ((x389|(x390&x391))!=x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x393 = -3;
	int64_t x394 = -1179268LL;
	volatile int8_t x395 = INT8_MIN;
	int8_t x396 = INT8_MIN;

    t98 = ((x393|(x394&x395))!=x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x398 = -1;
	uint16_t x400 = 0U;

    t99 = ((x397|(x398&x399))!=x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x403 = INT32_MIN;
	uint32_t x404 = UINT32_MAX;
	int32_t t100 = -334544;

    t100 = ((x401|(x402&x403))!=x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x405 = 10U;
	uint32_t x406 = 267045U;
	int64_t x407 = INT64_MIN;
	volatile int16_t x408 = INT16_MAX;
	static int32_t t101 = 221563;

    t101 = ((x405|(x406&x407))!=x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x409 = INT64_MIN;
	static int32_t x410 = -1;
	volatile int8_t x412 = -1;
	volatile int32_t t102 = 1929;

    t102 = ((x409|(x410&x411))!=x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x413 = INT64_MIN;
	uint32_t x414 = 7U;
	int16_t x415 = -10299;
	int16_t x416 = -1;
	int32_t t103 = -1989938;

    t103 = ((x413|(x414&x415))!=x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x418 = 19610U;
	static int8_t x419 = INT8_MIN;
	int16_t x420 = 11065;
	static int32_t t104 = -43274012;

    t104 = ((x417|(x418&x419))!=x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint8_t x422 = UINT8_MAX;
	static volatile int64_t x423 = -1LL;
	uint8_t x424 = UINT8_MAX;
	int32_t t105 = -3036173;

    t105 = ((x421|(x422&x423))!=x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = 90;
	int8_t x426 = -5;
	volatile int32_t x427 = 1706988;
	int8_t x428 = INT8_MIN;
	int32_t t106 = 2863;

    t106 = ((x425|(x426&x427))!=x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = -3094756552993LL;
	int32_t x432 = 26225015;

    t107 = ((x429|(x430&x431))!=x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = -1;
	uint16_t x434 = 13U;
	int64_t x435 = 1333666025LL;
	int8_t x436 = INT8_MIN;
	static int32_t t108 = 1198412;

    t108 = ((x433|(x434&x435))!=x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x437 = -1;
	int32_t x438 = 108;
	volatile int32_t x439 = 37;
	static int8_t x440 = -1;
	volatile int32_t t109 = -532127596;

    t109 = ((x437|(x438&x439))!=x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x441 = INT16_MIN;
	static int64_t x442 = INT64_MIN;
	int8_t x443 = INT8_MIN;
	volatile int32_t t110 = 274532813;

    t110 = ((x441|(x442&x443))!=x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint64_t x445 = UINT64_MAX;
	int8_t x446 = -1;
	uint16_t x447 = 2184U;

    t111 = ((x445|(x446&x447))!=x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x449 = -16869160;
	int8_t x450 = INT8_MAX;
	static volatile int32_t x451 = -1;
	volatile int32_t t112 = -4048;

    t112 = ((x449|(x450&x451))!=x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x453 = -1LL;
	int16_t x454 = INT16_MIN;
	uint16_t x455 = UINT16_MAX;
	uint64_t x456 = UINT64_MAX;

    t113 = ((x453|(x454&x455))!=x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = INT32_MIN;
	int32_t x458 = INT32_MIN;
	static int16_t x459 = INT16_MIN;
	int32_t x460 = 1895;
	volatile int32_t t114 = -431228674;

    t114 = ((x457|(x458&x459))!=x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = INT64_MIN;
	int32_t x462 = 3215;
	int8_t x463 = INT8_MAX;
	static volatile int32_t t115 = 6489725;

    t115 = ((x461|(x462&x463))!=x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = INT64_MIN;
	int64_t x466 = -1LL;
	static volatile uint16_t x467 = UINT16_MAX;
	int64_t x468 = 407219039374LL;
	volatile int32_t t116 = -133709770;

    t116 = ((x465|(x466&x467))!=x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x469 = -1LL;
	int32_t x470 = -501928;
	static uint32_t x471 = 12064294U;
	int32_t t117 = -12;

    t117 = ((x469|(x470&x471))!=x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x473 = -247;
	uint32_t x474 = UINT32_MAX;
	int16_t x475 = -14425;
	int32_t t118 = 64071049;

    t118 = ((x473|(x474&x475))!=x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = 25338;
	uint16_t x478 = 163U;
	int64_t x479 = INT64_MIN;
	int64_t x480 = -38742329760LL;
	int32_t t119 = 1;

    t119 = ((x477|(x478&x479))!=x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x481 = INT16_MIN;
	volatile uint32_t x482 = 5U;
	static int16_t x483 = INT16_MIN;
	int16_t x484 = 0;
	volatile int32_t t120 = -411;

    t120 = ((x481|(x482&x483))!=x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = INT8_MAX;
	int64_t x486 = -135244032771LL;
	uint32_t x487 = 168919586U;
	int16_t x488 = INT16_MIN;
	volatile int32_t t121 = -56731814;

    t121 = ((x485|(x486&x487))!=x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x489 = INT64_MIN;
	int16_t x491 = INT16_MIN;
	uint16_t x492 = 12018U;
	int32_t t122 = -341075;

    t122 = ((x489|(x490&x491))!=x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x493 = INT16_MIN;
	static uint16_t x494 = UINT16_MAX;
	volatile int64_t x495 = -900063LL;
	int8_t x496 = INT8_MIN;
	int32_t t123 = -517909;

    t123 = ((x493|(x494&x495))!=x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x497 = -1;
	static int16_t x499 = INT16_MAX;

    t124 = ((x497|(x498&x499))!=x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x502 = INT64_MIN;
	static int8_t x503 = -1;
	int16_t x504 = INT16_MIN;
	volatile int32_t t125 = -12;

    t125 = ((x501|(x502&x503))!=x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint8_t x507 = 8U;

    t126 = ((x505|(x506&x507))!=x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = -1LL;
	uint32_t x510 = UINT32_MAX;
	int8_t x511 = -24;
	static uint32_t x512 = UINT32_MAX;

    t127 = ((x509|(x510&x511))!=x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = INT8_MAX;
	int32_t t128 = -14154;

    t128 = ((x513|(x514&x515))!=x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x519 = INT8_MAX;
	volatile int32_t t129 = -2;

    t129 = ((x517|(x518&x519))!=x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = -472;
	volatile int64_t x523 = 74147860LL;
	int8_t x524 = INT8_MIN;
	int32_t t130 = -73803242;

    t130 = ((x521|(x522&x523))!=x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x525 = -2433992LL;
	int16_t x526 = INT16_MIN;
	int16_t x527 = -163;
	uint64_t x528 = UINT64_MAX;
	static volatile int32_t t131 = 4406346;

    t131 = ((x525|(x526&x527))!=x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x529 = 16;
	int8_t x530 = INT8_MAX;
	volatile uint64_t x531 = 479202263404574LLU;
	static volatile int16_t x532 = 4;

    t132 = ((x529|(x530&x531))!=x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x533 = INT16_MIN;
	int64_t x534 = -8LL;
	uint16_t x536 = 451U;

    t133 = ((x533|(x534&x535))!=x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x537 = INT64_MIN;
	static uint64_t x538 = 40LLU;
	volatile int32_t t134 = 2049999;

    t134 = ((x537|(x538&x539))!=x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x542 = INT64_MIN;
	int16_t x543 = INT16_MIN;
	static int8_t x544 = 0;
	int32_t t135 = -1388580;

    t135 = ((x541|(x542&x543))!=x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x548 = -1;

    t136 = ((x545|(x546&x547))!=x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x549 = -1;
	int16_t x552 = INT16_MAX;
	int32_t t137 = -1532793;

    t137 = ((x549|(x550&x551))!=x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = 2;
	int8_t x554 = -1;
	static uint16_t x555 = UINT16_MAX;
	volatile int16_t x556 = 221;
	volatile int32_t t138 = 27943061;

    t138 = ((x553|(x554&x555))!=x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x557 = -1;
	uint8_t x558 = UINT8_MAX;
	int8_t x559 = INT8_MIN;
	int64_t x560 = INT64_MAX;
	int32_t t139 = -13457;

    t139 = ((x557|(x558&x559))!=x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x561 = UINT64_MAX;
	volatile uint8_t x563 = UINT8_MAX;
	int8_t x564 = INT8_MIN;

    t140 = ((x561|(x562&x563))!=x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint16_t x565 = UINT16_MAX;
	int64_t x566 = -3663118LL;
	volatile uint32_t x568 = 447U;
	int32_t t141 = -58265344;

    t141 = ((x565|(x566&x567))!=x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x570 = 353102U;
	int64_t x571 = INT64_MAX;
	int64_t x572 = 122LL;
	volatile int32_t t142 = 47;

    t142 = ((x569|(x570&x571))!=x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x573 = UINT32_MAX;
	volatile int32_t x574 = 47905;
	uint32_t x575 = 1744951U;
	static volatile int32_t t143 = -93147;

    t143 = ((x573|(x574&x575))!=x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x578 = INT16_MAX;
	int32_t x579 = 727628345;
	int32_t x580 = INT32_MIN;
	int32_t t144 = -2;

    t144 = ((x577|(x578&x579))!=x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x581 = UINT32_MAX;
	uint64_t x582 = 1973603949529679LLU;
	static int64_t x583 = -247419LL;
	int16_t x584 = INT16_MIN;
	volatile int32_t t145 = -36064344;

    t145 = ((x581|(x582&x583))!=x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint16_t x585 = UINT16_MAX;
	int8_t x586 = -1;
	uint64_t x587 = UINT64_MAX;
	static volatile int16_t x588 = -1;
	static volatile int32_t t146 = -10081;

    t146 = ((x585|(x586&x587))!=x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = -1;
	int16_t x590 = INT16_MIN;
	int8_t x591 = INT8_MIN;
	uint32_t x592 = UINT32_MAX;
	static int32_t t147 = -1020;

    t147 = ((x589|(x590&x591))!=x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x593 = INT64_MIN;
	int16_t x596 = -1;
	int32_t t148 = 59;

    t148 = ((x593|(x594&x595))!=x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x597 = INT64_MAX;
	int32_t x598 = 57363102;
	volatile int32_t t149 = 3608;

    t149 = ((x597|(x598&x599))!=x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x601 = INT16_MAX;
	int8_t x602 = -1;
	static uint32_t x603 = UINT32_MAX;
	volatile uint64_t x604 = UINT64_MAX;
	static int32_t t150 = 430389236;

    t150 = ((x601|(x602&x603))!=x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint64_t x605 = UINT64_MAX;
	static volatile int64_t x606 = 938695713LL;
	int64_t x607 = -124952660208LL;
	int16_t x608 = INT16_MIN;

    t151 = ((x605|(x606&x607))!=x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x610 = 883011688U;
	uint8_t x612 = 6U;
	int32_t t152 = -18460597;

    t152 = ((x609|(x610&x611))!=x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x614 = INT64_MIN;
	int16_t x615 = 820;
	volatile int32_t t153 = -118479;

    t153 = ((x613|(x614&x615))!=x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x617 = 1LL;
	int16_t x618 = INT16_MIN;
	static int16_t x620 = INT16_MIN;
	int32_t t154 = 1;

    t154 = ((x617|(x618&x619))!=x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x622 = -1;
	static int16_t x623 = INT16_MIN;
	int32_t x624 = -2067813;
	int32_t t155 = 27580520;

    t155 = ((x621|(x622&x623))!=x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile uint8_t x625 = 2U;
	uint16_t x628 = UINT16_MAX;

    t156 = ((x625|(x626&x627))!=x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x629 = INT8_MIN;
	static uint32_t x631 = 29U;

    t157 = ((x629|(x630&x631))!=x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x633 = UINT8_MAX;
	uint32_t x635 = UINT32_MAX;
	volatile int32_t x636 = INT32_MAX;
	int32_t t158 = 182323;

    t158 = ((x633|(x634&x635))!=x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x637 = -4;
	static uint32_t x638 = 93393737U;
	volatile int8_t x639 = -1;
	int64_t x640 = INT64_MAX;
	static volatile int32_t t159 = 82055480;

    t159 = ((x637|(x638&x639))!=x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint16_t x641 = 125U;
	static int8_t x642 = INT8_MIN;
	static int16_t x643 = INT16_MIN;
	static int32_t x644 = INT32_MIN;
	volatile int32_t t160 = 649784164;

    t160 = ((x641|(x642&x643))!=x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x647 = 4U;
	volatile int16_t x648 = 78;
	int32_t t161 = 2156;

    t161 = ((x645|(x646&x647))!=x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x649 = INT16_MIN;
	int64_t x650 = -1LL;
	int64_t x651 = -1LL;
	int32_t x652 = INT32_MIN;
	int32_t t162 = 1;

    t162 = ((x649|(x650&x651))!=x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int16_t x653 = INT16_MIN;
	int8_t x655 = -5;
	int16_t x656 = INT16_MIN;
	volatile int32_t t163 = 28980666;

    t163 = ((x653|(x654&x655))!=x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = -435;
	static volatile int64_t x658 = INT64_MIN;
	volatile uint64_t x659 = 664369574LLU;
	volatile int32_t t164 = -1232;

    t164 = ((x657|(x658&x659))!=x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int16_t x661 = INT16_MIN;
	uint8_t x662 = 83U;

    t165 = ((x661|(x662&x663))!=x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x665 = -1;
	uint64_t x666 = 11046766410LLU;
	static int64_t x667 = INT64_MIN;
	static int32_t t166 = 15645;

    t166 = ((x665|(x666&x667))!=x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = INT32_MIN;
	static volatile uint8_t x672 = UINT8_MAX;
	volatile int32_t t167 = -85691284;

    t167 = ((x669|(x670&x671))!=x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int16_t x673 = 7483;
	uint16_t x674 = 207U;
	int32_t x676 = INT32_MIN;
	volatile int32_t t168 = -1313;

    t168 = ((x673|(x674&x675))!=x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x678 = -1;
	int32_t x679 = -1;
	static uint32_t x680 = 31U;
	static int32_t t169 = 1014862;

    t169 = ((x677|(x678&x679))!=x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x682 = UINT8_MAX;
	int64_t x683 = INT64_MIN;
	static volatile int32_t t170 = -30442;

    t170 = ((x681|(x682&x683))!=x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x686 = -1LL;
	static volatile int16_t x687 = INT16_MIN;
	uint32_t x688 = UINT32_MAX;

    t171 = ((x685|(x686&x687))!=x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x689 = INT8_MIN;
	int8_t x690 = INT8_MIN;
	int8_t x691 = -1;
	volatile int32_t t172 = -98715;

    t172 = ((x689|(x690&x691))!=x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x693 = 0U;
	int32_t x694 = -133556184;
	uint32_t x695 = UINT32_MAX;
	volatile uint8_t x696 = 21U;
	volatile int32_t t173 = -237545840;

    t173 = ((x693|(x694&x695))!=x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x697 = 56688865LLU;
	int16_t x699 = 7784;
	int64_t x700 = -1LL;
	volatile int32_t t174 = -128122;

    t174 = ((x697|(x698&x699))!=x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x701 = 3U;
	volatile uint32_t x702 = 1307460U;
	static int32_t x703 = 31;
	static int32_t x704 = 2834;
	int32_t t175 = -239;

    t175 = ((x701|(x702&x703))!=x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint64_t x705 = 430823921952680334LLU;
	static volatile uint32_t x706 = UINT32_MAX;
	volatile int16_t x707 = INT16_MIN;
	int32_t x708 = INT32_MAX;
	int32_t t176 = 1;

    t176 = ((x705|(x706&x707))!=x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x710 = INT32_MIN;
	uint8_t x711 = 2U;
	uint8_t x712 = 35U;
	int32_t t177 = 0;

    t177 = ((x709|(x710&x711))!=x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = 1LL;
	int8_t x716 = -2;
	int32_t t178 = 6586599;

    t178 = ((x713|(x714&x715))!=x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x717 = INT64_MIN;
	volatile uint32_t x718 = 5348U;
	uint32_t x719 = 3U;
	uint32_t x720 = UINT32_MAX;
	static int32_t t179 = -26407743;

    t179 = ((x717|(x718&x719))!=x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x721 = -42756984414401LL;
	static int16_t x722 = -39;
	volatile int16_t x723 = INT16_MAX;
	int32_t x724 = -1;

    t180 = ((x721|(x722&x723))!=x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x725 = -11523;
	uint64_t x726 = 5994326920525LLU;
	int32_t x728 = INT32_MIN;

    t181 = ((x725|(x726&x727))!=x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x729 = INT16_MIN;
	static uint16_t x730 = 170U;
	int64_t x731 = 113LL;
	volatile int16_t x732 = -1;
	int32_t t182 = 1;

    t182 = ((x729|(x730&x731))!=x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = INT64_MIN;
	uint64_t x735 = UINT64_MAX;
	volatile int32_t t183 = 2833430;

    t183 = ((x733|(x734&x735))!=x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = -16;
	int8_t x738 = INT8_MAX;
	int64_t x739 = INT64_MIN;
	static int32_t t184 = -83;

    t184 = ((x737|(x738&x739))!=x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint32_t x741 = UINT32_MAX;
	volatile int32_t t185 = -24147;

    t185 = ((x741|(x742&x743))!=x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x745 = -1;
	int16_t x746 = 13738;
	static int32_t x748 = INT32_MAX;
	int32_t t186 = 10;

    t186 = ((x745|(x746&x747))!=x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x749 = 1U;
	int16_t x750 = INT16_MIN;
	int64_t x751 = 2486353411490LL;
	volatile int16_t x752 = INT16_MIN;
	volatile int32_t t187 = -614;

    t187 = ((x749|(x750&x751))!=x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x755 = 1465162386556782LL;
	static int64_t x756 = INT64_MIN;

    t188 = ((x753|(x754&x755))!=x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = -3;
	int16_t x758 = -4036;
	volatile int64_t x759 = INT64_MIN;
	int16_t x760 = INT16_MAX;
	volatile int32_t t189 = 32337701;

    t189 = ((x757|(x758&x759))!=x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x761 = 1;
	volatile int32_t x762 = 92043742;
	uint64_t x763 = 9057399049LLU;
	uint16_t x764 = 925U;
	int32_t t190 = 66;

    t190 = ((x761|(x762&x763))!=x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x765 = 17;
	static uint8_t x767 = UINT8_MAX;
	uint32_t x768 = 2U;
	int32_t t191 = -1;

    t191 = ((x765|(x766&x767))!=x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint8_t x769 = 62U;
	static int32_t x770 = -52;
	int32_t x771 = INT32_MAX;
	int32_t x772 = 18292165;

    t192 = ((x769|(x770&x771))!=x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x773 = -1LL;
	int32_t x774 = -1;
	uint8_t x775 = UINT8_MAX;
	int64_t x776 = INT64_MIN;
	static int32_t t193 = 28242594;

    t193 = ((x773|(x774&x775))!=x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x778 = INT8_MIN;
	int8_t x779 = -7;
	static volatile int32_t t194 = 60551962;

    t194 = ((x777|(x778&x779))!=x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x781 = -1LL;
	uint16_t x782 = UINT16_MAX;
	static volatile int64_t x783 = INT64_MAX;
	static uint16_t x784 = 3U;
	volatile int32_t t195 = -2805662;

    t195 = ((x781|(x782&x783))!=x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x785 = 1;
	int16_t x786 = 161;
	int64_t x787 = -1LL;
	uint32_t x788 = 8996415U;
	int32_t t196 = -8725;

    t196 = ((x785|(x786&x787))!=x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint64_t x790 = 463488LLU;
	int32_t x791 = -724419;
	static uint8_t x792 = 50U;

    t197 = ((x789|(x790&x791))!=x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x793 = -1LL;
	uint16_t x794 = UINT16_MAX;
	volatile int32_t x795 = -3284;
	static int16_t x796 = INT16_MAX;

    t198 = ((x793|(x794&x795))!=x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile uint64_t x797 = 3294487634LLU;
	int8_t x798 = INT8_MIN;
	uint16_t x799 = UINT16_MAX;
	volatile int8_t x800 = INT8_MIN;
	volatile int32_t t199 = -7;

    t199 = ((x797|(x798&x799))!=x800);

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



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

int64_t x2 = -1LL;
int16_t x3 = -1;
static int16_t x8 = 4833;
static int32_t x9 = INT32_MIN;
int8_t x10 = -2;
int16_t x11 = INT16_MIN;
int64_t x12 = INT64_MIN;
int32_t t2 = 399001;
int16_t x16 = INT16_MAX;
volatile int16_t x17 = -18;
static volatile int64_t x18 = 1LL;
int32_t x19 = -2;
int32_t t5 = -272;
static volatile int32_t t6 = 1906015;
static int64_t x31 = INT64_MIN;
int64_t x34 = INT64_MIN;
uint8_t x36 = 113U;
int8_t x40 = INT8_MAX;
volatile int32_t t9 = -1643;
int64_t x43 = -1LL;
static int64_t x45 = INT64_MIN;
int8_t x48 = INT8_MIN;
int16_t x55 = 427;
int32_t x56 = -8;
volatile int32_t t13 = -239;
volatile int16_t x61 = -51;
int16_t x63 = INT16_MIN;
volatile int32_t t15 = -40545866;
int32_t x65 = -1;
static volatile int64_t x67 = -435LL;
static int8_t x70 = -1;
int32_t x71 = INT32_MIN;
static int64_t x74 = INT64_MAX;
int32_t x75 = INT32_MAX;
int32_t x77 = INT32_MAX;
static volatile int32_t t19 = 77;
uint8_t x86 = UINT8_MAX;
int32_t t21 = -102440783;
static uint32_t x91 = 1492783U;
static int32_t x92 = -54;
static uint64_t x99 = UINT64_MAX;
uint64_t x104 = 646403LLU;
volatile int64_t x105 = INT64_MIN;
static int32_t x107 = INT32_MIN;
static int16_t x108 = 2;
static int64_t x111 = INT64_MIN;
int8_t x113 = 5;
int64_t x120 = -2782775005897LL;
int32_t t29 = 176804;
volatile int16_t x123 = -1;
volatile int16_t x126 = INT16_MIN;
static int8_t x127 = INT8_MIN;
int16_t x129 = INT16_MIN;
int32_t t32 = -1;
volatile int16_t x133 = -1;
static int32_t x135 = INT32_MIN;
uint16_t x142 = UINT16_MAX;
volatile int8_t x148 = INT8_MIN;
uint8_t x149 = 46U;
uint32_t x155 = UINT32_MAX;
uint64_t x158 = 4491109359734635068LLU;
int16_t x167 = -1;
int8_t x169 = -63;
static int8_t x175 = INT8_MIN;
uint8_t x176 = 4U;
volatile int32_t x178 = INT32_MAX;
static int16_t x183 = -660;
uint8_t x195 = 2U;
int16_t x199 = INT16_MIN;
int8_t x207 = INT8_MAX;
static int32_t t51 = 1;
uint8_t x210 = UINT8_MAX;
static int64_t x218 = INT64_MIN;
int32_t t54 = 4482144;
int64_t x222 = -316715863LL;
static int32_t x223 = INT32_MIN;
uint32_t x224 = 103567123U;
uint32_t x232 = 200164129U;
int8_t x238 = -1;
static int32_t t59 = 7586797;
uint8_t x241 = UINT8_MAX;
int16_t x243 = 214;
uint64_t x244 = 1341135LLU;
volatile int32_t t60 = -31327970;
int64_t x246 = INT64_MAX;
int8_t x247 = 6;
int16_t x248 = INT16_MIN;
uint8_t x249 = 2U;
uint32_t x251 = 347071358U;
volatile int32_t t62 = -11167;
int64_t x255 = INT64_MIN;
uint16_t x256 = 15U;
volatile int8_t x258 = 1;
volatile uint16_t x261 = 3027U;
int8_t x263 = INT8_MAX;
static int32_t t65 = 6228;
uint64_t x274 = 104LLU;
uint8_t x279 = UINT8_MAX;
uint8_t x284 = 55U;
static int8_t x293 = 7;
volatile int16_t x306 = 52;
static int32_t t76 = -2219;
int32_t x313 = -1;
int16_t x317 = -1;
int16_t x318 = -1;
int32_t t79 = 8265484;
volatile uint16_t x324 = 8U;
volatile int32_t t80 = 19;
int32_t x327 = INT32_MAX;
static volatile int16_t x328 = -1;
int32_t x332 = INT32_MIN;
uint8_t x345 = 26U;
int32_t t86 = 32435668;
uint16_t x350 = 18779U;
uint8_t x354 = UINT8_MAX;
static uint64_t x355 = UINT64_MAX;
int32_t t88 = -7;
static volatile int32_t t89 = 4762;
uint16_t x366 = UINT16_MAX;
volatile int16_t x369 = INT16_MAX;
int16_t x375 = INT16_MIN;
int64_t x376 = INT64_MIN;
volatile uint8_t x380 = 0U;
int16_t x382 = INT16_MIN;
volatile uint64_t x393 = 0LLU;
int64_t x395 = -156LL;
int32_t t98 = 475680;
int16_t x399 = INT16_MAX;
int8_t x403 = -1;
uint16_t x404 = 2U;
uint64_t x409 = 4678975323810611521LLU;
static volatile int32_t t102 = -2333;
static int32_t t103 = -3215;
static int8_t x417 = 8;
volatile uint16_t x420 = 75U;
int32_t t104 = -2;
int32_t t105 = 26749;
int64_t x426 = 53758591950997LL;
uint32_t x435 = 2760U;
volatile int32_t t108 = 9236209;
int8_t x437 = 2;
static volatile int32_t x439 = INT32_MIN;
volatile int8_t x442 = INT8_MIN;
uint8_t x443 = 1U;
int8_t x444 = -1;
int8_t x449 = INT8_MIN;
int32_t x454 = -1;
static int8_t x463 = INT8_MIN;
int32_t t115 = -928892;
volatile uint64_t x467 = 796255984298280LLU;
int8_t x470 = INT8_MIN;
static volatile int32_t t117 = 667349052;
uint8_t x475 = 12U;
volatile int8_t x476 = INT8_MIN;
volatile int32_t t118 = 285214296;
int32_t t119 = -52895;
static int8_t x481 = INT8_MIN;
static volatile int32_t t120 = 2;
int32_t x487 = INT32_MAX;
int32_t t121 = -352754965;
int64_t x491 = INT64_MIN;
volatile int32_t x492 = -1;
static uint8_t x494 = 16U;
volatile int32_t t123 = 62343334;
uint16_t x500 = 200U;
int32_t t124 = -3508492;
int64_t x504 = INT64_MIN;
uint8_t x507 = 4U;
volatile int64_t x510 = -1LL;
int16_t x511 = INT16_MIN;
int32_t x514 = INT32_MIN;
uint32_t x523 = 1150U;
int32_t x525 = INT32_MIN;
static int16_t x526 = -1;
int32_t x529 = INT32_MAX;
int64_t x530 = INT64_MIN;
int8_t x532 = INT8_MIN;
int64_t x534 = -1LL;
int8_t x537 = INT8_MIN;
int16_t x542 = -4;
static uint32_t x543 = UINT32_MAX;
static int32_t x548 = -1;
int32_t x549 = 99544;
int64_t x550 = -1LL;
uint64_t x551 = 113011LLU;
int32_t t137 = 40;
static volatile int32_t x556 = INT32_MAX;
uint16_t x559 = 25U;
volatile int32_t t142 = -39;
int32_t t143 = 13667837;
int16_t x578 = INT16_MIN;
static volatile int32_t t144 = -341293573;
uint64_t x590 = 21204921186LLU;
int32_t t147 = -521067;
volatile int32_t t149 = -12115;
int32_t x602 = -1;
int32_t t151 = 193469;
static uint64_t x616 = 193LLU;
int32_t t153 = -21396183;
int8_t x621 = INT8_MAX;
volatile int32_t x634 = 9802;
int64_t x635 = 20LL;
int16_t x636 = -5;
int8_t x638 = INT8_MIN;
uint8_t x639 = 1U;
int8_t x640 = 1;
int32_t t159 = 1;
volatile int16_t x648 = INT16_MIN;
int32_t t161 = 67166606;
volatile int32_t t162 = -396606;
int32_t t163 = -7220;
int32_t t164 = 1;
int16_t x665 = INT16_MIN;
static uint32_t x666 = UINT32_MAX;
volatile int32_t t166 = -11;
volatile int32_t x683 = -1;
volatile uint32_t x691 = 2U;
int32_t t173 = 0;
static int8_t x698 = INT8_MIN;
uint32_t x701 = 38U;
int8_t x703 = INT8_MAX;
uint64_t x707 = UINT64_MAX;
uint64_t x708 = 129988LLU;
int64_t x711 = -419034983LL;
volatile int32_t t177 = -5068;
static volatile int16_t x713 = -1474;
uint64_t x715 = UINT64_MAX;
int32_t x717 = INT32_MAX;
static uint32_t x719 = 414U;
uint8_t x722 = UINT8_MAX;
static uint64_t x727 = 49360551780123299LLU;
int8_t x731 = -42;
volatile uint16_t x732 = UINT16_MAX;
volatile int32_t t182 = 24452446;
volatile int16_t x733 = -1;
int32_t x736 = -1;
uint64_t x738 = UINT64_MAX;
volatile int64_t x742 = INT64_MIN;
int16_t x744 = INT16_MAX;
int64_t x746 = -1LL;
int16_t x751 = INT16_MIN;
volatile int32_t t189 = 920057323;
volatile int8_t x766 = INT8_MIN;
static volatile int32_t t192 = -7161;
uint16_t x774 = 47U;
volatile int16_t x775 = 26;
int32_t x783 = INT32_MAX;
uint32_t x791 = 79963U;
volatile uint8_t x792 = UINT8_MAX;
int16_t x797 = INT16_MIN;
volatile int16_t x800 = INT16_MIN;


void f0(void) {
    	static uint64_t x1 = UINT64_MAX;
	int16_t x4 = INT16_MIN;
	volatile int32_t t0 = 6;

    t0 = (((x1<=x2)==x3)>x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = 12801;
	int32_t x6 = INT32_MIN;
	static int16_t x7 = -4113;
	volatile int32_t t1 = -50;

    t1 = (((x5<=x6)==x7)>x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    

    t2 = (((x9<=x10)==x11)>x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MAX;
	static int64_t x14 = INT64_MIN;
	int32_t x15 = INT32_MIN;
	static int32_t t3 = 1;

    t3 = (((x13<=x14)==x15)>x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x20 = 429;
	static volatile int32_t t4 = 115042449;

    t4 = (((x17<=x18)==x19)>x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x21 = INT64_MIN;
	static int64_t x22 = INT64_MIN;
	uint32_t x23 = UINT32_MAX;
	volatile int64_t x24 = 127059080085547LL;

    t5 = (((x21<=x22)==x23)>x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x25 = -1;
	int32_t x26 = INT32_MIN;
	int64_t x27 = INT64_MAX;
	uint32_t x28 = UINT32_MAX;

    t6 = (((x25<=x26)==x27)>x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = UINT64_MAX;
	int16_t x30 = -1;
	volatile int16_t x32 = 1940;
	int32_t t7 = 75;

    t7 = (((x29<=x30)==x31)>x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x33 = UINT8_MAX;
	uint16_t x35 = 240U;
	int32_t t8 = -95367213;

    t8 = (((x33<=x34)==x35)>x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = 0;
	int64_t x38 = -1LL;
	int64_t x39 = INT64_MIN;

    t9 = (((x37<=x38)==x39)>x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int8_t x41 = INT8_MAX;
	static uint8_t x42 = 10U;
	int32_t x44 = INT32_MAX;
	volatile int32_t t10 = 94424036;

    t10 = (((x41<=x42)==x43)>x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x46 = INT8_MIN;
	volatile int8_t x47 = INT8_MIN;
	int32_t t11 = -47916;

    t11 = (((x45<=x46)==x47)>x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint64_t x49 = 50LLU;
	int64_t x50 = INT64_MAX;
	static volatile int32_t x51 = 110092815;
	int32_t x52 = -1;
	static volatile int32_t t12 = 2251342;

    t12 = (((x49<=x50)==x51)>x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = -58;
	static uint8_t x54 = 3U;

    t13 = (((x53<=x54)==x55)>x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x57 = 59239U;
	int64_t x58 = INT64_MIN;
	int32_t x59 = INT32_MIN;
	static int64_t x60 = -1LL;
	int32_t t14 = -192406805;

    t14 = (((x57<=x58)==x59)>x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x62 = INT8_MIN;
	volatile uint32_t x64 = 39734U;

    t15 = (((x61<=x62)==x63)>x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x66 = -1;
	int16_t x68 = 23;
	static int32_t t16 = -291485;

    t16 = (((x65<=x66)==x67)>x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = INT32_MIN;
	static int8_t x72 = -5;
	static int32_t t17 = -621776;

    t17 = (((x69<=x70)==x71)>x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = 13U;
	volatile int64_t x76 = INT64_MAX;
	volatile int32_t t18 = -305702;

    t18 = (((x73<=x74)==x75)>x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x78 = 10978025LL;
	int32_t x79 = INT32_MIN;
	int64_t x80 = INT64_MIN;

    t19 = (((x77<=x78)==x79)>x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = 4U;
	volatile int16_t x82 = INT16_MIN;
	uint16_t x83 = 3U;
	uint32_t x84 = 8612U;
	volatile int32_t t20 = -31;

    t20 = (((x81<=x82)==x83)>x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x85 = -1;
	int8_t x87 = INT8_MIN;
	static uint32_t x88 = UINT32_MAX;

    t21 = (((x85<=x86)==x87)>x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = INT8_MIN;
	static int64_t x90 = INT64_MIN;
	int32_t t22 = -994235;

    t22 = (((x89<=x90)==x91)>x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = INT64_MIN;
	uint64_t x94 = 22917873354052LLU;
	static int8_t x95 = -56;
	int32_t x96 = INT32_MIN;
	volatile int32_t t23 = -1;

    t23 = (((x93<=x94)==x95)>x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int32_t x97 = -1;
	volatile uint32_t x98 = UINT32_MAX;
	int32_t x100 = INT32_MIN;
	volatile int32_t t24 = -251241034;

    t24 = (((x97<=x98)==x99)>x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = 61238340U;
	int64_t x102 = INT64_MIN;
	int32_t x103 = INT32_MIN;
	int32_t t25 = -7497375;

    t25 = (((x101<=x102)==x103)>x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x106 = 1U;
	int32_t t26 = -33;

    t26 = (((x105<=x106)==x107)>x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = 7226;
	int8_t x110 = -4;
	int16_t x112 = INT16_MIN;
	volatile int32_t t27 = 4;

    t27 = (((x109<=x110)==x111)>x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x114 = 11;
	static int64_t x115 = INT64_MIN;
	volatile int16_t x116 = INT16_MIN;
	int32_t t28 = -33098210;

    t28 = (((x113<=x114)==x115)>x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x117 = INT64_MIN;
	int16_t x118 = -1;
	int8_t x119 = 22;

    t29 = (((x117<=x118)==x119)>x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x121 = 3U;
	uint32_t x122 = 78U;
	static int64_t x124 = -1114823452165LL;
	static int32_t t30 = -72091338;

    t30 = (((x121<=x122)==x123)>x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x125 = 1U;
	uint16_t x128 = UINT16_MAX;
	volatile int32_t t31 = 16073;

    t31 = (((x125<=x126)==x127)>x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x130 = 999722U;
	int16_t x131 = INT16_MIN;
	volatile int64_t x132 = INT64_MAX;

    t32 = (((x129<=x130)==x131)>x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x134 = INT8_MIN;
	int16_t x136 = 0;
	int32_t t33 = -457244372;

    t33 = (((x133<=x134)==x135)>x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = -1;
	uint64_t x138 = 35133116214570338LLU;
	volatile int64_t x139 = 38868123LL;
	static uint8_t x140 = UINT8_MAX;
	volatile int32_t t34 = 33;

    t34 = (((x137<=x138)==x139)>x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = -6754;
	volatile int32_t x143 = INT32_MAX;
	volatile uint16_t x144 = 314U;
	volatile int32_t t35 = 6685361;

    t35 = (((x141<=x142)==x143)>x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = -976LL;
	uint64_t x146 = 67837400994004335LLU;
	uint32_t x147 = 32100850U;
	volatile int32_t t36 = -7253603;

    t36 = (((x145<=x146)==x147)>x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x150 = -1;
	static int8_t x151 = -1;
	uint64_t x152 = 24LLU;
	int32_t t37 = 11358257;

    t37 = (((x149<=x150)==x151)>x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = INT8_MIN;
	static int64_t x154 = INT64_MAX;
	static uint32_t x156 = 107U;
	volatile int32_t t38 = -32;

    t38 = (((x153<=x154)==x155)>x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x157 = 8U;
	int32_t x159 = -2782611;
	int8_t x160 = -1;
	int32_t t39 = -703074423;

    t39 = (((x157<=x158)==x159)>x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = INT8_MAX;
	int32_t x162 = INT32_MIN;
	int16_t x163 = -3;
	int64_t x164 = INT64_MAX;
	volatile int32_t t40 = -85824447;

    t40 = (((x161<=x162)==x163)>x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = 300;
	int32_t x166 = 946;
	uint16_t x168 = 3U;
	static volatile int32_t t41 = 4146897;

    t41 = (((x165<=x166)==x167)>x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x170 = 2032744U;
	static volatile int64_t x171 = INT64_MIN;
	uint32_t x172 = 397U;
	static int32_t t42 = 0;

    t42 = (((x169<=x170)==x171)>x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x173 = 71U;
	uint64_t x174 = 774971344498700LLU;
	int32_t t43 = 287576;

    t43 = (((x173<=x174)==x175)>x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x177 = INT8_MIN;
	int32_t x179 = -567691764;
	uint64_t x180 = UINT64_MAX;
	volatile int32_t t44 = -7;

    t44 = (((x177<=x178)==x179)>x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = -1;
	static int8_t x182 = 15;
	static volatile int8_t x184 = INT8_MAX;
	int32_t t45 = 31166263;

    t45 = (((x181<=x182)==x183)>x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x185 = 33U;
	int8_t x186 = INT8_MAX;
	static uint8_t x187 = 2U;
	int32_t x188 = 19990797;
	int32_t t46 = 3156;

    t46 = (((x185<=x186)==x187)>x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = INT64_MIN;
	static int16_t x190 = INT16_MIN;
	uint8_t x191 = 114U;
	static volatile uint8_t x192 = 2U;
	volatile int32_t t47 = -110828;

    t47 = (((x189<=x190)==x191)>x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = -33;
	int32_t x194 = INT32_MIN;
	int8_t x196 = -14;
	int32_t t48 = -30075711;

    t48 = (((x193<=x194)==x195)>x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = 0;
	volatile int8_t x198 = 1;
	int64_t x200 = INT64_MIN;
	static volatile int32_t t49 = -694627702;

    t49 = (((x197<=x198)==x199)>x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint16_t x201 = 826U;
	static int64_t x202 = INT64_MAX;
	uint8_t x203 = 4U;
	uint16_t x204 = 3794U;
	int32_t t50 = -2841;

    t50 = (((x201<=x202)==x203)>x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x205 = 2904;
	int32_t x206 = 13320432;
	int16_t x208 = -1;

    t51 = (((x205<=x206)==x207)>x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x209 = UINT8_MAX;
	int8_t x211 = INT8_MIN;
	volatile uint32_t x212 = 27U;
	int32_t t52 = -773;

    t52 = (((x209<=x210)==x211)>x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = -1;
	volatile int64_t x214 = INT64_MIN;
	static int32_t x215 = INT32_MIN;
	static int64_t x216 = -1LL;
	int32_t t53 = -1;

    t53 = (((x213<=x214)==x215)>x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = -213350159206554023LL;
	volatile int64_t x219 = INT64_MIN;
	int16_t x220 = 17;

    t54 = (((x217<=x218)==x219)>x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x221 = INT64_MIN;
	volatile int32_t t55 = 0;

    t55 = (((x221<=x222)==x223)>x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = -1204LL;
	static uint32_t x226 = 884U;
	int16_t x227 = INT16_MIN;
	volatile uint32_t x228 = UINT32_MAX;
	int32_t t56 = -9559954;

    t56 = (((x225<=x226)==x227)>x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x229 = UINT32_MAX;
	uint64_t x230 = UINT64_MAX;
	volatile uint8_t x231 = 0U;
	volatile int32_t t57 = 76544;

    t57 = (((x229<=x230)==x231)>x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = INT32_MIN;
	volatile uint32_t x234 = 8172U;
	static int32_t x235 = INT32_MAX;
	volatile uint16_t x236 = 3U;
	volatile int32_t t58 = -1856;

    t58 = (((x233<=x234)==x235)>x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x237 = -1;
	volatile int64_t x239 = INT64_MIN;
	static uint32_t x240 = 30339U;

    t59 = (((x237<=x238)==x239)>x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x242 = INT64_MIN;

    t60 = (((x241<=x242)==x243)>x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = -840779;
	volatile int32_t t61 = -58309;

    t61 = (((x245<=x246)==x247)>x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x250 = 8659359LL;
	uint64_t x252 = 27LLU;

    t62 = (((x249<=x250)==x251)>x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x253 = -1;
	static int16_t x254 = INT16_MIN;
	int32_t t63 = 1433937;

    t63 = (((x253<=x254)==x255)>x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x257 = INT32_MIN;
	int8_t x259 = INT8_MAX;
	uint32_t x260 = UINT32_MAX;
	static volatile int32_t t64 = 3795303;

    t64 = (((x257<=x258)==x259)>x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x262 = INT32_MAX;
	uint8_t x264 = 2U;

    t65 = (((x261<=x262)==x263)>x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x265 = 0U;
	static int16_t x266 = 2270;
	static int32_t x267 = INT32_MAX;
	static int16_t x268 = INT16_MIN;
	volatile int32_t t66 = -81;

    t66 = (((x265<=x266)==x267)>x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x269 = -1LL;
	volatile uint8_t x270 = 1U;
	volatile int8_t x271 = INT8_MIN;
	int32_t x272 = -1;
	static int32_t t67 = 304;

    t67 = (((x269<=x270)==x271)>x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x273 = 91U;
	static volatile uint64_t x275 = 6245610807698350LLU;
	uint16_t x276 = UINT16_MAX;
	volatile int32_t t68 = -4;

    t68 = (((x273<=x274)==x275)>x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x277 = -1;
	volatile int64_t x278 = INT64_MIN;
	int32_t x280 = -1;
	int32_t t69 = 474542;

    t69 = (((x277<=x278)==x279)>x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = INT16_MIN;
	uint8_t x282 = UINT8_MAX;
	uint8_t x283 = 30U;
	int32_t t70 = -89200123;

    t70 = (((x281<=x282)==x283)>x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = -1LL;
	uint8_t x286 = 81U;
	uint16_t x287 = 16976U;
	static uint32_t x288 = UINT32_MAX;
	static int32_t t71 = -760;

    t71 = (((x285<=x286)==x287)>x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = INT32_MIN;
	int64_t x290 = 56307349952LL;
	int32_t x291 = 0;
	int8_t x292 = -29;
	volatile int32_t t72 = 572008338;

    t72 = (((x289<=x290)==x291)>x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x294 = -1LL;
	uint64_t x295 = 3946147LLU;
	int8_t x296 = -1;
	int32_t t73 = 5114;

    t73 = (((x293<=x294)==x295)>x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x297 = 347612864267636LLU;
	int16_t x298 = INT16_MAX;
	int32_t x299 = INT32_MIN;
	int8_t x300 = -23;
	static volatile int32_t t74 = -328498;

    t74 = (((x297<=x298)==x299)>x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = INT64_MIN;
	int32_t x302 = -1;
	static int64_t x303 = INT64_MAX;
	int64_t x304 = INT64_MIN;
	static volatile int32_t t75 = -1689;

    t75 = (((x301<=x302)==x303)>x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x305 = INT32_MAX;
	int64_t x307 = -1LL;
	int8_t x308 = -1;

    t76 = (((x305<=x306)==x307)>x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = INT32_MAX;
	int64_t x310 = 239206855673985LL;
	static uint16_t x311 = 138U;
	uint64_t x312 = 0LLU;
	volatile int32_t t77 = 298419615;

    t77 = (((x309<=x310)==x311)>x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x314 = 194U;
	int32_t x315 = -1;
	uint32_t x316 = 11717U;
	int32_t t78 = 604;

    t78 = (((x313<=x314)==x315)>x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x319 = INT32_MIN;
	int64_t x320 = INT64_MIN;

    t79 = (((x317<=x318)==x319)>x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile uint8_t x321 = UINT8_MAX;
	int64_t x322 = -1LL;
	uint16_t x323 = UINT16_MAX;

    t80 = (((x321<=x322)==x323)>x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x325 = -1;
	int8_t x326 = 53;
	volatile int32_t t81 = -34999;

    t81 = (((x325<=x326)==x327)>x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = INT64_MAX;
	int8_t x330 = -1;
	int32_t x331 = INT32_MIN;
	volatile int32_t t82 = -108;

    t82 = (((x329<=x330)==x331)>x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile uint8_t x333 = 60U;
	int16_t x334 = INT16_MAX;
	volatile uint16_t x335 = 55U;
	int32_t x336 = -1;
	int32_t t83 = 3;

    t83 = (((x333<=x334)==x335)>x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = INT32_MIN;
	volatile int16_t x338 = 50;
	static volatile int16_t x339 = -3799;
	int64_t x340 = 227486574526874LL;
	int32_t t84 = 55141549;

    t84 = (((x337<=x338)==x339)>x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = INT64_MIN;
	int32_t x342 = -1;
	int8_t x343 = INT8_MAX;
	int64_t x344 = INT64_MIN;
	volatile int32_t t85 = 1;

    t85 = (((x341<=x342)==x343)>x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x346 = 1;
	int8_t x347 = 9;
	static volatile int16_t x348 = INT16_MIN;

    t86 = (((x345<=x346)==x347)>x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x349 = 5;
	static volatile int16_t x351 = INT16_MAX;
	int8_t x352 = INT8_MAX;
	static int32_t t87 = 0;

    t87 = (((x349<=x350)==x351)>x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x353 = 61U;
	int32_t x356 = -10779736;

    t88 = (((x353<=x354)==x355)>x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x357 = -1;
	int32_t x358 = -1;
	int32_t x359 = -1;
	uint8_t x360 = UINT8_MAX;

    t89 = (((x357<=x358)==x359)>x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint16_t x361 = UINT16_MAX;
	int8_t x362 = -1;
	int32_t x363 = INT32_MIN;
	volatile int8_t x364 = INT8_MIN;
	int32_t t90 = -879;

    t90 = (((x361<=x362)==x363)>x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x365 = INT8_MIN;
	int32_t x367 = 1;
	volatile uint64_t x368 = UINT64_MAX;
	static int32_t t91 = 73;

    t91 = (((x365<=x366)==x367)>x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint32_t x370 = 947631911U;
	uint64_t x371 = 711218LLU;
	int64_t x372 = INT64_MIN;
	int32_t t92 = 193230000;

    t92 = (((x369<=x370)==x371)>x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x373 = 12459285U;
	static int64_t x374 = INT64_MIN;
	volatile int32_t t93 = -1109959;

    t93 = (((x373<=x374)==x375)>x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x377 = INT8_MIN;
	static int32_t x378 = INT32_MIN;
	static int64_t x379 = 174649624876174708LL;
	int32_t t94 = 225646;

    t94 = (((x377<=x378)==x379)>x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x381 = -1LL;
	volatile int16_t x383 = INT16_MIN;
	uint64_t x384 = UINT64_MAX;
	int32_t t95 = -10131449;

    t95 = (((x381<=x382)==x383)>x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = INT16_MAX;
	int64_t x386 = INT64_MIN;
	int32_t x387 = INT32_MIN;
	static uint16_t x388 = 498U;
	volatile int32_t t96 = 1;

    t96 = (((x385<=x386)==x387)>x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x389 = 3U;
	static int16_t x390 = -3931;
	static uint8_t x391 = 3U;
	static uint16_t x392 = 3U;
	static volatile int32_t t97 = 1;

    t97 = (((x389<=x390)==x391)>x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x394 = 196;
	int64_t x396 = INT64_MAX;

    t98 = (((x393<=x394)==x395)>x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x397 = INT8_MIN;
	uint32_t x398 = 1454525013U;
	uint16_t x400 = 24183U;
	volatile int32_t t99 = 26;

    t99 = (((x397<=x398)==x399)>x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = -1;
	int8_t x402 = INT8_MIN;
	static int32_t t100 = -843058;

    t100 = (((x401<=x402)==x403)>x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x405 = 2728U;
	uint64_t x406 = 248083811598LLU;
	uint64_t x407 = 445LLU;
	int32_t x408 = INT32_MIN;
	int32_t t101 = 7374;

    t101 = (((x405<=x406)==x407)>x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x410 = 111038178LLU;
	int64_t x411 = INT64_MIN;
	volatile int8_t x412 = -6;

    t102 = (((x409<=x410)==x411)>x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = INT8_MIN;
	static int16_t x414 = -8;
	int8_t x415 = -1;
	static int16_t x416 = INT16_MIN;

    t103 = (((x413<=x414)==x415)>x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x418 = UINT32_MAX;
	volatile int8_t x419 = -1;

    t104 = (((x417<=x418)==x419)>x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile uint32_t x421 = UINT32_MAX;
	uint8_t x422 = 4U;
	int64_t x423 = INT64_MIN;
	uint16_t x424 = 11U;

    t105 = (((x421<=x422)==x423)>x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x425 = INT64_MAX;
	volatile int32_t x427 = 1;
	int32_t x428 = INT32_MIN;
	volatile int32_t t106 = -1534;

    t106 = (((x425<=x426)==x427)>x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x429 = 12078U;
	uint32_t x430 = 92626750U;
	volatile int8_t x431 = INT8_MIN;
	int16_t x432 = -1;
	static int32_t t107 = -26125;

    t107 = (((x429<=x430)==x431)>x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = -260343902;
	int8_t x434 = INT8_MAX;
	static uint8_t x436 = 7U;

    t108 = (((x433<=x434)==x435)>x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x438 = INT64_MAX;
	static volatile uint16_t x440 = 4318U;
	int32_t t109 = 232820907;

    t109 = (((x437<=x438)==x439)>x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x441 = INT16_MIN;
	volatile int32_t t110 = -6;

    t110 = (((x441<=x442)==x443)>x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = INT8_MAX;
	int32_t x446 = -1;
	static volatile int64_t x447 = INT64_MIN;
	int64_t x448 = INT64_MAX;
	volatile int32_t t111 = -6050307;

    t111 = (((x445<=x446)==x447)>x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x450 = INT64_MAX;
	int64_t x451 = 873LL;
	uint64_t x452 = 35973584367834LLU;
	static int32_t t112 = -110764595;

    t112 = (((x449<=x450)==x451)>x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x453 = 74U;
	uint16_t x455 = 3U;
	static uint64_t x456 = 2726557LLU;
	int32_t t113 = -42619442;

    t113 = (((x453<=x454)==x455)>x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x457 = 16396LLU;
	int64_t x458 = -1LL;
	static uint32_t x459 = 15U;
	int32_t x460 = INT32_MIN;
	volatile int32_t t114 = 2214;

    t114 = (((x457<=x458)==x459)>x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = INT16_MIN;
	int32_t x462 = INT32_MIN;
	volatile int64_t x464 = INT64_MAX;

    t115 = (((x461<=x462)==x463)>x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x465 = INT16_MIN;
	uint64_t x466 = UINT64_MAX;
	int16_t x468 = -1;
	int32_t t116 = 1290425;

    t116 = (((x465<=x466)==x467)>x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = -1;
	int64_t x471 = 71611802LL;
	int16_t x472 = -1;

    t117 = (((x469<=x470)==x471)>x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = 15;
	uint32_t x474 = 381603385U;

    t118 = (((x473<=x474)==x475)>x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = -149907832;
	int8_t x478 = -1;
	volatile int64_t x479 = INT64_MIN;
	uint32_t x480 = UINT32_MAX;

    t119 = (((x477<=x478)==x479)>x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x482 = INT16_MIN;
	uint16_t x483 = UINT16_MAX;
	int64_t x484 = -1LL;

    t120 = (((x481<=x482)==x483)>x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x485 = INT16_MIN;
	uint16_t x486 = 4U;
	volatile uint16_t x488 = 16245U;

    t121 = (((x485<=x486)==x487)>x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x489 = UINT32_MAX;
	static int8_t x490 = INT8_MIN;
	int32_t t122 = 15909;

    t122 = (((x489<=x490)==x491)>x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x493 = -1;
	int32_t x495 = INT32_MIN;
	volatile uint64_t x496 = 221982241LLU;

    t123 = (((x493<=x494)==x495)>x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint8_t x497 = 4U;
	int32_t x498 = 1;
	int8_t x499 = -1;

    t124 = (((x497<=x498)==x499)>x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x501 = UINT32_MAX;
	int32_t x502 = INT32_MIN;
	static volatile int8_t x503 = -1;
	int32_t t125 = 452857;

    t125 = (((x501<=x502)==x503)>x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x505 = INT16_MIN;
	static int8_t x506 = 13;
	static int8_t x508 = 0;
	volatile int32_t t126 = 1440023;

    t126 = (((x505<=x506)==x507)>x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x509 = INT8_MIN;
	int8_t x512 = 15;
	volatile int32_t t127 = -5;

    t127 = (((x509<=x510)==x511)>x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint32_t x513 = 199894992U;
	static volatile uint8_t x515 = UINT8_MAX;
	int8_t x516 = 0;
	volatile int32_t t128 = -74072274;

    t128 = (((x513<=x514)==x515)>x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint64_t x517 = 458016280628LLU;
	static uint64_t x518 = 7830318LLU;
	volatile int64_t x519 = 7LL;
	volatile int32_t x520 = INT32_MIN;
	int32_t t129 = -3;

    t129 = (((x517<=x518)==x519)>x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int32_t x521 = INT32_MIN;
	static int64_t x522 = INT64_MAX;
	uint32_t x524 = 6095178U;
	int32_t t130 = -219;

    t130 = (((x521<=x522)==x523)>x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x527 = INT8_MIN;
	volatile int16_t x528 = INT16_MIN;
	int32_t t131 = -545618581;

    t131 = (((x525<=x526)==x527)>x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x531 = -225942;
	int32_t t132 = 13176553;

    t132 = (((x529<=x530)==x531)>x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint16_t x533 = 0U;
	int8_t x535 = INT8_MIN;
	int64_t x536 = -2434508329765LL;
	volatile int32_t t133 = 47;

    t133 = (((x533<=x534)==x535)>x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint8_t x538 = 2U;
	uint8_t x539 = UINT8_MAX;
	int32_t x540 = INT32_MAX;
	volatile int32_t t134 = 174996;

    t134 = (((x537<=x538)==x539)>x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = INT16_MIN;
	volatile int64_t x544 = -24353665848805751LL;
	static int32_t t135 = 142033962;

    t135 = (((x541<=x542)==x543)>x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x545 = UINT16_MAX;
	int64_t x546 = INT64_MIN;
	uint16_t x547 = UINT16_MAX;
	int32_t t136 = 1238;

    t136 = (((x545<=x546)==x547)>x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x552 = 12LL;

    t137 = (((x549<=x550)==x551)>x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile int16_t x553 = INT16_MAX;
	static volatile int64_t x554 = INT64_MIN;
	int8_t x555 = -1;
	volatile int32_t t138 = 2;

    t138 = (((x553<=x554)==x555)>x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x557 = -1LL;
	int8_t x558 = -1;
	uint32_t x560 = 51U;
	static volatile int32_t t139 = -214803977;

    t139 = (((x557<=x558)==x559)>x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x561 = UINT8_MAX;
	volatile int64_t x562 = INT64_MAX;
	uint32_t x563 = 1985793442U;
	int64_t x564 = 22534994069769LL;
	int32_t t140 = 23672423;

    t140 = (((x561<=x562)==x563)>x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x565 = -1;
	int64_t x566 = -1LL;
	static volatile uint8_t x567 = UINT8_MAX;
	int32_t x568 = INT32_MIN;
	volatile int32_t t141 = 83910;

    t141 = (((x565<=x566)==x567)>x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x569 = -4;
	int16_t x570 = 0;
	uint64_t x571 = 946LLU;
	volatile int64_t x572 = INT64_MIN;

    t142 = (((x569<=x570)==x571)>x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = -1;
	int16_t x574 = INT16_MIN;
	int8_t x575 = 1;
	volatile int64_t x576 = INT64_MIN;

    t143 = (((x573<=x574)==x575)>x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint16_t x577 = 2U;
	volatile int32_t x579 = INT32_MAX;
	int64_t x580 = INT64_MIN;

    t144 = (((x577<=x578)==x579)>x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = -1;
	int16_t x582 = -1;
	int32_t x583 = -4;
	int32_t x584 = INT32_MIN;
	static int32_t t145 = -9172044;

    t145 = (((x581<=x582)==x583)>x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = -75;
	static int16_t x586 = 0;
	uint16_t x587 = 81U;
	uint32_t x588 = 449U;
	int32_t t146 = 888;

    t146 = (((x585<=x586)==x587)>x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x589 = -6;
	uint64_t x591 = 15517511455LLU;
	static int8_t x592 = INT8_MIN;

    t147 = (((x589<=x590)==x591)>x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = -1;
	static uint64_t x594 = 34607LLU;
	volatile int64_t x595 = -1LL;
	int16_t x596 = INT16_MIN;
	volatile int32_t t148 = -249;

    t148 = (((x593<=x594)==x595)>x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = -4150397;
	int64_t x598 = INT64_MIN;
	int8_t x599 = INT8_MIN;
	static int32_t x600 = -1034465022;

    t149 = (((x597<=x598)==x599)>x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x601 = 3376844LLU;
	int8_t x603 = INT8_MIN;
	int16_t x604 = -1;
	int32_t t150 = 68338;

    t150 = (((x601<=x602)==x603)>x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x605 = 18U;
	int8_t x606 = INT8_MIN;
	static volatile uint64_t x607 = 11LLU;
	static volatile int8_t x608 = 61;

    t151 = (((x605<=x606)==x607)>x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t x609 = -1;
	static int32_t x610 = -1;
	int8_t x611 = -8;
	int32_t x612 = INT32_MIN;
	volatile int32_t t152 = 3828095;

    t152 = (((x609<=x610)==x611)>x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x613 = UINT64_MAX;
	int8_t x614 = INT8_MIN;
	int16_t x615 = INT16_MIN;

    t153 = (((x613<=x614)==x615)>x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x617 = -166744633833517028LL;
	int32_t x618 = -1;
	static int16_t x619 = 9;
	static volatile uint8_t x620 = 0U;
	volatile int32_t t154 = -122804130;

    t154 = (((x617<=x618)==x619)>x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x622 = INT32_MAX;
	int64_t x623 = -1LL;
	int8_t x624 = INT8_MIN;
	int32_t t155 = 20104;

    t155 = (((x621<=x622)==x623)>x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint32_t x625 = UINT32_MAX;
	int16_t x626 = INT16_MIN;
	int64_t x627 = -1LL;
	int8_t x628 = 0;
	static volatile int32_t t156 = 6;

    t156 = (((x625<=x626)==x627)>x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x629 = -1;
	int8_t x630 = -1;
	uint64_t x631 = 26981925LLU;
	int16_t x632 = 19;
	volatile int32_t t157 = 17314;

    t157 = (((x629<=x630)==x631)>x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x633 = -1LL;
	int32_t t158 = -236605335;

    t158 = (((x633<=x634)==x635)>x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x637 = INT64_MIN;

    t159 = (((x637<=x638)==x639)>x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x641 = INT16_MIN;
	int32_t x642 = 18938615;
	int64_t x643 = INT64_MIN;
	volatile int32_t x644 = 0;
	static volatile int32_t t160 = 0;

    t160 = (((x641<=x642)==x643)>x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x645 = INT32_MAX;
	uint8_t x646 = UINT8_MAX;
	volatile int8_t x647 = 1;

    t161 = (((x645<=x646)==x647)>x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = -1;
	int8_t x650 = INT8_MIN;
	uint32_t x651 = 498997U;
	int32_t x652 = INT32_MIN;

    t162 = (((x649<=x650)==x651)>x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = INT32_MIN;
	int32_t x654 = -1;
	int8_t x655 = INT8_MIN;
	uint16_t x656 = 5U;

    t163 = (((x653<=x654)==x655)>x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = -1LL;
	static int16_t x658 = INT16_MIN;
	int64_t x659 = 33048664LL;
	int8_t x660 = INT8_MAX;

    t164 = (((x657<=x658)==x659)>x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x661 = 1401U;
	int32_t x662 = -1;
	int32_t x663 = -793399495;
	volatile int32_t x664 = -1;
	volatile int32_t t165 = 184089766;

    t165 = (((x661<=x662)==x663)>x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x667 = 7;
	static int16_t x668 = INT16_MIN;

    t166 = (((x665<=x666)==x667)>x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint16_t x669 = UINT16_MAX;
	int64_t x670 = INT64_MIN;
	int32_t x671 = -299635191;
	volatile int16_t x672 = -1;
	static int32_t t167 = 63772;

    t167 = (((x669<=x670)==x671)>x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x673 = INT16_MAX;
	int32_t x674 = 10;
	int64_t x675 = INT64_MIN;
	volatile int8_t x676 = -1;
	volatile int32_t t168 = -40;

    t168 = (((x673<=x674)==x675)>x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x677 = 224LLU;
	volatile int8_t x678 = -1;
	volatile int32_t x679 = INT32_MAX;
	int16_t x680 = -4;
	volatile int32_t t169 = -237312729;

    t169 = (((x677<=x678)==x679)>x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint32_t x681 = 175317620U;
	int8_t x682 = -1;
	int32_t x684 = INT32_MIN;
	volatile int32_t t170 = 315178629;

    t170 = (((x681<=x682)==x683)>x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint64_t x685 = 328LLU;
	int16_t x686 = INT16_MIN;
	static uint16_t x687 = 1612U;
	volatile int32_t x688 = -1;
	volatile int32_t t171 = -296213;

    t171 = (((x685<=x686)==x687)>x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x689 = INT8_MAX;
	uint64_t x690 = 1LLU;
	volatile int32_t x692 = -1;
	int32_t t172 = 48161;

    t172 = (((x689<=x690)==x691)>x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x693 = INT16_MIN;
	volatile int16_t x694 = -26;
	int16_t x695 = 868;
	uint16_t x696 = 56U;

    t173 = (((x693<=x694)==x695)>x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x697 = -32566755752359418LL;
	uint8_t x699 = 75U;
	volatile int64_t x700 = INT64_MIN;
	int32_t t174 = 40;

    t174 = (((x697<=x698)==x699)>x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x702 = 1433U;
	int32_t x704 = 210631;
	static volatile int32_t t175 = -6110535;

    t175 = (((x701<=x702)==x703)>x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint64_t x705 = 180199403LLU;
	int16_t x706 = 59;
	volatile int32_t t176 = 241887759;

    t176 = (((x705<=x706)==x707)>x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x709 = INT32_MAX;
	int8_t x710 = INT8_MIN;
	int32_t x712 = 61840;

    t177 = (((x709<=x710)==x711)>x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x714 = -1;
	static uint64_t x716 = 1063116334880695645LLU;
	static int32_t t178 = 1;

    t178 = (((x713<=x714)==x715)>x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x718 = -19;
	uint8_t x720 = 0U;
	volatile int32_t t179 = 4939;

    t179 = (((x717<=x718)==x719)>x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint32_t x721 = 2043342U;
	uint8_t x723 = 8U;
	int32_t x724 = 102;
	volatile int32_t t180 = -477448;

    t180 = (((x721<=x722)==x723)>x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint32_t x725 = 47294U;
	volatile int64_t x726 = INT64_MAX;
	int16_t x728 = INT16_MAX;
	volatile int32_t t181 = -85606651;

    t181 = (((x725<=x726)==x727)>x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x729 = 131867411178562645LL;
	int32_t x730 = INT32_MIN;

    t182 = (((x729<=x730)==x731)>x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x734 = INT16_MIN;
	volatile uint8_t x735 = UINT8_MAX;
	volatile int32_t t183 = 371057;

    t183 = (((x733<=x734)==x735)>x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x737 = 5;
	int8_t x739 = 0;
	static int64_t x740 = -2591818798882758865LL;
	int32_t t184 = -1;

    t184 = (((x737<=x738)==x739)>x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x741 = -1;
	uint16_t x743 = UINT16_MAX;
	volatile int32_t t185 = 4;

    t185 = (((x741<=x742)==x743)>x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = INT32_MIN;
	static uint8_t x747 = UINT8_MAX;
	uint32_t x748 = UINT32_MAX;
	static volatile int32_t t186 = -116;

    t186 = (((x745<=x746)==x747)>x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint64_t x749 = UINT64_MAX;
	volatile uint8_t x750 = UINT8_MAX;
	int8_t x752 = INT8_MAX;
	int32_t t187 = 11325581;

    t187 = (((x749<=x750)==x751)>x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x753 = -4;
	volatile uint64_t x754 = UINT64_MAX;
	int32_t x755 = INT32_MIN;
	volatile uint16_t x756 = 19718U;
	volatile int32_t t188 = -1059965;

    t188 = (((x753<=x754)==x755)>x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x757 = UINT32_MAX;
	int8_t x758 = INT8_MIN;
	int16_t x759 = INT16_MAX;
	static int16_t x760 = INT16_MAX;

    t189 = (((x757<=x758)==x759)>x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x761 = 1U;
	uint32_t x762 = 9434U;
	volatile int8_t x763 = INT8_MIN;
	static int16_t x764 = 10;
	volatile int32_t t190 = -382138;

    t190 = (((x761<=x762)==x763)>x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = INT16_MIN;
	uint16_t x767 = UINT16_MAX;
	volatile uint64_t x768 = 118LLU;
	volatile int32_t t191 = -501412990;

    t191 = (((x765<=x766)==x767)>x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x769 = UINT64_MAX;
	int32_t x770 = -1211;
	int16_t x771 = 49;
	uint8_t x772 = UINT8_MAX;

    t192 = (((x769<=x770)==x771)>x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x773 = -1LL;
	static volatile int16_t x776 = INT16_MIN;
	volatile int32_t t193 = 216996;

    t193 = (((x773<=x774)==x775)>x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x777 = 2U;
	int8_t x778 = INT8_MAX;
	static volatile int64_t x779 = INT64_MAX;
	static volatile uint32_t x780 = 16U;
	int32_t t194 = -113;

    t194 = (((x777<=x778)==x779)>x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x781 = -111384667435765LL;
	uint32_t x782 = 687U;
	int64_t x784 = INT64_MIN;
	static int32_t t195 = 210435;

    t195 = (((x781<=x782)==x783)>x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x785 = 24U;
	uint32_t x786 = 33074498U;
	static int32_t x787 = 5302;
	volatile int16_t x788 = -66;
	int32_t t196 = 3055;

    t196 = (((x785<=x786)==x787)>x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x789 = INT16_MIN;
	int32_t x790 = -1;
	static int32_t t197 = 210;

    t197 = (((x789<=x790)==x791)>x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x793 = -8107LL;
	int8_t x794 = -1;
	int32_t x795 = INT32_MAX;
	int8_t x796 = INT8_MIN;
	static int32_t t198 = -28557;

    t198 = (((x793<=x794)==x795)>x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x798 = -19;
	uint64_t x799 = UINT64_MAX;
	static int32_t t199 = -93129;

    t199 = (((x797<=x798)==x799)>x800);

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


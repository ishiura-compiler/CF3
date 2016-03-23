
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

static uint16_t x4 = 15U;
int8_t x13 = -1;
static uint32_t x24 = 56081806U;
int16_t x38 = -1;
volatile int16_t x40 = INT16_MAX;
int8_t x46 = INT8_MAX;
int32_t x49 = -1;
int32_t x51 = -1;
volatile int64_t x56 = -8606228832LL;
int32_t t13 = -99990563;
static int16_t x60 = 1368;
volatile int32_t t14 = -9638;
volatile int8_t x61 = -10;
int64_t x62 = -1LL;
int32_t t15 = 31025280;
volatile int16_t x66 = INT16_MIN;
volatile int16_t x67 = 1;
int32_t t16 = -3010612;
int32_t x72 = -101254;
int32_t t17 = -107463;
uint64_t x83 = 780247929931LLU;
static volatile int32_t t20 = 42;
int32_t x85 = -6494;
static volatile int32_t t21 = 29061;
volatile uint16_t x95 = 198U;
volatile uint16_t x98 = 6298U;
uint16_t x100 = UINT16_MAX;
int8_t x104 = -23;
int32_t x105 = INT32_MIN;
int32_t x106 = INT32_MAX;
int64_t x107 = INT64_MIN;
volatile int32_t t26 = 905946355;
volatile uint32_t x111 = 6U;
int32_t x113 = INT32_MAX;
static int64_t x114 = -71925159490LL;
volatile int32_t t28 = -1;
static volatile uint16_t x117 = 8U;
volatile uint8_t x122 = UINT8_MAX;
int8_t x127 = 1;
int32_t t31 = 258201058;
static int64_t x135 = INT64_MIN;
int16_t x145 = INT16_MIN;
int8_t x149 = -1;
static int8_t x151 = INT8_MIN;
static int32_t x154 = INT32_MIN;
int64_t x156 = INT64_MIN;
static volatile int32_t t38 = -1106;
int32_t x159 = 44161;
int32_t t41 = -140;
int16_t x169 = -1972;
uint16_t x170 = UINT16_MAX;
int8_t x174 = -11;
int32_t t43 = 233820855;
int64_t x183 = -1648LL;
int8_t x189 = -1;
int16_t x190 = 1;
int32_t t52 = 30477;
uint64_t x214 = 1650176223547LLU;
int16_t x218 = INT16_MAX;
int8_t x222 = -25;
int16_t x223 = 1;
uint32_t x224 = UINT32_MAX;
static int8_t x228 = 3;
int32_t x233 = INT32_MIN;
uint8_t x238 = 26U;
volatile int8_t x239 = -13;
static uint32_t x241 = UINT32_MAX;
volatile int16_t x244 = INT16_MIN;
volatile int32_t t60 = -3;
int8_t x247 = 11;
int16_t x249 = 11;
volatile int16_t x255 = -10360;
volatile int64_t x264 = INT64_MIN;
uint32_t x267 = UINT32_MAX;
static int8_t x268 = -1;
int16_t x271 = INT16_MIN;
uint32_t x286 = UINT32_MAX;
int16_t x287 = 1;
int64_t x288 = -1LL;
volatile uint64_t x289 = 31469LLU;
static volatile int16_t x293 = INT16_MIN;
static uint16_t x297 = UINT16_MAX;
uint64_t x299 = 48803LLU;
int16_t x301 = INT16_MIN;
volatile uint16_t x302 = UINT16_MAX;
volatile int32_t t75 = -1835;
int32_t x308 = 1486;
static volatile int32_t t76 = -150;
uint8_t x311 = 5U;
static int8_t x314 = INT8_MAX;
int8_t x318 = -1;
int16_t x320 = 2;
int16_t x321 = INT16_MIN;
int8_t x322 = 15;
int32_t t81 = -2790060;
int8_t x331 = INT8_MIN;
uint8_t x332 = UINT8_MAX;
static uint16_t x333 = 1532U;
int32_t t83 = -3936519;
int16_t x347 = -234;
static int32_t t86 = 1;
int64_t x349 = -1LL;
static int32_t t87 = -3736;
int32_t x371 = -358143160;
volatile uint8_t x374 = UINT8_MAX;
int64_t x378 = -228157LL;
int32_t t94 = 1;
static volatile int32_t x381 = INT32_MAX;
uint32_t x385 = 1718496U;
int8_t x386 = -30;
static volatile int16_t x390 = INT16_MAX;
volatile int32_t x391 = 0;
int16_t x392 = INT16_MIN;
uint8_t x412 = UINT8_MAX;
volatile int64_t x413 = -18148808433LL;
static int32_t x418 = INT32_MIN;
uint32_t x423 = 21867U;
int8_t x427 = -1;
int8_t x429 = INT8_MIN;
uint8_t x430 = 9U;
int64_t x435 = INT64_MIN;
uint32_t x446 = UINT32_MAX;
volatile int8_t x447 = -1;
int32_t x450 = -1;
uint32_t x451 = 12U;
int32_t t112 = -148264;
int32_t t113 = 36;
int16_t x463 = 16;
volatile int16_t x471 = INT16_MIN;
int32_t x482 = INT32_MIN;
int32_t x487 = INT32_MIN;
uint64_t x488 = 22600781LLU;
volatile int64_t x492 = INT64_MAX;
int8_t x495 = 2;
volatile int64_t x504 = INT64_MIN;
static int64_t x507 = INT64_MIN;
int32_t t126 = -15;
volatile int32_t t127 = -875373702;
int16_t x514 = INT16_MIN;
volatile int32_t t128 = 2105353;
static int8_t x527 = -1;
int32_t x536 = -61;
int64_t x537 = -1LL;
volatile int32_t t134 = 4102920;
uint64_t x541 = UINT64_MAX;
int64_t x542 = -1LL;
static volatile int32_t x552 = INT32_MIN;
int64_t x555 = INT64_MAX;
int64_t x564 = INT64_MIN;
volatile int8_t x569 = INT8_MIN;
volatile int16_t x570 = 1;
volatile int32_t t142 = -13552889;
volatile uint64_t x578 = 62778134LLU;
uint64_t x582 = 2407236405537LLU;
uint16_t x583 = 120U;
int8_t x588 = 8;
static uint16_t x589 = 42U;
int32_t t147 = -135;
uint64_t x595 = 36957805257646201LLU;
int32_t t150 = -1;
uint8_t x605 = UINT8_MAX;
volatile int16_t x609 = INT16_MAX;
int32_t t152 = -22;
int16_t x617 = -1;
int32_t t154 = 2708638;
static int8_t x621 = -1;
static uint64_t x623 = 56556973LLU;
uint16_t x626 = 2800U;
volatile int32_t t156 = -2;
uint8_t x640 = 96U;
int64_t x641 = -22583233374436LL;
int16_t x649 = INT16_MAX;
uint32_t x652 = 2935U;
volatile int32_t t163 = 132767282;
static int64_t x664 = INT64_MIN;
static volatile uint32_t x665 = 7363U;
static int64_t x668 = -1LL;
volatile int32_t t166 = -110697;
int8_t x675 = INT8_MIN;
uint64_t x680 = UINT64_MAX;
volatile int16_t x684 = INT16_MIN;
int8_t x690 = INT8_MAX;
int32_t x691 = INT32_MIN;
int32_t t172 = 20844;
int32_t t173 = 6641799;
static volatile uint16_t x697 = 21990U;
volatile int32_t t174 = -4;
static int16_t x702 = -7;
volatile uint8_t x713 = UINT8_MAX;
uint32_t x720 = 321509U;
int16_t x724 = -1;
int16_t x727 = -10796;
volatile int32_t x734 = INT32_MIN;
uint32_t x735 = UINT32_MAX;
static uint8_t x737 = 2U;
static uint32_t x740 = 787172681U;
int32_t x743 = 0;
static int16_t x748 = INT16_MIN;
int32_t t187 = 23728494;
int8_t x753 = INT8_MIN;
int64_t x755 = INT64_MIN;
int64_t x757 = INT64_MIN;
volatile uint16_t x765 = 2977U;
static volatile int16_t x773 = -1;
static int32_t x782 = 9365;
int64_t x789 = INT64_MAX;
uint8_t x791 = 43U;
int64_t x797 = -1LL;


void f0(void) {
    	uint32_t x1 = 298U;
	static int16_t x2 = -1;
	volatile int64_t x3 = INT64_MAX;
	volatile int32_t t0 = -133123343;

    t0 = ((x1+(x2==x3))==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MIN;
	int64_t x6 = INT64_MAX;
	volatile int64_t x7 = 1971151843LL;
	int32_t x8 = 2071963;
	static int32_t t1 = -3119832;

    t1 = ((x5+(x6==x7))==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -49LL;
	static int32_t x10 = INT32_MIN;
	int16_t x11 = INT16_MIN;
	int32_t x12 = -2535907;
	int32_t t2 = -15750;

    t2 = ((x9+(x10==x11))==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x14 = -36;
	volatile int8_t x15 = -1;
	int16_t x16 = 10658;
	static int32_t t3 = 57;

    t3 = ((x13+(x14==x15))==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MAX;
	static volatile int16_t x18 = 58;
	int16_t x19 = -1;
	uint32_t x20 = 985U;
	static int32_t t4 = 33466378;

    t4 = ((x17+(x18==x19))==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int64_t x21 = 240545568LL;
	uint32_t x22 = 1614U;
	uint16_t x23 = 922U;
	static int32_t t5 = -6104058;

    t5 = ((x21+(x22==x23))==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MIN;
	static volatile int16_t x26 = INT16_MIN;
	uint64_t x27 = 173951937061LLU;
	static volatile int64_t x28 = 813978811544849LL;
	static int32_t t6 = 96;

    t6 = ((x25+(x26==x27))==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = 95739;
	static uint8_t x30 = UINT8_MAX;
	int32_t x31 = INT32_MAX;
	int8_t x32 = INT8_MAX;
	volatile int32_t t7 = 277099110;

    t7 = ((x29+(x30==x31))==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = -1;
	int8_t x34 = INT8_MAX;
	volatile int32_t x35 = INT32_MAX;
	int64_t x36 = INT64_MIN;
	int32_t t8 = 10272414;

    t8 = ((x33+(x34==x35))==x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MAX;
	static volatile int8_t x39 = 1;
	int32_t t9 = 1285826;

    t9 = ((x37+(x38==x39))==x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = -1;
	volatile int16_t x42 = 1;
	uint64_t x43 = 25497441636780081LLU;
	int64_t x44 = INT64_MAX;
	int32_t t10 = -2;

    t10 = ((x41+(x42==x43))==x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = -1;
	volatile uint8_t x47 = UINT8_MAX;
	int32_t x48 = -1;
	int32_t t11 = 255;

    t11 = ((x45+(x46==x47))==x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x50 = -4;
	int8_t x52 = INT8_MIN;
	volatile int32_t t12 = 528579362;

    t12 = ((x49+(x50==x51))==x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x53 = UINT8_MAX;
	int64_t x54 = INT64_MIN;
	static volatile int32_t x55 = -6;

    t13 = ((x53+(x54==x55))==x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint16_t x57 = UINT16_MAX;
	int8_t x58 = -1;
	static uint64_t x59 = UINT64_MAX;

    t14 = ((x57+(x58==x59))==x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x63 = INT64_MIN;
	int8_t x64 = INT8_MIN;

    t15 = ((x61+(x62==x63))==x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = 2454019;
	int16_t x68 = INT16_MIN;

    t16 = ((x65+(x66==x67))==x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x69 = 15LLU;
	int8_t x70 = -1;
	volatile int8_t x71 = -7;

    t17 = ((x69+(x70==x71))==x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = 19;
	int16_t x74 = 501;
	static int8_t x75 = INT8_MAX;
	static volatile int16_t x76 = -1;
	volatile int32_t t18 = 27;

    t18 = ((x73+(x74==x75))==x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = -146;
	uint64_t x78 = 118782543LLU;
	int32_t x79 = INT32_MIN;
	static uint8_t x80 = 4U;
	volatile int32_t t19 = 279;

    t19 = ((x77+(x78==x79))==x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = INT64_MAX;
	int32_t x82 = INT32_MIN;
	uint64_t x84 = 6113437326LLU;

    t20 = ((x81+(x82==x83))==x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x86 = INT8_MIN;
	uint16_t x87 = 2U;
	int32_t x88 = -16717107;

    t21 = ((x85+(x86==x87))==x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = INT16_MIN;
	uint32_t x90 = 32130942U;
	uint16_t x91 = UINT16_MAX;
	volatile int32_t x92 = -24144054;
	volatile int32_t t22 = -15884;

    t22 = ((x89+(x90==x91))==x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = -1;
	int8_t x94 = INT8_MIN;
	int64_t x96 = INT64_MIN;
	volatile int32_t t23 = -3651;

    t23 = ((x93+(x94==x95))==x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x97 = 718U;
	uint16_t x99 = 642U;
	int32_t t24 = 47636258;

    t24 = ((x97+(x98==x99))==x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = -1LL;
	uint32_t x102 = UINT32_MAX;
	int16_t x103 = -2081;
	int32_t t25 = 1697831;

    t25 = ((x101+(x102==x103))==x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x108 = INT32_MAX;

    t26 = ((x105+(x106==x107))==x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = INT32_MIN;
	int64_t x110 = -8213835488186LL;
	volatile uint32_t x112 = UINT32_MAX;
	volatile int32_t t27 = 528565417;

    t27 = ((x109+(x110==x111))==x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x115 = -3;
	volatile uint64_t x116 = 128147677LLU;

    t28 = ((x113+(x114==x115))==x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x118 = -1421698763816070024LL;
	volatile int8_t x119 = -1;
	int16_t x120 = 867;
	static volatile int32_t t29 = 30;

    t29 = ((x117+(x118==x119))==x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = INT32_MIN;
	uint16_t x123 = UINT16_MAX;
	int64_t x124 = -1LL;
	volatile int32_t t30 = -1818;

    t30 = ((x121+(x122==x123))==x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x125 = INT16_MIN;
	int64_t x126 = 5LL;
	static int64_t x128 = 24048885962094LL;

    t31 = ((x125+(x126==x127))==x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile uint64_t x129 = UINT64_MAX;
	static int8_t x130 = INT8_MAX;
	int32_t x131 = -1;
	static uint16_t x132 = 1U;
	int32_t t32 = 323369;

    t32 = ((x129+(x130==x131))==x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = -1;
	int32_t x134 = 54;
	int8_t x136 = INT8_MIN;
	static volatile int32_t t33 = 876;

    t33 = ((x133+(x134==x135))==x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x137 = 321;
	static uint32_t x138 = 312U;
	volatile uint32_t x139 = UINT32_MAX;
	static int16_t x140 = -1;
	volatile int32_t t34 = 0;

    t34 = ((x137+(x138==x139))==x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint32_t x141 = 32743U;
	int8_t x142 = 8;
	int16_t x143 = -1;
	int32_t x144 = -51;
	int32_t t35 = 20566;

    t35 = ((x141+(x142==x143))==x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x146 = INT16_MAX;
	volatile int64_t x147 = INT64_MIN;
	volatile int64_t x148 = INT64_MAX;
	static volatile int32_t t36 = 893;

    t36 = ((x145+(x146==x147))==x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x150 = INT16_MIN;
	uint64_t x152 = 98LLU;
	volatile int32_t t37 = -629654;

    t37 = ((x149+(x150==x151))==x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = INT32_MIN;
	int32_t x155 = INT32_MIN;

    t38 = ((x153+(x154==x155))==x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x157 = -1;
	int8_t x158 = 63;
	int64_t x160 = INT64_MIN;
	int32_t t39 = -1;

    t39 = ((x157+(x158==x159))==x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x161 = 11182423U;
	static int32_t x162 = INT32_MIN;
	uint64_t x163 = UINT64_MAX;
	int8_t x164 = INT8_MAX;
	int32_t t40 = -25330852;

    t40 = ((x161+(x162==x163))==x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint8_t x165 = UINT8_MAX;
	int32_t x166 = INT32_MIN;
	int32_t x167 = 1;
	volatile int64_t x168 = -26982990219252LL;

    t41 = ((x165+(x166==x167))==x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x171 = -1;
	int64_t x172 = -149439878166LL;
	int32_t t42 = -17669820;

    t42 = ((x169+(x170==x171))==x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = 0;
	uint64_t x175 = 326229958037117940LLU;
	int8_t x176 = 1;

    t43 = ((x173+(x174==x175))==x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x177 = -1089;
	static uint32_t x178 = UINT32_MAX;
	volatile int32_t x179 = INT32_MIN;
	uint32_t x180 = 1374672828U;
	volatile int32_t t44 = 114;

    t44 = ((x177+(x178==x179))==x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = INT64_MAX;
	uint32_t x182 = 81094683U;
	int32_t x184 = INT32_MIN;
	int32_t t45 = -3301373;

    t45 = ((x181+(x182==x183))==x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = 4038;
	int16_t x186 = 313;
	int32_t x187 = INT32_MAX;
	static int32_t x188 = 619366;
	static int32_t t46 = 1470014;

    t46 = ((x185+(x186==x187))==x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x191 = UINT16_MAX;
	uint32_t x192 = UINT32_MAX;
	int32_t t47 = 164452527;

    t47 = ((x189+(x190==x191))==x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = -228;
	volatile int64_t x194 = -388548785596277774LL;
	volatile int8_t x195 = INT8_MAX;
	static uint8_t x196 = 3U;
	static int32_t t48 = -1;

    t48 = ((x193+(x194==x195))==x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = 1392712;
	int8_t x198 = INT8_MIN;
	volatile int8_t x199 = INT8_MIN;
	uint32_t x200 = 6U;
	volatile int32_t t49 = 293266;

    t49 = ((x197+(x198==x199))==x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x201 = INT64_MIN;
	uint8_t x202 = 17U;
	uint16_t x203 = 1U;
	int64_t x204 = INT64_MAX;
	static volatile int32_t t50 = -191527392;

    t50 = ((x201+(x202==x203))==x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = 13;
	uint16_t x206 = 618U;
	int64_t x207 = INT64_MIN;
	int16_t x208 = 0;
	volatile int32_t t51 = -650;

    t51 = ((x205+(x206==x207))==x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint32_t x209 = 4884575U;
	uint64_t x210 = UINT64_MAX;
	uint8_t x211 = 118U;
	int32_t x212 = -1;

    t52 = ((x209+(x210==x211))==x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = INT32_MIN;
	int64_t x215 = INT64_MIN;
	int16_t x216 = INT16_MIN;
	volatile int32_t t53 = -638789612;

    t53 = ((x213+(x214==x215))==x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x217 = UINT32_MAX;
	int8_t x219 = INT8_MIN;
	int16_t x220 = -1;
	volatile int32_t t54 = 119039899;

    t54 = ((x217+(x218==x219))==x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x221 = INT32_MIN;
	volatile int32_t t55 = 93283148;

    t55 = ((x221+(x222==x223))==x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = -1LL;
	uint8_t x226 = UINT8_MAX;
	int16_t x227 = 1;
	static volatile int32_t t56 = 195735314;

    t56 = ((x225+(x226==x227))==x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint64_t x229 = UINT64_MAX;
	static int64_t x230 = INT64_MIN;
	int32_t x231 = -1;
	static int8_t x232 = -23;
	volatile int32_t t57 = 1;

    t57 = ((x229+(x230==x231))==x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x234 = INT16_MIN;
	uint64_t x235 = UINT64_MAX;
	int16_t x236 = INT16_MAX;
	volatile int32_t t58 = -479;

    t58 = ((x233+(x234==x235))==x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = INT16_MAX;
	uint16_t x240 = UINT16_MAX;
	int32_t t59 = 0;

    t59 = ((x237+(x238==x239))==x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x242 = 5834466U;
	int8_t x243 = -1;

    t60 = ((x241+(x242==x243))==x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = -1LL;
	static int16_t x246 = INT16_MIN;
	uint8_t x248 = 7U;
	int32_t t61 = 1503151;

    t61 = ((x245+(x246==x247))==x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x250 = -2;
	static volatile uint16_t x251 = 1U;
	int16_t x252 = -1;
	static volatile int32_t t62 = 3102218;

    t62 = ((x249+(x250==x251))==x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = -1;
	int32_t x254 = -1;
	volatile uint64_t x256 = 27413282LLU;
	volatile int32_t t63 = -80649629;

    t63 = ((x253+(x254==x255))==x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint8_t x257 = 3U;
	int16_t x258 = 83;
	uint8_t x259 = UINT8_MAX;
	int32_t x260 = INT32_MIN;
	static int32_t t64 = 3037309;

    t64 = ((x257+(x258==x259))==x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x261 = INT32_MAX;
	int8_t x262 = -6;
	uint64_t x263 = 3328381166682323LLU;
	int32_t t65 = -29;

    t65 = ((x261+(x262==x263))==x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint32_t x265 = UINT32_MAX;
	uint64_t x266 = 18636875230404LLU;
	volatile int32_t t66 = 54196091;

    t66 = ((x265+(x266==x267))==x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x269 = INT8_MAX;
	static uint64_t x270 = 6031411224LLU;
	uint64_t x272 = 16093688874556371LLU;
	static volatile int32_t t67 = -1;

    t67 = ((x269+(x270==x271))==x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = INT32_MIN;
	volatile uint32_t x274 = 2859651U;
	volatile int32_t x275 = INT32_MIN;
	int64_t x276 = -261893733020165LL;
	static int32_t t68 = -17659;

    t68 = ((x273+(x274==x275))==x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x277 = INT32_MIN;
	uint8_t x278 = 68U;
	int16_t x279 = -13188;
	uint8_t x280 = 94U;
	int32_t t69 = 157;

    t69 = ((x277+(x278==x279))==x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = INT64_MIN;
	static volatile int64_t x282 = INT64_MIN;
	uint8_t x283 = 0U;
	int64_t x284 = -1LL;
	volatile int32_t t70 = 2;

    t70 = ((x281+(x282==x283))==x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = INT64_MIN;
	volatile int32_t t71 = 5;

    t71 = ((x285+(x286==x287))==x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x290 = INT32_MAX;
	static uint8_t x291 = 59U;
	uint16_t x292 = 19645U;
	int32_t t72 = 2802;

    t72 = ((x289+(x290==x291))==x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x294 = INT64_MAX;
	int16_t x295 = INT16_MAX;
	static int8_t x296 = INT8_MIN;
	volatile int32_t t73 = -31930;

    t73 = ((x293+(x294==x295))==x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x298 = INT16_MIN;
	int8_t x300 = INT8_MAX;
	int32_t t74 = 1;

    t74 = ((x297+(x298==x299))==x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x303 = -1;
	volatile int64_t x304 = -187422717266822LL;

    t75 = ((x301+(x302==x303))==x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int32_t x305 = -22259455;
	uint8_t x306 = UINT8_MAX;
	volatile int32_t x307 = 505593;

    t76 = ((x305+(x306==x307))==x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = -1;
	uint16_t x310 = 494U;
	uint64_t x312 = 2479613920534330LLU;
	static volatile int32_t t77 = 30494300;

    t77 = ((x309+(x310==x311))==x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x313 = 22;
	int32_t x315 = INT32_MIN;
	int32_t x316 = -1;
	int32_t t78 = 249429;

    t78 = ((x313+(x314==x315))==x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x317 = 54;
	static uint8_t x319 = UINT8_MAX;
	static volatile int32_t t79 = -813;

    t79 = ((x317+(x318==x319))==x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x323 = 383467594153557521LLU;
	int8_t x324 = -1;
	int32_t t80 = 61;

    t80 = ((x321+(x322==x323))==x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x325 = INT64_MIN;
	static int32_t x326 = -1;
	int16_t x327 = -89;
	static int16_t x328 = INT16_MIN;

    t81 = ((x325+(x326==x327))==x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x329 = 183974U;
	int32_t x330 = -84;
	int32_t t82 = -21636;

    t82 = ((x329+(x330==x331))==x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x334 = -30901463114587453LL;
	static int16_t x335 = INT16_MAX;
	static uint32_t x336 = 357624257U;

    t83 = ((x333+(x334==x335))==x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x337 = 178944173369786LL;
	int32_t x338 = -1299568;
	volatile int8_t x339 = INT8_MAX;
	int8_t x340 = INT8_MIN;
	int32_t t84 = 843569;

    t84 = ((x337+(x338==x339))==x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x341 = 2;
	int8_t x342 = INT8_MIN;
	uint8_t x343 = UINT8_MAX;
	int16_t x344 = 0;
	volatile int32_t t85 = 111788;

    t85 = ((x341+(x342==x343))==x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x345 = 0;
	int64_t x346 = INT64_MAX;
	int16_t x348 = INT16_MAX;

    t86 = ((x345+(x346==x347))==x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x350 = 5474270U;
	uint8_t x351 = 29U;
	int64_t x352 = -18443035LL;

    t87 = ((x349+(x350==x351))==x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = 1;
	int64_t x354 = -1LL;
	volatile int8_t x355 = INT8_MAX;
	int64_t x356 = INT64_MIN;
	int32_t t88 = -14075751;

    t88 = ((x353+(x354==x355))==x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint32_t x357 = 463099U;
	uint8_t x358 = 7U;
	int16_t x359 = -756;
	static uint64_t x360 = 27302227445688933LLU;
	volatile int32_t t89 = -161;

    t89 = ((x357+(x358==x359))==x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x361 = -1;
	static uint8_t x362 = UINT8_MAX;
	int32_t x363 = INT32_MIN;
	volatile int16_t x364 = INT16_MAX;
	volatile int32_t t90 = 24449011;

    t90 = ((x361+(x362==x363))==x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x365 = 87405015258LLU;
	volatile int32_t x366 = INT32_MIN;
	int32_t x367 = INT32_MIN;
	int64_t x368 = INT64_MIN;
	static volatile int32_t t91 = 168993;

    t91 = ((x365+(x366==x367))==x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x369 = 1087187676U;
	volatile uint32_t x370 = 108867U;
	int8_t x372 = INT8_MAX;
	int32_t t92 = 1913;

    t92 = ((x369+(x370==x371))==x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x373 = -1LL;
	volatile uint64_t x375 = 1905114LLU;
	static int64_t x376 = INT64_MIN;
	volatile int32_t t93 = 65;

    t93 = ((x373+(x374==x375))==x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = 1287;
	int16_t x379 = 10426;
	int8_t x380 = -1;

    t94 = ((x377+(x378==x379))==x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x382 = -1;
	uint32_t x383 = 1015302U;
	uint64_t x384 = 152313LLU;
	int32_t t95 = -406038;

    t95 = ((x381+(x382==x383))==x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x387 = 1U;
	int16_t x388 = INT16_MIN;
	volatile int32_t t96 = -16605689;

    t96 = ((x385+(x386==x387))==x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x389 = 1113045LLU;
	int32_t t97 = -2495;

    t97 = ((x389+(x390==x391))==x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x393 = UINT16_MAX;
	volatile int32_t x394 = INT32_MIN;
	static volatile int8_t x395 = INT8_MIN;
	static int32_t x396 = -1;
	static volatile int32_t t98 = -561239434;

    t98 = ((x393+(x394==x395))==x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x397 = 14286U;
	uint16_t x398 = UINT16_MAX;
	int8_t x399 = 29;
	int16_t x400 = INT16_MIN;
	volatile int32_t t99 = 1469337;

    t99 = ((x397+(x398==x399))==x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x401 = INT64_MAX;
	volatile uint64_t x402 = UINT64_MAX;
	uint16_t x403 = 109U;
	static int16_t x404 = -273;
	volatile int32_t t100 = 756652566;

    t100 = ((x401+(x402==x403))==x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x405 = 0U;
	static volatile int64_t x406 = INT64_MIN;
	int32_t x407 = INT32_MIN;
	uint8_t x408 = 9U;
	volatile int32_t t101 = 365753;

    t101 = ((x405+(x406==x407))==x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = -1;
	int16_t x410 = INT16_MIN;
	int64_t x411 = 1000531762707263LL;
	volatile int32_t t102 = -96;

    t102 = ((x409+(x410==x411))==x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x414 = 27U;
	uint64_t x415 = 750776520191593LLU;
	int8_t x416 = INT8_MIN;
	int32_t t103 = 198;

    t103 = ((x413+(x414==x415))==x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x417 = 50;
	int32_t x419 = INT32_MIN;
	volatile int16_t x420 = INT16_MIN;
	int32_t t104 = 967;

    t104 = ((x417+(x418==x419))==x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint32_t x421 = 28U;
	uint8_t x422 = UINT8_MAX;
	uint16_t x424 = UINT16_MAX;
	int32_t t105 = 0;

    t105 = ((x421+(x422==x423))==x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x425 = INT8_MIN;
	int32_t x426 = -1;
	static uint64_t x428 = 34LLU;
	int32_t t106 = 16315;

    t106 = ((x425+(x426==x427))==x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x431 = UINT8_MAX;
	static int16_t x432 = INT16_MAX;
	volatile int32_t t107 = 1;

    t107 = ((x429+(x430==x431))==x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x433 = 124;
	volatile uint32_t x434 = 1728U;
	int16_t x436 = INT16_MIN;
	volatile int32_t t108 = -54;

    t108 = ((x433+(x434==x435))==x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = INT32_MIN;
	int32_t x438 = INT32_MAX;
	volatile uint16_t x439 = 1U;
	volatile int8_t x440 = INT8_MAX;
	int32_t t109 = -1;

    t109 = ((x437+(x438==x439))==x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x441 = UINT32_MAX;
	volatile int16_t x442 = INT16_MIN;
	uint16_t x443 = UINT16_MAX;
	int32_t x444 = -1;
	static int32_t t110 = -5;

    t110 = ((x441+(x442==x443))==x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x445 = 1U;
	static uint16_t x448 = UINT16_MAX;
	int32_t t111 = 3;

    t111 = ((x445+(x446==x447))==x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x449 = 1664433344U;
	int32_t x452 = -1;

    t112 = ((x449+(x450==x451))==x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x453 = -1;
	int8_t x454 = -11;
	static uint16_t x455 = 12398U;
	int32_t x456 = INT32_MAX;

    t113 = ((x453+(x454==x455))==x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x457 = 621030500LLU;
	static volatile int8_t x458 = INT8_MIN;
	int16_t x459 = -7660;
	int16_t x460 = -1;
	int32_t t114 = -106;

    t114 = ((x457+(x458==x459))==x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x461 = -1;
	int16_t x462 = -199;
	static int8_t x464 = -21;
	volatile int32_t t115 = -1006179375;

    t115 = ((x461+(x462==x463))==x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = INT32_MIN;
	static int64_t x466 = INT64_MIN;
	int8_t x467 = -1;
	volatile uint64_t x468 = UINT64_MAX;
	volatile int32_t t116 = -143526147;

    t116 = ((x465+(x466==x467))==x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x469 = 53;
	static uint32_t x470 = 1U;
	int32_t x472 = INT32_MIN;
	int32_t t117 = 1746676;

    t117 = ((x469+(x470==x471))==x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x473 = -1LL;
	int16_t x474 = INT16_MAX;
	int16_t x475 = INT16_MIN;
	static uint64_t x476 = 1554LLU;
	volatile int32_t t118 = 13;

    t118 = ((x473+(x474==x475))==x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x477 = INT16_MIN;
	uint8_t x478 = UINT8_MAX;
	int64_t x479 = INT64_MIN;
	static int16_t x480 = 0;
	static volatile int32_t t119 = -3834;

    t119 = ((x477+(x478==x479))==x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint32_t x481 = 538475U;
	int32_t x483 = INT32_MAX;
	int8_t x484 = INT8_MIN;
	int32_t t120 = -972751188;

    t120 = ((x481+(x482==x483))==x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x485 = INT32_MIN;
	volatile uint16_t x486 = 5U;
	volatile int32_t t121 = -4660;

    t121 = ((x485+(x486==x487))==x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = INT8_MIN;
	int8_t x490 = INT8_MIN;
	volatile uint8_t x491 = UINT8_MAX;
	volatile int32_t t122 = 119876752;

    t122 = ((x489+(x490==x491))==x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x493 = 51;
	volatile int8_t x494 = INT8_MAX;
	int8_t x496 = INT8_MIN;
	int32_t t123 = -4;

    t123 = ((x493+(x494==x495))==x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = INT32_MIN;
	int32_t x498 = -1;
	int16_t x499 = INT16_MAX;
	int64_t x500 = 3550035LL;
	static volatile int32_t t124 = -123324744;

    t124 = ((x497+(x498==x499))==x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x501 = -1LL;
	volatile uint16_t x502 = 468U;
	static volatile int64_t x503 = INT64_MAX;
	static int32_t t125 = 102;

    t125 = ((x501+(x502==x503))==x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint32_t x505 = 23175U;
	static int16_t x506 = -1;
	uint8_t x508 = UINT8_MAX;

    t126 = ((x505+(x506==x507))==x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x509 = 253404876692203LLU;
	static int16_t x510 = 43;
	static int8_t x511 = INT8_MIN;
	volatile int16_t x512 = INT16_MIN;

    t127 = ((x509+(x510==x511))==x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = 270LL;
	static int32_t x515 = -3017;
	uint64_t x516 = UINT64_MAX;

    t128 = ((x513+(x514==x515))==x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint8_t x517 = 68U;
	static volatile uint64_t x518 = 282655627LLU;
	static uint16_t x519 = 15U;
	uint64_t x520 = UINT64_MAX;
	volatile int32_t t129 = -2;

    t129 = ((x517+(x518==x519))==x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = 3;
	int64_t x522 = INT64_MIN;
	uint32_t x523 = 103714544U;
	int64_t x524 = -271136957LL;
	volatile int32_t t130 = -1436762;

    t130 = ((x521+(x522==x523))==x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x525 = UINT16_MAX;
	static uint64_t x526 = 62066108757752278LLU;
	uint8_t x528 = 21U;
	int32_t t131 = 2;

    t131 = ((x525+(x526==x527))==x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x529 = 15683645U;
	int16_t x530 = INT16_MIN;
	uint16_t x531 = UINT16_MAX;
	volatile int32_t x532 = INT32_MAX;
	volatile int32_t t132 = 416;

    t132 = ((x529+(x530==x531))==x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x533 = 1667221U;
	int64_t x534 = -1LL;
	uint8_t x535 = 29U;
	volatile int32_t t133 = 0;

    t133 = ((x533+(x534==x535))==x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x538 = -1;
	uint32_t x539 = UINT32_MAX;
	volatile int8_t x540 = 1;

    t134 = ((x537+(x538==x539))==x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x543 = UINT16_MAX;
	static uint8_t x544 = 12U;
	int32_t t135 = -2508;

    t135 = ((x541+(x542==x543))==x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x545 = -1;
	uint16_t x546 = UINT16_MAX;
	int64_t x547 = -1LL;
	int32_t x548 = INT32_MAX;
	volatile int32_t t136 = -470891;

    t136 = ((x545+(x546==x547))==x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x549 = 5574429826LLU;
	int8_t x550 = -1;
	uint16_t x551 = 28U;
	static int32_t t137 = -895093;

    t137 = ((x549+(x550==x551))==x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x553 = -1;
	int64_t x554 = -1LL;
	uint8_t x556 = UINT8_MAX;
	volatile int32_t t138 = 14;

    t138 = ((x553+(x554==x555))==x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x557 = 3U;
	int8_t x558 = -1;
	uint8_t x559 = 12U;
	volatile uint16_t x560 = 0U;
	volatile int32_t t139 = -8;

    t139 = ((x557+(x558==x559))==x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x561 = 1;
	uint32_t x562 = 3781U;
	int16_t x563 = INT16_MIN;
	volatile int32_t t140 = -3891;

    t140 = ((x561+(x562==x563))==x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x565 = INT64_MIN;
	int32_t x566 = INT32_MIN;
	uint64_t x567 = UINT64_MAX;
	static int64_t x568 = -3679387LL;
	volatile int32_t t141 = -29;

    t141 = ((x565+(x566==x567))==x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int16_t x571 = INT16_MAX;
	int8_t x572 = -5;

    t142 = ((x569+(x570==x571))==x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x573 = 5U;
	int8_t x574 = 0;
	int32_t x575 = INT32_MAX;
	int64_t x576 = INT64_MAX;
	volatile int32_t t143 = -33826633;

    t143 = ((x573+(x574==x575))==x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x577 = 15429659703036LLU;
	static int32_t x579 = INT32_MAX;
	int64_t x580 = -1LL;
	int32_t t144 = 103856;

    t144 = ((x577+(x578==x579))==x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x581 = 9U;
	uint16_t x584 = 57U;
	int32_t t145 = -3372;

    t145 = ((x581+(x582==x583))==x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = INT16_MAX;
	uint64_t x586 = 35577483506520383LLU;
	uint32_t x587 = UINT32_MAX;
	int32_t t146 = -477000;

    t146 = ((x585+(x586==x587))==x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x590 = -1;
	volatile int64_t x591 = -1LL;
	int64_t x592 = -1LL;

    t147 = ((x589+(x590==x591))==x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x593 = -1;
	volatile uint32_t x594 = 0U;
	int16_t x596 = INT16_MIN;
	volatile int32_t t148 = -26;

    t148 = ((x593+(x594==x595))==x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x597 = -1;
	uint16_t x598 = 106U;
	uint8_t x599 = 1U;
	volatile uint32_t x600 = UINT32_MAX;
	volatile int32_t t149 = 0;

    t149 = ((x597+(x598==x599))==x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = -1;
	uint32_t x602 = UINT32_MAX;
	static int8_t x603 = 1;
	static int32_t x604 = INT32_MIN;

    t150 = ((x601+(x602==x603))==x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x606 = -4966;
	int8_t x607 = INT8_MIN;
	volatile uint16_t x608 = 23U;
	int32_t t151 = 58;

    t151 = ((x605+(x606==x607))==x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x610 = INT8_MIN;
	volatile int16_t x611 = -1;
	uint32_t x612 = 39091U;

    t152 = ((x609+(x610==x611))==x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint16_t x613 = 58U;
	uint16_t x614 = UINT16_MAX;
	static volatile int8_t x615 = 5;
	volatile int32_t x616 = -1;
	volatile int32_t t153 = -79;

    t153 = ((x613+(x614==x615))==x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x618 = 137948820U;
	uint64_t x619 = 3419566386LLU;
	int8_t x620 = 63;

    t154 = ((x617+(x618==x619))==x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x622 = 13507;
	uint32_t x624 = UINT32_MAX;
	volatile int32_t t155 = -108;

    t155 = ((x621+(x622==x623))==x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x625 = -1;
	static int8_t x627 = INT8_MIN;
	int16_t x628 = INT16_MIN;

    t156 = ((x625+(x626==x627))==x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x629 = -12;
	int32_t x630 = -1;
	static uint8_t x631 = 26U;
	int64_t x632 = -6812848427263698LL;
	int32_t t157 = -20;

    t157 = ((x629+(x630==x631))==x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = INT32_MIN;
	volatile int16_t x634 = -1;
	int16_t x635 = INT16_MIN;
	int32_t x636 = INT32_MIN;
	volatile int32_t t158 = -1651458;

    t158 = ((x633+(x634==x635))==x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x637 = INT16_MIN;
	volatile int32_t x638 = -1;
	int64_t x639 = INT64_MAX;
	int32_t t159 = -366556;

    t159 = ((x637+(x638==x639))==x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x642 = 440258981775748211LLU;
	uint8_t x643 = 72U;
	int8_t x644 = INT8_MAX;
	int32_t t160 = 94;

    t160 = ((x641+(x642==x643))==x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x645 = -209;
	int16_t x646 = 14433;
	static int16_t x647 = -1;
	int8_t x648 = INT8_MAX;
	int32_t t161 = -54;

    t161 = ((x645+(x646==x647))==x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x650 = INT16_MIN;
	uint8_t x651 = UINT8_MAX;
	int32_t t162 = -172;

    t162 = ((x649+(x650==x651))==x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = INT32_MIN;
	volatile uint16_t x654 = 464U;
	int64_t x655 = -1LL;
	uint32_t x656 = 129895530U;

    t163 = ((x653+(x654==x655))==x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = -1;
	uint64_t x658 = 8024808925022396LLU;
	int16_t x659 = -1612;
	int16_t x660 = 584;
	static int32_t t164 = 0;

    t164 = ((x657+(x658==x659))==x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x661 = 0U;
	uint16_t x662 = UINT16_MAX;
	int8_t x663 = 27;
	int32_t t165 = 229;

    t165 = ((x661+(x662==x663))==x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x666 = UINT64_MAX;
	int16_t x667 = INT16_MIN;

    t166 = ((x665+(x666==x667))==x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int8_t x669 = INT8_MIN;
	static volatile int32_t x670 = 277116;
	int8_t x671 = INT8_MIN;
	int8_t x672 = INT8_MAX;
	static int32_t t167 = -1;

    t167 = ((x669+(x670==x671))==x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x673 = INT32_MIN;
	uint16_t x674 = 14788U;
	static volatile uint16_t x676 = 0U;
	static volatile int32_t t168 = -135848;

    t168 = ((x673+(x674==x675))==x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint32_t x677 = 16691714U;
	uint16_t x678 = 7068U;
	static uint64_t x679 = 59119LLU;
	int32_t t169 = 0;

    t169 = ((x677+(x678==x679))==x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x681 = 13;
	int8_t x682 = -7;
	uint64_t x683 = 10703920535LLU;
	static int32_t t170 = 219;

    t170 = ((x681+(x682==x683))==x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x685 = -1;
	uint64_t x686 = UINT64_MAX;
	int16_t x687 = -1;
	int64_t x688 = INT64_MIN;
	static int32_t t171 = 3;

    t171 = ((x685+(x686==x687))==x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint8_t x689 = 4U;
	volatile int32_t x692 = -1;

    t172 = ((x689+(x690==x691))==x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x693 = INT32_MIN;
	uint32_t x694 = UINT32_MAX;
	int16_t x695 = INT16_MIN;
	static uint8_t x696 = 83U;

    t173 = ((x693+(x694==x695))==x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x698 = INT8_MIN;
	int8_t x699 = INT8_MIN;
	int32_t x700 = 2;

    t174 = ((x697+(x698==x699))==x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x701 = UINT64_MAX;
	int32_t x703 = INT32_MIN;
	int8_t x704 = -1;
	int32_t t175 = -6003;

    t175 = ((x701+(x702==x703))==x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = -1LL;
	int64_t x706 = -156373804610LL;
	static int16_t x707 = INT16_MIN;
	volatile int32_t x708 = INT32_MIN;
	int32_t t176 = -764196516;

    t176 = ((x705+(x706==x707))==x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x709 = 24U;
	volatile uint64_t x710 = 24122600455LLU;
	uint32_t x711 = 654535U;
	volatile int64_t x712 = INT64_MIN;
	int32_t t177 = 14609;

    t177 = ((x709+(x710==x711))==x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x714 = -1LL;
	uint32_t x715 = 836765U;
	static int32_t x716 = INT32_MIN;
	volatile int32_t t178 = 137712;

    t178 = ((x713+(x714==x715))==x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x717 = 0U;
	int8_t x718 = INT8_MAX;
	int16_t x719 = INT16_MIN;
	int32_t t179 = 225812;

    t179 = ((x717+(x718==x719))==x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x721 = -1;
	uint16_t x722 = UINT16_MAX;
	uint32_t x723 = 265664661U;
	volatile int32_t t180 = -1;

    t180 = ((x721+(x722==x723))==x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x725 = 569075U;
	int16_t x726 = -1;
	uint8_t x728 = UINT8_MAX;
	volatile int32_t t181 = -46205;

    t181 = ((x725+(x726==x727))==x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint8_t x729 = 7U;
	uint16_t x730 = UINT16_MAX;
	int16_t x731 = INT16_MAX;
	int32_t x732 = -1;
	int32_t t182 = 45256698;

    t182 = ((x729+(x730==x731))==x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x733 = UINT8_MAX;
	int32_t x736 = 780;
	volatile int32_t t183 = 107;

    t183 = ((x733+(x734==x735))==x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint32_t x738 = UINT32_MAX;
	int32_t x739 = 697;
	int32_t t184 = -28711438;

    t184 = ((x737+(x738==x739))==x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x741 = INT8_MIN;
	int32_t x742 = INT32_MIN;
	int8_t x744 = 0;
	volatile int32_t t185 = 1105;

    t185 = ((x741+(x742==x743))==x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x745 = -1;
	static int64_t x746 = -45237545195LL;
	int8_t x747 = INT8_MIN;
	int32_t t186 = 1;

    t186 = ((x745+(x746==x747))==x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x749 = -1;
	volatile int16_t x750 = INT16_MIN;
	int8_t x751 = -1;
	static int16_t x752 = INT16_MAX;

    t187 = ((x749+(x750==x751))==x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile uint16_t x754 = 1U;
	int32_t x756 = -1;
	static volatile int32_t t188 = 218465;

    t188 = ((x753+(x754==x755))==x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x758 = INT32_MIN;
	int8_t x759 = INT8_MIN;
	int16_t x760 = INT16_MIN;
	int32_t t189 = -91390052;

    t189 = ((x757+(x758==x759))==x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = -6;
	volatile int64_t x762 = INT64_MIN;
	int64_t x763 = INT64_MIN;
	static int64_t x764 = -586371832628LL;
	int32_t t190 = -27;

    t190 = ((x761+(x762==x763))==x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x766 = 3U;
	volatile int8_t x767 = INT8_MAX;
	volatile int16_t x768 = INT16_MIN;
	int32_t t191 = 3;

    t191 = ((x765+(x766==x767))==x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x769 = INT8_MIN;
	static int16_t x770 = INT16_MIN;
	int8_t x771 = INT8_MAX;
	int32_t x772 = INT32_MIN;
	static int32_t t192 = 485;

    t192 = ((x769+(x770==x771))==x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x774 = 52990LLU;
	int8_t x775 = INT8_MIN;
	int64_t x776 = INT64_MAX;
	int32_t t193 = -3970471;

    t193 = ((x773+(x774==x775))==x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x777 = -4;
	uint8_t x778 = 5U;
	int8_t x779 = 0;
	static int64_t x780 = -1LL;
	int32_t t194 = -635845561;

    t194 = ((x777+(x778==x779))==x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = INT16_MIN;
	int8_t x783 = INT8_MIN;
	volatile uint32_t x784 = 2U;
	int32_t t195 = 78204545;

    t195 = ((x781+(x782==x783))==x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x785 = UINT64_MAX;
	uint16_t x786 = 861U;
	static int16_t x787 = INT16_MIN;
	int32_t x788 = INT32_MIN;
	volatile int32_t t196 = 956;

    t196 = ((x785+(x786==x787))==x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x790 = INT8_MIN;
	int16_t x792 = INT16_MIN;
	int32_t t197 = -146103749;

    t197 = ((x789+(x790==x791))==x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x793 = -1;
	uint32_t x794 = UINT32_MAX;
	int32_t x795 = INT32_MIN;
	volatile int32_t x796 = INT32_MIN;
	int32_t t198 = 6;

    t198 = ((x793+(x794==x795))==x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x798 = 15;
	static int32_t x799 = 2;
	static uint8_t x800 = 97U;
	volatile int32_t t199 = -76;

    t199 = ((x797+(x798==x799))==x800);

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


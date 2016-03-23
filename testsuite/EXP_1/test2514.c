
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

static int8_t x2 = -1;
int64_t x9 = 170LL;
int16_t x12 = INT16_MAX;
int16_t x14 = INT16_MIN;
int32_t x16 = INT32_MAX;
static uint64_t x20 = 0LLU;
int16_t x21 = INT16_MAX;
static int16_t x23 = INT16_MIN;
uint8_t x24 = UINT8_MAX;
int32_t t5 = 122316;
static int32_t t7 = 83148;
volatile int32_t t8 = -3378425;
static uint64_t x39 = 77483157273775916LLU;
static int64_t x44 = INT64_MIN;
static int64_t x46 = INT64_MIN;
int32_t x56 = INT32_MIN;
volatile int32_t t13 = 1994;
int8_t x62 = -1;
volatile int64_t x64 = INT64_MIN;
uint64_t x68 = 15877LLU;
int8_t x70 = INT8_MIN;
int64_t x73 = INT64_MIN;
int32_t x75 = -249;
static int32_t t18 = -1;
int64_t x87 = INT64_MAX;
int64_t x91 = INT64_MIN;
volatile int8_t x94 = 28;
int32_t x97 = -1;
int32_t x98 = 0;
volatile int16_t x99 = -1;
volatile int32_t x100 = 14168;
uint16_t x101 = 4413U;
static volatile uint32_t x104 = 2153160U;
int32_t t25 = 23022679;
volatile int64_t x105 = -4446584551LL;
static volatile uint16_t x116 = UINT16_MAX;
int32_t t29 = 4127;
int16_t x124 = INT16_MIN;
int32_t t30 = -729;
int32_t t31 = -10;
volatile int32_t x138 = -20962;
volatile int32_t t36 = 56433735;
volatile int32_t x149 = INT32_MIN;
static uint16_t x152 = 320U;
volatile uint16_t x154 = 1531U;
static volatile int32_t t38 = 1413407;
static uint32_t x161 = 7U;
static int32_t t42 = -5358116;
static uint64_t x178 = UINT64_MAX;
int16_t x186 = INT16_MIN;
volatile int32_t t46 = -168259;
int16_t x191 = INT16_MIN;
int32_t t47 = 3023;
static volatile int16_t x194 = -1;
static uint16_t x197 = 5118U;
int8_t x198 = -1;
static int32_t x203 = -47314939;
int16_t x206 = INT16_MAX;
int8_t x208 = INT8_MIN;
static int8_t x210 = INT8_MIN;
static int32_t x219 = INT32_MIN;
int32_t x220 = INT32_MAX;
static volatile int16_t x224 = -1;
uint8_t x228 = 1U;
volatile int64_t x233 = INT64_MAX;
uint32_t x234 = 1096395068U;
int32_t t59 = 3541;
uint32_t x242 = UINT32_MAX;
int64_t x248 = INT64_MAX;
static volatile int64_t x252 = 1LL;
int8_t x258 = 2;
int8_t x264 = INT8_MIN;
int32_t t65 = -3449027;
int16_t x265 = INT16_MIN;
uint8_t x266 = 0U;
int32_t x267 = INT32_MIN;
static int16_t x274 = INT16_MIN;
int32_t x277 = INT32_MIN;
int32_t t69 = 22591966;
int32_t x281 = INT32_MIN;
volatile int32_t t71 = 110680;
uint64_t x293 = UINT64_MAX;
volatile uint8_t x294 = 34U;
int32_t t74 = 109811763;
volatile int8_t x302 = INT8_MIN;
uint16_t x309 = UINT16_MAX;
volatile int64_t x312 = INT64_MAX;
static volatile int32_t t77 = 432;
int16_t x318 = 2;
static int32_t t79 = 13359;
static int32_t x322 = INT32_MAX;
int16_t x330 = 291;
uint8_t x331 = UINT8_MAX;
int16_t x342 = 4;
int8_t x352 = -1;
int64_t x367 = 178435LL;
volatile uint16_t x369 = 378U;
int8_t x372 = -1;
uint32_t x378 = UINT32_MAX;
int32_t t94 = -216291;
uint64_t x382 = 9253701185LLU;
int32_t x388 = 1;
static int64_t x389 = -1LL;
int8_t x402 = 6;
volatile int16_t x407 = INT16_MAX;
volatile int32_t t102 = -219979;
int16_t x417 = INT16_MAX;
uint8_t x419 = UINT8_MAX;
int16_t x420 = INT16_MAX;
uint8_t x421 = UINT8_MAX;
int8_t x422 = -1;
static int32_t t105 = -895;
uint64_t x426 = 45LLU;
int32_t t107 = 1;
uint64_t x435 = UINT64_MAX;
volatile int32_t t108 = -66502;
uint8_t x440 = 0U;
volatile int32_t t109 = -25;
volatile int8_t x443 = INT8_MIN;
uint32_t x444 = 1038510U;
int64_t x445 = INT64_MAX;
static int32_t x451 = INT32_MAX;
static int8_t x456 = -1;
int32_t t113 = -141764;
int32_t x457 = 535771;
int16_t x458 = -14;
static volatile int32_t x462 = 565376;
int32_t x466 = 1097927;
int64_t x469 = -1LL;
int32_t t117 = 39;
int64_t x475 = INT64_MIN;
static int8_t x476 = 0;
volatile uint8_t x478 = UINT8_MAX;
int8_t x479 = 1;
volatile int32_t t119 = -13;
uint16_t x484 = 55U;
static int32_t x487 = INT32_MIN;
static uint8_t x505 = 2U;
volatile int64_t x526 = INT64_MIN;
int32_t x532 = 509;
static int64_t x533 = INT64_MAX;
int64_t x540 = INT64_MIN;
uint64_t x544 = 543065544643LLU;
volatile int32_t t135 = -419;
static int8_t x545 = 22;
uint8_t x548 = 5U;
int32_t t136 = -1;
int16_t x551 = INT16_MIN;
static uint8_t x560 = 32U;
uint16_t x562 = UINT16_MAX;
static volatile int16_t x570 = -1;
int32_t x581 = -1;
int16_t x582 = INT16_MAX;
int8_t x588 = -1;
static int64_t x594 = INT64_MAX;
int64_t x597 = 28045448799LL;
volatile int64_t x599 = 77147LL;
static volatile int32_t t149 = -30026469;
static uint32_t x602 = UINT32_MAX;
int32_t t150 = -58344;
int8_t x609 = INT8_MIN;
int8_t x612 = -2;
int16_t x616 = -129;
volatile int32_t x621 = INT32_MAX;
static volatile int32_t x622 = -744120458;
int16_t x623 = INT16_MIN;
int64_t x628 = INT64_MAX;
static int32_t x634 = -1;
int64_t x635 = 950388133054873633LL;
int32_t t158 = 9;
uint16_t x642 = UINT16_MAX;
volatile int64_t x645 = INT64_MAX;
int32_t x649 = INT32_MAX;
int8_t x658 = INT8_MIN;
int8_t x659 = INT8_MAX;
volatile int32_t x661 = -1;
static int32_t x662 = INT32_MIN;
int8_t x680 = 5;
static int64_t x684 = INT64_MIN;
static uint64_t x690 = UINT64_MAX;
volatile int32_t x693 = -24201755;
int16_t x696 = -1590;
int16_t x700 = 0;
static volatile int8_t x703 = -1;
uint8_t x706 = 11U;
int32_t t176 = 159408085;
uint32_t x713 = UINT32_MAX;
uint32_t x718 = 146236U;
int8_t x723 = 30;
static int8_t x730 = -1;
volatile int32_t t183 = 349;
volatile uint8_t x739 = UINT8_MAX;
static int64_t x746 = INT64_MIN;
volatile int8_t x750 = -1;
static int16_t x753 = INT16_MIN;
static uint16_t x755 = 2U;
static volatile int32_t t189 = 7;
int32_t x761 = 81724;
static int32_t t193 = -1883917;
int32_t x780 = 0;
int16_t x782 = 2;
static int16_t x783 = -1;
int8_t x786 = -2;
int8_t x787 = INT8_MIN;
volatile int32_t t198 = -128645;


void f0(void) {
    	volatile uint8_t x1 = UINT8_MAX;
	static uint32_t x3 = UINT32_MAX;
	uint8_t x4 = 15U;
	volatile int32_t t0 = -1;

    t0 = (((x1|x2)&x3)==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 87842U;
	uint8_t x6 = UINT8_MAX;
	static int64_t x7 = INT64_MIN;
	int32_t x8 = 340188813;
	volatile int32_t t1 = -2906;

    t1 = (((x5|x6)&x7)==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x10 = INT8_MAX;
	volatile int64_t x11 = INT64_MAX;
	int32_t t2 = -1;

    t2 = (((x9|x10)&x11)==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = -40378557;
	volatile uint16_t x15 = 27U;
	int32_t t3 = 179768;

    t3 = (((x13|x14)&x15)==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x17 = INT64_MIN;
	int8_t x18 = INT8_MIN;
	uint16_t x19 = 9U;
	volatile int32_t t4 = -24980;

    t4 = (((x17|x18)&x19)==x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x22 = -1;

    t5 = (((x21|x22)&x23)==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = 1220835264LL;
	volatile int32_t x26 = INT32_MIN;
	volatile int64_t x27 = -1LL;
	static int16_t x28 = INT16_MIN;
	volatile int32_t t6 = -13;

    t6 = (((x25|x26)&x27)==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MAX;
	int16_t x30 = 287;
	uint64_t x31 = 255811LLU;
	static uint64_t x32 = UINT64_MAX;

    t7 = (((x29|x30)&x31)==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = UINT64_MAX;
	volatile uint32_t x34 = 1221644114U;
	int32_t x35 = INT32_MIN;
	int32_t x36 = -1;

    t8 = (((x33|x34)&x35)==x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int64_t x37 = INT64_MAX;
	volatile uint8_t x38 = 2U;
	static volatile uint16_t x40 = UINT16_MAX;
	int32_t t9 = 1175;

    t9 = (((x37|x38)&x39)==x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x41 = UINT64_MAX;
	int32_t x42 = INT32_MIN;
	static int16_t x43 = INT16_MIN;
	volatile int32_t t10 = 755824932;

    t10 = (((x41|x42)&x43)==x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x45 = INT8_MIN;
	volatile int16_t x47 = INT16_MIN;
	static uint32_t x48 = 38703U;
	static volatile int32_t t11 = 35;

    t11 = (((x45|x46)&x47)==x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = 148477009U;
	static volatile int16_t x50 = INT16_MAX;
	int32_t x51 = -1;
	int8_t x52 = INT8_MIN;
	static int32_t t12 = -356;

    t12 = (((x49|x50)&x51)==x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MIN;
	int32_t x54 = -6766;
	static uint16_t x55 = 1U;

    t13 = (((x53|x54)&x55)==x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = -1;
	static volatile uint32_t x58 = UINT32_MAX;
	volatile int16_t x59 = INT16_MIN;
	int16_t x60 = -2;
	volatile int32_t t14 = -232196;

    t14 = (((x57|x58)&x59)==x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x61 = 52;
	int16_t x63 = INT16_MAX;
	int32_t t15 = 0;

    t15 = (((x61|x62)&x63)==x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint64_t x65 = 11LLU;
	volatile int8_t x66 = INT8_MIN;
	int64_t x67 = INT64_MAX;
	volatile int32_t t16 = 3533;

    t16 = (((x65|x66)&x67)==x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = INT32_MIN;
	int8_t x71 = INT8_MIN;
	int32_t x72 = -37455437;
	int32_t t17 = 104325637;

    t17 = (((x69|x70)&x71)==x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x74 = -23;
	int32_t x76 = INT32_MIN;

    t18 = (((x73|x74)&x75)==x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint16_t x77 = 1006U;
	int16_t x78 = INT16_MAX;
	int16_t x79 = INT16_MAX;
	int64_t x80 = 26LL;
	volatile int32_t t19 = -9721210;

    t19 = (((x77|x78)&x79)==x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = INT8_MAX;
	static volatile uint8_t x82 = 15U;
	static volatile uint64_t x83 = 9172LLU;
	int16_t x84 = 1047;
	volatile int32_t t20 = -1;

    t20 = (((x81|x82)&x83)==x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x85 = 2352950201960LLU;
	uint16_t x86 = 8U;
	volatile int64_t x88 = INT64_MIN;
	int32_t t21 = -26;

    t21 = (((x85|x86)&x87)==x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint8_t x89 = UINT8_MAX;
	uint16_t x90 = 110U;
	uint32_t x92 = UINT32_MAX;
	int32_t t22 = -128498093;

    t22 = (((x89|x90)&x91)==x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = -1LL;
	static volatile uint8_t x95 = UINT8_MAX;
	int64_t x96 = -1LL;
	static volatile int32_t t23 = 0;

    t23 = (((x93|x94)&x95)==x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t t24 = -3;

    t24 = (((x97|x98)&x99)==x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x102 = UINT8_MAX;
	volatile int32_t x103 = 425845756;

    t25 = (((x101|x102)&x103)==x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x106 = INT32_MIN;
	uint64_t x107 = UINT64_MAX;
	int32_t x108 = 4235;
	static volatile int32_t t26 = 31;

    t26 = (((x105|x106)&x107)==x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x109 = -1LL;
	int8_t x110 = -1;
	int16_t x111 = -6210;
	int64_t x112 = INT64_MIN;
	volatile int32_t t27 = 31182;

    t27 = (((x109|x110)&x111)==x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x113 = UINT64_MAX;
	int32_t x114 = INT32_MIN;
	uint8_t x115 = 0U;
	static volatile int32_t t28 = 3477;

    t28 = (((x113|x114)&x115)==x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint16_t x117 = 9126U;
	static int32_t x118 = -14198821;
	volatile int16_t x119 = INT16_MIN;
	int8_t x120 = -1;

    t29 = (((x117|x118)&x119)==x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = INT32_MAX;
	volatile uint8_t x122 = 2U;
	uint16_t x123 = 11U;

    t30 = (((x121|x122)&x123)==x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = -716;
	int16_t x126 = 1;
	int8_t x127 = INT8_MAX;
	uint64_t x128 = 2515630870793LLU;

    t31 = (((x125|x126)&x127)==x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = 10LL;
	int8_t x130 = INT8_MAX;
	static int64_t x131 = -1077883085387523943LL;
	int64_t x132 = INT64_MIN;
	int32_t t32 = -3011888;

    t32 = (((x129|x130)&x131)==x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = INT8_MIN;
	int32_t x134 = -1;
	int8_t x135 = INT8_MIN;
	uint8_t x136 = 3U;
	int32_t t33 = -2763;

    t33 = (((x133|x134)&x135)==x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = INT8_MIN;
	int64_t x139 = 2094289285434097LL;
	int16_t x140 = 0;
	int32_t t34 = -3646;

    t34 = (((x137|x138)&x139)==x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int64_t x141 = INT64_MIN;
	int64_t x142 = INT64_MIN;
	uint16_t x143 = UINT16_MAX;
	int32_t x144 = 163;
	volatile int32_t t35 = 501786;

    t35 = (((x141|x142)&x143)==x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x145 = INT32_MIN;
	int64_t x146 = -69703611778637LL;
	uint16_t x147 = 7265U;
	uint16_t x148 = 2U;

    t36 = (((x145|x146)&x147)==x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x150 = -1;
	static int64_t x151 = -120833119359LL;
	volatile int32_t t37 = -1135;

    t37 = (((x149|x150)&x151)==x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x153 = UINT64_MAX;
	uint16_t x155 = UINT16_MAX;
	static int32_t x156 = -1;

    t38 = (((x153|x154)&x155)==x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = INT16_MIN;
	static int32_t x158 = INT32_MIN;
	volatile int64_t x159 = 32960LL;
	int64_t x160 = INT64_MIN;
	static volatile int32_t t39 = 1245174;

    t39 = (((x157|x158)&x159)==x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x162 = 8475U;
	volatile int16_t x163 = INT16_MAX;
	int32_t x164 = INT32_MIN;
	int32_t t40 = -300823;

    t40 = (((x161|x162)&x163)==x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x165 = -1;
	volatile int64_t x166 = INT64_MIN;
	uint16_t x167 = 75U;
	int64_t x168 = INT64_MAX;
	volatile int32_t t41 = 906;

    t41 = (((x165|x166)&x167)==x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint8_t x169 = UINT8_MAX;
	static uint64_t x170 = 6998490381LLU;
	static int64_t x171 = INT64_MAX;
	uint8_t x172 = 101U;

    t42 = (((x169|x170)&x171)==x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = INT64_MAX;
	uint8_t x174 = UINT8_MAX;
	volatile int16_t x175 = -32;
	static int16_t x176 = INT16_MIN;
	int32_t t43 = -892073;

    t43 = (((x173|x174)&x175)==x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x177 = INT32_MAX;
	volatile int64_t x179 = INT64_MIN;
	volatile int32_t x180 = -1;
	static volatile int32_t t44 = 15547;

    t44 = (((x177|x178)&x179)==x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = INT64_MIN;
	static int16_t x182 = INT16_MAX;
	int16_t x183 = -1;
	uint64_t x184 = 670901403292465647LLU;
	int32_t t45 = -1052;

    t45 = (((x181|x182)&x183)==x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = INT8_MIN;
	static int16_t x187 = INT16_MIN;
	volatile int8_t x188 = -1;

    t46 = (((x185|x186)&x187)==x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = INT32_MIN;
	volatile uint32_t x190 = UINT32_MAX;
	static int32_t x192 = 2735508;

    t47 = (((x189|x190)&x191)==x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = INT8_MIN;
	int8_t x195 = INT8_MAX;
	int64_t x196 = INT64_MAX;
	volatile int32_t t48 = 629871459;

    t48 = (((x193|x194)&x195)==x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x199 = INT16_MIN;
	int32_t x200 = INT32_MIN;
	volatile int32_t t49 = 363;

    t49 = (((x197|x198)&x199)==x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x201 = 1;
	static int16_t x202 = -2;
	uint16_t x204 = 1U;
	int32_t t50 = -914;

    t50 = (((x201|x202)&x203)==x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint8_t x205 = 2U;
	int32_t x207 = INT32_MIN;
	int32_t t51 = 10;

    t51 = (((x205|x206)&x207)==x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint64_t x209 = UINT64_MAX;
	int16_t x211 = INT16_MIN;
	uint8_t x212 = 2U;
	volatile int32_t t52 = 1;

    t52 = (((x209|x210)&x211)==x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = -2;
	uint16_t x214 = 16U;
	static uint64_t x215 = UINT64_MAX;
	volatile uint8_t x216 = 4U;
	static int32_t t53 = -3340;

    t53 = (((x213|x214)&x215)==x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x217 = 1U;
	uint8_t x218 = UINT8_MAX;
	static volatile int32_t t54 = 68007931;

    t54 = (((x217|x218)&x219)==x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x221 = -1LL;
	int8_t x222 = -1;
	int16_t x223 = -57;
	int32_t t55 = 7196;

    t55 = (((x221|x222)&x223)==x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x225 = INT64_MIN;
	int64_t x226 = -116483LL;
	uint8_t x227 = 15U;
	volatile int32_t t56 = 105820;

    t56 = (((x225|x226)&x227)==x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint32_t x229 = UINT32_MAX;
	int64_t x230 = INT64_MIN;
	volatile int16_t x231 = INT16_MAX;
	int16_t x232 = 6;
	static int32_t t57 = 184686;

    t57 = (((x229|x230)&x231)==x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x235 = -1;
	uint32_t x236 = UINT32_MAX;
	volatile int32_t t58 = -2;

    t58 = (((x233|x234)&x235)==x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = INT8_MIN;
	static int64_t x238 = INT64_MIN;
	static volatile int16_t x239 = INT16_MIN;
	int16_t x240 = INT16_MAX;

    t59 = (((x237|x238)&x239)==x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x241 = 98U;
	uint32_t x243 = UINT32_MAX;
	volatile int8_t x244 = 1;
	volatile int32_t t60 = -1010;

    t60 = (((x241|x242)&x243)==x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = INT16_MIN;
	int64_t x246 = -7903LL;
	volatile uint64_t x247 = UINT64_MAX;
	int32_t t61 = 1;

    t61 = (((x245|x246)&x247)==x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = -20;
	volatile uint8_t x250 = 6U;
	static int16_t x251 = 14069;
	volatile int32_t t62 = -123798;

    t62 = (((x249|x250)&x251)==x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = -62;
	int16_t x254 = 1;
	int16_t x255 = INT16_MIN;
	static int32_t x256 = 8697462;
	volatile int32_t t63 = -1;

    t63 = (((x253|x254)&x255)==x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = -1LL;
	int16_t x259 = -1;
	volatile uint32_t x260 = 38U;
	volatile int32_t t64 = 308;

    t64 = (((x257|x258)&x259)==x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = INT32_MAX;
	int8_t x262 = 0;
	uint32_t x263 = UINT32_MAX;

    t65 = (((x261|x262)&x263)==x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x268 = INT16_MAX;
	int32_t t66 = -1;

    t66 = (((x265|x266)&x267)==x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x269 = 12303;
	uint16_t x270 = UINT16_MAX;
	uint8_t x271 = 2U;
	uint8_t x272 = UINT8_MAX;
	int32_t t67 = 25;

    t67 = (((x269|x270)&x271)==x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = -446232LL;
	static volatile uint16_t x275 = 10U;
	volatile int64_t x276 = INT64_MIN;
	volatile int32_t t68 = 259;

    t68 = (((x273|x274)&x275)==x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int32_t x278 = -564;
	int64_t x279 = INT64_MAX;
	int16_t x280 = INT16_MAX;

    t69 = (((x277|x278)&x279)==x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x282 = -6;
	volatile int64_t x283 = INT64_MIN;
	volatile uint64_t x284 = UINT64_MAX;
	int32_t t70 = 71645;

    t70 = (((x281|x282)&x283)==x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = INT8_MIN;
	int16_t x286 = INT16_MIN;
	int32_t x287 = INT32_MIN;
	static int8_t x288 = INT8_MAX;

    t71 = (((x285|x286)&x287)==x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = -1;
	uint8_t x290 = 105U;
	uint16_t x291 = 18476U;
	uint8_t x292 = 41U;
	volatile int32_t t72 = -299033;

    t72 = (((x289|x290)&x291)==x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x295 = -4;
	volatile int16_t x296 = INT16_MIN;
	volatile int32_t t73 = -4548635;

    t73 = (((x293|x294)&x295)==x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = -852923032124561277LL;
	int32_t x298 = INT32_MIN;
	volatile int8_t x299 = INT8_MIN;
	int8_t x300 = INT8_MIN;

    t74 = (((x297|x298)&x299)==x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = 29LL;
	int16_t x303 = -1;
	uint32_t x304 = 27U;
	int32_t t75 = 10;

    t75 = (((x301|x302)&x303)==x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x305 = 1014;
	int64_t x306 = 945LL;
	static int8_t x307 = INT8_MIN;
	int16_t x308 = INT16_MIN;
	int32_t t76 = -2;

    t76 = (((x305|x306)&x307)==x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x310 = INT8_MAX;
	static volatile int64_t x311 = INT64_MIN;

    t77 = (((x309|x310)&x311)==x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x313 = INT64_MAX;
	volatile int16_t x314 = -1;
	static int8_t x315 = -1;
	int8_t x316 = -29;
	static volatile int32_t t78 = -15738;

    t78 = (((x313|x314)&x315)==x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x317 = INT64_MAX;
	uint32_t x319 = 21598U;
	uint64_t x320 = 96LLU;

    t79 = (((x317|x318)&x319)==x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x321 = 8331009U;
	static volatile int16_t x323 = INT16_MIN;
	int64_t x324 = INT64_MIN;
	volatile int32_t t80 = 207697872;

    t80 = (((x321|x322)&x323)==x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x325 = 5U;
	volatile uint8_t x326 = UINT8_MAX;
	int16_t x327 = 1002;
	int16_t x328 = INT16_MAX;
	static volatile int32_t t81 = 7424;

    t81 = (((x325|x326)&x327)==x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x329 = INT16_MIN;
	volatile uint8_t x332 = UINT8_MAX;
	volatile int32_t t82 = -17;

    t82 = (((x329|x330)&x331)==x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x333 = INT8_MAX;
	volatile uint32_t x334 = 1835071215U;
	volatile uint64_t x335 = UINT64_MAX;
	static uint32_t x336 = UINT32_MAX;
	volatile int32_t t83 = 62296497;

    t83 = (((x333|x334)&x335)==x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = 1;
	static uint8_t x338 = 4U;
	int16_t x339 = INT16_MIN;
	volatile int64_t x340 = INT64_MIN;
	static int32_t t84 = -41;

    t84 = (((x337|x338)&x339)==x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = INT64_MIN;
	volatile uint64_t x343 = 6489LLU;
	uint8_t x344 = 1U;
	static volatile int32_t t85 = -99;

    t85 = (((x341|x342)&x343)==x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint16_t x345 = 1443U;
	int64_t x346 = -9316319101LL;
	int16_t x347 = INT16_MIN;
	uint64_t x348 = 24030999522802LLU;
	int32_t t86 = -3890;

    t86 = (((x345|x346)&x347)==x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint32_t x349 = 10967U;
	int32_t x350 = 404694970;
	int8_t x351 = -1;
	volatile int32_t t87 = 1395618;

    t87 = (((x349|x350)&x351)==x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x353 = -1LL;
	uint32_t x354 = 0U;
	uint8_t x355 = 44U;
	volatile int16_t x356 = INT16_MIN;
	volatile int32_t t88 = 2;

    t88 = (((x353|x354)&x355)==x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x357 = 5126590479167LL;
	static volatile int64_t x358 = 14539133299LL;
	int16_t x359 = -53;
	int16_t x360 = INT16_MIN;
	volatile int32_t t89 = 409;

    t89 = (((x357|x358)&x359)==x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x361 = 503960435161LLU;
	int16_t x362 = INT16_MAX;
	uint8_t x363 = 7U;
	uint64_t x364 = 0LLU;
	volatile int32_t t90 = 778003;

    t90 = (((x361|x362)&x363)==x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = -1LL;
	int8_t x366 = -38;
	int16_t x368 = -4;
	volatile int32_t t91 = -127302567;

    t91 = (((x365|x366)&x367)==x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint32_t x370 = 456191U;
	uint16_t x371 = 35U;
	volatile int32_t t92 = -1;

    t92 = (((x369|x370)&x371)==x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = -1;
	int16_t x374 = INT16_MIN;
	static volatile int16_t x375 = -16208;
	int64_t x376 = INT64_MIN;
	int32_t t93 = -6523395;

    t93 = (((x373|x374)&x375)==x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = 341;
	uint16_t x379 = 315U;
	uint16_t x380 = 13U;

    t94 = (((x377|x378)&x379)==x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x381 = UINT64_MAX;
	static uint16_t x383 = 1U;
	int64_t x384 = -525455LL;
	volatile int32_t t95 = 1;

    t95 = (((x381|x382)&x383)==x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = INT32_MIN;
	int8_t x386 = 2;
	uint32_t x387 = 2072536U;
	volatile int32_t t96 = 43135857;

    t96 = (((x385|x386)&x387)==x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x390 = -1;
	uint32_t x391 = 1293U;
	static int16_t x392 = INT16_MIN;
	volatile int32_t t97 = -61;

    t97 = (((x389|x390)&x391)==x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x393 = -1;
	int32_t x394 = -145320;
	uint64_t x395 = 503381906205724915LLU;
	int64_t x396 = -4983800LL;
	volatile int32_t t98 = 6404;

    t98 = (((x393|x394)&x395)==x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x397 = UINT8_MAX;
	volatile uint8_t x398 = 1U;
	volatile int32_t x399 = 658;
	int32_t x400 = INT32_MIN;
	volatile int32_t t99 = 28404553;

    t99 = (((x397|x398)&x399)==x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x401 = 12374709U;
	uint64_t x403 = 409437145863LLU;
	int16_t x404 = -57;
	int32_t t100 = -2;

    t100 = (((x401|x402)&x403)==x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x405 = -1;
	int8_t x406 = INT8_MIN;
	int16_t x408 = INT16_MIN;
	static int32_t t101 = -70;

    t101 = (((x405|x406)&x407)==x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = 3;
	static int16_t x410 = -556;
	uint8_t x411 = UINT8_MAX;
	int8_t x412 = -62;

    t102 = (((x409|x410)&x411)==x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint32_t x413 = UINT32_MAX;
	int8_t x414 = INT8_MAX;
	int64_t x415 = INT64_MAX;
	static volatile int8_t x416 = INT8_MIN;
	int32_t t103 = -6;

    t103 = (((x413|x414)&x415)==x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x418 = 1586322573LL;
	volatile int32_t t104 = -1;

    t104 = (((x417|x418)&x419)==x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x423 = INT32_MIN;
	uint16_t x424 = UINT16_MAX;

    t105 = (((x421|x422)&x423)==x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = INT64_MIN;
	static int32_t x427 = INT32_MIN;
	int16_t x428 = -1;
	static volatile int32_t t106 = 37013;

    t106 = (((x425|x426)&x427)==x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = INT16_MIN;
	int32_t x430 = 2993;
	int64_t x431 = -152063LL;
	uint64_t x432 = 165LLU;

    t107 = (((x429|x430)&x431)==x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = INT64_MIN;
	int64_t x434 = INT64_MIN;
	volatile int8_t x436 = INT8_MIN;

    t108 = (((x433|x434)&x435)==x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x437 = 25406U;
	volatile int8_t x438 = INT8_MIN;
	int16_t x439 = INT16_MAX;

    t109 = (((x437|x438)&x439)==x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = 1;
	static volatile uint8_t x442 = UINT8_MAX;
	int32_t t110 = 25399;

    t110 = (((x441|x442)&x443)==x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint16_t x446 = UINT16_MAX;
	uint8_t x447 = UINT8_MAX;
	static int64_t x448 = INT64_MIN;
	int32_t t111 = 1;

    t111 = (((x445|x446)&x447)==x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x449 = -149;
	int8_t x450 = INT8_MIN;
	volatile uint8_t x452 = UINT8_MAX;
	volatile int32_t t112 = -5962418;

    t112 = (((x449|x450)&x451)==x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile uint32_t x453 = 2771655U;
	volatile int8_t x454 = INT8_MIN;
	volatile int16_t x455 = 36;

    t113 = (((x453|x454)&x455)==x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint64_t x459 = 403632107251501LLU;
	int64_t x460 = 4348166004686562718LL;
	static volatile int32_t t114 = -681;

    t114 = (((x457|x458)&x459)==x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x461 = INT32_MAX;
	int8_t x463 = 9;
	uint8_t x464 = UINT8_MAX;
	int32_t t115 = 180023;

    t115 = (((x461|x462)&x463)==x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x465 = UINT8_MAX;
	int64_t x467 = -1LL;
	uint32_t x468 = 5692U;
	int32_t t116 = 6360;

    t116 = (((x465|x466)&x467)==x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x470 = 3841004454315861LLU;
	uint64_t x471 = 1461858399204303LLU;
	int32_t x472 = INT32_MIN;

    t117 = (((x469|x470)&x471)==x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = INT8_MAX;
	int8_t x474 = INT8_MIN;
	volatile int32_t t118 = 37272;

    t118 = (((x473|x474)&x475)==x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x477 = UINT8_MAX;
	uint64_t x480 = 262507829653LLU;

    t119 = (((x477|x478)&x479)==x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x481 = 558247061U;
	static uint8_t x482 = 14U;
	int64_t x483 = INT64_MAX;
	volatile int32_t t120 = 15389968;

    t120 = (((x481|x482)&x483)==x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = INT16_MIN;
	static int16_t x486 = -1559;
	uint32_t x488 = UINT32_MAX;
	int32_t t121 = -26286;

    t121 = (((x485|x486)&x487)==x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = INT8_MIN;
	int32_t x490 = -55905008;
	uint64_t x491 = 31396LLU;
	int16_t x492 = INT16_MAX;
	int32_t t122 = 47776506;

    t122 = (((x489|x490)&x491)==x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = -1LL;
	static int16_t x494 = -408;
	int8_t x495 = 17;
	int16_t x496 = -14;
	int32_t t123 = 188318831;

    t123 = (((x493|x494)&x495)==x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = -1;
	uint64_t x498 = 78LLU;
	static uint64_t x499 = 4874928407LLU;
	int32_t x500 = -6170492;
	volatile int32_t t124 = -879;

    t124 = (((x497|x498)&x499)==x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x501 = INT32_MIN;
	static uint64_t x502 = 3403493236960LLU;
	int16_t x503 = 0;
	uint16_t x504 = 92U;
	int32_t t125 = 76385436;

    t125 = (((x501|x502)&x503)==x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x506 = 57U;
	int16_t x507 = INT16_MIN;
	int32_t x508 = -1;
	static volatile int32_t t126 = -121;

    t126 = (((x505|x506)&x507)==x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x509 = UINT8_MAX;
	volatile int64_t x510 = -669544690746LL;
	volatile uint16_t x511 = 51U;
	uint32_t x512 = 3551U;
	volatile int32_t t127 = -175972;

    t127 = (((x509|x510)&x511)==x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x513 = INT64_MAX;
	int8_t x514 = 1;
	uint8_t x515 = UINT8_MAX;
	int64_t x516 = -339LL;
	int32_t t128 = 388;

    t128 = (((x513|x514)&x515)==x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint16_t x517 = UINT16_MAX;
	volatile int8_t x518 = INT8_MIN;
	int8_t x519 = -1;
	int8_t x520 = INT8_MIN;
	int32_t t129 = 0;

    t129 = (((x517|x518)&x519)==x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint64_t x521 = 84267717LLU;
	int64_t x522 = 47201180662LL;
	int16_t x523 = INT16_MIN;
	int32_t x524 = INT32_MAX;
	static int32_t t130 = 128123918;

    t130 = (((x521|x522)&x523)==x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x525 = INT32_MAX;
	int8_t x527 = INT8_MIN;
	static uint8_t x528 = 4U;
	volatile int32_t t131 = 0;

    t131 = (((x525|x526)&x527)==x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint16_t x529 = UINT16_MAX;
	static int8_t x530 = 2;
	int64_t x531 = INT64_MIN;
	int32_t t132 = 0;

    t132 = (((x529|x530)&x531)==x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x534 = UINT16_MAX;
	static uint32_t x535 = 0U;
	int8_t x536 = INT8_MIN;
	static volatile int32_t t133 = -1107516;

    t133 = (((x533|x534)&x535)==x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x537 = 3820833553604512632LLU;
	uint64_t x538 = UINT64_MAX;
	uint32_t x539 = 177U;
	volatile int32_t t134 = 1491506;

    t134 = (((x537|x538)&x539)==x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = INT16_MAX;
	volatile uint32_t x542 = UINT32_MAX;
	int32_t x543 = INT32_MAX;

    t135 = (((x541|x542)&x543)==x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint16_t x546 = 0U;
	int32_t x547 = 7472;

    t136 = (((x545|x546)&x547)==x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x549 = UINT16_MAX;
	volatile uint16_t x550 = UINT16_MAX;
	int32_t x552 = -1;
	static volatile int32_t t137 = 0;

    t137 = (((x549|x550)&x551)==x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x553 = -7;
	static uint64_t x554 = 998955446235LLU;
	volatile int16_t x555 = INT16_MIN;
	uint8_t x556 = UINT8_MAX;
	int32_t t138 = 13899;

    t138 = (((x553|x554)&x555)==x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x557 = -41;
	uint64_t x558 = UINT64_MAX;
	uint8_t x559 = 22U;
	volatile int32_t t139 = -850;

    t139 = (((x557|x558)&x559)==x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x561 = 46462125293LLU;
	volatile uint16_t x563 = 106U;
	uint64_t x564 = UINT64_MAX;
	int32_t t140 = 63;

    t140 = (((x561|x562)&x563)==x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x565 = INT16_MIN;
	int8_t x566 = INT8_MAX;
	int64_t x567 = INT64_MIN;
	int64_t x568 = -128640108391491LL;
	volatile int32_t t141 = 796202894;

    t141 = (((x565|x566)&x567)==x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint32_t x569 = UINT32_MAX;
	int64_t x571 = -253606256757627LL;
	int64_t x572 = -139126286226LL;
	int32_t t142 = 37;

    t142 = (((x569|x570)&x571)==x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = -1;
	int8_t x574 = 5;
	uint64_t x575 = 6520894LLU;
	static uint32_t x576 = UINT32_MAX;
	int32_t t143 = -121589090;

    t143 = (((x573|x574)&x575)==x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x577 = 30U;
	int16_t x578 = -1;
	static int64_t x579 = INT64_MIN;
	static volatile int16_t x580 = 56;
	volatile int32_t t144 = 380;

    t144 = (((x577|x578)&x579)==x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x583 = UINT32_MAX;
	static uint32_t x584 = 21404U;
	volatile int32_t t145 = 12630;

    t145 = (((x581|x582)&x583)==x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x585 = 1054;
	int16_t x586 = -1;
	int32_t x587 = -1;
	volatile int32_t t146 = -11;

    t146 = (((x585|x586)&x587)==x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = 6;
	int8_t x590 = INT8_MIN;
	static volatile int8_t x591 = INT8_MIN;
	uint32_t x592 = 129528589U;
	volatile int32_t t147 = -558704751;

    t147 = (((x589|x590)&x591)==x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x593 = 28416431;
	uint32_t x595 = 61399U;
	uint64_t x596 = 2LLU;
	static int32_t t148 = 831;

    t148 = (((x593|x594)&x595)==x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x598 = INT32_MIN;
	volatile int8_t x600 = -1;

    t149 = (((x597|x598)&x599)==x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x601 = -1;
	int8_t x603 = INT8_MAX;
	static volatile uint8_t x604 = 1U;

    t150 = (((x601|x602)&x603)==x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x605 = 455U;
	volatile int64_t x606 = 2067120856117551570LL;
	volatile uint8_t x607 = 25U;
	static int8_t x608 = 11;
	int32_t t151 = 8;

    t151 = (((x605|x606)&x607)==x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x610 = 7534U;
	uint32_t x611 = UINT32_MAX;
	int32_t t152 = -103630232;

    t152 = (((x609|x610)&x611)==x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = -1LL;
	volatile int16_t x614 = INT16_MIN;
	int8_t x615 = INT8_MIN;
	int32_t t153 = 56;

    t153 = (((x613|x614)&x615)==x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = INT32_MIN;
	uint32_t x618 = 30U;
	uint16_t x619 = 2037U;
	uint8_t x620 = 46U;
	int32_t t154 = -112;

    t154 = (((x617|x618)&x619)==x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x624 = UINT8_MAX;
	int32_t t155 = 569456;

    t155 = (((x621|x622)&x623)==x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x625 = 26U;
	int16_t x626 = -1;
	uint8_t x627 = 44U;
	int32_t t156 = -1;

    t156 = (((x625|x626)&x627)==x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x629 = INT8_MIN;
	uint32_t x630 = 69312414U;
	static uint16_t x631 = 2U;
	uint16_t x632 = 19U;
	static volatile int32_t t157 = -169;

    t157 = (((x629|x630)&x631)==x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint16_t x633 = 741U;
	int16_t x636 = INT16_MAX;

    t158 = (((x633|x634)&x635)==x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x637 = -103;
	volatile int32_t x638 = 441;
	int16_t x639 = INT16_MIN;
	static volatile uint8_t x640 = 118U;
	volatile int32_t t159 = 13226257;

    t159 = (((x637|x638)&x639)==x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = -4607;
	int64_t x643 = 388951808LL;
	static volatile int16_t x644 = -1;
	volatile int32_t t160 = 6550445;

    t160 = (((x641|x642)&x643)==x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x646 = INT16_MAX;
	volatile int64_t x647 = INT64_MIN;
	static volatile int8_t x648 = INT8_MAX;
	volatile int32_t t161 = 2682;

    t161 = (((x645|x646)&x647)==x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x650 = -1LL;
	static uint32_t x651 = 1493872024U;
	uint64_t x652 = 4079206582214641525LLU;
	volatile int32_t t162 = -3;

    t162 = (((x649|x650)&x651)==x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int64_t x653 = 33877LL;
	static int16_t x654 = 81;
	int8_t x655 = INT8_MAX;
	static uint64_t x656 = 443LLU;
	volatile int32_t t163 = 1544;

    t163 = (((x653|x654)&x655)==x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x657 = 1313002553830LLU;
	int32_t x660 = -1;
	int32_t t164 = -13141003;

    t164 = (((x657|x658)&x659)==x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x663 = 19;
	int64_t x664 = INT64_MIN;
	volatile int32_t t165 = 1641073;

    t165 = (((x661|x662)&x663)==x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x665 = 9U;
	uint64_t x666 = UINT64_MAX;
	int8_t x667 = -12;
	static uint16_t x668 = UINT16_MAX;
	static volatile int32_t t166 = -656767009;

    t166 = (((x665|x666)&x667)==x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile uint16_t x669 = 6280U;
	uint64_t x670 = UINT64_MAX;
	uint64_t x671 = UINT64_MAX;
	volatile int32_t x672 = -1;
	int32_t t167 = 55001132;

    t167 = (((x669|x670)&x671)==x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int8_t x673 = INT8_MIN;
	volatile int32_t x674 = INT32_MAX;
	uint16_t x675 = UINT16_MAX;
	int32_t x676 = 409;
	static int32_t t168 = -607561;

    t168 = (((x673|x674)&x675)==x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x677 = INT64_MIN;
	int8_t x678 = 5;
	int32_t x679 = INT32_MAX;
	static volatile int32_t t169 = 305904;

    t169 = (((x677|x678)&x679)==x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int16_t x681 = -26;
	uint16_t x682 = 1U;
	static int32_t x683 = INT32_MAX;
	static int32_t t170 = -1;

    t170 = (((x681|x682)&x683)==x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x685 = INT64_MAX;
	int32_t x686 = -128092072;
	int64_t x687 = INT64_MAX;
	volatile uint64_t x688 = UINT64_MAX;
	static volatile int32_t t171 = -256232;

    t171 = (((x685|x686)&x687)==x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x689 = INT16_MAX;
	int16_t x691 = INT16_MIN;
	uint64_t x692 = 6293470LLU;
	int32_t t172 = 117308;

    t172 = (((x689|x690)&x691)==x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x694 = 14U;
	volatile int64_t x695 = -25841853886929LL;
	volatile int32_t t173 = -1325226;

    t173 = (((x693|x694)&x695)==x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x697 = 3648U;
	static int16_t x698 = -22;
	static int8_t x699 = -2;
	int32_t t174 = -5515860;

    t174 = (((x697|x698)&x699)==x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x701 = INT16_MIN;
	int16_t x702 = -92;
	volatile int64_t x704 = INT64_MIN;
	volatile int32_t t175 = 5499886;

    t175 = (((x701|x702)&x703)==x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x705 = -450967935089338225LL;
	int8_t x707 = -1;
	volatile int16_t x708 = -1134;

    t176 = (((x705|x706)&x707)==x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x709 = 5473737LLU;
	uint16_t x710 = 2267U;
	int8_t x711 = INT8_MAX;
	uint8_t x712 = UINT8_MAX;
	int32_t t177 = 0;

    t177 = (((x709|x710)&x711)==x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x714 = 943LLU;
	volatile int64_t x715 = INT64_MAX;
	volatile int16_t x716 = -1506;
	int32_t t178 = 3283;

    t178 = (((x713|x714)&x715)==x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x717 = INT64_MIN;
	int64_t x719 = INT64_MIN;
	static uint64_t x720 = 333301175409214LLU;
	int32_t t179 = 164073;

    t179 = (((x717|x718)&x719)==x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x721 = INT64_MIN;
	int32_t x722 = INT32_MAX;
	volatile uint32_t x724 = 62255U;
	int32_t t180 = -31;

    t180 = (((x721|x722)&x723)==x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x725 = -1LL;
	uint16_t x726 = UINT16_MAX;
	int8_t x727 = INT8_MIN;
	uint32_t x728 = 48259111U;
	int32_t t181 = -7;

    t181 = (((x725|x726)&x727)==x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile uint64_t x729 = 206306LLU;
	int32_t x731 = -11244;
	uint16_t x732 = UINT16_MAX;
	volatile int32_t t182 = -4338;

    t182 = (((x729|x730)&x731)==x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x733 = INT32_MIN;
	int16_t x734 = INT16_MIN;
	int32_t x735 = -372367308;
	static int16_t x736 = -12;

    t183 = (((x733|x734)&x735)==x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x737 = UINT64_MAX;
	int64_t x738 = INT64_MIN;
	int32_t x740 = INT32_MIN;
	volatile int32_t t184 = 7;

    t184 = (((x737|x738)&x739)==x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x741 = 910794LLU;
	int16_t x742 = INT16_MIN;
	static volatile int32_t x743 = INT32_MIN;
	static int16_t x744 = INT16_MIN;
	static volatile int32_t t185 = -15495;

    t185 = (((x741|x742)&x743)==x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int32_t x745 = -74;
	uint32_t x747 = 7914U;
	int64_t x748 = INT64_MIN;
	volatile int32_t t186 = 6065205;

    t186 = (((x745|x746)&x747)==x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x749 = -1LL;
	int8_t x751 = -1;
	uint32_t x752 = UINT32_MAX;
	int32_t t187 = 2502818;

    t187 = (((x749|x750)&x751)==x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x754 = INT32_MIN;
	uint32_t x756 = UINT32_MAX;
	volatile int32_t t188 = 94471;

    t188 = (((x753|x754)&x755)==x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = INT32_MIN;
	volatile uint64_t x758 = UINT64_MAX;
	static uint8_t x759 = 3U;
	static int32_t x760 = INT32_MIN;

    t189 = (((x757|x758)&x759)==x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x762 = -1;
	uint16_t x763 = UINT16_MAX;
	static int32_t x764 = -1;
	int32_t t190 = -22734;

    t190 = (((x761|x762)&x763)==x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x765 = -36207348;
	static int8_t x766 = INT8_MAX;
	int64_t x767 = INT64_MIN;
	volatile uint64_t x768 = UINT64_MAX;
	static volatile int32_t t191 = 295128549;

    t191 = (((x765|x766)&x767)==x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x769 = 25236LL;
	int16_t x770 = INT16_MIN;
	uint64_t x771 = UINT64_MAX;
	int32_t x772 = 16349;
	volatile int32_t t192 = -218;

    t192 = (((x769|x770)&x771)==x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int32_t x773 = 135053094;
	static volatile uint64_t x774 = UINT64_MAX;
	uint32_t x775 = 1282U;
	uint64_t x776 = 33063904LLU;

    t193 = (((x773|x774)&x775)==x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x777 = -1;
	int8_t x778 = -1;
	int8_t x779 = INT8_MIN;
	int32_t t194 = 97;

    t194 = (((x777|x778)&x779)==x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x781 = INT64_MIN;
	int32_t x784 = INT32_MIN;
	static int32_t t195 = 0;

    t195 = (((x781|x782)&x783)==x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = INT16_MIN;
	int8_t x788 = -1;
	int32_t t196 = 59;

    t196 = (((x785|x786)&x787)==x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x789 = -10;
	static int8_t x790 = -1;
	int16_t x791 = INT16_MAX;
	uint8_t x792 = 115U;
	int32_t t197 = -10625846;

    t197 = (((x789|x790)&x791)==x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x793 = INT32_MIN;
	static int64_t x794 = -9828520165686LL;
	int8_t x795 = INT8_MIN;
	int8_t x796 = -1;

    t198 = (((x793|x794)&x795)==x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = INT32_MAX;
	int16_t x798 = INT16_MIN;
	static uint16_t x799 = 861U;
	int64_t x800 = INT64_MIN;
	volatile int32_t t199 = 14992;

    t199 = (((x797|x798)&x799)==x800);

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


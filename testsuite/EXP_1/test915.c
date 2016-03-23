
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

int32_t x8 = INT32_MIN;
int32_t x9 = INT32_MIN;
uint64_t x11 = UINT64_MAX;
int32_t x17 = INT32_MIN;
static int8_t x19 = 13;
int8_t x23 = INT8_MAX;
int32_t x24 = INT32_MIN;
int32_t x30 = INT32_MIN;
static int16_t x32 = INT16_MAX;
int32_t x33 = INT32_MIN;
int64_t x44 = -1LL;
int32_t x47 = -12;
static volatile int8_t x48 = INT8_MIN;
static int32_t x50 = INT32_MIN;
uint16_t x53 = 2U;
static volatile int32_t t12 = -13;
int32_t t14 = 421;
static int16_t x70 = INT16_MAX;
int64_t x73 = 3LL;
static uint8_t x74 = 1U;
volatile int64_t x79 = INT64_MAX;
int64_t x80 = INT64_MIN;
int8_t x87 = INT8_MIN;
int16_t x89 = 11;
uint32_t x92 = 1353488U;
int16_t x97 = INT16_MAX;
static int32_t x98 = -1;
volatile int32_t x104 = INT32_MIN;
int8_t x105 = -40;
static volatile int16_t x109 = INT16_MIN;
int8_t x111 = -1;
volatile int32_t t25 = -13248;
int16_t x122 = INT16_MIN;
int32_t t27 = -20;
int32_t t28 = 0;
uint16_t x130 = UINT16_MAX;
volatile int32_t t30 = -261486;
volatile int32_t t31 = 34;
volatile int32_t x152 = INT32_MIN;
static volatile int32_t t34 = 81010;
volatile int32_t t35 = -670231;
uint32_t x157 = 9198U;
volatile uint32_t x163 = UINT32_MAX;
volatile uint64_t t37 = 270157455521073LLU;
static volatile int32_t t38 = 2;
int16_t x170 = INT16_MIN;
int64_t x171 = -126461745345258LL;
volatile int32_t x174 = 18213;
int64_t x176 = INT64_MAX;
int64_t x187 = INT64_MIN;
volatile int32_t x190 = -115;
volatile int32_t x194 = 11060;
volatile int16_t x197 = 120;
static int8_t x205 = -63;
uint32_t t50 = 869U;
int16_t x220 = INT16_MAX;
volatile int64_t t52 = 193LL;
int32_t x232 = 590714827;
volatile uint64_t x247 = 81937110072541901LLU;
uint64_t x250 = 239414776603749669LLU;
volatile int64_t x251 = INT64_MAX;
uint64_t x255 = 2267LLU;
static uint64_t x267 = 699133649509534300LLU;
uint16_t x268 = 4U;
static uint16_t x271 = 860U;
int32_t x274 = 381930;
static int16_t x277 = 2;
int8_t x280 = INT8_MIN;
int32_t x282 = INT32_MIN;
volatile int64_t t66 = 37LL;
int8_t x285 = INT8_MIN;
int64_t x286 = -208050302290LL;
uint64_t x287 = 3433102375570850LLU;
volatile int64_t t67 = -44334319LL;
static volatile int16_t x291 = 75;
static int8_t x292 = 26;
volatile int32_t t68 = 2909520;
static volatile int64_t t69 = 907872507366903LL;
volatile int8_t x310 = INT8_MIN;
int16_t x318 = INT16_MIN;
volatile uint64_t t75 = 7258764478LLU;
int64_t x326 = 280804595471855LL;
int16_t x328 = -1;
int64_t x330 = -839986830544LL;
volatile int32_t t78 = 137;
volatile uint8_t x342 = UINT8_MAX;
static int32_t t83 = -96777027;
uint16_t x355 = 8U;
volatile int32_t t84 = 131130725;
static int64_t x359 = -1LL;
volatile uint16_t x362 = UINT16_MAX;
int16_t x365 = -1;
int32_t x368 = INT32_MIN;
uint16_t x386 = UINT16_MAX;
static int32_t x391 = INT32_MIN;
int16_t x396 = -1;
int64_t x404 = -1LL;
int16_t x416 = INT16_MIN;
volatile int32_t x419 = -1;
uint64_t x432 = UINT64_MAX;
static volatile uint64_t t103 = 2866145925029520814LLU;
uint8_t x436 = 4U;
int8_t x437 = 10;
uint16_t x441 = 53U;
static volatile int32_t t107 = 180196;
uint8_t x453 = UINT8_MAX;
int32_t x465 = INT32_MIN;
int8_t x466 = INT8_MIN;
static int8_t x470 = -3;
static int32_t x471 = INT32_MIN;
int32_t t113 = 2744;
uint8_t x478 = 1U;
volatile int32_t x479 = -292740;
volatile int32_t t115 = -1221144;
static int32_t x488 = INT32_MIN;
static volatile int32_t t117 = 65;
uint8_t x510 = 10U;
int16_t x511 = INT16_MIN;
int64_t x520 = INT64_MIN;
uint32_t x524 = UINT32_MAX;
int16_t x526 = INT16_MIN;
uint8_t x528 = 1U;
static int16_t x529 = INT16_MIN;
static volatile int32_t t127 = 226329;
int64_t x533 = INT64_MAX;
int16_t x536 = -8126;
volatile int64_t x540 = INT64_MIN;
int64_t t129 = -7LL;
int64_t x548 = INT64_MIN;
int32_t x551 = 6280;
volatile uint32_t t132 = 2364826U;
static int8_t x554 = -1;
uint16_t x555 = 0U;
int16_t x565 = INT16_MAX;
int64_t x566 = -1LL;
int64_t x570 = -115830185LL;
uint64_t x571 = 2661492205767461469LLU;
int32_t t137 = 4777435;
int32_t x595 = INT32_MAX;
static int16_t x596 = 3826;
volatile int8_t x597 = INT8_MIN;
static int32_t t146 = 0;
static int32_t x628 = INT32_MIN;
volatile int32_t t150 = 24367;
int32_t x631 = -1;
static int8_t x633 = 45;
static int8_t x636 = -1;
int32_t t152 = 7;
uint8_t x641 = UINT8_MAX;
static uint16_t x644 = 1758U;
uint32_t t156 = 8079U;
volatile uint32_t x659 = UINT32_MAX;
uint16_t x661 = 12U;
static int64_t x668 = INT64_MIN;
int32_t x669 = INT32_MIN;
static int32_t x670 = INT32_MIN;
volatile int8_t x679 = -13;
int8_t x680 = INT8_MIN;
static int32_t t163 = 287857;
int32_t x704 = INT32_MIN;
uint32_t x705 = 4043U;
static uint64_t x706 = 1766353937792LLU;
int32_t t169 = 3426678;
static int16_t x710 = INT16_MIN;
int64_t x712 = INT64_MIN;
int64_t x719 = 78743378523507708LL;
uint8_t x721 = 57U;
volatile int16_t x724 = INT16_MIN;
volatile int32_t t173 = 226;
static int8_t x727 = INT8_MIN;
int32_t t175 = 62576181;
int64_t x733 = 47583091LL;
uint16_t x735 = UINT16_MAX;
uint32_t x737 = UINT32_MAX;
uint32_t x741 = UINT32_MAX;
int32_t x746 = INT32_MIN;
static int8_t x756 = 1;
volatile int32_t t181 = 2;
uint8_t x758 = UINT8_MAX;
int16_t x759 = -5;
uint16_t x771 = 1892U;
volatile int32_t t185 = 7;
int32_t x778 = 12;
int8_t x779 = INT8_MIN;
int16_t x780 = INT16_MIN;
int8_t x789 = INT8_MIN;
int32_t t190 = 1923227;
static int64_t x805 = INT64_MIN;
static int32_t t194 = 60;
uint8_t x809 = 1U;
uint64_t x813 = UINT64_MAX;
int32_t x819 = INT32_MAX;
uint32_t x822 = 519515U;
static volatile uint16_t x823 = UINT16_MAX;
uint64_t x824 = UINT64_MAX;
volatile uint64_t t198 = 3LLU;
int16_t x825 = 1;
volatile int32_t t199 = -323671;


void f0(void) {
    	static int8_t x1 = -1;
	volatile int16_t x2 = INT16_MAX;
	int16_t x3 = INT16_MIN;
	int16_t x4 = -1;
	static volatile int32_t t0 = -678517688;

    t0 = (((x1%x2)<=x3)%x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile uint16_t x5 = UINT16_MAX;
	int32_t x6 = INT32_MAX;
	static uint8_t x7 = UINT8_MAX;
	volatile int32_t t1 = -307477617;

    t1 = (((x5%x6)<=x7)%x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x10 = -1;
	uint8_t x12 = UINT8_MAX;
	int32_t t2 = -5;

    t2 = (((x9%x10)<=x11)%x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x18 = INT32_MAX;
	int64_t x20 = INT64_MIN;
	volatile int64_t t3 = 1LL;

    t3 = (((x17%x18)<=x19)%x20);

    if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x21 = 453;
	int32_t x22 = -1;
	volatile int32_t t4 = 437926945;

    t4 = (((x21%x22)<=x23)%x24);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x25 = -1LL;
	int64_t x26 = INT64_MIN;
	uint16_t x27 = 855U;
	int64_t x28 = INT64_MIN;
	int64_t t5 = 4LL;

    t5 = (((x25%x26)<=x27)%x28);

    if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x29 = UINT32_MAX;
	volatile int8_t x31 = 50;
	int32_t t6 = -21637327;

    t6 = (((x29%x30)<=x31)%x32);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x34 = INT64_MIN;
	static uint32_t x35 = UINT32_MAX;
	volatile int8_t x36 = INT8_MIN;
	int32_t t7 = -57520958;

    t7 = (((x33%x34)<=x35)%x36);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x37 = -1;
	int32_t x38 = 2569122;
	int8_t x39 = -1;
	int16_t x40 = 3345;
	int32_t t8 = -2277750;

    t8 = (((x37%x38)<=x39)%x40);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x41 = 5692;
	int16_t x42 = INT16_MIN;
	static int32_t x43 = INT32_MIN;
	volatile int64_t t9 = 9LL;

    t9 = (((x41%x42)<=x43)%x44);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x45 = INT8_MAX;
	uint64_t x46 = UINT64_MAX;
	volatile int32_t t10 = -905138;

    t10 = (((x45%x46)<=x47)%x48);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile uint32_t x49 = 429U;
	int16_t x51 = INT16_MIN;
	static volatile uint16_t x52 = 9U;
	int32_t t11 = -483;

    t11 = (((x49%x50)<=x51)%x52);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x54 = -1;
	volatile int32_t x55 = -1;
	volatile int16_t x56 = INT16_MAX;

    t12 = (((x53%x54)<=x55)%x56);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x57 = UINT64_MAX;
	int64_t x58 = INT64_MIN;
	int32_t x59 = INT32_MAX;
	volatile uint8_t x60 = 52U;
	volatile int32_t t13 = 4;

    t13 = (((x57%x58)<=x59)%x60);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int32_t x65 = 3;
	int8_t x66 = 1;
	uint16_t x67 = 43U;
	int16_t x68 = INT16_MIN;

    t14 = (((x65%x66)<=x67)%x68);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x69 = INT64_MAX;
	volatile uint8_t x71 = UINT8_MAX;
	uint32_t x72 = 3118009U;
	static volatile uint32_t t15 = 1478551U;

    t15 = (((x69%x70)<=x71)%x72);

    if (t15 != 1U) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x75 = -290279559115LL;
	static int32_t x76 = 60666;
	volatile int32_t t16 = 0;

    t16 = (((x73%x74)<=x75)%x76);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint16_t x77 = UINT16_MAX;
	int64_t x78 = -1354395943796562LL;
	static int64_t t17 = 872907LL;

    t17 = (((x77%x78)<=x79)%x80);

    if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x81 = 1977377LL;
	static uint16_t x82 = 6597U;
	volatile int8_t x83 = INT8_MIN;
	uint8_t x84 = 56U;
	volatile int32_t t18 = 1;

    t18 = (((x81%x82)<=x83)%x84);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x85 = 23U;
	uint32_t x86 = UINT32_MAX;
	uint16_t x88 = 9167U;
	int32_t t19 = 82;

    t19 = (((x85%x86)<=x87)%x88);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x90 = INT16_MAX;
	int32_t x91 = 23939;
	uint32_t t20 = 493U;

    t20 = (((x89%x90)<=x91)%x92);

    if (t20 != 1U) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x93 = INT16_MAX;
	int8_t x94 = INT8_MIN;
	int64_t x95 = -1LL;
	uint64_t x96 = UINT64_MAX;
	static volatile uint64_t t21 = 500382835001781643LLU;

    t21 = (((x93%x94)<=x95)%x96);

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x99 = INT16_MIN;
	int64_t x100 = INT64_MAX;
	int64_t t22 = -41259571838LL;

    t22 = (((x97%x98)<=x99)%x100);

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x101 = 211260;
	uint16_t x102 = 44U;
	static uint64_t x103 = 169191853LLU;
	volatile int32_t t23 = -31269000;

    t23 = (((x101%x102)<=x103)%x104);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x106 = INT32_MIN;
	uint64_t x107 = 792397477932241062LLU;
	static int16_t x108 = -1;
	int32_t t24 = 1174;

    t24 = (((x105%x106)<=x107)%x108);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x110 = INT8_MIN;
	int32_t x112 = INT32_MIN;

    t25 = (((x109%x110)<=x111)%x112);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x113 = -1;
	static uint8_t x114 = UINT8_MAX;
	int64_t x115 = INT64_MIN;
	uint32_t x116 = 31U;
	static uint32_t t26 = 13373292U;

    t26 = (((x113%x114)<=x115)%x116);

    if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x121 = UINT32_MAX;
	int32_t x123 = INT32_MIN;
	int16_t x124 = -1;

    t27 = (((x121%x122)<=x123)%x124);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x125 = UINT8_MAX;
	int64_t x126 = INT64_MAX;
	int64_t x127 = -1LL;
	int8_t x128 = -19;

    t28 = (((x125%x126)<=x127)%x128);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x129 = UINT64_MAX;
	volatile int8_t x131 = INT8_MIN;
	static int16_t x132 = INT16_MAX;
	int32_t t29 = 24151911;

    t29 = (((x129%x130)<=x131)%x132);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x133 = 58U;
	int16_t x134 = INT16_MIN;
	int32_t x135 = -1;
	static int16_t x136 = 213;

    t30 = (((x133%x134)<=x135)%x136);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x137 = INT64_MIN;
	uint8_t x138 = 2U;
	static volatile int8_t x139 = INT8_MIN;
	volatile int32_t x140 = -2237295;

    t31 = (((x137%x138)<=x139)%x140);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x141 = INT32_MAX;
	volatile int32_t x142 = -1;
	int8_t x143 = INT8_MIN;
	int8_t x144 = -1;
	static int32_t t32 = 1742113;

    t32 = (((x141%x142)<=x143)%x144);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x145 = -1;
	uint16_t x146 = 8445U;
	int64_t x147 = INT64_MAX;
	int16_t x148 = -1;
	volatile int32_t t33 = 514;

    t33 = (((x145%x146)<=x147)%x148);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x149 = UINT8_MAX;
	int64_t x150 = INT64_MAX;
	int8_t x151 = INT8_MIN;

    t34 = (((x149%x150)<=x151)%x152);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x153 = INT32_MIN;
	volatile int8_t x154 = -1;
	int32_t x155 = INT32_MIN;
	static int8_t x156 = INT8_MIN;

    t35 = (((x153%x154)<=x155)%x156);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x158 = -2661752631155LL;
	int16_t x159 = INT16_MIN;
	int8_t x160 = 1;
	volatile int32_t t36 = -97138;

    t36 = (((x157%x158)<=x159)%x160);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x161 = INT8_MAX;
	int64_t x162 = 12347863098093LL;
	uint64_t x164 = 24154612694690LLU;

    t37 = (((x161%x162)<=x163)%x164);

    if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x165 = UINT8_MAX;
	int64_t x166 = 535LL;
	int16_t x167 = INT16_MIN;
	int32_t x168 = INT32_MAX;

    t38 = (((x165%x166)<=x167)%x168);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x169 = -1;
	static int8_t x172 = INT8_MAX;
	static int32_t t39 = -1580947;

    t39 = (((x169%x170)<=x171)%x172);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x173 = UINT64_MAX;
	volatile uint64_t x175 = 40LLU;
	int64_t t40 = 3252473LL;

    t40 = (((x173%x174)<=x175)%x176);

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x177 = INT16_MAX;
	volatile int8_t x178 = -1;
	uint64_t x179 = UINT64_MAX;
	static int16_t x180 = INT16_MAX;
	int32_t t41 = 379322873;

    t41 = (((x177%x178)<=x179)%x180);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x181 = INT16_MIN;
	volatile uint64_t x182 = 41664967479LLU;
	int32_t x183 = 46;
	int8_t x184 = 48;
	volatile int32_t t42 = 1;

    t42 = (((x181%x182)<=x183)%x184);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x185 = INT8_MIN;
	int64_t x186 = INT64_MIN;
	static int32_t x188 = INT32_MIN;
	int32_t t43 = 36;

    t43 = (((x185%x186)<=x187)%x188);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x189 = INT8_MIN;
	uint16_t x191 = 68U;
	static int16_t x192 = INT16_MAX;
	int32_t t44 = 31092;

    t44 = (((x189%x190)<=x191)%x192);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x193 = -1LL;
	static int64_t x195 = INT64_MIN;
	int64_t x196 = INT64_MAX;
	static int64_t t45 = -13620308LL;

    t45 = (((x193%x194)<=x195)%x196);

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int8_t x198 = 1;
	volatile int8_t x199 = INT8_MIN;
	volatile int8_t x200 = -1;
	volatile int32_t t46 = -5755054;

    t46 = (((x197%x198)<=x199)%x200);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint64_t x201 = 2697368790343993402LLU;
	int32_t x202 = -1;
	int64_t x203 = INT64_MAX;
	volatile int64_t x204 = -1LL;
	volatile int64_t t47 = 12LL;

    t47 = (((x201%x202)<=x203)%x204);

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x206 = INT8_MAX;
	int8_t x207 = INT8_MAX;
	uint32_t x208 = 2411U;
	uint32_t t48 = 2843U;

    t48 = (((x205%x206)<=x207)%x208);

    if (t48 != 1U) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x209 = -638;
	int16_t x210 = INT16_MIN;
	uint64_t x211 = 1032266547643313LLU;
	uint64_t x212 = 7037940502977LLU;
	volatile uint64_t t49 = 1409022154003752LLU;

    t49 = (((x209%x210)<=x211)%x212);

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x213 = UINT8_MAX;
	volatile int16_t x214 = INT16_MIN;
	int32_t x215 = INT32_MIN;
	volatile uint32_t x216 = UINT32_MAX;

    t50 = (((x213%x214)<=x215)%x216);

    if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x217 = INT32_MAX;
	static int8_t x218 = 1;
	volatile int8_t x219 = -1;
	static volatile int32_t t51 = 271118;

    t51 = (((x217%x218)<=x219)%x220);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x221 = -606627719003163220LL;
	int32_t x222 = INT32_MAX;
	int64_t x223 = INT64_MIN;
	int64_t x224 = -1LL;

    t52 = (((x221%x222)<=x223)%x224);

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x225 = -8033153;
	uint16_t x226 = 448U;
	static uint32_t x227 = 1U;
	int32_t x228 = -1;
	int32_t t53 = -112;

    t53 = (((x225%x226)<=x227)%x228);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x229 = -5800;
	int8_t x230 = INT8_MAX;
	static int32_t x231 = INT32_MIN;
	int32_t t54 = -25;

    t54 = (((x229%x230)<=x231)%x232);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x233 = 71;
	int32_t x234 = 31189946;
	int8_t x235 = INT8_MAX;
	volatile int16_t x236 = INT16_MIN;
	int32_t t55 = 12365;

    t55 = (((x233%x234)<=x235)%x236);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x241 = INT16_MIN;
	static int32_t x242 = INT32_MIN;
	static int16_t x243 = INT16_MAX;
	int64_t x244 = INT64_MAX;
	int64_t t56 = 3469797683545951LL;

    t56 = (((x241%x242)<=x243)%x244);

    if (t56 != 1LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x245 = -84;
	volatile int64_t x246 = INT64_MIN;
	volatile int64_t x248 = -1LL;
	volatile int64_t t57 = -1279258240723622LL;

    t57 = (((x245%x246)<=x247)%x248);

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int16_t x249 = INT16_MAX;
	int16_t x252 = INT16_MIN;
	int32_t t58 = 7448;

    t58 = (((x249%x250)<=x251)%x252);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x253 = UINT32_MAX;
	int8_t x254 = INT8_MIN;
	static int32_t x256 = 74873;
	int32_t t59 = 2292218;

    t59 = (((x253%x254)<=x255)%x256);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint64_t x257 = UINT64_MAX;
	int64_t x258 = 217219203604LL;
	int32_t x259 = 63;
	int16_t x260 = 1208;
	volatile int32_t t60 = -183245640;

    t60 = (((x257%x258)<=x259)%x260);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x261 = 4282U;
	static volatile int16_t x262 = -44;
	int16_t x263 = INT16_MIN;
	volatile int16_t x264 = -5173;
	static int32_t t61 = -1543;

    t61 = (((x261%x262)<=x263)%x264);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x265 = 62U;
	int32_t x266 = 1000;
	static volatile int32_t t62 = 17;

    t62 = (((x265%x266)<=x267)%x268);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x269 = -1;
	uint16_t x270 = 23619U;
	uint32_t x272 = 835977U;
	uint32_t t63 = 22460096U;

    t63 = (((x269%x270)<=x271)%x272);

    if (t63 != 1U) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x273 = INT64_MIN;
	uint64_t x275 = 242729LLU;
	static uint8_t x276 = 9U;
	volatile int32_t t64 = 0;

    t64 = (((x273%x274)<=x275)%x276);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x278 = INT32_MAX;
	volatile uint16_t x279 = 0U;
	static volatile int32_t t65 = -22;

    t65 = (((x277%x278)<=x279)%x280);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x281 = 15;
	static uint8_t x283 = 10U;
	int64_t x284 = -5428548211907LL;

    t66 = (((x281%x282)<=x283)%x284);

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int64_t x288 = INT64_MIN;

    t67 = (((x285%x286)<=x287)%x288);

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x289 = INT32_MIN;
	static uint64_t x290 = UINT64_MAX;

    t68 = (((x289%x290)<=x291)%x292);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x293 = UINT64_MAX;
	static uint16_t x294 = 25075U;
	int16_t x295 = -109;
	int64_t x296 = INT64_MAX;

    t69 = (((x293%x294)<=x295)%x296);

    if (t69 != 1LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x297 = UINT16_MAX;
	int8_t x298 = INT8_MIN;
	int16_t x299 = -39;
	int32_t x300 = 291076143;
	volatile int32_t t70 = -1;

    t70 = (((x297%x298)<=x299)%x300);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x301 = 16LL;
	static uint64_t x302 = 1LLU;
	int32_t x303 = -2716667;
	int32_t x304 = INT32_MIN;
	volatile int32_t t71 = 222937281;

    t71 = (((x301%x302)<=x303)%x304);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x305 = 14;
	uint16_t x306 = UINT16_MAX;
	static int32_t x307 = -1;
	int32_t x308 = INT32_MAX;
	int32_t t72 = -645;

    t72 = (((x305%x306)<=x307)%x308);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x309 = INT16_MIN;
	volatile int32_t x311 = 40368804;
	int64_t x312 = 1751408LL;
	static volatile int64_t t73 = 5531662LL;

    t73 = (((x309%x310)<=x311)%x312);

    if (t73 != 1LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x313 = -6;
	int32_t x314 = INT32_MAX;
	static volatile uint32_t x315 = UINT32_MAX;
	volatile int64_t x316 = -1274LL;
	int64_t t74 = 945612LL;

    t74 = (((x313%x314)<=x315)%x316);

    if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x317 = -867444987254618426LL;
	volatile uint64_t x319 = 722167511678721LLU;
	uint64_t x320 = UINT64_MAX;

    t75 = (((x317%x318)<=x319)%x320);

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x321 = -1;
	static uint8_t x322 = UINT8_MAX;
	uint8_t x323 = 0U;
	volatile int32_t x324 = INT32_MIN;
	int32_t t76 = -849714;

    t76 = (((x321%x322)<=x323)%x324);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x325 = INT16_MIN;
	int32_t x327 = -1;
	int32_t t77 = 364028;

    t77 = (((x325%x326)<=x327)%x328);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x329 = INT32_MAX;
	int32_t x331 = -1;
	int16_t x332 = INT16_MIN;

    t78 = (((x329%x330)<=x331)%x332);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x333 = INT8_MAX;
	static uint32_t x334 = UINT32_MAX;
	int64_t x335 = INT64_MAX;
	uint32_t x336 = 106U;
	volatile uint32_t t79 = 63689U;

    t79 = (((x333%x334)<=x335)%x336);

    if (t79 != 1U) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x337 = INT8_MIN;
	volatile int8_t x338 = -30;
	int8_t x339 = INT8_MAX;
	static int64_t x340 = INT64_MIN;
	volatile int64_t t80 = 919813809LL;

    t80 = (((x337%x338)<=x339)%x340);

    if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x341 = -1LL;
	uint16_t x343 = 1245U;
	uint16_t x344 = 10U;
	static volatile int32_t t81 = -2;

    t81 = (((x341%x342)<=x343)%x344);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x345 = -1;
	uint16_t x346 = 115U;
	int32_t x347 = INT32_MIN;
	static volatile uint8_t x348 = 5U;
	volatile int32_t t82 = -11;

    t82 = (((x345%x346)<=x347)%x348);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x349 = UINT64_MAX;
	int32_t x350 = INT32_MIN;
	static volatile uint8_t x351 = 50U;
	int16_t x352 = -51;

    t83 = (((x349%x350)<=x351)%x352);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x353 = -98059447605976982LL;
	int8_t x354 = -5;
	int8_t x356 = -32;

    t84 = (((x353%x354)<=x355)%x356);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int32_t x357 = 145;
	int32_t x358 = 71;
	uint32_t x360 = UINT32_MAX;
	volatile uint32_t t85 = 2045420U;

    t85 = (((x357%x358)<=x359)%x360);

    if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x361 = INT32_MAX;
	int64_t x363 = -9561606317008082LL;
	uint32_t x364 = 1U;
	volatile uint32_t t86 = 15360111U;

    t86 = (((x361%x362)<=x363)%x364);

    if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x366 = INT16_MAX;
	int8_t x367 = -3;
	int32_t t87 = 27409;

    t87 = (((x365%x366)<=x367)%x368);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x369 = INT16_MAX;
	uint16_t x370 = 4U;
	uint8_t x371 = 25U;
	static uint64_t x372 = 2739459691739007503LLU;
	volatile uint64_t t88 = 1972332511LLU;

    t88 = (((x369%x370)<=x371)%x372);

    if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x373 = INT64_MIN;
	static int32_t x374 = INT32_MIN;
	int8_t x375 = INT8_MIN;
	uint8_t x376 = UINT8_MAX;
	static int32_t t89 = 861;

    t89 = (((x373%x374)<=x375)%x376);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x377 = 3544U;
	int16_t x378 = INT16_MIN;
	uint16_t x379 = 13U;
	int16_t x380 = 3601;
	int32_t t90 = -118;

    t90 = (((x377%x378)<=x379)%x380);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x381 = -1;
	int16_t x382 = 1250;
	volatile int32_t x383 = -298574887;
	uint16_t x384 = UINT16_MAX;
	int32_t t91 = -190155611;

    t91 = (((x381%x382)<=x383)%x384);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x385 = INT8_MIN;
	int32_t x387 = -1;
	uint32_t x388 = 27944U;
	uint32_t t92 = 173523858U;

    t92 = (((x385%x386)<=x387)%x388);

    if (t92 != 1U) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x389 = -1;
	int8_t x390 = INT8_MIN;
	static uint16_t x392 = 285U;
	volatile int32_t t93 = -1;

    t93 = (((x389%x390)<=x391)%x392);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x393 = INT8_MIN;
	static int32_t x394 = INT32_MIN;
	static int8_t x395 = INT8_MAX;
	static int32_t t94 = 0;

    t94 = (((x393%x394)<=x395)%x396);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x397 = 29036U;
	int8_t x398 = INT8_MIN;
	static int64_t x399 = -1LL;
	uint64_t x400 = 516248LLU;
	volatile uint64_t t95 = 8337747283LLU;

    t95 = (((x397%x398)<=x399)%x400);

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x401 = 0;
	int16_t x402 = INT16_MAX;
	int32_t x403 = 1;
	static volatile int64_t t96 = -10LL;

    t96 = (((x401%x402)<=x403)%x404);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x405 = 4008553LLU;
	int32_t x406 = -1;
	volatile int8_t x407 = -1;
	uint16_t x408 = 9596U;
	volatile int32_t t97 = -2;

    t97 = (((x405%x406)<=x407)%x408);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile uint8_t x409 = 4U;
	int64_t x410 = INT64_MAX;
	uint64_t x411 = 172LLU;
	int8_t x412 = INT8_MIN;
	int32_t t98 = 5553059;

    t98 = (((x409%x410)<=x411)%x412);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int16_t x413 = -264;
	volatile int16_t x414 = INT16_MAX;
	int8_t x415 = INT8_MAX;
	volatile int32_t t99 = 209996;

    t99 = (((x413%x414)<=x415)%x416);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x417 = INT16_MIN;
	int64_t x418 = -1LL;
	int64_t x420 = INT64_MIN;
	int64_t t100 = -1LL;

    t100 = (((x417%x418)<=x419)%x420);

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x421 = INT64_MAX;
	int16_t x422 = INT16_MIN;
	uint8_t x423 = 98U;
	uint64_t x424 = 1254LLU;
	volatile uint64_t t101 = 6631963LLU;

    t101 = (((x421%x422)<=x423)%x424);

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x425 = UINT8_MAX;
	static int32_t x426 = INT32_MIN;
	uint32_t x427 = 56034013U;
	volatile int8_t x428 = INT8_MAX;
	static int32_t t102 = 94068;

    t102 = (((x425%x426)<=x427)%x428);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x429 = -1LL;
	int16_t x430 = INT16_MIN;
	int64_t x431 = 0LL;

    t103 = (((x429%x430)<=x431)%x432);

    if (t103 != 1LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x433 = INT8_MIN;
	uint64_t x434 = 319466412LLU;
	uint64_t x435 = 906252LLU;
	static int32_t t104 = 1639;

    t104 = (((x433%x434)<=x435)%x436);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x438 = UINT8_MAX;
	int16_t x439 = -84;
	uint8_t x440 = UINT8_MAX;
	volatile int32_t t105 = 29547;

    t105 = (((x437%x438)<=x439)%x440);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x442 = INT16_MAX;
	int64_t x443 = -1LL;
	int16_t x444 = -1331;
	int32_t t106 = -398690825;

    t106 = (((x441%x442)<=x443)%x444);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x445 = 40LLU;
	int8_t x446 = INT8_MIN;
	uint16_t x447 = 21U;
	static int16_t x448 = INT16_MAX;

    t107 = (((x445%x446)<=x447)%x448);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x449 = 116901526827891481LLU;
	int64_t x450 = INT64_MAX;
	int32_t x451 = INT32_MIN;
	int16_t x452 = -663;
	int32_t t108 = -4574774;

    t108 = (((x449%x450)<=x451)%x452);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x454 = UINT32_MAX;
	uint8_t x455 = 1U;
	int32_t x456 = INT32_MIN;
	volatile int32_t t109 = -19355606;

    t109 = (((x453%x454)<=x455)%x456);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x461 = INT32_MIN;
	int8_t x462 = INT8_MIN;
	volatile uint32_t x463 = 644U;
	uint16_t x464 = 2U;
	int32_t t110 = 191;

    t110 = (((x461%x462)<=x463)%x464);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x467 = 238U;
	int64_t x468 = -1LL;
	volatile int64_t t111 = 1LL;

    t111 = (((x465%x466)<=x467)%x468);

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x469 = INT32_MIN;
	int8_t x472 = -1;
	int32_t t112 = 20990537;

    t112 = (((x469%x470)<=x471)%x472);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x473 = UINT16_MAX;
	int64_t x474 = INT64_MAX;
	int16_t x475 = 3;
	int16_t x476 = INT16_MIN;

    t113 = (((x473%x474)<=x475)%x476);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint8_t x477 = 7U;
	static int8_t x480 = INT8_MIN;
	int32_t t114 = 12750435;

    t114 = (((x477%x478)<=x479)%x480);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x481 = -666;
	int8_t x482 = INT8_MIN;
	uint8_t x483 = 4U;
	int16_t x484 = INT16_MIN;

    t115 = (((x481%x482)<=x483)%x484);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x485 = -1278787;
	static int32_t x486 = 1149;
	int8_t x487 = INT8_MAX;
	int32_t t116 = 77;

    t116 = (((x485%x486)<=x487)%x488);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x489 = INT8_MIN;
	uint64_t x490 = UINT64_MAX;
	static int8_t x491 = 3;
	int8_t x492 = INT8_MIN;

    t117 = (((x489%x490)<=x491)%x492);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint16_t x493 = 6397U;
	static uint32_t x494 = 3U;
	int32_t x495 = -15895;
	uint16_t x496 = UINT16_MAX;
	int32_t t118 = 58263077;

    t118 = (((x493%x494)<=x495)%x496);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x497 = INT32_MAX;
	int64_t x498 = 13237059224856LL;
	int8_t x499 = INT8_MIN;
	int16_t x500 = 1858;
	volatile int32_t t119 = 43;

    t119 = (((x497%x498)<=x499)%x500);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x501 = -1;
	uint16_t x502 = 13621U;
	volatile int16_t x503 = 1775;
	uint32_t x504 = UINT32_MAX;
	uint32_t t120 = 370371713U;

    t120 = (((x501%x502)<=x503)%x504);

    if (t120 != 1U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x505 = UINT32_MAX;
	int8_t x506 = INT8_MIN;
	volatile uint16_t x507 = 4U;
	static int16_t x508 = -1;
	static int32_t t121 = 5106710;

    t121 = (((x505%x506)<=x507)%x508);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x509 = -1LL;
	int32_t x512 = -1;
	static int32_t t122 = -11718970;

    t122 = (((x509%x510)<=x511)%x512);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x513 = INT8_MIN;
	int64_t x514 = INT64_MIN;
	int32_t x515 = INT32_MAX;
	uint16_t x516 = UINT16_MAX;
	volatile int32_t t123 = 2;

    t123 = (((x513%x514)<=x515)%x516);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x517 = INT16_MIN;
	int16_t x518 = INT16_MIN;
	uint16_t x519 = UINT16_MAX;
	int64_t t124 = -63502997854LL;

    t124 = (((x517%x518)<=x519)%x520);

    if (t124 != 1LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x521 = INT32_MIN;
	uint32_t x522 = 803839617U;
	uint8_t x523 = UINT8_MAX;
	uint32_t t125 = 1895073516U;

    t125 = (((x521%x522)<=x523)%x524);

    if (t125 != 0U) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x525 = -331;
	static int8_t x527 = -6;
	volatile int32_t t126 = -63;

    t126 = (((x525%x526)<=x527)%x528);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x530 = 2;
	int32_t x531 = -1;
	int8_t x532 = INT8_MIN;

    t127 = (((x529%x530)<=x531)%x532);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x534 = 50U;
	int16_t x535 = INT16_MIN;
	volatile int32_t t128 = -1287;

    t128 = (((x533%x534)<=x535)%x536);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x537 = UINT64_MAX;
	static int16_t x538 = -13293;
	int8_t x539 = -1;

    t129 = (((x537%x538)<=x539)%x540);

    if (t129 != 1LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x541 = INT32_MIN;
	uint32_t x542 = 2388U;
	static int16_t x543 = 941;
	int32_t x544 = -928615;
	int32_t t130 = -186404703;

    t130 = (((x541%x542)<=x543)%x544);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint16_t x545 = 4U;
	int64_t x546 = INT64_MIN;
	static volatile uint64_t x547 = UINT64_MAX;
	volatile int64_t t131 = 15754242969LL;

    t131 = (((x545%x546)<=x547)%x548);

    if (t131 != 1LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x549 = 80U;
	uint16_t x550 = 25U;
	uint32_t x552 = 53693444U;

    t132 = (((x549%x550)<=x551)%x552);

    if (t132 != 1U) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x553 = -1;
	int64_t x556 = 16LL;
	volatile int64_t t133 = 95801135LL;

    t133 = (((x553%x554)<=x555)%x556);

    if (t133 != 1LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint64_t x557 = 362LLU;
	static uint32_t x558 = UINT32_MAX;
	uint8_t x559 = 18U;
	int32_t x560 = INT32_MIN;
	static int32_t t134 = 4227;

    t134 = (((x557%x558)<=x559)%x560);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x561 = 2;
	int64_t x562 = -29106LL;
	uint8_t x563 = 59U;
	int16_t x564 = INT16_MAX;
	static int32_t t135 = 1;

    t135 = (((x561%x562)<=x563)%x564);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x567 = INT64_MAX;
	int8_t x568 = INT8_MAX;
	int32_t t136 = -457673;

    t136 = (((x565%x566)<=x567)%x568);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x569 = INT64_MIN;
	int32_t x572 = INT32_MIN;

    t137 = (((x569%x570)<=x571)%x572);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x577 = -1;
	static int64_t x578 = -1LL;
	static int8_t x579 = -5;
	uint8_t x580 = 3U;
	int32_t t138 = -28090992;

    t138 = (((x577%x578)<=x579)%x580);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x581 = 24026485LL;
	uint64_t x582 = UINT64_MAX;
	int16_t x583 = 7;
	static int64_t x584 = -44320373LL;
	volatile int64_t t139 = -354587243165812LL;

    t139 = (((x581%x582)<=x583)%x584);

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x585 = INT8_MAX;
	static uint8_t x586 = UINT8_MAX;
	uint32_t x587 = UINT32_MAX;
	uint64_t x588 = 46053145LLU;
	uint64_t t140 = 110624LLU;

    t140 = (((x585%x586)<=x587)%x588);

    if (t140 != 1LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x589 = -1LL;
	uint32_t x590 = 37196U;
	volatile int32_t x591 = INT32_MIN;
	int32_t x592 = -1;
	volatile int32_t t141 = 844557;

    t141 = (((x589%x590)<=x591)%x592);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x593 = -1481;
	int64_t x594 = -1LL;
	static int32_t t142 = -18;

    t142 = (((x593%x594)<=x595)%x596);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x598 = -1;
	uint64_t x599 = UINT64_MAX;
	static int64_t x600 = -1231193363178725LL;
	int64_t t143 = -1313840880609LL;

    t143 = (((x597%x598)<=x599)%x600);

    if (t143 != 1LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint32_t x601 = UINT32_MAX;
	volatile int64_t x602 = -1LL;
	static volatile int16_t x603 = INT16_MAX;
	int8_t x604 = INT8_MIN;
	int32_t t144 = -239;

    t144 = (((x601%x602)<=x603)%x604);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x605 = INT16_MIN;
	int32_t x606 = INT32_MAX;
	volatile uint16_t x607 = 644U;
	uint16_t x608 = 405U;
	static int32_t t145 = -29;

    t145 = (((x605%x606)<=x607)%x608);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x609 = -1;
	volatile int16_t x610 = 6;
	int16_t x611 = INT16_MIN;
	static int16_t x612 = -1;

    t146 = (((x609%x610)<=x611)%x612);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint64_t x613 = UINT64_MAX;
	int8_t x614 = -1;
	int8_t x615 = INT8_MAX;
	int64_t x616 = -1LL;
	volatile int64_t t147 = 143102984994712LL;

    t147 = (((x613%x614)<=x615)%x616);

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x617 = INT8_MIN;
	uint8_t x618 = 89U;
	int64_t x619 = 688067832490913LL;
	int16_t x620 = -49;
	volatile int32_t t148 = 231;

    t148 = (((x617%x618)<=x619)%x620);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x621 = 6LLU;
	uint32_t x622 = 37U;
	uint32_t x623 = UINT32_MAX;
	int8_t x624 = INT8_MIN;
	static int32_t t149 = -68802;

    t149 = (((x621%x622)<=x623)%x624);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x625 = -1;
	static int8_t x626 = -1;
	int16_t x627 = -1;

    t150 = (((x625%x626)<=x627)%x628);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x629 = INT64_MAX;
	int64_t x630 = INT64_MIN;
	static int64_t x632 = 261716710353086320LL;
	int64_t t151 = -1049429965305LL;

    t151 = (((x629%x630)<=x631)%x632);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x634 = UINT16_MAX;
	static volatile int64_t x635 = 82756LL;

    t152 = (((x633%x634)<=x635)%x636);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x637 = 124365;
	uint8_t x638 = 96U;
	int8_t x639 = 16;
	static uint8_t x640 = UINT8_MAX;
	int32_t t153 = 7953;

    t153 = (((x637%x638)<=x639)%x640);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint64_t x642 = 99142LLU;
	int8_t x643 = INT8_MIN;
	int32_t t154 = 222374719;

    t154 = (((x641%x642)<=x643)%x644);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x645 = 7U;
	uint64_t x646 = 538164664897098124LLU;
	uint32_t x647 = 2083U;
	int64_t x648 = -84LL;
	volatile int64_t t155 = -50268656LL;

    t155 = (((x645%x646)<=x647)%x648);

    if (t155 != 1LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x649 = INT8_MIN;
	static uint64_t x650 = 1771360260756496691LLU;
	volatile int8_t x651 = INT8_MIN;
	static volatile uint32_t x652 = 790U;

    t156 = (((x649%x650)<=x651)%x652);

    if (t156 != 1U) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x653 = 2;
	int16_t x654 = INT16_MIN;
	uint64_t x655 = 31808834034869LLU;
	uint16_t x656 = UINT16_MAX;
	int32_t t157 = -98695;

    t157 = (((x653%x654)<=x655)%x656);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x657 = -1;
	int64_t x658 = INT64_MIN;
	volatile int8_t x660 = -3;
	int32_t t158 = 27246;

    t158 = (((x657%x658)<=x659)%x660);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x662 = -260811370874720LL;
	uint8_t x663 = 14U;
	static int8_t x664 = 9;
	int32_t t159 = 103;

    t159 = (((x661%x662)<=x663)%x664);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x665 = INT64_MIN;
	int16_t x666 = INT16_MIN;
	uint8_t x667 = UINT8_MAX;
	volatile int64_t t160 = 730576421LL;

    t160 = (((x665%x666)<=x667)%x668);

    if (t160 != 1LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint16_t x671 = 2235U;
	uint8_t x672 = 3U;
	static int32_t t161 = -4;

    t161 = (((x669%x670)<=x671)%x672);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x673 = -1;
	volatile int8_t x674 = INT8_MAX;
	volatile int8_t x675 = INT8_MAX;
	uint8_t x676 = UINT8_MAX;
	volatile int32_t t162 = -15;

    t162 = (((x673%x674)<=x675)%x676);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint32_t x677 = UINT32_MAX;
	static volatile int32_t x678 = 98383;

    t163 = (((x677%x678)<=x679)%x680);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x681 = INT64_MIN;
	static int64_t x682 = -1LL;
	int16_t x683 = -539;
	int32_t x684 = INT32_MIN;
	int32_t t164 = 165073508;

    t164 = (((x681%x682)<=x683)%x684);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x685 = INT16_MAX;
	int16_t x686 = 1163;
	volatile int64_t x687 = 211716263772LL;
	static volatile uint32_t x688 = 178340U;
	volatile uint32_t t165 = 52711605U;

    t165 = (((x685%x686)<=x687)%x688);

    if (t165 != 1U) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x689 = -36;
	int16_t x690 = -1;
	uint8_t x691 = UINT8_MAX;
	static uint32_t x692 = 32141174U;
	volatile uint32_t t166 = 854042190U;

    t166 = (((x689%x690)<=x691)%x692);

    if (t166 != 1U) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x697 = -3;
	int64_t x698 = INT64_MIN;
	uint8_t x699 = 1U;
	int64_t x700 = INT64_MIN;
	volatile int64_t t167 = -32783854724098681LL;

    t167 = (((x697%x698)<=x699)%x700);

    if (t167 != 1LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x701 = INT32_MIN;
	int32_t x702 = INT32_MAX;
	uint16_t x703 = 3U;
	volatile int32_t t168 = 22968;

    t168 = (((x701%x702)<=x703)%x704);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x707 = 3U;
	static int32_t x708 = INT32_MAX;

    t169 = (((x705%x706)<=x707)%x708);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x709 = INT8_MAX;
	static int32_t x711 = INT32_MAX;
	static volatile int64_t t170 = 1214LL;

    t170 = (((x709%x710)<=x711)%x712);

    if (t170 != 1LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x713 = UINT8_MAX;
	int32_t x714 = 119;
	int64_t x715 = 34703586744955LL;
	uint8_t x716 = UINT8_MAX;
	int32_t t171 = -17;

    t171 = (((x713%x714)<=x715)%x716);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x717 = -1;
	static int8_t x718 = -25;
	int16_t x720 = -1;
	int32_t t172 = -128944379;

    t172 = (((x717%x718)<=x719)%x720);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x722 = INT8_MAX;
	volatile int8_t x723 = -2;

    t173 = (((x721%x722)<=x723)%x724);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int64_t x725 = 5010656406LL;
	int64_t x726 = INT64_MIN;
	volatile int64_t x728 = INT64_MAX;
	volatile int64_t t174 = 7LL;

    t174 = (((x725%x726)<=x727)%x728);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x729 = 132U;
	static volatile int64_t x730 = -1LL;
	volatile int16_t x731 = INT16_MAX;
	int32_t x732 = 1;

    t175 = (((x729%x730)<=x731)%x732);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x734 = UINT16_MAX;
	int64_t x736 = 47293567797635943LL;
	static volatile int64_t t176 = -2798457482167756856LL;

    t176 = (((x733%x734)<=x735)%x736);

    if (t176 != 1LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x738 = INT16_MIN;
	volatile int32_t x739 = 289;
	int32_t x740 = INT32_MIN;
	volatile int32_t t177 = -143162;

    t177 = (((x737%x738)<=x739)%x740);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint64_t x742 = 5LLU;
	uint8_t x743 = UINT8_MAX;
	uint64_t x744 = 734LLU;
	uint64_t t178 = 693444886951997LLU;

    t178 = (((x741%x742)<=x743)%x744);

    if (t178 != 1LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x745 = UINT64_MAX;
	uint16_t x747 = 372U;
	static uint64_t x748 = 136628123350442631LLU;
	volatile uint64_t t179 = 22LLU;

    t179 = (((x745%x746)<=x747)%x748);

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x749 = -1;
	static int32_t x750 = INT32_MAX;
	int32_t x751 = INT32_MIN;
	volatile int16_t x752 = -1;
	volatile int32_t t180 = 1049;

    t180 = (((x749%x750)<=x751)%x752);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x753 = UINT32_MAX;
	int16_t x754 = INT16_MIN;
	static int8_t x755 = -6;

    t181 = (((x753%x754)<=x755)%x756);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x757 = INT32_MIN;
	uint64_t x760 = 345LLU;
	volatile uint64_t t182 = 849769556609219LLU;

    t182 = (((x757%x758)<=x759)%x760);

    if (t182 != 1LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x761 = 3U;
	int64_t x762 = 535000497765LL;
	static uint64_t x763 = 3843026075185446893LLU;
	int32_t x764 = -10728;
	int32_t t183 = -100446;

    t183 = (((x761%x762)<=x763)%x764);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x765 = UINT16_MAX;
	int32_t x766 = INT32_MIN;
	int8_t x767 = INT8_MAX;
	uint16_t x768 = 93U;
	int32_t t184 = 489216;

    t184 = (((x765%x766)<=x767)%x768);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x769 = INT8_MAX;
	int64_t x770 = INT64_MIN;
	uint8_t x772 = UINT8_MAX;

    t185 = (((x769%x770)<=x771)%x772);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x773 = INT16_MIN;
	int32_t x774 = 365;
	int8_t x775 = INT8_MIN;
	static uint64_t x776 = 143LLU;
	static uint64_t t186 = 10892LLU;

    t186 = (((x773%x774)<=x775)%x776);

    if (t186 != 1LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint8_t x777 = 0U;
	int32_t t187 = 19395524;

    t187 = (((x777%x778)<=x779)%x780);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x781 = INT16_MIN;
	static int32_t x782 = INT32_MIN;
	int16_t x783 = -6;
	int32_t x784 = INT32_MAX;
	volatile int32_t t188 = 48;

    t188 = (((x781%x782)<=x783)%x784);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x785 = INT32_MIN;
	int64_t x786 = INT64_MAX;
	int32_t x787 = INT32_MIN;
	volatile int64_t x788 = INT64_MAX;
	int64_t t189 = -13941646699LL;

    t189 = (((x785%x786)<=x787)%x788);

    if (t189 != 1LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x790 = 10487;
	int16_t x791 = INT16_MAX;
	volatile int16_t x792 = INT16_MAX;

    t190 = (((x789%x790)<=x791)%x792);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x793 = 52627737U;
	uint64_t x794 = 400845LLU;
	volatile int8_t x795 = INT8_MAX;
	volatile int8_t x796 = -1;
	volatile int32_t t191 = -497305092;

    t191 = (((x793%x794)<=x795)%x796);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x797 = INT16_MIN;
	static int64_t x798 = INT64_MIN;
	volatile uint32_t x799 = 19756473U;
	volatile uint16_t x800 = 3U;
	int32_t t192 = 983094;

    t192 = (((x797%x798)<=x799)%x800);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile uint64_t x801 = 1020763125700758LLU;
	volatile uint8_t x802 = 123U;
	volatile int32_t x803 = -117;
	int32_t x804 = -1;
	static volatile int32_t t193 = -107;

    t193 = (((x801%x802)<=x803)%x804);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x806 = 87U;
	int64_t x807 = -1LL;
	static volatile int16_t x808 = INT16_MIN;

    t194 = (((x805%x806)<=x807)%x808);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x810 = -1;
	uint64_t x811 = 6953764LLU;
	volatile uint16_t x812 = 3U;
	int32_t t195 = -3660;

    t195 = (((x809%x810)<=x811)%x812);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x814 = -1LL;
	int16_t x815 = INT16_MAX;
	int8_t x816 = -28;
	int32_t t196 = 1027;

    t196 = (((x813%x814)<=x815)%x816);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x817 = 29LLU;
	volatile int64_t x818 = -393470265927762LL;
	int32_t x820 = INT32_MIN;
	volatile int32_t t197 = -9920;

    t197 = (((x817%x818)<=x819)%x820);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint16_t x821 = 1U;

    t198 = (((x821%x822)<=x823)%x824);

    if (t198 != 1LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x826 = -1;
	uint8_t x827 = 11U;
	int32_t x828 = -7;

    t199 = (((x825%x826)<=x827)%x828);

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



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

int16_t x10 = INT16_MAX;
int32_t x13 = INT32_MIN;
volatile int8_t x31 = INT8_MIN;
int8_t x34 = 2;
volatile int64_t x35 = INT64_MIN;
static uint32_t x36 = UINT32_MAX;
int64_t x41 = -1LL;
uint8_t x49 = 20U;
volatile int32_t t12 = 1025360;
static int32_t t13 = 65941;
volatile uint16_t x61 = 49U;
int64_t x67 = 1924287LL;
static int8_t x69 = -1;
volatile uint64_t x73 = 4991239914LLU;
static uint32_t x76 = 1036031445U;
int64_t x78 = INT64_MAX;
int32_t t19 = 13592;
uint32_t x84 = UINT32_MAX;
int16_t x85 = -1;
int64_t x88 = INT64_MIN;
int16_t x90 = INT16_MAX;
int16_t x91 = -1;
int32_t t22 = -2669829;
uint32_t x94 = 8389U;
static int8_t x95 = 2;
int32_t t23 = -188819;
static int64_t x99 = INT64_MAX;
int8_t x102 = -1;
int32_t t25 = -76468;
int32_t x112 = 246712432;
static volatile int32_t x117 = -17055152;
int32_t x119 = 25930913;
volatile int8_t x121 = INT8_MAX;
static uint8_t x124 = UINT8_MAX;
uint16_t x129 = UINT16_MAX;
int32_t x131 = INT32_MIN;
int64_t x135 = INT64_MAX;
int16_t x137 = INT16_MAX;
uint8_t x143 = 1U;
static int64_t x147 = -459530641LL;
int64_t x153 = INT64_MIN;
int16_t x159 = -8618;
static int8_t x161 = -1;
static int16_t x165 = INT16_MAX;
uint32_t x172 = 7482U;
int32_t t42 = -9;
uint64_t x175 = 27003048808310LLU;
volatile int32_t t44 = -90;
static volatile int64_t x184 = -522699478818619LL;
int8_t x186 = -3;
int64_t x188 = INT64_MIN;
uint32_t x189 = 0U;
int64_t x194 = INT64_MIN;
static int32_t x206 = INT32_MIN;
uint8_t x208 = 0U;
int32_t t51 = 52305602;
int32_t x209 = -1;
uint8_t x215 = UINT8_MAX;
static int8_t x221 = -1;
volatile int32_t t55 = 16305774;
volatile int32_t t56 = 12;
int16_t x231 = -11158;
uint64_t x235 = 1496225835720469158LLU;
int16_t x236 = -4;
volatile int32_t t58 = -39;
int16_t x240 = INT16_MAX;
uint16_t x243 = 29292U;
uint8_t x247 = 29U;
volatile uint32_t x255 = 955814U;
static uint64_t x258 = UINT64_MAX;
int16_t x262 = 2536;
int16_t x267 = INT16_MIN;
int8_t x268 = INT8_MAX;
volatile int32_t t66 = 2556111;
volatile int32_t t67 = -1;
int16_t x276 = INT16_MIN;
volatile int32_t t69 = -14623633;
volatile int32_t t70 = -73202588;
int64_t x293 = INT64_MIN;
int8_t x294 = INT8_MAX;
static int32_t x302 = INT32_MIN;
int64_t x308 = -4166229647LL;
int32_t t76 = 1150;
volatile int64_t x311 = INT64_MIN;
int32_t x312 = -1;
static uint16_t x314 = 425U;
int32_t x315 = INT32_MAX;
int32_t t79 = -10606;
static volatile int8_t x323 = 0;
int64_t x324 = INT64_MIN;
volatile int32_t t81 = 30586431;
int8_t x329 = -1;
int32_t x334 = -2932;
volatile int64_t x344 = -1LL;
uint8_t x345 = UINT8_MAX;
volatile int16_t x353 = INT16_MIN;
int64_t x355 = INT64_MIN;
uint16_t x356 = 229U;
int64_t x358 = INT64_MAX;
volatile int32_t t89 = 20374;
static uint64_t x361 = 1881LLU;
int32_t x379 = INT32_MIN;
volatile int32_t t94 = -1121;
static uint32_t x382 = 732237U;
uint8_t x385 = UINT8_MAX;
int32_t t96 = 12933;
volatile int32_t t97 = 13798;
int64_t x393 = -42362367738LL;
int64_t x399 = INT64_MAX;
volatile int8_t x416 = INT8_MAX;
volatile int32_t x418 = INT32_MIN;
int32_t t105 = -423729966;
int32_t t106 = 23072;
uint32_t x429 = 12532U;
static int64_t x434 = INT64_MIN;
volatile int32_t t111 = -2346086;
int64_t x452 = INT64_MIN;
uint8_t x453 = 5U;
uint64_t x454 = UINT64_MAX;
uint16_t x457 = UINT16_MAX;
static int16_t x463 = INT16_MIN;
volatile int32_t t115 = 934;
volatile int32_t t116 = 2152411;
volatile int32_t t117 = 762261;
int8_t x479 = -1;
int32_t x482 = 412818;
int32_t t120 = -168013685;
int32_t t121 = -133409509;
uint16_t x491 = 15030U;
int64_t x492 = -1LL;
volatile int64_t x494 = -4488096312587663LL;
static volatile int16_t x497 = INT16_MAX;
static int8_t x499 = INT8_MAX;
int32_t t124 = 89747;
uint16_t x508 = 213U;
int64_t x509 = -10025LL;
int64_t x512 = INT64_MIN;
volatile int32_t t129 = 1023070984;
int16_t x521 = INT16_MIN;
int32_t x526 = -1;
volatile int32_t t132 = -92727;
int8_t x534 = INT8_MAX;
static int8_t x546 = INT8_MAX;
static int32_t x549 = INT32_MAX;
volatile uint8_t x556 = 1U;
volatile int32_t t138 = -1;
static int32_t x560 = INT32_MAX;
uint64_t x562 = UINT64_MAX;
volatile int32_t t140 = 1424;
uint16_t x565 = 4U;
uint8_t x589 = 3U;
static uint64_t x595 = 4874857LLU;
static volatile int64_t x599 = INT64_MIN;
int32_t x602 = 127;
int32_t x604 = -485896;
volatile int32_t t152 = 0;
uint8_t x614 = 22U;
static volatile int64_t x622 = INT64_MIN;
int8_t x632 = 8;
volatile int32_t x639 = INT32_MIN;
volatile int8_t x640 = INT8_MIN;
volatile int8_t x644 = INT8_MIN;
int16_t x645 = INT16_MAX;
int32_t x647 = INT32_MIN;
int16_t x651 = INT16_MIN;
int32_t t162 = 7766921;
int32_t x656 = -1;
static volatile int32_t t164 = -199437;
int32_t t165 = -1194757;
int32_t x666 = -1;
volatile int32_t t167 = 1;
static uint8_t x676 = UINT8_MAX;
static uint16_t x677 = UINT16_MAX;
int64_t x683 = INT64_MIN;
int64_t x685 = -117517LL;
volatile int32_t t171 = 170;
int16_t x689 = INT16_MAX;
static volatile int32_t x690 = 36392829;
volatile uint8_t x691 = 0U;
int8_t x692 = INT8_MIN;
volatile int16_t x695 = INT16_MAX;
int32_t x697 = INT32_MIN;
static int8_t x708 = -1;
volatile int32_t t176 = -73259;
volatile int8_t x713 = INT8_MIN;
static volatile int32_t t178 = -11522;
volatile int32_t x719 = -147574;
volatile int16_t x720 = INT16_MIN;
int64_t x723 = INT64_MAX;
volatile uint64_t x724 = 100549996927949598LLU;
volatile uint32_t x725 = 22375421U;
static int8_t x726 = INT8_MAX;
static uint64_t x732 = UINT64_MAX;
uint8_t x738 = 8U;
int8_t x740 = INT8_MAX;
uint8_t x747 = 2U;
int16_t x763 = 44;
static uint64_t x767 = 877352770825783990LLU;
uint8_t x776 = 0U;
uint8_t x778 = 97U;
volatile int8_t x780 = INT8_MIN;
int32_t t195 = -63045;
int16_t x786 = -1;
volatile int16_t x789 = INT16_MIN;
int64_t x790 = INT64_MIN;
uint16_t x798 = 80U;


void f0(void) {
    	volatile int64_t x1 = -25535LL;
	int64_t x2 = 52LL;
	int16_t x3 = -1;
	int8_t x4 = INT8_MAX;
	int32_t t0 = -72;

    t0 = ((x1|(x2>x3))>x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MIN;
	uint32_t x6 = 71228U;
	int8_t x7 = INT8_MIN;
	volatile int16_t x8 = INT16_MAX;
	int32_t t1 = 408403;

    t1 = ((x5|(x6>x7))>x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint64_t x9 = 462806792165LLU;
	int16_t x11 = -1;
	int16_t x12 = INT16_MIN;
	volatile int32_t t2 = 540443806;

    t2 = ((x9|(x10>x11))>x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x14 = 0;
	int16_t x15 = INT16_MIN;
	uint8_t x16 = UINT8_MAX;
	volatile int32_t t3 = 2;

    t3 = ((x13|(x14>x15))>x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -1;
	uint32_t x18 = UINT32_MAX;
	int32_t x19 = -2317044;
	static volatile int16_t x20 = INT16_MAX;
	int32_t t4 = 15535986;

    t4 = ((x17|(x18>x19))>x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MAX;
	volatile int16_t x22 = 467;
	static int8_t x23 = INT8_MAX;
	static int64_t x24 = -60687807784071711LL;
	int32_t t5 = 6;

    t5 = ((x21|(x22>x23))>x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x25 = INT32_MIN;
	uint32_t x26 = UINT32_MAX;
	int16_t x27 = -4347;
	uint16_t x28 = 28260U;
	volatile int32_t t6 = 878917472;

    t6 = ((x25|(x26>x27))>x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint8_t x29 = 4U;
	int8_t x30 = -22;
	int8_t x32 = INT8_MAX;
	static volatile int32_t t7 = 1;

    t7 = ((x29|(x30>x31))>x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x33 = INT32_MIN;
	volatile int32_t t8 = -2339558;

    t8 = ((x33|(x34>x35))>x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = 12U;
	int32_t x38 = -1;
	int64_t x39 = INT64_MAX;
	int16_t x40 = -1813;
	int32_t t9 = 3;

    t9 = ((x37|(x38>x39))>x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x42 = 5435U;
	int32_t x43 = -1;
	int16_t x44 = INT16_MAX;
	int32_t t10 = -130;

    t10 = ((x41|(x42>x43))>x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint32_t x45 = 6214U;
	volatile int64_t x46 = INT64_MIN;
	static uint64_t x47 = 31962384919LLU;
	uint16_t x48 = UINT16_MAX;
	static volatile int32_t t11 = 12;

    t11 = ((x45|(x46>x47))>x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x50 = INT8_MIN;
	int8_t x51 = 0;
	int8_t x52 = -5;

    t12 = ((x49|(x50>x51))>x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x53 = -235;
	static int32_t x54 = -167537753;
	volatile uint16_t x55 = UINT16_MAX;
	int8_t x56 = -1;

    t13 = ((x53|(x54>x55))>x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x57 = INT64_MIN;
	uint64_t x58 = UINT64_MAX;
	int16_t x59 = -14825;
	volatile uint8_t x60 = 90U;
	int32_t t14 = 3;

    t14 = ((x57|(x58>x59))>x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile uint8_t x62 = UINT8_MAX;
	volatile int8_t x63 = -1;
	static int8_t x64 = 2;
	int32_t t15 = -23459;

    t15 = ((x61|(x62>x63))>x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = 0U;
	int32_t x66 = 27893263;
	uint16_t x68 = 23059U;
	volatile int32_t t16 = -226140;

    t16 = ((x65|(x66>x67))>x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint16_t x70 = 109U;
	static uint8_t x71 = 3U;
	uint8_t x72 = 95U;
	volatile int32_t t17 = -294288;

    t17 = ((x69|(x70>x71))>x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x74 = INT8_MIN;
	volatile int16_t x75 = -1;
	volatile int32_t t18 = -6;

    t18 = ((x73|(x74>x75))>x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x77 = 0;
	int16_t x79 = INT16_MIN;
	volatile int8_t x80 = 5;

    t19 = ((x77|(x78>x79))>x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint16_t x81 = 10713U;
	static uint8_t x82 = 4U;
	uint64_t x83 = UINT64_MAX;
	volatile int32_t t20 = -7414605;

    t20 = ((x81|(x82>x83))>x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint16_t x86 = 269U;
	volatile int16_t x87 = INT16_MAX;
	volatile int32_t t21 = 1;

    t21 = ((x85|(x86>x87))>x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x89 = -1361;
	int64_t x92 = 20LL;

    t22 = ((x89|(x90>x91))>x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int32_t x93 = 9;
	int8_t x96 = -1;

    t23 = ((x93|(x94>x95))>x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x97 = -1;
	int8_t x98 = INT8_MIN;
	int16_t x100 = 0;
	int32_t t24 = -448717475;

    t24 = ((x97|(x98>x99))>x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x101 = -1;
	static int16_t x103 = INT16_MIN;
	int16_t x104 = INT16_MIN;

    t25 = ((x101|(x102>x103))>x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x105 = INT64_MAX;
	static int32_t x106 = INT32_MAX;
	volatile int16_t x107 = INT16_MIN;
	volatile uint64_t x108 = UINT64_MAX;
	int32_t t26 = 4;

    t26 = ((x105|(x106>x107))>x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = INT32_MIN;
	int8_t x110 = 30;
	volatile int64_t x111 = -1LL;
	int32_t t27 = -31378416;

    t27 = ((x109|(x110>x111))>x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = -1LL;
	uint64_t x114 = 6969LLU;
	volatile int32_t x115 = -20435;
	volatile int32_t x116 = 1;
	int32_t t28 = -35648;

    t28 = ((x113|(x114>x115))>x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile uint64_t x118 = UINT64_MAX;
	volatile int64_t x120 = -1LL;
	int32_t t29 = -5308174;

    t29 = ((x117|(x118>x119))>x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x122 = INT64_MIN;
	int32_t x123 = INT32_MIN;
	int32_t t30 = 0;

    t30 = ((x121|(x122>x123))>x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = INT32_MIN;
	int64_t x126 = -1LL;
	volatile int32_t x127 = -5;
	int16_t x128 = -1;
	int32_t t31 = 13;

    t31 = ((x125|(x126>x127))>x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x130 = INT32_MAX;
	volatile uint16_t x132 = UINT16_MAX;
	volatile int32_t t32 = -13279791;

    t32 = ((x129|(x130>x131))>x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = INT64_MAX;
	int8_t x134 = 1;
	int16_t x136 = 362;
	volatile int32_t t33 = -13355472;

    t33 = ((x133|(x134>x135))>x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint16_t x138 = 4966U;
	int32_t x139 = INT32_MAX;
	int8_t x140 = -20;
	int32_t t34 = 380825066;

    t34 = ((x137|(x138>x139))>x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = -1;
	uint8_t x142 = UINT8_MAX;
	volatile uint32_t x144 = 3053U;
	volatile int32_t t35 = -601716607;

    t35 = ((x141|(x142>x143))>x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = INT64_MIN;
	static int16_t x146 = INT16_MAX;
	volatile int64_t x148 = INT64_MIN;
	int32_t t36 = -7018;

    t36 = ((x145|(x146>x147))>x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int8_t x149 = INT8_MAX;
	static int32_t x150 = INT32_MIN;
	int32_t x151 = -1;
	uint8_t x152 = UINT8_MAX;
	volatile int32_t t37 = -105407;

    t37 = ((x149|(x150>x151))>x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int16_t x154 = 681;
	static uint16_t x155 = 1446U;
	uint16_t x156 = 12U;
	volatile int32_t t38 = -5072625;

    t38 = ((x153|(x154>x155))>x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = -181;
	int8_t x158 = 7;
	int16_t x160 = INT16_MIN;
	volatile int32_t t39 = 1;

    t39 = ((x157|(x158>x159))>x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x162 = INT64_MAX;
	static uint8_t x163 = UINT8_MAX;
	volatile int64_t x164 = 87140232LL;
	int32_t t40 = 6;

    t40 = ((x161|(x162>x163))>x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x166 = INT16_MIN;
	static uint64_t x167 = 11911914457359LLU;
	int16_t x168 = 5;
	volatile int32_t t41 = -30237709;

    t41 = ((x165|(x166>x167))>x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x169 = -613;
	static int64_t x170 = INT64_MAX;
	uint8_t x171 = 122U;

    t42 = ((x169|(x170>x171))>x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x173 = INT64_MAX;
	int16_t x174 = -3681;
	uint32_t x176 = 33U;
	int32_t t43 = -698350;

    t43 = ((x173|(x174>x175))>x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = INT64_MIN;
	volatile int8_t x178 = INT8_MIN;
	int8_t x179 = INT8_MAX;
	volatile uint8_t x180 = UINT8_MAX;

    t44 = ((x177|(x178>x179))>x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = 0;
	int16_t x182 = INT16_MIN;
	static volatile int16_t x183 = -12979;
	int32_t t45 = 80225;

    t45 = ((x181|(x182>x183))>x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x185 = 3508442247541889353LL;
	int64_t x187 = INT64_MIN;
	int32_t t46 = 50852927;

    t46 = ((x185|(x186>x187))>x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x190 = -1;
	int32_t x191 = INT32_MIN;
	volatile int64_t x192 = INT64_MIN;
	static int32_t t47 = -728064;

    t47 = ((x189|(x190>x191))>x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int32_t x193 = -1;
	int64_t x195 = INT64_MIN;
	static int16_t x196 = INT16_MAX;
	int32_t t48 = 59;

    t48 = ((x193|(x194>x195))>x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = -1LL;
	uint8_t x198 = UINT8_MAX;
	volatile uint16_t x199 = 13023U;
	volatile uint16_t x200 = 60U;
	int32_t t49 = -23819479;

    t49 = ((x197|(x198>x199))>x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x201 = INT16_MIN;
	static volatile int16_t x202 = INT16_MAX;
	int16_t x203 = INT16_MIN;
	int32_t x204 = -1;
	volatile int32_t t50 = -312;

    t50 = ((x201|(x202>x203))>x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = -1;
	uint8_t x207 = 13U;

    t51 = ((x205|(x206>x207))>x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x210 = UINT32_MAX;
	int16_t x211 = 83;
	int64_t x212 = 0LL;
	volatile int32_t t52 = -14964478;

    t52 = ((x209|(x210>x211))>x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = INT8_MAX;
	static int64_t x214 = INT64_MIN;
	static uint32_t x216 = 49268407U;
	volatile int32_t t53 = -2620;

    t53 = ((x213|(x214>x215))>x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x217 = 1U;
	int8_t x218 = -30;
	volatile uint8_t x219 = 13U;
	int32_t x220 = -11625303;
	volatile int32_t t54 = 509;

    t54 = ((x217|(x218>x219))>x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x222 = 8002;
	static volatile int32_t x223 = INT32_MIN;
	volatile int16_t x224 = INT16_MAX;

    t55 = ((x221|(x222>x223))>x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x225 = UINT8_MAX;
	uint16_t x226 = UINT16_MAX;
	uint64_t x227 = 10017308064LLU;
	uint8_t x228 = 59U;

    t56 = ((x225|(x226>x227))>x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x229 = 61U;
	uint64_t x230 = 2128858862158084LLU;
	volatile int16_t x232 = -1444;
	static volatile int32_t t57 = -6;

    t57 = ((x229|(x230>x231))>x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = INT64_MAX;
	static int8_t x234 = INT8_MIN;

    t58 = ((x233|(x234>x235))>x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = -160;
	int16_t x238 = -150;
	int32_t x239 = 1064214907;
	volatile int32_t t59 = -18;

    t59 = ((x237|(x238>x239))>x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x241 = INT16_MIN;
	int32_t x242 = INT32_MIN;
	static uint16_t x244 = 14U;
	int32_t t60 = -488919737;

    t60 = ((x241|(x242>x243))>x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x245 = UINT32_MAX;
	int16_t x246 = INT16_MAX;
	uint32_t x248 = 28946977U;
	int32_t t61 = -141939;

    t61 = ((x245|(x246>x247))>x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x249 = UINT32_MAX;
	int32_t x250 = INT32_MIN;
	int32_t x251 = INT32_MIN;
	volatile int64_t x252 = INT64_MAX;
	static int32_t t62 = 15272;

    t62 = ((x249|(x250>x251))>x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = INT8_MIN;
	static volatile int8_t x254 = INT8_MIN;
	int16_t x256 = INT16_MAX;
	volatile int32_t t63 = -11167;

    t63 = ((x253|(x254>x255))>x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile uint32_t x257 = 1070654751U;
	int8_t x259 = 1;
	uint32_t x260 = 0U;
	int32_t t64 = 3195;

    t64 = ((x257|(x258>x259))>x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x261 = 249019167518075776LLU;
	int32_t x263 = -1;
	uint8_t x264 = UINT8_MAX;
	int32_t t65 = 943;

    t65 = ((x261|(x262>x263))>x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = INT64_MIN;
	int64_t x266 = INT64_MIN;

    t66 = ((x265|(x266>x267))>x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = -28;
	uint8_t x270 = 2U;
	int8_t x271 = -10;
	int64_t x272 = 2372559LL;

    t67 = ((x269|(x270>x271))>x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x273 = 1;
	int16_t x274 = INT16_MAX;
	volatile int16_t x275 = -62;
	volatile int32_t t68 = 66597552;

    t68 = ((x273|(x274>x275))>x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint32_t x277 = 281234448U;
	uint32_t x278 = 848888409U;
	int64_t x279 = INT64_MAX;
	volatile uint8_t x280 = 29U;

    t69 = ((x277|(x278>x279))>x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint8_t x281 = UINT8_MAX;
	int16_t x282 = INT16_MAX;
	int32_t x283 = INT32_MIN;
	int64_t x284 = INT64_MAX;

    t70 = ((x281|(x282>x283))>x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = INT64_MIN;
	volatile int16_t x286 = INT16_MIN;
	int64_t x287 = INT64_MIN;
	int64_t x288 = -1LL;
	volatile int32_t t71 = 2300;

    t71 = ((x285|(x286>x287))>x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = 39;
	int32_t x290 = -1;
	uint64_t x291 = 3408413969825114194LLU;
	int16_t x292 = INT16_MAX;
	int32_t t72 = -191475;

    t72 = ((x289|(x290>x291))>x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x295 = -6;
	uint64_t x296 = UINT64_MAX;
	static volatile int32_t t73 = 1;

    t73 = ((x293|(x294>x295))>x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x297 = 6U;
	volatile int16_t x298 = 3080;
	static int64_t x299 = 13968187LL;
	static uint8_t x300 = 2U;
	static volatile int32_t t74 = -1425;

    t74 = ((x297|(x298>x299))>x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint32_t x301 = 154476U;
	static volatile int16_t x303 = 0;
	static int16_t x304 = -1;
	int32_t t75 = 103998160;

    t75 = ((x301|(x302>x303))>x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x305 = -1933;
	int8_t x306 = -1;
	static int8_t x307 = INT8_MAX;

    t76 = ((x305|(x306>x307))>x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x309 = -5;
	int16_t x310 = -4681;
	volatile int32_t t77 = 560;

    t77 = ((x309|(x310>x311))>x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x313 = UINT8_MAX;
	int32_t x316 = INT32_MIN;
	int32_t t78 = 42;

    t78 = ((x313|(x314>x315))>x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = INT8_MIN;
	int16_t x318 = INT16_MIN;
	static uint8_t x319 = 46U;
	int16_t x320 = INT16_MAX;

    t79 = ((x317|(x318>x319))>x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x321 = INT16_MAX;
	static volatile int64_t x322 = INT64_MIN;
	static int32_t t80 = 6345526;

    t80 = ((x321|(x322>x323))>x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x325 = UINT64_MAX;
	int16_t x326 = -1;
	int16_t x327 = INT16_MIN;
	uint8_t x328 = 0U;

    t81 = ((x325|(x326>x327))>x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint32_t x330 = 83680U;
	int32_t x331 = -124251077;
	int64_t x332 = -31666LL;
	int32_t t82 = -14775844;

    t82 = ((x329|(x330>x331))>x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x333 = UINT32_MAX;
	int16_t x335 = 207;
	int8_t x336 = INT8_MAX;
	volatile int32_t t83 = 0;

    t83 = ((x333|(x334>x335))>x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = INT64_MIN;
	volatile uint16_t x338 = UINT16_MAX;
	volatile uint32_t x339 = 624075U;
	volatile int8_t x340 = INT8_MIN;
	static volatile int32_t t84 = 1304900;

    t84 = ((x337|(x338>x339))>x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x341 = INT8_MIN;
	uint32_t x342 = 4318U;
	uint16_t x343 = 0U;
	int32_t t85 = -14432;

    t85 = ((x341|(x342>x343))>x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x346 = INT16_MIN;
	volatile uint32_t x347 = 0U;
	static int16_t x348 = 0;
	static volatile int32_t t86 = -1133;

    t86 = ((x345|(x346>x347))>x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x349 = -1LL;
	int16_t x350 = INT16_MIN;
	int16_t x351 = INT16_MAX;
	int8_t x352 = INT8_MAX;
	int32_t t87 = -56439;

    t87 = ((x349|(x350>x351))>x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x354 = 3U;
	int32_t t88 = 1990615;

    t88 = ((x353|(x354>x355))>x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x357 = 15U;
	int32_t x359 = INT32_MIN;
	int16_t x360 = INT16_MIN;

    t89 = ((x357|(x358>x359))>x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x362 = INT64_MIN;
	volatile uint16_t x363 = UINT16_MAX;
	int32_t x364 = 41877301;
	int32_t t90 = -8;

    t90 = ((x361|(x362>x363))>x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x365 = UINT64_MAX;
	int64_t x366 = INT64_MIN;
	volatile int64_t x367 = INT64_MIN;
	static volatile uint8_t x368 = 2U;
	volatile int32_t t91 = 494303197;

    t91 = ((x365|(x366>x367))>x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x369 = INT16_MIN;
	uint32_t x370 = 12U;
	uint32_t x371 = UINT32_MAX;
	volatile int64_t x372 = INT64_MIN;
	volatile int32_t t92 = -282;

    t92 = ((x369|(x370>x371))>x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x373 = -1;
	static int64_t x374 = -504LL;
	int16_t x375 = 71;
	int16_t x376 = INT16_MIN;
	int32_t t93 = 112789057;

    t93 = ((x373|(x374>x375))>x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x377 = INT64_MAX;
	int64_t x378 = -1LL;
	int8_t x380 = 11;

    t94 = ((x377|(x378>x379))>x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = -1;
	int64_t x383 = -6505054LL;
	int16_t x384 = -5;
	volatile int32_t t95 = 16723174;

    t95 = ((x381|(x382>x383))>x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x386 = UINT64_MAX;
	volatile uint32_t x387 = 1703U;
	int32_t x388 = -1;

    t96 = ((x385|(x386>x387))>x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x389 = -1;
	static int8_t x390 = INT8_MIN;
	uint64_t x391 = 167113912692563LLU;
	volatile int8_t x392 = INT8_MAX;

    t97 = ((x389|(x390>x391))>x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x394 = -19;
	volatile int32_t x395 = INT32_MAX;
	uint64_t x396 = UINT64_MAX;
	volatile int32_t t98 = 1;

    t98 = ((x393|(x394>x395))>x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x397 = INT64_MAX;
	volatile uint64_t x398 = UINT64_MAX;
	int64_t x400 = INT64_MIN;
	volatile int32_t t99 = -332851743;

    t99 = ((x397|(x398>x399))>x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = INT16_MIN;
	int64_t x402 = -264197955568074LL;
	static volatile int8_t x403 = INT8_MIN;
	volatile int8_t x404 = 26;
	volatile int32_t t100 = 280563;

    t100 = ((x401|(x402>x403))>x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x405 = UINT64_MAX;
	int16_t x406 = -1;
	int8_t x407 = 3;
	int32_t x408 = 127545;
	int32_t t101 = -44746;

    t101 = ((x405|(x406>x407))>x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = -1;
	static int16_t x410 = INT16_MAX;
	uint32_t x411 = 2U;
	static uint64_t x412 = UINT64_MAX;
	int32_t t102 = -33018110;

    t102 = ((x409|(x410>x411))>x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x413 = 743104099243072LLU;
	uint32_t x414 = 2U;
	volatile uint8_t x415 = UINT8_MAX;
	int32_t t103 = 61633864;

    t103 = ((x413|(x414>x415))>x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = INT32_MAX;
	static volatile uint32_t x419 = UINT32_MAX;
	int64_t x420 = INT64_MAX;
	volatile int32_t t104 = 2140363;

    t104 = ((x417|(x418>x419))>x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x421 = INT8_MIN;
	int64_t x422 = INT64_MIN;
	int8_t x423 = -1;
	uint64_t x424 = 59554LLU;

    t105 = ((x421|(x422>x423))>x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = 334586575691669896LL;
	volatile int8_t x426 = 0;
	volatile uint16_t x427 = 29390U;
	uint8_t x428 = 4U;

    t106 = ((x425|(x426>x427))>x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint16_t x430 = UINT16_MAX;
	int16_t x431 = INT16_MIN;
	int64_t x432 = INT64_MAX;
	static int32_t t107 = 0;

    t107 = ((x429|(x430>x431))>x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x433 = -1;
	int16_t x435 = INT16_MAX;
	int16_t x436 = -5;
	static int32_t t108 = -10;

    t108 = ((x433|(x434>x435))>x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x437 = 32;
	int32_t x438 = INT32_MIN;
	int32_t x439 = -1;
	volatile uint32_t x440 = UINT32_MAX;
	volatile int32_t t109 = -3;

    t109 = ((x437|(x438>x439))>x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x441 = 125;
	static uint16_t x442 = 18U;
	int16_t x443 = -1;
	volatile uint32_t x444 = UINT32_MAX;
	volatile int32_t t110 = -3012087;

    t110 = ((x441|(x442>x443))>x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = -7807099674458018LL;
	int8_t x446 = INT8_MIN;
	int32_t x447 = INT32_MIN;
	int32_t x448 = 335235021;

    t111 = ((x445|(x446>x447))>x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint16_t x449 = UINT16_MAX;
	volatile int16_t x450 = -1;
	static volatile uint8_t x451 = 6U;
	int32_t t112 = 1;

    t112 = ((x449|(x450>x451))>x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x455 = -1LL;
	int64_t x456 = -3134909LL;
	static volatile int32_t t113 = 66595401;

    t113 = ((x453|(x454>x455))>x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x458 = INT32_MIN;
	int8_t x459 = 2;
	int16_t x460 = -1944;
	static volatile int32_t t114 = 2983277;

    t114 = ((x457|(x458>x459))>x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x461 = -1;
	volatile int32_t x462 = INT32_MIN;
	volatile int8_t x464 = -25;

    t115 = ((x461|(x462>x463))>x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x465 = -248;
	int64_t x466 = INT64_MIN;
	uint32_t x467 = 720U;
	int16_t x468 = INT16_MIN;

    t116 = ((x465|(x466>x467))>x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint64_t x469 = 18890517302LLU;
	static volatile int32_t x470 = INT32_MIN;
	int16_t x471 = 13;
	int8_t x472 = -1;

    t117 = ((x469|(x470>x471))>x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x473 = 69964985596LLU;
	int64_t x474 = -1LL;
	volatile uint16_t x475 = UINT16_MAX;
	int16_t x476 = INT16_MIN;
	volatile int32_t t118 = -18;

    t118 = ((x473|(x474>x475))>x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x477 = -2;
	uint64_t x478 = UINT64_MAX;
	static int16_t x480 = INT16_MIN;
	static volatile int32_t t119 = -20015564;

    t119 = ((x477|(x478>x479))>x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x481 = INT64_MAX;
	int64_t x483 = INT64_MIN;
	uint64_t x484 = 645686089844805LLU;

    t120 = ((x481|(x482>x483))>x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = -95;
	int64_t x486 = 17136LL;
	int64_t x487 = 5729409LL;
	volatile uint64_t x488 = 994247522456LLU;

    t121 = ((x485|(x486>x487))>x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = -125937036156LL;
	int16_t x490 = -1;
	int32_t t122 = -1;

    t122 = ((x489|(x490>x491))>x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = -1LL;
	volatile int8_t x495 = 0;
	int8_t x496 = INT8_MAX;
	static int32_t t123 = 3;

    t123 = ((x493|(x494>x495))>x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x498 = 35U;
	uint32_t x500 = 797U;

    t124 = ((x497|(x498>x499))>x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x501 = 7U;
	volatile int8_t x502 = INT8_MIN;
	int64_t x503 = -1LL;
	int8_t x504 = -7;
	volatile int32_t t125 = -89909803;

    t125 = ((x501|(x502>x503))>x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x505 = UINT32_MAX;
	int64_t x506 = INT64_MIN;
	int64_t x507 = 832621620LL;
	static volatile int32_t t126 = -7727;

    t126 = ((x505|(x506>x507))>x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x510 = 1;
	volatile uint16_t x511 = UINT16_MAX;
	int32_t t127 = -106;

    t127 = ((x509|(x510>x511))>x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = INT32_MIN;
	volatile uint64_t x514 = 6421478LLU;
	uint8_t x515 = 22U;
	static volatile uint16_t x516 = UINT16_MAX;
	int32_t t128 = 1;

    t128 = ((x513|(x514>x515))>x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile uint8_t x517 = UINT8_MAX;
	int8_t x518 = INT8_MIN;
	int64_t x519 = INT64_MIN;
	int64_t x520 = INT64_MIN;

    t129 = ((x517|(x518>x519))>x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x522 = UINT16_MAX;
	volatile uint8_t x523 = 0U;
	int8_t x524 = 1;
	volatile int32_t t130 = 0;

    t130 = ((x521|(x522>x523))>x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x525 = INT8_MIN;
	static int32_t x527 = INT32_MAX;
	int8_t x528 = -1;
	static int32_t t131 = -311023875;

    t131 = ((x525|(x526>x527))>x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = INT8_MIN;
	int8_t x530 = -1;
	volatile int8_t x531 = INT8_MAX;
	int64_t x532 = -1978LL;

    t132 = ((x529|(x530>x531))>x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x533 = 5854670U;
	int32_t x535 = INT32_MIN;
	int16_t x536 = 45;
	volatile int32_t t133 = -38280;

    t133 = ((x533|(x534>x535))>x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x537 = INT32_MIN;
	int32_t x538 = INT32_MIN;
	static int32_t x539 = 7;
	int64_t x540 = -1LL;
	volatile int32_t t134 = -1;

    t134 = ((x537|(x538>x539))>x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x541 = 30U;
	static int8_t x542 = -1;
	volatile uint8_t x543 = 0U;
	static uint16_t x544 = 750U;
	int32_t t135 = 1;

    t135 = ((x541|(x542>x543))>x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = INT32_MIN;
	static int16_t x547 = INT16_MIN;
	static uint32_t x548 = 1777817218U;
	volatile int32_t t136 = 116239;

    t136 = ((x545|(x546>x547))>x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x550 = -1;
	int64_t x551 = -1LL;
	int16_t x552 = INT16_MIN;
	int32_t t137 = -1047196376;

    t137 = ((x549|(x550>x551))>x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x553 = INT16_MIN;
	int32_t x554 = -1;
	int64_t x555 = -6169785209297119LL;

    t138 = ((x553|(x554>x555))>x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x557 = 0U;
	volatile int16_t x558 = INT16_MAX;
	uint16_t x559 = UINT16_MAX;
	int32_t t139 = -245873;

    t139 = ((x557|(x558>x559))>x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x561 = INT16_MAX;
	static volatile int16_t x563 = INT16_MAX;
	int32_t x564 = -911501;

    t140 = ((x561|(x562>x563))>x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x566 = 3;
	int16_t x567 = INT16_MIN;
	static int8_t x568 = 59;
	static int32_t t141 = -31;

    t141 = ((x565|(x566>x567))>x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = 2;
	int32_t x570 = 0;
	int64_t x571 = -1LL;
	volatile int64_t x572 = INT64_MIN;
	volatile int32_t t142 = 2829;

    t142 = ((x569|(x570>x571))>x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = -1LL;
	int8_t x574 = -4;
	static int16_t x575 = -1;
	volatile uint16_t x576 = UINT16_MAX;
	int32_t t143 = -5;

    t143 = ((x573|(x574>x575))>x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = 46822577;
	uint32_t x578 = UINT32_MAX;
	int16_t x579 = 64;
	int16_t x580 = -1;
	volatile int32_t t144 = 970;

    t144 = ((x577|(x578>x579))>x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x581 = INT16_MIN;
	uint8_t x582 = UINT8_MAX;
	int16_t x583 = INT16_MIN;
	int64_t x584 = INT64_MAX;
	volatile int32_t t145 = -480290;

    t145 = ((x581|(x582>x583))>x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = INT8_MIN;
	int16_t x586 = INT16_MIN;
	int8_t x587 = INT8_MAX;
	static int16_t x588 = INT16_MAX;
	volatile int32_t t146 = -1543465;

    t146 = ((x585|(x586>x587))>x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x590 = 257445814U;
	int16_t x591 = 10072;
	uint16_t x592 = UINT16_MAX;
	int32_t t147 = -1;

    t147 = ((x589|(x590>x591))>x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x593 = 1U;
	int16_t x594 = INT16_MIN;
	int16_t x596 = 1980;
	volatile int32_t t148 = 128;

    t148 = ((x593|(x594>x595))>x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x597 = 7;
	int32_t x598 = 2080;
	volatile int8_t x600 = -1;
	static int32_t t149 = -186159845;

    t149 = ((x597|(x598>x599))>x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int64_t x601 = INT64_MIN;
	int32_t x603 = -1;
	volatile int32_t t150 = -952;

    t150 = ((x601|(x602>x603))>x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x605 = INT16_MAX;
	uint32_t x606 = 75250939U;
	int64_t x607 = INT64_MAX;
	static int16_t x608 = -2809;
	static int32_t t151 = -491;

    t151 = ((x605|(x606>x607))>x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x609 = INT8_MIN;
	uint32_t x610 = 27U;
	volatile uint32_t x611 = 30603440U;
	int32_t x612 = 0;

    t152 = ((x609|(x610>x611))>x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x613 = INT16_MIN;
	uint16_t x615 = 1621U;
	volatile uint64_t x616 = UINT64_MAX;
	static volatile int32_t t153 = 6795;

    t153 = ((x613|(x614>x615))>x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = INT32_MIN;
	uint16_t x618 = 57U;
	volatile int8_t x619 = INT8_MAX;
	static uint64_t x620 = UINT64_MAX;
	int32_t t154 = -766961696;

    t154 = ((x617|(x618>x619))>x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x621 = -1;
	volatile int8_t x623 = INT8_MIN;
	volatile int32_t x624 = INT32_MAX;
	volatile int32_t t155 = -9;

    t155 = ((x621|(x622>x623))>x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x625 = 51910;
	volatile uint64_t x626 = UINT64_MAX;
	static int64_t x627 = INT64_MAX;
	int64_t x628 = 2564499383974837921LL;
	int32_t t156 = 523;

    t156 = ((x625|(x626>x627))>x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x629 = INT8_MIN;
	int32_t x630 = INT32_MIN;
	static int64_t x631 = 810411004700LL;
	int32_t t157 = -66405;

    t157 = ((x629|(x630>x631))>x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x633 = INT8_MAX;
	static int32_t x634 = INT32_MAX;
	int32_t x635 = 4933;
	int64_t x636 = INT64_MIN;
	volatile int32_t t158 = 2634705;

    t158 = ((x633|(x634>x635))>x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x637 = 630;
	uint8_t x638 = UINT8_MAX;
	volatile int32_t t159 = -14678;

    t159 = ((x637|(x638>x639))>x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = -43LL;
	uint32_t x642 = 88U;
	volatile int64_t x643 = -9287726LL;
	int32_t t160 = 7;

    t160 = ((x641|(x642>x643))>x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x646 = 44;
	volatile uint32_t x648 = 64208U;
	int32_t t161 = 218516385;

    t161 = ((x645|(x646>x647))>x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = -1;
	int32_t x650 = -1;
	int16_t x652 = INT16_MAX;

    t162 = ((x649|(x650>x651))>x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x653 = 13;
	int32_t x654 = INT32_MIN;
	uint16_t x655 = UINT16_MAX;
	volatile int32_t t163 = 495;

    t163 = ((x653|(x654>x655))>x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = -1;
	static int8_t x658 = -42;
	int8_t x659 = -1;
	static uint8_t x660 = 24U;

    t164 = ((x657|(x658>x659))>x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = 80096LL;
	int32_t x662 = 1438;
	int16_t x663 = 192;
	int32_t x664 = INT32_MIN;

    t165 = ((x661|(x662>x663))>x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x665 = 1152U;
	uint8_t x667 = UINT8_MAX;
	uint8_t x668 = 61U;
	int32_t t166 = -46230122;

    t166 = ((x665|(x666>x667))>x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x669 = 219U;
	volatile uint16_t x670 = UINT16_MAX;
	int32_t x671 = INT32_MIN;
	volatile int32_t x672 = -466970;

    t167 = ((x669|(x670>x671))>x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = INT8_MIN;
	uint32_t x674 = 17413328U;
	int32_t x675 = 952;
	int32_t t168 = 1695;

    t168 = ((x673|(x674>x675))>x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x678 = INT16_MIN;
	uint16_t x679 = 7865U;
	int8_t x680 = -58;
	volatile int32_t t169 = 20447295;

    t169 = ((x677|(x678>x679))>x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint8_t x681 = UINT8_MAX;
	uint16_t x682 = 1U;
	static uint32_t x684 = 431712U;
	static volatile int32_t t170 = 178;

    t170 = ((x681|(x682>x683))>x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int64_t x686 = 2300LL;
	int8_t x687 = 1;
	static int16_t x688 = INT16_MIN;

    t171 = ((x685|(x686>x687))>x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t t172 = -820962895;

    t172 = ((x689|(x690>x691))>x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = 1;
	int8_t x694 = -1;
	volatile int16_t x696 = -1;
	volatile int32_t t173 = -1;

    t173 = ((x693|(x694>x695))>x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x698 = 1;
	uint8_t x699 = 74U;
	uint16_t x700 = UINT16_MAX;
	int32_t t174 = 46;

    t174 = ((x697|(x698>x699))>x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x701 = 8;
	int8_t x702 = 63;
	int64_t x703 = -1LL;
	static volatile uint16_t x704 = UINT16_MAX;
	volatile int32_t t175 = 8679;

    t175 = ((x701|(x702>x703))>x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = INT16_MIN;
	int32_t x706 = 199011877;
	int8_t x707 = INT8_MIN;

    t176 = ((x705|(x706>x707))>x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x709 = UINT32_MAX;
	uint64_t x710 = 4257615411551LLU;
	volatile int8_t x711 = INT8_MIN;
	int16_t x712 = INT16_MIN;
	volatile int32_t t177 = -409;

    t177 = ((x709|(x710>x711))>x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x714 = INT64_MIN;
	int8_t x715 = INT8_MIN;
	int8_t x716 = INT8_MIN;

    t178 = ((x713|(x714>x715))>x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x717 = 2U;
	int32_t x718 = INT32_MAX;
	int32_t t179 = -4;

    t179 = ((x717|(x718>x719))>x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x721 = INT64_MIN;
	uint16_t x722 = UINT16_MAX;
	static int32_t t180 = -1;

    t180 = ((x721|(x722>x723))>x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x727 = INT8_MIN;
	static uint32_t x728 = UINT32_MAX;
	static volatile int32_t t181 = 3;

    t181 = ((x725|(x726>x727))>x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x729 = 2LLU;
	int64_t x730 = INT64_MIN;
	static int16_t x731 = -65;
	volatile int32_t t182 = -234911079;

    t182 = ((x729|(x730>x731))>x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x733 = INT16_MIN;
	int64_t x734 = -1LL;
	uint32_t x735 = UINT32_MAX;
	static int32_t x736 = INT32_MIN;
	static int32_t t183 = -43993512;

    t183 = ((x733|(x734>x735))>x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint32_t x737 = UINT32_MAX;
	int64_t x739 = INT64_MIN;
	int32_t t184 = 943;

    t184 = ((x737|(x738>x739))>x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = INT64_MIN;
	int16_t x742 = 7289;
	static int32_t x743 = -1;
	int32_t x744 = INT32_MIN;
	volatile int32_t t185 = -944;

    t185 = ((x741|(x742>x743))>x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint32_t x745 = UINT32_MAX;
	static int8_t x746 = INT8_MIN;
	volatile uint32_t x748 = UINT32_MAX;
	int32_t t186 = -367;

    t186 = ((x745|(x746>x747))>x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x749 = INT64_MIN;
	int32_t x750 = INT32_MIN;
	int64_t x751 = -1LL;
	int16_t x752 = 2025;
	volatile int32_t t187 = -21;

    t187 = ((x749|(x750>x751))>x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = INT8_MIN;
	volatile int64_t x754 = INT64_MIN;
	int32_t x755 = INT32_MIN;
	volatile int16_t x756 = INT16_MIN;
	volatile int32_t t188 = -238205;

    t188 = ((x753|(x754>x755))>x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x757 = 79343U;
	int64_t x758 = INT64_MIN;
	int64_t x759 = -462561229035LL;
	static uint64_t x760 = 78952064449975LLU;
	int32_t t189 = 1393;

    t189 = ((x757|(x758>x759))>x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = INT32_MIN;
	uint64_t x762 = UINT64_MAX;
	int64_t x764 = INT64_MIN;
	volatile int32_t t190 = 4121447;

    t190 = ((x761|(x762>x763))>x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile uint32_t x765 = UINT32_MAX;
	int16_t x766 = INT16_MAX;
	volatile int64_t x768 = INT64_MAX;
	volatile int32_t t191 = -1803;

    t191 = ((x765|(x766>x767))>x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x769 = INT8_MAX;
	static int64_t x770 = INT64_MAX;
	int16_t x771 = INT16_MIN;
	uint32_t x772 = 83992U;
	int32_t t192 = 121567304;

    t192 = ((x769|(x770>x771))>x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x773 = UINT16_MAX;
	int8_t x774 = 30;
	int8_t x775 = INT8_MAX;
	volatile int32_t t193 = 375;

    t193 = ((x773|(x774>x775))>x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x777 = -1LL;
	uint8_t x779 = 1U;
	int32_t t194 = -86;

    t194 = ((x777|(x778>x779))>x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x781 = -1LL;
	uint64_t x782 = 322140950991LLU;
	static int8_t x783 = INT8_MAX;
	volatile int64_t x784 = -1LL;

    t195 = ((x781|(x782>x783))>x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x785 = 2835230347511LLU;
	int32_t x787 = INT32_MIN;
	int16_t x788 = INT16_MIN;
	static volatile int32_t t196 = -3203;

    t196 = ((x785|(x786>x787))>x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x791 = 2868868LLU;
	static int16_t x792 = INT16_MAX;
	int32_t t197 = -1602;

    t197 = ((x789|(x790>x791))>x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint64_t x793 = 282LLU;
	uint8_t x794 = 3U;
	int8_t x795 = INT8_MIN;
	uint64_t x796 = 4LLU;
	int32_t t198 = -1881;

    t198 = ((x793|(x794>x795))>x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x797 = UINT32_MAX;
	int16_t x799 = INT16_MIN;
	volatile int32_t x800 = 663126250;
	static int32_t t199 = 627369;

    t199 = ((x797|(x798>x799))>x800);

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


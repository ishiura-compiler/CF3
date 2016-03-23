
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

volatile int8_t x4 = INT8_MIN;
volatile int32_t x11 = INT32_MIN;
volatile int32_t t4 = -28;
int32_t x25 = INT32_MAX;
uint64_t x30 = UINT64_MAX;
static int8_t x31 = INT8_MIN;
int8_t x32 = 0;
int32_t t7 = -90;
uint32_t x34 = 38552U;
int16_t x35 = INT16_MIN;
uint32_t x38 = UINT32_MAX;
static int16_t x45 = 168;
static uint16_t x46 = 39U;
int64_t x48 = -1LL;
static volatile int32_t x49 = INT32_MAX;
static volatile int32_t x51 = -1;
int16_t x58 = INT16_MAX;
volatile int16_t x61 = INT16_MAX;
volatile int8_t x62 = -6;
volatile uint64_t x64 = 2588559831970LLU;
static volatile int8_t x68 = INT8_MIN;
volatile int32_t t16 = -96214797;
int16_t x70 = INT16_MAX;
volatile uint64_t x75 = 772531542924958263LLU;
int64_t x79 = 501521LL;
int64_t x85 = -121145587LL;
volatile int8_t x87 = INT8_MIN;
uint64_t x89 = 3421LLU;
static int32_t x90 = INT32_MIN;
int32_t x92 = -1;
volatile int32_t t22 = -34216;
int64_t x95 = -1LL;
int64_t x103 = -1LL;
volatile int32_t t25 = 1;
int16_t x106 = -1;
int16_t x117 = INT16_MAX;
volatile uint16_t x120 = 1U;
static int32_t t29 = -107;
int16_t x125 = INT16_MIN;
static int32_t x130 = INT32_MIN;
uint8_t x135 = 7U;
uint64_t x136 = 778204LLU;
static volatile int32_t t33 = 30289;
int16_t x144 = INT16_MIN;
volatile int32_t t35 = -1057942925;
int32_t x146 = INT32_MIN;
int16_t x148 = INT16_MIN;
int16_t x154 = INT16_MAX;
int16_t x166 = INT16_MIN;
int32_t t43 = -1;
int64_t x178 = -637525553233LL;
volatile int32_t t46 = 2040;
uint16_t x190 = UINT16_MAX;
int64_t x198 = -2LL;
static int32_t x200 = 896;
static int64_t x204 = INT64_MIN;
volatile int8_t x212 = INT8_MAX;
static volatile int32_t t53 = 3;
volatile int32_t t54 = 3028760;
int8_t x223 = INT8_MIN;
uint8_t x224 = 91U;
int32_t t56 = -117474946;
int8_t x237 = 2;
int32_t x240 = -1;
static uint8_t x245 = 3U;
int16_t x247 = -1;
int32_t t62 = 11018;
volatile int32_t t63 = 78843;
uint64_t x260 = 4583348486818LLU;
uint32_t x274 = UINT32_MAX;
int32_t t68 = 55758153;
static uint64_t x277 = UINT64_MAX;
int8_t x283 = -1;
uint64_t x286 = 306065LLU;
int64_t x288 = -31834316542844211LL;
uint32_t x289 = 17335894U;
int32_t x294 = INT32_MIN;
static volatile int16_t x295 = INT16_MIN;
int8_t x297 = -12;
uint32_t x301 = 30U;
static int64_t x314 = -453605434LL;
uint16_t x315 = 1U;
uint32_t x323 = UINT32_MAX;
static uint32_t x327 = 1246692351U;
static int32_t x328 = -478107445;
volatile int32_t t81 = -1;
int64_t x329 = 808322118486688LL;
int32_t x332 = INT32_MIN;
int16_t x334 = INT16_MAX;
int64_t x335 = -1LL;
volatile int32_t t83 = 3;
static volatile int32_t t85 = -409808;
volatile int16_t x345 = INT16_MIN;
volatile uint8_t x348 = 68U;
int16_t x353 = -1;
volatile int8_t x354 = INT8_MAX;
volatile int32_t t88 = -7408407;
static volatile int32_t x360 = -1436208;
int32_t x370 = -2639;
uint32_t x373 = UINT32_MAX;
uint16_t x375 = UINT16_MAX;
volatile int8_t x376 = INT8_MIN;
volatile int32_t t94 = 252142;
volatile int8_t x382 = 33;
int32_t x392 = INT32_MIN;
int8_t x393 = INT8_MIN;
int16_t x403 = -4;
int32_t x404 = INT32_MIN;
int8_t x413 = -1;
int16_t x415 = INT16_MIN;
int16_t x419 = -1;
uint16_t x420 = UINT16_MAX;
int32_t t104 = 5268;
volatile int64_t x426 = INT64_MIN;
static uint8_t x435 = UINT8_MAX;
volatile int64_t x436 = -1LL;
int64_t x443 = INT64_MIN;
volatile int32_t t110 = -335879;
int32_t x447 = INT32_MIN;
int32_t x452 = 0;
volatile int32_t t112 = -827;
uint16_t x455 = UINT16_MAX;
volatile int32_t t114 = 49994133;
int32_t x461 = INT32_MIN;
volatile uint16_t x471 = 2458U;
int32_t t118 = -1;
int8_t x483 = INT8_MAX;
uint64_t x490 = UINT64_MAX;
uint8_t x495 = 5U;
volatile int32_t t123 = -200077;
static int64_t x501 = -1583437978LL;
volatile uint16_t x515 = 7U;
volatile uint8_t x517 = UINT8_MAX;
static int16_t x526 = -1;
int32_t x527 = INT32_MIN;
int32_t t132 = 49515094;
volatile int32_t t133 = 162690019;
int64_t x548 = INT64_MAX;
int32_t t138 = 865908542;
uint8_t x564 = 45U;
static volatile int32_t t140 = 505185;
int8_t x571 = INT8_MIN;
int8_t x573 = -1;
static int16_t x575 = INT16_MIN;
int64_t x588 = -1LL;
int32_t x589 = INT32_MIN;
static int16_t x591 = INT16_MAX;
int32_t t148 = -40300;
uint64_t x600 = UINT64_MAX;
int64_t x609 = INT64_MIN;
static int32_t x613 = -98;
uint64_t x616 = 491849351952256LLU;
int32_t t154 = 117067;
int64_t x623 = INT64_MAX;
int32_t x629 = INT32_MAX;
int8_t x632 = INT8_MIN;
int8_t x636 = 2;
uint8_t x639 = 9U;
uint8_t x645 = 15U;
static int8_t x655 = 1;
uint8_t x661 = 6U;
uint8_t x663 = 0U;
uint64_t x665 = 17336298551874LLU;
int16_t x673 = INT16_MAX;
int32_t t168 = -215703;
static volatile int64_t x677 = INT64_MIN;
int64_t x682 = 22401038619LL;
static int32_t x683 = 285095;
volatile int32_t t170 = 1;
uint8_t x686 = UINT8_MAX;
volatile int16_t x688 = 49;
uint8_t x690 = 26U;
volatile int64_t x692 = -29506570584397424LL;
int32_t t172 = 1311244;
int8_t x696 = -15;
int8_t x699 = INT8_MIN;
int32_t t175 = -2930;
int32_t t177 = -6691506;
volatile int64_t x713 = INT64_MIN;
int64_t x714 = 58LL;
uint64_t x720 = UINT64_MAX;
volatile int16_t x723 = INT16_MIN;
int32_t t180 = -10737;
int32_t x726 = 53875;
uint32_t x728 = 1089U;
volatile int64_t x734 = 1653345016293353123LL;
static volatile int8_t x736 = -1;
uint32_t x748 = UINT32_MAX;
uint32_t x750 = UINT32_MAX;
volatile int16_t x759 = -2069;
uint32_t x761 = 9U;
int8_t x769 = INT8_MAX;
uint32_t x777 = UINT32_MAX;
int32_t x780 = INT32_MIN;
int8_t x785 = INT8_MIN;
int32_t x791 = INT32_MIN;
int64_t x796 = INT64_MAX;
volatile uint8_t x799 = UINT8_MAX;


void f0(void) {
    	uint32_t x1 = UINT32_MAX;
	int16_t x2 = -1;
	int32_t x3 = INT32_MIN;
	static int32_t t0 = 444142;

    t0 = (((x1==x2)==x3)>x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint16_t x5 = 13508U;
	uint32_t x6 = 6334878U;
	int32_t x7 = -69110210;
	int8_t x8 = -10;
	volatile int32_t t1 = 2853306;

    t1 = (((x5==x6)==x7)>x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x9 = INT32_MIN;
	static int16_t x10 = INT16_MIN;
	int16_t x12 = -66;
	volatile int32_t t2 = 1200;

    t2 = (((x9==x10)==x11)>x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = 114U;
	volatile uint64_t x14 = UINT64_MAX;
	volatile int8_t x15 = 27;
	static int64_t x16 = INT64_MAX;
	volatile int32_t t3 = 157732884;

    t3 = (((x13==x14)==x15)>x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MIN;
	int16_t x18 = -1;
	volatile uint16_t x19 = UINT16_MAX;
	static int16_t x20 = INT16_MIN;

    t4 = (((x17==x18)==x19)>x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile uint64_t x21 = UINT64_MAX;
	int16_t x22 = -1;
	int64_t x23 = 139237652587009LL;
	int64_t x24 = INT64_MIN;
	volatile int32_t t5 = -218;

    t5 = (((x21==x22)==x23)>x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x26 = INT16_MIN;
	static int16_t x27 = INT16_MAX;
	volatile int64_t x28 = -1LL;
	static volatile int32_t t6 = -2;

    t6 = (((x25==x26)==x27)>x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = UINT32_MAX;

    t7 = (((x29==x30)==x31)>x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x33 = INT64_MIN;
	static volatile uint8_t x36 = UINT8_MAX;
	volatile int32_t t8 = -423;

    t8 = (((x33==x34)==x35)>x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = INT64_MAX;
	int16_t x39 = INT16_MIN;
	static uint8_t x40 = 9U;
	volatile int32_t t9 = -12;

    t9 = (((x37==x38)==x39)>x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = 27046700987LL;
	int16_t x42 = -1;
	static int16_t x43 = 0;
	static uint8_t x44 = UINT8_MAX;
	int32_t t10 = -2670;

    t10 = (((x41==x42)==x43)>x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x47 = -1;
	volatile int32_t t11 = 19072720;

    t11 = (((x45==x46)==x47)>x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x50 = INT8_MIN;
	int16_t x52 = INT16_MAX;
	volatile int32_t t12 = -999871;

    t12 = (((x49==x50)==x51)>x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x53 = -7257021LL;
	uint64_t x54 = 234298027052LLU;
	int8_t x55 = -4;
	uint16_t x56 = 11278U;
	int32_t t13 = -11792;

    t13 = (((x53==x54)==x55)>x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = -5;
	volatile int64_t x59 = 502LL;
	uint8_t x60 = UINT8_MAX;
	int32_t t14 = -8410300;

    t14 = (((x57==x58)==x59)>x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x63 = INT8_MIN;
	int32_t t15 = -142578;

    t15 = (((x61==x62)==x63)>x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x65 = 868137LLU;
	static int8_t x66 = INT8_MIN;
	uint64_t x67 = 15446294459006388LLU;

    t16 = (((x65==x66)==x67)>x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = -1;
	uint64_t x71 = 704668416LLU;
	uint8_t x72 = 25U;
	int32_t t17 = -23;

    t17 = (((x69==x70)==x71)>x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = UINT8_MAX;
	int8_t x74 = INT8_MIN;
	volatile int32_t x76 = INT32_MIN;
	int32_t t18 = 326;

    t18 = (((x73==x74)==x75)>x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = -430;
	int32_t x78 = 3357;
	static uint64_t x80 = 810094LLU;
	volatile int32_t t19 = 95488015;

    t19 = (((x77==x78)==x79)>x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x81 = 0LLU;
	int32_t x82 = -1;
	static uint64_t x83 = 60160392LLU;
	uint16_t x84 = 18024U;
	volatile int32_t t20 = 245887374;

    t20 = (((x81==x82)==x83)>x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x86 = INT16_MIN;
	int8_t x88 = INT8_MAX;
	volatile int32_t t21 = -170813;

    t21 = (((x85==x86)==x87)>x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x91 = -1002503997514047996LL;

    t22 = (((x89==x90)==x91)>x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint32_t x93 = 1U;
	uint32_t x94 = UINT32_MAX;
	int64_t x96 = INT64_MIN;
	int32_t t23 = 1662750;

    t23 = (((x93==x94)==x95)>x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x97 = 28091494U;
	uint64_t x98 = 4199LLU;
	int8_t x99 = -60;
	volatile int64_t x100 = 526870179515399930LL;
	static volatile int32_t t24 = -54984608;

    t24 = (((x97==x98)==x99)>x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = 17671U;
	int32_t x102 = INT32_MAX;
	uint16_t x104 = 13U;

    t25 = (((x101==x102)==x103)>x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x105 = 15498053U;
	int32_t x107 = INT32_MIN;
	int32_t x108 = INT32_MIN;
	int32_t t26 = -308;

    t26 = (((x105==x106)==x107)>x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = -9LL;
	int8_t x110 = INT8_MIN;
	uint8_t x111 = UINT8_MAX;
	volatile int64_t x112 = INT64_MIN;
	volatile int32_t t27 = -1;

    t27 = (((x109==x110)==x111)>x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile uint8_t x113 = 7U;
	static uint16_t x114 = UINT16_MAX;
	volatile int8_t x115 = -1;
	static int16_t x116 = INT16_MIN;
	volatile int32_t t28 = 38617189;

    t28 = (((x113==x114)==x115)>x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x118 = INT32_MIN;
	uint64_t x119 = 593320LLU;

    t29 = (((x117==x118)==x119)>x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = INT16_MIN;
	int64_t x122 = 1707190876696LL;
	static int32_t x123 = -43;
	uint8_t x124 = UINT8_MAX;
	volatile int32_t t30 = -16;

    t30 = (((x121==x122)==x123)>x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint8_t x126 = 7U;
	int16_t x127 = INT16_MIN;
	uint64_t x128 = 2255647467834LLU;
	static int32_t t31 = -421915210;

    t31 = (((x125==x126)==x127)>x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x129 = 1;
	uint16_t x131 = 194U;
	uint8_t x132 = 6U;
	volatile int32_t t32 = -5027499;

    t32 = (((x129==x130)==x131)>x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint64_t x133 = 12LLU;
	int64_t x134 = INT64_MIN;

    t33 = (((x133==x134)==x135)>x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x137 = 3U;
	uint32_t x138 = 729U;
	int64_t x139 = INT64_MAX;
	int64_t x140 = -93826593226425751LL;
	int32_t t34 = -16137;

    t34 = (((x137==x138)==x139)>x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x141 = UINT64_MAX;
	uint32_t x142 = UINT32_MAX;
	volatile uint16_t x143 = UINT16_MAX;

    t35 = (((x141==x142)==x143)>x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x145 = INT16_MIN;
	volatile uint64_t x147 = 178473203837LLU;
	volatile int32_t t36 = 21139868;

    t36 = (((x145==x146)==x147)>x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x149 = UINT16_MAX;
	static int64_t x150 = INT64_MIN;
	static uint8_t x151 = 67U;
	volatile int64_t x152 = 125240LL;
	int32_t t37 = 1;

    t37 = (((x149==x150)==x151)>x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x153 = 6U;
	int32_t x155 = INT32_MAX;
	int16_t x156 = INT16_MIN;
	static int32_t t38 = -853;

    t38 = (((x153==x154)==x155)>x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint64_t x157 = UINT64_MAX;
	int64_t x158 = INT64_MIN;
	static uint8_t x159 = UINT8_MAX;
	int64_t x160 = INT64_MIN;
	volatile int32_t t39 = 5;

    t39 = (((x157==x158)==x159)>x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = INT64_MAX;
	volatile int16_t x162 = 297;
	volatile int8_t x163 = INT8_MAX;
	int16_t x164 = INT16_MIN;
	volatile int32_t t40 = 13380790;

    t40 = (((x161==x162)==x163)>x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = 39;
	int8_t x167 = 51;
	uint8_t x168 = 6U;
	int32_t t41 = -5;

    t41 = (((x165==x166)==x167)>x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = -1005;
	static int8_t x170 = INT8_MIN;
	int32_t x171 = 64;
	volatile uint16_t x172 = 32102U;
	int32_t t42 = 330411224;

    t42 = (((x169==x170)==x171)>x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint32_t x173 = 1665276U;
	static int16_t x174 = INT16_MIN;
	static int16_t x175 = -1;
	int16_t x176 = INT16_MAX;

    t43 = (((x173==x174)==x175)>x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x177 = INT8_MIN;
	int32_t x179 = -1;
	static uint8_t x180 = 1U;
	int32_t t44 = 1219;

    t44 = (((x177==x178)==x179)>x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x181 = UINT16_MAX;
	int32_t x182 = 1169;
	int32_t x183 = 0;
	static int8_t x184 = INT8_MIN;
	volatile int32_t t45 = -50576;

    t45 = (((x181==x182)==x183)>x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x185 = 170U;
	int64_t x186 = 235500690LL;
	int8_t x187 = 6;
	static uint16_t x188 = 0U;

    t46 = (((x185==x186)==x187)>x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint32_t x189 = 5U;
	int64_t x191 = INT64_MAX;
	uint32_t x192 = UINT32_MAX;
	int32_t t47 = 1;

    t47 = (((x189==x190)==x191)>x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = -1;
	static int16_t x194 = INT16_MAX;
	uint32_t x195 = 13848U;
	int64_t x196 = -1LL;
	int32_t t48 = 77129;

    t48 = (((x193==x194)==x195)>x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = -5183622;
	uint32_t x199 = UINT32_MAX;
	int32_t t49 = 4;

    t49 = (((x197==x198)==x199)>x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint16_t x201 = UINT16_MAX;
	volatile uint16_t x202 = 175U;
	static int32_t x203 = 11324;
	volatile int32_t t50 = -28;

    t50 = (((x201==x202)==x203)>x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = INT16_MIN;
	int16_t x206 = INT16_MIN;
	uint32_t x207 = 8U;
	static int64_t x208 = -1LL;
	static int32_t t51 = -4643462;

    t51 = (((x205==x206)==x207)>x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint16_t x209 = 2822U;
	uint8_t x210 = UINT8_MAX;
	volatile int32_t x211 = -1;
	volatile int32_t t52 = 28041801;

    t52 = (((x209==x210)==x211)>x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x213 = 267660889U;
	int8_t x214 = -2;
	volatile uint16_t x215 = UINT16_MAX;
	int16_t x216 = INT16_MIN;

    t53 = (((x213==x214)==x215)>x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = -3375;
	volatile int16_t x218 = -7143;
	static int16_t x219 = INT16_MAX;
	int16_t x220 = -1;

    t54 = (((x217==x218)==x219)>x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int8_t x221 = INT8_MAX;
	int16_t x222 = -1;
	int32_t t55 = 30189802;

    t55 = (((x221==x222)==x223)>x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x225 = INT8_MIN;
	uint64_t x226 = UINT64_MAX;
	static uint64_t x227 = 46349385598LLU;
	volatile int32_t x228 = -93636;

    t56 = (((x225==x226)==x227)>x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x229 = 1141LLU;
	uint16_t x230 = 53U;
	uint64_t x231 = UINT64_MAX;
	static int16_t x232 = INT16_MIN;
	static int32_t t57 = 5131;

    t57 = (((x229==x230)==x231)>x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x233 = 0;
	int32_t x234 = -1;
	int32_t x235 = INT32_MIN;
	static int16_t x236 = -1;
	volatile int32_t t58 = -116;

    t58 = (((x233==x234)==x235)>x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x238 = INT8_MIN;
	int16_t x239 = INT16_MIN;
	static volatile int32_t t59 = 42;

    t59 = (((x237==x238)==x239)>x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint8_t x241 = UINT8_MAX;
	static uint16_t x242 = 160U;
	int64_t x243 = INT64_MIN;
	int64_t x244 = INT64_MIN;
	static volatile int32_t t60 = -1428017;

    t60 = (((x241==x242)==x243)>x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x246 = UINT64_MAX;
	uint8_t x248 = 96U;
	volatile int32_t t61 = -65266550;

    t61 = (((x245==x246)==x247)>x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = -1;
	int16_t x250 = 14;
	static int8_t x251 = 26;
	int64_t x252 = -1LL;

    t62 = (((x249==x250)==x251)>x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x253 = 407934699183811LLU;
	int64_t x254 = -5482236742308LL;
	static volatile int8_t x255 = -1;
	static uint64_t x256 = 3379LLU;

    t63 = (((x253==x254)==x255)>x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x257 = INT64_MIN;
	uint64_t x258 = 29704660256964849LLU;
	volatile uint16_t x259 = 826U;
	volatile int32_t t64 = 262;

    t64 = (((x257==x258)==x259)>x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x261 = 0LLU;
	uint64_t x262 = 3945426LLU;
	uint32_t x263 = UINT32_MAX;
	uint8_t x264 = 15U;
	int32_t t65 = 1036616455;

    t65 = (((x261==x262)==x263)>x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x265 = 1U;
	volatile int8_t x266 = INT8_MIN;
	uint16_t x267 = 736U;
	uint16_t x268 = UINT16_MAX;
	int32_t t66 = 2;

    t66 = (((x265==x266)==x267)>x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = INT8_MAX;
	volatile int32_t x270 = -1;
	uint8_t x271 = UINT8_MAX;
	int8_t x272 = -1;
	int32_t t67 = 293;

    t67 = (((x269==x270)==x271)>x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = 1010406974249LL;
	uint32_t x275 = 323U;
	int32_t x276 = -1;

    t68 = (((x273==x274)==x275)>x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x278 = 1;
	int64_t x279 = -92653677573LL;
	static int32_t x280 = INT32_MIN;
	volatile int32_t t69 = 14557;

    t69 = (((x277==x278)==x279)>x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x281 = INT32_MIN;
	uint8_t x282 = 4U;
	static int64_t x284 = INT64_MIN;
	volatile int32_t t70 = -6805;

    t70 = (((x281==x282)==x283)>x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = -70056264;
	static int64_t x287 = INT64_MIN;
	int32_t t71 = 1;

    t71 = (((x285==x286)==x287)>x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x290 = UINT8_MAX;
	volatile int32_t x291 = INT32_MIN;
	static int64_t x292 = INT64_MIN;
	volatile int32_t t72 = -6;

    t72 = (((x289==x290)==x291)>x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = -1;
	static volatile uint8_t x296 = UINT8_MAX;
	int32_t t73 = 1;

    t73 = (((x293==x294)==x295)>x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x298 = 19;
	volatile int64_t x299 = 835683166564346059LL;
	static int64_t x300 = INT64_MIN;
	int32_t t74 = 4;

    t74 = (((x297==x298)==x299)>x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x302 = INT32_MAX;
	int64_t x303 = 11186695LL;
	static uint16_t x304 = 25U;
	int32_t t75 = 9489;

    t75 = (((x301==x302)==x303)>x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x305 = 1440562;
	static int64_t x306 = INT64_MAX;
	static int16_t x307 = INT16_MAX;
	uint8_t x308 = UINT8_MAX;
	volatile int32_t t76 = -7;

    t76 = (((x305==x306)==x307)>x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x309 = UINT8_MAX;
	int16_t x310 = -1;
	static volatile uint8_t x311 = UINT8_MAX;
	uint32_t x312 = 56U;
	volatile int32_t t77 = -1;

    t77 = (((x309==x310)==x311)>x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x313 = INT8_MAX;
	uint8_t x316 = 6U;
	int32_t t78 = 554687;

    t78 = (((x313==x314)==x315)>x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x317 = -1692665310576648203LL;
	static int32_t x318 = -1;
	volatile int32_t x319 = -280273;
	uint32_t x320 = 7870U;
	volatile int32_t t79 = 146102719;

    t79 = (((x317==x318)==x319)>x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x321 = INT64_MIN;
	int8_t x322 = INT8_MIN;
	int16_t x324 = INT16_MIN;
	volatile int32_t t80 = 453629;

    t80 = (((x321==x322)==x323)>x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x325 = INT32_MIN;
	static volatile int16_t x326 = INT16_MIN;

    t81 = (((x325==x326)==x327)>x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x330 = -1;
	volatile int16_t x331 = INT16_MIN;
	volatile int32_t t82 = -59232815;

    t82 = (((x329==x330)==x331)>x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint16_t x333 = UINT16_MAX;
	int32_t x336 = -1;

    t83 = (((x333==x334)==x335)>x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x337 = 0;
	uint64_t x338 = UINT64_MAX;
	volatile int32_t x339 = -1;
	volatile int64_t x340 = -18987891310LL;
	int32_t t84 = 258;

    t84 = (((x337==x338)==x339)>x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x341 = 5377;
	volatile int64_t x342 = -33168485850042LL;
	volatile uint16_t x343 = 463U;
	volatile int32_t x344 = -1;

    t85 = (((x341==x342)==x343)>x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x346 = 19;
	static int64_t x347 = -1LL;
	volatile int32_t t86 = -1;

    t86 = (((x345==x346)==x347)>x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x349 = 49399502LLU;
	uint64_t x350 = 50777898480226932LLU;
	int16_t x351 = -342;
	int16_t x352 = -1;
	static volatile int32_t t87 = 0;

    t87 = (((x349==x350)==x351)>x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x355 = -121;
	int64_t x356 = INT64_MIN;

    t88 = (((x353==x354)==x355)>x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = INT64_MAX;
	volatile int8_t x358 = INT8_MIN;
	uint16_t x359 = 0U;
	volatile int32_t t89 = 112;

    t89 = (((x357==x358)==x359)>x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = -60316;
	volatile uint64_t x362 = 690080782LLU;
	uint64_t x363 = 3979863088LLU;
	uint64_t x364 = 4417340048LLU;
	volatile int32_t t90 = 507;

    t90 = (((x361==x362)==x363)>x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = 4949;
	int16_t x366 = INT16_MAX;
	uint16_t x367 = 30317U;
	int8_t x368 = -1;
	int32_t t91 = 18076;

    t91 = (((x365==x366)==x367)>x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x369 = UINT8_MAX;
	static int8_t x371 = -1;
	uint32_t x372 = UINT32_MAX;
	int32_t t92 = -49088623;

    t92 = (((x369==x370)==x371)>x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint32_t x374 = UINT32_MAX;
	volatile int32_t t93 = -206;

    t93 = (((x373==x374)==x375)>x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint8_t x377 = 0U;
	uint16_t x378 = 669U;
	uint32_t x379 = UINT32_MAX;
	uint64_t x380 = 3LLU;

    t94 = (((x377==x378)==x379)>x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = INT8_MIN;
	uint8_t x383 = 62U;
	uint32_t x384 = 0U;
	int32_t t95 = 46591948;

    t95 = (((x381==x382)==x383)>x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x385 = INT8_MAX;
	int8_t x386 = 43;
	int16_t x387 = -7326;
	volatile uint32_t x388 = UINT32_MAX;
	int32_t t96 = -85078;

    t96 = (((x385==x386)==x387)>x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = 431LL;
	uint16_t x390 = 18269U;
	static int64_t x391 = INT64_MAX;
	int32_t t97 = -4;

    t97 = (((x389==x390)==x391)>x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x394 = INT16_MIN;
	static uint64_t x395 = UINT64_MAX;
	int32_t x396 = -1;
	volatile int32_t t98 = 7803;

    t98 = (((x393==x394)==x395)>x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x397 = INT16_MIN;
	int16_t x398 = INT16_MIN;
	volatile int32_t x399 = INT32_MAX;
	int16_t x400 = INT16_MAX;
	volatile int32_t t99 = -217030116;

    t99 = (((x397==x398)==x399)>x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x401 = INT64_MIN;
	uint16_t x402 = 1537U;
	int32_t t100 = 17520724;

    t100 = (((x401==x402)==x403)>x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x405 = -1;
	int16_t x406 = INT16_MIN;
	static uint32_t x407 = 13U;
	static int8_t x408 = -1;
	int32_t t101 = -7689;

    t101 = (((x405==x406)==x407)>x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint16_t x409 = 96U;
	int64_t x410 = INT64_MIN;
	static int32_t x411 = INT32_MIN;
	int16_t x412 = INT16_MAX;
	static volatile int32_t t102 = 3125;

    t102 = (((x409==x410)==x411)>x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x414 = INT8_MIN;
	int32_t x416 = INT32_MIN;
	int32_t t103 = 13;

    t103 = (((x413==x414)==x415)>x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x417 = INT32_MIN;
	volatile int16_t x418 = INT16_MIN;

    t104 = (((x417==x418)==x419)>x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x421 = 28U;
	int64_t x422 = -150133388075326799LL;
	volatile int32_t x423 = -834;
	static int64_t x424 = -1LL;
	int32_t t105 = -11;

    t105 = (((x421==x422)==x423)>x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x425 = INT64_MIN;
	volatile int16_t x427 = INT16_MIN;
	static volatile int16_t x428 = -4535;
	volatile int32_t t106 = 61;

    t106 = (((x425==x426)==x427)>x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x429 = INT64_MIN;
	int32_t x430 = -33864881;
	uint64_t x431 = 121677LLU;
	int32_t x432 = INT32_MAX;
	static int32_t t107 = 1503;

    t107 = (((x429==x430)==x431)>x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x433 = UINT64_MAX;
	int16_t x434 = INT16_MIN;
	volatile int32_t t108 = -62;

    t108 = (((x433==x434)==x435)>x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int32_t x437 = INT32_MIN;
	uint8_t x438 = 2U;
	uint32_t x439 = UINT32_MAX;
	int16_t x440 = INT16_MIN;
	int32_t t109 = 47387;

    t109 = (((x437==x438)==x439)>x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x441 = 0U;
	int8_t x442 = INT8_MIN;
	volatile int16_t x444 = -180;

    t110 = (((x441==x442)==x443)>x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = 0;
	uint32_t x446 = 5950U;
	int8_t x448 = 57;
	int32_t t111 = -165607531;

    t111 = (((x445==x446)==x447)>x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x449 = -75156534673LL;
	int32_t x450 = -4;
	static volatile uint64_t x451 = 1105336655508142373LLU;

    t112 = (((x449==x450)==x451)>x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = INT8_MAX;
	uint32_t x454 = 8369U;
	static uint64_t x456 = 12714530858474LLU;
	int32_t t113 = -166359966;

    t113 = (((x453==x454)==x455)>x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x457 = 195;
	int64_t x458 = INT64_MIN;
	uint16_t x459 = 211U;
	static int64_t x460 = INT64_MAX;

    t114 = (((x457==x458)==x459)>x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint16_t x462 = 61U;
	int32_t x463 = INT32_MIN;
	volatile int16_t x464 = -1;
	int32_t t115 = 859;

    t115 = (((x461==x462)==x463)>x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = INT8_MIN;
	volatile int32_t x466 = INT32_MAX;
	int64_t x467 = -1LL;
	volatile uint8_t x468 = 127U;
	static int32_t t116 = 476914;

    t116 = (((x465==x466)==x467)>x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x469 = UINT64_MAX;
	int32_t x470 = 54931356;
	int8_t x472 = -1;
	volatile int32_t t117 = 311;

    t117 = (((x469==x470)==x471)>x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x473 = INT16_MAX;
	static uint16_t x474 = 3U;
	int8_t x475 = 1;
	int8_t x476 = INT8_MIN;

    t118 = (((x473==x474)==x475)>x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int16_t x477 = INT16_MIN;
	int16_t x478 = -6686;
	int8_t x479 = INT8_MIN;
	uint8_t x480 = 18U;
	volatile int32_t t119 = 705512;

    t119 = (((x477==x478)==x479)>x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x481 = -4;
	int16_t x482 = INT16_MIN;
	uint32_t x484 = 15075259U;
	int32_t t120 = 14;

    t120 = (((x481==x482)==x483)>x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x485 = INT16_MIN;
	int16_t x486 = INT16_MIN;
	static int8_t x487 = 1;
	int8_t x488 = INT8_MIN;
	volatile int32_t t121 = -421767;

    t121 = (((x485==x486)==x487)>x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x489 = -1;
	int32_t x491 = -160253989;
	int8_t x492 = INT8_MIN;
	volatile int32_t t122 = -192845;

    t122 = (((x489==x490)==x491)>x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x493 = 5U;
	uint32_t x494 = 1U;
	uint8_t x496 = 6U;

    t123 = (((x493==x494)==x495)>x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint32_t x497 = UINT32_MAX;
	static int64_t x498 = -5032LL;
	int64_t x499 = INT64_MAX;
	uint32_t x500 = 198141U;
	static int32_t t124 = 18513;

    t124 = (((x497==x498)==x499)>x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x502 = -474;
	int32_t x503 = INT32_MIN;
	int8_t x504 = 1;
	static volatile int32_t t125 = 5;

    t125 = (((x501==x502)==x503)>x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int64_t x505 = 161077166174047748LL;
	static uint64_t x506 = UINT64_MAX;
	uint64_t x507 = 192499307947LLU;
	static volatile int8_t x508 = INT8_MIN;
	volatile int32_t t126 = -12244574;

    t126 = (((x505==x506)==x507)>x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = INT8_MIN;
	uint32_t x510 = 986852079U;
	static int64_t x511 = INT64_MIN;
	int32_t x512 = INT32_MIN;
	int32_t t127 = 880823700;

    t127 = (((x509==x510)==x511)>x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x513 = 15683;
	static int16_t x514 = INT16_MIN;
	static int8_t x516 = INT8_MIN;
	int32_t t128 = 1;

    t128 = (((x513==x514)==x515)>x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x518 = 36001640U;
	static int32_t x519 = -1;
	int64_t x520 = 2019788534324034LL;
	int32_t t129 = -6;

    t129 = (((x517==x518)==x519)>x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = INT8_MAX;
	volatile uint8_t x522 = UINT8_MAX;
	static uint32_t x523 = 215114U;
	int8_t x524 = 2;
	volatile int32_t t130 = 0;

    t130 = (((x521==x522)==x523)>x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x525 = UINT8_MAX;
	static int8_t x528 = -1;
	volatile int32_t t131 = -23;

    t131 = (((x525==x526)==x527)>x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x529 = -1LL;
	int8_t x530 = -1;
	uint32_t x531 = 23U;
	int16_t x532 = INT16_MAX;

    t132 = (((x529==x530)==x531)>x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x533 = 54LL;
	uint32_t x534 = 76U;
	int16_t x535 = -3489;
	volatile int32_t x536 = INT32_MIN;

    t133 = (((x533==x534)==x535)>x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x537 = UINT64_MAX;
	int64_t x538 = 1LL;
	volatile uint8_t x539 = 3U;
	volatile int32_t x540 = INT32_MIN;
	int32_t t134 = 7317;

    t134 = (((x537==x538)==x539)>x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x541 = INT64_MIN;
	volatile int32_t x542 = -111309070;
	uint8_t x543 = 3U;
	int8_t x544 = INT8_MAX;
	static int32_t t135 = -317;

    t135 = (((x541==x542)==x543)>x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = 173;
	int8_t x546 = -1;
	static volatile int64_t x547 = INT64_MIN;
	static int32_t t136 = 486608;

    t136 = (((x545==x546)==x547)>x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x549 = 1;
	static int8_t x550 = INT8_MAX;
	int64_t x551 = 3477085962503473LL;
	int64_t x552 = -109737600491545630LL;
	int32_t t137 = -247;

    t137 = (((x549==x550)==x551)>x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x553 = -196;
	int32_t x554 = INT32_MIN;
	volatile int8_t x555 = 1;
	uint16_t x556 = UINT16_MAX;

    t138 = (((x553==x554)==x555)>x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = INT64_MIN;
	int32_t x558 = 22;
	int64_t x559 = -1LL;
	volatile int16_t x560 = INT16_MIN;
	int32_t t139 = -87706;

    t139 = (((x557==x558)==x559)>x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = INT64_MIN;
	uint16_t x562 = UINT16_MAX;
	volatile uint8_t x563 = 122U;

    t140 = (((x561==x562)==x563)>x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int64_t x565 = INT64_MIN;
	int16_t x566 = 14;
	int64_t x567 = INT64_MAX;
	static int32_t x568 = INT32_MIN;
	int32_t t141 = -15848352;

    t141 = (((x565==x566)==x567)>x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x569 = 161;
	volatile int8_t x570 = INT8_MIN;
	volatile uint8_t x572 = UINT8_MAX;
	int32_t t142 = 7619;

    t142 = (((x569==x570)==x571)>x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x574 = -3518;
	uint16_t x576 = 0U;
	int32_t t143 = 328778;

    t143 = (((x573==x574)==x575)>x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x577 = 0U;
	int8_t x578 = 50;
	volatile int64_t x579 = 536583892800634497LL;
	int8_t x580 = INT8_MIN;
	int32_t t144 = 409;

    t144 = (((x577==x578)==x579)>x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x581 = 1;
	static uint64_t x582 = 158734466967LLU;
	static uint64_t x583 = 503LLU;
	int64_t x584 = INT64_MIN;
	int32_t t145 = 3888768;

    t145 = (((x581==x582)==x583)>x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x585 = 186;
	int32_t x586 = INT32_MAX;
	uint64_t x587 = 1969074LLU;
	volatile int32_t t146 = 26292271;

    t146 = (((x585==x586)==x587)>x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int16_t x590 = INT16_MIN;
	uint64_t x592 = 29276LLU;
	int32_t t147 = -1;

    t147 = (((x589==x590)==x591)>x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = -699753162;
	uint64_t x594 = UINT64_MAX;
	uint8_t x595 = 3U;
	volatile int16_t x596 = 4;

    t148 = (((x593==x594)==x595)>x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = -1;
	int32_t x598 = INT32_MIN;
	int32_t x599 = INT32_MIN;
	volatile int32_t t149 = 442935;

    t149 = (((x597==x598)==x599)>x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x601 = UINT8_MAX;
	volatile int32_t x602 = -7;
	int8_t x603 = -1;
	static uint32_t x604 = 190978U;
	volatile int32_t t150 = 0;

    t150 = (((x601==x602)==x603)>x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x605 = -7;
	int64_t x606 = INT64_MAX;
	int32_t x607 = -4231;
	static volatile int32_t x608 = INT32_MIN;
	volatile int32_t t151 = 172268098;

    t151 = (((x605==x606)==x607)>x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x610 = -58;
	int32_t x611 = INT32_MAX;
	int16_t x612 = INT16_MAX;
	static volatile int32_t t152 = -1625865;

    t152 = (((x609==x610)==x611)>x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x614 = 15;
	int16_t x615 = INT16_MIN;
	int32_t t153 = -64043;

    t153 = (((x613==x614)==x615)>x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint8_t x617 = UINT8_MAX;
	uint16_t x618 = UINT16_MAX;
	int16_t x619 = -4;
	static volatile int8_t x620 = INT8_MIN;

    t154 = (((x617==x618)==x619)>x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x621 = -15233;
	uint16_t x622 = 0U;
	int64_t x624 = 15773802173LL;
	int32_t t155 = 0;

    t155 = (((x621==x622)==x623)>x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x625 = INT64_MIN;
	uint32_t x626 = UINT32_MAX;
	int64_t x627 = -194042LL;
	int64_t x628 = INT64_MAX;
	int32_t t156 = 1324;

    t156 = (((x625==x626)==x627)>x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x630 = 14486544LLU;
	int32_t x631 = INT32_MAX;
	volatile int32_t t157 = -3;

    t157 = (((x629==x630)==x631)>x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int32_t x633 = -1;
	int16_t x634 = -4293;
	uint16_t x635 = 60U;
	int32_t t158 = -11750;

    t158 = (((x633==x634)==x635)>x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int16_t x637 = INT16_MIN;
	int16_t x638 = 0;
	int64_t x640 = -347LL;
	int32_t t159 = -939538469;

    t159 = (((x637==x638)==x639)>x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x641 = INT8_MIN;
	int64_t x642 = INT64_MIN;
	int32_t x643 = INT32_MIN;
	uint64_t x644 = 3759LLU;
	static int32_t t160 = -17334;

    t160 = (((x641==x642)==x643)>x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint64_t x646 = 1492669LLU;
	static int16_t x647 = 1;
	uint32_t x648 = 5U;
	int32_t t161 = 548159930;

    t161 = (((x645==x646)==x647)>x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = INT8_MIN;
	int32_t x650 = INT32_MAX;
	int64_t x651 = INT64_MAX;
	uint32_t x652 = UINT32_MAX;
	static volatile int32_t t162 = 5;

    t162 = (((x649==x650)==x651)>x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x653 = INT16_MIN;
	static int16_t x654 = INT16_MIN;
	uint8_t x656 = 92U;
	int32_t t163 = -503382103;

    t163 = (((x653==x654)==x655)>x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x657 = INT8_MAX;
	int8_t x658 = INT8_MIN;
	volatile int8_t x659 = -1;
	int64_t x660 = 14LL;
	volatile int32_t t164 = 42516;

    t164 = (((x657==x658)==x659)>x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x662 = INT8_MIN;
	uint64_t x664 = UINT64_MAX;
	int32_t t165 = 18610766;

    t165 = (((x661==x662)==x663)>x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x666 = INT8_MAX;
	int64_t x667 = 8283577623LL;
	static int8_t x668 = -1;
	int32_t t166 = 9;

    t166 = (((x665==x666)==x667)>x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x669 = INT8_MAX;
	static int8_t x670 = 7;
	int16_t x671 = -1;
	int16_t x672 = INT16_MIN;
	static int32_t t167 = -183;

    t167 = (((x669==x670)==x671)>x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x674 = 2U;
	static int64_t x675 = 138492186956751LL;
	int8_t x676 = 1;

    t168 = (((x673==x674)==x675)>x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x678 = -1;
	static int64_t x679 = INT64_MIN;
	int64_t x680 = INT64_MAX;
	int32_t t169 = 466;

    t169 = (((x677==x678)==x679)>x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint8_t x681 = UINT8_MAX;
	uint32_t x684 = 3U;

    t170 = (((x681==x682)==x683)>x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x685 = INT16_MIN;
	uint16_t x687 = 790U;
	volatile int32_t t171 = 1;

    t171 = (((x685==x686)==x687)>x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x689 = 79U;
	uint32_t x691 = UINT32_MAX;

    t172 = (((x689==x690)==x691)>x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x693 = UINT64_MAX;
	uint16_t x694 = 63U;
	uint64_t x695 = 67319756747245LLU;
	static int32_t t173 = 22718;

    t173 = (((x693==x694)==x695)>x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x697 = 7U;
	int32_t x698 = -803163;
	int16_t x700 = -1409;
	volatile int32_t t174 = -4;

    t174 = (((x697==x698)==x699)>x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int64_t x701 = INT64_MIN;
	int32_t x702 = -1;
	int8_t x703 = -1;
	volatile uint8_t x704 = 108U;

    t175 = (((x701==x702)==x703)>x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = INT8_MIN;
	int32_t x706 = -30;
	int64_t x707 = -1LL;
	static uint32_t x708 = UINT32_MAX;
	int32_t t176 = -234189814;

    t176 = (((x705==x706)==x707)>x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = -5;
	uint16_t x710 = 2799U;
	int64_t x711 = INT64_MIN;
	volatile uint64_t x712 = 53080516LLU;

    t177 = (((x709==x710)==x711)>x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x715 = UINT8_MAX;
	uint8_t x716 = 8U;
	int32_t t178 = 198280;

    t178 = (((x713==x714)==x715)>x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x717 = 3807U;
	static volatile uint32_t x718 = 2781255U;
	uint64_t x719 = 1858990778131237LLU;
	volatile int32_t t179 = 505685;

    t179 = (((x717==x718)==x719)>x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x721 = UINT32_MAX;
	static uint16_t x722 = 0U;
	static volatile int64_t x724 = INT64_MIN;

    t180 = (((x721==x722)==x723)>x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = 30LL;
	int16_t x727 = -1;
	volatile int32_t t181 = 0;

    t181 = (((x725==x726)==x727)>x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x729 = -1;
	volatile uint64_t x730 = 37231670LLU;
	volatile int8_t x731 = 1;
	uint8_t x732 = 20U;
	static int32_t t182 = 16;

    t182 = (((x729==x730)==x731)>x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint64_t x733 = 8648828824183483418LLU;
	uint64_t x735 = UINT64_MAX;
	static volatile int32_t t183 = 145;

    t183 = (((x733==x734)==x735)>x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x737 = INT32_MIN;
	int8_t x738 = 0;
	int64_t x739 = -36417885823LL;
	int16_t x740 = INT16_MIN;
	int32_t t184 = -2323;

    t184 = (((x737==x738)==x739)>x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint32_t x741 = 124U;
	int8_t x742 = -1;
	volatile int16_t x743 = INT16_MIN;
	uint32_t x744 = 3U;
	int32_t t185 = -273359883;

    t185 = (((x741==x742)==x743)>x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x745 = 364U;
	int64_t x746 = INT64_MIN;
	uint8_t x747 = 13U;
	int32_t t186 = -1;

    t186 = (((x745==x746)==x747)>x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x749 = -93;
	volatile uint8_t x751 = UINT8_MAX;
	static int64_t x752 = -14913436317039LL;
	static volatile int32_t t187 = -287146;

    t187 = (((x749==x750)==x751)>x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x753 = UINT64_MAX;
	int8_t x754 = INT8_MIN;
	int16_t x755 = -108;
	static uint32_t x756 = 40U;
	static volatile int32_t t188 = -613482977;

    t188 = (((x753==x754)==x755)>x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint16_t x757 = 534U;
	uint64_t x758 = 66413646042764LLU;
	volatile int16_t x760 = -1;
	int32_t t189 = 52758;

    t189 = (((x757==x758)==x759)>x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x762 = -1LL;
	int32_t x763 = INT32_MIN;
	static int32_t x764 = INT32_MIN;
	volatile int32_t t190 = 45744747;

    t190 = (((x761==x762)==x763)>x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = INT16_MAX;
	int64_t x766 = -1LL;
	int32_t x767 = -1;
	int8_t x768 = -29;
	int32_t t191 = 1;

    t191 = (((x765==x766)==x767)>x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x770 = 28U;
	static volatile int32_t x771 = -1;
	int8_t x772 = INT8_MIN;
	static volatile int32_t t192 = 3329577;

    t192 = (((x769==x770)==x771)>x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x773 = INT16_MIN;
	static volatile int32_t x774 = 380840;
	int16_t x775 = INT16_MIN;
	volatile int32_t x776 = -1;
	volatile int32_t t193 = 1;

    t193 = (((x773==x774)==x775)>x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x778 = UINT32_MAX;
	int8_t x779 = INT8_MIN;
	volatile int32_t t194 = -26231837;

    t194 = (((x777==x778)==x779)>x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = -1;
	int64_t x782 = INT64_MAX;
	volatile uint16_t x783 = 4U;
	volatile int32_t x784 = -1;
	volatile int32_t t195 = 178179172;

    t195 = (((x781==x782)==x783)>x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x786 = INT16_MAX;
	int64_t x787 = INT64_MIN;
	static volatile int16_t x788 = INT16_MAX;
	int32_t t196 = 19940;

    t196 = (((x785==x786)==x787)>x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = -23;
	static uint8_t x790 = 48U;
	static volatile int32_t x792 = INT32_MIN;
	volatile int32_t t197 = 1625274;

    t197 = (((x789==x790)==x791)>x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x793 = INT8_MIN;
	int8_t x794 = INT8_MIN;
	int32_t x795 = -26642;
	static volatile int32_t t198 = -18673;

    t198 = (((x793==x794)==x795)>x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = -1LL;
	volatile int32_t x798 = INT32_MIN;
	uint16_t x800 = UINT16_MAX;
	static int32_t t199 = 31529577;

    t199 = (((x797==x798)==x799)>x800);

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


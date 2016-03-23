
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

int8_t x1 = -1;
static int16_t x4 = -1;
volatile int32_t t1 = -1;
int64_t x9 = INT64_MAX;
static volatile int64_t x11 = -1550336103138816LL;
int16_t x13 = -12421;
static volatile uint16_t x14 = 9U;
int32_t t3 = 927606341;
uint16_t x24 = UINT16_MAX;
int32_t t6 = 12265414;
volatile int16_t x29 = -1;
static int16_t x30 = -1;
uint64_t x35 = 102180441786226LLU;
static int64_t x38 = INT64_MIN;
volatile uint8_t x43 = 12U;
int32_t x46 = -1133620;
int32_t t11 = 818735;
uint8_t x51 = UINT8_MAX;
static int32_t t12 = -300234;
uint8_t x54 = UINT8_MAX;
int32_t t13 = -62;
int8_t x59 = INT8_MAX;
uint16_t x60 = UINT16_MAX;
int16_t x64 = INT16_MIN;
int32_t t17 = -10067;
int8_t x73 = INT8_MIN;
uint32_t x77 = 1129535944U;
volatile int8_t x78 = 1;
int32_t t20 = -2322059;
static uint32_t x95 = 32026434U;
volatile int32_t t24 = 5362082;
uint32_t x103 = UINT32_MAX;
static volatile int32_t t25 = -294446;
static int32_t t26 = -14477037;
static volatile int32_t t27 = 1;
int64_t x114 = 397LL;
int32_t x115 = 205386;
volatile int8_t x122 = INT8_MAX;
int16_t x124 = -95;
uint64_t x128 = 2544658147454019LLU;
volatile int32_t t32 = 188;
int16_t x138 = INT16_MIN;
static uint16_t x141 = UINT16_MAX;
static int16_t x142 = INT16_MAX;
int32_t x145 = INT32_MIN;
uint64_t x147 = 10LLU;
uint16_t x155 = 14805U;
int32_t x156 = INT32_MIN;
int32_t x157 = -1;
uint16_t x162 = 31U;
int32_t t42 = 1040988986;
int64_t x173 = 12240LL;
uint64_t x176 = 5581288908348140LLU;
int64_t x177 = INT64_MAX;
int8_t x184 = -1;
volatile int32_t t45 = 1863;
int32_t x191 = INT32_MIN;
volatile int32_t t47 = 411;
int8_t x193 = -1;
int32_t x197 = INT32_MIN;
volatile uint32_t x203 = UINT32_MAX;
int32_t t50 = -884911853;
uint8_t x205 = 16U;
int64_t x210 = INT64_MIN;
uint64_t x211 = 49948289874LLU;
int8_t x216 = INT8_MIN;
volatile uint16_t x218 = UINT16_MAX;
static uint8_t x231 = 53U;
int32_t t57 = -4898;
volatile int16_t x233 = INT16_MIN;
static int8_t x234 = -1;
volatile int32_t t58 = -157237;
int32_t x240 = INT32_MAX;
int32_t x245 = -1;
uint32_t x246 = UINT32_MAX;
int8_t x247 = INT8_MIN;
static int16_t x248 = INT16_MAX;
static int16_t x249 = -1;
volatile int32_t t63 = -16419407;
int16_t x260 = -1;
volatile int8_t x264 = INT8_MIN;
volatile int32_t t65 = -53025712;
int8_t x265 = INT8_MAX;
volatile int32_t t67 = 12210552;
volatile uint32_t x274 = 353569178U;
volatile int32_t t68 = 868;
int32_t t69 = 437022108;
static int8_t x282 = INT8_MIN;
static uint16_t x283 = UINT16_MAX;
int64_t x284 = -1LL;
int16_t x286 = INT16_MAX;
static uint8_t x302 = UINT8_MAX;
volatile int16_t x303 = INT16_MIN;
int64_t x318 = INT64_MAX;
uint8_t x323 = 40U;
int8_t x335 = -1;
static int64_t x337 = -116664240378991LL;
volatile int8_t x338 = INT8_MIN;
int32_t t84 = 177;
static volatile int16_t x343 = INT16_MIN;
volatile uint64_t x346 = 2175195859773043907LLU;
static volatile uint16_t x347 = 7U;
static int16_t x348 = -1;
static uint16_t x354 = UINT16_MAX;
int8_t x358 = INT8_MIN;
uint8_t x365 = 0U;
int32_t x368 = 623357;
int32_t t91 = -36956;
volatile int8_t x369 = 34;
int16_t x372 = 13922;
int32_t t92 = -549;
volatile int32_t t94 = -716;
static volatile uint32_t x382 = 80643687U;
static int32_t t95 = -201404;
static volatile uint16_t x385 = UINT16_MAX;
uint8_t x396 = 58U;
int32_t x399 = INT32_MIN;
volatile int32_t x401 = INT32_MIN;
static int16_t x402 = -6209;
static volatile int64_t x407 = 34516328LL;
uint32_t x410 = UINT32_MAX;
uint16_t x411 = 991U;
int16_t x412 = -2;
static int32_t t102 = -1762;
static int8_t x421 = INT8_MIN;
static int8_t x423 = INT8_MIN;
uint64_t x425 = 1042712501080380846LLU;
uint16_t x434 = 189U;
volatile int8_t x436 = 0;
int32_t t108 = -114072770;
volatile uint64_t x445 = 795591834423333LLU;
int16_t x446 = INT16_MIN;
volatile int32_t t111 = -235;
int8_t x450 = -1;
static int16_t x451 = 367;
static int64_t x463 = 70360999915250606LL;
int64_t x466 = INT64_MIN;
static int16_t x468 = -416;
uint64_t x471 = UINT64_MAX;
int16_t x475 = 1;
uint8_t x476 = UINT8_MAX;
int32_t t118 = 2;
volatile uint16_t x489 = 1028U;
int32_t x498 = 20;
int8_t x499 = -1;
int16_t x503 = INT16_MIN;
uint16_t x505 = 202U;
static volatile uint16_t x509 = 992U;
static int16_t x519 = -3;
uint32_t x531 = 613614292U;
volatile int32_t t132 = 6681641;
volatile int64_t x537 = -3208671086173LL;
uint64_t x545 = UINT64_MAX;
uint16_t x549 = UINT16_MAX;
static uint16_t x552 = 9U;
int32_t t138 = -307206;
static int8_t x559 = INT8_MIN;
static int8_t x561 = 15;
volatile int16_t x562 = INT16_MAX;
int32_t t140 = -2113663;
volatile int8_t x566 = INT8_MIN;
static int16_t x570 = INT16_MIN;
int8_t x573 = INT8_MIN;
volatile int16_t x576 = -1;
uint16_t x579 = UINT16_MAX;
int64_t x588 = -1LL;
volatile int16_t x591 = INT16_MAX;
int16_t x599 = 10605;
static int32_t x602 = INT32_MIN;
uint16_t x603 = 1274U;
static int8_t x613 = 0;
uint16_t x614 = 7U;
uint32_t x623 = 3465U;
static volatile int32_t t158 = 64031;
static uint16_t x637 = 143U;
int64_t x649 = 3398837LL;
int64_t x656 = 1LL;
volatile int8_t x660 = 10;
int16_t x661 = -1;
volatile int32_t t166 = 47;
int32_t t167 = -383526;
static uint32_t x677 = 3047411U;
volatile int32_t t169 = 1;
int8_t x681 = INT8_MIN;
int8_t x682 = INT8_MIN;
volatile int32_t t170 = 0;
int32_t x685 = -13338;
volatile int64_t x688 = INT64_MAX;
uint32_t x690 = 24U;
uint8_t x694 = 1U;
uint32_t x699 = UINT32_MAX;
static volatile int32_t t174 = -1;
int32_t t176 = -252954;
volatile int64_t x714 = INT64_MAX;
int32_t t178 = -81;
int8_t x717 = -1;
int32_t x728 = INT32_MAX;
int64_t x729 = -186562428927LL;
static volatile int32_t t183 = 4;
volatile uint16_t x738 = 2U;
int64_t x741 = -453LL;
uint64_t x742 = 5535716724472623LLU;
int32_t x744 = INT32_MAX;
uint16_t x745 = 3U;
volatile int32_t x747 = -1;
uint16_t x750 = 129U;
volatile int8_t x751 = INT8_MIN;
int32_t x761 = INT32_MIN;
int32_t t191 = 16;
volatile int64_t x769 = 2621183476994026984LL;
static int16_t x771 = INT16_MIN;
static uint8_t x780 = 0U;
int64_t x781 = 101926779LL;
static int32_t x784 = INT32_MIN;
int32_t t195 = -33;
int32_t x788 = INT32_MIN;
static int8_t x791 = INT8_MIN;
int64_t x798 = -1LL;


void f0(void) {
    	volatile int8_t x2 = INT8_MIN;
	int32_t x3 = 12;
	static volatile int32_t t0 = -89;

    t0 = ((x1*(x2>x3))!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = -1;
	uint8_t x6 = 20U;
	uint8_t x7 = 3U;
	int8_t x8 = 10;

    t1 = ((x5*(x6>x7))!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x10 = 7U;
	volatile int64_t x12 = INT64_MIN;
	volatile int32_t t2 = 9304797;

    t2 = ((x9*(x10>x11))!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x15 = -2;
	volatile int32_t x16 = INT32_MIN;

    t3 = ((x13*(x14>x15))!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint32_t x17 = 24105U;
	int8_t x18 = 0;
	int8_t x19 = -1;
	uint64_t x20 = 7LLU;
	volatile int32_t t4 = 15057;

    t4 = ((x17*(x18>x19))!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MAX;
	static volatile int16_t x22 = -2200;
	volatile int16_t x23 = INT16_MAX;
	int32_t t5 = -46704437;

    t5 = ((x21*(x22>x23))!=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MAX;
	static uint32_t x26 = UINT32_MAX;
	static int16_t x27 = INT16_MIN;
	uint32_t x28 = UINT32_MAX;

    t6 = ((x25*(x26>x27))!=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x31 = 14635U;
	int64_t x32 = 57659328422453LL;
	int32_t t7 = 94;

    t7 = ((x29*(x30>x31))!=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = INT8_MIN;
	volatile uint8_t x34 = 1U;
	volatile uint32_t x36 = 24089052U;
	int32_t t8 = -4349;

    t8 = ((x33*(x34>x35))!=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x37 = INT16_MIN;
	uint16_t x39 = 6864U;
	int32_t x40 = INT32_MIN;
	volatile int32_t t9 = -690190;

    t9 = ((x37*(x38>x39))!=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x41 = INT8_MIN;
	int16_t x42 = 231;
	uint8_t x44 = UINT8_MAX;
	volatile int32_t t10 = 89087847;

    t10 = ((x41*(x42>x43))!=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = -741LL;
	uint64_t x47 = UINT64_MAX;
	volatile int32_t x48 = INT32_MAX;

    t11 = ((x45*(x46>x47))!=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x49 = UINT8_MAX;
	static uint16_t x50 = 29U;
	volatile int8_t x52 = -1;

    t12 = ((x49*(x50>x51))!=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x53 = -1;
	static uint16_t x55 = UINT16_MAX;
	uint64_t x56 = 8264635444LLU;

    t13 = ((x53*(x54>x55))!=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x57 = UINT64_MAX;
	volatile uint16_t x58 = 13737U;
	volatile int32_t t14 = -2574399;

    t14 = ((x57*(x58>x59))!=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = 41;
	uint8_t x62 = UINT8_MAX;
	int64_t x63 = INT64_MIN;
	int32_t t15 = -28;

    t15 = ((x61*(x62>x63))!=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = UINT16_MAX;
	static int8_t x66 = INT8_MAX;
	int8_t x67 = -1;
	volatile int64_t x68 = INT64_MAX;
	volatile int32_t t16 = -101294846;

    t16 = ((x65*(x66>x67))!=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = INT16_MIN;
	int8_t x70 = 1;
	int32_t x71 = -4;
	int16_t x72 = -1;

    t17 = ((x69*(x70>x71))!=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x74 = -1;
	volatile int64_t x75 = INT64_MAX;
	uint8_t x76 = 57U;
	static int32_t t18 = -12599225;

    t18 = ((x73*(x74>x75))!=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x79 = -893;
	int64_t x80 = 64LL;
	volatile int32_t t19 = -3;

    t19 = ((x77*(x78>x79))!=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint16_t x81 = UINT16_MAX;
	volatile uint16_t x82 = 0U;
	static int64_t x83 = -93789159LL;
	static int8_t x84 = INT8_MIN;

    t20 = ((x81*(x82>x83))!=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x85 = UINT64_MAX;
	int64_t x86 = 1303616059LL;
	uint32_t x87 = 73176463U;
	int32_t x88 = -1;
	volatile int32_t t21 = 3;

    t21 = ((x85*(x86>x87))!=x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x89 = 117U;
	int16_t x90 = 1;
	int64_t x91 = INT64_MIN;
	int32_t x92 = -1;
	volatile int32_t t22 = -194328;

    t22 = ((x89*(x90>x91))!=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x93 = INT32_MIN;
	int8_t x94 = INT8_MIN;
	uint32_t x96 = 804499U;
	int32_t t23 = 484727424;

    t23 = ((x93*(x94>x95))!=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x97 = INT16_MAX;
	int64_t x98 = INT64_MIN;
	int64_t x99 = -1LL;
	int64_t x100 = INT64_MIN;

    t24 = ((x97*(x98>x99))!=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x101 = INT32_MIN;
	int16_t x102 = INT16_MIN;
	uint32_t x104 = UINT32_MAX;

    t25 = ((x101*(x102>x103))!=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint64_t x105 = 67782659947778173LLU;
	static int8_t x106 = INT8_MAX;
	int32_t x107 = INT32_MAX;
	int8_t x108 = -1;

    t26 = ((x105*(x106>x107))!=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x109 = 1U;
	int64_t x110 = INT64_MAX;
	int32_t x111 = INT32_MIN;
	static int8_t x112 = INT8_MAX;

    t27 = ((x109*(x110>x111))!=x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint16_t x113 = 15U;
	uint32_t x116 = 62U;
	int32_t t28 = -332240117;

    t28 = ((x113*(x114>x115))!=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = 10;
	int64_t x118 = INT64_MAX;
	int16_t x119 = 0;
	uint64_t x120 = 0LLU;
	int32_t t29 = -1;

    t29 = ((x117*(x118>x119))!=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = INT64_MIN;
	int16_t x123 = 118;
	int32_t t30 = 53986;

    t30 = ((x121*(x122>x123))!=x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = 418LL;
	volatile int32_t x126 = 342665;
	static uint32_t x127 = 18U;
	volatile int32_t t31 = 176670;

    t31 = ((x125*(x126>x127))!=x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = INT32_MAX;
	static int8_t x130 = -1;
	int16_t x131 = INT16_MIN;
	volatile int64_t x132 = INT64_MIN;

    t32 = ((x129*(x130>x131))!=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = INT8_MAX;
	static uint64_t x134 = 1414174LLU;
	static int32_t x135 = INT32_MAX;
	int32_t x136 = -609046087;
	int32_t t33 = -9265344;

    t33 = ((x133*(x134>x135))!=x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x137 = 8U;
	volatile uint32_t x139 = UINT32_MAX;
	int8_t x140 = INT8_MAX;
	int32_t t34 = -12;

    t34 = ((x137*(x138>x139))!=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x143 = 1LLU;
	int64_t x144 = -66113176LL;
	volatile int32_t t35 = 14197601;

    t35 = ((x141*(x142>x143))!=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x146 = -1;
	static volatile int32_t x148 = -16133861;
	int32_t t36 = 2138945;

    t36 = ((x145*(x146>x147))!=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x149 = UINT8_MAX;
	static int32_t x150 = INT32_MIN;
	int64_t x151 = -8LL;
	static int16_t x152 = -1;
	int32_t t37 = -108;

    t37 = ((x149*(x150>x151))!=x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint32_t x153 = 962U;
	int64_t x154 = INT64_MIN;
	int32_t t38 = 1553849;

    t38 = ((x153*(x154>x155))!=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint16_t x158 = UINT16_MAX;
	int64_t x159 = INT64_MAX;
	uint32_t x160 = UINT32_MAX;
	int32_t t39 = 1283;

    t39 = ((x157*(x158>x159))!=x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = -5;
	volatile int32_t x163 = INT32_MAX;
	static int16_t x164 = INT16_MIN;
	int32_t t40 = 31;

    t40 = ((x161*(x162>x163))!=x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = INT64_MIN;
	int32_t x166 = -53262;
	int64_t x167 = -1LL;
	static int16_t x168 = 15008;
	int32_t t41 = -1925817;

    t41 = ((x165*(x166>x167))!=x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x169 = -5256811631LL;
	static int16_t x170 = 978;
	static int32_t x171 = INT32_MIN;
	int8_t x172 = INT8_MIN;

    t42 = ((x169*(x170>x171))!=x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x174 = UINT8_MAX;
	int64_t x175 = 3631LL;
	int32_t t43 = 128500296;

    t43 = ((x173*(x174>x175))!=x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x178 = 178313U;
	int16_t x179 = 478;
	int32_t x180 = INT32_MIN;
	static int32_t t44 = -6;

    t44 = ((x177*(x178>x179))!=x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x181 = -459050;
	static uint32_t x182 = 1556880775U;
	int8_t x183 = -20;

    t45 = ((x181*(x182>x183))!=x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x185 = 180008261U;
	int32_t x186 = INT32_MAX;
	uint64_t x187 = UINT64_MAX;
	uint16_t x188 = 12U;
	int32_t t46 = -640718193;

    t46 = ((x185*(x186>x187))!=x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = INT64_MIN;
	uint32_t x190 = 1960U;
	int16_t x192 = 7863;

    t47 = ((x189*(x190>x191))!=x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x194 = INT32_MAX;
	int32_t x195 = INT32_MAX;
	static int8_t x196 = INT8_MIN;
	static volatile int32_t t48 = 0;

    t48 = ((x193*(x194>x195))!=x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x198 = INT16_MIN;
	int16_t x199 = INT16_MIN;
	int64_t x200 = -1LL;
	static volatile int32_t t49 = 85;

    t49 = ((x197*(x198>x199))!=x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x201 = UINT64_MAX;
	int16_t x202 = INT16_MIN;
	volatile int64_t x204 = -778962595064LL;

    t50 = ((x201*(x202>x203))!=x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x206 = INT32_MIN;
	uint32_t x207 = 1U;
	uint64_t x208 = 216321822293144LLU;
	int32_t t51 = 1;

    t51 = ((x205*(x206>x207))!=x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x209 = 43U;
	static volatile uint64_t x212 = 1499185221LLU;
	static volatile int32_t t52 = -143448;

    t52 = ((x209*(x210>x211))!=x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = -5;
	int32_t x214 = -1;
	int32_t x215 = -1;
	static volatile int32_t t53 = -91215306;

    t53 = ((x213*(x214>x215))!=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = INT16_MAX;
	volatile uint8_t x219 = 0U;
	static int16_t x220 = INT16_MIN;
	volatile int32_t t54 = 0;

    t54 = ((x217*(x218>x219))!=x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int16_t x221 = -3;
	volatile int16_t x222 = INT16_MIN;
	static int32_t x223 = INT32_MAX;
	int16_t x224 = -1;
	volatile int32_t t55 = 16697955;

    t55 = ((x221*(x222>x223))!=x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x225 = INT8_MIN;
	static int8_t x226 = INT8_MIN;
	static int16_t x227 = INT16_MIN;
	uint64_t x228 = 78LLU;
	int32_t t56 = -1687372;

    t56 = ((x225*(x226>x227))!=x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x229 = 53208618U;
	int16_t x230 = INT16_MAX;
	volatile int16_t x232 = 22;

    t57 = ((x229*(x230>x231))!=x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x235 = UINT8_MAX;
	uint64_t x236 = 396085606681345494LLU;

    t58 = ((x233*(x234>x235))!=x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x237 = UINT8_MAX;
	int32_t x238 = -9547185;
	static int16_t x239 = -1;
	int32_t t59 = 6417268;

    t59 = ((x237*(x238>x239))!=x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x241 = INT64_MIN;
	int8_t x242 = INT8_MIN;
	int32_t x243 = INT32_MIN;
	int16_t x244 = -1;
	static volatile int32_t t60 = -257286;

    t60 = ((x241*(x242>x243))!=x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t t61 = -12684243;

    t61 = ((x245*(x246>x247))!=x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x250 = -1;
	uint64_t x251 = 122LLU;
	static int8_t x252 = 7;
	volatile int32_t t62 = 300726595;

    t62 = ((x249*(x250>x251))!=x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint64_t x253 = 32650080662453LLU;
	int16_t x254 = -14;
	static int16_t x255 = INT16_MIN;
	int32_t x256 = -4;

    t63 = ((x253*(x254>x255))!=x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = 261254065458660LL;
	uint64_t x258 = 11LLU;
	static int8_t x259 = INT8_MAX;
	volatile int32_t t64 = 23107;

    t64 = ((x257*(x258>x259))!=x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x261 = UINT64_MAX;
	static int8_t x262 = INT8_MIN;
	volatile int64_t x263 = -1LL;

    t65 = ((x261*(x262>x263))!=x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x266 = INT32_MIN;
	static volatile int64_t x267 = -1LL;
	static int32_t x268 = 11;
	int32_t t66 = 125056792;

    t66 = ((x265*(x266>x267))!=x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint64_t x269 = 7367LLU;
	uint16_t x270 = 31U;
	int16_t x271 = INT16_MIN;
	int8_t x272 = INT8_MAX;

    t67 = ((x269*(x270>x271))!=x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = 1;
	int64_t x275 = -590874562552LL;
	int32_t x276 = INT32_MAX;

    t68 = ((x273*(x274>x275))!=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = INT16_MAX;
	int32_t x278 = -19;
	int64_t x279 = 120LL;
	int16_t x280 = INT16_MAX;

    t69 = ((x277*(x278>x279))!=x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = -11541;
	static volatile int32_t t70 = -252301;

    t70 = ((x281*(x282>x283))!=x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x285 = 115U;
	volatile int8_t x287 = INT8_MIN;
	int16_t x288 = INT16_MAX;
	int32_t t71 = 4;

    t71 = ((x285*(x286>x287))!=x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = -3419953662180744LL;
	int8_t x290 = 62;
	int16_t x291 = INT16_MIN;
	volatile int8_t x292 = 1;
	volatile int32_t t72 = 665066;

    t72 = ((x289*(x290>x291))!=x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x293 = INT16_MIN;
	uint64_t x294 = UINT64_MAX;
	volatile int16_t x295 = INT16_MIN;
	int16_t x296 = 1;
	volatile int32_t t73 = 150;

    t73 = ((x293*(x294>x295))!=x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x297 = -199;
	uint32_t x298 = 4689786U;
	int64_t x299 = INT64_MIN;
	uint32_t x300 = UINT32_MAX;
	int32_t t74 = 1;

    t74 = ((x297*(x298>x299))!=x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = INT16_MAX;
	int16_t x304 = INT16_MIN;
	int32_t t75 = -98753;

    t75 = ((x301*(x302>x303))!=x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x305 = UINT32_MAX;
	static int16_t x306 = INT16_MIN;
	int64_t x307 = INT64_MAX;
	static uint16_t x308 = 570U;
	static int32_t t76 = 232855;

    t76 = ((x305*(x306>x307))!=x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int32_t x309 = -1;
	static uint32_t x310 = UINT32_MAX;
	int8_t x311 = 0;
	static int32_t x312 = 2;
	int32_t t77 = -11574;

    t77 = ((x309*(x310>x311))!=x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x313 = 92;
	static int32_t x314 = -149484;
	int16_t x315 = INT16_MAX;
	int16_t x316 = -553;
	volatile int32_t t78 = -4018;

    t78 = ((x313*(x314>x315))!=x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = INT8_MAX;
	uint64_t x319 = UINT64_MAX;
	int64_t x320 = -1LL;
	volatile int32_t t79 = 41104806;

    t79 = ((x317*(x318>x319))!=x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x321 = INT64_MIN;
	uint64_t x322 = 54745726353863LLU;
	int16_t x324 = -1;
	int32_t t80 = 830226411;

    t80 = ((x321*(x322>x323))!=x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x325 = 189;
	uint64_t x326 = 6084056209597120LLU;
	static int8_t x327 = -1;
	uint8_t x328 = 127U;
	volatile int32_t t81 = 94;

    t81 = ((x325*(x326>x327))!=x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x329 = 10538;
	int64_t x330 = INT64_MAX;
	static int32_t x331 = -1;
	int64_t x332 = -28084LL;
	volatile int32_t t82 = 5179;

    t82 = ((x329*(x330>x331))!=x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x333 = INT32_MAX;
	volatile int16_t x334 = INT16_MIN;
	uint8_t x336 = 0U;
	static int32_t t83 = 9655;

    t83 = ((x333*(x334>x335))!=x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x339 = -51185;
	volatile int64_t x340 = -1LL;

    t84 = ((x337*(x338>x339))!=x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x341 = -1;
	int8_t x342 = INT8_MIN;
	static uint8_t x344 = 32U;
	int32_t t85 = 30;

    t85 = ((x341*(x342>x343))!=x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x345 = -49493;
	int32_t t86 = -19716;

    t86 = ((x345*(x346>x347))!=x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint64_t x349 = UINT64_MAX;
	int8_t x350 = -1;
	int32_t x351 = INT32_MIN;
	int64_t x352 = 30716708218LL;
	int32_t t87 = -1035;

    t87 = ((x349*(x350>x351))!=x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int32_t x353 = -952125542;
	uint32_t x355 = UINT32_MAX;
	static volatile int16_t x356 = 1;
	volatile int32_t t88 = 46640;

    t88 = ((x353*(x354>x355))!=x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = -1LL;
	int64_t x359 = INT64_MAX;
	int32_t x360 = INT32_MAX;
	int32_t t89 = 74802;

    t89 = ((x357*(x358>x359))!=x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x361 = -1;
	uint64_t x362 = UINT64_MAX;
	volatile int16_t x363 = 1503;
	int32_t x364 = -1;
	int32_t t90 = 27297330;

    t90 = ((x361*(x362>x363))!=x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint16_t x366 = UINT16_MAX;
	int8_t x367 = -35;

    t91 = ((x365*(x366>x367))!=x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x370 = -1LL;
	int16_t x371 = -3;

    t92 = ((x369*(x370>x371))!=x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x373 = -1;
	static int32_t x374 = -470;
	static int8_t x375 = -1;
	int8_t x376 = INT8_MIN;
	int32_t t93 = -60033;

    t93 = ((x373*(x374>x375))!=x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x377 = UINT64_MAX;
	static int64_t x378 = 10LL;
	int32_t x379 = -1;
	uint16_t x380 = 509U;

    t94 = ((x377*(x378>x379))!=x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x381 = UINT16_MAX;
	static int32_t x383 = -1;
	static int64_t x384 = INT64_MIN;

    t95 = ((x381*(x382>x383))!=x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x386 = INT8_MIN;
	uint16_t x387 = 2U;
	int32_t x388 = -1;
	volatile int32_t t96 = 7;

    t96 = ((x385*(x386>x387))!=x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x389 = INT64_MIN;
	int32_t x390 = INT32_MIN;
	uint32_t x391 = 10U;
	static int32_t x392 = INT32_MAX;
	static volatile int32_t t97 = -7981778;

    t97 = ((x389*(x390>x391))!=x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x393 = 48U;
	uint8_t x394 = UINT8_MAX;
	uint32_t x395 = UINT32_MAX;
	int32_t t98 = 25944676;

    t98 = ((x393*(x394>x395))!=x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x397 = INT64_MAX;
	volatile uint64_t x398 = 0LLU;
	volatile uint32_t x400 = 1U;
	int32_t t99 = 747005;

    t99 = ((x397*(x398>x399))!=x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x403 = INT32_MAX;
	int64_t x404 = INT64_MIN;
	int32_t t100 = 123019999;

    t100 = ((x401*(x402>x403))!=x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile uint32_t x405 = 0U;
	static volatile int32_t x406 = INT32_MAX;
	volatile int32_t x408 = 146473761;
	int32_t t101 = 14541300;

    t101 = ((x405*(x406>x407))!=x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x409 = -13;

    t102 = ((x409*(x410>x411))!=x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint64_t x413 = 5759LLU;
	int32_t x414 = INT32_MIN;
	int8_t x415 = INT8_MIN;
	int64_t x416 = INT64_MIN;
	volatile int32_t t103 = 1706;

    t103 = ((x413*(x414>x415))!=x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x417 = -1;
	static int32_t x418 = INT32_MIN;
	int16_t x419 = INT16_MAX;
	int64_t x420 = INT64_MIN;
	int32_t t104 = -15989932;

    t104 = ((x417*(x418>x419))!=x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x422 = 172U;
	int64_t x424 = -1LL;
	volatile int32_t t105 = 1100;

    t105 = ((x421*(x422>x423))!=x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x426 = INT16_MAX;
	static uint8_t x427 = 49U;
	int8_t x428 = -20;
	int32_t t106 = -719561699;

    t106 = ((x425*(x426>x427))!=x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x429 = 7;
	int8_t x430 = INT8_MAX;
	int32_t x431 = INT32_MIN;
	static int16_t x432 = -6199;
	int32_t t107 = -46;

    t107 = ((x429*(x430>x431))!=x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint16_t x433 = 12524U;
	int32_t x435 = INT32_MIN;

    t108 = ((x433*(x434>x435))!=x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint16_t x437 = UINT16_MAX;
	int32_t x438 = -1;
	uint32_t x439 = UINT32_MAX;
	int64_t x440 = INT64_MIN;
	volatile int32_t t109 = -1504;

    t109 = ((x437*(x438>x439))!=x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x441 = -1;
	static int8_t x442 = 1;
	static uint16_t x443 = 4297U;
	static int8_t x444 = -1;
	int32_t t110 = 432756;

    t110 = ((x441*(x442>x443))!=x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x447 = -104;
	static int32_t x448 = INT32_MIN;

    t111 = ((x445*(x446>x447))!=x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x449 = 120155619LLU;
	int32_t x452 = 3816;
	int32_t t112 = -182557333;

    t112 = ((x449*(x450>x451))!=x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x453 = INT16_MIN;
	int64_t x454 = INT64_MAX;
	static int32_t x455 = -1;
	int32_t x456 = -1;
	int32_t t113 = 24;

    t113 = ((x453*(x454>x455))!=x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = INT32_MIN;
	uint16_t x458 = 13U;
	int8_t x459 = INT8_MIN;
	int16_t x460 = INT16_MIN;
	int32_t t114 = -71;

    t114 = ((x457*(x458>x459))!=x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x461 = 6U;
	volatile int8_t x462 = -1;
	uint16_t x464 = UINT16_MAX;
	volatile int32_t t115 = -602;

    t115 = ((x461*(x462>x463))!=x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x465 = INT32_MIN;
	volatile int64_t x467 = INT64_MAX;
	volatile int32_t t116 = 9208;

    t116 = ((x465*(x466>x467))!=x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x469 = UINT8_MAX;
	int64_t x470 = 3132169472295LL;
	uint32_t x472 = 45214954U;
	volatile int32_t t117 = 47897241;

    t117 = ((x469*(x470>x471))!=x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint32_t x473 = UINT32_MAX;
	int16_t x474 = INT16_MIN;

    t118 = ((x473*(x474>x475))!=x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint8_t x477 = 7U;
	static int64_t x478 = -1LL;
	int32_t x479 = INT32_MIN;
	int32_t x480 = -1;
	int32_t t119 = 3983;

    t119 = ((x477*(x478>x479))!=x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x481 = 811352312724099LL;
	int16_t x482 = INT16_MIN;
	uint8_t x483 = 1U;
	int8_t x484 = 2;
	static int32_t t120 = -27065;

    t120 = ((x481*(x482>x483))!=x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int64_t x485 = 13LL;
	uint8_t x486 = UINT8_MAX;
	uint64_t x487 = UINT64_MAX;
	volatile int32_t x488 = -1;
	int32_t t121 = -487484347;

    t121 = ((x485*(x486>x487))!=x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x490 = INT32_MAX;
	int32_t x491 = INT32_MIN;
	volatile int8_t x492 = INT8_MIN;
	volatile int32_t t122 = -814550041;

    t122 = ((x489*(x490>x491))!=x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = INT64_MAX;
	uint32_t x494 = UINT32_MAX;
	int32_t x495 = -64203;
	uint64_t x496 = UINT64_MAX;
	volatile int32_t t123 = 14;

    t123 = ((x493*(x494>x495))!=x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int32_t x497 = -1;
	static volatile int64_t x500 = -1LL;
	static volatile int32_t t124 = -73933;

    t124 = ((x497*(x498>x499))!=x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x501 = -121526146LL;
	int16_t x502 = INT16_MIN;
	static volatile int16_t x504 = INT16_MAX;
	int32_t t125 = 544;

    t125 = ((x501*(x502>x503))!=x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x506 = 1327835998733779LLU;
	int32_t x507 = -123523722;
	int16_t x508 = -114;
	volatile int32_t t126 = -160901634;

    t126 = ((x505*(x506>x507))!=x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x510 = 47U;
	uint32_t x511 = UINT32_MAX;
	int16_t x512 = -1;
	volatile int32_t t127 = 3748;

    t127 = ((x509*(x510>x511))!=x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x513 = UINT16_MAX;
	static int64_t x514 = 13431394714495987LL;
	static int8_t x515 = INT8_MAX;
	int16_t x516 = 187;
	volatile int32_t t128 = -98018730;

    t128 = ((x513*(x514>x515))!=x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = -1;
	volatile uint16_t x518 = UINT16_MAX;
	static uint16_t x520 = 15087U;
	static volatile int32_t t129 = 1;

    t129 = ((x517*(x518>x519))!=x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = INT8_MIN;
	int32_t x522 = -1;
	int16_t x523 = INT16_MIN;
	static int32_t x524 = -24598905;
	int32_t t130 = -26068623;

    t130 = ((x521*(x522>x523))!=x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x525 = 625749850631803LLU;
	int8_t x526 = INT8_MIN;
	static volatile uint8_t x527 = 13U;
	int32_t x528 = INT32_MAX;
	int32_t t131 = -56499;

    t131 = ((x525*(x526>x527))!=x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x529 = -1;
	int8_t x530 = INT8_MIN;
	static int16_t x532 = INT16_MAX;

    t132 = ((x529*(x530>x531))!=x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = -1;
	int8_t x534 = INT8_MIN;
	int64_t x535 = INT64_MAX;
	uint64_t x536 = 431650163667274LLU;
	volatile int32_t t133 = 108330919;

    t133 = ((x533*(x534>x535))!=x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x538 = INT32_MAX;
	int16_t x539 = INT16_MAX;
	static int16_t x540 = INT16_MIN;
	volatile int32_t t134 = -218;

    t134 = ((x537*(x538>x539))!=x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = 36;
	uint64_t x542 = 572016831347458LLU;
	volatile int16_t x543 = -1;
	static int16_t x544 = -837;
	volatile int32_t t135 = 1;

    t135 = ((x541*(x542>x543))!=x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x546 = -1;
	int32_t x547 = -1;
	uint64_t x548 = UINT64_MAX;
	volatile int32_t t136 = 12;

    t136 = ((x545*(x546>x547))!=x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x550 = INT64_MIN;
	int32_t x551 = INT32_MAX;
	int32_t t137 = -31;

    t137 = ((x549*(x550>x551))!=x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x553 = 6720U;
	int32_t x554 = 2039079;
	uint32_t x555 = 80758U;
	volatile int8_t x556 = 0;

    t138 = ((x553*(x554>x555))!=x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = INT8_MIN;
	int64_t x558 = -7917572331254LL;
	int16_t x560 = INT16_MIN;
	volatile int32_t t139 = 70;

    t139 = ((x557*(x558>x559))!=x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x563 = INT32_MIN;
	static int16_t x564 = INT16_MAX;

    t140 = ((x561*(x562>x563))!=x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x565 = INT16_MIN;
	volatile int64_t x567 = -12LL;
	static uint16_t x568 = 1U;
	static volatile int32_t t141 = -899824489;

    t141 = ((x565*(x566>x567))!=x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = INT64_MIN;
	static uint64_t x571 = 14571499066747934LLU;
	int64_t x572 = INT64_MAX;
	static volatile int32_t t142 = -2663155;

    t142 = ((x569*(x570>x571))!=x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint8_t x574 = 15U;
	static int8_t x575 = INT8_MIN;
	volatile int32_t t143 = 262968;

    t143 = ((x573*(x574>x575))!=x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = INT8_MIN;
	volatile int16_t x578 = INT16_MAX;
	uint8_t x580 = UINT8_MAX;
	volatile int32_t t144 = -1;

    t144 = ((x577*(x578>x579))!=x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x581 = 60U;
	int8_t x582 = INT8_MAX;
	volatile uint32_t x583 = 2U;
	int16_t x584 = -785;
	static int32_t t145 = -2003357;

    t145 = ((x581*(x582>x583))!=x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x585 = -1LL;
	static uint32_t x586 = UINT32_MAX;
	uint64_t x587 = UINT64_MAX;
	static int32_t t146 = 927702900;

    t146 = ((x585*(x586>x587))!=x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint64_t x589 = UINT64_MAX;
	static uint8_t x590 = 36U;
	volatile int16_t x592 = -2729;
	volatile int32_t t147 = -75;

    t147 = ((x589*(x590>x591))!=x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile uint64_t x593 = 176154613950811LLU;
	volatile int8_t x594 = 5;
	int32_t x595 = 12805323;
	uint64_t x596 = 6852084180697LLU;
	volatile int32_t t148 = -50322131;

    t148 = ((x593*(x594>x595))!=x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int64_t x597 = INT64_MIN;
	int64_t x598 = 0LL;
	volatile int16_t x600 = INT16_MIN;
	int32_t t149 = 8;

    t149 = ((x597*(x598>x599))!=x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint8_t x601 = 42U;
	int16_t x604 = 226;
	int32_t t150 = -1016242;

    t150 = ((x601*(x602>x603))!=x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = INT32_MIN;
	int64_t x606 = INT64_MIN;
	volatile int16_t x607 = INT16_MIN;
	int64_t x608 = INT64_MAX;
	volatile int32_t t151 = 855711;

    t151 = ((x605*(x606>x607))!=x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x609 = INT8_MIN;
	volatile int16_t x610 = INT16_MIN;
	int64_t x611 = INT64_MIN;
	static volatile int8_t x612 = INT8_MIN;
	int32_t t152 = 1;

    t152 = ((x609*(x610>x611))!=x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x615 = INT32_MIN;
	volatile int64_t x616 = INT64_MIN;
	volatile int32_t t153 = -1;

    t153 = ((x613*(x614>x615))!=x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = INT16_MAX;
	int64_t x618 = 463130184873LL;
	uint16_t x619 = 0U;
	static int16_t x620 = INT16_MAX;
	volatile int32_t t154 = 683;

    t154 = ((x617*(x618>x619))!=x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = -1029LL;
	uint16_t x622 = 1402U;
	static int32_t x624 = INT32_MIN;
	volatile int32_t t155 = 40;

    t155 = ((x621*(x622>x623))!=x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint16_t x625 = 204U;
	uint32_t x626 = 98754U;
	volatile uint32_t x627 = 5539U;
	uint64_t x628 = UINT64_MAX;
	volatile int32_t t156 = 477;

    t156 = ((x625*(x626>x627))!=x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x629 = -1;
	int8_t x630 = 0;
	uint64_t x631 = 490739LLU;
	int64_t x632 = INT64_MAX;
	int32_t t157 = 197;

    t157 = ((x629*(x630>x631))!=x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x633 = 2U;
	int64_t x634 = -36996310LL;
	static int32_t x635 = -1;
	int64_t x636 = INT64_MIN;

    t158 = ((x633*(x634>x635))!=x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x638 = 65U;
	uint8_t x639 = UINT8_MAX;
	int8_t x640 = -1;
	int32_t t159 = -160;

    t159 = ((x637*(x638>x639))!=x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x641 = UINT8_MAX;
	static int16_t x642 = 3337;
	uint8_t x643 = 58U;
	int32_t x644 = -1;
	int32_t t160 = 252001;

    t160 = ((x641*(x642>x643))!=x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x645 = -1;
	uint8_t x646 = UINT8_MAX;
	static uint32_t x647 = UINT32_MAX;
	static volatile int16_t x648 = 280;
	static volatile int32_t t161 = -503388;

    t161 = ((x645*(x646>x647))!=x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x650 = 7U;
	int8_t x651 = INT8_MIN;
	uint8_t x652 = 1U;
	int32_t t162 = 30;

    t162 = ((x649*(x650>x651))!=x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x653 = INT64_MIN;
	volatile int32_t x654 = -682;
	int64_t x655 = INT64_MAX;
	volatile int32_t t163 = 488305384;

    t163 = ((x653*(x654>x655))!=x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint64_t x657 = 27289769487299LLU;
	uint64_t x658 = 2018282LLU;
	int8_t x659 = -1;
	int32_t t164 = -369932;

    t164 = ((x657*(x658>x659))!=x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x662 = INT16_MIN;
	int8_t x663 = INT8_MAX;
	static int16_t x664 = INT16_MIN;
	volatile int32_t t165 = 523567;

    t165 = ((x661*(x662>x663))!=x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x665 = INT32_MAX;
	uint16_t x666 = 1719U;
	int16_t x667 = 13;
	volatile uint16_t x668 = UINT16_MAX;

    t166 = ((x665*(x666>x667))!=x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = -1;
	int32_t x670 = INT32_MAX;
	static int64_t x671 = -1LL;
	int32_t x672 = INT32_MIN;

    t167 = ((x669*(x670>x671))!=x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x673 = 0U;
	int32_t x674 = INT32_MIN;
	uint16_t x675 = UINT16_MAX;
	int16_t x676 = -1;
	int32_t t168 = 7581;

    t168 = ((x673*(x674>x675))!=x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint8_t x678 = 1U;
	volatile int64_t x679 = INT64_MAX;
	volatile int16_t x680 = INT16_MIN;

    t169 = ((x677*(x678>x679))!=x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x683 = -1;
	int64_t x684 = 1219LL;

    t170 = ((x681*(x682>x683))!=x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x686 = INT32_MAX;
	uint8_t x687 = 6U;
	volatile int32_t t171 = -291052;

    t171 = ((x685*(x686>x687))!=x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint8_t x689 = 3U;
	int16_t x691 = INT16_MIN;
	static volatile uint8_t x692 = 0U;
	static int32_t t172 = 810;

    t172 = ((x689*(x690>x691))!=x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint8_t x693 = UINT8_MAX;
	int64_t x695 = -1LL;
	volatile int64_t x696 = INT64_MIN;
	static volatile int32_t t173 = -14562928;

    t173 = ((x693*(x694>x695))!=x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x697 = INT64_MAX;
	volatile int64_t x698 = 7LL;
	int16_t x700 = -1;

    t174 = ((x697*(x698>x699))!=x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = INT8_MIN;
	int32_t x702 = INT32_MAX;
	int16_t x703 = INT16_MAX;
	static int16_t x704 = INT16_MIN;
	int32_t t175 = 577;

    t175 = ((x701*(x702>x703))!=x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x705 = 28U;
	int64_t x706 = INT64_MIN;
	int8_t x707 = INT8_MIN;
	int16_t x708 = INT16_MAX;

    t176 = ((x705*(x706>x707))!=x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x709 = INT8_MIN;
	static int8_t x710 = INT8_MIN;
	static int16_t x711 = INT16_MIN;
	uint32_t x712 = 21U;
	int32_t t177 = 4646;

    t177 = ((x709*(x710>x711))!=x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x713 = -1;
	int16_t x715 = INT16_MAX;
	volatile int32_t x716 = 416778;

    t178 = ((x713*(x714>x715))!=x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x718 = -1;
	uint64_t x719 = 8028009538LLU;
	int64_t x720 = -7286193002812256LL;
	volatile int32_t t179 = -51941882;

    t179 = ((x717*(x718>x719))!=x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x721 = UINT64_MAX;
	static int32_t x722 = INT32_MIN;
	volatile int32_t x723 = INT32_MIN;
	volatile int16_t x724 = INT16_MIN;
	static volatile int32_t t180 = -405565553;

    t180 = ((x721*(x722>x723))!=x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x725 = 6LLU;
	volatile int16_t x726 = INT16_MIN;
	static int8_t x727 = -1;
	static int32_t t181 = -61762218;

    t181 = ((x725*(x726>x727))!=x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x730 = INT8_MIN;
	static volatile int32_t x731 = INT32_MIN;
	uint16_t x732 = 51U;
	int32_t t182 = 152816972;

    t182 = ((x729*(x730>x731))!=x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x733 = 184073849U;
	int8_t x734 = INT8_MIN;
	volatile uint32_t x735 = 9599203U;
	int32_t x736 = INT32_MAX;

    t183 = ((x733*(x734>x735))!=x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x737 = -3;
	static int32_t x739 = INT32_MAX;
	int16_t x740 = INT16_MIN;
	int32_t t184 = -103821076;

    t184 = ((x737*(x738>x739))!=x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x743 = UINT32_MAX;
	int32_t t185 = -8;

    t185 = ((x741*(x742>x743))!=x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x746 = INT64_MAX;
	int16_t x748 = INT16_MIN;
	static int32_t t186 = -1;

    t186 = ((x745*(x746>x747))!=x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint32_t x749 = 1117U;
	static volatile int64_t x752 = INT64_MAX;
	int32_t t187 = 19;

    t187 = ((x749*(x750>x751))!=x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x753 = INT16_MIN;
	static int8_t x754 = INT8_MIN;
	uint64_t x755 = 1397003454654045261LLU;
	int32_t x756 = INT32_MIN;
	int32_t t188 = -194718;

    t188 = ((x753*(x754>x755))!=x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x757 = INT16_MAX;
	int32_t x758 = INT32_MIN;
	volatile int64_t x759 = -1LL;
	uint64_t x760 = 0LLU;
	static volatile int32_t t189 = 18;

    t189 = ((x757*(x758>x759))!=x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x762 = INT16_MAX;
	int32_t x763 = 0;
	int16_t x764 = INT16_MIN;
	volatile int32_t t190 = 109831172;

    t190 = ((x761*(x762>x763))!=x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x765 = 27055U;
	int16_t x766 = INT16_MIN;
	int16_t x767 = INT16_MAX;
	uint64_t x768 = 3855734481279508694LLU;

    t191 = ((x765*(x766>x767))!=x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x770 = INT32_MIN;
	int64_t x772 = INT64_MAX;
	volatile int32_t t192 = -7;

    t192 = ((x769*(x770>x771))!=x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint8_t x773 = UINT8_MAX;
	int64_t x774 = INT64_MIN;
	static uint8_t x775 = 15U;
	volatile int32_t x776 = INT32_MIN;
	int32_t t193 = 3834;

    t193 = ((x773*(x774>x775))!=x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x777 = UINT64_MAX;
	volatile int32_t x778 = INT32_MIN;
	int16_t x779 = 1;
	volatile int32_t t194 = -1;

    t194 = ((x777*(x778>x779))!=x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x782 = 18U;
	static int64_t x783 = INT64_MAX;

    t195 = ((x781*(x782>x783))!=x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x785 = 617622262466430105LLU;
	uint8_t x786 = 1U;
	volatile int32_t x787 = -87;
	int32_t t196 = -10;

    t196 = ((x785*(x786>x787))!=x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x789 = 1;
	int64_t x790 = INT64_MIN;
	uint16_t x792 = UINT16_MAX;
	static int32_t t197 = -1707;

    t197 = ((x789*(x790>x791))!=x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x793 = INT8_MIN;
	volatile int32_t x794 = 7137907;
	int64_t x795 = -876448436LL;
	int64_t x796 = -1LL;
	static int32_t t198 = 709847;

    t198 = ((x793*(x794>x795))!=x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x797 = -24;
	int32_t x799 = INT32_MIN;
	static int64_t x800 = -131681565056LL;
	static int32_t t199 = 41;

    t199 = ((x797*(x798>x799))!=x800);

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


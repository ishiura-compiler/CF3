
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

static int32_t x3 = INT32_MIN;
int32_t t5 = -6035492;
uint32_t x31 = 30U;
int32_t t9 = 629;
int8_t x41 = INT8_MAX;
uint8_t x44 = 6U;
uint64_t x48 = UINT64_MAX;
static volatile int32_t x51 = -1;
uint64_t x53 = UINT64_MAX;
int8_t x54 = INT8_MAX;
int16_t x55 = INT16_MAX;
int32_t t13 = -583;
uint32_t x57 = 4392513U;
int32_t x62 = -251410638;
static uint16_t x63 = UINT16_MAX;
volatile int64_t x64 = INT64_MIN;
static uint8_t x67 = 0U;
int32_t t17 = 164;
volatile int16_t x74 = -6;
int16_t x76 = 226;
static int8_t x78 = -1;
volatile uint16_t x88 = 5U;
int32_t x91 = INT32_MIN;
static volatile int32_t t22 = -1612729;
volatile uint32_t x94 = UINT32_MAX;
volatile int32_t x96 = INT32_MAX;
uint16_t x98 = UINT16_MAX;
int32_t t24 = -24;
int64_t x101 = -18641302838829LL;
int64_t x102 = INT64_MIN;
int8_t x107 = -1;
uint32_t x114 = 0U;
static int32_t x115 = 11;
volatile int8_t x123 = 2;
int64_t x124 = -1LL;
static uint32_t x130 = 29684220U;
int64_t x132 = INT64_MIN;
int32_t t32 = -734;
int64_t x140 = INT64_MAX;
volatile int64_t x143 = -180LL;
volatile int32_t t35 = 1359;
uint16_t x152 = 1U;
static int16_t x153 = INT16_MAX;
uint32_t x156 = UINT32_MAX;
static int64_t x162 = -1LL;
int32_t t41 = 3825;
volatile int64_t x169 = INT64_MIN;
volatile int32_t t42 = -161;
static int64_t x174 = INT64_MAX;
uint64_t x179 = UINT64_MAX;
int32_t t44 = -12659;
int32_t t45 = 0;
int32_t x185 = 148336;
uint32_t x188 = 71698496U;
int32_t x189 = 500110;
int8_t x196 = INT8_MAX;
int64_t x203 = 2072656296707782676LL;
int8_t x207 = -1;
static int32_t t51 = 21044;
int32_t x209 = INT32_MIN;
volatile int16_t x224 = INT16_MIN;
int8_t x231 = 0;
static int16_t x234 = 0;
static int8_t x235 = INT8_MAX;
volatile int32_t t59 = 174633573;
uint64_t x242 = UINT64_MAX;
int32_t x243 = INT32_MAX;
int32_t t60 = 1873;
int64_t x245 = -255424163LL;
int16_t x251 = -1;
static int16_t x252 = INT16_MAX;
int32_t t63 = 792629942;
static volatile uint64_t x275 = 98196989275LLU;
volatile int32_t x287 = INT32_MIN;
volatile int32_t x288 = -2;
uint8_t x290 = 27U;
int16_t x293 = -1;
int32_t t75 = 4;
int32_t x305 = -1;
uint8_t x309 = UINT8_MAX;
int16_t x311 = INT16_MIN;
volatile int32_t x312 = INT32_MIN;
volatile uint8_t x339 = 55U;
static int8_t x340 = INT8_MIN;
volatile int32_t t84 = 1;
int16_t x343 = 93;
uint16_t x349 = 54U;
int16_t x358 = INT16_MIN;
volatile int64_t x359 = INT64_MIN;
volatile int64_t x363 = INT64_MAX;
volatile int64_t x368 = INT64_MIN;
int8_t x370 = INT8_MAX;
volatile uint32_t x374 = UINT32_MAX;
int32_t x375 = -1;
uint64_t x382 = 1373LLU;
int32_t x383 = INT32_MIN;
int8_t x388 = INT8_MIN;
int32_t t99 = -85;
int16_t x407 = INT16_MAX;
uint16_t x408 = UINT16_MAX;
static volatile uint64_t x414 = 627383503021LLU;
int32_t x418 = INT32_MAX;
volatile uint64_t x421 = UINT64_MAX;
volatile uint8_t x422 = 105U;
int32_t x427 = INT32_MIN;
uint32_t x430 = 1330135076U;
int8_t x432 = INT8_MIN;
volatile int32_t t107 = 1145320;
volatile uint32_t x434 = 593U;
static uint16_t x437 = 34U;
int16_t x441 = -1;
int32_t t111 = 847;
volatile int32_t t112 = -31;
int32_t t113 = -841807157;
int16_t x457 = INT16_MIN;
int32_t x460 = INT32_MIN;
static int32_t t115 = 729;
int16_t x465 = -1;
static volatile int16_t x467 = INT16_MIN;
int8_t x469 = 1;
static int64_t x474 = INT64_MIN;
uint8_t x476 = UINT8_MAX;
uint16_t x492 = 182U;
uint32_t x493 = UINT32_MAX;
int32_t x494 = 0;
uint16_t x499 = UINT16_MAX;
int16_t x500 = 1;
volatile uint16_t x510 = 35U;
volatile int32_t t127 = 54746;
uint8_t x514 = 3U;
volatile uint64_t x520 = 0LLU;
int16_t x525 = INT16_MIN;
int32_t x529 = INT32_MAX;
uint32_t x534 = 204474U;
static int32_t x538 = -2;
uint64_t x549 = UINT64_MAX;
uint16_t x551 = 36U;
int64_t x557 = 102999LL;
int8_t x561 = INT8_MIN;
uint8_t x563 = UINT8_MAX;
int32_t t140 = -21615234;
static int16_t x565 = INT16_MAX;
volatile int32_t t141 = -3182534;
uint16_t x576 = UINT16_MAX;
static volatile int32_t x577 = 0;
int64_t x580 = INT64_MIN;
static volatile int16_t x581 = INT16_MIN;
int32_t x586 = 573939162;
volatile uint32_t x591 = UINT32_MAX;
uint8_t x598 = UINT8_MAX;
volatile uint8_t x604 = 7U;
volatile int16_t x609 = INT16_MIN;
int16_t x612 = 1895;
volatile uint64_t x617 = 34280530644363LLU;
volatile int8_t x618 = -18;
int32_t x619 = INT32_MIN;
volatile int32_t x621 = INT32_MIN;
volatile int32_t t155 = -516457292;
int64_t x625 = INT64_MIN;
uint64_t x634 = 4633715631327358577LLU;
uint64_t x644 = 64790594927165276LLU;
int32_t x646 = INT32_MIN;
int16_t x650 = INT16_MAX;
int32_t t162 = 4;
int64_t x654 = 57LL;
int32_t t163 = 89788270;
volatile uint8_t x657 = 27U;
static int32_t x662 = INT32_MAX;
static int16_t x663 = INT16_MAX;
int32_t t165 = 62;
static int32_t x678 = -4475;
uint64_t x688 = 3896927155651LLU;
uint64_t x690 = 29958601854490LLU;
static int32_t t172 = -41;
int8_t x702 = -1;
static uint64_t x703 = UINT64_MAX;
volatile int8_t x704 = -1;
static int32_t x711 = INT32_MAX;
uint16_t x723 = UINT16_MAX;
int64_t x724 = INT64_MIN;
int32_t t181 = -356840;
static uint8_t x733 = UINT8_MAX;
int32_t x734 = INT32_MIN;
uint32_t x739 = UINT32_MAX;
int8_t x744 = 5;
uint32_t x746 = UINT32_MAX;
volatile int32_t t186 = 411990494;
volatile int32_t x750 = -11;
volatile uint64_t x757 = 2476563498527LLU;
int32_t x760 = INT32_MIN;
int32_t x762 = INT32_MAX;
static volatile int32_t t191 = -5607;
int8_t x774 = -1;
static int32_t x776 = -1;
int32_t x779 = INT32_MIN;
volatile int32_t t194 = 14037661;
int64_t x786 = -1LL;
volatile int32_t t196 = -50353794;
volatile int16_t x790 = INT16_MAX;
int32_t t198 = -1;
int32_t x799 = INT32_MIN;


void f0(void) {
    	static int64_t x1 = 8123402557577273LL;
	uint16_t x2 = UINT16_MAX;
	volatile int32_t x4 = INT32_MIN;
	int32_t t0 = -130;

    t0 = ((x1==(x2>x3))<=x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint64_t x5 = 56689314LLU;
	int16_t x6 = INT16_MIN;
	uint64_t x7 = UINT64_MAX;
	uint8_t x8 = 13U;
	static volatile int32_t t1 = -46500;

    t1 = ((x5==(x6>x7))<=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x9 = UINT8_MAX;
	volatile int8_t x10 = -3;
	volatile int16_t x11 = -46;
	volatile uint16_t x12 = UINT16_MAX;
	int32_t t2 = -58;

    t2 = ((x9==(x10>x11))<=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MAX;
	uint16_t x14 = 10U;
	int32_t x15 = INT32_MAX;
	int8_t x16 = 1;
	volatile int32_t t3 = 7091;

    t3 = ((x13==(x14>x15))<=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = 2796U;
	int16_t x18 = INT16_MIN;
	int8_t x19 = 0;
	uint8_t x20 = 27U;
	volatile int32_t t4 = 7691;

    t4 = ((x17==(x18>x19))<=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MIN;
	int64_t x22 = -46LL;
	static int32_t x23 = INT32_MIN;
	uint32_t x24 = 41U;

    t5 = ((x21==(x22>x23))<=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MIN;
	int16_t x26 = -1145;
	int32_t x27 = INT32_MIN;
	int64_t x28 = INT64_MIN;
	volatile int32_t t6 = 250;

    t6 = ((x25==(x26>x27))<=x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint16_t x29 = 24U;
	uint32_t x30 = 3U;
	volatile uint16_t x32 = UINT16_MAX;
	volatile int32_t t7 = 154;

    t7 = ((x29==(x30>x31))<=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = -51;
	int16_t x34 = INT16_MIN;
	uint64_t x35 = 1454993174090LLU;
	static volatile int64_t x36 = 67767397935855229LL;
	volatile int32_t t8 = -1644701;

    t8 = ((x33==(x34>x35))<=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x37 = 1380;
	volatile int32_t x38 = -1;
	static volatile int8_t x39 = INT8_MAX;
	uint16_t x40 = UINT16_MAX;

    t9 = ((x37==(x38>x39))<=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x42 = -7;
	int16_t x43 = -1564;
	volatile int32_t t10 = -29659;

    t10 = ((x41==(x42>x43))<=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = 18070U;
	int16_t x46 = 505;
	int32_t x47 = INT32_MIN;
	static volatile int32_t t11 = -418769;

    t11 = ((x45==(x46>x47))<=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = -1;
	volatile uint32_t x50 = UINT32_MAX;
	volatile int64_t x52 = INT64_MAX;
	int32_t t12 = 4;

    t12 = ((x49==(x50>x51))<=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x56 = UINT32_MAX;

    t13 = ((x53==(x54>x55))<=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x58 = 8155U;
	uint64_t x59 = 5927164929176599LLU;
	int16_t x60 = INT16_MIN;
	int32_t t14 = 2529778;

    t14 = ((x57==(x58>x59))<=x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = -1;
	volatile int32_t t15 = -4;

    t15 = ((x61==(x62>x63))<=x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x65 = 0U;
	int16_t x66 = INT16_MIN;
	static int32_t x68 = -15720;
	volatile int32_t t16 = -3;

    t16 = ((x65==(x66>x67))<=x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x69 = 3945984683LLU;
	uint64_t x70 = 172417628LLU;
	int16_t x71 = INT16_MAX;
	static volatile int32_t x72 = -2310;

    t17 = ((x69==(x70>x71))<=x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = -24;
	static int64_t x75 = INT64_MAX;
	volatile int32_t t18 = 118361;

    t18 = ((x73==(x74>x75))<=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x77 = -1;
	int64_t x79 = -10213454869441LL;
	int64_t x80 = -2283816226LL;
	volatile int32_t t19 = -307;

    t19 = ((x77==(x78>x79))<=x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = -214939205;
	int64_t x82 = INT64_MAX;
	volatile int8_t x83 = -1;
	int64_t x84 = INT64_MAX;
	int32_t t20 = -37;

    t20 = ((x81==(x82>x83))<=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = 3876;
	uint64_t x86 = 3489885997LLU;
	static uint32_t x87 = 395U;
	volatile int32_t t21 = 3;

    t21 = ((x85==(x86>x87))<=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = -1;
	volatile int16_t x90 = INT16_MAX;
	volatile uint32_t x92 = 197645U;

    t22 = ((x89==(x90>x91))<=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint32_t x93 = UINT32_MAX;
	int16_t x95 = INT16_MAX;
	volatile int32_t t23 = -404;

    t23 = ((x93==(x94>x95))<=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x97 = 9604U;
	volatile int64_t x99 = -1661LL;
	int32_t x100 = -1;

    t24 = ((x97==(x98>x99))<=x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x103 = INT64_MAX;
	int64_t x104 = -305084949LL;
	int32_t t25 = 251437282;

    t25 = ((x101==(x102>x103))<=x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x105 = UINT32_MAX;
	int16_t x106 = INT16_MIN;
	int8_t x108 = 53;
	int32_t t26 = 177;

    t26 = ((x105==(x106>x107))<=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x109 = INT16_MIN;
	uint16_t x110 = UINT16_MAX;
	volatile uint8_t x111 = 6U;
	int16_t x112 = INT16_MIN;
	volatile int32_t t27 = 10783;

    t27 = ((x109==(x110>x111))<=x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x113 = UINT64_MAX;
	int16_t x116 = -16302;
	volatile int32_t t28 = -127081619;

    t28 = ((x113==(x114>x115))<=x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = INT16_MAX;
	static uint64_t x118 = 105343026LLU;
	int16_t x119 = INT16_MAX;
	int16_t x120 = -404;
	static volatile int32_t t29 = -434979;

    t29 = ((x117==(x118>x119))<=x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = INT16_MIN;
	static volatile uint64_t x122 = 1087948LLU;
	volatile int32_t t30 = 8650074;

    t30 = ((x121==(x122>x123))<=x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x125 = INT8_MIN;
	int16_t x126 = -1;
	int8_t x127 = -1;
	uint64_t x128 = 747868814515978LLU;
	volatile int32_t t31 = 702;

    t31 = ((x125==(x126>x127))<=x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x129 = UINT16_MAX;
	static volatile int16_t x131 = INT16_MAX;

    t32 = ((x129==(x130>x131))<=x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = INT8_MAX;
	static int32_t x134 = -1;
	static volatile int16_t x135 = INT16_MAX;
	int8_t x136 = -1;
	static int32_t t33 = 0;

    t33 = ((x133==(x134>x135))<=x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = -226;
	uint64_t x138 = UINT64_MAX;
	volatile uint16_t x139 = UINT16_MAX;
	static int32_t t34 = -4229;

    t34 = ((x137==(x138>x139))<=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x141 = INT8_MIN;
	int8_t x142 = INT8_MIN;
	volatile int16_t x144 = -18;

    t35 = ((x141==(x142>x143))<=x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = INT32_MAX;
	static int32_t x146 = INT32_MIN;
	static int8_t x147 = 1;
	uint64_t x148 = 8639029091998LLU;
	volatile int32_t t36 = -18;

    t36 = ((x145==(x146>x147))<=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint8_t x149 = 4U;
	volatile int32_t x150 = -1;
	static int8_t x151 = -1;
	static int32_t t37 = 9;

    t37 = ((x149==(x150>x151))<=x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x154 = INT64_MIN;
	int8_t x155 = 49;
	int32_t t38 = -6634;

    t38 = ((x153==(x154>x155))<=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = INT16_MIN;
	static int32_t x158 = INT32_MAX;
	static int32_t x159 = INT32_MIN;
	int8_t x160 = -1;
	static volatile int32_t t39 = -10;

    t39 = ((x157==(x158>x159))<=x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = INT32_MIN;
	static int16_t x163 = INT16_MIN;
	int32_t x164 = -1;
	volatile int32_t t40 = 244;

    t40 = ((x161==(x162>x163))<=x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint64_t x165 = 19746216023LLU;
	uint64_t x166 = UINT64_MAX;
	static int32_t x167 = 40582;
	int64_t x168 = INT64_MIN;

    t41 = ((x165==(x166>x167))<=x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x170 = -1;
	uint64_t x171 = UINT64_MAX;
	static volatile int32_t x172 = -19;

    t42 = ((x169==(x170>x171))<=x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = -1;
	int32_t x175 = INT32_MIN;
	static int16_t x176 = INT16_MIN;
	volatile int32_t t43 = -152320068;

    t43 = ((x173==(x174>x175))<=x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = -1;
	uint16_t x178 = 3374U;
	int8_t x180 = -1;

    t44 = ((x177==(x178>x179))<=x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x181 = INT64_MAX;
	uint64_t x182 = 6691487937LLU;
	int32_t x183 = -1;
	int64_t x184 = INT64_MIN;

    t45 = ((x181==(x182>x183))<=x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint8_t x186 = UINT8_MAX;
	uint32_t x187 = 828451337U;
	int32_t t46 = -1;

    t46 = ((x185==(x186>x187))<=x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x190 = 1;
	static int64_t x191 = 1LL;
	static uint8_t x192 = 34U;
	volatile int32_t t47 = 0;

    t47 = ((x189==(x190>x191))<=x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x193 = 51152;
	int8_t x194 = -1;
	int64_t x195 = -1LL;
	int32_t t48 = 230739236;

    t48 = ((x193==(x194>x195))<=x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint32_t x197 = UINT32_MAX;
	int8_t x198 = -1;
	uint64_t x199 = 4749581354LLU;
	int16_t x200 = INT16_MIN;
	volatile int32_t t49 = -82283073;

    t49 = ((x197==(x198>x199))<=x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x201 = -31397105;
	uint32_t x202 = 449U;
	volatile int16_t x204 = INT16_MIN;
	static int32_t t50 = 2087795;

    t50 = ((x201==(x202>x203))<=x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = -3721;
	uint64_t x206 = UINT64_MAX;
	int16_t x208 = INT16_MAX;

    t51 = ((x205==(x206>x207))<=x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x210 = 47048;
	static uint32_t x211 = 167562U;
	static int32_t x212 = -36549;
	int32_t t52 = 0;

    t52 = ((x209==(x210>x211))<=x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = INT32_MIN;
	int16_t x214 = -1;
	int16_t x215 = -31;
	uint16_t x216 = 6277U;
	static volatile int32_t t53 = -4707159;

    t53 = ((x213==(x214>x215))<=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = INT32_MAX;
	static uint8_t x218 = 40U;
	uint64_t x219 = 141257287243313710LLU;
	int8_t x220 = -1;
	int32_t t54 = -63;

    t54 = ((x217==(x218>x219))<=x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x221 = 319;
	static int32_t x222 = 1248826;
	volatile int16_t x223 = INT16_MIN;
	int32_t t55 = -23254376;

    t55 = ((x221==(x222>x223))<=x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x225 = UINT8_MAX;
	static int32_t x226 = 1031329;
	int8_t x227 = -24;
	static uint32_t x228 = 15603U;
	static int32_t t56 = -3;

    t56 = ((x225==(x226>x227))<=x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x229 = 14810LLU;
	int32_t x230 = -7;
	int64_t x232 = INT64_MIN;
	volatile int32_t t57 = -30;

    t57 = ((x229==(x230>x231))<=x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = INT8_MIN;
	int32_t x236 = -1;
	int32_t t58 = -11700;

    t58 = ((x233==(x234>x235))<=x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = 235722638LL;
	static int16_t x238 = 4567;
	uint16_t x239 = 9795U;
	uint16_t x240 = 1U;

    t59 = ((x237==(x238>x239))<=x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint8_t x241 = 0U;
	static uint8_t x244 = 51U;

    t60 = ((x241==(x242>x243))<=x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x246 = INT16_MIN;
	int32_t x247 = INT32_MIN;
	int16_t x248 = INT16_MAX;
	volatile int32_t t61 = 1;

    t61 = ((x245==(x246>x247))<=x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile uint32_t x249 = UINT32_MAX;
	uint16_t x250 = 1137U;
	static int32_t t62 = -54;

    t62 = ((x249==(x250>x251))<=x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = INT64_MIN;
	uint16_t x254 = 1034U;
	int64_t x255 = -1LL;
	uint16_t x256 = 28U;

    t63 = ((x253==(x254>x255))<=x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x257 = 63492LL;
	uint16_t x258 = 0U;
	uint16_t x259 = 2U;
	static int32_t x260 = INT32_MIN;
	volatile int32_t t64 = -15;

    t64 = ((x257==(x258>x259))<=x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x261 = 1U;
	uint64_t x262 = UINT64_MAX;
	volatile int8_t x263 = 51;
	int64_t x264 = INT64_MAX;
	static volatile int32_t t65 = 29231;

    t65 = ((x261==(x262>x263))<=x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x265 = 210091188LL;
	uint16_t x266 = UINT16_MAX;
	int64_t x267 = -54202LL;
	uint8_t x268 = UINT8_MAX;
	static int32_t t66 = 1007420498;

    t66 = ((x265==(x266>x267))<=x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x269 = UINT32_MAX;
	static int8_t x270 = 27;
	volatile int32_t x271 = -1;
	int16_t x272 = INT16_MAX;
	static int32_t t67 = 29091826;

    t67 = ((x269==(x270>x271))<=x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = INT16_MIN;
	int64_t x274 = INT64_MIN;
	int32_t x276 = 12;
	volatile int32_t t68 = -570526826;

    t68 = ((x273==(x274>x275))<=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = -1;
	volatile int32_t x278 = -69424409;
	uint16_t x279 = 111U;
	uint64_t x280 = UINT64_MAX;
	static volatile int32_t t69 = 75;

    t69 = ((x277==(x278>x279))<=x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint16_t x281 = 200U;
	volatile int32_t x282 = 163517139;
	uint8_t x283 = 11U;
	uint8_t x284 = 0U;
	volatile int32_t t70 = -13744;

    t70 = ((x281==(x282>x283))<=x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x285 = INT32_MIN;
	int32_t x286 = INT32_MIN;
	static int32_t t71 = 30071296;

    t71 = ((x285==(x286>x287))<=x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = -19;
	static uint8_t x291 = UINT8_MAX;
	volatile int16_t x292 = INT16_MIN;
	volatile int32_t t72 = -1;

    t72 = ((x289==(x290>x291))<=x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint32_t x294 = UINT32_MAX;
	int64_t x295 = -60373956118LL;
	int64_t x296 = INT64_MAX;
	volatile int32_t t73 = 416260;

    t73 = ((x293==(x294>x295))<=x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x297 = 30U;
	static int16_t x298 = 9;
	int16_t x299 = -1;
	uint8_t x300 = UINT8_MAX;
	static int32_t t74 = 48691;

    t74 = ((x297==(x298>x299))<=x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint8_t x301 = 8U;
	int32_t x302 = -16383436;
	static int64_t x303 = INT64_MAX;
	volatile int32_t x304 = -1;

    t75 = ((x301==(x302>x303))<=x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x306 = INT64_MAX;
	uint8_t x307 = UINT8_MAX;
	int64_t x308 = -1LL;
	int32_t t76 = 1;

    t76 = ((x305==(x306>x307))<=x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x310 = -62;
	volatile int32_t t77 = 228732147;

    t77 = ((x309==(x310>x311))<=x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x313 = 7986U;
	static int16_t x314 = INT16_MIN;
	int32_t x315 = INT32_MIN;
	int8_t x316 = 54;
	volatile int32_t t78 = -981;

    t78 = ((x313==(x314>x315))<=x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x317 = INT32_MIN;
	uint8_t x318 = 102U;
	int64_t x319 = -1LL;
	volatile int8_t x320 = -1;
	volatile int32_t t79 = -19666;

    t79 = ((x317==(x318>x319))<=x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x321 = -1;
	uint8_t x322 = UINT8_MAX;
	volatile uint8_t x323 = 26U;
	static uint64_t x324 = 677171121LLU;
	int32_t t80 = -1;

    t80 = ((x321==(x322>x323))<=x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint64_t x325 = 126228952864581299LLU;
	int16_t x326 = -55;
	int64_t x327 = INT64_MIN;
	volatile int64_t x328 = INT64_MIN;
	volatile int32_t t81 = -645226;

    t81 = ((x325==(x326>x327))<=x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = -158113447LL;
	int32_t x330 = -1;
	static int8_t x331 = INT8_MIN;
	static int8_t x332 = 24;
	volatile int32_t t82 = 209;

    t82 = ((x329==(x330>x331))<=x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x333 = -1;
	int64_t x334 = INT64_MIN;
	uint32_t x335 = 5421501U;
	int8_t x336 = INT8_MAX;
	volatile int32_t t83 = 6;

    t83 = ((x333==(x334>x335))<=x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x337 = -1;
	uint32_t x338 = 9U;

    t84 = ((x337==(x338>x339))<=x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x341 = 5U;
	int64_t x342 = INT64_MIN;
	uint32_t x344 = 4899457U;
	volatile int32_t t85 = -254;

    t85 = ((x341==(x342>x343))<=x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x345 = INT64_MIN;
	uint8_t x346 = UINT8_MAX;
	uint8_t x347 = UINT8_MAX;
	int32_t x348 = -1;
	volatile int32_t t86 = -21286843;

    t86 = ((x345==(x346>x347))<=x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x350 = INT64_MAX;
	uint32_t x351 = UINT32_MAX;
	volatile int64_t x352 = -1055777913279318280LL;
	static int32_t t87 = -107964400;

    t87 = ((x349==(x350>x351))<=x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x353 = INT8_MIN;
	static volatile int32_t x354 = -1;
	int16_t x355 = INT16_MIN;
	uint64_t x356 = UINT64_MAX;
	volatile int32_t t88 = 93186;

    t88 = ((x353==(x354>x355))<=x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x357 = INT8_MIN;
	volatile uint64_t x360 = 0LLU;
	static int32_t t89 = -1;

    t89 = ((x357==(x358>x359))<=x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x361 = INT32_MIN;
	int8_t x362 = -1;
	static int16_t x364 = INT16_MIN;
	int32_t t90 = 4753754;

    t90 = ((x361==(x362>x363))<=x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x365 = -1;
	uint16_t x366 = 11U;
	static volatile int16_t x367 = -26;
	int32_t t91 = -5900;

    t91 = ((x365==(x366>x367))<=x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = INT64_MIN;
	int32_t x371 = -1;
	int16_t x372 = INT16_MIN;
	static volatile int32_t t92 = -440;

    t92 = ((x369==(x370>x371))<=x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x373 = UINT8_MAX;
	int32_t x376 = INT32_MIN;
	int32_t t93 = 4652643;

    t93 = ((x373==(x374>x375))<=x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint8_t x377 = UINT8_MAX;
	int32_t x378 = INT32_MAX;
	int16_t x379 = -1;
	int64_t x380 = -69874831007973LL;
	int32_t t94 = -10;

    t94 = ((x377==(x378>x379))<=x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x381 = -1LL;
	uint32_t x384 = UINT32_MAX;
	static int32_t t95 = 3;

    t95 = ((x381==(x382>x383))<=x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint8_t x385 = 5U;
	int64_t x386 = INT64_MIN;
	int64_t x387 = -6951436746LL;
	volatile int32_t t96 = 67912568;

    t96 = ((x385==(x386>x387))<=x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = INT32_MIN;
	int8_t x390 = -1;
	int16_t x391 = -4731;
	volatile int8_t x392 = INT8_MAX;
	volatile int32_t t97 = -3817;

    t97 = ((x389==(x390>x391))<=x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x393 = UINT32_MAX;
	int16_t x394 = -1;
	volatile uint16_t x395 = UINT16_MAX;
	int64_t x396 = INT64_MIN;
	int32_t t98 = 256341934;

    t98 = ((x393==(x394>x395))<=x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x397 = INT32_MIN;
	volatile int8_t x398 = -19;
	volatile uint8_t x399 = 4U;
	static uint16_t x400 = 4032U;

    t99 = ((x397==(x398>x399))<=x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = INT16_MIN;
	static volatile int16_t x402 = 63;
	uint8_t x403 = 3U;
	static volatile int8_t x404 = 54;
	static volatile int32_t t100 = 818;

    t100 = ((x401==(x402>x403))<=x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x405 = 104U;
	volatile int8_t x406 = INT8_MAX;
	static volatile int32_t t101 = 56;

    t101 = ((x405==(x406>x407))<=x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x409 = -1;
	static uint16_t x410 = 4U;
	int64_t x411 = INT64_MAX;
	static int64_t x412 = INT64_MAX;
	int32_t t102 = -51557;

    t102 = ((x409==(x410>x411))<=x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = INT32_MIN;
	int8_t x415 = 1;
	int32_t x416 = INT32_MIN;
	volatile int32_t t103 = -218;

    t103 = ((x413==(x414>x415))<=x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = -36;
	static int32_t x419 = INT32_MIN;
	int64_t x420 = 5843802LL;
	int32_t t104 = -1;

    t104 = ((x417==(x418>x419))<=x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x423 = -1;
	uint8_t x424 = UINT8_MAX;
	int32_t t105 = -1049;

    t105 = ((x421==(x422>x423))<=x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x425 = 0;
	static volatile int16_t x426 = -1;
	volatile int16_t x428 = INT16_MIN;
	int32_t t106 = 1;

    t106 = ((x425==(x426>x427))<=x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = INT16_MIN;
	uint64_t x431 = 1795LLU;

    t107 = ((x429==(x430>x431))<=x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = 476;
	volatile int32_t x435 = 386741;
	static int16_t x436 = -1;
	volatile int32_t t108 = 159789943;

    t108 = ((x433==(x434>x435))<=x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x438 = INT8_MIN;
	int16_t x439 = -1;
	int16_t x440 = 4271;
	volatile int32_t t109 = -16;

    t109 = ((x437==(x438>x439))<=x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x442 = UINT8_MAX;
	static volatile uint8_t x443 = 15U;
	int64_t x444 = INT64_MAX;
	int32_t t110 = 562;

    t110 = ((x441==(x442>x443))<=x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x445 = 6772U;
	int16_t x446 = INT16_MIN;
	volatile int32_t x447 = -1;
	int16_t x448 = -1;

    t111 = ((x445==(x446>x447))<=x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x449 = -1LL;
	int16_t x450 = -1;
	int32_t x451 = INT32_MIN;
	int32_t x452 = INT32_MIN;

    t112 = ((x449==(x450>x451))<=x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x453 = 182;
	static volatile uint64_t x454 = UINT64_MAX;
	uint16_t x455 = 225U;
	int16_t x456 = INT16_MIN;

    t113 = ((x453==(x454>x455))<=x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x458 = INT64_MAX;
	volatile uint16_t x459 = UINT16_MAX;
	int32_t t114 = -14;

    t114 = ((x457==(x458>x459))<=x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x461 = INT8_MIN;
	volatile uint16_t x462 = UINT16_MAX;
	int64_t x463 = INT64_MAX;
	int16_t x464 = INT16_MIN;

    t115 = ((x461==(x462>x463))<=x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x466 = INT32_MIN;
	static uint8_t x468 = 4U;
	int32_t t116 = 24766;

    t116 = ((x465==(x466>x467))<=x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint16_t x470 = UINT16_MAX;
	int16_t x471 = -25;
	uint64_t x472 = UINT64_MAX;
	int32_t t117 = -6997;

    t117 = ((x469==(x470>x471))<=x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x473 = INT32_MIN;
	volatile uint8_t x475 = 52U;
	volatile int32_t t118 = 159;

    t118 = ((x473==(x474>x475))<=x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x477 = 55240;
	volatile int32_t x478 = INT32_MAX;
	static int16_t x479 = -1;
	uint16_t x480 = 15U;
	static int32_t t119 = -1768496;

    t119 = ((x477==(x478>x479))<=x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint64_t x481 = 3116910LLU;
	int32_t x482 = 107;
	uint64_t x483 = UINT64_MAX;
	int32_t x484 = INT32_MIN;
	static volatile int32_t t120 = -105653499;

    t120 = ((x481==(x482>x483))<=x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = -1;
	int16_t x486 = 2;
	int64_t x487 = INT64_MIN;
	static uint16_t x488 = 63U;
	static int32_t t121 = -931870;

    t121 = ((x485==(x486>x487))<=x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = 75LL;
	volatile int8_t x490 = 16;
	volatile int8_t x491 = INT8_MIN;
	volatile int32_t t122 = 2462;

    t122 = ((x489==(x490>x491))<=x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int64_t x495 = -1LL;
	uint64_t x496 = 31270432LLU;
	int32_t t123 = -1;

    t123 = ((x493==(x494>x495))<=x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x497 = -1;
	static int8_t x498 = -2;
	volatile int32_t t124 = 4;

    t124 = ((x497==(x498>x499))<=x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x501 = 1;
	int16_t x502 = INT16_MIN;
	static volatile int16_t x503 = INT16_MAX;
	uint8_t x504 = UINT8_MAX;
	int32_t t125 = 69;

    t125 = ((x501==(x502>x503))<=x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x505 = UINT16_MAX;
	int32_t x506 = -233353;
	int64_t x507 = -1LL;
	int8_t x508 = INT8_MIN;
	volatile int32_t t126 = 8013;

    t126 = ((x505==(x506>x507))<=x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x509 = INT16_MIN;
	volatile int32_t x511 = INT32_MIN;
	int32_t x512 = INT32_MIN;

    t127 = ((x509==(x510>x511))<=x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = 20;
	volatile uint8_t x515 = 62U;
	uint16_t x516 = 125U;
	static int32_t t128 = 126077457;

    t128 = ((x513==(x514>x515))<=x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = -1;
	static uint16_t x518 = 452U;
	uint32_t x519 = 588881U;
	int32_t t129 = -1;

    t129 = ((x517==(x518>x519))<=x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x521 = -1;
	volatile int64_t x522 = 638LL;
	int8_t x523 = -1;
	uint8_t x524 = UINT8_MAX;
	volatile int32_t t130 = 11;

    t130 = ((x521==(x522>x523))<=x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x526 = 8;
	uint32_t x527 = UINT32_MAX;
	uint32_t x528 = UINT32_MAX;
	int32_t t131 = -6267;

    t131 = ((x525==(x526>x527))<=x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x530 = INT64_MAX;
	static uint64_t x531 = 88662198LLU;
	uint64_t x532 = 1181518853858LLU;
	volatile int32_t t132 = 1983357;

    t132 = ((x529==(x530>x531))<=x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint16_t x533 = 30U;
	uint16_t x535 = 687U;
	int16_t x536 = INT16_MIN;
	volatile int32_t t133 = 188;

    t133 = ((x533==(x534>x535))<=x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x537 = UINT8_MAX;
	volatile int32_t x539 = -1;
	int64_t x540 = INT64_MIN;
	static volatile int32_t t134 = 2;

    t134 = ((x537==(x538>x539))<=x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x541 = 31190U;
	volatile int16_t x542 = INT16_MIN;
	volatile int16_t x543 = 8;
	static int32_t x544 = 31;
	volatile int32_t t135 = -245286886;

    t135 = ((x541==(x542>x543))<=x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = -1;
	uint64_t x546 = UINT64_MAX;
	int64_t x547 = -52858755LL;
	int64_t x548 = -1LL;
	int32_t t136 = -1;

    t136 = ((x545==(x546>x547))<=x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int16_t x550 = -1;
	volatile int16_t x552 = -4037;
	int32_t t137 = -4;

    t137 = ((x549==(x550>x551))<=x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = 142;
	uint16_t x554 = UINT16_MAX;
	int16_t x555 = INT16_MAX;
	int8_t x556 = -1;
	int32_t t138 = 10;

    t138 = ((x553==(x554>x555))<=x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x558 = 0;
	static int16_t x559 = INT16_MIN;
	int16_t x560 = INT16_MIN;
	int32_t t139 = 2667875;

    t139 = ((x557==(x558>x559))<=x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x562 = UINT32_MAX;
	static int32_t x564 = -3379365;

    t140 = ((x561==(x562>x563))<=x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x566 = -15;
	static int64_t x567 = -1LL;
	static int64_t x568 = INT64_MIN;

    t141 = ((x565==(x566>x567))<=x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x569 = -214634602;
	static uint8_t x570 = UINT8_MAX;
	int16_t x571 = 56;
	uint32_t x572 = 4193565U;
	int32_t t142 = -684;

    t142 = ((x569==(x570>x571))<=x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x573 = 1742802602U;
	uint64_t x574 = 28628869556911326LLU;
	int8_t x575 = -1;
	volatile int32_t t143 = 227141311;

    t143 = ((x573==(x574>x575))<=x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x578 = INT32_MIN;
	int8_t x579 = 0;
	int32_t t144 = 234334570;

    t144 = ((x577==(x578>x579))<=x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x582 = INT8_MAX;
	int32_t x583 = 3177657;
	uint32_t x584 = 15363834U;
	int32_t t145 = -3677483;

    t145 = ((x581==(x582>x583))<=x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = INT8_MAX;
	uint8_t x587 = UINT8_MAX;
	static uint16_t x588 = UINT16_MAX;
	static volatile int32_t t146 = 65618576;

    t146 = ((x585==(x586>x587))<=x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = -1;
	volatile uint16_t x590 = 4U;
	int16_t x592 = INT16_MAX;
	volatile int32_t t147 = 119627;

    t147 = ((x589==(x590>x591))<=x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint16_t x593 = 0U;
	uint16_t x594 = 1928U;
	static int32_t x595 = INT32_MIN;
	uint32_t x596 = UINT32_MAX;
	int32_t t148 = -489044;

    t148 = ((x593==(x594>x595))<=x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int32_t x597 = -7794825;
	volatile int32_t x599 = -223;
	static int16_t x600 = -1;
	volatile int32_t t149 = -772709253;

    t149 = ((x597==(x598>x599))<=x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x601 = INT16_MAX;
	volatile int64_t x602 = -1LL;
	uint32_t x603 = 1314U;
	int32_t t150 = 524042;

    t150 = ((x601==(x602>x603))<=x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x605 = 54370357127852LLU;
	int64_t x606 = INT64_MIN;
	volatile int64_t x607 = INT64_MIN;
	static uint64_t x608 = 305454LLU;
	int32_t t151 = 1;

    t151 = ((x605==(x606>x607))<=x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint8_t x610 = UINT8_MAX;
	int8_t x611 = INT8_MIN;
	static int32_t t152 = -28495;

    t152 = ((x609==(x610>x611))<=x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = -1;
	int8_t x614 = INT8_MIN;
	int32_t x615 = -1;
	static int64_t x616 = INT64_MIN;
	int32_t t153 = -71442901;

    t153 = ((x613==(x614>x615))<=x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x620 = 821;
	volatile int32_t t154 = -30591171;

    t154 = ((x617==(x618>x619))<=x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x622 = 156470996896994LLU;
	int16_t x623 = -1;
	static uint16_t x624 = 35U;

    t155 = ((x621==(x622>x623))<=x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x626 = -1LL;
	int64_t x627 = -2841152755655230710LL;
	volatile int16_t x628 = 2;
	volatile int32_t t156 = 260149575;

    t156 = ((x625==(x626>x627))<=x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x629 = 4637658599586LLU;
	static int32_t x630 = 3032;
	volatile uint64_t x631 = 1435637LLU;
	int16_t x632 = 12154;
	int32_t t157 = -11905;

    t157 = ((x629==(x630>x631))<=x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = -1;
	static int32_t x635 = INT32_MAX;
	int64_t x636 = INT64_MAX;
	volatile int32_t t158 = 0;

    t158 = ((x633==(x634>x635))<=x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint8_t x637 = UINT8_MAX;
	uint8_t x638 = 0U;
	int8_t x639 = -1;
	uint8_t x640 = UINT8_MAX;
	volatile int32_t t159 = -821940;

    t159 = ((x637==(x638>x639))<=x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = INT64_MAX;
	int16_t x642 = -1;
	uint64_t x643 = 134LLU;
	int32_t t160 = 55696997;

    t160 = ((x641==(x642>x643))<=x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x645 = 0U;
	int64_t x647 = -118557470855LL;
	int64_t x648 = 0LL;
	volatile int32_t t161 = 3644545;

    t161 = ((x645==(x646>x647))<=x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = 1347234194LL;
	static uint64_t x651 = 31447477656023LLU;
	int16_t x652 = INT16_MAX;

    t162 = ((x649==(x650>x651))<=x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x653 = 22635301U;
	uint8_t x655 = 1U;
	uint16_t x656 = 4U;

    t163 = ((x653==(x654>x655))<=x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x658 = INT64_MAX;
	volatile uint64_t x659 = UINT64_MAX;
	volatile int64_t x660 = INT64_MIN;
	volatile int32_t t164 = 239253;

    t164 = ((x657==(x658>x659))<=x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = 0;
	uint64_t x664 = UINT64_MAX;

    t165 = ((x661==(x662>x663))<=x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int32_t x665 = INT32_MAX;
	static volatile int32_t x666 = -765171498;
	volatile uint64_t x667 = 160LLU;
	uint16_t x668 = 12351U;
	volatile int32_t t166 = -920948;

    t166 = ((x665==(x666>x667))<=x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = INT16_MIN;
	uint8_t x670 = UINT8_MAX;
	int8_t x671 = 8;
	int16_t x672 = -61;
	volatile int32_t t167 = -1;

    t167 = ((x669==(x670>x671))<=x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = -1;
	volatile int64_t x674 = INT64_MAX;
	volatile uint64_t x675 = UINT64_MAX;
	volatile int32_t x676 = INT32_MAX;
	int32_t t168 = 1;

    t168 = ((x673==(x674>x675))<=x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = 455471266;
	static uint64_t x679 = 27577569088204781LLU;
	int32_t x680 = INT32_MIN;
	int32_t t169 = 3345894;

    t169 = ((x677==(x678>x679))<=x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = -1;
	static int64_t x682 = -1LL;
	static int32_t x683 = 0;
	int8_t x684 = INT8_MAX;
	int32_t t170 = -2560454;

    t170 = ((x681==(x682>x683))<=x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x685 = 115833454628191LL;
	static volatile int32_t x686 = -1;
	uint8_t x687 = 4U;
	static volatile int32_t t171 = -335035289;

    t171 = ((x685==(x686>x687))<=x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = INT32_MIN;
	int32_t x691 = -1;
	static uint8_t x692 = UINT8_MAX;

    t172 = ((x689==(x690>x691))<=x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x693 = -4996016676038719LL;
	volatile int8_t x694 = -1;
	static uint8_t x695 = UINT8_MAX;
	int32_t x696 = -1;
	int32_t t173 = 838043;

    t173 = ((x693==(x694>x695))<=x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x697 = INT64_MAX;
	int16_t x698 = INT16_MIN;
	int64_t x699 = INT64_MIN;
	int64_t x700 = INT64_MIN;
	volatile int32_t t174 = 0;

    t174 = ((x697==(x698>x699))<=x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x701 = UINT8_MAX;
	static int32_t t175 = 26220992;

    t175 = ((x701==(x702>x703))<=x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x705 = -1LL;
	static int8_t x706 = INT8_MIN;
	int16_t x707 = -1;
	uint32_t x708 = 30996U;
	int32_t t176 = 1066;

    t176 = ((x705==(x706>x707))<=x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int64_t x709 = INT64_MIN;
	int64_t x710 = INT64_MIN;
	static int32_t x712 = 1;
	volatile int32_t t177 = -99997745;

    t177 = ((x709==(x710>x711))<=x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = -11;
	static int16_t x714 = 887;
	uint64_t x715 = 1004439077794LLU;
	volatile uint8_t x716 = 41U;
	int32_t t178 = 8214747;

    t178 = ((x713==(x714>x715))<=x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = INT32_MAX;
	int8_t x718 = INT8_MAX;
	uint16_t x719 = 1059U;
	uint8_t x720 = 2U;
	int32_t t179 = -1;

    t179 = ((x717==(x718>x719))<=x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = -112;
	int16_t x722 = -1;
	int32_t t180 = -6197127;

    t180 = ((x721==(x722>x723))<=x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int8_t x725 = -28;
	static volatile int32_t x726 = 0;
	static int8_t x727 = INT8_MIN;
	int32_t x728 = INT32_MAX;

    t181 = ((x725==(x726>x727))<=x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x729 = 267829LLU;
	volatile int64_t x730 = -1LL;
	static int8_t x731 = INT8_MIN;
	uint16_t x732 = UINT16_MAX;
	volatile int32_t t182 = 307935174;

    t182 = ((x729==(x730>x731))<=x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x735 = 15350U;
	static int32_t x736 = -1;
	int32_t t183 = 2;

    t183 = ((x733==(x734>x735))<=x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x737 = 192607125296LLU;
	volatile int64_t x738 = INT64_MIN;
	int16_t x740 = -1;
	int32_t t184 = 33791;

    t184 = ((x737==(x738>x739))<=x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x741 = -1;
	int16_t x742 = INT16_MAX;
	volatile uint16_t x743 = 448U;
	volatile int32_t t185 = 0;

    t185 = ((x741==(x742>x743))<=x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x745 = INT32_MIN;
	int16_t x747 = -1;
	volatile int8_t x748 = INT8_MAX;

    t186 = ((x745==(x746>x747))<=x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int64_t x749 = INT64_MIN;
	static volatile int8_t x751 = 5;
	uint32_t x752 = UINT32_MAX;
	int32_t t187 = -8774084;

    t187 = ((x749==(x750>x751))<=x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x753 = 32656196244588638LLU;
	uint64_t x754 = 6803391LLU;
	int64_t x755 = -1LL;
	int16_t x756 = -1;
	int32_t t188 = -7;

    t188 = ((x753==(x754>x755))<=x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x758 = UINT32_MAX;
	uint16_t x759 = 11610U;
	int32_t t189 = 36;

    t189 = ((x757==(x758>x759))<=x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x761 = -1;
	int64_t x763 = INT64_MIN;
	uint64_t x764 = 8LLU;
	volatile int32_t t190 = 30524274;

    t190 = ((x761==(x762>x763))<=x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x765 = 397U;
	int16_t x766 = -680;
	uint32_t x767 = UINT32_MAX;
	static int16_t x768 = 0;

    t191 = ((x765==(x766>x767))<=x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x769 = 18352395U;
	uint16_t x770 = UINT16_MAX;
	uint16_t x771 = 42U;
	int64_t x772 = -2LL;
	int32_t t192 = -1799042;

    t192 = ((x769==(x770>x771))<=x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x773 = INT64_MAX;
	int8_t x775 = INT8_MAX;
	volatile int32_t t193 = 61;

    t193 = ((x773==(x774>x775))<=x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = INT8_MIN;
	static volatile int8_t x778 = 14;
	uint16_t x780 = 39U;

    t194 = ((x777==(x778>x779))<=x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint32_t x781 = UINT32_MAX;
	int16_t x782 = 65;
	static volatile int64_t x783 = INT64_MIN;
	int16_t x784 = INT16_MIN;
	int32_t t195 = -5664;

    t195 = ((x781==(x782>x783))<=x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = INT16_MIN;
	volatile int16_t x787 = -1;
	int64_t x788 = -1LL;

    t196 = ((x785==(x786>x787))<=x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x789 = INT64_MIN;
	int64_t x791 = INT64_MIN;
	int64_t x792 = INT64_MIN;
	int32_t t197 = -332233358;

    t197 = ((x789==(x790>x791))<=x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x793 = -1;
	uint32_t x794 = 25100U;
	uint8_t x795 = 15U;
	int32_t x796 = INT32_MAX;

    t198 = ((x793==(x794>x795))<=x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x797 = INT16_MIN;
	int16_t x798 = -2591;
	int16_t x800 = 6;
	volatile int32_t t199 = -820273;

    t199 = ((x797==(x798>x799))<=x800);

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


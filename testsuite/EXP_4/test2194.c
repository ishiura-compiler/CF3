
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

static int16_t x3 = 5;
volatile uint64_t x10 = UINT64_MAX;
int8_t x12 = -1;
uint8_t x15 = UINT8_MAX;
volatile int32_t t2 = -3074;
int8_t x19 = -1;
int32_t x20 = INT32_MAX;
int32_t x31 = INT32_MIN;
static uint8_t x33 = 2U;
int16_t x34 = -1;
volatile int8_t x41 = INT8_MIN;
int16_t x50 = -1;
int32_t x58 = INT32_MIN;
volatile int32_t t9 = -132330320;
static volatile int32_t x76 = INT32_MIN;
static int32_t t13 = 570;
static volatile int16_t x79 = INT16_MAX;
int32_t x86 = INT32_MAX;
uint16_t x87 = UINT16_MAX;
int32_t x89 = 67776;
uint64_t x97 = UINT64_MAX;
static int32_t t19 = 94379892;
int64_t x104 = INT64_MAX;
int32_t t22 = 4741842;
int32_t x113 = INT32_MAX;
int16_t x116 = INT16_MAX;
static int16_t x117 = 1;
int8_t x122 = -1;
volatile int32_t x130 = 21;
int8_t x135 = INT8_MAX;
static int8_t x140 = INT8_MIN;
volatile int32_t t29 = -446223;
static int8_t x142 = INT8_MIN;
int32_t x151 = INT32_MAX;
volatile int32_t t31 = -6;
int32_t x154 = INT32_MIN;
static int8_t x156 = 0;
static volatile int16_t x164 = -1;
static uint64_t x166 = 15695LLU;
int8_t x170 = 1;
static volatile int32_t x173 = INT32_MIN;
static int8_t x177 = INT8_MIN;
uint16_t x184 = 23U;
static volatile int8_t x189 = 0;
uint16_t x190 = 42U;
uint32_t x191 = UINT32_MAX;
int16_t x195 = -1;
int64_t x205 = -855271210LL;
int16_t x209 = INT16_MIN;
uint8_t x210 = UINT8_MAX;
int32_t t46 = 2;
static volatile int32_t t47 = -1174;
uint16_t x219 = UINT16_MAX;
static int64_t x220 = INT64_MIN;
uint16_t x221 = 2873U;
int8_t x224 = INT8_MIN;
int16_t x227 = INT16_MIN;
int32_t t52 = 745;
int8_t x238 = INT8_MIN;
static volatile int32_t t53 = 114931401;
static volatile int32_t x251 = -1287;
static uint8_t x255 = UINT8_MAX;
int64_t x266 = 48839823LL;
static uint16_t x271 = UINT16_MAX;
int16_t x279 = -1;
int64_t x280 = -1LL;
static int8_t x303 = INT8_MAX;
volatile int32_t t66 = -1;
volatile uint64_t x312 = 5103328053683434LLU;
int16_t x314 = 2782;
int16_t x325 = 950;
static int64_t x335 = -12155LL;
int16_t x337 = -1;
static volatile int64_t x351 = INT64_MAX;
static uint8_t x354 = UINT8_MAX;
int16_t x361 = 20;
int8_t x364 = INT8_MIN;
int32_t x366 = -1;
int8_t x367 = -1;
int32_t x370 = 31;
int32_t x378 = 4217;
uint16_t x387 = UINT16_MAX;
static int8_t x390 = INT8_MIN;
volatile int32_t t84 = 3670;
int32_t t85 = 1;
volatile uint64_t x399 = 760119856LLU;
static int64_t x406 = 650559784156LL;
uint32_t x407 = 7498100U;
static volatile uint64_t x408 = 3LLU;
volatile int32_t t91 = -7150;
int32_t t92 = 23;
static int16_t x433 = 1;
uint16_t x441 = UINT16_MAX;
int8_t x442 = INT8_MIN;
static uint32_t x449 = 36822U;
volatile int32_t t101 = -40;
volatile int32_t t102 = 53419204;
int16_t x469 = -448;
int8_t x472 = INT8_MIN;
uint32_t x474 = UINT32_MAX;
static int64_t x497 = 195895923939103679LL;
uint32_t x498 = 103033U;
int32_t t106 = -4;
uint16_t x501 = UINT16_MAX;
int32_t x502 = 3210429;
int16_t x508 = 1;
static uint32_t x519 = 453599U;
static int32_t x520 = INT32_MIN;
int32_t t110 = 358;
int32_t t111 = -3994585;
static uint8_t x525 = 8U;
uint32_t x531 = UINT32_MAX;
int8_t x532 = -1;
int16_t x537 = INT16_MIN;
uint32_t x538 = 7467U;
static volatile uint64_t x540 = 1184LLU;
static int32_t x542 = INT32_MIN;
int16_t x549 = INT16_MIN;
int16_t x552 = -90;
static uint8_t x558 = 16U;
int64_t x559 = -1LL;
static int8_t x561 = 0;
static volatile uint32_t x568 = UINT32_MAX;
static volatile int64_t x572 = -170528519LL;
int16_t x579 = INT16_MIN;
static volatile int32_t t121 = -1215;
uint8_t x587 = UINT8_MAX;
static volatile int32_t t122 = 66;
static uint64_t x592 = 103968307977LLU;
static int32_t x595 = 176779674;
static int8_t x596 = -1;
static int32_t t124 = 14637747;
uint32_t x598 = 58778U;
int8_t x602 = INT8_MIN;
static uint32_t x613 = 1U;
volatile uint8_t x625 = UINT8_MAX;
static int8_t x629 = 0;
int64_t x636 = -1LL;
volatile int16_t x644 = 1;
uint64_t x656 = UINT64_MAX;
volatile int32_t x657 = INT32_MAX;
int16_t x660 = INT16_MIN;
volatile int32_t t136 = 372;
uint8_t x661 = UINT8_MAX;
int64_t x662 = -15701452LL;
uint64_t x665 = 4132373470299LLU;
volatile int16_t x666 = INT16_MIN;
uint32_t x675 = 21454723U;
int32_t x679 = INT32_MIN;
static uint16_t x682 = 2567U;
uint64_t x692 = UINT64_MAX;
volatile int32_t t143 = -80703;
static volatile uint16_t x694 = 27U;
volatile uint16_t x703 = UINT16_MAX;
volatile int32_t t147 = -11;
static uint16_t x712 = 7U;
static int32_t t149 = 1;
int16_t x717 = -10;
int8_t x724 = INT8_MIN;
uint64_t x725 = 668565LLU;
volatile int64_t x728 = -1LL;
volatile int32_t t152 = -2380;
volatile int8_t x729 = -1;
int8_t x732 = -1;
volatile int32_t x734 = INT32_MIN;
uint32_t x740 = 2440903U;
uint64_t x745 = 12765120LLU;
volatile uint16_t x749 = UINT16_MAX;
int32_t x760 = INT32_MIN;
int8_t x764 = INT8_MAX;
int64_t x769 = INT64_MIN;
int16_t x774 = -1;
volatile int32_t t164 = -5;
int64_t x782 = -174248982800575LL;
volatile int32_t t165 = 38973969;
int64_t x788 = -1LL;
volatile int32_t t167 = 413440;
int8_t x793 = INT8_MAX;
uint64_t x794 = 130951515LLU;
int64_t x795 = INT64_MIN;
uint16_t x803 = UINT16_MAX;
volatile int32_t x825 = -4;
int8_t x829 = INT8_MIN;
int64_t x842 = 186225LL;
int16_t x850 = INT16_MIN;
volatile uint8_t x852 = 1U;
int32_t t179 = -3496667;
int32_t t180 = -13;
static int64_t x867 = INT64_MAX;
int16_t x868 = INT16_MAX;
static uint16_t x870 = UINT16_MAX;
int32_t t182 = 5;
int32_t x884 = INT32_MAX;
int8_t x887 = INT8_MAX;
static int32_t t186 = 3045630;
uint32_t x891 = 13115U;
int64_t x899 = 3794323428LL;
uint32_t x908 = UINT32_MAX;
int8_t x909 = 0;
int64_t x911 = -1LL;
static int32_t t194 = -80292;
static uint8_t x930 = 0U;
uint64_t x938 = 12424229643LLU;
int32_t t198 = 869540642;
int16_t x941 = INT16_MAX;
static volatile int32_t t199 = -48957759;


void f0(void) {
    	static uint16_t x1 = 3U;
	int8_t x2 = INT8_MIN;
	volatile uint8_t x4 = 77U;
	int32_t t0 = -125;

    t0 = (x1<=(x2*(x3&x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int32_t x9 = -1;
	int16_t x11 = INT16_MIN;
	int32_t t1 = 556606112;

    t1 = (x9<=(x10*(x11&x12)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x13 = 24U;
	int16_t x14 = -6;
	static int8_t x16 = INT8_MIN;

    t2 = (x13<=(x14*(x15&x16)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x17 = -1;
	static int8_t x18 = 1;
	int32_t t3 = -3;

    t3 = (x17<=(x18*(x19&x20)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x21 = INT16_MAX;
	int64_t x22 = -10465645143LL;
	uint8_t x23 = 124U;
	uint8_t x24 = UINT8_MAX;
	static volatile int32_t t4 = -760425;

    t4 = (x21<=(x22*(x23&x24)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x29 = UINT64_MAX;
	volatile int64_t x30 = 20977LL;
	int8_t x32 = INT8_MIN;
	int32_t t5 = 1511019;

    t5 = (x29<=(x30*(x31&x32)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint32_t x35 = UINT32_MAX;
	uint8_t x36 = 0U;
	static int32_t t6 = -131;

    t6 = (x33<=(x34*(x35&x36)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x42 = UINT16_MAX;
	int8_t x43 = INT8_MIN;
	int64_t x44 = -224LL;
	volatile int32_t t7 = 25522526;

    t7 = (x41<=(x42*(x43&x44)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x49 = -2;
	int32_t x51 = 256462;
	uint32_t x52 = UINT32_MAX;
	int32_t t8 = -1051344281;

    t8 = (x49<=(x50*(x51&x52)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x57 = -1;
	uint64_t x59 = 634323LLU;
	static int8_t x60 = INT8_MIN;

    t9 = (x57<=(x58*(x59&x60)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x61 = INT32_MIN;
	static uint16_t x62 = 30U;
	int8_t x63 = 26;
	int32_t x64 = INT32_MAX;
	volatile int32_t t10 = 1;

    t10 = (x61<=(x62*(x63&x64)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x65 = 2660;
	static int8_t x66 = INT8_MIN;
	static volatile int32_t x67 = INT32_MAX;
	volatile int8_t x68 = 1;
	static int32_t t11 = 1536975;

    t11 = (x65<=(x66*(x67&x68)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x69 = 1U;
	volatile uint16_t x70 = 4U;
	int16_t x71 = -317;
	static int32_t x72 = -1;
	volatile int32_t t12 = 209895882;

    t12 = (x69<=(x70*(x71&x72)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x73 = INT64_MIN;
	static uint64_t x74 = UINT64_MAX;
	uint16_t x75 = 1597U;

    t13 = (x73<=(x74*(x75&x76)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x77 = 93901025U;
	int16_t x78 = INT16_MAX;
	int8_t x80 = -1;
	volatile int32_t t14 = -1;

    t14 = (x77<=(x78*(x79&x80)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint8_t x81 = UINT8_MAX;
	int64_t x82 = INT64_MAX;
	uint64_t x83 = 12455LLU;
	uint32_t x84 = UINT32_MAX;
	int32_t t15 = -1093;

    t15 = (x81<=(x82*(x83&x84)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x85 = -53;
	volatile int64_t x88 = -1LL;
	int32_t t16 = -504869;

    t16 = (x85<=(x86*(x87&x88)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x90 = -1LL;
	uint8_t x91 = 7U;
	int64_t x92 = -47026984709LL;
	volatile int32_t t17 = -2969;

    t17 = (x89<=(x90*(x91&x92)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x93 = INT16_MIN;
	volatile int16_t x94 = INT16_MIN;
	static int32_t x95 = INT32_MIN;
	int64_t x96 = -1LL;
	int32_t t18 = 7;

    t18 = (x93<=(x94*(x95&x96)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x98 = UINT32_MAX;
	uint16_t x99 = 3962U;
	uint16_t x100 = 1664U;

    t19 = (x97<=(x98*(x99&x100)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x101 = INT64_MAX;
	uint64_t x102 = UINT64_MAX;
	int8_t x103 = 0;
	int32_t t20 = 7988386;

    t20 = (x101<=(x102*(x103&x104)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x105 = INT64_MAX;
	uint64_t x106 = 6LLU;
	int8_t x107 = INT8_MIN;
	static int8_t x108 = INT8_MIN;
	int32_t t21 = 16;

    t21 = (x105<=(x106*(x107&x108)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x109 = 1U;
	int8_t x110 = INT8_MIN;
	volatile int16_t x111 = INT16_MIN;
	uint16_t x112 = 3U;

    t22 = (x109<=(x110*(x111&x112)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x114 = INT8_MIN;
	static uint16_t x115 = 10885U;
	static volatile int32_t t23 = 621314;

    t23 = (x113<=(x114*(x115&x116)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x118 = INT16_MIN;
	int32_t x119 = -1;
	int8_t x120 = INT8_MAX;
	volatile int32_t t24 = 20;

    t24 = (x117<=(x118*(x119&x120)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint8_t x121 = UINT8_MAX;
	int8_t x123 = -1;
	int8_t x124 = 0;
	volatile int32_t t25 = -16433305;

    t25 = (x121<=(x122*(x123&x124)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint64_t x125 = 547LLU;
	uint8_t x126 = 0U;
	uint16_t x127 = 82U;
	int8_t x128 = INT8_MIN;
	volatile int32_t t26 = 408358658;

    t26 = (x125<=(x126*(x127&x128)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x129 = -1;
	int16_t x131 = INT16_MIN;
	int32_t x132 = -1;
	static int32_t t27 = -101;

    t27 = (x129<=(x130*(x131&x132)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x133 = INT64_MAX;
	volatile uint16_t x134 = 13902U;
	int8_t x136 = INT8_MAX;
	volatile int32_t t28 = -98255;

    t28 = (x133<=(x134*(x135&x136)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile uint32_t x137 = 8750U;
	volatile int8_t x138 = INT8_MAX;
	int16_t x139 = -1;

    t29 = (x137<=(x138*(x139&x140)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x141 = INT16_MAX;
	uint32_t x143 = 1772391756U;
	static int64_t x144 = -1LL;
	volatile int32_t t30 = 113679891;

    t30 = (x141<=(x142*(x143&x144)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x149 = UINT32_MAX;
	volatile int8_t x150 = INT8_MIN;
	volatile uint64_t x152 = 15149424705LLU;

    t31 = (x149<=(x150*(x151&x152)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x153 = 13U;
	volatile uint16_t x155 = 30U;
	int32_t t32 = 25677;

    t32 = (x153<=(x154*(x155&x156)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x157 = -1;
	int32_t x158 = -1;
	static uint16_t x159 = 16138U;
	static int8_t x160 = 5;
	int32_t t33 = 3205;

    t33 = (x157<=(x158*(x159&x160)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x161 = -1;
	int16_t x162 = INT16_MIN;
	volatile int16_t x163 = INT16_MIN;
	static int32_t t34 = 60522;

    t34 = (x161<=(x162*(x163&x164)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x165 = INT8_MIN;
	volatile uint16_t x167 = 24642U;
	static int64_t x168 = -3926012075246LL;
	static volatile int32_t t35 = -119713;

    t35 = (x165<=(x166*(x167&x168)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x169 = INT16_MAX;
	int64_t x171 = INT64_MIN;
	int8_t x172 = INT8_MIN;
	int32_t t36 = 731533040;

    t36 = (x169<=(x170*(x171&x172)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x174 = 5633;
	int8_t x175 = INT8_MIN;
	volatile int32_t x176 = -1;
	int32_t t37 = 31190137;

    t37 = (x173<=(x174*(x175&x176)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x178 = -1;
	volatile int8_t x179 = 1;
	int16_t x180 = INT16_MIN;
	int32_t t38 = 12;

    t38 = (x177<=(x178*(x179&x180)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x181 = -6255;
	int8_t x182 = INT8_MAX;
	volatile uint8_t x183 = 5U;
	static int32_t t39 = -1737970;

    t39 = (x181<=(x182*(x183&x184)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x185 = INT16_MIN;
	static uint64_t x186 = 25696456781573LLU;
	volatile int32_t x187 = -1;
	int32_t x188 = -1;
	int32_t t40 = 98283094;

    t40 = (x185<=(x186*(x187&x188)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x192 = -91792142637LL;
	static volatile int32_t t41 = 16146576;

    t41 = (x189<=(x190*(x191&x192)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x193 = -1;
	volatile int8_t x194 = 0;
	int32_t x196 = -1159001;
	int32_t t42 = -1158755;

    t42 = (x193<=(x194*(x195&x196)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint16_t x197 = UINT16_MAX;
	uint8_t x198 = UINT8_MAX;
	static volatile int32_t x199 = -1;
	static int8_t x200 = INT8_MIN;
	volatile int32_t t43 = -75;

    t43 = (x197<=(x198*(x199&x200)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x201 = INT8_MAX;
	uint16_t x202 = 7501U;
	int16_t x203 = 5739;
	uint16_t x204 = 81U;
	static int32_t t44 = -938682;

    t44 = (x201<=(x202*(x203&x204)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x206 = UINT16_MAX;
	volatile uint16_t x207 = 84U;
	volatile int16_t x208 = -1;
	int32_t t45 = 110774443;

    t45 = (x205<=(x206*(x207&x208)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x211 = INT8_MIN;
	static uint8_t x212 = UINT8_MAX;

    t46 = (x209<=(x210*(x211&x212)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x213 = 32276602;
	uint16_t x214 = UINT16_MAX;
	uint16_t x215 = 3310U;
	volatile uint16_t x216 = 7U;

    t47 = (x213<=(x214*(x215&x216)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x217 = INT8_MAX;
	int32_t x218 = -250843051;
	static volatile int32_t t48 = -5475039;

    t48 = (x217<=(x218*(x219&x220)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint8_t x222 = UINT8_MAX;
	uint16_t x223 = UINT16_MAX;
	static volatile int32_t t49 = 190369586;

    t49 = (x221<=(x222*(x223&x224)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x225 = INT32_MIN;
	volatile uint32_t x226 = UINT32_MAX;
	int8_t x228 = -1;
	int32_t t50 = 61787;

    t50 = (x225<=(x226*(x227&x228)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint8_t x229 = 18U;
	int8_t x230 = INT8_MAX;
	uint32_t x231 = 1511135U;
	volatile int32_t x232 = -391;
	int32_t t51 = -9421;

    t51 = (x229<=(x230*(x231&x232)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x233 = 17351;
	int32_t x234 = 14;
	static volatile int64_t x235 = INT64_MIN;
	uint16_t x236 = 7U;

    t52 = (x233<=(x234*(x235&x236)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x237 = INT32_MAX;
	int32_t x239 = 871;
	uint16_t x240 = 48U;

    t53 = (x237<=(x238*(x239&x240)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x241 = UINT32_MAX;
	volatile int8_t x242 = 1;
	int32_t x243 = INT32_MIN;
	int16_t x244 = -1;
	volatile int32_t t54 = 375304574;

    t54 = (x241<=(x242*(x243&x244)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x245 = INT64_MAX;
	volatile int8_t x246 = -1;
	uint16_t x247 = 0U;
	volatile int8_t x248 = INT8_MIN;
	static volatile int32_t t55 = 1614100;

    t55 = (x245<=(x246*(x247&x248)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x249 = 0U;
	uint32_t x250 = 19225U;
	static uint32_t x252 = UINT32_MAX;
	volatile int32_t t56 = 1880;

    t56 = (x249<=(x250*(x251&x252)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x253 = 109114129767114LL;
	static int32_t x254 = -1;
	volatile int8_t x256 = -1;
	int32_t t57 = 81;

    t57 = (x253<=(x254*(x255&x256)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x257 = -1;
	int32_t x258 = INT32_MIN;
	int64_t x259 = -997768484097870859LL;
	uint16_t x260 = 460U;
	static int32_t t58 = 28751;

    t58 = (x257<=(x258*(x259&x260)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x265 = 38252;
	int8_t x267 = -1;
	uint8_t x268 = 42U;
	int32_t t59 = -192738;

    t59 = (x265<=(x266*(x267&x268)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x269 = 10U;
	volatile int32_t x270 = -52;
	int16_t x272 = -1;
	volatile int32_t t60 = 134;

    t60 = (x269<=(x270*(x271&x272)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x273 = -1;
	volatile int64_t x274 = -3272280646655401174LL;
	int32_t x275 = INT32_MIN;
	uint64_t x276 = UINT64_MAX;
	volatile int32_t t61 = -1;

    t61 = (x273<=(x274*(x275&x276)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x277 = 4LL;
	uint64_t x278 = 906217LLU;
	int32_t t62 = -366847913;

    t62 = (x277<=(x278*(x279&x280)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x285 = -1;
	volatile uint8_t x286 = 40U;
	int32_t x287 = 338557;
	uint32_t x288 = 307924U;
	static int32_t t63 = 254;

    t63 = (x285<=(x286*(x287&x288)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int8_t x289 = -1;
	uint32_t x290 = UINT32_MAX;
	uint8_t x291 = 6U;
	int64_t x292 = INT64_MAX;
	int32_t t64 = 74394879;

    t64 = (x289<=(x290*(x291&x292)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x293 = -2;
	volatile int8_t x294 = INT8_MAX;
	int16_t x295 = INT16_MAX;
	volatile int32_t x296 = INT32_MIN;
	int32_t t65 = -199242292;

    t65 = (x293<=(x294*(x295&x296)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x301 = 198175441;
	int32_t x302 = 124667427;
	int64_t x304 = INT64_MIN;

    t66 = (x301<=(x302*(x303&x304)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x305 = -1;
	uint64_t x306 = 49944204LLU;
	int32_t x307 = 58287;
	static uint16_t x308 = 308U;
	volatile int32_t t67 = 127;

    t67 = (x305<=(x306*(x307&x308)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x309 = 7075741192LL;
	int64_t x310 = 2693303LL;
	int8_t x311 = -34;
	volatile int32_t t68 = -7511559;

    t68 = (x309<=(x310*(x311&x312)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x313 = -739885LL;
	volatile uint8_t x315 = 2U;
	static int32_t x316 = INT32_MIN;
	volatile int32_t t69 = -1;

    t69 = (x313<=(x314*(x315&x316)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x326 = INT8_MIN;
	static int64_t x327 = 161781733LL;
	uint32_t x328 = 3423135U;
	static volatile int32_t t70 = 117383756;

    t70 = (x325<=(x326*(x327&x328)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint64_t x333 = 16190LLU;
	volatile int16_t x334 = INT16_MIN;
	static int16_t x336 = -1;
	static volatile int32_t t71 = 1754;

    t71 = (x333<=(x334*(x335&x336)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x338 = -13504812;
	uint16_t x339 = UINT16_MAX;
	volatile uint32_t x340 = 1U;
	volatile int32_t t72 = -1007;

    t72 = (x337<=(x338*(x339&x340)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x341 = 3929U;
	int16_t x342 = INT16_MAX;
	int32_t x343 = INT32_MIN;
	int8_t x344 = INT8_MAX;
	volatile int32_t t73 = -149;

    t73 = (x341<=(x342*(x343&x344)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int16_t x349 = -4;
	uint16_t x350 = 989U;
	int64_t x352 = INT64_MIN;
	int32_t t74 = -3;

    t74 = (x349<=(x350*(x351&x352)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x353 = 15LL;
	uint8_t x355 = 1U;
	static int32_t x356 = -1;
	int32_t t75 = 20764786;

    t75 = (x353<=(x354*(x355&x356)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x357 = 7327U;
	int16_t x358 = INT16_MAX;
	volatile int32_t x359 = INT32_MAX;
	static uint16_t x360 = 299U;
	volatile int32_t t76 = -896;

    t76 = (x357<=(x358*(x359&x360)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x362 = INT16_MAX;
	static uint32_t x363 = 9U;
	static int32_t t77 = 3224701;

    t77 = (x361<=(x362*(x363&x364)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x365 = -1;
	static uint16_t x368 = 113U;
	static volatile int32_t t78 = -4;

    t78 = (x365<=(x366*(x367&x368)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x369 = INT32_MAX;
	int32_t x371 = -21044;
	int8_t x372 = INT8_MIN;
	volatile int32_t t79 = 11;

    t79 = (x369<=(x370*(x371&x372)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x373 = -1LL;
	static int64_t x374 = 1226LL;
	int64_t x375 = INT64_MIN;
	int8_t x376 = 59;
	int32_t t80 = 39;

    t80 = (x373<=(x374*(x375&x376)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint8_t x377 = 70U;
	int8_t x379 = -1;
	static int64_t x380 = -1LL;
	int32_t t81 = -24;

    t81 = (x377<=(x378*(x379&x380)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x381 = UINT64_MAX;
	uint64_t x382 = UINT64_MAX;
	uint32_t x383 = 2171U;
	int32_t x384 = INT32_MIN;
	volatile int32_t t82 = -1;

    t82 = (x381<=(x382*(x383&x384)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x385 = 1U;
	int32_t x386 = 14145;
	int16_t x388 = 0;
	volatile int32_t t83 = 15;

    t83 = (x385<=(x386*(x387&x388)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x389 = INT32_MAX;
	uint8_t x391 = 50U;
	volatile int16_t x392 = 8926;

    t84 = (x389<=(x390*(x391&x392)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x393 = 60706297U;
	int8_t x394 = INT8_MAX;
	static uint8_t x395 = UINT8_MAX;
	uint32_t x396 = 24755U;

    t85 = (x393<=(x394*(x395&x396)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x397 = INT16_MIN;
	uint64_t x398 = 13LLU;
	int64_t x400 = INT64_MIN;
	int32_t t86 = 970166;

    t86 = (x397<=(x398*(x399&x400)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x401 = -6719;
	int32_t x402 = -22260;
	int16_t x403 = 371;
	uint8_t x404 = UINT8_MAX;
	int32_t t87 = 1;

    t87 = (x401<=(x402*(x403&x404)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x405 = -68;
	volatile int32_t t88 = 195;

    t88 = (x405<=(x406*(x407&x408)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x409 = -14462814073803LL;
	static int8_t x410 = INT8_MAX;
	static int64_t x411 = INT64_MAX;
	static int64_t x412 = INT64_MIN;
	int32_t t89 = 202546837;

    t89 = (x409<=(x410*(x411&x412)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x413 = UINT64_MAX;
	int16_t x414 = 1;
	int16_t x415 = INT16_MIN;
	int64_t x416 = -3454020370408LL;
	int32_t t90 = 51;

    t90 = (x413<=(x414*(x415&x416)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x417 = -1LL;
	static volatile int64_t x418 = -1LL;
	volatile uint64_t x419 = 7272046683105712LLU;
	volatile int8_t x420 = -1;

    t91 = (x417<=(x418*(x419&x420)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x421 = -1;
	int8_t x422 = 0;
	uint16_t x423 = UINT16_MAX;
	int32_t x424 = -1;

    t92 = (x421<=(x422*(x423&x424)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x429 = -1LL;
	static int8_t x430 = -1;
	static int8_t x431 = INT8_MIN;
	int32_t x432 = INT32_MAX;
	static volatile int32_t t93 = -16146;

    t93 = (x429<=(x430*(x431&x432)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x434 = 30;
	volatile uint16_t x435 = UINT16_MAX;
	int16_t x436 = INT16_MIN;
	int32_t t94 = -173179;

    t94 = (x433<=(x434*(x435&x436)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x437 = INT16_MIN;
	int32_t x438 = 836751637;
	uint16_t x439 = 210U;
	int16_t x440 = INT16_MIN;
	int32_t t95 = 69;

    t95 = (x437<=(x438*(x439&x440)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint64_t x443 = 4538646LLU;
	uint16_t x444 = UINT16_MAX;
	static int32_t t96 = -10271858;

    t96 = (x441<=(x442*(x443&x444)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x445 = -6;
	uint8_t x446 = UINT8_MAX;
	uint16_t x447 = 21373U;
	volatile uint8_t x448 = 119U;
	volatile int32_t t97 = 3673201;

    t97 = (x445<=(x446*(x447&x448)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x450 = INT32_MIN;
	uint8_t x451 = 25U;
	static uint8_t x452 = 3U;
	int32_t t98 = 11;

    t98 = (x449<=(x450*(x451&x452)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x453 = 3;
	uint32_t x454 = 560775930U;
	int16_t x455 = INT16_MIN;
	int8_t x456 = INT8_MAX;
	volatile int32_t t99 = 843;

    t99 = (x453<=(x454*(x455&x456)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x457 = INT16_MIN;
	int16_t x458 = INT16_MAX;
	uint16_t x459 = 167U;
	int8_t x460 = 19;
	int32_t t100 = 66447;

    t100 = (x457<=(x458*(x459&x460)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int16_t x461 = -1;
	static int64_t x462 = -1LL;
	static uint8_t x463 = 0U;
	volatile uint16_t x464 = 13U;

    t101 = (x461<=(x462*(x463&x464)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x465 = UINT8_MAX;
	volatile int16_t x466 = -1;
	static uint8_t x467 = UINT8_MAX;
	int16_t x468 = 9329;

    t102 = (x465<=(x466*(x467&x468)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x470 = INT8_MIN;
	volatile int8_t x471 = INT8_MIN;
	volatile int32_t t103 = -4970949;

    t103 = (x469<=(x470*(x471&x472)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint32_t x473 = 1U;
	int32_t x475 = INT32_MIN;
	uint8_t x476 = 66U;
	int32_t t104 = 606316;

    t104 = (x473<=(x474*(x475&x476)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x489 = -1LL;
	int32_t x490 = 28046;
	int8_t x491 = INT8_MAX;
	int16_t x492 = INT16_MAX;
	volatile int32_t t105 = 2948171;

    t105 = (x489<=(x490*(x491&x492)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint16_t x499 = 36U;
	int32_t x500 = INT32_MAX;

    t106 = (x497<=(x498*(x499&x500)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x503 = 171370021182567LL;
	int64_t x504 = 283241443935373LL;
	int32_t t107 = 6684948;

    t107 = (x501<=(x502*(x503&x504)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x505 = 62U;
	uint64_t x506 = 117511196833075101LLU;
	static uint8_t x507 = 7U;
	volatile int32_t t108 = -215995;

    t108 = (x505<=(x506*(x507&x508)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x513 = -1;
	int8_t x514 = INT8_MAX;
	int8_t x515 = INT8_MIN;
	int64_t x516 = -1LL;
	volatile int32_t t109 = -92919;

    t109 = (x513<=(x514*(x515&x516)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x517 = 3232U;
	static volatile int64_t x518 = -1LL;

    t110 = (x517<=(x518*(x519&x520)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x521 = -7;
	uint32_t x522 = 5409718U;
	int64_t x523 = INT64_MIN;
	static int64_t x524 = INT64_MAX;

    t111 = (x521<=(x522*(x523&x524)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x526 = 1U;
	int64_t x527 = INT64_MIN;
	int32_t x528 = -1;
	volatile int32_t t112 = 232666858;

    t112 = (x525<=(x526*(x527&x528)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x529 = INT8_MAX;
	int16_t x530 = -1;
	int32_t t113 = 789559;

    t113 = (x529<=(x530*(x531&x532)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x539 = INT64_MAX;
	volatile int32_t t114 = 967108718;

    t114 = (x537<=(x538*(x539&x540)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x541 = 1215LL;
	int16_t x543 = INT16_MAX;
	int64_t x544 = INT64_MIN;
	volatile int32_t t115 = 171;

    t115 = (x541<=(x542*(x543&x544)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x550 = INT16_MIN;
	uint64_t x551 = 391499519487091084LLU;
	volatile int32_t t116 = -8361694;

    t116 = (x549<=(x550*(x551&x552)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x557 = 22193716977LLU;
	static int16_t x560 = -1;
	int32_t t117 = 844618506;

    t117 = (x557<=(x558*(x559&x560)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x562 = 11498937U;
	volatile uint8_t x563 = UINT8_MAX;
	uint16_t x564 = UINT16_MAX;
	int32_t t118 = 686364827;

    t118 = (x561<=(x562*(x563&x564)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint16_t x565 = 28U;
	volatile uint32_t x566 = UINT32_MAX;
	static int32_t x567 = -1;
	volatile int32_t t119 = 0;

    t119 = (x565<=(x566*(x567&x568)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x569 = UINT64_MAX;
	uint8_t x570 = 22U;
	uint8_t x571 = UINT8_MAX;
	volatile int32_t t120 = -1809551;

    t120 = (x569<=(x570*(x571&x572)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x577 = 27U;
	uint32_t x578 = 32U;
	int8_t x580 = -1;

    t121 = (x577<=(x578*(x579&x580)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x585 = 0U;
	static uint32_t x586 = 69U;
	static int8_t x588 = INT8_MAX;

    t122 = (x585<=(x586*(x587&x588)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x589 = -7;
	volatile int16_t x590 = 4148;
	static int32_t x591 = INT32_MAX;
	int32_t t123 = -14898425;

    t123 = (x589<=(x590*(x591&x592)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x593 = INT8_MIN;
	uint32_t x594 = UINT32_MAX;

    t124 = (x593<=(x594*(x595&x596)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint32_t x597 = 81U;
	int16_t x599 = -10366;
	int32_t x600 = -1;
	volatile int32_t t125 = -3055272;

    t125 = (x597<=(x598*(x599&x600)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x601 = 2U;
	uint64_t x603 = 310724584544870LLU;
	uint32_t x604 = 4316296U;
	int32_t t126 = -67980;

    t126 = (x601<=(x602*(x603&x604)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x609 = UINT8_MAX;
	int16_t x610 = INT16_MIN;
	int16_t x611 = -12278;
	volatile int8_t x612 = INT8_MIN;
	volatile int32_t t127 = 11343;

    t127 = (x609<=(x610*(x611&x612)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile uint32_t x614 = UINT32_MAX;
	int8_t x615 = INT8_MIN;
	volatile int32_t x616 = 14066479;
	int32_t t128 = -11097;

    t128 = (x613<=(x614*(x615&x616)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x626 = 6109;
	int64_t x627 = -1LL;
	volatile int32_t x628 = -1;
	volatile int32_t t129 = 14822;

    t129 = (x625<=(x626*(x627&x628)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x630 = -1;
	int16_t x631 = 8419;
	uint8_t x632 = UINT8_MAX;
	int32_t t130 = -7316;

    t130 = (x629<=(x630*(x631&x632)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x633 = 80U;
	uint64_t x634 = 38822634387199LLU;
	uint64_t x635 = 3654LLU;
	int32_t t131 = 20;

    t131 = (x633<=(x634*(x635&x636)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x637 = INT32_MIN;
	int8_t x638 = -1;
	uint16_t x639 = 41U;
	uint8_t x640 = 3U;
	volatile int32_t t132 = 1160078;

    t132 = (x637<=(x638*(x639&x640)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x641 = INT16_MAX;
	volatile int16_t x642 = INT16_MIN;
	int8_t x643 = INT8_MAX;
	int32_t t133 = 8394;

    t133 = (x641<=(x642*(x643&x644)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int16_t x645 = -1;
	volatile int8_t x646 = 2;
	int32_t x647 = INT32_MIN;
	volatile uint32_t x648 = 317241233U;
	static int32_t t134 = -1621689;

    t134 = (x645<=(x646*(x647&x648)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x653 = 1450046604520050LL;
	int8_t x654 = -1;
	uint16_t x655 = 0U;
	volatile int32_t t135 = 73825;

    t135 = (x653<=(x654*(x655&x656)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x658 = INT32_MIN;
	static uint16_t x659 = 630U;

    t136 = (x657<=(x658*(x659&x660)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x663 = INT64_MIN;
	uint8_t x664 = 1U;
	int32_t t137 = 32462;

    t137 = (x661<=(x662*(x663&x664)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint16_t x667 = 108U;
	int32_t x668 = INT32_MAX;
	static int32_t t138 = -418;

    t138 = (x665<=(x666*(x667&x668)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x673 = INT32_MAX;
	int8_t x674 = INT8_MIN;
	int16_t x676 = -1;
	volatile int32_t t139 = -30267;

    t139 = (x673<=(x674*(x675&x676)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int64_t x677 = INT64_MIN;
	volatile int8_t x678 = 4;
	uint16_t x680 = 369U;
	volatile int32_t t140 = -175510898;

    t140 = (x677<=(x678*(x679&x680)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int64_t x681 = 1318257886502073LL;
	int8_t x683 = -1;
	static uint32_t x684 = 6454180U;
	volatile int32_t t141 = 4169;

    t141 = (x681<=(x682*(x683&x684)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x685 = -161067;
	int64_t x686 = INT64_MIN;
	int8_t x687 = INT8_MIN;
	uint8_t x688 = 76U;
	static volatile int32_t t142 = -183;

    t142 = (x685<=(x686*(x687&x688)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint8_t x689 = 3U;
	volatile int64_t x690 = INT64_MIN;
	volatile int16_t x691 = INT16_MIN;

    t143 = (x689<=(x690*(x691&x692)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x693 = UINT32_MAX;
	uint8_t x695 = 0U;
	uint16_t x696 = 1U;
	int32_t t144 = 651004120;

    t144 = (x693<=(x694*(x695&x696)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x697 = -13;
	int64_t x698 = -25435999LL;
	static int8_t x699 = -1;
	uint16_t x700 = 54U;
	int32_t t145 = -435;

    t145 = (x697<=(x698*(x699&x700)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x701 = INT32_MIN;
	static uint64_t x702 = 31LLU;
	int16_t x704 = 2309;
	volatile int32_t t146 = 2047167;

    t146 = (x701<=(x702*(x703&x704)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x705 = 156427812LLU;
	int8_t x706 = INT8_MAX;
	static int64_t x707 = -1051LL;
	static int8_t x708 = -1;

    t147 = (x705<=(x706*(x707&x708)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int16_t x709 = 3;
	int64_t x710 = -88241250503603LL;
	volatile uint32_t x711 = 2U;
	volatile int32_t t148 = 473578941;

    t148 = (x709<=(x710*(x711&x712)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint64_t x713 = 190660315040LLU;
	volatile uint32_t x714 = 41481U;
	static int64_t x715 = INT64_MIN;
	uint32_t x716 = UINT32_MAX;

    t149 = (x713<=(x714*(x715&x716)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x718 = INT64_MAX;
	uint64_t x719 = 175394381743055341LLU;
	int32_t x720 = 3347999;
	volatile int32_t t150 = 204377;

    t150 = (x717<=(x718*(x719&x720)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int32_t x721 = INT32_MIN;
	uint8_t x722 = 3U;
	static volatile uint8_t x723 = 32U;
	int32_t t151 = -11057149;

    t151 = (x721<=(x722*(x723&x724)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x726 = INT8_MIN;
	uint16_t x727 = UINT16_MAX;

    t152 = (x725<=(x726*(x727&x728)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile uint64_t x730 = 27525LLU;
	int8_t x731 = -1;
	volatile int32_t t153 = 41464142;

    t153 = (x729<=(x730*(x731&x732)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x733 = UINT32_MAX;
	int16_t x735 = INT16_MIN;
	int8_t x736 = 13;
	static volatile int32_t t154 = 373468324;

    t154 = (x733<=(x734*(x735&x736)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x737 = INT16_MAX;
	static int16_t x738 = INT16_MAX;
	int32_t x739 = INT32_MIN;
	int32_t t155 = -786;

    t155 = (x737<=(x738*(x739&x740)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x741 = INT32_MAX;
	static volatile int16_t x742 = -1271;
	volatile uint8_t x743 = 3U;
	uint16_t x744 = UINT16_MAX;
	volatile int32_t t156 = -3650;

    t156 = (x741<=(x742*(x743&x744)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x746 = 1;
	int64_t x747 = INT64_MAX;
	uint16_t x748 = 38U;
	volatile int32_t t157 = 0;

    t157 = (x745<=(x746*(x747&x748)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x750 = INT32_MIN;
	volatile uint32_t x751 = UINT32_MAX;
	int16_t x752 = 78;
	volatile int32_t t158 = -3214835;

    t158 = (x749<=(x750*(x751&x752)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x753 = 23;
	uint8_t x754 = 22U;
	uint16_t x755 = 26175U;
	uint64_t x756 = UINT64_MAX;
	volatile int32_t t159 = -43;

    t159 = (x753<=(x754*(x755&x756)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int64_t x757 = INT64_MAX;
	volatile uint16_t x758 = 1U;
	uint64_t x759 = UINT64_MAX;
	volatile int32_t t160 = -144910;

    t160 = (x757<=(x758*(x759&x760)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x761 = 1U;
	static int16_t x762 = 1267;
	static uint16_t x763 = 5U;
	volatile int32_t t161 = -30;

    t161 = (x761<=(x762*(x763&x764)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int16_t x770 = 34;
	static uint64_t x771 = 132267171085LLU;
	static int8_t x772 = INT8_MIN;
	volatile int32_t t162 = -2931;

    t162 = (x769<=(x770*(x771&x772)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint64_t x773 = 488892319065LLU;
	volatile uint16_t x775 = UINT16_MAX;
	static int16_t x776 = -1;
	int32_t t163 = 1;

    t163 = (x773<=(x774*(x775&x776)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint8_t x777 = UINT8_MAX;
	volatile int32_t x778 = INT32_MIN;
	static volatile uint32_t x779 = 3U;
	volatile uint8_t x780 = UINT8_MAX;

    t164 = (x777<=(x778*(x779&x780)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x781 = -1;
	int8_t x783 = INT8_MAX;
	volatile int32_t x784 = INT32_MIN;

    t165 = (x781<=(x782*(x783&x784)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x785 = UINT64_MAX;
	uint32_t x786 = UINT32_MAX;
	uint32_t x787 = 50U;
	volatile int32_t t166 = -13268;

    t166 = (x785<=(x786*(x787&x788)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x789 = 16376027158LLU;
	uint16_t x790 = UINT16_MAX;
	int8_t x791 = 2;
	int32_t x792 = INT32_MIN;

    t167 = (x789<=(x790*(x791&x792)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x796 = -1LL;
	int32_t t168 = -1;

    t168 = (x793<=(x794*(x795&x796)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x797 = 1;
	volatile int64_t x798 = INT64_MIN;
	static int8_t x799 = INT8_MIN;
	uint8_t x800 = 2U;
	volatile int32_t t169 = 4137419;

    t169 = (x797<=(x798*(x799&x800)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x801 = 93U;
	volatile int64_t x802 = 786584294LL;
	uint64_t x804 = UINT64_MAX;
	static volatile int32_t t170 = 2139;

    t170 = (x801<=(x802*(x803&x804)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint64_t x805 = 32905920984701640LLU;
	int64_t x806 = INT64_MIN;
	volatile int64_t x807 = -1LL;
	uint16_t x808 = 1U;
	int32_t t171 = 622000;

    t171 = (x805<=(x806*(x807&x808)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x813 = INT32_MAX;
	static int64_t x814 = INT64_MIN;
	int64_t x815 = INT64_MIN;
	volatile uint8_t x816 = 2U;
	int32_t t172 = -564620;

    t172 = (x813<=(x814*(x815&x816)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x821 = UINT8_MAX;
	uint64_t x822 = 31017659280LLU;
	uint32_t x823 = 5395360U;
	int64_t x824 = INT64_MAX;
	static volatile int32_t t173 = -63105685;

    t173 = (x821<=(x822*(x823&x824)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint16_t x826 = 253U;
	int64_t x827 = INT64_MIN;
	uint16_t x828 = 753U;
	volatile int32_t t174 = 0;

    t174 = (x825<=(x826*(x827&x828)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x830 = -1LL;
	int16_t x831 = 1;
	int32_t x832 = INT32_MIN;
	volatile int32_t t175 = -19;

    t175 = (x829<=(x830*(x831&x832)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x837 = -1;
	uint64_t x838 = 2001871LLU;
	volatile int16_t x839 = 250;
	volatile uint8_t x840 = 5U;
	static int32_t t176 = -11481;

    t176 = (x837<=(x838*(x839&x840)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x841 = 15313;
	uint32_t x843 = UINT32_MAX;
	uint64_t x844 = 25784828012071512LLU;
	int32_t t177 = 19640;

    t177 = (x841<=(x842*(x843&x844)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x849 = INT32_MIN;
	uint64_t x851 = 4088605454708671086LLU;
	volatile int32_t t178 = -6758;

    t178 = (x849<=(x850*(x851&x852)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint64_t x857 = UINT64_MAX;
	int8_t x858 = INT8_MIN;
	uint16_t x859 = 229U;
	uint8_t x860 = 3U;

    t179 = (x857<=(x858*(x859&x860)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x861 = 45633623554LLU;
	int8_t x862 = INT8_MAX;
	volatile uint16_t x863 = 13U;
	uint8_t x864 = UINT8_MAX;

    t180 = (x861<=(x862*(x863&x864)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x865 = -1;
	int16_t x866 = INT16_MIN;
	int32_t t181 = -252877250;

    t181 = (x865<=(x866*(x867&x868)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x869 = -1;
	static volatile int16_t x871 = -1;
	int16_t x872 = -2;

    t182 = (x869<=(x870*(x871&x872)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x873 = -59;
	volatile uint64_t x874 = 15032315380733LLU;
	volatile int16_t x875 = -1;
	volatile uint32_t x876 = 1809640565U;
	volatile int32_t t183 = -129;

    t183 = (x873<=(x874*(x875&x876)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x877 = 11706826U;
	uint32_t x878 = 989902452U;
	volatile int32_t x879 = 10952;
	int64_t x880 = 1920181099798008717LL;
	static volatile int32_t t184 = 148020775;

    t184 = (x877<=(x878*(x879&x880)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x881 = 733296055474LLU;
	static int32_t x882 = 47;
	volatile uint8_t x883 = 14U;
	volatile int32_t t185 = 1987;

    t185 = (x881<=(x882*(x883&x884)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x885 = INT32_MIN;
	uint8_t x886 = UINT8_MAX;
	uint64_t x888 = 451LLU;

    t186 = (x885<=(x886*(x887&x888)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x889 = 222;
	int8_t x890 = -1;
	int32_t x892 = INT32_MAX;
	volatile int32_t t187 = -29;

    t187 = (x889<=(x890*(x891&x892)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x893 = INT16_MIN;
	int32_t x894 = -7308;
	int16_t x895 = INT16_MIN;
	static uint8_t x896 = UINT8_MAX;
	static volatile int32_t t188 = -9810;

    t188 = (x893<=(x894*(x895&x896)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x897 = INT64_MIN;
	uint64_t x898 = 48506011863263LLU;
	static int32_t x900 = -30;
	int32_t t189 = -12161432;

    t189 = (x897<=(x898*(x899&x900)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint32_t x901 = 84U;
	int8_t x902 = INT8_MIN;
	int8_t x903 = -1;
	uint16_t x904 = 849U;
	volatile int32_t t190 = 4105417;

    t190 = (x901<=(x902*(x903&x904)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x905 = -1;
	int16_t x906 = INT16_MAX;
	uint8_t x907 = 49U;
	volatile int32_t t191 = 35;

    t191 = (x905<=(x906*(x907&x908)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x910 = UINT32_MAX;
	int16_t x912 = -45;
	static int32_t t192 = 216182442;

    t192 = (x909<=(x910*(x911&x912)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x913 = UINT8_MAX;
	static int32_t x914 = -1;
	int64_t x915 = INT64_MAX;
	int32_t x916 = -1;
	volatile int32_t t193 = -37;

    t193 = (x913<=(x914*(x915&x916)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x917 = INT8_MIN;
	volatile int64_t x918 = -1LL;
	static volatile int64_t x919 = 2082476LL;
	static int8_t x920 = -1;

    t194 = (x917<=(x918*(x919&x920)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x921 = 3U;
	uint32_t x922 = 1604109U;
	int8_t x923 = INT8_MIN;
	volatile int16_t x924 = 23;
	int32_t t195 = -63464;

    t195 = (x921<=(x922*(x923&x924)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x925 = 895LLU;
	volatile int16_t x926 = -1;
	static uint8_t x927 = 27U;
	int8_t x928 = -1;
	static int32_t t196 = -1250369;

    t196 = (x925<=(x926*(x927&x928)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x929 = INT8_MIN;
	uint8_t x931 = 15U;
	int32_t x932 = -1;
	volatile int32_t t197 = 733566;

    t197 = (x929<=(x930*(x931&x932)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x937 = INT32_MIN;
	volatile int64_t x939 = INT64_MAX;
	static int64_t x940 = INT64_MAX;

    t198 = (x937<=(x938*(x939&x940)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x942 = 311U;
	static int8_t x943 = -18;
	static volatile uint32_t x944 = 22769869U;

    t199 = (x941<=(x942*(x943&x944)));

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



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

uint8_t x4 = 1U;
int16_t x7 = -41;
static int64_t t1 = -5740083731967LL;
int8_t x9 = INT8_MIN;
int32_t x14 = -58;
volatile int32_t x17 = 123490;
int8_t x18 = -1;
static uint32_t x19 = 6244U;
volatile uint32_t t4 = 29955U;
int32_t x25 = -1;
int32_t x30 = INT32_MIN;
uint64_t x33 = 535063199987LLU;
int16_t x44 = INT16_MIN;
int32_t t9 = 250546552;
uint64_t x49 = 52624LLU;
int8_t x50 = -43;
int32_t t13 = -221845;
static uint8_t x73 = 7U;
uint32_t x74 = 109777U;
int16_t x76 = -1;
static int64_t x78 = INT64_MAX;
int16_t x80 = INT16_MAX;
int32_t t19 = -1;
static int32_t t20 = INT32_MAX;
static int16_t x91 = INT16_MIN;
uint16_t x93 = UINT16_MAX;
volatile int32_t x94 = INT32_MAX;
uint16_t x95 = 6U;
volatile uint64_t t22 = 3LLU;
int8_t x100 = 29;
int32_t x102 = INT32_MAX;
static volatile uint32_t x106 = UINT32_MAX;
uint64_t t26 = 14732746970701738LLU;
int64_t x125 = INT64_MIN;
volatile int64_t t30 = -249133403302984LL;
uint16_t x130 = 451U;
uint16_t x131 = 1U;
static int16_t x137 = -119;
int64_t x139 = INT64_MAX;
static int32_t x142 = 3178258;
volatile int32_t t34 = 2;
int8_t x147 = INT8_MIN;
static int8_t x151 = INT8_MIN;
uint16_t x154 = UINT16_MAX;
static int16_t x156 = -694;
volatile uint16_t x164 = 2U;
volatile uint64_t t41 = UINT64_MAX;
uint64_t x176 = UINT64_MAX;
uint8_t x190 = 7U;
volatile uint64_t x191 = UINT64_MAX;
int64_t x208 = -26LL;
uint64_t x210 = 18LLU;
int32_t x221 = 742094025;
uint64_t x223 = 0LLU;
int16_t x225 = -418;
int32_t t52 = 9920383;
volatile uint64_t x229 = UINT64_MAX;
uint16_t x233 = 17639U;
int16_t x236 = 11;
int16_t x238 = INT16_MIN;
volatile uint64_t x239 = 17LLU;
volatile uint64_t t55 = 604721895124LLU;
int32_t x242 = -1;
volatile int16_t x246 = INT16_MIN;
int8_t x248 = 0;
volatile int16_t x251 = -1;
static int32_t x252 = INT32_MAX;
uint32_t x257 = UINT32_MAX;
static uint8_t x259 = 1U;
volatile int32_t t61 = 20;
uint8_t x280 = 21U;
int8_t x281 = 2;
int8_t x282 = -1;
volatile uint32_t t66 = 95925U;
int32_t x291 = INT32_MIN;
int64_t x297 = 20329524423583LL;
int32_t x300 = INT32_MIN;
int16_t x307 = -1410;
int64_t x310 = INT64_MAX;
static int32_t x316 = 1006476;
volatile int64_t x320 = INT64_MIN;
static volatile int64_t t75 = -147844551741LL;
int32_t x330 = INT32_MIN;
int32_t t77 = -425427;
int32_t t78 = 856;
volatile int32_t t80 = 30;
uint32_t t81 = 704720606U;
volatile int32_t x365 = 233855373;
uint8_t x367 = 55U;
static uint64_t t84 = 417400LLU;
uint8_t x381 = 31U;
int64_t x385 = -249369718LL;
static int16_t x386 = INT16_MIN;
int64_t t87 = 99369989521LL;
int64_t x390 = INT64_MIN;
uint64_t x393 = 286504406366651545LLU;
volatile int64_t x402 = INT64_MAX;
int32_t t91 = 811291144;
int64_t x409 = 136094641125212733LL;
static int8_t x420 = 1;
int32_t x426 = 12698615;
int8_t x428 = INT8_MAX;
volatile int16_t x437 = 31;
uint32_t x449 = UINT32_MAX;
int32_t x454 = INT32_MAX;
volatile int32_t x457 = -1;
int16_t x473 = -6335;
int16_t x477 = 12;
volatile uint32_t x480 = 1586997104U;
static volatile uint32_t t108 = 1893857389U;
uint32_t t110 = 115050354U;
static uint32_t x495 = UINT32_MAX;
volatile uint32_t t112 = 0U;
static int16_t x503 = 24;
static int8_t x504 = INT8_MAX;
int16_t x507 = INT16_MIN;
int16_t x508 = INT16_MAX;
static int32_t t116 = -877;
int16_t x522 = INT16_MAX;
int64_t x525 = INT64_MIN;
int64_t t119 = 29151747889208LL;
static int8_t x530 = 6;
int64_t x540 = -3207648286268LL;
int64_t x543 = -53LL;
int64_t x548 = INT64_MAX;
volatile int8_t x550 = INT8_MAX;
uint16_t x552 = UINT16_MAX;
volatile int32_t t124 = 21166888;
static volatile int64_t x568 = INT64_MAX;
int8_t x569 = -1;
uint16_t x570 = 0U;
volatile uint32_t x574 = 34435615U;
int16_t x579 = INT16_MAX;
volatile int16_t x581 = INT16_MAX;
int8_t x582 = 29;
int32_t x593 = INT32_MIN;
int8_t x595 = INT8_MAX;
volatile int64_t x597 = -732114850LL;
uint32_t x602 = 521U;
int32_t x605 = INT32_MAX;
uint8_t x609 = 9U;
volatile uint32_t x610 = 1U;
volatile int64_t x614 = 5779LL;
static int32_t t138 = 6;
static uint8_t x621 = 39U;
uint64_t x629 = 77LLU;
uint16_t x632 = 8U;
uint64_t x633 = 1767LLU;
static uint16_t x637 = UINT16_MAX;
static int32_t x647 = INT32_MIN;
static int32_t x649 = -1;
static int8_t x655 = INT8_MIN;
uint32_t x664 = UINT32_MAX;
volatile int64_t t149 = -8690439597641LL;
volatile uint8_t x669 = UINT8_MAX;
int64_t x671 = INT64_MIN;
uint8_t x683 = UINT8_MAX;
int32_t x685 = -1;
uint32_t t154 = 3049U;
int64_t x692 = -1LL;
volatile uint8_t x696 = UINT8_MAX;
int32_t t156 = 1717;
int64_t x703 = -1LL;
int16_t x705 = 3;
volatile int8_t x706 = 1;
volatile uint8_t x711 = 0U;
uint64_t x719 = 160563LLU;
int32_t t162 = 2304313;
uint64_t t164 = 2322968242212113LLU;
static int8_t x736 = INT8_MIN;
static uint32_t x738 = 22808U;
int8_t x740 = 0;
int16_t x748 = INT16_MIN;
int32_t t169 = 4171078;
uint64_t x757 = 90110LLU;
uint64_t t170 = 16465899728516LLU;
int16_t x761 = INT16_MIN;
uint16_t x764 = 7100U;
uint32_t x766 = 16380570U;
int32_t x768 = -1;
uint64_t x775 = UINT64_MAX;
volatile int64_t t174 = -2889157344933LL;
int8_t x780 = 3;
static volatile uint64_t t175 = 11994232491LLU;
int64_t x783 = -32821LL;
uint16_t x786 = UINT16_MAX;
int32_t t177 = -4489;
uint16_t x793 = 0U;
int16_t x796 = -1;
int8_t x797 = INT8_MIN;
int16_t x799 = 819;
uint16_t x801 = 37U;
int64_t t182 = -366LL;
int64_t x813 = 1922404LL;
volatile int32_t x816 = 2264;
uint64_t x820 = UINT64_MAX;
static int16_t x825 = INT16_MIN;
volatile uint8_t x828 = 5U;
static int16_t x831 = INT16_MIN;
volatile int16_t x839 = 12;
uint8_t x840 = 0U;
volatile uint16_t x841 = 3U;
int8_t x844 = -24;
volatile int32_t t190 = 1196168;
int8_t x847 = -1;
int32_t x848 = 67854;
uint64_t t192 = 0LLU;
int16_t x856 = -938;
static int32_t t193 = -158363;
int64_t x859 = INT64_MIN;
uint8_t x865 = 16U;
volatile int32_t x866 = INT32_MAX;
int8_t x868 = INT8_MAX;
int32_t x871 = INT32_MIN;
int64_t x875 = INT64_MIN;
uint8_t x879 = 0U;


void f0(void) {
    	uint8_t x1 = UINT8_MAX;
	int16_t x2 = INT16_MIN;
	static int32_t x3 = -1;
	static volatile int32_t t0 = 8141;

    t0 = ((x1*(x2!=x3))+x4);

    if (t0 != 256) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MIN;
	int32_t x6 = INT32_MIN;
	volatile int16_t x8 = INT16_MAX;

    t1 = ((x5*(x6!=x7))+x8);

    if (t1 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x10 = INT16_MAX;
	volatile int64_t x11 = -357674457994284LL;
	int16_t x12 = INT16_MIN;
	volatile int32_t t2 = 499;

    t2 = ((x9*(x10!=x11))+x12);

    if (t2 != -32896) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = 13U;
	static int8_t x15 = INT8_MAX;
	uint8_t x16 = 5U;
	static int32_t t3 = 16027;

    t3 = ((x13*(x14!=x15))+x16);

    if (t3 != 18) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint32_t x20 = UINT32_MAX;

    t4 = ((x17*(x18!=x19))+x20);

    if (t4 != 123489U) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int8_t x26 = 4;
	uint8_t x27 = 2U;
	static uint16_t x28 = 7U;
	volatile int32_t t5 = -1;

    t5 = ((x25*(x26!=x27))+x28);

    if (t5 != 6) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x29 = UINT32_MAX;
	int64_t x31 = 455797LL;
	static volatile int32_t x32 = 54201018;
	uint32_t t6 = 0U;

    t6 = ((x29*(x30!=x31))+x32);

    if (t6 != 54201017U) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x34 = UINT32_MAX;
	uint8_t x35 = 0U;
	int8_t x36 = -1;
	uint64_t t7 = 1077920129671LLU;

    t7 = ((x33*(x34!=x35))+x36);

    if (t7 != 535063199986LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int64_t x37 = -26613837497LL;
	uint32_t x38 = 0U;
	int16_t x39 = INT16_MAX;
	volatile int64_t x40 = 125342441LL;
	volatile int64_t t8 = 40224052LL;

    t8 = ((x37*(x38!=x39))+x40);

    if (t8 != -26488495056LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x41 = 310442;
	uint16_t x42 = 2U;
	uint64_t x43 = 131116250LLU;

    t9 = ((x41*(x42!=x43))+x44);

    if (t9 != 277674) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x45 = INT64_MAX;
	volatile int32_t x46 = 274799;
	uint64_t x47 = 48LLU;
	int16_t x48 = INT16_MIN;
	int64_t t10 = -1539LL;

    t10 = ((x45*(x46!=x47))+x48);

    if (t10 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x51 = INT64_MIN;
	int8_t x52 = INT8_MAX;
	static volatile uint64_t t11 = 111193659LLU;

    t11 = ((x49*(x50!=x51))+x52);

    if (t11 != 52751LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x53 = INT16_MIN;
	static uint64_t x54 = UINT64_MAX;
	int8_t x55 = -1;
	int64_t x56 = INT64_MIN;
	volatile int64_t t12 = INT64_MIN;

    t12 = ((x53*(x54!=x55))+x56);

    if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x57 = 7U;
	uint64_t x58 = 57725456LLU;
	volatile int8_t x59 = 0;
	volatile int16_t x60 = 7132;

    t13 = ((x57*(x58!=x59))+x60);

    if (t13 != 7139) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x61 = 1;
	int16_t x62 = 60;
	uint8_t x63 = 0U;
	int8_t x64 = INT8_MIN;
	static int32_t t14 = -950411;

    t14 = ((x61*(x62!=x63))+x64);

    if (t14 != -127) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x65 = -1;
	static int16_t x66 = -11793;
	uint64_t x67 = 7753500654481823LLU;
	uint32_t x68 = UINT32_MAX;
	uint32_t t15 = 452U;

    t15 = ((x65*(x66!=x67))+x68);

    if (t15 != 4294967294U) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint32_t x69 = 28U;
	int8_t x70 = INT8_MAX;
	int8_t x71 = INT8_MIN;
	int8_t x72 = -1;
	uint32_t t16 = 6294U;

    t16 = ((x69*(x70!=x71))+x72);

    if (t16 != 27U) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x75 = INT64_MIN;
	volatile int32_t t17 = -65;

    t17 = ((x73*(x74!=x75))+x76);

    if (t17 != 6) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x77 = -1;
	int8_t x79 = INT8_MAX;
	int32_t t18 = 8;

    t18 = ((x77*(x78!=x79))+x80);

    if (t18 != 32766) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x81 = INT16_MIN;
	volatile int16_t x82 = -1;
	uint32_t x83 = UINT32_MAX;
	int16_t x84 = INT16_MAX;

    t19 = ((x81*(x82!=x83))+x84);

    if (t19 != 32767) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x85 = -1;
	volatile int16_t x86 = INT16_MIN;
	volatile int16_t x87 = INT16_MIN;
	int32_t x88 = INT32_MAX;

    t20 = ((x85*(x86!=x87))+x88);

    if (t20 != INT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x89 = INT8_MIN;
	uint8_t x90 = UINT8_MAX;
	uint8_t x92 = 39U;
	volatile int32_t t21 = 25490903;

    t21 = ((x89*(x90!=x91))+x92);

    if (t21 != -89) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x96 = 12413LLU;

    t22 = ((x93*(x94!=x95))+x96);

    if (t22 != 77948LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint16_t x97 = 30U;
	uint64_t x98 = 109165275937339LLU;
	uint64_t x99 = 174202242332873226LLU;
	int32_t t23 = 4844;

    t23 = ((x97*(x98!=x99))+x100);

    if (t23 != 59) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x101 = UINT64_MAX;
	uint32_t x103 = UINT32_MAX;
	int32_t x104 = -260247775;
	static uint64_t t24 = 9225960982677LLU;

    t24 = ((x101*(x102!=x103))+x104);

    if (t24 != 18446744073449303840LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x105 = INT16_MIN;
	volatile int64_t x107 = INT64_MIN;
	int32_t x108 = -3381707;
	volatile int32_t t25 = -22849938;

    t25 = ((x105*(x106!=x107))+x108);

    if (t25 != -3414475) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint64_t x109 = 564406502861136LLU;
	uint16_t x110 = UINT16_MAX;
	static uint16_t x111 = 1U;
	uint8_t x112 = UINT8_MAX;

    t26 = ((x109*(x110!=x111))+x112);

    if (t26 != 564406502861391LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x113 = 431476LLU;
	volatile int8_t x114 = INT8_MIN;
	static int64_t x115 = INT64_MAX;
	int64_t x116 = -23LL;
	volatile uint64_t t27 = 164LLU;

    t27 = ((x113*(x114!=x115))+x116);

    if (t27 != 431453LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x117 = -1;
	volatile int32_t x118 = INT32_MIN;
	int16_t x119 = INT16_MIN;
	int64_t x120 = INT64_MAX;
	int64_t t28 = 101062963977LL;

    t28 = ((x117*(x118!=x119))+x120);

    if (t28 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x121 = 690;
	int8_t x122 = INT8_MIN;
	uint16_t x123 = UINT16_MAX;
	int32_t x124 = INT32_MIN;
	int32_t t29 = 140;

    t29 = ((x121*(x122!=x123))+x124);

    if (t29 != -2147482958) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x126 = INT16_MAX;
	int16_t x127 = INT16_MIN;
	int16_t x128 = 301;

    t30 = ((x125*(x126!=x127))+x128);

    if (t30 != -9223372036854775507LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x129 = INT32_MIN;
	uint64_t x132 = UINT64_MAX;
	uint64_t t31 = 7072672225LLU;

    t31 = ((x129*(x130!=x131))+x132);

    if (t31 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x133 = 92084786U;
	int32_t x134 = 2437;
	int8_t x135 = INT8_MIN;
	uint8_t x136 = 7U;
	uint32_t t32 = 14420U;

    t32 = ((x133*(x134!=x135))+x136);

    if (t32 != 92084793U) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x138 = INT64_MIN;
	volatile uint8_t x140 = 0U;
	int32_t t33 = -111869;

    t33 = ((x137*(x138!=x139))+x140);

    if (t33 != -119) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x141 = -1;
	int16_t x143 = INT16_MAX;
	int8_t x144 = 1;

    t34 = ((x141*(x142!=x143))+x144);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint32_t x145 = UINT32_MAX;
	volatile uint16_t x146 = 1U;
	int32_t x148 = INT32_MAX;
	volatile uint32_t t35 = 273U;

    t35 = ((x145*(x146!=x147))+x148);

    if (t35 != 2147483646U) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x149 = -343405115585733LL;
	uint8_t x150 = UINT8_MAX;
	static int16_t x152 = INT16_MAX;
	int64_t t36 = 16479LL;

    t36 = ((x149*(x150!=x151))+x152);

    if (t36 != -343405115552966LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x153 = 3549U;
	int64_t x155 = INT64_MAX;
	int32_t t37 = -810;

    t37 = ((x153*(x154!=x155))+x156);

    if (t37 != 2855) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x157 = 1LL;
	uint64_t x158 = 1006059078356009798LLU;
	int16_t x159 = 19;
	int64_t x160 = -48423LL;
	volatile int64_t t38 = -5692564939488LL;

    t38 = ((x157*(x158!=x159))+x160);

    if (t38 != -48422LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x161 = -3984;
	int64_t x162 = INT64_MIN;
	int64_t x163 = INT64_MIN;
	int32_t t39 = 99205;

    t39 = ((x161*(x162!=x163))+x164);

    if (t39 != 2) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x165 = INT8_MAX;
	uint16_t x166 = UINT16_MAX;
	volatile uint32_t x167 = 6863U;
	int32_t x168 = 323;
	static int32_t t40 = -3342;

    t40 = ((x165*(x166!=x167))+x168);

    if (t40 != 450) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint16_t x169 = 5U;
	volatile int32_t x170 = -1;
	static int8_t x171 = -1;
	static volatile uint64_t x172 = UINT64_MAX;

    t41 = ((x169*(x170!=x171))+x172);

    if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x173 = -1LL;
	int8_t x174 = INT8_MIN;
	int8_t x175 = INT8_MIN;
	uint64_t t42 = UINT64_MAX;

    t42 = ((x173*(x174!=x175))+x176);

    if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x177 = INT32_MIN;
	static int64_t x178 = -1LL;
	volatile int32_t x179 = INT32_MIN;
	volatile uint32_t x180 = 140038004U;
	volatile uint32_t t43 = 395U;

    t43 = ((x177*(x178!=x179))+x180);

    if (t43 != 2287521652U) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x181 = 100379312510LL;
	static uint8_t x182 = 1U;
	volatile int32_t x183 = INT32_MIN;
	uint32_t x184 = 497U;
	int64_t t44 = -1609832545801LL;

    t44 = ((x181*(x182!=x183))+x184);

    if (t44 != 100379313007LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x185 = UINT64_MAX;
	uint8_t x186 = 1U;
	int16_t x187 = INT16_MIN;
	volatile int64_t x188 = -1LL;
	uint64_t t45 = 497129325LLU;

    t45 = ((x185*(x186!=x187))+x188);

    if (t45 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x189 = -247;
	int16_t x192 = -1;
	int32_t t46 = 7318;

    t46 = ((x189*(x190!=x191))+x192);

    if (t46 != -248) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x193 = -1;
	int8_t x194 = 33;
	int16_t x195 = -19;
	static uint8_t x196 = UINT8_MAX;
	int32_t t47 = -193115396;

    t47 = ((x193*(x194!=x195))+x196);

    if (t47 != 254) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x205 = UINT8_MAX;
	static int32_t x206 = INT32_MIN;
	int8_t x207 = INT8_MIN;
	volatile int64_t t48 = -3272LL;

    t48 = ((x205*(x206!=x207))+x208);

    if (t48 != 229LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x209 = 11685U;
	uint16_t x211 = 79U;
	uint16_t x212 = 18U;
	static int32_t t49 = -3;

    t49 = ((x209*(x210!=x211))+x212);

    if (t49 != 11703) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x217 = INT8_MAX;
	int8_t x218 = INT8_MAX;
	static int8_t x219 = INT8_MIN;
	int8_t x220 = -7;
	int32_t t50 = 3587;

    t50 = ((x217*(x218!=x219))+x220);

    if (t50 != 120) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile uint32_t x222 = 364677336U;
	int8_t x224 = 29;
	static int32_t t51 = 1;

    t51 = ((x221*(x222!=x223))+x224);

    if (t51 != 742094054) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x226 = -27LL;
	uint64_t x227 = 179930LLU;
	int8_t x228 = 1;

    t52 = ((x225*(x226!=x227))+x228);

    if (t52 != -417) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x230 = INT16_MIN;
	static uint16_t x231 = 1139U;
	uint64_t x232 = UINT64_MAX;
	volatile uint64_t t53 = 1003812403424346LLU;

    t53 = ((x229*(x230!=x231))+x232);

    if (t53 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x234 = INT8_MIN;
	static volatile uint16_t x235 = 26489U;
	volatile int32_t t54 = -8679588;

    t54 = ((x233*(x234!=x235))+x236);

    if (t54 != 17650) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x237 = UINT64_MAX;
	int8_t x240 = INT8_MIN;

    t55 = ((x237*(x238!=x239))+x240);

    if (t55 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x241 = INT64_MIN;
	volatile uint32_t x243 = 189484U;
	int8_t x244 = INT8_MAX;
	int64_t t56 = -3078054484LL;

    t56 = ((x241*(x242!=x243))+x244);

    if (t56 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x245 = 1;
	static int64_t x247 = INT64_MAX;
	static volatile int32_t t57 = -5316;

    t57 = ((x245*(x246!=x247))+x248);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x249 = 22U;
	volatile int64_t x250 = -1LL;
	volatile int32_t t58 = INT32_MAX;

    t58 = ((x249*(x250!=x251))+x252);

    if (t58 != INT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x253 = 20LL;
	int8_t x254 = -1;
	uint32_t x255 = UINT32_MAX;
	int8_t x256 = INT8_MIN;
	volatile int64_t t59 = -6834874378722856LL;

    t59 = ((x253*(x254!=x255))+x256);

    if (t59 != -128LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x258 = 6U;
	int64_t x260 = -125771LL;
	volatile int64_t t60 = 211706248219677924LL;

    t60 = ((x257*(x258!=x259))+x260);

    if (t60 != 4294841524LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x261 = INT16_MIN;
	int32_t x262 = INT32_MIN;
	uint64_t x263 = 3LLU;
	volatile int32_t x264 = -11813255;

    t61 = ((x261*(x262!=x263))+x264);

    if (t61 != -11846023) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x269 = INT8_MIN;
	int64_t x270 = 92LL;
	volatile uint64_t x271 = UINT64_MAX;
	uint64_t x272 = 1592068LLU;
	uint64_t t62 = 967LLU;

    t62 = ((x269*(x270!=x271))+x272);

    if (t62 != 1591940LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint32_t x273 = 1U;
	int16_t x274 = 1457;
	int32_t x275 = 28731;
	uint8_t x276 = UINT8_MAX;
	volatile uint32_t t63 = 1993788420U;

    t63 = ((x273*(x274!=x275))+x276);

    if (t63 != 256U) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x277 = 25544U;
	int8_t x278 = -1;
	volatile int32_t x279 = -1;
	volatile int32_t t64 = -61460;

    t64 = ((x277*(x278!=x279))+x280);

    if (t64 != 21) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x283 = INT64_MIN;
	int8_t x284 = -12;
	volatile int32_t t65 = 1146101;

    t65 = ((x281*(x282!=x283))+x284);

    if (t65 != -10) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x285 = 149320U;
	int32_t x286 = INT32_MAX;
	int64_t x287 = INT64_MIN;
	uint32_t x288 = 2835U;

    t66 = ((x285*(x286!=x287))+x288);

    if (t66 != 152155U) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x289 = INT64_MIN;
	volatile int8_t x290 = INT8_MIN;
	uint64_t x292 = 174439559LLU;
	volatile uint64_t t67 = 13327698725646478LLU;

    t67 = ((x289*(x290!=x291))+x292);

    if (t67 != 9223372037029215367LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x293 = INT16_MAX;
	int64_t x294 = -1LL;
	static volatile int16_t x295 = -3;
	static int32_t x296 = 4;
	volatile int32_t t68 = -262120;

    t68 = ((x293*(x294!=x295))+x296);

    if (t68 != 32771) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint16_t x298 = 13303U;
	static uint8_t x299 = UINT8_MAX;
	volatile int64_t t69 = -1645220339573217396LL;

    t69 = ((x297*(x298!=x299))+x300);

    if (t69 != 20327376939935LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x301 = INT8_MAX;
	uint64_t x302 = 803931963510292LLU;
	int16_t x303 = -102;
	uint32_t x304 = UINT32_MAX;
	static volatile uint32_t t70 = 1U;

    t70 = ((x301*(x302!=x303))+x304);

    if (t70 != 126U) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x305 = INT32_MIN;
	volatile int8_t x306 = INT8_MIN;
	static uint16_t x308 = UINT16_MAX;
	volatile int32_t t71 = -43;

    t71 = ((x305*(x306!=x307))+x308);

    if (t71 != -2147418113) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x309 = INT32_MIN;
	int16_t x311 = INT16_MAX;
	uint64_t x312 = 6LLU;
	uint64_t t72 = 2101378823LLU;

    t72 = ((x309*(x310!=x311))+x312);

    if (t72 != 18446744071562067974LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x313 = INT32_MIN;
	volatile uint8_t x314 = UINT8_MAX;
	uint8_t x315 = 2U;
	static volatile int32_t t73 = 86;

    t73 = ((x313*(x314!=x315))+x316);

    if (t73 != -2146477172) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x317 = INT8_MAX;
	int16_t x318 = INT16_MIN;
	int64_t x319 = INT64_MIN;
	int64_t t74 = 3076275156487291690LL;

    t74 = ((x317*(x318!=x319))+x320);

    if (t74 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint16_t x321 = 20916U;
	volatile int32_t x322 = -1;
	int64_t x323 = INT64_MAX;
	int64_t x324 = -2089566168279718573LL;

    t75 = ((x321*(x322!=x323))+x324);

    if (t75 != -2089566168279697657LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x325 = 0U;
	uint8_t x326 = UINT8_MAX;
	int64_t x327 = -1LL;
	static int32_t x328 = -1;
	static volatile int32_t t76 = 127148;

    t76 = ((x325*(x326!=x327))+x328);

    if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x329 = -4;
	int64_t x331 = 463099LL;
	int8_t x332 = 3;

    t77 = ((x329*(x330!=x331))+x332);

    if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x341 = -1;
	volatile int8_t x342 = INT8_MIN;
	static volatile int32_t x343 = INT32_MIN;
	static uint16_t x344 = 31U;

    t78 = ((x341*(x342!=x343))+x344);

    if (t78 != 30) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x345 = INT8_MIN;
	uint16_t x346 = 585U;
	int16_t x347 = INT16_MAX;
	uint8_t x348 = UINT8_MAX;
	volatile int32_t t79 = 351580734;

    t79 = ((x345*(x346!=x347))+x348);

    if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x357 = INT8_MAX;
	int16_t x358 = 7866;
	int64_t x359 = INT64_MIN;
	static int16_t x360 = 10;

    t80 = ((x357*(x358!=x359))+x360);

    if (t80 != 137) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x361 = UINT32_MAX;
	int16_t x362 = INT16_MAX;
	int16_t x363 = -799;
	int32_t x364 = INT32_MAX;

    t81 = ((x361*(x362!=x363))+x364);

    if (t81 != 2147483646U) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x366 = 5;
	uint8_t x368 = 0U;
	int32_t t82 = 380;

    t82 = ((x365*(x366!=x367))+x368);

    if (t82 != 233855373) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x369 = INT32_MIN;
	volatile int64_t x370 = INT64_MIN;
	int16_t x371 = -1;
	int8_t x372 = INT8_MAX;
	volatile int32_t t83 = 297077;

    t83 = ((x369*(x370!=x371))+x372);

    if (t83 != -2147483521) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x373 = INT16_MIN;
	volatile uint64_t x374 = 2056112LLU;
	static volatile int8_t x375 = -1;
	uint64_t x376 = 17797401416794135LLU;

    t84 = ((x373*(x374!=x375))+x376);

    if (t84 != 17797401416761367LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x377 = -38;
	uint8_t x378 = 1U;
	int32_t x379 = -1;
	int64_t x380 = -1LL;
	volatile int64_t t85 = -97753166LL;

    t85 = ((x377*(x378!=x379))+x380);

    if (t85 != -39LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x382 = INT16_MIN;
	static int16_t x383 = INT16_MAX;
	static int16_t x384 = -1;
	int32_t t86 = 23776079;

    t86 = ((x381*(x382!=x383))+x384);

    if (t86 != 30) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint64_t x387 = 7541879924083226LLU;
	volatile uint16_t x388 = 2U;

    t87 = ((x385*(x386!=x387))+x388);

    if (t87 != -249369716LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x389 = -1;
	int32_t x391 = INT32_MIN;
	int64_t x392 = INT64_MAX;
	volatile int64_t t88 = 170067445327797LL;

    t88 = ((x389*(x390!=x391))+x392);

    if (t88 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x394 = -8046101LL;
	static uint8_t x395 = UINT8_MAX;
	int32_t x396 = -1;
	uint64_t t89 = 62198LLU;

    t89 = ((x393*(x394!=x395))+x396);

    if (t89 != 286504406366651544LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint64_t x397 = 2649055349784979162LLU;
	int8_t x398 = -4;
	int16_t x399 = -1;
	uint8_t x400 = 3U;
	static volatile uint64_t t90 = 10382283786LLU;

    t90 = ((x397*(x398!=x399))+x400);

    if (t90 != 2649055349784979165LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x401 = -1;
	static volatile int16_t x403 = INT16_MIN;
	uint8_t x404 = 6U;

    t91 = ((x401*(x402!=x403))+x404);

    if (t91 != 5) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x405 = INT32_MIN;
	volatile uint64_t x406 = UINT64_MAX;
	volatile int8_t x407 = INT8_MIN;
	int8_t x408 = 10;
	static int32_t t92 = -143443;

    t92 = ((x405*(x406!=x407))+x408);

    if (t92 != -2147483638) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x410 = -1LL;
	uint16_t x411 = UINT16_MAX;
	int64_t x412 = INT64_MIN;
	static volatile int64_t t93 = -8601LL;

    t93 = ((x409*(x410!=x411))+x412);

    if (t93 != -9087277395729563075LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x413 = -1;
	static uint8_t x414 = UINT8_MAX;
	int8_t x415 = INT8_MIN;
	int16_t x416 = -552;
	int32_t t94 = 16622637;

    t94 = ((x413*(x414!=x415))+x416);

    if (t94 != -553) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x417 = 126320406;
	int32_t x418 = INT32_MIN;
	uint32_t x419 = 124104U;
	int32_t t95 = -404304272;

    t95 = ((x417*(x418!=x419))+x420);

    if (t95 != 126320407) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint64_t x421 = UINT64_MAX;
	static int16_t x422 = INT16_MIN;
	uint16_t x423 = 0U;
	volatile int32_t x424 = INT32_MAX;
	volatile uint64_t t96 = 7815650LLU;

    t96 = ((x421*(x422!=x423))+x424);

    if (t96 != 2147483646LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x425 = 432097674LLU;
	int64_t x427 = 14966560596LL;
	static volatile uint64_t t97 = 1486166502070LLU;

    t97 = ((x425*(x426!=x427))+x428);

    if (t97 != 432097801LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x433 = INT8_MIN;
	int8_t x434 = INT8_MIN;
	static int32_t x435 = -1;
	uint8_t x436 = UINT8_MAX;
	volatile int32_t t98 = 236174115;

    t98 = ((x433*(x434!=x435))+x436);

    if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x438 = INT8_MAX;
	int8_t x439 = -1;
	static int8_t x440 = -1;
	int32_t t99 = -6266;

    t99 = ((x437*(x438!=x439))+x440);

    if (t99 != 30) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x441 = 820955LLU;
	int32_t x442 = -3;
	static int32_t x443 = INT32_MIN;
	static int16_t x444 = -1;
	uint64_t t100 = 103946394LLU;

    t100 = ((x441*(x442!=x443))+x444);

    if (t100 != 820954LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x445 = INT32_MAX;
	uint64_t x446 = 64025288249LLU;
	static int8_t x447 = -1;
	int8_t x448 = INT8_MIN;
	volatile int32_t t101 = -592800650;

    t101 = ((x445*(x446!=x447))+x448);

    if (t101 != 2147483519) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint32_t x450 = 2U;
	int8_t x451 = 7;
	uint16_t x452 = 16293U;
	uint32_t t102 = 82773323U;

    t102 = ((x449*(x450!=x451))+x452);

    if (t102 != 16292U) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x453 = 0;
	volatile uint8_t x455 = UINT8_MAX;
	int16_t x456 = INT16_MIN;
	static volatile int32_t t103 = 8861323;

    t103 = ((x453*(x454!=x455))+x456);

    if (t103 != -32768) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x458 = -1;
	uint8_t x459 = UINT8_MAX;
	static uint32_t x460 = 181717U;
	volatile uint32_t t104 = 243132U;

    t104 = ((x457*(x458!=x459))+x460);

    if (t104 != 181716U) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x461 = 1U;
	int8_t x462 = INT8_MIN;
	int8_t x463 = INT8_MIN;
	int8_t x464 = -1;
	uint32_t t105 = UINT32_MAX;

    t105 = ((x461*(x462!=x463))+x464);

    if (t105 != UINT32_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x469 = -114;
	int16_t x470 = -15;
	int16_t x471 = -1;
	volatile uint16_t x472 = 212U;
	volatile int32_t t106 = -11701376;

    t106 = ((x469*(x470!=x471))+x472);

    if (t106 != 98) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x474 = INT8_MIN;
	int16_t x475 = INT16_MAX;
	int16_t x476 = -10;
	int32_t t107 = 1;

    t107 = ((x473*(x474!=x475))+x476);

    if (t107 != -6345) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x478 = INT8_MAX;
	int8_t x479 = INT8_MIN;

    t108 = ((x477*(x478!=x479))+x480);

    if (t108 != 1586997116U) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x481 = -1864;
	int32_t x482 = -3009;
	int32_t x483 = INT32_MIN;
	int16_t x484 = INT16_MIN;
	volatile int32_t t109 = -137391;

    t109 = ((x481*(x482!=x483))+x484);

    if (t109 != -34632) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile uint32_t x485 = UINT32_MAX;
	volatile uint16_t x486 = 0U;
	static int16_t x487 = -1;
	int16_t x488 = INT16_MAX;

    t110 = ((x485*(x486!=x487))+x488);

    if (t110 != 32766U) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x489 = INT64_MIN;
	uint16_t x490 = 22U;
	volatile int8_t x491 = -4;
	volatile int8_t x492 = INT8_MAX;
	int64_t t111 = -317LL;

    t111 = ((x489*(x490!=x491))+x492);

    if (t111 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint32_t x493 = 33179874U;
	int32_t x494 = INT32_MIN;
	static uint32_t x496 = 58903000U;

    t112 = ((x493*(x494!=x495))+x496);

    if (t112 != 92082874U) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x497 = INT16_MIN;
	uint8_t x498 = 5U;
	volatile int8_t x499 = -3;
	static int64_t x500 = -1LL;
	int64_t t113 = -1136LL;

    t113 = ((x497*(x498!=x499))+x500);

    if (t113 != -32769LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x501 = INT64_MIN;
	int32_t x502 = INT32_MAX;
	volatile int64_t t114 = -1LL;

    t114 = ((x501*(x502!=x503))+x504);

    if (t114 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x505 = INT32_MAX;
	int16_t x506 = INT16_MIN;
	volatile int32_t t115 = 155661356;

    t115 = ((x505*(x506!=x507))+x508);

    if (t115 != 32767) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x509 = -1;
	int8_t x510 = INT8_MIN;
	int64_t x511 = -62041278421498190LL;
	int32_t x512 = INT32_MAX;

    t116 = ((x509*(x510!=x511))+x512);

    if (t116 != 2147483646) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x517 = -1;
	uint8_t x518 = UINT8_MAX;
	uint16_t x519 = 9U;
	int32_t x520 = INT32_MAX;
	static volatile int32_t t117 = 159901188;

    t117 = ((x517*(x518!=x519))+x520);

    if (t117 != 2147483646) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x521 = INT32_MAX;
	int32_t x523 = 752633;
	int64_t x524 = 3LL;
	int64_t t118 = 20747527719708793LL;

    t118 = ((x521*(x522!=x523))+x524);

    if (t118 != 2147483650LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x526 = INT64_MIN;
	int32_t x527 = INT32_MAX;
	volatile int32_t x528 = INT32_MAX;

    t119 = ((x525*(x526!=x527))+x528);

    if (t119 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x529 = -1;
	int16_t x531 = INT16_MIN;
	uint64_t x532 = 229445395201LLU;
	static uint64_t t120 = 11LLU;

    t120 = ((x529*(x530!=x531))+x532);

    if (t120 != 229445395200LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x537 = UINT32_MAX;
	static uint8_t x538 = 35U;
	volatile int64_t x539 = -1125928812553763554LL;
	int64_t t121 = 192016LL;

    t121 = ((x537*(x538!=x539))+x540);

    if (t121 != -3203353318973LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x541 = INT16_MIN;
	int32_t x542 = INT32_MIN;
	static int16_t x544 = INT16_MAX;
	int32_t t122 = -2;

    t122 = ((x541*(x542!=x543))+x544);

    if (t122 != -1) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int16_t x545 = -1;
	int64_t x546 = -1135052397098774787LL;
	volatile int64_t x547 = -19575318LL;
	int64_t t123 = 3LL;

    t123 = ((x545*(x546!=x547))+x548);

    if (t123 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x549 = INT32_MIN;
	int16_t x551 = INT16_MIN;

    t124 = ((x549*(x550!=x551))+x552);

    if (t124 != -2147418113) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x561 = -157673999LL;
	int32_t x562 = INT32_MIN;
	int8_t x563 = INT8_MIN;
	static uint32_t x564 = UINT32_MAX;
	volatile int64_t t125 = 70350LL;

    t125 = ((x561*(x562!=x563))+x564);

    if (t125 != 4137293296LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x565 = -3499807816299695LL;
	int8_t x566 = 25;
	int32_t x567 = INT32_MIN;
	int64_t t126 = -1087284066324438334LL;

    t126 = ((x565*(x566!=x567))+x568);

    if (t126 != 9219872229038476112LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint8_t x571 = 14U;
	int8_t x572 = INT8_MIN;
	volatile int32_t t127 = 30675;

    t127 = ((x569*(x570!=x571))+x572);

    if (t127 != -129) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x573 = 2243U;
	static uint64_t x575 = 38LLU;
	int32_t x576 = 57;
	uint32_t t128 = 6U;

    t128 = ((x573*(x574!=x575))+x576);

    if (t128 != 2300U) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x577 = -527828836;
	int64_t x578 = INT64_MIN;
	static int64_t x580 = 249337504318114052LL;
	int64_t t129 = -2684209LL;

    t129 = ((x577*(x578!=x579))+x580);

    if (t129 != 249337503790285216LL) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x583 = -5;
	int8_t x584 = INT8_MIN;
	int32_t t130 = 885678932;

    t130 = ((x581*(x582!=x583))+x584);

    if (t130 != 32639) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x585 = INT64_MAX;
	uint64_t x586 = UINT64_MAX;
	int64_t x587 = -1LL;
	volatile uint16_t x588 = 13U;
	volatile int64_t t131 = -18348020851LL;

    t131 = ((x585*(x586!=x587))+x588);

    if (t131 != 13LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x589 = INT8_MIN;
	uint32_t x590 = UINT32_MAX;
	uint8_t x591 = 58U;
	volatile uint8_t x592 = 3U;
	volatile int32_t t132 = 145605078;

    t132 = ((x589*(x590!=x591))+x592);

    if (t132 != -125) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint64_t x594 = UINT64_MAX;
	static uint64_t x596 = UINT64_MAX;
	uint64_t t133 = 4505143991LLU;

    t133 = ((x593*(x594!=x595))+x596);

    if (t133 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x598 = -7986;
	uint8_t x599 = 126U;
	static volatile uint8_t x600 = UINT8_MAX;
	volatile int64_t t134 = 251713527750263134LL;

    t134 = ((x597*(x598!=x599))+x600);

    if (t134 != -732114595LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x601 = INT8_MAX;
	static volatile int64_t x603 = INT64_MAX;
	int8_t x604 = -6;
	volatile int32_t t135 = 36531;

    t135 = ((x601*(x602!=x603))+x604);

    if (t135 != 121) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x606 = INT8_MAX;
	uint32_t x607 = 2551U;
	uint64_t x608 = 833962617LLU;
	uint64_t t136 = 6252441139344LLU;

    t136 = ((x605*(x606!=x607))+x608);

    if (t136 != 2981446264LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x611 = INT64_MIN;
	int64_t x612 = 0LL;
	static int64_t t137 = 3227353LL;

    t137 = ((x609*(x610!=x611))+x612);

    if (t137 != 9LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x613 = INT16_MIN;
	uint16_t x615 = UINT16_MAX;
	int8_t x616 = INT8_MIN;

    t138 = ((x613*(x614!=x615))+x616);

    if (t138 != -32896) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x617 = INT16_MAX;
	static int32_t x618 = INT32_MIN;
	int32_t x619 = -1;
	uint8_t x620 = UINT8_MAX;
	volatile int32_t t139 = -246;

    t139 = ((x617*(x618!=x619))+x620);

    if (t139 != 33022) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x622 = INT32_MAX;
	uint32_t x623 = UINT32_MAX;
	int32_t x624 = 0;
	volatile int32_t t140 = -3010;

    t140 = ((x621*(x622!=x623))+x624);

    if (t140 != 39) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x625 = 101U;
	static int8_t x626 = -9;
	volatile int32_t x627 = -1239802;
	int64_t x628 = INT64_MIN;
	volatile int64_t t141 = -2701085766LL;

    t141 = ((x625*(x626!=x627))+x628);

    if (t141 != -9223372036854775707LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x630 = 765U;
	uint32_t x631 = UINT32_MAX;
	static uint64_t t142 = 7414039221963973256LLU;

    t142 = ((x629*(x630!=x631))+x632);

    if (t142 != 85LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x634 = -1;
	int64_t x635 = INT64_MIN;
	volatile int64_t x636 = INT64_MAX;
	volatile uint64_t t143 = 4LLU;

    t143 = ((x633*(x634!=x635))+x636);

    if (t143 != 9223372036854777574LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x638 = UINT8_MAX;
	uint8_t x639 = UINT8_MAX;
	static int64_t x640 = INT64_MAX;
	int64_t t144 = INT64_MAX;

    t144 = ((x637*(x638!=x639))+x640);

    if (t144 != INT64_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint32_t x641 = 281U;
	int8_t x642 = -1;
	int8_t x643 = INT8_MIN;
	static int8_t x644 = INT8_MIN;
	static uint32_t t145 = 118430747U;

    t145 = ((x641*(x642!=x643))+x644);

    if (t145 != 153U) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x645 = INT32_MIN;
	uint32_t x646 = 937721923U;
	uint32_t x648 = 122430850U;
	static volatile uint32_t t146 = 12U;

    t146 = ((x645*(x646!=x647))+x648);

    if (t146 != 2269914498U) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x650 = INT16_MIN;
	volatile uint64_t x651 = UINT64_MAX;
	int8_t x652 = INT8_MIN;
	static int32_t t147 = -801;

    t147 = ((x649*(x650!=x651))+x652);

    if (t147 != -129) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x653 = -1;
	uint16_t x654 = 3644U;
	int64_t x656 = -1LL;
	static int64_t t148 = -9LL;

    t148 = ((x653*(x654!=x655))+x656);

    if (t148 != -2LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x661 = 7555LL;
	uint16_t x662 = 2U;
	int32_t x663 = 0;

    t149 = ((x661*(x662!=x663))+x664);

    if (t149 != 4294974850LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile uint32_t x665 = 61629U;
	volatile int16_t x666 = INT16_MAX;
	int32_t x667 = INT32_MAX;
	int64_t x668 = -117239486LL;
	int64_t t150 = -113112LL;

    t150 = ((x665*(x666!=x667))+x668);

    if (t150 != -117177857LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x670 = 30U;
	static int32_t x672 = 50588573;
	int32_t t151 = 258073;

    t151 = ((x669*(x670!=x671))+x672);

    if (t151 != 50588828) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x677 = 8305115027431LLU;
	int32_t x678 = INT32_MIN;
	volatile uint8_t x679 = 3U;
	uint8_t x680 = UINT8_MAX;
	volatile uint64_t t152 = 1395305580452741396LLU;

    t152 = ((x677*(x678!=x679))+x680);

    if (t152 != 8305115027686LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int32_t x681 = 1712;
	int32_t x682 = INT32_MIN;
	int64_t x684 = INT64_MIN;
	int64_t t153 = 80391002631LL;

    t153 = ((x681*(x682!=x683))+x684);

    if (t153 != -9223372036854774096LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x686 = INT16_MIN;
	uint64_t x687 = 5085096543LLU;
	static uint32_t x688 = 1777U;

    t154 = ((x685*(x686!=x687))+x688);

    if (t154 != 1776U) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x689 = -3581118176990002409LL;
	int8_t x690 = INT8_MIN;
	volatile int32_t x691 = INT32_MIN;
	volatile int64_t t155 = 35947786119334163LL;

    t155 = ((x689*(x690!=x691))+x692);

    if (t155 != -3581118176990002410LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x693 = 13;
	uint16_t x694 = 3U;
	int16_t x695 = INT16_MIN;

    t156 = ((x693*(x694!=x695))+x696);

    if (t156 != 268) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x701 = -1;
	uint32_t x702 = UINT32_MAX;
	static int8_t x704 = INT8_MIN;
	volatile int32_t t157 = -105882;

    t157 = ((x701*(x702!=x703))+x704);

    if (t157 != -129) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x707 = 53496979398LL;
	static int16_t x708 = 222;
	volatile int32_t t158 = -979;

    t158 = ((x705*(x706!=x707))+x708);

    if (t158 != 225) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint64_t x709 = 7632302653152LLU;
	int64_t x710 = -1LL;
	uint8_t x712 = UINT8_MAX;
	uint64_t t159 = 14LLU;

    t159 = ((x709*(x710!=x711))+x712);

    if (t159 != 7632302653407LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x713 = -57436;
	static int64_t x714 = INT64_MIN;
	static int64_t x715 = -1LL;
	volatile int8_t x716 = INT8_MAX;
	volatile int32_t t160 = 108867086;

    t160 = ((x713*(x714!=x715))+x716);

    if (t160 != -57309) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x717 = -2;
	int64_t x718 = 1464094498848LL;
	int8_t x720 = INT8_MIN;
	volatile int32_t t161 = -38691578;

    t161 = ((x717*(x718!=x719))+x720);

    if (t161 != -130) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x721 = 4U;
	int16_t x722 = 1766;
	int64_t x723 = INT64_MIN;
	int32_t x724 = INT32_MIN;

    t162 = ((x721*(x722!=x723))+x724);

    if (t162 != -2147483644) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x725 = -1;
	uint32_t x726 = 21082U;
	int8_t x727 = INT8_MIN;
	volatile int64_t x728 = INT64_MAX;
	static volatile int64_t t163 = 3235452444939986596LL;

    t163 = ((x725*(x726!=x727))+x728);

    if (t163 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x729 = UINT16_MAX;
	uint32_t x730 = UINT32_MAX;
	int8_t x731 = -1;
	static uint64_t x732 = 24731282LLU;

    t164 = ((x729*(x730!=x731))+x732);

    if (t164 != 24731282LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x733 = 7187;
	int32_t x734 = 27630334;
	volatile int64_t x735 = -1LL;
	int32_t t165 = -24279;

    t165 = ((x733*(x734!=x735))+x736);

    if (t165 != 7059) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x737 = INT8_MIN;
	uint32_t x739 = 1U;
	static int32_t t166 = -668956;

    t166 = ((x737*(x738!=x739))+x740);

    if (t166 != -128) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x741 = 9751;
	static volatile int16_t x742 = INT16_MIN;
	volatile int8_t x743 = -1;
	uint8_t x744 = 3U;
	static volatile int32_t t167 = 778619;

    t167 = ((x741*(x742!=x743))+x744);

    if (t167 != 9754) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x745 = -1;
	int8_t x746 = INT8_MIN;
	static int16_t x747 = INT16_MIN;
	static int32_t t168 = -8502;

    t168 = ((x745*(x746!=x747))+x748);

    if (t168 != -32769) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x753 = INT16_MAX;
	int64_t x754 = 163953LL;
	int64_t x755 = INT64_MIN;
	int8_t x756 = -7;

    t169 = ((x753*(x754!=x755))+x756);

    if (t169 != 32760) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x758 = -1LL;
	volatile int64_t x759 = -431335594100LL;
	static int64_t x760 = INT64_MAX;

    t170 = ((x757*(x758!=x759))+x760);

    if (t170 != 9223372036854865917LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x762 = INT32_MIN;
	volatile int64_t x763 = INT64_MIN;
	static volatile int32_t t171 = -434612;

    t171 = ((x761*(x762!=x763))+x764);

    if (t171 != -25668) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x765 = -1;
	uint16_t x767 = 1780U;
	static int32_t t172 = -3911;

    t172 = ((x765*(x766!=x767))+x768);

    if (t172 != -2) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x769 = 22031U;
	volatile uint8_t x770 = 125U;
	uint32_t x771 = UINT32_MAX;
	static int16_t x772 = 1;
	volatile int32_t t173 = -9961912;

    t173 = ((x769*(x770!=x771))+x772);

    if (t173 != 22032) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x773 = 3002394LL;
	int8_t x774 = -21;
	uint8_t x776 = UINT8_MAX;

    t174 = ((x773*(x774!=x775))+x776);

    if (t174 != 3002649LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x777 = 2LLU;
	volatile int64_t x778 = -1LL;
	int16_t x779 = 51;

    t175 = ((x777*(x778!=x779))+x780);

    if (t175 != 5LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x781 = 13206U;
	int32_t x782 = INT32_MAX;
	uint32_t x784 = 11698U;
	volatile uint32_t t176 = 26U;

    t176 = ((x781*(x782!=x783))+x784);

    if (t176 != 24904U) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x785 = 1;
	int64_t x787 = 110760570879LL;
	uint16_t x788 = UINT16_MAX;

    t177 = ((x785*(x786!=x787))+x788);

    if (t177 != 65536) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint64_t x789 = 3944559674050LLU;
	uint16_t x790 = 23897U;
	static volatile int16_t x791 = -2;
	int16_t x792 = INT16_MIN;
	uint64_t t178 = 7339967731856LLU;

    t178 = ((x789*(x790!=x791))+x792);

    if (t178 != 3944559641282LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x794 = 1U;
	volatile uint64_t x795 = UINT64_MAX;
	int32_t t179 = -8;

    t179 = ((x793*(x794!=x795))+x796);

    if (t179 != -1) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint8_t x798 = UINT8_MAX;
	int64_t x800 = 1364613998547352LL;
	int64_t t180 = -16712406690LL;

    t180 = ((x797*(x798!=x799))+x800);

    if (t180 != 1364613998547224LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint64_t x802 = 442728932598798LLU;
	volatile uint16_t x803 = 145U;
	int16_t x804 = INT16_MIN;
	int32_t t181 = -80203293;

    t181 = ((x801*(x802!=x803))+x804);

    if (t181 != -32731) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x809 = UINT8_MAX;
	int16_t x810 = 0;
	int32_t x811 = -457;
	int64_t x812 = -231033LL;

    t182 = ((x809*(x810!=x811))+x812);

    if (t182 != -230778LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x814 = INT8_MIN;
	int64_t x815 = -1LL;
	static int64_t t183 = -4085006597931LL;

    t183 = ((x813*(x814!=x815))+x816);

    if (t183 != 1924668LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x817 = INT32_MIN;
	uint8_t x818 = UINT8_MAX;
	uint64_t x819 = UINT64_MAX;
	uint64_t t184 = 1965578811810LLU;

    t184 = ((x817*(x818!=x819))+x820);

    if (t184 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint32_t x821 = 218964U;
	uint8_t x822 = 4U;
	int16_t x823 = 1;
	volatile uint64_t x824 = UINT64_MAX;
	uint64_t t185 = 90858868175207136LLU;

    t185 = ((x821*(x822!=x823))+x824);

    if (t185 != 218963LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x826 = 81226021U;
	static uint16_t x827 = 22094U;
	int32_t t186 = 7668217;

    t186 = ((x825*(x826!=x827))+x828);

    if (t186 != -32763) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x829 = INT16_MIN;
	int16_t x830 = INT16_MIN;
	int64_t x832 = INT64_MIN;
	static int64_t t187 = INT64_MIN;

    t187 = ((x829*(x830!=x831))+x832);

    if (t187 != INT64_MIN) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x833 = -1LL;
	int32_t x834 = INT32_MIN;
	uint16_t x835 = 303U;
	volatile int32_t x836 = INT32_MIN;
	volatile int64_t t188 = 113LL;

    t188 = ((x833*(x834!=x835))+x836);

    if (t188 != -2147483649LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x837 = INT32_MIN;
	static int64_t x838 = 16673155LL;
	int32_t t189 = INT32_MIN;

    t189 = ((x837*(x838!=x839))+x840);

    if (t189 != INT32_MIN) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int8_t x842 = INT8_MIN;
	int32_t x843 = 43879;

    t190 = ((x841*(x842!=x843))+x844);

    if (t190 != -21) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x845 = INT8_MIN;
	uint32_t x846 = 39431219U;
	int32_t t191 = -11516;

    t191 = ((x845*(x846!=x847))+x848);

    if (t191 != 67726) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint64_t x849 = 52830892152858LLU;
	static uint16_t x850 = 16318U;
	static int16_t x851 = INT16_MIN;
	uint16_t x852 = UINT16_MAX;

    t192 = ((x849*(x850!=x851))+x852);

    if (t192 != 52830892218393LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x853 = 1;
	int64_t x854 = -1LL;
	uint16_t x855 = 338U;

    t193 = ((x853*(x854!=x855))+x856);

    if (t193 != -937) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x857 = 97U;
	volatile int64_t x858 = -923069208260601544LL;
	int16_t x860 = 1115;
	int32_t t194 = -43790198;

    t194 = ((x857*(x858!=x859))+x860);

    if (t194 != 1212) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x861 = INT32_MIN;
	volatile int64_t x862 = INT64_MIN;
	int8_t x863 = 1;
	int32_t x864 = 49;
	volatile int32_t t195 = -1990;

    t195 = ((x861*(x862!=x863))+x864);

    if (t195 != -2147483599) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x867 = 3;
	volatile int32_t t196 = -2993;

    t196 = ((x865*(x866!=x867))+x868);

    if (t196 != 143) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x869 = INT32_MAX;
	int64_t x870 = INT64_MIN;
	int64_t x872 = -77LL;
	int64_t t197 = 129486962540063LL;

    t197 = ((x869*(x870!=x871))+x872);

    if (t197 != 2147483570LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x873 = INT8_MAX;
	uint32_t x874 = 3532857U;
	int64_t x876 = -762936226LL;
	volatile int64_t t198 = 4459951198LL;

    t198 = ((x873*(x874!=x875))+x876);

    if (t198 != -762936099LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint16_t x877 = 90U;
	int16_t x878 = INT16_MIN;
	int8_t x880 = 1;
	int32_t t199 = -35;

    t199 = ((x877*(x878!=x879))+x880);

    if (t199 != 91) { NG(); } else { ; }
	
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


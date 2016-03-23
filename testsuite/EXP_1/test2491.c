
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
uint64_t x3 = 138956LLU;
volatile uint8_t x4 = 75U;
uint64_t x8 = UINT64_MAX;
int8_t x14 = INT8_MIN;
static int32_t t3 = INT32_MAX;
static int64_t x24 = 19822541LL;
int64_t t5 = -18835790203729LL;
static volatile int64_t x26 = INT64_MIN;
static int8_t x28 = INT8_MIN;
static int16_t x36 = -1;
int8_t x42 = INT8_MIN;
int64_t x43 = 5772469082LL;
uint32_t x45 = 399U;
int64_t x54 = INT64_MAX;
int8_t x56 = -1;
volatile uint32_t x64 = 6171971U;
uint32_t t15 = 31192991U;
uint64_t x71 = 162717364LLU;
static volatile int64_t t17 = 3708783099630719577LL;
static int64_t x76 = INT64_MAX;
static volatile int64_t t18 = INT64_MAX;
static volatile uint32_t x77 = 16U;
uint64_t x82 = 268989092653896453LLU;
int32_t t21 = -27132617;
int64_t x93 = INT64_MAX;
int32_t x94 = INT32_MIN;
int8_t x96 = INT8_MIN;
uint32_t x100 = 3849U;
static int16_t x104 = -1;
int8_t x105 = -3;
static uint32_t x111 = 0U;
int8_t x118 = -1;
static volatile int8_t x125 = 6;
int64_t x133 = INT64_MIN;
uint64_t t34 = 128506884258043LLU;
static int32_t x144 = INT32_MAX;
static int32_t t36 = 449;
volatile int64_t x153 = -1LL;
int32_t x157 = INT32_MAX;
static uint32_t x160 = 21U;
uint8_t x171 = 3U;
volatile int8_t x173 = 1;
static uint8_t x174 = 2U;
int32_t x176 = INT32_MIN;
int64_t x178 = -1LL;
static int32_t x188 = 21343308;
volatile uint16_t x189 = 754U;
uint64_t x198 = UINT64_MAX;
int16_t x199 = INT16_MIN;
int32_t t49 = -107795923;
static volatile int32_t x207 = -12;
int8_t x210 = INT8_MAX;
int64_t x215 = INT64_MAX;
static int16_t x218 = -1;
int32_t x247 = 184;
int32_t t62 = 1054781445;
volatile int8_t x255 = INT8_MAX;
int8_t x258 = -48;
int64_t x271 = -4547097825367LL;
volatile uint16_t x274 = 20788U;
uint64_t x280 = 67181093LLU;
uint32_t x281 = 10273U;
static uint8_t x282 = UINT8_MAX;
int64_t x285 = INT64_MIN;
uint8_t x286 = UINT8_MAX;
uint16_t x289 = 45U;
static int32_t t72 = -69;
int8_t x293 = -3;
int16_t x294 = -1;
int8_t x296 = INT8_MAX;
int64_t x297 = -1LL;
int32_t x298 = 58;
int32_t t74 = 1458345;
static uint16_t x304 = 14U;
volatile int8_t x305 = INT8_MAX;
int64_t x308 = INT64_MIN;
int32_t x310 = INT32_MAX;
int16_t x311 = -1016;
static volatile int16_t x313 = INT16_MIN;
uint16_t x315 = 2U;
uint32_t x331 = 220U;
volatile int32_t t84 = -2;
uint16_t x342 = UINT16_MAX;
int16_t x343 = -13;
volatile int64_t x352 = INT64_MIN;
volatile int64_t t87 = INT64_MIN;
uint64_t x353 = 248406LLU;
uint8_t x360 = UINT8_MAX;
int16_t x362 = -9;
static uint16_t x365 = 2U;
uint8_t x366 = UINT8_MAX;
static int64_t x367 = -1LL;
int32_t x370 = 0;
uint32_t x374 = UINT32_MAX;
static uint16_t x376 = 17U;
volatile int32_t t94 = 0;
int32_t x382 = INT32_MIN;
int8_t x388 = 3;
int32_t t97 = 1;
int32_t t98 = 163777;
int64_t x398 = 1LL;
volatile uint64_t x399 = 872891595419806058LLU;
int32_t x400 = -2;
volatile int32_t t99 = 11374;
volatile int32_t t104 = -37807846;
uint8_t x429 = 29U;
volatile int8_t x430 = 5;
int32_t t108 = -235;
static int32_t x441 = -74;
int16_t x447 = INT16_MIN;
static volatile uint32_t x452 = 155U;
volatile int16_t x453 = 1;
volatile int32_t t113 = -60759334;
int64_t x461 = -64178033024441LL;
volatile int8_t x463 = 1;
volatile int32_t t115 = -146;
int64_t x468 = INT64_MIN;
static volatile int64_t t116 = 387861LL;
volatile uint8_t x469 = UINT8_MAX;
volatile int8_t x473 = 1;
uint32_t x478 = 600U;
int16_t x483 = 1;
volatile uint8_t x496 = UINT8_MAX;
volatile int32_t t123 = -6;
volatile int64_t x499 = INT64_MAX;
int32_t x502 = 53270;
uint8_t x503 = 1U;
int16_t x505 = 65;
uint8_t x515 = 62U;
volatile int32_t x517 = INT32_MAX;
int32_t t129 = 64;
static volatile uint16_t x525 = UINT16_MAX;
int32_t x526 = 367;
volatile int32_t x530 = -12345;
int32_t t132 = -10381;
int8_t x535 = -1;
uint64_t x538 = UINT64_MAX;
int16_t x543 = -1;
uint8_t x545 = UINT8_MAX;
int8_t x552 = INT8_MAX;
int32_t t138 = 1895;
int16_t x566 = INT16_MIN;
int32_t x568 = INT32_MAX;
uint32_t x572 = 7U;
volatile uint32_t t142 = 6980766U;
int32_t x576 = INT32_MIN;
volatile int32_t t146 = -490;
int64_t x591 = INT64_MIN;
int64_t x598 = INT64_MAX;
uint16_t x605 = 2U;
int16_t x612 = INT16_MIN;
int16_t x623 = -31;
uint8_t x629 = 0U;
static int64_t x632 = INT64_MAX;
uint64_t x635 = UINT64_MAX;
int16_t x637 = -1;
int64_t x643 = 17633114091670136LL;
volatile int32_t t160 = 17474408;
int64_t x650 = -106356LL;
int8_t x655 = INT8_MAX;
static int8_t x657 = 27;
int32_t t164 = 2983291;
uint16_t x664 = 368U;
int32_t t165 = 476887;
volatile uint8_t x667 = UINT8_MAX;
volatile uint8_t x672 = 0U;
volatile int32_t t169 = -37;
volatile int64_t x686 = INT64_MIN;
static volatile int16_t x692 = INT16_MIN;
uint8_t x693 = UINT8_MAX;
int8_t x694 = -6;
static volatile int16_t x695 = -1;
int8_t x702 = 1;
volatile uint8_t x703 = 55U;
volatile int32_t t176 = 672773;
int8_t x713 = INT8_MAX;
uint8_t x718 = UINT8_MAX;
volatile int64_t t179 = 220LL;
volatile int32_t t180 = -11766;
int32_t x727 = -3194660;
static volatile int32_t x740 = -1819164;
static volatile int64_t t186 = INT64_MIN;
int8_t x751 = 51;
static int8_t x756 = 23;
volatile int32_t t188 = -237;
int64_t x758 = 4061770LL;
int32_t t189 = INT32_MIN;
volatile int32_t x761 = 9590;
static volatile uint16_t x763 = 35U;
uint8_t x765 = 7U;
int16_t x766 = 2093;
volatile int32_t x768 = -1;
int32_t x769 = INT32_MAX;
int32_t t195 = 1719242;
uint64_t x790 = 886151681275LLU;
uint64_t t198 = UINT64_MAX;


void f0(void) {
    	uint64_t x1 = 118472677989097778LLU;
	volatile int32_t t0 = -1;

    t0 = (((x1|x2)<=x3)|x4);

    if (t0 != 75) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = 3223806117LLU;
	static int8_t x6 = INT8_MIN;
	volatile uint16_t x7 = 3U;
	uint64_t t1 = UINT64_MAX;

    t1 = (((x5|x6)<=x7)|x8);

    if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MIN;
	uint16_t x10 = UINT16_MAX;
	int16_t x11 = INT16_MAX;
	static int8_t x12 = -3;
	int32_t t2 = 249646527;

    t2 = (((x9|x10)<=x11)|x12);

    if (t2 != -3) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = 101;
	static uint16_t x15 = 98U;
	volatile int32_t x16 = INT32_MAX;

    t3 = (((x13|x14)<=x15)|x16);

    if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = -1LL;
	int64_t x18 = 5236LL;
	int8_t x19 = -1;
	uint64_t x20 = 8723599570612125LLU;
	uint64_t t4 = 14LLU;

    t4 = (((x17|x18)<=x19)|x20);

    if (t4 != 8723599570612125LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x21 = INT16_MIN;
	static volatile uint32_t x22 = 29U;
	uint64_t x23 = 3343080215LLU;

    t5 = (((x21|x22)<=x23)|x24);

    if (t5 != 19822541LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 45LLU;
	volatile int64_t x27 = -130408LL;
	int32_t t6 = -6906;

    t6 = (((x25|x26)<=x27)|x28);

    if (t6 != -127) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = UINT16_MAX;
	int8_t x30 = INT8_MAX;
	volatile int64_t x31 = INT64_MAX;
	int64_t x32 = -13LL;
	int64_t t7 = 5LL;

    t7 = (((x29|x30)<=x31)|x32);

    if (t7 != -13LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int32_t x33 = 231998861;
	int16_t x34 = -1;
	int8_t x35 = -1;
	static volatile int32_t t8 = -21303473;

    t8 = (((x33|x34)<=x35)|x36);

    if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x37 = -1;
	uint64_t x38 = 982413LLU;
	uint8_t x39 = 22U;
	uint16_t x40 = UINT16_MAX;
	volatile int32_t t9 = 4;

    t9 = (((x37|x38)<=x39)|x40);

    if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = 1U;
	volatile int16_t x44 = INT16_MIN;
	static int32_t t10 = 1;

    t10 = (((x41|x42)<=x43)|x44);

    if (t10 != -32767) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x46 = 61;
	int64_t x47 = INT64_MAX;
	uint8_t x48 = UINT8_MAX;
	int32_t t11 = -6620490;

    t11 = (((x45|x46)<=x47)|x48);

    if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = 1;
	uint8_t x50 = UINT8_MAX;
	uint8_t x51 = 27U;
	int64_t x52 = INT64_MIN;
	volatile int64_t t12 = INT64_MIN;

    t12 = (((x49|x50)<=x51)|x52);

    if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = -1;
	static int32_t x55 = INT32_MIN;
	static int32_t t13 = -286;

    t13 = (((x53|x54)<=x55)|x56);

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = INT64_MIN;
	volatile uint8_t x58 = UINT8_MAX;
	int8_t x59 = INT8_MAX;
	uint8_t x60 = 127U;
	int32_t t14 = -56754762;

    t14 = (((x57|x58)<=x59)|x60);

    if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x61 = INT32_MIN;
	uint8_t x62 = UINT8_MAX;
	volatile int16_t x63 = INT16_MAX;

    t15 = (((x61|x62)<=x63)|x64);

    if (t15 != 6171971U) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = -1;
	int16_t x66 = INT16_MAX;
	int8_t x67 = INT8_MIN;
	uint64_t x68 = 14LLU;
	uint64_t t16 = 1580LLU;

    t16 = (((x65|x66)<=x67)|x68);

    if (t16 != 14LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x69 = UINT32_MAX;
	volatile uint64_t x70 = 4776255474977LLU;
	volatile int64_t x72 = 100914848739LL;

    t17 = (((x69|x70)<=x71)|x72);

    if (t17 != 100914848739LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = INT64_MIN;
	uint16_t x74 = 14U;
	int32_t x75 = -1;

    t18 = (((x73|x74)<=x75)|x76);

    if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x78 = -1;
	static int8_t x79 = -1;
	int16_t x80 = INT16_MIN;
	int32_t t19 = 241354;

    t19 = (((x77|x78)<=x79)|x80);

    if (t19 != -32767) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x81 = -1;
	uint16_t x83 = 14U;
	int64_t x84 = INT64_MAX;
	volatile int64_t t20 = INT64_MAX;

    t20 = (((x81|x82)<=x83)|x84);

    if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint16_t x85 = 227U;
	int16_t x86 = -1;
	uint32_t x87 = 330405998U;
	static uint8_t x88 = 0U;

    t21 = (((x85|x86)<=x87)|x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x89 = -371;
	static volatile int64_t x90 = INT64_MIN;
	static int64_t x91 = INT64_MIN;
	int64_t x92 = INT64_MAX;
	static volatile int64_t t22 = INT64_MAX;

    t22 = (((x89|x90)<=x91)|x92);

    if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x95 = -1;
	int32_t t23 = 3;

    t23 = (((x93|x94)<=x95)|x96);

    if (t23 != -127) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x97 = UINT32_MAX;
	int64_t x98 = INT64_MAX;
	static volatile uint32_t x99 = UINT32_MAX;
	volatile uint32_t t24 = 469770189U;

    t24 = (((x97|x98)<=x99)|x100);

    if (t24 != 3849U) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x101 = -176;
	static int16_t x102 = -6306;
	int16_t x103 = -867;
	int32_t t25 = -11;

    t25 = (((x101|x102)<=x103)|x104);

    if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x106 = UINT16_MAX;
	int16_t x107 = INT16_MAX;
	static volatile uint16_t x108 = 1733U;
	volatile int32_t t26 = -431503;

    t26 = (((x105|x106)<=x107)|x108);

    if (t26 != 1733) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x109 = UINT16_MAX;
	volatile int64_t x110 = INT64_MIN;
	uint64_t x112 = UINT64_MAX;
	uint64_t t27 = UINT64_MAX;

    t27 = (((x109|x110)<=x111)|x112);

    if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = -1;
	int8_t x114 = INT8_MIN;
	uint64_t x115 = UINT64_MAX;
	static uint64_t x116 = UINT64_MAX;
	volatile uint64_t t28 = UINT64_MAX;

    t28 = (((x113|x114)<=x115)|x116);

    if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = INT16_MAX;
	int8_t x119 = INT8_MAX;
	int8_t x120 = INT8_MIN;
	volatile int32_t t29 = -226653763;

    t29 = (((x117|x118)<=x119)|x120);

    if (t29 != -127) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = -1;
	volatile int16_t x122 = INT16_MIN;
	int64_t x123 = 320754LL;
	uint16_t x124 = 3U;
	int32_t t30 = 65125240;

    t30 = (((x121|x122)<=x123)|x124);

    if (t30 != 3) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x126 = INT16_MAX;
	int64_t x127 = INT64_MAX;
	int8_t x128 = -1;
	int32_t t31 = -104;

    t31 = (((x125|x126)<=x127)|x128);

    if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x129 = -7752569748877703LL;
	int16_t x130 = -6;
	volatile uint32_t x131 = 3U;
	int64_t x132 = INT64_MIN;
	static volatile int64_t t32 = -25296964648LL;

    t32 = (((x129|x130)<=x131)|x132);

    if (t32 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x134 = 2533497385LL;
	int16_t x135 = INT16_MAX;
	int8_t x136 = INT8_MAX;
	int32_t t33 = -32;

    t33 = (((x133|x134)<=x135)|x136);

    if (t33 != 127) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = INT32_MIN;
	int32_t x138 = -1;
	int64_t x139 = -1LL;
	uint64_t x140 = 54LLU;

    t34 = (((x137|x138)<=x139)|x140);

    if (t34 != 55LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int8_t x141 = INT8_MIN;
	int32_t x142 = INT32_MIN;
	static int8_t x143 = -33;
	int32_t t35 = INT32_MAX;

    t35 = (((x141|x142)<=x143)|x144);

    if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x145 = INT8_MIN;
	int64_t x146 = INT64_MAX;
	int32_t x147 = -1;
	static int8_t x148 = -1;

    t36 = (((x145|x146)<=x147)|x148);

    if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = -1;
	volatile int64_t x150 = -1LL;
	int8_t x151 = 44;
	int16_t x152 = -11282;
	int32_t t37 = -232454;

    t37 = (((x149|x150)<=x151)|x152);

    if (t37 != -11281) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint16_t x154 = 27U;
	int8_t x155 = INT8_MIN;
	volatile int64_t x156 = -123740809640LL;
	static volatile int64_t t38 = 328721376411771LL;

    t38 = (((x153|x154)<=x155)|x156);

    if (t38 != -123740809640LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x158 = 30U;
	static uint64_t x159 = 65640902LLU;
	static volatile uint32_t t39 = 0U;

    t39 = (((x157|x158)<=x159)|x160);

    if (t39 != 21U) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x161 = INT16_MIN;
	int8_t x162 = INT8_MAX;
	int64_t x163 = -1LL;
	uint32_t x164 = UINT32_MAX;
	volatile uint32_t t40 = UINT32_MAX;

    t40 = (((x161|x162)<=x163)|x164);

    if (t40 != UINT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x165 = INT32_MIN;
	volatile int16_t x166 = -1;
	uint8_t x167 = 10U;
	uint16_t x168 = 11815U;
	static int32_t t41 = 363;

    t41 = (((x165|x166)<=x167)|x168);

    if (t41 != 11815) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = INT32_MIN;
	uint64_t x170 = 44LLU;
	int64_t x172 = -144307013010322LL;
	volatile int64_t t42 = -45470165156832LL;

    t42 = (((x169|x170)<=x171)|x172);

    if (t42 != -144307013010322LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int16_t x175 = 0;
	volatile int32_t t43 = INT32_MIN;

    t43 = (((x173|x174)<=x175)|x176);

    if (t43 != INT32_MIN) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x177 = INT64_MIN;
	static uint64_t x179 = 2654209281LLU;
	int16_t x180 = INT16_MIN;
	int32_t t44 = 26781749;

    t44 = (((x177|x178)<=x179)|x180);

    if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = INT16_MAX;
	int8_t x182 = INT8_MIN;
	int64_t x183 = -37790068LL;
	uint8_t x184 = 0U;
	int32_t t45 = -50428;

    t45 = (((x181|x182)<=x183)|x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile uint32_t x185 = 129308U;
	uint8_t x186 = 6U;
	int32_t x187 = INT32_MIN;
	volatile int32_t t46 = 105;

    t46 = (((x185|x186)<=x187)|x188);

    if (t46 != 21343309) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x190 = INT16_MAX;
	volatile int64_t x191 = 10086464334497LL;
	static uint8_t x192 = 1U;
	volatile int32_t t47 = -7;

    t47 = (((x189|x190)<=x191)|x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = 30194;
	volatile int8_t x194 = -1;
	int32_t x195 = INT32_MIN;
	static volatile uint16_t x196 = UINT16_MAX;
	volatile int32_t t48 = -63;

    t48 = (((x193|x194)<=x195)|x196);

    if (t48 != 65535) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x197 = 18983435U;
	int8_t x200 = INT8_MIN;

    t49 = (((x197|x198)<=x199)|x200);

    if (t49 != -128) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = INT8_MIN;
	uint64_t x202 = 363775967086637LLU;
	static uint8_t x203 = 11U;
	int64_t x204 = INT64_MAX;
	volatile int64_t t50 = INT64_MAX;

    t50 = (((x201|x202)<=x203)|x204);

    if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x205 = INT32_MIN;
	uint8_t x206 = 13U;
	volatile int64_t x208 = -1LL;
	static int64_t t51 = 1532342214064348LL;

    t51 = (((x205|x206)<=x207)|x208);

    if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x209 = UINT8_MAX;
	uint64_t x211 = 58012958687LLU;
	uint64_t x212 = UINT64_MAX;
	static volatile uint64_t t52 = UINT64_MAX;

    t52 = (((x209|x210)<=x211)|x212);

    if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = INT64_MAX;
	uint8_t x214 = 0U;
	static int8_t x216 = 9;
	volatile int32_t t53 = 15937;

    t53 = (((x213|x214)<=x215)|x216);

    if (t53 != 9) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x217 = 5241LLU;
	int64_t x219 = -19851450LL;
	static int32_t x220 = INT32_MIN;
	int32_t t54 = INT32_MIN;

    t54 = (((x217|x218)<=x219)|x220);

    if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x221 = 6U;
	volatile uint64_t x222 = 257228991LLU;
	static int16_t x223 = 0;
	int32_t x224 = -1;
	volatile int32_t t55 = -12650;

    t55 = (((x221|x222)<=x223)|x224);

    if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int16_t x225 = INT16_MIN;
	int8_t x226 = -1;
	volatile uint64_t x227 = UINT64_MAX;
	uint16_t x228 = UINT16_MAX;
	static int32_t t56 = 3973152;

    t56 = (((x225|x226)<=x227)|x228);

    if (t56 != 65535) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x229 = 0LLU;
	uint8_t x230 = 0U;
	int16_t x231 = -1;
	static uint32_t x232 = 25U;
	uint32_t t57 = 1766U;

    t57 = (((x229|x230)<=x231)|x232);

    if (t57 != 25U) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x233 = INT64_MAX;
	int8_t x234 = INT8_MIN;
	uint16_t x235 = 843U;
	int16_t x236 = -1;
	static int32_t t58 = -138841;

    t58 = (((x233|x234)<=x235)|x236);

    if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint8_t x237 = 12U;
	int64_t x238 = INT64_MAX;
	volatile int32_t x239 = INT32_MIN;
	uint32_t x240 = 86785647U;
	static uint32_t t59 = 8724556U;

    t59 = (((x237|x238)<=x239)|x240);

    if (t59 != 86785647U) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x241 = 4193U;
	volatile uint16_t x242 = UINT16_MAX;
	uint8_t x243 = 127U;
	int16_t x244 = INT16_MIN;
	volatile int32_t t60 = 5447;

    t60 = (((x241|x242)<=x243)|x244);

    if (t60 != -32768) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = INT32_MAX;
	static uint64_t x246 = UINT64_MAX;
	static int16_t x248 = 15010;
	int32_t t61 = 445837;

    t61 = (((x245|x246)<=x247)|x248);

    if (t61 != 15010) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x249 = 265U;
	int32_t x250 = -1;
	volatile int16_t x251 = INT16_MIN;
	volatile uint16_t x252 = 9U;

    t62 = (((x249|x250)<=x251)|x252);

    if (t62 != 9) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint64_t x253 = 128679006127LLU;
	uint32_t x254 = UINT32_MAX;
	static int32_t x256 = INT32_MIN;
	static volatile int32_t t63 = INT32_MIN;

    t63 = (((x253|x254)<=x255)|x256);

    if (t63 != INT32_MIN) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x257 = INT32_MAX;
	int16_t x259 = INT16_MAX;
	uint64_t x260 = UINT64_MAX;
	static uint64_t t64 = UINT64_MAX;

    t64 = (((x257|x258)<=x259)|x260);

    if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x261 = -1;
	int16_t x262 = 154;
	static uint32_t x263 = UINT32_MAX;
	uint32_t x264 = 168397581U;
	uint32_t t65 = 1071U;

    t65 = (((x261|x262)<=x263)|x264);

    if (t65 != 168397581U) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = INT16_MIN;
	int64_t x266 = INT64_MAX;
	static int16_t x267 = -1;
	int32_t x268 = INT32_MIN;
	static int32_t t66 = -171706986;

    t66 = (((x265|x266)<=x267)|x268);

    if (t66 != -2147483647) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x269 = -1;
	int32_t x270 = INT32_MAX;
	int8_t x272 = INT8_MAX;
	int32_t t67 = 169;

    t67 = (((x269|x270)<=x271)|x272);

    if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x273 = INT8_MIN;
	uint32_t x275 = 38614386U;
	volatile int64_t x276 = INT64_MIN;
	volatile int64_t t68 = INT64_MIN;

    t68 = (((x273|x274)<=x275)|x276);

    if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x277 = 894169075U;
	int16_t x278 = INT16_MAX;
	volatile int16_t x279 = INT16_MAX;
	static volatile uint64_t t69 = 146096LLU;

    t69 = (((x277|x278)<=x279)|x280);

    if (t69 != 67181093LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x283 = -218521987305951LL;
	int8_t x284 = INT8_MIN;
	volatile int32_t t70 = -355;

    t70 = (((x281|x282)<=x283)|x284);

    if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x287 = 27U;
	static int16_t x288 = INT16_MIN;
	volatile int32_t t71 = 357929588;

    t71 = (((x285|x286)<=x287)|x288);

    if (t71 != -32767) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x290 = INT64_MIN;
	int8_t x291 = -1;
	volatile int16_t x292 = INT16_MIN;

    t72 = (((x289|x290)<=x291)|x292);

    if (t72 != -32767) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x295 = INT32_MIN;
	volatile int32_t t73 = 1;

    t73 = (((x293|x294)<=x295)|x296);

    if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x299 = INT32_MAX;
	static int8_t x300 = -1;

    t74 = (((x297|x298)<=x299)|x300);

    if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x301 = 20U;
	int64_t x302 = INT64_MIN;
	static volatile uint8_t x303 = UINT8_MAX;
	volatile int32_t t75 = -4319;

    t75 = (((x301|x302)<=x303)|x304);

    if (t75 != 15) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint8_t x306 = UINT8_MAX;
	uint8_t x307 = 2U;
	volatile int64_t t76 = INT64_MIN;

    t76 = (((x305|x306)<=x307)|x308);

    if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = INT64_MIN;
	volatile int8_t x312 = -1;
	int32_t t77 = -61340476;

    t77 = (((x309|x310)<=x311)|x312);

    if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x314 = 1639670;
	uint16_t x316 = UINT16_MAX;
	int32_t t78 = -3039103;

    t78 = (((x313|x314)<=x315)|x316);

    if (t78 != 65535) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x317 = INT64_MAX;
	volatile int8_t x318 = INT8_MIN;
	int8_t x319 = -1;
	static uint16_t x320 = UINT16_MAX;
	int32_t t79 = -33329;

    t79 = (((x317|x318)<=x319)|x320);

    if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = INT16_MIN;
	int16_t x322 = 0;
	int64_t x323 = -157292761763460163LL;
	int64_t x324 = -1LL;
	int64_t t80 = -12177568785533LL;

    t80 = (((x321|x322)<=x323)|x324);

    if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x325 = -1LL;
	static uint16_t x326 = 3470U;
	volatile int8_t x327 = INT8_MIN;
	uint32_t x328 = 36037U;
	volatile uint32_t t81 = 1887U;

    t81 = (((x325|x326)<=x327)|x328);

    if (t81 != 36037U) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x329 = INT16_MIN;
	int16_t x330 = -1;
	uint32_t x332 = UINT32_MAX;
	static uint32_t t82 = UINT32_MAX;

    t82 = (((x329|x330)<=x331)|x332);

    if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x333 = INT32_MIN;
	int32_t x334 = 811708;
	static int16_t x335 = INT16_MIN;
	uint64_t x336 = UINT64_MAX;
	volatile uint64_t t83 = UINT64_MAX;

    t83 = (((x333|x334)<=x335)|x336);

    if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = -32;
	static int8_t x338 = INT8_MAX;
	int8_t x339 = INT8_MIN;
	static int16_t x340 = INT16_MAX;

    t84 = (((x337|x338)<=x339)|x340);

    if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x341 = UINT16_MAX;
	uint16_t x344 = 0U;
	volatile int32_t t85 = -529159422;

    t85 = (((x341|x342)<=x343)|x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x345 = INT16_MIN;
	int64_t x346 = INT64_MAX;
	volatile uint32_t x347 = UINT32_MAX;
	static int16_t x348 = INT16_MAX;
	volatile int32_t t86 = 157024;

    t86 = (((x345|x346)<=x347)|x348);

    if (t86 != 32767) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x349 = INT8_MIN;
	uint32_t x350 = UINT32_MAX;
	uint8_t x351 = UINT8_MAX;

    t87 = (((x349|x350)<=x351)|x352);

    if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint64_t x354 = 2046982699839658944LLU;
	int8_t x355 = -1;
	uint16_t x356 = UINT16_MAX;
	int32_t t88 = 4073;

    t88 = (((x353|x354)<=x355)|x356);

    if (t88 != 65535) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = INT8_MIN;
	int8_t x358 = -2;
	volatile int16_t x359 = INT16_MIN;
	volatile int32_t t89 = -1;

    t89 = (((x357|x358)<=x359)|x360);

    if (t89 != 255) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = INT8_MAX;
	uint32_t x363 = 2489313U;
	uint64_t x364 = UINT64_MAX;
	volatile uint64_t t90 = UINT64_MAX;

    t90 = (((x361|x362)<=x363)|x364);

    if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x368 = UINT64_MAX;
	volatile uint64_t t91 = UINT64_MAX;

    t91 = (((x365|x366)<=x367)|x368);

    if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint32_t x369 = 1937U;
	int32_t x371 = -1;
	static uint8_t x372 = UINT8_MAX;
	int32_t t92 = -58628245;

    t92 = (((x369|x370)<=x371)|x372);

    if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x373 = 1U;
	int32_t x375 = INT32_MIN;
	volatile int32_t t93 = 3885;

    t93 = (((x373|x374)<=x375)|x376);

    if (t93 != 17) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x377 = 3;
	int16_t x378 = -6404;
	int32_t x379 = INT32_MIN;
	int16_t x380 = 5;

    t94 = (((x377|x378)<=x379)|x380);

    if (t94 != 5) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x381 = INT64_MIN;
	uint16_t x383 = 28U;
	static volatile uint32_t x384 = 1112312156U;
	uint32_t t95 = 4825333U;

    t95 = (((x381|x382)<=x383)|x384);

    if (t95 != 1112312157U) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x385 = INT64_MAX;
	static int64_t x386 = INT64_MIN;
	int16_t x387 = -1;
	static int32_t t96 = 110262;

    t96 = (((x385|x386)<=x387)|x388);

    if (t96 != 3) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x389 = INT32_MIN;
	static volatile int16_t x390 = -155;
	static volatile int32_t x391 = INT32_MIN;
	uint16_t x392 = UINT16_MAX;

    t97 = (((x389|x390)<=x391)|x392);

    if (t97 != 65535) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint8_t x393 = 1U;
	int8_t x394 = -1;
	int64_t x395 = INT64_MIN;
	int8_t x396 = 26;

    t98 = (((x393|x394)<=x395)|x396);

    if (t98 != 26) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x397 = -1LL;

    t99 = (((x397|x398)<=x399)|x400);

    if (t99 != -2) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = 839;
	uint16_t x402 = UINT16_MAX;
	static int16_t x403 = -1;
	uint8_t x404 = 19U;
	volatile int32_t t100 = -202013;

    t100 = (((x401|x402)<=x403)|x404);

    if (t100 != 19) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x405 = INT16_MIN;
	static int8_t x406 = -1;
	int64_t x407 = -283675LL;
	static int8_t x408 = -2;
	volatile int32_t t101 = 0;

    t101 = (((x405|x406)<=x407)|x408);

    if (t101 != -2) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x409 = INT16_MIN;
	int64_t x410 = INT64_MIN;
	static int64_t x411 = -1LL;
	int8_t x412 = -1;
	volatile int32_t t102 = 48;

    t102 = (((x409|x410)<=x411)|x412);

    if (t102 != -1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = INT8_MAX;
	static uint8_t x414 = 6U;
	int32_t x415 = -2;
	uint32_t x416 = 55U;
	volatile uint32_t t103 = 399794117U;

    t103 = (((x413|x414)<=x415)|x416);

    if (t103 != 55U) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = 4;
	volatile uint32_t x418 = 676U;
	volatile int8_t x419 = -1;
	int32_t x420 = INT32_MIN;

    t104 = (((x417|x418)<=x419)|x420);

    if (t104 != -2147483647) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x421 = INT16_MAX;
	static uint32_t x422 = 58911922U;
	int32_t x423 = INT32_MIN;
	uint64_t x424 = UINT64_MAX;
	volatile uint64_t t105 = UINT64_MAX;

    t105 = (((x421|x422)<=x423)|x424);

    if (t105 != UINT64_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x425 = INT32_MAX;
	volatile int64_t x426 = -1LL;
	static uint32_t x427 = 362012272U;
	int16_t x428 = INT16_MIN;
	static volatile int32_t t106 = 118;

    t106 = (((x425|x426)<=x427)|x428);

    if (t106 != -32767) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x431 = 11U;
	int64_t x432 = 1LL;
	volatile int64_t t107 = 1445LL;

    t107 = (((x429|x430)<=x431)|x432);

    if (t107 != 1LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x433 = 37U;
	static uint32_t x434 = 22U;
	static uint64_t x435 = UINT64_MAX;
	int16_t x436 = -7;

    t108 = (((x433|x434)<=x435)|x436);

    if (t108 != -7) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = -34;
	int16_t x438 = INT16_MIN;
	uint64_t x439 = 24709580710LLU;
	int16_t x440 = 13516;
	volatile int32_t t109 = 1723;

    t109 = (((x437|x438)<=x439)|x440);

    if (t109 != 13516) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x442 = 6;
	uint32_t x443 = 11U;
	uint64_t x444 = 400925507247LLU;
	volatile uint64_t t110 = 449437930210889LLU;

    t110 = (((x441|x442)<=x443)|x444);

    if (t110 != 400925507247LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = 0;
	uint16_t x446 = 19503U;
	volatile int8_t x448 = INT8_MAX;
	volatile int32_t t111 = -11;

    t111 = (((x445|x446)<=x447)|x448);

    if (t111 != 127) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x449 = -1;
	int64_t x450 = INT64_MAX;
	uint16_t x451 = 7U;
	static uint32_t t112 = 11U;

    t112 = (((x449|x450)<=x451)|x452);

    if (t112 != 155U) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x454 = 7U;
	uint32_t x455 = UINT32_MAX;
	uint8_t x456 = 68U;

    t113 = (((x453|x454)<=x455)|x456);

    if (t113 != 69) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x457 = 120U;
	int64_t x458 = -1LL;
	static int32_t x459 = INT32_MAX;
	uint32_t x460 = UINT32_MAX;
	volatile uint32_t t114 = UINT32_MAX;

    t114 = (((x457|x458)<=x459)|x460);

    if (t114 != UINT32_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint64_t x462 = UINT64_MAX;
	static int32_t x464 = 1;

    t115 = (((x461|x462)<=x463)|x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint64_t x465 = 32483032642021885LLU;
	static uint16_t x466 = 19U;
	int32_t x467 = -15363472;

    t116 = (((x465|x466)<=x467)|x468);

    if (t116 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x470 = INT16_MIN;
	int32_t x471 = -1;
	volatile int8_t x472 = 1;
	static int32_t t117 = -174182248;

    t117 = (((x469|x470)<=x471)|x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x474 = 5258758LL;
	volatile int32_t x475 = INT32_MIN;
	uint64_t x476 = UINT64_MAX;
	volatile uint64_t t118 = UINT64_MAX;

    t118 = (((x473|x474)<=x475)|x476);

    if (t118 != UINT64_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = INT64_MIN;
	static int32_t x479 = INT32_MIN;
	volatile uint8_t x480 = 101U;
	volatile int32_t t119 = -160;

    t119 = (((x477|x478)<=x479)|x480);

    if (t119 != 101) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x481 = -1;
	int16_t x482 = 6;
	int64_t x484 = INT64_MAX;
	volatile int64_t t120 = INT64_MAX;

    t120 = (((x481|x482)<=x483)|x484);

    if (t120 != INT64_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = INT16_MAX;
	int32_t x486 = INT32_MIN;
	static uint8_t x487 = 24U;
	volatile uint32_t x488 = UINT32_MAX;
	uint32_t t121 = UINT32_MAX;

    t121 = (((x485|x486)<=x487)|x488);

    if (t121 != UINT32_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x489 = 67LLU;
	volatile int16_t x490 = INT16_MAX;
	volatile int32_t x491 = INT32_MIN;
	static uint16_t x492 = 2243U;
	volatile int32_t t122 = 11282;

    t122 = (((x489|x490)<=x491)|x492);

    if (t122 != 2243) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x493 = -8;
	static int32_t x494 = INT32_MIN;
	uint64_t x495 = 10225139993371931LLU;

    t123 = (((x493|x494)<=x495)|x496);

    if (t123 != 255) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = INT32_MIN;
	static int8_t x498 = 1;
	int32_t x500 = 3321;
	int32_t t124 = 767298;

    t124 = (((x497|x498)<=x499)|x500);

    if (t124 != 3321) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x501 = INT8_MAX;
	uint8_t x504 = 86U;
	volatile int32_t t125 = -39617;

    t125 = (((x501|x502)<=x503)|x504);

    if (t125 != 86) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x506 = INT16_MAX;
	int8_t x507 = INT8_MIN;
	int64_t x508 = 0LL;
	static int64_t t126 = 64466968LL;

    t126 = (((x505|x506)<=x507)|x508);

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = INT8_MIN;
	int64_t x510 = INT64_MAX;
	volatile int32_t x511 = -1;
	uint16_t x512 = UINT16_MAX;
	static int32_t t127 = -3;

    t127 = (((x509|x510)<=x511)|x512);

    if (t127 != 65535) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = -1;
	uint32_t x514 = 32U;
	static uint16_t x516 = UINT16_MAX;
	volatile int32_t t128 = 213656678;

    t128 = (((x513|x514)<=x515)|x516);

    if (t128 != 65535) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint32_t x518 = 455796948U;
	volatile int64_t x519 = INT64_MIN;
	int32_t x520 = 6994889;

    t129 = (((x517|x518)<=x519)|x520);

    if (t129 != 6994889) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x521 = INT32_MIN;
	volatile int8_t x522 = INT8_MAX;
	volatile int32_t x523 = INT32_MIN;
	volatile int32_t x524 = 31;
	static volatile int32_t t130 = 259;

    t130 = (((x521|x522)<=x523)|x524);

    if (t130 != 31) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x527 = 3516559005288634LL;
	int32_t x528 = INT32_MIN;
	int32_t t131 = -82;

    t131 = (((x525|x526)<=x527)|x528);

    if (t131 != -2147483647) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x529 = INT16_MIN;
	uint32_t x531 = UINT32_MAX;
	static int16_t x532 = INT16_MIN;

    t132 = (((x529|x530)<=x531)|x532);

    if (t132 != -32767) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x533 = 0U;
	uint8_t x534 = 50U;
	volatile int16_t x536 = INT16_MIN;
	int32_t t133 = 8826946;

    t133 = (((x533|x534)<=x535)|x536);

    if (t133 != -32768) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x537 = 87U;
	volatile uint8_t x539 = 45U;
	volatile int16_t x540 = -1;
	static volatile int32_t t134 = 4;

    t134 = (((x537|x538)<=x539)|x540);

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x541 = UINT64_MAX;
	uint8_t x542 = 15U;
	int16_t x544 = INT16_MAX;
	static volatile int32_t t135 = -5;

    t135 = (((x541|x542)<=x543)|x544);

    if (t135 != 32767) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x546 = 85353081809573LLU;
	int8_t x547 = -15;
	uint32_t x548 = UINT32_MAX;
	volatile uint32_t t136 = UINT32_MAX;

    t136 = (((x545|x546)<=x547)|x548);

    if (t136 != UINT32_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x549 = INT32_MIN;
	volatile uint8_t x550 = 7U;
	static int8_t x551 = INT8_MAX;
	int32_t t137 = -103;

    t137 = (((x549|x550)<=x551)|x552);

    if (t137 != 127) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = INT32_MIN;
	int32_t x554 = INT32_MAX;
	int8_t x555 = -3;
	static int16_t x556 = -1;

    t138 = (((x553|x554)<=x555)|x556);

    if (t138 != -1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint32_t x557 = 6756U;
	volatile int8_t x558 = INT8_MAX;
	int16_t x559 = 1;
	volatile int16_t x560 = INT16_MIN;
	volatile int32_t t139 = 38070605;

    t139 = (((x557|x558)<=x559)|x560);

    if (t139 != -32768) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = INT64_MIN;
	volatile int8_t x562 = INT8_MIN;
	uint64_t x563 = 3584990LLU;
	int32_t x564 = 1950;
	static int32_t t140 = -302740694;

    t140 = (((x561|x562)<=x563)|x564);

    if (t140 != 1950) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x565 = -30;
	uint64_t x567 = 7625802715270434326LLU;
	int32_t t141 = INT32_MAX;

    t141 = (((x565|x566)<=x567)|x568);

    if (t141 != INT32_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x569 = INT32_MIN;
	int32_t x570 = INT32_MIN;
	int64_t x571 = -1982029LL;

    t142 = (((x569|x570)<=x571)|x572);

    if (t142 != 7U) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x573 = INT64_MIN;
	int8_t x574 = 1;
	int8_t x575 = INT8_MIN;
	volatile int32_t t143 = 1;

    t143 = (((x573|x574)<=x575)|x576);

    if (t143 != -2147483647) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x577 = INT16_MIN;
	uint32_t x578 = 193994637U;
	int16_t x579 = INT16_MIN;
	int32_t x580 = -1;
	static volatile int32_t t144 = -358;

    t144 = (((x577|x578)<=x579)|x580);

    if (t144 != -1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x581 = INT16_MAX;
	int16_t x582 = -1;
	volatile uint64_t x583 = 272767286350LLU;
	static int8_t x584 = INT8_MAX;
	volatile int32_t t145 = 21;

    t145 = (((x581|x582)<=x583)|x584);

    if (t145 != 127) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = 0;
	uint32_t x586 = 364U;
	int16_t x587 = -1;
	static uint8_t x588 = 106U;

    t146 = (((x585|x586)<=x587)|x588);

    if (t146 != 107) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile uint32_t x589 = 2817518U;
	int32_t x590 = -5;
	volatile uint64_t x592 = 755883413107LLU;
	volatile uint64_t t147 = 5781291072329380666LLU;

    t147 = (((x589|x590)<=x591)|x592);

    if (t147 != 755883413107LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x593 = -2029;
	uint32_t x594 = 1460U;
	int64_t x595 = INT64_MIN;
	static volatile uint16_t x596 = 75U;
	volatile int32_t t148 = 247115;

    t148 = (((x593|x594)<=x595)|x596);

    if (t148 != 75) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint64_t x597 = UINT64_MAX;
	static int32_t x599 = INT32_MAX;
	uint64_t x600 = 390737690829812636LLU;
	volatile uint64_t t149 = 2LLU;

    t149 = (((x597|x598)<=x599)|x600);

    if (t149 != 390737690829812636LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = -8;
	int8_t x602 = INT8_MAX;
	uint32_t x603 = 53U;
	uint16_t x604 = UINT16_MAX;
	volatile int32_t t150 = -1;

    t150 = (((x601|x602)<=x603)|x604);

    if (t150 != 65535) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x606 = 304539559042480040LL;
	static uint16_t x607 = 1U;
	uint8_t x608 = UINT8_MAX;
	static int32_t t151 = -1;

    t151 = (((x605|x606)<=x607)|x608);

    if (t151 != 255) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x609 = 114U;
	uint16_t x610 = 1U;
	volatile uint64_t x611 = 1939902740555LLU;
	static volatile int32_t t152 = -1;

    t152 = (((x609|x610)<=x611)|x612);

    if (t152 != -32767) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = -3498752;
	int32_t x614 = 1;
	int8_t x615 = INT8_MIN;
	int16_t x616 = INT16_MAX;
	volatile int32_t t153 = -9;

    t153 = (((x613|x614)<=x615)|x616);

    if (t153 != 32767) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint32_t x617 = UINT32_MAX;
	static int32_t x618 = INT32_MAX;
	int16_t x619 = -2;
	static uint8_t x620 = 15U;
	volatile int32_t t154 = 1;

    t154 = (((x617|x618)<=x619)|x620);

    if (t154 != 15) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = INT64_MIN;
	uint8_t x622 = 2U;
	static volatile int16_t x624 = INT16_MIN;
	int32_t t155 = -1827;

    t155 = (((x621|x622)<=x623)|x624);

    if (t155 != -32767) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = INT32_MIN;
	volatile uint32_t x626 = 15U;
	int16_t x627 = INT16_MIN;
	int64_t x628 = INT64_MIN;
	int64_t t156 = 5492301LL;

    t156 = (((x625|x626)<=x627)|x628);

    if (t156 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x630 = 832236383785LLU;
	static int64_t x631 = INT64_MAX;
	int64_t t157 = INT64_MAX;

    t157 = (((x629|x630)<=x631)|x632);

    if (t157 != INT64_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = INT32_MIN;
	int32_t x634 = 5;
	int64_t x636 = -1LL;
	volatile int64_t t158 = -3831250331115151LL;

    t158 = (((x633|x634)<=x635)|x636);

    if (t158 != -1LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x638 = INT32_MIN;
	static int64_t x639 = INT64_MAX;
	int64_t x640 = -1LL;
	static int64_t t159 = -195941928812154691LL;

    t159 = (((x637|x638)<=x639)|x640);

    if (t159 != -1LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint8_t x641 = 3U;
	uint16_t x642 = 23787U;
	static int8_t x644 = INT8_MAX;

    t160 = (((x641|x642)<=x643)|x644);

    if (t160 != 127) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = 3710615LL;
	static int64_t x646 = INT64_MIN;
	int64_t x647 = INT64_MIN;
	static int16_t x648 = INT16_MIN;
	int32_t t161 = 1821513;

    t161 = (((x645|x646)<=x647)|x648);

    if (t161 != -32768) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = 22;
	static int8_t x651 = -17;
	int64_t x652 = 3LL;
	static volatile int64_t t162 = 770771108106359479LL;

    t162 = (((x649|x650)<=x651)|x652);

    if (t162 != 3LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = INT32_MIN;
	uint32_t x654 = 324022U;
	uint64_t x656 = UINT64_MAX;
	static uint64_t t163 = UINT64_MAX;

    t163 = (((x653|x654)<=x655)|x656);

    if (t163 != UINT64_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x658 = INT16_MAX;
	static int16_t x659 = -13;
	uint8_t x660 = 2U;

    t164 = (((x657|x658)<=x659)|x660);

    if (t164 != 2) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = INT64_MIN;
	volatile int32_t x662 = INT32_MAX;
	int16_t x663 = 0;

    t165 = (((x661|x662)<=x663)|x664);

    if (t165 != 369) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x665 = 0U;
	int64_t x666 = -246674382270656681LL;
	int64_t x668 = INT64_MIN;
	int64_t t166 = -17890570026545728LL;

    t166 = (((x665|x666)<=x667)|x668);

    if (t166 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int16_t x669 = INT16_MAX;
	int64_t x670 = INT64_MAX;
	volatile int32_t x671 = INT32_MIN;
	static volatile int32_t t167 = -1052948;

    t167 = (((x669|x670)<=x671)|x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x673 = 0U;
	int32_t x674 = -1;
	uint64_t x675 = 350961550642296474LLU;
	int32_t x676 = -1;
	int32_t t168 = 109796880;

    t168 = (((x673|x674)<=x675)|x676);

    if (t168 != -1) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = INT32_MIN;
	static int16_t x678 = 20;
	static int16_t x679 = INT16_MIN;
	int8_t x680 = INT8_MIN;

    t169 = (((x677|x678)<=x679)|x680);

    if (t169 != -127) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = INT64_MAX;
	uint8_t x682 = 1U;
	int16_t x683 = INT16_MIN;
	static uint32_t x684 = 840103190U;
	static volatile uint32_t t170 = 17032U;

    t170 = (((x681|x682)<=x683)|x684);

    if (t170 != 840103190U) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x685 = -21712630LL;
	int16_t x687 = 67;
	uint8_t x688 = 19U;
	volatile int32_t t171 = 92541;

    t171 = (((x685|x686)<=x687)|x688);

    if (t171 != 19) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x689 = -1LL;
	int64_t x690 = INT64_MIN;
	int32_t x691 = -1;
	int32_t t172 = 4273632;

    t172 = (((x689|x690)<=x691)|x692);

    if (t172 != -32767) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint32_t x696 = UINT32_MAX;
	volatile uint32_t t173 = UINT32_MAX;

    t173 = (((x693|x694)<=x695)|x696);

    if (t173 != UINT32_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x697 = -1;
	int32_t x698 = INT32_MAX;
	int64_t x699 = 397769194LL;
	static uint64_t x700 = 3787582017LLU;
	static uint64_t t174 = 1702679875535175674LLU;

    t174 = (((x697|x698)<=x699)|x700);

    if (t174 != 3787582017LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x701 = 199;
	uint64_t x704 = 1320159LLU;
	volatile uint64_t t175 = 14987362157687LLU;

    t175 = (((x701|x702)<=x703)|x704);

    if (t175 != 1320159LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x705 = 1U;
	int8_t x706 = INT8_MIN;
	static volatile int32_t x707 = -8;
	int16_t x708 = -1;

    t176 = (((x705|x706)<=x707)|x708);

    if (t176 != -1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x709 = UINT32_MAX;
	uint64_t x710 = 1058LLU;
	static int32_t x711 = INT32_MIN;
	volatile uint16_t x712 = 14199U;
	volatile int32_t t177 = -12971;

    t177 = (((x709|x710)<=x711)|x712);

    if (t177 != 14199) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x714 = -113614LL;
	int64_t x715 = 47604LL;
	static uint64_t x716 = 233532514707LLU;
	uint64_t t178 = 870594LLU;

    t178 = (((x713|x714)<=x715)|x716);

    if (t178 != 233532514707LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = INT64_MIN;
	volatile uint64_t x719 = UINT64_MAX;
	int64_t x720 = INT64_MIN;

    t179 = (((x717|x718)<=x719)|x720);

    if (t179 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x721 = -1LL;
	static int16_t x722 = INT16_MIN;
	volatile uint32_t x723 = UINT32_MAX;
	int16_t x724 = INT16_MIN;

    t180 = (((x721|x722)<=x723)|x724);

    if (t180 != -32767) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x725 = 5;
	int32_t x726 = 274;
	uint64_t x728 = 173804LLU;
	volatile uint64_t t181 = 2781949373LLU;

    t181 = (((x725|x726)<=x727)|x728);

    if (t181 != 173804LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x729 = -1;
	volatile int8_t x730 = INT8_MIN;
	int32_t x731 = INT32_MIN;
	uint8_t x732 = 2U;
	volatile int32_t t182 = -683;

    t182 = (((x729|x730)<=x731)|x732);

    if (t182 != 2) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x733 = 4U;
	uint8_t x734 = 4U;
	int64_t x735 = INT64_MIN;
	int32_t x736 = -243187;
	int32_t t183 = 223708749;

    t183 = (((x733|x734)<=x735)|x736);

    if (t183 != -243187) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = INT8_MIN;
	uint64_t x738 = UINT64_MAX;
	int32_t x739 = INT32_MIN;
	volatile int32_t t184 = -701;

    t184 = (((x737|x738)<=x739)|x740);

    if (t184 != -1819164) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint32_t x741 = 2495632U;
	int64_t x742 = -1LL;
	uint8_t x743 = UINT8_MAX;
	uint32_t x744 = 3345856U;
	volatile uint32_t t185 = 60U;

    t185 = (((x741|x742)<=x743)|x744);

    if (t185 != 3345857U) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint32_t x745 = UINT32_MAX;
	static volatile uint16_t x746 = UINT16_MAX;
	int8_t x747 = INT8_MIN;
	static int64_t x748 = INT64_MIN;

    t186 = (((x745|x746)<=x747)|x748);

    if (t186 != INT64_MIN) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile uint32_t x749 = UINT32_MAX;
	int16_t x750 = 0;
	int8_t x752 = INT8_MAX;
	int32_t t187 = 140912;

    t187 = (((x749|x750)<=x751)|x752);

    if (t187 != 127) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x753 = -2630455LL;
	int8_t x754 = -1;
	int32_t x755 = INT32_MAX;

    t188 = (((x753|x754)<=x755)|x756);

    if (t188 != 23) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint64_t x757 = 3446896LLU;
	uint32_t x759 = 5U;
	int32_t x760 = INT32_MIN;

    t189 = (((x757|x758)<=x759)|x760);

    if (t189 != INT32_MIN) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x762 = INT16_MIN;
	static uint16_t x764 = 10U;
	int32_t t190 = 1;

    t190 = (((x761|x762)<=x763)|x764);

    if (t190 != 11) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x767 = INT64_MAX;
	int32_t t191 = -631;

    t191 = (((x765|x766)<=x767)|x768);

    if (t191 != -1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x770 = INT32_MIN;
	uint16_t x771 = 612U;
	int8_t x772 = INT8_MIN;
	static int32_t t192 = -9615;

    t192 = (((x769|x770)<=x771)|x772);

    if (t192 != -127) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint64_t x773 = 533LLU;
	uint8_t x774 = 4U;
	int8_t x775 = INT8_MAX;
	uint16_t x776 = 2187U;
	volatile int32_t t193 = -11392;

    t193 = (((x773|x774)<=x775)|x776);

    if (t193 != 2187) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = 3;
	uint32_t x778 = UINT32_MAX;
	uint16_t x779 = 7U;
	uint16_t x780 = 965U;
	int32_t t194 = 59;

    t194 = (((x777|x778)<=x779)|x780);

    if (t194 != 965) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = -1;
	int32_t x782 = INT32_MAX;
	static int32_t x783 = INT32_MIN;
	static int8_t x784 = INT8_MIN;

    t195 = (((x781|x782)<=x783)|x784);

    if (t195 != -128) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x785 = 6;
	int64_t x786 = INT64_MIN;
	int8_t x787 = 1;
	uint32_t x788 = 352U;
	uint32_t t196 = 269420206U;

    t196 = (((x785|x786)<=x787)|x788);

    if (t196 != 353U) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x789 = INT64_MIN;
	int16_t x791 = INT16_MAX;
	int32_t x792 = -1;
	int32_t t197 = -138947679;

    t197 = (((x789|x790)<=x791)|x792);

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x793 = INT64_MIN;
	static uint16_t x794 = 0U;
	static int64_t x795 = 4LL;
	volatile uint64_t x796 = UINT64_MAX;

    t198 = (((x793|x794)<=x795)|x796);

    if (t198 != UINT64_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x797 = INT16_MAX;
	int16_t x798 = -1;
	int16_t x799 = -1;
	int64_t x800 = 17421LL;
	int64_t t199 = 3167870551160LL;

    t199 = (((x797|x798)<=x799)|x800);

    if (t199 != 17421LL) { NG(); } else { ; }
	
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


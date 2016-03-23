
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
static volatile int64_t x7 = INT64_MIN;
volatile int8_t x8 = -40;
int16_t x10 = INT16_MIN;
static uint8_t x11 = UINT8_MAX;
int32_t x16 = 989670;
volatile uint64_t x18 = 440843220223634722LLU;
uint32_t x20 = UINT32_MAX;
int64_t x25 = INT64_MIN;
int64_t t6 = INT64_MIN;
int16_t x31 = 296;
volatile int64_t t8 = 173483277255921243LL;
uint8_t x43 = 7U;
volatile int64_t t10 = INT64_MIN;
uint8_t x50 = 110U;
uint16_t x64 = UINT16_MAX;
int32_t t14 = 795622142;
volatile uint64_t t15 = UINT64_MAX;
int8_t x85 = -1;
static int8_t x88 = INT8_MIN;
static volatile int32_t t18 = 7;
int64_t x94 = INT64_MIN;
volatile int16_t x98 = INT16_MIN;
static uint32_t x99 = 9895226U;
volatile uint64_t x100 = UINT64_MAX;
int64_t x102 = -28945LL;
static uint32_t x109 = 1519444744U;
static volatile uint8_t x112 = 1U;
static uint64_t x118 = 75700008LLU;
int32_t x122 = INT32_MAX;
int64_t x126 = INT64_MIN;
volatile uint64_t t27 = 17821587LLU;
int16_t x129 = 1;
static int32_t x131 = INT32_MAX;
int16_t x132 = 48;
int16_t x133 = INT16_MAX;
static int64_t x134 = INT64_MIN;
static int32_t x144 = -1;
uint32_t x154 = 39U;
int16_t x163 = INT16_MAX;
volatile int64_t t35 = 238454LL;
int32_t x169 = INT32_MIN;
volatile int64_t x171 = INT64_MIN;
int32_t x175 = INT32_MIN;
uint32_t x176 = 862711U;
uint32_t x178 = 1172755089U;
int8_t x187 = -1;
static uint16_t x192 = 3793U;
static volatile int32_t t42 = 48;
static int32_t x194 = -1;
int16_t x198 = INT16_MIN;
volatile int64_t x200 = INT64_MIN;
int32_t x208 = 167101;
int16_t x210 = -1;
int16_t x214 = INT16_MIN;
static int16_t x223 = INT16_MIN;
static int64_t x225 = -1LL;
int16_t x230 = -1;
int8_t x236 = INT8_MIN;
volatile int32_t t54 = 51;
static uint8_t x245 = 5U;
static int64_t x251 = INT64_MAX;
int8_t x257 = INT8_MIN;
int32_t x269 = 139;
int32_t x271 = INT32_MIN;
int16_t x276 = -1;
int32_t x278 = -1;
int64_t x279 = -1LL;
uint32_t x280 = 146U;
uint8_t x281 = UINT8_MAX;
volatile uint16_t x286 = 507U;
static int32_t t67 = -6589883;
volatile int32_t x296 = INT32_MAX;
static volatile int64_t t68 = 42838409462564167LL;
volatile int64_t x303 = 115380LL;
static volatile uint8_t x315 = UINT8_MAX;
int16_t x316 = -115;
uint64_t x325 = UINT64_MAX;
int16_t x332 = -2;
volatile uint32_t x333 = 5250024U;
volatile uint32_t t77 = 499161862U;
int64_t x341 = INT64_MAX;
volatile int64_t x342 = INT64_MIN;
static int32_t x354 = INT32_MAX;
int64_t x360 = 2LL;
int64_t x361 = INT64_MAX;
static uint8_t x366 = 45U;
volatile int32_t x370 = INT32_MIN;
volatile int8_t x373 = INT8_MIN;
volatile int32_t t86 = 25004;
uint64_t x386 = 277156199954895933LLU;
int32_t x390 = -1;
int32_t t90 = 45;
int16_t x402 = INT16_MIN;
int16_t x403 = -6;
int32_t t92 = 85;
int32_t t94 = -31368725;
int32_t t95 = 384;
static volatile int32_t x426 = -56;
uint16_t x428 = UINT16_MAX;
int32_t x432 = -1;
int8_t x433 = -1;
static volatile int32_t x436 = 489936527;
volatile int32_t t99 = 520;
volatile uint32_t x438 = 753703U;
uint64_t x439 = 13189472136LLU;
int32_t t100 = -7;
static uint32_t x442 = 442577112U;
static uint64_t x443 = UINT64_MAX;
volatile int32_t t104 = 122;
volatile int8_t x468 = 13;
static int16_t x479 = -1;
int16_t x500 = INT16_MAX;
int32_t t111 = -114429396;
static int32_t x501 = -1;
uint32_t x512 = 2052271U;
static int8_t x514 = INT8_MAX;
int16_t x515 = INT16_MAX;
int64_t x518 = -28465342574901LL;
int8_t x524 = 9;
int8_t x529 = INT8_MIN;
int16_t x534 = INT16_MIN;
int32_t t120 = 2175;
volatile int64_t x550 = -113473LL;
uint16_t x552 = UINT16_MAX;
int64_t x555 = INT64_MIN;
static uint32_t t122 = 320U;
int16_t x557 = 42;
volatile int64_t x560 = 984150617560284LL;
static int32_t t123 = -8041970;
int32_t x561 = INT32_MAX;
int8_t x564 = INT8_MIN;
static int16_t x566 = -1;
volatile int16_t x569 = INT16_MAX;
volatile int32_t t126 = -7143650;
int16_t x573 = INT16_MAX;
int16_t x575 = -1;
int32_t t127 = 502757794;
static int16_t x578 = INT16_MAX;
volatile int64_t x579 = INT64_MIN;
int8_t x580 = INT8_MIN;
static volatile uint32_t x602 = UINT32_MAX;
int8_t x605 = -7;
volatile int32_t x610 = -9;
int16_t x611 = -1;
volatile int16_t x616 = 26;
volatile int64_t x629 = INT64_MIN;
int64_t t138 = INT64_MIN;
volatile int32_t x633 = INT32_MIN;
uint32_t x648 = UINT32_MAX;
static volatile int32_t x658 = INT32_MAX;
volatile int8_t x661 = -1;
uint64_t x664 = 46043099494LLU;
static int64_t x666 = INT64_MIN;
volatile int8_t x667 = INT8_MIN;
int16_t x668 = -1;
uint32_t x673 = 37009U;
volatile int64_t t149 = -851437LL;
uint64_t x682 = 3242510827846381706LLU;
uint8_t x686 = 11U;
static int64_t x687 = -1LL;
uint8_t x688 = UINT8_MAX;
volatile uint8_t x701 = UINT8_MAX;
int16_t x704 = -7;
uint8_t x706 = 4U;
volatile int32_t t157 = 1575;
uint16_t x713 = 2687U;
int16_t x720 = 10738;
int32_t x724 = -1;
volatile uint64_t t160 = 0LLU;
int16_t x725 = -4;
int32_t x726 = -1;
static volatile int64_t x728 = INT64_MAX;
int8_t x732 = INT8_MIN;
uint64_t x736 = 74039396379495226LLU;
int32_t x737 = -1;
int32_t x742 = INT32_MAX;
int16_t x758 = -14;
int64_t x761 = -2263202956735648142LL;
static int32_t x776 = INT32_MIN;
uint16_t x785 = 4140U;
int32_t t175 = 0;
int64_t x804 = INT64_MIN;
int32_t x808 = INT32_MIN;
int32_t t180 = -42;
volatile int32_t t181 = 3;
static int64_t x814 = -1LL;
static uint32_t x824 = 967836U;
volatile uint64_t t184 = 395344986549LLU;
int8_t x827 = 0;
static volatile uint64_t t185 = 186862663165315008LLU;
uint16_t x840 = 12994U;
int64_t x845 = INT64_MAX;
static uint64_t x847 = UINT64_MAX;
uint32_t x848 = 510253U;
int8_t x849 = INT8_MAX;
int16_t x853 = INT16_MIN;
int32_t t192 = -188;
int32_t x870 = -381;
static volatile uint64_t x872 = 43836983LLU;
int64_t t196 = INT64_MAX;
static uint64_t x877 = 1692722198055LLU;
int8_t x879 = INT8_MIN;
volatile uint64_t t197 = 2881081LLU;
int64_t x881 = -832893767LL;
volatile uint8_t x884 = 0U;
int32_t t199 = INT32_MIN;


void f0(void) {
    	int32_t x1 = INT32_MIN;
	int32_t x2 = INT32_MIN;
	int64_t x3 = 16366158469LL;
	volatile int32_t t0 = INT32_MIN;

    t0 = (x1|(x2==(x3-x4)));

    if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = 11;
	int16_t x6 = INT16_MAX;
	int32_t t1 = -392663;

    t1 = (x5|(x6==(x7-x8)));

    if (t1 != 11) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint32_t x9 = 476516067U;
	static uint64_t x12 = 682LLU;
	uint32_t t2 = 2U;

    t2 = (x9|(x10==(x11-x12)));

    if (t2 != 476516067U) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = UINT16_MAX;
	int16_t x14 = INT16_MIN;
	static int32_t x15 = -16;
	int32_t t3 = 689717919;

    t3 = (x13|(x14==(x15-x16)));

    if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint8_t x17 = 25U;
	uint32_t x19 = UINT32_MAX;
	volatile int32_t t4 = 7000;

    t4 = (x17|(x18==(x19-x20)));

    if (t4 != 25) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MIN;
	volatile int32_t x22 = INT32_MAX;
	static int64_t x23 = -1LL;
	int16_t x24 = -31;
	int32_t t5 = -94151;

    t5 = (x21|(x22==(x23-x24)));

    if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x26 = 1535880;
	int16_t x27 = 5647;
	int64_t x28 = 378203644LL;

    t6 = (x25|(x26==(x27-x28)));

    if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = UINT64_MAX;
	int32_t x30 = -1;
	static uint64_t x32 = UINT64_MAX;
	volatile uint64_t t7 = UINT64_MAX;

    t7 = (x29|(x30==(x31-x32)));

    if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x33 = -33275181016LL;
	static int32_t x34 = INT32_MIN;
	static int32_t x35 = -1;
	int8_t x36 = 0;

    t8 = (x33|(x34==(x35-x36)));

    if (t8 != -33275181016LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = UINT64_MAX;
	static uint32_t x38 = 113944U;
	static int16_t x39 = -1;
	static uint8_t x40 = 21U;
	uint64_t t9 = UINT64_MAX;

    t9 = (x37|(x38==(x39-x40)));

    if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MIN;
	int8_t x42 = -7;
	int32_t x44 = 16;

    t10 = (x41|(x42==(x43-x44)));

    if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x49 = INT64_MIN;
	static int16_t x51 = INT16_MAX;
	volatile int32_t x52 = -1;
	volatile int64_t t11 = INT64_MIN;

    t11 = (x49|(x50==(x51-x52)));

    if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x57 = -1;
	uint16_t x58 = 18U;
	int8_t x59 = -1;
	volatile uint8_t x60 = 14U;
	int32_t t12 = 1247;

    t12 = (x57|(x58==(x59-x60)));

    if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x61 = -24;
	uint64_t x62 = 33477394995043783LLU;
	uint32_t x63 = 5577136U;
	static volatile int32_t t13 = -5;

    t13 = (x61|(x62==(x63-x64)));

    if (t13 != -24) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x69 = INT8_MIN;
	volatile int16_t x70 = -1;
	uint64_t x71 = 903930172192522LLU;
	int32_t x72 = INT32_MIN;

    t14 = (x69|(x70==(x71-x72)));

    if (t14 != -128) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint64_t x73 = UINT64_MAX;
	volatile uint32_t x74 = 399235U;
	int8_t x75 = INT8_MIN;
	int8_t x76 = INT8_MIN;

    t15 = (x73|(x74==(x75-x76)));

    if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint16_t x77 = 13188U;
	static uint32_t x78 = 6486U;
	int16_t x79 = INT16_MIN;
	uint64_t x80 = 925377206169914764LLU;
	int32_t t16 = -288251;

    t16 = (x77|(x78==(x79-x80)));

    if (t16 != 13188) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint32_t x81 = UINT32_MAX;
	int64_t x82 = INT64_MIN;
	uint32_t x83 = 406065086U;
	uint8_t x84 = 4U;
	static volatile uint32_t t17 = UINT32_MAX;

    t17 = (x81|(x82==(x83-x84)));

    if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint32_t x86 = UINT32_MAX;
	int16_t x87 = INT16_MAX;

    t18 = (x85|(x86==(x87-x88)));

    if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x89 = INT16_MAX;
	static int32_t x90 = INT32_MIN;
	uint32_t x91 = UINT32_MAX;
	volatile uint8_t x92 = 122U;
	static int32_t t19 = -1;

    t19 = (x89|(x90==(x91-x92)));

    if (t19 != 32767) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x93 = INT8_MIN;
	uint8_t x95 = 1U;
	int8_t x96 = INT8_MAX;
	static int32_t t20 = -491759570;

    t20 = (x93|(x94==(x95-x96)));

    if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x97 = 1;
	static volatile int32_t t21 = 242947;

    t21 = (x97|(x98==(x99-x100)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint64_t x101 = UINT64_MAX;
	int64_t x103 = -39LL;
	uint64_t x104 = UINT64_MAX;
	volatile uint64_t t22 = UINT64_MAX;

    t22 = (x101|(x102==(x103-x104)));

    if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x105 = INT16_MIN;
	uint64_t x106 = 1396250729052LLU;
	static int64_t x107 = -108LL;
	static int32_t x108 = -63401492;
	int32_t t23 = -3839445;

    t23 = (x105|(x106==(x107-x108)));

    if (t23 != -32768) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x110 = INT32_MIN;
	uint64_t x111 = 32341923946LLU;
	uint32_t t24 = 1807139962U;

    t24 = (x109|(x110==(x111-x112)));

    if (t24 != 1519444744U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x117 = 1155LLU;
	int64_t x119 = 10225617438966LL;
	static uint8_t x120 = 3U;
	uint64_t t25 = 50014LLU;

    t25 = (x117|(x118==(x119-x120)));

    if (t25 != 1155LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x121 = INT64_MIN;
	int32_t x123 = INT32_MAX;
	uint16_t x124 = 338U;
	int64_t t26 = INT64_MIN;

    t26 = (x121|(x122==(x123-x124)));

    if (t26 != INT64_MIN) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x125 = 31836805354310960LLU;
	int16_t x127 = INT16_MIN;
	int16_t x128 = 0;

    t27 = (x125|(x126==(x127-x128)));

    if (t27 != 31836805354310960LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x130 = INT32_MIN;
	volatile int32_t t28 = -2;

    t28 = (x129|(x130==(x131-x132)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint8_t x135 = 8U;
	int64_t x136 = -1LL;
	static volatile int32_t t29 = -31177;

    t29 = (x133|(x134==(x135-x136)));

    if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x137 = -97LL;
	uint8_t x138 = UINT8_MAX;
	static int16_t x139 = INT16_MIN;
	uint8_t x140 = UINT8_MAX;
	int64_t t30 = -4162026935785003808LL;

    t30 = (x137|(x138==(x139-x140)));

    if (t30 != -97LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x141 = 2U;
	volatile uint16_t x142 = 6973U;
	static volatile int8_t x143 = INT8_MIN;
	volatile uint32_t t31 = 1U;

    t31 = (x141|(x142==(x143-x144)));

    if (t31 != 2U) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x145 = INT32_MIN;
	static int32_t x146 = -1;
	int8_t x147 = -1;
	uint8_t x148 = 61U;
	volatile int32_t t32 = INT32_MIN;

    t32 = (x145|(x146==(x147-x148)));

    if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x153 = 2U;
	int8_t x155 = 11;
	uint8_t x156 = UINT8_MAX;
	static int32_t t33 = -1;

    t33 = (x153|(x154==(x155-x156)));

    if (t33 != 2) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x157 = 784;
	int64_t x158 = INT64_MIN;
	int8_t x159 = INT8_MAX;
	static uint32_t x160 = 61816234U;
	static volatile int32_t t34 = -21;

    t34 = (x157|(x158==(x159-x160)));

    if (t34 != 784) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x161 = -182823574603246LL;
	uint64_t x162 = 483541940548587LLU;
	static int8_t x164 = 0;

    t35 = (x161|(x162==(x163-x164)));

    if (t35 != -182823574603246LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x165 = 38U;
	static volatile uint32_t x166 = 219741407U;
	uint64_t x167 = UINT64_MAX;
	int16_t x168 = 88;
	int32_t t36 = 20;

    t36 = (x165|(x166==(x167-x168)));

    if (t36 != 38) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x170 = -1;
	volatile uint64_t x172 = 23481635612LLU;
	int32_t t37 = INT32_MIN;

    t37 = (x169|(x170==(x171-x172)));

    if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x173 = -23;
	int16_t x174 = -15;
	int32_t t38 = 350422;

    t38 = (x173|(x174==(x175-x176)));

    if (t38 != -23) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x177 = INT32_MAX;
	volatile int64_t x179 = INT64_MIN;
	int64_t x180 = -131290540339LL;
	int32_t t39 = INT32_MAX;

    t39 = (x177|(x178==(x179-x180)));

    if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x181 = INT16_MAX;
	volatile uint64_t x182 = UINT64_MAX;
	int8_t x183 = INT8_MIN;
	uint16_t x184 = 3119U;
	int32_t t40 = 50;

    t40 = (x181|(x182==(x183-x184)));

    if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x185 = 87;
	volatile uint8_t x186 = 48U;
	int16_t x188 = -1;
	int32_t t41 = 11517954;

    t41 = (x185|(x186==(x187-x188)));

    if (t41 != 87) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int8_t x189 = -3;
	volatile int8_t x190 = -51;
	int16_t x191 = -238;

    t42 = (x189|(x190==(x191-x192)));

    if (t42 != -3) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint8_t x193 = UINT8_MAX;
	static int8_t x195 = -1;
	uint8_t x196 = UINT8_MAX;
	int32_t t43 = -408;

    t43 = (x193|(x194==(x195-x196)));

    if (t43 != 255) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x197 = 0;
	static int16_t x199 = -1;
	volatile int32_t t44 = -1289056;

    t44 = (x197|(x198==(x199-x200)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x201 = INT64_MAX;
	int16_t x202 = INT16_MAX;
	int64_t x203 = INT64_MIN;
	static int32_t x204 = INT32_MIN;
	static volatile int64_t t45 = INT64_MAX;

    t45 = (x201|(x202==(x203-x204)));

    if (t45 != INT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x205 = INT64_MIN;
	int16_t x206 = 12;
	volatile int16_t x207 = 0;
	int64_t t46 = INT64_MIN;

    t46 = (x205|(x206==(x207-x208)));

    if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x209 = UINT16_MAX;
	int16_t x211 = INT16_MAX;
	static volatile int32_t x212 = -1;
	int32_t t47 = -1220;

    t47 = (x209|(x210==(x211-x212)));

    if (t47 != 65535) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x213 = 0;
	int16_t x215 = INT16_MIN;
	int32_t x216 = -1;
	int32_t t48 = 26994;

    t48 = (x213|(x214==(x215-x216)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x217 = INT64_MIN;
	volatile int8_t x218 = INT8_MIN;
	volatile int64_t x219 = INT64_MIN;
	static int32_t x220 = INT32_MIN;
	volatile int64_t t49 = INT64_MIN;

    t49 = (x217|(x218==(x219-x220)));

    if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x221 = INT32_MIN;
	uint8_t x222 = 0U;
	volatile uint32_t x224 = 1128078483U;
	static int32_t t50 = INT32_MIN;

    t50 = (x221|(x222==(x223-x224)));

    if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x226 = 27;
	uint64_t x227 = 55451LLU;
	static volatile int16_t x228 = -10666;
	volatile int64_t t51 = 541825593151595LL;

    t51 = (x225|(x226==(x227-x228)));

    if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x229 = INT8_MIN;
	int64_t x231 = -1LL;
	int32_t x232 = INT32_MAX;
	static volatile int32_t t52 = 3702592;

    t52 = (x229|(x230==(x231-x232)));

    if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x233 = INT16_MIN;
	volatile int64_t x234 = -1LL;
	int8_t x235 = INT8_MIN;
	volatile int32_t t53 = -874982778;

    t53 = (x233|(x234==(x235-x236)));

    if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x237 = INT8_MIN;
	uint64_t x238 = UINT64_MAX;
	int16_t x239 = INT16_MIN;
	int64_t x240 = 80893617681380LL;

    t54 = (x237|(x238==(x239-x240)));

    if (t54 != -128) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x241 = UINT32_MAX;
	int64_t x242 = INT64_MIN;
	int8_t x243 = INT8_MIN;
	int32_t x244 = -1;
	uint32_t t55 = UINT32_MAX;

    t55 = (x241|(x242==(x243-x244)));

    if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint32_t x246 = 400U;
	static volatile uint16_t x247 = 3219U;
	int32_t x248 = -1;
	int32_t t56 = -1035295;

    t56 = (x245|(x246==(x247-x248)));

    if (t56 != 5) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x249 = UINT8_MAX;
	uint32_t x250 = 41532969U;
	int64_t x252 = 3188619450848LL;
	int32_t t57 = -85;

    t57 = (x249|(x250==(x251-x252)));

    if (t57 != 255) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x253 = INT8_MIN;
	int8_t x254 = INT8_MAX;
	int32_t x255 = INT32_MIN;
	int16_t x256 = -1232;
	static volatile int32_t t58 = 523642;

    t58 = (x253|(x254==(x255-x256)));

    if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x258 = 284166LL;
	volatile int8_t x259 = INT8_MIN;
	int64_t x260 = 125088906285LL;
	volatile int32_t t59 = -333986;

    t59 = (x257|(x258==(x259-x260)));

    if (t59 != -128) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x261 = 176394548U;
	static volatile int32_t x262 = 94062;
	int64_t x263 = INT64_MIN;
	int64_t x264 = -1LL;
	volatile uint32_t t60 = 20123U;

    t60 = (x261|(x262==(x263-x264)));

    if (t60 != 176394548U) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x265 = UINT32_MAX;
	uint8_t x266 = UINT8_MAX;
	uint32_t x267 = 1101587U;
	int32_t x268 = -1058895;
	uint32_t t61 = UINT32_MAX;

    t61 = (x265|(x266==(x267-x268)));

    if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x270 = -70150402423473103LL;
	int64_t x272 = INT64_MIN;
	volatile int32_t t62 = 1186;

    t62 = (x269|(x270==(x271-x272)));

    if (t62 != 139) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x273 = INT64_MIN;
	int64_t x274 = INT64_MIN;
	static volatile int8_t x275 = -1;
	int64_t t63 = INT64_MIN;

    t63 = (x273|(x274==(x275-x276)));

    if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int32_t x277 = -1;
	int32_t t64 = -69;

    t64 = (x277|(x278==(x279-x280)));

    if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x282 = INT8_MAX;
	static uint16_t x283 = UINT16_MAX;
	static uint16_t x284 = 6U;
	volatile int32_t t65 = 42547325;

    t65 = (x281|(x282==(x283-x284)));

    if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x285 = INT16_MAX;
	static int32_t x287 = -2815;
	static int16_t x288 = INT16_MIN;
	static volatile int32_t t66 = 2796815;

    t66 = (x285|(x286==(x287-x288)));

    if (t66 != 32767) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x289 = 6133U;
	volatile int8_t x290 = INT8_MIN;
	static int16_t x291 = -7415;
	static int16_t x292 = 1;

    t67 = (x289|(x290==(x291-x292)));

    if (t67 != 6133) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x293 = -1LL;
	volatile int64_t x294 = INT64_MIN;
	int32_t x295 = -1;

    t68 = (x293|(x294==(x295-x296)));

    if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x297 = UINT32_MAX;
	static int64_t x298 = -70LL;
	volatile uint32_t x299 = 601U;
	int8_t x300 = INT8_MIN;
	uint32_t t69 = UINT32_MAX;

    t69 = (x297|(x298==(x299-x300)));

    if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x301 = INT16_MAX;
	int8_t x302 = INT8_MIN;
	static int32_t x304 = INT32_MIN;
	static int32_t t70 = 0;

    t70 = (x301|(x302==(x303-x304)));

    if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x305 = -29;
	static int16_t x306 = INT16_MIN;
	volatile int16_t x307 = -1;
	static int8_t x308 = INT8_MIN;
	volatile int32_t t71 = 23859;

    t71 = (x305|(x306==(x307-x308)));

    if (t71 != -29) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x309 = 9U;
	int16_t x310 = -810;
	static int16_t x311 = INT16_MIN;
	static int32_t x312 = INT32_MIN;
	uint32_t t72 = 2464954U;

    t72 = (x309|(x310==(x311-x312)));

    if (t72 != 9U) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x313 = 0;
	static int16_t x314 = INT16_MIN;
	static int32_t t73 = -124529;

    t73 = (x313|(x314==(x315-x316)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x321 = INT32_MIN;
	volatile int32_t x322 = -1;
	int16_t x323 = INT16_MIN;
	static volatile int16_t x324 = -1;
	static volatile int32_t t74 = INT32_MIN;

    t74 = (x321|(x322==(x323-x324)));

    if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile uint8_t x326 = 13U;
	int64_t x327 = -1LL;
	int8_t x328 = INT8_MIN;
	uint64_t t75 = UINT64_MAX;

    t75 = (x325|(x326==(x327-x328)));

    if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x329 = INT64_MIN;
	int64_t x330 = INT64_MIN;
	int16_t x331 = -632;
	static int64_t t76 = INT64_MIN;

    t76 = (x329|(x330==(x331-x332)));

    if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x334 = -1;
	static uint32_t x335 = UINT32_MAX;
	int8_t x336 = -1;

    t77 = (x333|(x334==(x335-x336)));

    if (t77 != 5250024U) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x337 = INT32_MIN;
	volatile uint32_t x338 = UINT32_MAX;
	static volatile uint32_t x339 = UINT32_MAX;
	uint8_t x340 = 1U;
	volatile int32_t t78 = INT32_MIN;

    t78 = (x337|(x338==(x339-x340)));

    if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint16_t x343 = UINT16_MAX;
	int16_t x344 = 93;
	volatile int64_t t79 = INT64_MAX;

    t79 = (x341|(x342==(x343-x344)));

    if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x349 = INT32_MIN;
	static int16_t x350 = 6;
	int8_t x351 = -58;
	int32_t x352 = -107351;
	volatile int32_t t80 = INT32_MIN;

    t80 = (x349|(x350==(x351-x352)));

    if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x353 = -1;
	int64_t x355 = -1LL;
	int16_t x356 = INT16_MIN;
	static int32_t t81 = 72299;

    t81 = (x353|(x354==(x355-x356)));

    if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x357 = INT64_MIN;
	int16_t x358 = INT16_MIN;
	int64_t x359 = INT64_MAX;
	int64_t t82 = INT64_MIN;

    t82 = (x357|(x358==(x359-x360)));

    if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x362 = 2U;
	static int16_t x363 = -7997;
	int8_t x364 = -26;
	volatile int64_t t83 = INT64_MAX;

    t83 = (x361|(x362==(x363-x364)));

    if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x365 = 1;
	static uint8_t x367 = 26U;
	uint32_t x368 = 379U;
	static volatile int32_t t84 = -35012763;

    t84 = (x365|(x366==(x367-x368)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x369 = -1;
	int8_t x371 = -2;
	uint16_t x372 = UINT16_MAX;
	int32_t t85 = 861298;

    t85 = (x369|(x370==(x371-x372)));

    if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x374 = INT32_MIN;
	uint32_t x375 = UINT32_MAX;
	static uint8_t x376 = 17U;

    t86 = (x373|(x374==(x375-x376)));

    if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x377 = -14;
	volatile int16_t x378 = INT16_MIN;
	int32_t x379 = INT32_MAX;
	int64_t x380 = -294180LL;
	volatile int32_t t87 = 24165;

    t87 = (x377|(x378==(x379-x380)));

    if (t87 != -14) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x381 = INT32_MIN;
	static int8_t x382 = INT8_MIN;
	int16_t x383 = INT16_MIN;
	volatile uint32_t x384 = UINT32_MAX;
	int32_t t88 = INT32_MIN;

    t88 = (x381|(x382==(x383-x384)));

    if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x385 = INT16_MAX;
	int64_t x387 = -1LL;
	uint32_t x388 = 772U;
	int32_t t89 = 2;

    t89 = (x385|(x386==(x387-x388)));

    if (t89 != 32767) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x389 = INT16_MIN;
	static volatile uint32_t x391 = UINT32_MAX;
	uint64_t x392 = UINT64_MAX;

    t90 = (x389|(x390==(x391-x392)));

    if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint32_t x397 = UINT32_MAX;
	uint64_t x398 = 19224721839152142LLU;
	uint16_t x399 = UINT16_MAX;
	uint16_t x400 = 3U;
	volatile uint32_t t91 = UINT32_MAX;

    t91 = (x397|(x398==(x399-x400)));

    if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x401 = INT8_MIN;
	int64_t x404 = 50527266700048LL;

    t92 = (x401|(x402==(x403-x404)));

    if (t92 != -128) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x405 = INT16_MIN;
	int16_t x406 = -1;
	volatile uint32_t x407 = 1450526U;
	static volatile int8_t x408 = INT8_MAX;
	volatile int32_t t93 = 625042;

    t93 = (x405|(x406==(x407-x408)));

    if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x409 = UINT16_MAX;
	int64_t x410 = -384445LL;
	int8_t x411 = INT8_MIN;
	int32_t x412 = INT32_MIN;

    t94 = (x409|(x410==(x411-x412)));

    if (t94 != 65535) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x417 = 3805U;
	int16_t x418 = -371;
	volatile uint8_t x419 = 55U;
	int64_t x420 = INT64_MAX;

    t95 = (x417|(x418==(x419-x420)));

    if (t95 != 3805) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x421 = -29LL;
	static int32_t x422 = INT32_MIN;
	volatile int64_t x423 = -1LL;
	uint64_t x424 = 351566499LLU;
	int64_t t96 = -442853176878LL;

    t96 = (x421|(x422==(x423-x424)));

    if (t96 != -29LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x425 = INT32_MAX;
	int8_t x427 = -1;
	volatile int32_t t97 = INT32_MAX;

    t97 = (x425|(x426==(x427-x428)));

    if (t97 != INT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x429 = 4U;
	static int8_t x430 = INT8_MIN;
	uint64_t x431 = UINT64_MAX;
	volatile int32_t t98 = 14234;

    t98 = (x429|(x430==(x431-x432)));

    if (t98 != 4) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x434 = 11854788303LLU;
	int16_t x435 = 3334;

    t99 = (x433|(x434==(x435-x436)));

    if (t99 != -1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint8_t x437 = UINT8_MAX;
	uint64_t x440 = 402594655387557LLU;

    t100 = (x437|(x438==(x439-x440)));

    if (t100 != 255) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x441 = INT32_MAX;
	uint8_t x444 = UINT8_MAX;
	volatile int32_t t101 = INT32_MAX;

    t101 = (x441|(x442==(x443-x444)));

    if (t101 != INT32_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x445 = UINT64_MAX;
	uint32_t x446 = 7U;
	uint64_t x447 = 38846417LLU;
	int32_t x448 = -9861;
	static volatile uint64_t t102 = UINT64_MAX;

    t102 = (x445|(x446==(x447-x448)));

    if (t102 != UINT64_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int16_t x453 = 1;
	uint32_t x454 = 239U;
	static int8_t x455 = 13;
	uint8_t x456 = UINT8_MAX;
	volatile int32_t t103 = 1;

    t103 = (x453|(x454==(x455-x456)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint8_t x457 = 2U;
	uint8_t x458 = 3U;
	volatile int64_t x459 = 1313357822782109995LL;
	int16_t x460 = INT16_MIN;

    t104 = (x457|(x458==(x459-x460)));

    if (t104 != 2) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int32_t x461 = -1;
	int64_t x462 = 22839979234423538LL;
	uint32_t x463 = 44031732U;
	int32_t x464 = INT32_MIN;
	volatile int32_t t105 = -91154;

    t105 = (x461|(x462==(x463-x464)));

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x465 = INT64_MIN;
	volatile int64_t x466 = INT64_MAX;
	static uint8_t x467 = 13U;
	volatile int64_t t106 = INT64_MIN;

    t106 = (x465|(x466==(x467-x468)));

    if (t106 != INT64_MIN) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x473 = -1;
	int32_t x474 = INT32_MIN;
	int16_t x475 = -871;
	int16_t x476 = INT16_MIN;
	int32_t t107 = 1;

    t107 = (x473|(x474==(x475-x476)));

    if (t107 != -1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x477 = 39;
	volatile int8_t x478 = INT8_MIN;
	uint64_t x480 = 4495772913452964LLU;
	static volatile int32_t t108 = -40213;

    t108 = (x477|(x478==(x479-x480)));

    if (t108 != 39) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x481 = INT8_MIN;
	int64_t x482 = -4059468013410247LL;
	uint64_t x483 = UINT64_MAX;
	static volatile int16_t x484 = 52;
	static volatile int32_t t109 = 221;

    t109 = (x481|(x482==(x483-x484)));

    if (t109 != -128) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile uint32_t x485 = 19778608U;
	volatile int64_t x486 = -23949LL;
	volatile uint32_t x487 = 15508974U;
	int16_t x488 = INT16_MAX;
	volatile uint32_t t110 = 1044768U;

    t110 = (x485|(x486==(x487-x488)));

    if (t110 != 19778608U) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x497 = 62;
	int32_t x498 = INT32_MAX;
	volatile uint64_t x499 = 126910862446LLU;

    t111 = (x497|(x498==(x499-x500)));

    if (t111 != 62) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x502 = INT64_MAX;
	int16_t x503 = -1;
	int32_t x504 = INT32_MAX;
	volatile int32_t t112 = 272131;

    t112 = (x501|(x502==(x503-x504)));

    if (t112 != -1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x509 = -1LL;
	int8_t x510 = -31;
	int8_t x511 = INT8_MAX;
	static volatile int64_t t113 = 90960LL;

    t113 = (x509|(x510==(x511-x512)));

    if (t113 != -1LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x513 = INT16_MIN;
	uint8_t x516 = 87U;
	int32_t t114 = -38111;

    t114 = (x513|(x514==(x515-x516)));

    if (t114 != -32768) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x517 = -1LL;
	uint32_t x519 = 1550875U;
	volatile int16_t x520 = -1;
	static volatile int64_t t115 = -3608660955897335LL;

    t115 = (x517|(x518==(x519-x520)));

    if (t115 != -1LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x521 = -949;
	int32_t x522 = INT32_MIN;
	volatile int64_t x523 = -525LL;
	int32_t t116 = -899792194;

    t116 = (x521|(x522==(x523-x524)));

    if (t116 != -949) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x530 = INT8_MIN;
	int16_t x531 = INT16_MIN;
	uint32_t x532 = UINT32_MAX;
	int32_t t117 = -151;

    t117 = (x529|(x530==(x531-x532)));

    if (t117 != -128) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x533 = -546679021543086LL;
	static uint8_t x535 = UINT8_MAX;
	uint64_t x536 = UINT64_MAX;
	static int64_t t118 = -122748061LL;

    t118 = (x533|(x534==(x535-x536)));

    if (t118 != -546679021543086LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint32_t x537 = 1U;
	uint32_t x538 = UINT32_MAX;
	int16_t x539 = -13278;
	int32_t x540 = INT32_MIN;
	static uint32_t t119 = 3806768U;

    t119 = (x537|(x538==(x539-x540)));

    if (t119 != 1U) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x541 = -1;
	int16_t x542 = 3753;
	int16_t x543 = INT16_MAX;
	uint8_t x544 = UINT8_MAX;

    t120 = (x541|(x542==(x543-x544)));

    if (t120 != -1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x549 = INT16_MIN;
	int32_t x551 = -1;
	static int32_t t121 = -24396589;

    t121 = (x549|(x550==(x551-x552)));

    if (t121 != -32768) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x553 = 631566U;
	static int64_t x554 = INT64_MIN;
	int32_t x556 = INT32_MIN;

    t122 = (x553|(x554==(x555-x556)));

    if (t122 != 631566U) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x558 = -1LL;
	int8_t x559 = -1;

    t123 = (x557|(x558==(x559-x560)));

    if (t123 != 42) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x562 = -35;
	static volatile int64_t x563 = -1LL;
	volatile int32_t t124 = INT32_MAX;

    t124 = (x561|(x562==(x563-x564)));

    if (t124 != INT32_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint16_t x565 = 2428U;
	static int8_t x567 = INT8_MIN;
	volatile int16_t x568 = -1;
	int32_t t125 = -1027441932;

    t125 = (x565|(x566==(x567-x568)));

    if (t125 != 2428) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x570 = 101U;
	int32_t x571 = -58465162;
	uint8_t x572 = 73U;

    t126 = (x569|(x570==(x571-x572)));

    if (t126 != 32767) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x574 = 1972U;
	int32_t x576 = -3458;

    t127 = (x573|(x574==(x575-x576)));

    if (t127 != 32767) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint16_t x577 = 15U;
	volatile int32_t t128 = 17482;

    t128 = (x577|(x578==(x579-x580)));

    if (t128 != 15) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint32_t x581 = 11909070U;
	int16_t x582 = -1;
	volatile int64_t x583 = 232068LL;
	int64_t x584 = -1LL;
	volatile uint32_t t129 = 121106U;

    t129 = (x581|(x582==(x583-x584)));

    if (t129 != 11909070U) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x585 = UINT64_MAX;
	int64_t x586 = -1LL;
	int16_t x587 = INT16_MIN;
	int8_t x588 = -14;
	volatile uint64_t t130 = UINT64_MAX;

    t130 = (x585|(x586==(x587-x588)));

    if (t130 != UINT64_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x589 = -1LL;
	static int8_t x590 = INT8_MAX;
	uint8_t x591 = 9U;
	int32_t x592 = -10;
	static int64_t t131 = -1049664385457227LL;

    t131 = (x589|(x590==(x591-x592)));

    if (t131 != -1LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x593 = -14;
	static int32_t x594 = INT32_MAX;
	int16_t x595 = 1;
	int64_t x596 = INT64_MAX;
	volatile int32_t t132 = 1533418;

    t132 = (x593|(x594==(x595-x596)));

    if (t132 != -14) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x601 = INT64_MIN;
	static int32_t x603 = 1;
	static volatile int64_t x604 = -1LL;
	int64_t t133 = INT64_MIN;

    t133 = (x601|(x602==(x603-x604)));

    if (t133 != INT64_MIN) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint64_t x606 = 2854742820246940511LLU;
	int16_t x607 = 502;
	static volatile int8_t x608 = INT8_MIN;
	static int32_t t134 = -16768937;

    t134 = (x605|(x606==(x607-x608)));

    if (t134 != -7) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x609 = 0;
	static uint64_t x612 = 64009261LLU;
	int32_t t135 = -2536624;

    t135 = (x609|(x610==(x611-x612)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x613 = INT8_MIN;
	int64_t x614 = 289662235031256741LL;
	int32_t x615 = -6189463;
	volatile int32_t t136 = 6150070;

    t136 = (x613|(x614==(x615-x616)));

    if (t136 != -128) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile uint16_t x617 = UINT16_MAX;
	static uint32_t x618 = 372153823U;
	uint32_t x619 = 3800750U;
	static volatile int16_t x620 = INT16_MIN;
	volatile int32_t t137 = 116531625;

    t137 = (x617|(x618==(x619-x620)));

    if (t137 != 65535) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile uint8_t x630 = 7U;
	uint8_t x631 = 18U;
	volatile int64_t x632 = -6662712327040354LL;

    t138 = (x629|(x630==(x631-x632)));

    if (t138 != INT64_MIN) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x634 = -4;
	uint8_t x635 = 1U;
	volatile int8_t x636 = -1;
	int32_t t139 = INT32_MIN;

    t139 = (x633|(x634==(x635-x636)));

    if (t139 != INT32_MIN) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x641 = 109U;
	int32_t x642 = -1;
	int32_t x643 = 37;
	int8_t x644 = INT8_MAX;
	int32_t t140 = -3605;

    t140 = (x641|(x642==(x643-x644)));

    if (t140 != 109) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x645 = UINT32_MAX;
	static int8_t x646 = 10;
	int16_t x647 = -8162;
	uint32_t t141 = UINT32_MAX;

    t141 = (x645|(x646==(x647-x648)));

    if (t141 != UINT32_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x649 = INT16_MIN;
	uint64_t x650 = UINT64_MAX;
	int16_t x651 = 5048;
	int64_t x652 = 549338LL;
	volatile int32_t t142 = 503;

    t142 = (x649|(x650==(x651-x652)));

    if (t142 != -32768) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint64_t x653 = 1030135LLU;
	volatile uint64_t x654 = UINT64_MAX;
	uint64_t x655 = 2779933360970LLU;
	int64_t x656 = 2883LL;
	volatile uint64_t t143 = 498LLU;

    t143 = (x653|(x654==(x655-x656)));

    if (t143 != 1030135LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x657 = 3589735LLU;
	int64_t x659 = INT64_MAX;
	int64_t x660 = INT64_MAX;
	uint64_t t144 = 8555413380064983LLU;

    t144 = (x657|(x658==(x659-x660)));

    if (t144 != 3589735LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x662 = -2926;
	static uint8_t x663 = UINT8_MAX;
	volatile int32_t t145 = 66;

    t145 = (x661|(x662==(x663-x664)));

    if (t145 != -1) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x665 = 61820251;
	int32_t t146 = -184;

    t146 = (x665|(x666==(x667-x668)));

    if (t146 != 61820251) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x669 = 14U;
	static uint16_t x670 = UINT16_MAX;
	uint64_t x671 = 7279050LLU;
	int32_t x672 = INT32_MIN;
	int32_t t147 = 6112;

    t147 = (x669|(x670==(x671-x672)));

    if (t147 != 14) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x674 = INT64_MIN;
	int16_t x675 = 544;
	uint8_t x676 = UINT8_MAX;
	volatile uint32_t t148 = 92338U;

    t148 = (x673|(x674==(x675-x676)));

    if (t148 != 37009U) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x677 = -1LL;
	int16_t x678 = 10766;
	int16_t x679 = INT16_MAX;
	int16_t x680 = -5216;

    t149 = (x677|(x678==(x679-x680)));

    if (t149 != -1LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x681 = 356U;
	static int8_t x683 = -1;
	int32_t x684 = INT32_MAX;
	static int32_t t150 = -5653;

    t150 = (x681|(x682==(x683-x684)));

    if (t150 != 356) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x685 = UINT32_MAX;
	uint32_t t151 = UINT32_MAX;

    t151 = (x685|(x686==(x687-x688)));

    if (t151 != UINT32_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x689 = INT32_MIN;
	int16_t x690 = INT16_MIN;
	int64_t x691 = -1LL;
	int8_t x692 = -1;
	volatile int32_t t152 = INT32_MIN;

    t152 = (x689|(x690==(x691-x692)));

    if (t152 != INT32_MIN) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x693 = 0U;
	int8_t x694 = INT8_MAX;
	int32_t x695 = 122041873;
	uint64_t x696 = 2703951773LLU;
	int32_t t153 = -2;

    t153 = (x693|(x694==(x695-x696)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x697 = INT16_MAX;
	int16_t x698 = INT16_MIN;
	uint8_t x699 = 4U;
	int8_t x700 = INT8_MIN;
	int32_t t154 = 663;

    t154 = (x697|(x698==(x699-x700)));

    if (t154 != 32767) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x702 = 1;
	uint8_t x703 = UINT8_MAX;
	static volatile int32_t t155 = -16;

    t155 = (x701|(x702==(x703-x704)));

    if (t155 != 255) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x705 = INT16_MIN;
	static int16_t x707 = -2;
	int16_t x708 = INT16_MIN;
	static volatile int32_t t156 = 802;

    t156 = (x705|(x706==(x707-x708)));

    if (t156 != -32768) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x709 = INT16_MIN;
	uint16_t x710 = 0U;
	int64_t x711 = 40980483801079091LL;
	uint16_t x712 = UINT16_MAX;

    t157 = (x709|(x710==(x711-x712)));

    if (t157 != -32768) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint16_t x714 = UINT16_MAX;
	uint64_t x715 = 4814348896055324740LLU;
	int32_t x716 = -1;
	int32_t t158 = -6;

    t158 = (x713|(x714==(x715-x716)));

    if (t158 != 2687) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x717 = 233U;
	int16_t x718 = -158;
	int8_t x719 = INT8_MIN;
	static volatile int32_t t159 = -30;

    t159 = (x717|(x718==(x719-x720)));

    if (t159 != 233) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x721 = 477500894LLU;
	uint64_t x722 = 332909121410745310LLU;
	volatile int16_t x723 = -1;

    t160 = (x721|(x722==(x723-x724)));

    if (t160 != 477500894LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint64_t x727 = 106109955538LLU;
	volatile int32_t t161 = 3;

    t161 = (x725|(x726==(x727-x728)));

    if (t161 != -4) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x729 = -250304132011LL;
	volatile int64_t x730 = INT64_MIN;
	volatile int64_t x731 = 25365LL;
	volatile int64_t t162 = -24024240LL;

    t162 = (x729|(x730==(x731-x732)));

    if (t162 != -250304132011LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x733 = -110315083;
	static uint64_t x734 = UINT64_MAX;
	int8_t x735 = -1;
	int32_t t163 = -399187635;

    t163 = (x733|(x734==(x735-x736)));

    if (t163 != -110315083) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x738 = INT64_MIN;
	volatile int16_t x739 = INT16_MIN;
	static int16_t x740 = INT16_MIN;
	volatile int32_t t164 = -1;

    t164 = (x737|(x738==(x739-x740)));

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x741 = -3;
	uint64_t x743 = 146743029960768LLU;
	volatile int16_t x744 = -1;
	volatile int32_t t165 = -16776;

    t165 = (x741|(x742==(x743-x744)));

    if (t165 != -3) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x745 = INT32_MIN;
	uint64_t x746 = 160LLU;
	static int64_t x747 = INT64_MIN;
	int8_t x748 = INT8_MIN;
	volatile int32_t t166 = INT32_MIN;

    t166 = (x745|(x746==(x747-x748)));

    if (t166 != INT32_MIN) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x749 = -27;
	int16_t x750 = INT16_MIN;
	int16_t x751 = 2;
	int32_t x752 = -713435988;
	volatile int32_t t167 = -1200;

    t167 = (x749|(x750==(x751-x752)));

    if (t167 != -27) { NG(); } else { ; }
	
}

void f168(void) {
    	static int64_t x753 = 38901550LL;
	static int32_t x754 = -1;
	int16_t x755 = 6923;
	static int8_t x756 = INT8_MIN;
	volatile int64_t t168 = 6417936621LL;

    t168 = (x753|(x754==(x755-x756)));

    if (t168 != 38901550LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint16_t x757 = 5U;
	uint64_t x759 = 1695LLU;
	static uint32_t x760 = UINT32_MAX;
	volatile int32_t t169 = -25401486;

    t169 = (x757|(x758==(x759-x760)));

    if (t169 != 5) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint16_t x762 = 1U;
	uint16_t x763 = 6755U;
	uint16_t x764 = 12U;
	volatile int64_t t170 = 107LL;

    t170 = (x761|(x762==(x763-x764)));

    if (t170 != -2263202956735648142LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x769 = INT64_MAX;
	uint16_t x770 = 13361U;
	uint8_t x771 = UINT8_MAX;
	volatile uint8_t x772 = UINT8_MAX;
	int64_t t171 = INT64_MAX;

    t171 = (x769|(x770==(x771-x772)));

    if (t171 != INT64_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x773 = -1;
	static int64_t x774 = -13984149719267129LL;
	volatile int64_t x775 = 12242775735637LL;
	int32_t t172 = 9619143;

    t172 = (x773|(x774==(x775-x776)));

    if (t172 != -1) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x777 = INT8_MIN;
	uint16_t x778 = UINT16_MAX;
	uint32_t x779 = UINT32_MAX;
	int32_t x780 = -1;
	int32_t t173 = 7802;

    t173 = (x777|(x778==(x779-x780)));

    if (t173 != -128) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x781 = 45U;
	static int16_t x782 = INT16_MAX;
	uint64_t x783 = UINT64_MAX;
	int32_t x784 = INT32_MIN;
	static volatile int32_t t174 = 1543485;

    t174 = (x781|(x782==(x783-x784)));

    if (t174 != 45) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x786 = INT8_MIN;
	uint16_t x787 = UINT16_MAX;
	int8_t x788 = INT8_MIN;

    t175 = (x785|(x786==(x787-x788)));

    if (t175 != 4140) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int16_t x789 = INT16_MIN;
	int16_t x790 = INT16_MIN;
	volatile int64_t x791 = 108LL;
	static int64_t x792 = INT64_MAX;
	static int32_t t176 = -1162852;

    t176 = (x789|(x790==(x791-x792)));

    if (t176 != -32768) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x793 = INT32_MIN;
	int8_t x794 = INT8_MAX;
	int64_t x795 = -287LL;
	static volatile uint16_t x796 = 215U;
	int32_t t177 = INT32_MIN;

    t177 = (x793|(x794==(x795-x796)));

    if (t177 != INT32_MIN) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile uint16_t x797 = UINT16_MAX;
	int16_t x798 = -11815;
	int8_t x799 = INT8_MIN;
	volatile int64_t x800 = -989563357976LL;
	volatile int32_t t178 = -2892531;

    t178 = (x797|(x798==(x799-x800)));

    if (t178 != 65535) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x801 = INT64_MIN;
	uint32_t x802 = UINT32_MAX;
	int32_t x803 = INT32_MIN;
	int64_t t179 = INT64_MIN;

    t179 = (x801|(x802==(x803-x804)));

    if (t179 != INT64_MIN) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint8_t x805 = 34U;
	uint16_t x806 = 3U;
	int32_t x807 = -1;

    t180 = (x805|(x806==(x807-x808)));

    if (t180 != 34) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint8_t x809 = 7U;
	uint8_t x810 = 12U;
	int32_t x811 = INT32_MAX;
	static volatile int64_t x812 = 33965LL;

    t181 = (x809|(x810==(x811-x812)));

    if (t181 != 7) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x813 = -1;
	int16_t x815 = INT16_MIN;
	int32_t x816 = INT32_MIN;
	int32_t t182 = 283760;

    t182 = (x813|(x814==(x815-x816)));

    if (t182 != -1) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x817 = INT64_MAX;
	static volatile int16_t x818 = 512;
	int32_t x819 = 14;
	static volatile uint8_t x820 = UINT8_MAX;
	volatile int64_t t183 = INT64_MAX;

    t183 = (x817|(x818==(x819-x820)));

    if (t183 != INT64_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x821 = 4959803LLU;
	int32_t x822 = INT32_MIN;
	static int8_t x823 = INT8_MAX;

    t184 = (x821|(x822==(x823-x824)));

    if (t184 != 4959803LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint64_t x825 = 3708LLU;
	volatile int16_t x826 = INT16_MAX;
	static volatile int8_t x828 = INT8_MAX;

    t185 = (x825|(x826==(x827-x828)));

    if (t185 != 3708LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x829 = 0U;
	int8_t x830 = -1;
	uint32_t x831 = 3U;
	int16_t x832 = -1;
	static int32_t t186 = -39138;

    t186 = (x829|(x830==(x831-x832)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x833 = INT8_MIN;
	static volatile uint32_t x834 = 24670887U;
	uint16_t x835 = UINT16_MAX;
	int8_t x836 = INT8_MIN;
	static volatile int32_t t187 = 1;

    t187 = (x833|(x834==(x835-x836)));

    if (t187 != -128) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x837 = 123971807U;
	uint16_t x838 = UINT16_MAX;
	volatile uint64_t x839 = 2710808757834606LLU;
	static volatile uint32_t t188 = 1U;

    t188 = (x837|(x838==(x839-x840)));

    if (t188 != 123971807U) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint32_t x841 = 187867U;
	uint32_t x842 = 10466U;
	static int8_t x843 = INT8_MAX;
	int8_t x844 = INT8_MAX;
	uint32_t t189 = 30715726U;

    t189 = (x841|(x842==(x843-x844)));

    if (t189 != 187867U) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x846 = -1;
	volatile int64_t t190 = INT64_MAX;

    t190 = (x845|(x846==(x847-x848)));

    if (t190 != INT64_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint8_t x850 = 29U;
	int32_t x851 = -1;
	uint16_t x852 = 986U;
	volatile int32_t t191 = -57319402;

    t191 = (x849|(x850==(x851-x852)));

    if (t191 != 127) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x854 = INT8_MAX;
	static volatile int8_t x855 = INT8_MIN;
	int16_t x856 = -4818;

    t192 = (x853|(x854==(x855-x856)));

    if (t192 != -32768) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x857 = INT16_MAX;
	volatile int64_t x858 = 5405LL;
	uint64_t x859 = 5454513LLU;
	static uint32_t x860 = 140849073U;
	static volatile int32_t t193 = 1370102;

    t193 = (x857|(x858==(x859-x860)));

    if (t193 != 32767) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x861 = -17446798829399LL;
	int32_t x862 = INT32_MIN;
	static uint32_t x863 = 206360U;
	int64_t x864 = INT64_MAX;
	static volatile int64_t t194 = 117728LL;

    t194 = (x861|(x862==(x863-x864)));

    if (t194 != -17446798829399LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x865 = INT32_MIN;
	uint32_t x866 = 81U;
	int64_t x867 = 1860335646804469LL;
	uint8_t x868 = 1U;
	int32_t t195 = INT32_MIN;

    t195 = (x865|(x866==(x867-x868)));

    if (t195 != INT32_MIN) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x869 = INT64_MAX;
	int16_t x871 = -1;

    t196 = (x869|(x870==(x871-x872)));

    if (t196 != INT64_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x878 = INT64_MAX;
	int8_t x880 = INT8_MAX;

    t197 = (x877|(x878==(x879-x880)));

    if (t197 != 1692722198055LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x882 = INT8_MAX;
	uint8_t x883 = 39U;
	int64_t t198 = -1784026357486LL;

    t198 = (x881|(x882==(x883-x884)));

    if (t198 != -832893767LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x889 = INT32_MIN;
	int32_t x890 = INT32_MAX;
	static int32_t x891 = -1;
	volatile int64_t x892 = INT64_MIN;

    t199 = (x889|(x890==(x891-x892)));

    if (t199 != INT32_MIN) { NG(); } else { ; }
	
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


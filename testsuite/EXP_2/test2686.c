
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

uint64_t x10 = 340042882LLU;
uint16_t x13 = UINT16_MAX;
int8_t x20 = INT8_MIN;
int64_t x21 = INT64_MIN;
uint64_t x24 = UINT64_MAX;
volatile uint16_t x27 = 89U;
static volatile int32_t t6 = -715;
volatile uint64_t x34 = UINT64_MAX;
static uint16_t x44 = 1U;
int8_t x47 = 60;
volatile int8_t x53 = INT8_MIN;
static volatile uint32_t x57 = 295832U;
volatile uint16_t x60 = UINT16_MAX;
volatile int64_t x64 = -21399751LL;
int16_t x66 = -3211;
static volatile int64_t x69 = -126657229LL;
static volatile int64_t t18 = -76877425LL;
int16_t x84 = 3;
volatile int64_t t22 = -876LL;
int64_t x99 = -11371602916LL;
int32_t x100 = INT32_MAX;
int16_t x117 = INT16_MIN;
static volatile int16_t x119 = INT16_MAX;
volatile int8_t x126 = -23;
volatile int16_t x133 = INT16_MAX;
static volatile int64_t t33 = -568870190660LL;
volatile uint64_t t35 = 257247LLU;
volatile int64_t x147 = -1LL;
static int32_t x148 = INT32_MIN;
volatile uint64_t t37 = 655910718658LLU;
int32_t t38 = 0;
static volatile uint64_t t44 = 1310028168578LLU;
int16_t x193 = -8;
volatile int32_t t48 = 4;
static uint32_t x205 = 43809521U;
volatile int16_t x207 = INT16_MIN;
volatile int32_t t51 = 1;
static volatile int32_t x209 = -1;
int64_t x215 = INT64_MAX;
int8_t x223 = -47;
int8_t x230 = INT8_MIN;
volatile uint16_t x235 = 13954U;
static volatile int64_t x236 = 1659236451671970044LL;
static int64_t x240 = 3166LL;
uint16_t x241 = 825U;
static int64_t x243 = 110502768398LL;
volatile int32_t t61 = 30503268;
volatile int8_t x249 = INT8_MIN;
volatile int8_t x250 = INT8_MIN;
int16_t x253 = INT16_MIN;
int32_t x257 = INT32_MAX;
uint64_t x263 = 16774214140LLU;
volatile int64_t x267 = -3LL;
uint64_t x269 = UINT64_MAX;
int8_t x280 = INT8_MAX;
volatile int32_t t69 = -185371;
static int32_t x293 = -67438540;
uint16_t x295 = 681U;
volatile int32_t x301 = INT32_MAX;
volatile uint8_t x304 = 22U;
volatile int32_t x309 = INT32_MAX;
uint64_t x312 = 19434301LLU;
int16_t x313 = -1;
uint8_t x321 = UINT8_MAX;
uint8_t x327 = 0U;
static int64_t t81 = -2LL;
volatile uint16_t x332 = 63U;
int32_t x336 = INT32_MIN;
int8_t x339 = INT8_MIN;
static volatile int64_t x342 = INT64_MIN;
int32_t x345 = INT32_MIN;
volatile uint8_t x350 = UINT8_MAX;
uint32_t x354 = 42121U;
volatile uint64_t x355 = 391278028LLU;
int32_t x357 = -1;
volatile int32_t t89 = -10770;
int32_t x369 = INT32_MIN;
int64_t x374 = INT64_MIN;
int32_t t93 = -419577724;
uint64_t x379 = 23019720363LLU;
int64_t x384 = INT64_MAX;
volatile uint16_t x386 = UINT16_MAX;
int32_t x391 = INT32_MIN;
int32_t x393 = -1;
int32_t t99 = -5563;
static int32_t x403 = -1;
int8_t x408 = INT8_MIN;
int16_t x410 = INT16_MIN;
uint64_t x416 = 207LLU;
uint64_t t103 = 564902084906948LLU;
volatile int64_t x418 = INT64_MIN;
int16_t x420 = INT16_MIN;
static uint8_t x427 = 63U;
int16_t x437 = INT16_MAX;
int64_t x439 = -160536330297LL;
static int32_t x442 = INT32_MIN;
int8_t x444 = 30;
static int32_t t110 = -14889;
uint32_t x445 = 26269U;
uint8_t x447 = 30U;
int8_t x450 = 8;
uint32_t x454 = 648U;
int16_t x457 = INT16_MAX;
static uint64_t x459 = 145157807832622568LLU;
int64_t x464 = INT64_MIN;
int32_t t116 = 444718265;
static volatile int16_t x473 = INT16_MAX;
volatile int32_t t118 = -751426;
int32_t x484 = INT32_MAX;
int16_t x488 = -3;
int32_t x491 = INT32_MIN;
volatile int64_t t122 = 1433725662950905LL;
int32_t x495 = -6008557;
int8_t x497 = INT8_MIN;
volatile int32_t x499 = INT32_MIN;
uint32_t x501 = 110781U;
static int64_t x503 = INT64_MIN;
volatile int64_t x504 = INT64_MIN;
int64_t x505 = INT64_MIN;
uint8_t x513 = 3U;
volatile int64_t x515 = INT64_MAX;
int16_t x518 = INT16_MIN;
volatile int32_t t129 = 3;
static uint64_t t130 = 3LLU;
int8_t x526 = INT8_MAX;
int64_t x528 = -975354274046LL;
volatile int8_t x533 = INT8_MIN;
int64_t x543 = -9229650378LL;
int32_t t135 = -1;
volatile int8_t x548 = INT8_MIN;
volatile int32_t t136 = -7488348;
int8_t x551 = -11;
static int64_t x555 = INT64_MIN;
int32_t x557 = INT32_MIN;
int64_t t139 = 270706972472097LL;
static uint8_t x564 = 30U;
static volatile uint8_t x569 = 26U;
uint32_t x571 = UINT32_MAX;
uint32_t x573 = 1U;
int32_t t144 = -24864;
uint32_t x584 = UINT32_MAX;
int8_t x594 = INT8_MAX;
int32_t x599 = 57;
uint8_t x605 = 4U;
int32_t x609 = 11781234;
int64_t x613 = INT64_MAX;
volatile int8_t x616 = 60;
uint16_t x618 = 1U;
int16_t x619 = INT16_MIN;
static uint16_t x623 = 0U;
volatile int32_t t155 = -23622784;
uint64_t x627 = UINT64_MAX;
static int32_t x628 = -3858793;
int8_t x634 = INT8_MIN;
volatile int32_t x648 = INT32_MIN;
volatile int32_t t161 = 10511657;
static int16_t x661 = 0;
static int16_t x673 = INT16_MIN;
volatile uint8_t x682 = UINT8_MAX;
int32_t x691 = -1;
int32_t t172 = 2049;
uint64_t x696 = UINT64_MAX;
int32_t x699 = -1;
uint64_t x703 = 17LLU;
int32_t x705 = -1;
uint8_t x716 = UINT8_MAX;
int16_t x728 = INT16_MIN;
int32_t x732 = 385;
int16_t x733 = INT16_MIN;
int32_t x735 = INT32_MIN;
uint32_t x736 = 12651U;
int16_t x740 = INT16_MIN;
uint32_t x741 = 13U;
int64_t x742 = INT64_MIN;
static uint64_t x747 = UINT64_MAX;
uint32_t x751 = UINT32_MAX;
volatile int16_t x756 = INT16_MAX;
volatile int64_t x757 = INT64_MIN;
volatile uint64_t x758 = 470LLU;
int8_t x759 = INT8_MAX;
int32_t x762 = -6930;
static uint64_t x765 = 2400536205693LLU;
static int8_t x767 = -1;
volatile int32_t x768 = -1;
int64_t x769 = INT64_MIN;
volatile int32_t t192 = -1632188;
static int64_t x776 = -1LL;
volatile int64_t t193 = -120779006180109310LL;
uint16_t x777 = 4134U;
int32_t x790 = INT32_MIN;
static int8_t x795 = INT8_MAX;
uint32_t x798 = 405799254U;


void f0(void) {
    	volatile uint32_t x1 = 6U;
	uint16_t x2 = 36U;
	volatile int32_t x3 = -1;
	uint8_t x4 = UINT8_MAX;
	static volatile int32_t t0 = -6815;

    t0 = ((x1<=(x2^x3))&x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x5 = 1157U;
	static uint8_t x6 = 3U;
	int64_t x7 = INT64_MIN;
	int8_t x8 = INT8_MIN;
	volatile int32_t t1 = 7650290;

    t1 = ((x5<=(x6^x7))&x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int8_t x9 = -20;
	int8_t x11 = INT8_MAX;
	volatile uint32_t x12 = 27U;
	uint32_t t2 = 21141942U;

    t2 = ((x9<=(x10^x11))&x12);

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x14 = INT64_MAX;
	volatile int8_t x15 = INT8_MAX;
	int64_t x16 = INT64_MIN;
	static volatile int64_t t3 = 3310386LL;

    t3 = ((x13<=(x14^x15))&x16);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MIN;
	static volatile uint32_t x18 = 1U;
	int32_t x19 = INT32_MIN;
	volatile int32_t t4 = -39569346;

    t4 = ((x17<=(x18^x19))&x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint64_t x22 = UINT64_MAX;
	int32_t x23 = INT32_MIN;
	uint64_t t5 = 15741998186LLU;

    t5 = ((x21<=(x22^x23))&x24);

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = 23U;
	int8_t x26 = INT8_MIN;
	static volatile int16_t x28 = INT16_MIN;

    t6 = ((x25<=(x26^x27))&x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x29 = 0;
	uint8_t x30 = 11U;
	int32_t x31 = 21;
	int64_t x32 = INT64_MAX;
	int64_t t7 = -18158818464359120LL;

    t7 = ((x29<=(x30^x31))&x32);

    if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x33 = INT8_MIN;
	int8_t x35 = INT8_MIN;
	static int32_t x36 = -1;
	volatile int32_t t8 = 447;

    t8 = ((x33<=(x34^x35))&x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint8_t x37 = UINT8_MAX;
	volatile int32_t x38 = INT32_MIN;
	uint32_t x39 = UINT32_MAX;
	int8_t x40 = -1;
	volatile int32_t t9 = 6;

    t9 = ((x37<=(x38^x39))&x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MIN;
	volatile int16_t x42 = INT16_MIN;
	int8_t x43 = INT8_MIN;
	int32_t t10 = -432379112;

    t10 = ((x41<=(x42^x43))&x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = INT64_MAX;
	int32_t x46 = INT32_MIN;
	int8_t x48 = -1;
	volatile int32_t t11 = -11138151;

    t11 = ((x45<=(x46^x47))&x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = -37523;
	uint16_t x50 = UINT16_MAX;
	int16_t x51 = INT16_MIN;
	static uint8_t x52 = 1U;
	volatile int32_t t12 = -16354420;

    t12 = ((x49<=(x50^x51))&x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x54 = -1LL;
	int16_t x55 = INT16_MIN;
	int8_t x56 = INT8_MAX;
	int32_t t13 = 37086;

    t13 = ((x53<=(x54^x55))&x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x58 = 1U;
	volatile uint8_t x59 = 15U;
	int32_t t14 = 74722;

    t14 = ((x57<=(x58^x59))&x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = -1;
	volatile uint32_t x62 = UINT32_MAX;
	uint16_t x63 = 12521U;
	int64_t t15 = 245LL;

    t15 = ((x61<=(x62^x63))&x64);

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x65 = INT16_MAX;
	static int32_t x67 = -1;
	uint64_t x68 = 109774840914736LLU;
	volatile uint64_t t16 = 1LLU;

    t16 = ((x65<=(x66^x67))&x68);

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint32_t x70 = 627U;
	int32_t x71 = -108;
	uint64_t x72 = 1480192LLU;
	static uint64_t t17 = 17848LLU;

    t17 = ((x69<=(x70^x71))&x72);

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = INT8_MAX;
	int16_t x74 = INT16_MAX;
	int32_t x75 = 2815;
	static int64_t x76 = INT64_MIN;

    t18 = ((x73<=(x74^x75))&x76);

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = -4149766575LL;
	static int8_t x78 = -1;
	volatile int64_t x79 = INT64_MIN;
	int8_t x80 = INT8_MIN;
	volatile int32_t t19 = 120764916;

    t19 = ((x77<=(x78^x79))&x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x81 = 564570768LLU;
	int64_t x82 = INT64_MAX;
	int32_t x83 = 1043426940;
	static int32_t t20 = -372366;

    t20 = ((x81<=(x82^x83))&x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = INT8_MIN;
	volatile int32_t x86 = INT32_MIN;
	volatile uint8_t x87 = 6U;
	uint32_t x88 = 28339635U;
	volatile uint32_t t21 = 837291010U;

    t21 = ((x85<=(x86^x87))&x88);

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x89 = 57847U;
	volatile int32_t x90 = INT32_MIN;
	static uint16_t x91 = 10822U;
	int64_t x92 = INT64_MIN;

    t22 = ((x89<=(x90^x91))&x92);

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile uint64_t x93 = 31576487LLU;
	uint8_t x94 = 2U;
	int16_t x95 = INT16_MIN;
	int64_t x96 = INT64_MAX;
	volatile int64_t t23 = 96956851LL;

    t23 = ((x93<=(x94^x95))&x96);

    if (t23 != 1LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = 97507;
	static uint64_t x98 = UINT64_MAX;
	volatile int32_t t24 = -1;

    t24 = ((x97<=(x98^x99))&x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x101 = 579937486740316562LLU;
	uint32_t x102 = UINT32_MAX;
	int32_t x103 = -8146614;
	static uint8_t x104 = 25U;
	int32_t t25 = -3943;

    t25 = ((x101<=(x102^x103))&x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int8_t x105 = INT8_MAX;
	uint64_t x106 = 39199LLU;
	volatile int64_t x107 = 802808LL;
	static int32_t x108 = INT32_MIN;
	volatile int32_t t26 = -7277191;

    t26 = ((x105<=(x106^x107))&x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x109 = -1;
	static int64_t x110 = INT64_MAX;
	uint64_t x111 = 222276658160LLU;
	volatile uint16_t x112 = 14U;
	volatile int32_t t27 = -1;

    t27 = ((x109<=(x110^x111))&x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x113 = INT8_MAX;
	int32_t x114 = INT32_MAX;
	volatile int16_t x115 = INT16_MAX;
	static int8_t x116 = -5;
	volatile int32_t t28 = 53;

    t28 = ((x113<=(x114^x115))&x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile uint16_t x118 = UINT16_MAX;
	int32_t x120 = INT32_MIN;
	volatile int32_t t29 = 0;

    t29 = ((x117<=(x118^x119))&x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = 15;
	int8_t x122 = INT8_MIN;
	uint8_t x123 = 0U;
	uint16_t x124 = 0U;
	volatile int32_t t30 = 28237;

    t30 = ((x121<=(x122^x123))&x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = 805725142214LL;
	volatile int16_t x127 = INT16_MIN;
	volatile int32_t x128 = INT32_MIN;
	int32_t t31 = 10256;

    t31 = ((x125<=(x126^x127))&x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = INT16_MAX;
	uint8_t x130 = 60U;
	int32_t x131 = INT32_MIN;
	static uint8_t x132 = 15U;
	int32_t t32 = 332;

    t32 = ((x129<=(x130^x131))&x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x134 = INT16_MIN;
	volatile int32_t x135 = -1;
	int64_t x136 = INT64_MIN;

    t33 = ((x133<=(x134^x135))&x136);

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x137 = 1U;
	int16_t x138 = -1;
	static volatile int32_t x139 = INT32_MIN;
	int32_t x140 = INT32_MAX;
	volatile int32_t t34 = 3600889;

    t34 = ((x137<=(x138^x139))&x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x141 = 7027U;
	volatile int16_t x142 = INT16_MIN;
	int64_t x143 = INT64_MIN;
	uint64_t x144 = 2178540908LLU;

    t35 = ((x141<=(x142^x143))&x144);

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = INT64_MIN;
	volatile uint8_t x146 = UINT8_MAX;
	static volatile int32_t t36 = -25;

    t36 = ((x145<=(x146^x147))&x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = INT64_MIN;
	static int16_t x150 = -1;
	int8_t x151 = INT8_MIN;
	static uint64_t x152 = UINT64_MAX;

    t37 = ((x149<=(x150^x151))&x152);

    if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x153 = -1;
	volatile int32_t x154 = -175;
	static uint16_t x155 = 14U;
	int32_t x156 = -15;

    t38 = ((x153<=(x154^x155))&x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = INT8_MIN;
	int64_t x158 = -1LL;
	int32_t x159 = INT32_MIN;
	static int8_t x160 = INT8_MIN;
	volatile int32_t t39 = 3455;

    t39 = ((x157<=(x158^x159))&x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = 87;
	int32_t x162 = 63864;
	static uint64_t x163 = 13033293879344582LLU;
	int16_t x164 = 4020;
	int32_t t40 = -29977731;

    t40 = ((x161<=(x162^x163))&x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = -1;
	static int64_t x166 = INT64_MAX;
	uint16_t x167 = UINT16_MAX;
	int8_t x168 = -21;
	int32_t t41 = 1007322;

    t41 = ((x165<=(x166^x167))&x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint32_t x169 = 7056922U;
	int16_t x170 = INT16_MIN;
	uint16_t x171 = 10U;
	static int16_t x172 = -1;
	volatile int32_t t42 = -245;

    t42 = ((x169<=(x170^x171))&x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x173 = 76U;
	uint8_t x174 = UINT8_MAX;
	uint64_t x175 = 7104912141595LLU;
	volatile int16_t x176 = INT16_MAX;
	volatile int32_t t43 = -54082;

    t43 = ((x173<=(x174^x175))&x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = INT8_MAX;
	uint16_t x178 = 7U;
	uint8_t x179 = 1U;
	uint64_t x180 = 299502596239984648LLU;

    t44 = ((x177<=(x178^x179))&x180);

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x181 = INT32_MIN;
	int8_t x182 = INT8_MAX;
	volatile int64_t x183 = INT64_MAX;
	static volatile uint8_t x184 = 2U;
	int32_t t45 = 3;

    t45 = ((x181<=(x182^x183))&x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x185 = -87682;
	uint32_t x186 = 700U;
	int64_t x187 = INT64_MAX;
	static int64_t x188 = -1LL;
	volatile int64_t t46 = 3650524LL;

    t46 = ((x185<=(x186^x187))&x188);

    if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x189 = INT16_MIN;
	int32_t x190 = -426;
	static uint32_t x191 = 19535172U;
	int32_t x192 = INT32_MIN;
	volatile int32_t t47 = -27387;

    t47 = ((x189<=(x190^x191))&x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x194 = -1;
	uint32_t x195 = UINT32_MAX;
	int8_t x196 = INT8_MAX;

    t48 = ((x193<=(x194^x195))&x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x197 = 6822641970249LLU;
	int32_t x198 = -1;
	uint32_t x199 = 23U;
	static uint64_t x200 = 14576LLU;
	uint64_t t49 = 84671797731LLU;

    t49 = ((x197<=(x198^x199))&x200);

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = -7;
	int16_t x202 = -10557;
	int64_t x203 = INT64_MAX;
	uint64_t x204 = UINT64_MAX;
	uint64_t t50 = 7441481433895182LLU;

    t50 = ((x201<=(x202^x203))&x204);

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x206 = INT32_MIN;
	int16_t x208 = INT16_MAX;

    t51 = ((x205<=(x206^x207))&x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x210 = 0;
	static int32_t x211 = INT32_MAX;
	volatile uint8_t x212 = 18U;
	volatile int32_t t52 = -1;

    t52 = ((x209<=(x210^x211))&x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint8_t x213 = 0U;
	int64_t x214 = INT64_MIN;
	static uint64_t x216 = UINT64_MAX;
	uint64_t t53 = 7911318LLU;

    t53 = ((x213<=(x214^x215))&x216);

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = INT8_MAX;
	static int16_t x218 = 1;
	static int32_t x219 = -1;
	int64_t x220 = INT64_MIN;
	int64_t t54 = 8121042458LL;

    t54 = ((x217<=(x218^x219))&x220);

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = -1;
	int32_t x222 = INT32_MIN;
	int64_t x224 = INT64_MIN;
	volatile int64_t t55 = 1182736458666107LL;

    t55 = ((x221<=(x222^x223))&x224);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = 7511LL;
	volatile int64_t x226 = 7893369LL;
	int64_t x227 = -1LL;
	int16_t x228 = INT16_MIN;
	int32_t t56 = -1;

    t56 = ((x225<=(x226^x227))&x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = INT32_MIN;
	volatile int32_t x231 = -110042687;
	static uint64_t x232 = 71LLU;
	volatile uint64_t t57 = 102556LLU;

    t57 = ((x229<=(x230^x231))&x232);

    if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x233 = UINT8_MAX;
	int8_t x234 = -1;
	volatile int64_t t58 = 1134756764979524355LL;

    t58 = ((x233<=(x234^x235))&x236);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = -1;
	static int16_t x238 = -1;
	int64_t x239 = -1LL;
	int64_t t59 = 7483041462904565LL;

    t59 = ((x237<=(x238^x239))&x240);

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x242 = 2U;
	static int8_t x244 = INT8_MIN;
	volatile int32_t t60 = 8;

    t60 = ((x241<=(x242^x243))&x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x245 = 17U;
	static int64_t x246 = INT64_MIN;
	int64_t x247 = INT64_MAX;
	int32_t x248 = -339;

    t61 = ((x245<=(x246^x247))&x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x251 = INT32_MIN;
	int64_t x252 = INT64_MIN;
	int64_t t62 = 30261LL;

    t62 = ((x249<=(x250^x251))&x252);

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x254 = -1;
	int16_t x255 = 935;
	int64_t x256 = -1101005230LL;
	volatile int64_t t63 = 422295729066232749LL;

    t63 = ((x253<=(x254^x255))&x256);

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x258 = 106020225LL;
	uint32_t x259 = 6U;
	uint8_t x260 = UINT8_MAX;
	int32_t t64 = 83;

    t64 = ((x257<=(x258^x259))&x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = -1;
	int8_t x262 = INT8_MIN;
	int8_t x264 = INT8_MIN;
	int32_t t65 = -128632;

    t65 = ((x261<=(x262^x263))&x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint8_t x265 = 1U;
	uint16_t x266 = 23418U;
	uint32_t x268 = 353U;
	volatile uint32_t t66 = 250242015U;

    t66 = ((x265<=(x266^x267))&x268);

    if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x270 = INT8_MIN;
	static volatile int64_t x271 = -374048207LL;
	uint64_t x272 = 425228565610LLU;
	volatile uint64_t t67 = 20LLU;

    t67 = ((x269<=(x270^x271))&x272);

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = 7;
	static uint32_t x274 = UINT32_MAX;
	int8_t x275 = -10;
	uint8_t x276 = 0U;
	volatile int32_t t68 = 3042668;

    t68 = ((x273<=(x274^x275))&x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = INT16_MIN;
	volatile int16_t x278 = -15688;
	int8_t x279 = INT8_MIN;

    t69 = ((x277<=(x278^x279))&x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x281 = INT32_MIN;
	uint8_t x282 = UINT8_MAX;
	int16_t x283 = 0;
	int16_t x284 = INT16_MAX;
	int32_t t70 = -17262;

    t70 = ((x281<=(x282^x283))&x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = INT64_MIN;
	static volatile int8_t x286 = INT8_MIN;
	int32_t x287 = 719339185;
	volatile int16_t x288 = 1;
	volatile int32_t t71 = 317017;

    t71 = ((x285<=(x286^x287))&x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint8_t x289 = 66U;
	uint16_t x290 = UINT16_MAX;
	int16_t x291 = INT16_MIN;
	uint32_t x292 = 21698075U;
	volatile uint32_t t72 = 3259U;

    t72 = ((x289<=(x290^x291))&x292);

    if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x294 = UINT32_MAX;
	uint64_t x296 = 734141639522LLU;
	uint64_t t73 = 12856730418816141LLU;

    t73 = ((x293<=(x294^x295))&x296);

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint8_t x297 = 0U;
	static int16_t x298 = INT16_MIN;
	static uint64_t x299 = UINT64_MAX;
	uint8_t x300 = UINT8_MAX;
	volatile int32_t t74 = 72085923;

    t74 = ((x297<=(x298^x299))&x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x302 = INT32_MIN;
	uint16_t x303 = 1U;
	volatile int32_t t75 = 15059;

    t75 = ((x301<=(x302^x303))&x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = INT64_MAX;
	int64_t x306 = INT64_MIN;
	uint8_t x307 = UINT8_MAX;
	volatile int64_t x308 = INT64_MIN;
	volatile int64_t t76 = 202505LL;

    t76 = ((x305<=(x306^x307))&x308);

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x310 = INT8_MIN;
	int8_t x311 = -1;
	volatile uint64_t t77 = 355980143064967LLU;

    t77 = ((x309<=(x310^x311))&x312);

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint32_t x314 = 472U;
	uint8_t x315 = UINT8_MAX;
	uint16_t x316 = 1U;
	static int32_t t78 = 23;

    t78 = ((x313<=(x314^x315))&x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x317 = UINT64_MAX;
	static int32_t x318 = INT32_MIN;
	int32_t x319 = -58;
	uint64_t x320 = UINT64_MAX;
	volatile uint64_t t79 = 29487653LLU;

    t79 = ((x317<=(x318^x319))&x320);

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint32_t x322 = 74U;
	static uint64_t x323 = 21196087992415623LLU;
	volatile int32_t x324 = INT32_MIN;
	int32_t t80 = -30744940;

    t80 = ((x321<=(x322^x323))&x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x325 = INT32_MIN;
	volatile int64_t x326 = -1LL;
	static int64_t x328 = INT64_MIN;

    t81 = ((x325<=(x326^x327))&x328);

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = INT64_MAX;
	static volatile int8_t x330 = INT8_MAX;
	static int8_t x331 = INT8_MAX;
	volatile int32_t t82 = -1;

    t82 = ((x329<=(x330^x331))&x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint32_t x333 = 1306U;
	volatile int16_t x334 = INT16_MIN;
	int32_t x335 = 69576;
	static int32_t t83 = 6006793;

    t83 = ((x333<=(x334^x335))&x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x337 = UINT64_MAX;
	int64_t x338 = INT64_MIN;
	int8_t x340 = INT8_MIN;
	volatile int32_t t84 = 2983;

    t84 = ((x337<=(x338^x339))&x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x341 = UINT32_MAX;
	int16_t x343 = -1;
	uint8_t x344 = UINT8_MAX;
	volatile int32_t t85 = -627669;

    t85 = ((x341<=(x342^x343))&x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x346 = INT8_MAX;
	uint8_t x347 = UINT8_MAX;
	volatile int8_t x348 = 1;
	volatile int32_t t86 = 0;

    t86 = ((x345<=(x346^x347))&x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint8_t x349 = 4U;
	uint32_t x351 = 31U;
	int64_t x352 = -1LL;
	volatile int64_t t87 = -11171161329LL;

    t87 = ((x349<=(x350^x351))&x352);

    if (t87 != 1LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x353 = 431U;
	int16_t x356 = INT16_MIN;
	static volatile int32_t t88 = 206681;

    t88 = ((x353<=(x354^x355))&x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x358 = -2;
	int32_t x359 = INT32_MIN;
	int8_t x360 = INT8_MIN;

    t89 = ((x357<=(x358^x359))&x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x361 = INT16_MIN;
	static int32_t x362 = -2268082;
	int16_t x363 = 5966;
	int16_t x364 = 8;
	static int32_t t90 = 4;

    t90 = ((x361<=(x362^x363))&x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x365 = 21LLU;
	static int8_t x366 = 1;
	volatile int8_t x367 = -1;
	uint16_t x368 = UINT16_MAX;
	int32_t t91 = 30448502;

    t91 = ((x365<=(x366^x367))&x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x370 = INT64_MAX;
	int64_t x371 = INT64_MAX;
	uint16_t x372 = 3406U;
	static int32_t t92 = -238870;

    t92 = ((x369<=(x370^x371))&x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x373 = 320;
	int64_t x375 = INT64_MIN;
	static int32_t x376 = 23;

    t93 = ((x373<=(x374^x375))&x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint32_t x377 = UINT32_MAX;
	static int16_t x378 = -13;
	int64_t x380 = -1LL;
	volatile int64_t t94 = 7LL;

    t94 = ((x377<=(x378^x379))&x380);

    if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x381 = UINT8_MAX;
	int64_t x382 = INT64_MIN;
	uint8_t x383 = UINT8_MAX;
	volatile int64_t t95 = 18811498843LL;

    t95 = ((x381<=(x382^x383))&x384);

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = INT32_MAX;
	static int32_t x387 = -1;
	int64_t x388 = -1LL;
	volatile int64_t t96 = -9617570154655033LL;

    t96 = ((x385<=(x386^x387))&x388);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x389 = -31;
	int16_t x390 = -10911;
	int8_t x392 = -1;
	volatile int32_t t97 = 3777;

    t97 = ((x389<=(x390^x391))&x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x394 = 2128;
	static int8_t x395 = INT8_MAX;
	uint32_t x396 = UINT32_MAX;
	uint32_t t98 = 77744990U;

    t98 = ((x393<=(x394^x395))&x396);

    if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x397 = 30U;
	uint16_t x398 = 0U;
	int64_t x399 = INT64_MAX;
	int32_t x400 = -1;

    t99 = ((x397<=(x398^x399))&x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = INT32_MAX;
	volatile int64_t x402 = -1LL;
	volatile int64_t x404 = INT64_MIN;
	volatile int64_t t100 = -49492460030LL;

    t100 = ((x401<=(x402^x403))&x404);

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x405 = 14981710392LLU;
	volatile uint8_t x406 = UINT8_MAX;
	uint64_t x407 = 69613LLU;
	int32_t t101 = -1;

    t101 = ((x405<=(x406^x407))&x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = 0;
	uint64_t x411 = 36409756302LLU;
	static uint64_t x412 = 11675374LLU;
	volatile uint64_t t102 = 1463924170186LLU;

    t102 = ((x409<=(x410^x411))&x412);

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x413 = -1LL;
	volatile int32_t x414 = -219776;
	int16_t x415 = -1;

    t103 = ((x413<=(x414^x415))&x416);

    if (t103 != 1LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x417 = UINT64_MAX;
	int64_t x419 = 160504LL;
	static int32_t t104 = -899110;

    t104 = ((x417<=(x418^x419))&x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x421 = 0U;
	uint64_t x422 = UINT64_MAX;
	int16_t x423 = INT16_MIN;
	int32_t x424 = INT32_MIN;
	int32_t t105 = 251653;

    t105 = ((x421<=(x422^x423))&x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = INT16_MIN;
	int32_t x426 = -1;
	uint16_t x428 = 31U;
	int32_t t106 = 3682;

    t106 = ((x425<=(x426^x427))&x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x429 = 2005U;
	uint16_t x430 = 259U;
	static int32_t x431 = -5370695;
	uint32_t x432 = 157722U;
	uint32_t t107 = 48621U;

    t107 = ((x429<=(x430^x431))&x432);

    if (t107 != 0U) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = INT32_MAX;
	int16_t x434 = -72;
	int64_t x435 = INT64_MIN;
	int16_t x436 = INT16_MIN;
	int32_t t108 = 2112;

    t108 = ((x433<=(x434^x435))&x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x438 = INT16_MIN;
	uint32_t x440 = 24795U;
	volatile uint32_t t109 = 9471U;

    t109 = ((x437<=(x438^x439))&x440);

    if (t109 != 1U) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = -1;
	uint8_t x443 = 2U;

    t110 = ((x441<=(x442^x443))&x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x446 = -30735232;
	int32_t x448 = INT32_MIN;
	int32_t t111 = -2033;

    t111 = ((x445<=(x446^x447))&x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = 17372319708352LL;
	static uint8_t x451 = 3U;
	static int16_t x452 = INT16_MAX;
	int32_t t112 = -1;

    t112 = ((x449<=(x450^x451))&x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint32_t x453 = UINT32_MAX;
	uint32_t x455 = 31U;
	volatile int32_t x456 = INT32_MAX;
	int32_t t113 = -346124833;

    t113 = ((x453<=(x454^x455))&x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x458 = -2748703551908090101LL;
	int64_t x460 = INT64_MIN;
	int64_t t114 = 251577392632LL;

    t114 = ((x457<=(x458^x459))&x460);

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x461 = 0U;
	int32_t x462 = INT32_MAX;
	int32_t x463 = -221;
	volatile int64_t t115 = 170LL;

    t115 = ((x461<=(x462^x463))&x464);

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x465 = INT32_MAX;
	uint32_t x466 = UINT32_MAX;
	int64_t x467 = -72LL;
	int16_t x468 = INT16_MAX;

    t116 = ((x465<=(x466^x467))&x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = INT8_MIN;
	static int32_t x470 = -1;
	static int8_t x471 = 1;
	volatile uint8_t x472 = 2U;
	volatile int32_t t117 = -49;

    t117 = ((x469<=(x470^x471))&x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x474 = INT16_MIN;
	static uint64_t x475 = 958842LLU;
	static uint8_t x476 = 1U;

    t118 = ((x473<=(x474^x475))&x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x477 = -22846565;
	int32_t x478 = INT32_MAX;
	int32_t x479 = 132;
	static int8_t x480 = 2;
	volatile int32_t t119 = 1;

    t119 = ((x477<=(x478^x479))&x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint64_t x481 = UINT64_MAX;
	int32_t x482 = INT32_MIN;
	int32_t x483 = -1;
	static volatile int32_t t120 = 0;

    t120 = ((x481<=(x482^x483))&x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = INT16_MIN;
	uint64_t x486 = 1070159161768741LLU;
	volatile int64_t x487 = -1LL;
	int32_t t121 = -451190;

    t121 = ((x485<=(x486^x487))&x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x489 = INT64_MIN;
	int8_t x490 = INT8_MIN;
	int64_t x492 = -25LL;

    t122 = ((x489<=(x490^x491))&x492);

    if (t122 != 1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x493 = INT16_MIN;
	int16_t x494 = INT16_MAX;
	int8_t x496 = 16;
	int32_t t123 = -5772;

    t123 = ((x493<=(x494^x495))&x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x498 = INT8_MIN;
	uint64_t x500 = 25027494871366LLU;
	volatile uint64_t t124 = 101272061945LLU;

    t124 = ((x497<=(x498^x499))&x500);

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x502 = INT16_MIN;
	int64_t t125 = 538436441065123247LL;

    t125 = ((x501<=(x502^x503))&x504);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint64_t x506 = 3531LLU;
	int64_t x507 = 251825946293LL;
	int64_t x508 = -10046829278729166LL;
	int64_t t126 = -465LL;

    t126 = ((x505<=(x506^x507))&x508);

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x509 = INT32_MIN;
	volatile uint8_t x510 = UINT8_MAX;
	uint64_t x511 = UINT64_MAX;
	static volatile uint8_t x512 = UINT8_MAX;
	static volatile int32_t t127 = 78;

    t127 = ((x509<=(x510^x511))&x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint8_t x514 = 1U;
	static int8_t x516 = INT8_MIN;
	volatile int32_t t128 = -1;

    t128 = ((x513<=(x514^x515))&x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = INT64_MAX;
	volatile uint32_t x519 = 5689502U;
	static volatile int8_t x520 = INT8_MAX;

    t129 = ((x517<=(x518^x519))&x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = INT8_MAX;
	int16_t x522 = -1;
	int16_t x523 = -1;
	static uint64_t x524 = 943441382048161065LLU;

    t130 = ((x521<=(x522^x523))&x524);

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x525 = INT32_MIN;
	static int16_t x527 = INT16_MIN;
	int64_t t131 = -91LL;

    t131 = ((x525<=(x526^x527))&x528);

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x529 = 89LLU;
	uint16_t x530 = UINT16_MAX;
	uint32_t x531 = 13U;
	int64_t x532 = INT64_MAX;
	int64_t t132 = 1LL;

    t132 = ((x529<=(x530^x531))&x532);

    if (t132 != 1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x534 = INT64_MIN;
	int32_t x535 = INT32_MIN;
	static int16_t x536 = INT16_MAX;
	static int32_t t133 = 87;

    t133 = ((x533<=(x534^x535))&x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint8_t x537 = UINT8_MAX;
	int32_t x538 = 59916;
	volatile uint16_t x539 = 19U;
	volatile int8_t x540 = INT8_MIN;
	int32_t t134 = 10969;

    t134 = ((x537<=(x538^x539))&x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x541 = INT64_MAX;
	int64_t x542 = 27795LL;
	int16_t x544 = INT16_MAX;

    t135 = ((x541<=(x542^x543))&x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x545 = -1;
	int16_t x546 = 2;
	uint16_t x547 = 2U;

    t136 = ((x545<=(x546^x547))&x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x549 = 4149U;
	volatile int16_t x550 = 103;
	int32_t x552 = INT32_MIN;
	static int32_t t137 = -1;

    t137 = ((x549<=(x550^x551))&x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x553 = INT64_MAX;
	int32_t x554 = INT32_MIN;
	volatile uint64_t x556 = 6456949836787LLU;
	volatile uint64_t t138 = 122409143213LLU;

    t138 = ((x553<=(x554^x555))&x556);

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x558 = 680U;
	int64_t x559 = 115146741179LL;
	volatile int64_t x560 = 320426LL;

    t139 = ((x557<=(x558^x559))&x560);

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x561 = 58U;
	int16_t x562 = INT16_MAX;
	int32_t x563 = INT32_MAX;
	int32_t t140 = 114;

    t140 = ((x561<=(x562^x563))&x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x565 = INT8_MAX;
	int32_t x566 = INT32_MAX;
	int32_t x567 = INT32_MAX;
	static int64_t x568 = INT64_MIN;
	volatile int64_t t141 = 43LL;

    t141 = ((x565<=(x566^x567))&x568);

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x570 = INT8_MIN;
	int32_t x572 = -1;
	static volatile int32_t t142 = -448864;

    t142 = ((x569<=(x570^x571))&x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x574 = UINT16_MAX;
	int8_t x575 = -1;
	static int32_t x576 = -17;
	static volatile int32_t t143 = -630805;

    t143 = ((x573<=(x574^x575))&x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x577 = -154LL;
	uint32_t x578 = UINT32_MAX;
	static int32_t x579 = INT32_MIN;
	uint16_t x580 = UINT16_MAX;

    t144 = ((x577<=(x578^x579))&x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x581 = 31877160U;
	uint16_t x582 = 2042U;
	static int16_t x583 = 932;
	uint32_t t145 = 1180379U;

    t145 = ((x581<=(x582^x583))&x584);

    if (t145 != 0U) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x585 = -282;
	volatile int64_t x586 = INT64_MAX;
	volatile uint64_t x587 = 14591582429829LLU;
	uint8_t x588 = 0U;
	int32_t t146 = 1;

    t146 = ((x585<=(x586^x587))&x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = INT16_MIN;
	int8_t x590 = INT8_MIN;
	uint64_t x591 = 787225322895772LLU;
	uint8_t x592 = 54U;
	volatile int32_t t147 = -2;

    t147 = ((x589<=(x590^x591))&x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x593 = UINT8_MAX;
	int8_t x595 = -50;
	uint64_t x596 = 4394210310LLU;
	uint64_t t148 = 6543LLU;

    t148 = ((x593<=(x594^x595))&x596);

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x597 = -1;
	int16_t x598 = -1;
	uint32_t x600 = 240565033U;
	uint32_t t149 = 3U;

    t149 = ((x597<=(x598^x599))&x600);

    if (t149 != 0U) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x601 = 424;
	int8_t x602 = 49;
	static int32_t x603 = -6;
	static int64_t x604 = INT64_MIN;
	volatile int64_t t150 = 6871LL;

    t150 = ((x601<=(x602^x603))&x604);

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x606 = -92;
	uint16_t x607 = 283U;
	static volatile int8_t x608 = INT8_MAX;
	int32_t t151 = -1056911796;

    t151 = ((x605<=(x606^x607))&x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x610 = -1;
	int32_t x611 = INT32_MAX;
	int64_t x612 = -1LL;
	int64_t t152 = 229286LL;

    t152 = ((x609<=(x610^x611))&x612);

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x614 = 1155994056U;
	static int64_t x615 = 249123200LL;
	volatile int32_t t153 = 10613703;

    t153 = ((x613<=(x614^x615))&x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = 0;
	uint16_t x620 = 84U;
	volatile int32_t t154 = -215405028;

    t154 = ((x617<=(x618^x619))&x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = 50731414148571964LL;
	int64_t x622 = INT64_MAX;
	int16_t x624 = INT16_MAX;

    t155 = ((x621<=(x622^x623))&x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = 4LL;
	int8_t x626 = INT8_MIN;
	volatile int32_t t156 = -255920027;

    t156 = ((x625<=(x626^x627))&x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x629 = INT8_MIN;
	uint64_t x630 = 473898057120699611LLU;
	uint16_t x631 = 1513U;
	uint64_t x632 = UINT64_MAX;
	static uint64_t t157 = 0LLU;

    t157 = ((x629<=(x630^x631))&x632);

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = INT32_MIN;
	volatile int8_t x635 = 6;
	static uint64_t x636 = 124078LLU;
	volatile uint64_t t158 = 41880289419051LLU;

    t158 = ((x633<=(x634^x635))&x636);

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x637 = 0LL;
	static int64_t x638 = 46LL;
	int8_t x639 = 11;
	volatile int16_t x640 = -1;
	int32_t t159 = 74;

    t159 = ((x637<=(x638^x639))&x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = -1;
	static int32_t x642 = INT32_MAX;
	uint8_t x643 = 0U;
	uint32_t x644 = 118U;
	volatile uint32_t t160 = 378844U;

    t160 = ((x641<=(x642^x643))&x644);

    if (t160 != 0U) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = INT64_MIN;
	int16_t x646 = INT16_MIN;
	static int8_t x647 = INT8_MIN;

    t161 = ((x645<=(x646^x647))&x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x649 = -1;
	int64_t x650 = INT64_MAX;
	uint32_t x651 = 1993562948U;
	int64_t x652 = -1LL;
	volatile int64_t t162 = 48356019877905214LL;

    t162 = ((x649<=(x650^x651))&x652);

    if (t162 != 1LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int64_t x653 = INT64_MAX;
	int32_t x654 = INT32_MAX;
	static int16_t x655 = INT16_MAX;
	int64_t x656 = -1LL;
	int64_t t163 = 179813LL;

    t163 = ((x653<=(x654^x655))&x656);

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x657 = 14U;
	static volatile int8_t x658 = INT8_MAX;
	int8_t x659 = INT8_MIN;
	int64_t x660 = INT64_MAX;
	int64_t t164 = 3081070021800252LL;

    t164 = ((x657<=(x658^x659))&x660);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x662 = 23U;
	int64_t x663 = -1LL;
	uint32_t x664 = UINT32_MAX;
	uint32_t t165 = 321U;

    t165 = ((x661<=(x662^x663))&x664);

    if (t165 != 0U) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint32_t x665 = UINT32_MAX;
	uint16_t x666 = UINT16_MAX;
	uint64_t x667 = 11938336296LLU;
	volatile int16_t x668 = INT16_MIN;
	volatile int32_t t166 = 30502004;

    t166 = ((x665<=(x666^x667))&x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x669 = 18U;
	int64_t x670 = -1LL;
	int32_t x671 = -1;
	static int32_t x672 = INT32_MAX;
	volatile int32_t t167 = 851692860;

    t167 = ((x669<=(x670^x671))&x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x674 = UINT64_MAX;
	int8_t x675 = INT8_MIN;
	uint32_t x676 = 676568U;
	uint32_t t168 = 27U;

    t168 = ((x673<=(x674^x675))&x676);

    if (t168 != 0U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x677 = 52288303044539346LLU;
	uint16_t x678 = 1U;
	int32_t x679 = -1;
	int32_t x680 = INT32_MIN;
	int32_t t169 = -577800;

    t169 = ((x677<=(x678^x679))&x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint8_t x681 = 125U;
	int32_t x683 = -1;
	uint64_t x684 = 87LLU;
	uint64_t t170 = 224LLU;

    t170 = ((x681<=(x682^x683))&x684);

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x685 = 6867795LL;
	volatile uint32_t x686 = UINT32_MAX;
	uint8_t x687 = 63U;
	static uint32_t x688 = 44U;
	volatile uint32_t t171 = 378U;

    t171 = ((x685<=(x686^x687))&x688);

    if (t171 != 0U) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = INT32_MIN;
	volatile uint16_t x690 = UINT16_MAX;
	uint16_t x692 = UINT16_MAX;

    t172 = ((x689<=(x690^x691))&x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = -43;
	uint64_t x694 = 36367LLU;
	volatile int64_t x695 = 141697579571120253LL;
	uint64_t t173 = 164LLU;

    t173 = ((x693<=(x694^x695))&x696);

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x697 = INT32_MIN;
	volatile int16_t x698 = -1;
	int32_t x700 = -1;
	volatile int32_t t174 = -326103787;

    t174 = ((x697<=(x698^x699))&x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x701 = INT8_MAX;
	int8_t x702 = 22;
	int64_t x704 = INT64_MAX;
	volatile int64_t t175 = -4LL;

    t175 = ((x701<=(x702^x703))&x704);

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x706 = INT16_MIN;
	int16_t x707 = 273;
	int32_t x708 = INT32_MIN;
	static int32_t t176 = -4584889;

    t176 = ((x705<=(x706^x707))&x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x709 = INT32_MIN;
	int32_t x710 = INT32_MIN;
	int8_t x711 = -62;
	uint16_t x712 = 1U;
	int32_t t177 = -37;

    t177 = ((x709<=(x710^x711))&x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x713 = INT32_MIN;
	uint32_t x714 = 20887U;
	static volatile int64_t x715 = INT64_MIN;
	int32_t t178 = -49620;

    t178 = ((x713<=(x714^x715))&x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = 26383095;
	static int16_t x718 = -1;
	volatile int16_t x719 = INT16_MAX;
	static uint8_t x720 = UINT8_MAX;
	int32_t t179 = 12935;

    t179 = ((x717<=(x718^x719))&x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x721 = INT64_MIN;
	int64_t x722 = -124433LL;
	static int32_t x723 = -92713;
	static int16_t x724 = 3094;
	static volatile int32_t t180 = 25179;

    t180 = ((x721<=(x722^x723))&x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x725 = INT16_MAX;
	int8_t x726 = -1;
	uint8_t x727 = UINT8_MAX;
	volatile int32_t t181 = 14;

    t181 = ((x725<=(x726^x727))&x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x729 = 99U;
	uint8_t x730 = 0U;
	int32_t x731 = 197951;
	int32_t t182 = 2462;

    t182 = ((x729<=(x730^x731))&x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x734 = 34LLU;
	volatile uint32_t t183 = 217U;

    t183 = ((x733<=(x734^x735))&x736);

    if (t183 != 0U) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile uint32_t x737 = UINT32_MAX;
	int16_t x738 = -6;
	uint32_t x739 = UINT32_MAX;
	int32_t t184 = 1;

    t184 = ((x737<=(x738^x739))&x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint8_t x743 = 8U;
	uint8_t x744 = 24U;
	static int32_t t185 = -14;

    t185 = ((x741<=(x742^x743))&x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x745 = 13;
	static int16_t x746 = -1;
	uint16_t x748 = 2U;
	int32_t t186 = 22;

    t186 = ((x745<=(x746^x747))&x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = INT32_MIN;
	int16_t x750 = 1370;
	static uint64_t x752 = UINT64_MAX;
	static uint64_t t187 = 2083731687LLU;

    t187 = ((x749<=(x750^x751))&x752);

    if (t187 != 1LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x753 = INT16_MIN;
	uint8_t x754 = 2U;
	int64_t x755 = -1LL;
	volatile int32_t t188 = -57143705;

    t188 = ((x753<=(x754^x755))&x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x760 = 1;
	int32_t t189 = 127;

    t189 = ((x757<=(x758^x759))&x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x761 = -3;
	int32_t x763 = INT32_MAX;
	int8_t x764 = 1;
	int32_t t190 = -265472948;

    t190 = ((x761<=(x762^x763))&x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x766 = INT8_MIN;
	int32_t t191 = 2690;

    t191 = ((x765<=(x766^x767))&x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x770 = 876LLU;
	static int16_t x771 = -1;
	int16_t x772 = -1;

    t192 = ((x769<=(x770^x771))&x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x773 = INT32_MIN;
	static uint32_t x774 = UINT32_MAX;
	int64_t x775 = INT64_MAX;

    t193 = ((x773<=(x774^x775))&x776);

    if (t193 != 1LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x778 = 124661315960LL;
	uint32_t x779 = 20223349U;
	uint64_t x780 = 360277634651247LLU;
	volatile uint64_t t194 = 15LLU;

    t194 = ((x777<=(x778^x779))&x780);

    if (t194 != 1LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x781 = -1;
	volatile int8_t x782 = -1;
	int64_t x783 = INT64_MIN;
	int64_t x784 = INT64_MAX;
	volatile int64_t t195 = -195098329199028356LL;

    t195 = ((x781<=(x782^x783))&x784);

    if (t195 != 1LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x785 = UINT16_MAX;
	uint16_t x786 = UINT16_MAX;
	int64_t x787 = -8759173LL;
	uint32_t x788 = 9514072U;
	static uint32_t t196 = 7U;

    t196 = ((x785<=(x786^x787))&x788);

    if (t196 != 0U) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x789 = UINT8_MAX;
	int32_t x791 = -1;
	uint64_t x792 = 193238LLU;
	uint64_t t197 = 101LLU;

    t197 = ((x789<=(x790^x791))&x792);

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x793 = 5;
	int16_t x794 = -50;
	volatile uint16_t x796 = UINT16_MAX;
	volatile int32_t t198 = -9654212;

    t198 = ((x793<=(x794^x795))&x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = INT64_MIN;
	static int8_t x799 = -1;
	static volatile int16_t x800 = -1714;
	volatile int32_t t199 = -2920;

    t199 = ((x797<=(x798^x799))&x800);

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


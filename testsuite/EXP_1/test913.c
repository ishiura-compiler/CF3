
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

int64_t x4 = INT64_MAX;
static int32_t x10 = -1;
int64_t x12 = INT64_MIN;
static int8_t x13 = INT8_MIN;
int64_t x14 = INT64_MAX;
int32_t t3 = 13;
int64_t t5 = 6110479624LL;
uint32_t x43 = 6429U;
volatile int32_t t11 = 204;
int64_t x49 = INT64_MIN;
static int64_t x51 = INT64_MIN;
static int8_t x60 = INT8_MIN;
static int64_t x63 = INT64_MIN;
static int16_t x69 = -1;
int64_t x76 = 26428102395LL;
int32_t t19 = -3;
static int8_t x85 = -5;
uint8_t x93 = 11U;
volatile int32_t x101 = INT32_MIN;
int8_t x103 = INT8_MAX;
static uint8_t x106 = 7U;
volatile uint64_t t25 = 267550LLU;
static int8_t x115 = -1;
volatile int32_t t29 = -7031;
static int32_t x127 = INT32_MAX;
volatile uint16_t x130 = 230U;
static int64_t x133 = -1LL;
int32_t x135 = INT32_MAX;
volatile int64_t t32 = INT64_MIN;
volatile int64_t t35 = -1093208LL;
uint16_t x166 = 201U;
static int16_t x169 = INT16_MIN;
int32_t x171 = INT32_MIN;
static int32_t t42 = -838938;
uint16_t x177 = UINT16_MAX;
int64_t x182 = 5107650207139LL;
int64_t t44 = -5LL;
static uint8_t x196 = 0U;
int32_t t46 = -76;
int8_t x205 = INT8_MIN;
uint8_t x209 = 17U;
int16_t x210 = INT16_MIN;
uint32_t x214 = UINT32_MAX;
int32_t x215 = INT32_MIN;
int32_t t51 = -5437133;
int16_t x219 = -918;
int16_t x221 = INT16_MIN;
int8_t x223 = INT8_MIN;
int16_t x234 = INT16_MAX;
volatile int32_t t56 = -2;
uint16_t x238 = 99U;
int64_t x240 = -1LL;
static int64_t t57 = 11714624LL;
uint64_t x242 = 10073859240099948LLU;
static int64_t x248 = -354356LL;
static uint16_t x250 = UINT16_MAX;
uint32_t x253 = 302526396U;
int64_t x256 = -109274803950243LL;
int32_t x260 = INT32_MIN;
int64_t x261 = INT64_MIN;
uint32_t t64 = 1628429U;
volatile int16_t x271 = -872;
volatile int64_t x272 = INT64_MIN;
int16_t x283 = -1;
static int64_t x286 = -63249981LL;
uint8_t x289 = 0U;
volatile int64_t x292 = -1LL;
volatile int64_t x301 = -1LL;
uint8_t x303 = UINT8_MAX;
static volatile int64_t t73 = 36190439310649731LL;
volatile uint8_t x312 = 0U;
int16_t x315 = INT16_MIN;
int8_t x317 = INT8_MAX;
int64_t x320 = -1LL;
static uint64_t x322 = UINT64_MAX;
int64_t x327 = INT64_MIN;
uint32_t x333 = 34979064U;
int16_t x335 = 6;
uint32_t x336 = 14728U;
uint32_t t80 = 309458U;
volatile int64_t x348 = -56545275170LL;
volatile int64_t t83 = 12802LL;
volatile uint16_t x354 = 28075U;
volatile int32_t t91 = 326166;
int8_t x381 = -1;
volatile uint64_t x384 = UINT64_MAX;
uint8_t x387 = 0U;
int64_t x400 = 10876718118821611LL;
int16_t x411 = 5323;
int32_t t98 = -1782740;
static uint64_t x420 = 3LLU;
static uint16_t x421 = UINT16_MAX;
volatile uint64_t t101 = 30LLU;
uint16_t x428 = 4294U;
int16_t x431 = 223;
uint16_t x432 = 43U;
uint32_t x433 = UINT32_MAX;
uint8_t x436 = 22U;
int32_t x444 = INT32_MIN;
uint32_t x445 = 6587459U;
static volatile int32_t x447 = INT32_MIN;
int64_t x448 = INT64_MIN;
uint32_t x450 = 14U;
static uint16_t x455 = 11U;
volatile uint8_t x460 = 14U;
uint64_t x462 = UINT64_MAX;
volatile int8_t x464 = -1;
uint8_t x476 = 8U;
volatile int8_t x477 = INT8_MAX;
static int32_t t114 = -558;
static int64_t x481 = INT64_MIN;
int32_t x487 = -812;
uint8_t x488 = UINT8_MAX;
int64_t x490 = -587935144453532LL;
int32_t x492 = 25;
int8_t x494 = -7;
int16_t x498 = -1;
volatile uint64_t x502 = UINT64_MAX;
uint32_t x503 = 32360679U;
static int64_t x510 = INT64_MIN;
volatile int64_t t123 = 1865LL;
static int8_t x518 = -1;
int32_t x520 = -151293152;
int32_t t124 = -162;
volatile int8_t x529 = 7;
int16_t x532 = INT16_MAX;
int32_t t127 = 632177;
volatile int64_t x533 = -428509943435LL;
static volatile uint32_t t129 = 2585U;
int64_t x542 = -1LL;
static int8_t x543 = 0;
int8_t x544 = INT8_MIN;
int32_t t131 = 22513;
int64_t x550 = INT64_MIN;
uint64_t x555 = 30854191019LLU;
int8_t x562 = INT8_MIN;
static int32_t x576 = 12699;
uint16_t x577 = 189U;
volatile uint64_t x580 = 54304689498810630LLU;
static uint64_t x586 = UINT64_MAX;
int32_t t141 = -868;
volatile int32_t t142 = -56006438;
int32_t x597 = INT32_MIN;
uint8_t x601 = UINT8_MAX;
int8_t x603 = INT8_MAX;
int32_t x607 = INT32_MIN;
volatile uint32_t t146 = 0U;
int8_t x618 = -1;
static uint64_t x624 = UINT64_MAX;
static int8_t x627 = -1;
volatile uint32_t x628 = 3U;
int16_t x629 = -7;
int16_t x634 = INT16_MIN;
static uint16_t x635 = UINT16_MAX;
int16_t x636 = -3;
int32_t t153 = 27735280;
static int16_t x637 = -1;
int32_t x638 = -1;
static uint16_t x641 = 711U;
uint64_t x645 = 6211640LLU;
int16_t x647 = INT16_MIN;
int16_t x650 = -118;
int8_t x656 = INT8_MIN;
int32_t t158 = 677686;
int8_t x660 = -28;
uint8_t x661 = 1U;
static uint8_t x663 = UINT8_MAX;
int8_t x665 = INT8_MIN;
uint32_t x666 = 2U;
volatile int32_t t161 = 9532596;
int32_t t163 = -11107993;
int64_t x680 = 10464642LL;
int32_t t165 = -446006;
volatile uint64_t x688 = 669815501LLU;
volatile uint64_t t166 = 44086325567158LLU;
uint32_t x689 = 6232854U;
int32_t x693 = INT32_MIN;
volatile int16_t x701 = INT16_MIN;
int32_t x702 = -2294786;
uint16_t x704 = UINT16_MAX;
volatile int32_t t169 = 1531;
int32_t x706 = -1;
int8_t x708 = -1;
volatile int32_t t170 = -271643150;
int8_t x709 = -1;
int8_t x711 = INT8_MIN;
int32_t x717 = 1;
int32_t x719 = INT32_MIN;
volatile int16_t x724 = INT16_MAX;
int32_t t174 = 0;
int32_t x725 = 127;
volatile int32_t t175 = -6826444;
int8_t x731 = 18;
volatile int64_t t177 = -38378699182934LL;
volatile int64_t x749 = INT64_MAX;
uint64_t x750 = UINT64_MAX;
static int16_t x759 = INT16_MIN;
int64_t x762 = INT64_MIN;
volatile int64_t x763 = INT64_MAX;
uint64_t x764 = 2849105640659LLU;
int32_t x769 = INT32_MIN;
volatile uint8_t x772 = 13U;
uint8_t x780 = 0U;
static volatile int32_t t189 = INT32_MIN;
volatile int64_t x790 = INT64_MIN;
volatile int16_t x791 = INT16_MIN;
volatile int16_t x794 = 1;
uint16_t x796 = 770U;
uint64_t t193 = 145875323118LLU;
volatile int64_t x806 = -1LL;
int64_t x809 = INT64_MIN;
uint64_t x813 = UINT64_MAX;
int16_t x816 = 21;
uint16_t x818 = 3U;
int64_t x821 = -43988LL;


void f0(void) {
    	int8_t x1 = -1;
	int8_t x2 = 1;
	int64_t x3 = INT64_MIN;
	volatile int64_t t0 = -6510864083031062LL;

    t0 = (((x1%x2)<=x3)*x4);

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint32_t x5 = 99U;
	int64_t x6 = INT64_MAX;
	volatile uint64_t x7 = 3LLU;
	static volatile int64_t x8 = INT64_MIN;
	int64_t t1 = 18754LL;

    t1 = (((x5%x6)<=x7)*x8);

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint32_t x9 = 14847U;
	int8_t x11 = INT8_MAX;
	static volatile int64_t t2 = -3172392063373520161LL;

    t2 = (((x9%x10)<=x11)*x12);

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x15 = 12LL;
	int8_t x16 = INT8_MIN;

    t3 = (((x13%x14)<=x15)*x16);

    if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = 744;
	static int64_t x18 = INT64_MIN;
	int8_t x19 = -1;
	uint32_t x20 = UINT32_MAX;
	volatile uint32_t t4 = 62634769U;

    t4 = (((x17%x18)<=x19)*x20);

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 0U;
	int16_t x22 = INT16_MAX;
	volatile int8_t x23 = 9;
	static int64_t x24 = 11665961LL;

    t5 = (((x21%x22)<=x23)*x24);

    if (t5 != 11665961LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x25 = INT32_MIN;
	volatile int64_t x26 = INT64_MIN;
	int8_t x27 = -1;
	int16_t x28 = -1;
	volatile int32_t t6 = -48910200;

    t6 = (((x25%x26)<=x27)*x28);

    if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MAX;
	static int8_t x30 = -1;
	volatile int64_t x31 = INT64_MIN;
	volatile int32_t x32 = -1489;
	int32_t t7 = -10904199;

    t7 = (((x29%x30)<=x31)*x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = -1;
	uint64_t x34 = UINT64_MAX;
	int32_t x35 = INT32_MIN;
	uint64_t x36 = 231661286140200LLU;
	volatile uint64_t t8 = 1785379429LLU;

    t8 = (((x33%x34)<=x35)*x36);

    if (t8 != 231661286140200LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MIN;
	static volatile int8_t x38 = INT8_MIN;
	uint16_t x39 = UINT16_MAX;
	uint8_t x40 = 41U;
	int32_t t9 = 480898940;

    t9 = (((x37%x38)<=x39)*x40);

    if (t9 != 41) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x41 = -1;
	static int32_t x42 = INT32_MIN;
	int32_t x44 = 9282626;
	int32_t t10 = -417;

    t10 = (((x41%x42)<=x43)*x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = UINT64_MAX;
	int8_t x46 = INT8_MIN;
	int8_t x47 = INT8_MAX;
	volatile int8_t x48 = 56;

    t11 = (((x45%x46)<=x47)*x48);

    if (t11 != 56) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x50 = UINT32_MAX;
	int8_t x52 = INT8_MIN;
	volatile int32_t t12 = 266368282;

    t12 = (((x49%x50)<=x51)*x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x57 = 86972962LL;
	uint32_t x58 = UINT32_MAX;
	uint16_t x59 = UINT16_MAX;
	static int32_t t13 = 1436;

    t13 = (((x57%x58)<=x59)*x60);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x61 = 20U;
	static int16_t x62 = INT16_MIN;
	int16_t x64 = -1;
	volatile int32_t t14 = 11556757;

    t14 = (((x61%x62)<=x63)*x64);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x65 = 5U;
	static int32_t x66 = -10;
	int8_t x67 = INT8_MIN;
	static int8_t x68 = 0;
	volatile int32_t t15 = -359092;

    t15 = (((x65%x66)<=x67)*x68);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x70 = -1;
	int32_t x71 = -418610108;
	static uint16_t x72 = 45U;
	volatile int32_t t16 = 0;

    t16 = (((x69%x70)<=x71)*x72);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x73 = INT16_MIN;
	uint16_t x74 = UINT16_MAX;
	volatile int32_t x75 = INT32_MIN;
	volatile int64_t t17 = -2096356198148LL;

    t17 = (((x73%x74)<=x75)*x76);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x77 = UINT16_MAX;
	uint8_t x78 = 2U;
	int16_t x79 = INT16_MIN;
	static int32_t x80 = -1192;
	volatile int32_t t18 = -95329;

    t18 = (((x77%x78)<=x79)*x80);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x81 = INT32_MIN;
	volatile int32_t x82 = -3538;
	volatile int32_t x83 = -88353;
	static int16_t x84 = INT16_MIN;

    t19 = (((x81%x82)<=x83)*x84);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x86 = 27U;
	volatile uint8_t x87 = 3U;
	int16_t x88 = 132;
	volatile int32_t t20 = 7126295;

    t20 = (((x85%x86)<=x87)*x88);

    if (t20 != 132) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x89 = 86072340399LL;
	volatile int8_t x90 = INT8_MAX;
	int8_t x91 = INT8_MIN;
	static int64_t x92 = -1LL;
	static volatile int64_t t21 = 7LL;

    t21 = (((x89%x90)<=x91)*x92);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x94 = -14LL;
	int64_t x95 = 970746200LL;
	int64_t x96 = -4505425577321954110LL;
	int64_t t22 = -184250LL;

    t22 = (((x93%x94)<=x95)*x96);

    if (t22 != -4505425577321954110LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x97 = 8U;
	volatile int16_t x98 = INT16_MIN;
	volatile int8_t x99 = 3;
	int16_t x100 = INT16_MAX;
	int32_t t23 = -78;

    t23 = (((x97%x98)<=x99)*x100);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x102 = -1;
	int8_t x104 = INT8_MAX;
	volatile int32_t t24 = 477;

    t24 = (((x101%x102)<=x103)*x104);

    if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint8_t x105 = 10U;
	int64_t x107 = INT64_MIN;
	volatile uint64_t x108 = UINT64_MAX;

    t25 = (((x105%x106)<=x107)*x108);

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x109 = -1;
	int32_t x110 = 9;
	int8_t x111 = INT8_MIN;
	int32_t x112 = -1;
	int32_t t26 = 6246011;

    t26 = (((x109%x110)<=x111)*x112);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x113 = -33;
	int64_t x114 = 2LL;
	int16_t x116 = INT16_MIN;
	static int32_t t27 = -154998143;

    t27 = (((x113%x114)<=x115)*x116);

    if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x117 = INT8_MIN;
	volatile int32_t x118 = -8908;
	int64_t x119 = -1LL;
	static uint32_t x120 = 28U;
	volatile uint32_t t28 = 395311632U;

    t28 = (((x117%x118)<=x119)*x120);

    if (t28 != 28U) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x121 = INT16_MIN;
	int32_t x122 = -58159195;
	static int8_t x123 = INT8_MIN;
	int16_t x124 = -30;

    t29 = (((x121%x122)<=x123)*x124);

    if (t29 != -30) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x125 = UINT16_MAX;
	uint8_t x126 = 57U;
	uint32_t x128 = UINT32_MAX;
	volatile uint32_t t30 = UINT32_MAX;

    t30 = (((x125%x126)<=x127)*x128);

    if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x129 = 376570328U;
	uint64_t x131 = UINT64_MAX;
	static int32_t x132 = INT32_MAX;
	int32_t t31 = INT32_MAX;

    t31 = (((x129%x130)<=x131)*x132);

    if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile uint16_t x134 = 6649U;
	static volatile int64_t x136 = INT64_MIN;

    t32 = (((x133%x134)<=x135)*x136);

    if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x137 = -74;
	uint32_t x138 = 44962U;
	static int32_t x139 = INT32_MAX;
	int64_t x140 = INT64_MAX;
	static int64_t t33 = INT64_MAX;

    t33 = (((x137%x138)<=x139)*x140);

    if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x141 = INT64_MIN;
	static uint64_t x142 = 578LLU;
	int64_t x143 = INT64_MIN;
	uint16_t x144 = 66U;
	static volatile int32_t t34 = 52202098;

    t34 = (((x141%x142)<=x143)*x144);

    if (t34 != 66) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint32_t x145 = 39027U;
	int16_t x146 = INT16_MIN;
	int16_t x147 = INT16_MAX;
	volatile int64_t x148 = -1LL;

    t35 = (((x145%x146)<=x147)*x148);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x149 = UINT8_MAX;
	volatile uint16_t x150 = 11U;
	int64_t x151 = INT64_MAX;
	static uint16_t x152 = 0U;
	volatile int32_t t36 = -79;

    t36 = (((x149%x150)<=x151)*x152);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x153 = INT8_MAX;
	int8_t x154 = 1;
	static int16_t x155 = INT16_MIN;
	int32_t x156 = INT32_MIN;
	int32_t t37 = 1;

    t37 = (((x153%x154)<=x155)*x156);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x157 = -1;
	int16_t x158 = INT16_MIN;
	int16_t x159 = -1;
	uint16_t x160 = UINT16_MAX;
	int32_t t38 = 477836601;

    t38 = (((x157%x158)<=x159)*x160);

    if (t38 != 65535) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x161 = -1;
	int16_t x162 = INT16_MIN;
	int8_t x163 = -1;
	volatile int32_t x164 = INT32_MIN;
	int32_t t39 = INT32_MIN;

    t39 = (((x161%x162)<=x163)*x164);

    if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int16_t x165 = INT16_MIN;
	volatile int32_t x167 = 1;
	int16_t x168 = 6014;
	volatile int32_t t40 = -861833481;

    t40 = (((x165%x166)<=x167)*x168);

    if (t40 != 6014) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x170 = 3U;
	int32_t x172 = 26485785;
	int32_t t41 = 192578;

    t41 = (((x169%x170)<=x171)*x172);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x173 = UINT8_MAX;
	int8_t x174 = INT8_MIN;
	volatile uint64_t x175 = 2031581579708LLU;
	int8_t x176 = INT8_MIN;

    t42 = (((x173%x174)<=x175)*x176);

    if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x178 = INT16_MIN;
	static volatile int64_t x179 = INT64_MAX;
	uint16_t x180 = 107U;
	int32_t t43 = 1;

    t43 = (((x177%x178)<=x179)*x180);

    if (t43 != 107) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x181 = -796;
	uint32_t x183 = 20U;
	int64_t x184 = -218307760441LL;

    t44 = (((x181%x182)<=x183)*x184);

    if (t44 != -218307760441LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x185 = INT16_MIN;
	volatile uint32_t x186 = 7U;
	uint64_t x187 = 450LLU;
	int32_t x188 = INT32_MIN;
	volatile int32_t t45 = INT32_MIN;

    t45 = (((x185%x186)<=x187)*x188);

    if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x193 = INT8_MIN;
	volatile uint8_t x194 = 3U;
	uint32_t x195 = 47409707U;

    t46 = (((x193%x194)<=x195)*x196);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x197 = INT64_MIN;
	int16_t x198 = INT16_MIN;
	int8_t x199 = INT8_MIN;
	volatile int16_t x200 = -1;
	int32_t t47 = 804;

    t47 = (((x197%x198)<=x199)*x200);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x201 = INT32_MAX;
	int64_t x202 = 2490469082145LL;
	volatile uint8_t x203 = 0U;
	int32_t x204 = INT32_MIN;
	volatile int32_t t48 = 3360;

    t48 = (((x201%x202)<=x203)*x204);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x206 = INT8_MIN;
	int32_t x207 = -44093982;
	volatile uint16_t x208 = 18U;
	volatile int32_t t49 = -1219;

    t49 = (((x205%x206)<=x207)*x208);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x211 = 3244359231065186LL;
	int32_t x212 = 424908803;
	int32_t t50 = 2754;

    t50 = (((x209%x210)<=x211)*x212);

    if (t50 != 424908803) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x213 = INT8_MIN;
	int16_t x216 = -1;

    t51 = (((x213%x214)<=x215)*x216);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int64_t x217 = INT64_MIN;
	int32_t x218 = -2313213;
	static uint64_t x220 = UINT64_MAX;
	static volatile uint64_t t52 = UINT64_MAX;

    t52 = (((x217%x218)<=x219)*x220);

    if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x222 = INT8_MIN;
	int32_t x224 = INT32_MIN;
	volatile int32_t t53 = 1461;

    t53 = (((x221%x222)<=x223)*x224);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x225 = 15;
	volatile int32_t x226 = INT32_MIN;
	int8_t x227 = -1;
	volatile int16_t x228 = -1;
	volatile int32_t t54 = 24806472;

    t54 = (((x225%x226)<=x227)*x228);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x229 = INT16_MIN;
	static uint8_t x230 = 121U;
	static uint8_t x231 = 9U;
	int32_t x232 = INT32_MIN;
	int32_t t55 = INT32_MIN;

    t55 = (((x229%x230)<=x231)*x232);

    if (t55 != INT32_MIN) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x233 = -15921;
	static uint32_t x235 = 1U;
	static uint16_t x236 = 24313U;

    t56 = (((x233%x234)<=x235)*x236);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x237 = -3;
	uint32_t x239 = 37638U;

    t57 = (((x237%x238)<=x239)*x240);

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint8_t x241 = 12U;
	int64_t x243 = 23LL;
	int16_t x244 = INT16_MIN;
	int32_t t58 = -1;

    t58 = (((x241%x242)<=x243)*x244);

    if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x245 = -8274306LL;
	int8_t x246 = -1;
	int16_t x247 = INT16_MAX;
	volatile int64_t t59 = 3695LL;

    t59 = (((x245%x246)<=x247)*x248);

    if (t59 != -354356LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x249 = UINT16_MAX;
	volatile int64_t x251 = INT64_MAX;
	volatile int32_t x252 = -628875842;
	static int32_t t60 = 765;

    t60 = (((x249%x250)<=x251)*x252);

    if (t60 != -628875842) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint32_t x254 = 2737U;
	int64_t x255 = -1LL;
	volatile int64_t t61 = 53929791364698032LL;

    t61 = (((x253%x254)<=x255)*x256);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x257 = 1;
	uint16_t x258 = 7U;
	int16_t x259 = INT16_MIN;
	static volatile int32_t t62 = -214044;

    t62 = (((x257%x258)<=x259)*x260);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x262 = -1;
	uint32_t x263 = 723391U;
	volatile int32_t x264 = -817379;
	volatile int32_t t63 = 6625;

    t63 = (((x261%x262)<=x263)*x264);

    if (t63 != -817379) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x265 = INT16_MAX;
	volatile uint8_t x266 = 61U;
	int64_t x267 = INT64_MIN;
	static volatile uint32_t x268 = 521494912U;

    t64 = (((x265%x266)<=x267)*x268);

    if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x269 = INT64_MIN;
	static int64_t x270 = -1LL;
	int64_t t65 = -17442LL;

    t65 = (((x269%x270)<=x271)*x272);

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x277 = INT64_MIN;
	volatile uint64_t x278 = 65020046027472LLU;
	static int64_t x279 = INT64_MAX;
	uint16_t x280 = 17773U;
	static volatile int32_t t66 = 431155;

    t66 = (((x277%x278)<=x279)*x280);

    if (t66 != 17773) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint8_t x281 = 0U;
	uint16_t x282 = 27U;
	int32_t x284 = INT32_MIN;
	static int32_t t67 = -1015107;

    t67 = (((x281%x282)<=x283)*x284);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x285 = INT64_MIN;
	static volatile uint32_t x287 = 146U;
	int64_t x288 = -1LL;
	volatile int64_t t68 = 5722528916948LL;

    t68 = (((x285%x286)<=x287)*x288);

    if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x290 = -1LL;
	int64_t x291 = INT64_MIN;
	volatile int64_t t69 = -1625LL;

    t69 = (((x289%x290)<=x291)*x292);

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint64_t x293 = UINT64_MAX;
	uint16_t x294 = UINT16_MAX;
	int16_t x295 = INT16_MIN;
	uint32_t x296 = UINT32_MAX;
	volatile uint32_t t70 = UINT32_MAX;

    t70 = (((x293%x294)<=x295)*x296);

    if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x297 = INT64_MIN;
	int32_t x298 = INT32_MIN;
	int16_t x299 = -1;
	int8_t x300 = INT8_MIN;
	int32_t t71 = -29901014;

    t71 = (((x297%x298)<=x299)*x300);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x302 = -1LL;
	uint16_t x304 = 325U;
	int32_t t72 = 125902402;

    t72 = (((x301%x302)<=x303)*x304);

    if (t72 != 325) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x305 = 0U;
	int16_t x306 = INT16_MAX;
	volatile uint16_t x307 = 703U;
	int64_t x308 = -1LL;

    t73 = (((x305%x306)<=x307)*x308);

    if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x309 = INT16_MIN;
	int8_t x310 = -14;
	volatile uint32_t x311 = 60U;
	static int32_t t74 = -679106489;

    t74 = (((x309%x310)<=x311)*x312);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x313 = INT8_MIN;
	uint64_t x314 = 1203777121319426634LLU;
	uint32_t x316 = UINT32_MAX;
	volatile uint32_t t75 = UINT32_MAX;

    t75 = (((x313%x314)<=x315)*x316);

    if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x318 = 1U;
	uint16_t x319 = 1741U;
	int64_t t76 = 71731850874909LL;

    t76 = (((x317%x318)<=x319)*x320);

    if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x321 = INT32_MIN;
	int16_t x323 = -1;
	int64_t x324 = -122LL;
	volatile int64_t t77 = 0LL;

    t77 = (((x321%x322)<=x323)*x324);

    if (t77 != -122LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x325 = INT32_MIN;
	int8_t x326 = -9;
	static uint16_t x328 = UINT16_MAX;
	volatile int32_t t78 = -1915757;

    t78 = (((x325%x326)<=x327)*x328);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x329 = INT8_MIN;
	uint16_t x330 = 5U;
	int16_t x331 = INT16_MIN;
	static uint8_t x332 = 6U;
	volatile int32_t t79 = 41008280;

    t79 = (((x329%x330)<=x331)*x332);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile uint8_t x334 = 7U;

    t80 = (((x333%x334)<=x335)*x336);

    if (t80 != 14728U) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x337 = -3939;
	uint64_t x338 = 1001075522847LLU;
	volatile uint8_t x339 = 7U;
	int32_t x340 = INT32_MAX;
	volatile int32_t t81 = -1;

    t81 = (((x337%x338)<=x339)*x340);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x341 = INT8_MAX;
	uint64_t x342 = 343343048LLU;
	uint64_t x343 = 8023248LLU;
	static volatile int32_t x344 = 2966;
	volatile int32_t t82 = 1523636;

    t82 = (((x341%x342)<=x343)*x344);

    if (t82 != 2966) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x345 = INT64_MIN;
	int64_t x346 = -139696LL;
	uint8_t x347 = 117U;

    t83 = (((x345%x346)<=x347)*x348);

    if (t83 != -56545275170LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x349 = -1;
	volatile uint32_t x350 = UINT32_MAX;
	volatile int16_t x351 = INT16_MIN;
	int16_t x352 = INT16_MIN;
	static volatile int32_t t84 = -361;

    t84 = (((x349%x350)<=x351)*x352);

    if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x353 = INT64_MIN;
	int16_t x355 = -1;
	uint32_t x356 = 96U;
	volatile uint32_t t85 = 50532U;

    t85 = (((x353%x354)<=x355)*x356);

    if (t85 != 96U) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint16_t x357 = UINT16_MAX;
	int64_t x358 = 335552058639434633LL;
	int64_t x359 = INT64_MAX;
	int16_t x360 = 14794;
	volatile int32_t t86 = 3176737;

    t86 = (((x357%x358)<=x359)*x360);

    if (t86 != 14794) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x361 = -1LL;
	uint8_t x362 = 5U;
	int8_t x363 = -1;
	int8_t x364 = -1;
	int32_t t87 = -413;

    t87 = (((x361%x362)<=x363)*x364);

    if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x365 = 25U;
	uint8_t x366 = 1U;
	uint64_t x367 = UINT64_MAX;
	int64_t x368 = 2706804823961LL;
	volatile int64_t t88 = 1153938510866379051LL;

    t88 = (((x365%x366)<=x367)*x368);

    if (t88 != 2706804823961LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x369 = UINT32_MAX;
	volatile uint64_t x370 = 6360323671343LLU;
	static uint16_t x371 = 7690U;
	uint64_t x372 = UINT64_MAX;
	uint64_t t89 = 899LLU;

    t89 = (((x369%x370)<=x371)*x372);

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x373 = 82063791281669LL;
	int32_t x374 = INT32_MIN;
	int64_t x375 = 654LL;
	int32_t x376 = -114264;
	static int32_t t90 = 373;

    t90 = (((x373%x374)<=x375)*x376);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x377 = -1;
	volatile int64_t x378 = -1181705559627146LL;
	static int8_t x379 = INT8_MIN;
	int16_t x380 = 3;

    t91 = (((x377%x378)<=x379)*x380);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x382 = -182423;
	volatile int8_t x383 = INT8_MAX;
	uint64_t t92 = UINT64_MAX;

    t92 = (((x381%x382)<=x383)*x384);

    if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x385 = -14;
	static int64_t x386 = -1LL;
	int8_t x388 = -1;
	int32_t t93 = 1;

    t93 = (((x385%x386)<=x387)*x388);

    if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x389 = 74;
	uint64_t x390 = UINT64_MAX;
	int64_t x391 = 24508762166LL;
	volatile int32_t x392 = 115;
	int32_t t94 = -9503;

    t94 = (((x389%x390)<=x391)*x392);

    if (t94 != 115) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint16_t x397 = UINT16_MAX;
	int32_t x398 = 31452271;
	volatile int8_t x399 = INT8_MIN;
	int64_t t95 = -13LL;

    t95 = (((x397%x398)<=x399)*x400);

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x401 = UINT64_MAX;
	uint8_t x402 = 21U;
	uint8_t x403 = UINT8_MAX;
	static int64_t x404 = INT64_MIN;
	int64_t t96 = INT64_MIN;

    t96 = (((x401%x402)<=x403)*x404);

    if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x405 = INT8_MIN;
	int8_t x406 = -1;
	uint8_t x407 = UINT8_MAX;
	static int64_t x408 = -1LL;
	volatile int64_t t97 = -3382LL;

    t97 = (((x405%x406)<=x407)*x408);

    if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x409 = UINT16_MAX;
	volatile int16_t x410 = -1;
	int16_t x412 = -1;

    t98 = (((x409%x410)<=x411)*x412);

    if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x413 = 706;
	volatile uint64_t x414 = 171888217191LLU;
	int16_t x415 = -1;
	static int32_t x416 = INT32_MIN;
	volatile int32_t t99 = INT32_MIN;

    t99 = (((x413%x414)<=x415)*x416);

    if (t99 != INT32_MIN) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x417 = -15396669102556LL;
	uint64_t x418 = 81791LLU;
	static volatile uint16_t x419 = UINT16_MAX;
	uint64_t t100 = 2822LLU;

    t100 = (((x417%x418)<=x419)*x420);

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x422 = INT16_MAX;
	uint32_t x423 = 3680924U;
	uint64_t x424 = 101LLU;

    t101 = (((x421%x422)<=x423)*x424);

    if (t101 != 101LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x425 = 1427205157LLU;
	int16_t x426 = INT16_MIN;
	volatile int32_t x427 = INT32_MIN;
	volatile int32_t t102 = -769234;

    t102 = (((x425%x426)<=x427)*x428);

    if (t102 != 4294) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x429 = INT8_MIN;
	uint16_t x430 = UINT16_MAX;
	volatile int32_t t103 = 11;

    t103 = (((x429%x430)<=x431)*x432);

    if (t103 != 43) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x434 = 4060217U;
	uint8_t x435 = UINT8_MAX;
	volatile int32_t t104 = 27039659;

    t104 = (((x433%x434)<=x435)*x436);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x437 = -233959093857LL;
	int64_t x438 = INT64_MIN;
	uint32_t x439 = 128U;
	static int16_t x440 = INT16_MAX;
	int32_t t105 = -759704;

    t105 = (((x437%x438)<=x439)*x440);

    if (t105 != 32767) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x441 = -1LL;
	int16_t x442 = 220;
	int16_t x443 = INT16_MIN;
	int32_t t106 = -6016153;

    t106 = (((x441%x442)<=x443)*x444);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int32_t x446 = INT32_MIN;
	int64_t t107 = INT64_MIN;

    t107 = (((x445%x446)<=x447)*x448);

    if (t107 != INT64_MIN) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x449 = INT32_MIN;
	int8_t x451 = INT8_MAX;
	int64_t x452 = -1LL;
	volatile int64_t t108 = 10175341422652LL;

    t108 = (((x449%x450)<=x451)*x452);

    if (t108 != -1LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint16_t x453 = UINT16_MAX;
	static int16_t x454 = INT16_MIN;
	uint64_t x456 = UINT64_MAX;
	uint64_t t109 = 148053145302660103LLU;

    t109 = (((x453%x454)<=x455)*x456);

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x457 = INT32_MIN;
	uint64_t x458 = UINT64_MAX;
	uint8_t x459 = 86U;
	static int32_t t110 = 21057458;

    t110 = (((x457%x458)<=x459)*x460);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x461 = INT8_MAX;
	volatile int32_t x463 = -23192307;
	static volatile int32_t t111 = 7686;

    t111 = (((x461%x462)<=x463)*x464);

    if (t111 != -1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x469 = UINT16_MAX;
	int64_t x470 = -3LL;
	static int32_t x471 = -14616203;
	int64_t x472 = 4094041834705336918LL;
	volatile int64_t t112 = 180390653949LL;

    t112 = (((x469%x470)<=x471)*x472);

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x473 = 239U;
	int16_t x474 = -1;
	uint8_t x475 = 40U;
	int32_t t113 = -50216;

    t113 = (((x473%x474)<=x475)*x476);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x478 = 41730U;
	int32_t x479 = INT32_MIN;
	uint16_t x480 = UINT16_MAX;

    t114 = (((x477%x478)<=x479)*x480);

    if (t114 != 65535) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x482 = -13;
	volatile int16_t x483 = 456;
	int16_t x484 = -521;
	int32_t t115 = -6865172;

    t115 = (((x481%x482)<=x483)*x484);

    if (t115 != -521) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x485 = 15U;
	int64_t x486 = INT64_MIN;
	volatile int32_t t116 = 12347;

    t116 = (((x485%x486)<=x487)*x488);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x489 = 19585U;
	volatile int8_t x491 = 17;
	static volatile int32_t t117 = 58635491;

    t117 = (((x489%x490)<=x491)*x492);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x493 = INT64_MAX;
	static volatile uint32_t x495 = 495180U;
	int16_t x496 = 6;
	volatile int32_t t118 = 2889;

    t118 = (((x493%x494)<=x495)*x496);

    if (t118 != 6) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x497 = INT8_MIN;
	int16_t x499 = -1;
	uint8_t x500 = 9U;
	int32_t t119 = 2913;

    t119 = (((x497%x498)<=x499)*x500);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x501 = UINT8_MAX;
	static int32_t x504 = INT32_MIN;
	int32_t t120 = INT32_MIN;

    t120 = (((x501%x502)<=x503)*x504);

    if (t120 != INT32_MIN) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x505 = 29;
	uint32_t x506 = UINT32_MAX;
	uint64_t x507 = 360438477LLU;
	int32_t x508 = -10;
	volatile int32_t t121 = 0;

    t121 = (((x505%x506)<=x507)*x508);

    if (t121 != -10) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x509 = INT8_MAX;
	int64_t x511 = INT64_MAX;
	int16_t x512 = INT16_MIN;
	static int32_t t122 = -1698;

    t122 = (((x509%x510)<=x511)*x512);

    if (t122 != -32768) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x513 = 1;
	int16_t x514 = INT16_MIN;
	static int32_t x515 = INT32_MIN;
	static volatile int64_t x516 = -1LL;

    t123 = (((x513%x514)<=x515)*x516);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x517 = INT16_MIN;
	volatile int64_t x519 = INT64_MIN;

    t124 = (((x517%x518)<=x519)*x520);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x521 = INT16_MIN;
	static volatile int64_t x522 = INT64_MIN;
	int16_t x523 = -2;
	int32_t x524 = -1;
	int32_t t125 = -69839;

    t125 = (((x521%x522)<=x523)*x524);

    if (t125 != -1) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x525 = INT64_MIN;
	int64_t x526 = -992LL;
	static volatile int32_t x527 = -28266208;
	int8_t x528 = INT8_MAX;
	static volatile int32_t t126 = 166130805;

    t126 = (((x525%x526)<=x527)*x528);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x530 = INT8_MAX;
	static int64_t x531 = -694535847094178LL;

    t127 = (((x529%x530)<=x531)*x532);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x534 = -1LL;
	int16_t x535 = INT16_MIN;
	volatile int16_t x536 = 11;
	static int32_t t128 = 3065;

    t128 = (((x533%x534)<=x535)*x536);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int64_t x537 = -4393515879873LL;
	uint64_t x538 = UINT64_MAX;
	static int64_t x539 = INT64_MIN;
	static uint32_t x540 = 7U;

    t129 = (((x537%x538)<=x539)*x540);

    if (t129 != 0U) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x541 = UINT8_MAX;
	int32_t t130 = 345060;

    t130 = (((x541%x542)<=x543)*x544);

    if (t130 != -128) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint8_t x545 = UINT8_MAX;
	volatile int32_t x546 = -1;
	static uint16_t x547 = 182U;
	uint8_t x548 = 5U;

    t131 = (((x545%x546)<=x547)*x548);

    if (t131 != 5) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint32_t x549 = 231915954U;
	int32_t x551 = 0;
	volatile uint64_t x552 = 28LLU;
	uint64_t t132 = 228206775LLU;

    t132 = (((x549%x550)<=x551)*x552);

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x553 = INT64_MIN;
	int8_t x554 = 22;
	int32_t x556 = 5;
	int32_t t133 = -24992751;

    t133 = (((x553%x554)<=x555)*x556);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x557 = INT16_MAX;
	volatile int8_t x558 = -1;
	int64_t x559 = INT64_MIN;
	static int8_t x560 = -24;
	int32_t t134 = 8;

    t134 = (((x557%x558)<=x559)*x560);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x561 = UINT8_MAX;
	int32_t x563 = INT32_MAX;
	int32_t x564 = INT32_MIN;
	volatile int32_t t135 = INT32_MIN;

    t135 = (((x561%x562)<=x563)*x564);

    if (t135 != INT32_MIN) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x565 = INT8_MIN;
	uint64_t x566 = 1478462LLU;
	int8_t x567 = 0;
	int16_t x568 = 5;
	int32_t t136 = 7757128;

    t136 = (((x565%x566)<=x567)*x568);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint16_t x569 = 41U;
	uint32_t x570 = UINT32_MAX;
	static uint16_t x571 = UINT16_MAX;
	uint8_t x572 = 1U;
	int32_t t137 = -12;

    t137 = (((x569%x570)<=x571)*x572);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile int32_t x573 = INT32_MIN;
	int16_t x574 = INT16_MIN;
	int16_t x575 = -1;
	volatile int32_t t138 = -127198293;

    t138 = (((x573%x574)<=x575)*x576);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x578 = -1235;
	volatile int8_t x579 = INT8_MAX;
	volatile uint64_t t139 = 5596519978201821LLU;

    t139 = (((x577%x578)<=x579)*x580);

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x581 = INT64_MAX;
	static int32_t x582 = -12;
	volatile int32_t x583 = INT32_MIN;
	volatile uint8_t x584 = 11U;
	volatile int32_t t140 = 100;

    t140 = (((x581%x582)<=x583)*x584);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x585 = -31811522988469LL;
	volatile int8_t x587 = INT8_MIN;
	volatile int8_t x588 = INT8_MIN;

    t141 = (((x585%x586)<=x587)*x588);

    if (t141 != -128) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x589 = INT8_MAX;
	uint16_t x590 = 2U;
	int16_t x591 = INT16_MIN;
	int16_t x592 = INT16_MAX;

    t142 = (((x589%x590)<=x591)*x592);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint64_t x593 = UINT64_MAX;
	static int8_t x594 = -36;
	int64_t x595 = -1LL;
	int64_t x596 = INT64_MIN;
	static volatile int64_t t143 = INT64_MIN;

    t143 = (((x593%x594)<=x595)*x596);

    if (t143 != INT64_MIN) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint16_t x598 = UINT16_MAX;
	static volatile uint8_t x599 = 3U;
	static uint32_t x600 = UINT32_MAX;
	static uint32_t t144 = UINT32_MAX;

    t144 = (((x597%x598)<=x599)*x600);

    if (t144 != UINT32_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x602 = 480014U;
	volatile int64_t x604 = INT64_MIN;
	int64_t t145 = -430930140LL;

    t145 = (((x601%x602)<=x603)*x604);

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x605 = 220U;
	int64_t x606 = INT64_MAX;
	static uint32_t x608 = 376U;

    t146 = (((x605%x606)<=x607)*x608);

    if (t146 != 0U) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x609 = 11;
	uint16_t x610 = 173U;
	volatile uint64_t x611 = UINT64_MAX;
	int16_t x612 = INT16_MAX;
	static int32_t t147 = 4;

    t147 = (((x609%x610)<=x611)*x612);

    if (t147 != 32767) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x613 = -4;
	int64_t x614 = INT64_MIN;
	uint16_t x615 = UINT16_MAX;
	int16_t x616 = INT16_MIN;
	volatile int32_t t148 = -119;

    t148 = (((x613%x614)<=x615)*x616);

    if (t148 != -32768) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x617 = INT32_MAX;
	int32_t x619 = INT32_MAX;
	uint8_t x620 = 3U;
	volatile int32_t t149 = 16330114;

    t149 = (((x617%x618)<=x619)*x620);

    if (t149 != 3) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x621 = 7503573583996347932LLU;
	static int32_t x622 = INT32_MAX;
	int16_t x623 = INT16_MIN;
	volatile uint64_t t150 = UINT64_MAX;

    t150 = (((x621%x622)<=x623)*x624);

    if (t150 != UINT64_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x625 = -5833;
	static int32_t x626 = -69;
	volatile uint32_t t151 = 31862588U;

    t151 = (((x625%x626)<=x627)*x628);

    if (t151 != 3U) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x630 = 2767287139346LL;
	int64_t x631 = INT64_MIN;
	static int32_t x632 = -234;
	volatile int32_t t152 = 252;

    t152 = (((x629%x630)<=x631)*x632);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x633 = INT64_MIN;

    t153 = (((x633%x634)<=x635)*x636);

    if (t153 != -3) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint32_t x639 = UINT32_MAX;
	volatile int16_t x640 = -1;
	static volatile int32_t t154 = -434708;

    t154 = (((x637%x638)<=x639)*x640);

    if (t154 != -1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x642 = -1LL;
	int32_t x643 = -1;
	static int64_t x644 = INT64_MIN;
	static volatile int64_t t155 = 1003137885LL;

    t155 = (((x641%x642)<=x643)*x644);

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x646 = 451802071;
	static int32_t x648 = 3590;
	volatile int32_t t156 = 1;

    t156 = (((x645%x646)<=x647)*x648);

    if (t156 != 3590) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x649 = -4;
	int16_t x651 = -1;
	volatile int8_t x652 = 0;
	int32_t t157 = 7;

    t157 = (((x649%x650)<=x651)*x652);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile uint16_t x653 = 3U;
	volatile uint16_t x654 = UINT16_MAX;
	uint32_t x655 = UINT32_MAX;

    t158 = (((x653%x654)<=x655)*x656);

    if (t158 != -128) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile uint16_t x657 = UINT16_MAX;
	static int64_t x658 = 2874796454497967361LL;
	int16_t x659 = INT16_MIN;
	volatile int32_t t159 = 249;

    t159 = (((x657%x658)<=x659)*x660);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x662 = -70;
	uint16_t x664 = 3U;
	int32_t t160 = 78605771;

    t160 = (((x661%x662)<=x663)*x664);

    if (t160 != 3) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x667 = 69056618;
	int32_t x668 = 696;

    t161 = (((x665%x666)<=x667)*x668);

    if (t161 != 696) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int16_t x669 = INT16_MIN;
	int64_t x670 = 24811637397LL;
	int32_t x671 = INT32_MIN;
	volatile int8_t x672 = INT8_MIN;
	int32_t t162 = -673718;

    t162 = (((x669%x670)<=x671)*x672);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint64_t x673 = UINT64_MAX;
	static int16_t x674 = 1;
	uint32_t x675 = 7U;
	uint16_t x676 = 16U;

    t163 = (((x673%x674)<=x675)*x676);

    if (t163 != 16) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x677 = INT64_MIN;
	static uint32_t x678 = 10U;
	uint32_t x679 = 181253U;
	int64_t t164 = -2LL;

    t164 = (((x677%x678)<=x679)*x680);

    if (t164 != 10464642LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint16_t x681 = UINT16_MAX;
	int32_t x682 = 2400;
	int16_t x683 = -336;
	int32_t x684 = -4344549;

    t165 = (((x681%x682)<=x683)*x684);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x685 = 7;
	static uint16_t x686 = UINT16_MAX;
	int16_t x687 = INT16_MIN;

    t166 = (((x685%x686)<=x687)*x688);

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x690 = -1LL;
	uint16_t x691 = UINT16_MAX;
	int32_t x692 = -1;
	int32_t t167 = -59888258;

    t167 = (((x689%x690)<=x691)*x692);

    if (t167 != -1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x694 = -133916467;
	uint32_t x695 = 13374U;
	int16_t x696 = INT16_MAX;
	static volatile int32_t t168 = -3574;

    t168 = (((x693%x694)<=x695)*x696);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x703 = INT8_MIN;

    t169 = (((x701%x702)<=x703)*x704);

    if (t169 != 65535) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x705 = -1;
	int16_t x707 = INT16_MAX;

    t170 = (((x705%x706)<=x707)*x708);

    if (t170 != -1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x710 = INT32_MIN;
	int32_t x712 = -1;
	int32_t t171 = -21284311;

    t171 = (((x709%x710)<=x711)*x712);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x713 = 57912U;
	uint32_t x714 = 42682U;
	static uint64_t x715 = 146328LLU;
	static int8_t x716 = INT8_MIN;
	volatile int32_t t172 = 1;

    t172 = (((x713%x714)<=x715)*x716);

    if (t172 != -128) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x718 = -5239;
	static uint8_t x720 = 0U;
	int32_t t173 = 25449;

    t173 = (((x717%x718)<=x719)*x720);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x721 = -1;
	volatile int32_t x722 = INT32_MAX;
	int16_t x723 = INT16_MIN;

    t174 = (((x721%x722)<=x723)*x724);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x726 = UINT8_MAX;
	int64_t x727 = -59217507757675151LL;
	int32_t x728 = 1;

    t175 = (((x725%x726)<=x727)*x728);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint8_t x729 = 0U;
	uint8_t x730 = 50U;
	int16_t x732 = INT16_MAX;
	static volatile int32_t t176 = 177126004;

    t176 = (((x729%x730)<=x731)*x732);

    if (t176 != 32767) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x733 = 6U;
	int8_t x734 = -7;
	int64_t x735 = 3993221330643518LL;
	static int64_t x736 = 15224677LL;

    t177 = (((x733%x734)<=x735)*x736);

    if (t177 != 15224677LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x737 = UINT64_MAX;
	uint16_t x738 = UINT16_MAX;
	int32_t x739 = INT32_MAX;
	int32_t x740 = 3;
	static int32_t t178 = 104;

    t178 = (((x737%x738)<=x739)*x740);

    if (t178 != 3) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x741 = INT32_MAX;
	static volatile int16_t x742 = -4581;
	int8_t x743 = INT8_MIN;
	volatile int16_t x744 = 3562;
	volatile int32_t t179 = 175;

    t179 = (((x741%x742)<=x743)*x744);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x745 = INT64_MIN;
	int32_t x746 = -52060923;
	static int32_t x747 = INT32_MIN;
	int8_t x748 = -30;
	int32_t t180 = -141882214;

    t180 = (((x745%x746)<=x747)*x748);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint32_t x751 = 99722711U;
	volatile int32_t x752 = INT32_MIN;
	int32_t t181 = -109576132;

    t181 = (((x749%x750)<=x751)*x752);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x753 = -1LL;
	int16_t x754 = -1;
	int64_t x755 = INT64_MIN;
	uint8_t x756 = 75U;
	volatile int32_t t182 = -32527;

    t182 = (((x753%x754)<=x755)*x756);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x757 = 9;
	int8_t x758 = -1;
	int64_t x760 = INT64_MAX;
	int64_t t183 = 894001LL;

    t183 = (((x757%x758)<=x759)*x760);

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x761 = INT16_MIN;
	uint64_t t184 = 55LLU;

    t184 = (((x761%x762)<=x763)*x764);

    if (t184 != 2849105640659LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x765 = -23;
	int8_t x766 = INT8_MIN;
	volatile int64_t x767 = -1LL;
	int32_t x768 = -56209134;
	static volatile int32_t t185 = -114652;

    t185 = (((x765%x766)<=x767)*x768);

    if (t185 != -56209134) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint64_t x770 = 13938082332595651LLU;
	int8_t x771 = INT8_MIN;
	static int32_t t186 = 46;

    t186 = (((x769%x770)<=x771)*x772);

    if (t186 != 13) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x773 = -1LL;
	static int16_t x774 = INT16_MIN;
	int16_t x775 = -928;
	static int64_t x776 = INT64_MIN;
	static volatile int64_t t187 = 191944913755LL;

    t187 = (((x773%x774)<=x775)*x776);

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x777 = INT64_MIN;
	volatile int64_t x778 = INT64_MIN;
	volatile int8_t x779 = 39;
	volatile int32_t t188 = 71531;

    t188 = (((x777%x778)<=x779)*x780);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x781 = 124618LLU;
	static int16_t x782 = 41;
	static uint16_t x783 = 21888U;
	static int32_t x784 = INT32_MIN;

    t189 = (((x781%x782)<=x783)*x784);

    if (t189 != INT32_MIN) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x785 = 585;
	uint8_t x786 = UINT8_MAX;
	uint64_t x787 = UINT64_MAX;
	static int8_t x788 = INT8_MAX;
	int32_t t190 = -14753684;

    t190 = (((x785%x786)<=x787)*x788);

    if (t190 != 127) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int64_t x789 = INT64_MIN;
	volatile uint8_t x792 = UINT8_MAX;
	volatile int32_t t191 = 0;

    t191 = (((x789%x790)<=x791)*x792);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x793 = 752U;
	static uint16_t x795 = 93U;
	int32_t t192 = -6351816;

    t192 = (((x793%x794)<=x795)*x796);

    if (t192 != 770) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x797 = 7U;
	int64_t x798 = INT64_MIN;
	static volatile int64_t x799 = INT64_MIN;
	volatile uint64_t x800 = 6950133LLU;

    t193 = (((x797%x798)<=x799)*x800);

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x801 = 3224120276580LL;
	uint8_t x802 = 21U;
	int8_t x803 = -1;
	static int64_t x804 = -13972346988294LL;
	int64_t t194 = -8697014918481591LL;

    t194 = (((x801%x802)<=x803)*x804);

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x805 = INT32_MIN;
	volatile uint16_t x807 = UINT16_MAX;
	static volatile int32_t x808 = INT32_MAX;
	int32_t t195 = INT32_MAX;

    t195 = (((x805%x806)<=x807)*x808);

    if (t195 != INT32_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x810 = INT8_MIN;
	static int8_t x811 = 30;
	int8_t x812 = INT8_MIN;
	int32_t t196 = -1;

    t196 = (((x809%x810)<=x811)*x812);

    if (t196 != -128) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x814 = INT16_MIN;
	int8_t x815 = INT8_MIN;
	volatile int32_t t197 = 104;

    t197 = (((x813%x814)<=x815)*x816);

    if (t197 != 21) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x817 = 42692625U;
	int16_t x819 = INT16_MIN;
	int8_t x820 = 33;
	volatile int32_t t198 = 9514;

    t198 = (((x817%x818)<=x819)*x820);

    if (t198 != 33) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x822 = -1;
	static uint16_t x823 = 3018U;
	int32_t x824 = INT32_MIN;
	volatile int32_t t199 = INT32_MIN;

    t199 = (((x821%x822)<=x823)*x824);

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


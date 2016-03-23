
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

static int64_t x1 = INT64_MIN;
volatile int64_t x9 = INT64_MIN;
int64_t t2 = INT64_MIN;
int32_t x13 = -7;
static int64_t x14 = -1LL;
int8_t x24 = INT8_MAX;
int8_t x27 = -1;
static int8_t x28 = 1;
int8_t x34 = 1;
static volatile uint32_t t8 = 16114U;
static int8_t x44 = INT8_MIN;
static volatile uint64_t x48 = UINT64_MAX;
static int32_t t11 = 45812220;
volatile int64_t t12 = INT64_MAX;
int16_t x54 = -1;
int8_t x60 = -51;
static int32_t t14 = 108576374;
static int32_t x65 = INT32_MIN;
static uint16_t x73 = 11427U;
int32_t t18 = 14838;
volatile int8_t x78 = INT8_MIN;
static int32_t t19 = 1433218;
int16_t x81 = -1;
static int16_t x82 = 72;
int8_t x84 = 0;
int8_t x86 = 2;
int16_t x88 = INT16_MAX;
uint64_t x89 = 12LLU;
volatile uint16_t x94 = UINT16_MAX;
int32_t x97 = INT32_MAX;
volatile uint64_t x101 = UINT64_MAX;
uint64_t t25 = UINT64_MAX;
static uint32_t x105 = UINT32_MAX;
static int32_t x110 = -266953;
int32_t x111 = INT32_MIN;
int16_t x114 = -1352;
int8_t x123 = -1;
int32_t x129 = -1;
int32_t x133 = -1;
volatile int64_t t35 = 33003704LL;
uint16_t x150 = UINT16_MAX;
uint16_t x155 = 10U;
volatile int64_t x160 = -132LL;
uint32_t x162 = 3416U;
volatile int64_t x166 = INT64_MAX;
static uint16_t x175 = UINT16_MAX;
uint32_t x182 = 114699694U;
static int8_t x185 = 7;
int16_t x188 = INT16_MIN;
uint8_t x189 = 1U;
int32_t x190 = INT32_MIN;
int32_t x191 = -1;
static int64_t x196 = INT64_MIN;
int8_t x199 = INT8_MIN;
static int32_t x205 = INT32_MAX;
int16_t x211 = 0;
static volatile int64_t x213 = INT64_MIN;
int8_t x220 = INT8_MIN;
uint32_t t54 = 5U;
int8_t x226 = 8;
volatile int8_t x227 = -1;
int32_t x230 = 0;
int32_t x232 = -30947;
static uint32_t x234 = 2U;
static int32_t t58 = 1070003882;
volatile int64_t t59 = -32734811364177LL;
int8_t x248 = -1;
volatile int64_t t61 = INT64_MIN;
int8_t x250 = INT8_MAX;
int64_t x255 = INT64_MIN;
int64_t x256 = -1930578LL;
volatile int32_t t63 = -120004518;
volatile int32_t t64 = -4811503;
volatile int8_t x265 = INT8_MIN;
int32_t t69 = 766536780;
int8_t x293 = INT8_MAX;
volatile int32_t x294 = 2;
uint8_t x295 = 12U;
int32_t t74 = 2540;
int16_t x302 = INT16_MAX;
int64_t x308 = INT64_MIN;
uint32_t x310 = 7U;
uint8_t x312 = 0U;
int32_t t77 = 51;
static uint8_t x313 = 20U;
static uint16_t x320 = UINT16_MAX;
uint32_t t79 = 93394U;
uint8_t x324 = 38U;
int32_t t80 = 2;
int8_t x326 = 1;
uint64_t x334 = 1253600LLU;
int32_t x335 = INT32_MIN;
volatile int32_t x338 = INT32_MIN;
volatile uint16_t x341 = 17827U;
volatile int32_t t85 = -8;
uint64_t x345 = 3572838954012251LLU;
uint32_t x348 = 109974307U;
int64_t x356 = 74LL;
int16_t x360 = -15;
int32_t x366 = -3;
uint16_t x389 = 88U;
int64_t x392 = INT64_MIN;
static volatile int32_t t96 = -2089243;
static uint8_t x397 = 0U;
volatile int32_t t98 = -12276911;
static int8_t x401 = INT8_MAX;
int8_t x403 = -3;
volatile int32_t t99 = -28844125;
static volatile int32_t t100 = -94;
int8_t x412 = INT8_MAX;
int32_t x419 = INT32_MIN;
static volatile int16_t x420 = -1;
int16_t x424 = INT16_MIN;
uint32_t t104 = 784001780U;
uint32_t x425 = 486U;
volatile int64_t x430 = 1LL;
int64_t x431 = -932LL;
int64_t x432 = INT64_MIN;
int32_t t106 = -765;
static uint32_t x433 = UINT32_MAX;
volatile uint16_t x439 = UINT16_MAX;
static volatile int32_t t109 = 1;
volatile uint32_t t111 = 56U;
int32_t x460 = 27;
static int32_t x461 = 12370;
int32_t x462 = INT32_MIN;
volatile int32_t x471 = -6847;
int32_t t116 = 253;
int8_t x474 = -1;
int32_t x475 = INT32_MIN;
volatile uint16_t x487 = UINT16_MAX;
int8_t x496 = -1;
int32_t t122 = INT32_MAX;
volatile int32_t t124 = -189;
int32_t x519 = INT32_MIN;
int64_t x548 = INT64_MAX;
static int64_t x551 = -1LL;
int16_t x553 = 4902;
uint16_t x554 = 9U;
static int32_t x555 = 0;
int16_t x559 = INT16_MIN;
int32_t t136 = -50506344;
volatile int32_t t137 = -1;
int64_t x566 = 409LL;
volatile int16_t x576 = INT16_MIN;
int32_t t140 = -5600;
int64_t x578 = 234804LL;
uint64_t x587 = UINT64_MAX;
uint16_t x588 = 16538U;
static uint16_t x599 = 13090U;
volatile int16_t x600 = -1;
uint32_t x604 = UINT32_MAX;
static uint16_t x608 = 12260U;
volatile int8_t x614 = INT8_MIN;
int64_t x616 = INT64_MIN;
volatile uint8_t x617 = 0U;
uint32_t x619 = 10U;
static uint16_t x620 = UINT16_MAX;
volatile int64_t t152 = INT64_MIN;
int16_t x631 = INT16_MIN;
uint32_t x633 = 61210U;
volatile uint32_t t155 = 1685674U;
uint32_t x642 = UINT32_MAX;
int64_t x644 = -1LL;
volatile uint64_t x645 = 39899484LLU;
int8_t x646 = INT8_MIN;
int32_t x656 = INT32_MIN;
static uint64_t x659 = 2LLU;
uint16_t x660 = 58U;
volatile int64_t t161 = 891161LL;
int16_t x662 = INT16_MIN;
static uint16_t x664 = 1800U;
int16_t x667 = 1;
int64_t x672 = INT64_MIN;
int64_t x676 = INT64_MAX;
int8_t x682 = -17;
int64_t x684 = 23839444LL;
volatile int64_t x686 = -1LL;
int64_t x689 = INT64_MIN;
static int16_t x697 = 279;
volatile int8_t x698 = INT8_MIN;
static int32_t x700 = -1;
volatile int32_t t171 = -25;
int64_t x701 = INT64_MIN;
int64_t x707 = INT64_MIN;
int16_t x708 = INT16_MAX;
static uint32_t t173 = UINT32_MAX;
int64_t x709 = INT64_MAX;
int64_t x712 = -14746LL;
volatile int64_t t174 = INT64_MAX;
static uint32_t x726 = UINT32_MAX;
int8_t x727 = INT8_MAX;
int32_t x728 = -2680;
uint16_t x729 = 6177U;
uint64_t x730 = 0LLU;
uint8_t x741 = 2U;
int32_t x745 = INT32_MAX;
int32_t t185 = -7185;
int16_t x761 = INT16_MAX;
static uint32_t x764 = UINT32_MAX;
static int32_t x766 = INT32_MIN;
int64_t x767 = INT64_MIN;
int16_t x768 = INT16_MAX;
static uint64_t x773 = 46670971191158753LLU;
int16_t x775 = 0;
int8_t x776 = -1;
int8_t x796 = INT8_MAX;
volatile int32_t x800 = -1;
int32_t t196 = 0;
int64_t x803 = INT64_MIN;
volatile int32_t t197 = 55;
static uint64_t x807 = 63LLU;


void f0(void) {
    	volatile int64_t x2 = -1LL;
	int32_t x3 = INT32_MIN;
	int64_t x4 = INT64_MIN;
	int64_t t0 = INT64_MIN;

    t0 = (x1/(x2!=(x3^x4)));

    if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = 9LLU;
	int32_t x6 = INT32_MIN;
	int32_t x7 = -1;
	int8_t x8 = 61;
	uint64_t t1 = 34159698437360264LLU;

    t1 = (x5/(x6!=(x7^x8)));

    if (t1 != 9LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint16_t x10 = UINT16_MAX;
	uint64_t x11 = 429418281928677998LLU;
	uint64_t x12 = 2266524LLU;

    t2 = (x9/(x10!=(x11^x12)));

    if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x15 = -6;
	volatile int8_t x16 = -13;
	int32_t t3 = 9037201;

    t3 = (x13/(x14!=(x15^x16)));

    if (t3 != -7) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint16_t x17 = UINT16_MAX;
	int16_t x18 = INT16_MAX;
	uint16_t x19 = 395U;
	uint64_t x20 = 1LLU;
	int32_t t4 = -365;

    t4 = (x17/(x18!=(x19^x20)));

    if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = -1;
	uint8_t x22 = UINT8_MAX;
	static uint16_t x23 = 9U;
	int32_t t5 = -40059;

    t5 = (x21/(x22!=(x23^x24)));

    if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint64_t x25 = 3595131306393279394LLU;
	int8_t x26 = INT8_MIN;
	volatile uint64_t t6 = 52037354735LLU;

    t6 = (x25/(x26!=(x27^x28)));

    if (t6 != 3595131306393279394LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = UINT32_MAX;
	volatile int64_t x30 = INT64_MIN;
	uint16_t x31 = 36U;
	int64_t x32 = INT64_MIN;
	uint32_t t7 = UINT32_MAX;

    t7 = (x29/(x30!=(x31^x32)));

    if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint32_t x33 = 7179663U;
	int8_t x35 = INT8_MIN;
	int32_t x36 = INT32_MIN;

    t8 = (x33/(x34!=(x35^x36)));

    if (t8 != 7179663U) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x37 = INT8_MAX;
	static uint64_t x38 = 6862354094037826LLU;
	uint64_t x39 = UINT64_MAX;
	int64_t x40 = INT64_MIN;
	volatile int32_t t9 = -59;

    t9 = (x37/(x38!=(x39^x40)));

    if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x41 = 3U;
	uint32_t x42 = UINT32_MAX;
	int32_t x43 = INT32_MIN;
	volatile int32_t t10 = 699;

    t10 = (x41/(x42!=(x43^x44)));

    if (t10 != 3) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x45 = INT16_MIN;
	uint16_t x46 = UINT16_MAX;
	volatile int8_t x47 = -11;

    t11 = (x45/(x46!=(x47^x48)));

    if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = INT64_MAX;
	uint16_t x50 = 3U;
	volatile int64_t x51 = INT64_MIN;
	volatile int32_t x52 = -1;

    t12 = (x49/(x50!=(x51^x52)));

    if (t12 != INT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = -1;
	int8_t x55 = INT8_MIN;
	int64_t x56 = INT64_MIN;
	static volatile int32_t t13 = 0;

    t13 = (x53/(x54!=(x55^x56)));

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = INT16_MIN;
	uint16_t x58 = 29812U;
	int64_t x59 = -1LL;

    t14 = (x57/(x58!=(x59^x60)));

    if (t14 != -32768) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x61 = 26805025413102471LLU;
	int8_t x62 = INT8_MIN;
	int16_t x63 = INT16_MIN;
	int32_t x64 = 0;
	static uint64_t t15 = 1313802741LLU;

    t15 = (x61/(x62!=(x63^x64)));

    if (t15 != 26805025413102471LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int8_t x66 = INT8_MIN;
	volatile int32_t x67 = 4985;
	int16_t x68 = INT16_MIN;
	int32_t t16 = INT32_MIN;

    t16 = (x65/(x66!=(x67^x68)));

    if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = INT8_MIN;
	uint32_t x70 = UINT32_MAX;
	static int16_t x71 = -3;
	uint8_t x72 = 1U;
	volatile int32_t t17 = 932951;

    t17 = (x69/(x70!=(x71^x72)));

    if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x74 = -5049LL;
	int16_t x75 = -1;
	int64_t x76 = INT64_MIN;

    t18 = (x73/(x74!=(x75^x76)));

    if (t18 != 11427) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x77 = -1180;
	int64_t x79 = 2LL;
	volatile uint32_t x80 = 1U;

    t19 = (x77/(x78!=(x79^x80)));

    if (t19 != -1180) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x83 = INT16_MIN;
	volatile int32_t t20 = -646;

    t20 = (x81/(x82!=(x83^x84)));

    if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = 1116590448774LL;
	static uint32_t x87 = 180747U;
	int64_t t21 = -239909956868LL;

    t21 = (x85/(x86!=(x87^x88)));

    if (t21 != 1116590448774LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x90 = UINT64_MAX;
	int8_t x91 = INT8_MIN;
	uint16_t x92 = 575U;
	volatile uint64_t t22 = 12861256LLU;

    t22 = (x89/(x90!=(x91^x92)));

    if (t22 != 12LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x93 = 2U;
	uint32_t x95 = 60840535U;
	int64_t x96 = INT64_MAX;
	uint32_t t23 = 60554U;

    t23 = (x93/(x94!=(x95^x96)));

    if (t23 != 2U) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x98 = INT16_MIN;
	int64_t x99 = 94798053565384LL;
	int16_t x100 = -47;
	static volatile int32_t t24 = INT32_MAX;

    t24 = (x97/(x98!=(x99^x100)));

    if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x102 = 0;
	static uint64_t x103 = 1038100091516437939LLU;
	uint64_t x104 = UINT64_MAX;

    t25 = (x101/(x102!=(x103^x104)));

    if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x106 = 43561U;
	int8_t x107 = INT8_MIN;
	uint16_t x108 = 25317U;
	uint32_t t26 = UINT32_MAX;

    t26 = (x105/(x106!=(x107^x108)));

    if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = INT32_MAX;
	static volatile int8_t x112 = -1;
	volatile int32_t t27 = INT32_MAX;

    t27 = (x109/(x110!=(x111^x112)));

    if (t27 != INT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x113 = 0U;
	static volatile int8_t x115 = INT8_MIN;
	int8_t x116 = INT8_MAX;
	volatile uint32_t t28 = 123U;

    t28 = (x113/(x114!=(x115^x116)));

    if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint16_t x117 = UINT16_MAX;
	static volatile int64_t x118 = -1LL;
	static volatile uint8_t x119 = 3U;
	int32_t x120 = INT32_MIN;
	int32_t t29 = -10450;

    t29 = (x117/(x118!=(x119^x120)));

    if (t29 != 65535) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = -1LL;
	volatile int16_t x122 = 440;
	int64_t x124 = INT64_MIN;
	volatile int64_t t30 = -14318287LL;

    t30 = (x121/(x122!=(x123^x124)));

    if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x125 = 143896179675339996LL;
	uint16_t x126 = 2124U;
	int16_t x127 = INT16_MAX;
	volatile uint8_t x128 = UINT8_MAX;
	int64_t t31 = -45LL;

    t31 = (x125/(x126!=(x127^x128)));

    if (t31 != 143896179675339996LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint32_t x130 = 63684U;
	volatile uint8_t x131 = 1U;
	uint64_t x132 = 97LLU;
	static int32_t t32 = 1006870051;

    t32 = (x129/(x130!=(x131^x132)));

    if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x134 = 7;
	volatile int32_t x135 = INT32_MIN;
	static volatile uint8_t x136 = 5U;
	int32_t t33 = -1;

    t33 = (x133/(x134!=(x135^x136)));

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint64_t x137 = UINT64_MAX;
	volatile int8_t x138 = INT8_MAX;
	volatile uint8_t x139 = 31U;
	volatile int8_t x140 = INT8_MAX;
	uint64_t t34 = UINT64_MAX;

    t34 = (x137/(x138!=(x139^x140)));

    if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int64_t x141 = 5341612LL;
	uint64_t x142 = UINT64_MAX;
	int8_t x143 = -1;
	int32_t x144 = INT32_MAX;

    t35 = (x141/(x142!=(x143^x144)));

    if (t35 != 5341612LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x145 = INT16_MIN;
	volatile int16_t x146 = INT16_MIN;
	uint16_t x147 = 1341U;
	static volatile uint16_t x148 = 844U;
	int32_t t36 = 12232768;

    t36 = (x145/(x146!=(x147^x148)));

    if (t36 != -32768) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint64_t x149 = 169LLU;
	uint32_t x151 = 297310U;
	int64_t x152 = -1LL;
	uint64_t t37 = 83761401173492LLU;

    t37 = (x149/(x150!=(x151^x152)));

    if (t37 != 169LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x153 = UINT16_MAX;
	volatile int8_t x154 = INT8_MIN;
	uint8_t x156 = 31U;
	volatile int32_t t38 = 10;

    t38 = (x153/(x154!=(x155^x156)));

    if (t38 != 65535) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = INT16_MIN;
	int32_t x158 = -16607782;
	uint8_t x159 = 1U;
	static int32_t t39 = -1;

    t39 = (x157/(x158!=(x159^x160)));

    if (t39 != -32768) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = INT64_MIN;
	int32_t x163 = 6995;
	int16_t x164 = INT16_MIN;
	volatile int64_t t40 = INT64_MIN;

    t40 = (x161/(x162!=(x163^x164)));

    if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = -1;
	uint16_t x167 = 13020U;
	volatile int8_t x168 = INT8_MAX;
	int32_t t41 = 621784;

    t41 = (x165/(x166!=(x167^x168)));

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x169 = 0U;
	int32_t x170 = INT32_MIN;
	int8_t x171 = INT8_MAX;
	uint16_t x172 = UINT16_MAX;
	static volatile int32_t t42 = 0;

    t42 = (x169/(x170!=(x171^x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = -4;
	int64_t x174 = 2557529LL;
	int16_t x176 = INT16_MAX;
	int32_t t43 = 5;

    t43 = (x173/(x174!=(x175^x176)));

    if (t43 != -4) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = INT32_MIN;
	static uint32_t x178 = 11U;
	volatile int64_t x179 = INT64_MIN;
	uint8_t x180 = 0U;
	static int32_t t44 = INT32_MIN;

    t44 = (x177/(x178!=(x179^x180)));

    if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x181 = INT16_MIN;
	int32_t x183 = 31;
	int64_t x184 = INT64_MIN;
	static volatile int32_t t45 = 397674;

    t45 = (x181/(x182!=(x183^x184)));

    if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x186 = -1;
	uint64_t x187 = UINT64_MAX;
	volatile int32_t t46 = 126;

    t46 = (x185/(x186!=(x187^x188)));

    if (t46 != 7) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x192 = UINT64_MAX;
	volatile int32_t t47 = -181359;

    t47 = (x189/(x190!=(x191^x192)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x193 = UINT8_MAX;
	volatile int64_t x194 = INT64_MIN;
	static volatile int16_t x195 = INT16_MIN;
	volatile int32_t t48 = 6166;

    t48 = (x193/(x194!=(x195^x196)));

    if (t48 != 255) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x197 = 27176255018225LLU;
	volatile int8_t x198 = INT8_MAX;
	int16_t x200 = INT16_MIN;
	static volatile uint64_t t49 = 8929LLU;

    t49 = (x197/(x198!=(x199^x200)));

    if (t49 != 27176255018225LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x201 = -1;
	int64_t x202 = INT64_MIN;
	int32_t x203 = -1;
	int64_t x204 = INT64_MIN;
	volatile int32_t t50 = -16447256;

    t50 = (x201/(x202!=(x203^x204)));

    if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x206 = UINT32_MAX;
	int8_t x207 = INT8_MAX;
	volatile uint64_t x208 = 20946701668336LLU;
	volatile int32_t t51 = INT32_MAX;

    t51 = (x205/(x206!=(x207^x208)));

    if (t51 != INT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = 26057065;
	static uint8_t x210 = UINT8_MAX;
	int16_t x212 = INT16_MIN;
	int32_t t52 = -297495091;

    t52 = (x209/(x210!=(x211^x212)));

    if (t52 != 26057065) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x214 = 1;
	static int32_t x215 = INT32_MIN;
	uint32_t x216 = UINT32_MAX;
	int64_t t53 = INT64_MIN;

    t53 = (x213/(x214!=(x215^x216)));

    if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile uint32_t x217 = 11U;
	uint16_t x218 = 6U;
	uint8_t x219 = 1U;

    t54 = (x217/(x218!=(x219^x220)));

    if (t54 != 11U) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x221 = 1699963517U;
	static uint16_t x222 = 56U;
	uint64_t x223 = UINT64_MAX;
	int64_t x224 = 166LL;
	uint32_t t55 = 462574063U;

    t55 = (x221/(x222!=(x223^x224)));

    if (t55 != 1699963517U) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint8_t x225 = 0U;
	int64_t x228 = 4070071LL;
	int32_t t56 = -444814;

    t56 = (x225/(x226!=(x227^x228)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x229 = UINT8_MAX;
	static int32_t x231 = 10798;
	int32_t t57 = 72701;

    t57 = (x229/(x230!=(x231^x232)));

    if (t57 != 255) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x233 = INT8_MIN;
	int32_t x235 = 213098;
	uint8_t x236 = 79U;

    t58 = (x233/(x234!=(x235^x236)));

    if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x237 = 735458653LL;
	static int8_t x238 = -3;
	int64_t x239 = 3690627116699LL;
	uint64_t x240 = UINT64_MAX;

    t59 = (x237/(x238!=(x239^x240)));

    if (t59 != 735458653LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x241 = INT16_MIN;
	static int64_t x242 = INT64_MIN;
	static int16_t x243 = INT16_MIN;
	static uint64_t x244 = 22750255LLU;
	static volatile int32_t t60 = 0;

    t60 = (x241/(x242!=(x243^x244)));

    if (t60 != -32768) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = INT64_MIN;
	int16_t x246 = INT16_MIN;
	volatile int8_t x247 = INT8_MAX;

    t61 = (x245/(x246!=(x247^x248)));

    if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x249 = -1;
	int32_t x251 = 4350;
	int16_t x252 = 1;
	static int32_t t62 = -2787;

    t62 = (x249/(x250!=(x251^x252)));

    if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x253 = 6;
	static int16_t x254 = INT16_MIN;

    t63 = (x253/(x254!=(x255^x256)));

    if (t63 != 6) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x257 = INT16_MIN;
	volatile int32_t x258 = INT32_MAX;
	volatile int16_t x259 = INT16_MIN;
	uint32_t x260 = UINT32_MAX;

    t64 = (x257/(x258!=(x259^x260)));

    if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x261 = 15U;
	volatile int64_t x262 = -282654LL;
	static volatile int8_t x263 = INT8_MIN;
	static int16_t x264 = INT16_MIN;
	int32_t t65 = -211979339;

    t65 = (x261/(x262!=(x263^x264)));

    if (t65 != 15) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x266 = -1;
	int16_t x267 = INT16_MAX;
	static int32_t x268 = -1;
	volatile int32_t t66 = 110996;

    t66 = (x265/(x266!=(x267^x268)));

    if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x269 = 2LLU;
	static int16_t x270 = INT16_MIN;
	int64_t x271 = INT64_MIN;
	int32_t x272 = INT32_MIN;
	static uint64_t t67 = 180795952LLU;

    t67 = (x269/(x270!=(x271^x272)));

    if (t67 != 2LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = -57160324;
	int32_t x274 = INT32_MIN;
	volatile uint64_t x275 = 5935025LLU;
	int64_t x276 = INT64_MAX;
	static volatile int32_t t68 = -51655;

    t68 = (x273/(x274!=(x275^x276)));

    if (t68 != -57160324) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x277 = UINT8_MAX;
	volatile int16_t x278 = INT16_MAX;
	static volatile int32_t x279 = -1;
	volatile uint32_t x280 = UINT32_MAX;

    t69 = (x277/(x278!=(x279^x280)));

    if (t69 != 255) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x281 = INT64_MIN;
	volatile int16_t x282 = 2;
	uint32_t x283 = 2U;
	uint32_t x284 = UINT32_MAX;
	int64_t t70 = INT64_MIN;

    t70 = (x281/(x282!=(x283^x284)));

    if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = -273289813;
	int64_t x286 = INT64_MAX;
	int64_t x287 = INT64_MAX;
	static uint16_t x288 = 123U;
	static volatile int32_t t71 = -515106;

    t71 = (x285/(x286!=(x287^x288)));

    if (t71 != -273289813) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = INT8_MAX;
	int8_t x290 = INT8_MIN;
	int32_t x291 = INT32_MIN;
	int16_t x292 = 1412;
	static volatile int32_t t72 = 27859587;

    t72 = (x289/(x290!=(x291^x292)));

    if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x296 = INT64_MIN;
	int32_t t73 = 2;

    t73 = (x293/(x294!=(x295^x296)));

    if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x297 = UINT8_MAX;
	uint64_t x298 = UINT64_MAX;
	int64_t x299 = INT64_MIN;
	int64_t x300 = INT64_MIN;

    t74 = (x297/(x298!=(x299^x300)));

    if (t74 != 255) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x301 = INT8_MAX;
	uint16_t x303 = 927U;
	static int32_t x304 = 1148909;
	int32_t t75 = -11734064;

    t75 = (x301/(x302!=(x303^x304)));

    if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x305 = 2U;
	volatile int8_t x306 = INT8_MIN;
	int32_t x307 = INT32_MIN;
	int32_t t76 = 57768;

    t76 = (x305/(x306!=(x307^x308)));

    if (t76 != 2) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x309 = 51U;
	int32_t x311 = INT32_MIN;

    t77 = (x309/(x310!=(x311^x312)));

    if (t77 != 51) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x314 = INT8_MAX;
	int8_t x315 = 55;
	int8_t x316 = INT8_MIN;
	static volatile int32_t t78 = -90675042;

    t78 = (x313/(x314!=(x315^x316)));

    if (t78 != 20) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x317 = 119914718U;
	int64_t x318 = INT64_MAX;
	int32_t x319 = -1;

    t79 = (x317/(x318!=(x319^x320)));

    if (t79 != 119914718U) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = INT8_MAX;
	uint8_t x322 = 8U;
	int8_t x323 = -1;

    t80 = (x321/(x322!=(x323^x324)));

    if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint8_t x325 = 1U;
	static int32_t x327 = 50365411;
	volatile int8_t x328 = INT8_MIN;
	int32_t t81 = 108;

    t81 = (x325/(x326!=(x327^x328)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int8_t x329 = -1;
	volatile int8_t x330 = -1;
	volatile int8_t x331 = -2;
	static uint16_t x332 = 9238U;
	static volatile int32_t t82 = -13589121;

    t82 = (x329/(x330!=(x331^x332)));

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x333 = 0U;
	uint16_t x336 = 11521U;
	static int32_t t83 = 27386;

    t83 = (x333/(x334!=(x335^x336)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x337 = -1;
	uint64_t x339 = UINT64_MAX;
	volatile uint8_t x340 = 45U;
	volatile int32_t t84 = 3870036;

    t84 = (x337/(x338!=(x339^x340)));

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x342 = INT16_MAX;
	int64_t x343 = INT64_MIN;
	int32_t x344 = -1;

    t85 = (x341/(x342!=(x343^x344)));

    if (t85 != 17827) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint32_t x346 = UINT32_MAX;
	volatile int8_t x347 = INT8_MIN;
	volatile uint64_t t86 = 3922377053043429107LLU;

    t86 = (x345/(x346!=(x347^x348)));

    if (t86 != 3572838954012251LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x349 = INT8_MIN;
	int64_t x350 = INT64_MIN;
	static int8_t x351 = INT8_MAX;
	int64_t x352 = 13949969428396LL;
	volatile int32_t t87 = -51211;

    t87 = (x349/(x350!=(x351^x352)));

    if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x353 = 1;
	uint32_t x354 = 670U;
	int8_t x355 = INT8_MIN;
	static volatile int32_t t88 = -73;

    t88 = (x353/(x354!=(x355^x356)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint32_t x357 = 11U;
	uint8_t x358 = UINT8_MAX;
	static int64_t x359 = INT64_MAX;
	static uint32_t t89 = 2133U;

    t89 = (x357/(x358!=(x359^x360)));

    if (t89 != 11U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x361 = 22U;
	static int32_t x362 = -1;
	uint8_t x363 = UINT8_MAX;
	uint8_t x364 = 2U;
	int32_t t90 = -10166;

    t90 = (x361/(x362!=(x363^x364)));

    if (t90 != 22) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x365 = 2U;
	static int32_t x367 = -1010750628;
	int8_t x368 = -1;
	static int32_t t91 = 14;

    t91 = (x365/(x366!=(x367^x368)));

    if (t91 != 2) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x373 = INT64_MIN;
	volatile int32_t x374 = INT32_MIN;
	int64_t x375 = INT64_MAX;
	volatile int32_t x376 = INT32_MAX;
	volatile int64_t t92 = INT64_MIN;

    t92 = (x373/(x374!=(x375^x376)));

    if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x377 = -1;
	volatile int64_t x378 = -1LL;
	uint8_t x379 = UINT8_MAX;
	uint32_t x380 = UINT32_MAX;
	static volatile int32_t t93 = -558862424;

    t93 = (x377/(x378!=(x379^x380)));

    if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x381 = -1;
	int8_t x382 = 0;
	uint64_t x383 = 23843565903LLU;
	uint64_t x384 = UINT64_MAX;
	volatile int32_t t94 = 16487;

    t94 = (x381/(x382!=(x383^x384)));

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x385 = 27U;
	int32_t x386 = INT32_MIN;
	int16_t x387 = INT16_MIN;
	int64_t x388 = 36714LL;
	volatile int32_t t95 = -33701785;

    t95 = (x385/(x386!=(x387^x388)));

    if (t95 != 27) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x390 = INT64_MIN;
	uint64_t x391 = UINT64_MAX;

    t96 = (x389/(x390!=(x391^x392)));

    if (t96 != 88) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x393 = INT64_MIN;
	volatile int64_t x394 = INT64_MIN;
	static int16_t x395 = INT16_MAX;
	int32_t x396 = -117021665;
	static volatile int64_t t97 = INT64_MIN;

    t97 = (x393/(x394!=(x395^x396)));

    if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x398 = 2145;
	volatile uint32_t x399 = 23828229U;
	static uint16_t x400 = UINT16_MAX;

    t98 = (x397/(x398!=(x399^x400)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x402 = INT64_MIN;
	uint32_t x404 = UINT32_MAX;

    t99 = (x401/(x402!=(x403^x404)));

    if (t99 != 127) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint16_t x405 = 31620U;
	int32_t x406 = -89569;
	volatile uint64_t x407 = 7422751971717LLU;
	uint16_t x408 = UINT16_MAX;

    t100 = (x405/(x406!=(x407^x408)));

    if (t100 != 31620) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x409 = 6U;
	volatile int8_t x410 = -4;
	int16_t x411 = INT16_MAX;
	int32_t t101 = 5563;

    t101 = (x409/(x410!=(x411^x412)));

    if (t101 != 6) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x413 = -3385;
	volatile int8_t x414 = -1;
	int16_t x415 = 6978;
	int16_t x416 = 45;
	volatile int32_t t102 = -54;

    t102 = (x413/(x414!=(x415^x416)));

    if (t102 != -3385) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x417 = INT32_MIN;
	int8_t x418 = -5;
	volatile int32_t t103 = INT32_MIN;

    t103 = (x417/(x418!=(x419^x420)));

    if (t103 != INT32_MIN) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x421 = 980613U;
	uint16_t x422 = UINT16_MAX;
	volatile int8_t x423 = 3;

    t104 = (x421/(x422!=(x423^x424)));

    if (t104 != 980613U) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x426 = 36088448U;
	volatile int8_t x427 = -1;
	volatile uint64_t x428 = UINT64_MAX;
	static volatile uint32_t t105 = 19178013U;

    t105 = (x425/(x426!=(x427^x428)));

    if (t105 != 486U) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x429 = 2429U;

    t106 = (x429/(x430!=(x431^x432)));

    if (t106 != 2429) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x434 = 643;
	volatile int8_t x435 = 20;
	int16_t x436 = INT16_MIN;
	volatile uint32_t t107 = UINT32_MAX;

    t107 = (x433/(x434!=(x435^x436)));

    if (t107 != UINT32_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x437 = 1782U;
	int16_t x438 = 1679;
	int64_t x440 = INT64_MIN;
	volatile int32_t t108 = -32260;

    t108 = (x437/(x438!=(x439^x440)));

    if (t108 != 1782) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x441 = INT16_MAX;
	int32_t x442 = INT32_MAX;
	int64_t x443 = -1138280666359697LL;
	int8_t x444 = INT8_MIN;

    t109 = (x441/(x442!=(x443^x444)));

    if (t109 != 32767) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x445 = 1;
	static int32_t x446 = INT32_MIN;
	int8_t x447 = INT8_MIN;
	static int32_t x448 = 878;
	volatile int32_t t110 = -114531;

    t110 = (x445/(x446!=(x447^x448)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x449 = 7138U;
	int64_t x450 = -1LL;
	uint32_t x451 = UINT32_MAX;
	volatile uint8_t x452 = UINT8_MAX;

    t111 = (x449/(x450!=(x451^x452)));

    if (t111 != 7138U) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x453 = -3;
	int64_t x454 = INT64_MIN;
	static uint32_t x455 = 7U;
	uint8_t x456 = 0U;
	int32_t t112 = -61702005;

    t112 = (x453/(x454!=(x455^x456)));

    if (t112 != -3) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x457 = INT16_MIN;
	int64_t x458 = 114417486829463LL;
	int16_t x459 = -1;
	static int32_t t113 = 341;

    t113 = (x457/(x458!=(x459^x460)));

    if (t113 != -32768) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x463 = INT8_MIN;
	int32_t x464 = -111;
	volatile int32_t t114 = -815531;

    t114 = (x461/(x462!=(x463^x464)));

    if (t114 != 12370) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x465 = INT32_MIN;
	uint16_t x466 = 14790U;
	uint16_t x467 = 0U;
	uint8_t x468 = 2U;
	int32_t t115 = INT32_MIN;

    t115 = (x465/(x466!=(x467^x468)));

    if (t115 != INT32_MIN) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x469 = 3206013;
	static int32_t x470 = 64280;
	static int64_t x472 = -1LL;

    t116 = (x469/(x470!=(x471^x472)));

    if (t116 != 3206013) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x473 = INT32_MAX;
	volatile int32_t x476 = INT32_MIN;
	int32_t t117 = INT32_MAX;

    t117 = (x473/(x474!=(x475^x476)));

    if (t117 != INT32_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x477 = UINT32_MAX;
	static uint64_t x478 = 3832LLU;
	volatile int32_t x479 = INT32_MIN;
	int8_t x480 = INT8_MIN;
	uint32_t t118 = UINT32_MAX;

    t118 = (x477/(x478!=(x479^x480)));

    if (t118 != UINT32_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x481 = UINT64_MAX;
	int8_t x482 = 10;
	static int64_t x483 = 54255361106735LL;
	static int64_t x484 = -911LL;
	volatile uint64_t t119 = UINT64_MAX;

    t119 = (x481/(x482!=(x483^x484)));

    if (t119 != UINT64_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x485 = -1;
	int16_t x486 = -1;
	int8_t x488 = 3;
	static volatile int32_t t120 = -546228608;

    t120 = (x485/(x486!=(x487^x488)));

    if (t120 != -1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x489 = -1LL;
	int8_t x490 = INT8_MIN;
	int8_t x491 = -2;
	int16_t x492 = INT16_MAX;
	int64_t t121 = -517023853571LL;

    t121 = (x489/(x490!=(x491^x492)));

    if (t121 != -1LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x493 = INT32_MAX;
	int32_t x494 = -1;
	int16_t x495 = INT16_MAX;

    t122 = (x493/(x494!=(x495^x496)));

    if (t122 != INT32_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x497 = -1LL;
	static int32_t x498 = -1;
	static uint64_t x499 = 290289LLU;
	int64_t x500 = 43LL;
	int64_t t123 = 64680586518829808LL;

    t123 = (x497/(x498!=(x499^x500)));

    if (t123 != -1LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x501 = UINT8_MAX;
	uint32_t x502 = UINT32_MAX;
	int16_t x503 = INT16_MIN;
	static uint32_t x504 = 30U;

    t124 = (x501/(x502!=(x503^x504)));

    if (t124 != 255) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile uint64_t x509 = 961LLU;
	uint32_t x510 = 13632040U;
	static int32_t x511 = INT32_MIN;
	int8_t x512 = -1;
	uint64_t t125 = 7934LLU;

    t125 = (x509/(x510!=(x511^x512)));

    if (t125 != 961LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint32_t x513 = 183255U;
	int16_t x514 = INT16_MAX;
	static int32_t x515 = -7116;
	int16_t x516 = 77;
	uint32_t t126 = 5U;

    t126 = (x513/(x514!=(x515^x516)));

    if (t126 != 183255U) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint32_t x517 = UINT32_MAX;
	uint8_t x518 = 13U;
	static uint8_t x520 = 101U;
	uint32_t t127 = UINT32_MAX;

    t127 = (x517/(x518!=(x519^x520)));

    if (t127 != UINT32_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x521 = 14855LLU;
	int8_t x522 = 41;
	int16_t x523 = INT16_MAX;
	volatile int32_t x524 = -1;
	uint64_t t128 = 1275233170530770951LLU;

    t128 = (x521/(x522!=(x523^x524)));

    if (t128 != 14855LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x525 = INT8_MIN;
	static uint16_t x526 = 54U;
	int64_t x527 = INT64_MAX;
	int8_t x528 = -1;
	volatile int32_t t129 = -608;

    t129 = (x525/(x526!=(x527^x528)));

    if (t129 != -128) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x533 = -1LL;
	int64_t x534 = 1779783455331LL;
	int16_t x535 = -124;
	static int8_t x536 = 33;
	int64_t t130 = 756LL;

    t130 = (x533/(x534!=(x535^x536)));

    if (t130 != -1LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint8_t x537 = 6U;
	int8_t x538 = INT8_MIN;
	static int16_t x539 = INT16_MIN;
	int16_t x540 = 1;
	volatile int32_t t131 = -3545116;

    t131 = (x537/(x538!=(x539^x540)));

    if (t131 != 6) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x541 = -3048711LL;
	uint16_t x542 = 19999U;
	int16_t x543 = -1;
	static uint32_t x544 = 10954037U;
	int64_t t132 = -3LL;

    t132 = (x541/(x542!=(x543^x544)));

    if (t132 != -3048711LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint16_t x545 = 1U;
	uint8_t x546 = 3U;
	static uint32_t x547 = 5992U;
	int32_t t133 = 3;

    t133 = (x545/(x546!=(x547^x548)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x549 = -1;
	volatile int64_t x550 = -1LL;
	static int8_t x552 = INT8_MIN;
	int32_t t134 = 1;

    t134 = (x549/(x550!=(x551^x552)));

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x556 = INT8_MIN;
	volatile int32_t t135 = 140;

    t135 = (x553/(x554!=(x555^x556)));

    if (t135 != 4902) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int8_t x557 = INT8_MAX;
	uint8_t x558 = 33U;
	int16_t x560 = 9;

    t136 = (x557/(x558!=(x559^x560)));

    if (t136 != 127) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x561 = -1;
	uint16_t x562 = 380U;
	int32_t x563 = INT32_MAX;
	int8_t x564 = INT8_MAX;

    t137 = (x561/(x562!=(x563^x564)));

    if (t137 != -1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x565 = -9;
	uint16_t x567 = 306U;
	int16_t x568 = INT16_MIN;
	volatile int32_t t138 = 2672256;

    t138 = (x565/(x566!=(x567^x568)));

    if (t138 != -9) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x569 = INT32_MAX;
	int64_t x570 = INT64_MIN;
	int32_t x571 = -1;
	int64_t x572 = INT64_MIN;
	int32_t t139 = INT32_MAX;

    t139 = (x569/(x570!=(x571^x572)));

    if (t139 != INT32_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x573 = INT16_MAX;
	int64_t x574 = INT64_MAX;
	int16_t x575 = INT16_MAX;

    t140 = (x573/(x574!=(x575^x576)));

    if (t140 != 32767) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x577 = 9;
	int64_t x579 = INT64_MAX;
	uint8_t x580 = UINT8_MAX;
	int32_t t141 = -18152416;

    t141 = (x577/(x578!=(x579^x580)));

    if (t141 != 9) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x581 = 4686;
	uint64_t x582 = 0LLU;
	static uint32_t x583 = 460056626U;
	static uint32_t x584 = 0U;
	int32_t t142 = -5;

    t142 = (x581/(x582!=(x583^x584)));

    if (t142 != 4686) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x585 = INT16_MAX;
	int8_t x586 = INT8_MIN;
	int32_t t143 = -22904042;

    t143 = (x585/(x586!=(x587^x588)));

    if (t143 != 32767) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x589 = 0;
	int64_t x590 = INT64_MIN;
	volatile uint64_t x591 = 1042838LLU;
	static volatile int32_t x592 = -1;
	static int32_t t144 = 73;

    t144 = (x589/(x590!=(x591^x592)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int16_t x593 = -1;
	static int32_t x594 = -1;
	volatile int8_t x595 = 3;
	int64_t x596 = INT64_MAX;
	static volatile int32_t t145 = -11;

    t145 = (x593/(x594!=(x595^x596)));

    if (t145 != -1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x597 = INT16_MAX;
	int32_t x598 = 568;
	int32_t t146 = 1;

    t146 = (x597/(x598!=(x599^x600)));

    if (t146 != 32767) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x601 = 12U;
	volatile int16_t x602 = INT16_MIN;
	volatile uint16_t x603 = 283U;
	int32_t t147 = 0;

    t147 = (x601/(x602!=(x603^x604)));

    if (t147 != 12) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x605 = 1174;
	int16_t x606 = INT16_MIN;
	int16_t x607 = -53;
	volatile int32_t t148 = 3;

    t148 = (x605/(x606!=(x607^x608)));

    if (t148 != 1174) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint64_t x609 = 17175752201079LLU;
	volatile int8_t x610 = INT8_MAX;
	static uint8_t x611 = 26U;
	uint32_t x612 = UINT32_MAX;
	uint64_t t149 = 876534LLU;

    t149 = (x609/(x610!=(x611^x612)));

    if (t149 != 17175752201079LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint64_t x613 = 22739LLU;
	static int32_t x615 = INT32_MAX;
	uint64_t t150 = 449695908734933LLU;

    t150 = (x613/(x614!=(x615^x616)));

    if (t150 != 22739LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x618 = 7;
	volatile int32_t t151 = 2272330;

    t151 = (x617/(x618!=(x619^x620)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x621 = INT64_MIN;
	static int32_t x622 = INT32_MIN;
	uint32_t x623 = 88U;
	volatile uint8_t x624 = 52U;

    t152 = (x621/(x622!=(x623^x624)));

    if (t152 != INT64_MIN) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x625 = UINT32_MAX;
	int16_t x626 = -117;
	uint16_t x627 = 21U;
	volatile uint8_t x628 = 21U;
	volatile uint32_t t153 = UINT32_MAX;

    t153 = (x625/(x626!=(x627^x628)));

    if (t153 != UINT32_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x629 = 112456U;
	static int64_t x630 = -1LL;
	volatile int64_t x632 = INT64_MIN;
	volatile uint32_t t154 = 3211U;

    t154 = (x629/(x630!=(x631^x632)));

    if (t154 != 112456U) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x634 = -109048;
	volatile int8_t x635 = -1;
	static int64_t x636 = -1LL;

    t155 = (x633/(x634!=(x635^x636)));

    if (t155 != 61210U) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x637 = INT32_MIN;
	int8_t x638 = INT8_MIN;
	int8_t x639 = INT8_MIN;
	int64_t x640 = -1LL;
	volatile int32_t t156 = INT32_MIN;

    t156 = (x637/(x638!=(x639^x640)));

    if (t156 != INT32_MIN) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x641 = 289;
	uint64_t x643 = 13178048570662LLU;
	int32_t t157 = 2038473;

    t157 = (x641/(x642!=(x643^x644)));

    if (t157 != 289) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x647 = -1;
	uint16_t x648 = 25U;
	static volatile uint64_t t158 = 5198486127LLU;

    t158 = (x645/(x646!=(x647^x648)));

    if (t158 != 39899484LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x649 = INT16_MIN;
	volatile int32_t x650 = INT32_MAX;
	uint64_t x651 = UINT64_MAX;
	int8_t x652 = INT8_MIN;
	int32_t t159 = 87022502;

    t159 = (x649/(x650!=(x651^x652)));

    if (t159 != -32768) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x653 = -1;
	uint16_t x654 = 62U;
	int16_t x655 = -1;
	volatile int32_t t160 = 153030082;

    t160 = (x653/(x654!=(x655^x656)));

    if (t160 != -1) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x657 = -1LL;
	int64_t x658 = INT64_MIN;

    t161 = (x657/(x658!=(x659^x660)));

    if (t161 != -1LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x661 = 3U;
	uint16_t x663 = 204U;
	int32_t t162 = 105959884;

    t162 = (x661/(x662!=(x663^x664)));

    if (t162 != 3) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x665 = 349059012713745471LLU;
	int32_t x666 = INT32_MIN;
	uint32_t x668 = 253354U;
	uint64_t t163 = 12136686318LLU;

    t163 = (x665/(x666!=(x667^x668)));

    if (t163 != 349059012713745471LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x669 = INT8_MIN;
	uint64_t x670 = 21251725793129LLU;
	static int16_t x671 = 6393;
	volatile int32_t t164 = -427;

    t164 = (x669/(x670!=(x671^x672)));

    if (t164 != -128) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint64_t x673 = UINT64_MAX;
	int16_t x674 = INT16_MIN;
	volatile int16_t x675 = INT16_MAX;
	volatile uint64_t t165 = UINT64_MAX;

    t165 = (x673/(x674!=(x675^x676)));

    if (t165 != UINT64_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x677 = INT16_MIN;
	int16_t x678 = INT16_MAX;
	int16_t x679 = INT16_MAX;
	int32_t x680 = INT32_MIN;
	volatile int32_t t166 = 27;

    t166 = (x677/(x678!=(x679^x680)));

    if (t166 != -32768) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint16_t x681 = 2U;
	static int64_t x683 = INT64_MIN;
	int32_t t167 = -1;

    t167 = (x681/(x682!=(x683^x684)));

    if (t167 != 2) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x685 = 6;
	uint32_t x687 = 140600946U;
	static uint8_t x688 = UINT8_MAX;
	volatile int32_t t168 = 2;

    t168 = (x685/(x686!=(x687^x688)));

    if (t168 != 6) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x690 = INT64_MIN;
	int8_t x691 = -1;
	uint32_t x692 = UINT32_MAX;
	volatile int64_t t169 = INT64_MIN;

    t169 = (x689/(x690!=(x691^x692)));

    if (t169 != INT64_MIN) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int16_t x693 = INT16_MIN;
	int8_t x694 = INT8_MIN;
	volatile uint16_t x695 = 10948U;
	int32_t x696 = INT32_MAX;
	int32_t t170 = -1;

    t170 = (x693/(x694!=(x695^x696)));

    if (t170 != -32768) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x699 = INT8_MIN;

    t171 = (x697/(x698!=(x699^x700)));

    if (t171 != 279) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x702 = -1;
	volatile int32_t x703 = -1;
	volatile int64_t x704 = INT64_MAX;
	volatile int64_t t172 = INT64_MIN;

    t172 = (x701/(x702!=(x703^x704)));

    if (t172 != INT64_MIN) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint32_t x705 = UINT32_MAX;
	int32_t x706 = INT32_MIN;

    t173 = (x705/(x706!=(x707^x708)));

    if (t173 != UINT32_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x710 = INT16_MIN;
	volatile int8_t x711 = INT8_MIN;

    t174 = (x709/(x710!=(x711^x712)));

    if (t174 != INT64_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x713 = 55164990U;
	uint64_t x714 = UINT64_MAX;
	uint64_t x715 = 1LLU;
	static uint64_t x716 = 3711920360153LLU;
	volatile uint32_t t175 = 1207U;

    t175 = (x713/(x714!=(x715^x716)));

    if (t175 != 55164990U) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x717 = 296513327U;
	int16_t x718 = INT16_MAX;
	int32_t x719 = INT32_MIN;
	volatile int8_t x720 = 0;
	volatile uint32_t t176 = 1U;

    t176 = (x717/(x718!=(x719^x720)));

    if (t176 != 296513327U) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x721 = -7372626558365LL;
	int8_t x722 = -1;
	static int16_t x723 = INT16_MAX;
	static uint16_t x724 = UINT16_MAX;
	int64_t t177 = 19895LL;

    t177 = (x721/(x722!=(x723^x724)));

    if (t177 != -7372626558365LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x725 = INT16_MIN;
	volatile int32_t t178 = -1;

    t178 = (x725/(x726!=(x727^x728)));

    if (t178 != -32768) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint32_t x731 = UINT32_MAX;
	static int64_t x732 = -2975964569421LL;
	volatile int32_t t179 = -336;

    t179 = (x729/(x730!=(x731^x732)));

    if (t179 != 6177) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x733 = -1;
	int64_t x734 = INT64_MAX;
	int8_t x735 = INT8_MAX;
	volatile int8_t x736 = -1;
	static int32_t t180 = -15;

    t180 = (x733/(x734!=(x735^x736)));

    if (t180 != -1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x737 = -1470273776190474LL;
	uint64_t x738 = 6448533837437885LLU;
	uint64_t x739 = 2309540LLU;
	int32_t x740 = -1;
	static int64_t t181 = 29122187LL;

    t181 = (x737/(x738!=(x739^x740)));

    if (t181 != -1470273776190474LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x742 = INT32_MIN;
	volatile int64_t x743 = -1LL;
	uint16_t x744 = 0U;
	volatile int32_t t182 = -542813892;

    t182 = (x741/(x742!=(x743^x744)));

    if (t182 != 2) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint64_t x746 = 3371LLU;
	static int32_t x747 = INT32_MAX;
	int16_t x748 = INT16_MAX;
	static volatile int32_t t183 = INT32_MAX;

    t183 = (x745/(x746!=(x747^x748)));

    if (t183 != INT32_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x749 = -6898456;
	volatile uint32_t x750 = 27U;
	int32_t x751 = -14021863;
	uint16_t x752 = 614U;
	static int32_t t184 = -176792;

    t184 = (x749/(x750!=(x751^x752)));

    if (t184 != -6898456) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x753 = INT16_MIN;
	volatile int32_t x754 = INT32_MIN;
	int32_t x755 = 7713;
	volatile int16_t x756 = -452;

    t185 = (x753/(x754!=(x755^x756)));

    if (t185 != -32768) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x757 = 51;
	uint64_t x758 = 241128LLU;
	int8_t x759 = 0;
	uint16_t x760 = UINT16_MAX;
	static int32_t t186 = 28362;

    t186 = (x757/(x758!=(x759^x760)));

    if (t186 != 51) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x762 = INT64_MAX;
	int8_t x763 = INT8_MIN;
	int32_t t187 = -54;

    t187 = (x761/(x762!=(x763^x764)));

    if (t187 != 32767) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint8_t x765 = 6U;
	volatile int32_t t188 = 465174;

    t188 = (x765/(x766!=(x767^x768)));

    if (t188 != 6) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x769 = 231U;
	uint64_t x770 = 13521LLU;
	uint32_t x771 = 414284421U;
	volatile int16_t x772 = INT16_MAX;
	volatile int32_t t189 = -14532;

    t189 = (x769/(x770!=(x771^x772)));

    if (t189 != 231) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x774 = INT32_MAX;
	volatile uint64_t t190 = 18458863968612679LLU;

    t190 = (x773/(x774!=(x775^x776)));

    if (t190 != 46670971191158753LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x777 = INT64_MIN;
	volatile int32_t x778 = INT32_MIN;
	int16_t x779 = 0;
	int64_t x780 = INT64_MAX;
	volatile int64_t t191 = INT64_MIN;

    t191 = (x777/(x778!=(x779^x780)));

    if (t191 != INT64_MIN) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x781 = INT64_MIN;
	volatile int16_t x782 = -17;
	static uint8_t x783 = UINT8_MAX;
	int32_t x784 = -1;
	int64_t t192 = INT64_MIN;

    t192 = (x781/(x782!=(x783^x784)));

    if (t192 != INT64_MIN) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x785 = -1;
	int8_t x786 = INT8_MIN;
	int64_t x787 = INT64_MAX;
	static int64_t x788 = INT64_MIN;
	volatile int32_t t193 = 27279275;

    t193 = (x785/(x786!=(x787^x788)));

    if (t193 != -1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x789 = INT64_MIN;
	uint32_t x790 = UINT32_MAX;
	static uint64_t x791 = 2996LLU;
	int32_t x792 = 706116564;
	static volatile int64_t t194 = INT64_MIN;

    t194 = (x789/(x790!=(x791^x792)));

    if (t194 != INT64_MIN) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x793 = INT32_MIN;
	volatile int16_t x794 = INT16_MIN;
	int32_t x795 = INT32_MIN;
	int32_t t195 = INT32_MIN;

    t195 = (x793/(x794!=(x795^x796)));

    if (t195 != INT32_MIN) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x797 = 915U;
	volatile uint32_t x798 = 55U;
	int64_t x799 = INT64_MIN;

    t196 = (x797/(x798!=(x799^x800)));

    if (t196 != 915) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x801 = UINT16_MAX;
	volatile uint64_t x802 = 23LLU;
	static uint64_t x804 = 1762LLU;

    t197 = (x801/(x802!=(x803^x804)));

    if (t197 != 65535) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile uint16_t x805 = 1751U;
	static volatile int32_t x806 = INT32_MAX;
	uint16_t x808 = 8U;
	volatile int32_t t198 = -685;

    t198 = (x805/(x806!=(x807^x808)));

    if (t198 != 1751) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x809 = UINT8_MAX;
	int64_t x810 = INT64_MAX;
	int64_t x811 = 51771LL;
	int32_t x812 = -67;
	int32_t t199 = 21103;

    t199 = (x809/(x810!=(x811^x812)));

    if (t199 != 255) { NG(); } else { ; }
	
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


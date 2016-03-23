
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

uint32_t x4 = UINT32_MAX;
volatile uint32_t t0 = 1876474578U;
int32_t t2 = 0;
uint8_t x17 = UINT8_MAX;
static volatile int32_t t5 = -1029;
static volatile int32_t t7 = -169;
static int64_t x37 = -1LL;
static int8_t x45 = INT8_MIN;
static uint32_t x47 = 79U;
uint8_t x49 = 10U;
uint16_t x51 = UINT16_MAX;
volatile int32_t t12 = -4500632;
volatile int16_t x54 = INT16_MAX;
static volatile int16_t x70 = 1043;
int32_t x72 = INT32_MIN;
static uint64_t x74 = UINT64_MAX;
int32_t x78 = INT32_MIN;
uint64_t x79 = 2377303178711991LLU;
volatile int32_t t22 = 248521482;
int16_t x107 = INT16_MAX;
volatile int32_t t25 = -57375257;
static int8_t x113 = -21;
int8_t x115 = INT8_MIN;
volatile int8_t x123 = -1;
int8_t x129 = INT8_MIN;
volatile int32_t t33 = 486419;
static int16_t x145 = INT16_MIN;
static uint32_t x148 = UINT32_MAX;
volatile uint32_t t34 = 233U;
volatile int64_t t35 = 167490634944LL;
int16_t x154 = INT16_MIN;
volatile uint16_t x158 = UINT16_MAX;
int16_t x159 = 76;
int32_t x162 = INT32_MAX;
int32_t x167 = -1;
volatile uint32_t t39 = 1561615163U;
int64_t x175 = INT64_MIN;
volatile int8_t x198 = -1;
static int32_t x199 = INT32_MAX;
int16_t x203 = INT16_MAX;
volatile uint64_t t47 = 142LLU;
volatile int64_t x214 = INT64_MIN;
volatile int64_t t48 = -53005LL;
int32_t x217 = INT32_MAX;
int64_t x222 = 22087LL;
static int16_t x223 = INT16_MAX;
uint8_t x233 = 1U;
static uint16_t x238 = 117U;
int64_t x240 = 372091806556473363LL;
int64_t x243 = -141785424LL;
volatile int64_t x247 = 8097168073176LL;
int16_t x249 = 208;
volatile int64_t x256 = -1LL;
volatile uint16_t x258 = 6U;
int64_t x259 = -1LL;
uint64_t x276 = 1632611474LLU;
int32_t x284 = -15;
int32_t t62 = -178;
static volatile int32_t t65 = 127522;
volatile uint64_t x297 = 122493590172913LLU;
uint16_t x298 = 0U;
static volatile int64_t t67 = -59876618668844408LL;
uint8_t x311 = UINT8_MAX;
int16_t x312 = -1;
volatile int32_t t68 = -11918872;
static volatile uint16_t x319 = 20819U;
int64_t x324 = INT64_MIN;
int32_t x328 = -1;
uint64_t x329 = 82762448260630LLU;
int32_t x331 = -1;
int16_t x338 = -1;
int32_t t75 = 78829;
uint16_t x343 = UINT16_MAX;
uint32_t t76 = 7232U;
int64_t x345 = INT64_MIN;
volatile int8_t x358 = INT8_MAX;
int16_t x366 = -10;
static volatile uint8_t x373 = 3U;
volatile int64_t x376 = INT64_MAX;
uint64_t x381 = 15826566332597LLU;
volatile uint32_t x391 = 7727U;
static int16_t x392 = 907;
volatile uint16_t x394 = UINT16_MAX;
static int8_t x395 = INT8_MIN;
int64_t x400 = INT64_MIN;
uint32_t x410 = UINT32_MAX;
int8_t x416 = 60;
int64_t x417 = INT64_MAX;
static int8_t x420 = INT8_MIN;
int32_t t94 = -202;
static uint64_t x423 = UINT64_MAX;
static int16_t x430 = INT16_MIN;
uint64_t x431 = 1003887309841263LLU;
int16_t x435 = 252;
uint8_t x438 = UINT8_MAX;
uint64_t x439 = UINT64_MAX;
int32_t x443 = INT32_MAX;
volatile int8_t x448 = -1;
volatile int16_t x450 = INT16_MIN;
int32_t x452 = INT32_MIN;
uint16_t x453 = UINT16_MAX;
volatile int32_t x456 = -22368517;
uint16_t x464 = 1712U;
uint32_t x469 = 4465701U;
volatile uint32_t x482 = 4026U;
int32_t x484 = -538143;
int64_t x485 = -1LL;
static int64_t t111 = 1948LL;
volatile int64_t t113 = 1725013LL;
volatile int16_t x498 = -2;
static int32_t t114 = 26382;
int32_t x503 = -1;
volatile int64_t t115 = 6LL;
int32_t x508 = INT32_MIN;
uint64_t t117 = 10LLU;
int8_t x515 = INT8_MAX;
static uint32_t x517 = UINT32_MAX;
int16_t x525 = 0;
int16_t x527 = -1;
volatile uint32_t t121 = 8140U;
int64_t x531 = INT64_MIN;
uint32_t x534 = UINT32_MAX;
volatile int32_t t123 = 270;
volatile int32_t x545 = INT32_MIN;
int16_t x555 = INT16_MAX;
static int32_t x557 = INT32_MIN;
uint64_t x560 = 25984450260010LLU;
int16_t x564 = 1;
int64_t x569 = INT64_MIN;
int16_t x576 = INT16_MAX;
static int32_t t133 = -2928;
int32_t x577 = -1;
int32_t x579 = -1;
static int16_t x580 = INT16_MAX;
int8_t x584 = -1;
uint32_t x587 = UINT32_MAX;
volatile int32_t t136 = 400;
uint8_t x590 = 17U;
int8_t x591 = INT8_MIN;
static volatile int64_t t137 = -1LL;
uint8_t x602 = UINT8_MAX;
uint64_t x603 = UINT64_MAX;
uint8_t x604 = 63U;
int64_t x616 = INT64_MIN;
int8_t x625 = 0;
int32_t x626 = -1;
int32_t x631 = 31;
static int8_t x632 = -18;
int16_t x635 = INT16_MIN;
static int16_t x637 = INT16_MAX;
static int32_t t149 = 1;
volatile int8_t x642 = -33;
static volatile int32_t t150 = 108083;
uint64_t x645 = UINT64_MAX;
uint8_t x654 = 21U;
int8_t x657 = INT8_MIN;
int32_t x661 = 21;
uint64_t x665 = UINT64_MAX;
int8_t x682 = 46;
int64_t x683 = INT64_MIN;
volatile int16_t x684 = INT16_MAX;
int32_t x688 = 80375;
int32_t x689 = 404464228;
int16_t x697 = -1;
volatile int8_t x703 = -1;
int16_t x719 = INT16_MIN;
int32_t t169 = 333;
int16_t x722 = -1;
int8_t x727 = INT8_MIN;
uint64_t x728 = 67LLU;
uint64_t x732 = 502LLU;
uint64_t t172 = 19LLU;
int8_t x742 = -1;
uint16_t x756 = UINT16_MAX;
int32_t t177 = 1;
static int64_t x763 = -1LL;
static uint64_t x775 = UINT64_MAX;
volatile int32_t t180 = 786183127;
int16_t x792 = INT16_MIN;
uint64_t x793 = 300LLU;
int8_t x799 = INT8_MAX;
static int32_t x800 = -1;
uint16_t x804 = UINT16_MAX;
int8_t x810 = 0;
int64_t x811 = INT64_MIN;
int32_t t187 = -43;
int16_t x817 = 3;
uint64_t x818 = UINT64_MAX;
static uint32_t x819 = UINT32_MAX;
uint64_t x822 = UINT64_MAX;
static volatile int32_t x824 = INT32_MIN;
int16_t x825 = -399;
static uint8_t x827 = 7U;
int16_t x828 = INT16_MIN;
int8_t x835 = 11;
int32_t x836 = INT32_MIN;
volatile int32_t t194 = -3519;
volatile uint8_t x842 = UINT8_MAX;
volatile int32_t t195 = 444588;
int64_t x847 = INT64_MIN;
volatile int16_t x849 = INT16_MIN;
volatile int32_t t197 = 441633;
int8_t x855 = -1;


void f0(void) {
    	int32_t x1 = INT32_MIN;
	int16_t x2 = 3;
	uint16_t x3 = 6U;

    t0 = ((x1<=(x2/x3))%x4);

    if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x5 = INT16_MIN;
	uint16_t x6 = 192U;
	volatile uint8_t x7 = 22U;
	int8_t x8 = INT8_MIN;
	volatile int32_t t1 = -4981282;

    t1 = ((x5<=(x6/x7))%x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint16_t x9 = 18016U;
	volatile uint64_t x10 = UINT64_MAX;
	static volatile uint16_t x11 = 2306U;
	static int16_t x12 = -4;

    t2 = ((x9<=(x10/x11))%x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint16_t x13 = 2446U;
	int8_t x14 = 3;
	int8_t x15 = -1;
	static int8_t x16 = INT8_MAX;
	volatile int32_t t3 = -7960;

    t3 = ((x13<=(x14/x15))%x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x18 = INT16_MIN;
	volatile int8_t x19 = INT8_MIN;
	uint64_t x20 = 2367382512124LLU;
	volatile uint64_t t4 = 113948235751251LLU;

    t4 = ((x17<=(x18/x19))%x20);

    if (t4 != 1LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x21 = 397988534LL;
	uint64_t x22 = UINT64_MAX;
	int16_t x23 = 1747;
	static int8_t x24 = -19;

    t5 = ((x21<=(x22/x23))%x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = -1;
	static int16_t x26 = -7;
	int8_t x27 = INT8_MIN;
	volatile int64_t x28 = -134LL;
	static int64_t t6 = 268694696255964830LL;

    t6 = ((x25<=(x26/x27))%x28);

    if (t6 != 1LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint64_t x29 = 0LLU;
	uint8_t x30 = 62U;
	uint8_t x31 = UINT8_MAX;
	uint8_t x32 = UINT8_MAX;

    t7 = ((x29<=(x30/x31))%x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = -3;
	int8_t x34 = -1;
	uint64_t x35 = 583262LLU;
	uint8_t x36 = UINT8_MAX;
	static volatile int32_t t8 = -204616;

    t8 = ((x33<=(x34/x35))%x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x38 = INT16_MIN;
	volatile int8_t x39 = INT8_MIN;
	static int16_t x40 = INT16_MIN;
	volatile int32_t t9 = 1002;

    t9 = ((x37<=(x38/x39))%x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MIN;
	int32_t x42 = 53;
	uint16_t x43 = UINT16_MAX;
	int32_t x44 = INT32_MIN;
	int32_t t10 = -1;

    t10 = ((x41<=(x42/x43))%x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x46 = INT8_MIN;
	int16_t x48 = INT16_MIN;
	int32_t t11 = 6;

    t11 = ((x45<=(x46/x47))%x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x50 = -151LL;
	volatile int8_t x52 = INT8_MAX;

    t12 = ((x49<=(x50/x51))%x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile uint8_t x53 = 20U;
	static volatile uint64_t x55 = 3974960182091075827LLU;
	int32_t x56 = INT32_MAX;
	int32_t t13 = -32;

    t13 = ((x53<=(x54/x55))%x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = INT64_MIN;
	int16_t x58 = INT16_MIN;
	uint64_t x59 = 130041622LLU;
	uint8_t x60 = 42U;
	int32_t t14 = 9316;

    t14 = ((x57<=(x58/x59))%x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x65 = -31;
	uint64_t x66 = 102040887681846784LLU;
	uint16_t x67 = 10U;
	uint16_t x68 = 109U;
	volatile int32_t t15 = 15091;

    t15 = ((x65<=(x66/x67))%x68);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x69 = INT32_MIN;
	static int16_t x71 = 625;
	volatile int32_t t16 = 9;

    t16 = ((x69<=(x70/x71))%x72);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x73 = -318;
	int64_t x75 = INT64_MIN;
	int32_t x76 = -1;
	volatile int32_t t17 = 4;

    t17 = ((x73<=(x74/x75))%x76);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x77 = -1;
	int16_t x80 = INT16_MAX;
	static volatile int32_t t18 = -1312;

    t18 = ((x77<=(x78/x79))%x80);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x81 = -1;
	static volatile uint16_t x82 = 0U;
	uint32_t x83 = 1416U;
	uint64_t x84 = 3062LLU;
	uint64_t t19 = 199494807902LLU;

    t19 = ((x81<=(x82/x83))%x84);

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x85 = 1U;
	static volatile uint8_t x86 = 8U;
	int16_t x87 = INT16_MIN;
	static int8_t x88 = -55;
	volatile int32_t t20 = -3172;

    t20 = ((x85<=(x86/x87))%x88);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x89 = INT8_MAX;
	uint32_t x90 = 103844U;
	volatile int16_t x91 = -1;
	int16_t x92 = INT16_MAX;
	int32_t t21 = 404589;

    t21 = ((x89<=(x90/x91))%x92);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x93 = -28LL;
	static uint32_t x94 = 54317U;
	int16_t x95 = INT16_MAX;
	int8_t x96 = INT8_MIN;

    t22 = ((x93<=(x94/x95))%x96);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x97 = 3U;
	int32_t x98 = INT32_MIN;
	static int32_t x99 = -21;
	uint32_t x100 = UINT32_MAX;
	static uint32_t t23 = 80210336U;

    t23 = ((x97<=(x98/x99))%x100);

    if (t23 != 1U) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x105 = INT64_MIN;
	uint16_t x106 = 6963U;
	volatile uint64_t x108 = 2849962876LLU;
	static volatile uint64_t t24 = 9034LLU;

    t24 = ((x105<=(x106/x107))%x108);

    if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint8_t x109 = 0U;
	int8_t x110 = -1;
	static int32_t x111 = 20064794;
	int8_t x112 = INT8_MIN;

    t25 = ((x109<=(x110/x111))%x112);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x114 = 1;
	int32_t x116 = -1;
	static volatile int32_t t26 = -13360;

    t26 = ((x113<=(x114/x115))%x116);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x117 = UINT16_MAX;
	uint64_t x118 = 83570449834078210LLU;
	int8_t x119 = INT8_MIN;
	uint64_t x120 = UINT64_MAX;
	static uint64_t t27 = 8549825122LLU;

    t27 = ((x117<=(x118/x119))%x120);

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x121 = -5;
	static uint64_t x122 = 163497259083008LLU;
	uint16_t x124 = UINT16_MAX;
	volatile int32_t t28 = 69750;

    t28 = ((x121<=(x122/x123))%x124);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x125 = -924991481;
	uint8_t x126 = 7U;
	int16_t x127 = INT16_MAX;
	volatile int16_t x128 = INT16_MIN;
	volatile int32_t t29 = -27298;

    t29 = ((x125<=(x126/x127))%x128);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x130 = 3;
	uint32_t x131 = 1U;
	static int8_t x132 = INT8_MIN;
	volatile int32_t t30 = -5;

    t30 = ((x129<=(x130/x131))%x132);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x133 = 14U;
	uint8_t x134 = 1U;
	int32_t x135 = INT32_MIN;
	static int16_t x136 = INT16_MIN;
	int32_t t31 = -16;

    t31 = ((x133<=(x134/x135))%x136);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x137 = INT8_MAX;
	volatile int64_t x138 = -1LL;
	int32_t x139 = INT32_MIN;
	int32_t x140 = -1;
	volatile int32_t t32 = 19604;

    t32 = ((x137<=(x138/x139))%x140);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x141 = INT64_MIN;
	int16_t x142 = INT16_MIN;
	int64_t x143 = INT64_MIN;
	int16_t x144 = INT16_MIN;

    t33 = ((x141<=(x142/x143))%x144);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x146 = UINT8_MAX;
	int8_t x147 = INT8_MIN;

    t34 = ((x145<=(x146/x147))%x148);

    if (t34 != 1U) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x149 = INT64_MIN;
	uint16_t x150 = UINT16_MAX;
	int8_t x151 = INT8_MAX;
	int64_t x152 = INT64_MIN;

    t35 = ((x149<=(x150/x151))%x152);

    if (t35 != 1LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x153 = UINT64_MAX;
	uint16_t x155 = 136U;
	static volatile int16_t x156 = -1738;
	volatile int32_t t36 = 2;

    t36 = ((x153<=(x154/x155))%x156);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x157 = INT32_MAX;
	int8_t x160 = INT8_MAX;
	volatile int32_t t37 = -1278415;

    t37 = ((x157<=(x158/x159))%x160);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x161 = UINT32_MAX;
	int64_t x163 = INT64_MIN;
	static volatile uint64_t x164 = UINT64_MAX;
	static uint64_t t38 = 2298652394352862740LLU;

    t38 = ((x161<=(x162/x163))%x164);

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x165 = -1;
	static int64_t x166 = INT64_MAX;
	static volatile uint32_t x168 = UINT32_MAX;

    t39 = ((x165<=(x166/x167))%x168);

    if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x173 = 60805LL;
	int16_t x174 = INT16_MIN;
	uint32_t x176 = 324733802U;
	uint32_t t40 = 12790733U;

    t40 = ((x173<=(x174/x175))%x176);

    if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x177 = INT32_MIN;
	int64_t x178 = -1LL;
	int8_t x179 = -1;
	int8_t x180 = 1;
	int32_t t41 = -227801;

    t41 = ((x177<=(x178/x179))%x180);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint16_t x181 = 3U;
	uint32_t x182 = UINT32_MAX;
	uint16_t x183 = 6241U;
	uint64_t x184 = 2564LLU;
	volatile uint64_t t42 = 0LLU;

    t42 = ((x181<=(x182/x183))%x184);

    if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x189 = -2095285;
	uint32_t x190 = UINT32_MAX;
	volatile uint8_t x191 = 9U;
	static int16_t x192 = INT16_MAX;
	int32_t t43 = 14308796;

    t43 = ((x189<=(x190/x191))%x192);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x193 = 3;
	volatile uint64_t x194 = UINT64_MAX;
	uint8_t x195 = 1U;
	int16_t x196 = 2;
	int32_t t44 = 3233;

    t44 = ((x193<=(x194/x195))%x196);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x197 = 3595U;
	uint16_t x200 = 30U;
	int32_t t45 = -69664;

    t45 = ((x197<=(x198/x199))%x200);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x201 = UINT16_MAX;
	volatile int32_t x202 = INT32_MIN;
	int8_t x204 = -1;
	volatile int32_t t46 = -2;

    t46 = ((x201<=(x202/x203))%x204);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x209 = INT32_MAX;
	static int8_t x210 = INT8_MIN;
	volatile int32_t x211 = INT32_MIN;
	static uint64_t x212 = 43561171959LLU;

    t47 = ((x209<=(x210/x211))%x212);

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x213 = 56;
	static int8_t x215 = -11;
	int64_t x216 = INT64_MAX;

    t48 = ((x213<=(x214/x215))%x216);

    if (t48 != 1LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint8_t x218 = 23U;
	static uint16_t x219 = 73U;
	uint64_t x220 = UINT64_MAX;
	volatile uint64_t t49 = 21572080289656LLU;

    t49 = ((x217<=(x218/x219))%x220);

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x221 = INT16_MIN;
	uint8_t x224 = 1U;
	static int32_t t50 = 1;

    t50 = ((x221<=(x222/x223))%x224);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x225 = 1U;
	int8_t x226 = INT8_MIN;
	int32_t x227 = INT32_MIN;
	uint64_t x228 = 49850776481LLU;
	volatile uint64_t t51 = 1000596198095LLU;

    t51 = ((x225<=(x226/x227))%x228);

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x234 = INT8_MIN;
	int64_t x235 = INT64_MIN;
	int64_t x236 = -1LL;
	int64_t t52 = -608997420807LL;

    t52 = ((x233<=(x234/x235))%x236);

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x237 = UINT32_MAX;
	int32_t x239 = 20124450;
	volatile int64_t t53 = 1870836263LL;

    t53 = ((x237<=(x238/x239))%x240);

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x241 = INT32_MIN;
	int64_t x242 = INT64_MIN;
	int8_t x244 = INT8_MIN;
	int32_t t54 = -235819959;

    t54 = ((x241<=(x242/x243))%x244);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x245 = INT64_MIN;
	int64_t x246 = INT64_MIN;
	volatile int8_t x248 = INT8_MIN;
	volatile int32_t t55 = 2671123;

    t55 = ((x245<=(x246/x247))%x248);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x250 = 1177755LLU;
	uint16_t x251 = 2U;
	volatile uint32_t x252 = 113U;
	uint32_t t56 = 2U;

    t56 = ((x249<=(x250/x251))%x252);

    if (t56 != 1U) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x253 = INT32_MAX;
	static int64_t x254 = -6071956659LL;
	volatile int8_t x255 = INT8_MAX;
	int64_t t57 = -1041484349433LL;

    t57 = ((x253<=(x254/x255))%x256);

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x257 = -1;
	uint32_t x260 = UINT32_MAX;
	static uint32_t t58 = 43169U;

    t58 = ((x257<=(x258/x259))%x260);

    if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x261 = -1;
	static int32_t x262 = -1;
	uint32_t x263 = UINT32_MAX;
	int8_t x264 = -1;
	volatile int32_t t59 = 128789;

    t59 = ((x261<=(x262/x263))%x264);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x273 = INT16_MAX;
	int64_t x274 = -1LL;
	volatile int16_t x275 = -1;
	volatile uint64_t t60 = 720048508119573LLU;

    t60 = ((x273<=(x274/x275))%x276);

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x277 = 511941555264705LLU;
	int16_t x278 = -279;
	static volatile int32_t x279 = 17005;
	int64_t x280 = INT64_MAX;
	static int64_t t61 = 49LL;

    t61 = ((x277<=(x278/x279))%x280);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x281 = 2U;
	uint64_t x282 = 3410LLU;
	static int32_t x283 = -22486;

    t62 = ((x281<=(x282/x283))%x284);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x285 = 1348;
	int16_t x286 = -1;
	static int64_t x287 = INT64_MAX;
	int16_t x288 = -1;
	static volatile int32_t t63 = 13059897;

    t63 = ((x285<=(x286/x287))%x288);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile uint8_t x289 = 3U;
	int16_t x290 = INT16_MIN;
	uint16_t x291 = 25U;
	int32_t x292 = 5669;
	int32_t t64 = -1516;

    t64 = ((x289<=(x290/x291))%x292);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x293 = -37;
	uint32_t x294 = 1371334U;
	static volatile int16_t x295 = INT16_MAX;
	uint16_t x296 = UINT16_MAX;

    t65 = ((x293<=(x294/x295))%x296);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x299 = INT32_MIN;
	volatile int8_t x300 = INT8_MIN;
	volatile int32_t t66 = -7234;

    t66 = ((x297<=(x298/x299))%x300);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint16_t x305 = 69U;
	uint32_t x306 = UINT32_MAX;
	volatile int64_t x307 = -1LL;
	int64_t x308 = INT64_MAX;

    t67 = ((x305<=(x306/x307))%x308);

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x309 = 6902;
	int8_t x310 = INT8_MAX;

    t68 = ((x309<=(x310/x311))%x312);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x313 = -1;
	volatile int64_t x314 = INT64_MIN;
	volatile int16_t x315 = INT16_MIN;
	int16_t x316 = INT16_MIN;
	int32_t t69 = -227369;

    t69 = ((x313<=(x314/x315))%x316);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x317 = 2766331237189LLU;
	int16_t x318 = 2;
	static int64_t x320 = -1LL;
	static int64_t t70 = 6780659LL;

    t70 = ((x317<=(x318/x319))%x320);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x321 = 21915667283010269LLU;
	int64_t x322 = -1LL;
	int32_t x323 = -90937;
	volatile int64_t t71 = 749LL;

    t71 = ((x321<=(x322/x323))%x324);

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x325 = -1;
	volatile int16_t x326 = INT16_MIN;
	int16_t x327 = INT16_MAX;
	static int32_t t72 = 17536;

    t72 = ((x325<=(x326/x327))%x328);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x330 = -1;
	int16_t x332 = INT16_MAX;
	volatile int32_t t73 = -2;

    t73 = ((x329<=(x330/x331))%x332);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x333 = 1880U;
	static volatile uint8_t x334 = 20U;
	uint8_t x335 = UINT8_MAX;
	int32_t x336 = -1;
	int32_t t74 = -3156762;

    t74 = ((x333<=(x334/x335))%x336);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x337 = INT64_MAX;
	int32_t x339 = 1481;
	volatile int32_t x340 = -1;

    t75 = ((x337<=(x338/x339))%x340);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x341 = -1;
	volatile int32_t x342 = -1096;
	uint32_t x344 = UINT32_MAX;

    t76 = ((x341<=(x342/x343))%x344);

    if (t76 != 1U) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x346 = 0;
	int16_t x347 = -1;
	uint16_t x348 = 797U;
	volatile int32_t t77 = 9;

    t77 = ((x345<=(x346/x347))%x348);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint64_t x353 = 156584221LLU;
	volatile uint16_t x354 = 396U;
	int16_t x355 = INT16_MIN;
	int32_t x356 = 88698375;
	static int32_t t78 = 218;

    t78 = ((x353<=(x354/x355))%x356);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x357 = INT16_MIN;
	uint16_t x359 = UINT16_MAX;
	int64_t x360 = INT64_MIN;
	volatile int64_t t79 = 884858LL;

    t79 = ((x357<=(x358/x359))%x360);

    if (t79 != 1LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x361 = 1;
	volatile int16_t x362 = 3;
	static volatile int32_t x363 = INT32_MIN;
	int64_t x364 = 8305675893882LL;
	volatile int64_t t80 = -41LL;

    t80 = ((x361<=(x362/x363))%x364);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint16_t x365 = UINT16_MAX;
	int64_t x367 = INT64_MIN;
	int32_t x368 = -63487;
	int32_t t81 = -290710;

    t81 = ((x365<=(x366/x367))%x368);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x369 = 2LL;
	uint8_t x370 = UINT8_MAX;
	uint8_t x371 = UINT8_MAX;
	static volatile int64_t x372 = 65986422292101LL;
	static volatile int64_t t82 = -20576115014750338LL;

    t82 = ((x369<=(x370/x371))%x372);

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x374 = INT8_MIN;
	volatile int32_t x375 = -35437327;
	volatile int64_t t83 = 106438928315432LL;

    t83 = ((x373<=(x374/x375))%x376);

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x377 = 8241365999471929LLU;
	int8_t x378 = INT8_MAX;
	int16_t x379 = INT16_MIN;
	int16_t x380 = INT16_MIN;
	volatile int32_t t84 = 1561;

    t84 = ((x377<=(x378/x379))%x380);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x382 = 1;
	uint64_t x383 = 1LLU;
	uint16_t x384 = 52U;
	volatile int32_t t85 = -4;

    t85 = ((x381<=(x382/x383))%x384);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint64_t x385 = 67416386282573716LLU;
	static int16_t x386 = 1;
	volatile uint16_t x387 = 68U;
	int64_t x388 = INT64_MAX;
	volatile int64_t t86 = -49059346LL;

    t86 = ((x385<=(x386/x387))%x388);

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint32_t x389 = UINT32_MAX;
	static volatile int64_t x390 = -1153780LL;
	int32_t t87 = 74218020;

    t87 = ((x389<=(x390/x391))%x392);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x393 = 3956;
	int8_t x396 = -56;
	static volatile int32_t t88 = -59970409;

    t88 = ((x393<=(x394/x395))%x396);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint32_t x397 = UINT32_MAX;
	int16_t x398 = 2972;
	volatile int16_t x399 = 1;
	volatile int64_t t89 = 3536932897087756LL;

    t89 = ((x397<=(x398/x399))%x400);

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x401 = UINT32_MAX;
	volatile uint8_t x402 = UINT8_MAX;
	static int16_t x403 = -1;
	int32_t x404 = INT32_MIN;
	int32_t t90 = -29;

    t90 = ((x401<=(x402/x403))%x404);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x405 = 1;
	uint64_t x406 = 264812968134438LLU;
	static volatile int8_t x407 = -12;
	uint16_t x408 = 1U;
	int32_t t91 = -63306222;

    t91 = ((x405<=(x406/x407))%x408);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x409 = INT64_MAX;
	volatile int8_t x411 = -1;
	volatile int32_t x412 = 1;
	int32_t t92 = 4;

    t92 = ((x409<=(x410/x411))%x412);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x413 = 3735435767631LLU;
	int8_t x414 = -1;
	static volatile int16_t x415 = INT16_MIN;
	static int32_t t93 = 0;

    t93 = ((x413<=(x414/x415))%x416);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x418 = INT16_MAX;
	volatile uint32_t x419 = UINT32_MAX;

    t94 = ((x417<=(x418/x419))%x420);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x421 = -130043044;
	int8_t x422 = INT8_MAX;
	int32_t x424 = INT32_MIN;
	volatile int32_t t95 = -7117287;

    t95 = ((x421<=(x422/x423))%x424);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint64_t x425 = 713405038974799786LLU;
	static int16_t x426 = INT16_MAX;
	uint32_t x427 = UINT32_MAX;
	int64_t x428 = -725259867780292040LL;
	volatile int64_t t96 = 7541LL;

    t96 = ((x425<=(x426/x427))%x428);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x429 = INT64_MIN;
	volatile uint32_t x432 = UINT32_MAX;
	volatile uint32_t t97 = 7093588U;

    t97 = ((x429<=(x430/x431))%x432);

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x433 = 669;
	static int32_t x434 = INT32_MIN;
	static int16_t x436 = -35;
	volatile int32_t t98 = 134;

    t98 = ((x433<=(x434/x435))%x436);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x437 = 0U;
	static int16_t x440 = INT16_MAX;
	volatile int32_t t99 = -992719743;

    t99 = ((x437<=(x438/x439))%x440);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x441 = INT8_MIN;
	uint32_t x442 = 2402U;
	volatile int64_t x444 = INT64_MIN;
	int64_t t100 = 3420505509558022LL;

    t100 = ((x441<=(x442/x443))%x444);

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x445 = -4921222LL;
	int64_t x446 = 4397LL;
	int32_t x447 = INT32_MIN;
	int32_t t101 = 1435;

    t101 = ((x445<=(x446/x447))%x448);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x449 = INT16_MIN;
	int64_t x451 = INT64_MIN;
	volatile int32_t t102 = 92697;

    t102 = ((x449<=(x450/x451))%x452);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x454 = INT64_MIN;
	uint32_t x455 = 118225U;
	volatile int32_t t103 = -834;

    t103 = ((x453<=(x454/x455))%x456);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x457 = UINT32_MAX;
	int64_t x458 = -1LL;
	volatile int32_t x459 = 263805312;
	int64_t x460 = INT64_MIN;
	static volatile int64_t t104 = 232768822LL;

    t104 = ((x457<=(x458/x459))%x460);

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x461 = -1;
	int16_t x462 = INT16_MIN;
	int64_t x463 = INT64_MAX;
	volatile int32_t t105 = -176217;

    t105 = ((x461<=(x462/x463))%x464);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x465 = 16560U;
	static int64_t x466 = INT64_MIN;
	uint8_t x467 = UINT8_MAX;
	uint16_t x468 = UINT16_MAX;
	int32_t t106 = 13;

    t106 = ((x465<=(x466/x467))%x468);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x470 = 44LL;
	int64_t x471 = INT64_MIN;
	int16_t x472 = -1;
	static volatile int32_t t107 = 3731;

    t107 = ((x469<=(x470/x471))%x472);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint16_t x473 = 3U;
	uint16_t x474 = 9443U;
	int32_t x475 = -1;
	int64_t x476 = INT64_MIN;
	volatile int64_t t108 = -1LL;

    t108 = ((x473<=(x474/x475))%x476);

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x477 = 49343312U;
	uint16_t x478 = 23018U;
	uint16_t x479 = 252U;
	uint16_t x480 = 124U;
	static volatile int32_t t109 = 3353207;

    t109 = ((x477<=(x478/x479))%x480);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x481 = -1;
	static int16_t x483 = INT16_MIN;
	volatile int32_t t110 = 122;

    t110 = ((x481<=(x482/x483))%x484);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x486 = 252722766847281LL;
	static int32_t x487 = -1;
	int64_t x488 = -1LL;

    t111 = ((x485<=(x486/x487))%x488);

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x489 = INT32_MIN;
	static int16_t x490 = INT16_MIN;
	uint16_t x491 = UINT16_MAX;
	int64_t x492 = -1817191030490458LL;
	int64_t t112 = -903LL;

    t112 = ((x489<=(x490/x491))%x492);

    if (t112 != 1LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x493 = -1LL;
	uint16_t x494 = 103U;
	int16_t x495 = INT16_MAX;
	volatile int64_t x496 = -3412802763981250LL;

    t113 = ((x493<=(x494/x495))%x496);

    if (t113 != 1LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x497 = -1LL;
	uint32_t x499 = 308162002U;
	int16_t x500 = INT16_MIN;

    t114 = ((x497<=(x498/x499))%x500);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x501 = INT32_MAX;
	volatile int64_t x502 = -1LL;
	int64_t x504 = -1LL;

    t115 = ((x501<=(x502/x503))%x504);

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x505 = -1;
	int64_t x506 = INT64_MAX;
	int32_t x507 = INT32_MAX;
	static int32_t t116 = 169;

    t116 = ((x505<=(x506/x507))%x508);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x509 = 85579643621LLU;
	volatile uint64_t x510 = 80LLU;
	volatile int16_t x511 = INT16_MIN;
	uint64_t x512 = 4667LLU;

    t117 = ((x509<=(x510/x511))%x512);

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x513 = INT16_MIN;
	int16_t x514 = -153;
	static uint16_t x516 = UINT16_MAX;
	int32_t t118 = 129573949;

    t118 = ((x513<=(x514/x515))%x516);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint8_t x518 = UINT8_MAX;
	volatile int16_t x519 = INT16_MIN;
	int32_t x520 = 289696;
	volatile int32_t t119 = -287750874;

    t119 = ((x517<=(x518/x519))%x520);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x521 = -1;
	int64_t x522 = 1749869504LL;
	uint8_t x523 = UINT8_MAX;
	static int64_t x524 = INT64_MIN;
	int64_t t120 = 47005199126610LL;

    t120 = ((x521<=(x522/x523))%x524);

    if (t120 != 1LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint16_t x526 = UINT16_MAX;
	uint32_t x528 = 1089544U;

    t121 = ((x525<=(x526/x527))%x528);

    if (t121 != 0U) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x529 = -1;
	volatile int32_t x530 = INT32_MIN;
	int32_t x532 = -29481554;
	volatile int32_t t122 = 3837;

    t122 = ((x529<=(x530/x531))%x532);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x533 = INT32_MIN;
	static uint8_t x535 = UINT8_MAX;
	uint16_t x536 = 72U;

    t123 = ((x533<=(x534/x535))%x536);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int32_t x537 = INT32_MAX;
	int64_t x538 = 502047806LL;
	uint32_t x539 = 1U;
	volatile int16_t x540 = -10;
	int32_t t124 = -4852000;

    t124 = ((x537<=(x538/x539))%x540);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint32_t x541 = UINT32_MAX;
	int16_t x542 = 4;
	int8_t x543 = -1;
	static uint16_t x544 = 3497U;
	int32_t t125 = 1876890;

    t125 = ((x541<=(x542/x543))%x544);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x546 = -1LL;
	uint8_t x547 = UINT8_MAX;
	static volatile int8_t x548 = INT8_MIN;
	static volatile int32_t t126 = 0;

    t126 = ((x545<=(x546/x547))%x548);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x549 = -1;
	int32_t x550 = INT32_MAX;
	int16_t x551 = INT16_MIN;
	int16_t x552 = INT16_MIN;
	volatile int32_t t127 = 2848180;

    t127 = ((x549<=(x550/x551))%x552);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x553 = 4480;
	static uint8_t x554 = 123U;
	uint16_t x556 = 929U;
	int32_t t128 = -103239;

    t128 = ((x553<=(x554/x555))%x556);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x558 = -1LL;
	uint64_t x559 = UINT64_MAX;
	uint64_t t129 = 246LLU;

    t129 = ((x557<=(x558/x559))%x560);

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x561 = INT16_MIN;
	int32_t x562 = -1;
	uint8_t x563 = 6U;
	volatile int32_t t130 = -3360117;

    t130 = ((x561<=(x562/x563))%x564);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x565 = 14;
	int16_t x566 = 26;
	static int64_t x567 = 124046199LL;
	int16_t x568 = INT16_MIN;
	volatile int32_t t131 = -917096;

    t131 = ((x565<=(x566/x567))%x568);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint8_t x570 = 43U;
	volatile int16_t x571 = -1;
	int8_t x572 = -52;
	static int32_t t132 = -43656858;

    t132 = ((x569<=(x570/x571))%x572);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x573 = INT8_MAX;
	uint8_t x574 = 0U;
	int64_t x575 = INT64_MAX;

    t133 = ((x573<=(x574/x575))%x576);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x578 = INT8_MAX;
	volatile int32_t t134 = -4047;

    t134 = ((x577<=(x578/x579))%x580);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x581 = 0U;
	int16_t x582 = -734;
	static int8_t x583 = INT8_MIN;
	int32_t t135 = 32970;

    t135 = ((x581<=(x582/x583))%x584);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x585 = 28;
	int16_t x586 = INT16_MIN;
	uint16_t x588 = 1U;

    t136 = ((x585<=(x586/x587))%x588);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x589 = INT32_MIN;
	int64_t x592 = -14064137LL;

    t137 = ((x589<=(x590/x591))%x592);

    if (t137 != 1LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x593 = -1;
	int32_t x594 = INT32_MIN;
	int8_t x595 = INT8_MIN;
	uint8_t x596 = 1U;
	int32_t t138 = 12882;

    t138 = ((x593<=(x594/x595))%x596);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x597 = INT32_MIN;
	int32_t x598 = INT32_MAX;
	static int16_t x599 = 9;
	static volatile int32_t x600 = INT32_MIN;
	int32_t t139 = 1;

    t139 = ((x597<=(x598/x599))%x600);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x601 = INT8_MIN;
	volatile int32_t t140 = 11668798;

    t140 = ((x601<=(x602/x603))%x604);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int64_t x605 = INT64_MAX;
	static volatile int16_t x606 = INT16_MAX;
	static int32_t x607 = -1;
	static int16_t x608 = INT16_MAX;
	static volatile int32_t t141 = 2071069;

    t141 = ((x605<=(x606/x607))%x608);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x609 = INT64_MIN;
	static int16_t x610 = INT16_MIN;
	static int8_t x611 = 21;
	int64_t x612 = 1671LL;
	volatile int64_t t142 = -31223LL;

    t142 = ((x609<=(x610/x611))%x612);

    if (t142 != 1LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x613 = INT32_MAX;
	int8_t x614 = -3;
	static int16_t x615 = -1;
	int64_t t143 = 210507729132LL;

    t143 = ((x613<=(x614/x615))%x616);

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x617 = INT32_MAX;
	int8_t x618 = -3;
	volatile int32_t x619 = -238448;
	volatile uint8_t x620 = 6U;
	volatile int32_t t144 = 128945;

    t144 = ((x617<=(x618/x619))%x620);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x621 = 356655560418LL;
	int64_t x622 = 3515240167LL;
	volatile int16_t x623 = INT16_MIN;
	int8_t x624 = 7;
	static int32_t t145 = 2;

    t145 = ((x621<=(x622/x623))%x624);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int8_t x627 = INT8_MIN;
	volatile uint8_t x628 = UINT8_MAX;
	int32_t t146 = -1998;

    t146 = ((x625<=(x626/x627))%x628);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x629 = 1;
	int32_t x630 = 24344;
	int32_t t147 = 2;

    t147 = ((x629<=(x630/x631))%x632);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x633 = 218;
	static int32_t x634 = INT32_MIN;
	int16_t x636 = INT16_MIN;
	int32_t t148 = -3;

    t148 = ((x633<=(x634/x635))%x636);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x638 = 2428037500LLU;
	int32_t x639 = 1735535;
	uint8_t x640 = 5U;

    t149 = ((x637<=(x638/x639))%x640);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x641 = -1;
	uint64_t x643 = UINT64_MAX;
	volatile int8_t x644 = INT8_MIN;

    t150 = ((x641<=(x642/x643))%x644);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x646 = 1U;
	int64_t x647 = INT64_MIN;
	uint32_t x648 = UINT32_MAX;
	volatile uint32_t t151 = 4U;

    t151 = ((x645<=(x646/x647))%x648);

    if (t151 != 0U) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x649 = 23757U;
	static uint64_t x650 = 736372110333376911LLU;
	int64_t x651 = INT64_MAX;
	volatile uint16_t x652 = UINT16_MAX;
	int32_t t152 = 25949;

    t152 = ((x649<=(x650/x651))%x652);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x653 = -22;
	uint64_t x655 = 2783384325379075LLU;
	int32_t x656 = INT32_MAX;
	volatile int32_t t153 = 1;

    t153 = ((x653<=(x654/x655))%x656);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x658 = INT64_MIN;
	volatile uint64_t x659 = 59976242817061959LLU;
	int64_t x660 = 1LL;
	static volatile int64_t t154 = -44563LL;

    t154 = ((x657<=(x658/x659))%x660);

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint64_t x662 = UINT64_MAX;
	int32_t x663 = 297;
	uint8_t x664 = 1U;
	volatile int32_t t155 = 138480;

    t155 = ((x661<=(x662/x663))%x664);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint8_t x666 = UINT8_MAX;
	volatile int8_t x667 = INT8_MAX;
	volatile int8_t x668 = INT8_MIN;
	static int32_t t156 = -788598245;

    t156 = ((x665<=(x666/x667))%x668);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x669 = -1;
	static int8_t x670 = 3;
	static uint64_t x671 = 70683835479077127LLU;
	int8_t x672 = -5;
	int32_t t157 = -1;

    t157 = ((x669<=(x670/x671))%x672);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x673 = -31437610;
	static volatile int8_t x674 = -1;
	uint8_t x675 = 2U;
	volatile uint32_t x676 = 1447090321U;
	uint32_t t158 = 11345U;

    t158 = ((x673<=(x674/x675))%x676);

    if (t158 != 1U) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x677 = -7;
	uint64_t x678 = 1LLU;
	static volatile int32_t x679 = INT32_MIN;
	volatile int32_t x680 = -1704706;
	int32_t t159 = -80075296;

    t159 = ((x677<=(x678/x679))%x680);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int64_t x681 = 143873885748491770LL;
	volatile int32_t t160 = 10545;

    t160 = ((x681<=(x682/x683))%x684);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x685 = -515184;
	uint64_t x686 = UINT64_MAX;
	int8_t x687 = INT8_MIN;
	volatile int32_t t161 = 1000207;

    t161 = ((x685<=(x686/x687))%x688);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x690 = INT16_MIN;
	int32_t x691 = -1;
	int32_t x692 = INT32_MAX;
	volatile int32_t t162 = -252;

    t162 = ((x689<=(x690/x691))%x692);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x693 = INT64_MAX;
	uint32_t x694 = UINT32_MAX;
	uint32_t x695 = 675428U;
	int64_t x696 = INT64_MIN;
	int64_t t163 = -1712LL;

    t163 = ((x693<=(x694/x695))%x696);

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x698 = INT32_MIN;
	int32_t x699 = 850;
	int8_t x700 = INT8_MIN;
	static volatile int32_t t164 = -705750975;

    t164 = ((x697<=(x698/x699))%x700);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x701 = INT64_MAX;
	volatile uint8_t x702 = UINT8_MAX;
	int8_t x704 = INT8_MIN;
	static volatile int32_t t165 = 246148;

    t165 = ((x701<=(x702/x703))%x704);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x705 = INT64_MAX;
	uint64_t x706 = 2898188281504LLU;
	uint64_t x707 = 749904420LLU;
	static int16_t x708 = INT16_MAX;
	static int32_t t166 = 85563642;

    t166 = ((x705<=(x706/x707))%x708);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x709 = 1;
	int8_t x710 = -1;
	volatile int32_t x711 = INT32_MAX;
	static uint8_t x712 = UINT8_MAX;
	static volatile int32_t t167 = 0;

    t167 = ((x709<=(x710/x711))%x712);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x713 = 12725730;
	int8_t x714 = INT8_MIN;
	int32_t x715 = INT32_MIN;
	int64_t x716 = -1LL;
	volatile int64_t t168 = 4245544968390332311LL;

    t168 = ((x713<=(x714/x715))%x716);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x717 = -50403LL;
	uint16_t x718 = 7428U;
	volatile int8_t x720 = INT8_MIN;

    t169 = ((x717<=(x718/x719))%x720);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x721 = UINT16_MAX;
	int8_t x723 = -1;
	uint8_t x724 = 21U;
	volatile int32_t t170 = -140471766;

    t170 = ((x721<=(x722/x723))%x724);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x725 = INT32_MAX;
	uint32_t x726 = 53405U;
	volatile uint64_t t171 = 10396383856279LLU;

    t171 = ((x725<=(x726/x727))%x728);

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int32_t x729 = INT32_MAX;
	static int8_t x730 = -1;
	volatile uint64_t x731 = UINT64_MAX;

    t172 = ((x729<=(x730/x731))%x732);

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x733 = INT32_MAX;
	volatile int64_t x734 = -150954LL;
	uint16_t x735 = 49U;
	uint64_t x736 = 432927611338616576LLU;
	static uint64_t t173 = 1361011807973LLU;

    t173 = ((x733<=(x734/x735))%x736);

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x741 = INT64_MIN;
	int32_t x743 = -1;
	int16_t x744 = INT16_MIN;
	volatile int32_t t174 = 291;

    t174 = ((x741<=(x742/x743))%x744);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x745 = INT32_MIN;
	volatile uint16_t x746 = 1U;
	int16_t x747 = -9295;
	uint8_t x748 = 3U;
	volatile int32_t t175 = 53853;

    t175 = ((x745<=(x746/x747))%x748);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int8_t x749 = INT8_MIN;
	int16_t x750 = -2225;
	volatile int32_t x751 = -1;
	int64_t x752 = INT64_MIN;
	static volatile int64_t t176 = -5056LL;

    t176 = ((x749<=(x750/x751))%x752);

    if (t176 != 1LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int64_t x753 = -847882LL;
	volatile uint16_t x754 = UINT16_MAX;
	uint64_t x755 = UINT64_MAX;

    t177 = ((x753<=(x754/x755))%x756);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x761 = 0;
	uint32_t x762 = 724U;
	int8_t x764 = -15;
	int32_t t178 = -15790;

    t178 = ((x761<=(x762/x763))%x764);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x769 = INT8_MIN;
	int64_t x770 = INT64_MIN;
	uint64_t x771 = 7747957353918508LLU;
	uint32_t x772 = UINT32_MAX;
	volatile uint32_t t179 = 1412U;

    t179 = ((x769<=(x770/x771))%x772);

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x773 = -1LL;
	int32_t x774 = INT32_MAX;
	volatile int16_t x776 = 864;

    t180 = ((x773<=(x774/x775))%x776);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x777 = INT64_MIN;
	int16_t x778 = -1;
	volatile uint32_t x779 = 814U;
	int64_t x780 = -500982LL;
	volatile int64_t t181 = 36041882LL;

    t181 = ((x777<=(x778/x779))%x780);

    if (t181 != 1LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint64_t x789 = 224090104651LLU;
	int32_t x790 = -1;
	static int64_t x791 = -30605366009155LL;
	int32_t t182 = -51267;

    t182 = ((x789<=(x790/x791))%x792);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x794 = INT8_MIN;
	uint16_t x795 = 12U;
	int8_t x796 = INT8_MIN;
	int32_t t183 = -21843;

    t183 = ((x793<=(x794/x795))%x796);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x797 = -4574;
	uint8_t x798 = 10U;
	static volatile int32_t t184 = -54688;

    t184 = ((x797<=(x798/x799))%x800);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x801 = 9105626LLU;
	int64_t x802 = 1147LL;
	uint64_t x803 = UINT64_MAX;
	volatile int32_t t185 = 1;

    t185 = ((x801<=(x802/x803))%x804);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x805 = INT64_MIN;
	int32_t x806 = -102;
	uint8_t x807 = UINT8_MAX;
	volatile uint64_t x808 = 14LLU;
	volatile uint64_t t186 = 3028563585LLU;

    t186 = ((x805<=(x806/x807))%x808);

    if (t186 != 1LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint16_t x809 = 3U;
	int16_t x812 = INT16_MAX;

    t187 = ((x809<=(x810/x811))%x812);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x813 = INT32_MIN;
	static volatile uint8_t x814 = 3U;
	int32_t x815 = 266800296;
	static int32_t x816 = INT32_MIN;
	int32_t t188 = -292389869;

    t188 = ((x813<=(x814/x815))%x816);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x820 = 220389183523LLU;
	volatile uint64_t t189 = 697042724360154LLU;

    t189 = ((x817<=(x818/x819))%x820);

    if (t189 != 1LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x821 = INT64_MIN;
	int16_t x823 = 3927;
	int32_t t190 = -81;

    t190 = ((x821<=(x822/x823))%x824);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x826 = INT32_MAX;
	volatile int32_t t191 = 1;

    t191 = ((x825<=(x826/x827))%x828);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x829 = UINT64_MAX;
	int8_t x830 = 6;
	uint16_t x831 = UINT16_MAX;
	static volatile int8_t x832 = -1;
	volatile int32_t t192 = -424422520;

    t192 = ((x829<=(x830/x831))%x832);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x833 = INT16_MIN;
	uint64_t x834 = 83403769919682LLU;
	int32_t t193 = 3770012;

    t193 = ((x833<=(x834/x835))%x836);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x837 = -1;
	static uint8_t x838 = 1U;
	uint32_t x839 = 1222U;
	volatile int8_t x840 = INT8_MIN;

    t194 = ((x837<=(x838/x839))%x840);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x841 = 156;
	int8_t x843 = -3;
	static int8_t x844 = INT8_MAX;

    t195 = ((x841<=(x842/x843))%x844);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x845 = -1;
	static int8_t x846 = -1;
	int32_t x848 = -1;
	int32_t t196 = 68;

    t196 = ((x845<=(x846/x847))%x848);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x850 = -1036490092;
	int16_t x851 = INT16_MIN;
	static volatile int16_t x852 = INT16_MAX;

    t197 = ((x849<=(x850/x851))%x852);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint64_t x853 = 4371226171347072LLU;
	int64_t x854 = 0LL;
	int8_t x856 = INT8_MIN;
	static int32_t t198 = 50493;

    t198 = ((x853<=(x854/x855))%x856);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x857 = INT16_MAX;
	int16_t x858 = INT16_MAX;
	static uint8_t x859 = 106U;
	int16_t x860 = -1;
	int32_t t199 = 5;

    t199 = ((x857<=(x858/x859))%x860);

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


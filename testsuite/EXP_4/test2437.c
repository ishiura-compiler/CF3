
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

int16_t x5 = INT16_MIN;
static int8_t x6 = INT8_MIN;
volatile int32_t x16 = INT32_MIN;
uint16_t x20 = UINT16_MAX;
uint8_t x21 = UINT8_MAX;
volatile int32_t t5 = -66195332;
volatile uint64_t x26 = UINT64_MAX;
static int8_t x27 = -1;
static int32_t x31 = -1;
int32_t t7 = 1553;
static volatile int32_t x38 = 1047741;
static volatile int16_t x45 = 14750;
static int32_t t10 = -15;
int16_t x54 = INT16_MAX;
static int8_t x63 = 1;
int32_t t14 = 101882;
int32_t x66 = 14;
volatile int16_t x67 = INT16_MAX;
int64_t x68 = -1LL;
volatile int16_t x70 = 1148;
uint8_t x71 = 0U;
volatile int64_t t16 = 5219771667LL;
int8_t x77 = INT8_MAX;
static volatile int32_t t18 = 1847;
static uint8_t x82 = UINT8_MAX;
int64_t x83 = -1LL;
static uint32_t x90 = 60387371U;
uint8_t x91 = 8U;
int32_t t22 = -659355037;
uint16_t x101 = UINT16_MAX;
volatile int16_t x109 = INT16_MIN;
static int64_t x123 = INT64_MIN;
int64_t x139 = -10355LL;
volatile int8_t x147 = INT8_MIN;
int16_t x149 = INT16_MAX;
int8_t x153 = INT8_MAX;
volatile uint8_t x154 = 27U;
int16_t x155 = 6;
static int64_t x168 = INT64_MAX;
static volatile int64_t t38 = -58LL;
uint8_t x171 = UINT8_MAX;
volatile int32_t t39 = 523;
int8_t x173 = -1;
int32_t t40 = -1189465;
volatile int32_t t41 = -15;
volatile uint32_t x181 = 1U;
uint64_t x183 = 5148005614LLU;
static uint32_t x184 = 45488U;
uint32_t x190 = 854346U;
int8_t x191 = -1;
uint16_t x194 = 4909U;
int32_t x199 = INT32_MIN;
uint32_t t47 = 1475979U;
static int16_t x206 = 1;
int16_t x207 = -1;
uint64_t x216 = 1203230640084003476LLU;
int32_t x219 = -14433370;
int32_t x221 = -75690670;
int64_t x222 = -24027234LL;
int32_t x234 = INT32_MAX;
volatile int32_t t54 = 23053612;
volatile int8_t x244 = INT8_MAX;
int64_t x246 = INT64_MIN;
volatile int32_t t60 = -51899;
static volatile int32_t t63 = 33274225;
volatile int64_t x275 = 491853708906835LL;
int8_t x290 = INT8_MIN;
static uint8_t x298 = UINT8_MAX;
static uint8_t x299 = 0U;
int16_t x303 = 25;
int32_t x304 = -13909;
uint32_t x314 = 619U;
uint64_t x315 = 29295017634197LLU;
volatile int64_t x327 = INT64_MIN;
int16_t x330 = INT16_MIN;
int32_t x331 = -69931;
static int8_t x334 = 0;
uint32_t x341 = 3420845U;
volatile uint32_t t79 = 6U;
int8_t x347 = -1;
int64_t t83 = -2LL;
volatile int32_t t85 = -41;
uint8_t x374 = 17U;
static int64_t x375 = INT64_MIN;
int16_t x378 = INT16_MIN;
volatile int64_t x380 = INT64_MIN;
volatile uint64_t t88 = 16699810303LLU;
volatile uint64_t x383 = 14924185369LLU;
int8_t x384 = -1;
uint16_t x392 = 20U;
int32_t x395 = 32212966;
int8_t x398 = INT8_MAX;
static int64_t x407 = INT64_MIN;
uint8_t x411 = UINT8_MAX;
int64_t x415 = INT64_MIN;
static int16_t x416 = INT16_MIN;
static volatile uint64_t t98 = 709724091905LLU;
static volatile uint16_t x431 = 7U;
static volatile uint64_t t100 = 8LLU;
static uint32_t x436 = UINT32_MAX;
static uint8_t x454 = UINT8_MAX;
int8_t x456 = INT8_MIN;
static int16_t x458 = INT16_MIN;
uint64_t x460 = UINT64_MAX;
static int16_t x466 = INT16_MAX;
int8_t x473 = INT8_MIN;
uint8_t x486 = UINT8_MAX;
int64_t x489 = 5041320068014995LL;
volatile int64_t t112 = -134595LL;
int16_t x497 = -1;
uint32_t x499 = UINT32_MAX;
static int64_t x527 = 14140LL;
int32_t x529 = INT32_MIN;
int16_t x533 = 0;
static int32_t x535 = INT32_MAX;
int16_t x541 = INT16_MIN;
volatile int32_t t124 = -91;
uint64_t x548 = 140371895678353LLU;
uint64_t x550 = UINT64_MAX;
int8_t x554 = INT8_MIN;
uint64_t x555 = 473563727LLU;
int32_t t127 = 353;
int8_t x558 = INT8_MAX;
int32_t t128 = 6;
uint32_t x566 = 751U;
static uint8_t x567 = 1U;
static int32_t x570 = -23;
int8_t x574 = INT8_MIN;
uint64_t x580 = UINT64_MAX;
static volatile int64_t t133 = 141172004491020LL;
int16_t x584 = INT16_MIN;
int32_t x587 = INT32_MIN;
static int64_t x588 = -2170378166LL;
int64_t x592 = INT64_MIN;
int16_t x600 = INT16_MAX;
volatile uint64_t t138 = 5219191LLU;
volatile int32_t x601 = 467834;
uint16_t x612 = 15036U;
volatile int32_t t141 = -223;
volatile uint32_t t143 = 45875U;
static uint32_t t145 = 66U;
static int8_t x638 = 19;
uint16_t x639 = 49U;
int32_t x643 = INT32_MAX;
volatile uint32_t x653 = 332558881U;
int64_t x666 = -1LL;
int32_t t155 = 500028;
int32_t x677 = INT32_MIN;
uint32_t x678 = 883U;
static volatile int64_t x683 = 1935971205450600987LL;
int8_t x685 = -1;
static int16_t x689 = -1;
uint8_t x691 = 5U;
int16_t x692 = -3052;
volatile uint64_t t162 = 5492LLU;
uint64_t t164 = 64245996LLU;
int8_t x712 = INT8_MIN;
int16_t x715 = INT16_MIN;
uint8_t x717 = 2U;
int64_t x719 = -453933469LL;
int32_t x722 = 216424;
int64_t x724 = INT64_MIN;
int16_t x726 = -1;
volatile int16_t x730 = -10;
int32_t x731 = 15381143;
volatile int64_t t171 = 99034LL;
uint32_t x739 = UINT32_MAX;
static uint8_t x742 = 15U;
int32_t t173 = 276;
int16_t x745 = -3;
int32_t t174 = -3797;
uint8_t x749 = 3U;
uint16_t x754 = 89U;
uint32_t x758 = 1872832478U;
volatile int16_t x762 = INT16_MAX;
volatile uint32_t x767 = UINT32_MAX;
volatile int64_t t179 = -37LL;
static volatile int64_t x773 = 6176LL;
int32_t x785 = INT32_MIN;
int32_t x788 = INT32_MAX;
uint16_t x799 = UINT16_MAX;
static int32_t t187 = 4047442;
int16_t x803 = INT16_MIN;
int64_t x805 = INT64_MIN;
int32_t x806 = -14753771;
int64_t x810 = INT64_MAX;
int16_t x815 = INT16_MIN;
volatile int8_t x820 = INT8_MIN;
int32_t t192 = -3032;
int32_t x829 = 40;
int8_t x833 = INT8_MIN;
uint32_t x841 = 222637U;
int8_t x846 = -1;
int32_t x852 = 7956;


void f0(void) {
    	static int8_t x1 = -1;
	uint64_t x2 = UINT64_MAX;
	int8_t x3 = -1;
	int64_t x4 = -751581996600312928LL;
	int32_t t0 = -535301931;

    t0 = (x1+(x2!=(x3|x4)));

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x7 = INT64_MAX;
	int64_t x8 = 2613899872157999LL;
	static volatile int32_t t1 = 41730;

    t1 = (x5+(x6!=(x7|x8)));

    if (t1 != -32767) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = -15997;
	int32_t x10 = INT32_MIN;
	int8_t x11 = INT8_MIN;
	int32_t x12 = -1;
	static int32_t t2 = 298;

    t2 = (x9+(x10!=(x11|x12)));

    if (t2 != -15996) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MAX;
	uint64_t x14 = UINT64_MAX;
	static int64_t x15 = -1LL;
	int32_t t3 = -220048740;

    t3 = (x13+(x14!=(x15|x16)));

    if (t3 != 127) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MIN;
	int64_t x18 = INT64_MAX;
	int64_t x19 = INT64_MIN;
	volatile int32_t t4 = 301393554;

    t4 = (x17+(x18!=(x19|x20)));

    if (t4 != -127) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x22 = UINT64_MAX;
	volatile int32_t x23 = -48;
	int32_t x24 = INT32_MIN;

    t5 = (x21+(x22!=(x23|x24)));

    if (t5 != 256) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = -1487918;
	int16_t x28 = INT16_MAX;
	int32_t t6 = -1167;

    t6 = (x25+(x26!=(x27|x28)));

    if (t6 != -1487918) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = UINT16_MAX;
	static volatile uint64_t x30 = UINT64_MAX;
	int64_t x32 = INT64_MIN;

    t7 = (x29+(x30!=(x31|x32)));

    if (t7 != 65535) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MIN;
	uint8_t x34 = UINT8_MAX;
	int8_t x35 = -14;
	static int8_t x36 = -1;
	int32_t t8 = 308;

    t8 = (x33+(x34!=(x35|x36)));

    if (t8 != -32767) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = -12;
	static volatile int64_t x39 = 7689644LL;
	volatile int64_t x40 = -1LL;
	volatile int32_t t9 = 243547;

    t9 = (x37+(x38!=(x39|x40)));

    if (t9 != -11) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x46 = UINT8_MAX;
	static int32_t x47 = -94627239;
	volatile uint32_t x48 = 292U;

    t10 = (x45+(x46!=(x47|x48)));

    if (t10 != 14751) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x49 = -1;
	int64_t x50 = INT64_MIN;
	int32_t x51 = INT32_MAX;
	int16_t x52 = INT16_MIN;
	volatile int32_t t11 = -5;

    t11 = (x49+(x50!=(x51|x52)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x53 = 0;
	static volatile uint32_t x55 = UINT32_MAX;
	static volatile int32_t x56 = INT32_MIN;
	int32_t t12 = 101;

    t12 = (x53+(x54!=(x55|x56)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x57 = 3371;
	int32_t x58 = -240;
	int32_t x59 = INT32_MAX;
	volatile uint64_t x60 = 29806345703780966LLU;
	volatile int32_t t13 = -1;

    t13 = (x57+(x58!=(x59|x60)));

    if (t13 != 3372) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint8_t x61 = 3U;
	int8_t x62 = 0;
	int32_t x64 = 74;

    t14 = (x61+(x62!=(x63|x64)));

    if (t14 != 4) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x65 = UINT32_MAX;
	uint32_t t15 = 1842111234U;

    t15 = (x65+(x66!=(x67|x68)));

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x69 = INT64_MIN;
	int64_t x72 = -59350LL;

    t16 = (x69+(x70!=(x71|x72)));

    if (t16 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x73 = 21U;
	int32_t x74 = -6161564;
	int32_t x75 = INT32_MIN;
	uint8_t x76 = 11U;
	volatile int32_t t17 = 848550;

    t17 = (x73+(x74!=(x75|x76)));

    if (t17 != 22) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint16_t x78 = 12481U;
	static uint64_t x79 = 665115766LLU;
	uint16_t x80 = 1066U;

    t18 = (x77+(x78!=(x79|x80)));

    if (t18 != 128) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint64_t x81 = 1966276145036LLU;
	int64_t x84 = INT64_MAX;
	volatile uint64_t t19 = 1639177LLU;

    t19 = (x81+(x82!=(x83|x84)));

    if (t19 != 1966276145037LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x85 = INT16_MIN;
	uint16_t x86 = 268U;
	static volatile int16_t x87 = 1;
	uint16_t x88 = 229U;
	volatile int32_t t20 = 164;

    t20 = (x85+(x86!=(x87|x88)));

    if (t20 != -32767) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x89 = -1;
	static int8_t x92 = INT8_MIN;
	int32_t t21 = -5;

    t21 = (x89+(x90!=(x91|x92)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x93 = 10662U;
	volatile int16_t x94 = -5635;
	uint32_t x95 = UINT32_MAX;
	int16_t x96 = INT16_MIN;

    t22 = (x93+(x94!=(x95|x96)));

    if (t22 != 10663) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x97 = 34U;
	int32_t x98 = INT32_MIN;
	static int16_t x99 = INT16_MIN;
	int8_t x100 = INT8_MIN;
	volatile uint32_t t23 = 414198U;

    t23 = (x97+(x98!=(x99|x100)));

    if (t23 != 35U) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x102 = INT16_MAX;
	int8_t x103 = INT8_MAX;
	int32_t x104 = INT32_MIN;
	int32_t t24 = -99550975;

    t24 = (x101+(x102!=(x103|x104)));

    if (t24 != 65536) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x105 = 3215U;
	int8_t x106 = INT8_MIN;
	static int64_t x107 = 38LL;
	int64_t x108 = INT64_MIN;
	int32_t t25 = 10;

    t25 = (x105+(x106!=(x107|x108)));

    if (t25 != 3216) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x110 = UINT64_MAX;
	volatile int8_t x111 = 4;
	int16_t x112 = INT16_MIN;
	volatile int32_t t26 = -84;

    t26 = (x109+(x110!=(x111|x112)));

    if (t26 != -32767) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x113 = 2229U;
	int64_t x114 = INT64_MAX;
	int8_t x115 = INT8_MAX;
	uint8_t x116 = 4U;
	static int32_t t27 = 3867090;

    t27 = (x113+(x114!=(x115|x116)));

    if (t27 != 2230) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x121 = 35U;
	volatile uint64_t x122 = UINT64_MAX;
	volatile int32_t x124 = -6;
	int32_t t28 = -43482;

    t28 = (x121+(x122!=(x123|x124)));

    if (t28 != 36) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x125 = 20;
	int32_t x126 = INT32_MAX;
	static uint8_t x127 = 100U;
	uint8_t x128 = 0U;
	volatile int32_t t29 = 126679;

    t29 = (x125+(x126!=(x127|x128)));

    if (t29 != 21) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x133 = INT8_MIN;
	static int32_t x134 = 0;
	int16_t x135 = INT16_MAX;
	volatile uint32_t x136 = UINT32_MAX;
	int32_t t30 = -4803;

    t30 = (x133+(x134!=(x135|x136)));

    if (t30 != -127) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x137 = -80;
	int32_t x138 = -1;
	uint64_t x140 = 78833539430LLU;
	static volatile int32_t t31 = -236091;

    t31 = (x137+(x138!=(x139|x140)));

    if (t31 != -79) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x141 = INT16_MIN;
	int8_t x142 = -10;
	uint16_t x143 = 2555U;
	static uint32_t x144 = 52254U;
	volatile int32_t t32 = 455;

    t32 = (x141+(x142!=(x143|x144)));

    if (t32 != -32767) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x145 = 15U;
	volatile int64_t x146 = 8288961970856120LL;
	int16_t x148 = INT16_MAX;
	static uint32_t t33 = 385U;

    t33 = (x145+(x146!=(x147|x148)));

    if (t33 != 16U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x150 = 1U;
	volatile int16_t x151 = INT16_MAX;
	static uint64_t x152 = 3064186LLU;
	static int32_t t34 = 2916;

    t34 = (x149+(x150!=(x151|x152)));

    if (t34 != 32768) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x156 = INT16_MAX;
	volatile int32_t t35 = 89870;

    t35 = (x153+(x154!=(x155|x156)));

    if (t35 != 128) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x157 = INT64_MIN;
	int16_t x158 = -5542;
	volatile uint64_t x159 = 100LLU;
	volatile int32_t x160 = -1;
	volatile int64_t t36 = -63949764180LL;

    t36 = (x157+(x158!=(x159|x160)));

    if (t36 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x161 = UINT8_MAX;
	static int64_t x162 = -1LL;
	uint32_t x163 = 3772U;
	int32_t x164 = INT32_MAX;
	int32_t t37 = -19692322;

    t37 = (x161+(x162!=(x163|x164)));

    if (t37 != 256) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x165 = -153218437500845LL;
	uint64_t x166 = UINT64_MAX;
	int16_t x167 = INT16_MAX;

    t38 = (x165+(x166!=(x167|x168)));

    if (t38 != -153218437500844LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x169 = INT8_MIN;
	int8_t x170 = INT8_MIN;
	int16_t x172 = -1;

    t39 = (x169+(x170!=(x171|x172)));

    if (t39 != -127) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x174 = 5U;
	volatile uint32_t x175 = UINT32_MAX;
	int32_t x176 = INT32_MIN;

    t40 = (x173+(x174!=(x175|x176)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int32_t x177 = -1;
	int16_t x178 = 752;
	volatile int8_t x179 = 3;
	int64_t x180 = -1464572421LL;

    t41 = (x177+(x178!=(x179|x180)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x182 = INT64_MIN;
	uint32_t t42 = 8262992U;

    t42 = (x181+(x182!=(x183|x184)));

    if (t42 != 2U) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x185 = 24;
	uint16_t x186 = 496U;
	volatile int32_t x187 = INT32_MAX;
	uint16_t x188 = 2978U;
	volatile int32_t t43 = -3;

    t43 = (x185+(x186!=(x187|x188)));

    if (t43 != 25) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x189 = INT32_MIN;
	volatile uint16_t x192 = 2U;
	int32_t t44 = -852;

    t44 = (x189+(x190!=(x191|x192)));

    if (t44 != -2147483647) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x193 = INT32_MIN;
	int16_t x195 = INT16_MIN;
	uint64_t x196 = UINT64_MAX;
	volatile int32_t t45 = 7158937;

    t45 = (x193+(x194!=(x195|x196)));

    if (t45 != -2147483647) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x197 = 0LLU;
	uint8_t x198 = UINT8_MAX;
	int16_t x200 = INT16_MIN;
	static volatile uint64_t t46 = 335203002214660LLU;

    t46 = (x197+(x198!=(x199|x200)));

    if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile uint32_t x201 = 11U;
	int32_t x202 = INT32_MIN;
	uint8_t x203 = 35U;
	int16_t x204 = 5636;

    t47 = (x201+(x202!=(x203|x204)));

    if (t47 != 12U) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x205 = 42;
	int64_t x208 = INT64_MIN;
	static volatile int32_t t48 = 3855;

    t48 = (x205+(x206!=(x207|x208)));

    if (t48 != 43) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint16_t x213 = UINT16_MAX;
	int32_t x214 = -3368342;
	uint16_t x215 = 12U;
	int32_t t49 = -6651;

    t49 = (x213+(x214!=(x215|x216)));

    if (t49 != 65536) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x217 = INT32_MIN;
	int32_t x218 = -1;
	int64_t x220 = INT64_MAX;
	static int32_t t50 = INT32_MIN;

    t50 = (x217+(x218!=(x219|x220)));

    if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x223 = -1;
	int16_t x224 = -957;
	static int32_t t51 = -1416785;

    t51 = (x221+(x222!=(x223|x224)));

    if (t51 != -75690669) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x225 = INT8_MIN;
	int64_t x226 = -6196LL;
	static volatile int64_t x227 = 743740679077752LL;
	uint16_t x228 = 199U;
	volatile int32_t t52 = -55983752;

    t52 = (x225+(x226!=(x227|x228)));

    if (t52 != -127) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x229 = 35430483U;
	static int8_t x230 = 22;
	volatile uint64_t x231 = 42965462LLU;
	int32_t x232 = INT32_MIN;
	volatile uint32_t t53 = 2001466U;

    t53 = (x229+(x230!=(x231|x232)));

    if (t53 != 35430484U) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int16_t x233 = -1;
	int16_t x235 = INT16_MAX;
	uint16_t x236 = 8657U;

    t54 = (x233+(x234!=(x235|x236)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x237 = INT32_MIN;
	uint32_t x238 = 107363U;
	uint8_t x239 = 42U;
	int64_t x240 = 1LL;
	volatile int32_t t55 = 2915;

    t55 = (x237+(x238!=(x239|x240)));

    if (t55 != -2147483647) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x241 = 3583U;
	volatile uint64_t x242 = 301353857378527LLU;
	int32_t x243 = 100611;
	static volatile int32_t t56 = 49;

    t56 = (x241+(x242!=(x243|x244)));

    if (t56 != 3584) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x245 = INT8_MIN;
	int16_t x247 = INT16_MIN;
	volatile uint32_t x248 = 42598985U;
	static int32_t t57 = -115320;

    t57 = (x245+(x246!=(x247|x248)));

    if (t57 != -127) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x249 = UINT64_MAX;
	volatile int16_t x250 = -2311;
	int64_t x251 = -204077892915LL;
	static int16_t x252 = -14;
	volatile uint64_t t58 = 52164132985143949LLU;

    t58 = (x249+(x250!=(x251|x252)));

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x253 = INT8_MIN;
	int16_t x254 = 15929;
	int32_t x255 = INT32_MAX;
	uint32_t x256 = 119683371U;
	volatile int32_t t59 = 1957;

    t59 = (x253+(x254!=(x255|x256)));

    if (t59 != -127) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x257 = 9U;
	int32_t x258 = -217;
	uint64_t x259 = UINT64_MAX;
	int32_t x260 = INT32_MIN;

    t60 = (x257+(x258!=(x259|x260)));

    if (t60 != 10) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x261 = INT8_MIN;
	uint8_t x262 = 37U;
	int64_t x263 = -15LL;
	volatile int16_t x264 = INT16_MIN;
	volatile int32_t t61 = 41844;

    t61 = (x261+(x262!=(x263|x264)));

    if (t61 != -127) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x265 = 433615;
	int16_t x266 = 0;
	int8_t x267 = -10;
	volatile uint32_t x268 = 5036U;
	int32_t t62 = 2;

    t62 = (x265+(x266!=(x267|x268)));

    if (t62 != 433616) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x269 = INT8_MIN;
	volatile uint64_t x270 = 20536838425118LLU;
	int64_t x271 = INT64_MIN;
	int8_t x272 = INT8_MAX;

    t63 = (x269+(x270!=(x271|x272)));

    if (t63 != -127) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int32_t x273 = 2313817;
	int32_t x274 = INT32_MIN;
	static int64_t x276 = INT64_MIN;
	volatile int32_t t64 = 16819;

    t64 = (x273+(x274!=(x275|x276)));

    if (t64 != 2313818) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x277 = -1;
	volatile int32_t x278 = -235573946;
	int8_t x279 = 30;
	volatile uint64_t x280 = 7824400707047037LLU;
	volatile int32_t t65 = 4920504;

    t65 = (x277+(x278!=(x279|x280)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x281 = 4678960;
	int8_t x282 = 49;
	uint16_t x283 = 7U;
	int8_t x284 = INT8_MIN;
	int32_t t66 = 69;

    t66 = (x281+(x282!=(x283|x284)));

    if (t66 != 4678961) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x285 = 502202767LL;
	volatile int8_t x286 = INT8_MAX;
	int8_t x287 = INT8_MIN;
	uint32_t x288 = 538604U;
	static volatile int64_t t67 = -111LL;

    t67 = (x285+(x286!=(x287|x288)));

    if (t67 != 502202768LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x289 = -1;
	uint16_t x291 = 14U;
	int8_t x292 = INT8_MAX;
	volatile int32_t t68 = 0;

    t68 = (x289+(x290!=(x291|x292)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x297 = 27;
	int32_t x300 = INT32_MIN;
	int32_t t69 = -490847;

    t69 = (x297+(x298!=(x299|x300)));

    if (t69 != 28) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x301 = INT64_MIN;
	int32_t x302 = 34389;
	int64_t t70 = -51127736349697691LL;

    t70 = (x301+(x302!=(x303|x304)));

    if (t70 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x309 = -432638161;
	uint16_t x310 = 31906U;
	int16_t x311 = INT16_MIN;
	int32_t x312 = 24;
	volatile int32_t t71 = 1;

    t71 = (x309+(x310!=(x311|x312)));

    if (t71 != -432638160) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint8_t x313 = UINT8_MAX;
	uint16_t x316 = UINT16_MAX;
	int32_t t72 = 23537594;

    t72 = (x313+(x314!=(x315|x316)));

    if (t72 != 256) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x317 = INT64_MIN;
	volatile int16_t x318 = INT16_MAX;
	uint64_t x319 = UINT64_MAX;
	volatile int32_t x320 = -1;
	int64_t t73 = -27185133309LL;

    t73 = (x317+(x318!=(x319|x320)));

    if (t73 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x321 = INT64_MIN;
	static int32_t x322 = 212044495;
	volatile int8_t x323 = INT8_MIN;
	static volatile int32_t x324 = -611954;
	int64_t t74 = 34725012LL;

    t74 = (x321+(x322!=(x323|x324)));

    if (t74 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x325 = INT16_MIN;
	uint32_t x326 = 2U;
	int64_t x328 = -1LL;
	volatile int32_t t75 = 2;

    t75 = (x325+(x326!=(x327|x328)));

    if (t75 != -32767) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x329 = -1;
	int64_t x332 = 18182847006488LL;
	volatile int32_t t76 = 0;

    t76 = (x329+(x330!=(x331|x332)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x333 = -1;
	static uint64_t x335 = 111065280611LLU;
	uint64_t x336 = 1914816LLU;
	int32_t t77 = -9;

    t77 = (x333+(x334!=(x335|x336)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x337 = INT8_MAX;
	uint8_t x338 = 16U;
	volatile int64_t x339 = INT64_MIN;
	uint16_t x340 = 3363U;
	int32_t t78 = -10845378;

    t78 = (x337+(x338!=(x339|x340)));

    if (t78 != 128) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x342 = INT32_MAX;
	static uint8_t x343 = 20U;
	int32_t x344 = -1;

    t79 = (x341+(x342!=(x343|x344)));

    if (t79 != 3420846U) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x345 = -120848898LL;
	volatile uint8_t x346 = 48U;
	int16_t x348 = INT16_MAX;
	static volatile int64_t t80 = -84198456860242321LL;

    t80 = (x345+(x346!=(x347|x348)));

    if (t80 != -120848897LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int64_t x349 = INT64_MIN;
	static int32_t x350 = 96494747;
	uint32_t x351 = 39317U;
	volatile int16_t x352 = INT16_MIN;
	int64_t t81 = 1317006517626324LL;

    t81 = (x349+(x350!=(x351|x352)));

    if (t81 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x353 = INT32_MIN;
	volatile int8_t x354 = INT8_MAX;
	int8_t x355 = -1;
	volatile int16_t x356 = -1;
	volatile int32_t t82 = -1310;

    t82 = (x353+(x354!=(x355|x356)));

    if (t82 != -2147483647) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x357 = 502LL;
	int32_t x358 = INT32_MIN;
	int32_t x359 = -1;
	int16_t x360 = -1;

    t83 = (x357+(x358!=(x359|x360)));

    if (t83 != 503LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x361 = INT16_MIN;
	static uint32_t x362 = UINT32_MAX;
	int16_t x363 = 0;
	volatile int8_t x364 = -1;
	static volatile int32_t t84 = 552;

    t84 = (x361+(x362!=(x363|x364)));

    if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x365 = INT8_MIN;
	uint16_t x366 = 6575U;
	int32_t x367 = -1;
	int32_t x368 = 440;

    t85 = (x365+(x366!=(x367|x368)));

    if (t85 != -127) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x369 = INT8_MIN;
	uint16_t x370 = UINT16_MAX;
	int8_t x371 = -1;
	volatile int8_t x372 = -1;
	volatile int32_t t86 = 10890;

    t86 = (x369+(x370!=(x371|x372)));

    if (t86 != -127) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x373 = 21619767;
	volatile int32_t x376 = -1;
	static int32_t t87 = -6549675;

    t87 = (x373+(x374!=(x375|x376)));

    if (t87 != 21619768) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x377 = 14357970723LLU;
	uint32_t x379 = UINT32_MAX;

    t88 = (x377+(x378!=(x379|x380)));

    if (t88 != 14357970724LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint64_t x381 = 112582075LLU;
	int8_t x382 = -2;
	static uint64_t t89 = 35796833176114238LLU;

    t89 = (x381+(x382!=(x383|x384)));

    if (t89 != 112582076LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x389 = INT32_MIN;
	int16_t x390 = -1;
	uint32_t x391 = UINT32_MAX;
	int32_t t90 = INT32_MIN;

    t90 = (x389+(x390!=(x391|x392)));

    if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint8_t x393 = 0U;
	int32_t x394 = INT32_MAX;
	int16_t x396 = INT16_MIN;
	volatile int32_t t91 = -1;

    t91 = (x393+(x394!=(x395|x396)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x397 = -11551;
	uint32_t x399 = UINT32_MAX;
	int64_t x400 = INT64_MIN;
	int32_t t92 = -33164;

    t92 = (x397+(x398!=(x399|x400)));

    if (t92 != -11550) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x401 = 11026LLU;
	volatile int8_t x402 = INT8_MAX;
	int8_t x403 = -1;
	volatile int32_t x404 = 73003;
	volatile uint64_t t93 = 37868511688763638LLU;

    t93 = (x401+(x402!=(x403|x404)));

    if (t93 != 11027LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x405 = 50U;
	uint32_t x406 = 99158860U;
	int32_t x408 = -1;
	int32_t t94 = -525774044;

    t94 = (x405+(x406!=(x407|x408)));

    if (t94 != 51) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x409 = INT16_MIN;
	volatile uint64_t x410 = 785117089325413565LLU;
	int8_t x412 = 0;
	static volatile int32_t t95 = -13;

    t95 = (x409+(x410!=(x411|x412)));

    if (t95 != -32767) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x413 = 127;
	uint16_t x414 = UINT16_MAX;
	int32_t t96 = -6728;

    t96 = (x413+(x414!=(x415|x416)));

    if (t96 != 128) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint32_t x417 = 447109U;
	int32_t x418 = -384;
	int32_t x419 = -1;
	uint32_t x420 = UINT32_MAX;
	uint32_t t97 = 627096346U;

    t97 = (x417+(x418!=(x419|x420)));

    if (t97 != 447110U) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x421 = UINT64_MAX;
	int16_t x422 = INT16_MIN;
	int16_t x423 = -1;
	int8_t x424 = INT8_MAX;

    t98 = (x421+(x422!=(x423|x424)));

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x425 = -1;
	static volatile int16_t x426 = 2724;
	int64_t x427 = INT64_MIN;
	static int16_t x428 = -74;
	static int32_t t99 = 142798;

    t99 = (x425+(x426!=(x427|x428)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint64_t x429 = 0LLU;
	int16_t x430 = INT16_MIN;
	uint8_t x432 = 0U;

    t100 = (x429+(x430!=(x431|x432)));

    if (t100 != 1LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x433 = -18;
	static volatile int16_t x434 = -1;
	int16_t x435 = INT16_MIN;
	int32_t t101 = -65460573;

    t101 = (x433+(x434!=(x435|x436)));

    if (t101 != -18) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x441 = UINT64_MAX;
	static uint32_t x442 = 1199945500U;
	int32_t x443 = 19;
	int16_t x444 = -1;
	uint64_t t102 = 236399560840LLU;

    t102 = (x441+(x442!=(x443|x444)));

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x445 = 1395615LLU;
	uint32_t x446 = 2U;
	uint16_t x447 = UINT16_MAX;
	uint8_t x448 = UINT8_MAX;
	volatile uint64_t t103 = 32467406046257LLU;

    t103 = (x445+(x446!=(x447|x448)));

    if (t103 != 1395616LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint64_t x453 = 221709LLU;
	int64_t x455 = INT64_MIN;
	static uint64_t t104 = 525933789155LLU;

    t104 = (x453+(x454!=(x455|x456)));

    if (t104 != 221710LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x457 = UINT16_MAX;
	static uint16_t x459 = 1067U;
	int32_t t105 = 2325;

    t105 = (x457+(x458!=(x459|x460)));

    if (t105 != 65536) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int16_t x461 = -1;
	uint16_t x462 = UINT16_MAX;
	uint16_t x463 = UINT16_MAX;
	int32_t x464 = -1;
	static volatile int32_t t106 = 13695;

    t106 = (x461+(x462!=(x463|x464)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x465 = 6U;
	int64_t x467 = INT64_MIN;
	static uint8_t x468 = 64U;
	int32_t t107 = -15286413;

    t107 = (x465+(x466!=(x467|x468)));

    if (t107 != 7) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x469 = UINT8_MAX;
	int32_t x470 = INT32_MIN;
	int32_t x471 = INT32_MAX;
	static volatile int64_t x472 = INT64_MIN;
	int32_t t108 = 1317704;

    t108 = (x469+(x470!=(x471|x472)));

    if (t108 != 256) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x474 = INT16_MAX;
	int64_t x475 = INT64_MIN;
	volatile int16_t x476 = INT16_MIN;
	int32_t t109 = -28843;

    t109 = (x473+(x474!=(x475|x476)));

    if (t109 != -127) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x477 = INT16_MAX;
	int8_t x478 = -22;
	int64_t x479 = INT64_MIN;
	int8_t x480 = INT8_MIN;
	volatile int32_t t110 = 74215;

    t110 = (x477+(x478!=(x479|x480)));

    if (t110 != 32768) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x485 = -9449003;
	uint64_t x487 = 5983648158LLU;
	static int16_t x488 = INT16_MIN;
	int32_t t111 = 26;

    t111 = (x485+(x486!=(x487|x488)));

    if (t111 != -9449002) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x490 = INT32_MAX;
	int16_t x491 = INT16_MIN;
	int64_t x492 = INT64_MAX;

    t112 = (x489+(x490!=(x491|x492)));

    if (t112 != 5041320068014996LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint16_t x493 = 7U;
	volatile uint32_t x494 = 953690U;
	int16_t x495 = -2241;
	int16_t x496 = -12508;
	static volatile int32_t t113 = -57180;

    t113 = (x493+(x494!=(x495|x496)));

    if (t113 != 8) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x498 = -1;
	int32_t x500 = INT32_MIN;
	volatile int32_t t114 = -45598874;

    t114 = (x497+(x498!=(x499|x500)));

    if (t114 != -1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x501 = -1;
	int64_t x502 = -50LL;
	static uint16_t x503 = 0U;
	int16_t x504 = INT16_MAX;
	volatile int32_t t115 = -64530246;

    t115 = (x501+(x502!=(x503|x504)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x505 = 1338693714307LLU;
	volatile uint32_t x506 = 188U;
	int32_t x507 = 46;
	volatile int32_t x508 = 45;
	uint64_t t116 = 58215904570LLU;

    t116 = (x505+(x506!=(x507|x508)));

    if (t116 != 1338693714308LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x509 = INT8_MIN;
	uint64_t x510 = UINT64_MAX;
	int8_t x511 = INT8_MIN;
	int16_t x512 = 5;
	volatile int32_t t117 = -920105634;

    t117 = (x509+(x510!=(x511|x512)));

    if (t117 != -127) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x513 = UINT32_MAX;
	uint32_t x514 = 2125837956U;
	static uint16_t x515 = UINT16_MAX;
	int64_t x516 = INT64_MAX;
	volatile uint32_t t118 = 16529033U;

    t118 = (x513+(x514!=(x515|x516)));

    if (t118 != 0U) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x521 = 39U;
	int64_t x522 = INT64_MIN;
	int8_t x523 = INT8_MIN;
	static int64_t x524 = -506827LL;
	uint32_t t119 = 26641279U;

    t119 = (x521+(x522!=(x523|x524)));

    if (t119 != 40U) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x525 = 2023;
	static int8_t x526 = INT8_MAX;
	int16_t x528 = -4;
	int32_t t120 = -58;

    t120 = (x525+(x526!=(x527|x528)));

    if (t120 != 2024) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x530 = INT8_MAX;
	int64_t x531 = INT64_MIN;
	int8_t x532 = -1;
	int32_t t121 = -73;

    t121 = (x529+(x530!=(x531|x532)));

    if (t121 != -2147483647) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x534 = INT64_MIN;
	int64_t x536 = 11509989257277544LL;
	volatile int32_t t122 = 8807;

    t122 = (x533+(x534!=(x535|x536)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint32_t x537 = 953412406U;
	int64_t x538 = INT64_MIN;
	static uint32_t x539 = 16U;
	uint64_t x540 = UINT64_MAX;
	static volatile uint32_t t123 = 9U;

    t123 = (x537+(x538!=(x539|x540)));

    if (t123 != 953412407U) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x542 = 6;
	static uint8_t x543 = UINT8_MAX;
	static uint32_t x544 = 159U;

    t124 = (x541+(x542!=(x543|x544)));

    if (t124 != -32767) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x545 = 34;
	int16_t x546 = -1;
	uint64_t x547 = 3707615377450444LLU;
	int32_t t125 = -1048;

    t125 = (x545+(x546!=(x547|x548)));

    if (t125 != 35) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x549 = -1;
	volatile int16_t x551 = -1;
	volatile int64_t x552 = -1LL;
	volatile int32_t t126 = -255967;

    t126 = (x549+(x550!=(x551|x552)));

    if (t126 != -1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x553 = INT8_MIN;
	static volatile int64_t x556 = -1LL;

    t127 = (x553+(x554!=(x555|x556)));

    if (t127 != -127) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x557 = INT8_MAX;
	int64_t x559 = INT64_MIN;
	uint32_t x560 = 13U;

    t128 = (x557+(x558!=(x559|x560)));

    if (t128 != 128) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x561 = 1;
	volatile int16_t x562 = 40;
	volatile int8_t x563 = -1;
	static uint8_t x564 = UINT8_MAX;
	static volatile int32_t t129 = 13115937;

    t129 = (x561+(x562!=(x563|x564)));

    if (t129 != 2) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x565 = -898;
	int8_t x568 = INT8_MIN;
	volatile int32_t t130 = 1;

    t130 = (x565+(x566!=(x567|x568)));

    if (t130 != -897) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x569 = -1LL;
	int8_t x571 = INT8_MAX;
	volatile uint8_t x572 = UINT8_MAX;
	int64_t t131 = -122159275353502736LL;

    t131 = (x569+(x570!=(x571|x572)));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x573 = 1U;
	int8_t x575 = -1;
	static int64_t x576 = INT64_MIN;
	volatile int32_t t132 = -8;

    t132 = (x573+(x574!=(x575|x576)));

    if (t132 != 2) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x577 = 10743191LL;
	uint64_t x578 = UINT64_MAX;
	int8_t x579 = -1;

    t133 = (x577+(x578!=(x579|x580)));

    if (t133 != 10743191LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int64_t x581 = -68847588955134LL;
	static int16_t x582 = -1;
	volatile int16_t x583 = INT16_MIN;
	volatile int64_t t134 = 1LL;

    t134 = (x581+(x582!=(x583|x584)));

    if (t134 != -68847588955133LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint64_t x585 = 20460134574LLU;
	volatile int16_t x586 = 44;
	uint64_t t135 = 1161016196LLU;

    t135 = (x585+(x586!=(x587|x588)));

    if (t135 != 20460134575LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x589 = 6U;
	int32_t x590 = 295;
	static uint64_t x591 = UINT64_MAX;
	int32_t t136 = 32;

    t136 = (x589+(x590!=(x591|x592)));

    if (t136 != 7) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint32_t x593 = 3U;
	uint32_t x594 = UINT32_MAX;
	int8_t x595 = INT8_MAX;
	static int64_t x596 = INT64_MIN;
	volatile uint32_t t137 = 4057997U;

    t137 = (x593+(x594!=(x595|x596)));

    if (t137 != 4U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x597 = 7387645041612768LLU;
	uint8_t x598 = UINT8_MAX;
	int32_t x599 = -1;

    t138 = (x597+(x598!=(x599|x600)));

    if (t138 != 7387645041612769LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x602 = -333604989735LL;
	int8_t x603 = 13;
	volatile uint8_t x604 = UINT8_MAX;
	static volatile int32_t t139 = 1651;

    t139 = (x601+(x602!=(x603|x604)));

    if (t139 != 467835) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x605 = 88U;
	static int32_t x606 = INT32_MIN;
	int16_t x607 = -1;
	int8_t x608 = INT8_MAX;
	int32_t t140 = 2;

    t140 = (x605+(x606!=(x607|x608)));

    if (t140 != 89) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int16_t x609 = -1;
	volatile int8_t x610 = 1;
	volatile int8_t x611 = -15;

    t141 = (x609+(x610!=(x611|x612)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x613 = INT16_MAX;
	uint32_t x614 = UINT32_MAX;
	int16_t x615 = INT16_MAX;
	int32_t x616 = INT32_MIN;
	volatile int32_t t142 = 5546;

    t142 = (x613+(x614!=(x615|x616)));

    if (t142 != 32768) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x617 = 17522661U;
	int32_t x618 = -3427357;
	int32_t x619 = -1;
	int64_t x620 = -732792025100LL;

    t143 = (x617+(x618!=(x619|x620)));

    if (t143 != 17522662U) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x621 = 0U;
	volatile int64_t x622 = INT64_MIN;
	static uint64_t x623 = UINT64_MAX;
	uint8_t x624 = 28U;
	volatile int32_t t144 = -774131;

    t144 = (x621+(x622!=(x623|x624)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x625 = 610017U;
	int8_t x626 = -6;
	int32_t x627 = -956866999;
	volatile int64_t x628 = -1LL;

    t145 = (x625+(x626!=(x627|x628)));

    if (t145 != 610018U) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x629 = INT16_MIN;
	int64_t x630 = INT64_MIN;
	int32_t x631 = INT32_MAX;
	int8_t x632 = INT8_MIN;
	volatile int32_t t146 = -248974;

    t146 = (x629+(x630!=(x631|x632)));

    if (t146 != -32767) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x633 = INT64_MIN;
	uint16_t x634 = UINT16_MAX;
	int64_t x635 = 15307LL;
	int16_t x636 = INT16_MAX;
	int64_t t147 = 91860992LL;

    t147 = (x633+(x634!=(x635|x636)));

    if (t147 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint64_t x637 = 2710972775009257111LLU;
	int32_t x640 = INT32_MIN;
	volatile uint64_t t148 = 39359663LLU;

    t148 = (x637+(x638!=(x639|x640)));

    if (t148 != 2710972775009257112LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x641 = UINT64_MAX;
	int16_t x642 = -1;
	int8_t x644 = 3;
	volatile uint64_t t149 = 1822LLU;

    t149 = (x641+(x642!=(x643|x644)));

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x645 = 1;
	int64_t x646 = INT64_MIN;
	static uint32_t x647 = UINT32_MAX;
	int8_t x648 = INT8_MIN;
	static volatile int32_t t150 = -34106940;

    t150 = (x645+(x646!=(x647|x648)));

    if (t150 != 2) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x649 = INT8_MIN;
	uint16_t x650 = 1041U;
	uint8_t x651 = UINT8_MAX;
	static uint16_t x652 = 499U;
	int32_t t151 = 14;

    t151 = (x649+(x650!=(x651|x652)));

    if (t151 != -127) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x654 = INT16_MIN;
	volatile int64_t x655 = INT64_MIN;
	uint64_t x656 = UINT64_MAX;
	uint32_t t152 = 36406456U;

    t152 = (x653+(x654!=(x655|x656)));

    if (t152 != 332558882U) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x657 = 10868U;
	int16_t x658 = -31;
	int64_t x659 = INT64_MIN;
	volatile uint32_t x660 = 770646630U;
	volatile int32_t t153 = 184325;

    t153 = (x657+(x658!=(x659|x660)));

    if (t153 != 10869) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x661 = 3907;
	static int16_t x662 = INT16_MIN;
	uint64_t x663 = UINT64_MAX;
	static volatile int64_t x664 = 163LL;
	int32_t t154 = -79006;

    t154 = (x661+(x662!=(x663|x664)));

    if (t154 != 3908) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint16_t x665 = 7604U;
	static int8_t x667 = INT8_MIN;
	uint16_t x668 = 30455U;

    t155 = (x665+(x666!=(x667|x668)));

    if (t155 != 7605) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x669 = INT8_MIN;
	volatile uint16_t x670 = 2U;
	volatile int64_t x671 = -213943643099846LL;
	int64_t x672 = -1LL;
	volatile int32_t t156 = -59886;

    t156 = (x669+(x670!=(x671|x672)));

    if (t156 != -127) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x673 = UINT64_MAX;
	int64_t x674 = INT64_MAX;
	static int16_t x675 = -7741;
	uint16_t x676 = 1588U;
	volatile uint64_t t157 = 3584189986044186LLU;

    t157 = (x673+(x674!=(x675|x676)));

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x679 = 0U;
	static int8_t x680 = INT8_MIN;
	volatile int32_t t158 = -428437;

    t158 = (x677+(x678!=(x679|x680)));

    if (t158 != -2147483647) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x681 = -54;
	int64_t x682 = 1345LL;
	uint16_t x684 = UINT16_MAX;
	volatile int32_t t159 = 1;

    t159 = (x681+(x682!=(x683|x684)));

    if (t159 != -53) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x686 = -29;
	int16_t x687 = -400;
	uint64_t x688 = 1LLU;
	volatile int32_t t160 = 363525;

    t160 = (x685+(x686!=(x687|x688)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint8_t x690 = 0U;
	volatile int32_t t161 = -3;

    t161 = (x689+(x690!=(x691|x692)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x693 = 4956742359486723855LLU;
	volatile uint16_t x694 = 0U;
	uint16_t x695 = UINT16_MAX;
	int32_t x696 = INT32_MIN;

    t162 = (x693+(x694!=(x695|x696)));

    if (t162 != 4956742359486723856LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x697 = INT64_MIN;
	static volatile int8_t x698 = 0;
	int8_t x699 = INT8_MIN;
	static int8_t x700 = 0;
	volatile int64_t t163 = 1126643346304153619LL;

    t163 = (x697+(x698!=(x699|x700)));

    if (t163 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x701 = 183786903850737315LLU;
	static int8_t x702 = INT8_MIN;
	static int32_t x703 = INT32_MIN;
	volatile int64_t x704 = 12935054LL;

    t164 = (x701+(x702!=(x703|x704)));

    if (t164 != 183786903850737316LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x709 = 5816432LL;
	volatile int64_t x710 = INT64_MIN;
	int16_t x711 = INT16_MAX;
	int64_t t165 = 1LL;

    t165 = (x709+(x710!=(x711|x712)));

    if (t165 != 5816433LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x713 = -1;
	int64_t x714 = -511466610745LL;
	static int64_t x716 = -1LL;
	int32_t t166 = -1;

    t166 = (x713+(x714!=(x715|x716)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x718 = -1;
	volatile int64_t x720 = INT64_MIN;
	static int32_t t167 = 133768218;

    t167 = (x717+(x718!=(x719|x720)));

    if (t167 != 3) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int16_t x721 = INT16_MIN;
	int16_t x723 = 2;
	int32_t t168 = 98044;

    t168 = (x721+(x722!=(x723|x724)));

    if (t168 != -32767) { NG(); } else { ; }
	
}

void f169(void) {
    	static int64_t x725 = -1LL;
	int32_t x727 = INT32_MIN;
	static uint16_t x728 = UINT16_MAX;
	volatile int64_t t169 = -58089LL;

    t169 = (x725+(x726!=(x727|x728)));

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x729 = -1;
	uint64_t x732 = 0LLU;
	int32_t t170 = -71386544;

    t170 = (x729+(x730!=(x731|x732)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int64_t x733 = 4803465578986043LL;
	int32_t x734 = INT32_MAX;
	int32_t x735 = -1;
	int32_t x736 = 14313;

    t171 = (x733+(x734!=(x735|x736)));

    if (t171 != 4803465578986044LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x737 = 45U;
	static int8_t x738 = INT8_MIN;
	uint64_t x740 = UINT64_MAX;
	volatile int32_t t172 = -28118494;

    t172 = (x737+(x738!=(x739|x740)));

    if (t172 != 46) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint16_t x741 = UINT16_MAX;
	int32_t x743 = INT32_MIN;
	int64_t x744 = 461LL;

    t173 = (x741+(x742!=(x743|x744)));

    if (t173 != 65536) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x746 = 22123924030LL;
	uint64_t x747 = UINT64_MAX;
	uint64_t x748 = 9792365LLU;

    t174 = (x745+(x746!=(x747|x748)));

    if (t174 != -2) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x750 = INT64_MAX;
	static int64_t x751 = 1090936905614LL;
	int8_t x752 = INT8_MIN;
	volatile int32_t t175 = -1913730;

    t175 = (x749+(x750!=(x751|x752)));

    if (t175 != 4) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint8_t x753 = 5U;
	int16_t x755 = INT16_MIN;
	volatile int64_t x756 = INT64_MIN;
	volatile int32_t t176 = 61696;

    t176 = (x753+(x754!=(x755|x756)));

    if (t176 != 6) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x757 = 1776LLU;
	int8_t x759 = INT8_MAX;
	uint64_t x760 = 2768620443114180505LLU;
	volatile uint64_t t177 = 4LLU;

    t177 = (x757+(x758!=(x759|x760)));

    if (t177 != 1777LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x761 = UINT64_MAX;
	volatile int64_t x763 = INT64_MAX;
	int32_t x764 = INT32_MIN;
	static volatile uint64_t t178 = 40749095213196LLU;

    t178 = (x761+(x762!=(x763|x764)));

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x765 = INT64_MIN;
	uint8_t x766 = 9U;
	int16_t x768 = INT16_MIN;

    t179 = (x765+(x766!=(x767|x768)));

    if (t179 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x769 = INT8_MAX;
	int64_t x770 = INT64_MIN;
	static int32_t x771 = -1;
	uint64_t x772 = 6822496950004189LLU;
	volatile int32_t t180 = 215097;

    t180 = (x769+(x770!=(x771|x772)));

    if (t180 != 128) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x774 = INT16_MIN;
	int64_t x775 = -11980071LL;
	int32_t x776 = 249;
	static volatile int64_t t181 = 27003858322190LL;

    t181 = (x773+(x774!=(x775|x776)));

    if (t181 != 6177LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x777 = -30;
	int32_t x778 = INT32_MIN;
	uint16_t x779 = 1913U;
	int8_t x780 = -1;
	volatile int32_t t182 = 503612;

    t182 = (x777+(x778!=(x779|x780)));

    if (t182 != -29) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x781 = UINT16_MAX;
	static int32_t x782 = INT32_MIN;
	static int8_t x783 = INT8_MIN;
	static uint8_t x784 = UINT8_MAX;
	int32_t t183 = -2;

    t183 = (x781+(x782!=(x783|x784)));

    if (t183 != 65536) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x786 = 29LLU;
	int8_t x787 = -1;
	int32_t t184 = -167;

    t184 = (x785+(x786!=(x787|x788)));

    if (t184 != -2147483647) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x789 = -212041247601441LL;
	static uint32_t x790 = UINT32_MAX;
	uint8_t x791 = 2U;
	int8_t x792 = INT8_MAX;
	int64_t t185 = 449570096718LL;

    t185 = (x789+(x790!=(x791|x792)));

    if (t185 != -212041247601440LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x793 = 26;
	int32_t x794 = INT32_MIN;
	volatile int16_t x795 = INT16_MIN;
	static uint64_t x796 = UINT64_MAX;
	volatile int32_t t186 = -5623;

    t186 = (x793+(x794!=(x795|x796)));

    if (t186 != 27) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x797 = INT32_MIN;
	volatile int32_t x798 = -613899488;
	int64_t x800 = INT64_MIN;

    t187 = (x797+(x798!=(x799|x800)));

    if (t187 != -2147483647) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x801 = UINT64_MAX;
	int32_t x802 = -1;
	uint8_t x804 = 127U;
	volatile uint64_t t188 = 67606499558LLU;

    t188 = (x801+(x802!=(x803|x804)));

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x807 = INT16_MIN;
	uint32_t x808 = UINT32_MAX;
	int64_t t189 = -42171LL;

    t189 = (x805+(x806!=(x807|x808)));

    if (t189 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint16_t x809 = 1282U;
	static uint64_t x811 = 3128276781LLU;
	uint32_t x812 = 66U;
	static int32_t t190 = 371;

    t190 = (x809+(x810!=(x811|x812)));

    if (t190 != 1283) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x813 = -1;
	int32_t x814 = 906609;
	static uint32_t x816 = UINT32_MAX;
	int32_t t191 = -220708394;

    t191 = (x813+(x814!=(x815|x816)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x817 = INT8_MIN;
	int16_t x818 = INT16_MIN;
	int32_t x819 = INT32_MAX;

    t192 = (x817+(x818!=(x819|x820)));

    if (t192 != -127) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x821 = 1;
	int64_t x822 = -1LL;
	uint32_t x823 = 79U;
	volatile int64_t x824 = INT64_MIN;
	volatile int32_t t193 = -23965646;

    t193 = (x821+(x822!=(x823|x824)));

    if (t193 != 2) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x825 = -1;
	int16_t x826 = 705;
	int8_t x827 = INT8_MAX;
	uint16_t x828 = UINT16_MAX;
	volatile int32_t t194 = 0;

    t194 = (x825+(x826!=(x827|x828)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x830 = INT32_MIN;
	uint64_t x831 = UINT64_MAX;
	uint16_t x832 = 69U;
	volatile int32_t t195 = 616;

    t195 = (x829+(x830!=(x831|x832)));

    if (t195 != 41) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x834 = INT8_MIN;
	uint16_t x835 = 3234U;
	uint16_t x836 = 19021U;
	volatile int32_t t196 = -61;

    t196 = (x833+(x834!=(x835|x836)));

    if (t196 != -127) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x842 = INT16_MIN;
	uint32_t x843 = 25603U;
	static uint64_t x844 = 132553473LLU;
	static uint32_t t197 = 239489U;

    t197 = (x841+(x842!=(x843|x844)));

    if (t197 != 222638U) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x845 = 32;
	uint16_t x847 = UINT16_MAX;
	int16_t x848 = INT16_MIN;
	int32_t t198 = -1826;

    t198 = (x845+(x846!=(x847|x848)));

    if (t198 != 32) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x849 = INT8_MIN;
	int32_t x850 = INT32_MIN;
	static volatile int16_t x851 = INT16_MIN;
	int32_t t199 = 201426;

    t199 = (x849+(x850!=(x851|x852)));

    if (t199 != -127) { NG(); } else { ; }
	
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



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

static volatile int32_t t0 = 44;
int32_t x9 = 114;
volatile int32_t t2 = -33;
uint8_t x18 = UINT8_MAX;
int8_t x21 = INT8_MIN;
volatile uint8_t x22 = 85U;
int64_t x28 = INT64_MAX;
int32_t x31 = 18301756;
volatile int32_t x32 = INT32_MIN;
int32_t x35 = -135976624;
static int16_t x40 = -1;
int8_t x41 = 20;
volatile int32_t t10 = -29797;
int16_t x58 = 2795;
uint16_t x59 = 2U;
volatile int8_t x60 = -1;
uint16_t x65 = 10204U;
int32_t x67 = 249;
volatile uint8_t x68 = UINT8_MAX;
static volatile int64_t x73 = INT64_MIN;
uint64_t x79 = 27648LLU;
int64_t x80 = INT64_MIN;
int64_t t19 = 174929LL;
int8_t x81 = INT8_MIN;
static volatile int8_t x82 = INT8_MAX;
int64_t x84 = INT64_MIN;
volatile uint8_t x89 = 3U;
int64_t x90 = INT64_MIN;
volatile uint64_t x93 = 2479896812LLU;
volatile int16_t x94 = 7776;
static volatile int32_t t23 = -1;
int64_t x97 = -1LL;
uint32_t x99 = 12U;
static int32_t x102 = 2;
uint32_t x103 = UINT32_MAX;
int32_t t26 = -30;
volatile int16_t x109 = INT16_MAX;
static uint64_t x113 = 3033LLU;
static uint16_t x118 = UINT16_MAX;
int8_t x131 = INT8_MAX;
uint8_t x132 = UINT8_MAX;
int16_t x137 = -1;
int64_t x138 = 284504937317526664LL;
int8_t x141 = INT8_MAX;
int32_t x152 = -1075;
int8_t x155 = 0;
static int16_t x156 = 6353;
uint8_t x159 = 49U;
volatile int32_t x160 = INT32_MIN;
int16_t x163 = 1;
static int32_t x165 = -6;
static int32_t x166 = INT32_MIN;
int16_t x167 = -1;
int32_t x169 = -1;
int16_t x170 = -15683;
static int16_t x174 = -1;
static uint32_t x176 = UINT32_MAX;
int32_t x182 = -89;
volatile int64_t x188 = INT64_MIN;
int16_t x195 = 5217;
int16_t x196 = 50;
static volatile uint64_t x202 = UINT64_MAX;
volatile uint16_t x206 = 1689U;
volatile uint16_t x208 = 0U;
static int64_t x211 = -1LL;
volatile int32_t x215 = 3460;
volatile int64_t t53 = 266LL;
volatile int8_t x234 = INT8_MAX;
int8_t x235 = 0;
static volatile int32_t t58 = 419;
volatile uint64_t x237 = UINT64_MAX;
uint16_t x241 = UINT16_MAX;
volatile int32_t t62 = -8047;
int64_t x259 = 127323340389115LL;
int32_t x269 = 115;
volatile uint64_t t67 = 1901251LLU;
int16_t x273 = 927;
static volatile uint64_t x276 = 13LLU;
uint64_t x282 = 403452349352425LLU;
static uint16_t x283 = 0U;
static uint16_t x284 = UINT16_MAX;
int64_t t71 = -38328LL;
int64_t t73 = 3502700081217171608LL;
int64_t x301 = INT64_MAX;
int8_t x308 = INT8_MIN;
int16_t x311 = INT16_MAX;
uint8_t x312 = 43U;
uint8_t x317 = UINT8_MAX;
uint32_t x319 = UINT32_MAX;
static int8_t x322 = INT8_MIN;
static uint8_t x330 = UINT8_MAX;
int64_t x332 = 13189071913LL;
volatile int64_t t82 = 6179131174431LL;
volatile int8_t x333 = INT8_MAX;
static volatile int32_t x345 = -45;
int32_t t88 = 1;
volatile uint32_t t89 = 59694485U;
int8_t x362 = INT8_MIN;
static uint64_t t92 = 1071825318607872799LLU;
int64_t x374 = INT64_MIN;
int16_t x376 = -611;
int16_t x378 = -806;
uint8_t x381 = 15U;
uint16_t x382 = 7969U;
int16_t x391 = -1;
int32_t x393 = -1;
int32_t x405 = 2971019;
uint64_t t101 = 52843LLU;
int64_t x412 = INT64_MIN;
int32_t x415 = INT32_MAX;
static volatile int32_t t103 = 5;
int64_t t105 = -10730180648112169LL;
uint32_t x425 = 4U;
int32_t t107 = -202981;
volatile uint32_t x440 = UINT32_MAX;
int16_t x443 = INT16_MIN;
uint64_t x457 = 94LLU;
int16_t x459 = INT16_MIN;
int32_t x461 = 29543591;
static int8_t x467 = INT8_MAX;
volatile int16_t x473 = 11882;
uint16_t x475 = 0U;
int64_t x476 = 94960282LL;
int16_t x479 = INT16_MIN;
static int8_t x480 = INT8_MIN;
int8_t x482 = 2;
int32_t t120 = 204268;
static volatile int32_t t121 = 6857;
int32_t x498 = -1;
uint32_t x502 = 188263U;
volatile int32_t t125 = 129;
int8_t x507 = INT8_MIN;
uint64_t x509 = 1LLU;
int32_t x514 = INT32_MAX;
int32_t t129 = 0;
uint64_t x522 = UINT64_MAX;
int8_t x523 = -1;
volatile int64_t x526 = INT64_MIN;
volatile int64_t x527 = INT64_MAX;
int8_t x528 = 0;
int16_t x529 = INT16_MIN;
int64_t x532 = -59117579358LL;
int64_t t132 = -2018619066274541LL;
uint64_t x534 = UINT64_MAX;
int16_t x538 = -56;
int32_t t136 = -136638295;
uint16_t x549 = UINT16_MAX;
int8_t x552 = INT8_MIN;
int64_t x560 = INT64_MIN;
int16_t x566 = INT16_MAX;
volatile int64_t x567 = INT64_MAX;
volatile uint8_t x573 = UINT8_MAX;
int32_t x582 = INT32_MIN;
uint64_t x588 = 117565231423LLU;
uint16_t x593 = 16790U;
int8_t x596 = -1;
int32_t t148 = 56;
static int32_t x600 = INT32_MIN;
int32_t x601 = INT32_MIN;
volatile int32_t x604 = INT32_MIN;
static volatile int32_t t156 = 45;
static int16_t x629 = -1;
int16_t x632 = -2826;
volatile uint64_t x633 = UINT64_MAX;
int32_t x634 = INT32_MIN;
volatile int64_t x636 = 92913586LL;
volatile int32_t x638 = -10;
int32_t t160 = 120;
static int16_t x647 = INT16_MIN;
int32_t x648 = 63786925;
volatile int32_t t161 = 0;
static volatile int32_t x651 = INT32_MAX;
int8_t x655 = INT8_MIN;
uint16_t x658 = 14122U;
uint32_t x662 = 1645551054U;
volatile int64_t x665 = INT64_MAX;
volatile int16_t x669 = INT16_MIN;
volatile int32_t x674 = INT32_MIN;
uint64_t x677 = UINT64_MAX;
uint8_t x678 = UINT8_MAX;
int16_t x680 = INT16_MIN;
static int64_t x682 = -2LL;
int64_t x683 = INT64_MIN;
uint8_t x685 = UINT8_MAX;
uint64_t x686 = 231295247226139938LLU;
int32_t t171 = -41;
uint8_t x693 = 1U;
volatile uint64_t x698 = UINT64_MAX;
volatile uint64_t x700 = UINT64_MAX;
static volatile int8_t x701 = 7;
uint16_t x709 = UINT16_MAX;
int16_t x711 = -1;
uint32_t x713 = 1804758293U;
volatile int16_t x715 = INT16_MIN;
uint32_t t178 = 777U;
int8_t x719 = INT8_MAX;
static volatile int32_t t179 = -12370;
int32_t x722 = INT32_MIN;
uint16_t x723 = 6U;
int32_t x727 = -7872829;
volatile uint32_t t181 = 54U;
volatile int32_t x729 = INT32_MIN;
static uint32_t x730 = 423U;
volatile uint8_t x734 = 1U;
volatile uint32_t t184 = 25201987U;
uint64_t x742 = 1326865042923LLU;
static int16_t x751 = 29;
volatile int32_t t187 = 53014083;
static uint32_t x753 = UINT32_MAX;
volatile int32_t t188 = 3;
static volatile int32_t t193 = 6102;
int32_t x778 = -872538992;
int32_t x780 = INT32_MAX;
volatile uint8_t x783 = 3U;
int8_t x793 = 0;
uint8_t x796 = 1U;
int8_t x798 = 1;
int64_t x799 = INT64_MIN;
uint64_t t199 = 6617068LLU;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	static volatile uint16_t x2 = 0U;
	volatile int32_t x3 = INT32_MIN;
	int8_t x4 = INT8_MIN;

    t0 = ((x1==(x2^x3))&x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 2753U;
	uint32_t x6 = 27301437U;
	int32_t x7 = INT32_MAX;
	volatile int32_t x8 = INT32_MIN;
	static volatile int32_t t1 = 21468;

    t1 = ((x5==(x6^x7))&x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x10 = INT16_MAX;
	int32_t x11 = INT32_MIN;
	static uint8_t x12 = 19U;

    t2 = ((x9==(x10^x11))&x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = 1U;
	static uint8_t x14 = UINT8_MAX;
	int8_t x15 = 52;
	uint64_t x16 = 2144389813311LLU;
	static volatile uint64_t t3 = 94582LLU;

    t3 = ((x13==(x14^x15))&x16);

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MAX;
	int64_t x19 = INT64_MAX;
	int32_t x20 = -1;
	volatile int32_t t4 = -4283;

    t4 = ((x17==(x18^x19))&x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x23 = 11;
	int64_t x24 = -665038788323234LL;
	int64_t t5 = -9516349765LL;

    t5 = ((x21==(x22^x23))&x24);

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x25 = INT16_MAX;
	int8_t x26 = -3;
	int8_t x27 = 1;
	int64_t t6 = 82488LL;

    t6 = ((x25==(x26^x27))&x28);

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = INT16_MIN;
	int32_t x30 = -1;
	volatile int32_t t7 = 380241;

    t7 = ((x29==(x30^x31))&x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x33 = 1651038;
	uint8_t x34 = 7U;
	static uint32_t x36 = 156U;
	uint32_t t8 = 940290672U;

    t8 = ((x33==(x34^x35))&x36);

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x37 = UINT8_MAX;
	volatile uint64_t x38 = UINT64_MAX;
	int8_t x39 = INT8_MIN;
	int32_t t9 = -50990;

    t9 = ((x37==(x38^x39))&x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x42 = INT8_MAX;
	int16_t x43 = INT16_MAX;
	volatile int8_t x44 = INT8_MIN;

    t10 = ((x41==(x42^x43))&x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = -122;
	volatile int8_t x46 = INT8_MAX;
	int8_t x47 = 3;
	int16_t x48 = INT16_MIN;
	int32_t t11 = -595406;

    t11 = ((x45==(x46^x47))&x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x49 = UINT8_MAX;
	uint32_t x50 = 254839197U;
	int32_t x51 = INT32_MAX;
	uint32_t x52 = 1U;
	uint32_t t12 = 6096U;

    t12 = ((x49==(x50^x51))&x52);

    if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = -5585;
	uint64_t x54 = 18666859LLU;
	uint16_t x55 = UINT16_MAX;
	volatile int64_t x56 = INT64_MAX;
	int64_t t13 = 421832256LL;

    t13 = ((x53==(x54^x55))&x56);

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile uint32_t x57 = UINT32_MAX;
	static int32_t t14 = -2559800;

    t14 = ((x57==(x58^x59))&x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x61 = 8U;
	uint8_t x62 = 2U;
	int32_t x63 = 1823;
	uint8_t x64 = 2U;
	volatile int32_t t15 = -165309532;

    t15 = ((x61==(x62^x63))&x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x66 = 7U;
	int32_t t16 = -13497;

    t16 = ((x65==(x66^x67))&x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x69 = INT8_MIN;
	int32_t x70 = INT32_MIN;
	int64_t x71 = -99882LL;
	volatile int16_t x72 = -1;
	volatile int32_t t17 = -1;

    t17 = ((x69==(x70^x71))&x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x74 = 11265018LL;
	int16_t x75 = INT16_MIN;
	static volatile uint32_t x76 = 15392U;
	volatile uint32_t t18 = 244484442U;

    t18 = ((x73==(x74^x75))&x76);

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x77 = -32846681;
	int8_t x78 = -27;

    t19 = ((x77==(x78^x79))&x80);

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint32_t x83 = 2598U;
	volatile int64_t t20 = 36769134253827LL;

    t20 = ((x81==(x82^x83))&x84);

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = -1;
	int64_t x86 = -1LL;
	int64_t x87 = -6776358822308LL;
	static int64_t x88 = -33055970463818306LL;
	volatile int64_t t21 = -875010993290955885LL;

    t21 = ((x85==(x86^x87))&x88);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x91 = UINT16_MAX;
	int64_t x92 = INT64_MIN;
	volatile int64_t t22 = -26739851LL;

    t22 = ((x89==(x90^x91))&x92);

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x95 = 5;
	static int16_t x96 = 2017;

    t23 = ((x93==(x94^x95))&x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int32_t x98 = -29773;
	int64_t x100 = -1LL;
	volatile int64_t t24 = 32754861995LL;

    t24 = ((x97==(x98^x99))&x100);

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x101 = UINT64_MAX;
	volatile int8_t x104 = INT8_MAX;
	static int32_t t25 = 34735;

    t25 = ((x101==(x102^x103))&x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = -12363LL;
	int8_t x106 = 8;
	volatile uint16_t x107 = 1400U;
	uint8_t x108 = UINT8_MAX;

    t26 = ((x105==(x106^x107))&x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int8_t x110 = 47;
	int16_t x111 = -6;
	int32_t x112 = INT32_MIN;
	static volatile int32_t t27 = 44715408;

    t27 = ((x109==(x110^x111))&x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x114 = 1;
	int16_t x115 = INT16_MIN;
	int32_t x116 = INT32_MAX;
	volatile int32_t t28 = 150;

    t28 = ((x113==(x114^x115))&x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int8_t x117 = 0;
	uint64_t x119 = UINT64_MAX;
	uint32_t x120 = 58246U;
	uint32_t t29 = 540263U;

    t29 = ((x117==(x118^x119))&x120);

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = -1;
	uint8_t x122 = UINT8_MAX;
	uint64_t x123 = 1732LLU;
	volatile int16_t x124 = -1;
	int32_t t30 = 64826;

    t30 = ((x121==(x122^x123))&x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = INT32_MIN;
	uint64_t x126 = UINT64_MAX;
	int8_t x127 = INT8_MIN;
	volatile uint16_t x128 = 25476U;
	int32_t t31 = 163354938;

    t31 = ((x125==(x126^x127))&x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = INT32_MIN;
	int16_t x130 = -1;
	int32_t t32 = -494;

    t32 = ((x129==(x130^x131))&x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint8_t x133 = UINT8_MAX;
	volatile uint64_t x134 = 8022LLU;
	uint32_t x135 = UINT32_MAX;
	uint32_t x136 = UINT32_MAX;
	volatile uint32_t t33 = 60503247U;

    t33 = ((x133==(x134^x135))&x136);

    if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint16_t x139 = 13U;
	int32_t x140 = 8899;
	static volatile int32_t t34 = 31366;

    t34 = ((x137==(x138^x139))&x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x142 = 2U;
	volatile int16_t x143 = INT16_MIN;
	volatile int16_t x144 = INT16_MIN;
	volatile int32_t t35 = 723;

    t35 = ((x141==(x142^x143))&x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint64_t x145 = 546007LLU;
	static volatile int16_t x146 = -1;
	volatile uint16_t x147 = UINT16_MAX;
	int32_t x148 = -1;
	volatile int32_t t36 = -71;

    t36 = ((x145==(x146^x147))&x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x149 = INT8_MIN;
	int16_t x150 = INT16_MAX;
	static int32_t x151 = -217;
	static int32_t t37 = -62646;

    t37 = ((x149==(x150^x151))&x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x153 = INT64_MIN;
	uint16_t x154 = 509U;
	volatile int32_t t38 = 11791369;

    t38 = ((x153==(x154^x155))&x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = INT32_MIN;
	int16_t x158 = -1;
	static volatile int32_t t39 = -24;

    t39 = ((x157==(x158^x159))&x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = INT32_MIN;
	int32_t x162 = -1;
	int8_t x164 = 12;
	volatile int32_t t40 = 3;

    t40 = ((x161==(x162^x163))&x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x168 = INT64_MIN;
	int64_t t41 = -399493LL;

    t41 = ((x165==(x166^x167))&x168);

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x171 = INT32_MIN;
	static uint32_t x172 = UINT32_MAX;
	uint32_t t42 = 31U;

    t42 = ((x169==(x170^x171))&x172);

    if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint32_t x173 = 12U;
	static int32_t x175 = INT32_MAX;
	volatile uint32_t t43 = 39U;

    t43 = ((x173==(x174^x175))&x176);

    if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = INT8_MAX;
	int16_t x178 = -1;
	uint32_t x179 = UINT32_MAX;
	int32_t x180 = -1;
	int32_t t44 = 3;

    t44 = ((x177==(x178^x179))&x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = 304LL;
	int16_t x183 = -1;
	volatile int8_t x184 = INT8_MIN;
	volatile int32_t t45 = 308868;

    t45 = ((x181==(x182^x183))&x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x185 = 101865937649LLU;
	volatile int16_t x186 = 275;
	volatile int16_t x187 = INT16_MIN;
	volatile int64_t t46 = -1567498114547813LL;

    t46 = ((x185==(x186^x187))&x188);

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint32_t x189 = UINT32_MAX;
	int8_t x190 = INT8_MAX;
	volatile uint8_t x191 = UINT8_MAX;
	volatile int32_t x192 = 3;
	int32_t t47 = -3867;

    t47 = ((x189==(x190^x191))&x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x193 = -1;
	uint64_t x194 = UINT64_MAX;
	int32_t t48 = 159477614;

    t48 = ((x193==(x194^x195))&x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = -1;
	int16_t x198 = -324;
	volatile uint64_t x199 = 801261997LLU;
	static int32_t x200 = INT32_MIN;
	int32_t t49 = 464986;

    t49 = ((x197==(x198^x199))&x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = -13;
	volatile int32_t x203 = 7515746;
	static int16_t x204 = INT16_MIN;
	volatile int32_t t50 = 12;

    t50 = ((x201==(x202^x203))&x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile uint64_t x205 = 30554474LLU;
	uint32_t x207 = 886987139U;
	volatile int32_t t51 = -115328;

    t51 = ((x205==(x206^x207))&x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = 3716;
	int32_t x210 = -1;
	static uint64_t x212 = UINT64_MAX;
	uint64_t t52 = 138LLU;

    t52 = ((x209==(x210^x211))&x212);

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x213 = 4355437598901195LLU;
	static int16_t x214 = 4;
	volatile int64_t x216 = INT64_MIN;

    t53 = ((x213==(x214^x215))&x216);

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x217 = UINT8_MAX;
	static int64_t x218 = -2608644LL;
	uint32_t x219 = UINT32_MAX;
	int32_t x220 = -1;
	int32_t t54 = -440392649;

    t54 = ((x217==(x218^x219))&x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x221 = -397242049154003752LL;
	volatile uint16_t x222 = UINT16_MAX;
	volatile int16_t x223 = -20;
	uint32_t x224 = 395624U;
	static volatile uint32_t t55 = 1841126U;

    t55 = ((x221==(x222^x223))&x224);

    if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x225 = INT64_MIN;
	int16_t x226 = 1;
	int8_t x227 = INT8_MIN;
	uint64_t x228 = 148930432406LLU;
	volatile uint64_t t56 = 275780223LLU;

    t56 = ((x225==(x226^x227))&x228);

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x229 = -142459691360LL;
	uint16_t x230 = UINT16_MAX;
	volatile int32_t x231 = 1;
	uint64_t x232 = 2LLU;
	uint64_t t57 = 138118965895150055LLU;

    t57 = ((x229==(x230^x231))&x232);

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = INT32_MIN;
	static int16_t x236 = 3902;

    t58 = ((x233==(x234^x235))&x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x238 = -1;
	static volatile int16_t x239 = INT16_MAX;
	static uint16_t x240 = 105U;
	static int32_t t59 = 871852238;

    t59 = ((x237==(x238^x239))&x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x242 = -6;
	int16_t x243 = -1;
	int16_t x244 = INT16_MIN;
	int32_t t60 = -19018;

    t60 = ((x241==(x242^x243))&x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x245 = 5330LLU;
	static volatile uint8_t x246 = UINT8_MAX;
	int64_t x247 = INT64_MIN;
	static int8_t x248 = INT8_MIN;
	int32_t t61 = -1;

    t61 = ((x245==(x246^x247))&x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x249 = 7U;
	uint16_t x250 = UINT16_MAX;
	uint8_t x251 = UINT8_MAX;
	int8_t x252 = INT8_MIN;

    t62 = ((x249==(x250^x251))&x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x253 = 111U;
	int64_t x254 = -2454673LL;
	volatile uint16_t x255 = 73U;
	int32_t x256 = -10713383;
	volatile int32_t t63 = -1266323;

    t63 = ((x253==(x254^x255))&x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x257 = INT32_MAX;
	volatile int8_t x258 = INT8_MIN;
	uint64_t x260 = 23023428LLU;
	uint64_t t64 = 343330486LLU;

    t64 = ((x257==(x258^x259))&x260);

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x261 = -1;
	int16_t x262 = INT16_MIN;
	uint32_t x263 = 1670274U;
	volatile int32_t x264 = INT32_MAX;
	int32_t t65 = -239602;

    t65 = ((x261==(x262^x263))&x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = INT64_MIN;
	int64_t x266 = INT64_MIN;
	uint64_t x267 = 5723039LLU;
	static int16_t x268 = INT16_MIN;
	volatile int32_t t66 = 9503782;

    t66 = ((x265==(x266^x267))&x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x270 = 971369159;
	volatile uint8_t x271 = 11U;
	uint64_t x272 = 11792800LLU;

    t67 = ((x269==(x270^x271))&x272);

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x274 = -1;
	static int8_t x275 = INT8_MIN;
	volatile uint64_t t68 = 3140927LLU;

    t68 = ((x273==(x274^x275))&x276);

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint64_t x277 = 14LLU;
	static int16_t x278 = INT16_MIN;
	static int64_t x279 = INT64_MIN;
	volatile int8_t x280 = 0;
	int32_t t69 = 37;

    t69 = ((x277==(x278^x279))&x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x281 = INT32_MIN;
	int32_t t70 = -132685218;

    t70 = ((x281==(x282^x283))&x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = -683696LL;
	static int64_t x286 = 7244839155525239LL;
	uint16_t x287 = UINT16_MAX;
	int64_t x288 = 1307556729142LL;

    t71 = ((x285==(x286^x287))&x288);

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = INT32_MIN;
	volatile uint8_t x290 = 29U;
	int16_t x291 = INT16_MIN;
	uint16_t x292 = 92U;
	static volatile int32_t t72 = 6;

    t72 = ((x289==(x290^x291))&x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = 20;
	volatile int32_t x294 = -12;
	int64_t x295 = INT64_MIN;
	int64_t x296 = INT64_MIN;

    t73 = ((x293==(x294^x295))&x296);

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x297 = 5U;
	volatile uint16_t x298 = 273U;
	volatile int8_t x299 = -30;
	int16_t x300 = -11122;
	volatile int32_t t74 = 20369855;

    t74 = ((x297==(x298^x299))&x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint64_t x302 = 13206417604714321LLU;
	static uint16_t x303 = UINT16_MAX;
	uint8_t x304 = UINT8_MAX;
	int32_t t75 = 6400202;

    t75 = ((x301==(x302^x303))&x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x305 = INT32_MIN;
	int32_t x306 = -1315555;
	uint8_t x307 = UINT8_MAX;
	static int32_t t76 = 24066;

    t76 = ((x305==(x306^x307))&x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = INT32_MIN;
	uint16_t x310 = 963U;
	static volatile int32_t t77 = -625;

    t77 = ((x309==(x310^x311))&x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x313 = UINT16_MAX;
	int64_t x314 = -1LL;
	int8_t x315 = INT8_MAX;
	int16_t x316 = INT16_MAX;
	volatile int32_t t78 = 29570;

    t78 = ((x313==(x314^x315))&x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x318 = INT8_MAX;
	static volatile int32_t x320 = INT32_MIN;
	int32_t t79 = -788863438;

    t79 = ((x317==(x318^x319))&x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x321 = UINT64_MAX;
	int64_t x323 = INT64_MIN;
	static int16_t x324 = INT16_MIN;
	volatile int32_t t80 = -852;

    t80 = ((x321==(x322^x323))&x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x325 = -1;
	static volatile int16_t x326 = INT16_MIN;
	int8_t x327 = 2;
	int64_t x328 = INT64_MIN;
	volatile int64_t t81 = 295769175LL;

    t81 = ((x325==(x326^x327))&x328);

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x329 = 755U;
	static int32_t x331 = -1;

    t82 = ((x329==(x330^x331))&x332);

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x334 = -2;
	int64_t x335 = INT64_MIN;
	static uint32_t x336 = UINT32_MAX;
	volatile uint32_t t83 = 7U;

    t83 = ((x333==(x334^x335))&x336);

    if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = -7;
	static int8_t x338 = -1;
	int32_t x339 = 991653100;
	int8_t x340 = INT8_MIN;
	volatile int32_t t84 = -387;

    t84 = ((x337==(x338^x339))&x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x341 = INT16_MIN;
	int64_t x342 = INT64_MAX;
	volatile uint8_t x343 = UINT8_MAX;
	int32_t x344 = INT32_MAX;
	int32_t t85 = -32171129;

    t85 = ((x341==(x342^x343))&x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x346 = INT64_MAX;
	volatile int64_t x347 = 434535495657LL;
	static int16_t x348 = INT16_MIN;
	volatile int32_t t86 = -31632;

    t86 = ((x345==(x346^x347))&x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x349 = 128782817;
	int64_t x350 = INT64_MIN;
	uint16_t x351 = 2U;
	static int32_t x352 = -3936;
	static int32_t t87 = 1;

    t87 = ((x349==(x350^x351))&x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x353 = -1;
	int64_t x354 = INT64_MIN;
	int64_t x355 = -1097867750LL;
	uint16_t x356 = UINT16_MAX;

    t88 = ((x353==(x354^x355))&x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x357 = 67040931634496180LLU;
	int16_t x358 = INT16_MIN;
	int8_t x359 = INT8_MAX;
	uint32_t x360 = 502150U;

    t89 = ((x357==(x358^x359))&x360);

    if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x361 = INT16_MAX;
	uint32_t x363 = 10671976U;
	uint8_t x364 = UINT8_MAX;
	int32_t t90 = -2261;

    t90 = ((x361==(x362^x363))&x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x365 = 3U;
	int8_t x366 = 17;
	int64_t x367 = INT64_MAX;
	uint8_t x368 = 23U;
	int32_t t91 = 1796944;

    t91 = ((x365==(x366^x367))&x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x369 = -470521;
	uint64_t x370 = 2649LLU;
	int64_t x371 = -1LL;
	uint64_t x372 = UINT64_MAX;

    t92 = ((x369==(x370^x371))&x372);

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = INT16_MIN;
	uint8_t x375 = 3U;
	int32_t t93 = -64992;

    t93 = ((x373==(x374^x375))&x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x377 = INT8_MIN;
	volatile uint64_t x379 = 764114382LLU;
	int8_t x380 = -1;
	volatile int32_t t94 = -16124914;

    t94 = ((x377==(x378^x379))&x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x383 = 0U;
	int64_t x384 = INT64_MIN;
	static int64_t t95 = 7846386616LL;

    t95 = ((x381==(x382^x383))&x384);

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x385 = 1U;
	volatile int8_t x386 = -1;
	volatile int32_t x387 = INT32_MIN;
	static int64_t x388 = 109566331LL;
	static volatile int64_t t96 = 23074361481LL;

    t96 = ((x385==(x386^x387))&x388);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint64_t x389 = UINT64_MAX;
	int8_t x390 = -1;
	static uint8_t x392 = 15U;
	static int32_t t97 = 228;

    t97 = ((x389==(x390^x391))&x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x394 = INT16_MIN;
	volatile int32_t x395 = INT32_MAX;
	int32_t x396 = -1;
	static volatile int32_t t98 = 23122865;

    t98 = ((x393==(x394^x395))&x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x397 = -1LL;
	static uint8_t x398 = 0U;
	int16_t x399 = -15378;
	int16_t x400 = INT16_MIN;
	int32_t t99 = 37908187;

    t99 = ((x397==(x398^x399))&x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = -125636430;
	volatile uint32_t x402 = 19873791U;
	static uint64_t x403 = UINT64_MAX;
	static int64_t x404 = INT64_MAX;
	static volatile int64_t t100 = 19005434557992LL;

    t100 = ((x401==(x402^x403))&x404);

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x406 = 80403712U;
	volatile int16_t x407 = 35;
	uint64_t x408 = 242016LLU;

    t101 = ((x405==(x406^x407))&x408);

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x409 = -19;
	uint16_t x410 = UINT16_MAX;
	static uint32_t x411 = 249847591U;
	int64_t t102 = 7511LL;

    t102 = ((x409==(x410^x411))&x412);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = INT8_MIN;
	int32_t x414 = INT32_MIN;
	uint16_t x416 = UINT16_MAX;

    t103 = ((x413==(x414^x415))&x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x417 = UINT64_MAX;
	int64_t x418 = -1LL;
	static int16_t x419 = 498;
	static uint64_t x420 = UINT64_MAX;
	uint64_t t104 = 153LLU;

    t104 = ((x417==(x418^x419))&x420);

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x421 = UINT8_MAX;
	int16_t x422 = INT16_MIN;
	volatile int16_t x423 = -9375;
	int64_t x424 = -6LL;

    t105 = ((x421==(x422^x423))&x424);

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x426 = UINT8_MAX;
	int64_t x427 = INT64_MIN;
	int16_t x428 = -1;
	static int32_t t106 = 7788474;

    t106 = ((x425==(x426^x427))&x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x429 = INT32_MIN;
	uint32_t x430 = UINT32_MAX;
	uint64_t x431 = 4032LLU;
	int8_t x432 = INT8_MIN;

    t107 = ((x429==(x430^x431))&x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = -683;
	volatile int16_t x434 = INT16_MAX;
	int8_t x435 = INT8_MAX;
	int16_t x436 = -1;
	int32_t t108 = -37;

    t108 = ((x433==(x434^x435))&x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x437 = INT32_MIN;
	volatile int8_t x438 = INT8_MAX;
	int16_t x439 = 4;
	static uint32_t t109 = 2739583U;

    t109 = ((x437==(x438^x439))&x440);

    if (t109 != 0U) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x441 = -1;
	int64_t x442 = INT64_MIN;
	volatile int64_t x444 = INT64_MIN;
	int64_t t110 = 10804558796LL;

    t110 = ((x441==(x442^x443))&x444);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = 8133LL;
	int32_t x446 = -75796008;
	int16_t x447 = -13;
	volatile int16_t x448 = INT16_MAX;
	volatile int32_t t111 = -290420751;

    t111 = ((x445==(x446^x447))&x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x449 = INT16_MAX;
	int32_t x450 = INT32_MIN;
	int16_t x451 = 12446;
	int32_t x452 = -400144522;
	static volatile int32_t t112 = 0;

    t112 = ((x449==(x450^x451))&x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x453 = 0LL;
	int8_t x454 = 0;
	uint16_t x455 = 1536U;
	volatile int64_t x456 = -1LL;
	volatile int64_t t113 = -17904181234719LL;

    t113 = ((x453==(x454^x455))&x456);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint8_t x458 = UINT8_MAX;
	uint64_t x460 = 1961221LLU;
	uint64_t t114 = 7232444934LLU;

    t114 = ((x457==(x458^x459))&x460);

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x462 = INT16_MIN;
	int32_t x463 = -304;
	uint8_t x464 = UINT8_MAX;
	volatile int32_t t115 = 411;

    t115 = ((x461==(x462^x463))&x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint32_t x465 = 918U;
	volatile int16_t x466 = INT16_MAX;
	int32_t x468 = -1;
	static volatile int32_t t116 = -457177128;

    t116 = ((x465==(x466^x467))&x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = -1;
	int16_t x470 = -15209;
	uint32_t x471 = 1919699614U;
	static uint64_t x472 = 1LLU;
	uint64_t t117 = 30034647222973309LLU;

    t117 = ((x469==(x470^x471))&x472);

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x474 = -119874;
	static volatile int64_t t118 = 3656LL;

    t118 = ((x473==(x474^x475))&x476);

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x477 = 36;
	int8_t x478 = -3;
	int32_t t119 = 69358749;

    t119 = ((x477==(x478^x479))&x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x481 = 2U;
	int64_t x483 = INT64_MIN;
	int16_t x484 = INT16_MIN;

    t120 = ((x481==(x482^x483))&x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x485 = 0U;
	int16_t x486 = -1;
	int16_t x487 = -11550;
	int32_t x488 = 60189048;

    t121 = ((x485==(x486^x487))&x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = INT64_MAX;
	volatile int64_t x490 = 1LL;
	volatile int8_t x491 = INT8_MIN;
	int16_t x492 = INT16_MIN;
	static int32_t t122 = -1;

    t122 = ((x489==(x490^x491))&x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x493 = INT32_MAX;
	uint16_t x494 = 1U;
	int32_t x495 = INT32_MAX;
	int16_t x496 = INT16_MAX;
	int32_t t123 = -177472081;

    t123 = ((x493==(x494^x495))&x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x497 = -1LL;
	static int64_t x499 = INT64_MIN;
	uint8_t x500 = 0U;
	volatile int32_t t124 = 26240;

    t124 = ((x497==(x498^x499))&x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x501 = -1LL;
	int64_t x503 = INT64_MIN;
	int8_t x504 = -1;

    t125 = ((x501==(x502^x503))&x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x505 = -274770LL;
	uint8_t x506 = 27U;
	int32_t x508 = -1;
	volatile int32_t t126 = -11997386;

    t126 = ((x505==(x506^x507))&x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x510 = 4;
	uint8_t x511 = 3U;
	static int32_t x512 = -59079170;
	volatile int32_t t127 = -142;

    t127 = ((x509==(x510^x511))&x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x513 = INT32_MIN;
	static uint64_t x515 = UINT64_MAX;
	uint16_t x516 = 4U;
	int32_t t128 = 7;

    t128 = ((x513==(x514^x515))&x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x517 = INT8_MAX;
	int16_t x518 = INT16_MIN;
	int64_t x519 = INT64_MIN;
	static volatile int32_t x520 = -28;

    t129 = ((x517==(x518^x519))&x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint32_t x521 = 376714734U;
	static volatile uint8_t x524 = 0U;
	static int32_t t130 = -1;

    t130 = ((x521==(x522^x523))&x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = INT64_MIN;
	static int32_t t131 = 3;

    t131 = ((x525==(x526^x527))&x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x530 = 3870885LLU;
	int64_t x531 = INT64_MIN;

    t132 = ((x529==(x530^x531))&x532);

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint32_t x533 = 23020589U;
	static int32_t x535 = -1;
	volatile uint16_t x536 = 14U;
	int32_t t133 = -1367;

    t133 = ((x533==(x534^x535))&x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x537 = -1LL;
	static uint64_t x539 = 1564596839612469647LLU;
	volatile uint16_t x540 = 0U;
	volatile int32_t t134 = -31886504;

    t134 = ((x537==(x538^x539))&x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x541 = 1;
	uint8_t x542 = UINT8_MAX;
	static int64_t x543 = -1LL;
	static int8_t x544 = INT8_MAX;
	int32_t t135 = 6787;

    t135 = ((x541==(x542^x543))&x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x545 = UINT64_MAX;
	int32_t x546 = -1;
	int16_t x547 = INT16_MAX;
	int16_t x548 = -102;

    t136 = ((x545==(x546^x547))&x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x550 = -1;
	static uint16_t x551 = 0U;
	volatile int32_t t137 = 102572;

    t137 = ((x549==(x550^x551))&x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x553 = 696894LLU;
	volatile uint8_t x554 = UINT8_MAX;
	int32_t x555 = INT32_MIN;
	uint16_t x556 = UINT16_MAX;
	int32_t t138 = -12196218;

    t138 = ((x553==(x554^x555))&x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = 49118432195467797LL;
	uint16_t x558 = UINT16_MAX;
	int8_t x559 = INT8_MAX;
	int64_t t139 = -305482026109586057LL;

    t139 = ((x557==(x558^x559))&x560);

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x561 = UINT64_MAX;
	int8_t x562 = 43;
	int64_t x563 = INT64_MIN;
	static volatile int32_t x564 = -1;
	volatile int32_t t140 = -888779443;

    t140 = ((x561==(x562^x563))&x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x565 = INT16_MAX;
	int8_t x568 = INT8_MIN;
	volatile int32_t t141 = -15;

    t141 = ((x565==(x566^x567))&x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x569 = -1;
	static int32_t x570 = 6;
	volatile int8_t x571 = 0;
	int16_t x572 = 185;
	int32_t t142 = -473313;

    t142 = ((x569==(x570^x571))&x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x574 = -99;
	int64_t x575 = 179LL;
	int32_t x576 = INT32_MIN;
	int32_t t143 = -4;

    t143 = ((x573==(x574^x575))&x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = 11;
	static int16_t x578 = -632;
	int32_t x579 = INT32_MIN;
	volatile int8_t x580 = INT8_MAX;
	volatile int32_t t144 = 273823;

    t144 = ((x577==(x578^x579))&x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x581 = 1LLU;
	uint16_t x583 = 1226U;
	int8_t x584 = -1;
	static int32_t t145 = 20;

    t145 = ((x581==(x582^x583))&x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x585 = INT8_MIN;
	static int64_t x586 = INT64_MAX;
	uint8_t x587 = 0U;
	volatile uint64_t t146 = 12129105LLU;

    t146 = ((x585==(x586^x587))&x588);

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int8_t x589 = 1;
	uint64_t x590 = 363738610081606LLU;
	uint64_t x591 = 6071883809LLU;
	uint8_t x592 = UINT8_MAX;
	volatile int32_t t147 = -432;

    t147 = ((x589==(x590^x591))&x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x594 = INT8_MIN;
	uint32_t x595 = 1460U;

    t148 = ((x593==(x594^x595))&x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = INT32_MIN;
	uint8_t x598 = 6U;
	volatile int8_t x599 = 5;
	volatile int32_t t149 = -2695;

    t149 = ((x597==(x598^x599))&x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint32_t x602 = UINT32_MAX;
	int8_t x603 = -1;
	int32_t t150 = -3773156;

    t150 = ((x601==(x602^x603))&x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int64_t x605 = -45LL;
	volatile uint32_t x606 = 0U;
	static volatile int16_t x607 = -1;
	static volatile uint64_t x608 = 238904542447077LLU;
	static uint64_t t151 = 0LLU;

    t151 = ((x605==(x606^x607))&x608);

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x609 = 71U;
	volatile int64_t x610 = -1LL;
	static int64_t x611 = INT64_MIN;
	int64_t x612 = INT64_MIN;
	static volatile int64_t t152 = 4929960162LL;

    t152 = ((x609==(x610^x611))&x612);

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x613 = INT8_MIN;
	uint8_t x614 = 27U;
	volatile int64_t x615 = INT64_MIN;
	volatile int32_t x616 = -41554;
	volatile int32_t t153 = 30;

    t153 = ((x613==(x614^x615))&x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x617 = 154LLU;
	int16_t x618 = INT16_MAX;
	uint16_t x619 = 1U;
	int32_t x620 = INT32_MAX;
	int32_t t154 = 6;

    t154 = ((x617==(x618^x619))&x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x621 = INT64_MAX;
	uint16_t x622 = UINT16_MAX;
	int32_t x623 = -1;
	int8_t x624 = INT8_MAX;
	int32_t t155 = -11677390;

    t155 = ((x621==(x622^x623))&x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint16_t x625 = 1U;
	static volatile uint8_t x626 = UINT8_MAX;
	uint64_t x627 = UINT64_MAX;
	uint8_t x628 = 2U;

    t156 = ((x625==(x626^x627))&x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x630 = 107U;
	int32_t x631 = INT32_MAX;
	volatile int32_t t157 = 1118;

    t157 = ((x629==(x630^x631))&x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x635 = 71U;
	int64_t t158 = -21LL;

    t158 = ((x633==(x634^x635))&x636);

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x637 = INT16_MIN;
	static int8_t x639 = INT8_MIN;
	int64_t x640 = -1LL;
	volatile int64_t t159 = -317LL;

    t159 = ((x637==(x638^x639))&x640);

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = 432211359;
	static int8_t x642 = -1;
	int16_t x643 = 13462;
	int16_t x644 = -698;

    t160 = ((x641==(x642^x643))&x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x645 = 24U;
	static uint32_t x646 = UINT32_MAX;

    t161 = ((x645==(x646^x647))&x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x649 = 6349636;
	uint8_t x650 = 7U;
	static int16_t x652 = INT16_MIN;
	int32_t t162 = 343722;

    t162 = ((x649==(x650^x651))&x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint32_t x653 = UINT32_MAX;
	volatile int16_t x654 = -1;
	int8_t x656 = 3;
	static int32_t t163 = 3042554;

    t163 = ((x653==(x654^x655))&x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x657 = UINT64_MAX;
	uint64_t x659 = 27709985447LLU;
	int64_t x660 = -1LL;
	int64_t t164 = 0LL;

    t164 = ((x657==(x658^x659))&x660);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x661 = -1;
	static int32_t x663 = INT32_MIN;
	volatile int16_t x664 = INT16_MIN;
	int32_t t165 = -16056724;

    t165 = ((x661==(x662^x663))&x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x666 = UINT64_MAX;
	int8_t x667 = INT8_MAX;
	int32_t x668 = -1;
	int32_t t166 = -2441380;

    t166 = ((x665==(x666^x667))&x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint64_t x670 = UINT64_MAX;
	int8_t x671 = INT8_MAX;
	uint64_t x672 = 109821517786689LLU;
	uint64_t t167 = 12144LLU;

    t167 = ((x669==(x670^x671))&x672);

    if (t167 != 0LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int32_t x673 = INT32_MAX;
	int16_t x675 = INT16_MAX;
	uint64_t x676 = UINT64_MAX;
	static volatile uint64_t t168 = 1274147817LLU;

    t168 = ((x673==(x674^x675))&x676);

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x679 = 18U;
	int32_t t169 = 16925;

    t169 = ((x677==(x678^x679))&x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int64_t x681 = INT64_MAX;
	int16_t x684 = -1;
	int32_t t170 = -5812;

    t170 = ((x681==(x682^x683))&x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x687 = 844559202LL;
	volatile int16_t x688 = INT16_MAX;

    t171 = ((x685==(x686^x687))&x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x689 = 977U;
	uint16_t x690 = 3918U;
	uint64_t x691 = 112539722LLU;
	int64_t x692 = INT64_MAX;
	volatile int64_t t172 = -25141LL;

    t172 = ((x689==(x690^x691))&x692);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint32_t x694 = UINT32_MAX;
	uint32_t x695 = UINT32_MAX;
	static int16_t x696 = INT16_MAX;
	int32_t t173 = -1;

    t173 = ((x693==(x694^x695))&x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x697 = -3216059214583586048LL;
	uint32_t x699 = 3018U;
	static uint64_t t174 = 2418LLU;

    t174 = ((x697==(x698^x699))&x700);

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x702 = UINT16_MAX;
	uint8_t x703 = 6U;
	int16_t x704 = INT16_MIN;
	int32_t t175 = 136305332;

    t175 = ((x701==(x702^x703))&x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = INT16_MAX;
	uint8_t x706 = UINT8_MAX;
	uint8_t x707 = 105U;
	uint32_t x708 = 2U;
	static uint32_t t176 = 6744U;

    t176 = ((x705==(x706^x707))&x708);

    if (t176 != 0U) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x710 = INT16_MIN;
	int64_t x712 = INT64_MIN;
	int64_t t177 = -16312592908LL;

    t177 = ((x709==(x710^x711))&x712);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile uint32_t x714 = UINT32_MAX;
	uint32_t x716 = UINT32_MAX;

    t178 = ((x713==(x714^x715))&x716);

    if (t178 != 0U) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint32_t x717 = 50U;
	static int8_t x718 = -3;
	uint8_t x720 = 18U;

    t179 = ((x717==(x718^x719))&x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint64_t x721 = UINT64_MAX;
	int32_t x724 = -22917;
	volatile int32_t t180 = -4;

    t180 = ((x721==(x722^x723))&x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x725 = -1;
	int16_t x726 = 3151;
	uint32_t x728 = UINT32_MAX;

    t181 = ((x725==(x726^x727))&x728);

    if (t181 != 0U) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x731 = INT32_MAX;
	int32_t x732 = INT32_MAX;
	int32_t t182 = -467426168;

    t182 = ((x729==(x730^x731))&x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x733 = INT8_MAX;
	volatile int8_t x735 = INT8_MIN;
	uint8_t x736 = 7U;
	int32_t t183 = 19028185;

    t183 = ((x733==(x734^x735))&x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint64_t x737 = 20LLU;
	uint64_t x738 = 2656659736LLU;
	int32_t x739 = INT32_MAX;
	uint32_t x740 = UINT32_MAX;

    t184 = ((x737==(x738^x739))&x740);

    if (t184 != 0U) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint32_t x741 = UINT32_MAX;
	int8_t x743 = -1;
	static int16_t x744 = -1;
	static int32_t t185 = -1546948;

    t185 = ((x741==(x742^x743))&x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = -423048161;
	int8_t x746 = 30;
	uint64_t x747 = 1993022368249827275LLU;
	volatile uint16_t x748 = 6U;
	volatile int32_t t186 = -227;

    t186 = ((x745==(x746^x747))&x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x749 = -1LL;
	static int16_t x750 = -1;
	static uint16_t x752 = 57U;

    t187 = ((x749==(x750^x751))&x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x754 = 0U;
	static uint16_t x755 = 1730U;
	static int8_t x756 = INT8_MAX;

    t188 = ((x753==(x754^x755))&x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x757 = -1;
	volatile int32_t x758 = INT32_MAX;
	int32_t x759 = -1;
	int8_t x760 = INT8_MIN;
	int32_t t189 = -90702005;

    t189 = ((x757==(x758^x759))&x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x761 = -9792971282670841LL;
	uint8_t x762 = 119U;
	uint16_t x763 = UINT16_MAX;
	int64_t x764 = INT64_MAX;
	int64_t t190 = 77886LL;

    t190 = ((x761==(x762^x763))&x764);

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x765 = -1LL;
	int8_t x766 = -1;
	int32_t x767 = -1128;
	int64_t x768 = 1637051151879860895LL;
	volatile int64_t t191 = -1564927509999077611LL;

    t191 = ((x765==(x766^x767))&x768);

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int64_t x769 = 0LL;
	volatile int32_t x770 = 2119090;
	int64_t x771 = INT64_MIN;
	volatile int32_t x772 = INT32_MIN;
	volatile int32_t t192 = 1;

    t192 = ((x769==(x770^x771))&x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint64_t x773 = UINT64_MAX;
	int8_t x774 = INT8_MIN;
	static int64_t x775 = INT64_MIN;
	int8_t x776 = INT8_MIN;

    t193 = ((x773==(x774^x775))&x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x777 = -1;
	volatile uint32_t x779 = UINT32_MAX;
	static int32_t t194 = 5271787;

    t194 = ((x777==(x778^x779))&x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint32_t x781 = UINT32_MAX;
	int16_t x782 = INT16_MIN;
	static volatile uint32_t x784 = 44219U;
	volatile uint32_t t195 = 1522923307U;

    t195 = ((x781==(x782^x783))&x784);

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = 6501LL;
	volatile uint16_t x786 = 6730U;
	int64_t x787 = -1LL;
	uint32_t x788 = 1764636U;
	uint32_t t196 = 847524U;

    t196 = ((x785==(x786^x787))&x788);

    if (t196 != 0U) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x789 = INT32_MAX;
	uint32_t x790 = UINT32_MAX;
	volatile int32_t x791 = INT32_MIN;
	int16_t x792 = 24;
	volatile int32_t t197 = -262;

    t197 = ((x789==(x790^x791))&x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x794 = UINT8_MAX;
	volatile uint16_t x795 = UINT16_MAX;
	volatile int32_t t198 = -59;

    t198 = ((x793==(x794^x795))&x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x797 = 1U;
	static uint64_t x800 = 7103742LLU;

    t199 = ((x797==(x798^x799))&x800);

    if (t199 != 0LLU) { NG(); } else { ; }
	
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


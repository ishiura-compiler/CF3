
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

int64_t x3 = INT64_MAX;
int8_t x6 = INT8_MIN;
int8_t x8 = -1;
int32_t x10 = INT32_MIN;
int64_t x12 = INT64_MAX;
int16_t x20 = -1;
static volatile int64_t x22 = INT64_MIN;
volatile int32_t t5 = 24039792;
static volatile int16_t x34 = 6;
uint16_t x43 = 42U;
static volatile int32_t t10 = 821;
volatile int8_t x49 = INT8_MIN;
int8_t x57 = INT8_MIN;
int8_t x58 = INT8_MIN;
volatile int32_t x70 = INT32_MIN;
int16_t x83 = INT16_MIN;
int32_t t18 = 1;
int32_t t19 = -233;
uint8_t x91 = UINT8_MAX;
int32_t x98 = -1;
static volatile int32_t t22 = 25194;
volatile uint8_t x108 = 0U;
static int32_t x110 = 333426929;
static volatile uint16_t x112 = UINT16_MAX;
static volatile int32_t t27 = 6678;
int16_t x128 = INT16_MIN;
int32_t t30 = -240941444;
static uint16_t x134 = 444U;
int8_t x136 = INT8_MIN;
volatile int8_t x138 = INT8_MIN;
int8_t x140 = INT8_MIN;
volatile int32_t t33 = 22;
int32_t x149 = -1;
int64_t x153 = INT64_MIN;
static int8_t x155 = 0;
uint32_t x165 = UINT32_MAX;
int32_t x167 = -169322111;
volatile int64_t x173 = INT64_MAX;
int32_t x181 = -154143121;
static int16_t x182 = -1;
volatile int64_t t42 = 47265020267703402LL;
int32_t x196 = -1;
int16_t x197 = INT16_MIN;
int32_t t46 = -3564;
uint32_t x220 = UINT32_MAX;
static volatile uint32_t t48 = 116593U;
volatile int32_t x221 = INT32_MAX;
int8_t x223 = 1;
int32_t t49 = -79142;
volatile int64_t x236 = -1LL;
static int32_t x239 = INT32_MAX;
static volatile int32_t t53 = 29549653;
uint64_t x241 = UINT64_MAX;
int8_t x242 = -14;
int8_t x253 = 1;
static int16_t x254 = -1;
static int16_t x257 = -1;
int64_t x262 = INT64_MIN;
static uint8_t x270 = UINT8_MAX;
int64_t x271 = INT64_MIN;
int64_t x273 = INT64_MAX;
int8_t x274 = 21;
uint64_t x282 = UINT64_MAX;
uint8_t x288 = 14U;
int8_t x296 = -1;
volatile int64_t x298 = INT64_MIN;
int64_t x301 = 1571LL;
uint64_t x311 = 3LLU;
volatile int64_t x316 = -1103850819686633LL;
static volatile uint16_t x320 = 2U;
int32_t t74 = 46;
static uint16_t x336 = UINT16_MAX;
static int32_t t75 = -71816029;
int16_t x338 = INT16_MIN;
uint32_t x350 = 1632U;
int32_t t79 = -11740861;
int64_t x357 = -134167502710817LL;
volatile int32_t t80 = 3671;
uint64_t x365 = 6395898800LLU;
uint32_t x366 = 3260U;
uint16_t x369 = 904U;
volatile int16_t x372 = 125;
volatile int32_t t83 = 156556;
volatile int16_t x376 = -1;
int8_t x379 = INT8_MIN;
volatile int64_t x383 = -1574170268595LL;
int64_t x386 = INT64_MIN;
int8_t x395 = -1;
uint32_t x396 = 31U;
uint32_t t89 = 90U;
static int64_t x400 = -83LL;
uint64_t x403 = UINT64_MAX;
int8_t x404 = INT8_MAX;
int16_t x408 = INT16_MIN;
static volatile int32_t t92 = -661585;
int16_t x414 = -12018;
uint16_t x420 = 21379U;
static int32_t x421 = -1;
static volatile uint64_t t101 = 8432887715556857LLU;
int64_t x466 = -1LL;
uint64_t x473 = 141346115549205LLU;
volatile int16_t x474 = INT16_MAX;
static int8_t x477 = INT8_MAX;
static uint64_t x479 = UINT64_MAX;
int16_t x492 = INT16_MIN;
int64_t x494 = INT64_MAX;
uint16_t x500 = 58U;
int16_t x503 = INT16_MIN;
int16_t x507 = INT16_MAX;
static uint64_t x508 = UINT64_MAX;
volatile uint32_t x516 = UINT32_MAX;
static uint16_t x518 = UINT16_MAX;
uint8_t x520 = 10U;
int32_t x522 = INT32_MAX;
static uint32_t x523 = 7022946U;
static volatile int32_t t120 = 192;
uint16_t x546 = UINT16_MAX;
uint16_t x547 = 52U;
int64_t x550 = -5554252146603920LL;
uint64_t x561 = 130409925LLU;
int32_t x563 = -1;
static uint16_t x564 = 7U;
int16_t x565 = INT16_MIN;
int64_t x566 = 133265999733776LL;
static int64_t x567 = INT64_MIN;
int64_t x572 = 243624397372749LL;
static int32_t x573 = -445244;
uint32_t x582 = 45827U;
volatile int32_t t128 = 0;
volatile uint64_t x593 = 3296060156122873LLU;
uint8_t x594 = 0U;
int8_t x596 = -1;
volatile int32_t t132 = -13919;
int32_t x601 = 148061706;
volatile int32_t t134 = -2;
static int8_t x616 = INT8_MIN;
int32_t t137 = 263904;
volatile int32_t t140 = 253;
volatile int64_t x648 = INT64_MAX;
int64_t x650 = INT64_MIN;
int8_t x651 = INT8_MIN;
volatile int16_t x653 = -3;
volatile int16_t x654 = 19;
int8_t x656 = 2;
int32_t x660 = INT32_MAX;
int64_t x661 = INT64_MAX;
int64_t x663 = INT64_MIN;
int8_t x684 = INT8_MIN;
uint16_t x685 = 417U;
static uint32_t x688 = 63716U;
static volatile uint16_t x697 = 10160U;
int64_t x698 = INT64_MIN;
int64_t t155 = -30690850776436LL;
int64_t x717 = -5725411009106842LL;
int8_t x723 = INT8_MIN;
int32_t x727 = 2706;
int16_t x743 = 1742;
static int16_t x747 = INT16_MIN;
static uint8_t x752 = UINT8_MAX;
volatile int32_t t165 = 64508;
int8_t x759 = INT8_MAX;
static int32_t x764 = 848296;
uint64_t x769 = UINT64_MAX;
volatile uint8_t x770 = UINT8_MAX;
int32_t x772 = 64121;
int8_t x773 = 3;
static volatile uint8_t x777 = UINT8_MAX;
int16_t x780 = -1;
int32_t t172 = -78070875;
uint8_t x792 = 33U;
int8_t x796 = 4;
int64_t x817 = -1LL;
int8_t x822 = INT8_MIN;
static volatile int32_t t180 = -12100;
int16_t x833 = -352;
int8_t x835 = INT8_MAX;
int8_t x842 = -1;
volatile int32_t t183 = -37;
static uint64_t x847 = 3652LLU;
int8_t x853 = INT8_MIN;
int32_t x856 = -93;
int32_t t186 = 3712409;
int64_t x862 = -231LL;
int16_t x863 = INT16_MIN;
int64_t t190 = 58827413682805479LL;
uint32_t x875 = UINT32_MAX;
int16_t x880 = INT16_MAX;
static int32_t t192 = -1234800;
uint32_t x882 = UINT32_MAX;
volatile int64_t t193 = -15673LL;
uint16_t x888 = 10U;
int16_t x891 = 2617;
volatile int32_t t195 = -3817447;
volatile uint16_t x896 = UINT16_MAX;
int64_t x897 = INT64_MIN;
static int64_t x899 = 83LL;
int8_t x900 = -1;


void f0(void) {
    	uint8_t x1 = 34U;
	int8_t x2 = INT8_MAX;
	int32_t x4 = -1;
	volatile int32_t t0 = -6;

    t0 = ((x1<=(x2!=x3))-x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint32_t x5 = UINT32_MAX;
	volatile uint16_t x7 = 38U;
	int32_t t1 = -3;

    t1 = ((x5<=(x6!=x7))-x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MAX;
	uint16_t x11 = 9U;
	int64_t t2 = 1313458413783316959LL;

    t2 = ((x9<=(x10!=x11))-x12);

    if (t2 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = 5027;
	static int16_t x14 = -153;
	volatile int32_t x15 = -1;
	uint64_t x16 = 16LLU;
	uint64_t t3 = 12230LLU;

    t3 = ((x13<=(x14!=x15))-x16);

    if (t3 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = 1078;
	uint32_t x18 = 3U;
	int8_t x19 = 2;
	volatile int32_t t4 = 1;

    t4 = ((x17<=(x18!=x19))-x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x21 = 35721191268LL;
	static int64_t x23 = INT64_MIN;
	uint8_t x24 = 1U;

    t5 = ((x21<=(x22!=x23))-x24);

    if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x25 = INT32_MAX;
	int64_t x26 = 8962761237333LL;
	int64_t x27 = 262686LL;
	uint32_t x28 = 239085730U;
	volatile uint32_t t6 = 3U;

    t6 = ((x25<=(x26!=x27))-x28);

    if (t6 != 4055881566U) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x33 = -1952796111751LL;
	volatile int8_t x35 = INT8_MIN;
	uint16_t x36 = UINT16_MAX;
	int32_t t7 = 120371782;

    t7 = ((x33<=(x34!=x35))-x36);

    if (t7 != -65534) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x37 = INT64_MAX;
	uint64_t x38 = UINT64_MAX;
	static volatile int8_t x39 = -1;
	uint64_t x40 = 1679805LLU;
	volatile uint64_t t8 = 141937LLU;

    t8 = ((x37<=(x38!=x39))-x40);

    if (t8 != 18446744073707871811LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x41 = -1;
	static int64_t x42 = INT64_MIN;
	static uint8_t x44 = 3U;
	volatile int32_t t9 = -46631806;

    t9 = ((x41<=(x42!=x43))-x44);

    if (t9 != -2) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint64_t x45 = 235760538LLU;
	int32_t x46 = INT32_MAX;
	volatile int8_t x47 = INT8_MIN;
	int16_t x48 = INT16_MIN;

    t10 = ((x45<=(x46!=x47))-x48);

    if (t10 != 32768) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint16_t x50 = UINT16_MAX;
	uint16_t x51 = 15U;
	uint16_t x52 = UINT16_MAX;
	volatile int32_t t11 = -925112827;

    t11 = ((x49<=(x50!=x51))-x52);

    if (t11 != -65534) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x53 = INT32_MIN;
	int32_t x54 = INT32_MAX;
	uint32_t x55 = 724719262U;
	static volatile int16_t x56 = -903;
	static volatile int32_t t12 = -176;

    t12 = ((x53<=(x54!=x55))-x56);

    if (t12 != 904) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x59 = -1;
	uint8_t x60 = 28U;
	volatile int32_t t13 = 12;

    t13 = ((x57<=(x58!=x59))-x60);

    if (t13 != -27) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x61 = INT8_MIN;
	int8_t x62 = INT8_MIN;
	volatile int16_t x63 = 0;
	int8_t x64 = -1;
	static int32_t t14 = -87260;

    t14 = ((x61<=(x62!=x63))-x64);

    if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x65 = UINT32_MAX;
	int64_t x66 = -1LL;
	uint16_t x67 = 77U;
	int32_t x68 = 409379798;
	volatile int32_t t15 = -42;

    t15 = ((x65<=(x66!=x67))-x68);

    if (t15 != -409379798) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint8_t x69 = 22U;
	uint8_t x71 = 6U;
	uint64_t x72 = 5613479749544939835LLU;
	volatile uint64_t t16 = 1980195973545387192LLU;

    t16 = ((x69<=(x70!=x71))-x72);

    if (t16 != 12833264324164611781LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x77 = INT16_MIN;
	uint8_t x78 = 26U;
	static volatile int64_t x79 = -1LL;
	uint32_t x80 = 1786U;
	uint32_t t17 = 690347U;

    t17 = ((x77<=(x78!=x79))-x80);

    if (t17 != 4294965511U) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x81 = INT32_MIN;
	uint16_t x82 = 284U;
	volatile uint8_t x84 = 0U;

    t18 = ((x81<=(x82!=x83))-x84);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x85 = INT8_MIN;
	static uint8_t x86 = 12U;
	int16_t x87 = INT16_MIN;
	int16_t x88 = INT16_MIN;

    t19 = ((x85<=(x86!=x87))-x88);

    if (t19 != 32769) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x89 = 3U;
	static uint64_t x90 = 125493LLU;
	int64_t x92 = -5237917144LL;
	volatile int64_t t20 = 27447LL;

    t20 = ((x89<=(x90!=x91))-x92);

    if (t20 != 5237917144LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x93 = 106;
	static int32_t x94 = INT32_MIN;
	uint8_t x95 = 11U;
	int32_t x96 = 1;
	int32_t t21 = -1;

    t21 = ((x93<=(x94!=x95))-x96);

    if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x97 = -4943;
	static volatile int8_t x99 = INT8_MIN;
	int16_t x100 = -2;

    t22 = ((x97<=(x98!=x99))-x100);

    if (t22 != 3) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x101 = -3508;
	int64_t x102 = -35445LL;
	int32_t x103 = INT32_MIN;
	static volatile int8_t x104 = 4;
	volatile int32_t t23 = 22;

    t23 = ((x101<=(x102!=x103))-x104);

    if (t23 != -3) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x105 = 45;
	int64_t x106 = 983021874289893LL;
	volatile uint64_t x107 = UINT64_MAX;
	int32_t t24 = 177368927;

    t24 = ((x105<=(x106!=x107))-x108);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x109 = -1;
	volatile int64_t x111 = INT64_MIN;
	int32_t t25 = 817;

    t25 = ((x109<=(x110!=x111))-x112);

    if (t25 != -65534) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x113 = 0;
	int16_t x114 = -191;
	uint64_t x115 = UINT64_MAX;
	uint32_t x116 = UINT32_MAX;
	uint32_t t26 = 368645702U;

    t26 = ((x113<=(x114!=x115))-x116);

    if (t26 != 2U) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x117 = INT32_MAX;
	uint64_t x118 = 473340LLU;
	static int32_t x119 = -20870856;
	int8_t x120 = 41;

    t27 = ((x117<=(x118!=x119))-x120);

    if (t27 != -41) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x121 = INT16_MIN;
	uint8_t x122 = 3U;
	int64_t x123 = INT64_MIN;
	static int16_t x124 = -1;
	int32_t t28 = 46102324;

    t28 = ((x121<=(x122!=x123))-x124);

    if (t28 != 2) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x125 = INT8_MIN;
	int32_t x126 = INT32_MAX;
	int32_t x127 = INT32_MAX;
	int32_t t29 = -423012;

    t29 = ((x125<=(x126!=x127))-x128);

    if (t29 != 32769) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x129 = INT32_MIN;
	uint32_t x130 = 218789124U;
	int16_t x131 = INT16_MIN;
	static int8_t x132 = INT8_MIN;

    t30 = ((x129<=(x130!=x131))-x132);

    if (t30 != 129) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x133 = -1LL;
	volatile uint64_t x135 = 111882933837LLU;
	int32_t t31 = -1315;

    t31 = ((x133<=(x134!=x135))-x136);

    if (t31 != 129) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x137 = -1;
	int8_t x139 = INT8_MIN;
	volatile int32_t t32 = 50;

    t32 = ((x137<=(x138!=x139))-x140);

    if (t32 != 129) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint64_t x141 = UINT64_MAX;
	static int16_t x142 = INT16_MAX;
	int16_t x143 = 1;
	int8_t x144 = -1;

    t33 = ((x141<=(x142!=x143))-x144);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x145 = INT8_MAX;
	volatile uint64_t x146 = 128692049LLU;
	int8_t x147 = -1;
	uint16_t x148 = UINT16_MAX;
	volatile int32_t t34 = 2;

    t34 = ((x145<=(x146!=x147))-x148);

    if (t34 != -65535) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x150 = 50U;
	int64_t x151 = -1LL;
	static int16_t x152 = -37;
	volatile int32_t t35 = -90;

    t35 = ((x149<=(x150!=x151))-x152);

    if (t35 != 38) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x154 = 3;
	volatile int8_t x156 = INT8_MIN;
	volatile int32_t t36 = 244438250;

    t36 = ((x153<=(x154!=x155))-x156);

    if (t36 != 129) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x161 = 3836U;
	int32_t x162 = -802;
	static volatile int16_t x163 = -13577;
	volatile int32_t x164 = -1;
	volatile int32_t t37 = 2779;

    t37 = ((x161<=(x162!=x163))-x164);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x166 = INT32_MIN;
	int8_t x168 = -13;
	int32_t t38 = 15081;

    t38 = ((x165<=(x166!=x167))-x168);

    if (t38 != 13) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint16_t x169 = 961U;
	static int64_t x170 = INT64_MAX;
	uint64_t x171 = 37LLU;
	uint16_t x172 = 229U;
	volatile int32_t t39 = 7915;

    t39 = ((x169<=(x170!=x171))-x172);

    if (t39 != -229) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x174 = INT32_MIN;
	static int8_t x175 = INT8_MIN;
	static volatile int8_t x176 = -2;
	int32_t t40 = 4;

    t40 = ((x173<=(x174!=x175))-x176);

    if (t40 != 2) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x177 = INT32_MIN;
	int8_t x178 = 1;
	uint8_t x179 = 49U;
	static volatile uint64_t x180 = UINT64_MAX;
	static uint64_t t41 = 12396747844169602LLU;

    t41 = ((x177<=(x178!=x179))-x180);

    if (t41 != 2LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x183 = 43714013U;
	int64_t x184 = -1072591174LL;

    t42 = ((x181<=(x182!=x183))-x184);

    if (t42 != 1072591175LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x185 = 3;
	uint32_t x186 = UINT32_MAX;
	uint16_t x187 = 6U;
	volatile int32_t x188 = -1;
	static volatile int32_t t43 = 12397;

    t43 = ((x185<=(x186!=x187))-x188);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x189 = INT8_MAX;
	int32_t x190 = INT32_MIN;
	uint64_t x191 = UINT64_MAX;
	int32_t x192 = -2764;
	volatile int32_t t44 = -2937119;

    t44 = ((x189<=(x190!=x191))-x192);

    if (t44 != 2764) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x193 = INT8_MIN;
	int8_t x194 = 35;
	volatile int32_t x195 = -1;
	int32_t t45 = 0;

    t45 = ((x193<=(x194!=x195))-x196);

    if (t45 != 2) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x198 = 408;
	uint16_t x199 = UINT16_MAX;
	uint8_t x200 = 63U;

    t46 = ((x197<=(x198!=x199))-x200);

    if (t46 != -62) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x201 = INT32_MIN;
	uint64_t x202 = 7615895881LLU;
	int8_t x203 = -1;
	volatile uint64_t x204 = 50206495814624921LLU;
	uint64_t t47 = 273504215980LLU;

    t47 = ((x201<=(x202!=x203))-x204);

    if (t47 != 18396537577894926696LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x217 = -1LL;
	static uint8_t x218 = 55U;
	int32_t x219 = -63377;

    t48 = ((x217<=(x218!=x219))-x220);

    if (t48 != 2U) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x222 = INT16_MIN;
	static int32_t x224 = -17;

    t49 = ((x221<=(x222!=x223))-x224);

    if (t49 != 17) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x225 = INT16_MIN;
	int64_t x226 = -15620926LL;
	static int16_t x227 = INT16_MIN;
	int64_t x228 = -1078738920125LL;
	static int64_t t50 = -928068759516225283LL;

    t50 = ((x225<=(x226!=x227))-x228);

    if (t50 != 1078738920126LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x229 = INT16_MAX;
	int32_t x230 = 57060881;
	static int64_t x231 = 2811948295007750143LL;
	int64_t x232 = -12297LL;
	int64_t t51 = -45LL;

    t51 = ((x229<=(x230!=x231))-x232);

    if (t51 != 12297LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x233 = INT32_MIN;
	int16_t x234 = INT16_MIN;
	int32_t x235 = 1854093;
	static int64_t t52 = 13835LL;

    t52 = ((x233<=(x234!=x235))-x236);

    if (t52 != 2LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint64_t x237 = 7088988LLU;
	volatile int32_t x238 = -1;
	int8_t x240 = 1;

    t53 = ((x237<=(x238!=x239))-x240);

    if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile uint64_t x243 = UINT64_MAX;
	int8_t x244 = -1;
	volatile int32_t t54 = -922;

    t54 = ((x241<=(x242!=x243))-x244);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x245 = -11434;
	int32_t x246 = 126;
	int64_t x247 = 90134LL;
	static uint32_t x248 = UINT32_MAX;
	uint32_t t55 = 31992U;

    t55 = ((x245<=(x246!=x247))-x248);

    if (t55 != 2U) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x249 = 8361U;
	static volatile uint32_t x250 = 2U;
	uint64_t x251 = 128491571664LLU;
	uint8_t x252 = 1U;
	int32_t t56 = 36;

    t56 = ((x249<=(x250!=x251))-x252);

    if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint32_t x255 = UINT32_MAX;
	int8_t x256 = INT8_MAX;
	volatile int32_t t57 = 188279370;

    t57 = ((x253<=(x254!=x255))-x256);

    if (t57 != -127) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x258 = INT8_MAX;
	int32_t x259 = INT32_MIN;
	int16_t x260 = INT16_MIN;
	int32_t t58 = -4049502;

    t58 = ((x257<=(x258!=x259))-x260);

    if (t58 != 32769) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint8_t x261 = 0U;
	volatile int16_t x263 = -10938;
	static uint32_t x264 = 34672U;
	static uint32_t t59 = 61U;

    t59 = ((x261<=(x262!=x263))-x264);

    if (t59 != 4294932625U) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x269 = INT64_MAX;
	int16_t x272 = INT16_MIN;
	int32_t t60 = 2219902;

    t60 = ((x269<=(x270!=x271))-x272);

    if (t60 != 32768) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x275 = INT32_MIN;
	volatile int64_t x276 = -1LL;
	int64_t t61 = 126577LL;

    t61 = ((x273<=(x274!=x275))-x276);

    if (t61 != 1LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x277 = 121U;
	int16_t x278 = INT16_MIN;
	int64_t x279 = -1LL;
	static int8_t x280 = -1;
	volatile int32_t t62 = -423;

    t62 = ((x277<=(x278!=x279))-x280);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x281 = -233211115LL;
	int8_t x283 = INT8_MAX;
	static volatile int16_t x284 = INT16_MAX;
	volatile int32_t t63 = 61190;

    t63 = ((x281<=(x282!=x283))-x284);

    if (t63 != -32766) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x285 = INT64_MAX;
	int16_t x286 = INT16_MIN;
	static volatile int8_t x287 = -1;
	int32_t t64 = -451;

    t64 = ((x285<=(x286!=x287))-x288);

    if (t64 != -14) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x289 = INT8_MIN;
	int64_t x290 = -1LL;
	int8_t x291 = -2;
	static int64_t x292 = 30598284678704LL;
	int64_t t65 = 30589LL;

    t65 = ((x289<=(x290!=x291))-x292);

    if (t65 != -30598284678703LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x293 = 211692627;
	int8_t x294 = INT8_MIN;
	int32_t x295 = INT32_MIN;
	volatile int32_t t66 = -3199043;

    t66 = ((x293<=(x294!=x295))-x296);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint8_t x297 = 27U;
	static volatile int16_t x299 = INT16_MIN;
	uint64_t x300 = UINT64_MAX;
	uint64_t t67 = 43224LLU;

    t67 = ((x297<=(x298!=x299))-x300);

    if (t67 != 1LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x302 = INT8_MIN;
	int16_t x303 = -32;
	int8_t x304 = 11;
	volatile int32_t t68 = -9561316;

    t68 = ((x301<=(x302!=x303))-x304);

    if (t68 != -11) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x309 = INT16_MIN;
	volatile int8_t x310 = INT8_MIN;
	int16_t x312 = INT16_MIN;
	static int32_t t69 = -1016902;

    t69 = ((x309<=(x310!=x311))-x312);

    if (t69 != 32769) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint16_t x313 = 11U;
	int8_t x314 = INT8_MAX;
	uint32_t x315 = 63538501U;
	volatile int64_t t70 = 6140582871177263LL;

    t70 = ((x313<=(x314!=x315))-x316);

    if (t70 != 1103850819686633LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x317 = 3345049U;
	static int16_t x318 = INT16_MAX;
	static int32_t x319 = INT32_MIN;
	static int32_t t71 = 2753307;

    t71 = ((x317<=(x318!=x319))-x320);

    if (t71 != -2) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x321 = INT8_MIN;
	volatile int16_t x322 = 997;
	int16_t x323 = -1;
	static int64_t x324 = -1LL;
	volatile int64_t t72 = -163144204LL;

    t72 = ((x321<=(x322!=x323))-x324);

    if (t72 != 2LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x325 = 37735LLU;
	uint64_t x326 = 13058LLU;
	static volatile int32_t x327 = INT32_MIN;
	static int64_t x328 = -97635290852422LL;
	static volatile int64_t t73 = -350189934206937942LL;

    t73 = ((x325<=(x326!=x327))-x328);

    if (t73 != 97635290852422LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x329 = 47249307LLU;
	int16_t x330 = -1;
	volatile int32_t x331 = -1;
	int32_t x332 = -7497;

    t74 = ((x329<=(x330!=x331))-x332);

    if (t74 != 7497) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x333 = 168518886218LL;
	uint32_t x334 = 3535592U;
	uint32_t x335 = UINT32_MAX;

    t75 = ((x333<=(x334!=x335))-x336);

    if (t75 != -65535) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x337 = 879555869U;
	static uint16_t x339 = UINT16_MAX;
	uint32_t x340 = UINT32_MAX;
	uint32_t t76 = 36U;

    t76 = ((x337<=(x338!=x339))-x340);

    if (t76 != 1U) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x341 = INT16_MIN;
	int16_t x342 = INT16_MAX;
	int32_t x343 = INT32_MIN;
	uint32_t x344 = 21627798U;
	static uint32_t t77 = 4925U;

    t77 = ((x341<=(x342!=x343))-x344);

    if (t77 != 4273339499U) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x345 = 248U;
	int32_t x346 = 427417986;
	int16_t x347 = INT16_MAX;
	int64_t x348 = 40112LL;
	int64_t t78 = -14523434575769LL;

    t78 = ((x345<=(x346!=x347))-x348);

    if (t78 != -40112LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x349 = 485813;
	volatile int8_t x351 = -1;
	int8_t x352 = INT8_MIN;

    t79 = ((x349<=(x350!=x351))-x352);

    if (t79 != 128) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x358 = 10;
	static int64_t x359 = INT64_MIN;
	int16_t x360 = -1;

    t80 = ((x357<=(x358!=x359))-x360);

    if (t80 != 2) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x361 = INT64_MIN;
	static int32_t x362 = INT32_MAX;
	int16_t x363 = INT16_MIN;
	static uint64_t x364 = 0LLU;
	static uint64_t t81 = 3701LLU;

    t81 = ((x361<=(x362!=x363))-x364);

    if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x367 = 5U;
	uint16_t x368 = 2454U;
	int32_t t82 = -406683311;

    t82 = ((x365<=(x366!=x367))-x368);

    if (t82 != -2454) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x370 = INT32_MIN;
	int8_t x371 = INT8_MIN;

    t83 = ((x369<=(x370!=x371))-x372);

    if (t83 != -125) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint32_t x373 = UINT32_MAX;
	int8_t x374 = -2;
	volatile int16_t x375 = INT16_MAX;
	volatile int32_t t84 = -51;

    t84 = ((x373<=(x374!=x375))-x376);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x377 = 1627;
	int64_t x378 = -10058552LL;
	int16_t x380 = -8073;
	volatile int32_t t85 = 3;

    t85 = ((x377<=(x378!=x379))-x380);

    if (t85 != 8073) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x381 = INT64_MAX;
	int32_t x382 = -1;
	volatile uint32_t x384 = UINT32_MAX;
	static uint32_t t86 = 4U;

    t86 = ((x381<=(x382!=x383))-x384);

    if (t86 != 1U) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x385 = INT8_MAX;
	volatile int8_t x387 = -1;
	static uint8_t x388 = 75U;
	volatile int32_t t87 = 52300;

    t87 = ((x385<=(x386!=x387))-x388);

    if (t87 != -75) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x389 = INT64_MIN;
	int16_t x390 = -1;
	static uint16_t x391 = 8074U;
	static uint16_t x392 = 1U;
	volatile int32_t t88 = -2759;

    t88 = ((x389<=(x390!=x391))-x392);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x393 = 2;
	volatile int16_t x394 = INT16_MAX;

    t89 = ((x393<=(x394!=x395))-x396);

    if (t89 != 4294967265U) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x397 = 7495;
	int64_t x398 = INT64_MAX;
	uint32_t x399 = 285U;
	int64_t t90 = 60LL;

    t90 = ((x397<=(x398!=x399))-x400);

    if (t90 != 83LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x401 = INT8_MIN;
	static uint64_t x402 = UINT64_MAX;
	int32_t t91 = 1;

    t91 = ((x401<=(x402!=x403))-x404);

    if (t91 != -126) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x405 = INT8_MIN;
	int16_t x406 = INT16_MIN;
	int16_t x407 = -1;

    t92 = ((x405<=(x406!=x407))-x408);

    if (t92 != 32769) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x409 = 324748128LL;
	int16_t x410 = -7606;
	uint16_t x411 = 48U;
	static uint16_t x412 = 13540U;
	int32_t t93 = 818424;

    t93 = ((x409<=(x410!=x411))-x412);

    if (t93 != -13540) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x413 = UINT64_MAX;
	int16_t x415 = INT16_MIN;
	int8_t x416 = -1;
	volatile int32_t t94 = 22995;

    t94 = ((x413<=(x414!=x415))-x416);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x417 = 18;
	static int32_t x418 = INT32_MAX;
	int32_t x419 = INT32_MAX;
	int32_t t95 = 3;

    t95 = ((x417<=(x418!=x419))-x420);

    if (t95 != -21379) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x422 = 1;
	static volatile int16_t x423 = INT16_MIN;
	uint32_t x424 = 105277721U;
	volatile uint32_t t96 = 217161U;

    t96 = ((x421<=(x422!=x423))-x424);

    if (t96 != 4189689576U) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x425 = INT16_MIN;
	uint8_t x426 = UINT8_MAX;
	volatile int16_t x427 = -26;
	volatile int8_t x428 = -1;
	volatile int32_t t97 = -1;

    t97 = ((x425<=(x426!=x427))-x428);

    if (t97 != 2) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x429 = INT8_MAX;
	int8_t x430 = INT8_MIN;
	int32_t x431 = INT32_MIN;
	volatile int16_t x432 = -9;
	volatile int32_t t98 = 1;

    t98 = ((x429<=(x430!=x431))-x432);

    if (t98 != 9) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x433 = 63333991;
	int64_t x434 = INT64_MIN;
	static volatile uint16_t x435 = 11U;
	int16_t x436 = INT16_MIN;
	int32_t t99 = 543;

    t99 = ((x433<=(x434!=x435))-x436);

    if (t99 != 32768) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x445 = 722LLU;
	uint16_t x446 = UINT16_MAX;
	volatile int16_t x447 = INT16_MAX;
	static int8_t x448 = -1;
	volatile int32_t t100 = -437965235;

    t100 = ((x445<=(x446!=x447))-x448);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x449 = UINT8_MAX;
	int64_t x450 = INT64_MIN;
	volatile int32_t x451 = -1;
	uint64_t x452 = UINT64_MAX;

    t101 = ((x449<=(x450!=x451))-x452);

    if (t101 != 1LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x457 = -1;
	uint64_t x458 = 1174LLU;
	int32_t x459 = -1;
	int16_t x460 = INT16_MIN;
	static volatile int32_t t102 = -201285567;

    t102 = ((x457<=(x458!=x459))-x460);

    if (t102 != 32769) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x461 = INT16_MAX;
	int8_t x462 = INT8_MIN;
	volatile int8_t x463 = -1;
	int32_t x464 = INT32_MAX;
	static volatile int32_t t103 = 268;

    t103 = ((x461<=(x462!=x463))-x464);

    if (t103 != -2147483647) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x465 = INT8_MIN;
	static uint8_t x467 = 2U;
	int32_t x468 = -1;
	volatile int32_t t104 = -35803;

    t104 = ((x465<=(x466!=x467))-x468);

    if (t104 != 2) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x469 = INT64_MIN;
	uint16_t x470 = 156U;
	uint8_t x471 = 43U;
	static int16_t x472 = 228;
	volatile int32_t t105 = 147884;

    t105 = ((x469<=(x470!=x471))-x472);

    if (t105 != -227) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x475 = 9U;
	int64_t x476 = INT64_MAX;
	int64_t t106 = -1935738LL;

    t106 = ((x473<=(x474!=x475))-x476);

    if (t106 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x478 = -1LL;
	volatile uint64_t x480 = UINT64_MAX;
	uint64_t t107 = 140026164597521LLU;

    t107 = ((x477<=(x478!=x479))-x480);

    if (t107 != 1LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint8_t x485 = 7U;
	uint16_t x486 = 20U;
	int32_t x487 = -32268;
	uint32_t x488 = 179U;
	volatile uint32_t t108 = 5U;

    t108 = ((x485<=(x486!=x487))-x488);

    if (t108 != 4294967117U) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile uint32_t x489 = 28714599U;
	volatile int16_t x490 = -10;
	int16_t x491 = -2969;
	static int32_t t109 = -1655502;

    t109 = ((x489<=(x490!=x491))-x492);

    if (t109 != 32768) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x493 = 0U;
	uint64_t x495 = 87625362LLU;
	static volatile int64_t x496 = 3384241040LL;
	int64_t t110 = 5596851141LL;

    t110 = ((x493<=(x494!=x495))-x496);

    if (t110 != -3384241039LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x497 = INT64_MIN;
	int32_t x498 = 351809930;
	uint64_t x499 = 313LLU;
	int32_t t111 = -2143;

    t111 = ((x497<=(x498!=x499))-x500);

    if (t111 != -57) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x501 = 923;
	static volatile int64_t x502 = INT64_MIN;
	static volatile uint8_t x504 = 1U;
	volatile int32_t t112 = 3866;

    t112 = ((x501<=(x502!=x503))-x504);

    if (t112 != -1) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x505 = -1;
	uint8_t x506 = 28U;
	volatile uint64_t t113 = 751143844134LLU;

    t113 = ((x505<=(x506!=x507))-x508);

    if (t113 != 2LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x509 = -1;
	volatile uint64_t x510 = UINT64_MAX;
	uint8_t x511 = 2U;
	int64_t x512 = INT64_MAX;
	int64_t t114 = 257262LL;

    t114 = ((x509<=(x510!=x511))-x512);

    if (t114 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x513 = INT64_MIN;
	int32_t x514 = 14841986;
	int64_t x515 = INT64_MAX;
	uint32_t t115 = 85274924U;

    t115 = ((x513<=(x514!=x515))-x516);

    if (t115 != 2U) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x517 = 102U;
	int8_t x519 = INT8_MIN;
	int32_t t116 = -109245557;

    t116 = ((x517<=(x518!=x519))-x520);

    if (t116 != -10) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x521 = -1;
	int8_t x524 = INT8_MIN;
	int32_t t117 = 1;

    t117 = ((x521<=(x522!=x523))-x524);

    if (t117 != 129) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x529 = -1LL;
	static int32_t x530 = -1;
	static int16_t x531 = 29;
	int16_t x532 = -18;
	volatile int32_t t118 = -11;

    t118 = ((x529<=(x530!=x531))-x532);

    if (t118 != 19) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x533 = -1;
	volatile int16_t x534 = 0;
	int64_t x535 = INT64_MAX;
	int32_t x536 = -1;
	int32_t t119 = 43;

    t119 = ((x533<=(x534!=x535))-x536);

    if (t119 != 2) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x541 = INT16_MIN;
	int64_t x542 = 167111439182370LL;
	uint8_t x543 = UINT8_MAX;
	int16_t x544 = 26;

    t120 = ((x541<=(x542!=x543))-x544);

    if (t120 != -25) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint32_t x545 = 7077627U;
	int8_t x548 = -1;
	volatile int32_t t121 = -54869097;

    t121 = ((x545<=(x546!=x547))-x548);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int32_t x549 = 0;
	volatile int32_t x551 = INT32_MAX;
	int16_t x552 = INT16_MAX;
	volatile int32_t t122 = 1000999198;

    t122 = ((x549<=(x550!=x551))-x552);

    if (t122 != -32766) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x562 = UINT16_MAX;
	static volatile int32_t t123 = 6749;

    t123 = ((x561<=(x562!=x563))-x564);

    if (t123 != -7) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x568 = -1LL;
	volatile int64_t t124 = 20967LL;

    t124 = ((x565<=(x566!=x567))-x568);

    if (t124 != 2LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int32_t x569 = INT32_MIN;
	int8_t x570 = 0;
	uint16_t x571 = UINT16_MAX;
	int64_t t125 = -244307017LL;

    t125 = ((x569<=(x570!=x571))-x572);

    if (t125 != -243624397372748LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x574 = -1;
	static uint64_t x575 = 8362789833530085LLU;
	int16_t x576 = -27;
	static int32_t t126 = -94593143;

    t126 = ((x573<=(x574!=x575))-x576);

    if (t126 != 28) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x577 = INT8_MIN;
	volatile int64_t x578 = INT64_MAX;
	static uint8_t x579 = UINT8_MAX;
	static int64_t x580 = 13173017297LL;
	static volatile int64_t t127 = 1866210594139LL;

    t127 = ((x577<=(x578!=x579))-x580);

    if (t127 != -13173017296LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x581 = -1LL;
	int64_t x583 = INT64_MAX;
	volatile int8_t x584 = -1;

    t128 = ((x581<=(x582!=x583))-x584);

    if (t128 != 2) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x585 = INT16_MIN;
	int8_t x586 = INT8_MIN;
	volatile int64_t x587 = INT64_MIN;
	static int16_t x588 = INT16_MAX;
	volatile int32_t t129 = 13673443;

    t129 = ((x585<=(x586!=x587))-x588);

    if (t129 != -32766) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x589 = INT16_MIN;
	static uint8_t x590 = 3U;
	uint64_t x591 = 4276068096240193LLU;
	int16_t x592 = 2;
	static volatile int32_t t130 = 15227;

    t130 = ((x589<=(x590!=x591))-x592);

    if (t130 != -1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x595 = INT16_MIN;
	static int32_t t131 = -113957;

    t131 = ((x593<=(x594!=x595))-x596);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x597 = INT32_MIN;
	volatile int32_t x598 = 125258368;
	uint64_t x599 = 22618950189287LLU;
	static uint16_t x600 = 42U;

    t132 = ((x597<=(x598!=x599))-x600);

    if (t132 != -41) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x602 = 1;
	static volatile int8_t x603 = INT8_MIN;
	uint64_t x604 = 32990826363LLU;
	uint64_t t133 = 193LLU;

    t133 = ((x601<=(x602!=x603))-x604);

    if (t133 != 18446744040718725253LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x609 = INT8_MAX;
	uint8_t x610 = 19U;
	int16_t x611 = INT16_MAX;
	uint16_t x612 = 379U;

    t134 = ((x609<=(x610!=x611))-x612);

    if (t134 != -379) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x613 = -2;
	int16_t x614 = -27;
	uint16_t x615 = UINT16_MAX;
	volatile int32_t t135 = -8922;

    t135 = ((x613<=(x614!=x615))-x616);

    if (t135 != 129) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint32_t x617 = 2372747U;
	volatile int32_t x618 = 1;
	int64_t x619 = 4415515516406139429LL;
	static uint32_t x620 = 28U;
	uint32_t t136 = 358423U;

    t136 = ((x617<=(x618!=x619))-x620);

    if (t136 != 4294967268U) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x621 = INT32_MIN;
	volatile int64_t x622 = -1LL;
	uint8_t x623 = UINT8_MAX;
	int16_t x624 = INT16_MAX;

    t137 = ((x621<=(x622!=x623))-x624);

    if (t137 != -32766) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x629 = INT8_MAX;
	volatile int16_t x630 = INT16_MIN;
	int16_t x631 = INT16_MAX;
	static int64_t x632 = -15442920456039507LL;
	volatile int64_t t138 = -7986985091795LL;

    t138 = ((x629<=(x630!=x631))-x632);

    if (t138 != 15442920456039507LL) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x633 = INT32_MIN;
	int32_t x634 = INT32_MIN;
	int64_t x635 = -4838808LL;
	volatile int16_t x636 = -1198;
	volatile int32_t t139 = -4;

    t139 = ((x633<=(x634!=x635))-x636);

    if (t139 != 1199) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x637 = 0;
	volatile int64_t x638 = -1LL;
	int32_t x639 = INT32_MIN;
	static int8_t x640 = INT8_MAX;

    t140 = ((x637<=(x638!=x639))-x640);

    if (t140 != -126) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x645 = INT64_MAX;
	volatile int32_t x646 = -20;
	int16_t x647 = -1;
	volatile int64_t t141 = -1347LL;

    t141 = ((x645<=(x646!=x647))-x648);

    if (t141 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x649 = INT64_MAX;
	volatile int16_t x652 = INT16_MAX;
	int32_t t142 = -250626;

    t142 = ((x649<=(x650!=x651))-x652);

    if (t142 != -32767) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x655 = INT32_MAX;
	volatile int32_t t143 = 105928;

    t143 = ((x653<=(x654!=x655))-x656);

    if (t143 != -1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x657 = UINT16_MAX;
	volatile int64_t x658 = INT64_MAX;
	static int16_t x659 = INT16_MAX;
	volatile int32_t t144 = -109692;

    t144 = ((x657<=(x658!=x659))-x660);

    if (t144 != -2147483647) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x662 = 54438;
	uint64_t x664 = UINT64_MAX;
	volatile uint64_t t145 = 14154LLU;

    t145 = ((x661<=(x662!=x663))-x664);

    if (t145 != 1LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int32_t x665 = -3;
	int16_t x666 = -1;
	int8_t x667 = INT8_MIN;
	int8_t x668 = INT8_MAX;
	volatile int32_t t146 = -3516048;

    t146 = ((x665<=(x666!=x667))-x668);

    if (t146 != -126) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint32_t x673 = UINT32_MAX;
	volatile uint32_t x674 = 14752898U;
	uint16_t x675 = UINT16_MAX;
	static int32_t x676 = INT32_MAX;
	volatile int32_t t147 = 24;

    t147 = ((x673<=(x674!=x675))-x676);

    if (t147 != -2147483647) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint32_t x681 = 238577U;
	int16_t x682 = INT16_MIN;
	int16_t x683 = -193;
	volatile int32_t t148 = -5;

    t148 = ((x681<=(x682!=x683))-x684);

    if (t148 != 128) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x686 = -1;
	int8_t x687 = 0;
	volatile uint32_t t149 = 1475718U;

    t149 = ((x685<=(x686!=x687))-x688);

    if (t149 != 4294903580U) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x689 = INT64_MIN;
	static volatile uint64_t x690 = 5558123976041LLU;
	int64_t x691 = -1LL;
	static int64_t x692 = 145767LL;
	volatile int64_t t150 = -34694460446414209LL;

    t150 = ((x689<=(x690!=x691))-x692);

    if (t150 != -145766LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x693 = 88U;
	volatile int64_t x694 = INT64_MIN;
	volatile uint16_t x695 = 1U;
	int32_t x696 = -1;
	static volatile int32_t t151 = -18955182;

    t151 = ((x693<=(x694!=x695))-x696);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x699 = INT16_MIN;
	volatile int64_t x700 = -1189LL;
	int64_t t152 = -1919809330807630616LL;

    t152 = ((x697<=(x698!=x699))-x700);

    if (t152 != 1189LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x701 = -17673061373488839LL;
	static int64_t x702 = INT64_MIN;
	int64_t x703 = INT64_MIN;
	uint16_t x704 = 19U;
	volatile int32_t t153 = 1018;

    t153 = ((x701<=(x702!=x703))-x704);

    if (t153 != -18) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x705 = UINT64_MAX;
	int64_t x706 = -1810331637LL;
	uint8_t x707 = 1U;
	static volatile int8_t x708 = 5;
	int32_t t154 = 246814400;

    t154 = ((x705<=(x706!=x707))-x708);

    if (t154 != -5) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x709 = -6;
	volatile uint16_t x710 = 6U;
	int16_t x711 = INT16_MAX;
	static int64_t x712 = 95256634560242LL;

    t155 = ((x709<=(x710!=x711))-x712);

    if (t155 != -95256634560241LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile uint8_t x713 = UINT8_MAX;
	uint8_t x714 = 92U;
	static uint32_t x715 = UINT32_MAX;
	uint32_t x716 = 115898U;
	uint32_t t156 = 650U;

    t156 = ((x713<=(x714!=x715))-x716);

    if (t156 != 4294851398U) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint64_t x718 = 61146850LLU;
	uint8_t x719 = 2U;
	int8_t x720 = INT8_MAX;
	volatile int32_t t157 = 1;

    t157 = ((x717<=(x718!=x719))-x720);

    if (t157 != -126) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x721 = 212561U;
	int64_t x722 = -1203LL;
	static uint64_t x724 = UINT64_MAX;
	uint64_t t158 = 490447LLU;

    t158 = ((x721<=(x722!=x723))-x724);

    if (t158 != 1LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x725 = -53;
	int16_t x726 = INT16_MIN;
	int16_t x728 = -1;
	volatile int32_t t159 = -35435080;

    t159 = ((x725<=(x726!=x727))-x728);

    if (t159 != 2) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x729 = -1LL;
	int32_t x730 = INT32_MIN;
	static int64_t x731 = -1LL;
	int32_t x732 = -38575824;
	volatile int32_t t160 = -23276;

    t160 = ((x729<=(x730!=x731))-x732);

    if (t160 != 38575825) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x733 = -36;
	uint64_t x734 = 9613LLU;
	int32_t x735 = INT32_MIN;
	static int32_t x736 = INT32_MAX;
	int32_t t161 = 7067;

    t161 = ((x733<=(x734!=x735))-x736);

    if (t161 != -2147483646) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x737 = INT8_MIN;
	int16_t x738 = INT16_MIN;
	uint16_t x739 = UINT16_MAX;
	int16_t x740 = 0;
	int32_t t162 = 2;

    t162 = ((x737<=(x738!=x739))-x740);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x741 = -1;
	volatile int16_t x742 = -1;
	int16_t x744 = 312;
	volatile int32_t t163 = -3438462;

    t163 = ((x741<=(x742!=x743))-x744);

    if (t163 != -311) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x745 = -1LL;
	static int32_t x746 = -1;
	static int8_t x748 = INT8_MIN;
	int32_t t164 = -506;

    t164 = ((x745<=(x746!=x747))-x748);

    if (t164 != 129) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x749 = -8;
	static uint32_t x750 = UINT32_MAX;
	static int64_t x751 = -1LL;

    t165 = ((x749<=(x750!=x751))-x752);

    if (t165 != -254) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x757 = -1;
	volatile int64_t x758 = -1LL;
	int64_t x760 = -1LL;
	int64_t t166 = 76LL;

    t166 = ((x757<=(x758!=x759))-x760);

    if (t166 != 2LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x761 = INT8_MAX;
	volatile uint16_t x762 = 5250U;
	static int16_t x763 = INT16_MIN;
	int32_t t167 = 0;

    t167 = ((x761<=(x762!=x763))-x764);

    if (t167 != -848296) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x765 = INT16_MAX;
	int64_t x766 = INT64_MIN;
	int32_t x767 = 3209;
	int16_t x768 = INT16_MAX;
	volatile int32_t t168 = -37559744;

    t168 = ((x765<=(x766!=x767))-x768);

    if (t168 != -32767) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint64_t x771 = 17LLU;
	int32_t t169 = -2;

    t169 = ((x769<=(x770!=x771))-x772);

    if (t169 != -64121) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x774 = INT64_MIN;
	int8_t x775 = -1;
	uint16_t x776 = 0U;
	int32_t t170 = -13;

    t170 = ((x773<=(x774!=x775))-x776);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x778 = 15352U;
	int64_t x779 = -1LL;
	int32_t t171 = -89622209;

    t171 = ((x777<=(x778!=x779))-x780);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x781 = -1;
	uint64_t x782 = 1376198446715068610LLU;
	int64_t x783 = -146893081658514674LL;
	int16_t x784 = -10106;

    t172 = ((x781<=(x782!=x783))-x784);

    if (t172 != 10107) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x785 = -1;
	uint64_t x786 = 1768LLU;
	uint32_t x787 = 14U;
	int16_t x788 = -1;
	int32_t t173 = 256970;

    t173 = ((x785<=(x786!=x787))-x788);

    if (t173 != 2) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x789 = INT16_MIN;
	volatile int32_t x790 = -1;
	int32_t x791 = 86054;
	volatile int32_t t174 = -6;

    t174 = ((x789<=(x790!=x791))-x792);

    if (t174 != -32) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x793 = UINT64_MAX;
	int8_t x794 = INT8_MAX;
	int8_t x795 = -5;
	int32_t t175 = -2983;

    t175 = ((x793<=(x794!=x795))-x796);

    if (t175 != -4) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x797 = INT32_MIN;
	static volatile int8_t x798 = INT8_MIN;
	static int8_t x799 = INT8_MAX;
	static uint32_t x800 = 176101U;
	volatile uint32_t t176 = 42U;

    t176 = ((x797<=(x798!=x799))-x800);

    if (t176 != 4294791196U) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x805 = INT64_MIN;
	int8_t x806 = INT8_MIN;
	int8_t x807 = INT8_MIN;
	uint8_t x808 = 1U;
	int32_t t177 = -6427;

    t177 = ((x805<=(x806!=x807))-x808);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x809 = 1;
	int16_t x810 = -205;
	volatile int64_t x811 = INT64_MAX;
	int16_t x812 = -1;
	volatile int32_t t178 = -13917;

    t178 = ((x809<=(x810!=x811))-x812);

    if (t178 != 2) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x818 = INT32_MIN;
	int32_t x819 = INT32_MIN;
	volatile uint32_t x820 = 21932U;
	volatile uint32_t t179 = 23U;

    t179 = ((x817<=(x818!=x819))-x820);

    if (t179 != 4294945365U) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x821 = INT32_MIN;
	uint32_t x823 = UINT32_MAX;
	static int8_t x824 = -5;

    t180 = ((x821<=(x822!=x823))-x824);

    if (t180 != 6) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x825 = INT16_MIN;
	volatile int16_t x826 = -1;
	static int16_t x827 = -1;
	volatile int32_t x828 = -581032;
	volatile int32_t t181 = 14;

    t181 = ((x825<=(x826!=x827))-x828);

    if (t181 != 581033) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x834 = -7822;
	uint32_t x836 = 756U;
	static volatile uint32_t t182 = 49U;

    t182 = ((x833<=(x834!=x835))-x836);

    if (t182 != 4294966541U) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x841 = -1;
	int32_t x843 = INT32_MIN;
	volatile uint16_t x844 = 3U;

    t183 = ((x841<=(x842!=x843))-x844);

    if (t183 != -2) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x845 = -1;
	static uint8_t x846 = 13U;
	volatile int16_t x848 = -1;
	static int32_t t184 = 56043489;

    t184 = ((x845<=(x846!=x847))-x848);

    if (t184 != 2) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x849 = INT64_MAX;
	uint64_t x850 = 2090274LLU;
	static int32_t x851 = INT32_MIN;
	static int64_t x852 = INT64_MAX;
	volatile int64_t t185 = 2636LL;

    t185 = ((x849<=(x850!=x851))-x852);

    if (t185 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x854 = INT64_MAX;
	int16_t x855 = -27;

    t186 = ((x853<=(x854!=x855))-x856);

    if (t186 != 94) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint16_t x857 = 29U;
	volatile int8_t x858 = INT8_MIN;
	volatile int8_t x859 = INT8_MAX;
	int32_t x860 = -1;
	static int32_t t187 = -207535494;

    t187 = ((x857<=(x858!=x859))-x860);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x861 = UINT64_MAX;
	int64_t x864 = -984010962LL;
	int64_t t188 = -7654754LL;

    t188 = ((x861<=(x862!=x863))-x864);

    if (t188 != 984010962LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int64_t x865 = INT64_MAX;
	uint16_t x866 = 2U;
	int16_t x867 = INT16_MIN;
	int64_t x868 = -1LL;
	int64_t t189 = 4405873LL;

    t189 = ((x865<=(x866!=x867))-x868);

    if (t189 != 1LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x869 = 83U;
	int8_t x870 = 1;
	static int8_t x871 = -6;
	int64_t x872 = INT64_MAX;

    t190 = ((x869<=(x870!=x871))-x872);

    if (t190 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint16_t x873 = 2U;
	int64_t x874 = -1448075032703950121LL;
	static int32_t x876 = INT32_MAX;
	volatile int32_t t191 = 1944843;

    t191 = ((x873<=(x874!=x875))-x876);

    if (t191 != -2147483647) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x877 = INT8_MIN;
	uint32_t x878 = 153819488U;
	uint8_t x879 = 7U;

    t192 = ((x877<=(x878!=x879))-x880);

    if (t192 != -32766) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x881 = INT64_MIN;
	volatile uint64_t x883 = UINT64_MAX;
	int64_t x884 = 36396925794156024LL;

    t193 = ((x881<=(x882!=x883))-x884);

    if (t193 != -36396925794156023LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x885 = UINT8_MAX;
	int16_t x886 = INT16_MAX;
	uint32_t x887 = 639461775U;
	int32_t t194 = 36915922;

    t194 = ((x885<=(x886!=x887))-x888);

    if (t194 != -10) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint16_t x889 = 22U;
	static int8_t x890 = INT8_MIN;
	uint16_t x892 = UINT16_MAX;

    t195 = ((x889<=(x890!=x891))-x892);

    if (t195 != -65535) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x893 = -14118;
	volatile uint8_t x894 = 6U;
	int32_t x895 = -14510;
	static volatile int32_t t196 = 2448;

    t196 = ((x893<=(x894!=x895))-x896);

    if (t196 != -65534) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x898 = -1;
	int32_t t197 = 44745;

    t197 = ((x897<=(x898!=x899))-x900);

    if (t197 != 2) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x901 = INT16_MIN;
	int8_t x902 = INT8_MIN;
	int32_t x903 = INT32_MIN;
	volatile int16_t x904 = INT16_MIN;
	int32_t t198 = 105382;

    t198 = ((x901<=(x902!=x903))-x904);

    if (t198 != 32769) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x905 = UINT16_MAX;
	uint16_t x906 = 6434U;
	uint16_t x907 = 0U;
	uint32_t x908 = 27360465U;
	volatile uint32_t t199 = 101U;

    t199 = ((x905<=(x906!=x907))-x908);

    if (t199 != 4267606831U) { NG(); } else { ; }
	
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


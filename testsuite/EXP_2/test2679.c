
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

uint32_t x5 = 1334033U;
uint16_t x7 = UINT16_MAX;
int64_t x10 = 2LL;
uint8_t x12 = UINT8_MAX;
int32_t t2 = -31093211;
int16_t x13 = -26;
static uint8_t x14 = 89U;
volatile uint64_t x21 = 0LLU;
int16_t x23 = INT16_MIN;
int16_t x28 = 1;
static int32_t x32 = INT32_MIN;
int32_t t7 = -7;
uint64_t x34 = 4018824590674982LLU;
int16_t x36 = INT16_MIN;
int32_t x43 = -1;
static uint8_t x47 = 0U;
int32_t t11 = 1922452;
static int8_t x56 = INT8_MIN;
int32_t t13 = -1906;
volatile int32_t x73 = INT32_MAX;
int32_t x74 = -1;
volatile uint8_t x77 = 25U;
volatile int32_t t21 = 894;
int32_t t22 = 384;
static uint64_t x96 = 3849951271LLU;
volatile int8_t x104 = -1;
uint8_t x112 = 12U;
int8_t x119 = INT8_MAX;
volatile int64_t t30 = -203LL;
volatile uint32_t x131 = 12153991U;
int32_t x135 = -2765;
static int8_t x136 = -1;
static uint32_t x138 = UINT32_MAX;
uint64_t x141 = 207594785568460163LLU;
int32_t t34 = 40;
int16_t x145 = INT16_MIN;
static volatile int32_t t35 = 1662621;
int32_t t36 = 430;
static int32_t x154 = 150247481;
int16_t x156 = INT16_MIN;
int32_t x162 = INT32_MAX;
int8_t x164 = INT8_MIN;
uint64_t x174 = 18LLU;
int16_t x177 = INT16_MAX;
volatile uint64_t x180 = UINT64_MAX;
int64_t x187 = -22223029914238917LL;
int64_t t45 = -435119268946340842LL;
int8_t x196 = INT8_MAX;
volatile int64_t x197 = INT64_MAX;
int32_t x200 = INT32_MIN;
int8_t x202 = INT8_MIN;
int32_t x205 = INT32_MAX;
volatile int64_t x206 = INT64_MAX;
int64_t x207 = 6638LL;
static uint32_t x209 = 848745U;
volatile int16_t x212 = INT16_MAX;
uint8_t x216 = 11U;
int16_t x223 = INT16_MAX;
int16_t x232 = -1;
uint16_t x240 = 6926U;
volatile uint64_t t58 = 518106874359016LLU;
volatile int8_t x258 = INT8_MIN;
int64_t x260 = INT64_MIN;
int16_t x263 = -2;
int32_t t63 = -80854;
static int8_t x266 = INT8_MIN;
int32_t x273 = -216821;
static uint64_t x276 = UINT64_MAX;
uint16_t x281 = 15437U;
static int32_t x282 = -9100181;
static int32_t x288 = -16159160;
volatile int32_t t69 = 1016;
int16_t x301 = INT16_MIN;
int32_t x302 = 125567791;
uint16_t x305 = 538U;
int16_t x315 = 1450;
uint32_t x321 = 241U;
uint16_t x324 = 494U;
static int16_t x327 = 27;
int32_t x333 = INT32_MAX;
int64_t x336 = INT64_MAX;
volatile int16_t x339 = -1;
volatile int32_t x345 = -1;
volatile uint64_t x351 = 3315LLU;
volatile int64_t x352 = INT64_MIN;
static volatile int64_t t85 = 109789598639LL;
int8_t x356 = -12;
int32_t t86 = -1445;
volatile int8_t x357 = INT8_MIN;
volatile int16_t x359 = -1;
int32_t x365 = INT32_MIN;
static uint16_t x377 = 2957U;
int64_t x386 = INT64_MIN;
static int8_t x396 = INT8_MAX;
int8_t x398 = -1;
uint16_t x406 = 1973U;
static int64_t x407 = INT64_MIN;
volatile int16_t x408 = INT16_MAX;
uint64_t x409 = 139338511541672LLU;
static int8_t x411 = -6;
int64_t x422 = 199598LL;
int16_t x447 = 379;
volatile int32_t t108 = 642;
static int16_t x454 = 6107;
static int16_t x456 = -1;
int8_t x459 = INT8_MIN;
int64_t x467 = 118246226LL;
uint16_t x476 = 7640U;
static int32_t x502 = INT32_MIN;
volatile uint64_t x506 = UINT64_MAX;
volatile uint32_t x513 = 587394494U;
volatile int32_t x516 = 651719;
uint8_t x529 = 1U;
int32_t x530 = INT32_MIN;
int64_t x531 = 12LL;
volatile int32_t t129 = 742323;
volatile int32_t x534 = INT32_MIN;
static volatile int32_t t130 = 8;
uint8_t x538 = 1U;
int32_t t134 = 225;
int16_t x559 = INT16_MIN;
int64_t t136 = -115828LL;
int64_t x562 = INT64_MAX;
static int64_t x564 = INT64_MIN;
uint32_t x566 = UINT32_MAX;
int8_t x572 = INT8_MIN;
static int16_t x575 = 282;
volatile uint32_t t140 = 487099279U;
int16_t x578 = -1;
int64_t t141 = 479LL;
uint16_t x589 = 7U;
volatile uint32_t x590 = UINT32_MAX;
volatile uint32_t t144 = 266723U;
int64_t x603 = -11408992571LL;
static int8_t x606 = 0;
static int64_t x607 = -1LL;
int8_t x609 = -1;
volatile uint64_t x614 = 22569LLU;
uint64_t t151 = 19370908362394LLU;
uint64_t x622 = 22LLU;
uint8_t x627 = 2U;
int32_t x630 = 47116969;
uint64_t x631 = 299869369LLU;
int8_t x632 = INT8_MIN;
int16_t x633 = -1;
static volatile int8_t x639 = 2;
int16_t x644 = -8180;
int64_t x646 = INT64_MIN;
int64_t x653 = -1315110632LL;
int16_t x654 = -218;
uint32_t x664 = 8U;
uint32_t t162 = 2U;
int32_t x665 = 856170116;
volatile int8_t x671 = -1;
volatile int16_t x676 = INT16_MIN;
volatile int32_t t165 = 115840;
static int64_t x682 = INT64_MIN;
uint8_t x684 = 76U;
volatile int32_t x685 = -1;
static volatile int64_t x686 = -865059828771LL;
static int32_t x696 = INT32_MIN;
static volatile int64_t x701 = -1LL;
int32_t x706 = INT32_MIN;
volatile int16_t x708 = -1;
int8_t x711 = INT8_MIN;
uint16_t x712 = 856U;
static int64_t x715 = INT64_MIN;
static volatile int32_t t175 = -16878;
volatile int32_t t177 = 3157368;
int64_t x733 = INT64_MIN;
int32_t x735 = INT32_MIN;
int16_t x738 = INT16_MIN;
volatile int64_t x740 = 2043838082LL;
int16_t x741 = -1;
static int64_t x746 = -45343590363566LL;
int16_t x753 = -1;
uint16_t x757 = UINT16_MAX;
int32_t t186 = -50;
int64_t x767 = INT64_MIN;
int16_t x769 = -1;
volatile uint64_t t189 = 88855702226LLU;
static int64_t t190 = 169973764162858LL;
static int64_t x777 = INT64_MIN;
int8_t x780 = -1;
volatile uint32_t x781 = 244528U;
static int8_t x786 = INT8_MAX;
volatile uint64_t x789 = UINT64_MAX;
volatile int32_t t195 = 526;
volatile int32_t t197 = -33;
volatile int8_t x806 = INT8_MIN;
uint16_t x807 = UINT16_MAX;
static volatile int64_t x810 = INT64_MAX;


void f0(void) {
    	int64_t x1 = 142121306LL;
	static uint16_t x2 = UINT16_MAX;
	volatile uint16_t x3 = 0U;
	static uint32_t x4 = UINT32_MAX;
	volatile uint32_t t0 = 1519U;

    t0 = ((x1<=(x2^x3))%x4);

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x6 = INT16_MIN;
	int16_t x8 = -1;
	static volatile int32_t t1 = 1847;

    t1 = ((x5<=(x6^x7))%x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = -1;
	uint64_t x11 = UINT64_MAX;

    t2 = ((x9<=(x10^x11))%x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x15 = -1;
	int16_t x16 = -1;
	static volatile int32_t t3 = 0;

    t3 = ((x13<=(x14^x15))%x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x17 = INT32_MIN;
	int16_t x18 = INT16_MAX;
	uint16_t x19 = 3122U;
	int64_t x20 = INT64_MIN;
	int64_t t4 = -1215097988001130780LL;

    t4 = ((x17<=(x18^x19))%x20);

    if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint16_t x22 = 7541U;
	volatile int32_t x24 = 98324239;
	int32_t t5 = 5460977;

    t5 = ((x21<=(x22^x23))%x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int64_t x25 = INT64_MIN;
	int32_t x26 = -1;
	uint16_t x27 = 1U;
	volatile int32_t t6 = 1;

    t6 = ((x25<=(x26^x27))%x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x29 = INT32_MAX;
	uint32_t x30 = 3189473U;
	uint8_t x31 = 15U;

    t7 = ((x29<=(x30^x31))%x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = INT8_MIN;
	uint16_t x35 = 3647U;
	static int32_t t8 = 0;

    t8 = ((x33<=(x34^x35))%x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x37 = UINT16_MAX;
	int64_t x38 = -22305626LL;
	volatile uint16_t x39 = 268U;
	int16_t x40 = INT16_MIN;
	volatile int32_t t9 = 0;

    t9 = ((x37<=(x38^x39))%x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = -1;
	int8_t x42 = INT8_MIN;
	static int8_t x44 = 1;
	volatile int32_t t10 = -81130195;

    t10 = ((x41<=(x42^x43))%x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile uint64_t x45 = 3LLU;
	int64_t x46 = -3532056LL;
	int16_t x48 = -1;

    t11 = ((x45<=(x46^x47))%x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = INT64_MIN;
	int32_t x50 = -1;
	static int8_t x51 = INT8_MIN;
	int16_t x52 = INT16_MAX;
	volatile int32_t t12 = -20;

    t12 = ((x49<=(x50^x51))%x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MIN;
	static int8_t x54 = INT8_MIN;
	int8_t x55 = 0;

    t13 = ((x53<=(x54^x55))%x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x57 = 1;
	uint32_t x58 = UINT32_MAX;
	volatile uint64_t x59 = 1981367794LLU;
	static int32_t x60 = 234002;
	int32_t t14 = -86;

    t14 = ((x57<=(x58^x59))%x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x61 = 43U;
	int64_t x62 = INT64_MIN;
	volatile int8_t x63 = INT8_MIN;
	int16_t x64 = -86;
	volatile int32_t t15 = 1;

    t15 = ((x61<=(x62^x63))%x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x65 = -1;
	uint16_t x66 = 7U;
	int32_t x67 = 132294039;
	static int64_t x68 = INT64_MAX;
	static int64_t t16 = 670425427770572LL;

    t16 = ((x65<=(x66^x67))%x68);

    if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = -1;
	int32_t x70 = INT32_MIN;
	volatile int64_t x71 = -1LL;
	volatile uint8_t x72 = 68U;
	int32_t t17 = -139546172;

    t17 = ((x69<=(x70^x71))%x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint64_t x75 = UINT64_MAX;
	static int32_t x76 = INT32_MAX;
	int32_t t18 = 31169066;

    t18 = ((x73<=(x74^x75))%x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x78 = -25601;
	int8_t x79 = INT8_MIN;
	uint64_t x80 = 196572250163625934LLU;
	static volatile uint64_t t19 = 498277900353LLU;

    t19 = ((x77<=(x78^x79))%x80);

    if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = -55;
	int8_t x82 = INT8_MIN;
	int64_t x83 = INT64_MIN;
	static int8_t x84 = INT8_MIN;
	int32_t t20 = 4358946;

    t20 = ((x81<=(x82^x83))%x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x85 = INT32_MIN;
	int64_t x86 = INT64_MIN;
	int32_t x87 = INT32_MIN;
	int32_t x88 = -1;

    t21 = ((x85<=(x86^x87))%x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = -3;
	uint16_t x90 = UINT16_MAX;
	static int16_t x91 = -1;
	int16_t x92 = INT16_MIN;

    t22 = ((x89<=(x90^x91))%x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = -1;
	static int16_t x94 = -1;
	uint64_t x95 = 16714925809776188LLU;
	static uint64_t t23 = 15512788385725LLU;

    t23 = ((x93<=(x94^x95))%x96);

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = INT16_MIN;
	int16_t x98 = -1;
	static int8_t x99 = INT8_MIN;
	int64_t x100 = INT64_MIN;
	static int64_t t24 = -48233959033924LL;

    t24 = ((x97<=(x98^x99))%x100);

    if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x101 = 806758175LLU;
	int64_t x102 = INT64_MAX;
	uint8_t x103 = 48U;
	volatile int32_t t25 = 3815095;

    t25 = ((x101<=(x102^x103))%x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int16_t x105 = INT16_MIN;
	int8_t x106 = INT8_MAX;
	uint8_t x107 = UINT8_MAX;
	volatile int32_t x108 = 13;
	int32_t t26 = 944;

    t26 = ((x105<=(x106^x107))%x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x109 = UINT64_MAX;
	volatile uint16_t x110 = 31738U;
	static volatile int8_t x111 = INT8_MAX;
	static int32_t t27 = 7;

    t27 = ((x109<=(x110^x111))%x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = INT8_MIN;
	int64_t x114 = INT64_MAX;
	int32_t x115 = -1;
	uint16_t x116 = 11U;
	volatile int32_t t28 = 432449355;

    t28 = ((x113<=(x114^x115))%x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x117 = 73539587256LLU;
	int8_t x118 = 1;
	static volatile int64_t x120 = 396460LL;
	int64_t t29 = -1291755LL;

    t29 = ((x117<=(x118^x119))%x120);

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = -1;
	uint16_t x122 = 1U;
	volatile int16_t x123 = INT16_MIN;
	int64_t x124 = INT64_MIN;

    t30 = ((x121<=(x122^x123))%x124);

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint32_t x129 = UINT32_MAX;
	int8_t x130 = INT8_MIN;
	int64_t x132 = INT64_MIN;
	int64_t t31 = -343425986476789542LL;

    t31 = ((x129<=(x130^x131))%x132);

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile uint32_t x133 = 12U;
	int64_t x134 = INT64_MIN;
	int32_t t32 = -40087486;

    t32 = ((x133<=(x134^x135))%x136);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x137 = INT16_MAX;
	static volatile int64_t x139 = -1LL;
	uint32_t x140 = 92930635U;
	volatile uint32_t t33 = 2033U;

    t33 = ((x137<=(x138^x139))%x140);

    if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x142 = INT32_MIN;
	static int32_t x143 = -1;
	static volatile uint8_t x144 = 3U;

    t34 = ((x141<=(x142^x143))%x144);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x146 = 70U;
	volatile int64_t x147 = -1LL;
	volatile int8_t x148 = -1;

    t35 = ((x145<=(x146^x147))%x148);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x149 = 129409263600086LLU;
	int64_t x150 = -1LL;
	uint64_t x151 = 1171570926149498LLU;
	static int32_t x152 = INT32_MAX;

    t36 = ((x149<=(x150^x151))%x152);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x153 = 36322810454798909LLU;
	static uint16_t x155 = UINT16_MAX;
	int32_t t37 = -6;

    t37 = ((x153<=(x154^x155))%x156);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x157 = INT8_MAX;
	int16_t x158 = INT16_MAX;
	volatile int16_t x159 = -811;
	static uint8_t x160 = UINT8_MAX;
	static volatile int32_t t38 = -78541700;

    t38 = ((x157<=(x158^x159))%x160);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x161 = UINT32_MAX;
	uint64_t x163 = 540030160912LLU;
	volatile int32_t t39 = 437408275;

    t39 = ((x161<=(x162^x163))%x164);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x169 = INT16_MAX;
	uint8_t x170 = 122U;
	int64_t x171 = INT64_MIN;
	int16_t x172 = -1;
	int32_t t40 = -74;

    t40 = ((x169<=(x170^x171))%x172);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x173 = -1557623083LL;
	int16_t x175 = -1;
	volatile int32_t x176 = INT32_MIN;
	volatile int32_t t41 = 3185310;

    t41 = ((x173<=(x174^x175))%x176);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x178 = -1;
	int64_t x179 = INT64_MIN;
	volatile uint64_t t42 = 2433771LLU;

    t42 = ((x177<=(x178^x179))%x180);

    if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x181 = INT64_MAX;
	int16_t x182 = -1;
	static uint32_t x183 = 1U;
	volatile int64_t x184 = 1488439LL;
	int64_t t43 = -12038527452956910LL;

    t43 = ((x181<=(x182^x183))%x184);

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x185 = INT64_MAX;
	int64_t x186 = 637942122LL;
	int32_t x188 = -1;
	volatile int32_t t44 = -1;

    t44 = ((x185<=(x186^x187))%x188);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x189 = INT64_MIN;
	int16_t x190 = 2;
	int16_t x191 = -1;
	static int64_t x192 = INT64_MAX;

    t45 = ((x189<=(x190^x191))%x192);

    if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x193 = -1LL;
	int64_t x194 = INT64_MAX;
	int8_t x195 = INT8_MAX;
	int32_t t46 = -1;

    t46 = ((x193<=(x194^x195))%x196);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint8_t x198 = 6U;
	volatile int16_t x199 = INT16_MAX;
	int32_t t47 = 0;

    t47 = ((x197<=(x198^x199))%x200);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x201 = UINT64_MAX;
	static int8_t x203 = INT8_MIN;
	int16_t x204 = 11034;
	int32_t t48 = 59931;

    t48 = ((x201<=(x202^x203))%x204);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x208 = INT64_MIN;
	static int64_t t49 = -67594687413LL;

    t49 = ((x205<=(x206^x207))%x208);

    if (t49 != 1LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x210 = INT8_MAX;
	int16_t x211 = 275;
	int32_t t50 = 114724408;

    t50 = ((x209<=(x210^x211))%x212);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x213 = -61668;
	uint16_t x214 = 0U;
	int32_t x215 = INT32_MIN;
	int32_t t51 = -1;

    t51 = ((x213<=(x214^x215))%x216);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x217 = 3722713936343619LL;
	int8_t x218 = INT8_MIN;
	static int32_t x219 = -1;
	int32_t x220 = 373;
	static int32_t t52 = 158;

    t52 = ((x217<=(x218^x219))%x220);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x221 = -8;
	volatile int16_t x222 = INT16_MIN;
	uint8_t x224 = 2U;
	int32_t t53 = 0;

    t53 = ((x221<=(x222^x223))%x224);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x225 = -5;
	volatile uint32_t x226 = 40288U;
	int64_t x227 = -1LL;
	int32_t x228 = INT32_MIN;
	int32_t t54 = 945520;

    t54 = ((x225<=(x226^x227))%x228);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x229 = -1;
	volatile int64_t x230 = INT64_MIN;
	volatile uint8_t x231 = 3U;
	volatile int32_t t55 = 5233;

    t55 = ((x229<=(x230^x231))%x232);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x233 = INT8_MAX;
	volatile int8_t x234 = -1;
	int8_t x235 = -1;
	volatile int64_t x236 = INT64_MIN;
	int64_t t56 = -110601941LL;

    t56 = ((x233<=(x234^x235))%x236);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x237 = INT32_MAX;
	int8_t x238 = INT8_MIN;
	int32_t x239 = -1;
	volatile int32_t t57 = 278737;

    t57 = ((x237<=(x238^x239))%x240);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x241 = -6115;
	uint64_t x242 = UINT64_MAX;
	uint16_t x243 = UINT16_MAX;
	uint64_t x244 = 7657LLU;

    t58 = ((x241<=(x242^x243))%x244);

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x245 = 216LLU;
	volatile int32_t x246 = -6;
	static volatile int32_t x247 = INT32_MIN;
	uint32_t x248 = 7U;
	uint32_t t59 = 11U;

    t59 = ((x245<=(x246^x247))%x248);

    if (t59 != 1U) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint8_t x249 = 28U;
	static int64_t x250 = INT64_MIN;
	volatile int64_t x251 = INT64_MIN;
	int16_t x252 = INT16_MAX;
	int32_t t60 = -1213;

    t60 = ((x249<=(x250^x251))%x252);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x253 = INT8_MIN;
	static volatile int16_t x254 = -1;
	int32_t x255 = INT32_MIN;
	int8_t x256 = 29;
	int32_t t61 = -432;

    t61 = ((x253<=(x254^x255))%x256);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint8_t x257 = UINT8_MAX;
	int8_t x259 = INT8_MIN;
	int64_t t62 = 2087458LL;

    t62 = ((x257<=(x258^x259))%x260);

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x261 = UINT8_MAX;
	int16_t x262 = 14879;
	int16_t x264 = -1;

    t63 = ((x261<=(x262^x263))%x264);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int32_t x265 = INT32_MIN;
	volatile int64_t x267 = INT64_MIN;
	static int16_t x268 = -147;
	static int32_t t64 = 0;

    t64 = ((x265<=(x266^x267))%x268);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x269 = INT64_MIN;
	uint16_t x270 = 26U;
	uint32_t x271 = 364893108U;
	int8_t x272 = INT8_MIN;
	static int32_t t65 = 8328;

    t65 = ((x269<=(x270^x271))%x272);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint32_t x274 = 8U;
	int8_t x275 = -58;
	uint64_t t66 = 18493LLU;

    t66 = ((x273<=(x274^x275))%x276);

    if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x277 = INT32_MAX;
	static volatile uint16_t x278 = 1826U;
	int64_t x279 = INT64_MAX;
	int64_t x280 = 107337306LL;
	int64_t t67 = 17571376220202909LL;

    t67 = ((x277<=(x278^x279))%x280);

    if (t67 != 1LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x283 = UINT8_MAX;
	static int64_t x284 = -1LL;
	volatile int64_t t68 = -3860590121LL;

    t68 = ((x281<=(x282^x283))%x284);

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x285 = -18;
	int8_t x286 = INT8_MAX;
	uint64_t x287 = 52440543LLU;

    t69 = ((x285<=(x286^x287))%x288);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x289 = 0U;
	uint32_t x290 = 22U;
	static int32_t x291 = INT32_MAX;
	static volatile int32_t x292 = INT32_MIN;
	volatile int32_t t70 = 191047928;

    t70 = ((x289<=(x290^x291))%x292);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x293 = UINT64_MAX;
	static int16_t x294 = -1;
	uint16_t x295 = 5730U;
	static volatile int32_t x296 = INT32_MIN;
	int32_t t71 = -108;

    t71 = ((x293<=(x294^x295))%x296);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x297 = 16317LL;
	int16_t x298 = INT16_MIN;
	uint64_t x299 = UINT64_MAX;
	uint8_t x300 = 123U;
	int32_t t72 = 130;

    t72 = ((x297<=(x298^x299))%x300);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x303 = 1;
	uint32_t x304 = UINT32_MAX;
	uint32_t t73 = 992684337U;

    t73 = ((x301<=(x302^x303))%x304);

    if (t73 != 1U) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x306 = 30749U;
	static uint8_t x307 = 47U;
	int64_t x308 = 4131244798440LL;
	int64_t t74 = -221619822771133LL;

    t74 = ((x305<=(x306^x307))%x308);

    if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x309 = 6735;
	static uint16_t x310 = UINT16_MAX;
	uint32_t x311 = UINT32_MAX;
	int32_t x312 = INT32_MAX;
	volatile int32_t t75 = -4393;

    t75 = ((x309<=(x310^x311))%x312);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x313 = UINT32_MAX;
	volatile uint64_t x314 = UINT64_MAX;
	int16_t x316 = -441;
	int32_t t76 = 20;

    t76 = ((x313<=(x314^x315))%x316);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint64_t x317 = 28083LLU;
	int32_t x318 = INT32_MIN;
	uint16_t x319 = UINT16_MAX;
	volatile uint16_t x320 = 39U;
	volatile int32_t t77 = -831701;

    t77 = ((x317<=(x318^x319))%x320);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x322 = -89;
	static int16_t x323 = -1581;
	int32_t t78 = 1058;

    t78 = ((x321<=(x322^x323))%x324);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x325 = 0;
	int8_t x326 = -6;
	volatile int8_t x328 = INT8_MIN;
	static volatile int32_t t79 = 0;

    t79 = ((x325<=(x326^x327))%x328);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x329 = -100;
	static uint16_t x330 = 2671U;
	volatile int8_t x331 = -1;
	uint8_t x332 = UINT8_MAX;
	static volatile int32_t t80 = -7772477;

    t80 = ((x329<=(x330^x331))%x332);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x334 = INT16_MIN;
	int64_t x335 = 0LL;
	int64_t t81 = -556321507971894LL;

    t81 = ((x333<=(x334^x335))%x336);

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile uint32_t x337 = 3U;
	uint8_t x338 = UINT8_MAX;
	int16_t x340 = 12908;
	int32_t t82 = -5701534;

    t82 = ((x337<=(x338^x339))%x340);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x341 = INT8_MIN;
	int64_t x342 = INT64_MIN;
	static volatile int16_t x343 = INT16_MIN;
	static int32_t x344 = INT32_MIN;
	int32_t t83 = 402885;

    t83 = ((x341<=(x342^x343))%x344);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x346 = 0;
	int64_t x347 = -1LL;
	uint64_t x348 = 54453313LLU;
	uint64_t t84 = 10819879479734LLU;

    t84 = ((x345<=(x346^x347))%x348);

    if (t84 != 1LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint32_t x349 = UINT32_MAX;
	static uint8_t x350 = 1U;

    t85 = ((x349<=(x350^x351))%x352);

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x353 = INT32_MAX;
	static int16_t x354 = INT16_MAX;
	uint8_t x355 = 5U;

    t86 = ((x353<=(x354^x355))%x356);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x358 = INT32_MAX;
	int16_t x360 = INT16_MAX;
	static int32_t t87 = 1;

    t87 = ((x357<=(x358^x359))%x360);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x361 = 4415U;
	uint32_t x362 = 214U;
	int8_t x363 = INT8_MAX;
	uint64_t x364 = UINT64_MAX;
	static volatile uint64_t t88 = 295040709009LLU;

    t88 = ((x361<=(x362^x363))%x364);

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x366 = INT8_MIN;
	int64_t x367 = -21753110881031LL;
	volatile uint16_t x368 = UINT16_MAX;
	volatile int32_t t89 = 761775574;

    t89 = ((x365<=(x366^x367))%x368);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x369 = 112;
	volatile int32_t x370 = INT32_MIN;
	int16_t x371 = -1;
	static int16_t x372 = -5557;
	static int32_t t90 = 186793123;

    t90 = ((x369<=(x370^x371))%x372);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x373 = 35;
	int64_t x374 = INT64_MIN;
	uint8_t x375 = 31U;
	uint32_t x376 = 3386U;
	volatile uint32_t t91 = 2336U;

    t91 = ((x373<=(x374^x375))%x376);

    if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x378 = UINT64_MAX;
	int16_t x379 = INT16_MIN;
	static int32_t x380 = -33012;
	int32_t t92 = -13;

    t92 = ((x377<=(x378^x379))%x380);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x381 = -965712LL;
	int8_t x382 = -1;
	uint64_t x383 = UINT64_MAX;
	uint8_t x384 = UINT8_MAX;
	int32_t t93 = -256;

    t93 = ((x381<=(x382^x383))%x384);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint32_t x385 = 1U;
	volatile uint64_t x387 = UINT64_MAX;
	int32_t x388 = INT32_MIN;
	static volatile int32_t t94 = 913;

    t94 = ((x385<=(x386^x387))%x388);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x389 = INT16_MIN;
	int64_t x390 = -35760850788314310LL;
	static volatile int64_t x391 = 49772LL;
	uint8_t x392 = 2U;
	volatile int32_t t95 = -136;

    t95 = ((x389<=(x390^x391))%x392);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x393 = -1;
	int64_t x394 = INT64_MAX;
	int8_t x395 = INT8_MAX;
	int32_t t96 = -273;

    t96 = ((x393<=(x394^x395))%x396);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x397 = INT64_MIN;
	int8_t x399 = INT8_MIN;
	static uint32_t x400 = UINT32_MAX;
	uint32_t t97 = 6789022U;

    t97 = ((x397<=(x398^x399))%x400);

    if (t97 != 1U) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x401 = INT32_MIN;
	int64_t x402 = 253659744933957411LL;
	volatile uint8_t x403 = 114U;
	volatile int32_t x404 = INT32_MIN;
	int32_t t98 = -146;

    t98 = ((x401<=(x402^x403))%x404);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x405 = 13423LL;
	int32_t t99 = -2803795;

    t99 = ((x405<=(x406^x407))%x408);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint64_t x410 = UINT64_MAX;
	uint8_t x412 = 9U;
	volatile int32_t t100 = -1846;

    t100 = ((x409<=(x410^x411))%x412);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x413 = INT64_MIN;
	static int16_t x414 = INT16_MIN;
	int8_t x415 = INT8_MIN;
	uint32_t x416 = 28494U;
	volatile uint32_t t101 = 909789U;

    t101 = ((x413<=(x414^x415))%x416);

    if (t101 != 1U) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x421 = INT16_MIN;
	int32_t x423 = 282;
	static int64_t x424 = INT64_MIN;
	volatile int64_t t102 = -13048456LL;

    t102 = ((x421<=(x422^x423))%x424);

    if (t102 != 1LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x425 = 102;
	static int16_t x426 = -1;
	volatile int32_t x427 = -1;
	volatile uint64_t x428 = 67786011303869LLU;
	uint64_t t103 = 15292586220966380LLU;

    t103 = ((x425<=(x426^x427))%x428);

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x429 = -1;
	static int8_t x430 = INT8_MIN;
	static int16_t x431 = -1;
	int8_t x432 = -29;
	volatile int32_t t104 = -219;

    t104 = ((x429<=(x430^x431))%x432);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x433 = INT64_MIN;
	int32_t x434 = INT32_MIN;
	int16_t x435 = INT16_MAX;
	int8_t x436 = -1;
	volatile int32_t t105 = 161;

    t105 = ((x433<=(x434^x435))%x436);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x437 = -1;
	volatile int64_t x438 = INT64_MIN;
	int32_t x439 = 9672861;
	int32_t x440 = 278633;
	static volatile int32_t t106 = 15927;

    t106 = ((x437<=(x438^x439))%x440);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x441 = 9U;
	volatile int64_t x442 = -10LL;
	volatile int64_t x443 = INT64_MIN;
	int32_t x444 = INT32_MAX;
	int32_t t107 = 213;

    t107 = ((x441<=(x442^x443))%x444);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x445 = 27U;
	int64_t x446 = -1LL;
	int16_t x448 = 150;

    t108 = ((x445<=(x446^x447))%x448);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x449 = 2LLU;
	uint8_t x450 = 29U;
	volatile int32_t x451 = -1;
	volatile int16_t x452 = INT16_MIN;
	volatile int32_t t109 = -6409;

    t109 = ((x449<=(x450^x451))%x452);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x453 = INT32_MIN;
	uint16_t x455 = 410U;
	int32_t t110 = -21823726;

    t110 = ((x453<=(x454^x455))%x456);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x457 = INT16_MIN;
	uint8_t x458 = UINT8_MAX;
	static uint64_t x460 = UINT64_MAX;
	uint64_t t111 = 134036014LLU;

    t111 = ((x457<=(x458^x459))%x460);

    if (t111 != 1LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int64_t x461 = -1LL;
	int16_t x462 = INT16_MAX;
	int32_t x463 = INT32_MIN;
	volatile uint16_t x464 = 11U;
	int32_t t112 = -13900;

    t112 = ((x461<=(x462^x463))%x464);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x465 = UINT8_MAX;
	uint64_t x466 = UINT64_MAX;
	volatile int8_t x468 = INT8_MIN;
	static int32_t t113 = -117165191;

    t113 = ((x465<=(x466^x467))%x468);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x469 = 6U;
	uint32_t x470 = 24817269U;
	static int8_t x471 = INT8_MIN;
	volatile uint16_t x472 = 1U;
	static int32_t t114 = 1;

    t114 = ((x469<=(x470^x471))%x472);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint32_t x473 = UINT32_MAX;
	static int32_t x474 = INT32_MAX;
	static volatile int8_t x475 = 1;
	int32_t t115 = 62;

    t115 = ((x473<=(x474^x475))%x476);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint8_t x477 = 0U;
	int16_t x478 = 95;
	int64_t x479 = INT64_MIN;
	volatile uint8_t x480 = UINT8_MAX;
	static volatile int32_t t116 = 3;

    t116 = ((x477<=(x478^x479))%x480);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x481 = INT16_MIN;
	volatile int16_t x482 = INT16_MAX;
	int32_t x483 = INT32_MIN;
	int64_t x484 = -1LL;
	volatile int64_t t117 = -13469080764891646LL;

    t117 = ((x481<=(x482^x483))%x484);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x485 = INT64_MAX;
	int8_t x486 = -1;
	int64_t x487 = INT64_MIN;
	static int64_t x488 = INT64_MAX;
	volatile int64_t t118 = -62057LL;

    t118 = ((x485<=(x486^x487))%x488);

    if (t118 != 1LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x489 = INT64_MIN;
	volatile int8_t x490 = -2;
	static volatile int32_t x491 = -1;
	uint64_t x492 = 3957312929833LLU;
	uint64_t t119 = 24010732840LLU;

    t119 = ((x489<=(x490^x491))%x492);

    if (t119 != 1LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x493 = INT16_MAX;
	int32_t x494 = INT32_MIN;
	int16_t x495 = INT16_MAX;
	int64_t x496 = -1LL;
	int64_t t120 = -62985LL;

    t120 = ((x493<=(x494^x495))%x496);

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x497 = 71LL;
	int32_t x498 = INT32_MIN;
	uint8_t x499 = 0U;
	int32_t x500 = 1;
	volatile int32_t t121 = 171702;

    t121 = ((x497<=(x498^x499))%x500);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x501 = 986208LL;
	int8_t x503 = 1;
	int8_t x504 = -1;
	static int32_t t122 = -176;

    t122 = ((x501<=(x502^x503))%x504);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x505 = UINT16_MAX;
	volatile uint64_t x507 = 138606731948300LLU;
	int64_t x508 = 90115374922767LL;
	int64_t t123 = -2038458LL;

    t123 = ((x505<=(x506^x507))%x508);

    if (t123 != 1LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x509 = 106U;
	int8_t x510 = -14;
	volatile int64_t x511 = INT64_MAX;
	int8_t x512 = INT8_MAX;
	static volatile int32_t t124 = -98668578;

    t124 = ((x509<=(x510^x511))%x512);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x514 = 12596926LLU;
	uint16_t x515 = 9616U;
	int32_t t125 = 0;

    t125 = ((x513<=(x514^x515))%x516);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x517 = INT32_MIN;
	static int32_t x518 = INT32_MIN;
	volatile int64_t x519 = INT64_MAX;
	int8_t x520 = INT8_MIN;
	static int32_t t126 = 9076921;

    t126 = ((x517<=(x518^x519))%x520);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint64_t x521 = UINT64_MAX;
	uint16_t x522 = 3212U;
	int8_t x523 = -14;
	int8_t x524 = -4;
	volatile int32_t t127 = -1;

    t127 = ((x521<=(x522^x523))%x524);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x525 = INT64_MAX;
	uint32_t x526 = 58707492U;
	int32_t x527 = 10;
	volatile int32_t x528 = -93154;
	int32_t t128 = -1125825;

    t128 = ((x525<=(x526^x527))%x528);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x532 = 21U;

    t129 = ((x529<=(x530^x531))%x532);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x533 = 44;
	volatile uint32_t x535 = 3765U;
	static int32_t x536 = 534393896;

    t130 = ((x533<=(x534^x535))%x536);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x537 = INT64_MAX;
	volatile uint16_t x539 = 2407U;
	uint8_t x540 = 13U;
	volatile int32_t t131 = -53638;

    t131 = ((x537<=(x538^x539))%x540);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x541 = UINT32_MAX;
	static uint32_t x542 = UINT32_MAX;
	uint16_t x543 = UINT16_MAX;
	uint16_t x544 = UINT16_MAX;
	volatile int32_t t132 = 263889549;

    t132 = ((x541<=(x542^x543))%x544);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x545 = 505114917643441LLU;
	uint32_t x546 = 83019822U;
	static uint8_t x547 = 14U;
	static volatile int32_t x548 = INT32_MIN;
	int32_t t133 = -6;

    t133 = ((x545<=(x546^x547))%x548);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x549 = 875858310725LL;
	uint16_t x550 = UINT16_MAX;
	int16_t x551 = 93;
	static int16_t x552 = INT16_MIN;

    t134 = ((x549<=(x550^x551))%x552);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x553 = INT16_MIN;
	volatile int64_t x554 = INT64_MAX;
	static int64_t x555 = -1LL;
	uint8_t x556 = UINT8_MAX;
	volatile int32_t t135 = -711365902;

    t135 = ((x553<=(x554^x555))%x556);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x557 = -80;
	uint8_t x558 = 70U;
	static int64_t x560 = INT64_MIN;

    t136 = ((x557<=(x558^x559))%x560);

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x561 = INT64_MAX;
	uint32_t x563 = 405564U;
	volatile int64_t t137 = -24900LL;

    t137 = ((x561<=(x562^x563))%x564);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x565 = INT32_MIN;
	int8_t x567 = INT8_MIN;
	int32_t x568 = INT32_MIN;
	int32_t t138 = -29;

    t138 = ((x565<=(x566^x567))%x568);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x569 = INT8_MIN;
	uint8_t x570 = 6U;
	static uint64_t x571 = 9577764LLU;
	int32_t t139 = -106391715;

    t139 = ((x569<=(x570^x571))%x572);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x573 = 8U;
	int32_t x574 = INT32_MIN;
	uint32_t x576 = 18906625U;

    t140 = ((x573<=(x574^x575))%x576);

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x577 = -1;
	uint64_t x579 = 4154634762795360695LLU;
	int64_t x580 = INT64_MIN;

    t141 = ((x577<=(x578^x579))%x580);

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x581 = INT32_MAX;
	int16_t x582 = 57;
	uint16_t x583 = UINT16_MAX;
	int32_t x584 = INT32_MIN;
	volatile int32_t t142 = 25330203;

    t142 = ((x581<=(x582^x583))%x584);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x585 = INT64_MIN;
	int8_t x586 = -6;
	static int8_t x587 = -1;
	static uint32_t x588 = UINT32_MAX;
	uint32_t t143 = 7264406U;

    t143 = ((x585<=(x586^x587))%x588);

    if (t143 != 1U) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x591 = -1;
	uint32_t x592 = UINT32_MAX;

    t144 = ((x589<=(x590^x591))%x592);

    if (t144 != 0U) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x593 = INT8_MIN;
	int64_t x594 = -1607393582812603LL;
	int64_t x595 = -1LL;
	static volatile uint16_t x596 = 7100U;
	int32_t t145 = 7529;

    t145 = ((x593<=(x594^x595))%x596);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x597 = UINT8_MAX;
	int32_t x598 = INT32_MIN;
	uint8_t x599 = 30U;
	uint8_t x600 = UINT8_MAX;
	volatile int32_t t146 = -26763;

    t146 = ((x597<=(x598^x599))%x600);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint32_t x601 = 63785591U;
	int64_t x602 = INT64_MIN;
	uint32_t x604 = UINT32_MAX;
	uint32_t t147 = 1960834244U;

    t147 = ((x601<=(x602^x603))%x604);

    if (t147 != 1U) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x605 = 1207302649LLU;
	int16_t x608 = -1017;
	volatile int32_t t148 = 118;

    t148 = ((x605<=(x606^x607))%x608);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x610 = 49;
	int32_t x611 = INT32_MIN;
	uint8_t x612 = UINT8_MAX;
	static int32_t t149 = -35;

    t149 = ((x609<=(x610^x611))%x612);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x613 = -1;
	int32_t x615 = INT32_MAX;
	int8_t x616 = -1;
	volatile int32_t t150 = 148913548;

    t150 = ((x613<=(x614^x615))%x616);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x617 = -1;
	int8_t x618 = INT8_MIN;
	uint64_t x619 = 292853653563185011LLU;
	uint64_t x620 = 288294726LLU;

    t151 = ((x617<=(x618^x619))%x620);

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x621 = INT64_MIN;
	int64_t x623 = 29LL;
	volatile int8_t x624 = INT8_MIN;
	static int32_t t152 = -18874069;

    t152 = ((x621<=(x622^x623))%x624);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x625 = UINT16_MAX;
	int64_t x626 = INT64_MIN;
	int32_t x628 = -35325;
	int32_t t153 = 0;

    t153 = ((x625<=(x626^x627))%x628);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x629 = INT8_MAX;
	static int32_t t154 = -13021;

    t154 = ((x629<=(x630^x631))%x632);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x634 = INT8_MIN;
	uint8_t x635 = 0U;
	static volatile int32_t x636 = INT32_MAX;
	int32_t t155 = 277794;

    t155 = ((x633<=(x634^x635))%x636);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x637 = UINT16_MAX;
	static uint8_t x638 = 36U;
	static volatile int16_t x640 = -5111;
	int32_t t156 = 21964775;

    t156 = ((x637<=(x638^x639))%x640);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x641 = -1LL;
	volatile int8_t x642 = INT8_MAX;
	int16_t x643 = -1;
	volatile int32_t t157 = -1462;

    t157 = ((x641<=(x642^x643))%x644);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint32_t x645 = 211267U;
	static uint16_t x647 = UINT16_MAX;
	uint8_t x648 = UINT8_MAX;
	volatile int32_t t158 = 6078;

    t158 = ((x645<=(x646^x647))%x648);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x649 = 0U;
	static int8_t x650 = 4;
	volatile int8_t x651 = -62;
	uint16_t x652 = 437U;
	static int32_t t159 = 11265473;

    t159 = ((x649<=(x650^x651))%x652);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int32_t x655 = INT32_MIN;
	uint64_t x656 = 4646LLU;
	volatile uint64_t t160 = 6551341267393604LLU;

    t160 = ((x653<=(x654^x655))%x656);

    if (t160 != 1LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x657 = -1;
	int64_t x658 = INT64_MAX;
	static int16_t x659 = 5319;
	uint8_t x660 = 36U;
	static int32_t t161 = -1890;

    t161 = ((x657<=(x658^x659))%x660);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x661 = UINT8_MAX;
	uint8_t x662 = 1U;
	uint64_t x663 = UINT64_MAX;

    t162 = ((x661<=(x662^x663))%x664);

    if (t162 != 1U) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x666 = -145152;
	static int32_t x667 = -1;
	int32_t x668 = -183249;
	int32_t t163 = 1505365;

    t163 = ((x665<=(x666^x667))%x668);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x669 = INT16_MIN;
	int8_t x670 = -2;
	uint64_t x672 = 14170LLU;
	uint64_t t164 = 47653297LLU;

    t164 = ((x669<=(x670^x671))%x672);

    if (t164 != 1LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x673 = 30573611218LLU;
	volatile uint8_t x674 = 1U;
	static int16_t x675 = -1;

    t165 = ((x673<=(x674^x675))%x676);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x677 = INT64_MAX;
	static uint8_t x678 = UINT8_MAX;
	static uint16_t x679 = 25U;
	static int64_t x680 = 209607096007LL;
	int64_t t166 = 0LL;

    t166 = ((x677<=(x678^x679))%x680);

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x681 = 473057158248441LL;
	int64_t x683 = INT64_MIN;
	static int32_t t167 = -144316;

    t167 = ((x681<=(x682^x683))%x684);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x687 = 2713831781266LL;
	static volatile int32_t x688 = -6961027;
	int32_t t168 = -518;

    t168 = ((x685<=(x686^x687))%x688);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x689 = 3177U;
	uint32_t x690 = 780498290U;
	int8_t x691 = INT8_MIN;
	volatile int64_t x692 = INT64_MIN;
	int64_t t169 = 165627752124403512LL;

    t169 = ((x689<=(x690^x691))%x692);

    if (t169 != 1LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x693 = INT16_MAX;
	int16_t x694 = -1;
	static int8_t x695 = -1;
	int32_t t170 = 324;

    t170 = ((x693<=(x694^x695))%x696);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x697 = INT64_MIN;
	static int32_t x698 = -1;
	volatile int32_t x699 = INT32_MIN;
	static int64_t x700 = INT64_MAX;
	static int64_t t171 = 30LL;

    t171 = ((x697<=(x698^x699))%x700);

    if (t171 != 1LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x702 = INT16_MIN;
	uint16_t x703 = 0U;
	uint64_t x704 = UINT64_MAX;
	uint64_t t172 = 151937758132152LLU;

    t172 = ((x701<=(x702^x703))%x704);

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x705 = -109006348160961883LL;
	int32_t x707 = INT32_MAX;
	volatile int32_t t173 = -128786421;

    t173 = ((x705<=(x706^x707))%x708);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x709 = -52526153891500602LL;
	int16_t x710 = 1870;
	int32_t t174 = -232;

    t174 = ((x709<=(x710^x711))%x712);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x713 = UINT8_MAX;
	uint32_t x714 = 5U;
	int16_t x716 = -13;

    t175 = ((x713<=(x714^x715))%x716);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x717 = UINT32_MAX;
	volatile uint8_t x718 = UINT8_MAX;
	int32_t x719 = 12522;
	uint32_t x720 = 124U;
	uint32_t t176 = 78724U;

    t176 = ((x717<=(x718^x719))%x720);

    if (t176 != 0U) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x721 = 6;
	int8_t x722 = INT8_MIN;
	int32_t x723 = -1;
	int16_t x724 = 2;

    t177 = ((x721<=(x722^x723))%x724);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x725 = INT64_MAX;
	int64_t x726 = -1LL;
	int8_t x727 = INT8_MIN;
	static int16_t x728 = INT16_MAX;
	volatile int32_t t178 = -168214777;

    t178 = ((x725<=(x726^x727))%x728);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x729 = INT8_MIN;
	uint8_t x730 = 14U;
	int32_t x731 = INT32_MIN;
	static int16_t x732 = INT16_MAX;
	int32_t t179 = 593404;

    t179 = ((x729<=(x730^x731))%x732);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x734 = 21U;
	uint32_t x736 = 821564382U;
	static uint32_t t180 = 27546635U;

    t180 = ((x733<=(x734^x735))%x736);

    if (t180 != 1U) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x737 = -27;
	int32_t x739 = INT32_MIN;
	volatile int64_t t181 = 54383LL;

    t181 = ((x737<=(x738^x739))%x740);

    if (t181 != 1LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x742 = UINT64_MAX;
	int8_t x743 = 12;
	int32_t x744 = INT32_MIN;
	volatile int32_t t182 = -51029518;

    t182 = ((x741<=(x742^x743))%x744);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x745 = -1;
	int32_t x747 = -1;
	int16_t x748 = 674;
	int32_t t183 = -17610;

    t183 = ((x745<=(x746^x747))%x748);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x749 = INT8_MIN;
	uint32_t x750 = 13U;
	uint16_t x751 = 188U;
	volatile int32_t x752 = -1;
	volatile int32_t t184 = -152;

    t184 = ((x749<=(x750^x751))%x752);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x754 = INT32_MIN;
	volatile uint64_t x755 = UINT64_MAX;
	static int64_t x756 = -1LL;
	volatile int64_t t185 = -109LL;

    t185 = ((x753<=(x754^x755))%x756);

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x758 = INT64_MAX;
	static int64_t x759 = INT64_MAX;
	static int8_t x760 = -19;

    t186 = ((x757<=(x758^x759))%x760);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x761 = -1LL;
	int16_t x762 = -1;
	static uint16_t x763 = 3U;
	static int16_t x764 = -1;
	volatile int32_t t187 = 27;

    t187 = ((x761<=(x762^x763))%x764);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x765 = INT64_MAX;
	volatile int32_t x766 = -55;
	int16_t x768 = -7288;
	volatile int32_t t188 = 3;

    t188 = ((x765<=(x766^x767))%x768);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x770 = -1;
	int64_t x771 = INT64_MAX;
	static uint64_t x772 = 364477499324LLU;

    t189 = ((x769<=(x770^x771))%x772);

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x773 = 300794867614LL;
	volatile int8_t x774 = -3;
	int8_t x775 = INT8_MIN;
	int64_t x776 = INT64_MIN;

    t190 = ((x773<=(x774^x775))%x776);

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x778 = -1;
	int32_t x779 = 37837;
	volatile int32_t t191 = 18528;

    t191 = ((x777<=(x778^x779))%x780);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x782 = INT8_MIN;
	int64_t x783 = INT64_MIN;
	uint64_t x784 = UINT64_MAX;
	volatile uint64_t t192 = 8826942930586815613LLU;

    t192 = ((x781<=(x782^x783))%x784);

    if (t192 != 1LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x785 = -1;
	static int64_t x787 = 401111752059696373LL;
	uint64_t x788 = 4024611820757619958LLU;
	volatile uint64_t t193 = 461LLU;

    t193 = ((x785<=(x786^x787))%x788);

    if (t193 != 1LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x790 = INT8_MIN;
	volatile uint8_t x791 = UINT8_MAX;
	int64_t x792 = INT64_MIN;
	volatile int64_t t194 = 141932LL;

    t194 = ((x789<=(x790^x791))%x792);

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x793 = 360U;
	volatile uint32_t x794 = 31028540U;
	int8_t x795 = INT8_MIN;
	uint16_t x796 = UINT16_MAX;

    t195 = ((x793<=(x794^x795))%x796);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x797 = -1;
	static volatile int8_t x798 = -1;
	static int16_t x799 = INT16_MIN;
	int32_t x800 = INT32_MAX;
	volatile int32_t t196 = 51698;

    t196 = ((x797<=(x798^x799))%x800);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x801 = -1;
	int64_t x802 = -1LL;
	uint32_t x803 = UINT32_MAX;
	static volatile int8_t x804 = -5;

    t197 = ((x801<=(x802^x803))%x804);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x805 = -1;
	uint32_t x808 = 310131U;
	uint32_t t198 = 2879435U;

    t198 = ((x805<=(x806^x807))%x808);

    if (t198 != 0U) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x809 = INT8_MAX;
	static volatile int32_t x811 = INT32_MAX;
	int16_t x812 = INT16_MAX;
	volatile int32_t t199 = -59803337;

    t199 = ((x809<=(x810^x811))%x812);

    if (t199 != 1) { NG(); } else { ; }
	
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



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

int8_t x2 = -1;
int16_t x4 = INT16_MIN;
uint64_t x5 = 135593823301LLU;
static volatile uint8_t x6 = 2U;
uint32_t x8 = UINT32_MAX;
static int16_t x11 = -3199;
volatile int32_t t2 = -20;
static int32_t x13 = INT32_MAX;
volatile int32_t t7 = -1;
int64_t x42 = INT64_MIN;
volatile int32_t t10 = 3988;
static uint8_t x49 = 3U;
volatile int8_t x50 = INT8_MIN;
int16_t x60 = INT16_MIN;
uint64_t x62 = UINT64_MAX;
volatile int32_t t14 = -8062;
static volatile uint16_t x72 = 31U;
int32_t x77 = INT32_MIN;
uint64_t x80 = 437820067585107LLU;
volatile int32_t t18 = 3735;
int32_t t21 = 101103;
uint64_t x99 = 16LLU;
static volatile int8_t x103 = -1;
volatile uint16_t x104 = 29559U;
static uint32_t x110 = 2914U;
volatile uint32_t x114 = 62183434U;
volatile uint64_t x116 = 1751824125515126LLU;
int32_t t26 = 13782;
int8_t x118 = -1;
volatile int32_t t27 = -63251;
uint16_t x123 = 14U;
volatile int32_t t28 = -32883;
volatile uint64_t x126 = UINT64_MAX;
int8_t x133 = -26;
int8_t x141 = INT8_MIN;
int8_t x142 = INT8_MIN;
uint16_t x152 = 4U;
int32_t t35 = 1543363;
int64_t x158 = 68142669089LL;
static int32_t t36 = 114;
static int32_t t38 = 942;
int32_t x178 = INT32_MIN;
int64_t x180 = INT64_MIN;
static int32_t x182 = INT32_MIN;
uint8_t x188 = 12U;
static int16_t x190 = 40;
int32_t t44 = -69762;
volatile int64_t x197 = INT64_MIN;
volatile uint64_t x198 = 619432LLU;
int64_t x200 = INT64_MIN;
int64_t x204 = INT64_MIN;
int64_t x206 = 11884544055LL;
int16_t x211 = INT16_MAX;
volatile int32_t t48 = -641985;
int8_t x214 = 1;
uint32_t x219 = 27971U;
volatile int16_t x229 = INT16_MIN;
int16_t x236 = -1;
uint16_t x243 = 377U;
static uint32_t x254 = 314348550U;
volatile int16_t x258 = -1;
int16_t x267 = 12228;
int32_t t62 = 223;
static int16_t x278 = -17;
int8_t x279 = -27;
int32_t x289 = 1861;
volatile int16_t x290 = INT16_MIN;
static int64_t x292 = INT64_MAX;
int32_t x297 = -659008;
static uint16_t x298 = 124U;
volatile int32_t x300 = INT32_MIN;
int32_t t69 = 26;
volatile int32_t t71 = 67633177;
uint32_t x309 = 1U;
uint32_t x312 = UINT32_MAX;
static int8_t x313 = 62;
uint32_t x317 = 15U;
int32_t t74 = 1060921090;
uint8_t x324 = 10U;
volatile int32_t t75 = -7061;
uint16_t x325 = 19U;
int64_t x327 = -58181182LL;
volatile int16_t x332 = 21;
uint16_t x333 = UINT16_MAX;
uint16_t x334 = 3138U;
volatile int32_t t78 = 0;
uint16_t x340 = 4U;
uint16_t x344 = 0U;
int32_t t80 = 212069076;
uint16_t x345 = 1711U;
int32_t x351 = -1;
volatile int64_t x356 = INT64_MIN;
int64_t x357 = -1LL;
int8_t x359 = -1;
uint16_t x369 = 22043U;
volatile uint8_t x372 = 60U;
volatile int32_t x375 = INT32_MAX;
volatile int32_t t87 = -9;
int64_t x379 = -23948813LL;
int16_t x387 = INT16_MIN;
uint64_t x388 = 15996710814LLU;
int64_t x390 = INT64_MIN;
int32_t x394 = -1;
uint32_t x395 = 5744U;
int64_t x398 = INT64_MAX;
uint16_t x400 = 10U;
volatile int8_t x401 = -1;
int16_t x402 = -3582;
volatile uint32_t x403 = UINT32_MAX;
static uint32_t x409 = 0U;
uint32_t x410 = UINT32_MAX;
volatile int32_t t96 = 1768491;
volatile int8_t x419 = INT8_MIN;
volatile uint8_t x421 = 7U;
volatile uint32_t x430 = UINT32_MAX;
volatile int32_t x436 = -1;
static volatile int32_t t102 = 31379051;
uint16_t x441 = 7247U;
int8_t x445 = INT8_MAX;
int16_t x447 = -431;
uint64_t x448 = 155046839612LLU;
static volatile int16_t x451 = 1;
int32_t x460 = INT32_MIN;
volatile int32_t t109 = 399839;
int32_t t111 = 13225988;
static int64_t x490 = 6LL;
int64_t x494 = INT64_MIN;
volatile int64_t x498 = 93LL;
int16_t x500 = INT16_MIN;
int16_t x512 = INT16_MAX;
volatile uint32_t x515 = 24317765U;
static volatile int32_t t121 = 470225;
uint8_t x518 = 4U;
uint32_t x519 = UINT32_MAX;
int16_t x521 = -1;
static int16_t x528 = INT16_MAX;
int32_t x531 = INT32_MIN;
static volatile int64_t x532 = INT64_MIN;
int32_t t126 = 1081;
int16_t x545 = -1;
volatile uint8_t x552 = UINT8_MAX;
int32_t x554 = -1;
static uint16_t x562 = 7896U;
uint16_t x568 = UINT16_MAX;
volatile int32_t t134 = 589855;
int64_t x572 = INT64_MAX;
int64_t x576 = 14LL;
static uint16_t x584 = 1949U;
int8_t x585 = INT8_MIN;
int64_t x587 = -1LL;
static volatile int32_t t139 = -60751;
static volatile int8_t x589 = INT8_MIN;
int32_t t140 = -721898097;
uint8_t x594 = UINT8_MAX;
int16_t x597 = -1;
int32_t x598 = -1;
int16_t x599 = -1;
int64_t x600 = -195506486LL;
static int32_t t142 = 2;
int8_t x604 = INT8_MIN;
volatile int64_t x615 = -14024515328LL;
volatile uint8_t x616 = 54U;
int8_t x620 = -15;
static volatile int64_t x627 = INT64_MIN;
volatile int32_t x651 = INT32_MIN;
int32_t t159 = -665117464;
int64_t x676 = INT64_MIN;
int32_t t160 = -26;
volatile int32_t t161 = -5;
uint16_t x681 = 524U;
volatile int64_t x684 = INT64_MIN;
volatile int32_t t164 = 0;
volatile int8_t x704 = -56;
static int32_t t167 = 39;
static volatile int64_t x706 = INT64_MAX;
uint16_t x708 = 3U;
int64_t x711 = -1LL;
int8_t x712 = -3;
int16_t x714 = INT16_MIN;
static uint64_t x717 = 2176450LLU;
static volatile int32_t t171 = 69;
int32_t x721 = -228997;
uint8_t x724 = 6U;
int8_t x725 = -1;
static int32_t t173 = -44865498;
int32_t x730 = INT32_MIN;
int8_t x732 = -1;
int32_t x733 = -283832314;
int16_t x738 = INT16_MAX;
int32_t x741 = INT32_MAX;
volatile int32_t x743 = -1;
static uint32_t x748 = UINT32_MAX;
volatile int16_t x761 = -1;
int8_t x762 = -1;
volatile int32_t t182 = -460;
uint8_t x766 = 14U;
volatile int8_t x776 = INT8_MIN;
static volatile int32_t t185 = 1;
uint16_t x780 = UINT16_MAX;
volatile int32_t t186 = -56;
int16_t x784 = 234;
volatile uint64_t x790 = 303034017601LLU;
static int8_t x796 = -1;
int64_t x800 = -496241505865LL;
static int32_t t191 = -29914044;
int64_t x807 = INT64_MIN;
int16_t x809 = -1;
static int64_t x811 = -1LL;
int64_t x813 = -3514725418947LL;
int64_t x816 = INT64_MAX;
int16_t x819 = INT16_MIN;
int32_t t196 = -1;
static int32_t t199 = -87238;


void f0(void) {
    	int16_t x1 = INT16_MAX;
	static int64_t x3 = INT64_MIN;
	volatile int32_t t0 = -775827;

    t0 = ((x1+(x2%x3))<=x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint8_t x7 = UINT8_MAX;
	static int32_t t1 = -6633;

    t1 = ((x5+(x6%x7))<=x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint64_t x9 = UINT64_MAX;
	volatile int32_t x10 = 0;
	uint32_t x12 = UINT32_MAX;

    t2 = ((x9+(x10%x11))<=x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x14 = 10648733337392LLU;
	int32_t x15 = INT32_MIN;
	uint16_t x16 = 2909U;
	volatile int32_t t3 = -1;

    t3 = ((x13+(x14%x15))<=x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = 1;
	static int32_t x18 = INT32_MIN;
	int8_t x19 = 53;
	static volatile int8_t x20 = -1;
	volatile int32_t t4 = -1;

    t4 = ((x17+(x18%x19))<=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile uint16_t x25 = UINT16_MAX;
	volatile int16_t x26 = -1;
	uint64_t x27 = UINT64_MAX;
	int16_t x28 = INT16_MIN;
	volatile int32_t t5 = 7375923;

    t5 = ((x25+(x26%x27))<=x28);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x29 = 24;
	uint32_t x30 = UINT32_MAX;
	uint64_t x31 = 233LLU;
	volatile uint8_t x32 = UINT8_MAX;
	static volatile int32_t t6 = -1269710;

    t6 = ((x29+(x30%x31))<=x32);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int8_t x33 = -1;
	volatile int64_t x34 = -283403442077LL;
	int8_t x35 = INT8_MIN;
	int16_t x36 = INT16_MAX;

    t7 = ((x33+(x34%x35))<=x36);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x37 = UINT64_MAX;
	uint16_t x38 = UINT16_MAX;
	uint32_t x39 = 961U;
	static volatile int16_t x40 = INT16_MIN;
	volatile int32_t t8 = -2252902;

    t8 = ((x37+(x38%x39))<=x40);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x41 = -1LL;
	uint8_t x43 = 14U;
	int8_t x44 = INT8_MAX;
	volatile int32_t t9 = 3182177;

    t9 = ((x41+(x42%x43))<=x44);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x45 = INT32_MIN;
	uint64_t x46 = 5556869687677730LLU;
	int32_t x47 = INT32_MAX;
	static volatile int32_t x48 = -270643752;

    t10 = ((x45+(x46%x47))<=x48);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x51 = 5U;
	volatile int32_t x52 = -1;
	volatile int32_t t11 = -2824704;

    t11 = ((x49+(x50%x51))<=x52);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint64_t x57 = 239450959287LLU;
	volatile uint64_t x58 = 3568461253LLU;
	volatile int32_t x59 = 2572;
	static volatile int32_t t12 = -3972490;

    t12 = ((x57+(x58%x59))<=x60);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x61 = -1;
	int16_t x63 = INT16_MIN;
	int16_t x64 = -1039;
	static volatile int32_t t13 = 0;

    t13 = ((x61+(x62%x63))<=x64);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int32_t x65 = -243674;
	int64_t x66 = INT64_MAX;
	uint8_t x67 = 1U;
	int64_t x68 = INT64_MIN;

    t14 = ((x65+(x66%x67))<=x68);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x69 = UINT16_MAX;
	int64_t x70 = INT64_MIN;
	static uint64_t x71 = 58670230083941LLU;
	int32_t t15 = 19712503;

    t15 = ((x69+(x70%x71))<=x72);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x73 = 140280563;
	uint16_t x74 = 14U;
	volatile int8_t x75 = -3;
	int64_t x76 = INT64_MIN;
	static int32_t t16 = 0;

    t16 = ((x73+(x74%x75))<=x76);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x78 = INT64_MIN;
	volatile int8_t x79 = INT8_MIN;
	volatile int32_t t17 = 560533410;

    t17 = ((x77+(x78%x79))<=x80);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x81 = -1;
	uint64_t x82 = UINT64_MAX;
	int64_t x83 = -715757548772LL;
	int16_t x84 = -641;

    t18 = ((x81+(x82%x83))<=x84);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x85 = INT16_MAX;
	volatile uint64_t x86 = UINT64_MAX;
	int64_t x87 = 226902034254909274LL;
	volatile int32_t x88 = INT32_MAX;
	volatile int32_t t19 = -37358527;

    t19 = ((x85+(x86%x87))<=x88);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint32_t x89 = 1131119460U;
	int16_t x90 = -1;
	int32_t x91 = -4864;
	uint16_t x92 = 3731U;
	static volatile int32_t t20 = -272890031;

    t20 = ((x89+(x90%x91))<=x92);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x93 = 29018085U;
	uint64_t x94 = 3896021910191LLU;
	int8_t x95 = INT8_MAX;
	static uint32_t x96 = 593U;

    t21 = ((x93+(x94%x95))<=x96);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x97 = INT16_MIN;
	int8_t x98 = 2;
	static volatile int8_t x100 = -5;
	volatile int32_t t22 = -1;

    t22 = ((x97+(x98%x99))<=x100);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x101 = INT64_MAX;
	uint16_t x102 = 5U;
	volatile int32_t t23 = -376945;

    t23 = ((x101+(x102%x103))<=x104);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x105 = INT32_MAX;
	uint16_t x106 = UINT16_MAX;
	uint16_t x107 = UINT16_MAX;
	static int8_t x108 = INT8_MAX;
	static volatile int32_t t24 = 573075;

    t24 = ((x105+(x106%x107))<=x108);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x109 = INT16_MIN;
	uint16_t x111 = 3U;
	static int8_t x112 = -1;
	volatile int32_t t25 = 0;

    t25 = ((x109+(x110%x111))<=x112);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x113 = -7587738;
	volatile int64_t x115 = 7763946LL;

    t26 = ((x113+(x114%x115))<=x116);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x117 = 74U;
	int16_t x119 = 275;
	static int8_t x120 = INT8_MIN;

    t27 = ((x117+(x118%x119))<=x120);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint8_t x121 = 15U;
	int16_t x122 = 2995;
	uint32_t x124 = 1472546829U;

    t28 = ((x121+(x122%x123))<=x124);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x125 = INT16_MIN;
	int16_t x127 = -30;
	int16_t x128 = INT16_MIN;
	volatile int32_t t29 = -30;

    t29 = ((x125+(x126%x127))<=x128);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x134 = 2953030LL;
	int32_t x135 = 578;
	int32_t x136 = INT32_MAX;
	int32_t t30 = 64694;

    t30 = ((x133+(x134%x135))<=x136);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x137 = INT32_MIN;
	volatile int16_t x138 = -43;
	int64_t x139 = INT64_MAX;
	uint8_t x140 = 102U;
	static volatile int32_t t31 = 49320;

    t31 = ((x137+(x138%x139))<=x140);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x143 = INT64_MAX;
	int8_t x144 = INT8_MAX;
	volatile int32_t t32 = -11356953;

    t32 = ((x141+(x142%x143))<=x144);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x145 = -1;
	static int8_t x146 = INT8_MIN;
	int16_t x147 = INT16_MIN;
	volatile int64_t x148 = 163LL;
	int32_t t33 = 15071091;

    t33 = ((x145+(x146%x147))<=x148);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint64_t x149 = 60212346LLU;
	int8_t x150 = -9;
	uint64_t x151 = 1LLU;
	volatile int32_t t34 = -3;

    t34 = ((x149+(x150%x151))<=x152);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x153 = 23;
	static volatile int64_t x154 = INT64_MIN;
	uint16_t x155 = 5183U;
	int32_t x156 = 122441544;

    t35 = ((x153+(x154%x155))<=x156);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x157 = UINT8_MAX;
	static uint64_t x159 = 13LLU;
	uint16_t x160 = UINT16_MAX;

    t36 = ((x157+(x158%x159))<=x160);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x161 = -1;
	int32_t x162 = INT32_MAX;
	int64_t x163 = -1LL;
	uint16_t x164 = UINT16_MAX;
	volatile int32_t t37 = -6911636;

    t37 = ((x161+(x162%x163))<=x164);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint64_t x169 = 43858293234616747LLU;
	int64_t x170 = INT64_MIN;
	int16_t x171 = INT16_MIN;
	int16_t x172 = INT16_MIN;

    t38 = ((x169+(x170%x171))<=x172);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x173 = INT32_MIN;
	int32_t x174 = INT32_MAX;
	uint64_t x175 = 282913LLU;
	int32_t x176 = -1;
	volatile int32_t t39 = 6561;

    t39 = ((x173+(x174%x175))<=x176);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x177 = 2870U;
	int16_t x179 = -1;
	volatile int32_t t40 = 30;

    t40 = ((x177+(x178%x179))<=x180);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x181 = 895060121889657241LL;
	volatile uint16_t x183 = UINT16_MAX;
	uint64_t x184 = 101078742866684LLU;
	volatile int32_t t41 = -5175396;

    t41 = ((x181+(x182%x183))<=x184);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x185 = INT16_MIN;
	static int32_t x186 = INT32_MIN;
	uint8_t x187 = UINT8_MAX;
	static int32_t t42 = -157;

    t42 = ((x185+(x186%x187))<=x188);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x189 = INT64_MIN;
	int32_t x191 = -32061412;
	uint16_t x192 = 100U;
	volatile int32_t t43 = -12064646;

    t43 = ((x189+(x190%x191))<=x192);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x193 = -9906;
	volatile uint16_t x194 = 500U;
	int64_t x195 = INT64_MAX;
	static int32_t x196 = 653877;

    t44 = ((x193+(x194%x195))<=x196);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x199 = 210U;
	static int32_t t45 = 7660;

    t45 = ((x197+(x198%x199))<=x200);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x201 = INT8_MIN;
	volatile int16_t x202 = -1;
	static int16_t x203 = -835;
	int32_t t46 = -1;

    t46 = ((x201+(x202%x203))<=x204);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x205 = INT16_MAX;
	int16_t x207 = INT16_MAX;
	uint32_t x208 = 17609074U;
	volatile int32_t t47 = 27847;

    t47 = ((x205+(x206%x207))<=x208);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x209 = -1LL;
	volatile int32_t x210 = 548;
	int64_t x212 = INT64_MIN;

    t48 = ((x209+(x210%x211))<=x212);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x213 = -1;
	uint64_t x215 = 133239LLU;
	uint8_t x216 = 7U;
	volatile int32_t t49 = 339;

    t49 = ((x213+(x214%x215))<=x216);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x217 = INT64_MIN;
	static uint16_t x218 = 28U;
	int64_t x220 = -1LL;
	volatile int32_t t50 = 578495;

    t50 = ((x217+(x218%x219))<=x220);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x225 = 20U;
	int64_t x226 = 124269841542306LL;
	uint64_t x227 = 1813LLU;
	static volatile uint16_t x228 = 2416U;
	volatile int32_t t51 = -185;

    t51 = ((x225+(x226%x227))<=x228);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint16_t x230 = UINT16_MAX;
	volatile int8_t x231 = INT8_MAX;
	static int8_t x232 = INT8_MIN;
	int32_t t52 = -152;

    t52 = ((x229+(x230%x231))<=x232);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x233 = -1;
	int16_t x234 = -1;
	volatile int32_t x235 = INT32_MAX;
	static volatile int32_t t53 = -758;

    t53 = ((x233+(x234%x235))<=x236);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x237 = -1;
	static int8_t x238 = 4;
	static volatile int16_t x239 = 13;
	uint16_t x240 = 0U;
	volatile int32_t t54 = 8;

    t54 = ((x237+(x238%x239))<=x240);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint16_t x241 = 2U;
	int64_t x242 = INT64_MIN;
	int64_t x244 = INT64_MAX;
	int32_t t55 = -400169;

    t55 = ((x241+(x242%x243))<=x244);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x245 = INT16_MIN;
	int16_t x246 = 0;
	int32_t x247 = INT32_MAX;
	int32_t x248 = INT32_MIN;
	int32_t t56 = -1;

    t56 = ((x245+(x246%x247))<=x248);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x249 = 139844050937493LL;
	int64_t x250 = INT64_MIN;
	int32_t x251 = -18;
	int16_t x252 = -1;
	volatile int32_t t57 = 207248603;

    t57 = ((x249+(x250%x251))<=x252);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x253 = -16;
	int16_t x255 = INT16_MAX;
	volatile int8_t x256 = INT8_MAX;
	volatile int32_t t58 = -408;

    t58 = ((x253+(x254%x255))<=x256);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x257 = INT64_MAX;
	uint32_t x259 = UINT32_MAX;
	uint8_t x260 = UINT8_MAX;
	int32_t t59 = 207469;

    t59 = ((x257+(x258%x259))<=x260);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x261 = 868U;
	int32_t x262 = INT32_MAX;
	int64_t x263 = INT64_MAX;
	int32_t x264 = INT32_MIN;
	volatile int32_t t60 = -33081521;

    t60 = ((x261+(x262%x263))<=x264);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x265 = -98;
	static uint8_t x266 = 22U;
	int16_t x268 = -11;
	int32_t t61 = 31;

    t61 = ((x265+(x266%x267))<=x268);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x269 = 96900219921577706LLU;
	int16_t x270 = 30;
	int16_t x271 = -1;
	int32_t x272 = -1;

    t62 = ((x269+(x270%x271))<=x272);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x273 = -11;
	uint32_t x274 = 2517U;
	volatile uint8_t x275 = UINT8_MAX;
	int8_t x276 = INT8_MIN;
	int32_t t63 = -2583;

    t63 = ((x273+(x274%x275))<=x276);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x277 = 1U;
	int16_t x280 = INT16_MAX;
	int32_t t64 = 183123411;

    t64 = ((x277+(x278%x279))<=x280);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int64_t x281 = INT64_MAX;
	int8_t x282 = -1;
	int8_t x283 = INT8_MIN;
	uint64_t x284 = 282604686196418660LLU;
	volatile int32_t t65 = 596654864;

    t65 = ((x281+(x282%x283))<=x284);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x285 = INT8_MAX;
	static volatile uint16_t x286 = UINT16_MAX;
	int8_t x287 = 2;
	int16_t x288 = INT16_MAX;
	static volatile int32_t t66 = 1291078;

    t66 = ((x285+(x286%x287))<=x288);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x291 = 8U;
	int32_t t67 = 0;

    t67 = ((x289+(x290%x291))<=x292);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x293 = INT32_MIN;
	static uint16_t x294 = UINT16_MAX;
	volatile int8_t x295 = INT8_MAX;
	int16_t x296 = INT16_MIN;
	volatile int32_t t68 = 36329;

    t68 = ((x293+(x294%x295))<=x296);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x299 = 422U;

    t69 = ((x297+(x298%x299))<=x300);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x301 = 42;
	int32_t x302 = 146;
	static volatile int16_t x303 = INT16_MIN;
	static int8_t x304 = 62;
	int32_t t70 = 2220908;

    t70 = ((x301+(x302%x303))<=x304);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint32_t x305 = 11U;
	static int64_t x306 = INT64_MIN;
	uint32_t x307 = UINT32_MAX;
	int8_t x308 = INT8_MIN;

    t71 = ((x305+(x306%x307))<=x308);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x310 = INT64_MAX;
	int8_t x311 = -1;
	static int32_t t72 = -1816;

    t72 = ((x309+(x310%x311))<=x312);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x314 = UINT32_MAX;
	volatile int32_t x315 = INT32_MIN;
	int64_t x316 = -1LL;
	int32_t t73 = 54163285;

    t73 = ((x313+(x314%x315))<=x316);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x318 = 0U;
	volatile int32_t x319 = -1;
	static uint64_t x320 = 13532312973LLU;

    t74 = ((x317+(x318%x319))<=x320);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x321 = -44;
	static int64_t x322 = INT64_MAX;
	volatile int32_t x323 = 200327288;

    t75 = ((x321+(x322%x323))<=x324);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x326 = INT16_MIN;
	int64_t x328 = -1LL;
	int32_t t76 = -76374700;

    t76 = ((x325+(x326%x327))<=x328);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x329 = INT16_MIN;
	int64_t x330 = INT64_MIN;
	uint16_t x331 = UINT16_MAX;
	volatile int32_t t77 = 29948082;

    t77 = ((x329+(x330%x331))<=x332);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x335 = INT8_MIN;
	static int8_t x336 = -3;

    t78 = ((x333+(x334%x335))<=x336);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint16_t x337 = UINT16_MAX;
	uint32_t x338 = UINT32_MAX;
	int16_t x339 = -1;
	int32_t t79 = 41441555;

    t79 = ((x337+(x338%x339))<=x340);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x341 = -51;
	uint32_t x342 = 432946U;
	int16_t x343 = -1;

    t80 = ((x341+(x342%x343))<=x344);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x346 = 1030668468911651819LL;
	uint16_t x347 = UINT16_MAX;
	int16_t x348 = 0;
	int32_t t81 = 20243224;

    t81 = ((x345+(x346%x347))<=x348);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x349 = 723LLU;
	uint8_t x350 = 54U;
	uint64_t x352 = 110727427235834LLU;
	volatile int32_t t82 = -87129718;

    t82 = ((x349+(x350%x351))<=x352);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x353 = INT16_MIN;
	uint8_t x354 = 19U;
	uint8_t x355 = 25U;
	volatile int32_t t83 = 415225910;

    t83 = ((x353+(x354%x355))<=x356);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x358 = INT8_MIN;
	static volatile uint32_t x360 = UINT32_MAX;
	static volatile int32_t t84 = 87789700;

    t84 = ((x357+(x358%x359))<=x360);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x361 = 41854676283LL;
	static uint16_t x362 = UINT16_MAX;
	int16_t x363 = INT16_MIN;
	int8_t x364 = 13;
	volatile int32_t t85 = 0;

    t85 = ((x361+(x362%x363))<=x364);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x370 = UINT32_MAX;
	static uint32_t x371 = 189782618U;
	volatile int32_t t86 = -3092;

    t86 = ((x369+(x370%x371))<=x372);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x373 = INT32_MIN;
	uint64_t x374 = 4153684065537429LLU;
	static int64_t x376 = -1LL;

    t87 = ((x373+(x374%x375))<=x376);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x377 = 3763029635390033288LL;
	uint64_t x378 = UINT64_MAX;
	int32_t x380 = -1;
	int32_t t88 = 0;

    t88 = ((x377+(x378%x379))<=x380);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x381 = UINT64_MAX;
	int32_t x382 = INT32_MIN;
	int64_t x383 = INT64_MIN;
	int32_t x384 = INT32_MIN;
	volatile int32_t t89 = -924;

    t89 = ((x381+(x382%x383))<=x384);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x385 = -29;
	int32_t x386 = 685877;
	int32_t t90 = -39;

    t90 = ((x385+(x386%x387))<=x388);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x389 = -1;
	int16_t x391 = -10317;
	int32_t x392 = INT32_MAX;
	volatile int32_t t91 = -22;

    t91 = ((x389+(x390%x391))<=x392);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x393 = UINT32_MAX;
	uint64_t x396 = 17971609034490484LLU;
	volatile int32_t t92 = 2938422;

    t92 = ((x393+(x394%x395))<=x396);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x397 = -97435894LL;
	int8_t x399 = 16;
	volatile int32_t t93 = -518;

    t93 = ((x397+(x398%x399))<=x400);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x404 = INT8_MAX;
	int32_t t94 = -1;

    t94 = ((x401+(x402%x403))<=x404);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x405 = -1;
	static volatile int8_t x406 = INT8_MIN;
	int64_t x407 = INT64_MIN;
	uint8_t x408 = 14U;
	int32_t t95 = 72;

    t95 = ((x405+(x406%x407))<=x408);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x411 = UINT8_MAX;
	int64_t x412 = -1LL;

    t96 = ((x409+(x410%x411))<=x412);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint8_t x413 = 69U;
	volatile uint8_t x414 = UINT8_MAX;
	int16_t x415 = INT16_MIN;
	static int64_t x416 = 13LL;
	volatile int32_t t97 = -35;

    t97 = ((x413+(x414%x415))<=x416);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint16_t x417 = UINT16_MAX;
	uint32_t x418 = 780737U;
	volatile int8_t x420 = INT8_MIN;
	static int32_t t98 = -15392183;

    t98 = ((x417+(x418%x419))<=x420);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x422 = 1LLU;
	uint64_t x423 = 1LLU;
	static volatile int16_t x424 = 760;
	int32_t t99 = 160576316;

    t99 = ((x421+(x422%x423))<=x424);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x429 = -1;
	int32_t x431 = -1;
	uint8_t x432 = 8U;
	int32_t t100 = -104469298;

    t100 = ((x429+(x430%x431))<=x432);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x433 = UINT64_MAX;
	int8_t x434 = INT8_MIN;
	int16_t x435 = 577;
	static volatile int32_t t101 = -19605;

    t101 = ((x433+(x434%x435))<=x436);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x437 = INT64_MIN;
	int8_t x438 = INT8_MIN;
	volatile uint32_t x439 = UINT32_MAX;
	volatile int16_t x440 = -1;

    t102 = ((x437+(x438%x439))<=x440);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x442 = 6U;
	uint64_t x443 = 20678640662LLU;
	volatile int8_t x444 = INT8_MAX;
	volatile int32_t t103 = 20694439;

    t103 = ((x441+(x442%x443))<=x444);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint64_t x446 = 1823749862LLU;
	volatile int32_t t104 = -26;

    t104 = ((x445+(x446%x447))<=x448);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x449 = UINT32_MAX;
	uint64_t x450 = 301997471LLU;
	volatile int16_t x452 = -1;
	int32_t t105 = 30732748;

    t105 = ((x449+(x450%x451))<=x452);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x453 = -1;
	int32_t x454 = 937585788;
	static int8_t x455 = -43;
	int64_t x456 = INT64_MAX;
	volatile int32_t t106 = -13380;

    t106 = ((x453+(x454%x455))<=x456);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint32_t x457 = 4018U;
	int32_t x458 = INT32_MIN;
	volatile int16_t x459 = -1;
	static volatile int32_t t107 = 27206243;

    t107 = ((x457+(x458%x459))<=x460);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x461 = 751504U;
	int32_t x462 = -1476693;
	int32_t x463 = INT32_MIN;
	uint16_t x464 = UINT16_MAX;
	volatile int32_t t108 = 34384885;

    t108 = ((x461+(x462%x463))<=x464);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x465 = 509;
	uint16_t x466 = 30721U;
	uint8_t x467 = UINT8_MAX;
	int8_t x468 = -26;

    t109 = ((x465+(x466%x467))<=x468);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x469 = INT32_MIN;
	int32_t x470 = INT32_MIN;
	int64_t x471 = 5258LL;
	uint8_t x472 = UINT8_MAX;
	volatile int32_t t110 = -27580;

    t110 = ((x469+(x470%x471))<=x472);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x473 = 119637;
	uint8_t x474 = UINT8_MAX;
	int8_t x475 = -28;
	int16_t x476 = INT16_MAX;

    t111 = ((x473+(x474%x475))<=x476);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x477 = INT8_MIN;
	uint8_t x478 = UINT8_MAX;
	int16_t x479 = INT16_MIN;
	int64_t x480 = INT64_MIN;
	volatile int32_t t112 = -4383088;

    t112 = ((x477+(x478%x479))<=x480);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x481 = -1;
	int8_t x482 = -5;
	int16_t x483 = 8717;
	uint32_t x484 = 2U;
	static int32_t t113 = 60;

    t113 = ((x481+(x482%x483))<=x484);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint16_t x485 = 11688U;
	volatile int32_t x486 = INT32_MAX;
	int8_t x487 = 1;
	uint64_t x488 = UINT64_MAX;
	int32_t t114 = -9628451;

    t114 = ((x485+(x486%x487))<=x488);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int16_t x489 = INT16_MIN;
	int8_t x491 = INT8_MAX;
	static uint16_t x492 = UINT16_MAX;
	static int32_t t115 = 24;

    t115 = ((x489+(x490%x491))<=x492);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x493 = -5;
	uint64_t x495 = UINT64_MAX;
	int8_t x496 = -2;
	volatile int32_t t116 = 30866;

    t116 = ((x493+(x494%x495))<=x496);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x497 = -1;
	int8_t x499 = INT8_MIN;
	int32_t t117 = -1;

    t117 = ((x497+(x498%x499))<=x500);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x501 = UINT8_MAX;
	static int16_t x502 = -1;
	uint16_t x503 = UINT16_MAX;
	uint64_t x504 = UINT64_MAX;
	volatile int32_t t118 = 74;

    t118 = ((x501+(x502%x503))<=x504);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint64_t x505 = 1LLU;
	int16_t x506 = INT16_MIN;
	uint64_t x507 = 419295LLU;
	static int16_t x508 = 1;
	int32_t t119 = 17787;

    t119 = ((x505+(x506%x507))<=x508);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint64_t x509 = 9072183468711LLU;
	volatile int32_t x510 = INT32_MIN;
	uint16_t x511 = 6133U;
	volatile int32_t t120 = 184760;

    t120 = ((x509+(x510%x511))<=x512);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x513 = 14U;
	volatile int8_t x514 = 1;
	volatile int8_t x516 = 0;

    t121 = ((x513+(x514%x515))<=x516);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x517 = INT64_MIN;
	static int64_t x520 = INT64_MAX;
	volatile int32_t t122 = 3;

    t122 = ((x517+(x518%x519))<=x520);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x522 = INT16_MIN;
	int8_t x523 = INT8_MIN;
	static uint8_t x524 = UINT8_MAX;
	int32_t t123 = -42;

    t123 = ((x521+(x522%x523))<=x524);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x525 = -1;
	int8_t x526 = INT8_MIN;
	int64_t x527 = INT64_MAX;
	volatile int32_t t124 = -13081;

    t124 = ((x525+(x526%x527))<=x528);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x529 = INT16_MIN;
	int32_t x530 = INT32_MIN;
	static int32_t t125 = -7;

    t125 = ((x529+(x530%x531))<=x532);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x533 = 1;
	int32_t x534 = 503130;
	int64_t x535 = INT64_MIN;
	int32_t x536 = INT32_MAX;

    t126 = ((x533+(x534%x535))<=x536);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x537 = UINT32_MAX;
	static int32_t x538 = 3;
	int64_t x539 = INT64_MIN;
	uint16_t x540 = UINT16_MAX;
	static int32_t t127 = 170837463;

    t127 = ((x537+(x538%x539))<=x540);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x541 = -1LL;
	static uint32_t x542 = 0U;
	uint32_t x543 = 60848U;
	int64_t x544 = -1LL;
	int32_t t128 = -173570262;

    t128 = ((x541+(x542%x543))<=x544);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x546 = INT8_MAX;
	int32_t x547 = -1;
	int16_t x548 = -1;
	volatile int32_t t129 = 0;

    t129 = ((x545+(x546%x547))<=x548);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x549 = INT16_MAX;
	static int64_t x550 = INT64_MIN;
	int64_t x551 = INT64_MIN;
	volatile int32_t t130 = 5;

    t130 = ((x549+(x550%x551))<=x552);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x553 = 772;
	uint8_t x555 = UINT8_MAX;
	int32_t x556 = -25332;
	int32_t t131 = -4802;

    t131 = ((x553+(x554%x555))<=x556);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x557 = INT64_MAX;
	volatile uint8_t x558 = 0U;
	int8_t x559 = -1;
	int64_t x560 = -1LL;
	int32_t t132 = 0;

    t132 = ((x557+(x558%x559))<=x560);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x561 = INT8_MAX;
	static int32_t x563 = INT32_MAX;
	int16_t x564 = INT16_MIN;
	volatile int32_t t133 = -21943;

    t133 = ((x561+(x562%x563))<=x564);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x565 = -22;
	uint64_t x566 = 2LLU;
	int16_t x567 = INT16_MIN;

    t134 = ((x565+(x566%x567))<=x568);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x569 = INT32_MIN;
	uint64_t x570 = 5651LLU;
	uint64_t x571 = 122LLU;
	static int32_t t135 = -7857182;

    t135 = ((x569+(x570%x571))<=x572);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x573 = 3328841679375851437LL;
	int32_t x574 = -1;
	int32_t x575 = 3;
	int32_t t136 = -424141;

    t136 = ((x573+(x574%x575))<=x576);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x577 = INT8_MIN;
	int64_t x578 = INT64_MAX;
	int8_t x579 = -1;
	static int32_t x580 = INT32_MAX;
	int32_t t137 = -3389;

    t137 = ((x577+(x578%x579))<=x580);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x581 = -1LL;
	int16_t x582 = 55;
	int16_t x583 = INT16_MIN;
	int32_t t138 = 34;

    t138 = ((x581+(x582%x583))<=x584);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x586 = INT64_MAX;
	static int32_t x588 = INT32_MAX;

    t139 = ((x585+(x586%x587))<=x588);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x590 = INT32_MIN;
	int16_t x591 = -1;
	uint32_t x592 = 931652194U;

    t140 = ((x589+(x590%x591))<=x592);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x593 = 9;
	int16_t x595 = INT16_MIN;
	int8_t x596 = INT8_MAX;
	static volatile int32_t t141 = -4;

    t141 = ((x593+(x594%x595))<=x596);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    

    t142 = ((x597+(x598%x599))<=x600);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x601 = -1;
	uint8_t x602 = 7U;
	int16_t x603 = -49;
	volatile int32_t t143 = 5217;

    t143 = ((x601+(x602%x603))<=x604);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x605 = 0;
	static int64_t x606 = INT64_MAX;
	static volatile int32_t x607 = INT32_MAX;
	volatile int64_t x608 = -1LL;
	volatile int32_t t144 = -8;

    t144 = ((x605+(x606%x607))<=x608);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x609 = INT8_MIN;
	static uint8_t x610 = 127U;
	uint64_t x611 = 1065724487LLU;
	uint64_t x612 = 1LLU;
	static volatile int32_t t145 = 12;

    t145 = ((x609+(x610%x611))<=x612);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x613 = INT8_MIN;
	static int64_t x614 = 6737570408039LL;
	static volatile int32_t t146 = 6751389;

    t146 = ((x613+(x614%x615))<=x616);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x617 = -1;
	uint8_t x618 = UINT8_MAX;
	uint8_t x619 = 127U;
	volatile int32_t t147 = 132;

    t147 = ((x617+(x618%x619))<=x620);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x625 = 920U;
	int8_t x626 = 1;
	static uint32_t x628 = UINT32_MAX;
	int32_t t148 = 49566131;

    t148 = ((x625+(x626%x627))<=x628);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x629 = INT16_MIN;
	int64_t x630 = INT64_MAX;
	static int32_t x631 = INT32_MIN;
	int64_t x632 = INT64_MIN;
	static volatile int32_t t149 = 92436157;

    t149 = ((x629+(x630%x631))<=x632);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x633 = -15176;
	static int32_t x634 = -202644449;
	static uint8_t x635 = 1U;
	uint32_t x636 = 2184U;
	volatile int32_t t150 = 3925403;

    t150 = ((x633+(x634%x635))<=x636);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x637 = -1819;
	static int16_t x638 = INT16_MAX;
	volatile int8_t x639 = 1;
	uint32_t x640 = 7U;
	static int32_t t151 = 240593782;

    t151 = ((x637+(x638%x639))<=x640);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x641 = 125U;
	uint64_t x642 = UINT64_MAX;
	uint32_t x643 = 12U;
	uint64_t x644 = UINT64_MAX;
	static volatile int32_t t152 = -121240089;

    t152 = ((x641+(x642%x643))<=x644);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int32_t x645 = INT32_MAX;
	int8_t x646 = -1;
	uint8_t x647 = 5U;
	int16_t x648 = -1;
	int32_t t153 = -126405002;

    t153 = ((x645+(x646%x647))<=x648);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint64_t x649 = UINT64_MAX;
	volatile int8_t x650 = INT8_MAX;
	volatile int8_t x652 = 1;
	static int32_t t154 = 916;

    t154 = ((x649+(x650%x651))<=x652);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x653 = 1993LL;
	int8_t x654 = INT8_MAX;
	volatile int8_t x655 = INT8_MIN;
	uint16_t x656 = 378U;
	volatile int32_t t155 = 635509;

    t155 = ((x653+(x654%x655))<=x656);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x657 = -69700;
	int16_t x658 = 208;
	uint8_t x659 = 3U;
	uint32_t x660 = 327359630U;
	int32_t t156 = -216414;

    t156 = ((x657+(x658%x659))<=x660);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x661 = -1LL;
	volatile uint16_t x662 = 1668U;
	int32_t x663 = INT32_MIN;
	static volatile int16_t x664 = -1;
	volatile int32_t t157 = 351311;

    t157 = ((x661+(x662%x663))<=x664);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint32_t x665 = 709U;
	int16_t x666 = INT16_MIN;
	int8_t x667 = INT8_MIN;
	volatile uint32_t x668 = 377985U;
	int32_t t158 = 12;

    t158 = ((x665+(x666%x667))<=x668);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x669 = 115U;
	uint64_t x670 = 1793354LLU;
	volatile int32_t x671 = INT32_MAX;
	volatile uint64_t x672 = 1265708LLU;

    t159 = ((x669+(x670%x671))<=x672);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x673 = INT32_MIN;
	volatile uint16_t x674 = UINT16_MAX;
	volatile uint16_t x675 = 4579U;

    t160 = ((x673+(x674%x675))<=x676);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x677 = 7U;
	volatile int8_t x678 = 30;
	static int16_t x679 = -1;
	static int8_t x680 = INT8_MAX;

    t161 = ((x677+(x678%x679))<=x680);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x682 = INT16_MIN;
	int32_t x683 = 12;
	int32_t t162 = 87202307;

    t162 = ((x681+(x682%x683))<=x684);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x685 = 12U;
	int64_t x686 = INT64_MIN;
	int32_t x687 = INT32_MIN;
	int16_t x688 = INT16_MIN;
	int32_t t163 = 9633;

    t163 = ((x685+(x686%x687))<=x688);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x689 = -1;
	uint16_t x690 = 30439U;
	static uint64_t x691 = 24919004977555535LLU;
	uint8_t x692 = 68U;

    t164 = ((x689+(x690%x691))<=x692);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x693 = 1;
	volatile uint8_t x694 = UINT8_MAX;
	int32_t x695 = INT32_MIN;
	volatile uint32_t x696 = UINT32_MAX;
	volatile int32_t t165 = -17400591;

    t165 = ((x693+(x694%x695))<=x696);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x697 = INT64_MAX;
	int32_t x698 = 88758653;
	int16_t x699 = -1;
	static volatile int32_t x700 = -1;
	int32_t t166 = -80;

    t166 = ((x697+(x698%x699))<=x700);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x701 = INT8_MIN;
	static uint32_t x702 = UINT32_MAX;
	int16_t x703 = -7832;

    t167 = ((x701+(x702%x703))<=x704);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int8_t x705 = INT8_MIN;
	int16_t x707 = -1;
	int32_t t168 = 5158;

    t168 = ((x705+(x706%x707))<=x708);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x709 = -1;
	int64_t x710 = INT64_MIN;
	int32_t t169 = 30340122;

    t169 = ((x709+(x710%x711))<=x712);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x713 = -4639;
	uint32_t x715 = UINT32_MAX;
	int8_t x716 = -1;
	volatile int32_t t170 = 1890;

    t170 = ((x713+(x714%x715))<=x716);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x718 = INT16_MAX;
	int8_t x719 = 12;
	volatile uint64_t x720 = 235538451451009211LLU;

    t171 = ((x717+(x718%x719))<=x720);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x722 = UINT8_MAX;
	volatile int16_t x723 = -960;
	volatile int32_t t172 = -58;

    t172 = ((x721+(x722%x723))<=x724);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint8_t x726 = UINT8_MAX;
	volatile int32_t x727 = INT32_MIN;
	uint32_t x728 = 47981382U;

    t173 = ((x725+(x726%x727))<=x728);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x729 = INT16_MAX;
	volatile int32_t x731 = -483;
	volatile int32_t t174 = 5038;

    t174 = ((x729+(x730%x731))<=x732);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x734 = -1LL;
	volatile uint8_t x735 = 24U;
	static int8_t x736 = -2;
	static int32_t t175 = -30452;

    t175 = ((x733+(x734%x735))<=x736);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint8_t x737 = 7U;
	uint8_t x739 = UINT8_MAX;
	static uint32_t x740 = UINT32_MAX;
	int32_t t176 = -4;

    t176 = ((x737+(x738%x739))<=x740);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x742 = 70053U;
	static uint16_t x744 = 31245U;
	volatile int32_t t177 = 3;

    t177 = ((x741+(x742%x743))<=x744);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x745 = 3508U;
	int32_t x746 = INT32_MIN;
	static uint32_t x747 = 379U;
	volatile int32_t t178 = 1728;

    t178 = ((x745+(x746%x747))<=x748);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x749 = 31305LLU;
	static int8_t x750 = 1;
	volatile uint32_t x751 = UINT32_MAX;
	uint32_t x752 = UINT32_MAX;
	int32_t t179 = -6237;

    t179 = ((x749+(x750%x751))<=x752);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x753 = 3U;
	int32_t x754 = INT32_MAX;
	volatile int64_t x755 = INT64_MAX;
	volatile int64_t x756 = INT64_MIN;
	volatile int32_t t180 = 31;

    t180 = ((x753+(x754%x755))<=x756);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x757 = -1;
	int32_t x758 = 3953;
	int8_t x759 = INT8_MIN;
	uint64_t x760 = UINT64_MAX;
	volatile int32_t t181 = -17350;

    t181 = ((x757+(x758%x759))<=x760);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x763 = INT8_MIN;
	int16_t x764 = INT16_MIN;

    t182 = ((x761+(x762%x763))<=x764);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x765 = 57U;
	uint32_t x767 = 3U;
	int64_t x768 = INT64_MIN;
	int32_t t183 = 820937;

    t183 = ((x765+(x766%x767))<=x768);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x769 = INT16_MIN;
	int8_t x770 = INT8_MIN;
	volatile int64_t x771 = INT64_MIN;
	static volatile int16_t x772 = INT16_MIN;
	volatile int32_t t184 = 997874;

    t184 = ((x769+(x770%x771))<=x772);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x773 = INT16_MIN;
	int64_t x774 = INT64_MAX;
	volatile int64_t x775 = -27284692289027087LL;

    t185 = ((x773+(x774%x775))<=x776);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int64_t x777 = INT64_MIN;
	static int16_t x778 = 0;
	static int32_t x779 = 1903;

    t186 = ((x777+(x778%x779))<=x780);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x781 = INT64_MIN;
	int16_t x782 = INT16_MAX;
	uint16_t x783 = 349U;
	volatile int32_t t187 = 211144234;

    t187 = ((x781+(x782%x783))<=x784);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x785 = 110061;
	int8_t x786 = -1;
	int32_t x787 = INT32_MIN;
	uint32_t x788 = 35U;
	volatile int32_t t188 = -1556497;

    t188 = ((x785+(x786%x787))<=x788);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x789 = 3U;
	static volatile int64_t x791 = INT64_MAX;
	int32_t x792 = -3;
	volatile int32_t t189 = 27842;

    t189 = ((x789+(x790%x791))<=x792);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x793 = -15756LL;
	uint64_t x794 = UINT64_MAX;
	static int32_t x795 = -1;
	static int32_t t190 = -30642850;

    t190 = ((x793+(x794%x795))<=x796);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x797 = UINT64_MAX;
	int16_t x798 = INT16_MIN;
	uint16_t x799 = 7360U;

    t191 = ((x797+(x798%x799))<=x800);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x801 = UINT8_MAX;
	uint64_t x802 = 45716782261013309LLU;
	volatile int8_t x803 = 1;
	int8_t x804 = -1;
	volatile int32_t t192 = 120;

    t192 = ((x801+(x802%x803))<=x804);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x805 = INT32_MIN;
	uint64_t x806 = 1452LLU;
	static int32_t x808 = -7885;
	static volatile int32_t t193 = 253;

    t193 = ((x805+(x806%x807))<=x808);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x810 = INT32_MAX;
	uint8_t x812 = 0U;
	static int32_t t194 = -82861;

    t194 = ((x809+(x810%x811))<=x812);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint16_t x814 = 4016U;
	uint16_t x815 = UINT16_MAX;
	int32_t t195 = 280212859;

    t195 = ((x813+(x814%x815))<=x816);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x817 = -1;
	int16_t x818 = -1;
	int32_t x820 = INT32_MIN;

    t196 = ((x817+(x818%x819))<=x820);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x821 = INT8_MAX;
	static uint8_t x822 = 1U;
	int32_t x823 = INT32_MIN;
	volatile int16_t x824 = INT16_MIN;
	volatile int32_t t197 = 10479;

    t197 = ((x821+(x822%x823))<=x824);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint32_t x825 = 1140U;
	int16_t x826 = INT16_MAX;
	static uint32_t x827 = 82U;
	int32_t x828 = -1;
	int32_t t198 = 62889826;

    t198 = ((x825+(x826%x827))<=x828);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x829 = -5;
	static int8_t x830 = INT8_MAX;
	volatile int8_t x831 = -1;
	int16_t x832 = -1;

    t199 = ((x829+(x830%x831))<=x832);

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


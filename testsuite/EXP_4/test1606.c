
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

static int8_t x13 = INT8_MIN;
uint16_t x20 = UINT16_MAX;
int16_t x22 = INT16_MIN;
int64_t x23 = 8489062390794951LL;
static int8_t x33 = INT8_MAX;
static int64_t x34 = INT64_MAX;
static volatile int32_t t8 = -31;
volatile uint16_t x38 = 104U;
int8_t x39 = 1;
int16_t x40 = 17;
uint32_t x41 = 120970U;
uint8_t x44 = 72U;
int32_t t10 = -103;
int32_t t11 = 456;
int32_t x53 = -137630185;
volatile int32_t t14 = 455;
int32_t x65 = INT32_MIN;
int16_t x67 = INT16_MIN;
int64_t x72 = 69356LL;
static volatile int32_t t17 = -26958965;
static uint64_t x78 = 65542787LLU;
int16_t x80 = INT16_MIN;
uint32_t x89 = 37838U;
int32_t x105 = -3109;
int8_t x110 = -3;
volatile int32_t t27 = -3;
int64_t x113 = -1380296LL;
int16_t x114 = INT16_MIN;
volatile int32_t x116 = 1927839;
int16_t x128 = -1;
int64_t x131 = -1263083733432285LL;
volatile int32_t t33 = -136;
uint8_t x137 = 44U;
uint32_t x140 = UINT32_MAX;
int32_t t34 = -1;
volatile int64_t x141 = INT64_MIN;
int16_t x148 = 7;
uint16_t x156 = 172U;
int16_t x162 = 9;
static int32_t x164 = 605;
static uint32_t x170 = UINT32_MAX;
int8_t x178 = INT8_MIN;
volatile uint32_t x183 = 594352U;
volatile int32_t t46 = 586610492;
static uint8_t x197 = 3U;
int16_t x200 = 1003;
volatile uint8_t x208 = 8U;
volatile int32_t t51 = 1;
static volatile int16_t x211 = INT16_MIN;
volatile int8_t x215 = INT8_MAX;
int64_t x217 = INT64_MAX;
uint16_t x218 = 21U;
volatile int32_t t54 = 0;
int64_t x224 = 9343529LL;
volatile int32_t t56 = 5665;
volatile uint8_t x231 = 0U;
int8_t x232 = -9;
volatile int32_t t57 = -890;
static volatile uint64_t x235 = 3977886LLU;
int32_t t58 = -10157856;
int32_t t60 = 2;
uint64_t x246 = UINT64_MAX;
volatile uint8_t x247 = UINT8_MAX;
int32_t t61 = -16621;
volatile int16_t x252 = 4;
volatile int32_t t62 = 176715608;
static int32_t x255 = INT32_MIN;
int32_t x262 = INT32_MAX;
static volatile uint16_t x275 = UINT16_MAX;
uint16_t x280 = UINT16_MAX;
int8_t x281 = INT8_MAX;
uint8_t x283 = UINT8_MAX;
int32_t x284 = -48886024;
static int8_t x285 = -1;
static int16_t x286 = 20;
uint32_t x303 = 755111087U;
int64_t x307 = INT64_MIN;
static int32_t t77 = -3422144;
int8_t x319 = 18;
int64_t x331 = INT64_MAX;
int16_t x334 = -149;
int32_t x335 = INT32_MIN;
volatile int8_t x339 = INT8_MIN;
volatile int32_t t84 = 1654422;
int16_t x347 = -1;
int32_t t86 = 257217;
static int32_t t87 = 125038053;
int16_t x353 = INT16_MAX;
int16_t x363 = -103;
static uint64_t x367 = 650232178532010LLU;
volatile int64_t x368 = INT64_MIN;
int64_t x374 = INT64_MIN;
uint8_t x375 = UINT8_MAX;
volatile uint64_t x376 = 7172174249LLU;
int64_t x377 = -1LL;
int32_t x378 = 7280;
int32_t x381 = -1;
uint64_t x382 = 86621LLU;
volatile int32_t t96 = 10;
int32_t x390 = INT32_MIN;
int64_t x392 = INT64_MIN;
static int8_t x395 = -1;
int32_t t98 = -1886;
int16_t x399 = -15295;
int32_t t100 = 7;
static int64_t x409 = INT64_MIN;
uint16_t x412 = 2U;
volatile int32_t t102 = 313834999;
uint64_t x415 = UINT64_MAX;
volatile int32_t t103 = 137;
int32_t t104 = 125753401;
static int64_t x428 = INT64_MAX;
static int32_t x433 = INT32_MAX;
volatile int32_t t108 = -7262;
int8_t x439 = INT8_MIN;
int64_t x440 = INT64_MIN;
int8_t x441 = -5;
int32_t x443 = INT32_MIN;
int8_t x445 = INT8_MIN;
int32_t x446 = -1;
volatile uint32_t x451 = UINT32_MAX;
int16_t x453 = 33;
uint64_t x464 = 19611264LLU;
int32_t t115 = -1039;
uint16_t x465 = UINT16_MAX;
uint8_t x468 = 1U;
volatile int32_t t116 = 0;
static volatile int32_t t118 = 1895344;
uint8_t x482 = 23U;
int64_t x483 = INT64_MIN;
static int16_t x490 = 2317;
int16_t x492 = INT16_MIN;
static uint32_t x497 = 3919285U;
int16_t x513 = INT16_MIN;
int32_t x514 = -1;
int16_t x515 = INT16_MAX;
int8_t x521 = INT8_MIN;
uint16_t x532 = UINT16_MAX;
int32_t t132 = -8;
uint16_t x535 = 5U;
int32_t t133 = 903;
static int32_t x540 = INT32_MIN;
int32_t t136 = 101972;
uint8_t x550 = UINT8_MAX;
static int32_t t137 = -93;
int16_t x554 = -2;
int32_t x557 = INT32_MAX;
static int64_t x563 = INT64_MIN;
int32_t x578 = INT32_MIN;
int64_t x579 = INT64_MIN;
int64_t x581 = 1215515929LL;
volatile uint8_t x586 = 0U;
int64_t x595 = INT64_MIN;
int32_t t148 = -147130182;
static uint8_t x600 = 1U;
uint16_t x607 = 228U;
uint32_t x608 = 35U;
int16_t x614 = -1;
uint16_t x619 = 25453U;
int16_t x624 = -9364;
int64_t x625 = INT64_MIN;
static uint32_t x633 = 250497U;
int16_t x636 = 1;
int8_t x643 = -5;
int8_t x644 = 0;
volatile int8_t x652 = 1;
static volatile int32_t x654 = -1;
int8_t x655 = INT8_MIN;
int64_t x660 = -254929940397639LL;
uint32_t x668 = 96U;
volatile int8_t x675 = INT8_MAX;
static int32_t x678 = INT32_MIN;
static int16_t x679 = INT16_MIN;
int32_t x682 = -1;
int16_t x686 = 59;
static volatile int32_t t172 = 1;
int32_t x695 = INT32_MIN;
volatile int8_t x696 = -1;
int64_t x699 = -1LL;
static volatile int8_t x703 = INT8_MIN;
int64_t x708 = INT64_MIN;
uint32_t x714 = UINT32_MAX;
volatile int32_t t178 = -214830657;
int16_t x717 = -5;
volatile int16_t x721 = INT16_MIN;
static volatile int16_t x729 = -1;
int8_t x739 = INT8_MAX;
volatile int32_t t185 = 10224005;
int64_t x746 = -4148517177LL;
int32_t x747 = INT32_MIN;
static int64_t x750 = INT64_MIN;
volatile uint64_t x753 = 156778182444LLU;
volatile int32_t t188 = -31148;
int16_t x757 = 889;
int16_t x759 = INT16_MIN;
int8_t x768 = INT8_MIN;
int32_t t191 = 729241;
static int32_t x769 = -1;
uint32_t x770 = 12U;
uint32_t x774 = 9342U;
uint32_t x778 = 1433494U;
int32_t t196 = -1;
int64_t x791 = 75801374LL;
volatile int32_t t197 = -2;
volatile uint64_t x800 = 105613718115LLU;


void f0(void) {
    	static int16_t x1 = -1;
	int16_t x2 = 10;
	static int16_t x3 = 64;
	int64_t x4 = -1LL;
	static int32_t t0 = 43528691;

    t0 = (x1<=(x2*(x3>x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MIN;
	uint64_t x6 = 7798LLU;
	uint16_t x7 = 0U;
	static uint16_t x8 = UINT16_MAX;
	volatile int32_t t1 = -53;

    t1 = (x5<=(x6*(x7>x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint64_t x9 = 805299077LLU;
	uint32_t x10 = 1940891480U;
	int16_t x11 = 0;
	int16_t x12 = -1;
	static volatile int32_t t2 = -4016;

    t2 = (x9<=(x10*(x11>x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x14 = INT64_MAX;
	volatile int64_t x15 = -1742871173867363LL;
	volatile int8_t x16 = 1;
	static volatile int32_t t3 = 1878;

    t3 = (x13<=(x14*(x15>x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MIN;
	uint8_t x18 = UINT8_MAX;
	volatile int32_t x19 = -1;
	volatile int32_t t4 = 6539192;

    t4 = (x17<=(x18*(x19>x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = UINT16_MAX;
	uint8_t x24 = 8U;
	static int32_t t5 = 491674694;

    t5 = (x21<=(x22*(x23>x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MIN;
	volatile int8_t x26 = -39;
	static int32_t x27 = INT32_MIN;
	int32_t x28 = INT32_MIN;
	static int32_t t6 = 108506043;

    t6 = (x25<=(x26*(x27>x28)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = -1;
	int16_t x30 = 3672;
	static int64_t x31 = -417LL;
	static uint8_t x32 = 42U;
	volatile int32_t t7 = -72038;

    t7 = (x29<=(x30*(x31>x32)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x35 = 1;
	int16_t x36 = INT16_MAX;

    t8 = (x33<=(x34*(x35>x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x37 = INT64_MAX;
	int32_t t9 = -118;

    t9 = (x37<=(x38*(x39>x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x42 = 1U;
	int16_t x43 = INT16_MIN;

    t10 = (x41<=(x42*(x43>x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x45 = 747;
	uint16_t x46 = 38U;
	volatile uint8_t x47 = 1U;
	static volatile int16_t x48 = -2951;

    t11 = (x45<=(x46*(x47>x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x49 = -1;
	int8_t x50 = INT8_MIN;
	static int64_t x51 = -1LL;
	static volatile uint64_t x52 = 5984030839356375LLU;
	int32_t t12 = -42;

    t12 = (x49<=(x50*(x51>x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x54 = -1;
	uint64_t x55 = UINT64_MAX;
	static volatile int64_t x56 = INT64_MIN;
	volatile int32_t t13 = 740;

    t13 = (x53<=(x54*(x55>x56)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = -1LL;
	int64_t x58 = INT64_MAX;
	uint32_t x59 = 3622U;
	volatile int64_t x60 = 54288LL;

    t14 = (x57<=(x58*(x59>x60)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x61 = UINT8_MAX;
	static int32_t x62 = -7351;
	volatile int16_t x63 = 545;
	int16_t x64 = -187;
	int32_t t15 = 7;

    t15 = (x61<=(x62*(x63>x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x66 = INT8_MIN;
	int8_t x68 = INT8_MAX;
	static int32_t t16 = -437447764;

    t16 = (x65<=(x66*(x67>x68)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = INT32_MIN;
	int16_t x70 = INT16_MIN;
	uint16_t x71 = 39U;

    t17 = (x69<=(x70*(x71>x72)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x73 = INT16_MIN;
	uint8_t x74 = 29U;
	int64_t x75 = INT64_MAX;
	volatile uint64_t x76 = 469LLU;
	int32_t t18 = -25106;

    t18 = (x73<=(x74*(x75>x76)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x77 = INT64_MIN;
	int8_t x79 = INT8_MAX;
	int32_t t19 = -1;

    t19 = (x77<=(x78*(x79>x80)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x81 = INT16_MIN;
	static uint16_t x82 = 1U;
	int32_t x83 = -32766;
	int64_t x84 = INT64_MAX;
	static int32_t t20 = 1;

    t20 = (x81<=(x82*(x83>x84)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = INT16_MIN;
	volatile uint64_t x86 = 753380172836308256LLU;
	int8_t x87 = INT8_MIN;
	uint64_t x88 = 200LLU;
	int32_t t21 = 110160;

    t21 = (x85<=(x86*(x87>x88)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x90 = 1;
	int32_t x91 = INT32_MIN;
	int64_t x92 = -219648413873144LL;
	static int32_t t22 = 13;

    t22 = (x89<=(x90*(x91>x92)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = 7;
	int8_t x94 = INT8_MAX;
	int8_t x95 = INT8_MIN;
	uint64_t x96 = 13882000LLU;
	volatile int32_t t23 = -2654;

    t23 = (x93<=(x94*(x95>x96)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x97 = UINT64_MAX;
	uint64_t x98 = 978623LLU;
	int16_t x99 = -1;
	static int32_t x100 = -1;
	volatile int32_t t24 = -121535241;

    t24 = (x97<=(x98*(x99>x100)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = 316465078U;
	uint16_t x102 = 3U;
	int16_t x103 = INT16_MIN;
	volatile uint16_t x104 = 4U;
	int32_t t25 = 199215941;

    t25 = (x101<=(x102*(x103>x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint8_t x106 = 4U;
	static int16_t x107 = 1;
	int32_t x108 = 4435183;
	volatile int32_t t26 = 1;

    t26 = (x105<=(x106*(x107>x108)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x109 = 8189U;
	uint16_t x111 = 9083U;
	static int8_t x112 = -1;

    t27 = (x109<=(x110*(x111>x112)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint32_t x115 = UINT32_MAX;
	int32_t t28 = -54017;

    t28 = (x113<=(x114*(x115>x116)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x117 = 3150678370469LLU;
	static volatile int8_t x118 = -1;
	volatile int8_t x119 = -1;
	int32_t x120 = 483255428;
	static int32_t t29 = -34280467;

    t29 = (x117<=(x118*(x119>x120)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = INT8_MIN;
	uint8_t x122 = UINT8_MAX;
	uint32_t x123 = UINT32_MAX;
	int16_t x124 = INT16_MAX;
	volatile int32_t t30 = -17334304;

    t30 = (x121<=(x122*(x123>x124)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x125 = 571252127901031056LLU;
	int16_t x126 = INT16_MIN;
	int16_t x127 = INT16_MIN;
	volatile int32_t t31 = -1103;

    t31 = (x125<=(x126*(x127>x128)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x129 = 14960U;
	static int8_t x130 = 60;
	uint16_t x132 = UINT16_MAX;
	static volatile int32_t t32 = 28653;

    t32 = (x129<=(x130*(x131>x132)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x133 = 12U;
	volatile int8_t x134 = INT8_MIN;
	volatile int8_t x135 = -9;
	uint8_t x136 = 41U;

    t33 = (x133<=(x134*(x135>x136)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x138 = INT8_MAX;
	static int64_t x139 = 873924525269LL;

    t34 = (x137<=(x138*(x139>x140)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x142 = -1;
	uint8_t x143 = UINT8_MAX;
	uint16_t x144 = 1U;
	int32_t t35 = 6896713;

    t35 = (x141<=(x142*(x143>x144)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x145 = UINT16_MAX;
	static int32_t x146 = INT32_MAX;
	volatile uint64_t x147 = UINT64_MAX;
	static int32_t t36 = -1;

    t36 = (x145<=(x146*(x147>x148)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = 1;
	static volatile int64_t x150 = -1LL;
	static int64_t x151 = -6941972LL;
	static int16_t x152 = -5;
	int32_t t37 = 475;

    t37 = (x149<=(x150*(x151>x152)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = 1;
	int64_t x154 = INT64_MIN;
	int16_t x155 = INT16_MAX;
	int32_t t38 = 7692294;

    t38 = (x153<=(x154*(x155>x156)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x157 = -3949435391637218053LL;
	int64_t x158 = -1LL;
	int32_t x159 = 217890630;
	int32_t x160 = INT32_MIN;
	int32_t t39 = -306339564;

    t39 = (x157<=(x158*(x159>x160)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint64_t x161 = UINT64_MAX;
	int16_t x163 = -1;
	int32_t t40 = 499576185;

    t40 = (x161<=(x162*(x163>x164)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = INT64_MIN;
	int32_t x166 = INT32_MIN;
	uint8_t x167 = 23U;
	uint32_t x168 = 5565436U;
	static volatile int32_t t41 = 358;

    t41 = (x165<=(x166*(x167>x168)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = -2;
	volatile int8_t x171 = INT8_MAX;
	volatile int8_t x172 = INT8_MIN;
	static volatile int32_t t42 = 4811;

    t42 = (x169<=(x170*(x171>x172)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = 14;
	volatile int8_t x174 = INT8_MIN;
	volatile int64_t x175 = INT64_MIN;
	uint32_t x176 = UINT32_MAX;
	int32_t t43 = 8326;

    t43 = (x173<=(x174*(x175>x176)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint16_t x177 = 10U;
	static int16_t x179 = 1;
	int64_t x180 = INT64_MAX;
	int32_t t44 = -2442;

    t44 = (x177<=(x178*(x179>x180)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = 10038376048LL;
	volatile int32_t x182 = INT32_MIN;
	volatile uint32_t x184 = 487U;
	int32_t t45 = 298409350;

    t45 = (x181<=(x182*(x183>x184)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x185 = 731071665LLU;
	uint16_t x186 = 1712U;
	int8_t x187 = INT8_MIN;
	volatile int32_t x188 = -139773;

    t46 = (x185<=(x186*(x187>x188)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x189 = INT32_MIN;
	volatile int8_t x190 = INT8_MIN;
	int64_t x191 = INT64_MAX;
	volatile uint64_t x192 = UINT64_MAX;
	static volatile int32_t t47 = 226131386;

    t47 = (x189<=(x190*(x191>x192)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x193 = 1528U;
	volatile int64_t x194 = INT64_MIN;
	int16_t x195 = 7170;
	uint64_t x196 = 74233830789896LLU;
	int32_t t48 = 2;

    t48 = (x193<=(x194*(x195>x196)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x198 = 236;
	static int16_t x199 = INT16_MAX;
	volatile int32_t t49 = 2319;

    t49 = (x197<=(x198*(x199>x200)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint64_t x201 = UINT64_MAX;
	static volatile int32_t x202 = -1;
	int64_t x203 = -567167644182226606LL;
	int32_t x204 = 1851485;
	volatile int32_t t50 = -862754;

    t50 = (x201<=(x202*(x203>x204)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint64_t x205 = 294705796803241LLU;
	int64_t x206 = INT64_MAX;
	static int8_t x207 = INT8_MIN;

    t51 = (x205<=(x206*(x207>x208)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x209 = INT8_MIN;
	int32_t x210 = INT32_MIN;
	volatile int8_t x212 = INT8_MIN;
	volatile int32_t t52 = 336;

    t52 = (x209<=(x210*(x211>x212)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x213 = UINT8_MAX;
	volatile int16_t x214 = -1000;
	volatile int16_t x216 = 31;
	int32_t t53 = -5806249;

    t53 = (x213<=(x214*(x215>x216)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint32_t x219 = 267006645U;
	volatile uint32_t x220 = 159U;

    t54 = (x217<=(x218*(x219>x220)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x221 = INT64_MAX;
	static int64_t x222 = -1LL;
	volatile int32_t x223 = -1;
	volatile int32_t t55 = 397719293;

    t55 = (x221<=(x222*(x223>x224)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = -9;
	static int32_t x226 = INT32_MAX;
	static int16_t x227 = 2;
	int16_t x228 = -37;

    t56 = (x225<=(x226*(x227>x228)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x229 = INT16_MIN;
	int64_t x230 = INT64_MIN;

    t57 = (x229<=(x230*(x231>x232)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint32_t x233 = UINT32_MAX;
	int8_t x234 = INT8_MAX;
	int16_t x236 = -851;

    t58 = (x233<=(x234*(x235>x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = 0;
	uint64_t x238 = 1023042LLU;
	int64_t x239 = -55LL;
	int64_t x240 = INT64_MIN;
	int32_t t59 = 1;

    t59 = (x237<=(x238*(x239>x240)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x241 = -2947940;
	static int32_t x242 = 211529589;
	int64_t x243 = INT64_MIN;
	volatile uint16_t x244 = 0U;

    t60 = (x241<=(x242*(x243>x244)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x245 = -5;
	int8_t x248 = -2;

    t61 = (x245<=(x246*(x247>x248)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = -7;
	int64_t x250 = -1LL;
	int8_t x251 = 17;

    t62 = (x249<=(x250*(x251>x252)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x253 = 1U;
	int32_t x254 = -1;
	int64_t x256 = 30060LL;
	static volatile int32_t t63 = -212;

    t63 = (x253<=(x254*(x255>x256)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = INT32_MAX;
	int32_t x258 = -2464190;
	volatile uint8_t x259 = 93U;
	uint8_t x260 = 52U;
	volatile int32_t t64 = 25981;

    t64 = (x257<=(x258*(x259>x260)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x261 = INT64_MAX;
	int32_t x263 = -1;
	int32_t x264 = INT32_MAX;
	int32_t t65 = 286;

    t65 = (x261<=(x262*(x263>x264)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile uint16_t x265 = 6U;
	static int8_t x266 = INT8_MIN;
	uint8_t x267 = 19U;
	volatile uint64_t x268 = 241636097479720LLU;
	volatile int32_t t66 = -16;

    t66 = (x265<=(x266*(x267>x268)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x269 = 89U;
	static int8_t x270 = INT8_MIN;
	int16_t x271 = INT16_MIN;
	static int16_t x272 = INT16_MIN;
	volatile int32_t t67 = 43659789;

    t67 = (x269<=(x270*(x271>x272)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = INT16_MAX;
	static uint8_t x274 = 0U;
	int64_t x276 = -1LL;
	volatile int32_t t68 = 1;

    t68 = (x273<=(x274*(x275>x276)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x277 = INT16_MIN;
	int64_t x278 = INT64_MIN;
	static int8_t x279 = INT8_MAX;
	volatile int32_t t69 = 0;

    t69 = (x277<=(x278*(x279>x280)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint8_t x282 = UINT8_MAX;
	static int32_t t70 = -10;

    t70 = (x281<=(x282*(x283>x284)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x287 = 69502;
	uint16_t x288 = 1U;
	static volatile int32_t t71 = -29782691;

    t71 = (x285<=(x286*(x287>x288)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x289 = 85U;
	int8_t x290 = INT8_MIN;
	static int32_t x291 = -320823;
	uint8_t x292 = UINT8_MAX;
	static int32_t t72 = -15;

    t72 = (x289<=(x290*(x291>x292)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint16_t x293 = 193U;
	volatile uint32_t x294 = 425U;
	static uint16_t x295 = UINT16_MAX;
	volatile uint32_t x296 = 5573U;
	volatile int32_t t73 = 522051142;

    t73 = (x293<=(x294*(x295>x296)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = INT16_MIN;
	int8_t x298 = -1;
	static int16_t x299 = INT16_MIN;
	static int64_t x300 = INT64_MAX;
	int32_t t74 = -2308096;

    t74 = (x297<=(x298*(x299>x300)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = INT32_MIN;
	int32_t x302 = 12;
	int8_t x304 = -1;
	volatile int32_t t75 = 4;

    t75 = (x301<=(x302*(x303>x304)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = -8687189LL;
	int16_t x306 = INT16_MIN;
	static int16_t x308 = -5;
	int32_t t76 = -7484268;

    t76 = (x305<=(x306*(x307>x308)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = INT32_MIN;
	int32_t x310 = INT32_MAX;
	uint32_t x311 = UINT32_MAX;
	int8_t x312 = INT8_MAX;

    t77 = (x309<=(x310*(x311>x312)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x313 = 490U;
	uint8_t x314 = 0U;
	int8_t x315 = -1;
	int32_t x316 = INT32_MIN;
	volatile int32_t t78 = 3700;

    t78 = (x313<=(x314*(x315>x316)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x317 = 11361U;
	volatile int16_t x318 = INT16_MIN;
	int8_t x320 = INT8_MIN;
	int32_t t79 = 531177227;

    t79 = (x317<=(x318*(x319>x320)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x321 = 16987740949LL;
	int32_t x322 = INT32_MIN;
	static int8_t x323 = -1;
	int64_t x324 = 93392195795454LL;
	volatile int32_t t80 = 814;

    t80 = (x321<=(x322*(x323>x324)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint32_t x325 = 1133370U;
	int8_t x326 = -17;
	uint64_t x327 = UINT64_MAX;
	int32_t x328 = -1;
	volatile int32_t t81 = -487328;

    t81 = (x325<=(x326*(x327>x328)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = 9551;
	int64_t x330 = -1LL;
	uint32_t x332 = 3825064U;
	volatile int32_t t82 = -28646077;

    t82 = (x329<=(x330*(x331>x332)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x333 = UINT8_MAX;
	int16_t x336 = 290;
	volatile int32_t t83 = 28242864;

    t83 = (x333<=(x334*(x335>x336)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = -154LL;
	static volatile int64_t x338 = -2097587101659976534LL;
	uint32_t x340 = UINT32_MAX;

    t84 = (x337<=(x338*(x339>x340)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint64_t x341 = 8LLU;
	int64_t x342 = INT64_MIN;
	int32_t x343 = INT32_MAX;
	uint32_t x344 = 1363558U;
	static int32_t t85 = 23;

    t85 = (x341<=(x342*(x343>x344)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x345 = INT64_MAX;
	int64_t x346 = INT64_MIN;
	int64_t x348 = INT64_MIN;

    t86 = (x345<=(x346*(x347>x348)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x349 = INT64_MIN;
	volatile int16_t x350 = INT16_MIN;
	int32_t x351 = INT32_MIN;
	uint32_t x352 = 1392948561U;

    t87 = (x349<=(x350*(x351>x352)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x354 = INT16_MIN;
	int64_t x355 = INT64_MIN;
	volatile uint32_t x356 = 54640U;
	int32_t t88 = -407247079;

    t88 = (x353<=(x354*(x355>x356)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = -1756;
	int64_t x358 = 757LL;
	int64_t x359 = -14LL;
	int16_t x360 = INT16_MAX;
	volatile int32_t t89 = 23;

    t89 = (x357<=(x358*(x359>x360)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x361 = INT16_MIN;
	int32_t x362 = INT32_MAX;
	uint8_t x364 = 3U;
	volatile int32_t t90 = 47887;

    t90 = (x361<=(x362*(x363>x364)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = -965LL;
	uint32_t x366 = 13993437U;
	static volatile int32_t t91 = -8113;

    t91 = (x365<=(x366*(x367>x368)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = INT32_MIN;
	int16_t x370 = INT16_MIN;
	volatile int32_t x371 = INT32_MIN;
	uint16_t x372 = UINT16_MAX;
	int32_t t92 = -166;

    t92 = (x369<=(x370*(x371>x372)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x373 = -1;
	static volatile int32_t t93 = 3;

    t93 = (x373<=(x374*(x375>x376)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x379 = INT16_MIN;
	uint64_t x380 = 2LLU;
	volatile int32_t t94 = -43343821;

    t94 = (x377<=(x378*(x379>x380)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x383 = 4324577086976745853LL;
	int32_t x384 = INT32_MIN;
	volatile int32_t t95 = -499;

    t95 = (x381<=(x382*(x383>x384)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x385 = -2;
	uint64_t x386 = 232971817022LLU;
	int8_t x387 = 23;
	int64_t x388 = 10LL;

    t96 = (x385<=(x386*(x387>x388)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = INT8_MIN;
	int64_t x391 = 18042LL;
	volatile int32_t t97 = 23924479;

    t97 = (x389<=(x390*(x391>x392)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x393 = INT16_MAX;
	uint64_t x394 = 7011424697LLU;
	int8_t x396 = -12;

    t98 = (x393<=(x394*(x395>x396)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint32_t x397 = 22U;
	int64_t x398 = -1LL;
	volatile uint16_t x400 = 3U;
	volatile int32_t t99 = 41330;

    t99 = (x397<=(x398*(x399>x400)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile uint16_t x401 = 14474U;
	static int64_t x402 = -50367724081355LL;
	volatile int32_t x403 = -21348421;
	int32_t x404 = INT32_MIN;

    t100 = (x401<=(x402*(x403>x404)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x405 = 2314U;
	static int64_t x406 = INT64_MIN;
	volatile uint64_t x407 = UINT64_MAX;
	int32_t x408 = INT32_MIN;
	int32_t t101 = -302993777;

    t101 = (x405<=(x406*(x407>x408)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint16_t x410 = UINT16_MAX;
	int64_t x411 = INT64_MIN;

    t102 = (x409<=(x410*(x411>x412)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x413 = 381LL;
	int16_t x414 = 0;
	volatile int64_t x416 = INT64_MIN;

    t103 = (x413<=(x414*(x415>x416)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x417 = 0U;
	int64_t x418 = -10080334586675LL;
	uint16_t x419 = UINT16_MAX;
	int32_t x420 = INT32_MIN;

    t104 = (x417<=(x418*(x419>x420)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = -1;
	int8_t x422 = -16;
	int16_t x423 = INT16_MAX;
	uint32_t x424 = UINT32_MAX;
	int32_t t105 = -383699231;

    t105 = (x421<=(x422*(x423>x424)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint8_t x425 = 3U;
	uint8_t x426 = 1U;
	uint16_t x427 = 9U;
	int32_t t106 = -7791687;

    t106 = (x425<=(x426*(x427>x428)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x429 = 5;
	int32_t x430 = 1090;
	int64_t x431 = INT64_MIN;
	int8_t x432 = INT8_MAX;
	static int32_t t107 = 13;

    t107 = (x429<=(x430*(x431>x432)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x434 = -1LL;
	volatile int64_t x435 = -1LL;
	int32_t x436 = INT32_MIN;

    t108 = (x433<=(x434*(x435>x436)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x437 = 3LLU;
	uint16_t x438 = UINT16_MAX;
	int32_t t109 = 3;

    t109 = (x437<=(x438*(x439>x440)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x442 = -1LL;
	int32_t x444 = -1575285;
	int32_t t110 = 2124637;

    t110 = (x441<=(x442*(x443>x444)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint8_t x447 = UINT8_MAX;
	uint64_t x448 = 142LLU;
	int32_t t111 = 565856725;

    t111 = (x445<=(x446*(x447>x448)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int32_t x449 = -517920785;
	static volatile int16_t x450 = -53;
	static int64_t x452 = INT64_MAX;
	volatile int32_t t112 = -3;

    t112 = (x449<=(x450*(x451>x452)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x454 = UINT64_MAX;
	int16_t x455 = INT16_MIN;
	static volatile int8_t x456 = INT8_MIN;
	volatile int32_t t113 = -9094036;

    t113 = (x453<=(x454*(x455>x456)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x457 = 3U;
	int64_t x458 = -1LL;
	volatile int64_t x459 = INT64_MIN;
	int64_t x460 = INT64_MIN;
	int32_t t114 = -4633382;

    t114 = (x457<=(x458*(x459>x460)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x461 = 0U;
	uint16_t x462 = 0U;
	static int64_t x463 = INT64_MIN;

    t115 = (x461<=(x462*(x463>x464)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x466 = UINT8_MAX;
	int8_t x467 = -8;

    t116 = (x465<=(x466*(x467>x468)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x469 = 5514U;
	int16_t x470 = -1;
	int32_t x471 = -1;
	int64_t x472 = INT64_MIN;
	int32_t t117 = -9;

    t117 = (x469<=(x470*(x471>x472)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x473 = UINT64_MAX;
	uint32_t x474 = UINT32_MAX;
	volatile int64_t x475 = -5668224LL;
	int8_t x476 = -1;

    t118 = (x473<=(x474*(x475>x476)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x477 = INT16_MAX;
	int8_t x478 = INT8_MIN;
	int8_t x479 = INT8_MAX;
	int32_t x480 = 915022;
	static volatile int32_t t119 = -5;

    t119 = (x477<=(x478*(x479>x480)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x481 = 180044463LL;
	volatile int64_t x484 = INT64_MIN;
	static volatile int32_t t120 = 51;

    t120 = (x481<=(x482*(x483>x484)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = INT16_MIN;
	int8_t x486 = INT8_MIN;
	int32_t x487 = INT32_MIN;
	int8_t x488 = INT8_MAX;
	int32_t t121 = -354805;

    t121 = (x485<=(x486*(x487>x488)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x489 = -1;
	volatile uint64_t x491 = 1868475533147LLU;
	static int32_t t122 = 172276;

    t122 = (x489<=(x490*(x491>x492)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint32_t x493 = 740U;
	int64_t x494 = INT64_MIN;
	int32_t x495 = INT32_MIN;
	int16_t x496 = INT16_MIN;
	volatile int32_t t123 = -155538704;

    t123 = (x493<=(x494*(x495>x496)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x498 = INT8_MAX;
	uint16_t x499 = 1695U;
	uint16_t x500 = UINT16_MAX;
	volatile int32_t t124 = -10008;

    t124 = (x497<=(x498*(x499>x500)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = -3181603;
	uint16_t x502 = 11424U;
	volatile int16_t x503 = -2;
	volatile int8_t x504 = INT8_MAX;
	volatile int32_t t125 = -1;

    t125 = (x501<=(x502*(x503>x504)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = -1;
	uint64_t x506 = 50657749LLU;
	int64_t x507 = INT64_MIN;
	static int64_t x508 = INT64_MAX;
	static volatile int32_t t126 = 7131444;

    t126 = (x505<=(x506*(x507>x508)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x509 = 116U;
	int8_t x510 = -1;
	int16_t x511 = INT16_MIN;
	volatile int16_t x512 = INT16_MIN;
	int32_t t127 = -806178468;

    t127 = (x509<=(x510*(x511>x512)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x516 = INT64_MIN;
	static int32_t t128 = 16;

    t128 = (x513<=(x514*(x515>x516)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x517 = 3;
	int8_t x518 = -1;
	uint32_t x519 = 25757990U;
	uint32_t x520 = UINT32_MAX;
	static volatile int32_t t129 = 383;

    t129 = (x517<=(x518*(x519>x520)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x522 = INT8_MIN;
	uint16_t x523 = UINT16_MAX;
	static int16_t x524 = INT16_MAX;
	int32_t t130 = 261;

    t130 = (x521<=(x522*(x523>x524)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x525 = 11U;
	int16_t x526 = 4;
	int64_t x527 = -1LL;
	uint8_t x528 = 0U;
	static int32_t t131 = -16567905;

    t131 = (x525<=(x526*(x527>x528)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x529 = INT64_MIN;
	int16_t x530 = 4;
	int8_t x531 = INT8_MIN;

    t132 = (x529<=(x530*(x531>x532)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = -1;
	int32_t x534 = INT32_MAX;
	int64_t x536 = INT64_MIN;

    t133 = (x533<=(x534*(x535>x536)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x537 = UINT16_MAX;
	static int16_t x538 = INT16_MAX;
	static int16_t x539 = INT16_MIN;
	volatile int32_t t134 = 2465085;

    t134 = (x537<=(x538*(x539>x540)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x541 = 10LLU;
	static int8_t x542 = -1;
	int64_t x543 = INT64_MAX;
	int16_t x544 = -345;
	volatile int32_t t135 = -1380030;

    t135 = (x541<=(x542*(x543>x544)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x545 = INT8_MAX;
	int8_t x546 = INT8_MIN;
	uint16_t x547 = UINT16_MAX;
	int8_t x548 = 1;

    t136 = (x545<=(x546*(x547>x548)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x549 = INT32_MIN;
	uint16_t x551 = 1U;
	static uint16_t x552 = 61U;

    t137 = (x549<=(x550*(x551>x552)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x553 = 1888137374060LL;
	volatile int64_t x555 = INT64_MIN;
	volatile int16_t x556 = -2484;
	volatile int32_t t138 = 109004;

    t138 = (x553<=(x554*(x555>x556)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x558 = INT32_MIN;
	int8_t x559 = INT8_MAX;
	volatile int8_t x560 = INT8_MIN;
	int32_t t139 = -3487077;

    t139 = (x557<=(x558*(x559>x560)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x561 = 0;
	static uint8_t x562 = UINT8_MAX;
	int8_t x564 = -1;
	int32_t t140 = -5243817;

    t140 = (x561<=(x562*(x563>x564)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x565 = UINT8_MAX;
	static uint32_t x566 = 8388173U;
	uint8_t x567 = 11U;
	static volatile int16_t x568 = -1;
	int32_t t141 = 3713;

    t141 = (x565<=(x566*(x567>x568)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x569 = INT8_MIN;
	uint8_t x570 = 0U;
	static int32_t x571 = INT32_MIN;
	int8_t x572 = INT8_MIN;
	int32_t t142 = 869;

    t142 = (x569<=(x570*(x571>x572)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int64_t x573 = -23668760854LL;
	volatile uint32_t x574 = 12662U;
	int32_t x575 = 69420356;
	int16_t x576 = INT16_MIN;
	volatile int32_t t143 = -75;

    t143 = (x573<=(x574*(x575>x576)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x577 = INT16_MIN;
	uint64_t x580 = UINT64_MAX;
	volatile int32_t t144 = 66;

    t144 = (x577<=(x578*(x579>x580)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x582 = INT32_MIN;
	int16_t x583 = -348;
	uint8_t x584 = UINT8_MAX;
	static int32_t t145 = -51364;

    t145 = (x581<=(x582*(x583>x584)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x585 = INT64_MIN;
	int8_t x587 = 0;
	static int32_t x588 = INT32_MIN;
	static int32_t t146 = -758085;

    t146 = (x585<=(x586*(x587>x588)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint64_t x589 = 126455630620LLU;
	int16_t x590 = INT16_MAX;
	int64_t x591 = INT64_MAX;
	static volatile int16_t x592 = 926;
	int32_t t147 = -1300;

    t147 = (x589<=(x590*(x591>x592)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = INT8_MAX;
	static volatile int32_t x594 = -674845778;
	uint32_t x596 = 189766154U;

    t148 = (x593<=(x594*(x595>x596)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = INT32_MIN;
	uint16_t x598 = 24U;
	int64_t x599 = 638181598863476539LL;
	volatile int32_t t149 = 1;

    t149 = (x597<=(x598*(x599>x600)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x601 = 4U;
	int16_t x602 = -3755;
	int64_t x603 = INT64_MIN;
	static int8_t x604 = -55;
	volatile int32_t t150 = 503632897;

    t150 = (x601<=(x602*(x603>x604)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = 50;
	volatile int16_t x606 = -15;
	static volatile int32_t t151 = -245050609;

    t151 = (x605<=(x606*(x607>x608)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x609 = 8U;
	uint32_t x610 = UINT32_MAX;
	int64_t x611 = -11261468LL;
	static int16_t x612 = -1;
	int32_t t152 = 204748;

    t152 = (x609<=(x610*(x611>x612)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = 58;
	int8_t x615 = -1;
	uint8_t x616 = 120U;
	volatile int32_t t153 = 29044518;

    t153 = (x613<=(x614*(x615>x616)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = INT32_MIN;
	static volatile int8_t x618 = 2;
	uint64_t x620 = UINT64_MAX;
	int32_t t154 = 1272;

    t154 = (x617<=(x618*(x619>x620)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x621 = 7582701181752948LLU;
	static volatile int32_t x622 = INT32_MAX;
	uint32_t x623 = 185022U;
	volatile int32_t t155 = 976397;

    t155 = (x621<=(x622*(x623>x624)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x626 = -1;
	volatile uint64_t x627 = 50LLU;
	int8_t x628 = INT8_MIN;
	int32_t t156 = -54721;

    t156 = (x625<=(x626*(x627>x628)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x629 = 118;
	static uint16_t x630 = UINT16_MAX;
	uint8_t x631 = UINT8_MAX;
	static uint64_t x632 = UINT64_MAX;
	static int32_t t157 = -5997;

    t157 = (x629<=(x630*(x631>x632)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint64_t x634 = 1021863364646762227LLU;
	volatile int32_t x635 = INT32_MAX;
	int32_t t158 = 30680967;

    t158 = (x633<=(x634*(x635>x636)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x637 = 0;
	uint32_t x638 = UINT32_MAX;
	uint16_t x639 = 1975U;
	static volatile int8_t x640 = INT8_MIN;
	volatile int32_t t159 = -3566020;

    t159 = (x637<=(x638*(x639>x640)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x641 = INT8_MIN;
	static volatile uint16_t x642 = UINT16_MAX;
	volatile int32_t t160 = 0;

    t160 = (x641<=(x642*(x643>x644)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x645 = INT64_MIN;
	int16_t x646 = -1;
	int16_t x647 = -1;
	uint32_t x648 = 50U;
	int32_t t161 = -477017759;

    t161 = (x645<=(x646*(x647>x648)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x649 = -1;
	int64_t x650 = -6230047592038184LL;
	static uint64_t x651 = 92934674LLU;
	static volatile int32_t t162 = 63119;

    t162 = (x649<=(x650*(x651>x652)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x653 = 1647330145LLU;
	int16_t x656 = -1;
	volatile int32_t t163 = 444;

    t163 = (x653<=(x654*(x655>x656)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint8_t x657 = 12U;
	static volatile int32_t x658 = INT32_MAX;
	int8_t x659 = INT8_MAX;
	volatile int32_t t164 = 1021748654;

    t164 = (x657<=(x658*(x659>x660)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = 1582608679LL;
	int8_t x662 = INT8_MAX;
	int64_t x663 = INT64_MIN;
	int8_t x664 = -1;
	int32_t t165 = -70;

    t165 = (x661<=(x662*(x663>x664)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x665 = -54;
	static uint8_t x666 = 1U;
	volatile int16_t x667 = -624;
	static int32_t t166 = 15610;

    t166 = (x665<=(x666*(x667>x668)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x669 = 13283U;
	uint16_t x670 = 12U;
	volatile int64_t x671 = INT64_MIN;
	uint64_t x672 = UINT64_MAX;
	int32_t t167 = -25380606;

    t167 = (x669<=(x670*(x671>x672)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint32_t x673 = UINT32_MAX;
	volatile int64_t x674 = INT64_MAX;
	int64_t x676 = INT64_MAX;
	int32_t t168 = 814710777;

    t168 = (x673<=(x674*(x675>x676)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x677 = -1;
	uint64_t x680 = UINT64_MAX;
	int32_t t169 = 67946742;

    t169 = (x677<=(x678*(x679>x680)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = INT32_MIN;
	int32_t x683 = -1;
	int8_t x684 = -15;
	volatile int32_t t170 = 1;

    t170 = (x681<=(x682*(x683>x684)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x685 = INT16_MIN;
	volatile int64_t x687 = -1LL;
	int8_t x688 = 19;
	static volatile int32_t t171 = 1288022;

    t171 = (x685<=(x686*(x687>x688)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x689 = 0LL;
	volatile int64_t x690 = INT64_MIN;
	uint64_t x691 = 1543659373LLU;
	int8_t x692 = 11;

    t172 = (x689<=(x690*(x691>x692)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = -1LL;
	uint8_t x694 = UINT8_MAX;
	int32_t t173 = -77961633;

    t173 = (x693<=(x694*(x695>x696)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x697 = INT32_MIN;
	int32_t x698 = INT32_MIN;
	int8_t x700 = -1;
	int32_t t174 = 1;

    t174 = (x697<=(x698*(x699>x700)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x701 = 1037;
	int16_t x702 = -6701;
	volatile int64_t x704 = 7LL;
	int32_t t175 = -65999827;

    t175 = (x701<=(x702*(x703>x704)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x705 = 11U;
	int64_t x706 = INT64_MIN;
	static int64_t x707 = INT64_MIN;
	int32_t t176 = -730;

    t176 = (x705<=(x706*(x707>x708)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x709 = INT32_MIN;
	static volatile uint16_t x710 = 1795U;
	int16_t x711 = INT16_MIN;
	static uint32_t x712 = UINT32_MAX;
	int32_t t177 = 756136;

    t177 = (x709<=(x710*(x711>x712)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x713 = 1115;
	uint8_t x715 = 3U;
	static volatile uint64_t x716 = UINT64_MAX;

    t178 = (x713<=(x714*(x715>x716)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x718 = -509466501LL;
	int16_t x719 = -1;
	static uint64_t x720 = 532892288203LLU;
	int32_t t179 = -4326;

    t179 = (x717<=(x718*(x719>x720)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x722 = 0;
	int64_t x723 = 32455102809338LL;
	volatile int64_t x724 = 1587287LL;
	int32_t t180 = 9595;

    t180 = (x721<=(x722*(x723>x724)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint32_t x725 = 4U;
	int8_t x726 = 1;
	int8_t x727 = INT8_MIN;
	static int64_t x728 = -65381939828583375LL;
	int32_t t181 = 4601459;

    t181 = (x725<=(x726*(x727>x728)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x730 = INT32_MIN;
	int8_t x731 = INT8_MAX;
	int64_t x732 = -1LL;
	volatile int32_t t182 = 96;

    t182 = (x729<=(x730*(x731>x732)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x733 = INT16_MIN;
	uint8_t x734 = 1U;
	int64_t x735 = INT64_MIN;
	int16_t x736 = -1;
	volatile int32_t t183 = -16681;

    t183 = (x733<=(x734*(x735>x736)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x737 = UINT64_MAX;
	uint8_t x738 = 0U;
	uint16_t x740 = 14U;
	static volatile int32_t t184 = -510007801;

    t184 = (x737<=(x738*(x739>x740)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = INT16_MIN;
	static int8_t x742 = INT8_MIN;
	volatile int64_t x743 = -1LL;
	volatile uint16_t x744 = 7U;

    t185 = (x741<=(x742*(x743>x744)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int64_t x745 = -24228545666877LL;
	uint16_t x748 = 186U;
	static int32_t t186 = 241770;

    t186 = (x745<=(x746*(x747>x748)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int16_t x749 = -1;
	int16_t x751 = INT16_MIN;
	uint16_t x752 = 15262U;
	int32_t t187 = 2;

    t187 = (x749<=(x750*(x751>x752)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x754 = INT32_MAX;
	int32_t x755 = INT32_MIN;
	volatile int32_t x756 = 8;

    t188 = (x753<=(x754*(x755>x756)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x758 = -1;
	volatile int32_t x760 = INT32_MIN;
	volatile int32_t t189 = -705297;

    t189 = (x757<=(x758*(x759>x760)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x761 = INT64_MIN;
	uint16_t x762 = 13825U;
	uint8_t x763 = UINT8_MAX;
	static volatile uint64_t x764 = 254987LLU;
	volatile int32_t t190 = -1;

    t190 = (x761<=(x762*(x763>x764)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int16_t x765 = -1;
	static int64_t x766 = -1LL;
	uint8_t x767 = 28U;

    t191 = (x765<=(x766*(x767>x768)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint64_t x771 = 31363219449390274LLU;
	uint8_t x772 = 0U;
	static int32_t t192 = 25;

    t192 = (x769<=(x770*(x771>x772)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x773 = -1LL;
	volatile int32_t x775 = -1;
	volatile int64_t x776 = INT64_MAX;
	volatile int32_t t193 = -15984;

    t193 = (x773<=(x774*(x775>x776)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x777 = INT64_MIN;
	volatile int64_t x779 = -1LL;
	int16_t x780 = 0;
	volatile int32_t t194 = -6990306;

    t194 = (x777<=(x778*(x779>x780)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int32_t x781 = -3402086;
	volatile int8_t x782 = -18;
	int8_t x783 = 4;
	int32_t x784 = INT32_MIN;
	int32_t t195 = -122;

    t195 = (x781<=(x782*(x783>x784)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x785 = INT8_MIN;
	int64_t x786 = INT64_MIN;
	uint32_t x787 = 1390U;
	int32_t x788 = -1;

    t196 = (x785<=(x786*(x787>x788)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = INT8_MIN;
	int64_t x790 = 8480493761LL;
	int16_t x792 = -105;

    t197 = (x789<=(x790*(x791>x792)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x793 = 113575560LLU;
	uint16_t x794 = UINT16_MAX;
	int8_t x795 = 15;
	int8_t x796 = INT8_MIN;
	volatile int32_t t198 = 43425779;

    t198 = (x793<=(x794*(x795>x796)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = 726LL;
	int8_t x798 = -1;
	int32_t x799 = 1958344;
	volatile int32_t t199 = -9494;

    t199 = (x797<=(x798*(x799>x800)));

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


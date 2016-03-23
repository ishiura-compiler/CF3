
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

uint8_t x5 = 120U;
static uint16_t x7 = 12U;
uint64_t x16 = UINT64_MAX;
static uint16_t x17 = 7U;
volatile uint64_t x20 = 59494983170LLU;
int64_t x21 = INT64_MIN;
volatile int32_t x24 = INT32_MAX;
static int8_t x28 = -1;
static int16_t x44 = INT16_MAX;
uint32_t x50 = UINT32_MAX;
int32_t x56 = INT32_MAX;
int16_t x59 = INT16_MAX;
uint32_t x60 = 439619U;
uint32_t x68 = 1229163363U;
int32_t x72 = 86069444;
int16_t x76 = INT16_MIN;
volatile int32_t t17 = 2;
volatile int32_t x77 = INT32_MIN;
volatile int16_t x78 = INT16_MIN;
int32_t t18 = -1;
int64_t x89 = 913360082LL;
uint64_t x94 = UINT64_MAX;
volatile int8_t x95 = INT8_MIN;
volatile int64_t x96 = -31815595LL;
int32_t t21 = 676662;
int64_t x99 = -1LL;
int32_t t22 = 20356775;
int16_t x103 = INT16_MIN;
int64_t x106 = -1LL;
uint64_t x116 = 77242066665255264LLU;
uint64_t x117 = UINT64_MAX;
static volatile int8_t x122 = INT8_MAX;
uint8_t x138 = 44U;
uint16_t x147 = UINT16_MAX;
volatile uint16_t x149 = UINT16_MAX;
static volatile int32_t t34 = -324695;
int32_t t35 = 350784789;
int32_t x157 = -1;
static int16_t x159 = -1;
volatile uint16_t x163 = UINT16_MAX;
int16_t x164 = INT16_MIN;
volatile int32_t t38 = -60297;
volatile uint64_t x175 = UINT64_MAX;
int16_t x181 = -1;
volatile int32_t t42 = -120;
static int16_t x188 = INT16_MIN;
static int16_t x191 = 1234;
volatile int32_t t44 = -5592401;
int16_t x194 = 513;
uint64_t x207 = 3194082LLU;
int8_t x212 = -1;
volatile uint8_t x219 = 0U;
static int64_t x220 = INT64_MIN;
uint8_t x230 = UINT8_MAX;
int32_t x232 = INT32_MAX;
uint32_t x236 = 28528152U;
static volatile int64_t x238 = -838790LL;
volatile int64_t x241 = INT64_MIN;
uint64_t x261 = 242LLU;
uint64_t x268 = 7454236820076962LLU;
volatile int32_t t62 = -501580981;
int64_t x280 = -1LL;
int8_t x282 = INT8_MIN;
static int64_t x291 = -61LL;
int8_t x297 = INT8_MIN;
static int64_t x299 = INT64_MIN;
static volatile int32_t t69 = -16239225;
volatile int16_t x302 = INT16_MIN;
uint64_t x305 = UINT64_MAX;
int16_t x310 = INT16_MIN;
int64_t x312 = -1LL;
int32_t t73 = 255;
static volatile uint32_t x321 = UINT32_MAX;
uint8_t x322 = 1U;
volatile int32_t x324 = 3881;
static int32_t t78 = 244;
volatile int64_t x342 = -777832032797235167LL;
int16_t x345 = INT16_MIN;
static uint8_t x347 = 0U;
int16_t x348 = INT16_MIN;
int32_t x350 = -86580;
int8_t x352 = -1;
int32_t t81 = 1586901;
volatile int16_t x353 = 1;
int8_t x364 = INT8_MAX;
int16_t x365 = INT16_MIN;
int32_t x366 = INT32_MAX;
int16_t x370 = 804;
int16_t x376 = INT16_MIN;
int32_t t87 = -6722;
volatile int64_t x377 = -1LL;
uint16_t x379 = 59U;
int32_t t88 = -1;
int16_t x384 = INT16_MIN;
static int16_t x388 = 107;
static volatile int8_t x398 = 1;
volatile uint16_t x400 = UINT16_MAX;
uint64_t x401 = UINT64_MAX;
volatile int32_t t93 = -117;
int32_t t96 = -10119;
uint8_t x417 = 12U;
static volatile int8_t x422 = 13;
volatile uint8_t x424 = UINT8_MAX;
uint8_t x436 = 10U;
int8_t x444 = INT8_MAX;
volatile int32_t x445 = INT32_MIN;
volatile int8_t x448 = 1;
static volatile int32_t t104 = -112395;
static int32_t t105 = -268579971;
int8_t x453 = -1;
static int32_t x455 = -331131;
volatile int32_t t106 = -14916;
int8_t x458 = INT8_MIN;
int32_t x460 = INT32_MIN;
static volatile int32_t t107 = 1;
uint8_t x463 = 3U;
int8_t x464 = INT8_MIN;
int32_t x468 = INT32_MIN;
volatile int64_t x469 = -1910803933897811LL;
int64_t x481 = -1LL;
int32_t x483 = INT32_MIN;
int32_t t114 = -33074;
int16_t x490 = INT16_MIN;
int8_t x492 = -63;
static int32_t t118 = 181999;
int32_t x514 = INT32_MAX;
uint64_t x515 = 1623653928075825152LLU;
int64_t x518 = INT64_MAX;
static int32_t t122 = -66;
uint16_t x531 = 3274U;
uint8_t x532 = 18U;
volatile int32_t t125 = 5965602;
static int8_t x541 = -1;
uint32_t x544 = UINT32_MAX;
uint16_t x545 = 16548U;
static int64_t x548 = -1LL;
int32_t t129 = 161;
uint16_t x551 = UINT16_MAX;
int16_t x555 = INT16_MIN;
int8_t x556 = 0;
static int16_t x571 = -3;
static uint16_t x572 = 376U;
int32_t t135 = -6253;
static volatile uint16_t x577 = 6U;
volatile int32_t t138 = -3868121;
int32_t x585 = INT32_MIN;
int32_t t139 = 847;
int32_t x593 = INT32_MIN;
static int16_t x595 = INT16_MAX;
int8_t x603 = INT8_MAX;
volatile int8_t x610 = INT8_MIN;
int8_t x613 = -1;
static int32_t t147 = -187863904;
int16_t x625 = INT16_MAX;
volatile uint32_t x626 = UINT32_MAX;
uint8_t x630 = UINT8_MAX;
int16_t x633 = -1;
static int32_t t151 = 2734;
static int8_t x637 = -16;
int8_t x640 = INT8_MIN;
int32_t x641 = INT32_MIN;
uint16_t x648 = 3U;
int32_t t154 = -6;
volatile uint8_t x649 = 18U;
volatile int32_t t155 = 60154;
static volatile uint64_t x653 = 1165LLU;
static uint32_t x657 = 4U;
int64_t x673 = -118406964LL;
static uint64_t x674 = 212907LLU;
volatile int32_t t161 = 98;
volatile int32_t t163 = 101525;
int32_t x694 = INT32_MAX;
int32_t x698 = 42;
static volatile int32_t t166 = 80;
static int32_t t167 = -100825;
static int32_t t171 = -9;
uint8_t x721 = UINT8_MAX;
volatile int32_t t172 = 261703;
int64_t x726 = -7224LL;
volatile uint16_t x728 = 1370U;
volatile uint8_t x730 = UINT8_MAX;
uint64_t x733 = 3035976LLU;
volatile int32_t t178 = 1720308;
int32_t x752 = INT32_MIN;
volatile int8_t x753 = INT8_MIN;
static volatile uint16_t x756 = 186U;
int32_t t180 = 948981;
volatile uint64_t x758 = UINT64_MAX;
static int8_t x771 = INT8_MAX;
int32_t t183 = 54;
static int8_t x774 = -37;
int16_t x783 = -1;
int32_t t185 = 25;
uint16_t x789 = 0U;
static uint16_t x790 = 0U;
uint16_t x798 = UINT16_MAX;
int32_t x801 = INT32_MIN;
volatile int32_t t190 = -38;
volatile int32_t t191 = -26145229;
uint32_t x809 = 973135535U;
uint32_t x811 = 161U;
volatile int8_t x815 = 0;
int8_t x818 = INT8_MAX;
volatile int8_t x822 = INT8_MAX;
int16_t x832 = -205;
int32_t t196 = 20277704;
uint16_t x835 = 8060U;
int8_t x839 = INT8_MIN;
volatile int32_t t198 = -5563;


void f0(void) {
    	int8_t x6 = INT8_MIN;
	static volatile int32_t x8 = INT32_MAX;
	volatile int32_t t0 = 5123;

    t0 = (x5==(x6-(x7<=x8)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x9 = INT64_MIN;
	static uint32_t x10 = 0U;
	static uint8_t x11 = 1U;
	int32_t x12 = INT32_MIN;
	volatile int32_t t1 = 0;

    t1 = (x9==(x10-(x11<=x12)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x13 = -1;
	int32_t x14 = 20;
	uint64_t x15 = 2288489LLU;
	int32_t t2 = 68;

    t2 = (x13==(x14-(x15<=x16)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x18 = -1;
	int16_t x19 = INT16_MAX;
	static int32_t t3 = 346;

    t3 = (x17==(x18-(x19<=x20)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x22 = -1LL;
	int8_t x23 = INT8_MIN;
	int32_t t4 = 1758;

    t4 = (x21==(x22-(x23<=x24)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x25 = INT32_MIN;
	uint16_t x26 = UINT16_MAX;
	uint32_t x27 = 364U;
	volatile int32_t t5 = -8051483;

    t5 = (x25==(x26-(x27<=x28)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x29 = -1;
	uint16_t x30 = 27U;
	int16_t x31 = -1;
	volatile uint8_t x32 = UINT8_MAX;
	static volatile int32_t t6 = 1;

    t6 = (x29==(x30-(x31<=x32)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x33 = 11;
	int16_t x34 = INT16_MIN;
	int32_t x35 = INT32_MAX;
	int16_t x36 = 1;
	volatile int32_t t7 = 10525;

    t7 = (x33==(x34-(x35<=x36)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x37 = -1LL;
	int32_t x38 = 13231;
	int32_t x39 = INT32_MAX;
	volatile uint8_t x40 = UINT8_MAX;
	volatile int32_t t8 = 3498341;

    t8 = (x37==(x38-(x39<=x40)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x41 = -1;
	int64_t x42 = -2386552133166LL;
	int8_t x43 = -1;
	int32_t t9 = 395369;

    t9 = (x41==(x42-(x43<=x44)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x45 = 1113479087LL;
	int16_t x46 = INT16_MAX;
	int16_t x47 = INT16_MIN;
	int16_t x48 = INT16_MAX;
	int32_t t10 = -33517076;

    t10 = (x45==(x46-(x47<=x48)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x49 = 120232531387LLU;
	volatile int64_t x51 = INT64_MIN;
	uint64_t x52 = UINT64_MAX;
	volatile int32_t t11 = 1;

    t11 = (x49==(x50-(x51<=x52)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x53 = INT16_MIN;
	volatile int32_t x54 = 7;
	uint16_t x55 = UINT16_MAX;
	int32_t t12 = -212428737;

    t12 = (x53==(x54-(x55<=x56)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x57 = INT16_MIN;
	uint64_t x58 = 388408368425553LLU;
	int32_t t13 = -19587161;

    t13 = (x57==(x58-(x59<=x60)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x61 = -1;
	int8_t x62 = INT8_MIN;
	static int32_t x63 = 1794799;
	uint16_t x64 = 3U;
	static volatile int32_t t14 = -2;

    t14 = (x61==(x62-(x63<=x64)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x65 = INT32_MAX;
	int32_t x66 = -1;
	uint8_t x67 = 2U;
	int32_t t15 = -1638485;

    t15 = (x65==(x66-(x67<=x68)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x69 = 18U;
	uint16_t x70 = UINT16_MAX;
	static volatile uint8_t x71 = 2U;
	static int32_t t16 = 12;

    t16 = (x69==(x70-(x71<=x72)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x73 = UINT8_MAX;
	static int8_t x74 = 30;
	uint8_t x75 = 9U;

    t17 = (x73==(x74-(x75<=x76)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x79 = -8572LL;
	volatile int64_t x80 = INT64_MIN;

    t18 = (x77==(x78-(x79<=x80)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x81 = 0;
	static uint16_t x82 = 7802U;
	static uint32_t x83 = 1024337287U;
	int64_t x84 = INT64_MAX;
	volatile int32_t t19 = 4591;

    t19 = (x81==(x82-(x83<=x84)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x90 = 59U;
	int16_t x91 = INT16_MAX;
	volatile uint64_t x92 = 21143943704765526LLU;
	static int32_t t20 = 25;

    t20 = (x89==(x90-(x91<=x92)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x93 = -104344LL;

    t21 = (x93==(x94-(x95<=x96)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x97 = INT8_MAX;
	volatile int16_t x98 = 2;
	int8_t x100 = INT8_MAX;

    t22 = (x97==(x98-(x99<=x100)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x101 = -1;
	int8_t x102 = INT8_MIN;
	int64_t x104 = -11542318501LL;
	volatile int32_t t23 = -2766562;

    t23 = (x101==(x102-(x103<=x104)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x105 = 1U;
	static volatile int64_t x107 = -1LL;
	int64_t x108 = INT64_MIN;
	static int32_t t24 = -11154;

    t24 = (x105==(x106-(x107<=x108)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x113 = 70861940191LL;
	uint64_t x114 = 1720957961738491730LLU;
	int16_t x115 = -1;
	int32_t t25 = 40;

    t25 = (x113==(x114-(x115<=x116)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x118 = INT8_MIN;
	int16_t x119 = -1;
	uint8_t x120 = 7U;
	volatile int32_t t26 = 58454443;

    t26 = (x117==(x118-(x119<=x120)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x121 = -25;
	int32_t x123 = INT32_MAX;
	int32_t x124 = 2;
	int32_t t27 = -525;

    t27 = (x121==(x122-(x123<=x124)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x125 = INT16_MIN;
	static int16_t x126 = 20;
	int32_t x127 = 312;
	int64_t x128 = -1LL;
	volatile int32_t t28 = 66791;

    t28 = (x125==(x126-(x127<=x128)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x129 = INT32_MIN;
	volatile uint8_t x130 = UINT8_MAX;
	uint64_t x131 = UINT64_MAX;
	uint32_t x132 = 376236U;
	volatile int32_t t29 = 1039154;

    t29 = (x129==(x130-(x131<=x132)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint64_t x133 = 17167963038137513LLU;
	int32_t x134 = INT32_MIN;
	int8_t x135 = INT8_MAX;
	volatile int32_t x136 = -4;
	int32_t t30 = -5;

    t30 = (x133==(x134-(x135<=x136)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x137 = INT32_MIN;
	int32_t x139 = 1453;
	uint64_t x140 = 4311408LLU;
	int32_t t31 = -44;

    t31 = (x137==(x138-(x139<=x140)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x141 = INT32_MIN;
	uint64_t x142 = UINT64_MAX;
	int64_t x143 = -1LL;
	uint8_t x144 = 58U;
	int32_t t32 = 930;

    t32 = (x141==(x142-(x143<=x144)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x145 = 1817028533U;
	static uint8_t x146 = 21U;
	int64_t x148 = -1LL;
	int32_t t33 = 35;

    t33 = (x145==(x146-(x147<=x148)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x150 = INT16_MIN;
	static uint32_t x151 = 124139082U;
	int64_t x152 = INT64_MIN;

    t34 = (x149==(x150-(x151<=x152)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x153 = 7183384390156LLU;
	int8_t x154 = -41;
	uint16_t x155 = UINT16_MAX;
	volatile int32_t x156 = 336;

    t35 = (x153==(x154-(x155<=x156)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x158 = INT16_MIN;
	static uint32_t x160 = UINT32_MAX;
	static volatile int32_t t36 = -1501;

    t36 = (x157==(x158-(x159<=x160)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x161 = INT64_MIN;
	volatile int16_t x162 = INT16_MIN;
	int32_t t37 = 7102056;

    t37 = (x161==(x162-(x163<=x164)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile uint32_t x165 = 60379U;
	volatile int64_t x166 = -1LL;
	static int64_t x167 = INT64_MIN;
	uint32_t x168 = 619U;

    t38 = (x165==(x166-(x167<=x168)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x169 = INT32_MIN;
	static uint16_t x170 = 0U;
	uint32_t x171 = 27362U;
	static uint8_t x172 = 1U;
	static int32_t t39 = 22114655;

    t39 = (x169==(x170-(x171<=x172)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x173 = 26U;
	uint64_t x174 = 1LLU;
	int64_t x176 = INT64_MIN;
	static volatile int32_t t40 = -258320;

    t40 = (x173==(x174-(x175<=x176)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x177 = INT32_MAX;
	volatile int64_t x178 = INT64_MIN;
	uint8_t x179 = UINT8_MAX;
	int8_t x180 = INT8_MAX;
	volatile int32_t t41 = 708680130;

    t41 = (x177==(x178-(x179<=x180)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x182 = -6;
	uint16_t x183 = 19U;
	int32_t x184 = -923;

    t42 = (x181==(x182-(x183<=x184)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x185 = INT8_MIN;
	int32_t x186 = -1;
	int32_t x187 = 205479;
	int32_t t43 = -739;

    t43 = (x185==(x186-(x187<=x188)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x189 = UINT8_MAX;
	static int64_t x190 = INT64_MAX;
	uint16_t x192 = 4887U;

    t44 = (x189==(x190-(x191<=x192)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x193 = INT32_MIN;
	volatile int16_t x195 = INT16_MAX;
	uint64_t x196 = 302336694427064795LLU;
	volatile int32_t t45 = 212;

    t45 = (x193==(x194-(x195<=x196)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x197 = INT16_MIN;
	int64_t x198 = INT64_MAX;
	static int32_t x199 = INT32_MIN;
	static int16_t x200 = 25;
	int32_t t46 = -117330;

    t46 = (x197==(x198-(x199<=x200)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x205 = 10LLU;
	volatile int8_t x206 = INT8_MIN;
	int16_t x208 = INT16_MIN;
	static int32_t t47 = -444;

    t47 = (x205==(x206-(x207<=x208)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x209 = 1;
	static volatile int64_t x210 = -52004749LL;
	static uint64_t x211 = 1518429701064LLU;
	static int32_t t48 = 4248215;

    t48 = (x209==(x210-(x211<=x212)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x213 = UINT16_MAX;
	int8_t x214 = INT8_MAX;
	int8_t x215 = INT8_MIN;
	uint16_t x216 = UINT16_MAX;
	volatile int32_t t49 = -354571;

    t49 = (x213==(x214-(x215<=x216)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int64_t x217 = INT64_MIN;
	volatile uint32_t x218 = 255U;
	volatile int32_t t50 = 28;

    t50 = (x217==(x218-(x219<=x220)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x225 = INT16_MAX;
	int8_t x226 = 1;
	static int16_t x227 = 231;
	uint64_t x228 = 1941479095455160405LLU;
	volatile int32_t t51 = -3;

    t51 = (x225==(x226-(x227<=x228)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int8_t x229 = INT8_MIN;
	int16_t x231 = -2;
	int32_t t52 = -53347;

    t52 = (x229==(x230-(x231<=x232)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x233 = -38;
	uint16_t x234 = 0U;
	uint8_t x235 = 1U;
	volatile int32_t t53 = -75;

    t53 = (x233==(x234-(x235<=x236)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint32_t x237 = UINT32_MAX;
	static int16_t x239 = INT16_MIN;
	uint64_t x240 = 10026537383498472LLU;
	static int32_t t54 = 100207116;

    t54 = (x237==(x238-(x239<=x240)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x242 = INT16_MIN;
	int64_t x243 = INT64_MAX;
	int32_t x244 = 51;
	volatile int32_t t55 = 1471;

    t55 = (x241==(x242-(x243<=x244)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x245 = INT16_MIN;
	volatile uint8_t x246 = 0U;
	uint32_t x247 = 33037847U;
	uint64_t x248 = UINT64_MAX;
	volatile int32_t t56 = 3904;

    t56 = (x245==(x246-(x247<=x248)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x249 = 1U;
	static int16_t x250 = INT16_MAX;
	static uint64_t x251 = UINT64_MAX;
	int32_t x252 = 125711278;
	int32_t t57 = 6469;

    t57 = (x249==(x250-(x251<=x252)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x253 = 0LL;
	static uint32_t x254 = UINT32_MAX;
	int32_t x255 = -194;
	int8_t x256 = -28;
	static volatile int32_t t58 = 10786189;

    t58 = (x253==(x254-(x255<=x256)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x257 = INT64_MIN;
	static int16_t x258 = INT16_MIN;
	uint32_t x259 = 28U;
	uint64_t x260 = UINT64_MAX;
	volatile int32_t t59 = 0;

    t59 = (x257==(x258-(x259<=x260)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x262 = INT64_MAX;
	int16_t x263 = INT16_MIN;
	int16_t x264 = -1;
	volatile int32_t t60 = -563092482;

    t60 = (x261==(x262-(x263<=x264)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x265 = -296911071;
	volatile uint8_t x266 = 14U;
	static int16_t x267 = INT16_MAX;
	int32_t t61 = 13570;

    t61 = (x265==(x266-(x267<=x268)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x269 = INT8_MIN;
	uint32_t x270 = 16556363U;
	int8_t x271 = 60;
	static uint32_t x272 = UINT32_MAX;

    t62 = (x269==(x270-(x271<=x272)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x273 = 34386047204LL;
	static int32_t x274 = -1;
	int64_t x275 = INT64_MAX;
	int32_t x276 = -60901;
	int32_t t63 = -11177000;

    t63 = (x273==(x274-(x275<=x276)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x277 = 40U;
	uint8_t x278 = 24U;
	volatile int64_t x279 = INT64_MAX;
	int32_t t64 = -165840913;

    t64 = (x277==(x278-(x279<=x280)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x281 = INT64_MAX;
	volatile uint32_t x283 = 35301U;
	int16_t x284 = INT16_MIN;
	static int32_t t65 = 125709;

    t65 = (x281==(x282-(x283<=x284)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x285 = INT32_MAX;
	uint32_t x286 = UINT32_MAX;
	uint16_t x287 = 14450U;
	volatile int32_t x288 = -4767;
	static volatile int32_t t66 = 0;

    t66 = (x285==(x286-(x287<=x288)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x289 = 1;
	volatile int16_t x290 = INT16_MAX;
	int8_t x292 = INT8_MIN;
	int32_t t67 = -3426310;

    t67 = (x289==(x290-(x291<=x292)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x293 = -12;
	uint64_t x294 = 221689369351640LLU;
	volatile int64_t x295 = INT64_MAX;
	int32_t x296 = INT32_MIN;
	volatile int32_t t68 = -52805178;

    t68 = (x293==(x294-(x295<=x296)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x298 = -977352122365124LL;
	int16_t x300 = INT16_MIN;

    t69 = (x297==(x298-(x299<=x300)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x301 = -1;
	int8_t x303 = -49;
	static uint64_t x304 = 523633101760399LLU;
	int32_t t70 = 3143760;

    t70 = (x301==(x302-(x303<=x304)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x306 = 5758;
	int32_t x307 = 1;
	int16_t x308 = -1;
	volatile int32_t t71 = 930012;

    t71 = (x305==(x306-(x307<=x308)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x309 = 10280U;
	static int8_t x311 = INT8_MAX;
	int32_t t72 = 46;

    t72 = (x309==(x310-(x311<=x312)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x313 = INT64_MAX;
	int16_t x314 = 91;
	int8_t x315 = 5;
	int32_t x316 = -275;

    t73 = (x313==(x314-(x315<=x316)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x317 = 2678LLU;
	int8_t x318 = INT8_MAX;
	uint8_t x319 = 3U;
	int64_t x320 = 3293307LL;
	int32_t t74 = 87483;

    t74 = (x317==(x318-(x319<=x320)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile uint32_t x323 = 15U;
	volatile int32_t t75 = -160732;

    t75 = (x321==(x322-(x323<=x324)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x325 = INT32_MAX;
	uint32_t x326 = 240281U;
	uint32_t x327 = UINT32_MAX;
	static volatile int16_t x328 = 9;
	int32_t t76 = -7920108;

    t76 = (x325==(x326-(x327<=x328)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x333 = UINT64_MAX;
	int8_t x334 = -2;
	uint64_t x335 = 97276330694909LLU;
	volatile uint16_t x336 = 0U;
	int32_t t77 = 2;

    t77 = (x333==(x334-(x335<=x336)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x337 = INT64_MIN;
	static int64_t x338 = 7853492736904937LL;
	uint64_t x339 = 1767773677635615675LLU;
	static volatile uint64_t x340 = UINT64_MAX;

    t78 = (x337==(x338-(x339<=x340)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x341 = 6196U;
	static uint8_t x343 = UINT8_MAX;
	int32_t x344 = INT32_MIN;
	int32_t t79 = 27;

    t79 = (x341==(x342-(x343<=x344)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint64_t x346 = 206432175LLU;
	volatile int32_t t80 = 2120946;

    t80 = (x345==(x346-(x347<=x348)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x349 = 0U;
	uint64_t x351 = 11592548452586LLU;

    t81 = (x349==(x350-(x351<=x352)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint8_t x354 = UINT8_MAX;
	uint16_t x355 = 126U;
	uint64_t x356 = UINT64_MAX;
	volatile int32_t t82 = -1;

    t82 = (x353==(x354-(x355<=x356)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x357 = 73U;
	volatile int8_t x358 = -1;
	static int32_t x359 = -1;
	int8_t x360 = INT8_MIN;
	volatile int32_t t83 = -311;

    t83 = (x357==(x358-(x359<=x360)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x361 = -1;
	static int8_t x362 = 26;
	int32_t x363 = -71339332;
	static volatile int32_t t84 = -15591327;

    t84 = (x361==(x362-(x363<=x364)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint16_t x367 = 1371U;
	volatile int16_t x368 = -1;
	volatile int32_t t85 = -104967129;

    t85 = (x365==(x366-(x367<=x368)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x369 = -1;
	int8_t x371 = -1;
	volatile uint16_t x372 = 9U;
	int32_t t86 = -1;

    t86 = (x369==(x370-(x371<=x372)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x373 = INT64_MIN;
	uint64_t x374 = 1425LLU;
	int16_t x375 = INT16_MIN;

    t87 = (x373==(x374-(x375<=x376)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x378 = INT8_MAX;
	static uint8_t x380 = 63U;

    t88 = (x377==(x378-(x379<=x380)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x381 = 4091713U;
	volatile int16_t x382 = INT16_MIN;
	int32_t x383 = -1;
	int32_t t89 = -27139;

    t89 = (x381==(x382-(x383<=x384)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x385 = 0;
	volatile int16_t x386 = -1;
	int64_t x387 = -1579949LL;
	volatile int32_t t90 = -2;

    t90 = (x385==(x386-(x387<=x388)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x393 = -176;
	int32_t x394 = INT32_MAX;
	int32_t x395 = INT32_MIN;
	int16_t x396 = INT16_MIN;
	volatile int32_t t91 = 46928156;

    t91 = (x393==(x394-(x395<=x396)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x397 = INT8_MIN;
	uint32_t x399 = UINT32_MAX;
	volatile int32_t t92 = 14;

    t92 = (x397==(x398-(x399<=x400)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x402 = INT16_MIN;
	int8_t x403 = INT8_MAX;
	uint16_t x404 = 30U;

    t93 = (x401==(x402-(x403<=x404)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x405 = 39;
	int8_t x406 = 5;
	static uint32_t x407 = 1112U;
	int32_t x408 = INT32_MIN;
	volatile int32_t t94 = 6341;

    t94 = (x405==(x406-(x407<=x408)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x409 = INT64_MIN;
	int16_t x410 = -1;
	static volatile int8_t x411 = INT8_MAX;
	uint8_t x412 = 1U;
	int32_t t95 = 297;

    t95 = (x409==(x410-(x411<=x412)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x413 = -4;
	volatile uint32_t x414 = 26U;
	volatile int32_t x415 = -1;
	uint32_t x416 = 12U;

    t96 = (x413==(x414-(x415<=x416)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x418 = INT16_MIN;
	int64_t x419 = 4659384176947911LL;
	int8_t x420 = INT8_MIN;
	int32_t t97 = 189106;

    t97 = (x417==(x418-(x419<=x420)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x421 = -1;
	static int64_t x423 = INT64_MAX;
	static int32_t t98 = -98903;

    t98 = (x421==(x422-(x423<=x424)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x425 = 4U;
	int32_t x426 = -17452616;
	volatile int16_t x427 = -3574;
	uint8_t x428 = UINT8_MAX;
	volatile int32_t t99 = -290400;

    t99 = (x425==(x426-(x427<=x428)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x429 = INT64_MIN;
	volatile uint32_t x430 = 232U;
	int64_t x431 = -22LL;
	static int32_t x432 = -513;
	static int32_t t100 = 7;

    t100 = (x429==(x430-(x431<=x432)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x433 = 6U;
	volatile uint32_t x434 = 16714942U;
	int8_t x435 = -8;
	int32_t t101 = 852347;

    t101 = (x433==(x434-(x435<=x436)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x437 = INT8_MIN;
	int64_t x438 = INT64_MIN;
	int16_t x439 = 1825;
	int8_t x440 = INT8_MAX;
	int32_t t102 = 77148818;

    t102 = (x437==(x438-(x439<=x440)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x441 = INT16_MIN;
	uint8_t x442 = 0U;
	int64_t x443 = -17099253141LL;
	static int32_t t103 = 2;

    t103 = (x441==(x442-(x443<=x444)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x446 = INT32_MIN;
	volatile uint16_t x447 = UINT16_MAX;

    t104 = (x445==(x446-(x447<=x448)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x449 = 1047;
	int32_t x450 = 11503470;
	int32_t x451 = -13;
	volatile uint8_t x452 = 2U;

    t105 = (x449==(x450-(x451<=x452)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x454 = INT64_MAX;
	volatile int16_t x456 = 7;

    t106 = (x453==(x454-(x455<=x456)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x457 = INT64_MAX;
	int32_t x459 = INT32_MIN;

    t107 = (x457==(x458-(x459<=x460)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x461 = 0LL;
	int8_t x462 = INT8_MIN;
	int32_t t108 = -6;

    t108 = (x461==(x462-(x463<=x464)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x465 = -1LL;
	static volatile int16_t x466 = -1;
	uint16_t x467 = 913U;
	volatile int32_t t109 = 1543389;

    t109 = (x465==(x466-(x467<=x468)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint8_t x470 = 1U;
	int32_t x471 = -1;
	static volatile int32_t x472 = INT32_MAX;
	volatile int32_t t110 = 393;

    t110 = (x469==(x470-(x471<=x472)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x473 = INT64_MIN;
	int32_t x474 = INT32_MAX;
	volatile uint8_t x475 = 5U;
	uint64_t x476 = UINT64_MAX;
	int32_t t111 = 55047;

    t111 = (x473==(x474-(x475<=x476)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x477 = 2868U;
	uint8_t x478 = 55U;
	static volatile uint64_t x479 = 94843841912139674LLU;
	static int16_t x480 = -1;
	static volatile int32_t t112 = 3545679;

    t112 = (x477==(x478-(x479<=x480)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x482 = INT8_MIN;
	volatile int64_t x484 = -1LL;
	static volatile int32_t t113 = 7954;

    t113 = (x481==(x482-(x483<=x484)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x485 = -1;
	int64_t x486 = INT64_MAX;
	uint32_t x487 = 64282U;
	uint64_t x488 = UINT64_MAX;

    t114 = (x485==(x486-(x487<=x488)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x489 = INT8_MIN;
	int16_t x491 = -6155;
	int32_t t115 = 112092949;

    t115 = (x489==(x490-(x491<=x492)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint32_t x493 = 64604594U;
	uint8_t x494 = UINT8_MAX;
	int32_t x495 = INT32_MIN;
	int16_t x496 = INT16_MIN;
	int32_t t116 = -392063037;

    t116 = (x493==(x494-(x495<=x496)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x497 = UINT32_MAX;
	int16_t x498 = INT16_MAX;
	int8_t x499 = INT8_MIN;
	int32_t x500 = INT32_MIN;
	int32_t t117 = 15;

    t117 = (x497==(x498-(x499<=x500)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x501 = -1;
	static int16_t x502 = INT16_MIN;
	volatile int64_t x503 = INT64_MAX;
	uint8_t x504 = 5U;

    t118 = (x501==(x502-(x503<=x504)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x505 = INT32_MIN;
	static int8_t x506 = INT8_MIN;
	int32_t x507 = INT32_MIN;
	int8_t x508 = 1;
	int32_t t119 = -418;

    t119 = (x505==(x506-(x507<=x508)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x509 = INT8_MAX;
	static int8_t x510 = -1;
	volatile uint64_t x511 = 291LLU;
	static int8_t x512 = INT8_MIN;
	int32_t t120 = 64694;

    t120 = (x509==(x510-(x511<=x512)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile uint16_t x513 = UINT16_MAX;
	static uint16_t x516 = 240U;
	int32_t t121 = 11;

    t121 = (x513==(x514-(x515<=x516)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x517 = -1;
	static uint8_t x519 = 22U;
	uint16_t x520 = 6745U;

    t122 = (x517==(x518-(x519<=x520)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x521 = INT16_MIN;
	uint16_t x522 = 569U;
	int8_t x523 = INT8_MIN;
	uint8_t x524 = UINT8_MAX;
	volatile int32_t t123 = 106;

    t123 = (x521==(x522-(x523<=x524)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x525 = 0U;
	int16_t x526 = -1;
	int64_t x527 = 469LL;
	static uint16_t x528 = UINT16_MAX;
	static int32_t t124 = -1;

    t124 = (x525==(x526-(x527<=x528)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int32_t x529 = INT32_MAX;
	int8_t x530 = 1;

    t125 = (x529==(x530-(x531<=x532)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x533 = INT16_MIN;
	int16_t x534 = 0;
	static uint64_t x535 = UINT64_MAX;
	int32_t x536 = 4357118;
	int32_t t126 = 62947458;

    t126 = (x533==(x534-(x535<=x536)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x537 = INT32_MIN;
	int32_t x538 = 1261;
	volatile uint32_t x539 = 11U;
	volatile int32_t x540 = INT32_MIN;
	volatile int32_t t127 = 261;

    t127 = (x537==(x538-(x539<=x540)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x542 = 1796;
	int16_t x543 = INT16_MIN;
	volatile int32_t t128 = 638160;

    t128 = (x541==(x542-(x543<=x544)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint64_t x546 = 1989069781LLU;
	uint64_t x547 = 15LLU;

    t129 = (x545==(x546-(x547<=x548)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int32_t x549 = 5793;
	static uint32_t x550 = 247789U;
	int16_t x552 = 77;
	int32_t t130 = 82693101;

    t130 = (x549==(x550-(x551<=x552)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x553 = 0;
	uint8_t x554 = UINT8_MAX;
	int32_t t131 = 189775;

    t131 = (x553==(x554-(x555<=x556)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x557 = INT8_MIN;
	uint8_t x558 = 3U;
	volatile int64_t x559 = INT64_MIN;
	int64_t x560 = INT64_MIN;
	static volatile int32_t t132 = -61542;

    t132 = (x557==(x558-(x559<=x560)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x561 = INT32_MAX;
	uint32_t x562 = 18836U;
	int64_t x563 = INT64_MAX;
	uint64_t x564 = 7LLU;
	volatile int32_t t133 = -3862;

    t133 = (x561==(x562-(x563<=x564)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x565 = UINT64_MAX;
	static volatile uint64_t x566 = 59386931158351LLU;
	int64_t x567 = 22096282350643331LL;
	int64_t x568 = INT64_MIN;
	int32_t t134 = 348;

    t134 = (x565==(x566-(x567<=x568)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x569 = 3304U;
	int64_t x570 = -542325149822LL;

    t135 = (x569==(x570-(x571<=x572)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x573 = 13408U;
	uint32_t x574 = 3598667U;
	int32_t x575 = INT32_MIN;
	int8_t x576 = -1;
	static int32_t t136 = -445762;

    t136 = (x573==(x574-(x575<=x576)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x578 = -98;
	int16_t x579 = INT16_MAX;
	volatile int64_t x580 = INT64_MIN;
	static int32_t t137 = -1;

    t137 = (x577==(x578-(x579<=x580)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x581 = -1;
	volatile uint32_t x582 = UINT32_MAX;
	static volatile uint64_t x583 = UINT64_MAX;
	int32_t x584 = INT32_MIN;

    t138 = (x581==(x582-(x583<=x584)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile uint32_t x586 = UINT32_MAX;
	int8_t x587 = 2;
	volatile int64_t x588 = 50600254376386195LL;

    t139 = (x585==(x586-(x587<=x588)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x589 = INT16_MAX;
	int16_t x590 = -135;
	int64_t x591 = INT64_MIN;
	volatile uint64_t x592 = UINT64_MAX;
	volatile int32_t t140 = -382826;

    t140 = (x589==(x590-(x591<=x592)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x594 = INT16_MAX;
	uint64_t x596 = 25968668033LLU;
	volatile int32_t t141 = 97304789;

    t141 = (x593==(x594-(x595<=x596)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x597 = 1124U;
	int16_t x598 = -1;
	int64_t x599 = -1LL;
	uint64_t x600 = 4901LLU;
	static volatile int32_t t142 = 537;

    t142 = (x597==(x598-(x599<=x600)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x601 = INT8_MAX;
	uint8_t x602 = UINT8_MAX;
	int8_t x604 = 5;
	int32_t t143 = -10;

    t143 = (x601==(x602-(x603<=x604)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint64_t x605 = 1990800LLU;
	uint8_t x606 = UINT8_MAX;
	volatile int16_t x607 = -1;
	static int64_t x608 = INT64_MAX;
	volatile int32_t t144 = 8034159;

    t144 = (x605==(x606-(x607<=x608)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x609 = 1;
	int8_t x611 = -1;
	int8_t x612 = -1;
	volatile int32_t t145 = -1;

    t145 = (x609==(x610-(x611<=x612)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x614 = INT16_MAX;
	static int16_t x615 = INT16_MAX;
	uint16_t x616 = 2U;
	int32_t t146 = 12544501;

    t146 = (x613==(x614-(x615<=x616)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x617 = INT16_MIN;
	volatile uint32_t x618 = UINT32_MAX;
	uint16_t x619 = UINT16_MAX;
	int16_t x620 = INT16_MIN;

    t147 = (x617==(x618-(x619<=x620)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x621 = UINT8_MAX;
	int32_t x622 = -1;
	int32_t x623 = -20;
	uint16_t x624 = 1225U;
	static int32_t t148 = -8080010;

    t148 = (x621==(x622-(x623<=x624)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x627 = -1LL;
	volatile int64_t x628 = -4310897LL;
	int32_t t149 = 1;

    t149 = (x625==(x626-(x627<=x628)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x629 = 898767LLU;
	static uint16_t x631 = UINT16_MAX;
	volatile uint16_t x632 = UINT16_MAX;
	volatile int32_t t150 = 1;

    t150 = (x629==(x630-(x631<=x632)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x634 = 36;
	int8_t x635 = -1;
	uint64_t x636 = UINT64_MAX;

    t151 = (x633==(x634-(x635<=x636)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint64_t x638 = UINT64_MAX;
	int64_t x639 = INT64_MIN;
	static int32_t t152 = -129579463;

    t152 = (x637==(x638-(x639<=x640)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x642 = INT32_MAX;
	int8_t x643 = INT8_MAX;
	static uint8_t x644 = UINT8_MAX;
	int32_t t153 = -311129188;

    t153 = (x641==(x642-(x643<=x644)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x645 = INT16_MIN;
	int8_t x646 = -1;
	static uint32_t x647 = 20U;

    t154 = (x645==(x646-(x647<=x648)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int32_t x650 = 35132728;
	int8_t x651 = INT8_MIN;
	int16_t x652 = INT16_MAX;

    t155 = (x649==(x650-(x651<=x652)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x654 = 67U;
	uint32_t x655 = 28U;
	int8_t x656 = 1;
	int32_t t156 = 104510;

    t156 = (x653==(x654-(x655<=x656)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x658 = 284949900985056LLU;
	int8_t x659 = INT8_MAX;
	uint16_t x660 = 1U;
	static int32_t t157 = 334378236;

    t157 = (x657==(x658-(x659<=x660)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x661 = INT64_MIN;
	static int8_t x662 = INT8_MIN;
	uint32_t x663 = 4U;
	volatile int32_t x664 = -1;
	int32_t t158 = -143;

    t158 = (x661==(x662-(x663<=x664)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x665 = -1;
	int8_t x666 = INT8_MAX;
	uint64_t x667 = 186LLU;
	uint16_t x668 = UINT16_MAX;
	volatile int32_t t159 = -38182;

    t159 = (x665==(x666-(x667<=x668)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x675 = 76U;
	int32_t x676 = INT32_MAX;
	static volatile int32_t t160 = -163285697;

    t160 = (x673==(x674-(x675<=x676)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint8_t x677 = UINT8_MAX;
	int64_t x678 = 412535LL;
	volatile int64_t x679 = -1LL;
	int16_t x680 = 1949;

    t161 = (x677==(x678-(x679<=x680)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x681 = 3U;
	volatile int32_t x682 = 20;
	int64_t x683 = INT64_MIN;
	uint64_t x684 = UINT64_MAX;
	volatile int32_t t162 = 28;

    t162 = (x681==(x682-(x683<=x684)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x685 = -91;
	int32_t x686 = INT32_MAX;
	static int16_t x687 = INT16_MIN;
	int16_t x688 = -3;

    t163 = (x685==(x686-(x687<=x688)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x689 = 30LLU;
	uint16_t x690 = UINT16_MAX;
	static uint8_t x691 = 28U;
	int16_t x692 = -1;
	int32_t t164 = -701451567;

    t164 = (x689==(x690-(x691<=x692)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint64_t x693 = 79790787518LLU;
	static uint16_t x695 = 228U;
	int8_t x696 = 9;
	static volatile int32_t t165 = -475;

    t165 = (x693==(x694-(x695<=x696)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x697 = 749LL;
	int8_t x699 = INT8_MIN;
	int8_t x700 = -1;

    t166 = (x697==(x698-(x699<=x700)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint16_t x701 = 254U;
	int16_t x702 = -28;
	int8_t x703 = 0;
	volatile uint16_t x704 = 18294U;

    t167 = (x701==(x702-(x703<=x704)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x705 = INT64_MIN;
	int8_t x706 = INT8_MIN;
	volatile int64_t x707 = -1LL;
	uint64_t x708 = UINT64_MAX;
	int32_t t168 = -945;

    t168 = (x705==(x706-(x707<=x708)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile uint16_t x709 = 5U;
	int64_t x710 = 4675453LL;
	int16_t x711 = INT16_MIN;
	static volatile int16_t x712 = -1;
	int32_t t169 = 6569;

    t169 = (x709==(x710-(x711<=x712)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x713 = -1120560LL;
	uint64_t x714 = UINT64_MAX;
	static volatile uint8_t x715 = 4U;
	int8_t x716 = INT8_MIN;
	int32_t t170 = -78515897;

    t170 = (x713==(x714-(x715<=x716)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x717 = -1LL;
	static uint8_t x718 = 107U;
	static uint8_t x719 = UINT8_MAX;
	int8_t x720 = -1;

    t171 = (x717==(x718-(x719<=x720)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x722 = 20U;
	uint64_t x723 = 51146LLU;
	int32_t x724 = INT32_MIN;

    t172 = (x721==(x722-(x723<=x724)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x725 = -53;
	uint32_t x727 = UINT32_MAX;
	int32_t t173 = -66;

    t173 = (x725==(x726-(x727<=x728)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x729 = -50790171LL;
	int32_t x731 = INT32_MAX;
	volatile uint8_t x732 = 11U;
	int32_t t174 = 15979943;

    t174 = (x729==(x730-(x731<=x732)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x734 = -1;
	volatile int8_t x735 = 1;
	uint8_t x736 = 64U;
	int32_t t175 = 16617;

    t175 = (x733==(x734-(x735<=x736)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x737 = 208721057753541601LL;
	int8_t x738 = -1;
	static int16_t x739 = INT16_MIN;
	volatile int8_t x740 = -13;
	static int32_t t176 = 171681930;

    t176 = (x737==(x738-(x739<=x740)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x741 = INT32_MIN;
	int32_t x742 = 1;
	int16_t x743 = INT16_MIN;
	int16_t x744 = INT16_MAX;
	int32_t t177 = -115952474;

    t177 = (x741==(x742-(x743<=x744)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int16_t x745 = -5133;
	static uint8_t x746 = 11U;
	int16_t x747 = INT16_MAX;
	int8_t x748 = INT8_MIN;

    t178 = (x745==(x746-(x747<=x748)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x749 = 15U;
	int32_t x750 = 18;
	int8_t x751 = INT8_MIN;
	int32_t t179 = 12725;

    t179 = (x749==(x750-(x751<=x752)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x754 = -13;
	uint16_t x755 = 1U;

    t180 = (x753==(x754-(x755<=x756)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint32_t x757 = UINT32_MAX;
	int8_t x759 = INT8_MAX;
	uint64_t x760 = 15493LLU;
	volatile int32_t t181 = 2209945;

    t181 = (x757==(x758-(x759<=x760)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x761 = INT32_MAX;
	uint32_t x762 = 88U;
	volatile int16_t x763 = 11;
	volatile int64_t x764 = INT64_MIN;
	static int32_t t182 = -8685;

    t182 = (x761==(x762-(x763<=x764)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x769 = 24;
	int32_t x770 = -78797;
	volatile int8_t x772 = -1;

    t183 = (x769==(x770-(x771<=x772)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x773 = 35U;
	volatile int8_t x775 = INT8_MAX;
	int16_t x776 = INT16_MAX;
	int32_t t184 = -5199667;

    t184 = (x773==(x774-(x775<=x776)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x781 = -1;
	uint8_t x782 = UINT8_MAX;
	int16_t x784 = INT16_MAX;

    t185 = (x781==(x782-(x783<=x784)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint8_t x785 = UINT8_MAX;
	volatile uint16_t x786 = 3U;
	uint16_t x787 = 23244U;
	int64_t x788 = -2396894110096281957LL;
	int32_t t186 = -1538;

    t186 = (x785==(x786-(x787<=x788)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint16_t x791 = 4U;
	int16_t x792 = -1;
	volatile int32_t t187 = -26084737;

    t187 = (x789==(x790-(x791<=x792)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile uint32_t x793 = UINT32_MAX;
	uint8_t x794 = 4U;
	volatile int16_t x795 = 2612;
	int32_t x796 = INT32_MIN;
	volatile int32_t t188 = 1;

    t188 = (x793==(x794-(x795<=x796)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x797 = -1;
	int64_t x799 = INT64_MIN;
	volatile int8_t x800 = 1;
	int32_t t189 = -124351;

    t189 = (x797==(x798-(x799<=x800)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x802 = INT8_MIN;
	static volatile uint16_t x803 = 16123U;
	volatile int32_t x804 = INT32_MIN;

    t190 = (x801==(x802-(x803<=x804)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int8_t x805 = INT8_MAX;
	int64_t x806 = INT64_MAX;
	int64_t x807 = -448771164440345LL;
	volatile int64_t x808 = INT64_MIN;

    t191 = (x805==(x806-(x807<=x808)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x810 = INT16_MAX;
	uint32_t x812 = 58175U;
	static volatile int32_t t192 = -6730;

    t192 = (x809==(x810-(x811<=x812)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x813 = 3;
	static uint16_t x814 = 0U;
	int8_t x816 = INT8_MAX;
	static volatile int32_t t193 = -230497;

    t193 = (x813==(x814-(x815<=x816)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x817 = -2801;
	uint64_t x819 = UINT64_MAX;
	int64_t x820 = -1LL;
	volatile int32_t t194 = 2910;

    t194 = (x817==(x818-(x819<=x820)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int32_t x821 = 5464434;
	uint32_t x823 = 88046149U;
	static uint64_t x824 = UINT64_MAX;
	int32_t t195 = -392102717;

    t195 = (x821==(x822-(x823<=x824)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x829 = INT16_MIN;
	int64_t x830 = -1880276517LL;
	uint8_t x831 = UINT8_MAX;

    t196 = (x829==(x830-(x831<=x832)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x833 = -1;
	volatile int64_t x834 = INT64_MIN;
	int32_t x836 = -1979;
	int32_t t197 = -490;

    t197 = (x833==(x834-(x835<=x836)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x837 = -21;
	volatile int8_t x838 = INT8_MIN;
	uint16_t x840 = 2047U;

    t198 = (x837==(x838-(x839<=x840)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x841 = 60U;
	int8_t x842 = 0;
	uint32_t x843 = 9322U;
	int8_t x844 = INT8_MAX;
	volatile int32_t t199 = 7965190;

    t199 = (x841==(x842-(x843<=x844)));

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


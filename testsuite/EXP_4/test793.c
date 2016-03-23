
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

static uint8_t x7 = 4U;
static uint16_t x13 = UINT16_MAX;
static int8_t x17 = -24;
volatile int8_t x19 = INT8_MIN;
int8_t x20 = -1;
int8_t x22 = INT8_MAX;
volatile int32_t t6 = 258623642;
int64_t x33 = INT64_MAX;
volatile int8_t x36 = INT8_MIN;
int32_t t8 = -1516054;
int32_t t9 = 707056990;
volatile int64_t x49 = 3547478421LL;
int32_t x51 = -1;
int64_t x53 = INT64_MIN;
int8_t x62 = INT8_MIN;
static volatile uint8_t x63 = 26U;
volatile int64_t x73 = INT64_MAX;
int32_t t16 = -104;
static int8_t x77 = INT8_MIN;
uint32_t x78 = UINT32_MAX;
volatile int32_t t18 = -366300;
static int8_t x89 = INT8_MAX;
volatile int64_t x91 = INT64_MAX;
int32_t t19 = -3715747;
volatile uint32_t x95 = 2641494U;
uint32_t x97 = 1050295239U;
int8_t x105 = -7;
int32_t t23 = -7;
int8_t x119 = 1;
int64_t x124 = -4084385359499LL;
int32_t t25 = 9557399;
int32_t x127 = INT32_MAX;
uint32_t x128 = UINT32_MAX;
volatile int16_t x129 = INT16_MIN;
uint8_t x132 = 91U;
volatile int8_t x133 = -1;
int16_t x140 = INT16_MAX;
int32_t x141 = -133404193;
static volatile int64_t x143 = -1LL;
static int16_t x144 = -1;
uint32_t x150 = 12498250U;
int64_t x152 = -1LL;
static int16_t x153 = INT16_MIN;
volatile int8_t x156 = INT8_MAX;
int32_t t34 = -109;
int32_t t35 = -5;
int8_t x176 = -3;
static volatile int32_t t38 = -7759535;
int32_t t39 = -2605;
uint32_t x185 = 887U;
uint64_t x189 = 1652665469825188LLU;
int32_t x193 = INT32_MIN;
volatile int64_t x204 = INT64_MIN;
volatile int32_t t44 = 167120;
int64_t x217 = INT64_MIN;
volatile int32_t x220 = -5506;
int32_t t47 = 16244279;
int16_t x224 = -1;
static int32_t x229 = -1;
int64_t x239 = INT64_MAX;
int32_t x240 = 167410;
volatile int32_t t51 = 1047;
static int32_t t52 = 360;
uint64_t x246 = 118262795880LLU;
uint32_t x264 = 3U;
uint8_t x270 = 1U;
int32_t t58 = -2938752;
uint64_t x275 = 6542423625033165LLU;
static int8_t x285 = INT8_MIN;
uint16_t x287 = 2549U;
uint16_t x294 = 1U;
int8_t x298 = INT8_MAX;
int32_t x305 = 13322421;
volatile int32_t t67 = -75658;
int16_t x309 = -6844;
int16_t x312 = INT16_MIN;
int64_t x314 = INT64_MIN;
volatile int8_t x331 = -18;
static uint64_t x333 = 193671664974LLU;
int16_t x341 = -1;
int32_t x343 = -27614;
static int64_t x345 = INT64_MIN;
int8_t x363 = INT8_MIN;
volatile uint16_t x365 = 11962U;
int8_t x368 = 4;
volatile uint8_t x382 = 0U;
static int32_t t86 = -584;
static int32_t x392 = 2;
static int8_t x398 = 1;
static int32_t t90 = 6;
uint64_t x420 = 20717485047LLU;
uint64_t x427 = 28099691599701676LLU;
uint8_t x429 = 1U;
volatile int32_t t98 = 1;
int8_t x450 = INT8_MIN;
int8_t x451 = -1;
static int64_t x454 = -1LL;
static uint8_t x457 = UINT8_MAX;
volatile int8_t x464 = -1;
uint16_t x467 = 0U;
int16_t x479 = INT16_MIN;
int32_t x489 = INT32_MIN;
int32_t t110 = -1924619;
int8_t x499 = 7;
static uint64_t x500 = 16459385157596LLU;
static int8_t x502 = INT8_MAX;
int16_t x505 = INT16_MIN;
int16_t x508 = -78;
int32_t x518 = -1;
static int32_t x531 = INT32_MAX;
volatile int64_t x536 = 1LL;
int8_t x538 = INT8_MIN;
int64_t x542 = INT64_MIN;
uint8_t x543 = UINT8_MAX;
static int32_t t126 = 1;
volatile int32_t x564 = -1;
static volatile int8_t x568 = INT8_MIN;
int8_t x570 = INT8_MAX;
int32_t t130 = 52;
int8_t x584 = INT8_MAX;
uint64_t x585 = UINT64_MAX;
int32_t x587 = -1;
uint64_t x590 = 173720847951874036LLU;
static volatile int8_t x594 = -8;
int32_t x603 = 36659;
uint64_t x606 = UINT64_MAX;
int32_t t138 = 2075762;
int8_t x619 = 0;
int32_t x621 = -3627;
uint32_t x623 = 4993664U;
int32_t t142 = -134177;
int32_t t143 = 1;
int32_t x632 = -1;
uint16_t x633 = UINT16_MAX;
volatile int8_t x634 = -7;
static uint32_t x640 = UINT32_MAX;
int64_t x648 = 20LL;
int64_t x651 = 6482940738LL;
int64_t x652 = INT64_MAX;
uint64_t x660 = 126515LLU;
static int64_t x662 = 61769577075598980LL;
uint32_t x669 = UINT32_MAX;
int8_t x675 = 26;
static int32_t t154 = -14282132;
static int32_t x681 = INT32_MAX;
int8_t x682 = INT8_MIN;
uint16_t x684 = 2U;
volatile int32_t t156 = 1;
volatile int64_t x685 = INT64_MIN;
uint8_t x689 = 118U;
int32_t x693 = INT32_MIN;
int8_t x694 = -1;
int32_t t159 = 304192314;
static int64_t x699 = 68920602438LL;
int32_t t163 = -685;
int32_t x717 = -4050;
int16_t x721 = 383;
uint64_t x722 = 15051537LLU;
int16_t x723 = -14;
volatile int32_t t166 = -30;
int8_t x726 = INT8_MAX;
static uint32_t x727 = 1U;
int16_t x730 = INT16_MIN;
int64_t x735 = INT64_MIN;
int32_t t170 = -130;
uint16_t x744 = 38U;
volatile int32_t t171 = -1;
static volatile int32_t x752 = INT32_MIN;
int64_t x762 = -1LL;
int32_t x766 = INT32_MIN;
uint16_t x767 = 1627U;
int64_t x771 = INT64_MAX;
volatile int32_t t178 = -2803962;
static volatile int32_t t179 = 444342583;
uint32_t x777 = UINT32_MAX;
int32_t x787 = INT32_MAX;
volatile int64_t x793 = INT64_MIN;
volatile uint32_t x797 = 32071139U;
static volatile uint16_t x800 = 1013U;
int32_t x807 = -1;
volatile int32_t x813 = -1;
static uint8_t x816 = 26U;
volatile int32_t t191 = 120494;
int8_t x828 = INT8_MIN;
uint8_t x829 = UINT8_MAX;
static volatile uint16_t x830 = 237U;
int64_t x833 = INT64_MAX;
int8_t x836 = INT8_MAX;
int32_t t194 = 2243723;
int32_t x840 = INT32_MIN;
static uint16_t x843 = 6U;
int16_t x850 = INT16_MAX;
int8_t x852 = 23;
uint8_t x855 = UINT8_MAX;
int8_t x856 = -1;
volatile int32_t t199 = -188041216;


void f0(void) {
    	int64_t x5 = INT64_MAX;
	uint32_t x6 = 19U;
	static int16_t x8 = INT16_MIN;
	int32_t t0 = 8133;

    t0 = (x5>(x6+(x7%x8)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x9 = INT16_MAX;
	uint8_t x10 = UINT8_MAX;
	int32_t x11 = 827;
	int64_t x12 = 886831332321641LL;
	int32_t t1 = -1;

    t1 = (x9>(x10+(x11%x12)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x14 = INT16_MIN;
	static int8_t x15 = INT8_MAX;
	int64_t x16 = INT64_MIN;
	int32_t t2 = 499967887;

    t2 = (x13>(x14+(x15%x16)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x18 = -17;
	static volatile int32_t t3 = -2443;

    t3 = (x17>(x18+(x19%x20)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int16_t x21 = -1;
	int16_t x23 = 33;
	uint8_t x24 = 1U;
	int32_t t4 = 10460;

    t4 = (x21>(x22+(x23%x24)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x25 = 5564U;
	uint8_t x26 = UINT8_MAX;
	static int64_t x27 = -30223360LL;
	int8_t x28 = -1;
	volatile int32_t t5 = -155187;

    t5 = (x25>(x26+(x27%x28)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x29 = -1175660019559LL;
	int32_t x30 = INT32_MAX;
	uint8_t x31 = 17U;
	static int64_t x32 = INT64_MAX;

    t6 = (x29>(x30+(x31%x32)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint8_t x34 = 2U;
	int8_t x35 = INT8_MAX;
	volatile int32_t t7 = -318900;

    t7 = (x33>(x34+(x35%x36)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x37 = INT64_MAX;
	volatile int32_t x38 = INT32_MIN;
	int64_t x39 = -1LL;
	uint64_t x40 = UINT64_MAX;

    t8 = (x37>(x38+(x39%x40)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x45 = -1;
	uint64_t x46 = 62505789LLU;
	static int64_t x47 = INT64_MAX;
	uint32_t x48 = UINT32_MAX;

    t9 = (x45>(x46+(x47%x48)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x50 = -1228746;
	static volatile uint64_t x52 = 4256810915228104849LLU;
	volatile int32_t t10 = 76858;

    t10 = (x49>(x50+(x51%x52)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x54 = -90566784;
	static int8_t x55 = 41;
	static volatile int16_t x56 = INT16_MAX;
	volatile int32_t t11 = -374;

    t11 = (x53>(x54+(x55%x56)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x57 = -51;
	static int16_t x58 = INT16_MAX;
	volatile int64_t x59 = INT64_MIN;
	uint64_t x60 = 41438485LLU;
	int32_t t12 = -2883849;

    t12 = (x57>(x58+(x59%x60)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x61 = UINT8_MAX;
	uint64_t x64 = UINT64_MAX;
	int32_t t13 = 0;

    t13 = (x61>(x62+(x63%x64)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x65 = INT32_MIN;
	volatile uint16_t x66 = UINT16_MAX;
	int64_t x67 = -484757417962270058LL;
	uint64_t x68 = 213746310107821621LLU;
	volatile int32_t t14 = 2236;

    t14 = (x65>(x66+(x67%x68)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x69 = INT64_MAX;
	int32_t x70 = 5;
	volatile int8_t x71 = -1;
	volatile int8_t x72 = INT8_MIN;
	volatile int32_t t15 = 10;

    t15 = (x69>(x70+(x71%x72)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x74 = INT32_MAX;
	int16_t x75 = -1;
	int16_t x76 = INT16_MIN;

    t16 = (x73>(x74+(x75%x76)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x79 = 10LL;
	volatile uint32_t x80 = 258U;
	volatile int32_t t17 = -167517;

    t17 = (x77>(x78+(x79%x80)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint16_t x85 = UINT16_MAX;
	int32_t x86 = -1;
	volatile int16_t x87 = INT16_MAX;
	volatile uint64_t x88 = UINT64_MAX;

    t18 = (x85>(x86+(x87%x88)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x90 = INT64_MIN;
	int32_t x92 = -1;

    t19 = (x89>(x90+(x91%x92)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x93 = INT32_MIN;
	volatile uint32_t x94 = 11855551U;
	int64_t x96 = -1LL;
	int32_t t20 = 251857224;

    t20 = (x93>(x94+(x95%x96)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x98 = -1;
	static uint32_t x99 = 1174001641U;
	int16_t x100 = INT16_MIN;
	int32_t t21 = -59273;

    t21 = (x97>(x98+(x99%x100)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile uint32_t x106 = 2U;
	static int8_t x107 = INT8_MAX;
	int8_t x108 = INT8_MIN;
	volatile int32_t t22 = -28;

    t22 = (x105>(x106+(x107%x108)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x113 = -398;
	int8_t x114 = -1;
	uint16_t x115 = 111U;
	uint8_t x116 = 2U;

    t23 = (x113>(x114+(x115%x116)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile uint64_t x117 = 403672255066859094LLU;
	static uint8_t x118 = UINT8_MAX;
	int32_t x120 = INT32_MIN;
	int32_t t24 = 130310;

    t24 = (x117>(x118+(x119%x120)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x121 = INT8_MIN;
	static volatile int16_t x122 = -8;
	int16_t x123 = 3;

    t25 = (x121>(x122+(x123%x124)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile uint32_t x125 = 246230449U;
	volatile int32_t x126 = INT32_MIN;
	int32_t t26 = 8;

    t26 = (x125>(x126+(x127%x128)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x130 = INT16_MIN;
	int64_t x131 = INT64_MIN;
	volatile int32_t t27 = -2569;

    t27 = (x129>(x130+(x131%x132)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x134 = UINT16_MAX;
	static uint64_t x135 = UINT64_MAX;
	uint64_t x136 = UINT64_MAX;
	int32_t t28 = -818;

    t28 = (x133>(x134+(x135%x136)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x137 = UINT32_MAX;
	int16_t x138 = INT16_MAX;
	static int64_t x139 = -56949991127886832LL;
	int32_t t29 = -302;

    t29 = (x137>(x138+(x139%x140)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int64_t x142 = INT64_MIN;
	static volatile int32_t t30 = -12;

    t30 = (x141>(x142+(x143%x144)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x145 = -1LL;
	uint16_t x146 = UINT16_MAX;
	int64_t x147 = INT64_MIN;
	static uint64_t x148 = 2393757LLU;
	int32_t t31 = -952558746;

    t31 = (x145>(x146+(x147%x148)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x149 = -1;
	static int8_t x151 = INT8_MAX;
	int32_t t32 = 85;

    t32 = (x149>(x150+(x151%x152)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x154 = -33;
	uint8_t x155 = 3U;
	int32_t t33 = -536873;

    t33 = (x153>(x154+(x155%x156)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint16_t x157 = 15407U;
	uint8_t x158 = 12U;
	int8_t x159 = INT8_MIN;
	int8_t x160 = INT8_MAX;

    t34 = (x157>(x158+(x159%x160)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint16_t x161 = UINT16_MAX;
	int64_t x162 = INT64_MIN;
	int64_t x163 = -292683458610156LL;
	int16_t x164 = -2;

    t35 = (x161>(x162+(x163%x164)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x165 = -1;
	int8_t x166 = INT8_MIN;
	int16_t x167 = -1;
	int16_t x168 = 309;
	int32_t t36 = 63322;

    t36 = (x165>(x166+(x167%x168)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile uint16_t x173 = 1U;
	volatile int16_t x174 = -7;
	uint32_t x175 = 15071U;
	int32_t t37 = 20176661;

    t37 = (x173>(x174+(x175%x176)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint16_t x177 = 26495U;
	int64_t x178 = INT64_MIN;
	static volatile int64_t x179 = 3954362LL;
	volatile uint16_t x180 = UINT16_MAX;

    t38 = (x177>(x178+(x179%x180)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x181 = 1U;
	int8_t x182 = INT8_MIN;
	int8_t x183 = 0;
	static int64_t x184 = INT64_MIN;

    t39 = (x181>(x182+(x183%x184)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x186 = 0U;
	int32_t x187 = INT32_MAX;
	int16_t x188 = INT16_MIN;
	volatile int32_t t40 = 989;

    t40 = (x185>(x186+(x187%x188)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x190 = 12;
	int64_t x191 = -1LL;
	static volatile int32_t x192 = -1;
	volatile int32_t t41 = 6560;

    t41 = (x189>(x190+(x191%x192)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x194 = -11;
	volatile int16_t x195 = INT16_MAX;
	static int64_t x196 = -14441025407817310LL;
	static int32_t t42 = 1;

    t42 = (x193>(x194+(x195%x196)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x197 = INT64_MIN;
	int8_t x198 = INT8_MIN;
	volatile uint64_t x199 = 52LLU;
	int16_t x200 = INT16_MIN;
	volatile int32_t t43 = 1070972;

    t43 = (x197>(x198+(x199%x200)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x201 = UINT16_MAX;
	uint64_t x202 = UINT64_MAX;
	volatile uint64_t x203 = UINT64_MAX;

    t44 = (x201>(x202+(x203%x204)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x205 = 1065924616713419466LL;
	int8_t x206 = 2;
	static int16_t x207 = INT16_MAX;
	static volatile int8_t x208 = 31;
	volatile int32_t t45 = 0;

    t45 = (x205>(x206+(x207%x208)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x213 = -555570608;
	volatile uint8_t x214 = 84U;
	int16_t x215 = INT16_MIN;
	uint32_t x216 = UINT32_MAX;
	int32_t t46 = -8228180;

    t46 = (x213>(x214+(x215%x216)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x218 = INT32_MAX;
	int64_t x219 = 171043519462634LL;

    t47 = (x217>(x218+(x219%x220)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int32_t x221 = 3873;
	volatile uint32_t x222 = UINT32_MAX;
	volatile int64_t x223 = -584443936668706933LL;
	static int32_t t48 = 338;

    t48 = (x221>(x222+(x223%x224)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x230 = 26U;
	static volatile int64_t x231 = -1LL;
	static int8_t x232 = INT8_MAX;
	static int32_t t49 = 179648;

    t49 = (x229>(x230+(x231%x232)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x233 = UINT16_MAX;
	uint64_t x234 = 243117298404372277LLU;
	volatile int16_t x235 = -36;
	static int64_t x236 = -3109828974LL;
	int32_t t50 = -30;

    t50 = (x233>(x234+(x235%x236)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x237 = -5666;
	int8_t x238 = INT8_MIN;

    t51 = (x237>(x238+(x239%x240)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x241 = INT16_MAX;
	int8_t x242 = INT8_MIN;
	int64_t x243 = -1LL;
	int64_t x244 = INT64_MIN;

    t52 = (x241>(x242+(x243%x244)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x245 = -1LL;
	int64_t x247 = INT64_MIN;
	volatile int16_t x248 = -1;
	int32_t t53 = -16069152;

    t53 = (x245>(x246+(x247%x248)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x253 = INT32_MIN;
	static int8_t x254 = 8;
	int32_t x255 = INT32_MIN;
	int32_t x256 = 327352;
	int32_t t54 = 279;

    t54 = (x253>(x254+(x255%x256)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x257 = INT16_MAX;
	static int32_t x258 = 1642557;
	uint8_t x259 = UINT8_MAX;
	static int32_t x260 = INT32_MAX;
	volatile int32_t t55 = -46978;

    t55 = (x257>(x258+(x259%x260)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x261 = UINT64_MAX;
	uint64_t x262 = UINT64_MAX;
	int64_t x263 = 827LL;
	static volatile int32_t t56 = -31802049;

    t56 = (x261>(x262+(x263%x264)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x265 = -186597760;
	uint16_t x266 = 96U;
	volatile int16_t x267 = INT16_MIN;
	uint32_t x268 = UINT32_MAX;
	int32_t t57 = 0;

    t57 = (x265>(x266+(x267%x268)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x269 = 28;
	uint16_t x271 = 26147U;
	static int64_t x272 = -191401LL;

    t58 = (x269>(x270+(x271%x272)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x273 = INT32_MIN;
	volatile uint32_t x274 = 12902617U;
	static volatile int8_t x276 = INT8_MAX;
	static volatile int32_t t59 = 84052;

    t59 = (x273>(x274+(x275%x276)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x277 = INT8_MIN;
	volatile uint16_t x278 = UINT16_MAX;
	volatile uint64_t x279 = 1891LLU;
	int16_t x280 = INT16_MIN;
	static int32_t t60 = -5091089;

    t60 = (x277>(x278+(x279%x280)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x281 = INT8_MIN;
	static int32_t x282 = 23;
	uint16_t x283 = 6U;
	uint32_t x284 = 8U;
	int32_t t61 = 1;

    t61 = (x281>(x282+(x283%x284)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int64_t x286 = -12996963476187321LL;
	volatile int16_t x288 = INT16_MIN;
	volatile int32_t t62 = 27;

    t62 = (x285>(x286+(x287%x288)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x289 = 21974U;
	int8_t x290 = INT8_MAX;
	static uint16_t x291 = UINT16_MAX;
	int16_t x292 = INT16_MAX;
	int32_t t63 = 14;

    t63 = (x289>(x290+(x291%x292)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x293 = 39139342289LL;
	int8_t x295 = -1;
	uint8_t x296 = 9U;
	static volatile int32_t t64 = -934409096;

    t64 = (x293>(x294+(x295%x296)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x297 = 3U;
	int8_t x299 = INT8_MAX;
	int64_t x300 = -53607LL;
	int32_t t65 = -14197;

    t65 = (x297>(x298+(x299%x300)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x301 = UINT8_MAX;
	uint64_t x302 = 1332032402141099LLU;
	volatile int64_t x303 = INT64_MIN;
	int64_t x304 = INT64_MIN;
	volatile int32_t t66 = 0;

    t66 = (x301>(x302+(x303%x304)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x306 = -1;
	static int32_t x307 = -1;
	static uint32_t x308 = 542520U;

    t67 = (x305>(x306+(x307%x308)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x310 = 14;
	volatile int64_t x311 = 1804548331927040161LL;
	int32_t t68 = 0;

    t68 = (x309>(x310+(x311%x312)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint8_t x313 = 42U;
	static volatile uint8_t x315 = 2U;
	int32_t x316 = INT32_MIN;
	volatile int32_t t69 = 36291;

    t69 = (x313>(x314+(x315%x316)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x317 = INT64_MIN;
	int8_t x318 = INT8_MAX;
	volatile int32_t x319 = -1;
	int8_t x320 = INT8_MIN;
	int32_t t70 = -173;

    t70 = (x317>(x318+(x319%x320)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x325 = 1U;
	int8_t x326 = 43;
	volatile int16_t x327 = -1;
	int8_t x328 = INT8_MAX;
	int32_t t71 = -102936;

    t71 = (x325>(x326+(x327%x328)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x329 = INT32_MIN;
	int8_t x330 = INT8_MAX;
	uint32_t x332 = 1125904048U;
	volatile int32_t t72 = 1;

    t72 = (x329>(x330+(x331%x332)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x334 = -1LL;
	int32_t x335 = INT32_MIN;
	int32_t x336 = 131230236;
	volatile int32_t t73 = -1178960;

    t73 = (x333>(x334+(x335%x336)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x337 = 0U;
	uint32_t x338 = 1766U;
	static uint16_t x339 = UINT16_MAX;
	uint16_t x340 = 3U;
	int32_t t74 = -41272;

    t74 = (x337>(x338+(x339%x340)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x342 = -6;
	int16_t x344 = -626;
	int32_t t75 = 2;

    t75 = (x341>(x342+(x343%x344)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x346 = INT16_MAX;
	uint8_t x347 = UINT8_MAX;
	uint16_t x348 = UINT16_MAX;
	volatile int32_t t76 = 6494;

    t76 = (x345>(x346+(x347%x348)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x349 = -1;
	int8_t x350 = INT8_MAX;
	static int16_t x351 = -4;
	int16_t x352 = 39;
	static int32_t t77 = 0;

    t77 = (x349>(x350+(x351%x352)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x353 = -1;
	static volatile int64_t x354 = -583048330LL;
	int8_t x355 = INT8_MIN;
	static int64_t x356 = INT64_MIN;
	volatile int32_t t78 = 24999584;

    t78 = (x353>(x354+(x355%x356)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x357 = 0;
	int8_t x358 = 14;
	static volatile int8_t x359 = INT8_MIN;
	int64_t x360 = INT64_MAX;
	int32_t t79 = 14;

    t79 = (x357>(x358+(x359%x360)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x361 = 32934206U;
	int8_t x362 = -1;
	static uint32_t x364 = UINT32_MAX;
	volatile int32_t t80 = -1004;

    t80 = (x361>(x362+(x363%x364)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x366 = UINT8_MAX;
	uint8_t x367 = 6U;
	static int32_t t81 = 29871066;

    t81 = (x365>(x366+(x367%x368)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint64_t x369 = UINT64_MAX;
	static uint8_t x370 = 32U;
	int32_t x371 = INT32_MIN;
	int32_t x372 = INT32_MIN;
	volatile int32_t t82 = 13627353;

    t82 = (x369>(x370+(x371%x372)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int32_t x373 = -1;
	volatile uint16_t x374 = 2U;
	volatile uint16_t x375 = 2U;
	static int8_t x376 = -1;
	volatile int32_t t83 = 614477494;

    t83 = (x373>(x374+(x375%x376)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint8_t x377 = 14U;
	volatile int32_t x378 = INT32_MIN;
	int32_t x379 = 0;
	volatile int16_t x380 = INT16_MAX;
	volatile int32_t t84 = 25196;

    t84 = (x377>(x378+(x379%x380)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x381 = -28;
	static uint64_t x383 = UINT64_MAX;
	volatile int64_t x384 = 52341995706916475LL;
	volatile int32_t t85 = -2344;

    t85 = (x381>(x382+(x383%x384)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x385 = INT8_MIN;
	uint16_t x386 = UINT16_MAX;
	volatile int32_t x387 = INT32_MIN;
	uint32_t x388 = 2685492U;

    t86 = (x385>(x386+(x387%x388)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x389 = 676973;
	volatile int8_t x390 = INT8_MIN;
	uint32_t x391 = 112396U;
	int32_t t87 = -2375;

    t87 = (x389>(x390+(x391%x392)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x393 = 32136348LL;
	volatile int32_t x394 = 14;
	volatile uint64_t x395 = 4065LLU;
	int32_t x396 = INT32_MAX;
	volatile int32_t t88 = 130;

    t88 = (x393>(x394+(x395%x396)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x397 = INT16_MIN;
	static volatile uint64_t x399 = 40174LLU;
	uint8_t x400 = 1U;
	static volatile int32_t t89 = 7;

    t89 = (x397>(x398+(x399%x400)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x401 = 11;
	int32_t x402 = INT32_MIN;
	static volatile int64_t x403 = -279530LL;
	uint8_t x404 = 92U;

    t90 = (x401>(x402+(x403%x404)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x405 = INT32_MIN;
	static int32_t x406 = INT32_MIN;
	int8_t x407 = INT8_MIN;
	uint64_t x408 = UINT64_MAX;
	int32_t t91 = -25598592;

    t91 = (x405>(x406+(x407%x408)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x409 = -1LL;
	int64_t x410 = 313036044958836936LL;
	volatile int16_t x411 = -4773;
	int8_t x412 = -1;
	volatile int32_t t92 = -51783;

    t92 = (x409>(x410+(x411%x412)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x413 = 0U;
	uint16_t x414 = 4U;
	static int32_t x415 = -1;
	volatile uint64_t x416 = 4260LLU;
	volatile int32_t t93 = -28556757;

    t93 = (x413>(x414+(x415%x416)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint16_t x417 = UINT16_MAX;
	static volatile int8_t x418 = 51;
	int8_t x419 = -5;
	static int32_t t94 = -297198175;

    t94 = (x417>(x418+(x419%x420)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x421 = 1288U;
	int32_t x422 = 8790;
	int8_t x423 = INT8_MIN;
	int8_t x424 = 10;
	int32_t t95 = -262962392;

    t95 = (x421>(x422+(x423%x424)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x425 = 442775401U;
	uint8_t x426 = UINT8_MAX;
	int32_t x428 = 42;
	volatile int32_t t96 = 0;

    t96 = (x425>(x426+(x427%x428)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x430 = 35;
	int32_t x431 = INT32_MAX;
	uint32_t x432 = 106666U;
	volatile int32_t t97 = -15647799;

    t97 = (x429>(x430+(x431%x432)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x437 = INT16_MIN;
	static uint32_t x438 = 1395U;
	int16_t x439 = INT16_MIN;
	uint16_t x440 = 78U;

    t98 = (x437>(x438+(x439%x440)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x441 = INT32_MIN;
	int16_t x442 = INT16_MIN;
	static int8_t x443 = INT8_MAX;
	volatile int16_t x444 = INT16_MIN;
	volatile int32_t t99 = 186;

    t99 = (x441>(x442+(x443%x444)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint8_t x445 = 43U;
	volatile int32_t x446 = 6435;
	int16_t x447 = INT16_MIN;
	volatile uint32_t x448 = UINT32_MAX;
	volatile int32_t t100 = 41778036;

    t100 = (x445>(x446+(x447%x448)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x449 = INT8_MAX;
	static int8_t x452 = -1;
	volatile int32_t t101 = -33;

    t101 = (x449>(x450+(x451%x452)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x453 = UINT32_MAX;
	int8_t x455 = 1;
	uint64_t x456 = 248607891959LLU;
	int32_t t102 = -184268057;

    t102 = (x453>(x454+(x455%x456)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x458 = UINT32_MAX;
	uint32_t x459 = 4U;
	int64_t x460 = -1LL;
	int32_t t103 = -4799684;

    t103 = (x457>(x458+(x459%x460)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x461 = 1041U;
	int8_t x462 = INT8_MAX;
	int16_t x463 = -1;
	volatile int32_t t104 = -721548;

    t104 = (x461>(x462+(x463%x464)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x465 = INT32_MIN;
	static int16_t x466 = 4205;
	int16_t x468 = INT16_MIN;
	static int32_t t105 = -4177;

    t105 = (x465>(x466+(x467%x468)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x469 = 15537LL;
	int64_t x470 = INT64_MAX;
	int32_t x471 = -1;
	static int16_t x472 = INT16_MIN;
	volatile int32_t t106 = -138791568;

    t106 = (x469>(x470+(x471%x472)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint32_t x477 = 20U;
	volatile uint32_t x478 = 138367U;
	volatile int8_t x480 = INT8_MIN;
	volatile int32_t t107 = -1041;

    t107 = (x477>(x478+(x479%x480)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x481 = -1LL;
	int64_t x482 = -1LL;
	int32_t x483 = -23074;
	volatile int16_t x484 = -1;
	int32_t t108 = -196135746;

    t108 = (x481>(x482+(x483%x484)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x485 = -37923380277861728LL;
	int64_t x486 = -3096242084098272LL;
	int16_t x487 = INT16_MIN;
	uint16_t x488 = 43U;
	volatile int32_t t109 = 412;

    t109 = (x485>(x486+(x487%x488)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x490 = 207939670280701425LLU;
	volatile int16_t x491 = INT16_MIN;
	uint16_t x492 = 2997U;

    t110 = (x489>(x490+(x491%x492)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x493 = -1;
	int8_t x494 = 0;
	static uint32_t x495 = 3860098U;
	volatile int8_t x496 = INT8_MIN;
	int32_t t111 = -1;

    t111 = (x493>(x494+(x495%x496)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x497 = INT64_MIN;
	int32_t x498 = -123974;
	volatile int32_t t112 = 200;

    t112 = (x497>(x498+(x499%x500)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x501 = 176439084LL;
	volatile int32_t x503 = INT32_MIN;
	static uint64_t x504 = UINT64_MAX;
	int32_t t113 = 22572174;

    t113 = (x501>(x502+(x503%x504)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint32_t x506 = UINT32_MAX;
	int32_t x507 = INT32_MIN;
	volatile int32_t t114 = -4;

    t114 = (x505>(x506+(x507%x508)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x509 = 3U;
	uint64_t x510 = UINT64_MAX;
	static int8_t x511 = INT8_MIN;
	static uint16_t x512 = 1U;
	int32_t t115 = 770436;

    t115 = (x509>(x510+(x511%x512)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x517 = INT32_MAX;
	volatile uint16_t x519 = UINT16_MAX;
	int64_t x520 = 2LL;
	volatile int32_t t116 = 1688713;

    t116 = (x517>(x518+(x519%x520)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x521 = UINT32_MAX;
	volatile int8_t x522 = INT8_MIN;
	int16_t x523 = INT16_MIN;
	int8_t x524 = -1;
	static volatile int32_t t117 = 6;

    t117 = (x521>(x522+(x523%x524)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x525 = -1LL;
	int32_t x526 = 2;
	volatile int8_t x527 = INT8_MIN;
	int32_t x528 = INT32_MIN;
	int32_t t118 = 3995238;

    t118 = (x525>(x526+(x527%x528)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x529 = INT16_MIN;
	int32_t x530 = INT32_MIN;
	int64_t x532 = INT64_MIN;
	static volatile int32_t t119 = -2183634;

    t119 = (x529>(x530+(x531%x532)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x533 = INT64_MIN;
	int8_t x534 = INT8_MIN;
	uint32_t x535 = 1234U;
	volatile int32_t t120 = -6;

    t120 = (x533>(x534+(x535%x536)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint32_t x537 = 80291275U;
	uint32_t x539 = 43U;
	uint16_t x540 = 2249U;
	int32_t t121 = 25968;

    t121 = (x537>(x538+(x539%x540)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x541 = INT64_MIN;
	int32_t x544 = 621;
	volatile int32_t t122 = -23;

    t122 = (x541>(x542+(x543%x544)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x545 = 3U;
	static int32_t x546 = -66650;
	uint16_t x547 = 648U;
	static int16_t x548 = -300;
	int32_t t123 = 1;

    t123 = (x545>(x546+(x547%x548)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x549 = 1LL;
	volatile int8_t x550 = INT8_MIN;
	static uint16_t x551 = 17U;
	int32_t x552 = -1;
	int32_t t124 = 23;

    t124 = (x549>(x550+(x551%x552)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x553 = -1;
	uint16_t x554 = 2U;
	static int64_t x555 = -229211967LL;
	static uint64_t x556 = 86365177751676LLU;
	int32_t t125 = 75364;

    t125 = (x553>(x554+(x555%x556)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint16_t x557 = 216U;
	int16_t x558 = 4335;
	volatile uint64_t x559 = 416LLU;
	int32_t x560 = INT32_MIN;

    t126 = (x557>(x558+(x559%x560)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x561 = 4351U;
	volatile int64_t x562 = INT64_MIN;
	static uint32_t x563 = 7606921U;
	int32_t t127 = -24195943;

    t127 = (x561>(x562+(x563%x564)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x565 = 1U;
	uint16_t x566 = 305U;
	uint8_t x567 = 23U;
	int32_t t128 = -4;

    t128 = (x565>(x566+(x567%x568)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x569 = INT8_MAX;
	int64_t x571 = INT64_MIN;
	volatile uint16_t x572 = 74U;
	volatile int32_t t129 = -160;

    t129 = (x569>(x570+(x571%x572)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x573 = INT8_MIN;
	int64_t x574 = -1LL;
	uint8_t x575 = 19U;
	uint16_t x576 = 67U;

    t130 = (x573>(x574+(x575%x576)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x577 = INT32_MIN;
	uint32_t x578 = UINT32_MAX;
	uint16_t x579 = 1402U;
	int64_t x580 = -11926655LL;
	int32_t t131 = 8743;

    t131 = (x577>(x578+(x579%x580)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x581 = -1;
	static int16_t x582 = INT16_MAX;
	int8_t x583 = -2;
	volatile int32_t t132 = -9974619;

    t132 = (x581>(x582+(x583%x584)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x586 = 5;
	int8_t x588 = INT8_MIN;
	volatile int32_t t133 = -10107;

    t133 = (x585>(x586+(x587%x588)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint8_t x589 = UINT8_MAX;
	uint16_t x591 = UINT16_MAX;
	int16_t x592 = 21;
	int32_t t134 = -6;

    t134 = (x589>(x590+(x591%x592)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x593 = UINT16_MAX;
	static int8_t x595 = 32;
	int16_t x596 = 709;
	int32_t t135 = -380;

    t135 = (x593>(x594+(x595%x596)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x597 = -1LL;
	volatile int8_t x598 = INT8_MAX;
	uint64_t x599 = 1LLU;
	uint64_t x600 = 64866282LLU;
	static int32_t t136 = 8128;

    t136 = (x597>(x598+(x599%x600)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x601 = INT8_MAX;
	int8_t x602 = 0;
	static int64_t x604 = 229821876851754399LL;
	volatile int32_t t137 = 42;

    t137 = (x601>(x602+(x603%x604)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x605 = INT16_MIN;
	uint16_t x607 = 14U;
	int16_t x608 = INT16_MIN;

    t138 = (x605>(x606+(x607%x608)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x609 = UINT64_MAX;
	int8_t x610 = INT8_MIN;
	int64_t x611 = INT64_MIN;
	uint32_t x612 = 14473U;
	int32_t t139 = 1369;

    t139 = (x609>(x610+(x611%x612)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x613 = UINT16_MAX;
	uint64_t x614 = 3920071LLU;
	uint16_t x615 = 28U;
	int32_t x616 = INT32_MIN;
	static volatile int32_t t140 = 4;

    t140 = (x613>(x614+(x615%x616)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x617 = INT8_MIN;
	uint32_t x618 = 197254653U;
	int16_t x620 = INT16_MIN;
	int32_t t141 = 1033;

    t141 = (x617>(x618+(x619%x620)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x622 = -1;
	volatile uint64_t x624 = 72714894LLU;

    t142 = (x621>(x622+(x623%x624)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x625 = 63U;
	uint16_t x626 = 796U;
	uint16_t x627 = UINT16_MAX;
	static int32_t x628 = INT32_MIN;

    t143 = (x625>(x626+(x627%x628)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x629 = 50603162249557LLU;
	int64_t x630 = INT64_MAX;
	static int64_t x631 = 4LL;
	volatile int32_t t144 = -55757;

    t144 = (x629>(x630+(x631%x632)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x635 = INT8_MIN;
	uint16_t x636 = 12251U;
	volatile int32_t t145 = 400276160;

    t145 = (x633>(x634+(x635%x636)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x637 = INT16_MAX;
	int32_t x638 = INT32_MAX;
	static int16_t x639 = INT16_MIN;
	volatile int32_t t146 = -16032887;

    t146 = (x637>(x638+(x639%x640)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x641 = UINT64_MAX;
	uint16_t x642 = 6235U;
	static int64_t x643 = INT64_MIN;
	uint16_t x644 = 858U;
	static volatile int32_t t147 = -77212190;

    t147 = (x641>(x642+(x643%x644)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int8_t x645 = -1;
	volatile int8_t x646 = INT8_MIN;
	int16_t x647 = -234;
	volatile int32_t t148 = -1869;

    t148 = (x645>(x646+(x647%x648)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x649 = UINT64_MAX;
	uint64_t x650 = 262454503LLU;
	volatile int32_t t149 = -8383937;

    t149 = (x649>(x650+(x651%x652)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint8_t x653 = 9U;
	int16_t x654 = INT16_MIN;
	volatile int16_t x655 = 468;
	int32_t x656 = 9;
	volatile int32_t t150 = -14;

    t150 = (x653>(x654+(x655%x656)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x657 = 14;
	static volatile uint8_t x658 = 9U;
	volatile int16_t x659 = 86;
	static int32_t t151 = -1;

    t151 = (x657>(x658+(x659%x660)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x661 = 1099669982U;
	int64_t x663 = -1946029830489514LL;
	uint16_t x664 = 119U;
	int32_t t152 = 0;

    t152 = (x661>(x662+(x663%x664)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile uint64_t x670 = UINT64_MAX;
	volatile int8_t x671 = 7;
	volatile uint32_t x672 = 2U;
	static int32_t t153 = 34;

    t153 = (x669>(x670+(x671%x672)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x673 = INT16_MIN;
	int16_t x674 = -26;
	static volatile int32_t x676 = INT32_MIN;

    t154 = (x673>(x674+(x675%x676)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x677 = -5244887576700999LL;
	static uint32_t x678 = 5329U;
	uint32_t x679 = 28510U;
	int64_t x680 = -20988LL;
	int32_t t155 = 892771382;

    t155 = (x677>(x678+(x679%x680)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x683 = INT64_MIN;

    t156 = (x681>(x682+(x683%x684)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x686 = 53;
	uint8_t x687 = UINT8_MAX;
	int32_t x688 = INT32_MIN;
	int32_t t157 = -310;

    t157 = (x685>(x686+(x687%x688)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x690 = INT16_MIN;
	volatile int32_t x691 = INT32_MAX;
	uint8_t x692 = 6U;
	int32_t t158 = -2;

    t158 = (x689>(x690+(x691%x692)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x695 = INT32_MAX;
	volatile int16_t x696 = INT16_MAX;

    t159 = (x693>(x694+(x695%x696)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x697 = 2330;
	uint64_t x698 = UINT64_MAX;
	int32_t x700 = INT32_MAX;
	int32_t t160 = -47805602;

    t160 = (x697>(x698+(x699%x700)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x701 = UINT16_MAX;
	volatile uint8_t x702 = UINT8_MAX;
	int16_t x703 = INT16_MIN;
	int8_t x704 = 15;
	volatile int32_t t161 = 1220906;

    t161 = (x701>(x702+(x703%x704)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x705 = 1;
	uint32_t x706 = 189U;
	volatile uint64_t x707 = 5854049757LLU;
	int8_t x708 = 11;
	int32_t t162 = -7;

    t162 = (x705>(x706+(x707%x708)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x709 = -1LL;
	volatile uint32_t x710 = UINT32_MAX;
	uint32_t x711 = 17U;
	int64_t x712 = -1LL;

    t163 = (x709>(x710+(x711%x712)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x713 = INT64_MIN;
	static volatile int32_t x714 = INT32_MAX;
	uint64_t x715 = 30704LLU;
	uint64_t x716 = 75887LLU;
	volatile int32_t t164 = 8070;

    t164 = (x713>(x714+(x715%x716)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x718 = INT32_MIN;
	int64_t x719 = 768LL;
	int8_t x720 = INT8_MIN;
	int32_t t165 = 229438191;

    t165 = (x717>(x718+(x719%x720)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x724 = UINT32_MAX;

    t166 = (x721>(x722+(x723%x724)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x725 = INT64_MIN;
	int32_t x728 = INT32_MIN;
	int32_t t167 = 14405808;

    t167 = (x725>(x726+(x727%x728)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x729 = UINT32_MAX;
	int8_t x731 = INT8_MAX;
	uint16_t x732 = 47U;
	static int32_t t168 = -3;

    t168 = (x729>(x730+(x731%x732)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x733 = INT32_MIN;
	static int64_t x734 = -1LL;
	uint64_t x736 = 12840773LLU;
	volatile int32_t t169 = 24940;

    t169 = (x733>(x734+(x735%x736)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x737 = INT16_MAX;
	static int64_t x738 = -1LL;
	int16_t x739 = -19;
	int64_t x740 = 4183519855LL;

    t170 = (x737>(x738+(x739%x740)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x741 = -1;
	int16_t x742 = INT16_MAX;
	uint64_t x743 = 84733263386527LLU;

    t171 = (x741>(x742+(x743%x744)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint32_t x745 = 1316002U;
	volatile int32_t x746 = INT32_MIN;
	int64_t x747 = -1LL;
	volatile int32_t x748 = INT32_MIN;
	static int32_t t172 = 1066240077;

    t172 = (x745>(x746+(x747%x748)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x749 = -1;
	int32_t x750 = INT32_MAX;
	int64_t x751 = INT64_MIN;
	volatile int32_t t173 = 10;

    t173 = (x749>(x750+(x751%x752)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x753 = INT16_MIN;
	int32_t x754 = INT32_MAX;
	int32_t x755 = -23452;
	int16_t x756 = INT16_MIN;
	int32_t t174 = 658840;

    t174 = (x753>(x754+(x755%x756)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x757 = 124U;
	static int32_t x758 = INT32_MIN;
	volatile int64_t x759 = INT64_MAX;
	uint64_t x760 = 6292347801949121LLU;
	int32_t t175 = 18;

    t175 = (x757>(x758+(x759%x760)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x761 = 134U;
	static int64_t x763 = -209576344843LL;
	int32_t x764 = INT32_MAX;
	volatile int32_t t176 = 161;

    t176 = (x761>(x762+(x763%x764)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x765 = INT32_MAX;
	int64_t x768 = 5750590386LL;
	int32_t t177 = 1;

    t177 = (x765>(x766+(x767%x768)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x769 = INT8_MIN;
	static int16_t x770 = INT16_MIN;
	static volatile int8_t x772 = INT8_MIN;

    t178 = (x769>(x770+(x771%x772)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x773 = 3031;
	static uint64_t x774 = 1801975LLU;
	static int8_t x775 = INT8_MIN;
	int64_t x776 = -1LL;

    t179 = (x773>(x774+(x775%x776)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x778 = INT32_MIN;
	uint64_t x779 = 14108478LLU;
	int32_t x780 = INT32_MIN;
	volatile int32_t t180 = -409967055;

    t180 = (x777>(x778+(x779%x780)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x781 = -1;
	uint8_t x782 = 122U;
	volatile int8_t x783 = INT8_MAX;
	volatile int32_t x784 = 785084770;
	static int32_t t181 = -2;

    t181 = (x781>(x782+(x783%x784)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x785 = -1LL;
	uint8_t x786 = 118U;
	volatile int32_t x788 = -1;
	static int32_t t182 = -749409713;

    t182 = (x785>(x786+(x787%x788)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x789 = INT32_MAX;
	volatile int16_t x790 = -1;
	volatile uint8_t x791 = 46U;
	uint64_t x792 = UINT64_MAX;
	volatile int32_t t183 = -45000;

    t183 = (x789>(x790+(x791%x792)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint8_t x794 = 27U;
	static uint32_t x795 = 15142001U;
	static int32_t x796 = INT32_MIN;
	int32_t t184 = -329918961;

    t184 = (x793>(x794+(x795%x796)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x798 = INT32_MIN;
	int32_t x799 = 16;
	int32_t t185 = 193432;

    t185 = (x797>(x798+(x799%x800)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint64_t x801 = 1525LLU;
	int8_t x802 = -1;
	int64_t x803 = INT64_MIN;
	uint8_t x804 = UINT8_MAX;
	volatile int32_t t186 = -443;

    t186 = (x801>(x802+(x803%x804)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x805 = INT32_MAX;
	int32_t x806 = INT32_MAX;
	volatile int16_t x808 = 1;
	int32_t t187 = -368;

    t187 = (x805>(x806+(x807%x808)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x809 = UINT32_MAX;
	volatile uint64_t x810 = 24LLU;
	volatile int32_t x811 = -1094009;
	int8_t x812 = -1;
	static volatile int32_t t188 = 24274;

    t188 = (x809>(x810+(x811%x812)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x814 = INT64_MIN;
	int64_t x815 = INT64_MAX;
	volatile int32_t t189 = -8;

    t189 = (x813>(x814+(x815%x816)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x817 = -12242817;
	int8_t x818 = 1;
	static int32_t x819 = INT32_MAX;
	uint16_t x820 = UINT16_MAX;
	volatile int32_t t190 = -544827;

    t190 = (x817>(x818+(x819%x820)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x821 = INT32_MIN;
	uint32_t x822 = 790597543U;
	int32_t x823 = -4465;
	static uint16_t x824 = UINT16_MAX;

    t191 = (x821>(x822+(x823%x824)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x825 = 65U;
	volatile int8_t x826 = -1;
	int64_t x827 = -3668741LL;
	static volatile int32_t t192 = -405997;

    t192 = (x825>(x826+(x827%x828)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x831 = INT16_MIN;
	uint16_t x832 = 3U;
	int32_t t193 = 53277316;

    t193 = (x829>(x830+(x831%x832)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x834 = 0U;
	int16_t x835 = INT16_MAX;

    t194 = (x833>(x834+(x835%x836)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x837 = UINT32_MAX;
	int32_t x838 = -1;
	int32_t x839 = -94192685;
	int32_t t195 = -171;

    t195 = (x837>(x838+(x839%x840)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint16_t x841 = 8079U;
	int32_t x842 = INT32_MIN;
	int8_t x844 = INT8_MIN;
	static volatile int32_t t196 = -11;

    t196 = (x841>(x842+(x843%x844)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x845 = INT64_MIN;
	int8_t x846 = INT8_MIN;
	volatile int32_t x847 = -33986275;
	static int64_t x848 = 492046153532LL;
	volatile int32_t t197 = 128101;

    t197 = (x845>(x846+(x847%x848)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x849 = INT16_MIN;
	static uint32_t x851 = 23U;
	int32_t t198 = 404430060;

    t198 = (x849>(x850+(x851%x852)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x853 = 533416110829LLU;
	int64_t x854 = INT64_MIN;

    t199 = (x853>(x854+(x855%x856)));

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


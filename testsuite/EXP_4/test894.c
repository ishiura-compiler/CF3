
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

uint16_t x2 = 1714U;
int16_t x4 = INT16_MIN;
int16_t x8 = INT16_MIN;
uint32_t x9 = UINT32_MAX;
uint64_t x10 = 6148365538LLU;
static int16_t x11 = INT16_MAX;
volatile uint32_t t2 = 123700852U;
uint64_t x15 = 6298817643144197LLU;
int32_t t3 = 168604;
uint64_t x44 = 24384788371917LLU;
uint32_t x45 = 1200234498U;
volatile uint8_t x47 = 20U;
uint8_t x55 = 34U;
int64_t x59 = -1LL;
int64_t t13 = -978558415846LL;
volatile uint32_t t14 = 397305U;
int8_t x66 = INT8_MIN;
uint32_t x67 = 15013785U;
uint8_t x82 = 0U;
static int32_t t20 = 133136001;
int32_t t21 = 251340;
uint32_t x96 = UINT32_MAX;
static int8_t x97 = INT8_MIN;
static int32_t t25 = -3427;
static int8_t x111 = INT8_MAX;
volatile uint32_t x112 = 1U;
int16_t x115 = INT16_MIN;
int16_t x119 = INT16_MIN;
static uint64_t x129 = UINT64_MAX;
volatile uint8_t x134 = UINT8_MAX;
uint32_t x139 = UINT32_MAX;
static volatile int32_t t33 = 1;
uint64_t x145 = 3438108808856110LLU;
volatile uint16_t x149 = UINT16_MAX;
static volatile int32_t x150 = -1;
int16_t x157 = 61;
static int32_t x158 = -1;
int32_t x167 = -101675;
int64_t x171 = INT64_MIN;
int16_t x175 = -4962;
static uint16_t x177 = 19062U;
static int32_t t46 = -263;
int8_t x205 = -1;
int16_t x210 = -1;
static uint64_t x216 = UINT64_MAX;
int8_t x222 = INT8_MIN;
volatile int16_t x223 = -7316;
static int16_t x227 = INT16_MAX;
static volatile int64_t t57 = -7445230768985LL;
volatile int8_t x243 = -40;
uint64_t x244 = 74062399809071LLU;
static volatile int32_t t58 = 193078;
volatile uint16_t x251 = 101U;
volatile uint8_t x259 = 83U;
int8_t x262 = INT8_MIN;
static uint64_t x264 = 1612408094LLU;
int32_t t65 = 107;
uint32_t t69 = 13752U;
int32_t x290 = INT32_MAX;
uint16_t x297 = 5U;
static int32_t t72 = -34845638;
int64_t t73 = 333036689LL;
int8_t x305 = INT8_MIN;
int16_t x309 = INT16_MIN;
int32_t x314 = -1008092137;
int8_t x319 = -7;
int64_t t77 = -1935300985387846314LL;
int8_t x322 = INT8_MIN;
int64_t x328 = -1LL;
uint16_t x331 = 0U;
static volatile int16_t x343 = 860;
volatile int8_t x350 = 29;
static volatile int32_t t84 = 81482;
uint8_t x354 = UINT8_MAX;
static volatile int64_t t85 = 17510752365388984LL;
int64_t x360 = 951142LL;
volatile int32_t t86 = -14;
int8_t x362 = INT8_MIN;
static uint64_t x366 = 9937715623LLU;
int32_t x370 = INT32_MIN;
static volatile uint64_t x371 = 488569208099419LLU;
int32_t t89 = 7100732;
int32_t x385 = INT32_MAX;
uint32_t x392 = UINT32_MAX;
volatile uint32_t t94 = 99U;
int8_t x393 = -1;
uint64_t x395 = UINT64_MAX;
uint8_t x406 = 32U;
uint8_t x407 = 7U;
volatile uint32_t t98 = 3028619U;
static uint32_t x413 = 5279450U;
uint64_t x415 = 470667799342LLU;
volatile uint32_t t100 = 1U;
int8_t x423 = 0;
static uint32_t x434 = 181180144U;
static int64_t x439 = -1LL;
int8_t x446 = INT8_MAX;
static uint16_t x449 = 0U;
int32_t t109 = 42605686;
static uint32_t x453 = 29911829U;
int16_t x459 = INT16_MAX;
int64_t x460 = -91677844447LL;
volatile uint64_t x462 = UINT64_MAX;
static volatile uint8_t x467 = UINT8_MAX;
static uint8_t x468 = UINT8_MAX;
static volatile int8_t x476 = INT8_MAX;
int32_t x478 = INT32_MIN;
volatile int32_t t116 = 3;
int32_t x481 = INT32_MIN;
uint16_t x493 = 24247U;
int32_t x499 = -1;
int32_t x507 = -21201204;
uint64_t x510 = 29831031LLU;
static int8_t x514 = -1;
volatile uint64_t t125 = 4027209419251218LLU;
volatile int64_t x522 = -73245148955696133LL;
int16_t x532 = 1;
volatile int64_t t129 = 901724592124250LL;
int16_t x533 = -1;
volatile int64_t x538 = -1LL;
volatile uint16_t x552 = 1723U;
static volatile uint64_t x554 = UINT64_MAX;
static int32_t t135 = -73;
int32_t x557 = INT32_MAX;
static uint32_t x563 = 95U;
static uint8_t x565 = 1U;
volatile uint64_t x576 = UINT64_MAX;
int64_t x578 = INT64_MAX;
static uint64_t x580 = 96627LLU;
volatile int32_t t141 = -415713;
int16_t x584 = INT16_MIN;
uint64_t x585 = UINT64_MAX;
uint32_t x588 = 212000U;
uint64_t x590 = 45536627LLU;
int8_t x594 = 1;
static uint32_t t145 = 1480U;
volatile int64_t x600 = INT64_MIN;
int8_t x601 = 5;
int16_t x612 = -1;
volatile int32_t x626 = -1;
uint64_t x628 = UINT64_MAX;
static int32_t t153 = 3;
static int8_t x632 = INT8_MIN;
int64_t t154 = -974443LL;
int8_t x633 = -2;
int64_t x634 = -1LL;
static int32_t x641 = INT32_MIN;
static int64_t x648 = INT64_MAX;
int32_t t158 = 1375918;
static int16_t x655 = 34;
int16_t x656 = INT16_MIN;
volatile int8_t x667 = -4;
int64_t t164 = -1174882331634LL;
int32_t x674 = 10468281;
volatile int32_t t165 = -27724;
int32_t x677 = INT32_MIN;
int32_t x679 = 54204877;
int16_t x681 = INT16_MAX;
uint16_t x690 = 15U;
uint8_t x693 = 42U;
int64_t x696 = 549442830476018600LL;
static volatile int32_t t170 = 0;
volatile int16_t x702 = INT16_MAX;
volatile int32_t t171 = 3077;
int8_t x708 = -1;
static int32_t x712 = INT32_MIN;
static uint16_t x713 = UINT16_MAX;
int32_t t175 = 734;
int64_t x721 = 985729665317213LL;
uint16_t x722 = UINT16_MAX;
volatile uint16_t x741 = UINT16_MAX;
uint8_t x745 = 1U;
uint16_t x763 = 227U;
int8_t x783 = 1;
int8_t x788 = -7;
int32_t x794 = INT32_MAX;
int32_t t195 = 286689;
static uint8_t x809 = 10U;
int64_t x810 = INT64_MIN;
volatile uint8_t x812 = 41U;
volatile uint32_t x816 = UINT32_MAX;
volatile uint32_t t199 = 11675098U;


void f0(void) {
    	uint64_t x1 = UINT64_MAX;
	static int32_t x3 = INT32_MIN;
	uint64_t t0 = 2328837498393734LLU;

    t0 = (x1&(x2==(x3%x4)));

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = INT32_MIN;
	int16_t x6 = 77;
	volatile uint32_t x7 = 32639U;
	static int32_t t1 = -3052;

    t1 = (x5&(x6==(x7%x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int16_t x12 = INT16_MAX;

    t2 = (x9&(x10==(x11%x12)));

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MAX;
	static uint16_t x14 = 1U;
	int8_t x16 = -6;

    t3 = (x13&(x14==(x15%x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -1;
	static uint16_t x18 = UINT16_MAX;
	int64_t x19 = -1LL;
	int8_t x20 = INT8_MIN;
	int32_t t4 = 0;

    t4 = (x17&(x18==(x19%x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile uint64_t x21 = 10228LLU;
	volatile uint16_t x22 = 5U;
	uint8_t x23 = UINT8_MAX;
	volatile uint32_t x24 = 142256437U;
	volatile uint64_t t5 = 740939078878790948LLU;

    t5 = (x21&(x22==(x23%x24)));

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MIN;
	uint64_t x26 = 528043LLU;
	uint8_t x27 = 6U;
	int32_t x28 = -316;
	int32_t t6 = 283552977;

    t6 = (x25&(x26==(x27%x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MIN;
	volatile int16_t x30 = INT16_MIN;
	static int32_t x31 = INT32_MAX;
	volatile int64_t x32 = -1LL;
	static volatile int32_t t7 = 1;

    t7 = (x29&(x30==(x31%x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x37 = -1;
	static uint64_t x38 = 11LLU;
	int8_t x39 = -18;
	int8_t x40 = -1;
	int32_t t8 = 204866;

    t8 = (x37&(x38==(x39%x40)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x41 = -1;
	int64_t x42 = -430517122151LL;
	volatile int32_t x43 = -93573535;
	volatile int32_t t9 = 1;

    t9 = (x41&(x42==(x43%x44)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x46 = -20589;
	int32_t x48 = INT32_MIN;
	uint32_t t10 = 1851U;

    t10 = (x45&(x46==(x47%x48)));

    if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint16_t x49 = 6466U;
	static uint32_t x50 = 4776U;
	uint16_t x51 = UINT16_MAX;
	static uint8_t x52 = 1U;
	volatile int32_t t11 = 3102;

    t11 = (x49&(x50==(x51%x52)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile uint8_t x53 = UINT8_MAX;
	int16_t x54 = INT16_MIN;
	int8_t x56 = INT8_MIN;
	int32_t t12 = 17761;

    t12 = (x53&(x54==(x55%x56)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x57 = 307826703633757617LL;
	static uint16_t x58 = 7U;
	int32_t x60 = -1;

    t13 = (x57&(x58==(x59%x60)));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint32_t x61 = UINT32_MAX;
	static volatile int16_t x62 = INT16_MIN;
	uint32_t x63 = UINT32_MAX;
	int64_t x64 = 254647146673339LL;

    t14 = (x61&(x62==(x63%x64)));

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x65 = 0;
	int8_t x68 = INT8_MAX;
	static int32_t t15 = -10;

    t15 = (x65&(x66==(x67%x68)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x69 = INT8_MAX;
	volatile int64_t x70 = 4154550LL;
	uint8_t x71 = 1U;
	int16_t x72 = INT16_MIN;
	int32_t t16 = -129238;

    t16 = (x69&(x70==(x71%x72)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int64_t x73 = -1LL;
	int16_t x74 = INT16_MIN;
	int16_t x75 = 4528;
	int64_t x76 = INT64_MIN;
	static int64_t t17 = 7490LL;

    t17 = (x73&(x74==(x75%x76)));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x77 = INT32_MIN;
	int16_t x78 = INT16_MAX;
	int64_t x79 = INT64_MAX;
	volatile uint16_t x80 = UINT16_MAX;
	int32_t t18 = 29686684;

    t18 = (x77&(x78==(x79%x80)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x81 = INT8_MIN;
	int32_t x83 = 10161;
	int16_t x84 = 3;
	int32_t t19 = 24;

    t19 = (x81&(x82==(x83%x84)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x85 = INT8_MIN;
	int32_t x86 = INT32_MAX;
	volatile uint8_t x87 = 4U;
	int32_t x88 = 27546;

    t20 = (x85&(x86==(x87%x88)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x89 = -9454;
	static uint16_t x90 = UINT16_MAX;
	static int64_t x91 = -400392410528644LL;
	static int64_t x92 = INT64_MAX;

    t21 = (x89&(x90==(x91%x92)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint32_t x93 = UINT32_MAX;
	int8_t x94 = 1;
	int8_t x95 = -16;
	volatile uint32_t t22 = 93403U;

    t22 = (x93&(x94==(x95%x96)));

    if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x98 = INT32_MIN;
	int16_t x99 = -1;
	int64_t x100 = 500472424LL;
	static int32_t t23 = -10225883;

    t23 = (x97&(x98==(x99%x100)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x101 = INT64_MAX;
	uint64_t x102 = 1073398LLU;
	int16_t x103 = -1;
	uint8_t x104 = 14U;
	int64_t t24 = -10711754691LL;

    t24 = (x101&(x102==(x103%x104)));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x105 = 0U;
	uint8_t x106 = 78U;
	volatile int64_t x107 = -1LL;
	int8_t x108 = INT8_MIN;

    t25 = (x105&(x106==(x107%x108)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x109 = -1;
	int16_t x110 = INT16_MIN;
	volatile int32_t t26 = -63;

    t26 = (x109&(x110==(x111%x112)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x113 = 1;
	static uint32_t x114 = 454U;
	int8_t x116 = INT8_MAX;
	static int32_t t27 = -166;

    t27 = (x113&(x114==(x115%x116)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x117 = 2;
	static int32_t x118 = 77;
	uint64_t x120 = UINT64_MAX;
	volatile int32_t t28 = -177432194;

    t28 = (x117&(x118==(x119%x120)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint8_t x121 = 0U;
	int64_t x122 = INT64_MAX;
	uint64_t x123 = 58367906566323LLU;
	int32_t x124 = INT32_MIN;
	int32_t t29 = -3561;

    t29 = (x121&(x122==(x123%x124)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x125 = INT16_MIN;
	int32_t x126 = -1;
	int64_t x127 = INT64_MIN;
	int8_t x128 = INT8_MAX;
	int32_t t30 = 307612022;

    t30 = (x125&(x126==(x127%x128)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x130 = UINT16_MAX;
	static int8_t x131 = 1;
	uint64_t x132 = 2139282185902LLU;
	static uint64_t t31 = 1174459539021370LLU;

    t31 = (x129&(x130==(x131%x132)));

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x133 = 0;
	volatile uint64_t x135 = 312470063492681LLU;
	uint64_t x136 = UINT64_MAX;
	volatile int32_t t32 = 645514;

    t32 = (x133&(x134==(x135%x136)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x137 = 13;
	uint16_t x138 = 173U;
	static uint32_t x140 = UINT32_MAX;

    t33 = (x137&(x138==(x139%x140)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint16_t x141 = UINT16_MAX;
	int16_t x142 = 5;
	int64_t x143 = -1LL;
	static int32_t x144 = INT32_MAX;
	volatile int32_t t34 = -60;

    t34 = (x141&(x142==(x143%x144)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x146 = INT16_MIN;
	int16_t x147 = INT16_MAX;
	static uint32_t x148 = UINT32_MAX;
	uint64_t t35 = 290729128707634LLU;

    t35 = (x145&(x146==(x147%x148)));

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x151 = -31;
	int16_t x152 = -1;
	static int32_t t36 = 391992;

    t36 = (x149&(x150==(x151%x152)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x159 = -17;
	static volatile int16_t x160 = INT16_MAX;
	int32_t t37 = 10987;

    t37 = (x157&(x158==(x159%x160)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x161 = INT16_MIN;
	static int16_t x162 = 595;
	static int16_t x163 = INT16_MIN;
	int64_t x164 = -1LL;
	volatile int32_t t38 = 852817;

    t38 = (x161&(x162==(x163%x164)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x165 = INT32_MAX;
	int32_t x166 = 12;
	volatile int8_t x168 = 3;
	volatile int32_t t39 = 11250;

    t39 = (x165&(x166==(x167%x168)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x169 = -1;
	uint64_t x170 = UINT64_MAX;
	static volatile uint32_t x172 = 324606U;
	int32_t t40 = 8823;

    t40 = (x169&(x170==(x171%x172)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x173 = INT8_MAX;
	int32_t x174 = 151723;
	uint32_t x176 = 64U;
	static volatile int32_t t41 = -736451216;

    t41 = (x173&(x174==(x175%x176)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x178 = 0;
	uint8_t x179 = 6U;
	volatile int32_t x180 = -9261;
	volatile int32_t t42 = -24893626;

    t42 = (x177&(x178==(x179%x180)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x181 = -8;
	uint32_t x182 = 1279342U;
	static int8_t x183 = INT8_MIN;
	int32_t x184 = 12682886;
	volatile int32_t t43 = -497601698;

    t43 = (x181&(x182==(x183%x184)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x185 = 0LLU;
	uint8_t x186 = 5U;
	int16_t x187 = INT16_MIN;
	int8_t x188 = -12;
	volatile uint64_t t44 = 1831261892443LLU;

    t44 = (x185&(x186==(x187%x188)));

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x189 = INT8_MIN;
	static uint16_t x190 = UINT16_MAX;
	volatile int64_t x191 = -1LL;
	int32_t x192 = INT32_MIN;
	volatile int32_t t45 = 2925528;

    t45 = (x189&(x190==(x191%x192)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x193 = INT8_MIN;
	volatile int16_t x194 = 9017;
	uint32_t x195 = 2U;
	volatile uint8_t x196 = 1U;

    t46 = (x193&(x194==(x195%x196)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile uint16_t x197 = UINT16_MAX;
	uint32_t x198 = 292U;
	int64_t x199 = 8288783707347617LL;
	int8_t x200 = 8;
	volatile int32_t t47 = -16456506;

    t47 = (x197&(x198==(x199%x200)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x201 = 14U;
	volatile int64_t x202 = -942383063609788457LL;
	int64_t x203 = -13593964518LL;
	static int16_t x204 = INT16_MIN;
	static volatile int32_t t48 = -908;

    t48 = (x201&(x202==(x203%x204)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x206 = INT16_MIN;
	volatile int64_t x207 = INT64_MAX;
	uint8_t x208 = 70U;
	static volatile int32_t t49 = -1909;

    t49 = (x205&(x206==(x207%x208)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x209 = UINT64_MAX;
	volatile int16_t x211 = 38;
	int64_t x212 = INT64_MAX;
	uint64_t t50 = 4152271LLU;

    t50 = (x209&(x210==(x211%x212)));

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x213 = -1;
	static uint8_t x214 = 2U;
	static uint8_t x215 = 1U;
	int32_t t51 = -25779133;

    t51 = (x213&(x214==(x215%x216)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint16_t x217 = 61U;
	int64_t x218 = INT64_MAX;
	static int32_t x219 = INT32_MIN;
	int16_t x220 = INT16_MIN;
	volatile int32_t t52 = -872;

    t52 = (x217&(x218==(x219%x220)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x221 = INT32_MIN;
	int64_t x224 = INT64_MIN;
	volatile int32_t t53 = -432;

    t53 = (x221&(x222==(x223%x224)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x225 = INT8_MAX;
	int32_t x226 = -11;
	volatile uint8_t x228 = 77U;
	int32_t t54 = 3185403;

    t54 = (x225&(x226==(x227%x228)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x229 = UINT64_MAX;
	uint64_t x230 = UINT64_MAX;
	volatile uint64_t x231 = UINT64_MAX;
	volatile uint32_t x232 = 15592283U;
	volatile uint64_t t55 = 7652LLU;

    t55 = (x229&(x230==(x231%x232)));

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x233 = 1146;
	int16_t x234 = -28;
	volatile int8_t x235 = -1;
	static int32_t x236 = INT32_MIN;
	volatile int32_t t56 = -319990;

    t56 = (x233&(x234==(x235%x236)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x237 = INT64_MAX;
	int8_t x238 = -1;
	uint64_t x239 = 1LLU;
	int32_t x240 = -1;

    t57 = (x237&(x238==(x239%x240)));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x241 = INT32_MAX;
	int32_t x242 = INT32_MIN;

    t58 = (x241&(x242==(x243%x244)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x245 = -1LL;
	int8_t x246 = INT8_MAX;
	int8_t x247 = -39;
	int32_t x248 = INT32_MIN;
	volatile int64_t t59 = -71071LL;

    t59 = (x245&(x246==(x247%x248)));

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x249 = UINT32_MAX;
	uint32_t x250 = 0U;
	uint16_t x252 = UINT16_MAX;
	uint32_t t60 = 19280U;

    t60 = (x249&(x250==(x251%x252)));

    if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x253 = -1LL;
	int32_t x254 = INT32_MIN;
	volatile int64_t x255 = INT64_MIN;
	static volatile int64_t x256 = INT64_MIN;
	volatile int64_t t61 = 21LL;

    t61 = (x253&(x254==(x255%x256)));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint16_t x257 = 12096U;
	uint64_t x258 = 140339016924LLU;
	int32_t x260 = INT32_MAX;
	int32_t t62 = -472817;

    t62 = (x257&(x258==(x259%x260)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x261 = INT32_MAX;
	uint32_t x263 = UINT32_MAX;
	int32_t t63 = -565914;

    t63 = (x261&(x262==(x263%x264)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint64_t x265 = UINT64_MAX;
	uint32_t x266 = 162727858U;
	uint32_t x267 = 676477462U;
	static uint16_t x268 = 1U;
	volatile uint64_t t64 = 6020160495LLU;

    t64 = (x265&(x266==(x267%x268)));

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x269 = INT16_MAX;
	int64_t x270 = -1LL;
	static int32_t x271 = INT32_MIN;
	static int16_t x272 = INT16_MIN;

    t65 = (x269&(x270==(x271%x272)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x273 = INT16_MAX;
	uint64_t x274 = UINT64_MAX;
	volatile uint64_t x275 = UINT64_MAX;
	uint16_t x276 = 30110U;
	volatile int32_t t66 = -62771;

    t66 = (x273&(x274==(x275%x276)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x277 = 275476577317298LLU;
	volatile int64_t x278 = 745959401084560715LL;
	uint32_t x279 = UINT32_MAX;
	uint64_t x280 = UINT64_MAX;
	uint64_t t67 = 26345151LLU;

    t67 = (x277&(x278==(x279%x280)));

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x281 = 24122;
	int16_t x282 = -1;
	int8_t x283 = -1;
	volatile int64_t x284 = INT64_MIN;
	int32_t t68 = 2;

    t68 = (x281&(x282==(x283%x284)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x285 = 5U;
	int32_t x286 = INT32_MIN;
	volatile int8_t x287 = INT8_MIN;
	int16_t x288 = INT16_MIN;

    t69 = (x285&(x286==(x287%x288)));

    if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x289 = -1;
	int8_t x291 = INT8_MIN;
	int8_t x292 = 7;
	int32_t t70 = 5869;

    t70 = (x289&(x290==(x291%x292)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint64_t x293 = 604852LLU;
	uint32_t x294 = 1235027U;
	volatile int64_t x295 = INT64_MIN;
	volatile int32_t x296 = 70351023;
	uint64_t t71 = 7367013LLU;

    t71 = (x293&(x294==(x295%x296)));

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x298 = 117347965;
	static int64_t x299 = INT64_MIN;
	uint64_t x300 = 30209LLU;

    t72 = (x297&(x298==(x299%x300)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x301 = 8165193815866LL;
	int16_t x302 = -13118;
	static int64_t x303 = -16275LL;
	uint8_t x304 = 3U;

    t73 = (x301&(x302==(x303%x304)));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x306 = 7U;
	volatile int16_t x307 = INT16_MIN;
	volatile int64_t x308 = INT64_MIN;
	volatile int32_t t74 = -831248;

    t74 = (x305&(x306==(x307%x308)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int32_t x310 = INT32_MAX;
	int32_t x311 = 7136;
	uint8_t x312 = UINT8_MAX;
	int32_t t75 = -2694346;

    t75 = (x309&(x310==(x311%x312)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x313 = -1LL;
	static int64_t x315 = INT64_MAX;
	static uint64_t x316 = 7669583LLU;
	volatile int64_t t76 = 620420LL;

    t76 = (x313&(x314==(x315%x316)));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x317 = INT64_MAX;
	int8_t x318 = -1;
	int16_t x320 = INT16_MAX;

    t77 = (x317&(x318==(x319%x320)));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x321 = UINT16_MAX;
	int64_t x323 = 458LL;
	uint64_t x324 = 1LLU;
	volatile int32_t t78 = -123405485;

    t78 = (x321&(x322==(x323%x324)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x325 = 62;
	static uint16_t x326 = UINT16_MAX;
	static volatile uint16_t x327 = UINT16_MAX;
	volatile int32_t t79 = 7084335;

    t79 = (x325&(x326==(x327%x328)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint8_t x329 = 20U;
	volatile int8_t x330 = -3;
	static volatile int8_t x332 = -6;
	volatile int32_t t80 = -19;

    t80 = (x329&(x330==(x331%x332)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x337 = INT8_MAX;
	uint16_t x338 = UINT16_MAX;
	int8_t x339 = INT8_MAX;
	uint16_t x340 = 11U;
	static volatile int32_t t81 = -263;

    t81 = (x337&(x338==(x339%x340)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile uint32_t x341 = 257924U;
	volatile int16_t x342 = INT16_MAX;
	int32_t x344 = INT32_MIN;
	static volatile uint32_t t82 = 2058388062U;

    t82 = (x341&(x342==(x343%x344)));

    if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x345 = -130533LL;
	uint8_t x346 = UINT8_MAX;
	int64_t x347 = INT64_MIN;
	static int32_t x348 = -133123033;
	volatile int64_t t83 = 1797912455447LL;

    t83 = (x345&(x346==(x347%x348)));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x349 = INT16_MAX;
	uint16_t x351 = 3940U;
	uint8_t x352 = 7U;

    t84 = (x349&(x350==(x351%x352)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x353 = INT64_MAX;
	volatile int64_t x355 = INT64_MAX;
	volatile uint64_t x356 = 8878630228282377057LLU;

    t85 = (x353&(x354==(x355%x356)));

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x357 = INT16_MIN;
	static int8_t x358 = INT8_MAX;
	uint32_t x359 = 10891209U;

    t86 = (x357&(x358==(x359%x360)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x361 = INT16_MIN;
	static volatile int64_t x363 = INT64_MAX;
	uint16_t x364 = UINT16_MAX;
	static int32_t t87 = -745518455;

    t87 = (x361&(x362==(x363%x364)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint8_t x365 = 3U;
	uint32_t x367 = UINT32_MAX;
	int16_t x368 = 1;
	volatile int32_t t88 = -625139183;

    t88 = (x365&(x366==(x367%x368)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x369 = INT8_MIN;
	int64_t x372 = INT64_MIN;

    t89 = (x369&(x370==(x371%x372)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x373 = -1LL;
	int16_t x374 = INT16_MAX;
	int16_t x375 = -1;
	volatile int64_t x376 = INT64_MIN;
	static volatile int64_t t90 = -78824791622LL;

    t90 = (x373&(x374==(x375%x376)));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x377 = INT32_MIN;
	volatile uint64_t x378 = 110LLU;
	volatile int64_t x379 = -1LL;
	uint8_t x380 = 122U;
	volatile int32_t t91 = -1940607;

    t91 = (x377&(x378==(x379%x380)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint16_t x381 = 22808U;
	int16_t x382 = INT16_MIN;
	int8_t x383 = -1;
	volatile uint32_t x384 = 3207U;
	static volatile int32_t t92 = 7322;

    t92 = (x381&(x382==(x383%x384)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x386 = INT8_MIN;
	volatile int32_t x387 = INT32_MAX;
	int32_t x388 = -127105266;
	volatile int32_t t93 = 2186263;

    t93 = (x385&(x386==(x387%x388)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x389 = UINT32_MAX;
	static uint64_t x390 = UINT64_MAX;
	static int64_t x391 = INT64_MAX;

    t94 = (x389&(x390==(x391%x392)));

    if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x394 = INT64_MAX;
	uint16_t x396 = 13U;
	volatile int32_t t95 = -45344;

    t95 = (x393&(x394==(x395%x396)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x397 = 130;
	int32_t x398 = 4;
	int8_t x399 = INT8_MAX;
	static volatile int32_t x400 = 187232;
	int32_t t96 = 45;

    t96 = (x397&(x398==(x399%x400)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x401 = INT64_MIN;
	static int32_t x402 = INT32_MIN;
	int8_t x403 = INT8_MIN;
	static int64_t x404 = -1LL;
	volatile int64_t t97 = 2488LL;

    t97 = (x401&(x402==(x403%x404)));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x405 = 11823U;
	int32_t x408 = 57778906;

    t98 = (x405&(x406==(x407%x408)));

    if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x409 = INT16_MAX;
	int16_t x410 = INT16_MAX;
	volatile int16_t x411 = -6;
	int16_t x412 = -1;
	int32_t t99 = -11794;

    t99 = (x409&(x410==(x411%x412)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x414 = INT16_MIN;
	uint32_t x416 = UINT32_MAX;

    t100 = (x413&(x414==(x415%x416)));

    if (t100 != 0U) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x417 = -1LL;
	volatile int8_t x418 = INT8_MIN;
	uint16_t x419 = 52U;
	int16_t x420 = INT16_MIN;
	volatile int64_t t101 = 232882012066097465LL;

    t101 = (x417&(x418==(x419%x420)));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x421 = 204101988U;
	uint8_t x422 = 100U;
	static volatile int64_t x424 = INT64_MAX;
	volatile uint32_t t102 = 242U;

    t102 = (x421&(x422==(x423%x424)));

    if (t102 != 0U) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x425 = -1;
	int64_t x426 = -1LL;
	volatile int8_t x427 = -8;
	int32_t x428 = -1;
	volatile int32_t t103 = -1;

    t103 = (x425&(x426==(x427%x428)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x429 = INT64_MIN;
	uint32_t x430 = 157660U;
	volatile uint8_t x431 = UINT8_MAX;
	volatile uint32_t x432 = 97150423U;
	static volatile int64_t t104 = 173LL;

    t104 = (x429&(x430==(x431%x432)));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint8_t x433 = 1U;
	int16_t x435 = 3;
	static int64_t x436 = INT64_MIN;
	volatile int32_t t105 = 42762842;

    t105 = (x433&(x434==(x435%x436)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x437 = 57;
	int8_t x438 = -1;
	int8_t x440 = INT8_MIN;
	int32_t t106 = -14713509;

    t106 = (x437&(x438==(x439%x440)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint16_t x441 = UINT16_MAX;
	static uint8_t x442 = 9U;
	uint16_t x443 = 100U;
	uint64_t x444 = 16763219978LLU;
	static int32_t t107 = -2089;

    t107 = (x441&(x442==(x443%x444)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x445 = INT64_MIN;
	static uint32_t x447 = 560U;
	volatile int32_t x448 = INT32_MIN;
	int64_t t108 = 519058938673LL;

    t108 = (x445&(x446==(x447%x448)));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x450 = INT64_MIN;
	uint16_t x451 = 26U;
	volatile uint16_t x452 = 414U;

    t109 = (x449&(x450==(x451%x452)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x454 = 206880826;
	uint16_t x455 = 7U;
	volatile uint32_t x456 = 2U;
	uint32_t t110 = 15904U;

    t110 = (x453&(x454==(x455%x456)));

    if (t110 != 0U) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x457 = 1U;
	uint64_t x458 = 936635802LLU;
	volatile int32_t t111 = 38;

    t111 = (x457&(x458==(x459%x460)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint16_t x461 = 23526U;
	static int32_t x463 = -1;
	uint64_t x464 = 315496LLU;
	volatile int32_t t112 = 501;

    t112 = (x461&(x462==(x463%x464)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint64_t x465 = 316750282722315938LLU;
	int8_t x466 = 1;
	volatile uint64_t t113 = 319800396LLU;

    t113 = (x465&(x466==(x467%x468)));

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x469 = INT32_MIN;
	uint64_t x470 = 1362304072365961171LLU;
	int16_t x471 = INT16_MAX;
	volatile uint64_t x472 = 15991396202LLU;
	int32_t t114 = -43993193;

    t114 = (x469&(x470==(x471%x472)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x473 = -1;
	uint64_t x474 = 105LLU;
	static volatile int8_t x475 = -28;
	volatile int32_t t115 = 7899753;

    t115 = (x473&(x474==(x475%x476)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x477 = INT16_MIN;
	uint8_t x479 = 39U;
	uint64_t x480 = 15671LLU;

    t116 = (x477&(x478==(x479%x480)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint16_t x482 = 65U;
	static uint16_t x483 = 59U;
	int8_t x484 = INT8_MIN;
	volatile int32_t t117 = 608817;

    t117 = (x481&(x482==(x483%x484)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x485 = INT64_MAX;
	static int64_t x486 = -1415223826721465LL;
	volatile int64_t x487 = -6514409LL;
	int64_t x488 = -1LL;
	int64_t t118 = -53627290683086LL;

    t118 = (x485&(x486==(x487%x488)));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x489 = INT64_MAX;
	int8_t x490 = INT8_MIN;
	int32_t x491 = -1;
	static int8_t x492 = -3;
	int64_t t119 = 49006410386693LL;

    t119 = (x489&(x490==(x491%x492)));

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint64_t x494 = 4LLU;
	volatile int8_t x495 = 1;
	int64_t x496 = 1178614786419LL;
	int32_t t120 = -585144139;

    t120 = (x493&(x494==(x495%x496)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x497 = INT32_MIN;
	volatile int8_t x498 = -1;
	int16_t x500 = 113;
	static int32_t t121 = 0;

    t121 = (x497&(x498==(x499%x500)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x501 = -25908885722LL;
	int64_t x502 = -13LL;
	volatile uint32_t x503 = 1764U;
	volatile uint32_t x504 = 347315U;
	static int64_t t122 = 2895223250049129479LL;

    t122 = (x501&(x502==(x503%x504)));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x505 = 3U;
	static int8_t x506 = INT8_MIN;
	uint32_t x508 = 962657884U;
	volatile int32_t t123 = 69018463;

    t123 = (x505&(x506==(x507%x508)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x509 = INT8_MIN;
	uint32_t x511 = 6708U;
	int16_t x512 = -1;
	static volatile int32_t t124 = -352645;

    t124 = (x509&(x510==(x511%x512)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x513 = UINT64_MAX;
	uint64_t x515 = 62976888221LLU;
	int32_t x516 = INT32_MIN;

    t125 = (x513&(x514==(x515%x516)));

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x517 = INT16_MAX;
	int16_t x518 = -1;
	int8_t x519 = -1;
	int16_t x520 = -41;
	volatile int32_t t126 = -1686;

    t126 = (x517&(x518==(x519%x520)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile uint32_t x521 = 176397U;
	int64_t x523 = 127LL;
	int32_t x524 = INT32_MIN;
	uint32_t t127 = 1436U;

    t127 = (x521&(x522==(x523%x524)));

    if (t127 != 0U) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x525 = INT16_MIN;
	int16_t x526 = 607;
	static volatile int8_t x527 = INT8_MAX;
	uint8_t x528 = UINT8_MAX;
	volatile int32_t t128 = -75436258;

    t128 = (x525&(x526==(x527%x528)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x529 = INT64_MAX;
	volatile uint32_t x530 = UINT32_MAX;
	uint8_t x531 = 0U;

    t129 = (x529&(x530==(x531%x532)));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x534 = INT8_MIN;
	int16_t x535 = INT16_MIN;
	int8_t x536 = -1;
	int32_t t130 = 123;

    t130 = (x533&(x534==(x535%x536)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x537 = 3169915U;
	int8_t x539 = -1;
	uint32_t x540 = 3601U;
	uint32_t t131 = 0U;

    t131 = (x537&(x538==(x539%x540)));

    if (t131 != 0U) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x541 = 8U;
	volatile int8_t x542 = -63;
	uint64_t x543 = 2885908LLU;
	uint16_t x544 = UINT16_MAX;
	int32_t t132 = -203538100;

    t132 = (x541&(x542==(x543%x544)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x545 = 275902LL;
	uint32_t x546 = 343599917U;
	uint64_t x547 = UINT64_MAX;
	uint8_t x548 = 67U;
	static volatile int64_t t133 = -7926LL;

    t133 = (x545&(x546==(x547%x548)));

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x549 = 103404885896261902LLU;
	uint64_t x550 = UINT64_MAX;
	uint32_t x551 = 86U;
	uint64_t t134 = 2001891901643877488LLU;

    t134 = (x549&(x550==(x551%x552)));

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x553 = 22U;
	uint64_t x555 = UINT64_MAX;
	static int64_t x556 = -1LL;

    t135 = (x553&(x554==(x555%x556)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x558 = 6;
	int32_t x559 = -1;
	volatile int16_t x560 = -5416;
	static volatile int32_t t136 = -601469;

    t136 = (x557&(x558==(x559%x560)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x561 = 3U;
	int16_t x562 = INT16_MIN;
	static uint32_t x564 = UINT32_MAX;
	int32_t t137 = -8332250;

    t137 = (x561&(x562==(x563%x564)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x566 = 30U;
	uint8_t x567 = 4U;
	int32_t x568 = INT32_MIN;
	static int32_t t138 = 221633743;

    t138 = (x565&(x566==(x567%x568)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x569 = 220361U;
	int64_t x570 = -1LL;
	uint64_t x571 = UINT64_MAX;
	static int64_t x572 = INT64_MAX;
	static uint32_t t139 = 46U;

    t139 = (x569&(x570==(x571%x572)));

    if (t139 != 0U) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x573 = INT32_MAX;
	static uint8_t x574 = 8U;
	static int64_t x575 = INT64_MAX;
	static int32_t t140 = -1;

    t140 = (x573&(x574==(x575%x576)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x577 = INT8_MAX;
	int16_t x579 = 8;

    t141 = (x577&(x578==(x579%x580)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x581 = 15U;
	static volatile uint32_t x582 = 115548U;
	int8_t x583 = INT8_MAX;
	volatile int32_t t142 = 70860157;

    t142 = (x581&(x582==(x583%x584)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x586 = -1;
	int16_t x587 = INT16_MIN;
	volatile uint64_t t143 = 3797517207LLU;

    t143 = (x585&(x586==(x587%x588)));

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x589 = INT8_MIN;
	uint64_t x591 = UINT64_MAX;
	uint32_t x592 = 7798862U;
	int32_t t144 = 15;

    t144 = (x589&(x590==(x591%x592)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x593 = 2209U;
	volatile int8_t x595 = -18;
	static int64_t x596 = INT64_MIN;

    t145 = (x593&(x594==(x595%x596)));

    if (t145 != 0U) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x597 = 15141020795387992LLU;
	volatile uint64_t x598 = 11816LLU;
	uint64_t x599 = 235756385LLU;
	static volatile uint64_t t146 = 11124277LLU;

    t146 = (x597&(x598==(x599%x600)));

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x602 = INT8_MAX;
	int32_t x603 = INT32_MIN;
	int16_t x604 = INT16_MIN;
	int32_t t147 = 2772;

    t147 = (x601&(x602==(x603%x604)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x605 = INT64_MIN;
	volatile int32_t x606 = INT32_MIN;
	int8_t x607 = -1;
	int8_t x608 = INT8_MIN;
	int64_t t148 = -3111LL;

    t148 = (x605&(x606==(x607%x608)));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x609 = 1722U;
	volatile uint32_t x610 = 0U;
	int8_t x611 = INT8_MAX;
	uint32_t t149 = 16U;

    t149 = (x609&(x610==(x611%x612)));

    if (t149 != 0U) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x613 = -1;
	uint64_t x614 = 267876487970216155LLU;
	static int8_t x615 = INT8_MIN;
	volatile int32_t x616 = 1458449;
	volatile int32_t t150 = -29183;

    t150 = (x613&(x614==(x615%x616)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x617 = UINT16_MAX;
	int8_t x618 = INT8_MIN;
	int16_t x619 = INT16_MIN;
	volatile int8_t x620 = INT8_MAX;
	int32_t t151 = -16817464;

    t151 = (x617&(x618==(x619%x620)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x621 = UINT64_MAX;
	int16_t x622 = 10;
	volatile uint32_t x623 = 413684748U;
	static uint8_t x624 = 19U;
	volatile uint64_t t152 = 319159277034133LLU;

    t152 = (x621&(x622==(x623%x624)));

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x625 = INT16_MIN;
	int8_t x627 = INT8_MIN;

    t153 = (x625&(x626==(x627%x628)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x629 = INT64_MIN;
	volatile uint16_t x630 = 15371U;
	int16_t x631 = -1;

    t154 = (x629&(x630==(x631%x632)));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x635 = INT16_MAX;
	int64_t x636 = INT64_MIN;
	int32_t t155 = 7;

    t155 = (x633&(x634==(x635%x636)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x637 = -1;
	int64_t x638 = INT64_MIN;
	volatile uint32_t x639 = 4105U;
	int64_t x640 = INT64_MAX;
	int32_t t156 = 45401;

    t156 = (x637&(x638==(x639%x640)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint16_t x642 = UINT16_MAX;
	uint32_t x643 = UINT32_MAX;
	int16_t x644 = -351;
	int32_t t157 = 31;

    t157 = (x641&(x642==(x643%x644)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int16_t x645 = INT16_MIN;
	uint32_t x646 = 3577U;
	int8_t x647 = 17;

    t158 = (x645&(x646==(x647%x648)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x649 = INT8_MAX;
	int8_t x650 = INT8_MIN;
	volatile uint64_t x651 = 448LLU;
	uint64_t x652 = 3643691320288LLU;
	int32_t t159 = -19274;

    t159 = (x649&(x650==(x651%x652)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x653 = -173806585LL;
	static uint64_t x654 = 81993749564729095LLU;
	volatile int64_t t160 = -1283803564LL;

    t160 = (x653&(x654==(x655%x656)));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x657 = INT32_MIN;
	int8_t x658 = INT8_MIN;
	volatile uint32_t x659 = 29U;
	uint64_t x660 = 24100LLU;
	int32_t t161 = 16;

    t161 = (x657&(x658==(x659%x660)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x661 = INT32_MAX;
	int32_t x662 = INT32_MAX;
	uint16_t x663 = UINT16_MAX;
	int8_t x664 = INT8_MAX;
	int32_t t162 = 19879;

    t162 = (x661&(x662==(x663%x664)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x665 = 676U;
	static uint64_t x666 = 31467952934662LLU;
	int16_t x668 = -1;
	volatile int32_t t163 = 841;

    t163 = (x665&(x666==(x667%x668)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x669 = INT64_MAX;
	int64_t x670 = -1LL;
	static uint32_t x671 = 325483U;
	volatile uint64_t x672 = 2676713010LLU;

    t164 = (x669&(x670==(x671%x672)));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x673 = UINT8_MAX;
	uint64_t x675 = 1LLU;
	int16_t x676 = -1;

    t165 = (x673&(x674==(x675%x676)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x678 = UINT16_MAX;
	int64_t x680 = INT64_MIN;
	static volatile int32_t t166 = -207662;

    t166 = (x677&(x678==(x679%x680)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x682 = -7;
	volatile int32_t x683 = INT32_MAX;
	static volatile uint16_t x684 = 3U;
	static volatile int32_t t167 = 0;

    t167 = (x681&(x682==(x683%x684)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x685 = -1;
	int16_t x686 = -1;
	int32_t x687 = 194;
	uint64_t x688 = 53026202890921LLU;
	volatile int32_t t168 = -1546;

    t168 = (x685&(x686==(x687%x688)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x689 = INT16_MAX;
	volatile uint64_t x691 = 37599375540994745LLU;
	uint64_t x692 = UINT64_MAX;
	volatile int32_t t169 = 2862146;

    t169 = (x689&(x690==(x691%x692)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x694 = INT32_MAX;
	int16_t x695 = -1;

    t170 = (x693&(x694==(x695%x696)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x701 = 0U;
	int64_t x703 = INT64_MIN;
	static int32_t x704 = INT32_MIN;

    t171 = (x701&(x702==(x703%x704)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x705 = 2876417147984534254LL;
	volatile uint8_t x706 = 4U;
	volatile int16_t x707 = INT16_MIN;
	volatile int64_t t172 = -1356346LL;

    t172 = (x705&(x706==(x707%x708)));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x709 = INT64_MIN;
	uint64_t x710 = UINT64_MAX;
	int32_t x711 = 1013635;
	int64_t t173 = 1LL;

    t173 = (x709&(x710==(x711%x712)));

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x714 = INT32_MAX;
	int64_t x715 = INT64_MIN;
	static int16_t x716 = INT16_MAX;
	int32_t t174 = -327078;

    t174 = (x713&(x714==(x715%x716)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x717 = -3436485;
	static volatile int64_t x718 = INT64_MAX;
	int64_t x719 = INT64_MAX;
	uint64_t x720 = 89745708862461522LLU;

    t175 = (x717&(x718==(x719%x720)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x723 = 295068U;
	int16_t x724 = -1;
	int64_t t176 = -963708015879789LL;

    t176 = (x721&(x722==(x723%x724)));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x725 = INT32_MIN;
	static int32_t x726 = INT32_MIN;
	uint64_t x727 = UINT64_MAX;
	volatile int32_t x728 = INT32_MIN;
	volatile int32_t t177 = 147567477;

    t177 = (x725&(x726==(x727%x728)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x729 = 3;
	uint32_t x730 = 202178U;
	static uint32_t x731 = 5835U;
	int64_t x732 = INT64_MAX;
	static volatile int32_t t178 = 30931825;

    t178 = (x729&(x730==(x731%x732)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x733 = 9U;
	static int16_t x734 = 7;
	static volatile int32_t x735 = 142078;
	int32_t x736 = INT32_MIN;
	int32_t t179 = 135506084;

    t179 = (x733&(x734==(x735%x736)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x737 = INT8_MAX;
	int32_t x738 = 1269;
	uint64_t x739 = 4701LLU;
	int64_t x740 = INT64_MIN;
	int32_t t180 = -6;

    t180 = (x737&(x738==(x739%x740)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x742 = 26;
	int32_t x743 = -152122;
	static int32_t x744 = -84;
	volatile int32_t t181 = 1;

    t181 = (x741&(x742==(x743%x744)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint32_t x746 = 11671022U;
	volatile int16_t x747 = -2;
	static volatile int8_t x748 = INT8_MAX;
	volatile int32_t t182 = -47953681;

    t182 = (x745&(x746==(x747%x748)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x749 = UINT64_MAX;
	uint8_t x750 = UINT8_MAX;
	uint16_t x751 = 70U;
	int64_t x752 = -1LL;
	static volatile uint64_t t183 = 7019838709623LLU;

    t183 = (x749&(x750==(x751%x752)));

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x753 = INT32_MIN;
	int32_t x754 = INT32_MAX;
	uint64_t x755 = 844125755169751LLU;
	volatile uint64_t x756 = UINT64_MAX;
	int32_t t184 = 105264465;

    t184 = (x753&(x754==(x755%x756)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x757 = INT8_MIN;
	int32_t x758 = INT32_MIN;
	static int16_t x759 = -1;
	int64_t x760 = INT64_MIN;
	int32_t t185 = -6880;

    t185 = (x757&(x758==(x759%x760)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x761 = INT16_MIN;
	int32_t x762 = INT32_MIN;
	static int16_t x764 = -1;
	int32_t t186 = -248936421;

    t186 = (x761&(x762==(x763%x764)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x765 = INT32_MIN;
	int64_t x766 = INT64_MIN;
	int64_t x767 = INT64_MAX;
	volatile int16_t x768 = -1759;
	volatile int32_t t187 = 20213;

    t187 = (x765&(x766==(x767%x768)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x769 = 682692;
	static int16_t x770 = 1365;
	uint8_t x771 = UINT8_MAX;
	static volatile int16_t x772 = INT16_MIN;
	static volatile int32_t t188 = 55003989;

    t188 = (x769&(x770==(x771%x772)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile uint16_t x773 = UINT16_MAX;
	uint64_t x774 = UINT64_MAX;
	volatile int64_t x775 = INT64_MIN;
	int16_t x776 = -15443;
	volatile int32_t t189 = 63;

    t189 = (x773&(x774==(x775%x776)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x777 = INT16_MIN;
	int8_t x778 = -56;
	int64_t x779 = INT64_MAX;
	int32_t x780 = INT32_MIN;
	int32_t t190 = 128;

    t190 = (x777&(x778==(x779%x780)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x781 = -1445100846637895076LL;
	int16_t x782 = -16;
	int16_t x784 = INT16_MIN;
	static int64_t t191 = -12259950LL;

    t191 = (x781&(x782==(x783%x784)));

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x785 = INT32_MIN;
	int32_t x786 = 23784768;
	static int8_t x787 = -1;
	volatile int32_t t192 = 216845;

    t192 = (x785&(x786==(x787%x788)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x789 = 3U;
	int32_t x790 = -222;
	int16_t x791 = INT16_MIN;
	int16_t x792 = -3424;
	int32_t t193 = -41657118;

    t193 = (x789&(x790==(x791%x792)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x793 = 1;
	int64_t x795 = -1LL;
	int32_t x796 = INT32_MIN;
	int32_t t194 = 8526093;

    t194 = (x793&(x794==(x795%x796)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x797 = -1;
	int32_t x798 = INT32_MAX;
	uint64_t x799 = UINT64_MAX;
	uint16_t x800 = 7U;

    t195 = (x797&(x798==(x799%x800)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x801 = INT64_MAX;
	uint32_t x802 = 1U;
	static int16_t x803 = -1;
	static volatile int64_t x804 = INT64_MAX;
	volatile int64_t t196 = 236958602718LL;

    t196 = (x801&(x802==(x803%x804)));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x811 = INT16_MIN;
	volatile int32_t t197 = -177;

    t197 = (x809&(x810==(x811%x812)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint64_t x813 = UINT64_MAX;
	int64_t x814 = -1LL;
	volatile int8_t x815 = INT8_MIN;
	uint64_t t198 = 4893506LLU;

    t198 = (x813&(x814==(x815%x816)));

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint32_t x817 = UINT32_MAX;
	int32_t x818 = INT32_MAX;
	volatile int32_t x819 = INT32_MIN;
	int8_t x820 = INT8_MIN;

    t199 = (x817&(x818==(x819%x820)));

    if (t199 != 0U) { NG(); } else { ; }
	
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


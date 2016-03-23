
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

static int16_t x5 = INT16_MAX;
int32_t x10 = INT32_MIN;
static int64_t x21 = INT64_MIN;
volatile int32_t t4 = 232819;
uint32_t x40 = 8807U;
uint8_t x46 = UINT8_MAX;
uint64_t t6 = 189350002LLU;
static volatile uint64_t x64 = 5360017LLU;
volatile int32_t t9 = -10;
uint8_t x85 = UINT8_MAX;
static int64_t x87 = 86957LL;
static int64_t t10 = 30159485534931LL;
int16_t x89 = INT16_MIN;
volatile int64_t x94 = 207997292757LL;
int8_t x99 = INT8_MIN;
int16_t x101 = INT16_MIN;
volatile int64_t x125 = INT64_MIN;
static volatile uint8_t x127 = UINT8_MAX;
volatile int64_t x140 = INT64_MAX;
int32_t x146 = -22562618;
uint32_t x154 = 9U;
int64_t x158 = INT64_MIN;
int64_t x166 = INT64_MIN;
int16_t x170 = -1;
uint64_t x178 = 17681928242478574LLU;
static uint16_t x180 = 6U;
int16_t x183 = INT16_MAX;
static volatile int32_t t30 = -4;
uint32_t x189 = 2176099U;
static volatile int32_t x201 = INT32_MIN;
static uint64_t x204 = 61975679296LLU;
volatile uint16_t x227 = 30U;
static int32_t x234 = INT32_MIN;
volatile uint32_t x236 = UINT32_MAX;
int16_t x238 = INT16_MAX;
int8_t x239 = INT8_MAX;
static int8_t x240 = INT8_MIN;
int64_t t38 = 130928707058450985LL;
uint16_t x258 = UINT16_MAX;
int32_t x268 = -506672;
static volatile int64_t t42 = 56282LL;
static int16_t x298 = INT16_MAX;
volatile uint16_t x300 = 0U;
static volatile int64_t x306 = INT64_MIN;
static int32_t x318 = INT32_MAX;
static uint8_t x323 = 3U;
static int32_t x340 = -1;
int8_t x344 = 58;
volatile int32_t t53 = 11078;
int64_t x353 = INT64_MAX;
int8_t x354 = INT8_MAX;
int32_t x373 = INT32_MIN;
uint32_t t56 = 80707U;
volatile int32_t x378 = -10;
int16_t x380 = INT16_MAX;
uint32_t x389 = 380268404U;
uint16_t x390 = 16U;
uint64_t x391 = UINT64_MAX;
int32_t x395 = INT32_MIN;
uint32_t x396 = UINT32_MAX;
uint32_t x405 = 5U;
int64_t x408 = -1LL;
int64_t x414 = -1LL;
static int64_t x419 = INT64_MAX;
volatile int8_t x423 = INT8_MIN;
int16_t x424 = 470;
uint64_t x427 = 125613LLU;
volatile int16_t x432 = -1;
int8_t x437 = INT8_MIN;
int16_t x451 = 2283;
uint32_t x452 = 51080U;
volatile int16_t x462 = -1020;
volatile uint8_t x464 = 93U;
static uint32_t x468 = UINT32_MAX;
uint32_t x479 = 425U;
volatile int16_t x482 = -1;
volatile uint64_t x485 = 1724268LLU;
int8_t x496 = -1;
uint64_t x499 = UINT64_MAX;
volatile uint64_t t77 = 34843139484901858LLU;
volatile int32_t x512 = -1;
uint16_t x530 = 654U;
volatile int64_t t81 = -12041030LL;
int16_t x541 = -15;
int8_t x556 = INT8_MIN;
int64_t x562 = -2798LL;
static int16_t x566 = INT16_MIN;
int32_t t85 = 15875;
volatile uint64_t x575 = 1LLU;
static volatile int64_t x580 = -24LL;
volatile int64_t t88 = 86920067670474LL;
static uint32_t x591 = 97U;
int8_t x598 = INT8_MIN;
static int64_t x600 = -1LL;
static volatile int32_t x609 = INT32_MIN;
int16_t x610 = INT16_MAX;
uint64_t x613 = 34644136LLU;
volatile int16_t x614 = INT16_MAX;
volatile int16_t x615 = -1;
int8_t x616 = -1;
volatile uint32_t t96 = 47U;
uint8_t x630 = UINT8_MAX;
int16_t x631 = INT16_MAX;
int64_t t97 = -1LL;
int64_t t99 = -195LL;
int8_t x647 = INT8_MIN;
int64_t x652 = -6286LL;
int16_t x653 = 194;
static int32_t x655 = 26641;
volatile uint64_t t102 = 268017LLU;
static int16_t x657 = -1;
int8_t x658 = INT8_MIN;
int32_t x669 = INT32_MIN;
int16_t x678 = INT16_MIN;
int8_t x680 = 1;
int32_t x687 = -1;
uint8_t x708 = 0U;
static int8_t x728 = 42;
int32_t t112 = 15068140;
int64_t x731 = -1LL;
static uint16_t x738 = UINT16_MAX;
int32_t x739 = -1380220;
static int64_t x740 = -1LL;
int64_t t114 = -1357985LL;
int32_t x777 = -1003;
int32_t x780 = -1;
uint16_t x782 = 4U;
uint64_t x788 = UINT64_MAX;
static uint64_t x790 = UINT64_MAX;
volatile uint64_t t124 = 2613LLU;
int8_t x812 = INT8_MIN;
static int64_t t125 = 2431LL;
int64_t x819 = -5414101LL;
int8_t x833 = INT8_MAX;
static uint32_t x835 = 974596U;
static uint32_t x838 = UINT32_MAX;
volatile int64_t t130 = 4694LL;
int64_t x848 = -13426540956692026LL;
static int64_t t131 = 89LL;
volatile int64_t x861 = INT64_MIN;
int32_t x867 = -1;
uint16_t x872 = UINT16_MAX;
volatile uint64_t t136 = 7490462173LLU;
static uint64_t t138 = 48110248221LLU;
int16_t x893 = -650;
int64_t t142 = -9846695815517LL;
volatile uint32_t t143 = 333U;
uint8_t x921 = 1U;
int64_t t144 = 16213LL;
uint64_t x928 = 0LLU;
volatile int64_t t146 = 1058096595LL;
uint16_t x934 = 1U;
int64_t t147 = -20424881870359LL;
uint64_t t148 = 4139911260001638992LLU;
static volatile int64_t x941 = -1LL;
volatile int64_t t153 = 0LL;
uint64_t x972 = 94020075448941LLU;
static int16_t x974 = INT16_MIN;
volatile uint32_t x975 = 248U;
static volatile int8_t x988 = INT8_MIN;
int16_t x993 = 1420;
int8_t x1006 = INT8_MIN;
int8_t x1020 = INT8_MIN;
volatile uint16_t x1031 = 29U;
int16_t x1044 = INT16_MIN;
int8_t x1046 = -1;
uint8_t x1049 = 30U;
int32_t x1058 = INT32_MAX;
uint16_t x1064 = UINT16_MAX;
int8_t x1067 = INT8_MIN;
uint64_t x1074 = UINT64_MAX;
int16_t x1081 = INT16_MIN;
uint16_t x1083 = 25U;
uint32_t x1091 = 27U;
uint32_t t179 = 20760U;
int64_t x1103 = 3479202LL;
static int64_t x1107 = -1LL;
int64_t x1108 = -4407161089466168LL;
int32_t x1117 = INT32_MIN;
static int16_t x1119 = -1;
int64_t x1122 = 864595778LL;
uint32_t x1129 = 221U;
static int64_t x1131 = 34LL;
static volatile int64_t t188 = -263101693307231LL;
int64_t x1133 = 1557703LL;
int16_t x1138 = -346;
int64_t x1140 = 0LL;
int16_t x1145 = INT16_MAX;
int64_t x1147 = -90552LL;
int16_t x1161 = -1;
static volatile int32_t t195 = 127;
uint8_t x1165 = 3U;
static int64_t t196 = 1683135716139590025LL;
uint32_t x1174 = 425997U;
int64_t x1175 = -1LL;
int32_t x1178 = -1;


void f0(void) {
    	int64_t x1 = 11196276421LL;
	int64_t x2 = INT64_MIN;
	uint8_t x3 = 3U;
	volatile uint64_t x4 = 36LLU;
	uint64_t t0 = 46LLU;

    t0 = (x1/(x2+(x3*x4)));

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x6 = UINT16_MAX;
	volatile int32_t x7 = 3237761;
	volatile int8_t x8 = INT8_MIN;
	int32_t t1 = 2;

    t1 = (x5/(x6+(x7*x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = 25728055LL;
	int16_t x11 = 0;
	volatile uint64_t x12 = 2085997733LLU;
	uint64_t t2 = 80210537544LLU;

    t2 = (x9/(x10+(x11*x12)));

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x22 = -20355950;
	int16_t x23 = INT16_MIN;
	uint64_t x24 = 29LLU;
	uint64_t t3 = 713676134833LLU;

    t3 = (x21/(x22+(x23*x24)));

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x25 = INT8_MIN;
	uint8_t x26 = UINT8_MAX;
	uint8_t x27 = 117U;
	int32_t x28 = -737540;

    t4 = (x25/(x26+(x27*x28)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x37 = -27;
	int64_t x38 = 391013717364LL;
	int16_t x39 = INT16_MAX;
	int64_t t5 = -4764LL;

    t5 = (x37/(x38+(x39*x40)));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x45 = 45U;
	uint64_t x47 = 107706592LLU;
	static uint32_t x48 = UINT32_MAX;

    t6 = (x45/(x46+(x47*x48)));

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x49 = INT8_MIN;
	int8_t x50 = 55;
	uint16_t x51 = 48U;
	uint8_t x52 = UINT8_MAX;
	volatile int32_t t7 = -216300;

    t7 = (x49/(x50+(x51*x52)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x61 = INT64_MIN;
	volatile int16_t x62 = 249;
	int32_t x63 = INT32_MAX;
	volatile uint64_t t8 = 238221LLU;

    t8 = (x61/(x62+(x63*x64)));

    if (t8 != 801LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int16_t x65 = -533;
	int8_t x66 = -1;
	int32_t x67 = -14585289;
	volatile uint8_t x68 = 52U;

    t9 = (x65/(x66+(x67*x68)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x86 = -1;
	int16_t x88 = -429;

    t10 = (x85/(x86+(x87*x88)));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x90 = INT32_MIN;
	int64_t x91 = -121785LL;
	uint32_t x92 = 10165U;
	int64_t t11 = -2872216431540084LL;

    t11 = (x89/(x90+(x91*x92)));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x93 = 997122244282166LL;
	uint16_t x95 = 4U;
	uint64_t x96 = 1925LLU;
	uint64_t t12 = 22331008LLU;

    t12 = (x93/(x94+(x95*x96)));

    if (t12 != 4793LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x97 = INT16_MAX;
	int64_t x98 = INT64_MIN;
	static uint64_t x100 = UINT64_MAX;
	uint64_t t13 = 1924447LLU;

    t13 = (x97/(x98+(x99*x100)));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x102 = 63767935LLU;
	uint8_t x103 = 6U;
	int16_t x104 = 0;
	uint64_t t14 = 67905LLU;

    t14 = (x101/(x102+(x103*x104)));

    if (t14 != 289279307440LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x105 = -4;
	static volatile int16_t x106 = -14911;
	uint32_t x107 = 8U;
	uint32_t x108 = UINT32_MAX;
	volatile uint32_t t15 = 32226731U;

    t15 = (x105/(x106+(x107*x108)));

    if (t15 != 1U) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x117 = 771144U;
	volatile int64_t x118 = INT64_MIN;
	static int16_t x119 = INT16_MIN;
	uint64_t x120 = UINT64_MAX;
	static volatile uint64_t t16 = 1227773594LLU;

    t16 = (x117/(x118+(x119*x120)));

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x126 = -1;
	int16_t x128 = INT16_MIN;
	int64_t t17 = -843570LL;

    t17 = (x125/(x126+(x127*x128)));

    if (t17 != 1103823305978LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x129 = INT16_MAX;
	static uint8_t x130 = UINT8_MAX;
	uint32_t x131 = 57731U;
	int8_t x132 = 1;
	volatile uint32_t t18 = 12U;

    t18 = (x129/(x130+(x131*x132)));

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x133 = 247;
	int32_t x134 = 5;
	volatile int64_t x135 = -1LL;
	uint8_t x136 = UINT8_MAX;
	volatile int64_t t19 = -3042320667058635LL;

    t19 = (x133/(x134+(x135*x136)));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x137 = 3;
	uint8_t x138 = 7U;
	static int8_t x139 = -1;
	volatile int64_t t20 = -3887575LL;

    t20 = (x137/(x138+(x139*x140)));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint16_t x141 = 2U;
	int64_t x142 = INT64_MIN;
	int32_t x143 = -68;
	int64_t x144 = -1LL;
	volatile int64_t t21 = 1332485697884393LL;

    t21 = (x141/(x142+(x143*x144)));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x145 = 49U;
	int8_t x147 = INT8_MIN;
	int16_t x148 = INT16_MIN;
	volatile int32_t t22 = 141436134;

    t22 = (x145/(x146+(x147*x148)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x153 = -3;
	int8_t x155 = 0;
	volatile uint8_t x156 = UINT8_MAX;
	uint32_t t23 = 1424565388U;

    t23 = (x153/(x154+(x155*x156)));

    if (t23 != 477218588U) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x157 = 62257LL;
	int8_t x159 = 9;
	volatile uint64_t x160 = UINT64_MAX;
	uint64_t t24 = 116LLU;

    t24 = (x157/(x158+(x159*x160)));

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x161 = 33U;
	uint16_t x162 = 0U;
	uint16_t x163 = 1U;
	int64_t x164 = -1LL;
	int64_t t25 = -48272LL;

    t25 = (x161/(x162+(x163*x164)));

    if (t25 != -33LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x165 = -34;
	int32_t x167 = INT32_MAX;
	uint32_t x168 = 32290249U;
	int64_t t26 = -2017178832238715821LL;

    t26 = (x165/(x166+(x167*x168)));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x169 = -3547;
	int8_t x171 = -1;
	static uint16_t x172 = UINT16_MAX;
	volatile int32_t t27 = 54700296;

    t27 = (x169/(x170+(x171*x172)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x173 = INT16_MIN;
	static int8_t x174 = INT8_MAX;
	int32_t x175 = INT32_MIN;
	volatile uint32_t x176 = 698537U;
	uint32_t t28 = 537187U;

    t28 = (x173/(x174+(x175*x176)));

    if (t28 != 1U) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint8_t x177 = UINT8_MAX;
	uint32_t x179 = 28562U;
	static uint64_t t29 = 1004491041LLU;

    t29 = (x177/(x178+(x179*x180)));

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x181 = -1;
	int16_t x182 = -10618;
	int8_t x184 = 1;

    t30 = (x181/(x182+(x183*x184)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint32_t x190 = 14266U;
	int32_t x191 = -56833;
	volatile uint32_t x192 = UINT32_MAX;
	static uint32_t t31 = 8388U;

    t31 = (x189/(x190+(x191*x192)));

    if (t31 != 30U) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x197 = 1;
	int16_t x198 = INT16_MIN;
	static volatile int32_t x199 = -1072807771;
	uint32_t x200 = UINT32_MAX;
	volatile uint32_t t32 = 109U;

    t32 = (x197/(x198+(x199*x200)));

    if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x202 = -1;
	int8_t x203 = INT8_MIN;
	volatile uint64_t t33 = 3205249371107320LLU;

    t33 = (x201/(x202+(x203*x204)));

    if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x209 = -51;
	int64_t x210 = INT64_MIN;
	int32_t x211 = -141634;
	static volatile int16_t x212 = -1;
	volatile int64_t t34 = 268293667583353649LL;

    t34 = (x209/(x210+(x211*x212)));

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x225 = -1;
	uint32_t x226 = UINT32_MAX;
	volatile int64_t x228 = -33502LL;
	int64_t t35 = -1LL;

    t35 = (x225/(x226+(x227*x228)));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint16_t x229 = 13828U;
	static uint64_t x230 = 2934811LLU;
	int16_t x231 = INT16_MIN;
	int8_t x232 = 62;
	volatile uint64_t t36 = 30753532244161095LLU;

    t36 = (x229/(x230+(x231*x232)));

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x233 = INT8_MAX;
	uint16_t x235 = 14U;
	uint32_t t37 = 485U;

    t37 = (x233/(x234+(x235*x236)));

    if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x237 = INT64_MIN;

    t38 = (x237/(x238+(x239*x240)));

    if (t38 != -558619831436907LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x241 = UINT64_MAX;
	uint16_t x242 = 156U;
	int64_t x243 = -1LL;
	int16_t x244 = INT16_MAX;
	uint64_t t39 = 924310089843LLU;

    t39 = (x241/(x242+(x243*x244)));

    if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int16_t x257 = INT16_MIN;
	int16_t x259 = 0;
	static int16_t x260 = INT16_MIN;
	int32_t t40 = -38;

    t40 = (x257/(x258+(x259*x260)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x265 = INT8_MIN;
	volatile uint64_t x266 = UINT64_MAX;
	int32_t x267 = -62;
	volatile uint64_t t41 = 29914LLU;

    t41 = (x265/(x266+(x267*x268)));

    if (t41 != 587220410230LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int64_t x269 = 29466712706LL;
	volatile int8_t x270 = 0;
	int16_t x271 = INT16_MIN;
	uint8_t x272 = 88U;

    t42 = (x269/(x270+(x271*x272)));

    if (t42 != -10218LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint8_t x281 = UINT8_MAX;
	volatile int32_t x282 = -10;
	uint32_t x283 = UINT32_MAX;
	int8_t x284 = -17;
	uint32_t t43 = 1U;

    t43 = (x281/(x282+(x283*x284)));

    if (t43 != 36U) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x285 = INT8_MIN;
	uint16_t x286 = UINT16_MAX;
	uint8_t x287 = 38U;
	static uint64_t x288 = 2LLU;
	uint64_t t44 = 108954LLU;

    t44 = (x285/(x286+(x287*x288)));

    if (t44 != 281153222382063LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x297 = -165;
	uint32_t x299 = UINT32_MAX;
	static volatile uint32_t t45 = 1359621U;

    t45 = (x297/(x298+(x299*x300)));

    if (t45 != 131075U) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x301 = 1603037;
	int32_t x302 = -1;
	static int64_t x303 = -5332112500982019LL;
	int8_t x304 = INT8_MAX;
	static int64_t t46 = -4509747035952LL;

    t46 = (x301/(x302+(x303*x304)));

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x305 = 16383566U;
	int32_t x307 = -379;
	volatile int8_t x308 = INT8_MIN;
	int64_t t47 = -59988428951LL;

    t47 = (x305/(x306+(x307*x308)));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int32_t x317 = 175450;
	int64_t x319 = 801176LL;
	uint64_t x320 = 18881646806578585LLU;
	static volatile uint64_t t48 = 21LLU;

    t48 = (x317/(x318+(x319*x320)));

    if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint64_t x321 = UINT64_MAX;
	int64_t x322 = INT64_MIN;
	uint64_t x324 = 1224969461302907481LLU;
	uint64_t t49 = 1023LLU;

    t49 = (x321/(x322+(x323*x324)));

    if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x325 = 856U;
	volatile int16_t x326 = -11666;
	int8_t x327 = INT8_MAX;
	int64_t x328 = -1LL;
	int64_t t50 = -1693515427794247LL;

    t50 = (x325/(x326+(x327*x328)));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile uint16_t x333 = UINT16_MAX;
	int8_t x334 = INT8_MAX;
	volatile int8_t x335 = 4;
	uint64_t x336 = UINT64_MAX;
	static uint64_t t51 = 5652561970975LLU;

    t51 = (x333/(x334+(x335*x336)));

    if (t51 != 532LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x337 = INT16_MIN;
	int64_t x338 = -602330400425980LL;
	volatile int16_t x339 = INT16_MIN;
	int64_t t52 = 4856754866030842LL;

    t52 = (x337/(x338+(x339*x340)));

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x341 = -1;
	static uint16_t x342 = UINT16_MAX;
	int8_t x343 = INT8_MIN;

    t53 = (x341/(x342+(x343*x344)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x355 = 10LLU;
	volatile int8_t x356 = -60;
	static volatile uint64_t t54 = 34LLU;

    t54 = (x353/(x354+(x355*x356)));

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x369 = 1U;
	uint16_t x370 = 0U;
	int16_t x371 = -6;
	int8_t x372 = INT8_MIN;
	int32_t t55 = -1422620;

    t55 = (x369/(x370+(x371*x372)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x374 = 4245;
	int32_t x375 = INT32_MIN;
	static volatile uint32_t x376 = 32967637U;

    t56 = (x373/(x374+(x375*x376)));

    if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x377 = UINT32_MAX;
	uint32_t x379 = 31552U;
	volatile uint32_t t57 = 134849863U;

    t57 = (x377/(x378+(x379*x380)));

    if (t57 != 4U) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x392 = INT16_MIN;
	uint64_t t58 = 517424527892247LLU;

    t58 = (x389/(x390+(x391*x392)));

    if (t58 != 11599LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint64_t x393 = UINT64_MAX;
	volatile int8_t x394 = 5;
	uint64_t t59 = 2580740896LLU;

    t59 = (x393/(x394+(x395*x396)));

    if (t59 != 8589934572LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x406 = INT8_MIN;
	int8_t x407 = -10;
	int64_t t60 = -410302090419277788LL;

    t60 = (x405/(x406+(x407*x408)));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x413 = 61U;
	uint64_t x415 = 14980464461LLU;
	uint64_t x416 = 15813023635711LLU;
	volatile uint64_t t61 = 425LLU;

    t61 = (x413/(x414+(x415*x416)));

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x417 = -1;
	volatile uint8_t x418 = 28U;
	uint64_t x420 = 273LLU;
	uint64_t t62 = 8LLU;

    t62 = (x417/(x418+(x419*x420)));

    if (t62 != 2LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x421 = 803227U;
	int8_t x422 = -40;
	volatile uint32_t t63 = 15706U;

    t63 = (x421/(x422+(x423*x424)));

    if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x425 = UINT32_MAX;
	int32_t x426 = INT32_MIN;
	int16_t x428 = 96;
	volatile uint64_t t64 = 117823LLU;

    t64 = (x425/(x426+(x427*x428)));

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x429 = -326;
	int32_t x430 = -1;
	int16_t x431 = -239;
	int32_t t65 = -10;

    t65 = (x429/(x430+(x431*x432)));

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x438 = INT32_MIN;
	uint16_t x439 = 6U;
	static int64_t x440 = -1LL;
	int64_t t66 = -6LL;

    t66 = (x437/(x438+(x439*x440)));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x441 = UINT64_MAX;
	uint64_t x442 = 572545LLU;
	int32_t x443 = -1;
	volatile int16_t x444 = 15;
	uint64_t t67 = 1542LLU;

    t67 = (x441/(x442+(x443*x444)));

    if (t67 != 32219698659824LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x449 = INT64_MIN;
	volatile uint16_t x450 = 590U;
	int64_t t68 = 1241LL;

    t68 = (x449/(x450+(x451*x452)));

    if (t68 != -79091667059LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x453 = 36;
	volatile uint64_t x454 = 5416163LLU;
	static uint64_t x455 = 1LLU;
	int8_t x456 = -1;
	uint64_t t69 = 104146712339LLU;

    t69 = (x453/(x454+(x455*x456)));

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x457 = 164U;
	static volatile int64_t x458 = -1LL;
	volatile uint32_t x459 = 23307737U;
	static int32_t x460 = INT32_MAX;
	int64_t t70 = 362328LL;

    t70 = (x457/(x458+(x459*x460)));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x461 = -1LL;
	static uint64_t x463 = 691600182LLU;
	uint64_t t71 = 231055905043983LLU;

    t71 = (x461/(x462+(x463*x464)));

    if (t71 != 286801674LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x465 = -1;
	static volatile int32_t x466 = -6;
	uint32_t x467 = 442U;
	uint32_t t72 = 7527U;

    t72 = (x465/(x466+(x467*x468)));

    if (t72 != 1U) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x477 = INT64_MIN;
	volatile int64_t x478 = INT64_MAX;
	int16_t x480 = 0;
	volatile int64_t t73 = -51LL;

    t73 = (x477/(x478+(x479*x480)));

    if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x481 = UINT32_MAX;
	int16_t x483 = INT16_MAX;
	uint32_t x484 = 417857U;
	uint32_t t74 = 14097U;

    t74 = (x481/(x482+(x483*x484)));

    if (t74 != 5U) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x486 = 1U;
	int8_t x487 = INT8_MAX;
	static uint32_t x488 = UINT32_MAX;
	static uint64_t t75 = 163806638935LLU;

    t75 = (x485/(x486+(x487*x488)));

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x493 = 264;
	volatile int16_t x494 = 1;
	uint16_t x495 = UINT16_MAX;
	volatile int32_t t76 = -2204;

    t76 = (x493/(x494+(x495*x496)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x497 = 16;
	volatile uint32_t x498 = 423838448U;
	uint64_t x500 = 2926LLU;

    t77 = (x497/(x498+(x499*x500)));

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x509 = 156022;
	volatile uint16_t x510 = 10U;
	int16_t x511 = INT16_MIN;
	volatile int32_t t78 = 112707;

    t78 = (x509/(x510+(x511*x512)));

    if (t78 != 4) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x517 = INT64_MIN;
	static int8_t x518 = INT8_MAX;
	int16_t x519 = INT16_MIN;
	volatile int64_t x520 = 31978018619997LL;
	int64_t t79 = 624142549195LL;

    t79 = (x517/(x518+(x519*x520)));

    if (t79 != 8LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x529 = -1;
	volatile uint8_t x531 = 3U;
	volatile int16_t x532 = INT16_MIN;
	volatile int32_t t80 = 13606;

    t80 = (x529/(x530+(x531*x532)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x533 = -1;
	int8_t x534 = INT8_MIN;
	int8_t x535 = INT8_MAX;
	int64_t x536 = -1LL;

    t81 = (x533/(x534+(x535*x536)));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x542 = -6;
	int64_t x543 = -1LL;
	int16_t x544 = INT16_MIN;
	static volatile int64_t t82 = -1848LL;

    t82 = (x541/(x542+(x543*x544)));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int8_t x553 = 0;
	uint32_t x554 = 220753U;
	int32_t x555 = -5632;
	uint32_t t83 = 1214849299U;

    t83 = (x553/(x554+(x555*x556)));

    if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x561 = INT16_MIN;
	volatile int32_t x563 = -95;
	static uint8_t x564 = 31U;
	volatile int64_t t84 = 537730675367179LL;

    t84 = (x561/(x562+(x563*x564)));

    if (t84 != 5LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x565 = -1;
	int16_t x567 = INT16_MIN;
	uint8_t x568 = 51U;

    t85 = (x565/(x566+(x567*x568)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint8_t x569 = 3U;
	uint64_t x570 = 75178774139356168LLU;
	int32_t x571 = -1;
	int64_t x572 = -8148933313LL;
	volatile uint64_t t86 = 159340038831780953LLU;

    t86 = (x569/(x570+(x571*x572)));

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x573 = INT32_MIN;
	static volatile int8_t x574 = -1;
	int16_t x576 = INT16_MIN;
	uint64_t t87 = 62078LLU;

    t87 = (x573/(x574+(x575*x576)));

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x577 = INT32_MIN;
	int8_t x578 = INT8_MAX;
	static volatile int8_t x579 = INT8_MIN;

    t88 = (x577/(x578+(x579*x580)));

    if (t88 != -671298LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x589 = -19;
	int16_t x590 = INT16_MIN;
	int32_t x592 = 0;
	static volatile uint32_t t89 = 26895U;

    t89 = (x589/(x590+(x591*x592)));

    if (t89 != 1U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x593 = 30U;
	volatile int8_t x594 = -7;
	static int8_t x595 = INT8_MAX;
	int8_t x596 = INT8_MIN;
	int32_t t90 = -717;

    t90 = (x593/(x594+(x595*x596)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x597 = INT64_MAX;
	int64_t x599 = -1LL;
	volatile int64_t t91 = -280787678137LL;

    t91 = (x597/(x598+(x599*x600)));

    if (t91 != -72624976668147841LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x601 = INT16_MIN;
	int16_t x602 = INT16_MAX;
	uint16_t x603 = UINT16_MAX;
	volatile int32_t x604 = -1;
	volatile int32_t t92 = 1562;

    t92 = (x601/(x602+(x603*x604)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x611 = 1;
	volatile uint8_t x612 = 1U;
	int32_t t93 = -5;

    t93 = (x609/(x610+(x611*x612)));

    if (t93 != -65536) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t t94 = 108678968747611LLU;

    t94 = (x613/(x614+(x615*x616)));

    if (t94 != 1057LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x617 = -2;
	uint16_t x618 = 15U;
	uint8_t x619 = UINT8_MAX;
	uint32_t x620 = UINT32_MAX;
	static uint32_t t95 = 0U;

    t95 = (x617/(x618+(x619*x620)));

    if (t95 != 1U) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x625 = INT16_MIN;
	volatile int32_t x626 = -1;
	uint32_t x627 = 110944U;
	volatile int16_t x628 = INT16_MAX;

    t96 = (x625/(x626+(x627*x628)));

    if (t96 != 1U) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x629 = 10U;
	int64_t x632 = -1LL;

    t97 = (x629/(x630+(x631*x632)));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x633 = 168935852756833LL;
	int16_t x634 = INT16_MIN;
	volatile int32_t x635 = INT32_MAX;
	static uint32_t x636 = UINT32_MAX;
	volatile int64_t t98 = -3047617265407LL;

    t98 = (x633/(x634+(x635*x636)));

    if (t98 != 78668LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x641 = -16;
	static int64_t x642 = INT64_MIN;
	int64_t x643 = -1LL;
	int8_t x644 = INT8_MIN;

    t99 = (x641/(x642+(x643*x644)));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x645 = INT16_MAX;
	uint16_t x646 = 2167U;
	uint32_t x648 = 503994U;
	volatile uint32_t t100 = 104079U;

    t100 = (x645/(x646+(x647*x648)));

    if (t100 != 0U) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint32_t x649 = 13175U;
	uint32_t x650 = UINT32_MAX;
	int8_t x651 = -3;
	int64_t t101 = 2017767LL;

    t101 = (x649/(x650+(x651*x652)));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint64_t x654 = 265366LLU;
	int16_t x656 = -1;

    t102 = (x653/(x654+(x655*x656)));

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x659 = 0;
	static int64_t x660 = INT64_MIN;
	int64_t t103 = 24146352774448LL;

    t103 = (x657/(x658+(x659*x660)));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x670 = -57855581374290480LL;
	int16_t x671 = 106;
	int32_t x672 = -6;
	int64_t t104 = 3LL;

    t104 = (x669/(x670+(x671*x672)));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x677 = INT8_MIN;
	int8_t x679 = INT8_MIN;
	int32_t t105 = 3;

    t105 = (x677/(x678+(x679*x680)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x685 = -1LL;
	static int64_t x686 = INT64_MAX;
	int8_t x688 = 1;
	int64_t t106 = -5957714540152401LL;

    t106 = (x685/(x686+(x687*x688)));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x689 = UINT8_MAX;
	int64_t x690 = INT64_MAX;
	uint8_t x691 = 17U;
	uint16_t x692 = 0U;
	volatile int64_t t107 = 4032562614925468LL;

    t107 = (x689/(x690+(x691*x692)));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x701 = -1LL;
	static int8_t x702 = INT8_MIN;
	int16_t x703 = -1;
	int8_t x704 = -5;
	int64_t t108 = 1LL;

    t108 = (x701/(x702+(x703*x704)));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int64_t x705 = INT64_MIN;
	uint64_t x706 = 90LLU;
	int32_t x707 = INT32_MIN;
	volatile uint64_t t109 = 297387391101947LLU;

    t109 = (x705/(x706+(x707*x708)));

    if (t109 != 102481911520608620LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x709 = INT8_MAX;
	int32_t x710 = -1;
	int8_t x711 = -19;
	int16_t x712 = 90;
	int32_t t110 = 2;

    t110 = (x709/(x710+(x711*x712)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x713 = -8641;
	uint16_t x714 = UINT16_MAX;
	static volatile int64_t x715 = -501932LL;
	int32_t x716 = INT32_MIN;
	volatile int64_t t111 = 79819163798704LL;

    t111 = (x713/(x714+(x715*x716)));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x725 = 235;
	uint16_t x726 = 195U;
	static volatile int8_t x727 = -1;

    t112 = (x725/(x726+(x727*x728)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x729 = INT32_MIN;
	static int64_t x730 = 5231279LL;
	int16_t x732 = -1;
	volatile int64_t t113 = 1LL;

    t113 = (x729/(x730+(x731*x732)));

    if (t113 != -410LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x737 = -1;

    t114 = (x737/(x738+(x739*x740)));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x745 = UINT16_MAX;
	volatile uint64_t x746 = 815951442689LLU;
	uint32_t x747 = UINT32_MAX;
	int32_t x748 = 416640;
	uint64_t t115 = 1382LLU;

    t115 = (x745/(x746+(x747*x748)));

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x753 = INT64_MIN;
	int32_t x754 = INT32_MIN;
	volatile int16_t x755 = INT16_MIN;
	static int16_t x756 = -6295;
	volatile int64_t t116 = 3683LL;

    t116 = (x753/(x754+(x755*x756)));

    if (t116 != 4751354243LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x761 = 2U;
	int16_t x762 = 216;
	volatile int8_t x763 = INT8_MIN;
	static int16_t x764 = -1;
	int32_t t117 = 2;

    t117 = (x761/(x762+(x763*x764)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint16_t x778 = 118U;
	uint64_t x779 = UINT64_MAX;
	volatile uint64_t t118 = 245407833236258237LLU;

    t118 = (x777/(x778+(x779*x780)));

    if (t118 != 155014656081592862LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x781 = 8782604617595LL;
	volatile uint64_t x783 = 8972276488307725924LLU;
	uint32_t x784 = 7502314U;
	static uint64_t t119 = 1990821520031818LLU;

    t119 = (x781/(x782+(x783*x784)));

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x785 = -1;
	int32_t x786 = 442937;
	volatile uint8_t x787 = UINT8_MAX;
	static uint64_t t120 = 6474956LLU;

    t120 = (x785/(x786+(x787*x788)));

    if (t120 != 41670418209255LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x789 = 7LLU;
	uint64_t x791 = UINT64_MAX;
	volatile uint16_t x792 = 0U;
	uint64_t t121 = 226937285116127318LLU;

    t121 = (x789/(x790+(x791*x792)));

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x797 = INT8_MAX;
	static int8_t x798 = -1;
	uint64_t x799 = UINT64_MAX;
	uint8_t x800 = 1U;
	volatile uint64_t t122 = 35443447134610708LLU;

    t122 = (x797/(x798+(x799*x800)));

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x801 = 2847U;
	int16_t x802 = -1;
	int32_t x803 = -1;
	int32_t x804 = INT32_MAX;
	static int32_t t123 = -5342;

    t123 = (x801/(x802+(x803*x804)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x805 = 834LLU;
	static int8_t x806 = INT8_MIN;
	volatile int16_t x807 = INT16_MAX;
	static uint64_t x808 = 1672050807473LLU;

    t124 = (x805/(x806+(x807*x808)));

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x809 = 57;
	volatile int8_t x810 = 1;
	int64_t x811 = 232009051090879LL;

    t125 = (x809/(x810+(x811*x812)));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x813 = -1;
	int8_t x814 = INT8_MAX;
	int8_t x815 = INT8_MIN;
	int8_t x816 = INT8_MIN;
	volatile int32_t t126 = -64487507;

    t126 = (x813/(x814+(x815*x816)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x817 = 6426;
	int16_t x818 = -13;
	int8_t x820 = -1;
	volatile int64_t t127 = -545LL;

    t127 = (x817/(x818+(x819*x820)));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x821 = -1;
	volatile uint16_t x822 = 174U;
	static int16_t x823 = INT16_MIN;
	static int8_t x824 = INT8_MIN;
	int32_t t128 = -379038;

    t128 = (x821/(x822+(x823*x824)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint64_t x834 = UINT64_MAX;
	int32_t x836 = 6;
	static uint64_t t129 = 190950921230884LLU;

    t129 = (x833/(x834+(x835*x836)));

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x837 = -1;
	static int8_t x839 = INT8_MIN;
	int64_t x840 = -23191727LL;

    t130 = (x837/(x838+(x839*x840)));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x845 = -1;
	uint32_t x846 = UINT32_MAX;
	static uint16_t x847 = 1U;

    t131 = (x845/(x846+(x847*x848)));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x849 = INT16_MIN;
	static volatile int64_t x850 = -1LL;
	uint32_t x851 = 16U;
	uint16_t x852 = UINT16_MAX;
	int64_t t132 = 536LL;

    t132 = (x849/(x850+(x851*x852)));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int16_t x862 = INT16_MIN;
	int8_t x863 = 1;
	int8_t x864 = INT8_MIN;
	volatile int64_t t133 = -16575419581948299LL;

    t133 = (x861/(x862+(x863*x864)));

    if (t133 != 280379743338240LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x865 = UINT16_MAX;
	static int16_t x866 = INT16_MAX;
	int8_t x868 = -18;
	volatile int32_t t134 = -184196760;

    t134 = (x865/(x866+(x867*x868)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x869 = -25308890364308LL;
	volatile int32_t x870 = INT32_MIN;
	static uint64_t x871 = UINT64_MAX;
	uint64_t t135 = 92618364585LLU;

    t135 = (x869/(x870+(x871*x872)));

    if (t135 != 0LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x873 = INT32_MIN;
	uint64_t x874 = UINT64_MAX;
	int32_t x875 = -29005483;
	uint64_t x876 = 46658996598LLU;

    t136 = (x873/(x874+(x875*x876)));

    if (t136 != 1LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint16_t x881 = UINT16_MAX;
	static volatile uint8_t x882 = 6U;
	int16_t x883 = INT16_MIN;
	int8_t x884 = -9;
	volatile int32_t t137 = 0;

    t137 = (x881/(x882+(x883*x884)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x885 = -8205184027857LL;
	static int32_t x886 = 267462;
	uint64_t x887 = UINT64_MAX;
	int8_t x888 = 30;

    t138 = (x885/(x886+(x887*x888)));

    if (t138 != 68977294671264LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x894 = INT64_MAX;
	static int16_t x895 = -117;
	static int8_t x896 = 1;
	volatile int64_t t139 = 8LL;

    t139 = (x893/(x894+(x895*x896)));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x897 = -1;
	uint32_t x898 = 3U;
	volatile int8_t x899 = 1;
	static uint16_t x900 = UINT16_MAX;
	volatile uint32_t t140 = 119985U;

    t140 = (x897/(x898+(x899*x900)));

    if (t140 != 65534U) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint8_t x905 = 4U;
	int32_t x906 = INT32_MAX;
	uint64_t x907 = 186964356184730LLU;
	int64_t x908 = INT64_MIN;
	uint64_t t141 = 1128599581830244728LLU;

    t141 = (x905/(x906+(x907*x908)));

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x909 = 279;
	static int32_t x910 = INT32_MAX;
	int64_t x911 = -116044684LL;
	int8_t x912 = -6;

    t142 = (x909/(x910+(x911*x912)));

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x917 = 1030U;
	int16_t x918 = -12;
	int8_t x919 = 9;
	static uint32_t x920 = 1619018118U;

    t143 = (x917/(x918+(x919*x920)));

    if (t143 != 0U) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x922 = INT8_MIN;
	uint8_t x923 = 0U;
	int64_t x924 = INT64_MIN;

    t144 = (x921/(x922+(x923*x924)));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x925 = 1;
	int8_t x926 = INT8_MAX;
	int16_t x927 = 122;
	uint64_t t145 = 114031894054386273LLU;

    t145 = (x925/(x926+(x927*x928)));

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint16_t x929 = 208U;
	int64_t x930 = 10224LL;
	int16_t x931 = 0;
	int16_t x932 = INT16_MIN;

    t146 = (x929/(x930+(x931*x932)));

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x933 = 156U;
	int64_t x935 = -1LL;
	int16_t x936 = -1;

    t147 = (x933/(x934+(x935*x936)));

    if (t147 != 78LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x937 = 1844899064LLU;
	uint16_t x938 = 7U;
	int8_t x939 = -1;
	volatile int64_t x940 = -445285956060646LL;

    t148 = (x937/(x938+(x939*x940)));

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x942 = 2762;
	int32_t x943 = 32;
	static volatile int16_t x944 = INT16_MAX;
	volatile int64_t t149 = -1LL;

    t149 = (x941/(x942+(x943*x944)));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x945 = INT32_MIN;
	static uint8_t x946 = 1U;
	int16_t x947 = 5;
	volatile int16_t x948 = INT16_MAX;
	int32_t t150 = -139523509;

    t150 = (x945/(x946+(x947*x948)));

    if (t150 != -13107) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x949 = INT64_MIN;
	int32_t x950 = INT32_MAX;
	static volatile int8_t x951 = INT8_MAX;
	int16_t x952 = -1;
	volatile int64_t t151 = -803989LL;

    t151 = (x949/(x950+(x951*x952)));

    if (t151 != -4294967552LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x953 = 0U;
	volatile int16_t x954 = INT16_MAX;
	int8_t x955 = INT8_MIN;
	int16_t x956 = INT16_MAX;
	volatile int32_t t152 = 81;

    t152 = (x953/(x954+(x955*x956)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint8_t x957 = 1U;
	int32_t x958 = -11;
	int64_t x959 = -1009801LL;
	int64_t x960 = -1LL;

    t153 = (x957/(x958+(x959*x960)));

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x969 = -1;
	static uint16_t x970 = 23409U;
	int16_t x971 = -1;
	static uint64_t t154 = 527442927887454849LLU;

    t154 = (x969/(x970+(x971*x972)));

    if (t154 != 1LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x973 = INT16_MIN;
	static uint8_t x976 = 31U;
	volatile uint32_t t155 = 5087257U;

    t155 = (x973/(x974+(x975*x976)));

    if (t155 != 0U) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x985 = INT8_MIN;
	uint8_t x986 = UINT8_MAX;
	int16_t x987 = 0;
	int32_t t156 = 24302493;

    t156 = (x985/(x986+(x987*x988)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x994 = INT8_MIN;
	volatile int16_t x995 = INT16_MAX;
	int16_t x996 = INT16_MIN;
	static volatile int32_t t157 = -219584;

    t157 = (x993/(x994+(x995*x996)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x997 = INT64_MIN;
	int64_t x998 = -20310040LL;
	uint64_t x999 = 2083LLU;
	uint64_t x1000 = 13378980829722LLU;
	volatile uint64_t t158 = 47926LLU;

    t158 = (x997/(x998+(x999*x1000)));

    if (t158 != 330LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x1005 = 1502U;
	volatile uint64_t x1007 = UINT64_MAX;
	uint16_t x1008 = UINT16_MAX;
	static volatile uint64_t t159 = 325440114LLU;

    t159 = (x1005/(x1006+(x1007*x1008)));

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int16_t x1009 = -1;
	uint16_t x1010 = UINT16_MAX;
	uint32_t x1011 = 68U;
	volatile int16_t x1012 = -513;
	uint32_t t160 = 13U;

    t160 = (x1009/(x1010+(x1011*x1012)));

    if (t160 != 140124U) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint32_t x1013 = 5016529U;
	volatile int32_t x1014 = INT32_MIN;
	int8_t x1015 = INT8_MAX;
	static int16_t x1016 = 1;
	static uint32_t t161 = 5956332U;

    t161 = (x1013/(x1014+(x1015*x1016)));

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x1017 = INT16_MAX;
	volatile int8_t x1018 = INT8_MIN;
	static int8_t x1019 = INT8_MAX;
	volatile int32_t t162 = -252583;

    t162 = (x1017/(x1018+(x1019*x1020)));

    if (t162 != -1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x1021 = INT16_MAX;
	int8_t x1022 = 17;
	uint32_t x1023 = 27706786U;
	int16_t x1024 = INT16_MAX;
	uint32_t t163 = 1452933743U;

    t163 = (x1021/(x1022+(x1023*x1024)));

    if (t163 != 0U) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x1025 = INT32_MIN;
	volatile int64_t x1026 = INT64_MIN;
	uint8_t x1027 = UINT8_MAX;
	static int16_t x1028 = 15;
	static int64_t t164 = -3LL;

    t164 = (x1025/(x1026+(x1027*x1028)));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x1029 = UINT32_MAX;
	volatile int32_t x1030 = INT32_MIN;
	int64_t x1032 = -1LL;
	static int64_t t165 = -23283858LL;

    t165 = (x1029/(x1030+(x1031*x1032)));

    if (t165 != -1LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x1033 = INT64_MIN;
	uint64_t x1034 = UINT64_MAX;
	volatile int8_t x1035 = -1;
	uint8_t x1036 = 14U;
	uint64_t t166 = 770064LLU;

    t166 = (x1033/(x1034+(x1035*x1036)));

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x1037 = INT64_MAX;
	static volatile int8_t x1038 = INT8_MIN;
	int8_t x1039 = 7;
	int32_t x1040 = -1;
	int64_t t167 = -3LL;

    t167 = (x1037/(x1038+(x1039*x1040)));

    if (t167 != -68321274347072413LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x1041 = 705422842237LL;
	volatile int64_t x1042 = -1LL;
	uint64_t x1043 = 4925951047795LLU;
	static volatile uint64_t t168 = 58802LLU;

    t168 = (x1041/(x1042+(x1043*x1044)));

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x1045 = INT32_MAX;
	volatile int16_t x1047 = 124;
	uint8_t x1048 = 1U;
	static volatile int32_t t169 = -3;

    t169 = (x1045/(x1046+(x1047*x1048)));

    if (t169 != 17459216) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x1050 = -1LL;
	uint32_t x1051 = 3U;
	int64_t x1052 = -1LL;
	volatile int64_t t170 = -32090759574880013LL;

    t170 = (x1049/(x1050+(x1051*x1052)));

    if (t170 != -7LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x1053 = INT8_MIN;
	static uint32_t x1054 = 157376U;
	static volatile uint64_t x1055 = 2237062242312LLU;
	int16_t x1056 = 0;
	volatile uint64_t t171 = 16216937221048772LLU;

    t171 = (x1053/(x1054+(x1055*x1056)));

    if (t171 != 117214467731480LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x1057 = INT16_MIN;
	static volatile uint16_t x1059 = 0U;
	static uint16_t x1060 = UINT16_MAX;
	static volatile int32_t t172 = -177032842;

    t172 = (x1057/(x1058+(x1059*x1060)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x1061 = INT64_MIN;
	static int8_t x1062 = INT8_MIN;
	int8_t x1063 = INT8_MAX;
	int64_t t173 = 94LL;

    t173 = (x1061/(x1062+(x1063*x1064)));

    if (t173 != -1108203152472LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x1065 = -10;
	uint64_t x1066 = 39961291680063LLU;
	static volatile int8_t x1068 = INT8_MIN;
	uint64_t t174 = 1538LLU;

    t174 = (x1065/(x1066+(x1067*x1068)));

    if (t174 != 461615LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile uint16_t x1069 = UINT16_MAX;
	volatile uint64_t x1070 = UINT64_MAX;
	volatile int64_t x1071 = -434460LL;
	int8_t x1072 = INT8_MAX;
	uint64_t t175 = 6173837LLU;

    t175 = (x1069/(x1070+(x1071*x1072)));

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint64_t x1073 = 6543248494124161LLU;
	volatile int8_t x1075 = -1;
	uint8_t x1076 = 29U;
	volatile uint64_t t176 = 55185238868LLU;

    t176 = (x1073/(x1074+(x1075*x1076)));

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x1082 = INT16_MIN;
	int32_t x1084 = -1;
	int32_t t177 = -1101;

    t177 = (x1081/(x1082+(x1083*x1084)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint64_t x1085 = 25006946393LLU;
	uint16_t x1086 = UINT16_MAX;
	uint16_t x1087 = UINT16_MAX;
	uint16_t x1088 = 1U;
	static uint64_t t178 = 1859LLU;

    t178 = (x1085/(x1086+(x1087*x1088)));

    if (t178 != 190790LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x1089 = -1;
	volatile int8_t x1090 = INT8_MIN;
	int32_t x1092 = -1;

    t179 = (x1089/(x1090+(x1091*x1092)));

    if (t179 != 1U) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint8_t x1097 = 10U;
	int64_t x1098 = INT64_MAX;
	int16_t x1099 = -1;
	uint64_t x1100 = UINT64_MAX;
	volatile uint64_t t180 = 1210267234LLU;

    t180 = (x1097/(x1098+(x1099*x1100)));

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint32_t x1101 = 163856513U;
	volatile int8_t x1102 = INT8_MAX;
	volatile int8_t x1104 = INT8_MAX;
	int64_t t181 = 55283026946516253LL;

    t181 = (x1101/(x1102+(x1103*x1104)));

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x1105 = 704;
	uint32_t x1106 = 65249303U;
	volatile int64_t t182 = 79839890721LL;

    t182 = (x1105/(x1106+(x1107*x1108)));

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x1109 = UINT8_MAX;
	uint8_t x1110 = 4U;
	uint8_t x1111 = 122U;
	static int16_t x1112 = INT16_MIN;
	int32_t t183 = -1544923;

    t183 = (x1109/(x1110+(x1111*x1112)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint64_t x1113 = UINT64_MAX;
	int64_t x1114 = INT64_MIN;
	static volatile int8_t x1115 = INT8_MIN;
	volatile int32_t x1116 = -1;
	uint64_t t184 = 9621304998891LLU;

    t184 = (x1113/(x1114+(x1115*x1116)));

    if (t184 != 1LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x1118 = INT64_MIN;
	volatile int8_t x1120 = INT8_MIN;
	static volatile int64_t t185 = -175629671969LL;

    t185 = (x1117/(x1118+(x1119*x1120)));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint64_t x1121 = 5137217285360941LLU;
	volatile int16_t x1123 = 148;
	static volatile int16_t x1124 = 13;
	volatile uint64_t t186 = 5780106760703086LLU;

    t186 = (x1121/(x1122+(x1123*x1124)));

    if (t186 != 5941742LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1125 = INT8_MAX;
	uint32_t x1126 = 3729U;
	volatile int16_t x1127 = INT16_MIN;
	uint32_t x1128 = UINT32_MAX;
	static volatile uint32_t t187 = 2U;

    t187 = (x1125/(x1126+(x1127*x1128)));

    if (t187 != 0U) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1130 = 1;
	uint8_t x1132 = 3U;

    t188 = (x1129/(x1130+(x1131*x1132)));

    if (t188 != 2LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x1134 = 1413065205103LLU;
	int8_t x1135 = INT8_MIN;
	int64_t x1136 = -96764LL;
	uint64_t t189 = 14183LLU;

    t189 = (x1133/(x1134+(x1135*x1136)));

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x1137 = INT8_MIN;
	static int64_t x1139 = 15LL;
	int64_t t190 = -1923026135326594LL;

    t190 = (x1137/(x1138+(x1139*x1140)));

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x1141 = 1580;
	static int32_t x1142 = -1;
	static volatile uint8_t x1143 = 27U;
	uint8_t x1144 = 34U;
	int32_t t191 = -30647683;

    t191 = (x1141/(x1142+(x1143*x1144)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x1146 = INT32_MAX;
	uint32_t x1148 = 3511565U;
	static volatile int64_t t192 = -2118396951LL;

    t192 = (x1145/(x1146+(x1147*x1148)));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x1149 = 0;
	int8_t x1150 = 15;
	volatile uint8_t x1151 = 3U;
	int64_t x1152 = -1LL;
	int64_t t193 = -8102345754695LL;

    t193 = (x1149/(x1150+(x1151*x1152)));

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint8_t x1153 = UINT8_MAX;
	static uint64_t x1154 = 992LLU;
	uint64_t x1155 = UINT64_MAX;
	int64_t x1156 = INT64_MIN;
	volatile uint64_t t194 = 15LLU;

    t194 = (x1153/(x1154+(x1155*x1156)));

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x1162 = -1;
	uint16_t x1163 = 90U;
	uint16_t x1164 = 2706U;

    t195 = (x1161/(x1162+(x1163*x1164)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int16_t x1166 = -1;
	int8_t x1167 = -1;
	int64_t x1168 = -129893270LL;

    t196 = (x1165/(x1166+(x1167*x1168)));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1169 = -1;
	int16_t x1170 = INT16_MAX;
	uint32_t x1171 = UINT32_MAX;
	uint16_t x1172 = 45U;
	volatile uint32_t t197 = 0U;

    t197 = (x1169/(x1170+(x1171*x1172)));

    if (t197 != 131256U) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1173 = 6425070;
	int64_t x1176 = 6702907689450LL;
	volatile int64_t t198 = 92378LL;

    t198 = (x1173/(x1174+(x1175*x1176)));

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1177 = INT16_MIN;
	uint64_t x1179 = 107LLU;
	volatile uint8_t x1180 = 16U;
	volatile uint64_t t199 = 11985971053787LLU;

    t199 = (x1177/(x1178+(x1179*x1180)));

    if (t199 != 10781264800531571LLU) { NG(); } else { ; }
	
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


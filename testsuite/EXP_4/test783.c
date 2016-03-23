
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

static int32_t x1 = INT32_MAX;
int8_t x2 = -1;
volatile uint8_t x5 = 0U;
uint16_t x8 = 136U;
uint64_t x12 = UINT64_MAX;
static uint8_t x15 = 1U;
uint16_t x22 = UINT16_MAX;
volatile int8_t x23 = INT8_MAX;
static int8_t x24 = INT8_MIN;
int32_t x27 = 485142;
int64_t x29 = 4981757397032588LL;
static int64_t t7 = 5672122488LL;
uint16_t x33 = 7278U;
uint32_t x34 = 7500U;
int32_t t11 = 2462;
int64_t x51 = INT64_MIN;
int8_t x52 = INT8_MIN;
static int64_t t12 = -1701263806682LL;
int32_t x55 = INT32_MAX;
static volatile int64_t t13 = -114529963LL;
int64_t x57 = 229611112LL;
volatile int32_t x60 = INT32_MAX;
volatile uint8_t x63 = UINT8_MAX;
int64_t x66 = INT64_MIN;
int8_t x67 = 1;
int64_t t18 = 31480LL;
static int8_t x77 = INT8_MAX;
uint64_t x83 = 808772733691852LLU;
static uint16_t x86 = 33U;
static uint16_t x87 = 26880U;
volatile uint32_t t21 = UINT32_MAX;
volatile int64_t x94 = INT64_MAX;
volatile int64_t t23 = INT64_MAX;
int32_t x97 = -646;
int16_t x100 = INT16_MAX;
int64_t x108 = 15675811LL;
int16_t x113 = INT16_MIN;
volatile int64_t t29 = 34306438236221LL;
static int64_t x127 = 21488993490LL;
int8_t x130 = -15;
int64_t x137 = -1LL;
int8_t x143 = INT8_MIN;
int8_t x147 = 6;
uint64_t x150 = 177200451236152LLU;
volatile uint64_t t37 = 807419879845705LLU;
int64_t t38 = 26408420895LL;
volatile int8_t x162 = INT8_MIN;
volatile uint32_t x164 = UINT32_MAX;
int16_t x176 = INT16_MIN;
volatile uint64_t t43 = 54564771284545LLU;
volatile int16_t x179 = 13;
volatile int64_t x181 = INT64_MIN;
int32_t x192 = INT32_MAX;
uint32_t x196 = UINT32_MAX;
int64_t t48 = -448000659LL;
static uint16_t x197 = 583U;
uint32_t x198 = 484809028U;
uint8_t x202 = 7U;
int16_t x203 = INT16_MIN;
int32_t x208 = INT32_MIN;
uint16_t x209 = 124U;
static int64_t x214 = INT64_MAX;
int8_t x218 = -17;
uint8_t x224 = UINT8_MAX;
int32_t x228 = INT32_MIN;
int64_t x230 = -1LL;
volatile int32_t x231 = INT32_MAX;
volatile int16_t x251 = INT16_MAX;
static int64_t t62 = -4485LL;
uint32_t t63 = UINT32_MAX;
volatile uint16_t x258 = 980U;
int64_t t65 = 2965462154155276832LL;
int16_t x268 = -1;
int32_t x269 = INT32_MIN;
int8_t x275 = INT8_MIN;
static volatile int64_t t68 = 78361009518068LL;
int64_t x291 = INT64_MIN;
static int16_t x296 = -56;
static uint64_t x303 = UINT64_MAX;
uint8_t x308 = UINT8_MAX;
int32_t t75 = -31548739;
int64_t x309 = INT64_MAX;
uint8_t x311 = UINT8_MAX;
int64_t x313 = INT64_MIN;
static volatile int64_t x317 = INT64_MIN;
int8_t x321 = INT8_MAX;
uint8_t x323 = UINT8_MAX;
int8_t x324 = INT8_MAX;
int16_t x339 = INT16_MAX;
volatile int16_t x346 = -1;
int8_t x350 = INT8_MIN;
int64_t x359 = INT64_MIN;
static uint16_t x361 = UINT16_MAX;
uint32_t x376 = UINT32_MAX;
volatile int64_t t93 = -7236421653449LL;
int32_t x382 = INT32_MIN;
uint8_t x384 = 1U;
int32_t x385 = -1;
int64_t t95 = -115LL;
int64_t x393 = INT64_MIN;
int8_t x399 = INT8_MIN;
int8_t x401 = INT8_MIN;
uint8_t x405 = 2U;
uint16_t x411 = UINT16_MAX;
int32_t x414 = -1;
volatile int32_t x415 = -686826;
int32_t x417 = INT32_MAX;
uint64_t x419 = UINT64_MAX;
int32_t x423 = INT32_MIN;
uint32_t x426 = 601U;
int16_t x428 = INT16_MIN;
static uint32_t x433 = 3861U;
int64_t t107 = -2LL;
int64_t x437 = INT64_MIN;
uint8_t x439 = 35U;
volatile int64_t t108 = 0LL;
volatile uint64_t t109 = UINT64_MAX;
int8_t x456 = -13;
volatile int64_t t113 = 4951672LL;
int16_t x466 = INT16_MIN;
int32_t x472 = INT32_MIN;
volatile uint64_t t116 = 50773675367624LLU;
static int32_t x476 = INT32_MAX;
static volatile int64_t x483 = -1LL;
uint32_t x484 = 1137474U;
volatile int32_t t120 = 276;
int8_t x494 = -32;
volatile int32_t x497 = INT32_MAX;
volatile int64_t x509 = -1LL;
int16_t x521 = 1037;
int8_t x522 = INT8_MIN;
volatile int16_t x528 = -1;
volatile int32_t x530 = -1;
volatile int64_t t130 = -143LL;
int32_t x534 = -1;
volatile int8_t x564 = INT8_MAX;
volatile int64_t t137 = -221532997324LL;
uint8_t x570 = 0U;
int8_t x572 = INT8_MAX;
static uint32_t x579 = UINT32_MAX;
uint8_t x588 = UINT8_MAX;
uint8_t x589 = 0U;
int32_t x593 = 2;
int32_t t145 = 790820436;
int64_t x603 = INT64_MIN;
int32_t x606 = -1;
int16_t x617 = INT16_MAX;
uint32_t x620 = 318444781U;
uint32_t x626 = UINT32_MAX;
uint16_t x627 = 8U;
uint32_t t152 = UINT32_MAX;
int64_t t154 = -638293LL;
uint64_t x642 = 49LLU;
int16_t x651 = INT16_MIN;
int64_t x656 = 13592LL;
uint32_t x664 = 180590U;
uint32_t t162 = 11267029U;
int16_t x669 = INT16_MIN;
int16_t x675 = INT16_MIN;
volatile int64_t x685 = -1LL;
int64_t t166 = -10785555266LL;
static int8_t x690 = INT8_MAX;
int32_t x694 = INT32_MAX;
uint8_t x699 = 0U;
uint16_t x701 = 4U;
int32_t x702 = INT32_MIN;
int8_t x705 = INT8_MIN;
int16_t x707 = INT16_MIN;
int32_t t171 = -695072516;
uint16_t x724 = UINT16_MAX;
volatile uint16_t x726 = 1U;
static int64_t x735 = INT64_MIN;
int64_t x736 = -345631797LL;
int64_t t178 = 5204287248180727LL;
static volatile int16_t x738 = INT16_MAX;
static int32_t x741 = INT32_MIN;
static int64_t x742 = INT64_MIN;
int64_t x749 = INT64_MAX;
volatile int8_t x751 = 15;
int64_t x760 = INT64_MIN;
static int64_t t183 = 593159LL;
int16_t x761 = INT16_MIN;
int8_t x763 = -1;
int8_t x765 = INT8_MAX;
static uint16_t x768 = 1893U;
uint8_t x771 = 38U;
static int8_t x772 = -28;
uint8_t x774 = UINT8_MAX;
int8_t x794 = INT8_MAX;
int64_t x797 = -1982LL;
volatile int8_t x807 = INT8_MAX;
int32_t x812 = INT32_MIN;
static volatile int32_t x813 = INT32_MAX;
uint8_t x816 = 60U;
static volatile int8_t x817 = -3;
int32_t x821 = -7;
uint16_t x824 = 228U;


void f0(void) {
    	static int64_t x3 = INT64_MIN;
	int32_t x4 = INT32_MIN;
	volatile int64_t t0 = -97481LL;

    t0 = (x1|(x2^(x3/x4)));

    if (t0 != -4294967297LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x6 = 0;
	uint64_t x7 = UINT64_MAX;
	uint64_t t1 = 11678428502LLU;

    t1 = (x5|(x6^(x7/x8)));

    if (t1 != 135637824071393761LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int8_t x9 = INT8_MAX;
	static int16_t x10 = INT16_MAX;
	volatile int16_t x11 = 6;
	uint64_t t2 = 4305077908154068LLU;

    t2 = (x9|(x10^(x11/x12)));

    if (t2 != 32767LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = -1LL;
	int32_t x14 = INT32_MIN;
	int16_t x16 = 220;
	int64_t t3 = 65555669989970899LL;

    t3 = (x13|(x14^(x15/x16)));

    if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MIN;
	uint8_t x18 = UINT8_MAX;
	uint64_t x19 = 80LLU;
	volatile int64_t x20 = INT64_MAX;
	uint64_t t4 = UINT64_MAX;

    t4 = (x17|(x18^(x19/x20)));

    if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x21 = 0;
	static volatile int32_t t5 = 23737;

    t5 = (x21|(x22^(x23/x24)));

    if (t5 != 65535) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MAX;
	volatile int16_t x26 = 1;
	uint8_t x28 = 16U;
	int32_t t6 = INT32_MAX;

    t6 = (x25|(x26^(x27/x28)));

    if (t6 != INT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x30 = -1;
	int32_t x31 = 11185;
	int16_t x32 = INT16_MIN;

    t7 = (x29|(x30^(x31/x32)));

    if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int16_t x35 = -1;
	volatile int64_t x36 = INT64_MAX;
	volatile int64_t t8 = 75890483314983045LL;

    t8 = (x33|(x34^(x35/x36)));

    if (t8 != 7534LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MIN;
	int16_t x38 = INT16_MIN;
	int16_t x39 = 599;
	int32_t x40 = INT32_MIN;
	int32_t t9 = -1;

    t9 = (x37|(x38^(x39/x40)));

    if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MIN;
	static int32_t x42 = -83;
	int64_t x43 = 1432260616LL;
	int32_t x44 = INT32_MAX;
	static volatile int64_t t10 = 1290692039404570LL;

    t10 = (x41|(x42^(x43/x44)));

    if (t10 != -83LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x45 = INT32_MIN;
	volatile int8_t x46 = INT8_MAX;
	volatile uint8_t x47 = 23U;
	int8_t x48 = -2;

    t11 = (x45|(x46^(x47/x48)));

    if (t11 != -118) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint32_t x49 = UINT32_MAX;
	uint16_t x50 = 19304U;

    t12 = (x49|(x50^(x51/x52)));

    if (t12 != 72057598332895231LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x53 = 8U;
	int64_t x54 = -1LL;
	static int32_t x56 = -30738699;

    t13 = (x53|(x54^(x55/x56)));

    if (t13 != 76LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x58 = -1;
	int8_t x59 = -1;
	volatile int64_t t14 = 29609459041221LL;

    t14 = (x57|(x58^(x59/x60)));

    if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x61 = -1;
	volatile int32_t x62 = INT32_MIN;
	int8_t x64 = INT8_MIN;
	static int32_t t15 = -169;

    t15 = (x61|(x62^(x63/x64)));

    if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x65 = 7887439LLU;
	static int64_t x68 = INT64_MAX;
	volatile uint64_t t16 = 2264990449LLU;

    t16 = (x65|(x66^(x67/x68)));

    if (t16 != 9223372036862663247LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = 10;
	uint8_t x70 = 106U;
	static int8_t x71 = INT8_MIN;
	volatile uint8_t x72 = 2U;
	int32_t t17 = -1;

    t17 = (x69|(x70^(x71/x72)));

    if (t17 != -86) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = INT8_MIN;
	int64_t x74 = INT64_MIN;
	static uint16_t x75 = 4064U;
	int16_t x76 = INT16_MAX;

    t18 = (x73|(x74^(x75/x76)));

    if (t18 != -128LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x78 = 35471080533604427LLU;
	volatile int32_t x79 = INT32_MIN;
	uint32_t x80 = 1482127200U;
	uint64_t t19 = 52531250LLU;

    t19 = (x77|(x78^(x79/x80)));

    if (t19 != 35471080533604479LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x81 = 96;
	volatile uint32_t x82 = UINT32_MAX;
	int8_t x84 = INT8_MAX;
	static uint64_t t20 = 2016151814465LLU;

    t20 = (x81|(x82^(x83/x84)));

    if (t20 != 6366288791035LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x85 = UINT32_MAX;
	uint32_t x88 = UINT32_MAX;

    t21 = (x85|(x86^(x87/x88)));

    if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = -6150;
	volatile int8_t x90 = INT8_MAX;
	volatile int64_t x91 = INT64_MAX;
	static uint64_t x92 = 79807205249997748LLU;
	uint64_t t22 = 5554761LLU;

    t22 = (x89|(x90^(x91/x92)));

    if (t22 != 18446744073709545470LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x93 = 243571U;
	uint16_t x95 = 148U;
	int16_t x96 = INT16_MAX;

    t23 = (x93|(x94^(x95/x96)));

    if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x98 = 2U;
	static uint32_t x99 = UINT32_MAX;
	uint32_t t24 = 27U;

    t24 = (x97|(x98^(x99/x100)));

    if (t24 != 4294966654U) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x101 = INT32_MAX;
	int64_t x102 = -22LL;
	int8_t x103 = -1;
	static int16_t x104 = 110;
	volatile int64_t t25 = -1LL;

    t25 = (x101|(x102^(x103/x104)));

    if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = 276971078LL;
	uint8_t x106 = 22U;
	uint8_t x107 = UINT8_MAX;
	volatile int64_t t26 = -859815916769431920LL;

    t26 = (x105|(x106^(x107/x108)));

    if (t26 != 276971094LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = -2984301284249754639LL;
	uint32_t x110 = 50U;
	int32_t x111 = -1;
	int32_t x112 = INT32_MIN;
	int64_t t27 = -114524236LL;

    t27 = (x109|(x110^(x111/x112)));

    if (t27 != -2984301284249754637LL) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint32_t x114 = 1738U;
	int8_t x115 = INT8_MIN;
	uint64_t x116 = 697204769093LLU;
	volatile uint64_t t28 = 118609901LLU;

    t28 = (x113|(x114^(x115/x116)));

    if (t28 != 18446744073709534933LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x117 = INT16_MIN;
	volatile int16_t x118 = -143;
	int64_t x119 = INT64_MIN;
	static int8_t x120 = -43;

    t29 = (x117|(x118^(x119/x120)));

    if (t29 != -15885LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x121 = UINT8_MAX;
	uint8_t x122 = 19U;
	volatile int16_t x123 = INT16_MAX;
	volatile int32_t x124 = 1;
	int32_t t30 = 24;

    t30 = (x121|(x122^(x123/x124)));

    if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x125 = 3U;
	static volatile int8_t x126 = INT8_MIN;
	int32_t x128 = INT32_MIN;
	volatile int64_t t31 = 182829816LL;

    t31 = (x125|(x126^(x127/x128)));

    if (t31 != 119LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x129 = 59U;
	int16_t x131 = INT16_MAX;
	volatile int64_t x132 = 407221LL;
	static volatile int64_t t32 = 66157LL;

    t32 = (x129|(x130^(x131/x132)));

    if (t32 != -5LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = INT8_MIN;
	volatile int32_t x134 = -82;
	int8_t x135 = INT8_MAX;
	int8_t x136 = 59;
	int32_t t33 = -79;

    t33 = (x133|(x134^(x135/x136)));

    if (t33 != -84) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x138 = -1;
	int16_t x139 = -3990;
	uint32_t x140 = UINT32_MAX;
	int64_t t34 = 826838616121408323LL;

    t34 = (x137|(x138^(x139/x140)));

    if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x141 = 140942LL;
	static int64_t x142 = 11430648124873LL;
	int16_t x144 = INT16_MIN;
	int64_t t35 = -1428122LL;

    t35 = (x141|(x142^(x143/x144)));

    if (t35 != 11430648264655LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x145 = 1U;
	uint32_t x146 = 232730306U;
	int32_t x148 = 57500;
	uint32_t t36 = 418U;

    t36 = (x145|(x146^(x147/x148)));

    if (t36 != 232730307U) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = INT32_MIN;
	int16_t x151 = -1;
	uint16_t x152 = UINT16_MAX;

    t37 = (x149|(x150^(x151/x152)));

    if (t37 != 18446744072400089400LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = 1;
	int8_t x154 = -1;
	int32_t x155 = -1;
	volatile int64_t x156 = 26791437187946LL;

    t38 = (x153|(x154^(x155/x156)));

    if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint16_t x157 = 2U;
	int16_t x158 = -1;
	uint64_t x159 = UINT64_MAX;
	static int16_t x160 = -29;
	uint64_t t39 = 7829LLU;

    t39 = (x157|(x158^(x159/x160)));

    if (t39 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint8_t x161 = UINT8_MAX;
	int64_t x163 = -2089396LL;
	static int64_t t40 = 2651389LL;

    t40 = (x161|(x162^(x163/x164)));

    if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x165 = UINT8_MAX;
	static int32_t x166 = INT32_MIN;
	int64_t x167 = INT64_MIN;
	int64_t x168 = INT64_MAX;
	int64_t t41 = -4638941928731446LL;

    t41 = (x165|(x166^(x167/x168)));

    if (t41 != 2147483647LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = INT16_MAX;
	static volatile int32_t x170 = 680008502;
	int16_t x171 = 0;
	static uint32_t x172 = 10183693U;
	uint32_t t42 = 514761U;

    t42 = (x169|(x170^(x171/x172)));

    if (t42 != 680034303U) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x173 = INT8_MAX;
	int32_t x174 = INT32_MIN;
	volatile uint64_t x175 = 3303543533LLU;

    t43 = (x173|(x174^(x175/x176)));

    if (t43 != 18446744071562068095LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x177 = 10423U;
	volatile uint8_t x178 = UINT8_MAX;
	int64_t x180 = INT64_MIN;
	static int64_t t44 = -154857182588651LL;

    t44 = (x177|(x178^(x179/x180)));

    if (t44 != 10495LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x182 = -28429519;
	int16_t x183 = -1;
	int32_t x184 = -87900931;
	volatile int64_t t45 = -63878LL;

    t45 = (x181|(x182^(x183/x184)));

    if (t45 != -28429519LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x185 = INT8_MAX;
	volatile int32_t x186 = INT32_MIN;
	int64_t x187 = INT64_MAX;
	volatile int8_t x188 = INT8_MIN;
	static volatile int64_t t46 = 1631LL;

    t46 = (x185|(x186^(x187/x188)));

    if (t46 != 72057591890444415LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x189 = INT8_MAX;
	int8_t x190 = INT8_MIN;
	uint64_t x191 = 661296LLU;
	uint64_t t47 = UINT64_MAX;

    t47 = (x189|(x190^(x191/x192)));

    if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = 7470635;
	int64_t x194 = -1LL;
	int8_t x195 = INT8_MIN;

    t48 = (x193|(x194^(x195/x196)));

    if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x199 = 201575847032LLU;
	int16_t x200 = INT16_MIN;
	uint64_t t49 = 69869003555113763LLU;

    t49 = (x197|(x198^(x199/x200)));

    if (t49 != 484809543LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x201 = INT32_MIN;
	uint32_t x204 = 28U;
	volatile uint32_t t50 = 3U;

    t50 = (x201|(x202^(x203/x204)));

    if (t50 != 2300874161U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x205 = 281U;
	uint16_t x206 = 13U;
	volatile int8_t x207 = -1;
	int32_t t51 = -191240154;

    t51 = (x205|(x206^(x207/x208)));

    if (t51 != 285) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x210 = INT16_MIN;
	static uint32_t x211 = 16004853U;
	static volatile int64_t x212 = 398829593465517303LL;
	int64_t t52 = -1661004230889273238LL;

    t52 = (x209|(x210^(x211/x212)));

    if (t52 != -32644LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint64_t x213 = 4LLU;
	static volatile uint32_t x215 = 2590U;
	int16_t x216 = -29;
	volatile uint64_t t53 = 431055071LLU;

    t53 = (x213|(x214^(x215/x216)));

    if (t53 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = INT64_MIN;
	static int64_t x219 = INT64_MIN;
	uint64_t x220 = 120071944496713LLU;
	volatile uint64_t t54 = 25LLU;

    t54 = (x217|(x218^(x219/x220)));

    if (t54 != 18446744073709474784LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x221 = 56802456563739902LL;
	static uint64_t x222 = 13702389LLU;
	int16_t x223 = 6;
	volatile uint64_t t55 = 543105506325089LLU;

    t55 = (x221|(x222^(x223/x224)));

    if (t55 != 56802456563743999LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x225 = -1;
	volatile int64_t x226 = INT64_MIN;
	int64_t x227 = INT64_MIN;
	int64_t t56 = -56060293080567LL;

    t56 = (x225|(x226^(x227/x228)));

    if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = -223810208;
	int32_t x232 = 26;
	volatile int64_t t57 = 2053LL;

    t57 = (x229|(x230^(x231/x232)));

    if (t57 != -71565957LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x233 = 25345019LL;
	static volatile uint16_t x234 = 7964U;
	int64_t x235 = -1LL;
	int64_t x236 = INT64_MAX;
	static volatile int64_t t58 = -5550226LL;

    t58 = (x233|(x234^(x235/x236)));

    if (t58 != 25346047LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x237 = 91U;
	int8_t x238 = -36;
	static volatile int32_t x239 = INT32_MAX;
	static uint16_t x240 = UINT16_MAX;
	volatile int32_t t59 = -118630805;

    t59 = (x237|(x238^(x239/x240)));

    if (t59 != -32801) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x241 = -1429;
	int64_t x242 = INT64_MIN;
	uint64_t x243 = 0LLU;
	volatile uint64_t x244 = UINT64_MAX;
	static uint64_t t60 = 7045437701437982LLU;

    t60 = (x241|(x242^(x243/x244)));

    if (t60 != 18446744073709550187LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x245 = -1;
	int32_t x246 = INT32_MAX;
	uint8_t x247 = UINT8_MAX;
	int16_t x248 = INT16_MIN;
	volatile int32_t t61 = -213420684;

    t61 = (x245|(x246^(x247/x248)));

    if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = INT32_MAX;
	int16_t x250 = -1;
	int64_t x252 = 660LL;

    t62 = (x249|(x250^(x251/x252)));

    if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x253 = UINT32_MAX;
	uint8_t x254 = 20U;
	static volatile uint32_t x255 = 1039132319U;
	int8_t x256 = INT8_MIN;

    t63 = (x253|(x254^(x255/x256)));

    if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = INT32_MIN;
	static int32_t x259 = INT32_MAX;
	int64_t x260 = 28863123061859842LL;
	volatile int64_t t64 = 39343744669LL;

    t64 = (x257|(x258^(x259/x260)));

    if (t64 != -2147482668LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = 861266109;
	int64_t x262 = 454995216764101LL;
	int8_t x263 = -1;
	int16_t x264 = INT16_MIN;

    t65 = (x261|(x262^(x263/x264)));

    if (t65 != 454995805072637LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = INT8_MIN;
	static int16_t x266 = -10;
	int8_t x267 = -1;
	int32_t t66 = 579;

    t66 = (x265|(x266^(x267/x268)));

    if (t66 != -9) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x270 = -62931282655906LL;
	uint8_t x271 = UINT8_MAX;
	int8_t x272 = INT8_MAX;
	volatile int64_t t67 = -354039117595LL;

    t67 = (x269|(x270^(x271/x272)));

    if (t67 != -1421834916LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = -3;
	int64_t x274 = 128704454955602025LL;
	int32_t x276 = 1;

    t68 = (x273|(x274^(x275/x276)));

    if (t68 != -3LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x277 = 71U;
	static int32_t x278 = -1;
	int8_t x279 = -2;
	uint16_t x280 = 23U;
	static volatile uint32_t t69 = UINT32_MAX;

    t69 = (x277|(x278^(x279/x280)));

    if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x285 = 29;
	uint16_t x286 = 1U;
	int8_t x287 = 11;
	static int8_t x288 = -1;
	static volatile int32_t t70 = -18124;

    t70 = (x285|(x286^(x287/x288)));

    if (t70 != -3) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x289 = 0;
	static uint64_t x290 = UINT64_MAX;
	int64_t x292 = 14243LL;
	volatile uint64_t t71 = 4760177962LLU;

    t71 = (x289|(x290^(x291/x292)));

    if (t71 != 647572283708120LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x293 = -1;
	volatile int8_t x294 = INT8_MIN;
	int64_t x295 = INT64_MAX;
	volatile int64_t t72 = 22550763358670460LL;

    t72 = (x293|(x294^(x295/x296)));

    if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x297 = INT64_MIN;
	int8_t x298 = INT8_MIN;
	volatile int8_t x299 = -1;
	static uint8_t x300 = 1U;
	int64_t t73 = -4370086LL;

    t73 = (x297|(x298^(x299/x300)));

    if (t73 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x301 = 3572U;
	int8_t x302 = 40;
	static int16_t x304 = 1;
	static uint64_t t74 = 9230997820637193LLU;

    t74 = (x301|(x302^(x303/x304)));

    if (t74 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x305 = -1;
	int32_t x306 = -1;
	volatile int32_t x307 = INT32_MIN;

    t75 = (x305|(x306^(x307/x308)));

    if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint32_t x310 = 33013208U;
	int32_t x312 = INT32_MIN;
	int64_t t76 = INT64_MAX;

    t76 = (x309|(x310^(x311/x312)));

    if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x314 = INT8_MAX;
	uint16_t x315 = UINT16_MAX;
	volatile int64_t x316 = INT64_MIN;
	int64_t t77 = 3774LL;

    t77 = (x313|(x314^(x315/x316)));

    if (t77 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint64_t x318 = 209101104732LLU;
	uint8_t x319 = 15U;
	volatile int8_t x320 = INT8_MIN;
	volatile uint64_t t78 = 97989LLU;

    t78 = (x317|(x318^(x319/x320)));

    if (t78 != 9223372245955880540LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x322 = UINT64_MAX;
	uint64_t t79 = UINT64_MAX;

    t79 = (x321|(x322^(x323/x324)));

    if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x325 = INT16_MIN;
	volatile int64_t x326 = -1LL;
	int16_t x327 = INT16_MAX;
	static uint16_t x328 = 26639U;
	int64_t t80 = -813218368952217LL;

    t80 = (x325|(x326^(x327/x328)));

    if (t80 != -2LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x329 = INT8_MIN;
	int16_t x330 = INT16_MIN;
	volatile int16_t x331 = 3748;
	int8_t x332 = -1;
	int32_t t81 = -57;

    t81 = (x329|(x330^(x331/x332)));

    if (t81 != -36) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x333 = 30;
	int16_t x334 = -1;
	static int16_t x335 = -6141;
	uint64_t x336 = UINT64_MAX;
	uint64_t t82 = UINT64_MAX;

    t82 = (x333|(x334^(x335/x336)));

    if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint32_t x337 = UINT32_MAX;
	static int32_t x338 = -312472711;
	volatile int8_t x340 = 55;
	static volatile uint32_t t83 = UINT32_MAX;

    t83 = (x337|(x338^(x339/x340)));

    if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x341 = INT8_MIN;
	int64_t x342 = 4378011422356644LL;
	int16_t x343 = -508;
	uint32_t x344 = UINT32_MAX;
	volatile int64_t t84 = 2LL;

    t84 = (x341|(x342^(x343/x344)));

    if (t84 != -92LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x345 = -10;
	volatile int8_t x347 = INT8_MAX;
	static int16_t x348 = 35;
	static int32_t t85 = 7875826;

    t85 = (x345|(x346^(x347/x348)));

    if (t85 != -2) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x349 = UINT64_MAX;
	static uint32_t x351 = 3378593U;
	int8_t x352 = -1;
	uint64_t t86 = UINT64_MAX;

    t86 = (x349|(x350^(x351/x352)));

    if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x353 = INT16_MIN;
	uint64_t x354 = 433705LLU;
	static int8_t x355 = 0;
	volatile int32_t x356 = -9790689;
	volatile uint64_t t87 = 172306LLU;

    t87 = (x353|(x354^(x355/x356)));

    if (t87 != 18446744073709526569LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x357 = -216510571451452LL;
	uint32_t x358 = UINT32_MAX;
	static int64_t x360 = -416541959LL;
	int64_t t88 = 746670743526LL;

    t88 = (x357|(x358^(x359/x360)));

    if (t88 != -216509360312362LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x362 = 1U;
	volatile int32_t x363 = INT32_MIN;
	static uint8_t x364 = 3U;
	volatile uint32_t t89 = 434U;

    t89 = (x361|(x362^(x363/x364)));

    if (t89 != 3579183103U) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x365 = INT64_MIN;
	volatile int8_t x366 = INT8_MIN;
	uint16_t x367 = 3043U;
	uint8_t x368 = UINT8_MAX;
	int64_t t90 = 128222375809LL;

    t90 = (x365|(x366^(x367/x368)));

    if (t90 != -117LL) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint16_t x369 = UINT16_MAX;
	int64_t x370 = INT64_MAX;
	volatile int64_t x371 = 29LL;
	int16_t x372 = -1;
	int64_t t91 = -1041548LL;

    t91 = (x369|(x370^(x371/x372)));

    if (t91 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x373 = INT64_MIN;
	int8_t x374 = INT8_MAX;
	static int64_t x375 = INT64_MIN;
	static volatile int64_t t92 = 430LL;

    t92 = (x373|(x374^(x375/x376)));

    if (t92 != -2147483521LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x377 = 1U;
	static int32_t x378 = -1;
	static int64_t x379 = INT64_MIN;
	int64_t x380 = 16266928LL;

    t93 = (x377|(x378^(x379/x380)));

    if (t93 != 567001466831LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint8_t x381 = UINT8_MAX;
	uint64_t x383 = 8591549609433557LLU;
	uint64_t t94 = 1982813957344LLU;

    t94 = (x381|(x382^(x383/x384)));

    if (t94 != 18438152522172094975LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint32_t x386 = 26129U;
	int64_t x387 = INT64_MIN;
	volatile uint8_t x388 = UINT8_MAX;

    t95 = (x385|(x386^(x387/x388)));

    if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x389 = 7619368250061628813LLU;
	int64_t x390 = INT64_MIN;
	static int64_t x391 = 93LL;
	int32_t x392 = -1;
	volatile uint64_t t96 = 76696885518101LLU;

    t96 = (x389|(x390^(x391/x392)));

    if (t96 != 9223372036854775727LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x394 = INT16_MIN;
	static int64_t x395 = INT64_MAX;
	int32_t x396 = -796301572;
	int64_t t97 = -33432544352LL;

    t97 = (x393|(x394^(x395/x396)));

    if (t97 != -9223372025272036930LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x397 = -1;
	int16_t x398 = 1;
	static int32_t x400 = INT32_MIN;
	int32_t t98 = 1358828;

    t98 = (x397|(x398^(x399/x400)));

    if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x402 = INT8_MIN;
	static uint32_t x403 = UINT32_MAX;
	static int32_t x404 = -315;
	uint32_t t99 = 517998U;

    t99 = (x401|(x402^(x403/x404)));

    if (t99 != 4294967169U) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x406 = 2U;
	static volatile int64_t x407 = INT64_MIN;
	volatile int8_t x408 = INT8_MIN;
	volatile int64_t t100 = -3756LL;

    t100 = (x405|(x406^(x407/x408)));

    if (t100 != 72057594037927938LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x409 = INT64_MIN;
	int8_t x410 = -21;
	static int64_t x412 = INT64_MAX;
	volatile int64_t t101 = 11LL;

    t101 = (x409|(x410^(x411/x412)));

    if (t101 != -21LL) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x413 = INT16_MIN;
	int64_t x416 = -1LL;
	static int64_t t102 = 30967LL;

    t102 = (x413|(x414^(x415/x416)));

    if (t102 != -31467LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x418 = INT32_MAX;
	int8_t x420 = -1;
	uint64_t t103 = 424060115819900001LLU;

    t103 = (x417|(x418^(x419/x420)));

    if (t103 != 2147483647LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x421 = 68423602545955LL;
	uint64_t x422 = UINT64_MAX;
	uint8_t x424 = UINT8_MAX;
	uint64_t t104 = 47652140077448565LLU;

    t104 = (x421|(x422^(x423/x424)));

    if (t104 != 68423602578815LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x425 = INT8_MIN;
	int8_t x427 = INT8_MIN;
	volatile uint32_t t105 = 153733U;

    t105 = (x425|(x426^(x427/x428)));

    if (t105 != 4294967257U) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x429 = 1982U;
	int64_t x430 = INT64_MIN;
	volatile int16_t x431 = -1;
	int8_t x432 = 1;
	int64_t t106 = INT64_MAX;

    t106 = (x429|(x430^(x431/x432)));

    if (t106 != INT64_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x434 = INT32_MIN;
	int8_t x435 = 3;
	int64_t x436 = -4191538559886065515LL;

    t107 = (x433|(x434^(x435/x436)));

    if (t107 != -2147479787LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x438 = UINT32_MAX;
	int8_t x440 = -1;

    t108 = (x437|(x438^(x439/x440)));

    if (t108 != -9223372036854775774LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x441 = UINT64_MAX;
	uint64_t x442 = UINT64_MAX;
	volatile int64_t x443 = INT64_MIN;
	int8_t x444 = INT8_MAX;

    t109 = (x441|(x442^(x443/x444)));

    if (t109 != UINT64_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x445 = -1;
	int64_t x446 = INT64_MIN;
	uint32_t x447 = UINT32_MAX;
	int64_t x448 = -6361LL;
	int64_t t110 = 55772202552LL;

    t110 = (x445|(x446^(x447/x448)));

    if (t110 != -1LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x449 = 448;
	uint64_t x450 = 322238LLU;
	int32_t x451 = INT32_MAX;
	int8_t x452 = -1;
	volatile uint64_t t111 = 5786583722141559102LLU;

    t111 = (x449|(x450^(x451/x452)));

    if (t111 != 18446744071562390527LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x453 = -106277;
	volatile uint32_t x454 = 265501988U;
	volatile int32_t x455 = INT32_MIN;
	static volatile uint32_t t112 = 22U;

    t112 = (x453|(x454^(x455/x456)));

    if (t112 != 4294959359U) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x457 = INT8_MIN;
	static int64_t x458 = INT64_MAX;
	int32_t x459 = INT32_MIN;
	int8_t x460 = -5;

    t113 = (x457|(x458^(x459/x460)));

    if (t113 != -26LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint64_t x461 = UINT64_MAX;
	int32_t x462 = INT32_MIN;
	uint64_t x463 = UINT64_MAX;
	int8_t x464 = INT8_MAX;
	static volatile uint64_t t114 = UINT64_MAX;

    t114 = (x461|(x462^(x463/x464)));

    if (t114 != UINT64_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x465 = INT32_MAX;
	uint16_t x467 = 262U;
	int32_t x468 = 60959552;
	static int32_t t115 = -468;

    t115 = (x465|(x466^(x467/x468)));

    if (t115 != -1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x469 = 0;
	uint64_t x470 = 31961LLU;
	volatile int8_t x471 = -1;

    t116 = (x469|(x470^(x471/x472)));

    if (t116 != 31961LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x473 = 0U;
	uint8_t x474 = 0U;
	static int8_t x475 = 52;
	int32_t t117 = 433925;

    t117 = (x473|(x474^(x475/x476)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x477 = -15;
	int32_t x478 = -511203294;
	int16_t x479 = -8106;
	volatile int64_t x480 = -122LL;
	volatile int64_t t118 = -3517LL;

    t118 = (x477|(x478^(x479/x480)));

    if (t118 != -15LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x481 = -408064LL;
	static int8_t x482 = INT8_MAX;
	volatile int64_t t119 = -32380068339225188LL;

    t119 = (x481|(x482^(x483/x484)));

    if (t119 != -407937LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x485 = INT32_MIN;
	int8_t x486 = INT8_MIN;
	int16_t x487 = -15813;
	int8_t x488 = INT8_MAX;

    t120 = (x485|(x486^(x487/x488)));

    if (t120 != -2147483644) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x489 = UINT32_MAX;
	uint8_t x490 = UINT8_MAX;
	static int16_t x491 = 3621;
	int32_t x492 = INT32_MIN;
	uint32_t t121 = UINT32_MAX;

    t121 = (x489|(x490^(x491/x492)));

    if (t121 != UINT32_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x493 = INT64_MAX;
	int8_t x495 = -1;
	int16_t x496 = -6;
	volatile int64_t t122 = -1LL;

    t122 = (x493|(x494^(x495/x496)));

    if (t122 != -1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x498 = INT8_MAX;
	int16_t x499 = 1;
	volatile uint8_t x500 = UINT8_MAX;
	volatile int32_t t123 = INT32_MAX;

    t123 = (x497|(x498^(x499/x500)));

    if (t123 != INT32_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x501 = -1;
	int64_t x502 = INT64_MIN;
	int32_t x503 = 3627970;
	volatile int64_t x504 = INT64_MIN;
	int64_t t124 = -205LL;

    t124 = (x501|(x502^(x503/x504)));

    if (t124 != -1LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x505 = UINT8_MAX;
	static int8_t x506 = 1;
	int32_t x507 = 2160;
	static volatile int64_t x508 = 1922390966833657463LL;
	volatile int64_t t125 = -149957LL;

    t125 = (x505|(x506^(x507/x508)));

    if (t125 != 255LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x510 = -1;
	static volatile uint32_t x511 = 38761U;
	uint8_t x512 = 25U;
	volatile int64_t t126 = -1LL;

    t126 = (x509|(x510^(x511/x512)));

    if (t126 != -1LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x513 = -40;
	static int64_t x514 = INT64_MAX;
	uint32_t x515 = 81U;
	int16_t x516 = INT16_MIN;
	int64_t t127 = -5691378LL;

    t127 = (x513|(x514^(x515/x516)));

    if (t127 != -1LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x523 = INT16_MIN;
	int64_t x524 = INT64_MAX;
	static int64_t t128 = -21837908835LL;

    t128 = (x521|(x522^(x523/x524)));

    if (t128 != -115LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x525 = INT64_MIN;
	static int32_t x526 = INT32_MIN;
	int16_t x527 = 3;
	volatile int64_t t129 = 1LL;

    t129 = (x525|(x526^(x527/x528)));

    if (t129 != -9223372034707292163LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x529 = 1053LL;
	int32_t x531 = -5959;
	int64_t x532 = 308027863955LL;

    t130 = (x529|(x530^(x531/x532)));

    if (t130 != -1LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x533 = -1;
	int32_t x535 = -123780355;
	int8_t x536 = 1;
	static int32_t t131 = -101128066;

    t131 = (x533|(x534^(x535/x536)));

    if (t131 != -1) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x541 = -1LL;
	static int16_t x542 = INT16_MAX;
	static uint16_t x543 = 141U;
	volatile uint64_t x544 = 5600284901619804LLU;
	uint64_t t132 = UINT64_MAX;

    t132 = (x541|(x542^(x543/x544)));

    if (t132 != UINT64_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint32_t x545 = UINT32_MAX;
	int16_t x546 = 205;
	uint32_t x547 = 121938611U;
	int32_t x548 = INT32_MIN;
	static volatile uint32_t t133 = UINT32_MAX;

    t133 = (x545|(x546^(x547/x548)));

    if (t133 != UINT32_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x549 = -1;
	volatile int32_t x550 = INT32_MIN;
	volatile uint64_t x551 = UINT64_MAX;
	uint32_t x552 = 172586U;
	uint64_t t134 = UINT64_MAX;

    t134 = (x549|(x550^(x551/x552)));

    if (t134 != UINT64_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint8_t x553 = 1U;
	int64_t x554 = -8141366407382374LL;
	uint16_t x555 = 30U;
	int8_t x556 = 28;
	int64_t t135 = 24251352LL;

    t135 = (x553|(x554^(x555/x556)));

    if (t135 != -8141366407382373LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile uint64_t x557 = UINT64_MAX;
	int8_t x558 = -1;
	uint32_t x559 = 3670037U;
	static volatile uint8_t x560 = UINT8_MAX;
	volatile uint64_t t136 = UINT64_MAX;

    t136 = (x557|(x558^(x559/x560)));

    if (t136 != UINT64_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x561 = INT64_MIN;
	volatile int8_t x562 = INT8_MIN;
	int8_t x563 = -1;

    t137 = (x561|(x562^(x563/x564)));

    if (t137 != -128LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint8_t x565 = 0U;
	uint64_t x566 = UINT64_MAX;
	int64_t x567 = -1LL;
	int32_t x568 = INT32_MAX;
	uint64_t t138 = UINT64_MAX;

    t138 = (x565|(x566^(x567/x568)));

    if (t138 != UINT64_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x569 = INT8_MIN;
	uint64_t x571 = 104127444937LLU;
	uint64_t t139 = 7250224395395576LLU;

    t139 = (x569|(x570^(x571/x572)));

    if (t139 != 18446744073709551573LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x573 = 1;
	static uint16_t x574 = 10U;
	int16_t x575 = INT16_MIN;
	int16_t x576 = -1;
	volatile int32_t t140 = -1482746;

    t140 = (x573|(x574^(x575/x576)));

    if (t140 != 32779) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x577 = INT16_MIN;
	int32_t x578 = -1;
	static volatile int64_t x580 = -1LL;
	volatile int64_t t141 = 40529127611LL;

    t141 = (x577|(x578^(x579/x580)));

    if (t141 != -2LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x581 = -1;
	int64_t x582 = -664593039807386274LL;
	int8_t x583 = -5;
	int64_t x584 = -1LL;
	volatile int64_t t142 = -22LL;

    t142 = (x581|(x582^(x583/x584)));

    if (t142 != -1LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x585 = 1LLU;
	uint32_t x586 = 26894742U;
	uint32_t x587 = 404U;
	volatile uint64_t t143 = 151071828LLU;

    t143 = (x585|(x586^(x587/x588)));

    if (t143 != 26894743LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x590 = 8139978263848003821LLU;
	volatile uint32_t x591 = 432709409U;
	volatile uint64_t x592 = 323762590884LLU;
	volatile uint64_t t144 = 714LLU;

    t144 = (x589|(x590^(x591/x592)));

    if (t144 != 8139978263848003821LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x594 = UINT8_MAX;
	int32_t x595 = INT32_MIN;
	int16_t x596 = 4583;

    t145 = (x593|(x594^(x595/x596)));

    if (t145 != -468642) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint32_t x597 = 16U;
	int64_t x598 = INT64_MIN;
	int8_t x599 = -1;
	static uint8_t x600 = 14U;
	static int64_t t146 = 505043768706784043LL;

    t146 = (x597|(x598^(x599/x600)));

    if (t146 != -9223372036854775792LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x601 = INT64_MAX;
	static int64_t x602 = 3348LL;
	uint16_t x604 = 38U;
	int64_t t147 = -552824719570LL;

    t147 = (x601|(x602^(x603/x604)));

    if (t147 != -1LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x605 = INT32_MAX;
	static int8_t x607 = -1;
	int16_t x608 = INT16_MIN;
	volatile int32_t t148 = 3326;

    t148 = (x605|(x606^(x607/x608)));

    if (t148 != -1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x613 = -1;
	int8_t x614 = INT8_MAX;
	int16_t x615 = 0;
	static volatile int8_t x616 = -1;
	static volatile int32_t t149 = 217755;

    t149 = (x613|(x614^(x615/x616)));

    if (t149 != -1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x618 = 2U;
	int32_t x619 = INT32_MIN;
	static uint32_t t150 = 11627U;

    t150 = (x617|(x618^(x619/x620)));

    if (t150 != 32767U) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int32_t x621 = INT32_MIN;
	int64_t x622 = -1LL;
	int8_t x623 = INT8_MIN;
	uint64_t x624 = 625425289885712LLU;
	static uint64_t t151 = 309926623735015LLU;

    t151 = (x621|(x622^(x623/x624)));

    if (t151 != 18446744073709522121LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x625 = -71;
	volatile int16_t x628 = -7049;

    t152 = (x625|(x626^(x627/x628)));

    if (t152 != UINT32_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x629 = 9;
	static int64_t x630 = INT64_MAX;
	uint64_t x631 = UINT64_MAX;
	volatile int64_t x632 = INT64_MIN;
	volatile uint64_t t153 = 4600858061576171LLU;

    t153 = (x629|(x630^(x631/x632)));

    if (t153 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x633 = -1;
	static volatile int16_t x634 = INT16_MIN;
	int64_t x635 = -4LL;
	int8_t x636 = -20;

    t154 = (x633|(x634^(x635/x636)));

    if (t154 != -1LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x637 = INT8_MIN;
	uint64_t x638 = 58594444860LLU;
	uint8_t x639 = UINT8_MAX;
	static int8_t x640 = 55;
	uint64_t t155 = 465552375LLU;

    t155 = (x637|(x638^(x639/x640)));

    if (t155 != 18446744073709551544LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x641 = UINT8_MAX;
	int8_t x643 = -18;
	int32_t x644 = INT32_MIN;
	static uint64_t t156 = 627LLU;

    t156 = (x641|(x642^(x643/x644)));

    if (t156 != 255LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x645 = INT64_MAX;
	int64_t x646 = INT64_MIN;
	volatile uint8_t x647 = UINT8_MAX;
	uint16_t x648 = 798U;
	int64_t t157 = -3399296475750LL;

    t157 = (x645|(x646^(x647/x648)));

    if (t157 != -1LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint32_t x649 = 47439U;
	int16_t x650 = 0;
	uint32_t x652 = 977254490U;
	volatile uint32_t t158 = 4213U;

    t158 = (x649|(x650^(x651/x652)));

    if (t158 != 47439U) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x653 = INT8_MIN;
	static uint8_t x654 = UINT8_MAX;
	volatile int8_t x655 = INT8_MAX;
	volatile int64_t t159 = -493796197LL;

    t159 = (x653|(x654^(x655/x656)));

    if (t159 != -1LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x657 = 38U;
	int16_t x658 = -1;
	uint8_t x659 = 77U;
	uint8_t x660 = 33U;
	volatile int32_t t160 = 23873;

    t160 = (x657|(x658^(x659/x660)));

    if (t160 != -1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x661 = INT16_MAX;
	static uint8_t x662 = UINT8_MAX;
	int32_t x663 = -10800960;
	uint32_t t161 = 65U;

    t161 = (x661|(x662^(x663/x664)));

    if (t161 != 32767U) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x665 = 96605159;
	uint32_t x666 = 1222289U;
	int32_t x667 = INT32_MIN;
	static uint16_t x668 = UINT16_MAX;

    t162 = (x665|(x666^(x667/x668)));

    if (t162 != 4293867511U) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x670 = INT32_MIN;
	volatile int8_t x671 = -1;
	int8_t x672 = -1;
	volatile int32_t t163 = -37645;

    t163 = (x669|(x670^(x671/x672)));

    if (t163 != -32767) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x673 = INT64_MIN;
	int64_t x674 = -4091313259513LL;
	uint16_t x676 = UINT16_MAX;
	static int64_t t164 = 940253771LL;

    t164 = (x673|(x674^(x675/x676)));

    if (t164 != -4091313259513LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x677 = INT32_MIN;
	int64_t x678 = INT64_MIN;
	int16_t x679 = INT16_MIN;
	uint8_t x680 = 36U;
	int64_t t165 = -5571097327934LL;

    t165 = (x677|(x678^(x679/x680)));

    if (t165 != -910LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x686 = -1;
	int32_t x687 = -1;
	static volatile uint8_t x688 = 13U;

    t166 = (x685|(x686^(x687/x688)));

    if (t166 != -1LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x689 = INT16_MAX;
	uint64_t x691 = 457561633202191LLU;
	int32_t x692 = INT32_MIN;
	volatile uint64_t t167 = 52010506204446LLU;

    t167 = (x689|(x690^(x691/x692)));

    if (t167 != 32767LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x693 = 113657874592485LL;
	volatile int32_t x695 = 1;
	static uint64_t x696 = 4400666136832525LLU;
	static volatile uint64_t t168 = 24LLU;

    t168 = (x693|(x694^(x695/x696)));

    if (t168 != 113659867037695LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static int64_t x697 = 16850172328966566LL;
	static uint8_t x698 = 9U;
	static uint16_t x700 = UINT16_MAX;
	int64_t t169 = -122864056203431LL;

    t169 = (x697|(x698^(x699/x700)));

    if (t169 != 16850172328966575LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x703 = 23;
	int64_t x704 = INT64_MIN;
	int64_t t170 = 137001585809LL;

    t170 = (x701|(x702^(x703/x704)));

    if (t170 != -2147483644LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x706 = INT32_MAX;
	uint8_t x708 = UINT8_MAX;

    t171 = (x705|(x706^(x707/x708)));

    if (t171 != -1) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint32_t x709 = 2959509U;
	volatile int64_t x710 = 51LL;
	static int64_t x711 = INT64_MAX;
	int64_t x712 = -1690859LL;
	volatile int64_t t172 = -46172238890LL;

    t172 = (x709|(x710^(x711/x712)));

    if (t172 != -5454843379753LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x713 = INT64_MAX;
	int64_t x714 = -1LL;
	static int8_t x715 = -1;
	static uint64_t x716 = UINT64_MAX;
	volatile uint64_t t173 = UINT64_MAX;

    t173 = (x713|(x714^(x715/x716)));

    if (t173 != UINT64_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x717 = -182;
	static uint8_t x718 = 2U;
	static uint8_t x719 = UINT8_MAX;
	volatile int32_t x720 = -1730;
	volatile int32_t t174 = -599115515;

    t174 = (x717|(x718^(x719/x720)));

    if (t174 != -182) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint32_t x721 = UINT32_MAX;
	static int16_t x722 = -1;
	uint8_t x723 = UINT8_MAX;
	uint32_t t175 = UINT32_MAX;

    t175 = (x721|(x722^(x723/x724)));

    if (t175 != UINT32_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x725 = 2846090U;
	uint8_t x727 = UINT8_MAX;
	uint16_t x728 = UINT16_MAX;
	static uint32_t t176 = 4U;

    t176 = (x725|(x726^(x727/x728)));

    if (t176 != 2846091U) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x729 = INT8_MAX;
	volatile uint8_t x730 = UINT8_MAX;
	volatile uint16_t x731 = UINT16_MAX;
	uint64_t x732 = UINT64_MAX;
	uint64_t t177 = 1636226LLU;

    t177 = (x729|(x730^(x731/x732)));

    if (t177 != 255LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint16_t x733 = 55U;
	static int64_t x734 = 222LL;

    t178 = (x733|(x734^(x735/x736)));

    if (t178 != 26685542527LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x737 = INT16_MIN;
	uint8_t x739 = UINT8_MAX;
	int8_t x740 = INT8_MAX;
	int32_t t179 = -642152;

    t179 = (x737|(x738^(x739/x740)));

    if (t179 != -3) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x743 = INT64_MAX;
	volatile int8_t x744 = 1;
	static int64_t t180 = -38197LL;

    t180 = (x741|(x742^(x743/x744)));

    if (t180 != -1LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x745 = -2;
	uint16_t x746 = UINT16_MAX;
	static uint64_t x747 = UINT64_MAX;
	static int32_t x748 = -1;
	static volatile uint64_t t181 = 18459616710LLU;

    t181 = (x745|(x746^(x747/x748)));

    if (t181 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x750 = INT8_MAX;
	int8_t x752 = INT8_MIN;
	int64_t t182 = INT64_MAX;

    t182 = (x749|(x750^(x751/x752)));

    if (t182 != INT64_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x757 = INT16_MIN;
	uint32_t x758 = UINT32_MAX;
	static volatile int16_t x759 = INT16_MAX;

    t183 = (x757|(x758^(x759/x760)));

    if (t183 != -1LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x762 = INT16_MAX;
	volatile uint16_t x764 = 1U;
	static volatile int32_t t184 = -84;

    t184 = (x761|(x762^(x763/x764)));

    if (t184 != -32768) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x766 = INT8_MIN;
	int32_t x767 = 13;
	int32_t t185 = 1222590;

    t185 = (x765|(x766^(x767/x768)));

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile uint64_t x769 = UINT64_MAX;
	static volatile int64_t x770 = INT64_MIN;
	uint64_t t186 = UINT64_MAX;

    t186 = (x769|(x770^(x771/x772)));

    if (t186 != UINT64_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint32_t x773 = 11U;
	int32_t x775 = -4;
	int64_t x776 = INT64_MIN;
	volatile int64_t t187 = 69985201727LL;

    t187 = (x773|(x774^(x775/x776)));

    if (t187 != 255LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x777 = -1LL;
	int32_t x778 = INT32_MAX;
	int32_t x779 = INT32_MIN;
	int8_t x780 = 9;
	int64_t t188 = -126529LL;

    t188 = (x777|(x778^(x779/x780)));

    if (t188 != -1LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x781 = UINT64_MAX;
	volatile uint16_t x782 = UINT16_MAX;
	volatile uint32_t x783 = 6158U;
	volatile int32_t x784 = -69487777;
	uint64_t t189 = UINT64_MAX;

    t189 = (x781|(x782^(x783/x784)));

    if (t189 != UINT64_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x785 = INT16_MIN;
	int8_t x786 = -1;
	static uint16_t x787 = UINT16_MAX;
	uint8_t x788 = 3U;
	int32_t t190 = 33919819;

    t190 = (x785|(x786^(x787/x788)));

    if (t190 != -21846) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x789 = INT16_MIN;
	static uint16_t x790 = UINT16_MAX;
	volatile int64_t x791 = INT64_MIN;
	static int8_t x792 = -8;
	volatile int64_t t191 = 1863500000452LL;

    t191 = (x789|(x790^(x791/x792)));

    if (t191 != -1LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x793 = 5U;
	static int32_t x795 = INT32_MAX;
	int16_t x796 = INT16_MIN;
	uint32_t t192 = 140U;

    t192 = (x793|(x794^(x795/x796)));

    if (t192 != 4294901887U) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x798 = -514438LL;
	uint64_t x799 = 14241440233434LLU;
	volatile int32_t x800 = 104;
	uint64_t t193 = 653980LLU;

    t193 = (x797|(x798^(x799/x800)));

    if (t193 != 18446744073709551347LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x801 = 2951160881195480909LLU;
	int32_t x802 = -1;
	uint8_t x803 = 14U;
	static uint64_t x804 = UINT64_MAX;
	volatile uint64_t t194 = UINT64_MAX;

    t194 = (x801|(x802^(x803/x804)));

    if (t194 != UINT64_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x805 = 3320658LLU;
	uint64_t x806 = 3494164803LLU;
	int8_t x808 = INT8_MIN;
	static uint64_t t195 = 5350LLU;

    t195 = (x805|(x806^(x807/x808)));

    if (t195 != 3497442131LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x809 = INT16_MIN;
	static uint16_t x810 = 3U;
	int8_t x811 = INT8_MAX;
	static int32_t t196 = -1617686;

    t196 = (x809|(x810^(x811/x812)));

    if (t196 != -32765) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x814 = -1;
	static volatile int16_t x815 = -4751;
	static volatile int32_t t197 = INT32_MAX;

    t197 = (x813|(x814^(x815/x816)));

    if (t197 != INT32_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x818 = -8;
	uint16_t x819 = 13333U;
	uint16_t x820 = UINT16_MAX;
	int32_t t198 = -5586;

    t198 = (x817|(x818^(x819/x820)));

    if (t198 != -3) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x822 = -1;
	int8_t x823 = -1;
	volatile int32_t t199 = 5;

    t199 = (x821|(x822^(x823/x824)));

    if (t199 != -1) { NG(); } else { ; }
	
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



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

int64_t x1 = INT64_MAX;
volatile uint8_t x3 = 3U;
int32_t x6 = -3664895;
static int32_t x9 = -1;
int64_t x10 = -3118000LL;
int8_t x15 = INT8_MIN;
int8_t x19 = INT8_MIN;
static uint16_t x20 = 1U;
uint32_t x26 = UINT32_MAX;
int64_t x27 = -1LL;
volatile int8_t x28 = 0;
volatile int64_t x32 = INT64_MIN;
static volatile uint32_t t9 = 2140940783U;
uint64_t x42 = 5315861135190277LLU;
uint32_t t13 = 4U;
uint8_t x59 = UINT8_MAX;
volatile uint32_t x60 = 43913U;
uint32_t x61 = UINT32_MAX;
uint32_t x69 = UINT32_MAX;
volatile uint32_t t17 = 3U;
uint32_t x73 = UINT32_MAX;
uint16_t x76 = 3223U;
uint64_t x79 = 4758905LLU;
uint16_t x80 = 11456U;
static int16_t x83 = -1;
static uint64_t t20 = 28612575049434LLU;
static int32_t t21 = -1;
uint8_t x91 = 32U;
static uint32_t x95 = 1U;
static uint8_t x98 = UINT8_MAX;
uint32_t x105 = 27U;
int32_t x113 = INT32_MIN;
int8_t x114 = INT8_MIN;
volatile int64_t t28 = 6LL;
volatile int64_t x125 = INT64_MIN;
int32_t x126 = INT32_MAX;
static volatile int64_t x127 = INT64_MIN;
volatile int64_t t30 = 19872785639217842LL;
uint64_t x129 = UINT64_MAX;
static uint64_t x130 = 11547560354LLU;
int32_t x132 = 0;
volatile uint16_t x136 = 4U;
static int64_t t34 = 1872674003274LL;
volatile int64_t t35 = -5464686LL;
uint64_t x151 = UINT64_MAX;
static int16_t x152 = INT16_MAX;
int8_t x156 = INT8_MAX;
uint32_t x157 = UINT32_MAX;
int64_t x159 = INT64_MAX;
int32_t x161 = -1;
int64_t x163 = -1LL;
uint16_t x166 = 47U;
int16_t x167 = -1878;
int16_t x171 = INT16_MAX;
uint32_t t41 = 5633U;
volatile int32_t t42 = -3104148;
static volatile int8_t x177 = 0;
uint64_t x178 = 73051866162010LLU;
int64_t t45 = -3902312457076LL;
int32_t x190 = INT32_MAX;
int8_t x195 = INT8_MIN;
int16_t x203 = INT16_MIN;
volatile int64_t x204 = INT64_MIN;
static volatile int32_t t48 = -423601068;
uint64_t x206 = UINT64_MAX;
static uint64_t x208 = 1059428630684513LLU;
int64_t x210 = INT64_MAX;
int64_t x217 = -1LL;
int64_t x226 = INT64_MAX;
int32_t x228 = -1;
int64_t x236 = -1LL;
volatile uint8_t x248 = UINT8_MAX;
uint8_t x251 = 58U;
uint32_t t60 = 547U;
static int32_t x253 = INT32_MAX;
int16_t x254 = INT16_MIN;
int64_t x256 = 37758548858362443LL;
int16_t x260 = 0;
uint16_t x263 = UINT16_MAX;
uint64_t t64 = 845746645LLU;
uint8_t x282 = UINT8_MAX;
uint64_t x287 = UINT64_MAX;
int32_t x288 = -1;
volatile int16_t x297 = -16329;
int32_t x320 = -79140906;
static volatile int16_t x337 = INT16_MIN;
int16_t x342 = -286;
static volatile int8_t x348 = INT8_MAX;
volatile int64_t x356 = -1LL;
int64_t x357 = INT64_MIN;
int64_t x360 = -1LL;
static int8_t x371 = 2;
int64_t t94 = 4507LL;
uint8_t x395 = UINT8_MAX;
volatile int32_t t96 = -2;
int16_t x408 = INT16_MIN;
volatile int32_t t98 = -757879;
uint64_t x409 = UINT64_MAX;
volatile uint16_t x415 = 0U;
static int64_t x416 = 991868825LL;
uint16_t x417 = 1318U;
int64_t x418 = INT64_MAX;
static int64_t x424 = 714444273692803130LL;
uint32_t x426 = 2U;
uint32_t t103 = 27146U;
uint32_t x431 = UINT32_MAX;
int32_t t105 = -2780241;
int16_t x447 = INT16_MAX;
int32_t x448 = INT32_MIN;
int64_t x449 = -1LL;
int16_t x452 = -1;
int8_t x468 = INT8_MIN;
int32_t t113 = 1;
static int64_t x476 = INT64_MIN;
int16_t x478 = -897;
uint8_t x479 = UINT8_MAX;
volatile int32_t t116 = 2741;
uint64_t x482 = 969740646LLU;
uint64_t x489 = UINT64_MAX;
int16_t x493 = INT16_MAX;
static uint16_t x495 = UINT16_MAX;
int32_t t120 = 1772;
uint8_t x499 = 9U;
volatile int64_t x500 = 8882137241314807LL;
volatile int32_t t121 = -7568003;
uint32_t x507 = 97218136U;
uint32_t x510 = 28263U;
uint8_t x513 = 0U;
static volatile int64_t x514 = INT64_MIN;
static int32_t t128 = -549809608;
uint32_t x530 = 12933968U;
int32_t x542 = INT32_MIN;
int64_t x544 = 6286055LL;
static uint64_t x546 = UINT64_MAX;
volatile uint64_t t133 = 31622586726LLU;
static volatile int32_t x555 = INT32_MAX;
volatile int64_t t136 = 746527704296020LL;
static int64_t x561 = INT64_MIN;
volatile int64_t t137 = 3LL;
uint16_t x578 = UINT16_MAX;
int64_t x579 = INT64_MIN;
static uint16_t x583 = 9534U;
int32_t t142 = -81683286;
uint16_t x587 = 0U;
volatile int64_t t144 = -610LL;
static int64_t x593 = -1LL;
volatile int32_t x597 = -1;
volatile uint32_t x605 = UINT32_MAX;
static uint8_t x607 = UINT8_MAX;
int8_t x609 = INT8_MIN;
int8_t x610 = INT8_MIN;
int8_t x612 = INT8_MIN;
uint8_t x615 = 8U;
static volatile int16_t x621 = INT16_MIN;
int32_t x629 = -1;
volatile uint64_t x630 = 49162192677400LLU;
uint8_t x634 = 1U;
int64_t x636 = -1LL;
volatile uint64_t t156 = 1127462148944064LLU;
int32_t x641 = INT32_MIN;
uint32_t x643 = 1797800517U;
int16_t x644 = INT16_MAX;
int16_t x646 = -1;
int32_t t158 = -643;
uint64_t x649 = UINT64_MAX;
static volatile uint64_t t159 = 102775114562283LLU;
int64_t t160 = -236962LL;
int16_t x660 = INT16_MAX;
int8_t x670 = INT8_MIN;
volatile uint16_t x671 = 14430U;
static int32_t x682 = -1;
uint8_t x683 = UINT8_MAX;
volatile int32_t t165 = 16;
int16_t x690 = INT16_MAX;
static int16_t x691 = -1;
uint64_t x701 = 15210089LLU;
int64_t x708 = -192501LL;
int64_t x710 = INT64_MIN;
uint32_t x713 = 42092628U;
static int64_t x715 = INT64_MAX;
int16_t x721 = INT16_MIN;
static uint8_t x727 = UINT8_MAX;
static int64_t x728 = -1LL;
int64_t t179 = -129026749383LL;
uint64_t x746 = 4127890LLU;
int8_t x747 = -13;
uint64_t t182 = 1231LLU;
static uint8_t x757 = 6U;
volatile uint64_t t184 = 5LLU;
uint16_t x761 = 3515U;
uint16_t x765 = 68U;
static int32_t t186 = 1005478182;
int32_t x782 = INT32_MAX;
volatile int64_t t190 = -60LL;
uint8_t x789 = UINT8_MAX;
uint8_t x801 = UINT8_MAX;
uint8_t x807 = UINT8_MAX;
int64_t x811 = INT64_MIN;
volatile uint64_t t197 = 271LLU;
int16_t x817 = -1;
int64_t t199 = 1LL;


void f0(void) {
    	uint32_t x2 = UINT32_MAX;
	uint32_t x4 = UINT32_MAX;
	volatile int64_t t0 = 78225LL;

    t0 = (x1/(x2^(x3==x4)));

    if (t0 != 2147483648LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint8_t x5 = UINT8_MAX;
	int32_t x7 = -493;
	uint8_t x8 = 7U;
	int32_t t1 = -14817;

    t1 = (x5/(x6^(x7==x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x11 = 88461380348778137LL;
	volatile int8_t x12 = 0;
	static int64_t t2 = -139998543632LL;

    t2 = (x9/(x10^(x11==x12)));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x13 = 2443;
	static int64_t x14 = -1LL;
	int32_t x16 = 7993730;
	int64_t t3 = -3319LL;

    t3 = (x13/(x14^(x15==x16)));

    if (t3 != -2443LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MIN;
	uint16_t x18 = 2U;
	int32_t t4 = 7419186;

    t4 = (x17/(x18^(x19==x20)));

    if (t4 != -1073741824) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x21 = INT64_MIN;
	int8_t x22 = INT8_MAX;
	static volatile uint16_t x23 = 23487U;
	int8_t x24 = -1;
	int64_t t5 = 4461300778528LL;

    t5 = (x21/(x22^(x23==x24)));

    if (t5 != -72624976668147841LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MIN;
	volatile uint32_t t6 = 242741U;

    t6 = (x25/(x26^(x27==x28)));

    if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = INT16_MAX;
	static int8_t x30 = -1;
	int32_t x31 = -9848;
	static volatile int32_t t7 = -1716;

    t7 = (x29/(x30^(x31==x32)));

    if (t7 != -32767) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MAX;
	static uint32_t x34 = 61503003U;
	static uint16_t x35 = UINT16_MAX;
	int64_t x36 = INT64_MAX;
	volatile uint32_t t8 = 24300414U;

    t8 = (x33/(x34^(x35==x36)));

    if (t8 != 34U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = 27064051U;
	volatile int16_t x38 = INT16_MAX;
	static int8_t x39 = INT8_MIN;
	uint8_t x40 = 62U;

    t9 = (x37/(x38^(x39==x40)));

    if (t9 != 825U) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MAX;
	int32_t x43 = INT32_MIN;
	static int16_t x44 = -1798;
	uint64_t t10 = 17960543077800LLU;

    t10 = (x41/(x42^(x43==x44)));

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x45 = UINT16_MAX;
	int16_t x46 = INT16_MIN;
	static uint32_t x47 = 1975U;
	int8_t x48 = 16;
	volatile int32_t t11 = -14286;

    t11 = (x45/(x46^(x47==x48)));

    if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint32_t x49 = UINT32_MAX;
	volatile int64_t x50 = INT64_MIN;
	volatile int32_t x51 = -769;
	int32_t x52 = INT32_MAX;
	static int64_t t12 = 2LL;

    t12 = (x49/(x50^(x51==x52)));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint32_t x53 = 39111414U;
	int8_t x54 = INT8_MIN;
	int32_t x55 = INT32_MIN;
	static int8_t x56 = 27;

    t13 = (x53/(x54^(x55==x56)));

    if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = 11;
	int64_t x58 = -1LL;
	volatile int64_t t14 = 4562469136LL;

    t14 = (x57/(x58^(x59==x60)));

    if (t14 != -11LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x62 = -1;
	int16_t x63 = -1;
	volatile int64_t x64 = -277718606720531284LL;
	volatile uint32_t t15 = 484282132U;

    t15 = (x61/(x62^(x63==x64)));

    if (t15 != 1U) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint8_t x65 = 122U;
	int16_t x66 = INT16_MIN;
	uint64_t x67 = UINT64_MAX;
	uint64_t x68 = 170LLU;
	static int32_t t16 = 9;

    t16 = (x65/(x66^(x67==x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x70 = 14;
	int64_t x71 = 3085000117598LL;
	uint16_t x72 = UINT16_MAX;

    t17 = (x69/(x70^(x71==x72)));

    if (t17 != 306783378U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x74 = UINT32_MAX;
	int8_t x75 = -1;
	volatile uint32_t t18 = 44U;

    t18 = (x73/(x74^(x75==x76)));

    if (t18 != 1U) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint8_t x77 = 9U;
	int8_t x78 = -63;
	volatile int32_t t19 = -942265;

    t19 = (x77/(x78^(x79==x80)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x81 = 27123632321LLU;
	int32_t x82 = INT32_MAX;
	volatile uint64_t x84 = 12867599LLU;

    t20 = (x81/(x82^(x83==x84)));

    if (t20 != 12LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x85 = INT8_MAX;
	uint16_t x86 = UINT16_MAX;
	int16_t x87 = INT16_MIN;
	volatile uint64_t x88 = 157459897LLU;

    t21 = (x85/(x86^(x87==x88)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint64_t x89 = UINT64_MAX;
	uint64_t x90 = 366583829045LLU;
	int8_t x92 = INT8_MAX;
	uint64_t t22 = 97765138004841LLU;

    t22 = (x89/(x90^(x91==x92)));

    if (t22 != 50320670LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = -6141;
	static volatile int8_t x94 = -27;
	int64_t x96 = INT64_MIN;
	int32_t t23 = -673261230;

    t23 = (x93/(x94^(x95==x96)));

    if (t23 != 227) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x97 = INT8_MAX;
	uint16_t x99 = 822U;
	int32_t x100 = INT32_MIN;
	static int32_t t24 = 1035465;

    t24 = (x97/(x98^(x99==x100)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x106 = INT8_MIN;
	int64_t x107 = INT64_MAX;
	int32_t x108 = 451100;
	volatile uint32_t t25 = 277343546U;

    t25 = (x105/(x106^(x107==x108)));

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x109 = INT8_MIN;
	int16_t x110 = INT16_MAX;
	int16_t x111 = -1;
	uint64_t x112 = 17033853932LLU;
	volatile int32_t t26 = -64603;

    t26 = (x109/(x110^(x111==x112)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x115 = 384605148625LLU;
	int64_t x116 = INT64_MAX;
	int32_t t27 = 142598;

    t27 = (x113/(x114^(x115==x116)));

    if (t27 != 16777216) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x117 = INT16_MIN;
	int64_t x118 = -30589042673491LL;
	volatile int64_t x119 = 203248LL;
	static int64_t x120 = -1597113346276LL;

    t28 = (x117/(x118^(x119==x120)));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x121 = 33;
	int64_t x122 = -2131126194385LL;
	int64_t x123 = 1105386793899153590LL;
	uint8_t x124 = 5U;
	int64_t t29 = -7021LL;

    t29 = (x121/(x122^(x123==x124)));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x128 = 24008U;

    t30 = (x125/(x126^(x127==x128)));

    if (t30 != -4294967298LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x131 = UINT8_MAX;
	uint64_t t31 = 55603942621993LLU;

    t31 = (x129/(x130^(x131==x132)));

    if (t31 != 1597458121LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x133 = INT32_MAX;
	volatile uint32_t x134 = 123457U;
	volatile uint64_t x135 = 12845108723982LLU;
	uint32_t t32 = 10U;

    t32 = (x133/(x134^(x135==x136)));

    if (t32 != 17394U) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x137 = 21U;
	static int16_t x138 = 508;
	int64_t x139 = 58863395LL;
	int64_t x140 = -1LL;
	static volatile int32_t t33 = -61;

    t33 = (x137/(x138^(x139==x140)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x141 = INT64_MAX;
	int8_t x142 = -5;
	static int8_t x143 = INT8_MIN;
	volatile uint64_t x144 = 223661476352LLU;

    t34 = (x141/(x142^(x143==x144)));

    if (t34 != -1844674407370955161LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x145 = 3613672808056LL;
	int16_t x146 = -1;
	int32_t x147 = INT32_MAX;
	static int32_t x148 = INT32_MIN;

    t35 = (x145/(x146^(x147==x148)));

    if (t35 != -3613672808056LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x149 = 377120464;
	volatile int16_t x150 = -1;
	static volatile int32_t t36 = -212234023;

    t36 = (x149/(x150^(x151==x152)));

    if (t36 != -377120464) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x153 = 1888270204341635324LL;
	static volatile int64_t x154 = INT64_MAX;
	int16_t x155 = INT16_MIN;
	volatile int64_t t37 = 114LL;

    t37 = (x153/(x154^(x155==x156)));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x158 = 36U;
	volatile int32_t x160 = 1019787;
	uint32_t t38 = 392U;

    t38 = (x157/(x158^(x159==x160)));

    if (t38 != 119304647U) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x162 = 1942005431632652LL;
	volatile int16_t x164 = INT16_MIN;
	volatile int64_t t39 = 87272549LL;

    t39 = (x161/(x162^(x163==x164)));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint64_t x165 = UINT64_MAX;
	static int8_t x168 = -1;
	volatile uint64_t t40 = 68LLU;

    t40 = (x165/(x166^(x167==x168)));

    if (t40 != 392483916461905353LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x169 = 5U;
	static uint32_t x170 = UINT32_MAX;
	int64_t x172 = INT64_MIN;

    t41 = (x169/(x170^(x171==x172)));

    if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x173 = UINT16_MAX;
	volatile uint8_t x174 = 14U;
	volatile int32_t x175 = -1;
	int32_t x176 = -28;

    t42 = (x173/(x174^(x175==x176)));

    if (t42 != 4681) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x179 = INT64_MAX;
	volatile uint64_t x180 = UINT64_MAX;
	volatile uint64_t t43 = 3769744068LLU;

    t43 = (x177/(x178^(x179==x180)));

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x181 = INT32_MAX;
	int16_t x182 = INT16_MIN;
	static uint32_t x183 = 671896U;
	uint16_t x184 = UINT16_MAX;
	int32_t t44 = 31655336;

    t44 = (x181/(x182^(x183==x184)));

    if (t44 != -65535) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int8_t x185 = INT8_MAX;
	int64_t x186 = INT64_MIN;
	uint64_t x187 = UINT64_MAX;
	int32_t x188 = INT32_MIN;

    t45 = (x185/(x186^(x187==x188)));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x189 = -1;
	int8_t x191 = INT8_MIN;
	uint8_t x192 = 1U;
	volatile int32_t t46 = -2;

    t46 = (x189/(x190^(x191==x192)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x193 = 4357;
	int8_t x194 = INT8_MAX;
	uint16_t x196 = 28897U;
	int32_t t47 = 1;

    t47 = (x193/(x194^(x195==x196)));

    if (t47 != 34) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint8_t x201 = 26U;
	volatile int16_t x202 = INT16_MIN;

    t48 = (x201/(x202^(x203==x204)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x205 = 26;
	static int16_t x207 = INT16_MIN;
	volatile uint64_t t49 = 609930233173LLU;

    t49 = (x205/(x206^(x207==x208)));

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint16_t x209 = UINT16_MAX;
	int64_t x211 = -20LL;
	uint16_t x212 = 0U;
	int64_t t50 = -4553395270487809964LL;

    t50 = (x209/(x210^(x211==x212)));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x213 = 2401990627485920438LLU;
	uint16_t x214 = 17389U;
	static int32_t x215 = -1;
	int8_t x216 = 1;
	static uint64_t t51 = 418724991748221236LLU;

    t51 = (x213/(x214^(x215==x216)));

    if (t51 != 138132763671626LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint32_t x218 = 483130U;
	static int32_t x219 = INT32_MAX;
	uint8_t x220 = 0U;
	volatile int64_t t52 = 2064103344470006LL;

    t52 = (x217/(x218^(x219==x220)));

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x221 = 525371940805017LL;
	int64_t x222 = 4795076289103467LL;
	int64_t x223 = -101583338488211LL;
	int16_t x224 = -43;
	int64_t t53 = 6337LL;

    t53 = (x221/(x222^(x223==x224)));

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x225 = INT32_MIN;
	int8_t x227 = -1;
	volatile int64_t t54 = 654653791438681329LL;

    t54 = (x225/(x226^(x227==x228)));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x229 = 30387933LL;
	static uint16_t x230 = UINT16_MAX;
	volatile int32_t x231 = INT32_MAX;
	volatile int64_t x232 = INT64_MIN;
	static volatile int64_t t55 = 1LL;

    t55 = (x229/(x230^(x231==x232)));

    if (t55 != 463LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x233 = 1;
	int16_t x234 = INT16_MAX;
	int8_t x235 = INT8_MIN;
	volatile int32_t t56 = 2586499;

    t56 = (x233/(x234^(x235==x236)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x237 = -1;
	int32_t x238 = -1;
	uint8_t x239 = 97U;
	int8_t x240 = INT8_MIN;
	int32_t t57 = -434741638;

    t57 = (x237/(x238^(x239==x240)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x241 = -1;
	static int32_t x242 = INT32_MAX;
	int32_t x243 = INT32_MAX;
	uint8_t x244 = 1U;
	volatile int32_t t58 = -123541;

    t58 = (x241/(x242^(x243==x244)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x245 = 14;
	uint16_t x246 = 1U;
	uint64_t x247 = 4LLU;
	int32_t t59 = 3;

    t59 = (x245/(x246^(x247==x248)));

    if (t59 != 14) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x249 = UINT16_MAX;
	uint32_t x250 = 101056383U;
	int8_t x252 = 1;

    t60 = (x249/(x250^(x251==x252)));

    if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x255 = -60962094LL;
	int32_t t61 = -1865399;

    t61 = (x253/(x254^(x255==x256)));

    if (t61 != -65535) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x257 = 119078;
	int16_t x258 = 4480;
	uint8_t x259 = 1U;
	volatile int32_t t62 = -9935681;

    t62 = (x257/(x258^(x259==x260)));

    if (t62 != 26) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x261 = INT32_MIN;
	volatile int64_t x262 = INT64_MIN;
	static int16_t x264 = -1;
	volatile int64_t t63 = 1524671LL;

    t63 = (x261/(x262^(x263==x264)));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint64_t x265 = UINT64_MAX;
	volatile int64_t x266 = INT64_MIN;
	volatile int8_t x267 = INT8_MAX;
	int64_t x268 = INT64_MIN;

    t64 = (x265/(x266^(x267==x268)));

    if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x269 = 13986U;
	volatile int64_t x270 = -1LL;
	static uint64_t x271 = UINT64_MAX;
	int8_t x272 = INT8_MAX;
	int64_t t65 = -6762LL;

    t65 = (x269/(x270^(x271==x272)));

    if (t65 != -13986LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x273 = 9861U;
	int64_t x274 = -2076866499101900LL;
	int8_t x275 = INT8_MIN;
	static uint16_t x276 = 125U;
	static int64_t t66 = 22LL;

    t66 = (x273/(x274^(x275==x276)));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x277 = INT8_MIN;
	int32_t x278 = 220362;
	static uint8_t x279 = UINT8_MAX;
	int16_t x280 = INT16_MAX;
	int32_t t67 = -46723670;

    t67 = (x277/(x278^(x279==x280)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x281 = -1;
	int32_t x283 = INT32_MIN;
	uint8_t x284 = UINT8_MAX;
	static int32_t t68 = 87;

    t68 = (x281/(x282^(x283==x284)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x285 = INT8_MIN;
	static int32_t x286 = INT32_MAX;
	int32_t t69 = 19839748;

    t69 = (x285/(x286^(x287==x288)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x289 = INT32_MIN;
	static int32_t x290 = 3051470;
	int16_t x291 = -303;
	uint8_t x292 = 1U;
	volatile int32_t t70 = -532;

    t70 = (x289/(x290^(x291==x292)));

    if (t70 != -703) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x293 = INT8_MIN;
	int32_t x294 = -1;
	int8_t x295 = INT8_MAX;
	static volatile int64_t x296 = INT64_MAX;
	static volatile int32_t t71 = -569790157;

    t71 = (x293/(x294^(x295==x296)));

    if (t71 != 128) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x298 = UINT32_MAX;
	static int32_t x299 = -381;
	uint32_t x300 = UINT32_MAX;
	static uint32_t t72 = 59U;

    t72 = (x297/(x298^(x299==x300)));

    if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x301 = 99189034LL;
	int16_t x302 = 270;
	volatile uint32_t x303 = 3U;
	volatile uint8_t x304 = 110U;
	int64_t t73 = -1LL;

    t73 = (x301/(x302^(x303==x304)));

    if (t73 != 367366LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x305 = INT32_MAX;
	int8_t x306 = INT8_MAX;
	uint8_t x307 = UINT8_MAX;
	static uint32_t x308 = 3221114U;
	volatile int32_t t74 = -8931;

    t74 = (x305/(x306^(x307==x308)));

    if (t74 != 16909320) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x309 = 22100610012LL;
	volatile int16_t x310 = INT16_MIN;
	int64_t x311 = 6009LL;
	uint8_t x312 = 3U;
	static volatile int64_t t75 = 219467LL;

    t75 = (x309/(x310^(x311==x312)));

    if (t75 != -674457LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x313 = INT16_MIN;
	int8_t x314 = INT8_MIN;
	int8_t x315 = INT8_MIN;
	uint64_t x316 = 1673685714239468132LLU;
	volatile int32_t t76 = 20;

    t76 = (x313/(x314^(x315==x316)));

    if (t76 != 256) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint16_t x317 = UINT16_MAX;
	static volatile uint8_t x318 = UINT8_MAX;
	uint8_t x319 = UINT8_MAX;
	int32_t t77 = -14358764;

    t77 = (x317/(x318^(x319==x320)));

    if (t77 != 257) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x321 = -41;
	int16_t x322 = -1;
	int32_t x323 = INT32_MIN;
	int32_t x324 = -35968627;
	int32_t t78 = -1822;

    t78 = (x321/(x322^(x323==x324)));

    if (t78 != 41) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x325 = UINT64_MAX;
	int16_t x326 = INT16_MIN;
	uint64_t x327 = 8389651459LLU;
	static volatile uint8_t x328 = 6U;
	uint64_t t79 = 6545847054529LLU;

    t79 = (x325/(x326^(x327==x328)));

    if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x329 = -1LL;
	static uint32_t x330 = UINT32_MAX;
	static int16_t x331 = INT16_MIN;
	volatile int64_t x332 = -7302LL;
	volatile int64_t t80 = 6958832013LL;

    t80 = (x329/(x330^(x331==x332)));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x333 = 2041089389041285LLU;
	volatile int16_t x334 = INT16_MIN;
	volatile int64_t x335 = INT64_MIN;
	int8_t x336 = INT8_MAX;
	static uint64_t t81 = 858160511590146398LLU;

    t81 = (x333/(x334^(x335==x336)));

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x338 = 60099;
	uint8_t x339 = UINT8_MAX;
	volatile int32_t x340 = -1;
	volatile int32_t t82 = -15080;

    t82 = (x337/(x338^(x339==x340)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x341 = UINT16_MAX;
	int16_t x343 = INT16_MAX;
	uint16_t x344 = 0U;
	int32_t t83 = -47034194;

    t83 = (x341/(x342^(x343==x344)));

    if (t83 != -229) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x345 = 482721107LL;
	int16_t x346 = 2;
	int16_t x347 = INT16_MAX;
	static int64_t t84 = -132426008402LL;

    t84 = (x345/(x346^(x347==x348)));

    if (t84 != 241360553LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x349 = -1;
	uint32_t x350 = 413U;
	int8_t x351 = 6;
	volatile int32_t x352 = INT32_MAX;
	static volatile uint32_t t85 = 3620415U;

    t85 = (x349/(x350^(x351==x352)));

    if (t85 != 10399436U) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x353 = INT8_MIN;
	int32_t x354 = -1;
	uint8_t x355 = 29U;
	volatile int32_t t86 = -27;

    t86 = (x353/(x354^(x355==x356)));

    if (t86 != 128) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x358 = 3U;
	volatile uint8_t x359 = 43U;
	int64_t t87 = 1LL;

    t87 = (x357/(x358^(x359==x360)));

    if (t87 != -3074457345618258602LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x361 = 0U;
	int64_t x362 = -130422526LL;
	volatile int32_t x363 = INT32_MAX;
	int32_t x364 = INT32_MIN;
	int64_t t88 = -7665LL;

    t88 = (x361/(x362^(x363==x364)));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x365 = INT32_MIN;
	uint64_t x366 = UINT64_MAX;
	static int32_t x367 = 28;
	int8_t x368 = INT8_MIN;
	volatile uint64_t t89 = 63916488093200347LLU;

    t89 = (x365/(x366^(x367==x368)));

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x369 = 0;
	volatile int32_t x370 = INT32_MIN;
	uint32_t x372 = UINT32_MAX;
	static int32_t t90 = 26650175;

    t90 = (x369/(x370^(x371==x372)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x373 = 2448352U;
	static uint8_t x374 = UINT8_MAX;
	uint32_t x375 = 12028U;
	int64_t x376 = -1LL;
	volatile uint32_t t91 = 377U;

    t91 = (x373/(x374^(x375==x376)));

    if (t91 != 9601U) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint64_t x377 = 7899319739444LLU;
	int8_t x378 = -8;
	int16_t x379 = INT16_MIN;
	volatile int32_t x380 = -114;
	volatile uint64_t t92 = 193608429LLU;

    t92 = (x377/(x378^(x379==x380)));

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x381 = 2600U;
	volatile int8_t x382 = INT8_MAX;
	int32_t x383 = -1;
	int64_t x384 = INT64_MAX;
	uint32_t t93 = 1425456U;

    t93 = (x381/(x382^(x383==x384)));

    if (t93 != 20U) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x389 = 1035385LL;
	volatile int64_t x390 = INT64_MAX;
	static volatile int64_t x391 = -1LL;
	static volatile int32_t x392 = INT32_MIN;

    t94 = (x389/(x390^(x391==x392)));

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int16_t x393 = INT16_MAX;
	int16_t x394 = INT16_MIN;
	uint16_t x396 = 5790U;
	volatile int32_t t95 = -24260357;

    t95 = (x393/(x394^(x395==x396)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x397 = -51;
	volatile int8_t x398 = 63;
	static int8_t x399 = INT8_MIN;
	int8_t x400 = INT8_MIN;

    t96 = (x397/(x398^(x399==x400)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x401 = -14225702804LL;
	int8_t x402 = -8;
	static int64_t x403 = INT64_MIN;
	int16_t x404 = INT16_MIN;
	volatile int64_t t97 = 137221479251LL;

    t97 = (x401/(x402^(x403==x404)));

    if (t97 != 1778212850LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x405 = UINT16_MAX;
	int16_t x406 = INT16_MAX;
	int16_t x407 = INT16_MIN;

    t98 = (x405/(x406^(x407==x408)));

    if (t98 != 2) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x410 = -1LL;
	uint8_t x411 = 1U;
	int32_t x412 = 10385764;
	uint64_t t99 = 4757248567102615LLU;

    t99 = (x409/(x410^(x411==x412)));

    if (t99 != 1LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x413 = INT64_MIN;
	uint32_t x414 = 460815U;
	volatile int64_t t100 = 448705864489LL;

    t100 = (x413/(x414^(x415==x416)));

    if (t100 != -20015346802631LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x419 = INT16_MAX;
	uint16_t x420 = UINT16_MAX;
	static volatile int64_t t101 = -1825898574LL;

    t101 = (x417/(x418^(x419==x420)));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x421 = INT32_MAX;
	int8_t x422 = INT8_MIN;
	static int8_t x423 = -1;
	volatile int32_t t102 = -3742069;

    t102 = (x421/(x422^(x423==x424)));

    if (t102 != -16777215) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x425 = 2U;
	uint8_t x427 = 50U;
	int64_t x428 = -4047653LL;

    t103 = (x425/(x426^(x427==x428)));

    if (t103 != 1U) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint8_t x429 = UINT8_MAX;
	static uint32_t x430 = 7U;
	int32_t x432 = INT32_MIN;
	uint32_t t104 = 7972U;

    t104 = (x429/(x430^(x431==x432)));

    if (t104 != 36U) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x433 = -408;
	int16_t x434 = INT16_MIN;
	int32_t x435 = 120444;
	uint32_t x436 = 72305U;

    t105 = (x433/(x434^(x435==x436)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x437 = 5;
	static volatile int32_t x438 = INT32_MAX;
	volatile int64_t x439 = INT64_MIN;
	uint64_t x440 = 759950347260568247LLU;
	int32_t t106 = -2393;

    t106 = (x437/(x438^(x439==x440)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x441 = 8486U;
	int16_t x442 = INT16_MIN;
	static int8_t x443 = -7;
	volatile uint8_t x444 = UINT8_MAX;
	volatile int32_t t107 = -1333;

    t107 = (x441/(x442^(x443==x444)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x445 = INT8_MIN;
	uint32_t x446 = 448072U;
	uint32_t t108 = 482U;

    t108 = (x445/(x446^(x447==x448)));

    if (t108 != 9585U) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x450 = INT16_MAX;
	static int32_t x451 = -46916884;
	int64_t t109 = 3016LL;

    t109 = (x449/(x450^(x451==x452)));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x453 = -1LL;
	static int16_t x454 = -75;
	static int32_t x455 = INT32_MIN;
	volatile int64_t x456 = 7137LL;
	volatile int64_t t110 = 1LL;

    t110 = (x453/(x454^(x455==x456)));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x457 = -1;
	static int8_t x458 = INT8_MAX;
	uint32_t x459 = 136276U;
	int32_t x460 = -49164263;
	volatile int32_t t111 = -1;

    t111 = (x457/(x458^(x459==x460)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x461 = INT8_MIN;
	uint64_t x462 = 1121887763LLU;
	int8_t x463 = -4;
	int64_t x464 = INT64_MIN;
	static uint64_t t112 = 241038883LLU;

    t112 = (x461/(x462^(x463==x464)));

    if (t112 != 16442593173LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint16_t x465 = 29167U;
	int8_t x466 = 34;
	int16_t x467 = INT16_MIN;

    t113 = (x465/(x466^(x467==x468)));

    if (t113 != 857) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x469 = 174U;
	int32_t x470 = INT32_MAX;
	uint16_t x471 = 212U;
	volatile int64_t x472 = INT64_MIN;
	uint32_t t114 = 491U;

    t114 = (x469/(x470^(x471==x472)));

    if (t114 != 0U) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x473 = INT8_MAX;
	uint64_t x474 = 340LLU;
	int16_t x475 = INT16_MAX;
	uint64_t t115 = 89LLU;

    t115 = (x473/(x474^(x475==x476)));

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x477 = INT32_MIN;
	uint32_t x480 = 10U;

    t116 = (x477/(x478^(x479==x480)));

    if (t116 != 2394073) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x481 = -1;
	int32_t x483 = INT32_MAX;
	uint64_t x484 = UINT64_MAX;
	volatile uint64_t t117 = 590015984702LLU;

    t117 = (x481/(x482^(x483==x484)));

    if (t117 != 19022348036LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x485 = -1LL;
	uint8_t x486 = 4U;
	static uint64_t x487 = 12604806758738751LLU;
	int32_t x488 = -1;
	volatile int64_t t118 = 4395803957LL;

    t118 = (x485/(x486^(x487==x488)));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x490 = INT64_MIN;
	volatile int8_t x491 = -2;
	volatile int16_t x492 = 12306;
	uint64_t t119 = 10674LLU;

    t119 = (x489/(x490^(x491==x492)));

    if (t119 != 1LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x494 = -1;
	uint32_t x496 = UINT32_MAX;

    t120 = (x493/(x494^(x495==x496)));

    if (t120 != -32767) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x497 = -1;
	uint16_t x498 = 512U;

    t121 = (x497/(x498^(x499==x500)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint16_t x501 = 85U;
	uint32_t x502 = UINT32_MAX;
	int16_t x503 = -1;
	int64_t x504 = INT64_MIN;
	uint32_t t122 = 80U;

    t122 = (x501/(x502^(x503==x504)));

    if (t122 != 0U) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x505 = INT8_MIN;
	int8_t x506 = INT8_MAX;
	volatile int32_t x508 = INT32_MIN;
	int32_t t123 = 2686649;

    t123 = (x505/(x506^(x507==x508)));

    if (t123 != -1) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint8_t x509 = UINT8_MAX;
	static int64_t x511 = INT64_MAX;
	int8_t x512 = -1;
	uint32_t t124 = 6U;

    t124 = (x509/(x510^(x511==x512)));

    if (t124 != 0U) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x515 = INT8_MAX;
	int32_t x516 = 140;
	volatile int64_t t125 = -105LL;

    t125 = (x513/(x514^(x515==x516)));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x517 = -1LL;
	int16_t x518 = INT16_MAX;
	volatile int64_t x519 = -1LL;
	uint16_t x520 = 32U;
	volatile int64_t t126 = -5069192906LL;

    t126 = (x517/(x518^(x519==x520)));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x521 = INT64_MAX;
	static volatile uint32_t x522 = UINT32_MAX;
	uint64_t x523 = UINT64_MAX;
	volatile int16_t x524 = -1;
	static volatile int64_t t127 = 301081378345986LL;

    t127 = (x521/(x522^(x523==x524)));

    if (t127 != 2147483649LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int8_t x525 = -1;
	int8_t x526 = INT8_MIN;
	static int64_t x527 = -8613LL;
	static int8_t x528 = -1;

    t128 = (x525/(x526^(x527==x528)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x529 = 14;
	int64_t x531 = -1LL;
	static volatile int32_t x532 = -1;
	uint32_t t129 = 2016033333U;

    t129 = (x529/(x530^(x531==x532)));

    if (t129 != 0U) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x533 = INT64_MIN;
	static int8_t x534 = -12;
	uint64_t x535 = UINT64_MAX;
	static int16_t x536 = INT16_MIN;
	volatile int64_t t130 = -258701928627275844LL;

    t130 = (x533/(x534^(x535==x536)));

    if (t130 != 768614336404564650LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x537 = 6763111;
	int16_t x538 = 688;
	volatile int8_t x539 = INT8_MAX;
	uint16_t x540 = 28U;
	int32_t t131 = 39166784;

    t131 = (x537/(x538^(x539==x540)));

    if (t131 != 9830) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x541 = INT64_MAX;
	volatile int64_t x543 = INT64_MIN;
	int64_t t132 = 14011724LL;

    t132 = (x541/(x542^(x543==x544)));

    if (t132 != -4294967295LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x545 = -1;
	static int8_t x547 = -5;
	static uint16_t x548 = 0U;

    t133 = (x545/(x546^(x547==x548)));

    if (t133 != 1LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x549 = INT64_MIN;
	int64_t x550 = INT64_MAX;
	volatile uint8_t x551 = UINT8_MAX;
	int32_t x552 = 20;
	int64_t t134 = -1LL;

    t134 = (x549/(x550^(x551==x552)));

    if (t134 != -1LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x553 = INT64_MIN;
	static int8_t x554 = 59;
	uint64_t x556 = 57213623179LLU;
	static volatile int64_t t135 = 7929076023LL;

    t135 = (x553/(x554^(x555==x556)));

    if (t135 != -156328339607708064LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x557 = 0;
	volatile int64_t x558 = 40828985778LL;
	uint16_t x559 = 123U;
	int8_t x560 = -1;

    t136 = (x557/(x558^(x559==x560)));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x562 = INT8_MIN;
	static int64_t x563 = -1LL;
	int32_t x564 = INT32_MIN;

    t137 = (x561/(x562^(x563==x564)));

    if (t137 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x565 = -1;
	volatile uint32_t x566 = UINT32_MAX;
	uint32_t x567 = 11701522U;
	int16_t x568 = -1;
	uint32_t t138 = 1320931894U;

    t138 = (x565/(x566^(x567==x568)));

    if (t138 != 1U) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x569 = -1LL;
	volatile int64_t x570 = 2093259759LL;
	int8_t x571 = 4;
	static int64_t x572 = INT64_MIN;
	int64_t t139 = -659334LL;

    t139 = (x569/(x570^(x571==x572)));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x573 = 3U;
	uint8_t x574 = 82U;
	int16_t x575 = INT16_MAX;
	volatile int16_t x576 = INT16_MIN;
	uint32_t t140 = 481093411U;

    t140 = (x573/(x574^(x575==x576)));

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile uint8_t x577 = UINT8_MAX;
	uint64_t x580 = UINT64_MAX;
	int32_t t141 = 477995;

    t141 = (x577/(x578^(x579==x580)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x581 = UINT16_MAX;
	int16_t x582 = -1;
	volatile int32_t x584 = INT32_MIN;

    t142 = (x581/(x582^(x583==x584)));

    if (t142 != -65535) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x585 = INT64_MAX;
	static int64_t x586 = INT64_MAX;
	uint8_t x588 = 1U;
	static int64_t t143 = 82877552251LL;

    t143 = (x585/(x586^(x587==x588)));

    if (t143 != 1LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x589 = INT16_MAX;
	volatile int64_t x590 = INT64_MAX;
	int8_t x591 = -1;
	int16_t x592 = -1;

    t144 = (x589/(x590^(x591==x592)));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x594 = INT32_MIN;
	uint16_t x595 = 113U;
	static volatile int32_t x596 = -1;
	volatile int64_t t145 = -24011LL;

    t145 = (x593/(x594^(x595==x596)));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x598 = 222611954U;
	int32_t x599 = -1;
	int16_t x600 = -1;
	uint32_t t146 = 252733U;

    t146 = (x597/(x598^(x599==x600)));

    if (t146 != 19U) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x601 = INT64_MIN;
	int8_t x602 = INT8_MIN;
	int8_t x603 = -1;
	static volatile uint8_t x604 = 57U;
	volatile int64_t t147 = 23506630345LL;

    t147 = (x601/(x602^(x603==x604)));

    if (t147 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x606 = 60U;
	int16_t x608 = INT16_MAX;
	volatile uint32_t t148 = 13935603U;

    t148 = (x605/(x606^(x607==x608)));

    if (t148 != 71582788U) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x611 = 1058079307;
	volatile int32_t t149 = 756654625;

    t149 = (x609/(x610^(x611==x612)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint64_t x613 = 195022068286LLU;
	static uint8_t x614 = 2U;
	int32_t x616 = INT32_MIN;
	static uint64_t t150 = 79242890436437668LLU;

    t150 = (x613/(x614^(x615==x616)));

    if (t150 != 97511034143LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x617 = INT16_MAX;
	int64_t x618 = -1LL;
	volatile int64_t x619 = INT64_MAX;
	static uint32_t x620 = 101114U;
	volatile int64_t t151 = -64468124505LL;

    t151 = (x617/(x618^(x619==x620)));

    if (t151 != -32767LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x622 = UINT32_MAX;
	static int16_t x623 = INT16_MIN;
	volatile uint8_t x624 = 2U;
	uint32_t t152 = 5U;

    t152 = (x621/(x622^(x623==x624)));

    if (t152 != 0U) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile uint16_t x625 = UINT16_MAX;
	uint64_t x626 = 3154300512622950873LLU;
	int32_t x627 = 6;
	static int32_t x628 = -24;
	volatile uint64_t t153 = 280207205411LLU;

    t153 = (x625/(x626^(x627==x628)));

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x631 = 397U;
	int32_t x632 = -1;
	volatile uint64_t t154 = 115359967373682LLU;

    t154 = (x629/(x630^(x631==x632)));

    if (t154 != 375222LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x633 = UINT32_MAX;
	int16_t x635 = INT16_MIN;
	static uint32_t t155 = UINT32_MAX;

    t155 = (x633/(x634^(x635==x636)));

    if (t155 != UINT32_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x637 = 1032LLU;
	uint8_t x638 = 4U;
	volatile uint16_t x639 = UINT16_MAX;
	uint32_t x640 = 118U;

    t156 = (x637/(x638^(x639==x640)));

    if (t156 != 258LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x642 = INT8_MIN;
	int32_t t157 = 24;

    t157 = (x641/(x642^(x643==x644)));

    if (t157 != 16777216) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x645 = 1003;
	int32_t x647 = INT32_MIN;
	uint32_t x648 = UINT32_MAX;

    t158 = (x645/(x646^(x647==x648)));

    if (t158 != -1003) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x650 = 39LLU;
	int64_t x651 = INT64_MAX;
	int64_t x652 = -1LL;

    t159 = (x649/(x650^(x651==x652)));

    if (t159 != 472993437787424400LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x653 = 30414U;
	static int64_t x654 = -1LL;
	static int64_t x655 = -4781706339LL;
	volatile int32_t x656 = INT32_MAX;

    t160 = (x653/(x654^(x655==x656)));

    if (t160 != -30414LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x657 = INT64_MIN;
	int16_t x658 = -5529;
	volatile int8_t x659 = -1;
	volatile int64_t t161 = -9705339160454LL;

    t161 = (x657/(x658^(x659==x660)));

    if (t161 != 1668180871198186LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x669 = -1;
	int8_t x672 = INT8_MIN;
	static volatile int32_t t162 = 6068617;

    t162 = (x669/(x670^(x671==x672)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x673 = 197U;
	int32_t x674 = -1;
	int16_t x675 = 175;
	static int32_t x676 = INT32_MIN;
	uint32_t t163 = 2147444110U;

    t163 = (x673/(x674^(x675==x676)));

    if (t163 != 0U) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x677 = UINT32_MAX;
	uint64_t x678 = 1901203591LLU;
	static int8_t x679 = -1;
	int16_t x680 = INT16_MIN;
	volatile uint64_t t164 = 3991LLU;

    t164 = (x677/(x678^(x679==x680)));

    if (t164 != 2LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x681 = UINT8_MAX;
	uint64_t x684 = 1193LLU;

    t165 = (x681/(x682^(x683==x684)));

    if (t165 != -255) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x685 = 32U;
	volatile uint8_t x686 = 17U;
	uint32_t x687 = 1092940U;
	static volatile uint16_t x688 = UINT16_MAX;
	int32_t t166 = -940;

    t166 = (x685/(x686^(x687==x688)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x689 = INT64_MAX;
	int16_t x692 = -421;
	static volatile int64_t t167 = 1LL;

    t167 = (x689/(x690^(x691==x692)));

    if (t167 != 281483566907400LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x693 = -1;
	static volatile int8_t x694 = INT8_MAX;
	static int32_t x695 = INT32_MIN;
	volatile int16_t x696 = -10;
	volatile int32_t t168 = 1;

    t168 = (x693/(x694^(x695==x696)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x697 = -1;
	int64_t x698 = INT64_MAX;
	volatile int32_t x699 = 63;
	uint16_t x700 = 22362U;
	int64_t t169 = 1696788LL;

    t169 = (x697/(x698^(x699==x700)));

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x702 = INT64_MIN;
	int8_t x703 = INT8_MIN;
	volatile int8_t x704 = -26;
	uint64_t t170 = 14LLU;

    t170 = (x701/(x702^(x703==x704)));

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x705 = -1;
	int32_t x706 = INT32_MIN;
	static int64_t x707 = INT64_MAX;
	int32_t t171 = 0;

    t171 = (x705/(x706^(x707==x708)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x709 = -1;
	int32_t x711 = -1;
	uint64_t x712 = 368541836255684862LLU;
	volatile int64_t t172 = -816878973162169481LL;

    t172 = (x709/(x710^(x711==x712)));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x714 = INT8_MIN;
	static int64_t x716 = INT64_MAX;
	volatile uint32_t t173 = 106314923U;

    t173 = (x713/(x714^(x715==x716)));

    if (t173 != 0U) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x717 = INT16_MAX;
	int32_t x718 = INT32_MIN;
	volatile uint8_t x719 = 46U;
	int8_t x720 = INT8_MIN;
	volatile int32_t t174 = 8066670;

    t174 = (x717/(x718^(x719==x720)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x722 = 6278083LLU;
	int64_t x723 = -1LL;
	uint64_t x724 = UINT64_MAX;
	uint64_t t175 = 35654158LLU;

    t175 = (x721/(x722^(x723==x724)));

    if (t175 != 2938277020546LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x725 = -120;
	static volatile int32_t x726 = INT32_MIN;
	static int32_t t176 = -127261559;

    t176 = (x725/(x726^(x727==x728)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x729 = -8990;
	static int16_t x730 = INT16_MIN;
	uint64_t x731 = 311346702045515815LLU;
	static volatile uint16_t x732 = 3U;
	int32_t t177 = 162830;

    t177 = (x729/(x730^(x731==x732)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x733 = INT8_MIN;
	int64_t x734 = -1LL;
	int8_t x735 = -1;
	int32_t x736 = INT32_MIN;
	int64_t t178 = 1LL;

    t178 = (x733/(x734^(x735==x736)));

    if (t178 != 128LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint32_t x737 = 0U;
	static int64_t x738 = -1LL;
	volatile uint32_t x739 = UINT32_MAX;
	int32_t x740 = INT32_MIN;

    t179 = (x737/(x738^(x739==x740)));

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x741 = 40;
	static int32_t x742 = INT32_MIN;
	uint32_t x743 = 41931U;
	static uint32_t x744 = UINT32_MAX;
	int32_t t180 = -195610738;

    t180 = (x741/(x742^(x743==x744)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x745 = 1;
	static volatile uint32_t x748 = 744U;
	uint64_t t181 = 35059991404453LLU;

    t181 = (x745/(x746^(x747==x748)));

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint16_t x749 = UINT16_MAX;
	static uint64_t x750 = 13634076LLU;
	int32_t x751 = 125990;
	uint64_t x752 = 918103856LLU;

    t182 = (x749/(x750^(x751==x752)));

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x753 = INT16_MAX;
	static uint16_t x754 = UINT16_MAX;
	uint64_t x755 = 267825569439969641LLU;
	int64_t x756 = -1LL;
	static int32_t t183 = -11187;

    t183 = (x753/(x754^(x755==x756)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x758 = 171067984895125239LLU;
	static int64_t x759 = INT64_MIN;
	int8_t x760 = INT8_MIN;

    t184 = (x757/(x758^(x759==x760)));

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x762 = INT16_MIN;
	int8_t x763 = INT8_MIN;
	uint8_t x764 = UINT8_MAX;
	volatile int32_t t185 = 3;

    t185 = (x761/(x762^(x763==x764)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x766 = INT32_MAX;
	int32_t x767 = 143230122;
	uint64_t x768 = 13071937176928722LLU;

    t186 = (x765/(x766^(x767==x768)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x769 = 62U;
	int16_t x770 = INT16_MAX;
	volatile int64_t x771 = INT64_MIN;
	int8_t x772 = 0;
	volatile uint32_t t187 = 13251U;

    t187 = (x769/(x770^(x771==x772)));

    if (t187 != 0U) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x773 = 2700969488932LLU;
	static int32_t x774 = INT32_MAX;
	volatile int32_t x775 = 1;
	static volatile int16_t x776 = INT16_MAX;
	static uint64_t t188 = 176079903592322483LLU;

    t188 = (x773/(x774^(x775==x776)));

    if (t188 != 1257LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x777 = -1LL;
	uint8_t x778 = UINT8_MAX;
	static volatile int32_t x779 = INT32_MIN;
	int64_t x780 = -1LL;
	volatile int64_t t189 = 11146818034LL;

    t189 = (x777/(x778^(x779==x780)));

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x781 = INT64_MAX;
	uint64_t x783 = 19206367559172LLU;
	uint8_t x784 = 0U;

    t190 = (x781/(x782^(x783==x784)));

    if (t190 != 4294967298LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x785 = INT32_MAX;
	static int32_t x786 = INT32_MIN;
	static volatile int32_t x787 = -87;
	int64_t x788 = -1LL;
	int32_t t191 = 7830574;

    t191 = (x785/(x786^(x787==x788)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x790 = 3933888487LL;
	int8_t x791 = INT8_MAX;
	volatile uint16_t x792 = 3U;
	int64_t t192 = -31631LL;

    t192 = (x789/(x790^(x791==x792)));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x793 = 1;
	int32_t x794 = -1;
	uint16_t x795 = 0U;
	int64_t x796 = -1LL;
	volatile int32_t t193 = 5;

    t193 = (x793/(x794^(x795==x796)));

    if (t193 != -1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x797 = INT64_MAX;
	static volatile int16_t x798 = -6;
	int8_t x799 = INT8_MIN;
	static int8_t x800 = 4;
	static volatile int64_t t194 = -389387781704507065LL;

    t194 = (x797/(x798^(x799==x800)));

    if (t194 != -1537228672809129301LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x802 = 231U;
	static volatile uint64_t x803 = 265170896LLU;
	volatile int16_t x804 = INT16_MAX;
	int32_t t195 = 900973;

    t195 = (x801/(x802^(x803==x804)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x805 = -399LL;
	int32_t x806 = -1;
	int16_t x808 = -1;
	volatile int64_t t196 = -531574970597LL;

    t196 = (x805/(x806^(x807==x808)));

    if (t196 != 399LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x809 = UINT64_MAX;
	int64_t x810 = 4131951979903799LL;
	int16_t x812 = INT16_MIN;

    t197 = (x809/(x810^(x811==x812)));

    if (t197 != 4464LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int32_t x813 = -11;
	uint64_t x814 = 11662530069829LLU;
	int8_t x815 = INT8_MIN;
	static volatile int8_t x816 = INT8_MIN;
	volatile uint64_t t198 = 8412928058552340213LLU;

    t198 = (x813/(x814^(x815==x816)));

    if (t198 != 1581710LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x818 = -1LL;
	static int32_t x819 = INT32_MIN;
	int64_t x820 = 0LL;

    t199 = (x817/(x818^(x819==x820)));

    if (t199 != 1LL) { NG(); } else { ; }
	
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


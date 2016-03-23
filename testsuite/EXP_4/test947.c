
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

int8_t x6 = -1;
int16_t x10 = INT16_MIN;
uint8_t x12 = 1U;
volatile int64_t x13 = INT64_MAX;
volatile uint8_t x14 = UINT8_MAX;
int32_t x15 = -1;
static int16_t x16 = INT16_MAX;
uint64_t x18 = 745LLU;
static volatile uint32_t x19 = UINT32_MAX;
static uint8_t x21 = UINT8_MAX;
int16_t x26 = -317;
uint64_t x28 = UINT64_MAX;
int16_t x31 = INT16_MIN;
int32_t x32 = -260750;
static volatile int32_t t7 = 16;
volatile int16_t x34 = 1868;
volatile uint64_t x35 = 280757960178174LLU;
int64_t x36 = INT64_MAX;
volatile int32_t x41 = INT32_MIN;
int16_t x43 = INT16_MIN;
uint64_t x59 = 397766LLU;
int16_t x61 = INT16_MIN;
volatile int32_t x65 = -1;
uint32_t x77 = UINT32_MAX;
int32_t t18 = -4545;
int16_t x86 = INT16_MIN;
int32_t x91 = -84467828;
static volatile int32_t t21 = -694;
uint32_t x94 = UINT32_MAX;
int64_t x95 = INT64_MIN;
uint64_t x107 = 191664326030938LLU;
static volatile int32_t t29 = 13140;
volatile uint16_t x127 = 0U;
int16_t x129 = INT16_MIN;
uint16_t x130 = UINT16_MAX;
int32_t t31 = 18252591;
volatile int32_t t33 = 526602;
int8_t x141 = -1;
int16_t x142 = INT16_MAX;
static int32_t t34 = 54894807;
static volatile int32_t t35 = -532;
int32_t x155 = INT32_MAX;
volatile uint64_t x169 = 5304775383283406704LLU;
int32_t t42 = 64768754;
int8_t x180 = INT8_MIN;
static volatile int32_t x192 = -243967081;
int16_t x194 = -1;
int16_t x195 = INT16_MIN;
static int16_t x196 = -33;
int16_t x206 = -1;
volatile uint16_t x210 = 6648U;
uint8_t x217 = 7U;
int32_t t53 = 127;
static int64_t x228 = -1LL;
uint64_t x240 = UINT64_MAX;
int16_t x242 = -1;
static volatile int32_t t58 = -250732;
volatile int8_t x245 = INT8_MIN;
volatile int32_t t61 = 92899;
int16_t x264 = 3;
static int64_t x270 = INT64_MAX;
int16_t x271 = INT16_MAX;
int32_t t65 = 171247;
static uint16_t x289 = 2U;
static volatile int32_t x291 = INT32_MIN;
volatile int32_t t68 = -1592;
int32_t t69 = -5453;
int16_t x307 = 5;
int16_t x312 = INT16_MAX;
int64_t x322 = INT64_MIN;
volatile uint8_t x328 = UINT8_MAX;
int32_t x333 = -60;
int16_t x338 = -1;
static uint8_t x342 = 0U;
static int64_t x350 = INT64_MAX;
int16_t x354 = INT16_MAX;
volatile int32_t t83 = -85977073;
uint8_t x358 = UINT8_MAX;
int16_t x364 = 1;
int32_t x368 = INT32_MAX;
int64_t x369 = INT64_MIN;
volatile uint16_t x371 = UINT16_MAX;
volatile int32_t t88 = -1886351;
static volatile uint64_t x387 = 6897LLU;
volatile uint64_t x390 = UINT64_MAX;
static int16_t x396 = INT16_MAX;
int8_t x398 = -2;
int16_t x408 = INT16_MIN;
int64_t x420 = -1LL;
uint64_t x423 = UINT64_MAX;
uint64_t x431 = 141801631252LLU;
uint64_t x432 = 27285650918138LLU;
static int64_t x437 = INT64_MIN;
static uint8_t x438 = UINT8_MAX;
uint16_t x442 = UINT16_MAX;
int32_t x449 = INT32_MAX;
int64_t x452 = INT64_MAX;
static int64_t x456 = -674819735LL;
static uint8_t x462 = 13U;
static int32_t x466 = 251752906;
uint32_t x474 = UINT32_MAX;
static int16_t x476 = INT16_MIN;
volatile int32_t t111 = 1;
int8_t x482 = INT8_MIN;
int16_t x491 = 1;
uint8_t x492 = 1U;
int32_t x494 = -6463;
volatile int32_t t116 = 7;
int32_t x497 = INT32_MAX;
volatile int32_t t117 = -80877513;
volatile int32_t t118 = 27;
volatile int32_t x505 = 518092;
static int64_t x507 = -614816410LL;
volatile int64_t x510 = INT64_MIN;
int32_t t121 = -24257984;
int8_t x518 = -28;
int32_t x524 = INT32_MIN;
int8_t x525 = INT8_MIN;
uint8_t x539 = UINT8_MAX;
volatile int32_t t127 = 116;
static int8_t x547 = INT8_MIN;
int64_t x549 = -1LL;
uint16_t x551 = UINT16_MAX;
int32_t t131 = 287889751;
static volatile int32_t x561 = INT32_MAX;
static int8_t x564 = INT8_MAX;
uint64_t x571 = 88LLU;
int64_t x575 = INT64_MIN;
int32_t x577 = -565;
static uint64_t x584 = 741LLU;
int32_t t138 = 233367;
int16_t x597 = INT16_MAX;
static int32_t x600 = INT32_MIN;
static int32_t x603 = -1;
uint32_t x604 = 827108984U;
int32_t t143 = -14306;
int32_t t145 = -1429306;
static volatile int8_t x620 = -1;
uint64_t x627 = UINT64_MAX;
int32_t t149 = -7080424;
int16_t x629 = INT16_MAX;
int64_t x635 = INT64_MAX;
int64_t x637 = INT64_MIN;
uint8_t x648 = UINT8_MAX;
int16_t x656 = INT16_MIN;
volatile uint64_t x660 = UINT64_MAX;
uint64_t x667 = 507609284LLU;
static int64_t x671 = INT64_MIN;
int16_t x674 = INT16_MIN;
int32_t t161 = 316348;
static volatile int8_t x677 = INT8_MIN;
static int8_t x682 = INT8_MIN;
int8_t x690 = -7;
uint64_t x691 = 101331838479802LLU;
uint64_t x699 = 481094024722542LLU;
volatile int32_t t169 = 111;
static int32_t t170 = -6082758;
static uint16_t x718 = 55U;
static volatile uint32_t x719 = UINT32_MAX;
volatile int32_t t172 = 98185788;
int8_t x725 = -1;
int64_t x736 = -1LL;
volatile int32_t t177 = -1775734;
int32_t t178 = -6;
int32_t t179 = 235;
uint32_t x749 = UINT32_MAX;
int16_t x750 = -1;
uint64_t x751 = 77882383LLU;
static volatile int64_t x753 = 70453295800LL;
uint16_t x754 = 86U;
volatile int64_t x757 = -322567768LL;
int64_t x759 = INT64_MIN;
int64_t x768 = 184782354LL;
volatile int32_t x769 = INT32_MAX;
static uint32_t x770 = 835282949U;
volatile int32_t t185 = 74;
int16_t x778 = INT16_MIN;
static uint8_t x780 = 118U;
int32_t t186 = 76840;
static int8_t x782 = 0;
int32_t x784 = INT32_MIN;
int64_t x785 = 881139025890183LL;
static volatile int32_t t189 = -2256998;
uint8_t x793 = 53U;
static uint32_t x799 = 10242880U;
int16_t x806 = -1;
uint16_t x808 = 97U;
volatile int16_t x809 = -1;
int32_t x811 = INT32_MIN;
int32_t x820 = INT32_MAX;
static volatile int16_t x821 = -15;
int32_t x823 = INT32_MAX;
volatile int32_t x825 = -1;
static int32_t x828 = -1;


void f0(void) {
    	static volatile uint16_t x1 = 6U;
	int32_t x2 = INT32_MIN;
	uint32_t x3 = UINT32_MAX;
	int32_t x4 = INT32_MIN;
	int32_t t0 = -18515934;

    t0 = (x1>(x2&(x3%x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MIN;
	int64_t x7 = INT64_MIN;
	static volatile uint32_t x8 = 19U;
	volatile int32_t t1 = 812178;

    t1 = (x5>(x6&(x7%x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = 70956;
	int8_t x11 = -1;
	int32_t t2 = -2776;

    t2 = (x9>(x10&(x11%x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t t3 = 84497;

    t3 = (x13>(x14&(x15%x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x17 = 65LL;
	int32_t x20 = 5334;
	int32_t t4 = 223505463;

    t4 = (x17>(x18&(x19%x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x22 = 2389444LL;
	int16_t x23 = INT16_MIN;
	volatile int64_t x24 = -1082781759108LL;
	volatile int32_t t5 = -8074517;

    t5 = (x21>(x22&(x23%x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MAX;
	int32_t x27 = -1;
	int32_t t6 = -444276;

    t6 = (x25>(x26&(x27%x28)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = -1;
	int64_t x30 = -1LL;

    t7 = (x29>(x30&(x31%x32)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = 1923U;
	int32_t t8 = -688556001;

    t8 = (x33>(x34&(x35%x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x37 = UINT16_MAX;
	int32_t x38 = INT32_MAX;
	int8_t x39 = INT8_MIN;
	int16_t x40 = INT16_MIN;
	int32_t t9 = 762750;

    t9 = (x37>(x38&(x39%x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x42 = INT8_MIN;
	uint8_t x44 = 112U;
	int32_t t10 = -1037;

    t10 = (x41>(x42&(x43%x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = 434U;
	static int64_t x46 = -1LL;
	int32_t x47 = INT32_MIN;
	static int64_t x48 = INT64_MIN;
	static int32_t t11 = 0;

    t11 = (x45>(x46&(x47%x48)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint64_t x49 = UINT64_MAX;
	uint8_t x50 = 40U;
	uint32_t x51 = 89U;
	static int64_t x52 = -2507810LL;
	int32_t t12 = -86;

    t12 = (x49>(x50&(x51%x52)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = INT16_MIN;
	volatile int64_t x54 = INT64_MAX;
	int32_t x55 = -673213;
	volatile int16_t x56 = INT16_MIN;
	int32_t t13 = 908;

    t13 = (x53>(x54&(x55%x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = -1;
	uint32_t x58 = 7U;
	int8_t x60 = 1;
	volatile int32_t t14 = -1;

    t14 = (x57>(x58&(x59%x60)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x62 = 559;
	uint16_t x63 = UINT16_MAX;
	int32_t x64 = 1;
	volatile int32_t t15 = 17;

    t15 = (x61>(x62&(x63%x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x66 = UINT16_MAX;
	int64_t x67 = INT64_MAX;
	uint64_t x68 = UINT64_MAX;
	int32_t t16 = -15862193;

    t16 = (x65>(x66&(x67%x68)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x69 = 1U;
	uint16_t x70 = 76U;
	int32_t x71 = -3;
	int64_t x72 = INT64_MIN;
	int32_t t17 = -407;

    t17 = (x69>(x70&(x71%x72)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint32_t x78 = 306U;
	int64_t x79 = INT64_MIN;
	int32_t x80 = INT32_MIN;

    t18 = (x77>(x78&(x79%x80)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x81 = INT8_MIN;
	int8_t x82 = 2;
	uint16_t x83 = 92U;
	int32_t x84 = INT32_MIN;
	static volatile int32_t t19 = 216;

    t19 = (x81>(x82&(x83%x84)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x85 = -1LL;
	uint64_t x87 = 42882LLU;
	uint64_t x88 = 1370LLU;
	volatile int32_t t20 = -997223388;

    t20 = (x85>(x86&(x87%x88)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x89 = -1;
	int32_t x90 = INT32_MAX;
	int16_t x92 = INT16_MAX;

    t21 = (x89>(x90&(x91%x92)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x93 = INT32_MIN;
	volatile int16_t x96 = INT16_MIN;
	static volatile int32_t t22 = 723934;

    t22 = (x93>(x94&(x95%x96)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int64_t x97 = 12825634342934LL;
	int32_t x98 = INT32_MIN;
	uint16_t x99 = 1449U;
	uint16_t x100 = UINT16_MAX;
	volatile int32_t t23 = -16230355;

    t23 = (x97>(x98&(x99%x100)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int32_t x101 = 52640054;
	int64_t x102 = INT64_MIN;
	static volatile int8_t x103 = INT8_MIN;
	int64_t x104 = 318LL;
	volatile int32_t t24 = -13467280;

    t24 = (x101>(x102&(x103%x104)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x105 = 781936579U;
	int8_t x106 = 1;
	volatile uint16_t x108 = 115U;
	int32_t t25 = 19650;

    t25 = (x105>(x106&(x107%x108)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x109 = 1858;
	uint8_t x110 = UINT8_MAX;
	int64_t x111 = -229944LL;
	int16_t x112 = -1;
	static int32_t t26 = 517;

    t26 = (x109>(x110&(x111%x112)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x113 = UINT16_MAX;
	volatile int64_t x114 = -1LL;
	int32_t x115 = -1;
	int32_t x116 = 205201;
	volatile int32_t t27 = 29909873;

    t27 = (x113>(x114&(x115%x116)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint32_t x117 = 129348037U;
	static int16_t x118 = 2;
	int64_t x119 = 3248552541473072LL;
	static uint64_t x120 = 834820083LLU;
	volatile int32_t t28 = -56628013;

    t28 = (x117>(x118&(x119%x120)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x121 = 3913U;
	static uint8_t x122 = 48U;
	static int32_t x123 = 9622901;
	static int64_t x124 = INT64_MAX;

    t29 = (x121>(x122&(x123%x124)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint16_t x125 = UINT16_MAX;
	static int8_t x126 = -1;
	static volatile int64_t x128 = INT64_MAX;
	volatile int32_t t30 = -10741;

    t30 = (x125>(x126&(x127%x128)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x131 = INT32_MAX;
	int32_t x132 = INT32_MAX;

    t31 = (x129>(x130&(x131%x132)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x133 = 105406034U;
	int8_t x134 = -1;
	int32_t x135 = 1;
	static int16_t x136 = INT16_MAX;
	volatile int32_t t32 = 93;

    t32 = (x133>(x134&(x135%x136)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x137 = INT64_MIN;
	volatile int16_t x138 = INT16_MAX;
	int64_t x139 = -15491994826901LL;
	int16_t x140 = -1;

    t33 = (x137>(x138&(x139%x140)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x143 = INT8_MIN;
	int32_t x144 = -91;

    t34 = (x141>(x142&(x143%x144)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x145 = 1U;
	uint16_t x146 = 1U;
	int64_t x147 = INT64_MAX;
	int16_t x148 = 3;

    t35 = (x145>(x146&(x147%x148)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x149 = -1;
	int64_t x150 = -1LL;
	volatile uint16_t x151 = 0U;
	int8_t x152 = INT8_MAX;
	int32_t t36 = -12013;

    t36 = (x149>(x150&(x151%x152)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x153 = INT32_MIN;
	static int64_t x154 = INT64_MIN;
	uint32_t x156 = 2421U;
	int32_t t37 = 22;

    t37 = (x153>(x154&(x155%x156)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x157 = 498640590U;
	int32_t x158 = -34693;
	uint32_t x159 = 176U;
	volatile int8_t x160 = INT8_MIN;
	int32_t t38 = -198617;

    t38 = (x157>(x158&(x159%x160)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x161 = 59165192006LL;
	volatile uint64_t x162 = 37264504269LLU;
	volatile uint32_t x163 = 2045432417U;
	uint8_t x164 = 51U;
	int32_t t39 = 134112437;

    t39 = (x161>(x162&(x163%x164)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x165 = INT32_MAX;
	int16_t x166 = -1;
	int64_t x167 = -1LL;
	int64_t x168 = 254482282LL;
	int32_t t40 = -28483;

    t40 = (x165>(x166&(x167%x168)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x170 = -2;
	static int16_t x171 = -78;
	int8_t x172 = INT8_MIN;
	volatile int32_t t41 = -4;

    t41 = (x169>(x170&(x171%x172)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint32_t x173 = 138U;
	int16_t x174 = INT16_MAX;
	uint8_t x175 = UINT8_MAX;
	int32_t x176 = INT32_MIN;

    t42 = (x173>(x174&(x175%x176)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x177 = INT8_MIN;
	uint8_t x178 = 5U;
	int16_t x179 = 1;
	static int32_t t43 = 64225;

    t43 = (x177>(x178&(x179%x180)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x181 = -1;
	int16_t x182 = -1;
	int16_t x183 = 9308;
	int32_t x184 = -1;
	int32_t t44 = -16640523;

    t44 = (x181>(x182&(x183%x184)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x189 = 29858LLU;
	volatile int8_t x190 = -56;
	int16_t x191 = 10021;
	static volatile int32_t t45 = -316244820;

    t45 = (x189>(x190&(x191%x192)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x193 = INT64_MAX;
	int32_t t46 = 464195;

    t46 = (x193>(x194&(x195%x196)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint16_t x197 = UINT16_MAX;
	int32_t x198 = 88676245;
	volatile uint8_t x199 = 24U;
	static int64_t x200 = 1194606898LL;
	volatile int32_t t47 = 794;

    t47 = (x197>(x198&(x199%x200)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x201 = UINT32_MAX;
	int8_t x202 = 1;
	int16_t x203 = INT16_MIN;
	int16_t x204 = INT16_MIN;
	int32_t t48 = 14753655;

    t48 = (x201>(x202&(x203%x204)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x205 = 26U;
	int16_t x207 = INT16_MIN;
	static int16_t x208 = 1;
	volatile int32_t t49 = 1;

    t49 = (x205>(x206&(x207%x208)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint64_t x209 = UINT64_MAX;
	static int32_t x211 = -1;
	int32_t x212 = INT32_MIN;
	static int32_t t50 = -187021254;

    t50 = (x209>(x210&(x211%x212)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x213 = INT64_MIN;
	int8_t x214 = 6;
	uint8_t x215 = 1U;
	static volatile int8_t x216 = -1;
	volatile int32_t t51 = 2228;

    t51 = (x213>(x214&(x215%x216)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x218 = -1;
	volatile int8_t x219 = INT8_MAX;
	uint16_t x220 = UINT16_MAX;
	volatile int32_t t52 = -141922;

    t52 = (x217>(x218&(x219%x220)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint64_t x221 = UINT64_MAX;
	int8_t x222 = INT8_MIN;
	int64_t x223 = -7002656LL;
	static volatile uint16_t x224 = UINT16_MAX;

    t53 = (x221>(x222&(x223%x224)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x225 = INT64_MAX;
	volatile int32_t x226 = INT32_MIN;
	uint64_t x227 = 3119695333063LLU;
	volatile int32_t t54 = 7350;

    t54 = (x225>(x226&(x227%x228)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x229 = 545;
	uint64_t x230 = 124579LLU;
	volatile int16_t x231 = INT16_MIN;
	int16_t x232 = -1;
	volatile int32_t t55 = 210;

    t55 = (x229>(x230&(x231%x232)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint8_t x233 = 116U;
	int8_t x234 = -1;
	int8_t x235 = 25;
	static int32_t x236 = 51;
	int32_t t56 = -23;

    t56 = (x233>(x234&(x235%x236)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x237 = -1;
	uint64_t x238 = 1997LLU;
	int8_t x239 = INT8_MIN;
	int32_t t57 = 1;

    t57 = (x237>(x238&(x239%x240)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x241 = INT16_MIN;
	volatile uint64_t x243 = UINT64_MAX;
	uint64_t x244 = UINT64_MAX;

    t58 = (x241>(x242&(x243%x244)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x246 = UINT8_MAX;
	volatile uint64_t x247 = 220832007490339LLU;
	int8_t x248 = INT8_MIN;
	volatile int32_t t59 = -8;

    t59 = (x245>(x246&(x247%x248)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x249 = INT32_MIN;
	uint16_t x250 = 2U;
	static uint32_t x251 = 6836U;
	volatile int32_t x252 = 3;
	int32_t t60 = 31161780;

    t60 = (x249>(x250&(x251%x252)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x253 = 609LLU;
	static int16_t x254 = INT16_MIN;
	int32_t x255 = -18993;
	uint32_t x256 = 21U;

    t61 = (x253>(x254&(x255%x256)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x257 = 0;
	static int32_t x258 = 1031342036;
	int8_t x259 = -1;
	int32_t x260 = 343306;
	int32_t t62 = -2178;

    t62 = (x257>(x258&(x259%x260)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x261 = -1;
	volatile int16_t x262 = INT16_MIN;
	int32_t x263 = -15004;
	int32_t t63 = -1;

    t63 = (x261>(x262&(x263%x264)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x269 = UINT8_MAX;
	int16_t x272 = -1;
	volatile int32_t t64 = -10;

    t64 = (x269>(x270&(x271%x272)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x273 = INT64_MIN;
	uint8_t x274 = UINT8_MAX;
	static int8_t x275 = INT8_MIN;
	static int8_t x276 = -1;

    t65 = (x273>(x274&(x275%x276)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x281 = 63374409LL;
	static int16_t x282 = INT16_MIN;
	int8_t x283 = INT8_MIN;
	static int8_t x284 = 10;
	volatile int32_t t66 = 3332255;

    t66 = (x281>(x282&(x283%x284)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x285 = INT16_MIN;
	int32_t x286 = -1;
	static int64_t x287 = INT64_MIN;
	uint32_t x288 = 1U;
	volatile int32_t t67 = 1;

    t67 = (x285>(x286&(x287%x288)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x290 = -15;
	volatile uint16_t x292 = 26067U;

    t68 = (x289>(x290&(x291%x292)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x293 = 4122U;
	int64_t x294 = -1LL;
	static int8_t x295 = -7;
	uint32_t x296 = UINT32_MAX;

    t69 = (x293>(x294&(x295%x296)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint64_t x301 = UINT64_MAX;
	int32_t x302 = -1;
	uint16_t x303 = 14U;
	int8_t x304 = INT8_MAX;
	static volatile int32_t t70 = -2;

    t70 = (x301>(x302&(x303%x304)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint8_t x305 = 36U;
	int8_t x306 = -1;
	int64_t x308 = -1LL;
	int32_t t71 = 4;

    t71 = (x305>(x306&(x307%x308)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x309 = INT32_MAX;
	uint32_t x310 = UINT32_MAX;
	uint32_t x311 = UINT32_MAX;
	static int32_t t72 = 3;

    t72 = (x309>(x310&(x311%x312)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x313 = INT64_MIN;
	int16_t x314 = INT16_MIN;
	static volatile int8_t x315 = 12;
	int64_t x316 = INT64_MIN;
	int32_t t73 = 187882;

    t73 = (x313>(x314&(x315%x316)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x317 = -1;
	volatile int16_t x318 = -1;
	static int16_t x319 = 2;
	int16_t x320 = -2;
	volatile int32_t t74 = -28;

    t74 = (x317>(x318&(x319%x320)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x321 = -6;
	volatile int64_t x323 = -354078LL;
	int16_t x324 = 187;
	int32_t t75 = 1;

    t75 = (x321>(x322&(x323%x324)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x325 = -1;
	volatile uint16_t x326 = UINT16_MAX;
	volatile int16_t x327 = INT16_MIN;
	volatile int32_t t76 = -1;

    t76 = (x325>(x326&(x327%x328)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x329 = 7285U;
	int32_t x330 = -1;
	int64_t x331 = INT64_MIN;
	uint8_t x332 = 13U;
	volatile int32_t t77 = -1051227330;

    t77 = (x329>(x330&(x331%x332)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x334 = 149537911U;
	static int32_t x335 = INT32_MIN;
	static int8_t x336 = INT8_MIN;
	int32_t t78 = 20386894;

    t78 = (x333>(x334&(x335%x336)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint8_t x337 = 9U;
	volatile int32_t x339 = -124;
	int16_t x340 = INT16_MIN;
	static volatile int32_t t79 = -6862185;

    t79 = (x337>(x338&(x339%x340)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x341 = 12;
	volatile int8_t x343 = INT8_MIN;
	static int16_t x344 = -1;
	static int32_t t80 = -126004791;

    t80 = (x341>(x342&(x343%x344)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x345 = 1U;
	int32_t x346 = -6252673;
	int8_t x347 = -50;
	int16_t x348 = -1;
	int32_t t81 = -207493597;

    t81 = (x345>(x346&(x347%x348)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x349 = INT32_MAX;
	volatile int16_t x351 = INT16_MIN;
	volatile uint64_t x352 = 108LLU;
	volatile int32_t t82 = 127362;

    t82 = (x349>(x350&(x351%x352)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x353 = INT8_MIN;
	int16_t x355 = INT16_MAX;
	static int64_t x356 = -1LL;

    t83 = (x353>(x354&(x355%x356)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x357 = -6599;
	static int8_t x359 = -2;
	int32_t x360 = INT32_MAX;
	volatile int32_t t84 = 10;

    t84 = (x357>(x358&(x359%x360)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x361 = INT64_MIN;
	int8_t x362 = INT8_MIN;
	int8_t x363 = 38;
	volatile int32_t t85 = 71587;

    t85 = (x361>(x362&(x363%x364)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x365 = 621041037U;
	int32_t x366 = INT32_MIN;
	static int16_t x367 = -122;
	int32_t t86 = 6826868;

    t86 = (x365>(x366&(x367%x368)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int32_t x370 = 3;
	volatile uint64_t x372 = UINT64_MAX;
	volatile int32_t t87 = -9;

    t87 = (x369>(x370&(x371%x372)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint8_t x373 = UINT8_MAX;
	int32_t x374 = -1;
	int64_t x375 = INT64_MIN;
	static uint64_t x376 = 1148088364391624LLU;

    t88 = (x373>(x374&(x375%x376)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x381 = -11;
	int32_t x382 = INT32_MIN;
	static int32_t x383 = -1;
	uint16_t x384 = UINT16_MAX;
	int32_t t89 = 5980;

    t89 = (x381>(x382&(x383%x384)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x385 = INT32_MIN;
	volatile int16_t x386 = INT16_MAX;
	static int16_t x388 = 493;
	int32_t t90 = 252947;

    t90 = (x385>(x386&(x387%x388)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x389 = 6;
	uint64_t x391 = 12755LLU;
	int8_t x392 = INT8_MIN;
	volatile int32_t t91 = -1;

    t91 = (x389>(x390&(x391%x392)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x393 = 1;
	int64_t x394 = 1034579LL;
	volatile int16_t x395 = INT16_MAX;
	volatile int32_t t92 = -11506869;

    t92 = (x393>(x394&(x395%x396)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x397 = -1;
	int16_t x399 = -14999;
	volatile int64_t x400 = -691197107LL;
	volatile int32_t t93 = 3088;

    t93 = (x397>(x398&(x399%x400)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x401 = INT16_MAX;
	uint32_t x402 = UINT32_MAX;
	int16_t x403 = INT16_MAX;
	volatile uint64_t x404 = 40496LLU;
	int32_t t94 = 765;

    t94 = (x401>(x402&(x403%x404)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x405 = -203729687069LL;
	static volatile int16_t x406 = INT16_MAX;
	int32_t x407 = INT32_MIN;
	volatile int32_t t95 = 114679;

    t95 = (x405>(x406&(x407%x408)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint16_t x409 = 357U;
	int8_t x410 = INT8_MIN;
	int8_t x411 = -1;
	uint64_t x412 = UINT64_MAX;
	volatile int32_t t96 = 1;

    t96 = (x409>(x410&(x411%x412)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x417 = INT16_MAX;
	volatile int8_t x418 = INT8_MAX;
	uint16_t x419 = 7U;
	static int32_t t97 = 32;

    t97 = (x417>(x418&(x419%x420)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x421 = 17;
	int8_t x422 = INT8_MAX;
	int16_t x424 = INT16_MAX;
	int32_t t98 = 0;

    t98 = (x421>(x422&(x423%x424)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x425 = INT32_MAX;
	uint32_t x426 = UINT32_MAX;
	int64_t x427 = -1LL;
	static int16_t x428 = INT16_MIN;
	volatile int32_t t99 = -1349112;

    t99 = (x425>(x426&(x427%x428)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x429 = INT8_MAX;
	static int64_t x430 = -1068671319LL;
	int32_t t100 = -3310;

    t100 = (x429>(x430&(x431%x432)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x433 = 60153U;
	uint64_t x434 = UINT64_MAX;
	static int16_t x435 = -1;
	int16_t x436 = -183;
	volatile int32_t t101 = 0;

    t101 = (x433>(x434&(x435%x436)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x439 = 1U;
	volatile int8_t x440 = -45;
	static int32_t t102 = -655251;

    t102 = (x437>(x438&(x439%x440)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x441 = INT8_MIN;
	uint64_t x443 = 725549177137432621LLU;
	static int8_t x444 = INT8_MAX;
	volatile int32_t t103 = -1;

    t103 = (x441>(x442&(x443%x444)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x445 = UINT64_MAX;
	int32_t x446 = -1;
	static int8_t x447 = INT8_MAX;
	uint64_t x448 = 7LLU;
	int32_t t104 = -11;

    t104 = (x445>(x446&(x447%x448)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint32_t x450 = 28539U;
	static int16_t x451 = INT16_MIN;
	int32_t t105 = 231;

    t105 = (x449>(x450&(x451%x452)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x453 = -1;
	int16_t x454 = -1;
	int8_t x455 = -2;
	int32_t t106 = 5592;

    t106 = (x453>(x454&(x455%x456)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x457 = INT32_MIN;
	int8_t x458 = -1;
	volatile int16_t x459 = INT16_MIN;
	int64_t x460 = INT64_MIN;
	int32_t t107 = -1916;

    t107 = (x457>(x458&(x459%x460)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x461 = INT8_MIN;
	static int16_t x463 = INT16_MIN;
	uint32_t x464 = UINT32_MAX;
	int32_t t108 = -31199068;

    t108 = (x461>(x462&(x463%x464)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x465 = INT16_MIN;
	int8_t x467 = INT8_MIN;
	int16_t x468 = INT16_MIN;
	volatile int32_t t109 = 152160698;

    t109 = (x465>(x466&(x467%x468)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x469 = INT8_MAX;
	int16_t x470 = INT16_MIN;
	static int16_t x471 = INT16_MIN;
	int8_t x472 = INT8_MIN;
	int32_t t110 = 12579578;

    t110 = (x469>(x470&(x471%x472)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x473 = 1U;
	volatile int8_t x475 = INT8_MIN;

    t111 = (x473>(x474&(x475%x476)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x477 = UINT32_MAX;
	uint64_t x478 = 8340933729163LLU;
	int32_t x479 = -1;
	int16_t x480 = -1;
	int32_t t112 = -63;

    t112 = (x477>(x478&(x479%x480)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x481 = 3543514952LL;
	int64_t x483 = INT64_MIN;
	static uint64_t x484 = 7875850LLU;
	static volatile int32_t t113 = -332214960;

    t113 = (x481>(x482&(x483%x484)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint64_t x485 = UINT64_MAX;
	static int8_t x486 = INT8_MIN;
	int16_t x487 = 60;
	int16_t x488 = 2809;
	int32_t t114 = 2906;

    t114 = (x485>(x486&(x487%x488)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x489 = 5927LLU;
	int16_t x490 = -1;
	int32_t t115 = 102823;

    t115 = (x489>(x490&(x491%x492)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x493 = -8;
	uint64_t x495 = 245777589635LLU;
	uint64_t x496 = 8693937LLU;

    t116 = (x493>(x494&(x495%x496)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x498 = 1;
	uint16_t x499 = UINT16_MAX;
	static uint16_t x500 = UINT16_MAX;

    t117 = (x497>(x498&(x499%x500)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int16_t x501 = -3;
	volatile uint32_t x502 = UINT32_MAX;
	static int32_t x503 = INT32_MAX;
	uint16_t x504 = 4U;

    t118 = (x501>(x502&(x503%x504)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile uint64_t x506 = 135226506309LLU;
	static int64_t x508 = INT64_MAX;
	static int32_t t119 = 29922802;

    t119 = (x505>(x506&(x507%x508)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint16_t x509 = 15532U;
	int64_t x511 = 830075821903557LL;
	int64_t x512 = -1LL;
	volatile int32_t t120 = 1203782;

    t120 = (x509>(x510&(x511%x512)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x513 = -6504;
	uint64_t x514 = UINT64_MAX;
	int16_t x515 = 15777;
	static volatile int16_t x516 = -1;

    t121 = (x513>(x514&(x515%x516)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x517 = 4171612643321LLU;
	int16_t x519 = INT16_MAX;
	int16_t x520 = INT16_MIN;
	volatile int32_t t122 = -8;

    t122 = (x517>(x518&(x519%x520)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x521 = INT64_MAX;
	static volatile int8_t x522 = INT8_MIN;
	uint64_t x523 = 120049663690LLU;
	volatile int32_t t123 = -4;

    t123 = (x521>(x522&(x523%x524)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x526 = UINT8_MAX;
	uint8_t x527 = 82U;
	volatile int16_t x528 = INT16_MAX;
	volatile int32_t t124 = 3;

    t124 = (x525>(x526&(x527%x528)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x529 = 29901;
	int32_t x530 = INT32_MIN;
	int64_t x531 = 434817LL;
	int16_t x532 = INT16_MIN;
	int32_t t125 = -171350;

    t125 = (x529>(x530&(x531%x532)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x533 = -124;
	volatile uint64_t x534 = 222313LLU;
	volatile int64_t x535 = INT64_MIN;
	volatile uint64_t x536 = UINT64_MAX;
	int32_t t126 = -10;

    t126 = (x533>(x534&(x535%x536)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x537 = INT32_MIN;
	int16_t x538 = -163;
	uint16_t x540 = 11U;

    t127 = (x537>(x538&(x539%x540)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x541 = INT16_MIN;
	int16_t x542 = 913;
	static int16_t x543 = INT16_MIN;
	int8_t x544 = -1;
	int32_t t128 = -822;

    t128 = (x541>(x542&(x543%x544)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x545 = 5361LLU;
	volatile uint8_t x546 = 4U;
	uint8_t x548 = 1U;
	int32_t t129 = 114;

    t129 = (x545>(x546&(x547%x548)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x550 = INT8_MAX;
	static int64_t x552 = INT64_MIN;
	int32_t t130 = 104936;

    t130 = (x549>(x550&(x551%x552)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x553 = -37;
	static int8_t x554 = 1;
	int32_t x555 = INT32_MIN;
	uint32_t x556 = 3849412U;

    t131 = (x553>(x554&(x555%x556)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x557 = UINT16_MAX;
	uint64_t x558 = 68733164369418LLU;
	int8_t x559 = 4;
	int64_t x560 = INT64_MIN;
	volatile int32_t t132 = -1005595;

    t132 = (x557>(x558&(x559%x560)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x562 = INT8_MIN;
	int64_t x563 = 0LL;
	int32_t t133 = 25;

    t133 = (x561>(x562&(x563%x564)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x565 = -1;
	uint64_t x566 = 28749455297374640LLU;
	static int32_t x567 = 1;
	int16_t x568 = -1;
	int32_t t134 = -3493;

    t134 = (x565>(x566&(x567%x568)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x569 = INT8_MIN;
	int32_t x570 = -1;
	int64_t x572 = INT64_MIN;
	int32_t t135 = -134578334;

    t135 = (x569>(x570&(x571%x572)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x573 = 127U;
	int16_t x574 = -214;
	static int32_t x576 = 37924901;
	volatile int32_t t136 = -2009;

    t136 = (x573>(x574&(x575%x576)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x578 = 28;
	int16_t x579 = -1;
	volatile int8_t x580 = INT8_MIN;
	int32_t t137 = -241380;

    t137 = (x577>(x578&(x579%x580)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x581 = -65;
	static volatile int16_t x582 = 1837;
	int8_t x583 = INT8_MIN;

    t138 = (x581>(x582&(x583%x584)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x585 = -8403;
	static int16_t x586 = -1;
	static uint32_t x587 = 280885478U;
	int64_t x588 = INT64_MAX;
	int32_t t139 = -4046236;

    t139 = (x585>(x586&(x587%x588)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x589 = INT64_MAX;
	static int32_t x590 = -129371870;
	volatile int16_t x591 = 11;
	static int8_t x592 = -5;
	static int32_t t140 = -809;

    t140 = (x589>(x590&(x591%x592)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x593 = 0;
	static int8_t x594 = -1;
	uint16_t x595 = 349U;
	volatile uint8_t x596 = 2U;
	int32_t t141 = 410;

    t141 = (x593>(x594&(x595%x596)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t x598 = 457882LL;
	int8_t x599 = INT8_MIN;
	int32_t t142 = -30;

    t142 = (x597>(x598&(x599%x600)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x601 = UINT16_MAX;
	static volatile uint8_t x602 = 12U;

    t143 = (x601>(x602&(x603%x604)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x605 = INT8_MIN;
	int8_t x606 = -13;
	int8_t x607 = 1;
	volatile uint32_t x608 = 36800386U;
	int32_t t144 = 1;

    t144 = (x605>(x606&(x607%x608)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint64_t x609 = 1689767500161LLU;
	int16_t x610 = INT16_MIN;
	int32_t x611 = INT32_MIN;
	volatile int32_t x612 = INT32_MIN;

    t145 = (x609>(x610&(x611%x612)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x613 = INT8_MIN;
	int8_t x614 = -1;
	int8_t x615 = 1;
	uint16_t x616 = UINT16_MAX;
	static int32_t t146 = 942934;

    t146 = (x613>(x614&(x615%x616)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint64_t x617 = 24LLU;
	static int16_t x618 = INT16_MIN;
	int32_t x619 = -1;
	static volatile int32_t t147 = -3019;

    t147 = (x617>(x618&(x619%x620)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x621 = INT64_MIN;
	int8_t x622 = 22;
	uint64_t x623 = UINT64_MAX;
	volatile uint32_t x624 = 3593U;
	volatile int32_t t148 = -3;

    t148 = (x621>(x622&(x623%x624)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int16_t x625 = INT16_MAX;
	int32_t x626 = 232360771;
	uint16_t x628 = 898U;

    t149 = (x625>(x626&(x627%x628)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x630 = 29573051LL;
	static int32_t x631 = -838;
	volatile int16_t x632 = INT16_MIN;
	static volatile int32_t t150 = 6365;

    t150 = (x629>(x630&(x631%x632)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x633 = 0U;
	static int32_t x634 = INT32_MAX;
	int16_t x636 = -1;
	volatile int32_t t151 = -295874;

    t151 = (x633>(x634&(x635%x636)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x638 = 1267951LL;
	volatile int32_t x639 = INT32_MIN;
	volatile uint64_t x640 = 766653LLU;
	volatile int32_t t152 = 30736;

    t152 = (x637>(x638&(x639%x640)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint8_t x641 = 28U;
	static int16_t x642 = 2;
	uint64_t x643 = 482146467267020706LLU;
	static uint8_t x644 = UINT8_MAX;
	int32_t t153 = 1976009;

    t153 = (x641>(x642&(x643%x644)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x645 = INT16_MAX;
	int8_t x646 = INT8_MAX;
	int16_t x647 = INT16_MAX;
	int32_t t154 = -11928996;

    t154 = (x645>(x646&(x647%x648)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x649 = 743LLU;
	uint16_t x650 = UINT16_MAX;
	int16_t x651 = 7;
	int64_t x652 = 680929LL;
	volatile int32_t t155 = 97488603;

    t155 = (x649>(x650&(x651%x652)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x653 = 3342946LL;
	int16_t x654 = 468;
	int64_t x655 = INT64_MAX;
	volatile int32_t t156 = -68394;

    t156 = (x653>(x654&(x655%x656)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x657 = INT64_MIN;
	static uint64_t x658 = UINT64_MAX;
	static uint8_t x659 = 7U;
	int32_t t157 = -1023598;

    t157 = (x657>(x658&(x659%x660)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint16_t x661 = 284U;
	int8_t x662 = -51;
	static volatile int32_t x663 = INT32_MIN;
	int64_t x664 = -1972228060912LL;
	volatile int32_t t158 = -1050249962;

    t158 = (x661>(x662&(x663%x664)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x665 = INT32_MAX;
	static volatile int8_t x666 = 1;
	int16_t x668 = -85;
	int32_t t159 = -79112;

    t159 = (x665>(x666&(x667%x668)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x669 = -284416;
	volatile uint16_t x670 = 56U;
	uint16_t x672 = 767U;
	int32_t t160 = -175998;

    t160 = (x669>(x670&(x671%x672)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x673 = 539243790679936LLU;
	int16_t x675 = -6;
	int8_t x676 = INT8_MAX;

    t161 = (x673>(x674&(x675%x676)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x678 = INT8_MAX;
	volatile int8_t x679 = -1;
	static uint64_t x680 = UINT64_MAX;
	static volatile int32_t t162 = 45355;

    t162 = (x677>(x678&(x679%x680)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint8_t x681 = UINT8_MAX;
	uint32_t x683 = 11546U;
	volatile int32_t x684 = -1;
	static int32_t t163 = -682905;

    t163 = (x681>(x682&(x683%x684)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x685 = -2;
	int64_t x686 = INT64_MAX;
	uint64_t x687 = UINT64_MAX;
	uint32_t x688 = 8318U;
	static volatile int32_t t164 = 116499;

    t164 = (x685>(x686&(x687%x688)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x689 = 1;
	volatile int8_t x692 = INT8_MAX;
	volatile int32_t t165 = 43;

    t165 = (x689>(x690&(x691%x692)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x693 = -1;
	int32_t x694 = INT32_MIN;
	int64_t x695 = -1LL;
	volatile int64_t x696 = 65224351664024LL;
	volatile int32_t t166 = -1009;

    t166 = (x693>(x694&(x695%x696)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x697 = UINT16_MAX;
	volatile int64_t x698 = -5252300364LL;
	int8_t x700 = 26;
	volatile int32_t t167 = -4;

    t167 = (x697>(x698&(x699%x700)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x701 = 43U;
	int16_t x702 = INT16_MIN;
	static uint64_t x703 = 2775LLU;
	int16_t x704 = -3415;
	static int32_t t168 = -19159926;

    t168 = (x701>(x702&(x703%x704)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x705 = 71507402234283346LL;
	int16_t x706 = 3766;
	uint32_t x707 = UINT32_MAX;
	volatile int16_t x708 = INT16_MIN;

    t169 = (x705>(x706&(x707%x708)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x709 = UINT32_MAX;
	int64_t x710 = -1LL;
	int64_t x711 = -54LL;
	static uint16_t x712 = 4418U;

    t170 = (x709>(x710&(x711%x712)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x713 = -319LL;
	uint8_t x714 = UINT8_MAX;
	int16_t x715 = INT16_MAX;
	int64_t x716 = INT64_MIN;
	int32_t t171 = 104502639;

    t171 = (x713>(x714&(x715%x716)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x717 = 1013U;
	static int16_t x720 = INT16_MIN;

    t172 = (x717>(x718&(x719%x720)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x721 = INT32_MIN;
	int64_t x722 = 718244171LL;
	volatile int32_t x723 = -1;
	int64_t x724 = -3650333922LL;
	int32_t t173 = 651488;

    t173 = (x721>(x722&(x723%x724)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x726 = INT16_MAX;
	int16_t x727 = 1;
	uint16_t x728 = UINT16_MAX;
	int32_t t174 = -23126;

    t174 = (x725>(x726&(x727%x728)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x729 = INT16_MIN;
	int8_t x730 = INT8_MAX;
	int16_t x731 = INT16_MAX;
	int8_t x732 = -55;
	static int32_t t175 = 1;

    t175 = (x729>(x730&(x731%x732)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x733 = -1;
	uint32_t x734 = 1017878360U;
	int8_t x735 = -14;
	static int32_t t176 = -24588;

    t176 = (x733>(x734&(x735%x736)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x737 = INT32_MAX;
	static uint8_t x738 = UINT8_MAX;
	static volatile uint32_t x739 = 60272691U;
	uint8_t x740 = UINT8_MAX;

    t177 = (x737>(x738&(x739%x740)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint64_t x741 = UINT64_MAX;
	int8_t x742 = INT8_MAX;
	int64_t x743 = 4088520LL;
	int64_t x744 = 11212790LL;

    t178 = (x741>(x742&(x743%x744)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x745 = -2971762035976LL;
	static int16_t x746 = -6623;
	int8_t x747 = INT8_MAX;
	int16_t x748 = -1;

    t179 = (x745>(x746&(x747%x748)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint32_t x752 = 23338766U;
	int32_t t180 = 409676;

    t180 = (x749>(x750&(x751%x752)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x755 = INT16_MAX;
	uint64_t x756 = UINT64_MAX;
	static int32_t t181 = 9;

    t181 = (x753>(x754&(x755%x756)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x758 = INT64_MIN;
	int32_t x760 = INT32_MIN;
	int32_t t182 = 14983;

    t182 = (x757>(x758&(x759%x760)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x765 = INT16_MIN;
	int16_t x766 = INT16_MIN;
	uint32_t x767 = UINT32_MAX;
	volatile int32_t t183 = 0;

    t183 = (x765>(x766&(x767%x768)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x771 = INT64_MAX;
	uint8_t x772 = 1U;
	volatile int32_t t184 = -5040;

    t184 = (x769>(x770&(x771%x772)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x773 = 0U;
	static volatile uint64_t x774 = UINT64_MAX;
	int8_t x775 = INT8_MAX;
	static uint64_t x776 = 493344LLU;

    t185 = (x773>(x774&(x775%x776)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x777 = INT8_MIN;
	int32_t x779 = -460;

    t186 = (x777>(x778&(x779%x780)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x781 = INT64_MAX;
	uint16_t x783 = UINT16_MAX;
	int32_t t187 = -51583;

    t187 = (x781>(x782&(x783%x784)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x786 = INT16_MIN;
	static uint16_t x787 = 0U;
	uint8_t x788 = UINT8_MAX;
	int32_t t188 = -118396;

    t188 = (x785>(x786&(x787%x788)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x789 = -1;
	volatile int32_t x790 = -1;
	int8_t x791 = 28;
	static int64_t x792 = INT64_MIN;

    t189 = (x789>(x790&(x791%x792)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x794 = 3U;
	int8_t x795 = INT8_MIN;
	volatile int32_t x796 = INT32_MAX;
	static int32_t t190 = -385;

    t190 = (x793>(x794&(x795%x796)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x797 = 8LL;
	int16_t x798 = INT16_MAX;
	int8_t x800 = INT8_MIN;
	int32_t t191 = -967851526;

    t191 = (x797>(x798&(x799%x800)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x801 = -56186;
	static int32_t x802 = -1;
	uint8_t x803 = 2U;
	volatile int32_t x804 = -1;
	static int32_t t192 = 82431005;

    t192 = (x801>(x802&(x803%x804)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x805 = -16164638LL;
	static volatile uint8_t x807 = UINT8_MAX;
	volatile int32_t t193 = -2274;

    t193 = (x805>(x806&(x807%x808)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x810 = INT8_MIN;
	int8_t x812 = 1;
	volatile int32_t t194 = -48884;

    t194 = (x809>(x810&(x811%x812)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x813 = INT64_MIN;
	volatile int8_t x814 = INT8_MIN;
	uint32_t x815 = 4856110U;
	int64_t x816 = INT64_MIN;
	int32_t t195 = -792914297;

    t195 = (x813>(x814&(x815%x816)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x817 = -1LL;
	uint16_t x818 = 636U;
	static int64_t x819 = INT64_MAX;
	volatile int32_t t196 = -232981;

    t196 = (x817>(x818&(x819%x820)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x822 = -2206546084LL;
	uint8_t x824 = 10U;
	volatile int32_t t197 = -36110925;

    t197 = (x821>(x822&(x823%x824)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x826 = 921U;
	volatile int16_t x827 = INT16_MIN;
	int32_t t198 = 1413636;

    t198 = (x825>(x826&(x827%x828)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x829 = 2769U;
	uint16_t x830 = 29628U;
	int64_t x831 = 49977731LL;
	static uint16_t x832 = UINT16_MAX;
	volatile int32_t t199 = -253411;

    t199 = (x829>(x830&(x831%x832)));

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



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

int8_t x1 = -1;
static int16_t x2 = -51;
static int16_t x5 = 1;
int32_t t1 = -26541;
int32_t t2 = 0;
uint64_t x21 = UINT64_MAX;
int32_t t6 = -174;
uint32_t x29 = 164039919U;
int64_t x30 = INT64_MAX;
volatile int8_t x31 = 4;
int16_t x37 = 1974;
volatile int32_t x39 = -1;
int64_t x40 = 24295605121924LL;
volatile int32_t t10 = -4785;
int64_t x46 = INT64_MIN;
int8_t x55 = 3;
int16_t x60 = INT16_MAX;
volatile uint32_t x61 = 3826U;
static int16_t x64 = -5;
uint32_t t15 = 7798U;
static int16_t x67 = INT16_MIN;
static uint32_t x69 = 174669077U;
int8_t x70 = -1;
int16_t x74 = INT16_MAX;
volatile int8_t x78 = -1;
uint8_t x80 = UINT8_MAX;
int64_t x83 = 6379656LL;
volatile int64_t t20 = -443181746053692145LL;
uint64_t x87 = 3LLU;
volatile uint16_t x88 = 11155U;
int32_t t23 = 926143177;
volatile uint32_t t24 = 2785880U;
uint64_t x105 = 12411647865715662LLU;
volatile int64_t x107 = INT64_MIN;
int32_t x111 = INT32_MIN;
int16_t x117 = -3;
int32_t x125 = INT32_MIN;
static uint16_t x128 = 927U;
static int32_t t34 = 23;
int32_t x149 = -1998;
volatile int32_t t40 = 831;
int32_t x169 = 1843;
volatile int32_t x171 = INT32_MIN;
volatile int32_t t42 = -80;
static int32_t x178 = 1353;
int8_t x180 = INT8_MAX;
int16_t x181 = INT16_MIN;
static int16_t x187 = -1;
static uint64_t x188 = 81740782365LLU;
volatile uint32_t x194 = UINT32_MAX;
static uint16_t x199 = 1U;
static int64_t x207 = INT64_MIN;
int8_t x209 = 2;
int16_t x215 = INT16_MIN;
int32_t t53 = 71;
int64_t t54 = -534229126293113505LL;
uint8_t x222 = UINT8_MAX;
int64_t x227 = INT64_MIN;
static uint64_t t56 = 4347113320248549LLU;
volatile int64_t t57 = 95371700655LL;
uint64_t x235 = 69797917150991LLU;
uint64_t x245 = 1271486607LLU;
volatile int16_t x249 = INT16_MIN;
int64_t x257 = INT64_MIN;
uint8_t x264 = UINT8_MAX;
volatile int16_t x267 = -1;
int16_t x268 = 1;
uint32_t x270 = UINT32_MAX;
int8_t x272 = -32;
int8_t x278 = 1;
volatile uint16_t x289 = UINT16_MAX;
volatile int32_t x290 = -19;
volatile int32_t x294 = 214144368;
volatile int32_t t73 = -16;
int64_t t74 = 1LL;
int32_t x307 = INT32_MIN;
uint8_t x310 = UINT8_MAX;
volatile uint16_t x326 = 323U;
int32_t x329 = INT32_MAX;
int64_t x330 = INT64_MIN;
volatile uint32_t x332 = UINT32_MAX;
uint64_t x336 = 16548208219897319LLU;
volatile int32_t t83 = -59;
int32_t t84 = 0;
int32_t t88 = 11027;
volatile int64_t t89 = -225699807LL;
static uint8_t x363 = 59U;
uint8_t x364 = UINT8_MAX;
volatile int32_t t90 = -128715658;
volatile int32_t t91 = -3;
static uint8_t x375 = UINT8_MAX;
int32_t x379 = 492983;
static uint64_t t96 = 633680LLU;
int8_t x389 = INT8_MAX;
int64_t x391 = INT64_MIN;
uint32_t t100 = 21U;
uint32_t x410 = 59136890U;
static volatile int32_t t103 = 95;
uint64_t x417 = 354LLU;
static int32_t x425 = INT32_MIN;
uint16_t x428 = UINT16_MAX;
volatile int8_t x430 = INT8_MAX;
volatile int32_t t107 = 383676669;
static volatile int32_t t109 = 7257;
static int16_t x447 = INT16_MIN;
int32_t x452 = 0;
volatile int32_t t112 = -299133;
int32_t x454 = 114;
volatile int64_t x461 = INT64_MIN;
int16_t x476 = -1;
volatile int64_t t118 = 56357LL;
int32_t x479 = INT32_MIN;
int8_t x483 = 1;
uint8_t x484 = UINT8_MAX;
uint8_t x486 = 5U;
volatile int32_t x490 = INT32_MIN;
volatile uint32_t t126 = 1045817433U;
volatile int16_t x510 = INT16_MIN;
volatile uint16_t x511 = 11895U;
volatile int64_t x513 = INT64_MIN;
int32_t x514 = -1;
int32_t x522 = INT32_MAX;
int32_t t130 = -232;
static uint64_t x531 = 671995784LLU;
static volatile int32_t x536 = 1;
static int16_t x538 = -1;
int32_t t134 = -26206;
volatile uint32_t t135 = 117990449U;
int32_t x551 = -569;
static uint64_t x552 = 1370000164072835042LLU;
int32_t t139 = -463835;
static int32_t x571 = 13;
int8_t x580 = -1;
static int32_t t144 = 30040;
static int64_t x584 = -1LL;
int16_t x588 = INT16_MIN;
static int64_t x589 = -1LL;
uint64_t x596 = 63LLU;
uint64_t x597 = 5LLU;
int16_t x598 = INT16_MIN;
uint64_t x599 = 62228794155LLU;
static uint64_t x602 = UINT64_MAX;
int32_t t150 = 9974;
uint64_t x608 = 77LLU;
int8_t x612 = -1;
uint64_t t155 = 7783LLU;
static volatile int16_t x630 = INT16_MAX;
uint8_t x635 = 11U;
int16_t x636 = INT16_MIN;
static volatile int64_t t158 = 288675LL;
int8_t x641 = -1;
int64_t x659 = -23LL;
volatile uint16_t x664 = 3186U;
uint64_t t165 = 47086LLU;
volatile int32_t x665 = 459135;
uint16_t x667 = 7U;
uint64_t x673 = UINT64_MAX;
volatile uint64_t t168 = 86070626LLU;
static uint16_t x677 = UINT16_MAX;
static int16_t x678 = -1;
uint64_t x679 = UINT64_MAX;
int32_t t169 = 98750151;
int16_t x688 = -1;
int8_t x692 = INT8_MAX;
int16_t x698 = -1;
int16_t x700 = INT16_MIN;
volatile int32_t t174 = -123;
uint32_t x701 = 21897U;
static int64_t x702 = -1LL;
int32_t x706 = -10825338;
int32_t x708 = INT32_MIN;
int64_t x709 = INT64_MIN;
int8_t x714 = 5;
volatile int16_t x715 = INT16_MAX;
static int32_t t178 = 11;
uint32_t x717 = 26385U;
static volatile uint16_t x729 = 86U;
uint16_t x731 = UINT16_MAX;
int32_t x733 = -1;
volatile int32_t t183 = 889311;
static uint32_t x738 = UINT32_MAX;
volatile int32_t x740 = -1;
int32_t x742 = INT32_MIN;
int64_t x752 = 43LL;
int32_t t187 = 794293;
int32_t t189 = 96147810;
volatile int32_t x765 = -232278;
static volatile uint8_t x778 = UINT8_MAX;
static uint16_t x787 = 420U;
int8_t x790 = 0;
static int32_t x795 = 99;
int64_t x796 = INT64_MAX;
int64_t x797 = -7561482783661LL;


void f0(void) {
    	static uint16_t x3 = 6U;
	int16_t x4 = INT16_MIN;
	int32_t t0 = 1534367;

    t0 = (x1&(x2!=(x3!=x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint32_t x6 = UINT32_MAX;
	int16_t x7 = 206;
	static int32_t x8 = INT32_MAX;

    t1 = (x5&(x6!=(x7!=x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = -6559;
	int8_t x10 = -1;
	int64_t x11 = 21280LL;
	static int64_t x12 = INT64_MAX;

    t2 = (x9&(x10!=(x11!=x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = 5U;
	int32_t x14 = INT32_MAX;
	int64_t x15 = -894692LL;
	int32_t x16 = -1;
	int32_t t3 = 10411;

    t3 = (x13&(x14!=(x15!=x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint32_t x17 = 5789U;
	uint64_t x18 = UINT64_MAX;
	static int32_t x19 = -1;
	int64_t x20 = INT64_MIN;
	volatile uint32_t t4 = 560U;

    t4 = (x17&(x18!=(x19!=x20)));

    if (t4 != 1U) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x22 = INT16_MIN;
	volatile int8_t x23 = INT8_MIN;
	uint8_t x24 = 0U;
	uint64_t t5 = 19480372LLU;

    t5 = (x21&(x22!=(x23!=x24)));

    if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = -1;
	static int64_t x26 = INT64_MIN;
	volatile uint64_t x27 = 1117076730738103780LLU;
	int32_t x28 = INT32_MIN;

    t6 = (x25&(x26!=(x27!=x28)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x32 = 5;
	volatile uint32_t t7 = 8108U;

    t7 = (x29&(x30!=(x31!=x32)));

    if (t7 != 1U) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MIN;
	int32_t x34 = -1;
	static int8_t x35 = INT8_MAX;
	int32_t x36 = 1;
	int32_t t8 = 26891;

    t8 = (x33&(x34!=(x35!=x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x38 = -1;
	static int32_t t9 = -18;

    t9 = (x37&(x38!=(x39!=x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x41 = INT16_MAX;
	volatile uint16_t x42 = 401U;
	static int16_t x43 = INT16_MIN;
	int8_t x44 = INT8_MIN;

    t10 = (x41&(x42!=(x43!=x44)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = INT64_MAX;
	volatile int16_t x47 = INT16_MIN;
	uint64_t x48 = UINT64_MAX;
	volatile int64_t t11 = 1951734693LL;

    t11 = (x45&(x46!=(x47!=x48)));

    if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = 1;
	volatile uint8_t x50 = UINT8_MAX;
	int16_t x51 = INT16_MAX;
	int8_t x52 = 7;
	volatile int32_t t12 = 15838816;

    t12 = (x49&(x50!=(x51!=x52)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint16_t x53 = 3U;
	static int32_t x54 = INT32_MIN;
	volatile int8_t x56 = 12;
	int32_t t13 = -7271664;

    t13 = (x53&(x54!=(x55!=x56)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x57 = 13823168431213LL;
	volatile uint8_t x58 = UINT8_MAX;
	int32_t x59 = -1;
	static volatile int64_t t14 = 21697LL;

    t14 = (x57&(x58!=(x59!=x60)));

    if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x62 = INT64_MAX;
	int64_t x63 = INT64_MIN;

    t15 = (x61&(x62!=(x63!=x64)));

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint16_t x65 = 24U;
	static uint64_t x66 = 1201382775LLU;
	volatile int16_t x68 = INT16_MAX;
	int32_t t16 = 13;

    t16 = (x65&(x66!=(x67!=x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x71 = INT32_MAX;
	int64_t x72 = -812LL;
	static uint32_t t17 = 1U;

    t17 = (x69&(x70!=(x71!=x72)));

    if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = -1;
	uint32_t x75 = 12U;
	uint32_t x76 = UINT32_MAX;
	volatile int32_t t18 = -6;

    t18 = (x73&(x74!=(x75!=x76)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = INT16_MIN;
	uint8_t x79 = UINT8_MAX;
	volatile int32_t t19 = 64450;

    t19 = (x77&(x78!=(x79!=x80)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x81 = -1112094578195LL;
	int32_t x82 = 48;
	static int16_t x84 = INT16_MAX;

    t20 = (x81&(x82!=(x83!=x84)));

    if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = -301LL;
	int16_t x86 = -1;
	volatile int64_t t21 = -987326505666646LL;

    t21 = (x85&(x86!=(x87!=x88)));

    if (t21 != 1LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x89 = 374944453313LLU;
	uint8_t x90 = 32U;
	int64_t x91 = INT64_MIN;
	volatile int16_t x92 = -1;
	uint64_t t22 = 85414LLU;

    t22 = (x89&(x90!=(x91!=x92)));

    if (t22 != 1LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x93 = 454U;
	volatile int16_t x94 = INT16_MIN;
	int32_t x95 = INT32_MIN;
	int8_t x96 = -60;

    t23 = (x93&(x94!=(x95!=x96)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x97 = 2271877U;
	static volatile uint16_t x98 = 1U;
	static int32_t x99 = INT32_MIN;
	static uint8_t x100 = 54U;

    t24 = (x97&(x98!=(x99!=x100)));

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x101 = 190942629284LL;
	uint32_t x102 = 62609U;
	int16_t x103 = -20;
	volatile int16_t x104 = INT16_MAX;
	volatile int64_t t25 = 104365989835LL;

    t25 = (x101&(x102!=(x103!=x104)));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x106 = UINT8_MAX;
	int64_t x108 = -6178LL;
	static uint64_t t26 = 22236LLU;

    t26 = (x105&(x106!=(x107!=x108)));

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x109 = UINT8_MAX;
	volatile int64_t x110 = -22LL;
	int64_t x112 = INT64_MIN;
	volatile int32_t t27 = 2;

    t27 = (x109&(x110!=(x111!=x112)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x113 = -1;
	volatile int64_t x114 = -1LL;
	uint16_t x115 = 0U;
	volatile int16_t x116 = INT16_MIN;
	int32_t t28 = 26;

    t28 = (x113&(x114!=(x115!=x116)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x118 = INT16_MAX;
	int64_t x119 = -1LL;
	int16_t x120 = INT16_MAX;
	static volatile int32_t t29 = 26580;

    t29 = (x117&(x118!=(x119!=x120)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint16_t x121 = 3U;
	int32_t x122 = INT32_MIN;
	volatile int64_t x123 = INT64_MIN;
	volatile int64_t x124 = INT64_MIN;
	int32_t t30 = -35191;

    t30 = (x121&(x122!=(x123!=x124)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x126 = UINT32_MAX;
	static volatile uint64_t x127 = 484858LLU;
	volatile int32_t t31 = 131;

    t31 = (x125&(x126!=(x127!=x128)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = -1;
	uint8_t x130 = 10U;
	int64_t x131 = INT64_MIN;
	int16_t x132 = INT16_MIN;
	static volatile int32_t t32 = 1796465;

    t32 = (x129&(x130!=(x131!=x132)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = -1;
	volatile int8_t x134 = INT8_MIN;
	static int8_t x135 = INT8_MAX;
	uint32_t x136 = 49U;
	int32_t t33 = 2000921;

    t33 = (x133&(x134!=(x135!=x136)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = -4;
	uint32_t x138 = UINT32_MAX;
	uint16_t x139 = 6U;
	volatile int64_t x140 = INT64_MIN;

    t34 = (x137&(x138!=(x139!=x140)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int16_t x141 = 7;
	static uint8_t x142 = 0U;
	int64_t x143 = 153999LL;
	int8_t x144 = -1;
	static volatile int32_t t35 = -825396;

    t35 = (x141&(x142!=(x143!=x144)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = INT16_MAX;
	volatile uint16_t x146 = UINT16_MAX;
	static volatile uint8_t x147 = 0U;
	int32_t x148 = INT32_MIN;
	int32_t t36 = 41;

    t36 = (x145&(x146!=(x147!=x148)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x150 = INT32_MAX;
	int32_t x151 = INT32_MAX;
	uint8_t x152 = 62U;
	volatile int32_t t37 = -14590;

    t37 = (x149&(x150!=(x151!=x152)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x153 = 2U;
	int16_t x154 = INT16_MIN;
	int16_t x155 = -1304;
	uint8_t x156 = UINT8_MAX;
	static int32_t t38 = -126973;

    t38 = (x153&(x154!=(x155!=x156)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint8_t x157 = UINT8_MAX;
	int32_t x158 = INT32_MIN;
	uint64_t x159 = UINT64_MAX;
	int64_t x160 = INT64_MAX;
	volatile int32_t t39 = 14235258;

    t39 = (x157&(x158!=(x159!=x160)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = INT16_MAX;
	uint16_t x162 = 2968U;
	int64_t x163 = -28LL;
	volatile int64_t x164 = -5561LL;

    t40 = (x161&(x162!=(x163!=x164)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x165 = 6835LLU;
	volatile int32_t x166 = INT32_MIN;
	int64_t x167 = 7403922LL;
	static int64_t x168 = -1LL;
	uint64_t t41 = 871038LLU;

    t41 = (x165&(x166!=(x167!=x168)));

    if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x170 = UINT64_MAX;
	int64_t x172 = INT64_MIN;

    t42 = (x169&(x170!=(x171!=x172)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint16_t x173 = UINT16_MAX;
	int16_t x174 = -8068;
	volatile int8_t x175 = INT8_MAX;
	int32_t x176 = -1;
	static int32_t t43 = 816026;

    t43 = (x173&(x174!=(x175!=x176)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = -6;
	int32_t x179 = INT32_MIN;
	int32_t t44 = -2;

    t44 = (x177&(x178!=(x179!=x180)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x182 = 4836;
	int16_t x183 = -1;
	int32_t x184 = -1;
	volatile int32_t t45 = -213820;

    t45 = (x181&(x182!=(x183!=x184)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = 1;
	int16_t x186 = INT16_MIN;
	int32_t t46 = -13;

    t46 = (x185&(x186!=(x187!=x188)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x189 = INT16_MIN;
	uint8_t x190 = 1U;
	int8_t x191 = 1;
	int16_t x192 = INT16_MIN;
	volatile int32_t t47 = 5782;

    t47 = (x189&(x190!=(x191!=x192)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x193 = 89539194U;
	int8_t x195 = -1;
	int8_t x196 = INT8_MAX;
	static volatile uint32_t t48 = 19U;

    t48 = (x193&(x194!=(x195!=x196)));

    if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x197 = UINT64_MAX;
	int64_t x198 = -1LL;
	volatile int16_t x200 = -1;
	volatile uint64_t t49 = 52990LLU;

    t49 = (x197&(x198!=(x199!=x200)));

    if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x201 = -24184703;
	uint8_t x202 = 0U;
	uint16_t x203 = UINT16_MAX;
	int16_t x204 = INT16_MAX;
	int32_t t50 = 8322;

    t50 = (x201&(x202!=(x203!=x204)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x205 = UINT32_MAX;
	int8_t x206 = 6;
	int64_t x208 = -11574311004LL;
	uint32_t t51 = 5255U;

    t51 = (x205&(x206!=(x207!=x208)));

    if (t51 != 1U) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x210 = -1;
	volatile int8_t x211 = -1;
	volatile int16_t x212 = INT16_MIN;
	volatile int32_t t52 = -128644;

    t52 = (x209&(x210!=(x211!=x212)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x213 = 1U;
	uint16_t x214 = 11861U;
	int16_t x216 = 0;

    t53 = (x213&(x214!=(x215!=x216)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = INT64_MIN;
	int64_t x218 = -12112274LL;
	int32_t x219 = -938;
	uint32_t x220 = UINT32_MAX;

    t54 = (x217&(x218!=(x219!=x220)));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x221 = 7376;
	volatile uint32_t x223 = 208U;
	uint64_t x224 = 107409857064388843LLU;
	volatile int32_t t55 = 719316;

    t55 = (x221&(x222!=(x223!=x224)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x225 = 8541349LLU;
	static int64_t x226 = INT64_MAX;
	volatile uint32_t x228 = 32U;

    t56 = (x225&(x226!=(x227!=x228)));

    if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x229 = INT64_MIN;
	int64_t x230 = INT64_MIN;
	static uint32_t x231 = 59229421U;
	static int8_t x232 = INT8_MIN;

    t57 = (x229&(x230!=(x231!=x232)));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x233 = INT32_MIN;
	volatile uint16_t x234 = 1U;
	static int32_t x236 = INT32_MIN;
	static int32_t t58 = 5445636;

    t58 = (x233&(x234!=(x235!=x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = -1;
	uint8_t x238 = 1U;
	volatile int16_t x239 = -1;
	int32_t x240 = INT32_MIN;
	volatile int32_t t59 = -330582;

    t59 = (x237&(x238!=(x239!=x240)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x241 = 499LLU;
	uint16_t x242 = 27060U;
	int8_t x243 = INT8_MIN;
	uint32_t x244 = 1U;
	static volatile uint64_t t60 = 420LLU;

    t60 = (x241&(x242!=(x243!=x244)));

    if (t60 != 1LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x246 = -1LL;
	volatile uint16_t x247 = UINT16_MAX;
	static int32_t x248 = INT32_MIN;
	static volatile uint64_t t61 = 2334106190636405LLU;

    t61 = (x245&(x246!=(x247!=x248)));

    if (t61 != 1LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x250 = 291194LLU;
	uint64_t x251 = UINT64_MAX;
	volatile int8_t x252 = INT8_MAX;
	volatile int32_t t62 = 32223439;

    t62 = (x249&(x250!=(x251!=x252)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = INT8_MIN;
	int16_t x254 = -1;
	static uint16_t x255 = 1916U;
	int16_t x256 = -1;
	volatile int32_t t63 = 3315866;

    t63 = (x253&(x254!=(x255!=x256)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x258 = 56U;
	uint64_t x259 = 63000987571LLU;
	int32_t x260 = 32068548;
	volatile int64_t t64 = 14988949305270LL;

    t64 = (x257&(x258!=(x259!=x260)));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x261 = 1019U;
	uint16_t x262 = UINT16_MAX;
	int32_t x263 = 959765359;
	volatile int32_t t65 = 5255348;

    t65 = (x261&(x262!=(x263!=x264)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = INT8_MIN;
	volatile uint16_t x266 = 1443U;
	volatile int32_t t66 = 1373;

    t66 = (x265&(x266!=(x267!=x268)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x269 = 2427;
	volatile int64_t x271 = INT64_MIN;
	static volatile int32_t t67 = 27;

    t67 = (x269&(x270!=(x271!=x272)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x273 = 678869789790103LLU;
	int8_t x274 = -1;
	int16_t x275 = 3845;
	uint32_t x276 = 23957369U;
	volatile uint64_t t68 = 144597LLU;

    t68 = (x273&(x274!=(x275!=x276)));

    if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = 235LL;
	static int16_t x279 = 23;
	int16_t x280 = 116;
	static int64_t t69 = -431146611566740449LL;

    t69 = (x277&(x278!=(x279!=x280)));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = -513LL;
	static int16_t x282 = 55;
	static int8_t x283 = -29;
	uint16_t x284 = 1013U;
	static volatile int64_t t70 = 125964519LL;

    t70 = (x281&(x282!=(x283!=x284)));

    if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x285 = 3U;
	volatile uint64_t x286 = UINT64_MAX;
	volatile int32_t x287 = 204831;
	uint32_t x288 = 3U;
	static volatile int32_t t71 = -3612;

    t71 = (x285&(x286!=(x287!=x288)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x291 = INT8_MAX;
	int16_t x292 = INT16_MAX;
	int32_t t72 = -45875393;

    t72 = (x289&(x290!=(x291!=x292)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile uint16_t x293 = 7U;
	static volatile int32_t x295 = INT32_MAX;
	uint64_t x296 = 70291139938LLU;

    t73 = (x293&(x294!=(x295!=x296)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x297 = -1465733LL;
	int16_t x298 = INT16_MIN;
	int32_t x299 = -1;
	int64_t x300 = 30145913086LL;

    t74 = (x297&(x298!=(x299!=x300)));

    if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x301 = INT8_MIN;
	int32_t x302 = INT32_MIN;
	static int32_t x303 = 14;
	int32_t x304 = INT32_MIN;
	static volatile int32_t t75 = 60786341;

    t75 = (x301&(x302!=(x303!=x304)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x305 = 13U;
	static int16_t x306 = INT16_MAX;
	uint64_t x308 = UINT64_MAX;
	volatile int32_t t76 = 172;

    t76 = (x305&(x306!=(x307!=x308)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = INT16_MAX;
	int32_t x311 = INT32_MIN;
	static int16_t x312 = INT16_MIN;
	int32_t t77 = 1116459;

    t77 = (x309&(x310!=(x311!=x312)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint32_t x313 = 4113317U;
	uint8_t x314 = 18U;
	int16_t x315 = 3;
	static volatile uint16_t x316 = 86U;
	uint32_t t78 = 266779140U;

    t78 = (x313&(x314!=(x315!=x316)));

    if (t78 != 1U) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x317 = -1;
	uint16_t x318 = UINT16_MAX;
	static int64_t x319 = -1LL;
	volatile uint8_t x320 = UINT8_MAX;
	volatile int32_t t79 = 3533;

    t79 = (x317&(x318!=(x319!=x320)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x321 = 185619U;
	int64_t x322 = INT64_MIN;
	int16_t x323 = INT16_MIN;
	uint16_t x324 = 2493U;
	uint32_t t80 = 8069U;

    t80 = (x321&(x322!=(x323!=x324)));

    if (t80 != 1U) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x325 = INT64_MAX;
	static int8_t x327 = 62;
	int8_t x328 = -1;
	int64_t t81 = 1LL;

    t81 = (x325&(x326!=(x327!=x328)));

    if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x331 = -10682;
	int32_t t82 = 0;

    t82 = (x329&(x330!=(x331!=x332)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x333 = 1;
	int32_t x334 = INT32_MIN;
	int8_t x335 = INT8_MIN;

    t83 = (x333&(x334!=(x335!=x336)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x337 = -1;
	static uint16_t x338 = 1U;
	volatile uint64_t x339 = UINT64_MAX;
	static uint64_t x340 = UINT64_MAX;

    t84 = (x337&(x338!=(x339!=x340)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = INT64_MIN;
	int64_t x342 = 1052441453607LL;
	int32_t x343 = -1;
	uint16_t x344 = 727U;
	volatile int64_t t85 = -13173784025309022LL;

    t85 = (x341&(x342!=(x343!=x344)));

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x345 = -1;
	int32_t x346 = -1;
	static int64_t x347 = INT64_MIN;
	uint64_t x348 = UINT64_MAX;
	int32_t t86 = -596130;

    t86 = (x345&(x346!=(x347!=x348)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x349 = INT8_MAX;
	volatile uint16_t x350 = 160U;
	int64_t x351 = INT64_MIN;
	static volatile uint64_t x352 = UINT64_MAX;
	int32_t t87 = -3194294;

    t87 = (x349&(x350!=(x351!=x352)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x353 = -1;
	uint64_t x354 = 61669070555916LLU;
	static volatile int32_t x355 = INT32_MIN;
	int16_t x356 = -1;

    t88 = (x353&(x354!=(x355!=x356)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x357 = INT64_MAX;
	int8_t x358 = -1;
	int8_t x359 = INT8_MAX;
	int64_t x360 = -6409641LL;

    t89 = (x357&(x358!=(x359!=x360)));

    if (t89 != 1LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x361 = 5881;
	volatile int64_t x362 = -1LL;

    t90 = (x361&(x362!=(x363!=x364)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint8_t x365 = 1U;
	int64_t x366 = -1619158947244911LL;
	int32_t x367 = INT32_MIN;
	uint16_t x368 = UINT16_MAX;

    t91 = (x365&(x366!=(x367!=x368)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint64_t x369 = UINT64_MAX;
	int32_t x370 = INT32_MIN;
	int64_t x371 = INT64_MIN;
	uint32_t x372 = UINT32_MAX;
	uint64_t t92 = 93621493610LLU;

    t92 = (x369&(x370!=(x371!=x372)));

    if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int32_t x373 = INT32_MIN;
	int16_t x374 = INT16_MIN;
	static int8_t x376 = 49;
	static volatile int32_t t93 = 6669377;

    t93 = (x373&(x374!=(x375!=x376)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x377 = -1;
	volatile uint16_t x378 = UINT16_MAX;
	int32_t x380 = -1;
	volatile int32_t t94 = 95240;

    t94 = (x377&(x378!=(x379!=x380)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x381 = 128403472LLU;
	uint8_t x382 = UINT8_MAX;
	int64_t x383 = -1LL;
	uint32_t x384 = UINT32_MAX;
	volatile uint64_t t95 = 1517488114LLU;

    t95 = (x381&(x382!=(x383!=x384)));

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint64_t x385 = 97745LLU;
	volatile int16_t x386 = INT16_MIN;
	int64_t x387 = -119654606LL;
	int8_t x388 = -41;

    t96 = (x385&(x386!=(x387!=x388)));

    if (t96 != 1LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint64_t x390 = 3631LLU;
	int16_t x392 = INT16_MIN;
	volatile int32_t t97 = 1;

    t97 = (x389&(x390!=(x391!=x392)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint16_t x393 = 9389U;
	static volatile int64_t x394 = -1LL;
	static int16_t x395 = -1;
	int64_t x396 = INT64_MAX;
	int32_t t98 = 11235057;

    t98 = (x393&(x394!=(x395!=x396)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = -1;
	static int64_t x398 = INT64_MIN;
	int64_t x399 = INT64_MIN;
	int16_t x400 = INT16_MIN;
	int32_t t99 = -1572160;

    t99 = (x397&(x398!=(x399!=x400)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x401 = 240602U;
	int32_t x402 = INT32_MAX;
	int32_t x403 = -3;
	static volatile int32_t x404 = 36666;

    t100 = (x401&(x402!=(x403!=x404)));

    if (t100 != 0U) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x405 = INT8_MIN;
	int8_t x406 = INT8_MIN;
	int16_t x407 = -1;
	volatile int64_t x408 = INT64_MIN;
	int32_t t101 = 21;

    t101 = (x405&(x406!=(x407!=x408)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x409 = -1LL;
	volatile int8_t x411 = -1;
	int8_t x412 = INT8_MAX;
	volatile int64_t t102 = -854976LL;

    t102 = (x409&(x410!=(x411!=x412)));

    if (t102 != 1LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = -1;
	volatile uint64_t x414 = UINT64_MAX;
	static volatile int8_t x415 = INT8_MIN;
	int64_t x416 = INT64_MIN;

    t103 = (x413&(x414!=(x415!=x416)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int16_t x418 = INT16_MIN;
	uint16_t x419 = UINT16_MAX;
	int64_t x420 = INT64_MIN;
	uint64_t t104 = 918356859687LLU;

    t104 = (x417&(x418!=(x419!=x420)));

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = 6466;
	static uint16_t x422 = 103U;
	int64_t x423 = INT64_MAX;
	int16_t x424 = INT16_MIN;
	static volatile int32_t t105 = 981287;

    t105 = (x421&(x422!=(x423!=x424)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x426 = INT32_MIN;
	uint8_t x427 = UINT8_MAX;
	static volatile int32_t t106 = -3402;

    t106 = (x425&(x426!=(x427!=x428)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x429 = 79U;
	int64_t x431 = INT64_MIN;
	int8_t x432 = INT8_MAX;

    t107 = (x429&(x430!=(x431!=x432)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x433 = -1;
	static uint32_t x434 = 7677U;
	static volatile int32_t x435 = -1;
	uint8_t x436 = 116U;
	volatile int32_t t108 = 157;

    t108 = (x433&(x434!=(x435!=x436)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = -30489;
	int32_t x438 = INT32_MIN;
	static int32_t x439 = INT32_MIN;
	uint32_t x440 = UINT32_MAX;

    t109 = (x437&(x438!=(x439!=x440)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x441 = INT64_MAX;
	static uint64_t x442 = 6074083947330064LLU;
	int16_t x443 = INT16_MAX;
	uint64_t x444 = 2242LLU;
	volatile int64_t t110 = -463365695776LL;

    t110 = (x441&(x442!=(x443!=x444)));

    if (t110 != 1LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x445 = INT16_MIN;
	int32_t x446 = 18;
	static int16_t x448 = INT16_MIN;
	int32_t t111 = 18;

    t111 = (x445&(x446!=(x447!=x448)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x449 = INT32_MIN;
	volatile int8_t x450 = INT8_MAX;
	int32_t x451 = -1;

    t112 = (x449&(x450!=(x451!=x452)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint8_t x453 = 11U;
	static int16_t x455 = INT16_MAX;
	static uint64_t x456 = 3LLU;
	static int32_t t113 = -21486;

    t113 = (x453&(x454!=(x455!=x456)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x457 = 11077746LLU;
	static int32_t x458 = -84184;
	int16_t x459 = INT16_MAX;
	static int32_t x460 = INT32_MAX;
	volatile uint64_t t114 = 94LLU;

    t114 = (x457&(x458!=(x459!=x460)));

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x462 = UINT32_MAX;
	volatile int8_t x463 = INT8_MIN;
	uint32_t x464 = UINT32_MAX;
	int64_t t115 = -11LL;

    t115 = (x461&(x462!=(x463!=x464)));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint8_t x465 = 0U;
	uint16_t x466 = UINT16_MAX;
	int32_t x467 = -161585;
	static volatile uint8_t x468 = UINT8_MAX;
	volatile int32_t t116 = -168;

    t116 = (x465&(x466!=(x467!=x468)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x469 = 27U;
	uint8_t x470 = 96U;
	volatile int32_t x471 = -1;
	int16_t x472 = INT16_MIN;
	int32_t t117 = -8;

    t117 = (x469&(x470!=(x471!=x472)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x473 = INT64_MIN;
	volatile int16_t x474 = -1;
	uint8_t x475 = 6U;

    t118 = (x473&(x474!=(x475!=x476)));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x477 = 0U;
	int64_t x478 = INT64_MIN;
	int64_t x480 = -27LL;
	volatile uint32_t t119 = 266371880U;

    t119 = (x477&(x478!=(x479!=x480)));

    if (t119 != 0U) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x481 = -27LL;
	int16_t x482 = INT16_MIN;
	static volatile int64_t t120 = 6471631019602854LL;

    t120 = (x481&(x482!=(x483!=x484)));

    if (t120 != 1LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = 47;
	int32_t x487 = INT32_MIN;
	static volatile int32_t x488 = INT32_MIN;
	int32_t t121 = 13313708;

    t121 = (x485&(x486!=(x487!=x488)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = -1LL;
	int32_t x491 = INT32_MIN;
	volatile int32_t x492 = 119267;
	static int64_t t122 = 64385349LL;

    t122 = (x489&(x490!=(x491!=x492)));

    if (t122 != 1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x493 = INT32_MIN;
	static int16_t x494 = -1;
	int32_t x495 = INT32_MIN;
	static uint16_t x496 = 190U;
	int32_t t123 = 1;

    t123 = (x493&(x494!=(x495!=x496)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int8_t x497 = -50;
	int8_t x498 = INT8_MIN;
	int16_t x499 = INT16_MAX;
	int16_t x500 = INT16_MIN;
	volatile int32_t t124 = 1;

    t124 = (x497&(x498!=(x499!=x500)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x501 = 30U;
	int8_t x502 = INT8_MAX;
	volatile int16_t x503 = INT16_MAX;
	volatile uint64_t x504 = UINT64_MAX;
	static volatile int32_t t125 = 3084;

    t125 = (x501&(x502!=(x503!=x504)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint32_t x505 = UINT32_MAX;
	uint16_t x506 = UINT16_MAX;
	volatile uint32_t x507 = UINT32_MAX;
	uint64_t x508 = UINT64_MAX;

    t126 = (x505&(x506!=(x507!=x508)));

    if (t126 != 1U) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x509 = -1;
	uint8_t x512 = 20U;
	volatile int32_t t127 = -7;

    t127 = (x509&(x510!=(x511!=x512)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x515 = INT32_MIN;
	int32_t x516 = 60815;
	volatile int64_t t128 = 133474694963LL;

    t128 = (x513&(x514!=(x515!=x516)));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = -1LL;
	int32_t x518 = INT32_MIN;
	int16_t x519 = INT16_MAX;
	uint16_t x520 = 285U;
	int64_t t129 = 31612347809844709LL;

    t129 = (x517&(x518!=(x519!=x520)));

    if (t129 != 1LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = -1;
	volatile uint64_t x523 = 10812038720LLU;
	static int16_t x524 = INT16_MIN;

    t130 = (x521&(x522!=(x523!=x524)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x525 = -1;
	int64_t x526 = -236597LL;
	volatile uint8_t x527 = 12U;
	volatile uint64_t x528 = 127231151413358153LLU;
	int32_t t131 = -1208266;

    t131 = (x525&(x526!=(x527!=x528)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x529 = INT16_MIN;
	int8_t x530 = INT8_MAX;
	int32_t x532 = 884;
	int32_t t132 = 367;

    t132 = (x529&(x530!=(x531!=x532)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x533 = -230;
	volatile int16_t x534 = 560;
	volatile int64_t x535 = INT64_MIN;
	int32_t t133 = 56130;

    t133 = (x533&(x534!=(x535!=x536)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x537 = UINT8_MAX;
	static int32_t x539 = 4192;
	static volatile int8_t x540 = INT8_MIN;

    t134 = (x537&(x538!=(x539!=x540)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x541 = 50624316U;
	uint64_t x542 = 3595LLU;
	static int64_t x543 = INT64_MAX;
	int16_t x544 = INT16_MIN;

    t135 = (x541&(x542!=(x543!=x544)));

    if (t135 != 0U) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x545 = UINT32_MAX;
	volatile uint64_t x546 = UINT64_MAX;
	uint8_t x547 = 18U;
	uint8_t x548 = UINT8_MAX;
	uint32_t t136 = 213013U;

    t136 = (x545&(x546!=(x547!=x548)));

    if (t136 != 1U) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int64_t x549 = -1LL;
	int8_t x550 = INT8_MAX;
	volatile int64_t t137 = 3068442680LL;

    t137 = (x549&(x550!=(x551!=x552)));

    if (t137 != 1LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = -1;
	volatile int32_t x554 = INT32_MIN;
	int16_t x555 = INT16_MAX;
	int8_t x556 = INT8_MIN;
	static volatile int32_t t138 = 16130;

    t138 = (x553&(x554!=(x555!=x556)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x557 = INT32_MAX;
	uint16_t x558 = 1U;
	int8_t x559 = -1;
	static int32_t x560 = INT32_MAX;

    t139 = (x557&(x558!=(x559!=x560)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x561 = UINT16_MAX;
	int16_t x562 = INT16_MIN;
	int16_t x563 = INT16_MIN;
	uint64_t x564 = UINT64_MAX;
	static int32_t t140 = -200764;

    t140 = (x561&(x562!=(x563!=x564)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int64_t x565 = -1LL;
	int32_t x566 = 160;
	uint64_t x567 = 2414017523LLU;
	volatile uint64_t x568 = 35370497425500LLU;
	volatile int64_t t141 = 0LL;

    t141 = (x565&(x566!=(x567!=x568)));

    if (t141 != 1LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x569 = -1;
	int16_t x570 = -1;
	int64_t x572 = INT64_MIN;
	int32_t t142 = 7327553;

    t142 = (x569&(x570!=(x571!=x572)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x573 = -1;
	volatile int64_t x574 = -1LL;
	static int8_t x575 = INT8_MAX;
	volatile uint8_t x576 = 1U;
	volatile int32_t t143 = -350;

    t143 = (x573&(x574!=(x575!=x576)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x577 = INT32_MIN;
	static int32_t x578 = INT32_MIN;
	int64_t x579 = INT64_MIN;

    t144 = (x577&(x578!=(x579!=x580)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x581 = 207504811LLU;
	volatile uint64_t x582 = 35067523864597905LLU;
	uint16_t x583 = UINT16_MAX;
	uint64_t t145 = 4548821LLU;

    t145 = (x581&(x582!=(x583!=x584)));

    if (t145 != 1LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x585 = 2;
	int32_t x586 = 19003;
	static volatile uint64_t x587 = 18291111070743LLU;
	static int32_t t146 = 582957;

    t146 = (x585&(x586!=(x587!=x588)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x590 = -99195381120416LL;
	int8_t x591 = -15;
	int16_t x592 = 0;
	static int64_t t147 = 117290437709LL;

    t147 = (x589&(x590!=(x591!=x592)));

    if (t147 != 1LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x593 = 109312333LLU;
	static int64_t x594 = INT64_MIN;
	static volatile uint8_t x595 = 1U;
	uint64_t t148 = 912795519LLU;

    t148 = (x593&(x594!=(x595!=x596)));

    if (t148 != 1LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x600 = -43576909LL;
	uint64_t t149 = 13212294LLU;

    t149 = (x597&(x598!=(x599!=x600)));

    if (t149 != 1LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = INT32_MAX;
	volatile uint8_t x603 = UINT8_MAX;
	uint32_t x604 = UINT32_MAX;

    t150 = (x601&(x602!=(x603!=x604)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x605 = 1038222U;
	int32_t x606 = INT32_MIN;
	uint16_t x607 = UINT16_MAX;
	volatile uint32_t t151 = 61U;

    t151 = (x605&(x606!=(x607!=x608)));

    if (t151 != 0U) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x609 = INT16_MIN;
	uint64_t x610 = 15LLU;
	uint16_t x611 = 0U;
	static int32_t t152 = 209274384;

    t152 = (x609&(x610!=(x611!=x612)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = -1;
	uint64_t x614 = UINT64_MAX;
	int16_t x615 = INT16_MIN;
	static uint64_t x616 = 0LLU;
	volatile int32_t t153 = 3600;

    t153 = (x613&(x614!=(x615!=x616)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int32_t x617 = -1;
	int8_t x618 = INT8_MAX;
	volatile uint8_t x619 = UINT8_MAX;
	int64_t x620 = 818242943LL;
	int32_t t154 = -1;

    t154 = (x617&(x618!=(x619!=x620)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x621 = UINT64_MAX;
	volatile uint16_t x622 = 4U;
	static int64_t x623 = 724019824594238957LL;
	uint64_t x624 = 1403586LLU;

    t155 = (x621&(x622!=(x623!=x624)));

    if (t155 != 1LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x625 = -1;
	static int32_t x626 = INT32_MAX;
	int16_t x627 = INT16_MAX;
	int64_t x628 = -1LL;
	int32_t t156 = -208315010;

    t156 = (x625&(x626!=(x627!=x628)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x629 = INT64_MIN;
	int64_t x631 = 33006634170944172LL;
	int16_t x632 = INT16_MIN;
	volatile int64_t t157 = 14228843LL;

    t157 = (x629&(x630!=(x631!=x632)));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x633 = INT64_MIN;
	volatile int8_t x634 = 0;

    t158 = (x633&(x634!=(x635!=x636)));

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x637 = INT8_MAX;
	uint32_t x638 = 97689198U;
	int32_t x639 = INT32_MIN;
	static uint64_t x640 = UINT64_MAX;
	static volatile int32_t t159 = 2517881;

    t159 = (x637&(x638!=(x639!=x640)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x642 = 1731088158U;
	static int16_t x643 = 0;
	int64_t x644 = -89532LL;
	volatile int32_t t160 = -276655;

    t160 = (x641&(x642!=(x643!=x644)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x645 = 126209;
	static int16_t x646 = INT16_MIN;
	int64_t x647 = 292658726414944LL;
	uint32_t x648 = UINT32_MAX;
	volatile int32_t t161 = -2673018;

    t161 = (x645&(x646!=(x647!=x648)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint16_t x649 = 913U;
	static uint16_t x650 = 1220U;
	int32_t x651 = INT32_MIN;
	int16_t x652 = -3;
	volatile int32_t t162 = 3535;

    t162 = (x649&(x650!=(x651!=x652)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x653 = -1;
	uint64_t x654 = UINT64_MAX;
	int16_t x655 = INT16_MAX;
	volatile int32_t x656 = INT32_MIN;
	volatile int32_t t163 = -60;

    t163 = (x653&(x654!=(x655!=x656)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = 13042;
	int8_t x658 = -1;
	uint32_t x660 = 23U;
	int32_t t164 = -31211;

    t164 = (x657&(x658!=(x659!=x660)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x661 = UINT64_MAX;
	int8_t x662 = INT8_MIN;
	uint32_t x663 = 26292U;

    t165 = (x661&(x662!=(x663!=x664)));

    if (t165 != 1LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x666 = INT16_MIN;
	static volatile uint64_t x668 = 23958LLU;
	volatile int32_t t166 = 417197;

    t166 = (x665&(x666!=(x667!=x668)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = INT16_MIN;
	static int8_t x670 = 1;
	static uint32_t x671 = UINT32_MAX;
	volatile int8_t x672 = INT8_MAX;
	volatile int32_t t167 = -4;

    t167 = (x669&(x670!=(x671!=x672)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x674 = INT8_MIN;
	int64_t x675 = INT64_MIN;
	uint64_t x676 = UINT64_MAX;

    t168 = (x673&(x674!=(x675!=x676)));

    if (t168 != 1LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x680 = INT16_MAX;

    t169 = (x677&(x678!=(x679!=x680)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = INT32_MIN;
	static uint16_t x682 = 11U;
	int64_t x683 = -41181036786729524LL;
	volatile int16_t x684 = -1;
	int32_t t170 = -23827;

    t170 = (x681&(x682!=(x683!=x684)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x685 = -1;
	int64_t x686 = -61693LL;
	uint8_t x687 = 33U;
	volatile int32_t t171 = -28;

    t171 = (x685&(x686!=(x687!=x688)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x689 = 3U;
	volatile int16_t x690 = INT16_MAX;
	uint8_t x691 = 9U;
	volatile int32_t t172 = 723764;

    t172 = (x689&(x690!=(x691!=x692)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x693 = 0LLU;
	int16_t x694 = INT16_MAX;
	static volatile uint8_t x695 = 17U;
	int32_t x696 = INT32_MAX;
	uint64_t t173 = 6520646030096603LLU;

    t173 = (x693&(x694!=(x695!=x696)));

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x697 = 26039U;
	int32_t x699 = INT32_MIN;

    t174 = (x697&(x698!=(x699!=x700)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x703 = 5U;
	static int64_t x704 = -4225476066021362LL;
	volatile uint32_t t175 = 1614151U;

    t175 = (x701&(x702!=(x703!=x704)));

    if (t175 != 1U) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x705 = -9778006;
	int32_t x707 = 1748;
	static volatile int32_t t176 = 15;

    t176 = (x705&(x706!=(x707!=x708)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint64_t x710 = 562467543050496LLU;
	uint8_t x711 = UINT8_MAX;
	uint32_t x712 = UINT32_MAX;
	int64_t t177 = 11556127319LL;

    t177 = (x709&(x710!=(x711!=x712)));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x713 = -365519;
	int32_t x716 = -5299;

    t178 = (x713&(x714!=(x715!=x716)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint8_t x718 = 29U;
	volatile uint16_t x719 = UINT16_MAX;
	int64_t x720 = -1LL;
	volatile uint32_t t179 = 3280262U;

    t179 = (x717&(x718!=(x719!=x720)));

    if (t179 != 1U) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = -1;
	int32_t x722 = INT32_MIN;
	volatile int16_t x723 = INT16_MIN;
	static uint8_t x724 = UINT8_MAX;
	static volatile int32_t t180 = -1;

    t180 = (x721&(x722!=(x723!=x724)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int32_t x725 = 3;
	volatile int32_t x726 = 51531;
	uint16_t x727 = 2U;
	int64_t x728 = INT64_MAX;
	volatile int32_t t181 = 51111821;

    t181 = (x725&(x726!=(x727!=x728)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x730 = INT16_MIN;
	static volatile int16_t x732 = INT16_MIN;
	int32_t t182 = 5;

    t182 = (x729&(x730!=(x731!=x732)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x734 = 0;
	int16_t x735 = INT16_MIN;
	uint16_t x736 = 481U;

    t183 = (x733&(x734!=(x735!=x736)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x737 = -1;
	uint16_t x739 = UINT16_MAX;
	static volatile int32_t t184 = 20;

    t184 = (x737&(x738!=(x739!=x740)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x741 = 5669667009891426010LLU;
	int16_t x743 = -1;
	int32_t x744 = 6874957;
	volatile uint64_t t185 = 47598LLU;

    t185 = (x741&(x742!=(x743!=x744)));

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x745 = 419U;
	int16_t x746 = INT16_MAX;
	int32_t x747 = INT32_MIN;
	int32_t x748 = INT32_MIN;
	volatile int32_t t186 = 1;

    t186 = (x745&(x746!=(x747!=x748)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = INT32_MIN;
	uint16_t x750 = 41U;
	static int16_t x751 = 827;

    t187 = (x749&(x750!=(x751!=x752)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = 49014;
	uint16_t x754 = UINT16_MAX;
	int64_t x755 = INT64_MIN;
	uint32_t x756 = UINT32_MAX;
	volatile int32_t t188 = -125;

    t188 = (x753&(x754!=(x755!=x756)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = INT8_MIN;
	volatile int16_t x758 = INT16_MIN;
	static uint64_t x759 = 97195158LLU;
	int64_t x760 = INT64_MIN;

    t189 = (x757&(x758!=(x759!=x760)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x761 = 606809195LLU;
	static int16_t x762 = INT16_MIN;
	volatile int32_t x763 = INT32_MIN;
	uint64_t x764 = 1355608535040659LLU;
	volatile uint64_t t190 = 3224LLU;

    t190 = (x761&(x762!=(x763!=x764)));

    if (t190 != 1LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint32_t x766 = 254424U;
	uint64_t x767 = UINT64_MAX;
	int16_t x768 = INT16_MIN;
	int32_t t191 = -66208228;

    t191 = (x765&(x766!=(x767!=x768)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x769 = INT8_MIN;
	volatile int32_t x770 = INT32_MIN;
	static int16_t x771 = 1;
	int8_t x772 = -1;
	int32_t t192 = -2271;

    t192 = (x769&(x770!=(x771!=x772)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x773 = 7U;
	uint8_t x774 = 20U;
	static uint32_t x775 = 59U;
	int64_t x776 = 138892043855080LL;
	static int32_t t193 = 1;

    t193 = (x773&(x774!=(x775!=x776)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = -7;
	int16_t x779 = -38;
	int64_t x780 = INT64_MAX;
	static volatile int32_t t194 = 13376858;

    t194 = (x777&(x778!=(x779!=x780)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = 11;
	static uint16_t x782 = UINT16_MAX;
	static int64_t x783 = INT64_MIN;
	int64_t x784 = -267851893LL;
	volatile int32_t t195 = -23703458;

    t195 = (x781&(x782!=(x783!=x784)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x785 = UINT16_MAX;
	volatile int64_t x786 = 2LL;
	volatile int16_t x788 = -1;
	static volatile int32_t t196 = -29;

    t196 = (x785&(x786!=(x787!=x788)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x789 = INT16_MAX;
	int16_t x791 = -1;
	int64_t x792 = 11786703103LL;
	static int32_t t197 = 0;

    t197 = (x789&(x790!=(x791!=x792)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x793 = -119;
	int32_t x794 = 66519305;
	volatile int32_t t198 = 0;

    t198 = (x793&(x794!=(x795!=x796)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x798 = INT16_MIN;
	int8_t x799 = INT8_MIN;
	int16_t x800 = -1;
	volatile int64_t t199 = -1649270740LL;

    t199 = (x797&(x798!=(x799!=x800)));

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


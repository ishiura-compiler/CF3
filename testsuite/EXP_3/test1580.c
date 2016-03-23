
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

int8_t x3 = -1;
int8_t x9 = INT8_MIN;
int64_t x16 = INT64_MIN;
volatile int32_t x28 = -1621330;
int32_t x31 = INT32_MIN;
int32_t t5 = -183913;
int32_t t6 = 82371;
int32_t x37 = -31;
static volatile int32_t t7 = -3;
uint16_t x48 = UINT16_MAX;
int64_t t10 = -1578446049LL;
static int8_t x53 = INT8_MAX;
static volatile int8_t x56 = 2;
static uint64_t x72 = 0LLU;
int8_t x74 = INT8_MIN;
int32_t t16 = 0;
static int32_t x77 = -1;
static int32_t x79 = -1;
static uint32_t x80 = 4717U;
static int8_t x81 = -39;
int32_t x87 = 94;
int16_t x98 = -1;
uint16_t x100 = 1U;
int16_t x108 = INT16_MAX;
volatile int16_t x111 = INT16_MAX;
volatile uint64_t t24 = 123383246344833LLU;
volatile int32_t t25 = -180;
int8_t x119 = 5;
static volatile int32_t t27 = 0;
static volatile int8_t x125 = 26;
int32_t x127 = 71;
int16_t x135 = -184;
static volatile uint8_t x143 = 0U;
int8_t x152 = INT8_MIN;
uint32_t x154 = 1U;
volatile uint16_t x155 = 2594U;
volatile int16_t x156 = 5155;
static int32_t x162 = -1;
uint16_t x167 = 3U;
int64_t x168 = INT64_MAX;
uint8_t x173 = 61U;
uint16_t x175 = 1U;
static int64_t x184 = INT64_MAX;
volatile int32_t x187 = INT32_MIN;
uint32_t x191 = UINT32_MAX;
uint16_t x194 = UINT16_MAX;
volatile int32_t x204 = -20528215;
int64_t t45 = -7LL;
int64_t x216 = INT64_MIN;
volatile uint64_t x225 = 11960073LLU;
static int32_t t52 = 30956146;
static int64_t x259 = INT64_MIN;
uint64_t x260 = 1036863224LLU;
int32_t t55 = 3;
volatile int16_t x272 = 4;
uint32_t x273 = 2U;
uint32_t t57 = 40U;
int8_t x277 = -1;
uint8_t x279 = UINT8_MAX;
uint16_t x281 = UINT16_MAX;
static volatile int64_t x287 = -61317287056LL;
uint16_t x290 = UINT16_MAX;
int16_t x291 = 1026;
uint64_t x295 = 202172365434LLU;
int64_t x297 = -1LL;
static uint16_t x304 = 3U;
volatile uint64_t x308 = UINT64_MAX;
int32_t x312 = INT32_MAX;
int16_t x313 = 1;
volatile int32_t t68 = -5;
int16_t x334 = INT16_MIN;
volatile int32_t t72 = -93111146;
volatile int32_t t73 = 349;
uint32_t x350 = 3788428U;
volatile int16_t x355 = INT16_MIN;
uint32_t x356 = 39740858U;
uint32_t x357 = 358130U;
int32_t x363 = -30853;
static volatile uint8_t x364 = UINT8_MAX;
static uint8_t x371 = 0U;
int64_t x372 = INT64_MIN;
volatile int32_t t82 = 50021;
int16_t x377 = INT16_MAX;
static volatile int32_t x380 = INT32_MAX;
int8_t x384 = INT8_MIN;
int32_t x390 = INT32_MIN;
int32_t x392 = -312997833;
uint64_t x398 = 819519275183LLU;
int64_t x400 = INT64_MAX;
int32_t x407 = INT32_MIN;
volatile int32_t t90 = 1007;
volatile int64_t x418 = INT64_MAX;
volatile int32_t t95 = -4373821;
static int32_t x439 = -1;
static int16_t x447 = -3;
static uint64_t t98 = 2LLU;
int32_t t99 = 24874789;
volatile int16_t x454 = 13256;
volatile int16_t x463 = -28;
int64_t x468 = 2060317973041559305LL;
int32_t t103 = 7;
int8_t x485 = 1;
static uint64_t x487 = 0LLU;
uint64_t t106 = 278987868980678330LLU;
int8_t x496 = INT8_MIN;
volatile int16_t x497 = INT16_MIN;
int8_t x499 = -1;
volatile uint8_t x501 = 34U;
int32_t t111 = 991;
int64_t x521 = INT64_MIN;
static int64_t x526 = -1LL;
static volatile int32_t x533 = INT32_MIN;
int32_t t115 = 419052;
int8_t x544 = INT8_MIN;
uint32_t x545 = 4U;
uint32_t t118 = 125960U;
volatile int16_t x562 = 2628;
static int64_t x566 = INT64_MIN;
int8_t x584 = 1;
volatile int32_t t125 = 78148;
static uint32_t x591 = UINT32_MAX;
uint16_t x605 = 483U;
volatile uint8_t x616 = UINT8_MAX;
volatile int32_t x621 = -1;
int64_t x623 = 499750614163LL;
uint16_t x624 = 67U;
int64_t x634 = INT64_MIN;
int64_t x635 = -1LL;
int16_t x636 = INT16_MAX;
volatile uint32_t x637 = 5179142U;
int64_t x639 = INT64_MAX;
volatile uint32_t t135 = 7590U;
int16_t x647 = INT16_MIN;
int32_t t136 = -13;
static volatile int32_t x659 = INT32_MAX;
static uint64_t x663 = 782091LLU;
int16_t x667 = -15258;
volatile uint64_t x668 = 141LLU;
uint32_t t140 = 101U;
int32_t x672 = INT32_MIN;
int8_t x677 = -25;
static uint16_t x682 = 0U;
static int32_t t145 = -5374;
volatile int16_t x697 = 13;
int32_t t147 = 1;
uint8_t x717 = UINT8_MAX;
int32_t x732 = INT32_MAX;
uint16_t x734 = 39U;
uint8_t x738 = UINT8_MAX;
volatile uint32_t x739 = 10020532U;
volatile int8_t x743 = -1;
static int8_t x744 = INT8_MIN;
volatile uint32_t t158 = 16485603U;
volatile int64_t x752 = 527035575LL;
int32_t x755 = INT32_MAX;
uint32_t x758 = UINT32_MAX;
uint32_t t161 = 105059U;
volatile int32_t x772 = INT32_MIN;
int64_t t164 = -1346LL;
uint32_t x777 = UINT32_MAX;
volatile uint16_t x789 = UINT16_MAX;
static int8_t x790 = INT8_MAX;
int16_t x799 = 5931;
volatile int32_t t171 = 0;
static int8_t x807 = 1;
static int64_t x812 = INT64_MAX;
static int16_t x814 = INT16_MIN;
uint64_t x819 = UINT64_MAX;
volatile int32_t t176 = 7;
uint8_t x821 = 44U;
int64_t x824 = INT64_MIN;
volatile int16_t x835 = INT16_MAX;
static int16_t x841 = -9;
volatile int16_t x843 = -1;
int8_t x846 = -1;
int64_t x855 = -1LL;
uint64_t x861 = 129815258216572LLU;
volatile int64_t x862 = 0LL;
int16_t x864 = -1;
int64_t x867 = INT64_MIN;
static int16_t x879 = INT16_MIN;
volatile int64_t t188 = -176LL;
static int16_t x885 = INT16_MIN;
volatile int64_t t194 = -1822280165LL;
volatile int32_t x911 = INT32_MIN;
uint16_t x913 = 3U;
volatile uint32_t x917 = 1393U;
int8_t x920 = INT8_MIN;
uint8_t x921 = UINT8_MAX;


void f0(void) {
    	uint32_t x1 = UINT32_MAX;
	volatile uint64_t x2 = 12548529LLU;
	uint8_t x4 = 14U;
	static uint64_t t0 = 97LLU;

    t0 = ((x1+x2)&(x3>x4));

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MAX;
	int32_t x6 = -1;
	int32_t x7 = INT32_MIN;
	static int64_t x8 = INT64_MIN;
	volatile int64_t t1 = -755483860LL;

    t1 = ((x5+x6)&(x7>x8));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x10 = INT16_MIN;
	uint32_t x11 = UINT32_MAX;
	static int64_t x12 = -1LL;
	volatile int32_t t2 = 29925;

    t2 = ((x9+x10)&(x11>x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = UINT16_MAX;
	int64_t x14 = INT64_MIN;
	int16_t x15 = INT16_MIN;
	static int64_t t3 = -55081432303896758LL;

    t3 = ((x13+x14)&(x15>x16));

    if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x25 = INT32_MAX;
	int64_t x26 = -1LL;
	int32_t x27 = -1;
	int64_t t4 = -1173096609830509218LL;

    t4 = ((x25+x26)&(x27>x28));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x29 = 3279;
	static uint16_t x30 = 0U;
	static volatile int32_t x32 = INT32_MIN;

    t5 = ((x29+x30)&(x31>x32));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x33 = UINT16_MAX;
	int8_t x34 = INT8_MIN;
	volatile int8_t x35 = -33;
	int32_t x36 = INT32_MIN;

    t6 = ((x33+x34)&(x35>x36));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x38 = 8;
	int8_t x39 = -1;
	int16_t x40 = 1;

    t7 = ((x37+x38)&(x39>x40));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x41 = -8LL;
	static int16_t x42 = 1;
	int32_t x43 = 28304;
	int64_t x44 = -13LL;
	int64_t t8 = -21755147972LL;

    t8 = ((x41+x42)&(x43>x44));

    if (t8 != 1LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x45 = -4;
	static int32_t x46 = -1;
	static uint64_t x47 = 20636532213419845LLU;
	int32_t t9 = -31;

    t9 = ((x45+x46)&(x47>x48));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x49 = -1LL;
	int16_t x50 = -2;
	static int32_t x51 = INT32_MIN;
	uint16_t x52 = 31122U;

    t10 = ((x49+x50)&(x51>x52));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x54 = -1;
	int8_t x55 = INT8_MIN;
	volatile int32_t t11 = 56;

    t11 = ((x53+x54)&(x55>x56));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x57 = -5;
	static int16_t x58 = INT16_MAX;
	static int16_t x59 = INT16_MIN;
	int32_t x60 = INT32_MIN;
	int32_t t12 = -113921;

    t12 = ((x57+x58)&(x59>x60));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint32_t x61 = 21915627U;
	int32_t x62 = -1;
	uint16_t x63 = 12858U;
	volatile int8_t x64 = INT8_MIN;
	uint32_t t13 = 0U;

    t13 = ((x61+x62)&(x63>x64));

    if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x65 = 165362171933335522LL;
	volatile int64_t x66 = 183560551906479LL;
	int32_t x67 = INT32_MIN;
	int8_t x68 = 5;
	int64_t t14 = 7124638727LL;

    t14 = ((x65+x66)&(x67>x68));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x69 = 4931032662LLU;
	int32_t x70 = INT32_MAX;
	uint32_t x71 = UINT32_MAX;
	static uint64_t t15 = 737434069772242LLU;

    t15 = ((x69+x70)&(x71>x72));

    if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x73 = -1;
	static int16_t x75 = -20;
	int32_t x76 = INT32_MIN;

    t16 = ((x73+x74)&(x75>x76));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x78 = -47350954368LL;
	static volatile int64_t t17 = -39LL;

    t17 = ((x77+x78)&(x79>x80));

    if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x82 = UINT16_MAX;
	uint32_t x83 = 8655U;
	int16_t x84 = INT16_MIN;
	volatile int32_t t18 = -86566;

    t18 = ((x81+x82)&(x83>x84));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x85 = 347U;
	volatile int8_t x86 = -52;
	uint16_t x88 = 112U;
	static volatile int32_t t19 = 3327717;

    t19 = ((x85+x86)&(x87>x88));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x89 = 17;
	static uint32_t x90 = 1826997U;
	int32_t x91 = INT32_MIN;
	volatile uint64_t x92 = UINT64_MAX;
	static volatile uint32_t t20 = 50643316U;

    t20 = ((x89+x90)&(x91>x92));

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int32_t x93 = 576;
	uint8_t x94 = 14U;
	static volatile int8_t x95 = INT8_MIN;
	uint32_t x96 = 7U;
	volatile int32_t t21 = 95;

    t21 = ((x93+x94)&(x95>x96));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint64_t x97 = 14923377513035966LLU;
	int8_t x99 = INT8_MIN;
	uint64_t t22 = 232954379156LLU;

    t22 = ((x97+x98)&(x99>x100));

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x105 = 104;
	int64_t x106 = 265337338655LL;
	int8_t x107 = INT8_MAX;
	int64_t t23 = -97927LL;

    t23 = ((x105+x106)&(x107>x108));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x109 = UINT64_MAX;
	int64_t x110 = -1LL;
	uint32_t x112 = UINT32_MAX;

    t24 = ((x109+x110)&(x111>x112));

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x113 = -53;
	volatile uint8_t x114 = UINT8_MAX;
	int32_t x115 = INT32_MIN;
	int64_t x116 = -1LL;

    t25 = ((x113+x114)&(x115>x116));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x117 = -1;
	int16_t x118 = -1;
	int64_t x120 = INT64_MIN;
	int32_t t26 = -16401546;

    t26 = ((x117+x118)&(x119>x120));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x121 = -3324;
	static uint8_t x122 = 2U;
	volatile int64_t x123 = -2LL;
	int64_t x124 = INT64_MIN;

    t27 = ((x121+x122)&(x123>x124));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x126 = INT32_MIN;
	uint32_t x128 = UINT32_MAX;
	int32_t t28 = -4;

    t28 = ((x125+x126)&(x127>x128));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x129 = 209326828541823LLU;
	volatile uint16_t x130 = 0U;
	volatile int32_t x131 = INT32_MAX;
	volatile uint64_t x132 = 5301625791450LLU;
	volatile uint64_t t29 = 17449851831157580LLU;

    t29 = ((x129+x130)&(x131>x132));

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint16_t x133 = 9652U;
	int16_t x134 = 1;
	static int8_t x136 = -1;
	volatile int32_t t30 = 314;

    t30 = ((x133+x134)&(x135>x136));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x137 = 3066779270LLU;
	uint64_t x138 = 1993811593905201LLU;
	int8_t x139 = -1;
	static uint32_t x140 = 4U;
	uint64_t t31 = 11LLU;

    t31 = ((x137+x138)&(x139>x140));

    if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x141 = -1LL;
	int64_t x142 = INT64_MAX;
	uint32_t x144 = UINT32_MAX;
	static int64_t t32 = 8757112726202285LL;

    t32 = ((x141+x142)&(x143>x144));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x149 = -7629;
	uint16_t x150 = UINT16_MAX;
	uint16_t x151 = UINT16_MAX;
	static volatile int32_t t33 = 96019;

    t33 = ((x149+x150)&(x151>x152));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x153 = -1LL;
	volatile int64_t t34 = 1LL;

    t34 = ((x153+x154)&(x155>x156));

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x157 = 1047899911LL;
	int8_t x158 = INT8_MAX;
	static uint64_t x159 = 28559428876LLU;
	int32_t x160 = INT32_MAX;
	volatile int64_t t35 = -4LL;

    t35 = ((x157+x158)&(x159>x160));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x161 = UINT8_MAX;
	volatile uint64_t x163 = UINT64_MAX;
	int32_t x164 = INT32_MIN;
	int32_t t36 = -15;

    t36 = ((x161+x162)&(x163>x164));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x165 = -85818;
	uint16_t x166 = 6926U;
	static volatile int32_t t37 = 1532798;

    t37 = ((x165+x166)&(x167>x168));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x174 = UINT64_MAX;
	int8_t x176 = 2;
	uint64_t t38 = 45930430LLU;

    t38 = ((x173+x174)&(x175>x176));

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x177 = UINT8_MAX;
	int16_t x178 = 38;
	volatile int8_t x179 = INT8_MIN;
	int32_t x180 = INT32_MAX;
	volatile int32_t t39 = -816;

    t39 = ((x177+x178)&(x179>x180));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x181 = 2U;
	uint8_t x182 = 15U;
	uint16_t x183 = 0U;
	int32_t t40 = 24;

    t40 = ((x181+x182)&(x183>x184));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x185 = 157344;
	static volatile int64_t x186 = INT64_MIN;
	static int64_t x188 = 979428127216LL;
	int64_t t41 = 3812365039902837817LL;

    t41 = ((x185+x186)&(x187>x188));

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x189 = INT16_MAX;
	uint8_t x190 = 10U;
	int16_t x192 = INT16_MIN;
	static int32_t t42 = 3255978;

    t42 = ((x189+x190)&(x191>x192));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x193 = 28439996LLU;
	uint64_t x195 = 4685950075956LLU;
	int16_t x196 = -1;
	volatile uint64_t t43 = 510848LLU;

    t43 = ((x193+x194)&(x195>x196));

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x197 = INT16_MIN;
	volatile int16_t x198 = INT16_MIN;
	uint16_t x199 = UINT16_MAX;
	static uint64_t x200 = 261839209370836666LLU;
	static volatile int32_t t44 = 1971592;

    t44 = ((x197+x198)&(x199>x200));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x201 = INT64_MAX;
	int16_t x202 = -20;
	uint64_t x203 = 114065LLU;

    t45 = ((x201+x202)&(x203>x204));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile uint32_t x205 = UINT32_MAX;
	int16_t x206 = -1;
	volatile int16_t x207 = INT16_MIN;
	int64_t x208 = INT64_MIN;
	volatile uint32_t t46 = 1203652U;

    t46 = ((x205+x206)&(x207>x208));

    if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x209 = 11U;
	uint16_t x210 = 5075U;
	int8_t x211 = -1;
	int32_t x212 = 259570;
	uint32_t t47 = 115690127U;

    t47 = ((x209+x210)&(x211>x212));

    if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x213 = 61630U;
	uint16_t x214 = 0U;
	int16_t x215 = -1;
	volatile uint32_t t48 = 51302U;

    t48 = ((x213+x214)&(x215>x216));

    if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x217 = -4809661048019LL;
	static uint8_t x218 = UINT8_MAX;
	int8_t x219 = INT8_MAX;
	volatile int32_t x220 = -5;
	int64_t t49 = 1393LL;

    t49 = ((x217+x218)&(x219>x220));

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x221 = 3;
	static int32_t x222 = -892999004;
	int32_t x223 = 14587923;
	int16_t x224 = INT16_MIN;
	volatile int32_t t50 = 769;

    t50 = ((x221+x222)&(x223>x224));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint32_t x226 = 1364U;
	static uint8_t x227 = 3U;
	uint8_t x228 = 7U;
	uint64_t t51 = 3353671408LLU;

    t51 = ((x225+x226)&(x227>x228));

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x229 = 10;
	int16_t x230 = 943;
	static int16_t x231 = INT16_MIN;
	uint64_t x232 = UINT64_MAX;

    t52 = ((x229+x230)&(x231>x232));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x241 = INT8_MIN;
	int64_t x242 = -1LL;
	int16_t x243 = INT16_MIN;
	uint16_t x244 = UINT16_MAX;
	volatile int64_t t53 = -216175557496LL;

    t53 = ((x241+x242)&(x243>x244));

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x257 = INT32_MIN;
	uint32_t x258 = 14729U;
	static uint32_t t54 = 264943U;

    t54 = ((x257+x258)&(x259>x260));

    if (t54 != 1U) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint8_t x261 = 15U;
	int16_t x262 = INT16_MAX;
	static volatile uint32_t x263 = 5U;
	static int64_t x264 = -1LL;

    t55 = ((x261+x262)&(x263>x264));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x269 = 0U;
	uint8_t x270 = 7U;
	uint8_t x271 = UINT8_MAX;
	int32_t t56 = 0;

    t56 = ((x269+x270)&(x271>x272));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x274 = -1;
	int16_t x275 = INT16_MAX;
	uint8_t x276 = UINT8_MAX;

    t57 = ((x273+x274)&(x275>x276));

    if (t57 != 1U) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x278 = -6;
	uint8_t x280 = 11U;
	volatile int32_t t58 = 29208;

    t58 = ((x277+x278)&(x279>x280));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x282 = 700U;
	int32_t x283 = -1;
	int32_t x284 = INT32_MIN;
	int32_t t59 = -2011;

    t59 = ((x281+x282)&(x283>x284));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int64_t x285 = INT64_MAX;
	int16_t x286 = -1;
	static volatile uint16_t x288 = UINT16_MAX;
	volatile int64_t t60 = -24938LL;

    t60 = ((x285+x286)&(x287>x288));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x289 = INT64_MIN;
	volatile uint8_t x292 = 53U;
	static int64_t t61 = -264LL;

    t61 = ((x289+x290)&(x291>x292));

    if (t61 != 1LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x293 = 8U;
	static int8_t x294 = INT8_MIN;
	uint32_t x296 = 44U;
	uint32_t t62 = 2014561U;

    t62 = ((x293+x294)&(x295>x296));

    if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x298 = INT16_MIN;
	int16_t x299 = -1;
	int16_t x300 = INT16_MAX;
	volatile int64_t t63 = 14275700LL;

    t63 = ((x297+x298)&(x299>x300));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x301 = UINT64_MAX;
	uint32_t x302 = 826U;
	static int32_t x303 = -766647031;
	volatile uint64_t t64 = 109132777018617LLU;

    t64 = ((x301+x302)&(x303>x304));

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x305 = 3U;
	uint64_t x306 = UINT64_MAX;
	uint16_t x307 = UINT16_MAX;
	volatile uint64_t t65 = 521737646LLU;

    t65 = ((x305+x306)&(x307>x308));

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x309 = -403;
	uint32_t x310 = 1U;
	int32_t x311 = -1;
	static volatile uint32_t t66 = 535U;

    t66 = ((x309+x310)&(x311>x312));

    if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x314 = 68U;
	volatile int8_t x315 = INT8_MAX;
	volatile uint64_t x316 = 2010535017LLU;
	static volatile int32_t t67 = 321579700;

    t67 = ((x313+x314)&(x315>x316));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x317 = -1;
	int32_t x318 = 92498;
	volatile uint16_t x319 = 6U;
	uint32_t x320 = UINT32_MAX;

    t68 = ((x317+x318)&(x319>x320));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x321 = -1;
	uint64_t x322 = 3551846214LLU;
	int64_t x323 = INT64_MIN;
	int64_t x324 = INT64_MAX;
	volatile uint64_t t69 = 8301492055514497924LLU;

    t69 = ((x321+x322)&(x323>x324));

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint32_t x325 = 111778846U;
	static volatile uint32_t x326 = 3575U;
	uint32_t x327 = 91U;
	volatile int64_t x328 = 1516086056LL;
	uint32_t t70 = 16U;

    t70 = ((x325+x326)&(x327>x328));

    if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int16_t x329 = INT16_MIN;
	uint16_t x330 = UINT16_MAX;
	int32_t x331 = -1;
	uint8_t x332 = 15U;
	volatile int32_t t71 = -3;

    t71 = ((x329+x330)&(x331>x332));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x333 = INT16_MIN;
	int16_t x335 = -1;
	int64_t x336 = 254529350LL;

    t72 = ((x333+x334)&(x335>x336));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x337 = INT32_MAX;
	int32_t x338 = -1;
	static int16_t x339 = INT16_MIN;
	int32_t x340 = -1;

    t73 = ((x337+x338)&(x339>x340));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int32_t x341 = INT32_MAX;
	int32_t x342 = -129736718;
	int8_t x343 = INT8_MIN;
	static volatile uint32_t x344 = UINT32_MAX;
	int32_t t74 = -775044;

    t74 = ((x341+x342)&(x343>x344));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x345 = -1LL;
	static int32_t x346 = -1;
	int16_t x347 = INT16_MAX;
	static int64_t x348 = INT64_MIN;
	volatile int64_t t75 = 283346437845374645LL;

    t75 = ((x345+x346)&(x347>x348));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x349 = -18;
	volatile int16_t x351 = -1;
	volatile int64_t x352 = INT64_MIN;
	static volatile uint32_t t76 = 106491153U;

    t76 = ((x349+x350)&(x351>x352));

    if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x353 = 0;
	int16_t x354 = 178;
	static int32_t t77 = 0;

    t77 = ((x353+x354)&(x355>x356));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x358 = INT64_MIN;
	int8_t x359 = INT8_MIN;
	volatile int32_t x360 = -533722;
	static int64_t t78 = -2LL;

    t78 = ((x357+x358)&(x359>x360));

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x361 = UINT8_MAX;
	uint64_t x362 = UINT64_MAX;
	static volatile uint64_t t79 = 45972796040172253LLU;

    t79 = ((x361+x362)&(x363>x364));

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint32_t x365 = 1411374U;
	int16_t x366 = -1;
	volatile uint8_t x367 = UINT8_MAX;
	int16_t x368 = INT16_MIN;
	volatile uint32_t t80 = 52065U;

    t80 = ((x365+x366)&(x367>x368));

    if (t80 != 1U) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint64_t x369 = 57486912LLU;
	int8_t x370 = -1;
	volatile uint64_t t81 = 43266LLU;

    t81 = ((x369+x370)&(x371>x372));

    if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x373 = 5;
	static volatile int16_t x374 = INT16_MIN;
	volatile int16_t x375 = 37;
	uint64_t x376 = 77LLU;

    t82 = ((x373+x374)&(x375>x376));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x378 = INT8_MIN;
	int16_t x379 = INT16_MAX;
	int32_t t83 = 125;

    t83 = ((x377+x378)&(x379>x380));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x381 = UINT16_MAX;
	int32_t x382 = INT32_MIN;
	uint32_t x383 = 361U;
	volatile int32_t t84 = -2;

    t84 = ((x381+x382)&(x383>x384));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x389 = 3U;
	volatile uint64_t x391 = 5319494LLU;
	volatile int32_t t85 = -525914541;

    t85 = ((x389+x390)&(x391>x392));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x393 = -1;
	int8_t x394 = INT8_MAX;
	int32_t x395 = INT32_MIN;
	int32_t x396 = INT32_MIN;
	int32_t t86 = -48133;

    t86 = ((x393+x394)&(x395>x396));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x397 = 60230;
	static volatile int8_t x399 = -1;
	uint64_t t87 = 249505220041732LLU;

    t87 = ((x397+x398)&(x399>x400));

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x401 = INT64_MAX;
	int64_t x402 = INT64_MIN;
	uint32_t x403 = 130755087U;
	static int32_t x404 = -33533;
	int64_t t88 = 119090LL;

    t88 = ((x401+x402)&(x403>x404));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x405 = -1;
	int64_t x406 = 1832LL;
	static int64_t x408 = INT64_MIN;
	int64_t t89 = -96314803549009LL;

    t89 = ((x405+x406)&(x407>x408));

    if (t89 != 1LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x409 = 4483;
	int32_t x410 = 865420;
	volatile uint32_t x411 = 0U;
	uint32_t x412 = 10300U;

    t90 = ((x409+x410)&(x411>x412));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x413 = 6324152897656330LL;
	volatile uint8_t x414 = 3U;
	int8_t x415 = INT8_MIN;
	volatile uint32_t x416 = 777257291U;
	int64_t t91 = 69LL;

    t91 = ((x413+x414)&(x415>x416));

    if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x417 = INT8_MIN;
	int64_t x419 = INT64_MIN;
	int64_t x420 = -599381133LL;
	volatile int64_t t92 = 154187979828031392LL;

    t92 = ((x417+x418)&(x419>x420));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint32_t x421 = 38435095U;
	volatile int8_t x422 = INT8_MIN;
	int8_t x423 = 4;
	uint64_t x424 = 116315699279332LLU;
	uint32_t t93 = 728259961U;

    t93 = ((x421+x422)&(x423>x424));

    if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x429 = INT16_MIN;
	uint16_t x430 = 112U;
	uint16_t x431 = UINT16_MAX;
	uint8_t x432 = UINT8_MAX;
	volatile int32_t t94 = -652008;

    t94 = ((x429+x430)&(x431>x432));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x433 = INT8_MAX;
	int32_t x434 = 8332573;
	uint32_t x435 = 7075U;
	int8_t x436 = -1;

    t95 = ((x433+x434)&(x435>x436));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x437 = 300;
	volatile uint64_t x438 = UINT64_MAX;
	static uint64_t x440 = 8866116LLU;
	static uint64_t t96 = 1394851LLU;

    t96 = ((x437+x438)&(x439>x440));

    if (t96 != 1LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x441 = 221LL;
	int64_t x442 = -109220922608712LL;
	volatile uint64_t x443 = UINT64_MAX;
	uint8_t x444 = 81U;
	volatile int64_t t97 = 6489489281LL;

    t97 = ((x441+x442)&(x443>x444));

    if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x445 = INT32_MIN;
	uint64_t x446 = UINT64_MAX;
	volatile int32_t x448 = INT32_MIN;

    t98 = ((x445+x446)&(x447>x448));

    if (t98 != 1LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x449 = -1;
	int8_t x450 = -1;
	static int16_t x451 = INT16_MIN;
	static int64_t x452 = -1LL;

    t99 = ((x449+x450)&(x451>x452));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x453 = 26885U;
	volatile int8_t x455 = -25;
	volatile uint8_t x456 = 1U;
	int32_t t100 = 967559966;

    t100 = ((x453+x454)&(x455>x456));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x457 = INT8_MIN;
	int16_t x458 = INT16_MIN;
	int8_t x459 = INT8_MAX;
	int64_t x460 = INT64_MIN;
	volatile int32_t t101 = -374;

    t101 = ((x457+x458)&(x459>x460));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x461 = 0;
	int16_t x462 = INT16_MAX;
	volatile int32_t x464 = INT32_MAX;
	int32_t t102 = 53902674;

    t102 = ((x461+x462)&(x463>x464));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x465 = INT32_MIN;
	volatile int8_t x466 = 0;
	volatile int16_t x467 = -3;

    t103 = ((x465+x466)&(x467>x468));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x469 = 26258956U;
	volatile int32_t x470 = -1;
	int8_t x471 = INT8_MAX;
	volatile uint8_t x472 = 3U;
	volatile uint32_t t104 = 93U;

    t104 = ((x469+x470)&(x471>x472));

    if (t104 != 1U) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x477 = 11U;
	int32_t x478 = 1553;
	int32_t x479 = INT32_MIN;
	static int16_t x480 = -1;
	volatile int32_t t105 = 3;

    t105 = ((x477+x478)&(x479>x480));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x486 = UINT64_MAX;
	volatile uint64_t x488 = UINT64_MAX;

    t106 = ((x485+x486)&(x487>x488));

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x493 = 3U;
	int16_t x494 = -1;
	volatile int16_t x495 = -1;
	volatile uint32_t t107 = 27U;

    t107 = ((x493+x494)&(x495>x496));

    if (t107 != 0U) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x498 = INT8_MIN;
	int16_t x500 = 1325;
	static int32_t t108 = 27899073;

    t108 = ((x497+x498)&(x499>x500));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x502 = -1;
	int32_t x503 = 5;
	int64_t x504 = -52648261848564LL;
	volatile int32_t t109 = 1007494528;

    t109 = ((x501+x502)&(x503>x504));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x513 = INT32_MIN;
	static int64_t x514 = -1LL;
	uint64_t x515 = 246407455LLU;
	int8_t x516 = INT8_MIN;
	static volatile int64_t t110 = -880219LL;

    t110 = ((x513+x514)&(x515>x516));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x517 = 22;
	volatile int16_t x518 = INT16_MAX;
	static uint32_t x519 = 242U;
	volatile uint16_t x520 = UINT16_MAX;

    t111 = ((x517+x518)&(x519>x520));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x522 = UINT32_MAX;
	int64_t x523 = -7706933LL;
	volatile uint16_t x524 = UINT16_MAX;
	static volatile int64_t t112 = -63533LL;

    t112 = ((x521+x522)&(x523>x524));

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x525 = INT16_MAX;
	uint8_t x527 = 1U;
	int64_t x528 = INT64_MIN;
	int64_t t113 = -112680060LL;

    t113 = ((x525+x526)&(x527>x528));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x529 = INT16_MIN;
	uint32_t x530 = 6354498U;
	int16_t x531 = INT16_MAX;
	volatile int16_t x532 = INT16_MIN;
	uint32_t t114 = 4816807U;

    t114 = ((x529+x530)&(x531>x532));

    if (t114 != 0U) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x534 = UINT8_MAX;
	static int64_t x535 = INT64_MIN;
	int8_t x536 = INT8_MIN;

    t115 = ((x533+x534)&(x535>x536));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x537 = UINT64_MAX;
	int64_t x538 = -7046630555LL;
	int8_t x539 = INT8_MAX;
	int64_t x540 = INT64_MIN;
	volatile uint64_t t116 = 125015392930162LLU;

    t116 = ((x537+x538)&(x539>x540));

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x541 = 54572249599887LLU;
	int32_t x542 = -1;
	uint64_t x543 = 3575020350611108414LLU;
	static volatile uint64_t t117 = 7885829525488248606LLU;

    t117 = ((x541+x542)&(x543>x544));

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x546 = INT32_MAX;
	int64_t x547 = INT64_MAX;
	static volatile int32_t x548 = -6863;

    t118 = ((x545+x546)&(x547>x548));

    if (t118 != 1U) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x549 = -1;
	volatile int16_t x550 = INT16_MIN;
	volatile uint32_t x551 = 690401741U;
	volatile uint8_t x552 = 16U;
	static volatile int32_t t119 = -331189180;

    t119 = ((x549+x550)&(x551>x552));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x557 = 4117;
	int64_t x558 = -181052LL;
	int16_t x559 = INT16_MIN;
	volatile uint8_t x560 = 2U;
	volatile int64_t t120 = -431LL;

    t120 = ((x557+x558)&(x559>x560));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x561 = -1;
	int16_t x563 = INT16_MAX;
	int64_t x564 = -1901998502LL;
	int32_t t121 = 21600;

    t121 = ((x561+x562)&(x563>x564));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x565 = 96;
	int64_t x567 = -128LL;
	static volatile int64_t x568 = 7LL;
	int64_t t122 = -3506709535877LL;

    t122 = ((x565+x566)&(x567>x568));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x573 = INT8_MIN;
	volatile uint8_t x574 = 1U;
	static int8_t x575 = -1;
	int32_t x576 = -1;
	static int32_t t123 = 9165951;

    t123 = ((x573+x574)&(x575>x576));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x577 = -1LL;
	int32_t x578 = 50026790;
	int16_t x579 = INT16_MIN;
	int32_t x580 = INT32_MAX;
	static int64_t t124 = -35211570863LL;

    t124 = ((x577+x578)&(x579>x580));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x581 = 909;
	static int16_t x582 = INT16_MAX;
	uint8_t x583 = 9U;

    t125 = ((x581+x582)&(x583>x584));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x589 = 7U;
	int32_t x590 = 109845;
	int32_t x592 = -100456868;
	int32_t t126 = 16225;

    t126 = ((x589+x590)&(x591>x592));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x597 = -95485363750LL;
	volatile uint64_t x598 = 17038LLU;
	volatile uint32_t x599 = 123722U;
	uint64_t x600 = UINT64_MAX;
	uint64_t t127 = 279667878345LLU;

    t127 = ((x597+x598)&(x599>x600));

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x601 = -9;
	static volatile uint16_t x602 = UINT16_MAX;
	uint8_t x603 = UINT8_MAX;
	uint32_t x604 = 444216U;
	volatile int32_t t128 = -948013951;

    t128 = ((x601+x602)&(x603>x604));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint16_t x606 = 5U;
	uint32_t x607 = UINT32_MAX;
	int32_t x608 = 348;
	int32_t t129 = 51587723;

    t129 = ((x605+x606)&(x607>x608));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x613 = -1LL;
	static uint64_t x614 = 8466496470LLU;
	static uint64_t x615 = 990115LLU;
	volatile uint64_t t130 = 690200LLU;

    t130 = ((x613+x614)&(x615>x616));

    if (t130 != 1LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x622 = INT32_MAX;
	int32_t t131 = -14;

    t131 = ((x621+x622)&(x623>x624));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint8_t x625 = 0U;
	int32_t x626 = INT32_MIN;
	static int8_t x627 = INT8_MIN;
	int32_t x628 = INT32_MAX;
	int32_t t132 = -33595;

    t132 = ((x625+x626)&(x627>x628));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint32_t x629 = UINT32_MAX;
	int8_t x630 = 0;
	uint32_t x631 = 2U;
	volatile uint64_t x632 = 0LLU;
	uint32_t t133 = 66315393U;

    t133 = ((x629+x630)&(x631>x632));

    if (t133 != 1U) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x633 = 14945U;
	int64_t t134 = 83820900033246LL;

    t134 = ((x633+x634)&(x635>x636));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x638 = INT8_MAX;
	static volatile int64_t x640 = -123681269564235LL;

    t135 = ((x637+x638)&(x639>x640));

    if (t135 != 1U) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x645 = INT8_MIN;
	volatile int16_t x646 = 758;
	int64_t x648 = INT64_MIN;

    t136 = ((x645+x646)&(x647>x648));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x653 = -15;
	uint64_t x654 = 152407295506LLU;
	int16_t x655 = INT16_MAX;
	uint64_t x656 = 98422077645199LLU;
	uint64_t t137 = 18435186782614975LLU;

    t137 = ((x653+x654)&(x655>x656));

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x657 = INT32_MIN;
	int32_t x658 = 1275286;
	uint16_t x660 = 938U;
	int32_t t138 = 1446251;

    t138 = ((x657+x658)&(x659>x660));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x661 = -26;
	static uint8_t x662 = 23U;
	uint32_t x664 = 0U;
	volatile int32_t t139 = 20341461;

    t139 = ((x661+x662)&(x663>x664));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x665 = -29;
	volatile uint32_t x666 = 2546U;

    t140 = ((x665+x666)&(x667>x668));

    if (t140 != 1U) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x669 = 55764943623LLU;
	static int8_t x670 = -1;
	static uint16_t x671 = UINT16_MAX;
	volatile uint64_t t141 = 231815688LLU;

    t141 = ((x669+x670)&(x671>x672));

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile uint32_t x678 = 91U;
	uint16_t x679 = 0U;
	uint64_t x680 = 61821899484804083LLU;
	uint32_t t142 = 935382578U;

    t142 = ((x677+x678)&(x679>x680));

    if (t142 != 0U) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x681 = 932U;
	volatile int32_t x683 = INT32_MAX;
	int16_t x684 = -1;
	volatile int32_t t143 = 20568;

    t143 = ((x681+x682)&(x683>x684));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint32_t x685 = 58U;
	volatile int8_t x686 = 5;
	uint8_t x687 = UINT8_MAX;
	uint16_t x688 = UINT16_MAX;
	uint32_t t144 = 1U;

    t144 = ((x685+x686)&(x687>x688));

    if (t144 != 0U) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x689 = INT16_MAX;
	int16_t x690 = INT16_MAX;
	static int16_t x691 = INT16_MAX;
	int64_t x692 = INT64_MIN;

    t145 = ((x689+x690)&(x691>x692));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x693 = INT16_MAX;
	static uint32_t x694 = 2650U;
	volatile int16_t x695 = INT16_MIN;
	volatile uint8_t x696 = 7U;
	uint32_t t146 = 0U;

    t146 = ((x693+x694)&(x695>x696));

    if (t146 != 0U) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x698 = -1;
	static volatile int32_t x699 = -1;
	int64_t x700 = INT64_MIN;

    t147 = ((x697+x698)&(x699>x700));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x705 = 125312U;
	uint32_t x706 = 13726U;
	int8_t x707 = 0;
	int8_t x708 = -1;
	static volatile uint32_t t148 = 1U;

    t148 = ((x705+x706)&(x707>x708));

    if (t148 != 0U) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x709 = -1LL;
	static uint16_t x710 = 18530U;
	uint32_t x711 = 2081606283U;
	static uint8_t x712 = 0U;
	volatile int64_t t149 = -574576809989406LL;

    t149 = ((x709+x710)&(x711>x712));

    if (t149 != 1LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x713 = INT8_MIN;
	int16_t x714 = -1;
	int16_t x715 = -1;
	int64_t x716 = -1LL;
	volatile int32_t t150 = -30;

    t150 = ((x713+x714)&(x715>x716));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x718 = 864456512573824LL;
	volatile uint8_t x719 = 23U;
	uint32_t x720 = UINT32_MAX;
	static volatile int64_t t151 = 32851390560LL;

    t151 = ((x717+x718)&(x719>x720));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint16_t x721 = 2U;
	int16_t x722 = 3;
	int16_t x723 = 3;
	static int32_t x724 = -1;
	static int32_t t152 = 20;

    t152 = ((x721+x722)&(x723>x724));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x725 = 96U;
	static int8_t x726 = 55;
	volatile int32_t x727 = -1;
	int32_t x728 = INT32_MIN;
	volatile int32_t t153 = -4752399;

    t153 = ((x725+x726)&(x727>x728));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x729 = 1;
	static uint64_t x730 = 17227818343826LLU;
	static uint32_t x731 = 288619U;
	static uint64_t t154 = 111290872216LLU;

    t154 = ((x729+x730)&(x731>x732));

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x733 = 381;
	static int32_t x735 = -1;
	int16_t x736 = INT16_MIN;
	volatile int32_t t155 = -472500;

    t155 = ((x733+x734)&(x735>x736));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x737 = 53931552856589991LL;
	int64_t x740 = -23LL;
	static int64_t t156 = 31226680444628014LL;

    t156 = ((x737+x738)&(x739>x740));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x741 = 21287261U;
	int64_t x742 = 159585308765314LL;
	int64_t t157 = -53LL;

    t157 = ((x741+x742)&(x743>x744));

    if (t157 != 1LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x745 = UINT16_MAX;
	uint32_t x746 = UINT32_MAX;
	static int8_t x747 = -1;
	static uint32_t x748 = 207U;

    t158 = ((x745+x746)&(x747>x748));

    if (t158 != 0U) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x749 = INT64_MAX;
	int8_t x750 = -1;
	int8_t x751 = 17;
	volatile int64_t t159 = -165907685181LL;

    t159 = ((x749+x750)&(x751>x752));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x753 = INT16_MAX;
	volatile int64_t x754 = -1LL;
	volatile int32_t x756 = INT32_MAX;
	static int64_t t160 = 245926554292LL;

    t160 = ((x753+x754)&(x755>x756));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x757 = 0;
	int16_t x759 = 13544;
	static int64_t x760 = -1LL;

    t161 = ((x757+x758)&(x759>x760));

    if (t161 != 1U) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int8_t x761 = INT8_MIN;
	static int64_t x762 = -8407LL;
	int8_t x763 = -34;
	int8_t x764 = -1;
	int64_t t162 = -63597717569476207LL;

    t162 = ((x761+x762)&(x763>x764));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x765 = -1LL;
	uint8_t x766 = 21U;
	int16_t x767 = -1;
	int8_t x768 = -1;
	volatile int64_t t163 = -851522199522375LL;

    t163 = ((x765+x766)&(x767>x768));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x769 = INT8_MIN;
	volatile int64_t x770 = -1LL;
	int8_t x771 = INT8_MIN;

    t164 = ((x769+x770)&(x771>x772));

    if (t164 != 1LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x773 = -156870LL;
	uint32_t x774 = 311U;
	uint32_t x775 = UINT32_MAX;
	static uint16_t x776 = 17U;
	volatile int64_t t165 = -123774189098125712LL;

    t165 = ((x773+x774)&(x775>x776));

    if (t165 != 1LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint64_t x778 = 62LLU;
	uint64_t x779 = 187449LLU;
	static volatile uint16_t x780 = UINT16_MAX;
	volatile uint64_t t166 = 31283967661818LLU;

    t166 = ((x777+x778)&(x779>x780));

    if (t166 != 1LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile uint8_t x781 = UINT8_MAX;
	volatile int32_t x782 = INT32_MIN;
	volatile uint32_t x783 = 57526225U;
	volatile uint8_t x784 = 4U;
	volatile int32_t t167 = -533322169;

    t167 = ((x781+x782)&(x783>x784));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x785 = 0U;
	static volatile int32_t x786 = 995;
	int64_t x787 = INT64_MIN;
	static int32_t x788 = INT32_MIN;
	volatile int32_t t168 = 88040;

    t168 = ((x785+x786)&(x787>x788));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x791 = -1;
	volatile int16_t x792 = INT16_MIN;
	static int32_t t169 = 10406;

    t169 = ((x789+x790)&(x791>x792));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x793 = 3U;
	static uint8_t x794 = 63U;
	int64_t x795 = 13236429566LL;
	int64_t x796 = INT64_MIN;
	volatile int32_t t170 = 441163682;

    t170 = ((x793+x794)&(x795>x796));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x797 = INT16_MAX;
	int32_t x798 = -1;
	uint64_t x800 = 2684563022LLU;

    t171 = ((x797+x798)&(x799>x800));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint64_t x801 = 5491322LLU;
	volatile int32_t x802 = -1;
	int32_t x803 = -1;
	int64_t x804 = -3670LL;
	uint64_t t172 = 594LLU;

    t172 = ((x801+x802)&(x803>x804));

    if (t172 != 1LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x805 = INT32_MIN;
	uint64_t x806 = 31LLU;
	uint64_t x808 = 54106742735180LLU;
	volatile uint64_t t173 = 29625032LLU;

    t173 = ((x805+x806)&(x807>x808));

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x809 = INT8_MAX;
	int32_t x810 = INT32_MIN;
	int16_t x811 = INT16_MIN;
	volatile int32_t t174 = -71952463;

    t174 = ((x809+x810)&(x811>x812));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x813 = -40;
	volatile int16_t x815 = -6;
	uint32_t x816 = 603345U;
	static int32_t t175 = 993;

    t175 = ((x813+x814)&(x815>x816));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x817 = -1;
	volatile int8_t x818 = -1;
	volatile int8_t x820 = 0;

    t176 = ((x817+x818)&(x819>x820));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x822 = INT64_MIN;
	uint64_t x823 = UINT64_MAX;
	int64_t t177 = -14LL;

    t177 = ((x821+x822)&(x823>x824));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x825 = INT16_MIN;
	uint32_t x826 = 9U;
	int64_t x827 = -1LL;
	int64_t x828 = -1LL;
	uint32_t t178 = 97758946U;

    t178 = ((x825+x826)&(x827>x828));

    if (t178 != 0U) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x833 = -28;
	volatile uint32_t x834 = 177875U;
	volatile int64_t x836 = INT64_MIN;
	uint32_t t179 = 95U;

    t179 = ((x833+x834)&(x835>x836));

    if (t179 != 1U) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x837 = INT8_MAX;
	int32_t x838 = -348;
	int64_t x839 = 2352452LL;
	static uint16_t x840 = UINT16_MAX;
	int32_t t180 = -9770;

    t180 = ((x837+x838)&(x839>x840));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint64_t x842 = 114859674LLU;
	static uint32_t x844 = UINT32_MAX;
	uint64_t t181 = 55349774LLU;

    t181 = ((x841+x842)&(x843>x844));

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x845 = 10;
	uint16_t x847 = 383U;
	int32_t x848 = -1050129;
	int32_t t182 = -126803028;

    t182 = ((x845+x846)&(x847>x848));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x849 = -1;
	volatile int16_t x850 = INT16_MIN;
	static int32_t x851 = INT32_MIN;
	uint16_t x852 = UINT16_MAX;
	int32_t t183 = -502;

    t183 = ((x849+x850)&(x851>x852));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int64_t x853 = INT64_MAX;
	uint64_t x854 = 170871034506307768LLU;
	volatile uint64_t x856 = 445377313LLU;
	static uint64_t t184 = 52518644344792LLU;

    t184 = ((x853+x854)&(x855>x856));

    if (t184 != 1LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x863 = INT16_MIN;
	static volatile uint64_t t185 = 128343140215424622LLU;

    t185 = ((x861+x862)&(x863>x864));

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x865 = 7U;
	uint64_t x866 = UINT64_MAX;
	uint32_t x868 = 2664U;
	static uint64_t t186 = 1068399LLU;

    t186 = ((x865+x866)&(x867>x868));

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x869 = 2503;
	int32_t x870 = -1630186;
	int32_t x871 = INT32_MIN;
	volatile int16_t x872 = INT16_MIN;
	volatile int32_t t187 = -121;

    t187 = ((x869+x870)&(x871>x872));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x877 = INT64_MIN;
	uint8_t x878 = 1U;
	int64_t x880 = 14974929809LL;

    t188 = ((x877+x878)&(x879>x880));

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x881 = 6523LL;
	static int8_t x882 = INT8_MAX;
	int64_t x883 = -1LL;
	int8_t x884 = -1;
	volatile int64_t t189 = -2368411LL;

    t189 = ((x881+x882)&(x883>x884));

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x886 = 10U;
	int16_t x887 = INT16_MIN;
	int64_t x888 = INT64_MIN;
	static int32_t t190 = 172;

    t190 = ((x885+x886)&(x887>x888));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x889 = INT8_MIN;
	static uint16_t x890 = UINT16_MAX;
	static uint16_t x891 = 2795U;
	static uint8_t x892 = 0U;
	static volatile int32_t t191 = 25362;

    t191 = ((x889+x890)&(x891>x892));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x893 = -1LL;
	static int64_t x894 = INT64_MAX;
	uint16_t x895 = 14U;
	static uint64_t x896 = 14LLU;
	volatile int64_t t192 = -56LL;

    t192 = ((x893+x894)&(x895>x896));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x897 = 23U;
	int8_t x898 = INT8_MIN;
	uint32_t x899 = UINT32_MAX;
	volatile int16_t x900 = INT16_MIN;
	int32_t t193 = -701;

    t193 = ((x897+x898)&(x899>x900));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x901 = INT8_MIN;
	int64_t x902 = -254542LL;
	volatile int8_t x903 = -2;
	static uint16_t x904 = 1U;

    t194 = ((x901+x902)&(x903>x904));

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x905 = 3U;
	static volatile uint32_t x906 = 2U;
	int16_t x907 = 19;
	int8_t x908 = 1;
	uint32_t t195 = 381U;

    t195 = ((x905+x906)&(x907>x908));

    if (t195 != 1U) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x909 = 5;
	uint32_t x910 = 165712U;
	int16_t x912 = 15;
	uint32_t t196 = 5U;

    t196 = ((x909+x910)&(x911>x912));

    if (t196 != 0U) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x914 = -1096052176330372492LL;
	int8_t x915 = INT8_MIN;
	int16_t x916 = INT16_MIN;
	static volatile int64_t t197 = -169150903571966150LL;

    t197 = ((x913+x914)&(x915>x916));

    if (t197 != 1LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint64_t x918 = UINT64_MAX;
	int8_t x919 = -4;
	volatile uint64_t t198 = 2766457723LLU;

    t198 = ((x917+x918)&(x919>x920));

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x922 = -22;
	static int16_t x923 = INT16_MIN;
	static uint16_t x924 = 24762U;
	static int32_t t199 = -1;

    t199 = ((x921+x922)&(x923>x924));

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


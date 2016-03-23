
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

int8_t x4 = INT8_MIN;
volatile int32_t x5 = INT32_MAX;
static volatile uint64_t t2 = 43461603992089410LLU;
static int16_t x15 = INT16_MIN;
volatile int16_t x18 = 0;
int32_t t4 = 0;
static int8_t x21 = -1;
int64_t x22 = -1LL;
int8_t x25 = -1;
static volatile int32_t t6 = 808284402;
int32_t x30 = 42244;
int16_t x38 = INT16_MAX;
volatile int32_t t9 = -16061712;
static int8_t x43 = INT8_MIN;
static volatile int8_t x46 = -1;
uint32_t x50 = UINT32_MAX;
int32_t t13 = -8675;
static uint8_t x63 = 13U;
int8_t x68 = -44;
uint32_t t16 = 29679U;
uint16_t x76 = 13U;
volatile uint16_t x77 = 212U;
uint64_t x86 = UINT64_MAX;
uint32_t x96 = 160U;
static int32_t t22 = 650;
static volatile int32_t x100 = -1;
volatile int64_t t23 = -1330040LL;
int8_t x101 = 1;
static int64_t x103 = INT64_MAX;
int32_t t24 = 15470560;
volatile int16_t x108 = INT16_MAX;
static uint32_t x109 = 141U;
int16_t x110 = INT16_MAX;
int64_t x111 = INT64_MIN;
int16_t x112 = INT16_MAX;
static int8_t x114 = INT8_MAX;
int16_t x121 = INT16_MIN;
static volatile int32_t t29 = -9;
int32_t t30 = -25804858;
static uint8_t x131 = 125U;
uint64_t t31 = 275639938397LLU;
int8_t x135 = -5;
int64_t x136 = -495582LL;
static volatile int64_t t34 = -85738266507LL;
int8_t x145 = -1;
int8_t x150 = 5;
int8_t x153 = INT8_MIN;
int64_t x162 = INT64_MIN;
static int32_t x166 = INT32_MAX;
static int16_t x169 = -1;
static int32_t x170 = -38680763;
int16_t x173 = -1;
volatile int8_t x176 = -1;
int64_t x183 = INT64_MIN;
static int8_t x188 = INT8_MIN;
int16_t x193 = -1;
uint64_t x194 = 31671491831334LLU;
int32_t x198 = INT32_MIN;
static int8_t x204 = -1;
static volatile int64_t t48 = -8LL;
static int16_t x205 = 37;
static volatile uint64_t x206 = 13134881LLU;
int16_t x242 = INT16_MAX;
static int32_t x244 = -753499938;
volatile int64_t x245 = INT64_MIN;
uint32_t t60 = UINT32_MAX;
volatile int32_t t61 = -1;
int64_t x262 = -16811600922188LL;
int64_t x268 = -188368737533984449LL;
int8_t x277 = -1;
int64_t x282 = INT64_MAX;
int64_t x283 = INT64_MAX;
static int8_t x284 = -1;
int64_t t67 = INT64_MAX;
int32_t x295 = -1;
int8_t x297 = INT8_MIN;
uint8_t x306 = UINT8_MAX;
int64_t x307 = 160089195591LL;
uint8_t x308 = 60U;
int32_t t72 = 969186902;
int8_t x310 = INT8_MAX;
int32_t t74 = 17762390;
static int16_t x317 = INT16_MAX;
static uint32_t x323 = 2058800U;
int16_t x324 = INT16_MAX;
int32_t t76 = -32655;
uint16_t x325 = 2867U;
int16_t x329 = INT16_MAX;
uint16_t x334 = 21075U;
int32_t x335 = 29;
int8_t x342 = -1;
static volatile int64_t x348 = -378471831033362LL;
uint32_t x350 = 124U;
volatile int64_t t84 = INT64_MIN;
static int16_t x357 = INT16_MAX;
int64_t x360 = -161253LL;
int32_t x374 = -11556;
static uint8_t x377 = 0U;
static int64_t x388 = INT64_MAX;
uint16_t x394 = 69U;
static uint8_t x395 = UINT8_MAX;
static int16_t x407 = -878;
int16_t x409 = INT16_MIN;
uint8_t x416 = 3U;
volatile int64_t t99 = -9828568920385229LL;
uint8_t x422 = 6U;
int32_t t100 = -1473518;
int8_t x428 = 20;
static volatile int64_t t101 = -501864731705LL;
volatile int32_t x458 = -17682;
int64_t x461 = -1LL;
int8_t x462 = INT8_MIN;
int8_t x463 = -27;
int64_t t110 = -25855640616057LL;
int64_t x465 = 1LL;
static volatile int32_t x474 = -1;
static int32_t x476 = INT32_MAX;
int16_t x485 = INT16_MIN;
int8_t x502 = INT8_MIN;
int32_t x503 = -42;
int16_t x505 = -1;
int16_t x508 = -1;
volatile int64_t t121 = -13LL;
int8_t x513 = INT8_MIN;
uint8_t x514 = 0U;
uint64_t x520 = UINT64_MAX;
volatile uint64_t t123 = 98403504900216LLU;
int8_t x528 = 33;
volatile int32_t t125 = 11338;
uint32_t t126 = 456830U;
int8_t x535 = -1;
volatile int32_t x537 = INT32_MAX;
int64_t x541 = INT64_MIN;
volatile int64_t x553 = INT64_MIN;
int16_t x567 = INT16_MIN;
static int64_t x568 = INT64_MAX;
uint64_t x575 = 63LLU;
int64_t t136 = 664115262801744939LL;
volatile uint64_t x580 = 410LLU;
static volatile int64_t x598 = -2LL;
int64_t t142 = -1408LL;
volatile int8_t x605 = INT8_MIN;
volatile int32_t t146 = 863513;
int8_t x626 = INT8_MIN;
volatile int32_t t147 = 0;
int32_t x629 = 336694361;
int32_t t148 = INT32_MAX;
int32_t x640 = 25;
int64_t x644 = INT64_MIN;
int64_t x650 = INT64_MAX;
static int32_t x651 = INT32_MAX;
int32_t x656 = 360837365;
int32_t x657 = INT32_MIN;
static volatile int64_t x658 = INT64_MAX;
uint16_t x659 = 6U;
int64_t x664 = -1LL;
int16_t x665 = INT16_MIN;
int64_t x671 = INT64_MAX;
static uint64_t x675 = UINT64_MAX;
static uint64_t t159 = UINT64_MAX;
uint8_t x683 = UINT8_MAX;
uint8_t x688 = 1U;
int64_t x696 = INT64_MIN;
static int32_t t167 = -15;
uint16_t x711 = 2497U;
int32_t x712 = -244;
int16_t x714 = INT16_MIN;
int32_t x720 = INT32_MIN;
int16_t x722 = INT16_MAX;
volatile int64_t x723 = INT64_MIN;
int8_t x724 = INT8_MIN;
static uint16_t x726 = UINT16_MAX;
int16_t x731 = INT16_MAX;
static int32_t x732 = 0;
uint64_t x740 = 0LLU;
int8_t x747 = 12;
int16_t x751 = INT16_MAX;
int16_t x752 = -860;
int32_t x753 = INT32_MIN;
int64_t x762 = -1LL;
static int16_t x770 = -1;
int64_t x775 = 805LL;
uint16_t x778 = 387U;
static int8_t x779 = INT8_MIN;
volatile int32_t t184 = 7481954;
uint16_t x785 = UINT16_MAX;
uint16_t x786 = 22420U;
static int8_t x797 = -1;
int8_t x798 = -2;
uint32_t t189 = 3739U;
uint16_t x813 = 107U;
int16_t x817 = 3213;
uint16_t x823 = 7110U;
int64_t x825 = 1483034196424732LL;
static uint16_t x827 = UINT16_MAX;
volatile uint64_t x829 = 579415506LLU;
uint16_t x839 = UINT16_MAX;
int64_t x843 = INT64_MAX;
volatile int32_t t198 = 766;
int8_t x846 = 7;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	int16_t x2 = INT16_MIN;
	int16_t x3 = -3832;
	int32_t t0 = -9693520;

    t0 = ((x1|x2)/(x3!=x4));

    if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x6 = 18376;
	uint32_t x7 = UINT32_MAX;
	int32_t x8 = 1;
	int32_t t1 = INT32_MAX;

    t1 = ((x5|x6)/(x7!=x8));

    if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = 87U;
	uint64_t x10 = 10397568LLU;
	uint64_t x11 = UINT64_MAX;
	static uint8_t x12 = 34U;

    t2 = ((x9|x10)/(x11!=x12));

    if (t2 != 10397655LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x13 = -10;
	static int16_t x14 = INT16_MIN;
	int64_t x16 = -2105540655873LL;
	int32_t t3 = -2006;

    t3 = ((x13|x14)/(x15!=x16));

    if (t3 != -10) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x17 = -59;
	static int16_t x19 = -1;
	uint32_t x20 = 438264U;

    t4 = ((x17|x18)/(x19!=x20));

    if (t4 != -59) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int16_t x23 = -1;
	uint16_t x24 = 1U;
	int64_t t5 = 993246812387LL;

    t5 = ((x21|x22)/(x23!=x24));

    if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x26 = -24;
	int8_t x27 = 23;
	static uint16_t x28 = UINT16_MAX;

    t6 = ((x25|x26)/(x27!=x28));

    if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = INT16_MIN;
	uint16_t x31 = 520U;
	uint32_t x32 = 47032607U;
	int32_t t7 = 26290;

    t7 = ((x29|x30)/(x31!=x32));

    if (t7 != -23292) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MAX;
	static volatile int64_t x34 = 17025083461229200LL;
	int32_t x35 = -1;
	volatile uint8_t x36 = 22U;
	int64_t t8 = -14043047062LL;

    t8 = ((x33|x34)/(x35!=x36));

    if (t8 != 17025083461238783LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = INT32_MIN;
	int64_t x39 = INT64_MAX;
	uint64_t x40 = 494LLU;

    t9 = ((x37|x38)/(x39!=x40));

    if (t9 != -2147450881) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x41 = 7180;
	int64_t x42 = 266044316264741831LL;
	int16_t x44 = -1;
	volatile int64_t t10 = -1236LL;

    t10 = ((x41|x42)/(x43!=x44));

    if (t10 != 266044316264742863LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x45 = -1356172;
	int8_t x47 = INT8_MIN;
	uint8_t x48 = UINT8_MAX;
	int32_t t11 = -12;

    t11 = ((x45|x46)/(x47!=x48));

    if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x49 = -14573;
	int32_t x51 = INT32_MAX;
	int16_t x52 = INT16_MIN;
	static uint32_t t12 = UINT32_MAX;

    t12 = ((x49|x50)/(x51!=x52));

    if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = -1;
	int8_t x54 = 25;
	int32_t x55 = 38823069;
	static int16_t x56 = -886;

    t13 = ((x53|x54)/(x55!=x56));

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = -57;
	int16_t x58 = 175;
	uint64_t x59 = UINT64_MAX;
	uint16_t x60 = 97U;
	int32_t t14 = 1;

    t14 = ((x57|x58)/(x59!=x60));

    if (t14 != -17) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = -1LL;
	static volatile int16_t x62 = -1;
	int32_t x64 = INT32_MAX;
	static int64_t t15 = -53LL;

    t15 = ((x61|x62)/(x63!=x64));

    if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x65 = 2U;
	int8_t x66 = 4;
	uint8_t x67 = 1U;

    t16 = ((x65|x66)/(x67!=x68));

    if (t16 != 6U) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x73 = INT8_MIN;
	static volatile int32_t x74 = INT32_MAX;
	static int16_t x75 = 1551;
	volatile int32_t t17 = 0;

    t17 = ((x73|x74)/(x75!=x76));

    if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x78 = 5072U;
	int16_t x79 = 1608;
	int16_t x80 = INT16_MIN;
	volatile int32_t t18 = 58069905;

    t18 = ((x77|x78)/(x79!=x80));

    if (t18 != 5076) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x81 = INT32_MIN;
	static volatile int16_t x82 = -1;
	volatile int16_t x83 = -46;
	uint8_t x84 = 1U;
	volatile int32_t t19 = 46;

    t19 = ((x81|x82)/(x83!=x84));

    if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int8_t x85 = INT8_MIN;
	int64_t x87 = INT64_MIN;
	volatile uint8_t x88 = 9U;
	uint64_t t20 = UINT64_MAX;

    t20 = ((x85|x86)/(x87!=x88));

    if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x89 = 1;
	uint32_t x90 = UINT32_MAX;
	volatile int32_t x91 = INT32_MAX;
	int64_t x92 = -66896494937LL;
	uint32_t t21 = UINT32_MAX;

    t21 = ((x89|x90)/(x91!=x92));

    if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x93 = UINT16_MAX;
	int32_t x94 = INT32_MIN;
	int32_t x95 = INT32_MAX;

    t22 = ((x93|x94)/(x95!=x96));

    if (t22 != -2147418113) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x97 = 50865LL;
	uint32_t x98 = UINT32_MAX;
	int8_t x99 = -15;

    t23 = ((x97|x98)/(x99!=x100));

    if (t23 != 4294967295LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x102 = 154;
	static int16_t x104 = INT16_MAX;

    t24 = ((x101|x102)/(x103!=x104));

    if (t24 != 155) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x105 = -25;
	int32_t x106 = INT32_MAX;
	static uint8_t x107 = 3U;
	volatile int32_t t25 = -116114361;

    t25 = ((x105|x106)/(x107!=x108));

    if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t t26 = 26394947U;

    t26 = ((x109|x110)/(x111!=x112));

    if (t26 != 32767U) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x113 = -5;
	uint8_t x115 = 1U;
	int32_t x116 = -175;
	volatile int32_t t27 = -13;

    t27 = ((x113|x114)/(x115!=x116));

    if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x117 = -3;
	static volatile int64_t x118 = -6571LL;
	int64_t x119 = INT64_MIN;
	uint32_t x120 = 1030881067U;
	int64_t t28 = -14015850082LL;

    t28 = ((x117|x118)/(x119!=x120));

    if (t28 != -3LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x122 = -1;
	int16_t x123 = INT16_MIN;
	volatile uint32_t x124 = UINT32_MAX;

    t29 = ((x121|x122)/(x123!=x124));

    if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x125 = UINT8_MAX;
	uint8_t x126 = UINT8_MAX;
	int32_t x127 = INT32_MIN;
	int8_t x128 = 11;

    t30 = ((x125|x126)/(x127!=x128));

    if (t30 != 255) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x129 = 6995LLU;
	static uint64_t x130 = 878471602794286LLU;
	int64_t x132 = INT64_MAX;

    t31 = ((x129|x130)/(x131!=x132));

    if (t31 != 878471602798463LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x133 = -5;
	int64_t x134 = INT64_MIN;
	static volatile int64_t t32 = -138843481007546LL;

    t32 = ((x133|x134)/(x135!=x136));

    if (t32 != -5LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x137 = -6;
	int8_t x138 = 11;
	uint16_t x139 = 14U;
	volatile int64_t x140 = INT64_MAX;
	volatile int32_t t33 = -3;

    t33 = ((x137|x138)/(x139!=x140));

    if (t33 != -5) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x141 = INT32_MAX;
	int64_t x142 = INT64_MIN;
	int64_t x143 = INT64_MIN;
	static uint64_t x144 = 1768624066926LLU;

    t34 = ((x141|x142)/(x143!=x144));

    if (t34 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x146 = -6571476;
	int8_t x147 = 3;
	static uint16_t x148 = UINT16_MAX;
	volatile int32_t t35 = -1;

    t35 = ((x145|x146)/(x147!=x148));

    if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x149 = 1U;
	int32_t x151 = 2049937;
	volatile int8_t x152 = -6;
	int32_t t36 = -547;

    t36 = ((x149|x150)/(x151!=x152));

    if (t36 != 5) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x154 = 9445528U;
	int8_t x155 = INT8_MIN;
	volatile uint64_t x156 = UINT64_MAX;
	static volatile uint32_t t37 = 1U;

    t37 = ((x153|x154)/(x155!=x156));

    if (t37 != 4294967192U) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x157 = 156;
	int64_t x158 = -1LL;
	int64_t x159 = -1LL;
	volatile int16_t x160 = INT16_MIN;
	int64_t t38 = 56LL;

    t38 = ((x157|x158)/(x159!=x160));

    if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x161 = INT64_MIN;
	int8_t x163 = INT8_MIN;
	int32_t x164 = INT32_MIN;
	static volatile int64_t t39 = INT64_MIN;

    t39 = ((x161|x162)/(x163!=x164));

    if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x165 = -22810028796578LL;
	static int64_t x167 = -1LL;
	int32_t x168 = INT32_MIN;
	volatile int64_t t40 = -1LL;

    t40 = ((x165|x166)/(x167!=x168));

    if (t40 != -22808423825409LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x171 = INT16_MIN;
	volatile int64_t x172 = INT64_MAX;
	static volatile int32_t t41 = 125617;

    t41 = ((x169|x170)/(x171!=x172));

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x174 = UINT64_MAX;
	static int32_t x175 = 21;
	volatile uint64_t t42 = UINT64_MAX;

    t42 = ((x173|x174)/(x175!=x176));

    if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x177 = INT16_MIN;
	int16_t x178 = INT16_MIN;
	int16_t x179 = -1;
	uint64_t x180 = 40488516087710LLU;
	int32_t t43 = 1823097;

    t43 = ((x177|x178)/(x179!=x180));

    if (t43 != -32768) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint16_t x181 = UINT16_MAX;
	int8_t x182 = 30;
	int64_t x184 = INT64_MAX;
	volatile int32_t t44 = 1571067;

    t44 = ((x181|x182)/(x183!=x184));

    if (t44 != 65535) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x185 = 1848LLU;
	int8_t x186 = -1;
	int64_t x187 = 3976602LL;
	volatile uint64_t t45 = UINT64_MAX;

    t45 = ((x185|x186)/(x187!=x188));

    if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x195 = 91063251;
	uint16_t x196 = 1485U;
	uint64_t t46 = UINT64_MAX;

    t46 = ((x193|x194)/(x195!=x196));

    if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x197 = -1;
	static uint64_t x199 = UINT64_MAX;
	int16_t x200 = -9354;
	volatile int32_t t47 = -260701;

    t47 = ((x197|x198)/(x199!=x200));

    if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x201 = INT64_MIN;
	uint32_t x202 = 93726U;
	volatile uint8_t x203 = 4U;

    t48 = ((x201|x202)/(x203!=x204));

    if (t48 != -9223372036854682082LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x207 = INT64_MIN;
	volatile uint32_t x208 = UINT32_MAX;
	static volatile uint64_t t49 = 1856795417311LLU;

    t49 = ((x205|x206)/(x207!=x208));

    if (t49 != 13134885LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x209 = 22U;
	int32_t x210 = -1;
	volatile int16_t x211 = INT16_MIN;
	int16_t x212 = -1;
	int32_t t50 = -27;

    t50 = ((x209|x210)/(x211!=x212));

    if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x213 = -3;
	static int32_t x214 = INT32_MIN;
	int32_t x215 = -55401;
	int64_t x216 = 182530759320266LL;
	int32_t t51 = 100;

    t51 = ((x213|x214)/(x215!=x216));

    if (t51 != -3) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x221 = 165687U;
	static int64_t x222 = -3374451465LL;
	uint32_t x223 = 795024U;
	static volatile uint64_t x224 = 39658877766082088LLU;
	volatile int64_t t52 = 92585407LL;

    t52 = ((x221|x222)/(x223!=x224));

    if (t52 != -3374319625LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x225 = -233;
	int16_t x226 = -1;
	int32_t x227 = 205414;
	int16_t x228 = 438;
	int32_t t53 = 7;

    t53 = ((x225|x226)/(x227!=x228));

    if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x229 = -1;
	int16_t x230 = INT16_MAX;
	int64_t x231 = -94845065865842090LL;
	int64_t x232 = 17LL;
	int32_t t54 = -34393;

    t54 = ((x229|x230)/(x231!=x232));

    if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x233 = INT8_MIN;
	static int8_t x234 = -1;
	uint64_t x235 = 14005434LLU;
	uint16_t x236 = 14U;
	int32_t t55 = -71;

    t55 = ((x233|x234)/(x235!=x236));

    if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x237 = INT8_MIN;
	static int64_t x238 = -1LL;
	static int64_t x239 = 1564LL;
	static uint32_t x240 = 784671U;
	int64_t t56 = -31109793LL;

    t56 = ((x237|x238)/(x239!=x240));

    if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint64_t x241 = UINT64_MAX;
	volatile int32_t x243 = INT32_MIN;
	volatile uint64_t t57 = UINT64_MAX;

    t57 = ((x241|x242)/(x243!=x244));

    if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint64_t x246 = 11035668546274129LLU;
	volatile int32_t x247 = -1;
	int32_t x248 = INT32_MIN;
	volatile uint64_t t58 = 595488358538LLU;

    t58 = ((x245|x246)/(x247!=x248));

    if (t58 != 9234407705401049937LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x249 = -31;
	int64_t x250 = -1LL;
	uint8_t x251 = 111U;
	int32_t x252 = 54804;
	volatile int64_t t59 = -17157235336LL;

    t59 = ((x249|x250)/(x251!=x252));

    if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int16_t x253 = -22;
	uint32_t x254 = 210813U;
	volatile uint8_t x255 = 12U;
	uint8_t x256 = UINT8_MAX;

    t60 = ((x253|x254)/(x255!=x256));

    if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x257 = INT32_MIN;
	int16_t x258 = -1;
	static uint16_t x259 = UINT16_MAX;
	int16_t x260 = 3;

    t61 = ((x257|x258)/(x259!=x260));

    if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint16_t x261 = 26U;
	int8_t x263 = INT8_MIN;
	static uint32_t x264 = 0U;
	static volatile int64_t t62 = 7LL;

    t62 = ((x261|x262)/(x263!=x264));

    if (t62 != -16811600922178LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x265 = INT32_MIN;
	volatile int16_t x266 = 79;
	int32_t x267 = -774;
	int32_t t63 = -658384;

    t63 = ((x265|x266)/(x267!=x268));

    if (t63 != -2147483569) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x269 = -1;
	int8_t x270 = -1;
	volatile uint16_t x271 = UINT16_MAX;
	static volatile int8_t x272 = -1;
	static volatile int32_t t64 = 0;

    t64 = ((x269|x270)/(x271!=x272));

    if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x273 = INT64_MAX;
	int64_t x274 = -1LL;
	volatile uint8_t x275 = 66U;
	uint64_t x276 = 747003019806LLU;
	volatile int64_t t65 = -817LL;

    t65 = ((x273|x274)/(x275!=x276));

    if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x278 = -1;
	int32_t x279 = -1;
	uint64_t x280 = 65405367422728LLU;
	int32_t t66 = -202720936;

    t66 = ((x277|x278)/(x279!=x280));

    if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x281 = 0LL;

    t67 = ((x281|x282)/(x283!=x284));

    if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x289 = INT32_MAX;
	uint16_t x290 = 254U;
	int32_t x291 = INT32_MIN;
	uint16_t x292 = UINT16_MAX;
	int32_t t68 = INT32_MAX;

    t68 = ((x289|x290)/(x291!=x292));

    if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x293 = 17U;
	uint8_t x294 = UINT8_MAX;
	static int64_t x296 = -1038523677809569382LL;
	volatile int32_t t69 = 0;

    t69 = ((x293|x294)/(x295!=x296));

    if (t69 != 255) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x298 = INT32_MIN;
	uint64_t x299 = UINT64_MAX;
	int8_t x300 = -10;
	int32_t t70 = 71727647;

    t70 = ((x297|x298)/(x299!=x300));

    if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x301 = INT8_MIN;
	uint64_t x302 = 799LLU;
	int32_t x303 = 17;
	int64_t x304 = -1LL;
	uint64_t t71 = 2524682444214045LLU;

    t71 = ((x301|x302)/(x303!=x304));

    if (t71 != 18446744073709551519LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x305 = -4670858;

    t72 = ((x305|x306)/(x307!=x308));

    if (t72 != -4670721) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x309 = 15;
	static uint64_t x311 = 1099614LLU;
	int64_t x312 = -1LL;
	int32_t t73 = 0;

    t73 = ((x309|x310)/(x311!=x312));

    if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x313 = INT16_MIN;
	volatile int16_t x314 = INT16_MAX;
	uint8_t x315 = 0U;
	uint16_t x316 = 6078U;

    t74 = ((x313|x314)/(x315!=x316));

    if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x318 = 0;
	uint32_t x319 = 27281U;
	static int64_t x320 = 7044139LL;
	int32_t t75 = 15255;

    t75 = ((x317|x318)/(x319!=x320));

    if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x321 = -2969;
	int32_t x322 = INT32_MIN;

    t76 = ((x321|x322)/(x323!=x324));

    if (t76 != -2969) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint64_t x326 = UINT64_MAX;
	int16_t x327 = 27;
	int64_t x328 = -815363LL;
	volatile uint64_t t77 = UINT64_MAX;

    t77 = ((x325|x326)/(x327!=x328));

    if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x330 = UINT32_MAX;
	int16_t x331 = INT16_MIN;
	volatile int32_t x332 = 1455542;
	volatile uint32_t t78 = UINT32_MAX;

    t78 = ((x329|x330)/(x331!=x332));

    if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x333 = INT64_MIN;
	static int32_t x336 = INT32_MAX;
	static int64_t t79 = 7931079887LL;

    t79 = ((x333|x334)/(x335!=x336));

    if (t79 != -9223372036854754733LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int64_t x337 = 29LL;
	uint32_t x338 = 35790U;
	volatile int16_t x339 = INT16_MIN;
	static int8_t x340 = 58;
	volatile int64_t t80 = 1LL;

    t80 = ((x337|x338)/(x339!=x340));

    if (t80 != 35807LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x341 = INT32_MAX;
	int32_t x343 = 24404;
	static volatile int32_t x344 = -783791410;
	int32_t t81 = -91815;

    t81 = ((x341|x342)/(x343!=x344));

    if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int8_t x345 = INT8_MIN;
	int8_t x346 = -9;
	static int16_t x347 = INT16_MIN;
	volatile int32_t t82 = 57;

    t82 = ((x345|x346)/(x347!=x348));

    if (t82 != -9) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x349 = UINT64_MAX;
	static volatile int64_t x351 = INT64_MIN;
	static volatile int8_t x352 = INT8_MIN;
	volatile uint64_t t83 = UINT64_MAX;

    t83 = ((x349|x350)/(x351!=x352));

    if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x353 = INT64_MIN;
	volatile int32_t x354 = 0;
	int32_t x355 = INT32_MAX;
	uint64_t x356 = 144624260105940LLU;

    t84 = ((x353|x354)/(x355!=x356));

    if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x358 = -240345909LL;
	uint64_t x359 = 104LLU;
	volatile int64_t t85 = -872714518LL;

    t85 = ((x357|x358)/(x359!=x360));

    if (t85 != -240320513LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x361 = INT32_MAX;
	int32_t x362 = INT32_MIN;
	int32_t x363 = INT32_MIN;
	static int8_t x364 = INT8_MIN;
	volatile int32_t t86 = 25;

    t86 = ((x361|x362)/(x363!=x364));

    if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x365 = -1;
	int64_t x366 = 3814420148LL;
	int8_t x367 = INT8_MIN;
	uint16_t x368 = UINT16_MAX;
	static volatile int64_t t87 = 16536518627125LL;

    t87 = ((x365|x366)/(x367!=x368));

    if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x369 = INT64_MAX;
	volatile int8_t x370 = 8;
	uint64_t x371 = UINT64_MAX;
	static volatile int64_t x372 = 397801046338424LL;
	int64_t t88 = INT64_MAX;

    t88 = ((x369|x370)/(x371!=x372));

    if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x373 = INT32_MIN;
	uint16_t x375 = 15U;
	static int64_t x376 = 253349746186LL;
	volatile int32_t t89 = 593154;

    t89 = ((x373|x374)/(x375!=x376));

    if (t89 != -11556) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x378 = INT64_MAX;
	volatile uint64_t x379 = 270600519924494LLU;
	int16_t x380 = -1;
	volatile int64_t t90 = INT64_MAX;

    t90 = ((x377|x378)/(x379!=x380));

    if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x381 = 1;
	uint64_t x382 = UINT64_MAX;
	volatile uint16_t x383 = 408U;
	static volatile int32_t x384 = 0;
	uint64_t t91 = UINT64_MAX;

    t91 = ((x381|x382)/(x383!=x384));

    if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x385 = UINT16_MAX;
	int64_t x386 = -1LL;
	volatile int32_t x387 = INT32_MAX;
	int64_t t92 = -619107379381LL;

    t92 = ((x385|x386)/(x387!=x388));

    if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x389 = -985209;
	volatile uint8_t x390 = 2U;
	int32_t x391 = 3;
	int32_t x392 = INT32_MIN;
	volatile int32_t t93 = -8409223;

    t93 = ((x389|x390)/(x391!=x392));

    if (t93 != -985209) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x393 = UINT32_MAX;
	int16_t x396 = 0;
	volatile uint32_t t94 = UINT32_MAX;

    t94 = ((x393|x394)/(x395!=x396));

    if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x397 = INT64_MIN;
	int32_t x398 = INT32_MIN;
	volatile int64_t x399 = -1LL;
	int32_t x400 = 3288;
	int64_t t95 = 2453050264829LL;

    t95 = ((x397|x398)/(x399!=x400));

    if (t95 != -2147483648LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x405 = INT32_MIN;
	int8_t x406 = -1;
	static volatile uint16_t x408 = 1621U;
	int32_t t96 = -21645;

    t96 = ((x405|x406)/(x407!=x408));

    if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x410 = INT16_MAX;
	volatile int32_t x411 = INT32_MIN;
	uint16_t x412 = 20U;
	int32_t t97 = -349;

    t97 = ((x409|x410)/(x411!=x412));

    if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x413 = INT16_MIN;
	static int16_t x414 = 4;
	int16_t x415 = INT16_MIN;
	static volatile int32_t t98 = -1672;

    t98 = ((x413|x414)/(x415!=x416));

    if (t98 != -32764) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x417 = -4;
	int64_t x418 = -1293830LL;
	int16_t x419 = 1346;
	int32_t x420 = -1;

    t99 = ((x417|x418)/(x419!=x420));

    if (t99 != -2LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x421 = UINT8_MAX;
	volatile int8_t x423 = 15;
	int16_t x424 = INT16_MIN;

    t100 = ((x421|x422)/(x423!=x424));

    if (t100 != 255) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x425 = 22082098LL;
	static int16_t x426 = INT16_MAX;
	static volatile uint8_t x427 = 0U;

    t101 = ((x425|x426)/(x427!=x428));

    if (t101 != 22085631LL) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x429 = INT16_MAX;
	static volatile uint32_t x430 = 1432631U;
	int8_t x431 = INT8_MAX;
	int64_t x432 = -36272281LL;
	volatile uint32_t t102 = 98U;

    t102 = ((x429|x430)/(x431!=x432));

    if (t102 != 1441791U) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x433 = 1U;
	int64_t x434 = -107962687555085LL;
	int8_t x435 = 15;
	static int8_t x436 = INT8_MIN;
	volatile int64_t t103 = -311892797866682LL;

    t103 = ((x433|x434)/(x435!=x436));

    if (t103 != -107962687555085LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x437 = INT64_MIN;
	int16_t x438 = INT16_MAX;
	volatile uint16_t x439 = 1142U;
	uint8_t x440 = 13U;
	static volatile int64_t t104 = 920234484736461LL;

    t104 = ((x437|x438)/(x439!=x440));

    if (t104 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x441 = INT64_MIN;
	uint64_t x442 = 36289076680LLU;
	static int8_t x443 = INT8_MAX;
	int8_t x444 = -1;
	volatile uint64_t t105 = 221822LLU;

    t105 = ((x441|x442)/(x443!=x444));

    if (t105 != 9223372073143852488LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint16_t x445 = UINT16_MAX;
	int32_t x446 = INT32_MIN;
	static int16_t x447 = INT16_MAX;
	uint16_t x448 = 7543U;
	int32_t t106 = 1609;

    t106 = ((x445|x446)/(x447!=x448));

    if (t106 != -2147418113) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x449 = INT16_MAX;
	uint8_t x450 = UINT8_MAX;
	int32_t x451 = -1;
	int64_t x452 = INT64_MIN;
	static int32_t t107 = 9607;

    t107 = ((x449|x450)/(x451!=x452));

    if (t107 != 32767) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x453 = INT8_MAX;
	uint64_t x454 = 2824196207LLU;
	int16_t x455 = -15295;
	uint32_t x456 = 410U;
	volatile uint64_t t108 = 80306274LLU;

    t108 = ((x453|x454)/(x455!=x456));

    if (t108 != 2824196223LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x457 = INT64_MIN;
	int8_t x459 = INT8_MIN;
	uint64_t x460 = UINT64_MAX;
	volatile int64_t t109 = -5608LL;

    t109 = ((x457|x458)/(x459!=x460));

    if (t109 != -17682LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint32_t x464 = 1124995U;

    t110 = ((x461|x462)/(x463!=x464));

    if (t110 != -1LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x466 = INT32_MAX;
	int8_t x467 = 1;
	uint32_t x468 = 56U;
	volatile int64_t t111 = 3812LL;

    t111 = ((x465|x466)/(x467!=x468));

    if (t111 != 2147483647LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x469 = INT16_MAX;
	uint8_t x470 = UINT8_MAX;
	int32_t x471 = INT32_MIN;
	static int16_t x472 = -12918;
	volatile int32_t t112 = -393411521;

    t112 = ((x469|x470)/(x471!=x472));

    if (t112 != 32767) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x473 = -52;
	static int8_t x475 = INT8_MAX;
	int32_t t113 = 85186337;

    t113 = ((x473|x474)/(x475!=x476));

    if (t113 != -1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x477 = INT32_MIN;
	uint8_t x478 = 116U;
	int8_t x479 = 4;
	uint8_t x480 = 60U;
	int32_t t114 = 91;

    t114 = ((x477|x478)/(x479!=x480));

    if (t114 != -2147483532) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x481 = -1;
	int16_t x482 = INT16_MIN;
	int16_t x483 = INT16_MAX;
	int64_t x484 = 4500044689482323LL;
	int32_t t115 = -1703;

    t115 = ((x481|x482)/(x483!=x484));

    if (t115 != -1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x486 = 1;
	uint16_t x487 = 1667U;
	uint8_t x488 = 8U;
	int32_t t116 = 23;

    t116 = ((x485|x486)/(x487!=x488));

    if (t116 != -32767) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile uint32_t x489 = 331U;
	volatile int16_t x490 = 2;
	static int8_t x491 = INT8_MAX;
	int16_t x492 = -1;
	volatile uint32_t t117 = 30155782U;

    t117 = ((x489|x490)/(x491!=x492));

    if (t117 != 331U) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint16_t x497 = 1U;
	int16_t x498 = -1;
	int64_t x499 = -1LL;
	uint8_t x500 = UINT8_MAX;
	int32_t t118 = 0;

    t118 = ((x497|x498)/(x499!=x500));

    if (t118 != -1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x501 = INT64_MIN;
	volatile uint32_t x504 = 183849U;
	int64_t t119 = 29LL;

    t119 = ((x501|x502)/(x503!=x504));

    if (t119 != -128LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x506 = INT16_MIN;
	uint8_t x507 = 41U;
	int32_t t120 = -177393162;

    t120 = ((x505|x506)/(x507!=x508));

    if (t120 != -1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x509 = INT64_MIN;
	volatile int16_t x510 = INT16_MIN;
	static volatile uint8_t x511 = 115U;
	volatile int32_t x512 = 11531;

    t121 = ((x509|x510)/(x511!=x512));

    if (t121 != -32768LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x515 = INT64_MAX;
	volatile int8_t x516 = INT8_MIN;
	int32_t t122 = -7557354;

    t122 = ((x513|x514)/(x515!=x516));

    if (t122 != -128) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x517 = 2450059LLU;
	volatile int8_t x518 = INT8_MAX;
	uint8_t x519 = UINT8_MAX;

    t123 = ((x517|x518)/(x519!=x520));

    if (t123 != 2450175LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x521 = -1;
	int32_t x522 = -9518;
	volatile int64_t x523 = INT64_MIN;
	int8_t x524 = INT8_MAX;
	volatile int32_t t124 = -222806;

    t124 = ((x521|x522)/(x523!=x524));

    if (t124 != -1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x525 = -1;
	volatile int8_t x526 = 1;
	int16_t x527 = INT16_MAX;

    t125 = ((x525|x526)/(x527!=x528));

    if (t125 != -1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x529 = INT8_MIN;
	uint32_t x530 = 1940643U;
	volatile int16_t x531 = INT16_MAX;
	int16_t x532 = INT16_MIN;

    t126 = ((x529|x530)/(x531!=x532));

    if (t126 != 4294967203U) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x533 = INT64_MIN;
	static volatile int64_t x534 = 299176LL;
	uint16_t x536 = 32U;
	static volatile int64_t t127 = -14635LL;

    t127 = ((x533|x534)/(x535!=x536));

    if (t127 != -9223372036854476632LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x538 = -1LL;
	volatile int16_t x539 = -1;
	static volatile int8_t x540 = 14;
	volatile int64_t t128 = 1356443194LL;

    t128 = ((x537|x538)/(x539!=x540));

    if (t128 != -1LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x542 = 1;
	uint64_t x543 = UINT64_MAX;
	uint16_t x544 = 2U;
	int64_t t129 = -115858884433LL;

    t129 = ((x541|x542)/(x543!=x544));

    if (t129 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x545 = INT8_MIN;
	uint16_t x546 = UINT16_MAX;
	volatile int16_t x547 = 1816;
	uint8_t x548 = UINT8_MAX;
	volatile int32_t t130 = 2623827;

    t130 = ((x545|x546)/(x547!=x548));

    if (t130 != -1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x549 = 0;
	static volatile int32_t x550 = -1;
	int16_t x551 = INT16_MIN;
	static volatile int32_t x552 = 19673;
	volatile int32_t t131 = -1356;

    t131 = ((x549|x550)/(x551!=x552));

    if (t131 != -1) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x554 = 1;
	static int8_t x555 = INT8_MIN;
	int8_t x556 = INT8_MAX;
	volatile int64_t t132 = -3291721545LL;

    t132 = ((x553|x554)/(x555!=x556));

    if (t132 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x557 = 837U;
	int32_t x558 = -32438;
	uint16_t x559 = 203U;
	uint64_t x560 = 732123922951859528LLU;
	int32_t t133 = 202581;

    t133 = ((x557|x558)/(x559!=x560));

    if (t133 != -31921) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x561 = INT16_MIN;
	int8_t x562 = -1;
	uint8_t x563 = UINT8_MAX;
	int32_t x564 = INT32_MIN;
	static int32_t t134 = -45264;

    t134 = ((x561|x562)/(x563!=x564));

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x565 = INT8_MAX;
	uint32_t x566 = 2541U;
	uint32_t t135 = 40849824U;

    t135 = ((x565|x566)/(x567!=x568));

    if (t135 != 2559U) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x573 = INT64_MIN;
	uint16_t x574 = UINT16_MAX;
	int32_t x576 = -1626784;

    t136 = ((x573|x574)/(x575!=x576));

    if (t136 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x577 = INT64_MIN;
	int16_t x578 = INT16_MAX;
	int8_t x579 = INT8_MIN;
	static int64_t t137 = -232LL;

    t137 = ((x577|x578)/(x579!=x580));

    if (t137 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x581 = INT8_MIN;
	int32_t x582 = -1;
	int32_t x583 = INT32_MIN;
	static volatile int32_t x584 = 1;
	int32_t t138 = 6391154;

    t138 = ((x581|x582)/(x583!=x584));

    if (t138 != -1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x585 = INT8_MIN;
	volatile uint64_t x586 = 45117594LLU;
	uint32_t x587 = 377U;
	int32_t x588 = 50641613;
	uint64_t t139 = 2326LLU;

    t139 = ((x585|x586)/(x587!=x588));

    if (t139 != 18446744073709551514LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x589 = -4193362LL;
	int32_t x590 = INT32_MAX;
	int16_t x591 = INT16_MAX;
	volatile int64_t x592 = INT64_MIN;
	static int64_t t140 = -239227LL;

    t140 = ((x589|x590)/(x591!=x592));

    if (t140 != -1LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x593 = INT32_MAX;
	volatile uint32_t x594 = UINT32_MAX;
	int64_t x595 = INT64_MIN;
	int32_t x596 = INT32_MAX;
	uint32_t t141 = UINT32_MAX;

    t141 = ((x593|x594)/(x595!=x596));

    if (t141 != UINT32_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x597 = 28471680508LL;
	int8_t x599 = INT8_MAX;
	uint8_t x600 = 0U;

    t142 = ((x597|x598)/(x599!=x600));

    if (t142 != -2LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x601 = INT8_MIN;
	volatile int16_t x602 = INT16_MIN;
	int16_t x603 = INT16_MIN;
	static uint8_t x604 = 6U;
	static volatile int32_t t143 = 15785;

    t143 = ((x601|x602)/(x603!=x604));

    if (t143 != -128) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x606 = INT8_MAX;
	int32_t x607 = -1;
	int8_t x608 = INT8_MAX;
	int32_t t144 = -40482;

    t144 = ((x605|x606)/(x607!=x608));

    if (t144 != -1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x613 = 238U;
	static int8_t x614 = 43;
	uint16_t x615 = UINT16_MAX;
	uint64_t x616 = 30359043LLU;
	volatile uint32_t t145 = 25U;

    t145 = ((x613|x614)/(x615!=x616));

    if (t145 != 239U) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x621 = 24U;
	volatile int16_t x622 = INT16_MAX;
	volatile int8_t x623 = -1;
	static int8_t x624 = INT8_MIN;

    t146 = ((x621|x622)/(x623!=x624));

    if (t146 != 32767) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile uint8_t x625 = 1U;
	uint32_t x627 = 5U;
	static int32_t x628 = -1;

    t147 = ((x625|x626)/(x627!=x628));

    if (t147 != -127) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x630 = INT32_MAX;
	int64_t x631 = -2918550831179512160LL;
	static int16_t x632 = INT16_MIN;

    t148 = ((x629|x630)/(x631!=x632));

    if (t148 != INT32_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x633 = UINT8_MAX;
	int32_t x634 = 141918699;
	volatile int16_t x635 = INT16_MAX;
	static uint8_t x636 = 0U;
	volatile int32_t t149 = 90978920;

    t149 = ((x633|x634)/(x635!=x636));

    if (t149 != 141918719) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x637 = 6U;
	volatile int64_t x638 = -201114366LL;
	int8_t x639 = 0;
	int64_t t150 = -108LL;

    t150 = ((x637|x638)/(x639!=x640));

    if (t150 != -201114362LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x641 = INT32_MAX;
	static int32_t x642 = -166182;
	static int8_t x643 = -1;
	volatile int32_t t151 = 2;

    t151 = ((x641|x642)/(x643!=x644));

    if (t151 != -1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x645 = INT8_MIN;
	int32_t x646 = INT32_MAX;
	volatile int32_t x647 = INT32_MIN;
	int32_t x648 = -1;
	int32_t t152 = -37974421;

    t152 = ((x645|x646)/(x647!=x648));

    if (t152 != -1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x649 = UINT32_MAX;
	int16_t x652 = -1;
	int64_t t153 = INT64_MAX;

    t153 = ((x649|x650)/(x651!=x652));

    if (t153 != INT64_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint64_t x653 = UINT64_MAX;
	static volatile int8_t x654 = -1;
	int8_t x655 = -31;
	static volatile uint64_t t154 = UINT64_MAX;

    t154 = ((x653|x654)/(x655!=x656));

    if (t154 != UINT64_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x660 = UINT16_MAX;
	int64_t t155 = -4331897725956377389LL;

    t155 = ((x657|x658)/(x659!=x660));

    if (t155 != -1LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x661 = -2292056895398LL;
	volatile int32_t x662 = INT32_MAX;
	int32_t x663 = -32432;
	volatile int64_t t156 = 529990333824193LL;

    t156 = ((x661|x662)/(x663!=x664));

    if (t156 != -2291365052417LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x666 = -2;
	int64_t x667 = INT64_MAX;
	int32_t x668 = INT32_MIN;
	volatile int32_t t157 = 8034;

    t157 = ((x665|x666)/(x667!=x668));

    if (t157 != -2) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x669 = INT8_MIN;
	volatile int64_t x670 = INT64_MIN;
	int64_t x672 = INT64_MIN;
	volatile int64_t t158 = 13LL;

    t158 = ((x669|x670)/(x671!=x672));

    if (t158 != -128LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x673 = 169493LLU;
	volatile int8_t x674 = -1;
	int64_t x676 = 12917LL;

    t159 = ((x673|x674)/(x675!=x676));

    if (t159 != UINT64_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x677 = INT32_MIN;
	static volatile int16_t x678 = -163;
	int32_t x679 = INT32_MAX;
	int32_t x680 = -1;
	volatile int32_t t160 = 340476;

    t160 = ((x677|x678)/(x679!=x680));

    if (t160 != -163) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x681 = -1;
	int8_t x682 = INT8_MAX;
	uint16_t x684 = 51U;
	volatile int32_t t161 = -660121483;

    t161 = ((x681|x682)/(x683!=x684));

    if (t161 != -1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x685 = -3172LL;
	int16_t x686 = -1;
	int64_t x687 = -74LL;
	volatile int64_t t162 = 67716581005604890LL;

    t162 = ((x685|x686)/(x687!=x688));

    if (t162 != -1LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x689 = INT32_MAX;
	int16_t x690 = INT16_MAX;
	int8_t x691 = -28;
	int8_t x692 = INT8_MAX;
	volatile int32_t t163 = INT32_MAX;

    t163 = ((x689|x690)/(x691!=x692));

    if (t163 != INT32_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint64_t x693 = 782788075990LLU;
	int16_t x694 = INT16_MIN;
	int32_t x695 = 1;
	volatile uint64_t t164 = 702798093163104LLU;

    t164 = ((x693|x694)/(x695!=x696));

    if (t164 != 18446744073709527510LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x697 = INT16_MAX;
	int16_t x698 = 11;
	int16_t x699 = INT16_MIN;
	int32_t x700 = INT32_MIN;
	int32_t t165 = -296701804;

    t165 = ((x697|x698)/(x699!=x700));

    if (t165 != 32767) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x701 = 13550534LL;
	static uint8_t x702 = 13U;
	int8_t x703 = INT8_MAX;
	int32_t x704 = -83;
	volatile int64_t t166 = 26307009LL;

    t166 = ((x701|x702)/(x703!=x704));

    if (t166 != 13550543LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x705 = -30;
	static int16_t x706 = INT16_MIN;
	int32_t x707 = 586;
	volatile int8_t x708 = 7;

    t167 = ((x705|x706)/(x707!=x708));

    if (t167 != -30) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x709 = INT64_MIN;
	int8_t x710 = INT8_MAX;
	volatile int64_t t168 = 712LL;

    t168 = ((x709|x710)/(x711!=x712));

    if (t168 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x713 = INT16_MAX;
	int16_t x715 = INT16_MAX;
	static volatile int64_t x716 = INT64_MIN;
	int32_t t169 = -7719;

    t169 = ((x713|x714)/(x715!=x716));

    if (t169 != -1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x717 = 1557734U;
	static int16_t x718 = -410;
	static volatile int16_t x719 = INT16_MIN;
	static uint32_t t170 = 3U;

    t170 = ((x717|x718)/(x719!=x720));

    if (t170 != 4294967014U) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int16_t x721 = -1;
	static int32_t t171 = -254453;

    t171 = ((x721|x722)/(x723!=x724));

    if (t171 != -1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint32_t x725 = UINT32_MAX;
	int8_t x727 = -1;
	volatile uint32_t x728 = 591849U;
	volatile uint32_t t172 = UINT32_MAX;

    t172 = ((x725|x726)/(x727!=x728));

    if (t172 != UINT32_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x729 = INT16_MIN;
	int8_t x730 = -7;
	volatile int32_t t173 = -7120;

    t173 = ((x729|x730)/(x731!=x732));

    if (t173 != -7) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x733 = INT8_MAX;
	volatile int8_t x734 = INT8_MIN;
	int8_t x735 = -1;
	int16_t x736 = INT16_MIN;
	int32_t t174 = 343;

    t174 = ((x733|x734)/(x735!=x736));

    if (t174 != -1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x737 = -1;
	static volatile int16_t x738 = -1499;
	uint16_t x739 = UINT16_MAX;
	static int32_t t175 = -540106679;

    t175 = ((x737|x738)/(x739!=x740));

    if (t175 != -1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x741 = -1;
	int16_t x742 = 16024;
	static volatile int64_t x743 = INT64_MIN;
	static int64_t x744 = 11361604834217LL;
	static int32_t t176 = 1;

    t176 = ((x741|x742)/(x743!=x744));

    if (t176 != -1) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint32_t x745 = UINT32_MAX;
	int32_t x746 = -1;
	int32_t x748 = -1;
	volatile uint32_t t177 = UINT32_MAX;

    t177 = ((x745|x746)/(x747!=x748));

    if (t177 != UINT32_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x749 = INT64_MIN;
	int64_t x750 = INT64_MIN;
	volatile int64_t t178 = INT64_MIN;

    t178 = ((x749|x750)/(x751!=x752));

    if (t178 != INT64_MIN) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x754 = -1LL;
	volatile uint16_t x755 = UINT16_MAX;
	int64_t x756 = INT64_MIN;
	static int64_t t179 = 14192419378LL;

    t179 = ((x753|x754)/(x755!=x756));

    if (t179 != -1LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x761 = UINT16_MAX;
	volatile uint32_t x763 = 436U;
	int32_t x764 = -841682063;
	volatile int64_t t180 = -9LL;

    t180 = ((x761|x762)/(x763!=x764));

    if (t180 != -1LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x765 = -1LL;
	int8_t x766 = INT8_MIN;
	volatile uint32_t x767 = 72251218U;
	uint32_t x768 = 36499U;
	int64_t t181 = -272192223900LL;

    t181 = ((x765|x766)/(x767!=x768));

    if (t181 != -1LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x769 = -16992076LL;
	uint32_t x771 = 184U;
	int8_t x772 = INT8_MIN;
	int64_t t182 = 4110135953LL;

    t182 = ((x769|x770)/(x771!=x772));

    if (t182 != -1LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x773 = INT16_MAX;
	static int32_t x774 = INT32_MAX;
	uint32_t x776 = 18799199U;
	static int32_t t183 = INT32_MAX;

    t183 = ((x773|x774)/(x775!=x776));

    if (t183 != INT32_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x777 = 0U;
	uint64_t x780 = 1771489943558488LLU;

    t184 = ((x777|x778)/(x779!=x780));

    if (t184 != 387) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x781 = INT32_MIN;
	int8_t x782 = INT8_MIN;
	uint8_t x783 = 55U;
	int16_t x784 = 3218;
	volatile int32_t t185 = -4117;

    t185 = ((x781|x782)/(x783!=x784));

    if (t185 != -128) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x787 = INT8_MIN;
	int8_t x788 = -1;
	volatile int32_t t186 = 10189981;

    t186 = ((x785|x786)/(x787!=x788));

    if (t186 != 65535) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x793 = INT32_MIN;
	int64_t x794 = -1LL;
	int64_t x795 = 7LL;
	int32_t x796 = 162755422;
	volatile int64_t t187 = 241055596187541120LL;

    t187 = ((x793|x794)/(x795!=x796));

    if (t187 != -1LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x799 = INT16_MIN;
	int8_t x800 = 5;
	int32_t t188 = -138601;

    t188 = ((x797|x798)/(x799!=x800));

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x801 = INT16_MAX;
	uint32_t x802 = 14276U;
	static volatile int8_t x803 = 13;
	int16_t x804 = INT16_MIN;

    t189 = ((x801|x802)/(x803!=x804));

    if (t189 != 32767U) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x805 = -70;
	uint16_t x806 = 51U;
	static int32_t x807 = INT32_MIN;
	int32_t x808 = -1;
	volatile int32_t t190 = 11621;

    t190 = ((x805|x806)/(x807!=x808));

    if (t190 != -69) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x814 = 0U;
	int8_t x815 = INT8_MAX;
	int16_t x816 = 11;
	volatile int32_t t191 = 247;

    t191 = ((x813|x814)/(x815!=x816));

    if (t191 != 107) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x818 = INT64_MIN;
	int8_t x819 = -1;
	static int32_t x820 = -84139849;
	int64_t t192 = -177760572427310706LL;

    t192 = ((x817|x818)/(x819!=x820));

    if (t192 != -9223372036854772595LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x821 = 20278270;
	static volatile uint16_t x822 = 9U;
	int32_t x824 = 16200;
	int32_t t193 = -939;

    t193 = ((x821|x822)/(x823!=x824));

    if (t193 != 20278271) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x826 = -1;
	volatile int64_t x828 = -971526366638LL;
	static volatile int64_t t194 = -15024867LL;

    t194 = ((x825|x826)/(x827!=x828));

    if (t194 != -1LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint64_t x830 = UINT64_MAX;
	int64_t x831 = -858LL;
	static int8_t x832 = -1;
	static uint64_t t195 = UINT64_MAX;

    t195 = ((x829|x830)/(x831!=x832));

    if (t195 != UINT64_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x833 = INT16_MIN;
	volatile int64_t x834 = -28947206350LL;
	volatile int16_t x835 = 1621;
	volatile uint64_t x836 = 122420375709LLU;
	int64_t t196 = 1LL;

    t196 = ((x833|x834)/(x835!=x836));

    if (t196 != -20686LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x837 = INT64_MIN;
	uint8_t x838 = 2U;
	int16_t x840 = -1;
	int64_t t197 = 3LL;

    t197 = ((x837|x838)/(x839!=x840));

    if (t197 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x841 = -23;
	int16_t x842 = INT16_MAX;
	volatile uint8_t x844 = 0U;

    t198 = ((x841|x842)/(x843!=x844));

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x845 = INT64_MIN;
	int64_t x847 = INT64_MIN;
	int32_t x848 = INT32_MIN;
	static int64_t t199 = -185885511996931567LL;

    t199 = ((x845|x846)/(x847!=x848));

    if (t199 != -9223372036854775801LL) { NG(); } else { ; }
	
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


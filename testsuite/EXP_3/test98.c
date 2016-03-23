
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

int32_t x2 = INT32_MAX;
volatile int16_t x3 = INT16_MIN;
uint8_t x17 = 18U;
uint32_t x20 = 7U;
int16_t x21 = -1;
volatile uint32_t x22 = 400875530U;
int32_t x23 = 1;
int64_t x34 = -1463931727709LL;
static volatile uint16_t x38 = 1674U;
uint64_t x41 = 45249420281962LLU;
static volatile int16_t x47 = INT16_MIN;
int32_t x48 = 252087423;
volatile int32_t x49 = INT32_MIN;
uint8_t x55 = 3U;
uint32_t x67 = 23106U;
int64_t x85 = INT64_MIN;
int64_t x105 = INT64_MIN;
static uint16_t x107 = UINT16_MAX;
uint64_t x110 = UINT64_MAX;
int64_t x114 = 47420246894740LL;
volatile uint32_t x125 = 1834U;
int64_t x131 = -7476567072LL;
static uint16_t x132 = UINT16_MAX;
int32_t x134 = INT32_MIN;
static int32_t t29 = -269408;
volatile uint16_t x148 = 52U;
volatile uint32_t t30 = 1928607858U;
volatile int64_t t31 = 2636314741358340LL;
volatile int8_t x153 = 4;
int16_t x156 = INT16_MAX;
int32_t x158 = INT32_MIN;
volatile int32_t x159 = -220362783;
volatile uint16_t x172 = UINT16_MAX;
int8_t x173 = -51;
int64_t x184 = -1LL;
int64_t t37 = INT64_MAX;
int8_t x186 = INT8_MAX;
int64_t x193 = INT64_MIN;
int16_t x195 = INT16_MIN;
static int32_t t42 = -25;
volatile int8_t x222 = 1;
int16_t x233 = INT16_MIN;
volatile int64_t x236 = -1LL;
uint16_t x237 = 383U;
uint64_t x239 = UINT64_MAX;
volatile uint64_t t47 = UINT64_MAX;
int64_t x251 = 9LL;
static uint32_t x252 = UINT32_MAX;
int8_t x256 = -1;
static uint32_t x260 = 4206U;
volatile uint32_t t52 = 3076U;
static int64_t t53 = 852LL;
uint64_t x265 = 3LLU;
int64_t x268 = -1LL;
volatile uint32_t x272 = UINT32_MAX;
int32_t x282 = 1273;
int64_t t59 = 17234948LL;
static volatile int32_t x298 = -1;
volatile int64_t t60 = -63206281657028932LL;
uint8_t x304 = UINT8_MAX;
uint8_t x305 = 7U;
int16_t x306 = INT16_MAX;
volatile uint64_t t62 = 623081LLU;
int64_t x309 = INT64_MAX;
uint64_t x311 = 204110LLU;
uint32_t t64 = 247U;
volatile int32_t x317 = -1;
int64_t x318 = -1LL;
uint16_t x319 = UINT16_MAX;
uint64_t x321 = UINT64_MAX;
static uint64_t t68 = 643LLU;
int16_t x337 = -5771;
static int32_t t69 = -379728;
uint64_t x351 = UINT64_MAX;
int64_t x353 = -236515LL;
uint64_t x355 = 84380LLU;
int32_t x363 = -1;
static volatile uint32_t x374 = 783422U;
int64_t t77 = -8927021816775LL;
int64_t x399 = -744LL;
static int64_t t80 = -205879005LL;
static volatile uint32_t t81 = 2685U;
int64_t t82 = -87477540861464LL;
int16_t x420 = INT16_MIN;
volatile uint8_t x428 = 8U;
int64_t x440 = -5LL;
int32_t t87 = 1657225;
int8_t x452 = INT8_MIN;
int16_t x471 = 1;
static volatile uint32_t x477 = 988096U;
int64_t x479 = INT64_MAX;
int32_t x493 = INT32_MIN;
static uint64_t x494 = 2074041LLU;
int32_t x495 = -1;
int16_t x496 = -1;
int32_t t96 = -766079969;
uint64_t x497 = 5441LLU;
uint8_t x499 = 112U;
int32_t t98 = 6116139;
uint64_t x505 = UINT64_MAX;
static volatile uint16_t x506 = 13U;
volatile uint64_t t100 = 602423517674862271LLU;
uint16_t x520 = 13935U;
int32_t t102 = 124;
static int32_t x521 = 239548230;
int16_t x522 = 1;
static int64_t x525 = -147054730LL;
static int8_t x535 = -1;
int8_t x539 = INT8_MIN;
volatile int32_t t108 = 4782430;
uint64_t x546 = 14865260LLU;
volatile uint32_t x547 = 23516U;
static uint8_t x550 = 7U;
int32_t x570 = 1;
uint16_t x572 = 4106U;
uint64_t x573 = UINT64_MAX;
int64_t x575 = -1LL;
int32_t x576 = 26;
uint32_t x578 = UINT32_MAX;
int32_t t118 = 11;
uint32_t x588 = 56026722U;
int32_t x591 = -1;
volatile int32_t x596 = -3;
int32_t x603 = 252574;
volatile int8_t x605 = INT8_MAX;
volatile int32_t t124 = 102;
int64_t x612 = -101095502562316LL;
int8_t x613 = -1;
int8_t x615 = -1;
int16_t x621 = 7;
static int16_t x624 = INT16_MIN;
static volatile int32_t t127 = 40774708;
int8_t x632 = -1;
uint32_t x635 = 98720U;
uint32_t x642 = 31084769U;
volatile int8_t x646 = INT8_MIN;
int16_t x653 = INT16_MAX;
uint16_t x654 = 19413U;
uint8_t x663 = 62U;
uint64_t x664 = UINT64_MAX;
int8_t x665 = INT8_MAX;
static volatile int32_t x676 = INT32_MIN;
static uint64_t x678 = 3383LLU;
int32_t t139 = -387613564;
int8_t x683 = INT8_MIN;
volatile int16_t x684 = 0;
int32_t t140 = -199535;
int32_t x685 = -1;
int8_t x688 = INT8_MAX;
int64_t x689 = -690929632112736299LL;
int64_t x690 = -10736602LL;
volatile int64_t t143 = 1417652LL;
int64_t x703 = -627726530154573LL;
int64_t x714 = INT64_MAX;
int64_t t147 = 10579LL;
volatile int32_t x719 = -1;
int8_t x722 = -1;
int32_t t149 = -2903;
int16_t x728 = -1;
int32_t x729 = INT32_MIN;
uint32_t x740 = 106451078U;
volatile uint64_t t155 = 54322811LLU;
uint32_t x761 = 740U;
static volatile int8_t x762 = INT8_MAX;
volatile uint32_t x764 = UINT32_MAX;
uint64_t x769 = UINT64_MAX;
volatile int64_t t161 = -2326319155559539552LL;
uint32_t x779 = 1921U;
int16_t x783 = INT16_MAX;
int64_t x785 = -1LL;
uint64_t x788 = UINT64_MAX;
static uint64_t t165 = 13517305890716265LLU;
int32_t x794 = INT32_MIN;
static int32_t t167 = -2726;
uint64_t x809 = UINT64_MAX;
uint32_t x812 = 99U;
int64_t x813 = 267709LL;
int8_t x820 = INT8_MIN;
int64_t x821 = INT64_MIN;
int32_t x824 = 138;
static volatile int16_t x834 = INT16_MAX;
int8_t x836 = -4;
int16_t x842 = INT16_MAX;
volatile uint32_t x851 = UINT32_MAX;
int16_t x852 = -197;
volatile uint32_t t179 = 4397U;
int16_t x863 = INT16_MAX;
int16_t x864 = INT16_MIN;
int8_t x865 = -1;
uint8_t x869 = UINT8_MAX;
int32_t x871 = -1;
volatile int8_t x881 = INT8_MIN;
volatile int8_t x891 = -1;
volatile uint32_t t189 = 56370U;
int8_t x898 = 8;
int64_t x900 = -58LL;
int32_t x903 = 3;
static volatile int8_t x904 = INT8_MIN;
uint32_t x911 = 48192683U;
int64_t x915 = INT64_MIN;
int64_t x922 = INT64_MIN;
int64_t x923 = -1LL;
uint32_t x925 = 3668U;
volatile uint32_t t197 = 229491U;
volatile int32_t x935 = -1;
uint8_t x936 = 0U;
static int8_t x940 = INT8_MIN;


void f0(void) {
    	int16_t x1 = INT16_MAX;
	volatile int16_t x4 = INT16_MAX;
	volatile int32_t t0 = 51296;

    t0 = ((x1!=x2)^(x3+x4));

    if (t0 != -2) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = 370753361525869LLU;
	volatile int8_t x6 = 14;
	static volatile int32_t x7 = INT32_MAX;
	int64_t x8 = INT64_MIN;
	volatile int64_t t1 = 442LL;

    t1 = ((x5!=x6)^(x7+x8));

    if (t1 != -9223372034707292162LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint16_t x9 = 1602U;
	static uint32_t x10 = 20394642U;
	int8_t x11 = INT8_MIN;
	uint16_t x12 = 6U;
	int32_t t2 = -1886551;

    t2 = ((x9!=x10)^(x11+x12));

    if (t2 != -121) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = -1LL;
	uint16_t x14 = 1U;
	uint8_t x15 = 71U;
	int32_t x16 = -1;
	static volatile int32_t t3 = -432;

    t3 = ((x13!=x14)^(x15+x16));

    if (t3 != 71) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x18 = 100;
	static int32_t x19 = -707254;
	uint32_t t4 = 194424U;

    t4 = ((x17!=x18)^(x19+x20));

    if (t4 != 4294260048U) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x24 = INT64_MIN;
	int64_t t5 = INT64_MIN;

    t5 = ((x21!=x22)^(x23+x24));

    if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint8_t x25 = 111U;
	volatile int64_t x26 = INT64_MAX;
	uint64_t x27 = 6172LLU;
	volatile uint64_t x28 = 985400130LLU;
	volatile uint64_t t6 = 1578234LLU;

    t6 = ((x25!=x26)^(x27+x28));

    if (t6 != 985406303LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint32_t x29 = 1136U;
	int8_t x30 = INT8_MIN;
	volatile uint32_t x31 = 128746940U;
	int8_t x32 = INT8_MIN;
	volatile uint32_t t7 = 2137022U;

    t7 = ((x29!=x30)^(x31+x32));

    if (t7 != 128746813U) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = -1;
	uint16_t x35 = 6118U;
	int8_t x36 = -1;
	int32_t t8 = -856534;

    t8 = ((x33!=x34)^(x35+x36));

    if (t8 != 6116) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = 97524U;
	volatile uint8_t x39 = UINT8_MAX;
	int8_t x40 = INT8_MIN;
	static volatile int32_t t9 = 915273;

    t9 = ((x37!=x38)^(x39+x40));

    if (t9 != 126) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int64_t x42 = INT64_MIN;
	uint8_t x43 = 54U;
	static int16_t x44 = INT16_MAX;
	volatile int32_t t10 = 57223605;

    t10 = ((x41!=x42)^(x43+x44));

    if (t10 != 32820) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint64_t x45 = UINT64_MAX;
	int64_t x46 = 344542575033023LL;
	int32_t t11 = 2740356;

    t11 = ((x45!=x46)^(x47+x48));

    if (t11 != 252054654) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x50 = INT64_MAX;
	int16_t x51 = 1;
	static int64_t x52 = 813023753502190LL;
	volatile int64_t t12 = -16303810354490LL;

    t12 = ((x49!=x50)^(x51+x52));

    if (t12 != 813023753502190LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile uint32_t x53 = 428U;
	uint32_t x54 = 1077609777U;
	uint16_t x56 = 18U;
	int32_t t13 = 85228626;

    t13 = ((x53!=x54)^(x55+x56));

    if (t13 != 20) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x61 = 308U;
	int8_t x62 = 37;
	int8_t x63 = 16;
	int8_t x64 = -4;
	static volatile int32_t t14 = -1;

    t14 = ((x61!=x62)^(x63+x64));

    if (t14 != 13) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x65 = 2763U;
	volatile int32_t x66 = -1;
	int32_t x68 = 5877875;
	uint32_t t15 = 12578U;

    t15 = ((x65!=x66)^(x67+x68));

    if (t15 != 5900980U) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint8_t x69 = UINT8_MAX;
	static int64_t x70 = -1LL;
	volatile int8_t x71 = INT8_MAX;
	int64_t x72 = -1LL;
	volatile int64_t t16 = -1139063690924LL;

    t16 = ((x69!=x70)^(x71+x72));

    if (t16 != 127LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int32_t x77 = INT32_MIN;
	int64_t x78 = -17559532175232LL;
	int64_t x79 = 20802734934LL;
	static uint32_t x80 = UINT32_MAX;
	volatile int64_t t17 = -1673975LL;

    t17 = ((x77!=x78)^(x79+x80));

    if (t17 != 25097702228LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x86 = INT16_MIN;
	int32_t x87 = INT32_MAX;
	uint32_t x88 = UINT32_MAX;
	uint32_t t18 = 132183U;

    t18 = ((x85!=x86)^(x87+x88));

    if (t18 != 2147483647U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x93 = 8051U;
	int16_t x94 = -61;
	static uint32_t x95 = 6864374U;
	uint64_t x96 = 0LLU;
	uint64_t t19 = 149183LLU;

    t19 = ((x93!=x94)^(x95+x96));

    if (t19 != 6864375LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int16_t x101 = -1;
	int32_t x102 = -338641;
	int64_t x103 = -1LL;
	int32_t x104 = -3237716;
	int64_t t20 = 56309LL;

    t20 = ((x101!=x102)^(x103+x104));

    if (t20 != -3237718LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x106 = 18;
	static int8_t x108 = 3;
	int32_t t21 = 12708336;

    t21 = ((x105!=x106)^(x107+x108));

    if (t21 != 65539) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x109 = INT16_MIN;
	int32_t x111 = 1045622276;
	int32_t x112 = INT32_MIN;
	volatile int32_t t22 = 86157;

    t22 = ((x109!=x110)^(x111+x112));

    if (t22 != -1101861371) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x113 = -1LL;
	int64_t x115 = INT64_MIN;
	uint8_t x116 = 0U;
	volatile int64_t t23 = 95683654545983063LL;

    t23 = ((x113!=x114)^(x115+x116));

    if (t23 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x117 = INT16_MAX;
	static int32_t x118 = -1;
	int16_t x119 = -1;
	static uint8_t x120 = 7U;
	int32_t t24 = -801;

    t24 = ((x117!=x118)^(x119+x120));

    if (t24 != 7) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x121 = -185721507LL;
	int64_t x122 = INT64_MIN;
	uint8_t x123 = 7U;
	uint32_t x124 = UINT32_MAX;
	uint32_t t25 = 39619U;

    t25 = ((x121!=x122)^(x123+x124));

    if (t25 != 7U) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x126 = 1U;
	int64_t x127 = INT64_MIN;
	static volatile uint8_t x128 = UINT8_MAX;
	int64_t t26 = -3906215806353LL;

    t26 = ((x125!=x126)^(x127+x128));

    if (t26 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int16_t x129 = INT16_MAX;
	int64_t x130 = INT64_MIN;
	volatile int64_t t27 = -44LL;

    t27 = ((x129!=x130)^(x131+x132));

    if (t27 != -7476501538LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x133 = 30141U;
	int8_t x135 = -1;
	int16_t x136 = 35;
	int32_t t28 = 25376;

    t28 = ((x133!=x134)^(x135+x136));

    if (t28 != 35) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x141 = 7022061838941LL;
	static int8_t x142 = -1;
	int16_t x143 = 0;
	int32_t x144 = -1;

    t29 = ((x141!=x142)^(x143+x144));

    if (t29 != -2) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x145 = 59LLU;
	static int8_t x146 = INT8_MAX;
	uint32_t x147 = 14U;

    t30 = ((x145!=x146)^(x147+x148));

    if (t30 != 67U) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x149 = UINT16_MAX;
	int16_t x150 = INT16_MAX;
	int64_t x151 = 29991610LL;
	uint8_t x152 = UINT8_MAX;

    t31 = ((x149!=x150)^(x151+x152));

    if (t31 != 29991864LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x154 = -654497098LL;
	volatile int32_t x155 = 213738;
	volatile int32_t t32 = 780935656;

    t32 = ((x153!=x154)^(x155+x156));

    if (t32 != 246504) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x157 = 214611LL;
	uint8_t x160 = UINT8_MAX;
	int32_t t33 = 1863731;

    t33 = ((x157!=x158)^(x159+x160));

    if (t33 != -220362527) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x161 = UINT8_MAX;
	int32_t x162 = -1;
	int32_t x163 = 2998264;
	int32_t x164 = -1;
	volatile int32_t t34 = -12;

    t34 = ((x161!=x162)^(x163+x164));

    if (t34 != 2998262) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x169 = INT16_MIN;
	static volatile uint32_t x170 = 7U;
	volatile uint64_t x171 = 21560546388555926LLU;
	uint64_t t35 = 13LLU;

    t35 = ((x169!=x170)^(x171+x172));

    if (t35 != 21560546388621460LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x174 = INT8_MIN;
	volatile int64_t x175 = -1LL;
	volatile int64_t x176 = INT64_MAX;
	volatile int64_t t36 = INT64_MAX;

    t36 = ((x173!=x174)^(x175+x176));

    if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x181 = INT32_MIN;
	volatile int8_t x182 = INT8_MIN;
	int64_t x183 = INT64_MAX;

    t37 = ((x181!=x182)^(x183+x184));

    if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x185 = 7LL;
	static uint16_t x187 = 21U;
	uint32_t x188 = 0U;
	uint32_t t38 = 25230U;

    t38 = ((x185!=x186)^(x187+x188));

    if (t38 != 20U) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x189 = -1LL;
	volatile int16_t x190 = -1;
	static uint8_t x191 = 29U;
	int64_t x192 = -1034235LL;
	volatile int64_t t39 = 34433896711481767LL;

    t39 = ((x189!=x190)^(x191+x192));

    if (t39 != -1034206LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint32_t x194 = UINT32_MAX;
	int8_t x196 = -1;
	volatile int32_t t40 = -3;

    t40 = ((x193!=x194)^(x195+x196));

    if (t40 != -32770) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x197 = -3;
	int64_t x198 = INT64_MIN;
	volatile uint32_t x199 = UINT32_MAX;
	uint64_t x200 = 8026LLU;
	volatile uint64_t t41 = 802331076521LLU;

    t41 = ((x197!=x198)^(x199+x200));

    if (t41 != 4294975320LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x201 = -3;
	uint16_t x202 = 0U;
	int8_t x203 = -1;
	int8_t x204 = -1;

    t42 = ((x201!=x202)^(x203+x204));

    if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x213 = INT8_MAX;
	static uint8_t x214 = UINT8_MAX;
	int8_t x215 = 1;
	static int16_t x216 = -1;
	volatile int32_t t43 = 606;

    t43 = ((x213!=x214)^(x215+x216));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint64_t x221 = 14229308578807LLU;
	int8_t x223 = INT8_MIN;
	static int32_t x224 = 1022;
	int32_t t44 = -867;

    t44 = ((x221!=x222)^(x223+x224));

    if (t44 != 895) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x225 = -1LL;
	uint32_t x226 = 2692896U;
	uint16_t x227 = 5U;
	static int32_t x228 = 0;
	int32_t t45 = -916522216;

    t45 = ((x225!=x226)^(x227+x228));

    if (t45 != 4) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x234 = -1;
	uint16_t x235 = 1882U;
	static int64_t t46 = -57381LL;

    t46 = ((x233!=x234)^(x235+x236));

    if (t46 != 1880LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x238 = UINT32_MAX;
	int8_t x240 = -1;

    t47 = ((x237!=x238)^(x239+x240));

    if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x241 = INT16_MAX;
	volatile int32_t x242 = -1;
	uint8_t x243 = UINT8_MAX;
	int32_t x244 = INT32_MIN;
	int32_t t48 = 3238;

    t48 = ((x241!=x242)^(x243+x244));

    if (t48 != -2147483394) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x245 = 850268;
	volatile uint64_t x246 = 884891690077LLU;
	uint32_t x247 = 2049121312U;
	volatile uint8_t x248 = 1U;
	uint32_t t49 = 160003417U;

    t49 = ((x245!=x246)^(x247+x248));

    if (t49 != 2049121312U) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x249 = -1;
	static int32_t x250 = INT32_MIN;
	volatile int64_t t50 = 105121505LL;

    t50 = ((x249!=x250)^(x251+x252));

    if (t50 != 4294967305LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x253 = INT8_MIN;
	int16_t x254 = -1147;
	volatile int8_t x255 = -1;
	volatile int32_t t51 = -35806;

    t51 = ((x253!=x254)^(x255+x256));

    if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x257 = -1;
	static uint32_t x258 = 44U;
	volatile uint32_t x259 = UINT32_MAX;

    t52 = ((x257!=x258)^(x259+x260));

    if (t52 != 4204U) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x261 = INT32_MAX;
	static uint32_t x262 = UINT32_MAX;
	int64_t x263 = -1051148LL;
	volatile int64_t x264 = 18135LL;

    t53 = ((x261!=x262)^(x263+x264));

    if (t53 != -1033014LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x266 = -1;
	static uint64_t x267 = UINT64_MAX;
	volatile uint64_t t54 = UINT64_MAX;

    t54 = ((x265!=x266)^(x267+x268));

    if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x269 = -1;
	int64_t x270 = INT64_MIN;
	static uint32_t x271 = 208969901U;
	volatile uint32_t t55 = 2077142U;

    t55 = ((x269!=x270)^(x271+x272));

    if (t55 != 208969901U) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x277 = UINT16_MAX;
	static volatile uint32_t x278 = UINT32_MAX;
	int64_t x279 = INT64_MAX;
	static int16_t x280 = INT16_MIN;
	int64_t t56 = -7891374457LL;

    t56 = ((x277!=x278)^(x279+x280));

    if (t56 != 9223372036854743038LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint8_t x281 = 5U;
	volatile int8_t x283 = 1;
	static volatile int8_t x284 = INT8_MAX;
	int32_t t57 = -34645561;

    t57 = ((x281!=x282)^(x283+x284));

    if (t57 != 129) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x285 = INT64_MAX;
	uint8_t x286 = UINT8_MAX;
	volatile int8_t x287 = INT8_MIN;
	volatile uint64_t x288 = UINT64_MAX;
	uint64_t t58 = 1153691LLU;

    t58 = ((x285!=x286)^(x287+x288));

    if (t58 != 18446744073709551486LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint32_t x289 = UINT32_MAX;
	static int32_t x290 = -2;
	uint8_t x291 = UINT8_MAX;
	int64_t x292 = INT64_MIN;

    t59 = ((x289!=x290)^(x291+x292));

    if (t59 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x297 = -1273501509134042708LL;
	uint16_t x299 = 2839U;
	int64_t x300 = 220178LL;

    t60 = ((x297!=x298)^(x299+x300));

    if (t60 != 223016LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x301 = INT32_MIN;
	uint16_t x302 = 413U;
	int8_t x303 = INT8_MIN;
	int32_t t61 = 86943581;

    t61 = ((x301!=x302)^(x303+x304));

    if (t61 != 126) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile uint16_t x307 = 24194U;
	volatile uint64_t x308 = 110710185730070965LLU;

    t62 = ((x305!=x306)^(x307+x308));

    if (t62 != 110710185730095158LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x310 = INT16_MIN;
	int64_t x312 = INT64_MIN;
	static uint64_t t63 = 3520270301LLU;

    t63 = ((x309!=x310)^(x311+x312));

    if (t63 != 9223372036854979919LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x313 = 1702;
	volatile uint64_t x314 = 248233LLU;
	static volatile int32_t x315 = INT32_MIN;
	uint32_t x316 = UINT32_MAX;

    t64 = ((x313!=x314)^(x315+x316));

    if (t64 != 2147483646U) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x320 = -1;
	volatile int32_t t65 = -15333717;

    t65 = ((x317!=x318)^(x319+x320));

    if (t65 != 65534) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x322 = -25LL;
	static int64_t x323 = INT64_MIN;
	int32_t x324 = 37;
	static int64_t t66 = 46854088140LL;

    t66 = ((x321!=x322)^(x323+x324));

    if (t66 != -9223372036854775772LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x325 = -21899LL;
	static volatile uint8_t x326 = UINT8_MAX;
	int16_t x327 = INT16_MAX;
	volatile int64_t x328 = -1LL;
	int64_t t67 = -457734968886LL;

    t67 = ((x325!=x326)^(x327+x328));

    if (t67 != 32767LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x333 = INT32_MIN;
	static uint8_t x334 = 0U;
	uint64_t x335 = 14709963187LLU;
	uint8_t x336 = 107U;

    t68 = ((x333!=x334)^(x335+x336));

    if (t68 != 14709963295LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x338 = INT64_MIN;
	int32_t x339 = -1;
	static uint16_t x340 = 58U;

    t69 = ((x337!=x338)^(x339+x340));

    if (t69 != 56) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint8_t x341 = 33U;
	int8_t x342 = INT8_MIN;
	uint32_t x343 = 127891U;
	uint16_t x344 = 6U;
	volatile uint32_t t70 = 292U;

    t70 = ((x341!=x342)^(x343+x344));

    if (t70 != 127896U) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x345 = INT16_MIN;
	int64_t x346 = INT64_MAX;
	int32_t x347 = INT32_MIN;
	uint16_t x348 = 1503U;
	static int32_t t71 = -1393;

    t71 = ((x345!=x346)^(x347+x348));

    if (t71 != -2147482146) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint32_t x349 = 218U;
	volatile int32_t x350 = 218574953;
	uint16_t x352 = UINT16_MAX;
	static volatile uint64_t t72 = 21042803215LLU;

    t72 = ((x349!=x350)^(x351+x352));

    if (t72 != 65535LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint8_t x354 = 14U;
	int32_t x356 = INT32_MIN;
	static volatile uint64_t t73 = 1830LLU;

    t73 = ((x353!=x354)^(x355+x356));

    if (t73 != 18446744071562152349LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x361 = INT8_MIN;
	static int8_t x362 = -1;
	int16_t x364 = INT16_MAX;
	int32_t t74 = -5;

    t74 = ((x361!=x362)^(x363+x364));

    if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x373 = 7092U;
	static int8_t x375 = INT8_MIN;
	int32_t x376 = 9123;
	int32_t t75 = -226699537;

    t75 = ((x373!=x374)^(x375+x376));

    if (t75 != 8994) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint16_t x381 = 2U;
	uint64_t x382 = 195334874LLU;
	static uint16_t x383 = UINT16_MAX;
	int8_t x384 = INT8_MIN;
	volatile int32_t t76 = 195090;

    t76 = ((x381!=x382)^(x383+x384));

    if (t76 != 65406) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x385 = -2;
	int64_t x386 = 884632515154958942LL;
	int64_t x387 = -3892886311LL;
	uint8_t x388 = 5U;

    t77 = ((x385!=x386)^(x387+x388));

    if (t77 != -3892886305LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x389 = 68U;
	volatile uint16_t x390 = UINT16_MAX;
	static uint8_t x391 = 1U;
	int64_t x392 = -1LL;
	volatile int64_t t78 = 91105305939426790LL;

    t78 = ((x389!=x390)^(x391+x392));

    if (t78 != 1LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x397 = INT64_MIN;
	uint64_t x398 = UINT64_MAX;
	volatile uint64_t x400 = 998804320170LLU;
	volatile uint64_t t79 = 55432287610LLU;

    t79 = ((x397!=x398)^(x399+x400));

    if (t79 != 998804319427LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x401 = -1LL;
	int16_t x402 = INT16_MIN;
	int64_t x403 = -1LL;
	int64_t x404 = -32082552978184600LL;

    t80 = ((x401!=x402)^(x403+x404));

    if (t80 != -32082552978184602LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x409 = -1;
	int32_t x410 = 351;
	int16_t x411 = INT16_MIN;
	uint32_t x412 = 1475U;

    t81 = ((x409!=x410)^(x411+x412));

    if (t81 != 4294936002U) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x413 = -442380164896926723LL;
	volatile int16_t x414 = -7;
	static volatile int8_t x415 = 2;
	int64_t x416 = INT64_MIN;

    t82 = ((x413!=x414)^(x415+x416));

    if (t82 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x417 = -789127208LL;
	int16_t x418 = 21;
	int8_t x419 = 4;
	volatile int32_t t83 = -1;

    t83 = ((x417!=x418)^(x419+x420));

    if (t83 != -32763) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x425 = 31;
	volatile int16_t x426 = -1;
	volatile int32_t x427 = INT32_MIN;
	int32_t t84 = -13760801;

    t84 = ((x425!=x426)^(x427+x428));

    if (t84 != -2147483639) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x429 = -1;
	int64_t x430 = -1LL;
	volatile int16_t x431 = -1;
	static uint64_t x432 = 10LLU;
	volatile uint64_t t85 = 660985557LLU;

    t85 = ((x429!=x430)^(x431+x432));

    if (t85 != 9LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint32_t x437 = 21U;
	int8_t x438 = INT8_MIN;
	volatile uint64_t x439 = 828171906659519LLU;
	volatile uint64_t t86 = 2867052502021182LLU;

    t86 = ((x437!=x438)^(x439+x440));

    if (t86 != 828171906659515LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x441 = INT32_MIN;
	volatile int64_t x442 = INT64_MIN;
	int8_t x443 = INT8_MAX;
	static int8_t x444 = 1;

    t87 = ((x441!=x442)^(x443+x444));

    if (t87 != 129) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x445 = 1U;
	int32_t x446 = -1;
	int32_t x447 = -7025412;
	uint8_t x448 = 10U;
	int32_t t88 = 1;

    t88 = ((x445!=x446)^(x447+x448));

    if (t88 != -7025401) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x449 = UINT8_MAX;
	int16_t x450 = -1;
	uint8_t x451 = UINT8_MAX;
	volatile int32_t t89 = -813;

    t89 = ((x449!=x450)^(x451+x452));

    if (t89 != 126) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x453 = 8;
	int8_t x454 = -1;
	volatile int32_t x455 = -126142;
	static volatile uint8_t x456 = UINT8_MAX;
	volatile int32_t t90 = 7;

    t90 = ((x453!=x454)^(x455+x456));

    if (t90 != -125888) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x465 = UINT32_MAX;
	volatile int16_t x466 = INT16_MAX;
	static uint64_t x467 = UINT64_MAX;
	volatile int64_t x468 = INT64_MIN;
	volatile uint64_t t91 = 54473341LLU;

    t91 = ((x465!=x466)^(x467+x468));

    if (t91 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x469 = INT16_MIN;
	int32_t x470 = INT32_MIN;
	static int64_t x472 = INT64_MIN;
	static volatile int64_t t92 = INT64_MIN;

    t92 = ((x469!=x470)^(x471+x472));

    if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint32_t x478 = UINT32_MAX;
	int64_t x480 = INT64_MIN;
	volatile int64_t t93 = 233845669042LL;

    t93 = ((x477!=x478)^(x479+x480));

    if (t93 != -2LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x485 = 24894U;
	static volatile int64_t x486 = INT64_MIN;
	int64_t x487 = INT64_MIN;
	uint8_t x488 = 122U;
	int64_t t94 = 9840066474558LL;

    t94 = ((x485!=x486)^(x487+x488));

    if (t94 != -9223372036854775685LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x489 = -1;
	volatile int32_t x490 = INT32_MAX;
	static volatile int32_t x491 = -1;
	int8_t x492 = INT8_MIN;
	int32_t t95 = 241;

    t95 = ((x489!=x490)^(x491+x492));

    if (t95 != -130) { NG(); } else { ; }
	
}

void f96(void) {
    

    t96 = ((x493!=x494)^(x495+x496));

    if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x498 = 883;
	uint16_t x500 = UINT16_MAX;
	int32_t t97 = 3855;

    t97 = ((x497!=x498)^(x499+x500));

    if (t97 != 65646) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint32_t x501 = 31738U;
	int16_t x502 = INT16_MAX;
	int8_t x503 = INT8_MIN;
	volatile int16_t x504 = -7;

    t98 = ((x501!=x502)^(x503+x504));

    if (t98 != -136) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x507 = INT32_MIN;
	int64_t x508 = 8728924782789029LL;
	volatile int64_t t99 = 16950920LL;

    t99 = ((x505!=x506)^(x507+x508));

    if (t99 != 8728922635305380LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x509 = INT32_MIN;
	uint8_t x510 = 1U;
	uint8_t x511 = UINT8_MAX;
	uint64_t x512 = UINT64_MAX;

    t100 = ((x509!=x510)^(x511+x512));

    if (t100 != 255LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x513 = INT32_MAX;
	volatile int8_t x514 = -1;
	int8_t x515 = INT8_MIN;
	uint16_t x516 = UINT16_MAX;
	volatile int32_t t101 = -5;

    t101 = ((x513!=x514)^(x515+x516));

    if (t101 != 65406) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint64_t x517 = 53447145LLU;
	static uint16_t x518 = 282U;
	static int32_t x519 = INT32_MIN;

    t102 = ((x517!=x518)^(x519+x520));

    if (t102 != -2147469714) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x523 = -1;
	int16_t x524 = -1;
	volatile int32_t t103 = 39495;

    t103 = ((x521!=x522)^(x523+x524));

    if (t103 != -1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x526 = -1;
	static int16_t x527 = INT16_MIN;
	uint64_t x528 = 9LLU;
	uint64_t t104 = 426573216LLU;

    t104 = ((x525!=x526)^(x527+x528));

    if (t104 != 18446744073709518856LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x529 = -1;
	static uint8_t x530 = UINT8_MAX;
	uint8_t x531 = UINT8_MAX;
	int64_t x532 = 80208032566421210LL;
	static volatile int64_t t105 = -1474764LL;

    t105 = ((x529!=x530)^(x531+x532));

    if (t105 != 80208032566421464LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x533 = 1U;
	uint64_t x534 = UINT64_MAX;
	static uint16_t x536 = UINT16_MAX;
	volatile int32_t t106 = 7287;

    t106 = ((x533!=x534)^(x535+x536));

    if (t106 != 65535) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x537 = INT32_MIN;
	static volatile uint16_t x538 = UINT16_MAX;
	int8_t x540 = -1;
	volatile int32_t t107 = -3;

    t107 = ((x537!=x538)^(x539+x540));

    if (t107 != -130) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint8_t x541 = 85U;
	int32_t x542 = -1;
	static volatile int8_t x543 = INT8_MIN;
	int16_t x544 = -1;

    t108 = ((x541!=x542)^(x543+x544));

    if (t108 != -130) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x545 = INT64_MAX;
	int32_t x548 = -1;
	volatile uint32_t t109 = 11775305U;

    t109 = ((x545!=x546)^(x547+x548));

    if (t109 != 23514U) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x549 = INT8_MIN;
	int16_t x551 = INT16_MIN;
	int8_t x552 = INT8_MAX;
	volatile int32_t t110 = -97596788;

    t110 = ((x549!=x550)^(x551+x552));

    if (t110 != -32642) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x553 = -1;
	volatile uint32_t x554 = UINT32_MAX;
	int32_t x555 = INT32_MAX;
	static int64_t x556 = 0LL;
	volatile int64_t t111 = -398844862LL;

    t111 = ((x553!=x554)^(x555+x556));

    if (t111 != 2147483647LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x557 = 101970684;
	int8_t x558 = 0;
	volatile int64_t x559 = 4008896736299265LL;
	int16_t x560 = 7;
	int64_t t112 = -62218623LL;

    t112 = ((x557!=x558)^(x559+x560));

    if (t112 != 4008896736299273LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x561 = INT64_MAX;
	static uint64_t x562 = 67581LLU;
	volatile uint32_t x563 = 3325458U;
	volatile uint64_t x564 = UINT64_MAX;
	static uint64_t t113 = 285174LLU;

    t113 = ((x561!=x562)^(x563+x564));

    if (t113 != 3325456LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x565 = UINT32_MAX;
	uint8_t x566 = UINT8_MAX;
	uint64_t x567 = 3841245004930167LLU;
	static int8_t x568 = -30;
	uint64_t t114 = 289834233046LLU;

    t114 = ((x565!=x566)^(x567+x568));

    if (t114 != 3841245004930136LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x569 = INT32_MIN;
	static int16_t x571 = INT16_MIN;
	static volatile int32_t t115 = -978503840;

    t115 = ((x569!=x570)^(x571+x572));

    if (t115 != -28661) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x574 = INT64_MIN;
	volatile int64_t t116 = -9845LL;

    t116 = ((x573!=x574)^(x575+x576));

    if (t116 != 24LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x577 = -4;
	static int64_t x579 = INT64_MIN;
	int8_t x580 = 7;
	static volatile int64_t t117 = 256602098109833212LL;

    t117 = ((x577!=x578)^(x579+x580));

    if (t117 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x581 = INT16_MIN;
	uint8_t x582 = 1U;
	uint16_t x583 = 13648U;
	int8_t x584 = 0;

    t118 = ((x581!=x582)^(x583+x584));

    if (t118 != 13649) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x585 = 1843U;
	uint8_t x586 = UINT8_MAX;
	static volatile uint8_t x587 = UINT8_MAX;
	uint32_t t119 = 144992U;

    t119 = ((x585!=x586)^(x587+x588));

    if (t119 != 56026976U) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x589 = -256353647986779874LL;
	static uint8_t x590 = 0U;
	volatile uint32_t x592 = 715U;
	volatile uint32_t t120 = 1900281694U;

    t120 = ((x589!=x590)^(x591+x592));

    if (t120 != 715U) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x593 = INT8_MAX;
	uint16_t x594 = UINT16_MAX;
	int64_t x595 = -1LL;
	int64_t t121 = -231598484037193061LL;

    t121 = ((x593!=x594)^(x595+x596));

    if (t121 != -3LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x597 = 130582;
	volatile int8_t x598 = INT8_MAX;
	int32_t x599 = INT32_MAX;
	volatile uint64_t x600 = UINT64_MAX;
	static volatile uint64_t t122 = 148175246731770LLU;

    t122 = ((x597!=x598)^(x599+x600));

    if (t122 != 2147483647LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x601 = -1;
	volatile int64_t x602 = INT64_MIN;
	uint64_t x604 = UINT64_MAX;
	volatile uint64_t t123 = 52LLU;

    t123 = ((x601!=x602)^(x603+x604));

    if (t123 != 252572LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x606 = INT32_MIN;
	uint8_t x607 = UINT8_MAX;
	volatile int16_t x608 = -1;

    t124 = ((x605!=x606)^(x607+x608));

    if (t124 != 255) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x609 = INT8_MAX;
	int8_t x610 = INT8_MIN;
	int64_t x611 = -1LL;
	int64_t t125 = 2772466902607224LL;

    t125 = ((x609!=x610)^(x611+x612));

    if (t125 != -101095502562318LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x614 = -1;
	int32_t x616 = INT32_MAX;
	int32_t t126 = -419727;

    t126 = ((x613!=x614)^(x615+x616));

    if (t126 != 2147483646) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile uint64_t x622 = 3150904070102895114LLU;
	int16_t x623 = -1;

    t127 = ((x621!=x622)^(x623+x624));

    if (t127 != -32770) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile uint64_t x625 = 11927LLU;
	uint32_t x626 = 62327U;
	int8_t x627 = -1;
	int16_t x628 = INT16_MIN;
	int32_t t128 = -10562;

    t128 = ((x625!=x626)^(x627+x628));

    if (t128 != -32770) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x629 = 332578U;
	volatile int16_t x630 = 41;
	int16_t x631 = -1;
	volatile int32_t t129 = -275153265;

    t129 = ((x629!=x630)^(x631+x632));

    if (t129 != -1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x633 = 0;
	int16_t x634 = 1;
	uint16_t x636 = 3921U;
	volatile uint32_t t130 = 10U;

    t130 = ((x633!=x634)^(x635+x636));

    if (t130 != 102640U) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x637 = INT64_MIN;
	volatile int8_t x638 = INT8_MAX;
	volatile uint64_t x639 = 14979040LLU;
	int32_t x640 = -3864;
	volatile uint64_t t131 = 26722113802731496LLU;

    t131 = ((x637!=x638)^(x639+x640));

    if (t131 != 14975177LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x641 = -4;
	static uint8_t x643 = 9U;
	uint64_t x644 = 52468144174406LLU;
	uint64_t t132 = 3072381067133LLU;

    t132 = ((x641!=x642)^(x643+x644));

    if (t132 != 52468144174414LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x645 = 0;
	uint16_t x647 = UINT16_MAX;
	volatile uint32_t x648 = UINT32_MAX;
	volatile uint32_t t133 = 61027928U;

    t133 = ((x645!=x646)^(x647+x648));

    if (t133 != 65535U) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x655 = 12763LLU;
	volatile int32_t x656 = -28787199;
	uint64_t t134 = 95726189916869LLU;

    t134 = ((x653!=x654)^(x655+x656));

    if (t134 != 18446744073680777181LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x661 = 13014;
	volatile uint64_t x662 = 7367462447189120917LLU;
	volatile uint64_t t135 = 1162665LLU;

    t135 = ((x661!=x662)^(x663+x664));

    if (t135 != 60LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x666 = INT8_MIN;
	static volatile uint64_t x667 = 7642LLU;
	int16_t x668 = INT16_MIN;
	uint64_t t136 = 30LLU;

    t136 = ((x665!=x666)^(x667+x668));

    if (t136 != 18446744073709526491LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x669 = INT64_MAX;
	uint32_t x670 = UINT32_MAX;
	static uint32_t x671 = UINT32_MAX;
	uint64_t x672 = 89328LLU;
	uint64_t t137 = 3651LLU;

    t137 = ((x669!=x670)^(x671+x672));

    if (t137 != 4295056622LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x673 = UINT64_MAX;
	int16_t x674 = INT16_MIN;
	static int64_t x675 = 990207LL;
	int64_t t138 = -6526928LL;

    t138 = ((x673!=x674)^(x675+x676));

    if (t138 != -2146493442LL) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x677 = 0;
	int8_t x679 = 8;
	int8_t x680 = INT8_MAX;

    t139 = ((x677!=x678)^(x679+x680));

    if (t139 != 134) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x681 = INT64_MIN;
	volatile uint64_t x682 = UINT64_MAX;

    t140 = ((x681!=x682)^(x683+x684));

    if (t140 != -127) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x686 = UINT64_MAX;
	static int16_t x687 = -17;
	volatile int32_t t141 = -348;

    t141 = ((x685!=x686)^(x687+x688));

    if (t141 != 110) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint8_t x691 = 53U;
	int16_t x692 = INT16_MIN;
	int32_t t142 = -888401094;

    t142 = ((x689!=x690)^(x691+x692));

    if (t142 != -32716) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x693 = -1;
	uint32_t x694 = 6U;
	int8_t x695 = INT8_MAX;
	int64_t x696 = 7079050LL;

    t143 = ((x693!=x694)^(x695+x696));

    if (t143 != 7079176LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x697 = INT8_MAX;
	static int16_t x698 = INT16_MIN;
	int32_t x699 = -617929429;
	uint16_t x700 = 1U;
	volatile int32_t t144 = -6;

    t144 = ((x697!=x698)^(x699+x700));

    if (t144 != -617929427) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int64_t x701 = -84155263LL;
	int16_t x702 = 1;
	int8_t x704 = INT8_MIN;
	int64_t t145 = -56252LL;

    t145 = ((x701!=x702)^(x703+x704));

    if (t145 != -627726530154702LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x705 = 0U;
	volatile int64_t x706 = 762248247546321LL;
	uint32_t x707 = 7467061U;
	uint16_t x708 = UINT16_MAX;
	volatile uint32_t t146 = 9U;

    t146 = ((x705!=x706)^(x707+x708));

    if (t146 != 7532597U) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x713 = INT32_MIN;
	int64_t x715 = INT64_MAX;
	int8_t x716 = -11;

    t147 = ((x713!=x714)^(x715+x716));

    if (t147 != 9223372036854775797LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x717 = -2;
	int32_t x718 = -1;
	volatile uint64_t x720 = 77716642009LLU;
	uint64_t t148 = 346728543562434LLU;

    t148 = ((x717!=x718)^(x719+x720));

    if (t148 != 77716642009LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile uint8_t x721 = 11U;
	volatile int8_t x723 = INT8_MIN;
	int8_t x724 = INT8_MIN;

    t149 = ((x721!=x722)^(x723+x724));

    if (t149 != -255) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x725 = 3U;
	int64_t x726 = -286548672272829820LL;
	int32_t x727 = 8706761;
	int32_t t150 = 1235648;

    t150 = ((x725!=x726)^(x727+x728));

    if (t150 != 8706761) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x730 = INT8_MAX;
	uint64_t x731 = 1658709LLU;
	int16_t x732 = INT16_MAX;
	volatile uint64_t t151 = 116148173016LLU;

    t151 = ((x729!=x730)^(x731+x732));

    if (t151 != 1691477LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x733 = 5U;
	int64_t x734 = INT64_MAX;
	int32_t x735 = INT32_MAX;
	int64_t x736 = INT64_MIN;
	static volatile int64_t t152 = 0LL;

    t152 = ((x733!=x734)^(x735+x736));

    if (t152 != -9223372034707292162LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x737 = -1;
	uint32_t x738 = UINT32_MAX;
	static uint32_t x739 = 243U;
	uint32_t t153 = 435U;

    t153 = ((x737!=x738)^(x739+x740));

    if (t153 != 106451321U) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x741 = INT16_MIN;
	int64_t x742 = INT64_MIN;
	int32_t x743 = INT32_MIN;
	static int64_t x744 = 5550449LL;
	static int64_t t154 = 8099284237676179LL;

    t154 = ((x741!=x742)^(x743+x744));

    if (t154 != -2141933200LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x745 = 13785892089LLU;
	volatile int16_t x746 = 27;
	int16_t x747 = 19;
	uint64_t x748 = 16979475945585LLU;

    t155 = ((x745!=x746)^(x747+x748));

    if (t155 != 16979475945605LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x749 = INT32_MIN;
	int32_t x750 = INT32_MIN;
	uint32_t x751 = UINT32_MAX;
	uint8_t x752 = UINT8_MAX;
	uint32_t t156 = 13310579U;

    t156 = ((x749!=x750)^(x751+x752));

    if (t156 != 254U) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x753 = -1LL;
	static volatile uint16_t x754 = UINT16_MAX;
	static int16_t x755 = 349;
	int16_t x756 = INT16_MIN;
	int32_t t157 = 116129;

    t157 = ((x753!=x754)^(x755+x756));

    if (t157 != -32420) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x757 = INT16_MAX;
	uint32_t x758 = UINT32_MAX;
	int16_t x759 = 0;
	int32_t x760 = -1;
	volatile int32_t t158 = -2;

    t158 = ((x757!=x758)^(x759+x760));

    if (t158 != -2) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint64_t x763 = 241373250718LLU;
	static uint64_t t159 = 413LLU;

    t159 = ((x761!=x762)^(x763+x764));

    if (t159 != 245668218012LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x765 = INT8_MAX;
	uint8_t x766 = UINT8_MAX;
	int16_t x767 = INT16_MIN;
	int8_t x768 = 0;
	int32_t t160 = 43842130;

    t160 = ((x765!=x766)^(x767+x768));

    if (t160 != -32767) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x770 = -93;
	int8_t x771 = 0;
	int64_t x772 = -1LL;

    t161 = ((x769!=x770)^(x771+x772));

    if (t161 != -2LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x773 = UINT8_MAX;
	static uint64_t x774 = UINT64_MAX;
	uint8_t x775 = 20U;
	int64_t x776 = 2580217086027882LL;
	static volatile int64_t t162 = -26LL;

    t162 = ((x773!=x774)^(x775+x776));

    if (t162 != 2580217086027903LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x777 = INT16_MIN;
	uint16_t x778 = 2U;
	static int8_t x780 = 5;
	volatile uint32_t t163 = 15601U;

    t163 = ((x777!=x778)^(x779+x780));

    if (t163 != 1927U) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x781 = 20U;
	int16_t x782 = -1;
	int8_t x784 = -4;
	int32_t t164 = -169059160;

    t164 = ((x781!=x782)^(x783+x784));

    if (t164 != 32762) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x786 = 13774U;
	int8_t x787 = INT8_MIN;

    t165 = ((x785!=x786)^(x787+x788));

    if (t165 != 18446744073709551486LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x789 = INT8_MIN;
	uint16_t x790 = 0U;
	volatile int32_t x791 = INT32_MIN;
	uint32_t x792 = 493874887U;
	volatile uint32_t t166 = 1066087U;

    t166 = ((x789!=x790)^(x791+x792));

    if (t166 != 2641358534U) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x793 = 1U;
	uint8_t x795 = 0U;
	int8_t x796 = -9;

    t167 = ((x793!=x794)^(x795+x796));

    if (t167 != -10) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x801 = 1;
	static uint16_t x802 = 14U;
	uint32_t x803 = 83273U;
	int8_t x804 = INT8_MAX;
	volatile uint32_t t168 = 282U;

    t168 = ((x801!=x802)^(x803+x804));

    if (t168 != 83401U) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x805 = INT8_MIN;
	int16_t x806 = 1874;
	volatile uint64_t x807 = 17820374913007450LLU;
	volatile int8_t x808 = 0;
	uint64_t t169 = 354756113305LLU;

    t169 = ((x805!=x806)^(x807+x808));

    if (t169 != 17820374913007451LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x810 = 95551154605LL;
	int32_t x811 = INT32_MAX;
	uint32_t t170 = 126770U;

    t170 = ((x809!=x810)^(x811+x812));

    if (t170 != 2147483747U) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x814 = 6;
	volatile int8_t x815 = INT8_MIN;
	uint8_t x816 = 16U;
	volatile int32_t t171 = -192540869;

    t171 = ((x813!=x814)^(x815+x816));

    if (t171 != -111) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x817 = INT32_MAX;
	uint16_t x818 = 62U;
	int16_t x819 = INT16_MAX;
	int32_t t172 = -14382413;

    t172 = ((x817!=x818)^(x819+x820));

    if (t172 != 32638) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x822 = 83545301;
	int32_t x823 = 499365;
	int32_t t173 = 907193;

    t173 = ((x821!=x822)^(x823+x824));

    if (t173 != 499502) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x825 = -4;
	int16_t x826 = 256;
	int32_t x827 = -171912;
	uint64_t x828 = UINT64_MAX;
	static uint64_t t174 = 1451924883237221324LLU;

    t174 = ((x825!=x826)^(x827+x828));

    if (t174 != 18446744073709379702LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x829 = INT16_MAX;
	int64_t x830 = INT64_MAX;
	int64_t x831 = -1LL;
	static int32_t x832 = -752771139;
	volatile int64_t t175 = -103568166076982744LL;

    t175 = ((x829!=x830)^(x831+x832));

    if (t175 != -752771139LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x833 = UINT32_MAX;
	int8_t x835 = INT8_MIN;
	int32_t t176 = 11;

    t176 = ((x833!=x834)^(x835+x836));

    if (t176 != -131) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x837 = UINT16_MAX;
	int8_t x838 = -1;
	int32_t x839 = INT32_MIN;
	int64_t x840 = -675434220LL;
	int64_t t177 = -942714LL;

    t177 = ((x837!=x838)^(x839+x840));

    if (t177 != -2822917867LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x841 = -1LL;
	int8_t x843 = INT8_MAX;
	volatile uint8_t x844 = 8U;
	int32_t t178 = 10498;

    t178 = ((x841!=x842)^(x843+x844));

    if (t178 != 134) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x849 = INT8_MAX;
	int8_t x850 = INT8_MIN;

    t179 = ((x849!=x850)^(x851+x852));

    if (t179 != 4294967099U) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x853 = INT8_MIN;
	int16_t x854 = INT16_MAX;
	static int64_t x855 = -103125432698968LL;
	static int8_t x856 = INT8_MIN;
	static volatile int64_t t180 = -4342010958566275237LL;

    t180 = ((x853!=x854)^(x855+x856));

    if (t180 != -103125432699095LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x861 = INT8_MIN;
	int16_t x862 = -92;
	int32_t t181 = 200;

    t181 = ((x861!=x862)^(x863+x864));

    if (t181 != -2) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x866 = 1LLU;
	int32_t x867 = -17;
	uint32_t x868 = 34865U;
	uint32_t t182 = 10003U;

    t182 = ((x865!=x866)^(x867+x868));

    if (t182 != 34849U) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x870 = 5U;
	uint8_t x872 = 22U;
	volatile int32_t t183 = -1780;

    t183 = ((x869!=x870)^(x871+x872));

    if (t183 != 20) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x873 = INT16_MAX;
	uint32_t x874 = 192732U;
	int32_t x875 = -10;
	volatile int16_t x876 = INT16_MIN;
	int32_t t184 = -3;

    t184 = ((x873!=x874)^(x875+x876));

    if (t184 != -32777) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x877 = 4U;
	volatile uint8_t x878 = 14U;
	int64_t x879 = INT64_MAX;
	volatile int16_t x880 = INT16_MIN;
	volatile int64_t t185 = -4008518986LL;

    t185 = ((x877!=x878)^(x879+x880));

    if (t185 != 9223372036854743038LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x882 = -1;
	int16_t x883 = 5;
	uint64_t x884 = 200225787888230240LLU;
	static volatile uint64_t t186 = 2923201330LLU;

    t186 = ((x881!=x882)^(x883+x884));

    if (t186 != 200225787888230244LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x885 = INT64_MIN;
	static int32_t x886 = INT32_MIN;
	int32_t x887 = -65142;
	static uint32_t x888 = 62U;
	uint32_t t187 = 125508U;

    t187 = ((x885!=x886)^(x887+x888));

    if (t187 != 4294902217U) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x889 = INT8_MIN;
	volatile int8_t x890 = 2;
	uint32_t x892 = UINT32_MAX;
	static volatile uint32_t t188 = UINT32_MAX;

    t188 = ((x889!=x890)^(x891+x892));

    if (t188 != UINT32_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x893 = INT64_MIN;
	int32_t x894 = -196;
	static volatile uint8_t x895 = 21U;
	static uint32_t x896 = 839359U;

    t189 = ((x893!=x894)^(x895+x896));

    if (t189 != 839381U) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint16_t x897 = UINT16_MAX;
	uint8_t x899 = UINT8_MAX;
	static volatile int64_t t190 = -89475094308LL;

    t190 = ((x897!=x898)^(x899+x900));

    if (t190 != 196LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x901 = INT32_MAX;
	static uint32_t x902 = 1910084913U;
	int32_t t191 = -141094103;

    t191 = ((x901!=x902)^(x903+x904));

    if (t191 != -126) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x905 = 1;
	int32_t x906 = 16214;
	static int32_t x907 = -1;
	uint32_t x908 = 22U;
	uint32_t t192 = 275989U;

    t192 = ((x905!=x906)^(x907+x908));

    if (t192 != 20U) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x909 = 155U;
	static int64_t x910 = -3819620314230LL;
	int8_t x912 = -1;
	volatile uint32_t t193 = 13U;

    t193 = ((x909!=x910)^(x911+x912));

    if (t193 != 48192683U) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x913 = INT16_MAX;
	uint64_t x914 = 198915LLU;
	int8_t x916 = 1;
	volatile int64_t t194 = INT64_MIN;

    t194 = ((x913!=x914)^(x915+x916));

    if (t194 != INT64_MIN) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x921 = INT16_MIN;
	uint64_t x924 = 63557208552883607LLU;
	uint64_t t195 = 3114536653LLU;

    t195 = ((x921!=x922)^(x923+x924));

    if (t195 != 63557208552883607LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x926 = 177;
	int64_t x927 = 173LL;
	static int64_t x928 = INT64_MIN;
	int64_t t196 = -8146643LL;

    t196 = ((x925!=x926)^(x927+x928));

    if (t196 != -9223372036854775636LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x929 = INT16_MIN;
	static int16_t x930 = INT16_MIN;
	uint32_t x931 = UINT32_MAX;
	volatile uint16_t x932 = 11U;

    t197 = ((x929!=x930)^(x931+x932));

    if (t197 != 10U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x933 = 3U;
	uint16_t x934 = 1545U;
	int32_t t198 = 147;

    t198 = ((x933!=x934)^(x935+x936));

    if (t198 != -2) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x937 = -4;
	uint64_t x938 = 13949463483216782LLU;
	int8_t x939 = INT8_MIN;
	int32_t t199 = -371072;

    t199 = ((x937!=x938)^(x939+x940));

    if (t199 != -255) { NG(); } else { ; }
	
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


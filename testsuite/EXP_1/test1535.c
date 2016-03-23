
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

int32_t x5 = INT32_MIN;
int16_t x6 = INT16_MIN;
int64_t x12 = INT64_MIN;
int8_t x13 = INT8_MIN;
uint16_t x28 = 2U;
volatile int8_t x29 = -1;
uint64_t x30 = UINT64_MAX;
int64_t x35 = INT64_MIN;
volatile int32_t t8 = -4705391;
uint64_t x40 = UINT64_MAX;
volatile int32_t t9 = -68373280;
int32_t t12 = -392933054;
volatile uint8_t x53 = 0U;
static int16_t x57 = -1;
int32_t t15 = -89;
int8_t x65 = INT8_MIN;
uint16_t x88 = 29645U;
int32_t t22 = 1788552;
static int16_t x94 = INT16_MIN;
volatile uint8_t x97 = UINT8_MAX;
static int8_t x102 = 34;
volatile int16_t x103 = -1;
uint8_t x104 = UINT8_MAX;
volatile int32_t t25 = 0;
static int8_t x110 = -1;
int32_t x111 = INT32_MIN;
volatile int32_t t28 = 346838;
volatile int32_t t30 = -698;
static int8_t x125 = -61;
static volatile int32_t x130 = INT32_MAX;
uint64_t x132 = 4410074421986436LLU;
static volatile int16_t x134 = INT16_MAX;
volatile int32_t t33 = -1;
volatile uint64_t x150 = 136513764634LLU;
int32_t x152 = -1;
static volatile int16_t x159 = -1;
static volatile int32_t x162 = -1;
int32_t t40 = 312;
int16_t x166 = INT16_MIN;
uint16_t x167 = 2290U;
int64_t x175 = -1LL;
static int8_t x177 = INT8_MIN;
uint64_t x182 = UINT64_MAX;
int8_t x190 = INT8_MIN;
static int32_t x191 = INT32_MAX;
static int64_t x192 = INT64_MIN;
int16_t x202 = INT16_MAX;
uint32_t x203 = 34U;
static int16_t x207 = -1;
int64_t x214 = -1LL;
int64_t x216 = INT64_MIN;
int32_t t53 = -32187527;
static uint64_t x219 = UINT64_MAX;
static uint16_t x220 = 13347U;
static int8_t x224 = INT8_MAX;
uint8_t x225 = 95U;
volatile int32_t t57 = 8737911;
volatile uint16_t x235 = UINT16_MAX;
int32_t x250 = INT32_MAX;
int64_t x252 = INT64_MIN;
int8_t x256 = INT8_MAX;
int32_t x260 = INT32_MIN;
volatile int16_t x272 = -1;
int16_t x275 = 6673;
int8_t x276 = INT8_MIN;
int16_t x288 = -3029;
volatile int32_t t71 = 28229150;
volatile int16_t x290 = INT16_MAX;
static volatile uint8_t x291 = UINT8_MAX;
uint32_t x295 = UINT32_MAX;
uint64_t x298 = 6654478187LLU;
int8_t x303 = INT8_MIN;
uint16_t x307 = UINT16_MAX;
volatile int32_t t76 = -79265;
static volatile int16_t x313 = INT16_MAX;
int32_t x315 = -1;
static volatile int32_t x319 = -1;
volatile int32_t t80 = -21690;
uint32_t x325 = 22U;
static int8_t x333 = -1;
int64_t x334 = INT64_MIN;
volatile int64_t x336 = INT64_MIN;
uint16_t x341 = 3U;
static int32_t x344 = -1;
int8_t x347 = INT8_MIN;
uint64_t x352 = UINT64_MAX;
int8_t x354 = INT8_MIN;
static int16_t x356 = -15139;
volatile int32_t t88 = -5669;
int32_t x358 = -252;
volatile int32_t t89 = -180104;
static volatile int8_t x361 = INT8_MAX;
int16_t x363 = -3804;
static int32_t x369 = INT32_MAX;
int64_t x371 = 36LL;
int32_t t92 = 802;
int32_t x377 = INT32_MIN;
int64_t x379 = INT64_MIN;
volatile int32_t t94 = 976230002;
static int32_t x383 = INT32_MAX;
static volatile uint32_t x386 = UINT32_MAX;
volatile int16_t x396 = -1;
static uint8_t x403 = 75U;
uint8_t x408 = UINT8_MAX;
int64_t x413 = -1LL;
int32_t x415 = -123604837;
static int32_t x418 = INT32_MIN;
int8_t x430 = 13;
static int32_t t107 = -276;
int16_t x435 = 1;
static int32_t t110 = 1;
uint16_t x447 = 536U;
volatile int32_t t112 = -513057;
static volatile int32_t t113 = -119309;
static int8_t x457 = -38;
int32_t x459 = 20;
static volatile int32_t t114 = -969;
int32_t x484 = INT32_MAX;
volatile uint64_t x488 = UINT64_MAX;
volatile int32_t t121 = 12;
int32_t t122 = 1;
int16_t x494 = -1;
uint32_t x497 = UINT32_MAX;
int32_t x505 = INT32_MIN;
int32_t t126 = 682380;
int8_t x511 = INT8_MIN;
int32_t t127 = -7255399;
static uint64_t x518 = UINT64_MAX;
int8_t x519 = INT8_MAX;
volatile int32_t t130 = -178741;
volatile int16_t x531 = INT16_MAX;
int16_t x533 = INT16_MIN;
static uint32_t x534 = 2025704U;
int32_t x539 = INT32_MAX;
int16_t x544 = -1;
static int16_t x545 = INT16_MIN;
static int64_t x550 = INT64_MIN;
int32_t t137 = -6237062;
uint8_t x554 = 11U;
uint64_t x557 = UINT64_MAX;
int8_t x560 = 52;
uint8_t x564 = 35U;
int64_t x571 = INT64_MAX;
int32_t t142 = 322214615;
static int64_t x577 = INT64_MIN;
int32_t x584 = INT32_MIN;
int16_t x586 = INT16_MIN;
int16_t x590 = INT16_MAX;
int8_t x591 = -1;
volatile int32_t t147 = -337;
int8_t x595 = -1;
static int64_t x596 = -651897904942LL;
static int64_t x601 = INT64_MIN;
static uint32_t x602 = UINT32_MAX;
int64_t x604 = INT64_MAX;
int32_t x605 = 673171577;
int64_t x608 = INT64_MIN;
static int32_t t152 = 283768239;
uint8_t x616 = UINT8_MAX;
int32_t t153 = 118334148;
int8_t x618 = -1;
uint16_t x626 = 4095U;
int8_t x628 = INT8_MIN;
int32_t x631 = INT32_MIN;
volatile int8_t x633 = -1;
volatile int8_t x639 = INT8_MAX;
int32_t t161 = 111779;
int16_t x656 = 2026;
int32_t t163 = 232860;
int32_t x657 = INT32_MIN;
uint8_t x661 = 0U;
int32_t x663 = 33;
int64_t x666 = 102LL;
uint32_t x670 = 4792472U;
static int32_t t167 = 1188653;
volatile int16_t x673 = INT16_MIN;
int8_t x682 = INT8_MIN;
volatile int32_t t171 = -4056878;
volatile int32_t t173 = -16126;
volatile uint32_t x699 = 30U;
uint8_t x700 = 110U;
volatile int32_t t175 = 13624;
volatile int32_t x708 = 58328;
volatile int32_t t176 = -3335997;
volatile uint16_t x710 = 1822U;
static int64_t x714 = INT64_MIN;
static volatile int16_t x733 = -1;
uint64_t x736 = 6LLU;
int32_t t183 = 10727780;
int64_t x756 = INT64_MIN;
int32_t t188 = 0;
uint16_t x757 = 13451U;
int32_t t189 = -325556468;
uint32_t x761 = 100855U;
int32_t t191 = 45228;
int64_t x772 = INT64_MIN;
int32_t t192 = -2212;
uint64_t x774 = 14405140635471099LLU;
int8_t x779 = INT8_MAX;
int8_t x791 = -14;
volatile int16_t x792 = INT16_MAX;
int32_t x795 = -1;
int64_t x797 = INT64_MIN;


void f0(void) {
    	int64_t x1 = -643933303421481066LL;
	volatile int8_t x2 = 1;
	uint32_t x3 = 353U;
	volatile int64_t x4 = INT64_MIN;
	int32_t t0 = -372794426;

    t0 = (((x1==x2)&x3)>x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x7 = -454;
	static volatile uint8_t x8 = 1U;
	int32_t t1 = -6175690;

    t1 = (((x5==x6)&x7)>x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 57U;
	int16_t x10 = INT16_MAX;
	uint8_t x11 = 12U;
	static int32_t t2 = -25276;

    t2 = (((x9==x10)&x11)>x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x14 = INT32_MIN;
	int8_t x15 = INT8_MAX;
	volatile int16_t x16 = 116;
	static int32_t t3 = -22169956;

    t3 = (((x13==x14)&x15)>x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MIN;
	int8_t x18 = INT8_MAX;
	int64_t x19 = INT64_MIN;
	int16_t x20 = INT16_MIN;
	static int32_t t4 = 8;

    t4 = (((x17==x18)&x19)>x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = INT64_MIN;
	int32_t x22 = INT32_MIN;
	static int32_t x23 = INT32_MIN;
	static volatile int8_t x24 = -1;
	int32_t t5 = -292717376;

    t5 = (((x21==x22)&x23)>x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = 2886951826LL;
	int8_t x26 = INT8_MIN;
	int16_t x27 = INT16_MIN;
	volatile int32_t t6 = 0;

    t6 = (((x25==x26)&x27)>x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x31 = 45U;
	volatile int16_t x32 = 27;
	int32_t t7 = 196;

    t7 = (((x29==x30)&x31)>x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x33 = INT64_MAX;
	volatile int16_t x34 = 0;
	int64_t x36 = -1LL;

    t8 = (((x33==x34)&x35)>x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint32_t x37 = UINT32_MAX;
	uint64_t x38 = 2301003301865865LLU;
	uint64_t x39 = UINT64_MAX;

    t9 = (((x37==x38)&x39)>x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x41 = 8298291472999LL;
	uint8_t x42 = 1U;
	static int32_t x43 = -1;
	int32_t x44 = -1;
	int32_t t10 = 125774591;

    t10 = (((x41==x42)&x43)>x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = UINT64_MAX;
	int16_t x46 = -551;
	int8_t x47 = -1;
	static volatile uint32_t x48 = UINT32_MAX;
	static volatile int32_t t11 = 1519;

    t11 = (((x45==x46)&x47)>x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = UINT32_MAX;
	static int32_t x50 = -1;
	static int64_t x51 = -1LL;
	int8_t x52 = -1;

    t12 = (((x49==x50)&x51)>x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x54 = INT8_MIN;
	volatile int64_t x55 = -1LL;
	static int8_t x56 = INT8_MIN;
	volatile int32_t t13 = -978;

    t13 = (((x53==x54)&x55)>x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x58 = INT32_MIN;
	volatile int32_t x59 = INT32_MIN;
	static int32_t x60 = INT32_MIN;
	static volatile int32_t t14 = -3295063;

    t14 = (((x57==x58)&x59)>x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x61 = UINT16_MAX;
	int32_t x62 = -106188;
	int16_t x63 = INT16_MAX;
	int8_t x64 = INT8_MAX;

    t15 = (((x61==x62)&x63)>x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x66 = INT64_MIN;
	volatile uint16_t x67 = 11U;
	static int64_t x68 = -1LL;
	int32_t t16 = 11522;

    t16 = (((x65==x66)&x67)>x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x69 = INT8_MIN;
	uint16_t x70 = 299U;
	static int16_t x71 = -6;
	int8_t x72 = INT8_MIN;
	int32_t t17 = -2251;

    t17 = (((x69==x70)&x71)>x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x73 = -82126;
	uint64_t x74 = 6407495830081LLU;
	uint32_t x75 = 112505123U;
	volatile uint16_t x76 = 287U;
	int32_t t18 = -111;

    t18 = (((x73==x74)&x75)>x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint32_t x77 = 11236468U;
	int64_t x78 = -1LL;
	int8_t x79 = INT8_MIN;
	int16_t x80 = INT16_MIN;
	static volatile int32_t t19 = 424;

    t19 = (((x77==x78)&x79)>x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = INT32_MIN;
	uint8_t x82 = 0U;
	int8_t x83 = INT8_MIN;
	volatile int8_t x84 = INT8_MIN;
	volatile int32_t t20 = 111;

    t20 = (((x81==x82)&x83)>x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = -7886939;
	static volatile int16_t x86 = INT16_MAX;
	int16_t x87 = -1;
	int32_t t21 = 1170;

    t21 = (((x85==x86)&x87)>x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint32_t x89 = UINT32_MAX;
	static int16_t x90 = -1;
	int64_t x91 = INT64_MIN;
	volatile int16_t x92 = INT16_MAX;

    t22 = (((x89==x90)&x91)>x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = INT64_MAX;
	int8_t x95 = -7;
	uint32_t x96 = 2U;
	static volatile int32_t t23 = -514;

    t23 = (((x93==x94)&x95)>x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x98 = 953720;
	int16_t x99 = INT16_MIN;
	int8_t x100 = -1;
	static int32_t t24 = -2105;

    t24 = (((x97==x98)&x99)>x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x101 = INT16_MAX;

    t25 = (((x101==x102)&x103)>x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x105 = INT16_MAX;
	int8_t x106 = INT8_MIN;
	static int8_t x107 = INT8_MAX;
	int64_t x108 = INT64_MAX;
	int32_t t26 = 583;

    t26 = (((x105==x106)&x107)>x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x109 = 4206321492561663099LL;
	int64_t x112 = -28161LL;
	int32_t t27 = 56;

    t27 = (((x109==x110)&x111)>x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x113 = UINT32_MAX;
	int16_t x114 = -1;
	static volatile int8_t x115 = INT8_MIN;
	int32_t x116 = 109;

    t28 = (((x113==x114)&x115)>x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int32_t x117 = -1;
	uint16_t x118 = 0U;
	int8_t x119 = 3;
	volatile int8_t x120 = -1;
	volatile int32_t t29 = -8729381;

    t29 = (((x117==x118)&x119)>x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x121 = INT32_MAX;
	int64_t x122 = -422736311358202882LL;
	int64_t x123 = INT64_MIN;
	int16_t x124 = INT16_MIN;

    t30 = (((x121==x122)&x123)>x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x126 = -1;
	static int64_t x127 = INT64_MIN;
	static uint32_t x128 = UINT32_MAX;
	volatile int32_t t31 = 11460249;

    t31 = (((x125==x126)&x127)>x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = -746872LL;
	int32_t x131 = INT32_MAX;
	static volatile int32_t t32 = 6750726;

    t32 = (((x129==x130)&x131)>x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = INT32_MAX;
	uint16_t x135 = 1U;
	uint64_t x136 = 35014078513LLU;

    t33 = (((x133==x134)&x135)>x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = INT16_MIN;
	volatile uint8_t x138 = UINT8_MAX;
	int8_t x139 = 4;
	volatile uint16_t x140 = 14U;
	int32_t t34 = 31626832;

    t34 = (((x137==x138)&x139)>x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint16_t x141 = 0U;
	uint8_t x142 = 6U;
	int32_t x143 = 132587852;
	int64_t x144 = INT64_MAX;
	static volatile int32_t t35 = -1141;

    t35 = (((x141==x142)&x143)>x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x145 = INT8_MIN;
	volatile uint8_t x146 = 12U;
	static int64_t x147 = INT64_MIN;
	int8_t x148 = INT8_MAX;
	int32_t t36 = 861794642;

    t36 = (((x145==x146)&x147)>x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint8_t x149 = 0U;
	int32_t x151 = INT32_MAX;
	int32_t t37 = 13;

    t37 = (((x149==x150)&x151)>x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int32_t x153 = INT32_MAX;
	int64_t x154 = 3193LL;
	volatile int8_t x155 = 3;
	uint8_t x156 = UINT8_MAX;
	int32_t t38 = 179;

    t38 = (((x153==x154)&x155)>x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x157 = INT8_MIN;
	static int64_t x158 = -1LL;
	int64_t x160 = INT64_MIN;
	volatile int32_t t39 = 32996856;

    t39 = (((x157==x158)&x159)>x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = -1;
	static int32_t x163 = 41870618;
	static int64_t x164 = INT64_MIN;

    t40 = (((x161==x162)&x163)>x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint32_t x165 = 23189997U;
	int64_t x168 = -63186166605133LL;
	int32_t t41 = -507;

    t41 = (((x165==x166)&x167)>x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint16_t x169 = 490U;
	volatile uint8_t x170 = UINT8_MAX;
	static int16_t x171 = -1;
	int8_t x172 = INT8_MAX;
	int32_t t42 = 129490170;

    t42 = (((x169==x170)&x171)>x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x173 = INT32_MIN;
	uint32_t x174 = 55U;
	static uint32_t x176 = UINT32_MAX;
	static volatile int32_t t43 = 51873;

    t43 = (((x173==x174)&x175)>x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x178 = INT8_MIN;
	static int32_t x179 = INT32_MAX;
	int16_t x180 = -1;
	volatile int32_t t44 = -8964;

    t44 = (((x177==x178)&x179)>x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = -75709196LL;
	int16_t x183 = INT16_MIN;
	volatile int32_t x184 = -1;
	volatile int32_t t45 = 29;

    t45 = (((x181==x182)&x183)>x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x185 = -1;
	volatile uint64_t x186 = 61169719204719LLU;
	int16_t x187 = INT16_MAX;
	int64_t x188 = INT64_MIN;
	static int32_t t46 = 0;

    t46 = (((x185==x186)&x187)>x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x189 = INT8_MIN;
	volatile int32_t t47 = 362199651;

    t47 = (((x189==x190)&x191)>x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint64_t x193 = UINT64_MAX;
	int64_t x194 = 4256040LL;
	int8_t x195 = -5;
	int8_t x196 = 18;
	volatile int32_t t48 = 1031044862;

    t48 = (((x193==x194)&x195)>x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = -1;
	uint64_t x198 = 202492715488075016LLU;
	int8_t x199 = INT8_MIN;
	static int64_t x200 = 387077978984LL;
	static int32_t t49 = 326463;

    t49 = (((x197==x198)&x199)>x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int64_t x201 = -27987230LL;
	int8_t x204 = INT8_MAX;
	int32_t t50 = 2;

    t50 = (((x201==x202)&x203)>x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = INT64_MAX;
	int64_t x206 = INT64_MIN;
	static uint64_t x208 = UINT64_MAX;
	static int32_t t51 = -49910938;

    t51 = (((x205==x206)&x207)>x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = INT16_MAX;
	static int64_t x210 = INT64_MAX;
	int16_t x211 = -1;
	static uint16_t x212 = 1139U;
	volatile int32_t t52 = -766707;

    t52 = (((x209==x210)&x211)>x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = INT32_MIN;
	int32_t x215 = -1;

    t53 = (((x213==x214)&x215)>x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint64_t x217 = 881235270LLU;
	static uint32_t x218 = 24442U;
	int32_t t54 = 88;

    t54 = (((x217==x218)&x219)>x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x221 = 1286342268LL;
	volatile uint64_t x222 = 667962290LLU;
	int8_t x223 = 15;
	int32_t t55 = -108;

    t55 = (((x221==x222)&x223)>x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x226 = 4U;
	static int32_t x227 = -1;
	static int8_t x228 = INT8_MIN;
	volatile int32_t t56 = 8;

    t56 = (((x225==x226)&x227)>x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = INT32_MAX;
	int16_t x230 = -2;
	static int64_t x231 = -3587675LL;
	int32_t x232 = INT32_MAX;

    t57 = (((x229==x230)&x231)>x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x233 = 35LLU;
	static volatile int16_t x234 = INT16_MIN;
	uint64_t x236 = 13635698052331LLU;
	volatile int32_t t58 = 13692;

    t58 = (((x233==x234)&x235)>x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = INT16_MIN;
	static uint8_t x238 = 4U;
	static int32_t x239 = INT32_MAX;
	static int64_t x240 = INT64_MIN;
	volatile int32_t t59 = 8;

    t59 = (((x237==x238)&x239)>x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int8_t x241 = INT8_MIN;
	volatile int8_t x242 = INT8_MIN;
	static int32_t x243 = INT32_MIN;
	static uint32_t x244 = 7060121U;
	int32_t t60 = 1;

    t60 = (((x241==x242)&x243)>x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint8_t x245 = UINT8_MAX;
	uint64_t x246 = UINT64_MAX;
	int32_t x247 = -1;
	int16_t x248 = -1;
	volatile int32_t t61 = 19;

    t61 = (((x245==x246)&x247)>x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = -1LL;
	int8_t x251 = 9;
	volatile int32_t t62 = -18;

    t62 = (((x249==x250)&x251)>x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x253 = INT64_MIN;
	int16_t x254 = -1844;
	static volatile int8_t x255 = -1;
	volatile int32_t t63 = -346;

    t63 = (((x253==x254)&x255)>x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = -795;
	static uint64_t x258 = 1838904120957828685LLU;
	uint16_t x259 = 28U;
	static int32_t t64 = 16332116;

    t64 = (((x257==x258)&x259)>x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x261 = 3849713U;
	static volatile int32_t x262 = -1;
	uint64_t x263 = 593823097LLU;
	static int8_t x264 = -3;
	int32_t t65 = -319028683;

    t65 = (((x261==x262)&x263)>x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = INT8_MAX;
	int16_t x266 = INT16_MAX;
	uint64_t x267 = 215894612LLU;
	volatile uint16_t x268 = 21801U;
	int32_t t66 = -1;

    t66 = (((x265==x266)&x267)>x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x269 = INT64_MIN;
	uint8_t x270 = UINT8_MAX;
	volatile int16_t x271 = -1;
	static volatile int32_t t67 = 798666233;

    t67 = (((x269==x270)&x271)>x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = 563;
	int32_t x274 = INT32_MIN;
	volatile int32_t t68 = -1737341;

    t68 = (((x273==x274)&x275)>x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = INT8_MIN;
	static int16_t x278 = INT16_MIN;
	int8_t x279 = 24;
	uint32_t x280 = 150088U;
	static int32_t t69 = -6296;

    t69 = (((x277==x278)&x279)>x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = INT8_MIN;
	uint64_t x282 = 274933LLU;
	uint32_t x283 = 384030U;
	static int8_t x284 = 4;
	int32_t t70 = 649064;

    t70 = (((x281==x282)&x283)>x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = 34;
	static uint16_t x286 = UINT16_MAX;
	static int64_t x287 = 97165569LL;

    t71 = (((x285==x286)&x287)>x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = INT64_MIN;
	volatile int32_t x292 = INT32_MAX;
	volatile int32_t t72 = 793;

    t72 = (((x289==x290)&x291)>x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x293 = 39;
	static int8_t x294 = INT8_MAX;
	int8_t x296 = INT8_MIN;
	int32_t t73 = -27388898;

    t73 = (((x293==x294)&x295)>x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x297 = 276107512;
	int32_t x299 = -1;
	static int16_t x300 = INT16_MIN;
	int32_t t74 = -7193122;

    t74 = (((x297==x298)&x299)>x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x301 = INT64_MIN;
	static int16_t x302 = 1;
	volatile int64_t x304 = -276869796333688049LL;
	int32_t t75 = -85934;

    t75 = (((x301==x302)&x303)>x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = INT64_MIN;
	int32_t x306 = INT32_MAX;
	int32_t x308 = -3;

    t76 = (((x305==x306)&x307)>x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint8_t x309 = 25U;
	uint8_t x310 = 40U;
	int16_t x311 = 62;
	static int32_t x312 = -1171;
	volatile int32_t t77 = 1;

    t77 = (((x309==x310)&x311)>x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x314 = INT16_MIN;
	int16_t x316 = 24;
	int32_t t78 = 244080;

    t78 = (((x313==x314)&x315)>x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x317 = 1497607129LL;
	uint16_t x318 = 25U;
	static volatile int32_t x320 = INT32_MAX;
	volatile int32_t t79 = 591;

    t79 = (((x317==x318)&x319)>x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint8_t x321 = 0U;
	int8_t x322 = -20;
	uint32_t x323 = 106912U;
	static uint64_t x324 = UINT64_MAX;

    t80 = (((x321==x322)&x323)>x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x326 = UINT64_MAX;
	uint64_t x327 = 2216739895LLU;
	static volatile uint16_t x328 = 1U;
	volatile int32_t t81 = -978973;

    t81 = (((x325==x326)&x327)>x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x329 = INT32_MIN;
	uint32_t x330 = 387U;
	static int64_t x331 = 50LL;
	int8_t x332 = INT8_MIN;
	static volatile int32_t t82 = -21506836;

    t82 = (((x329==x330)&x331)>x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x335 = -1;
	int32_t t83 = -122157;

    t83 = (((x333==x334)&x335)>x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint64_t x337 = 593289253716140608LLU;
	int64_t x338 = -30887601270LL;
	static int32_t x339 = 281856518;
	int32_t x340 = INT32_MIN;
	volatile int32_t t84 = 8046;

    t84 = (((x337==x338)&x339)>x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x342 = 5393U;
	static volatile int8_t x343 = 1;
	int32_t t85 = -174;

    t85 = (((x341==x342)&x343)>x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x345 = INT64_MIN;
	int32_t x346 = -1;
	uint8_t x348 = UINT8_MAX;
	volatile int32_t t86 = -14;

    t86 = (((x345==x346)&x347)>x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint8_t x349 = 0U;
	uint64_t x350 = 19651449900505LLU;
	static int32_t x351 = 13800;
	static int32_t t87 = -160798569;

    t87 = (((x349==x350)&x351)>x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = -1;
	int8_t x355 = 0;

    t88 = (((x353==x354)&x355)>x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x357 = -1;
	int32_t x359 = -1;
	static int16_t x360 = INT16_MIN;

    t89 = (((x357==x358)&x359)>x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x362 = INT8_MIN;
	int64_t x364 = 47531698723096121LL;
	static volatile int32_t t90 = -22;

    t90 = (((x361==x362)&x363)>x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x365 = INT32_MIN;
	int16_t x366 = -2;
	static int8_t x367 = -1;
	static uint32_t x368 = 1147374U;
	int32_t t91 = 115891;

    t91 = (((x365==x366)&x367)>x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x370 = -1LL;
	volatile int32_t x372 = INT32_MAX;

    t92 = (((x369==x370)&x371)>x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = INT16_MIN;
	int32_t x374 = INT32_MAX;
	static int32_t x375 = 52952;
	uint64_t x376 = UINT64_MAX;
	volatile int32_t t93 = -77663;

    t93 = (((x373==x374)&x375)>x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint64_t x378 = 822719987LLU;
	static int8_t x380 = INT8_MIN;

    t94 = (((x377==x378)&x379)>x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint16_t x381 = 7U;
	int8_t x382 = INT8_MAX;
	int16_t x384 = -1;
	int32_t t95 = 7;

    t95 = (((x381==x382)&x383)>x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = -1;
	static int8_t x387 = INT8_MAX;
	int8_t x388 = INT8_MIN;
	volatile int32_t t96 = -2089;

    t96 = (((x385==x386)&x387)>x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = 4838926;
	int32_t x390 = INT32_MIN;
	int8_t x391 = INT8_MAX;
	int16_t x392 = -1;
	static volatile int32_t t97 = 213156;

    t97 = (((x389==x390)&x391)>x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = -62664;
	int8_t x394 = -1;
	int16_t x395 = INT16_MIN;
	static int32_t t98 = -6764;

    t98 = (((x393==x394)&x395)>x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x397 = INT64_MIN;
	uint8_t x398 = 23U;
	int64_t x399 = INT64_MIN;
	static uint8_t x400 = 29U;
	int32_t t99 = 42587;

    t99 = (((x397==x398)&x399)>x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = INT16_MAX;
	static volatile int32_t x402 = 7951424;
	int64_t x404 = -1LL;
	static volatile int32_t t100 = 39157164;

    t100 = (((x401==x402)&x403)>x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint8_t x405 = 0U;
	int16_t x406 = INT16_MAX;
	static uint16_t x407 = UINT16_MAX;
	int32_t t101 = 44;

    t101 = (((x405==x406)&x407)>x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = INT32_MIN;
	static int8_t x410 = -1;
	volatile int8_t x411 = -14;
	int16_t x412 = -3075;
	static volatile int32_t t102 = 18;

    t102 = (((x409==x410)&x411)>x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x414 = INT32_MAX;
	static int32_t x416 = INT32_MIN;
	int32_t t103 = -15;

    t103 = (((x413==x414)&x415)>x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile uint64_t x417 = 216468603729LLU;
	int16_t x419 = INT16_MIN;
	int32_t x420 = INT32_MAX;
	int32_t t104 = 11580;

    t104 = (((x417==x418)&x419)>x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint8_t x421 = 21U;
	uint8_t x422 = 122U;
	int16_t x423 = -2;
	int32_t x424 = INT32_MAX;
	int32_t t105 = 1;

    t105 = (((x421==x422)&x423)>x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x425 = UINT8_MAX;
	int32_t x426 = INT32_MIN;
	static volatile uint8_t x427 = UINT8_MAX;
	volatile int8_t x428 = 28;
	static int32_t t106 = -458;

    t106 = (((x425==x426)&x427)>x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = -1LL;
	static int64_t x431 = INT64_MIN;
	static int64_t x432 = -1LL;

    t107 = (((x429==x430)&x431)>x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = INT16_MIN;
	int64_t x434 = -593763675LL;
	static uint8_t x436 = 22U;
	volatile int32_t t108 = -1;

    t108 = (((x433==x434)&x435)>x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x437 = UINT8_MAX;
	int32_t x438 = -1;
	volatile uint8_t x439 = 4U;
	int64_t x440 = INT64_MIN;
	int32_t t109 = 22380714;

    t109 = (((x437==x438)&x439)>x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = INT8_MIN;
	int8_t x442 = INT8_MIN;
	volatile uint16_t x443 = UINT16_MAX;
	int8_t x444 = -1;

    t110 = (((x441==x442)&x443)>x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = INT32_MIN;
	int64_t x446 = 778745157LL;
	int64_t x448 = INT64_MAX;
	static volatile int32_t t111 = -1;

    t111 = (((x445==x446)&x447)>x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint32_t x449 = 35900U;
	int16_t x450 = INT16_MAX;
	volatile int32_t x451 = 51793;
	volatile uint32_t x452 = 741U;

    t112 = (((x449==x450)&x451)>x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x453 = -423802LL;
	uint16_t x454 = 5153U;
	int32_t x455 = -1;
	int8_t x456 = 0;

    t113 = (((x453==x454)&x455)>x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x458 = -1LL;
	static int64_t x460 = INT64_MIN;

    t114 = (((x457==x458)&x459)>x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x461 = 12U;
	static int8_t x462 = -1;
	static uint8_t x463 = UINT8_MAX;
	int8_t x464 = INT8_MAX;
	int32_t t115 = -696404;

    t115 = (((x461==x462)&x463)>x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x465 = -5;
	volatile int8_t x466 = -1;
	static int16_t x467 = -1;
	int8_t x468 = -1;
	volatile int32_t t116 = -1451;

    t116 = (((x465==x466)&x467)>x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint16_t x469 = 145U;
	volatile int32_t x470 = INT32_MAX;
	int16_t x471 = INT16_MIN;
	int64_t x472 = 0LL;
	volatile int32_t t117 = 577;

    t117 = (((x469==x470)&x471)>x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = 538755;
	uint64_t x474 = 302766777LLU;
	uint16_t x475 = 15836U;
	volatile int8_t x476 = -1;
	int32_t t118 = -12665403;

    t118 = (((x473==x474)&x475)>x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int64_t x477 = INT64_MIN;
	int32_t x478 = INT32_MIN;
	int64_t x479 = INT64_MIN;
	int64_t x480 = -1LL;
	volatile int32_t t119 = -635269747;

    t119 = (((x477==x478)&x479)>x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint32_t x481 = 28218158U;
	static int64_t x482 = INT64_MIN;
	int16_t x483 = -5829;
	volatile int32_t t120 = 26079900;

    t120 = (((x481==x482)&x483)>x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = INT8_MAX;
	static int64_t x486 = INT64_MAX;
	static volatile int8_t x487 = INT8_MIN;

    t121 = (((x485==x486)&x487)>x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = -1;
	uint64_t x490 = UINT64_MAX;
	volatile uint32_t x491 = 3202109U;
	uint8_t x492 = 2U;

    t122 = (((x489==x490)&x491)>x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x493 = -1;
	int32_t x495 = -1;
	uint8_t x496 = 1U;
	static int32_t t123 = -232737097;

    t123 = (((x493==x494)&x495)>x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint8_t x498 = 5U;
	static uint16_t x499 = 559U;
	int8_t x500 = INT8_MIN;
	int32_t t124 = -204;

    t124 = (((x497==x498)&x499)>x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int16_t x501 = INT16_MIN;
	volatile int64_t x502 = 0LL;
	static uint8_t x503 = 95U;
	volatile int8_t x504 = INT8_MIN;
	volatile int32_t t125 = -250035117;

    t125 = (((x501==x502)&x503)>x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x506 = UINT32_MAX;
	int16_t x507 = 3710;
	volatile int16_t x508 = -1;

    t126 = (((x505==x506)&x507)>x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = INT64_MAX;
	volatile uint64_t x510 = 3740LLU;
	static int64_t x512 = 56135230767565472LL;

    t127 = (((x509==x510)&x511)>x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = -1;
	int16_t x514 = -44;
	int32_t x515 = INT32_MAX;
	int8_t x516 = INT8_MIN;
	int32_t t128 = -12790;

    t128 = (((x513==x514)&x515)>x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile uint8_t x517 = 114U;
	static volatile int16_t x520 = INT16_MIN;
	int32_t t129 = 34837;

    t129 = (((x517==x518)&x519)>x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = -6;
	int8_t x522 = 0;
	volatile int32_t x523 = -1;
	int16_t x524 = INT16_MIN;

    t130 = (((x521==x522)&x523)>x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x525 = INT32_MAX;
	int64_t x526 = 3263599LL;
	volatile uint8_t x527 = 40U;
	int16_t x528 = -189;
	volatile int32_t t131 = -864159253;

    t131 = (((x525==x526)&x527)>x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x529 = -1;
	int16_t x530 = INT16_MAX;
	uint16_t x532 = UINT16_MAX;
	volatile int32_t t132 = -106;

    t132 = (((x529==x530)&x531)>x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x535 = INT16_MIN;
	uint16_t x536 = UINT16_MAX;
	int32_t t133 = -20;

    t133 = (((x533==x534)&x535)>x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x537 = 916U;
	int64_t x538 = INT64_MAX;
	uint16_t x540 = 1438U;
	int32_t t134 = -140671123;

    t134 = (((x537==x538)&x539)>x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint16_t x541 = UINT16_MAX;
	int32_t x542 = -1;
	volatile int8_t x543 = 3;
	static int32_t t135 = 875614;

    t135 = (((x541==x542)&x543)>x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x546 = -1;
	int8_t x547 = -2;
	volatile int8_t x548 = INT8_MIN;
	volatile int32_t t136 = 12;

    t136 = (((x545==x546)&x547)>x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x549 = 4U;
	static uint16_t x551 = 55U;
	static int32_t x552 = 54;

    t137 = (((x549==x550)&x551)>x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint16_t x553 = 25135U;
	volatile int32_t x555 = 98;
	uint8_t x556 = 1U;
	int32_t t138 = -12;

    t138 = (((x553==x554)&x555)>x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x558 = -1;
	volatile uint32_t x559 = 0U;
	int32_t t139 = 1;

    t139 = (((x557==x558)&x559)>x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x561 = -1;
	int16_t x562 = -18;
	volatile int8_t x563 = 6;
	int32_t t140 = 12;

    t140 = (((x561==x562)&x563)>x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x565 = INT64_MIN;
	int16_t x566 = -15716;
	int16_t x567 = -10;
	int16_t x568 = INT16_MAX;
	static volatile int32_t t141 = -3229;

    t141 = (((x565==x566)&x567)>x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x569 = INT64_MIN;
	int64_t x570 = -1LL;
	uint32_t x572 = 374345990U;

    t142 = (((x569==x570)&x571)>x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = INT64_MIN;
	uint16_t x574 = 1U;
	static int16_t x575 = 57;
	volatile uint32_t x576 = 98625796U;
	volatile int32_t t143 = 287527825;

    t143 = (((x573==x574)&x575)>x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x578 = 94340;
	int8_t x579 = 2;
	uint32_t x580 = 6520U;
	static volatile int32_t t144 = -11470;

    t144 = (((x577==x578)&x579)>x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x581 = INT8_MAX;
	int16_t x582 = 0;
	int16_t x583 = 3134;
	int32_t t145 = -11259;

    t145 = (((x581==x582)&x583)>x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x585 = 5LLU;
	int8_t x587 = INT8_MAX;
	int32_t x588 = INT32_MAX;
	static volatile int32_t t146 = -113275;

    t146 = (((x585==x586)&x587)>x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x589 = INT16_MAX;
	int64_t x592 = -1LL;

    t147 = (((x589==x590)&x591)>x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x593 = -1;
	int8_t x594 = 0;
	int32_t t148 = -118611;

    t148 = (((x593==x594)&x595)>x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = INT64_MIN;
	int16_t x598 = INT16_MIN;
	uint32_t x599 = 994201U;
	int16_t x600 = 8;
	volatile int32_t t149 = -1850;

    t149 = (((x597==x598)&x599)>x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x603 = INT32_MIN;
	int32_t t150 = -1;

    t150 = (((x601==x602)&x603)>x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x606 = 651855;
	int16_t x607 = INT16_MIN;
	int32_t t151 = 58315931;

    t151 = (((x605==x606)&x607)>x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x609 = INT8_MAX;
	static int32_t x610 = INT32_MIN;
	uint16_t x611 = 1U;
	uint32_t x612 = UINT32_MAX;

    t152 = (((x609==x610)&x611)>x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x613 = INT32_MIN;
	volatile int16_t x614 = INT16_MAX;
	int64_t x615 = INT64_MIN;

    t153 = (((x613==x614)&x615)>x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = INT32_MIN;
	int32_t x619 = INT32_MAX;
	static volatile int8_t x620 = INT8_MIN;
	int32_t t154 = -404848865;

    t154 = (((x617==x618)&x619)>x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int32_t x621 = 0;
	volatile int16_t x622 = -1;
	int8_t x623 = 27;
	static int64_t x624 = INT64_MIN;
	volatile int32_t t155 = -18382;

    t155 = (((x621==x622)&x623)>x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = INT32_MAX;
	uint16_t x627 = 1U;
	static int32_t t156 = -3174;

    t156 = (((x625==x626)&x627)>x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint32_t x629 = UINT32_MAX;
	uint32_t x630 = UINT32_MAX;
	uint32_t x632 = 130382U;
	volatile int32_t t157 = -213556752;

    t157 = (((x629==x630)&x631)>x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x634 = -1;
	uint64_t x635 = 133123134996523LLU;
	int8_t x636 = -1;
	int32_t t158 = 17927907;

    t158 = (((x633==x634)&x635)>x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x637 = INT8_MIN;
	volatile int8_t x638 = INT8_MAX;
	volatile int32_t x640 = INT32_MAX;
	volatile int32_t t159 = -86667497;

    t159 = (((x637==x638)&x639)>x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = INT64_MAX;
	int8_t x642 = INT8_MIN;
	uint32_t x643 = 61832854U;
	int8_t x644 = INT8_MIN;
	int32_t t160 = 24;

    t160 = (((x641==x642)&x643)>x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x645 = INT32_MIN;
	int64_t x646 = INT64_MAX;
	volatile int64_t x647 = INT64_MIN;
	int16_t x648 = 21;

    t161 = (((x645==x646)&x647)>x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile uint64_t x649 = 0LLU;
	int8_t x650 = 0;
	int8_t x651 = INT8_MIN;
	int32_t x652 = INT32_MAX;
	static int32_t t162 = -100520236;

    t162 = (((x649==x650)&x651)>x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x653 = INT16_MAX;
	volatile int8_t x654 = INT8_MAX;
	volatile int8_t x655 = 35;

    t163 = (((x653==x654)&x655)>x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint32_t x658 = 86024U;
	volatile uint32_t x659 = 100U;
	volatile int32_t x660 = -1144;
	static int32_t t164 = -283211836;

    t164 = (((x657==x658)&x659)>x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x662 = INT8_MIN;
	int16_t x664 = -1;
	int32_t t165 = -33908;

    t165 = (((x661==x662)&x663)>x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x665 = UINT32_MAX;
	int16_t x667 = 420;
	uint16_t x668 = UINT16_MAX;
	int32_t t166 = -63318699;

    t166 = (((x665==x666)&x667)>x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = INT64_MIN;
	uint8_t x671 = UINT8_MAX;
	volatile int8_t x672 = 1;

    t167 = (((x669==x670)&x671)>x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x674 = 1;
	uint32_t x675 = 524U;
	volatile int8_t x676 = -35;
	volatile int32_t t168 = -150344;

    t168 = (((x673==x674)&x675)>x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x677 = -1;
	uint64_t x678 = 11432910091LLU;
	int8_t x679 = 0;
	int32_t x680 = -1;
	static int32_t t169 = -30005291;

    t169 = (((x677==x678)&x679)>x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x681 = 513;
	int32_t x683 = 310644979;
	volatile int16_t x684 = -8;
	volatile int32_t t170 = -15446;

    t170 = (((x681==x682)&x683)>x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x685 = INT16_MIN;
	volatile uint64_t x686 = 66497LLU;
	static int8_t x687 = 10;
	uint32_t x688 = 0U;

    t171 = (((x685==x686)&x687)>x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x689 = -1LL;
	static int8_t x690 = INT8_MAX;
	volatile uint16_t x691 = 20309U;
	int32_t x692 = INT32_MAX;
	int32_t t172 = 5;

    t172 = (((x689==x690)&x691)>x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x693 = 30286179245527190LLU;
	static volatile uint64_t x694 = 6145847LLU;
	int32_t x695 = INT32_MAX;
	int64_t x696 = -1LL;

    t173 = (((x693==x694)&x695)>x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = INT16_MAX;
	volatile uint8_t x698 = 106U;
	volatile int32_t t174 = -175;

    t174 = (((x697==x698)&x699)>x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint16_t x701 = UINT16_MAX;
	int16_t x702 = INT16_MIN;
	int64_t x703 = INT64_MIN;
	static int32_t x704 = INT32_MIN;

    t175 = (((x701==x702)&x703)>x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = INT8_MAX;
	volatile int16_t x706 = -1;
	int8_t x707 = -1;

    t176 = (((x705==x706)&x707)>x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint8_t x709 = UINT8_MAX;
	volatile int8_t x711 = INT8_MAX;
	volatile int8_t x712 = INT8_MIN;
	static volatile int32_t t177 = -1;

    t177 = (((x709==x710)&x711)>x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x713 = 163;
	uint16_t x715 = 11045U;
	uint64_t x716 = 243LLU;
	int32_t t178 = -1606521;

    t178 = (((x713==x714)&x715)>x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = INT32_MIN;
	int32_t x718 = -1;
	volatile int8_t x719 = -1;
	int32_t x720 = INT32_MIN;
	int32_t t179 = 729;

    t179 = (((x717==x718)&x719)>x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x721 = 1327699733546LLU;
	int32_t x722 = INT32_MAX;
	int64_t x723 = INT64_MIN;
	int32_t x724 = -532433;
	int32_t t180 = 13991008;

    t180 = (((x721==x722)&x723)>x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x725 = 1877566827U;
	int32_t x726 = INT32_MAX;
	int32_t x727 = 251039;
	volatile int8_t x728 = -18;
	volatile int32_t t181 = -1230;

    t181 = (((x725==x726)&x727)>x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x729 = -1;
	uint16_t x730 = 0U;
	int64_t x731 = INT64_MIN;
	volatile int16_t x732 = INT16_MIN;
	volatile int32_t t182 = 37975309;

    t182 = (((x729==x730)&x731)>x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile uint8_t x734 = 21U;
	int16_t x735 = -1;

    t183 = (((x733==x734)&x735)>x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x737 = -1LL;
	int32_t x738 = -1;
	int64_t x739 = INT64_MAX;
	int64_t x740 = INT64_MIN;
	static volatile int32_t t184 = -7;

    t184 = (((x737==x738)&x739)>x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = INT32_MIN;
	uint16_t x742 = UINT16_MAX;
	int8_t x743 = INT8_MAX;
	static uint32_t x744 = 10U;
	int32_t t185 = -6940;

    t185 = (((x741==x742)&x743)>x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x745 = -1;
	int64_t x746 = -1LL;
	volatile uint64_t x747 = UINT64_MAX;
	uint64_t x748 = UINT64_MAX;
	static int32_t t186 = 29;

    t186 = (((x745==x746)&x747)>x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x749 = UINT8_MAX;
	volatile uint32_t x750 = 2018489752U;
	uint32_t x751 = 14593235U;
	volatile int64_t x752 = INT64_MIN;
	int32_t t187 = 80;

    t187 = (((x749==x750)&x751)>x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x753 = 6U;
	uint16_t x754 = 7U;
	static int16_t x755 = INT16_MIN;

    t188 = (((x753==x754)&x755)>x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x758 = -1;
	static int8_t x759 = -4;
	int32_t x760 = 133225;

    t189 = (((x757==x758)&x759)>x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x762 = 8590;
	uint64_t x763 = 2868273253879077LLU;
	uint16_t x764 = 39U;
	static volatile int32_t t190 = -5355019;

    t190 = (((x761==x762)&x763)>x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = -1;
	int16_t x766 = -7;
	uint8_t x767 = 88U;
	int16_t x768 = INT16_MIN;

    t191 = (((x765==x766)&x767)>x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x769 = -2645;
	int32_t x770 = INT32_MIN;
	volatile uint64_t x771 = 34949583025321576LLU;

    t192 = (((x769==x770)&x771)>x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x773 = 313247819065915333LL;
	int32_t x775 = INT32_MIN;
	static int16_t x776 = INT16_MAX;
	int32_t t193 = -4093712;

    t193 = (((x773==x774)&x775)>x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x777 = 145080LL;
	volatile int16_t x778 = -17;
	static uint32_t x780 = 11596118U;
	int32_t t194 = -450064;

    t194 = (((x777==x778)&x779)>x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x781 = INT64_MIN;
	volatile int8_t x782 = INT8_MIN;
	int64_t x783 = INT64_MAX;
	volatile int16_t x784 = -1;
	int32_t t195 = -4344;

    t195 = (((x781==x782)&x783)>x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x785 = UINT8_MAX;
	int32_t x786 = 9;
	int16_t x787 = INT16_MIN;
	int16_t x788 = INT16_MIN;
	static int32_t t196 = 22840;

    t196 = (((x785==x786)&x787)>x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x789 = 4;
	static uint16_t x790 = 417U;
	int32_t t197 = -7;

    t197 = (((x789==x790)&x791)>x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint32_t x793 = UINT32_MAX;
	volatile int8_t x794 = -1;
	static uint8_t x796 = UINT8_MAX;
	static volatile int32_t t198 = 5;

    t198 = (((x793==x794)&x795)>x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x798 = INT8_MIN;
	uint64_t x799 = 22299654819529LLU;
	int32_t x800 = INT32_MAX;
	static int32_t t199 = 390209062;

    t199 = (((x797==x798)&x799)>x800);

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


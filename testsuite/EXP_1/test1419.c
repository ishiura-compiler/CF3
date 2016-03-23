
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

static int16_t x8 = -24;
uint32_t x11 = UINT32_MAX;
static volatile uint32_t t3 = 32U;
int8_t x22 = -1;
volatile uint8_t x31 = UINT8_MAX;
volatile int64_t x32 = INT64_MIN;
int8_t x33 = INT8_MIN;
int8_t x34 = 4;
static int64_t t8 = 1269319LL;
volatile int16_t x37 = INT16_MIN;
int8_t x39 = -47;
static int16_t x40 = -1;
int32_t t9 = 28554;
int8_t x46 = 2;
int32_t x47 = INT32_MAX;
volatile int32_t x53 = 2;
static volatile int32_t t15 = -439249;
volatile int32_t t16 = -83335425;
static volatile int64_t x72 = 4049476045774301416LL;
int64_t t17 = 702830LL;
int8_t x83 = -1;
volatile int16_t x84 = -1;
uint64_t x93 = UINT64_MAX;
volatile int64_t t23 = -23397847428758973LL;
int32_t x113 = -1;
int16_t x115 = INT16_MAX;
static int32_t x123 = INT32_MAX;
int16_t x135 = -1;
int32_t t32 = 414425349;
static int32_t x140 = 408644598;
uint64_t t33 = 20567598084338790LLU;
static int8_t x153 = INT8_MIN;
volatile int8_t x160 = -1;
int32_t t37 = -4814;
volatile int64_t t38 = -472932715661989LL;
static volatile uint32_t x165 = 426U;
int16_t x170 = INT16_MAX;
uint8_t x176 = 39U;
int8_t x181 = -1;
int32_t x184 = INT32_MAX;
volatile int64_t x200 = -288247002LL;
int16_t x202 = 11925;
int64_t x203 = INT64_MIN;
int64_t t48 = 15590362710LL;
int16_t x207 = INT16_MIN;
uint32_t x210 = 267U;
int64_t t50 = 7000265333LL;
int8_t x213 = 7;
static uint16_t x224 = UINT16_MAX;
static int8_t x234 = -1;
int8_t x237 = INT8_MIN;
static int32_t x240 = -49867;
static int16_t x244 = INT16_MAX;
static uint64_t t59 = 224543686816185670LLU;
uint32_t x257 = UINT32_MAX;
volatile int32_t x260 = -1;
volatile int16_t x263 = INT16_MIN;
volatile int32_t t63 = 7196241;
int16_t x270 = -911;
volatile int8_t x275 = -1;
int16_t x295 = INT16_MAX;
int64_t x299 = -10425880LL;
int64_t t71 = -349310704894LL;
int32_t x301 = 5997498;
static uint16_t x303 = 11U;
volatile int32_t x312 = INT32_MIN;
static int32_t x327 = INT32_MAX;
uint16_t x328 = 1987U;
int32_t t78 = -10454332;
volatile int32_t x329 = INT32_MIN;
int8_t x350 = -2;
int64_t t85 = -803155347986LL;
int64_t x358 = INT64_MIN;
uint16_t x360 = UINT16_MAX;
int8_t x361 = INT8_MIN;
static int8_t x362 = -1;
int8_t x363 = INT8_MIN;
int32_t x370 = INT32_MIN;
static uint64_t x371 = 3664745016337763434LLU;
volatile int16_t x373 = 3;
int16_t x374 = 32;
static volatile int32_t t90 = -258;
int16_t x378 = INT16_MIN;
uint64_t x386 = 33LLU;
volatile uint64_t x387 = UINT64_MAX;
uint16_t x388 = 34U;
uint32_t x391 = 2619U;
static uint8_t x392 = UINT8_MAX;
int8_t x407 = 1;
volatile uint64_t x408 = UINT64_MAX;
uint64_t t98 = 15197LLU;
int16_t x409 = 0;
uint8_t x410 = 0U;
uint64_t x413 = 530894975LLU;
uint16_t x422 = UINT16_MAX;
uint32_t x429 = UINT32_MAX;
int64_t t105 = 972604578188086LL;
int8_t x437 = -1;
int32_t t107 = -83648104;
uint8_t x450 = 0U;
volatile int32_t x451 = INT32_MIN;
static volatile int16_t x455 = 64;
volatile uint8_t x458 = 107U;
int64_t t111 = 77547LL;
uint32_t x462 = 132U;
int8_t x465 = INT8_MIN;
uint64_t x466 = 33624551162LLU;
uint8_t x467 = 12U;
volatile uint64_t t115 = 17218LLU;
volatile int8_t x478 = INT8_MIN;
static volatile int64_t t116 = 50845997127LL;
volatile int32_t x486 = -1;
volatile uint16_t x488 = 1U;
int8_t x491 = INT8_MIN;
uint32_t x498 = UINT32_MAX;
uint64_t x506 = UINT64_MAX;
static volatile uint32_t t124 = 36U;
static volatile uint8_t x522 = 96U;
static volatile uint64_t t127 = 1967812LLU;
volatile int32_t t131 = 11;
uint8_t x547 = UINT8_MAX;
volatile int32_t x549 = INT32_MIN;
uint64_t t134 = 1230LLU;
int32_t x554 = INT32_MIN;
int8_t x556 = -1;
int64_t x560 = INT64_MIN;
static uint8_t x566 = 45U;
int64_t x567 = INT64_MIN;
int16_t x569 = 12;
uint8_t x571 = 3U;
static int16_t x572 = -1;
static int32_t x575 = INT32_MIN;
int16_t x581 = INT16_MAX;
int16_t x582 = 0;
static uint8_t x583 = UINT8_MAX;
volatile int32_t x584 = -1;
static volatile int32_t t142 = 465;
int32_t t143 = -1;
static int32_t x589 = -39;
int64_t t144 = 16211LL;
int64_t x609 = INT64_MIN;
int8_t x610 = 60;
int16_t x614 = 113;
static int8_t x615 = INT8_MIN;
uint16_t x617 = UINT16_MAX;
int8_t x618 = INT8_MAX;
static int64_t x622 = INT64_MAX;
int32_t t151 = 49356;
uint32_t x631 = UINT32_MAX;
static int32_t x632 = INT32_MAX;
int8_t x636 = -1;
int32_t x642 = INT32_MIN;
volatile int8_t x647 = INT8_MIN;
volatile uint64_t t157 = 1LLU;
uint32_t t161 = 1U;
int32_t x683 = 2;
static int64_t x691 = 1LL;
int64_t t166 = 29167LL;
uint8_t x700 = UINT8_MAX;
static uint16_t x715 = 3U;
uint16_t x719 = 15U;
static volatile int8_t x726 = INT8_MIN;
static uint64_t x728 = 1906577158LLU;
int8_t x729 = -1;
int64_t t175 = 1231015086404983147LL;
volatile int8_t x737 = 1;
uint8_t x744 = UINT8_MAX;
int32_t t179 = -225742;
int16_t x752 = INT16_MIN;
int32_t t181 = -965851592;
int32_t x759 = INT32_MIN;
static int64_t x761 = -1LL;
uint64_t x762 = 11046108LLU;
int64_t x769 = INT64_MIN;
uint8_t x773 = UINT8_MAX;
static volatile int64_t x774 = 22LL;
int8_t x778 = INT8_MIN;
int16_t x781 = -1;
int8_t x783 = -1;
int32_t x786 = -27990;
static int8_t x792 = INT8_MAX;
static int32_t t190 = 3;
volatile int64_t x798 = INT64_MIN;
int32_t t195 = 4086;
int32_t x813 = -633927596;
volatile uint64_t t196 = 3009023863LLU;
int64_t x817 = -1LL;
volatile uint8_t x820 = UINT8_MAX;
uint8_t x823 = UINT8_MAX;
volatile int32_t t199 = -28351455;


void f0(void) {
    	int64_t x1 = 10496443LL;
	static int16_t x2 = INT16_MIN;
	int64_t x3 = -1LL;
	int8_t x4 = -24;
	volatile int64_t t0 = 937351007LL;

    t0 = (((x1==x2)/x3)%x4);

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x5 = 6;
	int8_t x6 = INT8_MAX;
	volatile uint64_t x7 = UINT64_MAX;
	static uint64_t t1 = 13184LLU;

    t1 = (((x5==x6)/x7)%x8);

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = 6U;
	static uint32_t x10 = 1402U;
	uint8_t x12 = 10U;
	static uint32_t t2 = 27U;

    t2 = (((x9==x10)/x11)%x12);

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = -1;
	int8_t x14 = -1;
	int16_t x15 = -121;
	uint32_t x16 = 534U;

    t3 = (((x13==x14)/x15)%x16);

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int32_t x17 = 0;
	int16_t x18 = 27;
	static uint8_t x19 = 47U;
	static volatile int64_t x20 = INT64_MAX;
	static volatile int64_t t4 = 113836104846915918LL;

    t4 = (((x17==x18)/x19)%x20);

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x21 = 553239461897450548LL;
	int64_t x23 = INT64_MIN;
	static int64_t x24 = 6967030899931480LL;
	static volatile int64_t t5 = 1LL;

    t5 = (((x21==x22)/x23)%x24);

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x25 = 0;
	int32_t x26 = INT32_MAX;
	static int8_t x27 = 30;
	uint8_t x28 = UINT8_MAX;
	volatile int32_t t6 = 45834802;

    t6 = (((x25==x26)/x27)%x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x29 = INT32_MIN;
	int32_t x30 = INT32_MIN;
	volatile int64_t t7 = 37LL;

    t7 = (((x29==x30)/x31)%x32);

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x35 = -3400;
	static volatile int64_t x36 = -1LL;

    t8 = (((x33==x34)/x35)%x36);

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x38 = 26U;

    t9 = (((x37==x38)/x39)%x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MIN;
	uint8_t x42 = UINT8_MAX;
	int8_t x43 = 10;
	static uint16_t x44 = 1U;
	int32_t t10 = -1636;

    t10 = (((x41==x42)/x43)%x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = 23591LL;
	int16_t x48 = INT16_MIN;
	volatile int32_t t11 = 9863;

    t11 = (((x45==x46)/x47)%x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint16_t x49 = 1258U;
	static uint16_t x50 = UINT16_MAX;
	int8_t x51 = INT8_MIN;
	static int16_t x52 = INT16_MIN;
	volatile int32_t t12 = 237519;

    t12 = (((x49==x50)/x51)%x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x54 = 5068042529LLU;
	int8_t x55 = -1;
	int8_t x56 = INT8_MIN;
	int32_t t13 = -13;

    t13 = (((x53==x54)/x55)%x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint32_t x57 = 923U;
	volatile int32_t x58 = INT32_MAX;
	int64_t x59 = 232268822121LL;
	int32_t x60 = INT32_MIN;
	int64_t t14 = -522190712925LL;

    t14 = (((x57==x58)/x59)%x60);

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x61 = 137U;
	int16_t x62 = INT16_MAX;
	static uint8_t x63 = 49U;
	static int32_t x64 = -90;

    t15 = (((x61==x62)/x63)%x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x65 = 11;
	uint16_t x66 = 14U;
	int16_t x67 = -5;
	int16_t x68 = INT16_MIN;

    t16 = (((x65==x66)/x67)%x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = INT32_MIN;
	uint16_t x70 = 10377U;
	uint16_t x71 = 166U;

    t17 = (((x69==x70)/x71)%x72);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MAX;
	volatile uint8_t x74 = 10U;
	int16_t x75 = -1;
	int8_t x76 = INT8_MIN;
	volatile int32_t t18 = -1169104;

    t18 = (((x73==x74)/x75)%x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x77 = UINT16_MAX;
	static int32_t x78 = -119607;
	int64_t x79 = INT64_MIN;
	int8_t x80 = 24;
	int64_t t19 = -41383113237071LL;

    t19 = (((x77==x78)/x79)%x80);

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = 12356;
	int64_t x82 = -126946063649LL;
	volatile int32_t t20 = -452;

    t20 = (((x81==x82)/x83)%x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x85 = UINT16_MAX;
	static int64_t x86 = -1LL;
	int32_t x87 = -7069789;
	volatile uint8_t x88 = 1U;
	int32_t t21 = 1546;

    t21 = (((x85==x86)/x87)%x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x89 = INT32_MAX;
	int64_t x90 = -1LL;
	static volatile uint8_t x91 = UINT8_MAX;
	volatile int8_t x92 = INT8_MIN;
	int32_t t22 = -20;

    t22 = (((x89==x90)/x91)%x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x94 = -1128;
	int64_t x95 = INT64_MAX;
	int16_t x96 = -1;

    t23 = (((x93==x94)/x95)%x96);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x97 = -1;
	static int16_t x98 = -1;
	int8_t x99 = INT8_MIN;
	static int32_t x100 = -1;
	volatile int32_t t24 = 4;

    t24 = (((x97==x98)/x99)%x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = INT32_MIN;
	static int64_t x102 = INT64_MIN;
	int8_t x103 = INT8_MIN;
	int8_t x104 = INT8_MIN;
	volatile int32_t t25 = 1091173;

    t25 = (((x101==x102)/x103)%x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x105 = INT16_MIN;
	static uint8_t x106 = 1U;
	volatile int16_t x107 = INT16_MIN;
	uint32_t x108 = UINT32_MAX;
	uint32_t t26 = 34U;

    t26 = (((x105==x106)/x107)%x108);

    if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x114 = 15543646LLU;
	int16_t x116 = INT16_MAX;
	volatile int32_t t27 = 8447;

    t27 = (((x113==x114)/x115)%x116);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x117 = INT64_MAX;
	uint16_t x118 = 19633U;
	int8_t x119 = -1;
	int32_t x120 = INT32_MAX;
	int32_t t28 = -2152651;

    t28 = (((x117==x118)/x119)%x120);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x121 = -1;
	uint64_t x122 = 1932982484683LLU;
	int16_t x124 = INT16_MIN;
	int32_t t29 = -5057;

    t29 = (((x121==x122)/x123)%x124);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x125 = 33U;
	volatile uint32_t x126 = 214213383U;
	uint16_t x127 = 2U;
	uint64_t x128 = 340915LLU;
	uint64_t t30 = 63174LLU;

    t30 = (((x125==x126)/x127)%x128);

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x129 = -38;
	volatile uint8_t x130 = 66U;
	int16_t x131 = -12;
	uint64_t x132 = UINT64_MAX;
	uint64_t t31 = 522117233093230LLU;

    t31 = (((x129==x130)/x131)%x132);

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x133 = 116LL;
	static int32_t x134 = INT32_MIN;
	static uint8_t x136 = 15U;

    t32 = (((x133==x134)/x135)%x136);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x137 = INT8_MAX;
	int8_t x138 = 3;
	uint64_t x139 = 333637784LLU;

    t33 = (((x137==x138)/x139)%x140);

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x141 = -24468;
	int64_t x142 = 4162134LL;
	static int64_t x143 = INT64_MIN;
	uint8_t x144 = 1U;
	int64_t t34 = -5424LL;

    t34 = (((x141==x142)/x143)%x144);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x149 = -60;
	static uint8_t x150 = 1U;
	uint8_t x151 = 12U;
	int8_t x152 = INT8_MIN;
	static volatile int32_t t35 = 3893;

    t35 = (((x149==x150)/x151)%x152);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x154 = 0;
	uint64_t x155 = 1838493302074806LLU;
	int8_t x156 = INT8_MAX;
	volatile uint64_t t36 = 259402955LLU;

    t36 = (((x153==x154)/x155)%x156);

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x157 = -1;
	uint16_t x158 = 42U;
	volatile int32_t x159 = -1;

    t37 = (((x157==x158)/x159)%x160);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x161 = 2101U;
	static int8_t x162 = INT8_MIN;
	volatile uint8_t x163 = 1U;
	int64_t x164 = 954812285502LL;

    t38 = (((x161==x162)/x163)%x164);

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x166 = 3606606915LL;
	uint16_t x167 = 24U;
	uint16_t x168 = 443U;
	int32_t t39 = 9276306;

    t39 = (((x165==x166)/x167)%x168);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x169 = INT8_MAX;
	uint8_t x171 = 114U;
	int16_t x172 = 3;
	volatile int32_t t40 = -348757635;

    t40 = (((x169==x170)/x171)%x172);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x173 = INT64_MIN;
	static volatile int64_t x174 = INT64_MIN;
	static volatile int8_t x175 = INT8_MAX;
	int32_t t41 = -171821001;

    t41 = (((x173==x174)/x175)%x176);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x177 = INT16_MAX;
	int64_t x178 = -1LL;
	volatile int64_t x179 = 14970213527840235LL;
	volatile int16_t x180 = -3;
	volatile int64_t t42 = 4LL;

    t42 = (((x177==x178)/x179)%x180);

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x182 = INT32_MAX;
	volatile int8_t x183 = -1;
	volatile int32_t t43 = -6;

    t43 = (((x181==x182)/x183)%x184);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x185 = 29161U;
	volatile int32_t x186 = INT32_MIN;
	uint8_t x187 = 27U;
	int64_t x188 = INT64_MIN;
	int64_t t44 = 83LL;

    t44 = (((x185==x186)/x187)%x188);

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x189 = -1;
	int8_t x190 = INT8_MIN;
	uint64_t x191 = 12898005987LLU;
	static uint8_t x192 = 4U;
	uint64_t t45 = 0LLU;

    t45 = (((x189==x190)/x191)%x192);

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x193 = INT32_MAX;
	int8_t x194 = -10;
	int16_t x195 = INT16_MAX;
	int32_t x196 = INT32_MAX;
	volatile int32_t t46 = 5;

    t46 = (((x193==x194)/x195)%x196);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x197 = 50509U;
	volatile int8_t x198 = INT8_MIN;
	volatile int8_t x199 = -2;
	volatile int64_t t47 = 3379779257LL;

    t47 = (((x197==x198)/x199)%x200);

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x201 = INT64_MIN;
	static volatile uint8_t x204 = 23U;

    t48 = (((x201==x202)/x203)%x204);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x205 = UINT32_MAX;
	int32_t x206 = INT32_MIN;
	static int32_t x208 = -31792;
	static int32_t t49 = 291894;

    t49 = (((x205==x206)/x207)%x208);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x209 = INT16_MIN;
	static int8_t x211 = INT8_MIN;
	int64_t x212 = INT64_MAX;

    t50 = (((x209==x210)/x211)%x212);

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x214 = UINT8_MAX;
	int64_t x215 = INT64_MIN;
	static volatile int64_t x216 = -1009468959948LL;
	int64_t t51 = -934210767790LL;

    t51 = (((x213==x214)/x215)%x216);

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x217 = INT32_MIN;
	static int64_t x218 = INT64_MAX;
	int16_t x219 = INT16_MAX;
	int64_t x220 = 849763LL;
	int64_t t52 = -7493988718817LL;

    t52 = (((x217==x218)/x219)%x220);

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x221 = -1;
	int64_t x222 = -1LL;
	int16_t x223 = INT16_MAX;
	volatile int32_t t53 = -87597389;

    t53 = (((x221==x222)/x223)%x224);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint64_t x225 = 16LLU;
	volatile uint16_t x226 = 18409U;
	uint8_t x227 = 1U;
	int16_t x228 = INT16_MIN;
	int32_t t54 = 3935840;

    t54 = (((x225==x226)/x227)%x228);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x229 = UINT16_MAX;
	static volatile int16_t x230 = 211;
	int64_t x231 = 3147805905288545LL;
	int64_t x232 = INT64_MIN;
	int64_t t55 = -64LL;

    t55 = (((x229==x230)/x231)%x232);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int64_t x233 = -1LL;
	volatile int32_t x235 = 9991;
	static int32_t x236 = INT32_MIN;
	static volatile int32_t t56 = 965672;

    t56 = (((x233==x234)/x235)%x236);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x238 = INT8_MIN;
	volatile int64_t x239 = INT64_MIN;
	static volatile int64_t t57 = -12LL;

    t57 = (((x237==x238)/x239)%x240);

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x241 = INT32_MAX;
	static int8_t x242 = INT8_MIN;
	volatile int8_t x243 = INT8_MIN;
	int32_t t58 = 2;

    t58 = (((x241==x242)/x243)%x244);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x245 = UINT16_MAX;
	volatile uint8_t x246 = 1U;
	volatile uint64_t x247 = 12598498LLU;
	int64_t x248 = INT64_MIN;

    t59 = (((x245==x246)/x247)%x248);

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x249 = UINT8_MAX;
	int8_t x250 = INT8_MAX;
	static uint32_t x251 = 2044U;
	volatile int64_t x252 = INT64_MIN;
	static volatile int64_t t60 = -6088989LL;

    t60 = (((x249==x250)/x251)%x252);

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint16_t x253 = 1150U;
	uint16_t x254 = UINT16_MAX;
	static int64_t x255 = INT64_MIN;
	int16_t x256 = -3;
	volatile int64_t t61 = 0LL;

    t61 = (((x253==x254)/x255)%x256);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x258 = INT64_MAX;
	int8_t x259 = INT8_MAX;
	volatile int32_t t62 = 50441;

    t62 = (((x257==x258)/x259)%x260);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x261 = 17;
	uint64_t x262 = 44117208LLU;
	volatile int32_t x264 = -3265481;

    t63 = (((x261==x262)/x263)%x264);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x265 = -1;
	volatile int64_t x266 = INT64_MAX;
	int64_t x267 = INT64_MAX;
	int32_t x268 = -1;
	int64_t t64 = 19LL;

    t64 = (((x265==x266)/x267)%x268);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x269 = -1;
	int32_t x271 = 3897;
	int64_t x272 = 1LL;
	int64_t t65 = -135916776139087LL;

    t65 = (((x269==x270)/x271)%x272);

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x273 = INT8_MIN;
	static int16_t x274 = INT16_MIN;
	int64_t x276 = INT64_MAX;
	volatile int64_t t66 = 66207374405559792LL;

    t66 = (((x273==x274)/x275)%x276);

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint64_t x277 = UINT64_MAX;
	static uint16_t x278 = 109U;
	int64_t x279 = -1LL;
	static int32_t x280 = INT32_MIN;
	volatile int64_t t67 = -231716LL;

    t67 = (((x277==x278)/x279)%x280);

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x285 = INT8_MIN;
	static uint32_t x286 = 3542U;
	uint64_t x287 = UINT64_MAX;
	uint64_t x288 = 453561LLU;
	static uint64_t t68 = 509696947752LLU;

    t68 = (((x285==x286)/x287)%x288);

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x289 = INT8_MAX;
	int16_t x290 = INT16_MIN;
	static uint16_t x291 = 23529U;
	volatile uint8_t x292 = 63U;
	int32_t t69 = -88383664;

    t69 = (((x289==x290)/x291)%x292);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x293 = -1LL;
	int8_t x294 = -1;
	uint32_t x296 = UINT32_MAX;
	volatile uint32_t t70 = 24130U;

    t70 = (((x293==x294)/x295)%x296);

    if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x297 = -568223619;
	static int16_t x298 = INT16_MAX;
	int32_t x300 = INT32_MAX;

    t71 = (((x297==x298)/x299)%x300);

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x302 = 5U;
	int8_t x304 = -1;
	int32_t t72 = -7;

    t72 = (((x301==x302)/x303)%x304);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x305 = -1124761;
	int8_t x306 = -1;
	int64_t x307 = INT64_MAX;
	static volatile int8_t x308 = INT8_MIN;
	volatile int64_t t73 = -212754577794404922LL;

    t73 = (((x305==x306)/x307)%x308);

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x309 = -186;
	int64_t x310 = 2503252488933233LL;
	static uint64_t x311 = UINT64_MAX;
	static uint64_t t74 = 0LLU;

    t74 = (((x309==x310)/x311)%x312);

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x313 = 9397769U;
	static volatile int32_t x314 = INT32_MAX;
	int64_t x315 = INT64_MIN;
	int16_t x316 = 25;
	int64_t t75 = -219597083LL;

    t75 = (((x313==x314)/x315)%x316);

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x317 = INT64_MIN;
	int8_t x318 = -1;
	int16_t x319 = INT16_MIN;
	int16_t x320 = -1;
	volatile int32_t t76 = -4;

    t76 = (((x317==x318)/x319)%x320);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x321 = -1;
	volatile int8_t x322 = INT8_MAX;
	uint8_t x323 = UINT8_MAX;
	int64_t x324 = INT64_MIN;
	int64_t t77 = 165905652362612510LL;

    t77 = (((x321==x322)/x323)%x324);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x325 = -1;
	volatile uint16_t x326 = 1158U;

    t78 = (((x325==x326)/x327)%x328);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x330 = UINT64_MAX;
	static uint64_t x331 = 2001744704LLU;
	static uint8_t x332 = 12U;
	volatile uint64_t t79 = 3044113816LLU;

    t79 = (((x329==x330)/x331)%x332);

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x333 = INT8_MIN;
	int8_t x334 = 1;
	int32_t x335 = -13;
	uint32_t x336 = UINT32_MAX;
	static uint32_t t80 = 90U;

    t80 = (((x333==x334)/x335)%x336);

    if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x337 = 5U;
	int64_t x338 = INT64_MAX;
	int64_t x339 = INT64_MAX;
	int16_t x340 = INT16_MAX;
	static int64_t t81 = -24LL;

    t81 = (((x337==x338)/x339)%x340);

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x341 = INT32_MIN;
	int8_t x342 = -47;
	uint64_t x343 = UINT64_MAX;
	int8_t x344 = 4;
	static volatile uint64_t t82 = 2920242959964600LLU;

    t82 = (((x341==x342)/x343)%x344);

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x345 = UINT16_MAX;
	volatile uint32_t x346 = 19278U;
	static int64_t x347 = INT64_MIN;
	int32_t x348 = 7137621;
	volatile int64_t t83 = 1981461843426LL;

    t83 = (((x345==x346)/x347)%x348);

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x349 = 1065;
	int8_t x351 = INT8_MIN;
	int32_t x352 = -2214;
	static int32_t t84 = 2;

    t84 = (((x349==x350)/x351)%x352);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x353 = INT8_MIN;
	uint32_t x354 = 6U;
	static int16_t x355 = INT16_MAX;
	int64_t x356 = 39291272LL;

    t85 = (((x353==x354)/x355)%x356);

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x357 = INT32_MAX;
	volatile int32_t x359 = -12;
	volatile int32_t t86 = 33809278;

    t86 = (((x357==x358)/x359)%x360);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x364 = INT64_MIN;
	volatile int64_t t87 = 6357638LL;

    t87 = (((x361==x362)/x363)%x364);

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x365 = INT32_MAX;
	int8_t x366 = INT8_MIN;
	int32_t x367 = -1;
	int16_t x368 = -1;
	int32_t t88 = 12784;

    t88 = (((x365==x366)/x367)%x368);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x369 = INT8_MAX;
	int64_t x372 = INT64_MIN;
	uint64_t t89 = 232875738559537176LLU;

    t89 = (((x369==x370)/x371)%x372);

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x375 = -1957813;
	int16_t x376 = INT16_MIN;

    t90 = (((x373==x374)/x375)%x376);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x377 = 948U;
	volatile uint64_t x379 = 42585LLU;
	int64_t x380 = -888990349657622LL;
	uint64_t t91 = 1097133699891692601LLU;

    t91 = (((x377==x378)/x379)%x380);

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x381 = UINT32_MAX;
	static uint64_t x382 = 2218397LLU;
	static volatile int64_t x383 = INT64_MIN;
	uint64_t x384 = 58LLU;
	uint64_t t92 = 7206LLU;

    t92 = (((x381==x382)/x383)%x384);

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x385 = -10062LL;
	uint64_t t93 = 31797679230828LLU;

    t93 = (((x385==x386)/x387)%x388);

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x389 = INT16_MAX;
	volatile int32_t x390 = INT32_MAX;
	volatile uint32_t t94 = 13210578U;

    t94 = (((x389==x390)/x391)%x392);

    if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x393 = INT8_MIN;
	int64_t x394 = INT64_MAX;
	static uint16_t x395 = 8073U;
	int32_t x396 = -123472412;
	static int32_t t95 = -16352334;

    t95 = (((x393==x394)/x395)%x396);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x397 = 1575U;
	int16_t x398 = INT16_MIN;
	int8_t x399 = INT8_MIN;
	static uint8_t x400 = 93U;
	volatile int32_t t96 = 3486788;

    t96 = (((x397==x398)/x399)%x400);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x401 = -463;
	int16_t x402 = -1;
	int8_t x403 = INT8_MIN;
	int8_t x404 = INT8_MAX;
	static int32_t t97 = 29515;

    t97 = (((x401==x402)/x403)%x404);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x405 = -114820;
	uint8_t x406 = UINT8_MAX;

    t98 = (((x405==x406)/x407)%x408);

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x411 = -2;
	int16_t x412 = -4444;
	volatile int32_t t99 = 13713;

    t99 = (((x409==x410)/x411)%x412);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x414 = INT64_MIN;
	volatile int32_t x415 = INT32_MIN;
	int32_t x416 = INT32_MIN;
	volatile int32_t t100 = -152281;

    t100 = (((x413==x414)/x415)%x416);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x417 = INT32_MIN;
	uint32_t x418 = UINT32_MAX;
	uint32_t x419 = UINT32_MAX;
	static int8_t x420 = 1;
	volatile uint32_t t101 = 779459997U;

    t101 = (((x417==x418)/x419)%x420);

    if (t101 != 0U) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x421 = -1;
	volatile int16_t x423 = INT16_MIN;
	volatile int32_t x424 = INT32_MIN;
	int32_t t102 = 4886;

    t102 = (((x421==x422)/x423)%x424);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x425 = INT8_MAX;
	int16_t x426 = INT16_MIN;
	int8_t x427 = -1;
	volatile int8_t x428 = INT8_MIN;
	static volatile int32_t t103 = -147310;

    t103 = (((x425==x426)/x427)%x428);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x430 = -1;
	static int32_t x431 = -1;
	int8_t x432 = INT8_MIN;
	volatile int32_t t104 = 15561;

    t104 = (((x429==x430)/x431)%x432);

    if (t104 != -1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x433 = 5561U;
	int8_t x434 = 18;
	int16_t x435 = INT16_MIN;
	static volatile int64_t x436 = INT64_MAX;

    t105 = (((x433==x434)/x435)%x436);

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint8_t x438 = 0U;
	int16_t x439 = 121;
	int64_t x440 = -6LL;
	volatile int64_t t106 = 2506768LL;

    t106 = (((x437==x438)/x439)%x440);

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x441 = INT32_MIN;
	int8_t x442 = 1;
	int16_t x443 = INT16_MIN;
	int16_t x444 = INT16_MIN;

    t107 = (((x441==x442)/x443)%x444);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x445 = -1;
	volatile int64_t x446 = INT64_MIN;
	static volatile int64_t x447 = INT64_MIN;
	volatile int16_t x448 = 492;
	volatile int64_t t108 = 70703219201005321LL;

    t108 = (((x445==x446)/x447)%x448);

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint8_t x449 = 45U;
	static int32_t x452 = 67454332;
	volatile int32_t t109 = -684;

    t109 = (((x449==x450)/x451)%x452);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x453 = -1;
	static int64_t x454 = -246478256418LL;
	volatile int16_t x456 = 2910;
	int32_t t110 = -1823250;

    t110 = (((x453==x454)/x455)%x456);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x457 = INT8_MIN;
	int64_t x459 = INT64_MIN;
	volatile int32_t x460 = INT32_MIN;

    t111 = (((x457==x458)/x459)%x460);

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x461 = INT16_MIN;
	static volatile int32_t x463 = -1;
	static int32_t x464 = INT32_MIN;
	int32_t t112 = 1;

    t112 = (((x461==x462)/x463)%x464);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x468 = INT8_MIN;
	volatile int32_t t113 = 162196378;

    t113 = (((x465==x466)/x467)%x468);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x469 = 484U;
	volatile uint8_t x470 = UINT8_MAX;
	int16_t x471 = -12;
	uint32_t x472 = 210563483U;
	static volatile uint32_t t114 = 6U;

    t114 = (((x469==x470)/x471)%x472);

    if (t114 != 0U) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x473 = -30;
	int8_t x474 = -1;
	uint64_t x475 = UINT64_MAX;
	int8_t x476 = INT8_MAX;

    t115 = (((x473==x474)/x475)%x476);

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x477 = INT16_MAX;
	static int64_t x479 = -2413993555LL;
	int32_t x480 = -1;

    t116 = (((x477==x478)/x479)%x480);

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x481 = 1068693796953LLU;
	int16_t x482 = INT16_MAX;
	volatile int8_t x483 = -1;
	int8_t x484 = -1;
	int32_t t117 = -1389002;

    t117 = (((x481==x482)/x483)%x484);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x485 = 12;
	static int32_t x487 = INT32_MAX;
	volatile int32_t t118 = 11515137;

    t118 = (((x485==x486)/x487)%x488);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint8_t x489 = 0U;
	volatile uint8_t x490 = 59U;
	int16_t x492 = INT16_MIN;
	int32_t t119 = -25;

    t119 = (((x489==x490)/x491)%x492);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int64_t x493 = INT64_MIN;
	int16_t x494 = INT16_MAX;
	volatile int32_t x495 = -1;
	static uint8_t x496 = 6U;
	int32_t t120 = 1296;

    t120 = (((x493==x494)/x495)%x496);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x497 = 1;
	int16_t x499 = INT16_MIN;
	int16_t x500 = -1;
	volatile int32_t t121 = 23019;

    t121 = (((x497==x498)/x499)%x500);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x501 = -48;
	int32_t x502 = 1;
	volatile uint32_t x503 = 2488323U;
	uint32_t x504 = 5962979U;
	volatile uint32_t t122 = 2274U;

    t122 = (((x501==x502)/x503)%x504);

    if (t122 != 0U) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x505 = -48642431290LL;
	static int32_t x507 = INT32_MIN;
	int64_t x508 = INT64_MIN;
	static int64_t t123 = 388435083LL;

    t123 = (((x505==x506)/x507)%x508);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint32_t x509 = 878213U;
	volatile int64_t x510 = -30277393095732793LL;
	uint32_t x511 = 87654928U;
	int16_t x512 = -25;

    t124 = (((x509==x510)/x511)%x512);

    if (t124 != 0U) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x513 = INT64_MAX;
	int16_t x514 = INT16_MAX;
	static volatile uint64_t x515 = 16013215139LLU;
	uint16_t x516 = 136U;
	volatile uint64_t t125 = 953332489042326727LLU;

    t125 = (((x513==x514)/x515)%x516);

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint32_t x517 = 296248U;
	uint8_t x518 = 3U;
	uint32_t x519 = UINT32_MAX;
	static int16_t x520 = INT16_MIN;
	uint32_t t126 = 229836U;

    t126 = (((x517==x518)/x519)%x520);

    if (t126 != 0U) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x521 = INT8_MIN;
	uint64_t x523 = 802LLU;
	volatile int8_t x524 = INT8_MIN;

    t127 = (((x521==x522)/x523)%x524);

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x525 = 421117;
	int8_t x526 = INT8_MIN;
	int32_t x527 = 2;
	static int16_t x528 = -1;
	static int32_t t128 = -298270704;

    t128 = (((x525==x526)/x527)%x528);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x529 = 9541244381LLU;
	int64_t x530 = INT64_MIN;
	volatile int8_t x531 = -1;
	volatile uint8_t x532 = UINT8_MAX;
	int32_t t129 = 3764403;

    t129 = (((x529==x530)/x531)%x532);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x533 = -9;
	uint8_t x534 = 18U;
	volatile uint16_t x535 = 174U;
	volatile uint32_t x536 = 9097485U;
	uint32_t t130 = 926532U;

    t130 = (((x533==x534)/x535)%x536);

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x537 = INT8_MIN;
	static int64_t x538 = INT64_MIN;
	volatile int32_t x539 = INT32_MAX;
	volatile int32_t x540 = 33;

    t131 = (((x537==x538)/x539)%x540);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x541 = -1;
	uint64_t x542 = 198522536932LLU;
	int8_t x543 = -1;
	uint32_t x544 = 2121251406U;
	static volatile uint32_t t132 = 973U;

    t132 = (((x541==x542)/x543)%x544);

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x545 = INT16_MIN;
	uint32_t x546 = 16725021U;
	static uint8_t x548 = 3U;
	volatile int32_t t133 = 20;

    t133 = (((x545==x546)/x547)%x548);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x550 = -3097500663552203361LL;
	uint64_t x551 = UINT64_MAX;
	static volatile int8_t x552 = INT8_MIN;

    t134 = (((x549==x550)/x551)%x552);

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int16_t x553 = -1;
	int16_t x555 = INT16_MIN;
	volatile int32_t t135 = -7;

    t135 = (((x553==x554)/x555)%x556);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x557 = 21;
	int32_t x558 = INT32_MIN;
	int16_t x559 = -1;
	volatile int64_t t136 = 1017255206127464LL;

    t136 = (((x557==x558)/x559)%x560);

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x561 = -657655362012248207LL;
	volatile uint32_t x562 = 90239U;
	int64_t x563 = INT64_MAX;
	uint64_t x564 = 53LLU;
	uint64_t t137 = 1582311587300LLU;

    t137 = (((x561==x562)/x563)%x564);

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x565 = INT16_MAX;
	uint64_t x568 = UINT64_MAX;
	volatile uint64_t t138 = 1039787442384LLU;

    t138 = (((x565==x566)/x567)%x568);

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x570 = -1LL;
	int32_t t139 = 119327224;

    t139 = (((x569==x570)/x571)%x572);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint16_t x573 = 232U;
	int16_t x574 = 0;
	int32_t x576 = 4;
	volatile int32_t t140 = 19733;

    t140 = (((x573==x574)/x575)%x576);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x577 = 1329133571383383530LLU;
	uint32_t x578 = 247802U;
	volatile uint64_t x579 = 6331023950311390060LLU;
	int32_t x580 = INT32_MAX;
	volatile uint64_t t141 = 1578349828LLU;

    t141 = (((x577==x578)/x579)%x580);

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    

    t142 = (((x581==x582)/x583)%x584);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x585 = INT8_MIN;
	int8_t x586 = INT8_MAX;
	static int32_t x587 = INT32_MIN;
	int16_t x588 = INT16_MIN;

    t143 = (((x585==x586)/x587)%x588);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x590 = UINT32_MAX;
	int64_t x591 = -1LL;
	int8_t x592 = -1;

    t144 = (((x589==x590)/x591)%x592);

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x597 = -1;
	static int32_t x598 = 47;
	int8_t x599 = INT8_MIN;
	static int32_t x600 = INT32_MIN;
	static volatile int32_t t145 = 9;

    t145 = (((x597==x598)/x599)%x600);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x601 = INT16_MIN;
	uint32_t x602 = UINT32_MAX;
	uint8_t x603 = UINT8_MAX;
	int64_t x604 = INT64_MIN;
	int64_t t146 = -16582132508262045LL;

    t146 = (((x601==x602)/x603)%x604);

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x605 = 3U;
	volatile int16_t x606 = INT16_MAX;
	static int64_t x607 = -2910230046604830102LL;
	int64_t x608 = INT64_MIN;
	int64_t t147 = 2923LL;

    t147 = (((x605==x606)/x607)%x608);

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x611 = INT32_MAX;
	volatile int32_t x612 = -1;
	volatile int32_t t148 = -14932;

    t148 = (((x609==x610)/x611)%x612);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x613 = UINT16_MAX;
	int8_t x616 = -1;
	int32_t t149 = -2;

    t149 = (((x613==x614)/x615)%x616);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x619 = INT16_MAX;
	uint32_t x620 = 259328944U;
	volatile uint32_t t150 = 1340U;

    t150 = (((x617==x618)/x619)%x620);

    if (t150 != 0U) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x621 = UINT16_MAX;
	static int16_t x623 = 139;
	volatile uint8_t x624 = 2U;

    t151 = (((x621==x622)/x623)%x624);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x625 = -1;
	int32_t x626 = INT32_MIN;
	uint8_t x627 = UINT8_MAX;
	volatile int8_t x628 = INT8_MAX;
	int32_t t152 = -123353076;

    t152 = (((x625==x626)/x627)%x628);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x629 = INT8_MIN;
	int32_t x630 = 19363;
	volatile uint32_t t153 = 1670805U;

    t153 = (((x629==x630)/x631)%x632);

    if (t153 != 0U) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x633 = -1;
	static uint8_t x634 = 0U;
	int32_t x635 = -638950;
	volatile int32_t t154 = 796;

    t154 = (((x633==x634)/x635)%x636);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x637 = 809541U;
	int64_t x638 = 54LL;
	static int8_t x639 = -12;
	static volatile int8_t x640 = -17;
	static int32_t t155 = 120;

    t155 = (((x637==x638)/x639)%x640);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint32_t x641 = 589865925U;
	int8_t x643 = INT8_MAX;
	uint32_t x644 = 601010980U;
	uint32_t t156 = 3U;

    t156 = (((x641==x642)/x643)%x644);

    if (t156 != 0U) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x645 = 147296311440823LLU;
	static int16_t x646 = -12;
	uint64_t x648 = 1618043773125LLU;

    t157 = (((x645==x646)/x647)%x648);

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x649 = -51;
	static int16_t x650 = -1;
	uint64_t x651 = UINT64_MAX;
	uint16_t x652 = UINT16_MAX;
	volatile uint64_t t158 = 14219LLU;

    t158 = (((x649==x650)/x651)%x652);

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint16_t x657 = 184U;
	volatile uint64_t x658 = UINT64_MAX;
	static volatile int8_t x659 = -1;
	uint16_t x660 = 7618U;
	static int32_t t159 = -388844;

    t159 = (((x657==x658)/x659)%x660);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x661 = -1592182;
	int8_t x662 = INT8_MIN;
	int8_t x663 = -1;
	volatile int32_t x664 = INT32_MIN;
	int32_t t160 = 283;

    t160 = (((x661==x662)/x663)%x664);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x665 = INT32_MIN;
	int16_t x666 = -1;
	static volatile int16_t x667 = -1;
	uint32_t x668 = 3U;

    t161 = (((x665==x666)/x667)%x668);

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x669 = INT32_MAX;
	int16_t x670 = INT16_MAX;
	volatile uint32_t x671 = UINT32_MAX;
	static int64_t x672 = 78068625LL;
	int64_t t162 = -741969568LL;

    t162 = (((x669==x670)/x671)%x672);

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint32_t x677 = 445709U;
	volatile int64_t x678 = INT64_MIN;
	uint16_t x679 = 11225U;
	static uint8_t x680 = 10U;
	volatile int32_t t163 = 15;

    t163 = (((x677==x678)/x679)%x680);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint8_t x681 = 12U;
	uint8_t x682 = 1U;
	volatile int16_t x684 = -1;
	volatile int32_t t164 = 1756502;

    t164 = (((x681==x682)/x683)%x684);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x685 = 1U;
	int16_t x686 = -520;
	int64_t x687 = -62823576LL;
	uint8_t x688 = 116U;
	volatile int64_t t165 = 21712181643LL;

    t165 = (((x685==x686)/x687)%x688);

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile uint16_t x689 = UINT16_MAX;
	int32_t x690 = INT32_MIN;
	int32_t x692 = INT32_MIN;

    t166 = (((x689==x690)/x691)%x692);

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x697 = -1;
	volatile uint64_t x698 = 305511546LLU;
	uint8_t x699 = UINT8_MAX;
	volatile int32_t t167 = -86564;

    t167 = (((x697==x698)/x699)%x700);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x701 = INT16_MIN;
	int64_t x702 = INT64_MIN;
	uint64_t x703 = UINT64_MAX;
	int32_t x704 = INT32_MIN;
	volatile uint64_t t168 = 352277518LLU;

    t168 = (((x701==x702)/x703)%x704);

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint16_t x705 = 7U;
	volatile int32_t x706 = -480223454;
	static uint32_t x707 = 79331277U;
	int64_t x708 = INT64_MIN;
	volatile int64_t t169 = -486497900112481908LL;

    t169 = (((x705==x706)/x707)%x708);

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x709 = INT16_MAX;
	static uint64_t x710 = UINT64_MAX;
	static int8_t x711 = -1;
	int32_t x712 = -1;
	volatile int32_t t170 = -5230;

    t170 = (((x709==x710)/x711)%x712);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x713 = -8697463526634LL;
	static uint16_t x714 = 527U;
	int32_t x716 = INT32_MAX;
	volatile int32_t t171 = 14;

    t171 = (((x713==x714)/x715)%x716);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x717 = INT8_MIN;
	uint16_t x718 = UINT16_MAX;
	uint32_t x720 = 366403658U;
	static volatile uint32_t t172 = 218U;

    t172 = (((x717==x718)/x719)%x720);

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x721 = INT64_MAX;
	uint64_t x722 = UINT64_MAX;
	int16_t x723 = 938;
	int16_t x724 = INT16_MIN;
	int32_t t173 = 31535963;

    t173 = (((x721==x722)/x723)%x724);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x725 = INT64_MIN;
	static volatile int16_t x727 = INT16_MIN;
	uint64_t t174 = 10901748LLU;

    t174 = (((x725==x726)/x727)%x728);

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x730 = INT8_MIN;
	uint16_t x731 = 9U;
	static int64_t x732 = -4503502874171519LL;

    t175 = (((x729==x730)/x731)%x732);

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x733 = -1;
	int8_t x734 = INT8_MIN;
	int64_t x735 = -1LL;
	int32_t x736 = INT32_MAX;
	volatile int64_t t176 = 104449LL;

    t176 = (((x733==x734)/x735)%x736);

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x738 = -1;
	volatile uint32_t x739 = 28U;
	int8_t x740 = INT8_MIN;
	volatile uint32_t t177 = 94573U;

    t177 = (((x737==x738)/x739)%x740);

    if (t177 != 0U) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x741 = 55;
	static int64_t x742 = -1LL;
	int8_t x743 = INT8_MIN;
	int32_t t178 = -15202436;

    t178 = (((x741==x742)/x743)%x744);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x745 = INT32_MIN;
	int64_t x746 = INT64_MIN;
	static uint16_t x747 = 33U;
	uint8_t x748 = 109U;

    t179 = (((x745==x746)/x747)%x748);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x749 = 3;
	uint32_t x750 = UINT32_MAX;
	int32_t x751 = INT32_MIN;
	static int32_t t180 = -186845;

    t180 = (((x749==x750)/x751)%x752);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int8_t x753 = INT8_MIN;
	uint32_t x754 = 69U;
	int16_t x755 = INT16_MAX;
	static uint16_t x756 = 23U;

    t181 = (((x753==x754)/x755)%x756);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x757 = -89681LL;
	int64_t x758 = INT64_MIN;
	uint32_t x760 = 837198456U;
	uint32_t t182 = 1U;

    t182 = (((x757==x758)/x759)%x760);

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint16_t x763 = UINT16_MAX;
	static volatile uint8_t x764 = 3U;
	volatile int32_t t183 = -975;

    t183 = (((x761==x762)/x763)%x764);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint8_t x765 = UINT8_MAX;
	static int8_t x766 = INT8_MAX;
	uint32_t x767 = UINT32_MAX;
	int16_t x768 = INT16_MIN;
	volatile uint32_t t184 = 51050U;

    t184 = (((x765==x766)/x767)%x768);

    if (t184 != 0U) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x770 = 52525844U;
	int32_t x771 = -1;
	int32_t x772 = 12551;
	static int32_t t185 = 2;

    t185 = (((x769==x770)/x771)%x772);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x775 = INT64_MIN;
	volatile int32_t x776 = INT32_MAX;
	static int64_t t186 = -15826697109LL;

    t186 = (((x773==x774)/x775)%x776);

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x777 = 187;
	static uint64_t x779 = 401486644LLU;
	int64_t x780 = 28813485LL;
	volatile uint64_t t187 = 1195939594919456469LLU;

    t187 = (((x777==x778)/x779)%x780);

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x782 = 74729823711374621LLU;
	int64_t x784 = -1LL;
	int64_t t188 = -701481364501620LL;

    t188 = (((x781==x782)/x783)%x784);

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x785 = INT16_MAX;
	int8_t x787 = 1;
	volatile uint16_t x788 = 10U;
	int32_t t189 = 4134658;

    t189 = (((x785==x786)/x787)%x788);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x789 = 371277905U;
	volatile uint32_t x790 = 317241U;
	volatile int32_t x791 = INT32_MAX;

    t190 = (((x789==x790)/x791)%x792);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x793 = INT64_MAX;
	int16_t x794 = -1;
	int64_t x795 = INT64_MAX;
	int64_t x796 = INT64_MAX;
	volatile int64_t t191 = 1LL;

    t191 = (((x793==x794)/x795)%x796);

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x797 = UINT8_MAX;
	volatile int8_t x799 = INT8_MAX;
	volatile uint16_t x800 = 245U;
	int32_t t192 = 0;

    t192 = (((x797==x798)/x799)%x800);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x801 = -1;
	int64_t x802 = -1LL;
	int32_t x803 = INT32_MAX;
	int8_t x804 = -1;
	volatile int32_t t193 = 0;

    t193 = (((x801==x802)/x803)%x804);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x805 = -7530185064LL;
	int32_t x806 = -1;
	int64_t x807 = -1LL;
	int8_t x808 = INT8_MIN;
	volatile int64_t t194 = 9920007LL;

    t194 = (((x805==x806)/x807)%x808);

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x809 = UINT32_MAX;
	int64_t x810 = 874628491151LL;
	volatile int8_t x811 = -1;
	static int16_t x812 = -1829;

    t195 = (((x809==x810)/x811)%x812);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x814 = 85;
	int64_t x815 = INT64_MAX;
	uint64_t x816 = 3726782471170LLU;

    t196 = (((x813==x814)/x815)%x816);

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x818 = INT64_MAX;
	int32_t x819 = -153742580;
	volatile int32_t t197 = 11356;

    t197 = (((x817==x818)/x819)%x820);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x821 = -922862280917LL;
	uint16_t x822 = UINT16_MAX;
	uint64_t x824 = 255939681970LLU;
	volatile uint64_t t198 = 350651794057212638LLU;

    t198 = (((x821==x822)/x823)%x824);

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x825 = INT8_MAX;
	int64_t x826 = 0LL;
	volatile int16_t x827 = INT16_MIN;
	uint8_t x828 = UINT8_MAX;

    t199 = (((x825==x826)/x827)%x828);

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


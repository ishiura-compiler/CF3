
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

static volatile int32_t t0 = 1;
uint8_t x6 = 5U;
uint16_t x13 = 1184U;
int64_t x15 = 23086354686877LL;
int16_t x17 = INT16_MIN;
int8_t x19 = INT8_MIN;
volatile int64_t x20 = INT64_MIN;
volatile uint8_t x28 = UINT8_MAX;
int64_t x29 = -1LL;
uint16_t x35 = 101U;
volatile int32_t x44 = INT32_MIN;
volatile int64_t x47 = 3917445207LL;
static int8_t x48 = INT8_MIN;
static volatile int32_t t11 = -2989;
static uint32_t x53 = UINT32_MAX;
volatile uint32_t x61 = 43U;
static volatile uint32_t x64 = 223U;
int16_t x68 = INT16_MIN;
static int64_t x69 = 57951458713451601LL;
int16_t x72 = -644;
uint64_t x79 = 288005518668588LLU;
uint8_t x83 = UINT8_MAX;
static volatile int32_t t20 = -65041906;
int64_t x88 = -1LL;
volatile uint64_t x96 = 323147322LLU;
int16_t x97 = INT16_MIN;
uint64_t x99 = UINT64_MAX;
int16_t x101 = INT16_MIN;
int16_t x107 = INT16_MIN;
uint32_t x108 = UINT32_MAX;
volatile int16_t x122 = -1;
static int32_t t29 = 54970058;
int8_t x125 = INT8_MIN;
uint8_t x128 = UINT8_MAX;
volatile int32_t t30 = -21;
volatile int64_t t32 = 1LL;
int64_t x142 = -1LL;
int8_t x143 = INT8_MIN;
static int64_t x146 = INT64_MIN;
static volatile int8_t x154 = 29;
static uint64_t x155 = 92LLU;
static int8_t x163 = INT8_MIN;
volatile int32_t x174 = INT32_MAX;
volatile int32_t x187 = INT32_MIN;
volatile int64_t x201 = 148LL;
int32_t t46 = -2059;
uint8_t x205 = 3U;
int16_t x206 = INT16_MAX;
static uint16_t x212 = UINT16_MAX;
uint16_t x213 = UINT16_MAX;
static uint16_t x217 = 28202U;
uint64_t x221 = 0LLU;
volatile int8_t x222 = -1;
int32_t x242 = INT32_MIN;
static int64_t x254 = 1078622942911776LL;
uint16_t x256 = UINT16_MAX;
volatile int8_t x258 = INT8_MIN;
uint64_t x259 = UINT64_MAX;
int32_t t60 = -19;
int64_t x264 = INT64_MIN;
uint32_t x266 = 3623U;
uint64_t x272 = 1641267421LLU;
volatile uint64_t t63 = 317LLU;
int64_t x280 = -826247225LL;
uint8_t x292 = UINT8_MAX;
volatile int32_t t67 = 338204905;
int16_t x293 = INT16_MIN;
static int16_t x294 = -424;
int64_t x300 = INT64_MIN;
static int8_t x302 = INT8_MIN;
static volatile int16_t x305 = INT16_MIN;
int32_t t71 = 11389926;
int64_t x312 = INT64_MAX;
int8_t x318 = -2;
int32_t x328 = -18;
int32_t x338 = -1;
static uint8_t x341 = 1U;
uint16_t x344 = UINT16_MAX;
static int64_t x349 = 1582934LL;
static uint32_t x350 = UINT32_MAX;
int32_t x354 = -1;
int16_t x357 = 27;
static int8_t x360 = INT8_MIN;
static int16_t x361 = -110;
static int8_t x364 = INT8_MIN;
volatile uint8_t x373 = 27U;
static volatile int32_t x374 = INT32_MAX;
int64_t x380 = 525LL;
static int32_t x382 = 7314;
volatile uint8_t x388 = UINT8_MAX;
int8_t x391 = -1;
int16_t x393 = INT16_MIN;
int64_t x396 = INT64_MIN;
int64_t t92 = 506601637493LL;
static int32_t t93 = -15072;
volatile int64_t t94 = 11450736LL;
int64_t x406 = INT64_MIN;
uint16_t x413 = UINT16_MAX;
int16_t x417 = -4;
int32_t x425 = -1;
volatile int16_t x431 = INT16_MIN;
static int16_t x433 = INT16_MIN;
int32_t t101 = 2134229;
int32_t x437 = 3208;
uint32_t x447 = UINT32_MAX;
uint16_t x451 = 20135U;
int32_t t105 = -1936;
static int16_t x454 = -1;
int32_t x461 = INT32_MIN;
uint64_t x462 = UINT64_MAX;
volatile uint64_t t108 = 10355223081947LLU;
uint32_t x471 = 419U;
int64_t x476 = INT64_MAX;
int32_t x486 = INT32_MIN;
int8_t x487 = INT8_MAX;
int32_t t115 = 28;
int32_t x494 = INT32_MIN;
volatile uint8_t x495 = 31U;
int32_t x506 = INT32_MIN;
static int8_t x515 = INT8_MIN;
int8_t x516 = INT8_MIN;
volatile int64_t x520 = INT64_MAX;
volatile int64_t x528 = INT64_MIN;
int64_t t124 = -393858627326336383LL;
uint32_t x530 = 251956U;
uint64_t x534 = 3LLU;
int64_t x539 = -1495LL;
static uint8_t x542 = UINT8_MAX;
int64_t x544 = -7514513604107871LL;
static int8_t x552 = -12;
volatile int64_t x561 = -2446684LL;
volatile int64_t t137 = -252939758986LL;
uint64_t x582 = UINT64_MAX;
static int16_t x588 = -4130;
volatile int32_t t140 = -87;
uint32_t x605 = 193500653U;
int64_t t143 = -2232702792LL;
static uint16_t x610 = UINT16_MAX;
static int64_t x611 = -1LL;
static int64_t x620 = INT64_MAX;
int32_t x635 = INT32_MIN;
int64_t x636 = 157864217306071LL;
volatile int64_t t149 = 11926133761891LL;
int8_t x637 = -47;
static int16_t x645 = -1;
int32_t x648 = -45184788;
int32_t t152 = -7;
int32_t x650 = INT32_MIN;
uint32_t x652 = UINT32_MAX;
int8_t x661 = INT8_MIN;
int16_t x664 = -255;
volatile int64_t t159 = 1016462475760481LL;
int64_t x684 = -467180LL;
int32_t x694 = INT32_MIN;
volatile uint8_t x698 = 3U;
int32_t t165 = 148157;
int32_t x705 = -1;
static volatile int32_t t167 = 63;
uint16_t x710 = UINT16_MAX;
volatile int32_t x716 = INT32_MIN;
int16_t x718 = -1;
volatile uint32_t t170 = 294559223U;
static int64_t x721 = -454373760044LL;
int8_t x722 = INT8_MIN;
volatile int64_t t171 = 1676LL;
static volatile int32_t t173 = 1;
static int16_t x738 = 198;
volatile int64_t t174 = -1LL;
int8_t x744 = INT8_MIN;
int32_t t175 = -199040260;
volatile uint64_t x746 = UINT64_MAX;
int64_t x752 = -1LL;
static int8_t x755 = INT8_MAX;
uint64_t x756 = 775LLU;
static volatile uint64_t t178 = 17623182LLU;
int32_t x758 = INT32_MIN;
uint8_t x761 = UINT8_MAX;
int16_t x776 = INT16_MIN;
int32_t x784 = 30536;
uint8_t x789 = 18U;
volatile int8_t x796 = INT8_MAX;
int16_t x798 = 1036;
int32_t x800 = -3837486;
int16_t x801 = -1;
static int64_t x802 = -1LL;
int32_t x806 = 160772977;
int8_t x811 = INT8_MIN;
volatile int16_t x819 = 3;
volatile uint32_t x822 = 26814U;
uint16_t x828 = 4509U;
int8_t x829 = INT8_MAX;
static int64_t x831 = -1LL;
int8_t x833 = -38;
static volatile uint16_t x834 = UINT16_MAX;
int64_t x836 = INT64_MIN;
uint16_t x838 = UINT16_MAX;
int8_t x842 = 12;
volatile uint16_t x846 = 1692U;
uint32_t t199 = 3U;


void f0(void) {
    	int8_t x1 = INT8_MAX;
	uint8_t x2 = 7U;
	int64_t x3 = 2127842137647713LL;
	uint8_t x4 = 7U;

    t0 = ((x1==(x2/x3))%x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MAX;
	int16_t x7 = -23;
	int16_t x8 = INT16_MAX;
	int32_t t1 = 0;

    t1 = ((x5==(x6/x7))%x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = 12;
	int64_t x10 = INT64_MIN;
	static uint32_t x11 = UINT32_MAX;
	volatile uint32_t x12 = UINT32_MAX;
	uint32_t t2 = 4265U;

    t2 = ((x9==(x10/x11))%x12);

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x14 = INT16_MIN;
	uint64_t x16 = 230054675966LLU;
	volatile uint64_t t3 = 2027511296388LLU;

    t3 = ((x13==(x14/x15))%x16);

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x18 = INT8_MIN;
	int64_t t4 = -234426827569599848LL;

    t4 = ((x17==(x18/x19))%x20);

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MIN;
	int16_t x22 = INT16_MIN;
	int8_t x23 = -1;
	uint16_t x24 = UINT16_MAX;
	volatile int32_t t5 = 537657990;

    t5 = ((x21==(x22/x23))%x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = INT8_MIN;
	volatile int16_t x26 = 7;
	int32_t x27 = 17631;
	volatile int32_t t6 = 6;

    t6 = ((x25==(x26/x27))%x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x30 = INT64_MAX;
	int32_t x31 = INT32_MIN;
	uint32_t x32 = 444326U;
	static volatile uint32_t t7 = 8U;

    t7 = ((x29==(x30/x31))%x32);

    if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MAX;
	int32_t x34 = INT32_MIN;
	int8_t x36 = 4;
	static volatile int32_t t8 = -16;

    t8 = ((x33==(x34/x35))%x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MIN;
	static int64_t x38 = INT64_MIN;
	int64_t x39 = 424124500LL;
	volatile int32_t x40 = INT32_MIN;
	volatile int32_t t9 = -18139;

    t9 = ((x37==(x38/x39))%x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint8_t x41 = UINT8_MAX;
	int64_t x42 = INT64_MAX;
	int8_t x43 = -8;
	int32_t t10 = 30692;

    t10 = ((x41==(x42/x43))%x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x45 = INT8_MIN;
	static int32_t x46 = -1;

    t11 = ((x45==(x46/x47))%x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x49 = -2;
	uint64_t x50 = 7395744244521454359LLU;
	int32_t x51 = -1;
	static int16_t x52 = 1747;
	volatile int32_t t12 = -21069;

    t12 = ((x49==(x50/x51))%x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x54 = 893U;
	int8_t x55 = -1;
	volatile int16_t x56 = INT16_MIN;
	int32_t t13 = -281800450;

    t13 = ((x53==(x54/x55))%x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x57 = 2U;
	int64_t x58 = -1774601099586535LL;
	volatile uint64_t x59 = 237198962LLU;
	uint8_t x60 = 88U;
	int32_t t14 = 56993;

    t14 = ((x57==(x58/x59))%x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x62 = UINT64_MAX;
	int8_t x63 = -9;
	uint32_t t15 = 131U;

    t15 = ((x61==(x62/x63))%x64);

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x65 = -1;
	volatile int64_t x66 = -219733016459220650LL;
	int64_t x67 = -21LL;
	static volatile int32_t t16 = 4950180;

    t16 = ((x65==(x66/x67))%x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x70 = INT16_MIN;
	int32_t x71 = 6495833;
	volatile int32_t t17 = -3757;

    t17 = ((x69==(x70/x71))%x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MAX;
	int32_t x74 = -9642224;
	int8_t x75 = INT8_MAX;
	int8_t x76 = -10;
	volatile int32_t t18 = -7923102;

    t18 = ((x73==(x74/x75))%x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = -1;
	uint32_t x78 = 7U;
	uint16_t x80 = UINT16_MAX;
	volatile int32_t t19 = 941;

    t19 = ((x77==(x78/x79))%x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x81 = -1;
	static uint16_t x82 = 1683U;
	static int16_t x84 = INT16_MAX;

    t20 = ((x81==(x82/x83))%x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = INT64_MIN;
	int32_t x86 = INT32_MIN;
	int32_t x87 = INT32_MIN;
	int64_t t21 = -4389746027LL;

    t21 = ((x85==(x86/x87))%x88);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x93 = -1;
	int16_t x94 = INT16_MAX;
	int8_t x95 = -1;
	uint64_t t22 = 237899LLU;

    t22 = ((x93==(x94/x95))%x96);

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int8_t x98 = INT8_MAX;
	volatile int32_t x100 = INT32_MAX;
	int32_t t23 = 19840451;

    t23 = ((x97==(x98/x99))%x100);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x102 = INT32_MIN;
	volatile uint8_t x103 = 23U;
	static int8_t x104 = INT8_MIN;
	int32_t t24 = 81260880;

    t24 = ((x101==(x102/x103))%x104);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x105 = INT32_MAX;
	volatile int8_t x106 = -7;
	uint32_t t25 = 109380U;

    t25 = ((x105==(x106/x107))%x108);

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x109 = -1;
	int8_t x110 = -1;
	int8_t x111 = INT8_MIN;
	uint16_t x112 = 1U;
	volatile int32_t t26 = 275378543;

    t26 = ((x109==(x110/x111))%x112);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x113 = INT32_MIN;
	static volatile int64_t x114 = INT64_MIN;
	int16_t x115 = 80;
	uint32_t x116 = 139547U;
	uint32_t t27 = 10U;

    t27 = ((x113==(x114/x115))%x116);

    if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x117 = -25;
	int64_t x118 = INT64_MIN;
	uint16_t x119 = UINT16_MAX;
	int16_t x120 = INT16_MIN;
	volatile int32_t t28 = 1383;

    t28 = ((x117==(x118/x119))%x120);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x121 = 6U;
	static uint16_t x123 = UINT16_MAX;
	volatile int32_t x124 = INT32_MAX;

    t29 = ((x121==(x122/x123))%x124);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x126 = 10U;
	static uint32_t x127 = 10785964U;

    t30 = ((x125==(x126/x127))%x128);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile uint16_t x133 = UINT16_MAX;
	static int32_t x134 = -1;
	int8_t x135 = INT8_MIN;
	volatile int32_t x136 = -1;
	static int32_t t31 = -9928060;

    t31 = ((x133==(x134/x135))%x136);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x137 = -1LL;
	static int16_t x138 = INT16_MIN;
	int8_t x139 = 2;
	static int64_t x140 = INT64_MIN;

    t32 = ((x137==(x138/x139))%x140);

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x141 = INT64_MAX;
	int16_t x144 = INT16_MAX;
	static int32_t t33 = -621845;

    t33 = ((x141==(x142/x143))%x144);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x145 = 3638;
	volatile uint16_t x147 = UINT16_MAX;
	int64_t x148 = INT64_MIN;
	volatile int64_t t34 = -3832112LL;

    t34 = ((x145==(x146/x147))%x148);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x149 = INT32_MIN;
	int16_t x150 = -8;
	int32_t x151 = INT32_MIN;
	int8_t x152 = -1;
	static volatile int32_t t35 = -1;

    t35 = ((x149==(x150/x151))%x152);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint8_t x153 = 9U;
	static int8_t x156 = -1;
	static volatile int32_t t36 = 15738;

    t36 = ((x153==(x154/x155))%x156);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x157 = INT32_MAX;
	uint64_t x158 = UINT64_MAX;
	uint32_t x159 = 5162U;
	uint8_t x160 = 6U;
	volatile int32_t t37 = -86439;

    t37 = ((x157==(x158/x159))%x160);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x161 = INT16_MAX;
	uint32_t x162 = 360146819U;
	int8_t x164 = -1;
	int32_t t38 = -443;

    t38 = ((x161==(x162/x163))%x164);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile uint8_t x169 = 4U;
	int8_t x170 = INT8_MIN;
	uint8_t x171 = UINT8_MAX;
	volatile uint16_t x172 = 29569U;
	static int32_t t39 = -24061;

    t39 = ((x169==(x170/x171))%x172);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x173 = 3469378439416452LL;
	uint32_t x175 = 15U;
	int32_t x176 = INT32_MIN;
	static int32_t t40 = -12177;

    t40 = ((x173==(x174/x175))%x176);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int8_t x177 = INT8_MAX;
	uint8_t x178 = UINT8_MAX;
	int16_t x179 = INT16_MAX;
	int8_t x180 = INT8_MIN;
	int32_t t41 = -3780754;

    t41 = ((x177==(x178/x179))%x180);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x185 = INT32_MIN;
	volatile int64_t x186 = 87917437LL;
	int32_t x188 = INT32_MAX;
	int32_t t42 = -82626347;

    t42 = ((x185==(x186/x187))%x188);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x189 = 7;
	uint32_t x190 = 6U;
	int32_t x191 = 50908798;
	static volatile int16_t x192 = -262;
	int32_t t43 = -40;

    t43 = ((x189==(x190/x191))%x192);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x193 = 634965U;
	volatile uint64_t x194 = 423101LLU;
	int8_t x195 = -1;
	int16_t x196 = INT16_MIN;
	static int32_t t44 = 1176;

    t44 = ((x193==(x194/x195))%x196);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x197 = -230;
	volatile int32_t x198 = -1;
	int16_t x199 = INT16_MIN;
	volatile int32_t x200 = -1;
	volatile int32_t t45 = -109;

    t45 = ((x197==(x198/x199))%x200);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint16_t x202 = UINT16_MAX;
	int16_t x203 = 288;
	uint16_t x204 = 16539U;

    t46 = ((x201==(x202/x203))%x204);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x207 = 261096153LLU;
	uint32_t x208 = UINT32_MAX;
	volatile uint32_t t47 = 192U;

    t47 = ((x205==(x206/x207))%x208);

    if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int8_t x209 = INT8_MIN;
	int8_t x210 = INT8_MIN;
	int32_t x211 = INT32_MAX;
	volatile int32_t t48 = 336202437;

    t48 = ((x209==(x210/x211))%x212);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x214 = -1;
	static uint8_t x215 = 1U;
	volatile uint16_t x216 = 165U;
	int32_t t49 = -433469058;

    t49 = ((x213==(x214/x215))%x216);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x218 = INT16_MIN;
	static int32_t x219 = INT32_MAX;
	static volatile int16_t x220 = INT16_MIN;
	volatile int32_t t50 = 3;

    t50 = ((x217==(x218/x219))%x220);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x223 = 3;
	int8_t x224 = 1;
	int32_t t51 = 69058;

    t51 = ((x221==(x222/x223))%x224);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x225 = UINT32_MAX;
	static int32_t x226 = INT32_MIN;
	int64_t x227 = -563LL;
	static uint64_t x228 = 489LLU;
	volatile uint64_t t52 = 164172773822270646LLU;

    t52 = ((x225==(x226/x227))%x228);

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x229 = 12;
	static int16_t x230 = -1;
	static int64_t x231 = -65064253045067LL;
	int64_t x232 = -5LL;
	volatile int64_t t53 = 0LL;

    t53 = ((x229==(x230/x231))%x232);

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x233 = -10569;
	int8_t x234 = INT8_MIN;
	int16_t x235 = -11684;
	int16_t x236 = 3085;
	static volatile int32_t t54 = -100673;

    t54 = ((x233==(x234/x235))%x236);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int64_t x237 = -1LL;
	int64_t x238 = INT64_MIN;
	volatile int32_t x239 = 40893118;
	int32_t x240 = -1;
	int32_t t55 = 4;

    t55 = ((x237==(x238/x239))%x240);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x241 = 134088995;
	static int64_t x243 = INT64_MIN;
	int32_t x244 = -1;
	volatile int32_t t56 = -29801;

    t56 = ((x241==(x242/x243))%x244);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x245 = INT64_MAX;
	int64_t x246 = INT64_MIN;
	int16_t x247 = INT16_MIN;
	uint32_t x248 = 3U;
	uint32_t t57 = 11479U;

    t57 = ((x245==(x246/x247))%x248);

    if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint8_t x249 = UINT8_MAX;
	int8_t x250 = 44;
	static int64_t x251 = 9LL;
	int32_t x252 = INT32_MAX;
	int32_t t58 = 7178;

    t58 = ((x249==(x250/x251))%x252);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x253 = INT8_MAX;
	int8_t x255 = 45;
	volatile int32_t t59 = -493986727;

    t59 = ((x253==(x254/x255))%x256);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x257 = 985972089LL;
	int32_t x260 = INT32_MAX;

    t60 = ((x257==(x258/x259))%x260);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x261 = -1;
	volatile uint64_t x262 = 57114144709LLU;
	int16_t x263 = INT16_MIN;
	volatile int64_t t61 = 3LL;

    t61 = ((x261==(x262/x263))%x264);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x265 = 822U;
	int32_t x267 = INT32_MAX;
	uint8_t x268 = 2U;
	int32_t t62 = -178389871;

    t62 = ((x265==(x266/x267))%x268);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x269 = INT8_MAX;
	uint32_t x270 = 1378U;
	static int16_t x271 = 4466;

    t63 = ((x269==(x270/x271))%x272);

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x273 = INT32_MIN;
	int16_t x274 = 6128;
	uint8_t x275 = 6U;
	int64_t x276 = -1LL;
	int64_t t64 = 801307660906LL;

    t64 = ((x273==(x274/x275))%x276);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x277 = -4076;
	int64_t x278 = INT64_MAX;
	int64_t x279 = INT64_MAX;
	volatile int64_t t65 = -9440444069206LL;

    t65 = ((x277==(x278/x279))%x280);

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x281 = INT32_MIN;
	int32_t x282 = INT32_MAX;
	static int32_t x283 = INT32_MIN;
	int8_t x284 = -38;
	int32_t t66 = -70658;

    t66 = ((x281==(x282/x283))%x284);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x289 = INT16_MIN;
	uint16_t x290 = 61U;
	int16_t x291 = INT16_MAX;

    t67 = ((x289==(x290/x291))%x292);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x295 = INT8_MIN;
	int8_t x296 = 11;
	volatile int32_t t68 = 1;

    t68 = ((x293==(x294/x295))%x296);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x297 = INT8_MIN;
	int16_t x298 = INT16_MIN;
	static int8_t x299 = -1;
	volatile int64_t t69 = -55415069LL;

    t69 = ((x297==(x298/x299))%x300);

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x301 = -1094576454676LL;
	int64_t x303 = INT64_MIN;
	int32_t x304 = INT32_MIN;
	volatile int32_t t70 = 3330;

    t70 = ((x301==(x302/x303))%x304);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x306 = INT32_MIN;
	int16_t x307 = INT16_MIN;
	int16_t x308 = INT16_MAX;

    t71 = ((x305==(x306/x307))%x308);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x309 = INT32_MAX;
	static int32_t x310 = INT32_MIN;
	uint8_t x311 = UINT8_MAX;
	static volatile int64_t t72 = -1019337885002122LL;

    t72 = ((x309==(x310/x311))%x312);

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint64_t x313 = 2724415078LLU;
	int16_t x314 = 0;
	volatile int64_t x315 = -1145LL;
	volatile int32_t x316 = INT32_MIN;
	volatile int32_t t73 = 126805563;

    t73 = ((x313==(x314/x315))%x316);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x317 = INT64_MIN;
	uint64_t x319 = 131278013731413LLU;
	int8_t x320 = INT8_MIN;
	int32_t t74 = -1915609;

    t74 = ((x317==(x318/x319))%x320);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x321 = -1;
	int64_t x322 = 12198461711LL;
	volatile uint32_t x323 = 6716U;
	int32_t x324 = INT32_MAX;
	int32_t t75 = -1399;

    t75 = ((x321==(x322/x323))%x324);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x325 = INT32_MAX;
	uint64_t x326 = UINT64_MAX;
	volatile uint16_t x327 = UINT16_MAX;
	volatile int32_t t76 = 72;

    t76 = ((x325==(x326/x327))%x328);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x329 = INT32_MIN;
	uint8_t x330 = 4U;
	uint8_t x331 = 64U;
	uint8_t x332 = UINT8_MAX;
	volatile int32_t t77 = -157;

    t77 = ((x329==(x330/x331))%x332);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x337 = 3;
	volatile int16_t x339 = INT16_MIN;
	int8_t x340 = INT8_MAX;
	int32_t t78 = -3;

    t78 = ((x337==(x338/x339))%x340);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x342 = 1;
	int64_t x343 = -21857633579LL;
	volatile int32_t t79 = 55;

    t79 = ((x341==(x342/x343))%x344);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x345 = -1;
	int8_t x346 = -1;
	volatile int8_t x347 = INT8_MAX;
	static int64_t x348 = INT64_MIN;
	int64_t t80 = -1539030602886519340LL;

    t80 = ((x345==(x346/x347))%x348);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x351 = 78414443U;
	static int16_t x352 = INT16_MIN;
	volatile int32_t t81 = -7272924;

    t81 = ((x349==(x350/x351))%x352);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x353 = INT64_MAX;
	int64_t x355 = 543179954532253LL;
	int8_t x356 = INT8_MAX;
	volatile int32_t t82 = -1;

    t82 = ((x353==(x354/x355))%x356);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint16_t x358 = 763U;
	static int64_t x359 = INT64_MAX;
	int32_t t83 = 1987;

    t83 = ((x357==(x358/x359))%x360);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x362 = INT16_MAX;
	volatile int8_t x363 = INT8_MIN;
	volatile int32_t t84 = 128;

    t84 = ((x361==(x362/x363))%x364);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint16_t x365 = UINT16_MAX;
	int32_t x366 = INT32_MIN;
	volatile int64_t x367 = -30887LL;
	int8_t x368 = 1;
	volatile int32_t t85 = 1003346300;

    t85 = ((x365==(x366/x367))%x368);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x369 = UINT64_MAX;
	int8_t x370 = INT8_MAX;
	int16_t x371 = INT16_MIN;
	uint8_t x372 = 98U;
	volatile int32_t t86 = 0;

    t86 = ((x369==(x370/x371))%x372);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x375 = 21858276362069643LLU;
	uint64_t x376 = UINT64_MAX;
	volatile uint64_t t87 = 17387110261014LLU;

    t87 = ((x373==(x374/x375))%x376);

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x377 = INT16_MIN;
	static uint8_t x378 = 26U;
	volatile uint64_t x379 = 487650865153LLU;
	int64_t t88 = -149648LL;

    t88 = ((x377==(x378/x379))%x380);

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x381 = 21297U;
	int8_t x383 = INT8_MIN;
	uint8_t x384 = UINT8_MAX;
	volatile int32_t t89 = -3137;

    t89 = ((x381==(x382/x383))%x384);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x385 = INT8_MIN;
	int64_t x386 = 6802LL;
	volatile int16_t x387 = -379;
	int32_t t90 = 253109;

    t90 = ((x385==(x386/x387))%x388);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint16_t x389 = UINT16_MAX;
	int8_t x390 = INT8_MIN;
	int32_t x392 = INT32_MAX;
	static int32_t t91 = 175;

    t91 = ((x389==(x390/x391))%x392);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x394 = -84;
	volatile int16_t x395 = INT16_MIN;

    t92 = ((x393==(x394/x395))%x396);

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x397 = -1532LL;
	uint64_t x398 = 7785153678467486919LLU;
	int16_t x399 = INT16_MAX;
	volatile int32_t x400 = -1;

    t93 = ((x397==(x398/x399))%x400);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x401 = INT8_MIN;
	int32_t x402 = -1;
	uint16_t x403 = 159U;
	int64_t x404 = INT64_MIN;

    t94 = ((x401==(x402/x403))%x404);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x405 = INT8_MAX;
	int64_t x407 = -1889747908LL;
	volatile uint16_t x408 = 547U;
	int32_t t95 = -1;

    t95 = ((x405==(x406/x407))%x408);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint16_t x414 = 6568U;
	int16_t x415 = INT16_MAX;
	int64_t x416 = INT64_MIN;
	volatile int64_t t96 = 21LL;

    t96 = ((x413==(x414/x415))%x416);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x418 = -1;
	volatile int8_t x419 = INT8_MIN;
	int16_t x420 = INT16_MIN;
	volatile int32_t t97 = -116;

    t97 = ((x417==(x418/x419))%x420);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x421 = INT64_MIN;
	volatile uint8_t x422 = 1U;
	static int64_t x423 = -1LL;
	uint8_t x424 = UINT8_MAX;
	volatile int32_t t98 = 999576311;

    t98 = ((x421==(x422/x423))%x424);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x426 = -1;
	volatile int16_t x427 = 1489;
	volatile int64_t x428 = -1LL;
	int64_t t99 = -108776738913887LL;

    t99 = ((x425==(x426/x427))%x428);

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x429 = INT16_MIN;
	int64_t x430 = INT64_MAX;
	uint16_t x432 = UINT16_MAX;
	volatile int32_t t100 = -48;

    t100 = ((x429==(x430/x431))%x432);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x434 = 67367579463487LLU;
	int32_t x435 = INT32_MIN;
	int32_t x436 = -1;

    t101 = ((x433==(x434/x435))%x436);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x438 = 0U;
	volatile int8_t x439 = INT8_MAX;
	volatile int8_t x440 = 1;
	volatile int32_t t102 = 14485440;

    t102 = ((x437==(x438/x439))%x440);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x441 = UINT8_MAX;
	uint64_t x442 = 1570015662858659LLU;
	volatile int64_t x443 = 698LL;
	int32_t x444 = INT32_MIN;
	int32_t t103 = -3710361;

    t103 = ((x441==(x442/x443))%x444);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x445 = 905520833541LLU;
	int16_t x446 = INT16_MIN;
	int32_t x448 = -44299394;
	int32_t t104 = -231;

    t104 = ((x445==(x446/x447))%x448);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x449 = 7244U;
	volatile int8_t x450 = -1;
	int32_t x452 = -1;

    t105 = ((x449==(x450/x451))%x452);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint32_t x453 = 0U;
	static int16_t x455 = -1;
	uint16_t x456 = 9U;
	int32_t t106 = 10812701;

    t106 = ((x453==(x454/x455))%x456);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint16_t x457 = 24U;
	int8_t x458 = -1;
	static int64_t x459 = -1LL;
	int32_t x460 = INT32_MIN;
	static int32_t t107 = -14673;

    t107 = ((x457==(x458/x459))%x460);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x463 = -7;
	uint64_t x464 = 238737446LLU;

    t108 = ((x461==(x462/x463))%x464);

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint32_t x465 = 879335143U;
	uint16_t x466 = 14440U;
	volatile int16_t x467 = -1;
	int16_t x468 = -3;
	int32_t t109 = 26898;

    t109 = ((x465==(x466/x467))%x468);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x469 = -323141865;
	int64_t x470 = INT64_MAX;
	int64_t x472 = -26LL;
	volatile int64_t t110 = 1869578057233LL;

    t110 = ((x469==(x470/x471))%x472);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x473 = INT32_MAX;
	volatile int8_t x474 = INT8_MAX;
	int64_t x475 = INT64_MIN;
	int64_t t111 = -1LL;

    t111 = ((x473==(x474/x475))%x476);

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int32_t x477 = INT32_MAX;
	int64_t x478 = INT64_MIN;
	uint8_t x479 = 80U;
	volatile uint16_t x480 = 14U;
	volatile int32_t t112 = -58466;

    t112 = ((x477==(x478/x479))%x480);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x481 = INT8_MIN;
	uint64_t x482 = 14856343113203709LLU;
	int16_t x483 = INT16_MIN;
	int32_t x484 = 23949302;
	volatile int32_t t113 = -16017522;

    t113 = ((x481==(x482/x483))%x484);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint16_t x485 = 7727U;
	int8_t x488 = INT8_MAX;
	int32_t t114 = -75405305;

    t114 = ((x485==(x486/x487))%x488);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x489 = INT32_MIN;
	uint8_t x490 = 96U;
	static volatile int64_t x491 = INT64_MIN;
	volatile int32_t x492 = INT32_MIN;

    t115 = ((x489==(x490/x491))%x492);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x493 = 471;
	int64_t x496 = -1LL;
	int64_t t116 = -725919LL;

    t116 = ((x493==(x494/x495))%x496);

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x497 = INT64_MIN;
	static volatile int8_t x498 = INT8_MIN;
	static uint8_t x499 = 2U;
	uint16_t x500 = 12U;
	int32_t t117 = -25468;

    t117 = ((x497==(x498/x499))%x500);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x501 = INT64_MIN;
	int64_t x502 = INT64_MAX;
	volatile int8_t x503 = INT8_MIN;
	int32_t x504 = -141198342;
	volatile int32_t t118 = -1262;

    t118 = ((x501==(x502/x503))%x504);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x505 = -1;
	volatile int64_t x507 = INT64_MIN;
	int16_t x508 = INT16_MIN;
	int32_t t119 = 3;

    t119 = ((x505==(x506/x507))%x508);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x509 = 9354476U;
	static volatile int16_t x510 = -1;
	int64_t x511 = -146008449LL;
	volatile int16_t x512 = INT16_MIN;
	volatile int32_t t120 = 23738;

    t120 = ((x509==(x510/x511))%x512);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x513 = -1;
	static volatile int8_t x514 = -1;
	int32_t t121 = 398;

    t121 = ((x513==(x514/x515))%x516);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint8_t x517 = 0U;
	uint32_t x518 = UINT32_MAX;
	uint32_t x519 = UINT32_MAX;
	volatile int64_t t122 = 1005109554736758LL;

    t122 = ((x517==(x518/x519))%x520);

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x521 = -612;
	uint64_t x522 = 35540909888869558LLU;
	uint64_t x523 = 30334LLU;
	volatile uint8_t x524 = 29U;
	volatile int32_t t123 = -114783;

    t123 = ((x521==(x522/x523))%x524);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x525 = INT16_MIN;
	static int8_t x526 = INT8_MIN;
	int64_t x527 = INT64_MAX;

    t124 = ((x525==(x526/x527))%x528);

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x529 = 3325701009445LLU;
	int32_t x531 = -1;
	int16_t x532 = INT16_MIN;
	volatile int32_t t125 = -112115;

    t125 = ((x529==(x530/x531))%x532);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int8_t x533 = 52;
	static uint8_t x535 = UINT8_MAX;
	int16_t x536 = 1;
	int32_t t126 = 2;

    t126 = ((x533==(x534/x535))%x536);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x537 = INT16_MIN;
	static uint32_t x538 = UINT32_MAX;
	int8_t x540 = 3;
	volatile int32_t t127 = -211658;

    t127 = ((x537==(x538/x539))%x540);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x541 = 58U;
	volatile int32_t x543 = INT32_MIN;
	int64_t t128 = 1844225716802LL;

    t128 = ((x541==(x542/x543))%x544);

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x545 = 278U;
	uint64_t x546 = 25559494069518LLU;
	volatile uint8_t x547 = UINT8_MAX;
	int32_t x548 = -1;
	int32_t t129 = -83651546;

    t129 = ((x545==(x546/x547))%x548);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x549 = 449293755LLU;
	int16_t x550 = -1;
	volatile int32_t x551 = 1;
	volatile int32_t t130 = -6966;

    t130 = ((x549==(x550/x551))%x552);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x553 = INT32_MAX;
	uint16_t x554 = 0U;
	volatile int16_t x555 = -1;
	static volatile uint32_t x556 = 162991903U;
	static uint32_t t131 = 256680U;

    t131 = ((x553==(x554/x555))%x556);

    if (t131 != 0U) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x557 = 106198994U;
	static int8_t x558 = -32;
	int8_t x559 = INT8_MIN;
	volatile uint32_t x560 = UINT32_MAX;
	uint32_t t132 = 6424253U;

    t132 = ((x557==(x558/x559))%x560);

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x562 = -1;
	static uint64_t x563 = 13LLU;
	int32_t x564 = 1;
	volatile int32_t t133 = 9873669;

    t133 = ((x561==(x562/x563))%x564);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x565 = INT32_MIN;
	int16_t x566 = 2;
	static int16_t x567 = -79;
	static uint8_t x568 = 110U;
	int32_t t134 = 605;

    t134 = ((x565==(x566/x567))%x568);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x569 = 333684654965LL;
	int32_t x570 = INT32_MAX;
	static int32_t x571 = INT32_MIN;
	int8_t x572 = INT8_MIN;
	volatile int32_t t135 = -3071;

    t135 = ((x569==(x570/x571))%x572);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x573 = 1U;
	int64_t x574 = INT64_MAX;
	volatile int32_t x575 = INT32_MAX;
	int32_t x576 = INT32_MIN;
	volatile int32_t t136 = -41513705;

    t136 = ((x573==(x574/x575))%x576);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x577 = -1;
	static uint16_t x578 = UINT16_MAX;
	int8_t x579 = INT8_MIN;
	int64_t x580 = INT64_MIN;

    t137 = ((x577==(x578/x579))%x580);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x581 = 1U;
	int16_t x583 = INT16_MIN;
	static int8_t x584 = 1;
	static volatile int32_t t138 = 15;

    t138 = ((x581==(x582/x583))%x584);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x585 = UINT8_MAX;
	int64_t x586 = INT64_MIN;
	static uint64_t x587 = 734332LLU;
	int32_t t139 = -8784;

    t139 = ((x585==(x586/x587))%x588);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int64_t x589 = INT64_MIN;
	volatile uint32_t x590 = 110034U;
	volatile uint16_t x591 = 19027U;
	static int16_t x592 = INT16_MIN;

    t140 = ((x589==(x590/x591))%x592);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x593 = 2010U;
	volatile int32_t x594 = 884;
	volatile int32_t x595 = INT32_MIN;
	static int32_t x596 = INT32_MAX;
	volatile int32_t t141 = 37106;

    t141 = ((x593==(x594/x595))%x596);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x601 = 46;
	static volatile int32_t x602 = 4017;
	volatile int16_t x603 = -3256;
	int8_t x604 = INT8_MIN;
	volatile int32_t t142 = 107970;

    t142 = ((x601==(x602/x603))%x604);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x606 = UINT8_MAX;
	int16_t x607 = INT16_MIN;
	int64_t x608 = -1462432126LL;

    t143 = ((x605==(x606/x607))%x608);

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x609 = INT64_MIN;
	static volatile int8_t x612 = INT8_MAX;
	volatile int32_t t144 = 0;

    t144 = ((x609==(x610/x611))%x612);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x613 = INT64_MIN;
	static int8_t x614 = -1;
	int8_t x615 = INT8_MAX;
	static uint8_t x616 = 25U;
	static int32_t t145 = -291;

    t145 = ((x613==(x614/x615))%x616);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x617 = INT32_MIN;
	int64_t x618 = INT64_MIN;
	uint64_t x619 = UINT64_MAX;
	volatile int64_t t146 = 2LL;

    t146 = ((x617==(x618/x619))%x620);

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint32_t x621 = 195848929U;
	volatile int64_t x622 = INT64_MAX;
	uint8_t x623 = 2U;
	int16_t x624 = INT16_MAX;
	int32_t t147 = 281843;

    t147 = ((x621==(x622/x623))%x624);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x629 = INT32_MAX;
	int32_t x630 = -6;
	int16_t x631 = -6;
	volatile int8_t x632 = INT8_MIN;
	volatile int32_t t148 = 6402956;

    t148 = ((x629==(x630/x631))%x632);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint32_t x633 = 9852972U;
	uint32_t x634 = 1257943857U;

    t149 = ((x633==(x634/x635))%x636);

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x638 = INT8_MIN;
	uint16_t x639 = UINT16_MAX;
	int64_t x640 = INT64_MIN;
	int64_t t150 = -603412540915922597LL;

    t150 = ((x637==(x638/x639))%x640);

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x641 = INT16_MIN;
	uint16_t x642 = UINT16_MAX;
	int64_t x643 = INT64_MIN;
	volatile int64_t x644 = INT64_MAX;
	volatile int64_t t151 = 66243569738580LL;

    t151 = ((x641==(x642/x643))%x644);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x646 = 1197526;
	int64_t x647 = -1LL;

    t152 = ((x645==(x646/x647))%x648);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x649 = 5112U;
	static int64_t x651 = -1LL;
	uint32_t t153 = 190927136U;

    t153 = ((x649==(x650/x651))%x652);

    if (t153 != 0U) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x653 = INT16_MAX;
	uint8_t x654 = 98U;
	int32_t x655 = 107776;
	volatile uint64_t x656 = 14LLU;
	uint64_t t154 = 15964737672LLU;

    t154 = ((x653==(x654/x655))%x656);

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x657 = -1;
	static int64_t x658 = INT64_MIN;
	uint32_t x659 = 26U;
	uint64_t x660 = 41579402619363LLU;
	uint64_t t155 = 1448819LLU;

    t155 = ((x657==(x658/x659))%x660);

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x662 = INT64_MIN;
	static int32_t x663 = 482565;
	int32_t t156 = 162778673;

    t156 = ((x661==(x662/x663))%x664);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x665 = -52;
	int64_t x666 = INT64_MAX;
	static volatile uint64_t x667 = 247588LLU;
	static int64_t x668 = INT64_MIN;
	volatile int64_t t157 = 229862825125206666LL;

    t157 = ((x665==(x666/x667))%x668);

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x669 = INT64_MIN;
	int32_t x670 = -1;
	uint8_t x671 = UINT8_MAX;
	int16_t x672 = -1;
	volatile int32_t t158 = -6472639;

    t158 = ((x669==(x670/x671))%x672);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x673 = 0;
	static volatile int64_t x674 = INT64_MIN;
	uint8_t x675 = 61U;
	int64_t x676 = -51890LL;

    t159 = ((x673==(x674/x675))%x676);

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x677 = 51U;
	static int16_t x678 = INT16_MIN;
	static uint16_t x679 = 3U;
	volatile int16_t x680 = INT16_MIN;
	volatile int32_t t160 = 259281;

    t160 = ((x677==(x678/x679))%x680);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x681 = INT16_MIN;
	int32_t x682 = -1;
	uint16_t x683 = UINT16_MAX;
	volatile int64_t t161 = -27LL;

    t161 = ((x681==(x682/x683))%x684);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x685 = -1LL;
	uint8_t x686 = UINT8_MAX;
	int64_t x687 = INT64_MIN;
	int16_t x688 = INT16_MIN;
	int32_t t162 = 1170777;

    t162 = ((x685==(x686/x687))%x688);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x689 = -46;
	int8_t x690 = -2;
	static volatile uint8_t x691 = 3U;
	int16_t x692 = INT16_MIN;
	volatile int32_t t163 = 1;

    t163 = ((x689==(x690/x691))%x692);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x693 = INT8_MIN;
	static int32_t x695 = INT32_MAX;
	volatile int16_t x696 = -1;
	volatile int32_t t164 = -229;

    t164 = ((x693==(x694/x695))%x696);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x697 = UINT8_MAX;
	static int16_t x699 = INT16_MIN;
	int16_t x700 = INT16_MAX;

    t165 = ((x697==(x698/x699))%x700);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x701 = -1LL;
	int8_t x702 = -1;
	volatile int64_t x703 = INT64_MIN;
	int8_t x704 = INT8_MAX;
	volatile int32_t t166 = -1388563;

    t166 = ((x701==(x702/x703))%x704);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x706 = 503;
	volatile int64_t x707 = -1LL;
	volatile int16_t x708 = INT16_MAX;

    t167 = ((x705==(x706/x707))%x708);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint32_t x709 = 92U;
	static uint16_t x711 = UINT16_MAX;
	uint8_t x712 = 26U;
	volatile int32_t t168 = -674224;

    t168 = ((x709==(x710/x711))%x712);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int64_t x713 = -31LL;
	uint16_t x714 = 42U;
	uint8_t x715 = UINT8_MAX;
	int32_t t169 = 1362;

    t169 = ((x713==(x714/x715))%x716);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x717 = 3LLU;
	int16_t x719 = INT16_MIN;
	uint32_t x720 = 2613U;

    t170 = ((x717==(x718/x719))%x720);

    if (t170 != 0U) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x723 = -765261;
	int64_t x724 = 4605LL;

    t171 = ((x721==(x722/x723))%x724);

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x725 = 91U;
	uint16_t x726 = 313U;
	static uint64_t x727 = 1393054369525LLU;
	uint32_t x728 = 47088U;
	volatile uint32_t t172 = 5U;

    t172 = ((x725==(x726/x727))%x728);

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x733 = -1;
	int32_t x734 = INT32_MAX;
	static int8_t x735 = INT8_MIN;
	int16_t x736 = 7;

    t173 = ((x733==(x734/x735))%x736);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int16_t x737 = -95;
	uint64_t x739 = UINT64_MAX;
	int64_t x740 = INT64_MIN;

    t174 = ((x737==(x738/x739))%x740);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x741 = 39049727068607LLU;
	uint32_t x742 = UINT32_MAX;
	int32_t x743 = INT32_MAX;

    t175 = ((x741==(x742/x743))%x744);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x745 = -1;
	int32_t x747 = -143356206;
	volatile int8_t x748 = -1;
	static volatile int32_t t176 = 2440;

    t176 = ((x745==(x746/x747))%x748);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x749 = -1;
	static volatile int16_t x750 = -1;
	int16_t x751 = INT16_MAX;
	volatile int64_t t177 = 77968136322076333LL;

    t177 = ((x749==(x750/x751))%x752);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x753 = INT16_MIN;
	static uint64_t x754 = 80622LLU;

    t178 = ((x753==(x754/x755))%x756);

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x757 = 118404LL;
	uint64_t x759 = UINT64_MAX;
	int8_t x760 = INT8_MIN;
	volatile int32_t t179 = -437;

    t179 = ((x757==(x758/x759))%x760);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x762 = -1LL;
	static volatile int64_t x763 = -1LL;
	uint16_t x764 = UINT16_MAX;
	int32_t t180 = -411;

    t180 = ((x761==(x762/x763))%x764);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x765 = INT8_MIN;
	int64_t x766 = -1LL;
	uint64_t x767 = UINT64_MAX;
	int16_t x768 = 641;
	int32_t t181 = -2592;

    t181 = ((x765==(x766/x767))%x768);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x769 = 20555046661LLU;
	uint8_t x770 = UINT8_MAX;
	int64_t x771 = -1LL;
	volatile int16_t x772 = INT16_MIN;
	volatile int32_t t182 = -38877687;

    t182 = ((x769==(x770/x771))%x772);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x773 = INT64_MIN;
	static int16_t x774 = -1;
	volatile int16_t x775 = INT16_MAX;
	int32_t t183 = 204;

    t183 = ((x773==(x774/x775))%x776);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x781 = INT32_MIN;
	uint32_t x782 = 265557U;
	int32_t x783 = INT32_MAX;
	int32_t t184 = 683;

    t184 = ((x781==(x782/x783))%x784);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x790 = 2305562106435109831LL;
	volatile int16_t x791 = INT16_MAX;
	int32_t x792 = INT32_MIN;
	volatile int32_t t185 = 0;

    t185 = ((x789==(x790/x791))%x792);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x793 = UINT32_MAX;
	uint16_t x794 = 888U;
	int8_t x795 = -1;
	int32_t t186 = 16513;

    t186 = ((x793==(x794/x795))%x796);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x797 = 3U;
	static int64_t x799 = 227337LL;
	int32_t t187 = 6;

    t187 = ((x797==(x798/x799))%x800);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x803 = INT8_MIN;
	uint32_t x804 = 1584U;
	volatile uint32_t t188 = 253U;

    t188 = ((x801==(x802/x803))%x804);

    if (t188 != 0U) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile uint8_t x805 = 2U;
	int8_t x807 = 39;
	uint8_t x808 = 3U;
	volatile int32_t t189 = 3398046;

    t189 = ((x805==(x806/x807))%x808);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x809 = -1;
	static int16_t x810 = INT16_MIN;
	int64_t x812 = INT64_MAX;
	volatile int64_t t190 = -402895646LL;

    t190 = ((x809==(x810/x811))%x812);

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x813 = -1;
	uint64_t x814 = UINT64_MAX;
	volatile uint32_t x815 = 893584017U;
	int8_t x816 = INT8_MIN;
	int32_t t191 = -782312881;

    t191 = ((x813==(x814/x815))%x816);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x817 = -89LL;
	int8_t x818 = -1;
	int64_t x820 = INT64_MIN;
	int64_t t192 = 260394270LL;

    t192 = ((x817==(x818/x819))%x820);

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x821 = INT32_MIN;
	int64_t x823 = 21961618546LL;
	int32_t x824 = INT32_MIN;
	volatile int32_t t193 = 211;

    t193 = ((x821==(x822/x823))%x824);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint64_t x825 = 88552081116292481LLU;
	int64_t x826 = 3LL;
	static uint8_t x827 = 7U;
	int32_t t194 = -8457;

    t194 = ((x825==(x826/x827))%x828);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x830 = 172;
	int32_t x832 = INT32_MIN;
	static int32_t t195 = 636456364;

    t195 = ((x829==(x830/x831))%x832);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x835 = UINT8_MAX;
	static volatile int64_t t196 = 57760LL;

    t196 = ((x833==(x834/x835))%x836);

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x837 = UINT16_MAX;
	static volatile int32_t x839 = -1;
	uint64_t x840 = 22335016200783930LLU;
	volatile uint64_t t197 = 73251495100838630LLU;

    t197 = ((x837==(x838/x839))%x840);

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x841 = 2061LLU;
	int32_t x843 = -2;
	static int8_t x844 = -1;
	int32_t t198 = 1;

    t198 = ((x841==(x842/x843))%x844);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x845 = 0U;
	uint8_t x847 = UINT8_MAX;
	volatile uint32_t x848 = 900U;

    t199 = ((x845==(x846/x847))%x848);

    if (t199 != 0U) { NG(); } else { ; }
	
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


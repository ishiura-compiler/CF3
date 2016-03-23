
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

static volatile int16_t x1 = INT16_MAX;
uint64_t x7 = 32498LLU;
volatile int32_t x16 = INT32_MIN;
int64_t x22 = -416367212327502LL;
static volatile int32_t t4 = 124843631;
volatile int8_t x28 = -1;
int16_t x29 = -1;
int8_t x34 = INT8_MAX;
static volatile int32_t x36 = INT32_MAX;
int8_t x38 = -2;
int32_t x39 = INT32_MAX;
static int64_t x40 = INT64_MIN;
uint8_t x43 = UINT8_MAX;
int64_t x46 = 394787371692908LL;
volatile uint16_t x52 = UINT16_MAX;
int32_t t13 = 2;
uint32_t x63 = UINT32_MAX;
static int16_t x65 = -11;
uint8_t x66 = 1U;
static int64_t x68 = INT64_MAX;
volatile int32_t t15 = 354846;
static int16_t x69 = -3968;
int64_t x79 = INT64_MIN;
static int64_t x83 = INT64_MIN;
uint32_t x87 = 9770119U;
volatile uint64_t x92 = UINT64_MAX;
uint8_t x94 = 7U;
int16_t x95 = INT16_MAX;
volatile uint64_t x96 = UINT64_MAX;
int16_t x104 = -1;
volatile int32_t t24 = 1890;
int64_t x107 = 38835414311377LL;
static int64_t x109 = -1LL;
static int64_t x111 = -14165456803050LL;
uint8_t x114 = 72U;
int32_t x115 = INT32_MAX;
static int64_t x119 = INT64_MIN;
uint16_t x122 = 1U;
int8_t x129 = 2;
uint64_t x144 = UINT64_MAX;
static volatile int32_t t35 = 160944;
int8_t x151 = -20;
int32_t t37 = -1;
volatile int32_t t38 = 170434662;
uint64_t x162 = 12740787716537820LLU;
int8_t x172 = -35;
int32_t t42 = 25726431;
int32_t t46 = -269;
static volatile int64_t x198 = -1LL;
int64_t x201 = -186LL;
volatile int8_t x204 = -6;
volatile uint8_t x210 = UINT8_MAX;
int32_t t52 = 387;
static int16_t x222 = -7;
int32_t t55 = 0;
static uint64_t x234 = 298733308504LLU;
int16_t x237 = INT16_MIN;
uint8_t x238 = UINT8_MAX;
static int8_t x243 = INT8_MIN;
int16_t x244 = -1;
static int64_t x251 = INT64_MIN;
int32_t t62 = -169324;
int32_t t63 = 1015073872;
uint64_t x262 = 7666971484354395LLU;
int16_t x263 = INT16_MIN;
int32_t x272 = -111;
static volatile int8_t x275 = INT8_MIN;
static int64_t x279 = 1LL;
uint16_t x290 = 136U;
int8_t x298 = 0;
volatile int64_t x301 = 66633963LL;
int32_t t74 = 22;
int64_t x305 = INT64_MIN;
uint32_t x306 = 402781388U;
static volatile int32_t x315 = -28245260;
int32_t x327 = INT32_MAX;
int32_t t81 = 1;
int32_t t84 = 36445;
static int32_t x353 = INT32_MIN;
int64_t x368 = -18786LL;
volatile int32_t t89 = 186482;
int32_t t90 = -77427;
uint32_t x374 = UINT32_MAX;
int32_t t91 = -2405747;
static volatile uint8_t x392 = 19U;
int16_t x395 = INT16_MAX;
int32_t x410 = INT32_MIN;
int16_t x412 = -1;
static int32_t t100 = -524352061;
uint8_t x419 = UINT8_MAX;
uint16_t x427 = UINT16_MAX;
uint32_t x432 = 111983676U;
static volatile int64_t x435 = INT64_MAX;
int8_t x442 = INT8_MAX;
int32_t x444 = 16;
int16_t x455 = 3;
uint64_t x476 = 224518LLU;
uint16_t x483 = UINT16_MAX;
static int32_t t118 = -51863975;
static int32_t x492 = INT32_MAX;
volatile uint8_t x496 = 19U;
int32_t t120 = -100;
static volatile int64_t x503 = INT64_MIN;
int8_t x505 = 13;
int16_t x512 = 16;
static volatile int32_t t124 = -53352;
int32_t x517 = 79550015;
int16_t x519 = INT16_MIN;
int8_t x524 = -1;
static volatile int32_t t127 = 3938366;
uint8_t x530 = UINT8_MAX;
int64_t x531 = INT64_MAX;
int8_t x540 = 0;
int64_t x550 = -1LL;
static int64_t x562 = -16839228439LL;
uint16_t x566 = UINT16_MAX;
int16_t x569 = -1;
static volatile int16_t x576 = INT16_MIN;
static int64_t x577 = -380794566LL;
uint64_t x594 = UINT64_MAX;
int64_t x600 = INT64_MAX;
int64_t x606 = 4452848958759412LL;
volatile int32_t x615 = INT32_MIN;
int16_t x617 = INT16_MAX;
int8_t x622 = -1;
int16_t x628 = INT16_MIN;
int8_t x633 = 13;
int8_t x634 = INT8_MAX;
static volatile uint8_t x635 = 111U;
int32_t t154 = -2024;
static int32_t x637 = -1;
uint16_t x643 = 815U;
static int32_t t157 = 5293343;
uint32_t x652 = UINT32_MAX;
int16_t x654 = 0;
int16_t x656 = 13;
int32_t t159 = 21916;
int32_t t160 = -177673;
static volatile uint32_t x662 = 4898980U;
uint16_t x664 = 2966U;
int16_t x668 = INT16_MIN;
int16_t x671 = INT16_MAX;
static int16_t x673 = -1;
int32_t t164 = -271009577;
int64_t x692 = -1LL;
volatile int16_t x697 = -5;
uint32_t x704 = UINT32_MAX;
uint8_t x715 = 15U;
int32_t x722 = INT32_MIN;
uint8_t x728 = 90U;
static volatile int32_t t177 = -20970075;
int64_t x736 = INT64_MAX;
int64_t x743 = -50044515271960LL;
static volatile uint16_t x745 = 150U;
int8_t x748 = INT8_MAX;
volatile int16_t x756 = INT16_MIN;
uint16_t x758 = 11U;
int8_t x762 = 12;
volatile int64_t x763 = -1LL;
volatile int16_t x764 = -1;
static int16_t x767 = INT16_MIN;
int64_t x773 = -1LL;
int8_t x775 = INT8_MIN;
static int32_t x779 = INT32_MAX;
int64_t x789 = -1LL;
static uint64_t x792 = 612116964902079LLU;
int64_t x794 = INT64_MIN;
static int8_t x800 = INT8_MIN;
uint16_t x803 = UINT16_MAX;
volatile int32_t t195 = -207;
int16_t x820 = INT16_MAX;


void f0(void) {
    	int16_t x2 = INT16_MIN;
	uint64_t x3 = 133619053474LLU;
	static int16_t x4 = -2;
	volatile int32_t t0 = -5;

    t0 = (((x1!=x2)%x3)>x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MAX;
	int8_t x6 = INT8_MIN;
	uint8_t x8 = 18U;
	int32_t t1 = -8223949;

    t1 = (((x5!=x6)%x7)>x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = 189378U;
	uint64_t x10 = 14230308245LLU;
	int16_t x11 = INT16_MAX;
	static int8_t x12 = INT8_MIN;
	int32_t t2 = 1376;

    t2 = (((x9!=x10)%x11)>x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int64_t x13 = INT64_MIN;
	static volatile int8_t x14 = -6;
	int32_t x15 = -87;
	static int32_t t3 = 63577;

    t3 = (((x13!=x14)%x15)>x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x21 = -1;
	int64_t x23 = 4924761151322537LL;
	uint32_t x24 = UINT32_MAX;

    t4 = (((x21!=x22)%x23)>x24);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x25 = INT64_MIN;
	uint8_t x26 = UINT8_MAX;
	volatile int32_t x27 = INT32_MIN;
	int32_t t5 = 8;

    t5 = (((x25!=x26)%x27)>x28);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x30 = 11626U;
	int32_t x31 = INT32_MIN;
	uint16_t x32 = 2372U;
	volatile int32_t t6 = -22;

    t6 = (((x29!=x30)%x31)>x32);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x33 = -3351;
	int64_t x35 = -851453451LL;
	volatile int32_t t7 = -2;

    t7 = (((x33!=x34)%x35)>x36);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x37 = UINT16_MAX;
	int32_t t8 = -1;

    t8 = (((x37!=x38)%x39)>x40);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x41 = -1;
	int32_t x42 = INT32_MAX;
	int64_t x44 = -1LL;
	int32_t t9 = -523388720;

    t9 = (((x41!=x42)%x43)>x44);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x45 = INT64_MAX;
	int64_t x47 = 438LL;
	int16_t x48 = -1;
	volatile int32_t t10 = -3784400;

    t10 = (((x45!=x46)%x47)>x48);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x49 = -60098;
	uint32_t x50 = UINT32_MAX;
	int64_t x51 = -1LL;
	int32_t t11 = 1024410;

    t11 = (((x49!=x50)%x51)>x52);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint16_t x53 = UINT16_MAX;
	uint8_t x54 = UINT8_MAX;
	int8_t x55 = -48;
	static volatile int8_t x56 = INT8_MIN;
	int32_t t12 = -19;

    t12 = (((x53!=x54)%x55)>x56);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x57 = 804446978LLU;
	int8_t x58 = INT8_MAX;
	uint16_t x59 = 23U;
	int16_t x60 = INT16_MIN;

    t13 = (((x57!=x58)%x59)>x60);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x61 = INT16_MAX;
	volatile int16_t x62 = INT16_MAX;
	int32_t x64 = -4;
	int32_t t14 = -28206;

    t14 = (((x61!=x62)%x63)>x64);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x67 = 3U;

    t15 = (((x65!=x66)%x67)>x68);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile uint16_t x70 = 1806U;
	volatile int8_t x71 = INT8_MIN;
	int64_t x72 = 154001338618099451LL;
	volatile int32_t t16 = 55;

    t16 = (((x69!=x70)%x71)>x72);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x73 = -1;
	int8_t x74 = INT8_MIN;
	int32_t x75 = INT32_MAX;
	int64_t x76 = -1LL;
	int32_t t17 = -1725;

    t17 = (((x73!=x74)%x75)>x76);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x77 = -1LL;
	volatile uint32_t x78 = UINT32_MAX;
	int32_t x80 = -208836629;
	static volatile int32_t t18 = -16772777;

    t18 = (((x77!=x78)%x79)>x80);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x81 = 1101732986997359336LLU;
	volatile uint16_t x82 = 1620U;
	int8_t x84 = INT8_MAX;
	volatile int32_t t19 = 692;

    t19 = (((x81!=x82)%x83)>x84);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x85 = -1LL;
	uint64_t x86 = UINT64_MAX;
	volatile uint32_t x88 = 1618U;
	volatile int32_t t20 = 111109;

    t20 = (((x85!=x86)%x87)>x88);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x89 = 1664166574LLU;
	uint64_t x90 = UINT64_MAX;
	int16_t x91 = 1;
	int32_t t21 = -659467;

    t21 = (((x89!=x90)%x91)>x92);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x93 = INT16_MAX;
	volatile int32_t t22 = -409;

    t22 = (((x93!=x94)%x95)>x96);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x97 = 6U;
	volatile int64_t x98 = -46501817442LL;
	int8_t x99 = INT8_MAX;
	int8_t x100 = INT8_MIN;
	int32_t t23 = 450330;

    t23 = (((x97!=x98)%x99)>x100);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x101 = INT8_MAX;
	int8_t x102 = INT8_MIN;
	static int32_t x103 = INT32_MAX;

    t24 = (((x101!=x102)%x103)>x104);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x105 = -7;
	uint64_t x106 = 5280753LLU;
	uint32_t x108 = 376U;
	static volatile int32_t t25 = -87;

    t25 = (((x105!=x106)%x107)>x108);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x110 = 1360553U;
	static int8_t x112 = 0;
	int32_t t26 = -7704;

    t26 = (((x109!=x110)%x111)>x112);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile uint16_t x113 = UINT16_MAX;
	uint64_t x116 = 733LLU;
	volatile int32_t t27 = -22;

    t27 = (((x113!=x114)%x115)>x116);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x117 = INT32_MIN;
	static int8_t x118 = INT8_MIN;
	static int64_t x120 = -576082680526449LL;
	volatile int32_t t28 = 25472246;

    t28 = (((x117!=x118)%x119)>x120);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x121 = INT64_MIN;
	uint16_t x123 = UINT16_MAX;
	int8_t x124 = INT8_MAX;
	int32_t t29 = 695;

    t29 = (((x121!=x122)%x123)>x124);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x125 = INT16_MIN;
	uint64_t x126 = 1148557LLU;
	int32_t x127 = INT32_MIN;
	int8_t x128 = INT8_MIN;
	static int32_t t30 = -3;

    t30 = (((x125!=x126)%x127)>x128);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x130 = INT64_MIN;
	static uint32_t x131 = 6U;
	volatile uint8_t x132 = UINT8_MAX;
	static int32_t t31 = -185;

    t31 = (((x129!=x130)%x131)>x132);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint32_t x133 = 2273858U;
	uint32_t x134 = UINT32_MAX;
	int8_t x135 = INT8_MIN;
	static uint64_t x136 = 543571090807537LLU;
	volatile int32_t t32 = 3184;

    t32 = (((x133!=x134)%x135)>x136);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x137 = 1U;
	int64_t x138 = INT64_MIN;
	int32_t x139 = INT32_MIN;
	int32_t x140 = -1;
	static int32_t t33 = -14135;

    t33 = (((x137!=x138)%x139)>x140);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x141 = -48439;
	uint32_t x142 = UINT32_MAX;
	uint8_t x143 = 6U;
	volatile int32_t t34 = -300010;

    t34 = (((x141!=x142)%x143)>x144);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x145 = INT8_MAX;
	int32_t x146 = INT32_MAX;
	static int64_t x147 = INT64_MIN;
	uint32_t x148 = 63U;

    t35 = (((x145!=x146)%x147)>x148);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint32_t x149 = UINT32_MAX;
	volatile int16_t x150 = INT16_MAX;
	uint64_t x152 = UINT64_MAX;
	int32_t t36 = -1368;

    t36 = (((x149!=x150)%x151)>x152);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x153 = -7417;
	int64_t x154 = INT64_MAX;
	int8_t x155 = INT8_MIN;
	static int8_t x156 = INT8_MIN;

    t37 = (((x153!=x154)%x155)>x156);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x157 = 33220588956LL;
	int8_t x158 = INT8_MIN;
	volatile int16_t x159 = INT16_MIN;
	int32_t x160 = -1;

    t38 = (((x157!=x158)%x159)>x160);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x161 = 29U;
	uint16_t x163 = 8159U;
	static int32_t x164 = INT32_MAX;
	int32_t t39 = 96080759;

    t39 = (((x161!=x162)%x163)>x164);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x165 = -13;
	static int8_t x166 = -7;
	static int8_t x167 = INT8_MIN;
	static uint64_t x168 = 2758LLU;
	int32_t t40 = 12835931;

    t40 = (((x165!=x166)%x167)>x168);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x169 = -10752037731528292LL;
	uint32_t x170 = 7558842U;
	static int8_t x171 = 1;
	int32_t t41 = 16060;

    t41 = (((x169!=x170)%x171)>x172);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x173 = INT8_MAX;
	int16_t x174 = INT16_MIN;
	int16_t x175 = -1;
	volatile int64_t x176 = INT64_MIN;

    t42 = (((x173!=x174)%x175)>x176);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x177 = -5953;
	static volatile int32_t x178 = -203;
	volatile int64_t x179 = -210207963LL;
	static volatile int64_t x180 = INT64_MIN;
	volatile int32_t t43 = -6885;

    t43 = (((x177!=x178)%x179)>x180);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x181 = INT8_MIN;
	int64_t x182 = -1LL;
	uint64_t x183 = 244245475624309LLU;
	volatile uint32_t x184 = 3074U;
	volatile int32_t t44 = -261663;

    t44 = (((x181!=x182)%x183)>x184);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x185 = 15U;
	int64_t x186 = INT64_MIN;
	int32_t x187 = -1;
	uint16_t x188 = 145U;
	volatile int32_t t45 = 192;

    t45 = (((x185!=x186)%x187)>x188);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x189 = INT64_MIN;
	uint32_t x190 = 629U;
	int8_t x191 = INT8_MAX;
	int64_t x192 = -1301635047203LL;

    t46 = (((x189!=x190)%x191)>x192);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint32_t x193 = 20478034U;
	int16_t x194 = 0;
	static volatile uint32_t x195 = 210838763U;
	int16_t x196 = -1;
	int32_t t47 = 342810400;

    t47 = (((x193!=x194)%x195)>x196);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int8_t x197 = INT8_MIN;
	int64_t x199 = INT64_MIN;
	static int8_t x200 = INT8_MIN;
	volatile int32_t t48 = -341;

    t48 = (((x197!=x198)%x199)>x200);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x202 = 12;
	volatile uint32_t x203 = UINT32_MAX;
	int32_t t49 = -3327;

    t49 = (((x201!=x202)%x203)>x204);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x205 = 270;
	uint8_t x206 = 15U;
	volatile int64_t x207 = INT64_MIN;
	int64_t x208 = -15308533387LL;
	int32_t t50 = 819770668;

    t50 = (((x205!=x206)%x207)>x208);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x209 = 664U;
	uint64_t x211 = 3831129161199LLU;
	static uint16_t x212 = 462U;
	volatile int32_t t51 = 143;

    t51 = (((x209!=x210)%x211)>x212);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x213 = 6;
	int64_t x214 = -498859275LL;
	int32_t x215 = -374597;
	int64_t x216 = 41760476LL;

    t52 = (((x213!=x214)%x215)>x216);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x217 = 197035041314LL;
	uint16_t x218 = UINT16_MAX;
	int8_t x219 = INT8_MIN;
	uint32_t x220 = UINT32_MAX;
	int32_t t53 = -2345;

    t53 = (((x217!=x218)%x219)>x220);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint32_t x221 = 416U;
	int8_t x223 = -3;
	volatile int8_t x224 = -50;
	volatile int32_t t54 = -30896;

    t54 = (((x221!=x222)%x223)>x224);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x225 = 5U;
	uint64_t x226 = UINT64_MAX;
	static int32_t x227 = -1;
	uint32_t x228 = 0U;

    t55 = (((x225!=x226)%x227)>x228);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x229 = 1206594844U;
	volatile int8_t x230 = -30;
	volatile int32_t x231 = INT32_MIN;
	static int32_t x232 = -164465;
	volatile int32_t t56 = -3;

    t56 = (((x229!=x230)%x231)>x232);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x233 = INT64_MIN;
	uint8_t x235 = 3U;
	uint64_t x236 = 5177LLU;
	int32_t t57 = 8008735;

    t57 = (((x233!=x234)%x235)>x236);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x239 = -1;
	uint8_t x240 = 3U;
	volatile int32_t t58 = 80031281;

    t58 = (((x237!=x238)%x239)>x240);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int8_t x241 = INT8_MAX;
	int16_t x242 = INT16_MAX;
	static volatile int32_t t59 = 14;

    t59 = (((x241!=x242)%x243)>x244);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x245 = UINT32_MAX;
	int8_t x246 = 0;
	static uint8_t x247 = 15U;
	static volatile uint8_t x248 = UINT8_MAX;
	volatile int32_t t60 = 507055;

    t60 = (((x245!=x246)%x247)>x248);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x249 = INT16_MIN;
	int8_t x250 = INT8_MIN;
	uint16_t x252 = 26U;
	int32_t t61 = -1;

    t61 = (((x249!=x250)%x251)>x252);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x253 = -1;
	int32_t x254 = -1;
	int16_t x255 = -1;
	int32_t x256 = INT32_MIN;

    t62 = (((x253!=x254)%x255)>x256);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x257 = 2U;
	uint64_t x258 = 8007LLU;
	volatile uint64_t x259 = 41LLU;
	static int32_t x260 = -1;

    t63 = (((x257!=x258)%x259)>x260);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x261 = -27;
	uint32_t x264 = 991057922U;
	int32_t t64 = -62302;

    t64 = (((x261!=x262)%x263)>x264);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x265 = 7U;
	int16_t x266 = -241;
	static int8_t x267 = 5;
	uint16_t x268 = UINT16_MAX;
	volatile int32_t t65 = -208846;

    t65 = (((x265!=x266)%x267)>x268);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x269 = -1;
	uint32_t x270 = 1797068U;
	uint64_t x271 = 1498841444703LLU;
	int32_t t66 = -1797;

    t66 = (((x269!=x270)%x271)>x272);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x273 = INT32_MAX;
	volatile int32_t x274 = INT32_MAX;
	uint16_t x276 = UINT16_MAX;
	volatile int32_t t67 = -11404554;

    t67 = (((x273!=x274)%x275)>x276);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x277 = 2001854376U;
	static uint8_t x278 = 17U;
	volatile int8_t x280 = INT8_MIN;
	volatile int32_t t68 = 112162;

    t68 = (((x277!=x278)%x279)>x280);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x281 = INT16_MAX;
	volatile int64_t x282 = -1LL;
	uint64_t x283 = 12903918328734LLU;
	volatile int64_t x284 = -126799209465LL;
	int32_t t69 = 731650543;

    t69 = (((x281!=x282)%x283)>x284);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x285 = 5904044U;
	int8_t x286 = INT8_MIN;
	static int32_t x287 = -1;
	static int32_t x288 = -11767;
	int32_t t70 = 4041180;

    t70 = (((x285!=x286)%x287)>x288);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x289 = 5U;
	static int8_t x291 = INT8_MAX;
	uint32_t x292 = 113511U;
	int32_t t71 = 9053;

    t71 = (((x289!=x290)%x291)>x292);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x293 = UINT64_MAX;
	static uint64_t x294 = 1805LLU;
	static volatile int16_t x295 = -8;
	static int32_t x296 = -1;
	volatile int32_t t72 = -13629515;

    t72 = (((x293!=x294)%x295)>x296);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x297 = 0U;
	int16_t x299 = INT16_MIN;
	volatile uint64_t x300 = UINT64_MAX;
	int32_t t73 = 909273;

    t73 = (((x297!=x298)%x299)>x300);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x302 = INT16_MAX;
	int16_t x303 = -480;
	static uint64_t x304 = 538045493758LLU;

    t74 = (((x301!=x302)%x303)>x304);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x307 = -4;
	static uint8_t x308 = UINT8_MAX;
	int32_t t75 = -941350118;

    t75 = (((x305!=x306)%x307)>x308);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x309 = 445862768198448LLU;
	volatile int64_t x310 = -53407976395LL;
	volatile int32_t x311 = -66080734;
	static uint64_t x312 = UINT64_MAX;
	volatile int32_t t76 = 983530298;

    t76 = (((x309!=x310)%x311)>x312);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x313 = -21;
	static int8_t x314 = -1;
	int8_t x316 = -1;
	volatile int32_t t77 = 954919060;

    t77 = (((x313!=x314)%x315)>x316);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x321 = 1218037;
	uint64_t x322 = 1419099LLU;
	int64_t x323 = INT64_MAX;
	int64_t x324 = INT64_MIN;
	volatile int32_t t78 = -52383248;

    t78 = (((x321!=x322)%x323)>x324);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x325 = 1U;
	int64_t x326 = INT64_MIN;
	volatile int32_t x328 = -1;
	volatile int32_t t79 = -117243;

    t79 = (((x325!=x326)%x327)>x328);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x329 = 1U;
	static volatile int32_t x330 = INT32_MIN;
	volatile int16_t x331 = INT16_MIN;
	volatile int64_t x332 = -2554613214326LL;
	static int32_t t80 = -35350992;

    t80 = (((x329!=x330)%x331)>x332);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x333 = INT8_MAX;
	int64_t x334 = 12062LL;
	volatile int8_t x335 = INT8_MAX;
	volatile uint32_t x336 = UINT32_MAX;

    t81 = (((x333!=x334)%x335)>x336);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x337 = UINT8_MAX;
	int32_t x338 = 838521617;
	static uint32_t x339 = UINT32_MAX;
	int16_t x340 = INT16_MIN;
	static volatile int32_t t82 = -792;

    t82 = (((x337!=x338)%x339)>x340);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x341 = INT32_MIN;
	int32_t x342 = INT32_MIN;
	volatile int32_t x343 = -188736246;
	int64_t x344 = -1LL;
	int32_t t83 = -1657;

    t83 = (((x341!=x342)%x343)>x344);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x345 = 0;
	int8_t x346 = INT8_MAX;
	int32_t x347 = INT32_MIN;
	int8_t x348 = -1;

    t84 = (((x345!=x346)%x347)>x348);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile uint8_t x349 = 3U;
	uint32_t x350 = 427800U;
	int64_t x351 = -2539587318198LL;
	int16_t x352 = INT16_MAX;
	static volatile int32_t t85 = 174123746;

    t85 = (((x349!=x350)%x351)>x352);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x354 = INT64_MIN;
	volatile int8_t x355 = INT8_MIN;
	int32_t x356 = -1;
	volatile int32_t t86 = -41;

    t86 = (((x353!=x354)%x355)>x356);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int64_t x357 = 375811LL;
	uint8_t x358 = UINT8_MAX;
	uint32_t x359 = 104660U;
	volatile uint16_t x360 = 31U;
	volatile int32_t t87 = -61054663;

    t87 = (((x357!=x358)%x359)>x360);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint16_t x361 = 14827U;
	uint32_t x362 = UINT32_MAX;
	int32_t x363 = INT32_MAX;
	uint64_t x364 = 30123542486178LLU;
	volatile int32_t t88 = -122352;

    t88 = (((x361!=x362)%x363)>x364);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint8_t x365 = 40U;
	uint16_t x366 = UINT16_MAX;
	uint16_t x367 = 1934U;

    t89 = (((x365!=x366)%x367)>x368);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x369 = INT16_MIN;
	volatile int32_t x370 = INT32_MAX;
	static int8_t x371 = INT8_MIN;
	uint64_t x372 = UINT64_MAX;

    t90 = (((x369!=x370)%x371)>x372);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x373 = INT8_MIN;
	uint16_t x375 = 1U;
	volatile uint16_t x376 = UINT16_MAX;

    t91 = (((x373!=x374)%x375)>x376);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x377 = -31;
	int8_t x378 = -1;
	int32_t x379 = -1;
	volatile int32_t x380 = INT32_MAX;
	volatile int32_t t92 = -2;

    t92 = (((x377!=x378)%x379)>x380);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x381 = -13366;
	uint32_t x382 = UINT32_MAX;
	int8_t x383 = -1;
	int16_t x384 = -1;
	volatile int32_t t93 = -52;

    t93 = (((x381!=x382)%x383)>x384);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x385 = INT16_MAX;
	static uint8_t x386 = UINT8_MAX;
	volatile uint16_t x387 = UINT16_MAX;
	int64_t x388 = 9708823424405LL;
	int32_t t94 = 276980;

    t94 = (((x385!=x386)%x387)>x388);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x389 = 29975U;
	int64_t x390 = -1LL;
	int32_t x391 = 155410;
	static int32_t t95 = 1126;

    t95 = (((x389!=x390)%x391)>x392);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x393 = 8U;
	uint32_t x394 = 6877476U;
	static int8_t x396 = -1;
	volatile int32_t t96 = 29;

    t96 = (((x393!=x394)%x395)>x396);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x397 = -1408152355729978LL;
	static int8_t x398 = INT8_MAX;
	static int8_t x399 = 1;
	volatile uint16_t x400 = 25U;
	volatile int32_t t97 = 1;

    t97 = (((x397!=x398)%x399)>x400);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x401 = -1;
	int64_t x402 = -1LL;
	uint64_t x403 = UINT64_MAX;
	uint64_t x404 = 91LLU;
	static volatile int32_t t98 = 15;

    t98 = (((x401!=x402)%x403)>x404);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x405 = -1LL;
	int16_t x406 = 36;
	uint64_t x407 = 424886417839620353LLU;
	uint64_t x408 = 250929193428238769LLU;
	int32_t t99 = 45;

    t99 = (((x405!=x406)%x407)>x408);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x409 = 60U;
	uint8_t x411 = 58U;

    t100 = (((x409!=x410)%x411)>x412);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x413 = INT32_MIN;
	volatile int64_t x414 = INT64_MIN;
	uint64_t x415 = 753969985LLU;
	int16_t x416 = INT16_MAX;
	volatile int32_t t101 = -2075781;

    t101 = (((x413!=x414)%x415)>x416);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint64_t x417 = 141178323LLU;
	int64_t x418 = INT64_MIN;
	volatile int64_t x420 = INT64_MIN;
	static volatile int32_t t102 = 4042;

    t102 = (((x417!=x418)%x419)>x420);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint32_t x421 = 1951061U;
	int64_t x422 = -2888LL;
	volatile uint32_t x423 = UINT32_MAX;
	int64_t x424 = INT64_MIN;
	volatile int32_t t103 = 12318;

    t103 = (((x421!=x422)%x423)>x424);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x425 = -26;
	uint8_t x426 = 0U;
	int8_t x428 = 2;
	int32_t t104 = 658;

    t104 = (((x425!=x426)%x427)>x428);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x429 = INT32_MIN;
	static uint32_t x430 = UINT32_MAX;
	int32_t x431 = -1;
	volatile int32_t t105 = -4025185;

    t105 = (((x429!=x430)%x431)>x432);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint32_t x433 = UINT32_MAX;
	volatile int16_t x434 = INT16_MIN;
	int16_t x436 = -983;
	volatile int32_t t106 = -11982;

    t106 = (((x433!=x434)%x435)>x436);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x437 = INT8_MAX;
	volatile int64_t x438 = INT64_MAX;
	uint8_t x439 = 7U;
	static uint8_t x440 = 4U;
	int32_t t107 = 304648;

    t107 = (((x437!=x438)%x439)>x440);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x441 = 9261U;
	int16_t x443 = INT16_MAX;
	volatile int32_t t108 = -2;

    t108 = (((x441!=x442)%x443)>x444);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x445 = 125;
	uint8_t x446 = UINT8_MAX;
	static uint32_t x447 = UINT32_MAX;
	volatile uint16_t x448 = 57U;
	volatile int32_t t109 = 11500919;

    t109 = (((x445!=x446)%x447)>x448);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x453 = 6;
	int8_t x454 = -3;
	volatile int64_t x456 = -1LL;
	volatile int32_t t110 = 0;

    t110 = (((x453!=x454)%x455)>x456);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x457 = INT32_MIN;
	int16_t x458 = INT16_MIN;
	uint64_t x459 = 21LLU;
	int8_t x460 = INT8_MIN;
	volatile int32_t t111 = -1;

    t111 = (((x457!=x458)%x459)>x460);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x461 = 5;
	uint64_t x462 = 244834343016568621LLU;
	int8_t x463 = -1;
	int16_t x464 = 24;
	volatile int32_t t112 = -17;

    t112 = (((x461!=x462)%x463)>x464);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x465 = 121;
	volatile int64_t x466 = -1LL;
	int64_t x467 = INT64_MIN;
	int8_t x468 = INT8_MIN;
	volatile int32_t t113 = -68;

    t113 = (((x465!=x466)%x467)>x468);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x469 = -1;
	volatile int32_t x470 = -1;
	uint8_t x471 = UINT8_MAX;
	int16_t x472 = -401;
	int32_t t114 = 0;

    t114 = (((x469!=x470)%x471)>x472);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x473 = INT16_MIN;
	static uint16_t x474 = 154U;
	static volatile int8_t x475 = 1;
	int32_t t115 = 30901572;

    t115 = (((x473!=x474)%x475)>x476);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x477 = INT8_MIN;
	volatile int32_t x478 = INT32_MIN;
	int8_t x479 = -35;
	int64_t x480 = INT64_MIN;
	int32_t t116 = 50027;

    t116 = (((x477!=x478)%x479)>x480);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x481 = -1LL;
	int64_t x482 = INT64_MIN;
	int8_t x484 = 1;
	int32_t t117 = -90322;

    t117 = (((x481!=x482)%x483)>x484);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x485 = 7578903650858LLU;
	uint64_t x486 = 61999316184284LLU;
	uint64_t x487 = 5184LLU;
	volatile uint8_t x488 = 1U;

    t118 = (((x485!=x486)%x487)>x488);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x489 = UINT64_MAX;
	volatile uint32_t x490 = 247374038U;
	int16_t x491 = -1;
	int32_t t119 = 27143269;

    t119 = (((x489!=x490)%x491)>x492);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x493 = UINT32_MAX;
	uint32_t x494 = 1U;
	int32_t x495 = -1;

    t120 = (((x493!=x494)%x495)>x496);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x497 = 0U;
	volatile uint32_t x498 = 29U;
	static int16_t x499 = INT16_MAX;
	static int64_t x500 = INT64_MAX;
	volatile int32_t t121 = 3028;

    t121 = (((x497!=x498)%x499)>x500);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x501 = 10U;
	static uint64_t x502 = UINT64_MAX;
	uint64_t x504 = UINT64_MAX;
	int32_t t122 = 198;

    t122 = (((x501!=x502)%x503)>x504);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int64_t x506 = INT64_MIN;
	static int32_t x507 = -15;
	uint64_t x508 = 339915043LLU;
	int32_t t123 = 2064;

    t123 = (((x505!=x506)%x507)>x508);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x509 = INT64_MIN;
	int64_t x510 = INT64_MAX;
	static int32_t x511 = INT32_MIN;

    t124 = (((x509!=x510)%x511)>x512);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x513 = 19U;
	int64_t x514 = INT64_MAX;
	int8_t x515 = -4;
	int16_t x516 = -1;
	int32_t t125 = 13;

    t125 = (((x513!=x514)%x515)>x516);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x518 = INT32_MIN;
	volatile int8_t x520 = INT8_MAX;
	int32_t t126 = 2008;

    t126 = (((x517!=x518)%x519)>x520);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x521 = INT8_MAX;
	static int8_t x522 = 1;
	uint64_t x523 = UINT64_MAX;

    t127 = (((x521!=x522)%x523)>x524);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x525 = 1;
	int8_t x526 = -1;
	volatile int8_t x527 = -1;
	uint64_t x528 = 639539LLU;
	volatile int32_t t128 = -1390376;

    t128 = (((x525!=x526)%x527)>x528);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x529 = 5789U;
	volatile uint8_t x532 = 52U;
	volatile int32_t t129 = -101;

    t129 = (((x529!=x530)%x531)>x532);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint32_t x533 = UINT32_MAX;
	int64_t x534 = -1LL;
	volatile int64_t x535 = INT64_MIN;
	volatile int16_t x536 = INT16_MIN;
	int32_t t130 = 578476;

    t130 = (((x533!=x534)%x535)>x536);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x537 = 1102;
	static volatile int16_t x538 = 124;
	int8_t x539 = -1;
	volatile int32_t t131 = 6559820;

    t131 = (((x537!=x538)%x539)>x540);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x541 = 7128;
	int32_t x542 = INT32_MAX;
	int64_t x543 = INT64_MAX;
	static int32_t x544 = INT32_MIN;
	int32_t t132 = 6074035;

    t132 = (((x541!=x542)%x543)>x544);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint16_t x545 = 502U;
	int16_t x546 = INT16_MIN;
	int16_t x547 = 137;
	int16_t x548 = INT16_MIN;
	static volatile int32_t t133 = 360077821;

    t133 = (((x545!=x546)%x547)>x548);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x549 = INT32_MAX;
	int64_t x551 = INT64_MIN;
	int64_t x552 = INT64_MIN;
	volatile int32_t t134 = 0;

    t134 = (((x549!=x550)%x551)>x552);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x553 = INT64_MIN;
	uint64_t x554 = 272353755LLU;
	static int16_t x555 = INT16_MAX;
	uint64_t x556 = 108LLU;
	int32_t t135 = 2799786;

    t135 = (((x553!=x554)%x555)>x556);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x557 = -761;
	uint64_t x558 = UINT64_MAX;
	int64_t x559 = INT64_MIN;
	uint16_t x560 = 1U;
	volatile int32_t t136 = -3093519;

    t136 = (((x557!=x558)%x559)>x560);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x561 = INT32_MAX;
	uint32_t x563 = 43U;
	int8_t x564 = 6;
	int32_t t137 = -229344250;

    t137 = (((x561!=x562)%x563)>x564);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x565 = INT16_MAX;
	volatile uint16_t x567 = 5911U;
	uint32_t x568 = 6512U;
	static volatile int32_t t138 = -453;

    t138 = (((x565!=x566)%x567)>x568);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int16_t x570 = INT16_MAX;
	int16_t x571 = INT16_MIN;
	uint32_t x572 = 6272U;
	volatile int32_t t139 = -2067;

    t139 = (((x569!=x570)%x571)>x572);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x573 = -1LL;
	uint32_t x574 = 15U;
	volatile uint16_t x575 = 8U;
	int32_t t140 = 14;

    t140 = (((x573!=x574)%x575)>x576);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x578 = INT16_MIN;
	uint32_t x579 = UINT32_MAX;
	int64_t x580 = INT64_MIN;
	int32_t t141 = 338636;

    t141 = (((x577!=x578)%x579)>x580);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x581 = 86551LL;
	uint8_t x582 = UINT8_MAX;
	int32_t x583 = INT32_MIN;
	uint16_t x584 = 6U;
	static volatile int32_t t142 = 6518;

    t142 = (((x581!=x582)%x583)>x584);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x585 = INT32_MIN;
	int32_t x586 = INT32_MIN;
	static int64_t x587 = INT64_MIN;
	int8_t x588 = 32;
	int32_t t143 = 3580968;

    t143 = (((x585!=x586)%x587)>x588);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x589 = INT8_MAX;
	uint64_t x590 = UINT64_MAX;
	int16_t x591 = -19;
	uint32_t x592 = UINT32_MAX;
	int32_t t144 = 0;

    t144 = (((x589!=x590)%x591)>x592);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x593 = -1LL;
	uint32_t x595 = 229671230U;
	int32_t x596 = INT32_MIN;
	volatile int32_t t145 = -66945346;

    t145 = (((x593!=x594)%x595)>x596);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint16_t x597 = 316U;
	int8_t x598 = -1;
	uint64_t x599 = UINT64_MAX;
	int32_t t146 = -45751;

    t146 = (((x597!=x598)%x599)>x600);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x605 = 0U;
	static int32_t x607 = INT32_MIN;
	int32_t x608 = -214;
	int32_t t147 = 1681107;

    t147 = (((x605!=x606)%x607)>x608);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x609 = UINT16_MAX;
	int8_t x610 = -4;
	uint32_t x611 = UINT32_MAX;
	int8_t x612 = -1;
	volatile int32_t t148 = 837236;

    t148 = (((x609!=x610)%x611)>x612);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x613 = 161U;
	static uint32_t x614 = UINT32_MAX;
	static uint8_t x616 = 5U;
	int32_t t149 = 132155290;

    t149 = (((x613!=x614)%x615)>x616);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x618 = INT16_MIN;
	volatile uint16_t x619 = UINT16_MAX;
	int64_t x620 = INT64_MAX;
	volatile int32_t t150 = 11831943;

    t150 = (((x617!=x618)%x619)>x620);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x621 = -37893398512873896LL;
	int8_t x623 = INT8_MIN;
	static int64_t x624 = INT64_MIN;
	volatile int32_t t151 = -2845708;

    t151 = (((x621!=x622)%x623)>x624);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x625 = 75U;
	uint32_t x626 = UINT32_MAX;
	static int64_t x627 = 1470724110048LL;
	int32_t t152 = -114;

    t152 = (((x625!=x626)%x627)>x628);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x629 = INT16_MIN;
	static uint64_t x630 = 109LLU;
	volatile uint32_t x631 = 36U;
	volatile int32_t x632 = INT32_MIN;
	volatile int32_t t153 = 8087;

    t153 = (((x629!=x630)%x631)>x632);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x636 = 35682174578449606LL;

    t154 = (((x633!=x634)%x635)>x636);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint16_t x638 = UINT16_MAX;
	static uint32_t x639 = 4970U;
	int8_t x640 = 2;
	static int32_t t155 = 423;

    t155 = (((x637!=x638)%x639)>x640);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x641 = INT32_MIN;
	uint64_t x642 = 3129LLU;
	int64_t x644 = INT64_MIN;
	volatile int32_t t156 = -3341927;

    t156 = (((x641!=x642)%x643)>x644);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint32_t x645 = 6U;
	uint16_t x646 = UINT16_MAX;
	uint64_t x647 = 109218002432LLU;
	volatile int16_t x648 = -1;

    t157 = (((x645!=x646)%x647)>x648);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x649 = INT16_MAX;
	static int32_t x650 = -3988356;
	int16_t x651 = INT16_MIN;
	volatile int32_t t158 = -39092;

    t158 = (((x649!=x650)%x651)>x652);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x653 = 1;
	volatile int8_t x655 = -1;

    t159 = (((x653!=x654)%x655)>x656);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x657 = -78962;
	volatile uint8_t x658 = 95U;
	int16_t x659 = INT16_MIN;
	int64_t x660 = -1LL;

    t160 = (((x657!=x658)%x659)>x660);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x661 = UINT8_MAX;
	uint8_t x663 = 7U;
	volatile int32_t t161 = 1;

    t161 = (((x661!=x662)%x663)>x664);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x665 = INT32_MIN;
	uint32_t x666 = 23311U;
	int32_t x667 = -1;
	volatile int32_t t162 = -30;

    t162 = (((x665!=x666)%x667)>x668);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x669 = 334393;
	int64_t x670 = -1LL;
	static int32_t x672 = -1;
	int32_t t163 = 389;

    t163 = (((x669!=x670)%x671)>x672);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x674 = INT16_MIN;
	int32_t x675 = -443260836;
	int8_t x676 = INT8_MIN;

    t164 = (((x673!=x674)%x675)>x676);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x677 = 5440706930545LL;
	static int64_t x678 = 12LL;
	static int8_t x679 = INT8_MIN;
	uint32_t x680 = 252439313U;
	volatile int32_t t165 = 0;

    t165 = (((x677!=x678)%x679)>x680);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int64_t x681 = INT64_MIN;
	uint8_t x682 = 2U;
	volatile int64_t x683 = -1LL;
	int16_t x684 = -13;
	int32_t t166 = 100217546;

    t166 = (((x681!=x682)%x683)>x684);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x685 = -1;
	uint8_t x686 = 25U;
	uint32_t x687 = 369991668U;
	uint8_t x688 = 2U;
	int32_t t167 = -1;

    t167 = (((x685!=x686)%x687)>x688);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int64_t x689 = INT64_MIN;
	static uint8_t x690 = 4U;
	static volatile uint8_t x691 = 6U;
	volatile int32_t t168 = 456;

    t168 = (((x689!=x690)%x691)>x692);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x693 = UINT8_MAX;
	int16_t x694 = -1;
	volatile int64_t x695 = -14191261LL;
	int16_t x696 = INT16_MIN;
	int32_t t169 = -94;

    t169 = (((x693!=x694)%x695)>x696);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x698 = 0;
	int32_t x699 = 4357;
	int64_t x700 = INT64_MAX;
	volatile int32_t t170 = -40;

    t170 = (((x697!=x698)%x699)>x700);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x701 = INT8_MIN;
	uint32_t x702 = UINT32_MAX;
	int16_t x703 = INT16_MIN;
	static int32_t t171 = 846247178;

    t171 = (((x701!=x702)%x703)>x704);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x705 = 8U;
	static volatile int32_t x706 = INT32_MAX;
	int16_t x707 = INT16_MIN;
	int16_t x708 = INT16_MIN;
	volatile int32_t t172 = 3;

    t172 = (((x705!=x706)%x707)>x708);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x713 = -1;
	int16_t x714 = INT16_MAX;
	int8_t x716 = -3;
	int32_t t173 = 1;

    t173 = (((x713!=x714)%x715)>x716);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int8_t x717 = -1;
	static uint32_t x718 = 192853033U;
	volatile uint16_t x719 = 2U;
	int64_t x720 = 4436537991570629LL;
	static volatile int32_t t174 = 394606;

    t174 = (((x717!=x718)%x719)>x720);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x721 = INT32_MAX;
	static volatile uint16_t x723 = 15252U;
	int8_t x724 = INT8_MIN;
	static volatile int32_t t175 = -4;

    t175 = (((x721!=x722)%x723)>x724);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x725 = UINT8_MAX;
	int32_t x726 = INT32_MIN;
	volatile int32_t x727 = INT32_MAX;
	int32_t t176 = 303373;

    t176 = (((x725!=x726)%x727)>x728);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x729 = UINT64_MAX;
	volatile uint64_t x730 = 14LLU;
	static int64_t x731 = -1LL;
	uint32_t x732 = 43881U;

    t177 = (((x729!=x730)%x731)>x732);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x733 = -1LL;
	uint32_t x734 = 6U;
	int64_t x735 = INT64_MIN;
	volatile int32_t t178 = -439007;

    t178 = (((x733!=x734)%x735)>x736);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint64_t x737 = 4601962105822672438LLU;
	int64_t x738 = INT64_MAX;
	volatile int32_t x739 = 107243546;
	int64_t x740 = INT64_MIN;
	int32_t t179 = -52824;

    t179 = (((x737!=x738)%x739)>x740);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x741 = 25504597183LLU;
	int16_t x742 = -2;
	int64_t x744 = INT64_MAX;
	int32_t t180 = 856816021;

    t180 = (((x741!=x742)%x743)>x744);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint32_t x746 = UINT32_MAX;
	static int16_t x747 = INT16_MIN;
	volatile int32_t t181 = -519;

    t181 = (((x745!=x746)%x747)>x748);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x749 = -1LL;
	uint16_t x750 = UINT16_MAX;
	volatile int16_t x751 = INT16_MIN;
	static volatile int8_t x752 = INT8_MAX;
	static volatile int32_t t182 = 4083826;

    t182 = (((x749!=x750)%x751)>x752);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x753 = 591U;
	volatile int64_t x754 = INT64_MIN;
	volatile int8_t x755 = INT8_MIN;
	volatile int32_t t183 = 0;

    t183 = (((x753!=x754)%x755)>x756);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x757 = 527140441;
	uint16_t x759 = 1591U;
	volatile int64_t x760 = -1LL;
	volatile int32_t t184 = 2;

    t184 = (((x757!=x758)%x759)>x760);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x761 = 2U;
	int32_t t185 = 47664;

    t185 = (((x761!=x762)%x763)>x764);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x765 = INT16_MIN;
	int8_t x766 = INT8_MIN;
	static int32_t x768 = -11;
	volatile int32_t t186 = 690826098;

    t186 = (((x765!=x766)%x767)>x768);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint64_t x769 = UINT64_MAX;
	static uint16_t x770 = 0U;
	int32_t x771 = INT32_MIN;
	volatile int64_t x772 = -18333LL;
	static volatile int32_t t187 = -45848;

    t187 = (((x769!=x770)%x771)>x772);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x774 = INT64_MIN;
	volatile int8_t x776 = INT8_MAX;
	volatile int32_t t188 = 7;

    t188 = (((x773!=x774)%x775)>x776);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x777 = -2;
	int64_t x778 = -1LL;
	int32_t x780 = INT32_MIN;
	volatile int32_t t189 = -1928037;

    t189 = (((x777!=x778)%x779)>x780);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x781 = 5733889132LLU;
	int8_t x782 = INT8_MAX;
	volatile int32_t x783 = INT32_MIN;
	uint32_t x784 = 253U;
	volatile int32_t t190 = 43400;

    t190 = (((x781!=x782)%x783)>x784);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x785 = INT16_MIN;
	volatile int16_t x786 = -17;
	static int32_t x787 = -1;
	volatile uint32_t x788 = 21920U;
	int32_t t191 = 423804;

    t191 = (((x785!=x786)%x787)>x788);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint64_t x790 = 12342876240LLU;
	static int64_t x791 = INT64_MIN;
	int32_t t192 = -113;

    t192 = (((x789!=x790)%x791)>x792);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x793 = -26;
	volatile int16_t x795 = -3;
	uint64_t x796 = 76074251LLU;
	int32_t t193 = 67324397;

    t193 = (((x793!=x794)%x795)>x796);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x797 = INT8_MAX;
	volatile int8_t x798 = -6;
	static uint16_t x799 = 222U;
	static int32_t t194 = 995880;

    t194 = (((x797!=x798)%x799)>x800);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int32_t x801 = 2371546;
	uint16_t x802 = UINT16_MAX;
	volatile int8_t x804 = INT8_MIN;

    t195 = (((x801!=x802)%x803)>x804);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x805 = -1LL;
	int8_t x806 = INT8_MIN;
	int8_t x807 = -1;
	int16_t x808 = INT16_MIN;
	static int32_t t196 = -5;

    t196 = (((x805!=x806)%x807)>x808);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint8_t x809 = 2U;
	volatile uint32_t x810 = 202832283U;
	uint32_t x811 = 11311U;
	uint8_t x812 = 2U;
	static int32_t t197 = 11;

    t197 = (((x809!=x810)%x811)>x812);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x813 = -2483143;
	static int32_t x814 = INT32_MAX;
	int16_t x815 = -56;
	uint16_t x816 = 3U;
	int32_t t198 = -313271;

    t198 = (((x813!=x814)%x815)>x816);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x817 = -1;
	static int32_t x818 = -1;
	volatile uint16_t x819 = UINT16_MAX;
	int32_t t199 = 69460554;

    t199 = (((x817!=x818)%x819)>x820);

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


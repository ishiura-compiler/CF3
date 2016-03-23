
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

int8_t x1 = INT8_MIN;
uint8_t x2 = UINT8_MAX;
uint8_t x3 = 9U;
int64_t x7 = 457149054982165424LL;
int64_t x12 = INT64_MAX;
volatile int64_t t2 = -1LL;
volatile uint16_t x16 = 20U;
volatile int16_t x21 = INT16_MIN;
uint8_t x27 = 15U;
volatile int8_t x33 = -5;
int32_t x35 = 158652518;
static int32_t x44 = INT32_MAX;
static int32_t t9 = 13575117;
uint8_t x50 = 36U;
static uint8_t x52 = UINT8_MAX;
static volatile int16_t x57 = 3;
int8_t x58 = INT8_MIN;
uint64_t x62 = UINT64_MAX;
int64_t x78 = -1LL;
int8_t x79 = INT8_MAX;
int32_t t17 = 447506;
int8_t x81 = INT8_MAX;
static int32_t t19 = -76;
int16_t x89 = -1;
static int8_t x91 = 2;
uint8_t x96 = UINT8_MAX;
int64_t x113 = 689569LL;
static volatile uint64_t x115 = 1561582LLU;
uint32_t x117 = 0U;
int16_t x126 = -1;
int32_t x132 = INT32_MAX;
uint64_t x146 = UINT64_MAX;
int64_t x148 = INT64_MIN;
volatile int16_t x151 = 1;
int32_t t33 = -15;
volatile uint64_t x166 = UINT64_MAX;
uint8_t x170 = 20U;
uint16_t x171 = UINT16_MAX;
static int32_t t36 = -9593778;
uint32_t x180 = UINT32_MAX;
uint16_t x181 = 3U;
int64_t x182 = INT64_MIN;
volatile int64_t t38 = 15729333LL;
int8_t x197 = -15;
static uint64_t x198 = 721155228499136LLU;
uint32_t x199 = UINT32_MAX;
int8_t x202 = 6;
int16_t x210 = INT16_MAX;
uint16_t x214 = UINT16_MAX;
uint64_t x218 = UINT64_MAX;
int8_t x220 = INT8_MAX;
volatile int32_t t45 = -1160230;
int16_t x221 = 1;
int8_t x225 = INT8_MIN;
int8_t x226 = INT8_MIN;
uint64_t t48 = 2406087LLU;
int64_t x240 = INT64_MAX;
int16_t x241 = -1;
volatile uint16_t x242 = UINT16_MAX;
int64_t x249 = -11467863692671LL;
static uint16_t x251 = 114U;
uint32_t x253 = 2809060U;
int16_t x255 = -1;
uint16_t x260 = 7372U;
int8_t x266 = INT8_MIN;
volatile uint32_t x274 = 1259550755U;
static volatile uint64_t t59 = 17186793121167LLU;
static volatile int16_t x287 = 609;
static volatile int32_t t61 = -1900551;
uint16_t x295 = UINT16_MAX;
static volatile uint32_t x298 = UINT32_MAX;
uint8_t x304 = 3U;
volatile int32_t t64 = 4508917;
volatile int32_t t65 = -36926505;
uint32_t x321 = UINT32_MAX;
static int64_t x323 = 1840265223492LL;
volatile int32_t x325 = -21263;
static int8_t x331 = INT8_MAX;
static uint16_t x340 = UINT16_MAX;
int16_t x341 = INT16_MAX;
uint8_t x353 = UINT8_MAX;
volatile uint64_t x354 = 3680902LLU;
int32_t x357 = -32411570;
int64_t x366 = -1LL;
int64_t x381 = -1217865105LL;
volatile int32_t t78 = -33033;
int32_t t81 = -9964;
int64_t x397 = -1LL;
volatile int8_t x401 = INT8_MAX;
volatile int64_t t84 = -221LL;
int32_t t85 = 1;
int32_t x413 = INT32_MIN;
static uint8_t x417 = 0U;
int64_t x424 = 58087060035LL;
volatile int32_t t89 = 106118655;
static volatile uint64_t t90 = 5LLU;
uint64_t x435 = 1119833359038564597LLU;
uint8_t x439 = 10U;
static int16_t x442 = -1;
volatile int32_t t94 = 25734464;
int64_t x450 = 10262352LL;
static int16_t x468 = INT16_MIN;
volatile int32_t t99 = 1;
int64_t x473 = INT64_MIN;
int8_t x482 = INT8_MAX;
int16_t x496 = -1;
uint64_t x497 = 898205007635742LLU;
int16_t x512 = INT16_MAX;
static int64_t x515 = -17670LL;
uint8_t x530 = 1U;
uint8_t x538 = UINT8_MAX;
static volatile int16_t x543 = INT16_MAX;
uint16_t x551 = UINT16_MAX;
volatile int8_t x557 = 2;
int32_t t117 = 157;
static uint8_t x572 = 0U;
uint32_t x575 = UINT32_MAX;
int32_t x579 = INT32_MAX;
static volatile uint32_t t122 = 10515806U;
uint64_t x587 = UINT64_MAX;
static int8_t x590 = -1;
volatile uint16_t x593 = UINT16_MAX;
static volatile int16_t x601 = -1;
uint8_t x602 = 57U;
int32_t x604 = INT32_MIN;
static int32_t t128 = -367;
uint64_t x608 = UINT64_MAX;
uint64_t x610 = UINT64_MAX;
int16_t x611 = 8;
static volatile int32_t t130 = 97406399;
uint16_t x616 = UINT16_MAX;
uint16_t x625 = 3029U;
static int32_t x630 = 36466951;
int32_t x636 = INT32_MIN;
int32_t t136 = -352;
volatile int32_t t138 = -49;
volatile int32_t x653 = INT32_MIN;
uint8_t x661 = 2U;
int64_t t142 = 498812877209LL;
static volatile uint64_t t143 = 197LLU;
static volatile uint64_t x675 = 953202714050575327LLU;
int16_t x676 = -832;
int64_t x679 = -1LL;
uint32_t x689 = 197U;
int8_t x700 = -1;
static int64_t x701 = -1LL;
static int32_t x702 = -166054;
uint32_t x715 = UINT32_MAX;
int8_t x725 = INT8_MIN;
int16_t x726 = INT16_MAX;
volatile uint32_t x728 = UINT32_MAX;
int64_t x737 = INT64_MIN;
int16_t x739 = -44;
int8_t x742 = -2;
int32_t x753 = 7781;
volatile uint64_t t160 = 3LLU;
int64_t x764 = -1LL;
int8_t x770 = INT8_MAX;
volatile int16_t x775 = 1;
volatile uint64_t t163 = 320LLU;
int16_t x784 = INT16_MIN;
uint16_t x792 = 21348U;
volatile int32_t t166 = -328008;
uint8_t x795 = 0U;
uint64_t x797 = 64LLU;
int16_t x803 = INT16_MAX;
int32_t x805 = -1;
volatile int64_t t170 = -3316706566718196931LL;
uint32_t x811 = 124154U;
static volatile uint32_t x835 = 1702U;
static int64_t t176 = 761320LL;
volatile int8_t x839 = 27;
int32_t x846 = -1;
uint32_t x848 = UINT32_MAX;
uint32_t t178 = 12U;
static volatile int32_t t179 = -28;
int32_t x856 = INT32_MAX;
volatile int32_t x862 = INT32_MAX;
int64_t x863 = -1LL;
volatile int32_t t185 = 91480544;
volatile int8_t x881 = INT8_MIN;
uint16_t x882 = 7U;
static int16_t x883 = -1;
int16_t x885 = INT16_MIN;
int32_t t187 = -424674;
volatile uint16_t x890 = 7321U;
static uint64_t x912 = UINT64_MAX;
uint64_t t192 = 9830904523LLU;
int64_t x916 = INT64_MIN;
int16_t x919 = 464;
uint32_t x921 = UINT32_MAX;
int64_t x924 = INT64_MIN;
int64_t x930 = 1083367530LL;
static volatile uint32_t x933 = 119U;
volatile uint64_t x937 = UINT64_MAX;
int16_t x939 = INT16_MIN;
volatile uint32_t x942 = UINT32_MAX;
int32_t x943 = -1;


void f0(void) {
    	int32_t x4 = -2721;
	static int32_t t0 = 112648775;

    t0 = (((x1+x2)!=x3)&x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x5 = -5;
	uint64_t x6 = 2037193437687935LLU;
	volatile uint64_t x8 = 32381499789092LLU;
	volatile uint64_t t1 = 15595LLU;

    t1 = (((x5+x6)!=x7)&x8);

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint64_t x9 = UINT64_MAX;
	uint8_t x10 = 2U;
	uint64_t x11 = UINT64_MAX;

    t2 = (((x9+x10)!=x11)&x12);

    if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = UINT16_MAX;
	static uint32_t x14 = 1U;
	int16_t x15 = -1;
	int32_t t3 = 267287302;

    t3 = (((x13+x14)!=x15)&x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = UINT32_MAX;
	int32_t x18 = INT32_MAX;
	int16_t x19 = 4;
	uint16_t x20 = 5U;
	int32_t t4 = -1;

    t4 = (((x17+x18)!=x19)&x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x22 = INT16_MIN;
	volatile int8_t x23 = -1;
	int64_t x24 = 440813824847LL;
	int64_t t5 = -3417072637996LL;

    t5 = (((x21+x22)!=x23)&x24);

    if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = UINT8_MAX;
	static int8_t x26 = INT8_MAX;
	static int16_t x28 = INT16_MIN;
	int32_t t6 = 263;

    t6 = (((x25+x26)!=x27)&x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = -12;
	int16_t x30 = INT16_MAX;
	uint8_t x31 = 9U;
	int8_t x32 = 0;
	static volatile int32_t t7 = -95796989;

    t7 = (((x29+x30)!=x31)&x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x34 = -1;
	static int64_t x36 = INT64_MIN;
	static int64_t t8 = -1726928LL;

    t8 = (((x33+x34)!=x35)&x36);

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x41 = INT16_MAX;
	int16_t x42 = INT16_MAX;
	uint64_t x43 = 188132080444652LLU;

    t9 = (((x41+x42)!=x43)&x44);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x45 = UINT16_MAX;
	static int32_t x46 = INT32_MIN;
	static int64_t x47 = -1LL;
	static int32_t x48 = INT32_MAX;
	int32_t t10 = -66478583;

    t10 = (((x45+x46)!=x47)&x48);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x49 = 37946085067115608LL;
	volatile uint32_t x51 = UINT32_MAX;
	int32_t t11 = -126;

    t11 = (((x49+x50)!=x51)&x52);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x53 = 8006U;
	uint32_t x54 = 0U;
	int8_t x55 = -1;
	int8_t x56 = -1;
	int32_t t12 = 0;

    t12 = (((x53+x54)!=x55)&x56);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x59 = -89;
	uint64_t x60 = 427LLU;
	uint64_t t13 = 116330222LLU;

    t13 = (((x57+x58)!=x59)&x60);

    if (t13 != 1LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static int32_t x61 = -1;
	volatile int8_t x63 = -3;
	uint8_t x64 = 91U;
	int32_t t14 = -67;

    t14 = (((x61+x62)!=x63)&x64);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x65 = INT32_MIN;
	uint32_t x66 = 2000U;
	int8_t x67 = INT8_MIN;
	uint16_t x68 = 1U;
	static volatile int32_t t15 = 1786677;

    t15 = (((x65+x66)!=x67)&x68);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x69 = INT64_MAX;
	int32_t x70 = -901989;
	uint8_t x71 = UINT8_MAX;
	static int16_t x72 = INT16_MIN;
	static int32_t t16 = -114971;

    t16 = (((x69+x70)!=x71)&x72);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x77 = UINT32_MAX;
	int32_t x80 = -1;

    t17 = (((x77+x78)!=x79)&x80);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x82 = -56040374;
	static uint64_t x83 = 2412515471859051LLU;
	int8_t x84 = -1;
	static int32_t t18 = -1565;

    t18 = (((x81+x82)!=x83)&x84);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x85 = 291281U;
	static int64_t x86 = INT64_MIN;
	int8_t x87 = INT8_MAX;
	static volatile uint16_t x88 = UINT16_MAX;

    t19 = (((x85+x86)!=x87)&x88);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x90 = 3073112609284945368LLU;
	static int8_t x92 = -11;
	volatile int32_t t20 = 4514;

    t20 = (((x89+x90)!=x91)&x92);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x93 = 73603187LL;
	int16_t x94 = INT16_MAX;
	uint32_t x95 = 127202742U;
	int32_t t21 = -1216001;

    t21 = (((x93+x94)!=x95)&x96);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x97 = -1;
	static int16_t x98 = 8187;
	int16_t x99 = -420;
	uint16_t x100 = 26U;
	int32_t t22 = 18;

    t22 = (((x97+x98)!=x99)&x100);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x109 = UINT64_MAX;
	volatile int64_t x110 = 977499885230LL;
	uint32_t x111 = 450305865U;
	int64_t x112 = INT64_MIN;
	static volatile int64_t t23 = 6411454LL;

    t23 = (((x109+x110)!=x111)&x112);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint8_t x114 = 48U;
	uint32_t x116 = 1541457306U;
	static volatile uint32_t t24 = 416299U;

    t24 = (((x113+x114)!=x115)&x116);

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x118 = INT8_MIN;
	uint32_t x119 = 6803054U;
	uint8_t x120 = 1U;
	volatile int32_t t25 = 30;

    t25 = (((x117+x118)!=x119)&x120);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int8_t x125 = 0;
	static uint64_t x127 = UINT64_MAX;
	static int32_t x128 = INT32_MAX;
	static int32_t t26 = 10;

    t26 = (((x125+x126)!=x127)&x128);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x129 = INT16_MIN;
	uint8_t x130 = 7U;
	int64_t x131 = -317LL;
	int32_t t27 = 1;

    t27 = (((x129+x130)!=x131)&x132);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x137 = -1;
	int8_t x138 = INT8_MAX;
	int32_t x139 = 56;
	int64_t x140 = -1613857LL;
	static int64_t t28 = -29539493687507LL;

    t28 = (((x137+x138)!=x139)&x140);

    if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x141 = -1;
	uint64_t x142 = 1833465LLU;
	uint8_t x143 = 39U;
	static int8_t x144 = INT8_MIN;
	int32_t t29 = -14431753;

    t29 = (((x141+x142)!=x143)&x144);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x145 = -1;
	int16_t x147 = -1;
	static int64_t t30 = 3LL;

    t30 = (((x145+x146)!=x147)&x148);

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x149 = 65697710U;
	int32_t x150 = 48828246;
	int32_t x152 = -1;
	int32_t t31 = -34467;

    t31 = (((x149+x150)!=x151)&x152);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x153 = 54266847438565LLU;
	static uint32_t x154 = 569U;
	uint64_t x155 = UINT64_MAX;
	int32_t x156 = INT32_MIN;
	int32_t t32 = -207;

    t32 = (((x153+x154)!=x155)&x156);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x157 = INT8_MIN;
	int8_t x158 = -1;
	volatile int64_t x159 = -334588833060666726LL;
	static uint8_t x160 = 3U;

    t33 = (((x157+x158)!=x159)&x160);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x165 = INT32_MIN;
	uint32_t x167 = UINT32_MAX;
	uint16_t x168 = 329U;
	int32_t t34 = 90;

    t34 = (((x165+x166)!=x167)&x168);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x169 = INT8_MAX;
	volatile int16_t x172 = -1;
	volatile int32_t t35 = 34;

    t35 = (((x169+x170)!=x171)&x172);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x173 = -1;
	static volatile int8_t x174 = 0;
	int8_t x175 = INT8_MIN;
	static int16_t x176 = 0;

    t36 = (((x173+x174)!=x175)&x176);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint64_t x177 = 4325193009190LLU;
	uint64_t x178 = UINT64_MAX;
	uint16_t x179 = UINT16_MAX;
	static uint32_t t37 = 40901727U;

    t37 = (((x177+x178)!=x179)&x180);

    if (t37 != 1U) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x183 = UINT64_MAX;
	static int64_t x184 = -1LL;

    t38 = (((x181+x182)!=x183)&x184);

    if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x185 = 995296306U;
	int64_t x186 = INT64_MIN;
	int64_t x187 = INT64_MIN;
	uint32_t x188 = UINT32_MAX;
	uint32_t t39 = 178400918U;

    t39 = (((x185+x186)!=x187)&x188);

    if (t39 != 1U) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x193 = INT8_MAX;
	uint8_t x194 = UINT8_MAX;
	int64_t x195 = 2363106478LL;
	volatile uint8_t x196 = 44U;
	static int32_t t40 = 31792;

    t40 = (((x193+x194)!=x195)&x196);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x200 = 87U;
	static volatile int32_t t41 = -34191;

    t41 = (((x197+x198)!=x199)&x200);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x201 = INT8_MIN;
	uint16_t x203 = UINT16_MAX;
	uint32_t x204 = 425184283U;
	volatile uint32_t t42 = 1198765U;

    t42 = (((x201+x202)!=x203)&x204);

    if (t42 != 1U) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x209 = UINT32_MAX;
	int8_t x211 = 1;
	uint16_t x212 = 3703U;
	int32_t t43 = -3;

    t43 = (((x209+x210)!=x211)&x212);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x213 = INT64_MIN;
	uint64_t x215 = 1125343847185185447LLU;
	volatile uint64_t x216 = 61895LLU;
	volatile uint64_t t44 = 5LLU;

    t44 = (((x213+x214)!=x215)&x216);

    if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x217 = -1;
	int16_t x219 = -51;

    t45 = (((x217+x218)!=x219)&x220);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x222 = UINT64_MAX;
	uint32_t x223 = UINT32_MAX;
	int8_t x224 = -2;
	int32_t t46 = -16;

    t46 = (((x221+x222)!=x223)&x224);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x227 = -37;
	static int8_t x228 = -2;
	volatile int32_t t47 = -1000367;

    t47 = (((x225+x226)!=x227)&x228);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x233 = -1LL;
	uint64_t x234 = 39900942467830633LLU;
	int64_t x235 = -721338807133004848LL;
	uint64_t x236 = UINT64_MAX;

    t48 = (((x233+x234)!=x235)&x236);

    if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x237 = 1;
	static uint32_t x238 = UINT32_MAX;
	uint64_t x239 = UINT64_MAX;
	int64_t t49 = -428LL;

    t49 = (((x237+x238)!=x239)&x240);

    if (t49 != 1LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x243 = 44U;
	static volatile int16_t x244 = INT16_MIN;
	volatile int32_t t50 = -33871;

    t50 = (((x241+x242)!=x243)&x244);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x245 = -316845087LL;
	volatile int16_t x246 = -58;
	int32_t x247 = 261608486;
	volatile int64_t x248 = 3633LL;
	int64_t t51 = 240591461373LL;

    t51 = (((x245+x246)!=x247)&x248);

    if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x250 = UINT32_MAX;
	uint32_t x252 = UINT32_MAX;
	volatile uint32_t t52 = 0U;

    t52 = (((x249+x250)!=x251)&x252);

    if (t52 != 1U) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x254 = 5;
	uint32_t x256 = 203U;
	volatile uint32_t t53 = 4U;

    t53 = (((x253+x254)!=x255)&x256);

    if (t53 != 1U) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x257 = INT16_MAX;
	int8_t x258 = -1;
	volatile uint32_t x259 = 6570U;
	int32_t t54 = -400056183;

    t54 = (((x257+x258)!=x259)&x260);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x261 = 7LL;
	uint16_t x262 = 76U;
	static int32_t x263 = -1;
	int8_t x264 = INT8_MAX;
	volatile int32_t t55 = 0;

    t55 = (((x261+x262)!=x263)&x264);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x265 = UINT8_MAX;
	volatile uint64_t x267 = 1011962LLU;
	int64_t x268 = -1LL;
	volatile int64_t t56 = 80261704789975266LL;

    t56 = (((x265+x266)!=x267)&x268);

    if (t56 != 1LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x269 = -204;
	int8_t x270 = 3;
	uint32_t x271 = 40173105U;
	static int16_t x272 = INT16_MIN;
	int32_t t57 = -89136;

    t57 = (((x269+x270)!=x271)&x272);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x273 = -6800;
	int64_t x275 = -246000700951884LL;
	int64_t x276 = INT64_MIN;
	volatile int64_t t58 = 199LL;

    t58 = (((x273+x274)!=x275)&x276);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x277 = 148360;
	volatile uint64_t x278 = 308656LLU;
	static uint32_t x279 = 61112539U;
	static uint64_t x280 = 4529191261045LLU;

    t59 = (((x277+x278)!=x279)&x280);

    if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x285 = INT64_MAX;
	uint64_t x286 = 173LLU;
	int64_t x288 = INT64_MIN;
	volatile int64_t t60 = 61051666411650LL;

    t60 = (((x285+x286)!=x287)&x288);

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x289 = -1139;
	int8_t x290 = INT8_MAX;
	int16_t x291 = -1;
	int32_t x292 = INT32_MIN;

    t61 = (((x289+x290)!=x291)&x292);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x293 = UINT64_MAX;
	int8_t x294 = INT8_MIN;
	uint32_t x296 = 13925689U;
	volatile uint32_t t62 = 974621028U;

    t62 = (((x293+x294)!=x295)&x296);

    if (t62 != 1U) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x297 = -1814;
	static uint64_t x299 = 4576891350048882LLU;
	int8_t x300 = -1;
	static int32_t t63 = -10678744;

    t63 = (((x297+x298)!=x299)&x300);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x301 = -7;
	int16_t x302 = 405;
	int64_t x303 = INT64_MAX;

    t64 = (((x301+x302)!=x303)&x304);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint8_t x309 = 22U;
	uint32_t x310 = 4339215U;
	int16_t x311 = -341;
	int8_t x312 = -1;

    t65 = (((x309+x310)!=x311)&x312);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x322 = UINT32_MAX;
	int8_t x324 = INT8_MAX;
	volatile int32_t t66 = -782;

    t66 = (((x321+x322)!=x323)&x324);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x326 = 1573;
	uint32_t x327 = 1U;
	static int64_t x328 = -1LL;
	static int64_t t67 = 13288635955800741LL;

    t67 = (((x325+x326)!=x327)&x328);

    if (t67 != 1LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x329 = INT64_MIN;
	int8_t x330 = INT8_MAX;
	uint32_t x332 = 3402U;
	static volatile uint32_t t68 = 723U;

    t68 = (((x329+x330)!=x331)&x332);

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x337 = 8045908979685041LLU;
	static volatile int32_t x338 = 90020;
	volatile uint16_t x339 = UINT16_MAX;
	int32_t t69 = 629821;

    t69 = (((x337+x338)!=x339)&x340);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x342 = 0;
	int8_t x343 = INT8_MIN;
	uint32_t x344 = UINT32_MAX;
	volatile uint32_t t70 = 0U;

    t70 = (((x341+x342)!=x343)&x344);

    if (t70 != 1U) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x345 = 1864585260935035LL;
	int32_t x346 = INT32_MAX;
	volatile int32_t x347 = INT32_MAX;
	uint16_t x348 = 1204U;
	volatile int32_t t71 = 33;

    t71 = (((x345+x346)!=x347)&x348);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint32_t x349 = 79U;
	int64_t x350 = 38150210492857859LL;
	int16_t x351 = INT16_MAX;
	static int8_t x352 = INT8_MIN;
	int32_t t72 = -9663;

    t72 = (((x349+x350)!=x351)&x352);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint8_t x355 = 1U;
	int8_t x356 = -1;
	int32_t t73 = -4836;

    t73 = (((x353+x354)!=x355)&x356);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x358 = 8013;
	int64_t x359 = -1LL;
	int16_t x360 = INT16_MIN;
	volatile int32_t t74 = 11243547;

    t74 = (((x357+x358)!=x359)&x360);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x365 = -1;
	int16_t x367 = INT16_MAX;
	uint8_t x368 = 2U;
	int32_t t75 = 629868;

    t75 = (((x365+x366)!=x367)&x368);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x369 = 0;
	uint32_t x370 = 712481991U;
	volatile uint64_t x371 = UINT64_MAX;
	int64_t x372 = INT64_MIN;
	volatile int64_t t76 = -1967757124LL;

    t76 = (((x369+x370)!=x371)&x372);

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x373 = INT64_MIN;
	volatile int16_t x374 = INT16_MAX;
	volatile int16_t x375 = INT16_MIN;
	int64_t x376 = -1LL;
	volatile int64_t t77 = -48477LL;

    t77 = (((x373+x374)!=x375)&x376);

    if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x382 = 33;
	static uint8_t x383 = UINT8_MAX;
	uint8_t x384 = UINT8_MAX;

    t78 = (((x381+x382)!=x383)&x384);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x385 = INT32_MAX;
	int32_t x386 = -26206;
	uint64_t x387 = 14313082420910LLU;
	static uint8_t x388 = 65U;
	volatile int32_t t79 = -96699;

    t79 = (((x385+x386)!=x387)&x388);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x389 = UINT16_MAX;
	int64_t x390 = INT64_MIN;
	int64_t x391 = INT64_MIN;
	int64_t x392 = INT64_MIN;
	int64_t t80 = -94018842561LL;

    t80 = (((x389+x390)!=x391)&x392);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x393 = INT16_MIN;
	int32_t x394 = -1;
	volatile int32_t x395 = INT32_MIN;
	volatile int16_t x396 = INT16_MIN;

    t81 = (((x393+x394)!=x395)&x396);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x398 = -1;
	uint64_t x399 = 59949851690LLU;
	int32_t x400 = 14858968;
	int32_t t82 = -385928;

    t82 = (((x397+x398)!=x399)&x400);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x402 = 7U;
	int16_t x403 = INT16_MIN;
	uint64_t x404 = 245487927LLU;
	static uint64_t t83 = 23081882LLU;

    t83 = (((x401+x402)!=x403)&x404);

    if (t83 != 1LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x405 = -54LL;
	volatile int8_t x406 = INT8_MAX;
	volatile uint8_t x407 = 0U;
	volatile int64_t x408 = -1LL;

    t84 = (((x405+x406)!=x407)&x408);

    if (t84 != 1LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x409 = -1;
	volatile int8_t x410 = 1;
	volatile int32_t x411 = -9;
	volatile int16_t x412 = INT16_MIN;

    t85 = (((x409+x410)!=x411)&x412);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x414 = 1U;
	int64_t x415 = 14666888776601LL;
	int64_t x416 = -447LL;
	volatile int64_t t86 = -2224190724285001LL;

    t86 = (((x413+x414)!=x415)&x416);

    if (t86 != 1LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x418 = -1;
	uint16_t x419 = 3U;
	int16_t x420 = INT16_MIN;
	int32_t t87 = -1;

    t87 = (((x417+x418)!=x419)&x420);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x421 = -82581221534583LL;
	static uint16_t x422 = 868U;
	volatile int16_t x423 = -1036;
	volatile int64_t t88 = 1LL;

    t88 = (((x421+x422)!=x423)&x424);

    if (t88 != 1LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x425 = -52935;
	uint32_t x426 = 3506U;
	int16_t x427 = -392;
	int32_t x428 = -22524;

    t89 = (((x425+x426)!=x427)&x428);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint16_t x429 = 676U;
	int32_t x430 = -3;
	uint32_t x431 = 2759U;
	static uint64_t x432 = 6315188LLU;

    t90 = (((x429+x430)!=x431)&x432);

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x433 = INT32_MIN;
	int32_t x434 = INT32_MAX;
	uint8_t x436 = 2U;
	int32_t t91 = 3238614;

    t91 = (((x433+x434)!=x435)&x436);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x437 = 7U;
	int16_t x438 = INT16_MIN;
	volatile int64_t x440 = INT64_MAX;
	static int64_t t92 = 1LL;

    t92 = (((x437+x438)!=x439)&x440);

    if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x441 = -1LL;
	int16_t x443 = INT16_MIN;
	int16_t x444 = INT16_MIN;
	volatile int32_t t93 = -84546;

    t93 = (((x441+x442)!=x443)&x444);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x445 = INT8_MIN;
	uint64_t x446 = UINT64_MAX;
	uint64_t x447 = 486LLU;
	int16_t x448 = INT16_MIN;

    t94 = (((x445+x446)!=x447)&x448);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint8_t x449 = 1U;
	static uint8_t x451 = UINT8_MAX;
	volatile int64_t x452 = INT64_MIN;
	static int64_t t95 = 258495LL;

    t95 = (((x449+x450)!=x451)&x452);

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint64_t x457 = 1249916LLU;
	volatile int8_t x458 = 26;
	int64_t x459 = INT64_MAX;
	uint64_t x460 = 293LLU;
	volatile uint64_t t96 = 6729696990507311LLU;

    t96 = (((x457+x458)!=x459)&x460);

    if (t96 != 1LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x461 = 133250;
	int32_t x462 = INT32_MIN;
	uint64_t x463 = UINT64_MAX;
	static int64_t x464 = -53LL;
	int64_t t97 = -4LL;

    t97 = (((x461+x462)!=x463)&x464);

    if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x465 = INT64_MAX;
	int16_t x466 = INT16_MIN;
	int16_t x467 = INT16_MIN;
	volatile int32_t t98 = -10;

    t98 = (((x465+x466)!=x467)&x468);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x469 = -42109665404LL;
	static int8_t x470 = INT8_MIN;
	volatile int8_t x471 = INT8_MAX;
	static volatile uint8_t x472 = 1U;

    t99 = (((x469+x470)!=x471)&x472);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x474 = UINT8_MAX;
	int8_t x475 = INT8_MIN;
	static int32_t x476 = -2499;
	static volatile int32_t t100 = 18210205;

    t100 = (((x473+x474)!=x475)&x476);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x481 = INT64_MIN;
	int32_t x483 = INT32_MAX;
	static volatile int64_t x484 = INT64_MIN;
	volatile int64_t t101 = -2442894650422163023LL;

    t101 = (((x481+x482)!=x483)&x484);

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x489 = INT16_MIN;
	uint8_t x490 = UINT8_MAX;
	uint64_t x491 = UINT64_MAX;
	int64_t x492 = -1LL;
	static int64_t t102 = 1215123954182362679LL;

    t102 = (((x489+x490)!=x491)&x492);

    if (t102 != 1LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x493 = INT16_MAX;
	int8_t x494 = INT8_MIN;
	uint32_t x495 = 1U;
	int32_t t103 = -118030841;

    t103 = (((x493+x494)!=x495)&x496);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x498 = INT32_MIN;
	int64_t x499 = INT64_MIN;
	uint32_t x500 = 63484692U;
	volatile uint32_t t104 = 470U;

    t104 = (((x497+x498)!=x499)&x500);

    if (t104 != 0U) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x501 = -1LL;
	volatile uint16_t x502 = UINT16_MAX;
	static int64_t x503 = -3984497LL;
	uint32_t x504 = 163U;
	static volatile uint32_t t105 = 5267483U;

    t105 = (((x501+x502)!=x503)&x504);

    if (t105 != 1U) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x509 = INT64_MAX;
	int32_t x510 = INT32_MIN;
	static uint8_t x511 = 0U;
	static volatile int32_t t106 = 12045;

    t106 = (((x509+x510)!=x511)&x512);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x513 = INT64_MIN;
	int64_t x514 = INT64_MAX;
	uint64_t x516 = 25762LLU;
	static volatile uint64_t t107 = 4450098552570011164LLU;

    t107 = (((x513+x514)!=x515)&x516);

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x517 = INT16_MAX;
	volatile uint64_t x518 = 2433920228433793LLU;
	volatile int8_t x519 = INT8_MIN;
	int16_t x520 = -1;
	volatile int32_t t108 = -784474;

    t108 = (((x517+x518)!=x519)&x520);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x521 = -26;
	int16_t x522 = INT16_MAX;
	int32_t x523 = INT32_MAX;
	static int16_t x524 = INT16_MAX;
	volatile int32_t t109 = 861308;

    t109 = (((x521+x522)!=x523)&x524);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x525 = -1;
	int8_t x526 = INT8_MIN;
	static uint16_t x527 = UINT16_MAX;
	int16_t x528 = INT16_MAX;
	volatile int32_t t110 = -2688257;

    t110 = (((x525+x526)!=x527)&x528);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x529 = INT8_MIN;
	static int16_t x531 = -9553;
	int32_t x532 = -1;
	int32_t t111 = -656;

    t111 = (((x529+x530)!=x531)&x532);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x533 = INT8_MIN;
	uint8_t x534 = UINT8_MAX;
	int8_t x535 = -13;
	uint16_t x536 = 8U;
	volatile int32_t t112 = 777196145;

    t112 = (((x533+x534)!=x535)&x536);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x537 = -1;
	uint64_t x539 = 52248597LLU;
	volatile uint64_t x540 = 5169453LLU;
	uint64_t t113 = 503043387LLU;

    t113 = (((x537+x538)!=x539)&x540);

    if (t113 != 1LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint16_t x541 = UINT16_MAX;
	volatile uint16_t x542 = 272U;
	volatile int64_t x544 = INT64_MIN;
	int64_t t114 = -19754047LL;

    t114 = (((x541+x542)!=x543)&x544);

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x549 = 55U;
	volatile uint64_t x550 = 5336353779009LLU;
	uint64_t x552 = UINT64_MAX;
	uint64_t t115 = 9466679922LLU;

    t115 = (((x549+x550)!=x551)&x552);

    if (t115 != 1LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x553 = INT32_MIN;
	uint16_t x554 = UINT16_MAX;
	uint8_t x555 = UINT8_MAX;
	int64_t x556 = INT64_MIN;
	int64_t t116 = 506098726LL;

    t116 = (((x553+x554)!=x555)&x556);

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x558 = INT32_MIN;
	int8_t x559 = -1;
	volatile int8_t x560 = -1;

    t117 = (((x557+x558)!=x559)&x560);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x561 = 10U;
	int32_t x562 = INT32_MIN;
	uint8_t x563 = 3U;
	volatile uint8_t x564 = UINT8_MAX;
	volatile int32_t t118 = 3871992;

    t118 = (((x561+x562)!=x563)&x564);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x565 = -26;
	volatile uint16_t x566 = 31U;
	int32_t x567 = INT32_MIN;
	uint64_t x568 = 50145831LLU;
	static uint64_t t119 = 4LLU;

    t119 = (((x565+x566)!=x567)&x568);

    if (t119 != 1LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x569 = UINT16_MAX;
	static volatile uint8_t x570 = 22U;
	volatile uint64_t x571 = UINT64_MAX;
	int32_t t120 = 5595102;

    t120 = (((x569+x570)!=x571)&x572);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int64_t x573 = INT64_MAX;
	static int32_t x574 = -1;
	uint8_t x576 = UINT8_MAX;
	volatile int32_t t121 = 57575360;

    t121 = (((x573+x574)!=x575)&x576);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x577 = 39;
	int64_t x578 = INT64_MIN;
	uint32_t x580 = 6U;

    t122 = (((x577+x578)!=x579)&x580);

    if (t122 != 0U) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x581 = 24U;
	volatile uint64_t x582 = UINT64_MAX;
	int16_t x583 = INT16_MIN;
	int64_t x584 = INT64_MIN;
	volatile int64_t t123 = 9519LL;

    t123 = (((x581+x582)!=x583)&x584);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint32_t x585 = 6U;
	int8_t x586 = -11;
	int16_t x588 = INT16_MIN;
	volatile int32_t t124 = 20;

    t124 = (((x585+x586)!=x587)&x588);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x589 = INT8_MIN;
	uint16_t x591 = 6U;
	uint8_t x592 = 23U;
	volatile int32_t t125 = -481176947;

    t125 = (((x589+x590)!=x591)&x592);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x594 = -3252;
	volatile uint32_t x595 = UINT32_MAX;
	volatile uint32_t x596 = 46U;
	uint32_t t126 = 61036U;

    t126 = (((x593+x594)!=x595)&x596);

    if (t126 != 0U) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x597 = 1U;
	uint64_t x598 = 114064671LLU;
	static volatile int8_t x599 = INT8_MIN;
	static int8_t x600 = -1;
	int32_t t127 = 35118;

    t127 = (((x597+x598)!=x599)&x600);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x603 = INT16_MAX;

    t128 = (((x601+x602)!=x603)&x604);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x605 = -4;
	int32_t x606 = 13;
	int64_t x607 = INT64_MIN;
	volatile uint64_t t129 = 7537742334177LLU;

    t129 = (((x605+x606)!=x607)&x608);

    if (t129 != 1LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x609 = INT16_MIN;
	int16_t x612 = INT16_MAX;

    t130 = (((x609+x610)!=x611)&x612);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x613 = 897241LLU;
	volatile uint64_t x614 = UINT64_MAX;
	int8_t x615 = INT8_MIN;
	volatile int32_t t131 = -2;

    t131 = (((x613+x614)!=x615)&x616);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x617 = INT64_MIN;
	int64_t x618 = INT64_MAX;
	int32_t x619 = -1;
	static uint16_t x620 = 6846U;
	int32_t t132 = 1;

    t132 = (((x617+x618)!=x619)&x620);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x621 = 0U;
	int8_t x622 = INT8_MIN;
	uint8_t x623 = 22U;
	int32_t x624 = -101226870;
	volatile int32_t t133 = 35348;

    t133 = (((x621+x622)!=x623)&x624);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x626 = UINT64_MAX;
	int16_t x627 = -1;
	static volatile int16_t x628 = -26;
	int32_t t134 = 2;

    t134 = (((x625+x626)!=x627)&x628);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x629 = -1;
	int64_t x631 = INT64_MIN;
	int8_t x632 = 17;
	volatile int32_t t135 = 745;

    t135 = (((x629+x630)!=x631)&x632);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x633 = INT64_MIN;
	int16_t x634 = INT16_MAX;
	int64_t x635 = 3407320939196238LL;

    t136 = (((x633+x634)!=x635)&x636);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x641 = INT16_MIN;
	volatile int64_t x642 = INT64_MAX;
	static volatile uint16_t x643 = 9150U;
	int8_t x644 = INT8_MIN;
	volatile int32_t t137 = -20;

    t137 = (((x641+x642)!=x643)&x644);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x649 = 146187624;
	static uint32_t x650 = 915688326U;
	static volatile int64_t x651 = INT64_MIN;
	static uint16_t x652 = 1U;

    t138 = (((x649+x650)!=x651)&x652);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x654 = 1U;
	uint8_t x655 = 1U;
	static int16_t x656 = INT16_MIN;
	int32_t t139 = -6;

    t139 = (((x653+x654)!=x655)&x656);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x657 = INT8_MAX;
	int16_t x658 = 12;
	uint16_t x659 = 893U;
	volatile int64_t x660 = INT64_MIN;
	static volatile int64_t t140 = 11LL;

    t140 = (((x657+x658)!=x659)&x660);

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x662 = INT32_MIN;
	static uint64_t x663 = 11164480348765631LLU;
	volatile int8_t x664 = 10;
	int32_t t141 = -75208333;

    t141 = (((x661+x662)!=x663)&x664);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x665 = -272;
	uint64_t x666 = 3904LLU;
	int32_t x667 = INT32_MIN;
	int64_t x668 = -1599417LL;

    t142 = (((x665+x666)!=x667)&x668);

    if (t142 != 1LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x669 = INT8_MIN;
	int32_t x670 = -1;
	static int8_t x671 = INT8_MIN;
	static uint64_t x672 = 232855637187918LLU;

    t143 = (((x669+x670)!=x671)&x672);

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x673 = -1LL;
	int32_t x674 = -1;
	volatile int32_t t144 = 5;

    t144 = (((x673+x674)!=x675)&x676);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x677 = INT64_MIN;
	uint16_t x678 = 11482U;
	int64_t x680 = INT64_MIN;
	volatile int64_t t145 = 292061741972452761LL;

    t145 = (((x677+x678)!=x679)&x680);

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x690 = UINT16_MAX;
	int64_t x691 = -1LL;
	int64_t x692 = INT64_MIN;
	int64_t t146 = 22612667308LL;

    t146 = (((x689+x690)!=x691)&x692);

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x693 = UINT8_MAX;
	int64_t x694 = INT64_MIN;
	int8_t x695 = -1;
	static volatile int32_t x696 = -1;
	volatile int32_t t147 = -63;

    t147 = (((x693+x694)!=x695)&x696);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x697 = 28444431;
	volatile int8_t x698 = -1;
	uint64_t x699 = 30152LLU;
	volatile int32_t t148 = 10410087;

    t148 = (((x697+x698)!=x699)&x700);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x703 = INT64_MAX;
	volatile int32_t x704 = INT32_MAX;
	static volatile int32_t t149 = 210330;

    t149 = (((x701+x702)!=x703)&x704);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x705 = -1LL;
	int8_t x706 = -1;
	int8_t x707 = INT8_MIN;
	uint64_t x708 = 1308LLU;
	uint64_t t150 = 12837299072808541LLU;

    t150 = (((x705+x706)!=x707)&x708);

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x709 = 1039549U;
	volatile uint16_t x710 = UINT16_MAX;
	int16_t x711 = INT16_MAX;
	int8_t x712 = -1;
	int32_t t151 = 1;

    t151 = (((x709+x710)!=x711)&x712);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile uint64_t x713 = 455930007266249LLU;
	int16_t x714 = -5;
	static int8_t x716 = -1;
	int32_t t152 = 133044435;

    t152 = (((x713+x714)!=x715)&x716);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x717 = 0LL;
	int16_t x718 = -1;
	volatile int16_t x719 = 0;
	int64_t x720 = 11196438LL;
	volatile int64_t t153 = -2808891322164868LL;

    t153 = (((x717+x718)!=x719)&x720);

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x727 = INT64_MIN;
	volatile uint32_t t154 = 15U;

    t154 = (((x725+x726)!=x727)&x728);

    if (t154 != 1U) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x733 = 2586184110168LLU;
	uint16_t x734 = 15240U;
	static volatile int16_t x735 = -186;
	static int16_t x736 = INT16_MAX;
	static volatile int32_t t155 = -83571;

    t155 = (((x733+x734)!=x735)&x736);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x738 = 1U;
	int64_t x740 = -1LL;
	int64_t t156 = -7756281827998329LL;

    t156 = (((x737+x738)!=x739)&x740);

    if (t156 != 1LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x741 = 5U;
	int8_t x743 = INT8_MIN;
	int8_t x744 = 13;
	volatile int32_t t157 = 44949528;

    t157 = (((x741+x742)!=x743)&x744);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x749 = -1;
	uint64_t x750 = 153174342442595LLU;
	volatile int64_t x751 = 26559970LL;
	volatile int32_t x752 = INT32_MIN;
	volatile int32_t t158 = -27153795;

    t158 = (((x749+x750)!=x751)&x752);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x754 = INT8_MIN;
	int64_t x755 = -1756701261620439636LL;
	uint64_t x756 = 1387236454LLU;
	static uint64_t t159 = 1054258705LLU;

    t159 = (((x753+x754)!=x755)&x756);

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x757 = 14;
	int64_t x758 = -1847965889001179LL;
	static int32_t x759 = INT32_MAX;
	uint64_t x760 = UINT64_MAX;

    t160 = (((x757+x758)!=x759)&x760);

    if (t160 != 1LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x761 = UINT32_MAX;
	int8_t x762 = -1;
	int64_t x763 = INT64_MIN;
	static int64_t t161 = 509LL;

    t161 = (((x761+x762)!=x763)&x764);

    if (t161 != 1LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x769 = 36U;
	volatile int64_t x771 = INT64_MIN;
	uint16_t x772 = 722U;
	volatile int32_t t162 = 419926347;

    t162 = (((x769+x770)!=x771)&x772);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x773 = -1;
	int8_t x774 = INT8_MIN;
	volatile uint64_t x776 = 4276LLU;

    t163 = (((x773+x774)!=x775)&x776);

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x777 = -1;
	int8_t x778 = -4;
	uint32_t x779 = 126343U;
	static int8_t x780 = INT8_MIN;
	static int32_t t164 = -36550041;

    t164 = (((x777+x778)!=x779)&x780);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint32_t x781 = UINT32_MAX;
	int32_t x782 = -1;
	uint16_t x783 = 0U;
	volatile int32_t t165 = 730912034;

    t165 = (((x781+x782)!=x783)&x784);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x789 = 826413712655567LLU;
	int64_t x790 = INT64_MIN;
	int8_t x791 = INT8_MIN;

    t166 = (((x789+x790)!=x791)&x792);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x793 = UINT8_MAX;
	int16_t x794 = INT16_MIN;
	static int32_t x796 = INT32_MIN;
	volatile int32_t t167 = -574685;

    t167 = (((x793+x794)!=x795)&x796);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x798 = INT16_MAX;
	int32_t x799 = 139499;
	int64_t x800 = -1LL;
	volatile int64_t t168 = -23148480LL;

    t168 = (((x797+x798)!=x799)&x800);

    if (t168 != 1LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x801 = 1;
	static int32_t x802 = 6026881;
	uint32_t x804 = 9U;
	static uint32_t t169 = 117597U;

    t169 = (((x801+x802)!=x803)&x804);

    if (t169 != 1U) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x806 = -1960;
	static volatile int32_t x807 = INT32_MIN;
	volatile int64_t x808 = INT64_MIN;

    t170 = (((x805+x806)!=x807)&x808);

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x809 = -45;
	uint16_t x810 = 24U;
	int16_t x812 = 4679;
	int32_t t171 = -2;

    t171 = (((x809+x810)!=x811)&x812);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x813 = 3663948U;
	uint8_t x814 = 1U;
	volatile int8_t x815 = INT8_MIN;
	uint8_t x816 = 10U;
	volatile int32_t t172 = -16;

    t172 = (((x813+x814)!=x815)&x816);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x817 = INT64_MIN;
	int64_t x818 = INT64_MAX;
	int16_t x819 = 0;
	static volatile int8_t x820 = INT8_MIN;
	int32_t t173 = 19;

    t173 = (((x817+x818)!=x819)&x820);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x821 = 33078836U;
	uint32_t x822 = 1490239U;
	static volatile int32_t x823 = -1;
	uint64_t x824 = 262LLU;
	uint64_t t174 = 709162691414366341LLU;

    t174 = (((x821+x822)!=x823)&x824);

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x825 = 530818514059832626LL;
	int8_t x826 = INT8_MAX;
	uint16_t x827 = 0U;
	uint64_t x828 = 359186675LLU;
	volatile uint64_t t175 = 22527117LLU;

    t175 = (((x825+x826)!=x827)&x828);

    if (t175 != 1LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int32_t x833 = INT32_MIN;
	uint16_t x834 = 46U;
	volatile int64_t x836 = INT64_MIN;

    t176 = (((x833+x834)!=x835)&x836);

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x837 = -1;
	int32_t x838 = -1;
	int16_t x840 = -1946;
	volatile int32_t t177 = 4123589;

    t177 = (((x837+x838)!=x839)&x840);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint16_t x845 = UINT16_MAX;
	int16_t x847 = INT16_MIN;

    t178 = (((x845+x846)!=x847)&x848);

    if (t178 != 1U) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile uint64_t x849 = 1616343915135822LLU;
	volatile int32_t x850 = INT32_MIN;
	int64_t x851 = -1028069241LL;
	static int16_t x852 = 1930;

    t179 = (((x849+x850)!=x851)&x852);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x853 = INT16_MIN;
	uint32_t x854 = 34122001U;
	uint16_t x855 = UINT16_MAX;
	volatile int32_t t180 = -1;

    t180 = (((x853+x854)!=x855)&x856);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x861 = INT32_MIN;
	uint8_t x864 = 25U;
	int32_t t181 = 183350;

    t181 = (((x861+x862)!=x863)&x864);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x865 = INT32_MIN;
	static uint8_t x866 = 2U;
	static int64_t x867 = -886128LL;
	static volatile int8_t x868 = INT8_MAX;
	int32_t t182 = 5057956;

    t182 = (((x865+x866)!=x867)&x868);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x869 = UINT32_MAX;
	uint64_t x870 = 335967404898512LLU;
	int8_t x871 = INT8_MIN;
	uint32_t x872 = UINT32_MAX;
	volatile uint32_t t183 = 860U;

    t183 = (((x869+x870)!=x871)&x872);

    if (t183 != 1U) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x873 = 930385798LLU;
	volatile int32_t x874 = INT32_MAX;
	uint16_t x875 = UINT16_MAX;
	int8_t x876 = INT8_MAX;
	volatile int32_t t184 = -267554;

    t184 = (((x873+x874)!=x875)&x876);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x877 = UINT32_MAX;
	int8_t x878 = -7;
	uint32_t x879 = UINT32_MAX;
	static uint16_t x880 = UINT16_MAX;

    t185 = (((x877+x878)!=x879)&x880);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint64_t x884 = 520938952424721156LLU;
	volatile uint64_t t186 = 13891LLU;

    t186 = (((x881+x882)!=x883)&x884);

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint32_t x886 = UINT32_MAX;
	volatile uint16_t x887 = 33U;
	static uint8_t x888 = 120U;

    t187 = (((x885+x886)!=x887)&x888);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x889 = INT16_MIN;
	static volatile int64_t x891 = -1129127659253814446LL;
	static volatile int8_t x892 = INT8_MAX;
	int32_t t188 = -251;

    t188 = (((x889+x890)!=x891)&x892);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x893 = UINT64_MAX;
	int16_t x894 = -14;
	int64_t x895 = INT64_MIN;
	int64_t x896 = INT64_MIN;
	volatile int64_t t189 = -7283341837LL;

    t189 = (((x893+x894)!=x895)&x896);

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x897 = 11U;
	volatile int32_t x898 = INT32_MIN;
	int8_t x899 = -1;
	static int64_t x900 = INT64_MAX;
	int64_t t190 = 87549931475687LL;

    t190 = (((x897+x898)!=x899)&x900);

    if (t190 != 1LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x905 = INT8_MIN;
	uint64_t x906 = UINT64_MAX;
	uint8_t x907 = 41U;
	volatile int32_t x908 = -118;
	static int32_t t191 = -3385;

    t191 = (((x905+x906)!=x907)&x908);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int8_t x909 = -1;
	int16_t x910 = INT16_MIN;
	uint32_t x911 = 855064034U;

    t192 = (((x909+x910)!=x911)&x912);

    if (t192 != 1LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x913 = 15;
	int8_t x914 = INT8_MIN;
	uint32_t x915 = 7669U;
	int64_t t193 = -882443317367LL;

    t193 = (((x913+x914)!=x915)&x916);

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint8_t x917 = 56U;
	int8_t x918 = -22;
	uint32_t x920 = 1282U;
	uint32_t t194 = 1409467U;

    t194 = (((x917+x918)!=x919)&x920);

    if (t194 != 0U) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x922 = 50U;
	static uint64_t x923 = UINT64_MAX;
	volatile int64_t t195 = -1753879261266LL;

    t195 = (((x921+x922)!=x923)&x924);

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x929 = -1;
	int32_t x931 = INT32_MIN;
	uint32_t x932 = 1U;
	uint32_t t196 = 522384096U;

    t196 = (((x929+x930)!=x931)&x932);

    if (t196 != 1U) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int32_t x934 = INT32_MAX;
	int8_t x935 = -1;
	volatile int16_t x936 = INT16_MAX;
	volatile int32_t t197 = 206574;

    t197 = (((x933+x934)!=x935)&x936);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x938 = INT32_MAX;
	uint16_t x940 = 16512U;
	volatile int32_t t198 = -692;

    t198 = (((x937+x938)!=x939)&x940);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x941 = INT16_MAX;
	volatile int64_t x944 = -1LL;
	int64_t t199 = -158199LL;

    t199 = (((x941+x942)!=x943)&x944);

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


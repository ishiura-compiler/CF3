
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

static int8_t x2 = 21;
volatile int32_t t0 = 205;
int8_t x8 = INT8_MAX;
uint32_t x13 = 5976U;
int32_t t2 = 15;
static uint32_t x19 = UINT32_MAX;
static int64_t x20 = INT64_MIN;
static int8_t x25 = INT8_MAX;
static int8_t x26 = INT8_MAX;
static int8_t x29 = INT8_MIN;
static int16_t x40 = INT16_MIN;
int32_t t7 = 3;
uint32_t x45 = 1973768U;
int16_t x46 = INT16_MAX;
int8_t x63 = INT8_MAX;
uint8_t x73 = 36U;
volatile int32_t t13 = 3;
int64_t x82 = -844755516109107353LL;
static volatile uint8_t x83 = 12U;
volatile int32_t t15 = 7;
volatile int16_t x93 = INT16_MIN;
static int8_t x95 = -1;
int32_t t17 = 286129;
int8_t x115 = -1;
int16_t x116 = 11;
int32_t x129 = 18522538;
uint16_t x135 = 118U;
static volatile uint32_t x141 = 1U;
static int64_t x144 = INT64_MIN;
int8_t x153 = INT8_MIN;
int64_t x154 = -1465794LL;
volatile uint64_t x155 = UINT64_MAX;
static int8_t x163 = INT8_MIN;
static int32_t t29 = 58722;
static uint64_t x172 = 8666921178563925LLU;
volatile int8_t x180 = INT8_MIN;
static int32_t t34 = 5537;
int32_t x189 = INT32_MAX;
static uint16_t x194 = 14U;
static int16_t x196 = 5;
int8_t x201 = -2;
uint8_t x204 = 26U;
volatile int32_t t38 = -1561866;
int16_t x208 = 14685;
volatile int32_t t39 = 15;
static uint32_t x209 = UINT32_MAX;
uint8_t x212 = 0U;
int32_t t40 = 988;
uint16_t x223 = 20970U;
int16_t x245 = -2793;
volatile uint32_t x251 = UINT32_MAX;
volatile int32_t t50 = 1313;
int64_t x272 = INT64_MIN;
static int32_t t53 = -181;
int32_t t54 = -821358;
int16_t x285 = -1;
int32_t t55 = -1349468;
uint32_t x291 = 28U;
int32_t t56 = 492361738;
uint16_t x309 = 18771U;
int8_t x316 = INT8_MAX;
volatile int32_t t60 = 61646;
int64_t x319 = INT64_MIN;
volatile int32_t t64 = -51;
static int32_t t65 = -10166906;
int64_t x342 = 444772708723258424LL;
int8_t x345 = INT8_MIN;
int32_t x347 = -1;
int8_t x350 = 0;
int32_t t71 = 448;
int64_t x382 = 658665LL;
static int32_t t72 = 39;
int32_t t73 = -29633;
static volatile int16_t x393 = -1;
volatile int32_t t74 = 29;
uint64_t x401 = 959616375238451301LLU;
static uint64_t x403 = 8407303749012603956LLU;
uint16_t x414 = 138U;
int8_t x422 = -1;
int16_t x428 = INT16_MIN;
int32_t t78 = -767646266;
uint16_t x439 = 3U;
volatile uint8_t x443 = 14U;
volatile int64_t x444 = INT64_MIN;
int8_t x445 = INT8_MIN;
static uint64_t x450 = 824623LLU;
int32_t t85 = -86373;
uint8_t x465 = UINT8_MAX;
volatile int16_t x466 = INT16_MIN;
uint8_t x469 = UINT8_MAX;
uint64_t x477 = UINT64_MAX;
volatile uint16_t x480 = 1U;
static int32_t t91 = 120020963;
volatile int8_t x497 = INT8_MIN;
int8_t x511 = INT8_MAX;
volatile int32_t t97 = 6;
int16_t x518 = -1;
int8_t x519 = -1;
uint32_t x527 = UINT32_MAX;
int32_t x535 = 265543432;
volatile int32_t t101 = 0;
uint16_t x539 = UINT16_MAX;
uint64_t x547 = 132185527200152LLU;
volatile uint32_t x552 = 173267U;
static int16_t x576 = INT16_MIN;
static volatile int8_t x577 = INT8_MAX;
int8_t x583 = INT8_MIN;
static int8_t x584 = -1;
int32_t t110 = -16314951;
static int64_t x592 = INT64_MAX;
int32_t t112 = 1;
int16_t x598 = INT16_MIN;
volatile int32_t t115 = 250;
volatile int8_t x613 = INT8_MIN;
volatile uint32_t x626 = 2U;
int32_t t120 = -1000633887;
int8_t x644 = INT8_MIN;
int16_t x655 = 0;
volatile int32_t t122 = 77949;
static int64_t x663 = INT64_MIN;
uint64_t x664 = 219603298409103LLU;
int32_t t123 = 759506;
uint64_t x673 = 3055266756395LLU;
volatile uint32_t x678 = 352U;
uint32_t x680 = 244704U;
uint64_t x689 = 2497333590852156247LLU;
int32_t t128 = -121;
int8_t x696 = -44;
static int32_t t129 = -52;
static uint16_t x698 = 5U;
uint32_t x703 = UINT32_MAX;
int8_t x704 = INT8_MIN;
volatile int32_t t131 = -1008;
static uint32_t x705 = 6841U;
int32_t t133 = 1009480;
int32_t x716 = -8899;
volatile int32_t t134 = -44340730;
int16_t x718 = INT16_MAX;
static uint8_t x725 = 7U;
int64_t x734 = -1LL;
int32_t x745 = -1;
uint32_t x750 = 5963U;
static int64_t x752 = INT64_MIN;
int32_t t141 = 348565197;
int64_t x778 = -1LL;
int8_t x781 = 0;
uint16_t x787 = 24908U;
int16_t x788 = INT16_MAX;
int32_t x794 = -74438;
int32_t t149 = 6;
int16_t x799 = INT16_MAX;
volatile int8_t x810 = -1;
static int8_t x812 = INT8_MIN;
uint8_t x827 = 23U;
uint8_t x839 = UINT8_MAX;
uint32_t x843 = 16429215U;
int32_t x849 = -29;
volatile uint16_t x859 = UINT16_MAX;
int32_t t162 = -12162621;
uint64_t x861 = UINT64_MAX;
int8_t x864 = -3;
int32_t x866 = -157;
int16_t x867 = -1;
uint8_t x869 = 82U;
volatile int32_t t165 = -3;
int16_t x878 = INT16_MIN;
int8_t x885 = INT8_MAX;
volatile uint8_t x886 = 0U;
int32_t x887 = 190498989;
volatile uint16_t x892 = UINT16_MAX;
uint8_t x894 = 15U;
uint64_t x905 = UINT64_MAX;
volatile int32_t x907 = -1;
static int32_t x909 = -1;
int32_t t175 = 396834238;
int16_t x915 = 2;
volatile uint8_t x920 = UINT8_MAX;
volatile int32_t t177 = 1;
static uint8_t x930 = UINT8_MAX;
volatile int64_t x932 = INT64_MAX;
uint16_t x938 = 76U;
uint16_t x940 = 3U;
volatile int16_t x942 = INT16_MAX;
int64_t x943 = INT64_MAX;
int8_t x944 = INT8_MAX;
int32_t t184 = 8;
uint64_t x953 = UINT64_MAX;
uint16_t x956 = 221U;
int8_t x963 = INT8_MIN;
int8_t x966 = INT8_MIN;
volatile int64_t x969 = -14182231098LL;
uint8_t x980 = 0U;
int32_t t190 = 20540547;
uint64_t x981 = 210549309855943412LLU;
int8_t x983 = INT8_MIN;
int32_t x985 = -1;
volatile uint64_t x989 = 4686884211LLU;
volatile int32_t t194 = 7593;
uint64_t x1002 = 122484283LLU;
uint64_t x1005 = 3930LLU;
int8_t x1008 = -2;
static uint64_t x1009 = 915533LLU;
volatile int32_t t197 = -984330897;


void f0(void) {
    	int8_t x1 = -3;
	int32_t x3 = -1;
	int16_t x4 = INT16_MIN;

    t0 = (((x1*x2)^x3)>x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x5 = -10500;
	uint16_t x6 = 7U;
	int32_t x7 = 48;
	int32_t t1 = 3670647;

    t1 = (((x5*x6)^x7)>x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x14 = 7U;
	static uint8_t x15 = UINT8_MAX;
	int8_t x16 = 3;

    t2 = (((x13*x14)^x15)>x16);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x17 = -4;
	volatile uint16_t x18 = 157U;
	volatile int32_t t3 = 17497;

    t3 = (((x17*x18)^x19)>x20);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x21 = 74;
	uint32_t x22 = 345430641U;
	volatile uint8_t x23 = UINT8_MAX;
	volatile int8_t x24 = INT8_MAX;
	int32_t t4 = 285730238;

    t4 = (((x21*x22)^x23)>x24);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint16_t x27 = 5U;
	uint64_t x28 = 5083900267LLU;
	int32_t t5 = -3759;

    t5 = (((x25*x26)^x27)>x28);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x30 = INT16_MIN;
	int32_t x31 = INT32_MIN;
	int64_t x32 = INT64_MIN;
	static volatile int32_t t6 = 34792940;

    t6 = (((x29*x30)^x31)>x32);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x37 = INT32_MAX;
	static uint32_t x38 = UINT32_MAX;
	volatile uint8_t x39 = UINT8_MAX;

    t7 = (((x37*x38)^x39)>x40);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x47 = -1LL;
	int16_t x48 = -1;
	static int32_t t8 = 1328;

    t8 = (((x45*x46)^x47)>x48);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x53 = 0;
	int8_t x54 = -1;
	uint32_t x55 = 1075762U;
	uint32_t x56 = 37U;
	volatile int32_t t9 = 85;

    t9 = (((x53*x54)^x55)>x56);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x61 = -1;
	uint32_t x62 = 430U;
	volatile uint8_t x64 = 0U;
	volatile int32_t t10 = 6;

    t10 = (((x61*x62)^x63)>x64);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int8_t x65 = INT8_MIN;
	int8_t x66 = -1;
	uint32_t x67 = 5741U;
	int16_t x68 = INT16_MIN;
	static volatile int32_t t11 = 30;

    t11 = (((x65*x66)^x67)>x68);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint64_t x69 = UINT64_MAX;
	volatile uint32_t x70 = 155409U;
	int8_t x71 = INT8_MIN;
	int16_t x72 = INT16_MAX;
	static volatile int32_t t12 = 108162;

    t12 = (((x69*x70)^x71)>x72);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int8_t x74 = -10;
	int16_t x75 = -1820;
	volatile int32_t x76 = INT32_MIN;

    t13 = (((x73*x74)^x75)>x76);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x81 = UINT64_MAX;
	uint32_t x84 = 490U;
	int32_t t14 = -162501093;

    t14 = (((x81*x82)^x83)>x84);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x89 = -1;
	int32_t x90 = -1;
	int16_t x91 = -275;
	int16_t x92 = INT16_MIN;

    t15 = (((x89*x90)^x91)>x92);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x94 = 3434;
	static int32_t x96 = -37;
	static int32_t t16 = -7969133;

    t16 = (((x93*x94)^x95)>x96);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x97 = INT16_MIN;
	static int16_t x98 = INT16_MAX;
	int8_t x99 = INT8_MAX;
	int64_t x100 = INT64_MAX;

    t17 = (((x97*x98)^x99)>x100);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint16_t x101 = 2U;
	int8_t x102 = INT8_MIN;
	int32_t x103 = -1;
	int16_t x104 = -1;
	volatile int32_t t18 = -907671;

    t18 = (((x101*x102)^x103)>x104);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x113 = INT8_MIN;
	uint16_t x114 = 0U;
	static int32_t t19 = -3029;

    t19 = (((x113*x114)^x115)>x116);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x117 = INT32_MAX;
	int64_t x118 = -1LL;
	int32_t x119 = -194747;
	static uint16_t x120 = 35U;
	volatile int32_t t20 = 1;

    t20 = (((x117*x118)^x119)>x120);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x125 = INT8_MIN;
	volatile uint64_t x126 = 1269902684750947039LLU;
	uint64_t x127 = UINT64_MAX;
	uint8_t x128 = UINT8_MAX;
	int32_t t21 = -95381;

    t21 = (((x125*x126)^x127)>x128);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile uint32_t x130 = 2297U;
	int32_t x131 = INT32_MAX;
	volatile uint32_t x132 = 6416U;
	volatile int32_t t22 = -23605;

    t22 = (((x129*x130)^x131)>x132);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x133 = INT16_MIN;
	volatile uint32_t x134 = UINT32_MAX;
	volatile int32_t x136 = INT32_MIN;
	static int32_t t23 = -33109717;

    t23 = (((x133*x134)^x135)>x136);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x137 = -431332684986816LL;
	int8_t x138 = INT8_MIN;
	static uint64_t x139 = UINT64_MAX;
	int64_t x140 = INT64_MAX;
	static int32_t t24 = -520968;

    t24 = (((x137*x138)^x139)>x140);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x142 = -152LL;
	uint16_t x143 = 885U;
	int32_t t25 = 1;

    t25 = (((x141*x142)^x143)>x144);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x149 = UINT8_MAX;
	uint16_t x150 = 3U;
	static int32_t x151 = -1;
	static volatile int8_t x152 = INT8_MAX;
	volatile int32_t t26 = 594659;

    t26 = (((x149*x150)^x151)>x152);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x156 = 56;
	int32_t t27 = 3;

    t27 = (((x153*x154)^x155)>x156);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int64_t x157 = 18LL;
	int32_t x158 = -1;
	uint8_t x159 = UINT8_MAX;
	uint32_t x160 = 21U;
	int32_t t28 = -240;

    t28 = (((x157*x158)^x159)>x160);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x161 = UINT8_MAX;
	static volatile int32_t x162 = 62024;
	uint32_t x164 = 4413781U;

    t29 = (((x161*x162)^x163)>x164);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x165 = INT64_MAX;
	uint64_t x166 = 236265LLU;
	int8_t x167 = INT8_MIN;
	volatile uint8_t x168 = UINT8_MAX;
	volatile int32_t t30 = 182;

    t30 = (((x165*x166)^x167)>x168);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x169 = -666107;
	int32_t x170 = -1;
	int16_t x171 = -1;
	volatile int32_t t31 = -197832109;

    t31 = (((x169*x170)^x171)>x172);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x173 = -1;
	int64_t x174 = 3195830LL;
	int8_t x175 = INT8_MIN;
	int16_t x176 = -13;
	static int32_t t32 = 27629987;

    t32 = (((x173*x174)^x175)>x176);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x177 = 42566308656439838LLU;
	static int32_t x178 = -461441;
	static uint16_t x179 = 387U;
	static int32_t t33 = -72871;

    t33 = (((x177*x178)^x179)>x180);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x181 = INT8_MAX;
	int8_t x182 = 45;
	static uint8_t x183 = 11U;
	int8_t x184 = -1;

    t34 = (((x181*x182)^x183)>x184);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x185 = UINT16_MAX;
	static int8_t x186 = 0;
	volatile int16_t x187 = 14099;
	uint8_t x188 = 0U;
	static volatile int32_t t35 = 446328367;

    t35 = (((x185*x186)^x187)>x188);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x190 = 100029LL;
	int16_t x191 = -12610;
	int16_t x192 = INT16_MIN;
	static int32_t t36 = 0;

    t36 = (((x189*x190)^x191)>x192);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x193 = 1;
	int8_t x195 = -1;
	volatile int32_t t37 = -120;

    t37 = (((x193*x194)^x195)>x196);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x202 = UINT8_MAX;
	static uint64_t x203 = 25598413387642LLU;

    t38 = (((x201*x202)^x203)>x204);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x205 = INT8_MIN;
	uint64_t x206 = 5911541488278898LLU;
	int32_t x207 = 582239;

    t39 = (((x205*x206)^x207)>x208);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x210 = -1;
	int16_t x211 = -6009;

    t40 = (((x209*x210)^x211)>x212);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x213 = 210324762LLU;
	static volatile uint8_t x214 = 4U;
	uint16_t x215 = 7430U;
	uint8_t x216 = UINT8_MAX;
	int32_t t41 = -2;

    t41 = (((x213*x214)^x215)>x216);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x217 = -1;
	uint64_t x218 = 1298993025139485826LLU;
	volatile int16_t x219 = 6;
	volatile uint32_t x220 = UINT32_MAX;
	int32_t t42 = 97095;

    t42 = (((x217*x218)^x219)>x220);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x221 = 2151017119624LLU;
	int8_t x222 = -1;
	int16_t x224 = -1;
	int32_t t43 = -1686;

    t43 = (((x221*x222)^x223)>x224);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint8_t x233 = 0U;
	uint16_t x234 = 490U;
	uint64_t x235 = 227LLU;
	static int16_t x236 = INT16_MIN;
	volatile int32_t t44 = 14445719;

    t44 = (((x233*x234)^x235)>x236);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x237 = 323LLU;
	uint64_t x238 = 187172993852953LLU;
	static int8_t x239 = INT8_MIN;
	static uint16_t x240 = UINT16_MAX;
	volatile int32_t t45 = -2;

    t45 = (((x237*x238)^x239)>x240);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x241 = -1;
	volatile uint32_t x242 = 4U;
	static int32_t x243 = INT32_MIN;
	int8_t x244 = 1;
	volatile int32_t t46 = 44975354;

    t46 = (((x241*x242)^x243)>x244);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int64_t x246 = -1LL;
	int32_t x247 = -29;
	int16_t x248 = INT16_MAX;
	int32_t t47 = -1;

    t47 = (((x245*x246)^x247)>x248);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x249 = -1;
	int32_t x250 = -1;
	uint8_t x252 = UINT8_MAX;
	int32_t t48 = 1004292699;

    t48 = (((x249*x250)^x251)>x252);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x253 = 1U;
	volatile int32_t x254 = -1;
	int8_t x255 = INT8_MAX;
	volatile int16_t x256 = INT16_MIN;
	int32_t t49 = 1;

    t49 = (((x253*x254)^x255)>x256);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x265 = -1;
	int16_t x266 = -621;
	volatile int64_t x267 = INT64_MIN;
	static int64_t x268 = INT64_MAX;

    t50 = (((x265*x266)^x267)>x268);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x269 = 2292730893LL;
	int8_t x270 = 28;
	static int8_t x271 = INT8_MIN;
	volatile int32_t t51 = 826748;

    t51 = (((x269*x270)^x271)>x272);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x273 = -13323;
	int16_t x274 = -12;
	static int64_t x275 = INT64_MAX;
	volatile int64_t x276 = INT64_MIN;
	int32_t t52 = 44;

    t52 = (((x273*x274)^x275)>x276);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int16_t x277 = 0;
	int16_t x278 = INT16_MIN;
	static int64_t x279 = INT64_MIN;
	int64_t x280 = INT64_MIN;

    t53 = (((x277*x278)^x279)>x280);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x281 = 1U;
	int32_t x282 = 45;
	int16_t x283 = INT16_MIN;
	uint16_t x284 = 55U;

    t54 = (((x281*x282)^x283)>x284);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x286 = 2;
	int8_t x287 = INT8_MIN;
	volatile int32_t x288 = 24511;

    t55 = (((x285*x286)^x287)>x288);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint8_t x289 = 5U;
	uint64_t x290 = 466510719356725781LLU;
	int8_t x292 = INT8_MIN;

    t56 = (((x289*x290)^x291)>x292);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x301 = 8U;
	static int16_t x302 = -5;
	int16_t x303 = -1;
	static int16_t x304 = INT16_MIN;
	int32_t t57 = -731;

    t57 = (((x301*x302)^x303)>x304);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x305 = INT16_MAX;
	int64_t x306 = -17712LL;
	static int16_t x307 = INT16_MIN;
	volatile uint16_t x308 = UINT16_MAX;
	static volatile int32_t t58 = 24733;

    t58 = (((x305*x306)^x307)>x308);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x310 = 51522557U;
	static int16_t x311 = INT16_MAX;
	int32_t x312 = INT32_MIN;
	int32_t t59 = -183448493;

    t59 = (((x309*x310)^x311)>x312);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint8_t x313 = 26U;
	uint32_t x314 = 1158U;
	static int64_t x315 = -1LL;

    t60 = (((x313*x314)^x315)>x316);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x317 = -1;
	uint16_t x318 = UINT16_MAX;
	static volatile uint64_t x320 = 4883378001633390LLU;
	int32_t t61 = -375411;

    t61 = (((x317*x318)^x319)>x320);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x321 = 179971163088314LLU;
	int64_t x322 = INT64_MIN;
	int16_t x323 = INT16_MIN;
	volatile int8_t x324 = INT8_MAX;
	int32_t t62 = -7172;

    t62 = (((x321*x322)^x323)>x324);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x329 = INT8_MIN;
	static int8_t x330 = INT8_MIN;
	uint8_t x331 = 0U;
	int8_t x332 = -1;
	int32_t t63 = -6361538;

    t63 = (((x329*x330)^x331)>x332);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x333 = INT32_MAX;
	uint64_t x334 = 10330706184LLU;
	uint64_t x335 = 154LLU;
	uint32_t x336 = UINT32_MAX;

    t64 = (((x333*x334)^x335)>x336);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x337 = INT8_MAX;
	int8_t x338 = INT8_MIN;
	int32_t x339 = 2408;
	volatile uint32_t x340 = UINT32_MAX;

    t65 = (((x337*x338)^x339)>x340);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x341 = -1;
	int64_t x343 = 63356LL;
	static volatile uint16_t x344 = 703U;
	volatile int32_t t66 = -740116;

    t66 = (((x341*x342)^x343)>x344);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x346 = -1;
	int64_t x348 = INT64_MIN;
	static int32_t t67 = -290928135;

    t67 = (((x345*x346)^x347)>x348);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x349 = 3U;
	int8_t x351 = 2;
	volatile uint16_t x352 = 67U;
	static volatile int32_t t68 = 3010226;

    t68 = (((x349*x350)^x351)>x352);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint32_t x357 = 6696204U;
	volatile uint32_t x358 = 122U;
	uint8_t x359 = UINT8_MAX;
	volatile int32_t x360 = INT32_MAX;
	int32_t t69 = -1390;

    t69 = (((x357*x358)^x359)>x360);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x361 = INT16_MIN;
	static volatile uint8_t x362 = 0U;
	static int64_t x363 = INT64_MIN;
	int32_t x364 = INT32_MIN;
	volatile int32_t t70 = -25;

    t70 = (((x361*x362)^x363)>x364);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x365 = 17644132LLU;
	uint8_t x366 = 3U;
	volatile uint8_t x367 = 119U;
	int8_t x368 = INT8_MAX;

    t71 = (((x365*x366)^x367)>x368);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x381 = 1;
	static int64_t x383 = INT64_MIN;
	int8_t x384 = INT8_MIN;

    t72 = (((x381*x382)^x383)>x384);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x389 = -1;
	int8_t x390 = INT8_MAX;
	int8_t x391 = 34;
	uint64_t x392 = 122943255550LLU;

    t73 = (((x389*x390)^x391)>x392);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x394 = INT32_MAX;
	volatile uint8_t x395 = UINT8_MAX;
	static uint32_t x396 = 15U;

    t74 = (((x393*x394)^x395)>x396);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x402 = INT16_MIN;
	static uint16_t x404 = UINT16_MAX;
	static int32_t t75 = -5;

    t75 = (((x401*x402)^x403)>x404);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x413 = 692U;
	int64_t x415 = -63104968266639906LL;
	static int8_t x416 = INT8_MAX;
	static int32_t t76 = 6;

    t76 = (((x413*x414)^x415)>x416);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x421 = UINT16_MAX;
	static volatile int32_t x423 = INT32_MAX;
	int64_t x424 = -10194LL;
	volatile int32_t t77 = 14;

    t77 = (((x421*x422)^x423)>x424);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x425 = 30;
	volatile uint64_t x426 = 142116072234300LLU;
	volatile int8_t x427 = INT8_MIN;

    t78 = (((x425*x426)^x427)>x428);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x429 = -1;
	int64_t x430 = 127LL;
	volatile uint64_t x431 = 29959671LLU;
	uint16_t x432 = 5U;
	int32_t t79 = 23458;

    t79 = (((x429*x430)^x431)>x432);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint64_t x433 = 458LLU;
	volatile int16_t x434 = -3672;
	int8_t x435 = INT8_MIN;
	int32_t x436 = -1;
	static volatile int32_t t80 = 77;

    t80 = (((x433*x434)^x435)>x436);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x437 = 0;
	volatile int64_t x438 = INT64_MIN;
	int64_t x440 = -43556495922857231LL;
	volatile int32_t t81 = -20055;

    t81 = (((x437*x438)^x439)>x440);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x441 = 17558604975638LL;
	static volatile int32_t x442 = -1;
	static volatile int32_t t82 = 1069148015;

    t82 = (((x441*x442)^x443)>x444);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x446 = INT8_MIN;
	uint64_t x447 = 2996045600353LLU;
	volatile uint64_t x448 = 913555236694499LLU;
	volatile int32_t t83 = -148536;

    t83 = (((x445*x446)^x447)>x448);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x449 = INT32_MAX;
	int32_t x451 = INT32_MAX;
	static int32_t x452 = INT32_MIN;
	int32_t t84 = -19020771;

    t84 = (((x449*x450)^x451)>x452);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x461 = 2238;
	int16_t x462 = -1;
	int8_t x463 = -1;
	int8_t x464 = INT8_MIN;

    t85 = (((x461*x462)^x463)>x464);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x467 = 3332;
	int64_t x468 = INT64_MIN;
	static volatile int32_t t86 = 4157471;

    t86 = (((x465*x466)^x467)>x468);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x470 = 40U;
	int16_t x471 = INT16_MIN;
	volatile int16_t x472 = INT16_MIN;
	static volatile int32_t t87 = -450;

    t87 = (((x469*x470)^x471)>x472);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x473 = INT16_MAX;
	uint64_t x474 = UINT64_MAX;
	static uint8_t x475 = 1U;
	uint16_t x476 = 17401U;
	int32_t t88 = -13755522;

    t88 = (((x473*x474)^x475)>x476);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x478 = 50357LL;
	volatile uint64_t x479 = 9009LLU;
	int32_t t89 = -142380698;

    t89 = (((x477*x478)^x479)>x480);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x481 = 0U;
	int32_t x482 = -2;
	static int32_t x483 = INT32_MAX;
	int32_t x484 = INT32_MIN;
	int32_t t90 = -36151515;

    t90 = (((x481*x482)^x483)>x484);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x485 = 32U;
	int16_t x486 = INT16_MIN;
	static volatile int64_t x487 = INT64_MIN;
	int8_t x488 = 35;

    t91 = (((x485*x486)^x487)>x488);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x493 = 3034;
	int8_t x494 = -5;
	int64_t x495 = -1LL;
	int32_t x496 = -1;
	volatile int32_t t92 = -77;

    t92 = (((x493*x494)^x495)>x496);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x498 = -1LL;
	uint32_t x499 = 304U;
	int16_t x500 = 7669;
	int32_t t93 = 40;

    t93 = (((x497*x498)^x499)>x500);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x501 = 23;
	int8_t x502 = -21;
	int32_t x503 = INT32_MAX;
	uint16_t x504 = 6363U;
	int32_t t94 = 0;

    t94 = (((x501*x502)^x503)>x504);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint64_t x505 = UINT64_MAX;
	int8_t x506 = -6;
	int16_t x507 = -1;
	volatile int8_t x508 = 0;
	static volatile int32_t t95 = 27960253;

    t95 = (((x505*x506)^x507)>x508);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x509 = -1;
	static uint16_t x510 = UINT16_MAX;
	int8_t x512 = INT8_MIN;
	volatile int32_t t96 = 0;

    t96 = (((x509*x510)^x511)>x512);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x513 = 6779985174LLU;
	int8_t x514 = INT8_MIN;
	volatile uint16_t x515 = UINT16_MAX;
	int16_t x516 = INT16_MIN;

    t97 = (((x513*x514)^x515)>x516);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x517 = UINT32_MAX;
	volatile int16_t x520 = -1549;
	int32_t t98 = -1866;

    t98 = (((x517*x518)^x519)>x520);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int16_t x521 = -2;
	static uint64_t x522 = 323097298589LLU;
	int8_t x523 = INT8_MIN;
	static uint8_t x524 = UINT8_MAX;
	volatile int32_t t99 = 52990355;

    t99 = (((x521*x522)^x523)>x524);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x525 = INT16_MAX;
	uint32_t x526 = 150093711U;
	static uint32_t x528 = 1374183401U;
	int32_t t100 = -57558840;

    t100 = (((x525*x526)^x527)>x528);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint16_t x533 = UINT16_MAX;
	int8_t x534 = 58;
	int16_t x536 = INT16_MAX;

    t101 = (((x533*x534)^x535)>x536);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint32_t x537 = 506U;
	volatile uint8_t x538 = 0U;
	volatile uint16_t x540 = 1U;
	static int32_t t102 = 4;

    t102 = (((x537*x538)^x539)>x540);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x541 = -1;
	int8_t x542 = INT8_MIN;
	volatile uint16_t x543 = 14074U;
	int16_t x544 = -1;
	int32_t t103 = -428;

    t103 = (((x541*x542)^x543)>x544);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x545 = -10008;
	static int8_t x546 = 7;
	int32_t x548 = 114114560;
	static int32_t t104 = -1;

    t104 = (((x545*x546)^x547)>x548);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x549 = 22555U;
	uint32_t x550 = UINT32_MAX;
	static volatile uint8_t x551 = 69U;
	volatile int32_t t105 = -29962011;

    t105 = (((x549*x550)^x551)>x552);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x553 = INT16_MIN;
	static int8_t x554 = 5;
	int16_t x555 = INT16_MIN;
	int16_t x556 = -1;
	int32_t t106 = -118334;

    t106 = (((x553*x554)^x555)>x556);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int32_t x557 = -184539;
	int8_t x558 = 7;
	static int16_t x559 = INT16_MIN;
	volatile uint16_t x560 = 7642U;
	int32_t t107 = 12196;

    t107 = (((x557*x558)^x559)>x560);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x573 = -3048400LL;
	volatile int32_t x574 = 442312215;
	uint8_t x575 = 3U;
	volatile int32_t t108 = -4738258;

    t108 = (((x573*x574)^x575)>x576);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x578 = INT8_MIN;
	static uint8_t x579 = UINT8_MAX;
	int32_t x580 = INT32_MIN;
	int32_t t109 = 210;

    t109 = (((x577*x578)^x579)>x580);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x581 = INT16_MIN;
	static uint32_t x582 = UINT32_MAX;

    t110 = (((x581*x582)^x583)>x584);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x585 = UINT16_MAX;
	uint64_t x586 = UINT64_MAX;
	volatile int64_t x587 = -1LL;
	uint32_t x588 = 3U;
	volatile int32_t t111 = -189968401;

    t111 = (((x585*x586)^x587)>x588);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x589 = 0U;
	volatile int32_t x590 = INT32_MAX;
	static int8_t x591 = -1;

    t112 = (((x589*x590)^x591)>x592);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x593 = -1;
	volatile uint8_t x594 = UINT8_MAX;
	int16_t x595 = -372;
	int32_t x596 = -1;
	volatile int32_t t113 = -62405644;

    t113 = (((x593*x594)^x595)>x596);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x597 = UINT64_MAX;
	uint64_t x599 = 58LLU;
	int16_t x600 = INT16_MAX;
	static int32_t t114 = 702508;

    t114 = (((x597*x598)^x599)>x600);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x601 = UINT8_MAX;
	int16_t x602 = INT16_MIN;
	int64_t x603 = INT64_MAX;
	int64_t x604 = INT64_MIN;

    t115 = (((x601*x602)^x603)>x604);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint8_t x614 = 15U;
	int64_t x615 = 121009816396LL;
	static uint16_t x616 = 11U;
	int32_t t116 = 0;

    t116 = (((x613*x614)^x615)>x616);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x621 = INT16_MAX;
	static volatile uint16_t x622 = 29991U;
	uint16_t x623 = 3U;
	int32_t x624 = -1;
	int32_t t117 = -734918320;

    t117 = (((x621*x622)^x623)>x624);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint16_t x625 = 12U;
	volatile int8_t x627 = -1;
	int64_t x628 = 14203LL;
	static volatile int32_t t118 = -364811;

    t118 = (((x625*x626)^x627)>x628);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x633 = -1;
	uint16_t x634 = 27U;
	volatile int8_t x635 = INT8_MAX;
	volatile uint64_t x636 = 457415844LLU;
	int32_t t119 = -1;

    t119 = (((x633*x634)^x635)>x636);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x637 = INT8_MAX;
	volatile int32_t x638 = -1;
	volatile int64_t x639 = -3099421LL;
	static volatile uint16_t x640 = UINT16_MAX;

    t120 = (((x637*x638)^x639)>x640);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x641 = 71223832LLU;
	static int16_t x642 = INT16_MIN;
	uint8_t x643 = 7U;
	int32_t t121 = -4560;

    t121 = (((x641*x642)^x643)>x644);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x653 = -1LL;
	static int32_t x654 = 465121647;
	uint64_t x656 = 7414514596604689484LLU;

    t122 = (((x653*x654)^x655)>x656);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x661 = -1;
	int8_t x662 = 3;

    t123 = (((x661*x662)^x663)>x664);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x665 = UINT64_MAX;
	uint64_t x666 = 6LLU;
	volatile int64_t x667 = INT64_MIN;
	int16_t x668 = -1;
	int32_t t124 = 1;

    t124 = (((x665*x666)^x667)>x668);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x674 = INT64_MIN;
	uint32_t x675 = UINT32_MAX;
	volatile int64_t x676 = INT64_MAX;
	int32_t t125 = 49075242;

    t125 = (((x673*x674)^x675)>x676);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint8_t x677 = 1U;
	int8_t x679 = 4;
	static volatile int32_t t126 = -3;

    t126 = (((x677*x678)^x679)>x680);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x681 = 2334LLU;
	uint8_t x682 = 0U;
	int8_t x683 = -1;
	uint8_t x684 = UINT8_MAX;
	volatile int32_t t127 = -4099;

    t127 = (((x681*x682)^x683)>x684);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x690 = INT32_MAX;
	int32_t x691 = -97;
	int64_t x692 = -1LL;

    t128 = (((x689*x690)^x691)>x692);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x693 = UINT32_MAX;
	int32_t x694 = -17334140;
	int32_t x695 = 40814475;

    t129 = (((x693*x694)^x695)>x696);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x697 = -1;
	static int64_t x699 = -1LL;
	static volatile int16_t x700 = INT16_MIN;
	static volatile int32_t t130 = 914775;

    t130 = (((x697*x698)^x699)>x700);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x701 = UINT8_MAX;
	int8_t x702 = -1;

    t131 = (((x701*x702)^x703)>x704);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint64_t x706 = UINT64_MAX;
	int32_t x707 = 27300;
	static int16_t x708 = 0;
	int32_t t132 = 836318;

    t132 = (((x705*x706)^x707)>x708);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x709 = -1;
	int32_t x710 = -1;
	volatile uint64_t x711 = 308413404025LLU;
	volatile int16_t x712 = -5745;

    t133 = (((x709*x710)^x711)>x712);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x713 = INT64_MIN;
	static volatile int32_t x714 = 0;
	static int64_t x715 = 132371511525LL;

    t134 = (((x713*x714)^x715)>x716);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint64_t x717 = 945453758739730LLU;
	int8_t x719 = -22;
	int64_t x720 = INT64_MIN;
	int32_t t135 = 40356989;

    t135 = (((x717*x718)^x719)>x720);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x726 = -1LL;
	static int8_t x727 = INT8_MIN;
	uint64_t x728 = UINT64_MAX;
	int32_t t136 = -6004744;

    t136 = (((x725*x726)^x727)>x728);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x729 = -6;
	int32_t x730 = 1433746;
	int16_t x731 = INT16_MAX;
	static uint8_t x732 = 63U;
	volatile int32_t t137 = 32427156;

    t137 = (((x729*x730)^x731)>x732);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x733 = INT16_MIN;
	int8_t x735 = -1;
	volatile int64_t x736 = 10LL;
	volatile int32_t t138 = 26338897;

    t138 = (((x733*x734)^x735)>x736);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x737 = 0;
	static int32_t x738 = INT32_MAX;
	int32_t x739 = INT32_MIN;
	uint32_t x740 = 908U;
	int32_t t139 = -6488834;

    t139 = (((x737*x738)^x739)>x740);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x746 = -231;
	static volatile int8_t x747 = 2;
	static int32_t x748 = -1;
	static int32_t t140 = 15563;

    t140 = (((x745*x746)^x747)>x748);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x749 = INT32_MIN;
	uint32_t x751 = 89U;

    t141 = (((x749*x750)^x751)>x752);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x761 = 1339U;
	int16_t x762 = -3172;
	uint64_t x763 = UINT64_MAX;
	int32_t x764 = INT32_MAX;
	static volatile int32_t t142 = -11602;

    t142 = (((x761*x762)^x763)>x764);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x765 = -333LL;
	uint32_t x766 = 184339U;
	uint32_t x767 = UINT32_MAX;
	int32_t x768 = -1;
	volatile int32_t t143 = -465764252;

    t143 = (((x765*x766)^x767)>x768);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x769 = UINT64_MAX;
	int64_t x770 = -1LL;
	int32_t x771 = INT32_MIN;
	int16_t x772 = INT16_MAX;
	static int32_t t144 = 13316;

    t144 = (((x769*x770)^x771)>x772);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint32_t x777 = 375584U;
	int64_t x779 = INT64_MAX;
	volatile int16_t x780 = INT16_MIN;
	volatile int32_t t145 = -168643;

    t145 = (((x777*x778)^x779)>x780);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint32_t x782 = 1449828978U;
	int8_t x783 = INT8_MIN;
	int64_t x784 = -115056264652LL;
	int32_t t146 = -122;

    t146 = (((x781*x782)^x783)>x784);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x785 = UINT64_MAX;
	int64_t x786 = INT64_MAX;
	int32_t t147 = 114155;

    t147 = (((x785*x786)^x787)>x788);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x789 = INT32_MIN;
	static int64_t x790 = -1LL;
	int16_t x791 = -1;
	int16_t x792 = INT16_MAX;
	int32_t t148 = -9647;

    t148 = (((x789*x790)^x791)>x792);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x793 = UINT64_MAX;
	static int8_t x795 = INT8_MIN;
	int32_t x796 = INT32_MAX;

    t149 = (((x793*x794)^x795)>x796);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x797 = -1;
	static int32_t x798 = -1;
	uint16_t x800 = 11U;
	volatile int32_t t150 = -1583;

    t150 = (((x797*x798)^x799)>x800);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x801 = UINT8_MAX;
	uint64_t x802 = UINT64_MAX;
	int8_t x803 = INT8_MIN;
	int16_t x804 = INT16_MAX;
	int32_t t151 = 1;

    t151 = (((x801*x802)^x803)>x804);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x809 = UINT32_MAX;
	static int64_t x811 = 26556772434LL;
	int32_t t152 = -429;

    t152 = (((x809*x810)^x811)>x812);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x813 = 8068;
	int32_t x814 = -1;
	static volatile int64_t x815 = 482LL;
	static volatile int16_t x816 = -1;
	int32_t t153 = 156;

    t153 = (((x813*x814)^x815)>x816);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x817 = 22078;
	int8_t x818 = INT8_MAX;
	static volatile int16_t x819 = -1;
	uint64_t x820 = 1305748176537793279LLU;
	int32_t t154 = -11751;

    t154 = (((x817*x818)^x819)>x820);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x821 = INT8_MIN;
	uint8_t x822 = 1U;
	static int32_t x823 = INT32_MIN;
	volatile int16_t x824 = INT16_MIN;
	int32_t t155 = 230624639;

    t155 = (((x821*x822)^x823)>x824);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x825 = INT8_MIN;
	int8_t x826 = INT8_MAX;
	static int64_t x828 = -82LL;
	volatile int32_t t156 = -426008;

    t156 = (((x825*x826)^x827)>x828);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x829 = -1;
	static uint64_t x830 = UINT64_MAX;
	volatile int8_t x831 = INT8_MAX;
	uint16_t x832 = 1U;
	static volatile int32_t t157 = 152024;

    t157 = (((x829*x830)^x831)>x832);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x837 = INT8_MIN;
	int16_t x838 = INT16_MIN;
	uint16_t x840 = 30U;
	volatile int32_t t158 = -249743382;

    t158 = (((x837*x838)^x839)>x840);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x841 = -1;
	int8_t x842 = INT8_MAX;
	volatile uint32_t x844 = UINT32_MAX;
	static volatile int32_t t159 = 20114;

    t159 = (((x841*x842)^x843)>x844);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x845 = 78U;
	uint16_t x846 = 2232U;
	uint8_t x847 = UINT8_MAX;
	uint32_t x848 = 46U;
	volatile int32_t t160 = 3;

    t160 = (((x845*x846)^x847)>x848);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x850 = UINT16_MAX;
	int8_t x851 = INT8_MIN;
	int32_t x852 = INT32_MAX;
	int32_t t161 = 3561;

    t161 = (((x849*x850)^x851)>x852);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x857 = 14U;
	int64_t x858 = -1LL;
	int64_t x860 = INT64_MAX;

    t162 = (((x857*x858)^x859)>x860);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x862 = 23;
	static uint64_t x863 = UINT64_MAX;
	int32_t t163 = 2904350;

    t163 = (((x861*x862)^x863)>x864);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x865 = 171;
	uint64_t x868 = 13879009LLU;
	int32_t t164 = -1844;

    t164 = (((x865*x866)^x867)>x868);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x870 = INT8_MIN;
	volatile int16_t x871 = 741;
	static uint32_t x872 = 2U;

    t165 = (((x869*x870)^x871)>x872);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x873 = -1;
	static uint64_t x874 = UINT64_MAX;
	uint64_t x875 = UINT64_MAX;
	static int16_t x876 = -1;
	volatile int32_t t166 = 517694007;

    t166 = (((x873*x874)^x875)>x876);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint16_t x877 = 77U;
	int8_t x879 = INT8_MIN;
	uint8_t x880 = 30U;
	static int32_t t167 = 29132;

    t167 = (((x877*x878)^x879)>x880);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x881 = 29;
	int64_t x882 = -1LL;
	int16_t x883 = INT16_MIN;
	uint8_t x884 = 0U;
	int32_t t168 = -1574;

    t168 = (((x881*x882)^x883)>x884);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint8_t x888 = UINT8_MAX;
	volatile int32_t t169 = -1807930;

    t169 = (((x885*x886)^x887)>x888);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x889 = 1U;
	volatile uint64_t x890 = UINT64_MAX;
	int32_t x891 = 1144061;
	int32_t t170 = 14520227;

    t170 = (((x889*x890)^x891)>x892);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x893 = 77951U;
	uint32_t x895 = 327U;
	volatile uint32_t x896 = 118679674U;
	int32_t t171 = -13;

    t171 = (((x893*x894)^x895)>x896);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint8_t x897 = UINT8_MAX;
	int16_t x898 = -8705;
	static int16_t x899 = INT16_MIN;
	volatile uint8_t x900 = 2U;
	int32_t t172 = 1;

    t172 = (((x897*x898)^x899)>x900);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x901 = 238U;
	volatile uint8_t x902 = 1U;
	static int8_t x903 = INT8_MAX;
	volatile uint64_t x904 = 2709463080837217LLU;
	int32_t t173 = 1836619;

    t173 = (((x901*x902)^x903)>x904);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x906 = 1U;
	int32_t x908 = INT32_MIN;
	volatile int32_t t174 = -696343;

    t174 = (((x905*x906)^x907)>x908);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x910 = 6U;
	uint64_t x911 = UINT64_MAX;
	int16_t x912 = INT16_MIN;

    t175 = (((x909*x910)^x911)>x912);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x913 = -7990702LL;
	static int32_t x914 = INT32_MIN;
	uint64_t x916 = 650163460556368LLU;
	int32_t t176 = 203;

    t176 = (((x913*x914)^x915)>x916);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x917 = UINT32_MAX;
	static int8_t x918 = -50;
	int8_t x919 = -1;

    t177 = (((x917*x918)^x919)>x920);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint16_t x921 = 2U;
	int64_t x922 = -1LL;
	volatile int64_t x923 = INT64_MIN;
	static volatile int16_t x924 = INT16_MAX;
	volatile int32_t t178 = -30483;

    t178 = (((x921*x922)^x923)>x924);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x925 = INT8_MAX;
	int8_t x926 = -1;
	int8_t x927 = -1;
	int32_t x928 = INT32_MAX;
	int32_t t179 = 165653560;

    t179 = (((x925*x926)^x927)>x928);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int64_t x929 = 99744163161LL;
	int8_t x931 = INT8_MAX;
	static volatile int32_t t180 = -10;

    t180 = (((x929*x930)^x931)>x932);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile uint64_t x933 = UINT64_MAX;
	uint8_t x934 = UINT8_MAX;
	int32_t x935 = INT32_MIN;
	uint32_t x936 = UINT32_MAX;
	int32_t t181 = -56;

    t181 = (((x933*x934)^x935)>x936);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x937 = 985LL;
	volatile uint32_t x939 = 177588U;
	volatile int32_t t182 = 25120082;

    t182 = (((x937*x938)^x939)>x940);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint8_t x941 = UINT8_MAX;
	static int32_t t183 = -2340;

    t183 = (((x941*x942)^x943)>x944);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x945 = -1;
	int64_t x946 = -1LL;
	volatile uint64_t x947 = 118712048517649LLU;
	static int16_t x948 = INT16_MIN;

    t184 = (((x945*x946)^x947)>x948);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x954 = -2880;
	int64_t x955 = INT64_MIN;
	static int32_t t185 = 32642;

    t185 = (((x953*x954)^x955)>x956);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x957 = 3U;
	int16_t x958 = INT16_MIN;
	uint64_t x959 = 5LLU;
	volatile int32_t x960 = INT32_MIN;
	volatile int32_t t186 = 1;

    t186 = (((x957*x958)^x959)>x960);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x961 = UINT16_MAX;
	uint32_t x962 = 1209U;
	int64_t x964 = INT64_MAX;
	int32_t t187 = -9551;

    t187 = (((x961*x962)^x963)>x964);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x965 = 56103;
	int16_t x967 = INT16_MIN;
	int16_t x968 = -996;
	int32_t t188 = 443051596;

    t188 = (((x965*x966)^x967)>x968);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x970 = UINT8_MAX;
	volatile uint32_t x971 = 2041200522U;
	static int8_t x972 = -1;
	int32_t t189 = -11;

    t189 = (((x969*x970)^x971)>x972);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint8_t x977 = 83U;
	static volatile uint16_t x978 = 83U;
	int32_t x979 = 4914;

    t190 = (((x977*x978)^x979)>x980);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x982 = 0U;
	int32_t x984 = -764668;
	volatile int32_t t191 = -1175934;

    t191 = (((x981*x982)^x983)>x984);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x986 = INT32_MAX;
	int8_t x987 = INT8_MIN;
	static volatile int8_t x988 = -1;
	int32_t t192 = 219165;

    t192 = (((x985*x986)^x987)>x988);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x990 = INT32_MIN;
	int32_t x991 = INT32_MIN;
	int8_t x992 = -9;
	int32_t t193 = 95161283;

    t193 = (((x989*x990)^x991)>x992);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x997 = 26;
	int8_t x998 = 24;
	static volatile uint32_t x999 = 7845U;
	int64_t x1000 = INT64_MIN;

    t194 = (((x997*x998)^x999)>x1000);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x1001 = 32295;
	int16_t x1003 = INT16_MIN;
	uint8_t x1004 = 4U;
	int32_t t195 = -93112054;

    t195 = (((x1001*x1002)^x1003)>x1004);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x1006 = INT16_MIN;
	uint32_t x1007 = 15U;
	volatile int32_t t196 = 1;

    t196 = (((x1005*x1006)^x1007)>x1008);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x1010 = UINT64_MAX;
	static int32_t x1011 = INT32_MIN;
	static int8_t x1012 = -43;

    t197 = (((x1009*x1010)^x1011)>x1012);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1021 = INT32_MAX;
	int64_t x1022 = -1LL;
	uint8_t x1023 = UINT8_MAX;
	uint16_t x1024 = 12U;
	int32_t t198 = 889971202;

    t198 = (((x1021*x1022)^x1023)>x1024);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1025 = -1;
	int32_t x1026 = 6;
	static uint32_t x1027 = 672U;
	uint32_t x1028 = 72875U;
	volatile int32_t t199 = -173;

    t199 = (((x1025*x1026)^x1027)>x1028);

    if (t199 != 1) { NG(); } else { ; }
	
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


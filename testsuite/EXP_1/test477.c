
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

uint8_t x5 = 91U;
uint64_t x6 = 600936LLU;
volatile int32_t x8 = INT32_MIN;
int32_t t1 = 0;
uint16_t x11 = 1514U;
static uint32_t x16 = UINT32_MAX;
uint32_t t3 = 7U;
int8_t x31 = 5;
int64_t x43 = 1728542LL;
int64_t x45 = 330LL;
static int64_t x51 = 1709713841254713LL;
uint16_t x52 = 13U;
volatile int32_t t10 = 53810;
static volatile uint16_t x55 = 31U;
volatile int16_t x57 = -186;
int32_t x65 = INT32_MIN;
volatile uint64_t x74 = 848LLU;
int64_t x80 = -1LL;
int32_t x87 = INT32_MIN;
uint16_t x103 = UINT16_MAX;
volatile int32_t t19 = -102;
int32_t t21 = -7900;
static int16_t x121 = INT16_MIN;
static uint16_t x125 = UINT16_MAX;
int8_t x145 = -30;
int32_t t28 = -1161923;
volatile int64_t x159 = -25584882LL;
int8_t x167 = 5;
int64_t t31 = -2578LL;
int8_t x175 = -9;
volatile int32_t t33 = -39509517;
uint8_t x178 = 7U;
int32_t x179 = -1;
int32_t t34 = -14723;
int8_t x186 = INT8_MIN;
int64_t x195 = -1LL;
static volatile int8_t x200 = -1;
uint8_t x204 = UINT8_MAX;
uint32_t x205 = 0U;
static uint32_t x211 = 63184168U;
volatile int32_t x227 = -416327076;
static uint8_t x235 = UINT8_MAX;
static volatile int32_t t46 = -5293;
int64_t x243 = -7532805150450LL;
static int8_t x247 = INT8_MIN;
int16_t x259 = INT16_MIN;
int64_t x262 = -1LL;
static int8_t x269 = INT8_MIN;
uint32_t x273 = 2856746U;
int16_t x276 = INT16_MIN;
int64_t x286 = -1LL;
static volatile int32_t t56 = -43720;
int8_t x289 = -1;
volatile uint16_t x290 = 0U;
int64_t x301 = -1LL;
volatile int8_t x308 = 5;
uint32_t x310 = 12215678U;
static volatile int16_t x311 = -1;
uint8_t x313 = 2U;
int64_t x315 = -1LL;
static volatile int32_t t62 = -108;
int16_t x325 = INT16_MIN;
uint64_t t64 = 164LLU;
volatile uint8_t x333 = 5U;
int16_t x359 = -1;
uint64_t x360 = 9403737057465LLU;
uint16_t x370 = 7U;
int32_t x374 = -1;
uint32_t x380 = 1U;
static volatile uint32_t t72 = 52057297U;
volatile int64_t x384 = 1654309LL;
volatile int64_t t73 = -1LL;
int8_t x385 = 1;
volatile int32_t t74 = 1;
static int8_t x389 = INT8_MIN;
int8_t x404 = INT8_MIN;
int8_t x407 = INT8_MIN;
int32_t x408 = INT32_MIN;
static volatile int32_t t77 = -1;
uint64_t x428 = 4680LLU;
int64_t x462 = 1007072086LL;
static int16_t x476 = INT16_MIN;
static uint64_t x481 = 767638947LLU;
static uint64_t x483 = 1883907746033180435LLU;
volatile int64_t t87 = -25250024706LL;
uint32_t x491 = 1422U;
static uint8_t x495 = 6U;
int32_t t89 = 173481;
int32_t t91 = -30573047;
static volatile int16_t x559 = INT16_MIN;
static int32_t t96 = 3;
volatile int64_t x570 = -1LL;
int32_t t99 = 76961008;
volatile int32_t t100 = 23844671;
uint64_t x579 = 680129939909986LLU;
int16_t x582 = INT16_MIN;
int32_t t102 = 2705490;
uint16_t x593 = 467U;
static uint8_t x596 = UINT8_MAX;
static uint64_t x597 = 279LLU;
static volatile int32_t t104 = -89563;
int32_t x602 = 138143;
volatile uint64_t x614 = UINT64_MAX;
volatile int32_t t107 = 106758;
static int16_t x626 = -1;
volatile int32_t t108 = 20670;
volatile uint32_t x632 = 756982U;
int16_t x641 = 5368;
static int32_t x643 = INT32_MAX;
int32_t t112 = 119161466;
int32_t x645 = -488990;
static uint32_t x658 = UINT32_MAX;
int16_t x660 = -1;
static int32_t t114 = 726850;
uint32_t x671 = 255304U;
volatile uint32_t t115 = 308U;
uint16_t x678 = 4U;
volatile int16_t x685 = 6;
int8_t x693 = 5;
int8_t x697 = 1;
volatile int32_t t121 = 22;
int32_t t127 = 1;
int16_t x751 = INT16_MAX;
uint16_t x762 = UINT16_MAX;
int64_t x764 = 560065863392LL;
int64_t x773 = -21692070602310LL;
int64_t x775 = INT64_MIN;
static int64_t x783 = -138661930841690975LL;
static int8_t x785 = -1;
volatile int64_t x788 = 1LL;
volatile int64_t t135 = 32421331348417LL;
volatile int32_t t136 = 455544549;
volatile uint16_t x810 = 10U;
static uint16_t x811 = UINT16_MAX;
static volatile int32_t t138 = 1;
static int32_t t141 = -1;
static volatile int32_t t144 = -2;
static volatile int32_t t147 = 4;
int64_t x861 = -622392536LL;
uint16_t x862 = 49U;
int8_t x863 = -1;
static uint64_t x870 = 683552915893749LLU;
volatile int8_t x881 = INT8_MIN;
static int32_t x885 = -3754;
int32_t x887 = -1;
int32_t x894 = INT32_MIN;
volatile int16_t x895 = -1;
uint64_t x896 = 7165122531LLU;
static int64_t x900 = INT64_MIN;
int8_t x903 = 0;
int8_t x907 = INT8_MAX;
volatile int64_t x930 = -1LL;
volatile int32_t t164 = 214;
uint16_t x950 = 328U;
volatile uint32_t x952 = UINT32_MAX;
static int64_t x963 = INT64_MIN;
volatile int32_t t167 = 1;
int32_t x965 = INT32_MIN;
int8_t x967 = INT8_MIN;
volatile uint8_t x970 = 21U;
uint32_t x982 = 237750625U;
int32_t t170 = -15585;
uint32_t x995 = 2U;
volatile uint32_t x997 = 5514U;
volatile int8_t x1017 = INT8_MIN;
int32_t t177 = 62;
int16_t x1021 = INT16_MIN;
uint64_t x1022 = 213455LLU;
static int16_t x1034 = 0;
volatile int32_t t180 = 1;
volatile int32_t x1037 = INT32_MAX;
static uint64_t x1038 = UINT64_MAX;
uint32_t x1040 = UINT32_MAX;
int8_t x1043 = INT8_MIN;
int32_t t182 = -1719;
static int8_t x1059 = 0;
uint32_t x1063 = 16132U;
static uint32_t x1066 = UINT32_MAX;
int8_t x1070 = INT8_MAX;
uint8_t x1076 = 54U;
volatile int32_t t189 = 52;
static volatile uint32_t x1079 = UINT32_MAX;
int16_t x1080 = INT16_MIN;
uint8_t x1111 = UINT8_MAX;
static int32_t x1124 = INT32_MIN;
volatile int16_t x1129 = INT16_MAX;
volatile uint64_t x1134 = 21340949LLU;
uint32_t x1135 = 58503U;
volatile uint32_t x1136 = 726762U;
int8_t x1142 = INT8_MAX;
uint64_t x1149 = 5298013105039LLU;
volatile int32_t x1151 = INT32_MIN;
static int8_t x1155 = -1;


void f0(void) {
    	int16_t x1 = 15;
	int64_t x2 = -1LL;
	uint32_t x3 = 23U;
	int64_t x4 = -696065427196780LL;
	int64_t t0 = -25245497LL;

    t0 = (((x1*x2)!=x3)+x4);

    if (t0 != -696065427196779LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x7 = -6;

    t1 = (((x5*x6)!=x7)+x8);

    if (t1 != -2147483647) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MIN;
	int16_t x10 = 1;
	volatile uint16_t x12 = UINT16_MAX;
	int32_t t2 = -71;

    t2 = (((x9*x10)!=x11)+x12);

    if (t2 != 65536) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = -1;
	uint8_t x14 = 6U;
	volatile uint8_t x15 = 1U;

    t3 = (((x13*x14)!=x15)+x16);

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = 227552515U;
	int32_t x18 = 5034512;
	static volatile uint16_t x19 = UINT16_MAX;
	volatile int32_t x20 = 278;
	int32_t t4 = 6825069;

    t4 = (((x17*x18)!=x19)+x20);

    if (t4 != 279) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x25 = -1;
	int32_t x26 = -156;
	static int8_t x27 = INT8_MAX;
	static volatile int16_t x28 = 10;
	int32_t t5 = -738842503;

    t5 = (((x25*x26)!=x27)+x28);

    if (t5 != 11) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint16_t x29 = UINT16_MAX;
	int8_t x30 = INT8_MIN;
	volatile int16_t x32 = INT16_MIN;
	volatile int32_t t6 = -1;

    t6 = (((x29*x30)!=x31)+x32);

    if (t6 != -32767) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x37 = 30;
	uint64_t x38 = 885843577162LLU;
	int64_t x39 = 100236616740586039LL;
	int64_t x40 = 11LL;
	int64_t t7 = -6639841181199478LL;

    t7 = (((x37*x38)!=x39)+x40);

    if (t7 != 12LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x41 = 0U;
	int16_t x42 = INT16_MIN;
	int32_t x44 = -1;
	volatile int32_t t8 = 22;

    t8 = (((x41*x42)!=x43)+x44);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int16_t x46 = -56;
	static int64_t x47 = -83641822LL;
	uint16_t x48 = 26U;
	int32_t t9 = -13138613;

    t9 = (((x45*x46)!=x47)+x48);

    if (t9 != 27) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x49 = INT16_MIN;
	uint32_t x50 = UINT32_MAX;

    t10 = (((x49*x50)!=x51)+x52);

    if (t10 != 14) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x53 = INT8_MIN;
	volatile uint16_t x54 = 19U;
	volatile int64_t x56 = -18197851256LL;
	int64_t t11 = 3191545766254582168LL;

    t11 = (((x53*x54)!=x55)+x56);

    if (t11 != -18197851255LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x58 = 1U;
	static uint64_t x59 = UINT64_MAX;
	uint64_t x60 = 23660706920352105LLU;
	volatile uint64_t t12 = 402LLU;

    t12 = (((x57*x58)!=x59)+x60);

    if (t12 != 23660706920352106LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x66 = -1LL;
	volatile uint8_t x67 = UINT8_MAX;
	volatile int16_t x68 = INT16_MAX;
	int32_t t13 = 15;

    t13 = (((x65*x66)!=x67)+x68);

    if (t13 != 32768) { NG(); } else { ; }
	
}

void f14(void) {
    	static int32_t x73 = -87;
	volatile int8_t x75 = INT8_MAX;
	uint8_t x76 = UINT8_MAX;
	volatile int32_t t14 = -3367;

    t14 = (((x73*x74)!=x75)+x76);

    if (t14 != 256) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x77 = 8;
	uint8_t x78 = UINT8_MAX;
	volatile int32_t x79 = INT32_MIN;
	volatile int64_t t15 = 691065LL;

    t15 = (((x77*x78)!=x79)+x80);

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x85 = UINT32_MAX;
	static int32_t x86 = -4;
	uint32_t x88 = 1606011520U;
	volatile uint32_t t16 = 5U;

    t16 = (((x85*x86)!=x87)+x88);

    if (t16 != 1606011521U) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x89 = INT16_MIN;
	int8_t x90 = INT8_MIN;
	int16_t x91 = INT16_MIN;
	uint8_t x92 = 3U;
	volatile int32_t t17 = 6;

    t17 = (((x89*x90)!=x91)+x92);

    if (t17 != 4) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x97 = INT16_MIN;
	volatile uint16_t x98 = 2597U;
	uint64_t x99 = UINT64_MAX;
	int16_t x100 = -127;
	int32_t t18 = -49673;

    t18 = (((x97*x98)!=x99)+x100);

    if (t18 != -126) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x101 = -278;
	static int16_t x102 = 1751;
	static int16_t x104 = -1;

    t19 = (((x101*x102)!=x103)+x104);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x105 = INT64_MIN;
	uint8_t x106 = 1U;
	static int8_t x107 = 1;
	uint8_t x108 = UINT8_MAX;
	volatile int32_t t20 = -1881884;

    t20 = (((x105*x106)!=x107)+x108);

    if (t20 != 256) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x117 = UINT8_MAX;
	uint32_t x118 = UINT32_MAX;
	int32_t x119 = INT32_MIN;
	static int32_t x120 = -1;

    t21 = (((x117*x118)!=x119)+x120);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x122 = INT16_MIN;
	volatile int16_t x123 = -760;
	int16_t x124 = -2498;
	static int32_t t22 = -11364;

    t22 = (((x121*x122)!=x123)+x124);

    if (t22 != -2497) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x126 = 4315LL;
	uint8_t x127 = 1U;
	volatile int64_t x128 = INT64_MIN;
	int64_t t23 = 6115145LL;

    t23 = (((x125*x126)!=x127)+x128);

    if (t23 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x129 = UINT16_MAX;
	int32_t x130 = -1;
	int32_t x131 = -1;
	uint64_t x132 = 2589328062438074072LLU;
	uint64_t t24 = 5798036568257798594LLU;

    t24 = (((x129*x130)!=x131)+x132);

    if (t24 != 2589328062438074073LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x133 = 5LLU;
	static uint32_t x134 = UINT32_MAX;
	int32_t x135 = -364209;
	uint8_t x136 = 1U;
	volatile int32_t t25 = 227084878;

    t25 = (((x133*x134)!=x135)+x136);

    if (t25 != 2) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x141 = 2U;
	uint32_t x142 = 2337958U;
	int16_t x143 = INT16_MIN;
	uint16_t x144 = UINT16_MAX;
	static volatile int32_t t26 = 97;

    t26 = (((x141*x142)!=x143)+x144);

    if (t26 != 65536) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x146 = -1LL;
	int32_t x147 = INT32_MIN;
	uint32_t x148 = 14086567U;
	volatile uint32_t t27 = 414605312U;

    t27 = (((x145*x146)!=x147)+x148);

    if (t27 != 14086568U) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x153 = 0;
	uint8_t x154 = 26U;
	volatile uint32_t x155 = 1009839U;
	int8_t x156 = -1;

    t28 = (((x153*x154)!=x155)+x156);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x157 = 1U;
	uint16_t x158 = UINT16_MAX;
	int64_t x160 = -18154945894210LL;
	int64_t t29 = 1378LL;

    t29 = (((x157*x158)!=x159)+x160);

    if (t29 != -18154945894209LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x161 = 222829U;
	int8_t x162 = -24;
	uint16_t x163 = UINT16_MAX;
	int8_t x164 = 19;
	int32_t t30 = -589501;

    t30 = (((x161*x162)!=x163)+x164);

    if (t30 != 20) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x165 = 48604LLU;
	int16_t x166 = -1;
	int64_t x168 = INT64_MIN;

    t31 = (((x165*x166)!=x167)+x168);

    if (t31 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x169 = 361;
	int16_t x170 = INT16_MIN;
	int8_t x171 = INT8_MIN;
	volatile int16_t x172 = 6453;
	static int32_t t32 = 490167;

    t32 = (((x169*x170)!=x171)+x172);

    if (t32 != 6454) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x173 = 78315U;
	volatile uint16_t x174 = 535U;
	volatile int16_t x176 = -1;

    t33 = (((x173*x174)!=x175)+x176);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x177 = -1;
	static int32_t x180 = -1;

    t34 = (((x177*x178)!=x179)+x180);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint32_t x185 = 6U;
	volatile int64_t x187 = INT64_MAX;
	uint8_t x188 = UINT8_MAX;
	static int32_t t35 = -1017863;

    t35 = (((x185*x186)!=x187)+x188);

    if (t35 != 256) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x189 = INT8_MIN;
	static uint16_t x190 = 891U;
	uint32_t x191 = 0U;
	static volatile uint32_t x192 = 3U;
	static volatile uint32_t t36 = 1117509U;

    t36 = (((x189*x190)!=x191)+x192);

    if (t36 != 4U) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x193 = INT8_MIN;
	int16_t x194 = INT16_MAX;
	int8_t x196 = 35;
	int32_t t37 = -1793;

    t37 = (((x193*x194)!=x195)+x196);

    if (t37 != 36) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x197 = -1;
	int16_t x198 = INT16_MAX;
	static volatile uint32_t x199 = UINT32_MAX;
	static int32_t t38 = -102426806;

    t38 = (((x197*x198)!=x199)+x200);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x201 = UINT16_MAX;
	static volatile uint64_t x202 = UINT64_MAX;
	int32_t x203 = INT32_MAX;
	volatile int32_t t39 = 372331934;

    t39 = (((x201*x202)!=x203)+x204);

    if (t39 != 256) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x206 = INT8_MIN;
	static int32_t x207 = 1;
	volatile int16_t x208 = INT16_MAX;
	int32_t t40 = -1;

    t40 = (((x205*x206)!=x207)+x208);

    if (t40 != 32768) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x209 = -428050636348LL;
	static uint16_t x210 = UINT16_MAX;
	int16_t x212 = -1;
	int32_t t41 = 5722652;

    t41 = (((x209*x210)!=x211)+x212);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x213 = -1;
	int32_t x214 = -1;
	uint16_t x215 = 19U;
	int16_t x216 = 2581;
	int32_t t42 = 20;

    t42 = (((x213*x214)!=x215)+x216);

    if (t42 != 2582) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x221 = -1;
	int64_t x222 = 6124265074372LL;
	volatile int8_t x223 = INT8_MAX;
	int32_t x224 = INT32_MIN;
	int32_t t43 = 0;

    t43 = (((x221*x222)!=x223)+x224);

    if (t43 != -2147483647) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x225 = INT32_MIN;
	static uint64_t x226 = UINT64_MAX;
	int64_t x228 = INT64_MIN;
	volatile int64_t t44 = 62466LL;

    t44 = (((x225*x226)!=x227)+x228);

    if (t44 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x229 = -2;
	volatile uint8_t x230 = 4U;
	int16_t x231 = -1;
	int32_t x232 = 5597;
	volatile int32_t t45 = 66;

    t45 = (((x229*x230)!=x231)+x232);

    if (t45 != 5598) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x233 = INT16_MIN;
	int32_t x234 = -1;
	static volatile uint8_t x236 = 15U;

    t46 = (((x233*x234)!=x235)+x236);

    if (t46 != 16) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x241 = UINT64_MAX;
	int32_t x242 = -12567737;
	uint8_t x244 = UINT8_MAX;
	int32_t t47 = 324777071;

    t47 = (((x241*x242)!=x243)+x244);

    if (t47 != 256) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint64_t x245 = 394542LLU;
	volatile int16_t x246 = INT16_MIN;
	uint32_t x248 = 315828448U;
	uint32_t t48 = 11U;

    t48 = (((x245*x246)!=x247)+x248);

    if (t48 != 315828449U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x249 = UINT64_MAX;
	uint8_t x250 = 15U;
	volatile uint16_t x251 = UINT16_MAX;
	volatile int16_t x252 = INT16_MIN;
	int32_t t49 = -4633;

    t49 = (((x249*x250)!=x251)+x252);

    if (t49 != -32767) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x257 = -1;
	uint64_t x258 = 227513890LLU;
	int32_t x260 = INT32_MIN;
	int32_t t50 = 15251;

    t50 = (((x257*x258)!=x259)+x260);

    if (t50 != -2147483647) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int64_t x261 = -97373016695486LL;
	uint32_t x263 = UINT32_MAX;
	uint8_t x264 = 79U;
	static volatile int32_t t51 = 0;

    t51 = (((x261*x262)!=x263)+x264);

    if (t51 != 80) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x265 = INT16_MIN;
	int32_t x266 = -1;
	static int32_t x267 = INT32_MIN;
	int16_t x268 = INT16_MAX;
	int32_t t52 = -1;

    t52 = (((x265*x266)!=x267)+x268);

    if (t52 != 32768) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x270 = 1052050LL;
	int64_t x271 = INT64_MAX;
	int16_t x272 = INT16_MIN;
	volatile int32_t t53 = 57998;

    t53 = (((x269*x270)!=x271)+x272);

    if (t53 != -32767) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint32_t x274 = 638U;
	int8_t x275 = INT8_MIN;
	static volatile int32_t t54 = 33058;

    t54 = (((x273*x274)!=x275)+x276);

    if (t54 != -32767) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x281 = UINT32_MAX;
	volatile int16_t x282 = 5;
	uint32_t x283 = 384U;
	int8_t x284 = 1;
	static int32_t t55 = 2111013;

    t55 = (((x281*x282)!=x283)+x284);

    if (t55 != 2) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x285 = INT32_MAX;
	int64_t x287 = INT64_MIN;
	int16_t x288 = INT16_MAX;

    t56 = (((x285*x286)!=x287)+x288);

    if (t56 != 32768) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x291 = INT16_MIN;
	int8_t x292 = -1;
	int32_t t57 = -8099;

    t57 = (((x289*x290)!=x291)+x292);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x297 = -1;
	static uint32_t x298 = 881U;
	int32_t x299 = INT32_MIN;
	int64_t x300 = 127LL;
	volatile int64_t t58 = -63489105441912LL;

    t58 = (((x297*x298)!=x299)+x300);

    if (t58 != 128LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x302 = -1;
	int64_t x303 = INT64_MIN;
	static volatile uint32_t x304 = UINT32_MAX;
	static volatile uint32_t t59 = 8765U;

    t59 = (((x301*x302)!=x303)+x304);

    if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x305 = INT64_MIN;
	uint64_t x306 = 2LLU;
	int16_t x307 = 2063;
	int32_t t60 = 411;

    t60 = (((x305*x306)!=x307)+x308);

    if (t60 != 6) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x309 = INT16_MIN;
	static int32_t x312 = -1;
	volatile int32_t t61 = -231796;

    t61 = (((x309*x310)!=x311)+x312);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint64_t x314 = 623804612LLU;
	int32_t x316 = INT32_MIN;

    t62 = (((x313*x314)!=x315)+x316);

    if (t62 != -2147483647) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x317 = 110037U;
	int8_t x318 = 0;
	int64_t x319 = 6343161136749292LL;
	int32_t x320 = 106;
	volatile int32_t t63 = -26596;

    t63 = (((x317*x318)!=x319)+x320);

    if (t63 != 107) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint32_t x326 = 1U;
	int64_t x327 = INT64_MIN;
	volatile uint64_t x328 = 1051176860957LLU;

    t64 = (((x325*x326)!=x327)+x328);

    if (t64 != 1051176860958LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x334 = 254218;
	uint16_t x335 = UINT16_MAX;
	uint64_t x336 = 7LLU;
	uint64_t t65 = 2462425LLU;

    t65 = (((x333*x334)!=x335)+x336);

    if (t65 != 8LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile uint32_t x341 = 8085101U;
	int32_t x342 = INT32_MAX;
	volatile int8_t x343 = -1;
	int8_t x344 = 7;
	volatile int32_t t66 = -87742451;

    t66 = (((x341*x342)!=x343)+x344);

    if (t66 != 8) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x345 = 9;
	uint8_t x346 = 84U;
	int16_t x347 = INT16_MIN;
	int16_t x348 = INT16_MAX;
	volatile int32_t t67 = -76678;

    t67 = (((x345*x346)!=x347)+x348);

    if (t67 != 32768) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x353 = 1494220;
	int64_t x354 = -1LL;
	static uint64_t x355 = 468104LLU;
	int8_t x356 = INT8_MAX;
	volatile int32_t t68 = 799;

    t68 = (((x353*x354)!=x355)+x356);

    if (t68 != 128) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x357 = INT32_MAX;
	static volatile uint32_t x358 = 232091968U;
	uint64_t t69 = 6807662042LLU;

    t69 = (((x357*x358)!=x359)+x360);

    if (t69 != 9403737057466LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x369 = 4438U;
	int64_t x371 = INT64_MIN;
	int64_t x372 = INT64_MIN;
	static int64_t t70 = -1268208LL;

    t70 = (((x369*x370)!=x371)+x372);

    if (t70 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x373 = 1420223LLU;
	static int64_t x375 = 354LL;
	static int64_t x376 = INT64_MIN;
	volatile int64_t t71 = -110403864LL;

    t71 = (((x373*x374)!=x375)+x376);

    if (t71 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x377 = 58630LLU;
	uint16_t x378 = UINT16_MAX;
	volatile int64_t x379 = INT64_MIN;

    t72 = (((x377*x378)!=x379)+x380);

    if (t72 != 2U) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x381 = INT8_MIN;
	static volatile uint64_t x382 = 187580707811LLU;
	volatile uint32_t x383 = 24635U;

    t73 = (((x381*x382)!=x383)+x384);

    if (t73 != 1654310LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x386 = INT16_MAX;
	int16_t x387 = INT16_MIN;
	int8_t x388 = INT8_MAX;

    t74 = (((x385*x386)!=x387)+x388);

    if (t74 != 128) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int8_t x390 = INT8_MAX;
	int64_t x391 = INT64_MIN;
	static uint32_t x392 = UINT32_MAX;
	volatile uint32_t t75 = 694U;

    t75 = (((x389*x390)!=x391)+x392);

    if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x401 = -15;
	uint64_t x402 = UINT64_MAX;
	int16_t x403 = 11941;
	static int32_t t76 = -5;

    t76 = (((x401*x402)!=x403)+x404);

    if (t76 != -127) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint64_t x405 = UINT64_MAX;
	static int16_t x406 = 206;

    t77 = (((x405*x406)!=x407)+x408);

    if (t77 != -2147483647) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x409 = 138566U;
	int32_t x410 = INT32_MIN;
	int16_t x411 = -36;
	volatile int8_t x412 = INT8_MIN;
	static int32_t t78 = 27246;

    t78 = (((x409*x410)!=x411)+x412);

    if (t78 != -127) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint16_t x425 = UINT16_MAX;
	int16_t x426 = -12681;
	int64_t x427 = INT64_MAX;
	uint64_t t79 = 184099863LLU;

    t79 = (((x425*x426)!=x427)+x428);

    if (t79 != 4681LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x429 = INT32_MIN;
	int64_t x430 = -1LL;
	uint8_t x431 = 19U;
	uint64_t x432 = UINT64_MAX;
	uint64_t t80 = 11999812153LLU;

    t80 = (((x429*x430)!=x431)+x432);

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x441 = 680854690364883LL;
	int8_t x442 = 45;
	static int8_t x443 = -1;
	volatile int64_t x444 = INT64_MIN;
	int64_t t81 = 34084352782911LL;

    t81 = (((x441*x442)!=x443)+x444);

    if (t81 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x445 = -16010;
	int64_t x446 = -1LL;
	static uint64_t x447 = 8341114226LLU;
	int8_t x448 = 0;
	volatile int32_t t82 = 11221;

    t82 = (((x445*x446)!=x447)+x448);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x449 = 10LLU;
	volatile int16_t x450 = -1;
	uint32_t x451 = 8897991U;
	int16_t x452 = INT16_MIN;
	volatile int32_t t83 = -267473694;

    t83 = (((x449*x450)!=x451)+x452);

    if (t83 != -32767) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x457 = INT8_MIN;
	volatile int16_t x458 = INT16_MIN;
	static uint16_t x459 = 2686U;
	volatile int64_t x460 = -1LL;
	volatile int64_t t84 = 876456LL;

    t84 = (((x457*x458)!=x459)+x460);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x461 = 4028;
	int8_t x463 = INT8_MAX;
	int16_t x464 = INT16_MAX;
	int32_t t85 = -297845436;

    t85 = (((x461*x462)!=x463)+x464);

    if (t85 != 32768) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint64_t x473 = 5965LLU;
	int16_t x474 = INT16_MIN;
	volatile uint8_t x475 = UINT8_MAX;
	volatile int32_t t86 = 0;

    t86 = (((x473*x474)!=x475)+x476);

    if (t86 != -32767) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x482 = 22991340205180593LL;
	int64_t x484 = INT64_MIN;

    t87 = (((x481*x482)!=x483)+x484);

    if (t87 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x489 = INT8_MAX;
	static int32_t x490 = 75;
	uint64_t x492 = 19721025453847978LLU;
	volatile uint64_t t88 = 1918939290407846LLU;

    t88 = (((x489*x490)!=x491)+x492);

    if (t88 != 19721025453847979LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x493 = 48U;
	static int16_t x494 = INT16_MIN;
	int8_t x496 = INT8_MAX;

    t89 = (((x493*x494)!=x495)+x496);

    if (t89 != 128) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x497 = -170744LL;
	volatile int8_t x498 = INT8_MIN;
	int32_t x499 = INT32_MIN;
	int32_t x500 = -1;
	static int32_t t90 = -511330;

    t90 = (((x497*x498)!=x499)+x500);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x513 = INT64_MAX;
	static int16_t x514 = 1;
	static int16_t x515 = INT16_MIN;
	int8_t x516 = -58;

    t91 = (((x513*x514)!=x515)+x516);

    if (t91 != -57) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x525 = -1;
	volatile int32_t x526 = -1;
	int32_t x527 = INT32_MIN;
	int16_t x528 = -1;
	volatile int32_t t92 = -8;

    t92 = (((x525*x526)!=x527)+x528);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x529 = INT64_MIN;
	uint16_t x530 = 1U;
	int8_t x531 = -1;
	int64_t x532 = -1LL;
	volatile int64_t t93 = -82236049345LL;

    t93 = (((x529*x530)!=x531)+x532);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x533 = 99291309U;
	int8_t x534 = INT8_MAX;
	int8_t x535 = 13;
	int32_t x536 = -56;
	int32_t t94 = 2200;

    t94 = (((x533*x534)!=x535)+x536);

    if (t94 != -55) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int16_t x537 = INT16_MIN;
	int8_t x538 = INT8_MIN;
	int32_t x539 = INT32_MAX;
	int8_t x540 = 27;
	volatile int32_t t95 = -33161221;

    t95 = (((x537*x538)!=x539)+x540);

    if (t95 != 28) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x557 = INT8_MAX;
	volatile uint32_t x558 = 135U;
	volatile int32_t x560 = INT32_MIN;

    t96 = (((x557*x558)!=x559)+x560);

    if (t96 != -2147483647) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x561 = -1;
	int32_t x562 = -1;
	uint64_t x563 = 570007581729352645LLU;
	volatile uint16_t x564 = 5458U;
	volatile int32_t t97 = 2701515;

    t97 = (((x561*x562)!=x563)+x564);

    if (t97 != 5459) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x565 = -1;
	static uint16_t x566 = UINT16_MAX;
	uint8_t x567 = 104U;
	int32_t x568 = 40;
	volatile int32_t t98 = -84814;

    t98 = (((x565*x566)!=x567)+x568);

    if (t98 != 41) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x569 = INT16_MIN;
	uint64_t x571 = 772314LLU;
	int16_t x572 = 1;

    t99 = (((x569*x570)!=x571)+x572);

    if (t99 != 2) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x573 = INT16_MIN;
	int64_t x574 = 3783523527692LL;
	volatile int16_t x575 = INT16_MIN;
	int8_t x576 = INT8_MIN;

    t100 = (((x573*x574)!=x575)+x576);

    if (t100 != -127) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x577 = INT16_MIN;
	int16_t x578 = -1;
	volatile int32_t x580 = -1;
	int32_t t101 = 1;

    t101 = (((x577*x578)!=x579)+x580);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x581 = INT8_MAX;
	volatile uint32_t x583 = 1U;
	static volatile int16_t x584 = INT16_MIN;

    t102 = (((x581*x582)!=x583)+x584);

    if (t102 != -32767) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x594 = INT8_MIN;
	int64_t x595 = -1LL;
	volatile int32_t t103 = 13445185;

    t103 = (((x593*x594)!=x595)+x596);

    if (t103 != 256) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x598 = INT8_MIN;
	int32_t x599 = -1;
	volatile int8_t x600 = INT8_MAX;

    t104 = (((x597*x598)!=x599)+x600);

    if (t104 != 128) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x601 = -1;
	int32_t x603 = -1;
	int16_t x604 = INT16_MIN;
	static volatile int32_t t105 = -64995315;

    t105 = (((x601*x602)!=x603)+x604);

    if (t105 != -32767) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x605 = 2531;
	int8_t x606 = 49;
	int32_t x607 = 2;
	static int8_t x608 = INT8_MIN;
	volatile int32_t t106 = 3328053;

    t106 = (((x605*x606)!=x607)+x608);

    if (t106 != -127) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x613 = 2U;
	static volatile int16_t x615 = INT16_MAX;
	static int32_t x616 = 68633840;

    t107 = (((x613*x614)!=x615)+x616);

    if (t107 != 68633841) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x625 = -1;
	int8_t x627 = 10;
	int32_t x628 = INT32_MIN;

    t108 = (((x625*x626)!=x627)+x628);

    if (t108 != -2147483647) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x629 = UINT8_MAX;
	uint8_t x630 = 83U;
	uint64_t x631 = 1444751698LLU;
	static volatile uint32_t t109 = 15088U;

    t109 = (((x629*x630)!=x631)+x632);

    if (t109 != 756983U) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x633 = INT16_MIN;
	static int64_t x634 = 3618280LL;
	int32_t x635 = 5;
	volatile uint8_t x636 = 0U;
	int32_t t110 = -640040;

    t110 = (((x633*x634)!=x635)+x636);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x637 = INT32_MIN;
	volatile uint64_t x638 = 3485867LLU;
	uint32_t x639 = 22891U;
	static uint32_t x640 = 1U;
	uint32_t t111 = 511U;

    t111 = (((x637*x638)!=x639)+x640);

    if (t111 != 2U) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x642 = -21189LL;
	volatile int8_t x644 = INT8_MIN;

    t112 = (((x641*x642)!=x643)+x644);

    if (t112 != -127) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x646 = -1;
	uint16_t x647 = 8282U;
	uint64_t x648 = 204LLU;
	uint64_t t113 = 1LLU;

    t113 = (((x645*x646)!=x647)+x648);

    if (t113 != 205LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x657 = -1;
	uint8_t x659 = UINT8_MAX;

    t114 = (((x657*x658)!=x659)+x660);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x669 = INT8_MIN;
	int16_t x670 = -1;
	volatile uint32_t x672 = 325299974U;

    t115 = (((x669*x670)!=x671)+x672);

    if (t115 != 325299975U) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x673 = 5;
	uint32_t x674 = 3134U;
	static int8_t x675 = 1;
	volatile int16_t x676 = INT16_MIN;
	volatile int32_t t116 = -536;

    t116 = (((x673*x674)!=x675)+x676);

    if (t116 != -32767) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x677 = 20317348LL;
	int64_t x679 = INT64_MIN;
	int16_t x680 = INT16_MAX;
	volatile int32_t t117 = 808660;

    t117 = (((x677*x678)!=x679)+x680);

    if (t117 != 32768) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x686 = 10;
	volatile int64_t x687 = INT64_MIN;
	volatile int16_t x688 = -1;
	int32_t t118 = 28339159;

    t118 = (((x685*x686)!=x687)+x688);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x689 = 15U;
	uint8_t x690 = UINT8_MAX;
	int16_t x691 = -51;
	volatile int32_t x692 = -1;
	int32_t t119 = 0;

    t119 = (((x689*x690)!=x691)+x692);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x694 = INT8_MIN;
	volatile int64_t x695 = 29131751947LL;
	int32_t x696 = 7;
	int32_t t120 = -1424051;

    t120 = (((x693*x694)!=x695)+x696);

    if (t120 != 8) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint32_t x698 = UINT32_MAX;
	int32_t x699 = INT32_MIN;
	static uint16_t x700 = 1573U;

    t121 = (((x697*x698)!=x699)+x700);

    if (t121 != 1574) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int32_t x705 = 1;
	static int8_t x706 = INT8_MIN;
	static volatile int64_t x707 = INT64_MAX;
	int64_t x708 = INT64_MIN;
	volatile int64_t t122 = -606LL;

    t122 = (((x705*x706)!=x707)+x708);

    if (t122 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int64_t x713 = -1LL;
	static uint16_t x714 = UINT16_MAX;
	int64_t x715 = INT64_MAX;
	static int64_t x716 = INT64_MIN;
	volatile int64_t t123 = 606789983953910377LL;

    t123 = (((x713*x714)!=x715)+x716);

    if (t123 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x729 = 7857199;
	int8_t x730 = INT8_MIN;
	volatile int32_t x731 = INT32_MIN;
	int32_t x732 = INT32_MIN;
	static int32_t t124 = 13;

    t124 = (((x729*x730)!=x731)+x732);

    if (t124 != -2147483647) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x733 = 1682886199418LLU;
	int32_t x734 = INT32_MIN;
	int16_t x735 = INT16_MAX;
	static uint32_t x736 = 173156163U;
	uint32_t t125 = 109U;

    t125 = (((x733*x734)!=x735)+x736);

    if (t125 != 173156164U) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x737 = INT8_MAX;
	int16_t x738 = 142;
	volatile int64_t x739 = INT64_MAX;
	volatile uint32_t x740 = 398U;
	uint32_t t126 = 5976U;

    t126 = (((x737*x738)!=x739)+x740);

    if (t126 != 399U) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x745 = 2092;
	int64_t x746 = -13LL;
	volatile uint32_t x747 = 3202253U;
	static int16_t x748 = INT16_MIN;

    t127 = (((x745*x746)!=x747)+x748);

    if (t127 != -32767) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x749 = -1;
	int64_t x750 = -1LL;
	int8_t x752 = -1;
	volatile int32_t t128 = 1817207;

    t128 = (((x749*x750)!=x751)+x752);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x753 = UINT8_MAX;
	static int16_t x754 = INT16_MIN;
	int16_t x755 = -14968;
	uint64_t x756 = 1141617262782LLU;
	uint64_t t129 = 18399LLU;

    t129 = (((x753*x754)!=x755)+x756);

    if (t129 != 1141617262783LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x757 = 6195;
	int64_t x758 = -1LL;
	uint64_t x759 = 3274LLU;
	int8_t x760 = INT8_MIN;
	int32_t t130 = 1871;

    t130 = (((x757*x758)!=x759)+x760);

    if (t130 != -127) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint64_t x761 = 20LLU;
	uint8_t x763 = 1U;
	static volatile int64_t t131 = 17042365LL;

    t131 = (((x761*x762)!=x763)+x764);

    if (t131 != 560065863393LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint16_t x769 = 31U;
	static volatile int32_t x770 = -119;
	int8_t x771 = INT8_MAX;
	int64_t x772 = INT64_MIN;
	volatile int64_t t132 = 21LL;

    t132 = (((x769*x770)!=x771)+x772);

    if (t132 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x774 = -2274;
	int16_t x776 = 7784;
	int32_t t133 = 3168648;

    t133 = (((x773*x774)!=x775)+x776);

    if (t133 != 7785) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint64_t x781 = 152776151LLU;
	int8_t x782 = 3;
	int32_t x784 = 9;
	volatile int32_t t134 = 8005;

    t134 = (((x781*x782)!=x783)+x784);

    if (t134 != 10) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile uint32_t x786 = 71543U;
	static uint32_t x787 = UINT32_MAX;

    t135 = (((x785*x786)!=x787)+x788);

    if (t135 != 2LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x805 = 12;
	static uint32_t x806 = 3535527U;
	int64_t x807 = INT64_MAX;
	static volatile uint8_t x808 = 21U;

    t136 = (((x805*x806)!=x807)+x808);

    if (t136 != 22) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int64_t x809 = -1LL;
	uint64_t x812 = 183266347LLU;
	uint64_t t137 = 30909154715288LLU;

    t137 = (((x809*x810)!=x811)+x812);

    if (t137 != 183266348LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x813 = INT16_MIN;
	int8_t x814 = -53;
	static volatile int16_t x815 = INT16_MIN;
	uint8_t x816 = UINT8_MAX;

    t138 = (((x813*x814)!=x815)+x816);

    if (t138 != 256) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x821 = -1;
	uint64_t x822 = 17718073LLU;
	static uint32_t x823 = 232017099U;
	int8_t x824 = INT8_MAX;
	volatile int32_t t139 = 353613;

    t139 = (((x821*x822)!=x823)+x824);

    if (t139 != 128) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x825 = -55740;
	int64_t x826 = 1107LL;
	int64_t x827 = -63358287LL;
	volatile int64_t x828 = INT64_MIN;
	int64_t t140 = 2147945047LL;

    t140 = (((x825*x826)!=x827)+x828);

    if (t140 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x829 = -468054130468564LL;
	int8_t x830 = -1;
	int16_t x831 = -58;
	volatile uint8_t x832 = 104U;

    t141 = (((x829*x830)!=x831)+x832);

    if (t141 != 105) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x833 = 1614243853874874783LLU;
	int64_t x834 = INT64_MIN;
	int64_t x835 = 1106065109369LL;
	static uint16_t x836 = 1904U;
	static int32_t t142 = -187;

    t142 = (((x833*x834)!=x835)+x836);

    if (t142 != 1905) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x837 = 147U;
	int8_t x838 = -1;
	int32_t x839 = -258451255;
	uint64_t x840 = UINT64_MAX;
	volatile uint64_t t143 = 144315048133400919LLU;

    t143 = (((x837*x838)!=x839)+x840);

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x841 = 0;
	volatile int64_t x842 = -1LL;
	int8_t x843 = -1;
	int8_t x844 = INT8_MIN;

    t144 = (((x841*x842)!=x843)+x844);

    if (t144 != -127) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x845 = 12547;
	uint32_t x846 = 170U;
	static uint8_t x847 = UINT8_MAX;
	int8_t x848 = INT8_MIN;
	int32_t t145 = -3;

    t145 = (((x845*x846)!=x847)+x848);

    if (t145 != -127) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int32_t x849 = 682730;
	int8_t x850 = INT8_MAX;
	int32_t x851 = 5;
	uint64_t x852 = 3401088988638LLU;
	volatile uint64_t t146 = 193776570351113LLU;

    t146 = (((x849*x850)!=x851)+x852);

    if (t146 != 3401088988639LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint64_t x853 = 816702444LLU;
	static int32_t x854 = INT32_MAX;
	int64_t x855 = INT64_MAX;
	static int8_t x856 = -1;

    t147 = (((x853*x854)!=x855)+x856);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x857 = 3;
	int32_t x858 = -1;
	volatile int32_t x859 = INT32_MIN;
	static int8_t x860 = 0;
	volatile int32_t t148 = 3204574;

    t148 = (((x857*x858)!=x859)+x860);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x864 = -1;
	int32_t t149 = 3572;

    t149 = (((x861*x862)!=x863)+x864);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint32_t x865 = UINT32_MAX;
	int16_t x866 = INT16_MAX;
	int16_t x867 = INT16_MAX;
	static int8_t x868 = INT8_MIN;
	volatile int32_t t150 = -313150;

    t150 = (((x865*x866)!=x867)+x868);

    if (t150 != -127) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x869 = 118;
	static int8_t x871 = 0;
	static int64_t x872 = INT64_MIN;
	volatile int64_t t151 = -30460140042219LL;

    t151 = (((x869*x870)!=x871)+x872);

    if (t151 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x877 = -1;
	int8_t x878 = INT8_MIN;
	uint16_t x879 = 902U;
	uint32_t x880 = 0U;
	uint32_t t152 = 15U;

    t152 = (((x877*x878)!=x879)+x880);

    if (t152 != 1U) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x882 = UINT8_MAX;
	uint32_t x883 = 6512U;
	int8_t x884 = INT8_MAX;
	volatile int32_t t153 = 1;

    t153 = (((x881*x882)!=x883)+x884);

    if (t153 != 128) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int16_t x886 = -8166;
	volatile uint8_t x888 = 64U;
	int32_t t154 = -3569;

    t154 = (((x885*x886)!=x887)+x888);

    if (t154 != 65) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint64_t x893 = UINT64_MAX;
	uint64_t t155 = 57LLU;

    t155 = (((x893*x894)!=x895)+x896);

    if (t155 != 7165122532LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x897 = 3;
	uint16_t x898 = 0U;
	uint64_t x899 = UINT64_MAX;
	int64_t t156 = -659344153193LL;

    t156 = (((x897*x898)!=x899)+x900);

    if (t156 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x901 = UINT32_MAX;
	uint16_t x902 = UINT16_MAX;
	int32_t x904 = INT32_MIN;
	volatile int32_t t157 = -1687;

    t157 = (((x901*x902)!=x903)+x904);

    if (t157 != -2147483647) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x905 = -1;
	int64_t x906 = 1360081894LL;
	int8_t x908 = -6;
	volatile int32_t t158 = 10;

    t158 = (((x905*x906)!=x907)+x908);

    if (t158 != -5) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x909 = -1LL;
	int16_t x910 = INT16_MAX;
	int64_t x911 = INT64_MAX;
	int64_t x912 = 2526231LL;
	volatile int64_t t159 = -2LL;

    t159 = (((x909*x910)!=x911)+x912);

    if (t159 != 2526232LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x913 = -1;
	int16_t x914 = INT16_MIN;
	int32_t x915 = INT32_MIN;
	int64_t x916 = -8796874530733LL;
	volatile int64_t t160 = -2258LL;

    t160 = (((x913*x914)!=x915)+x916);

    if (t160 != -8796874530732LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x929 = 1755852881957939LL;
	volatile uint32_t x931 = 2475U;
	static int16_t x932 = 1;
	int32_t t161 = -1;

    t161 = (((x929*x930)!=x931)+x932);

    if (t161 != 2) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x933 = 257892795361155709LL;
	uint64_t x934 = 54764211853LLU;
	int8_t x935 = -1;
	int64_t x936 = 981914635LL;
	volatile int64_t t162 = 14440LL;

    t162 = (((x933*x934)!=x935)+x936);

    if (t162 != 981914636LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint32_t x937 = 33U;
	uint64_t x938 = 382321548855942LLU;
	static int16_t x939 = -515;
	volatile int64_t x940 = -7268272107LL;
	static int64_t t163 = -131095269320438LL;

    t163 = (((x937*x938)!=x939)+x940);

    if (t163 != -7268272106LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x941 = 7U;
	int8_t x942 = 7;
	int8_t x943 = -36;
	volatile int8_t x944 = 3;

    t164 = (((x941*x942)!=x943)+x944);

    if (t164 != 4) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x949 = 2989U;
	int64_t x951 = INT64_MAX;
	static uint32_t t165 = 1802893U;

    t165 = (((x949*x950)!=x951)+x952);

    if (t165 != 0U) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int16_t x953 = -1;
	static int16_t x954 = -1;
	static int8_t x955 = INT8_MAX;
	int16_t x956 = INT16_MAX;
	volatile int32_t t166 = 1;

    t166 = (((x953*x954)!=x955)+x956);

    if (t166 != 32768) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x961 = INT16_MIN;
	uint64_t x962 = UINT64_MAX;
	uint16_t x964 = UINT16_MAX;

    t167 = (((x961*x962)!=x963)+x964);

    if (t167 != 65536) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x966 = 924106U;
	int64_t x968 = INT64_MIN;
	int64_t t168 = 5361505152429803LL;

    t168 = (((x965*x966)!=x967)+x968);

    if (t168 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x969 = 3U;
	int32_t x971 = INT32_MIN;
	static uint32_t x972 = 23691U;
	volatile uint32_t t169 = 41U;

    t169 = (((x969*x970)!=x971)+x972);

    if (t169 != 23692U) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x981 = -1;
	int64_t x983 = INT64_MIN;
	int16_t x984 = INT16_MIN;

    t170 = (((x981*x982)!=x983)+x984);

    if (t170 != -32767) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint32_t x985 = 3U;
	int32_t x986 = INT32_MIN;
	int8_t x987 = -2;
	int64_t x988 = -23634LL;
	static int64_t t171 = -172718LL;

    t171 = (((x985*x986)!=x987)+x988);

    if (t171 != -23633LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x989 = 210;
	uint32_t x990 = 487U;
	uint64_t x991 = 7667LLU;
	static volatile uint64_t x992 = UINT64_MAX;
	volatile uint64_t t172 = 8965359697427907820LLU;

    t172 = (((x989*x990)!=x991)+x992);

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x993 = 1971615079080LL;
	static int8_t x994 = INT8_MIN;
	static int64_t x996 = INT64_MIN;
	int64_t t173 = 93782958916776208LL;

    t173 = (((x993*x994)!=x995)+x996);

    if (t173 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x998 = 24449366U;
	volatile int32_t x999 = 41118;
	volatile int16_t x1000 = INT16_MIN;
	volatile int32_t t174 = 7163054;

    t174 = (((x997*x998)!=x999)+x1000);

    if (t174 != -32767) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x1001 = 133098178U;
	uint8_t x1002 = UINT8_MAX;
	int8_t x1003 = 1;
	static uint32_t x1004 = UINT32_MAX;
	uint32_t t175 = 58U;

    t175 = (((x1001*x1002)!=x1003)+x1004);

    if (t175 != 0U) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x1009 = UINT8_MAX;
	uint64_t x1010 = 10386723618264913LLU;
	static uint16_t x1011 = 17U;
	int64_t x1012 = -1LL;
	volatile int64_t t176 = 372566121138LL;

    t176 = (((x1009*x1010)!=x1011)+x1012);

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x1018 = UINT32_MAX;
	int64_t x1019 = -2676LL;
	int32_t x1020 = -1;

    t177 = (((x1017*x1018)!=x1019)+x1020);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x1023 = INT8_MAX;
	uint16_t x1024 = 5222U;
	int32_t t178 = 258233;

    t178 = (((x1021*x1022)!=x1023)+x1024);

    if (t178 != 5223) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x1025 = INT32_MAX;
	volatile int32_t x1026 = -1;
	uint16_t x1027 = 147U;
	uint64_t x1028 = UINT64_MAX;
	uint64_t t179 = 17225844111LLU;

    t179 = (((x1025*x1026)!=x1027)+x1028);

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x1033 = INT32_MIN;
	int64_t x1035 = -1LL;
	volatile int32_t x1036 = INT32_MIN;

    t180 = (((x1033*x1034)!=x1035)+x1036);

    if (t180 != -2147483647) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x1039 = 53LLU;
	static uint32_t t181 = 2U;

    t181 = (((x1037*x1038)!=x1039)+x1040);

    if (t181 != 0U) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x1041 = 952LL;
	volatile int16_t x1042 = -1;
	int8_t x1044 = INT8_MIN;

    t182 = (((x1041*x1042)!=x1043)+x1044);

    if (t182 != -127) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x1045 = UINT32_MAX;
	static uint32_t x1046 = UINT32_MAX;
	int64_t x1047 = -1LL;
	volatile int64_t x1048 = INT64_MIN;
	static volatile int64_t t183 = -2LL;

    t183 = (((x1045*x1046)!=x1047)+x1048);

    if (t183 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x1053 = 1497498LLU;
	static int8_t x1054 = INT8_MIN;
	int16_t x1055 = INT16_MAX;
	static volatile uint8_t x1056 = 0U;
	int32_t t184 = -1;

    t184 = (((x1053*x1054)!=x1055)+x1056);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x1057 = INT16_MIN;
	int64_t x1058 = -1LL;
	volatile int8_t x1060 = -3;
	volatile int32_t t185 = -1067899;

    t185 = (((x1057*x1058)!=x1059)+x1060);

    if (t185 != -2) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x1061 = INT16_MAX;
	volatile int8_t x1062 = 8;
	static int8_t x1064 = -53;
	static int32_t t186 = 6938;

    t186 = (((x1061*x1062)!=x1063)+x1064);

    if (t186 != -52) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint16_t x1065 = 430U;
	volatile int8_t x1067 = 6;
	static int8_t x1068 = INT8_MIN;
	int32_t t187 = -478456887;

    t187 = (((x1065*x1066)!=x1067)+x1068);

    if (t187 != -127) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile uint64_t x1069 = UINT64_MAX;
	uint8_t x1071 = UINT8_MAX;
	int8_t x1072 = INT8_MIN;
	int32_t t188 = 6206;

    t188 = (((x1069*x1070)!=x1071)+x1072);

    if (t188 != -127) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x1073 = 3990LLU;
	uint64_t x1074 = 5725306LLU;
	int8_t x1075 = INT8_MAX;

    t189 = (((x1073*x1074)!=x1075)+x1076);

    if (t189 != 55) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x1077 = INT16_MAX;
	int16_t x1078 = INT16_MIN;
	int32_t t190 = -719151562;

    t190 = (((x1077*x1078)!=x1079)+x1080);

    if (t190 != -32767) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x1081 = 317025408U;
	uint32_t x1082 = 2571U;
	int8_t x1083 = INT8_MIN;
	static int32_t x1084 = 235849;
	static int32_t t191 = -12993375;

    t191 = (((x1081*x1082)!=x1083)+x1084);

    if (t191 != 235850) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x1093 = INT32_MIN;
	uint64_t x1094 = 8634945507598935LLU;
	volatile int64_t x1095 = 11629492953LL;
	uint16_t x1096 = UINT16_MAX;
	volatile int32_t t192 = -7;

    t192 = (((x1093*x1094)!=x1095)+x1096);

    if (t192 != 65536) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1109 = 1966;
	int16_t x1110 = -1;
	volatile int64_t x1112 = -100LL;
	static volatile int64_t t193 = -1LL;

    t193 = (((x1109*x1110)!=x1111)+x1112);

    if (t193 != -99LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x1121 = 3U;
	static int64_t x1122 = -1LL;
	uint16_t x1123 = 31U;
	int32_t t194 = 208940;

    t194 = (((x1121*x1122)!=x1123)+x1124);

    if (t194 != -2147483647) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x1130 = 27U;
	uint32_t x1131 = UINT32_MAX;
	uint16_t x1132 = 13U;
	static int32_t t195 = -1;

    t195 = (((x1129*x1130)!=x1131)+x1132);

    if (t195 != 14) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x1133 = INT64_MIN;
	uint32_t t196 = 1173U;

    t196 = (((x1133*x1134)!=x1135)+x1136);

    if (t196 != 726763U) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x1141 = -1;
	static volatile int8_t x1143 = -1;
	int32_t x1144 = -16619634;
	static volatile int32_t t197 = -13436;

    t197 = (((x1141*x1142)!=x1143)+x1144);

    if (t197 != -16619633) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1150 = 3LL;
	int8_t x1152 = 54;
	volatile int32_t t198 = 1;

    t198 = (((x1149*x1150)!=x1151)+x1152);

    if (t198 != 55) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile uint8_t x1153 = UINT8_MAX;
	volatile uint64_t x1154 = 439073570915LLU;
	static int64_t x1156 = 27505118LL;
	static int64_t t199 = 61492943009506LL;

    t199 = (((x1153*x1154)!=x1155)+x1156);

    if (t199 != 27505119LL) { NG(); } else { ; }
	
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


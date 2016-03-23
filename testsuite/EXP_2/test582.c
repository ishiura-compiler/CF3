
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

int8_t x7 = INT8_MIN;
int16_t x8 = 1;
uint16_t x13 = 5U;
uint8_t x16 = UINT8_MAX;
uint8_t x18 = 2U;
int64_t x20 = INT64_MAX;
static int32_t t4 = 42123;
int64_t x29 = INT64_MIN;
uint16_t x36 = 1203U;
volatile int8_t x39 = INT8_MIN;
int32_t t8 = 82389205;
static int16_t x46 = 1;
int8_t x48 = -1;
static volatile int32_t t10 = -64001;
uint16_t x62 = 1U;
volatile int32_t t13 = 1;
int8_t x78 = INT8_MAX;
int16_t x80 = 0;
int32_t t16 = 3786797;
int32_t x82 = -682;
uint32_t x90 = 87757860U;
volatile uint64_t x91 = 1934971877222705LLU;
uint16_t x94 = 74U;
static uint64_t x104 = 2621753813682431LLU;
volatile uint8_t x109 = 9U;
volatile int32_t t23 = -1886;
int16_t x116 = INT16_MAX;
volatile uint16_t x119 = UINT16_MAX;
int64_t x122 = -31702530LL;
volatile int32_t t27 = 209;
uint32_t x130 = 6U;
uint8_t x139 = UINT8_MAX;
volatile int64_t x145 = -9729734056635LL;
int32_t t31 = 161927473;
static uint32_t x157 = 0U;
static int16_t x166 = -1;
uint64_t x170 = 17369675170484496LLU;
static int32_t x173 = INT32_MIN;
int8_t x175 = -1;
int32_t x179 = 1;
static int32_t t37 = 4;
static uint16_t x184 = 6U;
int64_t x192 = INT64_MIN;
int32_t x200 = -1;
uint32_t x206 = 114U;
uint16_t x208 = UINT16_MAX;
int32_t t43 = -1128;
static uint16_t x211 = 19U;
int32_t t44 = 4159;
uint16_t x215 = UINT16_MAX;
volatile int32_t t45 = 15;
uint64_t x227 = UINT64_MAX;
static uint8_t x232 = UINT8_MAX;
int32_t x237 = -1;
uint8_t x245 = 0U;
static int16_t x252 = INT16_MIN;
int16_t x265 = INT16_MAX;
uint32_t x268 = 243829U;
int8_t x272 = INT8_MIN;
int32_t t56 = -4;
int32_t t57 = 7380061;
uint8_t x291 = 3U;
static int16_t x296 = -40;
int32_t x306 = 2680;
static volatile int8_t x307 = INT8_MIN;
static int8_t x314 = INT8_MAX;
static uint16_t x315 = 198U;
volatile int64_t x331 = 6LL;
int8_t x333 = -1;
int32_t t67 = -20501229;
static uint8_t x337 = UINT8_MAX;
int64_t x361 = INT64_MIN;
static uint32_t x365 = UINT32_MAX;
int64_t x370 = 1676592786LL;
int8_t x382 = -1;
int8_t x387 = INT8_MIN;
volatile uint8_t x388 = 106U;
volatile int32_t t75 = 8387887;
static uint8_t x394 = 26U;
volatile int32_t t77 = 4;
uint64_t x398 = 5249483LLU;
uint64_t x399 = 856804405390663LLU;
uint32_t x402 = 121879718U;
uint32_t x404 = 47325648U;
volatile uint64_t x410 = 1LLU;
uint8_t x418 = 1U;
int32_t t82 = -12455;
int32_t t83 = -8;
int8_t x443 = INT8_MIN;
volatile int8_t x444 = -8;
volatile int32_t t85 = 101;
int64_t x460 = -1LL;
static int32_t t88 = -213;
uint8_t x466 = 15U;
int32_t x473 = -1;
int32_t t91 = -15977;
int16_t x477 = INT16_MIN;
volatile int8_t x482 = -1;
uint8_t x486 = 0U;
int32_t x495 = INT32_MIN;
volatile int32_t t96 = -1950426;
uint8_t x502 = UINT8_MAX;
int32_t t97 = 9566132;
int32_t x505 = -1;
static uint64_t x511 = 657LLU;
volatile int16_t x535 = 1;
volatile int32_t t102 = -5;
static int32_t x540 = 12788919;
volatile int32_t t103 = -252929999;
static uint64_t x545 = 1775613361LLU;
volatile int32_t t105 = -102893;
volatile int16_t x557 = INT16_MIN;
volatile int32_t x558 = 250;
int64_t x559 = -7882597LL;
volatile int32_t x560 = INT32_MAX;
static int8_t x565 = INT8_MIN;
int32_t x588 = INT32_MIN;
int16_t x596 = -7575;
volatile int32_t t116 = -90;
static int16_t x609 = -1461;
int8_t x616 = INT8_MAX;
static volatile int32_t t118 = 117939;
int8_t x619 = INT8_MAX;
int32_t t120 = 78;
static int8_t x630 = INT8_MIN;
static int16_t x631 = 14;
volatile uint64_t x637 = UINT64_MAX;
volatile int32_t t122 = 2060;
int32_t x648 = INT32_MAX;
static int32_t x649 = -1;
static int32_t t126 = 25;
int16_t x664 = INT16_MIN;
int16_t x668 = -1;
volatile int8_t x670 = -29;
static uint32_t x673 = 120U;
int64_t x694 = -1LL;
static uint8_t x696 = 11U;
uint32_t x697 = 124233988U;
uint8_t x700 = 0U;
int8_t x703 = INT8_MAX;
volatile int8_t x707 = -1;
volatile int32_t t134 = -24830;
volatile int32_t t136 = -766381637;
uint32_t x735 = UINT32_MAX;
int32_t x738 = -1;
static volatile int32_t t140 = 32493;
static int8_t x747 = INT8_MIN;
volatile int32_t t141 = 131247189;
int16_t x749 = INT16_MIN;
int16_t x750 = INT16_MAX;
volatile int32_t t144 = 0;
int64_t x771 = 8800030117146LL;
static volatile int16_t x772 = INT16_MIN;
volatile uint16_t x780 = 777U;
static int32_t t148 = -55;
int32_t x785 = INT32_MIN;
uint64_t x804 = UINT64_MAX;
static volatile int8_t x806 = 1;
static uint64_t x811 = UINT64_MAX;
static volatile int16_t x816 = 228;
volatile int32_t t155 = 633081523;
int8_t x818 = INT8_MIN;
volatile int8_t x820 = INT8_MIN;
int32_t x831 = -1;
volatile int16_t x838 = 4;
volatile uint32_t x843 = 3080864U;
uint64_t x845 = UINT64_MAX;
int32_t t162 = 133723;
int8_t x852 = -1;
static volatile int32_t t163 = 1874;
volatile int16_t x853 = -1;
volatile int32_t x854 = INT32_MAX;
int16_t x855 = -1;
uint32_t x856 = 30U;
int64_t x863 = -99068933869LL;
volatile int32_t t166 = 8;
volatile uint16_t x873 = UINT16_MAX;
volatile int16_t x876 = INT16_MIN;
int16_t x882 = INT16_MAX;
volatile int32_t x883 = -26855;
static int16_t x885 = 87;
static volatile uint64_t x887 = UINT64_MAX;
int32_t t169 = 47884630;
int16_t x891 = 1;
static volatile int32_t t170 = 53;
int8_t x903 = INT8_MIN;
uint16_t x904 = 232U;
int8_t x910 = -21;
int8_t x913 = -1;
volatile uint32_t x916 = 28855746U;
volatile int32_t t175 = -190370;
static int16_t x920 = 82;
volatile int32_t t176 = -85536339;
int64_t x934 = INT64_MAX;
static uint64_t x935 = UINT64_MAX;
volatile int32_t x938 = 4;
int8_t x941 = -59;
static int64_t x952 = INT64_MIN;
uint64_t x953 = 869264017LLU;
int32_t x954 = -1;
volatile int32_t t185 = 6793940;
int64_t x970 = 50LL;
int8_t x997 = INT8_MAX;
int32_t t190 = 9407;
int64_t x1008 = INT64_MAX;
volatile int16_t x1016 = -25;
int32_t x1024 = -1;
int8_t x1027 = INT8_MAX;
static int16_t x1032 = 1;
int16_t x1036 = INT16_MAX;
int8_t x1039 = 4;
volatile int32_t t199 = -100;


void f0(void) {
    	uint32_t x5 = 2367601U;
	uint8_t x6 = 26U;
	volatile int32_t t0 = -1922000;

    t0 = ((x5^(x6*x7))==x8);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x9 = 348U;
	static uint16_t x10 = 64U;
	uint16_t x11 = 30U;
	static volatile uint8_t x12 = 1U;
	static int32_t t1 = 7566;

    t1 = ((x9^(x10*x11))==x12);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x14 = -1LL;
	volatile uint64_t x15 = 0LLU;
	volatile int32_t t2 = 1771;

    t2 = ((x13^(x14*x15))==x16);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x17 = 0U;
	int8_t x19 = 14;
	volatile int32_t t3 = 330742297;

    t3 = ((x17^(x18*x19))==x20);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x25 = INT8_MAX;
	volatile uint64_t x26 = 20LLU;
	uint32_t x27 = 1318200U;
	uint8_t x28 = 7U;

    t4 = ((x25^(x26*x27))==x28);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x30 = 12104U;
	uint64_t x31 = 4010589LLU;
	int16_t x32 = -1;
	volatile int32_t t5 = 2819887;

    t5 = ((x29^(x30*x31))==x32);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x33 = 115U;
	uint8_t x34 = 3U;
	int16_t x35 = -1;
	int32_t t6 = 0;

    t6 = ((x33^(x34*x35))==x36);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x37 = -1;
	volatile uint64_t x38 = 6300544022971035806LLU;
	int64_t x40 = 0LL;
	int32_t t7 = -658619;

    t7 = ((x37^(x38*x39))==x40);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x41 = INT32_MIN;
	uint64_t x42 = 536253227978119LLU;
	uint64_t x43 = UINT64_MAX;
	volatile int8_t x44 = INT8_MIN;

    t8 = ((x41^(x42*x43))==x44);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x45 = -1;
	static uint8_t x47 = 62U;
	int32_t t9 = 30810;

    t9 = ((x45^(x46*x47))==x48);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x53 = 4325148423786375372LL;
	uint16_t x54 = UINT16_MAX;
	int8_t x55 = INT8_MIN;
	int16_t x56 = -1;

    t10 = ((x53^(x54*x55))==x56);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint32_t x57 = 15011U;
	static volatile uint16_t x58 = 1069U;
	uint32_t x59 = 241524U;
	static int32_t x60 = -468165;
	volatile int32_t t11 = 636957464;

    t11 = ((x57^(x58*x59))==x60);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x61 = 12U;
	int32_t x63 = INT32_MIN;
	static volatile int16_t x64 = -1;
	volatile int32_t t12 = -1017;

    t12 = ((x61^(x62*x63))==x64);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x65 = -1;
	static int64_t x66 = INT64_MAX;
	uint64_t x67 = UINT64_MAX;
	static volatile int64_t x68 = -17005551317794927LL;

    t13 = ((x65^(x66*x67))==x68);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x69 = INT16_MAX;
	uint16_t x70 = UINT16_MAX;
	volatile int16_t x71 = -1257;
	volatile int16_t x72 = INT16_MAX;
	int32_t t14 = -129547;

    t14 = ((x69^(x70*x71))==x72);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x73 = INT64_MIN;
	static volatile int64_t x74 = -1LL;
	int8_t x75 = -1;
	int8_t x76 = INT8_MIN;
	static volatile int32_t t15 = 5;

    t15 = ((x73^(x74*x75))==x76);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x77 = INT16_MIN;
	int16_t x79 = 21;

    t16 = ((x77^(x78*x79))==x80);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x81 = INT8_MIN;
	uint64_t x83 = 2035274919LLU;
	uint64_t x84 = 1409004173048004670LLU;
	volatile int32_t t17 = -1;

    t17 = ((x81^(x82*x83))==x84);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x89 = 22119U;
	static int32_t x92 = INT32_MIN;
	volatile int32_t t18 = -1123;

    t18 = ((x89^(x90*x91))==x92);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x93 = INT8_MIN;
	uint16_t x95 = 17U;
	int8_t x96 = -30;
	volatile int32_t t19 = -3439;

    t19 = ((x93^(x94*x95))==x96);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x97 = INT64_MIN;
	uint64_t x98 = UINT64_MAX;
	int32_t x99 = INT32_MAX;
	int32_t x100 = INT32_MAX;
	volatile int32_t t20 = 9086486;

    t20 = ((x97^(x98*x99))==x100);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x101 = UINT8_MAX;
	uint32_t x102 = 20721U;
	static int32_t x103 = INT32_MIN;
	volatile int32_t t21 = 6810926;

    t21 = ((x101^(x102*x103))==x104);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x105 = -979446;
	uint32_t x106 = UINT32_MAX;
	uint16_t x107 = UINT16_MAX;
	volatile int16_t x108 = -45;
	int32_t t22 = -5;

    t22 = ((x105^(x106*x107))==x108);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x110 = -1LL;
	int8_t x111 = INT8_MIN;
	volatile int32_t x112 = INT32_MAX;

    t23 = ((x109^(x110*x111))==x112);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x113 = UINT8_MAX;
	int8_t x114 = 2;
	static int16_t x115 = INT16_MIN;
	volatile int32_t t24 = -16105;

    t24 = ((x113^(x114*x115))==x116);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x117 = 54LL;
	static int8_t x118 = INT8_MAX;
	int32_t x120 = -105620740;
	static volatile int32_t t25 = 25186101;

    t25 = ((x117^(x118*x119))==x120);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x121 = 6U;
	uint32_t x123 = UINT32_MAX;
	int8_t x124 = INT8_MIN;
	volatile int32_t t26 = 499234191;

    t26 = ((x121^(x122*x123))==x124);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x125 = 29753613663878LLU;
	static volatile int32_t x126 = -1;
	static int32_t x127 = -1;
	static volatile int16_t x128 = -1;

    t27 = ((x125^(x126*x127))==x128);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x129 = -6;
	int32_t x131 = 6427;
	volatile uint32_t x132 = UINT32_MAX;
	int32_t t28 = 7;

    t28 = ((x129^(x130*x131))==x132);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x133 = INT16_MIN;
	volatile uint8_t x134 = 4U;
	uint16_t x135 = 2593U;
	int32_t x136 = INT32_MAX;
	volatile int32_t t29 = -61;

    t29 = ((x133^(x134*x135))==x136);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint64_t x137 = 53953280565LLU;
	volatile int8_t x138 = 1;
	volatile uint32_t x140 = 5782U;
	volatile int32_t t30 = 2;

    t30 = ((x137^(x138*x139))==x140);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x146 = 6;
	uint16_t x147 = 118U;
	int32_t x148 = INT32_MIN;

    t31 = ((x145^(x146*x147))==x148);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x158 = -1;
	int32_t x159 = 7;
	volatile int8_t x160 = 0;
	volatile int32_t t32 = -2521283;

    t32 = ((x157^(x158*x159))==x160);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x161 = UINT32_MAX;
	uint64_t x162 = 50532012053517LLU;
	uint16_t x163 = 2903U;
	uint8_t x164 = UINT8_MAX;
	volatile int32_t t33 = 0;

    t33 = ((x161^(x162*x163))==x164);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x165 = UINT16_MAX;
	int64_t x167 = -17990351LL;
	static uint16_t x168 = 1271U;
	int32_t t34 = 803973984;

    t34 = ((x165^(x166*x167))==x168);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int8_t x169 = 1;
	int64_t x171 = -1LL;
	uint32_t x172 = UINT32_MAX;
	volatile int32_t t35 = 203;

    t35 = ((x169^(x170*x171))==x172);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint64_t x174 = UINT64_MAX;
	static uint16_t x176 = 0U;
	int32_t t36 = -73002;

    t36 = ((x173^(x174*x175))==x176);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x177 = INT64_MIN;
	volatile int32_t x178 = INT32_MAX;
	int16_t x180 = -1425;

    t37 = ((x177^(x178*x179))==x180);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x181 = INT16_MAX;
	int16_t x182 = 3044;
	uint8_t x183 = UINT8_MAX;
	int32_t t38 = 81096;

    t38 = ((x181^(x182*x183))==x184);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x185 = 11974900632103LLU;
	int64_t x186 = -14395656286187598LL;
	static int8_t x187 = 45;
	uint16_t x188 = 377U;
	static volatile int32_t t39 = 0;

    t39 = ((x185^(x186*x187))==x188);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x189 = INT64_MIN;
	int64_t x190 = 4LL;
	uint8_t x191 = 13U;
	int32_t t40 = -21521431;

    t40 = ((x189^(x190*x191))==x192);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x193 = INT64_MAX;
	int16_t x194 = 16;
	int16_t x195 = INT16_MAX;
	volatile int16_t x196 = INT16_MIN;
	int32_t t41 = 2930;

    t41 = ((x193^(x194*x195))==x196);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x197 = -1;
	volatile uint8_t x198 = 0U;
	static int8_t x199 = INT8_MIN;
	volatile int32_t t42 = -556600;

    t42 = ((x197^(x198*x199))==x200);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x205 = INT8_MAX;
	static int32_t x207 = 131984721;

    t43 = ((x205^(x206*x207))==x208);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x209 = 67734LL;
	static uint8_t x210 = 6U;
	int32_t x212 = -5183;

    t44 = ((x209^(x210*x211))==x212);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x213 = 0;
	int32_t x214 = -3999;
	int64_t x216 = INT64_MAX;

    t45 = ((x213^(x214*x215))==x216);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x217 = INT64_MAX;
	int16_t x218 = INT16_MIN;
	static int16_t x219 = INT16_MIN;
	int64_t x220 = 1956LL;
	int32_t t46 = -3;

    t46 = ((x217^(x218*x219))==x220);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x225 = INT64_MIN;
	int16_t x226 = -6711;
	int16_t x228 = INT16_MIN;
	int32_t t47 = 100;

    t47 = ((x225^(x226*x227))==x228);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint64_t x229 = UINT64_MAX;
	volatile uint32_t x230 = 11626U;
	volatile uint16_t x231 = UINT16_MAX;
	static volatile int32_t t48 = 44;

    t48 = ((x229^(x230*x231))==x232);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x238 = INT16_MIN;
	static int32_t x239 = -1;
	static uint32_t x240 = UINT32_MAX;
	int32_t t49 = 6;

    t49 = ((x237^(x238*x239))==x240);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x246 = INT16_MAX;
	static volatile int8_t x247 = INT8_MAX;
	int64_t x248 = -353160933574LL;
	int32_t t50 = -132;

    t50 = ((x245^(x246*x247))==x248);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x249 = 70395932376911211LLU;
	volatile int16_t x250 = -7;
	int8_t x251 = INT8_MIN;
	static volatile int32_t t51 = -55575;

    t51 = ((x249^(x250*x251))==x252);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x257 = INT8_MIN;
	uint8_t x258 = 11U;
	volatile int16_t x259 = INT16_MIN;
	int64_t x260 = INT64_MIN;
	static volatile int32_t t52 = -50816;

    t52 = ((x257^(x258*x259))==x260);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x261 = -863;
	int16_t x262 = 0;
	volatile uint8_t x263 = 4U;
	volatile int16_t x264 = INT16_MAX;
	volatile int32_t t53 = 4863;

    t53 = ((x261^(x262*x263))==x264);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x266 = INT16_MAX;
	int16_t x267 = 169;
	int32_t t54 = 1;

    t54 = ((x265^(x266*x267))==x268);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x269 = -43;
	int8_t x270 = 5;
	static volatile int64_t x271 = -842134815LL;
	static int32_t t55 = 92;

    t55 = ((x269^(x270*x271))==x272);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x277 = INT8_MIN;
	int16_t x278 = -1;
	volatile uint64_t x279 = UINT64_MAX;
	static int32_t x280 = -26;

    t56 = ((x277^(x278*x279))==x280);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x281 = 28967703U;
	int64_t x282 = 63566983260911LL;
	static uint64_t x283 = UINT64_MAX;
	int32_t x284 = 7953858;

    t57 = ((x281^(x282*x283))==x284);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x285 = 38984699356LLU;
	uint8_t x286 = UINT8_MAX;
	volatile int64_t x287 = 120LL;
	static int8_t x288 = -1;
	volatile int32_t t58 = 914633548;

    t58 = ((x285^(x286*x287))==x288);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x289 = 28399242411LLU;
	static volatile int16_t x290 = -1;
	int16_t x292 = INT16_MIN;
	int32_t t59 = -927622113;

    t59 = ((x289^(x290*x291))==x292);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x293 = 3726U;
	volatile uint64_t x294 = 1386447926606187882LLU;
	int8_t x295 = 0;
	int32_t t60 = -819003965;

    t60 = ((x293^(x294*x295))==x296);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x297 = INT16_MAX;
	int64_t x298 = 8262697LL;
	static uint16_t x299 = 97U;
	int32_t x300 = INT32_MIN;
	static int32_t t61 = 21815;

    t61 = ((x297^(x298*x299))==x300);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x301 = 125075U;
	uint32_t x302 = UINT32_MAX;
	int16_t x303 = INT16_MIN;
	int16_t x304 = INT16_MAX;
	volatile int32_t t62 = 104;

    t62 = ((x301^(x302*x303))==x304);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x305 = 0U;
	int64_t x308 = INT64_MIN;
	volatile int32_t t63 = 1376;

    t63 = ((x305^(x306*x307))==x308);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint64_t x313 = UINT64_MAX;
	int32_t x316 = INT32_MIN;
	int32_t t64 = 0;

    t64 = ((x313^(x314*x315))==x316);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x325 = 6;
	volatile uint8_t x326 = 48U;
	int8_t x327 = INT8_MAX;
	int32_t x328 = -1;
	static volatile int32_t t65 = 1212139;

    t65 = ((x325^(x326*x327))==x328);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x329 = -1;
	uint8_t x330 = 43U;
	static int32_t x332 = INT32_MAX;
	volatile int32_t t66 = 1;

    t66 = ((x329^(x330*x331))==x332);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint32_t x334 = 95574276U;
	uint16_t x335 = UINT16_MAX;
	uint16_t x336 = 812U;

    t67 = ((x333^(x334*x335))==x336);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x338 = INT16_MAX;
	static volatile int8_t x339 = INT8_MIN;
	int32_t x340 = INT32_MIN;
	static volatile int32_t t68 = 757;

    t68 = ((x337^(x338*x339))==x340);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x345 = INT16_MAX;
	int8_t x346 = -4;
	uint8_t x347 = 2U;
	int16_t x348 = 86;
	volatile int32_t t69 = 16;

    t69 = ((x345^(x346*x347))==x348);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x362 = -9901003LL;
	uint16_t x363 = 5700U;
	int64_t x364 = -8697690LL;
	int32_t t70 = 1968528;

    t70 = ((x361^(x362*x363))==x364);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int64_t x366 = -1LL;
	int8_t x367 = -1;
	volatile int8_t x368 = 50;
	volatile int32_t t71 = 14362316;

    t71 = ((x365^(x366*x367))==x368);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x369 = INT64_MIN;
	int16_t x371 = -13;
	int16_t x372 = -1;
	int32_t t72 = -877525;

    t72 = ((x369^(x370*x371))==x372);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x377 = INT32_MIN;
	volatile int32_t x378 = -142;
	volatile int16_t x379 = 5231;
	int16_t x380 = 48;
	volatile int32_t t73 = -718371;

    t73 = ((x377^(x378*x379))==x380);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x381 = UINT16_MAX;
	int16_t x383 = INT16_MIN;
	static int16_t x384 = -29;
	static volatile int32_t t74 = 20109;

    t74 = ((x381^(x382*x383))==x384);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile uint64_t x385 = UINT64_MAX;
	static int16_t x386 = -868;

    t75 = ((x385^(x386*x387))==x388);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x389 = 9159483545951463188LLU;
	static volatile uint64_t x390 = 43603341420715486LLU;
	int32_t x391 = -1;
	int16_t x392 = -1;
	volatile int32_t t76 = -54179;

    t76 = ((x389^(x390*x391))==x392);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint64_t x393 = 0LLU;
	uint64_t x395 = UINT64_MAX;
	static uint8_t x396 = 3U;

    t77 = ((x393^(x394*x395))==x396);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x397 = INT8_MAX;
	static int8_t x400 = INT8_MIN;
	int32_t t78 = 749855369;

    t78 = ((x397^(x398*x399))==x400);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x401 = -59;
	uint16_t x403 = 298U;
	int32_t t79 = -1179;

    t79 = ((x401^(x402*x403))==x404);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x409 = 1;
	static int8_t x411 = INT8_MIN;
	static uint64_t x412 = 6783717730228291LLU;
	volatile int32_t t80 = 103217;

    t80 = ((x409^(x410*x411))==x412);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x413 = 174407102U;
	uint16_t x414 = 78U;
	volatile uint32_t x415 = 408U;
	int16_t x416 = INT16_MIN;
	static int32_t t81 = 398150;

    t81 = ((x413^(x414*x415))==x416);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x417 = INT8_MAX;
	static int8_t x419 = -1;
	volatile uint8_t x420 = UINT8_MAX;

    t82 = ((x417^(x418*x419))==x420);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x421 = INT16_MIN;
	int16_t x422 = 3;
	int32_t x423 = -1;
	int32_t x424 = -423700296;

    t83 = ((x421^(x422*x423))==x424);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x425 = INT8_MAX;
	int32_t x426 = INT32_MIN;
	volatile uint32_t x427 = 2U;
	static uint32_t x428 = 27567U;
	int32_t t84 = 1;

    t84 = ((x425^(x426*x427))==x428);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x441 = 2;
	int8_t x442 = INT8_MIN;

    t85 = ((x441^(x442*x443))==x444);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x449 = 72508673598912102LLU;
	volatile uint8_t x450 = 90U;
	int8_t x451 = -1;
	static int32_t x452 = INT32_MIN;
	volatile int32_t t86 = -901;

    t86 = ((x449^(x450*x451))==x452);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x453 = 7U;
	volatile uint8_t x454 = 2U;
	int8_t x455 = INT8_MIN;
	int64_t x456 = -6936823110LL;
	volatile int32_t t87 = 50;

    t87 = ((x453^(x454*x455))==x456);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x457 = INT8_MIN;
	int8_t x458 = INT8_MAX;
	uint8_t x459 = 9U;

    t88 = ((x457^(x458*x459))==x460);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x465 = 0;
	int64_t x467 = -2LL;
	static int16_t x468 = INT16_MAX;
	volatile int32_t t89 = -13185;

    t89 = ((x465^(x466*x467))==x468);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint64_t x469 = UINT64_MAX;
	int64_t x470 = -136LL;
	uint16_t x471 = 23346U;
	volatile uint64_t x472 = UINT64_MAX;
	int32_t t90 = 152905;

    t90 = ((x469^(x470*x471))==x472);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x474 = -3016762;
	int8_t x475 = INT8_MIN;
	static volatile int16_t x476 = 115;

    t91 = ((x473^(x474*x475))==x476);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x478 = INT32_MIN;
	uint32_t x479 = UINT32_MAX;
	int16_t x480 = INT16_MIN;
	volatile int32_t t92 = -96970665;

    t92 = ((x477^(x478*x479))==x480);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x481 = INT32_MIN;
	int16_t x483 = INT16_MIN;
	static int64_t x484 = -26LL;
	volatile int32_t t93 = -512596;

    t93 = ((x481^(x482*x483))==x484);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x485 = 14814;
	uint32_t x487 = 4295175U;
	static uint32_t x488 = 102U;
	static int32_t t94 = 10;

    t94 = ((x485^(x486*x487))==x488);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x493 = INT16_MAX;
	volatile uint64_t x494 = UINT64_MAX;
	static volatile int16_t x496 = INT16_MIN;
	volatile int32_t t95 = -1968;

    t95 = ((x493^(x494*x495))==x496);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x497 = UINT64_MAX;
	int32_t x498 = -1;
	static uint16_t x499 = 1U;
	static int8_t x500 = -1;

    t96 = ((x497^(x498*x499))==x500);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x501 = INT64_MIN;
	static int64_t x503 = 17638773127LL;
	static uint64_t x504 = UINT64_MAX;

    t97 = ((x501^(x502*x503))==x504);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x506 = INT16_MAX;
	int16_t x507 = INT16_MIN;
	volatile int8_t x508 = INT8_MIN;
	volatile int32_t t98 = 540773052;

    t98 = ((x505^(x506*x507))==x508);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x509 = 4U;
	int8_t x510 = 1;
	volatile int64_t x512 = INT64_MIN;
	static int32_t t99 = 23;

    t99 = ((x509^(x510*x511))==x512);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x525 = 20U;
	int8_t x526 = 1;
	static volatile uint32_t x527 = UINT32_MAX;
	int8_t x528 = INT8_MIN;
	volatile int32_t t100 = -15352;

    t100 = ((x525^(x526*x527))==x528);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x529 = 84660U;
	uint64_t x530 = 2LLU;
	uint16_t x531 = UINT16_MAX;
	uint8_t x532 = 104U;
	static int32_t t101 = -635126994;

    t101 = ((x529^(x530*x531))==x532);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint16_t x533 = 2U;
	static volatile int8_t x534 = INT8_MAX;
	volatile uint32_t x536 = UINT32_MAX;

    t102 = ((x533^(x534*x535))==x536);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x537 = 82074;
	int16_t x538 = 1;
	static int32_t x539 = -1;

    t103 = ((x537^(x538*x539))==x540);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x541 = 5824463U;
	int8_t x542 = INT8_MIN;
	volatile int16_t x543 = -1565;
	static volatile uint64_t x544 = UINT64_MAX;
	int32_t t104 = -136484216;

    t104 = ((x541^(x542*x543))==x544);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x546 = INT16_MIN;
	int16_t x547 = -9;
	volatile uint8_t x548 = 2U;

    t105 = ((x545^(x546*x547))==x548);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t t106 = 4;

    t106 = ((x557^(x558*x559))==x560);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x561 = 209168LL;
	int64_t x562 = -1LL;
	int32_t x563 = INT32_MIN;
	int32_t x564 = -1;
	int32_t t107 = 24;

    t107 = ((x561^(x562*x563))==x564);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int32_t x566 = INT32_MAX;
	static int16_t x567 = -1;
	int8_t x568 = 0;
	int32_t t108 = -173257111;

    t108 = ((x565^(x566*x567))==x568);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint8_t x569 = UINT8_MAX;
	uint64_t x570 = 29851410LLU;
	int64_t x571 = INT64_MIN;
	static int8_t x572 = INT8_MIN;
	volatile int32_t t109 = -36595354;

    t109 = ((x569^(x570*x571))==x572);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x573 = -3869LL;
	volatile uint16_t x574 = 2749U;
	int64_t x575 = -1LL;
	int8_t x576 = INT8_MIN;
	int32_t t110 = -271637;

    t110 = ((x573^(x574*x575))==x576);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x577 = UINT8_MAX;
	static uint32_t x578 = UINT32_MAX;
	static uint32_t x579 = 1U;
	static int16_t x580 = -1;
	static volatile int32_t t111 = 5201000;

    t111 = ((x577^(x578*x579))==x580);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x585 = -25;
	int16_t x586 = INT16_MAX;
	volatile int8_t x587 = INT8_MIN;
	static volatile int32_t t112 = -39319;

    t112 = ((x585^(x586*x587))==x588);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x589 = -1LL;
	volatile uint64_t x590 = 1947011813553198LLU;
	static int32_t x591 = -1;
	int8_t x592 = -1;
	int32_t t113 = 94;

    t113 = ((x589^(x590*x591))==x592);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint16_t x593 = 84U;
	uint32_t x594 = 519131U;
	int16_t x595 = INT16_MIN;
	int32_t t114 = 400953;

    t114 = ((x593^(x594*x595))==x596);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x597 = INT16_MIN;
	static uint64_t x598 = UINT64_MAX;
	int32_t x599 = INT32_MAX;
	uint32_t x600 = 111631429U;
	static volatile int32_t t115 = 623;

    t115 = ((x597^(x598*x599))==x600);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x605 = 1U;
	static int32_t x606 = INT32_MIN;
	uint64_t x607 = 13246870LLU;
	uint32_t x608 = UINT32_MAX;

    t116 = ((x605^(x606*x607))==x608);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x610 = INT16_MIN;
	static int64_t x611 = -4571381LL;
	uint16_t x612 = 763U;
	volatile int32_t t117 = 445084;

    t117 = ((x609^(x610*x611))==x612);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x613 = 48541459U;
	uint64_t x614 = 14632007304014LLU;
	volatile int64_t x615 = INT64_MAX;

    t118 = ((x613^(x614*x615))==x616);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x617 = INT64_MAX;
	volatile uint8_t x618 = UINT8_MAX;
	volatile int8_t x620 = 21;
	int32_t t119 = -204652;

    t119 = ((x617^(x618*x619))==x620);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x625 = INT16_MIN;
	static uint32_t x626 = UINT32_MAX;
	uint16_t x627 = 18984U;
	volatile int8_t x628 = -1;

    t120 = ((x625^(x626*x627))==x628);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x629 = INT8_MIN;
	static int32_t x632 = -1;
	int32_t t121 = 1396696;

    t121 = ((x629^(x630*x631))==x632);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x638 = UINT64_MAX;
	uint64_t x639 = UINT64_MAX;
	int8_t x640 = -1;

    t122 = ((x637^(x638*x639))==x640);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x641 = -1;
	uint8_t x642 = 47U;
	static int8_t x643 = INT8_MIN;
	int16_t x644 = -1;
	volatile int32_t t123 = 337;

    t123 = ((x641^(x642*x643))==x644);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x645 = 72293LLU;
	int64_t x646 = -1LL;
	static volatile int8_t x647 = INT8_MAX;
	volatile int32_t t124 = 1425740;

    t124 = ((x645^(x646*x647))==x648);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x650 = -422640LL;
	static volatile int8_t x651 = INT8_MIN;
	int32_t x652 = INT32_MAX;
	int32_t t125 = -12566;

    t125 = ((x649^(x650*x651))==x652);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x657 = 1;
	int16_t x658 = INT16_MAX;
	int16_t x659 = INT16_MIN;
	int16_t x660 = -2452;

    t126 = ((x657^(x658*x659))==x660);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x661 = -1LL;
	static volatile int16_t x662 = INT16_MIN;
	int64_t x663 = -3LL;
	int32_t t127 = -27856;

    t127 = ((x661^(x662*x663))==x664);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x665 = -14;
	uint16_t x666 = 0U;
	static int8_t x667 = -1;
	volatile int32_t t128 = -76;

    t128 = ((x665^(x666*x667))==x668);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x669 = 12LLU;
	int32_t x671 = 484;
	volatile uint16_t x672 = 916U;
	static int32_t t129 = -350397090;

    t129 = ((x669^(x670*x671))==x672);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x674 = INT16_MIN;
	volatile int8_t x675 = INT8_MIN;
	int64_t x676 = INT64_MIN;
	volatile int32_t t130 = 1;

    t130 = ((x673^(x674*x675))==x676);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x693 = 104;
	volatile int8_t x695 = 0;
	int32_t t131 = 245380;

    t131 = ((x693^(x694*x695))==x696);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x698 = UINT64_MAX;
	int32_t x699 = INT32_MAX;
	volatile int32_t t132 = 194526410;

    t132 = ((x697^(x698*x699))==x700);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x701 = -917;
	uint32_t x702 = 57360587U;
	static uint16_t x704 = UINT16_MAX;
	volatile int32_t t133 = -1;

    t133 = ((x701^(x702*x703))==x704);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x705 = INT64_MAX;
	static int8_t x706 = -49;
	int32_t x708 = INT32_MAX;

    t134 = ((x705^(x706*x707))==x708);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x709 = INT64_MIN;
	int64_t x710 = 13858017LL;
	static int8_t x711 = INT8_MAX;
	volatile uint16_t x712 = UINT16_MAX;
	volatile int32_t t135 = -24792274;

    t135 = ((x709^(x710*x711))==x712);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x717 = -1;
	volatile int16_t x718 = -1;
	volatile int32_t x719 = 10;
	int64_t x720 = INT64_MIN;

    t136 = ((x717^(x718*x719))==x720);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x725 = 8556299032234LLU;
	volatile uint16_t x726 = UINT16_MAX;
	static volatile uint64_t x727 = UINT64_MAX;
	int16_t x728 = -1;
	int32_t t137 = -3216951;

    t137 = ((x725^(x726*x727))==x728);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x729 = UINT32_MAX;
	uint32_t x730 = 978068U;
	int16_t x731 = -1;
	volatile int16_t x732 = 3001;
	volatile int32_t t138 = -251119;

    t138 = ((x729^(x730*x731))==x732);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x733 = 1569843432367763LLU;
	volatile uint64_t x734 = UINT64_MAX;
	int8_t x736 = 1;
	int32_t t139 = 736;

    t139 = ((x733^(x734*x735))==x736);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x737 = INT64_MAX;
	uint64_t x739 = 7452782442797641944LLU;
	int32_t x740 = INT32_MAX;

    t140 = ((x737^(x738*x739))==x740);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x745 = -1;
	static int8_t x746 = -4;
	uint16_t x748 = 7450U;

    t141 = ((x745^(x746*x747))==x748);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x751 = INT8_MIN;
	volatile uint32_t x752 = 8164U;
	int32_t t142 = -129043707;

    t142 = ((x749^(x750*x751))==x752);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x761 = INT64_MIN;
	static uint64_t x762 = UINT64_MAX;
	uint32_t x763 = UINT32_MAX;
	uint64_t x764 = 124LLU;
	volatile int32_t t143 = -3;

    t143 = ((x761^(x762*x763))==x764);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint16_t x765 = UINT16_MAX;
	int8_t x766 = 20;
	int16_t x767 = -2552;
	static volatile uint32_t x768 = UINT32_MAX;

    t144 = ((x765^(x766*x767))==x768);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x769 = INT16_MIN;
	int16_t x770 = 9260;
	int32_t t145 = -52844;

    t145 = ((x769^(x770*x771))==x772);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x773 = 458U;
	int8_t x774 = INT8_MAX;
	int16_t x775 = -805;
	int8_t x776 = 0;
	int32_t t146 = -636779870;

    t146 = ((x773^(x774*x775))==x776);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x777 = INT16_MIN;
	uint8_t x778 = 28U;
	volatile int64_t x779 = 3096255882565LL;
	static int32_t t147 = -1942029;

    t147 = ((x777^(x778*x779))==x780);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x781 = 1;
	int64_t x782 = 104719LL;
	uint16_t x783 = 13U;
	static volatile int8_t x784 = -1;

    t148 = ((x781^(x782*x783))==x784);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x786 = -1;
	uint32_t x787 = 39128U;
	int8_t x788 = INT8_MIN;
	int32_t t149 = -1;

    t149 = ((x785^(x786*x787))==x788);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x793 = -1;
	int32_t x794 = 6610234;
	uint16_t x795 = 0U;
	int32_t x796 = -1;
	volatile int32_t t150 = -715412306;

    t150 = ((x793^(x794*x795))==x796);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x797 = -1;
	volatile uint32_t x798 = 208U;
	int16_t x799 = INT16_MAX;
	int32_t x800 = INT32_MIN;
	volatile int32_t t151 = 0;

    t151 = ((x797^(x798*x799))==x800);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x801 = 1392U;
	uint32_t x802 = 1132193U;
	int8_t x803 = 2;
	volatile int32_t t152 = -55865;

    t152 = ((x801^(x802*x803))==x804);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x805 = INT64_MIN;
	static int8_t x807 = -1;
	static int32_t x808 = INT32_MIN;
	volatile int32_t t153 = -2;

    t153 = ((x805^(x806*x807))==x808);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x809 = UINT64_MAX;
	int16_t x810 = INT16_MIN;
	uint64_t x812 = 15913LLU;
	int32_t t154 = 101642811;

    t154 = ((x809^(x810*x811))==x812);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x813 = -9;
	int32_t x814 = -1;
	uint32_t x815 = 417485371U;

    t155 = ((x813^(x814*x815))==x816);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x817 = 1513U;
	uint32_t x819 = UINT32_MAX;
	volatile int32_t t156 = 1;

    t156 = ((x817^(x818*x819))==x820);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x821 = INT32_MAX;
	volatile uint64_t x822 = 103522448364433255LLU;
	uint32_t x823 = 305U;
	static int16_t x824 = INT16_MAX;
	int32_t t157 = -422296;

    t157 = ((x821^(x822*x823))==x824);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint64_t x825 = 1282821369710705LLU;
	int32_t x826 = 16;
	static uint32_t x827 = 7461U;
	int32_t x828 = 251969;
	int32_t t158 = 463782423;

    t158 = ((x825^(x826*x827))==x828);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x829 = UINT16_MAX;
	volatile int64_t x830 = 57484854989639275LL;
	uint64_t x832 = 517730402357860052LLU;
	static volatile int32_t t159 = 163976;

    t159 = ((x829^(x830*x831))==x832);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x837 = INT32_MIN;
	static uint32_t x839 = 2076034U;
	int16_t x840 = INT16_MAX;
	int32_t t160 = 55038958;

    t160 = ((x837^(x838*x839))==x840);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x841 = INT32_MIN;
	uint64_t x842 = UINT64_MAX;
	int16_t x844 = -1;
	volatile int32_t t161 = -277082457;

    t161 = ((x841^(x842*x843))==x844);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x846 = INT64_MIN;
	uint8_t x847 = 1U;
	volatile uint64_t x848 = UINT64_MAX;

    t162 = ((x845^(x846*x847))==x848);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x849 = -50420269849722101LL;
	uint32_t x850 = 1002472932U;
	int32_t x851 = -1;

    t163 = ((x849^(x850*x851))==x852);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t t164 = -257;

    t164 = ((x853^(x854*x855))==x856);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x857 = 7592LLU;
	static uint16_t x858 = 46U;
	int64_t x859 = 11028LL;
	volatile uint32_t x860 = 29433U;
	volatile int32_t t165 = -7776;

    t165 = ((x857^(x858*x859))==x860);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x861 = INT8_MIN;
	volatile int16_t x862 = INT16_MAX;
	int32_t x864 = -16745;

    t166 = ((x861^(x862*x863))==x864);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x874 = -901;
	volatile uint64_t x875 = UINT64_MAX;
	volatile int32_t t167 = -456756;

    t167 = ((x873^(x874*x875))==x876);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x881 = UINT16_MAX;
	volatile int64_t x884 = 932066985LL;
	static int32_t t168 = -361;

    t168 = ((x881^(x882*x883))==x884);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint32_t x886 = UINT32_MAX;
	int16_t x888 = INT16_MIN;

    t169 = ((x885^(x886*x887))==x888);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x889 = 20218900721LLU;
	volatile int16_t x890 = -1;
	uint64_t x892 = UINT64_MAX;

    t170 = ((x889^(x890*x891))==x892);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x897 = -6LL;
	static uint16_t x898 = 18U;
	uint32_t x899 = UINT32_MAX;
	uint16_t x900 = UINT16_MAX;
	int32_t t171 = 1;

    t171 = ((x897^(x898*x899))==x900);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x901 = 10LLU;
	static int32_t x902 = 4;
	static int32_t t172 = -4;

    t172 = ((x901^(x902*x903))==x904);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x905 = 160LLU;
	uint32_t x906 = UINT32_MAX;
	static uint16_t x907 = 189U;
	int16_t x908 = INT16_MAX;
	static int32_t t173 = -763532;

    t173 = ((x905^(x906*x907))==x908);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x909 = UINT16_MAX;
	int16_t x911 = -2;
	volatile int16_t x912 = 0;
	int32_t t174 = -11;

    t174 = ((x909^(x910*x911))==x912);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x914 = -1LL;
	static volatile int16_t x915 = INT16_MAX;

    t175 = ((x913^(x914*x915))==x916);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int32_t x917 = -229484261;
	uint16_t x918 = 0U;
	static uint64_t x919 = UINT64_MAX;

    t176 = ((x917^(x918*x919))==x920);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x925 = INT8_MIN;
	volatile int16_t x926 = -1;
	uint32_t x927 = 663387768U;
	uint32_t x928 = UINT32_MAX;
	int32_t t177 = -1107;

    t177 = ((x925^(x926*x927))==x928);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile uint16_t x933 = UINT16_MAX;
	volatile int16_t x936 = INT16_MAX;
	volatile int32_t t178 = 648017831;

    t178 = ((x933^(x934*x935))==x936);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x937 = 0;
	static int16_t x939 = INT16_MIN;
	int8_t x940 = -1;
	static int32_t t179 = -11852679;

    t179 = ((x937^(x938*x939))==x940);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x942 = 1;
	uint64_t x943 = UINT64_MAX;
	uint16_t x944 = UINT16_MAX;
	volatile int32_t t180 = 0;

    t180 = ((x941^(x942*x943))==x944);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x945 = 192U;
	uint32_t x946 = 115780U;
	static uint64_t x947 = 2271009569358807097LLU;
	int8_t x948 = INT8_MAX;
	volatile int32_t t181 = -8277884;

    t181 = ((x945^(x946*x947))==x948);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile uint32_t x949 = 860272U;
	uint8_t x950 = UINT8_MAX;
	uint32_t x951 = 502089U;
	int32_t t182 = 98044430;

    t182 = ((x949^(x950*x951))==x952);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x955 = 2300U;
	volatile int8_t x956 = INT8_MIN;
	volatile int32_t t183 = -30360647;

    t183 = ((x953^(x954*x955))==x956);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x957 = INT8_MAX;
	int16_t x958 = INT16_MAX;
	int16_t x959 = INT16_MAX;
	volatile int32_t x960 = -1;
	volatile int32_t t184 = 140119087;

    t184 = ((x957^(x958*x959))==x960);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x961 = 7474534133779250LLU;
	int16_t x962 = INT16_MIN;
	int8_t x963 = INT8_MAX;
	int8_t x964 = INT8_MIN;

    t185 = ((x961^(x962*x963))==x964);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint8_t x965 = UINT8_MAX;
	int16_t x966 = 2422;
	volatile uint16_t x967 = 414U;
	int32_t x968 = INT32_MIN;
	volatile int32_t t186 = 59093;

    t186 = ((x965^(x966*x967))==x968);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x969 = 10U;
	int64_t x971 = -1LL;
	int32_t x972 = INT32_MIN;
	int32_t t187 = 12;

    t187 = ((x969^(x970*x971))==x972);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint64_t x977 = UINT64_MAX;
	static int64_t x978 = 0LL;
	int64_t x979 = INT64_MAX;
	int32_t x980 = -2;
	volatile int32_t t188 = 358092;

    t188 = ((x977^(x978*x979))==x980);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x993 = 28555LLU;
	volatile int32_t x994 = -260;
	static uint64_t x995 = 107552755LLU;
	int64_t x996 = INT64_MIN;
	int32_t t189 = -457377547;

    t189 = ((x993^(x994*x995))==x996);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x998 = 3LLU;
	static int32_t x999 = -1;
	static int8_t x1000 = -1;

    t190 = ((x997^(x998*x999))==x1000);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x1001 = 752022513LL;
	volatile uint8_t x1002 = 50U;
	uint8_t x1003 = 1U;
	static int32_t x1004 = INT32_MIN;
	int32_t t191 = -7296864;

    t191 = ((x1001^(x1002*x1003))==x1004);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x1005 = 1849;
	int16_t x1006 = -340;
	uint16_t x1007 = 758U;
	int32_t t192 = 30474031;

    t192 = ((x1005^(x1006*x1007))==x1008);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x1009 = -7;
	volatile uint32_t x1010 = 17814877U;
	uint16_t x1011 = 56U;
	int64_t x1012 = -27LL;
	static int32_t t193 = -118;

    t193 = ((x1009^(x1010*x1011))==x1012);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x1013 = 9162U;
	int16_t x1014 = -1;
	int32_t x1015 = -10975;
	int32_t t194 = 45;

    t194 = ((x1013^(x1014*x1015))==x1016);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x1021 = -1;
	int8_t x1022 = -1;
	static int8_t x1023 = INT8_MIN;
	volatile int32_t t195 = -10;

    t195 = ((x1021^(x1022*x1023))==x1024);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x1025 = INT16_MIN;
	uint64_t x1026 = 24LLU;
	static int32_t x1028 = INT32_MAX;
	volatile int32_t t196 = -254747;

    t196 = ((x1025^(x1026*x1027))==x1028);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1029 = 251869268LL;
	volatile uint32_t x1030 = UINT32_MAX;
	int16_t x1031 = INT16_MIN;
	int32_t t197 = 11;

    t197 = ((x1029^(x1030*x1031))==x1032);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x1033 = UINT32_MAX;
	int32_t x1034 = INT32_MIN;
	uint32_t x1035 = UINT32_MAX;
	int32_t t198 = 28;

    t198 = ((x1033^(x1034*x1035))==x1036);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1037 = -184114574519LL;
	static uint8_t x1038 = 4U;
	static volatile uint64_t x1040 = 3048998086669233LLU;

    t199 = ((x1037^(x1038*x1039))==x1040);

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


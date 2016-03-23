
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

uint32_t x1 = UINT32_MAX;
volatile uint64_t x3 = UINT64_MAX;
volatile int8_t x4 = INT8_MIN;
static uint32_t x6 = 0U;
static volatile int32_t t2 = 91;
uint8_t x25 = 1U;
static volatile int8_t x29 = -1;
uint8_t x32 = UINT8_MAX;
uint8_t x38 = 1U;
volatile uint64_t x57 = UINT64_MAX;
uint32_t x60 = UINT32_MAX;
int64_t x76 = INT64_MAX;
uint64_t t12 = 219182122220355920LLU;
int8_t x88 = 13;
static int32_t t13 = 1005079;
uint64_t x96 = 26141254LLU;
volatile uint64_t t14 = 222687LLU;
static volatile int16_t x99 = INT16_MAX;
volatile int32_t x100 = INT32_MAX;
int32_t x117 = 32924351;
uint64_t x127 = 51LLU;
static uint32_t x128 = 23U;
volatile int32_t x129 = 1551898;
int16_t x130 = INT16_MAX;
volatile int32_t x132 = 1254421;
uint16_t x150 = UINT16_MAX;
volatile uint8_t x153 = UINT8_MAX;
int32_t x155 = 2;
volatile int32_t t27 = 113260;
uint64_t x160 = 2045584713711568635LLU;
int64_t t29 = 101385133283053747LL;
int32_t x181 = INT32_MIN;
static int8_t x183 = -1;
uint64_t t32 = 122LLU;
volatile uint64_t x185 = 314730943LLU;
volatile int32_t x187 = 1779;
static volatile uint64_t t33 = 5LLU;
int64_t x193 = -8386580977LL;
static uint8_t x196 = 14U;
static int64_t t34 = 2223383776074961LL;
static uint64_t t35 = 162LLU;
int16_t x212 = -1;
volatile int64_t t37 = -15120117067637LL;
uint8_t x227 = UINT8_MAX;
volatile int64_t x230 = INT64_MAX;
int16_t x232 = INT16_MIN;
uint16_t x236 = 60U;
volatile int32_t x237 = -56204;
int8_t x250 = 0;
static int32_t x253 = 13286;
static int16_t x269 = -5;
uint64_t x273 = 322673475340712LLU;
volatile uint32_t x278 = 6U;
int32_t x280 = -1;
volatile uint32_t t49 = 490219U;
int8_t x281 = 16;
uint32_t x289 = 6824U;
static uint32_t t52 = 2573289U;
int16_t x294 = -1;
volatile uint32_t x296 = 6216U;
int16_t x302 = INT16_MIN;
volatile uint32_t x318 = 97454U;
volatile int16_t x323 = INT16_MIN;
volatile uint64_t t59 = 18282431802LLU;
volatile uint64_t t60 = 2891805403LLU;
static volatile int64_t t61 = -6052398024LL;
uint16_t x342 = 6U;
int32_t t62 = -6;
uint32_t x353 = 372037U;
int32_t x356 = INT32_MAX;
int64_t x364 = -2LL;
volatile int64_t x368 = -236416LL;
int64_t t66 = -2044LL;
uint8_t x372 = UINT8_MAX;
uint16_t x384 = UINT16_MAX;
uint64_t x386 = UINT64_MAX;
volatile uint64_t t71 = 13058657LLU;
int64_t x391 = 26482462828LL;
uint32_t x392 = UINT32_MAX;
int32_t x394 = 85;
static volatile int16_t x401 = INT16_MIN;
volatile uint8_t x403 = UINT8_MAX;
int16_t x404 = -1;
uint32_t x422 = 14U;
int8_t x435 = 1;
int64_t x438 = -2159789890977630LL;
int64_t t80 = -678685483LL;
int32_t x450 = INT32_MIN;
volatile uint64_t x451 = UINT64_MAX;
int16_t x453 = INT16_MIN;
int64_t t86 = 140309196184638LL;
uint16_t x475 = 831U;
int32_t x485 = INT32_MAX;
int8_t x486 = INT8_MIN;
static int8_t x487 = 31;
uint16_t x490 = 10U;
int8_t x492 = INT8_MIN;
int32_t t90 = 27;
uint64_t x503 = UINT64_MAX;
volatile int16_t x510 = -5378;
volatile int64_t t94 = -635753352770LL;
int16_t x513 = INT16_MAX;
uint32_t x529 = 167545974U;
int64_t x531 = -5210887910408737LL;
int64_t t97 = -53520962346LL;
uint8_t x534 = 0U;
static int16_t x544 = -288;
static int16_t x545 = INT16_MIN;
uint16_t x546 = UINT16_MAX;
int16_t x547 = INT16_MIN;
static int64_t x551 = 1619018133590002LL;
int16_t x553 = 15993;
volatile int8_t x563 = INT8_MIN;
volatile int32_t t104 = 526082519;
static int32_t x571 = INT32_MAX;
uint32_t x577 = 5U;
uint16_t x579 = 389U;
volatile uint32_t t107 = 554042U;
static int32_t x610 = -1;
uint32_t t112 = 457U;
uint16_t x622 = 35U;
int8_t x624 = -1;
int8_t x626 = INT8_MIN;
int8_t x629 = 32;
static volatile int32_t t115 = 1085;
int64_t t117 = 1334608869313160894LL;
volatile uint16_t x646 = 93U;
int64_t x658 = INT64_MIN;
int32_t x659 = INT32_MAX;
volatile int16_t x674 = INT16_MIN;
static volatile int16_t x678 = 0;
uint32_t t122 = 0U;
int16_t x688 = INT16_MIN;
volatile uint8_t x689 = 0U;
uint8_t x691 = 6U;
static volatile uint32_t x692 = UINT32_MAX;
uint64_t x701 = UINT64_MAX;
int16_t x703 = -1;
int8_t x707 = INT8_MAX;
int32_t x708 = INT32_MAX;
static volatile uint32_t t127 = 27261770U;
uint8_t x713 = UINT8_MAX;
volatile uint64_t t129 = 113583478278071981LLU;
static volatile int64_t t133 = 448LL;
volatile uint32_t x739 = 1163074U;
volatile int64_t t134 = -2722669517558037LL;
uint64_t t135 = 11230112LLU;
volatile int8_t x760 = INT8_MIN;
uint64_t x779 = 327972636801LLU;
int8_t x788 = INT8_MIN;
static int32_t t141 = -17372368;
volatile uint64_t t142 = 347035829208LLU;
int64_t x798 = INT64_MAX;
int64_t t143 = -227934LL;
int8_t x803 = 15;
int16_t x808 = INT16_MAX;
static uint32_t t145 = 1022291U;
int64_t x812 = 2338243LL;
static int32_t x815 = 1;
int64_t t148 = 6213019237149010LL;
static int8_t x832 = -1;
int16_t x851 = INT16_MIN;
uint64_t x860 = 1283626LLU;
int32_t x862 = -97844;
int32_t x865 = INT32_MAX;
int64_t x868 = INT64_MIN;
volatile uint16_t x878 = UINT16_MAX;
static volatile int64_t x882 = -1LL;
int16_t x915 = -1;
static int32_t x916 = 19;
int64_t x920 = INT64_MIN;
uint64_t x930 = 33254LLU;
volatile uint64_t t169 = 432518LLU;
volatile uint64_t x933 = 460856184390LLU;
static volatile uint32_t x938 = 139U;
uint64_t t171 = 292608043LLU;
uint8_t x949 = 1U;
int64_t x950 = 1203737467LL;
uint64_t x952 = 62297LLU;
uint8_t x957 = UINT8_MAX;
volatile int64_t x959 = -1LL;
int64_t x966 = -1LL;
static int8_t x970 = 1;
int16_t x971 = INT16_MIN;
static uint64_t x972 = UINT64_MAX;
volatile int16_t x977 = INT16_MIN;
static uint16_t x980 = 51U;
volatile uint32_t t178 = 508952773U;
int32_t x985 = -1;
uint32_t x1004 = 60891365U;
static volatile int64_t t183 = 906032565434LL;
uint64_t x1007 = 407803038047LLU;
volatile uint64_t x1008 = 298LLU;
static uint64_t t184 = 730878601589602LLU;
int8_t x1017 = -1;
int32_t x1020 = -1;
int64_t x1030 = -1LL;
volatile int8_t x1031 = INT8_MAX;
int64_t t187 = -7188LL;
static int8_t x1034 = -53;
int8_t x1040 = -1;
static int64_t x1044 = INT64_MAX;
volatile int64_t x1047 = INT64_MIN;
static volatile int64_t t191 = 169396227LL;
int64_t x1051 = -1LL;
uint32_t x1060 = UINT32_MAX;
static volatile uint32_t x1065 = 5U;
volatile int16_t x1070 = -1;
uint32_t x1073 = 633182U;
uint16_t x1079 = 1U;
static int16_t x1080 = INT16_MIN;
uint64_t t199 = 4502097494LLU;


void f0(void) {
    	int16_t x2 = INT16_MAX;
	uint64_t t0 = 30620748543457793LLU;

    t0 = ((x1+(x2+x3))/x4);

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x5 = 208LL;
	int32_t x7 = -1;
	int32_t x8 = INT32_MAX;
	volatile int64_t t1 = 8445638887878906LL;

    t1 = ((x5+(x6+x7))/x8);

    if (t1 != 2LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 116U;
	int32_t x10 = INT32_MAX;
	volatile int32_t x11 = INT32_MIN;
	uint16_t x12 = 19659U;

    t2 = ((x9+(x10+x11))/x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x21 = UINT16_MAX;
	int16_t x22 = INT16_MAX;
	int16_t x23 = INT16_MAX;
	int32_t x24 = 7;
	int32_t t3 = -1;

    t3 = ((x21+(x22+x23))/x24);

    if (t3 != 18724) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x26 = -9387;
	int8_t x27 = -1;
	int32_t x28 = -1;
	static int32_t t4 = -86535482;

    t4 = ((x25+(x26+x27))/x28);

    if (t4 != 9387) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x30 = 8;
	volatile int8_t x31 = 1;
	int32_t t5 = 61;

    t5 = ((x29+(x30+x31))/x32);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x37 = -118630;
	int8_t x39 = INT8_MIN;
	int8_t x40 = -1;
	static volatile int32_t t6 = 1535671;

    t6 = ((x37+(x38+x39))/x40);

    if (t6 != 118757) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x45 = UINT16_MAX;
	volatile uint64_t x46 = 489021LLU;
	int8_t x47 = INT8_MIN;
	volatile int64_t x48 = INT64_MIN;
	volatile uint64_t t7 = 10210938175LLU;

    t7 = ((x45+(x46+x47))/x48);

    if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x49 = INT64_MIN;
	uint16_t x50 = UINT16_MAX;
	int8_t x51 = INT8_MIN;
	int8_t x52 = INT8_MIN;
	static int64_t t8 = 0LL;

    t8 = ((x49+(x50+x51))/x52);

    if (t8 != 72057594037927425LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x58 = UINT64_MAX;
	volatile int64_t x59 = -1LL;
	static volatile uint64_t t9 = 13205005870562551LLU;

    t9 = ((x57+(x58+x59))/x60);

    if (t9 != 4294967296LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x61 = 96U;
	uint16_t x62 = 46U;
	uint16_t x63 = 3U;
	int16_t x64 = -4242;
	int32_t t10 = 10;

    t10 = ((x61+(x62+x63))/x64);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x65 = -270;
	uint64_t x66 = 3365698217996LLU;
	int8_t x67 = 0;
	volatile int64_t x68 = -1LL;
	uint64_t t11 = 805590262461483LLU;

    t11 = ((x65+(x66+x67))/x68);

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x73 = INT16_MIN;
	uint64_t x74 = 1868LLU;
	volatile uint8_t x75 = 13U;

    t12 = ((x73+(x74+x75))/x76);

    if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x85 = 932928;
	static int16_t x86 = INT16_MIN;
	volatile uint8_t x87 = 42U;

    t13 = ((x85+(x86+x87))/x88);

    if (t13 != 69246) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x93 = 205U;
	int16_t x94 = 892;
	uint32_t x95 = UINT32_MAX;

    t14 = ((x93+(x94+x95))/x96);

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x97 = INT64_MIN;
	volatile int16_t x98 = 37;
	int64_t t15 = -1925614255345LL;

    t15 = ((x97+(x98+x99))/x100);

    if (t15 != -4294967297LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x101 = -1;
	volatile int8_t x102 = INT8_MIN;
	static int32_t x103 = 0;
	int8_t x104 = INT8_MIN;
	int32_t t16 = -1029;

    t16 = ((x101+(x102+x103))/x104);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x105 = -1;
	uint32_t x106 = 238176U;
	volatile int16_t x107 = INT16_MIN;
	int16_t x108 = INT16_MIN;
	uint32_t t17 = 0U;

    t17 = ((x105+(x106+x107))/x108);

    if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x109 = 544723244715268022LLU;
	static uint8_t x110 = 3U;
	uint32_t x111 = 65415469U;
	int32_t x112 = 879529035;
	static volatile uint64_t t18 = 84700LLU;

    t18 = ((x109+(x110+x111))/x112);

    if (t18 != 619335147LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint32_t x113 = 1777973U;
	volatile uint32_t x114 = 175487313U;
	static uint32_t x115 = 1U;
	int64_t x116 = -1LL;
	int64_t t19 = 430119504411588037LL;

    t19 = ((x113+(x114+x115))/x116);

    if (t19 != -177265287LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x118 = INT8_MIN;
	uint8_t x119 = 47U;
	static int32_t x120 = INT32_MAX;
	int32_t t20 = 29743928;

    t20 = ((x117+(x118+x119))/x120);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x121 = INT16_MAX;
	int32_t x122 = 9;
	int8_t x123 = -1;
	uint32_t x124 = 41905490U;
	volatile uint32_t t21 = 10647U;

    t21 = ((x121+(x122+x123))/x124);

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int8_t x125 = -3;
	volatile uint16_t x126 = UINT16_MAX;
	uint64_t t22 = 7070165445675LLU;

    t22 = ((x125+(x126+x127))/x128);

    if (t22 != 2851LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x131 = INT64_MIN;
	int64_t t23 = -265654506218348LL;

    t23 = ((x129+(x130+x131))/x132);

    if (t23 != -7352692626202LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x133 = 84128020935011LL;
	static int32_t x134 = -1;
	int8_t x135 = -1;
	uint16_t x136 = UINT16_MAX;
	volatile int64_t t24 = 1LL;

    t24 = ((x133+(x134+x135))/x136);

    if (t24 != 1283711313LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x141 = 87912817335LLU;
	static int32_t x142 = -76456250;
	int16_t x143 = INT16_MIN;
	static int16_t x144 = -459;
	volatile uint64_t t25 = 1225872285LLU;

    t25 = ((x141+(x142+x143))/x144);

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x149 = 0;
	int8_t x151 = INT8_MIN;
	static volatile uint64_t x152 = 549740903678LLU;
	volatile uint64_t t26 = 7LLU;

    t26 = ((x149+(x150+x151))/x152);

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x154 = -58;
	int8_t x156 = INT8_MIN;

    t27 = ((x153+(x154+x155))/x156);

    if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x157 = 79U;
	int64_t x158 = INT64_MIN;
	static uint16_t x159 = 51U;
	volatile uint64_t t28 = 130291LLU;

    t28 = ((x157+(x158+x159))/x160);

    if (t28 != 4LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x161 = -1;
	int64_t x162 = INT64_MAX;
	int32_t x163 = INT32_MIN;
	int8_t x164 = INT8_MIN;

    t29 = ((x161+(x162+x163))/x164);

    if (t29 != -72057594021150719LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x165 = INT16_MIN;
	uint64_t x166 = UINT64_MAX;
	volatile int8_t x167 = -4;
	static int8_t x168 = -43;
	uint64_t t30 = 1023834642009LLU;

    t30 = ((x165+(x166+x167))/x168);

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x169 = -39078405363750LL;
	static int32_t x170 = INT32_MIN;
	uint64_t x171 = 1166LLU;
	uint16_t x172 = 9U;
	uint64_t t31 = 7562LLU;

    t31 = ((x169+(x170+x171))/x172);

    if (t31 != 2049633888128522820LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x182 = UINT64_MAX;
	uint8_t x184 = 8U;

    t32 = ((x181+(x182+x183))/x184);

    if (t32 != 2305843008945258495LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x186 = 44;
	int64_t x188 = -26179602LL;

    t33 = ((x185+(x186+x187))/x188);

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x194 = -7225244252813339LL;
	int8_t x195 = INT8_MIN;

    t34 = ((x193+(x194+x195))/x196);

    if (t34 != -516089474242460LL) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x197 = INT64_MIN;
	static volatile int16_t x198 = INT16_MIN;
	uint64_t x199 = UINT64_MAX;
	static int8_t x200 = -2;

    t35 = ((x197+(x198+x199))/x200);

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint16_t x201 = 1U;
	volatile int32_t x202 = -47058;
	int64_t x203 = -1LL;
	uint8_t x204 = 43U;
	volatile int64_t t36 = -214098LL;

    t36 = ((x201+(x202+x203))/x204);

    if (t36 != -1094LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x209 = -134LL;
	static int64_t x210 = INT64_MIN;
	static uint16_t x211 = UINT16_MAX;

    t37 = ((x209+(x210+x211))/x212);

    if (t37 != 9223372036854710407LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x217 = UINT32_MAX;
	volatile int16_t x218 = INT16_MAX;
	int64_t x219 = 2651220005970717897LL;
	volatile int16_t x220 = INT16_MIN;
	volatile int64_t t38 = 83063526837712242LL;

    t38 = ((x217+(x218+x219))/x220);

    if (t38 != -80908813789847LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x225 = 12785543836826540LL;
	int8_t x226 = -1;
	int64_t x228 = -1LL;
	int64_t t39 = 25784772124916151LL;

    t39 = ((x225+(x226+x227))/x228);

    if (t39 != -12785543836826794LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x229 = 60U;
	static uint64_t x231 = 1512LLU;
	volatile uint64_t t40 = 73059LLU;

    t40 = ((x229+(x230+x231))/x232);

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x233 = -6;
	uint64_t x234 = UINT64_MAX;
	uint16_t x235 = 208U;
	static uint64_t t41 = 2473758226LLU;

    t41 = ((x233+(x234+x235))/x236);

    if (t41 != 3LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x238 = 104U;
	uint64_t x239 = UINT64_MAX;
	static volatile uint64_t x240 = UINT64_MAX;
	uint64_t t42 = 3234LLU;

    t42 = ((x237+(x238+x239))/x240);

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x241 = -23;
	int64_t x242 = 501889LL;
	uint32_t x243 = UINT32_MAX;
	uint32_t x244 = 4361U;
	volatile int64_t t43 = 1295740425768LL;

    t43 = ((x241+(x242+x243))/x244);

    if (t43 != 984973LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x249 = INT8_MIN;
	int8_t x251 = -3;
	int32_t x252 = INT32_MIN;
	static int32_t t44 = 0;

    t44 = ((x249+(x250+x251))/x252);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x254 = INT64_MIN;
	int16_t x255 = 0;
	volatile int16_t x256 = 3054;
	static int64_t t45 = -211749LL;

    t45 = ((x253+(x254+x255))/x256);

    if (t45 != -3020095624379424LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile uint64_t x265 = 11LLU;
	uint16_t x266 = UINT16_MAX;
	int64_t x267 = -1LL;
	int64_t x268 = INT64_MIN;
	static volatile uint64_t t46 = 8515984LLU;

    t46 = ((x265+(x266+x267))/x268);

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x270 = -4;
	int64_t x271 = 30LL;
	volatile int64_t x272 = 12959LL;
	volatile int64_t t47 = -451LL;

    t47 = ((x269+(x270+x271))/x272);

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x274 = 14LLU;
	volatile uint64_t x275 = 31946182376349574LLU;
	uint32_t x276 = 492481746U;
	volatile uint64_t t48 = 567366826838472050LLU;

    t48 = ((x273+(x274+x275))/x276);

    if (t48 != 65522948LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile uint8_t x277 = 1U;
	uint8_t x279 = UINT8_MAX;

    t49 = ((x277+(x278+x279))/x280);

    if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x282 = UINT8_MAX;
	uint16_t x283 = 40U;
	int8_t x284 = -5;
	int32_t t50 = 296;

    t50 = ((x281+(x282+x283))/x284);

    if (t50 != -62) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x285 = 194146;
	uint16_t x286 = 7395U;
	int16_t x287 = INT16_MIN;
	uint16_t x288 = UINT16_MAX;
	int32_t t51 = -766604;

    t51 = ((x285+(x286+x287))/x288);

    if (t51 != 2) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x290 = -1;
	int16_t x291 = -808;
	static int8_t x292 = 60;

    t52 = ((x289+(x290+x291))/x292);

    if (t52 != 100U) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x293 = UINT8_MAX;
	uint32_t x295 = 1002946U;
	volatile uint32_t t53 = 5021U;

    t53 = ((x293+(x294+x295))/x296);

    if (t53 != 161U) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x297 = 150;
	uint8_t x298 = 91U;
	uint16_t x299 = 5957U;
	int32_t x300 = INT32_MAX;
	int32_t t54 = 811;

    t54 = ((x297+(x298+x299))/x300);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int8_t x301 = 14;
	int8_t x303 = INT8_MIN;
	static int8_t x304 = -1;
	volatile int32_t t55 = -372269;

    t55 = ((x301+(x302+x303))/x304);

    if (t55 != 32882) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x309 = INT8_MIN;
	int16_t x310 = -1013;
	uint8_t x311 = 1U;
	int64_t x312 = -173680673849LL;
	volatile int64_t t56 = -38823801LL;

    t56 = ((x309+(x310+x311))/x312);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x313 = 11221U;
	int8_t x314 = INT8_MIN;
	volatile int16_t x315 = -12388;
	int8_t x316 = 13;
	int32_t t57 = -131418021;

    t57 = ((x313+(x314+x315))/x316);

    if (t57 != -99) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x317 = INT8_MAX;
	static uint32_t x319 = UINT32_MAX;
	int8_t x320 = INT8_MIN;
	uint32_t t58 = 3614613U;

    t58 = ((x317+(x318+x319))/x320);

    if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x321 = 761308U;
	uint64_t x322 = 26LLU;
	int32_t x324 = INT32_MIN;

    t59 = ((x321+(x322+x323))/x324);

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x333 = UINT64_MAX;
	int64_t x334 = INT64_MIN;
	uint64_t x335 = 10128996365863416LLU;
	int32_t x336 = -1;

    t60 = ((x333+(x334+x335))/x336);

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x337 = 7;
	int8_t x338 = -1;
	int64_t x339 = -1LL;
	int8_t x340 = INT8_MAX;

    t61 = ((x337+(x338+x339))/x340);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x341 = INT16_MAX;
	int8_t x343 = -62;
	uint16_t x344 = 5U;

    t62 = ((x341+(x342+x343))/x344);

    if (t62 != 6542) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x354 = 346832240LLU;
	volatile int8_t x355 = INT8_MIN;
	volatile uint64_t t63 = 600LLU;

    t63 = ((x353+(x354+x355))/x356);

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint16_t x357 = UINT16_MAX;
	static int32_t x358 = INT32_MAX;
	uint64_t x359 = 1279957824880743635LLU;
	int64_t x360 = -1LL;
	uint64_t t64 = 1698832086028LLU;

    t64 = ((x357+(x358+x359))/x360);

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint16_t x361 = 27180U;
	int32_t x362 = -10237156;
	int64_t x363 = 423750LL;
	volatile int64_t t65 = -22250191393LL;

    t65 = ((x361+(x362+x363))/x364);

    if (t65 != 4893113LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x365 = 248;
	int8_t x366 = INT8_MAX;
	uint32_t x367 = 0U;

    t66 = ((x365+(x366+x367))/x368);

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x369 = -24;
	static int16_t x370 = INT16_MIN;
	int64_t x371 = -1LL;
	volatile int64_t t67 = 13960600LL;

    t67 = ((x369+(x370+x371))/x372);

    if (t67 != -128LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x373 = INT8_MIN;
	uint16_t x374 = UINT16_MAX;
	int32_t x375 = INT32_MIN;
	int64_t x376 = 6785314086140LL;
	volatile int64_t t68 = 0LL;

    t68 = ((x373+(x374+x375))/x376);

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x377 = INT32_MIN;
	uint64_t x378 = 18245842364LLU;
	int64_t x379 = 1002522481622LL;
	uint16_t x380 = UINT16_MAX;
	volatile uint64_t t69 = 15769937LLU;

    t69 = ((x377+(x378+x379))/x380);

    if (t69 != 15543157LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x381 = INT64_MIN;
	int8_t x382 = 8;
	uint64_t x383 = 3236676692LLU;
	uint64_t t70 = 2378769312250545LLU;

    t70 = ((x381+(x382+x383))/x384);

    if (t70 != 140739635921133LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x385 = -317029;
	volatile int8_t x387 = INT8_MIN;
	int64_t x388 = INT64_MIN;

    t71 = ((x385+(x386+x387))/x388);

    if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x389 = -1;
	volatile int64_t x390 = 26022183880LL;
	volatile int64_t t72 = -360272237278LL;

    t72 = ((x389+(x390+x391))/x392);

    if (t72 != 12LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x393 = -1;
	static uint32_t x395 = UINT32_MAX;
	int16_t x396 = INT16_MAX;
	volatile uint32_t t73 = 10U;

    t73 = ((x393+(x394+x395))/x396);

    if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int16_t x402 = INT16_MIN;
	static volatile int32_t t74 = -186648764;

    t74 = ((x401+(x402+x403))/x404);

    if (t74 != 65281) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x413 = -1;
	volatile int64_t x414 = -1LL;
	static volatile uint8_t x415 = 3U;
	uint8_t x416 = UINT8_MAX;
	volatile int64_t t75 = 480LL;

    t75 = ((x413+(x414+x415))/x416);

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x421 = -1;
	static volatile uint64_t x423 = 388978240631572947LLU;
	volatile int32_t x424 = INT32_MIN;
	uint64_t t76 = 22LLU;

    t76 = ((x421+(x422+x423))/x424);

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x425 = INT32_MIN;
	uint8_t x426 = 1U;
	int8_t x427 = INT8_MAX;
	int32_t x428 = 19017;
	volatile int32_t t77 = 948;

    t77 = ((x425+(x426+x427))/x428);

    if (t77 != -112924) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x429 = UINT8_MAX;
	static uint32_t x430 = UINT32_MAX;
	volatile int8_t x431 = INT8_MAX;
	static uint64_t x432 = UINT64_MAX;
	static volatile uint64_t t78 = 997048LLU;

    t78 = ((x429+(x430+x431))/x432);

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile uint16_t x433 = 3098U;
	static int8_t x434 = -15;
	int8_t x436 = -4;
	static int32_t t79 = 3;

    t79 = ((x433+(x434+x435))/x436);

    if (t79 != -771) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x437 = 165LL;
	int8_t x439 = INT8_MIN;
	int8_t x440 = INT8_MIN;

    t80 = ((x437+(x438+x439))/x440);

    if (t80 != 16873358523262LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint64_t x445 = UINT64_MAX;
	static volatile int32_t x446 = INT32_MIN;
	int32_t x447 = 27964;
	volatile int64_t x448 = 66410055863LL;
	uint64_t t81 = 121LLU;

    t81 = ((x445+(x446+x447))/x448);

    if (t81 != 277770344LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x449 = 12020U;
	int32_t x452 = -587;
	volatile uint64_t t82 = 3LLU;

    t82 = ((x449+(x450+x451))/x452);

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x454 = INT16_MIN;
	int16_t x455 = -1;
	int16_t x456 = INT16_MIN;
	int32_t t83 = 5844;

    t83 = ((x453+(x454+x455))/x456);

    if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x457 = -1;
	int16_t x458 = -1;
	int32_t x459 = -63026;
	int64_t x460 = INT64_MAX;
	volatile int64_t t84 = 13LL;

    t84 = ((x457+(x458+x459))/x460);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x465 = INT8_MIN;
	volatile uint64_t x466 = 1LLU;
	uint64_t x467 = 1036LLU;
	static int8_t x468 = INT8_MAX;
	volatile uint64_t t85 = 128857237312LLU;

    t85 = ((x465+(x466+x467))/x468);

    if (t85 != 7LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint8_t x469 = UINT8_MAX;
	volatile int16_t x470 = INT16_MIN;
	static int64_t x471 = -23LL;
	int64_t x472 = -1LL;

    t86 = ((x469+(x470+x471))/x472);

    if (t86 != 32536LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x473 = INT16_MAX;
	int8_t x474 = INT8_MAX;
	static int32_t x476 = INT32_MAX;
	static int32_t t87 = 308;

    t87 = ((x473+(x474+x475))/x476);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x477 = -1;
	int8_t x478 = INT8_MAX;
	int8_t x479 = 0;
	static int16_t x480 = -5472;
	static int32_t t88 = -361986;

    t88 = ((x477+(x478+x479))/x480);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x488 = UINT64_MAX;
	volatile uint64_t t89 = 436826819727948LLU;

    t89 = ((x485+(x486+x487))/x488);

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x489 = -1477;
	int32_t x491 = -1558;

    t90 = ((x489+(x490+x491))/x492);

    if (t90 != 23) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x497 = -1;
	int32_t x498 = INT32_MAX;
	static int64_t x499 = -335424LL;
	static int32_t x500 = -1;
	volatile int64_t t91 = -2LL;

    t91 = ((x497+(x498+x499))/x500);

    if (t91 != -2147148222LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x501 = 1130864281U;
	int32_t x502 = -304;
	int8_t x504 = INT8_MAX;
	static uint64_t t92 = 8338LLU;

    t92 = ((x501+(x502+x503))/x504);

    if (t92 != 8904440LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint16_t x505 = 0U;
	int8_t x506 = -1;
	int16_t x507 = 3324;
	static int32_t x508 = -1;
	int32_t t93 = 201734347;

    t93 = ((x505+(x506+x507))/x508);

    if (t93 != -3323) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x509 = 58380580U;
	uint8_t x511 = 31U;
	int64_t x512 = 491300656265694LL;

    t94 = ((x509+(x510+x511))/x512);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x514 = 15U;
	static int32_t x515 = -1;
	static int8_t x516 = -1;
	int32_t t95 = -26760;

    t95 = ((x513+(x514+x515))/x516);

    if (t95 != -32781) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x517 = -1;
	uint16_t x518 = 25U;
	volatile uint64_t x519 = UINT64_MAX;
	static int32_t x520 = -29043555;
	uint64_t t96 = 176984184LLU;

    t96 = ((x517+(x518+x519))/x520);

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x530 = -1LL;
	int16_t x532 = INT16_MAX;

    t97 = ((x529+(x530+x531))/x532);

    if (t97 != -159028526958LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x533 = INT8_MIN;
	volatile int32_t x535 = INT32_MAX;
	uint16_t x536 = 12U;
	volatile int32_t t98 = -177320481;

    t98 = ((x533+(x534+x535))/x536);

    if (t98 != 178956959) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x537 = 0;
	volatile int8_t x538 = 5;
	uint32_t x539 = 0U;
	int16_t x540 = INT16_MIN;
	uint32_t t99 = 9910116U;

    t99 = ((x537+(x538+x539))/x540);

    if (t99 != 0U) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x541 = 0;
	int64_t x542 = INT64_MAX;
	int64_t x543 = INT64_MIN;
	int64_t t100 = 115LL;

    t100 = ((x541+(x542+x543))/x544);

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x548 = INT64_MIN;
	volatile int64_t t101 = -591791LL;

    t101 = ((x545+(x546+x547))/x548);

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint32_t x549 = UINT32_MAX;
	volatile int64_t x550 = INT64_MIN;
	int64_t x552 = INT64_MAX;
	int64_t t102 = 159481779752LL;

    t102 = ((x549+(x550+x551))/x552);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint16_t x554 = UINT16_MAX;
	int8_t x555 = INT8_MAX;
	uint32_t x556 = UINT32_MAX;
	uint32_t t103 = 62938922U;

    t103 = ((x553+(x554+x555))/x556);

    if (t103 != 0U) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x561 = 2U;
	uint8_t x562 = 31U;
	volatile int32_t x564 = -1;

    t104 = ((x561+(x562+x563))/x564);

    if (t104 != 95) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x565 = -1;
	uint16_t x566 = 36U;
	uint32_t x567 = 128684382U;
	int8_t x568 = -15;
	volatile uint32_t t105 = 1303839U;

    t105 = ((x565+(x566+x567))/x568);

    if (t105 != 0U) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x569 = INT8_MIN;
	static int64_t x570 = 16806LL;
	static uint64_t x572 = 775922338065515376LLU;
	volatile uint64_t t106 = 4274612120760878529LLU;

    t106 = ((x569+(x570+x571))/x572);

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint8_t x578 = 8U;
	int8_t x580 = INT8_MIN;

    t107 = ((x577+(x578+x579))/x580);

    if (t107 != 0U) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x585 = INT16_MAX;
	static uint64_t x586 = 514171079LLU;
	uint16_t x587 = 133U;
	volatile uint64_t x588 = UINT64_MAX;
	uint64_t t108 = 16464009LLU;

    t108 = ((x585+(x586+x587))/x588);

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x589 = INT8_MIN;
	static uint64_t x590 = 423LLU;
	uint16_t x591 = 17482U;
	int32_t x592 = 1;
	uint64_t t109 = 27692107637310545LLU;

    t109 = ((x589+(x590+x591))/x592);

    if (t109 != 17777LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x597 = -207548254;
	int8_t x598 = INT8_MIN;
	int16_t x599 = -14;
	uint32_t x600 = 318U;
	static volatile uint32_t t110 = 1517840U;

    t110 = ((x597+(x598+x599))/x600);

    if (t110 != 12853518U) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x609 = INT16_MIN;
	int16_t x611 = 0;
	uint32_t x612 = UINT32_MAX;
	static uint32_t t111 = 49901862U;

    t111 = ((x609+(x610+x611))/x612);

    if (t111 != 0U) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x613 = 1315116861U;
	volatile int32_t x614 = -121213;
	int32_t x615 = -1;
	static volatile int16_t x616 = INT16_MIN;

    t112 = ((x613+(x614+x615))/x616);

    if (t112 != 0U) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x621 = -2462;
	int8_t x623 = INT8_MIN;
	int32_t t113 = -187170;

    t113 = ((x621+(x622+x623))/x624);

    if (t113 != 2555) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x625 = INT16_MIN;
	uint64_t x627 = UINT64_MAX;
	int64_t x628 = INT64_MIN;
	uint64_t t114 = 401483959216431779LLU;

    t114 = ((x625+(x626+x627))/x628);

    if (t114 != 1LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x630 = -10182;
	int32_t x631 = -1;
	static int16_t x632 = 827;

    t115 = ((x629+(x630+x631))/x632);

    if (t115 != -12) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x633 = -1LL;
	int16_t x634 = INT16_MIN;
	uint64_t x635 = 1LLU;
	int32_t x636 = -1383089;
	uint64_t t116 = 4LLU;

    t116 = ((x633+(x634+x635))/x636);

    if (t116 != 1LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x641 = 6U;
	int64_t x642 = INT64_MIN;
	int32_t x643 = INT32_MAX;
	uint32_t x644 = UINT32_MAX;

    t117 = ((x641+(x642+x643))/x644);

    if (t117 != -2147483647LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x645 = -1;
	int16_t x647 = INT16_MIN;
	volatile uint64_t x648 = UINT64_MAX;
	volatile uint64_t t118 = 828262976923373LLU;

    t118 = ((x645+(x646+x647))/x648);

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x653 = UINT64_MAX;
	static int8_t x654 = 0;
	int32_t x655 = INT32_MAX;
	int16_t x656 = INT16_MIN;
	volatile uint64_t t119 = 36081132787757714LLU;

    t119 = ((x653+(x654+x655))/x656);

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x657 = 56U;
	int32_t x660 = -1;
	volatile int64_t t120 = -1707102LL;

    t120 = ((x657+(x658+x659))/x660);

    if (t120 != 9223372034707292105LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x673 = -1;
	uint64_t x675 = 26LLU;
	int64_t x676 = INT64_MAX;
	volatile uint64_t t121 = 182397485921LLU;

    t121 = ((x673+(x674+x675))/x676);

    if (t121 != 1LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x677 = 8U;
	static uint16_t x679 = 24U;
	static volatile uint32_t x680 = 11446015U;

    t122 = ((x677+(x678+x679))/x680);

    if (t122 != 0U) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x685 = 560089175LL;
	int32_t x686 = -1;
	uint8_t x687 = 14U;
	volatile int64_t t123 = -47766062842LL;

    t123 = ((x685+(x686+x687))/x688);

    if (t123 != -17092LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x690 = -1;
	volatile uint32_t t124 = 127552U;

    t124 = ((x689+(x690+x691))/x692);

    if (t124 != 0U) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x693 = INT16_MAX;
	static int64_t x694 = -1LL;
	static uint8_t x695 = UINT8_MAX;
	uint32_t x696 = UINT32_MAX;
	int64_t t125 = 24104720962469509LL;

    t125 = ((x693+(x694+x695))/x696);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x702 = -1;
	uint64_t x704 = 767852277085509LLU;
	uint64_t t126 = 73LLU;

    t126 = ((x701+(x702+x703))/x704);

    if (t126 != 24023LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x705 = UINT32_MAX;
	int16_t x706 = -6466;

    t127 = ((x705+(x706+x707))/x708);

    if (t127 != 1U) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint64_t x709 = 568830666004318219LLU;
	int32_t x710 = 288;
	volatile uint32_t x711 = 27U;
	uint8_t x712 = 4U;
	volatile uint64_t t128 = 1881438LLU;

    t128 = ((x709+(x710+x711))/x712);

    if (t128 != 142207666501079633LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x714 = INT64_MIN;
	static uint64_t x715 = UINT64_MAX;
	volatile uint16_t x716 = 8468U;

    t129 = ((x713+(x714+x715))/x716);

    if (t129 != 1089203121971513LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x717 = 4U;
	int8_t x718 = INT8_MAX;
	static int64_t x719 = INT64_MIN;
	uint16_t x720 = 609U;
	volatile int64_t t130 = -3359102981215714401LL;

    t130 = ((x717+(x718+x719))/x720);

    if (t130 != -15145110076937234LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x721 = -1;
	int32_t x722 = -1;
	int32_t x723 = 31954;
	int32_t x724 = -3497;
	int32_t t131 = -11574;

    t131 = ((x721+(x722+x723))/x724);

    if (t131 != -9) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x725 = INT64_MAX;
	uint64_t x726 = 888LLU;
	uint16_t x727 = UINT16_MAX;
	static uint8_t x728 = UINT8_MAX;
	uint64_t t132 = 4LLU;

    t132 = ((x725+(x726+x727))/x728);

    if (t132 != 36170086419038596LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x729 = -8190;
	int64_t x730 = -1LL;
	static volatile uint32_t x731 = UINT32_MAX;
	uint8_t x732 = UINT8_MAX;

    t133 = ((x729+(x730+x731))/x732);

    if (t133 != 16842976LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint32_t x737 = UINT32_MAX;
	int32_t x738 = 5;
	int64_t x740 = 82758LL;

    t134 = ((x737+(x738+x739))/x740);

    if (t134 != 14LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint16_t x745 = 16224U;
	volatile int32_t x746 = INT32_MIN;
	static int64_t x747 = INT64_MAX;
	volatile uint64_t x748 = 63361615183LLU;

    t135 = ((x745+(x746+x747))/x748);

    if (t135 != 145567186LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x753 = -23264LL;
	volatile uint64_t x754 = 14200197385LLU;
	static int32_t x755 = INT32_MAX;
	volatile int32_t x756 = INT32_MIN;
	volatile uint64_t t136 = 29173LLU;

    t136 = ((x753+(x754+x755))/x756);

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x757 = 247302461LLU;
	uint8_t x758 = 60U;
	int16_t x759 = 83;
	volatile uint64_t t137 = 4LLU;

    t137 = ((x757+(x758+x759))/x760);

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x761 = INT8_MAX;
	int32_t x762 = 1;
	static int8_t x763 = -28;
	volatile uint64_t x764 = UINT64_MAX;
	uint64_t t138 = 6067901963LLU;

    t138 = ((x761+(x762+x763))/x764);

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint32_t x769 = 87079413U;
	uint32_t x770 = UINT32_MAX;
	int16_t x771 = 3;
	static uint64_t x772 = 58LLU;
	uint64_t t139 = 363LLU;

    t139 = ((x769+(x770+x771))/x772);

    if (t139 != 1501369LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x777 = -3858;
	int8_t x778 = INT8_MAX;
	int64_t x780 = INT64_MIN;
	volatile uint64_t t140 = 871604666864569940LLU;

    t140 = ((x777+(x778+x779))/x780);

    if (t140 != 0LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x785 = -1;
	int16_t x786 = INT16_MIN;
	static int8_t x787 = 14;

    t141 = ((x785+(x786+x787))/x788);

    if (t141 != 255) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x789 = 191LLU;
	int64_t x790 = 0LL;
	uint16_t x791 = 1U;
	int32_t x792 = INT32_MIN;

    t142 = ((x789+(x790+x791))/x792);

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x797 = -1;
	int16_t x799 = INT16_MIN;
	int32_t x800 = 9;

    t143 = ((x797+(x798+x799))/x800);

    if (t143 != 1024819115206082559LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x801 = INT16_MIN;
	volatile int8_t x802 = -51;
	volatile uint64_t x804 = UINT64_MAX;
	volatile uint64_t t144 = 5892163429206418LLU;

    t144 = ((x801+(x802+x803))/x804);

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x805 = -1;
	volatile int8_t x806 = INT8_MIN;
	uint32_t x807 = 65644356U;

    t145 = ((x805+(x806+x807))/x808);

    if (t145 != 2003U) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x809 = 155842810U;
	int8_t x810 = -1;
	uint16_t x811 = UINT16_MAX;
	static volatile int64_t t146 = 79451378LL;

    t146 = ((x809+(x810+x811))/x812);

    if (t146 != 66LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x813 = -6730697;
	uint16_t x814 = UINT16_MAX;
	int16_t x816 = INT16_MIN;
	int32_t t147 = -12533522;

    t147 = ((x813+(x814+x815))/x816);

    if (t147 != 203) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x817 = INT64_MAX;
	int8_t x818 = INT8_MIN;
	int32_t x819 = -469;
	uint16_t x820 = 1U;

    t148 = ((x817+(x818+x819))/x820);

    if (t148 != 9223372036854775210LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x821 = 83883987U;
	uint8_t x822 = 0U;
	static int8_t x823 = INT8_MAX;
	uint16_t x824 = UINT16_MAX;
	static uint32_t t149 = 1846041076U;

    t149 = ((x821+(x822+x823))/x824);

    if (t149 != 1279U) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x829 = UINT64_MAX;
	int64_t x830 = -64LL;
	volatile int8_t x831 = INT8_MAX;
	volatile uint64_t t150 = 5721497946493235LLU;

    t150 = ((x829+(x830+x831))/x832);

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x837 = INT32_MAX;
	static int8_t x838 = INT8_MIN;
	static int16_t x839 = INT16_MIN;
	int16_t x840 = 1;
	volatile int32_t t151 = 1190;

    t151 = ((x837+(x838+x839))/x840);

    if (t151 != 2147450751) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x845 = 34241371070LL;
	static uint64_t x846 = 8580LLU;
	uint16_t x847 = 417U;
	static uint32_t x848 = UINT32_MAX;
	volatile uint64_t t152 = 8361613558510370LLU;

    t152 = ((x845+(x846+x847))/x848);

    if (t152 != 7LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x849 = -6648127418091410LL;
	int16_t x850 = INT16_MIN;
	int32_t x852 = INT32_MIN;
	volatile int64_t t153 = 44514LL;

    t153 = ((x849+(x850+x851))/x852);

    if (t153 != 3095775LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x853 = -1;
	static int8_t x854 = INT8_MIN;
	int32_t x855 = 25;
	int8_t x856 = -20;
	volatile int32_t t154 = 10901754;

    t154 = ((x853+(x854+x855))/x856);

    if (t154 != 5) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint64_t x857 = 336663LLU;
	volatile int8_t x858 = -1;
	int32_t x859 = -15;
	static uint64_t t155 = 8925295551640280LLU;

    t155 = ((x857+(x858+x859))/x860);

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint16_t x861 = UINT16_MAX;
	int8_t x863 = -5;
	int32_t x864 = 12433;
	volatile int32_t t156 = 1;

    t156 = ((x861+(x862+x863))/x864);

    if (t156 != -2) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x866 = 50618498511139962LLU;
	int16_t x867 = -1;
	uint64_t t157 = 1682445LLU;

    t157 = ((x865+(x866+x867))/x868);

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x869 = INT8_MIN;
	uint64_t x870 = 405632974LLU;
	static int64_t x871 = 54008541663473LL;
	int32_t x872 = -1;
	uint64_t t158 = 253LLU;

    t158 = ((x869+(x870+x871))/x872);

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x873 = -115;
	int8_t x874 = INT8_MAX;
	static volatile uint64_t x875 = UINT64_MAX;
	int32_t x876 = INT32_MIN;
	volatile uint64_t t159 = 186683814411649983LLU;

    t159 = ((x873+(x874+x875))/x876);

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint8_t x877 = UINT8_MAX;
	int16_t x879 = -4667;
	uint64_t x880 = 201851849LLU;
	uint64_t t160 = 885LLU;

    t160 = ((x877+(x878+x879))/x880);

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x881 = INT32_MIN;
	int32_t x883 = INT32_MAX;
	uint32_t x884 = 1473U;
	volatile int64_t t161 = -22713837990386LL;

    t161 = ((x881+(x882+x883))/x884);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x885 = INT8_MAX;
	int8_t x886 = -1;
	int16_t x887 = -1;
	volatile uint32_t x888 = 146208198U;
	volatile uint32_t t162 = 265U;

    t162 = ((x885+(x886+x887))/x888);

    if (t162 != 0U) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x889 = INT8_MIN;
	int16_t x890 = -1;
	volatile int8_t x891 = 1;
	int64_t x892 = INT64_MIN;
	int64_t t163 = -178630112756LL;

    t163 = ((x889+(x890+x891))/x892);

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x893 = INT16_MAX;
	int32_t x894 = 159770520;
	volatile int64_t x895 = INT64_MIN;
	static uint32_t x896 = UINT32_MAX;
	int64_t t164 = -433LL;

    t164 = ((x893+(x894+x895))/x896);

    if (t164 != -2147483648LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x901 = INT16_MIN;
	int8_t x902 = -1;
	int8_t x903 = -1;
	int64_t x904 = INT64_MIN;
	static volatile int64_t t165 = 53LL;

    t165 = ((x901+(x902+x903))/x904);

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x913 = -1;
	volatile int8_t x914 = INT8_MAX;
	volatile int32_t t166 = 0;

    t166 = ((x913+(x914+x915))/x916);

    if (t166 != 6) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x917 = -1808018621845699692LL;
	static int64_t x918 = 2252367287572677063LL;
	int16_t x919 = INT16_MIN;
	int64_t t167 = 9415455948422900LL;

    t167 = ((x917+(x918+x919))/x920);

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int8_t x925 = INT8_MIN;
	int8_t x926 = -4;
	uint8_t x927 = 25U;
	int64_t x928 = INT64_MIN;
	volatile int64_t t168 = 0LL;

    t168 = ((x925+(x926+x927))/x928);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x929 = INT64_MIN;
	volatile int32_t x931 = INT32_MIN;
	volatile int8_t x932 = -1;

    t169 = ((x929+(x930+x931))/x932);

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x934 = -3152;
	volatile uint8_t x935 = 2U;
	uint8_t x936 = 38U;
	volatile uint64_t t170 = 617157LLU;

    t170 = ((x933+(x934+x935))/x936);

    if (t170 != 12127794243LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x937 = UINT64_MAX;
	volatile uint8_t x939 = 122U;
	uint32_t x940 = 530664462U;

    t171 = ((x937+(x938+x939))/x940);

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x951 = 0;
	uint64_t t172 = 64734382291007097LLU;

    t172 = ((x949+(x950+x951))/x952);

    if (t172 != 19322LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x953 = -1LL;
	uint64_t x954 = 3LLU;
	int32_t x955 = INT32_MIN;
	int8_t x956 = 1;
	uint64_t t173 = 259245552036684LLU;

    t173 = ((x953+(x954+x955))/x956);

    if (t173 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint16_t x958 = UINT16_MAX;
	int64_t x960 = INT64_MIN;
	int64_t t174 = 206052LL;

    t174 = ((x957+(x958+x959))/x960);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x965 = INT8_MAX;
	int8_t x967 = INT8_MIN;
	static int32_t x968 = INT32_MIN;
	volatile int64_t t175 = 826LL;

    t175 = ((x965+(x966+x967))/x968);

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int32_t x969 = -1;
	volatile uint64_t t176 = 978663526LLU;

    t176 = ((x969+(x970+x971))/x972);

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x973 = INT8_MIN;
	int64_t x974 = 32756LL;
	uint16_t x975 = 4U;
	int16_t x976 = INT16_MIN;
	static volatile int64_t t177 = -87195LL;

    t177 = ((x973+(x974+x975))/x976);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint32_t x978 = UINT32_MAX;
	uint32_t x979 = UINT32_MAX;

    t178 = ((x977+(x978+x979))/x980);

    if (t178 != 84214402U) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint8_t x981 = 1U;
	static volatile int32_t x982 = 171586743;
	static uint64_t x983 = 5737694836352395LLU;
	volatile uint64_t x984 = UINT64_MAX;
	volatile uint64_t t179 = 216571925LLU;

    t179 = ((x981+(x982+x983))/x984);

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x986 = 55313985990825957LLU;
	int8_t x987 = -1;
	int32_t x988 = 1661;
	uint64_t t180 = 1023377772524778245LLU;

    t180 = ((x985+(x986+x987))/x988);

    if (t180 != 33301617092610LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint64_t x989 = 205LLU;
	uint64_t x990 = UINT64_MAX;
	int64_t x991 = INT64_MIN;
	int8_t x992 = -1;
	uint64_t t181 = 102027358274559293LLU;

    t181 = ((x989+(x990+x991))/x992);

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x993 = 153LL;
	volatile int64_t x994 = -1LL;
	int16_t x995 = INT16_MAX;
	int16_t x996 = -5724;
	volatile int64_t t182 = 515348332861394LL;

    t182 = ((x993+(x994+x995))/x996);

    if (t182 != -5LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x1001 = INT8_MIN;
	volatile int64_t x1002 = 252LL;
	int8_t x1003 = INT8_MIN;

    t183 = ((x1001+(x1002+x1003))/x1004);

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x1005 = 1019U;
	uint32_t x1006 = UINT32_MAX;

    t184 = ((x1005+(x1006+x1007))/x1008);

    if (t184 != 1382879215LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x1013 = INT64_MAX;
	volatile uint8_t x1014 = 3U;
	int32_t x1015 = INT32_MIN;
	static volatile uint8_t x1016 = 72U;
	volatile int64_t t185 = 7876380868751491LL;

    t185 = ((x1013+(x1014+x1015))/x1016);

    if (t185 != 128102389370934613LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x1018 = -58;
	uint16_t x1019 = 10016U;
	static volatile int32_t t186 = 73553005;

    t186 = ((x1017+(x1018+x1019))/x1020);

    if (t186 != -9957) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x1029 = INT32_MAX;
	int16_t x1032 = -3;

    t187 = ((x1029+(x1030+x1031))/x1032);

    if (t187 != -715827924LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x1033 = INT64_MIN;
	static uint32_t x1035 = UINT32_MAX;
	static uint32_t x1036 = 847869U;
	int64_t t188 = 64392361966660LL;

    t188 = ((x1033+(x1034+x1035))/x1036);

    if (t188 != -10878298454784LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x1037 = -85;
	static uint8_t x1038 = 85U;
	int32_t x1039 = -4714487;
	volatile int32_t t189 = -1;

    t189 = ((x1037+(x1038+x1039))/x1040);

    if (t189 != 4714487) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint32_t x1041 = 8874U;
	int8_t x1042 = 0;
	static volatile uint8_t x1043 = 12U;
	static int64_t t190 = 2449LL;

    t190 = ((x1041+(x1042+x1043))/x1044);

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x1045 = UINT8_MAX;
	uint8_t x1046 = 0U;
	uint32_t x1048 = 9480U;

    t191 = ((x1045+(x1046+x1047))/x1048);

    if (t191 != -972929539752613LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x1049 = INT16_MAX;
	static uint64_t x1050 = 56LLU;
	uint32_t x1052 = 243U;
	uint64_t t192 = 830LLU;

    t192 = ((x1049+(x1050+x1051))/x1052);

    if (t192 != 135LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1053 = INT16_MAX;
	static int16_t x1054 = INT16_MIN;
	static volatile int16_t x1055 = -1;
	static volatile uint64_t x1056 = UINT64_MAX;
	static uint64_t t193 = 14935518LLU;

    t193 = ((x1053+(x1054+x1055))/x1056);

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x1057 = INT32_MIN;
	int8_t x1058 = INT8_MIN;
	int16_t x1059 = 3635;
	uint32_t t194 = 1U;

    t194 = ((x1057+(x1058+x1059))/x1060);

    if (t194 != 0U) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1061 = 438;
	uint64_t x1062 = UINT64_MAX;
	uint8_t x1063 = 2U;
	static int32_t x1064 = INT32_MIN;
	volatile uint64_t t195 = 4074099481868LLU;

    t195 = ((x1061+(x1062+x1063))/x1064);

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x1066 = 2332U;
	uint32_t x1067 = 27U;
	volatile uint8_t x1068 = 1U;
	volatile uint32_t t196 = 1U;

    t196 = ((x1065+(x1066+x1067))/x1068);

    if (t196 != 2364U) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x1069 = 17372878LLU;
	uint8_t x1071 = 22U;
	uint16_t x1072 = UINT16_MAX;
	static uint64_t t197 = 3LLU;

    t197 = ((x1069+(x1070+x1071))/x1072);

    if (t197 != 265LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1074 = -1;
	static uint32_t x1075 = UINT32_MAX;
	volatile uint16_t x1076 = 4838U;
	static volatile uint32_t t198 = 0U;

    t198 = ((x1073+(x1074+x1075))/x1076);

    if (t198 != 130U) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint64_t x1077 = 111854742500LLU;
	int64_t x1078 = -1LL;

    t199 = ((x1077+(x1078+x1079))/x1080);

    if (t199 != 0LLU) { NG(); } else { ; }
	
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


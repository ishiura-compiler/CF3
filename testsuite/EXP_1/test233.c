
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

int32_t x3 = INT32_MAX;
int64_t x6 = -1LL;
uint32_t x12 = 22308258U;
volatile int32_t t2 = 2654129;
int8_t x14 = INT8_MIN;
volatile int32_t t4 = 1225396;
int32_t x34 = INT32_MIN;
volatile int8_t x36 = 21;
uint32_t x48 = 206919U;
int32_t x55 = 14271;
static int16_t x56 = INT16_MAX;
int16_t x60 = 7;
int8_t x62 = -1;
static volatile int32_t t12 = 98105323;
static int16_t x81 = -1;
volatile int32_t t15 = 181;
volatile int32_t x86 = INT32_MIN;
int32_t x98 = 64516;
static uint16_t x100 = UINT16_MAX;
static volatile int64_t x110 = -8002LL;
int16_t x111 = INT16_MIN;
int32_t x114 = 1;
int8_t x118 = 35;
volatile uint32_t x121 = 3U;
int64_t x128 = 58LL;
static uint16_t x134 = UINT16_MAX;
int8_t x136 = INT8_MIN;
static int16_t x145 = INT16_MAX;
volatile uint16_t x147 = 30325U;
int32_t t30 = 20;
int16_t x159 = INT16_MIN;
volatile int8_t x161 = -1;
static uint64_t x164 = 39623839625692LLU;
volatile uint8_t x174 = UINT8_MAX;
int32_t t35 = -755;
int8_t x183 = INT8_MIN;
uint32_t x187 = 1U;
int16_t x190 = INT16_MIN;
uint8_t x213 = 1U;
uint16_t x216 = 1799U;
uint8_t x219 = 1U;
static volatile int32_t t43 = -493600140;
volatile int8_t x229 = INT8_MIN;
int8_t x231 = INT8_MAX;
volatile int32_t t45 = 48;
volatile int32_t t47 = -17176;
int8_t x257 = INT8_MIN;
int32_t t52 = -734495316;
volatile int64_t x281 = -390736LL;
uint64_t x284 = 43674310910601LLU;
uint16_t x285 = 2U;
volatile int16_t x287 = INT16_MIN;
static int8_t x288 = INT8_MIN;
volatile uint32_t x290 = UINT32_MAX;
static uint16_t x293 = 114U;
volatile int64_t x299 = -71419038056347997LL;
uint64_t x302 = 222LLU;
static volatile uint8_t x312 = UINT8_MAX;
int16_t x319 = INT16_MAX;
volatile int32_t x326 = 12186250;
volatile uint8_t x331 = 3U;
static uint64_t x332 = 840940LLU;
int32_t t63 = -8095201;
int32_t t64 = -22751;
uint8_t x352 = 4U;
volatile int32_t t66 = -17782;
uint64_t x375 = 6934140545177661LLU;
int32_t t70 = -125712;
int16_t x377 = INT16_MIN;
volatile uint8_t x381 = 0U;
int16_t x383 = INT16_MAX;
int64_t x389 = INT64_MAX;
uint32_t x400 = 14942589U;
volatile int32_t t75 = 361248819;
volatile int16_t x405 = INT16_MAX;
int16_t x408 = INT16_MIN;
int16_t x412 = INT16_MIN;
int32_t x413 = -27895144;
static int16_t x417 = -3615;
volatile uint16_t x419 = 0U;
static uint16_t x430 = UINT16_MAX;
uint8_t x433 = 10U;
int32_t x438 = -1;
int16_t x440 = -1;
static uint64_t x456 = 93589053132010LLU;
volatile int32_t t88 = 99;
int16_t x474 = 0;
int32_t t89 = -463885042;
static int16_t x480 = INT16_MAX;
int8_t x488 = INT8_MIN;
volatile int32_t t93 = 795612899;
volatile int64_t x500 = INT64_MIN;
int64_t x504 = INT64_MAX;
volatile int32_t t95 = 48;
uint32_t x535 = 21467U;
uint8_t x536 = UINT8_MAX;
static int8_t x537 = -1;
volatile int64_t x538 = -1LL;
uint64_t x539 = UINT64_MAX;
int8_t x540 = 1;
static volatile int32_t t100 = -2065541;
static uint16_t x542 = 17759U;
uint32_t x559 = UINT32_MAX;
static int8_t x587 = -5;
static volatile uint16_t x592 = 0U;
volatile int16_t x601 = INT16_MAX;
int16_t x623 = -1;
int64_t x640 = INT64_MAX;
int32_t t117 = 384;
volatile uint64_t x651 = UINT64_MAX;
static volatile int32_t t119 = -123069003;
uint64_t x665 = 770484235701LLU;
static int16_t x667 = -1;
int8_t x682 = INT8_MAX;
uint32_t x684 = 4134868U;
uint64_t x687 = UINT64_MAX;
volatile int32_t x688 = 27697;
volatile int32_t t124 = 153890513;
int16_t x697 = INT16_MIN;
uint16_t x701 = 4U;
int64_t x708 = INT64_MIN;
int32_t t129 = 174569863;
uint32_t x715 = 283165U;
static int8_t x725 = -1;
int16_t x741 = INT16_MAX;
int32_t x744 = -1;
int16_t x750 = INT16_MIN;
static volatile int16_t x756 = INT16_MIN;
volatile int32_t t138 = 417480;
int16_t x776 = -22;
int64_t x777 = -178185594LL;
uint32_t x780 = 2525U;
int64_t x783 = 301510927LL;
uint64_t x791 = 4191914LLU;
int64_t x793 = -1LL;
static uint8_t x794 = UINT8_MAX;
static int16_t x799 = 1169;
int32_t t146 = 15510426;
static volatile int64_t x811 = INT64_MIN;
int16_t x814 = INT16_MIN;
uint16_t x816 = UINT16_MAX;
int8_t x819 = -1;
uint64_t x830 = 5966115410378LLU;
volatile int32_t x831 = INT32_MAX;
int8_t x851 = INT8_MAX;
static int32_t t157 = -492407;
static int32_t t159 = 1;
uint64_t x866 = UINT64_MAX;
volatile int64_t x867 = INT64_MIN;
uint8_t x868 = 4U;
uint64_t x878 = 52540236540492LLU;
static uint32_t x879 = UINT32_MAX;
int32_t x885 = -1;
static volatile uint64_t x887 = 667534997183639LLU;
int16_t x888 = INT16_MAX;
volatile int32_t t164 = -1240;
uint64_t x889 = 471LLU;
int64_t x892 = INT64_MAX;
volatile uint64_t x894 = UINT64_MAX;
uint8_t x895 = 25U;
volatile int8_t x899 = INT8_MAX;
static int16_t x938 = INT16_MAX;
int64_t x940 = -1LL;
int8_t x947 = -1;
uint16_t x948 = 29U;
volatile int16_t x951 = -1;
int16_t x958 = -1;
int16_t x962 = INT16_MIN;
int16_t x977 = -1;
int32_t t179 = 43769335;
volatile int8_t x981 = INT8_MIN;
int64_t x1003 = INT64_MIN;
uint16_t x1009 = 503U;
uint64_t x1013 = 13932831521809699LLU;
int64_t x1019 = 2LL;
uint32_t x1022 = 63559844U;
static uint16_t x1026 = 1U;
static volatile int8_t x1030 = -1;
volatile int64_t x1032 = -103100062625095LL;
volatile uint8_t x1053 = 5U;
volatile int32_t t190 = -524016;
uint64_t x1057 = 11484622263630LLU;
int32_t x1071 = -1;
int16_t x1082 = -1;
volatile int8_t x1085 = -47;
static int32_t x1087 = 1;
int16_t x1094 = INT16_MIN;
int32_t t198 = 361297;
int16_t x1102 = -1;


void f0(void) {
    	uint64_t x1 = 8712747LLU;
	int64_t x2 = 4423LL;
	uint16_t x4 = UINT16_MAX;
	static volatile int32_t t0 = -652183675;

    t0 = (((x1-x2)*x3)>x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = 121U;
	int16_t x7 = INT16_MIN;
	uint16_t x8 = 9U;
	int32_t t1 = -1;

    t1 = (((x5-x6)*x7)>x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = -1;
	static int16_t x10 = INT16_MIN;
	static int64_t x11 = -1LL;

    t2 = (((x9-x10)*x11)>x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = 1683118007317851LL;
	int64_t x15 = 1LL;
	int8_t x16 = -1;
	int32_t t3 = 22;

    t3 = (((x13-x14)*x15)>x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x21 = INT16_MIN;
	int16_t x22 = -1;
	int64_t x23 = 567524LL;
	volatile int64_t x24 = -1258730LL;

    t4 = (((x21-x22)*x23)>x24);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x29 = INT8_MAX;
	int8_t x30 = -1;
	volatile uint32_t x31 = UINT32_MAX;
	uint32_t x32 = 1U;
	int32_t t5 = 1;

    t5 = (((x29-x30)*x31)>x32);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile uint64_t x33 = 14LLU;
	int8_t x35 = -1;
	volatile int32_t t6 = 12538695;

    t6 = (((x33-x34)*x35)>x36);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x41 = INT8_MIN;
	int16_t x42 = INT16_MIN;
	int16_t x43 = -67;
	volatile int64_t x44 = INT64_MIN;
	volatile int32_t t7 = 744872029;

    t7 = (((x41-x42)*x43)>x44);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x45 = UINT64_MAX;
	int32_t x46 = -1;
	static int8_t x47 = -1;
	volatile int32_t t8 = 22362391;

    t8 = (((x45-x46)*x47)>x48);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x49 = -1063019721LL;
	volatile int16_t x50 = -335;
	int8_t x51 = INT8_MIN;
	static int32_t x52 = -1;
	int32_t t9 = 14404;

    t9 = (((x49-x50)*x51)>x52);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x53 = -1;
	uint32_t x54 = 8U;
	volatile int32_t t10 = -20952;

    t10 = (((x53-x54)*x55)>x56);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x57 = -1LL;
	int16_t x58 = -1;
	int16_t x59 = INT16_MAX;
	int32_t t11 = 185220196;

    t11 = (((x57-x58)*x59)>x60);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x61 = INT32_MIN;
	int64_t x63 = 83712LL;
	static int8_t x64 = 56;

    t12 = (((x61-x62)*x63)>x64);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile uint32_t x65 = 20370057U;
	volatile int8_t x66 = INT8_MAX;
	static volatile uint8_t x67 = 2U;
	volatile int32_t x68 = INT32_MAX;
	volatile int32_t t13 = -482396;

    t13 = (((x65-x66)*x67)>x68);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x73 = 2440863U;
	static volatile int8_t x74 = INT8_MAX;
	static volatile uint16_t x75 = 12U;
	static uint64_t x76 = 284685LLU;
	int32_t t14 = 23;

    t14 = (((x73-x74)*x75)>x76);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x82 = -1;
	uint8_t x83 = 7U;
	static volatile uint32_t x84 = 1894U;

    t15 = (((x81-x82)*x83)>x84);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x85 = INT64_MIN;
	int8_t x87 = -1;
	int32_t x88 = INT32_MIN;
	int32_t t16 = 10;

    t16 = (((x85-x86)*x87)>x88);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x89 = INT32_MIN;
	int8_t x90 = -7;
	volatile uint32_t x91 = 50629206U;
	int64_t x92 = 38LL;
	volatile int32_t t17 = 0;

    t17 = (((x89-x90)*x91)>x92);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x93 = 0LL;
	int32_t x94 = -1;
	uint32_t x95 = 354034U;
	static int32_t x96 = -300734;
	int32_t t18 = -2;

    t18 = (((x93-x94)*x95)>x96);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x97 = 11410U;
	static volatile int8_t x99 = INT8_MAX;
	volatile int32_t t19 = 45;

    t19 = (((x97-x98)*x99)>x100);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x101 = 1236U;
	uint64_t x102 = UINT64_MAX;
	uint32_t x103 = 31225U;
	int16_t x104 = INT16_MAX;
	volatile int32_t t20 = -2319580;

    t20 = (((x101-x102)*x103)>x104);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x105 = UINT8_MAX;
	uint8_t x106 = 98U;
	uint32_t x107 = 512U;
	volatile uint16_t x108 = UINT16_MAX;
	volatile int32_t t21 = 22780;

    t21 = (((x105-x106)*x107)>x108);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint16_t x109 = 358U;
	uint32_t x112 = 148U;
	volatile int32_t t22 = 675063854;

    t22 = (((x109-x110)*x111)>x112);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x113 = 251U;
	static int64_t x115 = -1LL;
	volatile int64_t x116 = INT64_MIN;
	volatile int32_t t23 = -44;

    t23 = (((x113-x114)*x115)>x116);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x117 = UINT8_MAX;
	uint64_t x119 = 14385640878LLU;
	int8_t x120 = INT8_MIN;
	int32_t t24 = 262096;

    t24 = (((x117-x118)*x119)>x120);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x122 = 963U;
	uint8_t x123 = UINT8_MAX;
	uint32_t x124 = UINT32_MAX;
	static volatile int32_t t25 = -76427011;

    t25 = (((x121-x122)*x123)>x124);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x125 = UINT64_MAX;
	int64_t x126 = -1LL;
	uint32_t x127 = 757435516U;
	static volatile int32_t t26 = 475188;

    t26 = (((x125-x126)*x127)>x128);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x133 = 49LLU;
	int16_t x135 = INT16_MIN;
	static volatile int32_t t27 = -141683;

    t27 = (((x133-x134)*x135)>x136);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x141 = INT32_MIN;
	static volatile uint64_t x142 = 10169990110332778LLU;
	static int64_t x143 = -393547LL;
	uint64_t x144 = UINT64_MAX;
	volatile int32_t t28 = 0;

    t28 = (((x141-x142)*x143)>x144);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x146 = 84658;
	static int64_t x148 = -1LL;
	volatile int32_t t29 = -7;

    t29 = (((x145-x146)*x147)>x148);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint32_t x149 = UINT32_MAX;
	volatile uint8_t x150 = 18U;
	int64_t x151 = 0LL;
	int16_t x152 = 114;

    t30 = (((x149-x150)*x151)>x152);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x157 = INT8_MIN;
	volatile int8_t x158 = INT8_MIN;
	int8_t x160 = 1;
	volatile int32_t t31 = 4271;

    t31 = (((x157-x158)*x159)>x160);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x162 = INT8_MIN;
	volatile int8_t x163 = INT8_MIN;
	volatile int32_t t32 = -514104;

    t32 = (((x161-x162)*x163)>x164);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int64_t x165 = 266194494885LL;
	static volatile int16_t x166 = -930;
	int16_t x167 = 160;
	static uint64_t x168 = 6296438LLU;
	static int32_t t33 = -214874723;

    t33 = (((x165-x166)*x167)>x168);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x169 = -1;
	static uint16_t x170 = 11182U;
	volatile int16_t x171 = 246;
	volatile int8_t x172 = -1;
	volatile int32_t t34 = -3897865;

    t34 = (((x169-x170)*x171)>x172);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x173 = INT16_MAX;
	uint8_t x175 = UINT8_MAX;
	uint16_t x176 = 1U;

    t35 = (((x173-x174)*x175)>x176);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint32_t x177 = 301610663U;
	static int32_t x178 = 11389;
	uint16_t x179 = 53U;
	static int64_t x180 = -1LL;
	static volatile int32_t t36 = 11625;

    t36 = (((x177-x178)*x179)>x180);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x181 = -1;
	volatile int64_t x182 = 3LL;
	int16_t x184 = INT16_MAX;
	int32_t t37 = 85;

    t37 = (((x181-x182)*x183)>x184);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x185 = INT32_MAX;
	int32_t x186 = INT32_MAX;
	int32_t x188 = 30209757;
	static int32_t t38 = -2;

    t38 = (((x185-x186)*x187)>x188);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x189 = INT16_MAX;
	int8_t x191 = INT8_MIN;
	volatile int32_t x192 = INT32_MIN;
	static int32_t t39 = -28093;

    t39 = (((x189-x190)*x191)>x192);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x193 = -1;
	uint8_t x194 = 1U;
	int16_t x195 = INT16_MIN;
	uint16_t x196 = 34U;
	static volatile int32_t t40 = 114697988;

    t40 = (((x193-x194)*x195)>x196);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint64_t x197 = UINT64_MAX;
	int8_t x198 = INT8_MIN;
	int32_t x199 = INT32_MIN;
	int32_t x200 = -1;
	int32_t t41 = 186805925;

    t41 = (((x197-x198)*x199)>x200);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x214 = INT32_MAX;
	static uint64_t x215 = 1668875354032453073LLU;
	int32_t t42 = 975;

    t42 = (((x213-x214)*x215)>x216);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x217 = INT16_MAX;
	volatile uint16_t x218 = 5U;
	volatile int64_t x220 = -1LL;

    t43 = (((x217-x218)*x219)>x220);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x225 = 58U;
	int8_t x226 = INT8_MAX;
	uint64_t x227 = UINT64_MAX;
	int32_t x228 = -1;
	volatile int32_t t44 = -19305;

    t44 = (((x225-x226)*x227)>x228);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x230 = INT16_MAX;
	int16_t x232 = INT16_MAX;

    t45 = (((x229-x230)*x231)>x232);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint32_t x241 = 431905U;
	volatile int32_t x242 = -1;
	int8_t x243 = INT8_MAX;
	int32_t x244 = INT32_MIN;
	static int32_t t46 = -1;

    t46 = (((x241-x242)*x243)>x244);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x245 = -1;
	volatile uint32_t x246 = 976U;
	uint16_t x247 = 470U;
	int64_t x248 = INT64_MAX;

    t47 = (((x245-x246)*x247)>x248);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint64_t x249 = 2944LLU;
	int32_t x250 = INT32_MAX;
	static uint16_t x251 = UINT16_MAX;
	int16_t x252 = 15;
	volatile int32_t t48 = -284351;

    t48 = (((x249-x250)*x251)>x252);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x253 = INT8_MIN;
	volatile uint64_t x254 = UINT64_MAX;
	static volatile uint32_t x255 = UINT32_MAX;
	uint16_t x256 = UINT16_MAX;
	int32_t t49 = 0;

    t49 = (((x253-x254)*x255)>x256);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x258 = INT64_MIN;
	uint8_t x259 = 1U;
	int64_t x260 = -1LL;
	static volatile int32_t t50 = -1077627;

    t50 = (((x257-x258)*x259)>x260);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x269 = UINT8_MAX;
	uint8_t x270 = 7U;
	static uint8_t x271 = 20U;
	static int32_t x272 = -10895135;
	int32_t t51 = -241377148;

    t51 = (((x269-x270)*x271)>x272);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x277 = -1;
	int16_t x278 = 1622;
	int32_t x279 = 20;
	int16_t x280 = INT16_MAX;

    t52 = (((x277-x278)*x279)>x280);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x282 = 24U;
	volatile int64_t x283 = -1LL;
	int32_t t53 = 456769;

    t53 = (((x281-x282)*x283)>x284);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x286 = 157U;
	volatile int32_t t54 = 137396;

    t54 = (((x285-x286)*x287)>x288);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x289 = UINT16_MAX;
	volatile int16_t x291 = INT16_MAX;
	int16_t x292 = INT16_MIN;
	int32_t t55 = -41029037;

    t55 = (((x289-x290)*x291)>x292);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int64_t x294 = -1LL;
	uint32_t x295 = 10075U;
	int16_t x296 = -1;
	static volatile int32_t t56 = -645342477;

    t56 = (((x293-x294)*x295)>x296);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x297 = -1;
	volatile int8_t x298 = INT8_MIN;
	uint8_t x300 = UINT8_MAX;
	volatile int32_t t57 = 37247970;

    t57 = (((x297-x298)*x299)>x300);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x301 = INT16_MIN;
	static volatile int8_t x303 = INT8_MAX;
	uint8_t x304 = 99U;
	int32_t t58 = -159832453;

    t58 = (((x301-x302)*x303)>x304);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x309 = 0;
	static uint16_t x310 = 1352U;
	volatile uint8_t x311 = 87U;
	int32_t t59 = -157;

    t59 = (((x309-x310)*x311)>x312);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x317 = 224823LLU;
	int64_t x318 = -1LL;
	uint32_t x320 = 16707U;
	int32_t t60 = 1619894;

    t60 = (((x317-x318)*x319)>x320);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x325 = 3473U;
	uint8_t x327 = 71U;
	int8_t x328 = INT8_MIN;
	static int32_t t61 = 1195;

    t61 = (((x325-x326)*x327)>x328);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x329 = 12;
	int8_t x330 = INT8_MAX;
	volatile int32_t t62 = -416642;

    t62 = (((x329-x330)*x331)>x332);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x333 = -3510732;
	volatile int32_t x334 = -1;
	int8_t x335 = 2;
	uint16_t x336 = 26U;

    t63 = (((x333-x334)*x335)>x336);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x337 = 1U;
	volatile uint16_t x338 = 9U;
	volatile int16_t x339 = INT16_MIN;
	static int8_t x340 = -1;

    t64 = (((x337-x338)*x339)>x340);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x349 = INT8_MAX;
	int8_t x350 = INT8_MIN;
	uint32_t x351 = 228862U;
	volatile int32_t t65 = -48;

    t65 = (((x349-x350)*x351)>x352);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint8_t x353 = 1U;
	static int16_t x354 = -1;
	uint16_t x355 = UINT16_MAX;
	uint64_t x356 = UINT64_MAX;

    t66 = (((x353-x354)*x355)>x356);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x357 = INT16_MAX;
	volatile int8_t x358 = INT8_MIN;
	volatile int16_t x359 = 1;
	uint8_t x360 = 1U;
	volatile int32_t t67 = 656187;

    t67 = (((x357-x358)*x359)>x360);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x365 = UINT64_MAX;
	volatile int64_t x366 = -1LL;
	uint32_t x367 = 1U;
	int16_t x368 = -1;
	static volatile int32_t t68 = -6411781;

    t68 = (((x365-x366)*x367)>x368);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x369 = -1;
	uint32_t x370 = 201927U;
	volatile uint64_t x371 = 649091994LLU;
	volatile uint16_t x372 = UINT16_MAX;
	int32_t t69 = 6506;

    t69 = (((x369-x370)*x371)>x372);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x373 = -11LL;
	volatile int32_t x374 = -47777443;
	static uint8_t x376 = 0U;

    t70 = (((x373-x374)*x375)>x376);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint32_t x378 = 112U;
	uint8_t x379 = 6U;
	static uint16_t x380 = 24917U;
	volatile int32_t t71 = -25;

    t71 = (((x377-x378)*x379)>x380);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x382 = UINT64_MAX;
	uint16_t x384 = UINT16_MAX;
	volatile int32_t t72 = 270;

    t72 = (((x381-x382)*x383)>x384);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x385 = UINT32_MAX;
	uint32_t x386 = 3437720U;
	int8_t x387 = INT8_MIN;
	uint16_t x388 = 54U;
	int32_t t73 = 326664;

    t73 = (((x385-x386)*x387)>x388);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x390 = 5034U;
	int8_t x391 = 0;
	uint32_t x392 = UINT32_MAX;
	static int32_t t74 = -46;

    t74 = (((x389-x390)*x391)>x392);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x397 = INT32_MIN;
	uint32_t x398 = 16274361U;
	volatile int64_t x399 = -3214390LL;

    t75 = (((x397-x398)*x399)>x400);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x406 = 1;
	int16_t x407 = -1;
	int32_t t76 = -18769;

    t76 = (((x405-x406)*x407)>x408);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x409 = 616058559191LL;
	int64_t x410 = -27LL;
	static int8_t x411 = -7;
	int32_t t77 = 523538945;

    t77 = (((x409-x410)*x411)>x412);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x414 = -1LL;
	static int16_t x415 = INT16_MIN;
	uint64_t x416 = 24576603054722LLU;
	int32_t t78 = -1895;

    t78 = (((x413-x414)*x415)>x416);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x418 = -13;
	int8_t x420 = 52;
	volatile int32_t t79 = -1;

    t79 = (((x417-x418)*x419)>x420);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int64_t x421 = -160212343772387LL;
	uint8_t x422 = UINT8_MAX;
	int32_t x423 = 6808;
	int64_t x424 = -1LL;
	int32_t t80 = 99347372;

    t80 = (((x421-x422)*x423)>x424);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x429 = INT64_MAX;
	int8_t x431 = -1;
	uint16_t x432 = 8350U;
	volatile int32_t t81 = -134164371;

    t81 = (((x429-x430)*x431)>x432);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x434 = INT16_MIN;
	static int16_t x435 = 1;
	int8_t x436 = INT8_MAX;
	volatile int32_t t82 = -62;

    t82 = (((x433-x434)*x435)>x436);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x437 = 14U;
	int8_t x439 = -1;
	int32_t t83 = -3068;

    t83 = (((x437-x438)*x439)>x440);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x441 = 3;
	uint32_t x442 = UINT32_MAX;
	static int8_t x443 = 1;
	uint32_t x444 = UINT32_MAX;
	static volatile int32_t t84 = 477;

    t84 = (((x441-x442)*x443)>x444);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint32_t x453 = UINT32_MAX;
	static int64_t x454 = -1LL;
	uint64_t x455 = 129096733583LLU;
	volatile int32_t t85 = -222;

    t85 = (((x453-x454)*x455)>x456);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x457 = -2252;
	static uint8_t x458 = UINT8_MAX;
	int8_t x459 = -1;
	int64_t x460 = INT64_MIN;
	int32_t t86 = 31802;

    t86 = (((x457-x458)*x459)>x460);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x465 = 51U;
	int64_t x466 = -7620987284LL;
	uint32_t x467 = 313642347U;
	uint64_t x468 = UINT64_MAX;
	static int32_t t87 = -165;

    t87 = (((x465-x466)*x467)>x468);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x469 = UINT32_MAX;
	volatile uint64_t x470 = UINT64_MAX;
	uint32_t x471 = 95206033U;
	int32_t x472 = INT32_MIN;

    t88 = (((x469-x470)*x471)>x472);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x473 = 9297062LLU;
	volatile int32_t x475 = INT32_MAX;
	int8_t x476 = INT8_MAX;

    t89 = (((x473-x474)*x475)>x476);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x477 = INT8_MAX;
	int8_t x478 = 0;
	volatile uint64_t x479 = 318542940898715LLU;
	int32_t t90 = 2;

    t90 = (((x477-x478)*x479)>x480);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x485 = UINT64_MAX;
	static int16_t x486 = INT16_MIN;
	volatile int8_t x487 = INT8_MIN;
	static int32_t t91 = -154561;

    t91 = (((x485-x486)*x487)>x488);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x489 = INT8_MIN;
	static int8_t x490 = 0;
	int64_t x491 = -30855104653504LL;
	uint64_t x492 = UINT64_MAX;
	static int32_t t92 = 28405;

    t92 = (((x489-x490)*x491)>x492);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x493 = -1LL;
	uint64_t x494 = 222370359446744LLU;
	int64_t x495 = -60363560637LL;
	uint32_t x496 = 7712251U;

    t93 = (((x493-x494)*x495)>x496);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x497 = UINT16_MAX;
	volatile uint32_t x498 = 2979691U;
	volatile int8_t x499 = INT8_MIN;
	int32_t t94 = -13712224;

    t94 = (((x497-x498)*x499)>x500);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x501 = -33255529951LL;
	static int64_t x502 = INT64_MIN;
	uint64_t x503 = 33982904306473620LLU;

    t95 = (((x501-x502)*x503)>x504);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x509 = INT32_MIN;
	volatile uint32_t x510 = 12U;
	uint8_t x511 = 38U;
	volatile int32_t x512 = INT32_MAX;
	int32_t t96 = 1;

    t96 = (((x509-x510)*x511)>x512);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x517 = -1;
	int16_t x518 = INT16_MIN;
	uint8_t x519 = 4U;
	volatile int8_t x520 = 53;
	static volatile int32_t t97 = -14872478;

    t97 = (((x517-x518)*x519)>x520);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x521 = INT16_MAX;
	static uint32_t x522 = 285U;
	volatile int32_t x523 = -1;
	int64_t x524 = 4304524765250937LL;
	int32_t t98 = -19;

    t98 = (((x521-x522)*x523)>x524);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x533 = UINT16_MAX;
	static int32_t x534 = -94296;
	volatile int32_t t99 = 36870272;

    t99 = (((x533-x534)*x535)>x536);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    

    t100 = (((x537-x538)*x539)>x540);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x541 = -1961;
	uint16_t x543 = UINT16_MAX;
	int64_t x544 = INT64_MIN;
	int32_t t101 = 240;

    t101 = (((x541-x542)*x543)>x544);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x549 = -53;
	volatile uint32_t x550 = UINT32_MAX;
	int8_t x551 = 2;
	static int16_t x552 = INT16_MIN;
	volatile int32_t t102 = -34;

    t102 = (((x549-x550)*x551)>x552);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x553 = -1;
	volatile uint32_t x554 = UINT32_MAX;
	volatile int32_t x555 = INT32_MIN;
	static volatile uint16_t x556 = UINT16_MAX;
	int32_t t103 = 1168019;

    t103 = (((x553-x554)*x555)>x556);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x557 = -4624LL;
	volatile uint8_t x558 = 12U;
	int16_t x560 = -1;
	volatile int32_t t104 = 34;

    t104 = (((x557-x558)*x559)>x560);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x565 = -7088;
	uint32_t x566 = UINT32_MAX;
	int16_t x567 = -52;
	int32_t x568 = 0;
	int32_t t105 = -60008165;

    t105 = (((x565-x566)*x567)>x568);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint64_t x577 = 91864LLU;
	volatile uint16_t x578 = 5249U;
	int64_t x579 = INT64_MAX;
	uint32_t x580 = 85U;
	int32_t t106 = 40365177;

    t106 = (((x577-x578)*x579)>x580);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x585 = -1;
	uint32_t x586 = 559U;
	int32_t x588 = -1;
	static int32_t t107 = 1;

    t107 = (((x585-x586)*x587)>x588);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x589 = 594705659372LLU;
	static int16_t x590 = INT16_MIN;
	int16_t x591 = INT16_MIN;
	volatile int32_t t108 = 545674752;

    t108 = (((x589-x590)*x591)>x592);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x593 = -1;
	uint16_t x594 = UINT16_MAX;
	int8_t x595 = INT8_MAX;
	volatile uint16_t x596 = 95U;
	static volatile int32_t t109 = 1212187;

    t109 = (((x593-x594)*x595)>x596);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x597 = INT16_MAX;
	static int8_t x598 = 37;
	volatile uint32_t x599 = UINT32_MAX;
	int8_t x600 = INT8_MIN;
	int32_t t110 = 8369861;

    t110 = (((x597-x598)*x599)>x600);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x602 = UINT32_MAX;
	int16_t x603 = INT16_MIN;
	volatile uint16_t x604 = 1000U;
	int32_t t111 = 109678;

    t111 = (((x601-x602)*x603)>x604);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int16_t x605 = INT16_MIN;
	static int64_t x606 = 27204803832668LL;
	static uint64_t x607 = 224018819228LLU;
	int8_t x608 = -1;
	int32_t t112 = 9927910;

    t112 = (((x605-x606)*x607)>x608);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x609 = 5;
	int8_t x610 = 15;
	int8_t x611 = -1;
	int16_t x612 = INT16_MIN;
	volatile int32_t t113 = -79;

    t113 = (((x609-x610)*x611)>x612);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x613 = 0U;
	uint16_t x614 = UINT16_MAX;
	int8_t x615 = INT8_MIN;
	int32_t x616 = INT32_MIN;
	int32_t t114 = 6999;

    t114 = (((x613-x614)*x615)>x616);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x617 = 251;
	int8_t x618 = 7;
	static volatile int16_t x619 = -480;
	int16_t x620 = 384;
	int32_t t115 = 5;

    t115 = (((x617-x618)*x619)>x620);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x621 = -2;
	volatile int8_t x622 = INT8_MAX;
	int32_t x624 = -1;
	int32_t t116 = -1603821;

    t116 = (((x621-x622)*x623)>x624);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x637 = 301164840U;
	volatile uint16_t x638 = 14029U;
	int32_t x639 = 3;

    t117 = (((x637-x638)*x639)>x640);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x649 = INT64_MIN;
	int8_t x650 = 0;
	uint32_t x652 = 3601930U;
	int32_t t118 = 14059;

    t118 = (((x649-x650)*x651)>x652);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x657 = 1732574LLU;
	int16_t x658 = -1;
	volatile uint8_t x659 = 3U;
	int64_t x660 = 107963487020606LL;

    t119 = (((x657-x658)*x659)>x660);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x666 = -1;
	uint32_t x668 = 2063282914U;
	volatile int32_t t120 = 19589;

    t120 = (((x665-x666)*x667)>x668);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x673 = UINT64_MAX;
	int64_t x674 = -1LL;
	uint64_t x675 = UINT64_MAX;
	uint64_t x676 = 432LLU;
	int32_t t121 = -114436981;

    t121 = (((x673-x674)*x675)>x676);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x677 = -1LL;
	uint16_t x678 = 99U;
	int32_t x679 = INT32_MIN;
	int64_t x680 = INT64_MAX;
	volatile int32_t t122 = -33491;

    t122 = (((x677-x678)*x679)>x680);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x681 = 50U;
	static volatile int64_t x683 = 112667LL;
	int32_t t123 = 12;

    t123 = (((x681-x682)*x683)>x684);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x685 = -1LL;
	int32_t x686 = INT32_MIN;

    t124 = (((x685-x686)*x687)>x688);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x693 = -1;
	int16_t x694 = INT16_MIN;
	uint64_t x695 = 0LLU;
	int16_t x696 = INT16_MIN;
	int32_t t125 = 969039901;

    t125 = (((x693-x694)*x695)>x696);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x698 = -290604760LL;
	uint32_t x699 = 461280U;
	uint16_t x700 = 20U;
	volatile int32_t t126 = -6728935;

    t126 = (((x697-x698)*x699)>x700);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x702 = 6U;
	int16_t x703 = INT16_MIN;
	int8_t x704 = INT8_MAX;
	volatile int32_t t127 = -20;

    t127 = (((x701-x702)*x703)>x704);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x705 = 4LLU;
	int64_t x706 = INT64_MAX;
	volatile int64_t x707 = INT64_MIN;
	static int32_t t128 = 402;

    t128 = (((x705-x706)*x707)>x708);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x709 = -1;
	int16_t x710 = INT16_MIN;
	volatile uint8_t x711 = 4U;
	static volatile int16_t x712 = -1;

    t129 = (((x709-x710)*x711)>x712);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint64_t x713 = 313161668960LLU;
	int64_t x714 = INT64_MIN;
	int64_t x716 = -1LL;
	static int32_t t130 = 821022;

    t130 = (((x713-x714)*x715)>x716);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x726 = 10217421726LL;
	int16_t x727 = INT16_MAX;
	int8_t x728 = 8;
	static volatile int32_t t131 = 8243292;

    t131 = (((x725-x726)*x727)>x728);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x729 = INT16_MIN;
	int16_t x730 = -1;
	int64_t x731 = 200932835711268LL;
	static int64_t x732 = -103330105876LL;
	int32_t t132 = -213;

    t132 = (((x729-x730)*x731)>x732);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x742 = -1991;
	int64_t x743 = -1LL;
	volatile int32_t t133 = -13171765;

    t133 = (((x741-x742)*x743)>x744);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint32_t x745 = UINT32_MAX;
	int32_t x746 = -338;
	int8_t x747 = -1;
	int32_t x748 = -1;
	static volatile int32_t t134 = 7066770;

    t134 = (((x745-x746)*x747)>x748);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x749 = 22287712777194552LL;
	uint16_t x751 = 3U;
	volatile int8_t x752 = INT8_MAX;
	volatile int32_t t135 = 72901;

    t135 = (((x749-x750)*x751)>x752);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x753 = 0;
	int16_t x754 = 1;
	int16_t x755 = INT16_MIN;
	int32_t t136 = 642995;

    t136 = (((x753-x754)*x755)>x756);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x757 = INT64_MIN;
	static int64_t x758 = -978825770510517LL;
	static int8_t x759 = -1;
	int32_t x760 = INT32_MAX;
	volatile int32_t t137 = 301052;

    t137 = (((x757-x758)*x759)>x760);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x765 = INT16_MIN;
	int32_t x766 = INT32_MIN;
	uint64_t x767 = 117LLU;
	volatile int16_t x768 = INT16_MIN;

    t138 = (((x765-x766)*x767)>x768);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x769 = 31;
	int8_t x770 = INT8_MIN;
	uint16_t x771 = UINT16_MAX;
	int16_t x772 = INT16_MAX;
	static volatile int32_t t139 = 7897343;

    t139 = (((x769-x770)*x771)>x772);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile uint32_t x773 = 1487U;
	static uint16_t x774 = 209U;
	uint16_t x775 = UINT16_MAX;
	volatile int32_t t140 = -27678745;

    t140 = (((x773-x774)*x775)>x776);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint64_t x778 = 847361LLU;
	int16_t x779 = 0;
	volatile int32_t t141 = -3205;

    t141 = (((x777-x778)*x779)>x780);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x781 = UINT64_MAX;
	int64_t x782 = -1LL;
	volatile int64_t x784 = -1LL;
	volatile int32_t t142 = -22903909;

    t142 = (((x781-x782)*x783)>x784);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x789 = -13679685LL;
	uint32_t x790 = 0U;
	int32_t x792 = INT32_MIN;
	int32_t t143 = 90858;

    t143 = (((x789-x790)*x791)>x792);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x795 = 203LLU;
	volatile int16_t x796 = INT16_MIN;
	int32_t t144 = 25276244;

    t144 = (((x793-x794)*x795)>x796);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x797 = INT8_MIN;
	int8_t x798 = INT8_MIN;
	int32_t x800 = -1;
	static volatile int32_t t145 = 7;

    t145 = (((x797-x798)*x799)>x800);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x801 = INT8_MAX;
	volatile int16_t x802 = -1108;
	static volatile int32_t x803 = 25509;
	int8_t x804 = INT8_MAX;

    t146 = (((x801-x802)*x803)>x804);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x805 = 4313728260266LL;
	int16_t x806 = INT16_MIN;
	static int16_t x807 = 9360;
	int16_t x808 = INT16_MAX;
	volatile int32_t t147 = -628744;

    t147 = (((x805-x806)*x807)>x808);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint64_t x809 = 52835511848LLU;
	int64_t x810 = INT64_MIN;
	uint8_t x812 = 0U;
	int32_t t148 = -15100736;

    t148 = (((x809-x810)*x811)>x812);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x813 = 0;
	static int8_t x815 = -1;
	volatile int32_t t149 = -391889;

    t149 = (((x813-x814)*x815)>x816);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x817 = INT16_MIN;
	int16_t x818 = 44;
	int16_t x820 = INT16_MIN;
	volatile int32_t t150 = 4881;

    t150 = (((x817-x818)*x819)>x820);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x825 = INT16_MAX;
	uint32_t x826 = UINT32_MAX;
	uint8_t x827 = 1U;
	uint64_t x828 = 2950597900LLU;
	int32_t t151 = -142732;

    t151 = (((x825-x826)*x827)>x828);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x829 = INT8_MIN;
	int16_t x832 = -671;
	static int32_t t152 = -223323;

    t152 = (((x829-x830)*x831)>x832);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x833 = 1LL;
	uint16_t x834 = 8016U;
	int32_t x835 = -81120191;
	uint8_t x836 = 110U;
	volatile int32_t t153 = -9;

    t153 = (((x833-x834)*x835)>x836);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x837 = INT16_MIN;
	uint32_t x838 = 362319953U;
	static uint16_t x839 = 84U;
	int16_t x840 = INT16_MAX;
	int32_t t154 = -15;

    t154 = (((x837-x838)*x839)>x840);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x841 = UINT64_MAX;
	int8_t x842 = -1;
	int64_t x843 = INT64_MIN;
	int16_t x844 = INT16_MIN;
	volatile int32_t t155 = -13;

    t155 = (((x841-x842)*x843)>x844);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x845 = INT16_MIN;
	volatile int8_t x846 = INT8_MIN;
	int32_t x847 = -138;
	int32_t x848 = 22676385;
	int32_t t156 = -462270656;

    t156 = (((x845-x846)*x847)>x848);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x849 = 0;
	uint16_t x850 = UINT16_MAX;
	volatile uint64_t x852 = 312646778577LLU;

    t157 = (((x849-x850)*x851)>x852);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x853 = -1LL;
	uint32_t x854 = 31438089U;
	uint64_t x855 = UINT64_MAX;
	static uint64_t x856 = 240116893LLU;
	int32_t t158 = -1659147;

    t158 = (((x853-x854)*x855)>x856);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x861 = -1;
	uint32_t x862 = 121048653U;
	int16_t x863 = INT16_MIN;
	volatile int16_t x864 = 11;

    t159 = (((x861-x862)*x863)>x864);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x865 = INT64_MAX;
	static volatile int32_t t160 = -4993;

    t160 = (((x865-x866)*x867)>x868);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x873 = 138796;
	volatile int16_t x874 = -53;
	int16_t x875 = -1;
	static uint32_t x876 = 10U;
	int32_t t161 = -700;

    t161 = (((x873-x874)*x875)>x876);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x877 = INT16_MAX;
	static uint16_t x880 = 1421U;
	volatile int32_t t162 = -568643394;

    t162 = (((x877-x878)*x879)>x880);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x881 = 0U;
	int32_t x882 = 19361464;
	int8_t x883 = -1;
	static uint64_t x884 = UINT64_MAX;
	int32_t t163 = 1562309;

    t163 = (((x881-x882)*x883)>x884);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x886 = 35721391833194532LLU;

    t164 = (((x885-x886)*x887)>x888);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x890 = INT16_MIN;
	uint32_t x891 = 105810U;
	volatile int32_t t165 = 56027;

    t165 = (((x889-x890)*x891)>x892);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x893 = INT64_MIN;
	uint32_t x896 = UINT32_MAX;
	static int32_t t166 = 49264;

    t166 = (((x893-x894)*x895)>x896);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x897 = -1;
	volatile uint64_t x898 = UINT64_MAX;
	int32_t x900 = INT32_MAX;
	static volatile int32_t t167 = 18537545;

    t167 = (((x897-x898)*x899)>x900);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x901 = 1U;
	static uint16_t x902 = UINT16_MAX;
	int8_t x903 = 3;
	volatile int64_t x904 = -1LL;
	volatile int32_t t168 = 0;

    t168 = (((x901-x902)*x903)>x904);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x917 = INT16_MAX;
	static int16_t x918 = INT16_MAX;
	int32_t x919 = -1;
	uint32_t x920 = 35447881U;
	volatile int32_t t169 = -3928;

    t169 = (((x917-x918)*x919)>x920);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x921 = -1;
	int32_t x922 = -1;
	static int32_t x923 = 17;
	int16_t x924 = 14;
	static volatile int32_t t170 = -9300676;

    t170 = (((x921-x922)*x923)>x924);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x925 = INT32_MIN;
	static volatile int8_t x926 = -25;
	static int16_t x927 = 1;
	int64_t x928 = INT64_MAX;
	volatile int32_t t171 = 13;

    t171 = (((x925-x926)*x927)>x928);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x937 = UINT32_MAX;
	uint16_t x939 = 4038U;
	static int32_t t172 = 2300;

    t172 = (((x937-x938)*x939)>x940);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x945 = INT32_MIN;
	volatile int64_t x946 = INT64_MIN;
	int32_t t173 = -1189;

    t173 = (((x945-x946)*x947)>x948);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x949 = INT16_MAX;
	int8_t x950 = INT8_MIN;
	volatile int8_t x952 = 0;
	volatile int32_t t174 = -17604083;

    t174 = (((x949-x950)*x951)>x952);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x953 = 36U;
	int8_t x954 = INT8_MIN;
	int16_t x955 = INT16_MIN;
	static uint64_t x956 = 3153248010838272292LLU;
	int32_t t175 = 62853;

    t175 = (((x953-x954)*x955)>x956);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x957 = UINT64_MAX;
	static int8_t x959 = INT8_MIN;
	int16_t x960 = INT16_MIN;
	int32_t t176 = -2300;

    t176 = (((x957-x958)*x959)>x960);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x961 = -1;
	volatile int64_t x963 = 0LL;
	volatile int32_t x964 = -1;
	static int32_t t177 = 7789425;

    t177 = (((x961-x962)*x963)>x964);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x973 = -1;
	uint16_t x974 = 14900U;
	int8_t x975 = -6;
	int32_t x976 = INT32_MAX;
	volatile int32_t t178 = 1895353;

    t178 = (((x973-x974)*x975)>x976);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x978 = 1945471LL;
	uint8_t x979 = 0U;
	int64_t x980 = 19870519LL;

    t179 = (((x977-x978)*x979)>x980);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x982 = UINT64_MAX;
	volatile int32_t x983 = INT32_MIN;
	static int8_t x984 = INT8_MIN;
	int32_t t180 = 39947190;

    t180 = (((x981-x982)*x983)>x984);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint64_t x985 = UINT64_MAX;
	volatile int16_t x986 = 2181;
	static int16_t x987 = -1;
	uint8_t x988 = UINT8_MAX;
	volatile int32_t t181 = 88273;

    t181 = (((x985-x986)*x987)>x988);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x993 = -1;
	static int16_t x994 = -1;
	static volatile uint16_t x995 = UINT16_MAX;
	int64_t x996 = -499279LL;
	int32_t t182 = 1496;

    t182 = (((x993-x994)*x995)>x996);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x1001 = 52608855U;
	static uint64_t x1002 = 1046136438193LLU;
	static volatile int32_t x1004 = -1;
	int32_t t183 = 8;

    t183 = (((x1001-x1002)*x1003)>x1004);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile uint16_t x1010 = 19663U;
	static volatile uint32_t x1011 = 16249U;
	uint64_t x1012 = 13286122398LLU;
	static volatile int32_t t184 = 3;

    t184 = (((x1009-x1010)*x1011)>x1012);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x1014 = 91U;
	int64_t x1015 = INT64_MIN;
	int32_t x1016 = 34194823;
	static int32_t t185 = -9936430;

    t185 = (((x1013-x1014)*x1015)>x1016);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x1017 = UINT8_MAX;
	static int8_t x1018 = 11;
	uint8_t x1020 = 6U;
	volatile int32_t t186 = -438;

    t186 = (((x1017-x1018)*x1019)>x1020);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x1021 = -1;
	int16_t x1023 = 6081;
	static volatile uint16_t x1024 = 1176U;
	static volatile int32_t t187 = -40;

    t187 = (((x1021-x1022)*x1023)>x1024);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1025 = -42;
	volatile int64_t x1027 = 4602LL;
	volatile int16_t x1028 = -1;
	int32_t t188 = 31295159;

    t188 = (((x1025-x1026)*x1027)>x1028);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint8_t x1029 = UINT8_MAX;
	uint8_t x1031 = 3U;
	volatile int32_t t189 = 0;

    t189 = (((x1029-x1030)*x1031)>x1032);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint8_t x1054 = 8U;
	int16_t x1055 = INT16_MIN;
	uint32_t x1056 = 2539526U;

    t190 = (((x1053-x1054)*x1055)>x1056);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x1058 = INT8_MIN;
	int8_t x1059 = INT8_MIN;
	int16_t x1060 = -1;
	static int32_t t191 = 42;

    t191 = (((x1057-x1058)*x1059)>x1060);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x1061 = INT16_MAX;
	static int8_t x1062 = -1;
	int64_t x1063 = 326812244LL;
	static int64_t x1064 = -117LL;
	static int32_t t192 = 4;

    t192 = (((x1061-x1062)*x1063)>x1064);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x1069 = INT64_MAX;
	int64_t x1070 = 674208901259109LL;
	int16_t x1072 = INT16_MAX;
	static volatile int32_t t193 = -1080221;

    t193 = (((x1069-x1070)*x1071)>x1072);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x1077 = INT32_MAX;
	volatile uint8_t x1078 = UINT8_MAX;
	int16_t x1079 = 1;
	volatile int32_t x1080 = -593540340;
	int32_t t194 = 51917;

    t194 = (((x1077-x1078)*x1079)>x1080);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint32_t x1081 = UINT32_MAX;
	int32_t x1083 = INT32_MIN;
	uint32_t x1084 = 1U;
	static volatile int32_t t195 = 0;

    t195 = (((x1081-x1082)*x1083)>x1084);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint8_t x1086 = 104U;
	int8_t x1088 = 0;
	int32_t t196 = -27086830;

    t196 = (((x1085-x1086)*x1087)>x1088);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1089 = INT32_MIN;
	static uint32_t x1090 = UINT32_MAX;
	int64_t x1091 = -1LL;
	int64_t x1092 = -1LL;
	int32_t t197 = -90404880;

    t197 = (((x1089-x1090)*x1091)>x1092);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint64_t x1093 = 74126877191112LLU;
	volatile uint32_t x1095 = 50U;
	uint64_t x1096 = 21838151293267121LLU;

    t198 = (((x1093-x1094)*x1095)>x1096);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x1101 = UINT16_MAX;
	int16_t x1103 = INT16_MIN;
	int16_t x1104 = -3620;
	volatile int32_t t199 = 27;

    t199 = (((x1101-x1102)*x1103)>x1104);

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


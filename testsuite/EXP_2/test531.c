
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

volatile uint16_t x8 = 3953U;
int16_t x10 = INT16_MIN;
int32_t x11 = -5614;
int64_t x12 = INT64_MIN;
volatile int64_t t2 = 170906LL;
int64_t x16 = INT64_MAX;
static volatile int8_t x21 = INT8_MAX;
static int32_t x26 = -30;
volatile int32_t x28 = INT32_MAX;
static int16_t x30 = -1;
static int32_t x32 = INT32_MIN;
volatile int32_t t8 = 1;
int32_t x45 = 45;
int8_t x48 = INT8_MAX;
uint32_t x59 = 2U;
int32_t t14 = -25315;
int8_t x70 = 5;
int64_t x72 = INT64_MIN;
static uint64_t x79 = UINT64_MAX;
int64_t t18 = 2541101067098250073LL;
int64_t x86 = -17LL;
static volatile int8_t x92 = 26;
volatile int32_t t20 = -163;
int8_t x103 = -1;
static int32_t x109 = INT32_MAX;
volatile int32_t t23 = 56;
static int64_t x119 = -1LL;
volatile int8_t x124 = -1;
int64_t x142 = INT64_MAX;
uint32_t x150 = 1518299645U;
uint16_t x151 = 1651U;
volatile int64_t x152 = INT64_MIN;
static uint8_t x154 = 1U;
volatile int64_t x157 = INT64_MIN;
uint64_t x159 = 1569LLU;
volatile int32_t t34 = INT32_MIN;
int16_t x164 = -1;
uint64_t x166 = 6890773491536LLU;
int64_t x167 = 715311191LL;
volatile uint16_t x172 = 94U;
int64_t x184 = INT64_MAX;
int64_t t39 = INT64_MAX;
int64_t x185 = INT64_MIN;
int64_t t40 = -1924393320408524LL;
volatile int16_t x194 = -1;
uint8_t x198 = 3U;
static int32_t x217 = -12;
int16_t x218 = -251;
int16_t x227 = INT16_MIN;
volatile int64_t t48 = -171736733595902LL;
uint64_t x238 = 5334663840LLU;
int8_t x241 = INT8_MIN;
int16_t x246 = INT16_MIN;
volatile uint32_t x249 = 508U;
int32_t t53 = -267012;
int64_t x253 = INT64_MIN;
int64_t x262 = 7198152363LL;
static uint16_t x263 = UINT16_MAX;
volatile uint32_t t56 = UINT32_MAX;
int8_t x271 = INT8_MIN;
int64_t x279 = 2LL;
uint16_t x298 = UINT16_MAX;
int16_t x303 = INT16_MAX;
int32_t x305 = 1991994;
uint8_t x307 = UINT8_MAX;
int64_t x308 = 20783LL;
int64_t x313 = INT64_MIN;
int16_t x321 = -1;
uint32_t x322 = 1U;
int64_t x323 = INT64_MIN;
int64_t x328 = INT64_MIN;
static int64_t t70 = 285462611418951687LL;
uint32_t x336 = 121338723U;
uint32_t t71 = 474941U;
volatile uint8_t x341 = 1U;
static int32_t t73 = 809;
int32_t x348 = INT32_MIN;
int32_t x355 = 184055829;
uint16_t x356 = 5U;
int8_t x359 = INT8_MIN;
static volatile int32_t x361 = -1196872;
static volatile uint16_t x363 = 227U;
volatile int32_t t78 = -40072;
volatile int64_t x371 = -1LL;
uint64_t x375 = 14841458454LLU;
static int32_t x376 = 595796;
static int32_t x389 = INT32_MAX;
int8_t x391 = INT8_MAX;
volatile uint16_t x401 = 13608U;
int32_t x403 = INT32_MAX;
int16_t x404 = -1;
uint16_t x411 = UINT16_MAX;
int32_t t87 = -28;
int64_t x419 = INT64_MAX;
int16_t x425 = INT16_MAX;
uint16_t x427 = 25U;
static volatile int8_t x430 = INT8_MIN;
uint32_t t93 = UINT32_MAX;
int8_t x447 = -1;
int8_t x449 = -44;
int64_t x474 = INT64_MAX;
volatile int16_t x479 = INT16_MIN;
volatile uint8_t x484 = 0U;
int16_t x505 = INT16_MAX;
static int32_t x513 = 1669;
static int32_t t107 = INT32_MAX;
static volatile uint64_t x528 = 226636LLU;
volatile int8_t x534 = -7;
volatile uint32_t x547 = 13845U;
int8_t x568 = INT8_MIN;
uint16_t x572 = 1U;
volatile int32_t x576 = -1;
static int32_t x577 = INT32_MIN;
int32_t t115 = 220480757;
uint16_t x582 = UINT16_MAX;
uint64_t x585 = UINT64_MAX;
int64_t x593 = INT64_MIN;
volatile uint16_t x601 = 15U;
uint16_t x615 = 158U;
int8_t x617 = 0;
int16_t x618 = INT16_MIN;
uint64_t t124 = UINT64_MAX;
static int16_t x625 = INT16_MAX;
int16_t x632 = INT16_MIN;
int64_t x637 = INT64_MAX;
int16_t x646 = INT16_MAX;
int64_t x648 = INT64_MIN;
volatile int64_t t130 = 464733LL;
uint8_t x654 = 44U;
int32_t t131 = -765005603;
uint64_t x662 = 3106117339450219LLU;
int32_t t134 = INT32_MAX;
static int64_t x671 = -1LL;
uint8_t x674 = UINT8_MAX;
static int16_t x677 = 1837;
static int32_t t137 = 244387890;
uint64_t x682 = 42199518402279LLU;
int16_t x684 = -2;
static int32_t t138 = 271;
int8_t x692 = INT8_MIN;
static int32_t x696 = -1;
volatile uint64_t x703 = UINT64_MAX;
int64_t x707 = -1LL;
int8_t x708 = 5;
uint8_t x709 = 0U;
uint32_t x710 = 2313352U;
uint32_t x711 = 200483U;
int16_t x713 = INT16_MIN;
int32_t x720 = -198;
int32_t t147 = 400281512;
int16_t x721 = INT16_MAX;
volatile int16_t x726 = -1;
int64_t x728 = 13901144406LL;
int16_t x730 = 1;
volatile uint64_t x732 = 5206090245LLU;
static volatile int64_t x737 = 8976146LL;
uint64_t t152 = 10003471164749041LLU;
static volatile uint16_t x743 = 1U;
int8_t x750 = -49;
uint16_t x751 = UINT16_MAX;
int8_t x752 = INT8_MIN;
static int16_t x759 = -239;
volatile int16_t x761 = INT16_MIN;
int32_t x781 = INT32_MIN;
int64_t x794 = -1LL;
static int16_t x797 = INT16_MAX;
static int32_t x799 = INT32_MIN;
int32_t x800 = 49859;
int32_t x806 = 9606;
int8_t x808 = INT8_MAX;
volatile int64_t x834 = -6LL;
static uint32_t x838 = 788436U;
uint64_t x839 = 2805683023327459768LLU;
int64_t x840 = INT64_MIN;
static uint16_t x842 = UINT16_MAX;
int16_t x853 = INT16_MIN;
volatile int32_t t174 = -990;
volatile int16_t x859 = -1;
volatile int32_t t176 = -415940944;
static int16_t x871 = -1;
int64_t x872 = -93193843LL;
volatile int64_t t177 = -1386536991LL;
volatile uint32_t x875 = UINT32_MAX;
static int8_t x879 = 0;
static volatile int32_t t180 = -2;
volatile int64_t t182 = INT64_MAX;
int16_t x902 = INT16_MAX;
uint32_t x903 = 22461U;
int32_t t184 = -2;
int64_t x905 = 0LL;
int32_t x914 = INT32_MIN;
static int32_t t188 = 404;
uint8_t x927 = 0U;
int32_t t189 = -13029192;
int32_t x945 = 127;
int8_t x958 = 0;
static int8_t x959 = INT8_MIN;
volatile int32_t t196 = 3566938;
int32_t t197 = 3350226;
int8_t x969 = INT8_MIN;
int64_t x978 = -190914463LL;


void f0(void) {
    	volatile int64_t x1 = -1LL;
	volatile int64_t x2 = -1LL;
	int8_t x3 = INT8_MIN;
	volatile uint64_t x4 = 7975672002618797603LLU;
	volatile uint64_t t0 = 44524982LLU;

    t0 = ((x1<=(x2*x3))|x4);

    if (t0 != 7975672002618797603LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 4U;
	int64_t x6 = -1LL;
	int32_t x7 = INT32_MIN;
	static int32_t t1 = 1;

    t1 = ((x5<=(x6*x7))|x8);

    if (t1 != 3953) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x9 = UINT8_MAX;

    t2 = ((x9<=(x10*x11))|x12);

    if (t2 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x13 = 0;
	int16_t x14 = INT16_MIN;
	volatile int16_t x15 = 0;
	int64_t t3 = INT64_MAX;

    t3 = ((x13<=(x14*x15))|x16);

    if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MIN;
	uint16_t x18 = 7049U;
	volatile int8_t x19 = INT8_MIN;
	int64_t x20 = INT64_MAX;
	int64_t t4 = INT64_MAX;

    t4 = ((x17<=(x18*x19))|x20);

    if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x22 = -1LL;
	int8_t x23 = INT8_MAX;
	static int16_t x24 = -161;
	int32_t t5 = 2820;

    t5 = ((x21<=(x22*x23))|x24);

    if (t5 != -161) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x25 = INT8_MIN;
	uint8_t x27 = UINT8_MAX;
	volatile int32_t t6 = INT32_MAX;

    t6 = ((x25<=(x26*x27))|x28);

    if (t6 != INT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = -1;
	int32_t x31 = -1;
	volatile int32_t t7 = -466;

    t7 = ((x29<=(x30*x31))|x32);

    if (t7 != -2147483647) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = -1817284535LL;
	volatile uint8_t x34 = 18U;
	volatile uint32_t x35 = 7470710U;
	int8_t x36 = -1;

    t8 = ((x33<=(x34*x35))|x36);

    if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = 8133;
	int16_t x38 = INT16_MAX;
	uint16_t x39 = 12535U;
	int32_t x40 = INT32_MAX;
	volatile int32_t t9 = INT32_MAX;

    t9 = ((x37<=(x38*x39))|x40);

    if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x41 = INT32_MIN;
	static uint32_t x42 = 15115937U;
	volatile int16_t x43 = -10204;
	uint8_t x44 = 1U;
	int32_t t10 = 74624;

    t10 = ((x41<=(x42*x43))|x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x46 = -1;
	volatile int64_t x47 = 279LL;
	int32_t t11 = 56;

    t11 = ((x45<=(x46*x47))|x48);

    if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x49 = -233;
	uint64_t x50 = UINT64_MAX;
	int64_t x51 = -656382204575069205LL;
	int64_t x52 = INT64_MIN;
	int64_t t12 = INT64_MIN;

    t12 = ((x49<=(x50*x51))|x52);

    if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = INT16_MAX;
	uint8_t x54 = 29U;
	uint8_t x55 = 0U;
	volatile uint8_t x56 = UINT8_MAX;
	int32_t t13 = -462;

    t13 = ((x53<=(x54*x55))|x56);

    if (t13 != 255) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint64_t x57 = 121720686438778782LLU;
	int32_t x58 = -1;
	int16_t x60 = INT16_MAX;

    t14 = ((x57<=(x58*x59))|x60);

    if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint64_t x65 = UINT64_MAX;
	volatile uint64_t x66 = 111569735567LLU;
	uint16_t x67 = 0U;
	int8_t x68 = 0;
	static int32_t t15 = -1347775;

    t15 = ((x65<=(x66*x67))|x68);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x69 = INT16_MIN;
	int16_t x71 = -166;
	int64_t t16 = -92727436LL;

    t16 = ((x69<=(x70*x71))|x72);

    if (t16 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x73 = 127U;
	volatile int8_t x74 = INT8_MIN;
	uint32_t x75 = UINT32_MAX;
	int32_t x76 = INT32_MIN;
	int32_t t17 = -149527;

    t17 = ((x73<=(x74*x75))|x76);

    if (t17 != -2147483647) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x77 = INT16_MIN;
	int64_t x78 = INT64_MIN;
	int64_t x80 = -54124LL;

    t18 = ((x77<=(x78*x79))|x80);

    if (t18 != -54124LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x85 = INT64_MAX;
	static volatile int8_t x87 = INT8_MAX;
	int16_t x88 = INT16_MAX;
	volatile int32_t t19 = -3285831;

    t19 = ((x85<=(x86*x87))|x88);

    if (t19 != 32767) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint64_t x89 = 3135117LLU;
	volatile int8_t x90 = -1;
	static uint16_t x91 = 1053U;

    t20 = ((x89<=(x90*x91))|x92);

    if (t20 != 27) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x93 = -1148;
	int16_t x94 = INT16_MIN;
	int16_t x95 = INT16_MIN;
	static int8_t x96 = INT8_MIN;
	static int32_t t21 = 0;

    t21 = ((x93<=(x94*x95))|x96);

    if (t21 != -127) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x101 = 20U;
	static volatile uint64_t x102 = UINT64_MAX;
	uint8_t x104 = UINT8_MAX;
	volatile int32_t t22 = -3702;

    t22 = ((x101<=(x102*x103))|x104);

    if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint64_t x110 = 83040434LLU;
	int32_t x111 = -2489136;
	uint16_t x112 = 28565U;

    t23 = ((x109<=(x110*x111))|x112);

    if (t23 != 28565) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x117 = INT64_MAX;
	int32_t x118 = INT32_MAX;
	int16_t x120 = 1;
	volatile int32_t t24 = 20831;

    t24 = ((x117<=(x118*x119))|x120);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint64_t x121 = 722871400882770LLU;
	int32_t x122 = -33038955;
	uint64_t x123 = 1023LLU;
	static int32_t t25 = 16637;

    t25 = ((x121<=(x122*x123))|x124);

    if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x125 = INT64_MIN;
	uint64_t x126 = UINT64_MAX;
	static volatile uint16_t x127 = 55U;
	volatile int32_t x128 = INT32_MIN;
	volatile int32_t t26 = -343849;

    t26 = ((x125<=(x126*x127))|x128);

    if (t26 != -2147483647) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint32_t x129 = 1283U;
	volatile uint64_t x130 = 522246774722LLU;
	int64_t x131 = -8LL;
	uint16_t x132 = UINT16_MAX;
	int32_t t27 = 306;

    t27 = ((x129<=(x130*x131))|x132);

    if (t27 != 65535) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x133 = INT8_MAX;
	uint16_t x134 = 14817U;
	int32_t x135 = 48174;
	volatile uint32_t x136 = 28U;
	volatile uint32_t t28 = 4085576U;

    t28 = ((x133<=(x134*x135))|x136);

    if (t28 != 29U) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x137 = 104LLU;
	uint32_t x138 = 17U;
	uint16_t x139 = UINT16_MAX;
	int8_t x140 = INT8_MIN;
	volatile int32_t t29 = -1;

    t29 = ((x137<=(x138*x139))|x140);

    if (t29 != -127) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x141 = INT32_MAX;
	static uint64_t x143 = 44LLU;
	static volatile uint32_t x144 = 9126679U;
	volatile uint32_t t30 = 26310U;

    t30 = ((x141<=(x142*x143))|x144);

    if (t30 != 9126679U) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x145 = -669LL;
	int8_t x146 = INT8_MIN;
	static uint8_t x147 = UINT8_MAX;
	int32_t x148 = -1;
	volatile int32_t t31 = -3;

    t31 = ((x145<=(x146*x147))|x148);

    if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x149 = INT16_MIN;
	int64_t t32 = INT64_MIN;

    t32 = ((x149<=(x150*x151))|x152);

    if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x153 = -542LL;
	static uint8_t x155 = UINT8_MAX;
	volatile int16_t x156 = -2;
	volatile int32_t t33 = -115;

    t33 = ((x153<=(x154*x155))|x156);

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x158 = 8325213LL;
	int32_t x160 = INT32_MIN;

    t34 = ((x157<=(x158*x159))|x160);

    if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x161 = INT8_MIN;
	static uint64_t x162 = UINT64_MAX;
	int16_t x163 = INT16_MIN;
	volatile int32_t t35 = -52102;

    t35 = ((x161<=(x162*x163))|x164);

    if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x165 = 84321615LL;
	static uint64_t x168 = UINT64_MAX;
	volatile uint64_t t36 = UINT64_MAX;

    t36 = ((x165<=(x166*x167))|x168);

    if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x169 = 89515411;
	int16_t x170 = 1;
	volatile int32_t x171 = -426;
	volatile int32_t t37 = -101;

    t37 = ((x169<=(x170*x171))|x172);

    if (t37 != 94) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x177 = UINT8_MAX;
	int64_t x178 = 225LL;
	volatile int8_t x179 = INT8_MAX;
	uint64_t x180 = 26448205193LLU;
	uint64_t t38 = 436037845235139LLU;

    t38 = ((x177<=(x178*x179))|x180);

    if (t38 != 26448205193LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x181 = 3387869;
	volatile int16_t x182 = INT16_MIN;
	int16_t x183 = 409;

    t39 = ((x181<=(x182*x183))|x184);

    if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x186 = INT64_MIN;
	uint8_t x187 = 0U;
	int64_t x188 = INT64_MIN;

    t40 = ((x185<=(x186*x187))|x188);

    if (t40 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x189 = UINT8_MAX;
	int8_t x190 = 0;
	uint8_t x191 = 14U;
	volatile int64_t x192 = INT64_MAX;
	int64_t t41 = INT64_MAX;

    t41 = ((x189<=(x190*x191))|x192);

    if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x193 = INT8_MIN;
	static int32_t x195 = 0;
	int16_t x196 = -884;
	volatile int32_t t42 = -25;

    t42 = ((x193<=(x194*x195))|x196);

    if (t42 != -883) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x197 = -14338;
	volatile int32_t x199 = 133;
	static uint64_t x200 = UINT64_MAX;
	uint64_t t43 = UINT64_MAX;

    t43 = ((x197<=(x198*x199))|x200);

    if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x209 = 17LL;
	static uint64_t x210 = UINT64_MAX;
	int16_t x211 = -133;
	static int64_t x212 = INT64_MIN;
	volatile int64_t t44 = -28LL;

    t44 = ((x209<=(x210*x211))|x212);

    if (t44 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int64_t x213 = 2655268LL;
	static int64_t x214 = 2LL;
	uint16_t x215 = 3U;
	uint8_t x216 = UINT8_MAX;
	int32_t t45 = 656543767;

    t45 = ((x213<=(x214*x215))|x216);

    if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x219 = UINT32_MAX;
	volatile uint8_t x220 = 108U;
	static int32_t t46 = -929535;

    t46 = ((x217<=(x218*x219))|x220);

    if (t46 != 108) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x225 = INT8_MIN;
	uint16_t x226 = 11U;
	volatile int64_t x228 = INT64_MIN;
	volatile int64_t t47 = INT64_MIN;

    t47 = ((x225<=(x226*x227))|x228);

    if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x229 = -25;
	int32_t x230 = 4;
	uint8_t x231 = 1U;
	int64_t x232 = -1LL;

    t48 = ((x229<=(x230*x231))|x232);

    if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x233 = 4708;
	int16_t x234 = INT16_MIN;
	int16_t x235 = -13;
	static int32_t x236 = INT32_MIN;
	int32_t t49 = 229988;

    t49 = ((x233<=(x234*x235))|x236);

    if (t49 != -2147483647) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x237 = -1;
	volatile int8_t x239 = -1;
	uint32_t x240 = UINT32_MAX;
	uint32_t t50 = UINT32_MAX;

    t50 = ((x237<=(x238*x239))|x240);

    if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x242 = INT8_MIN;
	int32_t x243 = -18622;
	volatile uint64_t x244 = UINT64_MAX;
	uint64_t t51 = UINT64_MAX;

    t51 = ((x241<=(x242*x243))|x244);

    if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x245 = -1;
	volatile int16_t x247 = INT16_MIN;
	int8_t x248 = INT8_MIN;
	static int32_t t52 = 52784489;

    t52 = ((x245<=(x246*x247))|x248);

    if (t52 != -127) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x250 = -14;
	static uint8_t x251 = 1U;
	int16_t x252 = INT16_MIN;

    t53 = ((x249<=(x250*x251))|x252);

    if (t53 != -32767) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x254 = UINT16_MAX;
	volatile int8_t x255 = -60;
	int8_t x256 = -1;
	int32_t t54 = 14;

    t54 = ((x253<=(x254*x255))|x256);

    if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x257 = -1;
	uint16_t x258 = 1778U;
	uint64_t x259 = 372236460LLU;
	int64_t x260 = 3089224078786LL;
	volatile int64_t t55 = 4324LL;

    t55 = ((x257<=(x258*x259))|x260);

    if (t55 != 3089224078786LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x261 = 11;
	uint32_t x264 = UINT32_MAX;

    t56 = ((x261<=(x262*x263))|x264);

    if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x265 = INT32_MIN;
	uint32_t x266 = 570786U;
	int16_t x267 = -1;
	int64_t x268 = INT64_MIN;
	int64_t t57 = 61LL;

    t57 = ((x265<=(x266*x267))|x268);

    if (t57 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x269 = -144310;
	static int16_t x270 = INT16_MIN;
	uint64_t x272 = 979LLU;
	volatile uint64_t t58 = 6810066741LLU;

    t58 = ((x269<=(x270*x271))|x272);

    if (t58 != 979LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x273 = -1;
	static int64_t x274 = -1LL;
	volatile int8_t x275 = 3;
	static int32_t x276 = -1;
	int32_t t59 = 16092501;

    t59 = ((x273<=(x274*x275))|x276);

    if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x277 = -2;
	int16_t x278 = INT16_MAX;
	static int8_t x280 = INT8_MAX;
	int32_t t60 = 881;

    t60 = ((x277<=(x278*x279))|x280);

    if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x281 = 126;
	uint32_t x282 = 396326U;
	uint64_t x283 = 0LLU;
	int64_t x284 = INT64_MIN;
	int64_t t61 = INT64_MIN;

    t61 = ((x281<=(x282*x283))|x284);

    if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x289 = 1;
	int8_t x290 = -59;
	uint8_t x291 = UINT8_MAX;
	static uint32_t x292 = UINT32_MAX;
	uint32_t t62 = UINT32_MAX;

    t62 = ((x289<=(x290*x291))|x292);

    if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x293 = 149;
	uint8_t x294 = UINT8_MAX;
	int16_t x295 = -16199;
	int64_t x296 = INT64_MIN;
	int64_t t63 = INT64_MIN;

    t63 = ((x293<=(x294*x295))|x296);

    if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x297 = -1;
	int64_t x299 = -1035987776LL;
	static uint64_t x300 = 3264030553514176546LLU;
	uint64_t t64 = 1LLU;

    t64 = ((x297<=(x298*x299))|x300);

    if (t64 != 3264030553514176546LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int16_t x301 = INT16_MAX;
	int16_t x302 = INT16_MIN;
	static int64_t x304 = INT64_MAX;
	volatile int64_t t65 = INT64_MAX;

    t65 = ((x301<=(x302*x303))|x304);

    if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x306 = -1722;
	int64_t t66 = 391516103862060576LL;

    t66 = ((x305<=(x306*x307))|x308);

    if (t66 != 20783LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile uint64_t x309 = UINT64_MAX;
	int8_t x310 = -7;
	int16_t x311 = -1;
	int16_t x312 = INT16_MIN;
	volatile int32_t t67 = 14034674;

    t67 = ((x309<=(x310*x311))|x312);

    if (t67 != -32768) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x314 = 175864546U;
	int16_t x315 = INT16_MIN;
	uint16_t x316 = 1243U;
	static int32_t t68 = 3532;

    t68 = ((x313<=(x314*x315))|x316);

    if (t68 != 1243) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x324 = -1;
	volatile int32_t t69 = 1965;

    t69 = ((x321<=(x322*x323))|x324);

    if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x325 = INT16_MIN;
	static int16_t x326 = -1;
	volatile int8_t x327 = 1;

    t70 = ((x325<=(x326*x327))|x328);

    if (t70 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x333 = INT64_MAX;
	int64_t x334 = 249957LL;
	int8_t x335 = -1;

    t71 = ((x333<=(x334*x335))|x336);

    if (t71 != 121338723U) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x337 = -1;
	int8_t x338 = -7;
	static int16_t x339 = 0;
	int64_t x340 = -1LL;
	int64_t t72 = -90987LL;

    t72 = ((x337<=(x338*x339))|x340);

    if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x342 = INT8_MAX;
	static uint8_t x343 = 0U;
	int8_t x344 = INT8_MAX;

    t73 = ((x341<=(x342*x343))|x344);

    if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x345 = INT32_MIN;
	int8_t x346 = INT8_MAX;
	uint16_t x347 = 15164U;
	int32_t t74 = 0;

    t74 = ((x345<=(x346*x347))|x348);

    if (t74 != -2147483647) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x349 = 201U;
	static volatile uint32_t x350 = 283462U;
	int16_t x351 = INT16_MAX;
	uint16_t x352 = UINT16_MAX;
	volatile int32_t t75 = 55927622;

    t75 = ((x349<=(x350*x351))|x352);

    if (t75 != 65535) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x353 = -2794335LL;
	static int32_t x354 = -1;
	static int32_t t76 = 32913518;

    t76 = ((x353<=(x354*x355))|x356);

    if (t76 != 5) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x357 = INT16_MIN;
	volatile int16_t x358 = INT16_MIN;
	uint32_t x360 = 6832373U;
	uint32_t t77 = 3U;

    t77 = ((x357<=(x358*x359))|x360);

    if (t77 != 6832373U) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint64_t x362 = 18886834LLU;
	int32_t x364 = -2904432;

    t78 = ((x361<=(x362*x363))|x364);

    if (t78 != -2904432) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x365 = INT32_MIN;
	static int64_t x366 = -930147621636LL;
	static int8_t x367 = 0;
	uint64_t x368 = 23974085LLU;
	volatile uint64_t t79 = 6468434964641121LLU;

    t79 = ((x365<=(x366*x367))|x368);

    if (t79 != 23974085LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x369 = -9302LL;
	int8_t x370 = -1;
	int32_t x372 = INT32_MAX;
	volatile int32_t t80 = INT32_MAX;

    t80 = ((x369<=(x370*x371))|x372);

    if (t80 != INT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x373 = 61738563834024LLU;
	int32_t x374 = INT32_MAX;
	int32_t t81 = 0;

    t81 = ((x373<=(x374*x375))|x376);

    if (t81 != 595797) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x377 = INT32_MIN;
	int8_t x378 = -1;
	volatile int8_t x379 = INT8_MAX;
	volatile int64_t x380 = 1LL;
	volatile int64_t t82 = 19839643313745168LL;

    t82 = ((x377<=(x378*x379))|x380);

    if (t82 != 1LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x390 = -1;
	int8_t x392 = 42;
	volatile int32_t t83 = 1;

    t83 = ((x389<=(x390*x391))|x392);

    if (t83 != 42) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x393 = INT64_MIN;
	static int16_t x394 = -1;
	uint64_t x395 = UINT64_MAX;
	static int16_t x396 = -1;
	volatile int32_t t84 = -6;

    t84 = ((x393<=(x394*x395))|x396);

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x402 = 386917171LL;
	volatile int32_t t85 = -79;

    t85 = ((x401<=(x402*x403))|x404);

    if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x405 = INT64_MIN;
	static int32_t x406 = INT32_MAX;
	int8_t x407 = 0;
	int32_t x408 = INT32_MIN;
	int32_t t86 = -1395089;

    t86 = ((x405<=(x406*x407))|x408);

    if (t86 != -2147483647) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x409 = INT32_MIN;
	int16_t x410 = INT16_MAX;
	volatile uint16_t x412 = 26U;

    t87 = ((x409<=(x410*x411))|x412);

    if (t87 != 27) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x413 = -4705;
	int8_t x414 = -1;
	static int64_t x415 = 358520304642868LL;
	volatile int32_t x416 = INT32_MIN;
	static int32_t t88 = INT32_MIN;

    t88 = ((x413<=(x414*x415))|x416);

    if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint32_t x417 = UINT32_MAX;
	uint64_t x418 = 144994987352LLU;
	int8_t x420 = INT8_MIN;
	volatile int32_t t89 = -7;

    t89 = ((x417<=(x418*x419))|x420);

    if (t89 != -127) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x426 = -1LL;
	int32_t x428 = -1;
	int32_t t90 = 5157094;

    t90 = ((x425<=(x426*x427))|x428);

    if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x429 = 4753761300LL;
	int32_t x431 = -8382897;
	uint32_t x432 = 305997453U;
	static volatile uint32_t t91 = 2U;

    t91 = ((x429<=(x430*x431))|x432);

    if (t91 != 305997453U) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x437 = UINT8_MAX;
	static int32_t x438 = -1;
	volatile int16_t x439 = INT16_MIN;
	int16_t x440 = -1;
	volatile int32_t t92 = -966999715;

    t92 = ((x437<=(x438*x439))|x440);

    if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint8_t x441 = UINT8_MAX;
	volatile int16_t x442 = INT16_MIN;
	static int16_t x443 = -1;
	uint32_t x444 = UINT32_MAX;

    t93 = ((x441<=(x442*x443))|x444);

    if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x445 = 36199489659975LLU;
	volatile uint64_t x446 = UINT64_MAX;
	int8_t x448 = INT8_MIN;
	int32_t t94 = -16072265;

    t94 = ((x445<=(x446*x447))|x448);

    if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x450 = -1;
	int8_t x451 = -1;
	uint16_t x452 = 4U;
	int32_t t95 = 1289;

    t95 = ((x449<=(x450*x451))|x452);

    if (t95 != 5) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x457 = 6410U;
	volatile uint8_t x458 = 1U;
	int8_t x459 = 1;
	int16_t x460 = INT16_MAX;
	volatile int32_t t96 = 0;

    t96 = ((x457<=(x458*x459))|x460);

    if (t96 != 32767) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x469 = UINT8_MAX;
	uint32_t x470 = 32557U;
	uint32_t x471 = 0U;
	int64_t x472 = 386LL;
	static int64_t t97 = 1LL;

    t97 = ((x469<=(x470*x471))|x472);

    if (t97 != 386LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x473 = 1735;
	uint64_t x475 = 212859933LLU;
	static int32_t x476 = INT32_MIN;
	static volatile int32_t t98 = -31360318;

    t98 = ((x473<=(x474*x475))|x476);

    if (t98 != -2147483647) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x477 = -48LL;
	uint32_t x478 = UINT32_MAX;
	int8_t x480 = -29;
	static volatile int32_t t99 = 338;

    t99 = ((x477<=(x478*x479))|x480);

    if (t99 != -29) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x481 = INT64_MIN;
	uint8_t x482 = 0U;
	int8_t x483 = INT8_MIN;
	volatile int32_t t100 = 737741959;

    t100 = ((x481<=(x482*x483))|x484);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x489 = UINT64_MAX;
	static volatile uint16_t x490 = 975U;
	int16_t x491 = -1;
	volatile int64_t x492 = -1LL;
	static int64_t t101 = 0LL;

    t101 = ((x489<=(x490*x491))|x492);

    if (t101 != -1LL) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint8_t x493 = UINT8_MAX;
	int8_t x494 = INT8_MIN;
	uint32_t x495 = 4036240U;
	uint32_t x496 = 139614U;
	static uint32_t t102 = 443405307U;

    t102 = ((x493<=(x494*x495))|x496);

    if (t102 != 139615U) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint16_t x506 = 44U;
	int8_t x507 = INT8_MIN;
	int16_t x508 = INT16_MIN;
	volatile int32_t t103 = -1;

    t103 = ((x505<=(x506*x507))|x508);

    if (t103 != -32768) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x509 = UINT16_MAX;
	int16_t x510 = -1;
	volatile int64_t x511 = 515878536335099LL;
	int16_t x512 = INT16_MAX;
	int32_t t104 = -115;

    t104 = ((x509<=(x510*x511))|x512);

    if (t104 != 32767) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int32_t x514 = 13;
	int32_t x515 = -1;
	uint32_t x516 = 55U;
	volatile uint32_t t105 = 6820156U;

    t105 = ((x513<=(x514*x515))|x516);

    if (t105 != 55U) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x517 = 1;
	int64_t x518 = -1LL;
	int8_t x519 = INT8_MIN;
	uint16_t x520 = 5U;
	int32_t t106 = -55794;

    t106 = ((x517<=(x518*x519))|x520);

    if (t106 != 5) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x521 = 2780LLU;
	volatile int32_t x522 = -1;
	uint8_t x523 = 54U;
	int32_t x524 = INT32_MAX;

    t107 = ((x521<=(x522*x523))|x524);

    if (t107 != INT32_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint32_t x525 = 26761890U;
	uint64_t x526 = 998014LLU;
	static int16_t x527 = -6865;
	uint64_t t108 = 362LLU;

    t108 = ((x525<=(x526*x527))|x528);

    if (t108 != 226637LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x529 = INT16_MIN;
	int32_t x530 = -1;
	int16_t x531 = -1;
	int32_t x532 = INT32_MIN;
	int32_t t109 = 438202;

    t109 = ((x529<=(x530*x531))|x532);

    if (t109 != -2147483647) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x533 = 0;
	static int32_t x535 = 42;
	int32_t x536 = INT32_MIN;
	static int32_t t110 = INT32_MIN;

    t110 = ((x533<=(x534*x535))|x536);

    if (t110 != INT32_MIN) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint32_t x545 = 2U;
	int32_t x546 = INT32_MIN;
	volatile int64_t x548 = 98LL;
	volatile int64_t t111 = -8014LL;

    t111 = ((x545<=(x546*x547))|x548);

    if (t111 != 99LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x565 = INT64_MIN;
	int32_t x566 = 6;
	uint32_t x567 = UINT32_MAX;
	volatile int32_t t112 = -49;

    t112 = ((x565<=(x566*x567))|x568);

    if (t112 != -127) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x569 = -1;
	uint16_t x570 = UINT16_MAX;
	int32_t x571 = -1;
	int32_t t113 = 3574152;

    t113 = ((x569<=(x570*x571))|x572);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x573 = INT16_MIN;
	static volatile int16_t x574 = 5840;
	int32_t x575 = -1;
	static int32_t t114 = -1700363;

    t114 = ((x573<=(x574*x575))|x576);

    if (t114 != -1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint32_t x578 = UINT32_MAX;
	static int32_t x579 = -1;
	int16_t x580 = INT16_MAX;

    t115 = ((x577<=(x578*x579))|x580);

    if (t115 != 32767) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x581 = 5956685;
	static int16_t x583 = INT16_MIN;
	int16_t x584 = 180;
	static volatile int32_t t116 = -15875453;

    t116 = ((x581<=(x582*x583))|x584);

    if (t116 != 180) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x586 = -1LL;
	volatile int32_t x587 = 131;
	int32_t x588 = INT32_MIN;
	volatile int32_t t117 = INT32_MIN;

    t117 = ((x585<=(x586*x587))|x588);

    if (t117 != INT32_MIN) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x589 = INT64_MAX;
	int8_t x590 = -1;
	int16_t x591 = INT16_MIN;
	static uint32_t x592 = 308593837U;
	uint32_t t118 = 23U;

    t118 = ((x589<=(x590*x591))|x592);

    if (t118 != 308593837U) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x594 = -1LL;
	int32_t x595 = -1299;
	volatile int32_t x596 = -317366;
	volatile int32_t t119 = 3;

    t119 = ((x593<=(x594*x595))|x596);

    if (t119 != -317365) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x602 = -36LL;
	uint16_t x603 = UINT16_MAX;
	int8_t x604 = -26;
	static volatile int32_t t120 = -274;

    t120 = ((x601<=(x602*x603))|x604);

    if (t120 != -26) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x605 = INT16_MAX;
	volatile int16_t x606 = INT16_MIN;
	int16_t x607 = INT16_MIN;
	static int8_t x608 = INT8_MAX;
	volatile int32_t t121 = -12670;

    t121 = ((x605<=(x606*x607))|x608);

    if (t121 != 127) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x609 = INT32_MAX;
	int8_t x610 = 9;
	static int8_t x611 = INT8_MAX;
	int64_t x612 = INT64_MAX;
	static volatile int64_t t122 = INT64_MAX;

    t122 = ((x609<=(x610*x611))|x612);

    if (t122 != INT64_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x613 = -460;
	int8_t x614 = -1;
	uint64_t x616 = UINT64_MAX;
	uint64_t t123 = UINT64_MAX;

    t123 = ((x613<=(x614*x615))|x616);

    if (t123 != UINT64_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x619 = INT16_MIN;
	uint64_t x620 = UINT64_MAX;

    t124 = ((x617<=(x618*x619))|x620);

    if (t124 != UINT64_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x621 = -1LL;
	int32_t x622 = INT32_MIN;
	uint32_t x623 = 2U;
	int16_t x624 = INT16_MAX;
	volatile int32_t t125 = 4;

    t125 = ((x621<=(x622*x623))|x624);

    if (t125 != 32767) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint16_t x626 = UINT16_MAX;
	uint32_t x627 = UINT32_MAX;
	uint32_t x628 = 788U;
	volatile uint32_t t126 = 749786U;

    t126 = ((x625<=(x626*x627))|x628);

    if (t126 != 789U) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x629 = 37;
	uint32_t x630 = UINT32_MAX;
	volatile int16_t x631 = INT16_MIN;
	static volatile int32_t t127 = 8552052;

    t127 = ((x629<=(x630*x631))|x632);

    if (t127 != -32767) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x633 = INT8_MAX;
	static uint8_t x634 = UINT8_MAX;
	int16_t x635 = 1770;
	int8_t x636 = 3;
	int32_t t128 = 20053305;

    t128 = ((x633<=(x634*x635))|x636);

    if (t128 != 3) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint16_t x638 = 2U;
	int16_t x639 = INT16_MIN;
	int8_t x640 = 10;
	int32_t t129 = 9;

    t129 = ((x637<=(x638*x639))|x640);

    if (t129 != 10) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x645 = 200109560U;
	uint32_t x647 = UINT32_MAX;

    t130 = ((x645<=(x646*x647))|x648);

    if (t130 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x653 = 9;
	uint8_t x655 = 15U;
	uint16_t x656 = 16373U;

    t131 = ((x653<=(x654*x655))|x656);

    if (t131 != 16373) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x657 = INT64_MIN;
	int16_t x658 = -1;
	uint8_t x659 = 18U;
	static int64_t x660 = INT64_MIN;
	int64_t t132 = 2158680772695851766LL;

    t132 = ((x657<=(x658*x659))|x660);

    if (t132 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x661 = -4;
	int16_t x663 = INT16_MIN;
	int8_t x664 = -1;
	volatile int32_t t133 = 200;

    t133 = ((x661<=(x662*x663))|x664);

    if (t133 != -1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x665 = UINT32_MAX;
	int8_t x666 = 0;
	int64_t x667 = -883846749816419LL;
	int32_t x668 = INT32_MAX;

    t134 = ((x665<=(x666*x667))|x668);

    if (t134 != INT32_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x669 = -1LL;
	volatile uint16_t x670 = 9U;
	volatile int64_t x672 = -1LL;
	static volatile int64_t t135 = 42793LL;

    t135 = ((x669<=(x670*x671))|x672);

    if (t135 != -1LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x673 = -1;
	volatile uint64_t x675 = UINT64_MAX;
	int32_t x676 = INT32_MIN;
	static volatile int32_t t136 = INT32_MIN;

    t136 = ((x673<=(x674*x675))|x676);

    if (t136 != INT32_MIN) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x678 = 24933U;
	uint64_t x679 = 156893921797578157LLU;
	static volatile int16_t x680 = 0;

    t137 = ((x677<=(x678*x679))|x680);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x681 = 204939U;
	int16_t x683 = INT16_MAX;

    t138 = ((x681<=(x682*x683))|x684);

    if (t138 != -1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x685 = -1;
	int16_t x686 = INT16_MIN;
	uint16_t x687 = UINT16_MAX;
	uint32_t x688 = UINT32_MAX;
	volatile uint32_t t139 = UINT32_MAX;

    t139 = ((x685<=(x686*x687))|x688);

    if (t139 != UINT32_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x689 = INT32_MIN;
	int32_t x690 = INT32_MAX;
	volatile int16_t x691 = -1;
	static int32_t t140 = 181349;

    t140 = ((x689<=(x690*x691))|x692);

    if (t140 != -127) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x693 = 20124692901189225LLU;
	static int8_t x694 = 0;
	static volatile uint64_t x695 = UINT64_MAX;
	volatile int32_t t141 = 1;

    t141 = ((x693<=(x694*x695))|x696);

    if (t141 != -1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x697 = UINT64_MAX;
	int8_t x698 = -1;
	uint64_t x699 = UINT64_MAX;
	int16_t x700 = INT16_MIN;
	int32_t t142 = -98;

    t142 = ((x697<=(x698*x699))|x700);

    if (t142 != -32768) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x701 = INT16_MIN;
	volatile int32_t x702 = -1;
	static uint32_t x704 = UINT32_MAX;
	static uint32_t t143 = UINT32_MAX;

    t143 = ((x701<=(x702*x703))|x704);

    if (t143 != UINT32_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x705 = INT32_MIN;
	int8_t x706 = -2;
	int32_t t144 = -27624939;

    t144 = ((x705<=(x706*x707))|x708);

    if (t144 != 5) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int64_t x712 = INT64_MAX;
	volatile int64_t t145 = INT64_MAX;

    t145 = ((x709<=(x710*x711))|x712);

    if (t145 != INT64_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x714 = INT8_MIN;
	uint16_t x715 = UINT16_MAX;
	int8_t x716 = INT8_MIN;
	volatile int32_t t146 = -483194;

    t146 = ((x713<=(x714*x715))|x716);

    if (t146 != -128) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x717 = -1;
	int32_t x718 = -1;
	static uint32_t x719 = 263828134U;

    t147 = ((x717<=(x718*x719))|x720);

    if (t147 != -198) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x722 = 2556U;
	static uint8_t x723 = UINT8_MAX;
	static uint8_t x724 = UINT8_MAX;
	volatile int32_t t148 = 15;

    t148 = ((x721<=(x722*x723))|x724);

    if (t148 != 255) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x725 = INT16_MAX;
	int32_t x727 = 14;
	static volatile int64_t t149 = -48LL;

    t149 = ((x725<=(x726*x727))|x728);

    if (t149 != 13901144406LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static int64_t x729 = 525LL;
	static volatile int16_t x731 = -1482;
	volatile uint64_t t150 = 491707LLU;

    t150 = ((x729<=(x730*x731))|x732);

    if (t150 != 5206090245LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x733 = UINT64_MAX;
	static int32_t x734 = INT32_MAX;
	uint64_t x735 = UINT64_MAX;
	uint32_t x736 = 1U;
	uint32_t t151 = 215807U;

    t151 = ((x733<=(x734*x735))|x736);

    if (t151 != 1U) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x738 = 6678556632521565452LLU;
	static int16_t x739 = INT16_MIN;
	uint64_t x740 = 244930LLU;

    t152 = ((x737<=(x738*x739))|x740);

    if (t152 != 244931LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x741 = 2U;
	int16_t x742 = -1;
	int8_t x744 = INT8_MIN;
	static volatile int32_t t153 = 1233826;

    t153 = ((x741<=(x742*x743))|x744);

    if (t153 != -127) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x745 = -1LL;
	static int8_t x746 = INT8_MAX;
	int8_t x747 = 3;
	static uint16_t x748 = UINT16_MAX;
	int32_t t154 = 105969;

    t154 = ((x745<=(x746*x747))|x748);

    if (t154 != 65535) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x749 = -1;
	static volatile int32_t t155 = -3495;

    t155 = ((x749<=(x750*x751))|x752);

    if (t155 != -128) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x753 = 5148771411461LL;
	uint16_t x754 = UINT16_MAX;
	int64_t x755 = -1LL;
	uint64_t x756 = 116LLU;
	uint64_t t156 = 46275339098360LLU;

    t156 = ((x753<=(x754*x755))|x756);

    if (t156 != 116LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x757 = 0U;
	volatile int16_t x758 = 1;
	static uint64_t x760 = 16534893124LLU;
	volatile uint64_t t157 = 15574827389480037LLU;

    t157 = ((x757<=(x758*x759))|x760);

    if (t157 != 16534893124LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x762 = 113;
	uint8_t x763 = 9U;
	int16_t x764 = -1;
	volatile int32_t t158 = -639533;

    t158 = ((x761<=(x762*x763))|x764);

    if (t158 != -1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x765 = INT64_MIN;
	int64_t x766 = -1LL;
	volatile int16_t x767 = INT16_MIN;
	static volatile int16_t x768 = -99;
	int32_t t159 = 453409;

    t159 = ((x765<=(x766*x767))|x768);

    if (t159 != -99) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x769 = INT8_MIN;
	int8_t x770 = 2;
	int32_t x771 = 1473522;
	int16_t x772 = INT16_MAX;
	volatile int32_t t160 = -75821;

    t160 = ((x769<=(x770*x771))|x772);

    if (t160 != 32767) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x777 = INT64_MIN;
	int64_t x778 = -107018927LL;
	uint32_t x779 = UINT32_MAX;
	int16_t x780 = INT16_MIN;
	static volatile int32_t t161 = -266847;

    t161 = ((x777<=(x778*x779))|x780);

    if (t161 != -32767) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x782 = 7U;
	volatile uint16_t x783 = 1033U;
	volatile int8_t x784 = -16;
	int32_t t162 = -267;

    t162 = ((x781<=(x782*x783))|x784);

    if (t162 != -15) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x789 = 0U;
	static int8_t x790 = INT8_MIN;
	int64_t x791 = -47713507379890LL;
	uint8_t x792 = 7U;
	volatile int32_t t163 = 5353093;

    t163 = ((x789<=(x790*x791))|x792);

    if (t163 != 7) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x793 = 10277U;
	volatile uint8_t x795 = 102U;
	int64_t x796 = -12746566982567LL;
	int64_t t164 = 6912867LL;

    t164 = ((x793<=(x794*x795))|x796);

    if (t164 != -12746566982567LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint64_t x798 = 344420LLU;
	volatile int32_t t165 = 115;

    t165 = ((x797<=(x798*x799))|x800);

    if (t165 != 49859) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x801 = -1;
	uint16_t x802 = UINT16_MAX;
	int8_t x803 = INT8_MIN;
	int16_t x804 = 1;
	volatile int32_t t166 = -1461786;

    t166 = ((x801<=(x802*x803))|x804);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x805 = 119U;
	volatile int8_t x807 = -1;
	volatile int32_t t167 = 525612075;

    t167 = ((x805<=(x806*x807))|x808);

    if (t167 != 127) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x813 = INT32_MAX;
	static int32_t x814 = 489053;
	int8_t x815 = INT8_MAX;
	uint16_t x816 = 317U;
	int32_t t168 = 2209108;

    t168 = ((x813<=(x814*x815))|x816);

    if (t168 != 317) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x821 = INT16_MAX;
	int8_t x822 = INT8_MIN;
	static int32_t x823 = -1;
	int16_t x824 = INT16_MIN;
	int32_t t169 = 133500175;

    t169 = ((x821<=(x822*x823))|x824);

    if (t169 != -32768) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint16_t x829 = 0U;
	int32_t x830 = INT32_MAX;
	int8_t x831 = 0;
	static uint8_t x832 = 2U;
	volatile int32_t t170 = 20217;

    t170 = ((x829<=(x830*x831))|x832);

    if (t170 != 3) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x833 = UINT16_MAX;
	volatile uint8_t x835 = 100U;
	static int32_t x836 = -1;
	static volatile int32_t t171 = -99939;

    t171 = ((x833<=(x834*x835))|x836);

    if (t171 != -1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x837 = 1018758566521159725LLU;
	int64_t t172 = -197878LL;

    t172 = ((x837<=(x838*x839))|x840);

    if (t172 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint16_t x841 = 5927U;
	int16_t x843 = INT16_MIN;
	volatile int64_t x844 = -1LL;
	volatile int64_t t173 = 138233050376337278LL;

    t173 = ((x841<=(x842*x843))|x844);

    if (t173 != -1LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x854 = 1181;
	uint8_t x855 = 23U;
	int16_t x856 = -5442;

    t174 = ((x853<=(x854*x855))|x856);

    if (t174 != -5441) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x857 = 46360049;
	int16_t x858 = INT16_MIN;
	static volatile uint8_t x860 = 26U;
	static volatile int32_t t175 = -37;

    t175 = ((x857<=(x858*x859))|x860);

    if (t175 != 26) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x865 = -1LL;
	volatile int16_t x866 = 7496;
	uint32_t x867 = 264843479U;
	uint8_t x868 = 0U;

    t176 = ((x865<=(x866*x867))|x868);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x869 = 2;
	static uint32_t x870 = 32193U;

    t177 = ((x869<=(x870*x871))|x872);

    if (t177 != -93193843LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint8_t x873 = 1U;
	int8_t x874 = 21;
	int64_t x876 = INT64_MIN;
	volatile int64_t t178 = 248894443235766805LL;

    t178 = ((x873<=(x874*x875))|x876);

    if (t178 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x877 = INT8_MAX;
	static uint32_t x878 = 0U;
	int64_t x880 = 47865384181312LL;
	int64_t t179 = -646LL;

    t179 = ((x877<=(x878*x879))|x880);

    if (t179 != 47865384181312LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint16_t x881 = 2U;
	uint16_t x882 = 0U;
	int32_t x883 = INT32_MAX;
	int8_t x884 = INT8_MIN;

    t180 = ((x881<=(x882*x883))|x884);

    if (t180 != -128) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x885 = 5669;
	int8_t x886 = -29;
	int16_t x887 = 0;
	uint64_t x888 = 5948058535721722LLU;
	static volatile uint64_t t181 = 2918LLU;

    t181 = ((x885<=(x886*x887))|x888);

    if (t181 != 5948058535721722LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x889 = UINT16_MAX;
	uint32_t x890 = UINT32_MAX;
	volatile uint8_t x891 = 0U;
	int64_t x892 = INT64_MAX;

    t182 = ((x889<=(x890*x891))|x892);

    if (t182 != INT64_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x893 = 144912121LLU;
	volatile uint16_t x894 = 8U;
	volatile int64_t x895 = 9851LL;
	static uint32_t x896 = UINT32_MAX;
	volatile uint32_t t183 = UINT32_MAX;

    t183 = ((x893<=(x894*x895))|x896);

    if (t183 != UINT32_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int32_t x901 = 13541;
	static int16_t x904 = -8;

    t184 = ((x901<=(x902*x903))|x904);

    if (t184 != -7) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x906 = INT16_MIN;
	static int8_t x907 = -1;
	uint32_t x908 = 814634446U;
	volatile uint32_t t185 = 505U;

    t185 = ((x905<=(x906*x907))|x908);

    if (t185 != 814634447U) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x913 = -1LL;
	volatile uint32_t x915 = UINT32_MAX;
	static int16_t x916 = INT16_MAX;
	int32_t t186 = -6;

    t186 = ((x913<=(x914*x915))|x916);

    if (t186 != 32767) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x917 = INT32_MAX;
	volatile uint64_t x918 = 364LLU;
	int32_t x919 = 2157422;
	int16_t x920 = -2023;
	static int32_t t187 = 34;

    t187 = ((x917<=(x918*x919))|x920);

    if (t187 != -2023) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint64_t x921 = 15511238LLU;
	uint64_t x922 = 44189871780LLU;
	int16_t x923 = 924;
	int8_t x924 = -1;

    t188 = ((x921<=(x922*x923))|x924);

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x925 = INT8_MIN;
	int32_t x926 = INT32_MIN;
	int16_t x928 = INT16_MIN;

    t189 = ((x925<=(x926*x927))|x928);

    if (t189 != -32767) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x933 = INT32_MAX;
	static volatile uint32_t x934 = 20001976U;
	uint8_t x935 = UINT8_MAX;
	uint8_t x936 = 11U;
	int32_t t190 = -112;

    t190 = ((x933<=(x934*x935))|x936);

    if (t190 != 11) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x941 = 49585268828435LL;
	int16_t x942 = INT16_MAX;
	uint16_t x943 = 7U;
	static uint16_t x944 = 1448U;
	volatile int32_t t191 = -15721957;

    t191 = ((x941<=(x942*x943))|x944);

    if (t191 != 1448) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint32_t x946 = 295U;
	volatile uint16_t x947 = 3U;
	static uint32_t x948 = UINT32_MAX;
	static volatile uint32_t t192 = UINT32_MAX;

    t192 = ((x945<=(x946*x947))|x948);

    if (t192 != UINT32_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x949 = INT16_MIN;
	int8_t x950 = INT8_MIN;
	static volatile int8_t x951 = -1;
	int8_t x952 = INT8_MIN;
	volatile int32_t t193 = 26;

    t193 = ((x949<=(x950*x951))|x952);

    if (t193 != -127) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x953 = 7747567;
	volatile uint8_t x954 = 1U;
	uint64_t x955 = 387320144LLU;
	int16_t x956 = 1;
	int32_t t194 = -7;

    t194 = ((x953<=(x954*x955))|x956);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x957 = -1;
	int64_t x960 = INT64_MIN;
	volatile int64_t t195 = 151650194LL;

    t195 = ((x957<=(x958*x959))|x960);

    if (t195 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x961 = INT64_MIN;
	uint8_t x962 = 79U;
	static uint16_t x963 = 61U;
	int16_t x964 = 1875;

    t196 = ((x961<=(x962*x963))|x964);

    if (t196 != 1875) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x965 = INT16_MIN;
	int8_t x966 = INT8_MAX;
	uint64_t x967 = UINT64_MAX;
	static int16_t x968 = INT16_MIN;

    t197 = ((x965<=(x966*x967))|x968);

    if (t197 != -32767) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x970 = INT16_MIN;
	int64_t x971 = 4730055LL;
	uint32_t x972 = 17660U;
	volatile uint32_t t198 = 834U;

    t198 = ((x969<=(x970*x971))|x972);

    if (t198 != 17660U) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x977 = -1;
	volatile int16_t x979 = -43;
	int32_t x980 = -1;
	int32_t t199 = 1;

    t199 = ((x977<=(x978*x979))|x980);

    if (t199 != -1) { NG(); } else { ; }
	
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


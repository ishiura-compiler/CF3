
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

uint32_t x1 = 9897U;
int16_t x8 = INT16_MIN;
int64_t x10 = -1LL;
static uint8_t x16 = 105U;
uint32_t x17 = UINT32_MAX;
int8_t x25 = 5;
uint32_t x30 = UINT32_MAX;
uint8_t x32 = 9U;
int16_t x45 = INT16_MAX;
uint32_t t8 = 923281U;
uint8_t x61 = 75U;
int64_t x65 = INT64_MIN;
static uint8_t x69 = UINT8_MAX;
volatile int64_t t12 = 81187402514LL;
int8_t x75 = 12;
static volatile int32_t x76 = INT32_MIN;
volatile uint8_t x79 = 3U;
volatile uint16_t x94 = UINT16_MAX;
int16_t x96 = INT16_MAX;
static uint32_t x99 = 122U;
int32_t x108 = -1;
uint32_t x109 = UINT32_MAX;
volatile uint16_t x129 = 7U;
int32_t x137 = INT32_MIN;
int32_t t25 = 1656;
int16_t x142 = -1297;
static uint8_t x143 = 85U;
int32_t x156 = 30707489;
int64_t x157 = -1LL;
volatile uint64_t x158 = 2114LLU;
int64_t x173 = -1LL;
static volatile int32_t x174 = -1;
static int64_t x177 = INT64_MIN;
volatile uint32_t x190 = 37068204U;
uint8_t x206 = UINT8_MAX;
int32_t t38 = -1;
volatile uint8_t x212 = 8U;
int16_t x217 = -10174;
int32_t x226 = INT32_MIN;
volatile int64_t t42 = 30LL;
volatile int32_t t44 = 51;
volatile int16_t x248 = 6391;
uint8_t x254 = 11U;
uint8_t x269 = 112U;
static int64_t x276 = INT64_MIN;
volatile int64_t x280 = 29559679225648LL;
int32_t x284 = INT32_MIN;
static int32_t t52 = 881;
volatile int32_t x296 = INT32_MAX;
int8_t x313 = INT8_MIN;
int16_t x322 = -1;
int32_t x329 = 4030814;
volatile uint32_t x330 = 100U;
int32_t x331 = -122;
volatile int32_t t57 = -7166;
volatile int16_t x347 = -1;
int32_t x350 = INT32_MIN;
int64_t x353 = INT64_MIN;
static volatile uint32_t x359 = 33192901U;
int32_t x362 = INT32_MIN;
uint32_t x365 = 3899U;
int16_t x366 = -4307;
volatile uint32_t x373 = UINT32_MAX;
uint32_t x374 = 14184U;
static volatile int8_t x375 = INT8_MIN;
static uint32_t x380 = 32965947U;
uint16_t x381 = 99U;
uint64_t x398 = 6607722LLU;
int8_t x403 = INT8_MIN;
int32_t t71 = -27259418;
static volatile int64_t t73 = -40341732322527LL;
static int16_t x421 = INT16_MAX;
uint8_t x430 = UINT8_MAX;
volatile int32_t t77 = 26024281;
uint64_t x437 = UINT64_MAX;
uint32_t x440 = 1024138328U;
volatile uint32_t t78 = 99768U;
static int64_t x471 = 8959545LL;
static volatile int32_t t81 = -8851;
static int16_t x473 = INT16_MIN;
uint16_t x474 = UINT16_MAX;
int32_t t84 = -2;
uint16_t x488 = 87U;
static int32_t x490 = -70309976;
int64_t x492 = -1LL;
int64_t t87 = 15LL;
static uint64_t x505 = 26896506432751LLU;
int32_t x523 = 4;
int16_t x524 = INT16_MIN;
int64_t x531 = -452375262705656LL;
int32_t x533 = -202315;
uint32_t x535 = 1451U;
int8_t x536 = 3;
int16_t x540 = 93;
int32_t t93 = -684;
uint64_t x542 = UINT64_MAX;
int32_t x545 = INT32_MIN;
int32_t t96 = -2;
volatile uint16_t x561 = 6372U;
int64_t x564 = -1LL;
int64_t x566 = -124392599LL;
uint16_t x571 = UINT16_MAX;
uint16_t x577 = UINT16_MAX;
int16_t x578 = -1;
static int64_t x587 = INT64_MIN;
uint32_t t101 = 27069774U;
int16_t x590 = INT16_MAX;
volatile int8_t x601 = -1;
volatile int32_t t106 = -625054277;
int16_t x637 = -751;
int32_t t109 = -176787372;
static int64_t x642 = 280504LL;
static uint16_t x643 = 2865U;
uint64_t x646 = UINT64_MAX;
int16_t x655 = INT16_MIN;
static uint64_t x656 = 263043250LLU;
int16_t x663 = 1;
static volatile int64_t x666 = -1LL;
int32_t t117 = 43;
int64_t t120 = -10763296249791LL;
int16_t x708 = INT16_MIN;
uint16_t x710 = 57U;
int8_t x712 = 1;
volatile int64_t x716 = 70232812LL;
static volatile int32_t t124 = -7;
uint64_t x727 = 260640LLU;
uint16_t x729 = 194U;
int8_t x742 = INT8_MIN;
static int16_t x753 = INT16_MAX;
uint64_t x756 = UINT64_MAX;
uint16_t x757 = 473U;
static uint32_t x766 = 52U;
volatile int64_t t131 = 1543934400731LL;
int16_t x775 = INT16_MIN;
volatile int64_t t133 = 5418905095621LL;
static int32_t x785 = -275635850;
int64_t x786 = 46666793LL;
uint64_t x817 = 2659228289574553LLU;
int64_t t139 = -856963626879071LL;
int8_t x832 = INT8_MAX;
int32_t t140 = 882;
volatile int8_t x838 = 26;
int16_t x849 = INT16_MAX;
int64_t x852 = INT64_MIN;
int64_t t143 = 106720284544LL;
int8_t x875 = 3;
uint64_t x876 = 56590LLU;
uint64_t t146 = 251681036802LLU;
volatile int32_t t147 = -1;
int8_t x883 = INT8_MAX;
uint16_t x885 = 11U;
uint32_t x888 = UINT32_MAX;
static int32_t x892 = INT32_MAX;
uint32_t x900 = 400U;
volatile int32_t t154 = -19645601;
int8_t x931 = -45;
int32_t t156 = -10391496;
uint16_t x933 = UINT16_MAX;
volatile int32_t t158 = -8092091;
static int16_t x942 = INT16_MIN;
int64_t x961 = -22744940503LL;
int8_t x966 = INT8_MIN;
int64_t t162 = -573LL;
int32_t x972 = INT32_MIN;
static int32_t x974 = -21260661;
int64_t x976 = 9125783467LL;
static volatile int64_t t164 = 826277520350LL;
int16_t x979 = -13829;
uint64_t x981 = 154846LLU;
volatile uint32_t x984 = 4U;
uint16_t x997 = 6U;
volatile int16_t x1001 = INT16_MAX;
int8_t x1009 = -1;
uint8_t x1016 = UINT8_MAX;
static uint32_t x1018 = 16324U;
static volatile int64_t x1028 = INT64_MIN;
static int64_t x1034 = -1040750319LL;
volatile int32_t t177 = -165976075;
uint16_t x1045 = UINT16_MAX;
static volatile uint64_t t180 = 15LLU;
int16_t x1060 = INT16_MIN;
uint16_t x1063 = 4431U;
int8_t x1073 = INT8_MIN;
uint16_t x1076 = 4692U;
volatile int32_t t187 = -1053760270;
static int16_t x1082 = -1;
volatile int32_t t190 = 241690;
int64_t x1109 = -31LL;
static int8_t x1115 = -20;
int64_t x1119 = INT64_MAX;
int16_t x1125 = INT16_MIN;
static int16_t x1133 = INT16_MAX;


void f0(void) {
    	int32_t x2 = INT32_MAX;
	static volatile uint64_t x3 = 331813205LLU;
	int16_t x4 = INT16_MIN;
	int32_t t0 = -2;

    t0 = ((x1!=(x2*x3))/x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = UINT32_MAX;
	volatile uint16_t x6 = 5U;
	int8_t x7 = INT8_MAX;
	volatile int32_t t1 = 0;

    t1 = ((x5!=(x6*x7))/x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint64_t x9 = UINT64_MAX;
	int32_t x11 = -1;
	static int32_t x12 = -152831551;
	volatile int32_t t2 = -1849;

    t2 = ((x9!=(x10*x11))/x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = 0;
	uint8_t x14 = 0U;
	int16_t x15 = 0;
	static volatile int32_t t3 = -44;

    t3 = ((x13!=(x14*x15))/x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x18 = INT32_MIN;
	int8_t x19 = 0;
	uint8_t x20 = 27U;
	static int32_t t4 = -769989;

    t4 = ((x17!=(x18*x19))/x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x26 = INT8_MAX;
	uint16_t x27 = UINT16_MAX;
	int16_t x28 = INT16_MIN;
	volatile int32_t t5 = -159;

    t5 = ((x25!=(x26*x27))/x28);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x29 = 266845U;
	uint64_t x31 = 6165LLU;
	int32_t t6 = -1094753;

    t6 = ((x29!=(x30*x31))/x32);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x37 = INT16_MIN;
	static volatile uint8_t x38 = UINT8_MAX;
	volatile uint8_t x39 = UINT8_MAX;
	uint16_t x40 = 108U;
	int32_t t7 = 0;

    t7 = ((x37!=(x38*x39))/x40);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x46 = -14;
	int16_t x47 = 1614;
	static uint32_t x48 = 10U;

    t8 = ((x45!=(x46*x47))/x48);

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x53 = 12U;
	int8_t x54 = INT8_MAX;
	int8_t x55 = -1;
	static int16_t x56 = INT16_MIN;
	volatile int32_t t9 = -416;

    t9 = ((x53!=(x54*x55))/x56);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint64_t x62 = UINT64_MAX;
	int64_t x63 = -231LL;
	uint16_t x64 = 2U;
	static volatile int32_t t10 = -5762;

    t10 = ((x61!=(x62*x63))/x64);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x66 = 3LL;
	uint64_t x67 = UINT64_MAX;
	uint16_t x68 = 474U;
	volatile int32_t t11 = 549842;

    t11 = ((x65!=(x66*x67))/x68);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x70 = INT32_MAX;
	uint32_t x71 = 1U;
	volatile int64_t x72 = 218286630389566LL;

    t12 = ((x69!=(x70*x71))/x72);

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x73 = INT16_MIN;
	int64_t x74 = -1LL;
	static volatile int32_t t13 = -60304251;

    t13 = ((x73!=(x74*x75))/x76);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x77 = -19;
	uint64_t x78 = 1540301692900317696LLU;
	static int32_t x80 = INT32_MIN;
	volatile int32_t t14 = -38044043;

    t14 = ((x77!=(x78*x79))/x80);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x81 = INT32_MIN;
	uint16_t x82 = 8036U;
	static int32_t x83 = -1;
	static int8_t x84 = INT8_MIN;
	int32_t t15 = -7;

    t15 = ((x81!=(x82*x83))/x84);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint16_t x85 = 25U;
	static int8_t x86 = 53;
	int16_t x87 = INT16_MIN;
	int16_t x88 = 123;
	volatile int32_t t16 = 8432;

    t16 = ((x85!=(x86*x87))/x88);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x89 = INT8_MIN;
	uint32_t x90 = 50774U;
	uint64_t x91 = 32064136032LLU;
	static int64_t x92 = 32849239616065682LL;
	static int64_t t17 = 12545228332821429LL;

    t17 = ((x89!=(x90*x91))/x92);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x93 = INT16_MIN;
	uint32_t x95 = UINT32_MAX;
	static int32_t t18 = -2;

    t18 = ((x93!=(x94*x95))/x96);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x97 = INT32_MIN;
	int64_t x98 = 1285LL;
	uint16_t x100 = UINT16_MAX;
	static volatile int32_t t19 = -8369188;

    t19 = ((x97!=(x98*x99))/x100);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x101 = UINT32_MAX;
	volatile int16_t x102 = INT16_MAX;
	uint16_t x103 = 784U;
	volatile int32_t x104 = INT32_MIN;
	int32_t t20 = 961985718;

    t20 = ((x101!=(x102*x103))/x104);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x105 = UINT8_MAX;
	volatile uint16_t x106 = 13U;
	volatile int64_t x107 = -1LL;
	int32_t t21 = 38380430;

    t21 = ((x105!=(x106*x107))/x108);

    if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint16_t x110 = UINT16_MAX;
	uint16_t x111 = 8789U;
	uint32_t x112 = 4824235U;
	uint32_t t22 = 1583066702U;

    t22 = ((x109!=(x110*x111))/x112);

    if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x121 = -1;
	uint16_t x122 = 2U;
	volatile int8_t x123 = 24;
	int64_t x124 = INT64_MIN;
	static int64_t t23 = 252089679069706065LL;

    t23 = ((x121!=(x122*x123))/x124);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x130 = -1;
	volatile int8_t x131 = 5;
	uint32_t x132 = 34283U;
	uint32_t t24 = 698631U;

    t24 = ((x129!=(x130*x131))/x132);

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x138 = 28735U;
	uint64_t x139 = 20LLU;
	int16_t x140 = INT16_MAX;

    t25 = ((x137!=(x138*x139))/x140);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x141 = -1LL;
	int16_t x144 = -1;
	static volatile int32_t t26 = 202214807;

    t26 = ((x141!=(x142*x143))/x144);

    if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x145 = -1;
	int8_t x146 = -28;
	int16_t x147 = INT16_MIN;
	volatile int16_t x148 = INT16_MIN;
	int32_t t27 = 1;

    t27 = ((x145!=(x146*x147))/x148);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint16_t x149 = 685U;
	int32_t x150 = 22;
	int32_t x151 = -1;
	int32_t x152 = INT32_MIN;
	volatile int32_t t28 = 1155;

    t28 = ((x149!=(x150*x151))/x152);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint64_t x153 = UINT64_MAX;
	volatile uint64_t x154 = UINT64_MAX;
	int64_t x155 = INT64_MIN;
	static volatile int32_t t29 = 6110;

    t29 = ((x153!=(x154*x155))/x156);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x159 = INT32_MIN;
	int8_t x160 = INT8_MAX;
	volatile int32_t t30 = -59;

    t30 = ((x157!=(x158*x159))/x160);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x169 = -1;
	volatile int32_t x170 = INT32_MIN;
	volatile int64_t x171 = 1023774LL;
	int8_t x172 = INT8_MIN;
	static volatile int32_t t31 = 2;

    t31 = ((x169!=(x170*x171))/x172);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x175 = INT64_MAX;
	int64_t x176 = INT64_MIN;
	int64_t t32 = 18839LL;

    t32 = ((x173!=(x174*x175))/x176);

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x178 = -1;
	uint32_t x179 = 1688071136U;
	int64_t x180 = -1LL;
	volatile int64_t t33 = 678189LL;

    t33 = ((x177!=(x178*x179))/x180);

    if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x181 = INT32_MIN;
	int16_t x182 = -74;
	static volatile int8_t x183 = INT8_MIN;
	uint32_t x184 = 5U;
	volatile uint32_t t34 = 30710U;

    t34 = ((x181!=(x182*x183))/x184);

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint8_t x189 = 22U;
	volatile int32_t x191 = 4;
	int32_t x192 = -1;
	volatile int32_t t35 = -3;

    t35 = ((x189!=(x190*x191))/x192);

    if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int32_t x193 = -1;
	static int8_t x194 = INT8_MAX;
	uint64_t x195 = 9965LLU;
	volatile uint32_t x196 = UINT32_MAX;
	static volatile uint32_t t36 = 6U;

    t36 = ((x193!=(x194*x195))/x196);

    if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x197 = -1;
	int32_t x198 = -56946;
	uint8_t x199 = 1U;
	int16_t x200 = INT16_MAX;
	volatile int32_t t37 = 288786;

    t37 = ((x197!=(x198*x199))/x200);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x205 = 64520U;
	uint16_t x207 = 26843U;
	uint8_t x208 = UINT8_MAX;

    t38 = ((x205!=(x206*x207))/x208);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x209 = UINT32_MAX;
	static uint32_t x210 = 29U;
	int64_t x211 = -46496132048LL;
	static volatile int32_t t39 = -352;

    t39 = ((x209!=(x210*x211))/x212);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint64_t x218 = 7466LLU;
	int64_t x219 = INT64_MIN;
	int8_t x220 = INT8_MIN;
	int32_t t40 = -27112440;

    t40 = ((x217!=(x218*x219))/x220);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint16_t x221 = UINT16_MAX;
	int64_t x222 = 3141LL;
	uint32_t x223 = 55455469U;
	int64_t x224 = -24LL;
	int64_t t41 = 267LL;

    t41 = ((x221!=(x222*x223))/x224);

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x225 = INT16_MIN;
	int32_t x227 = 0;
	int64_t x228 = 4276149321187LL;

    t42 = ((x225!=(x226*x227))/x228);

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x229 = 0U;
	uint32_t x230 = UINT32_MAX;
	volatile uint16_t x231 = UINT16_MAX;
	static volatile int8_t x232 = -1;
	volatile int32_t t43 = -1;

    t43 = ((x229!=(x230*x231))/x232);

    if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint64_t x237 = 240807066LLU;
	volatile uint16_t x238 = UINT16_MAX;
	uint8_t x239 = UINT8_MAX;
	int8_t x240 = INT8_MIN;

    t44 = ((x237!=(x238*x239))/x240);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x245 = -1LL;
	int64_t x246 = -16139354452008LL;
	volatile uint16_t x247 = 667U;
	static volatile int32_t t45 = 6146;

    t45 = ((x245!=(x246*x247))/x248);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x253 = INT16_MIN;
	uint16_t x255 = UINT16_MAX;
	int64_t x256 = -12LL;
	volatile int64_t t46 = 42286800833LL;

    t46 = ((x253!=(x254*x255))/x256);

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int64_t x257 = 0LL;
	uint16_t x258 = 4U;
	static int16_t x259 = -1;
	volatile uint16_t x260 = UINT16_MAX;
	static volatile int32_t t47 = -98;

    t47 = ((x257!=(x258*x259))/x260);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x270 = -199168231;
	int64_t x271 = -1LL;
	int64_t x272 = INT64_MIN;
	int64_t t48 = 29644529LL;

    t48 = ((x269!=(x270*x271))/x272);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x273 = -1LL;
	uint64_t x274 = UINT64_MAX;
	volatile int16_t x275 = INT16_MIN;
	volatile int64_t t49 = -1460538521099LL;

    t49 = ((x273!=(x274*x275))/x276);

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x277 = 1842U;
	int8_t x278 = INT8_MAX;
	uint16_t x279 = UINT16_MAX;
	volatile int64_t t50 = 1580482523974LL;

    t50 = ((x277!=(x278*x279))/x280);

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x281 = INT32_MAX;
	volatile uint64_t x282 = 74863LLU;
	uint32_t x283 = 9921463U;
	int32_t t51 = 1;

    t51 = ((x281!=(x282*x283))/x284);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x285 = 5U;
	int64_t x286 = 212328129053981470LL;
	uint64_t x287 = 1737LLU;
	uint8_t x288 = UINT8_MAX;

    t52 = ((x285!=(x286*x287))/x288);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x293 = 69U;
	uint16_t x294 = UINT16_MAX;
	uint64_t x295 = UINT64_MAX;
	volatile int32_t t53 = 935888;

    t53 = ((x293!=(x294*x295))/x296);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x305 = INT32_MIN;
	int16_t x306 = -885;
	int64_t x307 = -119940663225LL;
	volatile int16_t x308 = INT16_MIN;
	static volatile int32_t t54 = -3274;

    t54 = ((x305!=(x306*x307))/x308);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint16_t x314 = 1U;
	int8_t x315 = INT8_MIN;
	int32_t x316 = 40728;
	int32_t t55 = -15421342;

    t55 = ((x313!=(x314*x315))/x316);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x321 = 2345565U;
	uint16_t x323 = 445U;
	volatile int16_t x324 = INT16_MIN;
	volatile int32_t t56 = 2;

    t56 = ((x321!=(x322*x323))/x324);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x332 = UINT16_MAX;

    t57 = ((x329!=(x330*x331))/x332);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x333 = 1U;
	uint32_t x334 = UINT32_MAX;
	int16_t x335 = -1;
	int16_t x336 = -1;
	static volatile int32_t t58 = 0;

    t58 = ((x333!=(x334*x335))/x336);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x345 = INT8_MIN;
	uint32_t x346 = 28U;
	int8_t x348 = 41;
	int32_t t59 = -637650;

    t59 = ((x345!=(x346*x347))/x348);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x349 = -3888;
	int32_t x351 = 1;
	int8_t x352 = INT8_MIN;
	volatile int32_t t60 = -58;

    t60 = ((x349!=(x350*x351))/x352);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint64_t x354 = 31000568LLU;
	volatile int32_t x355 = INT32_MIN;
	uint64_t x356 = 162LLU;
	volatile uint64_t t61 = 15967LLU;

    t61 = ((x353!=(x354*x355))/x356);

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x357 = INT16_MIN;
	int32_t x358 = INT32_MIN;
	volatile uint16_t x360 = UINT16_MAX;
	volatile int32_t t62 = -732;

    t62 = ((x357!=(x358*x359))/x360);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x361 = -1;
	int32_t x363 = 1;
	uint16_t x364 = UINT16_MAX;
	volatile int32_t t63 = -9382;

    t63 = ((x361!=(x362*x363))/x364);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x367 = UINT64_MAX;
	int8_t x368 = INT8_MAX;
	static int32_t t64 = -51;

    t64 = ((x365!=(x366*x367))/x368);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint32_t x369 = UINT32_MAX;
	uint16_t x370 = 9U;
	volatile int64_t x371 = -1LL;
	uint16_t x372 = 7873U;
	volatile int32_t t65 = 66696647;

    t65 = ((x369!=(x370*x371))/x372);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x376 = -1;
	int32_t t66 = 1508540;

    t66 = ((x373!=(x374*x375))/x376);

    if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x377 = 21;
	int64_t x378 = -1LL;
	int32_t x379 = -288081283;
	static uint32_t t67 = 2568U;

    t67 = ((x377!=(x378*x379))/x380);

    if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x382 = -1;
	static uint16_t x383 = UINT16_MAX;
	int32_t x384 = -11897601;
	int32_t t68 = 1123;

    t68 = ((x381!=(x382*x383))/x384);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x385 = INT32_MIN;
	uint8_t x386 = UINT8_MAX;
	volatile int32_t x387 = -1;
	static volatile int16_t x388 = INT16_MIN;
	int32_t t69 = -6;

    t69 = ((x385!=(x386*x387))/x388);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x397 = 13031U;
	static int16_t x399 = INT16_MAX;
	int16_t x400 = INT16_MAX;
	static int32_t t70 = -3009;

    t70 = ((x397!=(x398*x399))/x400);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x401 = INT64_MIN;
	volatile uint16_t x402 = 1U;
	static int32_t x404 = 9381;

    t71 = ((x401!=(x402*x403))/x404);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x405 = 10U;
	static int32_t x406 = -1;
	volatile int16_t x407 = INT16_MAX;
	static uint8_t x408 = UINT8_MAX;
	int32_t t72 = -330326;

    t72 = ((x405!=(x406*x407))/x408);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x409 = -1;
	static int8_t x410 = -1;
	int64_t x411 = -1LL;
	int64_t x412 = -1LL;

    t73 = ((x409!=(x410*x411))/x412);

    if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x413 = -1;
	uint32_t x414 = UINT32_MAX;
	int32_t x415 = INT32_MIN;
	volatile uint16_t x416 = 1U;
	volatile int32_t t74 = -959476604;

    t74 = ((x413!=(x414*x415))/x416);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x422 = INT16_MIN;
	uint32_t x423 = UINT32_MAX;
	int64_t x424 = -23231830513019LL;
	volatile int64_t t75 = 421216523LL;

    t75 = ((x421!=(x422*x423))/x424);

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int64_t x429 = -483722225107LL;
	volatile int32_t x431 = 0;
	static volatile int32_t x432 = INT32_MIN;
	static volatile int32_t t76 = -4006635;

    t76 = ((x429!=(x430*x431))/x432);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x433 = -1;
	int16_t x434 = 1225;
	static volatile int16_t x435 = INT16_MIN;
	int8_t x436 = INT8_MIN;

    t77 = ((x433!=(x434*x435))/x436);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile uint8_t x438 = 3U;
	uint64_t x439 = 369725825049614LLU;

    t78 = ((x437!=(x438*x439))/x440);

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x457 = UINT32_MAX;
	static volatile int64_t x458 = INT64_MIN;
	uint64_t x459 = 19833LLU;
	static volatile int64_t x460 = -1LL;
	volatile int64_t t79 = 37614926802LL;

    t79 = ((x457!=(x458*x459))/x460);

    if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x465 = -112;
	int32_t x466 = -93014;
	int8_t x467 = INT8_MAX;
	uint8_t x468 = 3U;
	volatile int32_t t80 = -1;

    t80 = ((x465!=(x466*x467))/x468);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x469 = UINT64_MAX;
	int32_t x470 = -7880;
	uint8_t x472 = 29U;

    t81 = ((x469!=(x470*x471))/x472);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x475 = 46529633LLU;
	volatile uint16_t x476 = 59U;
	int32_t t82 = 0;

    t82 = ((x473!=(x474*x475))/x476);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x477 = 93U;
	int8_t x478 = INT8_MIN;
	uint16_t x479 = UINT16_MAX;
	int8_t x480 = 24;
	volatile int32_t t83 = -189;

    t83 = ((x477!=(x478*x479))/x480);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x481 = -187412LL;
	int8_t x482 = INT8_MIN;
	uint16_t x483 = 0U;
	volatile int32_t x484 = -1;

    t84 = ((x481!=(x482*x483))/x484);

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x485 = INT64_MAX;
	static volatile uint32_t x486 = 293424U;
	uint32_t x487 = 180081403U;
	volatile int32_t t85 = 6;

    t85 = ((x485!=(x486*x487))/x488);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x489 = -1;
	int16_t x491 = 1;
	volatile int64_t t86 = -1959452688LL;

    t86 = ((x489!=(x490*x491))/x492);

    if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x501 = UINT8_MAX;
	int8_t x502 = 1;
	volatile int64_t x503 = 1LL;
	int64_t x504 = INT64_MIN;

    t87 = ((x501!=(x502*x503))/x504);

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x506 = 82U;
	uint16_t x507 = 18U;
	int32_t x508 = -212777;
	int32_t t88 = -215932;

    t88 = ((x505!=(x506*x507))/x508);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x521 = 473519110416LL;
	volatile int32_t x522 = -1;
	int32_t t89 = 34243;

    t89 = ((x521!=(x522*x523))/x524);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint64_t x525 = UINT64_MAX;
	static uint32_t x526 = 793465U;
	static volatile uint8_t x527 = 0U;
	volatile int8_t x528 = 1;
	static volatile int32_t t90 = 12291960;

    t90 = ((x525!=(x526*x527))/x528);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x529 = 0LL;
	uint64_t x530 = 21LLU;
	uint8_t x532 = 28U;
	static int32_t t91 = 13;

    t91 = ((x529!=(x530*x531))/x532);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x534 = 0;
	int32_t t92 = 1;

    t92 = ((x533!=(x534*x535))/x536);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x537 = UINT64_MAX;
	int16_t x538 = -198;
	static int8_t x539 = -1;

    t93 = ((x537!=(x538*x539))/x540);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x541 = INT8_MIN;
	int32_t x543 = -1;
	volatile uint32_t x544 = 17277288U;
	uint32_t t94 = 896U;

    t94 = ((x541!=(x542*x543))/x544);

    if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x546 = INT16_MIN;
	int8_t x547 = INT8_MIN;
	int8_t x548 = 1;
	volatile int32_t t95 = -14;

    t95 = ((x545!=(x546*x547))/x548);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x557 = INT32_MAX;
	uint32_t x558 = UINT32_MAX;
	int32_t x559 = -50;
	int16_t x560 = INT16_MAX;

    t96 = ((x557!=(x558*x559))/x560);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x562 = INT32_MIN;
	static volatile int64_t x563 = 185LL;
	volatile int64_t t97 = -984937851985LL;

    t97 = ((x561!=(x562*x563))/x564);

    if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x565 = INT32_MIN;
	int8_t x567 = 0;
	int16_t x568 = -1;
	volatile int32_t t98 = 91;

    t98 = ((x565!=(x566*x567))/x568);

    if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x569 = INT16_MIN;
	static volatile int32_t x570 = -1;
	int32_t x572 = INT32_MIN;
	volatile int32_t t99 = 137;

    t99 = ((x569!=(x570*x571))/x572);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x579 = -1;
	static int16_t x580 = INT16_MIN;
	volatile int32_t t100 = 1;

    t100 = ((x577!=(x578*x579))/x580);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint32_t x585 = UINT32_MAX;
	volatile int8_t x586 = 1;
	volatile uint32_t x588 = 5332042U;

    t101 = ((x585!=(x586*x587))/x588);

    if (t101 != 0U) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint8_t x589 = UINT8_MAX;
	int16_t x591 = -186;
	int64_t x592 = INT64_MIN;
	volatile int64_t t102 = 444313018302406LL;

    t102 = ((x589!=(x590*x591))/x592);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x597 = -20335502821LL;
	int16_t x598 = -1;
	uint16_t x599 = 14560U;
	volatile int64_t x600 = INT64_MIN;
	int64_t t103 = 51073067108192LL;

    t103 = ((x597!=(x598*x599))/x600);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x602 = -276813468LL;
	int16_t x603 = INT16_MIN;
	int16_t x604 = 10;
	volatile int32_t t104 = 29190;

    t104 = ((x601!=(x602*x603))/x604);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x605 = INT16_MIN;
	int32_t x606 = -1;
	int32_t x607 = INT32_MAX;
	volatile int16_t x608 = INT16_MIN;
	volatile int32_t t105 = -21;

    t105 = ((x605!=(x606*x607))/x608);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x609 = INT8_MIN;
	int32_t x610 = -1;
	int16_t x611 = 6520;
	volatile int16_t x612 = INT16_MIN;

    t106 = ((x609!=(x610*x611))/x612);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x617 = -430875295295075LL;
	int64_t x618 = -1LL;
	static int8_t x619 = INT8_MAX;
	static int16_t x620 = 5;
	int32_t t107 = 439423967;

    t107 = ((x617!=(x618*x619))/x620);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x629 = UINT16_MAX;
	static int32_t x630 = -10745031;
	int64_t x631 = -1LL;
	uint16_t x632 = UINT16_MAX;
	int32_t t108 = -380141504;

    t108 = ((x629!=(x630*x631))/x632);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x638 = INT16_MIN;
	int8_t x639 = INT8_MIN;
	volatile int8_t x640 = 4;

    t109 = ((x637!=(x638*x639))/x640);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x641 = 2635691157470317495LLU;
	int32_t x644 = INT32_MIN;
	static volatile int32_t t110 = 132030209;

    t110 = ((x641!=(x642*x643))/x644);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x645 = 225;
	uint16_t x647 = 2085U;
	uint64_t x648 = 6232681LLU;
	volatile uint64_t t111 = 3639LLU;

    t111 = ((x645!=(x646*x647))/x648);

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x649 = INT32_MAX;
	int16_t x650 = INT16_MIN;
	int8_t x651 = -25;
	volatile int64_t x652 = 53135509624718LL;
	volatile int64_t t112 = 870619LL;

    t112 = ((x649!=(x650*x651))/x652);

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x653 = INT16_MIN;
	int16_t x654 = -1;
	uint64_t t113 = 507LLU;

    t113 = ((x653!=(x654*x655))/x656);

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x661 = INT8_MAX;
	int16_t x662 = -2482;
	volatile uint32_t x664 = UINT32_MAX;
	volatile uint32_t t114 = 2371132U;

    t114 = ((x661!=(x662*x663))/x664);

    if (t114 != 0U) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x665 = 2919;
	volatile int32_t x667 = -7;
	uint32_t x668 = 733860U;
	static volatile uint32_t t115 = 10U;

    t115 = ((x665!=(x666*x667))/x668);

    if (t115 != 0U) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x677 = -2;
	int64_t x678 = -1LL;
	uint64_t x679 = 57863843109506LLU;
	volatile uint32_t x680 = UINT32_MAX;
	volatile uint32_t t116 = 21534885U;

    t116 = ((x677!=(x678*x679))/x680);

    if (t116 != 0U) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x681 = -519464;
	int64_t x682 = INT64_MIN;
	uint64_t x683 = UINT64_MAX;
	int32_t x684 = INT32_MIN;

    t117 = ((x681!=(x682*x683))/x684);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint64_t x689 = 67540496760015908LLU;
	volatile uint8_t x690 = 102U;
	uint32_t x691 = UINT32_MAX;
	int8_t x692 = -1;
	volatile int32_t t118 = -17707979;

    t118 = ((x689!=(x690*x691))/x692);

    if (t118 != -1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x693 = -1;
	volatile uint32_t x694 = UINT32_MAX;
	int32_t x695 = -1;
	static int32_t x696 = 13;
	int32_t t119 = 1;

    t119 = ((x693!=(x694*x695))/x696);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x701 = 843909324803783LLU;
	volatile int16_t x702 = INT16_MIN;
	static uint8_t x703 = 12U;
	int64_t x704 = INT64_MAX;

    t120 = ((x701!=(x702*x703))/x704);

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x705 = 273900LL;
	volatile uint8_t x706 = 58U;
	static uint8_t x707 = 11U;
	volatile int32_t t121 = 29;

    t121 = ((x705!=(x706*x707))/x708);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x709 = -1LL;
	int32_t x711 = -39;
	int32_t t122 = 351232;

    t122 = ((x709!=(x710*x711))/x712);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x713 = -1;
	volatile int16_t x714 = 0;
	int16_t x715 = INT16_MIN;
	int64_t t123 = 282LL;

    t123 = ((x713!=(x714*x715))/x716);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x721 = 110;
	static uint8_t x722 = 4U;
	volatile int32_t x723 = -1;
	int8_t x724 = INT8_MIN;

    t124 = ((x721!=(x722*x723))/x724);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x725 = INT64_MIN;
	static volatile int32_t x726 = INT32_MIN;
	int64_t x728 = INT64_MIN;
	volatile int64_t t125 = 1007491057368110726LL;

    t125 = ((x725!=(x726*x727))/x728);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x730 = INT16_MIN;
	volatile uint16_t x731 = 16377U;
	int32_t x732 = -1;
	volatile int32_t t126 = -1;

    t126 = ((x729!=(x730*x731))/x732);

    if (t126 != -1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x741 = 61;
	uint32_t x743 = 368386390U;
	volatile int16_t x744 = INT16_MAX;
	volatile int32_t t127 = 119511;

    t127 = ((x741!=(x742*x743))/x744);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x754 = INT16_MIN;
	uint64_t x755 = 81759LLU;
	uint64_t t128 = 15134012171640175LLU;

    t128 = ((x753!=(x754*x755))/x756);

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x758 = 1;
	static uint64_t x759 = 3815051606971378868LLU;
	volatile int8_t x760 = 4;
	volatile int32_t t129 = 72;

    t129 = ((x757!=(x758*x759))/x760);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x765 = -3778168135LL;
	int16_t x767 = -5;
	int64_t x768 = INT64_MIN;
	static int64_t t130 = 7LL;

    t130 = ((x765!=(x766*x767))/x768);

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x769 = -1;
	int8_t x770 = INT8_MIN;
	uint64_t x771 = UINT64_MAX;
	volatile int64_t x772 = 88978242936565212LL;

    t131 = ((x769!=(x770*x771))/x772);

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x773 = 27691U;
	static uint64_t x774 = UINT64_MAX;
	int8_t x776 = -1;
	volatile int32_t t132 = 0;

    t132 = ((x773!=(x774*x775))/x776);

    if (t132 != -1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x777 = 1U;
	volatile int64_t x778 = INT64_MAX;
	static uint64_t x779 = 1692575313LLU;
	int64_t x780 = INT64_MIN;

    t133 = ((x777!=(x778*x779))/x780);

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x787 = -9;
	volatile int32_t x788 = -1;
	volatile int32_t t134 = 123230268;

    t134 = ((x785!=(x786*x787))/x788);

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x789 = INT64_MIN;
	volatile uint8_t x790 = 11U;
	int8_t x791 = 3;
	volatile uint16_t x792 = UINT16_MAX;
	volatile int32_t t135 = -38911;

    t135 = ((x789!=(x790*x791))/x792);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x793 = INT64_MIN;
	int64_t x794 = -1117018769LL;
	volatile int32_t x795 = 61;
	uint8_t x796 = 60U;
	static int32_t t136 = 4889;

    t136 = ((x793!=(x794*x795))/x796);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x809 = INT32_MIN;
	int8_t x810 = -1;
	volatile uint64_t x811 = 2171049817880414029LLU;
	int64_t x812 = INT64_MIN;
	int64_t t137 = -965214LL;

    t137 = ((x809!=(x810*x811))/x812);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x818 = -26;
	volatile int8_t x819 = -1;
	uint8_t x820 = UINT8_MAX;
	int32_t t138 = -1;

    t138 = ((x817!=(x818*x819))/x820);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x825 = INT16_MAX;
	volatile int32_t x826 = INT32_MIN;
	uint64_t x827 = 320LLU;
	int64_t x828 = INT64_MIN;

    t139 = ((x825!=(x826*x827))/x828);

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint64_t x829 = 123006137LLU;
	uint8_t x830 = UINT8_MAX;
	static uint8_t x831 = UINT8_MAX;

    t140 = ((x829!=(x830*x831))/x832);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x837 = INT64_MIN;
	static int8_t x839 = -1;
	int32_t x840 = INT32_MIN;
	int32_t t141 = -2;

    t141 = ((x837!=(x838*x839))/x840);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x845 = 182U;
	uint32_t x846 = 218U;
	int32_t x847 = -1;
	uint8_t x848 = UINT8_MAX;
	int32_t t142 = 359;

    t142 = ((x845!=(x846*x847))/x848);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x850 = UINT32_MAX;
	uint16_t x851 = 765U;

    t143 = ((x849!=(x850*x851))/x852);

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x853 = 1U;
	volatile uint64_t x854 = 6699744712317158100LLU;
	static uint64_t x855 = 103557613661215LLU;
	int32_t x856 = -384510871;
	static volatile int32_t t144 = 4;

    t144 = ((x853!=(x854*x855))/x856);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile uint8_t x861 = UINT8_MAX;
	volatile int16_t x862 = INT16_MAX;
	uint16_t x863 = 269U;
	static int32_t x864 = 178066070;
	static int32_t t145 = -28575919;

    t145 = ((x861!=(x862*x863))/x864);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x873 = INT8_MAX;
	static int64_t x874 = 40LL;

    t146 = ((x873!=(x874*x875))/x876);

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x877 = 71023710773471350LLU;
	uint16_t x878 = UINT16_MAX;
	uint64_t x879 = 1194359LLU;
	int16_t x880 = -29;

    t147 = ((x877!=(x878*x879))/x880);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x881 = -1;
	uint16_t x882 = UINT16_MAX;
	static int8_t x884 = INT8_MIN;
	int32_t t148 = -7411127;

    t148 = ((x881!=(x882*x883))/x884);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x886 = 0U;
	int16_t x887 = INT16_MIN;
	volatile uint32_t t149 = 27399315U;

    t149 = ((x885!=(x886*x887))/x888);

    if (t149 != 0U) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x889 = INT8_MIN;
	uint64_t x890 = 14004110676522262LLU;
	int16_t x891 = 31;
	int32_t t150 = -188;

    t150 = ((x889!=(x890*x891))/x892);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x893 = -69LL;
	uint32_t x894 = UINT32_MAX;
	volatile int8_t x895 = -1;
	volatile int16_t x896 = INT16_MIN;
	static volatile int32_t t151 = -965;

    t151 = ((x893!=(x894*x895))/x896);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint16_t x897 = 833U;
	uint64_t x898 = 34933626635947LLU;
	int8_t x899 = INT8_MAX;
	static uint32_t t152 = 0U;

    t152 = ((x897!=(x898*x899))/x900);

    if (t152 != 0U) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x909 = -1LL;
	uint32_t x910 = 38U;
	int32_t x911 = INT32_MIN;
	static int64_t x912 = -17271LL;
	static int64_t t153 = -495903648LL;

    t153 = ((x909!=(x910*x911))/x912);

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x917 = -1;
	int64_t x918 = 879631639325LL;
	static uint16_t x919 = 2U;
	int8_t x920 = INT8_MIN;

    t154 = ((x917!=(x918*x919))/x920);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x925 = INT8_MIN;
	uint64_t x926 = UINT64_MAX;
	static uint64_t x927 = 1444905978321785LLU;
	static int64_t x928 = -5293097511LL;
	int64_t t155 = -106724LL;

    t155 = ((x925!=(x926*x927))/x928);

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x929 = 53320680958446LL;
	volatile int8_t x930 = -15;
	static int32_t x932 = INT32_MIN;

    t156 = ((x929!=(x930*x931))/x932);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x934 = INT8_MIN;
	static int8_t x935 = INT8_MIN;
	int32_t x936 = -179;
	int32_t t157 = 2;

    t157 = ((x933!=(x934*x935))/x936);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x937 = 21U;
	static int32_t x938 = INT32_MIN;
	uint32_t x939 = 320401980U;
	static uint8_t x940 = 7U;

    t158 = ((x937!=(x938*x939))/x940);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x941 = -2;
	static volatile int32_t x943 = -30;
	int8_t x944 = -1;
	volatile int32_t t159 = -3142;

    t159 = ((x941!=(x942*x943))/x944);

    if (t159 != -1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint16_t x945 = 1U;
	int64_t x946 = 37443182249794LL;
	uint8_t x947 = 15U;
	int16_t x948 = INT16_MIN;
	int32_t t160 = 2;

    t160 = ((x945!=(x946*x947))/x948);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x962 = INT8_MIN;
	int8_t x963 = -1;
	volatile int32_t x964 = INT32_MAX;
	volatile int32_t t161 = 0;

    t161 = ((x961!=(x962*x963))/x964);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x965 = INT8_MIN;
	uint8_t x967 = 3U;
	int64_t x968 = INT64_MIN;

    t162 = ((x965!=(x966*x967))/x968);

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x969 = -54;
	uint64_t x970 = 282041LLU;
	int32_t x971 = -1;
	int32_t t163 = -5;

    t163 = ((x969!=(x970*x971))/x972);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x973 = -993434;
	int8_t x975 = -1;

    t164 = ((x973!=(x974*x975))/x976);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x977 = INT8_MIN;
	int8_t x978 = -1;
	int32_t x980 = INT32_MAX;
	volatile int32_t t165 = 132857;

    t165 = ((x977!=(x978*x979))/x980);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x982 = 14376U;
	uint64_t x983 = 6131397286256LLU;
	volatile uint32_t t166 = 485U;

    t166 = ((x981!=(x982*x983))/x984);

    if (t166 != 0U) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x989 = UINT64_MAX;
	int64_t x990 = 1537061140064LL;
	int8_t x991 = -1;
	int16_t x992 = -4705;
	int32_t t167 = 130;

    t167 = ((x989!=(x990*x991))/x992);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x993 = INT64_MIN;
	uint32_t x994 = 21U;
	uint64_t x995 = 207763068153044891LLU;
	static int8_t x996 = INT8_MAX;
	volatile int32_t t168 = -1;

    t168 = ((x993!=(x994*x995))/x996);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x998 = INT8_MIN;
	int8_t x999 = INT8_MIN;
	volatile int8_t x1000 = INT8_MIN;
	int32_t t169 = 5576;

    t169 = ((x997!=(x998*x999))/x1000);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x1002 = 46841656440LLU;
	int8_t x1003 = INT8_MIN;
	int64_t x1004 = -1LL;
	static int64_t t170 = 1LL;

    t170 = ((x1001!=(x1002*x1003))/x1004);

    if (t170 != -1LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x1005 = -7;
	uint8_t x1006 = 59U;
	int16_t x1007 = -71;
	uint64_t x1008 = UINT64_MAX;
	volatile uint64_t t171 = 1288327LLU;

    t171 = ((x1005!=(x1006*x1007))/x1008);

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint16_t x1010 = UINT16_MAX;
	volatile int16_t x1011 = INT16_MIN;
	int16_t x1012 = -1;
	volatile int32_t t172 = -16085910;

    t172 = ((x1009!=(x1010*x1011))/x1012);

    if (t172 != -1) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint16_t x1013 = 27133U;
	uint32_t x1014 = 1043088U;
	uint32_t x1015 = 2672277U;
	int32_t t173 = 171;

    t173 = ((x1013!=(x1014*x1015))/x1016);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x1017 = -119269171LL;
	int32_t x1019 = INT32_MAX;
	int16_t x1020 = INT16_MIN;
	int32_t t174 = 8;

    t174 = ((x1017!=(x1018*x1019))/x1020);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x1021 = -26LL;
	static int32_t x1022 = -1;
	int8_t x1023 = INT8_MAX;
	static volatile uint64_t x1024 = 1538109431654290LLU;
	uint64_t t175 = 0LLU;

    t175 = ((x1021!=(x1022*x1023))/x1024);

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x1025 = 9108006465265843LL;
	volatile uint16_t x1026 = 1117U;
	uint8_t x1027 = UINT8_MAX;
	static int64_t t176 = 25LL;

    t176 = ((x1025!=(x1026*x1027))/x1028);

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x1033 = 0U;
	uint32_t x1035 = UINT32_MAX;
	uint16_t x1036 = 29333U;

    t177 = ((x1033!=(x1034*x1035))/x1036);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x1041 = 1;
	volatile int8_t x1042 = INT8_MAX;
	static int16_t x1043 = INT16_MAX;
	static uint64_t x1044 = 2879LLU;
	volatile uint64_t t178 = 61470524065960293LLU;

    t178 = ((x1041!=(x1042*x1043))/x1044);

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x1046 = UINT16_MAX;
	int16_t x1047 = INT16_MIN;
	volatile uint32_t x1048 = UINT32_MAX;
	uint32_t t179 = 627664729U;

    t179 = ((x1045!=(x1046*x1047))/x1048);

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x1049 = INT64_MIN;
	int8_t x1050 = -60;
	uint8_t x1051 = 83U;
	uint64_t x1052 = UINT64_MAX;

    t180 = ((x1049!=(x1050*x1051))/x1052);

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint32_t x1053 = 47379U;
	uint16_t x1054 = 238U;
	volatile int8_t x1055 = -1;
	uint64_t x1056 = 51142286326728720LLU;
	volatile uint64_t t181 = 87372023458580149LLU;

    t181 = ((x1053!=(x1054*x1055))/x1056);

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x1057 = -2398725396971226495LL;
	int32_t x1058 = INT32_MAX;
	volatile uint16_t x1059 = 0U;
	volatile int32_t t182 = -14082;

    t182 = ((x1057!=(x1058*x1059))/x1060);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x1061 = INT32_MAX;
	static volatile int8_t x1062 = -1;
	volatile uint8_t x1064 = UINT8_MAX;
	int32_t t183 = 21;

    t183 = ((x1061!=(x1062*x1063))/x1064);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int64_t x1065 = 243449610482174743LL;
	int16_t x1066 = INT16_MIN;
	uint32_t x1067 = 121572U;
	int64_t x1068 = -319665781633789011LL;
	static volatile int64_t t184 = -1LL;

    t184 = ((x1065!=(x1066*x1067))/x1068);

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x1069 = -3286;
	static int16_t x1070 = INT16_MAX;
	int16_t x1071 = INT16_MAX;
	uint32_t x1072 = UINT32_MAX;
	volatile uint32_t t185 = 995U;

    t185 = ((x1069!=(x1070*x1071))/x1072);

    if (t185 != 0U) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint8_t x1074 = 12U;
	static uint64_t x1075 = 1730900LLU;
	volatile int32_t t186 = 30943;

    t186 = ((x1073!=(x1074*x1075))/x1076);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x1077 = 777LL;
	volatile int64_t x1078 = 10702161182LL;
	int64_t x1079 = -1013LL;
	static int16_t x1080 = -1;

    t187 = ((x1077!=(x1078*x1079))/x1080);

    if (t187 != -1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1081 = INT8_MIN;
	uint16_t x1083 = UINT16_MAX;
	int8_t x1084 = 2;
	volatile int32_t t188 = 229372;

    t188 = ((x1081!=(x1082*x1083))/x1084);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x1085 = -30;
	uint32_t x1086 = 111553156U;
	int16_t x1087 = -4;
	int64_t x1088 = INT64_MIN;
	volatile int64_t t189 = -367579LL;

    t189 = ((x1085!=(x1086*x1087))/x1088);

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint16_t x1093 = UINT16_MAX;
	volatile int16_t x1094 = INT16_MIN;
	static int8_t x1095 = 1;
	uint8_t x1096 = 8U;

    t190 = ((x1093!=(x1094*x1095))/x1096);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x1105 = 3057LLU;
	uint32_t x1106 = UINT32_MAX;
	int8_t x1107 = INT8_MIN;
	uint64_t x1108 = 122332615153786LLU;
	uint64_t t191 = 224664569727282884LLU;

    t191 = ((x1105!=(x1106*x1107))/x1108);

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x1110 = 23913116681861LLU;
	volatile int32_t x1111 = INT32_MIN;
	volatile int16_t x1112 = 166;
	int32_t t192 = -21;

    t192 = ((x1109!=(x1110*x1111))/x1112);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x1113 = INT16_MIN;
	int16_t x1114 = -1;
	volatile uint16_t x1116 = UINT16_MAX;
	static int32_t t193 = -14195;

    t193 = ((x1113!=(x1114*x1115))/x1116);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x1117 = INT32_MIN;
	static int64_t x1118 = -1LL;
	uint64_t x1120 = 22223467891581LLU;
	volatile uint64_t t194 = 10413716219257LLU;

    t194 = ((x1117!=(x1118*x1119))/x1120);

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x1126 = INT8_MIN;
	uint32_t x1127 = 1183U;
	static int16_t x1128 = INT16_MIN;
	static int32_t t195 = 238147286;

    t195 = ((x1125!=(x1126*x1127))/x1128);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x1129 = 8212660850594973818LLU;
	uint16_t x1130 = 2587U;
	int8_t x1131 = INT8_MIN;
	uint16_t x1132 = UINT16_MAX;
	int32_t t196 = 6953;

    t196 = ((x1129!=(x1130*x1131))/x1132);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x1134 = 0;
	volatile int8_t x1135 = -1;
	volatile int16_t x1136 = -1;
	volatile int32_t t197 = 19862;

    t197 = ((x1133!=(x1134*x1135))/x1136);

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1141 = INT32_MIN;
	int32_t x1142 = INT32_MIN;
	uint32_t x1143 = UINT32_MAX;
	static uint16_t x1144 = 237U;
	int32_t t198 = 16769456;

    t198 = ((x1141!=(x1142*x1143))/x1144);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint8_t x1145 = UINT8_MAX;
	int64_t x1146 = -820888LL;
	uint64_t x1147 = 43245480732509LLU;
	static int8_t x1148 = -1;
	int32_t t199 = -2866231;

    t199 = ((x1145!=(x1146*x1147))/x1148);

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



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

uint8_t x4 = UINT8_MAX;
uint64_t x6 = UINT64_MAX;
uint8_t x20 = 15U;
int16_t x21 = 23;
int32_t x22 = INT32_MIN;
static int8_t x29 = -11;
int32_t x34 = -1;
int32_t t8 = 1641;
static uint16_t x40 = UINT16_MAX;
int32_t t9 = -1;
volatile int16_t x42 = INT16_MIN;
int32_t x45 = -1;
int16_t x49 = INT16_MIN;
volatile int32_t t12 = 377;
uint8_t x63 = 1U;
volatile uint32_t x68 = UINT32_MAX;
int32_t t16 = 329854175;
static uint32_t x73 = 1039319599U;
volatile uint32_t x79 = 15U;
int32_t x80 = INT32_MIN;
int32_t t19 = 448762;
int32_t x83 = 1;
int64_t x88 = INT64_MAX;
static uint32_t x90 = 36961U;
int32_t x94 = 26250;
int32_t x99 = INT32_MIN;
static int64_t x100 = INT64_MIN;
volatile int64_t x102 = INT64_MAX;
static int32_t x107 = INT32_MAX;
uint32_t x112 = 93792440U;
int16_t x118 = 72;
int8_t x120 = 15;
int8_t x123 = INT8_MIN;
int32_t x124 = 57;
volatile int8_t x131 = INT8_MIN;
int16_t x139 = INT16_MIN;
int64_t x143 = INT64_MIN;
int16_t x147 = INT16_MAX;
volatile int32_t x150 = -5;
int64_t x152 = -385567091LL;
int8_t x170 = INT8_MIN;
int16_t x173 = 7;
static uint64_t x194 = 190863641119303004LLU;
uint32_t x195 = UINT32_MAX;
volatile int16_t x197 = -1;
int32_t x199 = -1;
int8_t x200 = INT8_MIN;
uint8_t x205 = 35U;
int16_t x206 = 15;
volatile int64_t x209 = -29287415900730LL;
volatile int32_t x211 = -4394;
int64_t x212 = INT64_MAX;
volatile int32_t t53 = -235024;
uint16_t x217 = 750U;
uint16_t x223 = 646U;
int32_t x233 = 15726247;
uint64_t x236 = UINT64_MAX;
static volatile int32_t t58 = -12916723;
int8_t x239 = 59;
int8_t x244 = -1;
uint16_t x246 = 1411U;
static int64_t x247 = -470227553LL;
static volatile int8_t x253 = INT8_MIN;
uint32_t x257 = UINT32_MAX;
int32_t x265 = INT32_MIN;
int64_t x268 = -1LL;
uint32_t x274 = 2024049731U;
int16_t x275 = INT16_MAX;
int64_t x279 = 12186532856167LL;
volatile int8_t x280 = INT8_MAX;
volatile int32_t x281 = INT32_MAX;
int64_t x288 = -1LL;
volatile int32_t t71 = 4104;
static int32_t t72 = -95760986;
int64_t x293 = INT64_MAX;
uint16_t x299 = 244U;
int32_t x309 = -8781;
static uint64_t x311 = 224125LLU;
int8_t x317 = INT8_MAX;
uint64_t x320 = 297165871229727849LLU;
int8_t x323 = -1;
int16_t x330 = -1;
volatile int16_t x331 = INT16_MIN;
volatile uint8_t x332 = 5U;
uint16_t x334 = 8U;
volatile int32_t t84 = -100792346;
volatile int32_t x341 = -1;
int32_t t85 = 52276;
int32_t t86 = -36876026;
int16_t x350 = INT16_MIN;
static volatile int32_t t87 = 31;
volatile int32_t t89 = 258655;
static int16_t x362 = INT16_MIN;
int8_t x371 = INT8_MAX;
volatile int8_t x377 = INT8_MAX;
volatile int64_t x382 = -1LL;
volatile int8_t x385 = INT8_MIN;
uint64_t x388 = 25275952LLU;
int32_t t96 = 1832;
int64_t x397 = INT64_MAX;
uint64_t x401 = 197913556315559019LLU;
volatile int64_t x402 = INT64_MAX;
int32_t x405 = -975;
int32_t x428 = -157;
volatile int32_t t106 = 1852;
int64_t x438 = INT64_MIN;
int64_t x444 = INT64_MIN;
static int32_t t110 = -24;
static uint8_t x447 = 0U;
int16_t x450 = INT16_MAX;
static volatile int32_t x451 = INT32_MIN;
int8_t x459 = INT8_MIN;
int8_t x464 = INT8_MIN;
volatile int32_t t115 = -8;
static int64_t x465 = INT64_MIN;
static int64_t x471 = -4915LL;
int32_t t117 = 55684305;
uint16_t x473 = 10756U;
static volatile int32_t x477 = -1;
static int64_t x482 = INT64_MAX;
volatile int16_t x490 = -1;
int32_t x491 = INT32_MIN;
int32_t t123 = 11;
volatile int32_t t124 = 11507;
uint32_t x501 = 39637122U;
static int32_t x507 = INT32_MIN;
volatile int32_t t127 = 53317;
uint64_t x517 = 3331502085480430935LLU;
int32_t t129 = 148746;
uint8_t x524 = 3U;
int32_t t130 = 160;
uint8_t x525 = UINT8_MAX;
static uint64_t x529 = 26666805333249148LLU;
int8_t x533 = 1;
uint64_t x541 = 26997866946319LLU;
uint8_t x543 = 5U;
int32_t x544 = INT32_MIN;
int64_t x545 = -4LL;
volatile int8_t x549 = INT8_MAX;
int64_t x552 = INT64_MIN;
int16_t x558 = INT16_MIN;
int32_t t139 = 123724;
int32_t x565 = -6972;
static uint64_t x566 = 5920312708082527097LLU;
static volatile int8_t x571 = -3;
static int32_t x580 = 0;
volatile int32_t t144 = 660;
int64_t x581 = 11LL;
int16_t x586 = INT16_MIN;
volatile int8_t x588 = 28;
uint32_t x592 = 57U;
int32_t t149 = 2775;
static volatile int32_t t150 = -3;
volatile int64_t x606 = INT64_MAX;
static volatile int8_t x609 = INT8_MIN;
int32_t x611 = INT32_MIN;
int32_t t152 = 2707612;
int16_t x618 = INT16_MIN;
static int32_t t154 = 49214664;
int64_t x626 = INT64_MAX;
static int32_t x641 = INT32_MIN;
int32_t t160 = -12967;
uint64_t x648 = 172127829198946LLU;
uint8_t x655 = 1U;
volatile int16_t x657 = -1;
static int8_t x658 = INT8_MIN;
static int16_t x659 = -15;
volatile uint32_t x661 = 7298918U;
int64_t x662 = -1LL;
static volatile int32_t t165 = -1;
uint8_t x673 = 1U;
int64_t x674 = -435417877309609501LL;
int16_t x677 = 0;
static uint32_t x680 = 626816U;
volatile int32_t x684 = -1;
uint32_t x688 = 20U;
int32_t x689 = INT32_MIN;
int32_t x698 = -1;
int64_t x699 = INT64_MIN;
int8_t x700 = INT8_MAX;
static volatile int32_t t175 = -14483;
int32_t x711 = INT32_MAX;
int8_t x712 = -1;
int32_t t178 = -11912;
static int32_t x719 = INT32_MIN;
int32_t x721 = INT32_MIN;
uint16_t x731 = UINT16_MAX;
volatile int32_t t182 = 131;
uint32_t x734 = UINT32_MAX;
int32_t t183 = 77876406;
uint64_t x738 = 26238744212459924LLU;
static int64_t x740 = INT64_MIN;
int64_t x741 = INT64_MIN;
int16_t x750 = INT16_MAX;
int32_t t187 = -61;
uint32_t x753 = UINT32_MAX;
int64_t x757 = -81319LL;
int16_t x758 = INT16_MIN;
static volatile int16_t x760 = 2757;
int8_t x776 = INT8_MIN;
volatile int16_t x782 = -1;
int32_t t196 = 143837;
int32_t t197 = -7195;
static int16_t x793 = -1;
static volatile uint8_t x794 = 6U;
int32_t t199 = -9;


void f0(void) {
    	int8_t x1 = INT8_MAX;
	uint8_t x2 = 0U;
	volatile int8_t x3 = -1;
	volatile int32_t t0 = -2475;

    t0 = ((x1|(x2|x3))==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = UINT8_MAX;
	volatile uint8_t x7 = 22U;
	uint64_t x8 = UINT64_MAX;
	int32_t t1 = 948348259;

    t1 = ((x5|(x6|x7))==x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 45U;
	int16_t x10 = INT16_MIN;
	uint32_t x11 = 11229U;
	int16_t x12 = -397;
	int32_t t2 = -2;

    t2 = ((x9|(x10|x11))==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint64_t x13 = 2368714126734970497LLU;
	int16_t x14 = -1;
	volatile uint16_t x15 = 15121U;
	int64_t x16 = -49560680985225LL;
	int32_t t3 = -663;

    t3 = ((x13|(x14|x15))==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = 45898472694633LLU;
	volatile int16_t x18 = INT16_MAX;
	int64_t x19 = 14923LL;
	volatile int32_t t4 = 155559521;

    t4 = ((x17|(x18|x19))==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x23 = -1;
	uint32_t x24 = 2486686U;
	int32_t t5 = -3773;

    t5 = ((x21|(x22|x23))==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MIN;
	static uint8_t x26 = UINT8_MAX;
	uint32_t x27 = UINT32_MAX;
	static int16_t x28 = -1;
	volatile int32_t t6 = 1;

    t6 = ((x25|(x26|x27))==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x30 = INT64_MAX;
	uint32_t x31 = UINT32_MAX;
	int32_t x32 = INT32_MIN;
	volatile int32_t t7 = -1;

    t7 = ((x29|(x30|x31))==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = 925U;
	uint32_t x35 = 161U;
	int8_t x36 = INT8_MAX;

    t8 = ((x33|(x34|x35))==x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x37 = INT32_MIN;
	int32_t x38 = INT32_MIN;
	static uint16_t x39 = 2517U;

    t9 = ((x37|(x38|x39))==x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x41 = 12U;
	static int16_t x43 = INT16_MIN;
	int32_t x44 = INT32_MIN;
	volatile int32_t t10 = 12892;

    t10 = ((x41|(x42|x43))==x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint8_t x46 = UINT8_MAX;
	static int16_t x47 = -1;
	int8_t x48 = -13;
	volatile int32_t t11 = -22321;

    t11 = ((x45|(x46|x47))==x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x50 = -1;
	volatile int16_t x51 = 930;
	uint64_t x52 = UINT64_MAX;

    t12 = ((x49|(x50|x51))==x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = INT8_MIN;
	uint32_t x54 = 6U;
	volatile uint64_t x55 = UINT64_MAX;
	static int32_t x56 = -1;
	static volatile int32_t t13 = 0;

    t13 = ((x53|(x54|x55))==x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint32_t x57 = 1U;
	int32_t x58 = INT32_MIN;
	int8_t x59 = INT8_MIN;
	volatile int64_t x60 = INT64_MIN;
	volatile int32_t t14 = 20;

    t14 = ((x57|(x58|x59))==x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = 80;
	int32_t x62 = INT32_MIN;
	int8_t x64 = -1;
	int32_t t15 = 7212476;

    t15 = ((x61|(x62|x63))==x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x65 = INT64_MIN;
	static uint64_t x66 = 2023405972LLU;
	int32_t x67 = INT32_MAX;

    t16 = ((x65|(x66|x67))==x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = INT16_MIN;
	int8_t x70 = 10;
	static int8_t x71 = INT8_MAX;
	uint8_t x72 = 7U;
	volatile int32_t t17 = 10239;

    t17 = ((x69|(x70|x71))==x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint8_t x74 = 17U;
	uint64_t x75 = UINT64_MAX;
	static int8_t x76 = INT8_MAX;
	int32_t t18 = -5310;

    t18 = ((x73|(x74|x75))==x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = INT8_MIN;
	static int16_t x78 = -2792;

    t19 = ((x77|(x78|x79))==x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x81 = INT8_MIN;
	static uint32_t x82 = UINT32_MAX;
	uint16_t x84 = 234U;
	volatile int32_t t20 = -216;

    t20 = ((x81|(x82|x83))==x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x85 = -2;
	uint16_t x86 = UINT16_MAX;
	static int64_t x87 = INT64_MAX;
	volatile int32_t t21 = 2;

    t21 = ((x85|(x86|x87))==x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x89 = -1;
	volatile int32_t x91 = -31087748;
	int32_t x92 = -1533;
	volatile int32_t t22 = 832;

    t22 = ((x89|(x90|x91))==x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x93 = UINT16_MAX;
	volatile uint64_t x95 = UINT64_MAX;
	volatile int64_t x96 = 187771515LL;
	volatile int32_t t23 = -14980;

    t23 = ((x93|(x94|x95))==x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = INT32_MIN;
	volatile int16_t x98 = -1;
	volatile int32_t t24 = -1;

    t24 = ((x97|(x98|x99))==x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x101 = 10LLU;
	int64_t x103 = -1LL;
	volatile int16_t x104 = INT16_MIN;
	volatile int32_t t25 = -6992729;

    t25 = ((x101|(x102|x103))==x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = INT8_MIN;
	int64_t x106 = INT64_MIN;
	volatile int32_t x108 = 10250;
	int32_t t26 = 563728049;

    t26 = ((x105|(x106|x107))==x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = -1;
	uint8_t x110 = 0U;
	static uint16_t x111 = UINT16_MAX;
	int32_t t27 = -4392;

    t27 = ((x109|(x110|x111))==x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile uint8_t x113 = 99U;
	static uint8_t x114 = 58U;
	static int32_t x115 = 10386658;
	int16_t x116 = INT16_MIN;
	int32_t t28 = 19276;

    t28 = ((x113|(x114|x115))==x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = -148187843;
	int64_t x119 = INT64_MIN;
	volatile int32_t t29 = -646250663;

    t29 = ((x117|(x118|x119))==x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = -285;
	int32_t x122 = INT32_MIN;
	volatile int32_t t30 = 6415;

    t30 = ((x121|(x122|x123))==x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x125 = 458046U;
	static int64_t x126 = 4004152LL;
	uint16_t x127 = 900U;
	int32_t x128 = -120676924;
	volatile int32_t t31 = -1;

    t31 = ((x125|(x126|x127))==x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = INT64_MIN;
	int16_t x130 = INT16_MIN;
	volatile int8_t x132 = -1;
	volatile int32_t t32 = 7;

    t32 = ((x129|(x130|x131))==x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x133 = UINT64_MAX;
	int8_t x134 = -1;
	uint8_t x135 = 17U;
	static uint64_t x136 = 24785439LLU;
	int32_t t33 = -12;

    t33 = ((x133|(x134|x135))==x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint16_t x137 = 1U;
	uint8_t x138 = UINT8_MAX;
	volatile int8_t x140 = -62;
	int32_t t34 = 3059;

    t34 = ((x137|(x138|x139))==x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x141 = INT16_MAX;
	int32_t x142 = -8;
	int16_t x144 = INT16_MIN;
	static int32_t t35 = 35968674;

    t35 = ((x141|(x142|x143))==x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = -1;
	uint16_t x146 = UINT16_MAX;
	int16_t x148 = 65;
	volatile int32_t t36 = 638930537;

    t36 = ((x145|(x146|x147))==x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x149 = INT8_MAX;
	int64_t x151 = -1LL;
	static int32_t t37 = 925;

    t37 = ((x149|(x150|x151))==x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint64_t x153 = 23138706LLU;
	int32_t x154 = -1;
	static int8_t x155 = 3;
	static int16_t x156 = -1;
	int32_t t38 = 44211;

    t38 = ((x153|(x154|x155))==x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x157 = -1;
	int64_t x158 = -1944266695754384504LL;
	int8_t x159 = INT8_MIN;
	uint64_t x160 = UINT64_MAX;
	int32_t t39 = -8;

    t39 = ((x157|(x158|x159))==x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x161 = 1001;
	int16_t x162 = INT16_MIN;
	int64_t x163 = INT64_MAX;
	volatile int8_t x164 = -1;
	volatile int32_t t40 = 239531247;

    t40 = ((x161|(x162|x163))==x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x165 = 52040995U;
	static volatile uint32_t x166 = 10U;
	int16_t x167 = -1;
	volatile int8_t x168 = -1;
	int32_t t41 = 23;

    t41 = ((x165|(x166|x167))==x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = 0;
	volatile int8_t x171 = 0;
	int16_t x172 = INT16_MIN;
	volatile int32_t t42 = -22631779;

    t42 = ((x169|(x170|x171))==x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x174 = INT64_MAX;
	int16_t x175 = INT16_MIN;
	uint32_t x176 = 6123183U;
	int32_t t43 = 3305;

    t43 = ((x173|(x174|x175))==x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int16_t x177 = -1;
	uint16_t x178 = 26U;
	volatile uint8_t x179 = 1U;
	volatile int8_t x180 = -1;
	int32_t t44 = -249646662;

    t44 = ((x177|(x178|x179))==x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x181 = 213511U;
	uint8_t x182 = UINT8_MAX;
	static int64_t x183 = -1LL;
	int16_t x184 = -1;
	static volatile int32_t t45 = -1220;

    t45 = ((x181|(x182|x183))==x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x185 = INT64_MAX;
	int64_t x186 = -160957070193216155LL;
	int16_t x187 = INT16_MAX;
	static int32_t x188 = INT32_MIN;
	static volatile int32_t t46 = -121878529;

    t46 = ((x185|(x186|x187))==x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x189 = INT16_MIN;
	uint64_t x190 = UINT64_MAX;
	int8_t x191 = -1;
	int32_t x192 = -1;
	volatile int32_t t47 = 7;

    t47 = ((x189|(x190|x191))==x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x193 = 0U;
	static uint64_t x196 = 4LLU;
	int32_t t48 = -3;

    t48 = ((x193|(x194|x195))==x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x198 = 6U;
	int32_t t49 = 6046;

    t49 = ((x197|(x198|x199))==x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = 2;
	volatile int32_t x202 = INT32_MIN;
	int32_t x203 = 10;
	int16_t x204 = INT16_MIN;
	int32_t t50 = -59636;

    t50 = ((x201|(x202|x203))==x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x207 = INT32_MIN;
	uint8_t x208 = 14U;
	static int32_t t51 = -359236;

    t51 = ((x205|(x206|x207))==x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x210 = INT8_MIN;
	int32_t t52 = -28322;

    t52 = ((x209|(x210|x211))==x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x213 = -1417;
	volatile uint16_t x214 = UINT16_MAX;
	static volatile int32_t x215 = -4126334;
	int32_t x216 = INT32_MIN;

    t53 = ((x213|(x214|x215))==x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x218 = UINT32_MAX;
	static uint64_t x219 = 2389989690204953LLU;
	static int64_t x220 = -1LL;
	int32_t t54 = 1;

    t54 = ((x217|(x218|x219))==x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x221 = 1U;
	static int64_t x222 = INT64_MAX;
	uint16_t x224 = UINT16_MAX;
	volatile int32_t t55 = -153;

    t55 = ((x221|(x222|x223))==x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = -1LL;
	uint8_t x226 = 1U;
	int16_t x227 = -1;
	volatile uint64_t x228 = 2507211910LLU;
	static int32_t t56 = -101;

    t56 = ((x225|(x226|x227))==x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x229 = -3068807896292157LL;
	uint16_t x230 = 3061U;
	int32_t x231 = INT32_MIN;
	volatile int32_t x232 = INT32_MIN;
	volatile int32_t t57 = 1;

    t57 = ((x229|(x230|x231))==x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x234 = INT32_MIN;
	uint8_t x235 = 42U;

    t58 = ((x233|(x234|x235))==x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = INT8_MIN;
	uint64_t x238 = UINT64_MAX;
	static int32_t x240 = INT32_MIN;
	volatile int32_t t59 = -13887563;

    t59 = ((x237|(x238|x239))==x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = -4066591100661106LL;
	uint16_t x242 = 25U;
	int32_t x243 = 1;
	int32_t t60 = -1579;

    t60 = ((x241|(x242|x243))==x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint16_t x245 = 0U;
	static int64_t x248 = INT64_MIN;
	volatile int32_t t61 = -121569;

    t61 = ((x245|(x246|x247))==x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = -1;
	int16_t x250 = 71;
	int8_t x251 = INT8_MIN;
	int16_t x252 = -1;
	volatile int32_t t62 = -391020329;

    t62 = ((x249|(x250|x251))==x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x254 = 11;
	static int8_t x255 = -1;
	int32_t x256 = -959004;
	volatile int32_t t63 = 0;

    t63 = ((x253|(x254|x255))==x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x258 = INT32_MIN;
	volatile uint64_t x259 = UINT64_MAX;
	int8_t x260 = -1;
	volatile int32_t t64 = 1;

    t64 = ((x257|(x258|x259))==x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x261 = INT64_MAX;
	static int64_t x262 = 69788873462274280LL;
	int16_t x263 = -214;
	int16_t x264 = INT16_MAX;
	volatile int32_t t65 = -8;

    t65 = ((x261|(x262|x263))==x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x266 = 78U;
	uint8_t x267 = 5U;
	int32_t t66 = -882225518;

    t66 = ((x265|(x266|x267))==x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x269 = -1;
	int64_t x270 = INT64_MIN;
	int32_t x271 = -1;
	volatile int64_t x272 = -1LL;
	int32_t t67 = 0;

    t67 = ((x269|(x270|x271))==x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile uint64_t x273 = UINT64_MAX;
	volatile int16_t x276 = INT16_MIN;
	static volatile int32_t t68 = -430304410;

    t68 = ((x273|(x274|x275))==x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = INT8_MIN;
	int8_t x278 = INT8_MAX;
	volatile int32_t t69 = -64483;

    t69 = ((x277|(x278|x279))==x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x282 = INT64_MIN;
	int64_t x283 = -171396LL;
	static int32_t x284 = INT32_MIN;
	volatile int32_t t70 = 61787951;

    t70 = ((x281|(x282|x283))==x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = 3057663;
	volatile uint64_t x286 = 1273533334191LLU;
	int64_t x287 = -118714320159624LL;

    t71 = ((x285|(x286|x287))==x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = 1LL;
	volatile uint64_t x290 = 7248912LLU;
	uint16_t x291 = 38U;
	int16_t x292 = INT16_MIN;

    t72 = ((x289|(x290|x291))==x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x294 = 45792318331LLU;
	volatile int8_t x295 = INT8_MIN;
	volatile int16_t x296 = -1;
	volatile int32_t t73 = -11546;

    t73 = ((x293|(x294|x295))==x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x297 = 31781U;
	uint32_t x298 = 24907284U;
	uint32_t x300 = UINT32_MAX;
	volatile int32_t t74 = -18169;

    t74 = ((x297|(x298|x299))==x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = -1;
	uint16_t x302 = UINT16_MAX;
	static int16_t x303 = INT16_MIN;
	volatile int64_t x304 = INT64_MAX;
	volatile int32_t t75 = -5;

    t75 = ((x301|(x302|x303))==x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = INT16_MIN;
	int16_t x306 = 13;
	uint8_t x307 = 18U;
	static volatile int16_t x308 = -635;
	volatile int32_t t76 = -15171;

    t76 = ((x305|(x306|x307))==x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x310 = INT64_MIN;
	int32_t x312 = 18180;
	volatile int32_t t77 = 347;

    t77 = ((x309|(x310|x311))==x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = INT32_MIN;
	static uint16_t x314 = 59U;
	uint64_t x315 = UINT64_MAX;
	uint16_t x316 = UINT16_MAX;
	volatile int32_t t78 = -504;

    t78 = ((x313|(x314|x315))==x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x318 = -40;
	int64_t x319 = INT64_MIN;
	volatile int32_t t79 = 5415041;

    t79 = ((x317|(x318|x319))==x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint16_t x321 = UINT16_MAX;
	int64_t x322 = 190265987534LL;
	int64_t x324 = INT64_MIN;
	volatile int32_t t80 = 7085228;

    t80 = ((x321|(x322|x323))==x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x325 = 3192357902098LLU;
	int64_t x326 = 10181LL;
	int64_t x327 = INT64_MIN;
	static volatile int32_t x328 = -874248;
	int32_t t81 = -13746;

    t81 = ((x325|(x326|x327))==x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x329 = -1;
	volatile int32_t t82 = 509655292;

    t82 = ((x329|(x330|x331))==x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = -1617301;
	static uint32_t x335 = 204U;
	static uint64_t x336 = 15700349408585LLU;
	int32_t t83 = 8257713;

    t83 = ((x333|(x334|x335))==x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x337 = INT16_MAX;
	int8_t x338 = INT8_MAX;
	volatile uint16_t x339 = 5695U;
	static volatile int64_t x340 = 322592887667805LL;

    t84 = ((x337|(x338|x339))==x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x342 = 1312063U;
	int8_t x343 = -1;
	volatile int16_t x344 = INT16_MIN;

    t85 = ((x341|(x342|x343))==x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x345 = 1104U;
	static int64_t x346 = -41692979881693LL;
	int16_t x347 = 4037;
	uint16_t x348 = UINT16_MAX;

    t86 = ((x345|(x346|x347))==x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x349 = INT64_MIN;
	volatile int8_t x351 = 3;
	int8_t x352 = INT8_MAX;

    t87 = ((x349|(x350|x351))==x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = -1;
	uint32_t x354 = 940655188U;
	uint32_t x355 = 50U;
	static int32_t x356 = INT32_MAX;
	volatile int32_t t88 = -19857;

    t88 = ((x353|(x354|x355))==x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = 40;
	int16_t x358 = 12910;
	uint8_t x359 = 15U;
	int16_t x360 = INT16_MAX;

    t89 = ((x357|(x358|x359))==x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x361 = INT64_MIN;
	int64_t x363 = 247295936793438LL;
	int16_t x364 = INT16_MIN;
	volatile int32_t t90 = 65297566;

    t90 = ((x361|(x362|x363))==x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x365 = 7457637U;
	uint32_t x366 = UINT32_MAX;
	static int8_t x367 = 1;
	uint16_t x368 = 499U;
	volatile int32_t t91 = 807118;

    t91 = ((x365|(x366|x367))==x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x369 = -1;
	int8_t x370 = INT8_MIN;
	int8_t x372 = -11;
	int32_t t92 = -176;

    t92 = ((x369|(x370|x371))==x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x373 = UINT16_MAX;
	uint32_t x374 = 443084536U;
	uint64_t x375 = 121670330177LLU;
	uint16_t x376 = UINT16_MAX;
	volatile int32_t t93 = -2117;

    t93 = ((x373|(x374|x375))==x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x378 = UINT64_MAX;
	int64_t x379 = INT64_MIN;
	int16_t x380 = INT16_MIN;
	volatile int32_t t94 = -190514;

    t94 = ((x377|(x378|x379))==x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = INT64_MIN;
	int32_t x383 = -8759;
	volatile uint64_t x384 = UINT64_MAX;
	int32_t t95 = 6923;

    t95 = ((x381|(x382|x383))==x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x386 = 21U;
	int64_t x387 = INT64_MIN;

    t96 = ((x385|(x386|x387))==x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x389 = INT16_MAX;
	uint16_t x390 = UINT16_MAX;
	int32_t x391 = -27714;
	uint16_t x392 = 25872U;
	int32_t t97 = 19950573;

    t97 = ((x389|(x390|x391))==x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x393 = INT32_MAX;
	int32_t x394 = INT32_MAX;
	int16_t x395 = INT16_MIN;
	volatile int8_t x396 = -1;
	int32_t t98 = 2;

    t98 = ((x393|(x394|x395))==x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x398 = 0;
	uint16_t x399 = 3820U;
	static int16_t x400 = INT16_MAX;
	volatile int32_t t99 = 0;

    t99 = ((x397|(x398|x399))==x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x403 = UINT16_MAX;
	uint16_t x404 = 480U;
	volatile int32_t t100 = 125093412;

    t100 = ((x401|(x402|x403))==x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x406 = INT64_MIN;
	int32_t x407 = -41827002;
	uint8_t x408 = 0U;
	volatile int32_t t101 = -142868;

    t101 = ((x405|(x406|x407))==x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint8_t x409 = 107U;
	uint8_t x410 = UINT8_MAX;
	static int8_t x411 = 10;
	int16_t x412 = INT16_MIN;
	volatile int32_t t102 = 29410;

    t102 = ((x409|(x410|x411))==x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x413 = INT64_MIN;
	volatile uint32_t x414 = 831652U;
	static int32_t x415 = INT32_MIN;
	static uint64_t x416 = 30281359790LLU;
	static int32_t t103 = -6231;

    t103 = ((x413|(x414|x415))==x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = INT32_MAX;
	int32_t x418 = INT32_MIN;
	uint8_t x419 = 2U;
	static int8_t x420 = INT8_MAX;
	volatile int32_t t104 = 0;

    t104 = ((x417|(x418|x419))==x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint64_t x421 = 41158LLU;
	int32_t x422 = INT32_MIN;
	uint32_t x423 = UINT32_MAX;
	int8_t x424 = 1;
	int32_t t105 = -9272420;

    t105 = ((x421|(x422|x423))==x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x425 = INT32_MIN;
	volatile int64_t x426 = -518738380556482LL;
	int8_t x427 = INT8_MIN;

    t106 = ((x425|(x426|x427))==x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint64_t x429 = 3LLU;
	static int16_t x430 = -1;
	int64_t x431 = INT64_MIN;
	volatile uint8_t x432 = 0U;
	int32_t t107 = 239896273;

    t107 = ((x429|(x430|x431))==x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x433 = 38U;
	int8_t x434 = INT8_MIN;
	static int16_t x435 = 83;
	static volatile int64_t x436 = 9430624060566368LL;
	int32_t t108 = 25335986;

    t108 = ((x433|(x434|x435))==x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x437 = -1;
	uint32_t x439 = UINT32_MAX;
	volatile uint8_t x440 = UINT8_MAX;
	volatile int32_t t109 = 8122;

    t109 = ((x437|(x438|x439))==x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x441 = 17U;
	volatile uint64_t x442 = UINT64_MAX;
	int16_t x443 = INT16_MAX;

    t110 = ((x441|(x442|x443))==x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = INT32_MIN;
	int32_t x446 = 2;
	uint64_t x448 = 29LLU;
	static volatile int32_t t111 = 10229;

    t111 = ((x445|(x446|x447))==x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x449 = INT32_MIN;
	int16_t x452 = -1;
	volatile int32_t t112 = -50903;

    t112 = ((x449|(x450|x451))==x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x453 = INT32_MIN;
	volatile uint64_t x454 = UINT64_MAX;
	int64_t x455 = INT64_MIN;
	static int8_t x456 = -1;
	static int32_t t113 = 308;

    t113 = ((x453|(x454|x455))==x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x457 = -2274;
	int8_t x458 = INT8_MAX;
	static volatile int8_t x460 = -1;
	volatile int32_t t114 = 1623;

    t114 = ((x457|(x458|x459))==x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = INT64_MAX;
	static int32_t x462 = INT32_MAX;
	uint32_t x463 = 410116041U;

    t115 = ((x461|(x462|x463))==x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x466 = 26U;
	int32_t x467 = INT32_MIN;
	int8_t x468 = 0;
	int32_t t116 = -32393;

    t116 = ((x465|(x466|x467))==x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = INT64_MIN;
	volatile uint16_t x470 = UINT16_MAX;
	int16_t x472 = -1;

    t117 = ((x469|(x470|x471))==x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint32_t x474 = 903267476U;
	int64_t x475 = INT64_MIN;
	int16_t x476 = 0;
	volatile int32_t t118 = 9;

    t118 = ((x473|(x474|x475))==x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x478 = INT32_MIN;
	uint16_t x479 = UINT16_MAX;
	int8_t x480 = -1;
	int32_t t119 = 1316;

    t119 = ((x477|(x478|x479))==x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = -63412LL;
	uint8_t x483 = 0U;
	static int8_t x484 = 4;
	static int32_t t120 = -57;

    t120 = ((x481|(x482|x483))==x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = INT64_MIN;
	uint8_t x486 = 0U;
	uint16_t x487 = UINT16_MAX;
	int32_t x488 = INT32_MIN;
	static volatile int32_t t121 = 0;

    t121 = ((x485|(x486|x487))==x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x489 = 15799316;
	uint32_t x492 = 979708707U;
	static volatile int32_t t122 = -4;

    t122 = ((x489|(x490|x491))==x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = 1861865398742169LL;
	static volatile uint32_t x494 = 85723U;
	int32_t x495 = INT32_MIN;
	uint32_t x496 = UINT32_MAX;

    t123 = ((x493|(x494|x495))==x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x497 = UINT16_MAX;
	uint64_t x498 = UINT64_MAX;
	int32_t x499 = -1;
	uint32_t x500 = UINT32_MAX;

    t124 = ((x497|(x498|x499))==x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x502 = INT16_MIN;
	int16_t x503 = INT16_MAX;
	volatile int32_t x504 = -100694823;
	static volatile int32_t t125 = -128;

    t125 = ((x501|(x502|x503))==x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x505 = INT64_MIN;
	uint32_t x506 = 2U;
	static int16_t x508 = 1;
	int32_t t126 = 920869;

    t126 = ((x505|(x506|x507))==x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint32_t x509 = 929553U;
	int16_t x510 = INT16_MIN;
	int64_t x511 = INT64_MIN;
	uint8_t x512 = UINT8_MAX;

    t127 = ((x509|(x510|x511))==x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = -1LL;
	uint64_t x514 = UINT64_MAX;
	static uint64_t x515 = 642611341673154225LLU;
	static uint16_t x516 = 10U;
	volatile int32_t t128 = 4229;

    t128 = ((x513|(x514|x515))==x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x518 = INT16_MIN;
	volatile int16_t x519 = INT16_MAX;
	int64_t x520 = -94LL;

    t129 = ((x517|(x518|x519))==x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = INT8_MIN;
	int32_t x522 = -1;
	static int16_t x523 = INT16_MIN;

    t130 = ((x521|(x522|x523))==x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x526 = 0;
	static int16_t x527 = -1;
	int64_t x528 = INT64_MIN;
	volatile int32_t t131 = 5651;

    t131 = ((x525|(x526|x527))==x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x530 = INT8_MIN;
	volatile int32_t x531 = INT32_MIN;
	int64_t x532 = INT64_MIN;
	int32_t t132 = -313407;

    t132 = ((x529|(x530|x531))==x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x534 = UINT32_MAX;
	uint8_t x535 = 0U;
	int16_t x536 = -1;
	int32_t t133 = 20866945;

    t133 = ((x533|(x534|x535))==x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int32_t x537 = 281910;
	uint64_t x538 = 38914619874LLU;
	int64_t x539 = INT64_MIN;
	static uint8_t x540 = 46U;
	static int32_t t134 = 0;

    t134 = ((x537|(x538|x539))==x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x542 = INT16_MIN;
	int32_t t135 = 70629;

    t135 = ((x541|(x542|x543))==x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x546 = 1U;
	int16_t x547 = INT16_MAX;
	volatile uint16_t x548 = 11U;
	static int32_t t136 = -40024609;

    t136 = ((x545|(x546|x547))==x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint64_t x550 = 0LLU;
	uint8_t x551 = UINT8_MAX;
	volatile int32_t t137 = -397884371;

    t137 = ((x549|(x550|x551))==x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x553 = -13;
	volatile uint8_t x554 = UINT8_MAX;
	uint16_t x555 = 3U;
	volatile uint64_t x556 = 696754181490LLU;
	volatile int32_t t138 = 16602703;

    t138 = ((x553|(x554|x555))==x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x557 = -1;
	static uint8_t x559 = 5U;
	int8_t x560 = INT8_MIN;

    t139 = ((x557|(x558|x559))==x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x561 = INT16_MAX;
	volatile int64_t x562 = INT64_MIN;
	uint64_t x563 = UINT64_MAX;
	int64_t x564 = INT64_MIN;
	static volatile int32_t t140 = 3;

    t140 = ((x561|(x562|x563))==x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int8_t x567 = -1;
	static uint8_t x568 = 0U;
	int32_t t141 = -34718;

    t141 = ((x565|(x566|x567))==x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x569 = 14U;
	static int8_t x570 = INT8_MIN;
	static uint16_t x572 = 3206U;
	int32_t t142 = -53643;

    t142 = ((x569|(x570|x571))==x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x573 = 0U;
	uint32_t x574 = UINT32_MAX;
	volatile int8_t x575 = -1;
	int16_t x576 = INT16_MAX;
	int32_t t143 = -922797;

    t143 = ((x573|(x574|x575))==x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x577 = 5;
	volatile int8_t x578 = INT8_MIN;
	static volatile int32_t x579 = INT32_MIN;

    t144 = ((x577|(x578|x579))==x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x582 = -14;
	uint8_t x583 = UINT8_MAX;
	int8_t x584 = INT8_MIN;
	volatile int32_t t145 = -1067;

    t145 = ((x581|(x582|x583))==x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x585 = INT64_MIN;
	uint8_t x587 = 7U;
	volatile int32_t t146 = 20915;

    t146 = ((x585|(x586|x587))==x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x589 = INT8_MAX;
	int16_t x590 = -6;
	int8_t x591 = -1;
	volatile int32_t t147 = -1208452;

    t147 = ((x589|(x590|x591))==x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = -1LL;
	int16_t x594 = -1;
	volatile int32_t x595 = INT32_MIN;
	static int16_t x596 = INT16_MAX;
	volatile int32_t t148 = -30470;

    t148 = ((x593|(x594|x595))==x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = -1;
	int64_t x598 = 1LL;
	int16_t x599 = -1;
	int64_t x600 = INT64_MAX;

    t149 = ((x597|(x598|x599))==x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x601 = -1;
	uint16_t x602 = 26618U;
	int16_t x603 = INT16_MAX;
	int8_t x604 = INT8_MIN;

    t150 = ((x601|(x602|x603))==x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = INT64_MIN;
	uint32_t x607 = UINT32_MAX;
	int32_t x608 = INT32_MIN;
	static volatile int32_t t151 = -10187;

    t151 = ((x605|(x606|x607))==x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x610 = INT64_MAX;
	int8_t x612 = INT8_MAX;

    t152 = ((x609|(x610|x611))==x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x613 = UINT16_MAX;
	static volatile int64_t x614 = 1146161475LL;
	int32_t x615 = INT32_MIN;
	int32_t x616 = -76428968;
	volatile int32_t t153 = 547;

    t153 = ((x613|(x614|x615))==x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint8_t x617 = 4U;
	volatile uint8_t x619 = 15U;
	int64_t x620 = INT64_MAX;

    t154 = ((x617|(x618|x619))==x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = INT64_MIN;
	uint32_t x622 = 1631956342U;
	int8_t x623 = -10;
	static uint16_t x624 = UINT16_MAX;
	volatile int32_t t155 = 0;

    t155 = ((x621|(x622|x623))==x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = INT32_MAX;
	uint32_t x627 = 792U;
	volatile uint16_t x628 = 317U;
	int32_t t156 = -706418;

    t156 = ((x625|(x626|x627))==x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint32_t x629 = UINT32_MAX;
	uint8_t x630 = UINT8_MAX;
	volatile int64_t x631 = -352742605757782LL;
	uint64_t x632 = UINT64_MAX;
	volatile int32_t t157 = 567377380;

    t157 = ((x629|(x630|x631))==x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x633 = INT32_MIN;
	static volatile int32_t x634 = -1;
	static volatile int16_t x635 = -602;
	int8_t x636 = INT8_MAX;
	volatile int32_t t158 = -521010081;

    t158 = ((x633|(x634|x635))==x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint16_t x637 = 529U;
	int8_t x638 = INT8_MIN;
	int8_t x639 = INT8_MAX;
	int16_t x640 = INT16_MAX;
	int32_t t159 = 56697032;

    t159 = ((x637|(x638|x639))==x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x642 = -3;
	volatile int8_t x643 = INT8_MIN;
	int16_t x644 = INT16_MIN;

    t160 = ((x641|(x642|x643))==x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile uint8_t x645 = UINT8_MAX;
	static int64_t x646 = INT64_MIN;
	volatile uint16_t x647 = 23543U;
	int32_t t161 = -309546510;

    t161 = ((x645|(x646|x647))==x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = -29;
	int64_t x650 = INT64_MIN;
	static int8_t x651 = INT8_MIN;
	volatile uint32_t x652 = 0U;
	volatile int32_t t162 = 31663;

    t162 = ((x649|(x650|x651))==x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = -381726398;
	int8_t x654 = INT8_MIN;
	uint8_t x656 = UINT8_MAX;
	int32_t t163 = -1;

    t163 = ((x653|(x654|x655))==x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x660 = -1;
	int32_t t164 = 13729;

    t164 = ((x657|(x658|x659))==x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x663 = -1;
	int8_t x664 = 15;

    t165 = ((x661|(x662|x663))==x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int64_t x665 = INT64_MAX;
	uint64_t x666 = 41261LLU;
	static int16_t x667 = -1;
	int64_t x668 = -107LL;
	int32_t t166 = 4887;

    t166 = ((x665|(x666|x667))==x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x669 = 17U;
	int8_t x670 = -1;
	int64_t x671 = -1LL;
	static volatile int64_t x672 = -3747828630137LL;
	static int32_t t167 = -11675722;

    t167 = ((x669|(x670|x671))==x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x675 = -96292;
	static int32_t x676 = -1;
	static int32_t t168 = 251670214;

    t168 = ((x673|(x674|x675))==x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint32_t x678 = UINT32_MAX;
	uint16_t x679 = UINT16_MAX;
	int32_t t169 = 0;

    t169 = ((x677|(x678|x679))==x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = INT32_MIN;
	uint16_t x682 = 1676U;
	static int16_t x683 = -2676;
	int32_t t170 = 394074131;

    t170 = ((x681|(x682|x683))==x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x685 = -1;
	int8_t x686 = 14;
	uint64_t x687 = UINT64_MAX;
	int32_t t171 = -3893548;

    t171 = ((x685|(x686|x687))==x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint16_t x690 = 36U;
	uint32_t x691 = UINT32_MAX;
	int32_t x692 = -1;
	int32_t t172 = 140340;

    t172 = ((x689|(x690|x691))==x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x693 = 121885;
	int32_t x694 = INT32_MAX;
	uint8_t x695 = UINT8_MAX;
	static volatile int8_t x696 = INT8_MIN;
	volatile int32_t t173 = 67369059;

    t173 = ((x693|(x694|x695))==x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x697 = 29142656U;
	volatile int32_t t174 = -4;

    t174 = ((x697|(x698|x699))==x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint8_t x701 = 24U;
	uint16_t x702 = UINT16_MAX;
	volatile uint32_t x703 = 200549331U;
	uint64_t x704 = 7LLU;

    t175 = ((x701|(x702|x703))==x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = 56;
	int64_t x706 = -1LL;
	volatile int8_t x707 = -1;
	volatile int8_t x708 = INT8_MIN;
	volatile int32_t t176 = 3855627;

    t176 = ((x705|(x706|x707))==x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = INT64_MAX;
	uint64_t x710 = 224680971249572LLU;
	volatile int32_t t177 = 501424;

    t177 = ((x709|(x710|x711))==x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int16_t x713 = INT16_MAX;
	int8_t x714 = INT8_MAX;
	volatile int16_t x715 = INT16_MAX;
	static int32_t x716 = INT32_MAX;

    t178 = ((x713|(x714|x715))==x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x717 = -1973954235LL;
	int32_t x718 = INT32_MAX;
	int8_t x720 = INT8_MIN;
	int32_t t179 = -4537;

    t179 = ((x717|(x718|x719))==x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x722 = 60U;
	static int16_t x723 = 7552;
	int16_t x724 = 0;
	int32_t t180 = -169959284;

    t180 = ((x721|(x722|x723))==x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = 0;
	uint8_t x726 = UINT8_MAX;
	uint32_t x727 = 1351036995U;
	static int16_t x728 = -150;
	int32_t t181 = 0;

    t181 = ((x725|(x726|x727))==x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x729 = -1LL;
	volatile int8_t x730 = 18;
	int16_t x732 = 0;

    t182 = ((x729|(x730|x731))==x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x733 = 4491306U;
	int64_t x735 = 65311831013075LL;
	int16_t x736 = INT16_MAX;

    t183 = ((x733|(x734|x735))==x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = INT16_MIN;
	int8_t x739 = INT8_MIN;
	int32_t t184 = -1546857;

    t184 = ((x737|(x738|x739))==x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x742 = -231681;
	int16_t x743 = -1;
	int8_t x744 = 25;
	int32_t t185 = 45082;

    t185 = ((x741|(x742|x743))==x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = INT32_MIN;
	int32_t x746 = INT32_MIN;
	uint64_t x747 = UINT64_MAX;
	int32_t x748 = -1;
	volatile int32_t t186 = 13;

    t186 = ((x745|(x746|x747))==x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = 0;
	static volatile int8_t x751 = -16;
	uint64_t x752 = 15645534113LLU;

    t187 = ((x749|(x750|x751))==x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int8_t x754 = INT8_MIN;
	int8_t x755 = -1;
	uint16_t x756 = UINT16_MAX;
	volatile int32_t t188 = 125314;

    t188 = ((x753|(x754|x755))==x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint64_t x759 = UINT64_MAX;
	volatile int32_t t189 = -70;

    t189 = ((x757|(x758|x759))==x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x761 = INT32_MIN;
	static uint8_t x762 = 0U;
	int16_t x763 = -1;
	int64_t x764 = INT64_MIN;
	volatile int32_t t190 = 26;

    t190 = ((x761|(x762|x763))==x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = INT16_MIN;
	volatile int32_t x766 = -2222;
	int64_t x767 = INT64_MAX;
	static int16_t x768 = INT16_MAX;
	volatile int32_t t191 = 5062299;

    t191 = ((x765|(x766|x767))==x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x769 = 2650657U;
	int64_t x770 = INT64_MIN;
	int16_t x771 = INT16_MIN;
	int8_t x772 = 18;
	int32_t t192 = -1349;

    t192 = ((x769|(x770|x771))==x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint64_t x773 = 3995860686445394LLU;
	static int16_t x774 = 13;
	static volatile int16_t x775 = INT16_MIN;
	static int32_t t193 = -1927733;

    t193 = ((x773|(x774|x775))==x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x777 = 115U;
	static int32_t x778 = -1;
	uint32_t x779 = 44248U;
	volatile int64_t x780 = 27LL;
	int32_t t194 = -1;

    t194 = ((x777|(x778|x779))==x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x781 = 6;
	volatile int32_t x783 = INT32_MIN;
	static int8_t x784 = -1;
	int32_t t195 = -264602993;

    t195 = ((x781|(x782|x783))==x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x785 = -3;
	volatile int8_t x786 = INT8_MIN;
	static int64_t x787 = -1LL;
	volatile int16_t x788 = 1236;

    t196 = ((x785|(x786|x787))==x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint32_t x789 = 32262U;
	static uint8_t x790 = UINT8_MAX;
	int16_t x791 = -1;
	int32_t x792 = -1;

    t197 = ((x789|(x790|x791))==x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x795 = -1;
	volatile int8_t x796 = -13;
	volatile int32_t t198 = 1810655;

    t198 = ((x793|(x794|x795))==x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = -1;
	int16_t x798 = -41;
	static uint16_t x799 = 0U;
	volatile int32_t x800 = INT32_MIN;

    t199 = ((x797|(x798|x799))==x800);

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


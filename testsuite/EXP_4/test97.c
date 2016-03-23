
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

uint64_t x3 = 8756615611399923LLU;
int8_t x10 = INT8_MAX;
uint16_t x20 = UINT16_MAX;
int32_t x27 = 123;
volatile int32_t t5 = -123;
int32_t x29 = -1;
static volatile int32_t x40 = INT32_MIN;
int64_t x41 = -226365662108945LL;
uint64_t x44 = 1058921616950477413LLU;
int64_t t9 = 21775385916748LL;
int32_t x48 = -1;
uint16_t x50 = UINT16_MAX;
volatile uint32_t t12 = UINT32_MAX;
static uint32_t x57 = 32770069U;
volatile int8_t x59 = 1;
uint32_t t13 = 47321U;
static volatile int8_t x61 = -1;
uint16_t x62 = 12U;
volatile int32_t t14 = 20;
int8_t x65 = -1;
volatile int8_t x66 = INT8_MAX;
int8_t x68 = -1;
volatile int64_t x70 = INT64_MAX;
uint16_t x72 = 8U;
int32_t x74 = 5785;
volatile int32_t x77 = INT32_MAX;
int32_t t18 = INT32_MAX;
int16_t x81 = 37;
volatile uint8_t x88 = 4U;
uint8_t x109 = 12U;
int64_t x110 = INT64_MAX;
static int64_t x115 = -1LL;
static int32_t x116 = 1974;
int32_t x118 = INT32_MIN;
int16_t x133 = 1471;
int8_t x134 = -1;
uint8_t x138 = 1U;
volatile int8_t x139 = INT8_MIN;
int32_t x140 = -649697;
static volatile uint64_t x164 = 0LLU;
int32_t t34 = -6660156;
static volatile int8_t x179 = 14;
int32_t t39 = -395527779;
int32_t x196 = -54;
uint64_t x197 = 210LLU;
int64_t x199 = -92216LL;
volatile uint64_t x203 = 92765160129940989LLU;
uint32_t t42 = 87U;
static int64_t x213 = INT64_MIN;
volatile int32_t x216 = -1;
volatile int32_t t49 = -45;
static int64_t x237 = INT64_MIN;
uint16_t x239 = UINT16_MAX;
uint8_t x242 = UINT8_MAX;
volatile uint8_t x249 = UINT8_MAX;
int16_t x251 = -1;
int8_t x252 = -4;
int32_t t54 = -369;
int16_t x265 = -1;
int64_t x268 = -397195398301LL;
int8_t x271 = INT8_MIN;
int16_t x275 = INT16_MIN;
uint8_t x287 = UINT8_MAX;
volatile int32_t t61 = 15;
int8_t x290 = INT8_MIN;
static int16_t x305 = -3;
volatile uint16_t x309 = 15U;
volatile int64_t x316 = -1LL;
uint32_t x323 = 465657U;
static uint32_t x325 = UINT32_MAX;
static int32_t t72 = -737678404;
int8_t x333 = -1;
static int8_t x337 = INT8_MAX;
int16_t x338 = INT16_MIN;
uint8_t x339 = 29U;
uint32_t x340 = UINT32_MAX;
int16_t x353 = INT16_MIN;
volatile int8_t x355 = INT8_MIN;
int32_t t79 = 1816;
static int8_t x362 = -11;
uint64_t x368 = 5567164237728439269LLU;
int8_t x375 = -1;
uint16_t x377 = 1U;
int8_t x379 = -1;
volatile int16_t x382 = -1;
uint64_t x388 = 316LLU;
int32_t t85 = 17;
int32_t x391 = -1;
int32_t x395 = INT32_MIN;
int16_t x405 = INT16_MIN;
int16_t x408 = 1;
int8_t x425 = INT8_MAX;
volatile int32_t t94 = -888585490;
volatile int32_t x433 = INT32_MIN;
static volatile int32_t t96 = -2;
volatile int16_t x455 = INT16_MAX;
int64_t x472 = 167222LL;
int32_t x478 = INT32_MAX;
static uint16_t x480 = 5U;
uint16_t x483 = UINT16_MAX;
static int64_t x486 = 458LL;
uint16_t x487 = 3094U;
volatile uint64_t t106 = 3334781629278LLU;
int8_t x493 = INT8_MAX;
volatile int32_t t108 = 40515;
volatile int16_t x498 = -1;
int8_t x499 = INT8_MIN;
static int64_t x507 = 220472LL;
int32_t x513 = -1;
static uint8_t x514 = 17U;
int8_t x515 = -1;
volatile int32_t x516 = -1;
volatile uint64_t t114 = 11035171908832428LLU;
static uint8_t x535 = 55U;
volatile int32_t x536 = INT32_MIN;
int16_t x544 = 6203;
volatile int32_t t118 = 3613146;
int64_t x545 = INT64_MIN;
int32_t x549 = INT32_MIN;
int64_t x558 = INT64_MIN;
uint16_t x560 = 72U;
static volatile int32_t x564 = 126;
static volatile uint32_t x573 = UINT32_MAX;
int64_t x574 = -1LL;
volatile int64_t x580 = -626852090093182LL;
static volatile uint64_t t127 = 7357303LLU;
int64_t x589 = INT64_MAX;
uint16_t x590 = UINT16_MAX;
static int64_t t129 = INT64_MAX;
int16_t x601 = 450;
static uint32_t x603 = 897U;
static int8_t x625 = INT8_MIN;
int16_t x630 = INT16_MIN;
int16_t x632 = INT16_MIN;
int8_t x634 = INT8_MAX;
static int32_t x638 = -5958264;
uint16_t x639 = 79U;
int8_t x642 = 22;
uint64_t x643 = 9501844809167LLU;
int32_t x645 = 0;
uint32_t t142 = UINT32_MAX;
uint16_t x654 = UINT16_MAX;
static uint32_t x656 = 3494398U;
int16_t x660 = INT16_MIN;
static volatile int32_t t144 = -191712070;
int64_t x665 = INT64_MIN;
static int8_t x666 = -1;
int16_t x667 = -1;
uint64_t x668 = UINT64_MAX;
uint16_t x671 = 34U;
volatile int16_t x672 = -274;
int8_t x685 = INT8_MAX;
uint32_t x687 = UINT32_MAX;
int16_t x688 = -464;
static int32_t x690 = INT32_MAX;
int32_t x698 = -1;
int16_t x699 = -2622;
static int8_t x704 = INT8_MIN;
int8_t x710 = 14;
static int64_t t157 = 2344LL;
int16_t x727 = -1;
uint64_t x729 = 524779579275104LLU;
int64_t t165 = -1970LL;
static volatile int64_t t166 = -503257230986603LL;
static int16_t x766 = 3;
int64_t x770 = INT64_MIN;
int16_t x774 = INT16_MAX;
int64_t x780 = INT64_MAX;
volatile int8_t x792 = INT8_MIN;
volatile uint64_t x793 = UINT64_MAX;
static volatile int32_t t174 = 9697838;
int16_t x807 = -83;
int32_t t175 = 25344216;
static uint8_t x814 = 22U;
int32_t x816 = -1;
static int16_t x829 = INT16_MIN;
int32_t x833 = INT32_MIN;
int32_t t181 = -794786;
int32_t x844 = INT32_MIN;
volatile int16_t x845 = INT16_MAX;
int32_t t183 = -584;
volatile int64_t x856 = 15134037265511LL;
volatile uint32_t x865 = UINT32_MAX;
volatile int16_t x866 = INT16_MAX;
int64_t x874 = 1503408869414LL;
int32_t t188 = 60;
volatile int64_t x877 = -946876380742LL;
uint8_t x890 = 83U;
volatile int32_t x892 = -463;
static int8_t x894 = INT8_MAX;
int32_t x896 = 24;
static int16_t x905 = INT16_MAX;
int8_t x908 = INT8_MIN;
static int32_t t195 = 14648064;
static int32_t x914 = -4973348;
int32_t x915 = INT32_MIN;
int32_t x916 = INT32_MAX;
static uint16_t x918 = UINT16_MAX;
volatile int64_t x924 = -1LL;


void f0(void) {
    	int8_t x1 = -1;
	static int64_t x2 = INT64_MIN;
	volatile int16_t x4 = INT16_MAX;
	static int32_t t0 = -284606455;

    t0 = (x1|(x2!=(x3+x4)));

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint8_t x5 = UINT8_MAX;
	int64_t x6 = INT64_MAX;
	int16_t x7 = INT16_MIN;
	volatile uint32_t x8 = 6190792U;
	volatile int32_t t1 = 20;

    t1 = (x5|(x6!=(x7+x8)));

    if (t1 != 255) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x9 = INT64_MIN;
	int16_t x11 = INT16_MIN;
	volatile uint64_t x12 = 1260LLU;
	volatile int64_t t2 = -4548826030227LL;

    t2 = (x9|(x10!=(x11+x12)));

    if (t2 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x13 = INT8_MIN;
	static uint32_t x14 = UINT32_MAX;
	uint32_t x15 = UINT32_MAX;
	static int64_t x16 = -1LL;
	volatile int32_t t3 = 5083;

    t3 = (x13|(x14!=(x15+x16)));

    if (t3 != -127) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x17 = -24;
	uint16_t x18 = 70U;
	static volatile uint32_t x19 = 6U;
	static volatile int32_t t4 = 27620328;

    t4 = (x17|(x18!=(x19+x20)));

    if (t4 != -23) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x25 = 0;
	volatile uint64_t x26 = UINT64_MAX;
	int32_t x28 = INT32_MIN;

    t5 = (x25|(x26!=(x27+x28)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x30 = INT32_MIN;
	uint16_t x31 = 5882U;
	int8_t x32 = INT8_MIN;
	static int32_t t6 = -906056735;

    t6 = (x29|(x30!=(x31+x32)));

    if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x33 = 110U;
	int64_t x34 = INT64_MIN;
	uint32_t x35 = 154U;
	static int32_t x36 = 85144;
	volatile uint32_t t7 = 14290876U;

    t7 = (x33|(x34!=(x35+x36)));

    if (t7 != 111U) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x37 = INT32_MIN;
	int16_t x38 = INT16_MIN;
	static uint64_t x39 = 70311672975850016LLU;
	volatile int32_t t8 = 1;

    t8 = (x37|(x38!=(x39+x40)));

    if (t8 != -2147483647) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x42 = INT64_MIN;
	int32_t x43 = INT32_MIN;

    t9 = (x41|(x42!=(x43+x44)));

    if (t9 != -226365662108945LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x45 = 1;
	static volatile int64_t x46 = -1LL;
	uint16_t x47 = 28U;
	int32_t t10 = -193534;

    t10 = (x45|(x46!=(x47+x48)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x49 = -506;
	static int32_t x51 = -1;
	static int16_t x52 = -2788;
	static int32_t t11 = -8;

    t11 = (x49|(x50!=(x51+x52)));

    if (t11 != -505) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint32_t x53 = UINT32_MAX;
	int64_t x54 = INT64_MAX;
	uint64_t x55 = 9845773017LLU;
	int32_t x56 = 1;

    t12 = (x53|(x54!=(x55+x56)));

    if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x58 = -1;
	uint32_t x60 = 233861U;

    t13 = (x57|(x58!=(x59+x60)));

    if (t13 != 32770069U) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x63 = -1LL;
	uint64_t x64 = UINT64_MAX;

    t14 = (x61|(x62!=(x63+x64)));

    if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x67 = INT8_MIN;
	static volatile int32_t t15 = 55678;

    t15 = (x65|(x66!=(x67+x68)));

    if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x69 = -1;
	int16_t x71 = INT16_MIN;
	int32_t t16 = 2403024;

    t16 = (x69|(x70!=(x71+x72)));

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x73 = -13;
	int16_t x75 = -1;
	uint32_t x76 = UINT32_MAX;
	int32_t t17 = 106643525;

    t17 = (x73|(x74!=(x75+x76)));

    if (t17 != -13) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x78 = INT8_MIN;
	static int64_t x79 = INT64_MIN;
	static int8_t x80 = INT8_MAX;

    t18 = (x77|(x78!=(x79+x80)));

    if (t18 != INT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x82 = -1;
	volatile int16_t x83 = INT16_MIN;
	uint8_t x84 = 4U;
	int32_t t19 = -266171019;

    t19 = (x81|(x82!=(x83+x84)));

    if (t19 != 37) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x85 = 10;
	int16_t x86 = 1;
	int64_t x87 = INT64_MIN;
	static volatile int32_t t20 = 0;

    t20 = (x85|(x86!=(x87+x88)));

    if (t20 != 11) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x93 = UINT16_MAX;
	volatile int16_t x94 = -6121;
	uint8_t x95 = 8U;
	volatile int16_t x96 = INT16_MAX;
	int32_t t21 = 4;

    t21 = (x93|(x94!=(x95+x96)));

    if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x97 = INT32_MIN;
	static int32_t x98 = INT32_MIN;
	uint32_t x99 = 2819090U;
	static volatile int8_t x100 = -1;
	volatile int32_t t22 = -370201510;

    t22 = (x97|(x98!=(x99+x100)));

    if (t22 != -2147483647) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x111 = 2U;
	uint16_t x112 = 22U;
	static volatile int32_t t23 = 0;

    t23 = (x109|(x110!=(x111+x112)));

    if (t23 != 13) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x113 = 243U;
	static int32_t x114 = INT32_MIN;
	volatile int32_t t24 = -183;

    t24 = (x113|(x114!=(x115+x116)));

    if (t24 != 243) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x117 = INT64_MAX;
	volatile int32_t x119 = INT32_MAX;
	int32_t x120 = INT32_MIN;
	int64_t t25 = INT64_MAX;

    t25 = (x117|(x118!=(x119+x120)));

    if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x129 = -1;
	volatile int8_t x130 = INT8_MIN;
	int8_t x131 = 1;
	int8_t x132 = -1;
	int32_t t26 = 26859;

    t26 = (x129|(x130!=(x131+x132)));

    if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x135 = -1;
	int8_t x136 = -1;
	volatile int32_t t27 = 122091034;

    t27 = (x133|(x134!=(x135+x136)));

    if (t27 != 1471) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x137 = -751;
	int32_t t28 = 29748;

    t28 = (x137|(x138!=(x139+x140)));

    if (t28 != -751) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x141 = INT32_MIN;
	int16_t x142 = INT16_MIN;
	uint8_t x143 = 0U;
	int16_t x144 = -1;
	int32_t t29 = -1607613;

    t29 = (x141|(x142!=(x143+x144)));

    if (t29 != -2147483647) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x145 = 57U;
	int16_t x146 = INT16_MIN;
	static volatile int16_t x147 = INT16_MIN;
	static volatile uint8_t x148 = 1U;
	uint32_t t30 = 745U;

    t30 = (x145|(x146!=(x147+x148)));

    if (t30 != 57U) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x149 = -1405954722845954309LL;
	static int8_t x150 = INT8_MIN;
	int64_t x151 = -4345036272LL;
	int16_t x152 = -2;
	volatile int64_t t31 = 61223842284612LL;

    t31 = (x149|(x150!=(x151+x152)));

    if (t31 != -1405954722845954309LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x153 = -1;
	int16_t x154 = INT16_MIN;
	uint16_t x155 = UINT16_MAX;
	volatile int8_t x156 = -1;
	int32_t t32 = -292;

    t32 = (x153|(x154!=(x155+x156)));

    if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x157 = -1;
	int64_t x158 = 125519113379576LL;
	uint64_t x159 = 98953LLU;
	int16_t x160 = -1;
	int32_t t33 = -18740764;

    t33 = (x157|(x158!=(x159+x160)));

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x161 = UINT16_MAX;
	int16_t x162 = 1;
	int16_t x163 = INT16_MIN;

    t34 = (x161|(x162!=(x163+x164)));

    if (t34 != 65535) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x169 = INT64_MIN;
	static volatile int16_t x170 = 13;
	int32_t x171 = INT32_MAX;
	volatile uint64_t x172 = UINT64_MAX;
	int64_t t35 = 763143068182347LL;

    t35 = (x169|(x170!=(x171+x172)));

    if (t35 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x173 = -1;
	volatile int64_t x174 = INT64_MIN;
	static uint8_t x175 = UINT8_MAX;
	volatile uint32_t x176 = 1458605136U;
	static int32_t t36 = 11547;

    t36 = (x173|(x174!=(x175+x176)));

    if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x177 = INT32_MIN;
	int16_t x178 = 10429;
	int16_t x180 = INT16_MIN;
	static int32_t t37 = -206788011;

    t37 = (x177|(x178!=(x179+x180)));

    if (t37 != -2147483647) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint32_t x185 = 387900U;
	uint8_t x186 = 32U;
	volatile int8_t x187 = 1;
	uint32_t x188 = UINT32_MAX;
	volatile uint32_t t38 = 29392U;

    t38 = (x185|(x186!=(x187+x188)));

    if (t38 != 387901U) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x189 = INT16_MIN;
	volatile uint16_t x190 = 7U;
	static uint8_t x191 = 3U;
	uint64_t x192 = 48119LLU;

    t39 = (x189|(x190!=(x191+x192)));

    if (t39 != -32767) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x193 = 61123;
	int16_t x194 = 7;
	static volatile int8_t x195 = -1;
	volatile int32_t t40 = -204;

    t40 = (x193|(x194!=(x195+x196)));

    if (t40 != 61123) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x198 = -1;
	volatile int32_t x200 = INT32_MAX;
	uint64_t t41 = 51LLU;

    t41 = (x197|(x198!=(x199+x200)));

    if (t41 != 211LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint32_t x201 = 6U;
	uint64_t x202 = 18375954LLU;
	volatile int32_t x204 = INT32_MIN;

    t42 = (x201|(x202!=(x203+x204)));

    if (t42 != 7U) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int16_t x205 = 0;
	uint8_t x206 = 2U;
	int8_t x207 = -3;
	volatile int32_t x208 = -1;
	int32_t t43 = -1;

    t43 = (x205|(x206!=(x207+x208)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x209 = -7663LL;
	int64_t x210 = INT64_MAX;
	int64_t x211 = -583184LL;
	uint8_t x212 = UINT8_MAX;
	int64_t t44 = 60828204728LL;

    t44 = (x209|(x210!=(x211+x212)));

    if (t44 != -7663LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x214 = INT16_MAX;
	volatile int16_t x215 = -151;
	volatile int64_t t45 = 134473LL;

    t45 = (x213|(x214!=(x215+x216)));

    if (t45 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x217 = 527543838LLU;
	uint16_t x218 = 2822U;
	volatile int16_t x219 = INT16_MIN;
	int32_t x220 = -1;
	volatile uint64_t t46 = 158744044LLU;

    t46 = (x217|(x218!=(x219+x220)));

    if (t46 != 527543839LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint32_t x221 = 25628U;
	uint32_t x222 = 9U;
	int32_t x223 = INT32_MIN;
	static uint16_t x224 = 12U;
	uint32_t t47 = 164250U;

    t47 = (x221|(x222!=(x223+x224)));

    if (t47 != 25629U) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x225 = INT8_MIN;
	int64_t x226 = INT64_MIN;
	uint8_t x227 = UINT8_MAX;
	int16_t x228 = 1699;
	volatile int32_t t48 = -662765035;

    t48 = (x225|(x226!=(x227+x228)));

    if (t48 != -127) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x233 = -1;
	int32_t x234 = 4;
	int16_t x235 = INT16_MAX;
	uint64_t x236 = 75566997LLU;

    t49 = (x233|(x234!=(x235+x236)));

    if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x238 = 3764735236170320LLU;
	uint8_t x240 = UINT8_MAX;
	int64_t t50 = -24961066LL;

    t50 = (x237|(x238!=(x239+x240)));

    if (t50 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x241 = -76706LL;
	int16_t x243 = -1;
	volatile int64_t x244 = INT64_MAX;
	int64_t t51 = 9267655LL;

    t51 = (x241|(x242!=(x243+x244)));

    if (t51 != -76705LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x245 = -1;
	volatile uint32_t x246 = UINT32_MAX;
	volatile uint16_t x247 = 122U;
	static int8_t x248 = INT8_MAX;
	volatile int32_t t52 = 0;

    t52 = (x245|(x246!=(x247+x248)));

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x250 = -37403;
	static volatile int32_t t53 = -3769;

    t53 = (x249|(x250!=(x251+x252)));

    if (t53 != 255) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x253 = INT32_MIN;
	uint32_t x254 = 164514188U;
	static int64_t x255 = INT64_MAX;
	int8_t x256 = -1;

    t54 = (x253|(x254!=(x255+x256)));

    if (t54 != -2147483647) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x257 = INT64_MIN;
	static volatile uint32_t x258 = UINT32_MAX;
	int8_t x259 = 1;
	int8_t x260 = 0;
	static volatile int64_t t55 = 0LL;

    t55 = (x257|(x258!=(x259+x260)));

    if (t55 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x261 = -1;
	int8_t x262 = INT8_MAX;
	uint16_t x263 = 1177U;
	int16_t x264 = INT16_MIN;
	volatile int32_t t56 = -1;

    t56 = (x261|(x262!=(x263+x264)));

    if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x266 = 0U;
	uint32_t x267 = 20440077U;
	volatile int32_t t57 = 1540559;

    t57 = (x265|(x266!=(x267+x268)));

    if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x269 = UINT64_MAX;
	int16_t x270 = INT16_MIN;
	int64_t x272 = 7726896616635479LL;
	volatile uint64_t t58 = UINT64_MAX;

    t58 = (x269|(x270!=(x271+x272)));

    if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x273 = 4U;
	uint16_t x274 = 369U;
	int8_t x276 = -1;
	volatile int32_t t59 = -5808;

    t59 = (x273|(x274!=(x275+x276)));

    if (t59 != 5) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int16_t x281 = -941;
	static uint32_t x282 = 31423U;
	volatile uint16_t x283 = 13340U;
	int32_t x284 = -84;
	volatile int32_t t60 = -7;

    t60 = (x281|(x282!=(x283+x284)));

    if (t60 != -941) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x285 = INT8_MIN;
	static uint32_t x286 = 178165747U;
	static int32_t x288 = -1;

    t61 = (x285|(x286!=(x287+x288)));

    if (t61 != -127) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x289 = 12U;
	uint8_t x291 = 3U;
	int32_t x292 = -1;
	volatile uint32_t t62 = 18871U;

    t62 = (x289|(x290!=(x291+x292)));

    if (t62 != 13U) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint16_t x293 = 10844U;
	int64_t x294 = -1LL;
	static uint16_t x295 = UINT16_MAX;
	volatile int16_t x296 = 2899;
	static volatile int32_t t63 = -2219;

    t63 = (x293|(x294!=(x295+x296)));

    if (t63 != 10845) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x297 = -12522606;
	int64_t x298 = -668268684422753LL;
	int16_t x299 = 6;
	static uint32_t x300 = 2U;
	int32_t t64 = -1572341;

    t64 = (x297|(x298!=(x299+x300)));

    if (t64 != -12522605) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint32_t x301 = 4U;
	int64_t x302 = 309839460621719LL;
	int64_t x303 = -1LL;
	static int32_t x304 = 399092;
	volatile uint32_t t65 = 1U;

    t65 = (x301|(x302!=(x303+x304)));

    if (t65 != 5U) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x306 = INT32_MAX;
	uint8_t x307 = 4U;
	int8_t x308 = 1;
	int32_t t66 = -12052265;

    t66 = (x305|(x306!=(x307+x308)));

    if (t66 != -3) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x310 = -22;
	volatile uint64_t x311 = 3886627258LLU;
	int8_t x312 = INT8_MIN;
	int32_t t67 = -54505;

    t67 = (x309|(x310!=(x311+x312)));

    if (t67 != 15) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x313 = 764U;
	uint32_t x314 = 46077U;
	uint32_t x315 = UINT32_MAX;
	int32_t t68 = 58965;

    t68 = (x313|(x314!=(x315+x316)));

    if (t68 != 765) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x317 = -1LL;
	int64_t x318 = INT64_MIN;
	int32_t x319 = 1;
	static int16_t x320 = 1;
	int64_t t69 = 2188LL;

    t69 = (x317|(x318!=(x319+x320)));

    if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x321 = INT16_MIN;
	uint32_t x322 = 351U;
	volatile int32_t x324 = INT32_MIN;
	int32_t t70 = 0;

    t70 = (x321|(x322!=(x323+x324)));

    if (t70 != -32767) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x326 = INT32_MAX;
	static int32_t x327 = INT32_MIN;
	int64_t x328 = 10043730630LL;
	volatile uint32_t t71 = UINT32_MAX;

    t71 = (x325|(x326!=(x327+x328)));

    if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x329 = UINT16_MAX;
	volatile int8_t x330 = INT8_MIN;
	int16_t x331 = INT16_MIN;
	static int16_t x332 = INT16_MIN;

    t72 = (x329|(x330!=(x331+x332)));

    if (t72 != 65535) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x334 = INT64_MIN;
	int32_t x335 = INT32_MAX;
	int32_t x336 = INT32_MIN;
	volatile int32_t t73 = 1;

    t73 = (x333|(x334!=(x335+x336)));

    if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t t74 = -2488387;

    t74 = (x337|(x338!=(x339+x340)));

    if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x341 = -1;
	volatile int16_t x342 = -102;
	int8_t x343 = -1;
	int16_t x344 = INT16_MAX;
	int32_t t75 = 439193;

    t75 = (x341|(x342!=(x343+x344)));

    if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint8_t x345 = 3U;
	int8_t x346 = -21;
	volatile uint32_t x347 = 1U;
	uint16_t x348 = 167U;
	int32_t t76 = -381656;

    t76 = (x345|(x346!=(x347+x348)));

    if (t76 != 3) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x349 = 1124;
	static int16_t x350 = -1;
	int16_t x351 = INT16_MIN;
	int8_t x352 = INT8_MIN;
	static int32_t t77 = 144;

    t77 = (x349|(x350!=(x351+x352)));

    if (t77 != 1125) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x354 = -2512;
	static volatile uint16_t x356 = 30U;
	volatile int32_t t78 = -2;

    t78 = (x353|(x354!=(x355+x356)));

    if (t78 != -32767) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x357 = -1;
	int32_t x358 = 1531;
	uint32_t x359 = 25700U;
	int64_t x360 = INT64_MIN;

    t79 = (x357|(x358!=(x359+x360)));

    if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x361 = 0;
	uint16_t x363 = UINT16_MAX;
	int16_t x364 = INT16_MIN;
	int32_t t80 = 138;

    t80 = (x361|(x362!=(x363+x364)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint16_t x365 = UINT16_MAX;
	int64_t x366 = INT64_MAX;
	volatile int16_t x367 = INT16_MIN;
	static int32_t t81 = -902139;

    t81 = (x365|(x366!=(x367+x368)));

    if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x373 = 498315;
	int16_t x374 = 2483;
	int8_t x376 = -1;
	static int32_t t82 = -128647151;

    t82 = (x373|(x374!=(x375+x376)));

    if (t82 != 498315) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x378 = UINT32_MAX;
	int8_t x380 = INT8_MAX;
	int32_t t83 = -51187;

    t83 = (x377|(x378!=(x379+x380)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x381 = 101U;
	uint16_t x383 = 1062U;
	int8_t x384 = -1;
	int32_t t84 = -302;

    t84 = (x381|(x382!=(x383+x384)));

    if (t84 != 101) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x385 = UINT16_MAX;
	uint32_t x386 = 345U;
	int16_t x387 = 3552;

    t85 = (x385|(x386!=(x387+x388)));

    if (t85 != 65535) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x389 = 24U;
	int64_t x390 = INT64_MAX;
	volatile int64_t x392 = -1LL;
	volatile int32_t t86 = -12;

    t86 = (x389|(x390!=(x391+x392)));

    if (t86 != 25) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x393 = 57555396609LLU;
	static volatile int16_t x394 = INT16_MIN;
	static uint16_t x396 = 6U;
	static uint64_t t87 = 946479980752LLU;

    t87 = (x393|(x394!=(x395+x396)));

    if (t87 != 57555396609LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x401 = INT8_MIN;
	int16_t x402 = -16;
	uint64_t x403 = 91LLU;
	volatile int8_t x404 = INT8_MIN;
	volatile int32_t t88 = -38;

    t88 = (x401|(x402!=(x403+x404)));

    if (t88 != -127) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x406 = 3;
	int16_t x407 = INT16_MIN;
	int32_t t89 = -22899462;

    t89 = (x405|(x406!=(x407+x408)));

    if (t89 != -32767) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x413 = 12;
	int32_t x414 = INT32_MAX;
	volatile uint32_t x415 = 12671U;
	int16_t x416 = -1;
	volatile int32_t t90 = -135;

    t90 = (x413|(x414!=(x415+x416)));

    if (t90 != 13) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x417 = -1LL;
	volatile int8_t x418 = INT8_MIN;
	uint32_t x419 = 64355060U;
	int32_t x420 = INT32_MAX;
	volatile int64_t t91 = 326622341435LL;

    t91 = (x417|(x418!=(x419+x420)));

    if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x421 = INT8_MAX;
	static uint64_t x422 = UINT64_MAX;
	int16_t x423 = -1;
	int64_t x424 = -23992LL;
	volatile int32_t t92 = -2001;

    t92 = (x421|(x422!=(x423+x424)));

    if (t92 != 127) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x426 = -284788869836529281LL;
	volatile int16_t x427 = -1;
	int8_t x428 = -59;
	static int32_t t93 = 4072451;

    t93 = (x425|(x426!=(x427+x428)));

    if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x429 = -1;
	int32_t x430 = -1;
	static uint64_t x431 = 4145118LLU;
	static int16_t x432 = INT16_MIN;

    t94 = (x429|(x430!=(x431+x432)));

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x434 = -382518;
	uint16_t x435 = 844U;
	int16_t x436 = INT16_MAX;
	volatile int32_t t95 = 14386;

    t95 = (x433|(x434!=(x435+x436)));

    if (t95 != -2147483647) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x437 = 8796U;
	int32_t x438 = 313742059;
	int16_t x439 = INT16_MIN;
	static int8_t x440 = -1;

    t96 = (x437|(x438!=(x439+x440)));

    if (t96 != 8797) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x449 = 14831U;
	volatile uint8_t x450 = 11U;
	static int32_t x451 = INT32_MIN;
	int64_t x452 = INT64_MAX;
	volatile uint32_t t97 = 65039124U;

    t97 = (x449|(x450!=(x451+x452)));

    if (t97 != 14831U) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x453 = INT64_MIN;
	int16_t x454 = INT16_MAX;
	int64_t x456 = -142646224119741786LL;
	volatile int64_t t98 = -11063922001801244LL;

    t98 = (x453|(x454!=(x455+x456)));

    if (t98 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x457 = INT8_MIN;
	static int16_t x458 = INT16_MAX;
	uint8_t x459 = 3U;
	int16_t x460 = INT16_MIN;
	volatile int32_t t99 = 243;

    t99 = (x457|(x458!=(x459+x460)));

    if (t99 != -127) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int8_t x461 = -40;
	static int16_t x462 = 7;
	uint64_t x463 = 1156265429748157LLU;
	volatile int64_t x464 = 73489274LL;
	int32_t t100 = 1;

    t100 = (x461|(x462!=(x463+x464)));

    if (t100 != -39) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x465 = INT16_MAX;
	int16_t x466 = -3;
	uint32_t x467 = UINT32_MAX;
	int16_t x468 = -1;
	int32_t t101 = -96874;

    t101 = (x465|(x466!=(x467+x468)));

    if (t101 != 32767) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x469 = 38U;
	int32_t x470 = -1;
	static int16_t x471 = -86;
	volatile int32_t t102 = -170806997;

    t102 = (x469|(x470!=(x471+x472)));

    if (t102 != 39) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x473 = -1LL;
	int32_t x474 = INT32_MAX;
	int8_t x475 = INT8_MAX;
	int32_t x476 = INT32_MIN;
	int64_t t103 = 3LL;

    t103 = (x473|(x474!=(x475+x476)));

    if (t103 != -1LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x477 = 992U;
	uint32_t x479 = 25U;
	volatile int32_t t104 = 440467;

    t104 = (x477|(x478!=(x479+x480)));

    if (t104 != 993) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x481 = INT32_MAX;
	volatile uint8_t x482 = 5U;
	int16_t x484 = -1;
	volatile int32_t t105 = INT32_MAX;

    t105 = (x481|(x482!=(x483+x484)));

    if (t105 != INT32_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x485 = 1565701214397517LLU;
	static int8_t x488 = -1;

    t106 = (x485|(x486!=(x487+x488)));

    if (t106 != 1565701214397517LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x489 = 4647LLU;
	int8_t x490 = 0;
	int8_t x491 = INT8_MIN;
	volatile uint32_t x492 = 1U;
	uint64_t t107 = 1110114507882LLU;

    t107 = (x489|(x490!=(x491+x492)));

    if (t107 != 4647LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x494 = 4284123634542017471LLU;
	int8_t x495 = INT8_MIN;
	volatile int16_t x496 = -1;

    t108 = (x493|(x494!=(x495+x496)));

    if (t108 != 127) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x497 = INT64_MAX;
	int64_t x500 = -163662061099341488LL;
	int64_t t109 = INT64_MAX;

    t109 = (x497|(x498!=(x499+x500)));

    if (t109 != INT64_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x501 = 0;
	static uint32_t x502 = 235U;
	static volatile int64_t x503 = INT64_MIN;
	static uint16_t x504 = 48U;
	volatile int32_t t110 = 200229466;

    t110 = (x501|(x502!=(x503+x504)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x505 = 440565548;
	int16_t x506 = -1;
	volatile uint16_t x508 = 6U;
	int32_t t111 = 2111327;

    t111 = (x505|(x506!=(x507+x508)));

    if (t111 != 440565549) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x509 = INT16_MIN;
	int16_t x510 = INT16_MAX;
	uint8_t x511 = UINT8_MAX;
	int16_t x512 = -1;
	static volatile int32_t t112 = -26655;

    t112 = (x509|(x510!=(x511+x512)));

    if (t112 != -32767) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t t113 = 11642613;

    t113 = (x513|(x514!=(x515+x516)));

    if (t113 != -1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x521 = 3190992LLU;
	static int32_t x522 = INT32_MAX;
	int32_t x523 = 0;
	uint16_t x524 = 1698U;

    t114 = (x521|(x522!=(x523+x524)));

    if (t114 != 3190993LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint32_t x525 = 698299U;
	static volatile int64_t x526 = INT64_MAX;
	int16_t x527 = INT16_MIN;
	int32_t x528 = INT32_MAX;
	uint32_t t115 = 98U;

    t115 = (x525|(x526!=(x527+x528)));

    if (t115 != 698299U) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x533 = 9;
	int16_t x534 = 6338;
	static int32_t t116 = 1;

    t116 = (x533|(x534!=(x535+x536)));

    if (t116 != 9) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x537 = UINT8_MAX;
	volatile int8_t x538 = INT8_MIN;
	int16_t x539 = -1;
	int8_t x540 = INT8_MIN;
	volatile int32_t t117 = -47;

    t117 = (x537|(x538!=(x539+x540)));

    if (t117 != 255) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x541 = INT16_MIN;
	int8_t x542 = INT8_MIN;
	int32_t x543 = INT32_MIN;

    t118 = (x541|(x542!=(x543+x544)));

    if (t118 != -32767) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x546 = INT32_MIN;
	uint64_t x547 = 2660517868994340LLU;
	uint32_t x548 = UINT32_MAX;
	static volatile int64_t t119 = 578439949LL;

    t119 = (x545|(x546!=(x547+x548)));

    if (t119 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x550 = -1LL;
	static int16_t x551 = INT16_MIN;
	int16_t x552 = -397;
	int32_t t120 = 119;

    t120 = (x549|(x550!=(x551+x552)));

    if (t120 != -2147483647) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x553 = -1;
	int8_t x554 = 1;
	int64_t x555 = -53980LL;
	int16_t x556 = -1;
	volatile int32_t t121 = -321736773;

    t121 = (x553|(x554!=(x555+x556)));

    if (t121 != -1) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x557 = INT8_MAX;
	int16_t x559 = INT16_MAX;
	int32_t t122 = 30827;

    t122 = (x557|(x558!=(x559+x560)));

    if (t122 != 127) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x561 = 1;
	int16_t x562 = 242;
	volatile int32_t x563 = INT32_MIN;
	static int32_t t123 = 7796;

    t123 = (x561|(x562!=(x563+x564)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x565 = INT16_MIN;
	static uint8_t x566 = 0U;
	static int8_t x567 = 62;
	int64_t x568 = INT64_MIN;
	static int32_t t124 = 1;

    t124 = (x565|(x566!=(x567+x568)));

    if (t124 != -32767) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x575 = UINT64_MAX;
	int16_t x576 = INT16_MIN;
	volatile uint32_t t125 = UINT32_MAX;

    t125 = (x573|(x574!=(x575+x576)));

    if (t125 != UINT32_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x577 = INT8_MAX;
	int32_t x578 = INT32_MIN;
	static volatile int32_t x579 = 3254515;
	static volatile int32_t t126 = 12;

    t126 = (x577|(x578!=(x579+x580)));

    if (t126 != 127) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x581 = 429958550126LLU;
	uint32_t x582 = UINT32_MAX;
	int8_t x583 = INT8_MAX;
	int16_t x584 = 9720;

    t127 = (x581|(x582!=(x583+x584)));

    if (t127 != 429958550127LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x585 = 97LL;
	uint32_t x586 = UINT32_MAX;
	int32_t x587 = INT32_MIN;
	static uint8_t x588 = 0U;
	int64_t t128 = 3222570387LL;

    t128 = (x585|(x586!=(x587+x588)));

    if (t128 != 97LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x591 = INT16_MIN;
	int64_t x592 = 6167416LL;

    t129 = (x589|(x590!=(x591+x592)));

    if (t129 != INT64_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x593 = INT8_MIN;
	uint64_t x594 = 10371117992609371LLU;
	static volatile int16_t x595 = -28;
	int16_t x596 = INT16_MAX;
	volatile int32_t t130 = -1397295;

    t130 = (x593|(x594!=(x595+x596)));

    if (t130 != -127) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int64_t x597 = 10009227599563LL;
	int16_t x598 = -2;
	static int64_t x599 = INT64_MIN;
	uint8_t x600 = UINT8_MAX;
	static int64_t t131 = 3268867144881539994LL;

    t131 = (x597|(x598!=(x599+x600)));

    if (t131 != 10009227599563LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x602 = INT64_MIN;
	volatile int32_t x604 = 804509775;
	int32_t t132 = 0;

    t132 = (x601|(x602!=(x603+x604)));

    if (t132 != 451) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x605 = 93986230U;
	int32_t x606 = -48;
	int64_t x607 = INT64_MAX;
	volatile int32_t x608 = INT32_MIN;
	static volatile uint32_t t133 = 19U;

    t133 = (x605|(x606!=(x607+x608)));

    if (t133 != 93986231U) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x609 = UINT32_MAX;
	int16_t x610 = INT16_MIN;
	volatile int64_t x611 = INT64_MAX;
	volatile int64_t x612 = INT64_MIN;
	uint32_t t134 = UINT32_MAX;

    t134 = (x609|(x610!=(x611+x612)));

    if (t134 != UINT32_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x617 = 175;
	int8_t x618 = -46;
	int8_t x619 = INT8_MAX;
	uint64_t x620 = UINT64_MAX;
	int32_t t135 = 186957;

    t135 = (x617|(x618!=(x619+x620)));

    if (t135 != 175) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x626 = UINT8_MAX;
	static int32_t x627 = -1;
	int64_t x628 = INT64_MAX;
	int32_t t136 = 129638;

    t136 = (x625|(x626!=(x627+x628)));

    if (t136 != -127) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x629 = -1;
	static uint8_t x631 = UINT8_MAX;
	volatile int32_t t137 = 744695;

    t137 = (x629|(x630!=(x631+x632)));

    if (t137 != -1) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint64_t x633 = UINT64_MAX;
	int32_t x635 = 934;
	volatile int32_t x636 = -4;
	uint64_t t138 = UINT64_MAX;

    t138 = (x633|(x634!=(x635+x636)));

    if (t138 != UINT64_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x637 = -1LL;
	static int8_t x640 = -1;
	int64_t t139 = -101373497164131017LL;

    t139 = (x637|(x638!=(x639+x640)));

    if (t139 != -1LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int32_t x641 = INT32_MIN;
	uint8_t x644 = 3U;
	volatile int32_t t140 = 15;

    t140 = (x641|(x642!=(x643+x644)));

    if (t140 != -2147483647) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x646 = INT32_MIN;
	uint64_t x647 = 9827891351334417LLU;
	volatile uint64_t x648 = 3104122240313906656LLU;
	static volatile int32_t t141 = 1938;

    t141 = (x645|(x646!=(x647+x648)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x649 = UINT32_MAX;
	uint64_t x650 = 17943429LLU;
	static int32_t x651 = INT32_MIN;
	int8_t x652 = INT8_MAX;

    t142 = (x649|(x650!=(x651+x652)));

    if (t142 != UINT32_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x653 = 1450;
	volatile int16_t x655 = INT16_MIN;
	int32_t t143 = 84451350;

    t143 = (x653|(x654!=(x655+x656)));

    if (t143 != 1451) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x657 = 1U;
	uint32_t x658 = UINT32_MAX;
	uint8_t x659 = UINT8_MAX;

    t144 = (x657|(x658!=(x659+x660)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x661 = -4;
	static int64_t x662 = INT64_MAX;
	volatile int8_t x663 = INT8_MIN;
	int32_t x664 = -1089;
	int32_t t145 = 7483;

    t145 = (x661|(x662!=(x663+x664)));

    if (t145 != -3) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int64_t t146 = -38508080321LL;

    t146 = (x665|(x666!=(x667+x668)));

    if (t146 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x669 = 0U;
	static volatile int32_t x670 = -1;
	int32_t t147 = -4171279;

    t147 = (x669|(x670!=(x671+x672)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x677 = 2;
	uint32_t x678 = 399524U;
	int32_t x679 = -15120;
	int16_t x680 = INT16_MAX;
	volatile int32_t t148 = 20990932;

    t148 = (x677|(x678!=(x679+x680)));

    if (t148 != 3) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x681 = INT8_MIN;
	int8_t x682 = INT8_MIN;
	static volatile uint64_t x683 = UINT64_MAX;
	int64_t x684 = INT64_MAX;
	static volatile int32_t t149 = -799;

    t149 = (x681|(x682!=(x683+x684)));

    if (t149 != -127) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x686 = -1;
	int32_t t150 = -10765;

    t150 = (x685|(x686!=(x687+x688)));

    if (t150 != 127) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x689 = -16556001;
	int32_t x691 = INT32_MIN;
	static uint32_t x692 = 54181U;
	volatile int32_t t151 = 282;

    t151 = (x689|(x690!=(x691+x692)));

    if (t151 != -16556001) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint16_t x693 = 918U;
	static uint16_t x694 = 2493U;
	volatile uint16_t x695 = UINT16_MAX;
	static int8_t x696 = INT8_MIN;
	int32_t t152 = 422;

    t152 = (x693|(x694!=(x695+x696)));

    if (t152 != 919) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint8_t x697 = UINT8_MAX;
	int8_t x700 = INT8_MIN;
	volatile int32_t t153 = -206475;

    t153 = (x697|(x698!=(x699+x700)));

    if (t153 != 255) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x701 = -1;
	int32_t x702 = 942043;
	static uint64_t x703 = 6LLU;
	static int32_t t154 = -1138;

    t154 = (x701|(x702!=(x703+x704)));

    if (t154 != -1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x705 = INT16_MAX;
	static int8_t x706 = INT8_MIN;
	volatile int16_t x707 = INT16_MIN;
	volatile int16_t x708 = -1;
	volatile int32_t t155 = 162;

    t155 = (x705|(x706!=(x707+x708)));

    if (t155 != 32767) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x709 = INT32_MIN;
	int8_t x711 = 61;
	static int8_t x712 = 1;
	int32_t t156 = -134903746;

    t156 = (x709|(x710!=(x711+x712)));

    if (t156 != -2147483647) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x713 = 2714112294LL;
	uint8_t x714 = 14U;
	uint64_t x715 = UINT64_MAX;
	uint64_t x716 = 190862921399332873LLU;

    t157 = (x713|(x714!=(x715+x716)));

    if (t157 != 2714112295LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x717 = -1;
	int32_t x718 = INT32_MAX;
	int64_t x719 = 37539549LL;
	static int16_t x720 = -1;
	volatile int32_t t158 = 978;

    t158 = (x717|(x718!=(x719+x720)));

    if (t158 != -1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x721 = -1;
	uint64_t x722 = 574000571533787467LLU;
	uint32_t x723 = UINT32_MAX;
	static int8_t x724 = -51;
	int32_t t159 = 29089844;

    t159 = (x721|(x722!=(x723+x724)));

    if (t159 != -1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x725 = 11U;
	int64_t x726 = INT64_MIN;
	volatile uint16_t x728 = UINT16_MAX;
	volatile int32_t t160 = -27162;

    t160 = (x725|(x726!=(x727+x728)));

    if (t160 != 11) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x730 = INT8_MAX;
	uint16_t x731 = 0U;
	int8_t x732 = INT8_MIN;
	static volatile uint64_t t161 = 8LLU;

    t161 = (x729|(x730!=(x731+x732)));

    if (t161 != 524779579275105LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x733 = 1;
	uint8_t x734 = UINT8_MAX;
	static int8_t x735 = 0;
	static int32_t x736 = INT32_MIN;
	static volatile int32_t t162 = 8;

    t162 = (x733|(x734!=(x735+x736)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x741 = -1;
	volatile uint32_t x742 = UINT32_MAX;
	int8_t x743 = INT8_MIN;
	int16_t x744 = -1;
	int32_t t163 = -1659;

    t163 = (x741|(x742!=(x743+x744)));

    if (t163 != -1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x745 = INT32_MAX;
	volatile int32_t x746 = INT32_MIN;
	volatile uint32_t x747 = UINT32_MAX;
	static int32_t x748 = -1;
	int32_t t164 = INT32_MAX;

    t164 = (x745|(x746!=(x747+x748)));

    if (t164 != INT32_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x749 = INT64_MIN;
	int32_t x750 = INT32_MIN;
	int64_t x751 = -44997466LL;
	int16_t x752 = -2;

    t165 = (x749|(x750!=(x751+x752)));

    if (t165 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x757 = -1LL;
	int64_t x758 = 437546736272345532LL;
	static int8_t x759 = 0;
	int16_t x760 = INT16_MAX;

    t166 = (x757|(x758!=(x759+x760)));

    if (t166 != -1LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x761 = -388;
	int16_t x762 = INT16_MIN;
	uint64_t x763 = 2636654533497LLU;
	int16_t x764 = -2858;
	volatile int32_t t167 = -59;

    t167 = (x761|(x762!=(x763+x764)));

    if (t167 != -387) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x765 = -1LL;
	int32_t x767 = INT32_MIN;
	uint32_t x768 = UINT32_MAX;
	int64_t t168 = -370751079131962LL;

    t168 = (x765|(x766!=(x767+x768)));

    if (t168 != -1LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint32_t x769 = 76U;
	int32_t x771 = -1;
	int16_t x772 = 13201;
	volatile uint32_t t169 = 0U;

    t169 = (x769|(x770!=(x771+x772)));

    if (t169 != 77U) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x773 = INT16_MAX;
	int16_t x775 = INT16_MIN;
	int16_t x776 = -1;
	volatile int32_t t170 = 1;

    t170 = (x773|(x774!=(x775+x776)));

    if (t170 != 32767) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint16_t x777 = 1831U;
	uint8_t x778 = UINT8_MAX;
	static volatile int16_t x779 = -577;
	volatile int32_t t171 = -96583;

    t171 = (x777|(x778!=(x779+x780)));

    if (t171 != 1831) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x789 = INT32_MAX;
	int8_t x790 = INT8_MIN;
	int64_t x791 = 219LL;
	int32_t t172 = INT32_MAX;

    t172 = (x789|(x790!=(x791+x792)));

    if (t172 != INT32_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x794 = -7;
	int8_t x795 = INT8_MIN;
	int8_t x796 = INT8_MIN;
	uint64_t t173 = UINT64_MAX;

    t173 = (x793|(x794!=(x795+x796)));

    if (t173 != UINT64_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x797 = INT16_MIN;
	int32_t x798 = 99324052;
	int16_t x799 = INT16_MAX;
	static uint32_t x800 = 1U;

    t174 = (x797|(x798!=(x799+x800)));

    if (t174 != -32767) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x805 = UINT8_MAX;
	int8_t x806 = 2;
	uint64_t x808 = UINT64_MAX;

    t175 = (x805|(x806!=(x807+x808)));

    if (t175 != 255) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x813 = 62810LLU;
	int16_t x815 = INT16_MIN;
	uint64_t t176 = 15327381543LLU;

    t176 = (x813|(x814!=(x815+x816)));

    if (t176 != 62811LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x817 = 341309562U;
	volatile int64_t x818 = -6978LL;
	int64_t x819 = INT64_MAX;
	int16_t x820 = -1;
	volatile uint32_t t177 = 10200U;

    t177 = (x817|(x818!=(x819+x820)));

    if (t177 != 341309563U) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x821 = UINT32_MAX;
	uint8_t x822 = 6U;
	int64_t x823 = -1LL;
	int16_t x824 = INT16_MAX;
	static uint32_t t178 = UINT32_MAX;

    t178 = (x821|(x822!=(x823+x824)));

    if (t178 != UINT32_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x825 = 138U;
	volatile int32_t x826 = INT32_MAX;
	static int8_t x827 = INT8_MIN;
	int16_t x828 = INT16_MAX;
	uint32_t t179 = 401U;

    t179 = (x825|(x826!=(x827+x828)));

    if (t179 != 139U) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x830 = -16066;
	volatile int32_t x831 = INT32_MAX;
	int64_t x832 = -24026LL;
	static int32_t t180 = 175470;

    t180 = (x829|(x830!=(x831+x832)));

    if (t180 != -32767) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x834 = INT32_MAX;
	int16_t x835 = -1;
	int8_t x836 = -1;

    t181 = (x833|(x834!=(x835+x836)));

    if (t181 != -2147483647) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x841 = -39;
	int8_t x842 = INT8_MIN;
	int8_t x843 = 4;
	volatile int32_t t182 = 789278;

    t182 = (x841|(x842!=(x843+x844)));

    if (t182 != -39) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint16_t x846 = 377U;
	volatile int16_t x847 = 345;
	int32_t x848 = 1;

    t183 = (x845|(x846!=(x847+x848)));

    if (t183 != 32767) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x849 = INT32_MIN;
	volatile uint32_t x850 = 11U;
	uint8_t x851 = UINT8_MAX;
	static uint32_t x852 = 641942279U;
	int32_t t184 = 1164;

    t184 = (x849|(x850!=(x851+x852)));

    if (t184 != -2147483647) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x853 = INT32_MIN;
	volatile uint64_t x854 = 118833494512786045LLU;
	volatile uint64_t x855 = 788839312LLU;
	int32_t t185 = -571726988;

    t185 = (x853|(x854!=(x855+x856)));

    if (t185 != -2147483647) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x857 = 2492;
	static int32_t x858 = -1;
	static int32_t x859 = INT32_MAX;
	int32_t x860 = INT32_MIN;
	volatile int32_t t186 = -171534405;

    t186 = (x857|(x858!=(x859+x860)));

    if (t186 != 2492) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int16_t x867 = INT16_MAX;
	uint16_t x868 = 1U;
	static volatile uint32_t t187 = UINT32_MAX;

    t187 = (x865|(x866!=(x867+x868)));

    if (t187 != UINT32_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int32_t x873 = 152570091;
	static int16_t x875 = INT16_MIN;
	uint32_t x876 = UINT32_MAX;

    t188 = (x873|(x874!=(x875+x876)));

    if (t188 != 152570091) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x878 = INT64_MAX;
	uint32_t x879 = UINT32_MAX;
	int64_t x880 = 57LL;
	int64_t t189 = -7983649LL;

    t189 = (x877|(x878!=(x879+x880)));

    if (t189 != -946876380741LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x881 = INT16_MAX;
	int16_t x882 = -1;
	static int16_t x883 = INT16_MIN;
	int8_t x884 = -1;
	int32_t t190 = 48043;

    t190 = (x881|(x882!=(x883+x884)));

    if (t190 != 32767) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint32_t x889 = UINT32_MAX;
	int16_t x891 = INT16_MIN;
	static volatile uint32_t t191 = UINT32_MAX;

    t191 = (x889|(x890!=(x891+x892)));

    if (t191 != UINT32_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x893 = -1;
	volatile int16_t x895 = -307;
	volatile int32_t t192 = -748410654;

    t192 = (x893|(x894!=(x895+x896)));

    if (t192 != -1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x897 = INT16_MIN;
	static int64_t x898 = INT64_MAX;
	int16_t x899 = INT16_MAX;
	volatile int32_t x900 = 12;
	static int32_t t193 = -7966;

    t193 = (x897|(x898!=(x899+x900)));

    if (t193 != -32767) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x901 = 116U;
	uint8_t x902 = 3U;
	static volatile uint16_t x903 = 9U;
	int16_t x904 = INT16_MIN;
	int32_t t194 = 6775;

    t194 = (x901|(x902!=(x903+x904)));

    if (t194 != 117) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x906 = 13U;
	uint64_t x907 = 1269240767580191833LLU;

    t195 = (x905|(x906!=(x907+x908)));

    if (t195 != 32767) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x909 = -1897;
	static int32_t x910 = INT32_MAX;
	uint64_t x911 = 60LLU;
	int16_t x912 = INT16_MIN;
	int32_t t196 = -66727838;

    t196 = (x909|(x910!=(x911+x912)));

    if (t196 != -1897) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x913 = INT32_MAX;
	volatile int32_t t197 = INT32_MAX;

    t197 = (x913|(x914!=(x915+x916)));

    if (t197 != INT32_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x917 = -1LL;
	uint32_t x919 = 8318230U;
	volatile int64_t x920 = INT64_MIN;
	int64_t t198 = 11192996141LL;

    t198 = (x917|(x918!=(x919+x920)));

    if (t198 != -1LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint32_t x921 = 100U;
	int8_t x922 = -1;
	int64_t x923 = -41276789LL;
	uint32_t t199 = 250804U;

    t199 = (x921|(x922!=(x923+x924)));

    if (t199 != 101U) { NG(); } else { ; }
	
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


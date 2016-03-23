
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

int32_t x4 = -625014;
static volatile int32_t t1 = -1844408;
static uint32_t x10 = 15U;
uint16_t x11 = UINT16_MAX;
int16_t x16 = -1;
int32_t t3 = -87;
int32_t t4 = 994389517;
volatile int32_t x24 = 12;
volatile int64_t x26 = INT64_MAX;
int32_t t7 = 22;
uint16_t x35 = 5U;
int8_t x54 = INT8_MAX;
volatile int32_t x57 = INT32_MAX;
int32_t t14 = -1;
volatile uint16_t x70 = UINT16_MAX;
volatile int32_t t18 = 891097542;
int64_t x79 = -4LL;
uint64_t x80 = UINT64_MAX;
volatile uint8_t x90 = UINT8_MAX;
int64_t x91 = 111107597LL;
static uint8_t x93 = 1U;
uint32_t x97 = 3869U;
volatile uint8_t x102 = 40U;
int32_t x104 = -1;
static volatile int32_t t25 = -6390;
volatile int64_t x109 = INT64_MAX;
static int32_t t27 = -1;
int16_t x118 = INT16_MIN;
int16_t x122 = 0;
uint16_t x123 = 986U;
int64_t x124 = -31444419LL;
volatile int32_t t31 = 0;
static volatile uint16_t x137 = UINT16_MAX;
int8_t x149 = INT8_MIN;
volatile int64_t x150 = INT64_MIN;
int32_t t38 = 109670719;
uint16_t x157 = 10561U;
int8_t x159 = -1;
volatile int32_t x169 = 5979142;
int64_t x170 = -433036LL;
volatile uint64_t x171 = UINT64_MAX;
volatile int64_t x175 = -1LL;
uint64_t x183 = 90832LLU;
int8_t x193 = 22;
int16_t x195 = INT16_MIN;
volatile uint64_t x196 = UINT64_MAX;
uint32_t x197 = 375229U;
uint32_t x198 = 2408637U;
int16_t x205 = -1;
static uint16_t x209 = 3761U;
uint16_t x212 = 5172U;
volatile int32_t t52 = -59;
static volatile int8_t x216 = INT8_MAX;
volatile int8_t x226 = 0;
volatile int8_t x229 = -7;
volatile int8_t x236 = 4;
static volatile uint32_t x239 = 7U;
volatile int32_t x251 = INT32_MIN;
int64_t x253 = INT64_MIN;
static int32_t x259 = INT32_MIN;
static int16_t x261 = -1;
uint64_t x267 = 451334876586883LLU;
volatile int32_t t66 = 9;
int32_t x271 = 163;
int64_t x272 = INT64_MIN;
uint32_t x276 = 1U;
int64_t x283 = 3989073441188914LL;
int32_t x286 = INT32_MAX;
static int64_t x294 = 488347859097353LL;
int16_t x296 = 321;
int32_t t73 = -718;
int32_t t76 = 5193;
uint8_t x309 = UINT8_MAX;
uint32_t x312 = 62412U;
volatile int32_t t77 = -45378052;
int16_t x313 = -1;
int16_t x323 = -1;
uint32_t x324 = 406U;
volatile int32_t t81 = 0;
static volatile int64_t x333 = -206759608336LL;
uint32_t x338 = UINT32_MAX;
uint64_t x347 = UINT64_MAX;
volatile int32_t t86 = 1345;
int8_t x353 = INT8_MIN;
volatile int32_t x360 = -1;
int16_t x365 = 3;
int32_t x371 = -7111385;
volatile int32_t t93 = -1181;
int8_t x379 = -1;
int32_t x380 = 87;
int64_t x383 = INT64_MIN;
uint8_t x384 = UINT8_MAX;
static uint16_t x386 = UINT16_MAX;
uint8_t x388 = UINT8_MAX;
uint16_t x389 = 0U;
int8_t x390 = 0;
uint8_t x395 = 10U;
int16_t x400 = 338;
int16_t x403 = INT16_MAX;
uint16_t x406 = UINT16_MAX;
static int32_t x408 = 499440944;
int16_t x411 = INT16_MAX;
uint64_t x413 = 18077973LLU;
volatile int32_t t103 = -11985;
int8_t x419 = INT8_MIN;
int32_t x420 = -25710;
volatile int32_t t104 = -23;
int8_t x421 = INT8_MIN;
uint64_t x422 = 169241695579989LLU;
int32_t t108 = 24413247;
volatile int32_t x440 = -1;
int16_t x441 = 43;
int32_t x447 = INT32_MIN;
int8_t x448 = INT8_MAX;
int32_t x460 = -1;
volatile int64_t x467 = -1LL;
uint32_t x469 = UINT32_MAX;
static int16_t x476 = -1;
int32_t t118 = -3129306;
int32_t t119 = 946301074;
volatile int16_t x483 = -1;
volatile int64_t x486 = INT64_MIN;
int32_t t121 = -53420328;
static volatile uint64_t x498 = 2501LLU;
int32_t x504 = INT32_MIN;
static int32_t t125 = -132;
uint8_t x506 = UINT8_MAX;
volatile uint8_t x517 = UINT8_MAX;
volatile int32_t t132 = -478322337;
int32_t x549 = INT32_MIN;
volatile int32_t t137 = -22912;
uint64_t x558 = 6131772LLU;
int32_t x572 = -1;
volatile int64_t x573 = INT64_MIN;
int32_t t145 = -391406;
volatile int32_t x585 = -8;
int16_t x588 = INT16_MIN;
uint32_t x590 = 134U;
int16_t x593 = INT16_MAX;
int32_t x596 = -477;
int64_t x600 = -431189LL;
static int32_t t149 = 996;
int32_t x601 = INT32_MIN;
int32_t x607 = -260347770;
static int8_t x612 = -1;
volatile int64_t x621 = -406LL;
int8_t x623 = INT8_MIN;
volatile int8_t x624 = INT8_MIN;
int8_t x627 = INT8_MIN;
static int16_t x628 = INT16_MIN;
int64_t x629 = -7256175LL;
static int32_t x631 = -28;
volatile int32_t t157 = 1;
int64_t x634 = INT64_MIN;
int32_t t160 = -333;
int64_t x650 = -1LL;
volatile int32_t t163 = 8065597;
int8_t x657 = -3;
volatile uint16_t x659 = 28U;
int32_t t164 = 2597165;
int64_t x662 = INT64_MIN;
volatile int64_t x663 = 718891950LL;
volatile int32_t t165 = 737010394;
int8_t x670 = INT8_MIN;
volatile int32_t t168 = -44;
volatile uint32_t x682 = UINT32_MAX;
static int8_t x689 = INT8_MAX;
uint8_t x691 = 1U;
int64_t x693 = 1LL;
int32_t x695 = INT32_MIN;
int32_t t173 = -10754779;
static volatile int64_t x698 = INT64_MIN;
int32_t x701 = -1;
volatile uint8_t x703 = 4U;
volatile int32_t t175 = 204143326;
uint32_t x705 = 1093U;
int16_t x709 = -1;
int32_t x713 = INT32_MIN;
int64_t x714 = 162618771LL;
int32_t t179 = -22073006;
uint16_t x725 = 14812U;
static int32_t x729 = 1;
static int32_t x731 = INT32_MIN;
int64_t x732 = INT64_MIN;
volatile uint32_t x733 = UINT32_MAX;
volatile int32_t t184 = 14023;
volatile uint16_t x743 = 220U;
volatile int32_t t185 = -699739;
int64_t x749 = INT64_MIN;
uint8_t x753 = 29U;
volatile uint64_t x759 = 117LLU;
volatile int32_t t189 = 257;
int32_t t191 = 3427;
int32_t t192 = -1;
static int32_t x778 = INT32_MIN;
uint32_t x782 = UINT32_MAX;
int8_t x788 = 55;
int32_t t196 = 395595;
static uint16_t x793 = UINT16_MAX;
uint8_t x794 = 6U;
static volatile int8_t x796 = -1;
uint8_t x797 = 55U;
int64_t x798 = INT64_MAX;


void f0(void) {
    	volatile int64_t x1 = INT64_MAX;
	static int16_t x2 = -1;
	int64_t x3 = INT64_MIN;
	static volatile int32_t t0 = -176863176;

    t0 = ((x1^(x2>x3))>x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MIN;
	uint16_t x6 = 15U;
	int32_t x7 = -1444;
	static volatile int32_t x8 = -1;

    t1 = ((x5^(x6>x7))>x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = 1039U;
	volatile int64_t x12 = -1LL;
	volatile int32_t t2 = -189918018;

    t2 = ((x9^(x10>x11))>x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint64_t x13 = UINT64_MAX;
	int16_t x14 = INT16_MIN;
	int64_t x15 = INT64_MIN;

    t3 = ((x13^(x14>x15))>x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MAX;
	uint16_t x18 = 136U;
	static volatile int64_t x19 = INT64_MAX;
	static uint64_t x20 = 1358430929443801124LLU;

    t4 = ((x17^(x18>x19))>x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x21 = INT16_MIN;
	volatile int8_t x22 = INT8_MIN;
	int8_t x23 = INT8_MIN;
	int32_t t5 = -6;

    t5 = ((x21^(x22>x23))>x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x25 = -54;
	static volatile uint64_t x27 = 1LLU;
	uint8_t x28 = UINT8_MAX;
	int32_t t6 = -3755;

    t6 = ((x25^(x26>x27))>x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 929U;
	volatile int8_t x30 = 3;
	int32_t x31 = 0;
	static uint16_t x32 = 147U;

    t7 = ((x29^(x30>x31))>x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = -1;
	static int64_t x34 = -1780132442238405LL;
	int8_t x36 = -1;
	volatile int32_t t8 = -427531640;

    t8 = ((x33^(x34>x35))>x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x37 = INT16_MIN;
	volatile int8_t x38 = INT8_MIN;
	int64_t x39 = INT64_MIN;
	int8_t x40 = INT8_MIN;
	volatile int32_t t9 = 14793;

    t9 = ((x37^(x38>x39))>x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = -6LL;
	int64_t x42 = 11377049382491266LL;
	uint32_t x43 = 116578660U;
	int64_t x44 = INT64_MAX;
	volatile int32_t t10 = -6;

    t10 = ((x41^(x42>x43))>x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x45 = -7983648359LL;
	int32_t x46 = -1;
	volatile int64_t x47 = INT64_MIN;
	int8_t x48 = -1;
	volatile int32_t t11 = 0;

    t11 = ((x45^(x46>x47))>x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MIN;
	int64_t x50 = INT64_MIN;
	int64_t x51 = INT64_MIN;
	int32_t x52 = -1;
	int32_t t12 = 0;

    t12 = ((x49^(x50>x51))>x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x53 = 18201463;
	volatile int8_t x55 = -46;
	int32_t x56 = -1;
	static int32_t t13 = -3;

    t13 = ((x53^(x54>x55))>x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x58 = 112U;
	static int16_t x59 = -612;
	volatile int64_t x60 = 13887334284100807LL;

    t14 = ((x57^(x58>x59))>x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x61 = -1;
	int32_t x62 = INT32_MIN;
	volatile uint32_t x63 = 3374754U;
	uint8_t x64 = 2U;
	volatile int32_t t15 = 25260;

    t15 = ((x61^(x62>x63))>x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x65 = INT32_MIN;
	uint16_t x66 = UINT16_MAX;
	int32_t x67 = INT32_MIN;
	int64_t x68 = INT64_MAX;
	int32_t t16 = -1052960399;

    t16 = ((x65^(x66>x67))>x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x69 = UINT16_MAX;
	int32_t x71 = -88210;
	int16_t x72 = INT16_MIN;
	static volatile int32_t t17 = -503975794;

    t17 = ((x69^(x70>x71))>x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint16_t x73 = UINT16_MAX;
	int16_t x74 = -1;
	int16_t x75 = -9;
	int64_t x76 = INT64_MIN;

    t18 = ((x73^(x74>x75))>x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = INT64_MAX;
	static int8_t x78 = -5;
	volatile int32_t t19 = -39790;

    t19 = ((x77^(x78>x79))>x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x81 = 3456303484072LLU;
	int32_t x82 = INT32_MIN;
	int16_t x83 = -1;
	int16_t x84 = -1;
	int32_t t20 = -22243;

    t20 = ((x81^(x82>x83))>x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = INT32_MAX;
	static uint8_t x86 = 53U;
	uint32_t x87 = 173U;
	static int16_t x88 = INT16_MIN;
	volatile int32_t t21 = 383264;

    t21 = ((x85^(x86>x87))>x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x89 = 1446797118202721565LL;
	int64_t x92 = 1LL;
	volatile int32_t t22 = -32846;

    t22 = ((x89^(x90>x91))>x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x94 = INT32_MIN;
	int16_t x95 = -1;
	int32_t x96 = INT32_MAX;
	int32_t t23 = 9;

    t23 = ((x93^(x94>x95))>x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x98 = -61853616LL;
	static volatile int16_t x99 = -35;
	uint64_t x100 = UINT64_MAX;
	static int32_t t24 = -10180689;

    t24 = ((x97^(x98>x99))>x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x101 = INT64_MIN;
	volatile uint64_t x103 = 20055134LLU;

    t25 = ((x101^(x102>x103))>x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint8_t x105 = 124U;
	int64_t x106 = INT64_MIN;
	uint16_t x107 = 1U;
	int64_t x108 = INT64_MIN;
	volatile int32_t t26 = -334187;

    t26 = ((x105^(x106>x107))>x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x110 = INT8_MIN;
	uint8_t x111 = 1U;
	volatile int32_t x112 = INT32_MAX;

    t27 = ((x109^(x110>x111))>x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint16_t x113 = UINT16_MAX;
	int32_t x114 = 17298221;
	volatile uint8_t x115 = UINT8_MAX;
	int32_t x116 = 3;
	volatile int32_t t28 = -111753;

    t28 = ((x113^(x114>x115))>x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = INT64_MIN;
	int32_t x119 = INT32_MIN;
	int32_t x120 = INT32_MIN;
	volatile int32_t t29 = -964;

    t29 = ((x117^(x118>x119))>x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x121 = 373;
	volatile int32_t t30 = 1088461;

    t30 = ((x121^(x122>x123))>x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x125 = 116052122423720LLU;
	volatile int32_t x126 = INT32_MIN;
	uint64_t x127 = UINT64_MAX;
	int32_t x128 = INT32_MIN;

    t31 = ((x125^(x126>x127))>x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = INT32_MAX;
	static uint32_t x130 = 13426753U;
	int32_t x131 = INT32_MIN;
	int32_t x132 = 25784;
	int32_t t32 = -610;

    t32 = ((x129^(x130>x131))>x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x133 = 2U;
	int8_t x134 = 5;
	static int8_t x135 = -1;
	int64_t x136 = INT64_MIN;
	int32_t t33 = 395329548;

    t33 = ((x133^(x134>x135))>x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int32_t x138 = -1;
	uint32_t x139 = 3859U;
	int32_t x140 = -1;
	int32_t t34 = -789925;

    t34 = ((x137^(x138>x139))>x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint64_t x141 = 127572728799LLU;
	static int16_t x142 = INT16_MAX;
	int32_t x143 = 4;
	int16_t x144 = INT16_MIN;
	volatile int32_t t35 = 7;

    t35 = ((x141^(x142>x143))>x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x145 = 29U;
	int16_t x146 = 1;
	static int16_t x147 = INT16_MIN;
	static volatile int8_t x148 = INT8_MAX;
	static volatile int32_t t36 = 1;

    t36 = ((x145^(x146>x147))>x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x151 = INT64_MIN;
	int64_t x152 = INT64_MIN;
	volatile int32_t t37 = 6734;

    t37 = ((x149^(x150>x151))>x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x153 = INT64_MAX;
	static int32_t x154 = INT32_MAX;
	static volatile int8_t x155 = -1;
	uint32_t x156 = 1736410542U;

    t38 = ((x153^(x154>x155))>x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x158 = INT32_MIN;
	int64_t x160 = INT64_MIN;
	static int32_t t39 = 1630;

    t39 = ((x157^(x158>x159))>x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = -22;
	int32_t x162 = -173600;
	static uint64_t x163 = 34954226721556LLU;
	int8_t x164 = INT8_MIN;
	volatile int32_t t40 = 43723124;

    t40 = ((x161^(x162>x163))>x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint32_t x165 = 111039U;
	volatile int32_t x166 = -1;
	int16_t x167 = 3352;
	volatile uint8_t x168 = 1U;
	volatile int32_t t41 = 57411;

    t41 = ((x165^(x166>x167))>x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x172 = INT16_MAX;
	volatile int32_t t42 = 8;

    t42 = ((x169^(x170>x171))>x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = -89;
	int32_t x174 = INT32_MIN;
	uint8_t x176 = 12U;
	int32_t t43 = 49524;

    t43 = ((x173^(x174>x175))>x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = -1;
	int64_t x178 = INT64_MIN;
	int16_t x179 = -461;
	int16_t x180 = INT16_MIN;
	volatile int32_t t44 = 0;

    t44 = ((x177^(x178>x179))>x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x181 = 123U;
	static int64_t x182 = INT64_MIN;
	int8_t x184 = INT8_MAX;
	int32_t t45 = -97392015;

    t45 = ((x181^(x182>x183))>x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = -2;
	int16_t x186 = INT16_MIN;
	static int32_t x187 = INT32_MIN;
	int16_t x188 = INT16_MAX;
	volatile int32_t t46 = -3;

    t46 = ((x185^(x186>x187))>x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x189 = INT8_MIN;
	int16_t x190 = 809;
	int64_t x191 = INT64_MIN;
	int8_t x192 = INT8_MIN;
	volatile int32_t t47 = -1865;

    t47 = ((x189^(x190>x191))>x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x194 = UINT8_MAX;
	int32_t t48 = -12;

    t48 = ((x193^(x194>x195))>x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x199 = INT64_MIN;
	uint16_t x200 = UINT16_MAX;
	static volatile int32_t t49 = -617086;

    t49 = ((x197^(x198>x199))>x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x201 = 1729U;
	int16_t x202 = INT16_MIN;
	int16_t x203 = INT16_MAX;
	static volatile int64_t x204 = 26544LL;
	int32_t t50 = -5639;

    t50 = ((x201^(x202>x203))>x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x206 = -90;
	int8_t x207 = INT8_MIN;
	int16_t x208 = -19;
	int32_t t51 = 61510;

    t51 = ((x205^(x206>x207))>x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x210 = -1;
	uint64_t x211 = UINT64_MAX;

    t52 = ((x209^(x210>x211))>x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x213 = -1LL;
	uint16_t x214 = UINT16_MAX;
	uint32_t x215 = UINT32_MAX;
	volatile int32_t t53 = 24;

    t53 = ((x213^(x214>x215))>x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint64_t x217 = 15573214015075LLU;
	int8_t x218 = INT8_MAX;
	volatile uint8_t x219 = 11U;
	static int16_t x220 = -1;
	volatile int32_t t54 = -120;

    t54 = ((x217^(x218>x219))>x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x221 = INT16_MIN;
	static int64_t x222 = INT64_MIN;
	uint8_t x223 = 1U;
	int16_t x224 = -1;
	int32_t t55 = -29;

    t55 = ((x221^(x222>x223))>x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x225 = 18U;
	int32_t x227 = INT32_MAX;
	static int32_t x228 = INT32_MIN;
	int32_t t56 = -1618514;

    t56 = ((x225^(x226>x227))>x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x230 = INT64_MAX;
	volatile uint8_t x231 = UINT8_MAX;
	int32_t x232 = 0;
	static int32_t t57 = -24199;

    t57 = ((x229^(x230>x231))>x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x233 = 112212U;
	int64_t x234 = INT64_MIN;
	int32_t x235 = INT32_MIN;
	volatile int32_t t58 = 5;

    t58 = ((x233^(x234>x235))>x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x237 = UINT16_MAX;
	int64_t x238 = INT64_MIN;
	uint32_t x240 = 255847U;
	static volatile int32_t t59 = -114620909;

    t59 = ((x237^(x238>x239))>x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x241 = 1131;
	int64_t x242 = 259240515832342781LL;
	int16_t x243 = 127;
	static int64_t x244 = -670462LL;
	int32_t t60 = -3213347;

    t60 = ((x241^(x242>x243))>x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x245 = UINT8_MAX;
	int8_t x246 = 6;
	volatile int64_t x247 = INT64_MIN;
	uint32_t x248 = UINT32_MAX;
	volatile int32_t t61 = -959391970;

    t61 = ((x245^(x246>x247))>x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = -1;
	uint16_t x250 = 776U;
	volatile int8_t x252 = -1;
	volatile int32_t t62 = -1;

    t62 = ((x249^(x250>x251))>x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint16_t x254 = UINT16_MAX;
	int32_t x255 = INT32_MAX;
	volatile int16_t x256 = -1;
	int32_t t63 = 113715;

    t63 = ((x253^(x254>x255))>x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x257 = 44474U;
	int8_t x258 = INT8_MIN;
	uint8_t x260 = 3U;
	int32_t t64 = -7;

    t64 = ((x257^(x258>x259))>x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x262 = UINT32_MAX;
	uint16_t x263 = UINT16_MAX;
	static volatile int64_t x264 = INT64_MIN;
	int32_t t65 = 51824;

    t65 = ((x261^(x262>x263))>x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = INT8_MAX;
	int32_t x266 = -274330082;
	volatile int32_t x268 = -57202;

    t66 = ((x265^(x266>x267))>x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x269 = UINT64_MAX;
	int32_t x270 = INT32_MIN;
	volatile int32_t t67 = 96165651;

    t67 = ((x269^(x270>x271))>x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x273 = 1;
	volatile uint8_t x274 = 2U;
	uint8_t x275 = 3U;
	static int32_t t68 = -9819;

    t68 = ((x273^(x274>x275))>x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x277 = INT16_MAX;
	static int16_t x278 = -15;
	int64_t x279 = INT64_MIN;
	volatile int32_t x280 = 642062;
	static int32_t t69 = 211206132;

    t69 = ((x277^(x278>x279))>x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = INT16_MIN;
	int32_t x282 = INT32_MIN;
	static uint32_t x284 = 1535U;
	volatile int32_t t70 = 2;

    t70 = ((x281^(x282>x283))>x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x285 = -1;
	static int64_t x287 = 12608569457LL;
	uint16_t x288 = 0U;
	int32_t t71 = 13337;

    t71 = ((x285^(x286>x287))>x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int64_t x289 = -2531793323595065231LL;
	uint32_t x290 = 462U;
	uint8_t x291 = UINT8_MAX;
	uint32_t x292 = 12638557U;
	volatile int32_t t72 = 11258;

    t72 = ((x289^(x290>x291))>x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = INT64_MIN;
	uint16_t x295 = 3593U;

    t73 = ((x293^(x294>x295))>x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x297 = 26174U;
	static uint64_t x298 = 331723051283LLU;
	static int64_t x299 = INT64_MAX;
	int16_t x300 = INT16_MIN;
	int32_t t74 = -13468274;

    t74 = ((x297^(x298>x299))>x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x301 = UINT16_MAX;
	int64_t x302 = INT64_MIN;
	volatile int16_t x303 = 30;
	static int64_t x304 = -1LL;
	volatile int32_t t75 = 891184842;

    t75 = ((x301^(x302>x303))>x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x305 = 1424427LLU;
	int64_t x306 = INT64_MAX;
	volatile int8_t x307 = INT8_MAX;
	int64_t x308 = -10LL;

    t76 = ((x305^(x306>x307))>x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x310 = 60U;
	int16_t x311 = 536;

    t77 = ((x309^(x310>x311))>x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x314 = -1;
	int16_t x315 = -1;
	int16_t x316 = INT16_MIN;
	static volatile int32_t t78 = 5132;

    t78 = ((x313^(x314>x315))>x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x317 = INT16_MIN;
	static uint16_t x318 = 2575U;
	volatile int64_t x319 = INT64_MAX;
	volatile int16_t x320 = INT16_MAX;
	static volatile int32_t t79 = -1160;

    t79 = ((x317^(x318>x319))>x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x321 = 0;
	static int32_t x322 = -1;
	volatile int32_t t80 = -6590811;

    t80 = ((x321^(x322>x323))>x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int16_t x325 = -1;
	int8_t x326 = -1;
	uint16_t x327 = UINT16_MAX;
	volatile uint64_t x328 = 4837470668642203768LLU;

    t81 = ((x325^(x326>x327))>x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x329 = INT64_MAX;
	int32_t x330 = 52486;
	uint16_t x331 = 26U;
	static volatile int8_t x332 = INT8_MAX;
	static int32_t t82 = -20;

    t82 = ((x329^(x330>x331))>x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x334 = -1LL;
	uint32_t x335 = 15254U;
	int32_t x336 = INT32_MIN;
	int32_t t83 = 20;

    t83 = ((x333^(x334>x335))>x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x337 = 43;
	uint8_t x339 = 20U;
	static int8_t x340 = INT8_MAX;
	static int32_t t84 = -1209232;

    t84 = ((x337^(x338>x339))>x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x341 = UINT32_MAX;
	uint16_t x342 = UINT16_MAX;
	uint8_t x343 = 8U;
	volatile int16_t x344 = INT16_MAX;
	int32_t t85 = -25;

    t85 = ((x341^(x342>x343))>x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x345 = 10095;
	int32_t x346 = INT32_MIN;
	volatile uint32_t x348 = 6U;

    t86 = ((x345^(x346>x347))>x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x349 = 363617393LLU;
	int32_t x350 = 1422;
	volatile int32_t x351 = INT32_MAX;
	int8_t x352 = 6;
	int32_t t87 = -1648;

    t87 = ((x349^(x350>x351))>x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x354 = INT16_MIN;
	static int64_t x355 = 11263104877134750LL;
	volatile int16_t x356 = INT16_MAX;
	volatile int32_t t88 = 4158247;

    t88 = ((x353^(x354>x355))>x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x357 = INT64_MIN;
	volatile int8_t x358 = INT8_MIN;
	uint32_t x359 = UINT32_MAX;
	int32_t t89 = -1060307;

    t89 = ((x357^(x358>x359))>x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x361 = 86U;
	volatile int8_t x362 = 1;
	uint32_t x363 = 55U;
	volatile int8_t x364 = INT8_MIN;
	int32_t t90 = -42;

    t90 = ((x361^(x362>x363))>x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x366 = 1;
	int8_t x367 = INT8_MIN;
	int64_t x368 = INT64_MAX;
	volatile int32_t t91 = -26;

    t91 = ((x365^(x366>x367))>x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x369 = INT32_MAX;
	volatile uint8_t x370 = 26U;
	uint64_t x372 = 5241088516261126625LLU;
	volatile int32_t t92 = 797;

    t92 = ((x369^(x370>x371))>x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x373 = INT8_MIN;
	int32_t x374 = -1;
	volatile int8_t x375 = INT8_MAX;
	int8_t x376 = INT8_MIN;

    t93 = ((x373^(x374>x375))>x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x377 = INT64_MAX;
	uint8_t x378 = UINT8_MAX;
	int32_t t94 = 24425;

    t94 = ((x377^(x378>x379))>x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x381 = 1;
	volatile int64_t x382 = 4511538037752312300LL;
	int32_t t95 = -4548;

    t95 = ((x381^(x382>x383))>x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x385 = -1;
	volatile uint32_t x387 = 1030U;
	int32_t t96 = -433;

    t96 = ((x385^(x386>x387))>x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint64_t x391 = UINT64_MAX;
	uint8_t x392 = UINT8_MAX;
	int32_t t97 = 41984;

    t97 = ((x389^(x390>x391))>x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = 50759122;
	int16_t x394 = INT16_MAX;
	int64_t x396 = -794047287LL;
	int32_t t98 = -63564508;

    t98 = ((x393^(x394>x395))>x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int32_t x397 = -1;
	volatile uint8_t x398 = 0U;
	static volatile int8_t x399 = INT8_MIN;
	volatile int32_t t99 = -10619;

    t99 = ((x397^(x398>x399))>x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x401 = 23U;
	uint32_t x402 = 813496U;
	volatile int64_t x404 = -1LL;
	int32_t t100 = -61019;

    t100 = ((x401^(x402>x403))>x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x405 = INT64_MIN;
	static int8_t x407 = INT8_MAX;
	volatile int32_t t101 = 940;

    t101 = ((x405^(x406>x407))>x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = 43247542288LL;
	int16_t x410 = INT16_MIN;
	int32_t x412 = INT32_MAX;
	int32_t t102 = -1885946;

    t102 = ((x409^(x410>x411))>x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x414 = 4;
	int16_t x415 = INT16_MAX;
	int16_t x416 = INT16_MIN;

    t103 = ((x413^(x414>x415))>x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = 2;
	int32_t x418 = INT32_MIN;

    t104 = ((x417^(x418>x419))>x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x423 = 23603998;
	int16_t x424 = INT16_MAX;
	int32_t t105 = -2548;

    t105 = ((x421^(x422>x423))>x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x425 = -115403549;
	int32_t x426 = INT32_MIN;
	uint32_t x427 = 1693429U;
	int32_t x428 = INT32_MAX;
	int32_t t106 = -1303923;

    t106 = ((x425^(x426>x427))>x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint64_t x429 = UINT64_MAX;
	uint16_t x430 = 0U;
	int8_t x431 = -1;
	int32_t x432 = INT32_MIN;
	volatile int32_t t107 = 613;

    t107 = ((x429^(x430>x431))>x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x433 = UINT64_MAX;
	int16_t x434 = INT16_MIN;
	int8_t x435 = 5;
	int64_t x436 = INT64_MIN;

    t108 = ((x433^(x434>x435))>x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = -1;
	int8_t x438 = -1;
	int16_t x439 = -7;
	volatile int32_t t109 = -28680172;

    t109 = ((x437^(x438>x439))>x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x442 = UINT64_MAX;
	int64_t x443 = -1LL;
	uint8_t x444 = 1U;
	int32_t t110 = -12;

    t110 = ((x441^(x442>x443))>x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x445 = INT64_MIN;
	int64_t x446 = INT64_MIN;
	volatile int32_t t111 = -50711722;

    t111 = ((x445^(x446>x447))>x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint16_t x449 = UINT16_MAX;
	static uint8_t x450 = UINT8_MAX;
	static volatile uint16_t x451 = 1U;
	int8_t x452 = INT8_MIN;
	int32_t t112 = -29257;

    t112 = ((x449^(x450>x451))>x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x453 = -1;
	int16_t x454 = 10365;
	static int32_t x455 = INT32_MIN;
	int16_t x456 = INT16_MIN;
	volatile int32_t t113 = 5716389;

    t113 = ((x453^(x454>x455))>x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x457 = INT8_MAX;
	int16_t x458 = INT16_MAX;
	int8_t x459 = 1;
	int32_t t114 = 1;

    t114 = ((x457^(x458>x459))>x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = -1LL;
	int16_t x462 = 433;
	int8_t x463 = -1;
	int8_t x464 = INT8_MIN;
	static int32_t t115 = 2524462;

    t115 = ((x461^(x462>x463))>x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint8_t x465 = 58U;
	volatile int64_t x466 = -138696127847976382LL;
	static int16_t x468 = INT16_MAX;
	volatile int32_t t116 = -7;

    t116 = ((x465^(x466>x467))>x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x470 = -1;
	int16_t x471 = INT16_MAX;
	uint16_t x472 = 16285U;
	volatile int32_t t117 = -11669;

    t117 = ((x469^(x470>x471))>x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x473 = 4028756585509LLU;
	uint64_t x474 = 964914154LLU;
	volatile int64_t x475 = -7825LL;

    t118 = ((x473^(x474>x475))>x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x477 = INT64_MIN;
	static uint64_t x478 = UINT64_MAX;
	int64_t x479 = INT64_MIN;
	volatile int64_t x480 = INT64_MIN;

    t119 = ((x477^(x478>x479))>x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x481 = INT32_MAX;
	static int8_t x482 = -1;
	volatile uint64_t x484 = UINT64_MAX;
	int32_t t120 = 3016;

    t120 = ((x481^(x482>x483))>x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x485 = 933;
	int16_t x487 = INT16_MIN;
	int32_t x488 = -1;

    t121 = ((x485^(x486>x487))>x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint16_t x489 = 455U;
	int8_t x490 = -1;
	int8_t x491 = INT8_MIN;
	int64_t x492 = 262332457LL;
	static int32_t t122 = 5942868;

    t122 = ((x489^(x490>x491))>x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x493 = 13;
	int8_t x494 = -4;
	uint32_t x495 = 161222845U;
	static int32_t x496 = INT32_MIN;
	int32_t t123 = 0;

    t123 = ((x493^(x494>x495))>x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint8_t x497 = UINT8_MAX;
	uint8_t x499 = 3U;
	uint64_t x500 = 3166304265973LLU;
	volatile int32_t t124 = 875692;

    t124 = ((x497^(x498>x499))>x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x501 = INT32_MIN;
	int16_t x502 = INT16_MAX;
	int64_t x503 = -4857716LL;

    t125 = ((x501^(x502>x503))>x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x505 = -1LL;
	int64_t x507 = INT64_MIN;
	static volatile uint8_t x508 = 9U;
	static volatile int32_t t126 = -59548559;

    t126 = ((x505^(x506>x507))>x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = INT64_MAX;
	static uint16_t x510 = 8U;
	static volatile uint64_t x511 = 67282LLU;
	static int32_t x512 = 280688;
	volatile int32_t t127 = -98810;

    t127 = ((x509^(x510>x511))>x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = -1;
	static volatile int16_t x514 = INT16_MIN;
	int8_t x515 = -5;
	int32_t x516 = 23306464;
	volatile int32_t t128 = 1;

    t128 = ((x513^(x514>x515))>x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x518 = 15242U;
	static volatile uint32_t x519 = 5000U;
	int8_t x520 = -1;
	int32_t t129 = 350;

    t129 = ((x517^(x518>x519))>x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x521 = INT64_MAX;
	volatile uint16_t x522 = UINT16_MAX;
	static uint16_t x523 = UINT16_MAX;
	uint8_t x524 = 0U;
	static volatile int32_t t130 = -691;

    t130 = ((x521^(x522>x523))>x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint32_t x525 = 23U;
	int64_t x526 = 5LL;
	static int32_t x527 = INT32_MAX;
	static int16_t x528 = INT16_MAX;
	volatile int32_t t131 = 0;

    t131 = ((x525^(x526>x527))>x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = INT32_MIN;
	volatile int64_t x530 = INT64_MAX;
	int64_t x531 = INT64_MAX;
	static volatile int16_t x532 = INT16_MIN;

    t132 = ((x529^(x530>x531))>x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x533 = INT64_MIN;
	int32_t x534 = INT32_MAX;
	uint32_t x535 = UINT32_MAX;
	uint64_t x536 = 1543875090408LLU;
	volatile int32_t t133 = -2621;

    t133 = ((x533^(x534>x535))>x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x537 = INT32_MIN;
	static uint64_t x538 = UINT64_MAX;
	uint8_t x539 = UINT8_MAX;
	volatile int32_t x540 = -1;
	static volatile int32_t t134 = -19;

    t134 = ((x537^(x538>x539))>x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = 10181;
	uint64_t x542 = UINT64_MAX;
	int16_t x543 = INT16_MIN;
	uint64_t x544 = UINT64_MAX;
	int32_t t135 = -5357;

    t135 = ((x541^(x542>x543))>x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x545 = 1541616891164444147LLU;
	int8_t x546 = 0;
	uint8_t x547 = UINT8_MAX;
	int8_t x548 = INT8_MIN;
	int32_t t136 = -1830987;

    t136 = ((x545^(x546>x547))>x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint8_t x550 = UINT8_MAX;
	int32_t x551 = INT32_MIN;
	static int64_t x552 = -1LL;

    t137 = ((x549^(x550>x551))>x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x553 = -1LL;
	int32_t x554 = -30081;
	static int32_t x555 = INT32_MAX;
	uint8_t x556 = 5U;
	volatile int32_t t138 = 81;

    t138 = ((x553^(x554>x555))>x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = -1LL;
	int8_t x559 = INT8_MIN;
	uint8_t x560 = UINT8_MAX;
	int32_t t139 = 613740649;

    t139 = ((x557^(x558>x559))>x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x561 = -1;
	volatile int32_t x562 = INT32_MAX;
	volatile uint16_t x563 = 133U;
	static int16_t x564 = INT16_MIN;
	static int32_t t140 = 120;

    t140 = ((x561^(x562>x563))>x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint64_t x565 = 1543875375065094489LLU;
	static uint32_t x566 = 68486U;
	int64_t x567 = 5LL;
	int8_t x568 = INT8_MIN;
	static volatile int32_t t141 = -388803906;

    t141 = ((x565^(x566>x567))>x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int64_t x569 = INT64_MIN;
	static volatile uint8_t x570 = 0U;
	static int32_t x571 = INT32_MAX;
	volatile int32_t t142 = -37982;

    t142 = ((x569^(x570>x571))>x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x574 = 22785247512LL;
	volatile int16_t x575 = 0;
	int8_t x576 = -1;
	static volatile int32_t t143 = 238990311;

    t143 = ((x573^(x574>x575))>x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = -3599;
	int64_t x578 = INT64_MAX;
	int8_t x579 = -1;
	volatile uint64_t x580 = 2176614754465519LLU;
	int32_t t144 = 2575;

    t144 = ((x577^(x578>x579))>x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint32_t x581 = 11205325U;
	uint16_t x582 = UINT16_MAX;
	int8_t x583 = INT8_MIN;
	static int16_t x584 = INT16_MAX;

    t145 = ((x581^(x582>x583))>x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x586 = INT64_MAX;
	static volatile int64_t x587 = -1LL;
	volatile int32_t t146 = 548069;

    t146 = ((x585^(x586>x587))>x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x589 = UINT8_MAX;
	int16_t x591 = INT16_MIN;
	static int32_t x592 = INT32_MIN;
	volatile int32_t t147 = -37916950;

    t147 = ((x589^(x590>x591))>x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint64_t x594 = 399LLU;
	int8_t x595 = -1;
	volatile int32_t t148 = -421276745;

    t148 = ((x593^(x594>x595))>x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint8_t x597 = UINT8_MAX;
	uint16_t x598 = 141U;
	int64_t x599 = 4249943392298LL;

    t149 = ((x597^(x598>x599))>x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x602 = 27U;
	int16_t x603 = -1;
	uint16_t x604 = 228U;
	volatile int32_t t150 = 506;

    t150 = ((x601^(x602>x603))>x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x605 = INT16_MIN;
	int16_t x606 = 18;
	uint64_t x608 = UINT64_MAX;
	int32_t t151 = 572;

    t151 = ((x605^(x606>x607))>x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x609 = UINT64_MAX;
	volatile int64_t x610 = INT64_MIN;
	volatile int16_t x611 = INT16_MIN;
	volatile int32_t t152 = 1857;

    t152 = ((x609^(x610>x611))>x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x613 = 43U;
	int64_t x614 = -782923007646670LL;
	uint32_t x615 = 317U;
	static int8_t x616 = INT8_MIN;
	volatile int32_t t153 = 0;

    t153 = ((x613^(x614>x615))>x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = -541;
	int32_t x618 = INT32_MIN;
	volatile int64_t x619 = 33545723448802464LL;
	static uint32_t x620 = 1057078579U;
	int32_t t154 = 42;

    t154 = ((x617^(x618>x619))>x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x622 = INT16_MIN;
	volatile int32_t t155 = -4018;

    t155 = ((x621^(x622>x623))>x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = 3805;
	int8_t x626 = INT8_MIN;
	volatile int32_t t156 = -5;

    t156 = ((x625^(x626>x627))>x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x630 = 861;
	volatile int32_t x632 = INT32_MIN;

    t157 = ((x629^(x630>x631))>x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = INT64_MAX;
	uint32_t x635 = 63U;
	int64_t x636 = -1LL;
	int32_t t158 = 706;

    t158 = ((x633^(x634>x635))>x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x637 = -183740458;
	int8_t x638 = INT8_MIN;
	static int8_t x639 = -1;
	volatile int32_t x640 = 35118151;
	int32_t t159 = -13493;

    t159 = ((x637^(x638>x639))>x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint16_t x641 = UINT16_MAX;
	volatile int32_t x642 = INT32_MIN;
	volatile int32_t x643 = INT32_MAX;
	int32_t x644 = INT32_MAX;

    t160 = ((x641^(x642>x643))>x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x645 = INT32_MIN;
	int32_t x646 = 64402;
	int64_t x647 = INT64_MIN;
	uint32_t x648 = 534940636U;
	int32_t t161 = -42779888;

    t161 = ((x645^(x646>x647))>x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint32_t x649 = 1465665U;
	uint64_t x651 = 0LLU;
	volatile int32_t x652 = INT32_MIN;
	static volatile int32_t t162 = 2881;

    t162 = ((x649^(x650>x651))>x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x653 = UINT8_MAX;
	int64_t x654 = 588752492118543197LL;
	int8_t x655 = INT8_MIN;
	uint32_t x656 = 114485U;

    t163 = ((x653^(x654>x655))>x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x658 = -1LL;
	volatile int16_t x660 = INT16_MAX;

    t164 = ((x657^(x658>x659))>x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x661 = 15;
	int32_t x664 = 430570;

    t165 = ((x661^(x662>x663))>x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = -4;
	static volatile uint32_t x666 = UINT32_MAX;
	uint16_t x667 = 7988U;
	int16_t x668 = -1;
	volatile int32_t t166 = 839;

    t166 = ((x665^(x666>x667))>x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x669 = UINT16_MAX;
	int16_t x671 = -485;
	volatile uint16_t x672 = 277U;
	int32_t t167 = 2;

    t167 = ((x669^(x670>x671))>x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x673 = 2064U;
	uint32_t x674 = UINT32_MAX;
	int8_t x675 = INT8_MIN;
	uint64_t x676 = UINT64_MAX;

    t168 = ((x673^(x674>x675))>x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x677 = 3U;
	volatile uint16_t x678 = UINT16_MAX;
	static int16_t x679 = -10904;
	int8_t x680 = -20;
	volatile int32_t t169 = 80220;

    t169 = ((x677^(x678>x679))>x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x681 = -1;
	static int32_t x683 = -1;
	uint8_t x684 = UINT8_MAX;
	int32_t t170 = -2197178;

    t170 = ((x681^(x682>x683))>x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x685 = 4U;
	static volatile int8_t x686 = INT8_MIN;
	static int64_t x687 = -1LL;
	int32_t x688 = 354;
	volatile int32_t t171 = -2521639;

    t171 = ((x685^(x686>x687))>x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint64_t x690 = 5163LLU;
	uint32_t x692 = 63396U;
	int32_t t172 = 0;

    t172 = ((x689^(x690>x691))>x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x694 = INT8_MIN;
	int64_t x696 = -1LL;

    t173 = ((x693^(x694>x695))>x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x697 = -1;
	uint8_t x699 = 1U;
	static int8_t x700 = -1;
	int32_t t174 = 15682;

    t174 = ((x697^(x698>x699))>x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x702 = UINT16_MAX;
	int8_t x704 = INT8_MIN;

    t175 = ((x701^(x702>x703))>x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint8_t x706 = UINT8_MAX;
	static volatile uint64_t x707 = UINT64_MAX;
	int32_t x708 = 58;
	static int32_t t176 = -50527;

    t176 = ((x705^(x706>x707))>x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x710 = INT8_MIN;
	static int8_t x711 = INT8_MIN;
	int64_t x712 = INT64_MAX;
	int32_t t177 = 0;

    t177 = ((x709^(x710>x711))>x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x715 = -15;
	int8_t x716 = 0;
	int32_t t178 = 21;

    t178 = ((x713^(x714>x715))>x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint16_t x717 = 24U;
	volatile uint16_t x718 = UINT16_MAX;
	int32_t x719 = -1630;
	uint8_t x720 = 64U;

    t179 = ((x717^(x718>x719))>x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile uint32_t x721 = 2604125U;
	uint16_t x722 = 3U;
	int8_t x723 = -1;
	static uint64_t x724 = 27339043220054LLU;
	int32_t t180 = -212;

    t180 = ((x721^(x722>x723))>x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x726 = INT16_MIN;
	static int16_t x727 = INT16_MAX;
	volatile int64_t x728 = -74783668197094583LL;
	volatile int32_t t181 = -85768068;

    t181 = ((x725^(x726>x727))>x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x730 = 375955987;
	volatile int32_t t182 = 10;

    t182 = ((x729^(x730>x731))>x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x734 = INT32_MAX;
	uint8_t x735 = 2U;
	int8_t x736 = INT8_MIN;
	volatile int32_t t183 = 6340278;

    t183 = ((x733^(x734>x735))>x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = -29;
	int32_t x738 = 1367242;
	int32_t x739 = -44;
	int8_t x740 = 14;

    t184 = ((x737^(x738>x739))>x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int8_t x741 = INT8_MAX;
	int64_t x742 = -6735858LL;
	int32_t x744 = -3;

    t185 = ((x741^(x742>x743))>x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = INT64_MIN;
	int8_t x746 = -1;
	static uint16_t x747 = 4766U;
	int8_t x748 = INT8_MIN;
	volatile int32_t t186 = 21;

    t186 = ((x745^(x746>x747))>x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x750 = UINT16_MAX;
	int16_t x751 = INT16_MAX;
	uint32_t x752 = 1734477472U;
	volatile int32_t t187 = 7706;

    t187 = ((x749^(x750>x751))>x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x754 = 153430U;
	volatile uint64_t x755 = 0LLU;
	int8_t x756 = 14;
	int32_t t188 = -452418857;

    t188 = ((x753^(x754>x755))>x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x757 = INT16_MAX;
	static int32_t x758 = INT32_MIN;
	int32_t x760 = INT32_MAX;

    t189 = ((x757^(x758>x759))>x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x761 = -2;
	uint64_t x762 = 29409550719809583LLU;
	static int64_t x763 = INT64_MAX;
	int16_t x764 = -207;
	int32_t t190 = 0;

    t190 = ((x761^(x762>x763))>x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = INT8_MAX;
	static int16_t x766 = INT16_MIN;
	int16_t x767 = INT16_MIN;
	uint32_t x768 = 371133U;

    t191 = ((x765^(x766>x767))>x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x769 = 3;
	int16_t x770 = INT16_MIN;
	static uint64_t x771 = UINT64_MAX;
	int64_t x772 = -4544LL;

    t192 = ((x769^(x770>x771))>x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x773 = 2838;
	int64_t x774 = -1LL;
	int16_t x775 = INT16_MAX;
	int16_t x776 = -1;
	static volatile int32_t t193 = -16298183;

    t193 = ((x773^(x774>x775))>x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = -2525;
	uint32_t x779 = 1017354U;
	volatile int64_t x780 = -3678279133087LL;
	int32_t t194 = -263915;

    t194 = ((x777^(x778>x779))>x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x781 = -1LL;
	static uint32_t x783 = 26285U;
	int32_t x784 = INT32_MIN;
	int32_t t195 = 52705;

    t195 = ((x781^(x782>x783))>x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x785 = 52556U;
	int16_t x786 = INT16_MAX;
	uint8_t x787 = 0U;

    t196 = ((x785^(x786>x787))>x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x789 = 30;
	int64_t x790 = -1LL;
	volatile int16_t x791 = INT16_MIN;
	volatile int32_t x792 = -1;
	volatile int32_t t197 = 10921;

    t197 = ((x789^(x790>x791))>x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int64_t x795 = -318161937LL;
	int32_t t198 = 4;

    t198 = ((x793^(x794>x795))>x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x799 = 678416267U;
	int8_t x800 = INT8_MAX;
	int32_t t199 = -61935;

    t199 = ((x797^(x798>x799))>x800);

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


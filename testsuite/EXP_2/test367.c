
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

static int8_t x9 = -1;
int32_t x10 = -1;
int32_t x22 = -2;
uint64_t x27 = UINT64_MAX;
volatile int32_t x32 = INT32_MIN;
uint64_t x33 = UINT64_MAX;
int8_t x36 = INT8_MIN;
static volatile int32_t x45 = -1;
volatile uint16_t x47 = UINT16_MAX;
volatile int64_t x48 = -2105545931756LL;
int32_t x53 = INT32_MIN;
static int64_t x54 = 17597LL;
int8_t x56 = INT8_MIN;
volatile int64_t x59 = 6409052307622LL;
static uint8_t x61 = UINT8_MAX;
int64_t x100 = -243373LL;
static int64_t t17 = 115500491436LL;
int16_t x113 = INT16_MIN;
uint32_t t19 = 59941274U;
static uint32_t x143 = 76U;
int16_t x144 = INT16_MIN;
uint64_t x151 = 440LLU;
uint32_t x152 = 2003461308U;
int8_t x153 = -3;
int16_t x155 = INT16_MIN;
volatile uint64_t t25 = 103LLU;
volatile int64_t x161 = INT64_MAX;
int32_t x164 = INT32_MIN;
int16_t x170 = INT16_MIN;
static volatile uint64_t t28 = 965275LLU;
volatile int16_t x178 = INT16_MIN;
uint16_t x186 = UINT16_MAX;
uint32_t x192 = UINT32_MAX;
int16_t x193 = INT16_MIN;
volatile uint64_t t32 = 129191475421159812LLU;
int64_t x201 = -1LL;
int64_t x212 = INT64_MIN;
uint32_t t37 = 914518U;
static uint16_t x218 = 11U;
uint32_t t39 = 1059690U;
static uint64_t x237 = UINT64_MAX;
int32_t x239 = -1;
int32_t x243 = -1;
static int8_t x248 = 1;
volatile uint64_t t44 = 172731946LLU;
uint16_t x255 = 199U;
volatile int32_t x266 = -127768290;
static volatile int32_t x269 = 3751134;
volatile uint64_t t48 = 521991LLU;
int16_t x274 = 6;
volatile int32_t x275 = 6750674;
int8_t x282 = 27;
uint32_t x302 = 36715U;
uint64_t x303 = UINT64_MAX;
static uint64_t x304 = 130LLU;
int64_t x314 = -1LL;
volatile int16_t x315 = 166;
uint8_t x317 = UINT8_MAX;
int64_t x324 = INT64_MIN;
int16_t x331 = INT16_MIN;
int32_t x336 = 21170;
int32_t t60 = 631;
static uint8_t x350 = 2U;
int64_t x356 = INT64_MAX;
int64_t x366 = INT64_MAX;
volatile int64_t t67 = 24LL;
int8_t x389 = INT8_MIN;
uint8_t x395 = 12U;
int64_t x398 = INT64_MAX;
volatile int16_t x418 = -2076;
int16_t x423 = 3;
int32_t t75 = -98673;
int64_t x427 = INT64_MAX;
int16_t x433 = -1;
volatile int32_t x453 = INT32_MAX;
static volatile int32_t x454 = -1;
static uint32_t x462 = 1691U;
static int32_t x463 = -54;
int16_t x472 = -1;
volatile uint64_t t85 = 13568906281LLU;
static uint64_t t86 = 602785980274LLU;
static int16_t x477 = -1;
int64_t t87 = 4854939684LL;
int32_t x495 = -32730172;
uint32_t x497 = 38U;
int16_t x504 = -1;
static int16_t x507 = 6711;
int8_t x511 = INT8_MIN;
static uint64_t t93 = 32568588897617970LLU;
static uint8_t x514 = 23U;
uint16_t x515 = UINT16_MAX;
uint64_t t94 = 6470LLU;
static int32_t x518 = 3;
volatile uint32_t t95 = 561754U;
int8_t x534 = 0;
uint32_t t96 = 137206U;
uint8_t x542 = 3U;
int32_t t98 = -1;
static volatile int32_t x558 = 2113362;
int64_t x561 = -1LL;
static uint64_t x569 = UINT64_MAX;
volatile uint64_t t103 = 19844536109463LLU;
volatile int64_t t105 = -5031633917LL;
int16_t x593 = -1;
uint32_t t108 = 89738U;
static volatile int16_t x612 = 1602;
volatile uint32_t x628 = 5133943U;
int64_t x638 = -120667257LL;
int16_t x643 = -1;
int8_t x646 = 19;
uint8_t x651 = UINT8_MAX;
int32_t x652 = -1;
volatile uint32_t x654 = 1646670352U;
int8_t x658 = -1;
volatile uint32_t t121 = 923582U;
static uint64_t x676 = 2LLU;
uint64_t t122 = 576872658063LLU;
uint8_t x688 = UINT8_MAX;
static int64_t x689 = -1LL;
uint64_t t126 = 28LLU;
static volatile int16_t x697 = INT16_MIN;
volatile int16_t x700 = -1;
int32_t t127 = 294;
uint16_t x706 = UINT16_MAX;
uint8_t x708 = UINT8_MAX;
int32_t x722 = -1;
static int64_t x726 = -1LL;
uint16_t x731 = 101U;
uint16_t x732 = 976U;
static uint64_t x738 = UINT64_MAX;
volatile uint64_t t135 = 82563172LLU;
int64_t x750 = -1LL;
volatile uint8_t x751 = 13U;
int64_t t137 = 8173LL;
volatile int64_t x753 = -1LL;
static volatile int64_t t138 = 2820532496696889708LL;
uint8_t x762 = UINT8_MAX;
uint64_t t141 = 5372599760193633825LLU;
uint8_t x769 = 2U;
int16_t x771 = INT16_MIN;
volatile int32_t t143 = -1;
int64_t x785 = 4114709025740LL;
int32_t x794 = -1;
volatile uint64_t x798 = 19687533LLU;
int32_t x806 = -22825219;
volatile int32_t t148 = -5;
int64_t x810 = INT64_MIN;
int64_t x813 = 2871206796479LL;
uint16_t x816 = 19132U;
volatile int64_t t150 = -22498993716255LL;
int32_t x822 = INT32_MIN;
volatile int64_t t151 = 124603726589549800LL;
uint32_t x844 = UINT32_MAX;
volatile uint32_t t154 = 3296572U;
volatile int32_t x849 = -1;
int8_t x852 = -57;
uint64_t t156 = 5LLU;
volatile uint8_t x859 = UINT8_MAX;
uint16_t x863 = UINT16_MAX;
static volatile uint8_t x864 = 62U;
int32_t x866 = 0;
int8_t x867 = 1;
int8_t x873 = 9;
static int64_t x874 = -1LL;
int16_t x876 = INT16_MIN;
static int64_t t163 = -13LL;
uint8_t x892 = UINT8_MAX;
uint32_t t164 = 27447U;
int8_t x900 = INT8_MIN;
uint64_t x907 = UINT64_MAX;
volatile uint64_t t168 = 3LLU;
volatile int16_t x914 = INT16_MIN;
int32_t x916 = -1;
uint8_t x924 = 12U;
static volatile int64_t x928 = INT64_MAX;
int16_t x932 = INT16_MAX;
static volatile int8_t x941 = 1;
static int8_t x946 = INT8_MIN;
static volatile int8_t x947 = INT8_MIN;
int32_t x948 = -147;
int32_t x952 = -137;
static int8_t x955 = -1;
uint64_t t177 = 2405683LLU;
int16_t x961 = INT16_MIN;
volatile uint16_t x963 = 0U;
volatile int64_t x969 = INT64_MIN;
int64_t t179 = -105LL;
uint8_t x979 = 55U;
static uint32_t x980 = UINT32_MAX;
volatile int32_t t183 = 42250709;
volatile int16_t x997 = INT16_MIN;
static uint64_t x1033 = UINT64_MAX;
int8_t x1077 = INT8_MIN;
uint32_t x1080 = 478468U;
volatile uint32_t t195 = 30812U;
uint64_t x1083 = UINT64_MAX;
uint64_t t196 = 348115LLU;
uint32_t x1094 = 40240998U;
volatile uint64_t t197 = 15551461LLU;
int32_t x1100 = 72163;
int32_t x1103 = -1;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	int32_t x2 = -384727087;
	static int8_t x3 = INT8_MIN;
	volatile uint16_t x4 = UINT16_MAX;
	int32_t t0 = 0;

    t0 = ((x1|(x2-x3))*x4);

    if (t0 != -3080145) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x11 = 111U;
	uint32_t x12 = 16181U;
	volatile uint32_t t1 = 1660U;

    t1 = ((x9|(x10-x11))*x12);

    if (t1 != 4294951115U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x13 = UINT32_MAX;
	int64_t x14 = INT64_MIN;
	static int16_t x15 = 0;
	int16_t x16 = -1;
	int64_t t2 = -975107958360994LL;

    t2 = ((x13|(x14-x15))*x16);

    if (t2 != 9223372032559808513LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x21 = -1;
	int8_t x23 = -1;
	int16_t x24 = INT16_MAX;
	int32_t t3 = -9;

    t3 = ((x21|(x22-x23))*x24);

    if (t3 != -32767) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x25 = -1;
	static uint8_t x26 = 4U;
	int16_t x28 = -1763;
	volatile uint64_t t4 = 22LLU;

    t4 = ((x25|(x26-x27))*x28);

    if (t4 != 1763LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x29 = UINT64_MAX;
	int16_t x30 = -1;
	volatile int32_t x31 = INT32_MIN;
	uint64_t t5 = 1763190679518761598LLU;

    t5 = ((x29|(x30-x31))*x32);

    if (t5 != 2147483648LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x34 = 28;
	uint32_t x35 = UINT32_MAX;
	volatile uint64_t t6 = 5061857209379LLU;

    t6 = ((x33|(x34-x35))*x36);

    if (t6 != 128LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x41 = INT16_MIN;
	uint64_t x42 = 7299864920375569LLU;
	static int8_t x43 = -1;
	static int16_t x44 = 4467;
	static volatile uint64_t t7 = 1040738716236LLU;

    t7 = ((x41|(x42-x43))*x44);

    if (t7 != 18446744073637588246LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x46 = INT16_MAX;
	static int64_t t8 = -45791947564991367LL;

    t8 = ((x45|(x46-x47))*x48);

    if (t8 != 2105545931756LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x55 = -1;
	static volatile int64_t t9 = 7436648130752164LL;

    t9 = ((x53|(x54-x55))*x56);

    if (t9 != 274875654400LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x57 = -13;
	int8_t x58 = -1;
	uint64_t x60 = UINT64_MAX;
	uint64_t t10 = 3642123LLU;

    t10 = ((x57|(x58-x59))*x60);

    if (t10 != 5LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint32_t x62 = 128U;
	volatile int32_t x63 = INT32_MAX;
	static uint16_t x64 = 116U;
	volatile uint32_t t11 = 19601874U;

    t11 = ((x61|(x62-x63))*x64);

    if (t11 != 29580U) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint32_t x65 = UINT32_MAX;
	volatile int8_t x66 = -15;
	int8_t x67 = INT8_MIN;
	uint32_t x68 = UINT32_MAX;
	uint32_t t12 = 367215670U;

    t12 = ((x65|(x66-x67))*x68);

    if (t12 != 1U) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x77 = 99U;
	volatile uint32_t x78 = 253359639U;
	uint32_t x79 = 1015419695U;
	volatile int32_t x80 = INT32_MIN;
	static uint32_t t13 = 342U;

    t13 = ((x77|(x78-x79))*x80);

    if (t13 != 2147483648U) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x81 = -1;
	static volatile uint64_t x82 = 4891724LLU;
	uint64_t x83 = 3040874749849695LLU;
	int64_t x84 = INT64_MIN;
	volatile uint64_t t14 = 53687256LLU;

    t14 = ((x81|(x82-x83))*x84);

    if (t14 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x89 = INT64_MAX;
	int32_t x90 = INT32_MIN;
	uint64_t x91 = 5803170794287751654LLU;
	static int16_t x92 = INT16_MIN;
	volatile uint64_t t15 = 48135LLU;

    t15 = ((x89|(x90-x91))*x92);

    if (t15 != 32768LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint32_t x93 = UINT32_MAX;
	int8_t x94 = -57;
	uint32_t x95 = UINT32_MAX;
	static int32_t x96 = 1;
	volatile uint32_t t16 = UINT32_MAX;

    t16 = ((x93|(x94-x95))*x96);

    if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x97 = INT32_MIN;
	int32_t x98 = 0;
	int32_t x99 = -1;

    t17 = ((x97|(x98-x99))*x100);

    if (t17 != 522639537621331LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int64_t x109 = -28154394LL;
	int16_t x110 = -1;
	int8_t x111 = INT8_MIN;
	uint64_t x112 = 0LLU;
	uint64_t t18 = 86307604795044LLU;

    t18 = ((x109|(x110-x111))*x112);

    if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x114 = INT32_MIN;
	int32_t x115 = -243;
	uint32_t x116 = 0U;

    t19 = ((x113|(x114-x115))*x116);

    if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x125 = 304420U;
	uint64_t x126 = UINT64_MAX;
	uint8_t x127 = UINT8_MAX;
	int64_t x128 = -36235LL;
	static volatile uint64_t t20 = 19147468275LLU;

    t20 = ((x125|(x126-x127))*x128);

    if (t20 != 7971700LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x129 = INT16_MIN;
	int16_t x130 = INT16_MIN;
	int64_t x131 = INT64_MIN;
	uint16_t x132 = 6268U;
	static int64_t t21 = -3159730041163046LL;

    t21 = ((x129|(x130-x131))*x132);

    if (t21 != -205389824LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x137 = 1;
	int16_t x138 = INT16_MIN;
	static uint8_t x139 = 115U;
	static uint32_t x140 = 1U;
	uint32_t t22 = 6416U;

    t22 = ((x137|(x138-x139))*x140);

    if (t22 != 4294934413U) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int8_t x141 = INT8_MIN;
	uint32_t x142 = 323U;
	volatile uint32_t t23 = 11781U;

    t23 = ((x141|(x142-x143))*x144);

    if (t23 != 294912U) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x149 = INT64_MIN;
	static int32_t x150 = INT32_MIN;
	static volatile uint64_t t24 = 12956766LLU;

    t24 = ((x149|(x150-x151))*x152);

    if (t24 != 14144342793855884512LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x154 = UINT64_MAX;
	static int16_t x156 = -1;

    t25 = ((x153|(x154-x155))*x156);

    if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x157 = 15U;
	int32_t x158 = -1;
	uint64_t x159 = 1LLU;
	int16_t x160 = INT16_MIN;
	volatile uint64_t t26 = 18451947LLU;

    t26 = ((x157|(x158-x159))*x160);

    if (t26 != 32768LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x162 = INT16_MIN;
	volatile uint64_t x163 = 0LLU;
	uint64_t t27 = 125419052LLU;

    t27 = ((x161|(x162-x163))*x164);

    if (t27 != 2147483648LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x169 = INT64_MAX;
	uint64_t x171 = 11475LLU;
	static int64_t x172 = 11438888480LL;

    t28 = ((x169|(x170-x171))*x172);

    if (t28 != 18446744062270663136LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x177 = -15700637538255LL;
	volatile int32_t x179 = -1;
	int8_t x180 = INT8_MIN;
	int64_t t29 = 469625367159044042LL;

    t29 = ((x177|(x178-x179))*x180);

    if (t29 != 2877312LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x185 = 40LLU;
	uint64_t x187 = 936LLU;
	int16_t x188 = INT16_MIN;
	volatile uint64_t t30 = 553771261135105LLU;

    t30 = ((x185|(x186-x187))*x188);

    if (t30 != 18446744071591460864LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x189 = 1U;
	int8_t x190 = INT8_MAX;
	int64_t x191 = -47LL;
	static int64_t t31 = -32533353085424LL;

    t31 = ((x189|(x190-x191))*x192);

    if (t31 != 751619276625LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x194 = 726312405LL;
	int8_t x195 = INT8_MIN;
	uint64_t x196 = 2182591LLU;

    t32 = ((x193|(x194-x195))*x196);

    if (t32 != 18446744023608175211LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile uint8_t x197 = 120U;
	volatile uint32_t x198 = UINT32_MAX;
	int16_t x199 = -1;
	static int16_t x200 = -1;
	static uint32_t t33 = 11U;

    t33 = ((x197|(x198-x199))*x200);

    if (t33 != 4294967176U) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x202 = -253052763852470083LL;
	static volatile uint64_t x203 = UINT64_MAX;
	int8_t x204 = 0;
	static uint64_t t34 = 2LLU;

    t34 = ((x201|(x202-x203))*x204);

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint16_t x205 = UINT16_MAX;
	int16_t x206 = -1;
	int32_t x207 = -1;
	volatile int32_t x208 = -1;
	static volatile int32_t t35 = 1;

    t35 = ((x205|(x206-x207))*x208);

    if (t35 != -65535) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x209 = INT32_MIN;
	uint64_t x210 = 20865LLU;
	volatile int64_t x211 = 1678LL;
	volatile uint64_t t36 = 1LLU;

    t36 = ((x209|(x210-x211))*x212);

    if (t36 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x213 = 1;
	int16_t x214 = -1;
	volatile int8_t x215 = -1;
	uint32_t x216 = 3U;

    t37 = ((x213|(x214-x215))*x216);

    if (t37 != 3U) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x217 = 14;
	static uint16_t x219 = UINT16_MAX;
	int8_t x220 = -1;
	volatile int32_t t38 = -22026337;

    t38 = ((x217|(x218-x219))*x220);

    if (t38 != 65522) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x225 = INT32_MIN;
	uint32_t x226 = 3811U;
	static volatile int16_t x227 = INT16_MIN;
	int8_t x228 = 8;

    t39 = ((x225|(x226-x227))*x228);

    if (t39 != 292632U) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint32_t x233 = 745U;
	int32_t x234 = 1;
	int16_t x235 = -14;
	volatile uint32_t x236 = UINT32_MAX;
	static uint32_t t40 = 137U;

    t40 = ((x233|(x234-x235))*x236);

    if (t40 != 4294966545U) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x238 = INT64_MIN;
	int8_t x240 = 31;
	uint64_t t41 = 45610253227745872LLU;

    t41 = ((x237|(x238-x239))*x240);

    if (t41 != 18446744073709551585LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x241 = 10;
	int16_t x242 = INT16_MAX;
	int16_t x244 = -26;
	int32_t t42 = -118582948;

    t42 = ((x241|(x242-x243))*x244);

    if (t42 != -852228) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x245 = 1543425068LL;
	int64_t x246 = 28021940027478536LL;
	uint64_t x247 = 139471829833843934LLU;
	uint64_t t43 = 144LLU;

    t43 = ((x245|(x246-x247))*x248);

    if (t43 != 18335294184174374190LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x249 = -1;
	uint64_t x250 = 53716621488229973LLU;
	int32_t x251 = INT32_MIN;
	uint32_t x252 = 111U;

    t44 = ((x249|(x250-x251))*x252);

    if (t44 != 18446744073709551505LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint64_t x253 = UINT64_MAX;
	uint32_t x254 = 174042U;
	volatile int64_t x256 = -1LL;
	uint64_t t45 = 73162071320884382LLU;

    t45 = ((x253|(x254-x255))*x256);

    if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x257 = 2U;
	int32_t x258 = INT32_MAX;
	uint8_t x259 = 7U;
	static volatile uint64_t x260 = 385171306759351797LLU;
	volatile uint64_t t46 = 45LLU;

    t46 = ((x257|(x258-x259))*x260);

    if (t46 != 9400643439938071618LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x265 = INT64_MIN;
	uint64_t x267 = 3047700256215416150LLU;
	int16_t x268 = 3;
	volatile uint64_t t47 = 50LLU;

    t47 = ((x265|(x266-x267))*x268);

    if (t47 != 9303643304679998296LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint32_t x270 = 303U;
	static int32_t x271 = INT32_MIN;
	uint64_t x272 = 168183LLU;

    t48 = ((x269|(x270-x271))*x272);

    if (t48 != 361801167945993LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint16_t x273 = 0U;
	int8_t x276 = INT8_MIN;
	int32_t t49 = 35521;

    t49 = ((x273|(x274-x275))*x276);

    if (t49 != 864085504) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x281 = INT64_MIN;
	int16_t x283 = -1;
	int32_t x284 = -1;
	int64_t t50 = -133LL;

    t50 = ((x281|(x282-x283))*x284);

    if (t50 != 9223372036854775780LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x293 = INT32_MIN;
	uint16_t x294 = UINT16_MAX;
	int8_t x295 = 15;
	volatile uint32_t x296 = 4562U;
	volatile uint32_t t51 = 1279910U;

    t51 = ((x293|(x294-x295))*x296);

    if (t51 != 298902240U) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int8_t x297 = INT8_MIN;
	uint16_t x298 = 1U;
	uint16_t x299 = UINT16_MAX;
	uint8_t x300 = 56U;
	int32_t t52 = -55149025;

    t52 = ((x297|(x298-x299))*x300);

    if (t52 != -7056) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint16_t x301 = 7U;
	uint64_t t53 = 15LLU;

    t53 = ((x301|(x302-x303))*x304);

    if (t53 != 4773470LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x309 = INT16_MIN;
	uint8_t x310 = UINT8_MAX;
	int8_t x311 = INT8_MIN;
	uint32_t x312 = UINT32_MAX;
	volatile uint32_t t54 = 8U;

    t54 = ((x309|(x310-x311))*x312);

    if (t54 != 32385U) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x313 = INT8_MAX;
	int8_t x316 = 13;
	static volatile int64_t t55 = 30034LL;

    t55 = ((x313|(x314-x315))*x316);

    if (t55 != -1677LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x318 = UINT8_MAX;
	volatile int16_t x319 = -11;
	int16_t x320 = 873;
	int32_t t56 = -374717;

    t56 = ((x317|(x318-x319))*x320);

    if (t56 != 446103) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x321 = -1LL;
	volatile uint64_t x322 = 736571970LLU;
	volatile int32_t x323 = INT32_MIN;
	volatile uint64_t t57 = 250241781656013LLU;

    t57 = ((x321|(x322-x323))*x324);

    if (t57 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x329 = -3;
	static int16_t x330 = INT16_MAX;
	static int8_t x332 = -1;
	volatile int32_t t58 = 22853;

    t58 = ((x329|(x330-x331))*x332);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x333 = 12;
	volatile int32_t x334 = -19935;
	int16_t x335 = -1;
	int32_t t59 = -2;

    t59 = ((x333|(x334-x335))*x336);

    if (t59 != -421748740) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x337 = -45;
	int32_t x338 = -41;
	static int32_t x339 = INT32_MIN;
	static volatile int16_t x340 = 727;

    t60 = ((x337|(x338-x339))*x340);

    if (t60 != -29807) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint16_t x349 = 35U;
	uint8_t x351 = 59U;
	static uint32_t x352 = 49276U;
	static volatile uint32_t t61 = 1965020U;

    t61 = ((x349|(x350-x351))*x352);

    if (t61 != 4293735396U) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int64_t x353 = -1LL;
	int64_t x354 = -1LL;
	int64_t x355 = INT64_MAX;
	static volatile int64_t t62 = -2811424718804014LL;

    t62 = ((x353|(x354-x355))*x356);

    if (t62 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int16_t x357 = -1;
	int32_t x358 = 1537831;
	volatile int8_t x359 = INT8_MIN;
	volatile uint64_t x360 = 51LLU;
	volatile uint64_t t63 = 15669451890LLU;

    t63 = ((x357|(x358-x359))*x360);

    if (t63 != 18446744073709551565LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x365 = -2359493901440303LL;
	uint16_t x367 = 3013U;
	uint8_t x368 = UINT8_MAX;
	static volatile int64_t t64 = -451415368369955716LL;

    t64 = ((x365|(x366-x367))*x368);

    if (t64 != -66555LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x369 = -383782688;
	uint64_t x370 = 8361454574LLU;
	uint32_t x371 = 233068642U;
	int16_t x372 = -15;
	volatile uint64_t t65 = 11063187LLU;

    t65 = ((x369|(x370-x371))*x372);

    if (t65 != 4655723820LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x377 = INT32_MIN;
	static int8_t x378 = -1;
	static int64_t x379 = -1LL;
	uint16_t x380 = 126U;
	static int64_t t66 = -5071507LL;

    t66 = ((x377|(x378-x379))*x380);

    if (t66 != -270582939648LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x381 = INT16_MIN;
	volatile int64_t x382 = -157490LL;
	volatile uint8_t x383 = 3U;
	int32_t x384 = INT32_MIN;

    t67 = ((x381|(x382-x383))*x384);

    if (t67 != 56738665463808LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x385 = 23797451LLU;
	uint64_t x386 = 456194990150LLU;
	uint8_t x387 = 0U;
	int32_t x388 = -1;
	static volatile uint64_t t68 = 476236442006LLU;

    t68 = ((x385|(x386-x387))*x388);

    if (t68 != 18446743617511932209LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x390 = INT32_MIN;
	uint64_t x391 = UINT64_MAX;
	static int32_t x392 = INT32_MAX;
	volatile uint64_t t69 = 3337LLU;

    t69 = ((x389|(x390-x391))*x392);

    if (t69 != 18446743800979128447LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint64_t x393 = 8016398436905256LLU;
	int8_t x394 = INT8_MIN;
	volatile int32_t x396 = INT32_MIN;
	uint64_t t70 = 88783664689LLU;

    t70 = ((x393|(x394-x395))*x396);

    if (t70 != 283467841536LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint64_t x397 = 125071LLU;
	int8_t x399 = INT8_MAX;
	uint8_t x400 = 2U;
	uint64_t t71 = 8298696991163523938LLU;

    t71 = ((x397|(x398-x399))*x400);

    if (t71 != 18446744073709551390LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x401 = 12U;
	int32_t x402 = -1;
	volatile int8_t x403 = 1;
	static int64_t x404 = 53858851LL;
	volatile int64_t t72 = 3LL;

    t72 = ((x401|(x402-x403))*x404);

    if (t72 != -107717702LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint32_t x409 = 134384235U;
	uint8_t x410 = 5U;
	uint8_t x411 = 42U;
	volatile uint64_t x412 = 32LLU;
	volatile uint64_t t73 = 105450594952LLU;

    t73 = ((x409|(x410-x411))*x412);

    if (t73 != 137438953312LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x417 = -1LL;
	int8_t x419 = 22;
	int8_t x420 = INT8_MIN;
	volatile int64_t t74 = -8314276818564LL;

    t74 = ((x417|(x418-x419))*x420);

    if (t74 != 128LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x421 = -1;
	volatile uint16_t x422 = 7920U;
	uint8_t x424 = UINT8_MAX;

    t75 = ((x421|(x422-x423))*x424);

    if (t75 != -255) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x425 = -82;
	int16_t x426 = INT16_MAX;
	int32_t x428 = INT32_MIN;
	int64_t t76 = 31259459267960LL;

    t76 = ((x425|(x426-x427))*x428);

    if (t76 != 176093659136LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x429 = -1;
	volatile uint64_t x430 = 887525204LLU;
	int16_t x431 = INT16_MIN;
	static int32_t x432 = INT32_MIN;
	uint64_t t77 = 0LLU;

    t77 = ((x429|(x430-x431))*x432);

    if (t77 != 2147483648LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x434 = 1735271091LLU;
	static uint8_t x435 = 0U;
	volatile int16_t x436 = INT16_MIN;
	static volatile uint64_t t78 = 5089637LLU;

    t78 = ((x433|(x434-x435))*x436);

    if (t78 != 32768LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x437 = -1LL;
	static volatile int32_t x438 = INT32_MAX;
	int32_t x439 = 29;
	int64_t x440 = INT64_MAX;
	int64_t t79 = -3361LL;

    t79 = ((x437|(x438-x439))*x440);

    if (t79 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x441 = INT8_MIN;
	int16_t x442 = INT16_MIN;
	volatile int64_t x443 = -1LL;
	int16_t x444 = -1535;
	volatile int64_t t80 = 1089349133745039LL;

    t80 = ((x441|(x442-x443))*x444);

    if (t80 != 194945LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x445 = -1;
	int8_t x446 = INT8_MIN;
	volatile uint16_t x447 = UINT16_MAX;
	uint16_t x448 = 25U;
	static volatile int32_t t81 = -215072;

    t81 = ((x445|(x446-x447))*x448);

    if (t81 != -25) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x455 = -7284051LL;
	uint32_t x456 = 114U;
	int64_t t82 = -256862LL;

    t82 = ((x453|(x454-x455))*x456);

    if (t82 != 244813135758LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x457 = UINT32_MAX;
	uint64_t x458 = 182LLU;
	int16_t x459 = -9120;
	int64_t x460 = INT64_MAX;
	static volatile uint64_t t83 = 413127536LLU;

    t83 = ((x457|(x458-x459))*x460);

    if (t83 != 9223372032559808513LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x461 = UINT64_MAX;
	volatile int16_t x464 = -1;
	uint64_t t84 = 905476051LLU;

    t84 = ((x461|(x462-x463))*x464);

    if (t84 != 1LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x469 = INT8_MAX;
	static volatile uint64_t x470 = 113336056178963722LLU;
	static int64_t x471 = 118657374275LL;

    t85 = ((x469|(x470-x471))*x472);

    if (t85 != 18333408136187962113LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x473 = 896551U;
	int8_t x474 = INT8_MIN;
	uint64_t x475 = UINT64_MAX;
	static int8_t x476 = 3;

    t86 = ((x473|(x474-x475))*x476);

    if (t86 != 18446744073709551349LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x478 = INT8_MIN;
	int64_t x479 = INT64_MIN;
	uint32_t x480 = 30U;

    t87 = ((x477|(x478-x479))*x480);

    if (t87 != -30LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x481 = INT64_MAX;
	int32_t x482 = -1;
	static int16_t x483 = 2;
	volatile int16_t x484 = -1;
	int64_t t88 = -7556659529970LL;

    t88 = ((x481|(x482-x483))*x484);

    if (t88 != 1LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int32_t x493 = 5;
	volatile int64_t x494 = -1LL;
	uint32_t x496 = 409982U;
	int64_t t89 = 633LL;

    t89 = ((x493|(x494-x495))*x496);

    if (t89 != 13418782606850LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x498 = 204883524LL;
	static int16_t x499 = -3;
	static uint32_t x500 = 2080096U;
	volatile int64_t t90 = 307043458LL;

    t90 = ((x497|(x498-x499))*x500);

    if (t90 != 426177471541664LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x501 = UINT8_MAX;
	static int64_t x502 = -1LL;
	volatile int8_t x503 = -41;
	int64_t t91 = -66705480151LL;

    t91 = ((x501|(x502-x503))*x504);

    if (t91 != -255LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x505 = -1;
	uint8_t x506 = UINT8_MAX;
	static int8_t x508 = INT8_MIN;
	volatile int32_t t92 = 82461;

    t92 = ((x505|(x506-x507))*x508);

    if (t92 != 128) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x509 = 9445U;
	uint64_t x510 = 689LLU;
	int64_t x512 = -1LL;

    t93 = ((x509|(x510-x511))*x512);

    if (t93 != 18446744073709541387LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint8_t x513 = 7U;
	uint64_t x516 = 554214709LLU;

    t94 = ((x513|(x514-x515))*x516);

    if (t94 != 18446707769875038571LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x517 = 992;
	int16_t x519 = INT16_MIN;
	static volatile uint32_t x520 = UINT32_MAX;

    t95 = ((x517|(x518-x519))*x520);

    if (t95 != 4294933533U) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x533 = UINT32_MAX;
	volatile int16_t x535 = -5842;
	volatile uint8_t x536 = UINT8_MAX;

    t96 = ((x533|(x534-x535))*x536);

    if (t96 != 4294967041U) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x537 = INT8_MIN;
	volatile int64_t x538 = -1LL;
	int64_t x539 = INT64_MAX;
	volatile int8_t x540 = 11;
	int64_t t97 = 30169184170LL;

    t97 = ((x537|(x538-x539))*x540);

    if (t97 != -1408LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x541 = INT8_MIN;
	uint16_t x543 = 1U;
	uint16_t x544 = 359U;

    t98 = ((x541|(x542-x543))*x544);

    if (t98 != -45234) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x553 = INT32_MAX;
	int64_t x554 = -1LL;
	uint8_t x555 = UINT8_MAX;
	int8_t x556 = INT8_MIN;
	static int64_t t99 = -110520337246374100LL;

    t99 = ((x553|(x554-x555))*x556);

    if (t99 != 128LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x557 = INT32_MIN;
	uint64_t x559 = 23921579067063973LLU;
	int16_t x560 = INT16_MIN;
	uint64_t t100 = 67220951772228LLU;

    t100 = ((x557|(x558-x559))*x560);

    if (t100 != 21238607609856LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x562 = 95U;
	int16_t x563 = INT16_MIN;
	int16_t x564 = INT16_MIN;
	int64_t t101 = -2918255379122788LL;

    t101 = ((x561|(x562-x563))*x564);

    if (t101 != 32768LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x565 = INT32_MIN;
	uint8_t x566 = 115U;
	int16_t x567 = -1;
	static volatile uint32_t x568 = 24006U;
	volatile uint32_t t102 = 1195U;

    t102 = ((x565|(x566-x567))*x568);

    if (t102 != 2784696U) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x570 = -8721;
	uint16_t x571 = 0U;
	volatile uint16_t x572 = UINT16_MAX;

    t103 = ((x569|(x570-x571))*x572);

    if (t103 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x573 = INT64_MIN;
	uint64_t x574 = UINT64_MAX;
	int64_t x575 = -1197365202270760LL;
	uint16_t x576 = 1302U;
	uint64_t t104 = 655966861156328470LLU;

    t104 = ((x573|(x574-x575))*x576);

    if (t104 != 1558969493356528218LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x585 = INT32_MIN;
	int32_t x586 = 1094;
	static int64_t x587 = INT64_MAX;
	int8_t x588 = INT8_MIN;

    t105 = ((x585|(x586-x587))*x588);

    if (t105 != 274877766784LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile uint8_t x594 = 10U;
	static int64_t x595 = -71LL;
	uint8_t x596 = 35U;
	int64_t t106 = -100638985LL;

    t106 = ((x593|(x594-x595))*x596);

    if (t106 != -35LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x597 = INT64_MIN;
	uint32_t x598 = UINT32_MAX;
	int64_t x599 = 217356181270LL;
	uint16_t x600 = 60U;
	volatile int64_t t107 = -99640379LL;

    t107 = ((x597|(x598-x599))*x600);

    if (t107 != -12783672838500LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x605 = 376264509U;
	volatile uint32_t x606 = 1959930U;
	int32_t x607 = 472930344;
	volatile int16_t x608 = INT16_MIN;

    t108 = ((x605|(x606-x607))*x608);

    if (t108 != 268468224U) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x609 = INT8_MIN;
	int8_t x610 = -1;
	static volatile int32_t x611 = INT32_MAX;
	volatile int32_t t109 = -1;

    t109 = ((x609|(x610-x611))*x612);

    if (t109 != -205056) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x617 = 33621087645279LL;
	int32_t x618 = 1048646039;
	uint8_t x619 = 104U;
	volatile int8_t x620 = INT8_MIN;
	static int64_t t110 = 3LL;

    t110 = ((x617|(x618-x619))*x620);

    if (t110 != -4303623781597056LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x621 = 15LLU;
	volatile uint8_t x622 = 0U;
	volatile int32_t x623 = -1;
	int16_t x624 = -1;
	volatile uint64_t t111 = 34098031239LLU;

    t111 = ((x621|(x622-x623))*x624);

    if (t111 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x625 = -1;
	volatile uint64_t x626 = UINT64_MAX;
	int32_t x627 = -1;
	uint64_t t112 = 14489847068541LLU;

    t112 = ((x625|(x626-x627))*x628);

    if (t112 != 18446744073704417673LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x633 = INT16_MIN;
	int8_t x634 = 8;
	uint64_t x635 = 5584805420198LLU;
	static uint8_t x636 = 42U;
	static uint64_t t113 = 17586132LLU;

    t113 = ((x633|(x634-x635))*x636);

    if (t113 != 18446744073708555796LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x637 = INT32_MIN;
	int64_t x639 = INT64_MIN;
	int32_t x640 = 3630540;
	int64_t t114 = -156784LL;

    t114 = ((x637|(x638-x639))*x640);

    if (t114 != -438087303228780LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x641 = 47U;
	static int32_t x642 = -1;
	int32_t x644 = -1206373;
	volatile int32_t t115 = -123353;

    t115 = ((x641|(x642-x643))*x644);

    if (t115 != -56699531) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x645 = -1;
	static volatile int32_t x647 = INT32_MAX;
	int32_t x648 = -72036;
	volatile int32_t t116 = 3;

    t116 = ((x645|(x646-x647))*x648);

    if (t116 != 72036) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint32_t x649 = UINT32_MAX;
	int32_t x650 = INT32_MAX;
	static uint32_t t117 = 189U;

    t117 = ((x649|(x650-x651))*x652);

    if (t117 != 1U) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x653 = INT8_MIN;
	int64_t x655 = 27223LL;
	uint32_t x656 = 24778U;
	int64_t t118 = 4642706334LL;

    t118 = ((x653|(x654-x655))*x656);

    if (t118 != -1759238LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x657 = INT16_MAX;
	int32_t x659 = -5387690;
	int32_t x660 = -1;
	int32_t t119 = 289;

    t119 = ((x657|(x658-x659))*x660);

    if (t119 != -5406719) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x665 = -1LL;
	uint32_t x666 = 102886U;
	int16_t x667 = -1;
	int8_t x668 = INT8_MIN;
	volatile int64_t t120 = -30507LL;

    t120 = ((x665|(x666-x667))*x668);

    if (t120 != 128LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x669 = 7616817U;
	int16_t x670 = INT16_MAX;
	int16_t x671 = INT16_MIN;
	volatile int8_t x672 = INT8_MIN;

    t121 = ((x669|(x670-x671))*x672);

    if (t121 != 3313500288U) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint32_t x673 = UINT32_MAX;
	int16_t x674 = -3228;
	int32_t x675 = INT32_MIN;

    t122 = ((x673|(x674-x675))*x676);

    if (t122 != 8589934590LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x677 = INT16_MAX;
	int8_t x678 = 1;
	int16_t x679 = INT16_MIN;
	static volatile uint32_t x680 = 54U;
	volatile uint32_t t123 = 1407U;

    t123 = ((x677|(x678-x679))*x680);

    if (t123 != 3538890U) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x685 = -28;
	uint32_t x686 = UINT32_MAX;
	static int16_t x687 = 2087;
	uint32_t t124 = 341530080U;

    t124 = ((x685|(x686-x687))*x688);

    if (t124 != 4294966276U) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x690 = INT16_MIN;
	static int8_t x691 = INT8_MIN;
	static int8_t x692 = 0;
	int64_t t125 = 171316645425601165LL;

    t125 = ((x689|(x690-x691))*x692);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint64_t x693 = UINT64_MAX;
	int8_t x694 = INT8_MAX;
	int16_t x695 = INT16_MAX;
	volatile int16_t x696 = INT16_MIN;

    t126 = ((x693|(x694-x695))*x696);

    if (t126 != 32768LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x698 = INT8_MAX;
	volatile int16_t x699 = INT16_MIN;

    t127 = ((x697|(x698-x699))*x700);

    if (t127 != 32641) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x705 = -1LL;
	int64_t x707 = -1LL;
	int64_t t128 = 1145298146638970LL;

    t128 = ((x705|(x706-x707))*x708);

    if (t128 != -255LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x709 = 8U;
	uint64_t x710 = 197326814991873LLU;
	volatile int64_t x711 = -473LL;
	uint8_t x712 = UINT8_MAX;
	uint64_t t129 = 5004791365008LLU;

    t129 = ((x709|(x710-x711))*x712);

    if (t129 != 50318337823048230LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x717 = UINT64_MAX;
	int64_t x718 = INT64_MIN;
	int32_t x719 = INT32_MIN;
	uint64_t x720 = 391136211467108LLU;
	uint64_t t130 = 3923858LLU;

    t130 = ((x717|(x718-x719))*x720);

    if (t130 != 18446352937498084508LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x721 = UINT16_MAX;
	volatile uint64_t x723 = 7349502984370222897LLU;
	int16_t x724 = -171;
	uint64_t t131 = 0LLU;

    t131 = ((x721|(x722-x723))*x724);

    if (t131 != 2386413315053387947LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x725 = -61909429061616726LL;
	static volatile int16_t x727 = 20;
	int32_t x728 = -1;
	static int64_t t132 = -30500985LL;

    t132 = ((x725|(x726-x727))*x728);

    if (t132 != 21LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x729 = INT64_MIN;
	int64_t x730 = -1LL;
	int64_t t133 = -70846089889LL;

    t133 = ((x729|(x730-x731))*x732);

    if (t133 != -99552LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x733 = 4U;
	int32_t x734 = 106;
	uint64_t x735 = 133245LLU;
	static int16_t x736 = INT16_MIN;
	uint64_t t134 = 4LLU;

    t134 = ((x733|(x734-x735))*x736);

    if (t134 != 4362698752LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x737 = INT8_MAX;
	int32_t x739 = 114412434;
	uint32_t x740 = 588962U;

    t135 = ((x737|(x738-x739))*x740);

    if (t135 != 18446676689143610462LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x741 = 7734U;
	static int64_t x742 = INT64_MIN;
	int16_t x743 = -1;
	uint16_t x744 = 1U;
	int64_t t136 = 16007657683269776LL;

    t136 = ((x741|(x742-x743))*x744);

    if (t136 != -9223372036854768073LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x749 = -4;
	int16_t x752 = 4862;

    t137 = ((x749|(x750-x751))*x752);

    if (t137 != -9724LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x754 = -299664017;
	int16_t x755 = INT16_MIN;
	static volatile uint32_t x756 = 11983U;

    t138 = ((x753|(x754-x755))*x756);

    if (t138 != -11983LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int8_t x757 = INT8_MIN;
	int8_t x758 = -1;
	int16_t x759 = INT16_MIN;
	int32_t x760 = 75861;
	volatile int32_t t139 = 112259568;

    t139 = ((x757|(x758-x759))*x760);

    if (t139 != -75861) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x761 = UINT16_MAX;
	static int8_t x763 = -1;
	int16_t x764 = -1;
	volatile int32_t t140 = 9766849;

    t140 = ((x761|(x762-x763))*x764);

    if (t140 != -65535) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x765 = INT64_MAX;
	volatile uint64_t x766 = 23890LLU;
	static volatile int16_t x767 = -5;
	uint8_t x768 = UINT8_MAX;

    t141 = ((x765|(x766-x767))*x768);

    if (t141 != 9223372036854775553LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x770 = -595;
	static uint8_t x772 = 38U;
	volatile int32_t t142 = 1;

    t142 = ((x769|(x770-x771))*x772);

    if (t142 != 1222650) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x777 = 4U;
	uint8_t x778 = UINT8_MAX;
	int8_t x779 = INT8_MIN;
	int8_t x780 = -50;

    t143 = ((x777|(x778-x779))*x780);

    if (t143 != -19150) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x786 = 64;
	int64_t x787 = -1LL;
	uint32_t x788 = 103U;
	static int64_t t144 = -88507483265168LL;

    t144 = ((x785|(x786-x787))*x788);

    if (t144 != 423815029651323LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x793 = INT8_MAX;
	uint8_t x795 = 0U;
	int8_t x796 = INT8_MIN;
	static volatile int32_t t145 = -7684;

    t145 = ((x793|(x794-x795))*x796);

    if (t145 != 128) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x797 = 312LLU;
	uint64_t x799 = 1014LLU;
	int8_t x800 = 0;
	volatile uint64_t t146 = 1505801771LLU;

    t146 = ((x797|(x798-x799))*x800);

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x801 = 195;
	int32_t x802 = -1;
	int8_t x803 = INT8_MIN;
	uint32_t x804 = UINT32_MAX;
	volatile uint32_t t147 = 130U;

    t147 = ((x801|(x802-x803))*x804);

    if (t147 != 4294967041U) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x805 = 3;
	int16_t x807 = 3;
	static int32_t x808 = -1;

    t148 = ((x805|(x806-x807))*x808);

    if (t148 != 22825221) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x809 = INT8_MIN;
	static volatile int64_t x811 = INT64_MIN;
	uint8_t x812 = UINT8_MAX;
	volatile int64_t t149 = 1LL;

    t149 = ((x809|(x810-x811))*x812);

    if (t149 != -32640LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x814 = 6U;
	uint8_t x815 = UINT8_MAX;

    t150 = ((x813|(x814-x815))*x816);

    if (t150 != -1243580LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x821 = 903LL;
	int64_t x823 = INT64_MIN;
	int8_t x824 = 0;

    t151 = ((x821|(x822-x823))*x824);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x825 = UINT16_MAX;
	int16_t x826 = INT16_MAX;
	static uint8_t x827 = UINT8_MAX;
	int32_t x828 = -1;
	static int32_t t152 = -4922;

    t152 = ((x825|(x826-x827))*x828);

    if (t152 != -65535) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x833 = 164684593392254042LL;
	uint64_t x834 = 853797244510261658LLU;
	int8_t x835 = INT8_MIN;
	volatile int8_t x836 = 33;
	volatile uint64_t t153 = 16609707571572122LLU;

    t153 = ((x833|(x834-x835))*x836);

    if (t153 != 9729281885305031066LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x841 = INT32_MIN;
	volatile uint32_t x842 = 0U;
	int32_t x843 = INT32_MIN;

    t154 = ((x841|(x842-x843))*x844);

    if (t154 != 2147483648U) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x845 = UINT64_MAX;
	int16_t x846 = INT16_MIN;
	uint32_t x847 = 103U;
	int64_t x848 = -1LL;
	static uint64_t t155 = 114532331LLU;

    t155 = ((x845|(x846-x847))*x848);

    if (t155 != 1LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x850 = UINT64_MAX;
	int16_t x851 = -2668;

    t156 = ((x849|(x850-x851))*x852);

    if (t156 != 57LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x853 = -1;
	int8_t x854 = 0;
	static int64_t x855 = 27024050136LL;
	int64_t x856 = 8013268046LL;
	int64_t t157 = 1341048759118166165LL;

    t157 = ((x853|(x854-x855))*x856);

    if (t157 != -8013268046LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x857 = -15;
	volatile uint64_t x858 = UINT64_MAX;
	uint64_t x860 = 323164852LLU;
	uint64_t t158 = 31624665LLU;

    t158 = ((x857|(x858-x859))*x860);

    if (t158 != 18446744068862078836LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile uint64_t x861 = UINT64_MAX;
	volatile int64_t x862 = INT64_MAX;
	static volatile uint64_t t159 = 2621433LLU;

    t159 = ((x861|(x862-x863))*x864);

    if (t159 != 18446744073709551554LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x865 = 13U;
	int16_t x868 = -212;
	int32_t t160 = -1092036;

    t160 = ((x865|(x866-x867))*x868);

    if (t160 != 212) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x875 = -21528;
	int64_t t161 = -87701LL;

    t161 = ((x873|(x874-x875))*x876);

    if (t161 != -705658880LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x877 = 1;
	static uint64_t x878 = UINT64_MAX;
	uint16_t x879 = 59U;
	volatile int8_t x880 = 0;
	static volatile uint64_t t162 = 450165966LLU;

    t162 = ((x877|(x878-x879))*x880);

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x881 = INT64_MAX;
	static volatile int8_t x882 = INT8_MIN;
	volatile uint16_t x883 = UINT16_MAX;
	int64_t x884 = -1LL;

    t163 = ((x881|(x882-x883))*x884);

    if (t163 != 1LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x889 = 21U;
	uint32_t x890 = 1929U;
	int16_t x891 = INT16_MIN;

    t164 = ((x889|(x890-x891))*x892);

    if (t164 != 8852835U) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x893 = -1;
	int32_t x894 = -1;
	uint8_t x895 = UINT8_MAX;
	static int32_t x896 = INT32_MAX;
	int32_t t165 = 29280;

    t165 = ((x893|(x894-x895))*x896);

    if (t165 != -2147483647) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x897 = -13;
	volatile int16_t x898 = -542;
	static volatile uint32_t x899 = 438U;
	static uint32_t t166 = 6U;

    t166 = ((x897|(x898-x899))*x900);

    if (t166 != 128U) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x901 = UINT64_MAX;
	int64_t x902 = 274145631156393860LL;
	int8_t x903 = 1;
	static uint64_t x904 = 5960840945175LLU;
	uint64_t t167 = 2043506LLU;

    t167 = ((x901|(x902-x903))*x904);

    if (t167 != 18446738112868606441LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x905 = INT16_MIN;
	int64_t x906 = 166520315LL;
	volatile uint8_t x908 = 66U;

    t168 = ((x905|(x906-x907))*x908);

    if (t168 != 18446744073709112056LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x913 = -576;
	static int32_t x915 = INT32_MIN;
	static volatile int32_t t169 = 814691933;

    t169 = ((x913|(x914-x915))*x916);

    if (t169 != 576) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x917 = -1;
	volatile int32_t x918 = -17327;
	static int64_t x919 = -1LL;
	int32_t x920 = INT32_MAX;
	static int64_t t170 = -3LL;

    t170 = ((x917|(x918-x919))*x920);

    if (t170 != -2147483647LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x921 = INT16_MIN;
	int32_t x922 = 25482;
	static uint8_t x923 = UINT8_MAX;
	static int32_t t171 = -23;

    t171 = ((x921|(x922-x923))*x924);

    if (t171 != -90492) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x925 = UINT64_MAX;
	uint32_t x926 = 275724U;
	volatile uint32_t x927 = 1931U;
	uint64_t t172 = 2208629158638LLU;

    t172 = ((x925|(x926-x927))*x928);

    if (t172 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x929 = 2;
	volatile int8_t x930 = 11;
	volatile int8_t x931 = 0;
	volatile int32_t t173 = -14;

    t173 = ((x929|(x930-x931))*x932);

    if (t173 != 360437) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int8_t x942 = 23;
	volatile uint64_t x943 = 266603393393482LLU;
	int8_t x944 = INT8_MIN;
	volatile uint64_t t174 = 2460371428536581371LLU;

    t174 = ((x941|(x942-x943))*x944);

    if (t174 != 34125234354362752LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x945 = INT16_MIN;
	static volatile int32_t t175 = -128742307;

    t175 = ((x945|(x946-x947))*x948);

    if (t175 != 4816896) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x949 = 11U;
	int64_t x950 = -1LL;
	int16_t x951 = -1;
	static volatile int64_t t176 = 1847685247278439LL;

    t176 = ((x949|(x950-x951))*x952);

    if (t176 != -1507LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint64_t x953 = UINT64_MAX;
	int32_t x954 = -1;
	volatile int64_t x956 = INT64_MIN;

    t177 = ((x953|(x954-x955))*x956);

    if (t177 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x962 = INT8_MAX;
	int8_t x964 = 2;
	volatile int32_t t178 = -10266823;

    t178 = ((x961|(x962-x963))*x964);

    if (t178 != -65282) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x970 = 280;
	int32_t x971 = INT32_MAX;
	int32_t x972 = 281;

    t179 = ((x969|(x970-x971))*x972);

    if (t179 != -603442826127LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile uint8_t x973 = UINT8_MAX;
	int16_t x974 = INT16_MIN;
	int8_t x975 = -1;
	int16_t x976 = 96;
	int32_t t180 = 288013;

    t180 = ((x973|(x974-x975))*x976);

    if (t180 != -3121248) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x977 = -21;
	static int32_t x978 = 361587;
	volatile uint32_t t181 = 1U;

    t181 = ((x977|(x978-x979))*x980);

    if (t181 != 1U) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x989 = -1924;
	int8_t x990 = -5;
	int64_t x991 = -1LL;
	static volatile uint32_t x992 = 5074490U;
	int64_t t182 = -105303411869246021LL;

    t182 = ((x989|(x990-x991))*x992);

    if (t182 != -20297960LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x993 = INT8_MIN;
	int32_t x994 = -862036;
	uint16_t x995 = 8933U;
	int16_t x996 = 301;

    t183 = ((x993|(x994-x995))*x996);

    if (t183 != -17157) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x998 = INT8_MAX;
	uint64_t x999 = 107432421148LLU;
	volatile int8_t x1000 = INT8_MIN;
	uint64_t t184 = 11418945072LLU;

    t184 = ((x997|(x998-x999))*x1000);

    if (t184 != 1265280LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint8_t x1001 = 86U;
	int16_t x1002 = 0;
	int8_t x1003 = 18;
	int16_t x1004 = 14;
	int32_t t185 = -21987708;

    t185 = ((x1001|(x1002-x1003))*x1004);

    if (t185 != -28) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint8_t x1017 = 21U;
	uint64_t x1018 = UINT64_MAX;
	int32_t x1019 = INT32_MAX;
	static uint32_t x1020 = 78511016U;
	uint64_t t186 = 70113284931LLU;

    t186 = ((x1017|(x1018-x1019))*x1020);

    if (t186 != 18278142952310416584LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x1021 = INT32_MAX;
	int64_t x1022 = INT64_MIN;
	volatile int16_t x1023 = -171;
	volatile uint64_t x1024 = 2492LLU;
	uint64_t t187 = 188LLU;

    t187 = ((x1021|(x1022-x1023))*x1024);

    if (t187 != 5351529248324LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x1025 = 426;
	int8_t x1026 = -1;
	int16_t x1027 = -1;
	uint16_t x1028 = 3080U;
	int32_t t188 = 29;

    t188 = ((x1025|(x1026-x1027))*x1028);

    if (t188 != 1312080) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x1034 = 22230902LLU;
	uint32_t x1035 = 1U;
	uint64_t x1036 = 15293121LLU;
	volatile uint64_t t189 = 21LLU;

    t189 = ((x1033|(x1034-x1035))*x1036);

    if (t189 != 18446744073694258495LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x1045 = 904966211855LLU;
	uint64_t x1046 = 1911034209853894LLU;
	int32_t x1047 = INT32_MAX;
	int32_t x1048 = INT32_MAX;
	volatile uint64_t t190 = 7536LLU;

    t190 = ((x1045|(x1046-x1047))*x1048);

    if (t190 != 8905633055830709809LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x1053 = INT8_MAX;
	int32_t x1054 = INT32_MIN;
	int8_t x1055 = -5;
	int16_t x1056 = -1;
	int32_t t191 = 192132894;

    t191 = ((x1053|(x1054-x1055))*x1056);

    if (t191 != 2147483521) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x1065 = INT32_MIN;
	uint64_t x1066 = 9LLU;
	static volatile int16_t x1067 = INT16_MIN;
	static int8_t x1068 = INT8_MIN;
	static volatile uint64_t t192 = 2LLU;

    t192 = ((x1065|(x1066-x1067))*x1068);

    if (t192 != 274873711488LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x1069 = -49;
	uint32_t x1070 = UINT32_MAX;
	int8_t x1071 = INT8_MAX;
	uint16_t x1072 = 889U;
	volatile uint32_t t193 = 1359199398U;

    t193 = ((x1069|(x1070-x1071))*x1072);

    if (t193 != 4294923735U) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x1073 = INT8_MIN;
	uint32_t x1074 = UINT32_MAX;
	volatile int64_t x1075 = INT64_MAX;
	volatile uint64_t x1076 = UINT64_MAX;
	static volatile uint64_t t194 = 2LLU;

    t194 = ((x1073|(x1074-x1075))*x1076);

    if (t194 != 128LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int32_t x1078 = 502;
	int16_t x1079 = -1;

    t195 = ((x1077|(x1078-x1079))*x1080);

    if (t195 != 4290661084U) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x1081 = -348;
	int64_t x1082 = -2482008720093LL;
	int8_t x1084 = INT8_MAX;

    t196 = ((x1081|(x1082-x1083))*x1084);

    if (t196 != 18446744073709539932LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint64_t x1093 = 47180321LLU;
	static int16_t x1095 = INT16_MIN;
	static volatile int32_t x1096 = -1;

    t197 = ((x1093|(x1094-x1095))*x1096);

    if (t197 != 18446744073660272793LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x1097 = UINT16_MAX;
	int16_t x1098 = 0;
	int16_t x1099 = INT16_MAX;
	int32_t t198 = 164288;

    t198 = ((x1097|(x1098-x1099))*x1100);

    if (t198 != -72163) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1101 = 58LL;
	int8_t x1102 = -1;
	volatile int32_t x1104 = INT32_MIN;
	static volatile int64_t t199 = -2451023387675LL;

    t199 = ((x1101|(x1102-x1103))*x1104);

    if (t199 != -124554051584LL) { NG(); } else { ; }
	
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


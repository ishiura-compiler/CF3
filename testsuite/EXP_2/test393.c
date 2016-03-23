
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

static volatile uint8_t x17 = UINT8_MAX;
static uint8_t x19 = UINT8_MAX;
static int8_t x25 = INT8_MAX;
uint32_t x32 = UINT32_MAX;
volatile int8_t x50 = 11;
int64_t x51 = 2471223649308790LL;
int16_t x55 = INT16_MIN;
volatile int64_t t6 = 65993037959776562LL;
uint64_t t9 = 28232LLU;
volatile uint32_t x83 = 13506565U;
static volatile uint32_t t10 = 109U;
int16_t x106 = INT16_MIN;
int32_t x108 = -1;
int32_t x110 = INT32_MIN;
static volatile int64_t x111 = -1LL;
int64_t x112 = 32754718638535354LL;
int8_t x118 = -1;
uint32_t x119 = 4U;
static uint16_t x128 = 325U;
uint8_t x131 = UINT8_MAX;
static int8_t x132 = -1;
int32_t t19 = -233624375;
uint16_t x142 = 7845U;
int64_t x145 = -6002LL;
int8_t x149 = INT8_MIN;
int32_t x150 = INT32_MIN;
volatile int16_t x153 = INT16_MIN;
static uint64_t x154 = UINT64_MAX;
volatile int16_t x166 = INT16_MIN;
static volatile int32_t t30 = 2853;
int16_t x197 = INT16_MIN;
static int32_t x202 = -1530;
uint16_t x203 = UINT16_MAX;
int8_t x208 = 23;
volatile uint32_t x217 = 46756829U;
volatile int16_t x222 = INT16_MAX;
int32_t x224 = 2437;
volatile int64_t t38 = -489586690204625008LL;
static int16_t x254 = INT16_MIN;
int16_t x255 = -15;
int32_t x256 = 2;
int32_t x260 = 191;
volatile int32_t t41 = -268727906;
int16_t x267 = 3733;
volatile uint16_t x273 = 4535U;
int8_t x275 = INT8_MIN;
int32_t x282 = INT32_MAX;
int32_t t45 = -51068;
volatile int16_t x291 = INT16_MIN;
uint64_t x300 = UINT64_MAX;
int64_t x317 = 5LL;
uint8_t x320 = 0U;
int16_t x326 = INT16_MIN;
uint32_t x337 = 6978U;
volatile int8_t x385 = INT8_MIN;
static uint16_t x387 = 63U;
int32_t x388 = -1;
static volatile int32_t t56 = -845;
int8_t x390 = -1;
volatile uint64_t x395 = 14739162826000000LLU;
volatile int8_t x398 = -1;
uint8_t x409 = 1U;
int32_t t61 = -126438;
int8_t x419 = INT8_MAX;
volatile uint16_t x434 = UINT16_MAX;
int64_t x435 = -1LL;
uint16_t x446 = 0U;
int32_t t67 = 10639979;
uint32_t x454 = UINT32_MAX;
static int64_t x474 = -1LL;
static int32_t x484 = -892324;
volatile int8_t x493 = -1;
static int64_t x495 = -1LL;
uint32_t x505 = 420U;
uint8_t x506 = 125U;
int8_t x517 = INT8_MAX;
int16_t x520 = 6;
static int64_t x529 = 66258427889LL;
static uint32_t x539 = UINT32_MAX;
int64_t x540 = -252LL;
int64_t t81 = -2829580LL;
int32_t x544 = 1015057639;
int16_t x556 = -1;
volatile uint64_t t84 = 14321594598LLU;
int32_t x574 = INT32_MAX;
int64_t x582 = 23921497LL;
int64_t x591 = -1LL;
int8_t x604 = INT8_MIN;
volatile uint64_t t91 = 1219313LLU;
static uint64_t x610 = UINT64_MAX;
volatile uint16_t x611 = 2U;
uint64_t x617 = 866511483191LLU;
volatile int8_t x639 = 53;
uint16_t x643 = UINT16_MAX;
int8_t x646 = 48;
volatile uint64_t t98 = 237260934LLU;
volatile int64_t x656 = INT64_MIN;
int8_t x657 = -1;
uint32_t x671 = 1070U;
int8_t x680 = 7;
int8_t x688 = INT8_MAX;
int32_t t104 = 1011;
uint64_t x694 = 33422819LLU;
int64_t x696 = INT64_MAX;
int8_t x697 = 12;
int16_t x702 = -1;
volatile int16_t x703 = -1;
static volatile uint16_t x705 = 23445U;
static int8_t x708 = 1;
int8_t x710 = 0;
uint16_t x722 = 457U;
int8_t x723 = 0;
static volatile uint64_t t114 = 2105847736213LLU;
int64_t x739 = -1743697422144496LL;
volatile uint64_t t118 = 4161710516580290LLU;
volatile int32_t t119 = -2465080;
int8_t x762 = -4;
volatile int8_t x766 = INT8_MAX;
static volatile uint16_t x769 = UINT16_MAX;
static int8_t x771 = -1;
static volatile int32_t t124 = 10499727;
int8_t x785 = INT8_MIN;
volatile int32_t x786 = -1;
uint32_t t126 = 78684U;
volatile uint16_t x797 = 1U;
static volatile int16_t x805 = -1;
static int8_t x806 = -1;
static volatile int32_t x808 = INT32_MIN;
int16_t x824 = INT16_MIN;
volatile int64_t x833 = -504585486497737149LL;
uint8_t x836 = 18U;
static int64_t x842 = -1LL;
int32_t x844 = 0;
int16_t x853 = -51;
int8_t x868 = 8;
int8_t x874 = INT8_MAX;
volatile int32_t t142 = -2;
volatile int16_t x893 = INT16_MIN;
volatile uint32_t x896 = 91U;
uint32_t t145 = 357267U;
static int64_t t146 = 2866LL;
static volatile int64_t x905 = INT64_MIN;
volatile int64_t t147 = -35725839297437283LL;
int8_t x931 = INT8_MIN;
int8_t x937 = 14;
int32_t t154 = 13169;
uint64_t x967 = 11358709LLU;
int32_t x974 = INT32_MIN;
volatile int32_t x976 = INT32_MIN;
uint32_t x986 = 45285U;
volatile int64_t x989 = INT64_MAX;
int16_t x991 = INT16_MAX;
volatile int64_t t159 = 8530345978610LL;
int8_t x1006 = INT8_MIN;
int32_t x1009 = -1;
volatile uint64_t t164 = 87537775705389410LLU;
uint16_t x1030 = UINT16_MAX;
int8_t x1045 = INT8_MIN;
volatile int64_t t168 = -264261489770LL;
uint32_t x1056 = UINT32_MAX;
volatile int32_t x1061 = -35731251;
static uint32_t x1071 = 728U;
static int8_t x1078 = INT8_MIN;
uint16_t x1084 = 6U;
volatile uint32_t t175 = 228U;
uint64_t x1090 = 2175644926713237LLU;
int16_t x1095 = -33;
uint64_t x1107 = 1406362450063564331LLU;
volatile uint64_t t179 = 242172379LLU;
int32_t x1113 = -5;
static volatile uint64_t x1116 = UINT64_MAX;
static uint16_t x1117 = UINT16_MAX;
int32_t x1133 = -1;
static uint32_t x1137 = UINT32_MAX;
volatile int32_t x1146 = -1;
volatile int32_t t185 = 365;
uint64_t x1156 = UINT64_MAX;
int8_t x1157 = -9;
uint64_t x1159 = 6777812343LLU;
int64_t x1161 = 32221LL;
int8_t x1163 = -1;
volatile int32_t t191 = 1;
static uint16_t x1183 = UINT16_MAX;
int8_t x1190 = -60;
int32_t x1199 = INT32_MIN;
int8_t x1213 = -1;
static volatile uint64_t t198 = 183566343497LLU;
int16_t x1217 = INT16_MIN;
uint64_t t199 = 6967737LLU;


void f0(void) {
    	int64_t x18 = -1LL;
	int16_t x20 = 1;
	static int64_t t0 = -630844622LL;

    t0 = ((x17+(x18*x19))+x20);

    if (t0 != 1LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x26 = 4;
	uint8_t x27 = UINT8_MAX;
	int16_t x28 = 0;
	volatile int32_t t1 = -5;

    t1 = ((x25+(x26*x27))+x28);

    if (t1 != 1147) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x29 = INT8_MIN;
	static int16_t x30 = -1;
	int32_t x31 = -1;
	uint32_t t2 = 497244U;

    t2 = ((x29+(x30*x31))+x32);

    if (t2 != 4294967168U) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x33 = 344683U;
	int16_t x34 = -3331;
	static int16_t x35 = -1;
	static volatile uint64_t x36 = 7LLU;
	static volatile uint64_t t3 = 960900858234189216LLU;

    t3 = ((x33+(x34*x35))+x36);

    if (t3 != 348021LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x49 = 957624958LLU;
	uint8_t x52 = UINT8_MAX;
	static volatile uint64_t t4 = 573474515854368LLU;

    t4 = ((x49+(x50*x51))+x52);

    if (t4 != 27183461100021903LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x53 = INT8_MIN;
	volatile int16_t x54 = -1;
	int16_t x56 = 26;
	volatile int32_t t5 = -1249806;

    t5 = ((x53+(x54*x55))+x56);

    if (t5 != 32666) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x57 = INT64_MIN;
	uint32_t x58 = 20671037U;
	int16_t x59 = INT16_MIN;
	volatile int32_t x60 = -1;

    t6 = ((x57+(x58*x59))+x60);

    if (t6 != -9223372035598483457LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x61 = INT8_MAX;
	uint16_t x62 = UINT16_MAX;
	uint8_t x63 = 1U;
	uint32_t x64 = UINT32_MAX;
	uint32_t t7 = 7575227U;

    t7 = ((x61+(x62*x63))+x64);

    if (t7 != 65661U) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x73 = INT8_MAX;
	int32_t x74 = -15620;
	int32_t x75 = -1;
	int32_t x76 = -1;
	static volatile int32_t t8 = -4;

    t8 = ((x73+(x74*x75))+x76);

    if (t8 != 15746) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint64_t x77 = 9158790110LLU;
	uint16_t x78 = 3U;
	uint16_t x79 = 5653U;
	uint16_t x80 = 30389U;

    t9 = ((x77+(x78*x79))+x80);

    if (t9 != 9158837458LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x81 = -188;
	volatile int32_t x82 = -1;
	static uint32_t x84 = UINT32_MAX;

    t10 = ((x81+(x82*x83))+x84);

    if (t10 != 4281460542U) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x85 = -29983858692LL;
	int32_t x86 = -425004;
	int8_t x87 = 13;
	int32_t x88 = INT32_MIN;
	int64_t t11 = 926LL;

    t11 = ((x85+(x86*x87))+x88);

    if (t11 != -32136867392LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x89 = UINT8_MAX;
	static volatile uint64_t x90 = 45801LLU;
	int32_t x91 = -1;
	int16_t x92 = INT16_MIN;
	volatile uint64_t t12 = 313LLU;

    t12 = ((x89+(x90*x91))+x92);

    if (t12 != 18446744073709473302LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x97 = INT8_MIN;
	static int16_t x98 = INT16_MIN;
	int16_t x99 = -1;
	int32_t x100 = -1;
	int32_t t13 = 925;

    t13 = ((x97+(x98*x99))+x100);

    if (t13 != 32639) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x105 = 46LL;
	int16_t x107 = INT16_MAX;
	static int64_t t14 = 125561LL;

    t14 = ((x105+(x106*x107))+x108);

    if (t14 != -1073709011LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x109 = -19LL;
	static int64_t t15 = 1943767LL;

    t15 = ((x109+(x110*x111))+x112);

    if (t15 != 32754720786018983LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x117 = -1LL;
	static uint64_t x120 = UINT64_MAX;
	volatile uint64_t t16 = 443407LLU;

    t16 = ((x117+(x118*x119))+x120);

    if (t16 != 4294967290LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x121 = 3U;
	int16_t x122 = 1;
	static int64_t x123 = 2155193387095431LL;
	int16_t x124 = -42;
	int64_t t17 = -1011714684LL;

    t17 = ((x121+(x122*x123))+x124);

    if (t17 != 2155193387095392LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x125 = UINT64_MAX;
	static int16_t x126 = INT16_MIN;
	int16_t x127 = INT16_MAX;
	static uint64_t t18 = 35122LLU;

    t18 = ((x125+(x126*x127))+x128);

    if (t18 != 18446744072635842884LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int8_t x129 = -1;
	int16_t x130 = 3;

    t19 = ((x129+(x130*x131))+x132);

    if (t19 != 763) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x133 = INT16_MIN;
	volatile int8_t x134 = -1;
	int16_t x135 = INT16_MAX;
	int16_t x136 = -1;
	volatile int32_t t20 = 171312;

    t20 = ((x133+(x134*x135))+x136);

    if (t20 != -65536) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x137 = 1LLU;
	int64_t x138 = 32082471272LL;
	static int8_t x139 = -7;
	int32_t x140 = -1;
	volatile uint64_t t21 = 24LLU;

    t21 = ((x137+(x138*x139))+x140);

    if (t21 != 18446743849132252712LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x141 = -1;
	uint8_t x143 = UINT8_MAX;
	uint8_t x144 = 2U;
	static volatile int32_t t22 = 27281691;

    t22 = ((x141+(x142*x143))+x144);

    if (t22 != 2000476) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x146 = INT16_MAX;
	static int16_t x147 = INT16_MAX;
	int64_t x148 = 39LL;
	volatile int64_t t23 = 8345810663581147LL;

    t23 = ((x145+(x146*x147))+x148);

    if (t23 != 1073670326LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint32_t x151 = 1387676U;
	volatile int16_t x152 = -1;
	volatile uint32_t t24 = 0U;

    t24 = ((x149+(x150*x151))+x152);

    if (t24 != 4294967167U) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x155 = -61;
	int16_t x156 = -11;
	volatile uint64_t t25 = 25LLU;

    t25 = ((x153+(x154*x155))+x156);

    if (t25 != 18446744073709518898LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x157 = INT16_MIN;
	int64_t x158 = 1LL;
	static volatile uint16_t x159 = 32695U;
	int32_t x160 = INT32_MIN;
	volatile int64_t t26 = -10307LL;

    t26 = ((x157+(x158*x159))+x160);

    if (t26 != -2147483721LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x165 = 3875U;
	int8_t x167 = -1;
	uint32_t x168 = UINT32_MAX;
	static uint32_t t27 = 2U;

    t27 = ((x165+(x166*x167))+x168);

    if (t27 != 36642U) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x169 = INT8_MIN;
	int16_t x170 = INT16_MAX;
	int64_t x171 = 52024767728904LL;
	volatile uint64_t x172 = 18845745098272202LLU;
	volatile uint64_t t28 = 17061748328LLU;

    t28 = ((x169+(x170*x171))+x172);

    if (t28 != 1723541309271269442LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x185 = 44659U;
	uint64_t x186 = UINT64_MAX;
	int64_t x187 = -428946032107641515LL;
	static int8_t x188 = 0;
	volatile uint64_t t29 = 94128270343615876LLU;

    t29 = ((x185+(x186*x187))+x188);

    if (t29 != 428946032107686174LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x193 = UINT8_MAX;
	volatile int32_t x194 = 4;
	static uint16_t x195 = UINT16_MAX;
	static int16_t x196 = 1;

    t30 = ((x193+(x194*x195))+x196);

    if (t30 != 262396) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint64_t x198 = 5968LLU;
	uint32_t x199 = 15U;
	int64_t x200 = INT64_MIN;
	volatile uint64_t t31 = 15LLU;

    t31 = ((x197+(x198*x199))+x200);

    if (t31 != 9223372036854832560LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x201 = -151181LL;
	static uint32_t x204 = 27851209U;
	static volatile int64_t t32 = -11439664LL;

    t32 = ((x201+(x202*x203))+x204);

    if (t32 != -72568522LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x205 = INT16_MIN;
	int8_t x206 = -1;
	int16_t x207 = -5842;
	int32_t t33 = 12;

    t33 = ((x205+(x206*x207))+x208);

    if (t33 != -26903) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x218 = UINT64_MAX;
	volatile int64_t x219 = INT64_MIN;
	static int32_t x220 = -1;
	volatile uint64_t t34 = 2LLU;

    t34 = ((x217+(x218*x219))+x220);

    if (t34 != 9223372036901532636LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x221 = -10783840;
	volatile uint16_t x223 = UINT16_MAX;
	static volatile int32_t t35 = 643586;

    t35 = ((x221+(x222*x223))+x224);

    if (t35 != 2136603942) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x229 = -2;
	int16_t x230 = -1;
	int8_t x231 = 4;
	static int8_t x232 = 0;
	volatile int32_t t36 = -33672;

    t36 = ((x229+(x230*x231))+x232);

    if (t36 != -6) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint64_t x233 = 0LLU;
	uint32_t x234 = 909652U;
	volatile int16_t x235 = INT16_MIN;
	int16_t x236 = -1;
	static volatile uint64_t t37 = 53612029902LLU;

    t37 = ((x233+(x234*x235))+x236);

    if (t37 != 257294335LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x237 = INT16_MIN;
	uint16_t x238 = 110U;
	int64_t x239 = -1LL;
	int64_t x240 = 3720244254763479454LL;

    t38 = ((x237+(x238*x239))+x240);

    if (t38 != 3720244254763446576LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x241 = -1;
	uint8_t x242 = 0U;
	volatile int64_t x243 = -1LL;
	static uint16_t x244 = UINT16_MAX;
	int64_t t39 = -65956565478244982LL;

    t39 = ((x241+(x242*x243))+x244);

    if (t39 != 65534LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint64_t x253 = 61477168816269LLU;
	static volatile uint64_t t40 = 366LLU;

    t40 = ((x253+(x254*x255))+x256);

    if (t40 != 61477169307791LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x257 = INT8_MIN;
	int16_t x258 = -29;
	int16_t x259 = INT16_MIN;

    t41 = ((x257+(x258*x259))+x260);

    if (t41 != 950335) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x265 = -1;
	static uint64_t x266 = 5581483637901LLU;
	static int8_t x268 = INT8_MIN;
	static uint64_t t42 = 218067551961LLU;

    t42 = ((x265+(x266*x267))+x268);

    if (t42 != 20835678420284304LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint8_t x274 = 23U;
	int8_t x276 = INT8_MIN;
	static volatile int32_t t43 = 112429;

    t43 = ((x273+(x274*x275))+x276);

    if (t43 != 1463) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int8_t x277 = INT8_MAX;
	volatile int32_t x278 = -2250;
	static int64_t x279 = -54855337136579LL;
	int64_t x280 = INT64_MIN;
	int64_t t44 = -836080LL;

    t44 = ((x277+(x278*x279))+x280);

    if (t44 != -9099947528297472931LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x281 = INT32_MIN;
	uint8_t x283 = 1U;
	volatile uint8_t x284 = 2U;

    t45 = ((x281+(x282*x283))+x284);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x289 = -68797716099795309LL;
	static int16_t x290 = INT16_MAX;
	int32_t x292 = -11;
	int64_t t46 = 18LL;

    t46 = ((x289+(x290*x291))+x292);

    if (t46 != -68797717173504376LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x297 = -22721621557450LL;
	int16_t x298 = -1;
	int16_t x299 = -313;
	volatile uint64_t t47 = 246LLU;

    t47 = ((x297+(x298*x299))+x300);

    if (t47 != 18446721352087994478LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint64_t x313 = 4493123064618090LLU;
	int16_t x314 = INT16_MIN;
	int64_t x315 = 6296LL;
	int16_t x316 = -1;
	volatile uint64_t t48 = 5LLU;

    t48 = ((x313+(x314*x315))+x316);

    if (t48 != 4493122858310761LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x318 = -869456301;
	uint32_t x319 = 1496901749U;
	volatile int64_t t49 = -736456829525101LL;

    t49 = ((x317+(x318*x319))+x320);

    if (t49 != 2022030324LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x325 = 205U;
	int8_t x327 = 42;
	volatile int64_t x328 = -1LL;
	volatile int64_t t50 = 129873046LL;

    t50 = ((x325+(x326*x327))+x328);

    if (t50 != -1376052LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x333 = INT16_MIN;
	int16_t x334 = INT16_MIN;
	uint32_t x335 = 50U;
	int16_t x336 = -1;
	uint32_t t51 = 123938U;

    t51 = ((x333+(x334*x335))+x336);

    if (t51 != 4293296127U) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x338 = 153U;
	uint32_t x339 = 33829U;
	int32_t x340 = 78;
	uint32_t t52 = 15011U;

    t52 = ((x337+(x338*x339))+x340);

    if (t52 != 5182893U) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x345 = 4111U;
	uint8_t x346 = 3U;
	int16_t x347 = INT16_MIN;
	volatile uint16_t x348 = UINT16_MAX;
	volatile uint32_t t53 = 202617494U;

    t53 = ((x345+(x346*x347))+x348);

    if (t53 != 4294938638U) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x349 = -210;
	uint16_t x350 = UINT16_MAX;
	uint64_t x351 = 675LLU;
	static int16_t x352 = -1;
	static uint64_t t54 = 935219539997217949LLU;

    t54 = ((x349+(x350*x351))+x352);

    if (t54 != 44235914LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x365 = -1;
	int8_t x366 = INT8_MIN;
	uint8_t x367 = UINT8_MAX;
	volatile int8_t x368 = INT8_MIN;
	static int32_t t55 = -5;

    t55 = ((x365+(x366*x367))+x368);

    if (t55 != -32769) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x386 = INT8_MIN;

    t56 = ((x385+(x386*x387))+x388);

    if (t56 != -8193) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x389 = INT64_MIN;
	int64_t x391 = -98LL;
	static volatile int32_t x392 = 1652;
	static volatile int64_t t57 = 109001LL;

    t57 = ((x389+(x390*x391))+x392);

    if (t57 != -9223372036854774058LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x393 = INT64_MIN;
	volatile uint64_t x394 = 2069149944100310492LLU;
	int8_t x396 = 1;
	volatile uint64_t t58 = 2354835504531LLU;

    t58 = ((x393+(x394*x395))+x396);

    if (t58 != 9478751357036074497LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x397 = 32;
	int64_t x399 = -1LL;
	uint16_t x400 = 43U;
	int64_t t59 = -3LL;

    t59 = ((x397+(x398*x399))+x400);

    if (t59 != 76LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x405 = INT64_MIN;
	uint16_t x406 = 3U;
	uint64_t x407 = UINT64_MAX;
	static int16_t x408 = -1;
	uint64_t t60 = 11082LLU;

    t60 = ((x405+(x406*x407))+x408);

    if (t60 != 9223372036854775804LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x410 = -403;
	static uint8_t x411 = 6U;
	int16_t x412 = INT16_MIN;

    t61 = ((x409+(x410*x411))+x412);

    if (t61 != -35185) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x417 = 0;
	int32_t x418 = 3;
	uint16_t x420 = UINT16_MAX;
	static volatile int32_t t62 = 30;

    t62 = ((x417+(x418*x419))+x420);

    if (t62 != 65916) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x421 = INT32_MIN;
	static volatile uint32_t x422 = 28U;
	int64_t x423 = -1LL;
	uint32_t x424 = UINT32_MAX;
	static int64_t t63 = -370970LL;

    t63 = ((x421+(x422*x423))+x424);

    if (t63 != 2147483619LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x429 = -1;
	static int16_t x430 = -4029;
	int8_t x431 = 4;
	int8_t x432 = -1;
	int32_t t64 = 227753;

    t64 = ((x429+(x430*x431))+x432);

    if (t64 != -16118) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x433 = INT64_MAX;
	int32_t x436 = 0;
	int64_t t65 = -729847371640LL;

    t65 = ((x433+(x434*x435))+x436);

    if (t65 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x437 = INT32_MIN;
	static int64_t x438 = 211203176114150LL;
	uint64_t x439 = 13364794222399296LLU;
	volatile int64_t x440 = INT64_MIN;
	volatile uint64_t t66 = 13181841599LLU;

    t66 = ((x437+(x438*x439))+x440);

    if (t66 != 17586318919274328960LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x445 = INT32_MIN;
	int8_t x447 = 5;
	uint16_t x448 = 3266U;

    t67 = ((x445+(x446*x447))+x448);

    if (t67 != -2147480382) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x453 = 3363803307588LL;
	int8_t x455 = INT8_MAX;
	int16_t x456 = INT16_MIN;
	int64_t t68 = -1245543596909988006LL;

    t68 = ((x453+(x454*x455))+x456);

    if (t68 != 3368098241989LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x465 = INT8_MAX;
	int64_t x466 = 114683274681141LL;
	int8_t x467 = -1;
	volatile int16_t x468 = -1;
	volatile int64_t t69 = -20LL;

    t69 = ((x465+(x466*x467))+x468);

    if (t69 != -114683274681015LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x469 = UINT32_MAX;
	uint8_t x470 = 3U;
	static int16_t x471 = -1;
	uint16_t x472 = 2U;
	volatile uint32_t t70 = 4474U;

    t70 = ((x469+(x470*x471))+x472);

    if (t70 != 4294967294U) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x473 = -1187502114327324LL;
	volatile int32_t x475 = -1;
	int8_t x476 = INT8_MIN;
	volatile int64_t t71 = -3391320394924354378LL;

    t71 = ((x473+(x474*x475))+x476);

    if (t71 != -1187502114327451LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x481 = 337466316507LLU;
	static int64_t x482 = INT64_MIN;
	uint64_t x483 = 233832932732476LLU;
	uint64_t t72 = 483571014LLU;

    t72 = ((x481+(x482*x483))+x484);

    if (t72 != 337465424183LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x485 = -1;
	static uint64_t x486 = UINT64_MAX;
	int64_t x487 = INT64_MIN;
	int64_t x488 = INT64_MIN;
	volatile uint64_t t73 = UINT64_MAX;

    t73 = ((x485+(x486*x487))+x488);

    if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint8_t x489 = 1U;
	static uint8_t x490 = 1U;
	uint64_t x491 = 470LLU;
	volatile int32_t x492 = -1;
	uint64_t t74 = 4131601543200978LLU;

    t74 = ((x489+(x490*x491))+x492);

    if (t74 != 470LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x494 = INT16_MIN;
	volatile uint16_t x496 = 206U;
	static int64_t t75 = -171440527595518LL;

    t75 = ((x493+(x494*x495))+x496);

    if (t75 != 32973LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x507 = 90U;
	uint8_t x508 = 1U;
	volatile uint32_t t76 = 1270536U;

    t76 = ((x505+(x506*x507))+x508);

    if (t76 != 11671U) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint64_t x509 = 1516409827765LLU;
	uint8_t x510 = UINT8_MAX;
	uint64_t x511 = UINT64_MAX;
	static volatile int32_t x512 = INT32_MAX;
	static uint64_t t77 = 178705578704107486LLU;

    t77 = ((x509+(x510*x511))+x512);

    if (t77 != 1518557311157LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint8_t x518 = 3U;
	static int16_t x519 = INT16_MAX;
	int32_t t78 = 69374848;

    t78 = ((x517+(x518*x519))+x520);

    if (t78 != 98434) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x530 = 149659;
	static int8_t x531 = INT8_MAX;
	uint8_t x532 = UINT8_MAX;
	volatile int64_t t79 = 609980846458LL;

    t79 = ((x529+(x530*x531))+x532);

    if (t79 != 66277434837LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int32_t x533 = INT32_MIN;
	static uint16_t x534 = 101U;
	int8_t x535 = 3;
	static int8_t x536 = INT8_MIN;
	volatile int32_t t80 = -2801;

    t80 = ((x533+(x534*x535))+x536);

    if (t80 != -2147483473) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x537 = -3;
	int8_t x538 = -1;

    t81 = ((x537+(x538*x539))+x540);

    if (t81 != 4294967042LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int8_t x541 = -7;
	uint32_t x542 = 2131U;
	uint8_t x543 = 14U;
	volatile uint32_t t82 = 2U;

    t82 = ((x541+(x542*x543))+x544);

    if (t82 != 1015087466U) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x545 = -1;
	uint32_t x546 = 6789U;
	static int16_t x547 = INT16_MAX;
	uint16_t x548 = 176U;
	volatile uint32_t t83 = 18U;

    t83 = ((x545+(x546*x547))+x548);

    if (t83 != 222455338U) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint64_t x553 = UINT64_MAX;
	static uint8_t x554 = UINT8_MAX;
	uint64_t x555 = 59958159LLU;

    t84 = ((x553+(x554*x555))+x556);

    if (t84 != 15289330543LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint16_t x561 = UINT16_MAX;
	uint8_t x562 = 0U;
	static uint8_t x563 = 3U;
	int32_t x564 = INT32_MIN;
	int32_t t85 = -1;

    t85 = ((x561+(x562*x563))+x564);

    if (t85 != -2147418113) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x573 = 113U;
	volatile int64_t x575 = 531LL;
	static int8_t x576 = INT8_MIN;
	static int64_t t86 = 298541293LL;

    t86 = ((x573+(x574*x575))+x576);

    if (t86 != 1140313816542LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x581 = 12LLU;
	uint64_t x583 = 5LLU;
	int8_t x584 = -1;
	uint64_t t87 = 13386LLU;

    t87 = ((x581+(x582*x583))+x584);

    if (t87 != 119607496LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x589 = INT64_MIN;
	int32_t x590 = INT32_MIN;
	int64_t x592 = 184093091LL;
	static int64_t t88 = -54928986878724LL;

    t88 = ((x589+(x590*x591))+x592);

    if (t88 != -9223372034523199069LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x593 = INT32_MAX;
	volatile uint64_t x594 = UINT64_MAX;
	int32_t x595 = INT32_MAX;
	int64_t x596 = 23524002218361836LL;
	volatile uint64_t t89 = 2303LLU;

    t89 = ((x593+(x594*x595))+x596);

    if (t89 != 23524002218361836LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x597 = INT32_MIN;
	static uint32_t x598 = UINT32_MAX;
	volatile uint32_t x599 = 416366U;
	int16_t x600 = 57;
	volatile uint32_t t90 = 2576112U;

    t90 = ((x597+(x598*x599))+x600);

    if (t90 != 2147067339U) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x601 = INT64_MAX;
	volatile uint64_t x602 = 43LLU;
	uint32_t x603 = 810677U;

    t91 = ((x601+(x602*x603))+x604);

    if (t91 != 9223372036889634790LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x609 = -33910326LL;
	static uint16_t x612 = UINT16_MAX;
	volatile uint64_t t92 = 91703339210LLU;

    t92 = ((x609+(x610*x611))+x612);

    if (t92 != 18446744073675706823LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x618 = 0LL;
	int32_t x619 = 609113083;
	static int8_t x620 = 2;
	uint64_t t93 = 87803182118630909LLU;

    t93 = ((x617+(x618*x619))+x620);

    if (t93 != 866511483193LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x621 = UINT8_MAX;
	uint32_t x622 = 414U;
	uint16_t x623 = 25U;
	uint32_t x624 = 21605U;
	uint32_t t94 = 152217424U;

    t94 = ((x621+(x622*x623))+x624);

    if (t94 != 32210U) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x629 = -1;
	int16_t x630 = 1;
	static int16_t x631 = INT16_MAX;
	static int32_t x632 = -31407125;
	volatile int32_t t95 = 18494;

    t95 = ((x629+(x630*x631))+x632);

    if (t95 != -31374359) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x637 = 8100776360241530487LLU;
	int16_t x638 = INT16_MIN;
	volatile int16_t x640 = INT16_MIN;
	uint64_t t96 = 3296655348042569LLU;

    t96 = ((x637+(x638*x639))+x640);

    if (t96 != 8100776360239761015LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x641 = INT16_MIN;
	uint8_t x642 = UINT8_MAX;
	int64_t x644 = -1LL;
	volatile int64_t t97 = 2089193480234LL;

    t97 = ((x641+(x642*x643))+x644);

    if (t97 != 16678656LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x645 = INT8_MIN;
	uint64_t x647 = 55LLU;
	uint8_t x648 = 31U;

    t98 = ((x645+(x646*x647))+x648);

    if (t98 != 2543LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x653 = 1727982186161996154LLU;
	int16_t x654 = 155;
	static int16_t x655 = 15105;
	volatile uint64_t t99 = 463LLU;

    t99 = ((x653+(x654*x655))+x656);

    if (t99 != 10951354223019113237LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x658 = 1316951U;
	uint16_t x659 = 2693U;
	volatile uint64_t x660 = 8696767247917649957LLU;
	uint64_t t100 = 5537029375494LLU;

    t100 = ((x657+(x658*x659))+x660);

    if (t100 != 8696767251464198999LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x661 = 1;
	uint8_t x662 = UINT8_MAX;
	uint8_t x663 = UINT8_MAX;
	static int64_t x664 = 228LL;
	int64_t t101 = 5055963464LL;

    t101 = ((x661+(x662*x663))+x664);

    if (t101 != 65254LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x669 = -64;
	int8_t x670 = INT8_MIN;
	uint32_t x672 = 2U;
	volatile uint32_t t102 = 2240976U;

    t102 = ((x669+(x670*x671))+x672);

    if (t102 != 4294830274U) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x677 = INT16_MIN;
	volatile uint64_t x678 = 3151056LLU;
	int32_t x679 = -7;
	uint64_t t103 = 602579124292146LLU;

    t103 = ((x677+(x678*x679))+x680);

    if (t103 != 18446744073687461463LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x685 = INT16_MIN;
	int8_t x686 = INT8_MIN;
	static uint8_t x687 = UINT8_MAX;

    t104 = ((x685+(x686*x687))+x688);

    if (t104 != -65281) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x689 = INT16_MIN;
	volatile int16_t x690 = INT16_MAX;
	uint8_t x691 = 10U;
	static int16_t x692 = 199;
	volatile int32_t t105 = 264170;

    t105 = ((x689+(x690*x691))+x692);

    if (t105 != 295101) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x693 = 47713289146964LL;
	uint64_t x695 = 35645LLU;
	static volatile uint64_t t106 = 157498518048301556LLU;

    t106 = ((x693+(x694*x695))+x696);

    if (t106 != 9223420941500306026LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x698 = -1LL;
	int8_t x699 = INT8_MAX;
	uint32_t x700 = UINT32_MAX;
	volatile int64_t t107 = 1147889406585540369LL;

    t107 = ((x697+(x698*x699))+x700);

    if (t107 != 4294967180LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint32_t x701 = UINT32_MAX;
	volatile int32_t x704 = INT32_MAX;
	volatile uint32_t t108 = 6483255U;

    t108 = ((x701+(x702*x703))+x704);

    if (t108 != 2147483647U) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x706 = 427U;
	volatile uint64_t x707 = UINT64_MAX;
	static uint64_t t109 = 28LLU;

    t109 = ((x705+(x706*x707))+x708);

    if (t109 != 23019LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x709 = INT64_MAX;
	static volatile int16_t x711 = -1;
	static volatile int8_t x712 = -1;
	volatile int64_t t110 = -19435488128348163LL;

    t110 = ((x709+(x710*x711))+x712);

    if (t110 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x713 = -5394;
	static uint64_t x714 = UINT64_MAX;
	volatile int8_t x715 = INT8_MAX;
	int8_t x716 = 3;
	uint64_t t111 = 949LLU;

    t111 = ((x713+(x714*x715))+x716);

    if (t111 != 18446744073709546098LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int8_t x717 = -1;
	uint16_t x718 = 6U;
	uint8_t x719 = 29U;
	int64_t x720 = INT64_MIN;
	volatile int64_t t112 = -6662LL;

    t112 = ((x717+(x718*x719))+x720);

    if (t112 != -9223372036854775635LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint32_t x721 = UINT32_MAX;
	uint16_t x724 = UINT16_MAX;
	uint32_t t113 = 505188U;

    t113 = ((x721+(x722*x723))+x724);

    if (t113 != 65534U) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint16_t x733 = 2U;
	volatile uint16_t x734 = 124U;
	uint64_t x735 = UINT64_MAX;
	static int16_t x736 = INT16_MIN;

    t114 = ((x733+(x734*x735))+x736);

    if (t114 != 18446744073709518726LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x737 = -2;
	uint64_t x738 = 968LLU;
	volatile int64_t x740 = -65898531LL;
	volatile uint64_t t115 = 1661944LLU;

    t115 = ((x737+(x738*x739))+x740);

    if (t115 != 16758844969007780955LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x745 = 26U;
	static uint64_t x746 = UINT64_MAX;
	int32_t x747 = -1;
	uint16_t x748 = 14171U;
	volatile uint64_t t116 = 14440LLU;

    t116 = ((x745+(x746*x747))+x748);

    if (t116 != 14198LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x749 = -1LL;
	static uint8_t x750 = 16U;
	int16_t x751 = INT16_MAX;
	uint64_t x752 = UINT64_MAX;
	volatile uint64_t t117 = 15161LLU;

    t117 = ((x749+(x750*x751))+x752);

    if (t117 != 524270LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x753 = -336266162;
	static uint64_t x754 = 140112467531LLU;
	int8_t x755 = INT8_MIN;
	int32_t x756 = -4319;

    t118 = ((x753+(x754*x755))+x756);

    if (t118 != 18446726138977437167LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x757 = 41U;
	int32_t x758 = -1;
	static volatile uint16_t x759 = 1U;
	volatile int8_t x760 = 1;

    t119 = ((x757+(x758*x759))+x760);

    if (t119 != 41) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x761 = INT32_MAX;
	int8_t x763 = INT8_MAX;
	uint32_t x764 = UINT32_MAX;
	volatile uint32_t t120 = 651259619U;

    t120 = ((x761+(x762*x763))+x764);

    if (t120 != 2147483138U) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint16_t x765 = 2982U;
	uint8_t x767 = 35U;
	static int16_t x768 = INT16_MIN;
	static int32_t t121 = -180772;

    t121 = ((x765+(x766*x767))+x768);

    if (t121 != -25341) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x770 = 111U;
	int8_t x772 = -1;
	volatile int32_t t122 = 665247971;

    t122 = ((x769+(x770*x771))+x772);

    if (t122 != 65423) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint32_t x773 = 52572462U;
	uint32_t x774 = 4671U;
	int16_t x775 = 15720;
	uint16_t x776 = 310U;
	volatile uint32_t t123 = 8566U;

    t123 = ((x773+(x774*x775))+x776);

    if (t123 != 126000892U) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x777 = 16;
	int32_t x778 = -1;
	int16_t x779 = -1;
	static volatile int8_t x780 = -1;

    t124 = ((x777+(x778*x779))+x780);

    if (t124 != 16) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int16_t x787 = INT16_MIN;
	uint16_t x788 = 14U;
	volatile int32_t t125 = 1;

    t125 = ((x785+(x786*x787))+x788);

    if (t125 != 32654) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x789 = 278238;
	uint32_t x790 = UINT32_MAX;
	static volatile int8_t x791 = 41;
	int32_t x792 = INT32_MIN;

    t126 = ((x789+(x790*x791))+x792);

    if (t126 != 2147761845U) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x793 = 0U;
	int8_t x794 = -1;
	static int64_t x795 = -15884LL;
	volatile int64_t x796 = INT64_MIN;
	int64_t t127 = -14970LL;

    t127 = ((x793+(x794*x795))+x796);

    if (t127 != -9223372036854759924LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x798 = -1;
	uint8_t x799 = UINT8_MAX;
	uint8_t x800 = 10U;
	static volatile int32_t t128 = -358634469;

    t128 = ((x797+(x798*x799))+x800);

    if (t128 != -244) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x801 = -1;
	int32_t x802 = -1;
	int8_t x803 = INT8_MIN;
	static uint16_t x804 = 5U;
	int32_t t129 = -772887369;

    t129 = ((x801+(x802*x803))+x804);

    if (t129 != 132) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x807 = -1LL;
	static int64_t t130 = 54519251LL;

    t130 = ((x805+(x806*x807))+x808);

    if (t130 != -2147483648LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x817 = UINT32_MAX;
	int16_t x818 = -554;
	volatile int32_t x819 = -9;
	uint64_t x820 = 0LLU;
	static uint64_t t131 = 49828704806LLU;

    t131 = ((x817+(x818*x819))+x820);

    if (t131 != 4985LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x821 = -1;
	uint64_t x822 = 256115475643720LLU;
	static volatile int8_t x823 = INT8_MIN;
	static volatile uint64_t t132 = 382LLU;

    t132 = ((x821+(x822*x823))+x824);

    if (t132 != 18413961292827122687LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x829 = UINT32_MAX;
	int8_t x830 = 1;
	int16_t x831 = INT16_MIN;
	volatile int8_t x832 = -4;
	uint32_t t133 = 3336679U;

    t133 = ((x829+(x830*x831))+x832);

    if (t133 != 4294934523U) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x834 = -1;
	int8_t x835 = 30;
	int64_t t134 = 1953104971373118352LL;

    t134 = ((x833+(x834*x835))+x836);

    if (t134 != -504585486497737161LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x837 = INT8_MIN;
	uint8_t x838 = UINT8_MAX;
	int8_t x839 = 1;
	int16_t x840 = INT16_MAX;
	int32_t t135 = 1;

    t135 = ((x837+(x838*x839))+x840);

    if (t135 != 32894) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x841 = UINT8_MAX;
	volatile int64_t x843 = -200378423091135LL;
	static volatile int64_t t136 = 7616886909657LL;

    t136 = ((x841+(x842*x843))+x844);

    if (t136 != 200378423091390LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x845 = 1;
	static uint32_t x846 = 38U;
	int16_t x847 = INT16_MIN;
	static uint32_t x848 = 1U;
	uint32_t t137 = 0U;

    t137 = ((x845+(x846*x847))+x848);

    if (t137 != 4293722114U) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x854 = -1;
	int8_t x855 = INT8_MAX;
	int16_t x856 = -61;
	static volatile int32_t t138 = 24805;

    t138 = ((x853+(x854*x855))+x856);

    if (t138 != -239) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x861 = 1600LLU;
	uint16_t x862 = UINT16_MAX;
	static int32_t x863 = -1;
	static int8_t x864 = INT8_MIN;
	volatile uint64_t t139 = 11054346757562LLU;

    t139 = ((x861+(x862*x863))+x864);

    if (t139 != 18446744073709487553LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x865 = INT32_MIN;
	uint64_t x866 = 3034631323880LLU;
	int64_t x867 = INT64_MIN;
	uint64_t t140 = 529408819547743577LLU;

    t140 = ((x865+(x866*x867))+x868);

    if (t140 != 18446744071562067976LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint32_t x873 = 2814314U;
	static volatile uint64_t x875 = 35859266102078090LLU;
	volatile int8_t x876 = 2;
	uint64_t t141 = 178LLU;

    t141 = ((x873+(x874*x875))+x876);

    if (t141 != 4554126794966731746LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x881 = INT16_MAX;
	int16_t x882 = 4011;
	static int16_t x883 = INT16_MIN;
	int32_t x884 = -1;

    t142 = ((x881+(x882*x883))+x884);

    if (t142 != -131399682) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x885 = -107175117387LL;
	int8_t x886 = INT8_MIN;
	static uint16_t x887 = 10583U;
	uint16_t x888 = 3461U;
	volatile int64_t t143 = -113LL;

    t143 = ((x885+(x886*x887))+x888);

    if (t143 != -107176468550LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint8_t x889 = 72U;
	static int16_t x890 = 0;
	int32_t x891 = 973320;
	int16_t x892 = INT16_MIN;
	int32_t t144 = 553852;

    t144 = ((x889+(x890*x891))+x892);

    if (t144 != -32696) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x894 = INT8_MIN;
	uint8_t x895 = 0U;

    t145 = ((x893+(x894*x895))+x896);

    if (t145 != 4294934619U) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x901 = INT8_MIN;
	int16_t x902 = INT16_MAX;
	volatile uint32_t x903 = UINT32_MAX;
	volatile int64_t x904 = 3405497075466LL;

    t146 = ((x901+(x902*x903))+x904);

    if (t146 != 3409792009867LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x906 = -4;
	volatile uint32_t x907 = 1500U;
	uint16_t x908 = 14926U;

    t147 = ((x905+(x906*x907))+x908);

    if (t147 != -9223372032559799586LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x917 = -1;
	static volatile int8_t x918 = INT8_MIN;
	int8_t x919 = INT8_MIN;
	int32_t x920 = -134201;
	volatile int32_t t148 = 10053614;

    t148 = ((x917+(x918*x919))+x920);

    if (t148 != -117818) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x925 = 52;
	int32_t x926 = 266;
	uint16_t x927 = 5U;
	int16_t x928 = -1;
	volatile int32_t t149 = 125106455;

    t149 = ((x925+(x926*x927))+x928);

    if (t149 != 1381) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x929 = INT32_MIN;
	int64_t x930 = -2801090158LL;
	int16_t x932 = 66;
	volatile int64_t t150 = 345889909535808LL;

    t150 = ((x929+(x930*x931))+x932);

    if (t150 != 356392056642LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x938 = INT8_MIN;
	int64_t x939 = -1576765LL;
	uint16_t x940 = 160U;
	int64_t t151 = 10927LL;

    t151 = ((x937+(x938*x939))+x940);

    if (t151 != 201826094LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x949 = 0;
	static uint8_t x950 = 1U;
	int64_t x951 = INT64_MIN;
	int8_t x952 = 1;
	volatile int64_t t152 = -3507701642LL;

    t152 = ((x949+(x950*x951))+x952);

    if (t152 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile uint16_t x953 = 26895U;
	static int16_t x954 = INT16_MAX;
	uint32_t x955 = 13753U;
	volatile int32_t x956 = INT32_MIN;
	uint32_t t153 = 7U;

    t153 = ((x953+(x954*x955))+x956);

    if (t153 != 2598155094U) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x957 = INT32_MAX;
	volatile int8_t x958 = INT8_MIN;
	int8_t x959 = INT8_MAX;
	int8_t x960 = INT8_MAX;

    t154 = ((x957+(x958*x959))+x960);

    if (t154 != 2147467518) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x961 = 1;
	int32_t x962 = INT32_MIN;
	uint64_t x963 = UINT64_MAX;
	int32_t x964 = 0;
	volatile uint64_t t155 = 519335LLU;

    t155 = ((x961+(x962*x963))+x964);

    if (t155 != 2147483649LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static int32_t x965 = 520912757;
	uint32_t x966 = 57U;
	int32_t x968 = -1;
	uint64_t t156 = 0LLU;

    t156 = ((x965+(x966*x967))+x968);

    if (t156 != 1168359169LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x973 = -263LL;
	uint64_t x975 = 1281901187849LLU;
	static uint64_t t157 = 1477820LLU;

    t157 = ((x973+(x974*x975))+x976);

    if (t157 != 14149771796781465337LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x985 = 15908;
	volatile int32_t x987 = INT32_MIN;
	volatile uint64_t x988 = UINT64_MAX;
	volatile uint64_t t158 = 118398LLU;

    t158 = ((x985+(x986*x987))+x988);

    if (t158 != 2147499555LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x990 = 0U;
	int8_t x992 = -2;

    t159 = ((x989+(x990*x991))+x992);

    if (t159 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x993 = INT8_MAX;
	int8_t x994 = -10;
	int8_t x995 = INT8_MIN;
	int64_t x996 = INT64_MIN;
	int64_t t160 = -1501287947998132191LL;

    t160 = ((x993+(x994*x995))+x996);

    if (t160 != -9223372036854774401LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x1001 = 510490683;
	uint64_t x1002 = UINT64_MAX;
	static int32_t x1003 = -1;
	int8_t x1004 = INT8_MAX;
	static uint64_t t161 = 48176909748958514LLU;

    t161 = ((x1001+(x1002*x1003))+x1004);

    if (t161 != 510490811LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x1005 = -482;
	uint8_t x1007 = UINT8_MAX;
	int32_t x1008 = INT32_MAX;
	volatile int32_t t162 = -14509;

    t162 = ((x1005+(x1006*x1007))+x1008);

    if (t162 != 2147450525) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x1010 = 10U;
	int64_t x1011 = -104459423783930LL;
	static int16_t x1012 = 0;
	static volatile int64_t t163 = -100556837443756947LL;

    t163 = ((x1009+(x1010*x1011))+x1012);

    if (t163 != -1044594237839301LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x1013 = INT64_MIN;
	uint64_t x1014 = 16588607545LLU;
	int8_t x1015 = -1;
	volatile uint64_t x1016 = 119673867LLU;

    t164 = ((x1013+(x1014*x1015))+x1016);

    if (t164 != 9223372020385842130LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x1029 = INT32_MIN;
	volatile uint32_t x1031 = 549790U;
	int16_t x1032 = INT16_MIN;
	volatile uint32_t t165 = 181137U;

    t165 = ((x1029+(x1030*x1031))+x1032);

    if (t165 != 3818200162U) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x1041 = INT8_MIN;
	int8_t x1042 = INT8_MAX;
	static int32_t x1043 = -1;
	int16_t x1044 = 108;
	static volatile int32_t t166 = 7879079;

    t166 = ((x1041+(x1042*x1043))+x1044);

    if (t166 != -147) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int16_t x1046 = -1;
	int64_t x1047 = -100LL;
	uint8_t x1048 = 3U;
	volatile int64_t t167 = -1360355307602494LL;

    t167 = ((x1045+(x1046*x1047))+x1048);

    if (t167 != -25LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x1049 = INT16_MIN;
	int64_t x1050 = 141654LL;
	static int8_t x1051 = INT8_MAX;
	volatile int16_t x1052 = 30;

    t168 = ((x1049+(x1050*x1051))+x1052);

    if (t168 != 17957320LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x1053 = 69305LLU;
	int32_t x1054 = INT32_MIN;
	uint64_t x1055 = 6441336376239507LLU;
	static uint64_t t169 = 203738192293658262LLU;

    t169 = ((x1053+(x1054*x1055))+x1056);

    if (t169 != 13886054742460796600LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x1062 = UINT32_MAX;
	uint64_t x1063 = 19124234LLU;
	static volatile uint64_t x1064 = 42557760341877970LLU;
	uint64_t t170 = 432412358663LLU;

    t170 = ((x1061+(x1062*x1063))+x1064);

    if (t170 != 124695719878073749LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint64_t x1069 = 3679270470LLU;
	static int64_t x1070 = -1LL;
	int32_t x1072 = -1;
	volatile uint64_t t171 = 888LLU;

    t171 = ((x1069+(x1070*x1071))+x1072);

    if (t171 != 3679269741LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x1073 = -1;
	int8_t x1074 = INT8_MAX;
	uint16_t x1075 = UINT16_MAX;
	static volatile int8_t x1076 = INT8_MAX;
	volatile int32_t t172 = 505;

    t172 = ((x1073+(x1074*x1075))+x1076);

    if (t172 != 8323071) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int16_t x1077 = INT16_MIN;
	static volatile int16_t x1079 = -1;
	static uint32_t x1080 = 5411326U;
	uint32_t t173 = 14U;

    t173 = ((x1077+(x1078*x1079))+x1080);

    if (t173 != 5378686U) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int8_t x1081 = -1;
	int8_t x1082 = 1;
	static int8_t x1083 = INT8_MAX;
	volatile int32_t t174 = 159;

    t174 = ((x1081+(x1082*x1083))+x1084);

    if (t174 != 132) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x1085 = 28U;
	int16_t x1086 = INT16_MIN;
	uint32_t x1087 = 1U;
	uint16_t x1088 = 559U;

    t175 = ((x1085+(x1086*x1087))+x1088);

    if (t175 != 4294935115U) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x1089 = INT8_MAX;
	static volatile int8_t x1091 = INT8_MAX;
	static int16_t x1092 = INT16_MIN;
	volatile uint64_t t176 = 274838594358LLU;

    t176 = ((x1089+(x1090*x1091))+x1092);

    if (t176 != 276306905692548458LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint8_t x1093 = 49U;
	static volatile uint16_t x1094 = 3113U;
	int8_t x1096 = 3;
	static volatile int32_t t177 = -1711;

    t177 = ((x1093+(x1094*x1095))+x1096);

    if (t177 != -102677) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x1101 = 13974U;
	static uint32_t x1102 = 531282U;
	static int32_t x1103 = INT32_MIN;
	volatile uint32_t x1104 = 6490165U;
	uint32_t t178 = 113U;

    t178 = ((x1101+(x1102*x1103))+x1104);

    if (t178 != 6504139U) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x1105 = INT32_MIN;
	uint8_t x1106 = UINT8_MAX;
	int32_t x1108 = 34730;

    t179 = ((x1105+(x1106*x1107))+x1108);

    if (t179 != 8134287363579974783LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x1109 = -1;
	volatile uint64_t x1110 = 737LLU;
	int32_t x1111 = 883893;
	volatile uint64_t x1112 = 1403424751661128LLU;
	static volatile uint64_t t180 = 90348746996768LLU;

    t180 = ((x1109+(x1110*x1111))+x1112);

    if (t180 != 1403425403090268LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x1114 = 479;
	uint32_t x1115 = 4U;
	uint64_t t181 = 84395532642997189LLU;

    t181 = ((x1113+(x1114*x1115))+x1116);

    if (t181 != 1910LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x1118 = UINT16_MAX;
	int8_t x1119 = INT8_MIN;
	volatile int16_t x1120 = INT16_MIN;
	volatile int32_t t182 = -4;

    t182 = ((x1117+(x1118*x1119))+x1120);

    if (t182 != -8355713) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x1134 = INT8_MIN;
	int32_t x1135 = 94836;
	int8_t x1136 = -1;
	volatile int32_t t183 = -73;

    t183 = ((x1133+(x1134*x1135))+x1136);

    if (t183 != -12139010) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint32_t x1138 = 1773383160U;
	uint16_t x1139 = 1443U;
	int16_t x1140 = INT16_MAX;
	volatile uint32_t t184 = 377341U;

    t184 = ((x1137+(x1138*x1139))+x1140);

    if (t184 != 3486391526U) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint16_t x1145 = 58U;
	static volatile int8_t x1147 = INT8_MIN;
	uint8_t x1148 = 2U;

    t185 = ((x1145+(x1146*x1147))+x1148);

    if (t185 != 188) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x1149 = 10353882865LLU;
	int8_t x1150 = -1;
	uint16_t x1151 = 1524U;
	int32_t x1152 = 350060;
	volatile uint64_t t186 = 65695578400835LLU;

    t186 = ((x1149+(x1150*x1151))+x1152);

    if (t186 != 10354231401LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x1153 = 0;
	int16_t x1154 = INT16_MIN;
	int16_t x1155 = -1;
	static uint64_t t187 = 94590147LLU;

    t187 = ((x1153+(x1154*x1155))+x1156);

    if (t187 != 32767LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x1158 = INT16_MIN;
	static uint8_t x1160 = 3U;
	volatile uint64_t t188 = 148LLU;

    t188 = ((x1157+(x1158*x1159))+x1160);

    if (t188 != 18446521978354696186LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint32_t x1162 = 84763U;
	int8_t x1164 = INT8_MAX;
	int64_t t189 = -28090450LL;

    t189 = ((x1161+(x1162*x1163))+x1164);

    if (t189 != 4294914881LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x1165 = INT16_MIN;
	uint64_t x1166 = UINT64_MAX;
	int16_t x1167 = -1;
	volatile int64_t x1168 = -216906903022LL;
	volatile uint64_t t190 = 15488611260014541LLU;

    t190 = ((x1165+(x1166*x1167))+x1168);

    if (t190 != 18446743856802615827LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1173 = INT32_MAX;
	static volatile int8_t x1174 = -1;
	uint8_t x1175 = 86U;
	volatile uint8_t x1176 = 9U;

    t191 = ((x1173+(x1174*x1175))+x1176);

    if (t191 != 2147483570) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x1181 = 13019334U;
	uint16_t x1182 = 3393U;
	int64_t x1184 = -6303520982662012LL;
	volatile int64_t t192 = 59714140607741694LL;

    t192 = ((x1181+(x1182*x1183))+x1184);

    if (t192 != -6303520747282423LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x1189 = UINT32_MAX;
	int16_t x1191 = -1;
	int32_t x1192 = -259;
	uint32_t t193 = 4U;

    t193 = ((x1189+(x1190*x1191))+x1192);

    if (t193 != 4294967096U) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint16_t x1197 = 20609U;
	int64_t x1198 = -1LL;
	int16_t x1200 = -3922;
	volatile int64_t t194 = 1LL;

    t194 = ((x1197+(x1198*x1199))+x1200);

    if (t194 != 2147500335LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static int32_t x1201 = INT32_MIN;
	int8_t x1202 = INT8_MAX;
	int64_t x1203 = -1LL;
	uint8_t x1204 = UINT8_MAX;
	volatile int64_t t195 = 7467495538LL;

    t195 = ((x1201+(x1202*x1203))+x1204);

    if (t195 != -2147483520LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x1205 = UINT8_MAX;
	int8_t x1206 = INT8_MIN;
	uint64_t x1207 = 3LLU;
	volatile int32_t x1208 = 3;
	uint64_t t196 = 1204121088451197347LLU;

    t196 = ((x1205+(x1206*x1207))+x1208);

    if (t196 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x1209 = -2139;
	volatile int32_t x1210 = INT32_MIN;
	int64_t x1211 = -1LL;
	int16_t x1212 = INT16_MIN;
	int64_t t197 = 4597074291099738LL;

    t197 = ((x1209+(x1210*x1211))+x1212);

    if (t197 != 2147448741LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1214 = -11;
	static uint64_t x1215 = 35539437202LLU;
	int64_t x1216 = INT64_MIN;

    t198 = ((x1213+(x1214*x1215))+x1216);

    if (t198 != 9223371645920966585LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x1218 = 2172724LLU;
	int32_t x1219 = -1;
	static volatile int16_t x1220 = 11766;

    t199 = ((x1217+(x1218*x1219))+x1220);

    if (t199 != 18446744073707357890LLU) { NG(); } else { ; }
	
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


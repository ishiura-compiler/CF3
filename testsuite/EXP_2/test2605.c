
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

volatile int8_t x5 = -1;
volatile int64_t x9 = INT64_MAX;
static int16_t x10 = INT16_MIN;
volatile int64_t x33 = -1LL;
uint64_t x35 = UINT64_MAX;
volatile int64_t x40 = -10860LL;
int16_t x45 = -1;
uint64_t x47 = 11588203177LLU;
uint64_t x54 = 4155561376030977LLU;
volatile uint64_t t12 = 335119LLU;
volatile uint16_t x59 = UINT16_MAX;
int32_t x65 = INT32_MIN;
static int16_t x66 = INT16_MIN;
uint64_t x69 = 15439042647260831LLU;
uint32_t x74 = 52079U;
uint32_t x75 = 6040358U;
static uint64_t x78 = 8776972928549909LLU;
uint64_t t20 = 3215696696907938LLU;
int32_t x98 = -1;
volatile uint64_t t22 = 195750908LLU;
volatile uint16_t x103 = UINT16_MAX;
int8_t x106 = -63;
uint32_t x110 = 1232270164U;
volatile int64_t x111 = -24896560LL;
uint32_t x115 = 1U;
static uint32_t x118 = 195U;
int32_t x125 = INT32_MAX;
uint32_t x127 = UINT32_MAX;
static volatile uint16_t x132 = UINT16_MAX;
int8_t x136 = 1;
int32_t t31 = 1631;
static int32_t x145 = -1;
int64_t x148 = INT64_MAX;
static uint16_t x150 = 20U;
static int32_t t34 = -4128244;
int64_t x156 = -1LL;
volatile int32_t x157 = -45210967;
int64_t t36 = -248LL;
int64_t x165 = INT64_MIN;
volatile int8_t x170 = -1;
int64_t x172 = 0LL;
static uint8_t x179 = 78U;
int64_t x184 = INT64_MIN;
static volatile int64_t t43 = 1064LL;
int64_t x189 = INT64_MIN;
static int64_t t44 = 70952LL;
volatile uint32_t x198 = UINT32_MAX;
int32_t t47 = 102;
static int8_t x205 = INT8_MIN;
int8_t x206 = INT8_MIN;
int32_t x207 = INT32_MIN;
volatile int32_t t48 = -415;
int64_t x210 = INT64_MIN;
static int16_t x219 = 1;
volatile int64_t t50 = -29610863LL;
int32_t x224 = INT32_MAX;
int32_t t51 = -2;
volatile uint16_t x226 = 5U;
static int16_t x230 = INT16_MIN;
int32_t x231 = 4551077;
static int8_t x237 = INT8_MIN;
int32_t t55 = -2856;
int16_t x243 = -1;
volatile int64_t x245 = -1LL;
int64_t x254 = -871031977503111299LL;
uint32_t x256 = 1567920432U;
uint8_t x257 = 121U;
int32_t x259 = INT32_MIN;
int16_t x266 = 0;
int16_t x270 = 1060;
volatile int64_t x271 = -19871288LL;
int16_t x276 = INT16_MIN;
int64_t t63 = -2973087LL;
int64_t t65 = 89053552LL;
volatile uint32_t t66 = 90255U;
volatile int32_t x296 = -332948;
uint64_t t67 = 2253387LLU;
uint32_t x300 = 51365U;
static volatile int16_t x303 = INT16_MIN;
int16_t x306 = INT16_MIN;
int8_t x309 = -1;
static int32_t t71 = 6;
volatile int8_t x321 = INT8_MAX;
int32_t x322 = INT32_MAX;
int64_t x324 = 0LL;
int16_t x325 = INT16_MAX;
int64_t x328 = -31LL;
int64_t t79 = -39LL;
int8_t x345 = INT8_MAX;
volatile uint32_t x352 = UINT32_MAX;
volatile uint8_t x356 = 0U;
int8_t x368 = -1;
int64_t x370 = -85LL;
int64_t t86 = -8291807LL;
int32_t x373 = INT32_MIN;
uint8_t x375 = 51U;
static uint8_t x384 = UINT8_MAX;
uint16_t x389 = UINT16_MAX;
volatile int32_t t91 = 8931135;
volatile uint8_t x402 = UINT8_MAX;
volatile int64_t t95 = -176970568842853046LL;
static volatile int32_t t96 = -9;
int8_t x419 = INT8_MIN;
volatile int64_t t97 = 13076LL;
int16_t x427 = INT16_MIN;
int64_t x430 = INT64_MAX;
int8_t x432 = INT8_MIN;
volatile int64_t x438 = INT64_MIN;
uint64_t x440 = UINT64_MAX;
static volatile uint64_t t102 = 136518776603812582LLU;
static int64_t x444 = INT64_MIN;
int32_t x451 = -1;
static volatile int32_t t104 = -3100834;
uint8_t x457 = 26U;
uint64_t x461 = 7248347519299LLU;
int8_t x466 = INT8_MIN;
uint32_t x467 = 171411U;
static volatile int8_t x468 = INT8_MIN;
uint16_t x470 = 344U;
static volatile int16_t x484 = INT16_MAX;
int8_t x485 = -1;
static int16_t x488 = INT16_MIN;
volatile uint16_t x492 = UINT16_MAX;
int64_t t115 = 94773LL;
volatile uint64_t t117 = 230094419LLU;
int64_t x510 = INT64_MIN;
uint64_t x511 = 263218436648671LLU;
int16_t x513 = INT16_MAX;
static uint16_t x515 = 7939U;
static int16_t x517 = 1;
int32_t x524 = INT32_MIN;
int16_t x531 = INT16_MIN;
static volatile int64_t t124 = -17121LL;
uint64_t x551 = UINT64_MAX;
volatile int16_t x554 = 6;
int32_t x559 = 113308511;
volatile int64_t t129 = 34136778421LL;
int64_t x563 = 49496480198848665LL;
uint32_t x567 = UINT32_MAX;
uint32_t x568 = UINT32_MAX;
int32_t x571 = 1;
int32_t t132 = 158;
uint8_t x575 = 39U;
int8_t x576 = -1;
volatile int32_t t133 = -558;
int64_t x580 = -1LL;
volatile int32_t x585 = -1;
static int32_t x587 = INT32_MAX;
volatile uint64_t t136 = 2517LLU;
uint8_t x594 = UINT8_MAX;
uint16_t x598 = UINT16_MAX;
uint64_t x605 = 95519585947LLU;
volatile int16_t x610 = INT16_MIN;
int8_t x612 = INT8_MAX;
volatile int64_t t143 = 772LL;
uint32_t x622 = UINT32_MAX;
int8_t x623 = INT8_MIN;
static int32_t x624 = -1;
int64_t x625 = -1LL;
static int16_t x627 = -15181;
int16_t x628 = INT16_MIN;
int32_t x635 = 33713;
int64_t x636 = 0LL;
int64_t x637 = -1LL;
static volatile int32_t x643 = INT32_MIN;
volatile int64_t t149 = -5582423693528LL;
int32_t x645 = INT32_MIN;
int8_t x648 = 1;
int32_t t150 = 370750;
uint8_t x649 = 39U;
static int32_t x650 = INT32_MIN;
int16_t x652 = -1;
volatile int32_t t151 = 0;
static uint64_t x655 = UINT64_MAX;
volatile int16_t x662 = 508;
uint16_t x663 = 712U;
volatile uint32_t t154 = 8260634U;
volatile uint32_t x665 = 24254461U;
uint16_t x669 = 18413U;
uint16_t x672 = 460U;
static volatile int64_t t156 = -984LL;
static int16_t x680 = INT16_MIN;
static uint16_t x684 = UINT16_MAX;
static int32_t x690 = INT32_MIN;
int32_t x694 = INT32_MIN;
volatile int64_t t162 = -131323948LL;
int16_t x703 = -1;
volatile uint64_t t164 = 18LLU;
volatile uint64_t t165 = 47006LLU;
static int32_t t166 = -497620;
uint32_t x722 = UINT32_MAX;
volatile uint32_t t169 = 34228U;
int16_t x732 = 1;
int8_t x736 = INT8_MIN;
int16_t x738 = INT16_MAX;
int8_t x740 = 2;
static volatile int64_t x744 = -1785472033678LL;
volatile int8_t x748 = INT8_MIN;
static int32_t x758 = -1208279;
uint64_t t179 = 103172101LLU;
int16_t x771 = 0;
uint16_t x772 = UINT16_MAX;
int16_t x787 = INT16_MIN;
volatile int8_t x788 = INT8_MAX;
int8_t x789 = 30;
uint32_t x791 = 88389U;
int16_t x792 = 86;
volatile uint32_t t185 = 201740U;
volatile int32_t x797 = -1;
volatile int64_t t187 = -31406751494477072LL;
volatile uint64_t t188 = 16199368LLU;
static int8_t x810 = INT8_MIN;
int32_t x811 = INT32_MIN;
volatile int64_t t190 = -3580724989008779LL;
static int64_t x816 = INT64_MIN;
static volatile int64_t t191 = INT64_MIN;
volatile uint32_t x818 = 3U;
int64_t t192 = -1714460LL;
int32_t x826 = INT32_MIN;
volatile uint64_t t194 = 13960795701163359LLU;
static uint32_t x834 = UINT32_MAX;
int64_t x836 = INT64_MAX;
static int32_t x840 = INT32_MIN;
volatile uint64_t t197 = 22727306645LLU;
int32_t x841 = INT32_MIN;
uint16_t x851 = 53U;


void f0(void) {
    	static volatile uint64_t x1 = 710166LLU;
	uint64_t x2 = UINT64_MAX;
	int64_t x3 = -58825992LL;
	uint64_t x4 = 7629171643760902570LLU;
	volatile uint64_t t0 = 334LLU;

    t0 = ((x1%(x2^x3))+x4);

    if (t0 != 7629171643761612736LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x6 = INT16_MIN;
	uint8_t x7 = 119U;
	volatile int8_t x8 = INT8_MIN;
	static int32_t t1 = 9409;

    t1 = ((x5%(x6^x7))+x8);

    if (t1 != -129) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x11 = UINT16_MAX;
	uint8_t x12 = UINT8_MAX;
	volatile int64_t t2 = 20081730LL;

    t2 = ((x9%(x10^x11))+x12);

    if (t2 != 262LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = -1;
	int64_t x14 = INT64_MIN;
	int32_t x15 = INT32_MAX;
	static int16_t x16 = -19;
	volatile int64_t t3 = -15701785581702LL;

    t3 = ((x13%(x14^x15))+x16);

    if (t3 != -20LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint64_t x17 = 35777256714405568LLU;
	int64_t x18 = INT64_MIN;
	uint32_t x19 = UINT32_MAX;
	int16_t x20 = -4;
	volatile uint64_t t4 = 201897106LLU;

    t4 = ((x17%(x18^x19))+x20);

    if (t4 != 35777256714405564LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = 26U;
	int16_t x22 = -1;
	static uint8_t x23 = 3U;
	uint32_t x24 = UINT32_MAX;
	volatile uint32_t t5 = 1590842U;

    t5 = ((x21%(x22^x23))+x24);

    if (t5 != 1U) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = -39;
	volatile int16_t x26 = INT16_MIN;
	int64_t x27 = -1LL;
	int32_t x28 = -1;
	volatile int64_t t6 = 6013850319812425LL;

    t6 = ((x25%(x26^x27))+x28);

    if (t6 != -40LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint8_t x34 = 1U;
	volatile uint16_t x36 = 35U;
	uint64_t t7 = 161936198LLU;

    t7 = ((x33%(x34^x35))+x36);

    if (t7 != 36LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x37 = INT8_MAX;
	uint64_t x38 = 4417374968129090446LLU;
	int16_t x39 = INT16_MIN;
	uint64_t t8 = 1693893479LLU;

    t8 = ((x37%(x38^x39))+x40);

    if (t8 != 18446744073709540883LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x41 = 6071U;
	uint16_t x42 = 0U;
	int32_t x43 = -1;
	static volatile int16_t x44 = INT16_MIN;
	int32_t t9 = -247933255;

    t9 = ((x41%(x42^x43))+x44);

    if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int32_t x46 = INT32_MIN;
	int32_t x48 = INT32_MAX;
	volatile uint64_t t10 = 812641817808235028LLU;

    t10 = ((x45%(x46^x47))+x48);

    if (t10 != 14181600597LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x49 = -1;
	uint16_t x50 = 2808U;
	int8_t x51 = -1;
	static int16_t x52 = -1;
	int32_t t11 = -15903218;

    t11 = ((x49%(x50^x51))+x52);

    if (t11 != -2) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint32_t x53 = 44U;
	uint32_t x55 = 0U;
	int32_t x56 = -95592;

    t12 = ((x53%(x54^x55))+x56);

    if (t12 != 18446744073709456068LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x57 = UINT8_MAX;
	int8_t x58 = INT8_MAX;
	static uint8_t x60 = 10U;
	static int32_t t13 = 2408;

    t13 = ((x57%(x58^x59))+x60);

    if (t13 != 265) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x61 = UINT16_MAX;
	uint8_t x62 = 115U;
	int64_t x63 = -1LL;
	int32_t x64 = INT32_MIN;
	static int64_t t14 = 243384908LL;

    t14 = ((x61%(x62^x63))+x64);

    if (t14 != -2147483537LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x67 = -109;
	uint32_t x68 = UINT32_MAX;
	uint32_t t15 = 3241U;

    t15 = ((x65%(x66^x67))+x68);

    if (t15 != 4294943533U) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x70 = -1;
	volatile uint8_t x71 = 13U;
	uint32_t x72 = UINT32_MAX;
	uint64_t t16 = 528613045LLU;

    t16 = ((x69%(x70^x71))+x72);

    if (t16 != 15439046942228126LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x73 = 22U;
	volatile int8_t x76 = INT8_MAX;
	uint32_t t17 = 43920787U;

    t17 = ((x73%(x74^x75))+x76);

    if (t17 != 149U) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x77 = INT8_MIN;
	int16_t x79 = INT16_MIN;
	int32_t x80 = INT32_MAX;
	static uint64_t t18 = 10972859745784LLU;

    t18 = ((x77%(x78^x79))+x80);

    if (t18 != 8776975076064106LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x81 = -1;
	int16_t x82 = INT16_MAX;
	int64_t x83 = INT64_MIN;
	int8_t x84 = INT8_MIN;
	int64_t t19 = -64781LL;

    t19 = ((x81%(x82^x83))+x84);

    if (t19 != -129LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x89 = 156254587U;
	uint16_t x90 = UINT16_MAX;
	static uint64_t x91 = 1140LLU;
	static uint8_t x92 = 1U;

    t20 = ((x89%(x90^x91))+x92);

    if (t20 != 32318LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x93 = -350;
	volatile int8_t x94 = INT8_MAX;
	int32_t x95 = INT32_MIN;
	int32_t x96 = 0;
	static int32_t t21 = -1;

    t21 = ((x93%(x94^x95))+x96);

    if (t21 != -350) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile uint64_t x97 = UINT64_MAX;
	int16_t x99 = -668;
	uint16_t x100 = UINT16_MAX;

    t22 = ((x97%(x98^x99))+x100);

    if (t22 != 66138LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint32_t x101 = 228042473U;
	static int8_t x102 = -1;
	uint16_t x104 = 5U;
	volatile uint32_t t23 = 6870104U;

    t23 = ((x101%(x102^x103))+x104);

    if (t23 != 228042478U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x105 = 85659LLU;
	int16_t x107 = 815;
	static int8_t x108 = -1;
	uint64_t t24 = 142649770010LLU;

    t24 = ((x105%(x106^x107))+x108);

    if (t24 != 85658LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x109 = -1;
	int32_t x112 = INT32_MIN;
	volatile int64_t t25 = 33798614248LL;

    t25 = ((x109%(x110^x111))+x112);

    if (t25 != -2147483649LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x113 = -1;
	static int8_t x114 = INT8_MIN;
	int8_t x116 = -1;
	uint32_t t26 = 1969512U;

    t26 = ((x113%(x114^x115))+x116);

    if (t26 != 125U) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x117 = -897;
	uint64_t x119 = 15182LLU;
	uint16_t x120 = UINT16_MAX;
	volatile uint64_t t27 = 607887009484672571LLU;

    t27 = ((x117%(x118^x119))+x120);

    if (t27 != 74389LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint8_t x121 = 15U;
	int32_t x122 = INT32_MIN;
	static int8_t x123 = -5;
	int64_t x124 = INT64_MIN;
	volatile int64_t t28 = 130029616394LL;

    t28 = ((x121%(x122^x123))+x124);

    if (t28 != -9223372036854775793LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint8_t x126 = UINT8_MAX;
	int64_t x128 = INT64_MIN;
	int64_t t29 = 97374787402LL;

    t29 = ((x125%(x126^x127))+x128);

    if (t29 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x129 = INT16_MIN;
	volatile uint64_t x130 = 33988738363000722LLU;
	static int64_t x131 = -15968549902LL;
	uint64_t t30 = 7948676155680LLU;

    t30 = ((x129%(x130^x131))+x132);

    if (t30 != 33988723585694623LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x133 = INT8_MAX;
	static volatile int32_t x134 = INT32_MIN;
	volatile int16_t x135 = INT16_MAX;

    t31 = ((x133%(x134^x135))+x136);

    if (t31 != 128) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x141 = INT8_MIN;
	static uint8_t x142 = UINT8_MAX;
	int32_t x143 = INT32_MIN;
	uint64_t x144 = UINT64_MAX;
	volatile uint64_t t32 = 290320350LLU;

    t32 = ((x141%(x142^x143))+x144);

    if (t32 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x146 = 9395;
	volatile uint16_t x147 = 8348U;
	volatile int64_t t33 = 757591192525836LL;

    t33 = ((x145%(x146^x147))+x148);

    if (t33 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x149 = 63U;
	static int32_t x151 = 1;
	static uint16_t x152 = UINT16_MAX;

    t34 = ((x149%(x150^x151))+x152);

    if (t34 != 65535) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x153 = 121;
	static int64_t x154 = -1LL;
	int64_t x155 = -17413937866LL;
	int64_t t35 = 253429689LL;

    t35 = ((x153%(x154^x155))+x156);

    if (t35 != 120LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x158 = -3LL;
	int8_t x159 = -1;
	static int32_t x160 = -1;

    t36 = ((x157%(x158^x159))+x160);

    if (t36 != -2LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x161 = -1;
	int8_t x162 = -2;
	uint32_t x163 = UINT32_MAX;
	uint64_t x164 = 10387998453314557LLU;
	static volatile uint64_t t37 = 186217994409008222LLU;

    t37 = ((x161%(x162^x163))+x164);

    if (t37 != 10387998453314557LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x166 = -1LL;
	int16_t x167 = INT16_MIN;
	int32_t x168 = INT32_MAX;
	static int64_t t38 = -309091809503543LL;

    t38 = ((x165%(x166^x167))+x168);

    if (t38 != 2147483639LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x169 = INT16_MIN;
	int32_t x171 = 28989;
	volatile int64_t t39 = 639LL;

    t39 = ((x169%(x170^x171))+x172);

    if (t39 != -3778LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint64_t x173 = 27141669LLU;
	volatile int8_t x174 = INT8_MIN;
	int32_t x175 = -85522810;
	static uint16_t x176 = 29U;
	volatile uint64_t t40 = 7176LLU;

    t40 = ((x173%(x174^x175))+x176);

    if (t40 != 27141698LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x177 = -1;
	uint32_t x178 = 7288203U;
	uint32_t x180 = 1U;
	volatile uint32_t t41 = 674462U;

    t41 = ((x177%(x178^x179))+x180);

    if (t41 != 2181567U) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x181 = 26407558U;
	uint8_t x182 = 6U;
	int32_t x183 = 95298373;
	volatile int64_t t42 = -288200587999241812LL;

    t42 = ((x181%(x182^x183))+x184);

    if (t42 != -9223372036828368250LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x185 = -1;
	int64_t x186 = -7426744LL;
	int16_t x187 = INT16_MAX;
	int8_t x188 = 0;

    t43 = ((x185%(x186^x187))+x188);

    if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x190 = -12242849;
	static int64_t x191 = 128324206LL;
	volatile int32_t x192 = INT32_MAX;

    t44 = ((x189%(x190^x191))+x192);

    if (t44 != 2112910734LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x193 = INT64_MIN;
	static int32_t x194 = INT32_MIN;
	int32_t x195 = -37586635;
	int8_t x196 = INT8_MIN;
	volatile int64_t t45 = -366LL;

    t45 = ((x193%(x194^x195))+x196);

    if (t45 != -1588244381LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x197 = INT64_MIN;
	static volatile uint8_t x199 = 87U;
	static uint16_t x200 = UINT16_MAX;
	int64_t t46 = 606228007029589584LL;

    t46 = ((x197%(x198^x199))+x200);

    if (t46 != 61663LL) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x201 = INT16_MAX;
	int32_t x202 = INT32_MIN;
	static int32_t x203 = -1;
	volatile int16_t x204 = INT16_MAX;

    t47 = ((x201%(x202^x203))+x204);

    if (t47 != 65534) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x208 = -5;

    t48 = ((x205%(x206^x207))+x208);

    if (t48 != -133) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x209 = INT64_MIN;
	volatile int64_t x211 = INT64_MAX;
	int8_t x212 = INT8_MIN;
	int64_t t49 = -90855LL;

    t49 = ((x209%(x210^x211))+x212);

    if (t49 != -128LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x217 = INT16_MAX;
	int64_t x218 = INT64_MAX;
	volatile int32_t x220 = 0;

    t50 = ((x217%(x218^x219))+x220);

    if (t50 != 32767LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x221 = INT8_MIN;
	static volatile int16_t x222 = -1;
	volatile uint16_t x223 = 62U;

    t51 = ((x221%(x222^x223))+x224);

    if (t51 != 2147483645) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x225 = -83949434700091LL;
	static int8_t x227 = INT8_MIN;
	uint16_t x228 = 88U;
	int64_t t52 = 328390864932205455LL;

    t52 = ((x225%(x226^x227))+x228);

    if (t52 != 84LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x229 = INT16_MIN;
	int32_t x232 = -1;
	int32_t t53 = 141;

    t53 = ((x229%(x230^x231))+x232);

    if (t53 != -32769) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x233 = INT8_MAX;
	volatile int32_t x234 = 1459782;
	volatile uint16_t x235 = 451U;
	uint32_t x236 = 388163U;
	volatile uint32_t t54 = 70U;

    t54 = ((x233%(x234^x235))+x236);

    if (t54 != 388290U) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint8_t x238 = 6U;
	int32_t x239 = -1;
	static int8_t x240 = INT8_MAX;

    t55 = ((x237%(x238^x239))+x240);

    if (t55 != 125) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x241 = INT16_MIN;
	int8_t x242 = INT8_MIN;
	int16_t x244 = INT16_MIN;
	volatile int32_t t56 = -15339;

    t56 = ((x241%(x242^x243))+x244);

    if (t56 != -32770) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x246 = INT64_MIN;
	uint16_t x247 = UINT16_MAX;
	int32_t x248 = -1;
	static int64_t t57 = -2899605595173LL;

    t57 = ((x245%(x246^x247))+x248);

    if (t57 != -2LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x249 = INT64_MAX;
	static int32_t x250 = INT32_MAX;
	uint16_t x251 = UINT16_MAX;
	int8_t x252 = INT8_MAX;
	volatile int64_t t58 = 316316400601LL;

    t58 = ((x249%(x250^x251))+x252);

    if (t58 != 262270LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x253 = 15;
	uint16_t x255 = UINT16_MAX;
	static volatile int64_t t59 = 16LL;

    t59 = ((x253%(x254^x255))+x256);

    if (t59 != 1567920447LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x258 = -1LL;
	uint8_t x260 = UINT8_MAX;
	static volatile int64_t t60 = -4507648031LL;

    t60 = ((x257%(x258^x259))+x260);

    if (t60 != 376LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x265 = INT32_MAX;
	volatile int16_t x267 = -1405;
	int16_t x268 = 0;
	int32_t t61 = 84;

    t61 = ((x265%(x266^x267))+x268);

    if (t61 != 157) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint8_t x269 = UINT8_MAX;
	volatile int8_t x272 = -1;
	volatile int64_t t62 = -14988LL;

    t62 = ((x269%(x270^x271))+x272);

    if (t62 != 254LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x273 = 2339U;
	static volatile uint32_t x274 = 203581U;
	int64_t x275 = -436514938LL;

    t63 = ((x273%(x274^x275))+x276);

    if (t63 != -30429LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x277 = INT32_MIN;
	uint16_t x278 = 6884U;
	int32_t x279 = -1;
	int8_t x280 = 2;
	volatile int32_t t64 = -126959;

    t64 = ((x277%(x278^x279))+x280);

    if (t64 != -3951) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x281 = 63U;
	volatile int16_t x282 = -212;
	uint16_t x283 = UINT16_MAX;
	volatile int64_t x284 = -1LL;

    t65 = ((x281%(x282^x283))+x284);

    if (t65 != 62LL) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint32_t x289 = UINT32_MAX;
	int32_t x290 = -5316;
	int32_t x291 = INT32_MIN;
	int16_t x292 = INT16_MIN;

    t66 = ((x289%(x290^x291))+x292);

    if (t66 != 4294945159U) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x293 = INT16_MIN;
	uint16_t x294 = 5U;
	static uint64_t x295 = 174LLU;

    t67 = ((x293%(x294^x295))+x296);

    if (t67 != 18446744073709218730LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x297 = -1;
	int8_t x298 = INT8_MIN;
	int32_t x299 = INT32_MAX;
	uint32_t t68 = 3629U;

    t68 = ((x297%(x298^x299))+x300);

    if (t68 != 51364U) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x301 = INT64_MIN;
	static int64_t x302 = INT64_MAX;
	static int8_t x304 = 28;
	volatile int64_t t69 = -317060352260LL;

    t69 = ((x301%(x302^x303))+x304);

    if (t69 != -32739LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x305 = -6;
	volatile uint16_t x307 = 755U;
	int8_t x308 = INT8_MAX;
	volatile int32_t t70 = 1;

    t70 = ((x305%(x306^x307))+x308);

    if (t70 != 121) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x310 = 2250186;
	int16_t x311 = 3115;
	volatile uint8_t x312 = UINT8_MAX;

    t71 = ((x309%(x310^x311))+x312);

    if (t71 != 254) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint8_t x313 = UINT8_MAX;
	int8_t x314 = -1;
	int16_t x315 = -104;
	int32_t x316 = INT32_MIN;
	int32_t t72 = 1;

    t72 = ((x313%(x314^x315))+x316);

    if (t72 != -2147483599) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint8_t x317 = UINT8_MAX;
	volatile int32_t x318 = INT32_MIN;
	int8_t x319 = -1;
	int32_t x320 = INT32_MIN;
	static int32_t t73 = 1781;

    t73 = ((x317%(x318^x319))+x320);

    if (t73 != -2147483393) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x323 = INT64_MIN;
	static int64_t t74 = 90278976881LL;

    t74 = ((x321%(x322^x323))+x324);

    if (t74 != 127LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x326 = -264245;
	int32_t x327 = INT32_MIN;
	int64_t t75 = -466271LL;

    t75 = ((x325%(x326^x327))+x328);

    if (t75 != 32736LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x329 = INT64_MIN;
	static uint32_t x330 = 10126U;
	int8_t x331 = -6;
	int8_t x332 = INT8_MAX;
	static int64_t t76 = 8397724653119LL;

    t76 = ((x329%(x330^x331))+x332);

    if (t76 != -51247561LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x333 = INT16_MAX;
	int8_t x334 = INT8_MIN;
	int32_t x335 = INT32_MAX;
	int16_t x336 = -97;
	volatile int32_t t77 = -838836;

    t77 = ((x333%(x334^x335))+x336);

    if (t77 != 32670) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x337 = 1032LL;
	uint64_t x338 = 16424917562045008LLU;
	uint64_t x339 = 2945895296LLU;
	int16_t x340 = INT16_MIN;
	volatile uint64_t t78 = 21095137879285091LLU;

    t78 = ((x337%(x338^x339))+x340);

    if (t78 != 18446744073709519880LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x341 = -1;
	int64_t x342 = INT64_MAX;
	int64_t x343 = INT64_MIN;
	static uint8_t x344 = 38U;

    t79 = ((x341%(x342^x343))+x344);

    if (t79 != 38LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x346 = UINT64_MAX;
	uint16_t x347 = UINT16_MAX;
	uint16_t x348 = 0U;
	static volatile uint64_t t80 = 23592077208521733LLU;

    t80 = ((x345%(x346^x347))+x348);

    if (t80 != 127LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x349 = INT8_MAX;
	static int64_t x350 = INT64_MAX;
	static int16_t x351 = INT16_MAX;
	int64_t t81 = -588LL;

    t81 = ((x349%(x350^x351))+x352);

    if (t81 != 4294967422LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x353 = 149909U;
	volatile uint8_t x354 = 4U;
	int32_t x355 = 18828;
	volatile uint32_t t82 = 285002168U;

    t82 = ((x353%(x354^x355))+x356);

    if (t82 != 18141U) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x357 = UINT64_MAX;
	static int64_t x358 = INT64_MAX;
	int8_t x359 = -2;
	int64_t x360 = 3267933LL;
	volatile uint64_t t83 = 2643158344307371494LLU;

    t83 = ((x357%(x358^x359))+x360);

    if (t83 != 9223372036858043739LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x361 = 1;
	int16_t x362 = INT16_MIN;
	int8_t x363 = INT8_MIN;
	static volatile uint64_t x364 = 482735003233747713LLU;
	uint64_t t84 = 126504609LLU;

    t84 = ((x361%(x362^x363))+x364);

    if (t84 != 482735003233747714LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint64_t x365 = 18243644784639048LLU;
	uint32_t x366 = 743U;
	volatile int16_t x367 = INT16_MIN;
	static volatile uint64_t t85 = 34414LLU;

    t85 = ((x365%(x366^x367))+x368);

    if (t85 != 989724366LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x369 = -33;
	int8_t x371 = 2;
	volatile uint16_t x372 = 4U;

    t86 = ((x369%(x370^x371))+x372);

    if (t86 != -29LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint64_t x374 = UINT64_MAX;
	int32_t x376 = INT32_MIN;
	volatile uint64_t t87 = 61LLU;

    t87 = ((x373%(x374^x375))+x376);

    if (t87 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x377 = INT8_MIN;
	volatile uint64_t x378 = 15725LLU;
	static int64_t x379 = 827036965731955124LL;
	static uint8_t x380 = 2U;
	static uint64_t t88 = 1587691LLU;

    t88 = ((x377%(x378^x379))+x380);

    if (t88 != 251930827606746332LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x381 = UINT32_MAX;
	int16_t x382 = INT16_MIN;
	int64_t x383 = INT64_MIN;
	volatile int64_t t89 = -5816555447819LL;

    t89 = ((x381%(x382^x383))+x384);

    if (t89 != 4294967550LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x390 = INT16_MAX;
	volatile int16_t x391 = -23;
	static int32_t x392 = INT32_MIN;
	int32_t t90 = -1044395;

    t90 = ((x389%(x390^x391))+x392);

    if (t90 != -2147483605) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x393 = 0;
	int32_t x394 = -1022;
	int16_t x395 = INT16_MAX;
	uint16_t x396 = 0U;

    t91 = ((x393%(x394^x395))+x396);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x397 = UINT64_MAX;
	int16_t x398 = INT16_MAX;
	int64_t x399 = -1LL;
	static volatile uint32_t x400 = UINT32_MAX;
	volatile uint64_t t92 = 1542266724456612LLU;

    t92 = ((x397%(x398^x399))+x400);

    if (t92 != 4295000062LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x401 = INT8_MIN;
	int64_t x403 = -1LL;
	uint64_t x404 = 1587299350754114LLU;
	volatile uint64_t t93 = 4852626030898360LLU;

    t93 = ((x401%(x402^x403))+x404);

    if (t93 != 1587299350753986LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint8_t x405 = UINT8_MAX;
	static uint8_t x406 = 17U;
	volatile uint8_t x407 = 4U;
	uint8_t x408 = 46U;
	static volatile int32_t t94 = 674276019;

    t94 = ((x405%(x406^x407))+x408);

    if (t94 != 49) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x409 = 0;
	volatile int32_t x410 = 74;
	int64_t x411 = -1LL;
	int8_t x412 = INT8_MIN;

    t95 = ((x409%(x410^x411))+x412);

    if (t95 != -128LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x413 = 1985U;
	static uint8_t x414 = UINT8_MAX;
	int32_t x415 = -64157062;
	int8_t x416 = INT8_MAX;

    t96 = ((x413%(x414^x415))+x416);

    if (t96 != 2112) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint16_t x417 = 2U;
	static volatile int64_t x418 = -417881951301277737LL;
	static int16_t x420 = INT16_MIN;

    t97 = ((x417%(x418^x419))+x420);

    if (t97 != -32766LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x421 = INT64_MIN;
	int64_t x422 = INT64_MAX;
	int16_t x423 = INT16_MAX;
	uint64_t x424 = UINT64_MAX;
	uint64_t t98 = 62LLU;

    t98 = ((x421%(x422^x423))+x424);

    if (t98 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x425 = -1;
	int8_t x426 = INT8_MAX;
	uint32_t x428 = 1088621U;
	volatile uint32_t t99 = 233646U;

    t99 = ((x425%(x426^x427))+x428);

    if (t99 != 1088620U) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x429 = INT64_MAX;
	int64_t x431 = INT64_MIN;
	volatile int64_t t100 = 5294737230176179LL;

    t100 = ((x429%(x430^x431))+x432);

    if (t100 != -128LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x433 = INT8_MIN;
	volatile uint16_t x434 = 1957U;
	int16_t x435 = -1;
	static int16_t x436 = INT16_MIN;
	volatile int32_t t101 = 79;

    t101 = ((x433%(x434^x435))+x436);

    if (t101 != -32896) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x437 = -1;
	volatile int32_t x439 = INT32_MAX;

    t102 = ((x437%(x438^x439))+x440);

    if (t102 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x441 = 10U;
	int8_t x442 = INT8_MAX;
	static int8_t x443 = INT8_MIN;
	static int64_t t103 = INT64_MIN;

    t103 = ((x441%(x442^x443))+x444);

    if (t103 != INT64_MIN) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint8_t x449 = 1U;
	int8_t x450 = 2;
	int16_t x452 = INT16_MIN;

    t104 = ((x449%(x450^x451))+x452);

    if (t104 != -32767) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x453 = 12;
	int64_t x454 = -1LL;
	static uint16_t x455 = 0U;
	static uint16_t x456 = 76U;
	int64_t t105 = -308824404063788020LL;

    t105 = ((x453%(x454^x455))+x456);

    if (t105 != 76LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x458 = -1LL;
	static int16_t x459 = INT16_MIN;
	int8_t x460 = -40;
	int64_t t106 = -10453331261251573LL;

    t106 = ((x457%(x458^x459))+x460);

    if (t106 != -14LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x462 = INT64_MAX;
	volatile int16_t x463 = INT16_MAX;
	int8_t x464 = -1;
	uint64_t t107 = 163279060LLU;

    t107 = ((x461%(x462^x463))+x464);

    if (t107 != 7248347519298LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x465 = INT32_MIN;
	uint32_t t108 = 4105349U;

    t108 = ((x465%(x466^x467))+x468);

    if (t108 != 2147483520U) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x469 = INT64_MAX;
	static int32_t x471 = -1;
	uint64_t x472 = UINT64_MAX;
	volatile uint64_t t109 = 4025697767867503668LLU;

    t109 = ((x469%(x470^x471))+x472);

    if (t109 != 231LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x473 = INT16_MIN;
	int64_t x474 = INT64_MAX;
	static int16_t x475 = INT16_MIN;
	static int8_t x476 = INT8_MAX;
	int64_t t110 = -3446LL;

    t110 = ((x473%(x474^x475))+x476);

    if (t110 != -32641LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x477 = INT8_MAX;
	int8_t x478 = -34;
	int8_t x479 = INT8_MIN;
	volatile uint8_t x480 = 0U;
	volatile int32_t t111 = -605800038;

    t111 = ((x477%(x478^x479))+x480);

    if (t111 != 33) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x481 = INT16_MIN;
	static volatile int8_t x482 = -1;
	int8_t x483 = INT8_MIN;
	int32_t t112 = 1130279;

    t112 = ((x481%(x482^x483))+x484);

    if (t112 != 32765) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x486 = -1LL;
	static int8_t x487 = INT8_MIN;
	static volatile int64_t t113 = -41571749559669082LL;

    t113 = ((x485%(x486^x487))+x488);

    if (t113 != -32769LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x489 = -1441296838260LL;
	volatile uint8_t x490 = 3U;
	int16_t x491 = INT16_MAX;
	volatile int64_t t114 = 25138532051009899LL;

    t114 = ((x489%(x490^x491))+x492);

    if (t114 != 40387LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x497 = INT64_MIN;
	int32_t x498 = INT32_MAX;
	volatile uint16_t x499 = 6690U;
	volatile uint8_t x500 = 1U;

    t115 = ((x497%(x498^x499))+x500);

    if (t115 != -89538961LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x501 = INT64_MAX;
	static volatile int32_t x502 = INT32_MAX;
	uint64_t x503 = 254480296756672LLU;
	int32_t x504 = 958491;
	uint64_t t116 = 30351173LLU;

    t116 = ((x501%(x502^x503))+x504);

    if (t116 != 7243180032174LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint16_t x505 = 3999U;
	int16_t x506 = INT16_MAX;
	uint64_t x507 = 555834711252368LLU;
	uint8_t x508 = UINT8_MAX;

    t117 = ((x505%(x506^x507))+x508);

    if (t117 != 4254LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint64_t x509 = 2521431LLU;
	int64_t x512 = 352679544892LL;
	volatile uint64_t t118 = 499132931752LLU;

    t118 = ((x509%(x510^x511))+x512);

    if (t118 != 352682066323LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile uint32_t x514 = 36442801U;
	volatile uint64_t x516 = 2498449989483464LLU;
	static uint64_t t119 = 920894073048567177LLU;

    t119 = ((x513%(x514^x515))+x516);

    if (t119 != 2498449989516231LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x518 = -218;
	volatile int64_t x519 = -1LL;
	uint16_t x520 = UINT16_MAX;
	int64_t t120 = 77534023LL;

    t120 = ((x517%(x518^x519))+x520);

    if (t120 != 65536LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x521 = 9U;
	int64_t x522 = INT64_MAX;
	int8_t x523 = -15;
	volatile int64_t t121 = -1390617LL;

    t121 = ((x521%(x522^x523))+x524);

    if (t121 != -2147483639LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x525 = INT16_MIN;
	uint32_t x526 = 0U;
	uint8_t x527 = 51U;
	uint16_t x528 = UINT16_MAX;
	static volatile uint32_t t122 = 20459U;

    t122 = ((x525%(x526^x527))+x528);

    if (t122 != 65561U) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x529 = UINT16_MAX;
	uint8_t x530 = UINT8_MAX;
	volatile int8_t x532 = 0;
	volatile int32_t t123 = 242951;

    t123 = ((x529%(x530^x531))+x532);

    if (t123 != 509) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x533 = INT64_MAX;
	int64_t x534 = INT64_MIN;
	static uint32_t x535 = 95782642U;
	int16_t x536 = INT16_MIN;

    t124 = ((x533%(x534^x535))+x536);

    if (t124 != 95749873LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x541 = 2U;
	int64_t x542 = INT64_MAX;
	volatile int32_t x543 = -1;
	static int32_t x544 = -1;
	int64_t t125 = 168LL;

    t125 = ((x541%(x542^x543))+x544);

    if (t125 != 1LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x545 = 5;
	uint8_t x546 = 16U;
	static int32_t x547 = 1;
	static volatile uint8_t x548 = 3U;
	int32_t t126 = 0;

    t126 = ((x545%(x546^x547))+x548);

    if (t126 != 8) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x549 = UINT32_MAX;
	int8_t x550 = INT8_MIN;
	int32_t x552 = INT32_MIN;
	static uint64_t t127 = 32531136951LLU;

    t127 = ((x549%(x550^x551))+x552);

    if (t127 != 18446744071562067983LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint16_t x553 = 3328U;
	int8_t x555 = -18;
	uint32_t x556 = 44595U;
	volatile uint32_t t128 = 294331U;

    t128 = ((x553%(x554^x555))+x556);

    if (t128 != 44611U) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x557 = -3;
	int64_t x558 = INT64_MIN;
	static int32_t x560 = -1;

    t129 = ((x557%(x558^x559))+x560);

    if (t129 != -4LL) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x561 = -19;
	uint8_t x562 = UINT8_MAX;
	int8_t x564 = -47;
	static volatile int64_t t130 = 105923032089769LL;

    t130 = ((x561%(x562^x563))+x564);

    if (t130 != -66LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x565 = 14LLU;
	int8_t x566 = INT8_MIN;
	uint64_t t131 = 63737659397534LLU;

    t131 = ((x565%(x566^x567))+x568);

    if (t131 != 4294967309LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x569 = -1;
	volatile uint8_t x570 = 17U;
	int16_t x572 = -1;

    t132 = ((x569%(x570^x571))+x572);

    if (t132 != -2) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x573 = UINT16_MAX;
	static uint16_t x574 = 5U;

    t133 = ((x573%(x574^x575))+x576);

    if (t133 != 16) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x577 = UINT64_MAX;
	int64_t x578 = INT64_MAX;
	int32_t x579 = INT32_MAX;
	uint64_t t134 = 236033401796579LLU;

    t134 = ((x577%(x578^x579))+x580);

    if (t134 != 4294967294LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x581 = 3U;
	int16_t x582 = -349;
	int64_t x583 = -912722390655092237LL;
	int32_t x584 = -5;
	volatile int64_t t135 = -2LL;

    t135 = ((x581%(x582^x583))+x584);

    if (t135 != -2LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x586 = -3;
	uint64_t x588 = UINT64_MAX;

    t136 = ((x585%(x586^x587))+x588);

    if (t136 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x589 = -1LL;
	static volatile int32_t x590 = -1;
	int16_t x591 = 111;
	int8_t x592 = -1;
	volatile int64_t t137 = -19334LL;

    t137 = ((x589%(x590^x591))+x592);

    if (t137 != -2LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x593 = 3LL;
	static int16_t x595 = 30;
	static uint32_t x596 = 2086U;
	volatile int64_t t138 = -24238981785LL;

    t138 = ((x593%(x594^x595))+x596);

    if (t138 != 2089LL) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x597 = -1LL;
	int64_t x599 = INT64_MIN;
	static volatile int8_t x600 = INT8_MIN;
	volatile int64_t t139 = 1237LL;

    t139 = ((x597%(x598^x599))+x600);

    if (t139 != -129LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x601 = UINT16_MAX;
	static volatile int8_t x602 = 2;
	volatile uint64_t x603 = UINT64_MAX;
	int64_t x604 = INT64_MIN;
	volatile uint64_t t140 = 5401974570LLU;

    t140 = ((x601%(x602^x603))+x604);

    if (t140 != 9223372036854841343LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint32_t x606 = UINT32_MAX;
	int16_t x607 = INT16_MIN;
	uint8_t x608 = 3U;
	volatile uint64_t t141 = 2767LLU;

    t141 = ((x605%(x606^x607))+x608);

    if (t141 != 12745LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x609 = UINT16_MAX;
	volatile int8_t x611 = -3;
	volatile int32_t t142 = 3740216;

    t142 = ((x609%(x610^x611))+x612);

    if (t142 != 132) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x617 = INT32_MIN;
	volatile int64_t x618 = INT64_MAX;
	int32_t x619 = 120;
	volatile uint32_t x620 = 3U;

    t143 = ((x617%(x618^x619))+x620);

    if (t143 != -2147483645LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile uint8_t x621 = UINT8_MAX;
	volatile uint32_t t144 = 36309350U;

    t144 = ((x621%(x622^x623))+x624);

    if (t144 != 0U) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x626 = INT64_MAX;
	volatile int64_t t145 = 39611043494LL;

    t145 = ((x625%(x626^x627))+x628);

    if (t145 != -32769LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x629 = INT16_MIN;
	volatile int8_t x630 = INT8_MAX;
	static volatile int64_t x631 = -17162674752341396LL;
	volatile int16_t x632 = 0;
	volatile int64_t t146 = -27201964982808LL;

    t146 = ((x629%(x630^x631))+x632);

    if (t146 != -32768LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x633 = 117U;
	volatile int16_t x634 = 1;
	static int64_t t147 = 1599404LL;

    t147 = ((x633%(x634^x635))+x636);

    if (t147 != 117LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile uint8_t x638 = 2U;
	uint32_t x639 = UINT32_MAX;
	int32_t x640 = -47;
	static volatile int64_t t148 = 539615416077LL;

    t148 = ((x637%(x638^x639))+x640);

    if (t148 != -48LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int16_t x641 = -4971;
	static int64_t x642 = INT64_MIN;
	uint32_t x644 = 1018796420U;

    t149 = ((x641%(x642^x643))+x644);

    if (t149 != 1018791449LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x646 = 10563U;
	volatile int8_t x647 = -1;

    t150 = ((x645%(x646^x647))+x648);

    if (t150 != -2035) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x651 = 7241U;

    t151 = ((x649%(x650^x651))+x652);

    if (t151 != 38) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint64_t x653 = 379642325191727515LLU;
	int16_t x654 = -6;
	volatile uint32_t x656 = UINT32_MAX;
	volatile uint64_t t152 = 80LLU;

    t152 = ((x653%(x654^x655))+x656);

    if (t152 != 4294967295LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x657 = INT8_MIN;
	int16_t x658 = 1;
	static volatile int8_t x659 = -1;
	int8_t x660 = -1;
	static int32_t t153 = -180;

    t153 = ((x657%(x658^x659))+x660);

    if (t153 != -1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x661 = 16429777U;
	int32_t x664 = 308065;

    t154 = ((x661%(x662^x663))+x664);

    if (t154 != 308322U) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x666 = -1;
	int32_t x667 = INT32_MIN;
	int32_t x668 = INT32_MIN;
	static uint32_t t155 = 358873006U;

    t155 = ((x665%(x666^x667))+x668);

    if (t155 != 2171738109U) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint8_t x670 = UINT8_MAX;
	int64_t x671 = INT64_MIN;

    t156 = ((x669%(x670^x671))+x672);

    if (t156 != 18873LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x673 = 0U;
	static int32_t x674 = INT32_MAX;
	int64_t x675 = INT64_MIN;
	uint32_t x676 = 1070663773U;
	volatile int64_t t157 = 1232LL;

    t157 = ((x673%(x674^x675))+x676);

    if (t157 != 1070663773LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x677 = -1;
	volatile uint64_t x678 = UINT64_MAX;
	int16_t x679 = -108;
	uint64_t t158 = 2630LLU;

    t158 = ((x677%(x678^x679))+x680);

    if (t158 != 18446744073709518939LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x681 = -2;
	volatile int16_t x682 = -154;
	static int64_t x683 = INT64_MAX;
	volatile int64_t t159 = 1247LL;

    t159 = ((x681%(x682^x683))+x684);

    if (t159 != 65533LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x685 = INT64_MAX;
	uint8_t x686 = 22U;
	static uint64_t x687 = 948905962081924LLU;
	int16_t x688 = INT16_MIN;
	volatile uint64_t t160 = 5419519260222200240LLU;

    t160 = ((x685%(x686^x687))+x688);

    if (t160 != 6085418305679LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x689 = 2030;
	volatile int8_t x691 = INT8_MAX;
	static volatile int64_t x692 = INT64_MIN;
	static volatile int64_t t161 = -12102195302880LL;

    t161 = ((x689%(x690^x691))+x692);

    if (t161 != -9223372036854773778LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x693 = -1LL;
	int8_t x695 = 0;
	static int8_t x696 = INT8_MIN;

    t162 = ((x693%(x694^x695))+x696);

    if (t162 != -129LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x697 = -1;
	int16_t x698 = INT16_MIN;
	uint64_t x699 = UINT64_MAX;
	int32_t x700 = -1;
	static uint64_t t163 = 4503685066579690894LLU;

    t163 = ((x697%(x698^x699))+x700);

    if (t163 != 14LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x701 = UINT64_MAX;
	int64_t x702 = 12349782048LL;
	uint32_t x704 = 261883U;

    t164 = ((x701%(x702^x703))+x704);

    if (t164 != 12350043931LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x705 = 4131907961523LLU;
	int8_t x706 = -10;
	volatile uint8_t x707 = UINT8_MAX;
	uint16_t x708 = 9054U;

    t165 = ((x705%(x706^x707))+x708);

    if (t165 != 4131907970577LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile uint16_t x709 = 4U;
	int32_t x710 = 4;
	int16_t x711 = 1803;
	int32_t x712 = INT32_MIN;

    t166 = ((x709%(x710^x711))+x712);

    if (t166 != -2147483644) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x713 = UINT16_MAX;
	static int64_t x714 = INT64_MIN;
	uint8_t x715 = 2U;
	static uint64_t x716 = UINT64_MAX;
	uint64_t t167 = 10496LLU;

    t167 = ((x713%(x714^x715))+x716);

    if (t167 != 65534LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x717 = -1;
	volatile int16_t x718 = 0;
	static int64_t x719 = INT64_MIN;
	static uint32_t x720 = 5U;
	volatile int64_t t168 = 16350044062826217LL;

    t168 = ((x717%(x718^x719))+x720);

    if (t168 != 4LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint8_t x721 = 3U;
	volatile uint16_t x723 = UINT16_MAX;
	volatile int16_t x724 = INT16_MIN;

    t169 = ((x721%(x722^x723))+x724);

    if (t169 != 4294934531U) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint32_t x725 = 15454U;
	volatile int16_t x726 = INT16_MIN;
	int8_t x727 = INT8_MIN;
	volatile uint8_t x728 = 1U;
	volatile uint32_t t170 = 8U;

    t170 = ((x725%(x726^x727))+x728);

    if (t170 != 15455U) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x729 = INT8_MAX;
	int16_t x730 = INT16_MAX;
	uint64_t x731 = 12371569166996LLU;
	uint64_t t171 = 931877061LLU;

    t171 = ((x729%(x730^x731))+x732);

    if (t171 != 128LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x733 = INT8_MAX;
	static int8_t x734 = 10;
	int64_t x735 = INT64_MIN;
	static int64_t t172 = -14782933286244502LL;

    t172 = ((x733%(x734^x735))+x736);

    if (t172 != -1LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x737 = -1711;
	int16_t x739 = 153;
	int32_t t173 = -7;

    t173 = ((x737%(x738^x739))+x740);

    if (t173 != -1709) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile uint64_t x741 = UINT64_MAX;
	static int8_t x742 = -1;
	uint16_t x743 = UINT16_MAX;
	uint64_t t174 = 197937LLU;

    t174 = ((x741%(x742^x743))+x744);

    if (t174 != 18446742288237583473LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x745 = 1045U;
	int16_t x746 = -1;
	static volatile uint16_t x747 = UINT16_MAX;
	int32_t t175 = -3;

    t175 = ((x745%(x746^x747))+x748);

    if (t175 != 917) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x749 = -1;
	volatile uint8_t x750 = 4U;
	static volatile int64_t x751 = 502271LL;
	uint64_t x752 = 5LLU;
	uint64_t t176 = 4293356913379572059LLU;

    t176 = ((x749%(x750^x751))+x752);

    if (t176 != 4LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x753 = -9LL;
	static uint32_t x754 = UINT32_MAX;
	static int64_t x755 = INT64_MIN;
	int8_t x756 = INT8_MAX;
	volatile int64_t t177 = 1568024923397250600LL;

    t177 = ((x753%(x754^x755))+x756);

    if (t177 != 118LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x757 = INT8_MIN;
	int16_t x759 = INT16_MIN;
	int16_t x760 = INT16_MIN;
	int32_t t178 = 6;

    t178 = ((x757%(x758^x759))+x760);

    if (t178 != -32896) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x761 = INT16_MIN;
	int8_t x762 = INT8_MAX;
	uint64_t x763 = 157592LLU;
	uint8_t x764 = 69U;

    t179 = ((x761%(x762^x763))+x764);

    if (t179 != 25484LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x765 = 601LLU;
	uint8_t x766 = 0U;
	int64_t x767 = INT64_MIN;
	int16_t x768 = INT16_MAX;
	volatile uint64_t t180 = 58LLU;

    t180 = ((x765%(x766^x767))+x768);

    if (t180 != 33368LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x769 = 14358U;
	int8_t x770 = INT8_MAX;
	uint32_t t181 = 1U;

    t181 = ((x769%(x770^x771))+x772);

    if (t181 != 65542U) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x773 = INT8_MAX;
	uint32_t x774 = 6841564U;
	volatile int64_t x775 = -1LL;
	int8_t x776 = INT8_MAX;
	static volatile int64_t t182 = -2277LL;

    t182 = ((x773%(x774^x775))+x776);

    if (t182 != 254LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x777 = 11241U;
	uint8_t x778 = 56U;
	static int16_t x779 = INT16_MAX;
	int8_t x780 = 1;
	static volatile uint32_t t183 = 19633U;

    t183 = ((x777%(x778^x779))+x780);

    if (t183 != 11242U) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x785 = -1;
	int8_t x786 = INT8_MAX;
	static int32_t t184 = 239626;

    t184 = ((x785%(x786^x787))+x788);

    if (t184 != 126) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x790 = -1;

    t185 = ((x789%(x790^x791))+x792);

    if (t185 != 116U) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x793 = -1LL;
	int32_t x794 = 159463426;
	uint64_t x795 = UINT64_MAX;
	static volatile uint32_t x796 = 19U;
	uint64_t t186 = 2319322150LLU;

    t186 = ((x793%(x794^x795))+x796);

    if (t186 != 159463445LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x798 = -1LL;
	volatile uint8_t x799 = 1U;
	int8_t x800 = -1;

    t187 = ((x797%(x798^x799))+x800);

    if (t187 != -2LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x801 = -552250LL;
	static int8_t x802 = 3;
	uint64_t x803 = UINT64_MAX;
	int64_t x804 = -1LL;

    t188 = ((x801%(x802^x803))+x804);

    if (t188 != 18446744073708999365LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x805 = 8010;
	static uint16_t x806 = UINT16_MAX;
	static volatile int16_t x807 = -1;
	uint32_t x808 = UINT32_MAX;
	volatile uint32_t t189 = 107252181U;

    t189 = ((x805%(x806^x807))+x808);

    if (t189 != 8009U) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint8_t x809 = 1U;
	int64_t x812 = 2271631923965844LL;

    t190 = ((x809%(x810^x811))+x812);

    if (t190 != 2271631923965845LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x813 = 0;
	int16_t x814 = INT16_MAX;
	static uint16_t x815 = 116U;

    t191 = ((x813%(x814^x815))+x816);

    if (t191 != INT64_MIN) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x817 = 1559084;
	uint32_t x819 = 88315U;
	int64_t x820 = -544887LL;

    t192 = ((x817%(x818^x819))+x820);

    if (t192 != -487107LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x821 = 127483377LL;
	int16_t x822 = 3;
	uint8_t x823 = UINT8_MAX;
	uint32_t x824 = 25103U;
	volatile int64_t t193 = -1LL;

    t193 = ((x821%(x822^x823))+x824);

    if (t193 != 25208LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x825 = -1;
	int64_t x827 = -2LL;
	uint64_t x828 = UINT64_MAX;

    t194 = ((x825%(x826^x827))+x828);

    if (t194 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x829 = INT32_MIN;
	static volatile int16_t x830 = -246;
	int8_t x831 = INT8_MAX;
	int8_t x832 = -1;
	int32_t t195 = 2931043;

    t195 = ((x829%(x830^x831))+x832);

    if (t195 != -91) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x833 = 252U;
	volatile int8_t x835 = -7;
	int64_t t196 = INT64_MAX;

    t196 = ((x833%(x834^x835))+x836);

    if (t196 != INT64_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x837 = INT32_MIN;
	uint64_t x838 = 45582471LLU;
	uint32_t x839 = UINT32_MAX;

    t197 = ((x837%(x838^x839))+x840);

    if (t197 != 18446744073211596184LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x842 = 41782686451941368LLU;
	uint64_t x843 = 9213124637390389540LLU;
	int16_t x844 = 1;
	uint64_t t198 = 4050LLU;

    t198 = ((x841%(x842^x843))+x844);

    if (t198 != 99129400885314121LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x849 = 21647060970780973LLU;
	volatile int8_t x850 = INT8_MAX;
	static uint8_t x852 = UINT8_MAX;
	volatile uint64_t t199 = 4LLU;

    t199 = ((x849%(x850^x851))+x852);

    if (t199 != 302LLU) { NG(); } else { ; }
	
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


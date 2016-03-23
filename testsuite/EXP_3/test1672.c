
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

static int32_t t1 = 24858;
static volatile int32_t t2 = -140791;
volatile int32_t x15 = INT32_MIN;
uint32_t x19 = UINT32_MAX;
volatile int32_t t4 = -65427;
volatile int32_t t5 = 59996166;
static int32_t x25 = -1;
int8_t x40 = -11;
volatile int32_t t9 = -61;
volatile int16_t x41 = INT16_MAX;
int8_t x44 = -32;
volatile int32_t t10 = -11;
volatile int16_t x50 = -1;
uint8_t x51 = UINT8_MAX;
uint32_t x54 = UINT32_MAX;
int16_t x76 = 57;
static uint64_t x79 = 4124688645LLU;
int64_t x81 = -16552090LL;
int32_t x88 = -8137033;
int32_t x89 = -29198;
static volatile int16_t x93 = INT16_MIN;
int8_t x99 = -1;
int32_t t24 = 5;
static int64_t x107 = -1LL;
int32_t t28 = 47931793;
static uint64_t x123 = UINT64_MAX;
int32_t t30 = -1494;
static int32_t t31 = 1;
static uint32_t x133 = 5848652U;
static int64_t x135 = -1LL;
static int64_t x140 = -2919393032919LL;
int32_t x141 = -1;
volatile int32_t t36 = 666;
uint64_t x156 = UINT64_MAX;
int16_t x158 = INT16_MIN;
int64_t x160 = 34570872353LL;
volatile int32_t t40 = -1566413;
int32_t x167 = INT32_MAX;
int32_t t41 = -230432198;
uint32_t x169 = 188220570U;
static uint16_t x172 = 11532U;
int32_t t42 = 59323644;
uint64_t x174 = UINT64_MAX;
int64_t x175 = -481891250795676814LL;
uint64_t x184 = 2340416336185LLU;
static uint8_t x188 = 81U;
uint64_t x189 = UINT64_MAX;
uint8_t x194 = 118U;
volatile int32_t x199 = INT32_MIN;
volatile int32_t t51 = -46753;
volatile int32_t t53 = -425;
int8_t x217 = -3;
static int64_t x218 = INT64_MIN;
int16_t x228 = INT16_MIN;
int64_t x229 = 207898002LL;
volatile int32_t t57 = 5977374;
volatile int32_t t58 = 447621;
int32_t x240 = INT32_MAX;
int32_t t59 = -559984;
volatile uint64_t x241 = 812131239LLU;
static int64_t x245 = -1LL;
uint8_t x246 = 3U;
static int16_t x248 = -48;
static int32_t x259 = 8000813;
uint8_t x261 = UINT8_MAX;
int32_t x269 = -1;
int8_t x270 = INT8_MIN;
volatile uint8_t x271 = 1U;
uint64_t x276 = 7111705143911LLU;
int32_t t68 = -238580909;
int8_t x288 = INT8_MAX;
uint16_t x293 = UINT16_MAX;
uint64_t x301 = 18406LLU;
int32_t t75 = 203010;
static int64_t x306 = INT64_MIN;
int8_t x310 = INT8_MAX;
uint16_t x313 = 1U;
static int8_t x315 = INT8_MAX;
int8_t x318 = -1;
volatile int32_t x325 = 222311;
static int32_t x326 = -848827234;
int32_t t81 = 269433;
uint64_t x335 = 62106339630LLU;
static int32_t t84 = 18262;
uint64_t x342 = UINT64_MAX;
static int16_t x344 = -1;
uint32_t x346 = UINT32_MAX;
int32_t t86 = 85995;
volatile int32_t t87 = 8052;
static volatile int64_t x360 = INT64_MIN;
int8_t x363 = -1;
int32_t x367 = INT32_MAX;
volatile int32_t t91 = 35161844;
static volatile int16_t x371 = INT16_MIN;
int16_t x372 = INT16_MAX;
int64_t x376 = -14310802500952131LL;
int32_t x377 = INT32_MIN;
volatile uint32_t x383 = 3968026U;
static uint8_t x384 = 0U;
static uint64_t x396 = UINT64_MAX;
static volatile int32_t t98 = -7;
static uint64_t x398 = UINT64_MAX;
volatile int16_t x400 = 4;
static int32_t t99 = 48;
volatile uint16_t x401 = 3952U;
int16_t x404 = INT16_MIN;
int8_t x407 = INT8_MAX;
uint32_t x409 = 2860293U;
int64_t x414 = INT64_MIN;
static int8_t x415 = INT8_MAX;
static uint32_t x417 = 405U;
int16_t x425 = 183;
uint32_t x426 = 7278939U;
int64_t x429 = INT64_MAX;
volatile int32_t t107 = 68;
int64_t x433 = INT64_MAX;
int8_t x438 = INT8_MIN;
int16_t x442 = INT16_MAX;
uint8_t x446 = UINT8_MAX;
int64_t x448 = INT64_MAX;
static volatile int32_t t111 = 0;
static int16_t x452 = INT16_MIN;
int64_t x456 = INT64_MIN;
int32_t x464 = INT32_MIN;
volatile int32_t t115 = -1;
int32_t x470 = -519080642;
static volatile int32_t t117 = 9911;
int16_t x474 = INT16_MAX;
volatile int32_t t120 = -19565672;
int32_t x488 = 648718;
int8_t x493 = -1;
int16_t x495 = -1;
volatile uint64_t x499 = UINT64_MAX;
static int32_t x505 = -1;
static uint8_t x506 = 1U;
volatile int64_t x511 = INT64_MIN;
int64_t x515 = INT64_MAX;
int32_t t129 = -80062294;
int64_t x528 = -3365LL;
int16_t x539 = 3215;
int16_t x542 = 29;
uint16_t x543 = 22U;
int32_t t135 = -2486581;
volatile int16_t x545 = 7864;
volatile int64_t x552 = -27984985037070490LL;
volatile int32_t t137 = -805118727;
uint16_t x554 = 2U;
int8_t x559 = 24;
static int16_t x560 = -1;
int16_t x569 = -1;
int32_t t142 = -11012;
uint64_t x573 = UINT64_MAX;
volatile uint32_t x575 = 4457U;
volatile int64_t x584 = INT64_MIN;
int32_t t145 = -82;
int64_t x593 = -1LL;
static int64_t x606 = 1560598LL;
int16_t x613 = INT16_MIN;
uint8_t x618 = 14U;
uint8_t x622 = 9U;
static int16_t x623 = INT16_MIN;
int8_t x624 = -1;
static int64_t x627 = -1LL;
uint64_t x635 = 2020LLU;
static volatile int32_t t158 = -29;
int8_t x638 = 1;
int16_t x640 = INT16_MIN;
static int32_t x643 = INT32_MIN;
uint8_t x648 = 1U;
int8_t x652 = 0;
volatile int64_t x657 = INT64_MAX;
static int8_t x658 = INT8_MIN;
int8_t x659 = INT8_MIN;
static int8_t x660 = -9;
int32_t x664 = INT32_MIN;
int32_t t165 = 22;
int32_t x667 = INT32_MAX;
int16_t x674 = INT16_MIN;
volatile int32_t t168 = 5;
uint32_t x679 = UINT32_MAX;
int64_t x680 = INT64_MIN;
static volatile int32_t t170 = 1;
static int64_t x685 = -1LL;
static volatile int64_t x689 = 577LL;
int64_t x690 = -1LL;
int32_t x691 = INT32_MIN;
int16_t x695 = 241;
int8_t x702 = 25;
volatile int16_t x704 = -1;
volatile int32_t t175 = -7;
static volatile int32_t t177 = 0;
uint64_t x721 = UINT64_MAX;
int16_t x723 = INT16_MAX;
int16_t x725 = -1;
int16_t x727 = INT16_MIN;
int32_t t181 = -159408991;
volatile int16_t x733 = 21;
int16_t x740 = INT16_MAX;
uint8_t x752 = UINT8_MAX;
volatile int32_t t187 = -1774924;
int64_t x763 = -843LL;
static uint64_t x769 = 55342522454314839LLU;
volatile int32_t t195 = -1;
uint8_t x788 = UINT8_MAX;
volatile int64_t x792 = INT64_MIN;
uint64_t x795 = 89469354LLU;
int64_t x798 = INT64_MIN;
int64_t x800 = INT64_MIN;
int32_t t199 = -218771;


void f0(void) {
    	uint32_t x1 = 511117U;
	static int16_t x2 = 50;
	uint64_t x3 = 9821360LLU;
	static int8_t x4 = INT8_MIN;
	int32_t t0 = -627221380;

    t0 = ((x1==x2)<<(x3>x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x5 = -1615170542805098LL;
	volatile uint8_t x6 = 15U;
	int64_t x7 = -1LL;
	static int16_t x8 = 18;

    t1 = ((x5==x6)<<(x7>x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x9 = INT8_MIN;
	uint64_t x10 = 27659647LLU;
	int64_t x11 = INT64_MIN;
	int32_t x12 = INT32_MAX;

    t2 = ((x9==x10)<<(x11>x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MIN;
	volatile int8_t x14 = INT8_MAX;
	int16_t x16 = 1;
	volatile int32_t t3 = 343;

    t3 = ((x13==x14)<<(x15>x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -1;
	int8_t x18 = -1;
	int32_t x20 = INT32_MIN;

    t4 = ((x17==x18)<<(x19>x20));

    if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 1696U;
	int8_t x22 = 1;
	int16_t x23 = INT16_MIN;
	int16_t x24 = 5;

    t5 = ((x21==x22)<<(x23>x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x26 = UINT16_MAX;
	static int8_t x27 = INT8_MIN;
	int64_t x28 = 29614464505924LL;
	volatile int32_t t6 = -1;

    t6 = ((x25==x26)<<(x27>x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = UINT64_MAX;
	uint64_t x30 = 45868LLU;
	static volatile uint8_t x31 = UINT8_MAX;
	static int8_t x32 = INT8_MAX;
	volatile int32_t t7 = -108314;

    t7 = ((x29==x30)<<(x31>x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MIN;
	int32_t x34 = INT32_MAX;
	static uint32_t x35 = 3100U;
	volatile int64_t x36 = -1LL;
	volatile int32_t t8 = -1010148;

    t8 = ((x33==x34)<<(x35>x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = -515;
	static int16_t x38 = INT16_MIN;
	int64_t x39 = -8335008990903LL;

    t9 = ((x37==x38)<<(x39>x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x42 = -1;
	static int32_t x43 = INT32_MAX;

    t10 = ((x41==x42)<<(x43>x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = 3943;
	uint32_t x46 = 646658384U;
	int8_t x47 = 31;
	int16_t x48 = -1;
	int32_t t11 = 27989587;

    t11 = ((x45==x46)<<(x47>x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x49 = 1;
	int32_t x52 = INT32_MIN;
	volatile int32_t t12 = -121780009;

    t12 = ((x49==x50)<<(x51>x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int32_t x53 = 160725;
	volatile int32_t x55 = -65599050;
	volatile uint64_t x56 = UINT64_MAX;
	int32_t t13 = -1833236;

    t13 = ((x53==x54)<<(x55>x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = INT32_MIN;
	volatile uint64_t x58 = 1668525203578248LLU;
	volatile int64_t x59 = INT64_MAX;
	int16_t x60 = -10385;
	int32_t t14 = 1293;

    t14 = ((x57==x58)<<(x59>x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int32_t x61 = 5968054;
	int32_t x62 = INT32_MAX;
	uint8_t x63 = 37U;
	int8_t x64 = 12;
	volatile int32_t t15 = -7605;

    t15 = ((x61==x62)<<(x63>x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile uint8_t x65 = UINT8_MAX;
	int8_t x66 = INT8_MIN;
	uint16_t x67 = UINT16_MAX;
	static int32_t x68 = INT32_MAX;
	static volatile int32_t t16 = 61444049;

    t16 = ((x65==x66)<<(x67>x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = -8;
	uint8_t x70 = 123U;
	int8_t x71 = -14;
	int8_t x72 = -1;
	volatile int32_t t17 = 5927003;

    t17 = ((x69==x70)<<(x71>x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = INT8_MIN;
	int32_t x74 = -1;
	uint16_t x75 = UINT16_MAX;
	volatile int32_t t18 = 663;

    t18 = ((x73==x74)<<(x75>x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x77 = INT8_MIN;
	volatile int16_t x78 = INT16_MIN;
	static int8_t x80 = -1;
	volatile int32_t t19 = 104;

    t19 = ((x77==x78)<<(x79>x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x82 = -14604113652LL;
	int64_t x83 = INT64_MIN;
	uint32_t x84 = 7117469U;
	static volatile int32_t t20 = 466;

    t20 = ((x81==x82)<<(x83>x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile uint64_t x85 = 1286189935198LLU;
	int64_t x86 = INT64_MIN;
	volatile uint32_t x87 = 371961U;
	static int32_t t21 = 1;

    t21 = ((x85==x86)<<(x87>x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x90 = INT64_MIN;
	volatile uint32_t x91 = 75915U;
	volatile uint8_t x92 = 3U;
	volatile int32_t t22 = 12;

    t22 = ((x89==x90)<<(x91>x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x94 = INT64_MAX;
	uint32_t x95 = UINT32_MAX;
	int16_t x96 = -113;
	int32_t t23 = -3399134;

    t23 = ((x93==x94)<<(x95>x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = 4LL;
	int32_t x98 = -8;
	int64_t x100 = INT64_MIN;

    t24 = ((x97==x98)<<(x99>x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = INT64_MIN;
	static volatile int32_t x102 = INT32_MIN;
	int64_t x103 = INT64_MAX;
	uint64_t x104 = 461432658034LLU;
	static volatile int32_t t25 = -11458193;

    t25 = ((x101==x102)<<(x103>x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x105 = 0U;
	uint8_t x106 = 103U;
	volatile int64_t x108 = -1LL;
	int32_t t26 = 3997884;

    t26 = ((x105==x106)<<(x107>x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x109 = -340;
	uint8_t x110 = 1U;
	volatile int8_t x111 = 2;
	int64_t x112 = INT64_MIN;
	int32_t t27 = 2029267;

    t27 = ((x109==x110)<<(x111>x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint64_t x113 = UINT64_MAX;
	int16_t x114 = -7;
	static int32_t x115 = -1;
	static volatile int16_t x116 = -1;

    t28 = ((x113==x114)<<(x115>x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x117 = UINT8_MAX;
	uint64_t x118 = 1016052936961LLU;
	volatile uint64_t x119 = 1905122351LLU;
	uint32_t x120 = 0U;
	int32_t t29 = -1617560;

    t29 = ((x117==x118)<<(x119>x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = INT8_MAX;
	static uint8_t x122 = 125U;
	static uint8_t x124 = 58U;

    t30 = ((x121==x122)<<(x123>x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x125 = 511133682349LLU;
	uint32_t x126 = 24467706U;
	volatile int16_t x127 = -635;
	uint64_t x128 = 4003211235024922LLU;

    t31 = ((x125==x126)<<(x127>x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x129 = -1LL;
	static uint64_t x130 = UINT64_MAX;
	static int16_t x131 = 75;
	int64_t x132 = INT64_MIN;
	static volatile int32_t t32 = 2;

    t32 = ((x129==x130)<<(x131>x132));

    if (t32 != 2) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x134 = INT64_MIN;
	volatile uint64_t x136 = 20747506542340LLU;
	int32_t t33 = -274302340;

    t33 = ((x133==x134)<<(x135>x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = 663;
	uint64_t x138 = UINT64_MAX;
	int16_t x139 = -1;
	volatile int32_t t34 = -2;

    t34 = ((x137==x138)<<(x139>x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x142 = INT64_MAX;
	static int64_t x143 = INT64_MIN;
	uint8_t x144 = UINT8_MAX;
	volatile int32_t t35 = -941;

    t35 = ((x141==x142)<<(x143>x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = -96685LL;
	uint64_t x146 = 327112926981LLU;
	int8_t x147 = INT8_MAX;
	int8_t x148 = -1;

    t36 = ((x145==x146)<<(x147>x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint8_t x149 = 26U;
	int32_t x150 = -70;
	int8_t x151 = 1;
	uint32_t x152 = 48884U;
	int32_t t37 = 1;

    t37 = ((x149==x150)<<(x151>x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint8_t x153 = UINT8_MAX;
	uint64_t x154 = 5229416LLU;
	uint8_t x155 = UINT8_MAX;
	static int32_t t38 = -2383;

    t38 = ((x153==x154)<<(x155>x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = INT16_MIN;
	int8_t x159 = 2;
	static int32_t t39 = -12755;

    t39 = ((x157==x158)<<(x159>x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = INT64_MAX;
	volatile int8_t x162 = INT8_MAX;
	static uint16_t x163 = 2999U;
	volatile int8_t x164 = INT8_MIN;

    t40 = ((x161==x162)<<(x163>x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint64_t x165 = 67278244675LLU;
	volatile int32_t x166 = INT32_MIN;
	int16_t x168 = INT16_MIN;

    t41 = ((x165==x166)<<(x167>x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint64_t x170 = 1084061727812421695LLU;
	int16_t x171 = INT16_MAX;

    t42 = ((x169==x170)<<(x171>x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x173 = INT64_MAX;
	static int8_t x176 = INT8_MIN;
	volatile int32_t t43 = 3413;

    t43 = ((x173==x174)<<(x175>x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x177 = -247;
	volatile int64_t x178 = INT64_MIN;
	int32_t x179 = 0;
	int16_t x180 = 0;
	static int32_t t44 = -87;

    t44 = ((x177==x178)<<(x179>x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = 13106965;
	int64_t x182 = INT64_MIN;
	uint64_t x183 = 7883303451164248LLU;
	int32_t t45 = -1005711552;

    t45 = ((x181==x182)<<(x183>x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x185 = -14;
	uint8_t x186 = 10U;
	volatile int16_t x187 = 2;
	static int32_t t46 = 695727;

    t46 = ((x185==x186)<<(x187>x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x190 = 260596U;
	uint16_t x191 = 2U;
	static int16_t x192 = -1;
	int32_t t47 = -670703;

    t47 = ((x189==x190)<<(x191>x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = INT64_MIN;
	static volatile uint32_t x195 = 24016U;
	int64_t x196 = INT64_MAX;
	volatile int32_t t48 = -5759;

    t48 = ((x193==x194)<<(x195>x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x197 = 12426U;
	volatile int32_t x198 = INT32_MAX;
	uint16_t x200 = 343U;
	int32_t t49 = 4;

    t49 = ((x197==x198)<<(x199>x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = INT64_MIN;
	static volatile int8_t x202 = -19;
	int8_t x203 = INT8_MIN;
	volatile uint8_t x204 = 0U;
	int32_t t50 = 1473805;

    t50 = ((x201==x202)<<(x203>x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x205 = UINT16_MAX;
	static int32_t x206 = 61465;
	uint32_t x207 = 117U;
	int8_t x208 = 3;

    t51 = ((x205==x206)<<(x207>x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = -1;
	int64_t x210 = INT64_MIN;
	uint64_t x211 = UINT64_MAX;
	uint64_t x212 = 139368864645112530LLU;
	volatile int32_t t52 = 2575;

    t52 = ((x209==x210)<<(x211>x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = 132;
	static int16_t x214 = -5;
	static int8_t x215 = INT8_MIN;
	int32_t x216 = -440424538;

    t53 = ((x213==x214)<<(x215>x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x219 = UINT8_MAX;
	static uint64_t x220 = UINT64_MAX;
	int32_t t54 = 1648;

    t54 = ((x217==x218)<<(x219>x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int16_t x221 = -797;
	volatile uint32_t x222 = 12714673U;
	volatile uint32_t x223 = 1326U;
	static int64_t x224 = INT64_MIN;
	volatile int32_t t55 = 365;

    t55 = ((x221==x222)<<(x223>x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile uint32_t x225 = 32U;
	volatile uint32_t x226 = UINT32_MAX;
	int64_t x227 = INT64_MIN;
	int32_t t56 = 0;

    t56 = ((x225==x226)<<(x227>x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int32_t x230 = INT32_MIN;
	static int32_t x231 = INT32_MIN;
	int64_t x232 = -31341923LL;

    t57 = ((x229==x230)<<(x231>x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x233 = 7U;
	uint16_t x234 = UINT16_MAX;
	int64_t x235 = INT64_MIN;
	int16_t x236 = -1;

    t58 = ((x233==x234)<<(x235>x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x237 = INT8_MIN;
	volatile uint16_t x238 = UINT16_MAX;
	uint64_t x239 = 46152153373LLU;

    t59 = ((x237==x238)<<(x239>x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x242 = INT32_MAX;
	uint8_t x243 = UINT8_MAX;
	int8_t x244 = -1;
	volatile int32_t t60 = 74701;

    t60 = ((x241==x242)<<(x243>x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x247 = 230448U;
	volatile int32_t t61 = 346;

    t61 = ((x245==x246)<<(x247>x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x249 = 1U;
	uint16_t x250 = UINT16_MAX;
	static uint16_t x251 = 3383U;
	uint8_t x252 = UINT8_MAX;
	volatile int32_t t62 = -965431808;

    t62 = ((x249==x250)<<(x251>x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = 1;
	uint8_t x254 = 4U;
	uint32_t x255 = 9U;
	uint8_t x256 = 7U;
	int32_t t63 = 1445;

    t63 = ((x253==x254)<<(x255>x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x257 = -1;
	static int32_t x258 = INT32_MIN;
	volatile uint64_t x260 = 1070302333LLU;
	volatile int32_t t64 = -28844;

    t64 = ((x257==x258)<<(x259>x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int16_t x262 = -179;
	uint64_t x263 = 18LLU;
	int8_t x264 = 1;
	volatile int32_t t65 = 4;

    t65 = ((x261==x262)<<(x263>x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = -1;
	int16_t x266 = INT16_MIN;
	int8_t x267 = -1;
	uint64_t x268 = 983042501873936246LLU;
	volatile int32_t t66 = 3;

    t66 = ((x265==x266)<<(x267>x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x272 = 6U;
	volatile int32_t t67 = -13932;

    t67 = ((x269==x270)<<(x271>x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = -7296227038LL;
	static int64_t x274 = -22710089LL;
	uint16_t x275 = 1U;

    t68 = ((x273==x274)<<(x275>x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = 17;
	int32_t x278 = 1098;
	int8_t x279 = INT8_MIN;
	int32_t x280 = 59601;
	volatile int32_t t69 = -9004;

    t69 = ((x277==x278)<<(x279>x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = INT16_MIN;
	uint64_t x282 = 667142630LLU;
	uint32_t x283 = 32599482U;
	volatile int32_t x284 = INT32_MIN;
	int32_t t70 = -31393154;

    t70 = ((x281==x282)<<(x283>x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x285 = INT8_MAX;
	int64_t x286 = -1LL;
	static int32_t x287 = INT32_MAX;
	volatile int32_t t71 = -222674;

    t71 = ((x285==x286)<<(x287>x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x289 = UINT16_MAX;
	volatile int8_t x290 = INT8_MIN;
	int64_t x291 = INT64_MIN;
	static int8_t x292 = 15;
	volatile int32_t t72 = 1558110;

    t72 = ((x289==x290)<<(x291>x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x294 = -34868151047354LL;
	int64_t x295 = -18623604874918LL;
	int64_t x296 = -1LL;
	volatile int32_t t73 = -813294;

    t73 = ((x293==x294)<<(x295>x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = -47;
	int16_t x298 = -1;
	int8_t x299 = INT8_MAX;
	int32_t x300 = INT32_MIN;
	volatile int32_t t74 = -3997790;

    t74 = ((x297==x298)<<(x299>x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x302 = 48U;
	int64_t x303 = -921142730216LL;
	int8_t x304 = 17;

    t75 = ((x301==x302)<<(x303>x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x305 = INT32_MAX;
	volatile uint16_t x307 = UINT16_MAX;
	static int32_t x308 = -1;
	volatile int32_t t76 = 423030;

    t76 = ((x305==x306)<<(x307>x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = INT16_MIN;
	uint8_t x311 = 41U;
	uint32_t x312 = 100U;
	volatile int32_t t77 = 579959225;

    t77 = ((x309==x310)<<(x311>x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x314 = -11561678103LL;
	int64_t x316 = 67117LL;
	volatile int32_t t78 = -1;

    t78 = ((x313==x314)<<(x315>x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = -4;
	uint8_t x319 = 40U;
	volatile int8_t x320 = INT8_MAX;
	volatile int32_t t79 = -58122;

    t79 = ((x317==x318)<<(x319>x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = -13;
	volatile int8_t x322 = -26;
	uint64_t x323 = 114956LLU;
	uint16_t x324 = UINT16_MAX;
	static int32_t t80 = 7;

    t80 = ((x321==x322)<<(x323>x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x327 = -1;
	static int8_t x328 = INT8_MAX;

    t81 = ((x325==x326)<<(x327>x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint8_t x329 = 3U;
	int16_t x330 = INT16_MIN;
	int8_t x331 = 1;
	static int16_t x332 = 636;
	static volatile int32_t t82 = 29;

    t82 = ((x329==x330)<<(x331>x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = 15;
	uint16_t x334 = 7U;
	uint64_t x336 = 324126LLU;
	int32_t t83 = -10921;

    t83 = ((x333==x334)<<(x335>x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile uint64_t x337 = 1LLU;
	int16_t x338 = 33;
	int8_t x339 = 14;
	static uint64_t x340 = 2318844LLU;

    t84 = ((x337==x338)<<(x339>x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x341 = 9507203U;
	uint32_t x343 = UINT32_MAX;
	static int32_t t85 = -57494;

    t85 = ((x341==x342)<<(x343>x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = 0;
	int16_t x347 = INT16_MIN;
	int32_t x348 = INT32_MAX;

    t86 = ((x345==x346)<<(x347>x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int32_t x349 = -1;
	int32_t x350 = -6276931;
	volatile int64_t x351 = -16312552LL;
	uint8_t x352 = UINT8_MAX;

    t87 = ((x349==x350)<<(x351>x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x353 = INT32_MIN;
	int16_t x354 = INT16_MIN;
	volatile uint16_t x355 = UINT16_MAX;
	int32_t x356 = -1;
	int32_t t88 = 0;

    t88 = ((x353==x354)<<(x355>x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = INT8_MIN;
	int32_t x358 = INT32_MIN;
	static volatile int16_t x359 = INT16_MIN;
	volatile int32_t t89 = -114971764;

    t89 = ((x357==x358)<<(x359>x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x361 = 687U;
	int64_t x362 = 25715068866338420LL;
	int64_t x364 = 159860LL;
	volatile int32_t t90 = 1;

    t90 = ((x361==x362)<<(x363>x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x365 = INT32_MIN;
	volatile uint16_t x366 = 5U;
	int8_t x368 = INT8_MIN;

    t91 = ((x365==x366)<<(x367>x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x369 = UINT64_MAX;
	int32_t x370 = INT32_MIN;
	volatile int32_t t92 = -4891;

    t92 = ((x369==x370)<<(x371>x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x373 = INT16_MIN;
	int32_t x374 = INT32_MAX;
	uint32_t x375 = UINT32_MAX;
	volatile int32_t t93 = 2150089;

    t93 = ((x373==x374)<<(x375>x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x378 = -224576763LL;
	int64_t x379 = -1LL;
	uint32_t x380 = UINT32_MAX;
	volatile int32_t t94 = -5103206;

    t94 = ((x377==x378)<<(x379>x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = 1;
	int32_t x382 = INT32_MIN;
	static int32_t t95 = -53;

    t95 = ((x381==x382)<<(x383>x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = INT16_MIN;
	int8_t x386 = INT8_MIN;
	int64_t x387 = INT64_MAX;
	int32_t x388 = INT32_MIN;
	int32_t t96 = -7;

    t96 = ((x385==x386)<<(x387>x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x389 = -1;
	volatile int16_t x390 = -224;
	volatile int16_t x391 = -1;
	volatile int32_t x392 = -1;
	volatile int32_t t97 = 0;

    t97 = ((x389==x390)<<(x391>x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x393 = 3994718874785191LLU;
	uint32_t x394 = UINT32_MAX;
	int8_t x395 = INT8_MIN;

    t98 = ((x393==x394)<<(x395>x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x397 = 2027340356073515LLU;
	static int16_t x399 = -3;

    t99 = ((x397==x398)<<(x399>x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x402 = 1;
	int16_t x403 = INT16_MAX;
	volatile int32_t t100 = -38;

    t100 = ((x401==x402)<<(x403>x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x405 = INT16_MIN;
	volatile uint64_t x406 = 5315318031LLU;
	int8_t x408 = INT8_MIN;
	int32_t t101 = -578005117;

    t101 = ((x405==x406)<<(x407>x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x410 = -1;
	volatile uint16_t x411 = UINT16_MAX;
	static int16_t x412 = INT16_MAX;
	int32_t t102 = -3809;

    t102 = ((x409==x410)<<(x411>x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x413 = -1;
	int8_t x416 = -1;
	int32_t t103 = 879;

    t103 = ((x413==x414)<<(x415>x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x418 = -1;
	int16_t x419 = -52;
	static volatile int64_t x420 = -11985099LL;
	volatile int32_t t104 = 221240;

    t104 = ((x417==x418)<<(x419>x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint64_t x421 = UINT64_MAX;
	uint16_t x422 = 22U;
	static uint64_t x423 = 15593LLU;
	uint32_t x424 = 71932383U;
	volatile int32_t t105 = 28281471;

    t105 = ((x421==x422)<<(x423>x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x427 = -1;
	static uint64_t x428 = 65894284LLU;
	volatile int32_t t106 = -2705386;

    t106 = ((x425==x426)<<(x427>x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile uint16_t x430 = UINT16_MAX;
	int32_t x431 = INT32_MIN;
	int32_t x432 = INT32_MIN;

    t107 = ((x429==x430)<<(x431>x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x434 = -1LL;
	static volatile int16_t x435 = 3;
	static uint32_t x436 = UINT32_MAX;
	static volatile int32_t t108 = 0;

    t108 = ((x433==x434)<<(x435>x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x437 = INT8_MIN;
	static uint16_t x439 = UINT16_MAX;
	uint64_t x440 = 37197LLU;
	static volatile int32_t t109 = 65;

    t109 = ((x437==x438)<<(x439>x440));

    if (t109 != 2) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x441 = -236;
	uint16_t x443 = UINT16_MAX;
	int64_t x444 = INT64_MAX;
	int32_t t110 = 187529076;

    t110 = ((x441==x442)<<(x443>x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = -72;
	volatile int8_t x447 = INT8_MIN;

    t111 = ((x445==x446)<<(x447>x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x449 = 219U;
	static uint16_t x450 = UINT16_MAX;
	int8_t x451 = -1;
	volatile int32_t t112 = 88;

    t112 = ((x449==x450)<<(x451>x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x453 = -1;
	static int64_t x454 = INT64_MIN;
	volatile int16_t x455 = 3794;
	volatile int32_t t113 = -904;

    t113 = ((x453==x454)<<(x455>x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x457 = 11426U;
	int8_t x458 = 1;
	static int64_t x459 = -1LL;
	int8_t x460 = -1;
	volatile int32_t t114 = -5;

    t114 = ((x457==x458)<<(x459>x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x461 = 5;
	int32_t x462 = 227915873;
	int8_t x463 = INT8_MIN;

    t115 = ((x461==x462)<<(x463>x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint32_t x465 = 7196747U;
	int8_t x466 = 0;
	uint16_t x467 = UINT16_MAX;
	int8_t x468 = 29;
	volatile int32_t t116 = 5579902;

    t116 = ((x465==x466)<<(x467>x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = INT64_MAX;
	uint8_t x471 = 1U;
	int8_t x472 = INT8_MIN;

    t117 = ((x469==x470)<<(x471>x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile uint8_t x473 = 31U;
	uint16_t x475 = 2452U;
	uint64_t x476 = UINT64_MAX;
	volatile int32_t t118 = -236000960;

    t118 = ((x473==x474)<<(x475>x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x477 = 0U;
	uint16_t x478 = 5U;
	int64_t x479 = INT64_MIN;
	int32_t x480 = 954;
	volatile int32_t t119 = 3240;

    t119 = ((x477==x478)<<(x479>x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x481 = -1;
	uint16_t x482 = 470U;
	int8_t x483 = 0;
	static int64_t x484 = -1LL;

    t120 = ((x481==x482)<<(x483>x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x485 = UINT8_MAX;
	uint64_t x486 = UINT64_MAX;
	volatile int64_t x487 = INT64_MIN;
	volatile int32_t t121 = 0;

    t121 = ((x485==x486)<<(x487>x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x489 = -8247554194421LL;
	uint64_t x490 = UINT64_MAX;
	uint16_t x491 = 0U;
	uint64_t x492 = 500716LLU;
	int32_t t122 = 1;

    t122 = ((x489==x490)<<(x491>x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x494 = -2236160789270000LL;
	uint8_t x496 = UINT8_MAX;
	static volatile int32_t t123 = 671196996;

    t123 = ((x493==x494)<<(x495>x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int64_t x497 = INT64_MAX;
	uint64_t x498 = 0LLU;
	uint16_t x500 = 7U;
	volatile int32_t t124 = -11302287;

    t124 = ((x497==x498)<<(x499>x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x501 = -1;
	int64_t x502 = -21342404533LL;
	static int8_t x503 = 0;
	static int8_t x504 = 4;
	int32_t t125 = 0;

    t125 = ((x501==x502)<<(x503>x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x507 = INT64_MIN;
	uint8_t x508 = UINT8_MAX;
	int32_t t126 = 124;

    t126 = ((x505==x506)<<(x507>x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = -1;
	int64_t x510 = 1022033564952LL;
	static int8_t x512 = -1;
	volatile int32_t t127 = -392102;

    t127 = ((x509==x510)<<(x511>x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int16_t x513 = INT16_MIN;
	volatile int16_t x514 = INT16_MAX;
	uint16_t x516 = UINT16_MAX;
	static volatile int32_t t128 = 5533;

    t128 = ((x513==x514)<<(x515>x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x517 = -259;
	int64_t x518 = INT64_MIN;
	volatile int64_t x519 = INT64_MIN;
	int64_t x520 = 141191LL;

    t129 = ((x517==x518)<<(x519>x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int32_t x521 = -503906;
	int32_t x522 = -1;
	uint8_t x523 = UINT8_MAX;
	int64_t x524 = -1LL;
	volatile int32_t t130 = -47;

    t130 = ((x521==x522)<<(x523>x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x525 = INT8_MAX;
	uint64_t x526 = 4413781127708577LLU;
	static volatile uint16_t x527 = 22U;
	volatile int32_t t131 = -5;

    t131 = ((x525==x526)<<(x527>x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint32_t x529 = 3068U;
	int16_t x530 = -1;
	uint32_t x531 = 703233U;
	static volatile int8_t x532 = INT8_MAX;
	volatile int32_t t132 = 39605064;

    t132 = ((x529==x530)<<(x531>x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x533 = INT16_MAX;
	static int16_t x534 = 410;
	int64_t x535 = INT64_MIN;
	uint64_t x536 = 3270851LLU;
	int32_t t133 = -873;

    t133 = ((x533==x534)<<(x535>x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int32_t x537 = INT32_MIN;
	uint8_t x538 = 3U;
	uint64_t x540 = UINT64_MAX;
	volatile int32_t t134 = -140;

    t134 = ((x537==x538)<<(x539>x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = INT16_MIN;
	uint64_t x544 = UINT64_MAX;

    t135 = ((x541==x542)<<(x543>x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int32_t x546 = INT32_MIN;
	int16_t x547 = INT16_MIN;
	volatile int32_t x548 = INT32_MIN;
	int32_t t136 = 0;

    t136 = ((x545==x546)<<(x547>x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x549 = 4073;
	int16_t x550 = INT16_MAX;
	volatile int16_t x551 = INT16_MIN;

    t137 = ((x549==x550)<<(x551>x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x553 = INT64_MAX;
	volatile uint64_t x555 = UINT64_MAX;
	uint32_t x556 = 212U;
	volatile int32_t t138 = -2863;

    t138 = ((x553==x554)<<(x555>x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x557 = 29427;
	int32_t x558 = -54145;
	int32_t t139 = 4;

    t139 = ((x557==x558)<<(x559>x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x561 = UINT16_MAX;
	static int64_t x562 = -102LL;
	int32_t x563 = INT32_MIN;
	static volatile uint64_t x564 = 56641LLU;
	volatile int32_t t140 = -10674499;

    t140 = ((x561==x562)<<(x563>x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x565 = INT16_MAX;
	static int8_t x566 = INT8_MAX;
	uint64_t x567 = 240860LLU;
	int32_t x568 = 5275791;
	int32_t t141 = 1406254;

    t141 = ((x565==x566)<<(x567>x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x570 = INT32_MAX;
	uint32_t x571 = 9558528U;
	uint64_t x572 = UINT64_MAX;

    t142 = ((x569==x570)<<(x571>x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x574 = INT32_MIN;
	int32_t x576 = INT32_MIN;
	volatile int32_t t143 = 1;

    t143 = ((x573==x574)<<(x575>x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = -1;
	int16_t x578 = INT16_MAX;
	volatile int32_t x579 = INT32_MIN;
	static int32_t x580 = INT32_MIN;
	int32_t t144 = 0;

    t144 = ((x577==x578)<<(x579>x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x581 = -1;
	int16_t x582 = INT16_MAX;
	int8_t x583 = 3;

    t145 = ((x581==x582)<<(x583>x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x585 = 158534778223LL;
	uint8_t x586 = UINT8_MAX;
	int32_t x587 = INT32_MIN;
	volatile int16_t x588 = 169;
	int32_t t146 = -10;

    t146 = ((x585==x586)<<(x587>x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = INT8_MIN;
	static volatile int8_t x590 = -1;
	uint64_t x591 = UINT64_MAX;
	int32_t x592 = INT32_MIN;
	int32_t t147 = 2752;

    t147 = ((x589==x590)<<(x591>x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x594 = INT32_MAX;
	volatile uint64_t x595 = 3900671327LLU;
	int16_t x596 = INT16_MAX;
	volatile int32_t t148 = 42341989;

    t148 = ((x593==x594)<<(x595>x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x597 = -1;
	int64_t x598 = -262795022611909707LL;
	int32_t x599 = INT32_MIN;
	volatile int8_t x600 = INT8_MAX;
	int32_t t149 = 980;

    t149 = ((x597==x598)<<(x599>x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = -1;
	int64_t x602 = 6981709112140LL;
	uint64_t x603 = UINT64_MAX;
	volatile int64_t x604 = INT64_MIN;
	int32_t t150 = 13;

    t150 = ((x601==x602)<<(x603>x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x605 = 0;
	uint16_t x607 = 239U;
	int32_t x608 = -251980;
	int32_t t151 = 7590;

    t151 = ((x605==x606)<<(x607>x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x609 = 1524;
	uint64_t x610 = 15270943501745831LLU;
	uint16_t x611 = 76U;
	static int8_t x612 = -1;
	int32_t t152 = 23;

    t152 = ((x609==x610)<<(x611>x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x614 = INT64_MIN;
	uint8_t x615 = UINT8_MAX;
	static int32_t x616 = 6;
	int32_t t153 = -172431400;

    t153 = ((x613==x614)<<(x615>x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = INT8_MIN;
	static uint32_t x619 = 78960U;
	volatile uint8_t x620 = UINT8_MAX;
	volatile int32_t t154 = 161915;

    t154 = ((x617==x618)<<(x619>x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = -543660255651LL;
	volatile int32_t t155 = -3466334;

    t155 = ((x621==x622)<<(x623>x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x625 = 20;
	int64_t x626 = INT64_MIN;
	volatile int32_t x628 = INT32_MAX;
	volatile int32_t t156 = -5117;

    t156 = ((x625==x626)<<(x627>x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x629 = 27148933274418557LLU;
	int16_t x630 = -1;
	int16_t x631 = INT16_MIN;
	static int8_t x632 = INT8_MIN;
	int32_t t157 = 1;

    t157 = ((x629==x630)<<(x631>x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = INT16_MIN;
	uint64_t x634 = UINT64_MAX;
	uint64_t x636 = 233LLU;

    t158 = ((x633==x634)<<(x635>x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile uint16_t x637 = 8U;
	volatile int64_t x639 = INT64_MIN;
	volatile int32_t t159 = 46011;

    t159 = ((x637==x638)<<(x639>x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int16_t x641 = INT16_MIN;
	static int16_t x642 = INT16_MAX;
	int16_t x644 = INT16_MIN;
	int32_t t160 = 9;

    t160 = ((x641==x642)<<(x643>x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = -1LL;
	uint64_t x646 = 6394833559077LLU;
	static int8_t x647 = 1;
	volatile int32_t t161 = 51;

    t161 = ((x645==x646)<<(x647>x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = INT8_MIN;
	static volatile uint16_t x650 = UINT16_MAX;
	int64_t x651 = -131911199LL;
	static volatile int32_t t162 = 0;

    t162 = ((x649==x650)<<(x651>x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x653 = INT16_MIN;
	int8_t x654 = INT8_MIN;
	int8_t x655 = INT8_MAX;
	int64_t x656 = INT64_MIN;
	int32_t t163 = 0;

    t163 = ((x653==x654)<<(x655>x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t t164 = -21060178;

    t164 = ((x657==x658)<<(x659>x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x661 = 6666;
	volatile uint16_t x662 = 27U;
	int16_t x663 = INT16_MAX;

    t165 = ((x661==x662)<<(x663>x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x665 = INT16_MIN;
	int16_t x666 = INT16_MIN;
	static int32_t x668 = INT32_MAX;
	static int32_t t166 = 58928714;

    t166 = ((x665==x666)<<(x667>x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = -990;
	int64_t x670 = INT64_MAX;
	int8_t x671 = INT8_MIN;
	int32_t x672 = INT32_MAX;
	volatile int32_t t167 = 10714244;

    t167 = ((x669==x670)<<(x671>x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = 0;
	static int16_t x675 = INT16_MAX;
	static int16_t x676 = INT16_MIN;

    t168 = ((x673==x674)<<(x675>x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = INT64_MIN;
	int64_t x678 = INT64_MAX;
	volatile int32_t t169 = -4;

    t169 = ((x677==x678)<<(x679>x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = -1LL;
	int8_t x682 = INT8_MIN;
	uint64_t x683 = 37146525153381108LLU;
	int8_t x684 = -3;

    t170 = ((x681==x682)<<(x683>x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x686 = -1LL;
	int32_t x687 = 26;
	volatile int32_t x688 = INT32_MAX;
	volatile int32_t t171 = 6420104;

    t171 = ((x685==x686)<<(x687>x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x692 = 7422;
	static int32_t t172 = 26674;

    t172 = ((x689==x690)<<(x691>x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x693 = -1;
	volatile int32_t x694 = INT32_MIN;
	static int16_t x696 = INT16_MIN;
	int32_t t173 = -271312;

    t173 = ((x693==x694)<<(x695>x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = INT16_MIN;
	uint16_t x698 = UINT16_MAX;
	volatile int64_t x699 = INT64_MIN;
	uint64_t x700 = UINT64_MAX;
	volatile int32_t t174 = 490;

    t174 = ((x697==x698)<<(x699>x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x701 = UINT16_MAX;
	int64_t x703 = 399174230LL;

    t175 = ((x701==x702)<<(x703>x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x705 = 9U;
	volatile uint8_t x706 = 6U;
	static int64_t x707 = INT64_MAX;
	uint8_t x708 = 55U;
	volatile int32_t t176 = -6;

    t176 = ((x705==x706)<<(x707>x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = -75;
	int32_t x710 = INT32_MIN;
	int8_t x711 = 0;
	uint64_t x712 = 60543495LLU;

    t177 = ((x709==x710)<<(x711>x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x713 = -1933;
	int64_t x714 = INT64_MIN;
	int32_t x715 = INT32_MIN;
	uint16_t x716 = 419U;
	volatile int32_t t178 = 7;

    t178 = ((x713==x714)<<(x715>x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = INT64_MIN;
	uint8_t x718 = 2U;
	static volatile int64_t x719 = -1LL;
	int16_t x720 = INT16_MAX;
	static int32_t t179 = -177;

    t179 = ((x717==x718)<<(x719>x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x722 = -1;
	int64_t x724 = INT64_MIN;
	volatile int32_t t180 = -256220004;

    t180 = ((x721==x722)<<(x723>x724));

    if (t180 != 2) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x726 = INT32_MIN;
	static int8_t x728 = -7;

    t181 = ((x725==x726)<<(x727>x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x729 = INT32_MIN;
	int16_t x730 = INT16_MIN;
	int16_t x731 = INT16_MAX;
	uint32_t x732 = 32612U;
	static volatile int32_t t182 = 66842112;

    t182 = ((x729==x730)<<(x731>x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int64_t x734 = INT64_MAX;
	static int8_t x735 = INT8_MIN;
	int32_t x736 = INT32_MIN;
	static volatile int32_t t183 = -21;

    t183 = ((x733==x734)<<(x735>x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = INT16_MAX;
	int32_t x738 = -630;
	int32_t x739 = 707243;
	volatile int32_t t184 = -2464;

    t184 = ((x737==x738)<<(x739>x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = INT16_MAX;
	int8_t x742 = 31;
	uint16_t x743 = 2478U;
	int8_t x744 = 28;
	static int32_t t185 = -36;

    t185 = ((x741==x742)<<(x743>x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x745 = UINT64_MAX;
	volatile uint16_t x746 = 1U;
	int32_t x747 = INT32_MAX;
	volatile uint16_t x748 = UINT16_MAX;
	int32_t t186 = -316;

    t186 = ((x745==x746)<<(x747>x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x749 = INT8_MIN;
	int16_t x750 = 1;
	uint8_t x751 = UINT8_MAX;

    t187 = ((x749==x750)<<(x751>x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x753 = 5361;
	int8_t x754 = 11;
	int32_t x755 = INT32_MIN;
	uint64_t x756 = 77LLU;
	volatile int32_t t188 = 10039;

    t188 = ((x753==x754)<<(x755>x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x757 = UINT16_MAX;
	int8_t x758 = INT8_MIN;
	int16_t x759 = 1654;
	int16_t x760 = INT16_MIN;
	volatile int32_t t189 = 7;

    t189 = ((x757==x758)<<(x759>x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x761 = 11970U;
	uint64_t x762 = UINT64_MAX;
	uint8_t x764 = 26U;
	static int32_t t190 = -108291;

    t190 = ((x761==x762)<<(x763>x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x765 = 66172U;
	int64_t x766 = -4LL;
	volatile uint8_t x767 = 3U;
	int16_t x768 = INT16_MIN;
	int32_t t191 = -190518063;

    t191 = ((x765==x766)<<(x767>x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x770 = INT64_MIN;
	volatile int16_t x771 = -1;
	uint32_t x772 = 8U;
	int32_t t192 = 116728;

    t192 = ((x769==x770)<<(x771>x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x773 = 3;
	static volatile uint16_t x774 = 345U;
	int32_t x775 = INT32_MIN;
	static volatile int32_t x776 = 2053064;
	volatile int32_t t193 = 41;

    t193 = ((x773==x774)<<(x775>x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x777 = INT8_MIN;
	int16_t x778 = INT16_MAX;
	volatile int8_t x779 = -1;
	int32_t x780 = -1;
	volatile int32_t t194 = 3388;

    t194 = ((x777==x778)<<(x779>x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x781 = -1331788287720353LL;
	int8_t x782 = 0;
	int16_t x783 = -1;
	uint32_t x784 = 37617U;

    t195 = ((x781==x782)<<(x783>x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x785 = 2U;
	int32_t x786 = INT32_MAX;
	uint8_t x787 = 7U;
	int32_t t196 = 3087373;

    t196 = ((x785==x786)<<(x787>x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x789 = 17U;
	volatile int16_t x790 = INT16_MIN;
	static int64_t x791 = INT64_MAX;
	int32_t t197 = 1;

    t197 = ((x789==x790)<<(x791>x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x793 = INT8_MIN;
	int64_t x794 = 885916LL;
	uint64_t x796 = UINT64_MAX;
	int32_t t198 = -179;

    t198 = ((x793==x794)<<(x795>x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint8_t x797 = UINT8_MAX;
	uint32_t x799 = 4180454U;

    t199 = ((x797==x798)<<(x799>x800));

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


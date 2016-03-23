
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

int8_t x2 = -1;
int8_t x3 = INT8_MAX;
uint8_t x15 = 15U;
uint32_t x17 = 13279945U;
static uint32_t t3 = 472588244U;
static volatile uint64_t x27 = 1671745471626LLU;
int8_t x28 = INT8_MIN;
volatile int32_t t5 = -88;
int8_t x30 = INT8_MIN;
int16_t x35 = INT16_MIN;
int8_t x36 = -1;
uint64_t t7 = 266487LLU;
volatile uint8_t x41 = UINT8_MAX;
int64_t x51 = -1LL;
uint32_t x52 = 15U;
int8_t x56 = INT8_MIN;
int64_t x66 = INT64_MIN;
static int64_t t13 = -303189LL;
static int8_t x72 = INT8_MIN;
volatile int32_t t14 = 33211;
uint64_t x73 = 14491LLU;
uint8_t x74 = 0U;
uint32_t x75 = 0U;
static uint16_t x86 = UINT16_MAX;
static int16_t x90 = -1;
int32_t t18 = -2318560;
static uint64_t x94 = UINT64_MAX;
int32_t x105 = -1;
int16_t x108 = 38;
int8_t x109 = -2;
volatile uint32_t x110 = 25U;
static volatile uint64_t x111 = 95186279393LLU;
int32_t t23 = INT32_MAX;
static uint16_t x116 = 3U;
static int16_t x122 = INT16_MIN;
static int64_t x123 = -61LL;
int32_t x124 = INT32_MAX;
int8_t x127 = 25;
static int64_t x133 = INT64_MIN;
uint16_t x141 = 1U;
int16_t x143 = -2;
int64_t x146 = -1LL;
int64_t x147 = INT64_MIN;
uint16_t x148 = 6745U;
int32_t t31 = -44;
volatile uint32_t t32 = 66556723U;
volatile int8_t x153 = INT8_MIN;
static int32_t x159 = INT32_MIN;
static int64_t x160 = -43956294491LL;
static uint64_t x164 = UINT64_MAX;
uint8_t x174 = 118U;
volatile int16_t x176 = INT16_MAX;
volatile uint64_t t38 = 4153779765603115LLU;
static uint64_t x189 = UINT64_MAX;
volatile uint64_t t42 = 977LLU;
uint64_t x210 = 303657885123027541LLU;
int32_t x211 = INT32_MIN;
int64_t t44 = 3746831814LL;
int8_t x216 = INT8_MIN;
int8_t x217 = -3;
int64_t x220 = 1476042282LL;
volatile int64_t t46 = -10310145LL;
volatile int32_t x232 = 140808;
int16_t x234 = 1469;
int32_t x238 = 0;
volatile int16_t x240 = 6;
static int32_t x241 = -1;
int16_t x244 = -13925;
uint64_t t52 = 24626946LLU;
volatile int32_t x250 = -118327331;
volatile uint32_t t54 = 1397531U;
static int32_t x264 = -1;
uint32_t t57 = 2983U;
int32_t t61 = -3829;
uint64_t x299 = 325703598337919LLU;
uint64_t x300 = UINT64_MAX;
uint64_t t64 = 12976532LLU;
uint64_t x301 = UINT64_MAX;
static int64_t x302 = -1LL;
uint64_t t68 = 10695903LLU;
static int16_t x320 = -5273;
int32_t t69 = -47201;
volatile int32_t x324 = -9;
static int32_t x327 = -27820827;
static uint64_t x328 = 1236426644249849250LLU;
int16_t x340 = INT16_MIN;
uint64_t t74 = 594673399LLU;
static volatile int32_t t75 = -1408466;
static int8_t x346 = INT8_MIN;
uint8_t x347 = 3U;
uint8_t x354 = UINT8_MAX;
uint8_t x359 = 81U;
uint8_t x362 = UINT8_MAX;
int8_t x372 = INT8_MIN;
int32_t t81 = -16508;
volatile int16_t x375 = -1;
int8_t x381 = -1;
volatile int8_t x384 = 0;
int16_t x387 = 2819;
uint64_t x393 = 3755LLU;
volatile int16_t x394 = 0;
uint64_t x396 = 6901334LLU;
uint64_t t87 = 86LLU;
static volatile int32_t x397 = -71586603;
volatile uint32_t t91 = 4711U;
int32_t x418 = 7940275;
volatile int64_t x419 = INT64_MIN;
volatile uint32_t x422 = 46128U;
int64_t x426 = 18272530966751LL;
int32_t x431 = 126;
int64_t x437 = -1LL;
uint16_t x438 = 39U;
static int32_t x446 = INT32_MIN;
int64_t x454 = 83890337124838446LL;
uint32_t x469 = 4U;
volatile int8_t x479 = INT8_MIN;
int64_t x481 = -918LL;
int32_t t107 = 25;
static uint32_t t110 = 1403889316U;
uint64_t x511 = 508LLU;
static int8_t x512 = -1;
int16_t x514 = -1;
int16_t x518 = 14;
static uint32_t x534 = UINT32_MAX;
uint32_t x535 = 5874422U;
static int64_t x539 = 500961939760599LL;
uint8_t x543 = 0U;
int32_t x548 = -107370711;
static int8_t x552 = INT8_MAX;
uint64_t t121 = 52LLU;
static int64_t x573 = -1LL;
static int16_t x577 = INT16_MIN;
static int64_t x584 = 99LL;
int8_t x597 = 19;
int64_t x606 = INT64_MIN;
volatile int32_t t133 = -11699172;
int8_t x609 = -60;
uint32_t x612 = 19171U;
int16_t x615 = 249;
static int8_t x623 = INT8_MIN;
volatile uint64_t t137 = 67702625849286LLU;
uint32_t x625 = 246U;
int32_t x632 = INT32_MAX;
int32_t x635 = -1;
static int8_t x638 = INT8_MIN;
int8_t x640 = INT8_MIN;
int64_t x643 = INT64_MIN;
static uint16_t x644 = 74U;
uint32_t x653 = 1U;
int16_t x659 = INT16_MIN;
int64_t t145 = 54108LL;
volatile int16_t x662 = -1;
uint64_t x680 = 273847799939182LLU;
int8_t x686 = -1;
int32_t t151 = 242179508;
static int16_t x690 = INT16_MIN;
static int8_t x694 = -1;
static uint8_t x705 = 81U;
int32_t x710 = -1;
static int8_t x711 = -1;
int64_t x718 = -1235034LL;
uint16_t x719 = 4195U;
int16_t x731 = INT16_MIN;
static uint8_t x737 = 115U;
static int16_t x755 = -24;
static volatile int32_t x764 = -65200;
static int64_t x777 = 1815595958LL;
int8_t x788 = 21;
volatile int32_t t169 = -5351808;
int16_t x792 = INT16_MIN;
int64_t t170 = -21881601761LL;
volatile int32_t x798 = INT32_MIN;
static int16_t x800 = INT16_MIN;
volatile int32_t t172 = 0;
int8_t x801 = 1;
uint8_t x802 = UINT8_MAX;
volatile int32_t t176 = -1396634;
volatile int32_t x818 = INT32_MAX;
int8_t x820 = INT8_MAX;
volatile uint64_t x823 = 5LLU;
int32_t x825 = -589633;
int32_t x836 = -106;
int32_t x842 = 717515;
static volatile int16_t x843 = 2;
static volatile int64_t x848 = -724301601LL;
int64_t t183 = 321657LL;
static volatile int16_t x851 = INT16_MIN;
uint64_t t184 = 6943LLU;
uint16_t x860 = 1538U;
volatile uint64_t x865 = 1756130260342353739LLU;
static volatile uint64_t t187 = 15013067LLU;
volatile int8_t x878 = INT8_MAX;
int16_t x888 = INT16_MAX;
uint8_t x891 = 1U;
int16_t x900 = INT16_MIN;
volatile uint64_t x905 = UINT64_MAX;
int16_t x910 = INT16_MIN;
uint64_t x911 = 133671749165197LLU;
volatile uint16_t x912 = 5U;
static int32_t t196 = -53693301;
int16_t x933 = INT16_MIN;


void f0(void) {
    	uint8_t x1 = 12U;
	int8_t x4 = -39;
	volatile int32_t t0 = 446;

    t0 = ((x1+(x2!=x3))-x4);

    if (t0 != 52) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x9 = -2;
	int8_t x10 = 0;
	static int64_t x11 = 357270673LL;
	volatile int16_t x12 = INT16_MAX;
	volatile int32_t t1 = 3429395;

    t1 = ((x9+(x10!=x11))-x12);

    if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x13 = -1;
	uint8_t x14 = 48U;
	int16_t x16 = 103;
	static int32_t t2 = -1506;

    t2 = ((x13+(x14!=x15))-x16);

    if (t2 != -103) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x18 = -81191LL;
	uint8_t x19 = UINT8_MAX;
	static int32_t x20 = -70389;

    t3 = ((x17+(x18!=x19))-x20);

    if (t3 != 13350335U) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x21 = -22;
	static volatile int64_t x22 = -1LL;
	static int64_t x23 = INT64_MIN;
	static volatile int8_t x24 = -1;
	static int32_t t4 = -273925285;

    t4 = ((x21+(x22!=x23))-x24);

    if (t4 != -20) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x25 = -13;
	int8_t x26 = -1;

    t5 = ((x25+(x26!=x27))-x28);

    if (t5 != 116) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x29 = -1;
	static int64_t x31 = -1LL;
	int16_t x32 = -1;
	int32_t t6 = 23;

    t6 = ((x29+(x30!=x31))-x32);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint64_t x33 = UINT64_MAX;
	static int8_t x34 = 0;

    t7 = ((x33+(x34!=x35))-x36);

    if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x42 = 287;
	int32_t x43 = INT32_MIN;
	int64_t x44 = -796265377LL;
	int64_t t8 = 1426757589407909LL;

    t8 = ((x41+(x42!=x43))-x44);

    if (t8 != 796265633LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x45 = INT8_MAX;
	int64_t x46 = -47LL;
	volatile uint8_t x47 = 15U;
	static int16_t x48 = INT16_MIN;
	volatile int32_t t9 = 1593013;

    t9 = ((x45+(x46!=x47))-x48);

    if (t9 != 32896) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x49 = UINT32_MAX;
	static int16_t x50 = INT16_MAX;
	volatile uint32_t t10 = 23877U;

    t10 = ((x49+(x50!=x51))-x52);

    if (t10 != 4294967281U) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x53 = -1;
	uint16_t x54 = 2347U;
	int32_t x55 = -26;
	static volatile int32_t t11 = 1050907664;

    t11 = ((x53+(x54!=x55))-x56);

    if (t11 != 128) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint64_t x57 = 37087768LLU;
	uint64_t x58 = UINT64_MAX;
	uint8_t x59 = 0U;
	int64_t x60 = INT64_MAX;
	volatile uint64_t t12 = 1674716876LLU;

    t12 = ((x57+(x58!=x59))-x60);

    if (t12 != 9223372036891863578LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint32_t x65 = 555U;
	int16_t x67 = -1;
	int64_t x68 = 57184665LL;

    t13 = ((x65+(x66!=x67))-x68);

    if (t13 != -57184109LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x69 = INT16_MAX;
	static int32_t x70 = -6079863;
	static int16_t x71 = -40;

    t14 = ((x69+(x70!=x71))-x72);

    if (t14 != 32896) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x76 = INT32_MIN;
	volatile uint64_t t15 = 3179472670758500271LLU;

    t15 = ((x73+(x74!=x75))-x76);

    if (t15 != 2147498139LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x77 = INT8_MAX;
	uint8_t x78 = 5U;
	volatile int16_t x79 = INT16_MIN;
	int16_t x80 = 165;
	volatile int32_t t16 = -849315;

    t16 = ((x77+(x78!=x79))-x80);

    if (t16 != -37) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x85 = INT32_MAX;
	volatile uint16_t x87 = UINT16_MAX;
	uint8_t x88 = 8U;
	int32_t t17 = -773690830;

    t17 = ((x85+(x86!=x87))-x88);

    if (t17 != 2147483639) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x89 = INT8_MAX;
	int16_t x91 = INT16_MIN;
	static volatile int8_t x92 = -1;

    t18 = ((x89+(x90!=x91))-x92);

    if (t18 != 129) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x93 = UINT64_MAX;
	int32_t x95 = INT32_MIN;
	volatile int16_t x96 = INT16_MAX;
	volatile uint64_t t19 = 17279LLU;

    t19 = ((x93+(x94!=x95))-x96);

    if (t19 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x97 = -1;
	volatile uint64_t x98 = 387450330LLU;
	uint16_t x99 = 1U;
	uint32_t x100 = 6961996U;
	uint32_t t20 = 76667U;

    t20 = ((x97+(x98!=x99))-x100);

    if (t20 != 4288005300U) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x101 = -1;
	int32_t x102 = INT32_MIN;
	uint16_t x103 = 5U;
	uint32_t x104 = 41U;
	uint32_t t21 = 91U;

    t21 = ((x101+(x102!=x103))-x104);

    if (t21 != 4294967255U) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x106 = -1;
	uint16_t x107 = 4225U;
	volatile int32_t t22 = 78624;

    t22 = ((x105+(x106!=x107))-x108);

    if (t22 != -38) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x112 = INT32_MIN;

    t23 = ((x109+(x110!=x111))-x112);

    if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x113 = -1;
	uint8_t x114 = 95U;
	uint16_t x115 = UINT16_MAX;
	int32_t t24 = -112;

    t24 = ((x113+(x114!=x115))-x116);

    if (t24 != -3) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x121 = -1LL;
	volatile int64_t t25 = 3597387476026183650LL;

    t25 = ((x121+(x122!=x123))-x124);

    if (t25 != -2147483647LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x125 = 982;
	static volatile uint64_t x126 = 239656866775LLU;
	static int64_t x128 = -2882918760684LL;
	volatile int64_t t26 = 7LL;

    t26 = ((x125+(x126!=x127))-x128);

    if (t26 != 2882918761667LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x129 = 5;
	static volatile int8_t x130 = 7;
	volatile int64_t x131 = INT64_MIN;
	int32_t x132 = -1;
	int32_t t27 = 2837;

    t27 = ((x129+(x130!=x131))-x132);

    if (t27 != 7) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint8_t x134 = 0U;
	volatile int64_t x135 = INT64_MIN;
	int8_t x136 = -7;
	volatile int64_t t28 = 1LL;

    t28 = ((x133+(x134!=x135))-x136);

    if (t28 != -9223372036854775800LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x137 = 11U;
	int8_t x138 = -11;
	int64_t x139 = INT64_MAX;
	int16_t x140 = INT16_MIN;
	int32_t t29 = -25;

    t29 = ((x137+(x138!=x139))-x140);

    if (t29 != 32780) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x142 = INT8_MIN;
	volatile int64_t x144 = -1LL;
	volatile int64_t t30 = 152396LL;

    t30 = ((x141+(x142!=x143))-x144);

    if (t30 != 3LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x145 = 0;

    t31 = ((x145+(x146!=x147))-x148);

    if (t31 != -6744) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x149 = 10;
	static int16_t x150 = INT16_MIN;
	volatile int32_t x151 = INT32_MIN;
	uint32_t x152 = 29U;

    t32 = ((x149+(x150!=x151))-x152);

    if (t32 != 4294967278U) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x154 = 543U;
	volatile int32_t x155 = INT32_MIN;
	uint8_t x156 = 2U;
	int32_t t33 = -1;

    t33 = ((x153+(x154!=x155))-x156);

    if (t33 != -129) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x157 = 7;
	int64_t x158 = INT64_MIN;
	int64_t t34 = 892227476203961105LL;

    t34 = ((x157+(x158!=x159))-x160);

    if (t34 != 43956294499LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x161 = 2086849U;
	int16_t x162 = -1;
	static int16_t x163 = INT16_MIN;
	uint64_t t35 = 61695826260LLU;

    t35 = ((x161+(x162!=x163))-x164);

    if (t35 != 2086851LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int16_t x165 = -1;
	static int8_t x166 = INT8_MAX;
	static int16_t x167 = 3;
	int16_t x168 = -13026;
	int32_t t36 = 2;

    t36 = ((x165+(x166!=x167))-x168);

    if (t36 != 13026) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x169 = -1;
	int8_t x170 = INT8_MIN;
	int16_t x171 = INT16_MAX;
	int64_t x172 = 43852625LL;
	int64_t t37 = -5134904959425LL;

    t37 = ((x169+(x170!=x171))-x172);

    if (t37 != -43852625LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile uint64_t x173 = UINT64_MAX;
	uint64_t x175 = 3085295903471194001LLU;

    t38 = ((x173+(x174!=x175))-x176);

    if (t38 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x177 = 1;
	int8_t x178 = INT8_MIN;
	int32_t x179 = -1;
	static uint32_t x180 = UINT32_MAX;
	uint32_t t39 = 37024U;

    t39 = ((x177+(x178!=x179))-x180);

    if (t39 != 3U) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x181 = -2;
	volatile int64_t x182 = 1758385130561927LL;
	static int8_t x183 = INT8_MIN;
	volatile int16_t x184 = INT16_MIN;
	int32_t t40 = -1;

    t40 = ((x181+(x182!=x183))-x184);

    if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x185 = 101747;
	static int64_t x186 = INT64_MIN;
	int64_t x187 = -1LL;
	int32_t x188 = 195446139;
	static volatile int32_t t41 = 1;

    t41 = ((x185+(x186!=x187))-x188);

    if (t41 != -195344391) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x190 = 95U;
	volatile int64_t x191 = INT64_MIN;
	uint8_t x192 = 0U;

    t42 = ((x189+(x190!=x191))-x192);

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x197 = 13U;
	int32_t x198 = INT32_MIN;
	uint64_t x199 = 1252LLU;
	int16_t x200 = -1;
	int32_t t43 = 392;

    t43 = ((x197+(x198!=x199))-x200);

    if (t43 != 15) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x209 = 19384057LL;
	uint16_t x212 = 4U;

    t44 = ((x209+(x210!=x211))-x212);

    if (t44 != 19384054LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x213 = INT64_MIN;
	int16_t x214 = INT16_MIN;
	uint8_t x215 = UINT8_MAX;
	int64_t t45 = 1097LL;

    t45 = ((x213+(x214!=x215))-x216);

    if (t45 != -9223372036854775679LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x218 = 110U;
	uint16_t x219 = 13375U;

    t46 = ((x217+(x218!=x219))-x220);

    if (t46 != -1476042284LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x221 = UINT8_MAX;
	volatile int16_t x222 = 10;
	uint32_t x223 = UINT32_MAX;
	int16_t x224 = -1;
	volatile int32_t t47 = 2;

    t47 = ((x221+(x222!=x223))-x224);

    if (t47 != 257) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x229 = 8;
	uint32_t x230 = 560210911U;
	uint64_t x231 = 2755334LLU;
	int32_t t48 = 57553140;

    t48 = ((x229+(x230!=x231))-x232);

    if (t48 != -140799) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x233 = -40805;
	int8_t x235 = -1;
	int8_t x236 = 3;
	static volatile int32_t t49 = 247855790;

    t49 = ((x233+(x234!=x235))-x236);

    if (t49 != -40807) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x237 = 17869LLU;
	volatile uint32_t x239 = 1580820U;
	uint64_t t50 = 1LLU;

    t50 = ((x237+(x238!=x239))-x240);

    if (t50 != 17864LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x242 = INT8_MIN;
	uint32_t x243 = 1821U;
	static volatile int32_t t51 = -18460;

    t51 = ((x241+(x242!=x243))-x244);

    if (t51 != 13925) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x245 = 5131838632314959LL;
	static int32_t x246 = -1;
	uint32_t x247 = 1215U;
	static uint64_t x248 = 642890159946LLU;

    t52 = ((x245+(x246!=x247))-x248);

    if (t52 != 5131195742155014LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint8_t x249 = 1U;
	uint32_t x251 = UINT32_MAX;
	int8_t x252 = INT8_MAX;
	volatile int32_t t53 = -6078782;

    t53 = ((x249+(x250!=x251))-x252);

    if (t53 != -125) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile uint32_t x257 = 57512877U;
	volatile int16_t x258 = 4;
	int8_t x259 = 1;
	uint8_t x260 = UINT8_MAX;

    t54 = ((x257+(x258!=x259))-x260);

    if (t54 != 57512623U) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x261 = INT32_MIN;
	static volatile int16_t x262 = INT16_MIN;
	int16_t x263 = INT16_MIN;
	int32_t t55 = -37667827;

    t55 = ((x261+(x262!=x263))-x264);

    if (t55 != -2147483647) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x265 = -1LL;
	int64_t x266 = INT64_MAX;
	int16_t x267 = INT16_MIN;
	volatile int16_t x268 = -2331;
	static int64_t t56 = -10LL;

    t56 = ((x265+(x266!=x267))-x268);

    if (t56 != 2331LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x269 = UINT32_MAX;
	volatile int8_t x270 = INT8_MAX;
	static volatile int8_t x271 = INT8_MIN;
	static int8_t x272 = INT8_MAX;

    t57 = ((x269+(x270!=x271))-x272);

    if (t57 != 4294967169U) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x273 = 61012;
	volatile uint8_t x274 = 8U;
	int32_t x275 = INT32_MIN;
	int16_t x276 = INT16_MIN;
	int32_t t58 = -2998003;

    t58 = ((x273+(x274!=x275))-x276);

    if (t58 != 93781) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x277 = 52U;
	static int64_t x278 = 0LL;
	static uint32_t x279 = 1110270U;
	int64_t x280 = -1LL;
	static int64_t t59 = 7294LL;

    t59 = ((x277+(x278!=x279))-x280);

    if (t59 != 54LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x281 = -1;
	volatile int64_t x282 = 6LL;
	static int16_t x283 = -7;
	int64_t x284 = 8447LL;
	static int64_t t60 = -4949LL;

    t60 = ((x281+(x282!=x283))-x284);

    if (t60 != -8447LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x285 = -3;
	uint16_t x286 = 139U;
	int64_t x287 = -284505870LL;
	volatile int32_t x288 = 31;

    t61 = ((x285+(x286!=x287))-x288);

    if (t61 != -33) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x289 = UINT32_MAX;
	int64_t x290 = 950472874LL;
	int64_t x291 = INT64_MIN;
	uint8_t x292 = UINT8_MAX;
	volatile uint32_t t62 = 1176612U;

    t62 = ((x289+(x290!=x291))-x292);

    if (t62 != 4294967041U) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x293 = INT32_MIN;
	volatile int8_t x294 = -1;
	static int32_t x295 = -1;
	int8_t x296 = INT8_MIN;
	static volatile int32_t t63 = 5877;

    t63 = ((x293+(x294!=x295))-x296);

    if (t63 != -2147483520) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x297 = -2;
	volatile uint32_t x298 = UINT32_MAX;

    t64 = ((x297+(x298!=x299))-x300);

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x303 = UINT8_MAX;
	int64_t x304 = INT64_MIN;
	uint64_t t65 = 12LLU;

    t65 = ((x301+(x302!=x303))-x304);

    if (t65 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x305 = -1;
	int8_t x306 = INT8_MIN;
	uint16_t x307 = UINT16_MAX;
	int16_t x308 = INT16_MIN;
	int32_t t66 = -800910;

    t66 = ((x305+(x306!=x307))-x308);

    if (t66 != 32768) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x309 = 97698786U;
	int8_t x310 = INT8_MIN;
	volatile int64_t x311 = -1LL;
	static volatile uint32_t x312 = 5686068U;
	volatile uint32_t t67 = 1395U;

    t67 = ((x309+(x310!=x311))-x312);

    if (t67 != 92012719U) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint64_t x313 = 42348470103LLU;
	int16_t x314 = INT16_MAX;
	int64_t x315 = -1841752805949LL;
	int32_t x316 = INT32_MAX;

    t68 = ((x313+(x314!=x315))-x316);

    if (t68 != 40200986457LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x317 = INT16_MIN;
	int16_t x318 = INT16_MIN;
	uint16_t x319 = UINT16_MAX;

    t69 = ((x317+(x318!=x319))-x320);

    if (t69 != -27494) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x321 = 5U;
	uint8_t x322 = 0U;
	int16_t x323 = -1;
	volatile int32_t t70 = 571012;

    t70 = ((x321+(x322!=x323))-x324);

    if (t70 != 15) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x325 = 7069;
	volatile int32_t x326 = INT32_MIN;
	static uint64_t t71 = 100239621428978LLU;

    t71 = ((x325+(x326!=x327))-x328);

    if (t71 != 17210317429459709436LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x329 = 0U;
	volatile uint32_t x330 = UINT32_MAX;
	int64_t x331 = INT64_MIN;
	int8_t x332 = INT8_MIN;
	int32_t t72 = -1052619978;

    t72 = ((x329+(x330!=x331))-x332);

    if (t72 != 129) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x333 = INT32_MIN;
	uint32_t x334 = UINT32_MAX;
	volatile int64_t x335 = INT64_MIN;
	uint64_t x336 = 18966150LLU;
	static uint64_t t73 = 1152157673745193760LLU;

    t73 = ((x333+(x334!=x335))-x336);

    if (t73 != 18446744071543101819LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x337 = 0LLU;
	int8_t x338 = -15;
	volatile uint8_t x339 = 40U;

    t74 = ((x337+(x338!=x339))-x340);

    if (t74 != 32769LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x341 = 42;
	int16_t x342 = INT16_MIN;
	int16_t x343 = INT16_MAX;
	int16_t x344 = -5;

    t75 = ((x341+(x342!=x343))-x344);

    if (t75 != 48) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x345 = INT32_MIN;
	int16_t x348 = -118;
	volatile int32_t t76 = 2066;

    t76 = ((x345+(x346!=x347))-x348);

    if (t76 != -2147483529) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x349 = 11U;
	uint16_t x350 = UINT16_MAX;
	int64_t x351 = INT64_MIN;
	volatile int32_t x352 = 109;
	volatile int32_t t77 = 222939815;

    t77 = ((x349+(x350!=x351))-x352);

    if (t77 != -97) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x353 = INT32_MIN;
	static int64_t x355 = INT64_MAX;
	int8_t x356 = INT8_MIN;
	static volatile int32_t t78 = 10840;

    t78 = ((x353+(x354!=x355))-x356);

    if (t78 != -2147483519) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x357 = 4850434;
	static int8_t x358 = INT8_MIN;
	int32_t x360 = INT32_MAX;
	int32_t t79 = -262359848;

    t79 = ((x357+(x358!=x359))-x360);

    if (t79 != -2142633212) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x361 = UINT16_MAX;
	volatile int8_t x363 = INT8_MAX;
	volatile int8_t x364 = INT8_MAX;
	int32_t t80 = -178248;

    t80 = ((x361+(x362!=x363))-x364);

    if (t80 != 65409) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x369 = -1;
	uint8_t x370 = UINT8_MAX;
	int64_t x371 = INT64_MIN;

    t81 = ((x369+(x370!=x371))-x372);

    if (t81 != 128) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile uint8_t x373 = 2U;
	volatile uint64_t x374 = 4867985855LLU;
	int8_t x376 = INT8_MIN;
	int32_t t82 = -7;

    t82 = ((x373+(x374!=x375))-x376);

    if (t82 != 131) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x377 = 196353LL;
	volatile int8_t x378 = INT8_MIN;
	int32_t x379 = 1039659;
	uint32_t x380 = 35U;
	int64_t t83 = 27267311LL;

    t83 = ((x377+(x378!=x379))-x380);

    if (t83 != 196319LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint8_t x382 = UINT8_MAX;
	static int64_t x383 = INT64_MIN;
	static volatile int32_t t84 = 7866919;

    t84 = ((x381+(x382!=x383))-x384);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x385 = 7015;
	uint16_t x386 = 1U;
	volatile int8_t x388 = INT8_MIN;
	volatile int32_t t85 = -29;

    t85 = ((x385+(x386!=x387))-x388);

    if (t85 != 7144) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x389 = -1;
	int16_t x390 = INT16_MIN;
	int8_t x391 = -1;
	int16_t x392 = INT16_MIN;
	static volatile int32_t t86 = 59272;

    t86 = ((x389+(x390!=x391))-x392);

    if (t86 != 32768) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x395 = -1;

    t87 = ((x393+(x394!=x395))-x396);

    if (t87 != 18446744073702654038LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x398 = 388575733LLU;
	int64_t x399 = -9958LL;
	int64_t x400 = -1LL;
	int64_t t88 = 15290004916748200LL;

    t88 = ((x397+(x398!=x399))-x400);

    if (t88 != -71586601LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x401 = -1;
	int16_t x402 = INT16_MIN;
	int8_t x403 = -1;
	int8_t x404 = -1;
	volatile int32_t t89 = 96662;

    t89 = ((x401+(x402!=x403))-x404);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x409 = -1;
	uint64_t x410 = UINT64_MAX;
	int16_t x411 = -4258;
	static int8_t x412 = -1;
	volatile int32_t t90 = -405439145;

    t90 = ((x409+(x410!=x411))-x412);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x413 = 32586U;
	int16_t x414 = -1;
	uint32_t x415 = 1931205U;
	int8_t x416 = -1;

    t91 = ((x413+(x414!=x415))-x416);

    if (t91 != 32588U) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x417 = -1LL;
	int32_t x420 = 84611;
	volatile int64_t t92 = -1LL;

    t92 = ((x417+(x418!=x419))-x420);

    if (t92 != -84611LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x421 = 18804785U;
	volatile int16_t x423 = -1;
	volatile uint8_t x424 = 1U;
	static uint32_t t93 = 44409344U;

    t93 = ((x421+(x422!=x423))-x424);

    if (t93 != 18804785U) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x425 = INT8_MIN;
	static int32_t x427 = INT32_MAX;
	int32_t x428 = INT32_MIN;
	volatile int32_t t94 = 108;

    t94 = ((x425+(x426!=x427))-x428);

    if (t94 != 2147483521) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x429 = INT16_MIN;
	uint16_t x430 = 2U;
	static uint64_t x432 = 547253263908LLU;
	volatile uint64_t t95 = 6555089571LLU;

    t95 = ((x429+(x430!=x431))-x432);

    if (t95 != 18446743526456254941LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x433 = -1;
	uint8_t x434 = 78U;
	uint32_t x435 = UINT32_MAX;
	uint8_t x436 = 13U;
	volatile int32_t t96 = 1926;

    t96 = ((x433+(x434!=x435))-x436);

    if (t96 != -13) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x439 = INT8_MIN;
	int8_t x440 = -1;
	volatile int64_t t97 = -14721406LL;

    t97 = ((x437+(x438!=x439))-x440);

    if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x445 = -15569;
	uint64_t x447 = 63550014641LLU;
	int16_t x448 = 102;
	static int32_t t98 = -14926103;

    t98 = ((x445+(x446!=x447))-x448);

    if (t98 != -15670) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x449 = INT64_MIN;
	static int16_t x450 = INT16_MAX;
	int8_t x451 = INT8_MIN;
	volatile uint8_t x452 = 1U;
	volatile int64_t t99 = INT64_MIN;

    t99 = ((x449+(x450!=x451))-x452);

    if (t99 != INT64_MIN) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x453 = -1LL;
	int8_t x455 = INT8_MIN;
	uint8_t x456 = UINT8_MAX;
	volatile int64_t t100 = 7245269598LL;

    t100 = ((x453+(x454!=x455))-x456);

    if (t100 != -255LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x457 = INT16_MIN;
	uint64_t x458 = 3709812318LLU;
	volatile int8_t x459 = INT8_MIN;
	uint8_t x460 = 0U;
	volatile int32_t t101 = 1;

    t101 = ((x457+(x458!=x459))-x460);

    if (t101 != -32767) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x465 = INT16_MIN;
	int32_t x466 = -796169899;
	int64_t x467 = -23LL;
	int32_t x468 = 20;
	int32_t t102 = 1052397057;

    t102 = ((x465+(x466!=x467))-x468);

    if (t102 != -32787) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x470 = INT32_MAX;
	static int16_t x471 = INT16_MIN;
	uint16_t x472 = 16U;
	volatile uint32_t t103 = 8062047U;

    t103 = ((x469+(x470!=x471))-x472);

    if (t103 != 4294967285U) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x473 = 3962;
	volatile uint8_t x474 = 2U;
	static volatile int8_t x475 = INT8_MIN;
	uint16_t x476 = 447U;
	volatile int32_t t104 = 499259;

    t104 = ((x473+(x474!=x475))-x476);

    if (t104 != 3516) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x477 = -16194;
	volatile uint64_t x478 = UINT64_MAX;
	int64_t x480 = INT64_MIN;
	volatile int64_t t105 = -213546767719LL;

    t105 = ((x477+(x478!=x479))-x480);

    if (t105 != 9223372036854759615LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x482 = INT8_MAX;
	int8_t x483 = INT8_MIN;
	volatile int8_t x484 = -4;
	int64_t t106 = -19542504LL;

    t106 = ((x481+(x482!=x483))-x484);

    if (t106 != -913LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x485 = 14U;
	int8_t x486 = -1;
	int16_t x487 = INT16_MAX;
	static int16_t x488 = INT16_MIN;

    t107 = ((x485+(x486!=x487))-x488);

    if (t107 != 32783) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x489 = -1;
	uint8_t x490 = UINT8_MAX;
	volatile uint64_t x491 = 2829345390LLU;
	int32_t x492 = INT32_MAX;
	int32_t t108 = -24;

    t108 = ((x489+(x490!=x491))-x492);

    if (t108 != -2147483647) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x497 = 30006907425LL;
	int32_t x498 = -1;
	static volatile uint64_t x499 = 2591LLU;
	int32_t x500 = INT32_MIN;
	int64_t t109 = -1440448177790717445LL;

    t109 = ((x497+(x498!=x499))-x500);

    if (t109 != 32154391074LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint32_t x501 = 595146213U;
	int8_t x502 = 7;
	int8_t x503 = INT8_MAX;
	static uint8_t x504 = 1U;

    t110 = ((x501+(x502!=x503))-x504);

    if (t110 != 595146213U) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint64_t x505 = 5087555873626751354LLU;
	uint64_t x506 = 3422099096647LLU;
	static int16_t x507 = -1;
	static int8_t x508 = 1;
	volatile uint64_t t111 = 1LLU;

    t111 = ((x505+(x506!=x507))-x508);

    if (t111 != 5087555873626751354LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint16_t x509 = 7U;
	uint32_t x510 = 133263778U;
	int32_t t112 = -130658014;

    t112 = ((x509+(x510!=x511))-x512);

    if (t112 != 9) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x513 = 9;
	int32_t x515 = INT32_MIN;
	static uint8_t x516 = 0U;
	static int32_t t113 = -3911;

    t113 = ((x513+(x514!=x515))-x516);

    if (t113 != 10) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x517 = 1982574;
	int32_t x519 = INT32_MIN;
	int32_t x520 = INT32_MAX;
	static int32_t t114 = 15122;

    t114 = ((x517+(x518!=x519))-x520);

    if (t114 != -2145501072) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x521 = 0;
	int32_t x522 = -1;
	int64_t x523 = -1LL;
	int8_t x524 = INT8_MAX;
	volatile int32_t t115 = 5;

    t115 = ((x521+(x522!=x523))-x524);

    if (t115 != -127) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x533 = -2;
	volatile int32_t x536 = 0;
	volatile int32_t t116 = -870278761;

    t116 = ((x533+(x534!=x535))-x536);

    if (t116 != -1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x537 = INT32_MIN;
	int16_t x538 = -1;
	int16_t x540 = -1;
	int32_t t117 = -1648497;

    t117 = ((x537+(x538!=x539))-x540);

    if (t117 != -2147483646) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint8_t x541 = UINT8_MAX;
	static int32_t x542 = -1;
	static uint64_t x544 = 6944391169819456LLU;
	volatile uint64_t t118 = 572817300139410656LLU;

    t118 = ((x541+(x542!=x543))-x544);

    if (t118 != 18439799682539732416LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x545 = 1;
	int8_t x546 = INT8_MIN;
	int64_t x547 = -356LL;
	volatile int32_t t119 = -469249953;

    t119 = ((x545+(x546!=x547))-x548);

    if (t119 != 107370713) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x549 = 4143U;
	static uint32_t x550 = UINT32_MAX;
	int8_t x551 = -5;
	volatile int32_t t120 = -11;

    t120 = ((x549+(x550!=x551))-x552);

    if (t120 != 4017) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x553 = 3190840646LLU;
	uint64_t x554 = UINT64_MAX;
	int16_t x555 = INT16_MAX;
	int64_t x556 = 373681760287LL;

    t121 = ((x553+(x554!=x555))-x556);

    if (t121 != 18446743703218631976LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x557 = INT16_MIN;
	int64_t x558 = -1LL;
	int32_t x559 = INT32_MIN;
	int16_t x560 = INT16_MIN;
	int32_t t122 = -117528;

    t122 = ((x557+(x558!=x559))-x560);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint64_t x565 = UINT64_MAX;
	volatile uint32_t x566 = 6983849U;
	volatile uint32_t x567 = 112U;
	static int64_t x568 = INT64_MIN;
	static volatile uint64_t t123 = 63970392252907172LLU;

    t123 = ((x565+(x566!=x567))-x568);

    if (t123 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x569 = INT8_MAX;
	int8_t x570 = -1;
	static uint8_t x571 = 2U;
	int8_t x572 = 60;
	int32_t t124 = -2681946;

    t124 = ((x569+(x570!=x571))-x572);

    if (t124 != 68) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x574 = INT32_MIN;
	volatile int32_t x575 = 58079;
	static volatile uint32_t x576 = 187U;
	int64_t t125 = -7105375776592LL;

    t125 = ((x573+(x574!=x575))-x576);

    if (t125 != -187LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x578 = INT64_MIN;
	int16_t x579 = -1;
	static uint64_t x580 = 2938108247LLU;
	volatile uint64_t t126 = 147416238578460420LLU;

    t126 = ((x577+(x578!=x579))-x580);

    if (t126 != 18446744070771410602LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint8_t x581 = 5U;
	int64_t x582 = INT64_MIN;
	static volatile int32_t x583 = -15;
	volatile int64_t t127 = -2835328LL;

    t127 = ((x581+(x582!=x583))-x584);

    if (t127 != -93LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint32_t x585 = UINT32_MAX;
	int64_t x586 = -2800487149LL;
	volatile uint8_t x587 = 20U;
	int16_t x588 = -4;
	static uint32_t t128 = 1U;

    t128 = ((x585+(x586!=x587))-x588);

    if (t128 != 4U) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x589 = INT16_MAX;
	uint8_t x590 = 36U;
	int64_t x591 = 202669LL;
	int16_t x592 = INT16_MAX;
	int32_t t129 = -113;

    t129 = ((x589+(x590!=x591))-x592);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x593 = INT16_MIN;
	int32_t x594 = 4170;
	static int64_t x595 = -1851752718LL;
	uint64_t x596 = UINT64_MAX;
	volatile uint64_t t130 = 78LLU;

    t130 = ((x593+(x594!=x595))-x596);

    if (t130 != 18446744073709518850LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int32_t x598 = 1191;
	int64_t x599 = -2680138666263887LL;
	static uint8_t x600 = 0U;
	int32_t t131 = -551978;

    t131 = ((x597+(x598!=x599))-x600);

    if (t131 != 20) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x601 = UINT32_MAX;
	int32_t x602 = INT32_MAX;
	int16_t x603 = INT16_MAX;
	uint16_t x604 = 6873U;
	volatile uint32_t t132 = 1U;

    t132 = ((x601+(x602!=x603))-x604);

    if (t132 != 4294960423U) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x605 = INT16_MIN;
	int8_t x607 = 0;
	int32_t x608 = -1;

    t133 = ((x605+(x606!=x607))-x608);

    if (t133 != -32766) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint16_t x610 = 10551U;
	static int32_t x611 = -123854;
	uint32_t t134 = 56875U;

    t134 = ((x609+(x610!=x611))-x612);

    if (t134 != 4294948066U) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x613 = 181U;
	int32_t x614 = 69883472;
	int8_t x616 = INT8_MAX;
	volatile uint32_t t135 = 31866297U;

    t135 = ((x613+(x614!=x615))-x616);

    if (t135 != 55U) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x617 = -1;
	uint32_t x618 = 179U;
	int64_t x619 = INT64_MIN;
	uint16_t x620 = 7775U;
	int32_t t136 = 268;

    t136 = ((x617+(x618!=x619))-x620);

    if (t136 != -7775) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x621 = 292328LLU;
	uint16_t x622 = UINT16_MAX;
	volatile uint64_t x624 = 6747004292269LLU;

    t137 = ((x621+(x622!=x623))-x624);

    if (t137 != 18446737326705551676LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile int32_t x626 = INT32_MIN;
	volatile int16_t x627 = INT16_MAX;
	static uint32_t x628 = 217010998U;
	uint32_t t138 = 1948867U;

    t138 = ((x625+(x626!=x627))-x628);

    if (t138 != 4077956545U) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x629 = 27779U;
	static volatile int8_t x630 = 4;
	static int32_t x631 = INT32_MIN;
	static uint32_t t139 = 509U;

    t139 = ((x629+(x630!=x631))-x632);

    if (t139 != 2147511429U) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x633 = INT64_MIN;
	static int64_t x634 = -8963562162236LL;
	uint64_t x636 = 61369321326LLU;
	uint64_t t140 = 3LLU;

    t140 = ((x633+(x634!=x635))-x636);

    if (t140 != 9223371975485454483LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x637 = -1;
	int64_t x639 = -794LL;
	volatile int32_t t141 = 18135145;

    t141 = ((x637+(x638!=x639))-x640);

    if (t141 != 128) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x641 = -225315LL;
	static int8_t x642 = INT8_MIN;
	volatile int64_t t142 = 0LL;

    t142 = ((x641+(x642!=x643))-x644);

    if (t142 != -225388LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint16_t x645 = 14816U;
	volatile int64_t x646 = 2660653994326716040LL;
	uint32_t x647 = UINT32_MAX;
	int16_t x648 = INT16_MAX;
	int32_t t143 = 272009;

    t143 = ((x645+(x646!=x647))-x648);

    if (t143 != -17950) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x654 = INT16_MIN;
	int64_t x655 = -1LL;
	int16_t x656 = INT16_MIN;
	uint32_t t144 = 6113333U;

    t144 = ((x653+(x654!=x655))-x656);

    if (t144 != 32770U) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x657 = 1328227206437LL;
	uint8_t x658 = 36U;
	int16_t x660 = INT16_MAX;

    t145 = ((x657+(x658!=x659))-x660);

    if (t145 != 1328227173671LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x661 = INT64_MIN;
	uint8_t x663 = 8U;
	int64_t x664 = -1LL;
	volatile int64_t t146 = 7969016550334LL;

    t146 = ((x661+(x662!=x663))-x664);

    if (t146 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint32_t x665 = 94478U;
	static int64_t x666 = INT64_MIN;
	uint64_t x667 = UINT64_MAX;
	static uint16_t x668 = 26749U;
	uint32_t t147 = 8801886U;

    t147 = ((x665+(x666!=x667))-x668);

    if (t147 != 67730U) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x669 = 11247805U;
	int8_t x670 = INT8_MAX;
	static int16_t x671 = -5395;
	int64_t x672 = 1099151325460LL;
	volatile int64_t t148 = -2649597LL;

    t148 = ((x669+(x670!=x671))-x672);

    if (t148 != -1099140077654LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int32_t x677 = 69623414;
	int16_t x678 = -1;
	int32_t x679 = -1;
	uint64_t t149 = 528272038965778791LLU;

    t149 = ((x677+(x678!=x679))-x680);

    if (t149 != 18446470225979235848LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x681 = -3;
	int64_t x682 = -578643046834225843LL;
	int8_t x683 = 0;
	volatile uint16_t x684 = 1640U;
	int32_t t150 = -1486121;

    t150 = ((x681+(x682!=x683))-x684);

    if (t150 != -1642) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x685 = -1;
	static uint16_t x687 = UINT16_MAX;
	int32_t x688 = -47;

    t151 = ((x685+(x686!=x687))-x688);

    if (t151 != 47) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x689 = INT16_MIN;
	static int32_t x691 = INT32_MAX;
	uint8_t x692 = UINT8_MAX;
	int32_t t152 = -94326;

    t152 = ((x689+(x690!=x691))-x692);

    if (t152 != -33022) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x693 = UINT32_MAX;
	int64_t x695 = INT64_MIN;
	int16_t x696 = INT16_MIN;
	volatile uint32_t t153 = 2U;

    t153 = ((x693+(x694!=x695))-x696);

    if (t153 != 32768U) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x697 = -1;
	int8_t x698 = 2;
	uint8_t x699 = UINT8_MAX;
	uint16_t x700 = 1065U;
	int32_t t154 = 239565;

    t154 = ((x697+(x698!=x699))-x700);

    if (t154 != -1065) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x706 = -1;
	int8_t x707 = 1;
	volatile uint16_t x708 = 1U;
	volatile int32_t t155 = 996598382;

    t155 = ((x705+(x706!=x707))-x708);

    if (t155 != 81) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x709 = -1;
	volatile int8_t x712 = INT8_MAX;
	int32_t t156 = 23;

    t156 = ((x709+(x710!=x711))-x712);

    if (t156 != -128) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x713 = 14;
	static volatile int16_t x714 = INT16_MIN;
	int16_t x715 = INT16_MAX;
	static int32_t x716 = INT32_MAX;
	static volatile int32_t t157 = 3;

    t157 = ((x713+(x714!=x715))-x716);

    if (t157 != -2147483632) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint64_t x717 = 1087996462864133915LLU;
	int16_t x720 = INT16_MIN;
	volatile uint64_t t158 = 3563852805487LLU;

    t158 = ((x717+(x718!=x719))-x720);

    if (t158 != 1087996462864166684LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint8_t x729 = 1U;
	volatile int32_t x730 = -1;
	int16_t x732 = INT16_MAX;
	volatile int32_t t159 = -12;

    t159 = ((x729+(x730!=x731))-x732);

    if (t159 != -32765) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x738 = INT8_MIN;
	int32_t x739 = -1;
	static int16_t x740 = INT16_MIN;
	volatile int32_t t160 = 85345;

    t160 = ((x737+(x738!=x739))-x740);

    if (t160 != 32884) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x749 = INT8_MIN;
	int8_t x750 = INT8_MIN;
	uint16_t x751 = 57U;
	int8_t x752 = INT8_MIN;
	volatile int32_t t161 = 15413;

    t161 = ((x749+(x750!=x751))-x752);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x753 = 3LLU;
	int8_t x754 = 0;
	int16_t x756 = -1;
	static uint64_t t162 = 24634226813LLU;

    t162 = ((x753+(x754!=x755))-x756);

    if (t162 != 5LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x757 = -1;
	static int8_t x758 = INT8_MIN;
	static int16_t x759 = 1;
	int8_t x760 = 0;
	int32_t t163 = 0;

    t163 = ((x757+(x758!=x759))-x760);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x761 = -713783;
	volatile int64_t x762 = 7LL;
	int64_t x763 = INT64_MIN;
	volatile int32_t t164 = 1019077730;

    t164 = ((x761+(x762!=x763))-x764);

    if (t164 != -648582) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x765 = 525921518025263509LLU;
	int32_t x766 = 779;
	int16_t x767 = INT16_MIN;
	static uint64_t x768 = UINT64_MAX;
	volatile uint64_t t165 = 414007228113LLU;

    t165 = ((x765+(x766!=x767))-x768);

    if (t165 != 525921518025263511LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x773 = INT64_MIN;
	static int16_t x774 = -86;
	int16_t x775 = INT16_MIN;
	int8_t x776 = -1;
	volatile int64_t t166 = -56699LL;

    t166 = ((x773+(x774!=x775))-x776);

    if (t166 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint64_t x778 = 2409807980820LLU;
	volatile uint8_t x779 = 0U;
	volatile int32_t x780 = INT32_MAX;
	volatile int64_t t167 = -10101433940222LL;

    t167 = ((x777+(x778!=x779))-x780);

    if (t167 != -331887688LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int64_t x781 = -1LL;
	uint8_t x782 = 43U;
	volatile int8_t x783 = INT8_MAX;
	static int16_t x784 = INT16_MIN;
	int64_t t168 = -1LL;

    t168 = ((x781+(x782!=x783))-x784);

    if (t168 != 32768LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x785 = 844404;
	int64_t x786 = INT64_MIN;
	uint64_t x787 = 980643801949314LLU;

    t169 = ((x785+(x786!=x787))-x788);

    if (t169 != 844384) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x789 = -11924764781LL;
	volatile int32_t x790 = -1;
	static int16_t x791 = INT16_MIN;

    t170 = ((x789+(x790!=x791))-x792);

    if (t170 != -11924732012LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x793 = 37999LLU;
	int8_t x794 = -1;
	int32_t x795 = 6;
	volatile uint8_t x796 = UINT8_MAX;
	volatile uint64_t t171 = 5303529251LLU;

    t171 = ((x793+(x794!=x795))-x796);

    if (t171 != 37745LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x797 = 4988U;
	uint32_t x799 = 181849337U;

    t172 = ((x797+(x798!=x799))-x800);

    if (t172 != 37757) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x803 = INT8_MAX;
	uint32_t x804 = 1464373U;
	uint32_t t173 = 25U;

    t173 = ((x801+(x802!=x803))-x804);

    if (t173 != 4293502925U) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x805 = -34;
	int8_t x806 = -7;
	uint64_t x807 = 1006747324931994118LLU;
	uint16_t x808 = 28450U;
	int32_t t174 = -463;

    t174 = ((x805+(x806!=x807))-x808);

    if (t174 != -28483) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int8_t x809 = INT8_MAX;
	uint32_t x810 = 9766U;
	uint64_t x811 = UINT64_MAX;
	volatile uint16_t x812 = 16U;
	int32_t t175 = 0;

    t175 = ((x809+(x810!=x811))-x812);

    if (t175 != 112) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint8_t x813 = 3U;
	uint32_t x814 = UINT32_MAX;
	int32_t x815 = INT32_MAX;
	volatile uint8_t x816 = UINT8_MAX;

    t176 = ((x813+(x814!=x815))-x816);

    if (t176 != -251) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint8_t x817 = 14U;
	static volatile int8_t x819 = INT8_MIN;
	int32_t t177 = 148711;

    t177 = ((x817+(x818!=x819))-x820);

    if (t177 != -112) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x821 = -1LL;
	uint32_t x822 = 310405U;
	int8_t x824 = 12;
	volatile int64_t t178 = 282274LL;

    t178 = ((x821+(x822!=x823))-x824);

    if (t178 != -12LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x826 = INT16_MIN;
	volatile uint64_t x827 = 604081LLU;
	int8_t x828 = INT8_MIN;
	int32_t t179 = -1358;

    t179 = ((x825+(x826!=x827))-x828);

    if (t179 != -589504) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x833 = 1;
	int32_t x834 = INT32_MAX;
	int32_t x835 = INT32_MAX;
	int32_t t180 = 1011367;

    t180 = ((x833+(x834!=x835))-x836);

    if (t180 != 107) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x837 = 69050U;
	int8_t x838 = INT8_MAX;
	static volatile uint16_t x839 = UINT16_MAX;
	static volatile uint64_t x840 = 1011009437809LLU;
	uint64_t t181 = 136152313031609LLU;

    t181 = ((x837+(x838!=x839))-x840);

    if (t181 != 18446743062700182858LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x841 = -830733406384LL;
	int16_t x844 = INT16_MIN;
	volatile int64_t t182 = -489900540140241LL;

    t182 = ((x841+(x842!=x843))-x844);

    if (t182 != -830733373615LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int16_t x845 = INT16_MAX;
	static volatile uint32_t x846 = UINT32_MAX;
	int32_t x847 = -1;

    t183 = ((x845+(x846!=x847))-x848);

    if (t183 != 724334368LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x849 = UINT64_MAX;
	int32_t x850 = -93074461;
	static int16_t x852 = -1;

    t184 = ((x849+(x850!=x851))-x852);

    if (t184 != 1LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x853 = INT16_MAX;
	int8_t x854 = INT8_MIN;
	volatile int32_t x855 = INT32_MIN;
	int16_t x856 = INT16_MAX;
	int32_t t185 = -38767;

    t185 = ((x853+(x854!=x855))-x856);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x857 = -4343350929479LL;
	static int8_t x858 = INT8_MIN;
	uint8_t x859 = UINT8_MAX;
	volatile int64_t t186 = 1LL;

    t186 = ((x857+(x858!=x859))-x860);

    if (t186 != -4343350931016LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x866 = INT64_MIN;
	int32_t x867 = -1;
	uint64_t x868 = 32442113234229LLU;

    t187 = ((x865+(x866!=x867))-x868);

    if (t187 != 1756097818229119511LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x869 = 2;
	int8_t x870 = INT8_MIN;
	uint16_t x871 = 23U;
	static int32_t x872 = 1;
	volatile int32_t t188 = 0;

    t188 = ((x869+(x870!=x871))-x872);

    if (t188 != 2) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x877 = 124U;
	static uint8_t x879 = 1U;
	int32_t x880 = 0;
	int32_t t189 = 43990123;

    t189 = ((x877+(x878!=x879))-x880);

    if (t189 != 125) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x885 = 3;
	int16_t x886 = INT16_MIN;
	uint16_t x887 = 1050U;
	int32_t t190 = -144717491;

    t190 = ((x885+(x886!=x887))-x888);

    if (t190 != -32763) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x889 = 10;
	int32_t x890 = INT32_MIN;
	volatile int16_t x892 = INT16_MAX;
	int32_t t191 = 5580;

    t191 = ((x889+(x890!=x891))-x892);

    if (t191 != -32756) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x893 = UINT16_MAX;
	volatile int64_t x894 = INT64_MAX;
	int32_t x895 = INT32_MAX;
	volatile int16_t x896 = 0;
	int32_t t192 = 801489926;

    t192 = ((x893+(x894!=x895))-x896);

    if (t192 != 65536) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x897 = -1;
	volatile int16_t x898 = -1;
	int16_t x899 = 8327;
	volatile int32_t t193 = -3;

    t193 = ((x897+(x898!=x899))-x900);

    if (t193 != 32768) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x901 = 0;
	int8_t x902 = -32;
	uint64_t x903 = UINT64_MAX;
	int16_t x904 = 3570;
	volatile int32_t t194 = -1;

    t194 = ((x901+(x902!=x903))-x904);

    if (t194 != -3569) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x906 = INT64_MAX;
	static uint8_t x907 = 0U;
	int64_t x908 = -50398605450898751LL;
	uint64_t t195 = 5951LLU;

    t195 = ((x905+(x906!=x907))-x908);

    if (t195 != 50398605450898751LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x909 = INT16_MIN;

    t196 = ((x909+(x910!=x911))-x912);

    if (t196 != -32772) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x913 = INT16_MAX;
	int64_t x914 = INT64_MIN;
	uint16_t x915 = 61U;
	volatile uint8_t x916 = 33U;
	static int32_t t197 = -22020;

    t197 = ((x913+(x914!=x915))-x916);

    if (t197 != 32735) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x917 = -1;
	uint8_t x918 = UINT8_MAX;
	static int32_t x919 = -3486868;
	static uint64_t x920 = 8636317784434815160LLU;
	volatile uint64_t t198 = 31271LLU;

    t198 = ((x917+(x918!=x919))-x920);

    if (t198 != 9810426289274736456LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x934 = INT8_MIN;
	int64_t x935 = -1LL;
	int64_t x936 = INT64_MIN;
	int64_t t199 = 204LL;

    t199 = ((x933+(x934!=x935))-x936);

    if (t199 != 9223372036854743041LL) { NG(); } else { ; }
	
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


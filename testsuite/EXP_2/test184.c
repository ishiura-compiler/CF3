
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

volatile int32_t x4 = INT32_MAX;
static volatile int32_t x8 = INT32_MIN;
volatile uint64_t t1 = 47288417361LLU;
int8_t x10 = 0;
volatile int64_t t3 = 311LL;
static int8_t x19 = INT8_MAX;
volatile int32_t t5 = -65;
uint32_t x27 = 9U;
volatile uint32_t t6 = 9179720U;
volatile int16_t x29 = -1;
int32_t x39 = 61958;
volatile int16_t x40 = INT16_MIN;
uint8_t x47 = UINT8_MAX;
int32_t t11 = 13154;
uint64_t x65 = UINT64_MAX;
volatile int16_t x66 = INT16_MIN;
int16_t x67 = INT16_MIN;
uint16_t x74 = 3U;
int16_t x76 = -1;
volatile uint64_t t17 = 41213683573345LLU;
uint16_t x84 = 187U;
static int16_t x85 = -62;
int32_t x103 = INT32_MAX;
volatile int8_t x105 = -1;
uint16_t x109 = 1U;
uint8_t x117 = UINT8_MAX;
int8_t x132 = -1;
static volatile uint64_t x134 = 42162344LLU;
int64_t x135 = 274959LL;
int32_t x136 = INT32_MAX;
int16_t x142 = INT16_MAX;
static int64_t x151 = 1954392689199LL;
uint64_t x155 = 9729560LLU;
int8_t x158 = INT8_MAX;
int32_t x163 = -3830498;
static uint32_t t38 = 191U;
int8_t x169 = INT8_MIN;
uint8_t x172 = UINT8_MAX;
uint64_t x173 = UINT64_MAX;
int16_t x179 = INT16_MAX;
static uint8_t x185 = 25U;
volatile int64_t t42 = 14LL;
int64_t t43 = 35418904778079997LL;
static int16_t x193 = -1;
static volatile uint8_t x198 = 25U;
static uint16_t x199 = UINT16_MAX;
uint64_t x201 = 39642LLU;
static int16_t x206 = -1;
uint32_t x209 = 1085350U;
volatile uint64_t x223 = UINT64_MAX;
int64_t x235 = 178LL;
volatile uint16_t x236 = 12U;
int64_t x250 = INT64_MIN;
int32_t x253 = INT32_MAX;
uint8_t x254 = 2U;
static int64_t x256 = INT64_MAX;
static int8_t x262 = INT8_MAX;
volatile int32_t t58 = -1529034;
int64_t x265 = INT64_MIN;
uint16_t x269 = 132U;
int32_t x279 = 53;
uint32_t x282 = 1U;
int8_t x291 = INT8_MIN;
uint16_t x302 = UINT16_MAX;
uint32_t x313 = 6U;
volatile int32_t x325 = -191768624;
static volatile uint64_t t71 = 9592LLU;
uint8_t x334 = UINT8_MAX;
static uint16_t x337 = UINT16_MAX;
int16_t x341 = INT16_MAX;
volatile int16_t x342 = -9553;
int32_t x366 = INT32_MIN;
static volatile int64_t x367 = 26LL;
int8_t x369 = INT8_MIN;
static uint32_t x373 = 105466U;
uint32_t x374 = 495U;
int16_t x375 = 23;
static volatile uint32_t t81 = 40U;
uint64_t x387 = 5LLU;
int8_t x409 = INT8_MIN;
uint32_t x414 = UINT32_MAX;
int16_t x418 = -1;
volatile uint16_t x427 = 3869U;
volatile int16_t x428 = INT16_MAX;
int32_t x431 = -1;
static int8_t x432 = INT8_MIN;
int8_t x433 = -1;
int8_t x441 = INT8_MIN;
uint64_t x442 = UINT64_MAX;
int8_t x445 = INT8_MAX;
int16_t x460 = INT16_MIN;
int32_t x477 = INT32_MIN;
uint8_t x486 = 0U;
volatile uint8_t x496 = 8U;
uint16_t x502 = 6681U;
int64_t x511 = INT64_MIN;
static volatile int64_t t107 = -1319484LL;
uint16_t x513 = 7010U;
volatile int32_t x515 = -1;
int64_t x524 = 32132351034LL;
volatile int64_t t110 = -104159941LL;
volatile uint64_t t111 = 227LLU;
uint32_t x536 = UINT32_MAX;
uint32_t x550 = 20U;
int64_t x552 = 0LL;
static volatile int8_t x554 = INT8_MIN;
uint16_t x565 = 49U;
static int16_t x567 = -1;
int64_t x576 = -1LL;
volatile uint64_t t120 = 102626562LLU;
static uint16_t x586 = UINT16_MAX;
uint64_t x591 = 65LLU;
uint16_t x592 = 0U;
int32_t x596 = INT32_MAX;
uint32_t x598 = 257406U;
uint32_t x609 = 900U;
uint16_t x617 = UINT16_MAX;
static int64_t x619 = 38610668LL;
uint32_t x621 = 137013210U;
static int64_t x652 = -1LL;
static volatile int64_t t136 = -6145674LL;
uint64_t x653 = UINT64_MAX;
volatile int16_t x661 = 56;
int64_t x674 = INT64_MAX;
uint8_t x683 = 2U;
int64_t t142 = 1263335857218256816LL;
static uint16_t x699 = 4U;
static volatile uint16_t x719 = 2U;
int32_t t150 = -285367;
uint8_t x737 = 1U;
static uint32_t x750 = 237U;
int64_t x751 = -1LL;
static uint8_t x758 = 10U;
uint64_t x760 = UINT64_MAX;
volatile uint16_t x777 = UINT16_MAX;
volatile int16_t x783 = INT16_MIN;
volatile int16_t x802 = -1;
int8_t x807 = 0;
uint64_t x819 = 5404114334164828197LLU;
volatile int32_t x824 = -1;
int64_t t170 = -655990983223828LL;
volatile uint8_t x841 = 10U;
volatile uint64_t t172 = 49467213525LLU;
int64_t x849 = -2223616783LL;
static uint16_t x853 = 0U;
int64_t x855 = -66537LL;
static int32_t x857 = -1;
volatile int8_t x858 = 31;
volatile int16_t x859 = INT16_MAX;
int8_t x861 = INT8_MIN;
static volatile int32_t x864 = INT32_MIN;
uint64_t t176 = 51318354474592830LLU;
uint64_t x869 = 703LLU;
uint8_t x871 = UINT8_MAX;
volatile int8_t x872 = -1;
uint32_t x874 = 3570U;
static volatile int64_t t178 = 767204031563926LL;
int16_t x887 = INT16_MIN;
uint64_t x894 = 0LLU;
int16_t x902 = -1;
static int32_t x904 = 476511;
uint32_t t184 = 96935543U;
uint32_t x916 = 526U;
int8_t x917 = -2;
int64_t x930 = -1828LL;
uint16_t x934 = UINT16_MAX;
int64_t x935 = INT64_MIN;
uint16_t x950 = UINT16_MAX;
uint32_t x951 = UINT32_MAX;
int16_t x952 = 502;
int32_t x955 = -893159776;
static volatile int32_t t194 = 2999999;
int16_t x959 = INT16_MIN;
int32_t x966 = INT32_MIN;
volatile int8_t x970 = INT8_MAX;
uint64_t x971 = UINT64_MAX;
static volatile uint64_t t198 = 16050302934LLU;
int16_t x978 = INT16_MIN;
volatile int32_t x980 = -1;


void f0(void) {
    	uint16_t x1 = UINT16_MAX;
	int16_t x2 = -22;
	static int64_t x3 = -1LL;
	volatile int64_t t0 = 7LL;

    t0 = ((x1^(x2+x3))-x4);

    if (t0 != -2147549161LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint64_t x5 = UINT64_MAX;
	volatile int16_t x6 = INT16_MIN;
	uint64_t x7 = UINT64_MAX;

    t1 = ((x5^(x6+x7))-x8);

    if (t1 != 2147516416LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MIN;
	int16_t x11 = -58;
	uint16_t x12 = 218U;
	volatile int32_t t2 = -1;

    t2 = ((x9^(x10+x11))-x12);

    if (t2 != 2147483372) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = -1;
	int16_t x14 = -164;
	static volatile int64_t x15 = -1LL;
	static int32_t x16 = 2270;

    t3 = ((x13^(x14+x15))-x16);

    if (t3 != -2106LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = 0;
	volatile int8_t x18 = 0;
	uint32_t x20 = 18846U;
	uint32_t t4 = 50U;

    t4 = ((x17^(x18+x19))-x20);

    if (t4 != 4294948577U) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = -58;
	uint16_t x22 = 0U;
	uint8_t x23 = UINT8_MAX;
	static int16_t x24 = INT16_MIN;

    t5 = ((x21^(x22+x23))-x24);

    if (t5 != 32569) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MIN;
	int32_t x26 = INT32_MIN;
	volatile int32_t x28 = -1;

    t6 = ((x25^(x26+x27))-x28);

    if (t6 != 10U) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x30 = 56U;
	int32_t x31 = INT32_MIN;
	uint8_t x32 = UINT8_MAX;
	static volatile int32_t t7 = 355640662;

    t7 = ((x29^(x30+x31))-x32);

    if (t7 != 2147483336) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = INT8_MIN;
	int16_t x34 = 9;
	uint16_t x35 = 514U;
	int16_t x36 = -1;
	volatile int32_t t8 = -2641;

    t8 = ((x33^(x34+x35))-x36);

    if (t8 != -628) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = -1;
	int8_t x38 = 1;
	volatile int32_t t9 = -223149;

    t9 = ((x37^(x38+x39))-x40);

    if (t9 != -29192) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = 12;
	static uint64_t x42 = UINT64_MAX;
	uint16_t x43 = UINT16_MAX;
	static uint16_t x44 = 20229U;
	volatile uint64_t t10 = 382201619LLU;

    t10 = ((x41^(x42+x43))-x44);

    if (t10 != 45293LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x45 = INT32_MIN;
	int16_t x46 = INT16_MAX;
	int32_t x48 = INT32_MIN;

    t11 = ((x45^(x46+x47))-x48);

    if (t11 != 33022) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x53 = INT16_MAX;
	uint16_t x54 = 2U;
	volatile int64_t x55 = INT64_MIN;
	uint16_t x56 = 30U;
	volatile int64_t t12 = -1LL;

    t12 = ((x53^(x54+x55))-x56);

    if (t12 != -9223372036854743073LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x57 = -1;
	uint32_t x58 = UINT32_MAX;
	static volatile int8_t x59 = 1;
	static volatile uint64_t x60 = UINT64_MAX;
	static uint64_t t13 = 27LLU;

    t13 = ((x57^(x58+x59))-x60);

    if (t13 != 4294967296LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x61 = INT32_MIN;
	int32_t x62 = INT32_MAX;
	int64_t x63 = -1LL;
	static int8_t x64 = INT8_MIN;
	int64_t t14 = 231486437164236LL;

    t14 = ((x61^(x62+x63))-x64);

    if (t14 != 126LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile uint8_t x68 = 1U;
	volatile uint64_t t15 = 234306LLU;

    t15 = ((x65^(x66+x67))-x68);

    if (t15 != 65534LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint16_t x69 = 396U;
	uint8_t x70 = 12U;
	static int8_t x71 = -1;
	int32_t x72 = 51963;
	int32_t t16 = 333;

    t16 = ((x69^(x70+x71))-x72);

    if (t16 != -51572) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x73 = INT8_MIN;
	static uint64_t x75 = 241897823019LLU;

    t17 = ((x73^(x74+x75))-x76);

    if (t17 != 18446743831811728559LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile uint16_t x77 = UINT16_MAX;
	int16_t x78 = 1272;
	volatile int64_t x79 = -9243430856LL;
	int32_t x80 = INT32_MIN;
	int64_t t18 = 162682LL;

    t18 = ((x77^(x78+x79))-x80);

    if (t18 != -7095940401LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x81 = UINT8_MAX;
	volatile uint16_t x82 = 152U;
	int16_t x83 = -1234;
	volatile int32_t t19 = -26623581;

    t19 = ((x81^(x82+x83))-x84);

    if (t19 != -1410) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x86 = INT8_MIN;
	uint32_t x87 = 2474740U;
	int64_t x88 = -4034700922LL;
	int64_t t20 = 475850018LL;

    t20 = ((x85^(x86+x87))-x88);

    if (t20 != 8327193648LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x93 = 1447615880748626761LL;
	int64_t x94 = INT64_MAX;
	volatile int16_t x95 = 0;
	int64_t x96 = -11868180326849LL;
	volatile int64_t t21 = -246931865LL;

    t21 = ((x93^(x94+x95))-x96);

    if (t21 != 7775768024286475895LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint16_t x97 = 370U;
	int8_t x98 = INT8_MIN;
	int16_t x99 = 101;
	int16_t x100 = INT16_MAX;
	int32_t t22 = 173;

    t22 = ((x97^(x98+x99))-x100);

    if (t22 != -33128) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x101 = -1;
	int8_t x102 = INT8_MIN;
	int64_t x104 = INT64_MIN;
	volatile int64_t t23 = -464737833015372LL;

    t23 = ((x101^(x102+x103))-x104);

    if (t23 != 9223372034707292288LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x106 = INT16_MIN;
	int8_t x107 = INT8_MAX;
	uint8_t x108 = 0U;
	volatile int32_t t24 = -4705016;

    t24 = ((x105^(x106+x107))-x108);

    if (t24 != 32640) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x110 = -1;
	uint16_t x111 = 80U;
	int16_t x112 = INT16_MIN;
	volatile int32_t t25 = 27318370;

    t25 = ((x109^(x110+x111))-x112);

    if (t25 != 32846) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint32_t x113 = 404050U;
	static uint32_t x114 = 90229U;
	volatile uint32_t x115 = UINT32_MAX;
	int64_t x116 = 11113LL;
	static volatile int64_t t26 = -48885LL;

    t26 = ((x113^(x114+x115))-x116);

    if (t26 != 466621LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint16_t x118 = 172U;
	int64_t x119 = -1LL;
	int8_t x120 = -1;
	volatile int64_t t27 = -191302LL;

    t27 = ((x117^(x118+x119))-x120);

    if (t27 != 85LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x125 = INT16_MIN;
	int16_t x126 = INT16_MIN;
	static int16_t x127 = 194;
	int16_t x128 = -1;
	volatile int32_t t28 = 93768755;

    t28 = ((x125^(x126+x127))-x128);

    if (t28 != 195) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x129 = 89U;
	int8_t x130 = -2;
	int64_t x131 = -1LL;
	int64_t t29 = 13262229923274567LL;

    t29 = ((x129^(x130+x131))-x132);

    if (t29 != -91LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x133 = INT16_MAX;
	volatile uint64_t t30 = 2811632307784LLU;

    t30 = ((x133^(x134+x135))-x136);

    if (t30 != 18446744071604532553LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x137 = INT16_MIN;
	static int32_t x138 = 2;
	volatile int8_t x139 = 1;
	static volatile int64_t x140 = -1LL;
	int64_t t31 = -10998036218874869LL;

    t31 = ((x137^(x138+x139))-x140);

    if (t31 != -32764LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x141 = -2;
	int64_t x143 = INT64_MIN;
	uint32_t x144 = 2992U;
	int64_t t32 = 148LL;

    t32 = ((x141^(x142+x143))-x144);

    if (t32 != 9223372036854740049LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x145 = 0LL;
	uint64_t x146 = 134428840485153LLU;
	int16_t x147 = INT16_MIN;
	uint16_t x148 = UINT16_MAX;
	volatile uint64_t t33 = 976280343994600136LLU;

    t33 = ((x145^(x146+x147))-x148);

    if (t33 != 134428840386850LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x149 = -1;
	int8_t x150 = 25;
	uint16_t x152 = UINT16_MAX;
	static int64_t t34 = -4514347LL;

    t34 = ((x149^(x150+x151))-x152);

    if (t34 != -1954392754760LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x153 = INT64_MIN;
	static uint8_t x154 = 4U;
	uint32_t x156 = 17238U;
	static volatile uint64_t t35 = 740602764375LLU;

    t35 = ((x153^(x154+x155))-x156);

    if (t35 != 9223372036864488134LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x157 = INT16_MIN;
	volatile int16_t x159 = -1;
	int32_t x160 = INT32_MIN;
	int32_t t36 = 189776;

    t36 = ((x157^(x158+x159))-x160);

    if (t36 != 2147451006) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x161 = -1LL;
	volatile int8_t x162 = -1;
	static int8_t x164 = INT8_MIN;
	volatile int64_t t37 = -6LL;

    t37 = ((x161^(x162+x163))-x164);

    if (t37 != 3830626LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x165 = INT32_MIN;
	uint32_t x166 = 3U;
	int32_t x167 = INT32_MIN;
	int32_t x168 = INT32_MIN;

    t38 = ((x165^(x166+x167))-x168);

    if (t38 != 2147483651U) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x170 = -983915550457540990LL;
	int64_t x171 = 597008939789LL;
	volatile int64_t t39 = -26LL;

    t39 = ((x169^(x170+x171))-x172);

    if (t39 != 983914953448600848LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x174 = 13082558LLU;
	int64_t x175 = INT64_MIN;
	int32_t x176 = INT32_MAX;
	volatile uint64_t t40 = 320052156664900LLU;

    t40 = ((x173^(x174+x175))-x176);

    if (t40 != 9223372034694209602LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x177 = 8420LLU;
	int32_t x178 = INT32_MIN;
	int32_t x180 = INT32_MIN;
	volatile uint64_t t41 = 166971425465LLU;

    t41 = ((x177^(x178+x179))-x180);

    if (t41 != 24347LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x186 = 1098100LL;
	int64_t x187 = INT64_MIN;
	static int32_t x188 = -1;

    t42 = ((x185^(x186+x187))-x188);

    if (t42 != -9223372036853677714LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x189 = INT64_MAX;
	uint16_t x190 = 5897U;
	volatile uint8_t x191 = 2U;
	int8_t x192 = 1;

    t43 = ((x189^(x190+x191))-x192);

    if (t43 != 9223372036854769907LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x194 = -466983526061LL;
	static int16_t x195 = INT16_MIN;
	int16_t x196 = INT16_MIN;
	int64_t t44 = 334LL;

    t44 = ((x193^(x194+x195))-x196);

    if (t44 != 466983591596LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x197 = -1;
	int64_t x200 = -1LL;
	static volatile int64_t t45 = 1LL;

    t45 = ((x197^(x198+x199))-x200);

    if (t45 != -65560LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint16_t x202 = 7975U;
	int32_t x203 = INT32_MIN;
	static uint8_t x204 = 0U;
	volatile uint64_t t46 = 1352LLU;

    t46 = ((x201^(x202+x203))-x204);

    if (t46 != 18446744071562102269LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x205 = INT16_MAX;
	int16_t x207 = INT16_MIN;
	int64_t x208 = 249LL;
	volatile int64_t t47 = 25293027385834704LL;

    t47 = ((x205^(x206+x207))-x208);

    if (t47 != -65785LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x210 = 1064;
	uint16_t x211 = UINT16_MAX;
	int32_t x212 = INT32_MAX;
	uint32_t t48 = 22186922U;

    t48 = ((x209^(x210+x211))-x212);

    if (t48 != 2148633474U) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x213 = INT8_MAX;
	volatile uint8_t x214 = 7U;
	int32_t x215 = -1;
	int64_t x216 = 0LL;
	static int64_t t49 = 35387677672LL;

    t49 = ((x213^(x214+x215))-x216);

    if (t49 != 121LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint16_t x221 = UINT16_MAX;
	static int32_t x222 = INT32_MIN;
	int64_t x224 = -1LL;
	static uint64_t t50 = 2801634975435646LLU;

    t50 = ((x221^(x222+x223))-x224);

    if (t50 != 18446744071562002433LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile uint16_t x225 = UINT16_MAX;
	int16_t x226 = -1;
	uint8_t x227 = 5U;
	int8_t x228 = INT8_MAX;
	volatile int32_t t51 = -78758;

    t51 = ((x225^(x226+x227))-x228);

    if (t51 != 65404) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint8_t x229 = UINT8_MAX;
	uint8_t x230 = UINT8_MAX;
	static uint32_t x231 = 1062854705U;
	int32_t x232 = 429;
	uint32_t t52 = 210886281U;

    t52 = ((x229^(x230+x231))-x232);

    if (t52 != 1062854690U) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint32_t x233 = UINT32_MAX;
	static uint32_t x234 = 57U;
	volatile int64_t t53 = -34839905806LL;

    t53 = ((x233^(x234+x235))-x236);

    if (t53 != 4294967048LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int16_t x237 = 6403;
	int8_t x238 = INT8_MIN;
	volatile uint8_t x239 = 0U;
	int16_t x240 = INT16_MAX;
	volatile int32_t t54 = -632082;

    t54 = ((x237^(x238+x239))-x240);

    if (t54 != -39292) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x245 = -1;
	int8_t x246 = INT8_MIN;
	int8_t x247 = INT8_MIN;
	uint8_t x248 = UINT8_MAX;
	int32_t t55 = 8112;

    t55 = ((x245^(x246+x247))-x248);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x249 = INT8_MAX;
	uint64_t x251 = UINT64_MAX;
	static uint8_t x252 = 19U;
	volatile uint64_t t56 = 2LLU;

    t56 = ((x249^(x250+x251))-x252);

    if (t56 != 9223372036854775661LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x255 = -1LL;
	int64_t t57 = -14LL;

    t57 = ((x253^(x254+x255))-x256);

    if (t57 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x261 = INT32_MIN;
	uint8_t x263 = 0U;
	int32_t x264 = -5;

    t58 = ((x261^(x262+x263))-x264);

    if (t58 != -2147483516) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x266 = 688U;
	uint8_t x267 = UINT8_MAX;
	int8_t x268 = -2;
	int64_t t59 = -67132605481LL;

    t59 = ((x265^(x266+x267))-x268);

    if (t59 != -9223372036854774863LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x270 = 2;
	volatile int32_t x271 = 11428104;
	int16_t x272 = 21;
	int32_t t60 = 1540;

    t60 = ((x269^(x270+x271))-x272);

    if (t60 != 11428217) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x273 = INT64_MAX;
	int32_t x274 = -10;
	uint64_t x275 = 454502589345565LLU;
	int8_t x276 = INT8_MIN;
	uint64_t t61 = 17LLU;

    t61 = ((x273^(x274+x275))-x276);

    if (t61 != 9222917534265430380LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x277 = -1;
	int64_t x278 = INT64_MIN;
	int32_t x280 = INT32_MAX;
	volatile int64_t t62 = 1364LL;

    t62 = ((x277^(x278+x279))-x280);

    if (t62 != 9223372034707292107LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int32_t x281 = INT32_MIN;
	int32_t x283 = INT32_MIN;
	volatile int64_t x284 = INT64_MAX;
	int64_t t63 = -1LL;

    t63 = ((x281^(x282+x283))-x284);

    if (t63 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x285 = 18708036LL;
	uint64_t x286 = UINT64_MAX;
	uint16_t x287 = 159U;
	int16_t x288 = -1;
	volatile uint64_t t64 = 13403LLU;

    t64 = ((x285^(x286+x287))-x288);

    if (t64 != 18708187LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x289 = INT64_MAX;
	volatile int8_t x290 = INT8_MIN;
	static int32_t x292 = 2;
	int64_t t65 = 58LL;

    t65 = ((x289^(x290+x291))-x292);

    if (t65 != -9223372036854775555LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x293 = 1894700391659LL;
	static int32_t x294 = INT32_MIN;
	static int16_t x295 = 560;
	int64_t x296 = -1LL;
	volatile int64_t t66 = 605LL;

    t66 = ((x293^(x294+x295))-x296);

    if (t66 != -1895608246564LL) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x301 = 2113;
	static uint64_t x303 = 15600004976278605LLU;
	uint16_t x304 = UINT16_MAX;
	volatile uint64_t t67 = 79642LLU;

    t67 = ((x301^(x302+x303))-x304);

    if (t67 != 15600004976276494LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x305 = 31U;
	uint8_t x306 = 1U;
	volatile int8_t x307 = 1;
	uint16_t x308 = 9087U;
	int32_t t68 = -60085;

    t68 = ((x305^(x306+x307))-x308);

    if (t68 != -9058) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x314 = -1;
	int32_t x315 = 843;
	uint32_t x316 = 0U;
	uint32_t t69 = 0U;

    t69 = ((x313^(x314+x315))-x316);

    if (t69 != 844U) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x326 = 60;
	static uint64_t x327 = UINT64_MAX;
	int8_t x328 = -1;
	volatile uint64_t t70 = 10677072443837716LLU;

    t70 = ((x325^(x326+x327))-x328);

    if (t70 != 18446744073517783020LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x329 = 141614920141214817LLU;
	static uint8_t x330 = UINT8_MAX;
	uint64_t x331 = 3550178051607546994LLU;
	volatile uint8_t x332 = UINT8_MAX;

    t71 = ((x329^(x330+x331))-x332);

    if (t71 != 3509388390701029393LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x333 = INT16_MIN;
	uint8_t x335 = 2U;
	uint8_t x336 = 81U;
	static volatile int32_t t72 = -3;

    t72 = ((x333^(x334+x335))-x336);

    if (t72 != -32592) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x338 = -5592821672361086LL;
	uint32_t x339 = 10U;
	int16_t x340 = 4;
	static int64_t t73 = -105273389733649208LL;

    t73 = ((x337^(x338+x339))-x340);

    if (t73 != -5592821672330129LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x343 = INT8_MIN;
	volatile uint8_t x344 = 7U;
	volatile int32_t t74 = 135452;

    t74 = ((x341^(x342+x343))-x344);

    if (t74 != -23095) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x345 = -8;
	uint64_t x346 = 644559222656LLU;
	uint8_t x347 = 3U;
	int16_t x348 = INT16_MAX;
	uint64_t t75 = 2166800114702395379LLU;

    t75 = ((x345^(x346+x347))-x348);

    if (t75 != 18446743429150296188LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x349 = UINT8_MAX;
	uint8_t x350 = UINT8_MAX;
	uint32_t x351 = 59566U;
	int32_t x352 = -1;
	static volatile uint32_t t76 = 19U;

    t76 = ((x349^(x350+x351))-x352);

    if (t76 != 59731U) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x353 = INT32_MIN;
	int16_t x354 = -1;
	uint16_t x355 = 6776U;
	int8_t x356 = -1;
	int32_t t77 = 200669;

    t77 = ((x353^(x354+x355))-x356);

    if (t77 != -2147476872) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x357 = -1LL;
	static uint16_t x358 = UINT16_MAX;
	uint64_t x359 = 93847585962267893LLU;
	volatile int16_t x360 = -6;
	volatile uint64_t t78 = 25054301LLU;

    t78 = ((x357^(x358+x359))-x360);

    if (t78 != 18352896487747218193LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x365 = UINT8_MAX;
	int64_t x368 = INT64_MIN;
	volatile int64_t t79 = -14221391LL;

    t79 = ((x365^(x366+x367))-x368);

    if (t79 != 9223372034707292389LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x370 = INT32_MAX;
	volatile int16_t x371 = -44;
	int64_t x372 = INT64_MIN;
	static volatile int64_t t80 = 3957982807LL;

    t80 = ((x369^(x370+x371))-x372);

    if (t80 != 9223372034707292243LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x376 = 0U;

    t81 = ((x373^(x374+x375))-x376);

    if (t81 != 104956U) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile uint32_t x381 = 1U;
	volatile int64_t x382 = -428295386LL;
	static volatile int16_t x383 = -1;
	uint16_t x384 = 2U;
	volatile int64_t t82 = -674818566616777174LL;

    t82 = ((x381^(x382+x383))-x384);

    if (t82 != -428295390LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x385 = 9;
	static int32_t x386 = INT32_MIN;
	static volatile int8_t x388 = 17;
	static volatile uint64_t t83 = 39LLU;

    t83 = ((x385^(x386+x387))-x388);

    if (t83 != 18446744071562067963LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x393 = 1U;
	int32_t x394 = 251585333;
	volatile int64_t x395 = INT64_MIN;
	uint32_t x396 = 15657U;
	volatile int64_t t84 = -8272660095123604LL;

    t84 = ((x393^(x394+x395))-x396);

    if (t84 != -9223372036603206133LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x401 = 27;
	int16_t x402 = INT16_MIN;
	static int16_t x403 = INT16_MIN;
	uint64_t x404 = 13694354938LLU;
	uint64_t t85 = 5491071453215459313LLU;

    t85 = ((x401^(x402+x403))-x404);

    if (t85 != 18446744060015131169LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x410 = INT8_MIN;
	int64_t x411 = 43823819767LL;
	uint32_t x412 = 1514U;
	static int64_t t86 = 261007860594660LL;

    t86 = ((x409^(x410+x411))-x412);

    if (t86 != -43823821043LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint64_t x413 = 95345547LLU;
	int8_t x415 = 9;
	int64_t x416 = -317LL;
	volatile uint64_t t87 = 7LLU;

    t87 = ((x413^(x414+x415))-x416);

    if (t87 != 95345856LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x417 = 58U;
	int16_t x419 = -1;
	int8_t x420 = INT8_MIN;
	int32_t t88 = 4915954;

    t88 = ((x417^(x418+x419))-x420);

    if (t88 != 68) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x425 = -67263083235561LL;
	uint64_t x426 = 5LLU;
	volatile uint64_t t89 = 833425517017011637LLU;

    t89 = ((x425^(x426+x427))-x428);

    if (t89 != 18446676810626283574LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x429 = INT64_MIN;
	uint32_t x430 = UINT32_MAX;
	int64_t t90 = 657LL;

    t90 = ((x429^(x430+x431))-x432);

    if (t90 != -9223372032559808386LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x434 = 6301U;
	int8_t x435 = -1;
	uint32_t x436 = UINT32_MAX;
	volatile uint32_t t91 = 413U;

    t91 = ((x433^(x434+x435))-x436);

    if (t91 != 4294960996U) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x443 = 100U;
	int8_t x444 = -1;
	uint64_t t92 = 65840801225449193LLU;

    t92 = ((x441^(x442+x443))-x444);

    if (t92 != 18446744073709551588LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x446 = INT8_MIN;
	static volatile uint32_t x447 = UINT32_MAX;
	volatile uint8_t x448 = UINT8_MAX;
	static volatile uint32_t t93 = 9222121U;

    t93 = ((x445^(x446+x447))-x448);

    if (t93 != 4294966785U) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint64_t x449 = 149126LLU;
	volatile int64_t x450 = -13078LL;
	static volatile uint64_t x451 = 13039780975LLU;
	int64_t x452 = 166417157756LL;
	uint64_t t94 = 487956LLU;

    t94 = ((x449^(x450+x451))-x452);

    if (t94 != 18446743920332048739LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x453 = INT8_MIN;
	volatile uint32_t x454 = UINT32_MAX;
	int32_t x455 = 14625655;
	int8_t x456 = INT8_MIN;
	volatile uint32_t t95 = 627738046U;

    t95 = ((x453^(x454+x455))-x456);

    if (t95 != 4280341878U) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x457 = -1;
	uint8_t x458 = UINT8_MAX;
	uint32_t x459 = 7363893U;
	uint32_t t96 = 7058693U;

    t96 = ((x457^(x458+x459))-x460);

    if (t96 != 4287635915U) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x461 = INT64_MIN;
	uint64_t x462 = 1LLU;
	int32_t x463 = 24;
	static uint32_t x464 = 827U;
	static volatile uint64_t t97 = 1711278285LLU;

    t97 = ((x461^(x462+x463))-x464);

    if (t97 != 9223372036854775006LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x469 = -1LL;
	int32_t x470 = -1;
	int8_t x471 = INT8_MIN;
	int64_t x472 = 1173LL;
	int64_t t98 = -46LL;

    t98 = ((x469^(x470+x471))-x472);

    if (t98 != -1045LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x478 = -821890201716LL;
	volatile int32_t x479 = -1487;
	int8_t x480 = INT8_MIN;
	int64_t t99 = 24090397162501LL;

    t99 = ((x477^(x478+x479))-x480);

    if (t99 != 820934787645LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint32_t x481 = 212888080U;
	uint8_t x482 = UINT8_MAX;
	int8_t x483 = 48;
	int8_t x484 = -1;
	uint32_t t100 = 1980746306U;

    t100 = ((x481^(x482+x483))-x484);

    if (t100 != 212888384U) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x485 = UINT16_MAX;
	static volatile uint64_t x487 = 1164766LLU;
	int64_t x488 = 11746298735LL;
	uint64_t t101 = 16333769159261LLU;

    t101 = ((x485^(x486+x487))-x488);

    if (t101 != 18446744061964381874LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint8_t x489 = 1U;
	uint8_t x490 = UINT8_MAX;
	int16_t x491 = INT16_MIN;
	int16_t x492 = INT16_MIN;
	volatile int32_t t102 = 2577;

    t102 = ((x489^(x490+x491))-x492);

    if (t102 != 254) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x493 = 79U;
	volatile int8_t x494 = INT8_MIN;
	int16_t x495 = INT16_MIN;
	int32_t t103 = 13219911;

    t103 = ((x493^(x494+x495))-x496);

    if (t103 != -32825) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x497 = INT64_MIN;
	uint32_t x498 = 28028U;
	int8_t x499 = 0;
	volatile int16_t x500 = INT16_MIN;
	int64_t t104 = -620229070294466784LL;

    t104 = ((x497^(x498+x499))-x500);

    if (t104 != -9223372036854715012LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x501 = 121U;
	volatile int8_t x503 = -1;
	static int16_t x504 = INT16_MIN;
	volatile int32_t t105 = 14578551;

    t105 = ((x501^(x502+x503))-x504);

    if (t105 != 39521) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x505 = INT8_MIN;
	static uint64_t x506 = 1757787LLU;
	static int8_t x507 = INT8_MAX;
	int32_t x508 = INT32_MIN;
	uint64_t t106 = 109058250452361LLU;

    t106 = ((x505^(x506+x507))-x508);

    if (t106 != 2145725786LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint32_t x509 = UINT32_MAX;
	static int8_t x510 = 0;
	static volatile uint8_t x512 = 0U;

    t107 = ((x509^(x510+x511))-x512);

    if (t107 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x514 = -1LL;
	volatile int64_t x516 = INT64_MIN;
	int64_t t108 = -20223063LL;

    t108 = ((x513^(x514+x515))-x516);

    if (t108 != 9223372036854768796LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x517 = -1;
	int8_t x518 = INT8_MIN;
	uint32_t x519 = 2U;
	static uint64_t x520 = 33860862LLU;
	static uint64_t t109 = 48LLU;

    t109 = ((x517^(x518+x519))-x520);

    if (t109 != 18446744073675690879LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x521 = 2U;
	int32_t x522 = -1;
	int32_t x523 = 4732;

    t110 = ((x521^(x522+x523))-x524);

    if (t110 != -32132346305LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x525 = -166964886612LL;
	uint64_t x526 = 1994710098673LLU;
	int16_t x527 = -291;
	volatile uint8_t x528 = UINT8_MAX;

    t111 = ((x525^(x526+x527))-x528);

    if (t111 != 18446741914647699811LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x529 = -1;
	int32_t x530 = -998;
	static int8_t x531 = -1;
	int32_t x532 = INT32_MAX;
	static int32_t t112 = 18882;

    t112 = ((x529^(x530+x531))-x532);

    if (t112 != -2147482649) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x533 = UINT64_MAX;
	static uint64_t x534 = 386436427489378026LLU;
	static volatile int64_t x535 = INT64_MIN;
	volatile uint64_t t113 = 27925446890LLU;

    t113 = ((x533^(x534+x535))-x536);

    if (t113 != 8836935605070430486LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x537 = INT32_MIN;
	int32_t x538 = INT32_MIN;
	uint8_t x539 = 126U;
	volatile uint16_t x540 = UINT16_MAX;
	int32_t t114 = 20535;

    t114 = ((x537^(x538+x539))-x540);

    if (t114 != -65409) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint32_t x549 = UINT32_MAX;
	static uint16_t x551 = 238U;
	static int64_t t115 = -198932151799LL;

    t115 = ((x549^(x550+x551))-x552);

    if (t115 != 4294967037LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x553 = 9022727LL;
	volatile uint8_t x555 = UINT8_MAX;
	volatile int32_t x556 = INT32_MAX;
	int64_t t116 = 3LL;

    t116 = ((x553^(x554+x555))-x556);

    if (t116 != -2138460807LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x557 = INT16_MAX;
	static int8_t x558 = -13;
	int16_t x559 = -12;
	uint16_t x560 = UINT16_MAX;
	int32_t t117 = 2711;

    t117 = ((x557^(x558+x559))-x560);

    if (t117 != -98279) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x566 = INT16_MAX;
	volatile int32_t x568 = -1;
	int32_t t118 = -765030;

    t118 = ((x565^(x566+x567))-x568);

    if (t118 != 32720) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x569 = -1LL;
	static uint16_t x570 = 0U;
	int8_t x571 = INT8_MAX;
	int16_t x572 = INT16_MIN;
	static int64_t t119 = 166486138LL;

    t119 = ((x569^(x570+x571))-x572);

    if (t119 != 32640LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x573 = INT64_MAX;
	uint64_t x574 = 133401017LLU;
	int32_t x575 = -1;

    t120 = ((x573^(x574+x575))-x576);

    if (t120 != 9223372036721374792LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x585 = INT64_MAX;
	int8_t x587 = INT8_MIN;
	int32_t x588 = 3601661;
	int64_t t121 = 4305721159902348125LL;

    t121 = ((x585^(x586+x587))-x588);

    if (t121 != 9223372036851108739LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint64_t x589 = UINT64_MAX;
	int32_t x590 = INT32_MAX;
	uint64_t t122 = 3LLU;

    t122 = ((x589^(x590+x591))-x592);

    if (t122 != 18446744071562067903LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x593 = INT16_MIN;
	int8_t x594 = INT8_MAX;
	uint32_t x595 = UINT32_MAX;
	uint32_t t123 = 40376U;

    t123 = ((x593^(x594+x595))-x596);

    if (t123 != 2147451007U) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x597 = INT8_MIN;
	uint64_t x599 = UINT64_MAX;
	volatile int32_t x600 = 117;
	static volatile uint64_t t124 = 94935298683055LLU;

    t124 = ((x597^(x598+x599))-x600);

    if (t124 != 18446744073709294216LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x601 = 33U;
	int16_t x602 = INT16_MIN;
	int16_t x603 = -1;
	static uint8_t x604 = UINT8_MAX;
	int32_t t125 = -10;

    t125 = ((x601^(x602+x603))-x604);

    if (t125 != -33057) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x605 = 25U;
	uint32_t x606 = UINT32_MAX;
	int32_t x607 = INT32_MIN;
	int32_t x608 = INT32_MIN;
	volatile uint32_t t126 = 213457U;

    t126 = ((x605^(x606+x607))-x608);

    if (t126 != 4294967270U) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x610 = 49779267LL;
	uint8_t x611 = UINT8_MAX;
	int16_t x612 = -1;
	volatile int64_t t127 = -121034LL;

    t127 = ((x609^(x610+x611))-x612);

    if (t127 != 49778887LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x613 = 428;
	int32_t x614 = INT32_MAX;
	int16_t x615 = -9;
	uint16_t x616 = 17U;
	int32_t t128 = 2082562;

    t128 = ((x613^(x614+x615))-x616);

    if (t128 != 2147483209) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x618 = INT8_MAX;
	uint64_t x620 = 3LLU;
	volatile uint64_t t129 = 5383900LLU;

    t129 = ((x617^(x618+x619))-x620);

    if (t129 != 38656145LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x622 = -1;
	uint8_t x623 = 19U;
	static uint8_t x624 = UINT8_MAX;
	uint32_t t130 = 3U;

    t130 = ((x621^(x622+x623))-x624);

    if (t130 != 137012937U) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x625 = 46;
	int64_t x626 = -1LL;
	int8_t x627 = 11;
	int32_t x628 = INT32_MAX;
	int64_t t131 = 6693031335800LL;

    t131 = ((x625^(x626+x627))-x628);

    if (t131 != -2147483611LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x629 = INT32_MIN;
	int8_t x630 = INT8_MAX;
	int64_t x631 = 197068973566LL;
	static int64_t x632 = -43461393018400LL;
	volatile int64_t t132 = 3037809734276299926LL;

    t132 = ((x629^(x630+x631))-x632);

    if (t132 != 43265472484509LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x637 = -1;
	int64_t x638 = -1LL;
	int32_t x639 = INT32_MIN;
	static int16_t x640 = INT16_MIN;
	static int64_t t133 = -165749LL;

    t133 = ((x637^(x638+x639))-x640);

    if (t133 != 2147516416LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x641 = INT64_MIN;
	uint8_t x642 = 3U;
	volatile int16_t x643 = 23;
	int64_t x644 = -1LL;
	static volatile int64_t t134 = 200306LL;

    t134 = ((x641^(x642+x643))-x644);

    if (t134 != -9223372036854775781LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x645 = INT16_MIN;
	int8_t x646 = -1;
	uint32_t x647 = 771990129U;
	static volatile uint8_t x648 = UINT8_MAX;
	volatile uint32_t t135 = 104042828U;

    t135 = ((x645^(x646+x647))-x648);

    if (t135 != 3522961777U) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint8_t x649 = UINT8_MAX;
	volatile uint16_t x650 = UINT16_MAX;
	uint8_t x651 = 116U;

    t136 = ((x649^(x650+x651))-x652);

    if (t136 != 65677LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x654 = INT32_MIN;
	int64_t x655 = INT64_MAX;
	int32_t x656 = 13;
	volatile uint64_t t137 = 6384216LLU;

    t137 = ((x653^(x654+x655))-x656);

    if (t137 != 9223372039002259443LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x657 = INT32_MAX;
	volatile uint32_t x658 = UINT32_MAX;
	uint8_t x659 = 9U;
	uint32_t x660 = 1021U;
	uint32_t t138 = 1123U;

    t138 = ((x657^(x658+x659))-x660);

    if (t138 != 2147482618U) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x662 = 7;
	static uint8_t x663 = 0U;
	int64_t x664 = 511384879LL;
	volatile int64_t t139 = -7378501760LL;

    t139 = ((x661^(x662+x663))-x664);

    if (t139 != -511384816LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x673 = 39U;
	int64_t x675 = INT64_MIN;
	uint32_t x676 = UINT32_MAX;
	int64_t t140 = 1061684137LL;

    t140 = ((x673^(x674+x675))-x676);

    if (t140 != -4294967335LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x681 = UINT32_MAX;
	static volatile int64_t x682 = -1LL;
	static int64_t x684 = -7554595288LL;
	volatile int64_t t141 = 47012800285284641LL;

    t141 = ((x681^(x682+x683))-x684);

    if (t141 != 11849562582LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint32_t x685 = 25657U;
	int64_t x686 = -1LL;
	volatile int16_t x687 = -1;
	uint16_t x688 = 421U;

    t142 = ((x685^(x686+x687))-x688);

    if (t142 != -26078LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x693 = UINT64_MAX;
	volatile uint16_t x694 = 26280U;
	static int32_t x695 = -1;
	volatile uint32_t x696 = 34932144U;
	volatile uint64_t t143 = 14790150LLU;

    t143 = ((x693^(x694+x695))-x696);

    if (t143 != 18446744073674593192LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x697 = 101U;
	int8_t x698 = 1;
	int64_t x700 = -1LL;
	static volatile int64_t t144 = 4409481510808782LL;

    t144 = ((x697^(x698+x699))-x700);

    if (t144 != 97LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x701 = -12;
	int16_t x702 = INT16_MIN;
	int32_t x703 = -1;
	static uint64_t x704 = UINT64_MAX;
	uint64_t t145 = 7325469529LLU;

    t145 = ((x701^(x702+x703))-x704);

    if (t145 != 32780LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x705 = -17;
	volatile int16_t x706 = INT16_MAX;
	int8_t x707 = INT8_MAX;
	int8_t x708 = INT8_MIN;
	int32_t t146 = 231;

    t146 = ((x705^(x706+x707))-x708);

    if (t146 != -32751) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x713 = INT32_MIN;
	volatile uint16_t x714 = 740U;
	int8_t x715 = -1;
	volatile uint64_t x716 = 1654950430480LLU;
	volatile uint64_t t147 = 2506LLU;

    t147 = ((x713^(x714+x715))-x716);

    if (t147 != 18446742416611638227LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x717 = 26866LLU;
	static int64_t x718 = INT64_MIN;
	int32_t x720 = INT32_MIN;
	volatile uint64_t t148 = 56369132LLU;

    t148 = ((x717^(x718+x719))-x720);

    if (t148 != 9223372039002286320LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint32_t x721 = UINT32_MAX;
	static int8_t x722 = 0;
	uint64_t x723 = 9LLU;
	int16_t x724 = INT16_MIN;
	uint64_t t149 = 5316289LLU;

    t149 = ((x721^(x722+x723))-x724);

    if (t149 != 4295000054LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x729 = INT8_MAX;
	int8_t x730 = INT8_MIN;
	uint16_t x731 = 24515U;
	int16_t x732 = INT16_MIN;

    t150 = ((x729^(x730+x731))-x732);

    if (t150 != 57148) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x733 = UINT64_MAX;
	volatile int16_t x734 = 45;
	static int64_t x735 = -22LL;
	int16_t x736 = -1;
	uint64_t t151 = 123185LLU;

    t151 = ((x733^(x734+x735))-x736);

    if (t151 != 18446744073709551593LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x738 = INT32_MAX;
	static int64_t x739 = INT64_MIN;
	uint32_t x740 = 3747U;
	volatile int64_t t152 = -6LL;

    t152 = ((x737^(x738+x739))-x740);

    if (t152 != -9223372034707295909LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x741 = 10;
	int16_t x742 = INT16_MIN;
	uint64_t x743 = 2882948245LLU;
	static int16_t x744 = -13;
	static volatile uint64_t t153 = 7898313019387LLU;

    t153 = ((x741^(x742+x743))-x744);

    if (t153 != 2882915500LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x745 = 7U;
	uint32_t x746 = 59626U;
	uint8_t x747 = 22U;
	uint64_t x748 = 6LLU;
	uint64_t t154 = 2728LLU;

    t154 = ((x745^(x746+x747))-x748);

    if (t154 != 59649LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x749 = 2U;
	int64_t x752 = -1LL;
	volatile int64_t t155 = -282LL;

    t155 = ((x749^(x750+x751))-x752);

    if (t155 != 239LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint8_t x753 = 0U;
	int16_t x754 = -1;
	static uint64_t x755 = 1LLU;
	uint32_t x756 = UINT32_MAX;
	uint64_t t156 = 28788177633LLU;

    t156 = ((x753^(x754+x755))-x756);

    if (t156 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x757 = 66U;
	int32_t x759 = -401811858;
	static volatile uint64_t t157 = 1378798079689815LLU;

    t157 = ((x757^(x758+x759))-x760);

    if (t157 != 18446744073307739707LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x769 = 62LLU;
	static uint8_t x770 = 0U;
	static int16_t x771 = INT16_MIN;
	uint64_t x772 = 5883613484322766352LLU;
	uint64_t t158 = 35833033LLU;

    t158 = ((x769^(x770+x771))-x772);

    if (t158 != 12563130589386752558LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x773 = INT8_MIN;
	int8_t x774 = INT8_MAX;
	int16_t x775 = -1;
	int8_t x776 = INT8_MIN;
	int32_t t159 = -1673474;

    t159 = ((x773^(x774+x775))-x776);

    if (t159 != 126) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x778 = INT8_MAX;
	uint32_t x779 = UINT32_MAX;
	volatile uint32_t x780 = 1964U;
	volatile uint32_t t160 = 1241042459U;

    t160 = ((x777^(x778+x779))-x780);

    if (t160 != 63445U) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x781 = 1;
	int8_t x782 = INT8_MIN;
	int8_t x784 = INT8_MIN;
	static volatile int32_t t161 = 959989;

    t161 = ((x781^(x782+x783))-x784);

    if (t161 != -32767) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x785 = INT64_MIN;
	uint16_t x786 = UINT16_MAX;
	int16_t x787 = INT16_MIN;
	static int16_t x788 = -1;
	int64_t t162 = 961LL;

    t162 = ((x785^(x786+x787))-x788);

    if (t162 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x793 = INT32_MIN;
	int64_t x794 = INT64_MIN;
	static uint8_t x795 = UINT8_MAX;
	uint32_t x796 = 387674496U;
	volatile int64_t t163 = -1297965LL;

    t163 = ((x793^(x794+x795))-x796);

    if (t163 != 9223372034319617919LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x797 = INT8_MAX;
	int32_t x798 = INT32_MIN;
	volatile uint8_t x799 = UINT8_MAX;
	uint64_t x800 = 424817073503LLU;
	static volatile uint64_t t164 = 35LLU;

    t164 = ((x797^(x798+x799))-x800);

    if (t164 != 18446743646744994593LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x801 = -493;
	static int64_t x803 = INT64_MAX;
	volatile int8_t x804 = INT8_MIN;
	int64_t t165 = -1LL;

    t165 = ((x801^(x802+x803))-x804);

    if (t165 != -9223372036854775187LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x805 = -1;
	uint32_t x806 = 56U;
	int8_t x808 = INT8_MAX;
	static volatile uint32_t t166 = 1447U;

    t166 = ((x805^(x806+x807))-x808);

    if (t166 != 4294967112U) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x809 = 0;
	uint8_t x810 = 34U;
	volatile int8_t x811 = -1;
	volatile uint16_t x812 = UINT16_MAX;
	volatile int32_t t167 = 245;

    t167 = ((x809^(x810+x811))-x812);

    if (t167 != -65502) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint32_t x817 = 7U;
	uint16_t x818 = 2U;
	uint64_t x820 = 19527889918484954LLU;
	static volatile uint64_t t168 = 7178494690942320LLU;

    t168 = ((x817^(x818+x819))-x820);

    if (t168 != 5384586444246343238LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint8_t x821 = UINT8_MAX;
	int64_t x822 = 23108LL;
	int64_t x823 = INT64_MIN;
	volatile int64_t t169 = -1137508688364LL;

    t169 = ((x821^(x822+x823))-x824);

    if (t169 != -9223372036854752580LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint32_t x837 = 742285U;
	volatile int64_t x838 = INT64_MIN;
	uint8_t x839 = 22U;
	uint8_t x840 = 4U;

    t170 = ((x837^(x838+x839))-x840);

    if (t170 != -9223372036854033513LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x842 = 45U;
	uint32_t x843 = UINT32_MAX;
	static volatile int64_t x844 = -73387955993686075LL;
	volatile int64_t t171 = -68087676147LL;

    t171 = ((x841^(x842+x843))-x844);

    if (t171 != 73387955993686113LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int32_t x845 = INT32_MIN;
	volatile int8_t x846 = INT8_MAX;
	volatile uint16_t x847 = 4U;
	uint64_t x848 = 877480928662378LLU;

    t172 = ((x845^(x846+x847))-x848);

    if (t172 != 18445866590633405721LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x850 = 943U;
	static int8_t x851 = -1;
	static int8_t x852 = INT8_MIN;
	volatile int64_t t173 = -138LL;

    t173 = ((x849^(x850+x851))-x852);

    if (t173 != -2223616033LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x854 = INT32_MIN;
	volatile int8_t x856 = 0;
	int64_t t174 = 108LL;

    t174 = ((x853^(x854+x855))-x856);

    if (t174 != -2147550185LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x860 = -1;
	int32_t t175 = -55817;

    t175 = ((x857^(x858+x859))-x860);

    if (t175 != -32798) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x862 = INT16_MIN;
	uint64_t x863 = 58999861566LLU;

    t176 = ((x861^(x862+x863))-x864);

    if (t176 != 18446744016857206462LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint32_t x870 = 46277U;
	volatile uint64_t t177 = 1LLU;

    t177 = ((x869^(x870+x871))-x872);

    if (t177 != 46972LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x873 = 43500LL;
	int16_t x875 = 1;
	int16_t x876 = INT16_MIN;

    t178 = ((x873^(x874+x875))-x876);

    if (t178 != 74783LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x877 = INT32_MIN;
	static int16_t x878 = -1;
	int8_t x879 = INT8_MIN;
	int8_t x880 = INT8_MIN;
	int32_t t179 = INT32_MAX;

    t179 = ((x877^(x878+x879))-x880);

    if (t179 != INT32_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x881 = INT8_MAX;
	uint32_t x882 = UINT32_MAX;
	int16_t x883 = -920;
	static int8_t x884 = -6;
	uint32_t t180 = 114906U;

    t180 = ((x881^(x882+x883))-x884);

    if (t180 != 4294966302U) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x885 = -193LL;
	static volatile int16_t x886 = INT16_MIN;
	int32_t x888 = INT32_MIN;
	int64_t t181 = 10005345057316LL;

    t181 = ((x885^(x886+x887))-x888);

    if (t181 != 2147548991LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x893 = INT8_MIN;
	int16_t x895 = 4141;
	int8_t x896 = -12;
	uint64_t t182 = 412LLU;

    t182 = ((x893^(x894+x895))-x896);

    if (t182 != 18446744073709547449LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x897 = UINT64_MAX;
	int64_t x898 = 321358LL;
	static uint64_t x899 = 494212644LLU;
	int32_t x900 = -1;
	volatile uint64_t t183 = 5LLU;

    t183 = ((x897^(x898+x899))-x900);

    if (t183 != 18446744073215017614LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint32_t x901 = 2U;
	int32_t x903 = 975616805;

    t184 = ((x901^(x902+x903))-x904);

    if (t184 != 975140295U) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x905 = -1;
	int32_t x906 = 4878;
	static int64_t x907 = INT64_MIN;
	static volatile int8_t x908 = INT8_MAX;
	static int64_t t185 = 27323LL;

    t185 = ((x905^(x906+x907))-x908);

    if (t185 != 9223372036854770802LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x913 = 2089785U;
	int8_t x914 = -1;
	int8_t x915 = INT8_MIN;
	volatile uint32_t t186 = 70994107U;

    t186 = ((x913^(x914+x915))-x916);

    if (t186 != 4292876856U) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x918 = 36988488U;
	uint8_t x919 = 2U;
	int8_t x920 = 1;
	volatile uint32_t t187 = 1193308988U;

    t187 = ((x917^(x918+x919))-x920);

    if (t187 != 4257978803U) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint32_t x921 = 321U;
	static int16_t x922 = 1254;
	uint64_t x923 = UINT64_MAX;
	int32_t x924 = 2017;
	uint64_t t188 = 1015479310540205LLU;

    t188 = ((x921^(x922+x923))-x924);

    if (t188 != 18446744073709551043LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x925 = -1;
	volatile int8_t x926 = 2;
	uint16_t x927 = 108U;
	int64_t x928 = 5804264242121065LL;
	volatile int64_t t189 = 3LL;

    t189 = ((x925^(x926+x927))-x928);

    if (t189 != -5804264242121176LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x929 = INT64_MIN;
	int16_t x931 = INT16_MIN;
	uint8_t x932 = UINT8_MAX;
	static int64_t t190 = -128686668180363306LL;

    t190 = ((x929^(x930+x931))-x932);

    if (t190 != 9223372036854740957LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x933 = INT32_MIN;
	static int8_t x936 = INT8_MIN;
	volatile int64_t t191 = -50572848695LL;

    t191 = ((x933^(x934+x935))-x936);

    if (t191 != 9223372034707357823LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x945 = INT8_MIN;
	uint32_t x946 = UINT32_MAX;
	int64_t x947 = INT64_MIN;
	int32_t x948 = -1;
	int64_t t192 = 212504671LL;

    t192 = ((x945^(x946+x947))-x948);

    if (t192 != 9223372032559808640LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x949 = 1922950159LLU;
	static uint64_t t193 = 5124392326406216LLU;

    t193 = ((x949^(x950+x951))-x952);

    if (t193 != 1922898427LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x953 = INT32_MIN;
	uint16_t x954 = UINT16_MAX;
	int8_t x956 = INT8_MIN;

    t194 = ((x953^(x954+x955))-x956);

    if (t194 != 1254389535) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint32_t x957 = 1416929U;
	int8_t x958 = INT8_MIN;
	int16_t x960 = 9448;
	volatile uint32_t t195 = 4145963U;

    t195 = ((x957^(x958+x959))-x960);

    if (t195 != 4293573753U) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x961 = INT16_MIN;
	static int16_t x962 = -1;
	volatile int8_t x963 = INT8_MIN;
	volatile int8_t x964 = INT8_MIN;
	volatile int32_t t196 = -307097811;

    t196 = ((x961^(x962+x963))-x964);

    if (t196 != 32767) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x965 = 0U;
	static int8_t x967 = 3;
	uint64_t x968 = 1366093596161252128LLU;
	uint64_t t197 = 964680LLU;

    t197 = ((x965^(x966+x967))-x968);

    if (t197 != 17080650475400815843LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint8_t x969 = 25U;
	int64_t x972 = -9LL;

    t198 = ((x969^(x970+x971))-x972);

    if (t198 != 112LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x977 = -11;
	uint8_t x979 = UINT8_MAX;
	static volatile int32_t t199 = 856970994;

    t199 = ((x977^(x978+x979))-x980);

    if (t199 != 32523) { NG(); } else { ; }
	
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


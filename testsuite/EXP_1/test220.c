
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

int64_t x10 = -3575231404LL;
int32_t x12 = INT32_MIN;
int64_t x24 = -2571529962LL;
volatile uint8_t x34 = UINT8_MAX;
volatile int32_t t7 = -510025;
static uint16_t x50 = UINT16_MAX;
static int32_t t10 = 20;
static volatile uint16_t x62 = 1840U;
static volatile int8_t x63 = INT8_MIN;
int32_t t12 = -38;
volatile int16_t x70 = 0;
uint8_t x71 = 1U;
static int8_t x72 = 38;
int32_t t13 = 18;
static uint64_t x73 = 10858942624LLU;
volatile int32_t t16 = 142517;
static uint32_t x87 = 1628U;
uint32_t x89 = UINT32_MAX;
int64_t x91 = -1LL;
static int16_t x92 = INT16_MIN;
int32_t t18 = 1;
static uint32_t x105 = 1U;
uint32_t x107 = 6755U;
int64_t x108 = INT64_MIN;
volatile int16_t x111 = INT16_MAX;
uint8_t x113 = UINT8_MAX;
int32_t t24 = -878443;
volatile uint32_t x124 = UINT32_MAX;
int16_t x131 = -1;
int8_t x142 = INT8_MIN;
static uint16_t x147 = 9922U;
volatile int32_t t31 = 1211286;
int16_t x156 = INT16_MAX;
volatile int32_t t34 = 7921;
static int8_t x164 = -15;
int32_t t36 = 963;
volatile uint8_t x172 = 72U;
int8_t x177 = INT8_MIN;
uint32_t x181 = 14620U;
int64_t x182 = INT64_MAX;
static uint32_t x187 = UINT32_MAX;
int16_t x197 = INT16_MAX;
volatile int64_t x198 = INT64_MAX;
int8_t x199 = 2;
int16_t x206 = INT16_MIN;
uint16_t x207 = 4U;
static int64_t x209 = INT64_MIN;
volatile int64_t x210 = INT64_MIN;
volatile int8_t x211 = -1;
int16_t x222 = 6;
int8_t x225 = INT8_MIN;
volatile uint64_t x235 = 1LLU;
uint64_t x236 = UINT64_MAX;
static int8_t x251 = INT8_MIN;
int16_t x252 = 125;
volatile int32_t t56 = 0;
int32_t t57 = -347;
uint32_t x261 = 11515U;
int64_t x262 = INT64_MAX;
volatile uint32_t x265 = UINT32_MAX;
static volatile int32_t x277 = -1;
int32_t t62 = 66109123;
uint64_t x286 = 345841590251460085LLU;
volatile int32_t t63 = -28886;
int32_t x294 = INT32_MIN;
int8_t x299 = -1;
uint32_t x306 = UINT32_MAX;
uint16_t x307 = UINT16_MAX;
volatile int32_t x322 = INT32_MIN;
uint64_t x323 = 16428186545890LLU;
static int16_t x324 = INT16_MIN;
int8_t x327 = 0;
static int32_t t72 = -963;
static volatile int32_t x330 = 8;
static volatile int32_t t73 = 1;
int16_t x337 = INT16_MAX;
static int8_t x340 = INT8_MIN;
uint16_t x347 = 9683U;
volatile int32_t t79 = 590834590;
int8_t x361 = INT8_MAX;
static uint8_t x364 = 13U;
volatile uint64_t x372 = UINT64_MAX;
volatile int32_t t83 = -304029;
int16_t x378 = INT16_MIN;
uint8_t x382 = 12U;
int16_t x386 = INT16_MIN;
static int32_t t87 = 170850;
volatile int32_t t88 = 13;
int32_t t92 = 311705;
uint8_t x424 = 124U;
int32_t t93 = 1960;
int32_t x425 = INT32_MIN;
int32_t t94 = 14242;
uint16_t x429 = 42U;
static int32_t x434 = INT32_MIN;
static int64_t x451 = INT64_MIN;
int64_t x461 = -9682291253LL;
int32_t x466 = -1;
int8_t x468 = -1;
int64_t x473 = 21LL;
int16_t x478 = INT16_MAX;
uint64_t x481 = UINT64_MAX;
uint8_t x482 = UINT8_MAX;
uint8_t x516 = 11U;
volatile int32_t t107 = 653576;
volatile int16_t x520 = INT16_MAX;
int64_t x523 = INT64_MAX;
uint32_t x533 = 1943396U;
uint16_t x534 = 7U;
int32_t x536 = INT32_MIN;
uint16_t x537 = 564U;
volatile uint16_t x538 = 1U;
volatile int8_t x540 = INT8_MIN;
static int32_t t113 = 4715153;
static int32_t x567 = 211;
int32_t x569 = INT32_MAX;
uint64_t x570 = UINT64_MAX;
static volatile int32_t x571 = INT32_MIN;
volatile uint8_t x582 = 7U;
int8_t x583 = INT8_MIN;
int32_t t120 = -233;
uint16_t x593 = 38U;
int8_t x597 = -1;
int16_t x600 = 130;
int32_t t123 = -242429697;
uint64_t x601 = 113973606LLU;
static int8_t x607 = -15;
volatile uint8_t x608 = 0U;
uint64_t x615 = 525144008618LLU;
int16_t x620 = INT16_MIN;
uint64_t x621 = UINT64_MAX;
int32_t t130 = -4437;
volatile int32_t t132 = -941239940;
static uint8_t x639 = 101U;
int16_t x642 = -4028;
int8_t x643 = -1;
volatile uint64_t x645 = 539374548458LLU;
uint8_t x649 = 15U;
volatile int32_t t136 = 807485737;
volatile int32_t x663 = INT32_MIN;
uint64_t x668 = UINT64_MAX;
int32_t x676 = 23;
volatile uint16_t x677 = 0U;
int16_t x680 = INT16_MIN;
int16_t x681 = 4788;
volatile int64_t x688 = INT64_MIN;
static int8_t x707 = INT8_MIN;
static int16_t x716 = INT16_MAX;
int32_t t150 = 452061385;
uint64_t x721 = 12LLU;
static uint16_t x732 = 354U;
int8_t x733 = -1;
int32_t x736 = INT32_MIN;
uint64_t x737 = 30749448923LLU;
volatile int32_t x739 = INT32_MIN;
int32_t t156 = 4965;
volatile int64_t x749 = -1LL;
int8_t x750 = INT8_MAX;
volatile int32_t t157 = 19;
int16_t x754 = INT16_MIN;
int16_t x757 = INT16_MIN;
uint32_t x763 = UINT32_MAX;
int64_t x775 = 48767761675144LL;
int32_t t163 = 949749404;
int32_t x794 = -1;
int64_t x804 = INT64_MAX;
uint16_t x805 = 10291U;
uint32_t x809 = 16705747U;
int8_t x812 = 0;
int32_t t170 = 3112;
static int16_t x823 = -4;
static volatile int64_t x846 = INT64_MAX;
volatile uint8_t x848 = UINT8_MAX;
static uint32_t x851 = 165827U;
volatile int32_t t176 = -79303474;
uint64_t x855 = 117179057LLU;
int8_t x856 = 0;
uint32_t x860 = 1U;
int32_t x864 = INT32_MIN;
uint8_t x869 = 0U;
int64_t x873 = -1LL;
uint16_t x874 = UINT16_MAX;
int8_t x876 = INT8_MAX;
int32_t x879 = -835518708;
uint8_t x886 = 64U;
int16_t x888 = INT16_MIN;
static int8_t x896 = -13;
int16_t x907 = -1;
int32_t x912 = -1;
volatile int32_t t189 = -88311;
int8_t x923 = INT8_MAX;
volatile int16_t x924 = INT16_MIN;
uint8_t x933 = 70U;
uint32_t x936 = 1874085U;
volatile uint64_t x939 = 439791447LLU;
volatile int32_t t194 = -1694955;
int16_t x951 = INT16_MIN;
int32_t t197 = 6;
static int32_t t198 = 4;
int8_t x962 = INT8_MAX;
int32_t x963 = -1;


void f0(void) {
    	static int8_t x1 = INT8_MIN;
	volatile int32_t x2 = INT32_MIN;
	int8_t x3 = 0;
	volatile int16_t x4 = INT16_MIN;
	volatile int32_t t0 = 0;

    t0 = (((x1-x2)-x3)<=x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = -33;
	int16_t x6 = INT16_MIN;
	int32_t x7 = INT32_MAX;
	int8_t x8 = INT8_MAX;
	int32_t t1 = -776;

    t1 = (((x5-x6)-x7)<=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MAX;
	volatile int16_t x11 = -1;
	static int32_t t2 = -3471;

    t2 = (((x9-x10)-x11)<=x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint64_t x13 = UINT64_MAX;
	uint8_t x14 = 21U;
	int64_t x15 = -1LL;
	static uint8_t x16 = UINT8_MAX;
	static int32_t t3 = -5401;

    t3 = (((x13-x14)-x15)<=x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MIN;
	static int64_t x18 = -1LL;
	uint32_t x19 = UINT32_MAX;
	int32_t x20 = INT32_MAX;
	volatile int32_t t4 = -509;

    t4 = (((x17-x18)-x19)<=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int32_t x21 = INT32_MIN;
	int16_t x22 = INT16_MIN;
	uint32_t x23 = 818405U;
	int32_t t5 = -3165;

    t5 = (((x21-x22)-x23)<=x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x29 = INT8_MIN;
	volatile int64_t x30 = INT64_MIN;
	int8_t x31 = 1;
	static int16_t x32 = -1;
	int32_t t6 = -1;

    t6 = (((x29-x30)-x31)<=x32);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x33 = INT16_MIN;
	int64_t x35 = 4277284578693049237LL;
	int64_t x36 = INT64_MAX;

    t7 = (((x33-x34)-x35)<=x36);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x41 = -1LL;
	uint64_t x42 = UINT64_MAX;
	static int16_t x43 = INT16_MIN;
	static volatile int32_t x44 = 504730598;
	int32_t t8 = -14485;

    t8 = (((x41-x42)-x43)<=x44);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x49 = 853328571LL;
	uint8_t x51 = UINT8_MAX;
	int64_t x52 = 0LL;
	int32_t t9 = 12;

    t9 = (((x49-x50)-x51)<=x52);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x53 = INT8_MIN;
	static int64_t x54 = -15153705160LL;
	int32_t x55 = -1;
	static int8_t x56 = INT8_MIN;

    t10 = (((x53-x54)-x55)<=x56);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint32_t x61 = 76633U;
	static volatile int8_t x64 = INT8_MIN;
	volatile int32_t t11 = -172;

    t11 = (((x61-x62)-x63)<=x64);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x65 = INT16_MIN;
	int16_t x66 = 17;
	volatile int32_t x67 = INT32_MIN;
	static int8_t x68 = INT8_MAX;

    t12 = (((x65-x66)-x67)<=x68);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x69 = UINT32_MAX;

    t13 = (((x69-x70)-x71)<=x72);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x74 = -14;
	volatile int16_t x75 = -15;
	int64_t x76 = INT64_MIN;
	volatile int32_t t14 = -223;

    t14 = (((x73-x74)-x75)<=x76);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x77 = 2;
	static int8_t x78 = INT8_MIN;
	int16_t x79 = INT16_MIN;
	int32_t x80 = INT32_MIN;
	volatile int32_t t15 = -13123266;

    t15 = (((x77-x78)-x79)<=x80);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x81 = INT16_MIN;
	int8_t x82 = -5;
	volatile uint8_t x83 = 20U;
	int16_t x84 = INT16_MAX;

    t16 = (((x81-x82)-x83)<=x84);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x85 = -1LL;
	static int32_t x86 = -414994011;
	volatile uint32_t x88 = 2U;
	static volatile int32_t t17 = 423946650;

    t17 = (((x85-x86)-x87)<=x88);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x90 = UINT64_MAX;

    t18 = (((x89-x90)-x91)<=x92);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int32_t x93 = INT32_MAX;
	volatile uint32_t x94 = 12332764U;
	int32_t x95 = INT32_MIN;
	static int8_t x96 = INT8_MIN;
	static volatile int32_t t19 = 30293;

    t19 = (((x93-x94)-x95)<=x96);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x101 = 1351933U;
	int16_t x102 = -3;
	int8_t x103 = INT8_MIN;
	int8_t x104 = -15;
	int32_t t20 = 773634;

    t20 = (((x101-x102)-x103)<=x104);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x106 = 4006961U;
	volatile int32_t t21 = -51421042;

    t21 = (((x105-x106)-x107)<=x108);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x109 = INT16_MIN;
	volatile int16_t x110 = -1;
	static volatile int8_t x112 = -7;
	int32_t t22 = -2340044;

    t22 = (((x109-x110)-x111)<=x112);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x114 = 3LL;
	int32_t x115 = INT32_MAX;
	static int32_t x116 = -1;
	int32_t t23 = 1006193190;

    t23 = (((x113-x114)-x115)<=x116);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x117 = INT8_MAX;
	int64_t x118 = INT64_MAX;
	int16_t x119 = INT16_MIN;
	static int16_t x120 = INT16_MIN;

    t24 = (((x117-x118)-x119)<=x120);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x121 = 103864LLU;
	static int32_t x122 = -7;
	uint8_t x123 = 12U;
	volatile int32_t t25 = 60099;

    t25 = (((x121-x122)-x123)<=x124);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x125 = 1;
	uint16_t x126 = 151U;
	volatile int8_t x127 = INT8_MIN;
	uint64_t x128 = 1673LLU;
	int32_t t26 = -20853170;

    t26 = (((x125-x126)-x127)<=x128);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x129 = 10U;
	int8_t x130 = -9;
	int8_t x132 = -30;
	volatile int32_t t27 = 3773170;

    t27 = (((x129-x130)-x131)<=x132);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x133 = -3;
	static int16_t x134 = INT16_MIN;
	int8_t x135 = INT8_MIN;
	volatile uint16_t x136 = 4881U;
	volatile int32_t t28 = 423867;

    t28 = (((x133-x134)-x135)<=x136);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x137 = -1;
	int8_t x138 = INT8_MIN;
	volatile uint32_t x139 = 55645U;
	volatile uint32_t x140 = UINT32_MAX;
	int32_t t29 = 11489;

    t29 = (((x137-x138)-x139)<=x140);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x141 = 221;
	int16_t x143 = INT16_MIN;
	int8_t x144 = -1;
	static int32_t t30 = 9;

    t30 = (((x141-x142)-x143)<=x144);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x145 = -1;
	static int32_t x146 = 128583;
	int8_t x148 = INT8_MIN;

    t31 = (((x145-x146)-x147)<=x148);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x149 = -84741LL;
	uint16_t x150 = 3U;
	static int32_t x151 = INT32_MIN;
	volatile int8_t x152 = INT8_MIN;
	int32_t t32 = -5;

    t32 = (((x149-x150)-x151)<=x152);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x153 = -866;
	int8_t x154 = INT8_MIN;
	uint8_t x155 = 38U;
	static int32_t t33 = 204139734;

    t33 = (((x153-x154)-x155)<=x156);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile uint32_t x157 = UINT32_MAX;
	int8_t x158 = INT8_MAX;
	int16_t x159 = -1;
	static int16_t x160 = 238;

    t34 = (((x157-x158)-x159)<=x160);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int64_t x161 = -2LL;
	int64_t x162 = 8277717025612819LL;
	static int8_t x163 = INT8_MIN;
	volatile int32_t t35 = 13389620;

    t35 = (((x161-x162)-x163)<=x164);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x165 = -1;
	int8_t x166 = -1;
	volatile int64_t x167 = -1LL;
	volatile int64_t x168 = -46717855067283257LL;

    t36 = (((x165-x166)-x167)<=x168);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x169 = INT8_MIN;
	int8_t x170 = -1;
	uint64_t x171 = 8259562252LLU;
	static volatile int32_t t37 = -69738302;

    t37 = (((x169-x170)-x171)<=x172);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x173 = INT16_MAX;
	int8_t x174 = INT8_MIN;
	uint8_t x175 = UINT8_MAX;
	int16_t x176 = INT16_MIN;
	volatile int32_t t38 = 413371;

    t38 = (((x173-x174)-x175)<=x176);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x178 = INT16_MAX;
	uint64_t x179 = 0LLU;
	volatile uint16_t x180 = 3U;
	int32_t t39 = -855149340;

    t39 = (((x177-x178)-x179)<=x180);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x183 = 5002U;
	uint8_t x184 = UINT8_MAX;
	static volatile int32_t t40 = 134390091;

    t40 = (((x181-x182)-x183)<=x184);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x185 = -1702;
	static volatile int32_t x186 = INT32_MIN;
	int32_t x188 = INT32_MAX;
	static volatile int32_t t41 = -151557033;

    t41 = (((x185-x186)-x187)<=x188);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x189 = -1LL;
	volatile int8_t x190 = INT8_MAX;
	static uint16_t x191 = 16315U;
	volatile int8_t x192 = 1;
	volatile int32_t t42 = -5562338;

    t42 = (((x189-x190)-x191)<=x192);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x193 = INT8_MIN;
	int16_t x194 = INT16_MIN;
	int64_t x195 = -1LL;
	uint64_t x196 = 776865LLU;
	volatile int32_t t43 = 21273535;

    t43 = (((x193-x194)-x195)<=x196);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x200 = INT32_MAX;
	int32_t t44 = -10659;

    t44 = (((x197-x198)-x199)<=x200);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x201 = INT8_MAX;
	int8_t x202 = -2;
	uint64_t x203 = 103086756LLU;
	uint16_t x204 = 7U;
	static int32_t t45 = -777499042;

    t45 = (((x201-x202)-x203)<=x204);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x205 = -515828;
	static volatile int16_t x208 = 154;
	volatile int32_t t46 = -193;

    t46 = (((x205-x206)-x207)<=x208);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x212 = 3;
	int32_t t47 = -440842119;

    t47 = (((x209-x210)-x211)<=x212);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x217 = INT8_MAX;
	static int16_t x218 = INT16_MIN;
	static uint64_t x219 = UINT64_MAX;
	int64_t x220 = -1203524320967LL;
	volatile int32_t t48 = 7627;

    t48 = (((x217-x218)-x219)<=x220);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x221 = -5652503177556LL;
	uint64_t x223 = 4090228902037912LLU;
	static int32_t x224 = -1;
	volatile int32_t t49 = -995;

    t49 = (((x221-x222)-x223)<=x224);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x226 = INT16_MAX;
	uint64_t x227 = UINT64_MAX;
	int16_t x228 = INT16_MIN;
	int32_t t50 = 1010500751;

    t50 = (((x225-x226)-x227)<=x228);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x229 = UINT8_MAX;
	static int32_t x230 = 1110540;
	int8_t x231 = INT8_MIN;
	uint64_t x232 = 963492971036307LLU;
	static volatile int32_t t51 = -13091090;

    t51 = (((x229-x230)-x231)<=x232);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x233 = INT8_MIN;
	static int8_t x234 = -1;
	static int32_t t52 = -3357;

    t52 = (((x233-x234)-x235)<=x236);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint64_t x241 = 4069257613449698LLU;
	uint64_t x242 = UINT64_MAX;
	int8_t x243 = -1;
	uint8_t x244 = UINT8_MAX;
	volatile int32_t t53 = 1126661;

    t53 = (((x241-x242)-x243)<=x244);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint32_t x245 = 58U;
	uint8_t x246 = UINT8_MAX;
	volatile uint64_t x247 = 14135405968LLU;
	int16_t x248 = INT16_MIN;
	volatile int32_t t54 = -57;

    t54 = (((x245-x246)-x247)<=x248);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x249 = 98274925U;
	int8_t x250 = INT8_MIN;
	int32_t t55 = -3;

    t55 = (((x249-x250)-x251)<=x252);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x253 = 1942254036861598LLU;
	int32_t x254 = INT32_MIN;
	volatile uint64_t x255 = 297488660LLU;
	int8_t x256 = 25;

    t56 = (((x253-x254)-x255)<=x256);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x257 = UINT32_MAX;
	uint8_t x258 = 6U;
	int16_t x259 = INT16_MIN;
	int64_t x260 = INT64_MIN;

    t57 = (((x257-x258)-x259)<=x260);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x263 = INT64_MIN;
	static int64_t x264 = -1839111LL;
	int32_t t58 = 1898;

    t58 = (((x261-x262)-x263)<=x264);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint8_t x266 = UINT8_MAX;
	volatile int32_t x267 = -1;
	static volatile int16_t x268 = -123;
	volatile int32_t t59 = -1860;

    t59 = (((x265-x266)-x267)<=x268);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x273 = 360320458676419126LL;
	int8_t x274 = 1;
	int32_t x275 = INT32_MIN;
	uint64_t x276 = 25440627382307LLU;
	volatile int32_t t60 = 0;

    t60 = (((x273-x274)-x275)<=x276);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x278 = -1064431417114216LL;
	volatile int64_t x279 = INT64_MAX;
	int64_t x280 = -1LL;
	volatile int32_t t61 = 137420;

    t61 = (((x277-x278)-x279)<=x280);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x281 = -5601835184LL;
	volatile int64_t x282 = INT64_MIN;
	static uint64_t x283 = 3088175736207LLU;
	int64_t x284 = INT64_MIN;

    t62 = (((x281-x282)-x283)<=x284);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x285 = -12;
	uint8_t x287 = 7U;
	int16_t x288 = INT16_MIN;

    t63 = (((x285-x286)-x287)<=x288);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x293 = INT8_MIN;
	volatile uint8_t x295 = 88U;
	uint64_t x296 = 1374120702272185090LLU;
	static int32_t t64 = -111224836;

    t64 = (((x293-x294)-x295)<=x296);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x297 = INT8_MAX;
	static volatile uint64_t x298 = 662666338437011LLU;
	int8_t x300 = 1;
	int32_t t65 = 868;

    t65 = (((x297-x298)-x299)<=x300);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x301 = INT16_MIN;
	volatile int32_t x302 = -20;
	int16_t x303 = INT16_MIN;
	int64_t x304 = INT64_MIN;
	static int32_t t66 = -16716621;

    t66 = (((x301-x302)-x303)<=x304);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x305 = INT8_MIN;
	uint32_t x308 = UINT32_MAX;
	volatile int32_t t67 = -12973742;

    t67 = (((x305-x306)-x307)<=x308);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x309 = 1989;
	uint64_t x310 = 31939592127776565LLU;
	int32_t x311 = 11;
	static int16_t x312 = -1;
	volatile int32_t t68 = 6869608;

    t68 = (((x309-x310)-x311)<=x312);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x313 = -1;
	volatile int8_t x314 = -12;
	int8_t x315 = INT8_MIN;
	int16_t x316 = 9;
	int32_t t69 = 24197;

    t69 = (((x313-x314)-x315)<=x316);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x317 = 1;
	static int32_t x318 = -8617703;
	volatile int8_t x319 = INT8_MAX;
	int32_t x320 = INT32_MAX;
	volatile int32_t t70 = -112360;

    t70 = (((x317-x318)-x319)<=x320);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x321 = -1;
	volatile int32_t t71 = 0;

    t71 = (((x321-x322)-x323)<=x324);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x325 = INT32_MIN;
	int16_t x326 = INT16_MIN;
	static uint16_t x328 = UINT16_MAX;

    t72 = (((x325-x326)-x327)<=x328);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x329 = UINT8_MAX;
	uint32_t x331 = UINT32_MAX;
	int8_t x332 = 0;

    t73 = (((x329-x330)-x331)<=x332);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x333 = INT64_MIN;
	int8_t x334 = -1;
	int8_t x335 = INT8_MIN;
	volatile uint16_t x336 = 1048U;
	int32_t t74 = -92;

    t74 = (((x333-x334)-x335)<=x336);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x338 = -1;
	uint32_t x339 = 284994U;
	int32_t t75 = 1014047881;

    t75 = (((x337-x338)-x339)<=x340);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x341 = INT8_MIN;
	static int64_t x342 = -1LL;
	int8_t x343 = INT8_MAX;
	volatile int32_t x344 = -1;
	int32_t t76 = 0;

    t76 = (((x341-x342)-x343)<=x344);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x345 = -1;
	uint64_t x346 = 417969499LLU;
	int16_t x348 = INT16_MIN;
	volatile int32_t t77 = 19012239;

    t77 = (((x345-x346)-x347)<=x348);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x349 = -1LL;
	volatile int32_t x350 = -1;
	uint32_t x351 = UINT32_MAX;
	int8_t x352 = INT8_MIN;
	volatile int32_t t78 = 301;

    t78 = (((x349-x350)-x351)<=x352);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x353 = 13U;
	uint8_t x354 = 92U;
	int64_t x355 = -1LL;
	int8_t x356 = INT8_MAX;

    t79 = (((x353-x354)-x355)<=x356);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x357 = 130801907246423LL;
	uint8_t x358 = UINT8_MAX;
	volatile int32_t x359 = 964207;
	int32_t x360 = -1;
	int32_t t80 = -55783481;

    t80 = (((x357-x358)-x359)<=x360);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x362 = UINT64_MAX;
	int64_t x363 = -1815497920818549LL;
	volatile int32_t t81 = -1;

    t81 = (((x361-x362)-x363)<=x364);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x365 = INT16_MAX;
	static int64_t x366 = INT64_MAX;
	volatile int32_t x367 = -13;
	volatile uint16_t x368 = 18U;
	int32_t t82 = -59452342;

    t82 = (((x365-x366)-x367)<=x368);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x369 = -1;
	int16_t x370 = -1;
	volatile int16_t x371 = INT16_MIN;

    t83 = (((x369-x370)-x371)<=x372);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x373 = 19;
	int8_t x374 = INT8_MIN;
	int8_t x375 = -1;
	int64_t x376 = INT64_MIN;
	int32_t t84 = 0;

    t84 = (((x373-x374)-x375)<=x376);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x377 = 9489LLU;
	volatile uint32_t x379 = UINT32_MAX;
	int16_t x380 = INT16_MIN;
	int32_t t85 = 90;

    t85 = (((x377-x378)-x379)<=x380);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x381 = -8;
	uint16_t x383 = 2688U;
	int8_t x384 = INT8_MIN;
	int32_t t86 = -16004;

    t86 = (((x381-x382)-x383)<=x384);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x385 = INT8_MIN;
	volatile int32_t x387 = INT32_MAX;
	static int32_t x388 = -1;

    t87 = (((x385-x386)-x387)<=x388);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x389 = -1;
	int64_t x390 = INT64_MIN;
	uint64_t x391 = 473LLU;
	static volatile int64_t x392 = INT64_MIN;

    t88 = (((x389-x390)-x391)<=x392);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x393 = UINT8_MAX;
	static uint64_t x394 = UINT64_MAX;
	int32_t x395 = INT32_MAX;
	uint8_t x396 = 0U;
	volatile int32_t t89 = 347;

    t89 = (((x393-x394)-x395)<=x396);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x401 = 1;
	static uint16_t x402 = 240U;
	int64_t x403 = -4365936513924LL;
	volatile int64_t x404 = INT64_MAX;
	volatile int32_t t90 = 8343;

    t90 = (((x401-x402)-x403)<=x404);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x409 = INT16_MAX;
	int64_t x410 = -1LL;
	int16_t x411 = -1774;
	uint16_t x412 = UINT16_MAX;
	volatile int32_t t91 = 6481;

    t91 = (((x409-x410)-x411)<=x412);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x417 = 3169;
	int64_t x418 = -170738218810319318LL;
	int8_t x419 = INT8_MIN;
	static int64_t x420 = -39932519967LL;

    t92 = (((x417-x418)-x419)<=x420);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x421 = 59;
	static int32_t x422 = 3766310;
	int64_t x423 = -1LL;

    t93 = (((x421-x422)-x423)<=x424);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int32_t x426 = -294;
	volatile uint32_t x427 = 31833U;
	int32_t x428 = INT32_MIN;

    t94 = (((x425-x426)-x427)<=x428);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x430 = UINT8_MAX;
	int64_t x431 = -52LL;
	uint32_t x432 = 1U;
	int32_t t95 = -19;

    t95 = (((x429-x430)-x431)<=x432);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x433 = INT16_MIN;
	static int16_t x435 = 1;
	int32_t x436 = -11297;
	int32_t t96 = 26235;

    t96 = (((x433-x434)-x435)<=x436);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x441 = INT64_MIN;
	static int64_t x442 = INT64_MIN;
	int16_t x443 = 6;
	uint8_t x444 = 13U;
	static volatile int32_t t97 = 35;

    t97 = (((x441-x442)-x443)<=x444);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x449 = -63879245;
	static int8_t x450 = INT8_MAX;
	int16_t x452 = INT16_MIN;
	int32_t t98 = 371715758;

    t98 = (((x449-x450)-x451)<=x452);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint64_t x457 = UINT64_MAX;
	int16_t x458 = INT16_MIN;
	uint32_t x459 = 12582723U;
	volatile uint8_t x460 = 1U;
	volatile int32_t t99 = 694;

    t99 = (((x457-x458)-x459)<=x460);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x462 = 0;
	static uint64_t x463 = UINT64_MAX;
	uint32_t x464 = UINT32_MAX;
	volatile int32_t t100 = 259608;

    t100 = (((x461-x462)-x463)<=x464);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x465 = -1LL;
	int8_t x467 = INT8_MIN;
	static int32_t t101 = -1278;

    t101 = (((x465-x466)-x467)<=x468);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x474 = -1;
	int16_t x475 = -1;
	static int32_t x476 = 51689198;
	volatile int32_t t102 = 7594;

    t102 = (((x473-x474)-x475)<=x476);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x477 = UINT32_MAX;
	volatile uint16_t x479 = UINT16_MAX;
	uint64_t x480 = 5296LLU;
	static volatile int32_t t103 = 1;

    t103 = (((x477-x478)-x479)<=x480);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x483 = INT64_MAX;
	volatile int8_t x484 = -1;
	volatile int32_t t104 = -246791;

    t104 = (((x481-x482)-x483)<=x484);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x489 = INT8_MIN;
	uint32_t x490 = 4U;
	int16_t x491 = INT16_MIN;
	int16_t x492 = INT16_MIN;
	volatile int32_t t105 = -118644981;

    t105 = (((x489-x490)-x491)<=x492);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x501 = INT8_MIN;
	int32_t x502 = INT32_MIN;
	int64_t x503 = -1LL;
	uint8_t x504 = 11U;
	int32_t t106 = 992438;

    t106 = (((x501-x502)-x503)<=x504);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x513 = 47;
	int64_t x514 = -17086996997LL;
	static volatile int8_t x515 = INT8_MIN;

    t107 = (((x513-x514)-x515)<=x516);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x517 = 23;
	int8_t x518 = -1;
	static uint32_t x519 = 309888562U;
	int32_t t108 = -103230327;

    t108 = (((x517-x518)-x519)<=x520);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x521 = UINT64_MAX;
	static volatile uint32_t x522 = UINT32_MAX;
	volatile int16_t x524 = 4281;
	int32_t t109 = 1;

    t109 = (((x521-x522)-x523)<=x524);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x529 = INT8_MIN;
	uint32_t x530 = UINT32_MAX;
	int16_t x531 = INT16_MIN;
	int8_t x532 = INT8_MIN;
	volatile int32_t t110 = -227128528;

    t110 = (((x529-x530)-x531)<=x532);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x535 = INT32_MIN;
	int32_t t111 = -12268;

    t111 = (((x533-x534)-x535)<=x536);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x539 = 2LLU;
	int32_t t112 = -4527185;

    t112 = (((x537-x538)-x539)<=x540);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x541 = INT16_MIN;
	static int64_t x542 = -2425048188334LL;
	int8_t x543 = -1;
	int8_t x544 = -1;

    t113 = (((x541-x542)-x543)<=x544);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x557 = -1;
	int8_t x558 = INT8_MAX;
	int64_t x559 = -114124572993416LL;
	volatile int8_t x560 = 0;
	int32_t t114 = 1;

    t114 = (((x557-x558)-x559)<=x560);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x561 = 7U;
	int64_t x562 = 225LL;
	uint64_t x563 = 6326686LLU;
	uint8_t x564 = UINT8_MAX;
	static volatile int32_t t115 = -21;

    t115 = (((x561-x562)-x563)<=x564);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x565 = 2231165U;
	volatile uint16_t x566 = UINT16_MAX;
	static uint16_t x568 = 1636U;
	int32_t t116 = -14026;

    t116 = (((x565-x566)-x567)<=x568);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x572 = INT8_MIN;
	int32_t t117 = 300398;

    t117 = (((x569-x570)-x571)<=x572);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x573 = -219;
	int64_t x574 = INT64_MIN;
	uint8_t x575 = UINT8_MAX;
	int8_t x576 = INT8_MIN;
	int32_t t118 = 168631002;

    t118 = (((x573-x574)-x575)<=x576);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x577 = -63682128316LL;
	int64_t x578 = -4676982180547LL;
	uint32_t x579 = 1071429806U;
	uint64_t x580 = 83548400021974679LLU;
	volatile int32_t t119 = -16055773;

    t119 = (((x577-x578)-x579)<=x580);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int32_t x581 = -25;
	int16_t x584 = 1;

    t120 = (((x581-x582)-x583)<=x584);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x585 = -1;
	volatile uint8_t x586 = 26U;
	static int32_t x587 = -22198698;
	uint8_t x588 = UINT8_MAX;
	volatile int32_t t121 = -3486;

    t121 = (((x585-x586)-x587)<=x588);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x594 = -61;
	int16_t x595 = -6;
	int8_t x596 = INT8_MAX;
	int32_t t122 = 719;

    t122 = (((x593-x594)-x595)<=x596);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x598 = INT64_MIN;
	volatile uint32_t x599 = 42U;

    t123 = (((x597-x598)-x599)<=x600);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile uint8_t x602 = UINT8_MAX;
	uint32_t x603 = UINT32_MAX;
	int32_t x604 = 1052230;
	int32_t t124 = 692854;

    t124 = (((x601-x602)-x603)<=x604);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x605 = INT16_MAX;
	static int32_t x606 = 0;
	int32_t t125 = 14591;

    t125 = (((x605-x606)-x607)<=x608);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint8_t x609 = UINT8_MAX;
	volatile uint32_t x610 = 10U;
	static volatile int64_t x611 = 1LL;
	int64_t x612 = 61LL;
	int32_t t126 = -75767;

    t126 = (((x609-x610)-x611)<=x612);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x613 = 190866LL;
	int16_t x614 = INT16_MIN;
	uint32_t x616 = 19004751U;
	int32_t t127 = 30975;

    t127 = (((x613-x614)-x615)<=x616);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x617 = -1;
	uint8_t x618 = 4U;
	int32_t x619 = INT32_MIN;
	static int32_t t128 = 188;

    t128 = (((x617-x618)-x619)<=x620);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x622 = INT32_MAX;
	volatile uint8_t x623 = UINT8_MAX;
	volatile int64_t x624 = 3269LL;
	volatile int32_t t129 = -475185654;

    t129 = (((x621-x622)-x623)<=x624);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x625 = INT16_MIN;
	int32_t x626 = 106;
	int16_t x627 = INT16_MIN;
	int64_t x628 = -6845190244871873LL;

    t130 = (((x625-x626)-x627)<=x628);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x629 = INT8_MIN;
	volatile int8_t x630 = INT8_MAX;
	volatile uint64_t x631 = 41LLU;
	int32_t x632 = INT32_MIN;
	int32_t t131 = -588;

    t131 = (((x629-x630)-x631)<=x632);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x633 = -1;
	static uint32_t x634 = 54U;
	volatile uint32_t x635 = 32023U;
	volatile uint16_t x636 = UINT16_MAX;

    t132 = (((x633-x634)-x635)<=x636);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x637 = -11586;
	int32_t x638 = INT32_MIN;
	int32_t x640 = INT32_MAX;
	static int32_t t133 = -60121110;

    t133 = (((x637-x638)-x639)<=x640);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x641 = UINT8_MAX;
	int64_t x644 = -1LL;
	volatile int32_t t134 = 189751;

    t134 = (((x641-x642)-x643)<=x644);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x646 = UINT16_MAX;
	int8_t x647 = INT8_MIN;
	static uint64_t x648 = 3305746971LLU;
	int32_t t135 = -1640;

    t135 = (((x645-x646)-x647)<=x648);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x650 = INT16_MAX;
	volatile int16_t x651 = 1991;
	uint8_t x652 = UINT8_MAX;

    t136 = (((x649-x650)-x651)<=x652);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x653 = 1;
	int8_t x654 = INT8_MIN;
	int16_t x655 = INT16_MAX;
	int64_t x656 = INT64_MIN;
	volatile int32_t t137 = 3937749;

    t137 = (((x653-x654)-x655)<=x656);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x661 = -1LL;
	int64_t x662 = -1LL;
	static uint32_t x664 = 126U;
	static int32_t t138 = -5382567;

    t138 = (((x661-x662)-x663)<=x664);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x665 = 4U;
	static uint16_t x666 = 1200U;
	uint64_t x667 = 9217399425090938LLU;
	int32_t t139 = -844989;

    t139 = (((x665-x666)-x667)<=x668);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x669 = 8807051651743LL;
	uint64_t x670 = UINT64_MAX;
	volatile int32_t x671 = INT32_MIN;
	volatile uint16_t x672 = 0U;
	int32_t t140 = -5098467;

    t140 = (((x669-x670)-x671)<=x672);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x673 = 1;
	volatile int16_t x674 = -1;
	volatile int64_t x675 = INT64_MAX;
	int32_t t141 = -47018448;

    t141 = (((x673-x674)-x675)<=x676);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x678 = 13700U;
	int16_t x679 = 21;
	static int32_t t142 = 14999;

    t142 = (((x677-x678)-x679)<=x680);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x682 = 661131;
	uint8_t x683 = UINT8_MAX;
	int8_t x684 = -1;
	int32_t t143 = -447115;

    t143 = (((x681-x682)-x683)<=x684);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x685 = -1LL;
	int16_t x686 = 78;
	uint64_t x687 = 969706372034674LLU;
	int32_t t144 = 1466;

    t144 = (((x685-x686)-x687)<=x688);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x689 = INT32_MIN;
	int16_t x690 = -1;
	volatile uint64_t x691 = 2278LLU;
	uint32_t x692 = UINT32_MAX;
	static volatile int32_t t145 = 62396638;

    t145 = (((x689-x690)-x691)<=x692);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x693 = INT8_MIN;
	int16_t x694 = INT16_MIN;
	volatile uint8_t x695 = 57U;
	int16_t x696 = INT16_MAX;
	static int32_t t146 = 40006;

    t146 = (((x693-x694)-x695)<=x696);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x701 = -1LL;
	static int64_t x702 = INT64_MAX;
	int32_t x703 = INT32_MIN;
	static uint16_t x704 = 4U;
	int32_t t147 = -18917894;

    t147 = (((x701-x702)-x703)<=x704);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint8_t x705 = 4U;
	static int8_t x706 = -1;
	int16_t x708 = -5547;
	volatile int32_t t148 = 390;

    t148 = (((x705-x706)-x707)<=x708);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x709 = 579U;
	int64_t x710 = 543673LL;
	int16_t x711 = INT16_MIN;
	int8_t x712 = -52;
	volatile int32_t t149 = -37;

    t149 = (((x709-x710)-x711)<=x712);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x713 = 25;
	int64_t x714 = 1LL;
	int16_t x715 = INT16_MIN;

    t150 = (((x713-x714)-x715)<=x716);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x722 = UINT64_MAX;
	uint64_t x723 = 319LLU;
	uint16_t x724 = 125U;
	volatile int32_t t151 = 132339290;

    t151 = (((x721-x722)-x723)<=x724);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x729 = 15U;
	int32_t x730 = INT32_MIN;
	int32_t x731 = INT32_MAX;
	volatile int32_t t152 = -956284722;

    t152 = (((x729-x730)-x731)<=x732);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x734 = -1;
	int16_t x735 = -22;
	static volatile int32_t t153 = -366093;

    t153 = (((x733-x734)-x735)<=x736);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x738 = INT16_MAX;
	volatile int16_t x740 = INT16_MIN;
	volatile int32_t t154 = 338483940;

    t154 = (((x737-x738)-x739)<=x740);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x741 = 2;
	int8_t x742 = 0;
	volatile int8_t x743 = INT8_MIN;
	int16_t x744 = INT16_MIN;
	volatile int32_t t155 = 987772645;

    t155 = (((x741-x742)-x743)<=x744);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x745 = 14U;
	static int32_t x746 = INT32_MAX;
	uint64_t x747 = UINT64_MAX;
	volatile int32_t x748 = INT32_MIN;

    t156 = (((x745-x746)-x747)<=x748);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x751 = INT16_MIN;
	uint8_t x752 = UINT8_MAX;

    t157 = (((x749-x750)-x751)<=x752);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x753 = -838;
	volatile int32_t x755 = -54283929;
	static uint32_t x756 = 846U;
	volatile int32_t t158 = 3908299;

    t158 = (((x753-x754)-x755)<=x756);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x758 = -5;
	uint64_t x759 = UINT64_MAX;
	int32_t x760 = 2683603;
	static volatile int32_t t159 = 154056282;

    t159 = (((x757-x758)-x759)<=x760);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x761 = 0U;
	static int16_t x762 = INT16_MAX;
	int64_t x764 = -44032LL;
	volatile int32_t t160 = -2638564;

    t160 = (((x761-x762)-x763)<=x764);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x765 = UINT8_MAX;
	static volatile int64_t x766 = INT64_MAX;
	int32_t x767 = -1;
	uint8_t x768 = 108U;
	volatile int32_t t161 = -52;

    t161 = (((x765-x766)-x767)<=x768);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x773 = -3;
	volatile int16_t x774 = INT16_MIN;
	int8_t x776 = INT8_MAX;
	volatile int32_t t162 = 104;

    t162 = (((x773-x774)-x775)<=x776);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x777 = -12;
	int32_t x778 = -1;
	static int32_t x779 = INT32_MIN;
	int64_t x780 = INT64_MIN;

    t163 = (((x777-x778)-x779)<=x780);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x781 = INT8_MAX;
	volatile uint32_t x782 = UINT32_MAX;
	volatile int8_t x783 = INT8_MIN;
	uint16_t x784 = 0U;
	int32_t t164 = -4274;

    t164 = (((x781-x782)-x783)<=x784);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x785 = -251;
	int32_t x786 = 1;
	int16_t x787 = -1;
	uint64_t x788 = 163520LLU;
	static volatile int32_t t165 = -609785864;

    t165 = (((x785-x786)-x787)<=x788);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x789 = INT64_MAX;
	uint32_t x790 = UINT32_MAX;
	int8_t x791 = 0;
	uint64_t x792 = 18LLU;
	volatile int32_t t166 = -8314655;

    t166 = (((x789-x790)-x791)<=x792);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x793 = -1;
	int16_t x795 = INT16_MIN;
	int16_t x796 = -1299;
	static volatile int32_t t167 = -377483795;

    t167 = (((x793-x794)-x795)<=x796);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x801 = 2U;
	uint16_t x802 = 500U;
	int16_t x803 = INT16_MIN;
	int32_t t168 = 1;

    t168 = (((x801-x802)-x803)<=x804);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x806 = -1;
	int64_t x807 = -1LL;
	uint8_t x808 = 7U;
	int32_t t169 = 105497;

    t169 = (((x805-x806)-x807)<=x808);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x810 = 113LLU;
	int8_t x811 = INT8_MAX;

    t170 = (((x809-x810)-x811)<=x812);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x813 = 7576283866121778477LLU;
	int8_t x814 = -48;
	int64_t x815 = INT64_MIN;
	int8_t x816 = 45;
	volatile int32_t t171 = -3;

    t171 = (((x813-x814)-x815)<=x816);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x817 = INT64_MIN;
	static int64_t x818 = -1LL;
	uint64_t x819 = 100952848582LLU;
	int16_t x820 = -577;
	volatile int32_t t172 = -12629;

    t172 = (((x817-x818)-x819)<=x820);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x821 = UINT8_MAX;
	static int8_t x822 = 54;
	int32_t x824 = INT32_MIN;
	static volatile int32_t t173 = 2;

    t173 = (((x821-x822)-x823)<=x824);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x825 = -1;
	int8_t x826 = 2;
	uint64_t x827 = 4345074364LLU;
	uint64_t x828 = 409821905995269LLU;
	volatile int32_t t174 = 25853;

    t174 = (((x825-x826)-x827)<=x828);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x845 = INT32_MAX;
	int8_t x847 = INT8_MIN;
	int32_t t175 = -19579;

    t175 = (((x845-x846)-x847)<=x848);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x849 = 14U;
	uint8_t x850 = 102U;
	int32_t x852 = 9701412;

    t176 = (((x849-x850)-x851)<=x852);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x853 = 3145104LLU;
	static volatile int32_t x854 = INT32_MIN;
	int32_t t177 = 48;

    t177 = (((x853-x854)-x855)<=x856);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x857 = UINT64_MAX;
	uint8_t x858 = 16U;
	int32_t x859 = INT32_MIN;
	volatile int32_t t178 = -1497777;

    t178 = (((x857-x858)-x859)<=x860);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x861 = 466LL;
	int8_t x862 = -1;
	static int16_t x863 = INT16_MIN;
	int32_t t179 = 63367790;

    t179 = (((x861-x862)-x863)<=x864);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x870 = 0;
	int8_t x871 = -1;
	static int8_t x872 = -1;
	int32_t t180 = -335705026;

    t180 = (((x869-x870)-x871)<=x872);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x875 = 1803884428890LLU;
	volatile int32_t t181 = -258536;

    t181 = (((x873-x874)-x875)<=x876);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x877 = UINT16_MAX;
	static uint8_t x878 = UINT8_MAX;
	uint16_t x880 = 789U;
	int32_t t182 = 5;

    t182 = (((x877-x878)-x879)<=x880);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x881 = 82U;
	static int16_t x882 = INT16_MIN;
	int8_t x883 = INT8_MIN;
	volatile int32_t x884 = 12808;
	static int32_t t183 = -713;

    t183 = (((x881-x882)-x883)<=x884);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x885 = -11;
	volatile int16_t x887 = 0;
	int32_t t184 = 6104799;

    t184 = (((x885-x886)-x887)<=x888);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x889 = INT16_MIN;
	int16_t x890 = -4;
	volatile int32_t x891 = INT32_MIN;
	uint8_t x892 = 2U;
	volatile int32_t t185 = -1079513;

    t185 = (((x889-x890)-x891)<=x892);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x893 = 44U;
	int8_t x894 = INT8_MIN;
	int8_t x895 = INT8_MIN;
	volatile int32_t t186 = 234034;

    t186 = (((x893-x894)-x895)<=x896);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x901 = INT16_MIN;
	int8_t x902 = -3;
	int8_t x903 = INT8_MAX;
	int8_t x904 = INT8_MAX;
	static volatile int32_t t187 = -955866;

    t187 = (((x901-x902)-x903)<=x904);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x905 = -1LL;
	uint32_t x906 = 112U;
	static int32_t x908 = INT32_MIN;
	int32_t t188 = 1;

    t188 = (((x905-x906)-x907)<=x908);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x909 = INT8_MIN;
	int8_t x910 = 0;
	static int16_t x911 = INT16_MIN;

    t189 = (((x909-x910)-x911)<=x912);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int16_t x917 = INT16_MIN;
	static uint16_t x918 = 235U;
	int64_t x919 = -1LL;
	static int64_t x920 = 120561LL;
	volatile int32_t t190 = 2;

    t190 = (((x917-x918)-x919)<=x920);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint16_t x921 = 4047U;
	static int8_t x922 = INT8_MIN;
	int32_t t191 = -12205;

    t191 = (((x921-x922)-x923)<=x924);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x929 = INT16_MIN;
	int8_t x930 = INT8_MIN;
	uint32_t x931 = 6477516U;
	int16_t x932 = INT16_MIN;
	static int32_t t192 = 62273;

    t192 = (((x929-x930)-x931)<=x932);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x934 = -1LL;
	volatile int32_t x935 = INT32_MIN;
	int32_t t193 = 3;

    t193 = (((x933-x934)-x935)<=x936);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint8_t x937 = 8U;
	static int32_t x938 = 10;
	int64_t x940 = INT64_MIN;

    t194 = (((x937-x938)-x939)<=x940);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x945 = 80;
	uint8_t x946 = 1U;
	int16_t x947 = INT16_MIN;
	int16_t x948 = INT16_MIN;
	int32_t t195 = -1;

    t195 = (((x945-x946)-x947)<=x948);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile uint8_t x949 = 2U;
	volatile int16_t x950 = -203;
	int8_t x952 = -1;
	int32_t t196 = 27422403;

    t196 = (((x949-x950)-x951)<=x952);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile uint16_t x953 = UINT16_MAX;
	volatile int32_t x954 = -224;
	static int16_t x955 = -45;
	static volatile int16_t x956 = INT16_MIN;

    t197 = (((x953-x954)-x955)<=x956);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x957 = 2434U;
	uint16_t x958 = 888U;
	static int32_t x959 = INT32_MAX;
	volatile uint16_t x960 = 63U;

    t198 = (((x957-x958)-x959)<=x960);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint16_t x961 = UINT16_MAX;
	int16_t x964 = -1123;
	int32_t t199 = -62;

    t199 = (((x961-x962)-x963)<=x964);

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


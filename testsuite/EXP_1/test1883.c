
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

static volatile int64_t x1 = INT64_MIN;
int8_t x10 = INT8_MIN;
int32_t x11 = 382;
int32_t x13 = -75634850;
int64_t x16 = INT64_MAX;
int32_t t3 = -1437784;
uint8_t x17 = 0U;
int32_t x22 = -6687;
static int32_t x23 = 0;
uint16_t x26 = UINT16_MAX;
static volatile int8_t x28 = -3;
uint32_t x33 = 27U;
static volatile int32_t x34 = INT32_MIN;
uint64_t x37 = 8031971252463320LLU;
static int32_t t9 = -784;
volatile int32_t t10 = 952;
volatile uint32_t x45 = 320U;
static volatile int32_t t11 = 1270;
int32_t t12 = 86388259;
uint8_t x60 = 14U;
int64_t x70 = INT64_MAX;
static int32_t x78 = INT32_MIN;
volatile int32_t t19 = 171407;
static volatile int8_t x83 = INT8_MIN;
static volatile int16_t x85 = INT16_MIN;
static volatile int16_t x91 = -1;
int32_t t22 = -2633716;
volatile uint64_t x99 = 1509LLU;
int32_t t25 = 2726;
volatile int32_t x114 = INT32_MIN;
uint64_t x116 = 5186947822LLU;
static int16_t x120 = INT16_MIN;
int32_t t29 = -784774;
uint64_t x123 = 918499812373118245LLU;
int32_t t32 = -284245;
volatile int32_t t33 = -26;
uint32_t x148 = UINT32_MAX;
volatile int32_t t36 = -189247511;
static volatile int32_t t37 = -1;
uint64_t x165 = 2031564LLU;
volatile int32_t t41 = -13;
static uint8_t x177 = 27U;
int8_t x178 = INT8_MIN;
volatile int16_t x180 = -1;
static int8_t x184 = INT8_MIN;
int32_t x188 = INT32_MIN;
static int32_t t46 = -236262;
static volatile uint8_t x189 = 8U;
static volatile int32_t t48 = -39785480;
volatile int64_t x199 = -1LL;
volatile int32_t t49 = -2592;
int32_t t50 = 5741;
int8_t x219 = INT8_MAX;
static volatile int32_t t54 = -79248734;
uint16_t x221 = 12U;
uint32_t x222 = 172463870U;
uint64_t x229 = 580207275972741280LLU;
int8_t x233 = INT8_MIN;
int32_t x236 = INT32_MIN;
int16_t x239 = INT16_MIN;
volatile int32_t t59 = -259031;
static volatile uint64_t x247 = UINT64_MAX;
volatile int64_t x251 = INT64_MIN;
volatile int32_t t62 = 2012023;
int16_t x253 = -422;
int16_t x269 = INT16_MAX;
int32_t x271 = INT32_MIN;
uint16_t x277 = 671U;
volatile int64_t x280 = -1273LL;
int16_t x287 = INT16_MAX;
uint64_t x288 = 2954317549LLU;
volatile int32_t t71 = 214;
static int8_t x290 = -1;
uint16_t x293 = 31U;
uint16_t x298 = 109U;
int32_t x302 = -1;
int8_t x305 = -1;
int64_t x310 = INT64_MAX;
static int16_t x311 = INT16_MIN;
uint16_t x318 = UINT16_MAX;
volatile int8_t x321 = 3;
int32_t x322 = 1;
volatile int16_t x339 = INT16_MIN;
int32_t t84 = 3715;
int64_t x343 = INT64_MIN;
static uint64_t x345 = UINT64_MAX;
int8_t x348 = -1;
int64_t x353 = -1LL;
int32_t x356 = INT32_MIN;
int32_t x367 = -117947;
int8_t x379 = INT8_MIN;
uint32_t x384 = UINT32_MAX;
volatile int32_t t95 = 144492;
int64_t x394 = INT64_MIN;
int16_t x397 = 1;
volatile int16_t x405 = INT16_MAX;
int32_t x407 = -224;
volatile int32_t t101 = 7;
uint16_t x409 = 1827U;
volatile int16_t x411 = 9;
static volatile int32_t t102 = -123;
int16_t x416 = 0;
volatile uint64_t x419 = 25939LLU;
int16_t x420 = INT16_MIN;
volatile uint32_t x426 = 1U;
int64_t x436 = INT64_MIN;
static int32_t t111 = 1;
int32_t x449 = INT32_MAX;
int8_t x452 = INT8_MAX;
int32_t t112 = -2;
volatile int32_t t113 = -827376741;
volatile int32_t x468 = -1;
static volatile int32_t t117 = 54287;
int64_t x479 = -24987LL;
volatile int32_t t119 = -191895;
static int8_t x487 = -1;
volatile uint8_t x491 = 4U;
int16_t x500 = -91;
int32_t x504 = INT32_MAX;
volatile int32_t t126 = 26;
static volatile uint16_t x509 = 1496U;
static int64_t x511 = -7390683LL;
uint64_t x515 = 7979495329265LLU;
int32_t x516 = INT32_MAX;
int8_t x517 = -3;
int8_t x523 = -1;
int16_t x527 = -1;
volatile uint16_t x532 = 506U;
static volatile int16_t x539 = INT16_MAX;
uint64_t x540 = UINT64_MAX;
uint8_t x541 = 47U;
uint32_t x549 = 1298934179U;
uint32_t x568 = 504U;
volatile int32_t t141 = -870683;
static volatile int16_t x570 = INT16_MAX;
uint8_t x573 = 19U;
static uint64_t x575 = 2887532877040816LLU;
static volatile int32_t t143 = 66411296;
uint32_t x582 = 1936570U;
static uint32_t x586 = UINT32_MAX;
int32_t x590 = INT32_MIN;
int16_t x591 = INT16_MAX;
static int64_t x592 = INT64_MIN;
static int16_t x595 = -76;
int8_t x598 = INT8_MIN;
volatile int32_t t149 = -295;
int32_t x604 = -20;
volatile int32_t t150 = -3600;
int8_t x607 = 0;
int8_t x608 = -1;
static uint16_t x619 = 2045U;
int32_t x625 = INT32_MIN;
int64_t x629 = -190LL;
uint32_t x633 = UINT32_MAX;
int16_t x644 = INT16_MIN;
uint64_t x645 = UINT64_MAX;
volatile uint16_t x648 = 2507U;
static volatile int32_t t161 = -45653;
int8_t x650 = -1;
int32_t x654 = -887870688;
int32_t t165 = 25;
int16_t x670 = INT16_MIN;
volatile uint64_t x671 = 15LLU;
int32_t x677 = -1;
int64_t x681 = -1LL;
uint16_t x688 = 4U;
static int32_t t173 = -418147854;
static int16_t x700 = INT16_MIN;
volatile int32_t x704 = -1;
int32_t t176 = 0;
int16_t x710 = -1;
int8_t x716 = INT8_MAX;
static volatile uint8_t x724 = UINT8_MAX;
int16_t x735 = INT16_MIN;
int64_t x736 = -1LL;
int32_t t183 = -101574;
static int64_t x737 = -1LL;
int8_t x738 = 26;
volatile int32_t t184 = -1017063;
int32_t x741 = -1;
volatile int32_t x744 = INT32_MAX;
int32_t t185 = -3;
int32_t x746 = 2959;
uint16_t x750 = 3U;
uint32_t x755 = 332868U;
int32_t x762 = INT32_MIN;
volatile int64_t x764 = 17137LL;
static volatile int64_t x769 = -1LL;
int8_t x779 = INT8_MIN;
int16_t x782 = INT16_MIN;
uint8_t x788 = UINT8_MAX;
volatile uint16_t x796 = 43U;
static int32_t x797 = -1;
uint32_t x798 = 76U;
int16_t x800 = INT16_MAX;
static volatile int32_t t199 = 338116411;


void f0(void) {
    	uint64_t x2 = UINT64_MAX;
	volatile uint8_t x3 = UINT8_MAX;
	int32_t x4 = -1;
	static volatile int32_t t0 = 0;

    t0 = (((x1<=x2)>x3)!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x5 = -1;
	int16_t x6 = INT16_MAX;
	uint64_t x7 = 2014354332232LLU;
	int8_t x8 = -1;
	volatile int32_t t1 = 684;

    t1 = (((x5<=x6)>x7)!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = UINT8_MAX;
	int16_t x12 = 4050;
	static int32_t t2 = 522599;

    t2 = (((x9<=x10)>x11)!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x14 = UINT16_MAX;
	static uint8_t x15 = UINT8_MAX;

    t3 = (((x13<=x14)>x15)!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x18 = 20U;
	uint8_t x19 = UINT8_MAX;
	uint8_t x20 = 12U;
	static volatile int32_t t4 = 49262;

    t4 = (((x17<=x18)>x19)!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = 1388866;
	int8_t x24 = -5;
	volatile int32_t t5 = 1169;

    t5 = (((x21<=x22)>x23)!=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint64_t x25 = UINT64_MAX;
	uint64_t x27 = 150LLU;
	volatile int32_t t6 = -16734;

    t6 = (((x25<=x26)>x27)!=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x29 = -61247182;
	int8_t x30 = -1;
	volatile uint32_t x31 = 40U;
	int8_t x32 = INT8_MIN;
	static volatile int32_t t7 = -12076557;

    t7 = (((x29<=x30)>x31)!=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x35 = 15456LLU;
	int16_t x36 = INT16_MIN;
	volatile int32_t t8 = 1;

    t8 = (((x33<=x34)>x35)!=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x38 = 15948U;
	uint16_t x39 = 3748U;
	int32_t x40 = INT32_MIN;

    t9 = (((x37<=x38)>x39)!=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = 12;
	static volatile int64_t x42 = INT64_MIN;
	int64_t x43 = INT64_MIN;
	int64_t x44 = INT64_MIN;

    t10 = (((x41<=x42)>x43)!=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x46 = INT32_MAX;
	int16_t x47 = INT16_MAX;
	int8_t x48 = -2;

    t11 = (((x45<=x46)>x47)!=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x49 = INT64_MIN;
	static volatile int16_t x50 = INT16_MIN;
	int16_t x51 = INT16_MAX;
	uint32_t x52 = 7U;

    t12 = (((x49<=x50)>x51)!=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x53 = INT16_MIN;
	int16_t x54 = 6;
	int64_t x55 = INT64_MAX;
	int64_t x56 = 53136211331192367LL;
	volatile int32_t t13 = -149;

    t13 = (((x53<=x54)>x55)!=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x57 = 71U;
	int16_t x58 = INT16_MIN;
	uint8_t x59 = UINT8_MAX;
	volatile int32_t t14 = -65646;

    t14 = (((x57<=x58)>x59)!=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = UINT32_MAX;
	volatile int8_t x62 = INT8_MIN;
	int32_t x63 = -1;
	int64_t x64 = 9583117LL;
	int32_t t15 = 3532825;

    t15 = (((x61<=x62)>x63)!=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = -1;
	int16_t x66 = -1;
	volatile int16_t x67 = -1;
	int8_t x68 = INT8_MIN;
	volatile int32_t t16 = -1;

    t16 = (((x65<=x66)>x67)!=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x69 = 171U;
	int64_t x71 = -12346892439142849LL;
	int8_t x72 = -1;
	volatile int32_t t17 = -187;

    t17 = (((x69<=x70)>x71)!=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x73 = INT8_MIN;
	volatile int16_t x74 = -1;
	uint64_t x75 = 10LLU;
	int32_t x76 = INT32_MAX;
	int32_t t18 = 43479;

    t18 = (((x73<=x74)>x75)!=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = INT32_MAX;
	static int64_t x79 = -1LL;
	volatile uint16_t x80 = UINT16_MAX;

    t19 = (((x77<=x78)>x79)!=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = INT16_MIN;
	volatile int64_t x82 = INT64_MAX;
	uint32_t x84 = UINT32_MAX;
	int32_t t20 = 0;

    t20 = (((x81<=x82)>x83)!=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x86 = INT32_MIN;
	uint64_t x87 = 1120380084330939362LLU;
	int8_t x88 = INT8_MIN;
	int32_t t21 = 432095805;

    t21 = (((x85<=x86)>x87)!=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = INT16_MAX;
	int32_t x90 = INT32_MAX;
	uint32_t x92 = 0U;

    t22 = (((x89<=x90)>x91)!=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = -1;
	int8_t x94 = INT8_MIN;
	int16_t x95 = -1;
	int64_t x96 = INT64_MIN;
	static int32_t t23 = -6796;

    t23 = (((x93<=x94)>x95)!=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = INT64_MAX;
	static volatile int32_t x98 = INT32_MAX;
	int16_t x100 = INT16_MAX;
	static volatile int32_t t24 = -5630631;

    t24 = (((x97<=x98)>x99)!=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int32_t x101 = INT32_MAX;
	volatile uint64_t x102 = 19698999256581739LLU;
	int16_t x103 = 7;
	static int64_t x104 = -1LL;

    t25 = (((x101<=x102)>x103)!=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x105 = UINT8_MAX;
	int16_t x106 = INT16_MAX;
	static volatile uint8_t x107 = UINT8_MAX;
	uint64_t x108 = UINT64_MAX;
	volatile int32_t t26 = -425966886;

    t26 = (((x105<=x106)>x107)!=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int8_t x109 = INT8_MIN;
	int64_t x110 = INT64_MAX;
	int32_t x111 = -1;
	uint32_t x112 = 3U;
	static int32_t t27 = -14702;

    t27 = (((x109<=x110)>x111)!=x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x113 = UINT16_MAX;
	int8_t x115 = INT8_MIN;
	int32_t t28 = 0;

    t28 = (((x113<=x114)>x115)!=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint16_t x117 = 21U;
	volatile int16_t x118 = INT16_MAX;
	static int8_t x119 = 7;

    t29 = (((x117<=x118)>x119)!=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x121 = UINT8_MAX;
	volatile uint32_t x122 = UINT32_MAX;
	static int8_t x124 = INT8_MIN;
	int32_t t30 = 97763;

    t30 = (((x121<=x122)>x123)!=x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x125 = 49720715;
	int64_t x126 = INT64_MAX;
	int64_t x127 = INT64_MAX;
	uint16_t x128 = 442U;
	static int32_t t31 = -1;

    t31 = (((x125<=x126)>x127)!=x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = -1LL;
	int32_t x130 = INT32_MIN;
	int16_t x131 = -2;
	volatile uint32_t x132 = 61842U;

    t32 = (((x129<=x130)>x131)!=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x133 = 4413802LL;
	uint32_t x134 = 43008U;
	int8_t x135 = INT8_MIN;
	static volatile uint32_t x136 = 96585208U;

    t33 = (((x133<=x134)>x135)!=x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x137 = 7U;
	static int8_t x138 = INT8_MIN;
	int32_t x139 = INT32_MIN;
	int32_t x140 = -1;
	static int32_t t34 = -46515340;

    t34 = (((x137<=x138)>x139)!=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x141 = 657786;
	uint64_t x142 = 493260781198066LLU;
	int8_t x143 = 1;
	volatile int8_t x144 = -1;
	static int32_t t35 = -13;

    t35 = (((x141<=x142)>x143)!=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x145 = UINT16_MAX;
	static uint8_t x146 = 51U;
	static int8_t x147 = 0;

    t36 = (((x145<=x146)>x147)!=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = INT8_MAX;
	uint64_t x150 = 85405839640370089LLU;
	static volatile uint32_t x151 = 5264U;
	int8_t x152 = INT8_MAX;

    t37 = (((x149<=x150)>x151)!=x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint8_t x153 = 45U;
	int64_t x154 = -1LL;
	int8_t x155 = INT8_MAX;
	int64_t x156 = -1LL;
	static volatile int32_t t38 = -146271710;

    t38 = (((x153<=x154)>x155)!=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x157 = UINT8_MAX;
	volatile uint8_t x158 = 0U;
	uint32_t x159 = 7161515U;
	volatile uint16_t x160 = 7762U;
	volatile int32_t t39 = -27;

    t39 = (((x157<=x158)>x159)!=x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x161 = INT32_MAX;
	int16_t x162 = INT16_MIN;
	static volatile uint64_t x163 = UINT64_MAX;
	static int16_t x164 = INT16_MIN;
	int32_t t40 = -479817;

    t40 = (((x161<=x162)>x163)!=x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x166 = 13;
	int32_t x167 = -1;
	int8_t x168 = INT8_MIN;

    t41 = (((x165<=x166)>x167)!=x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x169 = 3459U;
	static int8_t x170 = -1;
	static int32_t x171 = -80322;
	static int16_t x172 = 1859;
	static volatile int32_t t42 = -99;

    t42 = (((x169<=x170)>x171)!=x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x173 = INT32_MIN;
	static int64_t x174 = -385924876137288645LL;
	int32_t x175 = -9746;
	int8_t x176 = INT8_MAX;
	volatile int32_t t43 = 29730246;

    t43 = (((x173<=x174)>x175)!=x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x179 = UINT16_MAX;
	static volatile int32_t t44 = 252;

    t44 = (((x177<=x178)>x179)!=x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x181 = INT64_MIN;
	int16_t x182 = 294;
	int16_t x183 = INT16_MIN;
	volatile int32_t t45 = 1;

    t45 = (((x181<=x182)>x183)!=x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint8_t x185 = UINT8_MAX;
	volatile int8_t x186 = INT8_MIN;
	volatile uint16_t x187 = UINT16_MAX;

    t46 = (((x185<=x186)>x187)!=x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x190 = 125U;
	uint8_t x191 = 6U;
	uint16_t x192 = 2452U;
	volatile int32_t t47 = 8890749;

    t47 = (((x189<=x190)>x191)!=x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile uint8_t x193 = 6U;
	uint8_t x194 = UINT8_MAX;
	int8_t x195 = INT8_MIN;
	int32_t x196 = -2439461;

    t48 = (((x193<=x194)>x195)!=x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = -11201;
	uint16_t x198 = 1122U;
	volatile int64_t x200 = INT64_MIN;

    t49 = (((x197<=x198)>x199)!=x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x201 = -1;
	int8_t x202 = INT8_MAX;
	volatile int8_t x203 = INT8_MIN;
	int64_t x204 = INT64_MIN;

    t50 = (((x201<=x202)>x203)!=x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x205 = UINT8_MAX;
	uint32_t x206 = UINT32_MAX;
	int64_t x207 = -552861LL;
	uint32_t x208 = 64248U;
	static volatile int32_t t51 = 128122;

    t51 = (((x205<=x206)>x207)!=x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = 874;
	uint16_t x210 = 0U;
	uint8_t x211 = UINT8_MAX;
	int8_t x212 = -1;
	volatile int32_t t52 = -378903937;

    t52 = (((x209<=x210)>x211)!=x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x213 = 13027U;
	int32_t x214 = INT32_MIN;
	int64_t x215 = 22968188395LL;
	volatile int32_t x216 = INT32_MIN;
	int32_t t53 = 139;

    t53 = (((x213<=x214)>x215)!=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x217 = 48U;
	uint16_t x218 = 402U;
	int32_t x220 = INT32_MIN;

    t54 = (((x217<=x218)>x219)!=x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x223 = INT32_MIN;
	int32_t x224 = -1;
	static volatile int32_t t55 = 4316854;

    t55 = (((x221<=x222)>x223)!=x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x225 = INT8_MIN;
	uint8_t x226 = 40U;
	int16_t x227 = INT16_MIN;
	int16_t x228 = 0;
	int32_t t56 = -23;

    t56 = (((x225<=x226)>x227)!=x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x230 = INT64_MIN;
	uint8_t x231 = UINT8_MAX;
	static volatile uint16_t x232 = 975U;
	volatile int32_t t57 = 12;

    t57 = (((x229<=x230)>x231)!=x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x234 = 53U;
	uint32_t x235 = 59052U;
	volatile int32_t t58 = -134;

    t58 = (((x233<=x234)>x235)!=x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint16_t x237 = 8851U;
	int8_t x238 = INT8_MIN;
	int16_t x240 = INT16_MIN;

    t59 = (((x237<=x238)>x239)!=x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x241 = INT16_MIN;
	volatile uint64_t x242 = 28298347LLU;
	int64_t x243 = INT64_MIN;
	static int8_t x244 = -60;
	static int32_t t60 = 0;

    t60 = (((x241<=x242)>x243)!=x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = INT16_MIN;
	static int32_t x246 = 3;
	static uint32_t x248 = UINT32_MAX;
	int32_t t61 = 900449385;

    t61 = (((x245<=x246)>x247)!=x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = -35LL;
	static int16_t x250 = -1;
	int64_t x252 = 403LL;

    t62 = (((x249<=x250)>x251)!=x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x254 = 16037901LL;
	int8_t x255 = INT8_MIN;
	int16_t x256 = -788;
	int32_t t63 = -47;

    t63 = (((x253<=x254)>x255)!=x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x257 = -9022;
	int32_t x258 = INT32_MAX;
	static uint8_t x259 = UINT8_MAX;
	volatile uint32_t x260 = UINT32_MAX;
	static int32_t t64 = 638564444;

    t64 = (((x257<=x258)>x259)!=x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x261 = INT8_MAX;
	int8_t x262 = INT8_MIN;
	int32_t x263 = INT32_MIN;
	int8_t x264 = -5;
	int32_t t65 = 13;

    t65 = (((x261<=x262)>x263)!=x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x265 = 3519153LLU;
	volatile int16_t x266 = 22;
	int64_t x267 = -7765438569237LL;
	static uint32_t x268 = 2094244U;
	int32_t t66 = -1;

    t66 = (((x265<=x266)>x267)!=x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x270 = INT32_MAX;
	int64_t x272 = INT64_MAX;
	volatile int32_t t67 = -862223;

    t67 = (((x269<=x270)>x271)!=x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x273 = 14364359325LLU;
	int32_t x274 = -25369113;
	volatile uint32_t x275 = 76721869U;
	uint32_t x276 = UINT32_MAX;
	volatile int32_t t68 = -8;

    t68 = (((x273<=x274)>x275)!=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x278 = -12;
	uint32_t x279 = 4276U;
	int32_t t69 = 21502;

    t69 = (((x277<=x278)>x279)!=x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = INT64_MIN;
	int16_t x282 = INT16_MIN;
	volatile int32_t x283 = -16218;
	int16_t x284 = INT16_MIN;
	volatile int32_t t70 = 93414718;

    t70 = (((x281<=x282)>x283)!=x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = INT32_MIN;
	int16_t x286 = INT16_MIN;

    t71 = (((x285<=x286)>x287)!=x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = 61312LL;
	int64_t x291 = INT64_MIN;
	int8_t x292 = -3;
	static int32_t t72 = 36112;

    t72 = (((x289<=x290)>x291)!=x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x294 = INT8_MIN;
	uint8_t x295 = UINT8_MAX;
	volatile int64_t x296 = -1LL;
	int32_t t73 = -16701205;

    t73 = (((x293<=x294)>x295)!=x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x297 = INT16_MIN;
	int64_t x299 = INT64_MIN;
	int8_t x300 = 1;
	volatile int32_t t74 = -428140164;

    t74 = (((x297<=x298)>x299)!=x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x301 = 6312U;
	int16_t x303 = INT16_MIN;
	static volatile int64_t x304 = INT64_MIN;
	int32_t t75 = 78300;

    t75 = (((x301<=x302)>x303)!=x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x306 = 22333441;
	int64_t x307 = -451808476469655LL;
	uint8_t x308 = 0U;
	static volatile int32_t t76 = 0;

    t76 = (((x305<=x306)>x307)!=x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = 31;
	int32_t x312 = INT32_MIN;
	int32_t t77 = 1;

    t77 = (((x309<=x310)>x311)!=x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x313 = 1U;
	uint64_t x314 = UINT64_MAX;
	volatile uint32_t x315 = 471413067U;
	int8_t x316 = -1;
	volatile int32_t t78 = 1354202;

    t78 = (((x313<=x314)>x315)!=x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x317 = 1U;
	int64_t x319 = -1LL;
	static uint32_t x320 = 32628204U;
	static int32_t t79 = -272382394;

    t79 = (((x317<=x318)>x319)!=x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x323 = UINT64_MAX;
	int8_t x324 = -1;
	volatile int32_t t80 = -7580;

    t80 = (((x321<=x322)>x323)!=x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = INT16_MIN;
	int16_t x326 = -1;
	int64_t x327 = INT64_MIN;
	volatile uint64_t x328 = 56LLU;
	volatile int32_t t81 = -2739;

    t81 = (((x325<=x326)>x327)!=x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x329 = -1;
	int64_t x330 = 46348530956700LL;
	int16_t x331 = INT16_MAX;
	int8_t x332 = INT8_MAX;
	volatile int32_t t82 = -41;

    t82 = (((x329<=x330)>x331)!=x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = INT16_MAX;
	static uint32_t x334 = 23401906U;
	static int32_t x335 = INT32_MIN;
	static uint8_t x336 = 85U;
	volatile int32_t t83 = 11;

    t83 = (((x333<=x334)>x335)!=x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x337 = 1;
	uint32_t x338 = UINT32_MAX;
	static int64_t x340 = INT64_MIN;

    t84 = (((x337<=x338)>x339)!=x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = 7;
	int64_t x342 = -1LL;
	int64_t x344 = INT64_MIN;
	static int32_t t85 = 13;

    t85 = (((x341<=x342)>x343)!=x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int64_t x346 = INT64_MIN;
	static int32_t x347 = 11;
	volatile int32_t t86 = 127584;

    t86 = (((x345<=x346)>x347)!=x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x349 = INT8_MIN;
	static volatile int8_t x350 = INT8_MAX;
	int64_t x351 = -1LL;
	int64_t x352 = INT64_MAX;
	volatile int32_t t87 = -345;

    t87 = (((x349<=x350)>x351)!=x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x354 = 11;
	uint8_t x355 = 12U;
	volatile int32_t t88 = 1712936;

    t88 = (((x353<=x354)>x355)!=x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = 1037384745555659LL;
	int64_t x358 = INT64_MIN;
	volatile int8_t x359 = -1;
	int8_t x360 = INT8_MAX;
	int32_t t89 = -31;

    t89 = (((x357<=x358)>x359)!=x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x361 = -49;
	int32_t x362 = 7626153;
	int16_t x363 = INT16_MAX;
	int64_t x364 = INT64_MIN;
	int32_t t90 = -321852404;

    t90 = (((x361<=x362)>x363)!=x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = INT64_MIN;
	volatile int32_t x366 = INT32_MIN;
	int16_t x368 = INT16_MIN;
	int32_t t91 = -443883060;

    t91 = (((x365<=x366)>x367)!=x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint8_t x369 = 24U;
	uint32_t x370 = UINT32_MAX;
	volatile int8_t x371 = INT8_MAX;
	int32_t x372 = INT32_MIN;
	volatile int32_t t92 = -21336;

    t92 = (((x369<=x370)>x371)!=x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x373 = INT32_MIN;
	volatile int64_t x374 = -1LL;
	uint16_t x375 = UINT16_MAX;
	int16_t x376 = -724;
	volatile int32_t t93 = -7002638;

    t93 = (((x373<=x374)>x375)!=x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = -1;
	int32_t x378 = -10969;
	static volatile uint16_t x380 = 34U;
	volatile int32_t t94 = -2;

    t94 = (((x377<=x378)>x379)!=x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = INT8_MIN;
	uint8_t x382 = 8U;
	volatile uint8_t x383 = 7U;

    t95 = (((x381<=x382)>x383)!=x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x385 = 1U;
	int8_t x386 = -1;
	int64_t x387 = INT64_MAX;
	int64_t x388 = INT64_MIN;
	int32_t t96 = -226968;

    t96 = (((x385<=x386)>x387)!=x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = -1;
	int32_t x390 = INT32_MIN;
	volatile int16_t x391 = INT16_MIN;
	uint64_t x392 = UINT64_MAX;
	volatile int32_t t97 = 2023398;

    t97 = (((x389<=x390)>x391)!=x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x393 = 15262989U;
	uint64_t x395 = 29LLU;
	int32_t x396 = INT32_MAX;
	int32_t t98 = -33834;

    t98 = (((x393<=x394)>x395)!=x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x398 = UINT64_MAX;
	static int16_t x399 = INT16_MAX;
	uint16_t x400 = 111U;
	int32_t t99 = 2;

    t99 = (((x397<=x398)>x399)!=x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x401 = INT64_MIN;
	volatile uint16_t x402 = UINT16_MAX;
	static volatile int64_t x403 = INT64_MIN;
	uint8_t x404 = 1U;
	int32_t t100 = 780042;

    t100 = (((x401<=x402)>x403)!=x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x406 = INT64_MAX;
	int16_t x408 = INT16_MAX;

    t101 = (((x405<=x406)>x407)!=x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x410 = UINT64_MAX;
	int8_t x412 = INT8_MIN;

    t102 = (((x409<=x410)>x411)!=x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x413 = INT64_MIN;
	uint64_t x414 = 505553498043020LLU;
	uint64_t x415 = 8146258784LLU;
	static int32_t t103 = 32306013;

    t103 = (((x413<=x414)>x415)!=x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint16_t x417 = 2U;
	volatile uint16_t x418 = 0U;
	int32_t t104 = -3;

    t104 = (((x417<=x418)>x419)!=x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x421 = 1;
	uint64_t x422 = UINT64_MAX;
	static int8_t x423 = 0;
	static int32_t x424 = INT32_MIN;
	int32_t t105 = -7080;

    t105 = (((x421<=x422)>x423)!=x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x425 = -1;
	int32_t x427 = 2037176;
	volatile uint32_t x428 = UINT32_MAX;
	volatile int32_t t106 = 0;

    t106 = (((x425<=x426)>x427)!=x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = -101LL;
	int64_t x430 = INT64_MIN;
	uint64_t x431 = UINT64_MAX;
	static int8_t x432 = -1;
	int32_t t107 = -10;

    t107 = (((x429<=x430)>x431)!=x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = 0;
	static uint16_t x434 = UINT16_MAX;
	uint8_t x435 = UINT8_MAX;
	volatile int32_t t108 = 15368;

    t108 = (((x433<=x434)>x435)!=x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x437 = 56U;
	int16_t x438 = -15;
	int64_t x439 = -32200093LL;
	uint8_t x440 = 1U;
	int32_t t109 = -13976267;

    t109 = (((x437<=x438)>x439)!=x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x441 = 23296590126LLU;
	int64_t x442 = INT64_MIN;
	int32_t x443 = -561434920;
	volatile uint8_t x444 = 2U;
	int32_t t110 = -302497480;

    t110 = (((x441<=x442)>x443)!=x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x445 = INT16_MAX;
	volatile uint16_t x446 = 6128U;
	static int32_t x447 = -969281146;
	static uint32_t x448 = 134U;

    t111 = (((x445<=x446)>x447)!=x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x450 = -2LL;
	static int64_t x451 = -1823452LL;

    t112 = (((x449<=x450)>x451)!=x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = INT32_MIN;
	volatile int64_t x454 = 1908459LL;
	int16_t x455 = -860;
	uint64_t x456 = 3295216LLU;

    t113 = (((x453<=x454)>x455)!=x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint32_t x457 = UINT32_MAX;
	static volatile uint16_t x458 = 2300U;
	int8_t x459 = -1;
	int32_t x460 = -1;
	int32_t t114 = -340335091;

    t114 = (((x457<=x458)>x459)!=x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x461 = 12;
	static volatile int16_t x462 = INT16_MIN;
	int64_t x463 = -925754LL;
	volatile uint32_t x464 = 1048494864U;
	int32_t t115 = -29483;

    t115 = (((x461<=x462)>x463)!=x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = INT32_MAX;
	int16_t x466 = INT16_MAX;
	volatile uint8_t x467 = 0U;
	int32_t t116 = -1191476;

    t116 = (((x465<=x466)>x467)!=x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x469 = INT32_MIN;
	volatile int8_t x470 = -2;
	volatile int32_t x471 = -174366;
	static uint64_t x472 = 2324137849940LLU;

    t117 = (((x469<=x470)>x471)!=x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint32_t x473 = UINT32_MAX;
	volatile uint16_t x474 = 14U;
	int32_t x475 = INT32_MIN;
	int64_t x476 = INT64_MIN;
	int32_t t118 = -1;

    t118 = (((x473<=x474)>x475)!=x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x477 = INT8_MIN;
	int8_t x478 = 45;
	static int64_t x480 = INT64_MAX;

    t119 = (((x477<=x478)>x479)!=x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x481 = -481366525;
	static int16_t x482 = INT16_MIN;
	static volatile int64_t x483 = INT64_MIN;
	uint32_t x484 = 1167876U;
	volatile int32_t t120 = 4;

    t120 = (((x481<=x482)>x483)!=x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x485 = 190;
	static int32_t x486 = -1;
	int16_t x488 = INT16_MIN;
	int32_t t121 = 24822362;

    t121 = (((x485<=x486)>x487)!=x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = INT8_MIN;
	int8_t x490 = -1;
	int8_t x492 = INT8_MIN;
	static int32_t t122 = 875;

    t122 = (((x489<=x490)>x491)!=x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x493 = 2658;
	static int32_t x494 = -3661130;
	static uint8_t x495 = 1U;
	static int16_t x496 = INT16_MIN;
	volatile int32_t t123 = -9;

    t123 = (((x493<=x494)>x495)!=x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = -1;
	volatile int8_t x498 = 36;
	uint32_t x499 = 4544U;
	int32_t t124 = -132808466;

    t124 = (((x497<=x498)>x499)!=x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x501 = 63;
	int32_t x502 = INT32_MIN;
	int8_t x503 = INT8_MAX;
	static int32_t t125 = -21019059;

    t125 = (((x501<=x502)>x503)!=x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x505 = 14;
	int32_t x506 = INT32_MIN;
	uint8_t x507 = UINT8_MAX;
	static int16_t x508 = INT16_MIN;

    t126 = (((x505<=x506)>x507)!=x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x510 = 238997292508040699LL;
	uint16_t x512 = UINT16_MAX;
	volatile int32_t t127 = 1534;

    t127 = (((x509<=x510)>x511)!=x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = -1883597LL;
	static int32_t x514 = INT32_MIN;
	volatile int32_t t128 = -940072646;

    t128 = (((x513<=x514)>x515)!=x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x518 = INT32_MAX;
	static volatile int8_t x519 = INT8_MIN;
	volatile uint16_t x520 = UINT16_MAX;
	int32_t t129 = 27130877;

    t129 = (((x517<=x518)>x519)!=x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x521 = 713;
	uint16_t x522 = 50U;
	uint8_t x524 = 17U;
	int32_t t130 = -3559455;

    t130 = (((x521<=x522)>x523)!=x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint16_t x525 = 3U;
	int8_t x526 = -1;
	uint16_t x528 = 54U;
	int32_t t131 = 1653;

    t131 = (((x525<=x526)>x527)!=x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = INT8_MIN;
	static int32_t x530 = 1492637;
	static int32_t x531 = -1;
	volatile int32_t t132 = 161;

    t132 = (((x529<=x530)>x531)!=x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint64_t x533 = UINT64_MAX;
	int64_t x534 = -5410605311LL;
	volatile int8_t x535 = INT8_MAX;
	int32_t x536 = INT32_MIN;
	static int32_t t133 = 56;

    t133 = (((x533<=x534)>x535)!=x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x537 = 3;
	uint32_t x538 = 74U;
	static volatile int32_t t134 = -12;

    t134 = (((x537<=x538)>x539)!=x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint8_t x542 = 16U;
	int64_t x543 = -104LL;
	volatile int8_t x544 = INT8_MIN;
	volatile int32_t t135 = 20025;

    t135 = (((x541<=x542)>x543)!=x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x545 = INT32_MIN;
	int8_t x546 = 12;
	int64_t x547 = 0LL;
	int16_t x548 = 20;
	int32_t t136 = -1;

    t136 = (((x545<=x546)>x547)!=x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int64_t x550 = -75656617210034397LL;
	int8_t x551 = INT8_MAX;
	uint8_t x552 = 1U;
	int32_t t137 = 12102;

    t137 = (((x549<=x550)>x551)!=x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x553 = 6084116U;
	int64_t x554 = INT64_MIN;
	static volatile int32_t x555 = INT32_MIN;
	volatile uint32_t x556 = 118846790U;
	int32_t t138 = 359596;

    t138 = (((x553<=x554)>x555)!=x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x557 = INT8_MAX;
	int8_t x558 = -1;
	int16_t x559 = INT16_MIN;
	int16_t x560 = INT16_MAX;
	int32_t t139 = 561;

    t139 = (((x557<=x558)>x559)!=x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x561 = 1211LLU;
	int16_t x562 = -1;
	int64_t x563 = 241371LL;
	int64_t x564 = 220536409591904LL;
	int32_t t140 = 1;

    t140 = (((x561<=x562)>x563)!=x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x565 = -115690482;
	int32_t x566 = 1;
	static int16_t x567 = INT16_MIN;

    t141 = (((x565<=x566)>x567)!=x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x569 = 6;
	uint32_t x571 = 57U;
	volatile uint16_t x572 = 125U;
	volatile int32_t t142 = 12559;

    t142 = (((x569<=x570)>x571)!=x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x574 = INT64_MAX;
	volatile int8_t x576 = INT8_MAX;

    t143 = (((x573<=x574)>x575)!=x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = -1;
	uint8_t x578 = 2U;
	volatile uint16_t x579 = 7U;
	volatile uint64_t x580 = 0LLU;
	int32_t t144 = -7214764;

    t144 = (((x577<=x578)>x579)!=x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x581 = 26270171LLU;
	int16_t x583 = -1143;
	int8_t x584 = 5;
	static volatile int32_t t145 = -1;

    t145 = (((x581<=x582)>x583)!=x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x585 = UINT64_MAX;
	uint64_t x587 = 188288557063555649LLU;
	int32_t x588 = INT32_MIN;
	int32_t t146 = -225141734;

    t146 = (((x585<=x586)>x587)!=x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = INT16_MIN;
	static volatile int32_t t147 = -72898839;

    t147 = (((x589<=x590)>x591)!=x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x593 = 20231U;
	static volatile int8_t x594 = 3;
	int64_t x596 = -1LL;
	static volatile int32_t t148 = 711;

    t148 = (((x593<=x594)>x595)!=x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x597 = INT16_MAX;
	int16_t x599 = -15094;
	int8_t x600 = INT8_MAX;

    t149 = (((x597<=x598)>x599)!=x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x601 = 122LLU;
	uint8_t x602 = 20U;
	int8_t x603 = INT8_MIN;

    t150 = (((x601<=x602)>x603)!=x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x605 = UINT32_MAX;
	int32_t x606 = -377;
	int32_t t151 = -4918818;

    t151 = (((x605<=x606)>x607)!=x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = INT64_MIN;
	int32_t x610 = -2179;
	int16_t x611 = INT16_MAX;
	uint32_t x612 = UINT32_MAX;
	static volatile int32_t t152 = -30444712;

    t152 = (((x609<=x610)>x611)!=x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x613 = -5;
	int32_t x614 = -1;
	int64_t x615 = INT64_MAX;
	uint32_t x616 = 3783U;
	volatile int32_t t153 = 867;

    t153 = (((x613<=x614)>x615)!=x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = -1;
	volatile int8_t x618 = 11;
	int16_t x620 = -1;
	static int32_t t154 = -1;

    t154 = (((x617<=x618)>x619)!=x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x621 = INT16_MIN;
	uint64_t x622 = UINT64_MAX;
	int16_t x623 = INT16_MIN;
	int8_t x624 = -1;
	int32_t t155 = 267356927;

    t155 = (((x621<=x622)>x623)!=x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x626 = -37316416785961487LL;
	int32_t x627 = INT32_MIN;
	uint16_t x628 = UINT16_MAX;
	static int32_t t156 = -84465;

    t156 = (((x625<=x626)>x627)!=x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x630 = 8;
	static volatile uint32_t x631 = UINT32_MAX;
	uint16_t x632 = 293U;
	volatile int32_t t157 = -7172;

    t157 = (((x629<=x630)>x631)!=x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x634 = INT32_MAX;
	int8_t x635 = INT8_MIN;
	volatile int8_t x636 = INT8_MAX;
	static int32_t t158 = 0;

    t158 = (((x633<=x634)>x635)!=x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x637 = 20711LL;
	int16_t x638 = INT16_MIN;
	static int16_t x639 = INT16_MIN;
	int32_t x640 = INT32_MAX;
	static int32_t t159 = 16030;

    t159 = (((x637<=x638)>x639)!=x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x641 = 491460U;
	int64_t x642 = 1316LL;
	volatile int64_t x643 = INT64_MAX;
	static volatile int32_t t160 = 172561191;

    t160 = (((x641<=x642)>x643)!=x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x646 = -4960;
	int8_t x647 = INT8_MIN;

    t161 = (((x645<=x646)>x647)!=x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x649 = INT16_MAX;
	volatile int64_t x651 = -986LL;
	static volatile int32_t x652 = 136073431;
	int32_t t162 = 59512;

    t162 = (((x649<=x650)>x651)!=x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x653 = INT16_MIN;
	int16_t x655 = INT16_MAX;
	static volatile uint8_t x656 = 4U;
	volatile int32_t t163 = -14;

    t163 = (((x653<=x654)>x655)!=x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = INT16_MAX;
	int64_t x658 = INT64_MAX;
	int64_t x659 = -1LL;
	uint8_t x660 = 106U;
	static int32_t t164 = -15260130;

    t164 = (((x657<=x658)>x659)!=x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = -2630963LL;
	int32_t x662 = INT32_MIN;
	int8_t x663 = INT8_MIN;
	uint64_t x664 = UINT64_MAX;

    t165 = (((x661<=x662)>x663)!=x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = INT64_MAX;
	int16_t x666 = -31;
	int8_t x667 = INT8_MAX;
	uint8_t x668 = 3U;
	int32_t t166 = -8018271;

    t166 = (((x665<=x666)>x667)!=x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x669 = INT16_MIN;
	volatile int16_t x672 = INT16_MAX;
	int32_t t167 = -4802269;

    t167 = (((x669<=x670)>x671)!=x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = INT16_MAX;
	static volatile uint32_t x674 = 12738U;
	uint16_t x675 = 1849U;
	uint64_t x676 = UINT64_MAX;
	int32_t t168 = 24291;

    t168 = (((x673<=x674)>x675)!=x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x678 = INT16_MIN;
	int8_t x679 = -1;
	static int32_t x680 = INT32_MIN;
	int32_t t169 = 6050569;

    t169 = (((x677<=x678)>x679)!=x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x682 = INT16_MAX;
	volatile int8_t x683 = -1;
	static int16_t x684 = INT16_MAX;
	int32_t t170 = -1;

    t170 = (((x681<=x682)>x683)!=x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x685 = -1;
	int16_t x686 = -1;
	int16_t x687 = -10;
	volatile int32_t t171 = 13407;

    t171 = (((x685<=x686)>x687)!=x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = -1;
	uint8_t x690 = 1U;
	static int8_t x691 = 1;
	uint32_t x692 = 1640626U;
	volatile int32_t t172 = 16319593;

    t172 = (((x689<=x690)>x691)!=x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x693 = INT16_MAX;
	int32_t x694 = -5;
	int8_t x695 = INT8_MAX;
	int64_t x696 = INT64_MIN;

    t173 = (((x693<=x694)>x695)!=x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint8_t x697 = 2U;
	volatile uint16_t x698 = UINT16_MAX;
	int32_t x699 = INT32_MIN;
	static int32_t t174 = -161410;

    t174 = (((x697<=x698)>x699)!=x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint16_t x701 = UINT16_MAX;
	uint64_t x702 = 34299677386LLU;
	uint64_t x703 = UINT64_MAX;
	static int32_t t175 = 6697109;

    t175 = (((x701<=x702)>x703)!=x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = 1;
	uint64_t x706 = 3762039283957955728LLU;
	int16_t x707 = -1;
	volatile int32_t x708 = -1;

    t176 = (((x705<=x706)>x707)!=x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x709 = 1;
	volatile int64_t x711 = INT64_MAX;
	uint32_t x712 = 5138U;
	int32_t t177 = -14936;

    t177 = (((x709<=x710)>x711)!=x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x713 = 6654187728LLU;
	int8_t x714 = INT8_MAX;
	uint16_t x715 = UINT16_MAX;
	int32_t t178 = 940873;

    t178 = (((x713<=x714)>x715)!=x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x717 = UINT64_MAX;
	uint16_t x718 = 8158U;
	int16_t x719 = INT16_MIN;
	static int64_t x720 = -1LL;
	int32_t t179 = 401037;

    t179 = (((x717<=x718)>x719)!=x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = -1;
	int8_t x722 = INT8_MIN;
	int64_t x723 = INT64_MIN;
	int32_t t180 = 725177575;

    t180 = (((x721<=x722)>x723)!=x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x725 = -2392;
	uint16_t x726 = UINT16_MAX;
	volatile int8_t x727 = -1;
	int32_t x728 = INT32_MIN;
	volatile int32_t t181 = 13748;

    t181 = (((x725<=x726)>x727)!=x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x729 = INT32_MIN;
	uint8_t x730 = UINT8_MAX;
	int32_t x731 = -606473;
	int32_t x732 = -1;
	static volatile int32_t t182 = -96046172;

    t182 = (((x729<=x730)>x731)!=x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = INT64_MAX;
	static uint32_t x734 = 43268U;

    t183 = (((x733<=x734)>x735)!=x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x739 = -1;
	int16_t x740 = -1;

    t184 = (((x737<=x738)>x739)!=x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x742 = 48;
	int32_t x743 = 5;

    t185 = (((x741<=x742)>x743)!=x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = INT32_MAX;
	uint64_t x747 = 136LLU;
	static uint64_t x748 = UINT64_MAX;
	static int32_t t186 = -438;

    t186 = (((x745<=x746)>x747)!=x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint32_t x749 = 1U;
	uint64_t x751 = 859LLU;
	volatile int64_t x752 = -719994409973LL;
	volatile int32_t t187 = 487;

    t187 = (((x749<=x750)>x751)!=x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = INT8_MIN;
	uint8_t x754 = 0U;
	uint32_t x756 = UINT32_MAX;
	int32_t t188 = 46;

    t188 = (((x753<=x754)>x755)!=x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = -1;
	uint32_t x758 = UINT32_MAX;
	int32_t x759 = INT32_MIN;
	int8_t x760 = -6;
	static int32_t t189 = 94;

    t189 = (((x757<=x758)>x759)!=x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x761 = INT64_MIN;
	int8_t x763 = -25;
	volatile int32_t t190 = -3252;

    t190 = (((x761<=x762)>x763)!=x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint8_t x765 = UINT8_MAX;
	uint8_t x766 = UINT8_MAX;
	volatile uint32_t x767 = 3876U;
	uint64_t x768 = UINT64_MAX;
	volatile int32_t t191 = -18;

    t191 = (((x765<=x766)>x767)!=x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x770 = -1;
	static int64_t x771 = -1863LL;
	int8_t x772 = INT8_MIN;
	volatile int32_t t192 = 1;

    t192 = (((x769<=x770)>x771)!=x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x773 = -1;
	uint64_t x774 = 15226554885LLU;
	volatile int8_t x775 = 1;
	uint64_t x776 = UINT64_MAX;
	static int32_t t193 = -121555;

    t193 = (((x773<=x774)>x775)!=x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x777 = 2U;
	uint32_t x778 = 9U;
	int32_t x780 = -1;
	static int32_t t194 = 4;

    t194 = (((x777<=x778)>x779)!=x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile uint64_t x781 = 349758LLU;
	uint64_t x783 = UINT64_MAX;
	int32_t x784 = INT32_MAX;
	int32_t t195 = -19371;

    t195 = (((x781<=x782)>x783)!=x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int64_t x785 = INT64_MIN;
	uint8_t x786 = 17U;
	int32_t x787 = -1;
	int32_t t196 = -24178;

    t196 = (((x785<=x786)>x787)!=x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x789 = -1;
	static int16_t x790 = INT16_MAX;
	static int64_t x791 = -1LL;
	int64_t x792 = INT64_MAX;
	int32_t t197 = -1486;

    t197 = (((x789<=x790)>x791)!=x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x793 = -1LL;
	uint32_t x794 = 22457209U;
	static int64_t x795 = -1LL;
	int32_t t198 = 47819;

    t198 = (((x793<=x794)>x795)!=x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x799 = -1;

    t199 = (((x797<=x798)>x799)!=x800);

    if (t199 != 1) { NG(); } else { ; }
	
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


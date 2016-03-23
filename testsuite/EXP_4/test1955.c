
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

uint16_t x3 = 0U;
uint8_t x9 = 1U;
uint8_t x16 = 13U;
static int8_t x18 = -19;
int8_t x19 = INT8_MIN;
int8_t x27 = 0;
int32_t t6 = -27035569;
int16_t x31 = INT16_MAX;
int16_t x32 = INT16_MIN;
static int32_t t7 = 6114310;
static int16_t x43 = -14396;
int32_t t10 = 452;
volatile uint16_t x51 = UINT16_MAX;
int64_t x53 = -27150471LL;
static int8_t x59 = INT8_MIN;
uint16_t x62 = UINT16_MAX;
int16_t x80 = INT16_MAX;
int16_t x85 = -1;
volatile int64_t x92 = INT64_MAX;
uint8_t x115 = UINT8_MAX;
int64_t x119 = -1LL;
volatile uint32_t x120 = 4834U;
int32_t t30 = -36591;
int16_t x127 = -1;
static int8_t x130 = 0;
int32_t x132 = -9012;
volatile int32_t t34 = 86951;
int16_t x141 = 11882;
int8_t x150 = INT8_MIN;
uint64_t x152 = UINT64_MAX;
uint16_t x156 = 11119U;
uint8_t x157 = 69U;
uint16_t x158 = 6740U;
int32_t x160 = -2;
static int32_t t39 = 0;
int16_t x163 = -1;
int64_t x167 = -421802020522LL;
int8_t x168 = 7;
int8_t x169 = -1;
static int16_t x173 = INT16_MIN;
static int32_t t43 = 63031;
static uint16_t x178 = 1927U;
int8_t x185 = -1;
volatile int64_t x187 = INT64_MIN;
int8_t x192 = -1;
uint8_t x194 = UINT8_MAX;
uint32_t x204 = UINT32_MAX;
volatile int32_t x211 = INT32_MIN;
volatile uint64_t x214 = 4LLU;
int64_t x219 = INT64_MIN;
volatile int32_t t55 = 1;
volatile uint32_t x226 = 4680U;
int64_t x229 = 2509431121LL;
volatile uint32_t x232 = UINT32_MAX;
static int64_t x251 = INT64_MIN;
int8_t x255 = INT8_MIN;
uint16_t x263 = UINT16_MAX;
uint16_t x266 = 7U;
volatile int16_t x269 = 0;
int32_t x271 = INT32_MAX;
int16_t x272 = 0;
int8_t x279 = INT8_MAX;
int32_t x282 = -203058;
volatile uint16_t x285 = 0U;
static volatile int8_t x286 = -1;
int16_t x287 = INT16_MIN;
volatile int32_t t74 = 15929;
uint8_t x301 = UINT8_MAX;
volatile int8_t x302 = -1;
int64_t x303 = INT64_MIN;
static int64_t x305 = 766095415944625382LL;
int32_t t81 = -543719973;
int64_t x329 = -1667064LL;
volatile int32_t t82 = -30104;
int64_t x336 = 25121320371LL;
static int32_t x338 = INT32_MAX;
int8_t x339 = INT8_MIN;
static volatile int8_t x341 = INT8_MAX;
int32_t t86 = 4251453;
volatile int64_t x354 = INT64_MAX;
uint32_t x361 = 2106725U;
int32_t x366 = INT32_MIN;
uint64_t x368 = 54967784LLU;
volatile uint32_t x377 = UINT32_MAX;
static int64_t x378 = INT64_MAX;
int16_t x382 = INT16_MAX;
volatile int32_t t97 = 1591650;
static uint64_t x395 = 67052829532298145LLU;
int16_t x398 = INT16_MAX;
int64_t x401 = -1LL;
static int16_t x403 = INT16_MIN;
uint8_t x406 = 1U;
int64_t x407 = INT64_MIN;
uint32_t x409 = 381221U;
volatile int8_t x410 = -15;
static volatile int16_t x413 = INT16_MAX;
static int32_t t103 = 18192;
volatile int8_t x418 = 5;
int32_t t104 = -86119098;
int32_t x421 = INT32_MIN;
int64_t x424 = INT64_MIN;
int32_t t108 = -104408559;
volatile int32_t t110 = -497222;
int16_t x445 = 10797;
int32_t t111 = -5886;
uint16_t x450 = 7815U;
int16_t x454 = 11;
volatile int8_t x456 = -1;
int16_t x459 = INT16_MIN;
volatile int8_t x460 = -17;
int8_t x463 = INT8_MIN;
uint8_t x470 = 5U;
int8_t x481 = INT8_MIN;
int32_t t121 = 68856;
int16_t x491 = INT16_MIN;
int16_t x494 = INT16_MIN;
int16_t x509 = INT16_MAX;
int32_t t128 = -510;
int8_t x517 = 15;
static uint32_t x519 = 3762U;
static volatile int32_t t129 = 150567;
int8_t x539 = -1;
uint8_t x548 = 1U;
int32_t x554 = INT32_MIN;
int8_t x556 = -1;
volatile int16_t x561 = -1;
int16_t x566 = INT16_MAX;
static int64_t x569 = 0LL;
int64_t x573 = INT64_MIN;
int32_t x577 = INT32_MIN;
int16_t x578 = 53;
static volatile int8_t x584 = -1;
int16_t x585 = -1;
int16_t x587 = INT16_MIN;
int16_t x593 = INT16_MIN;
uint16_t x596 = UINT16_MAX;
static int32_t t148 = 70459603;
static int8_t x599 = INT8_MIN;
static uint32_t x600 = 110406650U;
volatile int32_t t150 = -485;
volatile uint64_t x605 = 494885273LLU;
volatile int64_t x608 = INT64_MAX;
uint64_t x622 = 2457781302244LLU;
uint32_t x623 = 85803U;
volatile int32_t t155 = 52820;
volatile int32_t t160 = 6;
volatile uint16_t x653 = UINT16_MAX;
int32_t t163 = 48;
uint32_t x660 = UINT32_MAX;
int16_t x665 = -4401;
int32_t t166 = -716774;
int32_t x670 = -250859;
volatile int16_t x679 = -1;
int64_t x685 = 827996620186395324LL;
volatile int64_t x687 = -1LL;
int8_t x689 = INT8_MIN;
volatile uint64_t x690 = 69960279647572598LLU;
volatile int32_t t172 = 238947384;
uint32_t x701 = 3U;
volatile uint64_t x707 = UINT64_MAX;
int32_t x712 = INT32_MAX;
volatile int32_t t177 = -5156052;
uint8_t x714 = UINT8_MAX;
static volatile int32_t t178 = -367236;
int8_t x725 = -38;
int16_t x726 = INT16_MAX;
int8_t x729 = -1;
int64_t x731 = INT64_MIN;
static uint32_t x732 = 124898020U;
volatile int32_t t182 = 62466;
uint32_t x733 = 3U;
static uint16_t x735 = 3U;
int16_t x736 = 212;
static uint16_t x737 = UINT16_MAX;
static int32_t x739 = -47178;
int64_t x742 = -10LL;
int16_t x743 = INT16_MAX;
volatile int32_t t185 = -1149807;
int32_t x746 = -1;
int64_t x754 = INT64_MIN;
int64_t x756 = INT64_MIN;
int32_t t191 = -289;
int32_t t192 = 10763609;
static int32_t t193 = -16084;
int16_t x777 = INT16_MIN;
int32_t x782 = INT32_MIN;
uint16_t x788 = 0U;
static int64_t x789 = INT64_MIN;
volatile int32_t x791 = 1;


void f0(void) {
    	int32_t x1 = INT32_MIN;
	volatile uint8_t x2 = UINT8_MAX;
	static int64_t x4 = -3164979LL;
	volatile int32_t t0 = -1;

    t0 = (x1>(x2^(x3<=x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MIN;
	volatile int32_t x6 = INT32_MAX;
	volatile int32_t x7 = INT32_MAX;
	static int32_t x8 = -1;
	volatile int32_t t1 = -1;

    t1 = (x5>(x6^(x7<=x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x10 = 4066520LLU;
	uint64_t x11 = 3740528219875844689LLU;
	int32_t x12 = INT32_MAX;
	volatile int32_t t2 = -71010;

    t2 = (x9>(x10^(x11<=x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = 34356798;
	int8_t x14 = -1;
	volatile uint32_t x15 = UINT32_MAX;
	int32_t t3 = 0;

    t3 = (x13>(x14^(x15<=x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x17 = -1;
	volatile int64_t x20 = 44319498LL;
	volatile int32_t t4 = -514426;

    t4 = (x17>(x18^(x19<=x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = -1LL;
	static volatile uint32_t x22 = UINT32_MAX;
	uint8_t x23 = 15U;
	int64_t x24 = -1LL;
	static int32_t t5 = 73124491;

    t5 = (x21>(x22^(x23<=x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = -1;
	volatile int8_t x26 = INT8_MIN;
	static int8_t x28 = INT8_MIN;

    t6 = (x25>(x26^(x27<=x28)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x29 = 13329;
	int64_t x30 = INT64_MAX;

    t7 = (x29>(x30^(x31<=x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint32_t x33 = 1U;
	int16_t x34 = -1;
	volatile int8_t x35 = INT8_MIN;
	volatile int8_t x36 = -1;
	static volatile int32_t t8 = -19797780;

    t8 = (x33>(x34^(x35<=x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = -5190933441291LL;
	uint8_t x38 = 40U;
	uint8_t x39 = 10U;
	volatile int32_t x40 = INT32_MIN;
	static int32_t t9 = -170244;

    t9 = (x37>(x38^(x39<=x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int16_t x41 = -1;
	volatile int32_t x42 = -1;
	int16_t x44 = -1;

    t10 = (x41>(x42^(x43<=x44)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint32_t x45 = UINT32_MAX;
	static volatile uint16_t x46 = 252U;
	uint8_t x47 = 1U;
	static int16_t x48 = -13;
	volatile int32_t t11 = -57;

    t11 = (x45>(x46^(x47<=x48)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = -1;
	static volatile int8_t x50 = -1;
	uint64_t x52 = 566956LLU;
	volatile int32_t t12 = 1;

    t12 = (x49>(x50^(x51<=x52)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x54 = INT64_MAX;
	int16_t x55 = 456;
	volatile int8_t x56 = INT8_MAX;
	int32_t t13 = 3655295;

    t13 = (x53>(x54^(x55<=x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x57 = 91949513LLU;
	uint16_t x58 = 1104U;
	uint32_t x60 = 0U;
	int32_t t14 = -1774;

    t14 = (x57>(x58^(x59<=x60)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x61 = INT64_MIN;
	static uint64_t x63 = 1627672585LLU;
	static int16_t x64 = INT16_MAX;
	int32_t t15 = 0;

    t15 = (x61>(x62^(x63<=x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x65 = -58;
	int32_t x66 = 8137856;
	int8_t x67 = -1;
	volatile int16_t x68 = -134;
	volatile int32_t t16 = 1651860;

    t16 = (x65>(x66^(x67<=x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x69 = 1841U;
	int32_t x70 = INT32_MIN;
	int64_t x71 = -1LL;
	uint64_t x72 = 1LLU;
	static int32_t t17 = 31;

    t17 = (x69>(x70^(x71<=x72)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = INT16_MIN;
	int32_t x74 = -1;
	int64_t x75 = INT64_MIN;
	int8_t x76 = 1;
	volatile int32_t t18 = 148611884;

    t18 = (x73>(x74^(x75<=x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x77 = INT32_MIN;
	uint32_t x78 = 209226U;
	uint16_t x79 = 13U;
	static int32_t t19 = 27563;

    t19 = (x77>(x78^(x79<=x80)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = INT8_MIN;
	volatile int32_t x82 = 0;
	int32_t x83 = INT32_MIN;
	int8_t x84 = INT8_MIN;
	int32_t t20 = 8103448;

    t20 = (x81>(x82^(x83<=x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x86 = -69671250090LL;
	int32_t x87 = -1;
	uint16_t x88 = 82U;
	volatile int32_t t21 = -9617;

    t21 = (x85>(x86^(x87<=x88)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x89 = 0U;
	int32_t x90 = -1;
	int8_t x91 = -10;
	volatile int32_t t22 = 10;

    t22 = (x89>(x90^(x91<=x92)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = INT8_MAX;
	static volatile int8_t x94 = INT8_MIN;
	int32_t x95 = INT32_MIN;
	int32_t x96 = 42360;
	volatile int32_t t23 = 304;

    t23 = (x93>(x94^(x95<=x96)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x97 = INT32_MIN;
	volatile int64_t x98 = INT64_MIN;
	int64_t x99 = INT64_MIN;
	static int32_t x100 = -1;
	static volatile int32_t t24 = -157659;

    t24 = (x97>(x98^(x99<=x100)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int64_t x101 = 50856LL;
	static int32_t x102 = INT32_MAX;
	static volatile int32_t x103 = INT32_MAX;
	static volatile int8_t x104 = -1;
	static int32_t t25 = 66;

    t25 = (x101>(x102^(x103<=x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x105 = 7;
	volatile int8_t x106 = INT8_MIN;
	static uint8_t x107 = UINT8_MAX;
	volatile int32_t x108 = -5455980;
	volatile int32_t t26 = 11611291;

    t26 = (x105>(x106^(x107<=x108)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = -176;
	volatile uint32_t x110 = UINT32_MAX;
	volatile int32_t x111 = INT32_MIN;
	uint16_t x112 = UINT16_MAX;
	static int32_t t27 = 137663;

    t27 = (x109>(x110^(x111<=x112)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = INT8_MAX;
	int8_t x114 = INT8_MIN;
	int64_t x116 = 34LL;
	volatile int32_t t28 = 230;

    t28 = (x113>(x114^(x115<=x116)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x117 = -1;
	int32_t x118 = INT32_MIN;
	int32_t t29 = 101715663;

    t29 = (x117>(x118^(x119<=x120)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x121 = INT8_MIN;
	static int8_t x122 = INT8_MIN;
	uint16_t x123 = 0U;
	int8_t x124 = INT8_MAX;

    t30 = (x121>(x122^(x123<=x124)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = -1;
	int8_t x126 = 0;
	int16_t x128 = -1;
	volatile int32_t t31 = -4314;

    t31 = (x125>(x126^(x127<=x128)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = -3434113097019153LL;
	int64_t x131 = 7432053285123LL;
	volatile int32_t t32 = 6;

    t32 = (x129>(x130^(x131<=x132)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int64_t x133 = INT64_MIN;
	int8_t x134 = -1;
	static int64_t x135 = 740LL;
	int16_t x136 = INT16_MIN;
	int32_t t33 = -2668;

    t33 = (x133>(x134^(x135<=x136)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x137 = 904U;
	int64_t x138 = -1LL;
	static volatile int64_t x139 = INT64_MIN;
	volatile int16_t x140 = -1;

    t34 = (x137>(x138^(x139<=x140)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x142 = 694414553U;
	static int32_t x143 = INT32_MIN;
	volatile uint32_t x144 = UINT32_MAX;
	volatile int32_t t35 = 673229871;

    t35 = (x141>(x142^(x143<=x144)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = INT16_MAX;
	uint8_t x146 = UINT8_MAX;
	int32_t x147 = INT32_MIN;
	uint64_t x148 = 15296035LLU;
	volatile int32_t t36 = -2709;

    t36 = (x145>(x146^(x147<=x148)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x149 = 408021419U;
	volatile uint32_t x151 = 24U;
	static volatile int32_t t37 = 9830;

    t37 = (x149>(x150^(x151<=x152)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x153 = UINT16_MAX;
	volatile int8_t x154 = INT8_MIN;
	uint8_t x155 = 62U;
	static int32_t t38 = -2626;

    t38 = (x153>(x154^(x155<=x156)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x159 = 3051;

    t39 = (x157>(x158^(x159<=x160)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x161 = 0;
	uint64_t x162 = 23524LLU;
	int16_t x164 = -890;
	int32_t t40 = 428;

    t40 = (x161>(x162^(x163<=x164)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint16_t x165 = UINT16_MAX;
	static uint32_t x166 = 504U;
	int32_t t41 = 1;

    t41 = (x165>(x166^(x167<=x168)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x170 = UINT32_MAX;
	int16_t x171 = INT16_MAX;
	int16_t x172 = -1;
	volatile int32_t t42 = -1;

    t42 = (x169>(x170^(x171<=x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x174 = INT64_MIN;
	int64_t x175 = INT64_MAX;
	int64_t x176 = INT64_MIN;

    t43 = (x173>(x174^(x175<=x176)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x177 = 3467;
	int8_t x179 = 0;
	volatile int16_t x180 = -1;
	volatile int32_t t44 = -125717;

    t44 = (x177>(x178^(x179<=x180)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x181 = INT32_MAX;
	int16_t x182 = INT16_MIN;
	int8_t x183 = INT8_MIN;
	volatile int8_t x184 = INT8_MIN;
	static int32_t t45 = 6941;

    t45 = (x181>(x182^(x183<=x184)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x186 = INT16_MIN;
	uint16_t x188 = 2234U;
	int32_t t46 = -433124570;

    t46 = (x185>(x186^(x187<=x188)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int64_t x189 = INT64_MIN;
	int32_t x190 = -1;
	int16_t x191 = INT16_MAX;
	volatile int32_t t47 = 39;

    t47 = (x189>(x190^(x191<=x192)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = -1LL;
	static uint64_t x195 = 3412797529865527LLU;
	int32_t x196 = -319553;
	int32_t t48 = 66;

    t48 = (x193>(x194^(x195<=x196)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = -1;
	static int16_t x198 = INT16_MIN;
	volatile int8_t x199 = INT8_MIN;
	volatile uint8_t x200 = 6U;
	volatile int32_t t49 = -6;

    t49 = (x197>(x198^(x199<=x200)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x201 = UINT32_MAX;
	int16_t x202 = -1;
	uint8_t x203 = 71U;
	volatile int32_t t50 = 2770;

    t50 = (x201>(x202^(x203<=x204)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = INT64_MIN;
	static uint8_t x206 = 102U;
	volatile uint16_t x207 = UINT16_MAX;
	uint64_t x208 = 1418270092992045727LLU;
	volatile int32_t t51 = -1342;

    t51 = (x205>(x206^(x207<=x208)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x209 = INT16_MIN;
	static int16_t x210 = INT16_MIN;
	int64_t x212 = INT64_MIN;
	volatile int32_t t52 = -3;

    t52 = (x209>(x210^(x211<=x212)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = -23;
	int8_t x215 = -1;
	static int64_t x216 = INT64_MAX;
	static volatile int32_t t53 = 32311;

    t53 = (x213>(x214^(x215<=x216)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint32_t x217 = 3912881U;
	uint32_t x218 = 55293U;
	int64_t x220 = INT64_MAX;
	volatile int32_t t54 = -4667355;

    t54 = (x217>(x218^(x219<=x220)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x221 = 3LLU;
	int64_t x222 = -369589LL;
	static int64_t x223 = -3LL;
	static uint64_t x224 = UINT64_MAX;

    t55 = (x221>(x222^(x223<=x224)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = INT64_MIN;
	int64_t x227 = -1LL;
	int64_t x228 = -1LL;
	volatile int32_t t56 = 13353;

    t56 = (x225>(x226^(x227<=x228)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x230 = -7611;
	int16_t x231 = INT16_MIN;
	volatile int32_t t57 = -35;

    t57 = (x229>(x230^(x231<=x232)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = INT8_MIN;
	int8_t x234 = -1;
	uint16_t x235 = 5U;
	volatile int64_t x236 = -1LL;
	int32_t t58 = -40;

    t58 = (x233>(x234^(x235<=x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = INT16_MAX;
	uint16_t x238 = 2U;
	int64_t x239 = -1LL;
	static int64_t x240 = -19370013LL;
	volatile int32_t t59 = -2438;

    t59 = (x237>(x238^(x239<=x240)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = INT64_MIN;
	static int32_t x242 = INT32_MIN;
	static int32_t x243 = -780791;
	int32_t x244 = INT32_MIN;
	int32_t t60 = 5684596;

    t60 = (x241>(x242^(x243<=x244)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x245 = 110150LLU;
	volatile int16_t x246 = -1;
	int32_t x247 = INT32_MIN;
	int32_t x248 = INT32_MIN;
	int32_t t61 = -232202;

    t61 = (x245>(x246^(x247<=x248)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = INT8_MIN;
	static int64_t x250 = INT64_MAX;
	uint16_t x252 = UINT16_MAX;
	volatile int32_t t62 = -5347018;

    t62 = (x249>(x250^(x251<=x252)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint64_t x253 = 3118418871493LLU;
	uint64_t x254 = UINT64_MAX;
	int8_t x256 = INT8_MAX;
	int32_t t63 = -1;

    t63 = (x253>(x254^(x255<=x256)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x257 = INT64_MAX;
	static int32_t x258 = INT32_MIN;
	static int16_t x259 = -10547;
	static int64_t x260 = 2079344183LL;
	volatile int32_t t64 = 1;

    t64 = (x257>(x258^(x259<=x260)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x261 = INT32_MAX;
	int8_t x262 = INT8_MIN;
	int8_t x264 = INT8_MAX;
	int32_t t65 = -1142346;

    t65 = (x261>(x262^(x263<=x264)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = INT8_MIN;
	volatile int8_t x267 = -1;
	int64_t x268 = INT64_MAX;
	volatile int32_t t66 = 84325306;

    t66 = (x265>(x266^(x267<=x268)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x270 = 126083448677456783LLU;
	volatile int32_t t67 = 29326;

    t67 = (x269>(x270^(x271<=x272)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = -1;
	uint32_t x274 = UINT32_MAX;
	int32_t x275 = 851758;
	int32_t x276 = INT32_MAX;
	static volatile int32_t t68 = -6473;

    t68 = (x273>(x274^(x275<=x276)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = 6;
	int32_t x278 = INT32_MIN;
	volatile int8_t x280 = -6;
	int32_t t69 = 109;

    t69 = (x277>(x278^(x279<=x280)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x281 = -1;
	static int32_t x283 = INT32_MIN;
	int64_t x284 = 1LL;
	static volatile int32_t t70 = -851235;

    t70 = (x281>(x282^(x283<=x284)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x288 = INT64_MIN;
	volatile int32_t t71 = -20692;

    t71 = (x285>(x286^(x287<=x288)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x289 = INT64_MIN;
	int8_t x290 = -1;
	static int32_t x291 = INT32_MIN;
	uint64_t x292 = UINT64_MAX;
	int32_t t72 = 1792;

    t72 = (x289>(x290^(x291<=x292)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x293 = 226179376433458LL;
	uint32_t x294 = UINT32_MAX;
	int64_t x295 = INT64_MAX;
	volatile int8_t x296 = 1;
	int32_t t73 = -4018557;

    t73 = (x293>(x294^(x295<=x296)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint32_t x297 = 21U;
	static volatile int16_t x298 = 1243;
	int32_t x299 = 26;
	int32_t x300 = 17740;

    t74 = (x297>(x298^(x299<=x300)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x304 = 3833LL;
	int32_t t75 = -21;

    t75 = (x301>(x302^(x303<=x304)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x306 = 327188837227780LL;
	int8_t x307 = INT8_MIN;
	uint64_t x308 = 11534LLU;
	volatile int32_t t76 = -3707136;

    t76 = (x305>(x306^(x307<=x308)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint16_t x309 = 32489U;
	int32_t x310 = -222250;
	uint16_t x311 = UINT16_MAX;
	int32_t x312 = INT32_MIN;
	static int32_t t77 = 19677859;

    t77 = (x309>(x310^(x311<=x312)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = 1973;
	volatile int16_t x314 = INT16_MIN;
	uint8_t x315 = 1U;
	int32_t x316 = -1;
	volatile int32_t t78 = -11712859;

    t78 = (x313>(x314^(x315<=x316)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x317 = -1;
	int64_t x318 = INT64_MAX;
	int32_t x319 = INT32_MIN;
	uint64_t x320 = 34886921226LLU;
	int32_t t79 = -1702855;

    t79 = (x317>(x318^(x319<=x320)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x321 = 147LL;
	int8_t x322 = INT8_MIN;
	int32_t x323 = -162313209;
	volatile int16_t x324 = INT16_MAX;
	static volatile int32_t t80 = 1817252;

    t80 = (x321>(x322^(x323<=x324)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint16_t x325 = 50U;
	volatile int64_t x326 = INT64_MIN;
	uint8_t x327 = 22U;
	int8_t x328 = INT8_MIN;

    t81 = (x325>(x326^(x327<=x328)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x330 = -1LL;
	volatile int16_t x331 = INT16_MAX;
	uint64_t x332 = 294673808185504LLU;

    t82 = (x329>(x330^(x331<=x332)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x333 = UINT64_MAX;
	int32_t x334 = INT32_MIN;
	static volatile int16_t x335 = -1;
	volatile int32_t t83 = -149586180;

    t83 = (x333>(x334^(x335<=x336)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x337 = 13945U;
	int32_t x340 = INT32_MAX;
	volatile int32_t t84 = -446;

    t84 = (x337>(x338^(x339<=x340)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint32_t x342 = 14268U;
	static uint8_t x343 = 23U;
	uint64_t x344 = 371928940023669LLU;
	volatile int32_t t85 = -31623;

    t85 = (x341>(x342^(x343<=x344)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x345 = INT32_MIN;
	volatile uint32_t x346 = UINT32_MAX;
	volatile uint8_t x347 = UINT8_MAX;
	uint32_t x348 = 912U;

    t86 = (x345>(x346^(x347<=x348)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint16_t x349 = UINT16_MAX;
	int64_t x350 = INT64_MIN;
	uint16_t x351 = 357U;
	int16_t x352 = INT16_MIN;
	static volatile int32_t t87 = 1;

    t87 = (x349>(x350^(x351<=x352)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x353 = -1;
	volatile uint8_t x355 = UINT8_MAX;
	uint32_t x356 = 596U;
	int32_t t88 = 1075432;

    t88 = (x353>(x354^(x355<=x356)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint16_t x357 = 1331U;
	int16_t x358 = -1;
	int8_t x359 = -3;
	int32_t x360 = INT32_MIN;
	int32_t t89 = -31013383;

    t89 = (x357>(x358^(x359<=x360)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x362 = INT32_MIN;
	uint64_t x363 = UINT64_MAX;
	int32_t x364 = INT32_MAX;
	static volatile int32_t t90 = -6;

    t90 = (x361>(x362^(x363<=x364)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint16_t x365 = UINT16_MAX;
	uint16_t x367 = 22818U;
	volatile int32_t t91 = 72359;

    t91 = (x365>(x366^(x367<=x368)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x369 = 9152;
	static uint8_t x370 = 12U;
	static uint8_t x371 = UINT8_MAX;
	volatile uint32_t x372 = 1563U;
	volatile int32_t t92 = -157997;

    t92 = (x369>(x370^(x371<=x372)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x373 = 4835;
	int8_t x374 = -4;
	static uint8_t x375 = 30U;
	uint32_t x376 = 118393575U;
	static volatile int32_t t93 = 433;

    t93 = (x373>(x374^(x375<=x376)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x379 = -1604;
	uint16_t x380 = 56U;
	static int32_t t94 = -3;

    t94 = (x377>(x378^(x379<=x380)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = INT8_MIN;
	int32_t x383 = 495;
	int32_t x384 = INT32_MIN;
	volatile int32_t t95 = 325887;

    t95 = (x381>(x382^(x383<=x384)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x385 = INT8_MAX;
	static int8_t x386 = -1;
	int64_t x387 = INT64_MAX;
	static int16_t x388 = 2630;
	int32_t t96 = 25;

    t96 = (x385>(x386^(x387<=x388)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = 38LL;
	static int64_t x390 = -964735354LL;
	int32_t x391 = INT32_MIN;
	int64_t x392 = 1LL;

    t97 = (x389>(x390^(x391<=x392)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = INT32_MIN;
	uint8_t x394 = 6U;
	int8_t x396 = INT8_MAX;
	volatile int32_t t98 = -79613;

    t98 = (x393>(x394^(x395<=x396)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x397 = 57LLU;
	uint16_t x399 = 3U;
	int8_t x400 = -1;
	volatile int32_t t99 = 4092;

    t99 = (x397>(x398^(x399<=x400)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x402 = INT16_MIN;
	static uint32_t x404 = UINT32_MAX;
	volatile int32_t t100 = 111674;

    t100 = (x401>(x402^(x403<=x404)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x405 = -1;
	int16_t x408 = INT16_MIN;
	volatile int32_t t101 = 65223;

    t101 = (x405>(x406^(x407<=x408)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint16_t x411 = UINT16_MAX;
	static int16_t x412 = INT16_MAX;
	volatile int32_t t102 = -1;

    t102 = (x409>(x410^(x411<=x412)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int64_t x414 = -1LL;
	volatile uint64_t x415 = UINT64_MAX;
	volatile int16_t x416 = -1;

    t103 = (x413>(x414^(x415<=x416)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x417 = 2U;
	int64_t x419 = INT64_MIN;
	int64_t x420 = INT64_MIN;

    t104 = (x417>(x418^(x419<=x420)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x422 = 1U;
	static int8_t x423 = -1;
	int32_t t105 = -6812039;

    t105 = (x421>(x422^(x423<=x424)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = 1978;
	int64_t x426 = INT64_MIN;
	static int8_t x427 = INT8_MAX;
	volatile int8_t x428 = INT8_MIN;
	volatile int32_t t106 = -75350;

    t106 = (x425>(x426^(x427<=x428)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint8_t x429 = 0U;
	int16_t x430 = 0;
	int64_t x431 = 37944400802LL;
	int8_t x432 = 33;
	int32_t t107 = 60809;

    t107 = (x429>(x430^(x431<=x432)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x433 = INT16_MIN;
	volatile int8_t x434 = INT8_MAX;
	volatile int16_t x435 = INT16_MAX;
	uint8_t x436 = 0U;

    t108 = (x433>(x434^(x435<=x436)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = -1LL;
	uint32_t x438 = 103U;
	int16_t x439 = INT16_MIN;
	uint64_t x440 = 4281LLU;
	volatile int32_t t109 = -722;

    t109 = (x437>(x438^(x439<=x440)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x441 = -5196;
	static uint8_t x442 = 1U;
	int64_t x443 = -1LL;
	volatile int64_t x444 = INT64_MIN;

    t110 = (x441>(x442^(x443<=x444)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x446 = -1;
	int64_t x447 = INT64_MIN;
	uint16_t x448 = 180U;

    t111 = (x445>(x446^(x447<=x448)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x449 = UINT32_MAX;
	static uint64_t x451 = 9326839078546LLU;
	uint64_t x452 = 4632135718001030454LLU;
	int32_t t112 = 4;

    t112 = (x449>(x450^(x451<=x452)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x453 = INT8_MIN;
	int16_t x455 = INT16_MIN;
	static int32_t t113 = 164621;

    t113 = (x453>(x454^(x455<=x456)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint16_t x457 = 1033U;
	int16_t x458 = -10;
	static int32_t t114 = 26928;

    t114 = (x457>(x458^(x459<=x460)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x461 = -1;
	volatile int32_t x462 = INT32_MIN;
	volatile uint32_t x464 = 671U;
	volatile int32_t t115 = 17895583;

    t115 = (x461>(x462^(x463<=x464)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint8_t x465 = UINT8_MAX;
	static volatile int32_t x466 = INT32_MAX;
	int16_t x467 = INT16_MIN;
	int8_t x468 = INT8_MIN;
	int32_t t116 = -37904;

    t116 = (x465>(x466^(x467<=x468)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = INT8_MAX;
	int32_t x471 = 7;
	volatile int64_t x472 = INT64_MAX;
	static int32_t t117 = -425446;

    t117 = (x469>(x470^(x471<=x472)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x473 = 954;
	int16_t x474 = INT16_MIN;
	uint32_t x475 = 27450U;
	volatile int16_t x476 = INT16_MIN;
	volatile int32_t t118 = -13577;

    t118 = (x473>(x474^(x475<=x476)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x477 = -112619;
	volatile int8_t x478 = INT8_MAX;
	int16_t x479 = 2177;
	int64_t x480 = -1LL;
	volatile int32_t t119 = 917848982;

    t119 = (x477>(x478^(x479<=x480)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x482 = -1;
	uint16_t x483 = UINT16_MAX;
	int16_t x484 = -2559;
	int32_t t120 = -2825;

    t120 = (x481>(x482^(x483<=x484)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = -12;
	int16_t x486 = INT16_MAX;
	int8_t x487 = INT8_MIN;
	int8_t x488 = -1;

    t121 = (x485>(x486^(x487<=x488)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = INT8_MIN;
	int64_t x490 = -7405740961589984LL;
	uint32_t x492 = 1361640847U;
	int32_t t122 = -192;

    t122 = (x489>(x490^(x491<=x492)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = INT64_MIN;
	int64_t x495 = INT64_MIN;
	int32_t x496 = INT32_MAX;
	volatile int32_t t123 = 13723;

    t123 = (x493>(x494^(x495<=x496)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x497 = -1552;
	uint64_t x498 = UINT64_MAX;
	volatile int32_t x499 = INT32_MAX;
	volatile int8_t x500 = INT8_MIN;
	int32_t t124 = -7;

    t124 = (x497>(x498^(x499<=x500)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = INT32_MAX;
	static int32_t x502 = -252;
	static int8_t x503 = 1;
	volatile int64_t x504 = -1LL;
	volatile int32_t t125 = 11412;

    t125 = (x501>(x502^(x503<=x504)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x505 = INT16_MIN;
	volatile int64_t x506 = INT64_MIN;
	volatile int16_t x507 = -1;
	uint32_t x508 = UINT32_MAX;
	int32_t t126 = 120482618;

    t126 = (x505>(x506^(x507<=x508)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x510 = INT64_MAX;
	volatile uint8_t x511 = 0U;
	int8_t x512 = 20;
	int32_t t127 = -12;

    t127 = (x509>(x510^(x511<=x512)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x513 = UINT32_MAX;
	volatile int16_t x514 = 1;
	volatile int64_t x515 = INT64_MIN;
	volatile uint16_t x516 = UINT16_MAX;

    t128 = (x513>(x514^(x515<=x516)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x518 = 219704U;
	static volatile int64_t x520 = INT64_MIN;

    t129 = (x517>(x518^(x519<=x520)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x521 = 50395690709LLU;
	uint8_t x522 = 75U;
	int16_t x523 = INT16_MAX;
	volatile int16_t x524 = INT16_MIN;
	volatile int32_t t130 = -119;

    t130 = (x521>(x522^(x523<=x524)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = 160LL;
	static uint64_t x526 = UINT64_MAX;
	uint32_t x527 = UINT32_MAX;
	volatile int32_t x528 = 447132461;
	int32_t t131 = -121;

    t131 = (x525>(x526^(x527<=x528)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x529 = UINT32_MAX;
	uint8_t x530 = UINT8_MAX;
	volatile uint64_t x531 = UINT64_MAX;
	uint64_t x532 = 695099LLU;
	int32_t t132 = 8648626;

    t132 = (x529>(x530^(x531<=x532)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x533 = -1;
	int8_t x534 = 1;
	static volatile int32_t x535 = INT32_MIN;
	static uint16_t x536 = 30120U;
	int32_t t133 = 37;

    t133 = (x533>(x534^(x535<=x536)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint64_t x537 = 12814428LLU;
	uint8_t x538 = 89U;
	int16_t x540 = INT16_MIN;
	volatile int32_t t134 = -176669;

    t134 = (x537>(x538^(x539<=x540)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x541 = 1237443185599602167LL;
	uint64_t x542 = UINT64_MAX;
	int32_t x543 = INT32_MAX;
	int64_t x544 = 333LL;
	int32_t t135 = -135;

    t135 = (x541>(x542^(x543<=x544)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = 1;
	int8_t x546 = INT8_MAX;
	int8_t x547 = -19;
	int32_t t136 = -138685464;

    t136 = (x545>(x546^(x547<=x548)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint8_t x549 = 3U;
	int8_t x550 = 45;
	uint32_t x551 = 21U;
	volatile int16_t x552 = -227;
	static int32_t t137 = -1;

    t137 = (x549>(x550^(x551<=x552)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x553 = -1;
	int8_t x555 = INT8_MAX;
	int32_t t138 = -83023;

    t138 = (x553>(x554^(x555<=x556)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = INT64_MAX;
	int8_t x558 = 3;
	int64_t x559 = INT64_MAX;
	uint64_t x560 = 14708296LLU;
	volatile int32_t t139 = 936;

    t139 = (x557>(x558^(x559<=x560)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x562 = INT16_MIN;
	volatile int8_t x563 = -20;
	int16_t x564 = -1;
	volatile int32_t t140 = -63017;

    t140 = (x561>(x562^(x563<=x564)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x565 = 6U;
	uint64_t x567 = 2LLU;
	uint64_t x568 = 4972337LLU;
	static int32_t t141 = 270191708;

    t141 = (x565>(x566^(x567<=x568)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x570 = -1;
	uint64_t x571 = 2LLU;
	uint64_t x572 = UINT64_MAX;
	volatile int32_t t142 = -3984929;

    t142 = (x569>(x570^(x571<=x572)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x574 = 20540U;
	uint32_t x575 = 181U;
	uint16_t x576 = UINT16_MAX;
	volatile int32_t t143 = -17104;

    t143 = (x573>(x574^(x575<=x576)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x579 = 545U;
	static uint16_t x580 = 28U;
	volatile int32_t t144 = -954;

    t144 = (x577>(x578^(x579<=x580)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = INT64_MAX;
	volatile uint64_t x582 = UINT64_MAX;
	int8_t x583 = INT8_MIN;
	int32_t t145 = 109373;

    t145 = (x581>(x582^(x583<=x584)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint64_t x586 = UINT64_MAX;
	uint64_t x588 = 1472807324115275325LLU;
	static int32_t t146 = 10510;

    t146 = (x585>(x586^(x587<=x588)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x589 = -128895843461179LL;
	uint32_t x590 = 610756U;
	int16_t x591 = -1;
	static int16_t x592 = -275;
	volatile int32_t t147 = 147232;

    t147 = (x589>(x590^(x591<=x592)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x594 = INT16_MIN;
	uint32_t x595 = UINT32_MAX;

    t148 = (x593>(x594^(x595<=x596)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint16_t x597 = 10U;
	int8_t x598 = INT8_MIN;
	static volatile int32_t t149 = 0;

    t149 = (x597>(x598^(x599<=x600)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x601 = INT16_MAX;
	volatile uint8_t x602 = 111U;
	uint64_t x603 = 30819552512048976LLU;
	int8_t x604 = 22;

    t150 = (x601>(x602^(x603<=x604)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x606 = INT8_MAX;
	uint32_t x607 = 174735U;
	int32_t t151 = -14;

    t151 = (x605>(x606^(x607<=x608)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x609 = 3483;
	int8_t x610 = -1;
	static int64_t x611 = -41294114437LL;
	int16_t x612 = INT16_MIN;
	volatile int32_t t152 = -3486;

    t152 = (x609>(x610^(x611<=x612)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x613 = 1;
	uint16_t x614 = UINT16_MAX;
	static int8_t x615 = -1;
	int16_t x616 = -1;
	int32_t t153 = 0;

    t153 = (x613>(x614^(x615<=x616)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int32_t x617 = -22;
	int8_t x618 = 31;
	static int64_t x619 = INT64_MIN;
	int64_t x620 = -1LL;
	static volatile int32_t t154 = 0;

    t154 = (x617>(x618^(x619<=x620)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = 188574426LL;
	static int64_t x624 = INT64_MIN;

    t155 = (x621>(x622^(x623<=x624)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x625 = INT8_MAX;
	static volatile int16_t x626 = 23;
	static uint32_t x627 = 3U;
	int32_t x628 = INT32_MIN;
	int32_t t156 = -21;

    t156 = (x625>(x626^(x627<=x628)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x629 = INT8_MAX;
	static uint32_t x630 = 121U;
	uint32_t x631 = UINT32_MAX;
	int16_t x632 = -1;
	int32_t t157 = -1496;

    t157 = (x629>(x630^(x631<=x632)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x633 = INT8_MIN;
	volatile int32_t x634 = -1;
	uint16_t x635 = 101U;
	uint32_t x636 = 12U;
	static int32_t t158 = -1222;

    t158 = (x633>(x634^(x635<=x636)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x637 = 11;
	volatile uint32_t x638 = 72U;
	int8_t x639 = INT8_MIN;
	static int32_t x640 = INT32_MAX;
	int32_t t159 = 3;

    t159 = (x637>(x638^(x639<=x640)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x641 = INT64_MAX;
	int32_t x642 = -1;
	static volatile int64_t x643 = INT64_MIN;
	int32_t x644 = 7;

    t160 = (x641>(x642^(x643<=x644)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x645 = INT64_MAX;
	volatile int64_t x646 = INT64_MIN;
	int16_t x647 = 0;
	volatile int64_t x648 = INT64_MIN;
	int32_t t161 = 606;

    t161 = (x645>(x646^(x647<=x648)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = -1LL;
	int32_t x650 = -1;
	static int32_t x651 = 167889500;
	int16_t x652 = INT16_MAX;
	volatile int32_t t162 = 1;

    t162 = (x649>(x650^(x651<=x652)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x654 = -1;
	volatile int8_t x655 = -1;
	int64_t x656 = -13997LL;

    t163 = (x653>(x654^(x655<=x656)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x657 = -1;
	int8_t x658 = -1;
	volatile int64_t x659 = -1LL;
	volatile int32_t t164 = -75036617;

    t164 = (x657>(x658^(x659<=x660)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x661 = UINT32_MAX;
	int8_t x662 = INT8_MAX;
	volatile int64_t x663 = INT64_MIN;
	volatile int8_t x664 = INT8_MIN;
	volatile int32_t t165 = -1;

    t165 = (x661>(x662^(x663<=x664)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint8_t x666 = 14U;
	int16_t x667 = INT16_MAX;
	static int8_t x668 = -1;

    t166 = (x665>(x666^(x667<=x668)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint16_t x669 = UINT16_MAX;
	uint32_t x671 = 6440555U;
	int64_t x672 = INT64_MAX;
	int32_t t167 = -397683196;

    t167 = (x669>(x670^(x671<=x672)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x673 = 2151U;
	uint32_t x674 = UINT32_MAX;
	static uint8_t x675 = UINT8_MAX;
	int16_t x676 = 0;
	volatile int32_t t168 = -123899;

    t168 = (x673>(x674^(x675<=x676)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x677 = -219797;
	static int64_t x678 = 0LL;
	int64_t x680 = 418175046500LL;
	volatile int32_t t169 = 114630;

    t169 = (x677>(x678^(x679<=x680)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint32_t x681 = UINT32_MAX;
	int32_t x682 = INT32_MIN;
	uint64_t x683 = 392051LLU;
	static int32_t x684 = -1;
	volatile int32_t t170 = 7321595;

    t170 = (x681>(x682^(x683<=x684)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint32_t x686 = UINT32_MAX;
	volatile int8_t x688 = INT8_MAX;
	volatile int32_t t171 = 13580;

    t171 = (x685>(x686^(x687<=x688)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x691 = 3607;
	int32_t x692 = INT32_MIN;

    t172 = (x689>(x690^(x691<=x692)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x693 = INT32_MAX;
	static int16_t x694 = 0;
	int64_t x695 = 502554797036197701LL;
	int32_t x696 = -1;
	volatile int32_t t173 = 1388637;

    t173 = (x693>(x694^(x695<=x696)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x697 = -58;
	uint8_t x698 = UINT8_MAX;
	uint16_t x699 = 1U;
	volatile uint32_t x700 = UINT32_MAX;
	int32_t t174 = -32628;

    t174 = (x697>(x698^(x699<=x700)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x702 = 1;
	int8_t x703 = -1;
	static uint8_t x704 = UINT8_MAX;
	int32_t t175 = 278;

    t175 = (x701>(x702^(x703<=x704)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x705 = INT32_MIN;
	static int16_t x706 = -1;
	static uint8_t x708 = 0U;
	volatile int32_t t176 = 280382727;

    t176 = (x705>(x706^(x707<=x708)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x709 = INT32_MIN;
	int64_t x710 = INT64_MIN;
	int32_t x711 = INT32_MAX;

    t177 = (x709>(x710^(x711<=x712)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = INT8_MIN;
	int8_t x715 = -1;
	volatile uint16_t x716 = UINT16_MAX;

    t178 = (x713>(x714^(x715<=x716)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint64_t x717 = 866322LLU;
	int8_t x718 = -4;
	int64_t x719 = INT64_MAX;
	static uint16_t x720 = UINT16_MAX;
	volatile int32_t t179 = -7295676;

    t179 = (x717>(x718^(x719<=x720)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint8_t x721 = UINT8_MAX;
	int8_t x722 = INT8_MIN;
	static uint64_t x723 = 80707LLU;
	volatile int64_t x724 = -1LL;
	int32_t t180 = -1112;

    t180 = (x721>(x722^(x723<=x724)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x727 = -1LL;
	static uint32_t x728 = 381U;
	volatile int32_t t181 = 227715;

    t181 = (x725>(x726^(x727<=x728)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x730 = INT8_MAX;

    t182 = (x729>(x730^(x731<=x732)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x734 = -2388LL;
	int32_t t183 = 18321;

    t183 = (x733>(x734^(x735<=x736)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int16_t x738 = -9909;
	static volatile uint16_t x740 = 28211U;
	static volatile int32_t t184 = 26;

    t184 = (x737>(x738^(x739<=x740)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x741 = INT16_MAX;
	int16_t x744 = -1;

    t185 = (x741>(x742^(x743<=x744)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x745 = INT32_MIN;
	volatile uint8_t x747 = UINT8_MAX;
	static volatile uint64_t x748 = 38LLU;
	volatile int32_t t186 = -14;

    t186 = (x745>(x746^(x747<=x748)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x749 = INT64_MIN;
	int32_t x750 = INT32_MAX;
	static volatile uint32_t x751 = 115171U;
	int64_t x752 = INT64_MIN;
	volatile int32_t t187 = -713;

    t187 = (x749>(x750^(x751<=x752)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x753 = INT64_MIN;
	uint64_t x755 = 7991604325030LLU;
	int32_t t188 = -858793608;

    t188 = (x753>(x754^(x755<=x756)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x757 = INT64_MIN;
	int32_t x758 = 184186846;
	static volatile int8_t x759 = -1;
	int8_t x760 = INT8_MIN;
	volatile int32_t t189 = -1;

    t189 = (x757>(x758^(x759<=x760)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = INT32_MAX;
	int8_t x762 = 3;
	int16_t x763 = INT16_MAX;
	int8_t x764 = INT8_MIN;
	volatile int32_t t190 = -46783;

    t190 = (x761>(x762^(x763<=x764)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x765 = INT32_MIN;
	int16_t x766 = -5;
	int8_t x767 = INT8_MIN;
	static volatile uint64_t x768 = 1839739157234390084LLU;

    t191 = (x765>(x766^(x767<=x768)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x769 = 1095895709554LL;
	volatile int8_t x770 = INT8_MIN;
	int16_t x771 = INT16_MAX;
	static int8_t x772 = 48;

    t192 = (x769>(x770^(x771<=x772)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x773 = 19;
	volatile int64_t x774 = INT64_MIN;
	int64_t x775 = -1LL;
	int16_t x776 = INT16_MIN;

    t193 = (x773>(x774^(x775<=x776)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x778 = 0;
	int16_t x779 = INT16_MAX;
	static volatile int8_t x780 = -1;
	int32_t t194 = 124;

    t194 = (x777>(x778^(x779<=x780)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint8_t x781 = UINT8_MAX;
	int64_t x783 = 1946137LL;
	int16_t x784 = -1;
	int32_t t195 = 17772;

    t195 = (x781>(x782^(x783<=x784)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x785 = 6U;
	int16_t x786 = INT16_MAX;
	uint16_t x787 = 28U;
	static volatile int32_t t196 = 963666;

    t196 = (x785>(x786^(x787<=x788)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x790 = UINT32_MAX;
	int8_t x792 = INT8_MIN;
	volatile int32_t t197 = 111;

    t197 = (x789>(x790^(x791<=x792)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x793 = INT16_MIN;
	uint64_t x794 = 16552628LLU;
	int32_t x795 = INT32_MAX;
	int32_t x796 = -1;
	volatile int32_t t198 = 152685;

    t198 = (x793>(x794^(x795<=x796)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint8_t x797 = 112U;
	static volatile uint16_t x798 = 463U;
	int64_t x799 = -14996124285197038LL;
	int64_t x800 = INT64_MIN;
	volatile int32_t t199 = 3472099;

    t199 = (x797>(x798^(x799<=x800)));

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


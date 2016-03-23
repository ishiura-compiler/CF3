
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

uint32_t x2 = 41933U;
volatile int32_t x3 = 56;
static uint8_t x4 = UINT8_MAX;
int64_t x18 = INT64_MAX;
int8_t x33 = 2;
int8_t x36 = 6;
uint16_t x42 = 9437U;
int8_t x44 = INT8_MAX;
uint8_t x47 = 1U;
int32_t x53 = INT32_MAX;
static int16_t x55 = -1;
int32_t t8 = -16196537;
volatile int32_t t9 = 141;
volatile int8_t x65 = 2;
uint16_t x80 = 9081U;
int32_t t13 = 0;
int32_t t16 = -481274;
uint16_t x95 = 64U;
int32_t x96 = -1;
volatile uint64_t x98 = 38409448282LLU;
uint8_t x102 = 124U;
volatile uint64_t x103 = 1462306294383679LLU;
uint16_t x109 = 14879U;
uint32_t x115 = UINT32_MAX;
uint32_t x116 = 1087549U;
int32_t t22 = 1049;
volatile int32_t t23 = -946306178;
uint16_t x129 = 13U;
uint8_t x132 = UINT8_MAX;
volatile int32_t t25 = -7;
int64_t x142 = INT64_MIN;
int32_t x145 = INT32_MIN;
volatile int32_t t27 = 1;
uint64_t x154 = UINT64_MAX;
volatile int32_t x164 = -23309457;
static uint8_t x168 = 1U;
int32_t x178 = -1;
volatile int8_t x179 = -20;
volatile int32_t t32 = -798;
volatile int16_t x185 = INT16_MAX;
volatile uint16_t x187 = 3U;
volatile int32_t t34 = 472;
static int64_t x193 = -409372806LL;
uint32_t x194 = 1274882U;
uint8_t x205 = 49U;
uint32_t x207 = 39870278U;
int8_t x209 = -7;
static uint32_t x214 = 17164U;
int16_t x235 = 21;
uint64_t x238 = UINT64_MAX;
int16_t x242 = -1;
volatile int32_t t42 = -10271941;
static uint16_t x261 = 1U;
uint32_t x265 = UINT32_MAX;
volatile int32_t t47 = 34847640;
volatile int16_t x280 = -1;
int8_t x282 = INT8_MIN;
int16_t x283 = INT16_MAX;
uint16_t x286 = 120U;
int16_t x292 = INT16_MIN;
int32_t t51 = -18746399;
volatile uint32_t x293 = 5466U;
uint32_t x304 = 577U;
volatile int32_t t53 = 509;
volatile int16_t x338 = 3534;
int32_t t56 = -6215;
int16_t x345 = INT16_MAX;
int64_t x361 = -87676710296189LL;
volatile int32_t t60 = -4283;
static volatile int32_t t62 = -2;
uint8_t x375 = 48U;
int8_t x390 = INT8_MAX;
volatile uint32_t x393 = 0U;
static int16_t x415 = INT16_MAX;
int8_t x416 = -23;
int16_t x429 = INT16_MAX;
uint16_t x431 = 189U;
int32_t t72 = -4568;
uint64_t x435 = 144711143071LLU;
int32_t x436 = -4468310;
int64_t x445 = 169346997424LL;
static int16_t x447 = 21;
int32_t x464 = 12;
int8_t x466 = -1;
static int64_t x480 = -408720381431LL;
volatile int32_t t81 = 1666874;
volatile int32_t t85 = -43220;
uint32_t x518 = UINT32_MAX;
uint8_t x520 = 1U;
uint32_t x529 = UINT32_MAX;
int64_t x542 = INT64_MAX;
int32_t x546 = INT32_MIN;
int64_t x547 = -4362002968669267424LL;
int16_t x573 = -5618;
static volatile int32_t t94 = -32580718;
int32_t t95 = -639161565;
int16_t x592 = 13;
int8_t x593 = INT8_MIN;
static uint16_t x595 = 3440U;
uint32_t x603 = 246717341U;
volatile int32_t x609 = INT32_MIN;
int16_t x631 = -5234;
uint32_t x632 = UINT32_MAX;
int16_t x633 = INT16_MIN;
static volatile int16_t x639 = 1552;
int16_t x640 = -1;
int32_t t104 = -3137354;
volatile uint32_t x651 = UINT32_MAX;
int64_t x652 = -1LL;
int64_t x655 = INT64_MAX;
uint8_t x658 = 0U;
volatile int32_t t108 = 63078;
int64_t x670 = 110318196LL;
static uint64_t x672 = 267812345LLU;
static volatile int8_t x674 = INT8_MIN;
static volatile int64_t x676 = 76308847067165LL;
static int32_t t110 = 162147667;
uint64_t x686 = 14110585998838LLU;
uint16_t x687 = 553U;
volatile int32_t t113 = -4;
uint32_t x693 = UINT32_MAX;
int64_t x694 = INT64_MAX;
int8_t x698 = INT8_MIN;
static volatile int32_t t115 = -141951086;
uint32_t x705 = 309294U;
volatile int32_t t116 = -21368;
volatile uint32_t x712 = 2U;
int16_t x715 = INT16_MIN;
int32_t t119 = -104;
int16_t x724 = 4611;
int32_t t120 = -55652;
volatile int32_t x725 = INT32_MAX;
volatile int8_t x731 = -45;
int16_t x736 = INT16_MIN;
static uint64_t x753 = UINT64_MAX;
uint32_t x754 = UINT32_MAX;
uint64_t x763 = UINT64_MAX;
volatile int32_t t130 = -120845;
int8_t x781 = 1;
uint8_t x783 = 92U;
static int32_t t131 = -1;
uint32_t x785 = 26884U;
volatile int32_t t133 = 0;
int16_t x796 = 2;
int32_t x800 = 27948;
int32_t t135 = 6951;
int16_t x811 = 2;
volatile uint32_t x829 = 6U;
static volatile int32_t t140 = -415722915;
static int8_t x836 = INT8_MIN;
volatile int32_t x839 = INT32_MAX;
int32_t t142 = 36969;
uint16_t x841 = UINT16_MAX;
int16_t x842 = INT16_MIN;
uint16_t x844 = UINT16_MAX;
static int64_t x847 = -1LL;
uint16_t x849 = UINT16_MAX;
int8_t x903 = INT8_MIN;
int8_t x904 = INT8_MIN;
int32_t x905 = 258145009;
volatile uint64_t x910 = 61454221LLU;
int32_t x915 = 228596;
static int32_t t158 = -6876888;
static volatile int32_t t159 = 26378695;
int16_t x937 = INT16_MAX;
static int16_t x946 = 26;
int16_t x947 = -51;
int64_t x954 = INT64_MAX;
int32_t t162 = -2273234;
static uint8_t x960 = 84U;
volatile uint32_t x961 = 0U;
int32_t x962 = INT32_MIN;
static uint32_t x963 = UINT32_MAX;
static int32_t t165 = 599626;
int16_t x985 = -1;
uint8_t x986 = UINT8_MAX;
int64_t x1002 = INT64_MAX;
int8_t x1010 = -1;
volatile int16_t x1012 = INT16_MIN;
volatile int32_t t170 = -10206;
uint8_t x1014 = 52U;
int8_t x1015 = 1;
int64_t x1016 = INT64_MIN;
uint8_t x1017 = UINT8_MAX;
static int16_t x1020 = 299;
static int32_t t172 = 8562;
static volatile int32_t x1029 = INT32_MIN;
static int32_t x1030 = INT32_MIN;
static int8_t x1032 = INT8_MIN;
volatile int8_t x1035 = INT8_MIN;
static int32_t t175 = 488;
static int32_t x1046 = 421274;
uint64_t x1048 = 42862LLU;
volatile int32_t t176 = 853052;
uint32_t x1052 = UINT32_MAX;
volatile int8_t x1058 = INT8_MIN;
int32_t t178 = 61054009;
int32_t t179 = -29265387;
static uint8_t x1066 = 0U;
uint32_t x1067 = 328179U;
volatile int16_t x1074 = INT16_MIN;
int16_t x1078 = -1;
int32_t t182 = 190400;
int32_t t183 = 164;
int32_t t184 = -455;
int64_t x1103 = -1LL;
uint16_t x1104 = UINT16_MAX;
int8_t x1111 = INT8_MIN;
int32_t t187 = -1;
int32_t t188 = -93321;
volatile int32_t t189 = 24437672;
int16_t x1122 = -1;
static int16_t x1133 = 3783;
static uint64_t x1136 = UINT64_MAX;
volatile uint64_t x1151 = 831618675004513LLU;
volatile int32_t t193 = -431459;
int16_t x1159 = 59;
volatile uint64_t x1166 = 1LLU;
int32_t t196 = 8342052;
int32_t x1175 = -1;
volatile int32_t t197 = -52250878;
int32_t x1177 = INT32_MIN;
static uint64_t x1181 = 5LLU;
int16_t x1184 = -1;


void f0(void) {
    	volatile uint16_t x1 = UINT16_MAX;
	volatile int32_t t0 = -1582;

    t0 = (x1>(x2/(x3*x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x17 = INT16_MAX;
	static int8_t x19 = INT8_MAX;
	int64_t x20 = 4LL;
	volatile int32_t t1 = 9;

    t1 = (x17>(x18/(x19*x20)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x25 = INT32_MIN;
	static uint64_t x26 = 26939701LLU;
	volatile uint32_t x27 = UINT32_MAX;
	uint8_t x28 = 2U;
	volatile int32_t t2 = -84028;

    t2 = (x25>(x26/(x27*x28)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint16_t x29 = 1U;
	int16_t x30 = -123;
	volatile int8_t x31 = -1;
	int16_t x32 = 2960;
	int32_t t3 = -1644;

    t3 = (x29>(x30/(x31*x32)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint32_t x34 = 140815U;
	static int16_t x35 = -1;
	volatile int32_t t4 = 10771164;

    t4 = (x33>(x34/(x35*x36)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x41 = INT64_MAX;
	static uint16_t x43 = 13361U;
	int32_t t5 = 1;

    t5 = (x41>(x42/(x43*x44)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x45 = INT16_MIN;
	int8_t x46 = INT8_MIN;
	int16_t x48 = -1;
	static volatile int32_t t6 = 47;

    t6 = (x45>(x46/(x47*x48)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x49 = -1;
	int64_t x50 = INT64_MIN;
	volatile int16_t x51 = INT16_MIN;
	volatile uint8_t x52 = 2U;
	volatile int32_t t7 = -3354689;

    t7 = (x49>(x50/(x51*x52)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x54 = INT8_MIN;
	int64_t x56 = 208925742202392LL;

    t8 = (x53>(x54/(x55*x56)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x61 = 247U;
	uint8_t x62 = 63U;
	int8_t x63 = -1;
	uint64_t x64 = 756LLU;

    t9 = (x61>(x62/(x63*x64)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x66 = 895607087U;
	uint32_t x67 = UINT32_MAX;
	static int64_t x68 = -1LL;
	volatile int32_t t10 = -71564;

    t10 = (x65>(x66/(x67*x68)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x69 = INT32_MIN;
	volatile uint64_t x70 = 350444667885058LLU;
	static int8_t x71 = -1;
	int16_t x72 = INT16_MIN;
	volatile int32_t t11 = 25;

    t11 = (x69>(x70/(x71*x72)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x73 = -1;
	uint64_t x74 = UINT64_MAX;
	int64_t x75 = -20125LL;
	volatile uint8_t x76 = UINT8_MAX;
	static volatile int32_t t12 = -5695;

    t12 = (x73>(x74/(x75*x76)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x77 = 847U;
	int32_t x78 = -1;
	int8_t x79 = -1;

    t13 = (x77>(x78/(x79*x80)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint64_t x81 = 474143800514127376LLU;
	int32_t x82 = INT32_MIN;
	int8_t x83 = INT8_MIN;
	static uint8_t x84 = 2U;
	static volatile int32_t t14 = 970192;

    t14 = (x81>(x82/(x83*x84)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x85 = INT32_MIN;
	int64_t x86 = -1LL;
	static int8_t x87 = -1;
	int16_t x88 = 39;
	int32_t t15 = -44150;

    t15 = (x85>(x86/(x87*x88)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint32_t x89 = UINT32_MAX;
	int16_t x90 = INT16_MIN;
	uint64_t x91 = 192LLU;
	uint64_t x92 = UINT64_MAX;

    t16 = (x89>(x90/(x91*x92)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x93 = INT16_MIN;
	int16_t x94 = INT16_MIN;
	volatile int32_t t17 = 3341151;

    t17 = (x93>(x94/(x95*x96)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile uint64_t x97 = UINT64_MAX;
	static int64_t x99 = -1LL;
	int64_t x100 = INT64_MAX;
	volatile int32_t t18 = -1;

    t18 = (x97>(x98/(x99*x100)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x101 = -1;
	int8_t x104 = -1;
	volatile int32_t t19 = 8026563;

    t19 = (x101>(x102/(x103*x104)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x105 = 1;
	static int32_t x106 = INT32_MIN;
	uint64_t x107 = 7152994929LLU;
	volatile uint64_t x108 = UINT64_MAX;
	int32_t t20 = 4280;

    t20 = (x105>(x106/(x107*x108)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x110 = UINT64_MAX;
	volatile uint64_t x111 = 244148230221623214LLU;
	int16_t x112 = INT16_MIN;
	volatile int32_t t21 = 558013260;

    t21 = (x109>(x110/(x111*x112)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x113 = -7;
	uint16_t x114 = 85U;

    t22 = (x113>(x114/(x115*x116)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x121 = 4940;
	uint16_t x122 = 1U;
	volatile int32_t x123 = 473;
	int16_t x124 = INT16_MAX;

    t23 = (x121>(x122/(x123*x124)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x130 = UINT8_MAX;
	uint16_t x131 = 1U;
	int32_t t24 = -36;

    t24 = (x129>(x130/(x131*x132)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x133 = UINT64_MAX;
	static uint16_t x134 = UINT16_MAX;
	static uint16_t x135 = 924U;
	static int8_t x136 = INT8_MIN;

    t25 = (x133>(x134/(x135*x136)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint64_t x141 = UINT64_MAX;
	int8_t x143 = INT8_MIN;
	uint64_t x144 = 6615LLU;
	static int32_t t26 = 10716;

    t26 = (x141>(x142/(x143*x144)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x146 = -2408731912408LL;
	static volatile int8_t x147 = INT8_MIN;
	volatile int16_t x148 = -1;

    t27 = (x145>(x146/(x147*x148)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x153 = 57U;
	int8_t x155 = -1;
	static int16_t x156 = INT16_MAX;
	volatile int32_t t28 = 327030622;

    t28 = (x153>(x154/(x155*x156)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint64_t x157 = UINT64_MAX;
	uint32_t x158 = UINT32_MAX;
	int16_t x159 = INT16_MIN;
	int16_t x160 = INT16_MAX;
	volatile int32_t t29 = -1116705;

    t29 = (x157>(x158/(x159*x160)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x161 = INT8_MAX;
	static int8_t x162 = 15;
	uint64_t x163 = UINT64_MAX;
	int32_t t30 = 708;

    t30 = (x161>(x162/(x163*x164)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x165 = INT32_MIN;
	int64_t x166 = INT64_MIN;
	int64_t x167 = INT64_MIN;
	static int32_t t31 = -6663674;

    t31 = (x165>(x166/(x167*x168)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int16_t x177 = INT16_MIN;
	uint32_t x180 = UINT32_MAX;

    t32 = (x177>(x178/(x179*x180)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x186 = INT16_MIN;
	uint8_t x188 = UINT8_MAX;
	int32_t t33 = -14;

    t33 = (x185>(x186/(x187*x188)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x189 = 13U;
	uint32_t x190 = 1185399U;
	int64_t x191 = -1LL;
	int8_t x192 = INT8_MAX;

    t34 = (x189>(x190/(x191*x192)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x195 = 274LLU;
	static uint32_t x196 = 14449U;
	volatile int32_t t35 = -1;

    t35 = (x193>(x194/(x195*x196)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x206 = 11U;
	int8_t x208 = -1;
	int32_t t36 = 6036;

    t36 = (x205>(x206/(x207*x208)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x210 = INT16_MIN;
	int64_t x211 = -1LL;
	uint64_t x212 = 13822LLU;
	int32_t t37 = 15;

    t37 = (x209>(x210/(x211*x212)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x213 = -1;
	int64_t x215 = -1LL;
	uint32_t x216 = 949U;
	volatile int32_t t38 = -283;

    t38 = (x213>(x214/(x215*x216)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x225 = -391548446LL;
	volatile int8_t x226 = INT8_MAX;
	uint64_t x227 = 26780859727938LLU;
	volatile int64_t x228 = INT64_MAX;
	int32_t t39 = -283825187;

    t39 = (x225>(x226/(x227*x228)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x233 = -2;
	int8_t x234 = 1;
	int64_t x236 = -1LL;
	static int32_t t40 = 92141958;

    t40 = (x233>(x234/(x235*x236)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x237 = -431377463470785373LL;
	uint8_t x239 = 4U;
	volatile uint16_t x240 = UINT16_MAX;
	volatile int32_t t41 = 4508;

    t41 = (x237>(x238/(x239*x240)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x241 = 18881074621LLU;
	uint16_t x243 = UINT16_MAX;
	static volatile int8_t x244 = INT8_MIN;

    t42 = (x241>(x242/(x243*x244)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint32_t x245 = 411610U;
	static int16_t x246 = INT16_MAX;
	uint64_t x247 = 128009780LLU;
	uint16_t x248 = UINT16_MAX;
	volatile int32_t t43 = 9117;

    t43 = (x245>(x246/(x247*x248)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x249 = 1U;
	static int64_t x250 = 26202296622342631LL;
	uint64_t x251 = UINT64_MAX;
	int64_t x252 = -883483770129LL;
	volatile int32_t t44 = -859970;

    t44 = (x249>(x250/(x251*x252)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x262 = 320050197619LLU;
	uint64_t x263 = 86798LLU;
	int16_t x264 = INT16_MIN;
	volatile int32_t t45 = 3188801;

    t45 = (x261>(x262/(x263*x264)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x266 = INT8_MIN;
	volatile uint32_t x267 = UINT32_MAX;
	static int8_t x268 = -1;
	volatile int32_t t46 = -2136;

    t46 = (x265>(x266/(x267*x268)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x269 = INT16_MIN;
	volatile int32_t x270 = INT32_MIN;
	int8_t x271 = 7;
	uint8_t x272 = 51U;

    t47 = (x269>(x270/(x271*x272)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x277 = INT64_MAX;
	uint16_t x278 = UINT16_MAX;
	int16_t x279 = -1;
	volatile int32_t t48 = -1;

    t48 = (x277>(x278/(x279*x280)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x281 = -1;
	int8_t x284 = -1;
	int32_t t49 = -1407;

    t49 = (x281>(x282/(x283*x284)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x285 = -1;
	volatile uint16_t x287 = 87U;
	static uint64_t x288 = 291619LLU;
	int32_t t50 = -453032;

    t50 = (x285>(x286/(x287*x288)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x289 = -4975370;
	static int8_t x290 = INT8_MAX;
	volatile uint32_t x291 = UINT32_MAX;

    t51 = (x289>(x290/(x291*x292)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x294 = 62094998199117LLU;
	int32_t x295 = -1;
	volatile uint64_t x296 = UINT64_MAX;
	int32_t t52 = 918522360;

    t52 = (x293>(x294/(x295*x296)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x301 = 3U;
	static uint16_t x302 = 7499U;
	int8_t x303 = 18;

    t53 = (x301>(x302/(x303*x304)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x313 = INT64_MIN;
	static int64_t x314 = INT64_MAX;
	int8_t x315 = INT8_MIN;
	volatile int8_t x316 = INT8_MAX;
	int32_t t54 = 504;

    t54 = (x313>(x314/(x315*x316)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x329 = INT8_MIN;
	volatile uint8_t x330 = UINT8_MAX;
	int8_t x331 = 32;
	int64_t x332 = -13449717217104LL;
	volatile int32_t t55 = -7636964;

    t55 = (x329>(x330/(x331*x332)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x337 = UINT64_MAX;
	int32_t x339 = -1;
	uint32_t x340 = 13583U;

    t56 = (x337>(x338/(x339*x340)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x346 = INT16_MIN;
	static int16_t x347 = INT16_MAX;
	int16_t x348 = 1;
	volatile int32_t t57 = 117096;

    t57 = (x345>(x346/(x347*x348)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint64_t x353 = 261657351484797LLU;
	static uint8_t x354 = 3U;
	int16_t x355 = INT16_MAX;
	uint8_t x356 = 90U;
	int32_t t58 = 13849907;

    t58 = (x353>(x354/(x355*x356)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x357 = UINT16_MAX;
	static volatile int64_t x358 = INT64_MAX;
	volatile int64_t x359 = -4245249LL;
	static int16_t x360 = INT16_MIN;
	static int32_t t59 = 114358;

    t59 = (x357>(x358/(x359*x360)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x362 = UINT8_MAX;
	static int16_t x363 = INT16_MIN;
	int32_t x364 = -1;

    t60 = (x361>(x362/(x363*x364)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile uint8_t x365 = 0U;
	int8_t x366 = -1;
	volatile uint32_t x367 = UINT32_MAX;
	int8_t x368 = INT8_MIN;
	static volatile int32_t t61 = 104764048;

    t61 = (x365>(x366/(x367*x368)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x369 = 514616U;
	volatile int32_t x370 = -1;
	int32_t x371 = INT32_MIN;
	static int8_t x372 = 1;

    t62 = (x369>(x370/(x371*x372)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x373 = INT32_MIN;
	volatile int64_t x374 = INT64_MIN;
	int32_t x376 = -1;
	static int32_t t63 = 1702763;

    t63 = (x373>(x374/(x375*x376)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x377 = 608873U;
	volatile int16_t x378 = -1;
	uint16_t x379 = UINT16_MAX;
	static int32_t x380 = -1;
	int32_t t64 = 0;

    t64 = (x377>(x378/(x379*x380)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x381 = UINT64_MAX;
	volatile int64_t x382 = -4804LL;
	static int64_t x383 = 28261LL;
	volatile int16_t x384 = -6021;
	int32_t t65 = -89164016;

    t65 = (x381>(x382/(x383*x384)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x385 = INT8_MIN;
	uint32_t x386 = UINT32_MAX;
	int8_t x387 = INT8_MIN;
	int16_t x388 = -1;
	static volatile int32_t t66 = -265;

    t66 = (x385>(x386/(x387*x388)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x389 = INT32_MIN;
	int64_t x391 = -1LL;
	volatile uint32_t x392 = 172635U;
	int32_t t67 = 253108534;

    t67 = (x389>(x390/(x391*x392)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x394 = 1183;
	volatile uint32_t x395 = 4621U;
	int16_t x396 = -1;
	int32_t t68 = 14191;

    t68 = (x393>(x394/(x395*x396)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x401 = -1;
	static int32_t x402 = INT32_MIN;
	int32_t x403 = 156176;
	int8_t x404 = 1;
	int32_t t69 = -23628;

    t69 = (x401>(x402/(x403*x404)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int32_t x409 = -1;
	volatile int64_t x410 = -12041LL;
	uint16_t x411 = 5U;
	int64_t x412 = 5LL;
	volatile int32_t t70 = -1;

    t70 = (x409>(x410/(x411*x412)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int16_t x413 = INT16_MIN;
	int8_t x414 = INT8_MIN;
	volatile int32_t t71 = -3792078;

    t71 = (x413>(x414/(x415*x416)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x430 = -323076174;
	static volatile uint16_t x432 = UINT16_MAX;

    t72 = (x429>(x430/(x431*x432)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x433 = INT64_MIN;
	static int32_t x434 = INT32_MAX;
	int32_t t73 = -25922614;

    t73 = (x433>(x434/(x435*x436)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x437 = -1;
	int16_t x438 = INT16_MIN;
	uint16_t x439 = 8U;
	static int16_t x440 = 11623;
	static int32_t t74 = 0;

    t74 = (x437>(x438/(x439*x440)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x441 = UINT8_MAX;
	uint16_t x442 = 1U;
	volatile uint64_t x443 = 217549793LLU;
	volatile uint32_t x444 = 23968U;
	volatile int32_t t75 = -229520;

    t75 = (x441>(x442/(x443*x444)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x446 = -1;
	volatile int16_t x448 = -1;
	int32_t t76 = 40;

    t76 = (x445>(x446/(x447*x448)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x453 = 106885954LLU;
	static volatile uint32_t x454 = 3005U;
	int32_t x455 = 1;
	volatile int8_t x456 = 18;
	volatile int32_t t77 = 223;

    t77 = (x453>(x454/(x455*x456)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x461 = INT16_MIN;
	static int32_t x462 = 113276;
	int32_t x463 = 1381;
	volatile int32_t t78 = 66377;

    t78 = (x461>(x462/(x463*x464)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x465 = -1;
	static int16_t x467 = -1;
	uint16_t x468 = UINT16_MAX;
	int32_t t79 = 12404741;

    t79 = (x465>(x466/(x467*x468)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x477 = 10193U;
	int64_t x478 = -237082194816951671LL;
	int16_t x479 = -15452;
	static int32_t t80 = -5;

    t80 = (x477>(x478/(x479*x480)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x485 = INT32_MIN;
	static uint16_t x486 = UINT16_MAX;
	int16_t x487 = INT16_MIN;
	uint32_t x488 = 178038807U;

    t81 = (x485>(x486/(x487*x488)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x493 = -2;
	static int8_t x494 = INT8_MIN;
	int8_t x495 = INT8_MIN;
	uint32_t x496 = UINT32_MAX;
	int32_t t82 = -141;

    t82 = (x493>(x494/(x495*x496)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x501 = INT64_MAX;
	int8_t x502 = -1;
	static int8_t x503 = -1;
	uint64_t x504 = UINT64_MAX;
	int32_t t83 = 87952;

    t83 = (x501>(x502/(x503*x504)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x509 = INT64_MIN;
	int16_t x510 = -39;
	int16_t x511 = 4671;
	int8_t x512 = -3;
	int32_t t84 = -9;

    t84 = (x509>(x510/(x511*x512)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x513 = INT32_MIN;
	int64_t x514 = -1LL;
	int32_t x515 = -1;
	int8_t x516 = INT8_MIN;

    t85 = (x513>(x514/(x515*x516)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x517 = 0;
	int8_t x519 = -1;
	int32_t t86 = -9457;

    t86 = (x517>(x518/(x519*x520)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x525 = -12;
	int64_t x526 = 1LL;
	static int16_t x527 = 1845;
	int8_t x528 = INT8_MAX;
	volatile int32_t t87 = -1975;

    t87 = (x525>(x526/(x527*x528)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x530 = -4018LL;
	static int64_t x531 = -2944841612129LL;
	int16_t x532 = 1;
	int32_t t88 = -6485848;

    t88 = (x529>(x530/(x531*x532)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x533 = -1;
	uint64_t x534 = 10616420LLU;
	volatile int16_t x535 = -1;
	int8_t x536 = -1;
	volatile int32_t t89 = -62;

    t89 = (x533>(x534/(x535*x536)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x541 = 620U;
	int8_t x543 = INT8_MIN;
	uint32_t x544 = UINT32_MAX;
	static volatile int32_t t90 = -249522;

    t90 = (x541>(x542/(x543*x544)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x545 = UINT8_MAX;
	int16_t x548 = -1;
	int32_t t91 = 14377;

    t91 = (x545>(x546/(x547*x548)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x553 = UINT32_MAX;
	int8_t x554 = -1;
	int32_t x555 = -245677;
	static uint8_t x556 = UINT8_MAX;
	int32_t t92 = -790;

    t92 = (x553>(x554/(x555*x556)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x569 = -1;
	static int64_t x570 = 0LL;
	int8_t x571 = INT8_MIN;
	static volatile int16_t x572 = 5;
	volatile int32_t t93 = 7301282;

    t93 = (x569>(x570/(x571*x572)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x574 = 263576214142170927LLU;
	static int8_t x575 = -18;
	uint16_t x576 = 9U;

    t94 = (x573>(x574/(x575*x576)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x581 = -620917176348151LL;
	volatile uint16_t x582 = 140U;
	int8_t x583 = INT8_MIN;
	volatile int8_t x584 = -1;

    t95 = (x581>(x582/(x583*x584)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x585 = INT8_MIN;
	volatile int64_t x586 = INT64_MIN;
	volatile int8_t x587 = -13;
	int8_t x588 = INT8_MIN;
	int32_t t96 = 697319408;

    t96 = (x585>(x586/(x587*x588)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x589 = INT32_MAX;
	static uint32_t x590 = 19U;
	int64_t x591 = 91529708LL;
	volatile int32_t t97 = -37740280;

    t97 = (x589>(x590/(x591*x592)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x594 = INT64_MIN;
	int16_t x596 = INT16_MAX;
	int32_t t98 = -3948;

    t98 = (x593>(x594/(x595*x596)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x601 = 184U;
	volatile int8_t x602 = INT8_MIN;
	uint8_t x604 = UINT8_MAX;
	volatile int32_t t99 = 2257028;

    t99 = (x601>(x602/(x603*x604)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x605 = -1LL;
	int8_t x606 = -1;
	volatile int8_t x607 = -1;
	int32_t x608 = INT32_MAX;
	static volatile int32_t t100 = -5;

    t100 = (x605>(x606/(x607*x608)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x610 = INT8_MAX;
	uint8_t x611 = UINT8_MAX;
	uint8_t x612 = 9U;
	volatile int32_t t101 = 2049527;

    t101 = (x609>(x610/(x611*x612)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile uint32_t x629 = UINT32_MAX;
	static uint32_t x630 = 363U;
	int32_t t102 = -408;

    t102 = (x629>(x630/(x631*x632)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x634 = -1;
	int8_t x635 = INT8_MAX;
	volatile int32_t x636 = -1;
	int32_t t103 = -1;

    t103 = (x633>(x634/(x635*x636)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x637 = -6752409295LL;
	static int16_t x638 = INT16_MIN;

    t104 = (x637>(x638/(x639*x640)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x649 = -1;
	int64_t x650 = INT64_MIN;
	volatile int32_t t105 = 7224242;

    t105 = (x649>(x650/(x651*x652)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x653 = 25471077LLU;
	static uint8_t x654 = UINT8_MAX;
	uint64_t x656 = UINT64_MAX;
	int32_t t106 = 321;

    t106 = (x653>(x654/(x655*x656)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x657 = 15;
	uint16_t x659 = UINT16_MAX;
	uint32_t x660 = 1760440U;
	int32_t t107 = 17918425;

    t107 = (x657>(x658/(x659*x660)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint64_t x661 = UINT64_MAX;
	int32_t x662 = INT32_MIN;
	volatile uint32_t x663 = 30U;
	uint8_t x664 = 4U;

    t108 = (x661>(x662/(x663*x664)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x669 = INT8_MIN;
	uint32_t x671 = 11U;
	int32_t t109 = -200;

    t109 = (x669>(x670/(x671*x672)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x673 = INT8_MIN;
	static int8_t x675 = INT8_MIN;

    t110 = (x673>(x674/(x675*x676)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x677 = 934227;
	static uint8_t x678 = 20U;
	uint32_t x679 = 899427U;
	volatile uint32_t x680 = 1U;
	int32_t t111 = -41104324;

    t111 = (x677>(x678/(x679*x680)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x681 = -1;
	uint8_t x682 = UINT8_MAX;
	int8_t x683 = -20;
	int16_t x684 = INT16_MAX;
	int32_t t112 = 872076;

    t112 = (x681>(x682/(x683*x684)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x685 = -1;
	static int16_t x688 = INT16_MIN;

    t113 = (x685>(x686/(x687*x688)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x695 = 4;
	int8_t x696 = -1;
	volatile int32_t t114 = 931;

    t114 = (x693>(x694/(x695*x696)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x697 = -1;
	uint64_t x699 = UINT64_MAX;
	uint64_t x700 = 532747LLU;

    t115 = (x697>(x698/(x699*x700)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x706 = 347228500672LL;
	volatile int16_t x707 = INT16_MIN;
	int16_t x708 = INT16_MIN;

    t116 = (x705>(x706/(x707*x708)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x709 = 0;
	volatile int32_t x710 = INT32_MIN;
	int32_t x711 = -444450717;
	volatile int32_t t117 = 37632525;

    t117 = (x709>(x710/(x711*x712)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x713 = INT8_MAX;
	static int32_t x714 = INT32_MIN;
	static int16_t x716 = -1;
	volatile int32_t t118 = 996358365;

    t118 = (x713>(x714/(x715*x716)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x717 = -1;
	static uint8_t x718 = 22U;
	int8_t x719 = INT8_MIN;
	uint32_t x720 = UINT32_MAX;

    t119 = (x717>(x718/(x719*x720)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x721 = 1873755;
	int64_t x722 = INT64_MIN;
	uint32_t x723 = 1530389404U;

    t120 = (x721>(x722/(x723*x724)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x726 = -331;
	static uint64_t x727 = UINT64_MAX;
	uint8_t x728 = UINT8_MAX;
	volatile int32_t t121 = 489889;

    t121 = (x725>(x726/(x727*x728)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int64_t x729 = -20LL;
	static int32_t x730 = INT32_MAX;
	int8_t x732 = -1;
	static int32_t t122 = 1267;

    t122 = (x729>(x730/(x731*x732)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x733 = INT64_MAX;
	static uint64_t x734 = 32535644975782LLU;
	volatile uint16_t x735 = 141U;
	int32_t t123 = -10491;

    t123 = (x733>(x734/(x735*x736)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x737 = -1;
	volatile int32_t x738 = INT32_MAX;
	static volatile uint16_t x739 = 198U;
	int32_t x740 = 26;
	int32_t t124 = 42321881;

    t124 = (x737>(x738/(x739*x740)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x741 = 816449135801358LLU;
	uint8_t x742 = UINT8_MAX;
	uint64_t x743 = 1530646762633519132LLU;
	int32_t x744 = INT32_MIN;
	int32_t t125 = -470910;

    t125 = (x741>(x742/(x743*x744)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x749 = 10645LLU;
	int8_t x750 = -6;
	int32_t x751 = 3429;
	uint16_t x752 = 1U;
	int32_t t126 = 77283279;

    t126 = (x749>(x750/(x751*x752)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x755 = 1;
	uint64_t x756 = UINT64_MAX;
	volatile int32_t t127 = 91572115;

    t127 = (x753>(x754/(x755*x756)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x761 = INT16_MIN;
	int16_t x762 = -1;
	uint16_t x764 = 205U;
	volatile int32_t t128 = 209;

    t128 = (x761>(x762/(x763*x764)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x769 = INT16_MIN;
	int32_t x770 = -1;
	int32_t x771 = -1;
	uint32_t x772 = 8U;
	volatile int32_t t129 = 294993655;

    t129 = (x769>(x770/(x771*x772)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint8_t x773 = 1U;
	int64_t x774 = 4LL;
	static uint8_t x775 = UINT8_MAX;
	int16_t x776 = INT16_MIN;

    t130 = (x773>(x774/(x775*x776)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x782 = 15704U;
	static uint16_t x784 = UINT16_MAX;

    t131 = (x781>(x782/(x783*x784)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x786 = INT32_MIN;
	volatile uint64_t x787 = 544861197220424424LLU;
	volatile int16_t x788 = INT16_MIN;
	volatile int32_t t132 = 1;

    t132 = (x785>(x786/(x787*x788)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x789 = 79549105U;
	volatile int32_t x790 = 30248;
	volatile int16_t x791 = INT16_MAX;
	int8_t x792 = -1;

    t133 = (x789>(x790/(x791*x792)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x793 = -226LL;
	int64_t x794 = -521099812507273643LL;
	int32_t x795 = -1;
	volatile int32_t t134 = 139325;

    t134 = (x793>(x794/(x795*x796)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x797 = INT16_MIN;
	int64_t x798 = INT64_MAX;
	int8_t x799 = INT8_MAX;

    t135 = (x797>(x798/(x799*x800)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x801 = -1;
	uint16_t x802 = 465U;
	int8_t x803 = INT8_MIN;
	uint32_t x804 = 15U;
	int32_t t136 = 740094477;

    t136 = (x801>(x802/(x803*x804)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x809 = UINT8_MAX;
	int16_t x810 = INT16_MIN;
	static uint8_t x812 = UINT8_MAX;
	int32_t t137 = -71;

    t137 = (x809>(x810/(x811*x812)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x821 = 543917755LL;
	uint32_t x822 = 26683367U;
	int64_t x823 = 178935294971LL;
	static int32_t x824 = -759116;
	int32_t t138 = -916;

    t138 = (x821>(x822/(x823*x824)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x825 = UINT8_MAX;
	int64_t x826 = INT64_MIN;
	volatile uint16_t x827 = 2258U;
	int8_t x828 = INT8_MAX;
	int32_t t139 = -28084235;

    t139 = (x825>(x826/(x827*x828)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x830 = -3235033613880515LL;
	uint8_t x831 = UINT8_MAX;
	uint64_t x832 = 701250853619139743LLU;

    t140 = (x829>(x830/(x831*x832)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x833 = -1;
	int16_t x834 = INT16_MIN;
	static int16_t x835 = -124;
	int32_t t141 = 7;

    t141 = (x833>(x834/(x835*x836)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x837 = 396515637LL;
	volatile uint16_t x838 = UINT16_MAX;
	int16_t x840 = -1;

    t142 = (x837>(x838/(x839*x840)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x843 = INT8_MIN;
	int32_t t143 = -1474;

    t143 = (x841>(x842/(x843*x844)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x845 = INT64_MAX;
	static uint8_t x846 = 106U;
	int16_t x848 = INT16_MIN;
	int32_t t144 = -5297956;

    t144 = (x845>(x846/(x847*x848)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x850 = 11958738U;
	uint64_t x851 = UINT64_MAX;
	volatile int64_t x852 = -1LL;
	int32_t t145 = -29363827;

    t145 = (x849>(x850/(x851*x852)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x853 = INT32_MAX;
	volatile int16_t x854 = INT16_MIN;
	uint32_t x855 = 2048296U;
	static uint16_t x856 = UINT16_MAX;
	int32_t t146 = -14;

    t146 = (x853>(x854/(x855*x856)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x857 = INT32_MAX;
	volatile uint8_t x858 = 0U;
	uint64_t x859 = 993LLU;
	int8_t x860 = INT8_MIN;
	int32_t t147 = 789346841;

    t147 = (x857>(x858/(x859*x860)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x869 = INT32_MIN;
	int64_t x870 = -2261180339LL;
	uint32_t x871 = UINT32_MAX;
	int16_t x872 = INT16_MIN;
	volatile int32_t t148 = 0;

    t148 = (x869>(x870/(x871*x872)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x881 = 72U;
	static int64_t x882 = INT64_MIN;
	uint16_t x883 = UINT16_MAX;
	int32_t x884 = 24;
	int32_t t149 = 877208;

    t149 = (x881>(x882/(x883*x884)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int8_t x885 = -34;
	int8_t x886 = 2;
	static uint64_t x887 = UINT64_MAX;
	uint32_t x888 = UINT32_MAX;
	int32_t t150 = 55435477;

    t150 = (x885>(x886/(x887*x888)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x893 = INT64_MIN;
	int16_t x894 = INT16_MAX;
	static int16_t x895 = INT16_MIN;
	volatile int16_t x896 = -1;
	volatile int32_t t151 = -217;

    t151 = (x893>(x894/(x895*x896)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x897 = UINT8_MAX;
	int16_t x898 = -1;
	uint64_t x899 = UINT64_MAX;
	int32_t x900 = INT32_MIN;
	volatile int32_t t152 = -10879672;

    t152 = (x897>(x898/(x899*x900)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint32_t x901 = UINT32_MAX;
	int16_t x902 = INT16_MIN;
	volatile int32_t t153 = -128497119;

    t153 = (x901>(x902/(x903*x904)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x906 = -1;
	static int8_t x907 = 53;
	static int8_t x908 = INT8_MIN;
	static volatile int32_t t154 = -444960199;

    t154 = (x905>(x906/(x907*x908)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x909 = -1LL;
	int8_t x911 = INT8_MIN;
	int16_t x912 = INT16_MAX;
	int32_t t155 = -965;

    t155 = (x909>(x910/(x911*x912)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x913 = 107000034U;
	uint32_t x914 = UINT32_MAX;
	static int8_t x916 = INT8_MAX;
	int32_t t156 = -12280086;

    t156 = (x913>(x914/(x915*x916)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x917 = -1;
	static int64_t x918 = INT64_MAX;
	static volatile int64_t x919 = -1LL;
	static int32_t x920 = INT32_MIN;
	volatile int32_t t157 = -191;

    t157 = (x917>(x918/(x919*x920)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x925 = 16738U;
	static int32_t x926 = -1;
	int8_t x927 = INT8_MIN;
	uint64_t x928 = UINT64_MAX;

    t158 = (x925>(x926/(x927*x928)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x929 = INT16_MAX;
	uint64_t x930 = 77476345220LLU;
	volatile int16_t x931 = INT16_MIN;
	uint8_t x932 = UINT8_MAX;

    t159 = (x929>(x930/(x931*x932)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint8_t x938 = UINT8_MAX;
	int8_t x939 = 6;
	int16_t x940 = INT16_MAX;
	int32_t t160 = -115;

    t160 = (x937>(x938/(x939*x940)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x945 = 3;
	int32_t x948 = 1;
	int32_t t161 = 2;

    t161 = (x945>(x946/(x947*x948)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x953 = -1;
	uint32_t x955 = 402801U;
	int16_t x956 = INT16_MIN;

    t162 = (x953>(x954/(x955*x956)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint16_t x957 = UINT16_MAX;
	int32_t x958 = INT32_MIN;
	int64_t x959 = -9LL;
	volatile int32_t t163 = -4185;

    t163 = (x957>(x958/(x959*x960)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x964 = UINT8_MAX;
	static volatile int32_t t164 = -110644;

    t164 = (x961>(x962/(x963*x964)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x973 = -1LL;
	int64_t x974 = -1LL;
	int64_t x975 = -19480322LL;
	int8_t x976 = INT8_MIN;

    t165 = (x973>(x974/(x975*x976)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x977 = 23U;
	int16_t x978 = INT16_MIN;
	uint32_t x979 = 15059211U;
	uint64_t x980 = UINT64_MAX;
	int32_t t166 = 406;

    t166 = (x977>(x978/(x979*x980)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x987 = 9685U;
	int16_t x988 = INT16_MAX;
	int32_t t167 = 1;

    t167 = (x985>(x986/(x987*x988)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x993 = 86;
	int8_t x994 = -1;
	uint32_t x995 = 82U;
	volatile int16_t x996 = 166;
	int32_t t168 = -28352;

    t168 = (x993>(x994/(x995*x996)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x1001 = INT8_MIN;
	uint8_t x1003 = 76U;
	int16_t x1004 = -1;
	int32_t t169 = 24145008;

    t169 = (x1001>(x1002/(x1003*x1004)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint16_t x1009 = UINT16_MAX;
	int8_t x1011 = -1;

    t170 = (x1009>(x1010/(x1011*x1012)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x1013 = INT32_MAX;
	volatile int32_t t171 = 20;

    t171 = (x1013>(x1014/(x1015*x1016)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint8_t x1018 = 2U;
	int16_t x1019 = INT16_MAX;

    t172 = (x1017>(x1018/(x1019*x1020)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x1021 = 19U;
	int16_t x1022 = INT16_MIN;
	int32_t x1023 = 6;
	int16_t x1024 = -1;
	volatile int32_t t173 = -56433035;

    t173 = (x1021>(x1022/(x1023*x1024)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x1031 = 2154588U;
	volatile int32_t t174 = -1796;

    t174 = (x1029>(x1030/(x1031*x1032)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint8_t x1033 = 30U;
	uint8_t x1034 = 29U;
	uint32_t x1036 = 5873572U;

    t175 = (x1033>(x1034/(x1035*x1036)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x1045 = -1;
	int16_t x1047 = -1;

    t176 = (x1045>(x1046/(x1047*x1048)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x1049 = 123U;
	static volatile uint16_t x1050 = 11508U;
	int8_t x1051 = INT8_MIN;
	volatile int32_t t177 = -6;

    t177 = (x1049>(x1050/(x1051*x1052)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x1057 = INT32_MIN;
	uint32_t x1059 = UINT32_MAX;
	uint16_t x1060 = UINT16_MAX;

    t178 = (x1057>(x1058/(x1059*x1060)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x1061 = 23;
	int16_t x1062 = INT16_MIN;
	uint64_t x1063 = UINT64_MAX;
	int32_t x1064 = INT32_MIN;

    t179 = (x1061>(x1062/(x1063*x1064)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x1065 = 2;
	int64_t x1068 = -1LL;
	int32_t t180 = 4315;

    t180 = (x1065>(x1066/(x1067*x1068)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x1073 = INT32_MIN;
	static int32_t x1075 = -1;
	int16_t x1076 = INT16_MAX;
	int32_t t181 = 6849;

    t181 = (x1073>(x1074/(x1075*x1076)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x1077 = -1LL;
	uint32_t x1079 = UINT32_MAX;
	uint32_t x1080 = UINT32_MAX;

    t182 = (x1077>(x1078/(x1079*x1080)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint64_t x1081 = 106125385185757LLU;
	int16_t x1082 = -1;
	int16_t x1083 = 824;
	static volatile uint64_t x1084 = 245174631LLU;

    t183 = (x1081>(x1082/(x1083*x1084)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x1085 = UINT16_MAX;
	uint8_t x1086 = 0U;
	volatile uint8_t x1087 = 115U;
	uint8_t x1088 = 43U;

    t184 = (x1085>(x1086/(x1087*x1088)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x1089 = -1;
	volatile int16_t x1090 = INT16_MAX;
	static volatile int32_t x1091 = -11008;
	uint8_t x1092 = 86U;
	volatile int32_t t185 = 581688958;

    t185 = (x1089>(x1090/(x1091*x1092)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x1101 = -9009;
	int8_t x1102 = -1;
	volatile int32_t t186 = -8;

    t186 = (x1101>(x1102/(x1103*x1104)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x1109 = 47890;
	volatile int8_t x1110 = INT8_MIN;
	uint64_t x1112 = UINT64_MAX;

    t187 = (x1109>(x1110/(x1111*x1112)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x1113 = 1483485LLU;
	volatile int32_t x1114 = -1;
	int8_t x1115 = -1;
	static volatile int16_t x1116 = INT16_MIN;

    t188 = (x1113>(x1114/(x1115*x1116)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x1117 = -387;
	uint8_t x1118 = 5U;
	volatile int8_t x1119 = INT8_MIN;
	volatile uint8_t x1120 = UINT8_MAX;

    t189 = (x1117>(x1118/(x1119*x1120)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x1121 = 4U;
	static int16_t x1123 = 4;
	volatile int16_t x1124 = INT16_MIN;
	volatile int32_t t190 = -16768456;

    t190 = (x1121>(x1122/(x1123*x1124)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x1134 = UINT8_MAX;
	uint16_t x1135 = 716U;
	int32_t t191 = 0;

    t191 = (x1133>(x1134/(x1135*x1136)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x1137 = INT32_MIN;
	uint32_t x1138 = 334U;
	int16_t x1139 = -1;
	int16_t x1140 = 1828;
	int32_t t192 = -12;

    t192 = (x1137>(x1138/(x1139*x1140)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x1149 = INT64_MAX;
	static int8_t x1150 = -1;
	volatile uint64_t x1152 = UINT64_MAX;

    t193 = (x1149>(x1150/(x1151*x1152)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x1153 = INT8_MAX;
	int32_t x1154 = INT32_MIN;
	int64_t x1155 = -2656078068095LL;
	int64_t x1156 = -1LL;
	volatile int32_t t194 = -5345874;

    t194 = (x1153>(x1154/(x1155*x1156)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x1157 = -9572527;
	static uint32_t x1158 = 25U;
	int8_t x1160 = INT8_MAX;
	volatile int32_t t195 = -2637;

    t195 = (x1157>(x1158/(x1159*x1160)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x1165 = 2U;
	volatile uint64_t x1167 = 76513213049LLU;
	static int16_t x1168 = 15;

    t196 = (x1165>(x1166/(x1167*x1168)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x1173 = 51107579U;
	volatile uint8_t x1174 = 1U;
	int32_t x1176 = INT32_MAX;

    t197 = (x1173>(x1174/(x1175*x1176)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x1178 = -1;
	int64_t x1179 = INT64_MAX;
	uint64_t x1180 = 28621278LLU;
	static volatile int32_t t198 = 34393237;

    t198 = (x1177>(x1178/(x1179*x1180)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1182 = INT16_MIN;
	uint8_t x1183 = 12U;
	int32_t t199 = 13386060;

    t199 = (x1181>(x1182/(x1183*x1184)));

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



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

volatile int16_t x1 = INT16_MAX;
static volatile int16_t x2 = 365;
static int16_t x8 = INT16_MIN;
uint16_t x14 = 18820U;
volatile uint32_t x25 = 596U;
uint32_t x38 = 42542U;
int64_t t7 = -241556850067LL;
int8_t x53 = INT8_MIN;
static volatile int64_t t11 = 36154488936902991LL;
uint32_t x61 = UINT32_MAX;
uint16_t x62 = 10679U;
static uint16_t x63 = UINT16_MAX;
uint16_t x66 = 25U;
int8_t x73 = -1;
volatile uint32_t t15 = 102525633U;
int16_t x84 = -1;
int16_t x88 = INT16_MIN;
static uint64_t x99 = 17251908LLU;
int16_t x109 = -1;
int64_t x112 = INT64_MIN;
uint32_t x122 = 11707U;
uint16_t x131 = UINT16_MAX;
uint8_t x136 = 54U;
uint16_t x142 = 1U;
int16_t x143 = INT16_MIN;
uint32_t t28 = 12U;
int16_t x160 = -221;
int8_t x162 = -1;
int64_t x168 = -1LL;
static volatile int64_t t32 = 760028676598605723LL;
uint64_t t33 = 310225363913363270LLU;
int32_t x183 = INT32_MIN;
int32_t x184 = -9894;
int64_t x188 = -67664667105LL;
static volatile uint64_t x200 = 14738LLU;
int32_t t39 = -5;
static uint32_t x216 = 0U;
uint32_t t41 = 73U;
int8_t x225 = INT8_MIN;
uint32_t x233 = 62U;
volatile uint32_t t45 = 29U;
uint64_t x238 = UINT64_MAX;
int8_t x239 = 0;
uint8_t x242 = 1U;
static volatile int8_t x250 = 1;
static int8_t x252 = INT8_MIN;
uint64_t t49 = 650754LLU;
uint16_t x253 = UINT16_MAX;
static volatile uint16_t x269 = 3084U;
int16_t x273 = 0;
uint8_t x275 = 13U;
volatile uint32_t x276 = 7669687U;
int16_t x279 = INT16_MAX;
uint8_t x290 = 12U;
static int32_t x291 = INT32_MIN;
volatile uint32_t t56 = 6U;
uint64_t x295 = 257843071287741652LLU;
static uint32_t x316 = UINT32_MAX;
int16_t x321 = 15723;
static volatile int32_t x335 = INT32_MIN;
int8_t x336 = INT8_MIN;
int8_t x342 = INT8_MIN;
uint32_t t65 = 5692U;
uint16_t x349 = UINT16_MAX;
volatile int8_t x350 = INT8_MAX;
int32_t x352 = -16233307;
volatile int64_t t66 = 5302173412993LL;
static uint32_t x358 = 1634896493U;
int16_t x359 = INT16_MIN;
int64_t x360 = INT64_MAX;
int32_t x361 = 180334446;
int8_t x363 = -1;
int16_t x375 = 7;
volatile uint8_t x377 = 0U;
volatile int16_t x402 = -1;
volatile int32_t x404 = INT32_MIN;
volatile int64_t x407 = 1547371565895427LL;
int16_t x410 = INT16_MIN;
uint32_t x413 = 659648U;
uint32_t t74 = 416772U;
static int8_t x417 = INT8_MIN;
int8_t x423 = -1;
uint32_t x436 = 57U;
int32_t x446 = -1;
int64_t t81 = -674243LL;
int8_t x458 = -13;
int16_t x470 = 72;
volatile int64_t t85 = -189776246259352639LL;
int16_t x481 = INT16_MIN;
static int16_t x482 = 3134;
uint64_t t90 = 46795LLU;
int16_t x494 = -1;
uint8_t x500 = UINT8_MAX;
volatile uint32_t t92 = 52U;
volatile uint64_t x507 = 49845413890866908LLU;
int16_t x508 = 13858;
static volatile int32_t x510 = -1;
uint64_t x514 = 704396468033LLU;
int32_t t96 = -68;
uint64_t x521 = 1477LLU;
volatile uint64_t t97 = 2923542LLU;
volatile int32_t x529 = 70;
int16_t x533 = -178;
int64_t x536 = INT64_MIN;
int32_t x541 = INT32_MIN;
int64_t x543 = INT64_MIN;
int64_t x546 = -39527LL;
static int64_t t103 = 428220536LL;
int64_t t104 = 104475307223LL;
int16_t x562 = -1;
static int32_t x564 = INT32_MIN;
uint64_t x571 = UINT64_MAX;
uint8_t x577 = UINT8_MAX;
uint16_t x578 = 62U;
int8_t x579 = -1;
int16_t x581 = INT16_MAX;
int64_t x582 = -1LL;
uint16_t x583 = 331U;
static int16_t x585 = -1;
volatile uint8_t x586 = 35U;
static uint8_t x596 = UINT8_MAX;
int16_t x601 = INT16_MIN;
uint16_t x604 = 30852U;
uint32_t x613 = 112U;
static volatile uint64_t x614 = 1740126097874384141LLU;
volatile int64_t x615 = 95716594184995301LL;
volatile int16_t x617 = 3;
int8_t x620 = INT8_MIN;
int8_t x625 = -1;
int16_t x626 = 6;
int16_t x627 = 61;
int8_t x650 = -1;
static volatile uint16_t x656 = UINT16_MAX;
static int16_t x661 = -1;
static int8_t x673 = -1;
volatile int64_t t128 = -10182427LL;
int32_t x679 = INT32_MIN;
uint32_t x682 = 11509216U;
volatile uint32_t t130 = 978278U;
uint32_t x689 = 45858U;
int8_t x691 = INT8_MIN;
uint16_t x702 = UINT16_MAX;
uint16_t x708 = 1332U;
int32_t t134 = 2946;
int32_t x710 = 11929;
int32_t x713 = INT32_MIN;
volatile uint16_t x716 = UINT16_MAX;
uint64_t x718 = 793892LLU;
uint8_t x719 = UINT8_MAX;
volatile int64_t x720 = INT64_MIN;
uint64_t t137 = 24602552LLU;
int64_t x721 = -5LL;
uint64_t x723 = 760429298773914987LLU;
volatile int64_t x724 = 291042504632LL;
uint64_t x726 = UINT64_MAX;
int8_t x728 = INT8_MAX;
static uint16_t x734 = 1U;
int64_t x737 = -12499741417LL;
volatile int8_t x738 = INT8_MIN;
static int32_t t143 = 3844360;
int16_t x761 = -1;
volatile int16_t x773 = INT16_MAX;
int8_t x775 = 43;
volatile int16_t x779 = -8;
int8_t x781 = -1;
volatile int8_t x789 = -1;
static int16_t x790 = 57;
uint8_t x793 = 2U;
volatile int8_t x795 = -7;
uint32_t x800 = 3926U;
int32_t x821 = INT32_MIN;
int64_t x822 = 39019LL;
int32_t x824 = 2963;
volatile int8_t x830 = 12;
static volatile int8_t x832 = 0;
volatile uint16_t x835 = UINT16_MAX;
uint64_t x837 = 77687714665631LLU;
uint64_t t156 = 10984059207360LLU;
uint32_t x845 = 495295U;
int16_t x846 = -1;
int32_t x851 = INT32_MAX;
uint64_t x854 = 32589927785239LLU;
uint64_t t159 = 158091296LLU;
int64_t x859 = 175LL;
uint8_t x860 = UINT8_MAX;
static volatile int64_t t160 = -234009LL;
static int8_t x866 = 1;
int32_t x868 = INT32_MIN;
static int8_t x869 = 0;
volatile int8_t x880 = INT8_MIN;
volatile uint8_t x884 = UINT8_MAX;
int8_t x894 = INT8_MAX;
static volatile int8_t x895 = 3;
int16_t x906 = -3395;
int8_t x908 = INT8_MAX;
volatile int8_t x910 = INT8_MIN;
uint8_t x911 = UINT8_MAX;
volatile int8_t x912 = INT8_MIN;
static uint64_t x922 = 462740400348LLU;
int32_t x924 = 298785;
static int32_t x945 = -1;
static volatile uint64_t t179 = 2644903LLU;
uint16_t x950 = 35U;
int8_t x963 = INT8_MAX;
static volatile uint32_t x966 = 60U;
uint16_t x970 = 519U;
uint32_t t185 = 124U;
static uint32_t x991 = 24406U;
uint64_t x1002 = UINT64_MAX;
static volatile uint64_t t188 = 48173567959022LLU;
static int64_t x1009 = -1LL;
int32_t x1010 = INT32_MIN;
uint64_t x1012 = 246156LLU;
uint64_t t189 = 44934307540647LLU;
uint16_t x1030 = 103U;
int32_t x1034 = -6;
int32_t x1038 = -231105;
int8_t x1050 = 6;
volatile int32_t x1054 = -1;
volatile uint64_t t198 = 1191462427053584953LLU;
volatile int64_t x1058 = -1LL;


void f0(void) {
    	int8_t x3 = INT8_MIN;
	uint16_t x4 = UINT16_MAX;
	int32_t t0 = -824700;

    t0 = (((x1*x2)&x3)&x4);

    if (t0 != 32384) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 101285773U;
	static int64_t x6 = 55048534482LL;
	int8_t x7 = INT8_MIN;
	int64_t t1 = 879537583463LL;

    t1 = (((x5*x6)&x7)&x8);

    if (t1 != 5575633367526506496LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x9 = -49;
	static uint64_t x10 = 727258LLU;
	uint16_t x11 = UINT16_MAX;
	uint8_t x12 = UINT8_MAX;
	uint64_t t2 = 119822058621LLU;

    t2 = (((x9*x10)&x11)&x12);

    if (t2 != 70LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = 28U;
	int16_t x15 = INT16_MIN;
	int64_t x16 = INT64_MAX;
	int64_t t3 = 328LL;

    t3 = (((x13*x14)&x15)&x16);

    if (t3 != 524288LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x21 = INT8_MIN;
	uint16_t x22 = UINT16_MAX;
	int8_t x23 = 1;
	int16_t x24 = 925;
	volatile int32_t t4 = 156066;

    t4 = (((x21*x22)&x23)&x24);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x26 = 0;
	uint8_t x27 = UINT8_MAX;
	int16_t x28 = INT16_MAX;
	uint32_t t5 = 1809U;

    t5 = (((x25*x26)&x27)&x28);

    if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x29 = INT8_MIN;
	int8_t x30 = INT8_MIN;
	volatile int8_t x31 = -4;
	int8_t x32 = INT8_MIN;
	volatile int32_t t6 = 100763;

    t6 = (((x29*x30)&x31)&x32);

    if (t6 != 16384) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x37 = -3708110770624LL;
	int16_t x39 = 3;
	int32_t x40 = INT32_MIN;

    t7 = (((x37*x38)&x39)&x40);

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x41 = INT16_MAX;
	uint16_t x42 = 1615U;
	volatile uint16_t x43 = 0U;
	int8_t x44 = -1;
	static volatile int32_t t8 = -21;

    t8 = (((x41*x42)&x43)&x44);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x45 = 131992245LLU;
	uint32_t x46 = 24U;
	static uint16_t x47 = 11U;
	static int32_t x48 = INT32_MAX;
	volatile uint64_t t9 = 4831LLU;

    t9 = (((x45*x46)&x47)&x48);

    if (t9 != 8LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint8_t x49 = UINT8_MAX;
	volatile uint8_t x50 = UINT8_MAX;
	int32_t x51 = INT32_MIN;
	static volatile int16_t x52 = INT16_MIN;
	volatile int32_t t10 = 3532;

    t10 = (((x49*x50)&x51)&x52);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x54 = 5;
	int64_t x55 = -110914887676341LL;
	uint16_t x56 = UINT16_MAX;

    t11 = (((x53*x54)&x55)&x56);

    if (t11 != 3072LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x64 = INT64_MIN;
	volatile int64_t t12 = -5986LL;

    t12 = (((x61*x62)&x63)&x64);

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile uint64_t x65 = 1306118011089LLU;
	int32_t x67 = INT32_MAX;
	static int8_t x68 = INT8_MAX;
	uint64_t t13 = 2134824906776574696LLU;

    t13 = (((x65*x66)&x67)&x68);

    if (t13 != 105LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x74 = 376LLU;
	uint64_t x75 = UINT64_MAX;
	uint16_t x76 = 3U;
	uint64_t t14 = 402738765305LLU;

    t14 = (((x73*x74)&x75)&x76);

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x77 = 912196U;
	static int32_t x78 = 20;
	int8_t x79 = INT8_MIN;
	volatile int32_t x80 = INT32_MAX;

    t15 = (((x77*x78)&x79)&x80);

    if (t15 != 18243840U) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x81 = INT64_MIN;
	volatile uint64_t x82 = UINT64_MAX;
	static volatile uint8_t x83 = UINT8_MAX;
	static volatile uint64_t t16 = 1106945036544732LLU;

    t16 = (((x81*x82)&x83)&x84);

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint8_t x85 = UINT8_MAX;
	uint64_t x86 = 7050919970196376LLU;
	int64_t x87 = INT64_MAX;
	uint64_t t17 = 408957790916LLU;

    t17 = (((x85*x86)&x87)&x88);

    if (t17 != 1797984592400056320LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x93 = INT16_MIN;
	volatile int8_t x94 = INT8_MIN;
	uint64_t x95 = 213LLU;
	int64_t x96 = INT64_MIN;
	uint64_t t18 = 530801618356305LLU;

    t18 = (((x93*x94)&x95)&x96);

    if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x97 = INT16_MIN;
	uint32_t x98 = 203U;
	volatile uint64_t x100 = 852253LLU;
	uint64_t t19 = 197139671LLU;

    t19 = (((x97*x98)&x99)&x100);

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x105 = 4081276109221889658LLU;
	static uint16_t x106 = 3593U;
	uint8_t x107 = 1U;
	volatile int32_t x108 = INT32_MAX;
	static volatile uint64_t t20 = 549687257202217492LLU;

    t20 = (((x105*x106)&x107)&x108);

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x110 = INT16_MAX;
	uint8_t x111 = 2U;
	volatile int64_t t21 = -258350469LL;

    t21 = (((x109*x110)&x111)&x112);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x113 = INT16_MIN;
	uint32_t x114 = 8361381U;
	int64_t x115 = INT64_MIN;
	static int32_t x116 = INT32_MIN;
	int64_t t22 = 97592764LL;

    t22 = (((x113*x114)&x115)&x116);

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x117 = -1LL;
	uint16_t x118 = UINT16_MAX;
	int32_t x119 = INT32_MAX;
	int64_t x120 = INT64_MAX;
	volatile int64_t t23 = -2377580554332LL;

    t23 = (((x117*x118)&x119)&x120);

    if (t23 != 2147418113LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x121 = 0;
	uint8_t x123 = 1U;
	int16_t x124 = -1;
	static volatile uint32_t t24 = 2U;

    t24 = (((x121*x122)&x123)&x124);

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x125 = UINT64_MAX;
	int16_t x126 = INT16_MAX;
	int16_t x127 = INT16_MIN;
	static int32_t x128 = 2306;
	uint64_t t25 = 119LLU;

    t25 = (((x125*x126)&x127)&x128);

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x129 = INT16_MIN;
	int8_t x130 = INT8_MAX;
	int32_t x132 = 83513442;
	volatile int32_t t26 = 22;

    t26 = (((x129*x130)&x131)&x132);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x133 = INT16_MAX;
	static int8_t x134 = INT8_MAX;
	int8_t x135 = -1;
	volatile int32_t t27 = -153112678;

    t27 = (((x133*x134)&x135)&x136);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint32_t x141 = 7639U;
	int16_t x144 = INT16_MIN;

    t28 = (((x141*x142)&x143)&x144);

    if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x149 = 15621550;
	uint64_t x150 = 129695251838851LLU;
	int32_t x151 = INT32_MIN;
	uint16_t x152 = 192U;
	uint64_t t29 = 8181139100338297601LLU;

    t29 = (((x149*x150)&x151)&x152);

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x157 = 265;
	int16_t x158 = INT16_MIN;
	uint16_t x159 = 1361U;
	volatile int32_t t30 = 10000304;

    t30 = (((x157*x158)&x159)&x160);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x161 = 5;
	int16_t x163 = -386;
	uint16_t x164 = 2032U;
	volatile int32_t t31 = 61;

    t31 = (((x161*x162)&x163)&x164);

    if (t31 != 1648) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x165 = 2U;
	int16_t x166 = INT16_MIN;
	volatile uint32_t x167 = UINT32_MAX;

    t32 = (((x165*x166)&x167)&x168);

    if (t32 != 4294901760LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x169 = UINT64_MAX;
	static volatile int64_t x170 = INT64_MIN;
	uint64_t x171 = UINT64_MAX;
	volatile uint8_t x172 = UINT8_MAX;

    t33 = (((x169*x170)&x171)&x172);

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x173 = 1U;
	int16_t x174 = INT16_MIN;
	uint16_t x175 = 8575U;
	uint64_t x176 = 2514395678816406LLU;
	uint64_t t34 = 1394294824282016883LLU;

    t34 = (((x173*x174)&x175)&x176);

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x181 = -1;
	int16_t x182 = -291;
	volatile int32_t t35 = -34;

    t35 = (((x181*x182)&x183)&x184);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x185 = -1;
	int8_t x186 = -1;
	int16_t x187 = INT16_MIN;
	volatile int64_t t36 = 6830184125418LL;

    t36 = (((x185*x186)&x187)&x188);

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x189 = 4U;
	uint64_t x190 = 83656677740294789LLU;
	int8_t x191 = -1;
	int8_t x192 = INT8_MIN;
	uint64_t t37 = 8018768LLU;

    t37 = (((x189*x190)&x191)&x192);

    if (t37 != 334626710961179136LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint32_t x197 = 213U;
	uint64_t x198 = 7LLU;
	static int8_t x199 = 0;
	volatile uint64_t t38 = 9856126908433337LLU;

    t38 = (((x197*x198)&x199)&x200);

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x205 = 0U;
	volatile int16_t x206 = 0;
	static uint8_t x207 = UINT8_MAX;
	int32_t x208 = INT32_MIN;

    t39 = (((x205*x206)&x207)&x208);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x209 = UINT16_MAX;
	uint8_t x210 = UINT8_MAX;
	volatile int16_t x211 = INT16_MIN;
	int32_t x212 = INT32_MIN;
	int32_t t40 = 18684012;

    t40 = (((x209*x210)&x211)&x212);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x213 = 1023;
	volatile uint32_t x214 = 17U;
	int16_t x215 = -95;

    t41 = (((x213*x214)&x215)&x216);

    if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x221 = INT32_MIN;
	uint32_t x222 = UINT32_MAX;
	int32_t x223 = -24285;
	uint32_t x224 = UINT32_MAX;
	uint32_t t42 = 0U;

    t42 = (((x221*x222)&x223)&x224);

    if (t42 != 2147483648U) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x226 = INT16_MIN;
	static volatile int8_t x227 = INT8_MIN;
	int16_t x228 = -1;
	volatile int32_t t43 = 1052381846;

    t43 = (((x225*x226)&x227)&x228);

    if (t43 != 4194304) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x229 = UINT64_MAX;
	uint32_t x230 = 13183U;
	static volatile int64_t x231 = INT64_MAX;
	int64_t x232 = -613305LL;
	volatile uint64_t t44 = 143039325128757475LLU;

    t44 = (((x229*x230)&x231)&x232);

    if (t44 != 9223372036854154241LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x234 = INT8_MAX;
	static int32_t x235 = 1;
	static int32_t x236 = -1;

    t45 = (((x233*x234)&x235)&x236);

    if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x237 = INT32_MIN;
	uint16_t x240 = 50U;
	static uint64_t t46 = 373742933548LLU;

    t46 = (((x237*x238)&x239)&x240);

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x241 = -518;
	volatile int64_t x243 = -16LL;
	uint16_t x244 = 831U;
	int64_t t47 = -9723LL;

    t47 = (((x241*x242)&x243)&x244);

    if (t47 != 304LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x245 = -1;
	int8_t x246 = -4;
	int16_t x247 = INT16_MAX;
	volatile uint8_t x248 = UINT8_MAX;
	volatile int32_t t48 = 10053682;

    t48 = (((x245*x246)&x247)&x248);

    if (t48 != 4) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x249 = 165;
	uint64_t x251 = 47768185LLU;

    t49 = (((x249*x250)&x251)&x252);

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x254 = -1;
	volatile uint64_t x255 = 52385LLU;
	int32_t x256 = INT32_MIN;
	volatile uint64_t t50 = 2072LLU;

    t50 = (((x253*x254)&x255)&x256);

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x261 = INT8_MIN;
	static int8_t x262 = -1;
	uint16_t x263 = 1U;
	volatile int8_t x264 = 0;
	int32_t t51 = 432398718;

    t51 = (((x261*x262)&x263)&x264);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x265 = 5;
	int8_t x266 = 33;
	volatile uint32_t x267 = UINT32_MAX;
	uint8_t x268 = 59U;
	uint32_t t52 = 3706689U;

    t52 = (((x265*x266)&x267)&x268);

    if (t52 != 33U) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x270 = 172U;
	int64_t x271 = -1LL;
	int32_t x272 = INT32_MAX;
	int64_t t53 = -106995LL;

    t53 = (((x269*x270)&x271)&x272);

    if (t53 != 530448LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile uint16_t x274 = 87U;
	uint32_t t54 = 2103775866U;

    t54 = (((x273*x274)&x275)&x276);

    if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x277 = 0;
	int16_t x278 = -1;
	volatile int8_t x280 = -1;
	volatile int32_t t55 = 461180;

    t55 = (((x277*x278)&x279)&x280);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint32_t x289 = 2050064262U;
	int32_t x292 = 26775;

    t56 = (((x289*x290)&x291)&x292);

    if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x293 = 3420U;
	int8_t x294 = INT8_MIN;
	int8_t x296 = -1;
	uint64_t t57 = 5741132091056LLU;

    t57 = (((x293*x294)&x295)&x296);

    if (t57 != 1071661056LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x297 = -1LL;
	uint8_t x298 = 6U;
	int8_t x299 = -1;
	static uint16_t x300 = 191U;
	int64_t t58 = 713LL;

    t58 = (((x297*x298)&x299)&x300);

    if (t58 != 186LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x313 = 508LLU;
	int8_t x314 = -15;
	volatile int8_t x315 = -1;
	static uint64_t t59 = 51428992223901983LLU;

    t59 = (((x313*x314)&x315)&x316);

    if (t59 != 4294959676LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x317 = -1;
	uint32_t x318 = 33U;
	int32_t x319 = -5;
	static uint64_t x320 = 6LLU;
	uint64_t t60 = 20852878154287LLU;

    t60 = (((x317*x318)&x319)&x320);

    if (t60 != 2LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint32_t x322 = 1482263U;
	uint8_t x323 = 0U;
	static uint32_t x324 = 8294058U;
	static uint32_t t61 = 8U;

    t61 = (((x321*x322)&x323)&x324);

    if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x325 = -1;
	static uint8_t x326 = 83U;
	volatile int32_t x327 = INT32_MIN;
	uint16_t x328 = UINT16_MAX;
	int32_t t62 = -28876127;

    t62 = (((x325*x326)&x327)&x328);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint16_t x333 = UINT16_MAX;
	static int8_t x334 = INT8_MAX;
	volatile int32_t t63 = 1733687;

    t63 = (((x333*x334)&x335)&x336);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x341 = -1;
	uint16_t x343 = 1U;
	volatile int8_t x344 = INT8_MIN;
	static volatile int32_t t64 = 19038946;

    t64 = (((x341*x342)&x343)&x344);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x345 = 3;
	static volatile uint32_t x346 = 488372184U;
	int16_t x347 = INT16_MAX;
	int8_t x348 = INT8_MIN;

    t65 = (((x345*x346)&x347)&x348);

    if (t65 != 26496U) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x351 = INT64_MIN;

    t66 = (((x349*x350)&x351)&x352);

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x357 = -1;
	static int64_t t67 = 1207090043958020997LL;

    t67 = (((x357*x358)&x359)&x360);

    if (t67 != 2660040704LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x362 = 8LLU;
	static int32_t x364 = INT32_MIN;
	static volatile uint64_t t68 = 648548145LLU;

    t68 = (((x361*x362)&x363)&x364);

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x373 = 1U;
	int32_t x374 = -1;
	int8_t x376 = INT8_MIN;
	static uint32_t t69 = 32462843U;

    t69 = (((x373*x374)&x375)&x376);

    if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x378 = INT64_MAX;
	int32_t x379 = -1;
	int64_t x380 = INT64_MAX;
	static int64_t t70 = -16095008410LL;

    t70 = (((x377*x378)&x379)&x380);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x401 = 209U;
	uint32_t x403 = UINT32_MAX;
	volatile uint32_t t71 = 588506U;

    t71 = (((x401*x402)&x403)&x404);

    if (t71 != 2147483648U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x405 = 20954U;
	static int32_t x406 = 84465900;
	int8_t x408 = -1;
	static volatile int64_t t72 = 43676338LL;

    t72 = (((x405*x406)&x407)&x408);

    if (t72 != 67191808LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x409 = -1598;
	uint64_t x411 = 317743522LLU;
	int64_t x412 = -1LL;
	static uint64_t t73 = 53807626016831LLU;

    t73 = (((x409*x410)&x411)&x412);

    if (t73 != 34603008LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x414 = 12U;
	int8_t x415 = INT8_MIN;
	int32_t x416 = INT32_MAX;

    t74 = (((x413*x414)&x415)&x416);

    if (t74 != 7915776U) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x418 = INT16_MIN;
	static uint64_t x419 = UINT64_MAX;
	uint64_t x420 = UINT64_MAX;
	volatile uint64_t t75 = 107LLU;

    t75 = (((x417*x418)&x419)&x420);

    if (t75 != 4194304LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x421 = INT16_MIN;
	uint16_t x422 = 31U;
	int8_t x424 = 10;
	volatile int32_t t76 = -28034;

    t76 = (((x421*x422)&x423)&x424);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint8_t x429 = UINT8_MAX;
	uint16_t x430 = 8U;
	int8_t x431 = -11;
	volatile int32_t x432 = INT32_MIN;
	volatile int32_t t77 = 6933;

    t77 = (((x429*x430)&x431)&x432);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x433 = -12;
	static uint32_t x434 = 116068239U;
	uint32_t x435 = 31317U;
	volatile uint32_t t78 = 513962U;

    t78 = (((x433*x434)&x435)&x436);

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x437 = 620LLU;
	uint8_t x438 = UINT8_MAX;
	int64_t x439 = -1LL;
	volatile uint8_t x440 = UINT8_MAX;
	uint64_t t79 = 760740982507LLU;

    t79 = (((x437*x438)&x439)&x440);

    if (t79 != 148LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint16_t x441 = 10U;
	int16_t x442 = INT16_MIN;
	int8_t x443 = -1;
	static int8_t x444 = -1;
	int32_t t80 = -8;

    t80 = (((x441*x442)&x443)&x444);

    if (t80 != -327680) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint32_t x445 = 32U;
	static int16_t x447 = -1;
	int64_t x448 = -1LL;

    t81 = (((x445*x446)&x447)&x448);

    if (t81 != 4294967264LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x453 = 3U;
	int8_t x454 = INT8_MAX;
	volatile uint16_t x455 = 18U;
	static volatile int8_t x456 = INT8_MAX;
	int32_t t82 = 20;

    t82 = (((x453*x454)&x455)&x456);

    if (t82 != 16) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x457 = 3U;
	int8_t x459 = -1;
	int8_t x460 = -3;
	int32_t t83 = 203628663;

    t83 = (((x457*x458)&x459)&x460);

    if (t83 != -39) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint8_t x461 = UINT8_MAX;
	int64_t x462 = 3928994853LL;
	int8_t x463 = INT8_MIN;
	int8_t x464 = INT8_MAX;
	static volatile int64_t t84 = 0LL;

    t84 = (((x461*x462)&x463)&x464);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x469 = 470557428453845LL;
	int16_t x471 = INT16_MIN;
	int32_t x472 = -2807170;

    t85 = (((x469*x470)&x471)&x472);

    if (t85 != 33880134848151552LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x473 = UINT64_MAX;
	static int8_t x474 = INT8_MIN;
	static int64_t x475 = INT64_MIN;
	uint16_t x476 = 92U;
	static uint64_t t86 = 35799LLU;

    t86 = (((x473*x474)&x475)&x476);

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x477 = INT32_MIN;
	uint32_t x478 = 20482996U;
	static int64_t x479 = INT64_MIN;
	volatile uint32_t x480 = 49U;
	static volatile int64_t t87 = -112112656763LL;

    t87 = (((x477*x478)&x479)&x480);

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x483 = INT64_MAX;
	volatile int64_t x484 = -222338516LL;
	volatile int64_t t88 = -12798275225878LL;

    t88 = (((x481*x482)&x483)&x484);

    if (t88 != 9223372036596891648LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x485 = INT64_MIN;
	uint64_t x486 = 4246905383726906LLU;
	static uint8_t x487 = 0U;
	static int64_t x488 = -1LL;
	volatile uint64_t t89 = 44893LLU;

    t89 = (((x485*x486)&x487)&x488);

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x489 = 122335LLU;
	static int8_t x490 = INT8_MIN;
	uint8_t x491 = 6U;
	int8_t x492 = INT8_MAX;

    t90 = (((x489*x490)&x491)&x492);

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x493 = -289923635;
	int16_t x495 = INT16_MIN;
	int8_t x496 = INT8_MAX;
	int32_t t91 = 7352219;

    t91 = (((x493*x494)&x495)&x496);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x497 = INT32_MIN;
	volatile uint32_t x498 = UINT32_MAX;
	volatile int8_t x499 = INT8_MIN;

    t92 = (((x497*x498)&x499)&x500);

    if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x505 = INT8_MIN;
	int16_t x506 = 892;
	uint64_t t93 = 18219191LLU;

    t93 = (((x505*x506)&x507)&x508);

    if (t93 != 512LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x509 = 476U;
	int32_t x511 = INT32_MAX;
	uint64_t x512 = 559319939585246528LLU;
	volatile uint64_t t94 = 50215823663960462LLU;

    t94 = (((x509*x510)&x511)&x512);

    if (t94 != 180716544LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x513 = 17482LL;
	static int32_t x515 = INT32_MIN;
	int16_t x516 = INT16_MIN;
	static volatile uint64_t t95 = 68320LLU;

    t95 = (((x513*x514)&x515)&x516);

    if (t95 != 12314257500667904LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x517 = -1;
	static int8_t x518 = -1;
	volatile int8_t x519 = 1;
	int16_t x520 = 3;

    t96 = (((x517*x518)&x519)&x520);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint32_t x522 = UINT32_MAX;
	int8_t x523 = INT8_MIN;
	int64_t x524 = -1LL;

    t97 = (((x521*x522)&x523)&x524);

    if (t97 != 6343666694656LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x525 = INT8_MIN;
	uint8_t x526 = 1U;
	int32_t x527 = INT32_MIN;
	static uint16_t x528 = 3U;
	int32_t t98 = -870;

    t98 = (((x525*x526)&x527)&x528);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x530 = -4271;
	static int64_t x531 = INT64_MAX;
	static uint16_t x532 = UINT16_MAX;
	volatile int64_t t99 = 147739109571LL;

    t99 = (((x529*x530)&x531)&x532);

    if (t99 != 28710LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x534 = -1LL;
	int8_t x535 = INT8_MIN;
	volatile int64_t t100 = -1LL;

    t100 = (((x533*x534)&x535)&x536);

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x537 = -45158LL;
	uint64_t x538 = 2569880259010540LLU;
	volatile int32_t x539 = 359217692;
	int32_t x540 = INT32_MIN;
	uint64_t t101 = 15871LLU;

    t101 = (((x537*x538)&x539)&x540);

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x542 = 447930918990376LLU;
	uint16_t x544 = 8287U;
	uint64_t t102 = 62LLU;

    t102 = (((x541*x542)&x543)&x544);

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x545 = -8;
	int32_t x547 = INT32_MIN;
	uint32_t x548 = 29788U;

    t103 = (((x545*x546)&x547)&x548);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int16_t x549 = INT16_MIN;
	static int16_t x550 = -1;
	static int64_t x551 = INT64_MIN;
	volatile int32_t x552 = INT32_MAX;

    t104 = (((x549*x550)&x551)&x552);

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x553 = -1LL;
	uint32_t x554 = 104133U;
	static volatile uint8_t x555 = 3U;
	uint16_t x556 = 9790U;
	static volatile int64_t t105 = -699433LL;

    t105 = (((x553*x554)&x555)&x556);

    if (t105 != 2LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x557 = INT16_MAX;
	uint64_t x558 = 21475344131380LLU;
	int16_t x559 = INT16_MAX;
	uint16_t x560 = 17529U;
	volatile uint64_t t106 = 1052288626091215LLU;

    t106 = (((x557*x558)&x559)&x560);

    if (t106 != 16456LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x561 = INT16_MAX;
	int64_t x563 = -1LL;
	volatile int64_t t107 = -4021LL;

    t107 = (((x561*x562)&x563)&x564);

    if (t107 != -2147483648LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x569 = 376U;
	int8_t x570 = -1;
	static volatile int16_t x572 = 1873;
	uint64_t t108 = 513601LLU;

    t108 = (((x569*x570)&x571)&x572);

    if (t108 != 1536LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x573 = 11U;
	int8_t x574 = -1;
	uint32_t x575 = UINT32_MAX;
	volatile int8_t x576 = INT8_MIN;
	static volatile uint32_t t109 = 653990U;

    t109 = (((x573*x574)&x575)&x576);

    if (t109 != 4294967168U) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x580 = UINT16_MAX;
	volatile int32_t t110 = -181468;

    t110 = (((x577*x578)&x579)&x580);

    if (t110 != 15810) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x584 = UINT32_MAX;
	volatile int64_t t111 = -4914577LL;

    t111 = (((x581*x582)&x583)&x584);

    if (t111 != 1LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int64_t x587 = 8611397048926LL;
	volatile int8_t x588 = -1;
	static int64_t t112 = 45LL;

    t112 = (((x585*x586)&x587)&x588);

    if (t112 != 8611397048924LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x589 = 304U;
	static int32_t x590 = 174;
	volatile int64_t x591 = INT64_MIN;
	volatile uint64_t x592 = UINT64_MAX;
	volatile uint64_t t113 = 25905172073LLU;

    t113 = (((x589*x590)&x591)&x592);

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x593 = 172U;
	volatile uint32_t x594 = UINT32_MAX;
	int32_t x595 = INT32_MAX;
	volatile uint32_t t114 = 399U;

    t114 = (((x593*x594)&x595)&x596);

    if (t114 != 84U) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x597 = UINT16_MAX;
	volatile uint32_t x598 = 48U;
	int8_t x599 = -1;
	volatile int32_t x600 = -1;
	uint32_t t115 = 605114716U;

    t115 = (((x597*x598)&x599)&x600);

    if (t115 != 3145680U) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint8_t x602 = 52U;
	int8_t x603 = -1;
	int32_t t116 = 344;

    t116 = (((x601*x602)&x603)&x604);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x605 = UINT32_MAX;
	volatile uint64_t x606 = UINT64_MAX;
	static int8_t x607 = INT8_MAX;
	volatile int64_t x608 = -1LL;
	uint64_t t117 = 4LLU;

    t117 = (((x605*x606)&x607)&x608);

    if (t117 != 1LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x609 = 12U;
	static volatile int16_t x610 = 9;
	uint64_t x611 = 179212400016LLU;
	int8_t x612 = -12;
	volatile uint64_t t118 = 22749204873576LLU;

    t118 = (((x609*x610)&x611)&x612);

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x616 = INT16_MIN;
	uint64_t t119 = 4172690656LLU;

    t119 = (((x613*x614)&x615)&x616);

    if (t119 != 4508255657197568LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x618 = 17U;
	int8_t x619 = -14;
	uint32_t t120 = 595832103U;

    t120 = (((x617*x618)&x619)&x620);

    if (t120 != 0U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x628 = UINT8_MAX;
	static int32_t t121 = -4974;

    t121 = (((x625*x626)&x627)&x628);

    if (t121 != 56) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x629 = UINT64_MAX;
	int16_t x630 = INT16_MIN;
	int16_t x631 = INT16_MAX;
	volatile int32_t x632 = -1;
	static uint64_t t122 = 33536818468LLU;

    t122 = (((x629*x630)&x631)&x632);

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x637 = INT8_MIN;
	volatile int64_t x638 = 12888971698LL;
	int32_t x639 = 497610198;
	int8_t x640 = 40;
	int64_t t123 = 47517LL;

    t123 = (((x637*x638)&x639)&x640);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x649 = -3;
	static int32_t x651 = INT32_MIN;
	static uint64_t x652 = 57LLU;
	uint64_t t124 = 570626416461LLU;

    t124 = (((x649*x650)&x651)&x652);

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint16_t x653 = UINT16_MAX;
	int16_t x654 = 0;
	uint16_t x655 = 3U;
	int32_t t125 = -603;

    t125 = (((x653*x654)&x655)&x656);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x657 = UINT16_MAX;
	uint32_t x658 = 723937U;
	int8_t x659 = 4;
	volatile uint64_t x660 = 1LLU;
	static uint64_t t126 = 54LLU;

    t126 = (((x657*x658)&x659)&x660);

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x662 = 1;
	uint16_t x663 = UINT16_MAX;
	int16_t x664 = 36;
	int32_t t127 = -125675712;

    t127 = (((x661*x662)&x663)&x664);

    if (t127 != 36) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x674 = 101;
	uint8_t x675 = 1U;
	int64_t x676 = INT64_MIN;

    t128 = (((x673*x674)&x675)&x676);

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x677 = -55630;
	int8_t x678 = INT8_MAX;
	int32_t x680 = INT32_MIN;
	volatile int32_t t129 = INT32_MIN;

    t129 = (((x677*x678)&x679)&x680);

    if (t129 != INT32_MIN) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x681 = UINT8_MAX;
	int16_t x683 = INT16_MIN;
	int8_t x684 = -15;

    t130 = (((x681*x682)&x683)&x684);

    if (t130 != 2934833152U) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint16_t x690 = UINT16_MAX;
	static uint32_t x692 = UINT32_MAX;
	volatile uint32_t t131 = 10U;

    t131 = (((x689*x690)&x691)&x692);

    if (t131 != 3005303936U) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x693 = 63U;
	static int8_t x694 = -1;
	int32_t x695 = 0;
	int64_t x696 = -1656444933528360LL;
	volatile int64_t t132 = 3LL;

    t132 = (((x693*x694)&x695)&x696);

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint8_t x701 = 9U;
	static volatile int64_t x703 = INT64_MIN;
	volatile int64_t x704 = -2LL;
	int64_t t133 = -3835744810669385684LL;

    t133 = (((x701*x702)&x703)&x704);

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x705 = -1;
	volatile int16_t x706 = -3452;
	volatile int32_t x707 = INT32_MIN;

    t134 = (((x705*x706)&x707)&x708);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint32_t x709 = 22U;
	int64_t x711 = -1LL;
	int32_t x712 = 50;
	volatile int64_t t135 = 1458666182031355LL;

    t135 = (((x709*x710)&x711)&x712);

    if (t135 != 34LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x714 = 0;
	uint8_t x715 = UINT8_MAX;
	int32_t t136 = 49990;

    t136 = (((x713*x714)&x715)&x716);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x717 = -4;

    t137 = (((x717*x718)&x719)&x720);

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x722 = 3895095LLU;
	static volatile uint64_t t138 = 6959823633778542LLU;

    t138 = (((x721*x722)&x723)&x724);

    if (t138 != 287797674280LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x725 = 3;
	static uint8_t x727 = 71U;
	volatile uint64_t t139 = 316525096LLU;

    t139 = (((x725*x726)&x727)&x728);

    if (t139 != 69LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x733 = INT8_MIN;
	uint8_t x735 = 1U;
	uint32_t x736 = 17591U;
	uint32_t t140 = 31951U;

    t140 = (((x733*x734)&x735)&x736);

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x739 = -1;
	static int16_t x740 = INT16_MAX;
	static int64_t t141 = -88368514917048LL;

    t141 = (((x737*x738)&x739)&x740);

    if (t141 != 29824LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x753 = INT16_MAX;
	int64_t x754 = -1LL;
	int16_t x755 = 155;
	static int8_t x756 = -1;
	static volatile int64_t t142 = 384599157003659158LL;

    t142 = (((x753*x754)&x755)&x756);

    if (t142 != 1LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x757 = -1;
	int8_t x758 = -14;
	int8_t x759 = INT8_MIN;
	volatile uint8_t x760 = 4U;

    t143 = (((x757*x758)&x759)&x760);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x762 = UINT64_MAX;
	int16_t x763 = 6281;
	int8_t x764 = INT8_MAX;
	volatile uint64_t t144 = 369LLU;

    t144 = (((x761*x762)&x763)&x764);

    if (t144 != 1LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x769 = -198LL;
	int8_t x770 = 1;
	static int8_t x771 = -1;
	int64_t x772 = 61517LL;
	volatile int64_t t145 = -16540LL;

    t145 = (((x769*x770)&x771)&x772);

    if (t145 != 61448LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x774 = 1;
	volatile uint64_t x776 = UINT64_MAX;
	uint64_t t146 = 4LLU;

    t146 = (((x773*x774)&x775)&x776);

    if (t146 != 43LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x777 = 486140401U;
	volatile int8_t x778 = INT8_MIN;
	int8_t x780 = -1;
	volatile uint32_t t147 = 23U;

    t147 = (((x777*x778)&x779)&x780);

    if (t147 != 2198538112U) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x782 = 15;
	volatile int32_t x783 = INT32_MIN;
	static int8_t x784 = INT8_MAX;
	static int32_t t148 = 22502;

    t148 = (((x781*x782)&x783)&x784);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x791 = -1;
	static int32_t x792 = INT32_MIN;
	int32_t t149 = INT32_MIN;

    t149 = (((x789*x790)&x791)&x792);

    if (t149 != INT32_MIN) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x794 = UINT32_MAX;
	uint16_t x796 = 1U;
	uint32_t t150 = 1072310455U;

    t150 = (((x793*x794)&x795)&x796);

    if (t150 != 0U) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x797 = 511360328U;
	static uint32_t x798 = UINT32_MAX;
	int16_t x799 = -3;
	volatile uint32_t t151 = 1U;

    t151 = (((x797*x798)&x799)&x800);

    if (t151 != 528U) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x805 = -4;
	int64_t x806 = -172268063835LL;
	static int64_t x807 = INT64_MIN;
	volatile uint64_t x808 = 16LLU;
	uint64_t t152 = 80791890568LLU;

    t152 = (((x805*x806)&x807)&x808);

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x823 = -3725;
	volatile int64_t t153 = -1LL;

    t153 = (((x821*x822)&x823)&x824);

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x829 = 11U;
	static int32_t x831 = INT32_MIN;
	uint32_t t154 = 463249618U;

    t154 = (((x829*x830)&x831)&x832);

    if (t154 != 0U) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x833 = 0;
	int64_t x834 = -1LL;
	static int16_t x836 = -3428;
	volatile int64_t t155 = -549022309LL;

    t155 = (((x833*x834)&x835)&x836);

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint8_t x838 = 62U;
	int8_t x839 = -1;
	int16_t x840 = -1;

    t156 = (((x837*x838)&x839)&x840);

    if (t156 != 4816638309269122LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x847 = INT8_MIN;
	volatile uint64_t x848 = 5824870025626233LLU;
	static uint64_t t157 = 8526029336461559109LLU;

    t157 = (((x845*x846)&x847)&x848);

    if (t157 != 1018691584LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint16_t x849 = UINT16_MAX;
	volatile int64_t x850 = -1LL;
	volatile int32_t x852 = INT32_MAX;
	int64_t t158 = 5559512745135619LL;

    t158 = (((x849*x850)&x851)&x852);

    if (t158 != 2147418113LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x853 = 5;
	static int16_t x855 = INT16_MIN;
	volatile int8_t x856 = INT8_MIN;

    t159 = (((x853*x854)&x855)&x856);

    if (t159 != 162949638914048LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x857 = UINT8_MAX;
	uint32_t x858 = UINT32_MAX;

    t160 = (((x857*x858)&x859)&x860);

    if (t160 != 1LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint64_t x865 = 63639113805LLU;
	int8_t x867 = INT8_MIN;
	volatile uint64_t t161 = 8969009600814LLU;

    t161 = (((x865*x866)&x867)&x868);

    if (t161 != 62277025792LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x870 = -1;
	uint8_t x871 = UINT8_MAX;
	static int64_t x872 = -1LL;
	int64_t t162 = -16274LL;

    t162 = (((x869*x870)&x871)&x872);

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint64_t x873 = 67926078087LLU;
	int32_t x874 = INT32_MIN;
	int16_t x875 = 12737;
	uint8_t x876 = UINT8_MAX;
	uint64_t t163 = 314038181061200LLU;

    t163 = (((x873*x874)&x875)&x876);

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x877 = INT8_MIN;
	int32_t x878 = 14896731;
	static volatile int16_t x879 = INT16_MIN;
	volatile int32_t t164 = 1;

    t164 = (((x877*x878)&x879)&x880);

    if (t164 != -1906802688) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x881 = -1;
	int8_t x882 = -1;
	static int8_t x883 = INT8_MIN;
	int32_t t165 = 12416408;

    t165 = (((x881*x882)&x883)&x884);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x885 = 675243LLU;
	int64_t x886 = 1255LL;
	uint32_t x887 = 119853U;
	static volatile uint32_t x888 = 18U;
	uint64_t t166 = 1861077033573029305LLU;

    t166 = (((x885*x886)&x887)&x888);

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint64_t x889 = 7111407604849923461LLU;
	int8_t x890 = INT8_MIN;
	static int64_t x891 = -11787673032761LL;
	int8_t x892 = INT8_MAX;
	uint64_t t167 = 16961317459LLU;

    t167 = (((x889*x890)&x891)&x892);

    if (t167 != 0LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint64_t x893 = 20570952LLU;
	int8_t x896 = -1;
	uint64_t t168 = 920857736716LLU;

    t168 = (((x893*x894)&x895)&x896);

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x897 = 1;
	static uint64_t x898 = 933646279222844LLU;
	int16_t x899 = INT16_MIN;
	int64_t x900 = -7144758367392LL;
	uint64_t t169 = 1407719539312LLU;

    t169 = (((x897*x898)&x899)&x900);

    if (t169 != 933487285698560LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint16_t x905 = 3U;
	volatile int8_t x907 = INT8_MIN;
	int32_t t170 = 14853;

    t170 = (((x905*x906)&x907)&x908);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x909 = UINT32_MAX;
	uint32_t t171 = 28083U;

    t171 = (((x909*x910)&x911)&x912);

    if (t171 != 128U) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x913 = 573323;
	int8_t x914 = -1;
	int8_t x915 = INT8_MAX;
	uint64_t x916 = 736LLU;
	uint64_t t172 = 6071LLU;

    t172 = (((x913*x914)&x915)&x916);

    if (t172 != 96LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int16_t x917 = INT16_MIN;
	static int8_t x918 = -1;
	int16_t x919 = 3442;
	int32_t x920 = -1;
	int32_t t173 = 35;

    t173 = (((x917*x918)&x919)&x920);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int32_t x921 = -7;
	int8_t x923 = INT8_MAX;
	static uint64_t t174 = 2LLU;

    t174 = (((x921*x922)&x923)&x924);

    if (t174 != 32LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x925 = 1074767897U;
	static volatile int16_t x926 = 4;
	volatile uint16_t x927 = 54U;
	volatile int8_t x928 = INT8_MIN;
	uint32_t t175 = 26496U;

    t175 = (((x925*x926)&x927)&x928);

    if (t175 != 0U) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x929 = 39356052LL;
	static int32_t x930 = -557643;
	volatile uint16_t x931 = 2862U;
	uint64_t x932 = 1051935426301639LLU;
	static volatile uint64_t t176 = 1228732855LLU;

    t176 = (((x929*x930)&x931)&x932);

    if (t176 != 2564LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x933 = -1;
	static volatile uint16_t x934 = 20988U;
	static int8_t x935 = INT8_MIN;
	int16_t x936 = -1;
	static int32_t t177 = 1406;

    t177 = (((x933*x934)&x935)&x936);

    if (t177 != -20992) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x941 = UINT16_MAX;
	uint8_t x942 = UINT8_MAX;
	uint32_t x943 = 14315132U;
	int8_t x944 = -1;
	volatile uint32_t t178 = 1710227056U;

    t178 = (((x941*x942)&x943)&x944);

    if (t178 != 14315008U) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint8_t x946 = UINT8_MAX;
	uint16_t x947 = 5511U;
	uint64_t x948 = UINT64_MAX;

    t179 = (((x945*x946)&x947)&x948);

    if (t179 != 5377LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x949 = INT16_MIN;
	int16_t x951 = INT16_MIN;
	volatile int16_t x952 = INT16_MIN;
	volatile int32_t t180 = -585789256;

    t180 = (((x949*x950)&x951)&x952);

    if (t180 != -1146880) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x961 = 4454288963LLU;
	uint16_t x962 = 3630U;
	uint64_t x964 = UINT64_MAX;
	volatile uint64_t t181 = 3809230921LLU;

    t181 = (((x961*x962)&x963)&x964);

    if (t181 != 10LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint8_t x965 = 7U;
	int32_t x967 = 43;
	int16_t x968 = INT16_MIN;
	uint32_t t182 = 261615334U;

    t182 = (((x965*x966)&x967)&x968);

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x969 = -651742665572740LL;
	static int16_t x971 = INT16_MIN;
	static uint16_t x972 = UINT16_MAX;
	volatile int64_t t183 = -127LL;

    t183 = (((x969*x970)&x971)&x972);

    if (t183 != 32768LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x973 = 535U;
	static int16_t x974 = -46;
	int32_t x975 = -1;
	int64_t x976 = INT64_MAX;
	static volatile int64_t t184 = -440397599LL;

    t184 = (((x973*x974)&x975)&x976);

    if (t184 != 4294942686LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x981 = INT32_MAX;
	static uint32_t x982 = 0U;
	int32_t x983 = INT32_MIN;
	int32_t x984 = INT32_MIN;

    t185 = (((x981*x982)&x983)&x984);

    if (t185 != 0U) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x985 = UINT32_MAX;
	int8_t x986 = -1;
	int8_t x987 = 2;
	static volatile int16_t x988 = -141;
	uint32_t t186 = 2128431U;

    t186 = (((x985*x986)&x987)&x988);

    if (t186 != 0U) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x989 = INT8_MAX;
	uint64_t x990 = UINT64_MAX;
	int32_t x992 = -1;
	volatile uint64_t t187 = 15542314353376249LLU;

    t187 = (((x989*x990)&x991)&x992);

    if (t187 != 24320LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint8_t x1001 = 0U;
	volatile int8_t x1003 = -1;
	int8_t x1004 = INT8_MIN;

    t188 = (((x1001*x1002)&x1003)&x1004);

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x1011 = INT64_MIN;

    t189 = (((x1009*x1010)&x1011)&x1012);

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint32_t x1013 = 83U;
	int32_t x1014 = INT32_MIN;
	int64_t x1015 = INT64_MAX;
	uint32_t x1016 = UINT32_MAX;
	volatile int64_t t190 = 22LL;

    t190 = (((x1013*x1014)&x1015)&x1016);

    if (t190 != 2147483648LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x1017 = UINT8_MAX;
	uint64_t x1018 = 649769LLU;
	volatile int64_t x1019 = INT64_MIN;
	int8_t x1020 = INT8_MIN;
	uint64_t t191 = 15957448205048LLU;

    t191 = (((x1017*x1018)&x1019)&x1020);

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x1021 = -1;
	int16_t x1022 = INT16_MIN;
	uint8_t x1023 = 26U;
	int32_t x1024 = INT32_MIN;
	int32_t t192 = 3816104;

    t192 = (((x1021*x1022)&x1023)&x1024);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x1029 = -1LL;
	static int8_t x1031 = 1;
	static uint64_t x1032 = UINT64_MAX;
	static uint64_t t193 = 42862LLU;

    t193 = (((x1029*x1030)&x1031)&x1032);

    if (t193 != 1LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x1033 = UINT16_MAX;
	uint16_t x1035 = 871U;
	int16_t x1036 = INT16_MIN;
	volatile int32_t t194 = 5301060;

    t194 = (((x1033*x1034)&x1035)&x1036);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x1037 = 33LLU;
	uint16_t x1039 = 3792U;
	static volatile uint16_t x1040 = UINT16_MAX;
	volatile uint64_t t195 = 6262LLU;

    t195 = (((x1037*x1038)&x1039)&x1040);

    if (t195 != 16LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x1041 = INT16_MAX;
	volatile int16_t x1042 = -1;
	volatile int8_t x1043 = INT8_MIN;
	uint8_t x1044 = UINT8_MAX;
	int32_t t196 = 8;

    t196 = (((x1041*x1042)&x1043)&x1044);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x1049 = -1668;
	uint32_t x1051 = 40432U;
	int64_t x1052 = INT64_MAX;
	int64_t t197 = -1631232371770192LL;

    t197 = (((x1049*x1050)&x1051)&x1052);

    if (t197 != 39136LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint32_t x1053 = 21U;
	uint64_t x1055 = UINT64_MAX;
	uint16_t x1056 = 7858U;

    t198 = (((x1053*x1054)&x1055)&x1056);

    if (t198 != 7842LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint64_t x1057 = 3688484177606456780LLU;
	int8_t x1059 = INT8_MIN;
	int64_t x1060 = -452073LL;
	static uint64_t t199 = 368665722970024LLU;

    t199 = (((x1057*x1058)&x1059)&x1060);

    if (t199 != 14758259896102685184LLU) { NG(); } else { ; }
	
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


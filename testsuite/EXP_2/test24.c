
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

int16_t x3 = INT16_MIN;
uint16_t x9 = UINT16_MAX;
int8_t x12 = -16;
volatile uint8_t x13 = UINT8_MAX;
static volatile uint32_t x16 = 1108879U;
uint8_t x21 = UINT8_MAX;
static volatile uint16_t x26 = 65U;
static uint32_t x30 = 728672U;
int64_t x31 = INT64_MIN;
uint16_t x36 = 9U;
static volatile uint64_t x43 = 5950173538274585LLU;
uint32_t x50 = 118U;
int8_t x51 = INT8_MIN;
int16_t x57 = INT16_MAX;
int32_t t11 = 3183376;
int64_t x64 = INT64_MIN;
int32_t x66 = -30163727;
volatile int16_t x72 = INT16_MIN;
static volatile uint16_t x73 = UINT16_MAX;
volatile int32_t t15 = -1618;
uint32_t x77 = 3031814U;
int64_t x80 = INT64_MAX;
volatile int32_t x83 = 25778285;
volatile uint8_t x87 = UINT8_MAX;
int8_t x89 = INT8_MIN;
int64_t x92 = -1LL;
int32_t t19 = -51100097;
int16_t x94 = INT16_MIN;
volatile int32_t t20 = 19301814;
int8_t x103 = INT8_MIN;
static volatile int16_t x107 = -1;
static uint64_t x108 = 37186472439LLU;
int64_t x135 = 387700LL;
volatile int32_t t26 = 12;
volatile int64_t x143 = 455734352LL;
static int16_t x157 = INT16_MIN;
uint8_t x159 = 0U;
int64_t x160 = INT64_MAX;
static uint32_t x161 = 3209429U;
int16_t x164 = INT16_MIN;
int8_t x169 = 23;
int8_t x170 = -1;
uint64_t x171 = UINT64_MAX;
static int32_t t32 = -1;
uint64_t x174 = 3305299785262LLU;
int64_t x175 = INT64_MIN;
static uint16_t x176 = 8U;
static uint32_t x179 = 19U;
int32_t t35 = 174;
int64_t x185 = INT64_MAX;
int64_t x196 = INT64_MIN;
int32_t t37 = 2;
int16_t x206 = INT16_MIN;
uint32_t x212 = UINT32_MAX;
int8_t x224 = INT8_MIN;
uint8_t x229 = 18U;
static int8_t x240 = -1;
int8_t x244 = INT8_MIN;
volatile uint16_t x258 = 24359U;
static int8_t x260 = -1;
volatile int32_t t49 = 260;
uint8_t x263 = UINT8_MAX;
uint64_t x264 = 1767495609348638LLU;
uint16_t x268 = 24U;
volatile int64_t x271 = INT64_MIN;
static int8_t x273 = INT8_MIN;
int32_t x274 = INT32_MIN;
static int32_t t54 = 58644;
volatile int16_t x282 = INT16_MIN;
volatile int32_t x284 = -1;
int16_t x285 = 2049;
static uint64_t x288 = 91121581315LLU;
uint32_t x293 = 3987U;
int32_t x295 = 90886;
volatile int64_t x299 = -1LL;
volatile int64_t x311 = -1LL;
int64_t x319 = -2021360LL;
static int32_t t62 = -120609;
uint64_t x325 = UINT64_MAX;
static int8_t x331 = INT8_MIN;
int32_t t64 = 199004216;
int64_t x337 = INT64_MAX;
volatile int32_t t65 = -1;
volatile int64_t x344 = INT64_MIN;
static uint8_t x351 = UINT8_MAX;
int64_t x361 = -1LL;
volatile int8_t x366 = -1;
int16_t x371 = INT16_MIN;
uint16_t x374 = UINT16_MAX;
int32_t t75 = -693769;
int16_t x381 = INT16_MIN;
static volatile int64_t x385 = -8128189509492736LL;
int64_t x386 = -1LL;
int8_t x387 = INT8_MAX;
int16_t x406 = INT16_MAX;
int8_t x417 = INT8_MIN;
int16_t x424 = INT16_MIN;
volatile int32_t t85 = -17;
int32_t x429 = 26137;
uint8_t x431 = UINT8_MAX;
static int32_t x436 = -479537117;
static uint16_t x443 = 99U;
uint64_t x447 = UINT64_MAX;
int32_t x450 = 6;
volatile int64_t x451 = -1LL;
static int32_t t92 = 1071575;
uint64_t x455 = 0LLU;
volatile uint8_t x456 = 8U;
static int16_t x461 = INT16_MIN;
int64_t x463 = 1513510243LL;
volatile int32_t t95 = 14800634;
uint32_t x472 = UINT32_MAX;
int32_t t97 = 5;
volatile int32_t x480 = -1;
static int8_t x481 = -1;
int8_t x486 = -1;
int8_t x502 = -17;
int32_t t103 = -85;
static volatile uint64_t x523 = UINT64_MAX;
int8_t x524 = INT8_MAX;
volatile uint32_t x528 = 7288110U;
static int64_t x530 = 388356896272169LL;
uint16_t x531 = 29U;
uint32_t x535 = 64884283U;
uint32_t x546 = UINT32_MAX;
static volatile int32_t t112 = -1;
uint32_t x557 = 2918U;
uint64_t x562 = UINT64_MAX;
uint64_t x566 = 72LLU;
int64_t x567 = -1LL;
volatile uint64_t x568 = 671949425462519917LLU;
volatile int32_t t115 = 81;
uint16_t x571 = UINT16_MAX;
uint64_t x575 = 3LLU;
uint8_t x599 = 2U;
volatile uint64_t x618 = 1940141131096LLU;
volatile uint8_t x619 = 82U;
volatile int32_t t126 = 121718;
uint32_t x641 = 0U;
static uint32_t x642 = UINT32_MAX;
uint32_t x643 = 3U;
int16_t x647 = INT16_MAX;
volatile int16_t x648 = INT16_MAX;
uint8_t x653 = 5U;
int8_t x655 = -13;
uint64_t x658 = 1173LLU;
uint16_t x663 = 12038U;
static int16_t x677 = INT16_MIN;
uint64_t x681 = 0LLU;
uint16_t x684 = UINT16_MAX;
uint64_t x687 = 53283592451063988LLU;
volatile int64_t x690 = -25479LL;
volatile int32_t x692 = INT32_MIN;
int32_t t140 = 1;
int16_t x703 = INT16_MAX;
int32_t x705 = INT32_MIN;
int16_t x707 = INT16_MIN;
uint16_t x711 = 25U;
volatile int32_t t145 = -133718;
int16_t x723 = INT16_MAX;
int16_t x733 = -1;
uint32_t x734 = 162303413U;
int16_t x735 = 690;
int32_t t148 = 4768;
uint32_t x740 = 1986054482U;
uint64_t x741 = 3749848LLU;
volatile int16_t x743 = -1;
volatile int32_t t150 = 14341408;
static int32_t t152 = -1;
volatile int32_t t153 = -5;
static volatile int32_t x760 = 25294;
static int32_t t154 = -90929138;
int16_t x762 = INT16_MIN;
volatile int64_t x763 = 190407959842974LL;
volatile uint64_t x767 = UINT64_MAX;
volatile uint32_t x769 = 16U;
int16_t x774 = INT16_MIN;
int8_t x775 = -1;
uint16_t x781 = 1U;
volatile int32_t x785 = -28669494;
static volatile int32_t t161 = 5;
uint64_t x790 = 3740137LLU;
static uint32_t x793 = UINT32_MAX;
int32_t x798 = INT32_MIN;
uint32_t x811 = 288610381U;
int32_t t167 = 8631;
uint32_t x818 = 10U;
static int16_t x821 = -1;
uint64_t x822 = 251350882LLU;
static uint64_t x837 = 271325LLU;
uint64_t x838 = 474LLU;
volatile uint32_t x843 = UINT32_MAX;
static int32_t t173 = 0;
uint32_t x852 = 107836U;
volatile uint64_t x859 = 26992LLU;
uint32_t x862 = 468044894U;
int8_t x863 = INT8_MAX;
volatile int32_t t178 = -2226498;
static int32_t t179 = 5358639;
static volatile int64_t x877 = 191871429LL;
static uint16_t x880 = 8006U;
volatile int8_t x881 = 2;
static uint32_t x886 = 1605U;
static int16_t x916 = INT16_MIN;
int16_t x918 = INT16_MAX;
int32_t t188 = 96;
volatile int64_t x922 = 29973LL;
int32_t t190 = 2164931;
uint16_t x929 = 2U;
int8_t x937 = -1;
uint64_t x939 = UINT64_MAX;
int8_t x944 = INT8_MIN;
uint8_t x953 = 14U;
static int8_t x958 = 1;
int16_t x962 = 21;


void f0(void) {
    	static uint32_t x1 = UINT32_MAX;
	int8_t x2 = -1;
	static uint8_t x4 = 15U;
	volatile int32_t t0 = -5635744;

    t0 = ((x1-(x2+x3))<=x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile uint16_t x10 = 409U;
	volatile uint8_t x11 = 0U;
	int32_t t1 = 259304935;

    t1 = ((x9-(x10+x11))<=x12);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x14 = INT8_MIN;
	static volatile int16_t x15 = INT16_MIN;
	volatile int32_t t2 = 222415328;

    t2 = ((x13-(x14+x15))<=x16);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x22 = INT8_MIN;
	static int16_t x23 = 0;
	uint64_t x24 = 16104723693LLU;
	volatile int32_t t3 = -88054687;

    t3 = ((x21-(x22+x23))<=x24);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x25 = 379LL;
	volatile uint32_t x27 = UINT32_MAX;
	volatile uint16_t x28 = 14U;
	int32_t t4 = 0;

    t4 = ((x25-(x26+x27))<=x28);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x29 = -2919LL;
	int16_t x32 = INT16_MAX;
	static volatile int32_t t5 = -2;

    t5 = ((x29-(x30+x31))<=x32);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x33 = 2132229049LLU;
	uint64_t x34 = UINT64_MAX;
	int16_t x35 = 6;
	int32_t t6 = -790824;

    t6 = ((x33-(x34+x35))<=x36);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint64_t x41 = UINT64_MAX;
	volatile int64_t x42 = -1LL;
	static int64_t x44 = 96914259523915LL;
	static int32_t t7 = 28870;

    t7 = ((x41-(x42+x43))<=x44);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x45 = INT32_MIN;
	uint16_t x46 = 24731U;
	uint32_t x47 = 685920U;
	int8_t x48 = 3;
	static volatile int32_t t8 = 127;

    t8 = ((x45-(x46+x47))<=x48);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x49 = -6;
	uint64_t x52 = 31338143LLU;
	volatile int32_t t9 = -4729596;

    t9 = ((x49-(x50+x51))<=x52);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x53 = 561429202958582LLU;
	int8_t x54 = INT8_MIN;
	volatile uint8_t x55 = 7U;
	int32_t x56 = -1;
	volatile int32_t t10 = 2;

    t10 = ((x53-(x54+x55))<=x56);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x58 = UINT8_MAX;
	int16_t x59 = -1;
	static int16_t x60 = INT16_MIN;

    t11 = ((x57-(x58+x59))<=x60);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint32_t x61 = UINT32_MAX;
	static int8_t x62 = INT8_MIN;
	volatile int16_t x63 = INT16_MIN;
	static int32_t t12 = 86967914;

    t12 = ((x61-(x62+x63))<=x64);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x65 = 2010;
	int8_t x67 = INT8_MAX;
	uint16_t x68 = 9263U;
	volatile int32_t t13 = -43962;

    t13 = ((x65-(x66+x67))<=x68);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x69 = -2;
	int16_t x70 = 1;
	int16_t x71 = 2;
	volatile int32_t t14 = 2;

    t14 = ((x69-(x70+x71))<=x72);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x74 = -1;
	int8_t x75 = INT8_MAX;
	uint32_t x76 = 6U;

    t15 = ((x73-(x74+x75))<=x76);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x78 = -1;
	static int8_t x79 = -1;
	int32_t t16 = 695;

    t16 = ((x77-(x78+x79))<=x80);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x81 = INT32_MIN;
	int64_t x82 = INT64_MIN;
	int64_t x84 = -1LL;
	static int32_t t17 = -10;

    t17 = ((x81-(x82+x83))<=x84);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint32_t x85 = 1730U;
	static uint32_t x86 = 26U;
	int16_t x88 = -1;
	volatile int32_t t18 = 95439509;

    t18 = ((x85-(x86+x87))<=x88);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x90 = 1LL;
	uint64_t x91 = UINT64_MAX;

    t19 = ((x89-(x90+x91))<=x92);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x93 = -8;
	volatile int8_t x95 = INT8_MAX;
	uint16_t x96 = 2509U;

    t20 = ((x93-(x94+x95))<=x96);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x101 = 26U;
	volatile int16_t x102 = -9;
	static uint8_t x104 = 12U;
	int32_t t21 = 4618058;

    t21 = ((x101-(x102+x103))<=x104);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x105 = INT16_MIN;
	int64_t x106 = 755515270466440LL;
	volatile int32_t t22 = 900545100;

    t22 = ((x105-(x106+x107))<=x108);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x109 = INT16_MAX;
	int64_t x110 = 6LL;
	int32_t x111 = INT32_MIN;
	static int32_t x112 = INT32_MAX;
	int32_t t23 = -198215489;

    t23 = ((x109-(x110+x111))<=x112);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x129 = -1LL;
	int8_t x130 = INT8_MIN;
	volatile int64_t x131 = 857752LL;
	int8_t x132 = INT8_MIN;
	static volatile int32_t t24 = -560180235;

    t24 = ((x129-(x130+x131))<=x132);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x133 = UINT8_MAX;
	uint8_t x134 = 11U;
	uint64_t x136 = 10415255LLU;
	volatile int32_t t25 = -31;

    t25 = ((x133-(x134+x135))<=x136);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x137 = 1703930920LL;
	static int8_t x138 = 14;
	volatile int64_t x139 = 138474103LL;
	int16_t x140 = INT16_MIN;

    t26 = ((x137-(x138+x139))<=x140);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x141 = UINT16_MAX;
	static uint16_t x142 = UINT16_MAX;
	uint8_t x144 = UINT8_MAX;
	int32_t t27 = 460068767;

    t27 = ((x141-(x142+x143))<=x144);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x145 = -1;
	int64_t x146 = -1LL;
	int8_t x147 = INT8_MIN;
	uint32_t x148 = 890U;
	int32_t t28 = -1186371;

    t28 = ((x145-(x146+x147))<=x148);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x149 = INT32_MIN;
	volatile uint64_t x150 = UINT64_MAX;
	int16_t x151 = INT16_MIN;
	volatile int8_t x152 = INT8_MIN;
	static int32_t t29 = 390;

    t29 = ((x149-(x150+x151))<=x152);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x158 = INT8_MAX;
	int32_t t30 = -3;

    t30 = ((x157-(x158+x159))<=x160);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x162 = 3923409LLU;
	uint64_t x163 = UINT64_MAX;
	volatile int32_t t31 = 13110;

    t31 = ((x161-(x162+x163))<=x164);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x172 = INT8_MAX;

    t32 = ((x169-(x170+x171))<=x172);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x173 = INT64_MAX;
	volatile int32_t t33 = 1;

    t33 = ((x173-(x174+x175))<=x176);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x177 = INT8_MIN;
	int64_t x178 = INT64_MIN;
	int32_t x180 = INT32_MIN;
	int32_t t34 = 2591;

    t34 = ((x177-(x178+x179))<=x180);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x181 = 52864219944097LLU;
	int32_t x182 = INT32_MIN;
	uint16_t x183 = UINT16_MAX;
	volatile uint64_t x184 = 776243223384988LLU;

    t35 = ((x181-(x182+x183))<=x184);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint64_t x186 = UINT64_MAX;
	int16_t x187 = INT16_MIN;
	uint8_t x188 = 0U;
	volatile int32_t t36 = 193;

    t36 = ((x185-(x186+x187))<=x188);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x193 = UINT32_MAX;
	int16_t x194 = INT16_MIN;
	uint32_t x195 = 993U;

    t37 = ((x193-(x194+x195))<=x196);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x201 = INT8_MIN;
	uint8_t x202 = 45U;
	int16_t x203 = 3074;
	int8_t x204 = -1;
	static volatile int32_t t38 = -10;

    t38 = ((x201-(x202+x203))<=x204);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x205 = INT8_MIN;
	int64_t x207 = INT64_MAX;
	int32_t x208 = INT32_MAX;
	volatile int32_t t39 = 375668810;

    t39 = ((x205-(x206+x207))<=x208);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x209 = INT16_MIN;
	static uint16_t x210 = 66U;
	static int32_t x211 = INT32_MIN;
	int32_t t40 = 1604;

    t40 = ((x209-(x210+x211))<=x212);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint8_t x217 = 6U;
	int8_t x218 = INT8_MIN;
	volatile int64_t x219 = -1LL;
	int32_t x220 = INT32_MIN;
	int32_t t41 = -7534281;

    t41 = ((x217-(x218+x219))<=x220);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x221 = INT32_MIN;
	int64_t x222 = -1LL;
	int8_t x223 = INT8_MIN;
	volatile int32_t t42 = 9020580;

    t42 = ((x221-(x222+x223))<=x224);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x225 = 667LL;
	static volatile int8_t x226 = -1;
	int8_t x227 = INT8_MAX;
	static int64_t x228 = 157LL;
	volatile int32_t t43 = -728;

    t43 = ((x225-(x226+x227))<=x228);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x230 = UINT64_MAX;
	static int64_t x231 = 17557732106649949LL;
	int32_t x232 = -1;
	static int32_t t44 = -1;

    t44 = ((x229-(x230+x231))<=x232);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x233 = INT8_MIN;
	uint64_t x234 = 192010622359527LLU;
	uint32_t x235 = 986U;
	uint64_t x236 = 6743342499503186199LLU;
	volatile int32_t t45 = 860959318;

    t45 = ((x233-(x234+x235))<=x236);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x237 = UINT16_MAX;
	int32_t x238 = -1;
	static int16_t x239 = INT16_MIN;
	volatile int32_t t46 = -61284;

    t46 = ((x237-(x238+x239))<=x240);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x241 = INT8_MIN;
	int32_t x242 = INT32_MIN;
	uint8_t x243 = 0U;
	volatile int32_t t47 = 3656;

    t47 = ((x241-(x242+x243))<=x244);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x249 = -16694674;
	int8_t x250 = 0;
	uint8_t x251 = 2U;
	static volatile uint32_t x252 = 428797U;
	volatile int32_t t48 = 40365;

    t48 = ((x249-(x250+x251))<=x252);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x257 = -1;
	static int8_t x259 = INT8_MAX;

    t49 = ((x257-(x258+x259))<=x260);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x261 = INT8_MIN;
	volatile uint64_t x262 = 54062443665179489LLU;
	volatile int32_t t50 = -36349;

    t50 = ((x261-(x262+x263))<=x264);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x265 = -1LL;
	int64_t x266 = -1LL;
	volatile int32_t x267 = -217958;
	int32_t t51 = 1008552750;

    t51 = ((x265-(x266+x267))<=x268);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x269 = -1;
	static volatile int64_t x270 = INT64_MAX;
	volatile int8_t x272 = INT8_MAX;
	volatile int32_t t52 = -1;

    t52 = ((x269-(x270+x271))<=x272);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x275 = UINT32_MAX;
	int64_t x276 = 111379792066088978LL;
	int32_t t53 = 1947909;

    t53 = ((x273-(x274+x275))<=x276);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x277 = INT64_MIN;
	uint16_t x278 = 2U;
	int32_t x279 = INT32_MIN;
	int16_t x280 = 9974;

    t54 = ((x277-(x278+x279))<=x280);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x281 = UINT16_MAX;
	static int8_t x283 = 27;
	int32_t t55 = 3095;

    t55 = ((x281-(x282+x283))<=x284);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x286 = -1;
	int32_t x287 = -2;
	static volatile int32_t t56 = 574441;

    t56 = ((x285-(x286+x287))<=x288);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x289 = 95355LLU;
	uint64_t x290 = 3797472893383997111LLU;
	volatile uint16_t x291 = 117U;
	int16_t x292 = -3933;
	volatile int32_t t57 = 17794;

    t57 = ((x289-(x290+x291))<=x292);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int16_t x294 = 0;
	int16_t x296 = -1;
	int32_t t58 = 395539186;

    t58 = ((x293-(x294+x295))<=x296);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x297 = INT16_MAX;
	int16_t x298 = INT16_MAX;
	int16_t x300 = INT16_MIN;
	int32_t t59 = -28;

    t59 = ((x297-(x298+x299))<=x300);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x305 = -4;
	int64_t x306 = 6323801791134LL;
	uint64_t x307 = 148138418577543LLU;
	uint16_t x308 = 21622U;
	int32_t t60 = -1463;

    t60 = ((x305-(x306+x307))<=x308);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x309 = INT8_MIN;
	static uint16_t x310 = 74U;
	static int64_t x312 = INT64_MAX;
	static volatile int32_t t61 = -31;

    t61 = ((x309-(x310+x311))<=x312);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x317 = INT32_MIN;
	static uint32_t x318 = UINT32_MAX;
	int32_t x320 = INT32_MAX;

    t62 = ((x317-(x318+x319))<=x320);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x326 = INT8_MIN;
	int64_t x327 = -1LL;
	int32_t x328 = INT32_MIN;
	volatile int32_t t63 = 2;

    t63 = ((x325-(x326+x327))<=x328);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x329 = 0;
	int16_t x330 = 0;
	static int64_t x332 = INT64_MIN;

    t64 = ((x329-(x330+x331))<=x332);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x338 = INT8_MAX;
	uint16_t x339 = 190U;
	uint16_t x340 = UINT16_MAX;

    t65 = ((x337-(x338+x339))<=x340);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x341 = 129185LL;
	uint8_t x342 = UINT8_MAX;
	static int32_t x343 = -521599;
	int32_t t66 = 175456;

    t66 = ((x341-(x342+x343))<=x344);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x345 = -19;
	volatile int16_t x346 = INT16_MIN;
	uint64_t x347 = UINT64_MAX;
	static int8_t x348 = -1;
	static int32_t t67 = 30802;

    t67 = ((x345-(x346+x347))<=x348);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x349 = INT16_MAX;
	int64_t x350 = 29771202547LL;
	int16_t x352 = -57;
	static int32_t t68 = 0;

    t68 = ((x349-(x350+x351))<=x352);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile uint8_t x353 = UINT8_MAX;
	static int16_t x354 = -1;
	uint32_t x355 = 1U;
	uint16_t x356 = 1532U;
	volatile int32_t t69 = -1;

    t69 = ((x353-(x354+x355))<=x356);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x357 = 176368;
	int16_t x358 = INT16_MIN;
	int8_t x359 = -1;
	int64_t x360 = INT64_MIN;
	volatile int32_t t70 = 2730834;

    t70 = ((x357-(x358+x359))<=x360);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x362 = INT16_MAX;
	int16_t x363 = -115;
	volatile int64_t x364 = 1LL;
	int32_t t71 = 44;

    t71 = ((x361-(x362+x363))<=x364);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x365 = -1LL;
	uint64_t x367 = 1LLU;
	int16_t x368 = -1;
	volatile int32_t t72 = -1;

    t72 = ((x365-(x366+x367))<=x368);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x369 = INT64_MIN;
	static int32_t x370 = 2240;
	uint64_t x372 = 1LLU;
	static int32_t t73 = 1353380;

    t73 = ((x369-(x370+x371))<=x372);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x373 = INT8_MIN;
	static volatile uint32_t x375 = 5U;
	uint32_t x376 = 87713623U;
	volatile int32_t t74 = -637532513;

    t74 = ((x373-(x374+x375))<=x376);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x377 = 16048;
	static uint32_t x378 = 102143660U;
	int32_t x379 = INT32_MIN;
	volatile int8_t x380 = INT8_MIN;

    t75 = ((x377-(x378+x379))<=x380);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x382 = -1LL;
	int32_t x383 = -1;
	int32_t x384 = INT32_MAX;
	int32_t t76 = 10570;

    t76 = ((x381-(x382+x383))<=x384);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x388 = 1096950;
	int32_t t77 = 0;

    t77 = ((x385-(x386+x387))<=x388);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int8_t x389 = 29;
	int8_t x390 = INT8_MIN;
	int16_t x391 = -42;
	uint8_t x392 = UINT8_MAX;
	int32_t t78 = -1;

    t78 = ((x389-(x390+x391))<=x392);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x393 = INT8_MAX;
	static int8_t x394 = 3;
	static volatile uint64_t x395 = UINT64_MAX;
	static volatile uint32_t x396 = UINT32_MAX;
	int32_t t79 = -18606300;

    t79 = ((x393-(x394+x395))<=x396);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x397 = UINT8_MAX;
	volatile int32_t x398 = -1;
	int32_t x399 = 1;
	int32_t x400 = -1;
	int32_t t80 = 3;

    t80 = ((x397-(x398+x399))<=x400);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x405 = 5;
	static int64_t x407 = INT64_MIN;
	static int64_t x408 = -48106623214914905LL;
	int32_t t81 = -85218096;

    t81 = ((x405-(x406+x407))<=x408);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x409 = 2U;
	volatile int8_t x410 = INT8_MIN;
	int8_t x411 = -1;
	int8_t x412 = INT8_MAX;
	volatile int32_t t82 = 3906;

    t82 = ((x409-(x410+x411))<=x412);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x413 = 0;
	volatile uint64_t x414 = 1836LLU;
	static uint64_t x415 = 181LLU;
	int32_t x416 = INT32_MIN;
	int32_t t83 = -284932830;

    t83 = ((x413-(x414+x415))<=x416);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x418 = -1093;
	uint8_t x419 = 4U;
	static uint16_t x420 = 8277U;
	volatile int32_t t84 = 8;

    t84 = ((x417-(x418+x419))<=x420);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x421 = UINT16_MAX;
	volatile int8_t x422 = INT8_MAX;
	static int16_t x423 = -5;

    t85 = ((x421-(x422+x423))<=x424);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x425 = INT8_MIN;
	int8_t x426 = INT8_MIN;
	uint32_t x427 = 59551129U;
	int64_t x428 = -1LL;
	static int32_t t86 = 1030;

    t86 = ((x425-(x426+x427))<=x428);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile uint16_t x430 = 950U;
	int8_t x432 = -1;
	static int32_t t87 = -15;

    t87 = ((x429-(x430+x431))<=x432);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint32_t x433 = UINT32_MAX;
	int8_t x434 = INT8_MAX;
	uint32_t x435 = UINT32_MAX;
	static int32_t t88 = -961;

    t88 = ((x433-(x434+x435))<=x436);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x437 = 2091350860311LL;
	int16_t x438 = -3896;
	int16_t x439 = -560;
	int16_t x440 = -1;
	volatile int32_t t89 = 218120;

    t89 = ((x437-(x438+x439))<=x440);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x441 = INT32_MAX;
	uint64_t x442 = UINT64_MAX;
	static uint64_t x444 = 0LLU;
	volatile int32_t t90 = -12;

    t90 = ((x441-(x442+x443))<=x444);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x445 = -13;
	static int8_t x446 = -1;
	volatile int16_t x448 = INT16_MIN;
	static int32_t t91 = 189;

    t91 = ((x445-(x446+x447))<=x448);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x449 = -1;
	volatile int16_t x452 = 1526;

    t92 = ((x449-(x450+x451))<=x452);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x453 = INT16_MIN;
	int64_t x454 = -1LL;
	int32_t t93 = 3255;

    t93 = ((x453-(x454+x455))<=x456);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x457 = 3778LL;
	int16_t x458 = 7;
	uint32_t x459 = 70385494U;
	volatile int64_t x460 = INT64_MIN;
	int32_t t94 = 1;

    t94 = ((x457-(x458+x459))<=x460);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint16_t x462 = UINT16_MAX;
	int16_t x464 = -1;

    t95 = ((x461-(x462+x463))<=x464);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x465 = -35;
	static int32_t x466 = INT32_MIN;
	uint64_t x467 = 34683LLU;
	int32_t x468 = INT32_MIN;
	volatile int32_t t96 = -96;

    t96 = ((x465-(x466+x467))<=x468);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint64_t x469 = 74090351LLU;
	static int32_t x470 = INT32_MAX;
	static int32_t x471 = -1;

    t97 = ((x469-(x470+x471))<=x472);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x473 = -263275040;
	volatile uint16_t x474 = 1181U;
	int64_t x475 = INT64_MIN;
	static uint16_t x476 = UINT16_MAX;
	int32_t t98 = 103703;

    t98 = ((x473-(x474+x475))<=x476);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x477 = 119443LLU;
	volatile uint16_t x478 = 2801U;
	volatile uint8_t x479 = UINT8_MAX;
	int32_t t99 = 1285913;

    t99 = ((x477-(x478+x479))<=x480);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x482 = INT16_MIN;
	uint64_t x483 = 543509526654454LLU;
	static uint32_t x484 = UINT32_MAX;
	volatile int32_t t100 = -46771472;

    t100 = ((x481-(x482+x483))<=x484);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x485 = 148686378474171310LL;
	int8_t x487 = 1;
	int64_t x488 = INT64_MIN;
	static volatile int32_t t101 = -214089;

    t101 = ((x485-(x486+x487))<=x488);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint8_t x497 = 0U;
	int32_t x498 = -31574195;
	static int64_t x499 = -1LL;
	uint16_t x500 = 6453U;
	volatile int32_t t102 = -39742;

    t102 = ((x497-(x498+x499))<=x500);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x501 = -1LL;
	static volatile int32_t x503 = -5299;
	static int64_t x504 = 47601LL;

    t103 = ((x501-(x502+x503))<=x504);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x513 = -98155;
	static int8_t x514 = INT8_MIN;
	static int32_t x515 = 218856310;
	volatile uint8_t x516 = UINT8_MAX;
	static volatile int32_t t104 = -3496;

    t104 = ((x513-(x514+x515))<=x516);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile uint32_t x521 = 835U;
	uint8_t x522 = 111U;
	static volatile int32_t t105 = -187;

    t105 = ((x521-(x522+x523))<=x524);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x525 = 5;
	uint8_t x526 = UINT8_MAX;
	int64_t x527 = 168385271844129181LL;
	volatile int32_t t106 = 77;

    t106 = ((x525-(x526+x527))<=x528);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x529 = -1;
	static uint64_t x532 = 1104204042385068865LLU;
	int32_t t107 = -6331645;

    t107 = ((x529-(x530+x531))<=x532);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x533 = 0;
	int16_t x534 = INT16_MIN;
	volatile int64_t x536 = -185708267149LL;
	volatile int32_t t108 = -185697;

    t108 = ((x533-(x534+x535))<=x536);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x537 = INT16_MAX;
	static int32_t x538 = -1;
	static int8_t x539 = INT8_MIN;
	volatile uint32_t x540 = 36209U;
	volatile int32_t t109 = -948913;

    t109 = ((x537-(x538+x539))<=x540);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x541 = INT16_MIN;
	static int32_t x542 = INT32_MIN;
	volatile int16_t x543 = 0;
	int16_t x544 = -1;
	volatile int32_t t110 = -41278;

    t110 = ((x541-(x542+x543))<=x544);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile uint32_t x545 = UINT32_MAX;
	uint32_t x547 = 25U;
	uint16_t x548 = 0U;
	static volatile int32_t t111 = 17422252;

    t111 = ((x545-(x546+x547))<=x548);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x553 = INT8_MAX;
	uint64_t x554 = 150760LLU;
	static int16_t x555 = INT16_MIN;
	uint16_t x556 = 71U;

    t112 = ((x553-(x554+x555))<=x556);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x558 = 3U;
	uint8_t x559 = UINT8_MAX;
	static int16_t x560 = INT16_MIN;
	volatile int32_t t113 = 2;

    t113 = ((x557-(x558+x559))<=x560);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x561 = INT16_MIN;
	static int64_t x563 = -694844330998LL;
	static int64_t x564 = 155922909890112LL;
	volatile int32_t t114 = -4190;

    t114 = ((x561-(x562+x563))<=x564);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x565 = 5U;

    t115 = ((x565-(x566+x567))<=x568);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x569 = 37;
	static int64_t x570 = -1LL;
	int64_t x572 = 10LL;
	int32_t t116 = 5411974;

    t116 = ((x569-(x570+x571))<=x572);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint8_t x573 = 20U;
	int64_t x574 = -41736626LL;
	int16_t x576 = INT16_MIN;
	int32_t t117 = -28455834;

    t117 = ((x573-(x574+x575))<=x576);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x577 = INT8_MIN;
	uint16_t x578 = 362U;
	int16_t x579 = INT16_MIN;
	int8_t x580 = 35;
	volatile int32_t t118 = -518071;

    t118 = ((x577-(x578+x579))<=x580);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x585 = -1;
	int8_t x586 = INT8_MIN;
	uint64_t x587 = 3597381459706208646LLU;
	int8_t x588 = -1;
	int32_t t119 = -1040;

    t119 = ((x585-(x586+x587))<=x588);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x589 = 432554LL;
	int32_t x590 = 894593;
	uint32_t x591 = UINT32_MAX;
	int16_t x592 = INT16_MIN;
	volatile int32_t t120 = 600430829;

    t120 = ((x589-(x590+x591))<=x592);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x593 = UINT64_MAX;
	uint16_t x594 = UINT16_MAX;
	static uint16_t x595 = UINT16_MAX;
	static int8_t x596 = INT8_MAX;
	volatile int32_t t121 = -105;

    t121 = ((x593-(x594+x595))<=x596);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint64_t x597 = 38538LLU;
	static int16_t x598 = -205;
	int16_t x600 = 263;
	static int32_t t122 = 1;

    t122 = ((x597-(x598+x599))<=x600);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x609 = 44777422U;
	volatile uint32_t x610 = UINT32_MAX;
	uint64_t x611 = 483831954097LLU;
	int8_t x612 = 2;
	int32_t t123 = -1100;

    t123 = ((x609-(x610+x611))<=x612);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x617 = 42U;
	uint32_t x620 = 21166U;
	int32_t t124 = -44554;

    t124 = ((x617-(x618+x619))<=x620);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x621 = -1;
	int32_t x622 = -1;
	static int8_t x623 = -1;
	int8_t x624 = INT8_MIN;
	int32_t t125 = 1;

    t125 = ((x621-(x622+x623))<=x624);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x625 = UINT16_MAX;
	int64_t x626 = 22000347479LL;
	volatile int32_t x627 = INT32_MIN;
	int64_t x628 = INT64_MAX;

    t126 = ((x625-(x626+x627))<=x628);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x629 = UINT8_MAX;
	int8_t x630 = 25;
	int16_t x631 = INT16_MIN;
	uint64_t x632 = UINT64_MAX;
	int32_t t127 = -53874;

    t127 = ((x629-(x630+x631))<=x632);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x633 = 94U;
	static int16_t x634 = INT16_MIN;
	volatile int16_t x635 = INT16_MIN;
	uint16_t x636 = UINT16_MAX;
	static volatile int32_t t128 = -922;

    t128 = ((x633-(x634+x635))<=x636);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x644 = -127;
	int32_t t129 = 1;

    t129 = ((x641-(x642+x643))<=x644);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x645 = INT8_MAX;
	int64_t x646 = -1LL;
	static volatile int32_t t130 = -1685;

    t130 = ((x645-(x646+x647))<=x648);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint16_t x654 = 49U;
	uint32_t x656 = 4156123U;
	int32_t t131 = 218;

    t131 = ((x653-(x654+x655))<=x656);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x657 = INT64_MIN;
	uint64_t x659 = 59040952103262165LLU;
	int8_t x660 = 1;
	int32_t t132 = 3;

    t132 = ((x657-(x658+x659))<=x660);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x661 = 2;
	uint64_t x662 = 2806864606222LLU;
	volatile int64_t x664 = -67LL;
	static volatile int32_t t133 = 24039588;

    t133 = ((x661-(x662+x663))<=x664);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint64_t x665 = 60349252988LLU;
	int8_t x666 = INT8_MIN;
	volatile int8_t x667 = -7;
	volatile int8_t x668 = -1;
	volatile int32_t t134 = 9540;

    t134 = ((x665-(x666+x667))<=x668);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x669 = 15U;
	uint16_t x670 = 7955U;
	uint64_t x671 = UINT64_MAX;
	volatile int16_t x672 = 3524;
	volatile int32_t t135 = 460;

    t135 = ((x669-(x670+x671))<=x672);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x673 = INT32_MAX;
	int16_t x674 = 244;
	static int8_t x675 = INT8_MIN;
	int64_t x676 = INT64_MIN;
	volatile int32_t t136 = -1177;

    t136 = ((x673-(x674+x675))<=x676);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x678 = 52U;
	int64_t x679 = INT64_MIN;
	uint64_t x680 = UINT64_MAX;
	volatile int32_t t137 = -62774;

    t137 = ((x677-(x678+x679))<=x680);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint64_t x682 = 2LLU;
	static uint8_t x683 = 16U;
	int32_t t138 = -1349;

    t138 = ((x681-(x682+x683))<=x684);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x685 = INT8_MIN;
	int8_t x686 = INT8_MIN;
	uint16_t x688 = 14833U;
	int32_t t139 = 952861;

    t139 = ((x685-(x686+x687))<=x688);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint64_t x689 = 11964LLU;
	volatile int16_t x691 = -5;

    t140 = ((x689-(x690+x691))<=x692);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x693 = -2;
	uint64_t x694 = 6067687LLU;
	static int16_t x695 = INT16_MIN;
	uint32_t x696 = 2047963U;
	volatile int32_t t141 = -129;

    t141 = ((x693-(x694+x695))<=x696);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x697 = 3917U;
	int16_t x698 = 488;
	uint16_t x699 = 104U;
	static volatile int32_t x700 = INT32_MIN;
	volatile int32_t t142 = -476;

    t142 = ((x697-(x698+x699))<=x700);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x701 = 30U;
	uint8_t x702 = 56U;
	static volatile uint32_t x704 = 0U;
	static volatile int32_t t143 = -1016;

    t143 = ((x701-(x702+x703))<=x704);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x706 = -1;
	uint8_t x708 = 61U;
	int32_t t144 = -39058;

    t144 = ((x705-(x706+x707))<=x708);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x709 = INT16_MAX;
	static uint16_t x710 = UINT16_MAX;
	int64_t x712 = 0LL;

    t145 = ((x709-(x710+x711))<=x712);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x713 = INT8_MIN;
	uint32_t x714 = 118U;
	int32_t x715 = INT32_MIN;
	uint16_t x716 = 1U;
	volatile int32_t t146 = -72846;

    t146 = ((x713-(x714+x715))<=x716);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint64_t x721 = 668593LLU;
	uint64_t x722 = 27484687650495LLU;
	static uint16_t x724 = 7U;
	static volatile int32_t t147 = -19412;

    t147 = ((x721-(x722+x723))<=x724);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint16_t x736 = UINT16_MAX;

    t148 = ((x733-(x734+x735))<=x736);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x737 = UINT64_MAX;
	int32_t x738 = INT32_MIN;
	int32_t x739 = 184081;
	volatile int32_t t149 = -93;

    t149 = ((x737-(x738+x739))<=x740);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint64_t x742 = UINT64_MAX;
	static int16_t x744 = -6;

    t150 = ((x741-(x742+x743))<=x744);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int8_t x745 = 2;
	int16_t x746 = INT16_MIN;
	volatile int16_t x747 = INT16_MIN;
	int32_t x748 = -208482506;
	volatile int32_t t151 = 1450687;

    t151 = ((x745-(x746+x747))<=x748);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x749 = 1855394883LLU;
	volatile int8_t x750 = -1;
	int16_t x751 = INT16_MIN;
	int32_t x752 = INT32_MAX;

    t152 = ((x749-(x750+x751))<=x752);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint16_t x753 = 0U;
	int16_t x754 = INT16_MIN;
	int8_t x755 = -1;
	static uint16_t x756 = 245U;

    t153 = ((x753-(x754+x755))<=x756);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x757 = -1;
	int8_t x758 = -1;
	static int16_t x759 = -1;

    t154 = ((x757-(x758+x759))<=x760);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint16_t x761 = 30426U;
	volatile int64_t x764 = -1LL;
	volatile int32_t t155 = 7705;

    t155 = ((x761-(x762+x763))<=x764);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x765 = INT32_MAX;
	int32_t x766 = -1;
	static volatile int32_t x768 = INT32_MIN;
	static volatile int32_t t156 = -48021;

    t156 = ((x765-(x766+x767))<=x768);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x770 = INT32_MIN;
	uint64_t x771 = 78809LLU;
	int8_t x772 = -1;
	volatile int32_t t157 = -1;

    t157 = ((x769-(x770+x771))<=x772);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x773 = -12575588;
	volatile int8_t x776 = INT8_MAX;
	volatile int32_t t158 = 214;

    t158 = ((x773-(x774+x775))<=x776);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint16_t x777 = 150U;
	uint64_t x778 = 104121LLU;
	int64_t x779 = INT64_MIN;
	volatile int8_t x780 = -15;
	int32_t t159 = -1;

    t159 = ((x777-(x778+x779))<=x780);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x782 = INT16_MIN;
	uint32_t x783 = 789092064U;
	uint32_t x784 = 36U;
	static int32_t t160 = -7079;

    t160 = ((x781-(x782+x783))<=x784);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x786 = INT16_MIN;
	int8_t x787 = 0;
	static volatile int32_t x788 = -1;

    t161 = ((x785-(x786+x787))<=x788);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x789 = 1;
	volatile uint8_t x791 = UINT8_MAX;
	uint32_t x792 = 1U;
	static int32_t t162 = -43254;

    t162 = ((x789-(x790+x791))<=x792);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x794 = INT8_MIN;
	volatile uint8_t x795 = 33U;
	volatile int64_t x796 = INT64_MIN;
	int32_t t163 = -6;

    t163 = ((x793-(x794+x795))<=x796);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x797 = 2022484;
	uint32_t x799 = UINT32_MAX;
	uint64_t x800 = 34925033186LLU;
	volatile int32_t t164 = 148;

    t164 = ((x797-(x798+x799))<=x800);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint64_t x805 = 911287LLU;
	int8_t x806 = INT8_MIN;
	uint16_t x807 = 6646U;
	int16_t x808 = 0;
	volatile int32_t t165 = -426;

    t165 = ((x805-(x806+x807))<=x808);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x809 = -1LL;
	volatile int64_t x810 = -1962112119106394326LL;
	int32_t x812 = INT32_MIN;
	int32_t t166 = -587637;

    t166 = ((x809-(x810+x811))<=x812);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x813 = -1;
	int32_t x814 = 209875210;
	int32_t x815 = -12131;
	uint8_t x816 = 1U;

    t167 = ((x813-(x814+x815))<=x816);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x817 = 22U;
	static uint8_t x819 = UINT8_MAX;
	uint16_t x820 = UINT16_MAX;
	volatile int32_t t168 = 979462918;

    t168 = ((x817-(x818+x819))<=x820);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x823 = INT16_MIN;
	int16_t x824 = INT16_MIN;
	volatile int32_t t169 = 774727628;

    t169 = ((x821-(x822+x823))<=x824);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x833 = 3U;
	volatile int16_t x834 = -1;
	uint64_t x835 = 2215884529565916423LLU;
	int16_t x836 = INT16_MIN;
	int32_t t170 = 7;

    t170 = ((x833-(x834+x835))<=x836);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x839 = -30;
	static int8_t x840 = -4;
	volatile int32_t t171 = 1;

    t171 = ((x837-(x838+x839))<=x840);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x841 = -382;
	static uint64_t x842 = 44738585942996LLU;
	volatile int8_t x844 = INT8_MIN;
	static volatile int32_t t172 = -1;

    t172 = ((x841-(x842+x843))<=x844);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int16_t x845 = INT16_MIN;
	uint64_t x846 = 32698147LLU;
	int32_t x847 = 1;
	volatile int64_t x848 = 104505687280LL;

    t173 = ((x845-(x846+x847))<=x848);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile uint64_t x849 = UINT64_MAX;
	volatile int64_t x850 = -18LL;
	static volatile uint16_t x851 = 12U;
	int32_t t174 = 23875;

    t174 = ((x849-(x850+x851))<=x852);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x853 = 1529U;
	volatile int16_t x854 = -32;
	uint64_t x855 = UINT64_MAX;
	int8_t x856 = INT8_MIN;
	volatile int32_t t175 = 1;

    t175 = ((x853-(x854+x855))<=x856);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x857 = -1;
	int32_t x858 = INT32_MAX;
	uint32_t x860 = 208107U;
	int32_t t176 = 6507;

    t176 = ((x857-(x858+x859))<=x860);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x861 = -5844979;
	volatile uint16_t x864 = UINT16_MAX;
	static int32_t t177 = 450486634;

    t177 = ((x861-(x862+x863))<=x864);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x865 = 24249U;
	int8_t x866 = 1;
	int16_t x867 = INT16_MIN;
	int32_t x868 = -1626;

    t178 = ((x865-(x866+x867))<=x868);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int8_t x869 = -1;
	uint8_t x870 = UINT8_MAX;
	static int16_t x871 = 5;
	int16_t x872 = 1;

    t179 = ((x869-(x870+x871))<=x872);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x878 = 4489359556LLU;
	int8_t x879 = INT8_MIN;
	volatile int32_t t180 = 221073326;

    t180 = ((x877-(x878+x879))<=x880);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x882 = -175772412LL;
	int16_t x883 = -1;
	int32_t x884 = -219719707;
	int32_t t181 = -161;

    t181 = ((x881-(x882+x883))<=x884);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x885 = -1LL;
	static int32_t x887 = 13778;
	int16_t x888 = INT16_MIN;
	volatile int32_t t182 = 2826795;

    t182 = ((x885-(x886+x887))<=x888);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x889 = 224;
	uint16_t x890 = 7U;
	int16_t x891 = INT16_MIN;
	int32_t x892 = -21088977;
	volatile int32_t t183 = 6774493;

    t183 = ((x889-(x890+x891))<=x892);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x897 = -7215179;
	int64_t x898 = INT64_MIN;
	uint8_t x899 = UINT8_MAX;
	uint32_t x900 = 1U;
	volatile int32_t t184 = -7;

    t184 = ((x897-(x898+x899))<=x900);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x901 = 4;
	static uint16_t x902 = 23U;
	uint64_t x903 = UINT64_MAX;
	static int32_t x904 = INT32_MIN;
	static volatile int32_t t185 = 0;

    t185 = ((x901-(x902+x903))<=x904);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x909 = -1;
	int32_t x910 = INT32_MAX;
	int32_t x911 = INT32_MIN;
	int32_t x912 = -6;
	static volatile int32_t t186 = 18;

    t186 = ((x909-(x910+x911))<=x912);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint64_t x913 = UINT64_MAX;
	static int16_t x914 = 21;
	int64_t x915 = -1LL;
	static volatile int32_t t187 = -1;

    t187 = ((x913-(x914+x915))<=x916);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x917 = INT32_MIN;
	int16_t x919 = INT16_MIN;
	int32_t x920 = 2569870;

    t188 = ((x917-(x918+x919))<=x920);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x921 = -1;
	int8_t x923 = 15;
	int16_t x924 = -76;
	int32_t t189 = -1;

    t189 = ((x921-(x922+x923))<=x924);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x925 = 3402889611429239563LLU;
	int8_t x926 = INT8_MIN;
	static volatile int16_t x927 = INT16_MAX;
	int32_t x928 = 32;

    t190 = ((x925-(x926+x927))<=x928);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x930 = 15710617LLU;
	int64_t x931 = INT64_MIN;
	uint32_t x932 = 2U;
	volatile int32_t t191 = 183;

    t191 = ((x929-(x930+x931))<=x932);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x938 = 18;
	static int64_t x940 = INT64_MAX;
	int32_t t192 = 728;

    t192 = ((x937-(x938+x939))<=x940);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x941 = -517377;
	uint8_t x942 = 18U;
	int16_t x943 = 14718;
	static int32_t t193 = 13511810;

    t193 = ((x941-(x942+x943))<=x944);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x954 = INT64_MAX;
	int32_t x955 = -31360;
	static int32_t x956 = -1;
	int32_t t194 = 1303;

    t194 = ((x953-(x954+x955))<=x956);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int64_t x957 = INT64_MAX;
	uint32_t x959 = UINT32_MAX;
	static uint16_t x960 = UINT16_MAX;
	int32_t t195 = -133;

    t195 = ((x957-(x958+x959))<=x960);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x961 = INT32_MAX;
	int32_t x963 = -1;
	int8_t x964 = -22;
	static volatile int32_t t196 = -824516;

    t196 = ((x961-(x962+x963))<=x964);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile uint16_t x965 = 3964U;
	static uint64_t x966 = 4291122325325LLU;
	static volatile int32_t x967 = INT32_MIN;
	volatile int16_t x968 = INT16_MIN;
	int32_t t197 = 26003;

    t197 = ((x965-(x966+x967))<=x968);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x969 = -46265;
	static int16_t x970 = -1;
	volatile uint64_t x971 = UINT64_MAX;
	static int8_t x972 = 3;
	volatile int32_t t198 = -1160;

    t198 = ((x969-(x970+x971))<=x972);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x973 = INT8_MAX;
	static volatile uint32_t x974 = 702U;
	static int8_t x975 = INT8_MIN;
	static volatile int8_t x976 = -1;
	volatile int32_t t199 = 0;

    t199 = ((x973-(x974+x975))<=x976);

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


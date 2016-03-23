
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

int16_t x1 = INT16_MIN;
volatile int32_t t1 = -30;
int64_t x9 = INT64_MIN;
volatile int32_t x11 = INT32_MIN;
static int8_t x18 = 0;
int16_t x24 = -11;
static int64_t x26 = INT64_MAX;
uint64_t x27 = 3000LLU;
volatile int64_t x30 = 117LL;
static uint64_t x35 = 7LLU;
uint64_t x37 = 6382670839258586LLU;
int32_t x48 = INT32_MIN;
int16_t x58 = INT16_MIN;
int8_t x61 = -1;
volatile int32_t t15 = 7219688;
int16_t x80 = INT16_MIN;
int16_t x93 = -906;
int16_t x97 = -409;
int8_t x99 = -1;
uint32_t x105 = UINT32_MAX;
static uint16_t x117 = 2415U;
volatile int32_t t25 = -2574642;
int64_t x127 = INT64_MIN;
static int16_t x129 = -1;
int8_t x130 = INT8_MAX;
uint8_t x132 = 63U;
volatile int32_t t28 = -41;
uint8_t x133 = 3U;
static int8_t x159 = -1;
int32_t x168 = INT32_MIN;
static uint32_t x177 = 0U;
volatile int8_t x178 = 1;
volatile int16_t x180 = INT16_MIN;
static volatile int32_t x192 = INT32_MIN;
uint32_t x193 = UINT32_MAX;
static uint16_t x195 = 673U;
uint8_t x199 = UINT8_MAX;
int16_t x200 = -1;
int32_t t41 = -135102;
volatile int16_t x210 = INT16_MIN;
int16_t x217 = INT16_MAX;
int32_t x223 = -696;
volatile int8_t x231 = INT8_MIN;
volatile int32_t x238 = INT32_MIN;
volatile int16_t x247 = INT16_MIN;
static uint32_t x262 = 347768U;
int16_t x264 = INT16_MIN;
int64_t x268 = 6422889678040543LL;
uint8_t x269 = 69U;
volatile int32_t t58 = -372;
int8_t x282 = -1;
int32_t t63 = -37358;
int64_t x297 = -1068906LL;
int8_t x300 = 0;
int32_t x301 = 1;
int32_t x303 = INT32_MIN;
static volatile int64_t x305 = -3301475872052304780LL;
int32_t x310 = INT32_MIN;
int32_t x311 = -1;
int16_t x315 = 791;
int32_t t69 = -2849041;
int8_t x318 = -8;
volatile int32_t x320 = -1;
int8_t x323 = INT8_MAX;
volatile int16_t x325 = INT16_MAX;
volatile uint64_t x333 = UINT64_MAX;
static int8_t x338 = 12;
static int32_t t75 = 3087780;
int8_t x349 = -1;
volatile uint64_t x353 = UINT64_MAX;
int16_t x368 = -1;
volatile int8_t x379 = INT8_MAX;
int8_t x380 = INT8_MIN;
int8_t x382 = 0;
int32_t x387 = 1904;
volatile int32_t t89 = -22;
int32_t x401 = 4;
volatile int32_t t91 = -13;
static int32_t x409 = INT32_MAX;
volatile int64_t x412 = INT64_MAX;
static int8_t x420 = INT8_MAX;
static volatile int32_t t93 = -4;
uint64_t x421 = 1766132407581588LLU;
int8_t x422 = INT8_MIN;
int64_t x424 = 254869378861113090LL;
int16_t x434 = INT16_MIN;
volatile uint32_t x436 = 52U;
int16_t x441 = INT16_MIN;
int64_t x443 = -1LL;
int64_t x446 = -1LL;
volatile int32_t x450 = INT32_MIN;
static volatile int32_t t102 = -4;
int8_t x458 = INT8_MIN;
volatile int32_t x462 = INT32_MIN;
static int16_t x475 = INT16_MIN;
int8_t x476 = 2;
int64_t x480 = -1LL;
static volatile int32_t t108 = 367;
int64_t x484 = INT64_MAX;
int8_t x492 = INT8_MIN;
int32_t x501 = INT32_MIN;
volatile int8_t x503 = -1;
uint32_t x509 = UINT32_MAX;
uint64_t x510 = 2104387052244609LLU;
uint16_t x511 = UINT16_MAX;
volatile int8_t x513 = INT8_MIN;
int16_t x515 = INT16_MIN;
int32_t t117 = -24824212;
uint64_t x521 = 117481653923LLU;
static uint16_t x524 = 73U;
int16_t x528 = -1;
int64_t x529 = -33719790422165LL;
volatile int8_t x537 = 13;
int32_t t125 = 697050;
static volatile int64_t x557 = INT64_MAX;
volatile int8_t x569 = -1;
static int8_t x572 = INT8_MAX;
uint32_t x585 = 160364U;
uint8_t x586 = 2U;
static int32_t t131 = 3583186;
static int32_t t132 = -595221;
int16_t x602 = INT16_MIN;
uint16_t x622 = 0U;
uint16_t x639 = 6741U;
int32_t t144 = 2034;
int16_t x645 = INT16_MAX;
int32_t t145 = 17;
int32_t t146 = 25;
int32_t x655 = -5075;
int16_t x656 = INT16_MIN;
volatile int32_t t148 = -1;
static int64_t x661 = -1LL;
uint64_t x669 = 14060100222377LLU;
static int32_t x675 = INT32_MIN;
int8_t x688 = INT8_MIN;
int32_t t156 = -8008080;
static int8_t x700 = -1;
int8_t x701 = 0;
int64_t x704 = INT64_MIN;
uint64_t x706 = 421579267762388LLU;
static int64_t x707 = INT64_MIN;
volatile int32_t t160 = -34;
int16_t x721 = 291;
volatile uint64_t x728 = 908400401LLU;
int64_t x746 = 1LL;
uint64_t x748 = 4207516LLU;
uint64_t x765 = 77882214514615024LLU;
volatile int32_t t172 = 44348730;
int8_t x786 = INT8_MIN;
static uint32_t x790 = 114818U;
uint16_t x801 = 36U;
int8_t x809 = -1;
uint32_t x812 = UINT32_MAX;
uint32_t x817 = 82872943U;
volatile int64_t x824 = 62980LL;
volatile int32_t t183 = 489124185;
int8_t x827 = -3;
static int8_t x839 = INT8_MAX;
volatile int32_t t185 = -416191;
int64_t x846 = -1LL;
uint8_t x848 = 1U;
volatile int32_t t186 = 27;
static uint8_t x849 = 57U;
int32_t x851 = INT32_MIN;
int64_t x852 = 28626044LL;
uint64_t x856 = 4766846751LLU;
int32_t t189 = 13191;
static int64_t x869 = INT64_MAX;
int8_t x873 = INT8_MAX;
int32_t x875 = -486867561;
uint32_t x876 = 999156956U;
int8_t x878 = 5;
static int32_t x879 = INT32_MIN;
static int32_t t193 = -172;
static int32_t t196 = 11;
static int64_t x901 = INT64_MIN;
uint16_t x902 = 436U;
volatile int32_t t199 = -880;


void f0(void) {
    	volatile int16_t x2 = INT16_MIN;
	int32_t x3 = INT32_MIN;
	int16_t x4 = -1;
	static volatile int32_t t0 = -124009620;

    t0 = ((x1<=x2)>(x3-x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x5 = -6932;
	int8_t x6 = 1;
	volatile int64_t x7 = 1545022LL;
	static volatile int32_t x8 = INT32_MIN;

    t1 = ((x5<=x6)>(x7-x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x10 = -9;
	uint32_t x12 = UINT32_MAX;
	volatile int32_t t2 = 886970486;

    t2 = ((x9<=x10)>(x11-x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x17 = 1U;
	uint64_t x19 = UINT64_MAX;
	int64_t x20 = INT64_MAX;
	int32_t t3 = 1192;

    t3 = ((x17<=x18)>(x19-x20));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x21 = 1123779627U;
	int16_t x22 = INT16_MAX;
	int8_t x23 = -6;
	static volatile int32_t t4 = 0;

    t4 = ((x21<=x22)>(x23-x24));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x25 = 272U;
	int8_t x28 = INT8_MAX;
	int32_t t5 = -807330453;

    t5 = ((x25<=x26)>(x27-x28));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x29 = INT8_MIN;
	volatile uint8_t x31 = 70U;
	volatile uint16_t x32 = UINT16_MAX;
	int32_t t6 = -9556;

    t6 = ((x29<=x30)>(x31-x32));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x33 = 177LLU;
	uint8_t x34 = UINT8_MAX;
	uint32_t x36 = UINT32_MAX;
	volatile int32_t t7 = 1;

    t7 = ((x33<=x34)>(x35-x36));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x38 = UINT64_MAX;
	uint16_t x39 = UINT16_MAX;
	static uint32_t x40 = UINT32_MAX;
	int32_t t8 = -1399;

    t8 = ((x37<=x38)>(x39-x40));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x41 = -250;
	volatile int64_t x42 = INT64_MAX;
	uint64_t x43 = 6147372199977LLU;
	int8_t x44 = INT8_MIN;
	int32_t t9 = 575232415;

    t9 = ((x41<=x42)>(x43-x44));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x45 = 7U;
	int8_t x46 = INT8_MIN;
	int64_t x47 = -57776399307LL;
	static int32_t t10 = -47601227;

    t10 = ((x45<=x46)>(x47-x48));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint32_t x49 = 1879589363U;
	static uint64_t x50 = 39LLU;
	volatile int16_t x51 = -1;
	int8_t x52 = INT8_MIN;
	volatile int32_t t11 = 391845936;

    t11 = ((x49<=x50)>(x51-x52));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x57 = UINT32_MAX;
	int8_t x59 = -1;
	uint16_t x60 = 217U;
	static volatile int32_t t12 = -11172128;

    t12 = ((x57<=x58)>(x59-x60));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x62 = -1;
	int8_t x63 = 0;
	static volatile int64_t x64 = 111285LL;
	volatile int32_t t13 = 47487;

    t13 = ((x61<=x62)>(x63-x64));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x69 = INT16_MIN;
	volatile int32_t x70 = INT32_MIN;
	volatile int64_t x71 = 6197135840578LL;
	int8_t x72 = INT8_MAX;
	int32_t t14 = -2710585;

    t14 = ((x69<=x70)>(x71-x72));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x73 = UINT16_MAX;
	int32_t x74 = -1;
	uint64_t x75 = 914LLU;
	uint16_t x76 = 28U;

    t15 = ((x73<=x74)>(x75-x76));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int8_t x77 = -41;
	uint64_t x78 = UINT64_MAX;
	int16_t x79 = 6978;
	volatile int32_t t16 = 24878;

    t16 = ((x77<=x78)>(x79-x80));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x81 = INT8_MIN;
	int32_t x82 = -1;
	int64_t x83 = 609LL;
	uint8_t x84 = UINT8_MAX;
	volatile int32_t t17 = 60528636;

    t17 = ((x81<=x82)>(x83-x84));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x85 = UINT32_MAX;
	static int32_t x86 = INT32_MIN;
	int32_t x87 = -1;
	volatile int8_t x88 = INT8_MIN;
	static volatile int32_t t18 = -28276;

    t18 = ((x85<=x86)>(x87-x88));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint64_t x89 = 183312641360LLU;
	int8_t x90 = INT8_MAX;
	uint16_t x91 = 15368U;
	uint32_t x92 = 0U;
	volatile int32_t t19 = -110;

    t19 = ((x89<=x90)>(x91-x92));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x94 = INT16_MIN;
	volatile uint8_t x95 = 30U;
	static uint8_t x96 = 24U;
	int32_t t20 = 4119276;

    t20 = ((x93<=x94)>(x95-x96));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x98 = -1LL;
	int32_t x100 = INT32_MIN;
	int32_t t21 = -7228;

    t21 = ((x97<=x98)>(x99-x100));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint8_t x106 = 20U;
	int8_t x107 = -1;
	uint32_t x108 = 53738U;
	int32_t t22 = -2846701;

    t22 = ((x105<=x106)>(x107-x108));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x109 = -1;
	uint32_t x110 = 960725U;
	static int32_t x111 = INT32_MIN;
	static uint64_t x112 = 42931933629LLU;
	int32_t t23 = -1;

    t23 = ((x109<=x110)>(x111-x112));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x113 = UINT64_MAX;
	uint8_t x114 = 38U;
	uint16_t x115 = 15U;
	static uint32_t x116 = 44231U;
	int32_t t24 = 138096591;

    t24 = ((x113<=x114)>(x115-x116));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x118 = 23490134337LL;
	uint16_t x119 = UINT16_MAX;
	volatile int64_t x120 = INT64_MAX;

    t25 = ((x117<=x118)>(x119-x120));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x121 = 6;
	int8_t x122 = 1;
	uint8_t x123 = 14U;
	int64_t x124 = -1LL;
	int32_t t26 = -119;

    t26 = ((x121<=x122)>(x123-x124));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x125 = -232310;
	int8_t x126 = -5;
	static int32_t x128 = INT32_MIN;
	int32_t t27 = 5222;

    t27 = ((x125<=x126)>(x127-x128));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x131 = INT16_MIN;

    t28 = ((x129<=x130)>(x131-x132));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x134 = 3370121496037584643LL;
	static int16_t x135 = -1;
	int64_t x136 = 2864246721396932267LL;
	volatile int32_t t29 = 101431;

    t29 = ((x133<=x134)>(x135-x136));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x137 = -213747505306752750LL;
	static int8_t x138 = 3;
	volatile int8_t x139 = INT8_MIN;
	int64_t x140 = INT64_MIN;
	static int32_t t30 = 4505518;

    t30 = ((x137<=x138)>(x139-x140));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x141 = INT16_MAX;
	int8_t x142 = -2;
	int8_t x143 = INT8_MAX;
	uint32_t x144 = 2U;
	volatile int32_t t31 = 1603965;

    t31 = ((x141<=x142)>(x143-x144));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint64_t x149 = 2262LLU;
	uint32_t x150 = 819324U;
	volatile int8_t x151 = INT8_MIN;
	int64_t x152 = INT64_MIN;
	int32_t t32 = -120216;

    t32 = ((x149<=x150)>(x151-x152));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint16_t x153 = 1U;
	int8_t x154 = -5;
	uint16_t x155 = 7129U;
	static uint32_t x156 = UINT32_MAX;
	int32_t t33 = -329443;

    t33 = ((x153<=x154)>(x155-x156));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x157 = UINT64_MAX;
	uint32_t x158 = 2U;
	int8_t x160 = -1;
	volatile int32_t t34 = 5243;

    t34 = ((x157<=x158)>(x159-x160));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x161 = 1;
	static int16_t x162 = 31;
	static int8_t x163 = -26;
	uint16_t x164 = 1U;
	static volatile int32_t t35 = -8553;

    t35 = ((x161<=x162)>(x163-x164));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x165 = INT64_MIN;
	int64_t x166 = -1LL;
	int8_t x167 = INT8_MIN;
	volatile int32_t t36 = 2827;

    t36 = ((x165<=x166)>(x167-x168));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x179 = INT8_MAX;
	volatile int32_t t37 = 208218277;

    t37 = ((x177<=x178)>(x179-x180));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x185 = INT32_MAX;
	int8_t x186 = 37;
	volatile int16_t x187 = 12889;
	int8_t x188 = -11;
	volatile int32_t t38 = -1;

    t38 = ((x185<=x186)>(x187-x188));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x189 = INT8_MIN;
	int64_t x190 = INT64_MIN;
	int8_t x191 = INT8_MIN;
	static int32_t t39 = -24494;

    t39 = ((x189<=x190)>(x191-x192));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x194 = 3U;
	static int16_t x196 = -1;
	volatile int32_t t40 = 61242907;

    t40 = ((x193<=x194)>(x195-x196));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint64_t x197 = 75LLU;
	static volatile int32_t x198 = INT32_MIN;

    t41 = ((x197<=x198)>(x199-x200));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x201 = INT64_MIN;
	volatile int64_t x202 = INT64_MAX;
	static volatile int64_t x203 = -1LL;
	static int16_t x204 = -1;
	static int32_t t42 = 3;

    t42 = ((x201<=x202)>(x203-x204));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x205 = -1;
	static int64_t x206 = 5861110LL;
	int8_t x207 = -7;
	uint32_t x208 = UINT32_MAX;
	volatile int32_t t43 = 2560746;

    t43 = ((x205<=x206)>(x207-x208));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint8_t x209 = 11U;
	int16_t x211 = INT16_MIN;
	int32_t x212 = -1;
	volatile int32_t t44 = 16;

    t44 = ((x209<=x210)>(x211-x212));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x213 = 5LLU;
	int8_t x214 = INT8_MIN;
	static int32_t x215 = -1;
	int64_t x216 = 1632221LL;
	static int32_t t45 = 0;

    t45 = ((x213<=x214)>(x215-x216));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x218 = INT32_MIN;
	volatile int64_t x219 = -110905496608861474LL;
	int64_t x220 = INT64_MIN;
	static int32_t t46 = 177;

    t46 = ((x217<=x218)>(x219-x220));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x221 = 2566;
	int32_t x222 = -1;
	int8_t x224 = -1;
	volatile int32_t t47 = -480;

    t47 = ((x221<=x222)>(x223-x224));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x225 = INT64_MIN;
	volatile uint16_t x226 = 26039U;
	uint32_t x227 = 12824U;
	uint32_t x228 = 33491945U;
	volatile int32_t t48 = -192138;

    t48 = ((x225<=x226)>(x227-x228));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint32_t x229 = UINT32_MAX;
	volatile int32_t x230 = -1;
	int8_t x232 = INT8_MIN;
	int32_t t49 = -480150068;

    t49 = ((x229<=x230)>(x231-x232));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x233 = -1LL;
	int8_t x234 = 1;
	volatile int64_t x235 = INT64_MIN;
	int64_t x236 = INT64_MIN;
	volatile int32_t t50 = 1;

    t50 = ((x233<=x234)>(x235-x236));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x237 = INT16_MIN;
	int8_t x239 = 26;
	uint16_t x240 = UINT16_MAX;
	volatile int32_t t51 = 1938;

    t51 = ((x237<=x238)>(x239-x240));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x241 = INT16_MIN;
	uint16_t x242 = 116U;
	int16_t x243 = 631;
	int8_t x244 = INT8_MIN;
	int32_t t52 = 114024642;

    t52 = ((x241<=x242)>(x243-x244));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x245 = INT8_MIN;
	int8_t x246 = INT8_MIN;
	static int64_t x248 = INT64_MIN;
	static volatile int32_t t53 = 4027491;

    t53 = ((x245<=x246)>(x247-x248));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x249 = INT64_MIN;
	int64_t x250 = INT64_MAX;
	volatile uint32_t x251 = 4812236U;
	int16_t x252 = INT16_MAX;
	volatile int32_t t54 = 39881;

    t54 = ((x249<=x250)>(x251-x252));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x257 = -1;
	int32_t x258 = INT32_MAX;
	uint64_t x259 = 40538634630697075LLU;
	static uint32_t x260 = 2080499245U;
	volatile int32_t t55 = 364287;

    t55 = ((x257<=x258)>(x259-x260));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x261 = INT64_MIN;
	uint32_t x263 = UINT32_MAX;
	int32_t t56 = 1504040;

    t56 = ((x261<=x262)>(x263-x264));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x265 = INT8_MIN;
	int64_t x266 = 975903736264052LL;
	volatile int8_t x267 = INT8_MIN;
	static volatile int32_t t57 = -33;

    t57 = ((x265<=x266)>(x267-x268));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x270 = -1;
	uint64_t x271 = 74366288336946LLU;
	volatile uint32_t x272 = UINT32_MAX;

    t58 = ((x269<=x270)>(x271-x272));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x273 = -12;
	static int64_t x274 = INT64_MAX;
	int16_t x275 = -15340;
	volatile uint64_t x276 = 20552527916LLU;
	volatile int32_t t59 = 9;

    t59 = ((x273<=x274)>(x275-x276));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int8_t x277 = INT8_MAX;
	volatile int8_t x278 = -1;
	int32_t x279 = 6;
	int64_t x280 = INT64_MAX;
	static int32_t t60 = 985267254;

    t60 = ((x277<=x278)>(x279-x280));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x281 = 940919055760707LLU;
	uint32_t x283 = 730953932U;
	int32_t x284 = -1;
	volatile int32_t t61 = -2241;

    t61 = ((x281<=x282)>(x283-x284));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x285 = UINT64_MAX;
	uint64_t x286 = 407091681164703083LLU;
	uint8_t x287 = 16U;
	static volatile uint16_t x288 = UINT16_MAX;
	volatile int32_t t62 = 12092119;

    t62 = ((x285<=x286)>(x287-x288));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint8_t x289 = 4U;
	int16_t x290 = INT16_MAX;
	int32_t x291 = INT32_MIN;
	int8_t x292 = INT8_MIN;

    t63 = ((x289<=x290)>(x291-x292));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x293 = 44;
	volatile int32_t x294 = 78;
	uint32_t x295 = UINT32_MAX;
	int16_t x296 = -5563;
	int32_t t64 = -440622888;

    t64 = ((x293<=x294)>(x295-x296));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x298 = 3657LL;
	volatile int32_t x299 = INT32_MIN;
	int32_t t65 = -68;

    t65 = ((x297<=x298)>(x299-x300));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x302 = 41LLU;
	int8_t x304 = INT8_MIN;
	int32_t t66 = -81;

    t66 = ((x301<=x302)>(x303-x304));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint32_t x306 = 3670275U;
	volatile int32_t x307 = INT32_MIN;
	int64_t x308 = INT64_MIN;
	volatile int32_t t67 = -164605;

    t67 = ((x305<=x306)>(x307-x308));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x309 = 2812504LLU;
	uint64_t x312 = 631246584567573016LLU;
	volatile int32_t t68 = -8961;

    t68 = ((x309<=x310)>(x311-x312));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x313 = INT8_MIN;
	static volatile uint16_t x314 = UINT16_MAX;
	int64_t x316 = INT64_MAX;

    t69 = ((x313<=x314)>(x315-x316));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x317 = INT16_MIN;
	static volatile int16_t x319 = -1;
	int32_t t70 = -13208;

    t70 = ((x317<=x318)>(x319-x320));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x321 = 1U;
	volatile int32_t x322 = INT32_MIN;
	volatile int8_t x324 = INT8_MIN;
	volatile int32_t t71 = -445709789;

    t71 = ((x321<=x322)>(x323-x324));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x326 = 322286LLU;
	volatile int64_t x327 = 168800447LL;
	uint16_t x328 = 3930U;
	int32_t t72 = 77483763;

    t72 = ((x325<=x326)>(x327-x328));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x329 = INT8_MIN;
	volatile int8_t x330 = -1;
	int64_t x331 = 7LL;
	uint64_t x332 = UINT64_MAX;
	int32_t t73 = -100;

    t73 = ((x329<=x330)>(x331-x332));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x334 = INT8_MAX;
	int8_t x335 = INT8_MIN;
	uint64_t x336 = 503LLU;
	static int32_t t74 = -8259040;

    t74 = ((x333<=x334)>(x335-x336));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x337 = -1LL;
	int64_t x339 = -126392343459LL;
	int8_t x340 = INT8_MIN;

    t75 = ((x337<=x338)>(x339-x340));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x341 = 31797LL;
	int32_t x342 = INT32_MAX;
	int32_t x343 = INT32_MIN;
	int64_t x344 = INT64_MIN;
	static int32_t t76 = 8078;

    t76 = ((x341<=x342)>(x343-x344));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x345 = -1;
	int32_t x346 = INT32_MIN;
	static int64_t x347 = -293870728LL;
	static uint64_t x348 = UINT64_MAX;
	volatile int32_t t77 = 53007375;

    t77 = ((x345<=x346)>(x347-x348));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x350 = INT64_MIN;
	uint8_t x351 = 1U;
	static int8_t x352 = -1;
	static volatile int32_t t78 = -158099697;

    t78 = ((x349<=x350)>(x351-x352));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x354 = -1278;
	int8_t x355 = INT8_MIN;
	int32_t x356 = -678309;
	volatile int32_t t79 = 1261766;

    t79 = ((x353<=x354)>(x355-x356));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x357 = INT64_MAX;
	uint32_t x358 = UINT32_MAX;
	uint64_t x359 = 531334074141742708LLU;
	volatile int16_t x360 = 0;
	int32_t t80 = -81;

    t80 = ((x357<=x358)>(x359-x360));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x361 = 411457824213180736LL;
	uint64_t x362 = 61LLU;
	volatile uint16_t x363 = 1U;
	int16_t x364 = -124;
	volatile int32_t t81 = 112;

    t81 = ((x361<=x362)>(x363-x364));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x365 = INT16_MIN;
	uint32_t x366 = UINT32_MAX;
	uint16_t x367 = UINT16_MAX;
	int32_t t82 = 120658;

    t82 = ((x365<=x366)>(x367-x368));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint32_t x369 = UINT32_MAX;
	int8_t x370 = INT8_MAX;
	int64_t x371 = 884535LL;
	uint16_t x372 = 1U;
	int32_t t83 = -14743;

    t83 = ((x369<=x370)>(x371-x372));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x373 = INT32_MAX;
	int16_t x374 = INT16_MIN;
	volatile int64_t x375 = INT64_MIN;
	static volatile int64_t x376 = INT64_MIN;
	volatile int32_t t84 = 1;

    t84 = ((x373<=x374)>(x375-x376));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x377 = INT16_MAX;
	static uint64_t x378 = 870LLU;
	volatile int32_t t85 = 7504615;

    t85 = ((x377<=x378)>(x379-x380));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x381 = -198961;
	int64_t x383 = INT64_MIN;
	int16_t x384 = INT16_MIN;
	volatile int32_t t86 = 247095211;

    t86 = ((x381<=x382)>(x383-x384));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x385 = 365U;
	static int64_t x386 = 525531332332LL;
	int8_t x388 = INT8_MIN;
	volatile int32_t t87 = -856637;

    t87 = ((x385<=x386)>(x387-x388));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int32_t x389 = 93;
	uint64_t x390 = 4038LLU;
	int16_t x391 = INT16_MIN;
	int64_t x392 = INT64_MIN;
	int32_t t88 = -1767814;

    t88 = ((x389<=x390)>(x391-x392));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x393 = -1;
	uint8_t x394 = 90U;
	static int32_t x395 = -2016167;
	uint64_t x396 = UINT64_MAX;

    t89 = ((x393<=x394)>(x395-x396));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x397 = INT8_MIN;
	uint64_t x398 = UINT64_MAX;
	uint32_t x399 = 419983U;
	volatile uint32_t x400 = 1810656683U;
	int32_t t90 = -1;

    t90 = ((x397<=x398)>(x399-x400));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x402 = 231LLU;
	static int32_t x403 = -50073990;
	uint64_t x404 = 42797173883742209LLU;

    t91 = ((x401<=x402)>(x403-x404));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x410 = 6737;
	volatile int32_t x411 = -1;
	static volatile int32_t t92 = -79808486;

    t92 = ((x409<=x410)>(x411-x412));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x417 = -4;
	int64_t x418 = 2215LL;
	volatile int64_t x419 = 6961433633636507LL;

    t93 = ((x417<=x418)>(x419-x420));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint32_t x423 = 147616008U;
	int32_t t94 = -178;

    t94 = ((x421<=x422)>(x423-x424));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x425 = UINT8_MAX;
	volatile int16_t x426 = INT16_MIN;
	int16_t x427 = INT16_MAX;
	uint32_t x428 = 214047018U;
	volatile int32_t t95 = 183683;

    t95 = ((x425<=x426)>(x427-x428));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x429 = 2U;
	int32_t x430 = -53594555;
	uint32_t x431 = UINT32_MAX;
	static int8_t x432 = 60;
	int32_t t96 = -61;

    t96 = ((x429<=x430)>(x431-x432));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x433 = UINT8_MAX;
	uint32_t x435 = UINT32_MAX;
	volatile int32_t t97 = 3;

    t97 = ((x433<=x434)>(x435-x436));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x437 = 1;
	int64_t x438 = INT64_MAX;
	int8_t x439 = -1;
	uint32_t x440 = 874078U;
	int32_t t98 = -287065234;

    t98 = ((x437<=x438)>(x439-x440));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x442 = 5;
	volatile int16_t x444 = -1972;
	static int32_t t99 = -1047675;

    t99 = ((x441<=x442)>(x443-x444));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x445 = -31;
	static volatile int32_t x447 = INT32_MIN;
	volatile int32_t x448 = -494193;
	volatile int32_t t100 = 813169376;

    t100 = ((x445<=x446)>(x447-x448));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x449 = 29;
	volatile int16_t x451 = -1;
	int16_t x452 = INT16_MIN;
	volatile int32_t t101 = -2440;

    t101 = ((x449<=x450)>(x451-x452));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x453 = 9774629932232226LLU;
	uint16_t x454 = UINT16_MAX;
	int64_t x455 = -1LL;
	volatile uint64_t x456 = 1466810410LLU;

    t102 = ((x453<=x454)>(x455-x456));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint16_t x457 = 2145U;
	int16_t x459 = INT16_MIN;
	int8_t x460 = INT8_MIN;
	volatile int32_t t103 = 2;

    t103 = ((x457<=x458)>(x459-x460));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x461 = INT8_MIN;
	int64_t x463 = INT64_MIN;
	volatile int16_t x464 = -1;
	int32_t t104 = -448975;

    t104 = ((x461<=x462)>(x463-x464));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x465 = -1LL;
	static volatile uint32_t x466 = 21U;
	uint32_t x467 = UINT32_MAX;
	static int8_t x468 = INT8_MAX;
	int32_t t105 = 82;

    t105 = ((x465<=x466)>(x467-x468));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x469 = 9;
	volatile int8_t x470 = INT8_MAX;
	uint32_t x471 = UINT32_MAX;
	static int16_t x472 = 0;
	int32_t t106 = -10948;

    t106 = ((x469<=x470)>(x471-x472));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x473 = 26U;
	uint8_t x474 = 0U;
	static volatile int32_t t107 = 118578;

    t107 = ((x473<=x474)>(x475-x476));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x477 = -402;
	uint8_t x478 = UINT8_MAX;
	int8_t x479 = 2;

    t108 = ((x477<=x478)>(x479-x480));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x481 = INT32_MIN;
	int16_t x482 = INT16_MIN;
	static volatile int8_t x483 = 1;
	int32_t t109 = -2;

    t109 = ((x481<=x482)>(x483-x484));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x485 = -38;
	static uint64_t x486 = 23LLU;
	static uint64_t x487 = 2387757365LLU;
	int16_t x488 = 115;
	static volatile int32_t t110 = -1725700;

    t110 = ((x485<=x486)>(x487-x488));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x489 = -1;
	uint32_t x490 = UINT32_MAX;
	int16_t x491 = -637;
	volatile int32_t t111 = -151318800;

    t111 = ((x489<=x490)>(x491-x492));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x493 = INT8_MIN;
	int8_t x494 = -52;
	uint16_t x495 = 28U;
	volatile int8_t x496 = INT8_MAX;
	int32_t t112 = 2137460;

    t112 = ((x493<=x494)>(x495-x496));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x497 = -807860;
	int32_t x498 = 0;
	static volatile uint32_t x499 = 376422302U;
	int8_t x500 = 12;
	int32_t t113 = 269695;

    t113 = ((x497<=x498)>(x499-x500));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x502 = -1;
	volatile uint16_t x504 = 34U;
	volatile int32_t t114 = -9152342;

    t114 = ((x501<=x502)>(x503-x504));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x512 = 103U;
	int32_t t115 = -422;

    t115 = ((x509<=x510)>(x511-x512));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x514 = UINT8_MAX;
	static volatile int8_t x516 = INT8_MIN;
	int32_t t116 = -19429;

    t116 = ((x513<=x514)>(x515-x516));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x517 = INT16_MAX;
	int8_t x518 = -48;
	int16_t x519 = 6;
	int32_t x520 = -1270246;

    t117 = ((x517<=x518)>(x519-x520));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x522 = 1U;
	int32_t x523 = INT32_MAX;
	volatile int32_t t118 = -2;

    t118 = ((x521<=x522)>(x523-x524));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x525 = 494121450U;
	uint8_t x526 = 5U;
	static uint8_t x527 = UINT8_MAX;
	volatile int32_t t119 = -14957;

    t119 = ((x525<=x526)>(x527-x528));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x530 = INT16_MAX;
	int8_t x531 = INT8_MIN;
	uint8_t x532 = UINT8_MAX;
	volatile int32_t t120 = 25678;

    t120 = ((x529<=x530)>(x531-x532));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x533 = INT16_MAX;
	static int16_t x534 = 0;
	static volatile int32_t x535 = -2653;
	int16_t x536 = INT16_MAX;
	static volatile int32_t t121 = -217;

    t121 = ((x533<=x534)>(x535-x536));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x538 = INT8_MIN;
	volatile uint16_t x539 = UINT16_MAX;
	int32_t x540 = 30;
	int32_t t122 = -937;

    t122 = ((x537<=x538)>(x539-x540));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x545 = INT16_MIN;
	int32_t x546 = INT32_MIN;
	volatile int64_t x547 = INT64_MIN;
	uint8_t x548 = 0U;
	static volatile int32_t t123 = 1;

    t123 = ((x545<=x546)>(x547-x548));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x549 = -1;
	int32_t x550 = INT32_MIN;
	int16_t x551 = 251;
	int16_t x552 = INT16_MIN;
	volatile int32_t t124 = -3;

    t124 = ((x549<=x550)>(x551-x552));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x553 = -7124258LL;
	uint32_t x554 = UINT32_MAX;
	volatile int16_t x555 = INT16_MAX;
	int32_t x556 = INT32_MAX;

    t125 = ((x553<=x554)>(x555-x556));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x558 = INT16_MIN;
	static volatile int64_t x559 = -75223088LL;
	volatile int64_t x560 = -1LL;
	int32_t t126 = -10;

    t126 = ((x557<=x558)>(x559-x560));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint32_t x561 = UINT32_MAX;
	volatile int8_t x562 = INT8_MIN;
	int16_t x563 = INT16_MIN;
	int32_t x564 = INT32_MIN;
	int32_t t127 = 10350388;

    t127 = ((x561<=x562)>(x563-x564));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x565 = -188604727249LL;
	int32_t x566 = 347335;
	uint16_t x567 = 9U;
	static uint8_t x568 = UINT8_MAX;
	int32_t t128 = 1296761;

    t128 = ((x565<=x566)>(x567-x568));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x570 = 1;
	int64_t x571 = -118718430116719LL;
	static int32_t t129 = 11321304;

    t129 = ((x569<=x570)>(x571-x572));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x573 = UINT8_MAX;
	uint8_t x574 = 5U;
	int16_t x575 = INT16_MIN;
	uint64_t x576 = UINT64_MAX;
	int32_t t130 = 542110895;

    t130 = ((x573<=x574)>(x575-x576));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x587 = 1618306968757021824LL;
	int32_t x588 = INT32_MIN;

    t131 = ((x585<=x586)>(x587-x588));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint32_t x589 = 6U;
	int32_t x590 = INT32_MIN;
	uint8_t x591 = 38U;
	static int64_t x592 = -1LL;

    t132 = ((x589<=x590)>(x591-x592));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint8_t x593 = 41U;
	static int8_t x594 = INT8_MIN;
	int16_t x595 = INT16_MAX;
	static uint32_t x596 = 15876U;
	volatile int32_t t133 = -22744229;

    t133 = ((x593<=x594)>(x595-x596));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x597 = 1501369U;
	volatile uint32_t x598 = 0U;
	static int8_t x599 = INT8_MIN;
	uint64_t x600 = 439022616028725LLU;
	int32_t t134 = -173;

    t134 = ((x597<=x598)>(x599-x600));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x601 = -1;
	volatile uint32_t x603 = 244U;
	int8_t x604 = INT8_MAX;
	volatile int32_t t135 = 7;

    t135 = ((x601<=x602)>(x603-x604));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x605 = INT16_MIN;
	int16_t x606 = INT16_MIN;
	int8_t x607 = 5;
	int8_t x608 = -1;
	volatile int32_t t136 = 24150;

    t136 = ((x605<=x606)>(x607-x608));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x609 = 441;
	int16_t x610 = 1;
	int8_t x611 = INT8_MIN;
	int16_t x612 = -12;
	volatile int32_t t137 = -1;

    t137 = ((x609<=x610)>(x611-x612));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x617 = 12U;
	static volatile uint16_t x618 = UINT16_MAX;
	int8_t x619 = 27;
	uint32_t x620 = UINT32_MAX;
	static int32_t t138 = 18027687;

    t138 = ((x617<=x618)>(x619-x620));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint32_t x621 = 674U;
	int32_t x623 = 58134;
	uint64_t x624 = 55318877999484160LLU;
	int32_t t139 = -27460097;

    t139 = ((x621<=x622)>(x623-x624));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x625 = INT32_MIN;
	uint16_t x626 = 6U;
	static int64_t x627 = -1LL;
	static int32_t x628 = INT32_MAX;
	static int32_t t140 = 47677764;

    t140 = ((x625<=x626)>(x627-x628));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x629 = INT32_MIN;
	volatile uint16_t x630 = 81U;
	uint64_t x631 = UINT64_MAX;
	int8_t x632 = -24;
	int32_t t141 = -2500119;

    t141 = ((x629<=x630)>(x631-x632));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x633 = 497;
	static int16_t x634 = 4320;
	static int16_t x635 = INT16_MIN;
	int8_t x636 = -1;
	volatile int32_t t142 = 1;

    t142 = ((x633<=x634)>(x635-x636));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x637 = 5;
	volatile int16_t x638 = INT16_MIN;
	int16_t x640 = -1;
	volatile int32_t t143 = 84;

    t143 = ((x637<=x638)>(x639-x640));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x641 = INT8_MIN;
	uint32_t x642 = 107258577U;
	volatile uint16_t x643 = 1372U;
	int16_t x644 = 46;

    t144 = ((x641<=x642)>(x643-x644));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x646 = INT64_MAX;
	int64_t x647 = 1929652LL;
	int8_t x648 = INT8_MAX;

    t145 = ((x645<=x646)>(x647-x648));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x649 = UINT64_MAX;
	int8_t x650 = INT8_MIN;
	static volatile int32_t x651 = 102970;
	static volatile uint32_t x652 = 834764941U;

    t146 = ((x649<=x650)>(x651-x652));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x653 = INT64_MIN;
	int16_t x654 = INT16_MAX;
	volatile int32_t t147 = 3;

    t147 = ((x653<=x654)>(x655-x656));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x657 = -7258784;
	int16_t x658 = INT16_MAX;
	volatile uint64_t x659 = UINT64_MAX;
	int8_t x660 = INT8_MAX;

    t148 = ((x657<=x658)>(x659-x660));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x662 = 0;
	static int64_t x663 = -1860302LL;
	static int8_t x664 = 16;
	int32_t t149 = -91;

    t149 = ((x661<=x662)>(x663-x664));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x665 = 161107289217LLU;
	static volatile int64_t x666 = INT64_MIN;
	uint64_t x667 = UINT64_MAX;
	uint16_t x668 = 5U;
	int32_t t150 = -208178;

    t150 = ((x665<=x666)>(x667-x668));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x670 = UINT32_MAX;
	int16_t x671 = INT16_MIN;
	int8_t x672 = -3;
	volatile int32_t t151 = -981;

    t151 = ((x669<=x670)>(x671-x672));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x673 = INT64_MIN;
	int64_t x674 = INT64_MIN;
	int64_t x676 = -249823851746LL;
	static int32_t t152 = -129128;

    t152 = ((x673<=x674)>(x675-x676));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x677 = 13U;
	static int16_t x678 = INT16_MAX;
	uint64_t x679 = 247273676326LLU;
	int16_t x680 = INT16_MAX;
	int32_t t153 = -451799857;

    t153 = ((x677<=x678)>(x679-x680));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint8_t x681 = 0U;
	static uint16_t x682 = UINT16_MAX;
	volatile int64_t x683 = -1LL;
	uint16_t x684 = 6905U;
	static volatile int32_t t154 = -28;

    t154 = ((x681<=x682)>(x683-x684));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x685 = INT8_MIN;
	static int64_t x686 = -6819140LL;
	uint8_t x687 = UINT8_MAX;
	static volatile int32_t t155 = -3274954;

    t155 = ((x685<=x686)>(x687-x688));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x689 = 1005U;
	int32_t x690 = -819;
	int16_t x691 = -732;
	volatile uint8_t x692 = 7U;

    t156 = ((x689<=x690)>(x691-x692));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x693 = INT16_MIN;
	static uint16_t x694 = 165U;
	volatile int8_t x695 = INT8_MIN;
	int16_t x696 = -1;
	volatile int32_t t157 = 9664;

    t157 = ((x693<=x694)>(x695-x696));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint64_t x697 = 743919821LLU;
	int16_t x698 = INT16_MAX;
	volatile int16_t x699 = INT16_MAX;
	int32_t t158 = -3155537;

    t158 = ((x697<=x698)>(x699-x700));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x702 = 156865493U;
	static int8_t x703 = INT8_MIN;
	int32_t t159 = -792233;

    t159 = ((x701<=x702)>(x703-x704));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x705 = 7059U;
	static int16_t x708 = INT16_MIN;

    t160 = ((x705<=x706)>(x707-x708));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x709 = -1;
	volatile uint64_t x710 = 23611661422677LLU;
	static uint8_t x711 = 1U;
	uint8_t x712 = 2U;
	int32_t t161 = 15;

    t161 = ((x709<=x710)>(x711-x712));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int16_t x713 = INT16_MIN;
	static int16_t x714 = INT16_MIN;
	int64_t x715 = 193LL;
	volatile uint8_t x716 = UINT8_MAX;
	static int32_t t162 = -744;

    t162 = ((x713<=x714)>(x715-x716));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x717 = 1941U;
	static int64_t x718 = -1LL;
	uint16_t x719 = 13U;
	uint8_t x720 = 39U;
	volatile int32_t t163 = 7;

    t163 = ((x717<=x718)>(x719-x720));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x722 = -13;
	int8_t x723 = INT8_MIN;
	static int32_t x724 = -1;
	volatile int32_t t164 = 7974937;

    t164 = ((x721<=x722)>(x723-x724));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x725 = INT32_MIN;
	volatile uint8_t x726 = 3U;
	volatile uint16_t x727 = 4U;
	static int32_t t165 = 100337123;

    t165 = ((x725<=x726)>(x727-x728));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint64_t x729 = 3521183LLU;
	int16_t x730 = -804;
	int32_t x731 = INT32_MIN;
	volatile int64_t x732 = 820150450667323LL;
	int32_t t166 = 301184;

    t166 = ((x729<=x730)>(x731-x732));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x733 = INT32_MAX;
	int64_t x734 = INT64_MIN;
	int8_t x735 = -3;
	uint16_t x736 = 29157U;
	static int32_t t167 = 106;

    t167 = ((x733<=x734)>(x735-x736));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x737 = -3;
	volatile int32_t x738 = -222783685;
	volatile int32_t x739 = -1;
	int32_t x740 = INT32_MIN;
	volatile int32_t t168 = -52;

    t168 = ((x737<=x738)>(x739-x740));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x745 = INT16_MIN;
	uint64_t x747 = UINT64_MAX;
	int32_t t169 = 118339;

    t169 = ((x745<=x746)>(x747-x748));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x749 = INT32_MAX;
	static int8_t x750 = -1;
	volatile int64_t x751 = -1LL;
	int32_t x752 = INT32_MIN;
	volatile int32_t t170 = 1;

    t170 = ((x749<=x750)>(x751-x752));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int32_t x761 = INT32_MAX;
	int32_t x762 = -1;
	int32_t x763 = -1;
	int32_t x764 = 4167221;
	volatile int32_t t171 = 19123246;

    t171 = ((x761<=x762)>(x763-x764));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int16_t x766 = -1;
	int8_t x767 = 1;
	static volatile uint8_t x768 = 2U;

    t172 = ((x765<=x766)>(x767-x768));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x773 = UINT8_MAX;
	int8_t x774 = 45;
	volatile uint32_t x775 = UINT32_MAX;
	volatile int8_t x776 = INT8_MAX;
	static volatile int32_t t173 = -519;

    t173 = ((x773<=x774)>(x775-x776));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x785 = -1;
	int8_t x787 = INT8_MIN;
	int64_t x788 = -345117164361LL;
	int32_t t174 = 5834;

    t174 = ((x785<=x786)>(x787-x788));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x789 = UINT32_MAX;
	int64_t x791 = 1120434594834317LL;
	static uint8_t x792 = UINT8_MAX;
	int32_t t175 = -345303503;

    t175 = ((x789<=x790)>(x791-x792));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int32_t x793 = INT32_MIN;
	uint64_t x794 = UINT64_MAX;
	int16_t x795 = 1445;
	static int8_t x796 = INT8_MIN;
	volatile int32_t t176 = -69932228;

    t176 = ((x793<=x794)>(x795-x796));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x797 = 3709;
	int16_t x798 = -3889;
	int8_t x799 = 1;
	uint8_t x800 = 3U;
	volatile int32_t t177 = 70;

    t177 = ((x797<=x798)>(x799-x800));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x802 = 247746764;
	int32_t x803 = 397739654;
	int16_t x804 = -1;
	volatile int32_t t178 = 9410;

    t178 = ((x801<=x802)>(x803-x804));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x805 = INT8_MIN;
	volatile int8_t x806 = -1;
	int64_t x807 = -3966LL;
	int32_t x808 = 19559;
	int32_t t179 = 79831;

    t179 = ((x805<=x806)>(x807-x808));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x810 = -346;
	static volatile int8_t x811 = INT8_MAX;
	static volatile int32_t t180 = -10;

    t180 = ((x809<=x810)>(x811-x812));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x813 = -1;
	static volatile int16_t x814 = 3628;
	static int32_t x815 = INT32_MIN;
	volatile int16_t x816 = 0;
	static int32_t t181 = -32;

    t181 = ((x813<=x814)>(x815-x816));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x818 = 329LL;
	static int16_t x819 = INT16_MIN;
	volatile uint64_t x820 = UINT64_MAX;
	static volatile int32_t t182 = -941171058;

    t182 = ((x817<=x818)>(x819-x820));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x821 = -1;
	uint64_t x822 = UINT64_MAX;
	int32_t x823 = -1;

    t183 = ((x821<=x822)>(x823-x824));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x825 = -108539190;
	int8_t x826 = -1;
	static uint16_t x828 = UINT16_MAX;
	volatile int32_t t184 = -254150;

    t184 = ((x825<=x826)>(x827-x828));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x837 = 7U;
	volatile uint32_t x838 = 16261805U;
	int8_t x840 = INT8_MAX;

    t185 = ((x837<=x838)>(x839-x840));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x845 = -1LL;
	int16_t x847 = -1;

    t186 = ((x845<=x846)>(x847-x848));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x850 = INT64_MIN;
	int32_t t187 = 12356;

    t187 = ((x849<=x850)>(x851-x852));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x853 = 29U;
	int64_t x854 = 222017578465403LL;
	volatile int8_t x855 = 25;
	volatile int32_t t188 = 1;

    t188 = ((x853<=x854)>(x855-x856));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x857 = INT32_MAX;
	uint8_t x858 = UINT8_MAX;
	int64_t x859 = 706804893357897LL;
	volatile int8_t x860 = -1;

    t189 = ((x857<=x858)>(x859-x860));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x865 = -1LL;
	int16_t x866 = INT16_MIN;
	static volatile uint16_t x867 = 31768U;
	static volatile int64_t x868 = -1LL;
	int32_t t190 = 1039434;

    t190 = ((x865<=x866)>(x867-x868));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x870 = INT32_MIN;
	uint64_t x871 = 7LLU;
	int16_t x872 = 663;
	static volatile int32_t t191 = 7;

    t191 = ((x869<=x870)>(x871-x872));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x874 = 1;
	static int32_t t192 = 0;

    t192 = ((x873<=x874)>(x875-x876));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x877 = -55;
	static int8_t x880 = INT8_MIN;

    t193 = ((x877<=x878)>(x879-x880));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x881 = -1;
	static volatile int16_t x882 = 4602;
	int32_t x883 = -299;
	int16_t x884 = INT16_MIN;
	int32_t t194 = 622874;

    t194 = ((x881<=x882)>(x883-x884));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x885 = 12295U;
	uint16_t x886 = 24U;
	uint64_t x887 = UINT64_MAX;
	int64_t x888 = -1LL;
	volatile int32_t t195 = -1;

    t195 = ((x885<=x886)>(x887-x888));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x889 = 2568078U;
	uint8_t x890 = 12U;
	int64_t x891 = INT64_MIN;
	static int8_t x892 = -25;

    t196 = ((x889<=x890)>(x891-x892));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x893 = 0;
	int64_t x894 = INT64_MIN;
	uint32_t x895 = 5856758U;
	uint32_t x896 = 535U;
	int32_t t197 = 7255;

    t197 = ((x893<=x894)>(x895-x896));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint16_t x897 = 238U;
	int8_t x898 = 3;
	static int32_t x899 = INT32_MAX;
	int64_t x900 = INT64_MAX;
	volatile int32_t t198 = -65748;

    t198 = ((x897<=x898)>(x899-x900));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x903 = INT32_MIN;
	int8_t x904 = INT8_MIN;

    t199 = ((x901<=x902)>(x903-x904));

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


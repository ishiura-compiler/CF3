
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

int16_t x5 = 298;
uint32_t x12 = 3U;
int16_t x19 = -1;
int32_t t2 = 0;
static uint8_t x22 = 5U;
uint16_t x27 = 52U;
static volatile int64_t x37 = -1LL;
volatile uint16_t x40 = UINT16_MAX;
uint64_t x44 = UINT64_MAX;
uint8_t x57 = UINT8_MAX;
int32_t x60 = INT32_MAX;
volatile int32_t t11 = 583686;
int16_t x68 = INT16_MIN;
uint64_t x69 = 3071629152588119207LLU;
static int64_t x85 = INT64_MIN;
volatile int16_t x93 = INT16_MAX;
volatile int8_t x106 = INT8_MIN;
static volatile int32_t t22 = 30671314;
volatile int16_t x123 = -346;
static volatile int32_t t25 = -589551354;
uint32_t x132 = UINT32_MAX;
int8_t x137 = INT8_MAX;
static volatile int64_t x142 = 3LL;
volatile int32_t t30 = -80869;
int32_t x149 = -1;
int16_t x151 = -1;
static uint32_t x156 = 296911693U;
volatile int32_t t33 = -1463700;
uint8_t x165 = UINT8_MAX;
int8_t x177 = 3;
uint16_t x180 = 2410U;
volatile int32_t x183 = INT32_MAX;
static uint64_t x184 = 197085LLU;
volatile int32_t x185 = -2713369;
static uint64_t x189 = 13759LLU;
volatile int32_t t39 = 112457;
int32_t x193 = INT32_MIN;
int16_t x203 = INT16_MIN;
int32_t t42 = 122;
int16_t x208 = -1;
int8_t x214 = INT8_MIN;
int32_t t44 = -44;
int64_t x225 = -1055125508LL;
int64_t x226 = 973568595732319LL;
int8_t x227 = -1;
static volatile int16_t x229 = 291;
int8_t x242 = INT8_MAX;
int16_t x253 = 1;
volatile int32_t x258 = INT32_MIN;
uint32_t x263 = UINT32_MAX;
static volatile uint32_t x274 = 50038032U;
uint64_t x276 = UINT64_MAX;
int64_t x282 = -24471536592LL;
static int16_t x285 = INT16_MAX;
static volatile int8_t x287 = INT8_MIN;
int32_t t61 = -2;
static volatile int32_t t62 = 1906;
volatile int64_t x302 = INT64_MIN;
static int32_t t63 = -590;
int8_t x310 = INT8_MIN;
static uint64_t x315 = UINT64_MAX;
uint32_t x317 = 34371U;
volatile uint64_t x319 = UINT64_MAX;
static volatile int32_t t68 = -5129;
uint8_t x326 = UINT8_MAX;
int32_t t69 = 21819;
int32_t x342 = INT32_MIN;
static volatile uint64_t x352 = UINT64_MAX;
int32_t t76 = 1;
uint8_t x357 = 68U;
volatile uint32_t x360 = 99U;
volatile int32_t t77 = -140581;
int16_t x372 = INT16_MIN;
int32_t t80 = -218;
uint32_t x376 = 1025310U;
volatile int64_t x388 = INT64_MIN;
static volatile int32_t t82 = -987795115;
volatile int16_t x389 = INT16_MAX;
int16_t x393 = 1;
static int64_t x394 = INT64_MAX;
uint32_t x405 = 26U;
int32_t x413 = 1125475;
static int32_t t89 = 7;
static int64_t x426 = 479227LL;
int16_t x432 = -1;
volatile uint32_t x434 = 0U;
int32_t t93 = -33670031;
static int32_t x456 = INT32_MIN;
int32_t x465 = 68015;
uint8_t x466 = UINT8_MAX;
static volatile int16_t x467 = 4132;
uint16_t x468 = 1920U;
volatile int8_t x473 = INT8_MIN;
uint32_t x474 = 757970979U;
static uint32_t x478 = 1U;
int32_t t103 = 1;
int8_t x492 = 0;
uint32_t x495 = 15054111U;
int16_t x496 = INT16_MIN;
volatile int32_t t106 = 5;
int64_t x501 = -1LL;
int32_t x507 = INT32_MAX;
int64_t x511 = -147834830880656LL;
volatile int8_t x516 = -1;
int16_t x517 = -10958;
int16_t x525 = -1;
int32_t x526 = INT32_MAX;
int8_t x537 = 2;
static volatile uint16_t x546 = 253U;
static int32_t t117 = -109410636;
static int32_t t118 = 481;
volatile int64_t x553 = INT64_MAX;
int16_t x567 = -1;
int16_t x570 = INT16_MIN;
volatile int16_t x584 = INT16_MIN;
int16_t x588 = INT16_MIN;
volatile int32_t t127 = 284525;
int8_t x589 = -1;
int8_t x597 = INT8_MIN;
volatile int16_t x608 = INT16_MIN;
uint16_t x609 = 8218U;
uint8_t x614 = 1U;
int32_t x616 = -1;
uint8_t x617 = 3U;
static volatile int32_t t136 = 621;
int32_t t137 = -81;
static int16_t x632 = INT16_MIN;
int8_t x637 = 3;
uint8_t x639 = 26U;
volatile int64_t x642 = 250129942729LL;
static int64_t x646 = 62848197LL;
int32_t x657 = -1;
static int32_t t145 = 0;
volatile int16_t x665 = INT16_MIN;
int32_t t148 = 53080;
static int8_t x688 = INT8_MAX;
volatile uint32_t x693 = UINT32_MAX;
int32_t x695 = INT32_MIN;
int32_t t153 = -177;
int16_t x698 = INT16_MIN;
volatile uint8_t x700 = 2U;
int8_t x701 = -8;
int16_t x704 = -1;
static int16_t x707 = INT16_MIN;
volatile int32_t t156 = -4;
int32_t x717 = INT32_MAX;
volatile int32_t t159 = -20;
uint64_t x721 = UINT64_MAX;
int32_t t160 = -3577814;
int64_t x734 = 13958233002490145LL;
int64_t x737 = -1LL;
static int8_t x746 = INT8_MAX;
int32_t t165 = 28;
volatile int32_t t166 = 392;
static int32_t t167 = -27387761;
uint8_t x769 = 7U;
int16_t x773 = -1;
int16_t x781 = 13236;
uint8_t x783 = 1U;
volatile int32_t t170 = 13;
int8_t x796 = INT8_MIN;
static int16_t x809 = -1;
volatile int32_t t177 = -1082009;
static int32_t x814 = -236254172;
int8_t x815 = INT8_MIN;
static int16_t x817 = -1;
uint8_t x820 = 7U;
static uint32_t x823 = 776180252U;
int8_t x828 = 1;
uint8_t x830 = 3U;
int32_t t182 = -22559;
int16_t x842 = -3;
int64_t x845 = INT64_MIN;
static int32_t t187 = 50573;
int32_t t188 = 815040369;
static int32_t x860 = INT32_MIN;
uint16_t x866 = 22158U;
uint32_t x871 = 1728U;
volatile uint32_t x875 = UINT32_MAX;
static volatile int32_t x876 = INT32_MIN;
int32_t x887 = INT32_MIN;
uint32_t x894 = UINT32_MAX;
int64_t x896 = -1LL;
int16_t x897 = -179;
uint8_t x903 = UINT8_MAX;
int32_t t199 = 188;


void f0(void) {
    	int16_t x6 = INT16_MAX;
	volatile int16_t x7 = -1;
	volatile uint64_t x8 = 225336321908184201LLU;
	int32_t t0 = 41894;

    t0 = (((x5-x6)<=x7)==x8);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x9 = 235U;
	int16_t x10 = INT16_MIN;
	volatile int16_t x11 = INT16_MAX;
	volatile int32_t t1 = 0;

    t1 = (((x9-x10)<=x11)==x12);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x17 = 3318344U;
	int8_t x18 = -1;
	int32_t x20 = -121974;

    t2 = (((x17-x18)<=x19)==x20);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x21 = INT8_MAX;
	int32_t x23 = INT32_MAX;
	volatile int8_t x24 = INT8_MAX;
	int32_t t3 = -2836350;

    t3 = (((x21-x22)<=x23)==x24);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x25 = INT8_MIN;
	int32_t x26 = 133654;
	volatile int64_t x28 = INT64_MAX;
	static int32_t t4 = -725;

    t4 = (((x25-x26)<=x27)==x28);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x29 = INT32_MAX;
	uint8_t x30 = 10U;
	int32_t x31 = INT32_MIN;
	static uint64_t x32 = 183681627LLU;
	int32_t t5 = -1024545296;

    t5 = (((x29-x30)<=x31)==x32);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x38 = UINT8_MAX;
	static int32_t x39 = INT32_MAX;
	volatile int32_t t6 = 2273882;

    t6 = (((x37-x38)<=x39)==x40);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x41 = INT16_MIN;
	int64_t x42 = -1LL;
	static int64_t x43 = INT64_MIN;
	int32_t t7 = 121364455;

    t7 = (((x41-x42)<=x43)==x44);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x45 = 22LL;
	static int64_t x46 = 16095850LL;
	static uint16_t x47 = 677U;
	static uint16_t x48 = UINT16_MAX;
	volatile int32_t t8 = 15;

    t8 = (((x45-x46)<=x47)==x48);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x49 = -2697;
	int64_t x50 = INT64_MIN;
	static int16_t x51 = -1844;
	uint8_t x52 = UINT8_MAX;
	int32_t t9 = -163956798;

    t9 = (((x49-x50)<=x51)==x52);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x53 = -1;
	int8_t x54 = -1;
	int16_t x55 = 14;
	uint64_t x56 = UINT64_MAX;
	int32_t t10 = 106925110;

    t10 = (((x53-x54)<=x55)==x56);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x58 = 90U;
	static volatile uint16_t x59 = 0U;

    t11 = (((x57-x58)<=x59)==x60);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x61 = 1068378693U;
	static int64_t x62 = -1LL;
	int64_t x63 = INT64_MIN;
	int64_t x64 = INT64_MIN;
	static volatile int32_t t12 = 13;

    t12 = (((x61-x62)<=x63)==x64);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x65 = 344331223592894217LLU;
	volatile int16_t x66 = 0;
	int32_t x67 = 7628;
	int32_t t13 = 0;

    t13 = (((x65-x66)<=x67)==x68);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x70 = -1;
	volatile uint32_t x71 = 7U;
	int64_t x72 = INT64_MIN;
	volatile int32_t t14 = -5424038;

    t14 = (((x69-x70)<=x71)==x72);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x73 = UINT32_MAX;
	static volatile int16_t x74 = INT16_MIN;
	uint8_t x75 = 14U;
	int8_t x76 = INT8_MIN;
	int32_t t15 = 14500139;

    t15 = (((x73-x74)<=x75)==x76);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x77 = -27;
	uint32_t x78 = 48673U;
	volatile int16_t x79 = INT16_MAX;
	static int32_t x80 = 887;
	static volatile int32_t t16 = 7898;

    t16 = (((x77-x78)<=x79)==x80);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x86 = INT16_MIN;
	static int64_t x87 = -1LL;
	volatile uint64_t x88 = UINT64_MAX;
	int32_t t17 = 288;

    t17 = (((x85-x86)<=x87)==x88);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x89 = 219U;
	static int64_t x90 = -331529LL;
	int16_t x91 = 759;
	uint64_t x92 = 122674400010179545LLU;
	int32_t t18 = 305;

    t18 = (((x89-x90)<=x91)==x92);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x94 = -1;
	int16_t x95 = 14824;
	int8_t x96 = -1;
	int32_t t19 = 37812914;

    t19 = (((x93-x94)<=x95)==x96);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x97 = INT8_MIN;
	volatile int32_t x98 = INT32_MIN;
	int64_t x99 = 10858136549028805LL;
	uint32_t x100 = UINT32_MAX;
	int32_t t20 = 2106;

    t20 = (((x97-x98)<=x99)==x100);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x105 = INT32_MIN;
	volatile int64_t x107 = INT64_MIN;
	uint32_t x108 = 319922U;
	int32_t t21 = -11527191;

    t21 = (((x105-x106)<=x107)==x108);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t x109 = INT64_MIN;
	int64_t x110 = INT64_MIN;
	int64_t x111 = -1LL;
	int64_t x112 = INT64_MAX;

    t22 = (((x109-x110)<=x111)==x112);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint64_t x113 = 254122201899566LLU;
	volatile int8_t x114 = INT8_MAX;
	int32_t x115 = INT32_MIN;
	volatile int8_t x116 = -57;
	volatile int32_t t23 = 26232;

    t23 = (((x113-x114)<=x115)==x116);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x117 = -3;
	int8_t x118 = 8;
	uint16_t x119 = 1U;
	static uint64_t x120 = 3609569315439321348LLU;
	int32_t t24 = 50;

    t24 = (((x117-x118)<=x119)==x120);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x121 = -19;
	volatile uint8_t x122 = 5U;
	uint16_t x124 = 675U;

    t25 = (((x121-x122)<=x123)==x124);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x125 = 52578992160651LLU;
	static int8_t x126 = 26;
	volatile uint32_t x127 = 259936240U;
	int8_t x128 = INT8_MIN;
	volatile int32_t t26 = 967545333;

    t26 = (((x125-x126)<=x127)==x128);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x129 = INT8_MAX;
	static volatile int16_t x130 = INT16_MIN;
	uint32_t x131 = UINT32_MAX;
	volatile int32_t t27 = -257311;

    t27 = (((x129-x130)<=x131)==x132);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int32_t x133 = INT32_MIN;
	volatile int32_t x134 = -1;
	int16_t x135 = INT16_MIN;
	static volatile int64_t x136 = -346721661149616LL;
	int32_t t28 = 6807;

    t28 = (((x133-x134)<=x135)==x136);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x138 = UINT16_MAX;
	static volatile uint32_t x139 = 33U;
	volatile uint64_t x140 = UINT64_MAX;
	int32_t t29 = -22038639;

    t29 = (((x137-x138)<=x139)==x140);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x141 = INT8_MAX;
	static volatile uint16_t x143 = 16105U;
	volatile int8_t x144 = -1;

    t30 = (((x141-x142)<=x143)==x144);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x150 = INT8_MAX;
	volatile int32_t x152 = INT32_MAX;
	static volatile int32_t t31 = -504859;

    t31 = (((x149-x150)<=x151)==x152);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x153 = 271U;
	int16_t x154 = 2949;
	int64_t x155 = -1LL;
	volatile int32_t t32 = -588;

    t32 = (((x153-x154)<=x155)==x156);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x161 = INT8_MAX;
	static volatile uint8_t x162 = UINT8_MAX;
	int8_t x163 = INT8_MIN;
	int8_t x164 = 1;

    t33 = (((x161-x162)<=x163)==x164);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x166 = 18U;
	int64_t x167 = -1547LL;
	static int8_t x168 = -1;
	volatile int32_t t34 = -23;

    t34 = (((x165-x166)<=x167)==x168);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x173 = -1;
	int64_t x174 = INT64_MIN;
	int32_t x175 = -1;
	uint8_t x176 = 9U;
	volatile int32_t t35 = 1668625;

    t35 = (((x173-x174)<=x175)==x176);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x178 = -7865;
	uint16_t x179 = 15734U;
	int32_t t36 = 28967;

    t36 = (((x177-x178)<=x179)==x180);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint64_t x181 = UINT64_MAX;
	int8_t x182 = INT8_MIN;
	int32_t t37 = 1;

    t37 = (((x181-x182)<=x183)==x184);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x186 = INT64_MIN;
	uint32_t x187 = UINT32_MAX;
	int64_t x188 = INT64_MIN;
	int32_t t38 = 4;

    t38 = (((x185-x186)<=x187)==x188);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x190 = INT32_MAX;
	uint32_t x191 = 8325U;
	static uint8_t x192 = 1U;

    t39 = (((x189-x190)<=x191)==x192);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x194 = 2U;
	int32_t x195 = INT32_MIN;
	uint16_t x196 = 248U;
	volatile int32_t t40 = -5212487;

    t40 = (((x193-x194)<=x195)==x196);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x197 = UINT32_MAX;
	uint16_t x198 = 587U;
	static uint64_t x199 = 48LLU;
	uint8_t x200 = UINT8_MAX;
	volatile int32_t t41 = 10;

    t41 = (((x197-x198)<=x199)==x200);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x201 = UINT8_MAX;
	static uint32_t x202 = UINT32_MAX;
	int16_t x204 = INT16_MAX;

    t42 = (((x201-x202)<=x203)==x204);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x205 = 4539;
	uint8_t x206 = 35U;
	int8_t x207 = INT8_MIN;
	static int32_t t43 = -154746;

    t43 = (((x205-x206)<=x207)==x208);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x213 = -1LL;
	int64_t x215 = 323LL;
	static uint8_t x216 = 7U;

    t44 = (((x213-x214)<=x215)==x216);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint16_t x217 = 7U;
	static int16_t x218 = -1;
	uint64_t x219 = 97212501654LLU;
	static int16_t x220 = INT16_MAX;
	volatile int32_t t45 = 5;

    t45 = (((x217-x218)<=x219)==x220);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x228 = INT32_MIN;
	volatile int32_t t46 = -1215;

    t46 = (((x225-x226)<=x227)==x228);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint64_t x230 = UINT64_MAX;
	int8_t x231 = -1;
	int64_t x232 = INT64_MAX;
	volatile int32_t t47 = 2;

    t47 = (((x229-x230)<=x231)==x232);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint8_t x237 = UINT8_MAX;
	int64_t x238 = -1LL;
	int64_t x239 = INT64_MAX;
	volatile int64_t x240 = 38581981305LL;
	int32_t t48 = -3895883;

    t48 = (((x237-x238)<=x239)==x240);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint16_t x241 = 5U;
	volatile uint8_t x243 = 2U;
	volatile uint32_t x244 = UINT32_MAX;
	volatile int32_t t49 = -2317;

    t49 = (((x241-x242)<=x243)==x244);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint32_t x245 = 323218U;
	int32_t x246 = 141543869;
	static int8_t x247 = INT8_MIN;
	int32_t x248 = INT32_MIN;
	int32_t t50 = 1;

    t50 = (((x245-x246)<=x247)==x248);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint16_t x249 = 10852U;
	volatile int16_t x250 = -1;
	int32_t x251 = -1;
	int8_t x252 = -30;
	volatile int32_t t51 = 10;

    t51 = (((x249-x250)<=x251)==x252);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x254 = INT8_MIN;
	static int16_t x255 = -7;
	volatile int16_t x256 = 4448;
	static volatile int32_t t52 = 30;

    t52 = (((x253-x254)<=x255)==x256);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x257 = 82U;
	int8_t x259 = INT8_MIN;
	uint32_t x260 = 55728U;
	volatile int32_t t53 = 727331;

    t53 = (((x257-x258)<=x259)==x260);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x261 = INT16_MIN;
	uint8_t x262 = 2U;
	int8_t x264 = INT8_MAX;
	volatile int32_t t54 = 2653;

    t54 = (((x261-x262)<=x263)==x264);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x265 = 0LL;
	volatile uint64_t x266 = UINT64_MAX;
	int8_t x267 = -1;
	int8_t x268 = INT8_MAX;
	int32_t t55 = 0;

    t55 = (((x265-x266)<=x267)==x268);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x269 = INT8_MAX;
	static int64_t x270 = 1772368829035LL;
	volatile int64_t x271 = 2370521152939LL;
	volatile int16_t x272 = INT16_MIN;
	volatile int32_t t56 = 27605231;

    t56 = (((x269-x270)<=x271)==x272);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x273 = 4U;
	static volatile int8_t x275 = -8;
	volatile int32_t t57 = -168;

    t57 = (((x273-x274)<=x275)==x276);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x281 = -1;
	int16_t x283 = -1;
	int8_t x284 = -1;
	static int32_t t58 = -1168957;

    t58 = (((x281-x282)<=x283)==x284);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x286 = -1;
	uint8_t x288 = 3U;
	static int32_t t59 = 77227;

    t59 = (((x285-x286)<=x287)==x288);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x289 = INT32_MIN;
	volatile uint64_t x290 = UINT64_MAX;
	static int32_t x291 = INT32_MIN;
	static uint64_t x292 = UINT64_MAX;
	volatile int32_t t60 = 337730;

    t60 = (((x289-x290)<=x291)==x292);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x293 = INT64_MIN;
	volatile int64_t x294 = INT64_MIN;
	volatile int32_t x295 = 63386;
	uint8_t x296 = UINT8_MAX;

    t61 = (((x293-x294)<=x295)==x296);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x297 = -1;
	uint8_t x298 = 18U;
	static uint32_t x299 = 2470826U;
	int8_t x300 = INT8_MIN;

    t62 = (((x297-x298)<=x299)==x300);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x301 = INT16_MIN;
	uint32_t x303 = 1809396U;
	int64_t x304 = INT64_MAX;

    t63 = (((x301-x302)<=x303)==x304);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x305 = INT64_MIN;
	int64_t x306 = -223060926LL;
	static uint16_t x307 = 1815U;
	int64_t x308 = -1LL;
	int32_t t64 = -123168537;

    t64 = (((x305-x306)<=x307)==x308);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x309 = INT64_MIN;
	static int64_t x311 = INT64_MIN;
	int64_t x312 = 1772592612037409LL;
	volatile int32_t t65 = -253368427;

    t65 = (((x309-x310)<=x311)==x312);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x313 = 23U;
	volatile int64_t x314 = -2262LL;
	static int8_t x316 = INT8_MIN;
	int32_t t66 = 854;

    t66 = (((x313-x314)<=x315)==x316);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x318 = -1;
	uint16_t x320 = 0U;
	volatile int32_t t67 = 3459;

    t67 = (((x317-x318)<=x319)==x320);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x321 = -305508656419LL;
	uint64_t x322 = 899944696808828LLU;
	int64_t x323 = INT64_MAX;
	static int32_t x324 = INT32_MIN;

    t68 = (((x321-x322)<=x323)==x324);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x325 = UINT32_MAX;
	int64_t x327 = INT64_MIN;
	int64_t x328 = INT64_MIN;

    t69 = (((x325-x326)<=x327)==x328);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x329 = INT8_MIN;
	int32_t x330 = -18854;
	int16_t x331 = INT16_MIN;
	uint8_t x332 = UINT8_MAX;
	static volatile int32_t t70 = 960;

    t70 = (((x329-x330)<=x331)==x332);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x333 = 1U;
	volatile uint32_t x334 = 1424125U;
	int16_t x335 = -3;
	volatile uint64_t x336 = UINT64_MAX;
	volatile int32_t t71 = 6305607;

    t71 = (((x333-x334)<=x335)==x336);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x337 = 269275852LLU;
	static uint8_t x338 = 25U;
	volatile int8_t x339 = INT8_MAX;
	int64_t x340 = 750157803LL;
	int32_t t72 = 125;

    t72 = (((x337-x338)<=x339)==x340);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x341 = 1013144815332LLU;
	uint16_t x343 = 1800U;
	uint8_t x344 = UINT8_MAX;
	int32_t t73 = -537451563;

    t73 = (((x341-x342)<=x343)==x344);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x345 = INT32_MIN;
	int16_t x346 = -1;
	uint16_t x347 = 28U;
	int8_t x348 = INT8_MIN;
	volatile int32_t t74 = 0;

    t74 = (((x345-x346)<=x347)==x348);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x349 = UINT8_MAX;
	static int8_t x350 = -1;
	int8_t x351 = INT8_MAX;
	volatile int32_t t75 = -112726232;

    t75 = (((x349-x350)<=x351)==x352);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x353 = 1LL;
	volatile uint16_t x354 = UINT16_MAX;
	int16_t x355 = -185;
	uint32_t x356 = UINT32_MAX;

    t76 = (((x353-x354)<=x355)==x356);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x358 = INT8_MAX;
	int32_t x359 = -1;

    t77 = (((x357-x358)<=x359)==x360);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x361 = -1;
	uint32_t x362 = 16528382U;
	int64_t x363 = -1LL;
	static uint8_t x364 = 41U;
	static volatile int32_t t78 = 7458;

    t78 = (((x361-x362)<=x363)==x364);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x365 = UINT16_MAX;
	int8_t x366 = 0;
	static int64_t x367 = 6LL;
	int64_t x368 = -68LL;
	int32_t t79 = 280159992;

    t79 = (((x365-x366)<=x367)==x368);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x369 = 123U;
	int64_t x370 = -1LL;
	uint32_t x371 = 6967468U;

    t80 = (((x369-x370)<=x371)==x372);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x373 = INT16_MIN;
	volatile int16_t x374 = INT16_MIN;
	volatile int8_t x375 = -5;
	int32_t t81 = -7855521;

    t81 = (((x373-x374)<=x375)==x376);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x385 = 120U;
	int8_t x386 = INT8_MIN;
	int32_t x387 = 406736223;

    t82 = (((x385-x386)<=x387)==x388);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x390 = INT8_MAX;
	volatile uint16_t x391 = 1U;
	volatile uint64_t x392 = UINT64_MAX;
	int32_t t83 = 14;

    t83 = (((x389-x390)<=x391)==x392);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x395 = INT32_MAX;
	int32_t x396 = INT32_MIN;
	volatile int32_t t84 = -1216;

    t84 = (((x393-x394)<=x395)==x396);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x397 = -1;
	uint32_t x398 = 708473574U;
	int8_t x399 = INT8_MIN;
	int8_t x400 = -1;
	volatile int32_t t85 = -140;

    t85 = (((x397-x398)<=x399)==x400);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x401 = UINT32_MAX;
	uint32_t x402 = 3764U;
	static int16_t x403 = INT16_MIN;
	volatile uint64_t x404 = 5897734906334LLU;
	int32_t t86 = -10;

    t86 = (((x401-x402)<=x403)==x404);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int8_t x406 = -4;
	int64_t x407 = 11LL;
	static int8_t x408 = INT8_MAX;
	volatile int32_t t87 = 427;

    t87 = (((x405-x406)<=x407)==x408);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x409 = INT32_MAX;
	uint64_t x410 = 35234LLU;
	int32_t x411 = -1;
	static volatile int8_t x412 = INT8_MIN;
	volatile int32_t t88 = -8;

    t88 = (((x409-x410)<=x411)==x412);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x414 = INT64_MAX;
	uint64_t x415 = 1831874077751536540LLU;
	static uint64_t x416 = UINT64_MAX;

    t89 = (((x413-x414)<=x415)==x416);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint8_t x421 = UINT8_MAX;
	uint16_t x422 = UINT16_MAX;
	int16_t x423 = -1;
	int8_t x424 = 4;
	volatile int32_t t90 = -1990065;

    t90 = (((x421-x422)<=x423)==x424);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x425 = -1;
	int16_t x427 = INT16_MIN;
	static uint8_t x428 = 14U;
	volatile int32_t t91 = 55553;

    t91 = (((x425-x426)<=x427)==x428);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint16_t x429 = 13U;
	int8_t x430 = INT8_MAX;
	uint32_t x431 = 12038175U;
	volatile int32_t t92 = 7;

    t92 = (((x429-x430)<=x431)==x432);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x433 = INT32_MIN;
	int32_t x435 = INT32_MIN;
	uint32_t x436 = 592U;

    t93 = (((x433-x434)<=x435)==x436);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x437 = INT64_MIN;
	static int32_t x438 = -115134;
	uint64_t x439 = 0LLU;
	int16_t x440 = INT16_MIN;
	int32_t t94 = -52;

    t94 = (((x437-x438)<=x439)==x440);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int64_t x441 = INT64_MAX;
	static uint64_t x442 = 1046306129557LLU;
	int64_t x443 = -9429502LL;
	int64_t x444 = INT64_MIN;
	static volatile int32_t t95 = 1284;

    t95 = (((x441-x442)<=x443)==x444);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x445 = UINT16_MAX;
	int16_t x446 = INT16_MAX;
	int8_t x447 = 15;
	volatile int32_t x448 = INT32_MIN;
	volatile int32_t t96 = 2;

    t96 = (((x445-x446)<=x447)==x448);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x453 = INT16_MAX;
	static volatile int32_t x454 = -1;
	int32_t x455 = -1;
	int32_t t97 = -290456;

    t97 = (((x453-x454)<=x455)==x456);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x457 = INT16_MAX;
	static int32_t x458 = -465446;
	int32_t x459 = 10667;
	int32_t x460 = -644284941;
	volatile int32_t t98 = 11293;

    t98 = (((x457-x458)<=x459)==x460);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t t99 = 2;

    t99 = (((x465-x466)<=x467)==x468);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x469 = 12U;
	volatile int64_t x470 = -5773333547LL;
	volatile uint32_t x471 = UINT32_MAX;
	volatile int64_t x472 = 543808LL;
	int32_t t100 = -1319;

    t100 = (((x469-x470)<=x471)==x472);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x475 = INT8_MAX;
	int64_t x476 = -1LL;
	static volatile int32_t t101 = -8;

    t101 = (((x473-x474)<=x475)==x476);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x477 = -1LL;
	static int64_t x479 = -4392004360626LL;
	static volatile int16_t x480 = -1;
	static volatile int32_t t102 = -31;

    t102 = (((x477-x478)<=x479)==x480);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x481 = INT16_MIN;
	uint16_t x482 = 14U;
	int32_t x483 = -1703373;
	uint16_t x484 = 3931U;

    t103 = (((x481-x482)<=x483)==x484);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x485 = -1;
	static int16_t x486 = INT16_MAX;
	uint16_t x487 = 12U;
	static uint16_t x488 = UINT16_MAX;
	int32_t t104 = -354492387;

    t104 = (((x485-x486)<=x487)==x488);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint64_t x489 = UINT64_MAX;
	uint32_t x490 = UINT32_MAX;
	uint16_t x491 = 3722U;
	volatile int32_t t105 = 9;

    t105 = (((x489-x490)<=x491)==x492);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x493 = INT8_MIN;
	int32_t x494 = -10158305;

    t106 = (((x493-x494)<=x495)==x496);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x497 = INT16_MIN;
	static uint8_t x498 = 12U;
	int8_t x499 = 0;
	int64_t x500 = -1LL;
	int32_t t107 = -5;

    t107 = (((x497-x498)<=x499)==x500);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x502 = -1;
	int32_t x503 = INT32_MAX;
	static int8_t x504 = -1;
	int32_t t108 = 131398059;

    t108 = (((x501-x502)<=x503)==x504);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x505 = -4;
	int32_t x506 = INT32_MIN;
	int16_t x508 = -25;
	int32_t t109 = -431;

    t109 = (((x505-x506)<=x507)==x508);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x509 = INT8_MIN;
	int16_t x510 = INT16_MIN;
	uint32_t x512 = 128168708U;
	volatile int32_t t110 = -5833;

    t110 = (((x509-x510)<=x511)==x512);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x513 = -1LL;
	static uint32_t x514 = 7307U;
	int64_t x515 = 8652279085771392LL;
	int32_t t111 = 22852162;

    t111 = (((x513-x514)<=x515)==x516);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x518 = INT8_MAX;
	volatile uint8_t x519 = 7U;
	static int8_t x520 = -1;
	int32_t t112 = 3174237;

    t112 = (((x517-x518)<=x519)==x520);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x521 = INT16_MIN;
	static volatile int16_t x522 = INT16_MIN;
	uint32_t x523 = 1U;
	int8_t x524 = -1;
	static volatile int32_t t113 = -4847;

    t113 = (((x521-x522)<=x523)==x524);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x527 = INT8_MAX;
	static int16_t x528 = INT16_MAX;
	int32_t t114 = -37725044;

    t114 = (((x525-x526)<=x527)==x528);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x538 = 921295051217LLU;
	int8_t x539 = INT8_MIN;
	uint32_t x540 = 26U;
	volatile int32_t t115 = -3571;

    t115 = (((x537-x538)<=x539)==x540);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x541 = -1;
	int64_t x542 = INT64_MAX;
	static int8_t x543 = INT8_MAX;
	int64_t x544 = INT64_MIN;
	volatile int32_t t116 = 481056;

    t116 = (((x541-x542)<=x543)==x544);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x545 = 6043LL;
	volatile int32_t x547 = INT32_MAX;
	int8_t x548 = -1;

    t117 = (((x545-x546)<=x547)==x548);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x549 = -467213081LL;
	int16_t x550 = INT16_MAX;
	static int64_t x551 = INT64_MIN;
	static uint32_t x552 = 4278103U;

    t118 = (((x549-x550)<=x551)==x552);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x554 = 15U;
	int16_t x555 = 142;
	static uint32_t x556 = 1339122338U;
	volatile int32_t t119 = -18;

    t119 = (((x553-x554)<=x555)==x556);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x557 = 1617492351773474LLU;
	uint8_t x558 = 0U;
	static uint16_t x559 = 10U;
	uint64_t x560 = UINT64_MAX;
	int32_t t120 = 331;

    t120 = (((x557-x558)<=x559)==x560);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x561 = 3U;
	volatile uint32_t x562 = 383U;
	int64_t x563 = 8993585122LL;
	int64_t x564 = INT64_MIN;
	int32_t t121 = 518405197;

    t121 = (((x561-x562)<=x563)==x564);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x565 = 0U;
	volatile int8_t x566 = INT8_MIN;
	int8_t x568 = 0;
	volatile int32_t t122 = -2701;

    t122 = (((x565-x566)<=x567)==x568);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x569 = -1;
	int64_t x571 = 92913321LL;
	int64_t x572 = 94971LL;
	int32_t t123 = -345454589;

    t123 = (((x569-x570)<=x571)==x572);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int16_t x573 = INT16_MIN;
	uint64_t x574 = 15LLU;
	volatile int16_t x575 = INT16_MIN;
	int32_t x576 = INT32_MIN;
	volatile int32_t t124 = 1;

    t124 = (((x573-x574)<=x575)==x576);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x577 = INT32_MIN;
	int64_t x578 = -1LL;
	int64_t x579 = INT64_MIN;
	static volatile int8_t x580 = INT8_MIN;
	volatile int32_t t125 = 1683;

    t125 = (((x577-x578)<=x579)==x580);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x581 = 6073U;
	uint8_t x582 = 55U;
	int32_t x583 = -6231009;
	int32_t t126 = 29140;

    t126 = (((x581-x582)<=x583)==x584);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x585 = INT16_MAX;
	int32_t x586 = -1;
	int32_t x587 = -37095602;

    t127 = (((x585-x586)<=x587)==x588);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x590 = -1;
	volatile int32_t x591 = 2;
	int32_t x592 = 57;
	volatile int32_t t128 = 90237;

    t128 = (((x589-x590)<=x591)==x592);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x593 = -1;
	int32_t x594 = INT32_MAX;
	static int32_t x595 = 11722;
	int64_t x596 = INT64_MAX;
	volatile int32_t t129 = -14;

    t129 = (((x593-x594)<=x595)==x596);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x598 = INT16_MIN;
	int16_t x599 = -23;
	static int16_t x600 = 0;
	static volatile int32_t t130 = 0;

    t130 = (((x597-x598)<=x599)==x600);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x601 = 87U;
	volatile int16_t x602 = INT16_MIN;
	uint32_t x603 = 8U;
	int64_t x604 = INT64_MAX;
	volatile int32_t t131 = 10308866;

    t131 = (((x601-x602)<=x603)==x604);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x605 = INT64_MIN;
	volatile int8_t x606 = INT8_MIN;
	int32_t x607 = 588127;
	int32_t t132 = 295958;

    t132 = (((x605-x606)<=x607)==x608);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x610 = 3462LL;
	static uint8_t x611 = UINT8_MAX;
	uint8_t x612 = UINT8_MAX;
	static int32_t t133 = 133238821;

    t133 = (((x609-x610)<=x611)==x612);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint32_t x613 = 5U;
	static volatile int16_t x615 = INT16_MAX;
	static int32_t t134 = -126129;

    t134 = (((x613-x614)<=x615)==x616);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x618 = 7U;
	static int8_t x619 = INT8_MIN;
	uint8_t x620 = 3U;
	volatile int32_t t135 = -68;

    t135 = (((x617-x618)<=x619)==x620);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint8_t x621 = UINT8_MAX;
	static int8_t x622 = INT8_MAX;
	int64_t x623 = -629502LL;
	static int64_t x624 = INT64_MIN;

    t136 = (((x621-x622)<=x623)==x624);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x625 = 12;
	int8_t x626 = -14;
	int8_t x627 = 7;
	uint16_t x628 = 76U;

    t137 = (((x625-x626)<=x627)==x628);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x629 = -100;
	volatile uint32_t x630 = UINT32_MAX;
	static uint16_t x631 = 0U;
	volatile int32_t t138 = 470500634;

    t138 = (((x629-x630)<=x631)==x632);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x638 = 15U;
	uint16_t x640 = UINT16_MAX;
	volatile int32_t t139 = -2612821;

    t139 = (((x637-x638)<=x639)==x640);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint8_t x641 = 1U;
	volatile int8_t x643 = 0;
	int64_t x644 = -3633751583244LL;
	volatile int32_t t140 = -425923912;

    t140 = (((x641-x642)<=x643)==x644);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x645 = -1LL;
	static int64_t x647 = -2LL;
	static uint32_t x648 = 2631U;
	volatile int32_t t141 = -24562811;

    t141 = (((x645-x646)<=x647)==x648);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x649 = 52897;
	int16_t x650 = 55;
	int8_t x651 = INT8_MAX;
	uint16_t x652 = 1199U;
	volatile int32_t t142 = -817477;

    t142 = (((x649-x650)<=x651)==x652);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x653 = 0U;
	uint64_t x654 = 232LLU;
	uint16_t x655 = 1650U;
	static int8_t x656 = INT8_MAX;
	volatile int32_t t143 = -223539;

    t143 = (((x653-x654)<=x655)==x656);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x658 = INT8_MIN;
	int8_t x659 = INT8_MIN;
	int16_t x660 = INT16_MAX;
	static volatile int32_t t144 = 57;

    t144 = (((x657-x658)<=x659)==x660);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x661 = 3U;
	uint8_t x662 = UINT8_MAX;
	volatile int8_t x663 = -3;
	uint16_t x664 = 0U;

    t145 = (((x661-x662)<=x663)==x664);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x666 = 9U;
	uint32_t x667 = 1847U;
	static uint8_t x668 = 21U;
	int32_t t146 = 0;

    t146 = (((x665-x666)<=x667)==x668);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x669 = -1002932;
	int16_t x670 = -1;
	static uint8_t x671 = 20U;
	int8_t x672 = -1;
	static int32_t t147 = 3199427;

    t147 = (((x669-x670)<=x671)==x672);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x673 = -5343;
	uint16_t x674 = UINT16_MAX;
	static int16_t x675 = INT16_MIN;
	int16_t x676 = -1;

    t148 = (((x673-x674)<=x675)==x676);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x677 = 2U;
	static uint8_t x678 = 6U;
	int32_t x679 = -1;
	volatile int16_t x680 = INT16_MAX;
	volatile int32_t t149 = 11;

    t149 = (((x677-x678)<=x679)==x680);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x681 = 8U;
	static volatile int64_t x682 = INT64_MAX;
	volatile int64_t x683 = INT64_MIN;
	int64_t x684 = INT64_MAX;
	int32_t t150 = 0;

    t150 = (((x681-x682)<=x683)==x684);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x685 = -1LL;
	int32_t x686 = INT32_MIN;
	int64_t x687 = 680680359077263172LL;
	int32_t t151 = 76;

    t151 = (((x685-x686)<=x687)==x688);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x689 = 5U;
	static int64_t x690 = INT64_MAX;
	static int32_t x691 = -80186;
	int8_t x692 = INT8_MAX;
	volatile int32_t t152 = 0;

    t152 = (((x689-x690)<=x691)==x692);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x694 = -1;
	int8_t x696 = -1;

    t153 = (((x693-x694)<=x695)==x696);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x697 = UINT64_MAX;
	uint32_t x699 = UINT32_MAX;
	int32_t t154 = 241;

    t154 = (((x697-x698)<=x699)==x700);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x702 = UINT64_MAX;
	int16_t x703 = -1;
	volatile int32_t t155 = -1237;

    t155 = (((x701-x702)<=x703)==x704);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint8_t x705 = 26U;
	int8_t x706 = -5;
	int16_t x708 = 11207;

    t156 = (((x705-x706)<=x707)==x708);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x709 = 27780;
	volatile int16_t x710 = -12939;
	int32_t x711 = -229576600;
	volatile uint8_t x712 = 25U;
	int32_t t157 = 0;

    t157 = (((x709-x710)<=x711)==x712);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x713 = 1U;
	uint64_t x714 = 880924464843798690LLU;
	uint64_t x715 = 147992115629LLU;
	int8_t x716 = INT8_MIN;
	volatile int32_t t158 = 3149;

    t158 = (((x713-x714)<=x715)==x716);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint8_t x718 = 0U;
	volatile int16_t x719 = INT16_MAX;
	static uint16_t x720 = 1U;

    t159 = (((x717-x718)<=x719)==x720);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x722 = -1;
	uint8_t x723 = 1U;
	int16_t x724 = INT16_MIN;

    t160 = (((x721-x722)<=x723)==x724);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x725 = -1LL;
	uint16_t x726 = UINT16_MAX;
	volatile uint8_t x727 = 3U;
	uint32_t x728 = 1440U;
	static volatile int32_t t161 = 29189326;

    t161 = (((x725-x726)<=x727)==x728);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x733 = 2U;
	int32_t x735 = INT32_MIN;
	static int64_t x736 = 652925LL;
	int32_t t162 = 2;

    t162 = (((x733-x734)<=x735)==x736);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x738 = INT64_MAX;
	int16_t x739 = -21;
	int32_t x740 = INT32_MIN;
	int32_t t163 = -58840;

    t163 = (((x737-x738)<=x739)==x740);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x745 = -111;
	static volatile int16_t x747 = -1;
	int16_t x748 = -1;
	volatile int32_t t164 = -31061025;

    t164 = (((x745-x746)<=x747)==x748);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint32_t x749 = 47756913U;
	int8_t x750 = INT8_MIN;
	int8_t x751 = -1;
	int32_t x752 = -41;

    t165 = (((x749-x750)<=x751)==x752);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint8_t x753 = 11U;
	int8_t x754 = -1;
	static uint8_t x755 = 37U;
	int64_t x756 = INT64_MIN;

    t166 = (((x753-x754)<=x755)==x756);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x757 = INT64_MAX;
	int16_t x758 = INT16_MAX;
	int32_t x759 = INT32_MIN;
	uint64_t x760 = 217550LLU;

    t167 = (((x757-x758)<=x759)==x760);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint64_t x770 = 21LLU;
	int8_t x771 = -1;
	volatile int16_t x772 = -3;
	int32_t t168 = -462242798;

    t168 = (((x769-x770)<=x771)==x772);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x774 = -1;
	int32_t x775 = INT32_MIN;
	int32_t x776 = INT32_MAX;
	int32_t t169 = -105080544;

    t169 = (((x773-x774)<=x775)==x776);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x782 = UINT8_MAX;
	uint16_t x784 = 3814U;

    t170 = (((x781-x782)<=x783)==x784);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint32_t x785 = 34U;
	uint32_t x786 = 138663U;
	static int32_t x787 = INT32_MIN;
	int16_t x788 = INT16_MIN;
	volatile int32_t t171 = 148637;

    t171 = (((x785-x786)<=x787)==x788);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x789 = INT64_MAX;
	int8_t x790 = 1;
	int32_t x791 = INT32_MAX;
	int16_t x792 = INT16_MIN;
	volatile int32_t t172 = -1140230;

    t172 = (((x789-x790)<=x791)==x792);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x793 = INT32_MIN;
	uint64_t x794 = UINT64_MAX;
	volatile int8_t x795 = -1;
	int32_t t173 = -1602129;

    t173 = (((x793-x794)<=x795)==x796);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint8_t x797 = UINT8_MAX;
	uint64_t x798 = UINT64_MAX;
	uint64_t x799 = 1414275430316396LLU;
	static uint8_t x800 = 2U;
	static volatile int32_t t174 = -4279496;

    t174 = (((x797-x798)<=x799)==x800);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x801 = UINT64_MAX;
	static volatile int32_t x802 = -2519657;
	uint64_t x803 = 3LLU;
	int64_t x804 = INT64_MIN;
	volatile int32_t t175 = -1616801;

    t175 = (((x801-x802)<=x803)==x804);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int16_t x805 = 1;
	volatile uint32_t x806 = 114472U;
	static volatile int8_t x807 = INT8_MIN;
	uint64_t x808 = 104724LLU;
	static volatile int32_t t176 = -52796;

    t176 = (((x805-x806)<=x807)==x808);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x810 = -1;
	uint64_t x811 = 0LLU;
	int32_t x812 = 6;

    t177 = (((x809-x810)<=x811)==x812);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x813 = 42U;
	volatile int32_t x816 = INT32_MAX;
	int32_t t178 = 1091;

    t178 = (((x813-x814)<=x815)==x816);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x818 = INT32_MIN;
	static int64_t x819 = -135125531617397277LL;
	static volatile int32_t t179 = 66937342;

    t179 = (((x817-x818)<=x819)==x820);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x821 = INT8_MIN;
	uint16_t x822 = 0U;
	int32_t x824 = INT32_MIN;
	volatile int32_t t180 = -355;

    t180 = (((x821-x822)<=x823)==x824);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x825 = INT8_MIN;
	static uint32_t x826 = 0U;
	int64_t x827 = 896585LL;
	int32_t t181 = -311055816;

    t181 = (((x825-x826)<=x827)==x828);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x829 = -13LL;
	volatile uint64_t x831 = 2622368882393573145LLU;
	uint64_t x832 = 7577533LLU;

    t182 = (((x829-x830)<=x831)==x832);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x833 = INT32_MIN;
	uint64_t x834 = UINT64_MAX;
	uint16_t x835 = UINT16_MAX;
	int8_t x836 = -1;
	volatile int32_t t183 = -7719269;

    t183 = (((x833-x834)<=x835)==x836);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint64_t x837 = 592170LLU;
	uint16_t x838 = UINT16_MAX;
	static int8_t x839 = -1;
	static uint64_t x840 = UINT64_MAX;
	volatile int32_t t184 = 146676;

    t184 = (((x837-x838)<=x839)==x840);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x841 = INT16_MIN;
	int16_t x843 = INT16_MIN;
	static uint16_t x844 = 183U;
	volatile int32_t t185 = -15451;

    t185 = (((x841-x842)<=x843)==x844);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x846 = -721LL;
	int32_t x847 = INT32_MIN;
	int8_t x848 = INT8_MIN;
	static volatile int32_t t186 = 1;

    t186 = (((x845-x846)<=x847)==x848);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x849 = 13752U;
	uint16_t x850 = 674U;
	volatile uint8_t x851 = 4U;
	uint8_t x852 = 1U;

    t187 = (((x849-x850)<=x851)==x852);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x853 = 9U;
	int16_t x854 = -312;
	volatile int64_t x855 = INT64_MIN;
	uint64_t x856 = 501LLU;

    t188 = (((x853-x854)<=x855)==x856);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x857 = 1U;
	static volatile uint8_t x858 = 9U;
	int16_t x859 = INT16_MAX;
	volatile int32_t t189 = 7162;

    t189 = (((x857-x858)<=x859)==x860);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x861 = 34U;
	uint16_t x862 = UINT16_MAX;
	static uint8_t x863 = UINT8_MAX;
	int64_t x864 = -1LL;
	int32_t t190 = 15076;

    t190 = (((x861-x862)<=x863)==x864);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x865 = INT8_MIN;
	int32_t x867 = -883;
	int64_t x868 = INT64_MAX;
	volatile int32_t t191 = 50474;

    t191 = (((x865-x866)<=x867)==x868);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint64_t x869 = 100LLU;
	uint32_t x870 = UINT32_MAX;
	uint8_t x872 = UINT8_MAX;
	int32_t t192 = -9347253;

    t192 = (((x869-x870)<=x871)==x872);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x873 = 4518;
	uint64_t x874 = UINT64_MAX;
	int32_t t193 = -451461;

    t193 = (((x873-x874)<=x875)==x876);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x877 = INT16_MIN;
	volatile int32_t x878 = 20198335;
	uint16_t x879 = 148U;
	uint64_t x880 = UINT64_MAX;
	static int32_t t194 = 1949;

    t194 = (((x877-x878)<=x879)==x880);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x881 = 0U;
	volatile uint32_t x882 = 4797U;
	volatile int64_t x883 = -4754253679LL;
	static int16_t x884 = 26;
	volatile int32_t t195 = -47406580;

    t195 = (((x881-x882)<=x883)==x884);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x885 = -1;
	int32_t x886 = INT32_MAX;
	static int32_t x888 = -1;
	static int32_t t196 = -67472;

    t196 = (((x885-x886)<=x887)==x888);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x893 = INT64_MAX;
	int32_t x895 = -54122817;
	int32_t t197 = 762128;

    t197 = (((x893-x894)<=x895)==x896);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x898 = 43392LL;
	volatile int8_t x899 = -6;
	uint32_t x900 = 5618566U;
	int32_t t198 = -34807489;

    t198 = (((x897-x898)<=x899)==x900);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x901 = -1;
	int64_t x902 = 128589546757765906LL;
	int32_t x904 = INT32_MAX;

    t199 = (((x901-x902)<=x903)==x904);

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


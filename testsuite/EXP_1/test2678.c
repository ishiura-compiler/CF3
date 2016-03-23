
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

static uint8_t x4 = 77U;
int8_t x6 = -1;
int32_t t2 = 4895;
int8_t x20 = INT8_MIN;
int32_t t4 = 899915;
static volatile int16_t x26 = INT16_MAX;
static uint64_t x35 = 14653903315070806LLU;
volatile uint16_t x36 = 35U;
uint8_t x40 = UINT8_MAX;
volatile int8_t x50 = -1;
int16_t x53 = 1;
int32_t t13 = -57;
uint64_t x57 = UINT64_MAX;
static int64_t x58 = -28LL;
int8_t x59 = INT8_MAX;
int8_t x60 = -1;
volatile uint8_t x61 = 1U;
int16_t x63 = INT16_MAX;
volatile int16_t x66 = INT16_MIN;
volatile uint64_t t17 = 1773993995438LLU;
int16_t x75 = INT16_MIN;
int32_t x78 = -1296319;
static uint16_t x79 = 20315U;
volatile uint64_t x80 = 1048490924450367623LLU;
uint64_t t19 = 5892757402009LLU;
static int16_t x89 = 468;
int32_t x100 = -1;
static int32_t x106 = -15559189;
volatile int16_t x123 = INT16_MIN;
static uint32_t x125 = 167412U;
static volatile int32_t x145 = -1;
int64_t x146 = -1LL;
int64_t x149 = 95266316230383316LL;
int32_t x154 = -16494878;
uint8_t x164 = 7U;
uint64_t x170 = 16442254442791LLU;
int64_t x176 = -17615414688766254LL;
volatile int64_t x178 = INT64_MIN;
volatile int8_t x179 = -1;
uint64_t x180 = UINT64_MAX;
uint64_t t43 = 8811086564068108411LLU;
volatile int8_t x182 = INT8_MIN;
int32_t t45 = 340102352;
volatile uint64_t x191 = 0LLU;
uint64_t x193 = UINT64_MAX;
int64_t x198 = 5LL;
volatile int32_t x201 = -4124901;
uint8_t x202 = UINT8_MAX;
static uint32_t x204 = 12850134U;
int8_t x207 = INT8_MAX;
uint32_t x211 = 2U;
volatile int16_t x219 = INT16_MIN;
volatile int8_t x223 = -1;
int64_t x224 = 577LL;
int32_t x227 = -89790206;
uint16_t x231 = UINT16_MAX;
uint32_t x234 = UINT32_MAX;
static int64_t t57 = 0LL;
int32_t x237 = INT32_MIN;
int8_t x242 = INT8_MAX;
volatile int32_t t59 = 1;
uint8_t x255 = UINT8_MAX;
uint8_t x273 = 10U;
static int32_t t67 = 189229590;
volatile int32_t x278 = INT32_MIN;
int16_t x279 = INT16_MIN;
volatile uint64_t x288 = UINT64_MAX;
volatile uint64_t t70 = 373525426301556597LLU;
int32_t x290 = -1;
uint32_t x293 = 491409U;
int8_t x299 = -37;
volatile int32_t t73 = -760732;
uint8_t x303 = 1U;
int8_t x305 = -41;
static volatile uint64_t t78 = 14197456206LLU;
int8_t x332 = -1;
int8_t x337 = INT8_MAX;
uint64_t x342 = 710463771927LLU;
int32_t x350 = 209;
int16_t x353 = 3;
static int8_t x354 = -6;
volatile int64_t x355 = -1543727LL;
uint32_t x356 = 1739U;
int8_t x361 = INT8_MIN;
static uint64_t x366 = 6037080848747316250LLU;
uint32_t x369 = 2032867144U;
static int64_t x372 = INT64_MIN;
volatile int64_t t90 = 4064459LL;
int8_t x380 = INT8_MIN;
volatile int32_t x384 = -1;
volatile int32_t x389 = -376560;
int32_t x390 = 38;
volatile uint64_t x392 = 2066699053675885LLU;
static volatile int16_t x393 = -907;
int16_t x400 = -1;
int32_t x402 = INT32_MIN;
volatile int64_t x406 = 17203798538429LL;
volatile int16_t x410 = -1;
volatile int32_t t100 = 388157371;
int32_t t102 = 343;
int16_t x428 = INT16_MIN;
int32_t x431 = -122055573;
volatile int8_t x433 = -1;
int16_t x436 = INT16_MIN;
int8_t x441 = INT8_MIN;
uint8_t x444 = 25U;
volatile int32_t t108 = 6807;
static int64_t x452 = -1LL;
uint64_t x453 = UINT64_MAX;
uint32_t x456 = 2602U;
int64_t x459 = INT64_MIN;
int32_t t112 = -67298;
static int16_t x465 = 413;
static volatile uint8_t x472 = UINT8_MAX;
static int32_t x485 = INT32_MAX;
int32_t x491 = 12;
static int32_t x496 = -1;
int16_t x500 = INT16_MIN;
int32_t t121 = -9147931;
uint32_t x501 = 56317455U;
uint8_t x502 = 2U;
int64_t x505 = 496215758874370008LL;
volatile int64_t x508 = INT64_MIN;
volatile uint16_t x510 = 2086U;
static volatile int32_t t124 = -3929;
uint8_t x515 = 2U;
uint16_t x525 = 1U;
int32_t x528 = -1;
volatile int32_t t128 = 118;
uint64_t x530 = 64733699LLU;
static volatile int64_t x537 = INT64_MIN;
volatile uint32_t x543 = 59149U;
uint32_t x544 = UINT32_MAX;
int8_t x545 = -1;
volatile uint32_t x546 = 249494U;
int8_t x547 = INT8_MIN;
int16_t x549 = INT16_MIN;
volatile uint64_t x555 = UINT64_MAX;
static int32_t x557 = INT32_MIN;
int16_t x558 = -11;
int32_t t136 = 0;
uint64_t x561 = 235011503360198850LLU;
int32_t x564 = INT32_MAX;
volatile int64_t t138 = -635LL;
uint8_t x570 = 13U;
static int32_t t139 = -1013;
uint8_t x575 = 61U;
uint64_t x578 = 605094LLU;
int64_t x579 = INT64_MIN;
static int8_t x589 = -36;
volatile uint16_t x592 = UINT16_MAX;
volatile int32_t t144 = -374272;
int8_t x594 = -1;
static uint64_t x598 = 88LLU;
int16_t x600 = INT16_MIN;
int8_t x602 = -1;
int32_t x605 = -1;
volatile int64_t t148 = 26530009311687839LL;
static uint16_t x610 = 961U;
int64_t x611 = INT64_MAX;
int16_t x615 = INT16_MIN;
uint64_t t150 = 4772039383476LLU;
uint64_t x619 = UINT64_MAX;
volatile int32_t t151 = -36571205;
static volatile uint32_t t152 = 831U;
int64_t t153 = -17LL;
static uint16_t x630 = UINT16_MAX;
uint16_t x655 = 72U;
static int64_t t160 = -1643482280880114746LL;
int8_t x659 = 0;
int64_t t162 = 1536345574344665040LL;
int32_t x666 = INT32_MIN;
int16_t x669 = INT16_MAX;
uint64_t x675 = 478816554LLU;
uint32_t x677 = UINT32_MAX;
int64_t x680 = INT64_MIN;
int8_t x684 = INT8_MIN;
volatile int32_t t167 = 29;
int32_t x687 = 26;
volatile int32_t t168 = 7192646;
int16_t x696 = -4;
uint32_t x697 = 3037U;
volatile int32_t t171 = -53;
volatile int16_t x701 = INT16_MIN;
uint32_t t172 = 57096998U;
static uint32_t x705 = 17737963U;
int64_t x711 = -1LL;
static volatile int64_t x724 = INT64_MIN;
static int8_t x727 = -1;
volatile uint64_t t178 = 131564213471771151LLU;
int8_t x736 = 23;
volatile uint16_t x737 = 5565U;
int16_t x744 = INT16_MIN;
int8_t x745 = INT8_MIN;
volatile uint64_t x746 = 1799LLU;
int64_t x750 = INT64_MAX;
volatile int16_t x751 = 105;
static int8_t x755 = -13;
int32_t x758 = -1;
int32_t t186 = 40574503;
static int32_t x768 = 1;
uint64_t x771 = 34879414448149896LLU;
static volatile int64_t x778 = INT64_MAX;
volatile int32_t t191 = -44;
static uint64_t x781 = 3863524523LLU;
volatile uint32_t x783 = 55U;
volatile int32_t t192 = 198;
int16_t x787 = -1;
static int32_t x793 = -2164439;
static int16_t x802 = -6925;
int64_t x804 = 13749531LL;
volatile uint16_t x807 = UINT16_MAX;
int8_t x809 = -2;
int16_t x812 = INT16_MIN;
int32_t t199 = 37;


void f0(void) {
    	int8_t x1 = -20;
	int16_t x2 = 3706;
	static int32_t x3 = -1;
	static int32_t t0 = 46;

    t0 = (((x1^x2)<=x3)/x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MAX;
	int8_t x7 = -1;
	uint32_t x8 = 2097005U;
	static uint32_t t1 = 4035U;

    t1 = (((x5^x6)<=x7)/x8);

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MAX;
	int64_t x10 = -1LL;
	static int32_t x11 = 151476219;
	volatile int16_t x12 = -6;

    t2 = (((x9^x10)<=x11)/x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	int8_t x14 = 1;
	int8_t x15 = INT8_MAX;
	volatile int16_t x16 = -1;
	int32_t t3 = 1186927;

    t3 = (((x13^x14)<=x15)/x16);

    if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int16_t x17 = INT16_MAX;
	int8_t x18 = INT8_MIN;
	static int16_t x19 = INT16_MIN;

    t4 = (((x17^x18)<=x19)/x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x21 = INT32_MIN;
	int16_t x22 = 3600;
	volatile uint16_t x23 = UINT16_MAX;
	int16_t x24 = -1;
	static volatile int32_t t5 = 833658;

    t5 = (((x21^x22)<=x23)/x24);

    if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = 31;
	int8_t x27 = INT8_MIN;
	int8_t x28 = -1;
	int32_t t6 = -3707;

    t6 = (((x25^x26)<=x27)/x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint64_t x29 = 114228477LLU;
	volatile uint16_t x30 = 234U;
	volatile int16_t x31 = -67;
	uint32_t x32 = 48U;
	volatile uint32_t t7 = 7386U;

    t7 = (((x29^x30)<=x31)/x32);

    if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = -1;
	static uint32_t x34 = 347U;
	int32_t t8 = -343676398;

    t8 = (((x33^x34)<=x35)/x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = 2211817U;
	static volatile int64_t x38 = INT64_MIN;
	int32_t x39 = INT32_MAX;
	static int32_t t9 = 3125;

    t9 = (((x37^x38)<=x39)/x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x41 = -1;
	static int64_t x42 = INT64_MIN;
	static int32_t x43 = INT32_MAX;
	int8_t x44 = 49;
	int32_t t10 = 79655;

    t10 = (((x41^x42)<=x43)/x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint64_t x45 = 4094463218LLU;
	int16_t x46 = -1;
	uint32_t x47 = UINT32_MAX;
	static int8_t x48 = -1;
	volatile int32_t t11 = 1;

    t11 = (((x45^x46)<=x47)/x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = UINT32_MAX;
	int8_t x51 = INT8_MAX;
	uint32_t x52 = UINT32_MAX;
	volatile uint32_t t12 = 3658096U;

    t12 = (((x49^x50)<=x51)/x52);

    if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x54 = 0;
	static uint32_t x55 = 259516391U;
	int8_t x56 = -1;

    t13 = (((x53^x54)<=x55)/x56);

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t t14 = 206453;

    t14 = (((x57^x58)<=x59)/x60);

    if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x62 = 44;
	int32_t x64 = INT32_MIN;
	volatile int32_t t15 = 23;

    t15 = (((x61^x62)<=x63)/x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = -20880810284LL;
	int16_t x67 = INT16_MIN;
	int8_t x68 = INT8_MAX;
	int32_t t16 = -19903;

    t16 = (((x65^x66)<=x67)/x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = 40438;
	uint64_t x70 = 19922235792761358LLU;
	uint8_t x71 = 3U;
	volatile uint64_t x72 = 169688917353076LLU;

    t17 = (((x69^x70)<=x71)/x72);

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MAX;
	static uint8_t x74 = 50U;
	int32_t x76 = -1;
	volatile int32_t t18 = 7016;

    t18 = (((x73^x74)<=x75)/x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x77 = INT32_MIN;

    t19 = (((x77^x78)<=x79)/x80);

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = INT64_MIN;
	uint8_t x82 = 20U;
	int64_t x83 = INT64_MIN;
	uint32_t x84 = UINT32_MAX;
	volatile uint32_t t20 = 0U;

    t20 = (((x81^x82)<=x83)/x84);

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x90 = INT16_MAX;
	int32_t x91 = 1;
	int8_t x92 = -50;
	static int32_t t21 = -110223478;

    t21 = (((x89^x90)<=x91)/x92);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int32_t x93 = INT32_MIN;
	int32_t x94 = -600;
	int64_t x95 = INT64_MAX;
	uint32_t x96 = 53U;
	volatile uint32_t t22 = 39928877U;

    t22 = (((x93^x94)<=x95)/x96);

    if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x97 = 0;
	int64_t x98 = INT64_MAX;
	int64_t x99 = INT64_MIN;
	volatile int32_t t23 = 72628;

    t23 = (((x97^x98)<=x99)/x100);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x101 = UINT16_MAX;
	static int8_t x102 = -1;
	volatile int64_t x103 = -198LL;
	int64_t x104 = 3407LL;
	int64_t t24 = -1968463728168LL;

    t24 = (((x101^x102)<=x103)/x104);

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x105 = INT64_MAX;
	volatile int16_t x107 = 1;
	static uint32_t x108 = UINT32_MAX;
	uint32_t t25 = 3262725U;

    t25 = (((x105^x106)<=x107)/x108);

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x109 = 4280830365LLU;
	uint32_t x110 = 3639203U;
	static int32_t x111 = -1;
	int32_t x112 = INT32_MAX;
	volatile int32_t t26 = 1;

    t26 = (((x109^x110)<=x111)/x112);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x113 = UINT16_MAX;
	int8_t x114 = INT8_MIN;
	static uint16_t x115 = 2396U;
	volatile uint8_t x116 = UINT8_MAX;
	int32_t t27 = 1;

    t27 = (((x113^x114)<=x115)/x116);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x117 = 331866920U;
	volatile int64_t x118 = -1LL;
	static uint8_t x119 = 41U;
	uint64_t x120 = UINT64_MAX;
	uint64_t t28 = 680130372715LLU;

    t28 = (((x117^x118)<=x119)/x120);

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x121 = 56504U;
	volatile uint32_t x122 = 1119044292U;
	int8_t x124 = 3;
	volatile int32_t t29 = 1;

    t29 = (((x121^x122)<=x123)/x124);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x126 = INT8_MIN;
	volatile int64_t x127 = -16878387LL;
	volatile uint8_t x128 = 1U;
	volatile int32_t t30 = 0;

    t30 = (((x125^x126)<=x127)/x128);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x129 = 4405U;
	uint8_t x130 = UINT8_MAX;
	uint8_t x131 = UINT8_MAX;
	static uint64_t x132 = UINT64_MAX;
	uint64_t t31 = 3195910LLU;

    t31 = (((x129^x130)<=x131)/x132);

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x133 = 100439U;
	volatile int64_t x134 = INT64_MAX;
	uint8_t x135 = UINT8_MAX;
	uint32_t x136 = 1013947U;
	uint32_t t32 = 20U;

    t32 = (((x133^x134)<=x135)/x136);

    if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x137 = 322390564U;
	int16_t x138 = -4496;
	volatile int64_t x139 = -2971358680722085LL;
	int16_t x140 = -488;
	int32_t t33 = -37;

    t33 = (((x137^x138)<=x139)/x140);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x141 = 727112U;
	volatile int64_t x142 = -1LL;
	int32_t x143 = INT32_MIN;
	int32_t x144 = INT32_MIN;
	int32_t t34 = 152163;

    t34 = (((x141^x142)<=x143)/x144);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x147 = INT8_MIN;
	uint64_t x148 = 11306865142LLU;
	uint64_t t35 = 1286278688418LLU;

    t35 = (((x145^x146)<=x147)/x148);

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x150 = UINT16_MAX;
	uint64_t x151 = UINT64_MAX;
	static int32_t x152 = 3;
	int32_t t36 = 497891;

    t36 = (((x149^x150)<=x151)/x152);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile uint16_t x153 = UINT16_MAX;
	int16_t x155 = INT16_MIN;
	int8_t x156 = INT8_MAX;
	static int32_t t37 = 1;

    t37 = (((x153^x154)<=x155)/x156);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x157 = UINT64_MAX;
	uint16_t x158 = 200U;
	int32_t x159 = INT32_MIN;
	uint64_t x160 = UINT64_MAX;
	static volatile uint64_t t38 = 935659429951LLU;

    t38 = (((x157^x158)<=x159)/x160);

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x161 = INT8_MIN;
	int8_t x162 = 0;
	uint32_t x163 = 1692760251U;
	int32_t t39 = -321;

    t39 = (((x161^x162)<=x163)/x164);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x165 = INT64_MIN;
	int16_t x166 = INT16_MIN;
	int64_t x167 = INT64_MIN;
	volatile int16_t x168 = 14062;
	static volatile int32_t t40 = 108;

    t40 = (((x165^x166)<=x167)/x168);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x169 = -6;
	int32_t x171 = -1;
	static int32_t x172 = -1;
	volatile int32_t t41 = 104;

    t41 = (((x169^x170)<=x171)/x172);

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x173 = -1LL;
	int8_t x174 = INT8_MIN;
	int8_t x175 = INT8_MIN;
	static int64_t t42 = 296394803663LL;

    t42 = (((x173^x174)<=x175)/x176);

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x177 = 7U;

    t43 = (((x177^x178)<=x179)/x180);

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint8_t x181 = UINT8_MAX;
	uint64_t x183 = UINT64_MAX;
	int32_t x184 = -1;
	volatile int32_t t44 = -125803;

    t44 = (((x181^x182)<=x183)/x184);

    if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x185 = 139302943U;
	static volatile int8_t x186 = INT8_MAX;
	int8_t x187 = INT8_MAX;
	int8_t x188 = -3;

    t45 = (((x185^x186)<=x187)/x188);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x189 = UINT32_MAX;
	int64_t x190 = INT64_MIN;
	uint32_t x192 = UINT32_MAX;
	volatile uint32_t t46 = 3U;

    t46 = (((x189^x190)<=x191)/x192);

    if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int16_t x194 = -1;
	int8_t x195 = -16;
	uint64_t x196 = 115636264LLU;
	volatile uint64_t t47 = 13985462385LLU;

    t47 = (((x193^x194)<=x195)/x196);

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x197 = 887110267U;
	static volatile int8_t x199 = INT8_MIN;
	static int32_t x200 = INT32_MIN;
	int32_t t48 = -13938;

    t48 = (((x197^x198)<=x199)/x200);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x203 = -30952822;
	static uint32_t t49 = 3U;

    t49 = (((x201^x202)<=x203)/x204);

    if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x205 = 4;
	uint32_t x206 = UINT32_MAX;
	uint8_t x208 = 1U;
	volatile int32_t t50 = -251;

    t50 = (((x205^x206)<=x207)/x208);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x209 = 8589;
	uint16_t x210 = 2U;
	int64_t x212 = 18786034206533438LL;
	volatile int64_t t51 = -296237699LL;

    t51 = (((x209^x210)<=x211)/x212);

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x213 = -1;
	volatile int32_t x214 = -384762;
	int16_t x215 = -3004;
	volatile int8_t x216 = INT8_MIN;
	volatile int32_t t52 = -107542;

    t52 = (((x213^x214)<=x215)/x216);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x217 = -303576LL;
	volatile uint32_t x218 = 3U;
	uint32_t x220 = 9U;
	volatile uint32_t t53 = 25017304U;

    t53 = (((x217^x218)<=x219)/x220);

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x221 = -2;
	int32_t x222 = -7656694;
	int64_t t54 = 4124732357568LL;

    t54 = (((x221^x222)<=x223)/x224);

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x225 = INT16_MIN;
	int8_t x226 = 1;
	int16_t x228 = 1098;
	int32_t t55 = -29291262;

    t55 = (((x225^x226)<=x227)/x228);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x229 = 0;
	int32_t x230 = -1;
	uint32_t x232 = 2855798U;
	static volatile uint32_t t56 = 126028U;

    t56 = (((x229^x230)<=x231)/x232);

    if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x233 = INT64_MIN;
	static int16_t x235 = INT16_MAX;
	int64_t x236 = INT64_MIN;

    t57 = (((x233^x234)<=x235)/x236);

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x238 = INT8_MIN;
	int16_t x239 = INT16_MIN;
	int64_t x240 = INT64_MIN;
	volatile int64_t t58 = -3571619758264LL;

    t58 = (((x237^x238)<=x239)/x240);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint16_t x241 = 8695U;
	uint64_t x243 = 13917025LLU;
	volatile int8_t x244 = INT8_MAX;

    t59 = (((x241^x242)<=x243)/x244);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x245 = -290;
	int16_t x246 = -1;
	static uint8_t x247 = 36U;
	int16_t x248 = -485;
	static volatile int32_t t60 = 670;

    t60 = (((x245^x246)<=x247)/x248);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x249 = 6158;
	int16_t x250 = -2590;
	uint8_t x251 = UINT8_MAX;
	int64_t x252 = 255182325327429LL;
	static int64_t t61 = -2737LL;

    t61 = (((x249^x250)<=x251)/x252);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint8_t x253 = UINT8_MAX;
	uint32_t x254 = UINT32_MAX;
	uint16_t x256 = 9U;
	int32_t t62 = 1;

    t62 = (((x253^x254)<=x255)/x256);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint8_t x257 = 53U;
	volatile int32_t x258 = INT32_MAX;
	uint8_t x259 = UINT8_MAX;
	int32_t x260 = 885;
	static int32_t t63 = 14;

    t63 = (((x257^x258)<=x259)/x260);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int8_t x261 = INT8_MAX;
	volatile int32_t x262 = -260065;
	volatile int8_t x263 = -5;
	int64_t x264 = 2024653417548769LL;
	static volatile int64_t t64 = -126092076322257760LL;

    t64 = (((x261^x262)<=x263)/x264);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x265 = INT16_MIN;
	static int32_t x266 = INT32_MIN;
	uint8_t x267 = UINT8_MAX;
	int16_t x268 = -431;
	volatile int32_t t65 = 16058450;

    t65 = (((x265^x266)<=x267)/x268);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x269 = 839U;
	uint8_t x270 = 3U;
	static int16_t x271 = -1;
	uint8_t x272 = 15U;
	int32_t t66 = 185248;

    t66 = (((x269^x270)<=x271)/x272);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x274 = -3303488394119628LL;
	int16_t x275 = INT16_MIN;
	int8_t x276 = 30;

    t67 = (((x273^x274)<=x275)/x276);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint32_t x277 = 21980U;
	uint16_t x280 = UINT16_MAX;
	static volatile int32_t t68 = -16706107;

    t68 = (((x277^x278)<=x279)/x280);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x281 = INT8_MIN;
	int64_t x282 = -1LL;
	int16_t x283 = INT16_MIN;
	int32_t x284 = -1;
	static int32_t t69 = 550;

    t69 = (((x281^x282)<=x283)/x284);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x285 = INT64_MIN;
	volatile int8_t x286 = -1;
	static volatile uint8_t x287 = 90U;

    t70 = (((x285^x286)<=x287)/x288);

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x289 = 75338756U;
	volatile uint32_t x291 = 15611825U;
	int32_t x292 = INT32_MIN;
	int32_t t71 = 2;

    t71 = (((x289^x290)<=x291)/x292);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x294 = -217;
	volatile int8_t x295 = -1;
	volatile uint64_t x296 = UINT64_MAX;
	uint64_t t72 = 5432087089717520244LLU;

    t72 = (((x293^x294)<=x295)/x296);

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x297 = -1;
	int16_t x298 = -534;
	int32_t x300 = INT32_MAX;

    t73 = (((x297^x298)<=x299)/x300);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x301 = -1;
	volatile int16_t x302 = INT16_MIN;
	static uint32_t x304 = 128997603U;
	volatile uint32_t t74 = 409386U;

    t74 = (((x301^x302)<=x303)/x304);

    if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x306 = 0LL;
	static int32_t x307 = -504854;
	uint64_t x308 = 6538321598LLU;
	volatile uint64_t t75 = 0LLU;

    t75 = (((x305^x306)<=x307)/x308);

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x309 = INT16_MIN;
	volatile int64_t x310 = INT64_MAX;
	static int16_t x311 = INT16_MIN;
	int32_t x312 = 52052;
	int32_t t76 = 1;

    t76 = (((x309^x310)<=x311)/x312);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x313 = INT16_MIN;
	uint16_t x314 = UINT16_MAX;
	int16_t x315 = INT16_MIN;
	int8_t x316 = 5;
	int32_t t77 = -1318;

    t77 = (((x313^x314)<=x315)/x316);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x321 = INT8_MIN;
	int64_t x322 = 4130526915447158LL;
	volatile int32_t x323 = 10684251;
	volatile uint64_t x324 = UINT64_MAX;

    t78 = (((x321^x322)<=x323)/x324);

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x325 = 1;
	volatile uint32_t x326 = 5922181U;
	int64_t x327 = INT64_MIN;
	volatile uint32_t x328 = 450439931U;
	uint32_t t79 = 0U;

    t79 = (((x325^x326)<=x327)/x328);

    if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile uint8_t x329 = UINT8_MAX;
	int32_t x330 = -1;
	uint32_t x331 = UINT32_MAX;
	int32_t t80 = 645486;

    t80 = (((x329^x330)<=x331)/x332);

    if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x333 = -1;
	volatile int8_t x334 = -1;
	int8_t x335 = -2;
	uint16_t x336 = 14646U;
	volatile int32_t t81 = -16;

    t81 = (((x333^x334)<=x335)/x336);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x338 = -1;
	static int64_t x339 = 8387053LL;
	int16_t x340 = -1;
	int32_t t82 = -27;

    t82 = (((x337^x338)<=x339)/x340);

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x341 = INT32_MAX;
	volatile uint8_t x343 = UINT8_MAX;
	int8_t x344 = INT8_MIN;
	volatile int32_t t83 = 4183;

    t83 = (((x341^x342)<=x343)/x344);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x345 = INT32_MIN;
	static int16_t x346 = INT16_MIN;
	uint32_t x347 = 584882U;
	uint16_t x348 = UINT16_MAX;
	volatile int32_t t84 = 46220;

    t84 = (((x345^x346)<=x347)/x348);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x349 = 1LL;
	int8_t x351 = -1;
	int16_t x352 = INT16_MIN;
	int32_t t85 = -2;

    t85 = (((x349^x350)<=x351)/x352);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint32_t t86 = 8073039U;

    t86 = (((x353^x354)<=x355)/x356);

    if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x357 = -1;
	uint64_t x358 = UINT64_MAX;
	int64_t x359 = INT64_MAX;
	uint64_t x360 = 3930892165LLU;
	uint64_t t87 = 683073579887328LLU;

    t87 = (((x357^x358)<=x359)/x360);

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x362 = 32143661LL;
	static uint64_t x363 = UINT64_MAX;
	uint64_t x364 = 9498715331358415LLU;
	volatile uint64_t t88 = 3257187045LLU;

    t88 = (((x361^x362)<=x363)/x364);

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x365 = -17209743LL;
	uint32_t x367 = 0U;
	int16_t x368 = -1109;
	int32_t t89 = -11407808;

    t89 = (((x365^x366)<=x367)/x368);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x370 = INT8_MIN;
	uint64_t x371 = UINT64_MAX;

    t90 = (((x369^x370)<=x371)/x372);

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x373 = INT32_MAX;
	uint8_t x374 = 4U;
	volatile int64_t x375 = INT64_MIN;
	static int64_t x376 = INT64_MIN;
	volatile int64_t t91 = 9809334265995754LL;

    t91 = (((x373^x374)<=x375)/x376);

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x377 = 1;
	int64_t x378 = 36973329022244148LL;
	static uint8_t x379 = UINT8_MAX;
	static int32_t t92 = 20652062;

    t92 = (((x377^x378)<=x379)/x380);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x381 = INT64_MIN;
	int64_t x382 = INT64_MIN;
	volatile uint8_t x383 = 26U;
	volatile int32_t t93 = -1617761;

    t93 = (((x381^x382)<=x383)/x384);

    if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int8_t x385 = INT8_MAX;
	volatile int32_t x386 = -115383;
	int64_t x387 = INT64_MIN;
	volatile int8_t x388 = -1;
	static int32_t t94 = -454344028;

    t94 = (((x385^x386)<=x387)/x388);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x391 = INT8_MIN;
	volatile uint64_t t95 = 139LLU;

    t95 = (((x389^x390)<=x391)/x392);

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x394 = INT16_MIN;
	int16_t x395 = 1730;
	uint32_t x396 = UINT32_MAX;
	volatile uint32_t t96 = 521094984U;

    t96 = (((x393^x394)<=x395)/x396);

    if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x397 = INT8_MIN;
	int32_t x398 = -1;
	uint16_t x399 = UINT16_MAX;
	int32_t t97 = -436147;

    t97 = (((x397^x398)<=x399)/x400);

    if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x401 = INT32_MIN;
	int16_t x403 = 2;
	volatile int64_t x404 = -1LL;
	int64_t t98 = -6474528676810195LL;

    t98 = (((x401^x402)<=x403)/x404);

    if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x405 = UINT16_MAX;
	int16_t x407 = INT16_MAX;
	volatile uint16_t x408 = 6U;
	volatile int32_t t99 = 14;

    t99 = (((x405^x406)<=x407)/x408);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint64_t x409 = UINT64_MAX;
	volatile uint64_t x411 = 171153890777466355LLU;
	static uint16_t x412 = 1U;

    t100 = (((x409^x410)<=x411)/x412);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x413 = -1LL;
	uint32_t x414 = 1852U;
	volatile int32_t x415 = INT32_MIN;
	int8_t x416 = INT8_MAX;
	int32_t t101 = -482666235;

    t101 = (((x413^x414)<=x415)/x416);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x417 = -44;
	int32_t x418 = -2017;
	int64_t x419 = INT64_MIN;
	uint8_t x420 = 26U;

    t102 = (((x417^x418)<=x419)/x420);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x425 = INT64_MAX;
	static volatile int16_t x426 = INT16_MAX;
	int8_t x427 = INT8_MIN;
	volatile int32_t t103 = 29412;

    t103 = (((x425^x426)<=x427)/x428);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint64_t x429 = UINT64_MAX;
	uint8_t x430 = UINT8_MAX;
	int32_t x432 = INT32_MIN;
	volatile int32_t t104 = 658986396;

    t104 = (((x429^x430)<=x431)/x432);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint16_t x434 = UINT16_MAX;
	static volatile int32_t x435 = INT32_MAX;
	int32_t t105 = 0;

    t105 = (((x433^x434)<=x435)/x436);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x437 = -1;
	int8_t x438 = 4;
	static int64_t x439 = INT64_MIN;
	uint16_t x440 = UINT16_MAX;
	volatile int32_t t106 = 0;

    t106 = (((x437^x438)<=x439)/x440);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x442 = -13176752568LL;
	int32_t x443 = -1;
	int32_t t107 = -1686089;

    t107 = (((x441^x442)<=x443)/x444);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x445 = INT8_MAX;
	int64_t x446 = -1LL;
	static int32_t x447 = -22;
	int8_t x448 = INT8_MIN;

    t108 = (((x445^x446)<=x447)/x448);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x449 = -371;
	static uint64_t x450 = 90LLU;
	int32_t x451 = INT32_MIN;
	volatile int64_t t109 = -84LL;

    t109 = (((x449^x450)<=x451)/x452);

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x454 = INT16_MIN;
	static volatile int8_t x455 = -30;
	uint32_t t110 = 327357379U;

    t110 = (((x453^x454)<=x455)/x456);

    if (t110 != 0U) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x457 = INT32_MAX;
	uint32_t x458 = 6U;
	static volatile int8_t x460 = -1;
	volatile int32_t t111 = 1;

    t111 = (((x457^x458)<=x459)/x460);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x461 = 83043657730703LLU;
	int32_t x462 = INT32_MAX;
	uint64_t x463 = 44966362475618LLU;
	static uint16_t x464 = 219U;

    t112 = (((x461^x462)<=x463)/x464);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x466 = INT32_MIN;
	int16_t x467 = INT16_MIN;
	uint32_t x468 = 26U;
	uint32_t t113 = 7U;

    t113 = (((x465^x466)<=x467)/x468);

    if (t113 != 0U) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x469 = INT8_MIN;
	int16_t x470 = INT16_MIN;
	uint8_t x471 = 42U;
	int32_t t114 = 36845;

    t114 = (((x469^x470)<=x471)/x472);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint32_t x473 = UINT32_MAX;
	uint64_t x474 = 4075471LLU;
	static volatile int64_t x475 = INT64_MAX;
	static uint8_t x476 = 19U;
	static volatile int32_t t115 = 1206165;

    t115 = (((x473^x474)<=x475)/x476);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x477 = UINT8_MAX;
	int16_t x478 = INT16_MAX;
	int16_t x479 = 2;
	uint64_t x480 = UINT64_MAX;
	uint64_t t116 = 3930443129943220LLU;

    t116 = (((x477^x478)<=x479)/x480);

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x481 = 2;
	static int16_t x482 = INT16_MIN;
	int16_t x483 = INT16_MIN;
	static int64_t x484 = INT64_MAX;
	int64_t t117 = 18LL;

    t117 = (((x481^x482)<=x483)/x484);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x486 = INT8_MIN;
	static int8_t x487 = INT8_MAX;
	volatile int16_t x488 = -1;
	volatile int32_t t118 = 524461;

    t118 = (((x485^x486)<=x487)/x488);

    if (t118 != -1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x489 = INT64_MIN;
	int32_t x490 = INT32_MAX;
	uint8_t x492 = 2U;
	int32_t t119 = -34;

    t119 = (((x489^x490)<=x491)/x492);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x493 = -1;
	static volatile uint32_t x494 = 675130254U;
	int32_t x495 = INT32_MIN;
	volatile int32_t t120 = -1;

    t120 = (((x493^x494)<=x495)/x496);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x497 = 1359U;
	uint8_t x498 = 0U;
	uint8_t x499 = 1U;

    t121 = (((x497^x498)<=x499)/x500);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x503 = UINT8_MAX;
	int64_t x504 = -190785089580615891LL;
	volatile int64_t t122 = -2209454LL;

    t122 = (((x501^x502)<=x503)/x504);

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x506 = 122U;
	uint16_t x507 = UINT16_MAX;
	int64_t t123 = -418881420650754712LL;

    t123 = (((x505^x506)<=x507)/x508);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x509 = INT64_MIN;
	volatile int16_t x511 = INT16_MAX;
	static volatile int8_t x512 = INT8_MIN;

    t124 = (((x509^x510)<=x511)/x512);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x513 = -1;
	volatile int16_t x514 = INT16_MIN;
	int32_t x516 = -1;
	volatile int32_t t125 = -1812;

    t125 = (((x513^x514)<=x515)/x516);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x517 = -199;
	static volatile uint32_t x518 = 347260821U;
	uint16_t x519 = 194U;
	int32_t x520 = INT32_MIN;
	static volatile int32_t t126 = -111;

    t126 = (((x517^x518)<=x519)/x520);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x521 = 78LL;
	uint8_t x522 = UINT8_MAX;
	int32_t x523 = -1;
	uint64_t x524 = 2LLU;
	static volatile uint64_t t127 = 23013LLU;

    t127 = (((x521^x522)<=x523)/x524);

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x526 = INT64_MAX;
	uint8_t x527 = 0U;

    t128 = (((x525^x526)<=x527)/x528);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x529 = -1;
	int64_t x531 = INT64_MIN;
	int16_t x532 = INT16_MIN;
	int32_t t129 = 433044;

    t129 = (((x529^x530)<=x531)/x532);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x533 = 0U;
	int64_t x534 = INT64_MIN;
	int32_t x535 = -1;
	uint64_t x536 = UINT64_MAX;
	volatile uint64_t t130 = 3930896520LLU;

    t130 = (((x533^x534)<=x535)/x536);

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x538 = INT16_MIN;
	int8_t x539 = INT8_MAX;
	int16_t x540 = -838;
	static volatile int32_t t131 = -1;

    t131 = (((x537^x538)<=x539)/x540);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x541 = 4266715893LLU;
	int16_t x542 = INT16_MAX;
	volatile uint32_t t132 = 222U;

    t132 = (((x541^x542)<=x543)/x544);

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x548 = INT8_MAX;
	volatile int32_t t133 = 119615;

    t133 = (((x545^x546)<=x547)/x548);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x550 = INT64_MIN;
	int8_t x551 = INT8_MIN;
	uint32_t x552 = UINT32_MAX;
	volatile uint32_t t134 = 20U;

    t134 = (((x549^x550)<=x551)/x552);

    if (t134 != 0U) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x553 = INT16_MIN;
	int16_t x554 = 82;
	uint8_t x556 = UINT8_MAX;
	volatile int32_t t135 = 1193;

    t135 = (((x553^x554)<=x555)/x556);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint8_t x559 = UINT8_MAX;
	uint16_t x560 = 15U;

    t136 = (((x557^x558)<=x559)/x560);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile uint64_t x562 = 0LLU;
	int16_t x563 = INT16_MIN;
	volatile int32_t t137 = 14743;

    t137 = (((x561^x562)<=x563)/x564);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint32_t x565 = UINT32_MAX;
	int64_t x566 = INT64_MIN;
	uint8_t x567 = 0U;
	int64_t x568 = -1LL;

    t138 = (((x565^x566)<=x567)/x568);

    if (t138 != -1LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x569 = -3;
	int16_t x571 = -994;
	uint16_t x572 = UINT16_MAX;

    t139 = (((x569^x570)<=x571)/x572);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x573 = 0;
	uint64_t x574 = UINT64_MAX;
	int8_t x576 = -1;
	int32_t t140 = -1811;

    t140 = (((x573^x574)<=x575)/x576);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x577 = INT8_MAX;
	int64_t x580 = INT64_MIN;
	int64_t t141 = -176919654LL;

    t141 = (((x577^x578)<=x579)/x580);

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x581 = INT16_MIN;
	int8_t x582 = INT8_MIN;
	int16_t x583 = -6;
	uint8_t x584 = 40U;
	int32_t t142 = 1;

    t142 = (((x581^x582)<=x583)/x584);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x585 = INT16_MIN;
	uint32_t x586 = 9U;
	volatile int16_t x587 = INT16_MIN;
	int8_t x588 = -1;
	volatile int32_t t143 = -1078;

    t143 = (((x585^x586)<=x587)/x588);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x590 = INT16_MIN;
	static int32_t x591 = -2038577;

    t144 = (((x589^x590)<=x591)/x592);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x593 = -30;
	int32_t x595 = INT32_MAX;
	int64_t x596 = 1470LL;
	volatile int64_t t145 = 124038049623574538LL;

    t145 = (((x593^x594)<=x595)/x596);

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x597 = INT64_MIN;
	uint8_t x599 = 1U;
	volatile int32_t t146 = -819923248;

    t146 = (((x597^x598)<=x599)/x600);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x601 = INT8_MIN;
	int64_t x603 = -1LL;
	static uint8_t x604 = 10U;
	int32_t t147 = 180743;

    t147 = (((x601^x602)<=x603)/x604);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x606 = INT32_MIN;
	int64_t x607 = INT64_MIN;
	int64_t x608 = -62920LL;

    t148 = (((x605^x606)<=x607)/x608);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x609 = INT32_MAX;
	static int8_t x612 = INT8_MIN;
	volatile int32_t t149 = 82;

    t149 = (((x609^x610)<=x611)/x612);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x613 = INT8_MIN;
	static int64_t x614 = INT64_MIN;
	uint64_t x616 = UINT64_MAX;

    t150 = (((x613^x614)<=x615)/x616);

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x617 = -36;
	volatile int64_t x618 = -4677090064478LL;
	volatile uint16_t x620 = UINT16_MAX;

    t151 = (((x617^x618)<=x619)/x620);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x621 = INT64_MIN;
	int16_t x622 = 44;
	volatile uint32_t x623 = 22753U;
	static uint32_t x624 = UINT32_MAX;

    t152 = (((x621^x622)<=x623)/x624);

    if (t152 != 0U) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x625 = INT8_MIN;
	uint32_t x626 = UINT32_MAX;
	int16_t x627 = INT16_MAX;
	int64_t x628 = -1LL;

    t153 = (((x625^x626)<=x627)/x628);

    if (t153 != -1LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x629 = 12966557640326840LLU;
	int16_t x631 = INT16_MIN;
	uint64_t x632 = 1821721348LLU;
	static uint64_t t154 = 11859219132LLU;

    t154 = (((x629^x630)<=x631)/x632);

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x633 = -1;
	uint64_t x634 = 463LLU;
	static uint8_t x635 = 111U;
	int8_t x636 = INT8_MAX;
	static volatile int32_t t155 = -113546971;

    t155 = (((x633^x634)<=x635)/x636);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x637 = 2U;
	int64_t x638 = INT64_MAX;
	volatile int64_t x639 = INT64_MIN;
	uint16_t x640 = 1U;
	int32_t t156 = 3693206;

    t156 = (((x637^x638)<=x639)/x640);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x641 = 77U;
	int16_t x642 = -1;
	int32_t x643 = -444;
	volatile int64_t x644 = INT64_MIN;
	int64_t t157 = -165331LL;

    t157 = (((x641^x642)<=x643)/x644);

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x645 = 474517;
	int32_t x646 = INT32_MIN;
	uint16_t x647 = UINT16_MAX;
	uint16_t x648 = 3U;
	static int32_t t158 = 709;

    t158 = (((x645^x646)<=x647)/x648);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x649 = 3888U;
	int8_t x650 = -1;
	uint16_t x651 = 181U;
	volatile int8_t x652 = INT8_MIN;
	volatile int32_t t159 = -13021;

    t159 = (((x649^x650)<=x651)/x652);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x653 = -1;
	int64_t x654 = 30634LL;
	static int64_t x656 = INT64_MAX;

    t160 = (((x653^x654)<=x655)/x656);

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x657 = INT32_MAX;
	volatile int64_t x658 = -1LL;
	uint32_t x660 = 1U;
	volatile uint32_t t161 = 4204U;

    t161 = (((x657^x658)<=x659)/x660);

    if (t161 != 1U) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x661 = 14766LL;
	int16_t x662 = INT16_MIN;
	int64_t x663 = INT64_MIN;
	static int64_t x664 = INT64_MAX;

    t162 = (((x661^x662)<=x663)/x664);

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x665 = -13476241LL;
	int8_t x667 = 1;
	uint64_t x668 = 9552467LLU;
	volatile uint64_t t163 = 1602263145929683111LLU;

    t163 = (((x665^x666)<=x667)/x668);

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x670 = -1;
	static volatile int32_t x671 = INT32_MIN;
	int64_t x672 = -105656371097197177LL;
	static volatile int64_t t164 = -121937185734LL;

    t164 = (((x669^x670)<=x671)/x672);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x673 = INT64_MIN;
	volatile int8_t x674 = -6;
	static uint32_t x676 = 53746U;
	static volatile uint32_t t165 = 2093U;

    t165 = (((x673^x674)<=x675)/x676);

    if (t165 != 0U) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x678 = -1;
	uint32_t x679 = 302250U;
	int64_t t166 = 19106388107623877LL;

    t166 = (((x677^x678)<=x679)/x680);

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x681 = INT8_MIN;
	int64_t x682 = INT64_MIN;
	int64_t x683 = INT64_MIN;

    t167 = (((x681^x682)<=x683)/x684);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x685 = 436U;
	int16_t x686 = -1;
	volatile int32_t x688 = 1181687;

    t168 = (((x685^x686)<=x687)/x688);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x689 = -1;
	uint32_t x690 = 402608U;
	volatile uint16_t x691 = 145U;
	uint32_t x692 = 5122104U;
	static volatile uint32_t t169 = 1U;

    t169 = (((x689^x690)<=x691)/x692);

    if (t169 != 0U) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x693 = -31;
	static volatile int8_t x694 = -1;
	int32_t x695 = -6;
	int32_t t170 = 999760;

    t170 = (((x693^x694)<=x695)/x696);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x698 = INT8_MAX;
	static int16_t x699 = -1;
	int8_t x700 = INT8_MIN;

    t171 = (((x697^x698)<=x699)/x700);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint32_t x702 = UINT32_MAX;
	int32_t x703 = -1;
	uint32_t x704 = 104914U;

    t172 = (((x701^x702)<=x703)/x704);

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x706 = INT32_MIN;
	int8_t x707 = INT8_MIN;
	int32_t x708 = 205042;
	static int32_t t173 = 46361783;

    t173 = (((x705^x706)<=x707)/x708);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x709 = INT32_MIN;
	volatile int32_t x710 = 80975389;
	int64_t x712 = INT64_MAX;
	int64_t t174 = 1LL;

    t174 = (((x709^x710)<=x711)/x712);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x713 = 4;
	int32_t x714 = 7;
	static volatile int16_t x715 = INT16_MIN;
	int16_t x716 = INT16_MIN;
	volatile int32_t t175 = 40277176;

    t175 = (((x713^x714)<=x715)/x716);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x717 = 234936U;
	int16_t x718 = 0;
	int16_t x719 = 5250;
	int64_t x720 = INT64_MIN;
	int64_t t176 = 9LL;

    t176 = (((x717^x718)<=x719)/x720);

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x721 = INT64_MIN;
	uint64_t x722 = 277396766477670LLU;
	uint32_t x723 = UINT32_MAX;
	volatile int64_t t177 = -20830696960064LL;

    t177 = (((x721^x722)<=x723)/x724);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x725 = -1;
	int8_t x726 = INT8_MAX;
	uint64_t x728 = 423LLU;

    t178 = (((x725^x726)<=x727)/x728);

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x729 = 1961U;
	static int64_t x730 = INT64_MIN;
	static volatile int16_t x731 = INT16_MAX;
	int32_t x732 = INT32_MIN;
	int32_t t179 = -43;

    t179 = (((x729^x730)<=x731)/x732);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int32_t x733 = INT32_MIN;
	uint16_t x734 = 239U;
	volatile int16_t x735 = -597;
	int32_t t180 = 14616761;

    t180 = (((x733^x734)<=x735)/x736);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x738 = 8524;
	int16_t x739 = INT16_MIN;
	uint8_t x740 = 1U;
	volatile int32_t t181 = 51156032;

    t181 = (((x737^x738)<=x739)/x740);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x741 = INT32_MIN;
	static uint32_t x742 = 154U;
	int16_t x743 = INT16_MIN;
	int32_t t182 = 122748089;

    t182 = (((x741^x742)<=x743)/x744);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x747 = 1;
	uint32_t x748 = UINT32_MAX;
	static volatile uint32_t t183 = 255948U;

    t183 = (((x745^x746)<=x747)/x748);

    if (t183 != 0U) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x749 = INT16_MIN;
	volatile uint32_t x752 = UINT32_MAX;
	uint32_t t184 = 471U;

    t184 = (((x749^x750)<=x751)/x752);

    if (t184 != 0U) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x753 = 1465370518U;
	static int8_t x754 = INT8_MAX;
	int32_t x756 = INT32_MAX;
	volatile int32_t t185 = 1;

    t185 = (((x753^x754)<=x755)/x756);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x757 = INT32_MAX;
	uint32_t x759 = UINT32_MAX;
	static int16_t x760 = -30;

    t186 = (((x757^x758)<=x759)/x760);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x761 = -1;
	uint16_t x762 = 33U;
	int32_t x763 = INT32_MIN;
	uint64_t x764 = 10944543LLU;
	uint64_t t187 = 25362LLU;

    t187 = (((x761^x762)<=x763)/x764);

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x765 = INT16_MIN;
	int64_t x766 = -483790896LL;
	static uint64_t x767 = 456LLU;
	volatile int32_t t188 = 0;

    t188 = (((x765^x766)<=x767)/x768);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x769 = INT8_MIN;
	volatile int8_t x770 = INT8_MIN;
	int8_t x772 = INT8_MIN;
	static volatile int32_t t189 = 0;

    t189 = (((x769^x770)<=x771)/x772);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x773 = INT8_MIN;
	uint32_t x774 = 68U;
	uint64_t x775 = 4LLU;
	static int64_t x776 = -5980790LL;
	int64_t t190 = 673404287698277LL;

    t190 = (((x773^x774)<=x775)/x776);

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x777 = -1;
	int8_t x779 = INT8_MIN;
	int16_t x780 = 2020;

    t191 = (((x777^x778)<=x779)/x780);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x782 = 516;
	static volatile int8_t x784 = INT8_MAX;

    t192 = (((x781^x782)<=x783)/x784);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x785 = -598282212364662382LL;
	volatile int8_t x786 = -1;
	static volatile int8_t x788 = INT8_MIN;
	static volatile int32_t t193 = -16293;

    t193 = (((x785^x786)<=x787)/x788);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x789 = INT16_MIN;
	static uint16_t x790 = 1U;
	int16_t x791 = INT16_MAX;
	static uint64_t x792 = 1446397653089LLU;
	volatile uint64_t t194 = 19324LLU;

    t194 = (((x789^x790)<=x791)/x792);

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint8_t x794 = 0U;
	int16_t x795 = -68;
	int64_t x796 = INT64_MIN;
	int64_t t195 = 409963435459032LL;

    t195 = (((x793^x794)<=x795)/x796);

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x797 = 0;
	int8_t x798 = -1;
	static volatile int16_t x799 = -1;
	volatile int16_t x800 = -1;
	int32_t t196 = 54;

    t196 = (((x797^x798)<=x799)/x800);

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint64_t x801 = 19697979138375039LLU;
	volatile int8_t x803 = INT8_MIN;
	volatile int64_t t197 = 78425574LL;

    t197 = (((x801^x802)<=x803)/x804);

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x805 = -25;
	uint8_t x806 = 3U;
	int64_t x808 = -1LL;
	static int64_t t198 = -972505321077LL;

    t198 = (((x805^x806)<=x807)/x808);

    if (t198 != -1LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x810 = -1;
	uint16_t x811 = 22U;

    t199 = (((x809^x810)<=x811)/x812);

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



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

uint32_t x1 = UINT32_MAX;
uint64_t x3 = 4LLU;
static int64_t x15 = 42346971LL;
int8_t x16 = INT8_MIN;
static uint16_t x18 = 315U;
uint16_t x19 = 2U;
volatile int32_t t2 = -98939;
uint8_t x40 = 3U;
static int16_t x44 = INT16_MAX;
volatile int32_t t6 = 396;
volatile int16_t x56 = 1;
static volatile int32_t x63 = INT32_MIN;
int32_t t11 = -2511247;
uint8_t x86 = 1U;
volatile int32_t t13 = -14132;
static uint16_t x97 = UINT16_MAX;
int32_t t16 = 5153;
int8_t x109 = -1;
static int64_t x112 = INT64_MIN;
uint8_t x113 = 7U;
int16_t x114 = INT16_MIN;
uint64_t x121 = 4035LLU;
int32_t t19 = -1576;
int8_t x134 = -6;
uint16_t x135 = 30U;
static int16_t x142 = INT16_MIN;
volatile uint8_t x144 = 2U;
int16_t x147 = -1;
int16_t x153 = INT16_MIN;
int64_t x154 = INT64_MAX;
int32_t t28 = -289139712;
uint16_t x176 = UINT16_MAX;
uint64_t x177 = 233510742LLU;
static volatile uint32_t x189 = 166786924U;
volatile int32_t x190 = -13822002;
uint32_t x199 = 59678U;
volatile int32_t t37 = -85088951;
static int8_t x202 = INT8_MIN;
uint32_t x206 = UINT32_MAX;
int32_t x213 = INT32_MAX;
volatile int16_t x214 = INT16_MIN;
volatile int32_t t41 = 95;
int32_t x221 = 18537010;
int32_t t43 = -232887670;
int16_t x243 = -14;
static uint16_t x244 = UINT16_MAX;
volatile int32_t x248 = INT32_MIN;
int8_t x252 = INT8_MIN;
int8_t x256 = INT8_MIN;
volatile int32_t t49 = -12;
static uint64_t x273 = UINT64_MAX;
int16_t x275 = 5;
int8_t x276 = -1;
static uint64_t x284 = 507488839LLU;
static int8_t x285 = INT8_MAX;
int8_t x287 = -1;
int16_t x301 = 3;
int32_t x309 = -1;
uint32_t x314 = UINT32_MAX;
int32_t x319 = -1;
static uint64_t x322 = 3030219LLU;
int32_t t61 = 854;
volatile uint64_t x327 = 116LLU;
volatile int32_t x330 = -4;
uint32_t x332 = 803158969U;
volatile int16_t x341 = INT16_MIN;
int32_t x357 = INT32_MAX;
static int16_t x360 = INT16_MIN;
int64_t x366 = INT64_MAX;
uint8_t x367 = 127U;
int32_t t68 = -86;
volatile int32_t x370 = INT32_MIN;
volatile uint64_t x372 = 25150905489LLU;
int32_t t71 = -14991;
static int8_t x385 = INT8_MIN;
static volatile int32_t t72 = 494549781;
int64_t x399 = INT64_MAX;
static int16_t x407 = INT16_MAX;
int8_t x408 = INT8_MIN;
static int32_t t76 = 0;
int8_t x409 = -1;
int8_t x410 = INT8_MAX;
static int64_t x419 = INT64_MIN;
static uint8_t x423 = UINT8_MAX;
static int8_t x426 = -57;
volatile int32_t t82 = 5;
int8_t x437 = -1;
volatile int32_t t83 = -234773;
static int64_t x458 = -227737575323LL;
uint64_t x459 = 19LLU;
int8_t x460 = -16;
volatile int32_t t86 = -1;
uint64_t x465 = UINT64_MAX;
static volatile int64_t x482 = -141000346449829356LL;
static uint8_t x489 = 26U;
int32_t t92 = -481170;
static uint64_t x493 = 606969LLU;
static int8_t x500 = 25;
int16_t x501 = INT16_MIN;
uint64_t x517 = UINT64_MAX;
static volatile int32_t t97 = 319907;
volatile int64_t x525 = -3406933910236622LL;
int32_t x528 = INT32_MIN;
uint32_t x529 = 10U;
uint16_t x530 = 1U;
volatile int32_t x533 = 185;
uint32_t x534 = 3300219U;
int64_t x536 = INT64_MAX;
volatile int64_t x540 = -6490LL;
volatile int8_t x542 = INT8_MIN;
static int64_t x546 = -3557769033647064627LL;
static volatile uint32_t x547 = 29030U;
volatile int32_t t103 = 449612;
int64_t x549 = INT64_MIN;
volatile int32_t x552 = 233781024;
int16_t x557 = INT16_MIN;
volatile int8_t x564 = -1;
int32_t x566 = INT32_MIN;
volatile int32_t t109 = 1580;
uint64_t x575 = 2095112272699LLU;
uint8_t x576 = 35U;
uint64_t x589 = UINT64_MAX;
volatile int16_t x599 = INT16_MIN;
static uint32_t x600 = UINT32_MAX;
uint8_t x602 = 1U;
int32_t x604 = INT32_MIN;
volatile int64_t x618 = INT64_MIN;
uint64_t x626 = UINT64_MAX;
volatile int32_t t117 = -366602376;
int32_t x633 = 14;
int16_t x635 = INT16_MAX;
int64_t x640 = -12921LL;
static int64_t x656 = -4141LL;
volatile int64_t x665 = -1LL;
volatile int64_t x676 = INT64_MAX;
static int8_t x686 = INT8_MAX;
int16_t x688 = 4955;
static int64_t x690 = INT64_MIN;
static volatile int32_t t128 = 25084280;
int8_t x710 = INT8_MIN;
int16_t x711 = INT16_MAX;
int64_t x715 = -1LL;
static int64_t x725 = INT64_MIN;
int8_t x730 = 0;
int32_t x735 = INT32_MAX;
int8_t x741 = INT8_MAX;
uint8_t x742 = 3U;
int32_t x748 = -1;
int64_t x750 = -1LL;
volatile int32_t t139 = 0;
int8_t x760 = -7;
int32_t t141 = 14;
static int16_t x768 = -1;
uint64_t x770 = 219530770571LLU;
int64_t x772 = -1LL;
static int32_t x778 = INT32_MIN;
volatile int64_t x781 = INT64_MIN;
uint8_t x796 = 6U;
static int32_t t148 = 15;
int32_t t150 = 56299;
volatile int32_t t151 = 91;
volatile uint32_t x812 = 187717U;
volatile uint32_t x827 = 1U;
int32_t t156 = -367204;
volatile int32_t t159 = 113974016;
uint16_t x860 = UINT16_MAX;
int8_t x866 = INT8_MAX;
static uint16_t x867 = 3312U;
volatile int32_t t162 = 436;
volatile uint64_t x872 = 2599175186LLU;
uint32_t x889 = UINT32_MAX;
int8_t x890 = INT8_MAX;
int8_t x899 = -15;
volatile int8_t x900 = 3;
int32_t t169 = -150204;
int64_t x909 = INT64_MAX;
static int8_t x918 = -1;
static int32_t t174 = -1160;
int32_t t175 = -2726;
int16_t x938 = 7;
int32_t x942 = INT32_MIN;
int32_t x945 = -1;
int8_t x948 = 1;
volatile int32_t t179 = 2483;
int16_t x949 = -1;
uint32_t x954 = 61086315U;
uint32_t x956 = 2U;
static int64_t x958 = 1434528343769722451LL;
int32_t t183 = -13;
int32_t t187 = -27647;
uint32_t x993 = 745274U;
volatile int32_t x995 = 42904973;
uint8_t x996 = 29U;
uint64_t x1006 = 2821004197LLU;
static volatile int32_t t190 = 54170;
volatile int64_t x1009 = 1090911627LL;
int64_t x1012 = -53096LL;
static volatile int32_t t191 = 1;
uint64_t x1019 = UINT64_MAX;
uint16_t x1037 = UINT16_MAX;


void f0(void) {
    	static volatile uint32_t x2 = 22273U;
	static uint32_t x4 = 56629053U;
	static volatile int32_t t0 = -133126;

    t0 = (x1!=(x2/(x3&x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x13 = 896642886;
	volatile int64_t x14 = -1LL;
	int32_t t1 = 47190680;

    t1 = (x13!=(x14/(x15&x16)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x17 = 44464U;
	uint32_t x20 = 2219262U;

    t2 = (x17!=(x18/(x19&x20)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x21 = UINT16_MAX;
	static int16_t x22 = -1;
	int64_t x23 = -1LL;
	static uint32_t x24 = 8322018U;
	volatile int32_t t3 = 408;

    t3 = (x21!=(x22/(x23&x24)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x29 = INT16_MIN;
	static uint32_t x30 = UINT32_MAX;
	int32_t x31 = 799;
	int8_t x32 = INT8_MIN;
	int32_t t4 = -1092;

    t4 = (x29!=(x30/(x31&x32)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x37 = -10;
	uint16_t x38 = UINT16_MAX;
	static int32_t x39 = -5;
	volatile int32_t t5 = 175449;

    t5 = (x37!=(x38/(x39&x40)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x41 = UINT8_MAX;
	static int8_t x42 = 22;
	volatile uint16_t x43 = UINT16_MAX;

    t6 = (x41!=(x42/(x43&x44)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x45 = -1LL;
	static int64_t x46 = -1LL;
	uint16_t x47 = UINT16_MAX;
	int16_t x48 = -1;
	static volatile int32_t t7 = 1190;

    t7 = (x45!=(x46/(x47&x48)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x49 = 126U;
	int16_t x50 = INT16_MAX;
	static int32_t x51 = -1;
	volatile uint16_t x52 = UINT16_MAX;
	int32_t t8 = 317177869;

    t8 = (x49!=(x50/(x51&x52)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x53 = 28U;
	static int16_t x54 = 157;
	volatile uint32_t x55 = 25356893U;
	int32_t t9 = -153;

    t9 = (x53!=(x54/(x55&x56)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x57 = 1951LLU;
	static int64_t x58 = INT64_MIN;
	uint32_t x59 = 532072U;
	uint64_t x60 = 9289868LLU;
	int32_t t10 = 1;

    t10 = (x57!=(x58/(x59&x60)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x61 = 659738184LLU;
	int8_t x62 = INT8_MAX;
	volatile int64_t x64 = -14586534LL;

    t11 = (x61!=(x62/(x63&x64)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x77 = -1;
	volatile int32_t x78 = INT32_MIN;
	int64_t x79 = -1LL;
	volatile uint64_t x80 = UINT64_MAX;
	volatile int32_t t12 = 62208;

    t12 = (x77!=(x78/(x79&x80)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint32_t x85 = UINT32_MAX;
	int16_t x87 = INT16_MAX;
	int8_t x88 = INT8_MIN;

    t13 = (x85!=(x86/(x87&x88)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x93 = INT8_MIN;
	uint8_t x94 = 31U;
	int64_t x95 = -1LL;
	int32_t x96 = -1;
	int32_t t14 = -4961393;

    t14 = (x93!=(x94/(x95&x96)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x98 = INT32_MIN;
	volatile int16_t x99 = INT16_MAX;
	volatile int64_t x100 = INT64_MAX;
	int32_t t15 = 31533;

    t15 = (x97!=(x98/(x99&x100)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x101 = UINT8_MAX;
	volatile int64_t x102 = -1LL;
	static int16_t x103 = -940;
	uint64_t x104 = 1234654LLU;

    t16 = (x101!=(x102/(x103&x104)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x110 = INT64_MIN;
	int16_t x111 = INT16_MIN;
	volatile int32_t t17 = -92328;

    t17 = (x109!=(x110/(x111&x112)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x115 = -332;
	volatile int16_t x116 = INT16_MIN;
	volatile int32_t t18 = -65;

    t18 = (x113!=(x114/(x115&x116)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint16_t x122 = UINT16_MAX;
	int16_t x123 = INT16_MIN;
	uint64_t x124 = UINT64_MAX;

    t19 = (x121!=(x122/(x123&x124)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x125 = INT16_MIN;
	int32_t x126 = INT32_MAX;
	volatile int32_t x127 = 25;
	int64_t x128 = INT64_MAX;
	static volatile int32_t t20 = -156295;

    t20 = (x125!=(x126/(x127&x128)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x129 = 61815375929LL;
	uint8_t x130 = 0U;
	uint64_t x131 = UINT64_MAX;
	uint16_t x132 = 535U;
	int32_t t21 = 937563;

    t21 = (x129!=(x130/(x131&x132)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x133 = INT8_MIN;
	volatile uint8_t x136 = UINT8_MAX;
	static volatile int32_t t22 = 324;

    t22 = (x133!=(x134/(x135&x136)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x137 = INT16_MIN;
	int64_t x138 = -19LL;
	int16_t x139 = -1;
	static volatile uint64_t x140 = 72553376LLU;
	volatile int32_t t23 = 1;

    t23 = (x137!=(x138/(x139&x140)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint32_t x141 = 982U;
	volatile uint8_t x143 = UINT8_MAX;
	volatile int32_t t24 = -1561427;

    t24 = (x141!=(x142/(x143&x144)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x145 = INT64_MIN;
	volatile int32_t x146 = -43666647;
	volatile int32_t x148 = INT32_MIN;
	int32_t t25 = 6289;

    t25 = (x145!=(x146/(x147&x148)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x149 = INT16_MAX;
	uint16_t x150 = UINT16_MAX;
	int8_t x151 = 4;
	volatile int64_t x152 = -1LL;
	volatile int32_t t26 = -31557746;

    t26 = (x149!=(x150/(x151&x152)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x155 = -3063;
	int64_t x156 = INT64_MIN;
	volatile int32_t t27 = 5615057;

    t27 = (x153!=(x154/(x155&x156)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x157 = 2;
	uint8_t x158 = 0U;
	int32_t x159 = 328434;
	uint64_t x160 = 101LLU;

    t28 = (x157!=(x158/(x159&x160)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint16_t x161 = 18108U;
	uint8_t x162 = 9U;
	int32_t x163 = -6;
	uint16_t x164 = 20U;
	volatile int32_t t29 = 38319839;

    t29 = (x161!=(x162/(x163&x164)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x169 = 3U;
	uint32_t x170 = 6407U;
	int16_t x171 = 1;
	volatile uint32_t x172 = 132628259U;
	static volatile int32_t t30 = 264700595;

    t30 = (x169!=(x170/(x171&x172)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x173 = INT16_MIN;
	int32_t x174 = 38969;
	uint8_t x175 = 55U;
	int32_t t31 = -1;

    t31 = (x173!=(x174/(x175&x176)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x178 = -1;
	uint64_t x179 = 22541838014LLU;
	int32_t x180 = -491318444;
	volatile int32_t t32 = 0;

    t32 = (x177!=(x178/(x179&x180)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x181 = INT32_MAX;
	volatile uint32_t x182 = 300363U;
	int64_t x183 = 1659034LL;
	int8_t x184 = -1;
	volatile int32_t t33 = -194532046;

    t33 = (x181!=(x182/(x183&x184)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x185 = INT8_MIN;
	volatile int8_t x186 = -1;
	int8_t x187 = INT8_MIN;
	int64_t x188 = INT64_MAX;
	static int32_t t34 = 220;

    t34 = (x185!=(x186/(x187&x188)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x191 = -1;
	int32_t x192 = INT32_MAX;
	int32_t t35 = -3;

    t35 = (x189!=(x190/(x191&x192)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x193 = 46U;
	int8_t x194 = -5;
	uint16_t x195 = UINT16_MAX;
	uint32_t x196 = 18401U;
	volatile int32_t t36 = -399;

    t36 = (x193!=(x194/(x195&x196)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x197 = 232568341364817LL;
	int8_t x198 = INT8_MIN;
	uint64_t x200 = 5LLU;

    t37 = (x197!=(x198/(x199&x200)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint32_t x201 = 17151U;
	int16_t x203 = -29;
	uint64_t x204 = UINT64_MAX;
	static volatile int32_t t38 = 85530492;

    t38 = (x201!=(x202/(x203&x204)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x205 = -12;
	int8_t x207 = INT8_MIN;
	int16_t x208 = INT16_MIN;
	int32_t t39 = 161038368;

    t39 = (x205!=(x206/(x207&x208)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x215 = -1;
	static uint8_t x216 = UINT8_MAX;
	volatile int32_t t40 = 2461973;

    t40 = (x213!=(x214/(x215&x216)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x217 = INT32_MIN;
	uint64_t x218 = UINT64_MAX;
	uint8_t x219 = UINT8_MAX;
	int32_t x220 = -10;

    t41 = (x217!=(x218/(x219&x220)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x222 = INT64_MIN;
	volatile int32_t x223 = 1;
	int64_t x224 = -1LL;
	volatile int32_t t42 = 31;

    t42 = (x221!=(x222/(x223&x224)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x229 = 2U;
	uint16_t x230 = 322U;
	volatile int32_t x231 = 3;
	uint64_t x232 = 467961LLU;

    t43 = (x229!=(x230/(x231&x232)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x233 = INT64_MAX;
	uint8_t x234 = 22U;
	static uint8_t x235 = 28U;
	uint16_t x236 = UINT16_MAX;
	int32_t t44 = -3;

    t44 = (x233!=(x234/(x235&x236)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x241 = -27;
	uint32_t x242 = 720447U;
	int32_t t45 = 20;

    t45 = (x241!=(x242/(x243&x244)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint16_t x245 = UINT16_MAX;
	uint64_t x246 = 0LLU;
	uint32_t x247 = UINT32_MAX;
	volatile int32_t t46 = 14826;

    t46 = (x245!=(x246/(x247&x248)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x249 = -1;
	int32_t x250 = INT32_MIN;
	int16_t x251 = INT16_MIN;
	volatile int32_t t47 = -373675713;

    t47 = (x249!=(x250/(x251&x252)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x253 = -1;
	int64_t x254 = INT64_MIN;
	int16_t x255 = -44;
	volatile int32_t t48 = 31617632;

    t48 = (x253!=(x254/(x255&x256)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x257 = INT64_MIN;
	int8_t x258 = INT8_MIN;
	int8_t x259 = -3;
	uint8_t x260 = UINT8_MAX;

    t49 = (x257!=(x258/(x259&x260)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x261 = 884013158400481LL;
	volatile int32_t x262 = INT32_MIN;
	volatile int64_t x263 = INT64_MAX;
	int8_t x264 = INT8_MIN;
	volatile int32_t t50 = 145353906;

    t50 = (x261!=(x262/(x263&x264)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x269 = INT16_MIN;
	int64_t x270 = 249085622LL;
	int32_t x271 = INT32_MIN;
	volatile int8_t x272 = -1;
	int32_t t51 = -21;

    t51 = (x269!=(x270/(x271&x272)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x274 = -1;
	volatile int32_t t52 = -107431;

    t52 = (x273!=(x274/(x275&x276)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x277 = -1;
	int16_t x278 = INT16_MAX;
	static volatile int8_t x279 = INT8_MIN;
	int16_t x280 = INT16_MIN;
	int32_t t53 = -99859;

    t53 = (x277!=(x278/(x279&x280)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x281 = INT64_MIN;
	int32_t x282 = -1;
	uint64_t x283 = 446336660278817LLU;
	int32_t t54 = 1088083;

    t54 = (x281!=(x282/(x283&x284)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x286 = INT8_MIN;
	int8_t x288 = INT8_MIN;
	int32_t t55 = -866843772;

    t55 = (x285!=(x286/(x287&x288)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x289 = INT16_MAX;
	uint32_t x290 = 504660137U;
	static volatile int32_t x291 = -1;
	int64_t x292 = 8282945LL;
	static int32_t t56 = 117185149;

    t56 = (x289!=(x290/(x291&x292)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x302 = INT32_MAX;
	volatile int32_t x303 = 20151648;
	int32_t x304 = INT32_MAX;
	volatile int32_t t57 = -19083;

    t57 = (x301!=(x302/(x303&x304)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x310 = INT32_MAX;
	uint64_t x311 = 17542991981808187LLU;
	uint16_t x312 = 121U;
	int32_t t58 = -35;

    t58 = (x309!=(x310/(x311&x312)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x313 = 0U;
	volatile int64_t x315 = INT64_MAX;
	uint32_t x316 = 9193U;
	static int32_t t59 = 25990092;

    t59 = (x313!=(x314/(x315&x316)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x317 = -1;
	static volatile int64_t x318 = -26811707120LL;
	uint32_t x320 = 546U;
	volatile int32_t t60 = -24321836;

    t60 = (x317!=(x318/(x319&x320)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x321 = 36U;
	int16_t x323 = INT16_MIN;
	int64_t x324 = -564729448963989740LL;

    t61 = (x321!=(x322/(x323&x324)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint32_t x325 = UINT32_MAX;
	volatile int32_t x326 = -134;
	int64_t x328 = -1LL;
	int32_t t62 = 2207;

    t62 = (x325!=(x326/(x327&x328)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x329 = -1;
	static uint64_t x331 = 30LLU;
	volatile int32_t t63 = 380;

    t63 = (x329!=(x330/(x331&x332)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x333 = 27446356LL;
	int8_t x334 = INT8_MIN;
	volatile uint32_t x335 = 36066U;
	int8_t x336 = -44;
	volatile int32_t t64 = -8936;

    t64 = (x333!=(x334/(x335&x336)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x342 = UINT64_MAX;
	int8_t x343 = -1;
	int16_t x344 = INT16_MIN;
	volatile int32_t t65 = 19;

    t65 = (x341!=(x342/(x343&x344)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x345 = -1;
	int64_t x346 = -1LL;
	int16_t x347 = -15;
	static int16_t x348 = 504;
	volatile int32_t t66 = -89;

    t66 = (x345!=(x346/(x347&x348)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x358 = INT64_MIN;
	int32_t x359 = INT32_MAX;
	volatile int32_t t67 = 397333;

    t67 = (x357!=(x358/(x359&x360)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x365 = INT8_MAX;
	static int8_t x368 = -1;

    t68 = (x365!=(x366/(x367&x368)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x369 = -1;
	uint32_t x371 = 819U;
	static volatile int32_t t69 = 15;

    t69 = (x369!=(x370/(x371&x372)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x373 = INT16_MIN;
	static int64_t x374 = INT64_MIN;
	int16_t x375 = INT16_MIN;
	int16_t x376 = INT16_MIN;
	static volatile int32_t t70 = 589826823;

    t70 = (x373!=(x374/(x375&x376)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x381 = -6989001119LL;
	int16_t x382 = -1;
	volatile int8_t x383 = INT8_MIN;
	int64_t x384 = INT64_MIN;

    t71 = (x381!=(x382/(x383&x384)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x386 = 199U;
	int16_t x387 = INT16_MAX;
	int32_t x388 = -2;

    t72 = (x385!=(x386/(x387&x388)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x389 = 0U;
	int8_t x390 = INT8_MIN;
	int8_t x391 = -1;
	int32_t x392 = 1253172;
	volatile int32_t t73 = 65230385;

    t73 = (x389!=(x390/(x391&x392)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x393 = UINT32_MAX;
	uint64_t x394 = 3LLU;
	int32_t x395 = INT32_MIN;
	uint32_t x396 = UINT32_MAX;
	int32_t t74 = 1503056;

    t74 = (x393!=(x394/(x395&x396)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x397 = INT64_MIN;
	volatile uint32_t x398 = UINT32_MAX;
	uint32_t x400 = 3696437U;
	static volatile int32_t t75 = -1;

    t75 = (x397!=(x398/(x399&x400)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x405 = 0;
	int8_t x406 = INT8_MAX;

    t76 = (x405!=(x406/(x407&x408)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x411 = INT8_MIN;
	volatile int8_t x412 = -3;
	volatile int32_t t77 = -59467543;

    t77 = (x409!=(x410/(x411&x412)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x413 = INT16_MIN;
	static int32_t x414 = 50091;
	static int8_t x415 = -2;
	int16_t x416 = INT16_MIN;
	volatile int32_t t78 = 6;

    t78 = (x413!=(x414/(x415&x416)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x417 = INT16_MAX;
	int64_t x418 = -8409665725LL;
	int16_t x420 = -15332;
	int32_t t79 = -1;

    t79 = (x417!=(x418/(x419&x420)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x421 = INT64_MAX;
	uint8_t x422 = UINT8_MAX;
	static int8_t x424 = INT8_MIN;
	static volatile int32_t t80 = -991208892;

    t80 = (x421!=(x422/(x423&x424)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x425 = UINT32_MAX;
	int32_t x427 = INT32_MIN;
	volatile int8_t x428 = -1;
	volatile int32_t t81 = 9;

    t81 = (x425!=(x426/(x427&x428)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x429 = INT16_MAX;
	uint16_t x430 = 283U;
	volatile int32_t x431 = INT32_MIN;
	int64_t x432 = INT64_MAX;

    t82 = (x429!=(x430/(x431&x432)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x438 = 106;
	int8_t x439 = -2;
	static uint16_t x440 = 5U;

    t83 = (x437!=(x438/(x439&x440)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint64_t x441 = UINT64_MAX;
	static volatile int64_t x442 = INT64_MIN;
	uint32_t x443 = UINT32_MAX;
	int32_t x444 = INT32_MIN;
	volatile int32_t t84 = 322;

    t84 = (x441!=(x442/(x443&x444)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x445 = -1;
	int64_t x446 = INT64_MIN;
	static uint64_t x447 = 115181510250941020LLU;
	uint16_t x448 = UINT16_MAX;
	int32_t t85 = 56;

    t85 = (x445!=(x446/(x447&x448)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x457 = -14;

    t86 = (x457!=(x458/(x459&x460)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x466 = 6012LL;
	uint64_t x467 = 1392357LLU;
	int8_t x468 = -1;
	volatile int32_t t87 = -3468479;

    t87 = (x465!=(x466/(x467&x468)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x469 = UINT64_MAX;
	uint16_t x470 = 0U;
	static int16_t x471 = 187;
	uint8_t x472 = 13U;
	int32_t t88 = -487;

    t88 = (x469!=(x470/(x471&x472)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x477 = UINT64_MAX;
	uint64_t x478 = 9633LLU;
	int8_t x479 = -1;
	volatile uint16_t x480 = 29244U;
	volatile int32_t t89 = 1;

    t89 = (x477!=(x478/(x479&x480)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x481 = -50;
	uint8_t x483 = 53U;
	static volatile uint64_t x484 = 3766314401618851129LLU;
	volatile int32_t t90 = -5;

    t90 = (x481!=(x482/(x483&x484)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x485 = -1LL;
	volatile uint32_t x486 = UINT32_MAX;
	uint8_t x487 = UINT8_MAX;
	int32_t x488 = -1;
	int32_t t91 = -1;

    t91 = (x485!=(x486/(x487&x488)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x490 = INT64_MIN;
	int64_t x491 = -1LL;
	static int32_t x492 = INT32_MIN;

    t92 = (x489!=(x490/(x491&x492)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x494 = INT64_MAX;
	static int8_t x495 = INT8_MIN;
	uint64_t x496 = 979580099598130041LLU;
	volatile int32_t t93 = -13;

    t93 = (x493!=(x494/(x495&x496)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x497 = INT16_MIN;
	int16_t x498 = -1;
	int16_t x499 = 11280;
	static volatile int32_t t94 = -2;

    t94 = (x497!=(x498/(x499&x500)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int8_t x502 = INT8_MAX;
	volatile uint64_t x503 = 13787731LLU;
	int16_t x504 = INT16_MIN;
	int32_t t95 = 3905498;

    t95 = (x501!=(x502/(x503&x504)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x509 = INT64_MAX;
	int64_t x510 = INT64_MAX;
	uint16_t x511 = UINT16_MAX;
	static uint64_t x512 = 10449739651769332LLU;
	int32_t t96 = -58977;

    t96 = (x509!=(x510/(x511&x512)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x518 = -3;
	volatile int16_t x519 = INT16_MIN;
	int32_t x520 = -1;

    t97 = (x517!=(x518/(x519&x520)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x526 = INT64_MAX;
	int8_t x527 = -1;
	volatile int32_t t98 = -380;

    t98 = (x525!=(x526/(x527&x528)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x531 = UINT8_MAX;
	int64_t x532 = -1LL;
	int32_t t99 = 26;

    t99 = (x529!=(x530/(x531&x532)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x535 = UINT32_MAX;
	int32_t t100 = 2;

    t100 = (x533!=(x534/(x535&x536)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x537 = INT32_MAX;
	uint64_t x538 = 247733LLU;
	static int32_t x539 = INT32_MAX;
	int32_t t101 = -375;

    t101 = (x537!=(x538/(x539&x540)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x541 = UINT64_MAX;
	int32_t x543 = INT32_MAX;
	uint16_t x544 = 6U;
	static volatile int32_t t102 = -4830618;

    t102 = (x541!=(x542/(x543&x544)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x545 = INT32_MIN;
	int64_t x548 = -1480873792LL;

    t103 = (x545!=(x546/(x547&x548)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x550 = -55;
	int8_t x551 = -1;
	int32_t t104 = 1;

    t104 = (x549!=(x550/(x551&x552)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x553 = INT32_MIN;
	int8_t x554 = -1;
	int32_t x555 = INT32_MAX;
	volatile int32_t x556 = 8;
	int32_t t105 = -42;

    t105 = (x553!=(x554/(x555&x556)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x558 = INT8_MAX;
	uint32_t x559 = 37185U;
	static uint8_t x560 = UINT8_MAX;
	volatile int32_t t106 = 0;

    t106 = (x557!=(x558/(x559&x560)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x561 = INT8_MIN;
	int16_t x562 = 791;
	static int8_t x563 = INT8_MIN;
	int32_t t107 = 50026;

    t107 = (x561!=(x562/(x563&x564)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x565 = INT32_MIN;
	int32_t x567 = -6;
	static int16_t x568 = INT16_MIN;
	int32_t t108 = 19630313;

    t108 = (x565!=(x566/(x567&x568)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x569 = INT16_MAX;
	uint16_t x570 = 4656U;
	int16_t x571 = INT16_MAX;
	volatile uint8_t x572 = 2U;

    t109 = (x569!=(x570/(x571&x572)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x573 = -1LL;
	int32_t x574 = -1;
	static volatile int32_t t110 = 473998;

    t110 = (x573!=(x574/(x575&x576)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x590 = -1;
	int16_t x591 = -8;
	uint64_t x592 = 4055935LLU;
	int32_t t111 = 594958171;

    t111 = (x589!=(x590/(x591&x592)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x597 = -16002;
	int64_t x598 = INT64_MIN;
	int32_t t112 = -2289502;

    t112 = (x597!=(x598/(x599&x600)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x601 = INT16_MIN;
	int64_t x603 = -330703719058LL;
	volatile int32_t t113 = -1037;

    t113 = (x601!=(x602/(x603&x604)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x609 = -1;
	int8_t x610 = 1;
	volatile int16_t x611 = INT16_MIN;
	static int8_t x612 = -1;
	int32_t t114 = 53;

    t114 = (x609!=(x610/(x611&x612)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x613 = INT32_MIN;
	static volatile int16_t x614 = 47;
	int8_t x615 = INT8_MAX;
	static int8_t x616 = 21;
	static int32_t t115 = 110085;

    t115 = (x613!=(x614/(x615&x616)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x617 = -2;
	static uint64_t x619 = UINT64_MAX;
	int16_t x620 = 2;
	volatile int32_t t116 = 14;

    t116 = (x617!=(x618/(x619&x620)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x625 = 18U;
	static uint64_t x627 = 941744346LLU;
	static int32_t x628 = INT32_MAX;

    t117 = (x625!=(x626/(x627&x628)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x629 = INT8_MIN;
	int32_t x630 = INT32_MIN;
	int32_t x631 = 4138;
	static volatile uint8_t x632 = UINT8_MAX;
	volatile int32_t t118 = 199;

    t118 = (x629!=(x630/(x631&x632)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x634 = UINT16_MAX;
	uint32_t x636 = UINT32_MAX;
	int32_t t119 = -17124;

    t119 = (x633!=(x634/(x635&x636)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x637 = INT32_MAX;
	static int64_t x638 = -1LL;
	int64_t x639 = -1LL;
	static int32_t t120 = 4162;

    t120 = (x637!=(x638/(x639&x640)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint64_t x653 = UINT64_MAX;
	uint64_t x654 = 7LLU;
	int8_t x655 = INT8_MIN;
	static volatile int32_t t121 = -6858503;

    t121 = (x653!=(x654/(x655&x656)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint32_t x657 = 21U;
	static volatile int64_t x658 = 21343450074LL;
	int64_t x659 = 140686364141060LL;
	static int16_t x660 = 1163;
	volatile int32_t t122 = 28244295;

    t122 = (x657!=(x658/(x659&x660)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x666 = INT32_MAX;
	int8_t x667 = INT8_MIN;
	int16_t x668 = INT16_MIN;
	int32_t t123 = 2005696;

    t123 = (x665!=(x666/(x667&x668)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint32_t x673 = 16561U;
	int64_t x674 = INT64_MIN;
	int64_t x675 = -1LL;
	volatile int32_t t124 = 0;

    t124 = (x673!=(x674/(x675&x676)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x681 = 31U;
	int64_t x682 = -169809801429LL;
	uint64_t x683 = 56634LLU;
	uint64_t x684 = UINT64_MAX;
	volatile int32_t t125 = -1458;

    t125 = (x681!=(x682/(x683&x684)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x685 = -1;
	static int32_t x687 = -39386018;
	volatile int32_t t126 = 0;

    t126 = (x685!=(x686/(x687&x688)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x689 = INT64_MIN;
	volatile int16_t x691 = -27;
	uint8_t x692 = UINT8_MAX;
	static int32_t t127 = -125222716;

    t127 = (x689!=(x690/(x691&x692)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x705 = -2;
	uint8_t x706 = 108U;
	int32_t x707 = -8;
	static volatile int16_t x708 = -1;

    t128 = (x705!=(x706/(x707&x708)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x709 = INT64_MAX;
	uint32_t x712 = UINT32_MAX;
	int32_t t129 = -72;

    t129 = (x709!=(x710/(x711&x712)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x713 = -1;
	static uint8_t x714 = 4U;
	static volatile uint32_t x716 = 226844831U;
	int32_t t130 = 6131;

    t130 = (x713!=(x714/(x715&x716)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x717 = -1;
	uint16_t x718 = 204U;
	int32_t x719 = INT32_MIN;
	int8_t x720 = INT8_MIN;
	volatile int32_t t131 = -1;

    t131 = (x717!=(x718/(x719&x720)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x721 = 42688842848800699LL;
	static volatile int64_t x722 = 76LL;
	int64_t x723 = -1LL;
	int64_t x724 = 15LL;
	int32_t t132 = 8;

    t132 = (x721!=(x722/(x723&x724)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x726 = 10485734106LL;
	volatile int16_t x727 = INT16_MIN;
	volatile int32_t x728 = -6;
	int32_t t133 = -80;

    t133 = (x725!=(x726/(x727&x728)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x729 = INT16_MAX;
	int64_t x731 = INT64_MAX;
	uint16_t x732 = 10844U;
	int32_t t134 = 856924;

    t134 = (x729!=(x730/(x731&x732)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x733 = -98;
	volatile int8_t x734 = INT8_MAX;
	int16_t x736 = INT16_MIN;
	volatile int32_t t135 = -16;

    t135 = (x733!=(x734/(x735&x736)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint16_t x737 = 7950U;
	int64_t x738 = -1LL;
	int64_t x739 = -226LL;
	int32_t x740 = -32;
	int32_t t136 = -2205124;

    t136 = (x737!=(x738/(x739&x740)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x743 = 12U;
	uint64_t x744 = UINT64_MAX;
	volatile int32_t t137 = 5;

    t137 = (x741!=(x742/(x743&x744)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x745 = 3LLU;
	volatile uint8_t x746 = UINT8_MAX;
	int64_t x747 = -2637744790LL;
	int32_t t138 = 117750;

    t138 = (x745!=(x746/(x747&x748)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint32_t x749 = 4066080U;
	uint8_t x751 = 76U;
	int64_t x752 = 3059024400791562LL;

    t139 = (x749!=(x750/(x751&x752)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint32_t x757 = 97U;
	int64_t x758 = -1LL;
	volatile int8_t x759 = INT8_MAX;
	int32_t t140 = -1496;

    t140 = (x757!=(x758/(x759&x760)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x761 = 1657671750U;
	uint32_t x762 = 1870553U;
	static int32_t x763 = 148788;
	volatile uint8_t x764 = 59U;

    t141 = (x761!=(x762/(x763&x764)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int64_t x765 = -1LL;
	uint8_t x766 = UINT8_MAX;
	volatile uint32_t x767 = 300U;
	static volatile int32_t t142 = -1842510;

    t142 = (x765!=(x766/(x767&x768)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x769 = INT32_MIN;
	uint16_t x771 = 80U;
	volatile int32_t t143 = 445741817;

    t143 = (x769!=(x770/(x771&x772)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x773 = 1U;
	int64_t x774 = INT64_MIN;
	int8_t x775 = -36;
	static int16_t x776 = -1;
	volatile int32_t t144 = 476812;

    t144 = (x773!=(x774/(x775&x776)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x777 = UINT8_MAX;
	uint64_t x779 = 4LLU;
	int64_t x780 = INT64_MAX;
	int32_t t145 = -491;

    t145 = (x777!=(x778/(x779&x780)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x782 = UINT8_MAX;
	volatile int16_t x783 = INT16_MIN;
	static volatile int32_t x784 = -60061;
	int32_t t146 = 46438524;

    t146 = (x781!=(x782/(x783&x784)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x785 = INT16_MAX;
	static volatile int32_t x786 = 1217774;
	volatile int64_t x787 = 29635064LL;
	int16_t x788 = -1788;
	volatile int32_t t147 = -15110;

    t147 = (x785!=(x786/(x787&x788)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x793 = INT16_MIN;
	int8_t x794 = 0;
	int16_t x795 = INT16_MAX;

    t148 = (x793!=(x794/(x795&x796)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x797 = INT16_MIN;
	static uint8_t x798 = 123U;
	int8_t x799 = -1;
	int16_t x800 = -1;
	volatile int32_t t149 = -1008023;

    t149 = (x797!=(x798/(x799&x800)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x801 = -282765099837LL;
	int8_t x802 = 23;
	static int32_t x803 = INT32_MAX;
	int16_t x804 = -1;

    t150 = (x801!=(x802/(x803&x804)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x805 = -1LL;
	volatile uint64_t x806 = 4063782933755671LLU;
	int64_t x807 = INT64_MAX;
	uint64_t x808 = 711163517LLU;

    t151 = (x805!=(x806/(x807&x808)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x809 = UINT64_MAX;
	int8_t x810 = -1;
	int32_t x811 = INT32_MAX;
	static int32_t t152 = 3810475;

    t152 = (x809!=(x810/(x811&x812)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x813 = 12;
	uint8_t x814 = UINT8_MAX;
	int8_t x815 = INT8_MAX;
	uint16_t x816 = UINT16_MAX;
	static int32_t t153 = 2641;

    t153 = (x813!=(x814/(x815&x816)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x817 = INT32_MAX;
	int8_t x818 = 2;
	int64_t x819 = -55027866135689LL;
	static uint16_t x820 = 144U;
	int32_t t154 = -13231;

    t154 = (x817!=(x818/(x819&x820)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x825 = INT64_MAX;
	int64_t x826 = 1944LL;
	volatile uint16_t x828 = 4749U;
	static volatile int32_t t155 = -3606346;

    t155 = (x825!=(x826/(x827&x828)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x837 = INT16_MIN;
	uint32_t x838 = UINT32_MAX;
	int32_t x839 = -2370;
	uint8_t x840 = 9U;

    t156 = (x837!=(x838/(x839&x840)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x841 = 0;
	int32_t x842 = -1;
	int64_t x843 = -239859607318062611LL;
	int8_t x844 = INT8_MIN;
	volatile int32_t t157 = 114;

    t157 = (x841!=(x842/(x843&x844)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x849 = 46;
	volatile int32_t x850 = -1;
	static uint16_t x851 = 1944U;
	volatile int16_t x852 = 94;
	int32_t t158 = 347822;

    t158 = (x849!=(x850/(x851&x852)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x853 = 87U;
	int16_t x854 = INT16_MIN;
	uint64_t x855 = 16702800663697LLU;
	uint8_t x856 = 51U;

    t159 = (x853!=(x854/(x855&x856)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x857 = UINT16_MAX;
	int64_t x858 = INT64_MAX;
	uint8_t x859 = 1U;
	static int32_t t160 = -428;

    t160 = (x857!=(x858/(x859&x860)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x861 = -1;
	static int64_t x862 = 115850LL;
	uint64_t x863 = 2062953791339106073LLU;
	uint16_t x864 = 19612U;
	static volatile int32_t t161 = -240;

    t161 = (x861!=(x862/(x863&x864)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x865 = INT16_MIN;
	int8_t x868 = INT8_MIN;

    t162 = (x865!=(x866/(x867&x868)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x869 = INT64_MIN;
	int8_t x870 = -42;
	int8_t x871 = INT8_MIN;
	int32_t t163 = 51497;

    t163 = (x869!=(x870/(x871&x872)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x873 = -1;
	static uint32_t x874 = 1255U;
	uint64_t x875 = UINT64_MAX;
	static int64_t x876 = 9815428314235943LL;
	volatile int32_t t164 = 954636801;

    t164 = (x873!=(x874/(x875&x876)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x877 = 5076LLU;
	int8_t x878 = -1;
	static int32_t x879 = INT32_MAX;
	int8_t x880 = INT8_MAX;
	int32_t t165 = 1;

    t165 = (x877!=(x878/(x879&x880)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint32_t x885 = 63032U;
	uint32_t x886 = UINT32_MAX;
	volatile int16_t x887 = -1;
	int32_t x888 = 520453909;
	volatile int32_t t166 = -427222;

    t166 = (x885!=(x886/(x887&x888)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x891 = 54846685;
	int16_t x892 = INT16_MIN;
	static volatile int32_t t167 = -3;

    t167 = (x889!=(x890/(x891&x892)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x897 = -1;
	int8_t x898 = -1;
	int32_t t168 = -166434;

    t168 = (x897!=(x898/(x899&x900)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x901 = INT8_MIN;
	int32_t x902 = 771196;
	uint16_t x903 = 3771U;
	uint16_t x904 = 1789U;

    t169 = (x901!=(x902/(x903&x904)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x905 = 306298923371558LL;
	uint16_t x906 = UINT16_MAX;
	int8_t x907 = INT8_MIN;
	int32_t x908 = INT32_MIN;
	int32_t t170 = -1356428;

    t170 = (x905!=(x906/(x907&x908)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x910 = 26;
	uint16_t x911 = 1358U;
	int8_t x912 = INT8_MIN;
	volatile int32_t t171 = -5794;

    t171 = (x909!=(x910/(x911&x912)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x913 = INT16_MIN;
	uint64_t x914 = 3929515311LLU;
	uint64_t x915 = 235310196LLU;
	int16_t x916 = INT16_MIN;
	volatile int32_t t172 = -56945;

    t172 = (x913!=(x914/(x915&x916)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x917 = INT64_MIN;
	static int16_t x919 = 367;
	int64_t x920 = INT64_MAX;
	int32_t t173 = -9592234;

    t173 = (x917!=(x918/(x919&x920)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint32_t x921 = 831U;
	int64_t x922 = 43LL;
	volatile int64_t x923 = -1LL;
	volatile uint64_t x924 = 158280979929LLU;

    t174 = (x921!=(x922/(x923&x924)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x929 = -2826924471755147LL;
	int16_t x930 = INT16_MIN;
	int32_t x931 = 1863943;
	int8_t x932 = INT8_MIN;

    t175 = (x929!=(x930/(x931&x932)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint32_t x933 = UINT32_MAX;
	int16_t x934 = INT16_MIN;
	int32_t x935 = INT32_MAX;
	int64_t x936 = INT64_MAX;
	static int32_t t176 = 868783869;

    t176 = (x933!=(x934/(x935&x936)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x937 = INT32_MIN;
	volatile uint64_t x939 = UINT64_MAX;
	volatile uint8_t x940 = UINT8_MAX;
	volatile int32_t t177 = -18645139;

    t177 = (x937!=(x938/(x939&x940)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x941 = -716599311941LL;
	volatile int64_t x943 = -1341299255LL;
	uint32_t x944 = UINT32_MAX;
	static int32_t t178 = 93708;

    t178 = (x941!=(x942/(x943&x944)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x946 = -1LL;
	static int16_t x947 = INT16_MAX;

    t179 = (x945!=(x946/(x947&x948)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x950 = 441U;
	static volatile int8_t x951 = INT8_MIN;
	uint8_t x952 = UINT8_MAX;
	int32_t t180 = -1106616;

    t180 = (x949!=(x950/(x951&x952)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x953 = INT8_MIN;
	volatile uint32_t x955 = UINT32_MAX;
	int32_t t181 = 10496749;

    t181 = (x953!=(x954/(x955&x956)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint16_t x957 = 5225U;
	int64_t x959 = INT64_MAX;
	volatile int16_t x960 = INT16_MAX;
	volatile int32_t t182 = -3956598;

    t182 = (x957!=(x958/(x959&x960)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x961 = -1;
	uint8_t x962 = 0U;
	int8_t x963 = 4;
	volatile uint16_t x964 = UINT16_MAX;

    t183 = (x961!=(x962/(x963&x964)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x969 = UINT16_MAX;
	uint32_t x970 = UINT32_MAX;
	static uint16_t x971 = UINT16_MAX;
	volatile uint64_t x972 = UINT64_MAX;
	int32_t t184 = -7;

    t184 = (x969!=(x970/(x971&x972)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile uint16_t x973 = 447U;
	static int32_t x974 = -1;
	static volatile int32_t x975 = -192748785;
	int32_t x976 = 12223;
	int32_t t185 = 10271426;

    t185 = (x973!=(x974/(x975&x976)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x985 = UINT64_MAX;
	int16_t x986 = INT16_MAX;
	static int32_t x987 = -1;
	uint8_t x988 = UINT8_MAX;
	int32_t t186 = -7;

    t186 = (x985!=(x986/(x987&x988)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x989 = 3U;
	int8_t x990 = INT8_MAX;
	uint8_t x991 = UINT8_MAX;
	static int64_t x992 = -26726LL;

    t187 = (x989!=(x990/(x991&x992)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x994 = -1;
	static int32_t t188 = 2153;

    t188 = (x993!=(x994/(x995&x996)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x1001 = 3LLU;
	static int64_t x1002 = -932583910608LL;
	int32_t x1003 = 210416726;
	uint32_t x1004 = UINT32_MAX;
	static int32_t t189 = -1;

    t189 = (x1001!=(x1002/(x1003&x1004)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint8_t x1005 = UINT8_MAX;
	int64_t x1007 = INT64_MIN;
	int16_t x1008 = -1;

    t190 = (x1005!=(x1006/(x1007&x1008)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x1010 = UINT32_MAX;
	static int64_t x1011 = -643960922LL;

    t191 = (x1009!=(x1010/(x1011&x1012)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x1013 = -1;
	int32_t x1014 = 7;
	int32_t x1015 = INT32_MIN;
	int32_t x1016 = -63283039;
	static volatile int32_t t192 = 44174770;

    t192 = (x1013!=(x1014/(x1015&x1016)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x1017 = INT64_MAX;
	int32_t x1018 = -1;
	int16_t x1020 = INT16_MIN;
	volatile int32_t t193 = 5848382;

    t193 = (x1017!=(x1018/(x1019&x1020)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x1021 = -389323776950545464LL;
	volatile int16_t x1022 = 7661;
	static uint8_t x1023 = 21U;
	static int8_t x1024 = -1;
	volatile int32_t t194 = 3928129;

    t194 = (x1021!=(x1022/(x1023&x1024)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x1025 = INT8_MIN;
	uint64_t x1026 = 50546695125873LLU;
	volatile int8_t x1027 = INT8_MAX;
	int16_t x1028 = -1;
	volatile int32_t t195 = 3908045;

    t195 = (x1025!=(x1026/(x1027&x1028)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x1029 = -3396270;
	static int32_t x1030 = INT32_MAX;
	int16_t x1031 = INT16_MAX;
	volatile int32_t x1032 = -1;
	volatile int32_t t196 = -144716;

    t196 = (x1029!=(x1030/(x1031&x1032)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x1033 = UINT8_MAX;
	int64_t x1034 = INT64_MIN;
	uint64_t x1035 = UINT64_MAX;
	uint32_t x1036 = 1U;
	int32_t t197 = 1341457;

    t197 = (x1033!=(x1034/(x1035&x1036)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x1038 = -27;
	int32_t x1039 = INT32_MIN;
	static volatile int64_t x1040 = INT64_MAX;
	volatile int32_t t198 = 308;

    t198 = (x1037!=(x1038/(x1039&x1040)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1041 = -15604886427689961LL;
	int8_t x1042 = INT8_MIN;
	volatile int16_t x1043 = INT16_MAX;
	int8_t x1044 = 11;
	volatile int32_t t199 = 2;

    t199 = (x1041!=(x1042/(x1043&x1044)));

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


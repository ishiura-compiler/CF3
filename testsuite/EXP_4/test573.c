
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

uint8_t x8 = UINT8_MAX;
volatile uint64_t t2 = 322LLU;
int64_t x21 = INT64_MAX;
static int32_t x26 = INT32_MIN;
uint32_t x32 = 0U;
int32_t x33 = -1;
int8_t x36 = -1;
int64_t x38 = INT64_MAX;
static volatile int64_t x42 = INT64_MAX;
uint64_t x59 = 28LLU;
volatile int32_t x60 = -1;
int32_t x62 = 10323;
static uint64_t x64 = 33425078149065028LLU;
static volatile uint64_t t12 = UINT64_MAX;
static uint64_t x72 = 2858996270LLU;
volatile uint8_t x78 = 7U;
volatile uint64_t x87 = UINT64_MAX;
volatile uint64_t t17 = 9815775LLU;
uint64_t x91 = UINT64_MAX;
int8_t x102 = INT8_MIN;
static uint16_t x103 = 42U;
int64_t x106 = -1LL;
static volatile uint32_t x108 = 2867U;
volatile uint32_t x117 = UINT32_MAX;
uint64_t t23 = 8730193619LLU;
static uint64_t x125 = 5587736LLU;
int16_t x127 = -1;
static volatile uint64_t t24 = UINT64_MAX;
uint32_t x131 = UINT32_MAX;
int8_t x132 = INT8_MAX;
static int8_t x139 = INT8_MIN;
static int8_t x143 = -1;
volatile int8_t x144 = INT8_MIN;
uint32_t x147 = 38385U;
int32_t t29 = -3;
uint8_t x174 = UINT8_MAX;
static int16_t x176 = INT16_MIN;
int64_t x177 = -1143315276791653LL;
volatile int8_t x178 = -1;
volatile int32_t x185 = INT32_MIN;
int64_t x188 = -1LL;
int64_t t34 = -674334248957199733LL;
int16_t x197 = -100;
static volatile int16_t x198 = -4;
uint32_t t37 = UINT32_MAX;
volatile int16_t x215 = -12572;
int8_t x224 = -1;
int64_t x230 = INT64_MAX;
uint64_t x231 = 309539849619704LLU;
static uint64_t x239 = 110LLU;
volatile uint16_t x247 = 32529U;
static uint32_t x252 = 1403924669U;
volatile int64_t t48 = -119527167571508LL;
int8_t x253 = -8;
uint64_t x255 = 237376454329589263LLU;
volatile uint64_t t52 = 171430503LLU;
volatile uint32_t x273 = 31U;
int64_t t53 = -32711854LL;
int8_t x292 = INT8_MAX;
int64_t x304 = -387589201941807LL;
uint64_t t58 = UINT64_MAX;
uint64_t x311 = 1365491973881455LLU;
int64_t x312 = -1LL;
static volatile uint64_t t59 = 4020171404113LLU;
static uint32_t x314 = UINT32_MAX;
int32_t x326 = INT32_MAX;
int32_t x330 = INT32_MIN;
int64_t t63 = -92261966672833LL;
int16_t x333 = -1;
static volatile int32_t x341 = INT32_MAX;
int64_t x343 = -1LL;
int16_t x351 = 45;
volatile uint64_t t67 = 7698833415133LLU;
volatile int32_t x368 = -1;
volatile int32_t t70 = -192;
int16_t x377 = -4300;
static volatile uint64_t t71 = 4105941LLU;
volatile int16_t x392 = INT16_MIN;
volatile uint16_t x405 = UINT16_MAX;
static uint64_t x407 = 2LLU;
uint32_t x413 = UINT32_MAX;
int16_t x421 = INT16_MIN;
volatile int32_t t78 = -98;
uint8_t x459 = UINT8_MAX;
static int64_t x461 = INT64_MIN;
int8_t x468 = 22;
int8_t x469 = 6;
int8_t x476 = INT8_MAX;
int32_t x481 = -1;
static volatile uint32_t t90 = UINT32_MAX;
volatile int64_t x486 = -1LL;
int16_t x493 = -1;
int64_t x501 = INT64_MAX;
volatile int8_t x508 = -3;
volatile int8_t x509 = 1;
volatile int64_t x521 = INT64_MAX;
uint16_t x528 = 1U;
uint64_t x533 = UINT64_MAX;
volatile int8_t x537 = 1;
uint32_t x539 = 631046114U;
static int8_t x542 = INT8_MAX;
uint8_t x545 = 1U;
uint16_t x553 = UINT16_MAX;
volatile int32_t x555 = INT32_MIN;
int32_t x566 = -40;
int8_t x567 = INT8_MIN;
uint8_t x568 = 38U;
volatile int32_t x577 = -8932552;
uint32_t t110 = UINT32_MAX;
int8_t x618 = INT8_MIN;
volatile int8_t x626 = INT8_MIN;
volatile int16_t x635 = INT16_MIN;
static int64_t x642 = -153790892LL;
volatile int32_t x646 = INT32_MIN;
static int64_t x647 = 1486386LL;
int8_t x652 = -1;
static volatile int64_t x657 = -9LL;
int8_t x660 = -1;
int8_t x661 = -1;
int32_t x662 = -1;
int64_t x663 = 5266405100745103LL;
int8_t x664 = INT8_MAX;
uint64_t x672 = 29798264691LLU;
static volatile uint64_t x683 = 10390172577672141LLU;
volatile int8_t x686 = INT8_MIN;
uint32_t x687 = UINT32_MAX;
int32_t x688 = -94;
static int32_t x691 = INT32_MIN;
int8_t x697 = INT8_MIN;
static volatile uint32_t x699 = UINT32_MAX;
int64_t x702 = 49180437104458LL;
uint32_t x703 = UINT32_MAX;
uint64_t x704 = 343199985LLU;
int16_t x707 = INT16_MIN;
int64_t t127 = 19929692473182LL;
uint64_t x718 = 582LLU;
uint64_t x724 = 2384LLU;
static int64_t x729 = 7257869499630LL;
static int64_t x734 = -3884554979903945LL;
volatile int16_t x736 = INT16_MAX;
int16_t x737 = INT16_MAX;
int8_t x747 = INT8_MIN;
static volatile int64_t t135 = -4093565669757496LL;
int16_t x751 = INT16_MIN;
int16_t x753 = INT16_MIN;
int32_t x758 = INT32_MIN;
uint64_t t138 = UINT64_MAX;
int8_t x778 = -1;
static int16_t x779 = -2;
static uint16_t x782 = UINT16_MAX;
int16_t x783 = INT16_MAX;
int8_t x785 = 0;
int8_t x786 = 52;
volatile int64_t t143 = 1448110561486024419LL;
static int8_t x809 = INT8_MIN;
volatile uint32_t x813 = 29104U;
uint32_t t149 = 32403U;
int64_t x841 = INT64_MAX;
static int64_t x848 = 113LL;
uint64_t t159 = UINT64_MAX;
volatile int8_t x865 = INT8_MIN;
int32_t x873 = -1;
volatile uint32_t x874 = UINT32_MAX;
volatile int64_t x875 = 327318076LL;
uint16_t x877 = 18437U;
int32_t x879 = 11;
int8_t x883 = -1;
int8_t x884 = -3;
static int8_t x888 = -1;
volatile uint8_t x898 = 14U;
static uint64_t x911 = 344550604LLU;
int16_t x921 = INT16_MIN;
int32_t x923 = -1;
static int64_t x924 = INT64_MAX;
int64_t x926 = -1LL;
int32_t t180 = 22;
static int32_t t183 = 4;
volatile int64_t t184 = INT64_MAX;
volatile int16_t x1002 = 88;
volatile int64_t x1005 = -1LL;
int16_t x1010 = INT16_MAX;
uint64_t x1012 = UINT64_MAX;
int64_t x1017 = INT64_MIN;
int32_t x1029 = INT32_MAX;
int32_t x1030 = 30;
int8_t x1031 = -25;
uint32_t x1033 = 1630379U;
int32_t x1036 = 75387;
static volatile uint32_t t192 = UINT32_MAX;
uint64_t x1051 = UINT64_MAX;
int8_t x1056 = -7;
volatile int64_t x1059 = INT64_MIN;
static int64_t t196 = 154LL;
int64_t x1073 = INT64_MAX;
static uint64_t x1077 = 171902LLU;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	int16_t x2 = INT16_MAX;
	int16_t x3 = INT16_MIN;
	volatile int64_t x4 = -5LL;
	volatile int64_t t0 = 45962653697583955LL;

    t0 = (x1|(x2|(x3*x4)));

    if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = UINT32_MAX;
	int32_t x6 = INT32_MAX;
	static uint64_t x7 = 121112236LLU;
	static uint64_t t1 = 24LLU;

    t1 = (x5|(x6|(x7*x8)));

    if (t1 != 34359738367LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x13 = 944358962LLU;
	volatile int64_t x14 = INT64_MIN;
	int16_t x15 = INT16_MAX;
	int32_t x16 = -1;

    t2 = (x13|(x14|(x15*x16)));

    if (t2 != 18446744073709536819LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x22 = 2U;
	int64_t x23 = -1LL;
	static int16_t x24 = -208;
	volatile int64_t t3 = INT64_MAX;

    t3 = (x21|(x22|(x23*x24)));

    if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x25 = 4579;
	uint8_t x27 = UINT8_MAX;
	int64_t x28 = 10LL;
	volatile int64_t t4 = 46054189558LL;

    t4 = (x25|(x26|(x27*x28)));

    if (t4 != -2147477001LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x29 = INT16_MAX;
	volatile int8_t x30 = -1;
	uint32_t x31 = 4342231U;
	static uint32_t t5 = UINT32_MAX;

    t5 = (x29|(x30|(x31*x32)));

    if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x34 = -810221215735LL;
	uint8_t x35 = UINT8_MAX;
	volatile int64_t t6 = -803970LL;

    t6 = (x33|(x34|(x35*x36)));

    if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x37 = -7269;
	int16_t x39 = -1;
	int64_t x40 = INT64_MAX;
	volatile int64_t t7 = -8153435153LL;

    t7 = (x37|(x38|(x39*x40)));

    if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x41 = -6;
	int8_t x43 = 1;
	volatile int64_t x44 = INT64_MIN;
	volatile int64_t t8 = 5661LL;

    t8 = (x41|(x42|(x43*x44)));

    if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x45 = 511457879;
	static int32_t x46 = INT32_MAX;
	static int16_t x47 = INT16_MAX;
	static volatile int64_t x48 = -5037779LL;
	int64_t t9 = 264022695610341246LL;

    t9 = (x45|(x46|(x47*x48)));

    if (t9 != -163208757249LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x49 = INT16_MIN;
	static volatile int32_t x50 = 0;
	int16_t x51 = -1;
	int16_t x52 = -1013;
	int32_t t10 = 18;

    t10 = (x49|(x50|(x51*x52)));

    if (t10 != -31755) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x57 = INT8_MIN;
	int8_t x58 = INT8_MIN;
	uint64_t t11 = 4LLU;

    t11 = (x57|(x58|(x59*x60)));

    if (t11 != 18446744073709551588LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x61 = -1;
	uint8_t x63 = 1U;

    t12 = (x61|(x62|(x63*x64)));

    if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x69 = INT32_MAX;
	int32_t x70 = -250733141;
	int16_t x71 = INT16_MIN;
	uint64_t t13 = UINT64_MAX;

    t13 = (x69|(x70|(x71*x72)));

    if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x73 = INT16_MAX;
	static uint8_t x74 = 64U;
	static uint64_t x75 = 4188413756931943606LLU;
	static int8_t x76 = INT8_MIN;
	uint64_t t14 = 94392LLU;

    t14 = (x73|(x74|(x75*x76)));

    if (t14 != 17285361323997790207LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x77 = 3;
	static int32_t x79 = 3756501;
	uint64_t x80 = UINT64_MAX;
	volatile uint64_t t15 = 882LLU;

    t15 = (x77|(x78|(x79*x80)));

    if (t15 != 18446744073705795119LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x81 = -91;
	int32_t x82 = 2830;
	uint32_t x83 = 49U;
	int8_t x84 = INT8_MAX;
	uint32_t t16 = 6042U;

    t16 = (x81|(x82|(x83*x84)));

    if (t16 != 4294967279U) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x85 = INT64_MIN;
	uint16_t x86 = UINT16_MAX;
	int16_t x88 = INT16_MIN;

    t17 = (x85|(x86|(x87*x88)));

    if (t17 != 9223372036854841343LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x89 = 97274U;
	uint64_t x90 = 386207LLU;
	static int32_t x92 = -84;
	volatile uint64_t t18 = 123LLU;

    t18 = (x89|(x90|(x91*x92)));

    if (t18 != 393215LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x101 = 1456U;
	static uint16_t x104 = 15U;
	volatile int32_t t19 = -280;

    t19 = (x101|(x102|(x103*x104)));

    if (t19 != -10) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint16_t x105 = 25U;
	int16_t x107 = INT16_MIN;
	int64_t t20 = -1660153853LL;

    t20 = (x105|(x106|(x107*x108)));

    if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x109 = INT16_MIN;
	static volatile uint8_t x110 = 5U;
	static int64_t x111 = -1LL;
	static uint32_t x112 = 62U;
	int64_t t21 = -1970LL;

    t21 = (x109|(x110|(x111*x112)));

    if (t21 != -57LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x113 = INT8_MIN;
	int16_t x114 = INT16_MIN;
	uint64_t x115 = 7104899756812986833LLU;
	int64_t x116 = INT64_MIN;
	static volatile uint64_t t22 = 2275684231113325377LLU;

    t22 = (x113|(x114|(x115*x116)));

    if (t22 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint64_t x118 = 4122376652437221LLU;
	uint8_t x119 = 0U;
	int64_t x120 = 1LL;

    t23 = (x117|(x118|(x119*x120)));

    if (t23 != 4122378330177535LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x126 = -1LL;
	static uint64_t x128 = 32LLU;

    t24 = (x125|(x126|(x127*x128)));

    if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x129 = -55108522LL;
	volatile uint8_t x130 = 0U;
	volatile int64_t t25 = -33003134322385334LL;

    t25 = (x129|(x130|(x131*x132)));

    if (t25 != -41LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x137 = -4;
	int64_t x138 = -1LL;
	int8_t x140 = -19;
	int64_t t26 = 2813254776347LL;

    t26 = (x137|(x138|(x139*x140)));

    if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x141 = INT64_MIN;
	int32_t x142 = 2692;
	static volatile int64_t t27 = 715562930664529LL;

    t27 = (x141|(x142|(x143*x144)));

    if (t27 != -9223372036854773116LL) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x145 = 139886312;
	int8_t x146 = 1;
	volatile int8_t x148 = -1;
	uint32_t t28 = 1598043U;

    t28 = (x145|(x146|(x147*x148)));

    if (t28 != 4294934255U) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x153 = 83U;
	int8_t x154 = INT8_MIN;
	int8_t x155 = INT8_MIN;
	int16_t x156 = -766;

    t29 = (x153|(x154|(x155*x156)));

    if (t29 != -45) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x161 = INT32_MAX;
	static volatile int32_t x162 = -1;
	volatile int8_t x163 = -1;
	int64_t x164 = 896097082845LL;
	static int64_t t30 = 7367879192705986LL;

    t30 = (x161|(x162|(x163*x164)));

    if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x165 = 1U;
	static uint32_t x166 = 13U;
	volatile int32_t x167 = -1826591;
	int8_t x168 = -3;
	static volatile uint32_t t31 = 1253U;

    t31 = (x165|(x166|(x167*x168)));

    if (t31 != 5479773U) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x173 = INT32_MIN;
	uint16_t x175 = 787U;
	static int32_t t32 = -985108;

    t32 = (x173|(x174|(x175*x176)));

    if (t32 != -25788161) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint32_t x179 = 3U;
	uint8_t x180 = UINT8_MAX;
	static volatile int64_t t33 = -38547LL;

    t33 = (x177|(x178|(x179*x180)));

    if (t33 != -1143311704260609LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x186 = 2262049;
	static volatile int8_t x187 = INT8_MIN;

    t34 = (x185|(x186|(x187*x188)));

    if (t34 != -2145221471LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile uint64_t x189 = UINT64_MAX;
	static int64_t x190 = INT64_MAX;
	volatile uint32_t x191 = 31345U;
	volatile int8_t x192 = -1;
	volatile uint64_t t35 = UINT64_MAX;

    t35 = (x189|(x190|(x191*x192)));

    if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x199 = 279139268232261LL;
	volatile int8_t x200 = INT8_MIN;
	static int64_t t36 = -7162LL;

    t36 = (x197|(x198|(x199*x200)));

    if (t36 != -4LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x201 = -1;
	volatile int32_t x202 = -1;
	volatile uint16_t x203 = 841U;
	uint32_t x204 = UINT32_MAX;

    t37 = (x201|(x202|(x203*x204)));

    if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x205 = INT32_MIN;
	int32_t x206 = INT32_MAX;
	static int32_t x207 = INT32_MIN;
	uint64_t x208 = 656LLU;
	volatile uint64_t t38 = UINT64_MAX;

    t38 = (x205|(x206|(x207*x208)));

    if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x209 = INT32_MIN;
	int64_t x210 = INT64_MAX;
	int16_t x211 = INT16_MIN;
	static int8_t x212 = INT8_MIN;
	int64_t t39 = -2082109667LL;

    t39 = (x209|(x210|(x211*x212)));

    if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x213 = 52U;
	static uint64_t x214 = UINT64_MAX;
	static int64_t x216 = -1LL;
	static volatile uint64_t t40 = UINT64_MAX;

    t40 = (x213|(x214|(x215*x216)));

    if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x217 = INT32_MAX;
	int32_t x218 = 278;
	static int16_t x219 = 0;
	int16_t x220 = INT16_MIN;
	static int32_t t41 = INT32_MAX;

    t41 = (x217|(x218|(x219*x220)));

    if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x221 = -4;
	int16_t x222 = -1;
	static volatile int8_t x223 = 0;
	volatile int32_t t42 = -342739;

    t42 = (x221|(x222|(x223*x224)));

    if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x225 = 320589221U;
	int8_t x226 = INT8_MIN;
	volatile int8_t x227 = -2;
	int8_t x228 = INT8_MIN;
	uint32_t t43 = 1312728170U;

    t43 = (x225|(x226|(x227*x228)));

    if (t43 != 4294967205U) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x229 = INT8_MAX;
	int64_t x232 = INT64_MAX;
	static volatile uint64_t t44 = UINT64_MAX;

    t44 = (x229|(x230|(x231*x232)));

    if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x233 = INT32_MIN;
	uint8_t x234 = 9U;
	volatile int16_t x235 = -269;
	uint16_t x236 = 16112U;
	volatile int32_t t45 = 14283;

    t45 = (x233|(x234|(x235*x236)));

    if (t45 != -4334119) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x237 = INT64_MIN;
	uint8_t x238 = UINT8_MAX;
	uint8_t x240 = UINT8_MAX;
	uint64_t t46 = 382197007950LLU;

    t46 = (x237|(x238|(x239*x240)));

    if (t46 != 9223372036854803967LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x245 = INT8_MIN;
	int32_t x246 = -1;
	int16_t x248 = INT16_MIN;
	volatile int32_t t47 = 85935;

    t47 = (x245|(x246|(x247*x248)));

    if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x249 = 4U;
	static int64_t x250 = INT64_MIN;
	uint16_t x251 = 23902U;

    t48 = (x249|(x250|(x251*x252)));

    if (t48 != -9223372036826821018LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x254 = 3383LLU;
	static int16_t x256 = INT16_MAX;
	volatile uint64_t t49 = UINT64_MAX;

    t49 = (x253|(x254|(x255*x256)));

    if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int32_t x257 = INT32_MAX;
	int32_t x258 = 105;
	uint64_t x259 = UINT64_MAX;
	int32_t x260 = INT32_MIN;
	uint64_t t50 = 1775023561330995LLU;

    t50 = (x257|(x258|(x259*x260)));

    if (t50 != 4294967295LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x265 = -1;
	int32_t x266 = -1;
	uint64_t x267 = 11022310200LLU;
	int8_t x268 = 0;
	uint64_t t51 = UINT64_MAX;

    t51 = (x265|(x266|(x267*x268)));

    if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x269 = 893LL;
	static volatile int8_t x270 = INT8_MAX;
	int8_t x271 = 0;
	uint64_t x272 = 4164033753LLU;

    t52 = (x269|(x270|(x271*x272)));

    if (t52 != 895LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x274 = 53LL;
	int16_t x275 = -1;
	int8_t x276 = INT8_MIN;

    t53 = (x273|(x274|(x275*x276)));

    if (t53 != 191LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x281 = INT8_MAX;
	uint64_t x282 = 32181077LLU;
	static int16_t x283 = -1;
	uint64_t x284 = 26042939189971944LLU;
	volatile uint64_t t54 = 1429072633LLU;

    t54 = (x281|(x282|(x283*x284)));

    if (t54 != 18420701134540750719LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile uint64_t x289 = UINT64_MAX;
	int16_t x290 = INT16_MIN;
	static volatile int8_t x291 = 1;
	uint64_t t55 = UINT64_MAX;

    t55 = (x289|(x290|(x291*x292)));

    if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x297 = -1;
	uint32_t x298 = 101U;
	int8_t x299 = -8;
	uint16_t x300 = UINT16_MAX;
	volatile uint32_t t56 = UINT32_MAX;

    t56 = (x297|(x298|(x299*x300)));

    if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x301 = INT16_MAX;
	volatile uint64_t x302 = 17133LLU;
	uint8_t x303 = UINT8_MAX;
	uint64_t t57 = 11705517066007LLU;

    t57 = (x301|(x302|(x303*x304)));

    if (t57 != 18347908827214413823LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x305 = -1;
	volatile int16_t x306 = INT16_MAX;
	uint64_t x307 = UINT64_MAX;
	volatile uint32_t x308 = 1094330256U;

    t58 = (x305|(x306|(x307*x308)));

    if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x309 = 0U;
	int64_t x310 = INT64_MIN;

    t59 = (x309|(x310|(x311*x312)));

    if (t59 != 18445378581735670161LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x313 = -10948LL;
	int32_t x315 = 1;
	uint32_t x316 = 1644838U;
	volatile int64_t t60 = 85LL;

    t60 = (x313|(x314|(x315*x316)));

    if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint32_t x317 = 1095U;
	static uint16_t x318 = 1U;
	int64_t x319 = -1LL;
	uint32_t x320 = 6U;
	volatile int64_t t61 = -186LL;

    t61 = (x317|(x318|(x319*x320)));

    if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x325 = INT16_MIN;
	uint32_t x327 = 13374211U;
	static int8_t x328 = 5;
	volatile uint32_t t62 = UINT32_MAX;

    t62 = (x325|(x326|(x327*x328)));

    if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x329 = INT32_MIN;
	static uint8_t x331 = 1U;
	int64_t x332 = INT64_MIN;

    t63 = (x329|(x330|(x331*x332)));

    if (t63 != -2147483648LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x334 = INT16_MAX;
	int64_t x335 = 7256742978066LL;
	uint16_t x336 = 2922U;
	int64_t t64 = -2399483LL;

    t64 = (x333|(x334|(x335*x336)));

    if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x337 = -326357LL;
	static volatile int16_t x338 = INT16_MAX;
	int64_t x339 = -1LL;
	int16_t x340 = 60;
	int64_t t65 = 63LL;

    t65 = (x337|(x338|(x339*x340)));

    if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x342 = 4LL;
	static int16_t x344 = 73;
	static int64_t t66 = 45861886LL;

    t66 = (x341|(x342|(x343*x344)));

    if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x349 = 3437850U;
	uint64_t x350 = 295961LLU;
	static volatile int16_t x352 = INT16_MIN;

    t67 = (x349|(x350|(x351*x352)));

    if (t67 != 18446744073709417755LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int64_t x365 = 98LL;
	uint16_t x366 = 9028U;
	int16_t x367 = -1;
	volatile int64_t t68 = 1248625370702263LL;

    t68 = (x365|(x366|(x367*x368)));

    if (t68 != 9063LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x369 = INT32_MIN;
	volatile uint8_t x370 = 1U;
	int64_t x371 = 0LL;
	uint64_t x372 = 63956276586649LLU;
	uint64_t t69 = 8LLU;

    t69 = (x369|(x370|(x371*x372)));

    if (t69 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x373 = -1;
	uint16_t x374 = UINT16_MAX;
	int8_t x375 = -3;
	uint16_t x376 = 3405U;

    t70 = (x373|(x374|(x375*x376)));

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint32_t x378 = 219U;
	uint16_t x379 = UINT16_MAX;
	uint64_t x380 = 48650558669LLU;

    t71 = (x377|(x378|(x379*x380)));

    if (t71 != 18446744073709547519LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x389 = -620814LL;
	uint16_t x390 = UINT16_MAX;
	uint64_t x391 = UINT64_MAX;
	volatile uint64_t t72 = 2LLU;

    t72 = (x389|(x390|(x391*x392)));

    if (t72 != 18446744073708961791LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x393 = 667;
	uint32_t x394 = 527837424U;
	int16_t x395 = 3665;
	static uint16_t x396 = UINT16_MAX;
	uint32_t t73 = 952U;

    t73 = (x393|(x394|(x395*x396)));

    if (t73 != 527891455U) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x397 = INT64_MIN;
	static int8_t x398 = INT8_MIN;
	int16_t x399 = INT16_MAX;
	static uint8_t x400 = 32U;
	int64_t t74 = -1349460094LL;

    t74 = (x397|(x398|(x399*x400)));

    if (t74 != -32LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x406 = -1LL;
	int8_t x408 = 1;
	uint64_t t75 = UINT64_MAX;

    t75 = (x405|(x406|(x407*x408)));

    if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x409 = -29;
	int64_t x410 = INT64_MIN;
	int8_t x411 = INT8_MIN;
	static int16_t x412 = -12528;
	volatile int64_t t76 = 33065235LL;

    t76 = (x409|(x410|(x411*x412)));

    if (t76 != -29LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x414 = 10407524175LLU;
	uint8_t x415 = 2U;
	static uint16_t x416 = UINT16_MAX;
	uint64_t t77 = 1033LLU;

    t77 = (x413|(x414|(x415*x416)));

    if (t77 != 12884901887LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x422 = 0;
	volatile int8_t x423 = -9;
	uint16_t x424 = UINT16_MAX;

    t78 = (x421|(x422|(x423*x424)));

    if (t78 != -32759) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x425 = 346LLU;
	int32_t x426 = INT32_MIN;
	volatile int8_t x427 = INT8_MAX;
	int8_t x428 = INT8_MIN;
	volatile uint64_t t79 = 4976LLU;

    t79 = (x425|(x426|(x427*x428)));

    if (t79 != 18446744073709535706LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x429 = 19;
	volatile uint8_t x430 = 19U;
	uint8_t x431 = 2U;
	int64_t x432 = 18LL;
	int64_t t80 = 902849LL;

    t80 = (x429|(x430|(x431*x432)));

    if (t80 != 55LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x433 = INT8_MAX;
	uint64_t x434 = 433227112LLU;
	volatile int64_t x435 = 18682486LL;
	volatile int32_t x436 = INT32_MAX;
	static uint64_t t81 = 62025252LLU;

    t81 = (x433|(x434|(x435*x436)));

    if (t81 != 40120333188132351LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint8_t x437 = 0U;
	static uint8_t x438 = 73U;
	volatile int16_t x439 = -401;
	int8_t x440 = -1;
	volatile int32_t t82 = -37933545;

    t82 = (x437|(x438|(x439*x440)));

    if (t82 != 473) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x441 = 754;
	uint8_t x442 = 0U;
	volatile int16_t x443 = 2080;
	int16_t x444 = INT16_MAX;
	volatile int32_t t83 = -336581607;

    t83 = (x441|(x442|(x443*x444)));

    if (t83 != 68155378) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x449 = INT64_MAX;
	int64_t x450 = -5563LL;
	volatile uint8_t x451 = 1U;
	int8_t x452 = 28;
	int64_t t84 = 12214566370202724LL;

    t84 = (x449|(x450|(x451*x452)));

    if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x457 = -1;
	int64_t x458 = -1LL;
	int8_t x460 = INT8_MIN;
	int64_t t85 = 13210626LL;

    t85 = (x457|(x458|(x459*x460)));

    if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x462 = 2461;
	int16_t x463 = -1;
	static volatile int8_t x464 = INT8_MIN;
	int64_t t86 = 472176LL;

    t86 = (x461|(x462|(x463*x464)));

    if (t86 != -9223372036854773347LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x465 = 8700U;
	int8_t x466 = 1;
	int8_t x467 = 0;
	volatile uint32_t t87 = 7730137U;

    t87 = (x465|(x466|(x467*x468)));

    if (t87 != 8701U) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x470 = INT64_MAX;
	uint16_t x471 = UINT16_MAX;
	uint16_t x472 = 440U;
	static int64_t t88 = INT64_MAX;

    t88 = (x469|(x470|(x471*x472)));

    if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x473 = INT16_MAX;
	volatile int32_t x474 = INT32_MIN;
	uint32_t x475 = 32596113U;
	volatile uint32_t t89 = 32430969U;

    t89 = (x473|(x474|(x475*x476)));

    if (t89 != 4139712511U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x482 = UINT8_MAX;
	uint32_t x483 = 3391153U;
	static int8_t x484 = -1;

    t90 = (x481|(x482|(x483*x484)));

    if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x485 = -1;
	uint64_t x487 = UINT64_MAX;
	int64_t x488 = -11379591LL;
	uint64_t t91 = UINT64_MAX;

    t91 = (x485|(x486|(x487*x488)));

    if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x494 = INT32_MIN;
	int32_t x495 = -1;
	volatile uint64_t x496 = 0LLU;
	volatile uint64_t t92 = UINT64_MAX;

    t92 = (x493|(x494|(x495*x496)));

    if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x502 = INT8_MAX;
	volatile int64_t x503 = 1398322LL;
	int32_t x504 = INT32_MIN;
	volatile int64_t t93 = 67011875768755LL;

    t93 = (x501|(x502|(x503*x504)));

    if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int32_t x505 = INT32_MAX;
	static int32_t x506 = -16862467;
	int32_t x507 = -1990738;
	int32_t t94 = -23807;

    t94 = (x505|(x506|(x507*x508)));

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x510 = 1LLU;
	int32_t x511 = -1;
	volatile uint16_t x512 = 44U;
	volatile uint64_t t95 = 1591552LLU;

    t95 = (x509|(x510|(x511*x512)));

    if (t95 != 18446744073709551573LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x522 = 376110007091459LLU;
	uint32_t x523 = 4046U;
	int64_t x524 = -1LL;
	static uint64_t t96 = UINT64_MAX;

    t96 = (x521|(x522|(x523*x524)));

    if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x525 = -511846LL;
	int32_t x526 = 23891851;
	int32_t x527 = INT32_MIN;
	static int64_t t97 = -14336198LL;

    t97 = (x525|(x526|(x527*x528)));

    if (t97 != -213093LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x534 = -1;
	int8_t x535 = INT8_MIN;
	int8_t x536 = INT8_MIN;
	static volatile uint64_t t98 = UINT64_MAX;

    t98 = (x533|(x534|(x535*x536)));

    if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x538 = -15;
	uint64_t x540 = 3149877LLU;
	static uint64_t t99 = 614923004497211190LLU;

    t99 = (x537|(x538|(x539*x540)));

    if (t99 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x541 = -1LL;
	static volatile int16_t x543 = INT16_MIN;
	static uint8_t x544 = 3U;
	int64_t t100 = 72985756487436511LL;

    t100 = (x541|(x542|(x543*x544)));

    if (t100 != -1LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x546 = INT8_MIN;
	int8_t x547 = INT8_MAX;
	static uint64_t x548 = 25LLU;
	uint64_t t101 = 149035168552221LLU;

    t101 = (x545|(x546|(x547*x548)));

    if (t101 != 18446744073709551591LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x554 = INT16_MAX;
	uint32_t x556 = 218357765U;
	volatile uint32_t t102 = 545007464U;

    t102 = (x553|(x554|(x555*x556)));

    if (t102 != 2147549183U) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x557 = -44175280;
	static volatile uint32_t x558 = UINT32_MAX;
	uint64_t x559 = UINT64_MAX;
	uint32_t x560 = 11637U;
	volatile uint64_t t103 = UINT64_MAX;

    t103 = (x557|(x558|(x559*x560)));

    if (t103 != UINT64_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x565 = 0;
	int32_t t104 = -659;

    t104 = (x565|(x566|(x567*x568)));

    if (t104 != -40) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint16_t x573 = UINT16_MAX;
	int16_t x574 = INT16_MIN;
	int16_t x575 = INT16_MIN;
	uint8_t x576 = 33U;
	static volatile int32_t t105 = -85034557;

    t105 = (x573|(x574|(x575*x576)));

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x578 = INT64_MIN;
	int16_t x579 = 0;
	int32_t x580 = -1;
	static volatile int64_t t106 = -12719662862070LL;

    t106 = (x577|(x578|(x579*x580)));

    if (t106 != -8932552LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x601 = INT32_MAX;
	volatile uint32_t x602 = UINT32_MAX;
	uint64_t x603 = UINT64_MAX;
	uint8_t x604 = 7U;
	uint64_t t107 = UINT64_MAX;

    t107 = (x601|(x602|(x603*x604)));

    if (t107 != UINT64_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x605 = UINT8_MAX;
	static uint16_t x606 = 484U;
	int16_t x607 = -13;
	static int8_t x608 = -1;
	static int32_t t108 = -841367427;

    t108 = (x605|(x606|(x607*x608)));

    if (t108 != 511) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int32_t x609 = INT32_MIN;
	static volatile uint8_t x610 = 72U;
	static uint8_t x611 = 53U;
	volatile int8_t x612 = 46;
	static volatile int32_t t109 = 5;

    t109 = (x609|(x610|(x611*x612)));

    if (t109 != -2147481138) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x613 = 3U;
	volatile uint32_t x614 = 217173U;
	int16_t x615 = -1;
	int8_t x616 = 1;

    t110 = (x613|(x614|(x615*x616)));

    if (t110 != UINT32_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint16_t x617 = UINT16_MAX;
	uint16_t x619 = 1U;
	uint64_t x620 = 109LLU;
	volatile uint64_t t111 = UINT64_MAX;

    t111 = (x617|(x618|(x619*x620)));

    if (t111 != UINT64_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x625 = UINT16_MAX;
	uint8_t x627 = 0U;
	int64_t x628 = INT64_MIN;
	volatile int64_t t112 = 3823478904178LL;

    t112 = (x625|(x626|(x627*x628)));

    if (t112 != -1LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x633 = INT64_MIN;
	uint64_t x634 = 8029806185878LLU;
	uint32_t x636 = UINT32_MAX;
	volatile uint64_t t113 = 35589419149614927LLU;

    t113 = (x633|(x634|(x635*x636)));

    if (t113 != 9223380066660961686LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x641 = INT8_MIN;
	static uint32_t x643 = 2273297U;
	int8_t x644 = INT8_MIN;
	int64_t t114 = 15632313LL;

    t114 = (x641|(x642|(x643*x644)));

    if (t114 != -44LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint8_t x645 = 46U;
	int8_t x648 = -1;
	int64_t t115 = -10518690001952456LL;

    t115 = (x645|(x646|(x647*x648)));

    if (t115 != -1486354LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x649 = INT64_MAX;
	int32_t x650 = -1;
	int16_t x651 = INT16_MIN;
	volatile int64_t t116 = 43LL;

    t116 = (x649|(x650|(x651*x652)));

    if (t116 != -1LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x658 = INT16_MIN;
	int16_t x659 = -2038;
	volatile int64_t t117 = -2LL;

    t117 = (x657|(x658|(x659*x660)));

    if (t117 != -9LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t t118 = 123959417LL;

    t118 = (x661|(x662|(x663*x664)));

    if (t118 != -1LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x665 = 59869;
	uint16_t x666 = UINT16_MAX;
	uint16_t x667 = UINT16_MAX;
	uint32_t x668 = 3442372U;
	uint32_t t119 = 45172481U;

    t119 = (x665|(x666|(x667*x668)));

    if (t119 != 2257584127U) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int8_t x669 = INT8_MIN;
	int8_t x670 = INT8_MAX;
	static int32_t x671 = INT32_MIN;
	uint64_t t120 = UINT64_MAX;

    t120 = (x669|(x670|(x671*x672)));

    if (t120 != UINT64_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x681 = 6;
	static int8_t x682 = -1;
	int16_t x684 = -1;
	uint64_t t121 = UINT64_MAX;

    t121 = (x681|(x682|(x683*x684)));

    if (t121 != UINT64_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x685 = -1;
	uint32_t t122 = UINT32_MAX;

    t122 = (x685|(x686|(x687*x688)));

    if (t122 != UINT32_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x689 = 8800U;
	uint16_t x690 = 1618U;
	int64_t x692 = -1LL;
	volatile int64_t t123 = -218338275910047152LL;

    t123 = (x689|(x690|(x691*x692)));

    if (t123 != 2147493490LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x693 = -121554;
	uint8_t x694 = 0U;
	int16_t x695 = 1151;
	uint16_t x696 = 56U;
	volatile int32_t t124 = 87;

    t124 = (x693|(x694|(x695*x696)));

    if (t124 != -65554) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x698 = INT64_MIN;
	volatile uint64_t x700 = UINT64_MAX;
	uint64_t t125 = 3532538547560413LLU;

    t125 = (x697|(x698|(x699*x700)));

    if (t125 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x701 = -1LL;
	uint64_t t126 = UINT64_MAX;

    t126 = (x701|(x702|(x703*x704)));

    if (t126 != UINT64_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint32_t x705 = 41690U;
	static volatile uint16_t x706 = 196U;
	static int64_t x708 = -1833253997LL;

    t127 = (x705|(x706|(x707*x708)));

    if (t127 != 60072066982622LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint8_t x709 = 7U;
	uint64_t x710 = UINT64_MAX;
	uint32_t x711 = UINT32_MAX;
	static int8_t x712 = -1;
	volatile uint64_t t128 = UINT64_MAX;

    t128 = (x709|(x710|(x711*x712)));

    if (t128 != UINT64_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x717 = INT64_MIN;
	int8_t x719 = -1;
	uint16_t x720 = 5507U;
	volatile uint64_t t129 = 23305LLU;

    t129 = (x717|(x718|(x719*x720)));

    if (t129 != 18446744073709546111LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile uint8_t x721 = UINT8_MAX;
	uint32_t x722 = 2057305752U;
	int8_t x723 = INT8_MIN;
	uint64_t t130 = 953191797LLU;

    t130 = (x721|(x722|(x723*x724)));

    if (t130 != 18446744073709551359LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x730 = INT32_MAX;
	static volatile int8_t x731 = INT8_MIN;
	int8_t x732 = 1;
	int64_t t131 = 117LL;

    t131 = (x729|(x730|(x731*x732)));

    if (t131 != -1LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x733 = INT8_MIN;
	uint64_t x735 = UINT64_MAX;
	volatile uint64_t t132 = 288901071773LLU;

    t132 = (x733|(x734|(x735*x736)));

    if (t132 != 18446744073709551543LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x738 = UINT32_MAX;
	volatile int64_t x739 = 32590207842LL;
	static int8_t x740 = INT8_MIN;
	volatile int64_t t133 = 8251026LL;

    t133 = (x737|(x738|(x739*x740)));

    if (t133 != -4170413244417LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x741 = INT8_MAX;
	volatile uint16_t x742 = UINT16_MAX;
	uint64_t x743 = UINT64_MAX;
	volatile int64_t x744 = INT64_MIN;
	uint64_t t134 = 75LLU;

    t134 = (x741|(x742|(x743*x744)));

    if (t134 != 9223372036854841343LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x745 = 11583566LL;
	static volatile int8_t x746 = -1;
	int8_t x748 = 3;

    t135 = (x745|(x746|(x747*x748)));

    if (t135 != -1LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x749 = INT64_MIN;
	int8_t x750 = 50;
	static volatile int64_t x752 = -1LL;
	volatile int64_t t136 = -22574694976647LL;

    t136 = (x749|(x750|(x751*x752)));

    if (t136 != -9223372036854742990LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x754 = 9262U;
	volatile int32_t x755 = -1;
	int8_t x756 = INT8_MIN;
	volatile uint32_t t137 = 17557U;

    t137 = (x753|(x754|(x755*x756)));

    if (t137 != 4294943918U) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint32_t x757 = UINT32_MAX;
	int64_t x759 = -1LL;
	static uint64_t x760 = 137704040LLU;

    t138 = (x757|(x758|(x759*x760)));

    if (t138 != UINT64_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x761 = -1568;
	int16_t x762 = INT16_MIN;
	volatile int16_t x763 = 2;
	volatile uint16_t x764 = 1U;
	volatile int32_t t139 = -1;

    t139 = (x761|(x762|(x763*x764)));

    if (t139 != -1566) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x777 = -1;
	uint64_t x780 = UINT64_MAX;
	uint64_t t140 = UINT64_MAX;

    t140 = (x777|(x778|(x779*x780)));

    if (t140 != UINT64_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x781 = 12LL;
	static uint64_t x784 = 1381614557831678LLU;
	uint64_t t141 = 28869205908464LLU;

    t141 = (x781|(x782|(x783*x784)));

    if (t141 != 8377876069051531263LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x787 = 1;
	int8_t x788 = INT8_MIN;
	static volatile int32_t t142 = -1947927;

    t142 = (x785|(x786|(x787*x788)));

    if (t142 != -76) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x789 = -1;
	uint32_t x790 = UINT32_MAX;
	volatile int64_t x791 = -681836LL;
	int16_t x792 = INT16_MAX;

    t143 = (x789|(x790|(x791*x792)));

    if (t143 != -1LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x793 = INT8_MIN;
	static uint16_t x794 = 21416U;
	volatile uint8_t x795 = 6U;
	static uint16_t x796 = 2U;
	volatile int32_t t144 = 1;

    t144 = (x793|(x794|(x795*x796)));

    if (t144 != -84) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x797 = 26U;
	uint32_t x798 = 1826U;
	static volatile int32_t x799 = 266399855;
	static int16_t x800 = -7;
	uint32_t t145 = 2018U;

    t145 = (x797|(x798|(x799*x800)));

    if (t145 != 2430169087U) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x801 = 0;
	volatile uint64_t x802 = 386LLU;
	uint16_t x803 = 86U;
	int8_t x804 = INT8_MAX;
	static volatile uint64_t t146 = 0LLU;

    t146 = (x801|(x802|(x803*x804)));

    if (t146 != 11178LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x805 = -1;
	static volatile int32_t x806 = -431810;
	uint32_t x807 = 243672U;
	uint8_t x808 = 58U;
	static uint32_t t147 = UINT32_MAX;

    t147 = (x805|(x806|(x807*x808)));

    if (t147 != UINT32_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x810 = INT64_MIN;
	int16_t x811 = -1;
	uint8_t x812 = UINT8_MAX;
	int64_t t148 = 62163957LL;

    t148 = (x809|(x810|(x811*x812)));

    if (t148 != -127LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int8_t x814 = INT8_MAX;
	volatile int8_t x815 = 7;
	int32_t x816 = 6;

    t149 = (x813|(x814|(x815*x816)));

    if (t149 != 29183U) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x817 = 28;
	static uint8_t x818 = 17U;
	int32_t x819 = 46750728;
	uint32_t x820 = 6265U;
	volatile uint32_t t150 = 22460663U;

    t150 = (x817|(x818|(x819*x820)));

    if (t150 != 835534813U) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x821 = INT32_MIN;
	int8_t x822 = INT8_MAX;
	uint64_t x823 = UINT64_MAX;
	int8_t x824 = INT8_MIN;
	volatile uint64_t t151 = 576114202LLU;

    t151 = (x821|(x822|(x823*x824)));

    if (t151 != 18446744071562068223LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x829 = 11U;
	uint32_t x830 = 6467U;
	uint64_t x831 = UINT64_MAX;
	uint64_t x832 = 143205LLU;
	volatile uint64_t t152 = 57819538LLU;

    t152 = (x829|(x830|(x831*x832)));

    if (t152 != 18446744073709410779LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x833 = INT64_MIN;
	static uint64_t x834 = UINT64_MAX;
	uint16_t x835 = 1261U;
	static int16_t x836 = INT16_MIN;
	volatile uint64_t t153 = UINT64_MAX;

    t153 = (x833|(x834|(x835*x836)));

    if (t153 != UINT64_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x837 = -1014176359271782171LL;
	int64_t x838 = -59581692540665LL;
	int8_t x839 = -1;
	int32_t x840 = -1;
	int64_t t154 = 10608892LL;

    t154 = (x837|(x838|(x839*x840)));

    if (t154 != -21990259709465LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x842 = INT64_MIN;
	int16_t x843 = 5;
	volatile int8_t x844 = 1;
	volatile int64_t t155 = 1190410370LL;

    t155 = (x841|(x842|(x843*x844)));

    if (t155 != -1LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x845 = INT32_MAX;
	int64_t x846 = 305LL;
	int16_t x847 = -1;
	int64_t t156 = 28911810LL;

    t156 = (x845|(x846|(x847*x848)));

    if (t156 != -1LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x849 = 60;
	int16_t x850 = -1;
	int16_t x851 = INT16_MIN;
	volatile uint8_t x852 = UINT8_MAX;
	int32_t t157 = -3366;

    t157 = (x849|(x850|(x851*x852)));

    if (t157 != -1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x853 = INT32_MAX;
	int16_t x854 = -1;
	uint8_t x855 = 51U;
	uint8_t x856 = 3U;
	volatile int32_t t158 = -71722;

    t158 = (x853|(x854|(x855*x856)));

    if (t158 != -1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x857 = -11721344463315131LL;
	uint64_t x858 = UINT64_MAX;
	uint16_t x859 = 25590U;
	static int16_t x860 = INT16_MIN;

    t159 = (x857|(x858|(x859*x860)));

    if (t159 != UINT64_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint8_t x861 = 12U;
	uint64_t x862 = 513LLU;
	static int8_t x863 = -1;
	int16_t x864 = 0;
	volatile uint64_t t160 = 113932944887960LLU;

    t160 = (x861|(x862|(x863*x864)));

    if (t160 != 525LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x866 = 7U;
	int32_t x867 = -1;
	static volatile uint8_t x868 = 7U;
	uint32_t t161 = UINT32_MAX;

    t161 = (x865|(x866|(x867*x868)));

    if (t161 != UINT32_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x869 = 0U;
	int8_t x870 = INT8_MIN;
	int8_t x871 = 1;
	uint8_t x872 = 23U;
	int32_t t162 = -413244;

    t162 = (x869|(x870|(x871*x872)));

    if (t162 != -105) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x876 = 5LLU;
	uint64_t t163 = UINT64_MAX;

    t163 = (x873|(x874|(x875*x876)));

    if (t163 != UINT64_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x878 = 553746077LL;
	uint32_t x880 = 603965U;
	static volatile int64_t t164 = -9788856LL;

    t164 = (x877|(x878|(x879*x880)));

    if (t164 != 560299935LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x881 = 696U;
	uint32_t x882 = UINT32_MAX;
	volatile uint32_t t165 = UINT32_MAX;

    t165 = (x881|(x882|(x883*x884)));

    if (t165 != UINT32_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int8_t x885 = 3;
	int64_t x886 = -103582382018LL;
	int8_t x887 = -43;
	volatile int64_t t166 = 245LL;

    t166 = (x885|(x886|(x887*x888)));

    if (t166 != -103582382017LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x889 = INT8_MIN;
	uint16_t x890 = UINT16_MAX;
	int16_t x891 = -198;
	uint16_t x892 = 0U;
	int32_t t167 = 52183850;

    t167 = (x889|(x890|(x891*x892)));

    if (t167 != -1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x893 = 123393421442191304LLU;
	int64_t x894 = 318877094232LL;
	static uint32_t x895 = 50397827U;
	uint32_t x896 = UINT32_MAX;
	static volatile uint64_t t168 = 1288360LLU;

    t168 = (x893|(x894|(x895*x896)));

    if (t168 != 123393706022600701LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x897 = INT64_MAX;
	int8_t x899 = 1;
	int32_t x900 = INT32_MIN;
	int64_t t169 = -9259424LL;

    t169 = (x897|(x898|(x899*x900)));

    if (t169 != -1LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint64_t x909 = UINT64_MAX;
	int8_t x910 = -2;
	volatile int8_t x912 = -7;
	static volatile uint64_t t170 = UINT64_MAX;

    t170 = (x909|(x910|(x911*x912)));

    if (t170 != UINT64_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint64_t x913 = 242931706555LLU;
	int64_t x914 = INT64_MAX;
	int32_t x915 = 4015993;
	int8_t x916 = INT8_MIN;
	uint64_t t171 = UINT64_MAX;

    t171 = (x913|(x914|(x915*x916)));

    if (t171 != UINT64_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x922 = INT32_MIN;
	volatile int64_t t172 = -590LL;

    t172 = (x921|(x922|(x923*x924)));

    if (t172 != -32767LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x925 = UINT8_MAX;
	int64_t x927 = 16LL;
	uint32_t x928 = 8U;
	volatile int64_t t173 = -4079034LL;

    t173 = (x925|(x926|(x927*x928)));

    if (t173 != -1LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x929 = INT64_MIN;
	static uint8_t x930 = 2U;
	static int16_t x931 = INT16_MIN;
	uint32_t x932 = 5U;
	volatile int64_t t174 = 630962210LL;

    t174 = (x929|(x930|(x931*x932)));

    if (t174 != -9223372032559972350LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x941 = INT16_MIN;
	static int8_t x942 = -1;
	int16_t x943 = -1;
	uint64_t x944 = 262263180971152892LLU;
	volatile uint64_t t175 = UINT64_MAX;

    t175 = (x941|(x942|(x943*x944)));

    if (t175 != UINT64_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint32_t x949 = UINT32_MAX;
	int8_t x950 = INT8_MIN;
	int16_t x951 = -1;
	int16_t x952 = -1;
	static volatile uint32_t t176 = UINT32_MAX;

    t176 = (x949|(x950|(x951*x952)));

    if (t176 != UINT32_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x957 = INT32_MIN;
	volatile int32_t x958 = -1;
	int16_t x959 = -15362;
	uint64_t x960 = 2LLU;
	uint64_t t177 = UINT64_MAX;

    t177 = (x957|(x958|(x959*x960)));

    if (t177 != UINT64_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x961 = INT64_MIN;
	uint16_t x962 = 45U;
	int8_t x963 = -1;
	int64_t x964 = -1LL;
	volatile int64_t t178 = 244999LL;

    t178 = (x961|(x962|(x963*x964)));

    if (t178 != -9223372036854775763LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x969 = 40608903U;
	static uint8_t x970 = UINT8_MAX;
	volatile int16_t x971 = INT16_MIN;
	uint64_t x972 = UINT64_MAX;
	uint64_t t179 = 2430649538LLU;

    t179 = (x969|(x970|(x971*x972)));

    if (t179 != 40609023LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x977 = INT8_MAX;
	int32_t x978 = INT32_MIN;
	uint8_t x979 = 1U;
	int32_t x980 = INT32_MIN;

    t180 = (x977|(x978|(x979*x980)));

    if (t180 != -2147483521) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x981 = 21119U;
	int32_t x982 = INT32_MIN;
	volatile int64_t x983 = 93488203978566956LL;
	int32_t x984 = -1;
	int64_t t181 = 19143960LL;

    t181 = (x981|(x982|(x983*x984)));

    if (t181 != -886353153LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x985 = -1LL;
	int64_t x986 = -643LL;
	int16_t x987 = INT16_MAX;
	int8_t x988 = INT8_MIN;
	static volatile int64_t t182 = -4291802341080477347LL;

    t182 = (x985|(x986|(x987*x988)));

    if (t182 != -1LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x989 = -1;
	uint8_t x990 = UINT8_MAX;
	static uint8_t x991 = 3U;
	int8_t x992 = INT8_MAX;

    t183 = (x989|(x990|(x991*x992)));

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x993 = INT8_MAX;
	int64_t x994 = INT64_MAX;
	uint16_t x995 = 565U;
	int16_t x996 = 2;

    t184 = (x993|(x994|(x995*x996)));

    if (t184 != INT64_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x1001 = -445671502;
	uint8_t x1003 = 22U;
	uint32_t x1004 = UINT32_MAX;
	volatile uint32_t t185 = 1286U;

    t185 = (x1001|(x1002|(x1003*x1004)));

    if (t185 != 4294967290U) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x1006 = -1;
	uint16_t x1007 = 2U;
	static int16_t x1008 = 21;
	volatile int64_t t186 = 749LL;

    t186 = (x1005|(x1006|(x1007*x1008)));

    if (t186 != -1LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1009 = INT8_MAX;
	int16_t x1011 = -247;
	volatile uint64_t t187 = 2075252LLU;

    t187 = (x1009|(x1010|(x1011*x1012)));

    if (t187 != 32767LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1013 = -7;
	uint16_t x1014 = 7U;
	volatile uint64_t x1015 = 107303596623LLU;
	static int64_t x1016 = -1LL;
	static volatile uint64_t t188 = UINT64_MAX;

    t188 = (x1013|(x1014|(x1015*x1016)));

    if (t188 != UINT64_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x1018 = -11;
	static int8_t x1019 = INT8_MAX;
	uint32_t x1020 = 3U;
	int64_t t189 = 241447826202833LL;

    t189 = (x1017|(x1018|(x1019*x1020)));

    if (t189 != -9223372032559808515LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint8_t x1032 = 11U;
	int32_t t190 = 1400;

    t190 = (x1029|(x1030|(x1031*x1032)));

    if (t190 != -1) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int8_t x1034 = INT8_MAX;
	int64_t x1035 = -54LL;
	volatile int64_t t191 = -1971LL;

    t191 = (x1033|(x1034|(x1035*x1036)));

    if (t191 != -2497793LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint8_t x1037 = 71U;
	uint32_t x1038 = UINT32_MAX;
	volatile uint16_t x1039 = 85U;
	int16_t x1040 = INT16_MIN;

    t192 = (x1037|(x1038|(x1039*x1040)));

    if (t192 != UINT32_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1041 = INT16_MAX;
	static int16_t x1042 = 1;
	uint16_t x1043 = 44U;
	volatile int8_t x1044 = INT8_MIN;
	int32_t t193 = 1;

    t193 = (x1041|(x1042|(x1043*x1044)));

    if (t193 != -1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x1049 = -4650919452343LL;
	static int16_t x1050 = INT16_MIN;
	volatile uint32_t x1052 = UINT32_MAX;
	volatile uint64_t t194 = 126512321LLU;

    t194 = (x1049|(x1050|(x1051*x1052)));

    if (t194 != 18446744073709527369LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int8_t x1053 = INT8_MIN;
	uint8_t x1054 = 9U;
	int32_t x1055 = -725945;
	volatile int32_t t195 = -7592;

    t195 = (x1053|(x1054|(x1055*x1056)));

    if (t195 != -113) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x1057 = 1429U;
	static volatile int64_t x1058 = INT64_MIN;
	uint8_t x1060 = 1U;

    t196 = (x1057|(x1058|(x1059*x1060)));

    if (t196 != -9223372036854774379LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x1065 = INT16_MIN;
	int32_t x1066 = INT32_MIN;
	int16_t x1067 = -1;
	int64_t x1068 = 4295557102928201LL;
	volatile int64_t t197 = 411760220LL;

    t197 = (x1065|(x1066|(x1067*x1068)));

    if (t197 != -329LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint8_t x1074 = 3U;
	uint64_t x1075 = 640476431470LLU;
	static int8_t x1076 = 7;
	static uint64_t t198 = 133670411796252702LLU;

    t198 = (x1073|(x1074|(x1075*x1076)));

    if (t198 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1078 = -6497;
	static int8_t x1079 = INT8_MIN;
	int16_t x1080 = INT16_MIN;
	static volatile uint64_t t199 = UINT64_MAX;

    t199 = (x1077|(x1078|(x1079*x1080)));

    if (t199 != UINT64_MAX) { NG(); } else { ; }
	
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


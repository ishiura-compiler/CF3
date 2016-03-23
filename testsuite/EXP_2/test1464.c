
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

int32_t x5 = INT32_MIN;
uint8_t x7 = 25U;
int64_t x8 = -4335396535LL;
int32_t t1 = 83;
int32_t x18 = INT32_MAX;
uint32_t x21 = 4U;
int32_t t5 = -62311584;
static int16_t x25 = -13;
static volatile int8_t x27 = 19;
uint8_t x31 = 1U;
int64_t x34 = INT64_MIN;
int32_t t8 = -2005;
volatile int64_t x40 = 93LL;
int32_t t9 = -23088300;
static int64_t x41 = -1LL;
int32_t x43 = -1;
int8_t x44 = 2;
static int64_t x51 = INT64_MIN;
static uint32_t x58 = 26U;
int8_t x62 = INT8_MIN;
int64_t x63 = 51788067LL;
int8_t x77 = -1;
volatile int64_t x78 = INT64_MAX;
int32_t t19 = -57424642;
uint32_t x82 = UINT32_MAX;
uint8_t x86 = 10U;
static uint16_t x87 = 49U;
uint16_t x90 = UINT16_MAX;
int32_t t22 = 523116;
int32_t x94 = INT32_MAX;
volatile int32_t t24 = -27;
int16_t x124 = INT16_MIN;
int32_t t30 = -51706812;
int32_t x127 = INT32_MIN;
uint8_t x131 = 1U;
int64_t x133 = INT64_MAX;
static int8_t x135 = INT8_MIN;
int16_t x141 = 1;
uint16_t x147 = 0U;
uint32_t x149 = UINT32_MAX;
static uint64_t x152 = 138197914135216403LLU;
int64_t x158 = -1LL;
volatile uint32_t x166 = 2347564U;
volatile int32_t t44 = 1;
volatile uint8_t x182 = 1U;
int32_t t45 = 106478908;
int64_t x189 = -1LL;
static volatile uint8_t x197 = 19U;
volatile int64_t x203 = -1363295LL;
int8_t x212 = -18;
uint64_t x214 = 95587776667LLU;
volatile int32_t t53 = 3;
static int32_t t54 = 1;
uint64_t x222 = UINT64_MAX;
uint32_t x224 = 149831U;
int64_t x227 = INT64_MAX;
static int32_t x230 = INT32_MIN;
static int16_t x231 = -1457;
int32_t x232 = INT32_MIN;
uint8_t x238 = UINT8_MAX;
uint16_t x252 = 42U;
volatile int16_t x253 = INT16_MIN;
uint8_t x255 = 39U;
int64_t x261 = -1LL;
int32_t x264 = -1;
static int32_t t65 = -1;
int64_t x271 = -68389115LL;
volatile int8_t x272 = 3;
uint32_t x275 = UINT32_MAX;
volatile int16_t x276 = -1;
volatile int32_t t68 = -134447211;
int32_t t69 = 3;
volatile int64_t x281 = INT64_MIN;
int64_t x282 = -1LL;
uint8_t x283 = 30U;
static uint16_t x285 = 360U;
uint8_t x291 = 1U;
static uint32_t x293 = 9U;
static volatile int32_t t73 = 271;
volatile int32_t x298 = -7194198;
int16_t x299 = -1;
int8_t x307 = INT8_MAX;
int8_t x311 = -1;
volatile int32_t t79 = -255605346;
static int16_t x326 = INT16_MAX;
int64_t x328 = -12087404769086LL;
uint32_t x333 = UINT32_MAX;
uint32_t x336 = 7592U;
int32_t t85 = 271119;
int16_t x345 = 1797;
int32_t x348 = INT32_MAX;
uint32_t x354 = 188782U;
int32_t x359 = 700199;
volatile uint32_t x360 = 9155011U;
volatile int32_t t89 = -501;
int16_t x363 = INT16_MAX;
int64_t x365 = INT64_MIN;
int32_t x371 = -1;
int64_t x372 = 57LL;
static uint16_t x377 = UINT16_MAX;
uint32_t x380 = UINT32_MAX;
int32_t x381 = INT32_MIN;
int32_t t95 = -1;
int8_t x389 = INT8_MIN;
int8_t x392 = INT8_MAX;
int64_t x396 = INT64_MIN;
int16_t x397 = INT16_MIN;
int32_t x402 = 0;
int16_t x405 = INT16_MIN;
static volatile uint16_t x408 = 708U;
volatile int32_t x417 = 1837374;
volatile int32_t t105 = 0;
int32_t x430 = INT32_MIN;
int32_t t107 = -22;
static volatile int32_t t108 = -5;
static int32_t t109 = 1933;
static uint64_t x456 = 4117906113LLU;
uint64_t x457 = 148841LLU;
volatile int8_t x468 = INT8_MIN;
int8_t x475 = INT8_MAX;
volatile int16_t x484 = INT16_MIN;
static int32_t t121 = -5;
static int16_t x492 = 0;
int16_t x496 = INT16_MAX;
int32_t x497 = INT32_MIN;
int64_t x499 = -1LL;
int16_t x500 = INT16_MIN;
static int32_t t124 = -1;
uint16_t x507 = 10U;
static uint64_t x515 = 49139203729138LLU;
uint32_t x516 = 1550632500U;
uint32_t x523 = UINT32_MAX;
static int8_t x528 = -1;
int32_t t131 = -33864;
volatile uint16_t x531 = UINT16_MAX;
int64_t x536 = INT64_MAX;
int32_t t134 = 7052;
int8_t x544 = -1;
int32_t t135 = 26120415;
uint32_t x551 = 7U;
int16_t x556 = INT16_MAX;
int16_t x559 = INT16_MIN;
uint16_t x563 = 1U;
int32_t x568 = INT32_MIN;
int64_t x581 = -639625LL;
volatile int32_t t145 = -3907;
static uint32_t x592 = 9644U;
uint16_t x593 = 1368U;
int32_t x597 = -11;
uint8_t x608 = 23U;
int64_t x616 = INT64_MAX;
int32_t x618 = INT32_MAX;
volatile int32_t t154 = -4;
int64_t x621 = -1LL;
int64_t x622 = INT64_MIN;
int16_t x625 = -1;
int32_t x626 = -9442333;
uint64_t x628 = 5207605863895557470LLU;
static volatile int8_t x632 = INT8_MIN;
uint64_t x643 = UINT64_MAX;
int32_t x650 = -1;
int32_t x654 = INT32_MAX;
uint32_t x657 = 219793U;
static volatile uint8_t x659 = 15U;
volatile int32_t x663 = 2090419;
volatile int16_t x664 = INT16_MIN;
static int32_t t165 = -69903;
int16_t x670 = -11785;
static int8_t x671 = INT8_MIN;
int32_t x672 = INT32_MIN;
uint32_t x674 = 148170U;
volatile uint64_t x686 = UINT64_MAX;
int16_t x687 = INT16_MIN;
int64_t x690 = INT64_MIN;
int32_t x694 = 15;
int32_t x698 = -58480;
volatile int32_t x703 = 184;
uint64_t x713 = 326379175287LLU;
int8_t x724 = -4;
static int8_t x726 = INT8_MIN;
int64_t x730 = -1LL;
int64_t x740 = -3867597063LL;
volatile int32_t t185 = 6395;
uint64_t x745 = 6549509951029179LLU;
volatile uint32_t x753 = 7216U;
int64_t x762 = INT64_MIN;
static int16_t x768 = -1;
int64_t x770 = INT64_MIN;
int8_t x772 = -1;
int64_t x776 = 61673LL;
static volatile uint64_t x798 = 5582214523LLU;


void f0(void) {
    	int8_t x1 = 5;
	int8_t x2 = INT8_MIN;
	int32_t x3 = INT32_MIN;
	volatile int32_t x4 = INT32_MIN;
	static volatile int32_t t0 = -99531917;

    t0 = ((x1!=(x2==x3))==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x6 = INT16_MIN;

    t1 = ((x5!=(x6==x7))==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x9 = INT8_MAX;
	volatile int32_t x10 = -1;
	int8_t x11 = 15;
	int64_t x12 = 3467796LL;
	int32_t t2 = 7202808;

    t2 = ((x9!=(x10==x11))==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint8_t x13 = 1U;
	volatile int16_t x14 = INT16_MIN;
	int16_t x15 = -16046;
	uint16_t x16 = 21U;
	int32_t t3 = -10;

    t3 = ((x13!=(x14==x15))==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x17 = -1;
	int64_t x19 = INT64_MIN;
	static uint64_t x20 = 34798420619223LLU;
	int32_t t4 = -142673340;

    t4 = ((x17!=(x18==x19))==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x22 = 35U;
	volatile int32_t x23 = 35725692;
	int8_t x24 = -1;

    t5 = ((x21!=(x22==x23))==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x26 = -158;
	static volatile uint8_t x28 = UINT8_MAX;
	static volatile int32_t t6 = 12566;

    t6 = ((x25!=(x26==x27))==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = 7706;
	int8_t x30 = -1;
	volatile int64_t x32 = -1LL;
	volatile int32_t t7 = -101350;

    t7 = ((x29!=(x30==x31))==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x33 = -1LL;
	int16_t x35 = -1;
	static volatile int32_t x36 = -1;

    t8 = ((x33!=(x34==x35))==x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x37 = -7555;
	uint32_t x38 = 68595U;
	uint64_t x39 = UINT64_MAX;

    t9 = ((x37!=(x38==x39))==x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x42 = 6U;
	volatile int32_t t10 = 238546;

    t10 = ((x41!=(x42==x43))==x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x45 = 38640901277442559LL;
	int32_t x46 = -1;
	volatile int16_t x47 = INT16_MIN;
	volatile uint8_t x48 = 49U;
	int32_t t11 = 203411;

    t11 = ((x45!=(x46==x47))==x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x49 = -44;
	static uint8_t x50 = UINT8_MAX;
	static uint8_t x52 = UINT8_MAX;
	static volatile int32_t t12 = 15433;

    t12 = ((x49!=(x50==x51))==x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = 1;
	volatile int32_t x54 = 332691;
	uint32_t x55 = UINT32_MAX;
	int16_t x56 = -1;
	static int32_t t13 = 117137;

    t13 = ((x53!=(x54==x55))==x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x57 = 126U;
	int16_t x59 = 703;
	volatile int16_t x60 = -1;
	int32_t t14 = -34462059;

    t14 = ((x57!=(x58==x59))==x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x61 = -1LL;
	int64_t x64 = INT64_MIN;
	int32_t t15 = -2068347;

    t15 = ((x61!=(x62==x63))==x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x65 = INT16_MAX;
	int8_t x66 = INT8_MIN;
	volatile int16_t x67 = 283;
	int64_t x68 = -106692LL;
	volatile int32_t t16 = 55350;

    t16 = ((x65!=(x66==x67))==x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint16_t x69 = 26705U;
	static int16_t x70 = INT16_MAX;
	int16_t x71 = INT16_MIN;
	int64_t x72 = INT64_MIN;
	int32_t t17 = 30;

    t17 = ((x69!=(x70==x71))==x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = -1127;
	int32_t x74 = INT32_MIN;
	int32_t x75 = INT32_MAX;
	volatile uint8_t x76 = 34U;
	int32_t t18 = 48;

    t18 = ((x73!=(x74==x75))==x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x79 = INT8_MIN;
	int32_t x80 = INT32_MAX;

    t19 = ((x77!=(x78==x79))==x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint64_t x81 = 1254LLU;
	int64_t x83 = INT64_MIN;
	int16_t x84 = -1;
	volatile int32_t t20 = 388694107;

    t20 = ((x81!=(x82==x83))==x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x85 = -1680;
	int64_t x88 = INT64_MIN;
	static volatile int32_t t21 = -13;

    t21 = ((x85!=(x86==x87))==x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x89 = INT8_MIN;
	volatile uint16_t x91 = UINT16_MAX;
	volatile uint32_t x92 = 4218U;

    t22 = ((x89!=(x90==x91))==x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = -2149697;
	volatile uint8_t x95 = 14U;
	uint16_t x96 = 456U;
	volatile int32_t t23 = -4;

    t23 = ((x93!=(x94==x95))==x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x97 = 18339024188LLU;
	int16_t x98 = INT16_MAX;
	static uint32_t x99 = 756365U;
	static int16_t x100 = -1;

    t24 = ((x97!=(x98==x99))==x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = -933;
	int8_t x102 = INT8_MIN;
	int32_t x103 = INT32_MIN;
	uint8_t x104 = 14U;
	int32_t t25 = 468116544;

    t25 = ((x101!=(x102==x103))==x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int16_t x105 = -9;
	int32_t x106 = INT32_MIN;
	static int64_t x107 = INT64_MIN;
	int64_t x108 = 4287638333897142LL;
	int32_t t26 = -12189;

    t26 = ((x105!=(x106==x107))==x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = 54;
	int32_t x110 = INT32_MIN;
	uint16_t x111 = 13U;
	int8_t x112 = INT8_MIN;
	volatile int32_t t27 = 3814115;

    t27 = ((x109!=(x110==x111))==x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = -246;
	uint8_t x114 = 41U;
	int8_t x115 = INT8_MAX;
	int8_t x116 = -1;
	int32_t t28 = -60911946;

    t28 = ((x113!=(x114==x115))==x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint8_t x117 = UINT8_MAX;
	static int16_t x118 = INT16_MIN;
	static int32_t x119 = INT32_MAX;
	uint64_t x120 = UINT64_MAX;
	static volatile int32_t t29 = -92;

    t29 = ((x117!=(x118==x119))==x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = -317;
	uint32_t x122 = 677514665U;
	static int64_t x123 = -1LL;

    t30 = ((x121!=(x122==x123))==x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint8_t x125 = 3U;
	int32_t x126 = INT32_MIN;
	uint32_t x128 = 22718U;
	static int32_t t31 = 203900;

    t31 = ((x125!=(x126==x127))==x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = 60604113;
	static int8_t x130 = INT8_MAX;
	int16_t x132 = -1;
	static volatile int32_t t32 = 4;

    t32 = ((x129!=(x130==x131))==x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x134 = INT32_MIN;
	uint64_t x136 = 5550680913LLU;
	volatile int32_t t33 = -3268536;

    t33 = ((x133!=(x134==x135))==x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint64_t x137 = UINT64_MAX;
	static int16_t x138 = -1;
	int16_t x139 = INT16_MIN;
	volatile int16_t x140 = 16193;
	volatile int32_t t34 = -2129161;

    t34 = ((x137!=(x138==x139))==x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x142 = INT8_MAX;
	static int8_t x143 = INT8_MIN;
	int32_t x144 = INT32_MIN;
	static int32_t t35 = 58;

    t35 = ((x141!=(x142==x143))==x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x145 = 151U;
	uint32_t x146 = 4083U;
	static uint32_t x148 = UINT32_MAX;
	volatile int32_t t36 = 911315695;

    t36 = ((x145!=(x146==x147))==x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x150 = -1LL;
	static int32_t x151 = -1;
	volatile int32_t t37 = 0;

    t37 = ((x149!=(x150==x151))==x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x153 = 5U;
	static volatile int64_t x154 = INT64_MIN;
	int32_t x155 = 499571;
	int32_t x156 = 1;
	volatile int32_t t38 = -37;

    t38 = ((x153!=(x154==x155))==x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = 1;
	static uint64_t x159 = UINT64_MAX;
	static int16_t x160 = INT16_MAX;
	static int32_t t39 = 756;

    t39 = ((x157!=(x158==x159))==x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = INT64_MIN;
	volatile uint32_t x162 = UINT32_MAX;
	int32_t x163 = -5;
	uint16_t x164 = 418U;
	int32_t t40 = 1056;

    t40 = ((x161!=(x162==x163))==x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = INT16_MAX;
	uint16_t x167 = 125U;
	int32_t x168 = INT32_MAX;
	static volatile int32_t t41 = 5;

    t41 = ((x165!=(x166==x167))==x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x169 = -6356825240470395LL;
	static volatile uint8_t x170 = 3U;
	int8_t x171 = INT8_MIN;
	uint32_t x172 = UINT32_MAX;
	int32_t t42 = -330331583;

    t42 = ((x169!=(x170==x171))==x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = INT64_MIN;
	uint32_t x174 = UINT32_MAX;
	int16_t x175 = INT16_MAX;
	static int8_t x176 = INT8_MIN;
	volatile int32_t t43 = -45290;

    t43 = ((x173!=(x174==x175))==x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = INT64_MAX;
	int16_t x178 = INT16_MIN;
	volatile int32_t x179 = 0;
	int16_t x180 = -1;

    t44 = ((x177!=(x178==x179))==x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = INT16_MAX;
	uint8_t x183 = 3U;
	static uint32_t x184 = UINT32_MAX;

    t45 = ((x181!=(x182==x183))==x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x185 = 3821488544LLU;
	int8_t x186 = INT8_MAX;
	uint32_t x187 = 974U;
	uint64_t x188 = 139082334LLU;
	volatile int32_t t46 = -136171;

    t46 = ((x185!=(x186==x187))==x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x190 = -1;
	int16_t x191 = 28;
	uint16_t x192 = 12718U;
	int32_t t47 = -1178834;

    t47 = ((x189!=(x190==x191))==x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint32_t x193 = UINT32_MAX;
	int64_t x194 = INT64_MIN;
	uint16_t x195 = UINT16_MAX;
	static int32_t x196 = INT32_MAX;
	volatile int32_t t48 = -171;

    t48 = ((x193!=(x194==x195))==x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x198 = -1LL;
	int16_t x199 = INT16_MIN;
	static uint32_t x200 = UINT32_MAX;
	int32_t t49 = -1528;

    t49 = ((x197!=(x198==x199))==x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x201 = UINT16_MAX;
	int16_t x202 = INT16_MIN;
	volatile int16_t x204 = 8770;
	volatile int32_t t50 = 1819;

    t50 = ((x201!=(x202==x203))==x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = -1;
	int32_t x206 = -1;
	static volatile int16_t x207 = -1;
	uint32_t x208 = 233624U;
	int32_t t51 = 1725;

    t51 = ((x205!=(x206==x207))==x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile uint32_t x209 = 15U;
	int16_t x210 = 2;
	int16_t x211 = INT16_MIN;
	volatile int32_t t52 = 387788503;

    t52 = ((x209!=(x210==x211))==x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint16_t x213 = 3U;
	static uint8_t x215 = 0U;
	static volatile int8_t x216 = INT8_MIN;

    t53 = ((x213!=(x214==x215))==x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x217 = INT16_MAX;
	int64_t x218 = INT64_MIN;
	int8_t x219 = 0;
	uint16_t x220 = 1U;

    t54 = ((x217!=(x218==x219))==x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = -1;
	uint32_t x223 = 2014U;
	static volatile int32_t t55 = 65688;

    t55 = ((x221!=(x222==x223))==x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = 7888;
	int16_t x226 = -1;
	uint64_t x228 = 104LLU;
	static volatile int32_t t56 = -38523;

    t56 = ((x225!=(x226==x227))==x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x229 = 23511LLU;
	int32_t t57 = -281;

    t57 = ((x229!=(x230==x231))==x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x233 = INT16_MIN;
	static volatile int64_t x234 = 187LL;
	int8_t x235 = INT8_MIN;
	volatile int8_t x236 = 0;
	volatile int32_t t58 = 107676062;

    t58 = ((x233!=(x234==x235))==x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint32_t x237 = 304653U;
	volatile int16_t x239 = 918;
	static volatile int32_t x240 = INT32_MIN;
	volatile int32_t t59 = -669;

    t59 = ((x237!=(x238==x239))==x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x241 = 408452340071610596LLU;
	static uint8_t x242 = 87U;
	static uint32_t x243 = 1663U;
	volatile uint64_t x244 = UINT64_MAX;
	int32_t t60 = -131440;

    t60 = ((x241!=(x242==x243))==x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = INT64_MIN;
	uint16_t x246 = 62U;
	int8_t x247 = -59;
	uint8_t x248 = UINT8_MAX;
	volatile int32_t t61 = 0;

    t61 = ((x245!=(x246==x247))==x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x249 = -1;
	volatile int8_t x250 = 27;
	static volatile int8_t x251 = -4;
	int32_t t62 = -35;

    t62 = ((x249!=(x250==x251))==x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x254 = -900972;
	uint16_t x256 = 8903U;
	static int32_t t63 = -161729270;

    t63 = ((x253!=(x254==x255))==x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x257 = -7;
	volatile int32_t x258 = 571754;
	volatile int16_t x259 = INT16_MAX;
	int16_t x260 = INT16_MIN;
	int32_t t64 = -3;

    t64 = ((x257!=(x258==x259))==x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x262 = UINT16_MAX;
	uint16_t x263 = UINT16_MAX;

    t65 = ((x261!=(x262==x263))==x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = 50;
	static int16_t x266 = INT16_MAX;
	static int16_t x267 = INT16_MIN;
	uint64_t x268 = UINT64_MAX;
	int32_t t66 = 0;

    t66 = ((x265!=(x266==x267))==x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x269 = INT16_MIN;
	uint64_t x270 = UINT64_MAX;
	volatile int32_t t67 = -9120747;

    t67 = ((x269!=(x270==x271))==x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x273 = INT8_MIN;
	volatile int32_t x274 = INT32_MAX;

    t68 = ((x273!=(x274==x275))==x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x277 = -2;
	int32_t x278 = -1;
	static int32_t x279 = -1058828232;
	static int16_t x280 = INT16_MIN;

    t69 = ((x277!=(x278==x279))==x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x284 = INT64_MAX;
	static int32_t t70 = 111;

    t70 = ((x281!=(x282==x283))==x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x286 = -1;
	uint8_t x287 = 10U;
	uint64_t x288 = 56692859235LLU;
	volatile int32_t t71 = 15;

    t71 = ((x285!=(x286==x287))==x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = INT64_MAX;
	uint8_t x290 = 0U;
	static uint64_t x292 = 3450503LLU;
	volatile int32_t t72 = -540305599;

    t72 = ((x289!=(x290==x291))==x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x294 = INT8_MAX;
	uint64_t x295 = UINT64_MAX;
	int8_t x296 = INT8_MIN;

    t73 = ((x293!=(x294==x295))==x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint8_t x297 = UINT8_MAX;
	int32_t x300 = 4613061;
	static volatile int32_t t74 = 68;

    t74 = ((x297!=(x298==x299))==x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x301 = 3485;
	int8_t x302 = 3;
	uint32_t x303 = 5U;
	int8_t x304 = INT8_MIN;
	int32_t t75 = -95;

    t75 = ((x301!=(x302==x303))==x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x305 = 1LLU;
	int8_t x306 = INT8_MAX;
	int32_t x308 = INT32_MIN;
	int32_t t76 = -4127;

    t76 = ((x305!=(x306==x307))==x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = 59158508;
	volatile int32_t x310 = 29624429;
	int64_t x312 = INT64_MAX;
	volatile int32_t t77 = 1;

    t77 = ((x309!=(x310==x311))==x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = 229;
	int64_t x314 = 148LL;
	int32_t x315 = INT32_MIN;
	int8_t x316 = -1;
	int32_t t78 = 2667;

    t78 = ((x313!=(x314==x315))==x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int32_t x317 = INT32_MAX;
	uint32_t x318 = UINT32_MAX;
	int16_t x319 = INT16_MIN;
	int64_t x320 = INT64_MAX;

    t79 = ((x317!=(x318==x319))==x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x321 = -20985LL;
	int64_t x322 = -40618554409245LL;
	uint16_t x323 = UINT16_MAX;
	volatile int32_t x324 = -1;
	volatile int32_t t80 = -428674;

    t80 = ((x321!=(x322==x323))==x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x325 = -1;
	int32_t x327 = 1157154;
	int32_t t81 = -140576104;

    t81 = ((x325!=(x326==x327))==x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x329 = UINT8_MAX;
	uint32_t x330 = UINT32_MAX;
	int64_t x331 = INT64_MIN;
	uint32_t x332 = 5992U;
	volatile int32_t t82 = -19;

    t82 = ((x329!=(x330==x331))==x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x334 = -209;
	int8_t x335 = -1;
	int32_t t83 = 1;

    t83 = ((x333!=(x334==x335))==x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x337 = 49U;
	uint16_t x338 = 6U;
	int32_t x339 = 961743006;
	static volatile uint32_t x340 = UINT32_MAX;
	volatile int32_t t84 = -7895;

    t84 = ((x337!=(x338==x339))==x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = -125443;
	static int16_t x342 = INT16_MAX;
	int8_t x343 = -7;
	int8_t x344 = -17;

    t85 = ((x341!=(x342==x343))==x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x346 = 9U;
	static uint64_t x347 = 1887114538612916LLU;
	volatile int32_t t86 = 185185;

    t86 = ((x345!=(x346==x347))==x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x349 = INT64_MIN;
	uint32_t x350 = 2758U;
	volatile int8_t x351 = INT8_MAX;
	uint16_t x352 = UINT16_MAX;
	volatile int32_t t87 = -97;

    t87 = ((x349!=(x350==x351))==x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = -5;
	volatile uint8_t x355 = 4U;
	int16_t x356 = INT16_MIN;
	volatile int32_t t88 = 1;

    t88 = ((x353!=(x354==x355))==x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = -45162934066246702LL;
	int64_t x358 = INT64_MIN;

    t89 = ((x357!=(x358==x359))==x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = 13;
	static volatile int32_t x362 = -1;
	int32_t x364 = -1;
	static int32_t t90 = 457;

    t90 = ((x361!=(x362==x363))==x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile uint16_t x366 = UINT16_MAX;
	int16_t x367 = -1;
	volatile uint8_t x368 = 3U;
	int32_t t91 = 749;

    t91 = ((x365!=(x366==x367))==x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x369 = UINT16_MAX;
	volatile int8_t x370 = 1;
	volatile int32_t t92 = -40;

    t92 = ((x369!=(x370==x371))==x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = 510407219775422LL;
	volatile int16_t x374 = -3;
	static int16_t x375 = INT16_MIN;
	static int32_t x376 = 1292396;
	int32_t t93 = 148098;

    t93 = ((x373!=(x374==x375))==x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x378 = UINT8_MAX;
	int16_t x379 = 0;
	int32_t t94 = -2;

    t94 = ((x377!=(x378==x379))==x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile uint32_t x382 = UINT32_MAX;
	int32_t x383 = INT32_MIN;
	static int8_t x384 = -1;

    t95 = ((x381!=(x382==x383))==x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = INT16_MIN;
	uint8_t x386 = 3U;
	int32_t x387 = INT32_MAX;
	static volatile uint64_t x388 = 14185206841LLU;
	static volatile int32_t t96 = -35094167;

    t96 = ((x385!=(x386==x387))==x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x390 = INT32_MIN;
	int8_t x391 = -6;
	volatile int32_t t97 = -306033265;

    t97 = ((x389!=(x390==x391))==x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x393 = -2;
	int16_t x394 = INT16_MIN;
	int32_t x395 = -1;
	int32_t t98 = -9;

    t98 = ((x393!=(x394==x395))==x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x398 = -6641;
	static volatile int16_t x399 = INT16_MIN;
	int32_t x400 = -1;
	volatile int32_t t99 = 26;

    t99 = ((x397!=(x398==x399))==x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x401 = INT8_MAX;
	uint8_t x403 = 59U;
	int32_t x404 = 1;
	int32_t t100 = 112701;

    t100 = ((x401!=(x402==x403))==x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint64_t x406 = UINT64_MAX;
	volatile int64_t x407 = INT64_MIN;
	volatile int32_t t101 = 211082314;

    t101 = ((x405!=(x406==x407))==x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x409 = -1;
	volatile int16_t x410 = 215;
	uint8_t x411 = 0U;
	uint8_t x412 = 15U;
	int32_t t102 = 14487053;

    t102 = ((x409!=(x410==x411))==x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = -3;
	static uint16_t x414 = 106U;
	uint8_t x415 = 8U;
	int32_t x416 = INT32_MIN;
	volatile int32_t t103 = 1;

    t103 = ((x413!=(x414==x415))==x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x418 = INT16_MIN;
	int32_t x419 = -1;
	int8_t x420 = -1;
	int32_t t104 = 6;

    t104 = ((x417!=(x418==x419))==x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int64_t x421 = INT64_MAX;
	volatile int8_t x422 = -1;
	int32_t x423 = 259574186;
	volatile uint32_t x424 = UINT32_MAX;

    t105 = ((x421!=(x422==x423))==x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x425 = INT32_MAX;
	static int16_t x426 = 42;
	int16_t x427 = INT16_MIN;
	uint64_t x428 = 1371LLU;
	int32_t t106 = 34000945;

    t106 = ((x425!=(x426==x427))==x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = INT64_MIN;
	uint8_t x431 = 5U;
	int16_t x432 = INT16_MAX;

    t107 = ((x429!=(x430==x431))==x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x433 = INT8_MIN;
	int64_t x434 = -1LL;
	static volatile int64_t x435 = -1LL;
	static int64_t x436 = INT64_MIN;

    t108 = ((x433!=(x434==x435))==x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = INT32_MAX;
	static volatile int8_t x438 = -1;
	static int8_t x439 = INT8_MAX;
	int64_t x440 = 0LL;

    t109 = ((x437!=(x438==x439))==x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint16_t x441 = 1U;
	int8_t x442 = INT8_MIN;
	int8_t x443 = 0;
	uint16_t x444 = 1U;
	int32_t t110 = 0;

    t110 = ((x441!=(x442==x443))==x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint8_t x445 = 7U;
	int32_t x446 = 859111863;
	static uint32_t x447 = 11268U;
	static int32_t x448 = -12556;
	volatile int32_t t111 = 751087;

    t111 = ((x445!=(x446==x447))==x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint16_t x449 = 40U;
	int8_t x450 = INT8_MIN;
	static int32_t x451 = 216039;
	int16_t x452 = -3;
	volatile int32_t t112 = -6;

    t112 = ((x449!=(x450==x451))==x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = -48;
	uint32_t x454 = 11U;
	volatile uint32_t x455 = 7761683U;
	volatile int32_t t113 = -267833;

    t113 = ((x453!=(x454==x455))==x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x458 = 54;
	volatile int16_t x459 = INT16_MIN;
	static uint8_t x460 = 2U;
	volatile int32_t t114 = -86;

    t114 = ((x457!=(x458==x459))==x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int16_t x461 = 2;
	int8_t x462 = -1;
	volatile uint32_t x463 = 440U;
	int32_t x464 = 4398;
	int32_t t115 = -245879697;

    t115 = ((x461!=(x462==x463))==x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x465 = 93431U;
	uint16_t x466 = UINT16_MAX;
	static int32_t x467 = -23223602;
	int32_t t116 = 3501;

    t116 = ((x465!=(x466==x467))==x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = -1;
	static uint8_t x470 = 9U;
	static volatile int16_t x471 = -1;
	volatile int32_t x472 = INT32_MAX;
	volatile int32_t t117 = 298351;

    t117 = ((x469!=(x470==x471))==x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int64_t x473 = -1LL;
	static uint16_t x474 = 314U;
	int32_t x476 = INT32_MIN;
	int32_t t118 = 29;

    t118 = ((x473!=(x474==x475))==x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x477 = 4U;
	int8_t x478 = -2;
	volatile int32_t x479 = INT32_MIN;
	uint64_t x480 = 1490611162LLU;
	static volatile int32_t t119 = 2918;

    t119 = ((x477!=(x478==x479))==x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x481 = -8118916;
	uint16_t x482 = 1002U;
	int16_t x483 = INT16_MIN;
	static int32_t t120 = 24258;

    t120 = ((x481!=(x482==x483))==x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x485 = 11U;
	int16_t x486 = -9;
	int32_t x487 = INT32_MIN;
	static int32_t x488 = -1;

    t121 = ((x485!=(x486==x487))==x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint16_t x489 = 1674U;
	int8_t x490 = 2;
	int8_t x491 = -1;
	int32_t t122 = 1549531;

    t122 = ((x489!=(x490==x491))==x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = -33069700060LL;
	uint16_t x494 = 8742U;
	static volatile uint8_t x495 = 9U;
	static volatile int32_t t123 = 655553425;

    t123 = ((x493!=(x494==x495))==x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile uint32_t x498 = UINT32_MAX;

    t124 = ((x497!=(x498==x499))==x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x501 = -1;
	static uint64_t x502 = 5370501234570LLU;
	int16_t x503 = INT16_MAX;
	static int8_t x504 = 6;
	volatile int32_t t125 = 99;

    t125 = ((x501!=(x502==x503))==x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x505 = -1LL;
	static int8_t x506 = 17;
	int64_t x508 = INT64_MAX;
	int32_t t126 = -6;

    t126 = ((x505!=(x506==x507))==x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x509 = INT64_MIN;
	volatile int32_t x510 = INT32_MAX;
	static uint64_t x511 = 63244235LLU;
	int32_t x512 = INT32_MIN;
	int32_t t127 = 57958387;

    t127 = ((x509!=(x510==x511))==x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = INT8_MIN;
	int64_t x514 = INT64_MAX;
	int32_t t128 = 0;

    t128 = ((x513!=(x514==x515))==x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x517 = -8880;
	volatile int8_t x518 = INT8_MIN;
	uint64_t x519 = 29877LLU;
	uint16_t x520 = 108U;
	volatile int32_t t129 = -448;

    t129 = ((x517!=(x518==x519))==x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = -1;
	uint8_t x522 = 12U;
	int16_t x524 = INT16_MIN;
	volatile int32_t t130 = 1;

    t130 = ((x521!=(x522==x523))==x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x525 = 2802764;
	static int32_t x526 = INT32_MAX;
	static int64_t x527 = INT64_MAX;

    t131 = ((x525!=(x526==x527))==x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x529 = -8903518;
	static uint32_t x530 = 1394984U;
	static int8_t x532 = 9;
	static int32_t t132 = 109867;

    t132 = ((x529!=(x530==x531))==x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x533 = -1;
	static int64_t x534 = -7761288721816848LL;
	static int64_t x535 = INT64_MIN;
	static volatile int32_t t133 = -8270814;

    t133 = ((x533!=(x534==x535))==x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = INT16_MIN;
	uint32_t x538 = UINT32_MAX;
	int16_t x539 = INT16_MIN;
	int16_t x540 = -1;

    t134 = ((x537!=(x538==x539))==x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x541 = -2754966336031LL;
	static int16_t x542 = -1;
	int8_t x543 = INT8_MIN;

    t135 = ((x541!=(x542==x543))==x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x545 = INT32_MIN;
	static int32_t x546 = INT32_MIN;
	uint16_t x547 = 1U;
	uint16_t x548 = 0U;
	int32_t t136 = 422055;

    t136 = ((x545!=(x546==x547))==x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x549 = INT64_MAX;
	static int32_t x550 = 77985120;
	uint8_t x552 = 5U;
	int32_t t137 = -3;

    t137 = ((x549!=(x550==x551))==x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x553 = 5560U;
	int8_t x554 = -1;
	volatile uint32_t x555 = 0U;
	int32_t t138 = -28454243;

    t138 = ((x553!=(x554==x555))==x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int32_t x557 = INT32_MIN;
	static int64_t x558 = INT64_MIN;
	static volatile int16_t x560 = -2;
	int32_t t139 = -11192870;

    t139 = ((x557!=(x558==x559))==x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x561 = -1;
	int32_t x562 = INT32_MIN;
	int16_t x564 = INT16_MAX;
	volatile int32_t t140 = -337802768;

    t140 = ((x561!=(x562==x563))==x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x565 = INT16_MIN;
	int16_t x566 = 668;
	volatile int8_t x567 = INT8_MIN;
	int32_t t141 = -242;

    t141 = ((x565!=(x566==x567))==x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x569 = 5;
	int8_t x570 = -1;
	static uint16_t x571 = UINT16_MAX;
	uint32_t x572 = 0U;
	static volatile int32_t t142 = -101;

    t142 = ((x569!=(x570==x571))==x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x573 = 15U;
	int64_t x574 = -1LL;
	volatile uint32_t x575 = 5200815U;
	int32_t x576 = INT32_MIN;
	int32_t t143 = -2597;

    t143 = ((x573!=(x574==x575))==x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x577 = 6042U;
	volatile int32_t x578 = -252;
	volatile uint64_t x579 = 96809225362385LLU;
	static volatile uint16_t x580 = 779U;
	static int32_t t144 = -3952;

    t144 = ((x577!=(x578==x579))==x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x582 = 23U;
	uint32_t x583 = 5512576U;
	static uint64_t x584 = 2505753680841LLU;

    t145 = ((x581!=(x582==x583))==x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x585 = UINT8_MAX;
	static int64_t x586 = INT64_MIN;
	volatile uint8_t x587 = UINT8_MAX;
	volatile uint8_t x588 = 16U;
	volatile int32_t t146 = 1;

    t146 = ((x585!=(x586==x587))==x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = -1;
	volatile int32_t x590 = INT32_MIN;
	uint32_t x591 = 247U;
	int32_t t147 = 60530;

    t147 = ((x589!=(x590==x591))==x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x594 = 907834223LLU;
	uint16_t x595 = 8558U;
	static int32_t x596 = -191;
	volatile int32_t t148 = 599314;

    t148 = ((x593!=(x594==x595))==x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x598 = -2;
	int16_t x599 = -1;
	volatile int32_t x600 = INT32_MAX;
	int32_t t149 = 1;

    t149 = ((x597!=(x598==x599))==x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x601 = 70580451;
	uint64_t x602 = UINT64_MAX;
	uint8_t x603 = UINT8_MAX;
	int32_t x604 = INT32_MIN;
	volatile int32_t t150 = 199454982;

    t150 = ((x601!=(x602==x603))==x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = INT8_MIN;
	int64_t x606 = INT64_MAX;
	int32_t x607 = INT32_MAX;
	volatile int32_t t151 = -2;

    t151 = ((x605!=(x606==x607))==x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint64_t x609 = 2828228329044LLU;
	int64_t x610 = INT64_MIN;
	int8_t x611 = INT8_MIN;
	int8_t x612 = INT8_MAX;
	int32_t t152 = 1022;

    t152 = ((x609!=(x610==x611))==x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = INT8_MIN;
	static uint8_t x614 = 28U;
	int32_t x615 = -1;
	volatile int32_t t153 = -817638967;

    t153 = ((x613!=(x614==x615))==x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x617 = 54U;
	int64_t x619 = INT64_MIN;
	static int8_t x620 = INT8_MIN;

    t154 = ((x617!=(x618==x619))==x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x623 = 105413048LLU;
	static int16_t x624 = INT16_MIN;
	volatile int32_t t155 = 168554169;

    t155 = ((x621!=(x622==x623))==x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x627 = UINT16_MAX;
	volatile int32_t t156 = -5516;

    t156 = ((x625!=(x626==x627))==x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile uint32_t x629 = UINT32_MAX;
	int32_t x630 = INT32_MAX;
	uint64_t x631 = 1638LLU;
	int32_t t157 = 233460;

    t157 = ((x629!=(x630==x631))==x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int32_t x633 = INT32_MIN;
	volatile int8_t x634 = 35;
	int32_t x635 = -1;
	static int64_t x636 = INT64_MIN;
	volatile int32_t t158 = 33319255;

    t158 = ((x633!=(x634==x635))==x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x637 = 8U;
	volatile int16_t x638 = INT16_MIN;
	int16_t x639 = INT16_MAX;
	volatile int32_t x640 = 146557768;
	int32_t t159 = -21234642;

    t159 = ((x637!=(x638==x639))==x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint8_t x641 = 27U;
	int8_t x642 = -1;
	int32_t x644 = 324;
	int32_t t160 = 12;

    t160 = ((x641!=(x642==x643))==x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x645 = INT8_MIN;
	volatile int16_t x646 = INT16_MAX;
	int64_t x647 = INT64_MIN;
	uint8_t x648 = 127U;
	volatile int32_t t161 = 46;

    t161 = ((x645!=(x646==x647))==x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = INT64_MAX;
	static uint16_t x651 = 54U;
	volatile int16_t x652 = -1;
	int32_t t162 = -65329092;

    t162 = ((x649!=(x650==x651))==x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x653 = 0;
	static int32_t x655 = INT32_MIN;
	int8_t x656 = 1;
	volatile int32_t t163 = 413;

    t163 = ((x653!=(x654==x655))==x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x658 = INT32_MIN;
	static uint32_t x660 = UINT32_MAX;
	int32_t t164 = -22;

    t164 = ((x657!=(x658==x659))==x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int8_t x661 = 3;
	int64_t x662 = INT64_MAX;

    t165 = ((x661!=(x662==x663))==x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = -1LL;
	static int16_t x666 = 0;
	int32_t x667 = INT32_MIN;
	int32_t x668 = -1;
	int32_t t166 = 1445;

    t166 = ((x665!=(x666==x667))==x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint32_t x669 = 17745U;
	int32_t t167 = 393;

    t167 = ((x669!=(x670==x671))==x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x673 = UINT16_MAX;
	int32_t x675 = INT32_MIN;
	uint64_t x676 = UINT64_MAX;
	volatile int32_t t168 = 881052118;

    t168 = ((x673!=(x674==x675))==x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x677 = INT8_MIN;
	static int16_t x678 = INT16_MIN;
	volatile int32_t x679 = INT32_MAX;
	static int32_t x680 = 516936287;
	volatile int32_t t169 = -926;

    t169 = ((x677!=(x678==x679))==x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x681 = 2293U;
	int16_t x682 = 6;
	int16_t x683 = INT16_MIN;
	int16_t x684 = INT16_MIN;
	int32_t t170 = 8;

    t170 = ((x681!=(x682==x683))==x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x685 = -1;
	static uint64_t x688 = UINT64_MAX;
	int32_t t171 = -94121;

    t171 = ((x685!=(x686==x687))==x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int16_t x689 = INT16_MIN;
	static uint32_t x691 = 22280U;
	int8_t x692 = INT8_MIN;
	volatile int32_t t172 = -16543365;

    t172 = ((x689!=(x690==x691))==x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x693 = 6;
	int16_t x695 = INT16_MAX;
	uint8_t x696 = 48U;
	static volatile int32_t t173 = -8166;

    t173 = ((x693!=(x694==x695))==x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile uint16_t x697 = UINT16_MAX;
	volatile int64_t x699 = INT64_MIN;
	uint32_t x700 = 337U;
	volatile int32_t t174 = 4365833;

    t174 = ((x697!=(x698==x699))==x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x701 = 13LLU;
	int32_t x702 = INT32_MIN;
	int16_t x704 = -1;
	static volatile int32_t t175 = -104566;

    t175 = ((x701!=(x702==x703))==x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x705 = INT32_MAX;
	int64_t x706 = INT64_MIN;
	volatile int8_t x707 = INT8_MAX;
	int32_t x708 = INT32_MAX;
	int32_t t176 = 3535;

    t176 = ((x705!=(x706==x707))==x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x709 = INT8_MAX;
	int64_t x710 = INT64_MIN;
	int32_t x711 = 1;
	uint8_t x712 = UINT8_MAX;
	static int32_t t177 = 53247;

    t177 = ((x709!=(x710==x711))==x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x714 = INT16_MIN;
	int16_t x715 = INT16_MIN;
	int16_t x716 = -47;
	int32_t t178 = -108553;

    t178 = ((x713!=(x714==x715))==x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint32_t x717 = 118U;
	volatile uint8_t x718 = 62U;
	static int8_t x719 = INT8_MAX;
	uint16_t x720 = UINT16_MAX;
	volatile int32_t t179 = -131626282;

    t179 = ((x717!=(x718==x719))==x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x721 = 19703U;
	volatile int64_t x722 = INT64_MAX;
	int16_t x723 = -7746;
	int32_t t180 = -1;

    t180 = ((x721!=(x722==x723))==x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = INT8_MIN;
	volatile int8_t x727 = 39;
	uint64_t x728 = 1860378852912LLU;
	int32_t t181 = 45372;

    t181 = ((x725!=(x726==x727))==x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = 991222LL;
	uint32_t x731 = UINT32_MAX;
	int16_t x732 = -1;
	int32_t t182 = 1;

    t182 = ((x729!=(x730==x731))==x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x733 = 28871;
	int64_t x734 = INT64_MIN;
	int64_t x735 = INT64_MIN;
	volatile int8_t x736 = -1;
	volatile int32_t t183 = -2702723;

    t183 = ((x733!=(x734==x735))==x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = INT8_MAX;
	int64_t x738 = INT64_MAX;
	int64_t x739 = -1LL;
	int32_t t184 = -32865174;

    t184 = ((x737!=(x738==x739))==x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x741 = -1;
	static volatile uint8_t x742 = 4U;
	uint32_t x743 = 26014U;
	int16_t x744 = -1;

    t185 = ((x741!=(x742==x743))==x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x746 = INT16_MIN;
	int64_t x747 = -1LL;
	int32_t x748 = INT32_MIN;
	volatile int32_t t186 = -1;

    t186 = ((x745!=(x746==x747))==x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x749 = INT16_MAX;
	int64_t x750 = -3575LL;
	static uint32_t x751 = 28861U;
	volatile int8_t x752 = -1;
	int32_t t187 = 127732005;

    t187 = ((x749!=(x750==x751))==x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x754 = UINT16_MAX;
	uint8_t x755 = 2U;
	uint64_t x756 = 144061521448839850LLU;
	int32_t t188 = 1;

    t188 = ((x753!=(x754==x755))==x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint8_t x757 = UINT8_MAX;
	int8_t x758 = INT8_MIN;
	uint32_t x759 = 2271U;
	int8_t x760 = INT8_MIN;
	int32_t t189 = 4782;

    t189 = ((x757!=(x758==x759))==x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint32_t x761 = 130U;
	static int32_t x763 = INT32_MIN;
	volatile uint32_t x764 = 4946090U;
	volatile int32_t t190 = -74544;

    t190 = ((x761!=(x762==x763))==x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x765 = INT8_MIN;
	uint64_t x766 = UINT64_MAX;
	uint8_t x767 = 2U;
	static int32_t t191 = 3;

    t191 = ((x765!=(x766==x767))==x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x769 = -3331;
	static int32_t x771 = -3;
	volatile int32_t t192 = -123251;

    t192 = ((x769!=(x770==x771))==x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x773 = 0;
	int8_t x774 = INT8_MAX;
	int64_t x775 = -191186616LL;
	static int32_t t193 = 80;

    t193 = ((x773!=(x774==x775))==x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = 0;
	static int8_t x778 = INT8_MIN;
	volatile int32_t x779 = INT32_MIN;
	uint64_t x780 = 106088LLU;
	int32_t t194 = 0;

    t194 = ((x777!=(x778==x779))==x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x781 = -1935239LL;
	int32_t x782 = INT32_MAX;
	int8_t x783 = 31;
	static int64_t x784 = INT64_MIN;
	volatile int32_t t195 = 1;

    t195 = ((x781!=(x782==x783))==x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint64_t x785 = 262686LLU;
	volatile int16_t x786 = INT16_MIN;
	int64_t x787 = 1LL;
	int16_t x788 = INT16_MAX;
	int32_t t196 = 138280;

    t196 = ((x785!=(x786==x787))==x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint8_t x789 = UINT8_MAX;
	volatile uint16_t x790 = UINT16_MAX;
	uint16_t x791 = UINT16_MAX;
	int64_t x792 = 10LL;
	int32_t t197 = 51919393;

    t197 = ((x789!=(x790==x791))==x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x793 = UINT8_MAX;
	uint64_t x794 = 0LLU;
	static int32_t x795 = 233346;
	int64_t x796 = -246147517008060844LL;
	volatile int32_t t198 = -63;

    t198 = ((x793!=(x794==x795))==x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x797 = 25U;
	uint64_t x799 = 39655LLU;
	int8_t x800 = INT8_MIN;
	static volatile int32_t t199 = -142752;

    t199 = ((x797!=(x798==x799))==x800);

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


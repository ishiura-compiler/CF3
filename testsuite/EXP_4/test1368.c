
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

int8_t x8 = INT8_MIN;
int32_t t2 = 260429649;
int32_t x13 = INT32_MAX;
static int32_t x20 = -738;
int32_t x24 = INT32_MIN;
int64_t x32 = -1LL;
static int16_t x35 = -8;
int16_t x36 = INT16_MAX;
static int32_t x38 = INT32_MIN;
static uint64_t x40 = UINT64_MAX;
static volatile uint8_t x44 = 8U;
volatile int32_t t11 = 1;
uint8_t x49 = 10U;
int32_t x52 = -1;
int16_t x53 = -1;
uint64_t x64 = 5700065550835303LLU;
static volatile int32_t t15 = -5093159;
int16_t x67 = INT16_MIN;
int8_t x68 = INT8_MIN;
uint8_t x79 = 9U;
uint16_t x82 = 3U;
static int16_t x84 = INT16_MIN;
volatile int32_t t21 = 34950710;
uint32_t x89 = 120618733U;
int32_t x92 = 0;
int64_t x93 = INT64_MIN;
uint8_t x94 = 31U;
int32_t x95 = -60;
volatile uint64_t x102 = 2027216LLU;
volatile int32_t t25 = 7353889;
uint16_t x106 = 0U;
static uint8_t x109 = 9U;
uint16_t x115 = UINT16_MAX;
int64_t x120 = INT64_MIN;
static int8_t x126 = INT8_MAX;
int64_t x127 = INT64_MIN;
int8_t x131 = INT8_MAX;
int32_t t32 = 15256;
volatile int32_t x135 = 44171383;
int32_t x136 = -1;
int8_t x140 = INT8_MIN;
int32_t x143 = 346344;
int32_t x144 = 402109815;
int32_t x156 = 0;
int32_t t39 = 8;
static int64_t x161 = INT64_MAX;
volatile uint16_t x166 = UINT16_MAX;
volatile int32_t t41 = -510537424;
static int64_t x174 = -453029LL;
static int64_t x175 = INT64_MAX;
volatile int64_t x176 = INT64_MAX;
volatile int32_t t43 = 90493549;
static volatile int32_t t44 = 2;
int32_t x182 = INT32_MIN;
int64_t x183 = INT64_MAX;
int8_t x186 = -1;
static int16_t x189 = -5;
uint64_t x190 = 93LLU;
uint16_t x191 = 2U;
volatile int32_t t48 = -560;
static uint8_t x200 = UINT8_MAX;
volatile uint64_t x202 = UINT64_MAX;
uint16_t x203 = 30479U;
static volatile int32_t t50 = 50434;
int16_t x207 = -1;
volatile uint16_t x213 = 2889U;
int32_t t53 = 0;
int32_t t55 = -105476;
volatile int32_t x229 = 845978;
int32_t x230 = INT32_MIN;
uint32_t x236 = UINT32_MAX;
int16_t x237 = INT16_MIN;
int32_t t59 = 443236973;
volatile int32_t t60 = 1;
int16_t x245 = INT16_MAX;
int64_t x247 = INT64_MIN;
volatile int32_t t61 = -73853;
uint8_t x249 = 2U;
static uint64_t x250 = 1061750793704LLU;
int64_t x253 = INT64_MAX;
int64_t x257 = -78740600819LL;
uint16_t x266 = UINT16_MAX;
volatile int8_t x270 = INT8_MAX;
int8_t x276 = -1;
static int64_t x279 = INT64_MIN;
volatile int32_t t69 = 1;
int16_t x282 = INT16_MIN;
volatile int32_t t71 = -15860;
uint16_t x291 = UINT16_MAX;
uint16_t x302 = 496U;
static int64_t x305 = 50631LL;
static volatile int32_t t76 = 715;
static volatile uint32_t x309 = 1202U;
uint64_t x316 = 69878LLU;
uint16_t x323 = UINT16_MAX;
static volatile uint8_t x324 = 0U;
static int8_t x325 = INT8_MIN;
int16_t x328 = INT16_MIN;
int16_t x337 = INT16_MIN;
int8_t x338 = INT8_MIN;
volatile int64_t x339 = INT64_MAX;
int32_t x340 = INT32_MAX;
int32_t t85 = -1;
int8_t x346 = 0;
int64_t x347 = -101295882263612LL;
static int64_t x349 = -1LL;
int32_t x351 = INT32_MAX;
int8_t x355 = -1;
int8_t x358 = 0;
int16_t x361 = -1;
int32_t x362 = 14;
volatile int32_t x369 = INT32_MIN;
volatile int8_t x372 = INT8_MIN;
int64_t x380 = 289940822932022LL;
static int64_t x381 = -1LL;
static uint64_t x382 = 5917021386880LLU;
volatile uint16_t x383 = 523U;
static volatile int64_t x384 = 335386716189LL;
int32_t t95 = -1;
uint16_t x387 = UINT16_MAX;
int8_t x388 = INT8_MIN;
volatile int32_t t96 = 1595;
int8_t x394 = INT8_MAX;
uint32_t x396 = 13468U;
int32_t t101 = -12;
uint64_t x409 = 6978177629933078272LLU;
volatile int32_t t102 = -819214472;
int8_t x419 = -1;
int16_t x420 = INT16_MIN;
int64_t x424 = INT64_MIN;
volatile int32_t t105 = -4836;
int32_t t108 = 2083758;
int16_t x437 = INT16_MIN;
static int16_t x441 = INT16_MIN;
int32_t t111 = 17;
volatile uint8_t x449 = 2U;
static volatile int32_t t112 = -13;
volatile int32_t t113 = -3853506;
static uint32_t x481 = 5198476U;
int32_t x486 = -46390;
volatile int32_t t122 = -1471047;
volatile int8_t x494 = INT8_MIN;
volatile int32_t x495 = INT32_MAX;
uint32_t x500 = 39U;
int64_t x504 = -1803823817LL;
uint64_t x507 = 29288077385943LLU;
uint8_t x509 = 0U;
volatile int32_t t130 = -850773;
uint32_t x527 = UINT32_MAX;
uint32_t x535 = 3037059U;
static volatile int8_t x538 = INT8_MAX;
uint64_t x540 = 41LLU;
int8_t x541 = -1;
int8_t x543 = INT8_MAX;
int32_t x545 = INT32_MIN;
int16_t x546 = INT16_MIN;
volatile int32_t t136 = 93931;
volatile int32_t x552 = INT32_MAX;
volatile int32_t t138 = 1;
int16_t x557 = INT16_MIN;
uint16_t x561 = UINT16_MAX;
int8_t x564 = INT8_MIN;
int8_t x568 = INT8_MIN;
int32_t x573 = INT32_MAX;
int16_t x578 = -1;
uint64_t x579 = 671758872314429769LLU;
int32_t t144 = 514;
volatile int32_t x582 = -31948225;
int16_t x584 = -5842;
int8_t x588 = -1;
int8_t x592 = 9;
volatile int8_t x594 = 1;
int64_t x615 = -1LL;
uint16_t x617 = UINT16_MAX;
volatile int32_t t154 = -1734;
int8_t x622 = -9;
uint32_t x629 = 45U;
int64_t x634 = -29635641872447LL;
int16_t x638 = INT16_MIN;
uint16_t x640 = 29U;
int8_t x643 = INT8_MIN;
int32_t x655 = INT32_MIN;
static int32_t t163 = 160973;
int64_t x669 = INT64_MAX;
int32_t x673 = 1292;
volatile int64_t x679 = INT64_MIN;
int32_t x684 = -37;
volatile uint32_t x692 = UINT32_MAX;
int64_t x711 = INT64_MIN;
int16_t x719 = INT16_MIN;
static uint8_t x721 = 23U;
static volatile int32_t t180 = -1325;
volatile int32_t x725 = INT32_MIN;
volatile int8_t x726 = -1;
int32_t x732 = -69;
static int64_t x736 = 6161LL;
volatile int32_t t183 = 2;
int32_t x740 = INT32_MIN;
int32_t t184 = -679538993;
static volatile uint64_t x741 = UINT64_MAX;
int16_t x743 = INT16_MIN;
int32_t t185 = 34;
static uint32_t x756 = 10124613U;
uint16_t x760 = 483U;
uint16_t x763 = 2285U;
volatile int32_t t190 = -272293604;
int32_t x765 = -1;
uint8_t x770 = 23U;
static int32_t t192 = -1;
int64_t x777 = -391LL;
volatile int32_t t195 = 142404591;
volatile int16_t x787 = INT16_MAX;
int32_t x792 = -239870;
static int32_t x798 = 12133157;
static uint16_t x799 = 118U;


void f0(void) {
    	static uint16_t x1 = UINT16_MAX;
	uint32_t x2 = 17858040U;
	int8_t x3 = INT8_MAX;
	static uint16_t x4 = 3U;
	static volatile int32_t t0 = 116;

    t0 = (x1<=(x2^(x3!=x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x5 = 837U;
	volatile int16_t x6 = 2033;
	int8_t x7 = -43;
	int32_t t1 = -3758;

    t1 = (x5<=(x6^(x7!=x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MAX;
	volatile int32_t x10 = INT32_MIN;
	int64_t x11 = INT64_MIN;
	static volatile int32_t x12 = INT32_MAX;

    t2 = (x9<=(x10^(x11!=x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x14 = 296;
	int16_t x15 = 349;
	int32_t x16 = INT32_MIN;
	int32_t t3 = -17;

    t3 = (x13<=(x14^(x15!=x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int16_t x17 = INT16_MAX;
	int64_t x18 = INT64_MAX;
	uint8_t x19 = UINT8_MAX;
	volatile int32_t t4 = -55914;

    t4 = (x17<=(x18^(x19!=x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MAX;
	int16_t x22 = 67;
	int64_t x23 = 2LL;
	volatile int32_t t5 = -100;

    t5 = (x21<=(x22^(x23!=x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 5343382273198LLU;
	static uint8_t x26 = UINT8_MAX;
	uint8_t x27 = 8U;
	int8_t x28 = INT8_MAX;
	volatile int32_t t6 = -416391;

    t6 = (x25<=(x26^(x27!=x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint32_t x29 = UINT32_MAX;
	uint8_t x30 = 0U;
	static uint16_t x31 = 347U;
	int32_t t7 = 28;

    t7 = (x29<=(x30^(x31!=x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = INT8_MIN;
	int32_t x34 = 678;
	volatile int32_t t8 = 1;

    t8 = (x33<=(x34^(x35!=x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int64_t x37 = 1954261LL;
	int32_t x39 = INT32_MAX;
	int32_t t9 = -20;

    t9 = (x37<=(x38^(x39!=x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = -1;
	int64_t x42 = -1LL;
	static int32_t x43 = INT32_MAX;
	int32_t t10 = -17211;

    t10 = (x41<=(x42^(x43!=x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x45 = 5U;
	int8_t x46 = 8;
	uint8_t x47 = UINT8_MAX;
	int16_t x48 = INT16_MAX;

    t11 = (x45<=(x46^(x47!=x48)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x50 = UINT32_MAX;
	static uint64_t x51 = 200376090955613208LLU;
	volatile int32_t t12 = -3;

    t12 = (x49<=(x50^(x51!=x52)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x54 = INT8_MAX;
	volatile int64_t x55 = INT64_MIN;
	int8_t x56 = INT8_MAX;
	volatile int32_t t13 = 203360224;

    t13 = (x53<=(x54^(x55!=x56)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = INT8_MAX;
	volatile int64_t x58 = INT64_MAX;
	uint64_t x59 = 0LLU;
	int32_t x60 = INT32_MAX;
	volatile int32_t t14 = 63379890;

    t14 = (x57<=(x58^(x59!=x60)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = INT16_MIN;
	static uint64_t x62 = UINT64_MAX;
	int8_t x63 = INT8_MAX;

    t15 = (x61<=(x62^(x63!=x64)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = INT64_MIN;
	int32_t x66 = 0;
	int32_t t16 = -231;

    t16 = (x65<=(x66^(x67!=x68)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x69 = INT8_MIN;
	int8_t x70 = INT8_MIN;
	volatile uint8_t x71 = 31U;
	uint16_t x72 = 90U;
	volatile int32_t t17 = 790779897;

    t17 = (x69<=(x70^(x71!=x72)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x73 = UINT32_MAX;
	volatile int64_t x74 = INT64_MAX;
	static int16_t x75 = INT16_MIN;
	int16_t x76 = 9;
	volatile int32_t t18 = 268390152;

    t18 = (x73<=(x74^(x75!=x76)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x77 = 4109817290777683346LLU;
	static int32_t x78 = INT32_MAX;
	int16_t x80 = INT16_MIN;
	volatile int32_t t19 = 309;

    t19 = (x77<=(x78^(x79!=x80)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x81 = 1795373U;
	volatile uint16_t x83 = 1471U;
	static volatile int32_t t20 = -3;

    t20 = (x81<=(x82^(x83!=x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x85 = -7;
	int16_t x86 = -1;
	int8_t x87 = -3;
	static int16_t x88 = INT16_MAX;

    t21 = (x85<=(x86^(x87!=x88)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x90 = INT16_MAX;
	volatile int8_t x91 = INT8_MIN;
	static int32_t t22 = -1;

    t22 = (x89<=(x90^(x91!=x92)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x96 = INT64_MAX;
	int32_t t23 = 230;

    t23 = (x93<=(x94^(x95!=x96)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = -1;
	int16_t x98 = 1191;
	int32_t x99 = INT32_MIN;
	int16_t x100 = INT16_MIN;
	static int32_t t24 = -39;

    t24 = (x97<=(x98^(x99!=x100)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = -1;
	int32_t x103 = INT32_MIN;
	static int64_t x104 = INT64_MIN;

    t25 = (x101<=(x102^(x103!=x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x105 = 69571015875389803LLU;
	volatile int64_t x107 = -1LL;
	uint8_t x108 = UINT8_MAX;
	volatile int32_t t26 = -3;

    t26 = (x105<=(x106^(x107!=x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x110 = 87U;
	volatile int64_t x111 = -217815752724LL;
	int8_t x112 = INT8_MIN;
	volatile int32_t t27 = -6161;

    t27 = (x109<=(x110^(x111!=x112)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x113 = -1;
	int8_t x114 = INT8_MIN;
	uint64_t x116 = 3760105767073LLU;
	volatile int32_t t28 = 609;

    t28 = (x113<=(x114^(x115!=x116)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = -1LL;
	static int8_t x118 = -1;
	int64_t x119 = 221371LL;
	static int32_t t29 = 1116;

    t29 = (x117<=(x118^(x119!=x120)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = -1LL;
	static uint64_t x122 = 398665453LLU;
	uint16_t x123 = 1951U;
	int16_t x124 = INT16_MAX;
	int32_t t30 = -5660488;

    t30 = (x121<=(x122^(x123!=x124)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x125 = 4U;
	volatile uint64_t x128 = UINT64_MAX;
	volatile int32_t t31 = -367495098;

    t31 = (x125<=(x126^(x127!=x128)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = INT8_MAX;
	static volatile uint64_t x130 = 611LLU;
	uint64_t x132 = 360215977961LLU;

    t32 = (x129<=(x130^(x131!=x132)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = -49378591LL;
	int32_t x134 = -12324;
	int32_t t33 = -407493;

    t33 = (x133<=(x134^(x135!=x136)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x137 = INT8_MIN;
	volatile int8_t x138 = INT8_MAX;
	static int8_t x139 = -1;
	int32_t t34 = 0;

    t34 = (x137<=(x138^(x139!=x140)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = -4;
	uint8_t x142 = 48U;
	static volatile int32_t t35 = -925164;

    t35 = (x141<=(x142^(x143!=x144)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = INT32_MIN;
	static volatile uint16_t x146 = 30U;
	int32_t x147 = INT32_MIN;
	int64_t x148 = INT64_MAX;
	volatile int32_t t36 = -975213854;

    t36 = (x145<=(x146^(x147!=x148)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = 0;
	int32_t x150 = INT32_MAX;
	uint64_t x151 = 3048625732225088451LLU;
	volatile int16_t x152 = 21;
	volatile int32_t t37 = -34988865;

    t37 = (x149<=(x150^(x151!=x152)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x153 = 1050710547U;
	static int32_t x154 = -1036217989;
	uint8_t x155 = 0U;
	int32_t t38 = 12944713;

    t38 = (x153<=(x154^(x155!=x156)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x157 = INT8_MAX;
	uint8_t x158 = 13U;
	uint8_t x159 = 8U;
	int16_t x160 = INT16_MIN;

    t39 = (x157<=(x158^(x159!=x160)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x162 = UINT16_MAX;
	uint32_t x163 = 9U;
	static uint8_t x164 = 54U;
	int32_t t40 = 297449067;

    t40 = (x161<=(x162^(x163!=x164)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x165 = 224571670608800LLU;
	volatile uint16_t x167 = 4U;
	volatile int32_t x168 = INT32_MIN;

    t41 = (x165<=(x166^(x167!=x168)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x169 = 4063646LLU;
	int32_t x170 = -1;
	int16_t x171 = 20;
	uint32_t x172 = 78U;
	static int32_t t42 = -228722;

    t42 = (x169<=(x170^(x171!=x172)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x173 = -1;

    t43 = (x173<=(x174^(x175!=x176)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint8_t x177 = 5U;
	int8_t x178 = INT8_MIN;
	static int16_t x179 = INT16_MIN;
	int64_t x180 = -169316323410908746LL;

    t44 = (x177<=(x178^(x179!=x180)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x181 = INT8_MIN;
	static int32_t x184 = INT32_MAX;
	int32_t t45 = 53;

    t45 = (x181<=(x182^(x183!=x184)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x185 = -1LL;
	static uint16_t x187 = 3175U;
	uint8_t x188 = 2U;
	int32_t t46 = 244849;

    t46 = (x185<=(x186^(x187!=x188)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x192 = INT8_MAX;
	volatile int32_t t47 = 3;

    t47 = (x189<=(x190^(x191!=x192)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = INT16_MAX;
	volatile uint16_t x194 = UINT16_MAX;
	int64_t x195 = -4058268403226LL;
	static int16_t x196 = INT16_MIN;

    t48 = (x193<=(x194^(x195!=x196)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = 1;
	int32_t x198 = INT32_MIN;
	uint64_t x199 = 44327565697625LLU;
	int32_t t49 = 1229460;

    t49 = (x197<=(x198^(x199!=x200)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = 68559706LL;
	int32_t x204 = INT32_MIN;

    t50 = (x201<=(x202^(x203!=x204)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = INT32_MIN;
	uint32_t x206 = 1982134605U;
	int32_t x208 = INT32_MIN;
	int32_t t51 = 2820;

    t51 = (x205<=(x206^(x207!=x208)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x209 = -52;
	int8_t x210 = INT8_MIN;
	static uint32_t x211 = UINT32_MAX;
	uint64_t x212 = 4786251043006348LLU;
	int32_t t52 = 399;

    t52 = (x209<=(x210^(x211!=x212)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x214 = INT64_MAX;
	volatile int64_t x215 = 1455091LL;
	uint8_t x216 = UINT8_MAX;

    t53 = (x213<=(x214^(x215!=x216)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x217 = INT16_MIN;
	static int64_t x218 = INT64_MIN;
	int32_t x219 = INT32_MIN;
	static int32_t x220 = INT32_MIN;
	static int32_t t54 = 305;

    t54 = (x217<=(x218^(x219!=x220)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x221 = 23110760742LL;
	static int32_t x222 = -7191692;
	int64_t x223 = INT64_MIN;
	int64_t x224 = INT64_MIN;

    t55 = (x221<=(x222^(x223!=x224)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x225 = 4U;
	int16_t x226 = INT16_MIN;
	volatile int16_t x227 = INT16_MAX;
	int64_t x228 = INT64_MAX;
	volatile int32_t t56 = 57420154;

    t56 = (x225<=(x226^(x227!=x228)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x231 = 15031120813LL;
	int64_t x232 = -1LL;
	int32_t t57 = -22;

    t57 = (x229<=(x230^(x231!=x232)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = INT64_MIN;
	static int16_t x234 = INT16_MAX;
	volatile int32_t x235 = -1;
	int32_t t58 = -75655;

    t58 = (x233<=(x234^(x235!=x236)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x238 = INT64_MIN;
	uint64_t x239 = 13678396LLU;
	int16_t x240 = INT16_MAX;

    t59 = (x237<=(x238^(x239!=x240)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x241 = INT16_MIN;
	uint16_t x242 = 15U;
	volatile int32_t x243 = 0;
	int32_t x244 = 8;

    t60 = (x241<=(x242^(x243!=x244)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x246 = -46;
	uint32_t x248 = UINT32_MAX;

    t61 = (x245<=(x246^(x247!=x248)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x251 = 3903208U;
	int8_t x252 = -8;
	volatile int32_t t62 = 0;

    t62 = (x249<=(x250^(x251!=x252)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint8_t x254 = UINT8_MAX;
	int64_t x255 = -198LL;
	static volatile int32_t x256 = INT32_MIN;
	volatile int32_t t63 = 274;

    t63 = (x253<=(x254^(x255!=x256)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint16_t x258 = 1156U;
	int32_t x259 = -140935;
	int32_t x260 = INT32_MIN;
	volatile int32_t t64 = 245143;

    t64 = (x257<=(x258^(x259!=x260)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x261 = UINT8_MAX;
	uint8_t x262 = 27U;
	int16_t x263 = -1;
	static int16_t x264 = -1;
	int32_t t65 = 63;

    t65 = (x261<=(x262^(x263!=x264)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint64_t x265 = 665834LLU;
	int8_t x267 = -1;
	static volatile int64_t x268 = INT64_MIN;
	volatile int32_t t66 = -42061;

    t66 = (x265<=(x266^(x267!=x268)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x269 = 1U;
	uint16_t x271 = UINT16_MAX;
	uint32_t x272 = UINT32_MAX;
	volatile int32_t t67 = -21;

    t67 = (x269<=(x270^(x271!=x272)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint64_t x273 = 12171012113873041LLU;
	int32_t x274 = INT32_MIN;
	uint64_t x275 = 2179001950069063LLU;
	volatile int32_t t68 = -13;

    t68 = (x273<=(x274^(x275!=x276)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = 35;
	int16_t x278 = INT16_MIN;
	volatile uint16_t x280 = 0U;

    t69 = (x277<=(x278^(x279!=x280)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = -626;
	static uint8_t x283 = UINT8_MAX;
	volatile int16_t x284 = 132;
	int32_t t70 = -4827400;

    t70 = (x281<=(x282^(x283!=x284)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x285 = 3115;
	int32_t x286 = 242324481;
	uint8_t x287 = 0U;
	uint16_t x288 = 6U;

    t71 = (x285<=(x286^(x287!=x288)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = -1;
	uint8_t x290 = 48U;
	uint16_t x292 = 31U;
	volatile int32_t t72 = 26;

    t72 = (x289<=(x290^(x291!=x292)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = INT32_MIN;
	int32_t x294 = -1;
	volatile int64_t x295 = INT64_MIN;
	int64_t x296 = -5892968438048377LL;
	static volatile int32_t t73 = 7;

    t73 = (x293<=(x294^(x295!=x296)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = -1LL;
	static uint64_t x298 = 663962560568287008LLU;
	static volatile int16_t x299 = -1;
	static uint8_t x300 = 10U;
	int32_t t74 = -12;

    t74 = (x297<=(x298^(x299!=x300)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x301 = INT16_MIN;
	int32_t x303 = -391070320;
	int8_t x304 = INT8_MAX;
	volatile int32_t t75 = -5260;

    t75 = (x301<=(x302^(x303!=x304)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x306 = UINT16_MAX;
	int8_t x307 = 7;
	static int8_t x308 = 1;

    t76 = (x305<=(x306^(x307!=x308)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x310 = -1;
	uint64_t x311 = 2781637832304LLU;
	int16_t x312 = INT16_MIN;
	static volatile int32_t t77 = -3;

    t77 = (x309<=(x310^(x311!=x312)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint8_t x313 = 0U;
	static uint64_t x314 = 117LLU;
	uint32_t x315 = 28608849U;
	static int32_t t78 = -31442;

    t78 = (x313<=(x314^(x315!=x316)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x317 = INT64_MAX;
	int64_t x318 = -88600901492LL;
	int64_t x319 = INT64_MIN;
	static int8_t x320 = INT8_MIN;
	volatile int32_t t79 = 982;

    t79 = (x317<=(x318^(x319!=x320)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = INT16_MAX;
	uint16_t x322 = UINT16_MAX;
	volatile int32_t t80 = 457;

    t80 = (x321<=(x322^(x323!=x324)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x326 = INT32_MIN;
	static int16_t x327 = -1;
	volatile int32_t t81 = 51149139;

    t81 = (x325<=(x326^(x327!=x328)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = INT64_MAX;
	static uint16_t x330 = UINT16_MAX;
	int32_t x331 = -1;
	uint16_t x332 = UINT16_MAX;
	int32_t t82 = -1561436;

    t82 = (x329<=(x330^(x331!=x332)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint8_t x333 = 2U;
	static uint64_t x334 = 27932329LLU;
	int8_t x335 = 37;
	uint64_t x336 = 388311202033173LLU;
	volatile int32_t t83 = -43;

    t83 = (x333<=(x334^(x335!=x336)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t t84 = -6864;

    t84 = (x337<=(x338^(x339!=x340)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x341 = UINT32_MAX;
	volatile int8_t x342 = INT8_MAX;
	int16_t x343 = -1;
	static volatile uint16_t x344 = 430U;

    t85 = (x341<=(x342^(x343!=x344)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = INT16_MAX;
	int8_t x348 = INT8_MIN;
	int32_t t86 = 23;

    t86 = (x345<=(x346^(x347!=x348)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x350 = 990U;
	uint64_t x352 = UINT64_MAX;
	static volatile int32_t t87 = 861746237;

    t87 = (x349<=(x350^(x351!=x352)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x353 = -108;
	uint32_t x354 = 191277821U;
	uint16_t x356 = UINT16_MAX;
	static volatile int32_t t88 = -128786;

    t88 = (x353<=(x354^(x355!=x356)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = -1;
	int32_t x359 = INT32_MIN;
	uint32_t x360 = 2012060U;
	int32_t t89 = 12;

    t89 = (x357<=(x358^(x359!=x360)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint64_t x363 = 8959916LLU;
	static uint32_t x364 = 689U;
	int32_t t90 = 898;

    t90 = (x361<=(x362^(x363!=x364)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x365 = -56;
	volatile int32_t x366 = -30958974;
	uint8_t x367 = UINT8_MAX;
	int64_t x368 = INT64_MIN;
	volatile int32_t t91 = 71183;

    t91 = (x365<=(x366^(x367!=x368)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x370 = UINT8_MAX;
	static int64_t x371 = 55093LL;
	int32_t t92 = -2;

    t92 = (x369<=(x370^(x371!=x372)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint16_t x373 = 1005U;
	int8_t x374 = 37;
	int32_t x375 = INT32_MAX;
	int64_t x376 = -37704LL;
	volatile int32_t t93 = -1530780;

    t93 = (x373<=(x374^(x375!=x376)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = -1;
	volatile int32_t x378 = INT32_MIN;
	volatile int8_t x379 = INT8_MAX;
	int32_t t94 = -350684;

    t94 = (x377<=(x378^(x379!=x380)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    

    t95 = (x381<=(x382^(x383!=x384)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x385 = 122U;
	int16_t x386 = -1;

    t96 = (x385<=(x386^(x387!=x388)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x389 = -29450761;
	int16_t x390 = INT16_MAX;
	volatile int16_t x391 = -3;
	int32_t x392 = -13785;
	int32_t t97 = -1833;

    t97 = (x389<=(x390^(x391!=x392)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x393 = -6;
	static uint8_t x395 = UINT8_MAX;
	volatile int32_t t98 = 7;

    t98 = (x393<=(x394^(x395!=x396)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x397 = INT64_MAX;
	int64_t x398 = -1LL;
	volatile int64_t x399 = 574871585545404LL;
	int32_t x400 = 3201942;
	int32_t t99 = 1;

    t99 = (x397<=(x398^(x399!=x400)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int32_t x401 = -74170;
	uint32_t x402 = UINT32_MAX;
	volatile int16_t x403 = INT16_MIN;
	static int8_t x404 = -28;
	volatile int32_t t100 = 800643;

    t100 = (x401<=(x402^(x403!=x404)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = INT32_MIN;
	int64_t x406 = -1LL;
	uint32_t x407 = UINT32_MAX;
	volatile int32_t x408 = 3;

    t101 = (x405<=(x406^(x407!=x408)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x410 = -1LL;
	volatile int16_t x411 = INT16_MAX;
	static uint64_t x412 = 46242308294LLU;

    t102 = (x409<=(x410^(x411!=x412)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint8_t x413 = 54U;
	int8_t x414 = INT8_MAX;
	volatile uint32_t x415 = UINT32_MAX;
	uint16_t x416 = 0U;
	static volatile int32_t t103 = 11371558;

    t103 = (x413<=(x414^(x415!=x416)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint8_t x417 = 111U;
	static int64_t x418 = -1LL;
	static volatile int32_t t104 = 56548609;

    t104 = (x417<=(x418^(x419!=x420)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x421 = 48U;
	volatile uint32_t x422 = 1111631741U;
	volatile int32_t x423 = 107;

    t105 = (x421<=(x422^(x423!=x424)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x425 = 49;
	uint32_t x426 = 1U;
	uint64_t x427 = UINT64_MAX;
	volatile int16_t x428 = -1818;
	static int32_t t106 = -6754;

    t106 = (x425<=(x426^(x427!=x428)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x429 = INT32_MIN;
	uint64_t x430 = 120005799946LLU;
	int16_t x431 = INT16_MIN;
	uint8_t x432 = 60U;
	int32_t t107 = 186340977;

    t107 = (x429<=(x430^(x431!=x432)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x433 = 23U;
	int32_t x434 = INT32_MAX;
	uint16_t x435 = 12U;
	static int64_t x436 = 5881718303820LL;

    t108 = (x433<=(x434^(x435!=x436)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x438 = 41;
	uint64_t x439 = 454LLU;
	static uint32_t x440 = 1443765U;
	int32_t t109 = 9317446;

    t109 = (x437<=(x438^(x439!=x440)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x442 = 33;
	uint64_t x443 = 1760224583LLU;
	static uint64_t x444 = 4369300LLU;
	volatile int32_t t110 = -3;

    t110 = (x441<=(x442^(x443!=x444)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint16_t x445 = 22514U;
	int8_t x446 = -1;
	volatile int16_t x447 = 19;
	int32_t x448 = INT32_MIN;

    t111 = (x445<=(x446^(x447!=x448)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x450 = -1;
	static int8_t x451 = -1;
	static uint16_t x452 = UINT16_MAX;

    t112 = (x449<=(x450^(x451!=x452)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x453 = INT32_MIN;
	static int16_t x454 = -1;
	int64_t x455 = INT64_MIN;
	int8_t x456 = INT8_MIN;

    t113 = (x453<=(x454^(x455!=x456)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x457 = INT8_MIN;
	int64_t x458 = INT64_MIN;
	static int64_t x459 = -1LL;
	static int32_t x460 = -56;
	int32_t t114 = 53938480;

    t114 = (x457<=(x458^(x459!=x460)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint16_t x461 = UINT16_MAX;
	uint8_t x462 = UINT8_MAX;
	int64_t x463 = INT64_MIN;
	int16_t x464 = INT16_MIN;
	int32_t t115 = 18366;

    t115 = (x461<=(x462^(x463!=x464)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x465 = UINT64_MAX;
	int8_t x466 = INT8_MIN;
	int64_t x467 = -3778096LL;
	int64_t x468 = INT64_MIN;
	volatile int32_t t116 = -66877;

    t116 = (x465<=(x466^(x467!=x468)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = INT64_MAX;
	volatile int64_t x470 = 62796722270LL;
	static int16_t x471 = -4396;
	static volatile int8_t x472 = -1;
	volatile int32_t t117 = 23751028;

    t117 = (x469<=(x470^(x471!=x472)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x473 = 1;
	static volatile int16_t x474 = -56;
	uint32_t x475 = UINT32_MAX;
	uint32_t x476 = 518U;
	int32_t t118 = -1983;

    t118 = (x473<=(x474^(x475!=x476)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x477 = -1;
	int16_t x478 = INT16_MIN;
	int32_t x479 = INT32_MAX;
	static uint32_t x480 = 60197U;
	volatile int32_t t119 = 48981;

    t119 = (x477<=(x478^(x479!=x480)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x482 = 406;
	uint16_t x483 = 115U;
	uint32_t x484 = 4278U;
	int32_t t120 = -20372429;

    t120 = (x481<=(x482^(x483!=x484)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint64_t x485 = 132241752357LLU;
	int8_t x487 = INT8_MAX;
	int16_t x488 = INT16_MAX;
	volatile int32_t t121 = 584530852;

    t121 = (x485<=(x486^(x487!=x488)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = -1LL;
	uint16_t x490 = 9477U;
	int64_t x491 = INT64_MAX;
	static int16_t x492 = INT16_MAX;

    t122 = (x489<=(x490^(x491!=x492)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x493 = 1751;
	int64_t x496 = 2LL;
	volatile int32_t t123 = -903517;

    t123 = (x493<=(x494^(x495!=x496)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = 0;
	uint16_t x498 = UINT16_MAX;
	int8_t x499 = INT8_MIN;
	int32_t t124 = -14;

    t124 = (x497<=(x498^(x499!=x500)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x501 = INT8_MIN;
	int32_t x502 = -1;
	int64_t x503 = 96365564132LL;
	volatile int32_t t125 = 2726641;

    t125 = (x501<=(x502^(x503!=x504)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x505 = INT16_MIN;
	volatile int8_t x506 = -1;
	uint16_t x508 = UINT16_MAX;
	int32_t t126 = 46;

    t126 = (x505<=(x506^(x507!=x508)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x510 = INT8_MIN;
	static int64_t x511 = -31757937740499917LL;
	int8_t x512 = INT8_MAX;
	int32_t t127 = 0;

    t127 = (x509<=(x510^(x511!=x512)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = -13530LL;
	uint32_t x514 = 933935U;
	int8_t x515 = -1;
	int32_t x516 = 349323;
	static int32_t t128 = -2683342;

    t128 = (x513<=(x514^(x515!=x516)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = INT32_MIN;
	static uint16_t x518 = UINT16_MAX;
	int32_t x519 = 1071478;
	int32_t x520 = INT32_MIN;
	static volatile int32_t t129 = 2625;

    t129 = (x517<=(x518^(x519!=x520)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x521 = 344U;
	volatile uint32_t x522 = UINT32_MAX;
	int8_t x523 = -42;
	static int32_t x524 = INT32_MIN;

    t130 = (x521<=(x522^(x523!=x524)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x525 = -33681;
	static int16_t x526 = INT16_MIN;
	uint32_t x528 = 122U;
	volatile int32_t t131 = -558821;

    t131 = (x525<=(x526^(x527!=x528)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = INT32_MIN;
	uint8_t x530 = 80U;
	uint8_t x531 = UINT8_MAX;
	int64_t x532 = INT64_MIN;
	int32_t t132 = -133407;

    t132 = (x529<=(x530^(x531!=x532)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x533 = 2140586391322243723LL;
	int8_t x534 = INT8_MIN;
	uint8_t x536 = 112U;
	volatile int32_t t133 = -1357156;

    t133 = (x533<=(x534^(x535!=x536)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x537 = INT8_MIN;
	static volatile int16_t x539 = INT16_MIN;
	int32_t t134 = 46134336;

    t134 = (x537<=(x538^(x539!=x540)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint64_t x542 = 9438073917LLU;
	int16_t x544 = INT16_MIN;
	int32_t t135 = -11;

    t135 = (x541<=(x542^(x543!=x544)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x547 = -1;
	int64_t x548 = INT64_MAX;

    t136 = (x545<=(x546^(x547!=x548)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = INT8_MIN;
	volatile int8_t x550 = INT8_MIN;
	int16_t x551 = INT16_MIN;
	int32_t t137 = 0;

    t137 = (x549<=(x550^(x551!=x552)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x553 = 1083353200LL;
	int8_t x554 = INT8_MAX;
	volatile int8_t x555 = -1;
	int16_t x556 = INT16_MIN;

    t138 = (x553<=(x554^(x555!=x556)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x558 = UINT32_MAX;
	int8_t x559 = 7;
	volatile int32_t x560 = -1;
	static int32_t t139 = 5;

    t139 = (x557<=(x558^(x559!=x560)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x562 = 268358482662520701LL;
	static uint8_t x563 = UINT8_MAX;
	int32_t t140 = -536862978;

    t140 = (x561<=(x562^(x563!=x564)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = INT8_MIN;
	static volatile uint8_t x566 = 0U;
	uint64_t x567 = 1069871419149LLU;
	static volatile int32_t t141 = -107758871;

    t141 = (x565<=(x566^(x567!=x568)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = -1;
	static volatile int64_t x570 = -1LL;
	volatile int16_t x571 = 366;
	int16_t x572 = INT16_MIN;
	static int32_t t142 = -829;

    t142 = (x569<=(x570^(x571!=x572)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x574 = -1;
	int8_t x575 = 23;
	int64_t x576 = INT64_MAX;
	volatile int32_t t143 = -92912;

    t143 = (x573<=(x574^(x575!=x576)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = -14;
	uint64_t x580 = 4931326LLU;

    t144 = (x577<=(x578^(x579!=x580)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x581 = UINT32_MAX;
	int64_t x583 = INT64_MIN;
	int32_t t145 = 0;

    t145 = (x581<=(x582^(x583!=x584)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x585 = INT64_MIN;
	uint8_t x586 = UINT8_MAX;
	uint8_t x587 = 3U;
	int32_t t146 = -4652822;

    t146 = (x585<=(x586^(x587!=x588)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x589 = 6U;
	int64_t x590 = -169LL;
	volatile int32_t x591 = 282178090;
	volatile int32_t t147 = -2064329;

    t147 = (x589<=(x590^(x591!=x592)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = -1LL;
	uint16_t x595 = 0U;
	volatile int64_t x596 = -29929LL;
	volatile int32_t t148 = -7889402;

    t148 = (x593<=(x594^(x595!=x596)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = -1;
	int16_t x598 = INT16_MAX;
	uint8_t x599 = UINT8_MAX;
	volatile int64_t x600 = -1LL;
	static volatile int32_t t149 = -331920119;

    t149 = (x597<=(x598^(x599!=x600)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x601 = -70420850421931633LL;
	int64_t x602 = 1LL;
	int8_t x603 = -1;
	volatile uint32_t x604 = 7U;
	int32_t t150 = -34628648;

    t150 = (x601<=(x602^(x603!=x604)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = 394480221105664562LL;
	int16_t x606 = INT16_MIN;
	static int8_t x607 = INT8_MAX;
	int16_t x608 = INT16_MIN;
	volatile int32_t t151 = -227974318;

    t151 = (x605<=(x606^(x607!=x608)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint32_t x609 = UINT32_MAX;
	uint32_t x610 = 0U;
	uint64_t x611 = 3LLU;
	uint16_t x612 = UINT16_MAX;
	int32_t t152 = -22803960;

    t152 = (x609<=(x610^(x611!=x612)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x613 = 3412U;
	static int8_t x614 = 7;
	int8_t x616 = INT8_MIN;
	int32_t t153 = -3;

    t153 = (x613<=(x614^(x615!=x616)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x618 = UINT16_MAX;
	int16_t x619 = -1;
	volatile uint64_t x620 = UINT64_MAX;

    t154 = (x617<=(x618^(x619!=x620)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int64_t x621 = INT64_MIN;
	int16_t x623 = -1;
	uint32_t x624 = 259443U;
	volatile int32_t t155 = 101;

    t155 = (x621<=(x622^(x623!=x624)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x625 = -108;
	uint8_t x626 = UINT8_MAX;
	volatile int32_t x627 = 64920869;
	int64_t x628 = INT64_MIN;
	volatile int32_t t156 = -5796;

    t156 = (x625<=(x626^(x627!=x628)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x630 = UINT8_MAX;
	static uint64_t x631 = UINT64_MAX;
	int16_t x632 = INT16_MIN;
	volatile int32_t t157 = -177;

    t157 = (x629<=(x630^(x631!=x632)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = INT32_MIN;
	int8_t x635 = INT8_MIN;
	int64_t x636 = INT64_MIN;
	volatile int32_t t158 = 90910755;

    t158 = (x633<=(x634^(x635!=x636)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x637 = -32;
	int64_t x639 = INT64_MIN;
	volatile int32_t t159 = 1;

    t159 = (x637<=(x638^(x639!=x640)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = INT64_MIN;
	int32_t x642 = 0;
	uint16_t x644 = 159U;
	int32_t t160 = -177042192;

    t160 = (x641<=(x642^(x643!=x644)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = INT64_MAX;
	int8_t x646 = -1;
	int32_t x647 = INT32_MAX;
	static uint64_t x648 = UINT64_MAX;
	int32_t t161 = -8785;

    t161 = (x645<=(x646^(x647!=x648)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x649 = INT8_MIN;
	volatile int32_t x650 = INT32_MAX;
	int64_t x651 = -1LL;
	int8_t x652 = INT8_MIN;
	volatile int32_t t162 = 247;

    t162 = (x649<=(x650^(x651!=x652)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = -1;
	volatile int32_t x654 = INT32_MIN;
	volatile uint8_t x656 = 52U;

    t163 = (x653<=(x654^(x655!=x656)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = INT16_MIN;
	int16_t x658 = -14;
	volatile uint8_t x659 = UINT8_MAX;
	uint32_t x660 = UINT32_MAX;
	int32_t t164 = -50;

    t164 = (x657<=(x658^(x659!=x660)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x661 = 40;
	static int64_t x662 = INT64_MIN;
	int64_t x663 = INT64_MIN;
	static uint16_t x664 = 1U;
	static int32_t t165 = 15413260;

    t165 = (x661<=(x662^(x663!=x664)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x665 = INT16_MIN;
	int16_t x666 = INT16_MIN;
	int32_t x667 = INT32_MIN;
	int16_t x668 = 0;
	static volatile int32_t t166 = 64582099;

    t166 = (x665<=(x666^(x667!=x668)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x670 = INT16_MIN;
	int32_t x671 = INT32_MIN;
	static volatile uint64_t x672 = 241539807652360098LLU;
	volatile int32_t t167 = 2;

    t167 = (x669<=(x670^(x671!=x672)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x674 = UINT32_MAX;
	uint64_t x675 = 1114191850LLU;
	int32_t x676 = -1;
	int32_t t168 = -1906388;

    t168 = (x673<=(x674^(x675!=x676)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = INT64_MIN;
	int64_t x678 = 166254166081030LL;
	int64_t x680 = INT64_MIN;
	int32_t t169 = 15935;

    t169 = (x677<=(x678^(x679!=x680)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint16_t x681 = 4720U;
	int32_t x682 = INT32_MIN;
	int8_t x683 = -3;
	int32_t t170 = -455;

    t170 = (x681<=(x682^(x683!=x684)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x685 = -767786;
	uint64_t x686 = 10331288459431962LLU;
	volatile uint16_t x687 = UINT16_MAX;
	uint64_t x688 = UINT64_MAX;
	int32_t t171 = -74;

    t171 = (x685<=(x686^(x687!=x688)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = 13;
	static int8_t x690 = 3;
	volatile uint32_t x691 = 546700625U;
	volatile int32_t t172 = -35299;

    t172 = (x689<=(x690^(x691!=x692)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x693 = 15576U;
	uint16_t x694 = 0U;
	int32_t x695 = INT32_MAX;
	static int8_t x696 = -1;
	int32_t t173 = -9093;

    t173 = (x693<=(x694^(x695!=x696)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x697 = 55U;
	volatile uint8_t x698 = UINT8_MAX;
	uint64_t x699 = UINT64_MAX;
	uint32_t x700 = UINT32_MAX;
	volatile int32_t t174 = 2380;

    t174 = (x697<=(x698^(x699!=x700)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x701 = INT32_MIN;
	volatile int16_t x702 = -1;
	uint16_t x703 = 423U;
	static int8_t x704 = -1;
	int32_t t175 = -6442918;

    t175 = (x701<=(x702^(x703!=x704)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = -1;
	int16_t x706 = -12;
	int32_t x707 = INT32_MIN;
	int32_t x708 = -19630;
	int32_t t176 = -427;

    t176 = (x705<=(x706^(x707!=x708)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x709 = INT8_MIN;
	int64_t x710 = INT64_MIN;
	int32_t x712 = INT32_MIN;
	static volatile int32_t t177 = 77730;

    t177 = (x709<=(x710^(x711!=x712)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x713 = INT32_MAX;
	static uint16_t x714 = UINT16_MAX;
	volatile int8_t x715 = INT8_MIN;
	int16_t x716 = INT16_MIN;
	static volatile int32_t t178 = 29616535;

    t178 = (x713<=(x714^(x715!=x716)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x717 = UINT64_MAX;
	int64_t x718 = -130997023LL;
	int32_t x720 = INT32_MAX;
	int32_t t179 = -10537;

    t179 = (x717<=(x718^(x719!=x720)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x722 = -21;
	volatile int8_t x723 = INT8_MAX;
	volatile int32_t x724 = -1;

    t180 = (x721<=(x722^(x723!=x724)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x727 = INT16_MAX;
	int32_t x728 = 28100;
	int32_t t181 = -31740771;

    t181 = (x725<=(x726^(x727!=x728)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = INT64_MIN;
	int16_t x730 = -855;
	volatile int32_t x731 = 17951;
	int32_t t182 = 869;

    t182 = (x729<=(x730^(x731!=x732)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x733 = -53;
	uint64_t x734 = UINT64_MAX;
	int32_t x735 = INT32_MAX;

    t183 = (x733<=(x734^(x735!=x736)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x737 = 3U;
	uint16_t x738 = UINT16_MAX;
	volatile int32_t x739 = INT32_MIN;

    t184 = (x737<=(x738^(x739!=x740)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint32_t x742 = 1655789250U;
	uint32_t x744 = 5137460U;

    t185 = (x741<=(x742^(x743!=x744)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x745 = INT16_MIN;
	int16_t x746 = INT16_MIN;
	static uint16_t x747 = UINT16_MAX;
	uint8_t x748 = 14U;
	int32_t t186 = -5;

    t186 = (x745<=(x746^(x747!=x748)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x749 = 29U;
	uint64_t x750 = 154421400LLU;
	volatile int16_t x751 = -1;
	static int64_t x752 = -1LL;
	static volatile int32_t t187 = 21;

    t187 = (x749<=(x750^(x751!=x752)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x753 = 12691U;
	static int8_t x754 = INT8_MIN;
	uint8_t x755 = UINT8_MAX;
	volatile int32_t t188 = 2852041;

    t188 = (x753<=(x754^(x755!=x756)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint8_t x757 = 0U;
	volatile int32_t x758 = INT32_MIN;
	uint8_t x759 = UINT8_MAX;
	static volatile int32_t t189 = -1756373;

    t189 = (x757<=(x758^(x759!=x760)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x761 = 61U;
	static uint16_t x762 = UINT16_MAX;
	int64_t x764 = -1LL;

    t190 = (x761<=(x762^(x763!=x764)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x766 = 140U;
	int64_t x767 = INT64_MIN;
	volatile int32_t x768 = INT32_MIN;
	int32_t t191 = 1;

    t191 = (x765<=(x766^(x767!=x768)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint64_t x769 = 33898076063LLU;
	int32_t x771 = 11723447;
	uint16_t x772 = UINT16_MAX;

    t192 = (x769<=(x770^(x771!=x772)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x773 = UINT32_MAX;
	static int16_t x774 = -6670;
	int16_t x775 = -1;
	int32_t x776 = INT32_MAX;
	volatile int32_t t193 = 139789285;

    t193 = (x773<=(x774^(x775!=x776)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x778 = -19;
	int64_t x779 = INT64_MIN;
	volatile int32_t x780 = INT32_MIN;
	static volatile int32_t t194 = -2;

    t194 = (x777<=(x778^(x779!=x780)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x781 = INT8_MAX;
	int64_t x782 = -1LL;
	uint8_t x783 = 6U;
	int8_t x784 = -1;

    t195 = (x781<=(x782^(x783!=x784)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = INT64_MIN;
	uint64_t x786 = 4488163427LLU;
	volatile int64_t x788 = -11920122LL;
	int32_t t196 = 5019665;

    t196 = (x785<=(x786^(x787!=x788)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint64_t x789 = 102374537649212326LLU;
	static int32_t x790 = -7580;
	volatile uint8_t x791 = 1U;
	int32_t t197 = 24598313;

    t197 = (x789<=(x790^(x791!=x792)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x793 = INT32_MAX;
	static uint8_t x794 = 20U;
	int16_t x795 = 28;
	int16_t x796 = 927;
	int32_t t198 = 0;

    t198 = (x793<=(x794^(x795!=x796)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x797 = 0;
	int8_t x800 = 0;
	volatile int32_t t199 = 7444762;

    t199 = (x797<=(x798^(x799!=x800)));

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


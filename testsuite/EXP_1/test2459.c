
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

int64_t x2 = -1LL;
static uint8_t x6 = 6U;
static volatile int8_t x9 = 1;
static int32_t x13 = INT32_MIN;
int16_t x15 = INT16_MIN;
volatile int16_t x21 = -1;
volatile int16_t x30 = -5;
uint32_t x32 = UINT32_MAX;
uint32_t x39 = 7U;
int8_t x49 = INT8_MIN;
static uint16_t x54 = UINT16_MAX;
static volatile int32_t t13 = 331047;
static volatile int32_t t14 = 11751;
int16_t x63 = -30;
int64_t x71 = 1481752332004204133LL;
uint8_t x74 = UINT8_MAX;
uint64_t x87 = 157954724724539041LLU;
static int64_t x89 = INT64_MIN;
int32_t t23 = 1;
int16_t x98 = INT16_MAX;
int16_t x99 = 0;
int32_t x101 = -1;
int32_t t25 = -341391;
volatile int16_t x110 = -1;
int64_t x116 = INT64_MIN;
volatile int64_t x117 = INT64_MAX;
uint8_t x118 = 6U;
static int8_t x122 = INT8_MIN;
static volatile uint64_t x130 = 194183747009989262LLU;
static volatile uint16_t x140 = 2239U;
volatile uint8_t x143 = 1U;
int32_t t35 = -6782;
volatile uint16_t x148 = 8009U;
int16_t x149 = -1;
static int8_t x151 = -1;
uint16_t x160 = 2U;
int16_t x162 = INT16_MIN;
int32_t t40 = 1;
int8_t x170 = -1;
int32_t t42 = 117;
int32_t x174 = -400938104;
uint16_t x176 = 3U;
volatile int32_t t43 = 246305;
int8_t x177 = 0;
uint16_t x196 = 325U;
int32_t t48 = 102530;
static volatile uint64_t x201 = 9189778LLU;
int16_t x203 = -204;
uint8_t x205 = UINT8_MAX;
volatile int32_t x211 = -1;
int64_t x215 = 1628226LL;
volatile int32_t t53 = 0;
int64_t x220 = 49126269289LL;
static int64_t x222 = INT64_MIN;
int64_t x223 = -57557327790112LL;
volatile int8_t x226 = 44;
volatile int32_t t56 = 262;
int32_t x241 = INT32_MIN;
int64_t x244 = -471659LL;
int32_t t60 = -460;
int8_t x245 = -1;
volatile int64_t x248 = -14665708929608513LL;
volatile int32_t t61 = -672977425;
int32_t x252 = -770244;
volatile int32_t t63 = -56;
volatile int8_t x257 = INT8_MIN;
volatile int32_t t68 = 8282876;
volatile uint64_t x280 = UINT64_MAX;
int8_t x281 = -17;
int64_t x283 = INT64_MAX;
volatile uint16_t x289 = 2U;
int16_t x292 = INT16_MAX;
int64_t x307 = INT64_MAX;
volatile int32_t t76 = -627;
int64_t x311 = -52LL;
static volatile int16_t x319 = -51;
int32_t t79 = 841541061;
uint16_t x324 = UINT16_MAX;
static uint8_t x326 = 0U;
static int64_t x328 = INT64_MIN;
int32_t t83 = -2085;
static uint8_t x338 = 3U;
volatile uint16_t x339 = UINT16_MAX;
uint32_t x345 = UINT32_MAX;
uint8_t x348 = 5U;
volatile int32_t t86 = -1638797;
int64_t x350 = -3895LL;
int16_t x361 = -1;
volatile int32_t x363 = INT32_MIN;
int8_t x364 = INT8_MIN;
int8_t x366 = 1;
uint32_t x369 = 105U;
int32_t t92 = 29597177;
int16_t x376 = 1;
uint16_t x381 = UINT16_MAX;
int32_t x382 = INT32_MAX;
static int16_t x383 = -1;
static volatile int32_t t95 = -551;
static uint64_t x387 = UINT64_MAX;
static volatile int64_t x391 = -59231821297LL;
int8_t x402 = -10;
int16_t x403 = -51;
int32_t t100 = -6497771;
int64_t x407 = -1LL;
static int64_t x409 = INT64_MAX;
static uint16_t x416 = UINT16_MAX;
int32_t x420 = 1330923;
int32_t x428 = -1;
int64_t x430 = INT64_MIN;
int64_t x432 = INT64_MIN;
int16_t x435 = INT16_MIN;
uint32_t x439 = UINT32_MAX;
volatile int32_t t110 = -4854289;
static int32_t t112 = 643779371;
int16_t x455 = INT16_MIN;
int8_t x458 = 20;
uint64_t x459 = 1443442297516849LLU;
int64_t x467 = 13401561990524LL;
volatile int32_t t116 = 9234;
static volatile uint64_t x472 = 4LLU;
int32_t t117 = -11;
uint32_t x475 = UINT32_MAX;
uint32_t x482 = 14U;
uint16_t x486 = UINT16_MAX;
uint8_t x489 = UINT8_MAX;
int32_t t122 = -2235834;
uint8_t x493 = UINT8_MAX;
int16_t x495 = INT16_MAX;
uint64_t x497 = 34480177385968LLU;
int32_t x501 = -1;
int64_t x503 = INT64_MAX;
volatile int32_t t125 = -2070465;
static int16_t x505 = -1;
static uint64_t x506 = UINT64_MAX;
static int64_t x520 = INT64_MAX;
int32_t x523 = INT32_MIN;
int32_t x530 = -1;
int32_t t132 = 100826813;
volatile int16_t x534 = 0;
int64_t x535 = INT64_MIN;
volatile int32_t x536 = -1;
volatile int32_t t134 = 6768710;
uint64_t x541 = UINT64_MAX;
uint16_t x542 = 474U;
static volatile uint32_t x544 = UINT32_MAX;
int32_t t135 = 1;
static int8_t x548 = INT8_MIN;
int32_t t136 = 969786;
static volatile int32_t t137 = -1052;
int32_t x556 = 198424;
volatile int32_t t139 = -13209864;
volatile int32_t t140 = 29123;
static uint8_t x565 = 19U;
static int16_t x568 = INT16_MIN;
volatile int32_t t141 = 954084;
int32_t x569 = -1;
int8_t x571 = INT8_MIN;
int16_t x574 = INT16_MIN;
int64_t x576 = -1LL;
volatile int16_t x577 = INT16_MIN;
int16_t x582 = -1;
int32_t t146 = 127959;
uint16_t x602 = 2U;
int64_t x604 = 1675917LL;
volatile int32_t t150 = -10702;
uint8_t x607 = UINT8_MAX;
volatile uint16_t x608 = 16307U;
int32_t t154 = -226012;
uint32_t x621 = 58138905U;
uint64_t x624 = 1LLU;
int32_t t155 = -91792634;
uint16_t x632 = 0U;
uint64_t x648 = 1LLU;
static int32_t t161 = 468;
uint16_t x649 = 11679U;
int32_t x650 = INT32_MIN;
int64_t x655 = -1LL;
uint16_t x660 = 431U;
volatile int32_t t164 = -342387;
int8_t x661 = INT8_MAX;
int16_t x668 = -3;
uint16_t x672 = 12257U;
volatile int32_t x677 = -1;
volatile int64_t x678 = -1LL;
int16_t x679 = 79;
int32_t x680 = INT32_MAX;
volatile int32_t t169 = 22;
volatile int64_t x683 = INT64_MIN;
uint16_t x684 = 938U;
static int32_t x686 = -1;
volatile int32_t t171 = 3;
volatile int16_t x690 = INT16_MIN;
uint8_t x691 = 2U;
int32_t t172 = 1;
int16_t x693 = -1;
volatile uint16_t x694 = 11U;
uint32_t x705 = 1485437848U;
static volatile int8_t x719 = INT8_MAX;
volatile uint64_t x722 = UINT64_MAX;
volatile int32_t t180 = -548240;
int16_t x726 = -7153;
int8_t x732 = INT8_MAX;
uint64_t x741 = 497960306LLU;
volatile int32_t t185 = -2;
int16_t x750 = -72;
static volatile int8_t x753 = INT8_MAX;
static int32_t x756 = -12163623;
int32_t t189 = 14734937;
int16_t x767 = 1857;
static volatile uint16_t x771 = 432U;
uint16_t x772 = 140U;
static int16_t x775 = INT16_MIN;
static int16_t x780 = INT16_MIN;
int32_t t195 = -17763516;
volatile int8_t x786 = -1;
int64_t x790 = 59251263399LL;
uint32_t x792 = 12U;
int32_t t197 = 2000375;
static int32_t x793 = INT32_MIN;
int32_t t198 = 1;


void f0(void) {
    	uint64_t x1 = 1044871280835LLU;
	uint32_t x3 = UINT32_MAX;
	uint32_t x4 = UINT32_MAX;
	int32_t t0 = -1;

    t0 = (((x1|x2)==x3)>x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint16_t x5 = 1U;
	static int8_t x7 = INT8_MIN;
	int16_t x8 = INT16_MAX;
	static int32_t t1 = -1561401;

    t1 = (((x5|x6)==x7)>x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x10 = 149LLU;
	int64_t x11 = INT64_MAX;
	static int8_t x12 = -54;
	int32_t t2 = 29616159;

    t2 = (((x9|x10)==x11)>x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x14 = 16451LL;
	int8_t x16 = -16;
	int32_t t3 = 1;

    t3 = (((x13|x14)==x15)>x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = UINT16_MAX;
	static uint16_t x18 = 12181U;
	int32_t x19 = INT32_MAX;
	uint32_t x20 = 3025160U;
	volatile int32_t t4 = -67004;

    t4 = (((x17|x18)==x19)>x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x22 = INT32_MIN;
	int8_t x23 = 19;
	uint8_t x24 = UINT8_MAX;
	volatile int32_t t5 = -25;

    t5 = (((x21|x22)==x23)>x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MIN;
	volatile uint8_t x26 = 2U;
	volatile int16_t x27 = INT16_MIN;
	int16_t x28 = -1;
	static volatile int32_t t6 = -2402240;

    t6 = (((x25|x26)==x27)>x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x29 = -1;
	static int16_t x31 = 1;
	volatile int32_t t7 = -142582;

    t7 = (((x29|x30)==x31)>x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MIN;
	int64_t x34 = -2646584LL;
	int16_t x35 = INT16_MIN;
	uint32_t x36 = 2471U;
	static int32_t t8 = -1907;

    t8 = (((x33|x34)==x35)>x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x37 = 3745144456234LL;
	static uint16_t x38 = 401U;
	int8_t x40 = -1;
	int32_t t9 = 11115;

    t9 = (((x37|x38)==x39)>x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x41 = UINT64_MAX;
	volatile int64_t x42 = -1LL;
	static uint16_t x43 = 11452U;
	int16_t x44 = INT16_MAX;
	volatile int32_t t10 = 53233;

    t10 = (((x41|x42)==x43)>x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = -1;
	int16_t x46 = 3330;
	int8_t x47 = -4;
	static volatile int64_t x48 = -165544961140LL;
	int32_t t11 = -6136;

    t11 = (((x45|x46)==x47)>x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint32_t x50 = UINT32_MAX;
	int8_t x51 = INT8_MIN;
	uint64_t x52 = 1030140865575344411LLU;
	static volatile int32_t t12 = -2026105;

    t12 = (((x49|x50)==x51)>x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MIN;
	uint16_t x55 = UINT16_MAX;
	int32_t x56 = INT32_MAX;

    t13 = (((x53|x54)==x55)>x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x57 = 1U;
	static int32_t x58 = INT32_MIN;
	int64_t x59 = INT64_MIN;
	volatile uint8_t x60 = UINT8_MAX;

    t14 = (((x57|x58)==x59)>x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint8_t x61 = UINT8_MAX;
	volatile int16_t x62 = 5997;
	uint16_t x64 = 7U;
	volatile int32_t t15 = -11664878;

    t15 = (((x61|x62)==x63)>x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint32_t x65 = 5370302U;
	int16_t x66 = -1;
	int8_t x67 = INT8_MIN;
	int8_t x68 = -1;
	volatile int32_t t16 = -7847671;

    t16 = (((x65|x66)==x67)>x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x69 = UINT8_MAX;
	int32_t x70 = 10;
	volatile uint64_t x72 = 6141016554826929558LLU;
	static volatile int32_t t17 = 1624265;

    t17 = (((x69|x70)==x71)>x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x73 = -1;
	volatile uint8_t x75 = UINT8_MAX;
	int32_t x76 = INT32_MIN;
	int32_t t18 = 25;

    t18 = (((x73|x74)==x75)>x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = -1;
	volatile int64_t x78 = -1LL;
	static int32_t x79 = 863;
	uint8_t x80 = UINT8_MAX;
	int32_t t19 = -9217;

    t19 = (((x77|x78)==x79)>x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = 2U;
	int16_t x82 = -1;
	int8_t x83 = INT8_MIN;
	uint32_t x84 = 8787344U;
	volatile int32_t t20 = 1;

    t20 = (((x81|x82)==x83)>x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile uint8_t x85 = 0U;
	volatile uint64_t x86 = UINT64_MAX;
	uint32_t x88 = 1U;
	volatile int32_t t21 = -80753;

    t21 = (((x85|x86)==x87)>x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x90 = 394U;
	int16_t x91 = INT16_MAX;
	uint8_t x92 = UINT8_MAX;
	int32_t t22 = -3;

    t22 = (((x89|x90)==x91)>x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x93 = UINT16_MAX;
	int16_t x94 = -1;
	volatile uint64_t x95 = UINT64_MAX;
	static uint8_t x96 = 3U;

    t23 = (((x93|x94)==x95)>x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = -1LL;
	static int16_t x100 = INT16_MIN;
	volatile int32_t t24 = 1848;

    t24 = (((x97|x98)==x99)>x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x102 = -1;
	int16_t x103 = INT16_MAX;
	volatile int32_t x104 = INT32_MIN;

    t25 = (((x101|x102)==x103)>x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint32_t x105 = 16583487U;
	uint64_t x106 = 2221496219898LLU;
	int16_t x107 = -1;
	uint32_t x108 = UINT32_MAX;
	volatile int32_t t26 = -26;

    t26 = (((x105|x106)==x107)>x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = INT16_MIN;
	int8_t x111 = INT8_MIN;
	static int16_t x112 = INT16_MIN;
	volatile int32_t t27 = 15;

    t27 = (((x109|x110)==x111)>x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = -1;
	int8_t x114 = -1;
	int16_t x115 = 18;
	static volatile int32_t t28 = 461;

    t28 = (((x113|x114)==x115)>x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x119 = 4U;
	static volatile int16_t x120 = -1;
	volatile int32_t t29 = 22499283;

    t29 = (((x117|x118)==x119)>x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = INT64_MIN;
	volatile int8_t x123 = 1;
	volatile uint64_t x124 = UINT64_MAX;
	volatile int32_t t30 = -410;

    t30 = (((x121|x122)==x123)>x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x125 = INT64_MIN;
	static int16_t x126 = -1;
	volatile uint32_t x127 = UINT32_MAX;
	volatile int32_t x128 = INT32_MIN;
	static int32_t t31 = -5905;

    t31 = (((x125|x126)==x127)>x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = INT8_MIN;
	static uint32_t x131 = 28U;
	int8_t x132 = INT8_MIN;
	volatile int32_t t32 = -491046237;

    t32 = (((x129|x130)==x131)>x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x133 = 3616U;
	uint64_t x134 = 16596568890LLU;
	static volatile int64_t x135 = -1LL;
	static int16_t x136 = -14;
	static volatile int32_t t33 = -819;

    t33 = (((x133|x134)==x135)>x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = 865111464057362LL;
	int64_t x138 = INT64_MIN;
	int8_t x139 = INT8_MIN;
	int32_t t34 = 0;

    t34 = (((x137|x138)==x139)>x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x141 = INT64_MAX;
	int32_t x142 = INT32_MIN;
	uint32_t x144 = UINT32_MAX;

    t35 = (((x141|x142)==x143)>x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = -1;
	int8_t x146 = INT8_MAX;
	int32_t x147 = INT32_MIN;
	volatile int32_t t36 = -16347558;

    t36 = (((x145|x146)==x147)>x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint8_t x150 = UINT8_MAX;
	static int32_t x152 = INT32_MIN;
	int32_t t37 = 429817;

    t37 = (((x149|x150)==x151)>x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = INT32_MAX;
	volatile int16_t x154 = INT16_MIN;
	uint32_t x155 = 39688903U;
	static uint16_t x156 = 2482U;
	static volatile int32_t t38 = 550;

    t38 = (((x153|x154)==x155)>x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x157 = 0U;
	uint16_t x158 = UINT16_MAX;
	int8_t x159 = -1;
	volatile int32_t t39 = -11;

    t39 = (((x157|x158)==x159)>x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x161 = UINT16_MAX;
	int64_t x163 = -22625125146007040LL;
	volatile uint8_t x164 = 0U;

    t40 = (((x161|x162)==x163)>x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = INT16_MIN;
	int16_t x166 = 1;
	int32_t x167 = 386166417;
	int16_t x168 = -1;
	static volatile int32_t t41 = -396108;

    t41 = (((x165|x166)==x167)>x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint16_t x169 = 463U;
	int8_t x171 = -1;
	uint8_t x172 = UINT8_MAX;

    t42 = (((x169|x170)==x171)>x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x173 = INT8_MIN;
	static uint32_t x175 = UINT32_MAX;

    t43 = (((x173|x174)==x175)>x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint16_t x178 = 3497U;
	uint64_t x179 = 2888028322462258LLU;
	int8_t x180 = -3;
	volatile int32_t t44 = -24;

    t44 = (((x177|x178)==x179)>x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x181 = 0;
	volatile uint16_t x182 = 74U;
	int8_t x183 = INT8_MIN;
	volatile uint8_t x184 = 53U;
	int32_t t45 = -3960;

    t45 = (((x181|x182)==x183)>x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x185 = INT32_MIN;
	volatile int32_t x186 = -1;
	static uint32_t x187 = 3U;
	int32_t x188 = -148306;
	volatile int32_t t46 = -5092;

    t46 = (((x185|x186)==x187)>x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x189 = UINT64_MAX;
	volatile uint8_t x190 = UINT8_MAX;
	static int16_t x191 = INT16_MIN;
	static volatile int64_t x192 = INT64_MIN;
	int32_t t47 = -558637;

    t47 = (((x189|x190)==x191)>x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = 115453LL;
	volatile int16_t x194 = 57;
	int16_t x195 = INT16_MIN;

    t48 = (((x193|x194)==x195)>x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x197 = 0;
	int8_t x198 = INT8_MAX;
	int64_t x199 = -1LL;
	uint64_t x200 = 68582848807484LLU;
	static volatile int32_t t49 = -1149;

    t49 = (((x197|x198)==x199)>x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x202 = INT16_MIN;
	int16_t x204 = 24;
	static volatile int32_t t50 = -400;

    t50 = (((x201|x202)==x203)>x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x206 = -10702;
	int64_t x207 = -20309016557102918LL;
	uint32_t x208 = UINT32_MAX;
	volatile int32_t t51 = -290726;

    t51 = (((x205|x206)==x207)>x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint64_t x209 = UINT64_MAX;
	volatile int32_t x210 = -1;
	int32_t x212 = 4;
	volatile int32_t t52 = -317;

    t52 = (((x209|x210)==x211)>x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x213 = 41185U;
	int8_t x214 = INT8_MIN;
	uint8_t x216 = 9U;

    t53 = (((x213|x214)==x215)>x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x217 = INT8_MAX;
	volatile uint8_t x218 = 77U;
	volatile int8_t x219 = INT8_MIN;
	volatile int32_t t54 = 1315102;

    t54 = (((x217|x218)==x219)>x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x221 = 473511LLU;
	volatile uint16_t x224 = 3710U;
	int32_t t55 = -1;

    t55 = (((x221|x222)==x223)>x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int16_t x225 = INT16_MIN;
	static int32_t x227 = -1;
	volatile uint8_t x228 = 3U;

    t56 = (((x225|x226)==x227)>x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x229 = INT32_MAX;
	int64_t x230 = INT64_MAX;
	volatile int32_t x231 = INT32_MIN;
	uint64_t x232 = UINT64_MAX;
	volatile int32_t t57 = -6749260;

    t57 = (((x229|x230)==x231)>x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint32_t x233 = 388031606U;
	uint32_t x234 = 3585625U;
	int64_t x235 = -1LL;
	uint16_t x236 = 489U;
	volatile int32_t t58 = 0;

    t58 = (((x233|x234)==x235)>x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = -1;
	static int64_t x238 = INT64_MIN;
	volatile int8_t x239 = INT8_MAX;
	static int8_t x240 = INT8_MAX;
	volatile int32_t t59 = 1528686;

    t59 = (((x237|x238)==x239)>x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x242 = UINT32_MAX;
	uint32_t x243 = 239556282U;

    t60 = (((x241|x242)==x243)>x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x246 = UINT32_MAX;
	volatile int8_t x247 = -1;

    t61 = (((x245|x246)==x247)>x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile uint32_t x249 = 35U;
	int64_t x250 = 31498805766LL;
	static uint64_t x251 = UINT64_MAX;
	volatile int32_t t62 = -2281872;

    t62 = (((x249|x250)==x251)>x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = 0;
	int16_t x254 = INT16_MIN;
	int32_t x255 = -1;
	volatile uint64_t x256 = 115321174380410522LLU;

    t63 = (((x253|x254)==x255)>x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int16_t x258 = -1341;
	volatile uint16_t x259 = 23U;
	int32_t x260 = -1;
	int32_t t64 = -13;

    t64 = (((x257|x258)==x259)>x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x261 = INT16_MIN;
	int32_t x262 = INT32_MIN;
	static int8_t x263 = INT8_MAX;
	static int16_t x264 = INT16_MIN;
	int32_t t65 = 104814102;

    t65 = (((x261|x262)==x263)>x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x265 = -1LL;
	int32_t x266 = -1;
	int16_t x267 = INT16_MAX;
	volatile int8_t x268 = INT8_MAX;
	int32_t t66 = 117969;

    t66 = (((x265|x266)==x267)>x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = -10;
	int16_t x270 = INT16_MAX;
	int16_t x271 = 0;
	int16_t x272 = -249;
	int32_t t67 = -8920;

    t67 = (((x269|x270)==x271)>x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x273 = 2611138619964452180LL;
	int64_t x274 = -1LL;
	int64_t x275 = INT64_MAX;
	int64_t x276 = -5944824990147LL;

    t68 = (((x273|x274)==x275)>x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = -1LL;
	int16_t x278 = 860;
	uint64_t x279 = 22386025629353LLU;
	int32_t t69 = -147;

    t69 = (((x277|x278)==x279)>x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x282 = INT8_MIN;
	int64_t x284 = INT64_MAX;
	volatile int32_t t70 = 1930;

    t70 = (((x281|x282)==x283)>x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = -1;
	int8_t x286 = -1;
	int32_t x287 = -1;
	static int16_t x288 = INT16_MIN;
	volatile int32_t t71 = 0;

    t71 = (((x285|x286)==x287)>x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x290 = 0;
	uint16_t x291 = 1361U;
	volatile int32_t t72 = 40413;

    t72 = (((x289|x290)==x291)>x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x293 = 1;
	int16_t x294 = 1085;
	int32_t x295 = -3;
	int64_t x296 = -1LL;
	volatile int32_t t73 = 2901;

    t73 = (((x293|x294)==x295)>x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x297 = INT32_MAX;
	volatile int8_t x298 = INT8_MIN;
	int32_t x299 = INT32_MAX;
	int32_t x300 = -6367724;
	volatile int32_t t74 = 147889;

    t74 = (((x297|x298)==x299)>x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = INT32_MIN;
	static int32_t x302 = -3;
	volatile int32_t x303 = 173;
	int16_t x304 = 2;
	int32_t t75 = -2222194;

    t75 = (((x301|x302)==x303)>x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = 12;
	static volatile int32_t x306 = -1;
	int8_t x308 = -36;

    t76 = (((x305|x306)==x307)>x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = INT64_MAX;
	static int16_t x310 = -1;
	static int16_t x312 = INT16_MAX;
	volatile int32_t t77 = 472;

    t77 = (((x309|x310)==x311)>x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x313 = 38U;
	static int16_t x314 = INT16_MIN;
	static int64_t x315 = INT64_MAX;
	volatile int16_t x316 = -86;
	int32_t t78 = 13969;

    t78 = (((x313|x314)==x315)>x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x317 = -7729;
	uint64_t x318 = UINT64_MAX;
	int16_t x320 = INT16_MIN;

    t79 = (((x317|x318)==x319)>x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x321 = INT64_MIN;
	int64_t x322 = -258476LL;
	uint16_t x323 = 11U;
	volatile int32_t t80 = -170036281;

    t80 = (((x321|x322)==x323)>x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x325 = UINT16_MAX;
	static uint16_t x327 = UINT16_MAX;
	int32_t t81 = -18147;

    t81 = (((x325|x326)==x327)>x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = -1;
	int64_t x330 = INT64_MIN;
	int32_t x331 = -110668;
	int64_t x332 = INT64_MIN;
	int32_t t82 = 586705;

    t82 = (((x329|x330)==x331)>x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x333 = UINT16_MAX;
	int64_t x334 = INT64_MAX;
	uint32_t x335 = 3519705U;
	int16_t x336 = -4600;

    t83 = (((x333|x334)==x335)>x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x337 = INT16_MAX;
	int8_t x340 = INT8_MAX;
	static volatile int32_t t84 = -2695;

    t84 = (((x337|x338)==x339)>x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = INT32_MIN;
	static int32_t x342 = INT32_MAX;
	int8_t x343 = -1;
	uint64_t x344 = 23871163LLU;
	volatile int32_t t85 = -14;

    t85 = (((x341|x342)==x343)>x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x346 = UINT32_MAX;
	int64_t x347 = INT64_MIN;

    t86 = (((x345|x346)==x347)>x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint64_t x349 = UINT64_MAX;
	static uint8_t x351 = 18U;
	volatile int8_t x352 = INT8_MIN;
	volatile int32_t t87 = 2685177;

    t87 = (((x349|x350)==x351)>x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x353 = 25U;
	int64_t x354 = INT64_MAX;
	uint32_t x355 = 3U;
	int8_t x356 = INT8_MIN;
	volatile int32_t t88 = -3;

    t88 = (((x353|x354)==x355)>x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = INT8_MIN;
	int32_t x358 = -294773863;
	int16_t x359 = INT16_MIN;
	int8_t x360 = INT8_MIN;
	int32_t t89 = -193077242;

    t89 = (((x357|x358)==x359)>x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint8_t x362 = UINT8_MAX;
	int32_t t90 = 416989;

    t90 = (((x361|x362)==x363)>x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x365 = -7;
	volatile int32_t x367 = INT32_MAX;
	int8_t x368 = -1;
	int32_t t91 = -4353;

    t91 = (((x365|x366)==x367)>x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x370 = INT64_MAX;
	int32_t x371 = 360628178;
	volatile int32_t x372 = -1;

    t92 = (((x369|x370)==x371)>x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = -2;
	int64_t x374 = -1LL;
	uint64_t x375 = UINT64_MAX;
	int32_t t93 = -627163285;

    t93 = (((x373|x374)==x375)>x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int8_t x377 = -1;
	volatile int16_t x378 = -1;
	int64_t x379 = INT64_MAX;
	int64_t x380 = -1LL;
	int32_t t94 = -162;

    t94 = (((x377|x378)==x379)>x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x384 = 108454976224180LLU;

    t95 = (((x381|x382)==x383)>x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x385 = INT64_MAX;
	int8_t x386 = INT8_MIN;
	int8_t x388 = 63;
	static int32_t t96 = -25;

    t96 = (((x385|x386)==x387)>x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint32_t x389 = 1U;
	static int32_t x390 = INT32_MAX;
	static int64_t x392 = INT64_MIN;
	static int32_t t97 = 11773542;

    t97 = (((x389|x390)==x391)>x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x393 = -67;
	volatile uint8_t x394 = 0U;
	int16_t x395 = -1;
	uint32_t x396 = UINT32_MAX;
	static volatile int32_t t98 = -56387;

    t98 = (((x393|x394)==x395)>x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x397 = INT64_MAX;
	static uint8_t x398 = 113U;
	uint16_t x399 = 23U;
	volatile uint64_t x400 = 24732334094LLU;
	static volatile int32_t t99 = -6011561;

    t99 = (((x397|x398)==x399)>x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x401 = INT64_MAX;
	int64_t x404 = -12520625358LL;

    t100 = (((x401|x402)==x403)>x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x405 = INT8_MIN;
	int64_t x406 = INT64_MAX;
	int8_t x408 = INT8_MIN;
	volatile int32_t t101 = 2;

    t101 = (((x405|x406)==x407)>x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint32_t x410 = 181U;
	int64_t x411 = 28862615LL;
	int16_t x412 = 24;
	volatile int32_t t102 = 361240776;

    t102 = (((x409|x410)==x411)>x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint32_t x413 = UINT32_MAX;
	int32_t x414 = INT32_MIN;
	volatile int8_t x415 = INT8_MAX;
	static volatile int32_t t103 = -851216386;

    t103 = (((x413|x414)==x415)>x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x417 = UINT16_MAX;
	int64_t x418 = INT64_MIN;
	uint32_t x419 = 0U;
	static int32_t t104 = 125047;

    t104 = (((x417|x418)==x419)>x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x421 = 97607723451672LLU;
	int8_t x422 = -3;
	int32_t x423 = INT32_MIN;
	static int8_t x424 = 1;
	volatile int32_t t105 = -1533;

    t105 = (((x421|x422)==x423)>x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = INT64_MIN;
	static int64_t x426 = INT64_MIN;
	static int32_t x427 = INT32_MIN;
	volatile int32_t t106 = 0;

    t106 = (((x425|x426)==x427)>x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x429 = INT32_MIN;
	volatile uint32_t x431 = 4U;
	volatile int32_t t107 = 3;

    t107 = (((x429|x430)==x431)>x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = INT16_MIN;
	int64_t x434 = INT64_MIN;
	uint16_t x436 = 36U;
	int32_t t108 = -18917;

    t108 = (((x433|x434)==x435)>x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x437 = -1;
	int32_t x438 = -5;
	uint16_t x440 = UINT16_MAX;
	volatile int32_t t109 = -5;

    t109 = (((x437|x438)==x439)>x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x441 = 2;
	int16_t x442 = -1;
	int16_t x443 = -1;
	static volatile int32_t x444 = -22965;

    t110 = (((x441|x442)==x443)>x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x445 = -17;
	int8_t x446 = INT8_MAX;
	int8_t x447 = INT8_MIN;
	static uint32_t x448 = 26U;
	static volatile int32_t t111 = 0;

    t111 = (((x445|x446)==x447)>x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x449 = 1;
	static int8_t x450 = INT8_MAX;
	int16_t x451 = INT16_MIN;
	int32_t x452 = -1;

    t112 = (((x449|x450)==x451)>x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x453 = 7703630382753LLU;
	int8_t x454 = -12;
	int8_t x456 = -3;
	volatile int32_t t113 = 1;

    t113 = (((x453|x454)==x455)>x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x457 = INT64_MAX;
	int8_t x460 = 30;
	int32_t t114 = 2;

    t114 = (((x457|x458)==x459)>x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x461 = INT32_MAX;
	int16_t x462 = INT16_MIN;
	volatile uint8_t x463 = 1U;
	int8_t x464 = INT8_MAX;
	int32_t t115 = 1;

    t115 = (((x461|x462)==x463)>x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = INT32_MIN;
	volatile int64_t x466 = 2207169LL;
	uint16_t x468 = 2463U;

    t116 = (((x465|x466)==x467)>x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x469 = 192083887U;
	uint16_t x470 = 6883U;
	uint16_t x471 = 1913U;

    t117 = (((x469|x470)==x471)>x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x473 = 5;
	int64_t x474 = -71687229548717038LL;
	volatile uint32_t x476 = 3550405U;
	volatile int32_t t118 = -243;

    t118 = (((x473|x474)==x475)>x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x477 = UINT64_MAX;
	int16_t x478 = -1;
	int64_t x479 = INT64_MIN;
	volatile int64_t x480 = INT64_MIN;
	volatile int32_t t119 = -27839;

    t119 = (((x477|x478)==x479)>x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x481 = -1;
	volatile int32_t x483 = 0;
	int8_t x484 = 19;
	volatile int32_t t120 = 96;

    t120 = (((x481|x482)==x483)>x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x485 = INT32_MIN;
	int8_t x487 = INT8_MIN;
	int64_t x488 = INT64_MIN;
	volatile int32_t t121 = 11;

    t121 = (((x485|x486)==x487)>x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x490 = -1;
	int16_t x491 = 94;
	static uint32_t x492 = 1424511U;

    t122 = (((x489|x490)==x491)>x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x494 = 0LLU;
	int8_t x496 = INT8_MIN;
	int32_t t123 = 13;

    t123 = (((x493|x494)==x495)>x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x498 = -51;
	int8_t x499 = INT8_MIN;
	int64_t x500 = INT64_MIN;
	volatile int32_t t124 = -151911;

    t124 = (((x497|x498)==x499)>x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x502 = 3U;
	int64_t x504 = INT64_MIN;

    t125 = (((x501|x502)==x503)>x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x507 = -1;
	volatile uint16_t x508 = 39U;
	volatile int32_t t126 = 5091;

    t126 = (((x505|x506)==x507)>x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint16_t x509 = 3684U;
	uint32_t x510 = 258045616U;
	int16_t x511 = 2;
	volatile int16_t x512 = INT16_MIN;
	int32_t t127 = -1;

    t127 = (((x509|x510)==x511)>x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x513 = -1;
	uint64_t x514 = 6561999LLU;
	int32_t x515 = INT32_MIN;
	int32_t x516 = 288;
	static volatile int32_t t128 = -754469;

    t128 = (((x513|x514)==x515)>x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile uint16_t x517 = 6U;
	uint64_t x518 = UINT64_MAX;
	uint32_t x519 = 1731U;
	static volatile int32_t t129 = 788;

    t129 = (((x517|x518)==x519)>x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x521 = INT32_MIN;
	uint64_t x522 = 1383299870632607LLU;
	int32_t x524 = INT32_MIN;
	static int32_t t130 = 9;

    t130 = (((x521|x522)==x523)>x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x525 = INT64_MAX;
	int64_t x526 = 14823300508059274LL;
	uint16_t x527 = UINT16_MAX;
	static volatile int32_t x528 = -1;
	static int32_t t131 = 6926;

    t131 = (((x525|x526)==x527)>x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = INT8_MIN;
	uint8_t x531 = 7U;
	int64_t x532 = INT64_MAX;

    t132 = (((x529|x530)==x531)>x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint16_t x533 = 27491U;
	int32_t t133 = 5;

    t133 = (((x533|x534)==x535)>x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x537 = INT8_MAX;
	int32_t x538 = 818072;
	uint8_t x539 = UINT8_MAX;
	int16_t x540 = INT16_MIN;

    t134 = (((x537|x538)==x539)>x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x543 = INT16_MIN;

    t135 = (((x541|x542)==x543)>x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x545 = INT8_MIN;
	uint64_t x546 = UINT64_MAX;
	static uint16_t x547 = UINT16_MAX;

    t136 = (((x545|x546)==x547)>x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x549 = INT16_MAX;
	static int16_t x550 = -1;
	volatile int32_t x551 = 12034;
	int64_t x552 = 4955LL;

    t137 = (((x549|x550)==x551)>x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile uint16_t x553 = 2344U;
	volatile uint16_t x554 = 3611U;
	uint8_t x555 = UINT8_MAX;
	static volatile int32_t t138 = 715499099;

    t138 = (((x553|x554)==x555)>x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint32_t x557 = UINT32_MAX;
	int32_t x558 = -860066;
	volatile uint16_t x559 = 21947U;
	int32_t x560 = -32236;

    t139 = (((x557|x558)==x559)>x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x561 = INT32_MAX;
	volatile uint8_t x562 = 34U;
	int32_t x563 = -1;
	uint32_t x564 = 495442394U;

    t140 = (((x561|x562)==x563)>x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x566 = INT16_MAX;
	int64_t x567 = INT64_MAX;

    t141 = (((x565|x566)==x567)>x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint8_t x570 = 24U;
	int64_t x572 = INT64_MAX;
	int32_t t142 = -760554;

    t142 = (((x569|x570)==x571)>x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x573 = 558U;
	uint64_t x575 = 154752626373LLU;
	volatile int32_t t143 = 27424;

    t143 = (((x573|x574)==x575)>x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x578 = UINT64_MAX;
	int8_t x579 = INT8_MIN;
	int32_t x580 = INT32_MIN;
	int32_t t144 = 132558;

    t144 = (((x577|x578)==x579)>x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x581 = 3U;
	uint64_t x583 = 151648271974235LLU;
	int16_t x584 = 71;
	volatile int32_t t145 = 1;

    t145 = (((x581|x582)==x583)>x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = INT16_MIN;
	volatile int8_t x586 = INT8_MIN;
	int16_t x587 = INT16_MIN;
	static uint32_t x588 = 29397054U;

    t146 = (((x585|x586)==x587)>x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x589 = 27441U;
	uint64_t x590 = UINT64_MAX;
	int64_t x591 = 491705LL;
	int32_t x592 = INT32_MIN;
	int32_t t147 = -14704;

    t147 = (((x589|x590)==x591)>x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = INT32_MIN;
	static volatile int8_t x594 = 4;
	int64_t x595 = -1LL;
	uint8_t x596 = UINT8_MAX;
	static int32_t t148 = 3994;

    t148 = (((x593|x594)==x595)>x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x597 = INT64_MIN;
	static int64_t x598 = INT64_MIN;
	int8_t x599 = INT8_MIN;
	uint16_t x600 = UINT16_MAX;
	int32_t t149 = 474;

    t149 = (((x597|x598)==x599)>x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint64_t x601 = UINT64_MAX;
	static uint32_t x603 = UINT32_MAX;

    t150 = (((x601|x602)==x603)>x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int32_t x605 = -464461700;
	volatile int16_t x606 = INT16_MAX;
	int32_t t151 = -6572;

    t151 = (((x605|x606)==x607)>x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x609 = INT16_MAX;
	static int32_t x610 = INT32_MAX;
	int64_t x611 = 138565088561LL;
	int16_t x612 = INT16_MIN;
	static volatile int32_t t152 = 12638542;

    t152 = (((x609|x610)==x611)>x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x613 = INT64_MIN;
	uint64_t x614 = UINT64_MAX;
	static int8_t x615 = 9;
	int8_t x616 = INT8_MIN;
	int32_t t153 = -410057841;

    t153 = (((x613|x614)==x615)>x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x617 = -1LL;
	static int64_t x618 = INT64_MIN;
	int16_t x619 = -696;
	static uint64_t x620 = UINT64_MAX;

    t154 = (((x617|x618)==x619)>x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x622 = INT16_MIN;
	int32_t x623 = -1;

    t155 = (((x621|x622)==x623)>x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x625 = -80;
	int32_t x626 = -383;
	int32_t x627 = INT32_MIN;
	volatile uint32_t x628 = 44628U;
	volatile int32_t t156 = 686018;

    t156 = (((x625|x626)==x627)>x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x629 = -1656415;
	int8_t x630 = 6;
	int64_t x631 = INT64_MAX;
	volatile int32_t t157 = -14508599;

    t157 = (((x629|x630)==x631)>x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint16_t x633 = 2613U;
	int16_t x634 = -43;
	uint8_t x635 = 40U;
	volatile int16_t x636 = -1;
	volatile int32_t t158 = 336;

    t158 = (((x633|x634)==x635)>x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x637 = INT16_MIN;
	int8_t x638 = INT8_MIN;
	uint8_t x639 = 61U;
	volatile int32_t x640 = -39443;
	volatile int32_t t159 = 40114;

    t159 = (((x637|x638)==x639)>x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = 1;
	uint16_t x642 = 13U;
	static uint8_t x643 = 0U;
	int32_t x644 = INT32_MIN;
	int32_t t160 = 6371;

    t160 = (((x641|x642)==x643)>x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x645 = INT32_MIN;
	int8_t x646 = INT8_MAX;
	static int32_t x647 = 1;

    t161 = (((x645|x646)==x647)>x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x651 = -1;
	int8_t x652 = -22;
	int32_t t162 = -2609;

    t162 = (((x649|x650)==x651)>x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x653 = 94653971585LLU;
	int16_t x654 = INT16_MIN;
	volatile int8_t x656 = INT8_MIN;
	int32_t t163 = 0;

    t163 = (((x653|x654)==x655)>x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x657 = -601280769021LL;
	uint32_t x658 = 72U;
	volatile int64_t x659 = INT64_MIN;

    t164 = (((x657|x658)==x659)>x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x662 = INT8_MIN;
	uint16_t x663 = 29U;
	int32_t x664 = -1;
	int32_t t165 = 37038;

    t165 = (((x661|x662)==x663)>x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x665 = -1;
	int8_t x666 = INT8_MIN;
	volatile int32_t x667 = -1;
	static int32_t t166 = 1;

    t166 = (((x665|x666)==x667)>x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x669 = 66U;
	int32_t x670 = -2;
	uint64_t x671 = UINT64_MAX;
	int32_t t167 = 84399444;

    t167 = (((x669|x670)==x671)>x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = INT8_MIN;
	static int16_t x674 = -30;
	int8_t x675 = -1;
	int8_t x676 = INT8_MIN;
	int32_t t168 = 43257;

    t168 = (((x673|x674)==x675)>x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    

    t169 = (((x677|x678)==x679)>x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x681 = 440806U;
	static int32_t x682 = INT32_MIN;
	volatile int32_t t170 = -26569008;

    t170 = (((x681|x682)==x683)>x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x685 = INT16_MAX;
	static int8_t x687 = -1;
	static volatile int64_t x688 = -7LL;

    t171 = (((x685|x686)==x687)>x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint32_t x689 = 60U;
	int16_t x692 = -2;

    t172 = (((x689|x690)==x691)>x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x695 = UINT8_MAX;
	volatile int8_t x696 = -1;
	int32_t t173 = 24;

    t173 = (((x693|x694)==x695)>x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x697 = 232;
	volatile uint8_t x698 = 71U;
	int32_t x699 = 3549849;
	volatile int64_t x700 = 25887303596LL;
	int32_t t174 = 158;

    t174 = (((x697|x698)==x699)>x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x701 = INT64_MIN;
	volatile int16_t x702 = INT16_MIN;
	uint32_t x703 = UINT32_MAX;
	static volatile uint32_t x704 = 67710U;
	volatile int32_t t175 = 946736803;

    t175 = (((x701|x702)==x703)>x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x706 = INT8_MAX;
	int32_t x707 = INT32_MIN;
	int8_t x708 = INT8_MIN;
	int32_t t176 = -2974;

    t176 = (((x705|x706)==x707)>x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = -30;
	volatile uint16_t x710 = 83U;
	static uint8_t x711 = UINT8_MAX;
	int8_t x712 = 3;
	volatile int32_t t177 = -366;

    t177 = (((x709|x710)==x711)>x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x713 = -1;
	int32_t x714 = INT32_MAX;
	static volatile int8_t x715 = INT8_MAX;
	volatile int16_t x716 = -1;
	static int32_t t178 = 12;

    t178 = (((x713|x714)==x715)>x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x717 = INT8_MIN;
	volatile int64_t x718 = -1LL;
	int64_t x720 = INT64_MIN;
	int32_t t179 = 243;

    t179 = (((x717|x718)==x719)>x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x721 = INT64_MAX;
	int8_t x723 = 0;
	int8_t x724 = INT8_MIN;

    t180 = (((x721|x722)==x723)>x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = INT32_MIN;
	uint64_t x727 = 2171964422904290LLU;
	uint32_t x728 = 3594U;
	int32_t t181 = -12;

    t181 = (((x725|x726)==x727)>x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = -1LL;
	int16_t x730 = 1;
	int64_t x731 = INT64_MIN;
	volatile int32_t t182 = -2625;

    t182 = (((x729|x730)==x731)>x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x733 = 662U;
	int32_t x734 = INT32_MIN;
	uint64_t x735 = UINT64_MAX;
	static int64_t x736 = 1LL;
	volatile int32_t t183 = 0;

    t183 = (((x733|x734)==x735)>x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = -5;
	volatile int32_t x738 = 21674182;
	static uint16_t x739 = 17U;
	int16_t x740 = INT16_MAX;
	volatile int32_t t184 = 93350680;

    t184 = (((x737|x738)==x739)>x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x742 = 1;
	uint8_t x743 = 4U;
	int32_t x744 = INT32_MIN;

    t185 = (((x741|x742)==x743)>x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x745 = INT16_MIN;
	int16_t x746 = INT16_MIN;
	uint16_t x747 = 1U;
	int64_t x748 = INT64_MAX;
	int32_t t186 = 4229690;

    t186 = (((x745|x746)==x747)>x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = INT32_MAX;
	static uint8_t x751 = UINT8_MAX;
	uint32_t x752 = 2472622U;
	int32_t t187 = -51;

    t187 = (((x749|x750)==x751)>x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x754 = INT16_MAX;
	static uint8_t x755 = UINT8_MAX;
	static volatile int32_t t188 = 57;

    t188 = (((x753|x754)==x755)>x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint64_t x757 = UINT64_MAX;
	int8_t x758 = -1;
	static int16_t x759 = INT16_MIN;
	volatile int32_t x760 = -892;

    t189 = (((x757|x758)==x759)>x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = INT8_MAX;
	static volatile int8_t x762 = -1;
	int16_t x763 = INT16_MIN;
	volatile int8_t x764 = INT8_MAX;
	static volatile int32_t t190 = -4;

    t190 = (((x761|x762)==x763)>x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x765 = 3U;
	uint64_t x766 = 3544319LLU;
	static uint64_t x768 = 255636125853LLU;
	int32_t t191 = -916;

    t191 = (((x765|x766)==x767)>x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int16_t x769 = -1;
	int32_t x770 = INT32_MAX;
	static volatile int32_t t192 = 0;

    t192 = (((x769|x770)==x771)>x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x773 = 2027U;
	volatile int64_t x774 = -1LL;
	volatile uint32_t x776 = UINT32_MAX;
	volatile int32_t t193 = 19669;

    t193 = (((x773|x774)==x775)>x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint16_t x777 = UINT16_MAX;
	uint32_t x778 = 32997609U;
	int64_t x779 = INT64_MAX;
	static int32_t t194 = -16900;

    t194 = (((x777|x778)==x779)>x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x781 = INT16_MIN;
	static int8_t x782 = -1;
	uint8_t x783 = 103U;
	int64_t x784 = INT64_MIN;

    t195 = (((x781|x782)==x783)>x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = -1;
	int64_t x787 = -1LL;
	int32_t x788 = INT32_MIN;
	int32_t t196 = -375645;

    t196 = (((x785|x786)==x787)>x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x789 = INT64_MAX;
	static uint8_t x791 = 15U;

    t197 = (((x789|x790)==x791)>x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x794 = 536533323614LL;
	uint16_t x795 = 1U;
	uint8_t x796 = UINT8_MAX;

    t198 = (((x793|x794)==x795)>x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x797 = 77U;
	volatile int16_t x798 = INT16_MIN;
	static int8_t x799 = INT8_MIN;
	volatile int32_t x800 = INT32_MIN;
	static int32_t t199 = -1;

    t199 = (((x797|x798)==x799)>x800);

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

